event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var int tv4;

	void f_0_a1_v(object a0)
	{
		int L0;
		for (L0 = 0; L0 < 12; L0++) {
			object L1;
			@CreateIntVector(L1);
			a0->add(L1);
		}
		object L2;
		a0->get(L2, 0);
		a0->get(L2, 1);
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(21));
		a0->get(L2, 2);
		L2->add(f_2e6_a1_i(2));
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(13));
		L2->add(f_2e6_a1_i(24));
		a0->get(L2, 3);
		L2->add(f_2e6_a1_i(10));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(20));
		L2->add(f_2e6_a1_i(24));
		L2->add(f_2e6_a1_i(26));
		a0->get(L2, 4);
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(10));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(20));
		L2->add(f_2e6_a1_i(21));
		L2->add(f_2e6_a1_i(24));
		a0->get(L2, 5);
		L2->add(f_2e6_a1_i(20));
		a0->get(L2, 6);
		L2->add(f_2e6_a1_i(3));
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(10));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(13));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(19));
		L2->add(f_2e6_a1_i(20));
		L2->add(f_2e6_a1_i(21));
		L2->add(f_2e6_a1_i(24));
		L2->add(f_2e6_a1_i(26));
		a0->get(L2, 7);
		L2->add(f_2e6_a1_i(3));
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(13));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(19));
		L2->add(f_2e6_a1_i(20));
		L2->add(f_2e6_a1_i(21));
		L2->add(f_2e6_a1_i(24));
		L2->add(f_2e6_a1_i(26));
		a0->get(L2, 8);
		L2->add(f_2e6_a1_i(3));
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(10));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(13));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(19));
		L2->add(f_2e6_a1_i(20));
		L2->add(f_2e6_a1_i(21));
		L2->add(f_2e6_a1_i(24));
		a0->get(L2, 9);
		L2->add(f_2e6_a1_i(3));
		L2->add(f_2e6_a1_i(9));
		L2->add(f_2e6_a1_i(10));
		L2->add(f_2e6_a1_i(11));
		L2->add(f_2e6_a1_i(13));
		L2->add(f_2e6_a1_i(18));
		L2->add(f_2e6_a1_i(19));
		L2->add(f_2e6_a1_i(21));
		L2->add(f_2e6_a1_i(24));
	}

	int f_19b_a1_i(int a0)
	{
		return 2;
	}

	void init(void)
	{
		f_2a7_a0_v();
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0, string a1)
	{
		@Trace(a0);
		if (a0 == "rescue") {
			f_358_a1_v(f_2e6_a1_i(f_3b4_a1_i(a1)));
		} else {
			if (a0 == "rescue_locked") {
				int L0;
				for (L0 = 0; L0 < f_2e1_a0_i(); L0++) {
					if (f_303_a1_b(L0)) {
						f_358_a1_v(L0);
					}
				}
			} else {
				if (a0 == "update") {
					f_210_a0_v();
				} else {
					if (a0 == "cleanup") {
						f_291_a0_v();
					}
				}
			}
		}
	}

	void f_1dc_a2_v(int a0, int a1)
	{
		int L0;
		for (L0 = 0; L0 < a0; L0++) {
			f_1e8_a1_i(a1);
		}
	}

	int f_1e8_a1_i(int a0)
	{
		object L0;
		int L1;
		int L2;
		int L3;
		tv1->get(L0, a0);
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
			L4 = (L3 + L2) % L1;
			L0->get(L5, L4);
			if (f_30f_a1_b(L5)) {
				f_380_a1_v(L5);
				return L5;
			}
		}
		return -1;
	}

	void f_210_a0_v(void)
	{
		@Trace("Volonteers update...");
		int L0;
		for (L0 = 0; L0 < f_2e1_a0_i(); L0++) {
			int L1;
			L1 = f_2f8_a1_i(L0);
			if (f_303_a1_b(L0)) {
				f_327_a1_v(L0);
			}
			if (f_31b_a1_b(L0)) {
				object L2;
				int L3;
				int L4;
				tv3->get(L2, L0);
				L2->size(L3);
				for (L4 = 0; L4 < L3; L4++) {
					string L5;
					L2->get(L5, L4);
					f_3a4_a2_v(L5, true);
				}
			}
		}
		tv4 = tv4 + 1;
		f_1dc_a2_v(f_19b_a1_i(tv4), tv4);
		int L6;
		L6 = 0;
		int L7;
		for (L7 = 0; L7 < f_2e1_a0_i(); L7++) {
			int L8;
			L8 = f_2f8_a1_i(L7);
			if (f_303_a1_b(L7)) {
				@Trace("Volonteer : " + f_51c_a1_s(L8));
				L6 = L6 + 1;
			}
		}
		int L9;
		L9 = 0;
		int L10;
		for (L10 = 0; L10 < f_2e1_a0_i(); L10++) {
			int L11;
			L11 = f_2f8_a1_i(L10);
			if (f_31b_a1_b(L10)) {
				L9 = L9 + 1;
				@Trace("Diseased volonteer : " + f_51c_a1_s(L11));
			}
		}
		@Trace("Today volonteers: " + L6 + ", diseased: " + L9);
	}

	void f_291_a0_v(void)
	{
		int L0;
		disable OnTrigger;
		@Trace("Volonteers Cleanup...");
		for (L0 = 0; L0 < f_2e1_a0_i(); L0++) {
			object L1;
			tv2->get(L1, L0);
			if (L1 != null) {
				L1->Remove();
			}
		}
	}

	void f_2a7_a0_v(void)
	{
		object L0;
		object L1;
		object L2;
		object L3;
		int L4;
		@Trace("Volonteers Init...");
		@CreateIntVector(L0);
		@CreateObjectVector(L1);
		f_682_a2_v(L0, L1);
		tv0 = L0;
		tv3 = L1;
		@CreateObjectVector(L2);
		f_0_a1_v(L2);
		tv1 = L2;
		@CreateObjectVector(L3);
		tv2 = L3;
		for (L4 = 0; L4 < f_2e1_a0_i(); L4++) {
			object L5;
			@SetVariable(f_2fd_a1_s(L4), 0);
			L5 = null;
			tv2->add(L5);
		}
		tv4 = 0;
		@Trace("Volonteers count: " + f_2e1_a0_i());
	}

	int f_2e1_a0_i(void)
	{
		int L0;
		tv0->size(L0);
		return L0;
	}

	int f_2e6_a1_i(int a0)
	{
		int L0;
		for (L0 = 0; L0 < f_2e1_a0_i(); L0++) {
			int L1;
			tv0->get(L1, L0);
			if (a0 == L1) {
				return L0;
			}
		}
		return -1;
	}

	int f_2f8_a1_i(int a0)
	{
		int L0;
		tv0->get(L0, a0);
		return L0;
	}

	string f_2fd_a1_s(int a0)
	{
		int L0;
		tv0->get(L0, a0);
		return "vol_" + L0;
	}

	bool f_303_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2fd_a1_s(a0), L0);
		return (L0 & 2) != 0;
	}

	bool f_30f_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2fd_a1_s(a0), L0);
		return (L0 & 1) == 0;
	}

	bool f_31b_a1_b(int a0)
	{
		int L0;
		@GetVariable(f_2fd_a1_s(a0), L0);
		return (L0 & 4) != 0;
	}

	void f_327_a1_v(int a0)
	{
		int L0;
		object L1;
		@GetVariable(f_2fd_a1_s(a0), L0);
		@SetVariable(f_2fd_a1_s(a0), L0 & 8 | 5);
		tv2->get(L1, a0);
		if (L1 == null) {
			object L2;
			string L3;
			@GetMainOutdoorScene(L2);
			L3 = f_51c_a1_s(f_2f8_a1_i(a0));
			L1 = f_392_a4_o(L2, "pt_volonteer_" + L3, "pers_birdmask", "vbirdmask_" + L3 + ".xml");
			tv2->set(a0, L1);
		}
	}

	void f_358_a1_v(int a0)
	{
		int L0;
		object L1;
		object L2;
		int L3;
		int L4;
		@GetVariable(f_2fd_a1_s(a0), L0);
		@SetVariable(f_2fd_a1_s(a0), 1);
		tv2->get(L1, a0);
		if (L1 != null) {
			L1->Remove();
		}
		tv3->get(L2, a0);
		L2->size(L3);
		for (L4 = 0; L4 < L3; L4++) {
			string L5;
			L2->get(L5, L4);
			f_3a4_a2_v(L5, false);
		}
	}

	void f_380_a1_v(int a0)
	{
		int L0;
		@GetVariable(f_2fd_a1_s(a0), L0);
		@SetVariable(f_2fd_a1_s(a0), L0 & 8 | 3);
	}
}

