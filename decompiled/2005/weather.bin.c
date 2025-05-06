	task_0_event_7(var_0_int, var_1_bool, var_2_string, var_3_string, var_4_float, var_5_float, var_8_int)
	{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; // 0x10d PushV
	var_23_int = 40; // 0x10e PushI
	var_24_bool = var_8_int == var_23_int; // 0x10f Eq
	if(var_24_bool == 0) goto Label_293; // 0x110 JumpB
	var_25_int = 40; // 0x111 PushI
	KillTimer(var_25_int); // 0x112 Func
	Rain(); // 0x114 Func
	var_26_float = 0.2; // 0x116 PushF
	var_27_int = 1; // 0x117 PushI
	rand(var_16_float, var_26_float, var_27_int); // 0x118 Func
	func_252(); // 0x11b NEW_2
	var_37_int = 2; // 0x11d PushI
	var_38_float = var_16_float * var_37_int; // 0x11e Mult
	ModLinear(var_16_float, var_38_float); // 0x11f Func
	func_237(); // 0x122 NEW_2
	goto Label_449; // 0x124 Jump
	
Label_449:
	return 14; // 0x1c1 Return
	
Label_293:
	var_48_int = 41; // 0x125 PushI
	var_49_bool = var_8_int == var_48_int; // 0x126 Eq
	if(var_49_bool == 0) goto Label_308; // 0x127 JumpB
	var_50_int = 41; // 0x128 PushI
	KillTimer(var_50_int); // 0x129 Func
	var_51_int = 0; // 0x12b PushI
	var_52_int = 2; // 0x12c PushI
	ModLinear(var_51_int, var_52_int); // 0x12d Func
	var_53_int = 42; // 0x12f PushI
	var_54_int = 2; // 0x130 PushI
	SetTimer(var_53_int, var_54_int); // 0x131 Func
	goto Label_449; // 0x133 Jump
	
Label_308:
	var_55_int = 42; // 0x134 PushI
	var_56_bool = var_8_int == var_55_int; // 0x135 Eq
	if(var_56_bool == 0) goto Label_325; // 0x136 JumpB
	func_265(); // 0x138 NEW_2
	var_58_int = 42; // 0x13a PushI
	KillTimer(var_58_int); // 0x13b Func
	Bright(); // 0x13d Func
	ModNothing(); // 0x13f Func
	func_222(); // 0x142 NEW_2
	goto Label_449; // 0x144 Jump
	
Label_325:
	var_68_int = 43; // 0x145 PushI
	var_69_bool = var_8_int == var_68_int; // 0x146 Eq
	if(var_69_bool == 0) goto Label_344; // 0x147 JumpB
	func_252(); // 0x149 NEW_2
	var_70_bool = GlobalVars[0]; // 0x14b PushGE
	var_71_bool = var_70_bool == 0; // 0x14c Not
	if(var_71_bool == 0) goto Label_343; // 0x14d JumpB
	GetModifierLevel(var_17_float); // 0x14e Func
	var_72_float = 0.3; // 0x150 PushF
	var_73_bool = var_17_float > var_72_float; // 0x151 GT
	if(var_73_bool == 0) goto Label_343; // 0x152 JumpB
	var_74_bool = 0; // 0x153 PushV
	var_74_bool = 0; // 0x154 MovB
	func_450(var_22_int, var_74_bool); // 0x155 NEW_2
	
Label_343:
	goto Label_449; // 0x157 Jump
	
Label_344:
	var_85_bool = 0; // 0x158 PushV
	var_85_bool = 0; // 0x159 MovB
	var_86_int = 52; // 0x15a PushI
	var_87_bool = var_8_int >= var_86_int; // 0x15b GE
	if(var_87_bool == 0) goto Label_353; // 0x15c JumpB
	var_88_int = 60; // 0x15d PushI
	var_89_bool = var_8_int < var_88_int; // 0x15e LT
	if(var_89_bool == 0) goto Label_353; // 0x15f JumpB
	var_85_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_85_bool == 0) goto Label_381; // 0x161 JumpB
	KillTimer(var_8_int); // 0x162 Func
	var_90_int = 52; // 0x164 PushI
	var_91_int = var_8_int - var_90_int; // 0x165 Sub
	var_92_int = 2; // 0x166 PushI
	var_93_int = var_91_int / var_92_int; // 0x167 Mod
	if(var_93_int == 0) goto Label_365; // 0x168 JumpB
	var_94_cvector = CVector(1.0, 1.0, 0.71765); // 0x169 PushVec
	SetAmbientMod(var_94_cvector); // 0x16a Func
	goto Label_368; // 0x16c Jump
	
Label_368:
	var_95_float = 0.01; // 0x170 PushF
	var_96_float = 0.015; // 0x171 PushF
	rand(var_18_float, var_95_float, var_96_float); // 0x172 Func
	var_97_int = 1; // 0x174 PushI
	var_98_int = var_8_int + var_97_int; // 0x175 Add
	var_99_float = 0; var_100_float = 0; // 0x176 PushV
	var_100_float = var_18_float; // 0x177 Mov
	func_651(var_99_float, var_100_float); // 0x178 NEW_2
	SetTimer(var_98_int, var_99_float); // 0x17a Func
	goto Label_449; // 0x17c Jump
	
