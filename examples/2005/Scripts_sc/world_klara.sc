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
		if (f_21d9_a2_b(a0, a1)) {
			return;
		}
		if (f_2ab2_a2_b(a0, a1)) {
			return;
		}
		f_2b12_a2_v(a0, a1);
	}

	void init(void)
	{
		@SetVariable("branch", 2);
		@SetSaveProperty(0, 2);
		f_34_a0_v();
		f_1f09_a0_v();
		f_2210_a0_v();
		f_2aef_a0_v();
		f_2e20_a1_v(f_11c_a0_f());
		for (; ; ) {
			@Hold();
		}
	}
}

void f_34_a0_v(void)
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
	L1->GetLocator("pt_birth_Klara", L2, L3, L4);
	if (L2) {
		@Teleport(L0, L1, L3, L4);
	}
}

object f_4a_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_51_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_5d_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_51_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_73_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_73_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_7e_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_84_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_89_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_94_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

object f_9f_a4_o(object a0, string a1, string a2, string a3)
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

void f_b1_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_c2_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_e5_a1_v(a1);
	f_5d_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_e5_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_ef_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_fb_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

void f_107_a1_v(object a0)
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

float f_11c_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_121_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_12a_a1_b(int a0)
{
	return f_121_a0_i() == a0;
}

void f_130_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_135_a0_v(void)
{
	@SetSepia(0, 0);
}

string f_13a_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

void f_140_a2_v(object a0, int a1)
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

int f_166_a0_i(void)
{
	int L0;
	int L1;
	L0 = 0;
	for (L1 = 0; L1 < 16; L1++) {
		if (f_1bc_a1_b(L1)) {
			L0 = L0 + 1;
		}
	}
	return L0;
}

void f_178_a0_v(void)
{
	int L0;
	int L1;
	@irand(L0, 16);
	for (L1 = 0; L1 < 16; L1++) {
		int L2;
		L2 = (L1 + L0) % 16;
		if (f_19e_a1_b(L2) && f_300e_a1_b(L2)) {
			f_1c8_a1_v(L2);
			@Trace("Diseased Region: " + L2);
			return;
		}
	}
}

bool f_19e_a1_b(int a0)
{
	int L0;
	@GetVariable(f_13a_a1_s(a0), L0);
	return (L0 & 3) == 0;
}

void f_1aa_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_13a_a1_s(a0), L0);
	L1 = L0 & 252 | 0;
	@SetVariable(f_13a_a1_s(a0), L1);
}

bool f_1bc_a1_b(int a0)
{
	int L0;
	@GetVariable(f_13a_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

void f_1c8_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_13a_a1_s(a0), L0);
	L1 = L0 & 252 | 1;
	@SetVariable(f_13a_a1_s(a0), L1);
}

bool f_1da_a1_b(int a0)
{
	int L0;
	@GetVariable(f_13a_a1_s(a0), L0);
	return (L0 & 3) == 2;
}

void f_1e6_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_13a_a1_s(a0), L0);
	L1 = L0 & 252 | 2;
	@SetVariable(f_13a_a1_s(a0), L1);
}

void f_1f8_a1_v(int a0)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: main outdoor scene not found");
		return;
	}
	L0->RemoveAllRegionActors(a0);
}

void f_205_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3);
}

void f_212_a6_v(int a0, string a1, string a2, int a3, int a4, int a5)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3, a4, a5);
}

void f_21f_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCountByType(a0, a1, a2, a3);
}

void f_22c_a2_v(int a0, bool a1)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	L0->GetGroupActors(L1, 101 + a0);
	if (L1) {
		bool L2;
		object L3;
		for (; L1->Next(L2, L3), L2; ) {
			if (f_51_a2_b(L3, "locked")) {
				L3->SetProperty("locked", a1);
			} else {
				@Trace("Actor \"" + L3 + "\" can't be locked");
			}
		}
	}
}

void f_24e_a4_v(string a0, object a1, string a2, string a3)
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

void f_264_a2_v(string a0, object a1)
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

void f_27c_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_22c_a2_v(a0, true);
	f_107_a1_v(a2);
	f_107_a1_v(a3);
	f_107_a1_v(a4);
}

void f_28f_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_22c_a2_v(a0, false);
	f_107_a1_v(a2);
	f_107_a1_v(a3);
	f_107_a1_v(a4);
	if (a1 < 8) {
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
		f_264_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	} else {
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
		f_264_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	}
}

void f_2de_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_22c_a2_v(a0, false);
	f_107_a1_v(a2);
	f_107_a1_v(a3);
	f_107_a1_v(a4);
	if (a1 < 8) {
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
	} else {
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_24e_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
	}
}

void f_319_a2_v(int a0, bool a1)
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

void f_32a_a2_v(int a0, bool a1)
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

void f_33b_a3_v(int a0, bool a1, int a2)
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

void f_374_a3_v(int a0, bool a1, int a2)
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
				f_ef_a2_b(L3, "restore");
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
				f_ef_a2_b(L6, "cleanup");
			}
		}
	}
}

void f_3b2_a3_v(int a0, bool a1, int a2)
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
			f_ef_a2_b(L4, "cleanup");
		}
	}
}

void f_3e5_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 < 2 || a1 >= 6 && a1 < 10) {
		f_319_a2_v(a0, true);
	} else {
		f_319_a2_v(a0, false);
	}
}

void f_40a_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 >= 6 && a1 < 10) {
		f_319_a2_v(a0, true);
	} else {
		f_319_a2_v(a0, false);
	}
}

void f_428_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 4 || a1 >= 6 && a1 < 8) {
		f_319_a2_v(a0, true);
	} else {
		f_319_a2_v(a0, false);
	}
}

void f_44d_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 6) {
		f_319_a2_v(a0, true);
	} else {
		f_319_a2_v(a0, false);
	}
}

float f_464_a1_f(int a0)
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

float f_47c_a1_f(int a0)
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

float f_4d6_a1_f(int a0)
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

bool f_530_a2_b(int a0, int a1)
{
	return a0 >= 10 && a1 < 6;
}

bool f_53a_a2_b(int a0, int a1)
{
	return a0 >= 3 && (a1 > 22 || a1 < 5);
}

bool f_54b_a1_b(int a0)
{
	return a0 >= 8;
}

void f_54f_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_464_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (a1 == 0 && a2 < 21 && f_2aac_a0_i() == 1) {
		f_205_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_205_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
		f_205_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
		f_205_a4_v(a0, "pers_woman", "woman.xml", 3);
		f_205_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_205_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
			f_205_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
			f_205_a4_v(a0, "pers_woman", "woman.xml", 3);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 2);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 2);
			f_205_a4_v(a0, "pers_boy", "boy.xml", 2);
			f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
		} else {
			f_205_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 1);
			f_205_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 2);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_205_a4_v(a0, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_655_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_464_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (a1 == 0 && a2 < 21 && f_2aac_a0_i() == 1) {
		f_205_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_205_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_205_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
		f_205_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
		f_205_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_205_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_205_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
			f_205_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		} else {
			f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		}
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_76a_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_464_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (a1 == 0 && a2 < 21 && f_2aac_a0_i() == 1) {
		f_205_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_205_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
			if (a1 + 1 >= 3) {
				f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_205_a4_v(a0, "pers_butcher", "butcher.xml", 2);
			}
		} else {
			f_205_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_205_a4_v(a0, "pers_butcher", "butcher.xml", 3);
			}
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_205_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_53a_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
}

void f_8ad_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_464_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (a1 == 0 && a2 < 21 && f_2aac_a0_i() == 1) {
		f_205_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_205_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_205_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_205_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 2);
		} else {
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 1);
		}
	}
}

