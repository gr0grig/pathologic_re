include std.sci
include item_slow.sci

const float c_fRepDecFullTime = 36;

maintask TEffect: TSlow
{
	void init(void) {
		super.init(24 * 12);
	}
	
	bool Tick(float fDeltaTime) {
		if (!IsSleeping()) {
			float fRepChange = -fDeltaTime / c_fRepDecFullTime;
			ModPropertyF("reputation", fRepChange, 0, 1);
			ReportReputationChange(fRepChange); // to show player the process
		}
		return false;
	}
}