Label_365:
	var_101_cvector = CVector(0.0, 0.0, 0.0); // 0x16d PushVec
	SetAmbientMod(var_101_cvector); // 0x16e Func
	
Label_381:
	var_102_int = 60; // 0x17d PushI
	var_103_bool = var_8_int == var_102_int; // 0x17e Eq
	if(var_103_bool == 0) goto Label_406; // 0x17f JumpB
	KillTimer(var_8_int); // 0x180 Func
	var_104_cvector = CVector(0.0, 0.0, 0.0); // 0x182 PushVec
	SetAmbientMod(var_104_cvector); // 0x183 Func
	var_105_bool = var_1_bool; // 0x185 PushT
	if(var_105_bool == 0) goto Label_394; // 0x186 JumpB
	var_1_bool = 0; // 0x187 TMovB
	var_19_float = 0.1; // 0x188 MovF
	goto Label_398; // 0x189 Jump
	
Label_398:
	var_106_int = 50; // 0x18e PushI
	var_107_float = 0; var_108_float = 0; // 0x18f PushV
	var_108_float = var_19_float; // 0x190 Mov
	func_651(var_107_float, var_108_float); // 0x191 NEW_2
	SetTimer(var_106_int, var_107_float); // 0x193 Func
	goto Label_449; // 0x195 Jump
	
Label_394:
	var_109_int = 2; // 0x18a PushI
	var_110_int = 3; // 0x18b PushI
	rand(var_19_float, var_109_int, var_110_int); // 0x18c Func
	
Label_406:
	var_111_int = 50; // 0x196 PushI
	var_112_bool = var_8_int == var_111_int; // 0x197 Eq
	if(var_112_bool == 0) goto Label_440; // 0x198 JumpB
	var_113_int = 50; // 0x199 PushI
	KillTimer(var_113_int); // 0x19a Func
	GetActiveScene(var_20_object); // 0x19c Func
	var_114_string = "CanPlayThunder"; // 0x19e PushS
	var_115_int = 1; // 0x19f PushI
	var_116_bool = IsFuncExist(var_20_object, var_114_string, var_115_int); // 0x1a0 FuncExist
	if(var_116_bool == 0) goto Label_431; // 0x1a1 JumpB
	CanPlayThunder(var_21_bool); // 0x1a2 ObjFunc
	var_117_bool = var_21_bool; // 0x1a4 Push
	if(var_117_bool == 0) goto Label_431; // 0x1a5 JumpB
	var_118_int = 3; // 0x1a6 PushI
	irand(var_22_int, var_118_int); // 0x1a7 Func
	var_119_string = "thunder"; // 0x1a9 PushS
	var_120_int = 1; // 0x1aa PushI
	var_121_int = var_22_int + var_120_int; // 0x1ab Add
	var_122_int = var_119_string + var_121_int; // 0x1ac Add
	PlaySound(var_122_int); // 0x1ad Func
	
Label_431:
	var_123_int = 51; // 0x1af PushI
	var_124_float = 0; var_125_float = 0; // 0x1b0 PushV
	var_125_float = 6; // 0x1b1 MovI
	func_651(var_124_float, var_125_float); // 0x1b2 NEW_2
	SetTimer(var_123_int, var_124_float); // 0x1b4 Func
	var_20_object = 0; // 0x1b6 SetNull
	goto Label_449; // 0x1b7 Jump
	
Label_440:
	var_126_int = 51; // 0x1b8 PushI
	var_127_bool = var_8_int == var_126_int; // 0x1b9 Eq
	if(var_127_bool == 0) goto Label_449; // 0x1ba JumpB
	var_128_int = 51; // 0x1bb PushI
	KillTimer(var_128_int); // 0x1bc Func
	var_129_bool = GlobalVars[0]; // 0x1be PushGE
	var_129_bool = 0; // 0x1bf MovB
	GlobalVars[0] = var_129_bool; // 0x1c0 PopGE
	}


