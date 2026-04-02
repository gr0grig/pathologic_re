include std.sci
include idle.sci

void OnUnload(void)
{
	TriggerActor("quest_d2_02", "driver_unload");
}

maintask TDriver : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}

	void OnUse(void) {
		// TODO
	}
}
