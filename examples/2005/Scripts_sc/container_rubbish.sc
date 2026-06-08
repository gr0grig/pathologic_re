event OnUse 0;
event OnInventoryAddItem 33;
event OnInventoryRemoveItem 34;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@TriggerWorld("playsound", "meshok_drop");
		@SetVisibility(true);
		for (; ; ) {
			bool L0;
			bool L1;
			tv0 = false;
			while (@Sleep(900.0, L0), !L0) {
			}
			@IsLoaded(L1);
			if (!L1) {
				@RemoveActor(f_6d_a0_o());
				return;
			}
			tv0 = true;
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		f_6a_a0_v();
		if (!f_73_a0_b()) {
			return;
		}
		@StopGroup0();
		a0->IsOnGround(L0);
		if (L0) {
			bool L1;
			disable OnUse;
			@IsOverrideActive(L1);
			if (!L1) {
				@Barter(a0);
			}
			enable OnUse;
		}
	}

	void OnInventoryAddItem(object a0, int a1, int a2, int a3)
	{
		f_6a_a0_v();
	}

	void OnInventoryRemoveItem(object a0, int a1, int a2, int a3)
	{
		bool L0;
		@GetItemCount(L0);
		if (!L0) {
			@RemoveActor(f_6d_a0_o());
		} else {
			f_6a_a0_v();
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			int L0;
			int L1;
			@GetItemCount(L0);
			for (L1 = 0; L1 < L0; L1 = L1 + 1) {
				object L2;
				bool L3;
				@GetItem(L2, L1);
				L2->HasProperty(L3, "undisposable");
				if (L3) {
					bool L4;
					L2->GetProperty(L4, "undisposable");
					if (L4) {
						return;
					}
				}
			}
			@RemoveActor(f_6d_a0_o());
		}
	}
}

void f_6a_a0_v(void)
{
	@StopGroup0();
}

object f_6d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_73_a0_b(void)
{
	int L0;
	@GetVariable("nouse_container", L0);
	return !L0;
}

