include std.sci

maintask TDApparatus
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
			@ShowWindow("dapparatus.xml", false, false, self());
			enable OnUse;
		}
	}
}
