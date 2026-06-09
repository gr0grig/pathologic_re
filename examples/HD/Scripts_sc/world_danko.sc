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
		if (f_22c3_a2_b(a0, a1)) {
			return;
		}
		if (f_30ee_a2_b(a0, a1)) {
			return;
		}
		f_314e_a2_v(a0, a1);
	}

	void init(void)
	{
		@SetVariable("branch", 0);
		@SetSaveProperty(0, 0);
		f_39_a0_v();
		f_1eea_a0_v();
		f_22fa_a0_v();
		f_312b_a0_v();
		f_367b_a1_v(f_122_a0_f());
		f_b7_a2_v("burah_home@door1", true);
		for (; ; ) {
			@Hold();
		}
	}
}

void f_39_a0_v(void)
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
	L1->GetLocator("pt_birth_Danko", L2, L3, L4);
	if (L2) {
		@Teleport(L0, L1, L3, L4);
	}
}

object f_50_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_57_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_63_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_57_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_79_a3_f(L0 + a2, a3, a4));
	return true;
}

float f_79_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_84_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

int f_8a_a1_i(string a0)
{
	int L0;
	@GetVariable(a0, L0);
	return L0;
}

object f_8f_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_9a_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActorFromXml(L1, L0, a0, a0 + ".xml");
	return L1;
}

object f_a5_a4_o(object a0, string a1, string a2, string a3)
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

void f_b7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_c8_a2_b(object a0, float a1)
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
	f_eb_a1_v(a1);
	f_63_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_eb_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

bool f_f5_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

bool f_101_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

void f_10d_a1_v(object a0)
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

float f_122_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

void f_127_a0_v(void)
{
	@SetSepia(0.5, 0.8859999775886536);
}

void f_12c_a0_v(void)
{
	@SetSepia(0, 0);
}

string f_131_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

void f_137_a2_v(object a0, int a1)
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

int f_15d_a0_i(void)
{
	int L0;
	int L1;
	L0 = 0;
	for (L1 = 0; L1 < 16; L1++) {
		if (f_1b4_a1_b(L1)) {
			L0 = L0 + 1;
		}
	}
	return L0;
}

void f_16f_a1_v(int a0)
{
	int L0;
	int L1;
	@irand(L0, 16);
	for (L1 = 0; L1 < 16; L1++) {
		int L2;
		L2 = (L1 + L0) % 16;
		if (f_196_a1_b(L2) && f_3888_a2_b(L2, a0)) {
			f_1c0_a1_v(L2);
			@Trace("Diseased Region: " + L2);
			return;
		}
	}
}

bool f_196_a1_b(int a0)
{
	int L0;
	@GetVariable(f_131_a1_s(a0), L0);
	return (L0 & 3) == 0;
}

void f_1a2_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_131_a1_s(a0), L0);
	L1 = L0 & 252 | 0;
	@SetVariable(f_131_a1_s(a0), L1);
}

bool f_1b4_a1_b(int a0)
{
	int L0;
	@GetVariable(f_131_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

void f_1c0_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_131_a1_s(a0), L0);
	L1 = L0 & 252 | 1;
	@SetVariable(f_131_a1_s(a0), L1);
}

bool f_1d2_a1_b(int a0)
{
	int L0;
	@GetVariable(f_131_a1_s(a0), L0);
	return (L0 & 3) == 2;
}

void f_1de_a1_v(int a0)
{
	int L0;
	int L1;
	@GetVariable(f_131_a1_s(a0), L0);
	L1 = L0 & 252 | 2;
	@SetVariable(f_131_a1_s(a0), L1);
}

void f_1f0_a1_v(int a0)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: main outdoor scene not found");
		return;
	}
	L0->RemoveAllRegionActors(a0);
}

void f_1fd_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3);
}

void f_20a_a6_v(int a0, string a1, string a2, int a3, int a4, int a5)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCount(a0, a1, a2, a3, a4, a5);
}

void f_217_a4_v(int a0, string a1, string a2, int a3)
{
	object L0;
	@GetMainOutdoorScene(L0);
	if (L0 == null) {
		@Trace("City manager: Can't find main outdoor scene");
		return;
	}
	L0->SetRegionActorCountByType(a0, a1, a2, a3);
}

void f_224_a2_v(int a0, bool a1)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	L0->GetGroupActors(L1, 101 + a0);
	if (L1) {
		bool L2;
		object L3;
		for (; L1->Next(L2, L3), L2; ) {
			if (f_57_a2_b(L3, "locked")) {
				L3->SetProperty("locked", a1);
			} else {
				@Trace("Actor \"" + L3 + "\" can't be locked");
			}
		}
	}
}

void f_246_a4_v(string a0, object a1, string a2, string a3)
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

void f_25c_a2_v(string a0, object a1)
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

void f_274_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_224_a2_v(a0, true);
	f_10d_a1_v(a2);
	f_10d_a1_v(a3);
	f_10d_a1_v(a4);
}

void f_287_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_224_a2_v(a0, false);
	f_10d_a1_v(a2);
	f_10d_a1_v(a3);
	f_10d_a1_v(a4);
	if (a1 < 8) {
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
		f_25c_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	} else {
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
		f_25c_a2_v("pt_fog" + (a0 + 1) + "_", a4);
	}
}

void f_2d6_a5_v(int a0, int a1, object a2, object a3, object a4)
{
	f_224_a2_v(a0, false);
	f_10d_a1_v(a2);
	f_10d_a1_v(a3);
	f_10d_a1_v(a4);
	if (a1 < 8) {
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_patrool", "patrol_stat.xml");
	} else {
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_1_", a2, "pers_soldat", "soldier.xml");
		f_246_a4_v("pt_blockpost" + (a0 + 1) + "_2_", a3, "pers_sanitar", "sanitar_stat.xml");
	}
}

void f_311_a2_v(int a0, bool a1)
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

void f_322_a2_v(int a0, bool a1)
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

void f_333_a3_v(int a0, bool a1, int a2)
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

void f_36c_a3_v(int a0, bool a1, int a2)
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
				f_f5_a2_b(L3, "restore");
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
				f_f5_a2_b(L6, "cleanup");
			}
		}
	}
}

void f_3aa_a3_v(int a0, bool a1, int a2)
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
			f_f5_a2_b(L4, "cleanup");
		}
	}
}

void f_3dd_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 < 2 || a1 >= 6 && a1 < 10) {
		f_311_a2_v(a0, true);
	} else {
		f_311_a2_v(a0, false);
	}
}

void f_402_a2_v(int a0, int a1)
{
	if (a1 >= 20 || a1 >= 6 && a1 < 10) {
		f_311_a2_v(a0, true);
	} else {
		f_311_a2_v(a0, false);
	}
}

void f_420_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 4 || a1 >= 6 && a1 < 8) {
		f_311_a2_v(a0, true);
	} else {
		f_311_a2_v(a0, false);
	}
}

void f_445_a2_v(int a0, int a1)
{
	if (a1 >= 22 || a1 < 6) {
		f_311_a2_v(a0, true);
	} else {
		f_311_a2_v(a0, false);
	}
}

bool f_45c_a2_b(int a0, int a1)
{
	int L0;
	L0 = f_30e8_a0_i();
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

float f_47b_a1_f(int a0)
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

float f_493_a1_f(int a0)
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

float f_4ed_a1_f(int a0)
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

bool f_547_a2_b(int a0, int a1)
{
	return a0 >= 10 && a1 < 6;
}

bool f_551_a2_b(int a0, int a1)
{
	return a0 >= 3 && (a1 > 22 || a1 < 5);
}

bool f_562_a1_b(int a0)
{
	return a0 >= 8;
}

void f_566_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_47b_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_45c_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
		f_1fd_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
		f_1fd_a4_v(a0, "pers_woman", "woman.xml", 3);
		f_1fd_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 2);
			f_1fd_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 3);
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 3);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 2);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 2);
			f_1fd_a4_v(a0, "pers_boy", "boy.xml", 2);
			f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
		} else {
			f_1fd_a4_v(a0, "pers_wasted_girl", "wasted_girl.xml", 1);
			f_1fd_a4_v(a0, "pers_wasted_male", "wasted_male.xml", 2);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1fd_a4_v(a0, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_65e_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_47b_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_45c_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1fd_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
			f_1fd_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
		}
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1fd_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1fd_a4_v(a0, "pers_littleboy", "littleboy.xml", 1);
			f_1fd_a4_v(a0, "pers_littlegirl", "littlegirl.xml", 1);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		} else {
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
		}
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
}

void f_76f_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = f_47b_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_45c_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
			if (a1 + 1 >= 3) {
				f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_1fd_a4_v(a0, "pers_butcher", "butcher.xml", 2);
			}
		} else {
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			if (a1 + 1 >= 3) {
				f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if (a1 + 1 >= 7) {
				f_1fd_a4_v(a0, "pers_butcher", "butcher.xml", 3);
			}
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1fd_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_551_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
}

void f_8a4_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_47b_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_45c_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_boy", "boy.xml", 1);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
		f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_boy", "boy.xml", 1);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl.xml", 1);
			f_1fd_a4_v(a0, "pers_girl", "girl2.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 2);
		} else {
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 1);
		}
	}
}

void f_955_a3_v(int a0, int a1, int a2)
{
	if (a1 + 1 == 12) {
		return;
	}
	if ((a2 < 7 || a2 > 21) && a1 != 0) {
		int L0;
		L0 = 1 * f_47b_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
	}
	if (f_45c_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_unosha", "unosha_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_unosha", "unosha2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_worker", "worker2_attacker.xml", 1);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_woman", "woman.xml", 2);
	} else {
		if (a2 > 8 && a2 < 21) {
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 2);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 2);
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1fd_a4_v(a0, "pers_woman", "woman.xml", 2);
			f_1fd_a4_v(a0, "pers_unosha", "unosha.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
		} else {
			f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker.xml", 1);
			f_1fd_a4_v(a0, "pers_worker", "worker2.xml", 1);
			f_1fd_a4_v(a0, "pers_unosha", "unosha2.xml", 1);
			f_1fd_a4_v(a0, "pers_dog", "dog.xml", 1);
		}
	}
	if (a1 == 0 && a2 > 12 && a2 < 22) {
		f_1fd_a4_v(a0, "pers_woman", "woman_killme.xml", 1);
	}
}

