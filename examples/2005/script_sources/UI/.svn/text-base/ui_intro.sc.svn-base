include ui_events.sci
include ui_text_res.sci
include ui_keys.sci

const string c_strIntroFont = "intro_font";

const float c_fTextColR = 62.0 / 255.0;
const float c_fTextColG = 31.0 / 255.0;
const float c_fTextColB = 30.0 / 255.0;

const int c_iDanko = 1;
const int c_iBurah = 2;
const int c_iKlara = 3;
const int c_iIntro = 0;
const int c_iCredits = 4;

const int c_iTextMargin = 8;

maintask TIntroText {
	var float fTime, fOffset;
	var int iWndXSize, iWndYSize, iHeight, iMarginX, iPlayer, iIntro, iPlaylistPos;
	var string strText;
	var bool bInited, bSlowDown, bSpeedUp;
	var object playlist;
	
	void init(void) {
		bInited = false;
		bSlowDown = false;
		bSpeedUp = false;
		fOffset = 0;
			
		iMarginX = 0;
		fTime = 0;
		
		@GetWindowSize(iWndXSize, iWndYSize);	
		
		@EnableClipping(true);
		@SetOwnerDraw(true);
		@ShowCursor(false);
		@CaptureKeyboard();
		@SetNeedUpdate(true);
		
		InitPicturePlayList();
		UpdatePicturePlayList();
		
		@ProcessEvents();
	}
	
	bool IsSoundPlaying(void) { 
		bool bPlaying;
		if (iPlayer == c_iDanko) {
			@IsSoundPlaying(bPlaying, "intro_danko");
		}
		else
		if (iPlayer == c_iBurah) {
			@IsSoundPlaying(bPlaying, "intro_burah");
		}
		if (iPlayer == c_iKlara) {
			@IsSoundPlaying(bPlaying, "intro_klara");
		}
		if (iPlayer == c_iIntro) {
			if (iIntro)
				@IsSoundPlaying(bPlaying, "intro1");
			else
				@IsSoundPlaying(bPlaying, "intro2");
		}
		return bPlaying;
	}	
	
	
	void Init(int _iPlayer) {
		iPlayer = _iPlayer;
		if (iPlayer == c_iDanko) {
			@GetStringByID(strText, c_iTID_DankoIntro);
			@PlaySound("intro_danko");
		}
		else 
		if (iPlayer == c_iBurah) {
			@GetStringByID(strText, c_iTID_BurahIntro);
			@PlaySound("intro_burah");
		}
		else
		if (iPlayer == c_iKlara) {
			@GetStringByID(strText, c_iTID_KlaraIntro);
			@PlaySound("intro_klara");
		}
		else 
		if (iPlayer == c_iIntro) {
			@irand(iIntro, 2);
			if (iIntro) {
				@GetStringByID(strText, c_iTID_Intro1);
				@PlaySound("intro1");
			}
			else {
				@GetStringByID(strText, c_iTID_Intro2);
				@PlaySound("intro2");
			}
		}
		else {
			@GetStringByID(strText, c_iTID_Credits);
		}

		@GetTextHeightInWidth(iHeight, c_strIntroFont, iWndXSize - iMarginX * 2 - c_iTextMargin, strText);
		
		bInited = true;
	}
	
	void OnKeyDown(int iKey) {
		if (iKey == VK_DOWN) {
			bSlowDown = true;
		}
		else if (iKey == VK_UP) {
			bSpeedUp = true;
		}
		else
			Exit();
	}
	
	void OnKeyUp(int iKey) {
		if (iKey == VK_DOWN) {
			bSlowDown = false;
		}
		else if (iKey == VK_UP) {
			bSpeedUp = false;
		}
	}
	
	void Exit(void) {
		@SendMessageToParent(0);
		bInited = false;
		
		if (iPlayer == c_iDanko) {
			@PauseSound("intro_danko");
		}
		else 
		if (iPlayer == c_iBurah) {
			@PauseSound("intro_burah");
		}
		else
		if (iPlayer == c_iKlara) {
			@PauseSound("intro_klara");
		}
		else {
			if (iIntro) {
				@PauseSound("intro1");
			}
			else {
				@PauseSound("intro2");
			}		
		}
	}
	
	void OnUpdate(float fDeltaTime) {
		if (!bInited)
			return;
		
		fTime += fDeltaTime;
		
		float fSpeed = 16.0;
		if (c_iDanko == iPlayer) {
			fSpeed = 16.0;
		}
		else
		if (c_iBurah == iPlayer) {
			fSpeed = 16.0;
		}
		else		
		if (c_iKlara == iPlayer) {
			fSpeed = 11.0;
		}
		
		if (bSpeedUp) {
			fSpeed *= 4.0;
		}
		if (bSlowDown) {
			fSpeed /= 4.0;
		}
		
		fOffset += fDeltaTime * fSpeed;
		
		if ((fOffset > iWndYSize + iHeight) && !IsSoundPlaying()) { 
			Exit();
		}
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "ul" || strSender == "bl" || strSender == "br" || strSender == "ur") {
			UpdatePicturePlayList();
			return;
		}
		
		if (!bInited)
			Init(iMessage);
	}
	
	void OnDraw() {
		if (!bInited)
			return;
		int iOffset = fOffset;
		float fDelta = fOffset - iOffset;
		
		int iHeight;
		@PrintInWidth(iHeight, c_strIntroFont, iMarginX + c_iTextMargin / 2, iWndYSize - iOffset, iWndXSize - iMarginX * 2 - c_iTextMargin, strText, c_fTextColR, c_fTextColG ,c_fTextColB, 1 - fDelta);
		@PrintInWidth(iHeight, c_strIntroFont, iMarginX + c_iTextMargin / 2, iWndYSize - iOffset - 1, iWndXSize - iMarginX * 2 - c_iTextMargin, strText, c_fTextColR, c_fTextColG ,c_fTextColB, fDelta);
	}	
	
	void InitPicturePlayList() {
		iPlaylistPos = 0;
		@CreateStringVector(playlist);
		playlist->add("ul");
		playlist->add("ur");
		playlist->add("br");
		playlist->add("ul");
		playlist->add("br");
		playlist->add("ul");
		playlist->add("bl");
		playlist->add("ul");
	}
	
	void UpdatePicturePlayList() {
		string strWnd;
		playlist->get(strWnd, iPlaylistPos);
		@SendMessage(0, strWnd);
		iPlaylistPos++;
		int iSize;
		playlist->size(iSize);
		if (iPlaylistPos >= iSize)
			iPlaylistPos -= iSize;
	}
}
