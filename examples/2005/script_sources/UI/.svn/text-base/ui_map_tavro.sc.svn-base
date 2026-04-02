include ui_events.sci

maintask UI_GameButton
{	
	var bool m_bToMapMode, m_bMouseInside;
	
	void init(void) {
		DontHighlight();
		@ProcessEvents();
	}
	
	void OnLButtonDown(int x, int y)
	{
		@SendMessageToParent(m_bToMapMode ? 1 : 0);
	}
	
	void OnMessage(int iMessage, string strSender, object data) {
		if (strSender == "map") {
			m_bToMapMode = (iMessage != 0);
			if (m_bMouseInside)
				HightLight();
			else
				DontHighlight();	
		}
	}

	void OnMouseEnter(void) 
	{
		HightLight();
		m_bMouseInside = true;
	}	
	
	void OnMouseLeave(void)
	{
		DontHighlight();
		m_bMouseInside = false;
	}	
	
	void HightLight(void) {
		if (m_bToMapMode)
			@SetBackground("to_map_h");
		else
			@SetBackground("to_quest_h");
	}	
	
	void DontHighlight(void) {
		if (m_bToMapMode)
			@SetBackground("to_map");
		else
			@SetBackground("to_quest");
	}
}
