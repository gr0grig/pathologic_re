	task_0_event_7(var_0_bool, var_1_string, var_2_string, var_3_float, var_4_float, var_7_int)
	{
	var_8_float = 0; var_9_object = Obj(); var_10_bool = 0; var_11_float = 0; var_12_int = 0; var_13_float = 0; var_14_object = Obj(); var_15_bool = 0; var_16_float = 0; var_17_int = 0; // 0xdc PushV
	var_18_int = 40; // 0xdd PushI
	var_19_bool = var_7_int == var_18_int; // 0xde Eq
	if(var_19_bool == 0) goto Label_244; // 0xdf JumpB
	var_20_int = 40; // 0xe0 PushI
	KillTimer(var_20_int); // 0xe1 Func
	Rain(); // 0xe3 Func
	var_21_float = 0.1; // 0xe5 PushF
	var_22_int = 1; // 0xe6 PushI
	rand(var_13_float, var_21_float, var_22_int); // 0xe7 Func
	var_23_int = 2; // 0xe9 PushI
	var_24_float = var_13_float * var_23_int; // 0xea Mult
	ModLinear(var_13_float, var_24_float); // 0xeb Func
	func_196(); // 0xee NEW_2
	func_211(); // 0xf1 NEW_2
	goto Label_304; // 0xf3 Jump
	
Label_304:
	return 10; // 0x130 Return
	
Label_244:
	var_39_int = 41; // 0xf4 PushI
	var_40_bool = var_7_int == var_39_int; // 0xf5 Eq
	if(var_40_bool == 0) goto Label_259; // 0xf6 JumpB
	var_41_int = 41; // 0xf7 PushI
	KillTimer(var_41_int); // 0xf8 Func
	var_42_int = 0; // 0xfa PushI
	var_43_int = 2; // 0xfb PushI
	ModLinear(var_42_int, var_43_int); // 0xfc Func
	var_44_int = 42; // 0xfe PushI
	var_45_int = 2; // 0xff PushI
	SetTimer(var_44_int, var_45_int); // 0x100 Func
	goto Label_304; // 0x102 Jump
	
Label_259:
	var_46_int = 42; // 0x103 PushI
	var_47_bool = var_7_int == var_46_int; // 0x104 Eq
	if(var_47_bool == 0) goto Label_273; // 0x105 JumpB
	var_48_int = 42; // 0x106 PushI
	KillTimer(var_48_int); // 0x107 Func
	Bright(); // 0x109 Func
	ModNothing(); // 0x10b Func
	func_181(); // 0x10e NEW_2
	goto Label_304; // 0x110 Jump
	
Label_273:
	var_58_int = 43; // 0x111 PushI
	var_59_bool = var_7_int == var_58_int; // 0x112 Eq
	if(var_59_bool == 0) goto Label_304; // 0x113 JumpB
	GetActiveScene(var_14_object); // 0x114 Func
	var_60_string = "CanPlayThunder"; // 0x116 PushS
	var_61_int = 1; // 0x117 PushI
	var_62_bool = IsFuncExist(var_14_object, var_60_string, var_61_int); // 0x118 FuncExist
	if(var_62_bool == 0) goto Label_300; // 0x119 JumpB
	CanPlayThunder(var_15_bool); // 0x11a ObjFunc
	var_63_bool = var_15_bool; // 0x11c Push
	if(var_63_bool == 0) goto Label_300; // 0x11d JumpB
	GetModifierLevel(var_16_float); // 0x11e Func
	var_64_float = 0.3; // 0x120 PushF
	var_65_bool = var_16_float > var_64_float; // 0x121 GT
	if(var_65_bool == 0) goto Label_300; // 0x122 JumpB
	var_66_int = 3; // 0x123 PushI
	irand(var_17_int, var_66_int); // 0x124 Func
	var_67_string = "thunder"; // 0x126 PushS
	var_68_int = 1; // 0x127 PushI
	var_69_int = var_17_int + var_68_int; // 0x128 Add
	var_70_int = var_67_string + var_69_int; // 0x129 Add
	PlaySound(var_70_int); // 0x12a Func
	
Label_300:
	func_211(); // 0x12d NEW_2
	var_14_object = 0; // 0x12f SetNull
	}


