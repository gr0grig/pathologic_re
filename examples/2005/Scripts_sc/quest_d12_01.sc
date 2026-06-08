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
	var object tv14;
	var object tv15;

	void f_0_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		f_27b_a2_v("theater@door1", true);
		tv12 = f_269_a4_o(L0, "pt_b12q01_birdmask_t", "pers_birdmask", "d12q01_birdmask_t.xml");
	}

	void init(void)
	{
		object L0;
		float L1;
		tv1 = false;
		tv0 = false;
		tv2 = false;
		tv3 = false;
		f_51a_a0_v();
		@SetTimeEvent(0, 288);
		if (f_2a4_a0_i() >= 8) {
			if (f_401_a0_b()) {
				f_28c_a3_b("volonteers_danko", "childs_letter", "");
			}
		} else {
			@SetTimeEvent(1, 272);
		}
		f_42b_a1_v(0);
		f_2ac_a0_v();
		f_2b9_a0_v();
		@GetMainOutdoorScene(L0);
		tv4 = f_269_a4_o(L0, "pt_b12q01_birdmask_s", "pers_birdmask", "d12q01_birdmask_s.xml");
		@GetSceneByName(L0, "termitnik2");
		tv9 = f_257_a4_o(L0, "pt_b12q01_klara", "NPC_Klara", "d12q01_klara_t2.xml");
		@GetSceneByName(L0, "factory");
		tv11 = f_257_a4_o(L0, "pt_d12q01_burah", "NPC_Burah", "d12q01_burah_factory.xml");
		f_27b_a2_v("sobor@door1", true);
		f_27b_a2_v("hidden_room@door1", true);
		f_27b_a2_v("mnogogrannik@door1", true);
		f_27b_a2_v("cot_eva@door1", false);
		f_27b_a2_v("termitnik2@door1", false);
		f_27b_a2_v("uprava_admin@door1", false);
		@GetGameTime(L1);
		if (L1 < 271) {
			@SetTimeEvent(2, 271);
			f_27b_a2_v("theater@door1", false);
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
			if (tv3 || !f_515_a0_b()) {
				float L0;
				@Trace("final 1 locked: " + tv3);
				@GetGameTime(L0);
				L0 = L0 + 0.008333333767950535;
				@SetTimeEvent(0, L0);
				enable OnTrigger;
				enable OnGameTime;
				return;
			}
			f_436_a0_v();
		} else {
			if (a0 == 1) {
				if (f_401_a0_b()) {
					f_28c_a3_b("volonteers_danko", "childs_letter", "");
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
			if (tv9) {
				@Trigger(tv9, "cleanup");
			}
			if (tv11) {
				@Trigger(tv11, "cleanup");
			}
			f_27b_a2_v("isobor@door1", true);
			f_27b_a2_v("sobor@door1", false);
			tv1 = true;
		} else {
			if (a0 == "sobor_load") {
				if (tv1) {
					tv3 = true;
					f_24c_a1_o("quest_d12_01_sobor_cutscene");
				}
			} else {
				if (a0 == "sobor_cutscene_end") {
					object L1;
					@GetSceneByName(L1, "sobor");
					tv5 = f_257_a4_o(L1, "pt_b12q01_block", "NPC_Block", "d12q01_Block.xml");
					tv6 = f_257_a4_o(L1, "pt_b12q01_aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
					tv7 = f_257_a4_o(L1, "pt_b12q01_kapella", "NPC_Maria", "d12q01_maria.xml");
					if (f_507_a0_b()) {
						tv8 = f_257_a4_o(L1, "pt_b12q01_klara", "NPC_Klara", "d12q01_Klara.xml");
					}
					if (f_50e_a0_b()) {
						tv10 = f_257_a4_o(L1, "pt_d12q01_burah", "NPC_Burah", "d12q01_Burah.xml");
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
							if (tv10) {
								@Trigger(tv10, "cleanup");
							}
							f_27b_a2_v("sobor@door1", true);
							tv3 = false;
						}
					} else {
						if (a0 == "init_theater") {
							f_298_a1_b("NPC_Mark");
							f_27b_a2_v("itheater@door1", true);
							f_27b_a2_v("theater@door1", false);
							tv0 = true;
						} else {
							if (a0 == "theater_load") {
								if (tv0) {
									tv3 = true;
									f_24c_a1_o("quest_d12_01_theater_cutscene");
									@SetVariable("d12q01TheaterIsVisited", 1);
								}
							} else {
								if (a0 == "theater_cutscene_end") {
									object L2;
									@GetSceneByName(L2, "theater");
									tv12 = f_257_a4_o(L2, "pt_b12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
									tv13 = f_257_a4_o(L2, "pt_b12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
								} else {
									if (a0 == "theater_unload") {
										if (tv0) {
											if (tv12) {
												@Trigger(tv12, "cleanup");
											}
											if (tv13) {
												@Trigger(tv13, "cleanup");
											}
											f_27b_a2_v("theater@door1", true);
											tv3 = false;
										}
									} else {
										if (a0 == "init_hidden_room") {
											f_27b_a2_v("mnogogrannik_han@door1", false);
											f_27b_a2_v("mnogogrannik_han@door2", false);
											f_27b_a2_v("hidden_room@door1", false);
											f_27b_a2_v("imnogogrannik_han@door1", false);
											f_27b_a2_v("mnogogrannik@door1", false);
											tv2 = true;
										} else {
											if (a0 == "hidden_room_load") {
												if (tv2) {
													tv3 = true;
													@SetVariable("d12q01ChildsAreVisited", 1);
													f_24c_a1_o("quest_d12_01_hidden_room_cutscene");
												}
											} else {
												if (a0 == "hidden_room_cutscene_end") {
													object L3;
													@GetSceneByName(L3, "hidden_room");
													tv14 = f_257_a4_o(L3, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
													tv15 = f_257_a4_o(L3, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
												} else {
													if (a0 == "hidden_room_unload") {
														if (tv2) {
															f_27b_a2_v("hidden_room@door1", true);
															f_27b_a2_v("mnogogrannik@door1", true);
															tv3 = false;
															if (f_418_a0_b()) {
																f_28c_a3_b("volonteers_danko", "theater_letter", "");
															}
														}
													} else {
														if (a0 == "cleanup") {
															int L4;
															@GetVariable("d12q01", L4);
															if (L4 != 1000) {
																f_22f_a0_v();
															} else {
																f_23f_a0_v();
															}
														} else {
															if (a0 == "fail") {
																f_22f_a0_v();
															} else {
																if (a0 == "completed") {
																	f_237_a0_v();
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

	void f_22f_a0_v(void)
	{
		@SetVariable("d12q01", -1);
		f_23f_a0_v();
	}

	void f_237_a0_v(void)
	{
		@SetVariable("d12q01", 1000);
		f_23f_a0_v();
	}

	void f_23f_a0_v(void)
	{
		disable OnTrigger;
		@RemoveActor(f_246_a0_o());
	}
}

object f_246_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_24c_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_257_a4_o(object a0, string a1, string a2, string a3)
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

object f_269_a4_o(object a0, string a1, string a2, string a3)
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

void f_27b_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_28c_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

bool f_298_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

int f_2a4_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

void f_2ac_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 699, 1, 535682);
	f_2d3_a2_b(L0, -1);
}

void f_2b9_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 705, 1, 535688);
	f_2d3_a2_b(L0, 699);
}

object f_2c6_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2d3_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2c6_a0_o();
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

int f_2ef_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

void f_2f5_a0_v(void)
{
	if (f_2ef_a0_i() == 1) {
		@SetRegistryData("BurahCompleted", 1);
	} else {
		if (f_2ef_a0_i() == 0) {
			@SetRegistryData("DankoCompleted", 1);
		} else {
			if (f_2ef_a0_i() == 2) {
				@SetRegistryData("KlaraCompleted", 1);
			}
		}
	}
}

void f_316_a3_v(object a0, bool a1, int a2)
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

void f_337_a3_v(object a0, bool a1, int a2)
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

void f_35b_a3_v(object a0, bool a1, int a2)
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

bool f_37b_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_385_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

bool f_38f_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_316_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		L0->get(L3, L2);
		if (f_385_a1_b(L3) || f_37b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_3b5_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_337_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		L0->get(L3, L2);
		if (f_385_a1_b(L3) || f_37b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_3db_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_35b_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2 = L2 + 1) {
		int L3;
		L0->get(L3, L2);
		if (f_385_a1_b(L3) || f_37b_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_401_a0_b(void)
{
	int L0;
	L0 = 0;
	if (f_3db_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_3b5_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_38f_a0_b()) {
		L0 = L0 + 1;
	}
	return L0 >= 2;
}

bool f_418_a0_b(void)
{
	return f_3db_a0_b() && f_3b5_a0_b() && f_38f_a0_b();
}

void f_42b_a1_v(int a0)
{
	@SetVariable("game_final", a0);
}

int f_430_a0_i(void)
{
	int L0;
	@GetVariable("game_final", L0);
	return L0;
}

void f_436_a0_v(void)
{
	f_2f5_a0_v();
	int L0;
	L0 = f_2ef_a0_i();
	int L1;
	L1 = f_430_a0_i();
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
	if (f_430_a0_i() == 1) {
		@Trace("fin_termit");
		if (L8) {
			@GameOver("gameover_termit_chudo.xml");
		} else {
			@GameOver("gameover_termit.xml");
		}
	} else {
		if (f_430_a0_i() == 2) {
			@Trace("fin_utop");
			if (L8) {
				@GameOver("gameover_utopist_chudo.xml");
			} else {
				@GameOver("gameover_utopist.xml");
			}
		} else {
			if (f_430_a0_i() == 3) {
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

bool f_507_a0_b(void)
{
	int L0;
	@GetVariable("d12q01KlaraInSobor", L0);
	return L0 != 0;
}

bool f_50e_a0_b(void)
{
	int L0;
	@GetVariable("d12q01BurahInSobor", L0);
	return L0 != 0;
}

bool f_515_a0_b(void)
{
	bool L0;
	@IsOverrideActive(L0);
	return !L0;
}

void f_51a_a0_v(void)
{
	object L0;
	@GetSceneByName(L0, "warehouse_rubin");
	@Trigger(L0, "rubin");
	f_27b_a2_v("warehouse_rubin@door1", false);
}

