event OnUse 0;

maintask t0
{
	void OnUse(object a0)
	{
		if (f_78_a0_b()) {
			if (f_9d_a3_b(a0, f_84_a0_s(), true)) {
				f_7f_a1_v(false);
			} else {
				return;
			}
		}
		f_21_a1_v(a0);
	}

	void init(void)
	{
		@SetVisibility(true);
		for (; ; ) {
			@Hold();
		}
	}
}

void f_21_a1_v(object a0)
{
	string L0;
	int L1;
	string L2;
	string L3;
	object L4;
	bool L5;
	Vector L6;
	Vector L7;
	if (f_78_a0_b()) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return;
	}
	@GetActorName(L0);
	L1 = f_69_a2_i(L0, "@");
	if (L1 == -1) {
		@Trace("Wrong door name");
		return;
	}
	L2 = f_73_a3_s(L0, 0, L1);
	L3 = "pt_" + f_6e_a2_s(L0, L1 + 1);
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

int f_69_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_6e_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_73_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

bool f_78_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

void f_7f_a1_v(bool a0)
{
	@SetProperty("locked", a0);
}

string f_84_a0_s(void)
{
	string L0;
	int L1;
	@GetActorName(L0);
	L1 = f_69_a2_i(L0, "@");
	if (L1 == -1) {
		@Trace("Wrong door name");
		return "";
	}
	return f_73_a3_s(L0, 0, L1);
}

bool f_9d_a3_b(object a0, string a1, bool a2)
{
	int L0;
	int L1;
	int L2;
	@GetInvItemByName(L0, "uni_key");
	a0->GetSubContainerCount(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		int L4;
		a0->GetItemCount(L3, L2);
		for (L4 = 0; L4 < L3; L4++) {
			object L5;
			int L6;
			a0->GetItem(L5, L4, L2);
			L5->GetItemID(L6);
			if (L6 == L0) {
				bool L7;
				L5->HasProperty(L7, "key_scene_name");
				if (L7) {
					string L8;
					L5->GetProperty(L8, "key_scene_name");
					@Trace(a1 + " " + L8);
					if (L8 == a1) {
						a0->RemoveItem(L4, L2);
						return true;
					}
				}
			}
		}
	}
	return false;
}

