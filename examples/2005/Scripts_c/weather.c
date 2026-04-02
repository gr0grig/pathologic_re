// @GLOBALS: 0:bool:

maintask task_0
{
	void init(int var_0_int, bool var_1_bool)
	{
		func_222();
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.27450982, 0.27450982, 0.27450982], 3000.0, 5000.0, [0.19607845, 0.19607845, 0.19607843], [0.19607845, 0.19607845, 0.19607843]);
		float var_3_float;
		@GetGameTime(var_3_float);
		bool var_30_bool = true;
		var_32_bool = var_3_float < 5.99;
		if(var_32_bool != 1) {
			var_34_bool = var_3_float > 6.01;
			if(var_34_bool != 1)
				var_30_bool = false;
		}
		if(var_30_bool != 0)
			@Trace("Wrong time");
		for(;;) {
			@GetGameTime(var_3_float);
			float var_53_float; float var_55_float;
			func_686(var_53_float, 8.0, var_55_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.50980395, 0.27450982, 0.18039216], [0.7058824, 0.5058824, 0.32156864], 3000.0, 5000.0, [0.6, 0.43921572, 0.28235295], [0.48627454, 0.34117648, 0.21176471], var_53_float);
			@GetGameTime(var_55_float);
			float var_60_float; float var_62_float;
			func_686(var_60_float, 10.0, var_62_float);
			@Sleep(var_60_float);
			@GetGameTime(var_62_float);
			bool var_63_bool = true;
			int var_64_int;
			func_642(var_64_int);
			var_71_bool = var_64_int < 3;
			if(var_71_bool != 1) {
				int var_72_int;
				func_642(var_72_int);
				var_74_bool = var_72_int == 12;
				if(var_74_bool != 1)
					var_63_bool = false;
			}
			if(var_63_bool != 0) {
				float var_92_float; float var_94_float;
				var_3_float = var_94_float;
				func_686(var_92_float, 11.0, var_94_float);
				@ChangeWeather("day_clear_bk.tex", "day_clear_ft.tex", "day_clear_lt.tex", "day_clear_rt.tex", "day_clear_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.3921569, 0.3921569, 0.39215687], [0.5882353, 0.50980395, 0.47058824], 3000.0, 5000.0, [0.5882353, 0.50980395, 0.43137255], [0.37254903, 0.3254902, 0.2901961], var_92_float);
			} else {
			float var_161_float; float var_163_float;
			func_686(var_161_float, 11.0, var_163_float);
			@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.23529413, 0.20392159, 0.16862746], [0.5882353, 0.54901963, 0.39215687], 3000.0, 5000.0, [0.3647059, 0.34117648, 0.25882354], [0.37254903, 0.3254902, 0.2901961], var_161_float);
			}
			@GetGameTime(var_163_float);
			float var_95_float; float var_97_float;
			func_686(var_95_float, 18.0, var_97_float);
			@Sleep(var_95_float);
			@GetGameTime(var_97_float);
			float var_115_float; float var_117_float;
			func_686(var_115_float, 19.0, var_117_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.50980395, 0.27450982, 0.18039216], [0.7058824, 0.5058824, 0.32156864], 3000.0, 5000.0, [0.6, 0.43921572, 0.28235295], [0.48627454, 0.34117648, 0.21176471], var_115_float);
			@GetGameTime(var_117_float);
			float var_118_float; float var_120_float;
			func_686(var_118_float, 20.0, var_120_float);
			@Sleep(var_118_float);
			@GetGameTime(var_120_float);
			float var_138_float; float var_140_float;
			func_686(var_138_float, 21.0, var_140_float);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.27450982, 0.27450982, 0.27450982], 3000.0, 5000.0, [0.19607845, 0.19607845, 0.19607843], [0.19607845, 0.19607845, 0.19607843], var_138_float);
			@GetGameTime(var_140_float);
			float var_141_float; float var_143_float;
			var_3_float = var_143_float;
			func_686(var_141_float, 6.0, var_143_float);
			@Sleep(var_141_float);
		}
	
	}
	EMIT "Return(); Pop(2)";

		void OnTimer(int iID, bool var_1_bool, string var_2_string, string var_3_string, float var_4_float, float var_5_float, int var_8_int)
		{
		float var_16_float; float var_17_float; float var_19_float; object var_20_object; bool var_21_bool; int var_22_int;
		if(var_8_int == 40) {
			@KillTimer(40);
			@Rain();
			@rand(var_16_float, 0.2, 1);
			func_252();
			@ModLinear(var_16_float, (var_16_float * 2));
			func_237();
		} else if(var_8_int == 41) {
				@KillTimer(41);
				@ModLinear(0, 2);
				@SetTimer(42, 2);
		}
	Label_449:
		for(;;) {

		}
	
		if(var_8_int == 42) {
			func_265();
			@KillTimer(42);
			@Bright();
			@ModNothing();
			func_222();
		} else if(var_8_int == 43) {
			func_252();
			var_70_bool = GlobalVars[0];
			if(!var_70_bool) { //@nz
				@GetModifierLevel(var_17_float);
				if(var_17_float > 0.3)
					func_450(var_22_int, false);
			}
		}
		bool var_85_bool = false;
		if(var_8_int >= 52) {
			if(var_8_int < 60)
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			@KillTimer(var_8_int);
			if(((var_8_int - 52) % 2) != 0)
				@SetAmbientMod([1.0, 1.0, 0.7176471]);
			else
				@SetAmbientMod([0.0, 0.0, 0.0]);
			if(var_8_int == 60) {
				@KillTimer(var_8_int);
				@SetAmbientMod([0.0, 0.0, 0.0]);
				if(var_1_bool != 0)
					var_1_bool = false;
				else
					@rand(0.1, 2, 3);
				if(var_8_int == 50) {
					@KillTimer(50);
					@GetActiveScene(var_20_object);
					var_116_bool = IsFuncExist(var_20_object, "CanPlayThunder", 1);
					if(var_116_bool != 0) {
						var_20_object->CanPlayThunder(var_21_bool);
						if(var_21_bool != 0) {
							@irand(var_22_int, 3);
							@PlaySound("thunder" + (var_22_int + 1));
						}
					}
					float var_124_float;
					func_651(var_124_float, (float)6);
					@SetTimer(51, var_124_float);
					var_20_object = null;
				} else if(var_8_int == 51) {
					@KillTimer(51);
					var_129_bool = GlobalVars[0];
					GlobalVars[0] = false;
				}
			}
			float var_107_float; float var_108_float;
			var_19_float = var_108_float;
			func_651(var_107_float, var_108_float);
			@SetTimer(50, var_107_float);
			goto Label_449;
		}
			float var_18_float;
		@rand(var_18_float, 0.01, 0.015);
		float var_99_float; float var_100_float;
		var_18_float = var_100_float;
		func_651(var_99_float, var_100_float);
		@SetTimer((var_8_int + 1), var_99_float);
		goto Label_449;
	
		}

	void OnConsole(int var_0_int, bool var_1_bool, string var_2_string, string var_3_string)
	{
		float var_5_float;
		if(var_2_string == "rain") {
			int var_8_int = 40;
			func_269();
		} else if(var_2_string == "wmod_level") {
				@GetModifierLevel(var_5_float);
				@Trace("Level: " + var_5_float);
		}
	Label_517:
		for(;;) {

		}
	
		if(var_2_string == "wdisease") {
			func_599(var_5_float);
		} else if(var_2_string == "wnormal") {
			func_548(var_5_float);
		} else if(var_2_string == "lightning") {
			var_167_bool = GlobalVars[0];
			var_168_bool = !var_167_bool; //@nz
			if(var_168_bool == 0) goto Label_517;
			func_450(var_5_float, false);
		}
	}

	// @pe
	void OnRegionChange(int var_0_int, bool var_1_bool, int var_2_int)
	{
		if(var_2_int == -1) {
			func_548(var_2_int);
		} else {
				bool var_16_bool; int var_17_int;
				func_662(var_16_bool, var_17_int);
				if(var_16_bool == 0) goto Label_535;
				func_599(var_17_int);
		}
	Label_547:
		for(;;) {
			return 0;

		}
	
	Label_535:
		bool var_44_bool; int var_45_int;
		var_2_int = var_45_int;
		func_674(var_44_bool, var_45_int);
		if(var_44_bool != 0) {
			func_568(var_2_int);
			goto Label_547;
		}
		func_548(var_2_int);
	}

	// @pe
	void OnTrigger(int var_0_int, bool var_1_bool, string var_2_string)
	{
		if(var_2_string == "lightning") {
			var_5_bool = GlobalVars[0];
			if(!var_5_bool) //@nz
				func_450(var_2_string, true);
		}
	}

}