task_0_event_1000(var_0_int, var_1_bool, var_2_string, var_3_string)
{
	var_4_float = 0; var_5_float = 0; // 0x1da PushV
	var_6_string = "rain"; // 0x1db PushS
	var_7_bool = var_2_string == var_6_string; // 0x1dc Eq
	if(var_7_bool == 0) goto Label_483; // 0x1dd JumpB
	var_8_int = 0; // 0x1de PushV
	var_8_int = 40; // 0x1df MovI
	func_269(); // 0x1e0 NEW_2
	goto Label_517; // 0x1e2 Jump
	
Label_517:
	return 2; // 0x205 Return
	
Label_483:
	var_130_string = "wmod_level"; // 0x1e3 PushS
	var_131_bool = var_2_string == var_130_string; // 0x1e4 Eq
	if(var_131_bool == 0) goto Label_493; // 0x1e5 JumpB
	GetModifierLevel(var_5_float); // 0x1e6 Func
	var_132_string = "Level: "; // 0x1e8 PushS
	var_133_int = var_132_string + var_5_float; // 0x1e9 Add
	Trace(var_133_int); // 0x1ea Func
	goto Label_517; // 0x1ec Jump
	
Label_493:
	var_134_string = "wdisease"; // 0x1ed PushS
	var_135_bool = var_2_string == var_134_string; // 0x1ee Eq
	if(var_135_bool == 0) goto Label_500; // 0x1ef JumpB
	func_599(var_5_float); // 0x1f1 NEW_2
	goto Label_517; // 0x1f3 Jump
	
Label_500:
	var_152_string = "wnormal"; // 0x1f4 PushS
	var_153_bool = var_2_string == var_152_string; // 0x1f5 Eq
	if(var_153_bool == 0) goto Label_507; // 0x1f6 JumpB
	func_548(var_5_float); // 0x1f8 NEW_2
	goto Label_517; // 0x1fa Jump
	
Label_507:
	var_165_string = "lightning"; // 0x1fb PushS
	var_166_bool = var_2_string == var_165_string; // 0x1fc Eq
	if(var_166_bool == 0) goto Label_517; // 0x1fd JumpB
	var_167_bool = GlobalVars[0]; // 0x1fe PushGE
	var_168_bool = var_167_bool == 0; // 0x1ff Not
	if(var_168_bool == 0) goto Label_517; // 0x200 JumpB
	var_169_bool = 0; // 0x201 PushV
	var_169_bool = 0; // 0x202 MovB
	func_450(var_5_float, var_169_bool); // 0x203 NEW_2
}


task_0_event_8(var_0_int, var_1_bool, var_2_int)
{
	var_3_int = -1; // 0x207 PushI
	var_4_bool = var_2_int == var_3_int; // 0x208 Eq
	if(var_4_bool == 0) goto Label_526; // 0x209 JumpB
	func_548(var_2_int); // 0x20b NEW_2
	goto Label_547; // 0x20d Jump
	
Label_547:
	return 0; // 0x223 Return
	
Label_526:
	var_16_bool = 0; var_17_int = 0; // 0x20e PushV
	var_17_int = var_2_int; // 0x20f Mov
	func_662(var_16_bool, var_17_int); // 0x210 NEW_2
	if(var_16_bool == 0) goto Label_535; // 0x212 JumpB
	func_599(var_2_int); // 0x214 NEW_2
	goto Label_547; // 0x216 Jump
	
Label_535:
	var_44_bool = 0; var_45_int = 0; // 0x217 PushV
	var_45_int = var_2_int; // 0x218 Mov
	func_674(var_44_bool, var_45_int); // 0x219 NEW_2
	if(var_44_bool == 0) goto Label_544; // 0x21b JumpB
	func_568(var_2_int); // 0x21d NEW_2
	goto Label_547; // 0x21f Jump
	
Label_544:
	func_548(var_2_int); // 0x221 NEW_2
}


task_0_event_26(var_0_int, var_1_bool, var_2_string)
{
	var_3_string = "lightning"; // 0x277 PushS
	var_4_bool = var_2_string == var_3_string; // 0x278 Eq
	if(var_4_bool == 0) goto Label_641; // 0x279 JumpB
	var_5_bool = GlobalVars[0]; // 0x27a PushGE
	var_6_bool = var_5_bool == 0; // 0x27b Not
	if(var_6_bool == 0) goto Label_641; // 0x27c JumpB
	var_7_bool = 0; // 0x27d PushV
	var_7_bool = 1; // 0x27e MovB
	func_450(var_2_string, var_7_bool); // 0x27f NEW_2
	
Label_641:
	return 0; // 0x281 Return
}


