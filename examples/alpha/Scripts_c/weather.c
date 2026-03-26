// @IMPORTS: ForceWeather/17,GetGameTime/1,Trace/1,ChangeWeather/18,Sleep/1,rand/3,SetTimer/2,KillTimer/1,Rain/0,ModLinear/2,Bright/0,ModNothing/0,GetActiveScene/1,GetModifierLevel/1,irand/2,PlaySound/1
// @STRINGS: W:night_bk.tex|W:night_ft.tex|W:night_lt.tex|W:night_rt.tex|W:night_up.tex|W:night_rain_bk.tex|W:night_rain_ft.tex|W:night_rain_lt.tex|W:night_rain_rt.tex|W:night_rain_up.tex|W:Wrong time|W:dawn_bk.tex|W:dawn_ft.tex|W:dawn_lt.tex|W:dawn_rt.tex|W:dawn_up.tex|W:dawn_rain_bk.tex|W:dawn_rain_ft.tex|W:dawn_rain_lt.tex|W:dawn_rain_rt.tex|W:dawn_rain_up.tex|W:day_bk.tex|W:day_ft.tex|W:day_lt.tex|W:day_rt.tex|W:day_up.tex|W:day_rain_bk.tex|W:day_rain_ft.tex|W:day_rain_lt.tex|W:day_rain_rt.tex|W:day_rain_up.tex|W:Forecast: rain begins in |W: hours|W:Forecast: rain ends in |W:CanPlayThunder|A:CanPlayThunder|W:thunder|W:rain|W:wmod_level|W:Level: 
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_7: op=0xdc vars=int
// @EVENT_1000: op=0x131 vars=string,string
// @PE: 0x144

	task_0_event_7(var_0_string, var_1_string, var_2_float, var_3_float, var_6_int)
	{
	var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_float = 0; var_11_int = 0; var_12_float = 0; var_13_object = Obj(); var_14_bool = 0; var_15_float = 0; var_16_int = 0;
	var_17_int = 40;
	var_18_bool = var_6_int == var_17_int;
	if(var_18_bool != 0) {
		var_19_int = 40;
		KillTimer(var_19_int);
		Rain();
		var_20_float = 0.10000000149011612;
		var_21_int = 1;
		rand(var_12_float, var_20_float, var_21_int);
		var_22_int = 2;
		var_23_float = var_12_float * var_22_int;
		ModLinear(var_12_float, var_23_float);
		func_196();
		func_211();
	} else {
		var_38_int = 41;
		var_39_bool = var_6_int == var_38_int;
		if(var_39_bool != 0) {
			var_40_int = 41;
			KillTimer(var_40_int);
			var_41_int = 0; //@pi
			var_42_int = 2;
			ModLinear(var_41_int, var_42_int);
			var_43_int = 42;
			var_44_int = 2;
			SetTimer(var_43_int, var_44_int);
			goto Label_304;
		}
		var_45_int = 42;
		var_46_bool = var_6_int == var_45_int;
		if(var_46_bool != 0) {
			var_47_int = 42;
			KillTimer(var_47_int);
			Bright();
			ModNothing();
			func_181();
			goto Label_304;
		}
		var_57_int = 43;
		var_58_bool = var_6_int == var_57_int;
		if(var_58_bool == 0) goto Label_304;
		GetActiveScene(var_13_object);
		var_59_string = "CanPlayThunder";
		var_60_int = 1;
		var_61_bool = IsFuncExist(var_13_object, var_59_string, var_60_int);
		if(var_61_bool != 0) {
			@@var_13_object:CanPlayThunder(var_14_bool);
			var_62_bool = var_14_bool;
			if(var_62_bool != 0) {
				GetModifierLevel(var_15_float);
				var_63_float = 0.30000001192092896;
				var_64_bool = var_15_float > var_63_float;
				if(var_64_bool != 0) {
					var_65_int = 3;
					irand(var_16_int, var_65_int);
					var_66_string = "thunder";
					var_67_int = 1;
					var_68_int = var_16_int + var_67_int;
					var_69_int = var_66_string + var_68_int;
					PlaySound(var_69_int);
				}
			}
		}
		func_211();
		var_13_object = 0;
	}
Label_304:
	return 10;
	
	}


task_0_event_1000(var_0_string, var_1_string)
{
	var_2_float = 0; var_3_float = 0;
	var_5_bool = var_0_string == "rain";
	if(var_5_bool != 0) {
		var_6_int = 0;
		var_6_int = 40;
		func_220();
	} else {
		var_71_bool = var_0_string == "wmod_level";
		if(var_71_bool == 0) goto Label_323;
		GetModifierLevel(var_3_float);
		var_73_int = "Level: " + var_3_float;
		Trace(var_73_int);
	}
Label_323:
	return 2;
	
}