void f_a1e_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_217_a4_v(a0, "fog", "fog.xml", 8);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 1 * f_4ed_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_20a_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_ad2_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4ed_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_20a_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_b86_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4ed_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	f_20a_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_551_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_nudegirl", "nudegirl.xml", 1);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_c47_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 2);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L0 = 1 * f_4ed_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_217_a4_v(a0, "fog", "fog.xml", 6);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 2);
		}
		L1 = 2 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_20a_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_cee_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 3);
		f_217_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L0 = 2 * f_4ed_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L0);
		}
	} else {
		int L1;
		f_1fd_a4_v(a0, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		f_1fd_a4_v(a0, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		f_1fd_a4_v(a0, "pers_rat_big", "rat_big.xml", 4);
		f_217_a4_v(a0, "fog", "fog.xml", 7);
		if (a1 >= 5) {
			f_217_a4_v(a0, "fog", "fog_hunter.xml", 3);
		}
		L1 = 2 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
	f_20a_a6_v(a0, "pers_worker", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	f_20a_a6_v(a0, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
}

void f_d95_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_493_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 5);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 2);
		L2 = 3 * f_493_a1_f(a1);
		if (L2) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		L3 = 1 * f_4ed_a1_f(a1);
		if (L3) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_e51_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 1);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_493_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 3);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_493_a1_f(a1);
		if (L2) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4ed_a1_f(a1);
		if (L3) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_f0d_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 2);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_493_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_493_a1_f(a1);
		if (L2) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4ed_a1_f(a1);
		if (L3) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_547_a2_b(a1, a2)) {
		f_1fd_a4_v(a0, "pers_soldat", "soldier_marauder.xml", 2);
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_fc9_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_493_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 7);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 2 * f_493_a1_f(a1);
		if (L2) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4ed_a1_f(a1);
		if (L3) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 1);
	}
}

void f_1078_a3_v(int a0, int a1, int a2)
{
	if (a2 > 8 && a2 < 21) {
		int L0;
		int L1;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 4);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 2);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L0 = 2 * f_493_a1_f(a1);
		if (L0) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L0);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 2);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L1 = 1 * f_4ed_a1_f(a1);
		if (L1) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L1);
		}
	} else {
		int L2;
		int L3;
		f_1fd_a4_v(a0, "pers_rat", "rat.xml", 8);
		f_1fd_a4_v(a0, "pers_alkash", "alkash.xml", 1);
		f_1fd_a4_v(a0, "pers_dohodyaga", "dohodyaga.xml", 1);
		L2 = 3 * f_493_a1_f(a1);
		if (L2) {
			f_1fd_a4_v(a0, "pers_grabitel", "grabitel.xml", L2);
		}
		if (a1 + 1 >= 2) {
			f_1fd_a4_v(a0, "pers_patrool", "patrol.xml", 1);
			if (f_562_a1_b(a1)) {
				f_1fd_a4_v(a0, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		L3 = 1 * f_4ed_a1_f(a1);
		if (L3) {
			f_1fd_a4_v(a0, "pers_bomber", "bomber.xml", L3);
		}
	}
	if (f_562_a1_b(a1)) {
		f_1fd_a4_v(a0, "pers_sanitar", "sanitar.xml", 2);
	}
}

void f_1127_a1_v(object a0)
{
}

void f_1129_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(0, false);
		f_333_a3_v(0, false, 1);
		f_274_a5_v(0, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(0, false, 4);
		f_3aa_a3_v(0, false, 4);
	}
	f_420_a2_v(0, a1);
	f_8a4_a3_v(0, a0, a1);
}

void f_115d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(0, true);
		f_333_a3_v(0, true, 1);
		f_287_a5_v(0, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(0, true, 4);
		f_3aa_a3_v(0, false, 4);
	}
	f_311_a2_v(0, false);
	f_c47_a3_v(0, a0, a1);
}

void f_1191_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(0, false);
		f_333_a3_v(0, false, 1);
		f_2d6_a5_v(0, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(0, false, 4);
		f_3aa_a3_v(0, true, 4);
	}
	f_311_a2_v(0, false);
	f_fc9_a3_v(0, a0, a1);
}

void f_11c5_a1_v(object a0)
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

void f_11ee_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(1, false);
		f_333_a3_v(1, false, 1);
		f_274_a5_v(1, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(1, false, 8);
		f_3aa_a3_v(1, false, 8);
	}
	f_420_a2_v(1, a1);
	f_955_a3_v(1, a0, a1);
}

void f_1222_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(1, true);
		f_333_a3_v(1, true, 1);
		f_287_a5_v(1, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(1, true, 8);
		f_3aa_a3_v(1, false, 8);
	}
	f_311_a2_v(1, false);
	f_cee_a3_v(1, a0, a1);
}

void f_1256_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(1, false);
		f_333_a3_v(1, false, 1);
		f_2d6_a5_v(1, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(1, false, 8);
		f_3aa_a3_v(1, true, 8);
	}
	f_311_a2_v(1, false);
	f_1078_a3_v(1, a0, a1);
}

void f_128a_a1_v(object a0)
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

void f_12bc_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(2, false);
		f_333_a3_v(2, false, 1);
		f_274_a5_v(2, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(2, false, 5);
		f_3aa_a3_v(2, false, 5);
	}
	f_420_a2_v(2, a1);
	f_76f_a3_v(2, a0, a1);
}

void f_12f0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(2, true);
		f_333_a3_v(2, true, 1);
		f_287_a5_v(2, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(2, true, 5);
		f_3aa_a3_v(2, false, 5);
	}
	f_311_a2_v(2, false);
	f_b86_a3_v(2, a0, a1);
}

void f_1324_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(2, false);
		f_333_a3_v(2, false, 1);
		f_2d6_a5_v(2, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(2, false, 5);
		f_3aa_a3_v(2, true, 5);
	}
	f_311_a2_v(2, false);
	f_f0d_a3_v(2, a0, a1);
}

void f_1358_a1_v(object a0)
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

void f_13a2_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(3, false);
		f_333_a3_v(3, false, 1);
		f_274_a5_v(3, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(3, false, 7);
		f_3aa_a3_v(3, false, 7);
	}
	f_3dd_a2_v(3, a1);
	f_76f_a3_v(3, a0, a1);
}

void f_13d6_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(3, true);
		f_333_a3_v(3, true, 1);
		f_287_a5_v(3, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(3, true, 7);
		f_3aa_a3_v(3, false, 7);
	}
	f_311_a2_v(3, false);
	f_b86_a3_v(3, a0, a1);
}

void f_140a_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(3, false);
		f_333_a3_v(3, false, 1);
		f_2d6_a5_v(3, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(3, false, 7);
		f_3aa_a3_v(3, true, 7);
	}
	f_311_a2_v(3, false);
	f_f0d_a3_v(3, a0, a1);
}

void f_143e_a1_v(object a0)
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

void f_147c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(4, false);
		f_333_a3_v(4, false, 1);
		f_274_a5_v(4, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(4, false, 4);
		f_3aa_a3_v(4, false, 4);
	}
	f_402_a2_v(4, a1);
	f_76f_a3_v(4, a0, a1);
}

void f_14b0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(4, true);
		f_333_a3_v(4, true, 1);
		f_287_a5_v(4, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(4, true, 4);
		f_3aa_a3_v(4, false, 4);
	}
	f_311_a2_v(4, false);
	f_b86_a3_v(4, a0, a1);
}

void f_14e4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(4, false);
		f_333_a3_v(4, false, 1);
		f_2d6_a5_v(4, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(4, false, 4);
		f_3aa_a3_v(4, true, 4);
	}
	f_311_a2_v(4, false);
	f_f0d_a3_v(4, a0, a1);
}

void f_1518_a1_v(object a0)
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

void f_1571_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(5, false);
		f_333_a3_v(5, false, 1);
		f_274_a5_v(5, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(5, false, 4);
		f_3aa_a3_v(5, false, 4);
	}
	f_3dd_a2_v(5, a1);
	f_76f_a3_v(5, a0, a1);
}

void f_15a5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(5, true);
		f_333_a3_v(5, true, 1);
		f_287_a5_v(5, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(5, true, 4);
		f_3aa_a3_v(5, false, 4);
	}
	f_311_a2_v(5, false);
	f_b86_a3_v(5, a0, a1);
}

void f_15d9_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(5, false);
		f_333_a3_v(5, false, 1);
		f_2d6_a5_v(5, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(5, false, 4);
		f_3aa_a3_v(5, true, 4);
	}
	f_311_a2_v(5, false);
	f_f0d_a3_v(5, a0, a1);
}

void f_160d_a1_v(object a0)
{
}

void f_160f_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_420_a2_v(6, a1);
}

void f_1616_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_311_a2_v(6, false);
}

void f_161d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	f_311_a2_v(6, false);
}

void f_1624_a1_v(object a0)
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

void f_1650_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(7, false);
		f_333_a3_v(7, false, 1);
		f_274_a5_v(7, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(7, false, 6);
		f_3aa_a3_v(7, false, 6);
	}
	f_402_a2_v(7, a1);
	f_65e_a3_v(7, a0, a1);
}

void f_1684_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(7, true);
		f_333_a3_v(7, true, 1);
		f_287_a5_v(7, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(7, true, 6);
		f_3aa_a3_v(7, false, 6);
	}
	f_311_a2_v(7, false);
	f_ad2_a3_v(7, a0, a1);
}

void f_16b8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(7, false);
		f_333_a3_v(7, false, 1);
		f_2d6_a5_v(7, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(7, false, 6);
		f_3aa_a3_v(7, true, 6);
	}
	f_311_a2_v(7, false);
	f_e51_a3_v(7, a0, a1);
}

void f_16ec_a1_v(object a0)
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

void f_1718_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(8, false);
		f_333_a3_v(8, false, 1);
		f_274_a5_v(8, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(8, false, 4);
		f_3aa_a3_v(8, false, 4);
	}
	f_3dd_a2_v(8, a1);
	f_65e_a3_v(8, a0, a1);
}