main(var_0_int, var_1_bool)
{
	var_2_float = 0; var_3_float = 0; // 0x0 PushV
	func_222(); // 0x2 NEW_2
	var_13_string = "night_bk.tex"; // 0x4 PushS
	var_14_string = "night_ft.tex"; // 0x5 PushS
	var_15_string = "night_lt.tex"; // 0x6 PushS
	var_16_string = "night_rt.tex"; // 0x7 PushS
	var_17_string = "night_up.tex"; // 0x8 PushS
	var_18_string = "night_rain_bk.tex"; // 0x9 PushS
	var_19_string = "night_rain_ft.tex"; // 0xa PushS
	var_20_string = "night_rain_lt.tex"; // 0xb PushS
	var_21_string = "night_rain_rt.tex"; // 0xc PushS
	var_22_string = "night_rain_up.tex"; // 0xd PushS
	var_23_bool = 0; // 0xe PushB
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	var_25_cvector = CVector(0.27451, 0.27451, 0.27451); // 0x10 PushVec
	var_26_float = 3000.0; // 0x11 PushF
	var_27_float = 5000.0; // 0x12 PushF
	var_28_cvector = CVector(0.19608, 0.19608, 0.19608); // 0x13 PushVec
	var_29_cvector = CVector(0.19608, 0.19608, 0.19608); // 0x14 PushVec
	ForceWeather(var_13_string, var_14_string, var_15_string, var_16_string, var_17_string, var_18_string, var_19_string, var_20_string, var_21_string, var_22_string, var_23_bool, var_24_cvector, var_25_cvector, var_26_float, var_27_float, var_28_cvector, var_29_cvector); // 0x15 Func
	GetGameTime(var_3_float); // 0x17 Func
	var_30_bool = 0; // 0x19 PushV
	var_30_bool = 1; // 0x1a MovB
	var_31_float = 5.99; // 0x1b PushF
	var_32_bool = var_3_float < var_31_float; // 0x1c LT
	if(var_32_bool == 0) goto Label_34; // 0x1d JumpB
	var_33_float = 6.01; // 0x1e PushF
	var_34_bool = var_3_float > var_33_float; // 0x1f GT
	if(var_34_bool == 0) goto Label_34; // 0x20 JumpB
	var_30_bool = 0; // 0x21 MovB
	
Label_34:
	if(var_30_bool == 0) goto Label_39; // 0x22 JumpB
	var_35_string = "Wrong time"; // 0x23 PushS
	Trace(var_35_string); // 0x24 Func
	return 2; // 0x26 Return
	
Label_39:
	GetGameTime(var_3_float); // 0x27 Func
	var_36_string = "dawn_bk.tex"; // 0x29 PushS
	var_37_string = "dawn_ft.tex"; // 0x2a PushS
	var_38_string = "dawn_lt.tex"; // 0x2b PushS
	var_39_string = "dawn_rt.tex"; // 0x2c PushS
	var_40_string = "dawn_up.tex"; // 0x2d PushS
	var_41_string = "dawn_rain_bk.tex"; // 0x2e PushS
	var_42_string = "dawn_rain_ft.tex"; // 0x2f PushS
	var_43_string = "dawn_rain_lt.tex"; // 0x30 PushS
	var_44_string = "dawn_rain_rt.tex"; // 0x31 PushS
	var_45_string = "dawn_rain_up.tex"; // 0x32 PushS
	var_46_bool = 0; // 0x33 PushB
	var_47_cvector = CVector(0.5098, 0.27451, 0.18039); // 0x34 PushVec
	var_48_cvector = CVector(0.70588, 0.50588, 0.32157); // 0x35 PushVec
	var_49_float = 3000.0; // 0x36 PushF
	var_50_float = 5000.0; // 0x37 PushF
	var_51_cvector = CVector(0.6, 0.43922, 0.28235); // 0x38 PushVec
	var_52_cvector = CVector(0.48627, 0.34118, 0.21176); // 0x39 PushVec
	var_53_float = 0; var_54_float = 0; var_55_float = 0; // 0x3a PushV
	var_54_float = 8.0; // 0x3b MovF
	var_55_float = var_3_float; // 0x3c Mov
	func_686(var_53_float, var_54_float, var_55_float); // 0x3d NEW_2
	ChangeWeather(var_36_string, var_37_string, var_38_string, var_39_string, var_40_string, var_41_string, var_42_string, var_43_string, var_44_string, var_45_string, var_46_bool, var_47_cvector, var_48_cvector, var_49_float, var_50_float, var_51_cvector, var_52_cvector, var_53_float); // 0x3f Func
	GetGameTime(var_3_float); // 0x41 Func
	var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x43 PushV
	var_61_float = 10.0; // 0x44 MovF
	var_62_float = var_3_float; // 0x45 Mov
	func_686(var_60_float, var_61_float, var_62_float); // 0x46 NEW_2
	Sleep(var_60_float); // 0x48 Func
	GetGameTime(var_3_float); // 0x4a Func
	var_63_bool = 0; // 0x4c PushV
	var_63_bool = 1; // 0x4d MovB
	var_64_int = 0; // 0x4e PushV
	func_642(var_64_int); // 0x4f NEW_2
	var_70_int = 3; // 0x51 PushI
	var_71_bool = var_64_int < var_70_int; // 0x52 LT
	if(var_71_bool == 0) goto Label_91; // 0x53 JumpB
	var_72_int = 0; // 0x54 PushV
	func_642(var_72_int); // 0x55 NEW_2
	var_73_int = 12; // 0x57 PushI
	var_74_bool = var_72_int == var_73_int; // 0x58 Eq
	if(var_74_bool == 0) goto Label_91; // 0x59 JumpB
	var_63_bool = 0; // 0x5a MovB
	
Label_91:
	if(var_63_bool == 0) goto Label_117; // 0x5b JumpB
	var_75_string = "day_clear_bk.tex"; // 0x5c PushS
	var_76_string = "day_clear_ft.tex"; // 0x5d PushS
	var_77_string = "day_clear_lt.tex"; // 0x5e PushS
	var_78_string = "day_clear_rt.tex"; // 0x5f PushS
	var_79_string = "day_clear_up.tex"; // 0x60 PushS
	var_80_string = "day_rain_bk.tex"; // 0x61 PushS
	var_81_string = "day_rain_ft.tex"; // 0x62 PushS
	var_82_string = "day_rain_lt.tex"; // 0x63 PushS
	var_83_string = "day_rain_rt.tex"; // 0x64 PushS
	var_84_string = "day_rain_up.tex"; // 0x65 PushS
	var_85_bool = 0; // 0x66 PushB
	var_86_cvector = CVector(0.39216, 0.39216, 0.39216); // 0x67 PushVec
	var_87_cvector = CVector(0.58824, 0.5098, 0.47059); // 0x68 PushVec
	var_88_float = 3000.0; // 0x69 PushF
	var_89_float = 5000.0; // 0x6a PushF
	var_90_cvector = CVector(0.58824, 0.5098, 0.43137); // 0x6b PushVec
	var_91_cvector = CVector(0.37255, 0.32549, 0.2902); // 0x6c PushVec
	var_92_float = 0; var_93_float = 0; var_94_float = 0; // 0x6d PushV
	var_93_float = 11.0; // 0x6e MovF
	var_94_float = var_3_float; // 0x6f Mov
	func_686(var_92_float, var_93_float, var_94_float); // 0x70 NEW_2
	ChangeWeather(var_75_string, var_76_string, var_77_string, var_78_string, var_79_string, var_80_string, var_81_string, var_82_string, var_83_string, var_84_string, var_85_bool, var_86_cvector, var_87_cvector, var_88_float, var_89_float, var_90_cvector, var_91_cvector, var_92_float); // 0x72 Func
	goto Label_141; // 0x74 Jump
	
Label_141:
	GetGameTime(var_3_float); // 0x8d Func
	var_95_float = 0; var_96_float = 0; var_97_float = 0; // 0x8f PushV
	var_96_float = 18.0; // 0x90 MovF
	var_97_float = var_3_float; // 0x91 Mov
	func_686(var_95_float, var_96_float, var_97_float); // 0x92 NEW_2
	Sleep(var_95_float); // 0x94 Func
	GetGameTime(var_3_float); // 0x96 Func
	var_98_string = "dawn_bk.tex"; // 0x98 PushS
	var_99_string = "dawn_ft.tex"; // 0x99 PushS
	var_100_string = "dawn_lt.tex"; // 0x9a PushS
	var_101_string = "dawn_rt.tex"; // 0x9b PushS
	var_102_string = "dawn_up.tex"; // 0x9c PushS
	var_103_string = "dawn_rain_bk.tex"; // 0x9d PushS
	var_104_string = "dawn_rain_ft.tex"; // 0x9e PushS
	var_105_string = "dawn_rain_lt.tex"; // 0x9f PushS
	var_106_string = "dawn_rain_rt.tex"; // 0xa0 PushS
	var_107_string = "dawn_rain_up.tex"; // 0xa1 PushS
	var_108_bool = 0; // 0xa2 PushB
	var_109_cvector = CVector(0.5098, 0.27451, 0.18039); // 0xa3 PushVec
	var_110_cvector = CVector(0.70588, 0.50588, 0.32157); // 0xa4 PushVec
	var_111_float = 3000.0; // 0xa5 PushF
	var_112_float = 5000.0; // 0xa6 PushF
	var_113_cvector = CVector(0.6, 0.43922, 0.28235); // 0xa7 PushVec
	var_114_cvector = CVector(0.48627, 0.34118, 0.21176); // 0xa8 PushVec
	var_115_float = 0; var_116_float = 0; var_117_float = 0; // 0xa9 PushV
	var_116_float = 19.0; // 0xaa MovF
	var_117_float = var_3_float; // 0xab Mov
	func_686(var_115_float, var_116_float, var_117_float); // 0xac NEW_2
	ChangeWeather(var_98_string, var_99_string, var_100_string, var_101_string, var_102_string, var_103_string, var_104_string, var_105_string, var_106_string, var_107_string, var_108_bool, var_109_cvector, var_110_cvector, var_111_float, var_112_float, var_113_cvector, var_114_cvector, var_115_float); // 0xae Func
	GetGameTime(var_3_float); // 0xb0 Func
	var_118_float = 0; var_119_float = 0; var_120_float = 0; // 0xb2 PushV
	var_119_float = 20.0; // 0xb3 MovF
	var_120_float = var_3_float; // 0xb4 Mov
	func_686(var_118_float, var_119_float, var_120_float); // 0xb5 NEW_2
	Sleep(var_118_float); // 0xb7 Func
	GetGameTime(var_3_float); // 0xb9 Func
	var_121_string = "night_bk.tex"; // 0xbb PushS
	var_122_string = "night_ft.tex"; // 0xbc PushS
	var_123_string = "night_lt.tex"; // 0xbd PushS
	var_124_string = "night_rt.tex"; // 0xbe PushS
	var_125_string = "night_up.tex"; // 0xbf PushS
	var_126_string = "night_rain_bk.tex"; // 0xc0 PushS
	var_127_string = "night_rain_ft.tex"; // 0xc1 PushS
	var_128_string = "night_rain_lt.tex"; // 0xc2 PushS
	var_129_string = "night_rain_rt.tex"; // 0xc3 PushS
	var_130_string = "night_rain_up.tex"; // 0xc4 PushS
	var_131_bool = 0; // 0xc5 PushB
	var_132_cvector = CVector(0.0, 0.0, 0.0); // 0xc6 PushVec
	var_133_cvector = CVector(0.27451, 0.27451, 0.27451); // 0xc7 PushVec
	var_134_float = 3000.0; // 0xc8 PushF
	var_135_float = 5000.0; // 0xc9 PushF
	var_136_cvector = CVector(0.19608, 0.19608, 0.19608); // 0xca PushVec
	var_137_cvector = CVector(0.19608, 0.19608, 0.19608); // 0xcb PushVec
	var_138_float = 0; var_139_float = 0; var_140_float = 0; // 0xcc PushV
	var_139_float = 21.0; // 0xcd MovF
	var_140_float = var_3_float; // 0xce Mov
	func_686(var_138_float, var_139_float, var_140_float); // 0xcf NEW_2
	ChangeWeather(var_121_string, var_122_string, var_123_string, var_124_string, var_125_string, var_126_string, var_127_string, var_128_string, var_129_string, var_130_string, var_131_bool, var_132_cvector, var_133_cvector, var_134_float, var_135_float, var_136_cvector, var_137_cvector, var_138_float); // 0xd1 Func
	GetGameTime(var_3_float); // 0xd3 Func
	var_141_float = 0; var_142_float = 0; var_143_float = 0; // 0xd5 PushV
	var_142_float = 6.0; // 0xd6 MovF
	var_143_float = var_3_float; // 0xd7 Mov
	func_686(var_141_float, var_142_float, var_143_float); // 0xd8 NEW_2
	Sleep(var_141_float); // 0xda Func
	goto Label_39; // 0xdc Jump
	
Label_117:
	var_144_string = "day_bk.tex"; // 0x75 PushS
	var_145_string = "day_ft.tex"; // 0x76 PushS
	var_146_string = "day_lt.tex"; // 0x77 PushS
	var_147_string = "day_rt.tex"; // 0x78 PushS
	var_148_string = "day_up.tex"; // 0x79 PushS
	var_149_string = "day_rain_bk.tex"; // 0x7a PushS
	var_150_string = "day_rain_ft.tex"; // 0x7b PushS
	var_151_string = "day_rain_lt.tex"; // 0x7c PushS
	var_152_string = "day_rain_rt.tex"; // 0x7d PushS
	var_153_string = "day_rain_up.tex"; // 0x7e PushS
	var_154_bool = 0; // 0x7f PushB
	var_155_cvector = CVector(0.23529, 0.20392, 0.16863); // 0x80 PushVec
	var_156_cvector = CVector(0.58824, 0.54902, 0.39216); // 0x81 PushVec
	var_157_float = 3000.0; // 0x82 PushF
	var_158_float = 5000.0; // 0x83 PushF
	var_159_cvector = CVector(0.36471, 0.34118, 0.25882); // 0x84 PushVec
	var_160_cvector = CVector(0.37255, 0.32549, 0.2902); // 0x85 PushVec
	var_161_float = 0; var_162_float = 0; var_163_float = 0; // 0x86 PushV
	var_162_float = 11.0; // 0x87 MovF
	var_163_float = var_3_float; // 0x88 Mov
	func_686(var_161_float, var_162_float, var_163_float); // 0x89 NEW_2
	ChangeWeather(var_144_string, var_145_string, var_146_string, var_147_string, var_148_string, var_149_string, var_150_string, var_151_string, var_152_string, var_153_string, var_154_bool, var_155_cvector, var_156_cvector, var_157_float, var_158_float, var_159_cvector, var_160_cvector, var_161_float); // 0x8b Func
}


