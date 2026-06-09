event OnUse 0;

var object g0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		object L0;
		if (tv0) {
			return;
		}
		@CreateInvItem(L0);
		L0->SetItemName("avroks_blood");
		if (f_38_a3_b(a0, L0, 1)) {
			tv0 = true;
			f_49_a0_v();
			@SetVariable("b10q03", 4);
			@RemoveActor(f_26_a0_o());
		}
	}
}

object f_26_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_2c_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

bool f_38_a3_b(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (L2) {
		f_2c_a2_v(L0, a2);
	}
	return L2;
}

void f_49_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 604, 2, 531183);
	f_63_a2_b(L0, 594);
}

object f_56_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_63_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_56_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