void f_174c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(8, true);
		f_333_a3_v(8, true, 1);
		f_287_a5_v(8, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(8, true, 4);
		f_3aa_a3_v(8, false, 4);
	}
	f_311_a2_v(8, false);
	f_ad2_a3_v(8, a0, a1);
}

void f_1780_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(8, false);
		f_333_a3_v(8, false, 1);
		f_2d6_a5_v(8, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(8, false, 4);
		f_3aa_a3_v(8, true, 4);
	}
	f_311_a2_v(8, false);
	f_e51_a3_v(8, a0, a1);
}

void f_17b4_a1_v(object a0)
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

void f_17e3_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(9, false);
		f_333_a3_v(9, false, 1);
		f_274_a5_v(9, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(9, false, 7);
		f_3aa_a3_v(9, false, 7);
	}
	f_420_a2_v(9, a1);
	f_65e_a3_v(9, a0, a1);
}

void f_1817_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(9, true);
		f_333_a3_v(9, true, 1);
		f_287_a5_v(9, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(9, true, 7);
		f_3aa_a3_v(9, false, 7);
	}
	f_311_a2_v(9, false);
	f_ad2_a3_v(9, a0, a1);
}

void f_184b_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(9, false);
		f_333_a3_v(9, false, 1);
		f_2d6_a5_v(9, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(9, false, 7);
		f_3aa_a3_v(9, true, 7);
	}
	f_311_a2_v(9, false);
	f_e51_a3_v(9, a0, a1);
}

void f_187f_a1_v(object a0)
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

void f_18b4_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(10, false);
		f_333_a3_v(10, false, 1);
		f_274_a5_v(10, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(10, false, 7);
		f_3aa_a3_v(10, false, 7);
	}
	f_3dd_a2_v(10, a1);
	f_65e_a3_v(10, a0, a1);
}

void f_18e8_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(10, true);
		f_333_a3_v(10, true, 1);
		f_287_a5_v(10, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(10, true, 7);
		f_3aa_a3_v(10, false, 7);
	}
	f_311_a2_v(10, false);
	f_ad2_a3_v(10, a0, a1);
}

void f_191c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(10, false);
		f_333_a3_v(10, false, 1);
		f_2d6_a5_v(10, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(10, false, 7);
		f_3aa_a3_v(10, true, 7);
	}
	f_311_a2_v(10, false);
	f_e51_a3_v(10, a0, a1);
}

void f_1950_a1_v(object a0)
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

void f_1988_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(11, false);
		f_333_a3_v(11, false, 1);
		f_274_a5_v(11, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(11, false, 5);
		f_3aa_a3_v(11, false, 5);
	}
	f_3dd_a2_v(11, a1);
	f_65e_a3_v(11, a0, a1);
}

void f_19bc_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(11, false);
		f_333_a3_v(11, true, 1);
		f_287_a5_v(11, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(11, true, 5);
		f_3aa_a3_v(11, false, 5);
	}
	f_311_a2_v(11, false);
	f_ad2_a3_v(11, a0, a1);
}

void f_19f0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(11, true);
		f_333_a3_v(11, false, 1);
		f_2d6_a5_v(11, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(11, false, 5);
		f_3aa_a3_v(11, true, 5);
	}
	f_311_a2_v(11, false);
	f_e51_a3_v(11, a0, a1);
}

void f_1a24_a1_v(object a0)
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

void f_1a4d_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(12, false);
		f_333_a3_v(12, false, 1);
		f_274_a5_v(12, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(12, false, 4);
		f_3aa_a3_v(12, false, 4);
	}
	f_402_a2_v(12, a1);
	f_65e_a3_v(12, a0, a1);
}

void f_1a81_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(12, true);
		f_333_a3_v(12, true, 1);
		f_287_a5_v(12, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(12, true, 4);
		f_3aa_a3_v(12, false, 4);
	}
	f_311_a2_v(12, false);
	f_ad2_a3_v(12, a0, a1);
}

void f_1ab5_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(12, false);
		f_333_a3_v(12, false, 1);
		f_2d6_a5_v(12, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(12, false, 4);
		f_3aa_a3_v(12, true, 4);
	}
	f_311_a2_v(12, false);
	f_e51_a3_v(12, a0, a1);
}

void f_1ae9_a1_v(object a0)
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

void f_1b18_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(13, false);
		f_333_a3_v(13, false, 1);
		f_274_a5_v(13, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(13, false, 4);
		f_3aa_a3_v(13, false, 4);
	}
	f_420_a2_v(13, a1);
	f_65e_a3_v(13, a0, a1);
}

void f_1b4c_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(13, true);
		f_333_a3_v(13, true, 1);
		f_287_a5_v(13, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(13, true, 4);
		f_3aa_a3_v(13, false, 4);
	}
	f_311_a2_v(13, false);
	f_ad2_a3_v(13, a0, a1);
}

void f_1b80_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(13, false);
		f_333_a3_v(13, false, 1);
		f_2d6_a5_v(13, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(13, false, 4);
		f_3aa_a3_v(13, true, 4);
	}
	f_311_a2_v(13, false);
	f_e51_a3_v(13, a0, a1);
}

void f_1bb4_a1_v(object a0)
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

void f_1be0_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(14, false);
		f_333_a3_v(14, false, 1);
		f_274_a5_v(14, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(14, false, 5);
		f_3aa_a3_v(14, false, 5);
	}
	f_445_a2_v(14, a1);
	f_566_a3_v(14, a0, a1);
}

void f_1c14_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(14, true);
		f_333_a3_v(14, true, 1);
		f_287_a5_v(14, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(14, true, 5);
		f_3aa_a3_v(14, false, 5);
	}
	f_311_a2_v(14, false);
	f_a1e_a3_v(14, a0, a1);
}

void f_1c48_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(14, false);
		f_333_a3_v(14, false, 1);
		f_2d6_a5_v(14, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(14, false, 5);
		f_3aa_a3_v(14, true, 5);
	}
	f_311_a2_v(14, false);
	f_d95_a3_v(14, a0, a1);
}

void f_1c7c_a1_v(object a0)
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

void f_1c96_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(15, false);
		f_333_a3_v(15, false, 1);
		f_274_a5_v(15, a0, a2, a3, a4);
		f_137_a2_v(a5, 0);
		f_36c_a3_v(15, false, 5);
		f_3aa_a3_v(15, false, 5);
	}
	f_445_a2_v(15, a1);
	f_566_a3_v(15, a0, a1);
}

void f_1cca_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(15, true);
		f_333_a3_v(15, true, 1);
		f_287_a5_v(15, a0, a2, a3, a4);
		f_137_a2_v(a5, 1);
		f_36c_a3_v(15, true, 5);
		f_3aa_a3_v(15, false, 5);
	}
	f_311_a2_v(15, false);
	f_a1e_a3_v(15, a0, a1);
}

void f_1cfe_a6_v(int a0, int a1, object a2, object a3, object a4, object a5)
{
	if (a1 == 0) {
		f_322_a2_v(15, false);
		f_333_a3_v(15, false, 1);
		f_2d6_a5_v(15, a0, a2, a3, a4);
		f_137_a2_v(a5, 2);
		f_36c_a3_v(15, false, 5);
		f_3aa_a3_v(15, true, 5);
	}
	f_311_a2_v(15, false);
	f_d95_a3_v(15, a0, a1);
}

void OnTrigger(string a0, string a1)
{
	if (a0 == "playsound") {
		@PlaySound(a1);
	} else {
		if (a0 == "enable_bonfire") {
			int L0;
			@_strtoi(L0, a1);
			f_1dbe_a1_v(L0 - 1);
		} else {
			if (a0 == "disable_bonfire") {
				int L1;
				@_strtoi(L1, a1);
				f_1e0b_a1_v(L1 - 1);
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
		f_1c0_a1_v(L0);
		g13->size(L1);
		if (L0 >= 0 && L0 < L1) {
			object L2;
			g13->get(L2, L0);
			f_137_a2_v(L2, 1);
			@Trace("Replaced");
		} else {
			@Trace("Invalid region index");
		}
	} else {
		if (a0 == "nail") {
			int L3;
			int L4;
			@_strtoi(L3, a1);
			f_1de_a1_v(L3);
			g13->size(L4);
			if (L3 >= 0 && L3 < L4) {
				object L5;
				g13->get(L5, L3);
				f_137_a2_v(L5, 2);
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
				L6 = f_50_a0_o();
				L6->GetScene(L7);
				L6->GetPosition(L8);
				@AddActorByType(L9, "fog", L7, L8, [0.0, 0.0, 1.0], "fog_stat.xml");
			} else {
				if (a0 == "sepia") {
					f_127_a0_v();
				} else {
					if (a0 == "nosepia") {
						f_12c_a0_v();
					}
				}
			}
		}
	}
}

void f_1dbe_a1_v(int a0)
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

void f_1e0b_a1_v(int a0)
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

object f_1e47_a4_o(object a0, string a1, string a2, string a3)
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

object f_1e58_a2_o(object a0, int a1)
{
	return f_1e47_a4_o(a0, "term" + a1, "pers_patrool", "guard_term.xml");
}

void f_1e63_a1_v(bool a0)
{
	object L0;
	@FindActor(L0, "arena_light");
	L0->Switch(a0);
}

void f_1e6b_a0_v(void)
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
			g11 = f_3a08_a3_o(L0, L2, L3);
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
		f_1e63_a1_v(true);
	}
}

void f_1eaa_a0_v(void)
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
		f_1e63_a1_v(false);
	}
}

void f_1ecc_a0_v(void)
{
	object L0;
	int L1;
	@GetMainOutdoorScene(L0);
	for (L1 = 1; L1 <= 17; L1++) {
		g15->add(f_a5_a4_o(L0, "pt_bull" + L1, "pers_bull", "bull.xml"));
	}
}

void f_1ee3_a0_v(void)
{
	f_10d_a1_v(g15);
}

