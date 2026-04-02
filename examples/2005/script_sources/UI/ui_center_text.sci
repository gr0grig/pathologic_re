include ui_events.sci
include ui_std.sci

const int c_iDayChangeTextIDBase = 300;
//const float fShowTime = 10;

const float c_fColR = 1;
const float c_fColG = 1;
const float c_fColB = 1;

const float c_fFadeTime = 1;

task UI_CenterText
{
	var int iWindowSizeX, iWindowSizeY, iOffset;
	var string strDayChange;
	var float fTimeLeft;
	
	void init(int iStringID, float fShowTime) {
		string str;
		@GetStringByID(str, iStringID);
		initbystring(str, fShowTime);
	}

	void initbystring(string str, float fShowTime) {
		strDayChange = str;
		fTimeLeft = fShowTime;
		@GetWindowSize(iWindowSizeX, iWindowSizeY);
		
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		if (fTimeLeft <= 0)
			return;
			
		float fAlpha;
		if (fTimeLeft < c_fFadeTime)
			fAlpha = fTimeLeft / c_fFadeTime;
		else
			fAlpha = 1;
		
		int iHeight;
		@GetTextHeightInWidth(iHeight, "default", iWindowSizeX, strDayChange);
		@PrintInWidth(iHeight, "default", 0, (iWindowSizeY - iHeight) / 2, iWindowSizeX, strDayChange, c_fColR, c_fColG, c_fColB, fAlpha);
	}
	
	void OnUpdate(float fDeltaTime) {
		fTimeLeft -= fDeltaTime;
		if (fTimeLeft <= 0 && CanExit()) 
			@StopEventProcessing();
	}
	
	bool CanExit(void) { return true; }
}
