include std.sci

// CONSTANTS
const float c_fHungerIncrease = -0.01;
const float c_fTirednessIncrease = 0.03;
const string c_strSound = "drink";
// CONSTANTS

maintask TEffect
{
	void init(void) {
		@PlaySound(c_strSound);
		ModPropertyF("hunger", c_fHungerIncrease, 0, 1);
		ReportHungerChange(c_fHungerIncrease);
		
		float fValue;
		@GetProperty("tiredness", fValue);
		if (fValue + c_fTirednessIncrease > 1) {
			float fDelta = fValue + c_fTirednessIncrease - 1;
			ModPropertyF("health", -fDelta, 0, 1);
			ReportHealthChange(-fDelta);
		}
		
		ModPropertyF("tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);
		
		
		PlayerPutItemByName(self(), "bottle_empty", 1);
	}
}
