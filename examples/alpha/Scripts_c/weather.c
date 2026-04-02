maintask task_0
{
	void init(void)
	{
		func_181();
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.078431375, 0.078431375, 0.078431375], 3000.0, 5000.0, [0.039215688, 0.039215688, 0.039215688], [0.039215688, 0.039215688, 0.039215688]);
		float var_1_float;
		@GetGameTime(var_1_float);
		bool var_28_bool = true;
		var_30_bool = var_1_float < 5.99;
		if(var_30_bool != 1) {
			var_32_bool = var_1_float > 6.01;
			if(var_32_bool != 1)
				var_28_bool = false;
		}
		if(var_28_bool != 0)
			@Trace("Wrong time");
		for(;;) {
			@GetGameTime(var_1_float);
			float var_51_float; float var_53_float;
			func_324(var_51_float, 8.0, var_53_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.3921569, 0.25882354, 0.25882354], [0.3921569, 0.25882354, 0.25882354], 3000.0, 5000.0, [0.7843138, 0.52156866, 0.44313726], [0.7843138, 0.52156866, 0.44313726], var_51_float);
			@GetGameTime(var_53_float);
			float var_58_float; float var_60_float;
			func_324(var_58_float, 10.0, var_60_float);
			@Sleep(var_58_float);
			@GetGameTime(var_60_float);
			float var_78_float; float var_80_float;
			func_324(var_78_float, 11.0, var_80_float);
			@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.3529412, 0.3137255, 0.26666668], [0.3529412, 0.3137255, 0.26666668], 3000.0, 5000.0, [0.7019608, 0.6313726, 0.5372549], [0.7019608, 0.6313726, 0.5372549], var_78_float);
			@GetGameTime(var_80_float);
			float var_81_float; float var_83_float;
			func_324(var_81_float, 18.0, var_83_float);
			@Sleep(var_81_float);
			@GetGameTime(var_83_float);
			float var_101_float; float var_103_float;
			func_324(var_101_float, 19.0, var_103_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.3529412, 0.3137255, 0.26666668], [0.3529412, 0.3137255, 0.26666668], 3000.0, 5000.0, [0.7843138, 0.52156866, 0.44313726], [0.7843138, 0.52156866, 0.44313726], var_101_float);
			@GetGameTime(var_103_float);
			float var_104_float; float var_106_float;
			func_324(var_104_float, 20.0, var_106_float);
			@Sleep(var_104_float);
			@GetGameTime(var_106_float);
			float var_124_float; float var_126_float;
			func_324(var_124_float, 21.0, var_126_float);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.078431375, 0.078431375, 0.078431375], [0.078431375, 0.078431375, 0.078431375], 3000.0, 5000.0, [0.039215688, 0.039215688, 0.039215688], [0.039215688, 0.039215688, 0.039215688], var_124_float);
			@GetGameTime(var_126_float);
			float var_127_float; float var_129_float;
			var_1_float = var_129_float;
			func_324(var_127_float, 6.0, var_129_float);
			@Sleep(var_127_float);
		}
	}
	EMIT "Return(); Pop(2)";

		void OnTimer(string var_0_string, string var_1_string, float var_2_float, float var_3_float, int var_6_int)
		{
		float var_12_float; object var_13_object; bool var_14_bool; float var_15_float; int var_16_int;
		if(var_6_int == 40) {
			@KillTimer(40);
			@Rain();
			@rand(var_12_float, 0.1, 1);
			@ModLinear(var_12_float, (var_12_float * 2));
			func_196();
			func_211();
		} else if(var_6_int == 41) {
				@KillTimer(41);
				@ModLinear(0, 2);
				@SetTimer(42, 2);
		}

	
		if(var_6_int == 42) {
			@KillTimer(42);
			@Bright();
			@ModNothing();
			func_181();
		} else if(var_6_int == 43) {
			@GetActiveScene(var_13_object);
			var_61_bool = IsFuncExist(var_13_object, "CanPlayThunder", 1);
			if(var_61_bool != 0) {
			var_13_object->CanPlayThunder(var_14_bool);
			if(var_14_bool != 0) {
			@GetModifierLevel(var_15_float);
			if(var_15_float > 0.3) {
			@irand(var_16_int, 3);
			@PlaySound("thunder" + (var_16_int + 1));
			}
			}
		}
		}
		func_211();
		var_13_object = null;
		}

	void OnConsole(string var_0_string, string var_1_string)
	{
		float var_3_float;
		if(var_0_string == "rain") {
			int var_6_int = 40;
			func_220();
		} else if(var_0_string == "wmod_level") {
			@GetModifierLevel(var_3_float);
			@Trace("Level: " + var_3_float);
		}
	
	}

}


void func_211(void)
{
	float var_34_float;
	@rand(var_34_float, 0.5, 1.0);
	@SetTimer(43, var_34_float);
}


void func_196(void)
{
	float var_25_float;
	@rand(var_25_float, 1, 8);
	@SetTimer(41, var_25_float);
	@Trace(("Forecast: rain ends in " + var_25_float) + " hours");
}


void func_181(void)
{
	float var_3_float;
	@rand(var_3_float, 2, 20);
	@SetTimer(40, var_3_float);
	@Trace(("Forecast: rain begins in " + var_3_float) + " hours");
}


// @pe
void func_324(float var_51_float, float var_52_float, float var_53_float)
{
	var_53_float = var_53_float % 24;
	if(var_52_float < var_53_float)
		var_51_float = (var_52_float + 24) - var_53_float;
	var_51_float = var_52_float - var_53_float;
}


