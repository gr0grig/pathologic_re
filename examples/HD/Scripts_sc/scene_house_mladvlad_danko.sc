event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;

	void init(void)
	{
		f_1a_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		f_24_a1_v("pt_rat");
		@sync();
	}

	void OnUnload(void)
	{
		f_1f_a0_v();
		@sync();
	}

	string f_14_a1_s(int a0)
	{
		return "pers_rat";
	}

	string f_17_a1_s(int a0)
	{
		return "rat_indoor.xml";
	}

	void f_1a_a0_v(void)
	{
		tv0 = f_52_a0_o();
	}

	void f_1f_a0_v(void)
	{
		f_58_a1_v(tv0);
	}

	void f_24_a1_v(string a0)
	{
		int L0;
		f_1f_a0_v();
		for (L0 = 1; ; L0++) {
			bool L1;
			Vector L2;
			Vector L3;
			@GetLocator(a0 + L0, L1, L2, L3);
			if (!L1) {
				break;
			}
			tv0->add(f_3b_a3_o(L0, L2, L3));
		}
	}

	object f_3b_a3_o(int a0, Vector a1, Vector a2)
	{
		object L0;
		@AddActor(L0, f_14_a1_s(a0), f_4c_a0_o(), a1, a2, f_17_a1_s(a0));
		return L0;
	}
}

object f_4c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_52_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

void f_58_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

