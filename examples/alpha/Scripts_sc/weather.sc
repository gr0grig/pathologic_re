event OnTimer 7;
event OnConsole 1000;

maintask t0
{
	void init(void)
	{
		float L0;
		f_b5_a0_v();
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.0784313753247261, 0.0784313753247261, 0.0784313753247261], 3000.0, 5000.0, [0.03921568766236305, 0.03921568766236305, 0.03921568766236305], [0.03921568766236305, 0.03921568766236305, 0.03921568766236305]);
		@GetGameTime(L0);
		if (L0 < 5.989999771118164 || L0 > 6.010000228881836) {
			@Trace("Wrong time");
			return;
		}
		for (; ; ) {
			@GetGameTime(L0);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.3921568989753723, 0.25882354378700256, 0.25882354378700256], [0.3921568989753723, 0.25882354378700256, 0.25882354378700256], 3000.0, 5000.0, [0.7843137979507446, 0.5215686559677124, 0.4431372582912445], [0.7843137979507446, 0.5215686559677124, 0.4431372582912445], f_144_a2_f(8.0, L0));
			@GetGameTime(L0);
			@Sleep(f_144_a2_f(10.0, L0));
			@GetGameTime(L0);
			@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.3529411852359772, 0.3137255012989044, 0.2666666805744171], [0.3529411852359772, 0.3137255012989044, 0.2666666805744171], 3000.0, 5000.0, [0.7019608020782471, 0.6313725709915161, 0.5372549295425415], [0.7019608020782471, 0.6313725709915161, 0.5372549295425415], f_144_a2_f(11.0, L0));
			@GetGameTime(L0);
			@Sleep(f_144_a2_f(18.0, L0));
			@GetGameTime(L0);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.3529411852359772, 0.3137255012989044, 0.2666666805744171], [0.3529411852359772, 0.3137255012989044, 0.2666666805744171], 3000.0, 5000.0, [0.7843137979507446, 0.5215686559677124, 0.4431372582912445], [0.7843137979507446, 0.5215686559677124, 0.4431372582912445], f_144_a2_f(19.0, L0));
			@GetGameTime(L0);
			@Sleep(f_144_a2_f(20.0, L0));
			@GetGameTime(L0);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0784313753247261, 0.0784313753247261, 0.0784313753247261], [0.0784313753247261, 0.0784313753247261, 0.0784313753247261], 3000.0, 5000.0, [0.03921568766236305, 0.03921568766236305, 0.03921568766236305], [0.03921568766236305, 0.03921568766236305, 0.03921568766236305], f_144_a2_f(21.0, L0));
			@GetGameTime(L0);
			@Sleep(f_144_a2_f(6.0, L0));
		}
	}

	void f_b5_a0_v(void)
	{
		float L0;
		@rand(L0, 2, 20);
		@SetTimer(40, L0);
		@Trace("Forecast: rain begins in " + L0 + " hours");
	}

	void f_c4_a0_v(void)
	{
		float L0;
		@rand(L0, 1, 8);
		@SetTimer(41, L0);
		@Trace("Forecast: rain ends in " + L0 + " hours");
	}

	void f_d3_a0_v(void)
	{
		float L0;
		@rand(L0, 0.5, 1.0);
		@SetTimer(43, L0);
	}

	void OnTimer(int a0)
	{
		if (a0 == 40) {
			float L0;
			@KillTimer(40);
			@Rain();
			@rand(L0, 0.10000000149011612, 1);
			@ModLinear(L0, L0 * 2);
			f_c4_a0_v();
			f_d3_a0_v();
		} else {
			if (a0 == 41) {
				@KillTimer(41);
				@ModLinear(0, 2);
				@SetTimer(42, 2);
			} else {
				if (a0 == 42) {
					@KillTimer(42);
					@Bright();
					@ModNothing();
					f_b5_a0_v();
				} else {
					if (a0 == 43) {
						object L1;
						@GetActiveScene(L1);
						if (L1->FuncExist("CanPlayThunder", 1)) {
							bool L2;
							L1->CanPlayThunder(L2);
							if (L2) {
								float L3;
								@GetModifierLevel(L3);
								if (L3 > 0.30000001192092896) {
									int L4;
									@irand(L4, 3);
									@PlaySound("thunder" + (L4 + 1));
								}
							}
						}
						f_d3_a0_v();
					}
				}
			}
		}
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
			}
		}
	}
}

float f_144_a2_f(float a0, float a1)
{
	a1 = a1 % 24;
	if (a0 < a1) {
		return a0 + 24 - a1;
	}
	return a0 - a1;
}

