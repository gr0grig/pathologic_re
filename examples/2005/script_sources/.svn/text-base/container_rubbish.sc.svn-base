include std.sci

// CONSTANTS
const float c_fLifeTime = 15;  // in minutes
// CONSTANTS

maintask TContainer
{
	var bool m_bDecay;
	
	void init(void) {
		@TriggerWorld("playsound", "meshok_drop");
		@SetVisibility(true);
		for (;;) {
			m_bDecay = false;
			bool bSuccess;
			while (@Sleep(c_fLifeTime * 60, bSuccess), !bSuccess) ;
			bool bLoaded;
			@IsLoaded(bLoaded);
			if (!bLoaded) {
				@RemoveActor(self());
				return;
			}
			m_bDecay = true;
			@Hold();
		}
	}
	
	void OnUse(object actor) {
		OnInventoryTouch();
		if (!ContainerUseEnabled())
			return;
		@StopGroup0();
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
	
	void OnInventoryAddItem(object item, int id1, int id2, int iContainer) {
		OnInventoryTouch();
	}

	void OnInventoryRemoveItem(object item, int id1, int id2, int iContainer) {
		bool bHasItems;
		@GetItemCount(bHasItems);
		if (!bHasItems) {
			@RemoveActor(self());
		}
		else {
			OnInventoryTouch();
		}
	}

	void OnUnload(void) {
		if (m_bDecay) {
			int iItemCount;
			@GetItemCount(iItemCount);
			for (int i = 0; i < iItemCount; ++i) {
				object item;
				@GetItem(item, i);
				bool bHas;
				item->HasProperty(bHas, "undisposable");
				if (bHas) {
					bool bUnDisp;
					item->GetProperty(bUnDisp, "undisposable");
					if (bUnDisp)
						return;
				}
			}
			@RemoveActor(self());
		}
	}

	void OnInventoryTouch(void) {@StopGroup0();}
}
