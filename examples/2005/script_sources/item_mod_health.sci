include std.sci

maintask TEffect
{
	void init(void) {
		ModPropertyF("health", c_fHealthIncrease, 0, 1);
		ReportHealthChange(c_fHealthIncrease);
	}
}
