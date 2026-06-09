event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var int tv6;
	var bool tv7;
	var bool tv8;
	var bool tv9;
	var bool tv10;
	var bool tv11;

	void f_0_a1_v(float a0)
	{
		f_a3f_a1_i(a0);
	}

	void f_6_a1_v(float a0)
	{
		f_a36_a1_i(a0);
		f_45b_a2_b("quest_b12_01", "init_hidden_room");
	}

	void f_11_a0_v(void)
	{
		f_a55_a0_v();
	}

	void f_15_a0_v(void)
	{
		f_a48_a0_v();
	}

	void f_19_a0_v(void)
	{
	}

	bool f_1a_a1_b(int a0)
	{
		return f_7f1_a1_b(a0);
	}

	void f_21_a2_v(object a0, object a1)
	{
		object L0;
		object L1;
		int L2;
		@CreateIntVector(L0);
		f_817_a3_v(L0, true, 1);
		@CreateIntVector(L1);
		f_838_a3_v(L1, true, 1);
		f_859_a3_v(L1, true, 1);
		for (L2 = 0; L2 < 12; L2++) {
			a0->add(L0);
			a1->add(L1);
		}
	}

	int f_46_a1_i(int a0)
	{
		if (a0 < 1 || a0 >= 11) {
			return 0;
		}
		return 1;
	}

	int f_55_a1_i(int a0)
	{
		if (a0 < 5) {
			return 0;
		}
		return 1;
	}

	void init(void)
	{
		f_295_a0_v();
		tv7 = false;
		tv8 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void f_66_a0_v(void)
	{
		if (!tv8 && f_47d_a1_b(12) && f_b16_a0_b() && f_475_a0_i() >= 8) {
			f_6_a1_v(f_467_a0_f());
			tv8 = true;
		}
		if (!tv9 && f_47d_a1_b(12) && f_aca_a0_b()) {
			tv9 = true;
			f_15_a0_v();
		}
		if (!tv10 && f_47d_a1_b(12) && f_aa4_a0_b()) {
			tv10 = true;
			f_19_a0_v();
		}
		if (!tv11 && f_47d_a1_b(12) && f_af0_a0_b()) {
			tv11 = true;
			f_11_a0_v();
		}
	}

	void OnTrigger(string a0, string a1)
	{
		@Trace(a0);
		if (a0 == "rescue") {
			f_3b7_a1_v(f_2de_a1_i(f_483_a1_i(a1)));
			f_66_a0_v();
		} else {
			if (a0 == "rescue_oneday") {
				f_371_a1_v(f_2de_a1_i(f_483_a1_i(a1)));
			} else {
				if (a0 == "rescue_locked") {
					int L0;
					for (L0 = 0; L0 < f_2d9_a0_i(); L0++) {
						if (f_307_a1_b(L0) && f_1a_a1_b(f_2f0_a1_i(L0))) {
							f_3b7_a1_v(L0);
						}
					}
					f_66_a0_v();
				} else {
					if (a0 == "kill") {
						f_3ea_a1_v(f_2de_a1_i(f_483_a1_i(a1)));
					} else {
						if (a0 == "disease") {
							f_32b_a1_v(f_2de_a1_i(f_483_a1_i(a1)));
						} else {
							if (a0 == "update") {
								f_1b1_a0_v();
							} else {
								if (a0 == "cleanup") {
									f_27f_a0_v();
								} else {
									if (a0 == "childs_letter") {
										if (!tv8) {
											f_6_a1_v(f_467_a0_f());
											tv8 = true;
										}
									} else {
										if (a0 == "theater_letter") {
											if (!tv7) {
												f_0_a1_v(f_467_a0_f());
												tv7 = true;
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

	void f_167_a3_v(int a0, int a1, int a2)
	{
		int L0;
		int L1;
		for (L0 = 0; L0 < a0; L0++) {
			f_17f_a2_i(a2, true);
		}
		for (L1 = 0; L1 < a1; L1++) {
			f_17f_a2_i(a2, false);
		}
	}

	int f_17f_a2_i(int a0, bool a1)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		if (a1) {
			tv1->get(L0, a0);
		} else {
			tv2->get(L0, a0);
		}
		L0->size(L1);
		if (L1 == 0) {
			return -1;
		}
		L2 = 0;
		if (L1 > 1) {
			@irand(L2, L1);
		}
		for (L3 = 0; L3 < L1; L3++) {
			int L4;
			int L5;
			int L6;
			L4 = (L3 + L2) % L1;
			L0->get(L5, L4);
			L6 = f_2de_a1_i(L5);
			if (f_313_a1_b(L6)) {
				f_437_a1_v(L6);
				return L6;
			}
		}
		return -1;
	}

	void f_1b1_a0_v(void)
	{
		@Trace(1);
		int L0;
		for (L0 = 0; L0 < f_2d9_a0_i(); L0++) {
			int L1;
			@Trace(2);
			L1 = f_2f0_a1_i(L0);
			@Trace(3);
			if (f_307_a1_b(L0)) {
				@Trace(4);
				f_32b_a1_v(L0);
			}
			@Trace(5);
			if (f_2fb_a1_b(L0)) {
				@Trace(6);
				f_393_a1_v(L0);
			}
			@Trace(7);
			if (f_31f_a1_b(L0)) {
				object L2;
				int L3;
				int L4;
				@Trace(8);
				tv4->get(L2, L0);
				@Trace(9);
				L2->size(L3);
				@Trace(10);
				for (L4 = 0; L4 < L3; L4++) {
					string L5;
					@Trace(11);
					L2->get(L5, L4);
					f_a93_a2_v(L5, 1);
				}
				@Trace(12);
			}
			@Trace(13);
		}
		@Trace(14);
		tv6 = tv6 + 1;
		f_167_a3_v(f_46_a1_i(tv6), f_55_a1_i(tv6), tv6);
		@Trace(15);
		int L6;
		L6 = 0;
		int L7;
		for (L7 = 0; L7 < f_2d9_a0_i(); L7++) {
			int L8;
			@Trace(16);
			L8 = f_2f0_a1_i(L7);
			@Trace(17);
			if (f_307_a1_b(L7)) {
				@Trace(18);
				@Trace("Volonteer : " + f_63b_a1_s(L8));
				L6 = L6 + 1;
			}
		}
		@Trace(19);
		int L9;
		L9 = 0;
		int L10;
		for (L10 = 0; L10 < f_2d9_a0_i(); L10++) {
			int L11;
			@Trace(20);
			L11 = f_2f0_a1_i(L10);
			if (f_31f_a1_b(L10)) {
				@Trace(21);
				L9 = L9 + 1;
				@Trace("Diseased volonteer : " + f_63b_a1_s(L11));
			}
		}
		@Trace(22);
		@Trace("Today volonteers: " + L6 + ", diseased: " + L9);
	}

	void f_27f_a0_v(void)
	{
		int L0;
		disable OnTrigger;
		@Trace("Volonteers Cleanup...");
		for (L0 = 0; L0 < f_2d9_a0_i(); L0++) {
			object L1;
			tv3->get(L1, L0);
			if (L1 != null) {
				L1->Remove();
			}
		}
	}

	void f_295_a0_v(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		object L4;
		object L5;
		int L6;
		@Trace("Volonteers Init...");
		@CreateIntVector(L0);
		@CreateObjectVector(L1);
		@CreateStringVector(L2);
		f_879_a3_v(L0, L1, L2);
		tv0 = L0;
		tv4 = L1;
		tv5 = L2;
		@CreateObjectVector(L3);
		@CreateObjectVector(L4);
		f_21_a2_v(L3, L4);
		tv1 = L3;
		tv2 = L4;
		@CreateObjectVector(L5);
		tv3 = L5;
		for (L6 = 0; L6 < f_2d9_a0_i(); L6++) {
			object L7;
			@SetVariable(f_2f5_a1_s(L6), 0);
			L7 = null;
			tv3->add(L7);
		}
		tv6 = 0;
		@Trace("Volonteers count: " + f_2d9_a0_i());
	}

	int f_2d9_a0_i(void)
	{
		int L0;
		tv0->size(L0);
		return L0;
	}

	int f_2de_a1_i(int a0)
	{
		int L0;
		for (L0 = 0; L0 < f_2d9_a0_i(); L0++) {
			int L1;
			tv0->get(L1, L0);
			if (a0 == L1) {
				return L0;
			}
		}
		return -1;
	}

	int f_2f0_a1_i(int a0)
	{
		int L0;
		tv0->get(L0, a0);
		return L0;
	}

	string f_2f5_a1_s(int a0)
	{
		int L0;
		tv0->get(L0, a0);
		return "vol_" + L0;
	}

	bool f_2fb_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		return (L0 & 32) != 0;
	}

	bool f_307_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		return (L0 & 2) != 0;
	}

	bool f_313_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		return (L0 & 1) == 0;
	}

	bool f_31f_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		return (L0 & 4) != 0;
	}

	void f_32b_a1_v(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		@SetVariable(f_2f5_a1_s(a0), L0 & 8 | 5);
		object L1;
		tv3->get(L1, a0);
		if (L1 == null) {
			object L2;
			string L3;
			L2 = f_427_a1_o(a0);
			L3 = f_63b_a1_s(f_2f0_a1_i(a0));
			L1 = f_449_a4_o(L2, "pt_volonteer_" + L3, "pers_birdmask", "vbirdmask_" + L3 + ".xml");
			tv3->set(a0, L1);
		}
		object L4;
		tv4->get(L4, a0);
		int L5;
		L4->size(L5);
		int L6;
		for (L6 = 0; L6 < L5; L6++) {
			string L7;
			L4->get(L7, L6);
			f_a93_a2_v(L7, 1);
		}
	}

	void f_371_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		@GetVariable(f_2f5_a1_s(a0), L0);
		@SetVariable(f_2f5_a1_s(a0), L0 | 32);
		tv4->get(L1, a0);
		L1->size(L2);
		for (L3 = 0; L3 < L2; L3++) {
			string L4;
			L1->get(L4, L3);
			f_a93_a2_v(L4, 0);
		}
	}

	void f_393_a1_v(int a0)
	{
		int L0;
		object L1;
		int L2;
		int L3;
		@GetVariable(f_2f5_a1_s(a0), L0);
		@SetVariable(f_2f5_a1_s(a0), (L0 | 32) - 32);
		tv4->get(L1, a0);
		L1->size(L2);
		for (L3 = 0; L3 < L2; L3++) {
			string L4;
			L1->get(L4, L3);
			f_a93_a2_v(L4, 1);
		}
	}

	void f_3b7_a1_v(int a0)
	{
		int L0;
		object L1;
		object L2;
		int L3;
		int L4;
		@GetVariable(f_2f5_a1_s(a0), L0);
		@SetVariable(f_2f5_a1_s(a0), (L0 | 4 | 1 | 2) - 4 - 1 - 2);
		tv3->get(L1, a0);
		if (L1 != null) {
			L1->Remove();
		}
		tv4->get(L2, a0);
		L2->size(L3);
		for (L4 = 0; L4 < L3; L4++) {
			string L5;
			L2->get(L5, L4);
			f_a93_a2_v(L5, 0);
		}
	}

	void f_3ea_a1_v(int a0)
	{
		int L0;
		@SetVariable(f_2f5_a1_s(a0), 17);
		object L1;
		tv3->get(L1, a0);
		if (L1 == null) {
			object L2;
			string L3;
			L2 = f_427_a1_o(a0);
			L3 = f_63b_a1_s(f_2f0_a1_i(a0));
			L1 = f_449_a4_o(L2, "pt_volonteer_" + L3, "pers_birdmask", "vbirdmask_" + L3 + ".xml");
			tv3->set(a0, L1);
		}
		object L4;
		tv4->get(L4, a0);
		int L5;
		L4->size(L5);
		int L6;
		for (L6 = 0; L6 < L5; L6++) {
			string L7;
			L4->get(L7, L6);
			f_a93_a2_v(L7, 2);
		}
	}

	object f_427_a1_o(int a0)
	{
		string L0;
		tv5->get(L0, a0);
		if (L0 == "outdoor") {
			object L1;
			@GetMainOutdoorScene(L1);
			return L1;
		}
		object L2;
		@GetSceneByName(L2, L0);
		return L2;
	}

	void f_437_a1_v(int a0)
	{
		int L0;
		@GetVariable(f_2f5_a1_s(a0), L0);
		@SetVariable(f_2f5_a1_s(a0), L0 & 8 | 3);
	}
}

object f_449_a4_o(object a0, string a1, string a2, string a3)
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

bool f_45b_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

float f_467_a0_f(void)
{
	float L0;
	@GetGameTime(L0);
	return L0;
}

int f_46c_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

int f_475_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return (int)L0 % 24;
}

bool f_47d_a1_b(int a0)
{
	return f_46c_a0_i() == a0;
}

int f_483_a1_i(string a0)
{
	@_strlwr(a0);
	if (a0 == "alexandr") {
		return 1;
	}
	if (a0 == "andrei") {
		return 2;
	}
	if (a0 == "anna") {
		return 3;
	}
	if (a0 == "bigvlad") {
		return 4;
	}
	if (a0 == "eva") {
		return 5;
	}
	if (a0 == "georg") {
		return 6;
	}
	if (a0 == "grif") {
		return 7;
	}
	if (a0 == "han") {
		return 8;
	}
	if (a0 == "julia") {
		return 9;
	}
	if (a0 == "kapella") {
		return 10;
	}
	if (a0 == "katerina") {
		return 11;
	}
	if (a0 == "klara") {
		return 12;
	}
	if (a0 == "lara") {
		return 13;
	}
	if (a0 == "laska") {
		return 14;
	}
	if (a0 == "maria") {
		return 15;
	}
	if (a0 == "mark") {
		return 16;
	}
	if (a0 == "mat") {
		return 17;
	}
	if (a0 == "mishka") {
		return 18;
	}
	if (a0 == "mladvlad") {
		return 19;
	}
	if (a0 == "notkin") {
		return 20;
	}
	if (a0 == "ospina") {
		return 21;
	}
	if (a0 == "petr") {
		return 22;
	}
	if (a0 == "rubin") {
		return 23;
	}
	if (a0 == "spi4ka") {
		return 24;
	}
	if (a0 == "starshina") {
		return 25;
	}
	if (a0 == "viktor") {
		return 26;
	}
	if (a0 == "wasted_woman") {
		return 27;
	}
	if (a0 == "wasted_male") {
		return 28;
	}
	if (a0 == "alkash") {
		return 29;
	}
	if (a0 == "boy") {
		return 30;
	}
	if (a0 == "girl") {
		return 31;
	}
	if (a0 == "littleboy") {
		return 32;
	}
	if (a0 == "littlegirl") {
		return 33;
	}
	if (a0 == "butcher") {
		return 34;
	}
	if (a0 == "dohodyaga") {
		return 35;
	}
	if (a0 == "unosha") {
		return 36;
	}
	if (a0 == "vaxxabit") {
		return 37;
	}
	if (a0 == "vaxxabitka") {
		return 38;
	}
	if (a0 == "woman") {
		return 39;
	}
	if (a0 == "worker") {
		return 40;
	}
	if (a0 == "whitemask") {
		return 42;
	}
	if (a0 == "birdmask") {
		return 43;
	}
	if (a0 == "birdmask") {
		return 44;
	}
	if (a0 == "patrol") {
		return 46;
	}
	if (a0 == "danko") {
		return 47;
	}
	if (a0 == "alkash_d") {
		return 48;
	}
	if (a0 == "boy_d") {
		return 49;
	}
	if (a0 == "butcher_d") {
		return 50;
	}
	if (a0 == "dohodyaga_d") {
		return 51;
	}
	if (a0 == "girl_d") {
		return 52;
	}
	if (a0 == "littleboy_d") {
		return 53;
	}
	if (a0 == "littlegirl_d") {
		return 54;
	}
	if (a0 == "unosha2") {
		return 55;
	}
	if (a0 == "unosha_d") {
		return 56;
	}
	if (a0 == "unosha2_d") {
		return 57;
	}
	if (a0 == "vaxxabit_d") {
		return 58;
	}
	if (a0 == "vaxxabitka_d") {
		return 59;
	}
	if (a0 == "wasted_male_d") {
		return 60;
	}
	if (a0 == "wasted_woman_d") {
		return 61;
	}
	if (a0 == "woman_d") {
		return 62;
	}
	if (a0 == "worker2") {
		return 63;
	}
	if (a0 == "worker_d") {
		return 64;
	}
	if (a0 == "worker2_d") {
		return 65;
	}
	if (a0 == "burah") {
		return 66;
	}
	if (a0 == "gorbun_daughter") {
		return 67;
	}
	if (a0 == "gorbun") {
		return 68;
	}
	if (a0 == "albinos") {
		return 69;
	}
	if (a0 == "aglaja") {
		return 70;
	}
	if (a0 == "nude") {
		return 71;
	}
	if (a0 == "block") {
		return 72;
	}
	if (a0 == "officer") {
		return 73;
	}
	if (a0 == "doberman") {
		return 74;
	}
	if (a0 == "grabitel") {
		return 75;
	}
	if (a0 == "gatherer_wife") {
		return 76;
	}
	if (a0 == "rat_prophet") {
		return 77;
	}
	if (a0 == "morlok") {
		return 78;
	}
	if (a0 == "soldier") {
		return 79;
	}
	if (a0 == "britva") {
		return 80;
	}
	if (a0 == "kabaktchik") {
		return 81;
	}
	if (a0 == "sanitar") {
		return 82;
	}
	if (a0 == "salesman") {
		return 83;
	}
	if (a0 == "ayyan") {
		return 84;
	}
	if (a0 == "petrbirdmask") {
		return 85;
	}
	if (a0 == "mogila") {
		return 86;
	}
	if (a0 == "klikusha") {
		return 87;
	}
	if (a0 == "karlik") {
		return 88;
	}
	if (a0 == "lisa") {
		return 89;
	}
	return -1;
}

string f_63b_a1_s(int a0)
{
	if (a0 == 1) {
		return "alexandr";
	}
	if (a0 == 2) {
		return "andrei";
	}
	if (a0 == 3) {
		return "anna";
	}
	if (a0 == 4) {
		return "bigvlad";
	}
	if (a0 == 5) {
		return "eva";
	}
	if (a0 == 6) {
		return "georg";
	}
	if (a0 == 7) {
		return "grif";
	}
	if (a0 == 8) {
		return "han";
	}
	if (a0 == 9) {
		return "julia";
	}
	if (a0 == 10) {
		return "kapella";
	}
	if (a0 == 11) {
		return "katerina";
	}
	if (a0 == 12) {
		return "klara";
	}
	if (a0 == 13) {
		return "lara";
	}
	if (a0 == 14) {
		return "laska";
	}
	if (a0 == 15) {
		return "maria";
	}
	if (a0 == 16) {
		return "mark";
	}
	if (a0 == 17) {
		return "mat";
	}
	if (a0 == 18) {
		return "mishka";
	}
	if (a0 == 19) {
		return "mladvlad";
	}
	if (a0 == 20) {
		return "notkin";
	}
	if (a0 == 21) {
		return "ospina";
	}
	if (a0 == 22) {
		return "petr";
	}
	if (a0 == 23) {
		return "rubin";
	}
	if (a0 == 24) {
		return "spi4ka";
	}
	if (a0 == 25) {
		return "starshina";
	}
	if (a0 == 26) {
		return "viktor";
	}
	if (a0 == 27) {
		return "wasted_woman";
	}
	if (a0 == 28) {
		return "wasted_male";
	}
	if (a0 == 29) {
		return "alkash";
	}
	if (a0 == 30) {
		return "boy";
	}
	if (a0 == 31) {
		return "girl";
	}
	if (a0 == 32) {
		return "littleboy";
	}
	if (a0 == 33) {
		return "littlegirl";
	}
	if (a0 == 34) {
		return "butcher";
	}
	if (a0 == 35) {
		return "dohodyaga";
	}
	if (a0 == 36) {
		return "unosha";
	}
	if (a0 == 37) {
		return "vaxxabit";
	}
	if (a0 == 38) {
		return "vaxxabitka";
	}
	if (a0 == 39) {
		return "woman";
	}
	if (a0 == 40) {
		return "worker";
	}
	if (a0 == 42) {
		return "whitemask";
	}
	if (a0 == 43) {
		return "birdmask";
	}
	if (a0 == 44) {
		return "birdmask";
	}
	if (a0 == 46) {
		return "patrol";
	}
	if (a0 == 47) {
		return "danko";
	}
	if (a0 == 48) {
		return "alkash_d";
	}
	if (a0 == 49) {
		return "boy_d";
	}
	if (a0 == 50) {
		return "butcher_d";
	}
	if (a0 == 51) {
		return "dohodyaga_d";
	}
	if (a0 == 52) {
		return "girl_d";
	}
	if (a0 == 53) {
		return "littleboy_d";
	}
	if (a0 == 54) {
		return "littlegirl_d";
	}
	if (a0 == 55) {
		return "unosha2";
	}
	if (a0 == 56) {
		return "unosha_d";
	}
	if (a0 == 57) {
		return "unosha2_d";
	}
	if (a0 == 58) {
		return "vaxxabit_d";
	}
	if (a0 == 59) {
		return "vaxxabitka_d";
	}
	if (a0 == 60) {
		return "wasted_male_d";
	}
	if (a0 == 61) {
		return "wasted_woman_d";
	}
	if (a0 == 62) {
		return "woman_d";
	}
	if (a0 == 63) {
		return "worker2";
	}
	if (a0 == 64) {
		return "worker_d";
	}
	if (a0 == 65) {
		return "worker2_d";
	}
	if (a0 == 66) {
		return "burah";
	}
	if (a0 == 67) {
		return "gorbun_daughter";
	}
	if (a0 == 68) {
		return "gorbun";
	}
	if (a0 == 69) {
		return "albinos";
	}
	if (a0 == 70) {
		return "aglaja";
	}
	if (a0 == 71) {
		return "nude";
	}
	if (a0 == 72) {
		return "block";
	}
	if (a0 == 73) {
		return "officer";
	}
	if (a0 == 74) {
		return "doberman";
	}
	if (a0 == 75) {
		return "grabitel";
	}
	if (a0 == 76) {
		return "gatherer_wife";
	}
	if (a0 == 77) {
		return "rat_prophet";
	}
	if (a0 == 78) {
		return "morlok";
	}
	if (a0 == 79) {
		return "soldier";
	}
	if (a0 == 80) {
		return "britva";
	}
	if (a0 == 81) {
		return "kabaktchik";
	}
	if (a0 == 82) {
		return "sanitar";
	}
	if (a0 == 83) {
		return "salesman";
	}
	if (a0 == 84) {
		return "ayyan";
	}
	if (a0 == 85) {
		return "petrbirdmask";
	}
	if (a0 == 86) {
		return "mogila";
	}
	if (a0 == 87) {
		return "klikusha";
	}
	if (a0 == 88) {
		return "karlik";
	}
	if (a0 == 89) {
		return "lisa";
	}
	return "";
}

bool f_7f1_a1_b(int a0)
{
	if (a0 == 18) {
		return true;
	}
	if (a0 == 24) {
		return true;
	}
	if (a0 == 20) {
		return true;
	}
	if (a0 == 14) {
		return true;
	}
	if (a0 == 10) {
		return true;
	}
	if (a0 == 17) {
		return true;
	}
	if (a0 == 8) {
		return true;
	}
	return false;
}

void f_817_a3_v(object a0, bool a1, int a2)
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

void f_838_a3_v(object a0, bool a1, int a2)
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

void f_859_a3_v(object a0, bool a1, int a2)
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

void f_879_a3_v(object a0, object a1, object a2)
{
	object L0;
	a0->add(1);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_alexandr@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(2);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("shouse1_kabak@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(3);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_anna@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(4);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_bigvlad@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(6);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_georg@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(15);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_maria@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(9);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_julia@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(10);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_kapella@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(11);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_katerina@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(13);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_lara@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(18);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("vagon_mishka@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(19);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_vlad@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(20);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("warehouse_notkin@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(21);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("dt_house_1_04@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(22);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_petr@door1");
		L0->add("house_petr@door2");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(24);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_spi4ka@door1");
		L0->add("house_spi4ka@door2");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(26);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_viktor@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(8);
	if (a1) {
		@CreateStringVector(L0);
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(14);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("storojka@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(17);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("termitnik_mat@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("termitnik");
	}
	a0->add(16);
	if (a1) {
		@CreateStringVector(L0);
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(7);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("warehouse_grif@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(23);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("warehouse_rubin@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(5);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_eva@door1");
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
	a0->add(25);
	if (a1) {
		@CreateStringVector(L0);
		a1->add(L0);
	}
	if (a2) {
		a2->add("outdoor");
	}
}

bool f_a22_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 4) != 0;
}

bool f_a2c_a1_b(int a0)
{
	int L0;
	@GetVariable("vol_" + a0, L0);
	return (L0 & 16) != 0;
}

int f_a36_a1_i(float a0)
{
	return f_a8b_a3_i(522709, 522708, a0);
}

int f_a3f_a1_i(float a0)
{
	return f_a8b_a3_i(522711, 522710, a0);
}

void f_a48_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 697, 1, 535405);
	f_a6f_a2_b(L0, 695);
}

void f_a55_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 698, 1, 535406);
	f_a6f_a2_b(L0, 696);
}

object f_a62_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_a6f_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_a62_a0_o();
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

int f_a8b_a3_i(int a0, int a1, float a2)
{
	int L0;
	@AddMessage(a0, a1, a2, L0);
	@SendWorldWndMessage(6);
	return L0;
}

void f_a93_a2_v(string a0, int a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("dlocked", a1);
	}
}

bool f_aa4_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_817_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_a2c_a1_b(L3) || f_a22_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_aca_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_838_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_a2c_a1_b(L3) || f_a22_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_af0_a0_b(void)
{
	object L0;
	int L1;
	int L2;
	@CreateIntVector(L0);
	f_859_a3_v(L0, false, -1);
	L0->size(L1);
	for (L2 = 0; L2 < L1; L2++) {
		int L3;
		L0->get(L3, L2);
		if (f_a2c_a1_b(L3) || f_a22_a1_b(L3)) {
			return false;
		}
	}
	return true;
}

bool f_b16_a0_b(void)
{
	int L0;
	L0 = 0;
	if (f_af0_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_aca_a0_b()) {
		L0 = L0 + 1;
	}
	if (f_aa4_a0_b()) {
		L0 = L0 + 1;
	}
	return L0 >= 2;
}

