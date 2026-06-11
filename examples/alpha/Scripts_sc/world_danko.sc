event OnGameTime 9;
event OnTrigger 26;
event OnConsole 1000;

var object g0;
var object g1;
var object g2;
var object g3;
var object g4;
var object g5;
var object g6;
var object g7;
var object g8;
var object g9;
var object g10;
var object g11;
var object g12;
var object g13;
var object g14;
var object g15;
var object g16;
var object g17;
var object g18;

maintask t0
{
	void OnGameTime(int a0, float a1)
	{
		if (f_1bfa_a2_b(a0, a1)) {
			return;
		}
		if (f_2751_a2_b(a0, a1)) {
			return;
		}
		f_279e_a2_v(a0, a1);
	}

	void init(void)
	{
		@SetVariable("branch", 0);
		f_2c_a0_v();
		f_1a87_a0_v();
		f_1c28_a0_v();
		f_2774_a0_v();
		f_2aff_a0_v();
		for (; ; ) {
			@Hold();
		}
	}
}

void f_2c_a0_v(void)
{
	object L0;
	object L1;
	bool L2;
	Vector L3;
	Vector L4;
	@FindActor(L0, "player");
	@GetSceneByName(L1, "cot_eva");
	if (!L1) {
		@Trace("Starting scene not found");
		return;
	}
	L1->GetLocator("pt_Danko", L2, L3, L4);
	if (L2) {
		@Teleport(L0, L1, L3, L4);
	}
}

object f_43_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_4a_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

object f_56_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_5c_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_61_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_6c_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

void f_89_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

bool f_99_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_a5_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

bool f_b1_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

void f_bd_a1_v(object a0)
{
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

int f_d0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_d9_a1_b(int a0)
{
	return f_d0_a0_i() == a0;
}

string f_df_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

void f_e5_a2_v(object a0, int a1)
{
	int L0;
	string L1;
	int L2;
	a0->size(L0);
	if (a1 == 1) {
		L1 = "s_";
	} else {
		if (a1 == 2) {
			L1 = "n_";
		}
	}
	for (L2 = 0; L2 < L0; L2 = L2 + 3) {
		string L3;
		string L4;
		object L5;
		a0->get(L3, L2);
		L4 = L1 + L3 + ".isc";
		@GetSceneByName(L5, L3);
		if (!L5) {
			@Trace("City manager: can't replace indoor scene \"" + L3 + "\" because it doesn't exist");
		} else {
			@ReplaceScene(L5, L4);
		}
	}
}

int f_10b_a0_i(void)
{
	int L0;
	int L1;
	L0 = 0;
	for (L1 = 0; L1 < 16; L1++) {
		if (f_165_a1_b(L1)) {
			L0 = L0 + 1;
		}
	}
	return L0;
}

void f_11d_a0_v(void)
{
	int L0;
	int L1;
	@irand(L0, 16);
	for (L1 = 0; L1 < 16; L1++) {
		int L2;
		L2 = (L1 + L0) % 16;
		if (f_143_a1_b(L2) && f_2c88_a1_b(L2)) {
			f_175_a1_v(L2);
			@Trace("Diseased Region: " + L2);
			return;
		}
	}
}

bool f_143_a1_b(int a0)
{
	int L0;
	@GetVariable(f_df_a1_s(a0), L0);
	if ((L0 & 3) == 0) {
		return true;
	}
	return false;
}

void f_153_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_df_a1_s(a0), L0);
	L1 = L0 & 252 | 0;
	@SetVariable(f_df_a1_s(a0), L1);
}

bool f_165_a1_b(int a0)
{
	int L0;
	@GetVariable(f_df_a1_s(a0), L0);
	if ((L0 & 3) == 1) {
		return true;
	}
	return false;
}

void f_175_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_df_a1_s(a0), L0);
	L1 = L0 & 252 | 1;
	@SetVariable(f_df_a1_s(a0), L1);
}

bool f_187_a1_b(int a0)
{
	int L0;
	@GetVariable(f_df_a1_s(a0), L0);
	if ((L0 & 3) == 2) {
		return true;
	}
	return false;
}

void f_197_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_df_a1_s(a0), L0);
	L1 = L0 & 252 | 2;
	@SetVariable(f_df_a1_s(a0), L1);
}

void f_1a9_a1_v(int a0)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: main outdoor scene not found");
		return;
	}
	L0->RemoveAllRegionActors(a0);
}

void f_1b6_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3);
}

void f_1c3_a6_v(int a0, string a1, string a2, int a3, int a4, int a5)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3, a4, a5);
}

void f_1d0_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCountByType(a0, a1, a2, a3);
}

void f_1dd_a2_v(int a0, bool a1)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	L0->GetGroupActors(L1, 101 + a0);
	if (L1) {
		bool L2;
		object L3;
		for (; L1->Next(L2, L3), L2; ) {
			if (f_4a_a2_b(L3, "locked")) {
				L3->SetProperty("locked", a1);
			} else {
				@Trace("Actor \"" + L3 + "\" can't be locked");
			}
		}
	}
}

void f_1ff_a4_v(string a0, object a1, string a2, string a3)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 0; ; L1++) {
		bool L2;
		Vector L3;
		Vector L4;
		object L5;
		L0->GetLocator(a0 + (L1 + 1), L2, L3, L4);
		if (!L2) {
			break;
		}
		L0->AddStationaryActor(L5, L3, L4, a2, a3);
		a1->add(L5);
	}
}

void f_215_a2_v(string a0, object a1)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 0; ; L1++) {
		bool L2;
		Vector L3;
		Vector L4;
		object L5;
		string L6;
		L0->GetLocator(a0 + (L1 + 1), L2, L3, L4);
		if (!L2) {
			break;
		}
		L6 = "fog_stat.xml";
		L0->AddStationaryActorByType(L5, L3, L4, "fog", L6);
		a1->add(L5);
	}
}

void f_22d_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1dd_a2_v(a0, true);
	f_bd_a1_v(a2);
	f_bd_a1_v(a3);
	f_bd_a1_v(a4);
}

void f_240_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1dd_a2_v(a0, false);
	f_bd_a1_v(a2);
	f_bd_a1_v(a3);
	f_bd_a1_v(a4);
	if (a1 <= 8) {
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
		f_215_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	} else {
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
		f_215_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	}
}

void f_28f_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1dd_a2_v(a0, false);
	f_bd_a1_v(a2);
	f_bd_a1_v(a3);
	f_bd_a1_v(a4);
	if (a1 <= 8) {
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
	} else {
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_1ff_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
	}
}

void f_2ca_a2_v(int a0, bool a1)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L1 = a0 + 1;
	L0->EnableSubsets(L1, 100, a1, true);
}

void f_2db_a2_v(int a0, bool a1)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L1 = a0 + 1;
	L0->EnableSubsets(L1, 200, a1, false);
}

void f_2ec_a3_v(int a0, bool a1, int a2)
{
	string L0;
	L0 = "street_rags" + (a0 + 1);
	if (a1) {
		object L1;
		int L2;
		@GetMainOutdoorScene(L1);
		if (L1 == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return;
		}
		for (L2 = 1; L2 <= a2; L2++) {
			string L3;
			object L4;
			L3 = L0 + "_" + L2;
			@FindActor(L4, L3);
			if (!L4) {
				@AddActor(L4, L3, L1, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
			} else {
				L4->RemoveOnUnload(false);
			}
		}
	} else {
		int L5;
		for (L5 = 1; L5 <= a2; L5++) {
			object L6;
			@FindActor(L6, L0 + "_" + L5);
			if (L6) {
				L6->RemoveOnUnload();
			}
		}
	}
}

void f_325_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 < 2 || a1 >= 6 && a1 < 10) {
		f_2ca_a2_v(a0, true);
	} else {
		f_2ca_a2_v(a0, false);
	}
}

void f_34a_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 >= 6 && a1 < 10) {
		f_2ca_a2_v(a0, true);
	} else {
		f_2ca_a2_v(a0, false);
	}
}

void f_368_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 4 || a1 >= 6 && a1 < 8) {
		f_2ca_a2_v(a0, true);
	} else {
		f_2ca_a2_v(a0, false);
	}
}

void f_38d_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 6) {
		f_2ca_a2_v(a0, true);
	} else {
		f_2ca_a2_v(a0, false);
	}
}

