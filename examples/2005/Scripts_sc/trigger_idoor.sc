event OnIntersection 23;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		string L1;
		int L2;
		object L3;
		object L4;
		string L5;
		string L6;
		bool L7;
		Vector L8;
		Vector L9;
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		if (f_4a_a0_b()) {
			return;
		}
		@GetActorName(L1);
		L2 = f_40_a2_i(L1, "@");
		if (L2 == -1) {
			@Trace("Wrong door name");
			return;
		}
		@GetMainOutdoorScene(L3);
		if (L3 == null) {
			@Trace("No main outdoor scene");
			return;
		}
		@GetScene(L4);
		L4->GetName(L5);
		L6 = "pt_" + L5 + "@" + f_45_a2_s(L1, L2 + 1);
		@Trace(L6);
		L3->GetLocator(L6, L7, L8, L9);
		if (L7) {
			@Teleport(a0, L3, L8, L9);
		}
	}
}

int f_40_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_45_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

bool f_4a_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