task_0_event_1000(var_0_bool, var_1_string, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x131 PushV
	var_5_string = "rain"; // 0x132 PushS
	var_6_bool = var_1_string == var_5_string; // 0x133 Eq
	if(var_6_bool == 0) goto Label_314; // 0x134 JumpB
	var_7_int = 0; // 0x135 PushV
	var_7_int = 40; // 0x136 MovI
	func_220(); // 0x137 NEW_2
	goto Label_337; // 0x139 Jump
	
Label_337:
	return 2; // 0x151 Return
	
Label_314:
	var_71_string = "wmod_level"; // 0x13a PushS
	var_72_bool = var_1_string == var_71_string; // 0x13b Eq
	if(var_72_bool == 0) goto Label_324; // 0x13c JumpB
	GetModifierLevel(var_4_float); // 0x13d Func
	var_73_string = "Level: "; // 0x13f PushS
	var_74_int = var_73_string + var_4_float; // 0x140 Add
	Trace(var_74_int); // 0x141 Func
	goto Label_337; // 0x143 Jump
	
Label_324:
	var_75_string = "wdisease"; // 0x144 PushS
	var_76_bool = var_1_string == var_75_string; // 0x145 Eq
	if(var_76_bool == 0) goto Label_331; // 0x146 JumpB
	func_391(var_4_float); // 0x148 NEW_2
	goto Label_337; // 0x14a Jump
	
Label_331:
	var_92_string = "wnormal"; // 0x14b PushS
	var_93_bool = var_1_string == var_92_string; // 0x14c Eq
	if(var_93_bool == 0) goto Label_337; // 0x14d JumpB
	func_372(var_4_float); // 0x14f NEW_2
}


task_0_event_8(var_0_bool, var_1_int)
{
	var_2_int = -1; // 0x153 PushI
	var_3_bool = var_1_int == var_2_int; // 0x154 Eq
	if(var_3_bool == 0) goto Label_346; // 0x155 JumpB
	func_372(var_1_int); // 0x157 NEW_2
	goto Label_371; // 0x159 Jump
	
Label_371:
	return 0; // 0x173 Return
	
Label_346:
	var_14_string = "Region: "; // 0x15a PushS
	var_15_int = var_14_string + var_1_int; // 0x15b Add
	var_16_string = " (state: "; // 0x15c PushS
	var_17_int = var_15_int + var_16_string; // 0x15d Add
	var_18_bool = 0; var_19_int = 0; // 0x15e PushV
	var_19_int = var_1_int; // 0x15f Mov
	func_427(var_18_bool, var_19_int); // 0x160 NEW_2
	var_30_int = var_17_int + var_18_bool; // 0x162 Add
	var_31_string = ")"; // 0x163 PushS
	var_32_int = var_30_int + var_31_string; // 0x164 Add
	Trace(var_32_int); // 0x165 Func
	var_33_bool = 0; var_34_int = 0; // 0x167 PushV
	var_34_int = var_1_int; // 0x168 Mov
	func_427(var_33_bool, var_34_int); // 0x169 NEW_2
	if(var_33_bool == 0) goto Label_368; // 0x16b JumpB
	func_391(var_1_int); // 0x16d NEW_2
	goto Label_371; // 0x16f Jump
	
Label_368:
	func_372(var_1_int); // 0x171 NEW_2
}


