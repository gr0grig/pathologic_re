include std.sci
include item_slow.sci

maintask TEffect: TSlow
{
	void init(void) {
		super.init(12);
	}
	
	bool Tick(float fDeltaTime) {
		ModPropertyF("tiredness", fDeltaTime, 0, 1);
		ReportTirednessChange(fDeltaTime); // to show player the process
		return false;
	}

	void OnTrigger(string name) {
		if (name == "b9q01_stop") {
			Stop();
		}
	}
}
