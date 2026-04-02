include std.sci

task TContainerBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		if (!actor || !ContainerUseEnabled())
			return;
		bool bOnGround;
		actor->IsOnGround(bOnGround);
		if (bOnGround) {
			disable OnUse;
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)			
				@Barter(actor);
			enable OnUse;
		}
	}
}

task TCorpseContainerBase
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnUse(object actor) {
		if (!actor || !ContainerUseEnabled())
			return;
		bool bOnGround;
		actor->IsOnGround(bOnGround);
		if (bOnGround) {
			disable OnUse;
			bool bActive;
			@IsOverrideActive(bActive);
			if (!bActive)			
				@WorkWithCorpse(actor);
			enable OnUse;
		}
	}
}