void func_450(bool var_1_bool, bool var_7_bool)
{
	var_10_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetAmbientMod([1.0, 1.0, 0.7176471]);
	if(var_7_bool != 0) {
	} else {
		@rand(0.015, 0.01, 0.015);
	}
	var_1_bool = var_7_bool;
	float var_14_float; float var_15_float;
	float var_9_float = var_15_float;
	func_651(var_14_float, var_15_float);
	@SetTimer(52, var_14_float);
	
}


void func_674(bool var_44_bool, int var_45_int)
{
	int var_49_int;
	var_45_int = var_49_int;
	string var_48_string;
	func_656(var_48_string, var_49_int);
	int var_47_int;
	@GetVariable(var_48_string, var_47_int);
	var_44_bool = (var_47_int & 3) == 2;
}


void func_548(int var_0_int)
{
	cvector var_8_cvector;
	if(var_0_int == 0) {
	}
	var_0_int = 0;
	int var_7_int = 0;
	
	while(var_7_int < 3) {
		@GetColorMod(var_8_cvector, var_7_int);
		@LinearColorMod(var_7_int, var_8_cvector, [1.0, 1.0, 1.0], 0.2);
		var_7_int += 1;
	}
	
}


void func_642(int var_64_int)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_64_int = 1 + (var_66_float / 24);
}


