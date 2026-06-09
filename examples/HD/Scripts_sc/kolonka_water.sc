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
		int L4;
		@GetInvItemByName(L0, "bottle_empty");
		@GetInvItemProperty(L1, L0, "Category");
		a0->GetItemCount(L2, L1);
		L3 = 0;
		L4 = 0;
		while (L4 < L2) {
			object L5;
			int L6;
			a0->GetItem(L5, L4, L1);
			L5->GetItemID(L6);
			if (L6 == L0) {
				int L7;
				a0->GetItemAmount(L7, L4, L1);
				L3 = L3 + L7;
				a0->RemoveItem(L4, L7, L1);
				L2 = L2 + -1;
			} else {
				L4 = L4 + 1;
			}
		}
		if (L3) {
			object L8;
			disable OnUse;
			@CreateInvItem(L8);
			L8->SetItemName("bottle_water");
			f_70_a3_v(a0, L8, L3);
			@PlaySound("fill");
			@SendWorldWndMessage(5);
			@Sleep(1);
			enable OnUse;
		} else {
			f_5a_a1_v(400);
		}
	}
}

void f_5a_a1_v(int a0)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(200, L0);
}

void f_64_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_70_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_64_a2_v(L0, a2);
	}
}