float f_3a4_a1_f(int a0)
{
	if (a0 + 1 == 1) {
		return 0;
	} else {
		if (a0 + 1 == 2) {
			return 0;
		} else {
			if (a0 + 1 == 3) {
				return 1;
			} else {
				if (a0 + 1 == 4) {
					return 1;
				} else {
					if (a0 + 1 == 5) {
						return 1;
					} else {
						if (a0 + 1 == 6) {
							return 2;
						} else {
							if (a0 + 1 == 7) {
								return 1;
							} else {
								if (a0 + 1 == 8) {
									return 1;
								} else {
									if (a0 + 1 == 9) {
										return 1;
									} else {
										if (a0 + 1 == 10) {
											return 1;
										} else {
											if (a0 + 1 == 11) {
												return 1;
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
	return 0;
}

float f_3fe_a1_f(int a0)
{
	if (a0 + 1 == 1) {
		return 0;
	} else {
		if (a0 + 1 == 2) {
			return 0;
		} else {
			if (a0 + 1 == 3) {
				return 0;
			} else {
				if (a0 + 1 == 4) {
					return 0;
				} else {
					if (a0 + 1 == 5) {
						return 2;
					} else {
						if (a0 + 1 == 6) {
							return 2;
						} else {
							if (a0 + 1 == 7) {
								return 1;
							} else {
								if (a0 + 1 == 8) {
									return 1;
								} else {
									if (a0 + 1 == 9) {
										return 1;
									} else {
										if (a0 + 1 == 10) {
											return 1;
										} else {
											if (a0 + 1 == 11) {
												return 1;
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
	return 0;
}

bool f_458_a2_b(int a0, int a1)
{
	return a0 == 10 && a1 < 6;
}

void f_462_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		f_1b6_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
		f_1b6_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 3);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 2);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 2);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 2);
		f_1b6_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2.xml", 1);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	} else {
		f_1b6_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 1);
		f_1b6_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 2);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1b6_a4_v(a0, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_4f6_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 2);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 2);
		f_1b6_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2.xml", 1);
		f_1b6_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
		f_1b6_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a1 + 1 >= 3) {
		}
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	} else {
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		if (a1 + 1 >= 3) {
		}
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_583_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 3);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 2);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 2);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1b6_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2.xml", 1);
		if (a1 + 1 >= 3) {
		}
		if (a1 + 1 >= 7) {
			f_1b6_a4_v(a0, "pers_butcher", "butcher.xml", 2);
		}
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	} else {
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 3);
		if (a1 + 1 >= 3) {
		}
		if (a1 + 1 >= 7) {
			f_1b6_a4_v(a0, "pers_butcher", "butcher.xml", 3);
		}
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1b6_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_647_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 2);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 2);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	} else {
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 1);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	}
}

void f_6a1_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 3);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 3);
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 2);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	} else {
		f_1b6_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1b6_a4_v(a0, "pers_worker", "worker.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2.xml", 1);
		f_1b6_a4_v(a0, "pers_dog", "dog.xml", 1);
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1b6_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
}

void f_705_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1b6_a4_v(a0, "pers_wasted_girl", "wasted_girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_wasted_male", "wasted_male_d.xml", 1);
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 6);
		L0 = 1 * f_3fe_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1b6_a4_v(a0, "pers_wasted_girl", "wasted_girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_wasted_male", "wasted_male_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 6);
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1c3_a6_v(a0, "pers_worker", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_unosha", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_woman", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_804_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if (a1 + 1 >= 3) {
		}
		f_1d0_a4_v(a0, "fog", "fog.xml", 4);
		L0 = 1 * f_3fe_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if (a1 + 1 >= 3) {
		}
		f_1d0_a4_v(a0, "fog", "fog.xml", 4);
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1c3_a6_v(a0, "pers_worker", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_unosha", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_woman", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_906_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if (a1 + 1 >= 3) {
		}
		if (a1 + 1 >= 7) {
			f_1b6_a4_v(a0, "pers_butcher", "butcher_d.xml", 2);
		}
		f_1d0_a4_v(a0, "fog", "fog.xml", 5);
		L0 = 1 * f_3fe_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1b6_a4_v(a0, "pers_unosha", "unosha_d.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		if (a1 + 1 >= 3) {
		}
		if (a1 + 1 >= 7) {
			f_1b6_a4_v(a0, "pers_butcher", "butcher_d.xml", 2);
		}
		f_1d0_a4_v(a0, "fog", "fog.xml", 4);
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1c3_a6_v(a0, "pers_worker", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_unosha", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_woman", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_a20_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1b6_a4_v(a0, "pers_boy", "boy_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 6);
		L0 = 1 * f_3fe_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1b6_a4_v(a0, "pers_boy", "boy_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_girl", "girl_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 6);
		L1 = 2 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1c3_a6_v(a0, "pers_worker", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_unosha", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_woman", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
}

void f_ada_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1b6_a4_v(a0, "pers_worker", "worker_d.xml", 2);
		f_1b6_a4_v(a0, "pers_worker", "worker2_d.xml", 2);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 5);
		L0 = 2 * f_3fe_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1b6_a4_v(a0, "pers_worker", "worker_d.xml", 1);
		f_1b6_a4_v(a0, "pers_worker", "worker2_d.xml", 1);
		f_1b6_a4_v(a0, "pers_alkash", "alkash_d.xml", 1);
		f_1b6_a4_v(a0, "pers_woman", "woman_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 1);
		f_1b6_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 1);
		f_1d0_a4_v(a0, "fog", "fog.xml", 5);
		L1 = 2 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1c3_a6_v(a0, "pers_worker", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_unosha", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_woman", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_vaxxabitka", "agony1.xml", 2, 4, 4);
	f_1c3_a6_v(a0, "pers_wasted_girl", "agony1.xml", 2, 4, 4);
}

void f_ba2_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 2);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 2);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 3);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 2);
		L0 = 1 * f_3a4_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 3);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 2);
		L2 = 2 * f_3a4_a1_f(a1);
		if (L2) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_3fe_a1_f(a1);
		if (L3) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_c56_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 2);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 2);
		L0 = 1 * f_3a4_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 2);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 2);
		L2 = 2 * f_3a4_a1_f(a1);
		if (L2) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_3fe_a1_f(a1);
		if (L3) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_d0a_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 2);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 3);
		L0 = 1 * f_3a4_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		L1 = 1 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 2);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 3);
		L2 = 2 * f_3a4_a1_f(a1);
		if (L2) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_3fe_a1_f(a1);
		if (L3) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_458_a2_b(a1, a2)) {
		f_1b6_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_dbe_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 4);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 5);
		L0 = 3 * f_3a4_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		L1 = 2 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 4);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 5);
		L2 = 4 * f_3a4_a1_f(a1);
		if (L2) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 3 * f_3fe_a1_f(a1);
		if (L3) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
}

void f_e65_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 3);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 4);
		L0 = 3 * f_3a4_a1_f(a1);
		if (L0) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		L1 = 2 * f_3fe_a1_f(a1);
		if (L1) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1b6_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha.xml", 1);
		f_1b6_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		f_1b6_a4_v(a0, "pers_boy", "boy.xml", 1);
		if (a1 + 1 >= 2) {
			f_1b6_a4_v(a0, "pers_patrool", "patrol.xml", 3);
		}
		f_1b6_a4_v(a0, "pers_rat", "rat.xml", 4);
		L2 = 4 * f_3a4_a1_f(a1);
		if (L2) {
			f_1b6_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 3 * f_3fe_a1_f(a1);
		if (L3) {
			f_1b6_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
}

void f_f0c_a1_v(object a0)
{
}

void f_f0e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(0, false);
		f_2ec_a3_v(0, false, 1);
		f_22d_a5_v(0, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(0, a1);
	f_647_a3_v(0, a0, a1);
}

void f_f36_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(0, true);
		f_2ec_a3_v(0, true, 1);
		f_240_a5_v(0, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(0, false);
	f_a20_a3_v(0, a0, a1);
}

void f_f5e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(0, true);
		f_2ec_a3_v(0, true, 1);
		f_28f_a5_v(0, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(0, false);
	f_dbe_a3_v(0, a0, a1);
}

void f_f86_a1_v(object a0)
{
	a0->add("dt_house3_05_i2");
	a0->add("dt_house3_05");
	a0->add("dt_house_1_10");
	a0->add("house5_10");
	a0->add("house5_07");
	a0->add("dt_house_1_03");
	a0->add("dt_house1_union2_04l");
	a0->add("dt_house1_union2_04r");
	a0->add("house5_22");
	a0->add("house5_08");
}

void f_fa6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(1, false);
		f_2ec_a3_v(1, false, 1);
		f_22d_a5_v(1, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(1, a1);
	f_6a1_a3_v(1, a0, a1);
}

void f_fce_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(1, true);
		f_2ec_a3_v(1, true, 1);
		f_240_a5_v(1, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(1, false);
	f_ada_a3_v(1, a0, a1);
}

void f_ff6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(1, true);
		f_2ec_a3_v(1, true, 1);
		f_28f_a5_v(1, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(1, false);
	f_e65_a3_v(1, a0, a1);
}

void f_101e_a1_v(object a0)
{
	a0->add("dt_house1_union2_05l");
	a0->add("dt_house1_union2_05r");
	a0->add("dt_house2_04");
	a0->add("dt_house2_05");
	a0->add("dt_house2_02");
	a0->add("dt_house2_01");
	a0->add("dt_house3_10_i2");
	a0->add("dt_house3_10");
	a0->add("dt_house3_11_i2");
	a0->add("dt_house3_11");
	a0->add("dt_house3_12_i2");
	a0->add("dt_house3_12");
	a0->add("dt_house_1_06");
	a0->add("dt_house3_07_i2");
	a0->add("dt_house3_07");
	a0->add("house5_21");
	a0->add("house1_se_02l");
	a0->add("house1_se_02r");
	a0->add("dt_house3_01_i2");
	a0->add("dt_house3_02_i2");
	a0->add("dt_house3_02");
	a0->add("dt_house3_03_i2");
	a0->add("dt_house3_03");
}

void f_1065_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(2, false);
		f_2ec_a3_v(2, false, 1);
		f_22d_a5_v(2, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(2, a1);
	f_583_a3_v(2, a0, a1);
}

void f_108d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(2, true);
		f_2ec_a3_v(2, true, 1);
		f_240_a5_v(2, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(2, false);
	f_906_a3_v(2, a0, a1);
}

void f_10b5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(2, true);
		f_2ec_a3_v(2, true, 1);
		f_28f_a5_v(2, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(2, false);
	f_d0a_a3_v(2, a0, a1);
}

void f_10dd_a1_v(object a0)
{
	a0->add("house5_02");
	a0->add("dt_house1_union2_03l");
	a0->add("dt_house1_union2_03r");
	a0->add("dt_house1_union2_01l");
	a0->add("dt_house1_union2_01r");
	a0->add("house5_unoinl");
	a0->add("house5_unoinr");
	a0->add("dt_house_1_01");
	a0->add("house5_05");
	a0->add("house5_06");
	a0->add("dt_house1_union2_02l");
	a0->add("dt_house1_union2_02r");
	a0->add("dt_house_1_02");
	a0->add("house5_unoin_solid01l");
	a0->add("house5_unoin_solid01r");
	a0->add("house5_03");
	a0->add("house5_04");
}

void f_1112_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, false);
		f_2ec_a3_v(13, false, 1);
		f_22d_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_325_a2_v(3, a1);
	f_583_a3_v(3, a0, a1);
}

