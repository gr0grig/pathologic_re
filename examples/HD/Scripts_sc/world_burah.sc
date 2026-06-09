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

maintask t0
{
	void OnGameTime(int a0, float a1)
	{
		if (f_228b_a2_b(a0, a1)) {
			return;
		}
		if (f_3015_a2_b(a0, a1)) {
			return;
		}
		f_3075_a2_v(a0, a1);
	}

	void init(void)
	{
		@SetVariable("branch", 1);
		@SetSaveProperty(0, 1);
		f_3b_a0_v();
		f_1eb2_a0_v();
		f_22c2_a0_v();
		f_3052_a0_v();
		f_363f_a1_v(f_ea_a0_f());
		f_6f_a1_o("quest_b1_02");
		@AdvanceGameTime(0.6666666865348816);
		for (; ; ) {
			@Hold();
		}
	}
}

void f_3b_a0_v(void)
{
	object L0;
	object L1;
	bool L2;
	Vector L3;
	Vector L4;
	@FindActor(L0, "player");
	@GetMainOutdoorScene(L1);
	if (!L1) {
		@Trace("Starting scene not found");
		return;
	}
	L1->GetLocator("pt_birth_Burah", L2, L3, L4);
	if (L2) {
		@Teleport(L0, L1, L3, L4);
	}
}

object f_51_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_58_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

object f_64_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_6a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_6f_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_7a_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

object f_85_a4_o(object a0, string a1, string a2, string a3)
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

void f_97_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_a8_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		if (a1) {
			L0->Close();
		}
		L0->SetProperty("locked", a1);
	}
}

bool f_bd_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_c9_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

void f_d5_a1_v(object a0)
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

float f_ea_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_ef_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_f4_a0_v(void)
{
	@SetSepia(0, 0);
}

string f_f9_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

void f_ff_a2_v(object a0, int a1)
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
	for (L2 = 0; L2 < L0; L2++) {
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

int f_125_a0_i(void)
{
	int L0;
	int L1;
	L0 = 0;
	for (L1 = 0; L1 < 16; L1++) {
		if (f_17c_a1_b(L1)) {
			L0 = L0 + 1;
		}
	}
	return L0;
}

void f_137_a1_v(int a0)
{
	int L0;
	int L1;
	@irand(L0, 16);
	for (L1 = 0; L1 < 16; L1++) {
		int L2;
		L2 = (L1 + L0) % 16;
		if (f_15e_a1_b(L2) && f_3903_a2_b(L2, a0)) {
			f_188_a1_v(L2);
			@Trace("Diseased Region: " + L2);
			return;
		}
	}
}

bool f_15e_a1_b(int a0)
{
	int L0;
	@GetVariable(f_f9_a1_s(a0), L0);
	return (L0 & 3) == 0;
}

void f_16a_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_f9_a1_s(a0), L0);
	L1 = L0 & 252 | 0;
	@SetVariable(f_f9_a1_s(a0), L1);
}

bool f_17c_a1_b(int a0)
{
	int L0;
	@GetVariable(f_f9_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

void f_188_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_f9_a1_s(a0), L0);
	L1 = L0 & 252 | 1;
	@SetVariable(f_f9_a1_s(a0), L1);
}

bool f_19a_a1_b(int a0)
{
	int L0;
	@GetVariable(f_f9_a1_s(a0), L0);
	return (L0 & 3) == 2;
}

void f_1a6_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_f9_a1_s(a0), L0);
	L1 = L0 & 252 | 2;
	@SetVariable(f_f9_a1_s(a0), L1);
}

void f_1b8_a1_v(int a0)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: main outdoor scene not found");
		return;
	}
	L0->RemoveAllRegionActors(a0);
}

void f_1c5_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3);
}

void f_1d2_a6_v(int a0, string a1, string a2, int a3, int a4, int a5)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3, a4, a5);
}

void f_1df_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCountByType(a0, a1, a2, a3);
}

void f_1ec_a2_v(int a0, bool a1)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	L0->GetGroupActors(L1, 101 + a0);
	if (L1) {
		bool L2;
		object L3;
		for (; L1->Next(L2, L3), L2; ) {
			if (f_58_a2_b(L3, "locked")) {
				L3->SetProperty("locked", a1);
			} else {
				@Trace("Actor \"" + L3 + "\" can't be locked");
			}
		}
	}
}

void f_20e_a4_v(string a0, object a1, string a2, string a3)
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

void f_224_a2_v(string a0, object a1)
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

void f_23c_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1ec_a2_v(a0, true);
	f_d5_a1_v(a2);
	f_d5_a1_v(a3);
	f_d5_a1_v(a4);
}

void f_24f_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1ec_a2_v(a0, false);
	f_d5_a1_v(a2);
	f_d5_a1_v(a3);
	f_d5_a1_v(a4);
	if (a1 < 8) {
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
		f_224_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	} else {
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
		f_224_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	}
}

void f_29e_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_1ec_a2_v(a0, false);
	f_d5_a1_v(a2);
	f_d5_a1_v(a3);
	f_d5_a1_v(a4);
	if (a1 < 8) {
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
	} else {
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_20e_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
	}
}

void f_2d9_a2_v(int a0, bool a1)
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

void f_2ea_a2_v(int a0, bool a1)
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

void f_2fb_a3_v(int a0, bool a1, int a2)
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

void f_334_a3_v(int a0, bool a1, int a2)
{
	string L0;
	L0 = "dr_mark" + (a0 + 1);
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
				@AddActor(L4, L3, L1, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
			} else {
				f_bd_a2_b(L3, "restore");
			}
		}
	} else {
		int L5;
		for (L5 = 1; L5 <= a2; L5++) {
			string L6;
			object L7;
			L6 = L0 + "_" + L5;
			@FindActor(L7, L6);
			if (L7) {
				f_bd_a2_b(L6, "cleanup");
			}
		}
	}
}

void f_372_a3_v(int a0, bool a1, int a2)
{
	string L0;
	L0 = "dr_mark" + (a0 + 1);
	object L1;
	@FindActor(L1, "br_" + (a0 + 1));
	if (a1) {
		if (!L1) {
			object L2;
			@GetMainOutdoorScene(L2);
			@AddActor(L1, "br_" + (a0 + 1), L2, [0.0, 0.0, 0.0]);
		}
	} else {
		if (L1) {
			@RemoveActor(L1);
		}
	}
	int L3;
	for (L3 = 1; L3 <= a2; L3++) {
		string L4;
		object L5;
		L4 = L0 + "_" + L3;
		@FindActor(L5, L4);
		if (L5) {
			f_bd_a2_b(L4, "cleanup");
		}
	}
}

void f_3a5_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 < 2 || a1 >= 6 && a1 < 10) {
		f_2d9_a2_v(a0, true);
	} else {
		f_2d9_a2_v(a0, false);
	}
}

void f_3ca_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 >= 6 && a1 < 10) {
		f_2d9_a2_v(a0, true);
	} else {
		f_2d9_a2_v(a0, false);
	}
}

void f_3e8_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 4 || a1 >= 6 && a1 < 8) {
		f_2d9_a2_v(a0, true);
	} else {
		f_2d9_a2_v(a0, false);
	}
}

void f_40d_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 6) {
		f_2d9_a2_v(a0, true);
	} else {
		f_2d9_a2_v(a0, false);
	}
}

bool f_424_a2_b(int a0, int a1)
{
	int L0;
	L0 = f_300f_a0_i();
	if (L0 == 1) {
		if (a0 == 0 && a1 < 21) {
			return true;
		}
	} else {
		if (L0 == 2) {
			if (a0 == 5) {
				return true;
			}
		}
	}
	return false;
}

float f_443_a1_f(int a0)
{
	if (a0 + 1 == 7) {
		return 2;
	}
	if (a0 + 1 == 8) {
		return 0;
	}
	if (a0 + 1 == 1) {
		return 0;
	}
	return 1;
}

float f_45b_a1_f(int a0)
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

float f_4b5_a1_f(int a0)
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
						return 0;
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

bool f_50f_a2_b(int a0, int a1)
{
	return a0 >= 10 && a1 < 6;
}

bool f_519_a2_b(int a0, int a1)
{
	return a0 >= 3 && (a1 > 22 || a1 < 5);
}

bool f_52a_a1_b(int a0)
{
	return a0 >= 8;
}

void f_52e_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_443_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_424_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
		f_1c5_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
		f_1c5_a4_v(a0, "pers_woman", "woman.xml", 3);
		f_1c5_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
			f_1c5_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 3);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 2);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 2);
			f_1c5_a4_v(a0, "pers_boy", "boy.xml", 2);
			f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
		} else {
			f_1c5_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 1);
			f_1c5_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 2);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1c5_a4_v(a0, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_626_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_443_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_424_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1c5_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
			f_1c5_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
		}
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1c5_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1c5_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
			f_1c5_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		} else {
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		}
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_737_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_443_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_424_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
			if (a1 + 1 >= 3) {
				f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_1c5_a4_v(a0, "pers_butcher", "butcher.xml", 2);
			}
		} else {
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_1c5_a4_v(a0, "pers_butcher", "butcher.xml", 3);
			}
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1c5_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_519_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
}

void f_86c_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_443_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_424_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1c5_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 2);
		} else {
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 1);
		}
	}
}

void f_91d_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_443_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_424_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_woman", "woman.xml", 2);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 2);
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1c5_a4_v(a0, "pers_woman", "woman.xml", 2);
			f_1c5_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		} else {
			f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1c5_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1c5_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1c5_a4_v(a0, "pers_dog", "dog.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1c5_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
}

void f_9e6_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_1df_a4_v(a0, "fog", "fog.xml", 8);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 1 * f_4b5_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1d2_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_a9a_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4b5_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1d2_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_b4e_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4b5_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_1d2_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_519_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_c0f_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4b5_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_1df_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 2 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_1d2_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_cb6_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_1df_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 2 * f_4b5_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1c5_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1c5_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1c5_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_1df_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_1df_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L1 = 2 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_1d2_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_1d2_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_d5d_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_45b_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 5);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 2);
		L2 = 3 * f_45b_a1_f(a1);
		if (L2) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_4b5_a1_f(a1);
		if (L3) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_e19_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 1);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_45b_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_45b_a1_f(a1);
		if (L2) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4b5_a1_f(a1);
		if (L3) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_ed5_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 2);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_45b_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_45b_a1_f(a1);
		if (L2) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4b5_a1_f(a1);
		if (L3) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_50f_a2_b(a1, a2)) {
		f_1c5_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_f91_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_45b_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 7);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 2 * f_45b_a1_f(a1);
		if (L2) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4b5_a1_f(a1);
		if (L3) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_1040_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_45b_a1_f(a1);
		if (L0) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4b5_a1_f(a1);
		if (L1) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1c5_a4_v(a0, "pers_rat", "rat.xml", 8);
		f_1c5_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1c5_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_45b_a1_f(a1);
		if (L2) {
			f_1c5_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1c5_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_52a_a1_b(a1)) {
				f_1c5_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4b5_a1_f(a1);
		if (L3) {
			f_1c5_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_52a_a1_b(a1)) {
		f_1c5_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_10ef_a1_v(object a0)
{
}

void f_10f1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(0, false);
		f_2fb_a3_v(0, false, 1);
		f_23c_a5_v(0, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(0, false, 4);
		f_372_a3_v(0, false, 4);
	}
	f_3e8_a2_v(0, a1);
	f_86c_a3_v(0, a0, a1);
}

void f_1125_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(0, true);
		f_2fb_a3_v(0, true, 1);
		f_24f_a5_v(0, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(0, true, 4);
		f_372_a3_v(0, false, 4);
	}
	f_2d9_a2_v(0, false);
	f_c0f_a3_v(0, a0, a1);
}

void f_1159_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(0, false);
		f_2fb_a3_v(0, false, 1);
		f_29e_a5_v(0, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(0, false, 4);
		f_372_a3_v(0, true, 4);
	}
	f_2d9_a2_v(0, false);
	f_f91_a3_v(0, a0, a1);
}