void f_96c_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_464_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (a1 == 0 && a2 < 21 && f_2aac_a0_i() == 1) {
		f_205_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_205_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_205_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_woman", "woman.xml", 2);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_205_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 2);
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_205_a4_v(a0, "pers_woman", "woman.xml", 2);
			f_205_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		} else {
			f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_205_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_205_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_205_a4_v(a0, "pers_dog", "dog.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_205_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
}

void f_a43_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_21f_a4_v(a0, "fog", "fog.xml", 8);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 1 * f_4d6_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_212_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_af7_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4d6_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_212_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_bab_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4d6_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_212_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_53a_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_c6c_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4d6_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_21f_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 2 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_212_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_d13_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_21f_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 2 * f_4d6_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_205_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_205_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_205_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_21f_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_21f_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L1 = 2 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_212_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_212_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_dba_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_47c_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 5);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		f_205_a4_v(a0, "pers_rat", "rat.xml", 2);
		L2 = 3 * f_47c_a1_f(a1);
		if (L2) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_4d6_a1_f(a1);
		if (L3) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_e76_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 1);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_47c_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_47c_a1_f(a1);
		if (L2) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4d6_a1_f(a1);
		if (L3) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_f32_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 2);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_47c_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_47c_a1_f(a1);
		if (L2) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4d6_a1_f(a1);
		if (L3) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_530_a2_b(a1, a2)) {
		f_205_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_fee_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_47c_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 7);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 2 * f_47c_a1_f(a1);
		if (L2) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4d6_a1_f(a1);
		if (L3) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_109d_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_47c_a1_f(a1);
		if (L0) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4d6_a1_f(a1);
		if (L1) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_205_a4_v(a0, "pers_rat", "rat.xml", 8);
		f_205_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_205_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_47c_a1_f(a1);
		if (L2) {
			f_205_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_205_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_54b_a1_b(a1)) {
				f_205_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4d6_a1_f(a1);
		if (L3) {
			f_205_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_54b_a1_b(a1)) {
		f_205_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_114c_a1_v(object a0)
{
}

void f_114e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(0, false);
		f_33b_a3_v(0, false, 1);
		f_27c_a5_v(0, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(0, false, 4);
		f_3b2_a3_v(0, false, 4);
	}
	f_428_a2_v(0, a1);
	f_8ad_a3_v(0, a0, a1);
}

void f_1182_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(0, true);
		f_33b_a3_v(0, true, 1);
		f_28f_a5_v(0, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(0, true, 4);
		f_3b2_a3_v(0, false, 4);
	}
	f_319_a2_v(0, false);
	f_c6c_a3_v(0, a0, a1);
}

void f_11b6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(0, false);
		f_33b_a3_v(0, false, 1);
		f_2de_a5_v(0, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(0, false, 4);
		f_3b2_a3_v(0, true, 4);
	}
	f_319_a2_v(0, false);
	f_fee_a3_v(0, a0, a1);
}

void f_11ea_a1_v(object a0)
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

void f_1213_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(1, false);
		f_33b_a3_v(1, false, 1);
		f_27c_a5_v(1, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(1, false, 8);
		f_3b2_a3_v(1, false, 8);
	}
	f_428_a2_v(1, a1);
	f_96c_a3_v(1, a0, a1);
}

void f_1247_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(1, true);
		f_33b_a3_v(1, true, 1);
		f_28f_a5_v(1, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(1, true, 8);
		f_3b2_a3_v(1, false, 8);
	}
	f_319_a2_v(1, false);
	f_d13_a3_v(1, a0, a1);
}

void f_127b_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(1, false);
		f_33b_a3_v(1, false, 1);
		f_2de_a5_v(1, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(1, false, 8);
		f_3b2_a3_v(1, true, 8);
	}
	f_319_a2_v(1, false);
	f_109d_a3_v(1, a0, a1);
}

void f_12af_a1_v(object a0)
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

void f_12e1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(2, false);
		f_33b_a3_v(2, false, 1);
		f_27c_a5_v(2, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(2, false, 5);
		f_3b2_a3_v(2, false, 5);
	}
	f_428_a2_v(2, a1);
	f_76a_a3_v(2, a0, a1);
}

void f_1315_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(2, true);
		f_33b_a3_v(2, true, 1);
		f_28f_a5_v(2, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(2, true, 5);
		f_3b2_a3_v(2, false, 5);
	}
	f_319_a2_v(2, false);
	f_bab_a3_v(2, a0, a1);
}

void f_1349_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(2, false);
		f_33b_a3_v(2, false, 1);
		f_2de_a5_v(2, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(2, false, 5);
		f_3b2_a3_v(2, true, 5);
	}
	f_319_a2_v(2, false);
	f_f32_a3_v(2, a0, a1);
}

void f_137d_a1_v(object a0)
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

void f_13c7_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(3, false);
		f_33b_a3_v(3, false, 1);
		f_27c_a5_v(3, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(3, false, 7);
		f_3b2_a3_v(3, false, 7);
	}
	f_3e5_a2_v(3, a1);
	f_76a_a3_v(3, a0, a1);
}

void f_13fb_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(3, true);
		f_33b_a3_v(3, true, 1);
		f_28f_a5_v(3, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(3, true, 7);
		f_3b2_a3_v(3, false, 7);
	}
	f_319_a2_v(3, false);
	f_bab_a3_v(3, a0, a1);
}

void f_142f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(3, false);
		f_33b_a3_v(3, false, 1);
		f_2de_a5_v(3, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(3, false, 7);
		f_3b2_a3_v(3, true, 7);
	}
	f_319_a2_v(3, false);
	f_f32_a3_v(3, a0, a1);
}

void f_1463_a1_v(object a0)
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

void f_14a1_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(4, false);
		f_33b_a3_v(4, false, 1);
		f_27c_a5_v(4, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(4, false, 4);
		f_3b2_a3_v(4, false, 4);
	}
	f_40a_a2_v(4, a1);
	f_76a_a3_v(4, a0, a1);
}

void f_14d5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(4, true);
		f_33b_a3_v(4, true, 1);
		f_28f_a5_v(4, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(4, true, 4);
		f_3b2_a3_v(4, false, 4);
	}
	f_319_a2_v(4, false);
	f_bab_a3_v(4, a0, a1);
}

void f_1509_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(4, false);
		f_33b_a3_v(4, false, 1);
		f_2de_a5_v(4, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(4, false, 4);
		f_3b2_a3_v(4, true, 4);
	}
	f_319_a2_v(4, false);
	f_f32_a3_v(4, a0, a1);
}

void f_153d_a1_v(object a0)
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
	a0->add("house1_se_05");
}

void f_1590_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(5, false);
		f_33b_a3_v(5, false, 1);
		f_27c_a5_v(5, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(5, false, 4);
		f_3b2_a3_v(5, false, 4);
	}
	f_3e5_a2_v(5, a1);
	f_76a_a3_v(5, a0, a1);
}

void f_15c4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(5, true);
		f_33b_a3_v(5, true, 1);
		f_28f_a5_v(5, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(5, true, 4);
		f_3b2_a3_v(5, false, 4);
	}
	f_319_a2_v(5, false);
	f_bab_a3_v(5, a0, a1);
}

void f_15f8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(5, false);
		f_33b_a3_v(5, false, 1);
		f_2de_a5_v(5, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(5, false, 4);
		f_3b2_a3_v(5, true, 4);
	}
	f_319_a2_v(5, false);
	f_f32_a3_v(5, a0, a1);
}

void f_162c_a1_v(object a0)
{
}

void f_162e_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_428_a2_v(6, a1);
}

void f_1635_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_319_a2_v(6, false);
}

