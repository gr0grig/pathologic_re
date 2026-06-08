event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@CreateObjectVector(tv0);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		} else {
			if (a0 == "aglaja") {
				@SetVariable("sobor_aglaja", 1);
			}
		}
	}

	void OnLoad(void)
	{
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_boy", "pers_boy", "d6q01_boy.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_girl", "pers_girl", "d6q01_girl.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_unosha", "pers_unosha", "d6q01_unosha.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_wasted_male", "pers_wasted_male", "d6q01_wasted_male.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_wasted_woman", "pers_wasted_girl", "d6q01_wasted_woman.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_woman", "pers_woman", "d6q01_woman.xml"));
		tv0->add(f_77_a4_o(f_71_a0_o(), "pt_d6q01_worker", "pers_worker", "d6q01_worker.xml"));
	}

	void OnUnload(void)
	{
		f_89_a1_v(tv0);
	}
}

object f_71_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_77_a4_o(object a0, string a1, string a2, string a3)
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

void f_89_a1_v(object a0)
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

