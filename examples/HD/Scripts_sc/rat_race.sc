event OnTimer 7;
event OnUnload 6;

property object Race;
property int Index;

maintask t0
{
	void init(void)
	{
		@Sleep(1);
		Vector L0;
		@GetPosition(L0);
		Vector L1;
		@GetDirection(L1);
		t1{L0 + L1 * 100.0, false};
		int L2;
		L2 = 0;
		bool L3;
		L3 = true;
		int L4;
		Race->size(L4);
		int L5;
		L5 = 0;
		for (; L5 < L4; L5++) {
			int L6;
			Race->get(L6, L5);
			if (L6 != L2) {
				bool L7;
				L7 = false;
				if (L6 < L2) {
					if (L3) {
						L7 = true;
						L3 = false;
					}
				} else {
					if (!L3) {
						L7 = true;
						L3 = true;
					}
				}
				t1{L0 + L1 * 100.0 * (L6 + 1), L7};
				L2 = L6;
			} else {
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd();
				@PlayAnimation("all", "attack_end");
				@WaitForAnimEnd();
			}
		}
		object L8;
		@GetScene(L8);
		t1{f_cb_a2_V(L8, "pt_ratf" + Index), !L3};
		f_da_a2_b("rats_manager", "race_over" + Index);
		@Sleep(3);
		@RemoveActor(f_bb_a0_o());
	}
}

task t1
{
	void init(Vector a0, bool a1)
	{
		if (a1) {
			Vector L0;
			Vector L1;
			bool L2;
			@WaitForAnimEnd();
			@GetPosition(L0);
			L1 = a0 - L0;
			@RotateAsync(L1.x, L1.z, 6.2831854820251465, L2);
			@PlayAnimation("all", L2 ? "rotate_left" : "rotate_right");
			@WaitForAnimEnd();
			@StopAsync();
			@Rotate(L1.x, L1.z);
		}
		@SetTimer(0, 10);
		bool L3;
		@MovePoint(a0, true, L3);
		@KillTimer(0);
		if (!L3) {
			object L4;
			@GetScene(L4);
			@Teleport(f_bb_a0_o(), L4, a0, f_c1_a1_V(a0 - f_b6_a0_V()));
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 0) {
			@Stop();
		}
	}
}

Vector f_b6_a0_V(void)
{
	Vector L0;
	@GetPosition(L0);
	return L0;
}

object f_bb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

Vector f_c1_a1_V(Vector a0)
{
	float L0;
	L0 = sqrt(a0 | a0);
	if (L0 < 9.999999974752427e-07) {
		return [0.0, 0.0, 0.0];
	}
	return a0 / L0;
}

Vector f_cb_a2_V(object a0, string a1)
{
	bool L0;
	Vector L1;
	a0->GetLocator(a1, L0, L1);
	if (!L0) {
		@Trace("Locator '" + a1 + "' doesn't exist");
		return [0.0, 0.0, 0.0];
	}
	return L1;
}

bool f_da_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void OnUnload(void)
{
	@RemoveActor(f_bb_a0_o());
	@Hold();
}

