event OnUse 0;

maintask t0
{
	void OnUse(object a0)
	{
		if (f_73_a0_b()) {
			if (f_7f_a3_b(a0, "burah_father_key", true)) {
				f_7a_a1_v(false);
			}
		}
		f_1c_a1_v(a0);
	}

	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}
}

void f_1c_a1_v(object a0)
{
	string L0;
	int L1;
	string L2;
	string L3;
	object L4;
	bool L5;
	Vector L6;
	Vector L7;
	if (f_73_a0_b()) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return;
	}
	@GetActorName(L0);
	L1 = f_64_a2_i(L0, "@");
	if (L1 == -1) {
		@Trace("Wrong door name");
		return;
	}
	L2 = f_6e_a3_s(L0, 0, L1);
	L3 = "pt_" + f_69_a2_s(L0, L1 + 1);
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

int f_64_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_69_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_6e_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

bool f_73_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

void f_7a_a1_v(bool a0)
{
	@SetProperty("locked", a0);
}

bool f_7f_a3_b(object a0, string a1, bool a2)
{
	int L0;
	int L1;
	int L2;
	@GetInvItemByName(L0, a1);
	a0->GetSubContainerCount(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		int L4;
		a0->GetItemCount(L3, L2);
		for (L4 = 0; L4 < L3; L4 = L4 + 1) {
			object L5;
			int L6;
			a0->GetItem(L5, L4, L2);
			L5->GetItemID(L6);
			if (L6 == L0) {
				if (a2) {
					a0->RemoveItem(L4, 1, L2);
				}
				return true;
			}
		}
	}
	return false;
}

