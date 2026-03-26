// @IMPORTS: ForceWeather/17,GetGameTime/1,Trace/1,ChangeWeather/18,Sleep/1,rand/3,SetTimer/2,KillTimer/1,Rain/0,ModLinear/2,Bright/0,ModNothing/0,GetModifierLevel/1,SetAmbientMod/1,GetActiveScene/1,irand/2,PlaySound/1,GetColorMod/2,LinearColorMod/4,GetGameTimeScale/1,GetVariable/2
// @STRINGS: W:night_bk.tex|W:night_ft.tex|W:night_lt.tex|W:night_rt.tex|W:night_up.tex|W:night_rain_bk.tex|W:night_rain_ft.tex|W:night_rain_lt.tex|W:night_rain_rt.tex|W:night_rain_up.tex|W:Wrong time|W:dawn_bk.tex|W:dawn_ft.tex|W:dawn_lt.tex|W:dawn_rt.tex|W:dawn_up.tex|W:dawn_rain_bk.tex|W:dawn_rain_ft.tex|W:dawn_rain_lt.tex|W:dawn_rain_rt.tex|W:dawn_rain_up.tex|W:day_clear_bk.tex|W:day_clear_ft.tex|W:day_clear_lt.tex|W:day_clear_rt.tex|W:day_clear_up.tex|W:day_rain_bk.tex|W:day_rain_ft.tex|W:day_rain_lt.tex|W:day_rain_rt.tex|W:day_rain_up.tex|W:day_bk.tex|W:day_ft.tex|W:day_lt.tex|W:day_rt.tex|W:day_up.tex|W:Forecast: rain begins in |W: hours|W:Forecast: rain ends in |W:CanPlayThunder|A:CanPlayThunder|W:thunder|W:rain|W:wmod_level|W:Level: |W:wdisease|W:wnormal|W:lightning|W:Region|W:State
// @GLOBALS: 0:bool:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,bool params=0
// @EVENT_7: op=0x10d vars=int
// @EVENT_1000: op=0x1da vars=string,string
// @EVENT_8: op=0x206 vars=int
// @EVENT_26: op=0x276 vars=string
// @PE: 0x206,0x276,0x290,0x2ae

	task_0_event_7(var_0_int, var_1_bool, var_2_string, var_3_string, var_4_float, var_5_float, var_8_int)
	{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0;
	var_23_int = 40;
	var_24_bool = var_8_int == var_23_int;
	if(var_24_bool != 0) {
		var_25_int = 40;
		KillTimer(var_25_int);
		Rain();
		var_26_float = 0.20000000298023224;
		var_27_int = 1;
		rand(var_16_float, var_26_float, var_27_int);
		func_252();
		var_37_int = 2;
		var_38_float = var_16_float * var_37_int;
		ModLinear(var_16_float, var_38_float);
		func_237();
	} else {
		var_48_int = 41;
		var_49_bool = var_8_int == var_48_int;
		if(var_49_bool != 0) {
			var_50_int = 41;
			KillTimer(var_50_int);
			var_51_int = 0; //@pi
			var_52_int = 2;
			ModLinear(var_51_int, var_52_int);
			var_53_int = 42;
			var_54_int = 2;
			SetTimer(var_53_int, var_54_int);
			goto Label_449;
		}
		var_55_int = 42;
		var_56_bool = var_8_int == var_55_int;
		if(var_56_bool != 0) {
			func_265();
			var_58_int = 42;
			KillTimer(var_58_int);
			Bright();
			ModNothing();
			func_222();
			goto Label_449;
		}
		var_68_int = 43;
		var_69_bool = var_8_int == var_68_int;
		if(var_69_bool != 0) {
			func_252();
			var_70_bool = GlobalVars[0];
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				GetModifierLevel(var_17_float);
				var_72_float = 0.30000001192092896;
				var_73_bool = var_17_float > var_72_float;
				if(var_73_bool != 0) {
					var_74_bool = 0;
					var_74_bool = 0;
					func_450(var_22_int, var_74_bool);
				}
			}
			goto Label_449;
		}
		var_85_bool = 0;
		var_85_bool = 0;
		var_86_int = 52;
		var_87_bool = var_8_int >= var_86_int;
		if(var_87_bool != 0) {
			var_88_int = 60;
			var_89_bool = var_8_int < var_88_int;
			if(var_89_bool != 0) {
				var_85_bool = 1;
			}
		}
		if(var_85_bool != 0) {
			KillTimer(var_8_int);
			var_90_int = 52;
			var_91_int = var_8_int - var_90_int;
			var_92_int = 2;
			var_93_int = var_91_int % var_92_int;
			if(var_93_int != 0) {
				var_94_cvector = CVector(1.0, 1.0, 0.7176470756530762);
				SetAmbientMod(var_94_cvector);
			} else {
				var_101_cvector = CVector(0.0, 0.0, 0.0); //@pi
				SetAmbientMod(var_101_cvector);
		}
			var_102_int = 60;
			var_103_bool = var_8_int == var_102_int;
			if(var_103_bool != 0) {
				KillTimer(var_8_int);
				var_104_cvector = CVector(0.0, 0.0, 0.0); //@pi
				SetAmbientMod(var_104_cvector);
				var_105_bool = var_1_bool;
				if(var_105_bool != 0) {
					var_1_bool = false;
					var_19_float = 0.10000000149011612;
				} else {
					var_109_int = 2;
					var_110_int = 3;
					rand(var_19_float, var_109_int, var_110_int);
			}
				var_111_int = 50;
				var_112_bool = var_8_int == var_111_int;
				if(var_112_bool != 0) {
					var_113_int = 50;
					KillTimer(var_113_int);
					GetActiveScene(var_20_object);
					var_114_string = "CanPlayThunder";
					var_115_int = 1;
					var_116_bool = IsFuncExist(var_20_object, var_114_string, var_115_int);
					if(var_116_bool != 0) {
						@@var_20_object:CanPlayThunder(var_21_bool);
						var_117_bool = var_21_bool;
						if(var_117_bool != 0) {
							var_118_int = 3;
							irand(var_22_int, var_118_int);
							var_119_string = "thunder";
							var_120_int = 1;
							var_121_int = var_22_int + var_120_int;
							var_122_int = var_119_string + var_121_int;
							PlaySound(var_122_int);
						}
					}
					var_123_int = 51;
					var_124_float = 0; var_125_float = 0;
					var_125_float = 6;
					func_651(var_124_float, var_125_float);
					SetTimer(var_123_int, var_124_float);
					var_20_object = 0;
					goto Label_449;
				}
				var_126_int = 51;
				var_127_bool = var_8_int == var_126_int;
				if(var_127_bool == 0) goto Label_449;
				var_128_int = 51;
				KillTimer(var_128_int);
				var_129_bool = GlobalVars[0];
				var_129_bool = 0;
				GlobalVars[0] = var_129_bool;
			}
			var_106_int = 50;
			var_107_float = 0; var_108_float = 0;
			var_19_float = var_108_float;
			func_651(var_107_float, var_108_float);
			SetTimer(var_106_int, var_107_float);
			goto Label_449;
		}
		var_95_float = 0.009999999776482582;
		var_96_float = 0.014999999664723873;
		rand(var_18_float, var_95_float, var_96_float);
		var_97_int = 1;
		var_98_int = var_8_int + var_97_int;
		var_99_float = 0; var_100_float = 0;
		var_18_float = var_100_float;
		func_651(var_99_float, var_100_float);
		SetTimer(var_98_int, var_99_float);
		goto Label_449;
	}
