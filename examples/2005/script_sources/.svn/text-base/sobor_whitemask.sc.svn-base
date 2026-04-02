include std.sci


task TAnimatedIdleBase
{
	void init(string animation) {
		bool bExist;
		@HasAnimation(bExist, "all", animation);
		if (!bExist)
			return;

		@PlayAnimation("all", animation);
		bool bSuccess;
		@WaitForAnimEnd(bSuccess);
		@LockAnimationEnd("all", animation);
	}
}

maintask TWhitemask : TAnimatedIdleBase {
	void init(void) {
		while (true) {
			super.init("sobor_idle");
		}
	}
}