void f_163c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_319_a2_v(6, false);
}

void f_1643_a1_v(object a0)
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

void f_166f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(7, false);
		f_33b_a3_v(7, false, 1);
		f_27c_a5_v(7, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(7, false, 6);
		f_3b2_a3_v(7, false, 6);
	}
	f_40a_a2_v(7, a1);
	f_655_a3_v(7, a0, a1);
}

void f_16a3_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(7, true);
		f_33b_a3_v(7, true, 1);
		f_28f_a5_v(7, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(7, true, 6);
		f_3b2_a3_v(7, false, 6);
	}
	f_319_a2_v(7, false);
	f_af7_a3_v(7, a0, a1);
}

void f_16d7_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(7, false);
		f_33b_a3_v(7, false, 1);
		f_2de_a5_v(7, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(7, false, 6);
		f_3b2_a3_v(7, true, 6);
	}
	f_319_a2_v(7, false);
	f_e76_a3_v(7, a0, a1);
}

void f_170b_a1_v(object a0)
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

void f_1737_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(8, false);
		f_33b_a3_v(8, false, 1);
		f_27c_a5_v(8, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(8, false, 4);
		f_3b2_a3_v(8, false, 4);
	}
	f_3e5_a2_v(8, a1);
	f_655_a3_v(8, a0, a1);
}

void f_176b_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(8, true);
		f_33b_a3_v(8, true, 1);
		f_28f_a5_v(8, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(8, true, 4);
		f_3b2_a3_v(8, false, 4);
	}
	f_319_a2_v(8, false);
	f_af7_a3_v(8, a0, a1);
}

void f_179f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(8, false);
		f_33b_a3_v(8, false, 1);
		f_2de_a5_v(8, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(8, false, 4);
		f_3b2_a3_v(8, true, 4);
	}
	f_319_a2_v(8, false);
	f_e76_a3_v(8, a0, a1);
}

void f_17d3_a1_v(object a0)
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

void f_1802_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(9, false);
		f_33b_a3_v(9, false, 1);
		f_27c_a5_v(9, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(9, false, 7);
		f_3b2_a3_v(9, false, 7);
	}
	f_428_a2_v(9, a1);
	f_655_a3_v(9, a0, a1);
}

void f_1836_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(9, true);
		f_33b_a3_v(9, true, 1);
		f_28f_a5_v(9, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(9, true, 7);
		f_3b2_a3_v(9, false, 7);
	}
	f_319_a2_v(9, false);
	f_af7_a3_v(9, a0, a1);
}

void f_186a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(9, false);
		f_33b_a3_v(9, false, 1);
		f_2de_a5_v(9, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(9, false, 7);
		f_3b2_a3_v(9, true, 7);
	}
	f_319_a2_v(9, false);
	f_e76_a3_v(9, a0, a1);
}

void f_189e_a1_v(object a0)
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

void f_18d3_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(10, false);
		f_33b_a3_v(10, false, 1);
		f_27c_a5_v(10, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(10, false, 7);
		f_3b2_a3_v(10, false, 7);
	}
	f_3e5_a2_v(10, a1);
	f_655_a3_v(10, a0, a1);
}

void f_1907_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(10, true);
		f_33b_a3_v(10, true, 1);
		f_28f_a5_v(10, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(10, true, 7);
		f_3b2_a3_v(10, false, 7);
	}
	f_319_a2_v(10, false);
	f_af7_a3_v(10, a0, a1);
}

void f_193b_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(10, false);
		f_33b_a3_v(10, false, 1);
		f_2de_a5_v(10, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(10, false, 7);
		f_3b2_a3_v(10, true, 7);
	}
	f_319_a2_v(10, false);
	f_e76_a3_v(10, a0, a1);
}

void f_196f_a1_v(object a0)
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

void f_19a7_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(11, false);
		f_33b_a3_v(11, false, 1);
		f_27c_a5_v(11, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(11, false, 5);
		f_3b2_a3_v(11, false, 5);
	}
	f_3e5_a2_v(11, a1);
	f_655_a3_v(11, a0, a1);
}

void f_19db_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(11, false);
		f_33b_a3_v(11, true, 1);
		f_28f_a5_v(11, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(11, true, 5);
		f_3b2_a3_v(11, false, 5);
	}
	f_319_a2_v(11, false);
	f_af7_a3_v(11, a0, a1);
}

void f_1a0f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(11, true);
		f_33b_a3_v(11, false, 1);
		f_2de_a5_v(11, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(11, false, 5);
		f_3b2_a3_v(11, true, 5);
	}
	f_319_a2_v(11, false);
	f_e76_a3_v(11, a0, a1);
}

void f_1a43_a1_v(object a0)
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

void f_1a6c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(12, false);
		f_33b_a3_v(12, false, 1);
		f_27c_a5_v(12, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(12, false, 4);
		f_3b2_a3_v(12, false, 4);
	}
	f_40a_a2_v(12, a1);
	f_655_a3_v(12, a0, a1);
}

void f_1aa0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(12, true);
		f_33b_a3_v(12, true, 1);
		f_28f_a5_v(12, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(12, true, 4);
		f_3b2_a3_v(12, false, 4);
	}
	f_319_a2_v(12, false);
	f_af7_a3_v(12, a0, a1);
}

void f_1ad4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(12, false);
		f_33b_a3_v(12, false, 1);
		f_2de_a5_v(12, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(12, false, 4);
		f_3b2_a3_v(12, true, 4);
	}
	f_319_a2_v(12, false);
	f_e76_a3_v(12, a0, a1);
}

void f_1b08_a1_v(object a0)
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

void f_1b37_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(13, false);
		f_33b_a3_v(13, false, 1);
		f_27c_a5_v(13, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(13, false, 4);
		f_3b2_a3_v(13, false, 4);
	}
	f_428_a2_v(13, a1);
	f_655_a3_v(13, a0, a1);
}

void f_1b6b_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(13, true);
		f_33b_a3_v(13, true, 1);
		f_28f_a5_v(13, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(13, true, 4);
		f_3b2_a3_v(13, false, 4);
	}
	f_319_a2_v(13, false);
	f_af7_a3_v(13, a0, a1);
}

void f_1b9f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(13, false);
		f_33b_a3_v(13, false, 1);
		f_2de_a5_v(13, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(13, false, 4);
		f_3b2_a3_v(13, true, 4);
	}
	f_319_a2_v(13, false);
	f_e76_a3_v(13, a0, a1);
}

void f_1bd3_a1_v(object a0)
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

void f_1bff_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(14, false);
		f_33b_a3_v(14, false, 1);
		f_27c_a5_v(14, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(14, false, 5);
		f_3b2_a3_v(14, false, 5);
	}
	f_44d_a2_v(14, a1);
	f_54f_a3_v(14, a0, a1);
}

void f_1c33_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(14, true);
		f_33b_a3_v(14, true, 1);
		f_28f_a5_v(14, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(14, true, 5);
		f_3b2_a3_v(14, false, 5);
	}
	f_319_a2_v(14, false);
	f_a43_a3_v(14, a0, a1);
}

void f_1c67_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(14, false);
		f_33b_a3_v(14, false, 1);
		f_2de_a5_v(14, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(14, false, 5);
		f_3b2_a3_v(14, true, 5);
	}
	f_319_a2_v(14, false);
	f_dba_a3_v(14, a0, a1);
}

void f_1c9b_a1_v(object a0)
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

void f_1cb5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(15, false);
		f_33b_a3_v(15, false, 1);
		f_27c_a5_v(15, a0, a2, a3, a4);
		f_140_a2_v(a5, 0);
		f_374_a3_v(15, false, 5);
		f_3b2_a3_v(15, false, 5);
	}
	f_44d_a2_v(15, a1);
	f_54f_a3_v(15, a0, a1);
}

