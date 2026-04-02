include item_slow.sci

// CONSTANTS
const float c_fImmunityIncrease = 0.05;
const float c_fTirednessIncrease = 0.05;
const float c_fHealthIncrease = 0.05;
const float c_fWorkTime = 12;
const float c_fTirednessProgress = -0.10;
// CONSTANTS

maintask TEffect : TSlow
{
	void init(void) {
		ModPropertyF("health", c_fHealthIncrease, 0, 1);
		ReportHealthChange(c_fHealthIncrease);
		ModPropertyF("immunity", c_fImmunityIncrease, 0, 1);
		ReportImmunityChange(c_fImmunityIncrease);
		ModPropertyF("tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);
		
		super.init(c_fWorkTime);
	}
	
	bool Tick(float fDeltaTime) {
		if (IsSleeping()) {
			ModPropertyF("tiredness", fDeltaTime * c_fTirednessProgress, 0, 1);
		}
		return false;
	}
}
