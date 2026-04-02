include std.sci

task TNPCBase
{
	void init(void) {
		if (!IsLoaded()) {
			TWaitForLoad{};
		}
		for (;;) {
			PlayHeadAnimation("Neutral");
			@lshWaitForAnimEnd();
		}
		@Hold();
	}
	
	void OnUnload() {
		TWaitForLoad{};
	}
	
	void OnUse(object actor) {
		bool bActive;
		@IsOverrideActive(bActive);
		if (!bActive) {
			disable OnUse;
			RotateToActor(actor);
			enable OnUse;
			PerformUse(actor);
		}
	}
}
