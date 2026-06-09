event OnUse 0;

maintask t0
{
	void init(void)
	{
		@DisableUpdate();
		f_13_a0_v();
	}

	void OnUse(object a0)
	{
		if (f_89_a0_b()) {
			f_a1_a0_v();
		}
		f_1a_a1_v(a0);
	}
}

void f_13_a0_v(void)
{
	@SetVisibility(true);
	for (; ; ) {
		@Hold();
	}
}

void f_1a_a1_v(object a0)
{
	string L0;
	int L1;
	string L2;
	string L3;
	object L4;
	bool L5;
	Vector L6;
	Vector L7;
	if (f_82_a0_b()) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return;
	}
	@GetActorName(L0);
	L1 = f_62_a2_i(L0, "@");
	if (L1 == -1) {
		@Trace("Wrong door name");
		return;
	}
	L2 = f_6c_a3_s(L0, 0, L1);
	L3 = "pt_" + f_67_a2_s(L0, L1 + 1);
	@GetSceneByName(L4, L2);
	if (L4 == null) {
		@Trace("Destination scene '" + L2 + "' not found");
		return;
	}
	L4->GetLocator(L3, L5, L6, L7);
	if (L5) {
		@PlaySharedSound("door_open");
		@Teleport(a0, L4, L6, L7);
	} else {
		@Trace("Locator " + L3 + " not found in destination scene " + L2);
	}
}

int f_62_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_67_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_6c_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

int f_71_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_7a_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_82_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

bool f_89_a0_b(void)
{
	int L0;
	L0 = f_7a_a0_i();
	if (L0 < 6) {
		int L1;
		L1 = f_71_a0_i();
		if (L1 > 1) {
			int L2;
			@GetVariable("Performance" + L1, L2);
			return L2 == 0;
		}
	}
	return false;
}

void f_a1_a0_v(void)
{
	int L0;
	int L1;
	L0 = f_71_a0_i();
	@SetVariable("Performance" + L0, 1);
	@PlayMovie("NightMasks" + (L0 - 1) + ".wmv");
}

