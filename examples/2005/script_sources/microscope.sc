include std.sci

maintask TMicroscope
{
	void init(void) {
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		disable OnUse;
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {		
			@ShowWindow("microscope.xml", false);
			enable OnUse;
		}
	}
}
