include std.sci

task TContainerStealBase
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
			if (!bActive) {
				int iCount;
				@GetItemCount(iCount);
				if (iCount) {
					object scene;
					@GetScene(scene);
					@BroadcastSteal(actor, scene);
				}
				@Barter(actor);
			}
			enable OnUse;
		}
	}
}
