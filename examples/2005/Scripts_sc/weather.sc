event OnTimer 7;
event OnConsole 1000;
event OnRegionChange 8;
event OnTrigger 26;

var bool g0;

maintask t0
{
	var int tv0;
	var bool tv1;

	void init(void)
	{
		float L0;
		f_de_a0_v();
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.27450981736183167, 0.27450981736183167, 0.27450981736183167], 3000.0, 5000.0, [0.19607844948768616, 0.19607844948768616, 0.19607843458652496], [0.19607844948768616, 0.19607844948768616, 0.19607843458652496]);
		@GetGameTime(L0);
		if (L0 < 5.989999771118164 || L0 > 6.010000228881836) {
			@Trace("Wrong time");
			return;
		}
		for (; ; ) {
			@GetGameTime(L0);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.5098039507865906, 0.27450981736183167, 0.18039216101169586], [0.7058823704719543, 0.5058823823928833, 0.32156863808631897], 3000.0, 5000.0, [0.6000000238418579, 0.4392157196998596, 0.2823529541492462], [0.4862745404243469, 0.34117648005485535, 0.21176470816135406], f_2ae_a2_f(8.0, L0));
			@GetGameTime(L0);
			@Sleep(f_2ae_a2_f(10.0, L0));
			@GetGameTime(L0);
			if (f_282_a0_i() < 3 || f_282_a0_i() == 12) {
				@ChangeWeather("day_clear_bk.tex", "day_clear_ft.tex", "day_clear_lt.tex", "day_clear_rt.tex", "day_clear_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.3921568989753723, 0.3921568989753723, 0.3921568691730499], [0.5882353186607361, 0.5098039507865906, 0.47058823704719543], 3000.0, 5000.0, [0.5882353186607361, 0.5098039507865906, 0.4313725531101227], [0.37254902720451355, 0.32549020648002625, 0.29019609093666077], f_2ae_a2_f(11.0, L0));
			} else {
				@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.2352941334247589, 0.2039215862751007, 0.16862745583057404], [0.5882353186607361, 0.5490196347236633, 0.3921568691730499], 3000.0, 5000.0, [0.364705890417099, 0.34117648005485535, 0.25882354378700256], [0.37254902720451355, 0.32549020648002625, 0.29019609093666077], f_2ae_a2_f(11.0, L0));
			}
			@GetGameTime(L0);
			@Sleep(f_2ae_a2_f(18.0, L0));
			@GetGameTime(L0);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.5098039507865906, 0.27450981736183167, 0.18039216101169586], [0.7058823704719543, 0.5058823823928833, 0.32156863808631897], 3000.0, 5000.0, [0.6000000238418579, 0.4392157196998596, 0.2823529541492462], [0.4862745404243469, 0.34117648005485535, 0.21176470816135406], f_2ae_a2_f(19.0, L0));
			@GetGameTime(L0);
			@Sleep(f_2ae_a2_f(20.0, L0));
			@GetGameTime(L0);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.27450981736183167, 0.27450981736183167, 0.27450981736183167], 3000.0, 5000.0, [0.19607844948768616, 0.19607844948768616, 0.19607843458652496], [0.19607844948768616, 0.19607844948768616, 0.19607843458652496], f_2ae_a2_f(21.0, L0));
			@GetGameTime(L0);
			@Sleep(f_2ae_a2_f(6.0, L0));
		}
	}

	void f_de_a0_v(void)
	{
		float L0;
		@rand(L0, 2, 20);
		@SetTimer(40, L0);
		@Trace("Forecast: rain begins in " + L0 + " hours");
	}

	void f_ed_a0_v(void)
	{
		float L0;
		@rand(L0, 1, 8);
		@SetTimer(41, L0);
		@Trace("Forecast: rain ends in " + L0 + " hours");
	}

	void f_fc_a0_v(void)
	{
		float L0;
		@rand(L0, 60, 120);
		@SetTimer(43, f_28b_a1_f(L0));
	}

	void f_109_a0_v(void)
	{
		@KillTimer(43);
	}

	void OnTimer(int a0)
	{
		if (a0 == 40) {
			float L0;
			@KillTimer(40);
			@Rain();
			@rand(L0, 0.20000000298023224, 1);
			f_fc_a0_v();
			@ModLinear(L0, L0 * 2);
			f_ed_a0_v();
		} else {
			if (a0 == 41) {
				@KillTimer(41);
				@ModLinear(0, 2);
				@SetTimer(42, 2);
			} else {
				if (a0 == 42) {
					f_109_a0_v();
					@KillTimer(42);
					@Bright();
					@ModNothing();
					f_de_a0_v();
				} else {
					if (a0 == 43) {
						f_fc_a0_v();
						if (!g0) {
							float L1;
							@GetModifierLevel(L1);
							if (L1 > 0.30000001192092896) {
								f_1c2_a1_v(false);
							}
						}
					} else {
						if (a0 >= 52 && a0 < 60) {
							float L2;
							@KillTimer(a0);
							if ((a0 - 52) % 2) {
								@SetAmbientMod([1.0, 1.0, 0.7176470756530762]);
							} else {
								@SetAmbientMod([0.0, 0.0, 0.0]);
							}
							@rand(L2, 0.009999999776482582, 0.014999999664723873);
							@SetTimer(a0 + 1, f_28b_a1_f(L2));
						} else {
							if (a0 == 60) {
								float L3;
								@KillTimer(a0);
								@SetAmbientMod([0.0, 0.0, 0.0]);
								if (tv1) {
									tv1 = false;
									L3 = 0.10000000149011612;
								} else {
									@rand(L3, 2, 3);
								}
								@SetTimer(50, f_28b_a1_f(L3));
							} else {
								if (a0 == 50) {
									object L4;
									@KillTimer(50);
									@GetActiveScene(L4);
									if (L4->FuncExist("CanPlayThunder", 1)) {
										bool L5;
										L4->CanPlayThunder(L5);
										if (L5) {
											int L6;
											@irand(L6, 3);
											@PlaySound("thunder" + (L6 + 1));
										}
									}
									@SetTimer(51, f_28b_a1_f(6));
								} else {
									if (a0 == 51) {
										@KillTimer(51);
										g0 = false;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_1c2_a1_v(bool a0)
	{
		float L0;
		g0 = true;
		@SetAmbientMod([1.0, 1.0, 0.7176470756530762]);
		if (a0) {
			L0 = 0.014999999664723873;
		} else {
			@rand(L0, 0.009999999776482582, 0.014999999664723873);
		}
		tv1 = a0;
		@SetTimer(52, f_28b_a1_f(L0));
	}

	void OnConsole(string a0, string a1)
	{
		if (a0 == "rain") {
			OnTimer(40);
		} else {
			if (a0 == "wmod_level") {
				float L0;
				@GetModifierLevel(L0);
				@Trace("Level: " + L0);
			} else {
				if (a0 == "wdisease") {
					f_257_a0_v();
				} else {
					if (a0 == "wnormal") {
						f_224_a0_v();
					} else {
						if (a0 == "lightning") {
							if (!g0) {
								f_1c2_a1_v(false);
							}
						}
					}
				}
			}
		}
	}

	void OnRegionChange(int a0)
	{
		if (a0 == -1) {
			f_224_a0_v();
		} else {
			if (f_296_a1_b(a0)) {
				f_257_a0_v();
			} else {
				if (f_2a2_a1_b(a0)) {
					f_238_a0_v();
				} else {
					f_224_a0_v();
				}
			}
		}
	}

	void f_224_a0_v(void)
	{
		int L0;
		if (tv0 == 0) {
			return;
		}
		tv0 = 0;
		for (L0 = 0; L0 < 3; L0 = L0 + 1) {
			Vector L1;
			@GetColorMod(L1, L0);
			@LinearColorMod(L0, L1, [1.0, 1.0, 1.0], 0.20000000298023224);
		}
	}

	void f_238_a0_v(void)
	{
		Vector L0;
		if (tv0 == 2) {
			return;
		}
		tv0 = 2;
		@GetColorMod(L0, 0);
		@LinearColorMod(0, L0, [1.5563921928405762, 1.2026666402816772, 0.2379607856273651], 0.20000000298023224);
		@GetColorMod(L0, 1);
		@LinearColorMod(1, L0, [1.5563921928405762, 1.2026666402816772, 0.2379607856273651], 0.20000000298023224);
		@GetColorMod(L0, 2);
		@LinearColorMod(2, L0, [1.5563921928405762, 1.2026666402816772, 0.2379607856273651], 0.20000000298023224);
	}

	void f_257_a0_v(void)
	{
		Vector L0;
		if (tv0 == 1) {
			return;
		}
		tv0 = 1;
		@GetColorMod(L0, 0);
		@LinearColorMod(0, L0, [0.7058823704719543, 1.0, 0.9098039269447327], 0.20000000298023224);
		@GetColorMod(L0, 1);
		@LinearColorMod(1, L0, [0.7058823704719543, 1.0, 0.9098039269447327], 0.20000000298023224);
		@GetColorMod(L0, 2);
		@LinearColorMod(2, L0, [0.7058823704719543, 1.0, 0.9098039269447327], 0.20000000298023224);
	}

	void OnTrigger(string a0)
	{
		if (a0 == "lightning") {
			if (!g0) {
				f_1c2_a1_v(true);
			}
		}
	}
}

int f_282_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

float f_28b_a1_f(float a0)
{
	float L0;
	@GetGameTimeScale(L0);
	return a0 * L0;
}

string f_290_a1_s(int a0)
{
	return "Region" + a0 + "State";
}

bool f_296_a1_b(int a0)
{
	int L0;
	@GetVariable(f_290_a1_s(a0), L0);
	return (L0 & 3) == 1;
}

bool f_2a2_a1_b(int a0)
{
	int L0;
	@GetVariable(f_290_a1_s(a0), L0);
	return (L0 & 3) == 2;
}

float f_2ae_a2_f(float a0, float a1)
{
	a1 = a1 % 24;
	if (a0 < a1) {
		return a0 + 24 - a1;
	}
	return a0 - a1;
}

