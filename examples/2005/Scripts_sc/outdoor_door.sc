event OnUse 0;

maintask t0
{
	void init(void)
	{
		@DisableUpdate();
		f_6_a0_v();
	}

	void f_6_a0_v(void)
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
		string L2;
		string L3;
		object L4;
		bool L5;
		Vector L6;
		Vector L7;
		if (f_64_a0_b()) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return;
		}
		@GetActorName(L0);
		L1 = f_55_a2_i(L0, "@");
		if (L1 == -1) {
			@Trace("Wrong door name");
			return;
		}
		L2 = f_5f_a3_s(L0, 0, L1);
		L3 = "pt_" + f_5a_a2_s(L0, L1 + 1);
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
}

int f_55_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_5a_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_5f_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

bool f_64_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

