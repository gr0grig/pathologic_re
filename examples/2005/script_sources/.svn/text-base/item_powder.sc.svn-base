include std.sci

// CONSTANTS
const float c_fHealthTo = 0.05;
// CONSTANTS

maintask TEffect
{
	void init(void) {
		float fHealth;
		@GetProperty("health", fHealth);
		if (fHealth > c_fHealthTo) {
			@SetProperty("health", c_fHealthTo);
			ReportHealthChange(c_fHealthTo - fHealth);
		}
		
		float fDisease;
		@GetProperty("disease", fDisease);
		@SetProperty("disease", 0);
		ReportDiseaseChange(-fDisease);
	}
}
