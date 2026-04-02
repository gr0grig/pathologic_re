include std.sci
include water_source.sci

maintask TKolonka : TWaterSource
{
	var bool m_bStop;

	void init(void) {
		super.init();
		
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
		
		m_bStop = false;
		do {
			@Hold();
		} while (!m_bStop);
		@SetUsable(false);
	}
	
	void OnGameTime(int id, float fTIme) {
		if (id == 0) {
			@StopGroup0();
			m_bStop = true;
		}
	}
}