void f_118d_a1_v(object a0)
{
	a0->add("dt_house3_05_i2");
	a0->add("dt_house3_05");
	a0->add("dt_house3_06_i2");
	a0->add("dt_house_1_10");
	a0->add("house5_10");
	a0->add("house5_07");
	a0->add("dt_house_1_03");
	a0->add("dt_house1_union2_04l");
	a0->add("dt_house1_union2_04r");
	a0->add("house5_22");
	a0->add("house5_08");
	a0->add("dt_house1_union2_02l");
	a0->add("dt_house1_union2_02r");
}

void f_11b6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(1, false);
		f_2fb_a3_v(1, false, 1);
		f_23c_a5_v(1, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(1, false, 8);
		f_372_a3_v(1, false, 8);
	}
	f_3e8_a2_v(1, a1);
	f_91d_a3_v(1, a0, a1);
}

void f_11ea_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(1, true);
		f_2fb_a3_v(1, true, 1);
		f_24f_a5_v(1, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(1, true, 8);
		f_372_a3_v(1, false, 8);
	}
	f_2d9_a2_v(1, false);
	f_cb6_a3_v(1, a0, a1);
}

void f_121e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(1, false);
		f_2fb_a3_v(1, false, 1);
		f_29e_a5_v(1, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(1, false, 8);
		f_372_a3_v(1, true, 8);
	}
	f_2d9_a2_v(1, false);
	f_1040_a3_v(1, a0, a1);
}

void f_1252_a1_v(object a0)
{
	a0->add("dt_house1_union2_05l");
	a0->add("dt_house1_union2_05r");
	a0->add("dt_house2_01");
	a0->add("dt_house2_02");
	a0->add("dt_house2_03");
	a0->add("dt_house2_04");
	a0->add("dt_house2_05");
	a0->add("dt_house3_10_i2");
	a0->add("dt_house3_10");
	a0->add("dt_house3_11_i2");
	a0->add("dt_house3_11");
	a0->add("dt_house3_12_i2");
	a0->add("dt_house3_12");
	a0->add("dt_house_1_06");
	a0->add("dt_house3_07_i2");
	a0->add("dt_house3_07");
}

void f_1284_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(2, false);
		f_2fb_a3_v(2, false, 1);
		f_23c_a5_v(2, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(2, false, 5);
		f_372_a3_v(2, false, 5);
	}
	f_3e8_a2_v(2, a1);
	f_737_a3_v(2, a0, a1);
}

void f_12b8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(2, true);
		f_2fb_a3_v(2, true, 1);
		f_24f_a5_v(2, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(2, true, 5);
		f_372_a3_v(2, false, 5);
	}
	f_2d9_a2_v(2, false);
	f_b4e_a3_v(2, a0, a1);
}

void f_12ec_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(2, false);
		f_2fb_a3_v(2, false, 1);
		f_29e_a5_v(2, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(2, false, 5);
		f_372_a3_v(2, true, 5);
	}
	f_2d9_a2_v(2, false);
	f_ed5_a3_v(2, a0, a1);
}

void f_1320_a1_v(object a0)
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
	a0->add("dt_house_1_02");
	a0->add("house5_unoin_solid01l");
	a0->add("house5_unoin_solid01r");
	a0->add("house5_03");
	a0->add("house5_04");
	a0->add("house1_se_02l");
	a0->add("house1_se_02r");
	a0->add("dt_house3_01_i2");
	a0->add("dt_house3_02_i2");
	a0->add("dt_house3_02");
	a0->add("dt_house3_03_i2");
	a0->add("dt_house3_03");
	a0->add("dt_house3_04_i2");
	a0->add("house5_21");
}

void f_136a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(3, false);
		f_2fb_a3_v(3, false, 1);
		f_23c_a5_v(3, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(3, false, 7);
		f_372_a3_v(3, false, 7);
	}
	f_3a5_a2_v(3, a1);
	f_737_a3_v(3, a0, a1);
}

void f_139e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(3, true);
		f_2fb_a3_v(3, true, 1);
		f_24f_a5_v(3, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(3, true, 7);
		f_372_a3_v(3, false, 7);
	}
	f_2d9_a2_v(3, false);
	f_b4e_a3_v(3, a0, a1);
}

void f_13d2_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(3, false);
		f_2fb_a3_v(3, false, 1);
		f_29e_a5_v(3, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(3, false, 7);
		f_372_a3_v(3, true, 7);
	}
	f_2d9_a2_v(3, false);
	f_ed5_a3_v(3, a0, a1);
}

void f_1406_a1_v(object a0)
{
	a0->add("dt_house3_08_i2");
	a0->add("dt_house3_09");
	a0->add("dt_house3_09_i2");
	a0->add("house1_se_03l");
	a0->add("house1_se_03r");
	a0->add("house1_se_01l");
	a0->add("house1_se_01r");
	a0->add("house1_se_04l");
	a0->add("house1_se_04r");
	a0->add("house5_11");
	a0->add("house5_09");
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

void f_1444_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(4, false);
		f_2fb_a3_v(4, false, 1);
		f_23c_a5_v(4, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(4, false, 4);
		f_372_a3_v(4, false, 4);
	}
	f_3ca_a2_v(4, a1);
	f_737_a3_v(4, a0, a1);
}

void f_1478_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(4, true);
		f_2fb_a3_v(4, true, 1);
		f_24f_a5_v(4, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(4, true, 4);
		f_372_a3_v(4, false, 4);
	}
	f_2d9_a2_v(4, false);
	f_b4e_a3_v(4, a0, a1);
}

void f_14ac_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(4, false);
		f_2fb_a3_v(4, false, 1);
		f_29e_a5_v(4, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(4, false, 4);
		f_372_a3_v(4, true, 4);
	}
	f_2d9_a2_v(4, false);
	f_ed5_a3_v(4, a0, a1);
}

void f_14e0_a1_v(object a0)
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
	a0->add("house1_se_05r");
	a0->add("house1_se_05l");
	a0->add("dt_house2_10");
}

void f_1539_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(5, false);
		f_2fb_a3_v(5, false, 1);
		f_23c_a5_v(5, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(5, false, 4);
		f_372_a3_v(5, false, 4);
	}
	f_3a5_a2_v(5, a1);
	f_737_a3_v(5, a0, a1);
}

void f_156d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(5, true);
		f_2fb_a3_v(5, true, 1);
		f_24f_a5_v(5, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(5, true, 4);
		f_372_a3_v(5, false, 4);
	}
	f_2d9_a2_v(5, false);
	f_b4e_a3_v(5, a0, a1);
}

void f_15a1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(5, false);
		f_2fb_a3_v(5, false, 1);
		f_29e_a5_v(5, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(5, false, 4);
		f_372_a3_v(5, true, 4);
	}
	f_2d9_a2_v(5, false);
	f_ed5_a3_v(5, a0, a1);
}

void f_15d5_a1_v(object a0)
{
}

void f_15d7_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_3e8_a2_v(6, a1);
}

void f_15de_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_2d9_a2_v(6, false);
}

void f_15e5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_2d9_a2_v(6, false);
}

void f_15ec_a1_v(object a0)
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

void f_1618_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(7, false);
		f_2fb_a3_v(7, false, 1);
		f_23c_a5_v(7, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(7, false, 6);
		f_372_a3_v(7, false, 6);
	}
	f_3ca_a2_v(7, a1);
	f_626_a3_v(7, a0, a1);
}

void f_164c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(7, true);
		f_2fb_a3_v(7, true, 1);
		f_24f_a5_v(7, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(7, true, 6);
		f_372_a3_v(7, false, 6);
	}
	f_2d9_a2_v(7, false);
	f_a9a_a3_v(7, a0, a1);
}

void f_1680_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(7, false);
		f_2fb_a3_v(7, false, 1);
		f_29e_a5_v(7, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(7, false, 6);
		f_372_a3_v(7, true, 6);
	}
	f_2d9_a2_v(7, false);
	f_e19_a3_v(7, a0, a1);
}

void f_16b4_a1_v(object a0)
{
	a0->add("r2_house_2_01");
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
	a0->add("r3_house7_01");
	a0->add("r3_house7_02");
}

void f_16e0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(8, false);
		f_2fb_a3_v(8, false, 1);
		f_23c_a5_v(8, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(8, false, 4);
		f_372_a3_v(8, false, 4);
	}
	f_3a5_a2_v(8, a1);
	f_626_a3_v(8, a0, a1);
}

void f_1714_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(8, true);
		f_2fb_a3_v(8, true, 1);
		f_24f_a5_v(8, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(8, true, 4);
		f_372_a3_v(8, false, 4);
	}
	f_2d9_a2_v(8, false);
	f_a9a_a3_v(8, a0, a1);
}

void f_1748_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(8, false);
		f_2fb_a3_v(8, false, 1);
		f_29e_a5_v(8, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(8, false, 4);
		f_372_a3_v(8, true, 4);
	}
	f_2d9_a2_v(8, false);
	f_e19_a3_v(8, a0, a1);
}

void f_177c_a1_v(object a0)
{
	a0->add("r3_house_2_02");
	a0->add("r3_house3_02_i2");
	a0->add("r3_house3_02");
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

void f_17ab_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(9, false);
		f_2fb_a3_v(9, false, 1);
		f_23c_a5_v(9, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(9, false, 7);
		f_372_a3_v(9, false, 7);
	}
	f_3e8_a2_v(9, a1);
	f_626_a3_v(9, a0, a1);
}

void f_17df_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(9, true);
		f_2fb_a3_v(9, true, 1);
		f_24f_a5_v(9, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(9, true, 7);
		f_372_a3_v(9, false, 7);
	}
	f_2d9_a2_v(9, false);
	f_a9a_a3_v(9, a0, a1);
}

void f_1813_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(9, false);
		f_2fb_a3_v(9, false, 1);
		f_29e_a5_v(9, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(9, false, 7);
		f_372_a3_v(9, true, 7);
	}
	f_2d9_a2_v(9, false);
	f_e19_a3_v(9, a0, a1);
}

void f_1847_a1_v(object a0)
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

void f_187c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(10, false);
		f_2fb_a3_v(10, false, 1);
		f_23c_a5_v(10, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(10, false, 7);
		f_372_a3_v(10, false, 7);
	}
	f_3a5_a2_v(10, a1);
	f_626_a3_v(10, a0, a1);
}

void f_18b0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(10, true);
		f_2fb_a3_v(10, true, 1);
		f_24f_a5_v(10, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(10, true, 7);
		f_372_a3_v(10, false, 7);
	}
	f_2d9_a2_v(10, false);
	f_a9a_a3_v(10, a0, a1);
}

void f_18e4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(10, false);
		f_2fb_a3_v(10, false, 1);
		f_29e_a5_v(10, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(10, false, 7);
		f_372_a3_v(10, true, 7);
	}
	f_2d9_a2_v(10, false);
	f_e19_a3_v(10, a0, a1);
}

void f_1918_a1_v(object a0)
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

void f_1950_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(11, false);
		f_2fb_a3_v(11, false, 1);
		f_23c_a5_v(11, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(11, false, 5);
		f_372_a3_v(11, false, 5);
	}
	f_3a5_a2_v(11, a1);
	f_626_a3_v(11, a0, a1);
}

void f_1984_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(11, false);
		f_2fb_a3_v(11, true, 1);
		f_24f_a5_v(11, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(11, true, 5);
		f_372_a3_v(11, false, 5);
	}
	f_2d9_a2_v(11, false);
	f_a9a_a3_v(11, a0, a1);
}

void f_19b8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(11, true);
		f_2fb_a3_v(11, false, 1);
		f_29e_a5_v(11, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(11, false, 5);
		f_372_a3_v(11, true, 5);
	}
	f_2d9_a2_v(11, false);
	f_e19_a3_v(11, a0, a1);
}

void f_19ec_a1_v(object a0)
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
	a0->add("r6_house7_02");
	a0->add("r6_House6_01");
	a0->add("r6_house2_02");
}