func_450(var_1_bool, var_7_bool)
{
	var_8_float = 0; var_9_float = 0; // 0x1c2 PushV
	var_10_bool = GlobalVars[0]; // 0x1c3 PushGE
	var_10_bool = 1; // 0x1c4 MovB
	GlobalVars[0] = var_10_bool; // 0x1c5 PopGE
	var_11_cvector = CVector(1.0, 1.0, 0.71765); // 0x1c6 PushVec
	SetAmbientMod(var_11_cvector); // 0x1c7 Func
	var_12_bool = var_7_bool; // 0x1c9 Push
	if(var_12_bool == 0) goto Label_461; // 0x1ca JumpB
	var_9_float = 0.015; // 0x1cb MovF
	goto Label_465; // 0x1cc Jump
	
Label_465:
	var_1_bool = var_7_bool; // 0x1d1 TMov
	var_13_int = 52; // 0x1d2 PushI
	var_14_float = 0; var_15_float = 0; // 0x1d3 PushV
	var_15_float = var_9_float; // 0x1d4 Mov
	func_651(var_14_float, var_15_float); // 0x1d5 NEW_2
	SetTimer(var_13_int, var_14_float); // 0x1d7 Func
	return 2; // 0x1d9 Return
	
Label_461:
	var_18_float = 0.01; // 0x1cd PushF
	var_19_float = 0.015; // 0x1ce PushF
	rand(var_9_float, var_18_float, var_19_float); // 0x1cf Func
}


