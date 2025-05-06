	task_0_event_7(var_0_string, var_1_string, var_2_float, var_3_float, var_6_int)
	{
	var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_float = 0; var_11_int = 0; var_12_float = 0; var_13_object = Obj(); var_14_bool = 0; var_15_float = 0; var_16_int = 0; // 0xdc PushV
	var_17_int = 40; // 0xdd PushI
	var_18_bool = var_6_int == var_17_int; // 0xde Eq
	if(var_18_bool == 0) goto Label_244; // 0xdf JumpB
	var_19_int = 40; // 0xe0 PushI
	KillTimer(var_19_int); // 0xe1 Func
	Rain(); // 0xe3 Func
	var_20_float = 0.1; // 0xe5 PushF
	var_21_int = 1; // 0xe6 PushI
	rand(var_12_float, var_20_float, var_21_int); // 0xe7 Func
	var_22_int = 2; // 0xe9 PushI
	var_23_float = var_12_float * var_22_int; // 0xea Mult
	ModLinear(var_12_float, var_23_float); // 0xeb Func
	func_196(); // 0xee Call
	func_211(); // 0xf1 Call
	goto Label_304; // 0xf3 Jump
	
Label_304:
	return 10; // 0x130 Return
	
Label_244:
	var_38_int = 41; // 0xf4 PushI
	var_39_bool = var_6_int == var_38_int; // 0xf5 Eq
	if(var_39_bool == 0) goto Label_259; // 0xf6 JumpB
	var_40_int = 41; // 0xf7 PushI
	KillTimer(var_40_int); // 0xf8 Func
	var_41_int = 0; // 0xfa PushI
	var_42_int = 2; // 0xfb PushI
	ModLinear(var_41_int, var_42_int); // 0xfc Func
	var_43_int = 42; // 0xfe PushI
	var_44_int = 2; // 0xff PushI
	SetTimer(var_43_int, var_44_int); // 0x100 Func
	goto Label_304; // 0x102 Jump
	
Label_259:
	var_45_int = 42; // 0x103 PushI
	var_46_bool = var_6_int == var_45_int; // 0x104 Eq
	if(var_46_bool == 0) goto Label_273; // 0x105 JumpB
	var_47_int = 42; // 0x106 PushI
	KillTimer(var_47_int); // 0x107 Func
	Bright(); // 0x109 Func
	ModNothing(); // 0x10b Func
	func_181(); // 0x10e Call
	goto Label_304; // 0x110 Jump
	
Label_273:
	var_57_int = 43; // 0x111 PushI
	var_58_bool = var_6_int == var_57_int; // 0x112 Eq
	if(var_58_bool == 0) goto Label_304; // 0x113 JumpB
	GetActiveScene(var_13_object); // 0x114 Func
	var_59_string = "CanPlayThunder"; // 0x116 PushS
	var_60_int = 1; // 0x117 PushI
	var_61_bool = IsFuncExist(var_13_object, var_59_string, var_60_int); // 0x118 FuncExist
	if(var_61_bool == 0) goto Label_300; // 0x119 JumpB
	CanPlayThunder(var_14_bool); // 0x11a ObjFunc
	var_62_bool = var_14_bool; // 0x11c Push
	if(var_62_bool == 0) goto Label_300; // 0x11d JumpB
	GetModifierLevel(var_15_float); // 0x11e Func
	var_63_float = 0.3; // 0x120 PushF
	var_64_bool = var_15_float > var_63_float; // 0x121 GT
	if(var_64_bool == 0) goto Label_300; // 0x122 JumpB
	var_65_int = 3; // 0x123 PushI
	irand(var_16_int, var_65_int); // 0x124 Func
	var_66_string = "thunder"; // 0x126 PushS
	var_67_int = 1; // 0x127 PushI
	var_68_int = var_16_int + var_67_int; // 0x128 Add
	var_69_int = var_66_string + var_68_int; // 0x129 Add
	PlaySound(var_69_int); // 0x12a Func
	
Label_300:
	func_211(); // 0x12d Call
	var_13_object = 0; // 0x12f SetNull
	}