void f_113a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, true);
		f_2ec_a3_v(13, true, 1);
		f_240_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(3, false);
	f_906_a3_v(3, a0, a1);
}

void f_1162_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, true);
		f_2ec_a3_v(13, true, 1);
		f_28f_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(3, false);
	f_d0a_a3_v(3, a0, a1);
}

void f_118a_a1_v(object a0)
{
	a0->add("dt_house3_09_i2");
	a0->add("dt_house3_09");
	a0->add("house1_se_03l");
	a0->add("house1_se_03r");
	a0->add("house1_se_01l");
	a0->add("house1_se_01r");
	a0->add("house1_se_04l");
	a0->add("house1_se_04r");
	a0->add("house5_11");
	a0->add("house5_09");
	a0->add("dt_house_1_04");
	a0->add("house5_13");
	a0->add("house5_12");
	a0->add("house5_14");
	a0->add("house5_unoin03l");
	a0->add("house5_unoin03r");
	a0->add("house5_unoin02l");
	a0->add("house5_unoin02r");
	a0->add("house5_unoin01l");
	a0->add("house5_unoin01r");
}

void f_11c8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(4, false);
		f_2ec_a3_v(4, false, 1);
		f_22d_a5_v(4, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_34a_a2_v(4, a1);
	f_583_a3_v(4, a0, a1);
}

void f_11f0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(4, true);
		f_2ec_a3_v(4, true, 1);
		f_240_a5_v(4, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(4, false);
	f_906_a3_v(4, a0, a1);
}

void f_1218_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(4, true);
		f_2ec_a3_v(4, true, 1);
		f_28f_a5_v(4, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(4, false);
	f_d0a_a3_v(4, a0, a1);
}

void f_1240_a1_v(object a0)
{
	a0->add("dt_house3_14_i2");
	a0->add("dt_house3_14");
	a0->add("house1_arc_01l");
	a0->add("house1_arc_01r");
	a0->add("dt_House6_01");
	a0->add("dt_house_1_09");
	a0->add("house5_24");
	a0->add("dt_House6_03");
	a0->add("dt_House6_04");
	a0->add("dt_house_1_08");
	a0->add("house5_unoin_solidl");
	a0->add("house5_unoin_solidr");
	a0->add("dt_house2_12");
	a0->add("dt_house2_11");
	a0->add("dt_house2_13");
	a0->add("dt_house2_09");
	a0->add("dt_house2_08");
	a0->add("dt_house2_07");
	a0->add("dt_house2_06");
	a0->add("house5_01");
	a0->add("house5_15");
	a0->add("house5_16");
	a0->add("house5_17");
	a0->add("house5_unoin04l");
	a0->add("house5_unoin04r");
	a0->add("house5_23");
}

void f_1290_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(5, false);
		f_2ec_a3_v(5, false, 1);
		f_22d_a5_v(5, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_325_a2_v(5, a1);
	f_583_a3_v(5, a0, a1);
}

void f_12b8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(5, true);
		f_2ec_a3_v(5, true, 1);
		f_240_a5_v(5, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(5, false);
	f_906_a3_v(5, a0, a1);
}

void f_12e0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(5, true);
		f_2ec_a3_v(5, true, 1);
		f_28f_a5_v(5, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(5, false);
	f_d0a_a3_v(5, a0, a1);
}

void f_1308_a1_v(object a0)
{
}

void f_130a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(6, false);
		f_2ec_a3_v(6, false, 1);
		f_22d_a5_v(6, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(6, a1);
}

void f_132c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(6, true);
		f_2ec_a3_v(6, true, 1);
		f_240_a5_v(6, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(6, false);
}

void f_134e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(6, true);
		f_2ec_a3_v(6, true, 1);
		f_28f_a5_v(6, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(6, false);
}

void f_1370_a1_v(object a0)
{
	a0->add("House6_02");
	a0->add("House6_01");
	a0->add("house_2_01");
	a0->add("house7_03");
	a0->add("house7_02");
	a0->add("house3_01_i2");
	a0->add("house3_01");
	a0->add("house_2_03");
	a0->add("house_2_02");
	a0->add("house4_01_i2");
	a0->add("house4_01");
	a0->add("House6_05");
	a0->add("House6_04");
	a0->add("House6_03");
}

void f_139c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(7, false);
		f_2ec_a3_v(7, false, 1);
		f_22d_a5_v(7, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_34a_a2_v(7, a1);
	f_4f6_a3_v(7, a0, a1);
}

void f_13c4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(7, true);
		f_2ec_a3_v(7, true, 1);
		f_240_a5_v(7, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(7, false);
	f_804_a3_v(7, a0, a1);
}

void f_13ec_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(7, true);
		f_2ec_a3_v(7, true, 1);
		f_28f_a5_v(7, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(7, false);
	f_c56_a3_v(7, a0, a1);
}

void f_1414_a1_v(object a0)
{
	a0->add("r2_house_2_02");
	a0->add("r2_house_2_03");
	a0->add("r2_house7_02");
	a0->add("r2_house01_01");
	a0->add("r2_house7_01");
	a0->add("r2_house3_01_i2");
	a0->add("r2_house3_01");
	a0->add("r2_house3_02_i2");
	a0->add("r2_house3_02");
	a0->add("r2_house3_03_i2");
	a0->add("r2_house3_03");
}

void f_1437_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(8, false);
		f_2ec_a3_v(8, false, 1);
		f_22d_a5_v(8, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_325_a2_v(8, a1);
	f_4f6_a3_v(8, a0, a1);
}

void f_145f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(8, true);
		f_2ec_a3_v(8, true, 1);
		f_240_a5_v(8, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(8, false);
	f_804_a3_v(8, a0, a1);
}

void f_1487_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(8, true);
		f_2ec_a3_v(8, true, 1);
		f_28f_a5_v(8, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(8, false);
	f_c56_a3_v(8, a0, a1);
}

void f_14af_a1_v(object a0)
{
	a0->add("r3_house_2_02");
	a0->add("r3_house7_01");
	a0->add("r3_house3_02_i2");
	a0->add("r3_house3_02");
	a0->add("r3_house7_02");
	a0->add("r3_house4_05_i2");
	a0->add("r3_house4_05");
	a0->add("r3_house4_03_i2");
	a0->add("r3_house4_04_i2");
	a0->add("r3_house4_04");
	a0->add("r3_house4_01_i2");
	a0->add("r3_house4_01");
	a0->add("r3_house_2_01");
	a0->add("r3_house4_02_i2");
	a0->add("r3_house4_02");
	a0->add("r3_house3_01_i2");
	a0->add("r3_house3_01");
}

void f_14e4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(9, false);
		f_2ec_a3_v(9, false, 1);
		f_22d_a5_v(9, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(9, a1);
	f_4f6_a3_v(9, a0, a1);
}