void f_1eea_a0_v(void)
{
	g15 = f_84_a0_o();
	g13 = f_84_a0_o();
	g8 = f_84_a0_o();
	g9 = f_84_a0_o();
	g10 = f_84_a0_o();
	int L0;
	for (L0 = 0; L0 < 16; L0++) {
		g8->add(f_84_a0_o());
		g9->add(f_84_a0_o());
		g10->add(f_84_a0_o());
	}
	object L1;
	@CreateStringVector(L1);
	g13->add(L1);
	f_1127_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_11c5_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_128a_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1358_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_143e_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1518_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_160d_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1624_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_16ec_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_17b4_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_187f_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1950_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1a24_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1ae9_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1bb4_a1_v(L1);
	@CreateStringVector(L1);
	g13->add(L1);
	f_1c7c_a1_v(L1);
	f_1ecc_a0_v();
	object L2;
	@GetMainOutdoorScene(L2);
	g6 = f_84_a0_o();
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
	g7 = f_84_a0_o();
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
	g14 = f_84_a0_o();
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
		f_1e0b_a1_v(L7);
	}
	@Trace("Total bonfires: " + L7);
}

void f_200e_a0_v(void)
{
	object L0;
	@GetMainOutdoorScene(L0);
	g0 = f_1e58_a2_o(L0, 1);
	g1 = f_1e58_a2_o(L0, 2);
	g2 = f_1e58_a2_o(L0, 3);
	g3 = f_1e58_a2_o(L0, 4);
	g4 = f_1e58_a2_o(L0, 5);
	g5 = f_1e58_a2_o(L0, 6);
	g12 = f_84_a0_o();
	f_1e63_a1_v(false);
	f_2232_a0_v();
	f_227d_a0_v();
	@SendWorldWndMessage(100);
}

