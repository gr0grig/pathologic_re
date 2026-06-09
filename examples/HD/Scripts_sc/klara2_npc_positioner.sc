event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var int tv0;

	void init(void)
	{
		tv0 = -1;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init") {
			int L0;
			float L1;
			float L2;
			float L3;
			L0 = f_cc_a0_i();
			if (L0 > 22) {
				@Trace("to late for k2system quest");
				return;
			}
			L1 = 0;
			if (f_cc_a0_i() < 7) {
				L1 = 7 - f_cc_a0_i();
			}
			@GetGameTime(L2);
			@rand(L3, 0.30000001192092896, 1);
			@SetTimeEvent(0, L2 + L3 + L1);
			@rand(L3, 0.30000001192092896, 1);
			@SetTimeEvent(1, L2 + L3 + L1);
			tv0 = f_c3_a0_i();
		} else {
			if (a0 == "remove_danko") {
				object L4;
				@GetSceneByName(L4, f_1a5_a1_s(tv0));
				if (L4) {
					L4->SetProperty("inited", 0);
				}
			} else {
				if (a0 == "remove_burah") {
					object L5;
					@GetSceneByName(L5, f_18b_a1_s(tv0));
					if (L5) {
						L5->SetProperty("inited", 0);
					}
				}
			}
		}
	}

	void OnGameTime(int a0, float a1)
	{
		@Trace("id = " + a0 + ", fTime = " + a1 + ", GetDay() = " + f_c3_a0_i());
		if (a0 == 0 && tv0 == f_c3_a0_i()) {
			object L0;
			f_1f8_a2_v(tv0, a1);
			@GetSceneByName(L0, f_1a5_a1_s(tv0));
			if (!L0) {
				@Trace("K2System wrong danko scene: " + f_1a5_a1_s(tv0));
			} else {
				L0->SetProperty("inited", 1);
				f_186_a1_v(tv0);
			}
		} else {
			if (a0 == 1 && tv0 == f_c3_a0_i()) {
				object L1;
				f_1bf_a2_v(tv0, a1);
				@GetSceneByName(L1, f_18b_a1_s(tv0));
				if (!L1) {
					@Trace("K2System wrong burah scene: " + f_18b_a1_s(tv0));
				} else {
					L1->SetProperty("inited", 1);
					f_181_a1_v(tv0);
				}
			}
		}
	}
}

int f_c3_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_cc_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

int f_d4_a1_i(float a0)
{
	return f_179_a3_i(539089, 539088, a0);
}

int f_dd_a1_i(float a0)
{
	return f_179_a3_i(539097, 539096, a0);
}

int f_e6_a1_i(float a0)
{
	return f_179_a3_i(539091, 539090, a0);
}

int f_ef_a1_i(float a0)
{
	return f_179_a3_i(539099, 539098, a0);
}

int f_f8_a1_i(float a0)
{
	return f_179_a3_i(539085, 539084, a0);
}

int f_101_a1_i(float a0)
{
	return f_179_a3_i(539101, 539100, a0);
}

int f_10a_a1_i(float a0)
{
	return f_179_a3_i(539087, 539086, a0);
}

int f_113_a1_i(float a0)
{
	return f_179_a3_i(539095, 539094, a0);
}

void f_11c_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 751, 2, 539736);
	f_15d_a2_b(L0, -1);
}

void f_129_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 752, 2, 539737);
	f_15d_a2_b(L0, 751);
}

void f_136_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 757, 2, 539742);
	f_15d_a2_b(L0, -1);
}

void f_143_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 758, 2, 539743);
	f_15d_a2_b(L0, 757);
}

object f_150_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_15d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_150_a0_o();
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

int f_179_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

void f_181_a1_v(int a0)
{
	@SetVariable("k2system_burah_day", a0);
}

void f_186_a1_v(int a0)
{
	@SetVariable("k2system_danko_day", a0);
}

string f_18b_a1_s(int a0)
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

string f_1a5_a1_s(int a0)
{
	if (a0 == 8) {
		return "r5_House6_01";
	} else {
		if (a0 == 9) {
			return "dt_house2_01";
		} else {
			if (a0 == 10) {
				return "house7_02";
			} else {
				if (a0 == 11) {
					return "lc_house3_05";
				}
			}
		}
	}
	return "";
}

void f_1bf_a2_v(int a0, float a1)
{
	if (a0 == 8) {
		f_11c_a0_v();
		f_129_a0_v();
		f_f8_a1_i(a1);
	} else {
		if (a0 == 9) {
			f_11c_a0_v();
			f_129_a0_v();
			f_10a_a1_i(a1);
		} else {
			if (a0 == 10) {
				f_11c_a0_v();
				f_129_a0_v();
				f_d4_a1_i(a1);
			} else {
				if (a0 == 11) {
					f_11c_a0_v();
					f_129_a0_v();
					f_e6_a1_i(a1);
				}
			}
		}
	}
}

void f_1f8_a2_v(int a0, float a1)
{
	if (a0 == 8) {
		f_136_a0_v();
		f_143_a0_v();
		f_101_a1_i(a1);
	} else {
		if (a0 == 9) {
			f_136_a0_v();
			f_143_a0_v();
			f_113_a1_i(a1);
		} else {
			if (a0 == 10) {
				f_136_a0_v();
				f_143_a0_v();
				f_dd_a1_i(a1);
			} else {
				if (a0 == 11) {
					f_136_a0_v();
					f_143_a0_v();
					f_ef_a1_i(a1);
				}
			}
		}
	}
}