Label_449:
	return 14;
	
	}


task_0_event_1000(var_0_int, var_1_bool, var_2_string, var_3_string)
{
	var_4_float = 0; var_5_float = 0;
	var_7_bool = var_2_string == "rain";
	if(var_7_bool != 0) {
		var_8_int = 0;
		var_8_int = 40;
		func_269();
	} else {
		var_131_bool = var_2_string == "wmod_level";
		if(var_131_bool != 0) {
			GetModifierLevel(var_5_float);
			var_133_int = "Level: " + var_5_float;
			Trace(var_133_int);
			goto Label_517;
		}
		var_135_bool = var_2_string == "wdisease";
		if(var_135_bool != 0) {
			func_599(var_5_float);
			goto Label_517;
		}
		var_153_bool = var_2_string == "wnormal";
		if(var_153_bool != 0) {
			func_548(var_5_float);
			goto Label_517;
		}
		var_166_bool = var_2_string == "lightning";
		if(var_166_bool == 0) goto Label_517;
		var_167_bool = GlobalVars[0];
		var_168_bool = var_167_bool == 0; //@nz
		if(var_168_bool == 0) goto Label_517;
		var_169_bool = 0;
		func_450(var_5_float, (bool)0);
	}
Label_517:
	return 2;
	
}


task_0_event_8(var_0_int, var_1_bool, var_2_int)
{
	var_4_bool = var_2_int == (int)-1;
	if(var_4_bool != 0) {
		func_548(var_2_int);
	} else {
		var_16_bool = 0; var_17_int = 0;
		var_2_int = var_17_int;
		func_662(var_16_bool, var_17_int);
		if(var_16_bool != 0) {
			func_599(var_2_int);
			goto Label_547;
		}
		var_44_bool = 0; var_45_int = 0;
		var_2_int = var_45_int;
		func_674(var_44_bool, var_45_int);
		if(var_44_bool != 0) {
			func_568(var_2_int);
			goto Label_547;
		}
		func_548(var_2_int);
	}
Label_547:
	return 0;
	
}


