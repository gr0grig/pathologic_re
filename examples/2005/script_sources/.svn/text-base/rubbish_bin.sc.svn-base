include std.sci

maintask TRubbishBin
{
	void init(void) {
		@SetVisibility(true);
		GenerateItems();
		float fWaitTime;
		@rand(fWaitTime, 13);
		@GameSleep(fWaitTime + 1);
		for (;;) {
			GenerateItems();
			@rand(fWaitTime, 2);
			@GameSleep(fWaitTime + 12);
		}
	}

	void GenerateItems(void) {
		@RemoveAllItems();
		GenerateRandomItem("bottle_empty", 1, 2, 1);
		GenerateRandomItem("watch", 1, 20);
		GenerateRandomItem("razor", 1, 12);
		GenerateRandomItem("needle", 1, 12);
		GenerateRandomItem("gold_ring", 1, 60);
	}

	void OnUse(object actor) {
		if (!ContainerUseEnabled())
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