void f_1ce9_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(15, true);
		f_33b_a3_v(15, true, 1);
		f_28f_a5_v(15, a0, a2, a3, a4);
		f_140_a2_v(a5, 1);
		f_374_a3_v(15, true, 5);
		f_3b2_a3_v(15, false, 5);
	}
	f_319_a2_v(15, false);
	f_a43_a3_v(15, a0, a1);
}

void f_1d1d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_32a_a2_v(15, false);
		f_33b_a3_v(15, false, 1);
		f_2de_a5_v(15, a0, a2, a3, a4);
		f_140_a2_v(a5, 2);
		f_374_a3_v(15, false, 5);
		f_3b2_a3_v(15, true, 5);
	}
	f_319_a2_v(15, false);
	f_dba_a3_v(15, a0, a1);
}

void OnTrigger(string a0, string a1)
{
	if (a0 == "playsound") {
		@PlaySound(a1);
	} else {
		if (a0 == "enable_bonfire") {
			int L0;
			@_strtoi(L0, a1);
			f_1ddd_a1_v(L0 - 1);
		} else {
			if (a0 == "disable_bonfire") {
				int L1;
				@_strtoi(L1, a1);
				f_1e2a_a1_v(L1 - 1);
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
		f_1c8_a1_v(L0);
		g13->size(L1);
		if (L0 >= 0 && L0 < L1) {
			object L2;
			g13->get(L2, L0);
			f_140_a2_v(L2, 1);
			@Trace("Replaced");
		} else {
			@Trace("Invalid region index");
		}
	} else {
		if (a0 == "nail") {
			int L3;
			int L4;
			@_strtoi(L3, a1);
			f_1e6_a1_v(L3);
			g13->size(L4);
			if (L3 >= 0 && L3 < L4) {
				object L5;
				g13->get(L5, L3);
				f_140_a2_v(L5, 2);
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
				L6 = f_4a_a0_o();
				L6->GetScene(L7);
				L6->GetPosition(L8);
				@AddActorByType(L9, "fog", L7, L8, [0.0, 0.0, 1.0], "fog_stat.xml");
			} else {
				if (a0 == "sepia") {
					f_130_a0_v();
				} else {
					if (a0 == "nosepia") {
						f_135_a0_v();
					}
				}
			}
		}
	}
}

void f_1ddd_a1_v(int a0)
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

void f_1e2a_a1_v(int a0)
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

object f_1e66_a4_o(object a0, string a1, string a2, string a3)
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

object f_1e77_a2_o(object a0, int a1)
{
	return f_1e66_a4_o(a0, "term" + a1, "pers_patrool", "guard_term.xml");
}

void f_1e82_a1_v(bool a0)
{
	object L0;
	@FindActor(L0, "arena_light");
	L0->Switch(a0);
}

void f_1e8a_a0_v(void)
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
			g11 = f_31c7_a3_o(L0, L2, L3);
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
		f_1e82_a1_v(true);
	}
}

void f_1ec9_a0_v(void)
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
		f_1e82_a1_v(false);
	}
}

void f_1eeb_a0_v(void)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 1; L1 <= 17; L1++) {
		g15->add(f_9f_a4_o(L0, "pt_bull" + L1, "pers_bull", "bull.xml"));
	}
}

void f_1f02_a0_v(void)
{
	f_107_a1_v(g15);
}

void f_1f09_a0_v(void)
{
	g15 = f_7e_a0_o();
	g13 = f_7e_a0_o();
	g8 = f_7e_a0_o();
	g9 = f_7e_a0_o();
	g10 = f_7e_a0_o();
	int L0;
	for (L0 = 0; L0 < 16; L0++) {
		g8->add(f_7e_a0_o());
		g9->add(f_7e_a0_o());
		g10->add(f_7e_a0_o());
	}
	object L1;
	@CreateStringVector(L1);
	g13->add(L1);
	f_114c_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_11ea_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_12af_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_137d_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1463_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_153d_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_162c_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1643_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_170b_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_17d3_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_189e_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_196f_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1a43_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1b08_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1bd3_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1c9b_a1_v(L1);
	f_1eeb_a0_v();
	object L2;
	@GetMainOutdoorScene(L2);
	g6 = f_7e_a0_o();
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
	g7 = f_7e_a0_o();
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
	g14 = f_7e_a0_o();
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
		f_1e2a_a1_v(L7);
	}
	@Trace("Total bonfires: " + L7);
}

void f_202d_a0_v(void)
{
	object L0;
	@GetMainOutdoorScene(L0);
	g0 = f_1e77_a2_o(L0, 1);
	g1 = f_1e77_a2_o(L0, 2);
	g2 = f_1e77_a2_o(L0, 3);
	g3 = f_1e77_a2_o(L0, 4);
	g4 = f_1e77_a2_o(L0, 5);
	g5 = f_1e77_a2_o(L0, 6);
	g12 = f_7e_a0_o();
	f_1e82_a1_v(false);
	f_2148_a0_v();
	f_2193_a0_v();
	@SendWorldWndMessage(100);
}

void f_2075_a2_v(int a0, int a1)
{
	if (a1 == 0) {
		if (a0 == 2) {
			if (f_2aac_a0_i() == 0) {
				int L0;
				@GetVariable("d1q01", L0);
				if (L0 != 1000) {
					@GameOver("gameover_fail.xml");
				}
			} else {
				if (f_2aac_a0_i() == 1) {
					int L1;
					@GetVariable("b1q01", L1);
					if (L1 != 1000) {
						@GameOver("gameover_fail.xml");
					}
				}
			}
		}
		@SendWorldWndMessage(101);
		@SetVariable("c_iWM_RealDayChange", a0);
	}
}

