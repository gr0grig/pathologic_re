event OnUse 0;
event OnLoad 5;

maintask t0
{
	void init(void)
	{
		f_1c_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		bool L0;
		@Trace("Trying to use");
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

	void OnLoad(void)
	{
		f_28_a0_v();
	}
}

void f_1c_a0_v(void)
{
	if (!f_87_a3_b("blooddiseasedalive", 1, 0)) {
		@Trace("Can't add corpse item");
	}
}

void f_28_a0_v(void)
{
	int L0;
	if (!f_6a_a1_b(5)) {
		@SetVisibility(false);
		return;
	}
	L0 = f_56_a0_i();
	if (f_76_a1_b(L0 - 1)) {
		@SetVisibility(true);
		@Trace("I am in region " + L0 + " and visible");
	} else {
		@SetVisibility(true);
		@Trace("I am in region " + L0 + " and not visible");
	}
}

Vector f_51_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

int f_56_a0_i(void)
{
	object L0;
	int L1;
	@GetScene(L0);
	L0->GetRegionByPt(L1, f_51_a0_V());
	return L1;
}

int f_61_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_6a_a1_b(int a0)
{
	return f_61_a0_i() == a0;
}

string f_70_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

bool f_76_a1_b(int a0)
{
	int L0;
	@GetVariable(f_70_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

int f_82_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

bool f_87_a3_b(string a0, int a1, int a2)
{
	int L0;
	bool L1;
	L0 = f_82_a1_i(a0);
	if (L0 == -1) {
		return false;
	}
	if (a1 == 0) {
		return true;
	}
	@AddItem(L1, L0, a2, a1);
	return L1;
}

