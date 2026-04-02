include item_slow.sci

maintask TEffect : TSlow
{
	void init(void) {
		ModPropertyF("health", c_fHealthIncrease, 0, 1);
		ReportHealthChange(c_fHealthIncrease);
		ModPropertyF("tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);
		
		super.init(c_fWorkTime);
	}
	
	bool Tick(float fDeltaTime) {
		if (IsSleeping()) {
			ModPropertyF("health", fDeltaTime * c_fHealthProgress, 0, 1);
			ModPropertyF("tiredness", fDeltaTime * c_fTirednessProgress, 0, 1);
		}
		return false;
	}
}