task_0_event_26(var_0_int, var_1_bool, var_2_string)
{
	var_4_bool = var_2_string == "lightning";
	if(var_4_bool != 0) {
		var_5_bool = GlobalVars[0];
		var_6_bool = var_5_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_bool = 0;
			func_450(var_2_string, (bool)1);
		}
	}
	return 0;
}


main(var_0_int, var_1_bool)
{
	var_2_float = 0; var_3_float = 0;
	func_222();
	ForceWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", (bool)0, CVector(0.0, 0.0, 0.0), CVector(0.27450981736183167, 0.27450981736183167, 0.27450981736183167), (float)3000.0, (float)5000.0, CVector(0.19607844948768616, 0.19607844948768616, 0.19607843458652496), CVector(0.19607844948768616, 0.19607844948768616, 0.19607843458652496));
	GetGameTime(var_3_float);
	var_30_bool = 0;
	var_30_bool = 1;
	var_32_bool = var_3_float < (float)5.989999771118164;
	if(var_32_bool != 1) {
		var_34_bool = var_3_float > (float)6.010000228881836;
		if(var_34_bool != 1) {
			var_30_bool = 0;
		}
	}
	if(var_30_bool != 0) {
		Trace("Wrong time");
		return 2;
	}
Label_39:
	GetGameTime(var_3_float);
	var_53_float = 0; var_54_float = 0; var_55_float = 0;
	var_3_float = var_55_float;
	func_686(var_53_float, (float)8.0, var_55_float);
	ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", (bool)0, CVector(0.5098039507865906, 0.27450981736183167, 0.18039216101169586), CVector(0.7058823704719543, 0.5058823823928833, 0.32156863808631897), (float)3000.0, (float)5000.0, CVector(0.6000000238418579, 0.4392157196998596, 0.2823529541492462), CVector(0.4862745404243469, 0.34117648005485535, 0.21176470816135406), var_53_float);
	GetGameTime(var_3_float);
	var_60_float = 0; var_61_float = 0; var_62_float = 0;
	var_3_float = var_62_float;
	func_686(var_60_float, (float)10.0, var_62_float);
	Sleep(var_60_float);
	GetGameTime(var_3_float);
	var_63_bool = 0;
	var_63_bool = 1;
	var_64_int = 0;
	func_642(var_64_int);
	var_71_bool = var_64_int < (int)3;
	if(var_71_bool != 1) {
		var_72_int = 0;
		func_642(var_72_int);
		var_74_bool = var_72_int == (int)12;
		if(var_74_bool != 1) {
			var_63_bool = 0;
		}
	}
	if(var_63_bool != 0) {
		var_92_float = 0; var_93_float = 0; var_94_float = 0;
		var_3_float = var_94_float;
		func_686(var_92_float, (float)11.0, var_94_float);
		ChangeWeather("day_clear_bk.tex", "day_clear_ft.tex", "day_clear_lt.tex", "day_clear_rt.tex", "day_clear_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", (bool)0, CVector(0.3921568989753723, 0.3921568989753723, 0.3921568691730499), CVector(0.5882353186607361, 0.5098039507865906, 0.47058823704719543), (float)3000.0, (float)5000.0, CVector(0.5882353186607361, 0.5098039507865906, 0.4313725531101227), CVector(0.37254902720451355, 0.32549020648002625, 0.29019609093666077), var_92_float);
	} else {
		var_161_float = 0; var_162_float = 0; var_163_float = 0;
		var_3_float = var_163_float;
		func_686(var_161_float, (float)11.0, var_163_float);
		ChangeWeather("day_bk.tex", "day_ft.tex", "day_lt.tex", "day_rt.tex", "day_up.tex", "day_rain_bk.tex", "day_rain_ft.tex", "day_rain_lt.tex", "day_rain_rt.tex", "day_rain_up.tex", (bool)0, CVector(0.2352941334247589, 0.2039215862751007, 0.16862745583057404), CVector(0.5882353186607361, 0.5490196347236633, 0.3921568691730499), (float)3000.0, (float)5000.0, CVector(0.364705890417099, 0.34117648005485535, 0.25882354378700256), CVector(0.37254902720451355, 0.32549020648002625, 0.29019609093666077), var_161_float);
	}
	GetGameTime(var_3_float);
	var_95_float = 0; var_96_float = 0; var_97_float = 0;
	var_3_float = var_97_float;
	func_686(var_95_float, (float)18.0, var_97_float);
	Sleep(var_95_float);
	GetGameTime(var_3_float);
	var_115_float = 0; var_116_float = 0; var_117_float = 0;
	var_3_float = var_117_float;
	func_686(var_115_float, (float)19.0, var_117_float);
	ChangeWeather("dawn_bk.tex", "dawn_ft.tex", "dawn_lt.tex", "dawn_rt.tex", "dawn_up.tex", "dawn_rain_bk.tex", "dawn_rain_ft.tex", "dawn_rain_lt.tex", "dawn_rain_rt.tex", "dawn_rain_up.tex", (bool)0, CVector(0.5098039507865906, 0.27450981736183167, 0.18039216101169586), CVector(0.7058823704719543, 0.5058823823928833, 0.32156863808631897), (float)3000.0, (float)5000.0, CVector(0.6000000238418579, 0.4392157196998596, 0.2823529541492462), CVector(0.4862745404243469, 0.34117648005485535, 0.21176470816135406), var_115_float);
	GetGameTime(var_3_float);
	var_118_float = 0; var_119_float = 0; var_120_float = 0;
	var_3_float = var_120_float;
	func_686(var_118_float, (float)20.0, var_120_float);
	Sleep(var_118_float);
	GetGameTime(var_3_float);
	var_138_float = 0; var_139_float = 0; var_140_float = 0;
	var_3_float = var_140_float;
	func_686(var_138_float, (float)21.0, var_140_float);
	ChangeWeather("night_bk.tex", "night_ft.tex", "night_lt.tex", "night_rt.tex", "night_up.tex", "night_rain_bk.tex", "night_rain_ft.tex", "night_rain_lt.tex", "night_rain_rt.tex", "night_rain_up.tex", (bool)0, CVector(0.0, 0.0, 0.0), CVector(0.27450981736183167, 0.27450981736183167, 0.27450981736183167), (float)3000.0, (float)5000.0, CVector(0.19607844948768616, 0.19607844948768616, 0.19607843458652496), CVector(0.19607844948768616, 0.19607844948768616, 0.19607843458652496), var_138_float);
	GetGameTime(var_3_float);
	var_141_float = 0; var_142_float = 0; var_143_float = 0;
	var_3_float = var_143_float;
	func_686(var_141_float, (float)6.0, var_143_float);
	Sleep(var_141_float);
	goto Label_39;
	
}
EMIT "Return(); Pop(2)";