void f_2056_a2_v(int a0, int a1)
{
	if (a1 == 0) {
		bool L0;
		L0 = false;
		if (a0 == 2) {
			if (f_30e8_a0_i() == 0) {
				int L1;
				@GetVariable("d1q01", L1);
				if (L1 != 1000) {
					L0 = true;
					@UnlockAchievement("ACHIEVEMENT_UP");
					@GameOver("gameover_fail.xml");
				}
			} else {
				if (f_30e8_a0_i() == 1) {
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
			if (f_30e8_a0_i() == 0) {
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
				if (f_30e8_a0_i() == 1) {
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

void f_2180_a2_v(int a0, int a1)
{
	if (a1 == 5 && a0 >= 7) {
		if (f_30e8_a0_i() != 2) {
			f_1e6b_a0_v();
		}
	} else {
		if (a1 == 22 && a0 >= 7) {
			if (f_30e8_a0_i() != 2) {
				f_1eaa_a0_v();
			}
		}
	}
	if (a1 == 7 && a0 != 1) {
		@SendWorldWndMessage(100);
	}
	if (a1 == 0) {
		f_2232_a0_v();
		f_227d_a0_v();
		if (a0 == 6) {
			object L0;
			object L1;
			@GetMainOutdoorScene(L0);
			@AddScriptedActor(L1, "shed_corpse", "splash_object_wo_pf.bin", L0, [0.0, 0.0, 0.0]);
		}
		if (a0 == 9) {
			f_22ae_a0_v();
		}
		if (a0 != 1) {
			string L2;
			int L3;
			if (f_30e8_a0_i() == 1) {
				@GetVariable("b" + (a0 - 1) + "q01", L3);
				L2 = "volonteers_burah";
			} else {
				if (f_30e8_a0_i() == 0) {
					@GetVariable("d" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_danko";
				} else {
					@GetVariable("k" + (a0 - 1) + "q01", L3);
					L2 = "volonteers_klara";
				}
			}
			@Trace(L2);
			if (L3 == 1000) {
				f_101_a3_b(L2, "rescue_locked", "");
			}
			f_101_a3_b(L2, "update", "");
		}
	}
	if (a0 == 6 && a1 == 0) {
		f_1ee3_a0_v();
	}
	if (a0 == 7 && a1 == 0) {
		int L4;
		int L5;
		g14->size(L4);
		for (L5 = 0; L5 < L4; L5++) {
			f_1dbe_a1_v(L5);
		}
	}
}

void f_2232_a0_v(void)
{
	int L0;
	object L1;
	int L2;
	if (f_30e8_a0_i() == 0) {
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

void f_227d_a0_v(void)
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

void f_22ae_a0_v(void)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddScriptedActor(L1, "big_gun", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "vagon_martira", "big_gun.bin", L0, [0.0, 0.0, 0.0]);
	@AddScriptedActor(L1, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", L0, [0.0, 0.0, 0.0]);
}

bool f_22c3_a2_b(int a0, float a1)
{
	if (a0 > 16384 && a0 < 16396) {
		int L0;
		L0 = a0 - 16384;
		f_38e3_a1_v(L0);
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
		f_234d_a4_v(L1, L2, L4, L5);
		return true;
	}
	return false;
}

void f_22fa_a0_v(void)
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
		@SetVariable(f_131_a1_s(L4), 0);
		f_322_a2_v(L4, false);
	}
	f_234d_a4_v(0, L0 % 24, 0, L0 % 24);
	object L5;
	@FindActor(L5, "dt_house_1_07");
	L5->EnableSubset(200, false);
	object L6;
	@GetMainOutdoorScene(L6);
	L6->SwitchLights(0, L0 < 7 || L0 >= 20);
}

void f_234d_a4_v(int a0, int a1, int a2, int a3)
{
	int L0;
	@Trace("City update");
	if (a0 == a2 && a1 == a3) {
		@PlaySound("kolokol");
	}
	L0 = 0;
	for (; L0 < 16; L0++) {
		f_1f0_a1_v(L0);
		if (f_196_a1_b(L0)) {
			f_23c5_a3_v(L0, a0, a1);
		} else {
			if (f_1b4_a1_b(L0)) {
				f_24a6_a3_v(L0, a0, a1);
				continue;
			}
			f_2587_a3_v(L0, a0, a1);
		}
	}
	if (a1 == 0) {
		f_398f_a1_v(a0);
		if (a0 == 1 || f_1b4_a1_b(5)) {
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

void f_23c5_a3_v(int a0, int a1, int a2)
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
		f_1129_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_11ee_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_12bc_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_13a2_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_147c_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_1571_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_160f_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_1650_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1718_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_17e3_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_18b4_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_1988_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a4d_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b18_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1be0_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1c96_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_24a6_a3_v(int a0, int a1, int a2)
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
		f_115d_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_1222_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_12f0_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_13d6_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_14b0_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_15a5_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_1616_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_1684_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_174c_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_1817_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_18e8_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_19bc_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1a81_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b4c_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1c14_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1cca_a6_v(a1, a2, L0, L1, L2, L3);
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

void f_2587_a3_v(int a0, int a1, int a2)
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
		f_1191_a6_v(a1, a2, L0, L1, L2, L3);
	} else {
		if (a0 == 1) {
			f_1256_a6_v(a1, a2, L0, L1, L2, L3);
		} else {
			if (a0 == 2) {
				f_1324_a6_v(a1, a2, L0, L1, L2, L3);
			} else {
				if (a0 == 3) {
					f_140a_a6_v(a1, a2, L0, L1, L2, L3);
				} else {
					if (a0 == 4) {
						f_14e4_a6_v(a1, a2, L0, L1, L2, L3);
					} else {
						if (a0 == 5) {
							f_15d9_a6_v(a1, a2, L0, L1, L2, L3);
						} else {
							if (a0 == 6) {
								f_161d_a6_v(a1, a2, L0, L1, L2, L3);
							} else {
								if (a0 == 7) {
									f_16b8_a6_v(a1, a2, L0, L1, L2, L3);
								} else {
									if (a0 == 8) {
										f_1780_a6_v(a1, a2, L0, L1, L2, L3);
									} else {
										if (a0 == 9) {
											f_184b_a6_v(a1, a2, L0, L1, L2, L3);
										} else {
											if (a0 == 10) {
												f_191c_a6_v(a1, a2, L0, L1, L2, L3);
											} else {
												if (a0 == 11) {
													f_19f0_a6_v(a1, a2, L0, L1, L2, L3);
												} else {
													if (a0 == 12) {
														f_1ab5_a6_v(a1, a2, L0, L1, L2, L3);
													} else {
														if (a0 == 13) {
															f_1b80_a6_v(a1, a2, L0, L1, L2, L3);
														} else {
															if (a0 == 14) {
																f_1c48_a6_v(a1, a2, L0, L1, L2, L3);
															} else {
																if (a0 == 15) {
																	f_1cfe_a6_v(a1, a2, L0, L1, L2, L3);
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

int f_2668_a1_i(float a0)
{
	return f_30cf_a3_i(530554, 530553, a0);
}

int f_2671_a1_i(float a0)
{
	return f_30cf_a3_i(530556, 530555, a0);
}

int f_267a_a1_i(float a0)
{
	return f_30cf_a3_i(530558, 530557, a0);
}

int f_2683_a1_i(float a0)
{
	return f_30cf_a3_i(530560, 530559, a0);
}

int f_268c_a1_i(float a0)
{
	return f_30cf_a3_i(530562, 530561, a0);
}

int f_2695_a1_i(float a0)
{
	return f_30cf_a3_i(530564, 530563, a0);
}

int f_269e_a1_i(float a0)
{
	return f_30cf_a3_i(530566, 530565, a0);
}

int f_26a7_a1_i(float a0)
{
	return f_30cf_a3_i(530568, 530567, a0);
}

int f_26b0_a1_i(float a0)
{
	return f_30cf_a3_i(536379, 536378, a0);
}

int f_26b9_a1_i(float a0)
{
	return f_30cf_a3_i(522212, 522211, a0);
}

int f_26c2_a1_i(float a0)
{
	return f_30cf_a3_i(534077, 534076, a0);
}

int f_26cb_a1_i(float a0)
{
	return f_30cf_a3_i(534163, 534162, a0);
}

int f_26d4_a1_i(float a0)
{
	return f_30cf_a3_i(530570, 530569, a0);
}

int f_26dd_a1_i(float a0)
{
	return f_30cf_a3_i(515484, 515483, a0);
}

int f_26e6_a1_i(float a0)
{
	return f_30cf_a3_i(522214, 522213, a0);
}

int f_26ef_a1_i(float a0)
{
	return f_30cf_a3_i(514529, 514528, a0);
}

int f_26f8_a1_i(float a0)
{
	return f_30cf_a3_i(514531, 514530, a0);
}

int f_2701_a1_i(float a0)
{
	return f_30cf_a3_i(538404, 538403, a0);
}

int f_270a_a1_i(float a0)
{
	return f_30cf_a3_i(530572, 530571, a0);
}

int f_2713_a1_i(float a0)
{
	return f_30cf_a3_i(515493, 515492, a0);
}

int f_271c_a1_i(float a0)
{
	return f_30cf_a3_i(535696, 535695, a0);
}

int f_2725_a1_i(float a0)
{
	return f_30cf_a3_i(535694, 535693, a0);
}

int f_272e_a1_i(float a0)
{
	return f_30cf_a3_i(530574, 530573, a0);
}

int f_2737_a1_i(float a0)
{
	return f_30cf_a3_i(501160, 501159, a0);
}

int f_2740_a1_i(float a0)
{
	return f_30cf_a3_i(501158, 501157, a0);
}

int f_2749_a1_i(float a0)
{
	return f_30cf_a3_i(501154, 501153, a0);
}

int f_2752_a1_i(float a0)
{
	return f_30cf_a3_i(501152, 501151, a0);
}

int f_275b_a1_i(float a0)
{
	return f_30cf_a3_i(501156, 501155, a0);
}

int f_2764_a1_i(float a0)
{
	return f_30cf_a3_i(501413, 501412, a0);
}

int f_276d_a1_i(float a0)
{
	return f_30cf_a3_i(502662, 502661, a0);
}

int f_2776_a1_i(float a0)
{
	return f_30cf_a3_i(532770, 532769, a0);
}

int f_277f_a1_i(float a0)
{
	return f_30cf_a3_i(532768, 532767, a0);
}

int f_2788_a1_i(float a0)
{
	return f_30cf_a3_i(541589, 541588, a0);
}

int f_2791_a1_i(float a0)
{
	return f_30cf_a3_i(501175, 501174, a0);
}

int f_279a_a1_i(float a0)
{
	return f_30cf_a3_i(522198, 522197, a0);
}

int f_27a3_a1_i(float a0)
{
	return f_30cf_a3_i(538398, 538397, a0);
}

int f_27ac_a1_i(float a0)
{
	return f_30cf_a3_i(538400, 538399, a0);
}

int f_27b5_a1_i(float a0)
{
	return f_30cf_a3_i(515303, 515302, a0);
}

int f_27be_a1_i(float a0)
{
	return f_30cf_a3_i(502851, 502850, a0);
}

int f_27c7_a1_i(float a0)
{
	return f_30cf_a3_i(532895, 532894, a0);
}

int f_27d0_a1_i(float a0)
{
	return f_30cf_a3_i(522200, 522199, a0);
}

int f_27d9_a1_i(float a0)
{
	return f_30cf_a3_i(538402, 538401, a0);
}

int f_27e2_a1_i(float a0)
{
	return f_30cf_a3_i(503307, 503306, a0);
}

int f_27eb_a1_i(float a0)
{
	return f_30cf_a3_i(536320, 536319, a0);
}

int f_27f4_a1_i(float a0)
{
	return f_30cf_a3_i(515334, 515333, a0);
}

int f_27fd_a1_i(float a0)
{
	return f_30cf_a3_i(533079, 533078, a0);
}

int f_2806_a1_i(float a0)
{
	return f_30cf_a3_i(522202, 522201, a0);
}

int f_280f_a1_i(float a0)
{
	return f_30cf_a3_i(502853, 502852, a0);
}

int f_2818_a1_i(float a0)
{
	return f_30cf_a3_i(503175, 503174, a0);
}

int f_2821_a1_i(float a0)
{
	return f_30cf_a3_i(522204, 522203, a0);
}

int f_282a_a1_i(float a0)
{
	return f_30cf_a3_i(503177, 503176, a0);
}

int f_2833_a1_i(float a0)
{
	return f_30cf_a3_i(503181, 503180, a0);
}

int f_283c_a1_i(float a0)
{
	return f_30cf_a3_i(503179, 503178, a0);
}

int f_2845_a1_i(float a0)
{
	return f_30cf_a3_i(512530, 512529, a0);
}

int f_284e_a1_i(float a0)
{
	return f_30cf_a3_i(515382, 515381, a0);
}

int f_2857_a1_i(float a0)
{
	return f_30cf_a3_i(515433, 515432, a0);
}

int f_2860_a1_i(float a0)
{
	return f_30cf_a3_i(522206, 522205, a0);
}

int f_2869_a1_i(float a0)
{
	return f_30cf_a3_i(515439, 515438, a0);
}

int f_2872_a1_i(float a0)
{
	return f_30cf_a3_i(515431, 515430, a0);
}

int f_287b_a1_i(float a0)
{
	return f_30cf_a3_i(536365, 536364, a0);
}

int f_2884_a1_i(float a0)
{
	return f_30cf_a3_i(522208, 522207, a0);
}

int f_288d_a1_i(float a0)
{
	return f_30cf_a3_i(538406, 538405, a0);
}

int f_2896_a1_i(float a0)
{
	return f_30cf_a3_i(533323, 533322, a0);
}

int f_289f_a1_i(float a0)
{
	return f_30cf_a3_i(538721, 538720, a0);
}

int f_28a8_a1_i(float a0)
{
	return f_30cf_a3_i(536369, 536368, a0);
}

int f_28b1_a1_i(float a0)
{
	return f_30cf_a3_i(522210, 522209, a0);
}

int f_28ba_a1_i(float a0)
{
	return f_30cf_a3_i(536371, 536370, a0);
}

int f_28c3_a1_i(float a0)
{
	return f_30cf_a3_i(533585, 533584, a0);
}

int f_28cc_a1_i(float a0)
{
	return f_30cf_a3_i(536367, 536366, a0);
}

int f_28d5_a1_i(float a0)
{
	return f_30cf_a3_i(538734, 538733, a0);
}

void f_28de_a2_v(object a0, object a1)
{
	f_b7_a2_v("termitnik2@door1", true);
}

void f_28e5_a2_v(object a0, object a1)
{
	f_b7_a2_v("house_vlad@door2", true);
}

void f_28ec_a2_v(object a0, object a1)
{
	f_b7_a2_v("warehouse_rubin@door1", false);
}

void f_28f3_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d1KaterinaMapMark", "pt_map_katerina", 3, 508640, f_122_a0_f());
}

void f_2903_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d8q01MatGotoToyHouse");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MatGotoBoiny");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladGotoMat");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01MladVladgotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q01OspinaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q02GotoKapella");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d8q04MladVladGotoMark");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(175);
	f_30be_a1_b(127);
	f_30be_a1_b(124);
	f_30be_a1_b(649);
}

void f_294c_a2_v(object a0, object a1)
{
	f_b7_a2_v("house1_kabak@door1", true);
}

void f_2953_a2_v(object a0, object a1)
{
	f_b7_a2_v("mnogogrannik_han@door1", true);
}

void f_295a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d10q03GotoMark", "pt_map_theater", 0, 511154, f_122_a0_f());
}

void f_296a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d9q01GotoViktor", "pt_map_viktor", 1, 540031, f_122_a0_f());
}

void f_297a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d9q02GotoJulia", "pt_map_julia", 0, 515296, f_122_a0_f());
}

void f_298a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d9q03GotoLara", "pt_map_lara", 0, 515294, f_122_a0_f());
}

void f_299a_a2_v(object a0, object a1)
{
	object L0;
	L0 = f_30d7_a0_o();
	L0->AddMark("d9q04GotoAnna", "pt_map_anna", 0, 511375, f_122_a0_f());
}

void f_29aa_a2_v(object a0, object a1)
{
	@SetVariable("d8BurahLetter", 1);
}

void f_29b0_a2_v(object a0, object a1)
{
	if (f_8a_a1_i("map_chertez_state") <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_29c1_a2_v(object a0, object a1)
{
	if (f_8a_a1_i("map_chertez_state") <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_29d2_a2_v(object a0, object a1)
{
	if (f_8a_a1_i("map_chertez_state") <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_29e3_a2_v(object a0, object a1)
{
	if (f_8a_a1_i("map_chertez_state") <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_29f4_a2_v(object a0, object a1)
{
	if (f_8a_a1_i("map_chertez_state") <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}

void f_2a05_a2_v(object a0, object a1)
{
	f_b7_a2_v("theater@door1", true);
}

void f_2a0c_a2_v(object a0, object a1)
{
	f_b7_a2_v("theater@door1", false);
}

void f_2a13_a2_v(object a0, object a1)
{
	f_3088_a0_v();
}

void f_2a18_a2_v(object a0, object a1)
{
	f_c8_a2_b(a0, -0.30000001192092896);
}

void f_2a1f_a2_v(object a0, object a1)
{
	f_b7_a2_v("termitnik@door1", true);
}

void f_2a26_a2_v(object a0, object a1)
{
	f_b7_a2_v("termitnik@door1", false);
}

void f_2a2d_a2_v(object a0, object a1)
{
	@SetVariable("resque_list", 1);
	f_3883_a0_v();
}

void f_2a36_a2_v(object a0, object a1)
{
	f_b7_a2_v("factory@door1", false);
}

void f_2a3d_a2_v(object a0, object a1)
{
	f_b7_a2_v("icot_eva@door1", true);
}

void f_2a44_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d1EvaGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1EvaInfo");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1GeorgInfo");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1JuliaMapMarkEva");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1JuliaMapMarkLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1KaterinaMapMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01AlexandrGotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01AnnaMapMarkMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaGotoSimon");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01EvaMapMarkMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01GeorgGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01JuliaGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01LaraMarkMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01PatrolGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q01ViktorGotoIsidor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02AnnaGotoLaska");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d1q02JuliaGotoAnna");
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
	f_30be_a1_b(2);
	f_30be_a1_b(7);
	f_30be_a1_b(37);
	f_30be_a1_b(43);
	@Trace("Day1 cleanup");
}

void f_2ae4_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
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
	L0->FindMark(L1, "d2q02AndreiGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d2q02EvaGotoAndrei");
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
	L0->FindMark(L1, "d2q03BirdmaskGotoLara");
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
	f_30be_a1_b(10);
	f_30be_a1_b(11);
	f_30be_a1_b(12);
}

void f_2b76_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d3q01AlexandrGotoOspina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01BigVladAgreed");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01OspinaGotoBigVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q01RubinGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02GeorgGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02HanGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02MishkaGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02MladVladGotoButcher");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02MladVladGotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02ViktorGotoHan");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q02ViktorGotoMladVlad");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d3q03KapellaBoyLocation");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(25);
	f_30be_a1_b(26);
	f_30be_a1_b(27);
}

void f_2bde_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d4q01BigVladGotoLara");
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
	L0->FindMark(L1, "d4q01MladVladGotoBigVlad");
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
	L0->FindMark(L1, "d4q03GrifGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d4q03GrifGotoAlexandrSelf");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(20);
	f_30be_a1_b(21);
	f_30be_a1_b(22);
	f_30be_a1_b(710);
}

void f_2c82_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d5q01AlexandrGotoKaterina");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoAlexandr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BigVladGotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01BurahMeeting");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d5q01GrifWantsMoney");
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
	L0->FindMark(L1, "d5q03SavePrisoners");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(139);
	f_30be_a1_b(148);
	f_30be_a1_b(154);
}

void f_2d0d_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
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
	f_30be_a1_b(111);
	f_30be_a1_b(102);
	f_30be_a1_b(107);
}

void f_2d9f_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
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
	L0->FindMark(L1, "d7q04WastedGotoGatherer");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d7q04NudeGotoAndrei");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(165);
	f_30be_a1_b(170);
	f_30be_a1_b(637);
	f_30be_a1_b(641);
}

void f_2dfd_a2_v(object a0, object a1)
{
	f_b7_a2_v("mnogogrannik@door1", true);
}

void f_2e04_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d9q01GotoViktor");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d9q02GotoJulia");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d9q03GotoLara");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d9q04GotoAnna");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d9q05AglajaGotoBurah");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(182);
	f_30be_a1_b(655);
	f_30be_a1_b(659);
	f_30be_a1_b(662);
	f_30be_a1_b(764);
}

void f_2e43_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d10q01AglajaGotoPetr");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q02KaterinaGotoRubin");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q02RubinGotoMaria");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q02GeorgGotoAglaja");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q03GotoMark");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d10q03MarkGotoBlock");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(186);
	f_30be_a1_b(666);
	f_30be_a1_b(672);
}

void f_2e81_a2_v(object a0, object a1)
{
	object L0;
	object L1;
	L0 = f_30d7_a0_o();
	L0->FindMark(L1, "d11q01NudeGotoRastrel");
	if (L1) {
		L1->Remove();
	}
	L0->FindMark(L1, "d11q01NudeGotoBlock");
	if (L1) {
		L1->Remove();
	}
	f_30be_a1_b(192);
	f_30be_a1_b(197);
	f_30be_a1_b(682);
	f_30be_a1_b(686);
}

bool f_2ea7_a1_b(object a0)
{
	if (f_8a_a1_i("d1q01") == 1000) {
		return true;
	}
	return false;
}

bool f_2eb3_a1_b(object a0)
{
	if (f_8a_a1_i("d1q01") == 0) {
		return true;
	}
	return false;
}

bool f_2ebf_a1_b(object a0)
{
	if (f_8a_a1_i("resque_list") != 0) {
		return true;
	}
	return false;
}

bool f_2ecb_a1_b(object a0)
{
	if (f_8a_a1_i("d2EvaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ed7_a1_b(object a0)
{
	if (f_8a_a1_i("d2LaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ee3_a1_b(object a0)
{
	if (f_8a_a1_i("d4MladVladVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2eef_a1_b(object a0)
{
	if (f_8a_a1_i("d4AlexandrVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2efb_a1_b(object a0)
{
	if (f_8a_a1_i("d5AnnaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f07_a1_b(object a0)
{
	if (f_8a_a1_i("d8MladVladVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f13_a1_b(object a0)
{
	if (f_8a_a1_i("d9q03") == 1000) {
		return true;
	}
	return false;
}

bool f_2f1f_a1_b(object a0)
{
	if (f_8a_a1_i("d10KaterinaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f2b_a1_b(object a0)
{
	if (f_8a_a1_i("d10MarkVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f37_a1_b(object a0)
{
	if (f_8a_a1_i("d12q01BurahVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f43_a1_b(object a0)
{
	if (f_8a_a1_i("d4ViktorVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f4f_a1_b(object a0)
{
	if (f_8a_a1_i("d8AglajaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f5b_a1_b(object a0)
{
	if (f_8a_a1_i("d9AnnaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f67_a1_b(object a0)
{
	if (f_8a_a1_i("d9LaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f73_a1_b(object a0)
{
	if (f_8a_a1_i("d9JuliaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f7f_a1_b(object a0)
{
	if (f_8a_a1_i("d10AglajaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f8b_a1_b(object a0)
{
	if (f_8a_a1_i("d11ViktorVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2f97_a1_b(object a0)
{
	if (f_8a_a1_i("d9AglajaVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2fa3_a1_b(object a0)
{
	if (f_8a_a1_i("d9ViktorVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2faf_a1_b(object a0)
{
	if (f_8a_a1_i("d2q03RepDown") != 0) {
		return true;
	}
	return false;
}

bool f_2fbb_a1_b(object a0)
{
	if (f_3085_a1_b(a0)) {
		return true;
	}
	return false;
}

bool f_2fc5_a1_b(object a0)
{
	if (f_8a_a1_i("d1q01KaterinaUHave1day") == 1) {
		return true;
	}
	return false;
}

bool f_2fd1_a1_b(object a0)
{
	if (f_8a_a1_i("d6q03") == 0) {
		return true;
	}
	return false;
}

bool f_2fdd_a1_b(object a0)
{
	if (f_8a_a1_i("d11q03BurahVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2fe9_a1_b(object a0)
{
	if (f_8a_a1_i("d11q04KlaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_2ff5_a1_b(object a0)
{
	if (f_8a_a1_i("d2TalkToAlexandr") != 0) {
		return true;
	}
	return false;
}

bool f_3001_a1_b(object a0)
{
	if (f_8a_a1_i("d3RubinVisit") == 1) {
		return true;
	}
	return false;
}

bool f_300d_a1_b(object a0)
{
	if (f_8a_a1_i("d3GeorgVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3019_a1_b(object a0)
{
	if (f_8a_a1_i("d4BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3025_a1_b(object a0)
{
	if (f_8a_a1_i("d12q01KlaraVisit") != 0) {
		return true;
	}
	return false;
}

bool f_3031_a1_b(object a0)
{
	if (f_8a_a1_i("d5RubinVisit") == 1) {
		return true;
	}
	return false;
}

bool f_303d_a1_b(object a0)
{
	if (f_8a_a1_i("d6KapellaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3049_a1_b(object a0)
{
	if (f_8a_a1_i("d6MariaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3055_a1_b(object a0)
{
	if (f_8a_a1_i("d6BigVladVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3061_a1_b(object a0)
{
	if (f_8a_a1_i("d6ViktorVisit") == 1) {
		return true;
	}
	return false;
}

bool f_306d_a1_b(object a0)
{
	if (f_8a_a1_i("d7AglajaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3079_a1_b(object a0)
{
	if (f_8a_a1_i("d11AglajaVisit") == 1) {
		return true;
	}
	return false;
}

bool f_3085_a1_b(object a0)
{
	return false;
}

void f_3088_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 30, 0, 504079);
	f_30a2_a2_b(L0, -1);
}

object f_3095_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_30a2_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_3095_a0_o();
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

bool f_30be_a1_b(int a0)
{
	object L0;
	object L1;
	L0 = f_3095_a0_o();
	L0->Find(a0, L1);
	if (!L1) {
		return false;
	}
	L1->Remove();
	return true;
}

int f_30cf_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

object f_30d7_a0_o(void)
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

int f_30e8_a0_i(void)
{
	int L0;
	@GetVariable("branch", L0);
	return L0;
}

bool f_30ee_a2_b(int a0, float a1)
{
	if (a0 > 42000 && a0 < 42288) {
		int L0;
		int L1;
		L0 = (a0 - 42000) / 24;
		L1 = (a0 - 42000) % 24;
		f_2056_a2_v(L0 + 1, L1);
		return true;
	}
	if (a0 > 40000 && a0 < 40288) {
		int L2;
		int L3;
		L2 = (a0 - 40000) / 24;
		L3 = (a0 - 40000) % 24;
		f_2180_a2_v(L2 + 1, L3);
		f_38af_a2_v(L2 + 1, L3);
		return true;
	}
	return false;
}

void f_312b_a0_v(void)
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
	f_200e_a0_v();
	f_3887_a0_v();
}

void f_314e_a2_v(int a0, float a1)
{
	if (a0 == 45268) {
		f_29c1_a2_v(g16, g16);
	}
	if (a0 == 45261) {
		if (!f_2fa3_a1_b(g16)) {
			f_296a_a2_v(g16, g16);
			f_28d5_a1_i(a1);
		}
	}
	if (a0 == 45230) {
		f_27ac_a1_i(a1);
	}
	if (a0 == 45218) {
		if (!f_2f1f_a1_b(g16)) {
			f_26c2_a1_i(a1);
		}
	}
	if (a0 == 45269) {
		f_29d2_a2_v(g16, g16);
	}
	if (a0 == 45231) {
		f_27d9_a1_i(a1);
	}
	if (a0 == 45227) {
		if (!f_2f73_a1_b(g16)) {
			f_297a_a2_v(g16, g16);
			f_28ba_a1_i(a1);
		}
	}
	if (a0 == 45271) {
		f_29f4_a2_v(g16, g16);
	}
	if (a0 == 45282) {
		if (f_2faf_a1_b(g16)) {
			f_2a18_a2_v(g16, g16);
			f_2788_a1_i(a1);
		}
	}
	if (a0 == 45270) {
		f_29e3_a2_v(g16, g16);
	}
	if (a0 == 45229) {
		f_27a3_a1_i(a1);
	}
	if (a0 == 45222) {
		if (!f_2ebf_a1_b(g16)) {
			f_2a2d_a2_v(g16, g16);
		}
	}
	if (a0 == 45260) {
		if (!f_2f97_a1_b(g16)) {
			f_289f_a1_i(a1);
		}
	}
	if (a0 == 45226) {
		if (!f_2f5b_a1_b(g16) && !f_2f13_a1_b(g16)) {
			f_299a_a2_v(g16, g16);
			f_28a8_a1_i(a1);
		}
	}
	if (a0 == 45224) {
		if (!f_2f4f_a1_b(g16)) {
			f_287b_a1_i(a1);
		}
	}
	if (a0 == 45221) {
		if (!f_3025_a1_b(g16)) {
			f_2725_a1_i(a1);
		}
	}
	if (a0 == 45239) {
		f_29aa_a2_v(g16, g16);
		f_288d_a1_i(a1);
	}
	if (a0 == 45220) {
		if (!f_2f37_a1_b(g16)) {
			f_271c_a1_i(a1);
		}
	}
	if (a0 == 45228) {
		if (!f_2f7f_a1_b(g16)) {
			f_26b0_a1_i(a1);
		}
	}
	if (a0 == 45219) {
		if (!f_2f2b_a1_b(g16)) {
			f_295a_a2_v(g16, g16);
			f_26cb_a1_i(a1);
		}
	}
	if (a0 == 45232) {
		if (!f_2f8b_a1_b(g16)) {
			f_2701_a1_i(a1);
		}
	}
	if (a0 == 45267) {
		f_29b0_a2_v(g16, g16);
	}
	if (a0 == 45223) {
		if (!f_2f43_a1_b(g16)) {
			f_27eb_a1_i(a1);
		}
	}
	if (a0 == 45225) {
		if (!f_2f67_a1_b(g16)) {
			f_298a_a2_v(g16, g16);
			f_28cc_a1_i(a1);
		}
	}
	if (a0 == 45214) {
		f_2884_a1_i(a1);
	}
	if (a0 == 45215) {
		f_28b1_a1_i(a1);
	}
	if (a0 == 45216) {
		f_26b9_a1_i(a1);
	}
	if (a0 == 45217) {
		f_26e6_a1_i(a1);
	}
	if (a0 == 45174) {
		if (f_2fbb_a1_b(g16)) {
			f_2668_a1_i(a1);
		}
	}
	if (a0 == 45178) {
		if (f_2fbb_a1_b(g16)) {
			f_268c_a1_i(a1);
		}
	}
	if (a0 == 45179) {
		if (f_2fbb_a1_b(g16)) {
			f_2695_a1_i(a1);
		}
	}
	if (a0 == 45200) {
		if (!f_2ecb_a1_b(g16)) {
			f_2776_a1_i(a1);
		}
	}
	if (a0 == 45180) {
		if (f_2fbb_a1_b(g16)) {
			f_269e_a1_i(a1);
		}
	}
	if (a0 == 45182) {
		if (f_2fbb_a1_b(g16)) {
			f_26d4_a1_i(a1);
		}
	}
	if (a0 == 45176) {
		if (f_2fbb_a1_b(g16)) {
			f_267a_a1_i(a1);
		}
	}
	if (a0 == 45063) {
		@QueuePlayMovie("aglaja.wmv");
	}
	if (a0 == 45177) {
		if (f_2fbb_a1_b(g16)) {
			f_2683_a1_i(a1);
		}
	}
	if (a0 == 45183) {
		if (f_2fbb_a1_b(g16)) {
			f_270a_a1_i(a1);
		}
	}
	if (a0 == 45202) {
		if (!f_2eef_a1_b(g16)) {
			f_27c7_a1_i(a1);
		}
	}
	if (a0 == 45205) {
		if (!f_2f07_a1_b(g16)) {
			f_2896_a1_i(a1);
		}
	}
	if (a0 == 45209) {
		f_279a_a1_i(a1);
	}
	if (a0 == 45207) {
		f_2764_a1_i(a1);
	}
	if (a0 == 45208) {
		f_276d_a1_i(a1);
	}
	if (a0 == 45181) {
		if (f_2fbb_a1_b(g16)) {
			f_26a7_a1_i(a1);
		}
	}
	if (a0 == 45210) {
		f_27d0_a1_i(a1);
	}
	if (a0 == 45211) {
		f_2806_a1_i(a1);
	}
	if (a0 == 45064) {
		@QueuePlayMovie("army.wmv");
	}
	if (a0 == 45212) {
		f_2821_a1_i(a1);
	}
	if (a0 == 45213) {
		f_2860_a1_i(a1);
	}
	if (a0 == 45203) {
		if (!f_2efb_a1_b(g16)) {
			f_27fd_a1_i(a1);
		}
	}
	if (a0 == 45175) {
		if (f_2fbb_a1_b(g16)) {
			f_2671_a1_i(a1);
		}
	}
	if (a0 == 45054) {
		f_2713_a1_i(a1);
	}
	if (a0 == 45199) {
		if (!f_2ed7_a1_b(g16)) {
			f_277f_a1_i(a1);
		}
	}
	if (a0 == 45201) {
		if (!f_2ee3_a1_b(g16)) {
			f_27e2_a1_i(a1);
		}
	}
	if (a0 == 45184) {
		if (f_2fbb_a1_b(g16)) {
			f_272e_a1_i(a1);
		}
	}
	if (a0 == 45206) {
		f_28c3_a1_i(a1);
	}
	if (a0 == 45050) {
		f_2869_a1_i(a1);
	}
	if (a0 == 45051) {
		if (!f_3079_a1_b(g16)) {
			f_26dd_a1_i(a1);
		}
	}
	if (a0 == 45042) {
		f_2e81_a2_v(g16, g16);
		f_f5_a2_b("quest_d11_01", "cleanup");
		f_8f_a1_o("quest_d12_01");
	}
	if (a0 == 45040) {
		if (!f_300d_a1_b(g16)) {
			f_27b5_a1_i(a1);
		}
	}
	if (a0 == 45039) {
		if (!f_3001_a1_b(g16)) {
			f_28ec_a2_v(g16, g16);
			f_27be_a1_i(a1);
		}
	}
	if (a0 == 45038) {
		if (!f_2ff5_a1_b(g16)) {
			f_2791_a1_i(a1);
		}
	}
	if (a0 == 45041) {
		if (!f_3019_a1_b(g16)) {
			f_27f4_a1_i(a1);
		}
	}
	if (a0 == 45045) {
		if (!f_303d_a1_b(g16)) {
			f_2833_a1_i(a1);
		}
	}
	if (a0 == 45047) {
		if (!f_3061_a1_b(g16)) {
			f_284e_a1_i(a1);
		}
	}
	if (a0 == 45036) {
		if (!f_2fdd_a1_b(g16)) {
			f_2a36_a2_v(g16, g16);
			f_26ef_a1_i(a1);
		}
	}
	if (a0 == 45043) {
		if (!f_3031_a1_b(g16)) {
			f_280f_a1_i(a1);
		}
	}
	if (a0 == 45046) {
		if (!f_3055_a1_b(g16)) {
			f_282a_a1_i(a1);
		}
	}
	if (a0 == 45044) {
		if (!f_3049_a1_b(g16)) {
			f_283c_a1_i(a1);
		}
	}
	if (a0 == 45048) {
		f_2872_a1_i(a1);
	}
	if (a0 == 45049) {
		if (!f_306d_a1_b(g16)) {
			f_2857_a1_i(a1);
		}
	}
	if (a0 == 45018) {
		f_2e04_a2_v(g16, g16);
		f_f5_a2_b("quest_d9_01", "cleanup");
		f_8f_a1_o("quest_d10_01");
	}
	if (a0 == 45005) {
		f_2ae4_a2_v(g16, g16);
		f_f5_a2_b("quest_d2_01", "cleanup");
		f_8f_a1_o("quest_d3_01");
	}
	if (a0 == 45007) {
		f_2a0c_a2_v(g16, g16);
	}
	if (a0 == 45009) {
		f_2740_a1_i(a1);
	}
	if (a0 == 45016) {
		f_2d9f_a2_v(g16, g16);
		f_2a26_a2_v(g16, g16);
		f_f5_a2_b("quest_d7_01", "cleanup");
		f_8f_a1_o("quest_d8_01");
	}
	if (a0 == 45017) {
		f_2903_a2_v(g16, g16);
		f_f5_a2_b("quest_d8_01", "cleanup");
		f_8f_a1_o("quest_d9_01");
	}
	if (a0 == 45015) {
		if (f_2fd1_a1_b(g16)) {
			f_2845_a1_i(a1);
		}
	}
	if (a0 == 45031) {
		f_2e43_a2_v(g16, g16);
		f_f5_a2_b("quest_d10_01", "cleanup");
		f_8f_a1_o("quest_d11_01");
	}
	if (a0 == 45011) {
		f_2bde_a2_v(g16, g16);
		f_f5_a2_b("quest_d4_01", "cleanup");
		f_9a_a1_o("quest_d5_01");
	}
	if (a0 == 45032) {
		f_8f_a1_o("quest_d11_02");
	}
	if (a0 == 45008) {
		if (f_2eb3_a1_b(g16)) {
			f_2749_a1_i(a1);
		}
	}
	if (a0 == 45003) {
		f_2a44_a2_v(g16, g16);
		f_2737_a1_i(a1);
		f_8f_a1_o("quest_d2_01");
		f_f5_a2_b("quest_d1_01", "cleanup");
		f_f5_a2_b("tutorial_mask1", "cleanup");
		f_f5_a2_b("tutorial_mask2", "cleanup");
	}
	if (a0 == 45006) {
		f_2b76_a2_v(g16, g16);
		f_f5_a2_b("quest_d3_01", "cleanup");
		f_8f_a1_o("quest_d4_01");
	}
	if (a0 == 45012) {
		f_2c82_a2_v(g16, g16);
		f_2818_a1_i(a1);
		f_f5_a2_b("quest_d5_01", "cleanup");
		f_8f_a1_o("quest_d6_01");
	}
	if (a0 == 45013) {
		f_2d0d_a2_v(g16, g16);
		f_f5_a2_b("quest_d6_01", "cleanup");
		f_8f_a1_o("quest_d7_01");
	}
	if (a0 == 45035) {
		if (!f_2fe9_a1_b(g16)) {
			f_2a26_a2_v(g16, g16);
			f_26f8_a1_i(a1);
		}
	}
	if (a0 == 45010) {
		if (!f_2fc5_a1_b(g16) && !f_2ea7_a1_b(g16)) {
			f_28f3_a2_v(g16, g16);
			f_275b_a1_i(a1);
		}
	}
}

void f_367b_a1_v(float a0)
{
	g16 = null;
	@SetTimeEvent(45268, 192.0);
	@SetTimeEvent(45261, 199.5);
	@SetTimeEvent(45230, 64.25);
	@SetTimeEvent(45218, 228.0);
	@SetTimeEvent(45269, 216.0);
	@SetTimeEvent(45231, 90.0);
	@SetTimeEvent(45227, 203.0);
	@SetTimeEvent(45271, 264.0);
	@SetTimeEvent(45282, 58.0);
	@SetTimeEvent(45270, 240.0);
	@SetTimeEvent(45229, 64.0);
	@SetTimeEvent(45222, 24.0);
	@SetTimeEvent(45260, 199.1699981689453);
	@SetTimeEvent(45226, 202.0);
	@SetTimeEvent(45224, 180.5);
	@SetTimeEvent(45221, 272.2900085449219);
	@SetTimeEvent(45239, 182.5);
	@SetTimeEvent(45220, 271.5400085449219);
	@SetTimeEvent(45228, 223.9600067138672);
	@SetTimeEvent(45219, 230.0);
	@SetTimeEvent(45232, 250.5);
	@SetTimeEvent(45267, 168.0);
	@SetTimeEvent(45223, 80.25);
	@SetTimeEvent(45225, 201.0);
	@SetTimeEvent(45214, 192.0800018310547);
	@SetTimeEvent(45215, 216.0800018310547);
	@SetTimeEvent(45216, 240.0800018310547);
	@SetTimeEvent(45217, 264.0799865722656);
	@SetTimeEvent(45174, 31.020000457763672);
	@SetTimeEvent(45178, 127.0199966430664);
	@SetTimeEvent(45179, 151.02000427246094);
	@SetTimeEvent(45200, 39.5);
	@SetTimeEvent(45180, 175.02000427246094);
	@SetTimeEvent(45182, 223.02000427246094);
	@SetTimeEvent(45176, 79.0199966430664);
	@SetTimeEvent(45063, 144.0);
	@SetTimeEvent(45177, 103.0199966430664);
	@SetTimeEvent(45183, 247.02000427246094);
	@SetTimeEvent(45202, 85.0);
	@SetTimeEvent(45205, 175.25);
	@SetTimeEvent(45209, 72.08000183105469);
	@SetTimeEvent(45207, 24.329999923706055);
	@SetTimeEvent(45208, 48.08000183105469);
	@SetTimeEvent(45181, 199.02000427246094);
	@SetTimeEvent(45210, 96.08000183105469);
	@SetTimeEvent(45211, 120.08000183105469);
	@SetTimeEvent(45064, 192.0);
	@SetTimeEvent(45212, 144.0800018310547);
	@SetTimeEvent(45213, 168.0800018310547);
	@SetTimeEvent(45203, 103.25);
	@SetTimeEvent(45175, 55.02000045776367);
	@SetTimeEvent(45054, 273.0);
	@SetTimeEvent(45199, 37.0);
	@SetTimeEvent(45201, 86.5);
	@SetTimeEvent(45184, 271.0199890136719);
	@SetTimeEvent(45206, 210.0);
	@SetTimeEvent(45050, 151.25);
	@SetTimeEvent(45051, 249.35000610351562);
	@SetTimeEvent(45042, 264.0);
	@SetTimeEvent(45040, 55.25);
	@SetTimeEvent(45039, 60.0);
	@SetTimeEvent(45038, 31.25);
	@SetTimeEvent(45041, 79.25);
	@SetTimeEvent(45045, 128.25);
	@SetTimeEvent(45047, 127.25);
	@SetTimeEvent(45036, 255.0);
	@SetTimeEvent(45043, 108.0);
	@SetTimeEvent(45046, 128.0);
	@SetTimeEvent(45044, 128.6699981689453);
	@SetTimeEvent(45048, 154.0);
	@SetTimeEvent(45049, 152.0);
	@SetTimeEvent(45018, 216.0);
	@SetTimeEvent(45005, 48.0);
	@SetTimeEvent(45007, 17.920000076293945);
	@SetTimeEvent(45009, 23.5);
	@SetTimeEvent(45016, 168.0);
	@SetTimeEvent(45017, 192.0);
	@SetTimeEvent(45015, 132.0);
	@SetTimeEvent(45031, 240.0);
	@SetTimeEvent(45011, 96.0);
	@SetTimeEvent(45032, 245.0);
	@SetTimeEvent(45008, 10.0);
	@SetTimeEvent(45003, 24.0);
	f_2a3d_a2_v(g16, g16);
	f_2a05_a2_v(g16, g16);
	f_2a13_a2_v(g16, g16);
	f_2a1f_a2_v(g16, g16);
	f_2dfd_a2_v(g16, g16);
	f_28e5_a2_v(g16, g16);
	f_294c_a2_v(g16, g16);
	f_2953_a2_v(g16, g16);
	f_28de_a2_v(g16, g16);
	f_2752_a1_i(a0);
	f_8f_a1_o("volonteers_danko");
	f_8f_a1_o("quest_d1_01");
	@SetTimeEvent(45006, 72.0);
	@SetTimeEvent(45012, 120.0);
	@SetTimeEvent(45013, 144.0);
	@SetTimeEvent(45035, 261.5);
	@SetTimeEvent(45010, 16.0);
}

void f_383d_a3_v(object a0, bool a1, int a2)
{
	a0->add(6);
	a0->add(26);
	a0->add(2);
	a0->add(22);
	if (a1 == false) {
		a0->add(15);
		a0->add(5);
		a0->add(16);
	} else {
		if (a2 != 0) {
			a0->add(15);
		}
	}
}

void f_385e_a1_v(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	@SetVariable("vol_" + a0, L0 | 8);
}

void f_386a_a0_v(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_383d_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		f_385e_a1_v(L3);
	}
}

void f_3883_a0_v(void)
{
	f_386a_a0_v();
}

void f_3887_a0_v(void)
{
}

bool f_3888_a2_b(int a0, int a1)
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

void f_38af_a2_v(int a0, int a1)
{
	@Trace("Updating game " + a0 + " " + a1);
	if (a0 == 5 && a1 == 0) {
		object L0;
		@FindActor(L0, "house7_03@door1");
		L0->SetProperty("lp", true);
		@FindActor(L0, "house7_03@door2");
		L0->SetProperty("lp", true);
	} else {
		if (a0 == 7 && a1 == 0) {
			object L1;
			@GetSceneByName(L1, "sobor");
			@Trigger(L1, "aglaja");
		}
	}
}

void f_38e3_a1_v(int a0)
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
			if (f_1b4_a1_b(L1)) {
				f_1de_a1_v(L1);
			} else {
				if (f_1d2_a1_b(L1)) {
					f_1a2_a1_v(L1);
				}
			}
		}
		if (a0 == 2) {
			@Trace("Special diseased region: 5");
			f_1c0_a1_v(5);
		} else {
			if (a0 == 3) {
				@Trace("Special diseased region: 3");
				f_1c0_a1_v(3);
				@Trace("Special diseased region: 13");
				f_1c0_a1_v(13);
			}
		}
		L2 = f_15d_a0_i();
		if (L2 < L0) {
			int L3;
			int L4;
			L3 = L0 - L2;
			for (L4 = 0; L4 < L3; L4++) {
				f_16f_a1_v(a0 + 1);
			}
		}
	} else {
		int L5;
		for (L5 = 0; L5 < 16; L5++) {
			if (f_1b4_a1_b(L5) || f_1d2_a1_b(L5)) {
				f_1a2_a1_v(L5);
			}
		}
	}
}

void f_398f_a1_v(int a0)
{
	if (a0 == 1) {
		object L0;
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(L0, "r4_house_2_02");
		@ReplaceScene(L0, "s_r4_house_2_02.isc");
	} else {
		if (a0 == 2) {
			object L1;
			@Trace("Special house: r7_house2_01");
			@GetSceneByName(L1, "r7_house2_01");
			@ReplaceScene(L1, "r7_house2_01_d3q02.isc");
		} else {
			if (a0 == 3) {
				object L2;
				@Trace("Special diseased house: house7_03");
				@GetSceneByName(L2, "house7_03");
				@ReplaceScene(L2, "s_house7_03.isc");
			} else {
				if (a0 == 4) {
					object L3;
					@GetSceneByName(L3, "theater");
					@ReplaceScene(L3, "dtheater_danko.isc");
				} else {
					if (a0 == 5) {
						object L4;
						@Trace("Special house: sobor (with corpses)");
						@GetSceneByName(L4, "sobor");
						@ReplaceScene(L4, "sobor_trup.isc");
					} else {
						if (a0 == 6) {
							object L5;
							@Trace("Special house: sobor (normal)");
							@GetSceneByName(L5, "sobor");
							@ReplaceScene(L5, "sobor_danko.isc");
						} else {
							if (a0 == 7) {
								object L6;
								@Trace("Special diseased house: r4_house_2_02");
								@GetSceneByName(L6, "r4_house_2_02");
								@ReplaceScene(L6, "s_r4_house_2_02.isc");
							} else {
								if (a0 == 8) {
									object L7;
									@Trace("Special replaced house: uprava_admin");
									@GetSceneByName(L7, "uprava_admin");
									@ReplaceScene(L7, "uprava_admin_army_danko.isc");
								} else {
									if (a0 == 11) {
										object L8;
										@GetSceneByName(L8, "theater");
										@ReplaceScene(L8, "theater_danko.isc");
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

object f_3a08_a3_o(object a0, Vector a1, Vector a2)
{
	object L0;
	a0->AddStationaryActor(L0, a1, a2, "pers_morlok", "Danko_arena_manager.xml");
	return L0;
}