main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x0 PushV
	func_181(); // 0x2 NEW_2
	var_12_string = "night_bk.tex"; // 0x4 PushS
	var_13_string = "night_ft.tex"; // 0x5 PushS
	var_14_string = "night_lt.tex"; // 0x6 PushS
	var_15_string = "night_rt.tex"; // 0x7 PushS
	var_16_string = "night_up.tex"; // 0x8 PushS
	var_17_string = "night_rain_bk.tex"; // 0x9 PushS
	var_18_string = "night_rain_ft.tex"; // 0xa PushS
	var_19_string = "night_rain_lt.tex"; // 0xb PushS
	var_20_string = "night_rain_rt.tex"; // 0xc PushS
	var_21_string = "night_rain_up.tex"; // 0xd PushS
	var_22_bool = 0; // 0xe PushB
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	var_24_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x10 PushVec
	var_25_float = 3000.0; // 0x11 PushF
	var_26_float = 5000.0; // 0x12 PushF
	var_27_cvector = CVector(0.08235, 0.07843, 0.09804); // 0x13 PushVec
	var_28_cvector = CVector(0.08235, 0.07843, 0.09804); // 0x14 PushVec
	ForceWeather(var_12_string, var_13_string, var_14_string, var_15_string, var_16_string, var_17_string, var_18_string, var_19_string, var_20_string, var_21_string, var_22_bool, var_23_cvector, var_24_cvector, var_25_float, var_26_float, var_27_cvector, var_28_cvector); // 0x15 Func
	GetGameTime(var_2_float); // 0x17 Func
	var_29_bool = 0; // 0x19 PushV
	var_29_bool = 1; // 0x1a MovB
	var_30_float = 5.99; // 0x1b PushF
	var_31_bool = var_2_float < var_30_float; // 0x1c LT
	if(var_31_bool == 0) goto Label_34; // 0x1d JumpB
	var_32_float = 6.01; // 0x1e PushF
	var_33_bool = var_2_float > var_32_float; // 0x1f GT
	if(var_33_bool == 0) goto Label_34; // 0x20 JumpB
	var_29_bool = 0; // 0x21 MovB
	
Label_34:
	if(var_29_bool == 0) goto Label_39; // 0x22 JumpB
	var_34_string = "Wrong time"; // 0x23 PushS
	Trace(var_34_string); // 0x24 Func
	return 2; // 0x26 Return
	