task_0_event_1000(var_0_string, var_1_string)
{
	var_2_float = 0; var_3_float = 0; // 0x131 PushV
	var_4_string = "rain"; // 0x132 PushS
	var_5_bool = var_0_string == var_4_string; // 0x133 Eq
	if(var_5_bool == 0) goto Label_314; // 0x134 JumpB
	var_6_int = 0; // 0x135 PushV
	var_6_int = 40; // 0x136 MovI
	func_220(); // 0x137 Call
	goto Label_323; // 0x139 Jump
	
Label_323:
	return 2; // 0x143 Return
	
Label_314:
	var_70_string = "wmod_level"; // 0x13a PushS
	var_71_bool = var_0_string == var_70_string; // 0x13b Eq
	if(var_71_bool == 0) goto Label_323; // 0x13c JumpB
	GetModifierLevel(var_3_float); // 0x13d Func
	var_72_string = "Level: "; // 0x13f PushS
	var_73_int = var_72_string + var_3_float; // 0x140 Add
	Trace(var_73_int); // 0x141 Func
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	func_181(); // 0x2 Call
	var_11_string = "night_bk.tex"; // 0x4 PushS
	var_12_string = "night_ft.tex"; // 0x5 PushS
	var_13_string = "night_lt.tex"; // 0x6 PushS
	var_14_string = "night_rt.tex"; // 0x7 PushS
	var_15_string = "night_up.tex"; // 0x8 PushS
	var_16_string = "night_rain_bk.tex"; // 0x9 PushS
	var_17_string = "night_rain_ft.tex"; // 0xa PushS
	var_18_string = "night_rain_lt.tex"; // 0xb PushS
	var_19_string = "night_rain_rt.tex"; // 0xc PushS
	var_20_string = "night_rain_up.tex"; // 0xd PushS
	var_21_bool = 0; // 0xe PushB
	var_22_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	var_23_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x10 PushVec
	var_24_float = 3000.0; // 0x11 PushF
	var_25_float = 5000.0; // 0x12 PushF
	var_26_cvector = CVector(0.03922, 0.03922, 0.03922); // 0x13 PushVec
	var_27_cvector = CVector(0.03922, 0.03922, 0.03922); // 0x14 PushVec
	ForceWeather(var_11_string, var_12_string, var_13_string, var_14_string, var_15_string, var_16_string, var_17_string, var_18_string, var_19_string, var_20_string, var_21_bool, var_22_cvector, var_23_cvector, var_24_float, var_25_float, var_26_cvector, var_27_cvector); // 0x15 Func
	GetGameTime(var_1_float); // 0x17 Func
	var_28_bool = 0; // 0x19 PushV
	var_28_bool = 1; // 0x1a MovB
	var_29_float = 5.99; // 0x1b PushF
	var_30_bool = var_1_float < var_29_float; // 0x1c LT
	if(var_30_bool == 0) goto Label_34; // 0x1d JumpB
	var_31_float = 6.01; // 0x1e PushF
	var_32_bool = var_1_float > var_31_float; // 0x1f GT
	if(var_32_bool == 0) goto Label_34; // 0x20 JumpB
	var_28_bool = 0; // 0x21 MovB
	
Label_34:
	if(var_28_bool == 0) goto Label_39; // 0x22 JumpB
	var_33_string = "Wrong time"; // 0x23 PushS
	Trace(var_33_string); // 0x24 Func
	return 2; // 0x26 Return
	
Label_39:
	GetGameTime(var_1_float); // 0x27 Func
	var_34_string = "dawn_bk.tex"; // 0x29 PushS
	var_35_string = "dawn_ft.tex"; // 0x2a PushS
	var_36_string = "dawn_lt.tex"; // 0x2b PushS
	var_37_string = "dawn_rt.tex"; // 0x2c PushS
	var_38_string = "dawn_up.tex"; // 0x2d PushS
	var_39_string = "dawn_rain_bk.tex"; // 0x2e PushS
	var_40_string = "dawn_rain_ft.tex"; // 0x2f PushS
	var_41_string = "dawn_rain_lt.tex"; // 0x30 PushS
	var_42_string = "dawn_rain_rt.tex"; // 0x31 PushS
	var_43_string = "dawn_rain_up.tex"; // 0x32 PushS
	var_44_bool = 0; // 0x33 PushB
	var_45_cvector = CVector(0.39216, 0.25882, 0.25882); // 0x34 PushVec
	var_46_cvector = CVector(0.39216, 0.25882, 0.25882); // 0x35 PushVec
	var_47_float = 3000.0; // 0x36 PushF
	var_48_float = 5000.0; // 0x37 PushF
	var_49_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x38 PushVec
	var_50_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x39 PushVec
	var_51_float = 0; var_52_float = 0; var_53_float = 0; // 0x3a PushV
	var_52_float = 8.0; // 0x3b MovF
	var_53_float = var_1_float; // 0x3c Mov
	func_324(var_51_float, var_52_float, var_53_float); // 0x3d Call
	ChangeWeather(var_34_string, var_35_string, var_36_string, var_37_string, var_38_string, var_39_string, var_40_string, var_41_string, var_42_string, var_43_string, var_44_bool, var_45_cvector, var_46_cvector, var_47_float, var_48_float, var_49_cvector, var_50_cvector, var_51_float); // 0x3f Func
	GetGameTime(var_1_float); // 0x41 Func
	var_58_float = 0; var_59_float = 0; var_60_float = 0; // 0x43 PushV
	var_59_float = 10.0; // 0x44 MovF
	var_60_float = var_1_float; // 0x45 Mov
	func_324(var_58_float, var_59_float, var_60_float); // 0x46 Call
	Sleep(var_58_float); // 0x48 Func
	GetGameTime(var_1_float); // 0x4a Func
	var_61_string = "day_bk.tex"; // 0x4c PushS
	var_62_string = "day_ft.tex"; // 0x4d PushS
	var_63_string = "day_lt.tex"; // 0x4e PushS
	var_64_string = "day_rt.tex"; // 0x4f PushS
	var_65_string = "day_up.tex"; // 0x50 PushS
	var_66_string = "day_rain_bk.tex"; // 0x51 PushS
	var_67_string = "day_rain_ft.tex"; // 0x52 PushS
	var_68_string = "day_rain_lt.tex"; // 0x53 PushS
	var_69_string = "day_rain_rt.tex"; // 0x54 PushS
	var_70_string = "day_rain_up.tex"; // 0x55 PushS
	var_71_bool = 0; // 0x56 PushB
	var_72_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x57 PushVec
	var_73_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x58 PushVec
	var_74_float = 3000.0; // 0x59 PushF
	var_75_float = 5000.0; // 0x5a PushF
	var_76_cvector = CVector(0.70196, 0.63137, 0.53725); // 0x5b PushVec
	var_77_cvector = CVector(0.70196, 0.63137, 0.53725); // 0x5c PushVec
	var_78_float = 0; var_79_float = 0; var_80_float = 0; // 0x5d PushV
	var_79_float = 11.0; // 0x5e MovF
	var_80_float = var_1_float; // 0x5f Mov
	func_324(var_78_float, var_79_float, var_80_float); // 0x60 Call
	ChangeWeather(var_61_string, var_62_string, var_63_string, var_64_string, var_65_string, var_66_string, var_67_string, var_68_string, var_69_string, var_70_string, var_71_bool, var_72_cvector, var_73_cvector, var_74_float, var_75_float, var_76_cvector, var_77_cvector, var_78_float); // 0x62 Func
	GetGameTime(var_1_float); // 0x64 Func
	var_81_float = 0; var_82_float = 0; var_83_float = 0; // 0x66 PushV
	var_82_float = 18.0; // 0x67 MovF
	var_83_float = var_1_float; // 0x68 Mov
	func_324(var_81_float, var_82_float, var_83_float); // 0x69 Call
	Sleep(var_81_float); // 0x6b Func
	GetGameTime(var_1_float); // 0x6d Func
	var_84_string = "dawn_bk.tex"; // 0x6f PushS
	var_85_string = "dawn_ft.tex"; // 0x70 PushS
	var_86_string = "dawn_lt.tex"; // 0x71 PushS
	var_87_string = "dawn_rt.tex"; // 0x72 PushS
	var_88_string = "dawn_up.tex"; // 0x73 PushS
	var_89_string = "dawn_rain_bk.tex"; // 0x74 PushS
	var_90_string = "dawn_rain_ft.tex"; // 0x75 PushS
	var_91_string = "dawn_rain_lt.tex"; // 0x76 PushS
	var_92_string = "dawn_rain_rt.tex"; // 0x77 PushS
	var_93_string = "dawn_rain_up.tex"; // 0x78 PushS
	var_94_bool = 0; // 0x79 PushB
	var_95_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x7a PushVec
	var_96_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x7b PushVec
	var_97_float = 3000.0; // 0x7c PushF
	var_98_float = 5000.0; // 0x7d PushF
	var_99_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x7e PushVec
	var_100_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x7f PushVec
	var_101_float = 0; var_102_float = 0; var_103_float = 0; // 0x80 PushV
	var_102_float = 19.0; // 0x81 MovF
	var_103_float = var_1_float; // 0x82 Mov
	func_324(var_101_float, var_102_float, var_103_float); // 0x83 Call
	ChangeWeather(var_84_string, var_85_string, var_86_string, var_87_string, var_88_string, var_89_string, var_90_string, var_91_string, var_92_string, var_93_string, var_94_bool, var_95_cvector, var_96_cvector, var_97_float, var_98_float, var_99_cvector, var_100_cvector, var_101_float); // 0x85 Func
	GetGameTime(var_1_float); // 0x87 Func
	var_104_float = 0; var_105_float = 0; var_106_float = 0; // 0x89 PushV
	var_105_float = 20.0; // 0x8a MovF
	var_106_float = var_1_float; // 0x8b Mov
	func_324(var_104_float, var_105_float, var_106_float); // 0x8c Call
	Sleep(var_104_float); // 0x8e Func
	GetGameTime(var_1_float); // 0x90 Func
	var_107_string = "night_bk.tex"; // 0x92 PushS
	var_108_string = "night_ft.tex"; // 0x93 PushS
	var_109_string = "night_lt.tex"; // 0x94 PushS
	var_110_string = "night_rt.tex"; // 0x95 PushS
	var_111_string = "night_up.tex"; // 0x96 PushS
	var_112_string = "night_rain_bk.tex"; // 0x97 PushS
	var_113_string = "night_rain_ft.tex"; // 0x98 PushS
	var_114_string = "night_rain_lt.tex"; // 0x99 PushS
	var_115_string = "night_rain_rt.tex"; // 0x9a PushS
	var_116_string = "night_rain_up.tex"; // 0x9b PushS
	var_117_bool = 0; // 0x9c PushB
	var_118_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x9d PushVec
	var_119_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x9e PushVec
	var_120_float = 3000.0; // 0x9f PushF
	var_121_float = 5000.0; // 0xa0 PushF
	var_122_cvector = CVector(0.03922, 0.03922, 0.03922); // 0xa1 PushVec
	var_123_cvector = CVector(0.03922, 0.03922, 0.03922); // 0xa2 PushVec
	var_124_float = 0; var_125_float = 0; var_126_float = 0; // 0xa3 PushV
	var_125_float = 21.0; // 0xa4 MovF
	var_126_float = var_1_float; // 0xa5 Mov
	func_324(var_124_float, var_125_float, var_126_float); // 0xa6 Call
	ChangeWeather(var_107_string, var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string, var_114_string, var_115_string, var_116_string, var_117_bool, var_118_cvector, var_119_cvector, var_120_float, var_121_float, var_122_cvector, var_123_cvector, var_124_float); // 0xa8 Func
	GetGameTime(var_1_float); // 0xaa Func
	var_127_float = 0; var_128_float = 0; var_129_float = 0; // 0xac PushV
	var_128_float = 6.0; // 0xad MovF
	var_129_float = var_1_float; // 0xae Mov
	func_324(var_127_float, var_128_float, var_129_float); // 0xaf Call
	Sleep(var_127_float); // 0xb1 Func
	goto Label_39; // 0xb3 Jump
}