void f_20a2_a2_v(int a0, int a1)
{
	if (a1 == 5 && a0 >= 7) {
		f_1e8a_a0_v();
	} else {
		if (a1 == 22 && a0 >= 7) {
			f_1ec9_a0_v();
		}
	}
	if (a1 == 7 && a0 != 1) {
		@SendWorldWndMessage(100);
	}
	if (a1 == 0) {
		f_2148_a0_v();
		f_2193_a0_v();
		if (a0 == 6) {
			object L0;
			object L1;
			@GetMainOutdoorScene(L0);
			@AddScriptedActor(L1, "shed_corpse", "splash_object_wo_pf.bin", L0, [0.0, 0.0, 0.0]);
		}
		if (a0 == 9) {
			f_21c4_a0_v();
		}
		if (a0 != 1) {
			string L2;
			int L3;
			if (f_2aac_a0_i() == 1) {
				@GetVariable("b" + (a0 - 1) + "q01", L3);
				L2 = "volonteers_burah";
			} else {
				if (f_2aac_a0_i() == 0) {
					@GetVariable("d" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_danko";
				} else {
					@GetVariable("k" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_klara";
				}
			}
			@Trace(L2);
			if (L3 == 1000) {
				f_fb_a3_b(L2, "rescue_locked", "");
			}
			f_fb_a3_b(L2, "update", "");
		}
	}
	if (a0 == 6 && a1 == 0) {
		f_1f02_a0_v();
	}
	if (a0 == 7 && a1 == 0) {
		int L4;
		int L5;
		g14->size(L4);
		for (L5 = 0; L5 < L4; L5++) {
			f_1ddd_a1_v(L5);
		}
	}
}

void f_2148_a0_v(void)
{
	int L0;
	object L1;
	int L2;
	if (f_2aac_a0_i() != 1) {
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

void f_2193_a0_v(void)
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

void f_21c4_a0_v(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddScriptedActor(L1, "big_gun", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "vagon_martira", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", L0, [0.0, 0.0, 0.0]);
}

bool f_21d9_a2_b(int a0, float a1)
{
	if (a0 > 16384 && a0 < 16396) {
		int L0;
		L0 = a0 - 16384;
		f_3055_a1_v(L0);
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
		f_2263_a4_v(L1, L2, L4, L5);
		return true;
	}
	return false;
}

void f_2210_a0_v(void)
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
		@SetVariable(f_13a_a1_s(L4), 0);
		f_32a_a2_v(L4, false);
	}
	f_2263_a4_v(0, L0 % 24, 0, L0 % 24);
	object L5;
	@FindActor(L5, "dt_house_1_07");
	L5->EnableSubset(200, false);
	object L6;
	@GetMainOutdoorScene(L6);
	L6->SwitchLights(0, L0 < 7 || L0 >= 20);
}

void f_2263_a4_v(int a0, int a1, int a2, int a3)
{
	int L0;
	@Trace("City update");
	if (a0 == a2 && a1 == a3) {
		@PlaySound("kolokol");
	}
	L0 = 0;
	for (; L0 < 16; L0++) {
		f_1f8_a1_v(L0);
		if (f_19e_a1_b(L0)) {
			f_22db_a3_v(L0, a0, a1);
		} else {
			if (f_1bc_a1_b(L0)) {
				f_23bc_a3_v(L0, a0, a1);
				continue;
			}
			f_249d_a3_v(L0, a0, a1);
		}
	}
	if (a1 == 0) {
		f_3166_a1_v(a0);
		if (a0 == 1 || f_1bc_a1_b(5)) {
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

void f_22db_a3_v(int a0, int a1, int a2)
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
		f_114e_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_1213_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_12e1_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_13c7_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_14a1_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_1590_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_162e_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_166f_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1737_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_1802_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_18d3_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_19a7_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a6c_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b37_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1bff_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1cb5_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_23bc_a3_v(int a0, int a1, int a2)
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
		f_1182_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_1247_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_1315_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_13fb_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_14d5_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_15c4_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_1635_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_16a3_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_176b_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_1836_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_1907_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_19db_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1aa0_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b6b_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1c33_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1ce9_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_249d_a3_v(int a0, int a1, int a2)
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
		f_11b6_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_127b_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_1349_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_142f_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_1509_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_15f8_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_163c_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_16d7_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_179f_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_186a_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_193b_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1a0f_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1ad4_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b9f_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1c67_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1d1d_a6_v(a1, a2, L0, L1, L2, L3);
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

int f_257e_a1_i(float a0)
{
	return f_2a93_a3_i(530554, 530553, a0);
}

int f_2587_a1_i(float a0)
{
	return f_2a93_a3_i(530556, 530555, a0);
}

int f_2590_a1_i(float a0)
{
	return f_2a93_a3_i(530558, 530557, a0);
}

int f_2599_a1_i(float a0)
{
	return f_2a93_a3_i(530560, 530559, a0);
}

int f_25a2_a1_i(float a0)
{
	return f_2a93_a3_i(530562, 530561, a0);
}

int f_25ab_a1_i(float a0)
{
	return f_2a93_a3_i(530564, 530563, a0);
}

int f_25b4_a1_i(float a0)
{
	return f_2a93_a3_i(530566, 530565, a0);
}

int f_25bd_a1_i(float a0)
{
	return f_2a93_a3_i(530568, 530567, a0);
}

int f_25c6_a1_i(float a0)
{
	return f_2a93_a3_i(530570, 530569, a0);
}

int f_25cf_a1_i(float a0)
{
	return f_2a93_a3_i(527719, 527718, a0);
}

int f_25d8_a1_i(float a0)
{
	return f_2a93_a3_i(530572, 530571, a0);
}

int f_25e1_a1_i(float a0)
{
	return f_2a93_a3_i(530574, 530573, a0);
}

int f_25ea_a1_i(float a0)
{
	return f_2a93_a3_i(538944, 538943, a0);
}

int f_25f3_a1_i(float a0)
{
	return f_2a93_a3_i(538946, 538945, a0);
}

int f_25fc_a1_i(float a0)
{
	return f_2a93_a3_i(538954, 538953, a0);
}

int f_2605_a1_i(float a0)
{
	return f_2a93_a3_i(538948, 538947, a0);
}

int f_260e_a1_i(float a0)
{
	return f_2a93_a3_i(538950, 538949, a0);
}

int f_2617_a1_i(float a0)
{
	return f_2a93_a3_i(530678, 530677, a0);
}

int f_2620_a1_i(float a0)
{
	return f_2a93_a3_i(530680, 530679, a0);
}

int f_2629_a1_i(float a0)
{
	return f_2a93_a3_i(538956, 538955, a0);
}

int f_2632_a1_i(float a0)
{
	return f_2a93_a3_i(538402, 538401, a0);
}

int f_263b_a1_i(float a0)
{
	return f_2a93_a3_i(539490, 539489, a0);
}

int f_2644_a1_i(float a0)
{
	return f_2a93_a3_i(525653, 525652, a0);
}

int f_264d_a1_i(float a0)
{
	return f_2a93_a3_i(538962, 538961, a0);
}

int f_2656_a1_i(float a0)
{
	return f_2a93_a3_i(539492, 539491, a0);
}

int f_265f_a1_i(float a0)
{
	return f_2a93_a3_i(538964, 538963, a0);
}

int f_2668_a1_i(float a0)
{
	return f_2a93_a3_i(538958, 538957, a0);
}

int f_2671_a1_i(float a0)
{
	return f_2a93_a3_i(539494, 539493, a0);
}

void f_267a_a2_v(object a0, object a1)
{
	f_b1_a2_v("termitnik2@door1", true);
}

void f_2681_a2_v(object a0, object a1)
{
	f_b1_a2_v("house_vlad@door2", true);
}

void f_2688_a2_v(object a0, object a1)
{
	f_b1_a2_v("cot_maria@door1", false);
}

void f_268f_a2_v(object a0, object a1)
{
	f_b1_a2_v("warehouse_rubin@door1", false);
}

void f_2696_a2_v(object a0, object a1)
{
	f_b1_a2_v("warehouse_rubin@door1", true);
}

void f_269d_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k1q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01AlexandrGotoStation");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01BurahGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01CompletedGotoAlexandt");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01KaterinaGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01LaskaGotoBurah");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q01StationGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q02GeorgGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q02KaterinaGotoGeorg");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k1q03AnnaGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(318);
	f_2a82_a1_b(326);
	f_2a82_a1_b(333);
}

void f_26f7_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k2q03Arfist");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q01AlexandrGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q01BigVladGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q01MladVladGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q03Arfist");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04AnnaGotoGatherer1");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04AnnaGotoGatherer2");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04AnnaGotoGatherer3");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04MorlokGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q03LaraLetter");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q04MladVladGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k2q02KaterinaGotoLara");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(461);
	f_2a82_a1_b(470);
	f_2a82_a1_b(476);
	f_2a82_a1_b(507);
}

void f_2763_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k3q01AlexandrGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q01AnnaGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q01AnnaGotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q01AnnaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q01KapellaGotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q02EvaGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q02JuliaGotoEva");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q02KaterinaGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q03AnnaGotoEva");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k3q04KapellaGotoDanko");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(337);
	f_2a82_a1_b(344);
	f_2a82_a1_b(350);
	f_2a82_a1_b(354);
}

void f_27c1_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k4q03AlexandrGotoBurah");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q01GrifGotoBraga");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q01AlexandrGotoGrif");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q01GrifGotoNotkin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q02KaterinaGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q02MarkGotoTheater");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k4q03LaraGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(368);
	f_2a82_a1_b(378);
	f_2a82_a1_b(384);
}