func_674(var_44_bool, var_45_int)
{
	var_46_int = 0; var_47_int = 0; // 0x2a2 PushV
	var_48_string = ""; var_49_int = 0; // 0x2a3 PushV
	var_49_int = var_45_int; // 0x2a4 Mov
	func_656(var_48_string, var_49_int); // 0x2a5 NEW_2
	GetVariable(var_48_string, var_47_int); // 0x2a7 Func
	var_50_int = 3; // 0x2a9 PushI
	var_51_int = var_47_int & var_50_int; // 0x2aa And
	var_52_int = 2; // 0x2ab PushI
	var_44_bool = var_51_int == var_52_int; // 0x2ac Eq2
	return 2; // 0x2ad Return
}


func_548(var_0_int)
{
	var_5_int = 0; var_6_cvector = CVector(0,0,0); var_7_int = 0; var_8_cvector = CVector(0,0,0); // 0x224 PushV
	var_9_int = 0; // 0x225 PushI
	var_10_bool = var_0_int == var_9_int; // 0x226 Eq
	if(var_10_bool == 0) goto Label_553; // 0x227 JumpB
	return 4; // 0x228 Return
	
Label_553:
	var_0_int = 0; // 0x229 TMovI
	var_7_int = 0; // 0x22a MovI
	
Label_555:
	var_11_int = 3; // 0x22b PushI
	var_12_bool = var_7_int < var_11_int; // 0x22c LT
	if(var_12_bool == 0) goto Label_567; // 0x22d JumpB
	GetColorMod(var_8_cvector, var_7_int); // 0x22e Func
	var_13_cvector = CVector(1.0, 1.0, 1.0); // 0x230 PushVec
	var_14_float = 0.2; // 0x231 PushF
	LinearColorMod(var_7_int, var_8_cvector, var_13_cvector, var_14_float); // 0x232 Func
	var_15_int = 1; // 0x234 PushI
	var_7_int = var_7_int + var_15_int; // 0x235 Add2
	goto Label_555; // 0x236 Jump
	
Label_567:
	return 4; // 0x237 Return
}


