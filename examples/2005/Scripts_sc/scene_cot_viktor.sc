event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		f_6_a0_v();
	}

	void f_4_a1_v(object a0)
	{
	}

	void f_6_a0_v(void)
	{
		@CreateObjectVector(tv0);
		@CreateObjectVector(tv1);
		for (; ; ) {
			@Hold();
		}
	}

	void f_e_a0_v(void)
	{
		int L0;
		for (L0 = 1; ; L0 = L0 + 1) {
			string L1;
			bool L2;
			Vector L3;
			object L4;
			L1 = "pt_fireplace" + L0;
			@GetLocator(L1, L2, L3);
			if (!L2) {
				break;
			}
			@AddActorByType(L4, "scripted", f_47_a0_o(), L3, [0.0, 0.0, 1.0], "fireplace.xml");
			tv0->add(L4);
		}
	}

	void f_26_a0_v(void)
	{
		f_4_a1_v(tv1);
	}

	void f_2b_a0_v(void)
	{
		f_4d_a1_v(tv0);
		tv0->clear();
	}

	void f_32_a0_v(void)
	{
		f_4d_a1_v(tv1);
		tv1->clear();
	}

	void OnLoad(void)
	{
		f_e_a0_v();
		f_26_a0_v();
	}

	void OnUnload(void)
	{
		f_2b_a0_v();
		f_32_a0_v();
	}
}

object f_47_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void f_4d_a1_v(object a0)
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