void f_1a15_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(12, false);
		f_2fb_a3_v(12, false, 1);
		f_23c_a5_v(12, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(12, false, 4);
		f_372_a3_v(12, false, 4);
	}
	f_3ca_a2_v(12, a1);
	f_626_a3_v(12, a0, a1);
}

void f_1a49_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(12, true);
		f_2fb_a3_v(12, true, 1);
		f_24f_a5_v(12, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(12, true, 4);
		f_372_a3_v(12, false, 4);
	}
	f_2d9_a2_v(12, false);
	f_a9a_a3_v(12, a0, a1);
}

void f_1a7d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(12, false);
		f_2fb_a3_v(12, false, 1);
		f_29e_a5_v(12, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(12, false, 4);
		f_372_a3_v(12, true, 4);
	}
	f_2d9_a2_v(12, false);
	f_e19_a3_v(12, a0, a1);
}

void f_1ab1_a1_v(object a0)
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

void f_1ae0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(13, false);
		f_2fb_a3_v(13, false, 1);
		f_23c_a5_v(13, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(13, false, 4);
		f_372_a3_v(13, false, 4);
	}
	f_3e8_a2_v(13, a1);
	f_626_a3_v(13, a0, a1);
}

void f_1b14_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(13, true);
		f_2fb_a3_v(13, true, 1);
		f_24f_a5_v(13, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(13, true, 4);
		f_372_a3_v(13, false, 4);
	}
	f_2d9_a2_v(13, false);
	f_a9a_a3_v(13, a0, a1);
}

void f_1b48_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(13, false);
		f_2fb_a3_v(13, false, 1);
		f_29e_a5_v(13, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(13, false, 4);
		f_372_a3_v(13, true, 4);
	}
	f_2d9_a2_v(13, false);
	f_e19_a3_v(13, a0, a1);
}

void f_1b7c_a1_v(object a0)
{
	a0->add("lc_house7_02");
	a0->add("lc_house7_03");
	a0->add("lc_house7_04");
	a0->add("lc_house7_05");
	a0->add("lc_house7_06");
	a0->add("lc_house7_07");
	a0->add("lc_House6_02");
	a0->add("lc_house7_01");
	a0->add("lc_house_2_02");
	a0->add("lc_House6_01");
	a0->add("lc_house3_03_i2");
	a0->add("lc_house3_03");
	a0->add("lc_House6_03");
	a0->add("lc_House6_04");
}

void f_1ba8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(14, false);
		f_2fb_a3_v(14, false, 1);
		f_23c_a5_v(14, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(14, false, 5);
		f_372_a3_v(14, false, 5);
	}
	f_40d_a2_v(14, a1);
	f_52e_a3_v(14, a0, a1);
}

void f_1bdc_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(14, true);
		f_2fb_a3_v(14, true, 1);
		f_24f_a5_v(14, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(14, true, 5);
		f_372_a3_v(14, false, 5);
	}
	f_2d9_a2_v(14, false);
	f_9e6_a3_v(14, a0, a1);
}

void f_1c10_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(14, false);
		f_2fb_a3_v(14, false, 1);
		f_29e_a5_v(14, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(14, false, 5);
		f_372_a3_v(14, true, 5);
	}
	f_2d9_a2_v(14, false);
	f_d5d_a3_v(14, a0, a1);
}

void f_1c44_a1_v(object a0)
{
	a0->add("lc_house3_05_i2");
	a0->add("lc_house3_05");
	a0->add("lc_house3_06_i2");
	a0->add("lc_house3_06");
	a0->add("lc_House6_06");
	a0->add("lc_house3_04_i2");
	a0->add("lc_house3_04");
	a0->add("house3_plus_03_i2");
}

void f_1c5e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(15, false);
		f_2fb_a3_v(15, false, 1);
		f_23c_a5_v(15, a0, a2, a3, a4);
		f_ff_a2_v(a5, 0);
		f_334_a3_v(15, false, 5);
		f_372_a3_v(15, false, 5);
	}
	f_40d_a2_v(15, a1);
	f_52e_a3_v(15, a0, a1);
}

void f_1c92_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(15, true);
		f_2fb_a3_v(15, true, 1);
		f_24f_a5_v(15, a0, a2, a3, a4);
		f_ff_a2_v(a5, 1);
		f_334_a3_v(15, true, 5);
		f_372_a3_v(15, false, 5);
	}
	f_2d9_a2_v(15, false);
	f_9e6_a3_v(15, a0, a1);
}

void f_1cc6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_2ea_a2_v(15, false);
		f_2fb_a3_v(15, false, 1);
		f_29e_a5_v(15, a0, a2, a3, a4);
		f_ff_a2_v(a5, 2);
		f_334_a3_v(15, false, 5);
		f_372_a3_v(15, true, 5);
	}
	f_2d9_a2_v(15, false);
	f_d5d_a3_v(15, a0, a1);
}

void OnTrigger(string a0, string a1)
{
	if (a0 == "playsound") {
		@PlaySound(a1);
	} else {
		if (a0 == "enable_bonfire") {
			int L0;
			@_strtoi(L0, a1);
			f_1d86_a1_v(L0 - 1);
		} else {
			if (a0 == "disable_bonfire") {
				int L1;
				@_strtoi(L1, a1);
				f_1dd3_a1_v(L1 - 1);
			}
		}
	}
}

void OnConsole(string a0, string a1)
{
	if (a0 == "horror") {
		int L0;
		int L1;
		@_strtoi(L0, a1);
		f_188_a1_v(L0);
		g13->size(L1);
		if (L0 >= 0 && L0 < L1) {
			object L2;
			g13->get(L2, L0);
			f_ff_a2_v(L2, 1);
			@Trace("Replaced");
		} else {
			@Trace("Invalid region index");
		}
	} else {
		if (a0 == "nail") {
			int L3;
			int L4;
			@_strtoi(L3, a1);
			f_1a6_a1_v(L3);
			g13->size(L4);
			if (L3 >= 0 && L3 < L4) {
				object L5;
				g13->get(L5, L3);
				f_ff_a2_v(L5, 2);
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
				L6 = f_51_a0_o();
				L6->GetScene(L7);
				L6->GetPosition(L8);
				@AddActorByType(L9, "fog", L7, L8, [0.0, 0.0, 1.0], "fog_stat.xml");
			} else {
				if (a0 == "sepia") {
					f_ef_a0_v();
				} else {
					if (a0 == "nosepia") {
						f_f4_a0_v();
					}
				}
			}
		}
	}
}

void f_1d86_a1_v(int a0)
{
	int L0;
	object L1;
	object L2;
	object L3;
	Vector L4;
	Vector L5;
	bool L6;
	g14->size(L0);
	if (a0 >= L0 || a0 == -1) {
		@Trace("Wrong bonfire index " + a0);
		return;
	}
	g14->get(L1, a0);
	@FindActor(L2, "bonfire_light" + (a0 + 1));
	if (!L2) {
		@Trace("Bofire  light " + (a0 + 1) + " not found");
	} else {
		L2->Switch(true);
	}
	@GetMainOutdoorScene(L3);
	L3->GetLocator("pt_bonfire" + (a0 + 1), L6, L4, L5);
	if (!L6) {
		@Trace("Locator for bonfire doesn't exist");
		return;
	}
	if (!L1) {
		object L7;
		@AddActorByType(L7, "scripted", L3, L4, L5, "bonfire_big.xml");
		g14->set(a0, L7);
	}
	@Trace("Setting bonfire " + (a0 + 1) + "... ok");
}

void f_1dd3_a1_v(int a0)
{
	int L0;
	object L1;
	object L2;
	g14->size(L0);
	if (a0 >= L0 || a0 == -1) {
		@Trace("Wrong bonfire index " + a0);
		return;
	}
	g14->get(L1, a0);
	@FindActor(L2, "bonfire_light" + (a0 + 1));
	if (!L2) {
		@Trace("Bofire  light " + (a0 + 1) + " not found");
	} else {
		L2->Switch(false);
	}
	if (L1) {
		@RemoveActor(L1);
	}
	L1 = null;
	g14->set(a0, L1);
	@Trace("Cleanup bonfire " + (a0 + 1) + "... ok");
}

object f_1e0f_a4_o(object a0, string a1, string a2, string a3)
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

object f_1e20_a2_o(object a0, int a1)
{
	return f_1e0f_a4_o(a0, "term" + a1, "pers_patrool", "guard_term.xml");
}

void f_1e2b_a1_v(bool a0)
{
	object L0;
	@FindActor(L0, "arena_light");
	L0->Switch(a0);
}

void f_1e33_a0_v(void)
{
	@Trace("Setting arena...");
	if (g11 == null) {
		object L0;
		bool L1;
		Vector L2;
		Vector L3;
		int L4;
		@GetMainOutdoorScene(L0);
		L0->GetLocator("pt_arena_manager", L1, L2, L3);
		if (!L1) {
			@Trace("Locator doesn't exist for arena manager");
		} else {
			g11 = f_3a34_a3_o(L0, L2, L3);
		}
		L4 = 0;
		for (; L4 < 6; L4++) {
			object L5;
			L0->GetLocator("pt_arena_torch" + (L4 + 1), L1, L2, L3);
			if (!L1) {
				@Trace("Locator doesn't exist for arena torch " + (L4 + 1));
				continue;
			}
			@AddActorByType(L5, "scripted", L0, L2, L3, "torch.xml");
			g12->add(L5);
		}
		f_1e2b_a1_v(true);
	}
}

void f_1e72_a0_v(void)
{
	@Trace("Cleaning arena...");
	if (g11 != null) {
		int L0;
		int L1;
		g11->Remove();
		g12->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			g12->get(L2, L1);
			@Trigger(L2, "remove");
		}
		g12->clear();
		f_1e2b_a1_v(false);
	}
}

void f_1e94_a0_v(void)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 1; L1 <= 17; L1++) {
		g15->add(f_85_a4_o(L0, "pt_bull" + L1, "pers_bull", "bull.xml"));
	}
}

void f_1eab_a0_v(void)
{
	f_d5_a1_v(g15);
}

void f_1eb2_a0_v(void)
{
	g15 = f_64_a0_o();
	g13 = f_64_a0_o();
	g8 = f_64_a0_o();
	g9 = f_64_a0_o();
	g10 = f_64_a0_o();
	int L0;
	for (L0 = 0; L0 < 16; L0++) {
		g8->add(f_64_a0_o());
		g9->add(f_64_a0_o());
		g10->add(f_64_a0_o());
	}
	object L1;
	@CreateStringVector(L1);
	g13->add(L1);
	f_10ef_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_118d_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1252_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1320_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1406_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_14e0_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_15d5_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_15ec_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_16b4_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_177c_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1847_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1918_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_19ec_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1ab1_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1b7c_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1c44_a1_v(L1);
	f_1e94_a0_v();
	object L2;
	@GetMainOutdoorScene(L2);
	g6 = f_64_a0_o();
	int L3;
	for (L3 = 0; ; L3++) {
		bool L4;
		L2->GetLocator("pt_plant" + (L3 + 1), L4);
		if (!L4) {
			break;
		}
	}
	g6->resize(L3);
	@Trace("Total plants: " + L3);
	g7 = f_64_a0_o();
	int L5;
	for (L5 = 0; ; L5++) {
		bool L6;
		L2->GetLocator("pt_grave_supply" + (L5 + 1), L6);
		if (!L6) {
			break;
		}
	}
	g7->resize(L5);
	@Trace("Total grave supplies: " + L5);
	g14 = f_64_a0_o();
	int L7;
	for (L7 = 0; ; L7++) {
		bool L8;
		object L9;
		L2->GetLocator("pt_bonfire" + (L7 + 1), L8);
		if (!L8) {
			break;
		}
		L9 = null;
		g14->add(L9);
		f_1dd3_a1_v(L7);
	}
	@Trace("Total bonfires: " + L7);
}