object f_392_a4_o(object a0, string a1, string a2, string a3)
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

void f_3a4_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

int f_3b4_a1_i(string a0)
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
	return -1;
}

string f_51c_a1_s(int a0)
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
	return "";
}

void f_682_a2_v(object a0, object a1)
{
	object L0;
	a0->add(1);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_alexandr@door1");
		a1->add(L0);
	}
	a0->add(2);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("shouse1_kabak@door1");
		a1->add(L0);
	}
	a0->add(3);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_anna@door1");
		a1->add(L0);
	}
	a0->add(4);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_bigvad@door1");
		a1->add(L0);
	}
	a0->add(6);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_georg@door1");
		L0->add("cot_georg@door2");
		a1->add(L0);
	}
	a0->add(9);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_julia@door1");
		a1->add(L0);
	}
	a0->add(10);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_kapella@door1");
		a1->add(L0);
	}
	a0->add(11);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_katerina@door1");
		a1->add(L0);
	}
	a0->add(13);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_lara@door1");
		a1->add(L0);
	}
	a0->add(18);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("vagon_mishka@door1");
		a1->add(L0);
	}
	a0->add(19);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_vlad@door1");
		a1->add(L0);
	}
	a0->add(20);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("warehouse_notkin@door1");
		a1->add(L0);
	}
	a0->add(21);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("dt_house_1_04@door1");
		a1->add(L0);
	}
	a0->add(22);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_petr@door1");
		a1->add(L0);
	}
	a0->add(24);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("house_spi4ka@door1");
		L0->add("house_spi4ka@door2");
		a1->add(L0);
	}
	a0->add(26);
	if (a1) {
		@CreateStringVector(L0);
		L0->add("cot_viktor@door1");
		L0->add("cot_viktor@door2");
		a1->add(L0);
	}
}

