event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var bool tv3;

	void init(void)
	{
		object L0;
		int L1;
		@CreateObjectVector(tv1);
		@GetMainOutdoorScene(L0);
		tv1->add(f_122_a4_o(L0, "pt_d9q01_doberman1", "pers_doberman", "d11q05_doberman.xml"));
		tv1->add(f_122_a4_o(L0, "pt_d9q01_doberman2", "pers_doberman", "d11q05_doberman.xml"));
		tv1->add(f_122_a4_o(L0, "pt_d9q01_doberman3", "pers_doberman", "d11q05_doberman.xml"));
		tv0 = f_10a_a0_o();
		@GetVariable("d8q01MladVladIsVictim", L1);
		if (L1) {
			object L2;
			tv3 = true;
			@GetSceneByName(L2, "termitnik_mat");
			tv2 = f_110_a4_o(L2, "pt_d11q05_mladvlad", "NPC_MladVlad", "d11q05_mladvlad.xml");
		}
		f_ec_a1_v(11);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "teleport") {
			object L0;
			@FindActor(L0, "player");
			if (L0) {
				object L1;
				Vector L2;
				Vector L3;
				bool L4;
				@GetSceneByName(L1, "mnogogrannik_han");
				L1->GetLocator("pt_d9q01_teleport", L4, L2, L3);
				@Teleport(L0, L1, L2, L3);
			}
		} else {
			if (a0 == "place_enemy_before") {
				object L5;
				@GetMainOutdoorScene(L5);
				tv0->add(f_122_a4_o(L5, "pt_d11q05_grabitel_before1", "pers_grabitel", "d11q05_grabitel.xml"));
				tv0->add(f_122_a4_o(L5, "pt_d11q05_grabitel_before2", "pers_grabitel", "d11q05_grabitel.xml"));
				tv0->add(f_122_a4_o(L5, "pt_d11q05_worker_before1", "pers_worker", "d11q05_worker.xml"));
				tv0->add(f_122_a4_o(L5, "pt_d11q05_worker_before2", "pers_worker", "d11q05_worker.xml"));
			} else {
				if (a0 == "place_enemy_after") {
					object L6;
					@GetMainOutdoorScene(L6);
					tv0->add(f_122_a4_o(L6, "pt_d11q05_grabitel_after1", "pers_grabitel", "d11q05_grabitel_serum.xml"));
					tv0->add(f_122_a4_o(L6, "pt_d11q05_grabitel_after2", "pers_grabitel", "d11q05_grabitel.xml"));
					tv0->add(f_122_a4_o(L6, "pt_d11q05_unosha_after1", "pers_unosha", "d11q05_worker.xml"));
					tv0->add(f_122_a4_o(L6, "pt_d11q05_unosha_after2", "pers_unosha", "d11q05_worker.xml"));
				} else {
					if (a0 == "fail") {
						f_c4_a0_v();
					} else {
						if (a0 == "completed") {
							f_cc_a0_v();
						}
					}
				}
			}
		}
	}

	void f_b6_a0_v(void)
	{
		int L0;
		@GetVariable("d11q05", L0);
		if (L0 != 1000) {
			f_c4_a0_v();
		}
		f_da_a0_v();
	}

	void f_c4_a0_v(void)
	{
		@SetVariable("d11q05", -1);
		f_d4_a0_v();
	}

	void f_cc_a0_v(void)
	{
		@SetVariable("d11q05", 1000);
		f_d4_a0_v();
	}

	void f_d4_a0_v(void)
	{
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
	}

	void f_da_a0_v(void)
	{
		disable OnTrigger;
		f_d4_a0_v();
		f_134_a1_v(tv0);
		f_134_a1_v(tv1);
		@RemoveActor(f_104_a0_o());
	}

	void f_ec_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_da_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_b6_a0_v();
	}
}

object f_104_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_10a_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_110_a4_o(object a0, string a1, string a2, string a3)
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

object f_122_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

void f_134_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