void f_1fd6_a0_v(void)
{
	object L0;
	@GetMainOutdoorScene(L0);
	g0 = f_1e20_a2_o(L0, 1);
	g1 = f_1e20_a2_o(L0, 2);
	g2 = f_1e20_a2_o(L0, 3);
	g3 = f_1e20_a2_o(L0, 4);
	g4 = f_1e20_a2_o(L0, 5);
	g5 = f_1e20_a2_o(L0, 6);
	g12 = f_64_a0_o();
	f_1e2b_a1_v(false);
	f_21fa_a0_v();
	f_2245_a0_v();
	@SendWorldWndMessage(100);
}

void f_201e_a2_v(int a0, int a1)
{
	if (a1 == 0) {
		bool L0;
		L0 = false;
		if (a0 == 2) {
			if (f_300f_a0_i() == 0) {
				int L1;
				@GetVariable("d1q01", L1);
				if (L1 != 1000) {
					L0 = true;
					@UnlockAchievement("ACHIEVEMENT_UP");
					@GameOver("gameover_fail.xml");
				}
			} else {
				if (f_300f_a0_i() == 1) {
					int L2;
					@GetVariable("b1q01", L2);
					if (L2 != 1000) {
						L0 = true;
						@UnlockAchievement("ACHIEVEMENT_UP");
						@GameOver("gameover_fail.xml");
					}
				}
			}
		}
		if (!L0) {
			if (f_300f_a0_i() == 0) {
				if (a0 == 2) {
					@UnlockAchievement("ACHIEVEMENT_BACH_1");
				} else {
					if (a0 == 3) {
						@UnlockAchievement("ACHIEVEMENT_BACH_2");
					} else {
						if (a0 == 4) {
							@UnlockAchievement("ACHIEVEMENT_BACH_3");
						} else {
							if (a0 == 5) {
								@UnlockAchievement("ACHIEVEMENT_BACH_4");
							} else {
								if (a0 == 6) {
									@UnlockAchievement("ACHIEVEMENT_BACH_5");
								} else {
									if (a0 == 7) {
										@UnlockAchievement("ACHIEVEMENT_BACH_6");
									} else {
										if (a0 == 8) {
											@UnlockAchievement("ACHIEVEMENT_BACH_7");
										} else {
											if (a0 == 9) {
												@UnlockAchievement("ACHIEVEMENT_BACH_8");
											} else {
												if (a0 == 10) {
													@UnlockAchievement("ACHIEVEMENT_BACH_9");
												} else {
													if (a0 == 11) {
														@UnlockAchievement("ACHIEVEMENT_BACH_10");
													} else {
														if (a0 == 12) {
															@UnlockAchievement("ACHIEVEMENT_BACH_11");
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
			} else {
				if (f_300f_a0_i() == 1) {
					if (a0 == 2) {
						@UnlockAchievement("ACHIEVEMENT_BURAH_1");
					} else {
						if (a0 == 3) {
							@UnlockAchievement("ACHIEVEMENT_BURAH_2");
						} else {
							if (a0 == 4) {
								@UnlockAchievement("ACHIEVEMENT_BURAH_3");
							} else {
								if (a0 == 5) {
									@UnlockAchievement("ACHIEVEMENT_BURAH_4");
								} else {
									if (a0 == 6) {
										@UnlockAchievement("ACHIEVEMENT_BURAH_5");
									} else {
										if (a0 == 7) {
											@UnlockAchievement("ACHIEVEMENT_BURAH_6");
										} else {
											if (a0 == 8) {
												@UnlockAchievement("ACHIEVEMENT_BURAH_7");
											} else {
												if (a0 == 9) {
													@UnlockAchievement("ACHIEVEMENT_BURAH_8");
												} else {
													if (a0 == 10) {
														@UnlockAchievement("ACHIEVEMENT_BURAH_9");
													} else {
														if (a0 == 11) {
															@UnlockAchievement("ACHIEVEMENT_BURAH_10");
														} else {
															if (a0 == 12) {
																@UnlockAchievement("ACHIEVEMENT_BURAH_11");
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
				} else {
					if (a0 == 2) {
						@UnlockAchievement("ACHIEVEMENT_CLARA_1");
					} else {
						if (a0 == 3) {
							@UnlockAchievement("ACHIEVEMENT_CLARA_2");
						} else {
							if (a0 == 4) {
								@UnlockAchievement("ACHIEVEMENT_CLARA_3");
							} else {
								if (a0 == 5) {
									@UnlockAchievement("ACHIEVEMENT_CLARA_4");
								} else {
									if (a0 == 6) {
										@UnlockAchievement("ACHIEVEMENT_CLARA_5");
									} else {
										if (a0 == 7) {
											@UnlockAchievement("ACHIEVEMENT_CLARA_6");
										} else {
											if (a0 == 8) {
												@UnlockAchievement("ACHIEVEMENT_CLARA_7");
											} else {
												if (a0 == 9) {
													@UnlockAchievement("ACHIEVEMENT_CLARA_8");
												} else {
													if (a0 == 10) {
														@UnlockAchievement("ACHIEVEMENT_CLARA_9");
													} else {
														if (a0 == 11) {
															@UnlockAchievement("ACHIEVEMENT_CLARA_10");
														} else {
															if (a0 == 12) {
																@UnlockAchievement("ACHIEVEMENT_CLARA_11");
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
		@SendWorldWndMessage(101);
		@SetVariable("c_iWM_RealDayChange", a0);
	}
}

void f_2148_a2_v(int a0, int a1)
{
	if (a1 == 5 && a0 >= 7) {
		if (f_300f_a0_i() != 2) {
			f_1e33_a0_v();
		}
	} else {
		if (a1 == 22 && a0 >= 7) {
			if (f_300f_a0_i() != 2) {
				f_1e72_a0_v();
			}
		}
	}
	if (a1 == 7 && a0 != 1) {
		@SendWorldWndMessage(100);
	}
	if (a1 == 0) {
		f_21fa_a0_v();
		f_2245_a0_v();
		if (a0 == 6) {
			object L0;
			object L1;
			@GetMainOutdoorScene(L0);
			@AddScriptedActor(L1, "shed_corpse", "splash_object_wo_pf.bin", L0, [0.0, 0.0, 0.0]);
		}
		if (a0 == 9) {
			f_2276_a0_v();
		}
		if (a0 != 1) {
			string L2;
			int L3;
			if (f_300f_a0_i() == 1) {
				@GetVariable("b" + (a0 - 1) + "q01", L3);
				L2 = "volonteers_burah";
			} else {
				if (f_300f_a0_i() == 0) {
					@GetVariable("d" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_danko";
				} else {
					@GetVariable("k" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_klara";
				}
			}
			@Trace(L2);
			if (L3 == 1000) {
				f_c9_a3_b(L2, "rescue_locked", "");
			}
			f_c9_a3_b(L2, "update", "");
		}
	}
	if (a0 == 6 && a1 == 0) {
		f_1eab_a0_v();
	}
	if (a0 == 7 && a1 == 0) {
		int L4;
		int L5;
		g14->size(L4);
		for (L5 = 0; L5 < L4; L5++) {
			f_1d86_a1_v(L5);
		}
	}
}

void f_21fa_a0_v(void)
{
	int L0;
	object L1;
	int L2;
	if (f_300f_a0_i() == 0) {
		return;
	}
	g6->size(L0);
	@GetMainOutdoorScene(L1);
	L2 = 0;
	for (; L2 < L0; L2++) {
		object L3;
		bool L4;
		Vector L5;
		Vector L6;
		string L7;
		g6->get(L3, L2);
		if (L3) {
			continue;
		}
		L1->GetLocator("pt_plant" + (L2 + 1), L4, L5, L6);
		if (!L4) {
			@Trace("Plant point not found");
			continue;
		}
		@RandOneOf(L7, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
		if (L7) {
			L1->AddStationaryActorByType(L3, L5, L6, "scripted", "item_" + L7 + "_stat.xml");
			g6->set(L2, L3);
			@Trace("New plant: \"" + L7 + "\" at location #" + (L2 + 1));
		}
	}
}

void f_2245_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@GetMainOutdoorScene(L0);
	g7->size(L1);
	L2 = 0;
	for (; L2 < L1; L2++) {
		object L3;
		bool L4;
		Vector L5;
		Vector L6;
		string L7;
		g7->get(L3, L2);
		if (L3) {
			continue;
		}
		L0->GetLocator("pt_grave_supply" + (L2 + 1), L4, L5, L6);
		if (!L4) {
			@Trace("Grave supply point not found");
			continue;
		}
		@RandOneOf(L7, 1, 1, "bread", "milk");
		L0->AddStationaryActorByType(L3, L5, L6, "scripted", "item_" + L7 + "_stat.xml");
		g7->set(L2, L3);
	}
}

void f_2276_a0_v(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddScriptedActor(L1, "big_gun", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "vagon_martira", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", L0, [0.0, 0.0, 0.0]);
}

bool f_228b_a2_b(int a0, float a1)
{
	if (a0 > 16384 && a0 < 16396) {
		int L0;
		L0 = a0 - 16384;
		f_395e_a1_v(L0);
		return true;
	}
	if (a0 > 32768 && a0 < 33056) {
		int L1;
		int L2;
		float L3;
		int L4;
		int L5;
		L1 = (a0 - 32768) / 24;
		L2 = (a0 - 32768) % 24;
		@GetGameTime(L3);
		L4 = L3 / 24;
		L5 = L3;
		L5 = L5 % 24;
		f_2315_a4_v(L1, L2, L4, L5);
		return true;
	}
	return false;
}

void f_22c2_a0_v(void)
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
		@SetVariable(f_f9_a1_s(L4), 0);
		f_2ea_a2_v(L4, false);
	}
	f_2315_a4_v(0, L0 % 24, 0, L0 % 24);
	object L5;
	@FindActor(L5, "dt_house_1_07");
	L5->EnableSubset(200, false);
	object L6;
	@GetMainOutdoorScene(L6);
	L6->SwitchLights(0, L0 < 7 || L0 >= 20);
}

void f_2315_a4_v(int a0, int a1, int a2, int a3)
{
	int L0;
	@Trace("City update");
	if (a0 == a2 && a1 == a3) {
		@PlaySound("kolokol");
	}
	L0 = 0;
	for (; L0 < 16; L0++) {
		f_1b8_a1_v(L0);
		if (f_15e_a1_b(L0)) {
			f_238d_a3_v(L0, a0, a1);
		} else {
			if (f_17c_a1_b(L0)) {
				f_246e_a3_v(L0, a0, a1);
				continue;
			}
			f_254f_a3_v(L0, a0, a1);
		}
	}
	if (a1 == 0) {
		f_39f8_a1_v(a0);
		if (a0 == 1 || f_17c_a1_b(5)) {
			object L1;
			@FindActor(L1, "dt_house_1_07");
			L1->EnableSubset(200, true);
		} else {
			object L2;
			@FindActor(L2, "dt_house_1_07");
			L2->EnableSubset(200, false);
		}
	}
	if (a1 == 7) {
		object L3;
		@Trace("day time");
		@GetMainOutdoorScene(L3);
		L3->SwitchLights(0, false);
	} else {
		if (a1 == 20) {
			object L4;
			@Trace("night time");
			@GetMainOutdoorScene(L4);
			L4->SwitchLights(0, true);
		}
	}
}

void f_238d_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g8->get(L0, a0);
	g9->get(L1, a0);
	g10->get(L2, a0);
	g13->get(L3, a0);
	if (a0 == 0) {
		f_10f1_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_11b6_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_1284_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_136a_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_1444_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_1539_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_15d7_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_1618_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_16e0_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_17ab_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_187c_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1950_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a15_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1ae0_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1ba8_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1c5e_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_246e_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g8->get(L0, a0);
	g9->get(L1, a0);
	g10->get(L2, a0);
	g13->get(L3, a0);
	if (a0 == 0) {
		f_1125_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_11ea_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_12b8_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_139e_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_1478_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_156d_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_15de_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_164c_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1714_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_17df_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_18b0_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1984_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a49_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b14_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1bdc_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1c92_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_254f_a3_v(int a0, int a1, int a2)
{
	object L0;
	object L1;
	object L2;
	object L3;
	g8->get(L0, a0);
	g9->get(L1, a0);
	g10->get(L2, a0);
	g13->get(L3, a0);
	if (a0 == 0) {
		f_1159_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_121e_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_12ec_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_13d2_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_14ac_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_15a1_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_15e5_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_1680_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1748_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_1813_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_18e4_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_19b8_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a7d_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b48_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1c10_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1cc6_a6_v(a1, a2, L0, L1, L2, L3);
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

int f_2630_a1_i(float a0)
{
	return f_2ff6_a3_i(531503, 531502, a0);
}

int f_2639_a1_i(float a0)
{
	return f_2ff6_a3_i(530554, 530553, a0);
}

int f_2642_a1_i(float a0)
{
	return f_2ff6_a3_i(530556, 530555, a0);
}

int f_264b_a1_i(float a0)
{
	return f_2ff6_a3_i(530558, 530557, a0);
}

int f_2654_a1_i(float a0)
{
	return f_2ff6_a3_i(530560, 530559, a0);
}

int f_265d_a1_i(float a0)
{
	return f_2ff6_a3_i(530562, 530561, a0);
}

int f_2666_a1_i(float a0)
{
	return f_2ff6_a3_i(530564, 530563, a0);
}

int f_266f_a1_i(float a0)
{
	return f_2ff6_a3_i(530566, 530565, a0);
}

int f_2678_a1_i(float a0)
{
	return f_2ff6_a3_i(530568, 530567, a0);
}

int f_2681_a1_i(float a0)
{
	return f_2ff6_a3_i(529886, 529885, a0);
}

int f_268a_a1_i(float a0)
{
	return f_2ff6_a3_i(521908, 521907, a0);
}

int f_2693_a1_i(float a0)
{
	return f_2ff6_a3_i(530492, 530491, a0);
}

int f_269c_a1_i(float a0)
{
	return f_2ff6_a3_i(530570, 530569, a0);
}

int f_26a5_a1_i(float a0)
{
	return f_2ff6_a3_i(529890, 529889, a0);
}

int f_26ae_a1_i(float a0)
{
	return f_2ff6_a3_i(529894, 529893, a0);
}

int f_26b7_a1_i(float a0)
{
	return f_2ff6_a3_i(529888, 529887, a0);
}

int f_26c0_a1_i(float a0)
{
	return f_2ff6_a3_i(522099, 522098, a0);
}

int f_26c9_a1_i(float a0)
{
	return f_2ff6_a3_i(529892, 529891, a0);
}

int f_26d2_a1_i(float a0)
{
	return f_2ff6_a3_i(530533, 530532, a0);
}

int f_26db_a1_i(float a0)
{
	return f_2ff6_a3_i(530572, 530571, a0);
}

int f_26e4_a1_i(float a0)
{
	return f_2ff6_a3_i(522713, 522712, a0);
}

int f_26ed_a1_i(float a0)
{
	return f_2ff6_a3_i(522715, 522714, a0);
}

int f_26f6_a1_i(float a0)
{
	return f_2ff6_a3_i(522719, 522718, a0);
}

int f_26ff_a1_i(float a0)
{
	return f_2ff6_a3_i(522717, 522716, a0);
}

int f_2708_a1_i(float a0)
{
	return f_2ff6_a3_i(530574, 530573, a0);
}

int f_2711_a1_i(float a0)
{
	return f_2ff6_a3_i(529840, 529839, a0);
}

int f_271a_a1_i(float a0)
{
	return f_2ff6_a3_i(518132, 518131, a0);
}

int f_2723_a1_i(float a0)
{
	return f_2ff6_a3_i(529838, 529837, a0);
}

int f_272c_a1_i(float a0)
{
	return f_2ff6_a3_i(531053, 531052, a0);
}

int f_2735_a1_i(float a0)
{
	return f_2ff6_a3_i(529844, 529843, a0);
}

int f_273e_a1_i(float a0)
{
	return f_2ff6_a3_i(518218, 518217, a0);
}

int f_2747_a1_i(float a0)
{
	return f_2ff6_a3_i(518220, 518219, a0);
}

int f_2750_a1_i(float a0)
{
	return f_2ff6_a3_i(529846, 529845, a0);
}

int f_2759_a1_i(float a0)
{
	return f_2ff6_a3_i(520462, 520461, a0);
}

int f_2762_a1_i(float a0)
{
	return f_2ff6_a3_i(529842, 529841, a0);
}

int f_276b_a1_i(float a0)
{
	return f_2ff6_a3_i(519684, 519683, a0);
}

int f_2774_a1_i(float a0)
{
	return f_2ff6_a3_i(529848, 529847, a0);
}

int f_277d_a1_i(float a0)
{
	return f_2ff6_a3_i(530678, 530677, a0);
}

int f_2786_a1_i(float a0)
{
	return f_2ff6_a3_i(530680, 530679, a0);
}

int f_278f_a1_i(float a0)
{
	return f_2ff6_a3_i(529852, 529851, a0);
}

int f_2798_a1_i(float a0)
{
	return f_2ff6_a3_i(530601, 530600, a0);
}

int f_27a1_a1_i(float a0)
{
	return f_2ff6_a3_i(533050, 533049, a0);
}

int f_27aa_a1_i(float a0)
{
	return f_2ff6_a3_i(529850, 529849, a0);
}

int f_27b3_a1_i(float a0)
{
	return f_2ff6_a3_i(529862, 529861, a0);
}

int f_27bc_a1_i(float a0)
{
	return f_2ff6_a3_i(529866, 529865, a0);
}

int f_27c5_a1_i(float a0)
{
	return f_2ff6_a3_i(529854, 529853, a0);
}

int f_27ce_a1_i(float a0)
{
	return f_2ff6_a3_i(529864, 529863, a0);
}

int f_27d7_a1_i(float a0)
{
	return f_2ff6_a3_i(531085, 531084, a0);
}

int f_27e0_a1_i(float a0)
{
	return f_2ff6_a3_i(538402, 538401, a0);
}

int f_27e9_a1_i(float a0)
{
	return f_2ff6_a3_i(529868, 529867, a0);
}

int f_27f2_a1_i(float a0)
{
	return f_2ff6_a3_i(529870, 529869, a0);
}

int f_27fb_a1_i(float a0)
{
	return f_2ff6_a3_i(529856, 529855, a0);
}

int f_2804_a1_i(float a0)
{
	return f_2ff6_a3_i(530813, 530812, a0);
}

int f_280d_a1_i(float a0)
{
	return f_2ff6_a3_i(530183, 530182, a0);
}

int f_2816_a1_i(float a0)
{
	return f_2ff6_a3_i(530855, 530854, a0);
}

int f_281f_a1_i(float a0)
{
	return f_2ff6_a3_i(529874, 529873, a0);
}

int f_2828_a1_i(float a0)
{
	return f_2ff6_a3_i(529872, 529871, a0);
}

int f_2831_a1_i(float a0)
{
	return f_2ff6_a3_i(529858, 529857, a0);
}

int f_283a_a1_i(float a0)
{
	return f_2ff6_a3_i(530666, 530665, a0);
}

int f_2843_a1_i(float a0)
{
	return f_2ff6_a3_i(529878, 529877, a0);
}

int f_284c_a1_i(float a0)
{
	return f_2ff6_a3_i(520962, 520961, a0);
}

int f_2855_a1_i(float a0)
{
	return f_2ff6_a3_i(529860, 529859, a0);
}

int f_285e_a1_i(float a0)
{
	return f_2ff6_a3_i(520964, 520963, a0);
}

int f_2867_a1_i(float a0)
{
	return f_2ff6_a3_i(529876, 529875, a0);
}

int f_2870_a1_i(float a0)
{
	return f_2ff6_a3_i(521369, 521368, a0);
}

int f_2879_a1_i(float a0)
{
	return f_2ff6_a3_i(521371, 521370, a0);
}

int f_2882_a1_i(float a0)
{
	return f_2ff6_a3_i(533052, 533051, a0);
}

int f_288b_a1_i(float a0)
{
	return f_2ff6_a3_i(530654, 530653, a0);
}

int f_2894_a1_i(float a0)
{
	return f_2ff6_a3_i(529880, 529879, a0);
}

int f_289d_a1_i(float a0)
{
	return f_2ff6_a3_i(529882, 529881, a0);
}

int f_28a6_a1_i(float a0)
{
	return f_2ff6_a3_i(531549, 531548, a0);
}

int f_28af_a1_i(float a0)
{
	return f_2ff6_a3_i(529884, 529883, a0);
}

int f_28b8_a1_i(float a0)
{
	return f_2ff6_a3_i(530276, 530275, a0);
}

int f_28c1_a1_i(float a0)
{
	return f_2ff6_a3_i(533054, 533053, a0);
}

void f_28ca_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_lara@door1", true);
}

void f_28d1_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_lara@door1", false);
}

void f_28d8_a2_v(object a0, object a1)
{
	f_a8_a2_v("icot_eva_door", true);
}

void f_28df_a2_v(object a0, object a1)
{
	f_a8_a2_v("icot_eva_door", false);
}

void f_28e6_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_alexandr@door1", true);
}

void f_28ed_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_alexandr@door1", false);
}

void f_28f4_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_katerina@door1", true);
}

void f_28fb_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_katerina@door1", false);
}

void f_2902_a2_v(object a0, object a1)
{
}

void f_2904_a2_v(object a0, object a1)
{
}

void f_2906_a2_v(object a0, object a1)
{
	f_97_a2_v("burah_home@door1", true);
}

void f_290d_a2_v(object a0, object a1)
{
	f_97_a2_v("burah_home@door1", false);
}

void f_2914_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2ffe_a0_o();
	L0->AddMark("b1BigVlad", "pt_map_bigvlad", 3, 520525, f_ea_a0_f());
}

void f_2924_a2_v(object a0, object a1)
{
	f_97_a2_v("termitnik2@door1", true);
}

void f_292b_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_viktor@door1", false);
}

void f_2932_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_anna@door1", true);
}

void f_2939_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_anna@door1", false);
}

void f_2940_a2_v(object a0, object a1)
{
	f_97_a2_v("house_vlad@door2", true);
}

void f_2947_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_maria@door1", true);
}

void f_294e_a2_v(object a0, object a1)
{
	f_97_a2_v("warehouse_rubin@door1", true);
}

void f_2955_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b1BigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1BigVlad11Hours");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1KapellaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1KapellaGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1MladVladGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q01BakWillBeAt18");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q01BigVladGotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q01BigVladGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q01GrifGotoDanko");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q01NotkinGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q02GrifGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q02LaskaGotoGorbin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q02LaskaSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q03GrifGotoDoberman");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q03NotkinGotoDoberman");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1GrifGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q03NotkinGotoDobermanSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1LaskaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q05Spi4kaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q05Spi4kaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1q05PatrolGroup");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b1BurahFatherHome");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(200);
	f_2fe5_a1_b(205);
	f_2fe5_a1_b(209);
	f_2fe5_a1_b(242);
	f_2fe5_a1_b(582);
}

void f_2a0b_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b2BurahHome");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2DankoGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q01AlexandrGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q01BigVladGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q01BigVladGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q01BigVladGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2Travnik1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2Travnik2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2Travnik3");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q01BigVladGotoDanko");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2q03GoodShop");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b2AndreiKabak");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(245);
	f_2fe5_a1_b(456);
	f_2fe5_a1_b(585);
	f_2fe5_a1_b(588);
}

void f_2a77_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b3q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q01ButcherGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q01OspinaGotoButcher");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q02GrifGotoDanko");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q02GrifGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q02KapellaGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q02NotkinGotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b3q03BurahHome");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(221);
	f_2fe5_a1_b(227);
	f_2fe5_a1_b(235);
	f_2fe5_a1_b(631);
}

void f_2ac7_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b4q01DankoGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b4q01DankoGotoLaraSelf");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b4q01LaraGotoRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b4Spi4kaMapMark");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(213);
	f_2fe5_a1_b(216);
	f_2fe5_a1_b(527);
}

void f_2af7_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b5q01DankoGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b5q01DankoGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b5q01VeraGotoStvorki");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b5q01GathererWife");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(238);
	f_2fe5_a1_b(249);
}

void f_2b23_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b6q01KlaraGotoTermitnik2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b6q02KlaraGotoRat");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b6q03MariaGotoNina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b6q03ViktorGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b6q02LetterGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b6q01MatGotoByk");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(265);
	f_2fe5_a1_b(266);
	f_2fe5_a1_b(276);
}

void f_2b61_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b7q01AglajaGotoStarshina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01BirdmaskGotoMat");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01DankoGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01MatGotoPrison");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01PatrolGotoGorbun");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01ViktorGotoSobor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q01WastedGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b7q03AglajaGotoTheater");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(253);
	f_2fe5_a1_b(270);
	f_2fe5_a1_b(280);
}

void f_2bad_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b8q01GrifGotoKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b8q01KapellaGotoKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b8q01NotkinGotoKlara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b8q03GeorgGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b8q03KaterinaGotoMat");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(293);
	f_2fe5_a1_b(284);
	f_2fe5_a1_b(575);
}

void f_2be4_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b9q01MDobermanGotoFactory");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03Bonfire1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03Bonfire2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03Bonfire3");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03Bonfire4");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03DobermanGotoFollower");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q03KapellaGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9q01BlockGotoBoiny");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b9Block");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(297);
	f_2fe5_a1_b(532);
}

void f_2c33_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b10q04GirlGotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04MatGotoMorlok");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04BlockGotoOfficer");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04KapellaGotoBlock");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04MorlokGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04MorlokGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04MorlokGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q04MorlokGotoSpi4ka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q03KapellaGotoMishka");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q03MishkaGotoDoll");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b10q01StarshinaGotoKurgan");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(305);
	f_2fe5_a1_b(545);
	f_2fe5_a1_b(594);
}

void f_2c94_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2ffe_a0_o();
	L0->FindMark(L1, "b11q04NotkinGotoSanitar");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "b11q04SanitarGotoOfficer");
	if (L1) {
		L1->Remove();
	}
	f_2fe5_a1_b(313);
	f_2fe5_a1_b(551);
	f_2fe5_a1_b(598);
}

void f_2cb6_a2_v(object a0, object a1)
{
	f_2f95_a0_v();
}

void f_2cbb_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("B_Mission3") == 0) {
		@SetVariable("B_Mission3", 1);
		f_2fa2_a0_v();
		f_2fe5_a1_b(562);
		f_2fe5_a1_b(563);
	}
}

