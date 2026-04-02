include std.sci
include idle_logic.sci

task TBullBase
{
	void init(void) {
		@RemoveEnvelope();
		@RemoveRTEnvelope();

		for (;;) {
			if (!IsLoaded()) {
				TWaitForLoad{};
			}

			TPlayIdle{};
		}
	}
}

task TPlayIdleBase
{
	void init(void) {
		int iIdleType;
		@irand(iIdleType, 3);

		if (!iIdleType) {
			int iCount = GetNormalIdleAnimationCount();
			if (iCount) {
				int iAnim;
				@irand(iAnim, iCount);
				string name = GetNormalIdleAnimation(iAnim);
				@PlayAnimation("all", name);
				PlayAnimationSound(name);
				@WaitForAnimEnd();
			}
		}
		else {
			@PlayAnimation("all", "idle");
			@WaitForAnimEnd();
		}
	}

	void OnUnload(void) {
		@StopAnimation();
	}
}
