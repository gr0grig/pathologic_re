include item_slow.sci

task TAntibiotic
{
	void init(void) {
		float fDisease;
		@GetProperty("disease", fDisease);
		@SetProperty("disease", fDisease * c_fDiseaseRate);
		ReportDiseaseChange(fDisease - fDisease * c_fDiseaseRate);
		
		ModPropertyF("tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);

		ModPropertyF("health", c_fHealthIncrease, 0, 1);
		ReportHealthChange(c_fHealthIncrease);
	}
}

/*
task TAntibiotic : TSlow
{
	void init(void) {
		float fDisease;
		@GetProperty("disease", fDisease);
		@SetProperty("disease", fDisease * c_fDiseaseRate);
		ReportDiseaseChange(fDisease - fDisease * c_fDiseaseRate);
		
		int iDiseaseSpeed;
		@GetProperty("DiseaseSpeed", iDiseaseSpeed);
		@SetProperty("DiseaseSpeed", iDiseaseSpeed * c_iDiseaseSpeedRate);

		super.init(c_fWorkTime);

		@GetProperty("DiseaseSpeed", iDiseaseSpeed);
		if (iDiseaseSpeed % c_iDiseaseSpeedRate)
			@Console_Error("Invalid disease speed: " + iDiseaseSpeed + ", rate: " + c_iDiseaseSpeedRate);
		@SetProperty("DiseaseSpeed", iDiseaseSpeed / c_iDiseaseSpeedRate);
	}
	
	bool Tick(float fDeltaTime) {
		ModPropertyF("health", fDeltaTime * c_fHealthProgress, 0, 1);
		return false;
	}
}
*/