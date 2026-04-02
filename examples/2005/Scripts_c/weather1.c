maintask task_0
{
	void init(bool var_0_bool)
	{
		func_181();
		@ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.0, 0.0, 0.0], [0.078431375, 0.078431375, 0.078431375], 3000.0, 5000.0, [0.08235294, 0.078431375, 0.09803922], [0.08235294, 0.078431375, 0.09803922]);
		float var_2_float;
		@GetGameTime(var_2_float);
		bool var_29_bool = true;
		var_31_bool = var_2_float < 5.99;
		if(var_31_bool != 1) {
			var_33_bool = var_2_float > 6.01;
			if(var_33_bool != 1)
				var_29_bool = false;
		}
		if(var_29_bool != 0)
			@Trace("Wrong time");
		for(;;) {
			@GetGameTime(var_2_float);
			float var_52_float; float var_54_float;
			func_439(var_52_float, 8.0, var_54_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.33333334, 0.15686275, 0.03137255], [0.33333334, 0.15686275, 0.03137255], 3000.0, 5000.0, [0.38431376, 0.2784314, 0.16470589], [0.7843138, 0.52156866, 0.44313726], var_52_float);
			@GetGameTime(var_54_float);
			float var_59_float; float var_61_float;
			func_439(var_59_float, 10.0, var_61_float);
			@Sleep(var_59_float);
			@GetGameTime(var_61_float);
			float var_79_float; float var_81_float;
			func_439(var_79_float, 11.0, var_81_float);
			@ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", false, [0.3921569, 0.3529412, 0.29411766], [0.27450982, 0.27450982, 0.30588236], 3000.0, 5000.0, [0.3137255, 0.2509804, 0.25490198], [0.26666668, 0.30980393, 0.25882354], var_79_float);
			@GetGameTime(var_81_float);
			float var_82_float; float var_84_float;
			func_439(var_82_float, 18.0, var_84_float);
			@Sleep(var_82_float);
			@GetGameTime(var_84_float);
			float var_102_float; float var_104_float;
			func_439(var_102_float, 19.0, var_104_float);
			@ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", false, [0.3529412, 0.3137255, 0.26666668], [0.3529412, 0.3137255, 0.26666668], 3000.0, 5000.0, [0.7843138, 0.52156866, 0.44313726], [0.7843138, 0.52156866, 0.44313726], var_102_float);
			@GetGameTime(var_104_float);
			float var_105_float; float var_107_float;
			func_439(var_105_float, 20.0, var_107_float);
			@Sleep(var_105_float);
			@GetGameTime(var_107_float);
			float var_125_float; float var_127_float;
			func_439(var_125_float, 21.0, var_127_float);
			@ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", false, [0.078431375, 0.078431375, 0.078431375], [0.078431375, 0.078431375, 0.078431375], 3000.0, 5000.0, [0.08235294, 0.078431375, 0.09803922], [0.08235294, 0.078431375, 0.09803922], var_125_float);
			@GetGameTime(var_127_float);
			float var_128_float; float var_130_float;
			var_2_float = var_130_float;
			func_439(var_128_float, 6.0, var_130_float);
			@Sleep(var_128_float);
		}
	}
	EMIT "Return(); Pop(2)";

		void OnTimer(bool var_0_bool, string var_1_string, string var_2_string, float var_3_float, float var_4_float, int var_7_int)
		{
		float var_13_float; object var_14_object; bool var_15_bool; float var_16_float; int var_17_int;
		if(var_7_int == 40) {
			@KillTimer(40);
			@Rain();
			@rand(var_13_float, 0.1, 1);
			@ModLinear(var_13_float, (var_13_float * 2));
			func_196();
			func_211();
		} else if(var_7_int == 41) {
				@KillTimer(41);
				@ModLinear(0, 2);
				@SetTimer(42, 2);
		}

	
		if(var_7_int == 42) {
			@KillTimer(42);
			@Bright();
			@ModNothing();
			func_181();
		} else if(var_7_int == 43) {
			@GetActiveScene(var_14_object);
			var_62_bool = IsFuncExist(var_14_object, "CanPlayThunder", 1);
			if(var_62_bool != 0) {
			var_14_object->CanPlayThunder(var_15_bool);
			if(var_15_bool != 0) {
			@GetModifierLevel(var_16_float);
			if(var_16_float > 0.3) {
			@irand(var_17_int, 3);
			@PlaySound("thunder" + (var_17_int + 1));
			}
			}
		}
		}
		func_211();
		var_14_object = null;
		}

	void OnConsole(bool var_0_bool, string var_1_string, string var_2_string)
	{
		float var_4_float;
		if(var_1_string == "rain") {
			int var_7_int = 40;
			func_220();
		} else if(var_1_string == "wmod_level") {
				@GetModifierLevel(var_4_float);
				@Trace("Level: " + var_4_float);
		}

	
		if(var_1_string == "wdisease") {
			func_391(var_4_float);
		} else if(var_1_string == "wnormal") {
			func_372(var_4_float);
		}
	}

	// @pe
	void OnRegionChange(bool var_0_bool, int var_1_int)
	{
		if(var_1_int == -1) {
			func_372(var_1_int);
		} else {
				bool var_18_bool; int var_19_int;
				func_427(var_18_bool, var_19_int);
				@Trace(((("Region: " + var_19_int) + " (state: ") + var_18_bool) + ")");
				bool var_33_bool; int var_34_int;
				var_1_int = var_34_int;
				func_427(var_33_bool, var_34_int);
				if(var_33_bool == 0) goto Label_368;
				func_391(var_1_int);
		}
		for(;;) {
			return 0;

		}
	
	Label_368:
		func_372(var_1_int);
	}

}


