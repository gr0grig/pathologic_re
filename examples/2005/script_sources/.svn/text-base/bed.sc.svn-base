include std.sci

maintask TBed
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive)
			@ActivateSleepMode(actor);
	}
}