void f_2cd3_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("B_Mission4") == 0) {
		@SetVariable("B_Mission4", 1);
		f_2faf_a0_v();
		f_2fe5_a1_b(562);
		f_2fe5_a1_b(563);
		f_2fe5_a1_b(564);
	}
}

void f_2cef_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2ffe_a0_o();
	L0->AddMark("b4Spi4kaMapMark", "pt_map_spi4ka", 3, 531086, f_ea_a0_f());
}

void f_2cff_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2ffe_a0_o();
	L0->AddMark("b9Block", "pt_map_uprava_admin", 3, 531551, f_ea_a0_f());
}

void f_2d0f_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2ffe_a0_o();
	L0->AddMark("b2AndreiKabak", "pt_map_andrei", 0, 531558, f_ea_a0_f());
}

void f_2d1f_a2_v(object a0, object a1)
{
	f_97_a2_v("vagon_army@door1", true);
}

void f_2d26_a2_v(object a0, object a1)
{
	f_97_a2_v("house1_kabak@door1", true);
}

void f_2d2d_a2_v(object a0, object a1)
{
	f_97_a2_v("mnogogrannik_han@door1", true);
}

void f_2d34_a2_v(object a0, object a1)
{
	@SetVariable("b8DankoLetter2", 1);
}

void f_2d3a_a2_v(object a0, object a1)
{
	@SetVariable("b9KlaraLetter", 1);
}