func_450(var_1_bool, var_7_bool)
{
	var_8_float = 0; var_9_float = 0;
	var_10_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetAmbientMod(CVector(1.0, 1.0, 0.7176470756530762));
	var_12_bool = var_7_bool;
	if(var_12_bool != 0) {
	} else {
		rand((float)0.014999999664723873, (float)0.009999999776482582, (float)0.014999999664723873);
	}
	var_1_bool = var_7_bool;
	var_14_float = 0; var_15_float = 0;
	var_9_float = var_15_float;
	func_651(var_14_float, var_15_float);
	SetTimer((int)52, var_14_float);
	return 2;
	
}


func_674(var_44_bool, var_45_int)
{
	var_46_int = 0; var_47_int = 0;
	var_48_string = ""; var_49_int = 0;
	var_45_int = var_49_int;
	func_656(var_48_string, var_49_int);
	GetVariable(var_48_string, var_47_int);
	var_51_int = var_47_int & (int)3;
	var_44_bool = var_51_int == (int)2;
	return 2;
}


func_548(var_0_int)
{
	var_5_int = 0; var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_cvector = CVector(0,0,0);
	var_10_bool = var_0_int == (int)0;
	if(var_10_bool != 0) {
		return 4;
	}
	var_0_int = 0;
	var_7_int = 0;
	
Label_555:
	var_12_bool = var_7_int < (int)3;
	if(var_12_bool != 0) {
		GetColorMod(var_8_cvector, var_7_int);
		LinearColorMod(var_7_int, var_8_cvector, CVector(1.0, 1.0, 1.0), (float)0.20000000298023224);
		var_7_int = var_7_int + (int)1;
		goto Label_555;
	}
	return 4;
}


