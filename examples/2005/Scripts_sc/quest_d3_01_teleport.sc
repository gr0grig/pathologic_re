maintask t0
{
	void init(void)
	{
		object L0;
		@Sleep(5.0);
		f_31_a3_v(0, 1, 3.0);
		@FindActor(L0, "player");
		if (L0) {
			object L1;
			Vector L2;
			Vector L3;
			bool L4;
			@GetSceneByName(L1, "cot_alexandr");
			L1->GetLocator("pt_d3q01_teleport", L4, L2, L3);
			@Teleport(L0, L1, L2, L3);
		}
		@SetVariable("d3q01", 8);
		@sync();
		f_31_a3_v(1, 0, 1.0);
		@RemoveActor(f_2b_a0_o());
	}
}

object f_2b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_31_a3_v(float a0, float a1, float a2)
{
	bool L0;
	float L1;
	L0 = a1 > a0;
	L1 = (a1 - a0) / a2;
	while (L0 ? a0 < a1 : a1 < a0) {
		float L2;
		@ModDarkenLevel(a0);
		@sync(L2);
		a0 = a0 + L2 * L1;
	}
	@ModDarkenLevel(a1);
}

