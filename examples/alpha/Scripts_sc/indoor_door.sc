event OnUse 0;

maintask t0
{
	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(object a0)
	{
		string L0;
		int L1;
		object L2;
		object L3;
		string L4;
		string L5;
		bool L6;
		Vector L7;
		Vector L8;
		if (f_51_a0_b()) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return;
		}
		@GetActorName(L0);
		L1 = f_47_a2_i(L0, "@");
		if (L1 == -1) {
			@Trace("Wrong door name");
			return;
		}
		@GetMainOutdoorScene(L2);
		if (L2 == null) {
			@Trace("No main outdoor scene");
			return;
		}
		@GetScene(L3);
		L3->GetName(L4);
		L5 = "pt_" + L4 + "@" + f_4c_a2_s(L0, L1 + 1);
		@Trace(L5);
		L2->GetLocator(L5, L6, L7, L8);
		if (L6) {
			@PlaySharedSound("door_open");
			@Teleport(a0, L2, L7, L8);
		}
	}
}

int f_47_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_4c_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

bool f_51_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

