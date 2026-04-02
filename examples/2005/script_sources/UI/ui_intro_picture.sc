include ui_events.sci

maintask UI_IntroPicture
{
	var float m_fTimeLeftToShow, m_fShowTime, m_fAlpha;
	var int m_iPic, m_iPicMax, m_iWndXsize, m_iWndYSize;
	var bool m_bDisabled;
	
	void init(void) {
		@GetWindowSize(m_iWndXsize, m_iWndYSize);
		m_bDisabled = true;
		
		m_iPicMax = 0;
		m_iPic = 0;
		while (true) {
			bool bLoaded;
			@IsImageLoaded(bLoaded, m_iPicMax + 1);
			if (!bLoaded)
				break;
			m_iPicMax++;
		}
		
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@ProcessEvents();
	}
	
	void OnDraw() {
		if (!m_bDisabled)
			@StretchBlit(m_iPic + 1, 0, 0, m_iWndXsize, m_iWndYSize, m_fAlpha);
	}	
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "intro")
			GenAppearance();
	}
	
	void OnUpdate(float fDeltaTime) {
		if (m_bDisabled)
			return;
			
		m_fTimeLeftToShow -= fDeltaTime;
		if (m_fTimeLeftToShow > 0) {
			return;
		}
		
		m_fShowTime -= fDeltaTime;
		if (m_fShowTime < 0) {
			m_fAlpha = 1 + m_fShowTime;
			if (m_fShowTime < -1) {
				@SendMessage(0, "intro");	
				m_bDisabled = true;
				return;
			}
		}
		else
			m_fAlpha = -m_fTimeLeftToShow;
			
		if (m_fAlpha > 1)
			m_fAlpha = 1;
	}
	
	void GenAppearance(void) {
		m_bDisabled = false;
		m_fTimeLeftToShow = 1;
		
		@rand(m_fShowTime);
		m_fShowTime = 6 + m_fShowTime * 3;
		m_fAlpha = 0;
		m_iPic++;
		m_iPic = m_iPic % m_iPicMax;
	}
}