Label_39:
	GetGameTime(var_2_float); // 0x27 Func
	var_35_string = "dawn_bk.tex"; // 0x29 PushS
	var_36_string = "dawn_ft.tex"; // 0x2a PushS
	var_37_string = "dawn_lt.tex"; // 0x2b PushS
	var_38_string = "dawn_rt.tex"; // 0x2c PushS
	var_39_string = "dawn_up.tex"; // 0x2d PushS
	var_40_string = "dawn_rain_bk.tex"; // 0x2e PushS
	var_41_string = "dawn_rain_ft.tex"; // 0x2f PushS
	var_42_string = "dawn_rain_lt.tex"; // 0x30 PushS
	var_43_string = "dawn_rain_rt.tex"; // 0x31 PushS
	var_44_string = "dawn_rain_up.tex"; // 0x32 PushS
	var_45_bool = 0; // 0x33 PushB
	var_46_cvector = CVector(0.33333, 0.15686, 0.03137); // 0x34 PushVec
	var_47_cvector = CVector(0.33333, 0.15686, 0.03137); // 0x35 PushVec
	var_48_float = 3000.0; // 0x36 PushF
	var_49_float = 5000.0; // 0x37 PushF
	var_50_cvector = CVector(0.38431, 0.27843, 0.16471); // 0x38 PushVec
	var_51_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x39 PushVec
	var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x3a PushV
	var_53_float = 8.0; // 0x3b MovF
	var_54_float = var_2_float; // 0x3c Mov
	func_439(var_52_float, var_53_float, var_54_float); // 0x3d NEW_2
	ChangeWeather(var_35_string, var_36_string, var_37_string, var_38_string, var_39_string, var_40_string, var_41_string, var_42_string, var_43_string, var_44_string, var_45_bool, var_46_cvector, var_47_cvector, var_48_float, var_49_float, var_50_cvector, var_51_cvector, var_52_float); // 0x3f Func
	GetGameTime(var_2_float); // 0x41 Func
	var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x43 PushV
	var_60_float = 10.0; // 0x44 MovF
	var_61_float = var_2_float; // 0x45 Mov
	func_439(var_59_float, var_60_float, var_61_float); // 0x46 NEW_2
	Sleep(var_59_float); // 0x48 Func
	GetGameTime(var_2_float); // 0x4a Func
	var_62_string = "day_bk.tex"; // 0x4c PushS
	var_63_string = "day_ft.tex"; // 0x4d PushS
	var_64_string = "day_lt.tex"; // 0x4e PushS
	var_65_string = "day_rt.tex"; // 0x4f PushS
	var_66_string = "day_up.tex"; // 0x50 PushS
	var_67_string = "day_rain_bk.tex"; // 0x51 PushS
	var_68_string = "day_rain_ft.tex"; // 0x52 PushS
	var_69_string = "day_rain_lt.tex"; // 0x53 PushS
	var_70_string = "day_rain_rt.tex"; // 0x54 PushS
	var_71_string = "day_rain_up.tex"; // 0x55 PushS
	var_72_bool = 0; // 0x56 PushB
	var_73_cvector = CVector(0.39216, 0.35294, 0.29412); // 0x57 PushVec
	var_74_cvector = CVector(0.27451, 0.27451, 0.30588); // 0x58 PushVec
	var_75_float = 3000.0; // 0x59 PushF
	var_76_float = 5000.0; // 0x5a PushF
	var_77_cvector = CVector(0.31373, 0.25098, 0.2549); // 0x5b PushVec
	var_78_cvector = CVector(0.26667, 0.3098, 0.25882); // 0x5c PushVec
	var_79_float = 0; var_80_float = 0; var_81_float = 0; // 0x5d PushV
	var_80_float = 11.0; // 0x5e MovF
	var_81_float = var_2_float; // 0x5f Mov
	func_439(var_79_float, var_80_float, var_81_float); // 0x60 NEW_2
	ChangeWeather(var_62_string, var_63_string, var_64_string, var_65_string, var_66_string, var_67_string, var_68_string, var_69_string, var_70_string, var_71_string, var_72_bool, var_73_cvector, var_74_cvector, var_75_float, var_76_float, var_77_cvector, var_78_cvector, var_79_float); // 0x62 Func
	GetGameTime(var_2_float); // 0x64 Func
	var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0x66 PushV
	var_83_float = 18.0; // 0x67 MovF
	var_84_float = var_2_float; // 0x68 Mov
	func_439(var_82_float, var_83_float, var_84_float); // 0x69 NEW_2
	Sleep(var_82_float); // 0x6b Func
	GetGameTime(var_2_float); // 0x6d Func
	var_85_string = "dawn_bk.tex"; // 0x6f PushS
	var_86_string = "dawn_ft.tex"; // 0x70 PushS
	var_87_string = "dawn_lt.tex"; // 0x71 PushS
	var_88_string = "dawn_rt.tex"; // 0x72 PushS
	var_89_string = "dawn_up.tex"; // 0x73 PushS
	var_90_string = "dawn_rain_bk.tex"; // 0x74 PushS
	var_91_string = "dawn_rain_ft.tex"; // 0x75 PushS
	var_92_string = "dawn_rain_lt.tex"; // 0x76 PushS
	var_93_string = "dawn_rain_rt.tex"; // 0x77 PushS
	var_94_string = "dawn_rain_up.tex"; // 0x78 PushS
	var_95_bool = 0; // 0x79 PushB
	var_96_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x7a PushVec
	var_97_cvector = CVector(0.35294, 0.31373, 0.26667); // 0x7b PushVec
	var_98_float = 3000.0; // 0x7c PushF
	var_99_float = 5000.0; // 0x7d PushF
	var_100_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x7e PushVec
	var_101_cvector = CVector(0.78431, 0.52157, 0.44314); // 0x7f PushVec
	var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x80 PushV
	var_103_float = 19.0; // 0x81 MovF
	var_104_float = var_2_float; // 0x82 Mov
	func_439(var_102_float, var_103_float, var_104_float); // 0x83 NEW_2
	ChangeWeather(var_85_string, var_86_string, var_87_string, var_88_string, var_89_string, var_90_string, var_91_string, var_92_string, var_93_string, var_94_string, var_95_bool, var_96_cvector, var_97_cvector, var_98_float, var_99_float, var_100_cvector, var_101_cvector, var_102_float); // 0x85 Func
	GetGameTime(var_2_float); // 0x87 Func
	var_105_float = 0; var_106_float = 0; var_107_float = 0; // 0x89 PushV
	var_106_float = 20.0; // 0x8a MovF
	var_107_float = var_2_float; // 0x8b Mov
	func_439(var_105_float, var_106_float, var_107_float); // 0x8c NEW_2
	Sleep(var_105_float); // 0x8e Func
	GetGameTime(var_2_float); // 0x90 Func
	var_108_string = "night_bk.tex"; // 0x92 PushS
	var_109_string = "night_ft.tex"; // 0x93 PushS
	var_110_string = "night_lt.tex"; // 0x94 PushS
	var_111_string = "night_rt.tex"; // 0x95 PushS
	var_112_string = "night_up.tex"; // 0x96 PushS
	var_113_string = "night_rain_bk.tex"; // 0x97 PushS
	var_114_string = "night_rain_ft.tex"; // 0x98 PushS
	var_115_string = "night_rain_lt.tex"; // 0x99 PushS
	var_116_string = "night_rain_rt.tex"; // 0x9a PushS
	var_117_string = "night_rain_up.tex"; // 0x9b PushS
	var_118_bool = 0; // 0x9c PushB
	var_119_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x9d PushVec
	var_120_cvector = CVector(0.07843, 0.07843, 0.07843); // 0x9e PushVec
	var_121_float = 3000.0; // 0x9f PushF
	var_122_float = 5000.0; // 0xa0 PushF
	var_123_cvector = CVector(0.08235, 0.07843, 0.09804); // 0xa1 PushVec
	var_124_cvector = CVector(0.08235, 0.07843, 0.09804); // 0xa2 PushVec
	var_125_float = 0; var_126_float = 0; var_127_float = 0; // 0xa3 PushV
	var_126_float = 21.0; // 0xa4 MovF
	var_127_float = var_2_float; // 0xa5 Mov
	func_439(var_125_float, var_126_float, var_127_float); // 0xa6 NEW_2
	ChangeWeather(var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string, var_114_string, var_115_string, var_116_string, var_117_string, var_118_bool, var_119_cvector, var_120_cvector, var_121_float, var_122_float, var_123_cvector, var_124_cvector, var_125_float); // 0xa8 Func
	GetGameTime(var_2_float); // 0xaa Func
	var_128_float = 0; var_129_float = 0; var_130_float = 0; // 0xac PushV
	var_129_float = 6.0; // 0xad MovF
	var_130_float = var_2_float; // 0xae Mov
	func_439(var_128_float, var_129_float, var_130_float); // 0xaf NEW_2
	Sleep(var_128_float); // 0xb1 Func
	goto Label_39; // 0xb3 Jump
}


