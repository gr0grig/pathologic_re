include std.sci

maintask TEffect
{
	void init(void) {
		@PlaySound(c_strSound);
		ModPropertyF("health", c_fHealthIncrease, 0, 1);
		ReportHealthChange(c_fHealthIncrease);
		ModPropertyF("immunity", c_fImmunityIncrease, 0, 1);
		ReportImmunityChange(c_fImmunityIncrease);
		ModPropertyF("disease", c_fDiseaseIncrease, 0, 1);
		ReportDiseaseChange(c_fDiseaseIncrease);
		ModPropertyF("hunger", c_fHungerIncrease, 0, 1);
		ReportHungerChange(c_fHungerIncrease);
		ModPropertyF("tiredness", c_fTirednessIncrease, 0, 1);
		ReportTirednessChange(c_fTirednessIncrease);
	}
}