void func_196(void)
{
	float var_26_float;
	@rand(var_26_float, 1, 8);
	@SetTimer(41, var_26_float);
	@Trace(("Forecast: rain ends in " + var_26_float) + " hours");
}


// @pe
void func_421(string var_22_string, int var_23_int)
{
	var_22_string = ("Region" + var_23_int) + "State";
}


void func_391(bool var_0_bool)
{
	if(var_0_bool != 0)
		return 2;
	var_0_bool = true;
	cvector var_36_cvector;
	@GetColorMod(var_36_cvector, 0);
	@LinearColorMod(0, var_36_cvector, [0.37647063, 1.0, 0.83137256], 0.2);
	@GetColorMod(var_36_cvector, 1);
	@LinearColorMod(1, var_36_cvector, [0.2895928, 0.7692308, 0.63951737], 0.2);
	@GetColorMod(var_36_cvector, 2);
	@LinearColorMod(2, var_36_cvector, [0.37647063, 1.0, 0.83137256], 0.2);
}


void func_427(bool var_18_bool, int var_19_int)
{
	int var_23_int;
	var_19_int = var_23_int;
	string var_22_string;
	func_421(var_22_string, var_23_int);
	int var_21_int;
	@GetVariable(var_22_string, var_21_int);
	var_18_bool = (var_21_int & 3) == 1;
}


void func_211(void)
{
	float var_35_float;
	@rand(var_35_float, 0.5, 1.0);
	@SetTimer(43, var_35_float);
}


void func_372(bool var_0_bool)
{
	cvector var_7_cvector;
	if(!var_0_bool) { //@nz
	}
	var_0_bool = false;
	int var_6_int = 0;
	
	while(var_6_int < 3) {
		@GetColorMod(var_7_cvector, var_6_int);
		@LinearColorMod(var_6_int, var_7_cvector, [1.0, 1.0, 1.0], 0.2);
		var_6_int += 1;
	}
	
}


void func_181(void)
{
	float var_4_float;
	@rand(var_4_float, 2, 20);
	@SetTimer(40, var_4_float);
	@Trace(("Forecast: rain begins in " + var_4_float) + " hours");
}


// @pe
void func_439(float var_52_float, float var_53_float, float var_54_float)
{
	var_54_float = var_54_float % 24;
	if(var_53_float < var_54_float)
		var_52_float = (var_53_float + 24) - var_54_float;
	var_52_float = var_53_float - var_54_float;
}