func_211()
{
	var_33_float = 0; var_34_float = 0; // 0xd3 PushV
	var_35_float = 0.5; // 0xd4 PushF
	var_36_float = 1.0; // 0xd5 PushF
	rand(var_34_float, var_35_float, var_36_float); // 0xd6 Func
	var_37_int = 43; // 0xd8 PushI
	SetTimer(var_37_int, var_34_float); // 0xd9 Func
	return 2; // 0xdb Return
}


func_196()
{
	var_24_float = 0; var_25_float = 0; // 0xc4 PushV
	var_26_int = 1; // 0xc5 PushI
	var_27_int = 8; // 0xc6 PushI
	rand(var_25_float, var_26_int, var_27_int); // 0xc7 Func
	var_28_int = 41; // 0xc9 PushI
	SetTimer(var_28_int, var_25_float); // 0xca Func
	var_29_string = "Forecast: rain ends in "; // 0xcc PushS
	var_30_int = var_29_string + var_25_float; // 0xcd Add
	var_31_string = " hours"; // 0xce PushS
	var_32_int = var_30_int + var_31_string; // 0xcf Add
	Trace(var_32_int); // 0xd0 Func
	return 2; // 0xd2 Return
}


func_181()
{
	var_2_float = 0; var_3_float = 0; // 0xb5 PushV
	var_4_int = 2; // 0xb6 PushI
	var_5_int = 20; // 0xb7 PushI
	rand(var_3_float, var_4_int, var_5_int); // 0xb8 Func
	var_6_int = 40; // 0xba PushI
	SetTimer(var_6_int, var_3_float); // 0xbb Func
	var_7_string = "Forecast: rain begins in "; // 0xbd PushS
	var_8_int = var_7_string + var_3_float; // 0xbe Add
	var_9_string = " hours"; // 0xbf PushS
	var_10_int = var_8_int + var_9_string; // 0xc0 Add
	Trace(var_10_int); // 0xc1 Func
	return 2; // 0xc3 Return
}


func_324(var_51_float, var_52_float, var_53_float)
{
	var_54_int = 24; // 0x145 PushI
	var_53_float = var_53_float % var_54_int; // 0x146 Mod2
	var_55_bool = var_52_float < var_53_float; // 0x147 LT
	if(var_55_bool == 0) goto Label_333; // 0x148 JumpB
	var_56_int = 24; // 0x149 PushI
	var_57_int = var_52_float + var_56_int; // 0x14a Add
	var_51_float = var_57_int - var_53_float; // 0x14b Sub2
	return 0; // 0x14c Return
	
Label_333:
	var_51_float = var_52_float - var_53_float; // 0x14d Sub2
	return 0; // 0x14e Return
}


