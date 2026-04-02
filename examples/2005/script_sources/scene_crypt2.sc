include std.sci

maintask TScene
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnLoad(void) {
		TriggerActor("quest_b6_03", "crypt2_load");
	}

	void OnUnload(void) {
		TriggerActor("quest_b6_03", "crypt2_unload");
	}
}
