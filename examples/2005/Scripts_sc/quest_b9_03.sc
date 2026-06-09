event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var int tv6;

	void init(void)
	{
		object L0;
		object L1;
		tv1 = f_1de_a0_o();
		tv2 = f_1de_a0_o();
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "noaglaja");
		@GetSceneByName(L0, "cot_kapella");
		@GetActiveScene(L1);
		if (L1 == L0) {
			@SetVariable("b9q03BadInit", 1);
		} else {
			tv0 = f_1e4_a4_o(L0, "pt_b9q03_aglaja", "NPC_Aglaja", "b9q03_aglaja.xml");
		}
		f_1c0_a1_v(9);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_house_spi4ka") {
			object L0;
			@GetSceneByName(L0, "house_spi4ka");
			@Trigger(L0, "nospi4ka");
			tv1->add(f_1e4_a4_o(L0, "pt_b9q03_doberman1", "pers_doberman", "b9q03_doberman.xml"));
			tv1->add(f_1e4_a4_o(L0, "pt_b9q03_doberman2", "pers_doberman", "b9q03_doberman.xml"));
			if (tv0) {
				@Trigger(tv0, "cleanup");
			}
			@GetSceneByName(L0, "sobor");
			@Trigger(L0, "aglaja");
		} else {
			if (a0 == "doberman_attack") {
				f_207_a2_v(tv1, "attack");
				f_1f6_a2_v("ihouse_spi4ka@door1", true);
				f_1f6_a2_v("ihouse_spi4ka@door2", true);
				@PlaySound("door_close");
			} else {
				if (a0 == "doberman_dead") {
					int L1;
					tv6 = tv6 + 1;
					tv1->size(L1);
					if (L1 == tv6) {
						f_1f6_a2_v("ihouse_spi4ka@door1", false);
						f_1f6_a2_v("ihouse_spi4ka@door2", false);
						@PlaySound("door_open");
					}
				} else {
					if (a0 == "place_follower") {
						object L2;
						@GetMainOutdoorScene(L2);
						tv3 = f_1e4_a4_o(L2, "pt_b9q03_follower", "pers_boy", "b9q03_follower.xml");
					} else {
						if (a0 == "init_bonefires") {
							object L3;
							@GetMainOutdoorScene(L3);
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b1_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b1_morlok1", "pers_morlok", "b9q03_e_morlok.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b1_morlok2", "pers_morlok", "b9q03_e_morlok.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b2_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b2_grabitel1", "pers_grabitel", "b9q03_e_grabitel.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b2_grabitel2", "pers_grabitel", "b9q03_e_grabitel.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b3_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b3_wastedmale1", "pers_wasted_male", "b9q03_e_wasted_male.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b3_hunter1", "pers_hunter", "b9q03_e_hunter.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b4_doberman1", "pers_doberman", "b9q03_e_doberman.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b4_doberman2", "pers_doberman", "b9q03_e_doberman.xml"));
							tv2->add(f_1e4_a4_o(L3, "pt_b9q03_b4_doberman3", "pers_doberman", "b9q03_e_doberman.xml"));
						} else {
							if (a0 == "bonfire_burn") {
								int L4;
								@GetVariable("b9q03BonefiresCount", L4);
								if (L4 == 0) {
									f_234_a0_v();
								} else {
									if (L4 == 1) {
										f_227_a0_v();
									} else {
										if (L4 == 2) {
											f_21a_a0_v();
										} else {
											if (L4 == 3) {
												object L5;
												f_241_a0_v();
												@GetMainOutdoorScene(L5);
												tv5 = f_1e4_a4_o(L5, "pt_b9q03_girl", "pers_girl", "b9q03_girl.xml");
												@GetSceneByName(L5, "cot_kapella");
												tv4 = f_1e4_a4_o(L5, "pt_b9q03_spi4ka", "NPC_Spi4ka", "b9q03_spi4ka.xml");
												f_1f6_a2_v("house_spi4ka@door1", true);
												f_1f6_a2_v("house_spi4ka@door2", true);
												if (tv3) {
													@Trigger(tv3, "cleanup");
												}
											}
										}
									}
								}
								L4 = L4 + 1;
								@SetVariable("b9q03BonefiresCount", L4);
							} else {
								if (a0 == "fail") {
									f_169_a0_v();
								} else {
									if (a0 == "completed") {
										f_171_a0_v();
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_15e_a0_v(void)
	{
		int L0;
		@GetVariable("b9q03", L0);
		if (L0 != 1000) {
			f_169_a0_v();
		}
	}

	void f_169_a0_v(void)
	{
		@SetVariable("b9q03", -1);
		f_179_a0_v();
	}

	void f_171_a0_v(void)
	{
		@SetVariable("b9q03", 1000);
		f_179_a0_v();
	}

	void f_179_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "aglaja");
		@GetSceneByName(L0, "house_spi4ka");
		@Trigger(L0, "spi4ka");
		f_207_a2_v(tv1, "cleanup");
		f_207_a2_v(tv2, "cleanup");
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		if (tv5) {
			@Trigger(tv5, "cleanup");
		}
		f_1f6_a2_v("ihouse_spi4ka@door1", false);
		f_1f6_a2_v("ihouse_spi4ka@door2", false);
		f_1f6_a2_v("house_spi4ka@door1", false);
		f_1f6_a2_v("house_spi4ka@door2", false);
		@RemoveActor(f_1d8_a0_o());
	}

	void f_1c0_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_179_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_15e_a0_v();
	}
}

object f_1d8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_1de_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_1e4_a4_o(object a0, string a1, string a2, string a3)
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

void f_1f6_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_207_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

void f_21a_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 538, 2, 530350);
	f_25b_a2_b(L0, 532);
}

void f_227_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 537, 2, 530349);
	f_25b_a2_b(L0, 532);
}

void f_234_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 536, 2, 530348);
	f_25b_a2_b(L0, 532);
}

void f_241_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 539, 2, 530351);
	f_25b_a2_b(L0, 532);
}

object f_24e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_25b_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_24e_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

