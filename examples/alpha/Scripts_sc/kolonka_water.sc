event OnGameTime 9;
event OnUse 0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		f_1b_a0_v();
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
		tv0 = false;
		do {
			@Hold();
		} while (!tv0);
		@SetUsable(false);
	}

	void OnGameTime(int a0, float a1)
	{
		if (a0 == 0) {
			@StopGroup0();
			tv0 = true;
		}
	}

	void f_1b_a0_v(void)
	{
	}

	void OnUse(object a0)
	{
		int L0;
		int L1;
		int L2;
		int L3;
		float L4;
		int L5;
		@GetInvItemByName(L0, "bottle_empty");
		@GetInvItemProperty(L1, L0, "Category");
		a0->GetItemCount(L2, L1);
		L3 = -1;
		for (L5 = 0; L5 < L2; L5++) {
			object L6;
			int L7;
			a0->GetItem(L6, L5, L1);
			L6->GetItemID(L7);
			if (L7 == L0) {
				bool L8;
				L6->HasProperty(L8, "disease");
				if (!L8) {
					if (L3 == -1 || L4 > 0) {
						L3 = L5;
						L4 = 0;
					}
				} else {
					float L9;
					L6->GetProperty(L9, "disease");
					if (L3 == -1 || L9 < L4) {
						L3 = L5;
						L4 = L9;
					}
				}
			}
		}
		if (L3 != -1) {
			object L10;
			disable OnUse;
			a0->RemoveItem(L3, 1, L1);
			@CreateInvItem(L10);
			L10->SetItemName("bottle_water");
			L10->SetProperty("disease", L4);
			f_75_a3_v(a0, L10, 1);
			@PlaySound("fill");
			@SetVariable("player_exchange", 1);
			@Sleep(1);
			enable OnUse;
		}
	}
}

void f_75_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	}
}

