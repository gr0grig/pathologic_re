event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		tv2 = f_126_a0_o();
		f_95_a0_v();
	}

	void OnLoad(void)
	{
		int L0;
		f_13e_a2_b("quest_d8_04", "termitnik_load");
		f_13e_a2_b("quest_d8_03", "termitnik_load");
		for (L0 = 0; ; L0++) {
			bool L1;
			@GetLocator("pt_spawn" + (L0 + 1), L1);
			if (!L1) {
				break;
			}
		}
		if (L0 < 18) {
			@Trace("Not enough spawn points");
		} else {
			object L2;
			@CreateIntVector(L2);
			int L3;
			for (L3 = 1; L3 <= L0; L3++) {
				L2->add(L3);
			}
			int L4;
			for (L4 = 0; L4 < 12; L4++) {
				int L5;
				int L6;
				@irand(L5, L0);
				L2->get(L6, L5);
				L2->remove(L5);
				L0 = L0 + -1;
				tv2->add(f_12c_a4_o(f_120_a0_o(), "pt_spawn" + L6, "pers_butcher", "termitnik_butcher.xml"));
			}
			int L7;
			for (L7 = 0; L7 < 6; L7++) {
				int L8;
				int L9;
				@irand(L8, L0);
				L2->get(L9, L8);
				L2->remove(L8);
				L0 = L0 + -1;
				tv2->add(f_12c_a4_o(f_120_a0_o(), "pt_spawn" + L9, "pers_morlok", "termitnik_morlok.xml"));
			}
		}
		f_a7_a0_v();
	}

	void OnUnload(void)
	{
		f_14a_a1_v(tv2);
		f_e7_a0_v();
	}

	void f_76_a1_v(object a0)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			bool L1;
			@GetLocator("pt_agony" + L0, L1);
			if (!L1) {
				break;
			}
			a0->add(0);
			a0->add(L0);
			a0->add(0);
		}
	}

	string f_8b_a2_s(int a0, int a1)
	{
		return "pt_agony" + a1;
	}

	string f_8f_a2_s(int a0, int a1)
	{
		return "pers_morlok";
	}

	string f_92_a2_s(int a0, int a1)
	{
		return "agony1_morlok.xml";
	}

	void f_95_a0_v(void)
	{
		if (!tv1) {
			tv1 = f_126_a0_o();
		}
		if (!tv0) {
			@CreateIntVector(tv0);
		}
		f_76_a1_v(tv0);
		for (; ; ) {
			@Hold();
		}
	}

	void f_a7_a0_v(void)
	{
		int L0;
		int L1;
		if (!tv1) {
			tv1 = f_126_a0_o();
		}
		if (!tv0) {
			@CreateIntVector(tv0);
		}
		f_14a_a1_v(tv1);
		tv0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 3) {
			int L2;
			int L3;
			int L4;
			string L5;
			string L6;
			string L7;
			tv0->get(L2, L1);
			tv0->get(L3, L1 + 1);
			tv0->get(L4, L1 + 2);
			L5 = f_8b_a2_s(L2, L3);
			L6 = f_8f_a2_s(L2, L4);
			L7 = f_92_a2_s(L2, L4);
			tv1->add(f_12c_a4_o(f_120_a0_o(), L5, L6, L7));
		}
	}

	void f_e7_a0_v(void)
	{
		int L0;
		int L1;
		tv1->size(L0);
		L1 = 0;
		for (; L1 < L0; ) {
			object L2;
			tv1->get(L2, L1);
			if (L2 != null) {
				bool L3;
				L2->IsDead(L3);
				if (!L3) {
					if (!f_114_a2_b(L2, "ToDie")) {
						L1 = L1 + 1;
						continue;
					}
				}
				@RemoveActor(L2);
			}
			tv1->remove(L1);
			tv0->remove(L1 * 3, (L1 + 1) * 3);
			L0 = L0 + -1;
		}
		f_14a_a1_v(tv1);
	}
}

bool f_114_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

object f_120_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_126_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_12c_a4_o(object a0, string a1, string a2, string a3)
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

bool f_13e_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_14a_a1_v(object a0)
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

