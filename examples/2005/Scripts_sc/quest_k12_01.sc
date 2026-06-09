event OnGameTime 9;
event OnTrigger 26;

var object g0;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var bool tv2;
	var bool tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;
	var object tv12;
	var object tv13;

	void f_0_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		f_25b_a2_v("theater@door1", true);
		tv10 = f_249_a4_o(L0, "pt_b12q01_birdmask_t", "pers_birdmask", "k12q01_birdmask_t.xml");
	}

	void init(void)
	{
		object L0;
		float L1;
		tv1 = false;
		tv0 = false;
		tv2 = false;
		tv3 = false;
		f_4fa_a0_v();
		@SetTimeEvent(0, 288);
		if (f_284_a0_i() >= 8) {
			if (f_3e1_a0_b()) {
				f_26c_a3_b("volonteers_klara", "childs_letter", "");
			}
		} else {
			@SetTimeEvent(1, 272);
		}
		f_40b_a1_v(0);
		f_28c_a0_v();
		f_299_a0_v();
		@GetMainOutdoorScene(L0);
		tv4 = f_249_a4_o(L0, "pt_b12q01_birdmask_s", "pers_birdmask", "k12q01_birdmask_s.xml");
		f_25b_a2_v("sobor@door1", true);
		f_25b_a2_v("hidden_room@door1", true);
		f_25b_a2_v("mnogogrannik@door1", true);
		f_25b_a2_v("cot_eva@door1", false);
		f_25b_a2_v("termitnik2@door1", false);
		f_25b_a2_v("uprava_admin@door1", false);
		@GetGameTime(L1);
		if (L1 < 271) {
			f_25b_a2_v("theater@door1", false);
			@SetTimeEvent(2, 271);
		} else {
			f_0_a0_v();
		}
		for (; ; ) {
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		disable OnTrigger;
		disable OnGameTime;
		if (a0 == 0) {
			@Trace("final 0");
			if (tv3 || !f_4f5_a0_b()) {
				float L0;
				@Trace("final 1 locked: " + tv3);
				@GetGameTime(L0);
				L0 = L0 + 0.008333333767950535;
				@SetTimeEvent(0, L0);
				enable OnTrigger;
				enable OnGameTime;
				return;
			}
			f_416_a0_v();
		} else {
			if (a0 == 1) {
				if (f_3e1_a0_b()) {
					f_26c_a3_b("volonteers_klara", "childs_letter", "");
				}
				enable OnTrigger;
				enable OnGameTime;
			} else {
				if (a0 == 2) {
					f_0_a0_v();
					enable OnTrigger;
					enable OnGameTime;
				}
			}
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_sobor") {
			object L0;
			@GetSceneByName(L0, "sobor");
			@Trigger(L0, "noaglaja");
			f_25b_a2_v("isobor@door1", true);
			f_25b_a2_v("sobor@door1", false);
			tv1 = true;
		} else {
			if (a0 == "sobor_load") {
				if (tv1) {
					tv3 = true;
					f_22c_a1_o("quest_k12_01_sobor_cutscene");
				}
			} else {
				if (a0 == "sobor_cutscene_end") {
					object L1;
					@GetSceneByName(L1, "sobor");
					tv5 = f_237_a4_o(L1, "pt_b12q01_block", "NPC_Block", "k12q01_Block.xml");
					tv6 = f_237_a4_o(L1, "pt_b12q01_aglaja", "NPC_Aglaja", "k12q01_Aglaja.xml");
					tv7 = f_237_a4_o(L1, "pt_b12q01_kapella", "NPC_Klara", "k12q01_Klara2.xml");
					if (f_4e7_a0_b()) {
						tv8 = f_237_a4_o(L1, "pt_d12q01_burah", "NPC_Burah", "k12q01_Burah.xml");
					}
					if (f_4ee_a0_b()) {
						tv9 = f_237_a4_o(L1, "pt_b12q01_danko", "NPC_Bakalavr", "k12q01_Danko.xml");
					}
				} else {
					if (a0 == "sobor_unload") {
						if (tv1) {
							if (tv4) {
								tv4->Remove();
							}
							if (tv5) {
								@Trigger(tv5, "cleanup");
							}
							if (tv6) {
								@Trigger(tv6, "cleanup");
							}
							if (tv7) {
								@Trigger(tv7, "cleanup");
							}
							if (tv8) {
								@Trigger(tv8, "cleanup");
							}
							if (tv9) {
								@Trigger(tv9, "cleanup");
							}
							f_25b_a2_v("sobor@door1", true);
							tv3 = false;
						}
					} else {
						if (a0 == "init_theater") {
							f_278_a1_b("NPC_Mark");
							f_25b_a2_v("itheater@door1", true);
							f_25b_a2_v("theater@door1", false);
							tv0 = true;
						} else {
							if (a0 == "theater_load") {
								if (tv0) {
									tv3 = true;
									f_22c_a1_o("quest_k12_01_theater_cutscene");
									@SetVariable("k12q01TheaterIsVisited", 1);
								}
							} else {
								if (a0 == "theater_cutscene_end") {
									object L2;
									@GetSceneByName(L2, "theater");
									tv10 = f_237_a4_o(L2, "pt_b12q01_birdmask", "pers_birdmask", "k12q01_tbirdmask.xml");
									tv11 = f_237_a4_o(L2, "pt_b12q01_whitemask", "pers_whitemask", "k12q01_twhitemask.xml");
								} else {
									if (a0 == "theater_unload") {
										if (tv0) {
											if (tv10) {
												@Trigger(tv10, "cleanup");
											}
											if (tv11) {
												@Trigger(tv11, "cleanup");
											}
											f_25b_a2_v("theater@door1", true);
											tv3 = false;
										}
									} else {
										if (a0 == "init_hidden_room") {
											f_25b_a2_v("mnogogrannik_han@door1", false);
											f_25b_a2_v("mnogogrannik_han@door2", false);
											f_25b_a2_v("hidden_room@door1", false);
											f_25b_a2_v("imnogogrannik_han@door1", false);
											f_25b_a2_v("mnogogrannik@door1", false);
											tv2 = true;
										} else {
											if (a0 == "hidden_room_load") {
												if (tv2) {
													tv3 = true;
													@SetVariable("k12q01ChildsAreVisited", 1);
													f_22c_a1_o("quest_k12_01_hidden_room_cutscene");
												}
											} else {
												if (a0 == "hidden_room_cutscene_end") {
													object L3;
													@GetSceneByName(L3, "hidden_room");
													tv12 = f_237_a4_o(L3, "pt_girl", "pers_littlegirl2", "k12q01_littlegirl.xml");
													tv13 = f_237_a4_o(L3, "pt_boy", "pers_littleboy2", "k12q01_littleboy.xml");
												} else {
													if (a0 == "hidden_room_unload") {
														if (tv2) {
															f_25b_a2_v("hidden_room@door1", true);
															f_25b_a2_v("mnogogrannik@door1", true);
															tv3 = false;
															if (f_3f8_a0_b()) {
																f_26c_a3_b("volonteers_klara", "theater_letter", "");
															}
														}
													} else {
														if (a0 == "cleanup") {
															int L4;
															@GetVariable("k12q01", L4);
															if (L4 != 1000) {
																f_20f_a0_v();
															} else {
																f_21f_a0_v();
															}
														} else {
															if (a0 == "fail") {
																f_20f_a0_v();
															} else {
																if (a0 == "completed") {
																	f_217_a0_v();
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_20f_a0_v(void)
	{
		@SetVariable("k12q01", -1);
		f_21f_a0_v();
	}

	void f_217_a0_v(void)
	{
		@SetVariable("k12q01", 1000);
		f_21f_a0_v();
	}

	void f_21f_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_226_a0_o());
	}
}

object f_226_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_22c_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_237_a4_o(object a0, string a1, string a2, string a3)
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

object f_249_a4_o(object a0, string a1, string a2, string a3)
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

void f_25b_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_26c_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

bool f_278_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

int f_284_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_28c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 729, 1, 539359);
	f_2b3_a2_b(L0, -1);
}

void f_299_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 735, 1, 539365);
	f_2b3_a2_b(L0, 729);
}

object f_2a6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2b3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2a6_a0_o();
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

int f_2cf_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_2d5_a0_v(void)
{
	if (f_2cf_a0_i() == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
		if (f_2cf_a0_i() == 0) {
			@SetRegistryData("DankoCompleted", 1);
		} else {
			if (f_2cf_a0_i() == 2) {
				@SetRegistryData("KlaraCompleted", 1);
			}
		}
	}
}

void f_2f6_a3_v(object a0, bool a1, int a2)
{
	a0->add(18);
	a0->add(24);
	a0->add(20);
	a0->add(14);
	if (a1 == false) {
		a0->add(10);
		a0->add(17);
		a0->add(8);
	} else {
		if (a2 != 1) {
			a0->add(10);
		}
	}
}

void f_317_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
		a0->add(19);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

void f_33b_a3_v(object a0, bool a1, int a2)
{
	a0->add(7);
	a0->add(23);
	a0->add(21);
	a0->add(9);
	a0->add(3);
	a0->add(1);
	a0->add(11);
	a0->add(13);
	if (a1 == false) {
		a0->add(25);
	}
}

bool f_35b_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_365_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_36f_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_2f6_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_365_a1_b(L3) || f_35b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_395_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_317_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_365_a1_b(L3) || f_35b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_3bb_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_33b_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_365_a1_b(L3) || f_35b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_3e1_a0_b(void)
{
	int L0;
	L0 = 0;
	if (f_3bb_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_395_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_36f_a0_b()) {
		L0 = L0 + 1;
	}
	return L0 >= 2;
}

bool f_3f8_a0_b(void)
{
	return f_3bb_a0_b() && f_395_a0_b() && f_36f_a0_b();
}

void f_40b_a1_v(int a0)
{
	@SetVariable("game_final", a0);
}

int f_410_a0_i(void)
{
	int L0;
	@GetVariable("game_final", L0);
	return L0;
}

void f_416_a0_v(void)
{
	f_2d5_a0_v();
	int L0;
	L0 = f_2cf_a0_i();
	int L1;
	L1 = f_410_a0_i();
	bool L2;
	L2 = false;
	bool L3;
	L3 = false;
	if (L0 == 0) {
		int L4;
		@GetVariable("d12q01ChildsAreVisited", L4);
		L2 = L4 != 0;
		@GetVariable("d12q01TheaterIsVisited", L4);
		L3 = L4 != 0;
	} else {
		if (L0 == 1) {
			int L5;
			@GetVariable("b12q01ChildsAreVisited", L5);
			L2 = L5 != 0;
			@GetVariable("b12q01TheaterIsVisited", L5);
			L3 = L5 != 0;
		} else {
			if (L0 == 2) {
				int L6;
				@GetVariable("k12q01ChildsAreVisited", L6);
				L2 = L6 != 0;
				@GetVariable("k12q01TheaterIsVisited", L6);
				L3 = L6 != 0;
			}
		}
	}
	bool L7;
	L7 = false;
	if (L0 == 0 && L1 == 2) {
		L7 = true;
	}
	if (L0 == 1 && L1 == 1) {
		L7 = true;
	}
	if (L0 == 2 && L1 == 3) {
		L7 = true;
	}
	bool L8;
	L8 = false;
	if (L1 == 4 && !L2 && !L3) {
		L8 = true;
	}
	if (!L7 && L2 && !L3) {
		L8 = true;
	}
	if (L7 && L2 && L3) {
		L8 = true;
	}
	@Trace("PlayFinalMovie");
	if (f_410_a0_i() == 1) {
		@Trace("fin_termit");
		if (L8) {
			@GameOver("gameover_termit_chudo.xml");
		} else {
			@GameOver("gameover_termit.xml");
		}
	} else {
		if (f_410_a0_i() == 2) {
			@Trace("fin_utop");
			if (L8) {
				@GameOver("gameover_utopist_chudo.xml");
			} else {
				@GameOver("gameover_utopist.xml");
			}
		} else {
			if (f_410_a0_i() == 3) {
				@Trace("fin_smiren");
				if (L8) {
					@GameOver("gameover_smirennik_chudo.xml");
				} else {
					@GameOver("gameover_smirennik.xml");
				}
			} else {
				@Trace("fin_beda");
				if (L8) {
					@GameOver("gameover_beda_chudo.xml");
				} else {
					@GameOver("gameover_beda.xml");
				}
			}
		}
	}
}

bool f_4e7_a0_b(void)
{
	int L0;
	@GetVariable("k12q01BurahInSobor", L0);
	return L0 != 0;
}

bool f_4ee_a0_b(void)
{
	int L0;
	@GetVariable("k12q01DankoInSobor", L0);
	return L0 != 0;
}

bool f_4f5_a0_b(void)
{
	bool L0;
	@IsOverrideActive(L0);
	return !L0;
}

void f_4fa_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "warehouse_rubin");
	@Trigger(L0, "rubin");
	f_25b_a2_v("warehouse_rubin@door1", false);
	@GetSceneByName(L0, "cot_eva");
	@Trigger(L0, "danko");
	f_25b_a2_v("cot_eva@door1", false);
}