void f_2806_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k5q03LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q01AlexandrGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q01RubinGotoGeorg");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q04KapellaGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q04MariaGotoDanko");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q02KabatchikGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q02KaterinaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k5q02PetrGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(390);
	f_2a82_a1_b(397);
	f_2a82_a1_b(405);
	f_2a82_a1_b(740);
}

void f_2856_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k6q03LaskaGotoAlbinos");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(408);
	f_2a82_a1_b(500);
	f_2a82_a1_b(748);
	f_2a82_a1_b(723);
}

void f_2875_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k7q01BirdmaskGotoCorpse");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k7q02DankoGotoGatherer");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "k7q03BurahGotoFather");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(416);
	f_2a82_a1_b(430);
	f_2a82_a1_b(434);
	f_2a82_a1_b(723);
}

void f_28a2_a2_v(object a0, object a1)
{
	f_2a82_a1_b(438);
	f_2a82_a1_b(723);
	f_2a82_a1_b(751);
	f_2a82_a1_b(757);
}

void f_28b4_a2_v(object a0, object a1)
{
	f_2a82_a1_b(517);
	f_2a82_a1_b(723);
	f_2a82_a1_b(751);
	f_2a82_a1_b(757);
}

void f_28c6_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_2a9b_a0_o();
	L0->FindMark(L1, "k10q01NotkinGotoRubin");
	if (L1) {
		L1->Remove();
	}
	f_2a82_a1_b(447);
	f_2a82_a1_b(723);
	f_2a82_a1_b(751);
	f_2a82_a1_b(757);
}

void f_28e5_a2_v(object a0, object a1)
{
	f_2a82_a1_b(480);
	f_2a82_a1_b(723);
	f_2a82_a1_b(751);
	f_2a82_a1_b(757);
}

void f_28f7_a2_v(object a0, object a1)
{
	f_b1_a2_v("house1_kabak@door1", true);
}

void f_28fe_a2_v(object a0, object a1)
{
	f_b1_a2_v("mnogogrannik_han@door1", true);
}

void f_2905_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_2a9b_a0_o();
	L0->AddMark("k2q03LaraLetter", "pt_map_lara", 0, 539375, f_11c_a0_f());
}