main()
{
	var_0_float = 0; var_1_float = 0;
	func_181();
	ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", (bool)0, CVector(0.0, 0.0, 0.0), CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261), (float)3000.0, (float)5000.0, CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305), CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305));
	GetGameTime(var_1_float);
	var_28_bool = 0;
	var_28_bool = 1;
	var_30_bool = var_1_float < (float)5.989999771118164;
	if(var_30_bool != 1) {
		var_32_bool = var_1_float > (float)6.010000228881836;
		if(var_32_bool != 1) {
			var_28_bool = 0;
		}
	}
	if(var_28_bool != 0) {
		Trace("Wrong time");
		return 2;
	}
Label_39:
	GetGameTime(var_1_float);
	var_51_float = 0; var_52_float = 0; var_53_float = 0;
	var_1_float = var_53_float;
	func_324(var_51_float, (float)8.0, var_53_float);
	ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", (bool)0, CVector(0.3921568989753723, 0.25882354378700256, 0.25882354378700256), CVector(0.3921568989753723, 0.25882354378700256, 0.25882354378700256), (float)3000.0, (float)5000.0, CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445), CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445), var_51_float);
	GetGameTime(var_1_float);
	var_58_float = 0; var_59_float = 0; var_60_float = 0;
	var_1_float = var_60_float;
	func_324(var_58_float, (float)10.0, var_60_float);
	Sleep(var_58_float);
	GetGameTime(var_1_float);
	var_78_float = 0; var_79_float = 0; var_80_float = 0;
	var_1_float = var_80_float;
	func_324(var_78_float, (float)11.0, var_80_float);
	ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", (bool)0, CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171), CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171), (float)3000.0, (float)5000.0, CVector(0.7019608020782471, 0.6313725709915161, 0.5372549295425415), CVector(0.7019608020782471, 0.6313725709915161, 0.5372549295425415), var_78_float);
	GetGameTime(var_1_float);
	var_81_float = 0; var_82_float = 0; var_83_float = 0;
	var_1_float = var_83_float;
	func_324(var_81_float, (float)18.0, var_83_float);
	Sleep(var_81_float);
	GetGameTime(var_1_float);
	var_101_float = 0; var_102_float = 0; var_103_float = 0;
	var_1_float = var_103_float;
	func_324(var_101_float, (float)19.0, var_103_float);
	ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", (bool)0, CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171), CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171), (float)3000.0, (float)5000.0, CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445), CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445), var_101_float);
	GetGameTime(var_1_float);
	var_104_float = 0; var_105_float = 0; var_106_float = 0;
	var_1_float = var_106_float;
	func_324(var_104_float, (float)20.0, var_106_float);
	Sleep(var_104_float);
	GetGameTime(var_1_float);
	var_124_float = 0; var_125_float = 0; var_126_float = 0;
	var_1_float = var_126_float;
	func_324(var_124_float, (float)21.0, var_126_float);
	ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", (bool)0, CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261), CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261), (float)3000.0, (float)5000.0, CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305), CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305), var_124_float);
	GetGameTime(var_1_float);
	var_127_float = 0; var_128_float = 0; var_129_float = 0;
	var_1_float = var_129_float;
	func_324(var_127_float, (float)6.0, var_129_float);
	Sleep(var_127_float);
	goto Label_39;
}
EMIT "Return(); Pop(2)";


func_211()
{
	var_33_float = 0; var_34_float = 0;
	rand(var_34_float, (float)0.5, (float)1.0);
	SetTimer((int)43, var_34_float);
	return 2;
}


func_196()
{
	var_24_float = 0; var_25_float = 0;
	rand(var_25_float, (int)1, (int)8);
	SetTimer((int)41, var_25_float);
	var_30_int = "Forecast: rain ends in " + var_25_float;
	var_32_int = var_30_int + " hours";
	Trace(var_32_int);
	return 2;
}


func_181()
{
	var_2_float = 0; var_3_float = 0;
	rand(var_3_float, (int)2, (int)20);
	SetTimer((int)40, var_3_float);
	var_8_int = "Forecast: rain begins in " + var_3_float;
	var_10_int = var_8_int + " hours";
	Trace(var_10_int);
	return 2;
}


func_324(var_51_float, var_52_float, var_53_float)
{
	var_53_float = var_53_float % (int)24;
	var_55_bool = var_52_float < var_53_float;
	if(var_55_bool != 0) {
		var_57_int = var_52_float + (int)24;
		var_51_float = var_57_int - var_53_float;
		return 0;
	}
	var_51_float = var_52_float - var_53_float;
	return 0;
}


