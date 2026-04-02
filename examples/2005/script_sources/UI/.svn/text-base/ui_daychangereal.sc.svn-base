include ui_std.sci
include ui_text_res.sci
include ../game_ext.sci

const float c_fFadeTime = 1;

const float c_fColR = 1;
const float c_fColG = 1;
const float c_fColB = 1;

maintask UI_Daychange
{
	var string strSound;
	var bool m_bAlive, m_bSoundInit;
	var float fTimeLeft;
	var int iWindowSizeX, iWindowSizeY, iOffset, iStringID;
	void init(void) {
		int id;
		int iPlayer = GetPlayer();
		int iDay;// = GetDay() - 1;
		@GetVariable("c_iWM_RealDayChange", iDay);
		iDay--;
		
		string strQuest;
		fTimeLeft = c_fFadeTime;
		if (iPlayer == c_iBranchDanko)
			strQuest = "d" + iDay + "q01";
		else
		if (iPlayer == c_iBranchBurah)
			strQuest = "b" + iDay + "q01";
		else
			strQuest = "k" + iDay + "q01";
				
		int iVal;
		@GetVariable(strQuest, iVal);
		if (iVal == 1000) {
			m_bAlive = true;
			strSound = "alive";
			iStringID = c_iTID_RealDayChangeGood;
		}
		else {
			m_bAlive = false;
			strSound = "dead";
			iStringID = c_iTID_RealDayChangeBad;
		}
		
		@GetWindowSize(iWindowSizeX, iWindowSizeY);
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void OnUpdate(float fDeltaTime) {
		if (!m_bSoundInit) {
			m_bSoundInit = true;
			@PlaySound(strSound);
			return;
		}
		else
		if (IsSoundPlaying())
			return;
			
		fTimeLeft -= fDeltaTime;
		if (fTimeLeft <= 0)
			@DestroyWindow();
	}	
	
	void OnDraw() {
		if (fTimeLeft <= 0)
			return;
			
		string strDayChange;
		@GetStringByID(strDayChange, iStringID);
		float fAlpha = fTimeLeft / c_fFadeTime;
		
		int iHeight;
		@PrintInWidth(iHeight, "default", 0, 0, iWindowSizeX, strDayChange, c_fColR, c_fColG, c_fColB, fAlpha);
		
	}	
	
	bool IsSoundPlaying(void) { 
		bool bPlaying;
		if (m_bAlive)
			@IsSoundPlaying(bPlaying, "alive");
		else
			@IsSoundPlaying(bPlaying, "dead");
			
		return bPlaying;
	}	
}
