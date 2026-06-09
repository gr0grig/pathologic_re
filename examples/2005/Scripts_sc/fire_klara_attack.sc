event OnUnload 6;

property object Target;

maintask t0
{
	void init(void)
	{
		object L0;
		Vector L1;
		Vector L2;
		Vector L3;
		int L4;
		int L5;
		@Trace("1");
		@sync();
		@Trace("2");
		if (!f_bc_a0_b() || !f_9a_a1_b(Target)) {
			@RemoveActor(f_c1_a0_o());
			return;
		}
		@Trace("3");
		@FindParticleSystem("fire", L0);
		if (L0 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		@Trace("4");
		Target->GetPosition(L1);
		@GetPosition(L2);
		@Trace("x" + L1.x + " y " + L1.y + " z" + L1.z);
		L0->AddSource(L1 - L2, [0.0, 1.0, 0.0], 0.5);
		L0->Enable();
		L0->Fade(false);
		@Trace("5");
		L3 = L1;
		L4 = 2;
		for (L5 = 0; L5 < 600; L5++) {
			float L6;
			@sync();
			if (!f_9a_a1_b(Target)) {
				break;
			}
			Target->GetPosition(L1);
			L6 = L3 - L1 | L3 - L1;
			if (L6 > 25) {
				int L7;
				for (L7 = 0; L7 < L4; L7++) {
					L0->AddSource(L1 - L2, [0.0, 1.0, 0.0], 0.5);
				}
				L4 = L4 + 3;
				L3 = L1;
			}
		}
		@Trace("6");
		L0->Fade();
		@Sleep(3);
		@RemoveActor(f_c1_a0_o());
	}

	void OnUnload(void)
	{
		@RemoveActor(f_c1_a0_o());
	}
}

bool f_8e_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_9a_a1_b(object a0)
{
	object L0;
	object L1;
	int L2;
	if (a0 == null) {
		return false;
	}
	@GetScene(L0);
	if (L0 == null) {
		return false;
	}
	a0->GetScene(L1);
	if (L0 != L1) {
		return false;
	}
	if (!f_8e_a2_b(a0, "noaccess")) {
		return true;
	}
	a0->GetProperty("noaccess", L2);
	return L2 == 0;
}

bool f_bc_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_c1_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

