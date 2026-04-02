include std.sci

maintask TIntroExit
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		@TriggerWorld("exit");
	}
}