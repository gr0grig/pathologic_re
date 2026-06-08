event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;

	void init(void)
	{
		tv0 = f_a4_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		int L0;
		for (L0 = 0; ; L0 = L0 + 1) {
			bool L1;
			@GetLocator("pt_spawn" + (L0 + 1), L1);
			if (!L1) {
				break;
			}
		}
		if (L0 < 22) {
			@Trace("Not enough spawn points");
			return;
		}
		object L2;
		@CreateIntVector(L2);
		int L3;
		for (L3 = 1; L3 <= L0; L3 = L3 + 1) {
			L2->add(L3);
		}
		int L4;
		for (L4 = 0; L4 < 6; L4 = L4 + 1) {
			int L5;
			int L6;
			@irand(L5, L0);
			L2->get(L6, L5);
			L2->remove(L5);
			L0 = L0 + -1;
			tv0->add(f_aa_a4_o(f_9e_a0_o(), "pt_spawn" + L6, "pers_littleboy", "littleboy_mnogogrannik.xml"));
		}
		int L7;
		for (L7 = 0; L7 < 6; L7 = L7 + 1) {
			int L8;
			int L9;
			@irand(L8, L0);
			L2->get(L9, L8);
			L2->remove(L8);
			L0 = L0 + -1;
			tv0->add(f_aa_a4_o(f_9e_a0_o(), "pt_spawn" + L9, "pers_littlegirl", "littlegirl_mnogogrannik.xml"));
		}
		int L10;
		for (L10 = 0; L10 < 5; L10 = L10 + 1) {
			int L11;
			int L12;
			@irand(L11, L0);
			L2->get(L12, L11);
			L2->remove(L11);
			L0 = L0 + -1;
			tv0->add(f_aa_a4_o(f_9e_a0_o(), "pt_spawn" + L12, "pers_doberman", "boy_mnogogrannik.xml"));
		}
		int L13;
		for (L13 = 0; L13 < 5; L13 = L13 + 1) {
			int L14;
			int L15;
			@irand(L14, L0);
			L2->get(L15, L14);
			L2->remove(L14);
			L0 = L0 + -1;
			tv0->add(f_aa_a4_o(f_9e_a0_o(), "pt_spawn" + L15, "pers_girl", "girl_mnogogrannik.xml"));
		}
	}

	void OnUnload(void)
	{
		f_bc_a1_v(tv0);
	}
}

object f_9e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_a4_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_aa_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

void f_bc_a1_v(object a0)
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

