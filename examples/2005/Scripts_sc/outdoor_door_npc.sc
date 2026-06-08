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
		int L0;
		string L1;
		int L2;
		string L3;
		string L4;
		object L5;
		bool L6;
		Vector L7;
		Vector L8;
		L0 = f_97_a0_i();
		if (L0 == 0) {
			if (f_90_a0_b()) {
				@PlaySound("door_closed");
				f_86_a1_v(403);
				@Trace("Door is locked");
				return;
			}
		} else {
			@PlaySound("door_closed");
			if (L0 == 1) {
				@Trace("Door is disease locked");
				f_86_a1_v(401);
			} else {
				@Trace("Door is dead locked");
				f_86_a1_v(402);
			}
			return;
		}
		@GetActorName(L1);
		L2 = f_77_a2_i(L1, "@");
		if (L2 == -1) {
			@Trace("Wrong door name");
			return;
		}
		L3 = f_81_a3_s(L1, 0, L2);
		L4 = "pt_" + f_7c_a2_s(L1, L2 + 1);
		@GetSceneByName(L5, L3);
		if (L5 == null) {
			@Trace("Destination scene '" + L3 + "' not found");
			return;
		}
		L5->GetLocator(L4, L6, L7, L8);
		if (L6) {
			@PlaySharedSound("door_open");
			@Teleport(a0, L5, L7, L8);
		} else {
			@Trace("Locator " + L4 + " not found in destination scene " + L3);
		}
	}
}

int f_77_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_7c_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_81_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

void f_86_a1_v(int a0)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(200, L0);
}

bool f_90_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

int f_97_a0_i(void)
{
	int L0;
	@GetProperty("dlocked", L0);
	return L0;
}

