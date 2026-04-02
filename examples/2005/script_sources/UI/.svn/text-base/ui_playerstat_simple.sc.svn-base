include ui_events.sci
include ui_std.sci

const float c_fHelpTime = 1.0;

const float c_fHelpColR = 1.0;
const float c_fHelpColG = 1.0;
const float c_fHelpColB = 1.0;

maintask UI_PlayerStat
{
	var int iHelpTextID;
	var float fHelpTextTime;
	var int iWindowSizeX, iWindowSizeY;
	
	void init(void) {
		disable OnGameMessage;
		@GetWindowSize(iWindowSizeX, iWindowSizeY);
		iHelpTextID = -1;
		enable OnGameMessage;
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void OnGameMessage(int id, object data) {
		if (id == c_iWM_QSave) {
			iHelpTextID = c_iTID_QSave;
			fHelpTextTime = c_fHelpTime;		
		}
	}
	
	void OnUpdate(float fDeltaTime) {
		UpdateHelp(fDeltaTime);
	}
	
	void DrawHelp(void) {
		if (iHelpTextID == -1)
			return;
			
		string strHelp;
		@GetStringByID(strHelp, iHelpTextID);
		float fAlpha = sin(3.14 * fHelpTextTime / c_fHelpTime / 2.0);
		@Print("help", 10, 10, strHelp, c_fHelpColR, c_fHelpColG, c_fHelpColB, fAlpha);
	}
	
	void UpdateHelp(float fDeltaTime) {
		if (iHelpTextID == -1)
			return;
		
		fHelpTextTime -= fDeltaTime;
		if (fHelpTextTime <= 0)
			iHelpTextID = -1;
	}
	
	void OnDraw() {
		DrawHelp();
	}
}