void f_150c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(9, true);
		f_2ec_a3_v(9, true, 1);
		f_240_a5_v(9, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(9, false);
	f_804_a3_v(9, a0, a1);
}

void f_1534_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(9, true);
		f_2ec_a3_v(9, true, 1);
		f_28f_a5_v(9, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(9, false);
	f_c56_a3_v(9, a0, a1);
}

void f_155c_a1_v(object a0)
{
	a0->add("r4_house_2_02");
	a0->add("r4_house3_03_i2");
	a0->add("r4_house3_03");
	a0->add("r4_house4_02_i2");
	a0->add("r4_house4_02");
	a0->add("r4_house4_01_i2");
	a0->add("r4_house4_01");
	a0->add("r4_house3_02_i2");
	a0->add("r4_house3_02");
	a0->add("r4_house_2_01");
	a0->add("r4_house3_01_i2");
	a0->add("r4_house3_01");
	a0->add("r4_house7_01");
	a0->add("r4_House6_01");
	a0->add("r4_house_2_03");
	a0->add("r4_House6_03");
	a0->add("r4_house_2_04");
}

void f_1591_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(10, false);
		f_2ec_a3_v(10, false, 1);
		f_22d_a5_v(10, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_325_a2_v(10, a1);
	f_4f6_a3_v(10, a0, a1);
}

void f_15b9_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(10, true);
		f_2ec_a3_v(10, true, 1);
		f_240_a5_v(10, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(10, false);
	f_804_a3_v(10, a0, a1);
}

void f_15e1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(10, true);
		f_2ec_a3_v(10, true, 1);
		f_28f_a5_v(10, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(10, false);
	f_c56_a3_v(10, a0, a1);
}

void f_1609_a1_v(object a0)
{
	a0->add("r5_house2_01");
	a0->add("r5_house2_02");
	a0->add("r5_house2_03");
	a0->add("r5_house3_01_i2");
	a0->add("r5_house3_01");
	a0->add("r5_house3_02_i2");
	a0->add("r5_house3_02");
	a0->add("r5_house3_03_i2");
	a0->add("r5_house3_03");
	a0->add("r5_house3_04_i2");
	a0->add("r5_house3_04");
	a0->add("r5_house3_05_i2");
	a0->add("r5_house3_05");
	a0->add("r5_house3_06_i2");
	a0->add("r5_house3_06");
	a0->add("r5_house3_07_i2");
	a0->add("r5_house3_07");
	a0->add("r5_House6_01");
}

void f_1641_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(11, false);
		f_2ec_a3_v(11, false, 1);
		f_22d_a5_v(11, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_325_a2_v(11, a1);
	f_4f6_a3_v(11, a0, a1);
}

void f_1669_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(11, true);
		f_2ec_a3_v(11, true, 1);
		f_240_a5_v(11, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(11, false);
	f_804_a3_v(11, a0, a1);
}

void f_1691_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(11, true);
		f_2ec_a3_v(11, true, 1);
		f_28f_a5_v(11, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(11, false);
	f_c56_a3_v(11, a0, a1);
}

void f_16b9_a1_v(object a0)
{
	a0->add("r6_house2_03");
	a0->add("r6_house4_01_i2");
	a0->add("r6_house4_02_i2");
	a0->add("r6_house4_02");
	a0->add("r6_house3_02_i2");
	a0->add("r6_house3_02");
	a0->add("r6_house3_01_i2");
	a0->add("r6_house3_01");
	a0->add("r6_house2_01");
	a0->add("r6_house7_01");
	a0->add("r6_House6_01");
	a0->add("r6_house2_02");
}

void f_16df_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(12, false);
		f_2ec_a3_v(12, false, 1);
		f_22d_a5_v(12, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_34a_a2_v(12, a1);
	f_4f6_a3_v(12, a0, a1);
}

void f_1707_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(12, true);
		f_2ec_a3_v(12, true, 1);
		f_240_a5_v(12, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(12, false);
	f_804_a3_v(12, a0, a1);
}

void f_172f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(12, true);
		f_2ec_a3_v(12, true, 1);
		f_28f_a5_v(12, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(12, false);
	f_c56_a3_v(12, a0, a1);
}

void f_1757_a1_v(object a0)
{
	a0->add("r7_house2_01");
	a0->add("r7_house2_02");
	a0->add("r7_house2_03");
	a0->add("r7_house2_04");
	a0->add("r7_house3_03_i2");
	a0->add("r7_house3_03");
	a0->add("r7_house3_04_i2");
	a0->add("r7_house3_04");
	a0->add("r7_house3_05_i2");
	a0->add("r7_house3_05");
	a0->add("r7_house3_06_i2");
	a0->add("r7_house3_01_i2");
	a0->add("r7_house3_01");
	a0->add("r7_house3_02_i2");
	a0->add("r7_house3_02");
}

void f_1786_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, false);
		f_2ec_a3_v(13, false, 1);
		f_22d_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_368_a2_v(13, a1);
	f_4f6_a3_v(13, a0, a1);
}

void f_17ae_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, true);
		f_2ec_a3_v(13, true, 1);
		f_240_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(13, false);
	f_804_a3_v(13, a0, a1);
}

void f_17d6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(13, true);
		f_2ec_a3_v(13, true, 1);
		f_28f_a5_v(13, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(13, false);
	f_c56_a3_v(13, a0, a1);
}

void f_17fe_a1_v(object a0)
{
	a0->add("lc_house7_03");
	a0->add("lc_house7_05");
	a0->add("lc_House6_05");
	a0->add("lc_house7_06");
	a0->add("lc_House6_02");
	a0->add("lc_house7_01");
	a0->add("lc_house_2_02");
	a0->add("lc_House6_01");
	a0->add("lc_house3_03_i2");
	a0->add("lc_house3_03");
	a0->add("lc_house7_04");
	a0->add("lc_house7_07");
	a0->add("lc_House6_03");
	a0->add("lc_House6_04");
}

void f_182a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(14, false);
		f_2ec_a3_v(14, false, 1);
		f_22d_a5_v(14, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_38d_a2_v(14, a1);
	f_462_a3_v(14, a0, a1);
}

void f_1852_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(14, true);
		f_2ec_a3_v(14, true, 1);
		f_240_a5_v(14, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(14, false);
	f_705_a3_v(14, a0, a1);
}

void f_187a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(14, true);
		f_2ec_a3_v(14, true, 1);
		f_28f_a5_v(14, a0, a2, a3, a4);
		f_e5_a2_v(a5, 2);
	}
	f_2ca_a2_v(14, false);
	f_ba2_a3_v(14, a0, a1);
}

void f_18a2_a1_v(object a0)
{
	a0->add("lc_house3_05_i2");
	a0->add("lc_house3_05");
	a0->add("lc_house3_06_i2");
	a0->add("lc_house3_06");
	a0->add("lc_House6_06");
	a0->add("lc_house3_04_i2");
	a0->add("lc_house3_04");
}

void f_18b9_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(15, false);
		f_2ec_a3_v(15, false, 1);
		f_22d_a5_v(15, a0, a2, a3, a4);
		f_e5_a2_v(a5, 0);
	}
	f_38d_a2_v(15, a1);
	f_462_a3_v(15, a0, a1);
}

void f_18e1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(15, true);
		f_2ec_a3_v(15, true, 1);
		f_240_a5_v(15, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(15, false);
	f_705_a3_v(15, a0, a1);
}

void f_1909_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2db_a2_v(15, true);
		f_2ec_a3_v(15, true, 1);
		f_240_a5_v(15, a0, a2, a3, a4);
		f_e5_a2_v(a5, 1);
	}
	f_2ca_a2_v(15, false);
	f_ba2_a3_v(15, a0, a1);
}

void OnTrigger(string a0, string a1)
{
	if (a0 == "playsound") {
		@PlaySound(a1);
	}
}

void OnConsole(string a0, string a1)
{
	if (a0 == "horror") {
		int L0;
		int L1;
		@_strtoi(L0, a1);
		g17->size(L1);
		if (L0 >= 0 && L0 < L1) {
			object L2;
			g17->get(L2, L0);
			f_e5_a2_v(L2, 1);
			@Trace("Replaced");
		} else {
			@Trace("Invalid region index");
		}
	} else {
		if (a0 == "nail") {
			int L3;
			int L4;
			@_strtoi(L3, a1);
			g17->size(L4);
			if (L3 >= 0 && L3 < L4) {
				object L5;
				g17->get(L5, L3);
				f_e5_a2_v(L5, 2);
				@Trace("Replaced");
			} else {
				@Trace("Invalid region index");
			}
		} else {
			if (a0 == "fogme") {
				object L6;
				object L7;
				Vector L8;
				object L9;
				L6 = f_43_a0_o();
				L6->GetScene(L7);
				L6->GetPosition(L8);
				@AddActorByType(L9, "fog", L7, L8, [0.0, 0.0, 1.0], "fog_stat.xml");
			}
		}
	}
}

