event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var bool tv5;
	var int tv6;

	void init(void)
	{
		tv5 = false;
		tv6 = f_87_a0_i();
		@CreateObjectVector(tv4);
		@CreateStringVector(tv0);
		@CreateStringVector(tv1);
		@CreateBoolVector(tv2);
		f_9a_a3_v(tv0, tv1, tv2);
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		bool L0;
		bool L1;
		int L2;
		int L3;
		int L4;
		L1 = false;
		@HasProperty("inited", L0);
		if (L0) {
			@GetProperty("inited", L2);
			L1 = L2 != 0;
		}
		if (!L1) {
			return;
		}
		if (!tv5) {
			tv3 = f_90_a1_o(f_6f_a0_o());
			tv3->SetProperty("day", tv6);
			tv5 = true;
		}
		tv0->size(L3);
		for (L4 = 0; L4 < L3; L4 = L4 + 1) {
			string L5;
			string L6;
			object L7;
			bool L8;
			tv0->get(L5, L4);
			tv1->get(L6, L4);
			tv2->get(L8, L4);
			if (!L8) {
				L7 = f_75_a4_o(f_6f_a0_o(), "pt_k2s_svita" + (L4 + 1), L5, L6);
				L7->SetProperty("index", L4);
			}
			tv4->add(L7);
		}
	}

	void OnUnload(void)
	{
		int L0;
		int L1;
		tv4->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			tv4->get(L2, L1);
			if (L2) {
				bool L3;
				L2->HasProperty("dead", L3);
				tv2->set(L3, L1);
				@RemoveActor(L2);
			}
		}
	}
}

object f_6f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_75_a4_o(object a0, string a1, string a2, string a3)
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

int f_87_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

object f_90_a1_o(object a0)
{
	return f_75_a4_o(a0, "pt_k2s_npc", "NPC_Bakalavr", "k2system_danko.xml");
}

void f_9a_a3_v(object a0, object a1, object a2)
{
	a0->add("pers_wasted_male");
	a1->add("k2system_wasted_male.xml");
	a2->add(false);
	a0->add("pers_wasted_male");
	a1->add("k2system_wasted_male.xml");
	a2->add(false);
	a0->add("pers_patrool");
	a1->add("k2system_patrol.xml");
	a2->add(false);
}

