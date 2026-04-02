include std.sci
include item_slow.sci

maintask TEffect: TSlow
{
	void init(void) {
		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			@Trace(-fDeltaTime / 4.0);
			ModPropertyF("health", -fDeltaTime / 2.0 , 0, 1);
			ReportHealthChange(-fDeltaTime / 3.0);
		}
	}
}