object f_1991_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator("pt_guard_" + a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator doesn't exist for guard " + a1);
	} else {
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

object f_19a2_a2_o(object a0, int a1)
{
	return f_1991_a4_o(a0, "sklad" + a1, "pers_patrool", "key_guard_sklad" + a1 + ".xml");
}

object f_19b0_a2_o(object a0, int a1)
{
	return f_1991_a4_o(a0, "term" + a1, "pers_butcher", "guard_term.xml");
}

void f_19bb_a0_v(void)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (g0 == null) {
		g0 = f_19a2_a2_o(L0, 1);
		f_89_a2_v("warehouse4_guard1@door1", true);
	}
	if (g1 == null) {
		g1 = f_19a2_a2_o(L0, 2);
		f_89_a2_v("warehouse4_guard2@door1", true);
	}
	if (g2 == null) {
		g2 = f_19a2_a2_o(L0, 3);
		f_89_a2_v("warehouse4_guard3@door1", true);
	}
	if (g3 == null) {
		g3 = f_19a2_a2_o(L0, 4);
		f_89_a2_v("warehouse4_guard4@door1", true);
	}
	if (g4 == null) {
		g4 = f_19a2_a2_o(L0, 5);
		f_89_a2_v("warehouse4_guard5@door1", true);
	}
	if (g5 == null) {
		g5 = f_19a2_a2_o(L0, 6);
		f_89_a2_v("warehouse4_guard6@door1", true);
	}
}

void f_1a20_a0_v(void)
{
	@Trace("Setting arena...");
	if (g15 == null) {
		object L0;
		@GetMainOutdoorScene(L0);
		bool L1;
		Vector L2;
		Vector L3;
		L0->GetLocator("pt_arena_manager", L1, L2, L3);
		if (!L1) {
			@Trace("Locator doesn't exist for arena manager");
		} else {
			g15 = f_2d74_a3_o(L0, L2, L3);
		}
		int L4;
		L4 = 0;
		for (; L4 < 6; L4++) {
			object L5;
			L0->GetLocator("pt_arena_torch" + (L4 + 1), L1, L2, L3);
			if (!L1) {
				@Trace("Locator doesn't exist for arena torch " + (L4 + 1));
				continue;
			}
			@AddActorByType(L5, "scripted", L0, L2, L3, "torch.xml");
			g16->add(L5);
		}
		object L6;
		@FindActor(L6, "arena_light");
		L6->Switch(true);
	}
}

void f_1a62_a0_v(void)
{
	@Trace("Cleaning arena...");
	if (g15 != null) {
		g15->Remove();
		int L0;
		g16->size(L0);
		int L1;
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			g16->get(L2, L1);
			@Trigger(L2, "remove");
		}
		g16->clear();
		object L3;
		@FindActor(L3, "arena_light");
		L3->Switch(false);
	}
}

void f_1a87_a0_v(void)
{
	int L0;
	object L1;
	object L2;
	int L3;
	g17 = f_56_a0_o();
	g12 = f_56_a0_o();
	g13 = f_56_a0_o();
	g14 = f_56_a0_o();
	for (L0 = 0; L0 < 16; L0++) {
		g12->add(f_56_a0_o());
		g13->add(f_56_a0_o());
		g14->add(f_56_a0_o());
	}
	@CreateStringVector(L1);
	g17->add(L1);
	f_f0c_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_f86_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_101e_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_10dd_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_118a_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1240_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1308_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1370_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1414_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_14af_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_155c_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1609_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_16b9_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_1757_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_17fe_a1_v(L1);
	@CreateStringVector(L1);
	g17->add(L1);
	f_18a2_a1_v(L1);
	@GetMainOutdoorScene(L2);
	for (L3 = 1; L3 <= 17; L3++) {
		f_77_a4_o(L2, "pt_bull" + L3, "pers_bull", "bull.xml");
	}
}

void f_1b5d_a0_v(void)
{
	object L0;
	@GetMainOutdoorScene(L0);
	g0 = f_19a2_a2_o(L0, 1);
	g1 = f_19a2_a2_o(L0, 2);
	g2 = f_19a2_a2_o(L0, 3);
	g3 = f_19a2_a2_o(L0, 4);
	g4 = f_19a2_a2_o(L0, 5);
	g5 = f_19a2_a2_o(L0, 6);
	g6 = f_19b0_a2_o(L0, 1);
	g7 = f_19b0_a2_o(L0, 2);
	g8 = f_19b0_a2_o(L0, 3);
	g9 = f_19b0_a2_o(L0, 4);
	g10 = f_19b0_a2_o(L0, 5);
	g11 = f_19b0_a2_o(L0, 6);
	g16 = f_56_a0_o();
	f_1a20_a0_v();
}

void f_1bcb_a2_v(int a0, int a1)
{
	if (a1 == 5) {
		f_1a20_a0_v();
	} else {
		if (a1 == 22) {
			f_1a62_a0_v();
		}
	}
	if (a1 == 0) {
		if (a0 == 3) {
			f_19bb_a0_v();
		} else {
			if (a0 == 9) {
				f_1bea_a0_v();
			}
		}
	}
}