func_642(var_64_int)
{
	var_65_float = 0; var_66_float = 0; // 0x282 PushV
	GetGameTime(var_66_float); // 0x283 Func
	var_67_int = 1; // 0x285 PushI
	var_68_int = 0; // 0x286 PushV
	var_69_int = 24; // 0x287 PushI
	var_68_int = var_66_float / var_66_float; // 0x288 Div2
	var_64_int = var_67_int + var_68_int; // 0x289 Add2
	return 2; // 0x28a Return
}


func_265()
{
	var_57_int = 43; // 0x109 PushI
	KillTimer(var_57_int); // 0x10a Func
	return 0; // 0x10c Return
}


func_651(var_14_float, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x28b PushV
	GetGameTimeScale(var_17_float); // 0x28c Func
	var_14_float = var_15_float * var_17_float; // 0x28e Mult2
	return 2; // 0x28f Return
}


func_237()
{
	var_39_float = 0; var_40_float = 0; // 0xed PushV
	var_41_int = 1; // 0xee PushI
	var_42_int = 8; // 0xef PushI
	rand(var_40_float, var_41_int, var_42_int); // 0xf0 Func
	var_43_int = 41; // 0xf2 PushI
	SetTimer(var_43_int, var_40_float); // 0xf3 Func
	var_44_string = "Forecast: rain ends in "; // 0xf5 PushS
	var_45_int = var_44_string + var_40_float; // 0xf6 Add
	var_46_string = " hours"; // 0xf7 PushS
	var_47_int = var_45_int + var_46_string; // 0xf8 Add
	Trace(var_47_int); // 0xf9 Func
	return 2; // 0xfb Return
}


func_686(var_53_float, var_54_float, var_55_float)
{
	var_56_int = 24; // 0x2af PushI
	var_55_float = var_55_float % var_56_int; // 0x2b0 Mod2
	var_57_bool = var_54_float < var_55_float; // 0x2b1 LT
	if(var_57_bool == 0) goto Label_695; // 0x2b2 JumpB
	var_58_int = 24; // 0x2b3 PushI
	var_59_int = var_54_float + var_58_int; // 0x2b4 Add
	var_53_float = var_59_int - var_55_float; // 0x2b5 Sub2
	return 0; // 0x2b6 Return
	
Label_695:
	var_53_float = var_54_float - var_55_float; // 0x2b7 Sub2
	return 0; // 0x2b8 Return
}


func_656(var_20_string, var_21_int)
{
	var_22_string = "Region"; // 0x291 PushS
	var_23_int = var_22_string + var_21_int; // 0x292 Add
	var_24_string = "State"; // 0x293 PushS
	var_20_string = var_23_int + var_24_string; // 0x294 Add2
	return 0; // 0x295 Return
}


func_662(var_16_bool, var_17_int)
{
	var_18_int = 0; var_19_int = 0; // 0x296 PushV
	var_20_string = ""; var_21_int = 0; // 0x297 PushV
	var_21_int = var_17_int; // 0x298 Mov
	func_656(var_20_string, var_21_int); // 0x299 NEW_2
	GetVariable(var_20_string, var_19_int); // 0x29b Func
	var_25_int = 3; // 0x29d PushI
	var_26_int = var_19_int & var_25_int; // 0x29e And
	var_27_int = 1; // 0x29f PushI
	var_16_bool = var_26_int == var_27_int; // 0x2a0 Eq2
	return 2; // 0x2a1 Return
}


