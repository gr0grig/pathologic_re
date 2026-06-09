event OnTrigger 26;
event OnUnload 6;
event OnLoad 5;

maintask t0
{
	var object tv0;
	var object tv1;
	var bool tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;

	void init(void)
	{
		@CreateIntVector(tv5);
		@CreateIntVector(tv9);
		tv2 = true;
		f_b2_a0_v();
	}

	void f_9_a1_v(object a0)
	{
		if (tv2) {
			tv7 = f_14c_a4_o(f_140_a0_o(), "pt_andrei", "NPC_Andrei", "NPC_Burah_Andrei.xml");
			if (tv8) {
				f_120_a5_v(tv7, 0, tv8, tv9, tv10);
			}
			a0->add(tv7);
		} else {
			tv7 = null;
		}
		a0->add(f_14c_a4_o(f_140_a0_o(), "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml"));
		tv3 = f_14c_a4_o(f_140_a0_o(), "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
		if (tv4) {
			f_120_a5_v(tv3, 0, tv4, tv5, tv6);
		}
		a0->add(tv3);
		a0->add(f_15e_a3_o(f_140_a0_o(), "ps_kabak_alkash1", "cs_play_cycle.bin"));
		a0->add(f_15e_a3_o(f_140_a0_o(), "ps_kabak_alkash2", "cs_play_cycle.bin"));
		a0->add(f_15e_a3_o(f_140_a0_o(), "ps_kabak_unosha1", "cs_play_cycle.bin"));
		a0->add(f_15e_a3_o(f_140_a0_o(), "ps_kabak_woman1", "cs_play_cycle.bin"));
		a0->add(f_15e_a3_o(f_140_a0_o(), "ps_kabak_worker1", "cs_play_cycle.bin"));
	}

	void OnTrigger(string a0)
	{
		if (a0 == "noandrei") {
			tv2 = false;
		} else {
			if (a0 == "andrei") {
				tv2 = true;
			}
		}
	}

	void OnUnload(void)
	{
		f_166_a2_b("quest_b2_03", "kabak_unload");
		if (tv3) {
			tv4 = f_f3_a3_o(tv3, 0, tv5);
			tv6 = f_10c_a2_o(tv3, 0);
		}
		if (tv7) {
			tv8 = f_f3_a3_o(tv7, 0, tv9);
			tv10 = f_10c_a2_o(tv7, 0);
		}
		f_ec_a0_v();
	}

	void f_b2_a0_v(void)
	{
		@CreateObjectVector(tv0);
		@CreateObjectVector(tv1);
		for (; ; ) {
			@Hold();
		}
	}

	void f_ba_a0_v(void)
	{
		int L0;
		for (L0 = 1; ; L0++) {
			string L1;
			bool L2;
			Vector L3;
			object L4;
			L1 = "pt_fireplace" + L0;
			@GetLocator(L1, L2, L3);
			if (!L2) {
				break;
			}
			@AddActorByType(L4, "scripted", f_140_a0_o(), L3, [0.0, 0.0, 1.0], "fireplace.xml");
			tv0->add(L4);
		}
	}

	void f_d2_a0_v(void)
	{
		f_9_a1_v(tv1);
	}

	void f_d7_a0_v(void)
	{
		f_172_a1_v(tv0);
		tv0->clear();
	}

	void f_de_a0_v(void)
	{
		f_172_a1_v(tv1);
		tv1->clear();
	}

	void OnLoad(void)
	{
		f_ba_a0_v();
		f_d2_a0_v();
	}

	void f_ec_a0_v(void)
	{
		f_d7_a0_v();
		f_de_a0_v();
	}
}

object f_f3_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_146_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		int L4;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
		a0->GetItemAmount(L4, L2, a1);
		a2->add(L4);
	}
	return L0;
}

object f_10c_a2_o(object a0, int a1)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		bool L3;
		a0->IsItemSelected(L3, L2, a1);
		if (L3) {
			L0->add(L2);
		}
	}
	return L0;
}

void f_120_a5_v(object a0, int a1, object a2, object a3, object a4)
{
	a0->RemoveAllItems(a1);
	int L0;
	a2->size(L0);
	int L1;
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		bool L4;
		a2->get(L2, L1);
		a3->get(L3, L1);
		a0->AddItem(L4, L2, a1, L3);
	}
	a4->size(L0);
	int L5;
	for (L5 = 0; L5 < L0; L5++) {
		int L6;
		a4->get(L6, L5);
		a0->SelectItem(L6, true, a1);
	}
}

object f_140_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_146_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_14c_a4_o(object a0, string a1, string a2, string a3)
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

object f_15e_a3_o(object a0, string a1, string a2)
{
	object L0;
	@AddScriptedActor(L0, a1, a2, a0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	return L0;
}

bool f_166_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_172_a1_v(object a0)
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

