include std.sci
include water_source.sci

const float c_fHungerIncrease = -0.01;
const float c_fTirednessIncrease = 0.03;

maintask TFountain
{
	var bool m_bStop;

	void init(void) {
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
	
	void OnUse(object actor) {
		disable OnUse;
		
		ModPropertyF(actor, "hunger", c_fHungerIncrease, 0, 1);
		ReportHungerChange(c_fHungerIncrease);
		ModPropertyF(actor, "tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);
		@PlaySound("drink");
		@Sleep(1);
		
		enable OnUse;
	}
}
