event OnTimer 7;
event OnMusicChange 12;
event OnRegionChange 8;

maintask t0
{
	var string tv0;
	var string tv1;
	var string tv2;

	void init(void)
	{
		@sync();
		@SetTimer(0, 15);
		for (; ; ) {
			if (f_74_a1_b(false)) {
				@WaitForMusicEnd1();
			} else {
				@Sleep(1);
			}
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 0) {
			@Trace("Music time limit reached");
			if (tv1 != "") {
				string L0;
				L0 = f_3f_a0_s();
				if (tv0 == L0) {
					if (f_ae_a1_b(L0)) {
						return;
					}
				} else {
					if (tv0 != "horror" && L0 != "horror") {
						if (f_ae_a1_b(L0)) {
							return;
						}
					}
				}
				f_74_a1_b(true);
			}
		}
	}

	string f_3f_a0_s(void)
	{
		bool L0;
		@HasMusicAttribute(L0, "id");
		if (L0) {
			string L1;
			int L2;
			int L3;
			@GetMusicAttribute(L1, "id");
			@_strtoi(L2, L1);
			@GetVariable(f_140_a1_s(L2 - 1), L3);
			L3 = L3 & 3;
			if (L3 == 1 || L3 == 2) {
				return "horror";
			} else {
				float L4;
				@GetGameTime(L4);
				L4 = L4 % 24;
				return L4 >= 9 && L4 <= 19 ? "day" : "night";
			}
		}
		return "general";
	}

	bool f_74_a1_b(bool a0)
	{
		bool L0;
		tv0 = f_3f_a0_s();
		@HasMusicValue(L0, tv0, "music");
		if (L0) {
			string L1;
			@GetMusicValue(L1, tv0, "music");
			f_91_a3_v(tv0, L1, a0);
			return true;
		}
		f_91_a3_v(tv0, "", a0);
		return false;
	}

	void f_91_a3_v(string a0, string a1, bool a2)
	{
		tv1 = a1;
		if (a1 != "") {
			@Trace("Playing: '" + a1 + "' from category: " + a0);
			if (a2) {
				@SwitchMusic1(a1);
			} else {
				@PlayMusic1(a1);
			}
		}
		tv2 = f_146_a1_s(a0);
		@Trace("Chosen agressive: " + tv2);
	}

	bool f_ae_a1_b(string a0)
	{
		bool L0;
		@HasMusicValue(L0, a0, "music");
		if (L0) {
			string L1;
			@GetMusicValue(L1, a0, "music");
			return tv1 == L1;
		}
		return false;
	}

	void f_bb_a0_v(void)
	{
		@KillTimer(0);
	}

	void OnMusicChange(string a0)
	{
		if (a0 == "attack") {
			if (tv2 != "") {
				f_bb_a0_v();
				t1{tv2};
				@SetTimer(0, 15);
			}
		} else {
			f_bb_a0_v();
			t2{a0};
		}
	}

	void OnRegionChange(void)
	{
		if (!f_ae_a1_b(f_3f_a0_s())) {
			@StopMusic1();
		}
	}
}

task t1
{
	var bool tv0;
	var object tv1;

	void init(string a0)
	{
		@SetTimer(1, 10);
		tv0 = false;
		@GetActiveScene(tv1);
		@SwitchMusic1(a0, true);
		@WaitForMusicEnd1();
		while (!tv0) {
			@PlayMusic1(a0, true);
			@WaitForMusicEnd1();
		}
	}

	void OnMusicChange(string a0)
	{
		if (a0 == "attack") {
			@SetTimer(1, 10);
			tv0 = false;
		} else {
			if (a0 != "") {
				f_123_a0_v();
				t2{a0};
			}
		}
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			@FadeMusic1(2);
			@KillTimer(1);
			tv0 = true;
		}
	}

	void f_123_a0_v(void)
	{
		tv0 = true;
		@KillTimer(1);
	}

	void OnRegionChange(void)
	{
		object L0;
		@GetActiveScene(L0);
		if (tv1 != L0) {
			tv0 = true;
			@StopMusic1();
		}
	}
}

task t2
{
	void init(string a0)
	{
		@PlayMusic1(a0);
		@WaitForMusicEnd1();
	}

	void OnMusicChange(string a0)
	{
		if (a0 == "") {
			@FadeMusic1(1);
		}
	}
}

string f_140_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

string f_146_a1_s(string a0)
{
	int L0;
	for (L0 = 0; ; L0 = L0 + 1) {
		bool L1;
		@HasMusicValue(L1, a0, "agressive" + (L0 + 1));
		if (!L1) {
			break;
		}
	}
	if (L0) {
		int L2;
		string L3;
		@irand(L2, L0);
		@GetMusicValue(L3, a0, "agressive" + (L2 + 1));
		return L3;
	}
	return "";
}

