event OnUse 0;

maintask t0
{
	void init(void)
	{
		@DisableUpdate();
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
		string L6;
		bool L7;
		Vector L8;
		Vector L9;
		if (f_7a_a0_b()) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return;
		}
		@GetActorName(L0);
		L1 = f_70_a2_i(L0, "@");
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
		L5 = f_75_a2_s(L0, L1 + 1);
		L6 = "pt_" + L4 + "@" + L5;
		@Trace(L6);
		L2->GetLocator(L6, L7, L8, L9);
		if (L7) {
			object L10;
			@FindActor(L10, L4 + "@" + L5);
			if (L10) {
				if (f_64_a2_b(L10, "lp")) {
					bool L11;
					L10->GetProperty("lp", L11);
					if (L11) {
						@Trace("Outdoor door was unlocked");
						L10->SetProperty("locked", false);
					}
				}
			}
			@PlaySharedSound("door_open");
			@Teleport(a0, L2, L8, L9);
		}
	}
}

bool f_64_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

int f_70_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_75_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

bool f_7a_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