func_642(var_64_int)
{
	var_65_float = 0; var_66_float = 0;
	GetGameTime(var_66_float);
	var_68_int = 0;
	var_68_int = var_66_float / (int)24;
	var_64_int = (int)1 + var_68_int;
	return 2;
}


func_265()
{
	KillTimer((int)43);
	return 0;
}


func_651(var_14_float, var_15_float)
{
	var_16_float = 0; var_17_float = 0;
	GetGameTimeScale(var_17_float);
	var_14_float = var_15_float * var_17_float;
	return 2;
}


func_237()
{
	var_39_float = 0; var_40_float = 0;
	rand(var_40_float, (int)1, (int)8);
	SetTimer((int)41, var_40_float);
	var_45_int = "Forecast: rain ends in " + var_40_float;
	var_47_int = var_45_int + " hours";
	Trace(var_47_int);
	return 2;
}


func_686(var_53_float, var_54_float, var_55_float)
{
	var_55_float = var_55_float % (int)24;
	var_57_bool = var_54_float < var_55_float;
	if(var_57_bool != 0) {
		var_59_int = var_54_float + (int)24;
		var_53_float = var_59_int - var_55_float;
		return 0;
	}
	var_53_float = var_54_float - var_55_float;
	return 0;
}


func_656(var_20_string, var_21_int)
{
	var_23_int = "Region" + var_21_int;
	var_20_string = var_23_int + "State";
	return 0;
}


func_662(var_16_bool, var_17_int)
{
	var_18_int = 0; var_19_int = 0;
	var_20_string = ""; var_21_int = 0;
	var_17_int = var_21_int;
	func_656(var_20_string, var_21_int);
	GetVariable(var_20_string, var_19_int);
	var_26_int = var_19_int & (int)3;
	var_16_bool = var_26_int == (int)1;
	return 2;
}


func_599(var_0_int)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	var_31_bool = var_0_int == (int)1;
	if(var_31_bool != 0) {
		return 2;
	}
	var_0_int = 1;
	GetColorMod(var_29_cvector, (int)0);
	LinearColorMod((int)0, var_29_cvector, CVector(0.7058823704719543, 1.0, 0.9098039269447327), (float)0.20000000298023224);
	GetColorMod(var_29_cvector, (int)1);
	LinearColorMod((int)1, var_29_cvector, CVector(0.7058823704719543, 1.0, 0.9098039269447327), (float)0.20000000298023224);
	GetColorMod(var_29_cvector, (int)2);
	LinearColorMod((int)2, var_29_cvector, CVector(0.7058823704719543, 1.0, 0.9098039269447327), (float)0.20000000298023224);
	return 2;
}


func_568(var_0_int)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	var_56_bool = var_0_int == (int)2;
	if(var_56_bool != 0) {
		return 2;
	}
	var_0_int = 2;
	GetColorMod(var_54_cvector, (int)0);
	LinearColorMod((int)0, var_54_cvector, CVector(1.5563921928405762, 1.2026666402816772, 0.2379607856273651), (float)0.20000000298023224);
	GetColorMod(var_54_cvector, (int)1);
	LinearColorMod((int)1, var_54_cvector, CVector(1.5563921928405762, 1.2026666402816772, 0.2379607856273651), (float)0.20000000298023224);
	GetColorMod(var_54_cvector, (int)2);
	LinearColorMod((int)2, var_54_cvector, CVector(1.5563921928405762, 1.2026666402816772, 0.2379607856273651), (float)0.20000000298023224);
	return 2;
}


func_252()
{
	var_28_float = 0; var_29_float = 0;
	rand(var_29_float, (int)60, (int)120);
	var_33_float = 0; var_34_float = 0;
	var_29_float = var_34_float;
	func_651(var_33_float, var_34_float);
	SetTimer((int)43, var_33_float);
	return 2;
}


func_222()
{
	var_4_float = 0; var_5_float = 0;
	rand(var_5_float, (int)2, (int)20);
	SetTimer((int)40, var_5_float);
	var_10_int = "Forecast: rain begins in " + var_5_float;
	var_12_int = var_10_int + " hours";
	Trace(var_12_int);
	return 2;
}


