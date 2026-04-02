include std.sci
include item_slow.sci

maintask TEffect: TSlow
{
	void init(void) {
		super.init(12);
	}
	
	bool Tick(float fDeltaTime) {
		ModPropertyF("hunger", fDeltaTime, 0, 1);
		ReportHungerChange(fDeltaTime * 2); // to show player the process
		return false;
	}

	void OnTrigger(string name) {
		if (name == "b10q01_stop") {
			Stop();
		}
	}
}