void f_1bea_a0_v(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddScriptedActor(L1, "big_gun", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", L0, [0.0, 0.0, 0.0]);
}

bool f_1bfa_a2_b(int a0, float a1)
{
	if (a0 > 16384 && a0 < 16396) {
		int L0;
		L0 = a0 - 16384;
		f_2cbe_a1_v(L0);
		return true;
	}
	if (a0 > 32768 && a0 < 33056) {
		int L1;
		int L2;
		L1 = (a0 - 32768) / 24;
		L2 = (a0 - 32768) % 24;
		f_1c70_a2_v(L1, L2);
		return true;
	}
	return false;
}

void f_1c28_a0_v(void)
{
	float L0;
	@GetGameTime(L0);
	int L1;
	for (L1 = 1; L1 < 12; L1++) {
		@SetTimeEvent(16384 + L1, 24 * L1);
	}
	int L2;
	L2 = 0;
	for (; L2 < 288; L2++) {
		float L3;
		L3 = L2;
		if (L3 < L0) {
			continue;
		}
		@SetTimeEvent(32768 + L2, L3);
	}
	int L4;
	for (L4 = 0; L4 < 16; L4++) {
		@SetVariable(f_df_a1_s(L4), 0);
		f_2db_a2_v(L4, false);
	}
	f_1c70_a2_v(0, L0 % 24);
	object L5;
	@GetMainOutdoorScene(L5);
	L5->SwitchLights(0, L0 < 10 || L0 >= 18);
}

void f_1c70_a2_v(int a0, int a1)
{
	int L0;
	@Trace("City update");
	L0 = 0;
	for (; L0 < 16; L0++) {
		f_1a9_a1_v(L0);
		if (f_143_a1_b(L0)) {
			f_1cc0_a3_v(L0, a0, a1);
		} else {
			if (f_165_a1_b(L0)) {
				f_1da1_a3_v(L0, a0, a1);
				continue;
			}
			f_1e82_a3_v(L0, a0, a1);
		}
	}
	if (a1 == 0) {
		f_2d2d_a1_v(a0);
	}
	if (a1 == 10) {
		object L1;
		@Trace("day time");
		@GetMainOutdoorScene(L1);
		L1->SwitchLights(0, false);
	} else {
		if (a1 == 18) {
			object L2;
			@Trace("night time");
			@GetMainOutdoorScene(L2);
			L2->SwitchLights(0, true);
		}
	}
}

void f_1cc0_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g12->get(L0, a0);
	g13->get(L1, a0);
	g14->get(L2, a0);
	g17->get(L3, a0);
	if (a0 == 0) {
		f_f0e_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_fa6_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_1065_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_1112_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_11c8_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_1290_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_130a_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_139c_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1437_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_14e4_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_1591_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1641_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_16df_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1786_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_182a_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_18b9_a6_v(a1, a2, L0, L1, L2, L3);
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
}

void f_1da1_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g12->get(L0, a0);
	g13->get(L1, a0);
	g14->get(L2, a0);
	g17->get(L3, a0);
	if (a0 == 0) {
		f_f36_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_fce_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_108d_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_113a_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_11f0_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_12b8_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_132c_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_13c4_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_145f_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_150c_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_15b9_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1669_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1707_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_17ae_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1852_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_18e1_a6_v(a1, a2, L0, L1, L2, L3);
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
}

void f_1e82_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g12->get(L0, a0);
	g13->get(L1, a0);
	g14->get(L2, a0);
	g17->get(L3, a0);
	if (a0 == 0) {
		f_f5e_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_ff6_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_10b5_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_1162_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_1218_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_12e0_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_134e_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_13ec_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1487_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_1534_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_15e1_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1691_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_172f_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_17d6_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_187a_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1909_a6_v(a1, a2, L0, L1, L2, L3);
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
}

int f_1f63_a0_i(void)
{
	int L0;
	@AddMessage(14087, 14086, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1f6e_a0_i(void)
{
	int L0;
	@AddMessage(14089, 14088, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1f79_a0_i(void)
{
	int L0;
	@AddMessage(14091, 14090, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1f84_a0_i(void)
{
	int L0;
	@AddMessage(14093, 14092, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1f8f_a0_i(void)
{
	int L0;
	@AddMessage(14095, 14094, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1f9a_a0_i(void)
{
	int L0;
	@AddMessage(14097, 14096, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fa5_a0_i(void)
{
	int L0;
	@AddMessage(14099, 14098, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fb0_a0_i(void)
{
	int L0;
	@AddMessage(14101, 14100, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fbb_a0_i(void)
{
	int L0;
	@AddMessage(14103, 14102, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fc6_a0_i(void)
{
	int L0;
	@AddMessage(14105, 14104, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fd1_a0_i(void)
{
	int L0;
	@AddMessage(14107, 14106, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fdc_a0_i(void)
{
	int L0;
	@AddMessage(15484, 15483, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1fe7_a0_i(void)
{
	int L0;
	@AddMessage(14529, 14528, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1ff2_a0_i(void)
{
	int L0;
	@AddMessage(14531, 14530, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_1ffd_a0_i(void)
{
	int L0;
	@AddMessage(15493, 15492, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2008_a0_i(void)
{
	int L0;
	@AddMessage(15489, 15488, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2013_a0_i(void)
{
	int L0;
	@AddMessage(15491, 15490, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_201e_a0_i(void)
{
	int L0;
	@AddMessage(1160, 1159, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2029_a0_i(void)
{
	int L0;
	@AddMessage(1158, 1157, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2034_a0_i(void)
{
	int L0;
	@AddMessage(1154, 1153, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_203f_a0_i(void)
{
	int L0;
	@AddMessage(1152, 1151, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_204a_a0_i(void)
{
	int L0;
	@AddMessage(1156, 1155, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2055_a0_i(void)
{
	int L0;
	@AddMessage(1175, 1174, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2060_a0_i(void)
{
	int L0;
	@AddMessage(14525, 14524, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_206b_a0_i(void)
{
	int L0;
	@AddMessage(14527, 14526, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2076_a0_i(void)
{
	int L0;
	@AddMessage(15303, 15302, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2081_a0_i(void)
{
	int L0;
	@AddMessage(2851, 2850, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_208c_a0_i(void)
{
	int L0;
	@AddMessage(15334, 15333, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_2097_a0_i(void)
{
	int L0;
	@AddMessage(2853, 2852, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20a2_a0_i(void)
{
	int L0;
	@AddMessage(3175, 3174, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20ad_a0_i(void)
{
	int L0;
	@AddMessage(3177, 3176, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20b8_a0_i(void)
{
	int L0;
	@AddMessage(3181, 3180, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20c3_a0_i(void)
{
	int L0;
	@AddMessage(3179, 3178, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20ce_a0_i(void)
{
	int L0;
	@AddMessage(12530, 12529, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20d9_a0_i(void)
{
	int L0;
	@AddMessage(15382, 15381, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20e4_a0_i(void)
{
	int L0;
	@AddMessage(15433, 15432, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20ef_a0_i(void)
{
	int L0;
	@AddMessage(15439, 15438, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

int f_20fa_a0_i(void)
{
	int L0;
	@AddMessage(15431, 15430, L0);
	@SetVariable("player_mail", 1);
	return L0;
}

void f_2105_a2_v(object a0, object a1)
{
	f_89_a2_v("warehouse_rubin@door1", false);
}

void f_210c_a2_v(object a0, object a1)
{
	f_89_a2_v("warehouse_rubin@door1", true);
}

void f_2113_a2_v(object a0, object a1)
{
	f_89_a2_v("theater@door1", true);
}

void f_211a_a2_v(object a0, object a1)
{
	f_89_a2_v("theater@door1", false);
}

void f_2121_a2_v(object a0, object a1)
{
	f_278e_a0_v();
}

void f_2126_a2_v(object a0, object a1)
{
	f_89_a2_v("termitnik@door1", true);
}

void f_212d_a2_v(object a0, object a1)
{
	f_89_a2_v("termitnik@door1", false);
}

void f_2134_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_2c10_a0_v();
}

void f_213d_a2_v(object a0, object a1)
{
	f_89_a2_v("factory@door1", false);
}

void f_2144_a2_v(object a0, object a1)
{
	f_89_a2_v("icot_eva@door1", true);
}

void f_214b_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d1AlexandrAboutKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaAboutMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1EvaGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaGotoSimon");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1EvaInfo");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1GeorgAboutAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1GeorgAboutBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1GeorgGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1GeorgInfo");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01GrifAboutRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01MarkAboutLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01NotkinAboutRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02AnnaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02ViktorGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1BigVladAboutKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1BigVladAboutMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1EvaAboutKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q03KapellaGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q03MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1EvaAboutKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04KaterinaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04MishkaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q04Spi4kaGotoPowderHouse");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(2);
	f_272f_a1_b(7);
	f_272f_a1_b(37);
	f_272f_a1_b(43);
	@Trace("Day1 cleanup");
}

void f_220e_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d2q01AlexandrGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q01AlexandrGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q01AlexandrGotoGeorg");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q01AnnaGotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q01KapellaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q01WomanDGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02AndreiGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02AndreiGotoGrifSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02AndreiGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02AndreiGotoPetrSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02EvaGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02EvaGotoAndreiSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02EvaGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02MariaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02PetrGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02PetrGotoAndreiSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02PetrRefusedSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02ReadyAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03BirdmaskGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03BirdmaskGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoMoneyFoodSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q03LaraGotoSkladSelf");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(10);
	f_272f_a1_b(11);
	f_272f_a1_b(12);
}

void f_22d8_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d3q01AlexandrGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01AlexandrGotoOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladAgreed");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladAgreedSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladGotoGeorg");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladGotoGeorgSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01GeorgAgreed");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01GeorgAgreedSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaButchersWillHelpSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01RubinGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01RubinGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02BigVladGotoHan");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02GeorgGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02GeorgGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02GeorgSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02HanGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02MishkaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02ViktorGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02ViktorGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q03KapellaBoyLocation");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q03KapellaBoyLocationSelf");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(25);
	f_272f_a1_b(26);
	f_272f_a1_b(27);
}

void f_2394_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSklad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoSoborAndTheaterSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01BigVladGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoMladVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01LaraGotoOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01MladVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01OspinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01WastedMale");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q01Whitemask");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02BirdmaskNearHome");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoAJLSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q02MladVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrAboutVolnica");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03AlexandrGotoGrifSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(20);
	f_272f_a1_b(21);
	f_272f_a1_b(22);
}

void f_245e_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d5q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWantsMoney");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWillHelp");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01KaterinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01PatrolGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01RubinGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoGorbun");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoGorbunSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02AnnaGotoKabak");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02GorbunFindTheDaughter");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q02NudeMeeting");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03BirdmaskBringMoneySelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03BirdmaskGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03BirdmaskGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03MladVladSavePrisonersSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03SavePrisoners");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q03ViktorSavePrisonersSelf");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(139);
	f_272f_a1_b(148);
	f_272f_a1_b(154);
}

void f_2505_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d6q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexandrGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01AlexangrGotoJulLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoAnnaOspinaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KaterinagotoLaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01KillerIsKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoAlxBigSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q01ViktorGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02BigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02KapellaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d6q02MladVladGotoBigVladSelf");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(111);
	f_272f_a1_b(102);
	f_272f_a1_b(107);
}

void f_2597_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d7q01AglajaFindLierSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01AglajaGotoBirdmaskSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskD");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskM");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q01BirdmaskU");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q02AlexandrGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q02MarkGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q02MarkGotoCemetery");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(165);
	f_272f_a1_b(170);
}

void f_25df_a2_v(object a0, object a1)
{
	f_89_a2_v("mnogogrannik@door1", true);
}

void f_25e6_a2_v(object a0, object a1)
{
	f_89_a2_v("mnogogrannik@door1", false);
}

void f_25ed_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d8q01MatGotoToyHouse");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(182);
}

void f_2600_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2740_a0_o();
	L0->FindMark(L1, "d10q01AglajaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q01SoldierGotoPetr");
	if (L1) {
		L1->Remove();
	}
	f_272f_a1_b(186);
}

void f_261a_a2_v(object a0, object a1)
{
	f_272f_a1_b(192);
	f_272f_a1_b(197);
}

void f_2624_a2_v(object a0, object a1)
{
	f_99_a2_b("quest_d12_01", "init_mnogogrannik");
}

void f_262b_a2_v(object a0, object a1)
{
	f_99_a2_b("quest_d12_01", "init_theater");
}

void f_2632_a2_v(object a0, object a1)
{
	f_89_a2_v("sobor@door1", true);
}

void f_2639_a2_v(object a0, object a1)
{
	f_99_a2_b("quest_d12_01", "place_birdmask");
}

bool f_2640_a1_b(object a0)
{
	if (f_5c_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_264c_a1_b(object a0)
{
	if (f_5c_a1_i("d1q01KaterinaUHave1day") == 1) {
		return true;
	}
	return false;
}

bool f_2658_a1_b(object a0)
{
	if (f_5c_a1_i("d6q03") == 0) {
		return true;
	}
	return false;
}

bool f_2664_a1_b(object a0)
{
	if (f_5c_a1_i("resque_list") != 0) {
		return true;
	}
	return false;
}

bool f_2670_a1_b(object a0)
{
	if (f_5c_a1_i("d11q03BurahVisit") != 0) {
		return true;
	}
	return false;
}

bool f_267c_a1_b(object a0)
{
	if (f_5c_a1_i("d11q04KlaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2688_a1_b(object a0)
{
	return true;
	return false;
}

bool f_268d_a1_b(object a0)
{
	if (f_5c_a1_i("d3RubinVisit") == 1) {
		return true;
	}
	return false;
}

bool f_2699_a1_b(object a0)
{
	if (f_5c_a1_i("d3GeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26a5_a1_b(object a0)
{
	if (f_5c_a1_i("d4BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26b1_a1_b(object a0)
{
	if (f_5c_a1_i("d5RubinVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26bd_a1_b(object a0)
{
	if (f_5c_a1_i("d6KapellaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26c9_a1_b(object a0)
{
	if (f_5c_a1_i("d6MariaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26d5_a1_b(object a0)
{
	if (f_5c_a1_i("d6BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26e1_a1_b(object a0)
{
	if (f_5c_a1_i("d6ViktorVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26ed_a1_b(object a0)
{
	if (f_5c_a1_i("d7AglajaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_26f9_a1_b(object a0)
{
	if (f_5c_a1_i("d11AglajaVisit") == 1) {
		return true;
	}
	return false;
}

object f_2705_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2712_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2705_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SetVariable("player_diary", 1);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

bool f_272f_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_2705_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

object f_2740_a0_o(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("Can't find main outdoor scene");
		L1 = null;
		return L1;
	}
	L0->GetMap(L1);
	return L1;
}

bool f_2751_a2_b(int a0, float a1)
{
	if (a0 > 40000 && a0 < 40288) {
		int L0;
		int L1;
		L0 = (a0 - 40000) / 24;
		L1 = (a0 - 40000) % 24;
		f_1bcb_a2_v(L0 + 1, L1);
		f_2cb5_a2_v(L0 + 1, L1);
		return true;
	}
	return false;
}

void f_2774_a0_v(void)
{
	float L0;
	int L1;
	@GetGameTime(L0);
	L1 = 1;
	for (; L1 < 288; L1++) {
		float L2;
		L2 = 1.0 * L1;
		if (L2 < L0) {
			continue;
		}
		@SetTimeEvent(40000 + L1, L2);
	}
	f_1b5d_a0_v();
	f_2c83_a0_v();
}

void f_278e_a0_v(void)
{
	object L0;
	@Trace("Adding diary entry");
	@CreateDiaryEntry(L0, 30, 0, 4079);
	f_2712_a2_b(L0, -1);
}

void f_279e_a2_v(int a0, float a1)
{
	if (a0 == 45003) {
		f_214b_a2_v(g18, g18);
		f_201e_a0_i();
		f_61_a1_o("quest_d2_01");
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45015) {
		if (f_2658_a1_b(g18)) {
			f_20ce_a0_i();
		}
	}
	if (a0 == 45013) {
		int L0;
		f_2505_a2_v(g18, g18);
		f_b1_a1_b("quest_d6_01");
		f_61_a1_o("quest_d7_01");
		@GetVariable("d6q01", L0);
		if (L0 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45028) {
		f_1fc6_a0_i();
	}
	if (a0 == 45029) {
		f_1fd1_a0_i();
	}
	if (a0 == 45026) {
		f_1fb0_a0_i();
	}
	if (a0 == 45027) {
		f_1fbb_a0_i();
	}
	if (a0 == 45012) {
		int L1;
		f_245e_a2_v(g18, g18);
		f_20a2_a0_i();
		f_b1_a1_b("quest_d5_01");
		f_61_a1_o("quest_d6_01");
		@GetVariable("d5q01", L1);
		if (L1 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45016) {
		int L2;
		f_2597_a2_v(g18, g18);
		f_b1_a1_b("quest_d7_01");
		f_61_a1_o("quest_d8_01");
		@GetVariable("d7q01", L2);
		if (L2 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45022) {
		f_1f84_a0_i();
	}
	if (a0 == 45023) {
		f_1f8f_a0_i();
	}
	if (a0 == 45031) {
		int L3;
		f_2600_a2_v(g18, g18);
		f_b1_a1_b("quest_d10_01");
		f_61_a1_o("quest_d11_01");
		@GetVariable("d10q01", L3);
		if (L3 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45032) {
		f_61_a1_o("quest_d11_02");
	}
	if (a0 == 45011) {
		int L4;
		f_2394_a2_v(g18, g18);
		f_b1_a1_b("quest_d4_01");
		f_6c_a1_o("quest_d5_01");
		@GetVariable("d4q01", L4);
		if (L4 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45024) {
		f_1f9a_a0_i();
	}
	if (a0 == 45025) {
		f_1fa5_a0_i();
	}
	if (a0 == 45020) {
		f_1f6e_a0_i();
	}
	if (a0 == 45021) {
		f_1f79_a0_i();
	}
	if (a0 == 45008) {
		if (f_2640_a1_b(g18)) {
			f_2034_a0_i();
		}
	}
	if (a0 == 45054) {
		f_1ffd_a0_i();
	}
	if (a0 == 45056) {
		f_2632_a2_v(g18, g18);
		f_2639_a2_v(g18, g18);
	}
	if (a0 == 45017) {
		int L5;
		f_b1_a1_b("quest_d8_01");
		f_61_a1_o("quest_d9_01");
		@GetVariable("d8q01", L5);
		if (L5 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45019) {
		f_1f63_a0_i();
	}
	if (a0 == 45007) {
		f_211a_a2_v(g18, g18);
	}
	if (a0 == 45006) {
		int L6;
		f_22d8_a2_v(g18, g18);
		f_b1_a1_b("quest_d3_01");
		f_61_a1_o("quest_d4_01");
		@GetVariable("d3q01", L6);
		if (L6 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45049) {
		if (!f_26ed_a1_b(g18)) {
			f_20e4_a0_i();
		}
	}
	if (a0 == 45050) {
		f_20ef_a0_i();
	}
	if (a0 == 45051) {
		if (!f_26f9_a1_b(g18)) {
			f_1fdc_a0_i();
		}
	}
	if (a0 == 45052) {
		f_25e6_a2_v(g18, g18);
		f_2624_a2_v(g18, g18);
		f_2008_a0_i();
	}
	if (a0 == 45053) {
		f_211a_a2_v(g18, g18);
		f_262b_a2_v(g18, g18);
		f_2013_a0_i();
	}
	if (a0 == 45038) {
		if (!f_2688_a1_b(g18)) {
			f_2055_a0_i();
		}
	}
	if (a0 == 45039) {
		if (!f_268d_a1_b(g18)) {
			f_2105_a2_v(g18, g18);
			f_2081_a0_i();
		}
	}
	if (a0 == 45040) {
		if (!f_2699_a1_b(g18)) {
			f_2076_a0_i();
		}
	}
	if (a0 == 45041) {
		if (!f_26a5_a1_b(g18)) {
			f_208c_a0_i();
		}
	}
	if (a0 == 45010) {
		if (!f_264c_a1_b(g18)) {
			f_204a_a0_i();
		}
	}
	if (a0 == 45033) {
		if (!f_2664_a1_b(g18)) {
			f_2060_a0_i();
		}
	}
	if (a0 == 45034) {
		if (!f_2664_a1_b(g18)) {
			f_2134_a2_v(g18, g18);
			f_206b_a0_i();
		}
	}
	if (a0 == 45035) {
		if (!f_267c_a1_b(g18)) {
			f_212d_a2_v(g18, g18);
			f_1ff2_a0_i();
		}
	}
	if (a0 == 45036) {
		if (!f_2670_a1_b(g18)) {
			f_213d_a2_v(g18, g18);
			f_1fe7_a0_i();
		}
	}
	if (a0 == 45042) {
		int L7;
		f_261a_a2_v(g18, g18);
		f_b1_a1_b("quest_d11_01");
		f_61_a1_o("quest_d12_01");
		@GetVariable("d11q01", L7);
		if (L7 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45009) {
		f_2029_a0_i();
	}
	if (a0 == 45043) {
		if (!f_26b1_a1_b(g18)) {
			f_2097_a0_i();
		}
	}
	if (a0 == 45044) {
		if (!f_26c9_a1_b(g18)) {
			f_20c3_a0_i();
		}
	}
	if (a0 == 45045) {
		if (!f_26bd_a1_b(g18)) {
			f_20b8_a0_i();
		}
	}
	if (a0 == 45046) {
		if (!f_26d5_a1_b(g18)) {
			f_20ad_a0_i();
		}
	}
	if (a0 == 45047) {
		if (!f_26e1_a1_b(g18)) {
			f_20d9_a0_i();
		}
	}
	if (a0 == 45048) {
		f_20fa_a0_i();
	}
	if (a0 == 45018) {
		int L8;
		f_25ed_a2_v(g18, g18);
		f_b1_a1_b("quest_d9_01");
		f_61_a1_o("quest_d10_01");
		@GetVariable("d9q01", L8);
		if (L8 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
	if (a0 == 45005) {
		int L9;
		f_220e_a2_v(g18, g18);
		f_b1_a1_b("quest_d2_01");
		f_61_a1_o("quest_d3_01");
		@GetVariable("d2q01", L9);
		if (L9 == 1000) {
			f_a5_a3_b("volonteers_danko", "rescue_locked", "");
		}
		f_a5_a3_b("volonteers_danko", "update", "");
	}
}

void f_2aff_a0_v(void)
{
	g18 = null;
	f_2144_a2_v(g18, g18);
	f_210c_a2_v(g18, g18);
	f_2113_a2_v(g18, g18);
	f_2121_a2_v(g18, g18);
	f_2126_a2_v(g18, g18);
	f_25df_a2_v(g18, g18);
	f_203f_a0_i();
	f_61_a1_o("volonteers_danko");
	@SetTimeEvent(45003, 24.0);
	@SetTimeEvent(45015, 129.0);
	@SetTimeEvent(45013, 144.0);
	@SetTimeEvent(45028, 239.0);
	@SetTimeEvent(45029, 263.0);
	@SetTimeEvent(45026, 191.0);
	@SetTimeEvent(45027, 215.0);
	@SetTimeEvent(45012, 120.0);
	@SetTimeEvent(45016, 168.0);
	@SetTimeEvent(45022, 95.0);
	@SetTimeEvent(45023, 119.0);
	@SetTimeEvent(45031, 240.0);
	@SetTimeEvent(45032, 245.0);
	@SetTimeEvent(45011, 96.0);
	@SetTimeEvent(45024, 143.0);
	@SetTimeEvent(45025, 167.0);
	@SetTimeEvent(45020, 47.0);
	@SetTimeEvent(45021, 71.0);
	@SetTimeEvent(45008, 10.0);
	@SetTimeEvent(45054, 272.0);
	@SetTimeEvent(45056, 266.0);
	@SetTimeEvent(45017, 196.0);
	@SetTimeEvent(45019, 23.0);
	@SetTimeEvent(45007, 17.920000076293945);
	@SetTimeEvent(45006, 72.0);
	@SetTimeEvent(45049, 152.07000732421875);
	@SetTimeEvent(45050, 174.0);
	@SetTimeEvent(45051, 249.35000610351562);
	@SetTimeEvent(45052, 276.0);
	@SetTimeEvent(45053, 279.0);
	@SetTimeEvent(45038, 35.0);
	@SetTimeEvent(45039, 60.0);
	@SetTimeEvent(45040, 55.0);
	@SetTimeEvent(45041, 80.0);
	@SetTimeEvent(45010, 16.0);
	@SetTimeEvent(45033, 32.0);
	@SetTimeEvent(45034, 41.0);
	@SetTimeEvent(45035, 253.0);
	@SetTimeEvent(45036, 255.0);
	@SetTimeEvent(45042, 264.0);
	@SetTimeEvent(45009, 23.5);
	@SetTimeEvent(45043, 108.0);
	@SetTimeEvent(45044, 127.0);
	@SetTimeEvent(45045, 127.5);
	@SetTimeEvent(45046, 128.0);
	@SetTimeEvent(45047, 132.44000244140625);
	@SetTimeEvent(45048, 154.0);
	@SetTimeEvent(45018, 216.0);
	@SetTimeEvent(45005, 48.0);
}

void f_2c04_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_2c10_a0_v(void)
{
	int L0;
	L0 = 0;
	for (; L0 < 3; L0++) {
		int L1;
		@irand(L1, 13);
		if (L1 == 0) {
			f_2c04_a1_v(11);
		} else {
			if (L1 == 1) {
				f_2c04_a1_v(18);
				continue;
			}
			if (L1 == 2) {
				f_2c04_a1_v(21);
				continue;
			}
			if (L1 == 3) {
				f_2c04_a1_v(2);
				continue;
			}
			if (L1 == 4) {
				f_2c04_a1_v(9);
				continue;
			}
			if (L1 == 5) {
				f_2c04_a1_v(13);
				continue;
			}
			if (L1 == 6) {
				f_2c04_a1_v(24);
				continue;
			}
			if (L1 == 7) {
				f_2c04_a1_v(10);
				continue;
			}
			if (L1 == 8) {
				f_2c04_a1_v(20);
				continue;
			}
			if (L1 == 9) {
				f_2c04_a1_v(21);
				continue;
			}
			if (L1 == 10) {
				f_2c04_a1_v(3);
				continue;
			}
			if (L1 == 11) {
				f_2c04_a1_v(19);
				continue;
			}
			if (L1 == 12) {
				f_2c04_a1_v(26);
			}
		}
	}
}

void f_2c83_a0_v(void)
{
	@SetVariable("player", 0);
}

bool f_2c88_a1_b(int a0)
{
	if (a0 == 6) {
		return false;
	}
	if (f_d9_a1_b(4)) {
		if (a0 == 15) {
			return false;
		}
		if (a0 == 9) {
			return false;
		}
	} else {
		if (f_d9_a1_b(5)) {
			if (a0 == 15) {
				return false;
			}
		} else {
			if (f_d9_a1_b(6)) {
				if (a0 == 15) {
					return false;
				}
			}
		}
	}
	return true;
}

void f_2cb5_a2_v(int a0, int a1)
{
	@Trace("Updating game " + a0 + " " + a1);
}

void f_2cbe_a1_v(int a0)
{
	int L0;
	int L1;
	int L2;
	@Trace("Disease update");
	L0 = 0;
	if (a0 == 0) {
		L0 = 0;
	} else {
		if (a0 == 1) {
			L0 = 0;
		} else {
			if (a0 == 2) {
				L0 = 4;
			} else {
				if (a0 == 3) {
					L0 = 4;
				} else {
					if (a0 == 4) {
						L0 = 4;
					} else {
						if (a0 == 5) {
							L0 = 4;
						} else {
							if (a0 == 6) {
								L0 = 5;
							} else {
								if (a0 == 7) {
									L0 = 6;
								} else {
									if (a0 == 8) {
										L0 = 7;
									} else {
										if (a0 == 9) {
											L0 = 7;
										} else {
											if (a0 == 10) {
												L0 = 7;
											} else {
												if (a0 == 11) {
													L0 = 7;
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
	@Trace("Diseased regions : " + L0);
	L1 = 0;
	for (; L1 < 16; L1++) {
		if (f_165_a1_b(L1)) {
			f_197_a1_v(L1);
		} else {
			if (f_187_a1_b(L1)) {
				f_153_a1_v(L1);
			}
		}
	}
	L2 = f_10b_a0_i();
	if (L2 < L0) {
		int L3;
		int L4;
		L3 = L0 - L2;
		for (L4 = 0; L4 < L3; L4++) {
			f_11d_a0_v();
		}
	}
}

void f_2d2d_a1_v(int a0)
{
	if (a0 == 1) {
		object L0;
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(L0, "r4_house_2_02");
		@ReplaceScene(L0, "s_r4_house_2_02.isc");
	} else {
		if (a0 == 3) {
			object L1;
			@Trace("Special diseased house: house7_03");
			@GetSceneByName(L1, "house7_03");
			@ReplaceScene(L1, "s_house7_03.isc");
		} else {
			if (a0 == 5) {
				object L2;
				@Trace("Special house: sobor (with corpses)");
				@GetSceneByName(L2, "sobor");
				@ReplaceScene(L2, "sobor_trup.isc");
			} else {
				if (a0 == 6) {
					object L3;
					@Trace("Special house: sobor (normal)");
					@GetSceneByName(L3, "sobor");
					@ReplaceScene(L3, "sobor.isc");
				} else {
					if (a0 == 7) {
						object L4;
						@Trace("Special diseased house: r4_house_2_02");
						@GetSceneByName(L4, "r4_house_2_02");
						@ReplaceScene(L4, "s_r4_house_2_02.isc");
					}
				}
			}
		}
	}
}

object f_2d74_a3_o(object a0, Vector a1, Vector a2)
{
	object L0;
	a0->AddStationaryActor(L0, a1, a2, "pers_butcher", "Danko_arena_manager.xml");
	return L0;
}

