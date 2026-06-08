event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var bool tv1;

	void OnLoad(void)
	{
		if (!tv1) {
			float L0;
			@GetGameTime(L0);
			if (L0 >= 168) {
				object L1;
				tv1 = true;
				@AddActor(L1, "d8q01_well_block", f_2c_a0_o(), [0.0, 0.0, 0.0]);
			}
		}
		init();
	}

	void init(void)
	{
		f_22_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		f_27_a0_v();
		@sync();
	}

	void f_22_a0_v(void)
	{
		tv0 = f_32_a0_o();
	}

	void f_27_a0_v(void)
	{
		f_38_a1_v(tv0);
	}
}

object f_2c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_32_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_38_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