func_196()
{
	var_25_float = 0; var_26_float = 0; // 0xc4 PushV
	var_27_int = 1; // 0xc5 PushI
	var_28_int = 8; // 0xc6 PushI
	rand(var_26_float, var_27_int, var_28_int); // 0xc7 Func
	var_29_int = 41; // 0xc9 PushI
	SetTimer(var_29_int, var_26_float); // 0xca Func
	var_30_string = "Forecast: rain ends in "; // 0xcc PushS
	var_31_int = var_30_string + var_26_float; // 0xcd Add
	var_32_string = " hours"; // 0xce PushS
	var_33_int = var_31_int + var_32_string; // 0xcf Add
	Trace(var_33_int); // 0xd0 Func
	return 2; // 0xd2 Return
}


func_421(var_22_string, var_23_int)
{
	var_24_string = "Region"; // 0x1a6 PushS
	var_25_int = var_24_string + var_23_int; // 0x1a7 Add
	var_26_string = "State"; // 0x1a8 PushS
	var_22_string = var_25_int + var_26_string; // 0x1a9 Add2
	return 0; // 0x1aa Return
}


func_391(var_0_bool)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x187 PushV
	var_37_bool = var_0_bool; // 0x188 PushT
	if(var_37_bool == 0) goto Label_395; // 0x189 JumpB
	return 2; // 0x18a Return
	
Label_395:
	var_0_bool = 1; // 0x18b TMovB
	var_38_int = 0; // 0x18c PushI
	GetColorMod(var_36_cvector, var_38_int); // 0x18d Func
	var_39_int = 0; // 0x18f PushI
	var_40_cvector = CVector(0.37647, 1.0, 0.83137); // 0x190 PushVec
	var_41_float = 0.2; // 0x191 PushF
	LinearColorMod(var_39_int, var_36_cvector, var_40_cvector, var_41_float); // 0x192 Func
	var_42_int = 1; // 0x194 PushI
	GetColorMod(var_36_cvector, var_42_int); // 0x195 Func
	var_43_int = 1; // 0x197 PushI
	var_44_cvector = CVector(0.28959, 0.76923, 0.63952); // 0x198 PushVec
	var_45_float = 0.2; // 0x199 PushF
	LinearColorMod(var_43_int, var_36_cvector, var_44_cvector, var_45_float); // 0x19a Func
	var_46_int = 2; // 0x19c PushI
	GetColorMod(var_36_cvector, var_46_int); // 0x19d Func
	var_47_int = 2; // 0x19f PushI
	var_48_cvector = CVector(0.37647, 1.0, 0.83137); // 0x1a0 PushVec
	var_49_float = 0.2; // 0x1a1 PushF
	LinearColorMod(var_47_int, var_36_cvector, var_48_cvector, var_49_float); // 0x1a2 Func
	return 2; // 0x1a4 Return
}


