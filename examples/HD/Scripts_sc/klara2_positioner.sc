event OnTrigger 26;

var object g0;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		int L0;
		tv0 = -1;
		@CreateBoolVector(tv2);
		@CreateBoolVector(tv3);
		L0 = 0;
		for (; L0 < 12; L0++) {
			tv2->add(false);
			if (L0 + 1 < 6 || L0 + 1 == 12) {
				tv3->add(false);
			} else {
				tv3->add(true);
			}
		}
		f_a8_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "sleep_end") {
			f_64_a1_v(f_d0_a0_i());
			f_95_a2_v(f_d0_a0_i(), f_cb_a0_f());
		} else {
			if (a0 == "remove_klara") {
				f_56_a0_v();
				f_129_a0_v();
			} else {
				if (a0 == "klara_stay") {
					f_136_a0_v();
				}
			}
		}
	}

	void f_56_a0_v(void)
	{
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		tv3->set(tv0 - 1, false);
		f_a8_a0_v();
	}

	void f_64_a1_v(int a0)
	{
		bool L0;
		object L1;
		string L2;
		if (tv1) {
			@RemoveActor(tv1);
		}
		tv3->get(L0, a0 - 1);
		if (!L0) {
			return;
		}
		L2 = f_17f_a1_s(a0);
		@Trace("Klara scene: " + L2);
		@GetSceneByName(L1, L2);
		if (L1) {
			tv1 = f_b9_a4_o(L1, "pt_klara" + a0, "NPC_Klara", "k2system_klara2.xml");
			tv1->SetProperty("day", a0);
			f_1fa_a1_v(a0);
			tv0 = a0;
		} else {
			@Trace("ERROR: Klara2 scene was not found: " + L2);
		}
	}

	void f_95_a2_v(int a0, float a1)
	{
		bool L0;
		tv2->get(L0, a0 - 1);
		if (L0) {
			return;
		}
		tv2->set(a0 - 1, true);
		f_1a5_a2_v(a0, a1);
	}

	void f_a8_a0_v(void)
	{
		int L0;
		for (L0 = 0; L0 < 12; L0++) {
			bool L1;
			tv3->get(L1, L0);
			f_174_a2_v(L0 + 1, L1);
		}
	}
}

object f_b9_a4_o(object a0, string a1, string a2, string a3)
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

float f_cb_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_d0_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_d9_a1_i(float a0)
{
	return f_16c_a3_i(538512, 538511, a0);
}

int f_e2_a1_i(float a0)
{
	return f_16c_a3_i(538514, 538513, a0);
}

int f_eb_a1_i(float a0)
{
	return f_16c_a3_i(538504, 538503, a0);
}

int f_f4_a1_i(float a0)
{
	return f_16c_a3_i(538506, 538505, a0);
}

int f_fd_a1_i(float a0)
{
	return f_16c_a3_i(538508, 538507, a0);
}

int f_106_a1_i(float a0)
{
	return f_16c_a3_i(538510, 538509, a0);
}

void f_10f_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 723, 2, 539102);
	f_150_a2_b(L0, -1);
}

void f_11c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 724, 2, 539103);
	f_150_a2_b(L0, 723);
}

void f_129_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 725, 2, 539104);
	f_150_a2_b(L0, 723);
}

void f_136_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 726, 2, 539105);
	f_150_a2_b(L0, 723);
}

object f_143_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_150_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_143_a0_o();
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

int f_16c_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

void f_174_a2_v(int a0, bool a1)
{
	@SetVariable("K2System" + a0, a1 ? 1 : 0);
}

string f_17f_a1_s(int a0)
{
	if (a0 == 6) {
		return "lc_House6_04";
	} else {
		if (a0 == 7) {
			return "r2_house3_03";
		} else {
			if (a0 == 8) {
				return "house1_se_04r";
			} else {
				if (a0 == 9) {
					return "r7_house3_02_i2";
				} else {
					if (a0 == 10) {
						return "house5_15";
					} else {
						if (a0 == 11) {
							return "r5_house2_01";
						}
					}
				}
			}
		}
	}
	return "";
}

void f_1a5_a2_v(int a0, float a1)
{
	if (a0 == 6) {
		f_eb_a1_i(a1);
		f_10f_a0_v();
		f_11c_a0_v();
	} else {
		if (a0 == 7) {
			f_f4_a1_i(a1);
			f_10f_a0_v();
			f_11c_a0_v();
		} else {
			if (a0 == 8) {
				f_fd_a1_i(a1);
				f_10f_a0_v();
				f_11c_a0_v();
			} else {
				if (a0 == 9) {
					f_106_a1_i(a1);
					f_10f_a0_v();
					f_11c_a0_v();
				} else {
					if (a0 == 10) {
						f_d9_a1_i(a1);
						f_10f_a0_v();
						f_11c_a0_v();
					} else {
						if (a0 == 11) {
							f_e2_a1_i(a1);
							f_10f_a0_v();
							f_11c_a0_v();
						}
					}
				}
			}
		}
	}
}

void f_1fa_a1_v(int a0)
{
	@SetVariable("k2system_klara_day", a0);
}

