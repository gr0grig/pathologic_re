include std.sci

maintask TFactory
{
	var bool c_bBurah;
	var object m_Burah;

	void init(void) {
		c_bBurah = false;
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		if (!c_bBurah) {
			float fGameTime;
			@GetGameTime(fGameTime);
			if (fGameTime >= 10 * 24 && fGameTime < 11 * 24) {
				c_bBurah = true;
				m_Burah = SpawnActor(self(), "pt_d11q03_Burah", "NPC_Burah", "d11q03_Burah.xml");
			}
		}
		else {
			float fGameTime;
			@GetGameTime(fGameTime);
			if (fGameTime >= 11 * 24) {
				if (m_Burah)
					@RemoveActor(m_Burah);
					
				c_bBurah = false;
			}
		}
	}
}