func_427(var_18_bool, var_19_int)
{
	var_20_int = 0; var_21_int = 0; // 0x1ab PushV
	var_22_string = ""; var_23_int = 0; // 0x1ac PushV
	var_23_int = var_19_int; // 0x1ad Mov
	func_421(var_22_string, var_23_int); // 0x1ae NEW_2
	GetVariable(var_22_string, var_21_int); // 0x1b0 Func
	var_27_int = 3; // 0x1b2 PushI
	var_28_int = var_21_int & var_27_int; // 0x1b3 And
	var_29_int = 1; // 0x1b4 PushI
	var_18_bool = var_28_int == var_29_int; // 0x1b5 Eq2
	return 2; // 0x1b6 Return
}


func_211()
{
	var_34_float = 0; var_35_float = 0; // 0xd3 PushV
	var_36_float = 0.5; // 0xd4 PushF
	var_37_float = 1.0; // 0xd5 PushF
	rand(var_35_float, var_36_float, var_37_float); // 0xd6 Func
	var_38_int = 43; // 0xd8 PushI
	SetTimer(var_38_int, var_35_float); // 0xd9 Func
	return 2; // 0xdb Return
}


func_372(var_0_bool)
{
	var_4_int = 0; var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_cvector = CVector(0,0,0); // 0x174 PushV
	var_8_bool = var_0_bool == 0; // 0x175 Not
	if(var_8_bool == 0) goto Label_376; // 0x176 JumpB
	return 4; // 0x177 Return
	
Label_376:
	var_0_bool = 0; // 0x178 TMovB
	var_6_int = 0; // 0x179 MovI
	
Label_378:
	var_9_int = 3; // 0x17a PushI
	var_10_bool = var_6_int < var_9_int; // 0x17b LT
	if(var_10_bool == 0) goto Label_390; // 0x17c JumpB
	GetColorMod(var_7_cvector, var_6_int); // 0x17d Func
	var_11_cvector = CVector(1.0, 1.0, 1.0); // 0x17f PushVec
	var_12_float = 0.2; // 0x180 PushF
	LinearColorMod(var_6_int, var_7_cvector, var_11_cvector, var_12_float); // 0x181 Func
	var_13_int = 1; // 0x183 PushI
	var_6_int = var_6_int + var_13_int; // 0x184 Add2
	goto Label_378; // 0x185 Jump
	
Label_390:
	return 4; // 0x186 Return
}


func_181()
{
	var_3_float = 0; var_4_float = 0; // 0xb5 PushV
	var_5_int = 2; // 0xb6 PushI
	var_6_int = 20; // 0xb7 PushI
	rand(var_4_float, var_5_int, var_6_int); // 0xb8 Func
	var_7_int = 40; // 0xba PushI
	SetTimer(var_7_int, var_4_float); // 0xbb Func
	var_8_string = "Forecast: rain begins in "; // 0xbd PushS
	var_9_int = var_8_string + var_4_float; // 0xbe Add
	var_10_string = " hours"; // 0xbf PushS
	var_11_int = var_9_int + var_10_string; // 0xc0 Add
	Trace(var_11_int); // 0xc1 Func
	return 2; // 0xc3 Return
}


func_439(var_52_float, var_53_float, var_54_float)
{
	var_55_int = 24; // 0x1b8 PushI
	var_54_float = var_54_float % var_55_int; // 0x1b9 Mod2
	var_56_bool = var_53_float < var_54_float; // 0x1ba LT
	if(var_56_bool == 0) goto Label_448; // 0x1bb JumpB
	var_57_int = 24; // 0x1bc PushI
	var_58_int = var_53_float + var_57_int; // 0x1bd Add
	var_52_float = var_58_int - var_54_float; // 0x1be Sub2
	return 0; // 0x1bf Return
	
Label_448:
	var_52_float = var_53_float - var_54_float; // 0x1c0 Sub2
	return 0; // 0x1c1 Return
}


