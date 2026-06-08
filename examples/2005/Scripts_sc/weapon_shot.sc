event OnTrigger 26;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "shot") {
			f_d_a0_v();
		}
	}

	void f_d_a0_v(void)
	{
		string L0;
		float L1;
		float L2;
		bool L3;
		Vector L4;
		if (tv0) {
			return;
		}
		@GetCurrentWeapon(L0);
		if (L0 == "samopal") {
			L1 = 18;
			L2 = 0.03333333507180214;
		} else {
			if (L0 == "rifle") {
				L1 = 18;
				L2 = 0.07500000298023224;
			} else {
				if (L0 == "revolver") {
					L1 = 15;
					L2 = 0.07500000298023224;
				} else {
					return;
				}
			}
		}
		@GetGeometryLocator(L0 + "_blast", L3, L4);
		if (L3) {
			tv0 = true;
			@SetLitColor([0.4960784614086151, 0.4176470935344696, 0.16862745583057404]);
			@MakeBillboard("blast", L0 + "_blast.tex", L4, L1);
			@Sleep(L2);
			@SetLitColor([0.0, 0.0, 0.0]);
			@RemoveBillboard("blast");
			tv0 = false;
		}
	}
}

