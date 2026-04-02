include std.sci

maintask TDead
{
	void init(void) {
		@RemoveRTEnvelope();
		@RemoveEnvelope();
		@SetDeathState();
		string name;
		@GetProperty("animation", name);
		@LockAnimationEnd("all", name);
		for (;;) {
			@Hold();
		}
	}
	
	void OnLoad(void) {
		string name;
		@GetProperty("animation", name);
		@LockAnimationEnd("all", name);
	}
}
