include std.sci

maintask TFactory
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnUnload(void) {
		TriggerActor("quest_b4_01", "factory_unload");
	}
}