void f_2d40_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("map_chertez_state") <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2d51_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("map_chertez_state") <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2d62_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("map_chertez_state") <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2d73_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("map_chertez_state") <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2d84_a2_v(object a0, object a1)
{
	if (f_6a_a1_i("map_chertez_state") <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2d95_a2_v(object a0, object a1)
{
	f_97_a2_v("termitnik@door1", true);
}

void f_2d9c_a2_v(object a0, object a1)
{
	f_97_a2_v("termitnik@door1", false);
}

void f_2da3_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_38fa_a0_v();
}

void f_2dac_a2_v(object a0, object a1)
{
	f_97_a2_v("mnogogrannik@door1", true);
}

void f_2db3_a2_v(object a0, object a1)
{
	f_97_a2_v("sobor@door1", true);
}

void f_2dba_a2_v(object a0, object a1)
{
	f_97_a2_v("sobor@door1", false);
}

void f_2dc1_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_bigvlad@door1", true);
}

void f_2dc8_a2_v(object a0, object a1)
{
	f_97_a2_v("cot_bigvlad@door1", false);
}

void f_2dcf_a2_v(object a0, object a1)
{
	f_97_a2_v("vagon_mishka@door1", true);
}

void f_2dd6_a2_v(object a0, object a1)
{
	f_97_a2_v("warehouse_notkin@door1", true);
}

void f_2ddd_a2_v(object a0, object a1)
{
	f_97_a2_v("warehouse_notkin@door1", false);
}

bool f_2de4_a1_b(object a0)
{
	if (f_6a_a1_i("b7q02") == 0) {
		return true;
	}
	return false;
}

bool f_2df0_a1_b(object a0)
{
	if (f_6a_a1_i("b7q01") == 1000) {
		return true;
	}
	return false;
}

bool f_2dfc_a1_b(object a0)
{
	if (f_6a_a1_i("b8q01") == 0) {
		return true;
	}
	return false;
}

bool f_2e08_a1_b(object a0)
{
	if (f_6a_a1_i("b10q01DankoTalk") == 1) {
		return true;
	}
	return false;
}

bool f_2e14_a1_b(object a0)
{
	if (f_6a_a1_i("b11q01") == 0) {
		return true;
	}
	return false;
}

