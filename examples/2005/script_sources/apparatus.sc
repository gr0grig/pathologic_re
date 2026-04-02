include std.sci

maintask TApparatus
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
			@ShowWindow("apparatus.xml", false, false, self());
			enable OnUse;
		}
	}
}