void func_265(void)
{
	@KillTimer(43);
}


void func_651(float var_14_float, float var_15_float)
{
	float var_17_float;
	@GetGameTimeScale(var_17_float);
	var_14_float = var_15_float * var_17_float;
}


void func_237(void)
{
	float var_40_float;
	@rand(var_40_float, 1, 8);
	@SetTimer(41, var_40_float);
	@Trace(("Forecast: rain ends in " + var_40_float) + " hours");
}


// @pe
void func_686(float var_53_float, float var_54_float, float var_55_float)
{
	var_55_float = var_55_float % 24;
	if(var_54_float < var_55_float)
		var_53_float = (var_54_float + 24) - var_55_float;
	var_53_float = var_54_float - var_55_float;
}


// @pe
void func_656(string var_20_string, int var_21_int)
{
	var_20_string = ("Region" + var_21_int) + "State";
}


void func_662(bool var_16_bool, int var_17_int)
{
	int var_21_int;
	var_17_int = var_21_int;
	string var_20_string;
	func_656(var_20_string, var_21_int);
	int var_19_int;
	@GetVariable(var_20_string, var_19_int);
	var_16_bool = (var_19_int & 3) == 1;
}


void func_599(int var_0_int)
{
	if(var_0_int == 1)
		return 2;
	var_0_int = 1;
	cvector var_29_cvector;
	@GetColorMod(var_29_cvector, 0);
	@LinearColorMod(0, var_29_cvector, [0.7058824, 1.0, 0.9098039], 0.2);
	@GetColorMod(var_29_cvector, 1);
	@LinearColorMod(1, var_29_cvector, [0.7058824, 1.0, 0.9098039], 0.2);
	@GetColorMod(var_29_cvector, 2);
	@LinearColorMod(2, var_29_cvector, [0.7058824, 1.0, 0.9098039], 0.2);
}


void func_568(int var_0_int)
{
	if(var_0_int == 2)
		return 2;
	var_0_int = 2;
	cvector var_54_cvector;
	@GetColorMod(var_54_cvector, 0);
	@LinearColorMod(0, var_54_cvector, [1.5563922, 1.2026666, 0.23796079], 0.2);
	@GetColorMod(var_54_cvector, 1);
	@LinearColorMod(1, var_54_cvector, [1.5563922, 1.2026666, 0.23796079], 0.2);
	@GetColorMod(var_54_cvector, 2);
	@LinearColorMod(2, var_54_cvector, [1.5563922, 1.2026666, 0.23796079], 0.2);
}


void func_252(void)
{
	float var_29_float;
	@rand(var_29_float, 60, 120);
	float var_33_float; float var_34_float;
	var_29_float = var_34_float;
	func_651(var_33_float, var_34_float);
	@SetTimer(43, var_33_float);
}


void func_222(void)
{
	float var_5_float;
	@rand(var_5_float, 2, 20);
	@SetTimer(40, var_5_float);
	@Trace(("Forecast: rain begins in " + var_5_float) + " hours");
}