bool f_2e20_a1_b(object a0)
{
	if (f_6a_a1_i("b12q01BlockVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2e2c_a1_b(object a0)
{
	if (f_6a_a1_i("b12q01DankoVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2e38_a1_b(object a0)
{
	if (f_6a_a1_i("b12q01KlaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2e44_a1_b(object a0)
{
	if (f_6a_a1_i("b4NotkinMapVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2e50_a1_b(object a0)
{
	if (f_6a_a1_i("b6q01") == 0) {
		return true;
	}
	return false;
}

bool f_2e5c_a1_b(object a0)
{
	if (f_6a_a1_i("b9q03AglajaTalk") != 0) {
		return true;
	}
	return false;
}

bool f_2e68_a1_b(object a0)
{
	if (f_6a_a1_i("b9q03") == 0) {
		return true;
	}
	return false;
}

bool f_2e74_a1_b(object a0)
{
	if (f_6a_a1_i("b9q03BadInit") != 0) {
		return true;
	}
	return false;
}

bool f_2e80_a1_b(object a0)
{
	if (f_6a_a1_i("b11q04") == 0) {
		return true;
	}
	return false;
}

bool f_2e8c_a1_b(object a0)
{
	if (f_6a_a1_i("b3KapellaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2e98_a1_b(object a0)
{
	if (f_6a_a1_i("b8GeorgVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ea4_a1_b(object a0)
{
	if (f_6a_a1_i("b10MatVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2eb0_a1_b(object a0)
{
	if (f_6a_a1_i("b6ViktorVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ebc_a1_b(object a0)
{
	if (f_6a_a1_i("b2AndreiVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ec8_a1_b(object a0)
{
	if (f_6a_a1_i("b4Spi4kaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ed4_a1_b(object a0)
{
	if (f_6a_a1_i("b10KapellaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ee0_a1_b(object a0)
{
	if (f_6a_a1_i("b9BlockVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2eec_a1_b(object a0)
{
	if (f_6a_a1_i("b5MladVladVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ef8_a1_b(object a0)
{
	if (f_6a_a1_i("resque_list") != 0) {
		return true;
	}
	return false;
}

bool f_2f04_a1_b(object a0)
{
	if (f_6a_a1_i("b3BigVladVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f10_a1_b(object a0)
{
	if (f_6a_a1_i("b3DankoVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f1c_a1_b(object a0)
{
	if (f_6a_a1_i("b3NotkinVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f28_a1_b(object a0)
{
	if (f_6a_a1_i("b8DankoVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f34_a1_b(object a0)
{
	if (f_2f92_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2f3e_a1_b(object a0)
{
	if (f_6a_a1_i("b4q01") == 0) {
		return true;
	}
	return false;
}

bool f_2f4a_a1_b(object a0)
{
	if (f_6a_a1_i("b5q01") == 0) {
		return true;
	}
	return false;
}

bool f_2f56_a1_b(object a0)
{
	if (f_6a_a1_i("b2q01") == 0) {
		return true;
	}
	return false;
}

bool f_2f62_a1_b(object a0)
{
	if (f_6a_a1_i("b2MladVladBurahHomeTalk") == 1) {
		return true;
	}
	return false;
}

bool f_2f6e_a1_b(object a0)
{
	if (f_6a_a1_i("b2q01") == 1000) {
		return true;
	}
	return false;
}

bool f_2f7a_a1_b(object a0)
{
	if (f_6a_a1_i("b2DankoTalk") == 1) {
		return true;
	}
	return false;
}

bool f_2f86_a1_b(object a0)
{
	if (f_6a_a1_i("b7q01") == 0) {
		return true;
	}
	return false;
}

bool f_2f92_a1_b(object a0)
{
	return false;
}

void f_2f95_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 562, 0, 530576);
	f_2fc9_a2_b(L0, -1);
}

void f_2fa2_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 564, 0, 530578);
	f_2fc9_a2_b(L0, -1);
}

void f_2faf_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 565, 0, 530579);
	f_2fc9_a2_b(L0, -1);
}

object f_2fbc_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2fc9_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_2fbc_a0_o();
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

bool f_2fe5_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_2fbc_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

int f_2ff6_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

object f_2ffe_a0_o(void)
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

int f_300f_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

bool f_3015_a2_b(int a0, float a1)
{
	if (a0 > 42000 && a0 < 42288) {
		int L0;
		int L1;
		L0 = (a0 - 42000) / 24;
		L1 = (a0 - 42000) % 24;
		f_201e_a2_v(L0 + 1, L1);
		return true;
	}
	if (a0 > 40000 && a0 < 40288) {
		int L2;
		int L3;
		L2 = (a0 - 40000) / 24;
		L3 = (a0 - 40000) % 24;
		f_2148_a2_v(L2 + 1, L3);
		f_392a_a2_v(L2 + 1, L3);
		return true;
	}
	return false;
}

void f_3052_a0_v(void)
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
		L2 = L2 - 0.0033333334140479565;
		if (L2 < L0) {
			continue;
		}
		@SetTimeEvent(42000 + L1, L2);
	}
	f_1fd6_a0_v();
	f_38fe_a0_v();
}

void f_3075_a2_v(int a0, float a1)
{
	if (a0 == 45091) {
		if (!f_2e2c_a1_b(g16)) {
			f_26f6_a1_i(a1);
		}
	}
	if (a0 == 45116) {
		if (!f_2f10_a1_b(g16)) {
			f_2774_a1_i(a1);
		}
	}
	if (a0 == 45113) {
		f_2762_a1_i(a1);
	}
	if (a0 == 45090) {
		if (!f_2e20_a1_b(g16)) {
			f_26ed_a1_i(a1);
		}
	}
	if (a0 == 45117) {
		f_2750_a1_i(a1);
	}
	if (a0 == 45118) {
		f_278f_a1_i(a1);
	}
	if (a0 == 45119) {
		f_27c5_a1_i(a1);
	}
	if (a0 == 45120) {
		f_27fb_a1_i(a1);
	}
	if (a0 == 45121) {
		f_2831_a1_i(a1);
	}
	if (a0 == 45122) {
		f_2855_a1_i(a1);
	}
	if (a0 == 45089) {
		if (f_2e14_a1_b(g16)) {
			f_26c0_a1_i(a1);
		}
	}
	if (a0 == 45080) {
		f_2b61_a2_v(g16, g16);
		f_bd_a2_b("quest_b7_01", "cleanup");
		f_6f_a1_o("quest_b8_01");
		f_6f_a1_o("quest_b8_03");
	}
	if (a0 == 45081) {
		f_292b_a2_v(g16, g16);
	}
	if (a0 == 45082) {
		f_2939_a2_v(g16, g16);
		f_2816_a1_i(a1);
		f_6f_a1_o("quest_b6_02");
		f_bd_a2_b("quest_b6_02", "place_klara");
	}
	if (a0 == 45092) {
		if (!f_2e38_a1_b(g16)) {
			f_26ff_a1_i(a1);
		}
	}
	if (a0 == 45093) {
		f_26e4_a1_i(a1);
	}
	if (a0 == 45083) {
		f_2cbb_a2_v(g16, g16);
		f_2bad_a2_v(g16, g16);
		f_bd_a2_b("quest_b8_01", "cleanup");
		f_7a_a1_o("quest_b9_01");
	}
	if (a0 == 45111) {
		f_2723_a1_i(a1);
	}
	if (a0 == 45079) {
		f_2dba_a2_v(g16, g16);
	}
	if (a0 == 45086) {
		f_2c33_a2_v(g16, g16);
		f_bd_a2_b("quest_b10_01", "cleanup");
		f_7a_a1_o("quest_b11_01");
	}
	if (a0 == 45087) {
		f_2c94_a2_v(g16, g16);
		f_2cd3_a2_v(g16, g16);
		f_bd_a2_b("quest_b11_01", "cleanup");
		f_6f_a1_o("quest_b12_01");
	}
	if (a0 == 45112) {
		f_2711_a1_i(a1);
	}
	if (a0 == 45115) {
		f_27aa_a1_i(a1);
	}
	if (a0 == 45114) {
		if (f_2f6e_a1_b(g16)) {
			f_2735_a1_i(a1);
		}
	}
	if (a0 == 45088) {
		if (!f_2e08_a1_b(g16)) {
			f_268a_a1_i(a1);
		}
	}
	if (a0 == 45084) {
		int L0;
		@GetVariable("b8q03MladVladIsVictim", L0);
		if (L0 != 0) {
			f_c9_a3_b("volonteers_danko", "kill", "mladvlad");
			@Trace("Mlad Vlad is dead");
		} else {
			f_c9_a3_b("volonteers_danko", "kill", "bigvlad");
			@Trace("Big Vlad is dead");
		}
	}
	if (a0 == 45085) {
		f_2be4_a2_v(g16, g16);
		f_bd_a2_b("quest_b9_01", "cleanup");
		f_6f_a1_o("quest_b10_01");
	}
	if (a0 == 45127) {
		f_27f2_a1_i(a1);
	}
	if (a0 == 45133) {
		if (f_2df0_a1_b(g16)) {
			f_2843_a1_i(a1);
		}
	}
	if (a0 == 45136) {
		f_2894_a1_i(a1);
	}
	if (a0 == 45123) {
		if (f_2f3e_a1_b(g16)) {
			f_27b3_a1_i(a1);
		}
	}
	if (a0 == 45124) {
		if (!f_2e44_a1_b(g16)) {
			f_27ce_a1_i(a1);
		}
	}
	if (a0 == 45130) {
		if (f_2f86_a1_b(g16)) {
			f_284c_a1_i(a1);
		}
	}
	if (a0 == 45131) {
		if (f_2de4_a1_b(g16)) {
			f_285e_a1_i(a1);
		}
	}
	if (a0 == 45135) {
		if (f_2dfc_a1_b(g16) && !f_2f28_a1_b(g16)) {
			f_2879_a1_i(a1);
		}
	}
	if (a0 == 45125) {
		f_27bc_a1_i(a1);
	}
	if (a0 == 45128) {
		if (f_2e50_a1_b(g16)) {
			f_281f_a1_i(a1);
		}
	}
	if (a0 == 45129) {
		f_2828_a1_i(a1);
	}
	if (a0 == 45134) {
		f_2870_a1_i(a1);
	}
	if (a0 == 45126) {
		if (f_2f4a_a1_b(g16)) {
			f_27e9_a1_i(a1);
		}
	}
	if (a0 == 45137) {
		f_28af_a1_i(a1);
	}
	if (a0 == 45138) {
		f_289d_a1_i(a1);
	}
	if (a0 == 45132) {
		f_2867_a1_i(a1);
	}
	if (a0 == 45198) {
		if (!f_2ef8_a1_b(g16)) {
			f_2da3_a2_v(g16, g16);
		}
	}
	if (a0 == 45262) {
		f_2d40_a2_v(g16, g16);
	}
	if (a0 == 45190) {
		f_277d_a1_i(a1);
	}
	if (a0 == 45263) {
		f_2d51_a2_v(g16, g16);
	}
	if (a0 == 45264) {
		f_2d62_a2_v(g16, g16);
	}
	if (a0 == 45266) {
		f_2d84_a2_v(g16, g16);
	}
	if (a0 == 45185) {
		if (!f_2e8c_a1_b(g16)) {
			f_2798_a1_i(a1);
		}
	}
	if (a0 == 45196) {
		if (!f_2ed4_a1_b(g16)) {
			f_2630_a1_i(a1);
		}
	}
	if (a0 == 45189) {
		if (!f_2eec_a1_b(g16)) {
			f_2804_a1_i(a1);
		}
	}
	if (a0 == 45265) {
		f_2d73_a2_v(g16, g16);
	}
	if (a0 == 45157) {
		if (f_2f34_a1_b(g16)) {
			f_2666_a1_i(a1);
		}
	}
	if (a0 == 45160) {
		if (f_2f34_a1_b(g16)) {
			f_269c_a1_i(a1);
		}
	}
	if (a0 == 45161) {
		if (f_2f34_a1_b(g16)) {
			f_26db_a1_i(a1);
		}
	}
	if (a0 == 45158) {
		if (f_2f34_a1_b(g16)) {
			f_266f_a1_i(a1);
		}
	}
	if (a0 == 45159) {
		if (f_2f34_a1_b(g16)) {
			f_2678_a1_i(a1);
		}
	}
	if (a0 == 45187) {
		if (!f_2ea4_a1_b(g16)) {
			f_2693_a1_i(a1);
		}
	}
	if (a0 == 45188) {
		if (!f_2eb0_a1_b(g16)) {
			f_283a_a1_i(a1);
		}
	}
	if (a0 == 45193) {
		f_6f_a1_o("quest_b1_05");
	}
	if (a0 == 45194) {
		if (!f_2ebc_a1_b(g16)) {
			f_2d0f_a2_v(g16, g16);
			f_272c_a1_i(a1);
		}
	}
	if (a0 == 45197) {
		if (!f_2ee0_a1_b(g16)) {
			f_2cff_a2_v(g16, g16);
			f_28a6_a1_i(a1);
		}
	}
	if (a0 == 45191) {
		f_2786_a1_i(a1);
	}
	if (a0 == 45235) {
		f_27e0_a1_i(a1);
	}
	if (a0 == 45192) {
		f_2932_a2_v(g16, g16);
	}
	if (a0 == 45186) {
		if (!f_2e98_a1_b(g16)) {
			f_288b_a1_i(a1);
		}
	}
	if (a0 == 45195) {
		if (!f_2ec8_a1_b(g16)) {
			f_2cef_a2_v(g16, g16);
			f_27d7_a1_i(a1);
		}
	}
	if (a0 == 45234) {
		if (!f_2f1c_a1_b(g16)) {
			f_27a1_a1_i(a1);
		}
	}
	if (a0 == 45237) {
		f_2d34_a2_v(g16, g16);
		f_2882_a1_i(a1);
	}
	if (a0 == 45238) {
		f_2d3a_a2_v(g16, g16);
		f_28c1_a1_i(a1);
	}
	if (a0 == 45162) {
		if (f_2f34_a1_b(g16)) {
			f_2708_a1_i(a1);
		}
	}
	if (a0 == 45139) {
		f_2681_a1_i(a1);
	}
	if (a0 == 45141) {
		f_26c9_a1_i(a1);
	}
	if (a0 == 45140) {
		f_26ae_a1_i(a1);
	}
	if (a0 == 45144) {
		f_280d_a1_i(a1);
	}
	if (a0 == 45148) {
		f_7a_a1_o("quest_b9_03");
	}
	if (a0 == 45149) {
		f_6f_a1_o("quest_b10_04");
	}
	if (a0 == 45150) {
		f_6f_a1_o("quest_b11_04");
	}
	if (a0 == 45151) {
		if (f_2e80_a1_b(g16)) {
			f_26d2_a1_i(a1);
		}
	}
	if (a0 == 45155) {
		if (f_2f34_a1_b(g16)) {
			f_2654_a1_i(a1);
		}
	}
	if (a0 == 45142) {
		f_26a5_a1_i(a1);
	}
	if (a0 == 45147) {
		if (!f_2e5c_a1_b(g16) && f_2e68_a1_b(g16) && !f_2e74_a1_b(g16)) {
			f_28b8_a1_i(a1);
		}
	}
	if (a0 == 45152) {
		if (f_2f34_a1_b(g16)) {
			f_2639_a1_i(a1);
		}
	}
	if (a0 == 45156) {
		if (f_2f34_a1_b(g16)) {
			f_265d_a1_i(a1);
		}
	}
	if (a0 == 45153) {
		if (f_2f34_a1_b(g16)) {
			f_2642_a1_i(a1);
		}
	}
	if (a0 == 45154) {
		if (f_2f34_a1_b(g16)) {
			f_264b_a1_i(a1);
		}
	}
	if (a0 == 45143) {
		f_26b7_a1_i(a1);
	}
	if (a0 == 45078) {
		f_2d9c_a2_v(g16, g16);
		f_2b23_a2_v(g16, g16);
		f_bd_a2_b("quest_b6_01", "cleanup");
		f_6f_a1_o("quest_b7_01");
	}
	if (a0 == 45070) {
		f_28d1_a2_v(g16, g16);
	}
	if (a0 == 45059) {
		f_2dd6_a2_v(g16, g16);
		f_2a0b_a2_v(g16, g16);
		f_bd_a2_b("quest_b2_01", "cleanup");
		f_6f_a1_o("quest_b3_01");
	}
	if (a0 == 45071) {
		f_28df_a2_v(g16, g16);
	}
	if (a0 == 45073) {
		f_2904_a2_v(g16, g16);
	}
	if (a0 == 45072) {
		f_28ed_a2_v(g16, g16);
		f_28fb_a2_v(g16, g16);
	}
	if (a0 == 45076) {
		if (f_2f56_a1_b(g16)) {
			f_273e_a1_i(a1);
		}
	}
	if (a0 == 45077) {
		if (!f_2f7a_a1_b(g16)) {
			f_2747_a1_i(a1);
		}
	}
	if (a0 == 45075) {
		if (!f_2f62_a1_b(g16)) {
			f_2759_a1_i(a1);
		}
	}
	if (a0 == 45058) {
		f_2955_a2_v(g16, g16);
		f_bd_a2_b("quest_b1_01", "cleanup");
		f_6f_a1_o("quest_b2_01");
		f_6f_a1_o("quest_b2_03");
	}
	if (a0 == 45060) {
		f_2a77_a2_v(g16, g16);
		f_bd_a2_b("quest_b3_01", "cleanup");
		f_7a_a1_o("quest_b4_01");
	}
	if (a0 == 45065) {
		f_2ac7_a2_v(g16, g16);
		f_bd_a2_b("quest_b4_01", "cleanup");
		f_6f_a1_o("quest_b5_01");
	}
	if (a0 == 45061) {
		@QueuePlayMovie("aglaja.wmv");
	}
	if (a0 == 45067) {
		if (!f_2f04_a1_b(g16)) {
			f_276b_a1_i(a1);
		}
	}
	if (a0 == 45068) {
		f_2dc8_a2_v(g16, g16);
		f_bd_a2_b("quest_b1_01", "remove_whitemask");
	}
	if (a0 == 45062) {
		@QueuePlayMovie("army.wmv");
	}
	if (a0 == 45069) {
		f_2ddd_a2_v(g16, g16);
	}
	if (a0 == 45066) {
		f_2af7_a2_v(g16, g16);
		f_bd_a2_b("quest_b5_01", "cleanup");
		f_6f_a1_o("quest_b6_01");
	}
	if (a0 == 45074) {
		f_290d_a2_v(g16, g16);
	}
}

void f_363f_a1_v(float a0)
{
	g16 = null;
	@SetTimeEvent(45091, 271.5);
	@SetTimeEvent(45116, 58.0);
	@SetTimeEvent(45113, 36.0);
	@SetTimeEvent(45090, 281.0);
	@SetTimeEvent(45117, 48.08000183105469);
	@SetTimeEvent(45118, 72.08000183105469);
	@SetTimeEvent(45119, 96.08000183105469);
	@SetTimeEvent(45120, 120.08000183105469);
	@SetTimeEvent(45121, 144.0800018310547);
	@SetTimeEvent(45122, 168.0800018310547);
	@SetTimeEvent(45089, 247.25);
	@SetTimeEvent(45080, 168.0);
	@SetTimeEvent(45081, 144.0);
	@SetTimeEvent(45082, 127.0);
	@SetTimeEvent(45092, 271.25);
	@SetTimeEvent(45093, 282.0);
	@SetTimeEvent(45083, 192.0);
	@SetTimeEvent(45111, 12.0);
	@SetTimeEvent(45079, 168.0);
	@SetTimeEvent(45086, 240.0);
	@SetTimeEvent(45087, 264.0);
	@SetTimeEvent(45112, 24.049999237060547);
	@SetTimeEvent(45115, 60.0);
	@SetTimeEvent(45114, 48.04999923706055);
	@SetTimeEvent(45088, 223.25);
	@SetTimeEvent(45084, 192.0);
	@SetTimeEvent(45085, 216.0);
	@SetTimeEvent(45127, 120.05000305175781);
	@SetTimeEvent(45133, 168.0500030517578);
	@SetTimeEvent(45136, 180.0);
	@SetTimeEvent(45123, 79.25);
	@SetTimeEvent(45124, 84.0);
	@SetTimeEvent(45130, 151.25);
	@SetTimeEvent(45131, 152.0);
	@SetTimeEvent(45135, 175.25);
	@SetTimeEvent(45125, 96.05000305175781);
	@SetTimeEvent(45128, 127.25);
	@SetTimeEvent(45129, 144.0500030517578);
	@SetTimeEvent(45134, 192.0500030517578);
	@SetTimeEvent(45126, 103.25);
	@SetTimeEvent(45137, 199.25);
	@SetTimeEvent(45138, 216.0500030517578);
	@SetTimeEvent(45132, 156.0);
	@SetTimeEvent(45198, 24.0);
	@SetTimeEvent(45262, 168.0);
	@SetTimeEvent(45190, 64.0);
	@SetTimeEvent(45263, 192.0);
	@SetTimeEvent(45264, 216.0);
	@SetTimeEvent(45266, 264.0);
	@SetTimeEvent(45185, 63.0);
	@SetTimeEvent(45196, 227.5);
	@SetTimeEvent(45189, 111.5);
	@SetTimeEvent(45265, 240.0);
	@SetTimeEvent(45157, 151.02000427246094);
	@SetTimeEvent(45160, 223.02000427246094);
	@SetTimeEvent(45161, 247.02000427246094);
	@SetTimeEvent(45158, 175.02000427246094);
	@SetTimeEvent(45159, 199.02000427246094);
	@SetTimeEvent(45187, 230.0);
	@SetTimeEvent(45188, 135.0);
	@SetTimeEvent(45193, 11.0);
	@SetTimeEvent(45194, 39.0);
	@SetTimeEvent(45197, 199.3300018310547);
	@SetTimeEvent(45191, 64.25);
	@SetTimeEvent(45235, 90.0);
	@SetTimeEvent(45192, 120.0);
	@SetTimeEvent(45186, 184.5);
	@SetTimeEvent(45195, 82.5);
	@SetTimeEvent(45234, 67.5);
	@SetTimeEvent(45237, 178.5);
	@SetTimeEvent(45238, 205.25);
	@SetTimeEvent(45162, 271.0199890136719);
	@SetTimeEvent(45139, 240.0500030517578);
	@SetTimeEvent(45141, 263.5);
	@SetTimeEvent(45140, 263.25);
	@SetTimeEvent(45144, 108.0);
	@SetTimeEvent(45148, 210.0);
	@SetTimeEvent(45149, 222.0);
	@SetTimeEvent(45150, 240.0);
	@SetTimeEvent(45151, 250.5);
	@SetTimeEvent(45155, 103.0199966430664);
	@SetTimeEvent(45142, 264.04998779296875);
	@SetTimeEvent(45147, 210.0);
	@SetTimeEvent(45152, 31.020000457763672);
	@SetTimeEvent(45156, 127.0199966430664);
	@SetTimeEvent(45153, 55.02000045776367);
	@SetTimeEvent(45154, 79.0199966430664);
	@SetTimeEvent(45143, 252.0);
	@SetTimeEvent(45078, 144.0);
	@SetTimeEvent(45070, 72.0);
	@SetTimeEvent(45059, 48.0);
	@SetTimeEvent(45071, 18.0);
	@SetTimeEvent(45073, 48.0);
	@SetTimeEvent(45072, 48.0);
	@SetTimeEvent(45076, 31.25);
	@SetTimeEvent(45077, 33.0);
	@SetTimeEvent(45075, 41.0);
	f_2dc1_a2_v(g16, g16);
	f_2dcf_a2_v(g16, g16);
	f_294e_a2_v(g16, g16);
	f_28ca_a2_v(g16, g16);
	f_28d8_a2_v(g16, g16);
	f_28e6_a2_v(g16, g16);
	f_28f4_a2_v(g16, g16);
	f_2902_a2_v(g16, g16);
	f_2906_a2_v(g16, g16);
	f_2914_a2_v(g16, g16);
	f_2924_a2_v(g16, g16);
	f_2d95_a2_v(g16, g16);
	f_2cb6_a2_v(g16, g16);
	f_2db3_a2_v(g16, g16);
	f_2940_a2_v(g16, g16);
	f_2d1f_a2_v(g16, g16);
	f_2947_a2_v(g16, g16);
	f_2d26_a2_v(g16, g16);
	f_2d2d_a2_v(g16, g16);
	f_2dac_a2_v(g16, g16);
	f_271a_a1_i(a0);
	f_6f_a1_o("volonteers_burah");
	f_6f_a1_o("quest_b1_01");
	f_6f_a1_o("quest_b1_05");
	@SetTimeEvent(45058, 24.0);
	@SetTimeEvent(45060, 72.0);
	@SetTimeEvent(45065, 96.0);
	@SetTimeEvent(45061, 144.0);
	@SetTimeEvent(45067, 55.25);
	@SetTimeEvent(45068, 11.0);
	@SetTimeEvent(45062, 192.0);
	@SetTimeEvent(45069, 72.0);
	@SetTimeEvent(45066, 120.0);
	@SetTimeEvent(45074, 48.0);
}

void f_38b4_a3_v(object a0, bool a1, int a2)
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

void f_38d5_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_38e1_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_38b4_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		f_38d5_a1_v(L3);
	}
}

void f_38fa_a0_v(void)
{
	f_38e1_a0_v();
}

void f_38fe_a0_v(void)
{
	f_1d86_a1_v(7);
}

bool f_3903_a2_b(int a0, int a1)
{
	if (a0 == 6) {
		return false;
	}
	if (a1 == 4) {
		if (a0 == 15) {
			return false;
		}
		if (a0 == 9) {
			return false;
		}
	} else {
		if (a1 == 5) {
			if (a0 == 15) {
				return false;
			}
		} else {
			if (a1 == 6) {
				if (a0 == 15) {
					return false;
				}
			}
		}
	}
	return true;
}

void f_392a_a2_v(int a0, int a1)
{
	@Trace("Updating game " + a0 + " " + a1);
	if (a0 == 8 && a1 == 0) {
		object L0;
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "aglaja");
	}
	if (a0 == 9 && a1 == 0) {
		f_1dd3_a1_v(0);
		f_1dd3_a1_v(1);
		f_1dd3_a1_v(2);
		f_1dd3_a1_v(3);
	}
}

void f_395e_a1_v(int a0)
{
	int L0;
	@Trace("Disease update");
	L0 = 0;
	if (a0 == 0) {
		L0 = 0;
	} else {
		if (a0 == 1) {
			L0 = 0;
		} else {
			if (a0 == 2) {
				L0 = 1;
			} else {
				if (a0 == 3) {
					L0 = 2;
				} else {
					if (a0 == 4) {
						L0 = 3;
					} else {
						if (a0 == 5) {
							L0 = 4;
						} else {
							if (a0 == 6) {
								L0 = 5;
							} else {
								if (a0 == 7) {
									L0 = 5;
								} else {
									if (a0 == 8) {
										L0 = 6;
									} else {
										if (a0 == 9) {
											L0 = 6;
										} else {
											if (a0 == 10) {
												L0 = 7;
											} else {
												if (a0 == 11) {
													L0 = 8;
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
	if (a0 + 1 != 12) {
		int L1;
		int L2;
		@Trace("Diseased regions : " + L0);
		L1 = 0;
		for (; L1 < 16; L1++) {
			if (f_17c_a1_b(L1)) {
				f_1a6_a1_v(L1);
			} else {
				if (f_19a_a1_b(L1)) {
					f_16a_a1_v(L1);
				}
			}
		}
		if (a0 == 2) {
			@Trace("Special diseased region: 6");
			f_188_a1_v(5);
		}
		L2 = f_125_a0_i();
		if (L2 < L0) {
			int L3;
			int L4;
			L3 = L0 - L2;
			for (L4 = 0; L4 < L3; L4++) {
				f_137_a1_v(a0 + 1);
			}
		}
	} else {
		int L5;
		for (L5 = 0; L5 < 16; L5++) {
			if (f_17c_a1_b(L5) || f_19a_a1_b(L5)) {
				f_16a_a1_v(L5);
			}
		}
	}
}

void f_39f8_a1_v(int a0)
{
	if (a0 == 3) {
		object L0;
		@Trace("Special diseased house: house5_unoin03l");
		@Trace("Special diseased house: house5_unoin03r");
		@GetSceneByName(L0, "house5_unoin03l");
		@ReplaceScene(L0, "s_house5_unoin03l.isc");
		@GetSceneByName(L0, "house5_unoin03r");
		@ReplaceScene(L0, "s_house5_unoin03r.isc");
	} else {
		if (a0 == 4) {
			object L1;
			@GetSceneByName(L1, "theater");
			@ReplaceScene(L1, "dtheater_burah.isc");
		} else {
			if (a0 == 8) {
				object L2;
				@Trace("Special replaced house: uprava_admin");
				@GetSceneByName(L2, "uprava_admin");
				@ReplaceScene(L2, "uprava_admin_army_burah.isc");
			} else {
				if (a0 == 11) {
					object L3;
					@GetSceneByName(L3, "theater");
					@ReplaceScene(L3, "theater_burah.isc");
				}
			}
		}
	}
}

object f_3a34_a3_o(object a0, Vector a1, Vector a2)
{
	object L0;
	a0->AddStationaryActor(L0, a1, a2, "pers_morlok", "Burah_arena_manager.xml");
	return L0;
}

