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
		string L3;
		string L4;
		object L5;
		bool L6;
		Vector L7;
		Vector L8;
		@IsPlayerActor(a0, L0);
		if (!L0) {
			return;
		}
		if (f_5a_a0_b()) {
			@Trace("Trigger is locked");
			return;
		}
		@GetActorName(L1);
		L2 = f_4b_a2_i(L1, "@");
		if (L2 == -1) {
			@Trace("Wrong door name");
			return;
		}
		L3 = f_55_a3_s(L1, 0, L2);
		L4 = "pt_" + f_50_a2_s(L1, L2 + 1);
		@GetSceneByName(L5, L3);
		if (L5 == null) {
			@Trace("Destination scene '" + L3 + "' not found");
			return;
		}
		L5->GetLocator(L4, L6, L7, L8);
		if (L6) {
			@Teleport(a0, L5, L7, L8);
		} else {
			@Trace("Locator " + L4 + " not found in destination scene " + L3);
		}
	}
}

int f_4b_a2_i(string a0, string a1)
{
	int L0;
	@_strchr(L0, a0, a1);
	return L0;
}

string f_50_a2_s(string a0, int a1)
{
	string L0;
	@_strsub(L0, a0, a1);
	return L0;
}

string f_55_a3_s(string a0, int a1, int a2)
{
	string L0;
	@_strsub(L0, a0, a1, a2);
	return L0;
}

bool f_5a_a0_b(void)
{
	int L0;
	@GetProperty("locked", L0);
	return L0 != 0;
}