void f_2915_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2926_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2937_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2948_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2959_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_296a_a2_v(object a0, object a1)
{
	if (f_84_a1_i("map_chertez_state") <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_297b_a2_v(object a0, object a1)
{
	f_b1_a2_v("cot_georg@door1", false);
	f_b1_a2_v("cot_georg@door2", false);
}

void f_2987_a2_v(object a0, object a1)
{
	f_c2_a2_b(a0, -0.10000000149011612);
}

void f_298e_a2_v(object a0, object a1)
{
	f_b1_a2_v("termitnik@door1", true);
}

void f_2995_a2_v(object a0, object a1)
{
	f_b1_a2_v("mnogogrannik@door1", true);
}

bool f_299c_a1_b(object a0)
{
	if (f_84_a1_i("k3q04SendBurahMail") != 0) {
		return true;
	}
	return false;
}

bool f_29a8_a1_b(object a0)
{
	if (f_84_a1_i("k10q01KnowAboutRubin") != 0) {
		return true;
	}
	return false;
}

bool f_29b4_a1_b(object a0)
{
	if (f_84_a1_i("resque_list") != 0) {
		return true;
	}
	return false;
}

bool f_29c0_a1_b(object a0)
{
	if (f_84_a1_i("k2AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_29cc_a1_b(object a0)
{
	if (f_84_a1_i("k2LaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_29d8_a1_b(object a0)
{
	if (f_84_a1_i("k5LaskaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_29e4_a1_b(object a0)
{
	if (f_84_a1_i("k2KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_29f0_a1_b(object a0)
{
	if (f_84_a1_i("k3AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_29fc_a1_b(object a0)
{
	if (f_84_a1_i("k3KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a08_a1_b(object a0)
{
	if (f_84_a1_i("k4AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a14_a1_b(object a0)
{
	if (f_84_a1_i("k4KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a20_a1_b(object a0)
{
	if (f_84_a1_i("k5AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a2c_a1_b(object a0)
{
	if (f_84_a1_i("k5KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a38_a1_b(object a0)
{
	if (f_84_a1_i("k6KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a44_a1_b(object a0)
{
	if (f_84_a1_i("k6AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a50_a1_b(object a0)
{
	if (f_84_a1_i("k5Kapellavisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a5c_a1_b(object a0)
{
	if (f_84_a1_i("k6LaskaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2a68_a1_b(object a0)
{
	if (f_2a72_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2a72_a1_b(object a0)
{
	return false;
}

object f_2a75_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_2a82_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_2a75_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

int f_2a93_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

object f_2a9b_a0_o(void)
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

int f_2aac_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

bool f_2ab2_a2_b(int a0, float a1)
{
	if (a0 > 42000 && a0 < 42288) {
		int L0;
		int L1;
		L0 = (a0 - 42000) / 24;
		L1 = (a0 - 42000) % 24;
		f_2075_a2_v(L0 + 1, L1);
		return true;
	}
	if (a0 > 40000 && a0 < 40288) {
		int L2;
		int L3;
		L2 = (a0 - 40000) / 24;
		L3 = (a0 - 40000) % 24;
		f_20a2_a2_v(L2 + 1, L3);
		f_303b_a2_v(L2 + 1, L3);
		return true;
	}
	return false;
}

void f_2aef_a0_v(void)
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
	f_202d_a0_v();
	f_300d_a0_v();
}

void f_2b12_a2_v(int a0, float a1)
{
	if (a0 == 45095) {
		f_269d_a2_v(g16, g16);
		f_ef_a2_b("quest_k1_01", "cleanup");
	}
	if (a0 == 45258) {
		f_2620_a1_i(a1);
	}
	if (a0 == 45272) {
		f_2915_a2_v(g16, g16);
	}
	if (a0 == 45273) {
		f_2926_a2_v(g16, g16);
	}
	if (a0 == 45274) {
		f_2937_a2_v(g16, g16);
	}
	if (a0 == 45166) {
		if (f_2a68_a1_b(g16)) {
			f_2599_a1_i(a1);
		}
	}
	if (a0 == 45165) {
		if (f_2a68_a1_b(g16)) {
			f_2590_a1_i(a1);
		}
	}
	if (a0 == 45164) {
		if (f_2a68_a1_b(g16)) {
			f_2587_a1_i(a1);
		}
	}
	if (a0 == 45173) {
		if (f_2a68_a1_b(g16)) {
			f_25e1_a1_i(a1);
		}
	}
	if (a0 == 45163) {
		if (f_2a68_a1_b(g16)) {
			f_257e_a1_i(a1);
		}
	}
	if (a0 == 45110) {
		f_26f7_a2_v(g16, g16);
		f_268f_a2_v(g16, g16);
	}
	if (a0 == 45109) {
		f_28e5_a2_v(g16, g16);
		f_ef_a2_b("quest_k11_01", "cleanup");
	}
	if (a0 == 45249) {
		f_89_a1_o("quest_k5_04");
	}
	if (a0 == 45108) {
		f_28c6_a2_v(g16, g16);
		f_ef_a2_b("quest_k10_01", "cleanup");
		f_89_a1_o("quest_k11_01");
	}
	if (a0 == 45107) {
		if (!f_29a8_a1_b(g16)) {
			f_25cf_a1_i(a1);
		}
	}
	if (a0 == 45106) {
		f_28b4_a2_v(g16, g16);
		f_ef_a2_b("quest_k9_01", "cleanup");
		f_89_a1_o("quest_k10_01");
	}
	if (a0 == 45105) {
		f_28a2_a2_v(g16, g16);
		f_ef_a2_b("quest_k8_01", "cleanup");
		f_89_a1_o("quest_k9_01");
	}
	if (a0 == 45104) {
		f_2875_a2_v(g16, g16);
		f_ef_a2_b("quest_k7_01", "cleanup");
		f_89_a1_o("quest_k8_01");
	}
	if (a0 == 45256) {
		if (!f_2a5c_a1_b(g16)) {
			f_2671_a1_i(a1);
		}
	}
	if (a0 == 45257) {
		f_2617_a1_i(a1);
	}
	if (a0 == 45275) {
		f_2948_a2_v(g16, g16);
	}
	if (a0 == 45276) {
		f_2959_a2_v(g16, g16);
	}
	if (a0 == 45277) {
		f_296a_a2_v(g16, g16);
	}
	if (a0 == 45172) {
		if (f_2a68_a1_b(g16)) {
			f_25d8_a1_i(a1);
		}
	}
	if (a0 == 45171) {
		if (f_2a68_a1_b(g16)) {
			f_25c6_a1_i(a1);
		}
	}
	if (a0 == 45170) {
		if (f_2a68_a1_b(g16)) {
			f_25bd_a1_i(a1);
		}
	}
	if (a0 == 45253) {
		if (!f_2a44_a1_b(g16) || !f_2a38_a1_b(g16)) {
			f_25fc_a1_i(a1);
		}
	}
	if (a0 == 45169) {
		if (f_2a68_a1_b(g16)) {
			f_25b4_a1_i(a1);
		}
	}
	if (a0 == 45252) {
		if (!f_2a20_a1_b(g16) || !f_2a2c_a1_b(g16)) {
			f_25fc_a1_i(a1);
		}
	}
	if (a0 == 45254) {
		f_263b_a1_i(a1);
	}
	if (a0 == 45103) {
		f_2856_a2_v(g16, g16);
		f_ef_a2_b("quest_k6_01", "cleanup");
		f_89_a1_o("quest_k7_01");
	}
	if (a0 == 45168) {
		if (f_2a68_a1_b(g16)) {
			f_25ab_a1_i(a1);
		}
	}
	if (a0 == 45251) {
		if (!f_2a08_a1_b(g16) || !f_2a14_a1_b(g16)) {
			f_25fc_a1_i(a1);
		}
	}
	if (a0 == 45250) {
		if (!f_29f0_a1_b(g16) || !f_29fc_a1_b(g16)) {
			f_25fc_a1_i(a1);
		}
	}
	if (a0 == 45255) {
		if (!f_2a50_a1_b(g16)) {
			f_2656_a1_i(a1);
		}
	}
	if (a0 == 45248) {
		if (!f_29d8_a1_b(g16)) {
			f_2668_a1_i(a1);
		}
	}
	if (a0 == 45247) {
		f_265f_a1_i(a1);
	}
	if (a0 == 45246) {
		f_264d_a1_i(a1);
	}
	if (a0 == 45245) {
		f_2629_a1_i(a1);
	}
	if (a0 == 45244) {
		f_2605_a1_i(a1);
	}
	if (a0 == 45243) {
		if (!f_29cc_a1_b(g16)) {
			f_2905_a2_v(g16, g16);
			f_260e_a1_i(a1);
		}
	}
	if (a0 == 45242) {
		if (!f_29c0_a1_b(g16) || !f_29e4_a1_b(g16)) {
			f_25fc_a1_i(a1);
		}
	}
	if (a0 == 45241) {
		f_25f3_a1_i(a1);
	}
	if (a0 == 45240) {
		if (!f_29b4_a1_b(g16)) {
			f_25ea_a1_i(a1);
		}
	}
	if (a0 == 45236) {
		f_2632_a1_i(a1);
	}
	if (a0 == 45167) {
		if (f_2a68_a1_b(g16)) {
			f_25a2_a1_i(a1);
		}
	}
	if (a0 == 45101) {
		f_27c1_a2_v(g16, g16);
		f_268f_a2_v(g16, g16);
		f_ef_a2_b("quest_k4_01", "cleanup");
	}
	if (a0 == 45102) {
		f_2806_a2_v(g16, g16);
		f_94_a1_o("quest_k6_01");
	}
	if (a0 == 45100) {
		f_2763_a2_v(g16, g16);
		f_2696_a2_v(g16, g16);
		f_94_a1_o("quest_k4_01");
	}
	if (a0 == 45096) {
		if (f_299c_a1_b(g16)) {
			f_2987_a2_v(g16, g16);
			f_2644_a1_i(a1);
		}
	}
}

void f_2e20_a1_v(float a0)
{
	g16 = null;
	@SetTimeEvent(45095, 24.0);
	f_297b_a2_v(g16, g16);
	f_2688_a2_v(g16, g16);
	f_298e_a2_v(g16, g16);
	f_267a_a2_v(g16, g16);
	f_2681_a2_v(g16, g16);
	f_28f7_a2_v(g16, g16);
	f_2995_a2_v(g16, g16);
	f_28fe_a2_v(g16, g16);
	f_89_a1_o("volonteers_klara");
	f_89_a1_o("quest_k1_01");
	f_89_a1_o("klara2_positioner");
	f_89_a1_o("klara2_svita_positioner");
	f_89_a1_o("klara2_npc_positioner");
	@SetTimeEvent(45258, 64.26000213623047);
	@SetTimeEvent(45272, 144.0);
	@SetTimeEvent(45273, 168.0);
	@SetTimeEvent(45274, 192.0);
	@SetTimeEvent(45166, 103.0199966430664);
	@SetTimeEvent(45165, 79.0199966430664);
	@SetTimeEvent(45164, 55.02000045776367);
	@SetTimeEvent(45173, 271.0199890136719);
	@SetTimeEvent(45163, 31.020000457763672);
	@SetTimeEvent(45110, 48.0);
	@SetTimeEvent(45109, 264.0);
	@SetTimeEvent(45249, 96.0);
	@SetTimeEvent(45108, 240.0);
	@SetTimeEvent(45107, 224.25999450683594);
	@SetTimeEvent(45106, 216.0);
	@SetTimeEvent(45105, 192.0);
	@SetTimeEvent(45104, 168.0);
	@SetTimeEvent(45256, 135.1699981689453);
	@SetTimeEvent(45257, 64.0);
	@SetTimeEvent(45275, 216.0);
	@SetTimeEvent(45276, 240.0);
	@SetTimeEvent(45277, 264.0);
	@SetTimeEvent(45172, 247.02000427246094);
	@SetTimeEvent(45171, 223.02000427246094);
	@SetTimeEvent(45170, 199.02000427246094);
	@SetTimeEvent(45253, 130.42999267578125);
	@SetTimeEvent(45169, 175.02000427246094);
	@SetTimeEvent(45252, 106.5);
	@SetTimeEvent(45254, 95.5);
	@SetTimeEvent(45103, 144.0);
	@SetTimeEvent(45168, 151.02000427246094);
	@SetTimeEvent(45251, 83.25);
	@SetTimeEvent(45250, 58.25);
	@SetTimeEvent(45255, 115.0);
	@SetTimeEvent(45248, 111.0);
	@SetTimeEvent(45247, 119.0);
	@SetTimeEvent(45246, 95.0);
	@SetTimeEvent(45245, 71.0);
	@SetTimeEvent(45244, 47.0);
	@SetTimeEvent(45243, 42.25);
	@SetTimeEvent(45242, 34.08000183105469);
	@SetTimeEvent(45241, 23.079999923706055);
	@SetTimeEvent(45240, 16.25);
	@SetTimeEvent(45236, 90.0);
	@SetTimeEvent(45167, 127.0199966430664);
	@SetTimeEvent(45101, 96.0);
	@SetTimeEvent(45102, 120.0);
	@SetTimeEvent(45100, 72.0);
	@SetTimeEvent(45096, 80.0);
}

bool f_2f49_a1_b(int a0)
{
	int L0;
	@GetVariable("K2System" + a0, L0);
	return L0 != 0;
}

int f_2f51_a1_i(int a0)
{
	if (a0 == 6) {
		return 14;
	} else {
		if (a0 == 7) {
			return 8;
		} else {
			if (a0 == 8) {
				return 4;
			} else {
				if (a0 == 9) {
					return 13;
				} else {
					if (a0 == 10) {
						return 5;
					} else {
						if (a0 == 11) {
							return 11;
						}
					}
				}
			}
		}
	}
	return -1;
}

bool f_2f77_a1_b(int a0)
{
	int L0;
	@GetVariable("K2SystemSvitaRemoved" + a0, L0);
	return L0 != 0;
}

int f_2f7f_a1_i(int a0)
{
	if (a0 == 6) {
		return 12;
	} else {
		if (a0 == 7) {
			return 4;
		} else {
			if (a0 == 8) {
				return 13;
			} else {
				if (a0 == 9) {
					return 5;
				} else {
					if (a0 == 10) {
						return 9;
					} else {
						if (a0 == 11) {
							return 3;
						}
					}
				}
			}
		}
	}
	return -1;
}

int f_2fa5_a1_i(int a0)
{
	if (a0 == 8) {
		return 5;
	} else {
		if (a0 == 9) {
			return 10;
		} else {
			if (a0 == 10) {
				return 3;
			} else {
				if (a0 == 11) {
					return 1;
				}
			}
		}
	}
	return -1;
}

int f_2fbf_a1_i(int a0)
{
	if (a0 == 8) {
		return 7;
	} else {
		if (a0 == 9) {
			return 2;
		} else {
			if (a0 == 10) {
				return 11;
			} else {
				if (a0 == 11) {
					return 15;
				}
			}
		}
	}
	return -1;
}

string f_2fd9_a1_s(int a0)
{
	if (a0 == 8) {
		return "house5_unoin_solidl";
	} else {
		if (a0 == 9) {
			return "r4_house4_02_i2";
		} else {
			if (a0 == 10) {
				return "dt_house1_union2_01r";
			} else {
				if (a0 == 11) {
					return "dt_house_1_03";
				}
			}
		}
	}
	return "";
}

string f_2ff3_a1_s(int a0)
{
	if (a0 == 8) {
		return "house7_02";
	} else {
		if (a0 == 9) {
			return "dt_house2_01";
		} else {
			if (a0 == 10) {
				return "r5_House6_01";
			} else {
				if (a0 == 11) {
					return "lc_house3_05";
				}
			}
		}
	}
	return "";
}

void f_300d_a0_v(void)
{
}

bool f_300e_a1_b(int a0)
{
	if (a0 == 6) {
		return false;
	}
	if (f_12a_a1_b(4)) {
		if (a0 == 15) {
			return false;
		}
		if (a0 == 9) {
			return false;
		}
	} else {
		if (f_12a_a1_b(5)) {
			if (a0 == 15) {
				return false;
			}
		} else {
			if (f_12a_a1_b(6)) {
				if (a0 == 15) {
					return false;
				}
			}
		}
	}
	return true;
}

void f_303b_a2_v(int a0, int a1)
{
	@Trace("Updating game " + a0 + " " + a1);
	if (a0 == 7 && a1 == 0) {
		object L0;
		@GetSceneByName(L0, "sobor");
		@Trigger(L0, "aglaja");
	}
}

void f_3055_a1_v(int a0)
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
		@Trace("Diseased regions : " + L0);
		if (a0 + 1 < 6) {
			int L1;
			int L2;
			L1 = 0;
			for (; L1 < 16; L1++) {
				if (f_1bc_a1_b(L1)) {
					f_1e6_a1_v(L1);
				} else {
					if (f_1da_a1_b(L1)) {
						f_1aa_a1_v(L1);
					}
				}
			}
			if (a0 == 2) {
				@Trace("Special diseased region: 5");
				f_1c8_a1_v(5);
			} else {
				if (a0 == 3) {
					@Trace("Special diseased region: 1");
					f_1c8_a1_v(1);
				}
			}
			L2 = f_166_a0_i();
			if (L2 < L0) {
				int L3;
				int L4;
				L3 = L0 - L2;
				for (L4 = 0; L4 < L3; L4++) {
					f_178_a0_v();
				}
			}
		} else {
			int L5;
			L5 = f_2f51_a1_i(a0 + 1);
			if (L5 != -1) {
				f_1c8_a1_v(L5);
			}
			int L6;
			for (L6 = 0; L6 < 16; L6++) {
				if (f_1da_a1_b(L6)) {
					f_1aa_a1_v(L6);
				}
			}
			L5 = f_2f51_a1_i(a0);
			if (L5 != -1) {
				bool L7;
				L7 = f_2f49_a1_b(a0);
				if (L7) {
					f_1c8_a1_v(L5);
				} else {
					f_1e6_a1_v(L5);
				}
			}
			L5 = f_2f7f_a1_i(a0);
			if (f_2f77_a1_b(a0)) {
				f_1aa_a1_v(L5);
			} else {
				f_1c8_a1_v(L5);
			}
			L5 = f_2fa5_a1_i(a0 + 1);
			if (L5 != -1) {
				f_1e6_a1_v(L5);
			}
			int L8;
			L8 = f_2fbf_a1_i(a0 + 1);
			if (L8 != L5 && L8 != -1) {
				f_1e6_a1_v(L8);
			}
		}
	} else {
		int L9;
		for (L9 = 0; L9 < 16; L9++) {
			if (f_1bc_a1_b(L9) || f_1da_a1_b(L9)) {
				f_1aa_a1_v(L9);
			}
		}
	}
}

void f_3166_a1_v(int a0)
{
	if (a0 == 1) {
		object L0;
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(L0, "r4_house_2_02");
		@ReplaceScene(L0, "s_r4_house_2_02.isc");
	}
	if (a0 == 3) {
	} else {
		if (a0 == 4) {
			object L1;
			@GetSceneByName(L1, "theater");
			@ReplaceScene(L1, "dtheater_klara.isc");
		} else {
			if (a0 == 8) {
				object L2;
				@Trace("Special replaced house: uprava_admin");
				@GetSceneByName(L2, "uprava_admin");
				@ReplaceScene(L2, "uprava_admin_army_klara.isc");
			} else {
				if (a0 == 11) {
					object L3;
					@GetSceneByName(L3, "theater");
					@ReplaceScene(L3, "theater_klara.isc");
				}
			}
		}
	}
	if (a0 + 1 >= 8 && a0 + 1 <= 11) {
		object L4;
		string L5;
		string L6;
		L5 = f_2fd9_a1_s(a0 + 1);
		@GetSceneByName(L4, L5);
		@ReplaceScene(L4, "k2s_" + L5 + ".isc");
		L6 = f_2ff3_a1_s(a0 + 1);
		@GetSceneByName(L4, L6);
		@ReplaceScene(L4, "k2s_" + L6 + ".isc");
	}
}

object f_31c7_a3_o(object a0, Vector a1, Vector a2)
{
	object L0;
	a0->AddStationaryActor(L0, a1, a2, "pers_morlok", "Burah_arena_manager.xml");
	return L0;
}