func_599(var_0_int)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x257 PushV
	var_30_int = 1; // 0x258 PushI
	var_31_bool = var_0_int == var_30_int; // 0x259 Eq
	if(var_31_bool == 0) goto Label_604; // 0x25a JumpB
	return 2; // 0x25b Return
	
Label_604:
	var_0_int = 1; // 0x25c TMovI
	var_32_int = 0; // 0x25d PushI
	GetColorMod(var_29_cvector, var_32_int); // 0x25e Func
	var_33_int = 0; // 0x260 PushI
	var_34_cvector = CVector(0.70588, 1.0, 0.9098); // 0x261 PushVec
	var_35_float = 0.2; // 0x262 PushF
	LinearColorMod(var_33_int, var_29_cvector, var_34_cvector, var_35_float); // 0x263 Func
	var_36_int = 1; // 0x265 PushI
	GetColorMod(var_29_cvector, var_36_int); // 0x266 Func
	var_37_int = 1; // 0x268 PushI
	var_38_cvector = CVector(0.70588, 1.0, 0.9098); // 0x269 PushVec
	var_39_float = 0.2; // 0x26a PushF
	LinearColorMod(var_37_int, var_29_cvector, var_38_cvector, var_39_float); // 0x26b Func
	var_40_int = 2; // 0x26d PushI
	GetColorMod(var_29_cvector, var_40_int); // 0x26e Func
	var_41_int = 2; // 0x270 PushI
	var_42_cvector = CVector(0.70588, 1.0, 0.9098); // 0x271 PushVec
	var_43_float = 0.2; // 0x272 PushF
	LinearColorMod(var_41_int, var_29_cvector, var_42_cvector, var_43_float); // 0x273 Func
	return 2; // 0x275 Return
}


func_568(var_0_int)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x238 PushV
	var_55_int = 2; // 0x239 PushI
	var_56_bool = var_0_int == var_55_int; // 0x23a Eq
	if(var_56_bool == 0) goto Label_573; // 0x23b JumpB
	return 2; // 0x23c Return
	
Label_573:
	var_0_int = 2; // 0x23d TMovI
	var_57_int = 0; // 0x23e PushI
	GetColorMod(var_54_cvector, var_57_int); // 0x23f Func
	var_58_int = 0; // 0x241 PushI
	var_59_cvector = CVector(1.55639, 1.20267, 0.23796); // 0x242 PushVec
	var_60_float = 0.2; // 0x243 PushF
	LinearColorMod(var_58_int, var_54_cvector, var_59_cvector, var_60_float); // 0x244 Func
	var_61_int = 1; // 0x246 PushI
	GetColorMod(var_54_cvector, var_61_int); // 0x247 Func
	var_62_int = 1; // 0x249 PushI
	var_63_cvector = CVector(1.55639, 1.20267, 0.23796); // 0x24a PushVec
	var_64_float = 0.2; // 0x24b PushF
	LinearColorMod(var_62_int, var_54_cvector, var_63_cvector, var_64_float); // 0x24c Func
	var_65_int = 2; // 0x24e PushI
	GetColorMod(var_54_cvector, var_65_int); // 0x24f Func
	var_66_int = 2; // 0x251 PushI
	var_67_cvector = CVector(1.55639, 1.20267, 0.23796); // 0x252 PushVec
	var_68_float = 0.2; // 0x253 PushF
	LinearColorMod(var_66_int, var_54_cvector, var_67_cvector, var_68_float); // 0x254 Func
	return 2; // 0x256 Return
}


func_252()
{
	var_28_float = 0; var_29_float = 0; // 0xfc PushV
	var_30_int = 60; // 0xfd PushI
	var_31_int = 120; // 0xfe PushI
	rand(var_29_float, var_30_int, var_31_int); // 0xff Func
	var_32_int = 43; // 0x101 PushI
	var_33_float = 0; var_34_float = 0; // 0x102 PushV
	var_34_float = var_29_float; // 0x103 Mov
	func_651(var_33_float, var_34_float); // 0x104 NEW_2
	SetTimer(var_32_int, var_33_float); // 0x106 Func
	return 2; // 0x108 Return
}


func_222()
{
	var_4_float = 0; var_5_float = 0; // 0xde PushV
	var_6_int = 2; // 0xdf PushI
	var_7_int = 20; // 0xe0 PushI
	rand(var_5_float, var_6_int, var_7_int); // 0xe1 Func
	var_8_int = 40; // 0xe3 PushI
	SetTimer(var_8_int, var_5_float); // 0xe4 Func
	var_9_string = "Forecast: rain begins in "; // 0xe6 PushS
	var_10_int = var_9_string + var_5_float; // 0xe7 Add
	var_11_string = " hours"; // 0xe8 PushS
	var_12_int = var_10_int + var_11_string; // 0xe9 Add
	Trace(var_12_int); // 0xea Func
	return 2; // 0xec Return
}


