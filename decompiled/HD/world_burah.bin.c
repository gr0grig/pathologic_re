task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8843(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4097_bool = 0; var_4098_int = 0; var_4099_float = 0; // 0x8 PushV
	var_4098_int = var_0_int; // 0x9 Mov
	var_4099_float = var_1_float; // 0xa Mov
	func_12309(var_4098_int, var_4099_float); // 0xb NEW_2
	if(var_4097_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4649_int = 0; var_4650_float = 0; // 0xf PushV
	var_4649_int = var_0_int; // 0x10 Mov
	var_4650_float = var_1_float; // 0x11 Mov
	func_12405(var_4649_int, var_4650_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1cfa PushV
	var_6_string = "playsound"; // 0x1cfb PushS
	var_7_bool = var_0_string == var_6_string; // 0x1cfc Eq
	if(var_7_bool == 0) goto Label_7425; // 0x1cfd JumpB
	PlaySound(var_1_string); // 0x1cfe Func
	goto Label_7446; // 0x1d00 Jump
	
Label_7446:
	return 4; // 0x1d16 Return
	
Label_7425:
	var_8_string = "enable_bonfire"; // 0x1d01 PushS
	var_9_bool = var_0_string == var_8_string; // 0x1d02 Eq
	if(var_9_bool == 0) goto Label_7436; // 0x1d03 JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d04 Func
	var_10_int = 0; // 0x1d06 PushV
	var_11_int = 1; // 0x1d07 PushI
	var_10_int = var_4_int - var_11_int; // 0x1d08 Sub2
	func_7558(var_10_int); // 0x1d09 NEW_2
	goto Label_7446; // 0x1d0b Jump
	
Label_7436:
	var_64_string = "disable_bonfire"; // 0x1d0c PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d0d Eq
	if(var_65_bool == 0) goto Label_7446; // 0x1d0e JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d0f Func
	var_66_int = 0; // 0x1d11 PushV
	var_67_int = 1; // 0x1d12 PushI
	var_66_int = var_5_int - var_67_int; // 0x1d13 Sub2
	func_7635(var_66_int); // 0x1d14 NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d17 PushV
	var_22_string = "horror"; // 0x1d18 PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d19 Eq
	if(var_23_bool == 0) goto Label_7486; // 0x1d1a JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d1b Func
	var_24_int = 0; // 0x1d1d PushV
	var_24_int = var_12_int; // 0x1d1e Mov
	func_392(var_24_int); // 0x1d1f NEW_2
	var_39_object = GlobalVars[13]; // 0x1d21 PushGE
	size(var_13_int); // 0x1d22 ObjFunc
	var_40_bool = 0; // 0x1d24 PushV
	var_40_bool = 0; // 0x1d25 MovB
	var_41_int = 0; // 0x1d26 PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d27 GE
	if(var_42_bool == 0) goto Label_7468; // 0x1d28 JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d29 LT
	if(var_43_bool == 0) goto Label_7468; // 0x1d2a JumpB
	var_40_bool = 1; // 0x1d2b MovB
	
Label_7468:
	if(var_40_bool == 0) goto Label_7482; // 0x1d2c JumpB
	var_44_object = GlobalVars[13]; // 0x1d2d PushGE
	get(var_14_object, var_12_int); // 0x1d2e ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d30 PushV
	var_45_object = var_14_object; // 0x1d31 Mov
	var_46_int = 1; // 0x1d32 MovI
	func_255(var_46_int); // 0x1d33 NEW_2
	var_72_string = "Replaced"; // 0x1d35 PushS
	Trace(var_72_string); // 0x1d36 Func
	var_14_object = 0; // 0x1d38 SetNull
	goto Label_7485; // 0x1d39 Jump
	
Label_7485:
	goto Label_7557; // 0x1d3d Jump
	
Label_7557:
	return 20; // 0x1d85 Return
	
Label_7482:
	var_73_string = "Invalid region index"; // 0x1d3a PushS
	Trace(var_73_string); // 0x1d3b Func
	
Label_7486:
	var_74_string = "nail"; // 0x1d3e PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d3f Eq
	if(var_75_bool == 0) goto Label_7524; // 0x1d40 JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d41 Func
	var_76_int = 0; // 0x1d43 PushV
	var_76_int = var_15_int; // 0x1d44 Mov
	func_422(var_76_int); // 0x1d45 NEW_2
	var_88_object = GlobalVars[13]; // 0x1d47 PushGE
	size(var_16_int); // 0x1d48 ObjFunc
	var_89_bool = 0; // 0x1d4a PushV
	var_89_bool = 0; // 0x1d4b MovB
	var_90_int = 0; // 0x1d4c PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d4d GE
	if(var_91_bool == 0) goto Label_7506; // 0x1d4e JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d4f LT
	if(var_92_bool == 0) goto Label_7506; // 0x1d50 JumpB
	var_89_bool = 1; // 0x1d51 MovB
	
Label_7506:
	if(var_89_bool == 0) goto Label_7520; // 0x1d52 JumpB
	var_93_object = GlobalVars[13]; // 0x1d53 PushGE
	get(var_17_object, var_15_int); // 0x1d54 ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d56 PushV
	var_94_object = var_17_object; // 0x1d57 Mov
	var_95_int = 2; // 0x1d58 MovI
	func_255(var_95_int); // 0x1d59 NEW_2
	var_96_string = "Replaced"; // 0x1d5b PushS
	Trace(var_96_string); // 0x1d5c Func
	var_17_object = 0; // 0x1d5e SetNull
	goto Label_7523; // 0x1d5f Jump
	
Label_7523:
	goto Label_7557; // 0x1d63 Jump
	
Label_7520:
	var_97_string = "Invalid region index"; // 0x1d60 PushS
	Trace(var_97_string); // 0x1d61 Func
	
Label_7524:
	var_98_string = "fogme"; // 0x1d64 PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d65 Eq
	if(var_99_bool == 0) goto Label_7544; // 0x1d66 JumpB
	var_100_object = Obj(); // 0x1d67 PushV
	func_81(var_100_object); // 0x1d68 NEW_2
	var_18_object = var_100_object; // 0x1d69 Mov
	GetScene(var_19_object); // 0x1d6b ObjFunc
	GetPosition(var_20_cvector); // 0x1d6d ObjFunc
	var_104_string = "fog"; // 0x1d6f PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1d70 PushVec
	var_106_string = "fog_stat.xml"; // 0x1d71 PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1d72 Func
	var_21_object = 0; // 0x1d74 SetNull
	var_19_object = 0; // 0x1d75 SetNull
	var_18_object = 0; // 0x1d76 SetNull
	goto Label_7557; // 0x1d77 Jump
	
Label_7544:
	var_107_string = "sepia"; // 0x1d78 PushS
	var_108_bool = var_0_string == var_107_string; // 0x1d79 Eq
	if(var_108_bool == 0) goto Label_7551; // 0x1d7a JumpB
	func_239(); // 0x1d7c NEW_2
	goto Label_7557; // 0x1d7e Jump
	
Label_7551:
	var_111_string = "nosepia"; // 0x1d7f PushS
	var_112_bool = var_0_string == var_111_string; // 0x1d80 Eq
	if(var_112_bool == 0) goto Label_7557; // 0x1d81 JumpB
	func_244(); // 0x1d83 NEW_2
}


main()
{
	var_0_string = "branch"; // 0x15 PushS
	var_1_int = 1; // 0x16 PushI
	SetVariable(var_0_string, var_1_int); // 0x17 Func
	var_2_int = 0; // 0x19 PushI
	var_3_int = 1; // 0x1a PushI
	SetSaveProperty(var_2_int, var_3_int); // 0x1b Func
	func_59(); // 0x1e NEW_2
	func_7858(); // 0x21 NEW_2
	func_8898(); // 0x24 NEW_2
	func_12370(); // 0x27 NEW_2
	var_4580_float = 0; // 0x29 PushV
	var_4581_float = 0; // 0x2a PushV
	func_234(var_4581_float); // 0x2b NEW_2
	var_4580_float = var_4581_float; // 0x2c Mov
	func_13887(var_4580_float); // 0x2e NEW_2
	var_4988_object = Obj(); var_4989_string = ""; // 0x30 PushV
	var_4989_string = "quest_b1_02"; // 0x31 MovS
	func_111(var_4988_object, var_4989_string); // 0x32 NEW_2
	var_4990_float = 0.66667; // 0x34 PushF
	AdvanceGameTime(var_4990_float); // 0x35 Func
	
Label_55:
	Hold(); // 0x37 Func
	goto Label_55; // 0x39 Jump
}


func_10244(var_5524_int, var_5525_float)
{
	var_5526_int = 0; var_5527_int = 0; var_5528_int = 0; var_5529_float = 0; // 0x2805 PushV
	var_5527_int = 530813; // 0x2806 MovI
	var_5528_int = 530812; // 0x2807 MovI
	var_5529_float = var_5525_float; // 0x2808 Mov
	func_12278(var_5526_int, var_5527_int, var_5528_int, var_5529_float); // 0x2809 NEW_2
	var_5524_int = var_5526_int; // 0x280a Mov
	return 0; // 0x280c Return
}


func_5126()
{
	var_123_string = "dt_house3_08_i2"; // 0x1407 PushS
	add(var_123_string); // 0x1408 ObjFunc
	var_124_string = "dt_house3_09"; // 0x140a PushS
	add(var_124_string); // 0x140b ObjFunc
	var_125_string = "dt_house3_09_i2"; // 0x140d PushS
	add(var_125_string); // 0x140e ObjFunc
	var_126_string = "house1_se_03l"; // 0x1410 PushS
	add(var_126_string); // 0x1411 ObjFunc
	var_127_string = "house1_se_03r"; // 0x1413 PushS
	add(var_127_string); // 0x1414 ObjFunc
	var_128_string = "house1_se_01l"; // 0x1416 PushS
	add(var_128_string); // 0x1417 ObjFunc
	var_129_string = "house1_se_01r"; // 0x1419 PushS
	add(var_129_string); // 0x141a ObjFunc
	var_130_string = "house1_se_04l"; // 0x141c PushS
	add(var_130_string); // 0x141d ObjFunc
	var_131_string = "house1_se_04r"; // 0x141f PushS
	add(var_131_string); // 0x1420 ObjFunc
	var_132_string = "house5_11"; // 0x1422 PushS
	add(var_132_string); // 0x1423 ObjFunc
	var_133_string = "house5_09"; // 0x1425 PushS
	add(var_133_string); // 0x1426 ObjFunc
	var_134_string = "house5_13"; // 0x1428 PushS
	add(var_134_string); // 0x1429 ObjFunc
	var_135_string = "house5_12"; // 0x142b PushS
	add(var_135_string); // 0x142c ObjFunc
	var_136_string = "house5_14"; // 0x142e PushS
	add(var_136_string); // 0x142f ObjFunc
	var_137_string = "house5_unoin03l"; // 0x1431 PushS
	add(var_137_string); // 0x1432 ObjFunc
	var_138_string = "house5_unoin03r"; // 0x1434 PushS
	add(var_138_string); // 0x1435 ObjFunc
	var_139_string = "house5_unoin02l"; // 0x1437 PushS
	add(var_139_string); // 0x1438 ObjFunc
	var_140_string = "house5_unoin02r"; // 0x143a PushS
	add(var_140_string); // 0x143b ObjFunc
	var_141_string = "house5_unoin01l"; // 0x143d PushS
	add(var_141_string); // 0x143e ObjFunc
	var_142_string = "house5_unoin01r"; // 0x1440 PushS
	add(var_142_string); // 0x1441 ObjFunc
	return 0; // 0x1443 Return
}


func_10253(var_5844_int, var_5845_float)
{
	var_5846_int = 0; var_5847_int = 0; var_5848_int = 0; var_5849_float = 0; // 0x280e PushV
	var_5847_int = 530183; // 0x280f MovI
	var_5848_int = 530182; // 0x2810 MovI
	var_5849_float = var_5845_float; // 0x2811 Mov
	func_12278(var_5846_int, var_5847_int, var_5848_int, var_5849_float); // 0x2812 NEW_2
	var_5844_int = var_5846_int; // 0x2813 Mov
	return 0; // 0x2815 Return
}


func_1037(var_1795_int, var_1796_int)
{
	var_1797_bool = 0; // 0x40e PushV
	var_1797_bool = 1; // 0x40f MovB
	var_1798_int = 22; // 0x410 PushI
	var_1799_bool = var_1796_int >= var_1798_int; // 0x411 GE
	if(var_1799_bool == 0) goto Label_1047; // 0x412 JumpB
	var_1800_int = 6; // 0x413 PushI
	var_1801_bool = var_1796_int < var_1800_int; // 0x414 LT
	if(var_1801_bool == 0) goto Label_1047; // 0x415 JumpB
	var_1797_bool = 0; // 0x416 MovB
	
Label_1047:
	if(var_1797_bool == 0) goto Label_1054; // 0x417 JumpB
	var_1802_int = 0; var_1803_bool = 0; // 0x418 PushV
	var_1802_int = var_1795_int; // 0x419 Mov
	var_1803_bool = 1; // 0x41a MovB
	func_729(var_1802_int, var_1803_bool); // 0x41b NEW_2
	goto Label_1059; // 0x41d Jump
	
Label_1059:
	return 0; // 0x423 Return
	
Label_1054:
	var_1804_int = 0; var_1805_bool = 0; // 0x41e PushV
	var_1804_int = var_1795_int; // 0x41f Mov
	var_1805_bool = 0; // 0x420 MovB
	func_729(var_1804_int, var_1805_bool); // 0x421 NEW_2
}


func_12303(var_796_int)
{
	var_797_int = 0; var_798_int = 0; // 0x300f PushV
	var_799_string = "branch"; // 0x3010 PushS
	GetVariable(var_799_string, var_798_int); // 0x3011 Func
	var_796_int = var_798_int; // 0x3013 Mov
	return 2; // 0x3014 Return
}


func_3087(var_2118_int, var_2119_int, var_2120_int)
{
	var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; var_2124_int = 0; // 0xc0f PushV
	var_2125_bool = 0; // 0xc10 PushV
	var_2125_bool = 0; // 0xc11 MovB
	var_2126_int = 8; // 0xc12 PushI
	var_2127_bool = var_2120_int > var_2126_int; // 0xc13 GT
	if(var_2127_bool == 0) goto Label_3097; // 0xc14 JumpB
	var_2128_int = 21; // 0xc15 PushI
	var_2129_bool = var_2120_int < var_2128_int; // 0xc16 LT
	if(var_2129_bool == 0) goto Label_3097; // 0xc17 JumpB
	var_2125_bool = 1; // 0xc18 MovB
	
Label_3097:
	if(var_2125_bool == 0) goto Label_3152; // 0xc19 JumpB
	var_2130_int = 0; var_2131_string = ""; var_2132_string = ""; var_2133_int = 0; // 0xc1a PushV
	var_2130_int = var_2118_int; // 0xc1b Mov
	var_2131_string = "pers_vaxxabit"; // 0xc1c MovS
	var_2132_string = "vaxxabit_d.xml"; // 0xc1d MovS
	var_2133_int = 5; // 0xc1e MovI
	func_453(var_2130_int, var_2131_string, var_2132_string, var_2133_int); // 0xc1f NEW_2
	var_2134_int = 0; var_2135_string = ""; var_2136_string = ""; var_2137_int = 0; // 0xc21 PushV
	var_2134_int = var_2118_int; // 0xc22 Mov
	var_2135_string = "pers_vaxxabitka"; // 0xc23 MovS
	var_2136_string = "vaxxabitka_d.xml"; // 0xc24 MovS
	var_2137_int = 5; // 0xc25 MovI
	func_453(var_2134_int, var_2135_string, var_2136_string, var_2137_int); // 0xc26 NEW_2
	var_2138_int = 0; var_2139_string = ""; var_2140_string = ""; var_2141_int = 0; // 0xc28 PushV
	var_2138_int = var_2118_int; // 0xc29 Mov
	var_2139_string = "pers_rat_big"; // 0xc2a MovS
	var_2140_string = "rat_big.xml"; // 0xc2b MovS
	var_2141_int = 2; // 0xc2c MovI
	func_453(var_2138_int, var_2139_string, var_2140_string, var_2141_int); // 0xc2d NEW_2
	var_2142_int = 0; var_2143_string = ""; var_2144_string = ""; var_2145_int = 0; // 0xc2f PushV
	var_2142_int = var_2118_int; // 0xc30 Mov
	var_2143_string = "fog"; // 0xc31 MovS
	var_2144_string = "fog.xml"; // 0xc32 MovS
	var_2145_int = 6; // 0xc33 MovI
	func_479(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0xc34 NEW_2
	var_2150_int = 5; // 0xc36 PushI
	var_2151_bool = var_2119_int >= var_2150_int; // 0xc37 GE
	if(var_2151_bool == 0) goto Label_3136; // 0xc38 JumpB
	var_2152_int = 0; var_2153_string = ""; var_2154_string = ""; var_2155_int = 0; // 0xc39 PushV
	var_2152_int = var_2118_int; // 0xc3a Mov
	var_2153_string = "fog"; // 0xc3b MovS
	var_2154_string = "fog_hunter.xml"; // 0xc3c MovS
	var_2155_int = 2; // 0xc3d MovI
	func_479(var_2152_int, var_2153_string, var_2154_string, var_2155_int); // 0xc3e NEW_2
	
Label_3136:
	var_2156_int = 1; // 0xc40 PushI
	var_2157_float = 0; var_2158_int = 0; // 0xc41 PushV
	var_2158_int = var_2119_int; // 0xc42 Mov
	func_1205(var_2157_float, var_2158_int); // 0xc43 NEW_2
	var_2123_int = var_2156_int * var_2157_float; // 0xc45 Mult2
	var_2203_int = var_2123_int; // 0xc46 Push
	if(var_2203_int == 0) goto Label_3151; // 0xc47 JumpB
	var_2204_int = 0; var_2205_string = ""; var_2206_string = ""; var_2207_int = 0; // 0xc48 PushV
	var_2204_int = var_2118_int; // 0xc49 Mov
	var_2205_string = "pers_bomber"; // 0xc4a MovS
	var_2206_string = "bomber.xml"; // 0xc4b MovS
	var_2207_int = var_2123_int; // 0xc4c Mov
	func_453(var_2204_int, var_2205_string, var_2206_string, var_2207_int); // 0xc4d NEW_2
	
Label_3151:
	goto Label_3205; // 0xc4f Jump
	
Label_3205:
	var_2208_bool = 0; var_2209_int = 0; // 0xc85 PushV
	var_2209_int = var_2119_int; // 0xc86 Mov
	func_1322(var_2208_bool, var_2209_int); // 0xc87 NEW_2
	if(var_2208_bool == 0) goto Label_3217; // 0xc89 JumpB
	var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0; // 0xc8a PushV
	var_2211_int = var_2118_int; // 0xc8b Mov
	var_2212_string = "pers_sanitar"; // 0xc8c MovS
	var_2213_string = "sanitar.xml"; // 0xc8d MovS
	var_2214_int = 2; // 0xc8e MovI
	func_453(var_2211_int, var_2212_string, var_2213_string, var_2214_int); // 0xc8f NEW_2
	
Label_3217:
	var_2215_int = 0; var_2216_string = ""; var_2217_string = ""; var_2218_int = 0; var_2219_int = 0; var_2220_int = 0; // 0xc91 PushV
	var_2215_int = var_2118_int; // 0xc92 Mov
	var_2216_string = "pers_worker"; // 0xc93 MovS
	var_2217_string = "agony1_man.xml"; // 0xc94 MovS
	var_2218_int = 2; // 0xc95 MovI
	var_2219_int = 4; // 0xc96 MovI
	var_2220_int = 4; // 0xc97 MovI
	func_466(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0xc98 NEW_2
	var_2225_int = 0; var_2226_string = ""; var_2227_string = ""; var_2228_int = 0; var_2229_int = 0; var_2230_int = 0; // 0xc9a PushV
	var_2225_int = var_2118_int; // 0xc9b Mov
	var_2226_string = "pers_unosha"; // 0xc9c MovS
	var_2227_string = "agony1_man.xml"; // 0xc9d MovS
	var_2228_int = 2; // 0xc9e MovI
	var_2229_int = 4; // 0xc9f MovI
	var_2230_int = 4; // 0xca0 MovI
	func_466(var_2225_int, var_2226_string, var_2227_string, var_2228_int, var_2229_int, var_2230_int); // 0xca1 NEW_2
	var_2231_int = 0; var_2232_string = ""; var_2233_string = ""; var_2234_int = 0; var_2235_int = 0; var_2236_int = 0; // 0xca3 PushV
	var_2231_int = var_2118_int; // 0xca4 Mov
	var_2232_string = "pers_woman"; // 0xca5 MovS
	var_2233_string = "agony1_woman.xml"; // 0xca6 MovS
	var_2234_int = 2; // 0xca7 MovI
	var_2235_int = 4; // 0xca8 MovI
	var_2236_int = 4; // 0xca9 MovI
	func_466(var_2231_int, var_2232_string, var_2233_string, var_2234_int, var_2235_int, var_2236_int); // 0xcaa NEW_2
	var_2237_int = 0; var_2238_string = ""; var_2239_string = ""; var_2240_int = 0; var_2241_int = 0; var_2242_int = 0; // 0xcac PushV
	var_2237_int = var_2118_int; // 0xcad Mov
	var_2238_string = "pers_wasted_girl"; // 0xcae MovS
	var_2239_string = "agony1_woman.xml"; // 0xcaf MovS
	var_2240_int = 2; // 0xcb0 MovI
	var_2241_int = 4; // 0xcb1 MovI
	var_2242_int = 4; // 0xcb2 MovI
	func_466(var_2237_int, var_2238_string, var_2239_string, var_2240_int, var_2241_int, var_2242_int); // 0xcb3 NEW_2
	return 4; // 0xcb5 Return
	
Label_3152:
	var_2243_int = 0; var_2244_string = ""; var_2245_string = ""; var_2246_int = 0; // 0xc50 PushV
	var_2243_int = var_2118_int; // 0xc51 Mov
	var_2244_string = "pers_vaxxabit"; // 0xc52 MovS
	var_2245_string = "vaxxabit_d.xml"; // 0xc53 MovS
	var_2246_int = 4; // 0xc54 MovI
	func_453(var_2243_int, var_2244_string, var_2245_string, var_2246_int); // 0xc55 NEW_2
	var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0; // 0xc57 PushV
	var_2247_int = var_2118_int; // 0xc58 Mov
	var_2248_string = "pers_vaxxabitka"; // 0xc59 MovS
	var_2249_string = "vaxxabitka_d.xml"; // 0xc5a MovS
	var_2250_int = 4; // 0xc5b MovI
	func_453(var_2247_int, var_2248_string, var_2249_string, var_2250_int); // 0xc5c NEW_2
	var_2251_int = 0; var_2252_string = ""; var_2253_string = ""; var_2254_int = 0; // 0xc5e PushV
	var_2251_int = var_2118_int; // 0xc5f Mov
	var_2252_string = "pers_rat_big"; // 0xc60 MovS
	var_2253_string = "rat_big.xml"; // 0xc61 MovS
	var_2254_int = 3; // 0xc62 MovI
	func_453(var_2251_int, var_2252_string, var_2253_string, var_2254_int); // 0xc63 NEW_2
	var_2255_int = 0; var_2256_string = ""; var_2257_string = ""; var_2258_int = 0; // 0xc65 PushV
	var_2255_int = var_2118_int; // 0xc66 Mov
	var_2256_string = "fog"; // 0xc67 MovS
	var_2257_string = "fog.xml"; // 0xc68 MovS
	var_2258_int = 6; // 0xc69 MovI
	func_479(var_2255_int, var_2256_string, var_2257_string, var_2258_int); // 0xc6a NEW_2
	var_2259_int = 5; // 0xc6c PushI
	var_2260_bool = var_2119_int >= var_2259_int; // 0xc6d GE
	if(var_2260_bool == 0) goto Label_3190; // 0xc6e JumpB
	var_2261_int = 0; var_2262_string = ""; var_2263_string = ""; var_2264_int = 0; // 0xc6f PushV
	var_2261_int = var_2118_int; // 0xc70 Mov
	var_2262_string = "fog"; // 0xc71 MovS
	var_2263_string = "fog_hunter.xml"; // 0xc72 MovS
	var_2264_int = 2; // 0xc73 MovI
	func_479(var_2261_int, var_2262_string, var_2263_string, var_2264_int); // 0xc74 NEW_2
	
Label_3190:
	var_2265_int = 2; // 0xc76 PushI
	var_2266_float = 0; var_2267_int = 0; // 0xc77 PushV
	var_2267_int = var_2119_int; // 0xc78 Mov
	func_1205(var_2266_float, var_2267_int); // 0xc79 NEW_2
	var_2124_int = var_2265_int * var_2266_float; // 0xc7b Mult2
	var_2268_int = var_2124_int; // 0xc7c Push
	if(var_2268_int == 0) goto Label_3205; // 0xc7d JumpB
	var_2269_int = 0; var_2270_string = ""; var_2271_string = ""; var_2272_int = 0; // 0xc7e PushV
	var_2269_int = var_2118_int; // 0xc7f Mov
	var_2270_string = "pers_bomber"; // 0xc80 MovS
	var_2271_string = "bomber.xml"; // 0xc81 MovS
	var_2272_int = var_2124_int; // 0xc82 Mov
	func_453(var_2269_int, var_2270_string, var_2271_string, var_2272_int); // 0xc83 NEW_2
}


func_7184(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object)
{
	var_4135_int = 0; // 0x1c11 PushI
	var_4136_bool = var_4130_int == var_4135_int; // 0x1c12 Eq
	if(var_4136_bool == 0) goto Label_7224; // 0x1c13 JumpB
	var_4137_int = 0; var_4138_bool = 0; // 0x1c14 PushV
	var_4137_int = 14; // 0x1c15 MovI
	var_4138_bool = 0; // 0x1c16 MovB
	func_746(var_4137_int, var_4138_bool); // 0x1c17 NEW_2
	var_4139_int = 0; var_4140_bool = 0; var_4141_int = 0; // 0x1c19 PushV
	var_4139_int = 14; // 0x1c1a MovI
	var_4140_bool = 0; // 0x1c1b MovB
	var_4141_int = 1; // 0x1c1c MovI
	func_763(var_4139_int, var_4140_bool, var_4141_int); // 0x1c1d NEW_2
	var_4142_int = 0; var_4143_int = 0; var_4144_object = Obj(); var_4145_object = Obj(); var_4146_object = Obj(); // 0x1c1f PushV
	var_4142_int = 14; // 0x1c20 MovI
	var_4143_int = var_4129_int; // 0x1c21 Mov
	var_4144_object = var_4131_object; // 0x1c22 Mov
	var_4145_object = var_4132_object; // 0x1c23 Mov
	var_4146_object = var_4133_object; // 0x1c24 Mov
	func_670(var_4142_int, var_4143_int, var_4144_object, var_4145_object, var_4146_object); // 0x1c25 NEW_2
	var_4147_object = Obj(); var_4148_int = 0; // 0x1c27 PushV
	var_4147_object = var_4134_object; // 0x1c28 Mov
	var_4148_int = 2; // 0x1c29 MovI
	func_255(var_4148_int); // 0x1c2a NEW_2
	var_4149_int = 0; var_4150_bool = 0; var_4151_int = 0; // 0x1c2c PushV
	var_4149_int = 14; // 0x1c2d MovI
	var_4150_bool = 0; // 0x1c2e MovB
	var_4151_int = 5; // 0x1c2f MovI
	func_820(var_4149_int, var_4150_bool, var_4151_int); // 0x1c30 NEW_2
	var_4152_int = 0; var_4153_bool = 0; var_4154_int = 0; // 0x1c32 PushV
	var_4152_int = 14; // 0x1c33 MovI
	var_4153_bool = 1; // 0x1c34 MovB
	var_4154_int = 5; // 0x1c35 MovI
	func_882(var_4152_int, var_4153_bool, var_4154_int); // 0x1c36 NEW_2
	
Label_7224:
	var_4155_int = 0; var_4156_bool = 0; // 0x1c38 PushV
	var_4155_int = 14; // 0x1c39 MovI
	var_4156_bool = 0; // 0x1c3a MovB
	func_729(var_4155_int, var_4156_bool); // 0x1c3b NEW_2
	var_4157_int = 0; var_4158_int = 0; var_4159_int = 0; // 0x1c3d PushV
	var_4157_int = 14; // 0x1c3e MovI
	var_4158_int = var_4129_int; // 0x1c3f Mov
	var_4159_int = var_4130_int; // 0x1c40 Mov
	func_3421(var_4157_int, var_4158_int, var_4159_int); // 0x1c41 NEW_2
	return 0; // 0x1c43 Return
}


func_6163(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object)
{
	var_3970_int = 0; // 0x1814 PushI
	var_3971_bool = var_3965_int == var_3970_int; // 0x1815 Eq
	if(var_3971_bool == 0) goto Label_6203; // 0x1816 JumpB
	var_3972_int = 0; var_3973_bool = 0; // 0x1817 PushV
	var_3972_int = 9; // 0x1818 MovI
	var_3973_bool = 0; // 0x1819 MovB
	func_746(var_3972_int, var_3973_bool); // 0x181a NEW_2
	var_3974_int = 0; var_3975_bool = 0; var_3976_int = 0; // 0x181c PushV
	var_3974_int = 9; // 0x181d MovI
	var_3975_bool = 0; // 0x181e MovB
	var_3976_int = 1; // 0x181f MovI
	func_763(var_3974_int, var_3975_bool, var_3976_int); // 0x1820 NEW_2
	var_3977_int = 0; var_3978_int = 0; var_3979_object = Obj(); var_3980_object = Obj(); var_3981_object = Obj(); // 0x1822 PushV
	var_3977_int = 9; // 0x1823 MovI
	var_3978_int = var_3964_int; // 0x1824 Mov
	var_3979_object = var_3966_object; // 0x1825 Mov
	var_3980_object = var_3967_object; // 0x1826 Mov
	var_3981_object = var_3968_object; // 0x1827 Mov
	func_670(var_3977_int, var_3978_int, var_3979_object, var_3980_object, var_3981_object); // 0x1828 NEW_2
	var_3982_object = Obj(); var_3983_int = 0; // 0x182a PushV
	var_3982_object = var_3969_object; // 0x182b Mov
	var_3983_int = 2; // 0x182c MovI
	func_255(var_3983_int); // 0x182d NEW_2
	var_3984_int = 0; var_3985_bool = 0; var_3986_int = 0; // 0x182f PushV
	var_3984_int = 9; // 0x1830 MovI
	var_3985_bool = 0; // 0x1831 MovB
	var_3986_int = 7; // 0x1832 MovI
	func_820(var_3984_int, var_3985_bool, var_3986_int); // 0x1833 NEW_2
	var_3987_int = 0; var_3988_bool = 0; var_3989_int = 0; // 0x1835 PushV
	var_3987_int = 9; // 0x1836 MovI
	var_3988_bool = 1; // 0x1837 MovB
	var_3989_int = 7; // 0x1838 MovI
	func_882(var_3987_int, var_3988_bool, var_3989_int); // 0x1839 NEW_2
	
Label_6203:
	var_3990_int = 0; var_3991_bool = 0; // 0x183b PushV
	var_3990_int = 9; // 0x183c MovI
	var_3991_bool = 0; // 0x183d MovB
	func_729(var_3990_int, var_3991_bool); // 0x183e NEW_2
	var_3992_int = 0; var_3993_int = 0; var_3994_int = 0; // 0x1840 PushV
	var_3992_int = 9; // 0x1841 MovI
	var_3993_int = var_3964_int; // 0x1842 Mov
	var_3994_int = var_3965_int; // 0x1843 Mov
	func_3609(var_3992_int, var_3993_int, var_3994_int); // 0x1844 NEW_2
	return 0; // 0x1846 Return
}


func_12309(var_4097_bool, var_4098_int)
{
	var_4100_int = 0; var_4101_int = 0; var_4102_int = 0; var_4103_int = 0; var_4104_int = 0; var_4105_int = 0; var_4106_int = 0; var_4107_int = 0; // 0x3015 PushV
	var_4108_bool = 0; // 0x3016 PushV
	var_4108_bool = 0; // 0x3017 MovB
	var_4109_int = 42000; // 0x3018 PushI
	var_4110_bool = var_4098_int > var_4109_int; // 0x3019 GT
	if(var_4110_bool == 0) goto Label_12319; // 0x301a JumpB
	var_4111_int = 42288; // 0x301b PushI
	var_4112_bool = var_4098_int < var_4111_int; // 0x301c LT
	if(var_4112_bool == 0) goto Label_12319; // 0x301d JumpB
	var_4108_bool = 1; // 0x301e MovB
	
Label_12319:
	if(var_4108_bool == 0) goto Label_12336; // 0x301f JumpB
	var_4113_int = 42000; // 0x3020 PushI
	var_4114_int = var_4098_int - var_4113_int; // 0x3021 Sub
	var_4115_int = 24; // 0x3022 PushI
	var_4104_int = var_4114_int / var_4114_int; // 0x3023 Div2
	var_4116_int = 42000; // 0x3024 PushI
	var_4117_int = var_4098_int - var_4116_int; // 0x3025 Sub
	var_4118_int = 24; // 0x3026 PushI
	var_4105_int = var_4117_int % var_4118_int; // 0x3027 Mod2
	var_4119_int = 0; var_4120_int = 0; // 0x3028 PushV
	var_4121_int = 1; // 0x3029 PushI
	var_4119_int = var_4104_int + var_4121_int; // 0x302a Add2
	var_4120_int = var_4105_int; // 0x302b Mov
	func_8222(var_4119_int, var_4120_int); // 0x302c NEW_2
	var_4097_bool = 1; // 0x302e MovB
	return 8; // 0x302f Return
	
Label_12336:
	var_4256_bool = 0; // 0x3030 PushV
	var_4256_bool = 0; // 0x3031 MovB
	var_4257_int = 40000; // 0x3032 PushI
	var_4258_bool = var_4098_int > var_4257_int; // 0x3033 GT
	if(var_4258_bool == 0) goto Label_12345; // 0x3034 JumpB
	var_4259_int = 40288; // 0x3035 PushI
	var_4260_bool = var_4098_int < var_4259_int; // 0x3036 LT
	if(var_4260_bool == 0) goto Label_12345; // 0x3037 JumpB
	var_4256_bool = 1; // 0x3038 MovB
	
Label_12345:
	if(var_4256_bool == 0) goto Label_12368; // 0x3039 JumpB
	var_4261_int = 40000; // 0x303a PushI
	var_4262_int = var_4098_int - var_4261_int; // 0x303b Sub
	var_4263_int = 24; // 0x303c PushI
	var_4106_int = var_4262_int / var_4262_int; // 0x303d Div2
	var_4264_int = 40000; // 0x303e PushI
	var_4265_int = var_4098_int - var_4264_int; // 0x303f Sub
	var_4266_int = 24; // 0x3040 PushI
	var_4107_int = var_4265_int % var_4266_int; // 0x3041 Mod2
	var_4267_int = 0; var_4268_int = 0; // 0x3042 PushV
	var_4269_int = 1; // 0x3043 PushI
	var_4267_int = var_4106_int + var_4269_int; // 0x3044 Add2
	var_4268_int = var_4107_int; // 0x3045 Mov
	func_8520(var_4267_int, var_4268_int); // 0x3046 NEW_2
	var_4589_int = 0; var_4590_int = 0; // 0x3048 PushV
	var_4591_int = 1; // 0x3049 PushI
	var_4589_int = var_4106_int + var_4591_int; // 0x304a Add2
	var_4590_int = var_4107_int; // 0x304b Mov
	func_14634(var_4589_int, var_4590_int); // 0x304c NEW_2
	var_4097_bool = 1; // 0x304e MovB
	return 8; // 0x304f Return
	
Label_12368:
	var_4097_bool = 0; // 0x3050 MovB
	return 8; // 0x3051 Return
}


func_10262(var_4863_int, var_4864_float)
{
	var_4865_int = 0; var_4866_int = 0; var_4867_int = 0; var_4868_float = 0; // 0x2817 PushV
	var_4866_int = 530855; // 0x2818 MovI
	var_4867_int = 530854; // 0x2819 MovI
	var_4868_float = var_4864_float; // 0x281a Mov
	func_12278(var_4865_int, var_4866_int, var_4867_int, var_4868_float); // 0x281b NEW_2
	var_4863_int = var_4865_int; // 0x281c Mov
	return 0; // 0x281e Return
}


func_8222(var_4119_int, var_4120_int)
{
	var_4122_bool = 0; var_4123_int = 0; var_4124_int = 0; var_4125_bool = 0; var_4126_int = 0; var_4127_int = 0; // 0x201e PushV
	var_4128_int = 0; // 0x201f PushI
	var_4129_bool = var_4120_int == var_4128_int; // 0x2020 Eq
	if(var_4129_bool == 0) goto Label_8519; // 0x2021 JumpB
	var_4125_bool = 0; // 0x2022 MovB
	var_4130_int = 2; // 0x2023 PushI
	var_4131_bool = var_4119_int == var_4130_int; // 0x2024 Eq
	if(var_4131_bool == 0) goto Label_8269; // 0x2025 JumpB
	var_4132_int = 0; // 0x2026 PushV
	func_12303(var_4132_int); // 0x2027 NEW_2
	var_4133_int = 0; // 0x2029 PushI
	var_4134_bool = var_4132_int == var_4133_int; // 0x202a Eq
	if(var_4134_bool == 0) goto Label_8250; // 0x202b JumpB
	var_4135_string = "d1q01"; // 0x202c PushS
	GetVariable(var_4135_string, var_4126_int); // 0x202d Func
	var_4136_int = 1000; // 0x202f PushI
	var_4137_bool = var_4126_int != var_4136_int; // 0x2030 Neq
	if(var_4137_bool == 0) goto Label_8249; // 0x2031 JumpB
	var_4125_bool = 1; // 0x2032 MovB
	var_4138_string = "ACHIEVEMENT_UP"; // 0x2033 PushS
	UnlockAchievement(var_4138_string); // 0x2034 Func
	var_4139_string = "gameover_fail.xml"; // 0x2036 PushS
	GameOver(var_4139_string); // 0x2037 Func
	
Label_8249:
	goto Label_8269; // 0x2039 Jump
	
Label_8269:
	var_4140_bool = var_4125_bool == 0; // 0x204d Not
	if(var_4140_bool == 0) goto Label_8513; // 0x204e JumpB
	var_4141_int = 0; // 0x204f PushV
	func_12303(var_4141_int); // 0x2050 NEW_2
	var_4142_int = 0; // 0x2052 PushI
	var_4143_bool = var_4141_int == var_4142_int; // 0x2053 Eq
	if(var_4143_bool == 0) goto Label_8354; // 0x2054 JumpB
	var_4144_int = 2; // 0x2055 PushI
	var_4145_bool = var_4119_int == var_4144_int; // 0x2056 Eq
	if(var_4145_bool == 0) goto Label_8284; // 0x2057 JumpB
	var_4146_string = "ACHIEVEMENT_BACH_1"; // 0x2058 PushS
	UnlockAchievement(var_4146_string); // 0x2059 Func
	goto Label_8353; // 0x205b Jump
	
Label_8353:
	goto Label_8513; // 0x20a1 Jump
	
Label_8513:
	var_4147_int = 101; // 0x2141 PushI
	SendWorldWndMessage(var_4147_int); // 0x2142 Func
	var_4148_string = "c_iWM_RealDayChange"; // 0x2144 PushS
	SetVariable(var_4148_string, var_4119_int); // 0x2145 Func
	
Label_8519:
	return 6; // 0x2147 Return
	
Label_8284:
	var_4149_int = 3; // 0x205c PushI
	var_4150_bool = var_4119_int == var_4149_int; // 0x205d Eq
	if(var_4150_bool == 0) goto Label_8291; // 0x205e JumpB
	var_4151_string = "ACHIEVEMENT_BACH_2"; // 0x205f PushS
	UnlockAchievement(var_4151_string); // 0x2060 Func
	goto Label_8353; // 0x2062 Jump
	
Label_8291:
	var_4152_int = 4; // 0x2063 PushI
	var_4153_bool = var_4119_int == var_4152_int; // 0x2064 Eq
	if(var_4153_bool == 0) goto Label_8298; // 0x2065 JumpB
	var_4154_string = "ACHIEVEMENT_BACH_3"; // 0x2066 PushS
	UnlockAchievement(var_4154_string); // 0x2067 Func
	goto Label_8353; // 0x2069 Jump
	
Label_8298:
	var_4155_int = 5; // 0x206a PushI
	var_4156_bool = var_4119_int == var_4155_int; // 0x206b Eq
	if(var_4156_bool == 0) goto Label_8305; // 0x206c JumpB
	var_4157_string = "ACHIEVEMENT_BACH_4"; // 0x206d PushS
	UnlockAchievement(var_4157_string); // 0x206e Func
	goto Label_8353; // 0x2070 Jump
	
Label_8305:
	var_4158_int = 6; // 0x2071 PushI
	var_4159_bool = var_4119_int == var_4158_int; // 0x2072 Eq
	if(var_4159_bool == 0) goto Label_8312; // 0x2073 JumpB
	var_4160_string = "ACHIEVEMENT_BACH_5"; // 0x2074 PushS
	UnlockAchievement(var_4160_string); // 0x2075 Func
	goto Label_8353; // 0x2077 Jump
	
Label_8312:
	var_4161_int = 7; // 0x2078 PushI
	var_4162_bool = var_4119_int == var_4161_int; // 0x2079 Eq
	if(var_4162_bool == 0) goto Label_8319; // 0x207a JumpB
	var_4163_string = "ACHIEVEMENT_BACH_6"; // 0x207b PushS
	UnlockAchievement(var_4163_string); // 0x207c Func
	goto Label_8353; // 0x207e Jump
	
Label_8319:
	var_4164_int = 8; // 0x207f PushI
	var_4165_bool = var_4119_int == var_4164_int; // 0x2080 Eq
	if(var_4165_bool == 0) goto Label_8326; // 0x2081 JumpB
	var_4166_string = "ACHIEVEMENT_BACH_7"; // 0x2082 PushS
	UnlockAchievement(var_4166_string); // 0x2083 Func
	goto Label_8353; // 0x2085 Jump
	
Label_8326:
	var_4167_int = 9; // 0x2086 PushI
	var_4168_bool = var_4119_int == var_4167_int; // 0x2087 Eq
	if(var_4168_bool == 0) goto Label_8333; // 0x2088 JumpB
	var_4169_string = "ACHIEVEMENT_BACH_8"; // 0x2089 PushS
	UnlockAchievement(var_4169_string); // 0x208a Func
	goto Label_8353; // 0x208c Jump
	
Label_8333:
	var_4170_int = 10; // 0x208d PushI
	var_4171_bool = var_4119_int == var_4170_int; // 0x208e Eq
	if(var_4171_bool == 0) goto Label_8340; // 0x208f JumpB
	var_4172_string = "ACHIEVEMENT_BACH_9"; // 0x2090 PushS
	UnlockAchievement(var_4172_string); // 0x2091 Func
	goto Label_8353; // 0x2093 Jump
	
Label_8340:
	var_4173_int = 11; // 0x2094 PushI
	var_4174_bool = var_4119_int == var_4173_int; // 0x2095 Eq
	if(var_4174_bool == 0) goto Label_8347; // 0x2096 JumpB
	var_4175_string = "ACHIEVEMENT_BACH_10"; // 0x2097 PushS
	UnlockAchievement(var_4175_string); // 0x2098 Func
	goto Label_8353; // 0x209a Jump
	
Label_8347:
	var_4176_int = 12; // 0x209b PushI
	var_4177_bool = var_4119_int == var_4176_int; // 0x209c Eq
	if(var_4177_bool == 0) goto Label_8353; // 0x209d JumpB
	var_4178_string = "ACHIEVEMENT_BACH_11"; // 0x209e PushS
	UnlockAchievement(var_4178_string); // 0x209f Func
	
Label_8354:
	var_4179_int = 0; // 0x20a2 PushV
	func_12303(var_4179_int); // 0x20a3 NEW_2
	var_4180_int = 1; // 0x20a5 PushI
	var_4181_bool = var_4179_int == var_4180_int; // 0x20a6 Eq
	if(var_4181_bool == 0) goto Label_8437; // 0x20a7 JumpB
	var_4182_int = 2; // 0x20a8 PushI
	var_4183_bool = var_4119_int == var_4182_int; // 0x20a9 Eq
	if(var_4183_bool == 0) goto Label_8367; // 0x20aa JumpB
	var_4184_string = "ACHIEVEMENT_BURAH_1"; // 0x20ab PushS
	UnlockAchievement(var_4184_string); // 0x20ac Func
	goto Label_8436; // 0x20ae Jump
	
Label_8436:
	goto Label_8513; // 0x20f4 Jump
	
Label_8367:
	var_4185_int = 3; // 0x20af PushI
	var_4186_bool = var_4119_int == var_4185_int; // 0x20b0 Eq
	if(var_4186_bool == 0) goto Label_8374; // 0x20b1 JumpB
	var_4187_string = "ACHIEVEMENT_BURAH_2"; // 0x20b2 PushS
	UnlockAchievement(var_4187_string); // 0x20b3 Func
	goto Label_8436; // 0x20b5 Jump
	
Label_8374:
	var_4188_int = 4; // 0x20b6 PushI
	var_4189_bool = var_4119_int == var_4188_int; // 0x20b7 Eq
	if(var_4189_bool == 0) goto Label_8381; // 0x20b8 JumpB
	var_4190_string = "ACHIEVEMENT_BURAH_3"; // 0x20b9 PushS
	UnlockAchievement(var_4190_string); // 0x20ba Func
	goto Label_8436; // 0x20bc Jump
	
Label_8381:
	var_4191_int = 5; // 0x20bd PushI
	var_4192_bool = var_4119_int == var_4191_int; // 0x20be Eq
	if(var_4192_bool == 0) goto Label_8388; // 0x20bf JumpB
	var_4193_string = "ACHIEVEMENT_BURAH_4"; // 0x20c0 PushS
	UnlockAchievement(var_4193_string); // 0x20c1 Func
	goto Label_8436; // 0x20c3 Jump
	
Label_8388:
	var_4194_int = 6; // 0x20c4 PushI
	var_4195_bool = var_4119_int == var_4194_int; // 0x20c5 Eq
	if(var_4195_bool == 0) goto Label_8395; // 0x20c6 JumpB
	var_4196_string = "ACHIEVEMENT_BURAH_5"; // 0x20c7 PushS
	UnlockAchievement(var_4196_string); // 0x20c8 Func
	goto Label_8436; // 0x20ca Jump
	
Label_8395:
	var_4197_int = 7; // 0x20cb PushI
	var_4198_bool = var_4119_int == var_4197_int; // 0x20cc Eq
	if(var_4198_bool == 0) goto Label_8402; // 0x20cd JumpB
	var_4199_string = "ACHIEVEMENT_BURAH_6"; // 0x20ce PushS
	UnlockAchievement(var_4199_string); // 0x20cf Func
	goto Label_8436; // 0x20d1 Jump
	
Label_8402:
	var_4200_int = 8; // 0x20d2 PushI
	var_4201_bool = var_4119_int == var_4200_int; // 0x20d3 Eq
	if(var_4201_bool == 0) goto Label_8409; // 0x20d4 JumpB
	var_4202_string = "ACHIEVEMENT_BURAH_7"; // 0x20d5 PushS
	UnlockAchievement(var_4202_string); // 0x20d6 Func
	goto Label_8436; // 0x20d8 Jump
	
Label_8409:
	var_4203_int = 9; // 0x20d9 PushI
	var_4204_bool = var_4119_int == var_4203_int; // 0x20da Eq
	if(var_4204_bool == 0) goto Label_8416; // 0x20db JumpB
	var_4205_string = "ACHIEVEMENT_BURAH_8"; // 0x20dc PushS
	UnlockAchievement(var_4205_string); // 0x20dd Func
	goto Label_8436; // 0x20df Jump
	
Label_8416:
	var_4206_int = 10; // 0x20e0 PushI
	var_4207_bool = var_4119_int == var_4206_int; // 0x20e1 Eq
	if(var_4207_bool == 0) goto Label_8423; // 0x20e2 JumpB
	var_4208_string = "ACHIEVEMENT_BURAH_9"; // 0x20e3 PushS
	UnlockAchievement(var_4208_string); // 0x20e4 Func
	goto Label_8436; // 0x20e6 Jump
	
Label_8423:
	var_4209_int = 11; // 0x20e7 PushI
	var_4210_bool = var_4119_int == var_4209_int; // 0x20e8 Eq
	if(var_4210_bool == 0) goto Label_8430; // 0x20e9 JumpB
	var_4211_string = "ACHIEVEMENT_BURAH_10"; // 0x20ea PushS
	UnlockAchievement(var_4211_string); // 0x20eb Func
	goto Label_8436; // 0x20ed Jump
	
Label_8430:
	var_4212_int = 12; // 0x20ee PushI
	var_4213_bool = var_4119_int == var_4212_int; // 0x20ef Eq
	if(var_4213_bool == 0) goto Label_8436; // 0x20f0 JumpB
	var_4214_string = "ACHIEVEMENT_BURAH_11"; // 0x20f1 PushS
	UnlockAchievement(var_4214_string); // 0x20f2 Func
	
Label_8437:
	var_4215_int = 2; // 0x20f5 PushI
	var_4216_bool = var_4119_int == var_4215_int; // 0x20f6 Eq
	if(var_4216_bool == 0) goto Label_8444; // 0x20f7 JumpB
	var_4217_string = "ACHIEVEMENT_CLARA_1"; // 0x20f8 PushS
	UnlockAchievement(var_4217_string); // 0x20f9 Func
	goto Label_8513; // 0x20fb Jump
	
Label_8444:
	var_4218_int = 3; // 0x20fc PushI
	var_4219_bool = var_4119_int == var_4218_int; // 0x20fd Eq
	if(var_4219_bool == 0) goto Label_8451; // 0x20fe JumpB
	var_4220_string = "ACHIEVEMENT_CLARA_2"; // 0x20ff PushS
	UnlockAchievement(var_4220_string); // 0x2100 Func
	goto Label_8513; // 0x2102 Jump
	
Label_8451:
	var_4221_int = 4; // 0x2103 PushI
	var_4222_bool = var_4119_int == var_4221_int; // 0x2104 Eq
	if(var_4222_bool == 0) goto Label_8458; // 0x2105 JumpB
	var_4223_string = "ACHIEVEMENT_CLARA_3"; // 0x2106 PushS
	UnlockAchievement(var_4223_string); // 0x2107 Func
	goto Label_8513; // 0x2109 Jump
	
Label_8458:
	var_4224_int = 5; // 0x210a PushI
	var_4225_bool = var_4119_int == var_4224_int; // 0x210b Eq
	if(var_4225_bool == 0) goto Label_8465; // 0x210c JumpB
	var_4226_string = "ACHIEVEMENT_CLARA_4"; // 0x210d PushS
	UnlockAchievement(var_4226_string); // 0x210e Func
	goto Label_8513; // 0x2110 Jump
	
Label_8465:
	var_4227_int = 6; // 0x2111 PushI
	var_4228_bool = var_4119_int == var_4227_int; // 0x2112 Eq
	if(var_4228_bool == 0) goto Label_8472; // 0x2113 JumpB
	var_4229_string = "ACHIEVEMENT_CLARA_5"; // 0x2114 PushS
	UnlockAchievement(var_4229_string); // 0x2115 Func
	goto Label_8513; // 0x2117 Jump
	
Label_8472:
	var_4230_int = 7; // 0x2118 PushI
	var_4231_bool = var_4119_int == var_4230_int; // 0x2119 Eq
	if(var_4231_bool == 0) goto Label_8479; // 0x211a JumpB
	var_4232_string = "ACHIEVEMENT_CLARA_6"; // 0x211b PushS
	UnlockAchievement(var_4232_string); // 0x211c Func
	goto Label_8513; // 0x211e Jump
	
Label_8479:
	var_4233_int = 8; // 0x211f PushI
	var_4234_bool = var_4119_int == var_4233_int; // 0x2120 Eq
	if(var_4234_bool == 0) goto Label_8486; // 0x2121 JumpB
	var_4235_string = "ACHIEVEMENT_CLARA_7"; // 0x2122 PushS
	UnlockAchievement(var_4235_string); // 0x2123 Func
	goto Label_8513; // 0x2125 Jump
	
Label_8486:
	var_4236_int = 9; // 0x2126 PushI
	var_4237_bool = var_4119_int == var_4236_int; // 0x2127 Eq
	if(var_4237_bool == 0) goto Label_8493; // 0x2128 JumpB
	var_4238_string = "ACHIEVEMENT_CLARA_8"; // 0x2129 PushS
	UnlockAchievement(var_4238_string); // 0x212a Func
	goto Label_8513; // 0x212c Jump
	
Label_8493:
	var_4239_int = 10; // 0x212d PushI
	var_4240_bool = var_4119_int == var_4239_int; // 0x212e Eq
	if(var_4240_bool == 0) goto Label_8500; // 0x212f JumpB
	var_4241_string = "ACHIEVEMENT_CLARA_9"; // 0x2130 PushS
	UnlockAchievement(var_4241_string); // 0x2131 Func
	goto Label_8513; // 0x2133 Jump
	
Label_8500:
	var_4242_int = 11; // 0x2134 PushI
	var_4243_bool = var_4119_int == var_4242_int; // 0x2135 Eq
	if(var_4243_bool == 0) goto Label_8507; // 0x2136 JumpB
	var_4244_string = "ACHIEVEMENT_CLARA_10"; // 0x2137 PushS
	UnlockAchievement(var_4244_string); // 0x2138 Func
	goto Label_8513; // 0x213a Jump
	
Label_8507:
	var_4245_int = 12; // 0x213b PushI
	var_4246_bool = var_4119_int == var_4245_int; // 0x213c Eq
	if(var_4246_bool == 0) goto Label_8513; // 0x213d JumpB
	var_4247_string = "ACHIEVEMENT_CLARA_11"; // 0x213e PushS
	UnlockAchievement(var_4247_string); // 0x213f Func
	
Label_8250:
	var_4248_int = 0; // 0x203a PushV
	func_12303(var_4248_int); // 0x203b NEW_2
	var_4249_int = 1; // 0x203d PushI
	var_4250_bool = var_4248_int == var_4249_int; // 0x203e Eq
	if(var_4250_bool == 0) goto Label_8269; // 0x203f JumpB
	var_4251_string = "b1q01"; // 0x2040 PushS
	GetVariable(var_4251_string, var_4127_int); // 0x2041 Func
	var_4252_int = 1000; // 0x2043 PushI
	var_4253_bool = var_4127_int != var_4252_int; // 0x2044 Neq
	if(var_4253_bool == 0) goto Label_8269; // 0x2045 JumpB
	var_4125_bool = 1; // 0x2046 MovB
	var_4254_string = "ACHIEVEMENT_UP"; // 0x2047 PushS
	UnlockAchievement(var_4254_string); // 0x2048 Func
	var_4255_string = "gameover_fail.xml"; // 0x204a PushS
	GameOver(var_4255_string); // 0x204b Func
}


func_10271(var_5307_int, var_5308_float)
{
	var_5309_int = 0; var_5310_int = 0; var_5311_int = 0; var_5312_float = 0; // 0x2820 PushV
	var_5310_int = 529874; // 0x2821 MovI
	var_5311_int = 529873; // 0x2822 MovI
	var_5312_float = var_5308_float; // 0x2823 Mov
	func_12278(var_5309_int, var_5310_int, var_5311_int, var_5312_float); // 0x2824 NEW_2
	var_5307_int = var_5309_int; // 0x2825 Mov
	return 0; // 0x2827 Return
}


func_1060(var_791_bool, var_792_int, var_793_int)
{
	var_794_int = 0; var_795_int = 0; // 0x424 PushV
	var_796_int = 0; // 0x425 PushV
	func_12303(var_796_int); // 0x426 NEW_2
	var_795_int = var_796_int; // 0x427 Mov
	var_800_int = 1; // 0x429 PushI
	var_801_bool = var_795_int == var_800_int; // 0x42a Eq
	if(var_801_bool == 0) goto Label_1081; // 0x42b JumpB
	var_802_bool = 0; // 0x42c PushV
	var_802_bool = 0; // 0x42d MovB
	var_803_int = 0; // 0x42e PushI
	var_804_bool = var_792_int == var_803_int; // 0x42f Eq
	if(var_804_bool == 0) goto Label_1077; // 0x430 JumpB
	var_805_int = 21; // 0x431 PushI
	var_806_bool = var_793_int < var_805_int; // 0x432 LT
	if(var_806_bool == 0) goto Label_1077; // 0x433 JumpB
	var_802_bool = 1; // 0x434 MovB
	
Label_1077:
	if(var_802_bool == 0) goto Label_1080; // 0x435 JumpB
	var_791_bool = 1; // 0x436 MovB
	return 2; // 0x437 Return
	
Label_1080:
	goto Label_1089; // 0x438 Jump
	
Label_1089:
	var_791_bool = 0; // 0x441 MovB
	return 2; // 0x442 Return
	
Label_1081:
	var_807_int = 2; // 0x439 PushI
	var_808_bool = var_795_int == var_807_int; // 0x43a Eq
	if(var_808_bool == 0) goto Label_1089; // 0x43b JumpB
	var_809_int = 5; // 0x43c PushI
	var_810_bool = var_792_int == var_809_int; // 0x43d Eq
	if(var_810_bool == 0) goto Label_1089; // 0x43e JumpB
	var_791_bool = 1; // 0x43f MovB
	return 2; // 0x440 Return
}


func_10280(var_5315_int, var_5316_float)
{
	var_5317_int = 0; var_5318_int = 0; var_5319_int = 0; var_5320_float = 0; // 0x2829 PushV
	var_5318_int = 529872; // 0x282a MovI
	var_5319_int = 529871; // 0x282b MovI
	var_5320_float = var_5316_float; // 0x282c Mov
	func_12278(var_5317_int, var_5318_int, var_5319_int, var_5320_float); // 0x282d NEW_2
	var_5315_int = var_5317_int; // 0x282e Mov
	return 0; // 0x2830 Return
}


func_10289(var_4748_int, var_4749_float)
{
	var_4750_int = 0; var_4751_int = 0; var_4752_int = 0; var_4753_float = 0; // 0x2832 PushV
	var_4751_int = 529858; // 0x2833 MovI
	var_4752_int = 529857; // 0x2834 MovI
	var_4753_float = var_4749_float; // 0x2835 Mov
	func_12278(var_4750_int, var_4751_int, var_4752_int, var_4753_float); // 0x2836 NEW_2
	var_4748_int = var_4750_int; // 0x2837 Mov
	return 0; // 0x2839 Return
}


func_11315()
{
	var_4991_object = Obj(); var_4992_object = Obj(); var_4993_object = Obj(); var_4994_object = Obj(); // 0x2c33 PushV
	var_4995_object = Obj(); // 0x2c34 PushV
	func_12286(var_4995_object); // 0x2c35 NEW_2
	var_4993_object = var_4995_object; // 0x2c36 Mov
	var_4996_string = "b10q04GirlGotoKapella"; // 0x2c38 PushS
	FindMark(var_4994_object, var_4996_string); // 0x2c39 ObjFunc
	var_4997_object = var_4994_object; // 0x2c3b Push
	if(var_4997_object == 0) goto Label_11327; // 0x2c3c JumpB
	Remove(); // 0x2c3d ObjFunc
	
Label_11327:
	var_4998_string = "b10q04MatGotoMorlok"; // 0x2c3f PushS
	FindMark(var_4994_object, var_4998_string); // 0x2c40 ObjFunc
	var_4999_object = var_4994_object; // 0x2c42 Push
	if(var_4999_object == 0) goto Label_11334; // 0x2c43 JumpB
	Remove(); // 0x2c44 ObjFunc
	
Label_11334:
	var_5000_string = "b10q04BlockGotoOfficer"; // 0x2c46 PushS
	FindMark(var_4994_object, var_5000_string); // 0x2c47 ObjFunc
	var_5001_object = var_4994_object; // 0x2c49 Push
	if(var_5001_object == 0) goto Label_11341; // 0x2c4a JumpB
	Remove(); // 0x2c4b ObjFunc
	
Label_11341:
	var_5002_string = "b10q04KapellaGotoBlock"; // 0x2c4d PushS
	FindMark(var_4994_object, var_5002_string); // 0x2c4e ObjFunc
	var_5003_object = var_4994_object; // 0x2c50 Push
	if(var_5003_object == 0) goto Label_11348; // 0x2c51 JumpB
	Remove(); // 0x2c52 ObjFunc
	
Label_11348:
	var_5004_string = "b10q04MorlokGotoLaska"; // 0x2c54 PushS
	FindMark(var_4994_object, var_5004_string); // 0x2c55 ObjFunc
	var_5005_object = var_4994_object; // 0x2c57 Push
	if(var_5005_object == 0) goto Label_11355; // 0x2c58 JumpB
	Remove(); // 0x2c59 ObjFunc
	
Label_11355:
	var_5006_string = "b10q04MorlokGotoMishka"; // 0x2c5b PushS
	FindMark(var_4994_object, var_5006_string); // 0x2c5c ObjFunc
	var_5007_object = var_4994_object; // 0x2c5e Push
	if(var_5007_object == 0) goto Label_11362; // 0x2c5f JumpB
	Remove(); // 0x2c60 ObjFunc
	
Label_11362:
	var_5008_string = "b10q04MorlokGotoNotkin"; // 0x2c62 PushS
	FindMark(var_4994_object, var_5008_string); // 0x2c63 ObjFunc
	var_5009_object = var_4994_object; // 0x2c65 Push
	if(var_5009_object == 0) goto Label_11369; // 0x2c66 JumpB
	Remove(); // 0x2c67 ObjFunc
	
Label_11369:
	var_5010_string = "b10q04MorlokGotoSpi4ka"; // 0x2c69 PushS
	FindMark(var_4994_object, var_5010_string); // 0x2c6a ObjFunc
	var_5011_object = var_4994_object; // 0x2c6c Push
	if(var_5011_object == 0) goto Label_11376; // 0x2c6d JumpB
	Remove(); // 0x2c6e ObjFunc
	
Label_11376:
	var_5012_string = "b10q03KapellaGotoMishka"; // 0x2c70 PushS
	FindMark(var_4994_object, var_5012_string); // 0x2c71 ObjFunc
	var_5013_object = var_4994_object; // 0x2c73 Push
	if(var_5013_object == 0) goto Label_11383; // 0x2c74 JumpB
	Remove(); // 0x2c75 ObjFunc
	
Label_11383:
	var_5014_string = "b10q03MishkaGotoDoll"; // 0x2c77 PushS
	FindMark(var_4994_object, var_5014_string); // 0x2c78 ObjFunc
	var_5015_object = var_4994_object; // 0x2c7a Push
	if(var_5015_object == 0) goto Label_11390; // 0x2c7b JumpB
	Remove(); // 0x2c7c ObjFunc
	
Label_11390:
	var_5016_string = "b10q01StarshinaGotoKurgan"; // 0x2c7e PushS
	FindMark(var_4994_object, var_5016_string); // 0x2c7f ObjFunc
	var_5017_object = var_4994_object; // 0x2c81 Push
	if(var_5017_object == 0) goto Label_11397; // 0x2c82 JumpB
	Remove(); // 0x2c83 ObjFunc
	
Label_11397:
	var_5018_bool = 0; var_5019_int = 0; // 0x2c85 PushV
	var_5019_int = 305; // 0x2c86 MovI
	func_12261(var_5018_bool, var_5019_int); // 0x2c87 NEW_2
	var_5020_bool = 0; var_5021_int = 0; // 0x2c89 PushV
	var_5021_int = 545; // 0x2c8a MovI
	func_12261(var_5020_bool, var_5021_int); // 0x2c8b NEW_2
	var_5022_bool = 0; var_5023_int = 0; // 0x2c8d PushV
	var_5023_int = 594; // 0x2c8e MovI
	func_12261(var_5022_bool, var_5023_int); // 0x2c8f NEW_2
	return 4; // 0x2c91 Return
}


func_10298(var_5627_int, var_5628_float)
{
	var_5629_int = 0; var_5630_int = 0; var_5631_int = 0; var_5632_float = 0; // 0x283b PushV
	var_5630_int = 530666; // 0x283c MovI
	var_5631_int = 530665; // 0x283d MovI
	var_5632_float = var_5628_float; // 0x283e Mov
	func_12278(var_5629_int, var_5630_int, var_5631_int, var_5632_float); // 0x283f NEW_2
	var_5627_int = var_5629_int; // 0x2840 Mov
	return 0; // 0x2842 Return
}


func_59()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x3b PushV
	var_14_string = "player"; // 0x3c PushS
	FindActor(var_9_object, var_14_string); // 0x3d Func
	GetMainOutdoorScene(var_10_object); // 0x3f Func
	var_15_bool = var_10_object == 0; // 0x41 Not
	if(var_15_bool == 0) goto Label_71; // 0x42 JumpB
	var_16_string = "Starting scene not found"; // 0x43 PushS
	Trace(var_16_string); // 0x44 Func
	return 10; // 0x46 Return
	
Label_71:
	var_17_string = "pt_birth_Burah"; // 0x47 PushS
	GetLocator(var_17_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x48 ObjFunc
	var_18_bool = var_11_bool; // 0x4a Push
	if(var_18_bool == 0) goto Label_78; // 0x4b JumpB
	Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector); // 0x4c Func
	
Label_78:
	return 10; // 0x4e Return
}


func_4160(var_3428_int, var_3429_int, var_3430_int)
{
	var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; var_3438_int = 0; // 0x1040 PushV
	var_3439_bool = 0; // 0x1041 PushV
	var_3439_bool = 0; // 0x1042 MovB
	var_3440_int = 8; // 0x1043 PushI
	var_3441_bool = var_3430_int > var_3440_int; // 0x1044 GT
	if(var_3441_bool == 0) goto Label_4170; // 0x1045 JumpB
	var_3442_int = 21; // 0x1046 PushI
	var_3443_bool = var_3430_int < var_3442_int; // 0x1047 LT
	if(var_3443_bool == 0) goto Label_4170; // 0x1048 JumpB
	var_3439_bool = 1; // 0x1049 MovB
	
Label_4170:
	if(var_3439_bool == 0) goto Label_4247; // 0x104a JumpB
	var_3444_int = 0; var_3445_string = ""; var_3446_string = ""; var_3447_int = 0; // 0x104b PushV
	var_3444_int = var_3428_int; // 0x104c Mov
	var_3445_string = "pers_rat"; // 0x104d MovS
	var_3446_string = "rat.xml"; // 0x104e MovS
	var_3447_int = 4; // 0x104f MovI
	func_453(var_3444_int, var_3445_string, var_3446_string, var_3447_int); // 0x1050 NEW_2
	var_3448_int = 0; var_3449_string = ""; var_3450_string = ""; var_3451_int = 0; // 0x1052 PushV
	var_3448_int = var_3428_int; // 0x1053 Mov
	var_3449_string = "pers_alkash"; // 0x1054 MovS
	var_3450_string = "alkash.xml"; // 0x1055 MovS
	var_3451_int = 2; // 0x1056 MovI
	func_453(var_3448_int, var_3449_string, var_3450_string, var_3451_int); // 0x1057 NEW_2
	var_3452_int = 0; var_3453_string = ""; var_3454_string = ""; var_3455_int = 0; // 0x1059 PushV
	var_3452_int = var_3428_int; // 0x105a Mov
	var_3453_string = "pers_dohodyaga"; // 0x105b MovS
	var_3454_string = "dohodyaga.xml"; // 0x105c MovS
	var_3455_int = 1; // 0x105d MovI
	func_453(var_3452_int, var_3453_string, var_3454_string, var_3455_int); // 0x105e NEW_2
	var_3456_int = 2; // 0x1060 PushI
	var_3457_float = 0; var_3458_int = 0; // 0x1061 PushV
	var_3458_int = var_3429_int; // 0x1062 Mov
	func_1115(var_3457_float, var_3458_int); // 0x1063 NEW_2
	var_3435_int = var_3456_int * var_3457_float; // 0x1065 Mult2
	var_3459_int = var_3435_int; // 0x1066 Push
	if(var_3459_int == 0) goto Label_4207; // 0x1067 JumpB
	var_3460_int = 0; var_3461_string = ""; var_3462_string = ""; var_3463_int = 0; // 0x1068 PushV
	var_3460_int = var_3428_int; // 0x1069 Mov
	var_3461_string = "pers_grabitel"; // 0x106a MovS
	var_3462_string = "grabitel.xml"; // 0x106b MovS
	var_3463_int = var_3435_int; // 0x106c Mov
	func_453(var_3460_int, var_3461_string, var_3462_string, var_3463_int); // 0x106d NEW_2
	
Label_4207:
	var_3464_int = 1; // 0x106f PushI
	var_3465_int = var_3429_int + var_3464_int; // 0x1070 Add
	var_3466_int = 2; // 0x1071 PushI
	var_3467_bool = var_3465_int >= var_3466_int; // 0x1072 GE
	if(var_3467_bool == 0) goto Label_4231; // 0x1073 JumpB
	var_3468_int = 0; var_3469_string = ""; var_3470_string = ""; var_3471_int = 0; // 0x1074 PushV
	var_3468_int = var_3428_int; // 0x1075 Mov
	var_3469_string = "pers_patrool"; // 0x1076 MovS
	var_3470_string = "patrol.xml"; // 0x1077 MovS
	var_3471_int = 2; // 0x1078 MovI
	func_453(var_3468_int, var_3469_string, var_3470_string, var_3471_int); // 0x1079 NEW_2
	var_3472_bool = 0; var_3473_int = 0; // 0x107b PushV
	var_3473_int = var_3429_int; // 0x107c Mov
	func_1322(var_3472_bool, var_3473_int); // 0x107d NEW_2
	if(var_3472_bool == 0) goto Label_4231; // 0x107f JumpB
	var_3474_int = 0; var_3475_string = ""; var_3476_string = ""; var_3477_int = 0; // 0x1080 PushV
	var_3474_int = var_3428_int; // 0x1081 Mov
	var_3475_string = "pers_soldat_hand"; // 0x1082 MovS
	var_3476_string = "soldier_patrol.xml"; // 0x1083 MovS
	var_3477_int = 1; // 0x1084 MovI
	func_453(var_3474_int, var_3475_string, var_3476_string, var_3477_int); // 0x1085 NEW_2
	
Label_4231:
	var_3478_int = 1; // 0x1087 PushI
	var_3479_float = 0; var_3480_int = 0; // 0x1088 PushV
	var_3480_int = var_3429_int; // 0x1089 Mov
	func_1205(var_3479_float, var_3480_int); // 0x108a NEW_2
	var_3436_int = var_3478_int * var_3479_float; // 0x108c Mult2
	var_3481_int = var_3436_int; // 0x108d Push
	if(var_3481_int == 0) goto Label_4246; // 0x108e JumpB
	var_3482_int = 0; var_3483_string = ""; var_3484_string = ""; var_3485_int = 0; // 0x108f PushV
	var_3482_int = var_3428_int; // 0x1090 Mov
	var_3483_string = "pers_bomber"; // 0x1091 MovS
	var_3484_string = "bomber.xml"; // 0x1092 MovS
	var_3485_int = var_3436_int; // 0x1093 Mov
	func_453(var_3482_int, var_3483_string, var_3484_string, var_3485_int); // 0x1094 NEW_2
	
Label_4246:
	goto Label_4322; // 0x1096 Jump
	
Label_4322:
	var_3486_bool = 0; var_3487_int = 0; // 0x10e2 PushV
	var_3487_int = var_3429_int; // 0x10e3 Mov
	func_1322(var_3486_bool, var_3487_int); // 0x10e4 NEW_2
	if(var_3486_bool == 0) goto Label_4334; // 0x10e6 JumpB
	var_3488_int = 0; var_3489_string = ""; var_3490_string = ""; var_3491_int = 0; // 0x10e7 PushV
	var_3488_int = var_3428_int; // 0x10e8 Mov
	var_3489_string = "pers_sanitar"; // 0x10e9 MovS
	var_3490_string = "sanitar.xml"; // 0x10ea MovS
	var_3491_int = 2; // 0x10eb MovI
	func_453(var_3488_int, var_3489_string, var_3490_string, var_3491_int); // 0x10ec NEW_2
	
Label_4334:
	return 8; // 0x10ee Return
	
Label_4247:
	var_3492_int = 0; var_3493_string = ""; var_3494_string = ""; var_3495_int = 0; // 0x1097 PushV
	var_3492_int = var_3428_int; // 0x1098 Mov
	var_3493_string = "pers_rat"; // 0x1099 MovS
	var_3494_string = "rat.xml"; // 0x109a MovS
	var_3495_int = 8; // 0x109b MovI
	func_453(var_3492_int, var_3493_string, var_3494_string, var_3495_int); // 0x109c NEW_2
	var_3496_int = 0; var_3497_string = ""; var_3498_string = ""; var_3499_int = 0; // 0x109e PushV
	var_3496_int = var_3428_int; // 0x109f Mov
	var_3497_string = "pers_alkash"; // 0x10a0 MovS
	var_3498_string = "alkash.xml"; // 0x10a1 MovS
	var_3499_int = 1; // 0x10a2 MovI
	func_453(var_3496_int, var_3497_string, var_3498_string, var_3499_int); // 0x10a3 NEW_2
	var_3500_int = 0; var_3501_string = ""; var_3502_string = ""; var_3503_int = 0; // 0x10a5 PushV
	var_3500_int = var_3428_int; // 0x10a6 Mov
	var_3501_string = "pers_dohodyaga"; // 0x10a7 MovS
	var_3502_string = "dohodyaga.xml"; // 0x10a8 MovS
	var_3503_int = 1; // 0x10a9 MovI
	func_453(var_3500_int, var_3501_string, var_3502_string, var_3503_int); // 0x10aa NEW_2
	var_3504_int = 3; // 0x10ac PushI
	var_3505_float = 0; var_3506_int = 0; // 0x10ad PushV
	var_3506_int = var_3429_int; // 0x10ae Mov
	func_1115(var_3505_float, var_3506_int); // 0x10af NEW_2
	var_3437_int = var_3504_int * var_3505_float; // 0x10b1 Mult2
	var_3507_int = var_3437_int; // 0x10b2 Push
	if(var_3507_int == 0) goto Label_4283; // 0x10b3 JumpB
	var_3508_int = 0; var_3509_string = ""; var_3510_string = ""; var_3511_int = 0; // 0x10b4 PushV
	var_3508_int = var_3428_int; // 0x10b5 Mov
	var_3509_string = "pers_grabitel"; // 0x10b6 MovS
	var_3510_string = "grabitel.xml"; // 0x10b7 MovS
	var_3511_int = var_3437_int; // 0x10b8 Mov
	func_453(var_3508_int, var_3509_string, var_3510_string, var_3511_int); // 0x10b9 NEW_2
	
Label_4283:
	var_3512_int = 1; // 0x10bb PushI
	var_3513_int = var_3429_int + var_3512_int; // 0x10bc Add
	var_3514_int = 2; // 0x10bd PushI
	var_3515_bool = var_3513_int >= var_3514_int; // 0x10be GE
	if(var_3515_bool == 0) goto Label_4307; // 0x10bf JumpB
	var_3516_int = 0; var_3517_string = ""; var_3518_string = ""; var_3519_int = 0; // 0x10c0 PushV
	var_3516_int = var_3428_int; // 0x10c1 Mov
	var_3517_string = "pers_patrool"; // 0x10c2 MovS
	var_3518_string = "patrol.xml"; // 0x10c3 MovS
	var_3519_int = 1; // 0x10c4 MovI
	func_453(var_3516_int, var_3517_string, var_3518_string, var_3519_int); // 0x10c5 NEW_2
	var_3520_bool = 0; var_3521_int = 0; // 0x10c7 PushV
	var_3521_int = var_3429_int; // 0x10c8 Mov
	func_1322(var_3520_bool, var_3521_int); // 0x10c9 NEW_2
	if(var_3520_bool == 0) goto Label_4307; // 0x10cb JumpB
	var_3522_int = 0; var_3523_string = ""; var_3524_string = ""; var_3525_int = 0; // 0x10cc PushV
	var_3522_int = var_3428_int; // 0x10cd Mov
	var_3523_string = "pers_soldat_hand"; // 0x10ce MovS
	var_3524_string = "soldier_patrol.xml"; // 0x10cf MovS
	var_3525_int = 1; // 0x10d0 MovI
	func_453(var_3522_int, var_3523_string, var_3524_string, var_3525_int); // 0x10d1 NEW_2
	
Label_4307:
	var_3526_int = 1; // 0x10d3 PushI
	var_3527_float = 0; var_3528_int = 0; // 0x10d4 PushV
	var_3528_int = var_3429_int; // 0x10d5 Mov
	func_1205(var_3527_float, var_3528_int); // 0x10d6 NEW_2
	var_3438_int = var_3526_int * var_3527_float; // 0x10d8 Mult2
	var_3529_int = var_3438_int; // 0x10d9 Push
	if(var_3529_int == 0) goto Label_4322; // 0x10da JumpB
	var_3530_int = 0; var_3531_string = ""; var_3532_string = ""; var_3533_int = 0; // 0x10db PushV
	var_3530_int = var_3428_int; // 0x10dc Mov
	var_3531_string = "pers_bomber"; // 0x10dd MovS
	var_3532_string = "bomber.xml"; // 0x10de MovS
	var_3533_int = var_3438_int; // 0x10df Mov
	func_453(var_3530_int, var_3531_string, var_3532_string, var_3533_int); // 0x10e0 NEW_2
}


func_10307(var_5191_int, var_5192_float)
{
	var_5193_int = 0; var_5194_int = 0; var_5195_int = 0; var_5196_float = 0; // 0x2844 PushV
	var_5194_int = 529878; // 0x2845 MovI
	var_5195_int = 529877; // 0x2846 MovI
	var_5196_float = var_5192_float; // 0x2847 Mov
	func_12278(var_5193_int, var_5194_int, var_5195_int, var_5196_float); // 0x2848 NEW_2
	var_5191_int = var_5193_int; // 0x2849 Mov
	return 0; // 0x284b Return
}


func_1091(var_768_float, var_769_int)
{
	var_770_int = 1; // 0x444 PushI
	var_771_int = var_769_int + var_770_int; // 0x445 Add
	var_772_int = 7; // 0x446 PushI
	var_773_bool = var_771_int == var_772_int; // 0x447 Eq
	if(var_773_bool == 0) goto Label_1099; // 0x448 JumpB
	var_768_float = 2; // 0x449 MovI
	return 0; // 0x44a Return
	
Label_1099:
	var_774_int = 1; // 0x44b PushI
	var_775_int = var_769_int + var_774_int; // 0x44c Add
	var_776_int = 8; // 0x44d PushI
	var_777_bool = var_775_int == var_776_int; // 0x44e Eq
	if(var_777_bool == 0) goto Label_1106; // 0x44f JumpB
	var_768_float = 0; // 0x450 MovI
	return 0; // 0x451 Return
	
Label_1106:
	var_778_int = 1; // 0x452 PushI
	var_779_int = var_769_int + var_778_int; // 0x453 Add
	var_780_int = 1; // 0x454 PushI
	var_781_bool = var_779_int == var_780_int; // 0x455 Eq
	if(var_781_bool == 0) goto Label_1113; // 0x456 JumpB
	var_768_float = 0; // 0x457 MovI
	return 0; // 0x458 Return
	
Label_1113:
	var_768_float = 1; // 0x459 MovI
	return 0; // 0x45a Return
}


func_7236()
{
	var_314_string = "lc_house3_05_i2"; // 0x1c45 PushS
	add(var_314_string); // 0x1c46 ObjFunc
	var_315_string = "lc_house3_05"; // 0x1c48 PushS
	add(var_315_string); // 0x1c49 ObjFunc
	var_316_string = "lc_house3_06_i2"; // 0x1c4b PushS
	add(var_316_string); // 0x1c4c ObjFunc
	var_317_string = "lc_house3_06"; // 0x1c4e PushS
	add(var_317_string); // 0x1c4f ObjFunc
	var_318_string = "lc_House6_06"; // 0x1c51 PushS
	add(var_318_string); // 0x1c52 ObjFunc
	var_319_string = "lc_house3_04_i2"; // 0x1c54 PushS
	add(var_319_string); // 0x1c55 ObjFunc
	var_320_string = "lc_house3_04"; // 0x1c57 PushS
	add(var_320_string); // 0x1c58 ObjFunc
	var_321_string = "house3_plus_03_i2"; // 0x1c5a PushS
	add(var_321_string); // 0x1c5b ObjFunc
	return 0; // 0x1c5d Return
}


func_5188(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object)
{
	var_1302_int = 0; // 0x1445 PushI
	var_1303_bool = var_1297_int == var_1302_int; // 0x1446 Eq
	if(var_1303_bool == 0) goto Label_5228; // 0x1447 JumpB
	var_1304_int = 0; var_1305_bool = 0; // 0x1448 PushV
	var_1304_int = 4; // 0x1449 MovI
	var_1305_bool = 0; // 0x144a MovB
	func_746(var_1304_int, var_1305_bool); // 0x144b NEW_2
	var_1306_int = 0; var_1307_bool = 0; var_1308_int = 0; // 0x144d PushV
	var_1306_int = 4; // 0x144e MovI
	var_1307_bool = 0; // 0x144f MovB
	var_1308_int = 1; // 0x1450 MovI
	func_763(var_1306_int, var_1307_bool, var_1308_int); // 0x1451 NEW_2
	var_1309_int = 0; var_1310_int = 0; var_1311_object = Obj(); var_1312_object = Obj(); var_1313_object = Obj(); // 0x1453 PushV
	var_1309_int = 4; // 0x1454 MovI
	var_1310_int = var_1296_int; // 0x1455 Mov
	var_1311_object = var_1298_object; // 0x1456 Mov
	var_1312_object = var_1299_object; // 0x1457 Mov
	var_1313_object = var_1300_object; // 0x1458 Mov
	func_572(var_1310_int, var_1311_object, var_1312_object, var_1313_object); // 0x1459 NEW_2
	var_1314_object = Obj(); var_1315_int = 0; // 0x145b PushV
	var_1314_object = var_1301_object; // 0x145c Mov
	var_1315_int = 0; // 0x145d MovI
	func_255(var_1315_int); // 0x145e NEW_2
	var_1316_int = 0; var_1317_bool = 0; var_1318_int = 0; // 0x1460 PushV
	var_1316_int = 4; // 0x1461 MovI
	var_1317_bool = 0; // 0x1462 MovB
	var_1318_int = 4; // 0x1463 MovI
	func_820(var_1316_int, var_1317_bool, var_1318_int); // 0x1464 NEW_2
	var_1319_int = 0; var_1320_bool = 0; var_1321_int = 0; // 0x1466 PushV
	var_1319_int = 4; // 0x1467 MovI
	var_1320_bool = 0; // 0x1468 MovB
	var_1321_int = 4; // 0x1469 MovI
	func_882(var_1319_int, var_1320_bool, var_1321_int); // 0x146a NEW_2
	
Label_5228:
	var_1322_int = 0; var_1323_int = 0; // 0x146c PushV
	var_1322_int = 4; // 0x146d MovI
	var_1323_int = var_1297_int; // 0x146e Mov
	func_970(var_1322_int, var_1323_int); // 0x146f NEW_2
	var_1336_int = 0; var_1337_int = 0; var_1338_int = 0; // 0x1471 PushV
	var_1336_int = 4; // 0x1472 MovI
	var_1337_int = var_1296_int; // 0x1473 Mov
	var_1338_int = var_1297_int; // 0x1474 Mov
	func_1847(var_1336_int, var_1337_int, var_1338_int); // 0x1475 NEW_2
	return 0; // 0x1477 Return
}


func_6215()
{
	var_227_string = "r4_house_2_02"; // 0x1848 PushS
	add(var_227_string); // 0x1849 ObjFunc
	var_228_string = "r4_house3_03_i2"; // 0x184b PushS
	add(var_228_string); // 0x184c ObjFunc
	var_229_string = "r4_house3_03"; // 0x184e PushS
	add(var_229_string); // 0x184f ObjFunc
	var_230_string = "r4_house4_02_i2"; // 0x1851 PushS
	add(var_230_string); // 0x1852 ObjFunc
	var_231_string = "r4_house4_02"; // 0x1854 PushS
	add(var_231_string); // 0x1855 ObjFunc
	var_232_string = "r4_house4_01_i2"; // 0x1857 PushS
	add(var_232_string); // 0x1858 ObjFunc
	var_233_string = "r4_house4_01"; // 0x185a PushS
	add(var_233_string); // 0x185b ObjFunc
	var_234_string = "r4_house3_02_i2"; // 0x185d PushS
	add(var_234_string); // 0x185e ObjFunc
	var_235_string = "r4_house3_02"; // 0x1860 PushS
	add(var_235_string); // 0x1861 ObjFunc
	var_236_string = "r4_house_2_01"; // 0x1863 PushS
	add(var_236_string); // 0x1864 ObjFunc
	var_237_string = "r4_house3_01_i2"; // 0x1866 PushS
	add(var_237_string); // 0x1867 ObjFunc
	var_238_string = "r4_house3_01"; // 0x1869 PushS
	add(var_238_string); // 0x186a ObjFunc
	var_239_string = "r4_house7_01"; // 0x186c PushS
	add(var_239_string); // 0x186d ObjFunc
	var_240_string = "r4_House6_01"; // 0x186f PushS
	add(var_240_string); // 0x1870 ObjFunc
	var_241_string = "r4_house_2_03"; // 0x1872 PushS
	add(var_241_string); // 0x1873 ObjFunc
	var_242_string = "r4_House6_03"; // 0x1875 PushS
	add(var_242_string); // 0x1876 ObjFunc
	var_243_string = "r4_house_2_04"; // 0x1878 PushS
	add(var_243_string); // 0x1879 ObjFunc
	return 0; // 0x187b Return
}


func_10316(var_5245_int, var_5246_float)
{
	var_5247_int = 0; var_5248_int = 0; var_5249_int = 0; var_5250_float = 0; // 0x284d PushV
	var_5248_int = 520962; // 0x284e MovI
	var_5249_int = 520961; // 0x284f MovI
	var_5250_float = var_5246_float; // 0x2850 Mov
	func_12278(var_5247_int, var_5248_int, var_5249_int, var_5250_float); // 0x2851 NEW_2
	var_5245_int = var_5247_int; // 0x2852 Mov
	return 0; // 0x2854 Return
}


func_81(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x51 PushV
	var_103_string = "player"; // 0x52 PushS
	FindActor(var_102_object, var_103_string); // 0x53 Func
	var_100_object = var_102_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_12370()
{
	var_4365_float = 0; var_4366_int = 0; var_4367_float = 0; var_4368_float = 0; var_4369_int = 0; var_4370_float = 0; // 0x3052 PushV
	GetGameTime(var_4368_float); // 0x3053 Func
	var_4369_int = 1; // 0x3055 MovI
	
Label_12374:
	var_4371_int = 288; // 0x3056 PushI
	var_4372_bool = var_4369_int < var_4371_int; // 0x3057 LT
	if(var_4372_bool == 0) goto Label_12398; // 0x3058 JumpB
	var_4373_float = 1.0; // 0x3059 PushF
	var_4370_float = var_4373_float * var_4369_int; // 0x305a Mult2
	var_4374_bool = var_4370_float < var_4368_float; // 0x305b LT
	if(var_4374_bool == 0) goto Label_12382; // 0x305c JumpB
	goto Label_12395; // 0x305d Jump
	
Label_12395:
	var_4375_int = 1; // 0x306b PushI
	var_4369_int = var_4369_int + var_4375_int; // 0x306c Add2
	goto Label_12374; // 0x306d Jump
	
Label_12382:
	var_4376_int = 40000; // 0x305e PushI
	var_4377_int = var_4376_int + var_4369_int; // 0x305f Add
	SetTimeEvent(var_4377_int, var_4370_float); // 0x3060 Func
	var_4378_float = 0.00333; // 0x3062 PushF
	var_4370_float = var_4370_float - var_4378_float; // 0x3063 Sub2
	var_4379_bool = var_4370_float < var_4368_float; // 0x3064 LT
	if(var_4379_bool == 0) goto Label_12391; // 0x3065 JumpB
	goto Label_12395; // 0x3066 Jump
	
Label_12391:
	var_4380_int = 42000; // 0x3067 PushI
	var_4381_int = var_4380_int + var_4369_int; // 0x3068 Add
	SetTimeEvent(var_4381_int, var_4370_float); // 0x3069 Func
	
Label_12398:
	func_8150(); // 0x306f NEW_2
	func_14590(); // 0x3072 NEW_2
	return 6; // 0x3074 Return
}


func_10325(var_4756_int, var_4757_float)
{
	var_4758_int = 0; var_4759_int = 0; var_4760_int = 0; var_4761_float = 0; // 0x2856 PushV
	var_4759_int = 529860; // 0x2857 MovI
	var_4760_int = 529859; // 0x2858 MovI
	var_4761_float = var_4757_float; // 0x2859 Mov
	func_12278(var_4758_int, var_4759_int, var_4760_int, var_4761_float); // 0x285a NEW_2
	var_4756_int = var_4758_int; // 0x285b Mov
	return 0; // 0x285d Return
}


func_88(var_585_bool, var_586_object, var_587_string)
{
	var_588_bool = 0; var_589_bool = 0; // 0x58 PushV
	var_590_string = "HasProperty"; // 0x59 PushS
	var_591_int = 2; // 0x5a PushI
	var_592_bool = IsFuncExist(var_586_object, var_590_string, var_591_int); // 0x5b FuncExist
	var_593_bool = var_592_bool == 0; // 0x5c Not
	if(var_593_bool == 0) goto Label_96; // 0x5d JumpB
	var_585_bool = 0; // 0x5e MovB
	return 2; // 0x5f Return
	
Label_96:
	HasProperty(var_587_string, var_589_bool); // 0x60 ObjFunc
	var_585_bool = var_589_bool; // 0x62 Mov
	return 2; // 0x63 Return
}


func_1115(var_3277_float, var_3278_int)
{
	var_3279_int = 1; // 0x45c PushI
	var_3280_int = var_3278_int + var_3279_int; // 0x45d Add
	var_3281_int = 1; // 0x45e PushI
	var_3282_bool = var_3280_int == var_3281_int; // 0x45f Eq
	if(var_3282_bool == 0) goto Label_1124; // 0x460 JumpB
	var_3277_float = 0; // 0x461 MovI
	return 0; // 0x462 Return
	
Label_1124:
	var_3283_int = 1; // 0x464 PushI
	var_3284_int = var_3278_int + var_3283_int; // 0x465 Add
	var_3285_int = 2; // 0x466 PushI
	var_3286_bool = var_3284_int == var_3285_int; // 0x467 Eq
	if(var_3286_bool == 0) goto Label_1132; // 0x468 JumpB
	var_3277_float = 0; // 0x469 MovI
	return 0; // 0x46a Return
	
Label_1132:
	var_3287_int = 1; // 0x46c PushI
	var_3288_int = var_3278_int + var_3287_int; // 0x46d Add
	var_3289_int = 3; // 0x46e PushI
	var_3290_bool = var_3288_int == var_3289_int; // 0x46f Eq
	if(var_3290_bool == 0) goto Label_1140; // 0x470 JumpB
	var_3277_float = 1; // 0x471 MovI
	return 0; // 0x472 Return
	
Label_1140:
	var_3291_int = 1; // 0x474 PushI
	var_3292_int = var_3278_int + var_3291_int; // 0x475 Add
	var_3293_int = 4; // 0x476 PushI
	var_3294_bool = var_3292_int == var_3293_int; // 0x477 Eq
	if(var_3294_bool == 0) goto Label_1148; // 0x478 JumpB
	var_3277_float = 1; // 0x479 MovI
	return 0; // 0x47a Return
	
Label_1148:
	var_3295_int = 1; // 0x47c PushI
	var_3296_int = var_3278_int + var_3295_int; // 0x47d Add
	var_3297_int = 5; // 0x47e PushI
	var_3298_bool = var_3296_int == var_3297_int; // 0x47f Eq
	if(var_3298_bool == 0) goto Label_1156; // 0x480 JumpB
	var_3277_float = 1; // 0x481 MovI
	return 0; // 0x482 Return
	
Label_1156:
	var_3299_int = 1; // 0x484 PushI
	var_3300_int = var_3278_int + var_3299_int; // 0x485 Add
	var_3301_int = 6; // 0x486 PushI
	var_3302_bool = var_3300_int == var_3301_int; // 0x487 Eq
	if(var_3302_bool == 0) goto Label_1164; // 0x488 JumpB
	var_3277_float = 2; // 0x489 MovI
	return 0; // 0x48a Return
	
Label_1164:
	var_3303_int = 1; // 0x48c PushI
	var_3304_int = var_3278_int + var_3303_int; // 0x48d Add
	var_3305_int = 7; // 0x48e PushI
	var_3306_bool = var_3304_int == var_3305_int; // 0x48f Eq
	if(var_3306_bool == 0) goto Label_1172; // 0x490 JumpB
	var_3277_float = 1; // 0x491 MovI
	return 0; // 0x492 Return
	
Label_1172:
	var_3307_int = 1; // 0x494 PushI
	var_3308_int = var_3278_int + var_3307_int; // 0x495 Add
	var_3309_int = 8; // 0x496 PushI
	var_3310_bool = var_3308_int == var_3309_int; // 0x497 Eq
	if(var_3310_bool == 0) goto Label_1180; // 0x498 JumpB
	var_3277_float = 1; // 0x499 MovI
	return 0; // 0x49a Return
	
Label_1180:
	var_3311_int = 1; // 0x49c PushI
	var_3312_int = var_3278_int + var_3311_int; // 0x49d Add
	var_3313_int = 9; // 0x49e PushI
	var_3314_bool = var_3312_int == var_3313_int; // 0x49f Eq
	if(var_3314_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_3277_float = 1; // 0x4a1 MovI
	return 0; // 0x4a2 Return
	
Label_1188:
	var_3315_int = 1; // 0x4a4 PushI
	var_3316_int = var_3278_int + var_3315_int; // 0x4a5 Add
	var_3317_int = 10; // 0x4a6 PushI
	var_3318_bool = var_3316_int == var_3317_int; // 0x4a7 Eq
	if(var_3318_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_3277_float = 1; // 0x4a9 MovI
	return 0; // 0x4aa Return
	
Label_1196:
	var_3319_int = 1; // 0x4ac PushI
	var_3320_int = var_3278_int + var_3319_int; // 0x4ad Add
	var_3321_int = 11; // 0x4ae PushI
	var_3322_bool = var_3320_int == var_3321_int; // 0x4af Eq
	if(var_3322_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_3277_float = 1; // 0x4b1 MovI
	return 0; // 0x4b2 Return
	
Label_1203:
	var_3277_float = 0; // 0x4b3 MovI
	return 0; // 0x4b4 Return
}


func_10334(var_5260_int, var_5261_float)
{
	var_5262_int = 0; var_5263_int = 0; var_5264_int = 0; var_5265_float = 0; // 0x285f PushV
	var_5263_int = 520964; // 0x2860 MovI
	var_5264_int = 520963; // 0x2861 MovI
	var_5265_float = var_5261_float; // 0x2862 Mov
	func_12278(var_5262_int, var_5263_int, var_5264_int, var_5265_float); // 0x2863 NEW_2
	var_5260_int = var_5262_int; // 0x2864 Mov
	return 0; // 0x2866 Return
}


func_7262(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object)
{
	var_1953_int = 0; // 0x1c5f PushI
	var_1954_bool = var_1948_int == var_1953_int; // 0x1c60 Eq
	if(var_1954_bool == 0) goto Label_7302; // 0x1c61 JumpB
	var_1955_int = 0; var_1956_bool = 0; // 0x1c62 PushV
	var_1955_int = 15; // 0x1c63 MovI
	var_1956_bool = 0; // 0x1c64 MovB
	func_746(var_1955_int, var_1956_bool); // 0x1c65 NEW_2
	var_1957_int = 0; var_1958_bool = 0; var_1959_int = 0; // 0x1c67 PushV
	var_1957_int = 15; // 0x1c68 MovI
	var_1958_bool = 0; // 0x1c69 MovB
	var_1959_int = 1; // 0x1c6a MovI
	func_763(var_1957_int, var_1958_bool, var_1959_int); // 0x1c6b NEW_2
	var_1960_int = 0; var_1961_int = 0; var_1962_object = Obj(); var_1963_object = Obj(); var_1964_object = Obj(); // 0x1c6d PushV
	var_1960_int = 15; // 0x1c6e MovI
	var_1961_int = var_1947_int; // 0x1c6f Mov
	var_1962_object = var_1949_object; // 0x1c70 Mov
	var_1963_object = var_1950_object; // 0x1c71 Mov
	var_1964_object = var_1951_object; // 0x1c72 Mov
	func_572(var_1961_int, var_1962_object, var_1963_object, var_1964_object); // 0x1c73 NEW_2
	var_1965_object = Obj(); var_1966_int = 0; // 0x1c75 PushV
	var_1965_object = var_1952_object; // 0x1c76 Mov
	var_1966_int = 0; // 0x1c77 MovI
	func_255(var_1966_int); // 0x1c78 NEW_2
	var_1967_int = 0; var_1968_bool = 0; var_1969_int = 0; // 0x1c7a PushV
	var_1967_int = 15; // 0x1c7b MovI
	var_1968_bool = 0; // 0x1c7c MovB
	var_1969_int = 5; // 0x1c7d MovI
	func_820(var_1967_int, var_1968_bool, var_1969_int); // 0x1c7e NEW_2
	var_1970_int = 0; var_1971_bool = 0; var_1972_int = 0; // 0x1c80 PushV
	var_1970_int = 15; // 0x1c81 MovI
	var_1971_bool = 0; // 0x1c82 MovB
	var_1972_int = 5; // 0x1c83 MovI
	func_882(var_1970_int, var_1971_bool, var_1972_int); // 0x1c84 NEW_2
	
Label_7302:
	var_1973_int = 0; var_1974_int = 0; // 0x1c86 PushV
	var_1973_int = 15; // 0x1c87 MovI
	var_1974_int = var_1948_int; // 0x1c88 Mov
	func_1037(var_1973_int, var_1974_int); // 0x1c89 NEW_2
	var_1975_int = 0; var_1976_int = 0; var_1977_int = 0; // 0x1c8b PushV
	var_1975_int = 15; // 0x1c8c MovI
	var_1976_int = var_1947_int; // 0x1c8d Mov
	var_1977_int = var_1948_int; // 0x1c8e Mov
	func_1326(var_1975_int, var_1976_int, var_1977_int); // 0x1c8f NEW_2
	return 0; // 0x1c91 Return
}


func_100(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x64 PushV
	CreateObjectVector(var_42_object); // 0x65 Func
	var_40_object = var_42_object; // 0x67 Mov
	return 2; // 0x68 Return
}


func_10343(var_5362_int, var_5363_float)
{
	var_5364_int = 0; var_5365_int = 0; var_5366_int = 0; var_5367_float = 0; // 0x2868 PushV
	var_5365_int = 529876; // 0x2869 MovI
	var_5366_int = 529875; // 0x286a MovI
	var_5367_float = var_5363_float; // 0x286b Mov
	func_12278(var_5364_int, var_5365_int, var_5366_int, var_5367_float); // 0x286c NEW_2
	var_5362_int = var_5364_int; // 0x286d Mov
	return 0; // 0x286f Return
}


func_106(var_4658_int, var_4659_string)
{
	var_4660_int = 0; var_4661_int = 0; // 0x6a PushV
	GetVariable(var_4659_string, var_4661_int); // 0x6b Func
	var_4658_int = var_4661_int; // 0x6d Mov
	return 2; // 0x6e Return
}


func_2156(var_750_int, var_751_int, var_752_int)
{
	var_753_int = 0; var_754_int = 0; // 0x86c PushV
	var_755_int = 1; // 0x86d PushI
	var_756_int = var_751_int + var_755_int; // 0x86e Add
	var_757_int = 12; // 0x86f PushI
	var_758_bool = var_756_int == var_757_int; // 0x870 Eq
	if(var_758_bool == 0) goto Label_2163; // 0x871 JumpB
	return 2; // 0x872 Return
	
Label_2163:
	var_759_bool = 0; // 0x873 PushV
	var_759_bool = 0; // 0x874 MovB
	var_760_bool = 0; // 0x875 PushV
	var_760_bool = 1; // 0x876 MovB
	var_761_int = 7; // 0x877 PushI
	var_762_bool = var_752_int < var_761_int; // 0x878 LT
	if(var_762_bool == 0) goto Label_2174; // 0x879 JumpB
	var_763_int = 21; // 0x87a PushI
	var_764_bool = var_752_int > var_763_int; // 0x87b GT
	if(var_764_bool == 0) goto Label_2174; // 0x87c JumpB
	var_760_bool = 0; // 0x87d MovB
	
Label_2174:
	if(var_760_bool == 0) goto Label_2179; // 0x87e JumpB
	var_765_int = 0; // 0x87f PushI
	var_766_bool = var_751_int != var_765_int; // 0x880 Neq
	if(var_766_bool == 0) goto Label_2179; // 0x881 JumpB
	var_759_bool = 1; // 0x882 MovB
	
Label_2179:
	if(var_759_bool == 0) goto Label_2195; // 0x883 JumpB
	var_767_int = 1; // 0x884 PushI
	var_768_float = 0; var_769_int = 0; // 0x885 PushV
	var_769_int = var_751_int; // 0x886 Mov
	func_1091(var_768_float, var_769_int); // 0x887 NEW_2
	var_754_int = var_767_int * var_768_float; // 0x889 Mult2
	var_782_int = var_754_int; // 0x88a Push
	if(var_782_int == 0) goto Label_2195; // 0x88b JumpB
	var_783_int = 0; var_784_string = ""; var_785_string = ""; var_786_int = 0; // 0x88c PushV
	var_783_int = var_750_int; // 0x88d Mov
	var_784_string = "pers_grabitel"; // 0x88e MovS
	var_785_string = "grabitel.xml"; // 0x88f MovS
	var_786_int = var_754_int; // 0x890 Mov
	func_453(var_783_int, var_784_string, var_785_string, var_786_int); // 0x891 NEW_2
	
Label_2195:
	var_791_bool = 0; var_792_int = 0; var_793_int = 0; // 0x893 PushV
	var_792_int = var_751_int; // 0x894 Mov
	var_793_int = var_752_int; // 0x895 Mov
	func_1060(var_791_bool, var_792_int, var_793_int); // 0x896 NEW_2
	if(var_791_bool == 0) goto Label_2258; // 0x898 JumpB
	var_811_int = 0; var_812_string = ""; var_813_string = ""; var_814_int = 0; // 0x899 PushV
	var_811_int = var_750_int; // 0x89a Mov
	var_812_string = "pers_unosha"; // 0x89b MovS
	var_813_string = "unosha_attacker.xml"; // 0x89c MovS
	var_814_int = 1; // 0x89d MovI
	func_453(var_811_int, var_812_string, var_813_string, var_814_int); // 0x89e NEW_2
	var_815_int = 0; var_816_string = ""; var_817_string = ""; var_818_int = 0; // 0x8a0 PushV
	var_815_int = var_750_int; // 0x8a1 Mov
	var_816_string = "pers_unosha"; // 0x8a2 MovS
	var_817_string = "unosha2_attacker.xml"; // 0x8a3 MovS
	var_818_int = 1; // 0x8a4 MovI
	func_453(var_815_int, var_816_string, var_817_string, var_818_int); // 0x8a5 NEW_2
	var_819_int = 0; var_820_string = ""; var_821_string = ""; var_822_int = 0; // 0x8a7 PushV
	var_819_int = var_750_int; // 0x8a8 Mov
	var_820_string = "pers_worker"; // 0x8a9 MovS
	var_821_string = "worker_attacker.xml"; // 0x8aa MovS
	var_822_int = 1; // 0x8ab MovI
	func_453(var_819_int, var_820_string, var_821_string, var_822_int); // 0x8ac NEW_2
	var_823_int = 0; var_824_string = ""; var_825_string = ""; var_826_int = 0; // 0x8ae PushV
	var_823_int = var_750_int; // 0x8af Mov
	var_824_string = "pers_worker"; // 0x8b0 MovS
	var_825_string = "worker2_attacker.xml"; // 0x8b1 MovS
	var_826_int = 1; // 0x8b2 MovI
	func_453(var_823_int, var_824_string, var_825_string, var_826_int); // 0x8b3 NEW_2
	var_827_int = 0; var_828_string = ""; var_829_string = ""; var_830_int = 0; // 0x8b5 PushV
	var_827_int = var_750_int; // 0x8b6 Mov
	var_828_string = "pers_boy"; // 0x8b7 MovS
	var_829_string = "boy.xml"; // 0x8b8 MovS
	var_830_int = 1; // 0x8b9 MovI
	func_453(var_827_int, var_828_string, var_829_string, var_830_int); // 0x8ba NEW_2
	var_831_int = 0; var_832_string = ""; var_833_string = ""; var_834_int = 0; // 0x8bc PushV
	var_831_int = var_750_int; // 0x8bd Mov
	var_832_string = "pers_alkash"; // 0x8be MovS
	var_833_string = "alkash.xml"; // 0x8bf MovS
	var_834_int = 1; // 0x8c0 MovI
	func_453(var_831_int, var_832_string, var_833_string, var_834_int); // 0x8c1 NEW_2
	var_835_int = 0; var_836_string = ""; var_837_string = ""; var_838_int = 0; // 0x8c3 PushV
	var_835_int = var_750_int; // 0x8c4 Mov
	var_836_string = "pers_girl"; // 0x8c5 MovS
	var_837_string = "girl.xml"; // 0x8c6 MovS
	var_838_int = 1; // 0x8c7 MovI
	func_453(var_835_int, var_836_string, var_837_string, var_838_int); // 0x8c8 NEW_2
	var_839_int = 0; var_840_string = ""; var_841_string = ""; var_842_int = 0; // 0x8ca PushV
	var_839_int = var_750_int; // 0x8cb Mov
	var_840_string = "pers_girl"; // 0x8cc MovS
	var_841_string = "girl2.xml"; // 0x8cd MovS
	var_842_int = 1; // 0x8ce MovI
	func_453(var_839_int, var_840_string, var_841_string, var_842_int); // 0x8cf NEW_2
	goto Label_2332; // 0x8d1 Jump
	
Label_2332:
	return 2; // 0x91c Return
	
Label_2258:
	var_843_bool = 0; // 0x8d2 PushV
	var_843_bool = 0; // 0x8d3 MovB
	var_844_int = 8; // 0x8d4 PushI
	var_845_bool = var_752_int > var_844_int; // 0x8d5 GT
	if(var_845_bool == 0) goto Label_2267; // 0x8d6 JumpB
	var_846_int = 21; // 0x8d7 PushI
	var_847_bool = var_752_int < var_846_int; // 0x8d8 LT
	if(var_847_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_843_bool = 1; // 0x8da MovB
	
Label_2267:
	if(var_843_bool == 0) goto Label_2311; // 0x8db JumpB
	var_848_int = 0; var_849_string = ""; var_850_string = ""; var_851_int = 0; // 0x8dc PushV
	var_848_int = var_750_int; // 0x8dd Mov
	var_849_string = "pers_boy"; // 0x8de MovS
	var_850_string = "boy.xml"; // 0x8df MovS
	var_851_int = 1; // 0x8e0 MovI
	func_453(var_848_int, var_849_string, var_850_string, var_851_int); // 0x8e1 NEW_2
	var_852_int = 0; var_853_string = ""; var_854_string = ""; var_855_int = 0; // 0x8e3 PushV
	var_852_int = var_750_int; // 0x8e4 Mov
	var_853_string = "pers_alkash"; // 0x8e5 MovS
	var_854_string = "alkash.xml"; // 0x8e6 MovS
	var_855_int = 1; // 0x8e7 MovI
	func_453(var_852_int, var_853_string, var_854_string, var_855_int); // 0x8e8 NEW_2
	var_856_int = 0; var_857_string = ""; var_858_string = ""; var_859_int = 0; // 0x8ea PushV
	var_856_int = var_750_int; // 0x8eb Mov
	var_857_string = "pers_girl"; // 0x8ec MovS
	var_858_string = "girl.xml"; // 0x8ed MovS
	var_859_int = 1; // 0x8ee MovI
	func_453(var_856_int, var_857_string, var_858_string, var_859_int); // 0x8ef NEW_2
	var_860_int = 0; var_861_string = ""; var_862_string = ""; var_863_int = 0; // 0x8f1 PushV
	var_860_int = var_750_int; // 0x8f2 Mov
	var_861_string = "pers_girl"; // 0x8f3 MovS
	var_862_string = "girl2.xml"; // 0x8f4 MovS
	var_863_int = 1; // 0x8f5 MovI
	func_453(var_860_int, var_861_string, var_862_string, var_863_int); // 0x8f6 NEW_2
	var_864_int = 0; var_865_string = ""; var_866_string = ""; var_867_int = 0; // 0x8f8 PushV
	var_864_int = var_750_int; // 0x8f9 Mov
	var_865_string = "pers_worker"; // 0x8fa MovS
	var_866_string = "worker.xml"; // 0x8fb MovS
	var_867_int = 2; // 0x8fc MovI
	func_453(var_864_int, var_865_string, var_866_string, var_867_int); // 0x8fd NEW_2
	var_868_int = 0; var_869_string = ""; var_870_string = ""; var_871_int = 0; // 0x8ff PushV
	var_868_int = var_750_int; // 0x900 Mov
	var_869_string = "pers_worker"; // 0x901 MovS
	var_870_string = "worker2.xml"; // 0x902 MovS
	var_871_int = 2; // 0x903 MovI
	func_453(var_868_int, var_869_string, var_870_string, var_871_int); // 0x904 NEW_2
	goto Label_2332; // 0x906 Jump
	
Label_2311:
	var_872_int = 0; var_873_string = ""; var_874_string = ""; var_875_int = 0; // 0x907 PushV
	var_872_int = var_750_int; // 0x908 Mov
	var_873_string = "pers_alkash"; // 0x909 MovS
	var_874_string = "alkash.xml"; // 0x90a MovS
	var_875_int = 1; // 0x90b MovI
	func_453(var_872_int, var_873_string, var_874_string, var_875_int); // 0x90c NEW_2
	var_876_int = 0; var_877_string = ""; var_878_string = ""; var_879_int = 0; // 0x90e PushV
	var_876_int = var_750_int; // 0x90f Mov
	var_877_string = "pers_worker"; // 0x910 MovS
	var_878_string = "worker.xml"; // 0x911 MovS
	var_879_int = 1; // 0x912 MovI
	func_453(var_876_int, var_877_string, var_878_string, var_879_int); // 0x913 NEW_2
	var_880_int = 0; var_881_string = ""; var_882_string = ""; var_883_int = 0; // 0x915 PushV
	var_880_int = var_750_int; // 0x916 Mov
	var_881_string = "pers_worker"; // 0x917 MovS
	var_882_string = "worker2.xml"; // 0x918 MovS
	var_883_int = 1; // 0x919 MovI
	func_453(var_880_int, var_881_string, var_882_string, var_883_int); // 0x91a NEW_2
}


func_9326(var_1988_int, var_1989_int, var_1990_int)
{
	var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); var_1998_object = Obj(); // 0x246e PushV
	var_1999_object = GlobalVars[8]; // 0x246f PushGE
	get(var_1995_object, var_1988_int); // 0x2470 ObjFunc
	var_2000_object = GlobalVars[9]; // 0x2472 PushGE
	get(var_1996_object, var_1988_int); // 0x2473 ObjFunc
	var_2001_object = GlobalVars[10]; // 0x2475 PushGE
	get(var_1997_object, var_1988_int); // 0x2476 ObjFunc
	var_2002_object = GlobalVars[13]; // 0x2478 PushGE
	get(var_1998_object, var_1988_int); // 0x2479 ObjFunc
	var_2003_int = 0; // 0x247b PushI
	var_2004_bool = var_1988_int == var_2003_int; // 0x247c Eq
	if(var_2004_bool == 0) goto Label_9352; // 0x247d JumpB
	var_2005_int = 0; var_2006_int = 0; var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); var_2010_object = Obj(); // 0x247e PushV
	var_2005_int = var_1989_int; // 0x247f Mov
	var_2006_int = var_1990_int; // 0x2480 Mov
	var_2007_object = var_1995_object; // 0x2481 Mov
	var_2008_object = var_1996_object; // 0x2482 Mov
	var_2009_object = var_1997_object; // 0x2483 Mov
	var_2010_object = var_1998_object; // 0x2484 Mov
	func_4389(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object); // 0x2485 NEW_2
	goto Label_9546; // 0x2487 Jump
	
Label_9546:
	return 8; // 0x254a Return
	
Label_9352:
	var_2273_int = 1; // 0x2488 PushI
	var_2274_bool = var_1988_int == var_2273_int; // 0x2489 Eq
	if(var_2274_bool == 0) goto Label_9365; // 0x248a JumpB
	var_2275_int = 0; var_2276_int = 0; var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); var_2280_object = Obj(); // 0x248b PushV
	var_2275_int = var_1989_int; // 0x248c Mov
	var_2276_int = var_1990_int; // 0x248d Mov
	var_2277_object = var_1995_object; // 0x248e Mov
	var_2278_object = var_1996_object; // 0x248f Mov
	var_2279_object = var_1997_object; // 0x2490 Mov
	var_2280_object = var_1998_object; // 0x2491 Mov
	func_4586(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object); // 0x2492 NEW_2
	goto Label_9546; // 0x2494 Jump
	
Label_9365:
	var_2405_int = 2; // 0x2495 PushI
	var_2406_bool = var_1988_int == var_2405_int; // 0x2496 Eq
	if(var_2406_bool == 0) goto Label_9378; // 0x2497 JumpB
	var_2407_int = 0; var_2408_int = 0; var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); var_2412_object = Obj(); // 0x2498 PushV
	var_2407_int = var_1989_int; // 0x2499 Mov
	var_2408_int = var_1990_int; // 0x249a Mov
	var_2409_object = var_1995_object; // 0x249b Mov
	var_2410_object = var_1996_object; // 0x249c Mov
	var_2411_object = var_1997_object; // 0x249d Mov
	var_2412_object = var_1998_object; // 0x249e Mov
	func_4792(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object); // 0x249f NEW_2
	goto Label_9546; // 0x24a1 Jump
	
Label_9378:
	var_2551_int = 3; // 0x24a2 PushI
	var_2552_bool = var_1988_int == var_2551_int; // 0x24a3 Eq
	if(var_2552_bool == 0) goto Label_9391; // 0x24a4 JumpB
	var_2553_int = 0; var_2554_int = 0; var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); var_2558_object = Obj(); // 0x24a5 PushV
	var_2553_int = var_1989_int; // 0x24a6 Mov
	var_2554_int = var_1990_int; // 0x24a7 Mov
	var_2555_object = var_1995_object; // 0x24a8 Mov
	var_2556_object = var_1996_object; // 0x24a9 Mov
	var_2557_object = var_1997_object; // 0x24aa Mov
	var_2558_object = var_1998_object; // 0x24ab Mov
	func_5022(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object); // 0x24ac NEW_2
	goto Label_9546; // 0x24ae Jump
	
Label_9391:
	var_2584_int = 4; // 0x24af PushI
	var_2585_bool = var_1988_int == var_2584_int; // 0x24b0 Eq
	if(var_2585_bool == 0) goto Label_9404; // 0x24b1 JumpB
	var_2586_int = 0; var_2587_int = 0; var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); var_2591_object = Obj(); // 0x24b2 PushV
	var_2586_int = var_1989_int; // 0x24b3 Mov
	var_2587_int = var_1990_int; // 0x24b4 Mov
	var_2588_object = var_1995_object; // 0x24b5 Mov
	var_2589_object = var_1996_object; // 0x24b6 Mov
	var_2590_object = var_1997_object; // 0x24b7 Mov
	var_2591_object = var_1998_object; // 0x24b8 Mov
	func_5240(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object); // 0x24b9 NEW_2
	goto Label_9546; // 0x24bb Jump
	
Label_9404:
	var_2617_int = 5; // 0x24bc PushI
	var_2618_bool = var_1988_int == var_2617_int; // 0x24bd Eq
	if(var_2618_bool == 0) goto Label_9417; // 0x24be JumpB
	var_2619_int = 0; var_2620_int = 0; var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); var_2624_object = Obj(); // 0x24bf PushV
	var_2619_int = var_1989_int; // 0x24c0 Mov
	var_2620_int = var_1990_int; // 0x24c1 Mov
	var_2621_object = var_1995_object; // 0x24c2 Mov
	var_2622_object = var_1996_object; // 0x24c3 Mov
	var_2623_object = var_1997_object; // 0x24c4 Mov
	var_2624_object = var_1998_object; // 0x24c5 Mov
	func_5485(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object); // 0x24c6 NEW_2
	goto Label_9546; // 0x24c8 Jump
	
Label_9417:
	var_2650_int = 6; // 0x24c9 PushI
	var_2651_bool = var_1988_int == var_2650_int; // 0x24ca Eq
	if(var_2651_bool == 0) goto Label_9430; // 0x24cb JumpB
	var_2652_int = 0; var_2653_int = 0; var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); var_2657_object = Obj(); // 0x24cc PushV
	var_2652_int = var_1989_int; // 0x24cd Mov
	var_2653_int = var_1990_int; // 0x24ce Mov
	var_2654_object = var_1995_object; // 0x24cf Mov
	var_2655_object = var_1996_object; // 0x24d0 Mov
	var_2656_object = var_1997_object; // 0x24d1 Mov
	var_2657_object = var_1998_object; // 0x24d2 Mov
	func_5598(); // 0x24d3 NEW_2
	goto Label_9546; // 0x24d5 Jump
	
Label_9430:
	var_2660_int = 7; // 0x24d6 PushI
	var_2661_bool = var_1988_int == var_2660_int; // 0x24d7 Eq
	if(var_2661_bool == 0) goto Label_9443; // 0x24d8 JumpB
	var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); var_2667_object = Obj(); // 0x24d9 PushV
	var_2662_int = var_1989_int; // 0x24da Mov
	var_2663_int = var_1990_int; // 0x24db Mov
	var_2664_object = var_1995_object; // 0x24dc Mov
	var_2665_object = var_1996_object; // 0x24dd Mov
	var_2666_object = var_1997_object; // 0x24de Mov
	var_2667_object = var_1998_object; // 0x24df Mov
	func_5708(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object); // 0x24e0 NEW_2
	goto Label_9546; // 0x24e2 Jump
	
Label_9443:
	var_2799_int = 8; // 0x24e3 PushI
	var_2800_bool = var_1988_int == var_2799_int; // 0x24e4 Eq
	if(var_2800_bool == 0) goto Label_9456; // 0x24e5 JumpB
	var_2801_int = 0; var_2802_int = 0; var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); var_2806_object = Obj(); // 0x24e6 PushV
	var_2801_int = var_1989_int; // 0x24e7 Mov
	var_2802_int = var_1990_int; // 0x24e8 Mov
	var_2803_object = var_1995_object; // 0x24e9 Mov
	var_2804_object = var_1996_object; // 0x24ea Mov
	var_2805_object = var_1997_object; // 0x24eb Mov
	var_2806_object = var_1998_object; // 0x24ec Mov
	func_5908(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object); // 0x24ed NEW_2
	goto Label_9546; // 0x24ef Jump
	
Label_9456:
	var_2832_int = 9; // 0x24f0 PushI
	var_2833_bool = var_1988_int == var_2832_int; // 0x24f1 Eq
	if(var_2833_bool == 0) goto Label_9469; // 0x24f2 JumpB
	var_2834_int = 0; var_2835_int = 0; var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); var_2839_object = Obj(); // 0x24f3 PushV
	var_2834_int = var_1989_int; // 0x24f4 Mov
	var_2835_int = var_1990_int; // 0x24f5 Mov
	var_2836_object = var_1995_object; // 0x24f6 Mov
	var_2837_object = var_1996_object; // 0x24f7 Mov
	var_2838_object = var_1997_object; // 0x24f8 Mov
	var_2839_object = var_1998_object; // 0x24f9 Mov
	func_6111(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object); // 0x24fa NEW_2
	goto Label_9546; // 0x24fc Jump
	
Label_9469:
	var_2865_int = 10; // 0x24fd PushI
	var_2866_bool = var_1988_int == var_2865_int; // 0x24fe Eq
	if(var_2866_bool == 0) goto Label_9482; // 0x24ff JumpB
	var_2867_int = 0; var_2868_int = 0; var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); var_2872_object = Obj(); // 0x2500 PushV
	var_2867_int = var_1989_int; // 0x2501 Mov
	var_2868_int = var_1990_int; // 0x2502 Mov
	var_2869_object = var_1995_object; // 0x2503 Mov
	var_2870_object = var_1996_object; // 0x2504 Mov
	var_2871_object = var_1997_object; // 0x2505 Mov
	var_2872_object = var_1998_object; // 0x2506 Mov
	func_6320(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object); // 0x2507 NEW_2
	goto Label_9546; // 0x2509 Jump
	
Label_9482:
	var_2898_int = 11; // 0x250a PushI
	var_2899_bool = var_1988_int == var_2898_int; // 0x250b Eq
	if(var_2899_bool == 0) goto Label_9495; // 0x250c JumpB
	var_2900_int = 0; var_2901_int = 0; var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); var_2905_object = Obj(); // 0x250d PushV
	var_2900_int = var_1989_int; // 0x250e Mov
	var_2901_int = var_1990_int; // 0x250f Mov
	var_2902_object = var_1995_object; // 0x2510 Mov
	var_2903_object = var_1996_object; // 0x2511 Mov
	var_2904_object = var_1997_object; // 0x2512 Mov
	var_2905_object = var_1998_object; // 0x2513 Mov
	func_6532(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object); // 0x2514 NEW_2
	goto Label_9546; // 0x2516 Jump
	
Label_9495:
	var_2931_int = 12; // 0x2517 PushI
	var_2932_bool = var_1988_int == var_2931_int; // 0x2518 Eq
	if(var_2932_bool == 0) goto Label_9508; // 0x2519 JumpB
	var_2933_int = 0; var_2934_int = 0; var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); var_2938_object = Obj(); // 0x251a PushV
	var_2933_int = var_1989_int; // 0x251b Mov
	var_2934_int = var_1990_int; // 0x251c Mov
	var_2935_object = var_1995_object; // 0x251d Mov
	var_2936_object = var_1996_object; // 0x251e Mov
	var_2937_object = var_1997_object; // 0x251f Mov
	var_2938_object = var_1998_object; // 0x2520 Mov
	func_6729(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object); // 0x2521 NEW_2
	goto Label_9546; // 0x2523 Jump
	
Label_9508:
	var_2964_int = 13; // 0x2524 PushI
	var_2965_bool = var_1988_int == var_2964_int; // 0x2525 Eq
	if(var_2965_bool == 0) goto Label_9521; // 0x2526 JumpB
	var_2966_int = 0; var_2967_int = 0; var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); var_2971_object = Obj(); // 0x2527 PushV
	var_2966_int = var_1989_int; // 0x2528 Mov
	var_2967_int = var_1990_int; // 0x2529 Mov
	var_2968_object = var_1995_object; // 0x252a Mov
	var_2969_object = var_1996_object; // 0x252b Mov
	var_2970_object = var_1997_object; // 0x252c Mov
	var_2971_object = var_1998_object; // 0x252d Mov
	func_6932(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object); // 0x252e NEW_2
	goto Label_9546; // 0x2530 Jump
	
Label_9521:
	var_2997_int = 14; // 0x2531 PushI
	var_2998_bool = var_1988_int == var_2997_int; // 0x2532 Eq
	if(var_2998_bool == 0) goto Label_9534; // 0x2533 JumpB
	var_2999_int = 0; var_3000_int = 0; var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); var_3004_object = Obj(); // 0x2534 PushV
	var_2999_int = var_1989_int; // 0x2535 Mov
	var_3000_int = var_1990_int; // 0x2536 Mov
	var_3001_object = var_1995_object; // 0x2537 Mov
	var_3002_object = var_1996_object; // 0x2538 Mov
	var_3003_object = var_1997_object; // 0x2539 Mov
	var_3004_object = var_1998_object; // 0x253a Mov
	func_7132(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object); // 0x253b NEW_2
	goto Label_9546; // 0x253d Jump
	
Label_9534:
	var_3136_int = 15; // 0x253e PushI
	var_3137_bool = var_1988_int == var_3136_int; // 0x253f Eq
	if(var_3137_bool == 0) goto Label_9546; // 0x2540 JumpB
	var_3138_int = 0; var_3139_int = 0; var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); var_3143_object = Obj(); // 0x2541 PushV
	var_3138_int = var_1989_int; // 0x2542 Mov
	var_3139_int = var_1990_int; // 0x2543 Mov
	var_3140_object = var_1995_object; // 0x2544 Mov
	var_3141_object = var_1996_object; // 0x2545 Mov
	var_3142_object = var_1997_object; // 0x2546 Mov
	var_3143_object = var_1998_object; // 0x2547 Mov
	func_7314(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object); // 0x2548 NEW_2
}


func_111(var_4956_object, var_4957_string)
{
	var_4958_object = Obj(); var_4959_object = Obj(); var_4960_object = Obj(); var_4961_object = Obj(); // 0x6f PushV
	GetMainOutdoorScene(var_4960_object); // 0x70 Func
	var_4962_string = ".bin"; // 0x72 PushS
	var_4963_int = var_4957_string + var_4962_string; // 0x73 Add
	AddBlankActor(var_4961_object, var_4960_object, var_4957_string, var_4963_int); // 0x74 Func
	var_4956_object = var_4961_object; // 0x76 Mov
	return 4; // 0x77 Return
}


func_10352(var_5323_int, var_5324_float)
{
	var_5325_int = 0; var_5326_int = 0; var_5327_int = 0; var_5328_float = 0; // 0x2871 PushV
	var_5326_int = 521369; // 0x2872 MovI
	var_5327_int = 521368; // 0x2873 MovI
	var_5328_float = var_5324_float; // 0x2874 Mov
	func_12278(var_5325_int, var_5326_int, var_5327_int, var_5328_float); // 0x2875 NEW_2
	var_5323_int = var_5325_int; // 0x2876 Mov
	return 0; // 0x2878 Return
}


func_12405(var_4649_int, var_4650_float)
{
	var_4651_int = 0; var_4652_int = 0; // 0x3075 PushV
	var_4653_int = 45091; // 0x3076 PushI
	var_4654_bool = var_4649_int == var_4653_int; // 0x3077 Eq
	if(var_4654_bool == 0) goto Label_12421; // 0x3078 JumpB
	var_4655_bool = 0; var_4656_object = Obj(); // 0x3079 PushV
	var_4657_object = GlobalVars[16]; // 0x307a PushGE
	var_4656_object = var_4657_object; // 0x307b Mov
	func_11820(var_4656_object); // 0x307d NEW_2
	var_4664_bool = var_4655_bool == 0; // 0x307f Not
	if(var_4664_bool == 0) goto Label_12421; // 0x3080 JumpB
	var_4665_int = 0; var_4666_float = 0; // 0x3081 PushV
	var_4666_float = var_4650_float; // 0x3082 Mov
	func_9974(var_4665_int, var_4666_float); // 0x3083 NEW_2
	
Label_12421:
	var_4674_int = 45116; // 0x3085 PushI
	var_4675_bool = var_4649_int == var_4674_int; // 0x3086 Eq
	if(var_4675_bool == 0) goto Label_12436; // 0x3087 JumpB
	var_4676_bool = 0; var_4677_object = Obj(); // 0x3088 PushV
	var_4678_object = GlobalVars[16]; // 0x3089 PushGE
	var_4677_object = var_4678_object; // 0x308a Mov
	func_12048(var_4677_object); // 0x308c NEW_2
	var_4683_bool = var_4676_bool == 0; // 0x308e Not
	if(var_4683_bool == 0) goto Label_12436; // 0x308f JumpB
	var_4684_int = 0; var_4685_float = 0; // 0x3090 PushV
	var_4685_float = var_4650_float; // 0x3091 Mov
	func_10100(var_4684_int, var_4685_float); // 0x3092 NEW_2
	
Label_12436:
	var_4690_int = 45113; // 0x3094 PushI
	var_4691_bool = var_4649_int == var_4690_int; // 0x3095 Eq
	if(var_4691_bool == 0) goto Label_12443; // 0x3096 JumpB
	var_4692_int = 0; var_4693_float = 0; // 0x3097 PushV
	var_4693_float = var_4650_float; // 0x3098 Mov
	func_10082(var_4692_int, var_4693_float); // 0x3099 NEW_2
	
Label_12443:
	var_4698_int = 45090; // 0x309b PushI
	var_4699_bool = var_4649_int == var_4698_int; // 0x309c Eq
	if(var_4699_bool == 0) goto Label_12458; // 0x309d JumpB
	var_4700_bool = 0; var_4701_object = Obj(); // 0x309e PushV
	var_4702_object = GlobalVars[16]; // 0x309f PushGE
	var_4701_object = var_4702_object; // 0x30a0 Mov
	func_11808(var_4701_object); // 0x30a2 NEW_2
	var_4707_bool = var_4700_bool == 0; // 0x30a4 Not
	if(var_4707_bool == 0) goto Label_12458; // 0x30a5 JumpB
	var_4708_int = 0; var_4709_float = 0; // 0x30a6 PushV
	var_4709_float = var_4650_float; // 0x30a7 Mov
	func_9965(var_4708_int, var_4709_float); // 0x30a8 NEW_2
	
Label_12458:
	var_4714_int = 45117; // 0x30aa PushI
	var_4715_bool = var_4649_int == var_4714_int; // 0x30ab Eq
	if(var_4715_bool == 0) goto Label_12465; // 0x30ac JumpB
	var_4716_int = 0; var_4717_float = 0; // 0x30ad PushV
	var_4717_float = var_4650_float; // 0x30ae Mov
	func_10064(var_4716_int, var_4717_float); // 0x30af NEW_2
	
Label_12465:
	var_4722_int = 45118; // 0x30b1 PushI
	var_4723_bool = var_4649_int == var_4722_int; // 0x30b2 Eq
	if(var_4723_bool == 0) goto Label_12472; // 0x30b3 JumpB
	var_4724_int = 0; var_4725_float = 0; // 0x30b4 PushV
	var_4725_float = var_4650_float; // 0x30b5 Mov
	func_10127(var_4724_int, var_4725_float); // 0x30b6 NEW_2
	
Label_12472:
	var_4730_int = 45119; // 0x30b8 PushI
	var_4731_bool = var_4649_int == var_4730_int; // 0x30b9 Eq
	if(var_4731_bool == 0) goto Label_12479; // 0x30ba JumpB
	var_4732_int = 0; var_4733_float = 0; // 0x30bb PushV
	var_4733_float = var_4650_float; // 0x30bc Mov
	func_10181(var_4732_int, var_4733_float); // 0x30bd NEW_2
	
Label_12479:
	var_4738_int = 45120; // 0x30bf PushI
	var_4739_bool = var_4649_int == var_4738_int; // 0x30c0 Eq
	if(var_4739_bool == 0) goto Label_12486; // 0x30c1 JumpB
	var_4740_int = 0; var_4741_float = 0; // 0x30c2 PushV
	var_4741_float = var_4650_float; // 0x30c3 Mov
	func_10235(var_4740_int, var_4741_float); // 0x30c4 NEW_2
	
Label_12486:
	var_4746_int = 45121; // 0x30c6 PushI
	var_4747_bool = var_4649_int == var_4746_int; // 0x30c7 Eq
	if(var_4747_bool == 0) goto Label_12493; // 0x30c8 JumpB
	var_4748_int = 0; var_4749_float = 0; // 0x30c9 PushV
	var_4749_float = var_4650_float; // 0x30ca Mov
	func_10289(var_4748_int, var_4749_float); // 0x30cb NEW_2
	
Label_12493:
	var_4754_int = 45122; // 0x30cd PushI
	var_4755_bool = var_4649_int == var_4754_int; // 0x30ce Eq
	if(var_4755_bool == 0) goto Label_12500; // 0x30cf JumpB
	var_4756_int = 0; var_4757_float = 0; // 0x30d0 PushV
	var_4757_float = var_4650_float; // 0x30d1 Mov
	func_10325(var_4756_int, var_4757_float); // 0x30d2 NEW_2
	
Label_12500:
	var_4762_int = 45089; // 0x30d4 PushI
	var_4763_bool = var_4649_int == var_4762_int; // 0x30d5 Eq
	if(var_4763_bool == 0) goto Label_12514; // 0x30d6 JumpB
	var_4764_bool = 0; var_4765_object = Obj(); // 0x30d7 PushV
	var_4766_object = GlobalVars[16]; // 0x30d8 PushGE
	var_4765_object = var_4766_object; // 0x30d9 Mov
	func_11796(var_4765_object); // 0x30db NEW_2
	if(var_4764_bool == 0) goto Label_12514; // 0x30dd JumpB
	var_4771_int = 0; var_4772_float = 0; // 0x30de PushV
	var_4772_float = var_4650_float; // 0x30df Mov
	func_9920(var_4771_int, var_4772_float); // 0x30e0 NEW_2
	
Label_12514:
	var_4777_int = 45080; // 0x30e2 PushI
	var_4778_bool = var_4649_int == var_4777_int; // 0x30e3 Eq
	if(var_4778_bool == 0) goto Label_12539; // 0x30e4 JumpB
	var_4779_object = Obj(); var_4780_object = Obj(); // 0x30e5 PushV
	var_4781_object = GlobalVars[16]; // 0x30e6 PushGE
	var_4779_object = var_4781_object; // 0x30e7 Mov
	var_4782_object = GlobalVars[16]; // 0x30e9 PushGE
	var_4780_object = var_4782_object; // 0x30ea Mov
	func_11105(); // 0x30ec NEW_2
	var_4826_bool = 0; var_4827_string = ""; var_4828_string = ""; // 0x30ee PushV
	var_4827_string = "quest_b7_01"; // 0x30ef MovS
	var_4828_string = "cleanup"; // 0x30f0 MovS
	func_189(var_4826_bool, var_4827_string, var_4828_string); // 0x30f1 NEW_2
	var_4829_object = Obj(); var_4830_string = ""; // 0x30f3 PushV
	var_4830_string = "quest_b8_01"; // 0x30f4 MovS
	func_111(var_4829_object, var_4830_string); // 0x30f5 NEW_2
	var_4837_object = Obj(); var_4838_string = ""; // 0x30f7 PushV
	var_4838_string = "quest_b8_03"; // 0x30f8 MovS
	func_111(var_4837_object, var_4838_string); // 0x30f9 NEW_2
	
Label_12539:
	var_4839_int = 45081; // 0x30fb PushI
	var_4840_bool = var_4649_int == var_4839_int; // 0x30fc Eq
	if(var_4840_bool == 0) goto Label_12551; // 0x30fd JumpB
	var_4841_object = Obj(); var_4842_object = Obj(); // 0x30fe PushV
	var_4843_object = GlobalVars[16]; // 0x30ff PushGE
	var_4841_object = var_4843_object; // 0x3100 Mov
	var_4844_object = GlobalVars[16]; // 0x3102 PushGE
	var_4842_object = var_4844_object; // 0x3103 Mov
	func_10539(); // 0x3105 NEW_2
	
Label_12551:
	var_4855_int = 45082; // 0x3107 PushI
	var_4856_bool = var_4649_int == var_4855_int; // 0x3108 Eq
	if(var_4856_bool == 0) goto Label_12576; // 0x3109 JumpB
	var_4857_object = Obj(); var_4858_object = Obj(); // 0x310a PushV
	var_4859_object = GlobalVars[16]; // 0x310b PushGE
	var_4857_object = var_4859_object; // 0x310c Mov
	var_4860_object = GlobalVars[16]; // 0x310e PushGE
	var_4858_object = var_4860_object; // 0x310f Mov
	func_10553(); // 0x3111 NEW_2
	var_4863_int = 0; var_4864_float = 0; // 0x3113 PushV
	var_4864_float = var_4650_float; // 0x3114 Mov
	func_10262(var_4863_int, var_4864_float); // 0x3115 NEW_2
	var_4869_object = Obj(); var_4870_string = ""; // 0x3117 PushV
	var_4870_string = "quest_b6_02"; // 0x3118 MovS
	func_111(var_4869_object, var_4870_string); // 0x3119 NEW_2
	var_4871_bool = 0; var_4872_string = ""; var_4873_string = ""; // 0x311b PushV
	var_4872_string = "quest_b6_02"; // 0x311c MovS
	var_4873_string = "place_klara"; // 0x311d MovS
	func_189(var_4871_bool, var_4872_string, var_4873_string); // 0x311e NEW_2
	
Label_12576:
	var_4874_int = 45092; // 0x3120 PushI
	var_4875_bool = var_4649_int == var_4874_int; // 0x3121 Eq
	if(var_4875_bool == 0) goto Label_12591; // 0x3122 JumpB
	var_4876_bool = 0; var_4877_object = Obj(); // 0x3123 PushV
	var_4878_object = GlobalVars[16]; // 0x3124 PushGE
	var_4877_object = var_4878_object; // 0x3125 Mov
	func_11832(var_4877_object); // 0x3127 NEW_2
	var_4883_bool = var_4876_bool == 0; // 0x3129 Not
	if(var_4883_bool == 0) goto Label_12591; // 0x312a JumpB
	var_4884_int = 0; var_4885_float = 0; // 0x312b PushV
	var_4885_float = var_4650_float; // 0x312c Mov
	func_9983(var_4884_int, var_4885_float); // 0x312d NEW_2
	
Label_12591:
	var_4890_int = 45093; // 0x312f PushI
	var_4891_bool = var_4649_int == var_4890_int; // 0x3130 Eq
	if(var_4891_bool == 0) goto Label_12598; // 0x3131 JumpB
	var_4892_int = 0; var_4893_float = 0; // 0x3132 PushV
	var_4893_float = var_4650_float; // 0x3133 Mov
	func_9956(var_4892_int, var_4893_float); // 0x3134 NEW_2
	
Label_12598:
	var_4898_int = 45083; // 0x3136 PushI
	var_4899_bool = var_4649_int == var_4898_int; // 0x3137 Eq
	if(var_4899_bool == 0) goto Label_12628; // 0x3138 JumpB
	var_4900_object = Obj(); var_4901_object = Obj(); // 0x3139 PushV
	var_4902_object = GlobalVars[16]; // 0x313a PushGE
	var_4900_object = var_4902_object; // 0x313b Mov
	var_4903_object = GlobalVars[16]; // 0x313d PushGE
	var_4901_object = var_4903_object; // 0x313e Mov
	func_11451(); // 0x3140 NEW_2
	var_4933_object = Obj(); var_4934_object = Obj(); // 0x3142 PushV
	var_4935_object = GlobalVars[16]; // 0x3143 PushGE
	var_4933_object = var_4935_object; // 0x3144 Mov
	var_4936_object = GlobalVars[16]; // 0x3146 PushGE
	var_4934_object = var_4936_object; // 0x3147 Mov
	func_11181(); // 0x3149 NEW_2
	var_4958_bool = 0; var_4959_string = ""; var_4960_string = ""; // 0x314b PushV
	var_4959_string = "quest_b8_01"; // 0x314c MovS
	var_4960_string = "cleanup"; // 0x314d MovS
	func_189(var_4958_bool, var_4959_string, var_4960_string); // 0x314e NEW_2
	var_4961_object = Obj(); var_4962_string = ""; // 0x3150 PushV
	var_4962_string = "quest_b9_01"; // 0x3151 MovS
	func_122(var_4961_object, var_4962_string); // 0x3152 NEW_2
	
Label_12628:
	var_4969_int = 45111; // 0x3154 PushI
	var_4970_bool = var_4649_int == var_4969_int; // 0x3155 Eq
	if(var_4970_bool == 0) goto Label_12635; // 0x3156 JumpB
	var_4971_int = 0; var_4972_float = 0; // 0x3157 PushV
	var_4972_float = var_4650_float; // 0x3158 Mov
	func_10019(var_4971_int, var_4972_float); // 0x3159 NEW_2
	
Label_12635:
	var_4977_int = 45079; // 0x315b PushI
	var_4978_bool = var_4649_int == var_4977_int; // 0x315c Eq
	if(var_4978_bool == 0) goto Label_12647; // 0x315d JumpB
	var_4979_object = Obj(); var_4980_object = Obj(); // 0x315e PushV
	var_4981_object = GlobalVars[16]; // 0x315f PushGE
	var_4979_object = var_4981_object; // 0x3160 Mov
	var_4982_object = GlobalVars[16]; // 0x3162 PushGE
	var_4980_object = var_4982_object; // 0x3163 Mov
	func_11706(); // 0x3165 NEW_2
	
Label_12647:
	var_4985_int = 45086; // 0x3167 PushI
	var_4986_bool = var_4649_int == var_4985_int; // 0x3168 Eq
	if(var_4986_bool == 0) goto Label_12668; // 0x3169 JumpB
	var_4987_object = Obj(); var_4988_object = Obj(); // 0x316a PushV
	var_4989_object = GlobalVars[16]; // 0x316b PushGE
	var_4987_object = var_4989_object; // 0x316c Mov
	var_4990_object = GlobalVars[16]; // 0x316e PushGE
	var_4988_object = var_4990_object; // 0x316f Mov
	func_11315(); // 0x3171 NEW_2
	var_5024_bool = 0; var_5025_string = ""; var_5026_string = ""; // 0x3173 PushV
	var_5025_string = "quest_b10_01"; // 0x3174 MovS
	var_5026_string = "cleanup"; // 0x3175 MovS
	func_189(var_5024_bool, var_5025_string, var_5026_string); // 0x3176 NEW_2
	var_5027_object = Obj(); var_5028_string = ""; // 0x3178 PushV
	var_5028_string = "quest_b11_01"; // 0x3179 MovS
	func_122(var_5027_object, var_5028_string); // 0x317a NEW_2
	
Label_12668:
	var_5029_int = 45087; // 0x317c PushI
	var_5030_bool = var_4649_int == var_5029_int; // 0x317d Eq
	if(var_5030_bool == 0) goto Label_12698; // 0x317e JumpB
	var_5031_object = Obj(); var_5032_object = Obj(); // 0x317f PushV
	var_5033_object = GlobalVars[16]; // 0x3180 PushGE
	var_5031_object = var_5033_object; // 0x3181 Mov
	var_5034_object = GlobalVars[16]; // 0x3183 PushGE
	var_5032_object = var_5034_object; // 0x3184 Mov
	func_11412(); // 0x3186 NEW_2
	var_5050_object = Obj(); var_5051_object = Obj(); // 0x3188 PushV
	var_5052_object = GlobalVars[16]; // 0x3189 PushGE
	var_5050_object = var_5052_object; // 0x318a Mov
	var_5053_object = GlobalVars[16]; // 0x318c PushGE
	var_5051_object = var_5053_object; // 0x318d Mov
	func_11475(); // 0x318f NEW_2
	var_5074_bool = 0; var_5075_string = ""; var_5076_string = ""; // 0x3191 PushV
	var_5075_string = "quest_b11_01"; // 0x3192 MovS
	var_5076_string = "cleanup"; // 0x3193 MovS
	func_189(var_5074_bool, var_5075_string, var_5076_string); // 0x3194 NEW_2
	var_5077_object = Obj(); var_5078_string = ""; // 0x3196 PushV
	var_5078_string = "quest_b12_01"; // 0x3197 MovS
	func_111(var_5077_object, var_5078_string); // 0x3198 NEW_2
	
Label_12698:
	var_5079_int = 45112; // 0x319a PushI
	var_5080_bool = var_4649_int == var_5079_int; // 0x319b Eq
	if(var_5080_bool == 0) goto Label_12705; // 0x319c JumpB
	var_5081_int = 0; var_5082_float = 0; // 0x319d PushV
	var_5082_float = var_4650_float; // 0x319e Mov
	func_10001(var_5081_int, var_5082_float); // 0x319f NEW_2
	
Label_12705:
	var_5087_int = 45115; // 0x31a1 PushI
	var_5088_bool = var_4649_int == var_5087_int; // 0x31a2 Eq
	if(var_5088_bool == 0) goto Label_12712; // 0x31a3 JumpB
	var_5089_int = 0; var_5090_float = 0; // 0x31a4 PushV
	var_5090_float = var_4650_float; // 0x31a5 Mov
	func_10154(var_5089_int, var_5090_float); // 0x31a6 NEW_2
	
Label_12712:
	var_5095_int = 45114; // 0x31a8 PushI
	var_5096_bool = var_4649_int == var_5095_int; // 0x31a9 Eq
	if(var_5096_bool == 0) goto Label_12726; // 0x31aa JumpB
	var_5097_bool = 0; var_5098_object = Obj(); // 0x31ab PushV
	var_5099_object = GlobalVars[16]; // 0x31ac PushGE
	var_5098_object = var_5099_object; // 0x31ad Mov
	func_12142(var_5098_object); // 0x31af NEW_2
	if(var_5097_bool == 0) goto Label_12726; // 0x31b1 JumpB
	var_5104_int = 0; var_5105_float = 0; // 0x31b2 PushV
	var_5105_float = var_4650_float; // 0x31b3 Mov
	func_10037(var_5104_int, var_5105_float); // 0x31b4 NEW_2
	
Label_12726:
	var_5110_int = 45088; // 0x31b6 PushI
	var_5111_bool = var_4649_int == var_5110_int; // 0x31b7 Eq
	if(var_5111_bool == 0) goto Label_12741; // 0x31b8 JumpB
	var_5112_bool = 0; var_5113_object = Obj(); // 0x31b9 PushV
	var_5114_object = GlobalVars[16]; // 0x31ba PushGE
	var_5113_object = var_5114_object; // 0x31bb Mov
	func_11784(var_5113_object); // 0x31bd NEW_2
	var_5119_bool = var_5112_bool == 0; // 0x31bf Not
	if(var_5119_bool == 0) goto Label_12741; // 0x31c0 JumpB
	var_5120_int = 0; var_5121_float = 0; // 0x31c1 PushV
	var_5121_float = var_4650_float; // 0x31c2 Mov
	func_9866(var_5120_int, var_5121_float); // 0x31c3 NEW_2
	
Label_12741:
	var_5126_int = 45084; // 0x31c5 PushI
	var_5127_bool = var_4649_int == var_5126_int; // 0x31c6 Eq
	if(var_5127_bool == 0) goto Label_12769; // 0x31c7 JumpB
	var_5128_string = "b8q03MladVladIsVictim"; // 0x31c8 PushS
	GetVariable(var_5128_string, var_4652_int); // 0x31c9 Func
	var_5129_int = 0; // 0x31cb PushI
	var_5130_bool = var_4652_int != var_5129_int; // 0x31cc Neq
	if(var_5130_bool == 0) goto Label_12760; // 0x31cd JumpB
	var_5131_bool = 0; var_5132_string = ""; var_5133_string = ""; var_5134_string = ""; // 0x31ce PushV
	var_5132_string = "volonteers_danko"; // 0x31cf MovS
	var_5133_string = "kill"; // 0x31d0 MovS
	var_5134_string = "mladvlad"; // 0x31d1 MovS
	func_201(var_5131_bool, var_5132_string, var_5133_string, var_5134_string); // 0x31d2 NEW_2
	var_5135_string = "Mlad Vlad is dead"; // 0x31d4 PushS
	Trace(var_5135_string); // 0x31d5 Func
	goto Label_12769; // 0x31d7 Jump
	
Label_12769:
	var_5136_int = 45085; // 0x31e1 PushI
	var_5137_bool = var_4649_int == var_5136_int; // 0x31e2 Eq
	if(var_5137_bool == 0) goto Label_12790; // 0x31e3 JumpB
	var_5138_object = Obj(); var_5139_object = Obj(); // 0x31e4 PushV
	var_5140_object = GlobalVars[16]; // 0x31e5 PushGE
	var_5138_object = var_5140_object; // 0x31e6 Mov
	var_5141_object = GlobalVars[16]; // 0x31e8 PushGE
	var_5139_object = var_5141_object; // 0x31e9 Mov
	func_11236(); // 0x31eb NEW_2
	var_5169_bool = 0; var_5170_string = ""; var_5171_string = ""; // 0x31ed PushV
	var_5170_string = "quest_b9_01"; // 0x31ee MovS
	var_5171_string = "cleanup"; // 0x31ef MovS
	func_189(var_5169_bool, var_5170_string, var_5171_string); // 0x31f0 NEW_2
	var_5172_object = Obj(); var_5173_string = ""; // 0x31f2 PushV
	var_5173_string = "quest_b10_01"; // 0x31f3 MovS
	func_111(var_5172_object, var_5173_string); // 0x31f4 NEW_2
	
Label_12790:
	var_5174_int = 45127; // 0x31f6 PushI
	var_5175_bool = var_4649_int == var_5174_int; // 0x31f7 Eq
	if(var_5175_bool == 0) goto Label_12797; // 0x31f8 JumpB
	var_5176_int = 0; var_5177_float = 0; // 0x31f9 PushV
	var_5177_float = var_4650_float; // 0x31fa Mov
	func_10226(var_5176_int, var_5177_float); // 0x31fb NEW_2
	
Label_12797:
	var_5182_int = 45133; // 0x31fd PushI
	var_5183_bool = var_4649_int == var_5182_int; // 0x31fe Eq
	if(var_5183_bool == 0) goto Label_12811; // 0x31ff JumpB
	var_5184_bool = 0; var_5185_object = Obj(); // 0x3200 PushV
	var_5186_object = GlobalVars[16]; // 0x3201 PushGE
	var_5185_object = var_5186_object; // 0x3202 Mov
	func_11760(var_5185_object); // 0x3204 NEW_2
	if(var_5184_bool == 0) goto Label_12811; // 0x3206 JumpB
	var_5191_int = 0; var_5192_float = 0; // 0x3207 PushV
	var_5192_float = var_4650_float; // 0x3208 Mov
	func_10307(var_5191_int, var_5192_float); // 0x3209 NEW_2
	
Label_12811:
	var_5197_int = 45136; // 0x320b PushI
	var_5198_bool = var_4649_int == var_5197_int; // 0x320c Eq
	if(var_5198_bool == 0) goto Label_12818; // 0x320d JumpB
	var_5199_int = 0; var_5200_float = 0; // 0x320e PushV
	var_5200_float = var_4650_float; // 0x320f Mov
	func_10388(var_5199_int, var_5200_float); // 0x3210 NEW_2
	
Label_12818:
	var_5205_int = 45123; // 0x3212 PushI
	var_5206_bool = var_4649_int == var_5205_int; // 0x3213 Eq
	if(var_5206_bool == 0) goto Label_12832; // 0x3214 JumpB
	var_5207_bool = 0; var_5208_object = Obj(); // 0x3215 PushV
	var_5209_object = GlobalVars[16]; // 0x3216 PushGE
	var_5208_object = var_5209_object; // 0x3217 Mov
	func_12094(var_5208_object); // 0x3219 NEW_2
	if(var_5207_bool == 0) goto Label_12832; // 0x321b JumpB
	var_5214_int = 0; var_5215_float = 0; // 0x321c PushV
	var_5215_float = var_4650_float; // 0x321d Mov
	func_10163(var_5214_int, var_5215_float); // 0x321e NEW_2
	
Label_12832:
	var_5220_int = 45124; // 0x3220 PushI
	var_5221_bool = var_4649_int == var_5220_int; // 0x3221 Eq
	if(var_5221_bool == 0) goto Label_12847; // 0x3222 JumpB
	var_5222_bool = 0; var_5223_object = Obj(); // 0x3223 PushV
	var_5224_object = GlobalVars[16]; // 0x3224 PushGE
	var_5223_object = var_5224_object; // 0x3225 Mov
	func_11844(var_5223_object); // 0x3227 NEW_2
	var_5229_bool = var_5222_bool == 0; // 0x3229 Not
	if(var_5229_bool == 0) goto Label_12847; // 0x322a JumpB
	var_5230_int = 0; var_5231_float = 0; // 0x322b PushV
	var_5231_float = var_4650_float; // 0x322c Mov
	func_10190(var_5230_int, var_5231_float); // 0x322d NEW_2
	
Label_12847:
	var_5236_int = 45130; // 0x322f PushI
	var_5237_bool = var_4649_int == var_5236_int; // 0x3230 Eq
	if(var_5237_bool == 0) goto Label_12861; // 0x3231 JumpB
	var_5238_bool = 0; var_5239_object = Obj(); // 0x3232 PushV
	var_5240_object = GlobalVars[16]; // 0x3233 PushGE
	var_5239_object = var_5240_object; // 0x3234 Mov
	func_12166(var_5239_object); // 0x3236 NEW_2
	if(var_5238_bool == 0) goto Label_12861; // 0x3238 JumpB
	var_5245_int = 0; var_5246_float = 0; // 0x3239 PushV
	var_5246_float = var_4650_float; // 0x323a Mov
	func_10316(var_5245_int, var_5246_float); // 0x323b NEW_2
	
Label_12861:
	var_5251_int = 45131; // 0x323d PushI
	var_5252_bool = var_4649_int == var_5251_int; // 0x323e Eq
	if(var_5252_bool == 0) goto Label_12875; // 0x323f JumpB
	var_5253_bool = 0; var_5254_object = Obj(); // 0x3240 PushV
	var_5255_object = GlobalVars[16]; // 0x3241 PushGE
	var_5254_object = var_5255_object; // 0x3242 Mov
	func_11748(var_5254_object); // 0x3244 NEW_2
	if(var_5253_bool == 0) goto Label_12875; // 0x3246 JumpB
	var_5260_int = 0; var_5261_float = 0; // 0x3247 PushV
	var_5261_float = var_4650_float; // 0x3248 Mov
	func_10334(var_5260_int, var_5261_float); // 0x3249 NEW_2
	
Label_12875:
	var_5266_int = 45135; // 0x324b PushI
	var_5267_bool = var_4649_int == var_5266_int; // 0x324c Eq
	if(var_5267_bool == 0) goto Label_12901; // 0x324d JumpB
	var_5268_bool = 0; // 0x324e PushV
	var_5268_bool = 0; // 0x324f MovB
	var_5269_bool = 0; var_5270_object = Obj(); // 0x3250 PushV
	var_5271_object = GlobalVars[16]; // 0x3251 PushGE
	var_5270_object = var_5271_object; // 0x3252 Mov
	func_11772(var_5270_object); // 0x3254 NEW_2
	if(var_5269_bool == 0) goto Label_12896; // 0x3256 JumpB
	var_5276_bool = 0; var_5277_object = Obj(); // 0x3257 PushV
	var_5278_object = GlobalVars[16]; // 0x3258 PushGE
	var_5277_object = var_5278_object; // 0x3259 Mov
	func_12072(var_5277_object); // 0x325b NEW_2
	var_5283_bool = var_5276_bool == 0; // 0x325d Not
	if(var_5283_bool == 0) goto Label_12896; // 0x325e JumpB
	var_5268_bool = 1; // 0x325f MovB
	
Label_12896:
	if(var_5268_bool == 0) goto Label_12901; // 0x3260 JumpB
	var_5284_int = 0; var_5285_float = 0; // 0x3261 PushV
	var_5285_float = var_4650_float; // 0x3262 Mov
	func_10361(var_5284_int, var_5285_float); // 0x3263 NEW_2
	
Label_12901:
	var_5290_int = 45125; // 0x3265 PushI
	var_5291_bool = var_4649_int == var_5290_int; // 0x3266 Eq
	if(var_5291_bool == 0) goto Label_12908; // 0x3267 JumpB
	var_5292_int = 0; var_5293_float = 0; // 0x3268 PushV
	var_5293_float = var_4650_float; // 0x3269 Mov
	func_10172(var_5292_int, var_5293_float); // 0x326a NEW_2
	
Label_12908:
	var_5298_int = 45128; // 0x326c PushI
	var_5299_bool = var_4649_int == var_5298_int; // 0x326d Eq
	if(var_5299_bool == 0) goto Label_12922; // 0x326e JumpB
	var_5300_bool = 0; var_5301_object = Obj(); // 0x326f PushV
	var_5302_object = GlobalVars[16]; // 0x3270 PushGE
	var_5301_object = var_5302_object; // 0x3271 Mov
	func_11856(var_5301_object); // 0x3273 NEW_2
	if(var_5300_bool == 0) goto Label_12922; // 0x3275 JumpB
	var_5307_int = 0; var_5308_float = 0; // 0x3276 PushV
	var_5308_float = var_4650_float; // 0x3277 Mov
	func_10271(var_5307_int, var_5308_float); // 0x3278 NEW_2
	
Label_12922:
	var_5313_int = 45129; // 0x327a PushI
	var_5314_bool = var_4649_int == var_5313_int; // 0x327b Eq
	if(var_5314_bool == 0) goto Label_12929; // 0x327c JumpB
	var_5315_int = 0; var_5316_float = 0; // 0x327d PushV
	var_5316_float = var_4650_float; // 0x327e Mov
	func_10280(var_5315_int, var_5316_float); // 0x327f NEW_2
	
Label_12929:
	var_5321_int = 45134; // 0x3281 PushI
	var_5322_bool = var_4649_int == var_5321_int; // 0x3282 Eq
	if(var_5322_bool == 0) goto Label_12936; // 0x3283 JumpB
	var_5323_int = 0; var_5324_float = 0; // 0x3284 PushV
	var_5324_float = var_4650_float; // 0x3285 Mov
	func_10352(var_5323_int, var_5324_float); // 0x3286 NEW_2
	
Label_12936:
	var_5329_int = 45126; // 0x3288 PushI
	var_5330_bool = var_4649_int == var_5329_int; // 0x3289 Eq
	if(var_5330_bool == 0) goto Label_12950; // 0x328a JumpB
	var_5331_bool = 0; var_5332_object = Obj(); // 0x328b PushV
	var_5333_object = GlobalVars[16]; // 0x328c PushGE
	var_5332_object = var_5333_object; // 0x328d Mov
	func_12106(var_5332_object); // 0x328f NEW_2
	if(var_5331_bool == 0) goto Label_12950; // 0x3291 JumpB
	var_5338_int = 0; var_5339_float = 0; // 0x3292 PushV
	var_5339_float = var_4650_float; // 0x3293 Mov
	func_10217(var_5338_int, var_5339_float); // 0x3294 NEW_2
	
Label_12950:
	var_5344_int = 45137; // 0x3296 PushI
	var_5345_bool = var_4649_int == var_5344_int; // 0x3297 Eq
	if(var_5345_bool == 0) goto Label_12957; // 0x3298 JumpB
	var_5346_int = 0; var_5347_float = 0; // 0x3299 PushV
	var_5347_float = var_4650_float; // 0x329a Mov
	func_10415(var_5346_int, var_5347_float); // 0x329b NEW_2
	
Label_12957:
	var_5352_int = 45138; // 0x329d PushI
	var_5353_bool = var_4649_int == var_5352_int; // 0x329e Eq
	if(var_5353_bool == 0) goto Label_12964; // 0x329f JumpB
	var_5354_int = 0; var_5355_float = 0; // 0x32a0 PushV
	var_5355_float = var_4650_float; // 0x32a1 Mov
	func_10397(var_5354_int, var_5355_float); // 0x32a2 NEW_2
	
Label_12964:
	var_5360_int = 45132; // 0x32a4 PushI
	var_5361_bool = var_4649_int == var_5360_int; // 0x32a5 Eq
	if(var_5361_bool == 0) goto Label_12971; // 0x32a6 JumpB
	var_5362_int = 0; var_5363_float = 0; // 0x32a7 PushV
	var_5363_float = var_4650_float; // 0x32a8 Mov
	func_10343(var_5362_int, var_5363_float); // 0x32a9 NEW_2
	
Label_12971:
	var_5368_int = 45198; // 0x32ab PushI
	var_5369_bool = var_4649_int == var_5368_int; // 0x32ac Eq
	if(var_5369_bool == 0) goto Label_12991; // 0x32ad JumpB
	var_5370_bool = 0; var_5371_object = Obj(); // 0x32ae PushV
	var_5372_object = GlobalVars[16]; // 0x32af PushGE
	var_5371_object = var_5372_object; // 0x32b0 Mov
	func_12024(var_5371_object); // 0x32b2 NEW_2
	var_5377_bool = var_5370_bool == 0; // 0x32b4 Not
	if(var_5377_bool == 0) goto Label_12991; // 0x32b5 JumpB
	var_5378_object = Obj(); var_5379_object = Obj(); // 0x32b6 PushV
	var_5380_object = GlobalVars[16]; // 0x32b7 PushGE
	var_5378_object = var_5380_object; // 0x32b8 Mov
	var_5381_object = GlobalVars[16]; // 0x32ba PushGE
	var_5379_object = var_5381_object; // 0x32bb Mov
	func_11683(); // 0x32bd NEW_2
	
Label_12991:
	var_5418_int = 45262; // 0x32bf PushI
	var_5419_bool = var_4649_int == var_5418_int; // 0x32c0 Eq
	if(var_5419_bool == 0) goto Label_13003; // 0x32c1 JumpB
	var_5420_object = Obj(); var_5421_object = Obj(); // 0x32c2 PushV
	var_5422_object = GlobalVars[16]; // 0x32c3 PushGE
	var_5420_object = var_5422_object; // 0x32c4 Mov
	var_5423_object = GlobalVars[16]; // 0x32c6 PushGE
	var_5421_object = var_5423_object; // 0x32c7 Mov
	func_11584(); // 0x32c9 NEW_2
	
Label_13003:
	var_5432_int = 45190; // 0x32cb PushI
	var_5433_bool = var_4649_int == var_5432_int; // 0x32cc Eq
	if(var_5433_bool == 0) goto Label_13010; // 0x32cd JumpB
	var_5434_int = 0; var_5435_float = 0; // 0x32ce PushV
	var_5435_float = var_4650_float; // 0x32cf Mov
	func_10109(var_5434_int, var_5435_float); // 0x32d0 NEW_2
	
Label_13010:
	var_5440_int = 45263; // 0x32d2 PushI
	var_5441_bool = var_4649_int == var_5440_int; // 0x32d3 Eq
	if(var_5441_bool == 0) goto Label_13022; // 0x32d4 JumpB
	var_5442_object = Obj(); var_5443_object = Obj(); // 0x32d5 PushV
	var_5444_object = GlobalVars[16]; // 0x32d6 PushGE
	var_5442_object = var_5444_object; // 0x32d7 Mov
	var_5445_object = GlobalVars[16]; // 0x32d9 PushGE
	var_5443_object = var_5445_object; // 0x32da Mov
	func_11601(); // 0x32dc NEW_2
	
Label_13022:
	var_5454_int = 45264; // 0x32de PushI
	var_5455_bool = var_4649_int == var_5454_int; // 0x32df Eq
	if(var_5455_bool == 0) goto Label_13034; // 0x32e0 JumpB
	var_5456_object = Obj(); var_5457_object = Obj(); // 0x32e1 PushV
	var_5458_object = GlobalVars[16]; // 0x32e2 PushGE
	var_5456_object = var_5458_object; // 0x32e3 Mov
	var_5459_object = GlobalVars[16]; // 0x32e5 PushGE
	var_5457_object = var_5459_object; // 0x32e6 Mov
	func_11618(); // 0x32e8 NEW_2
	
Label_13034:
	var_5468_int = 45266; // 0x32ea PushI
	var_5469_bool = var_4649_int == var_5468_int; // 0x32eb Eq
	if(var_5469_bool == 0) goto Label_13046; // 0x32ec JumpB
	var_5470_object = Obj(); var_5471_object = Obj(); // 0x32ed PushV
	var_5472_object = GlobalVars[16]; // 0x32ee PushGE
	var_5470_object = var_5472_object; // 0x32ef Mov
	var_5473_object = GlobalVars[16]; // 0x32f1 PushGE
	var_5471_object = var_5473_object; // 0x32f2 Mov
	func_11652(); // 0x32f4 NEW_2
	
Label_13046:
	var_5482_int = 45185; // 0x32f6 PushI
	var_5483_bool = var_4649_int == var_5482_int; // 0x32f7 Eq
	if(var_5483_bool == 0) goto Label_13061; // 0x32f8 JumpB
	var_5484_bool = 0; var_5485_object = Obj(); // 0x32f9 PushV
	var_5486_object = GlobalVars[16]; // 0x32fa PushGE
	var_5485_object = var_5486_object; // 0x32fb Mov
	func_11916(var_5485_object); // 0x32fd NEW_2
	var_5491_bool = var_5484_bool == 0; // 0x32ff Not
	if(var_5491_bool == 0) goto Label_13061; // 0x3300 JumpB
	var_5492_int = 0; var_5493_float = 0; // 0x3301 PushV
	var_5493_float = var_4650_float; // 0x3302 Mov
	func_10136(var_5492_int, var_5493_float); // 0x3303 NEW_2
	
Label_13061:
	var_5498_int = 45196; // 0x3305 PushI
	var_5499_bool = var_4649_int == var_5498_int; // 0x3306 Eq
	if(var_5499_bool == 0) goto Label_13076; // 0x3307 JumpB
	var_5500_bool = 0; var_5501_object = Obj(); // 0x3308 PushV
	var_5502_object = GlobalVars[16]; // 0x3309 PushGE
	var_5501_object = var_5502_object; // 0x330a Mov
	func_11988(var_5501_object); // 0x330c NEW_2
	var_5507_bool = var_5500_bool == 0; // 0x330e Not
	if(var_5507_bool == 0) goto Label_13076; // 0x330f JumpB
	var_5508_int = 0; var_5509_float = 0; // 0x3310 PushV
	var_5509_float = var_4650_float; // 0x3311 Mov
	func_9776(var_5508_int, var_5509_float); // 0x3312 NEW_2
	
Label_13076:
	var_5514_int = 45189; // 0x3314 PushI
	var_5515_bool = var_4649_int == var_5514_int; // 0x3315 Eq
	if(var_5515_bool == 0) goto Label_13091; // 0x3316 JumpB
	var_5516_bool = 0; var_5517_object = Obj(); // 0x3317 PushV
	var_5518_object = GlobalVars[16]; // 0x3318 PushGE
	var_5517_object = var_5518_object; // 0x3319 Mov
	func_12012(var_5517_object); // 0x331b NEW_2
	var_5523_bool = var_5516_bool == 0; // 0x331d Not
	if(var_5523_bool == 0) goto Label_13091; // 0x331e JumpB
	var_5524_int = 0; var_5525_float = 0; // 0x331f PushV
	var_5525_float = var_4650_float; // 0x3320 Mov
	func_10244(var_5524_int, var_5525_float); // 0x3321 NEW_2
	
Label_13091:
	var_5530_int = 45265; // 0x3323 PushI
	var_5531_bool = var_4649_int == var_5530_int; // 0x3324 Eq
	if(var_5531_bool == 0) goto Label_13103; // 0x3325 JumpB
	var_5532_object = Obj(); var_5533_object = Obj(); // 0x3326 PushV
	var_5534_object = GlobalVars[16]; // 0x3327 PushGE
	var_5532_object = var_5534_object; // 0x3328 Mov
	var_5535_object = GlobalVars[16]; // 0x332a PushGE
	var_5533_object = var_5535_object; // 0x332b Mov
	func_11635(); // 0x332d NEW_2
	
Label_13103:
	var_5544_int = 45157; // 0x332f PushI
	var_5545_bool = var_4649_int == var_5544_int; // 0x3330 Eq
	if(var_5545_bool == 0) goto Label_13117; // 0x3331 JumpB
	var_5546_bool = 0; var_5547_object = Obj(); // 0x3332 PushV
	var_5548_object = GlobalVars[16]; // 0x3333 PushGE
	var_5547_object = var_5548_object; // 0x3334 Mov
	func_12084(var_5546_bool, var_5547_object); // 0x3336 NEW_2
	if(var_5546_bool == 0) goto Label_13117; // 0x3338 JumpB
	var_5551_int = 0; var_5552_float = 0; // 0x3339 PushV
	var_5552_float = var_4650_float; // 0x333a Mov
	func_9830(var_5551_int, var_5552_float); // 0x333b NEW_2
	
Label_13117:
	var_5557_int = 45160; // 0x333d PushI
	var_5558_bool = var_4649_int == var_5557_int; // 0x333e Eq
	if(var_5558_bool == 0) goto Label_13131; // 0x333f JumpB
	var_5559_bool = 0; var_5560_object = Obj(); // 0x3340 PushV
	var_5561_object = GlobalVars[16]; // 0x3341 PushGE
	var_5560_object = var_5561_object; // 0x3342 Mov
	func_12084(var_5559_bool, var_5560_object); // 0x3344 NEW_2
	if(var_5559_bool == 0) goto Label_13131; // 0x3346 JumpB
	var_5562_int = 0; var_5563_float = 0; // 0x3347 PushV
	var_5563_float = var_4650_float; // 0x3348 Mov
	func_9884(var_5562_int, var_5563_float); // 0x3349 NEW_2
	
Label_13131:
	var_5568_int = 45161; // 0x334b PushI
	var_5569_bool = var_4649_int == var_5568_int; // 0x334c Eq
	if(var_5569_bool == 0) goto Label_13145; // 0x334d JumpB
	var_5570_bool = 0; var_5571_object = Obj(); // 0x334e PushV
	var_5572_object = GlobalVars[16]; // 0x334f PushGE
	var_5571_object = var_5572_object; // 0x3350 Mov
	func_12084(var_5570_bool, var_5571_object); // 0x3352 NEW_2
	if(var_5570_bool == 0) goto Label_13145; // 0x3354 JumpB
	var_5573_int = 0; var_5574_float = 0; // 0x3355 PushV
	var_5574_float = var_4650_float; // 0x3356 Mov
	func_9947(var_5573_int, var_5574_float); // 0x3357 NEW_2
	
Label_13145:
	var_5579_int = 45158; // 0x3359 PushI
	var_5580_bool = var_4649_int == var_5579_int; // 0x335a Eq
	if(var_5580_bool == 0) goto Label_13159; // 0x335b JumpB
	var_5581_bool = 0; var_5582_object = Obj(); // 0x335c PushV
	var_5583_object = GlobalVars[16]; // 0x335d PushGE
	var_5582_object = var_5583_object; // 0x335e Mov
	func_12084(var_5581_bool, var_5582_object); // 0x3360 NEW_2
	if(var_5581_bool == 0) goto Label_13159; // 0x3362 JumpB
	var_5584_int = 0; var_5585_float = 0; // 0x3363 PushV
	var_5585_float = var_4650_float; // 0x3364 Mov
	func_9839(var_5584_int, var_5585_float); // 0x3365 NEW_2
	
Label_13159:
	var_5590_int = 45159; // 0x3367 PushI
	var_5591_bool = var_4649_int == var_5590_int; // 0x3368 Eq
	if(var_5591_bool == 0) goto Label_13173; // 0x3369 JumpB
	var_5592_bool = 0; var_5593_object = Obj(); // 0x336a PushV
	var_5594_object = GlobalVars[16]; // 0x336b PushGE
	var_5593_object = var_5594_object; // 0x336c Mov
	func_12084(var_5592_bool, var_5593_object); // 0x336e NEW_2
	if(var_5592_bool == 0) goto Label_13173; // 0x3370 JumpB
	var_5595_int = 0; var_5596_float = 0; // 0x3371 PushV
	var_5596_float = var_4650_float; // 0x3372 Mov
	func_9848(var_5595_int, var_5596_float); // 0x3373 NEW_2
	
Label_13173:
	var_5601_int = 45187; // 0x3375 PushI
	var_5602_bool = var_4649_int == var_5601_int; // 0x3376 Eq
	if(var_5602_bool == 0) goto Label_13188; // 0x3377 JumpB
	var_5603_bool = 0; var_5604_object = Obj(); // 0x3378 PushV
	var_5605_object = GlobalVars[16]; // 0x3379 PushGE
	var_5604_object = var_5605_object; // 0x337a Mov
	func_11940(var_5604_object); // 0x337c NEW_2
	var_5610_bool = var_5603_bool == 0; // 0x337e Not
	if(var_5610_bool == 0) goto Label_13188; // 0x337f JumpB
	var_5611_int = 0; var_5612_float = 0; // 0x3380 PushV
	var_5612_float = var_4650_float; // 0x3381 Mov
	func_9875(var_5611_int, var_5612_float); // 0x3382 NEW_2
	
Label_13188:
	var_5617_int = 45188; // 0x3384 PushI
	var_5618_bool = var_4649_int == var_5617_int; // 0x3385 Eq
	if(var_5618_bool == 0) goto Label_13203; // 0x3386 JumpB
	var_5619_bool = 0; var_5620_object = Obj(); // 0x3387 PushV
	var_5621_object = GlobalVars[16]; // 0x3388 PushGE
	var_5620_object = var_5621_object; // 0x3389 Mov
	func_11952(var_5620_object); // 0x338b NEW_2
	var_5626_bool = var_5619_bool == 0; // 0x338d Not
	if(var_5626_bool == 0) goto Label_13203; // 0x338e JumpB
	var_5627_int = 0; var_5628_float = 0; // 0x338f PushV
	var_5628_float = var_4650_float; // 0x3390 Mov
	func_10298(var_5627_int, var_5628_float); // 0x3391 NEW_2
	
Label_13203:
	var_5633_int = 45193; // 0x3393 PushI
	var_5634_bool = var_4649_int == var_5633_int; // 0x3394 Eq
	if(var_5634_bool == 0) goto Label_13210; // 0x3395 JumpB
	var_5635_object = Obj(); var_5636_string = ""; // 0x3396 PushV
	var_5636_string = "quest_b1_05"; // 0x3397 MovS
	func_111(var_5635_object, var_5636_string); // 0x3398 NEW_2
	
Label_13210:
	var_5637_int = 45194; // 0x339a PushI
	var_5638_bool = var_4649_int == var_5637_int; // 0x339b Eq
	if(var_5638_bool == 0) goto Label_13234; // 0x339c JumpB
	var_5639_bool = 0; var_5640_object = Obj(); // 0x339d PushV
	var_5641_object = GlobalVars[16]; // 0x339e PushGE
	var_5640_object = var_5641_object; // 0x339f Mov
	func_11964(var_5640_object); // 0x33a1 NEW_2
	var_5646_bool = var_5639_bool == 0; // 0x33a3 Not
	if(var_5646_bool == 0) goto Label_13234; // 0x33a4 JumpB
	var_5647_object = Obj(); var_5648_object = Obj(); // 0x33a5 PushV
	var_5649_object = GlobalVars[16]; // 0x33a6 PushGE
	var_5647_object = var_5649_object; // 0x33a7 Mov
	var_5650_object = GlobalVars[16]; // 0x33a9 PushGE
	var_5648_object = var_5650_object; // 0x33aa Mov
	func_11535(); // 0x33ac NEW_2
	var_5661_int = 0; var_5662_float = 0; // 0x33ae PushV
	var_5662_float = var_4650_float; // 0x33af Mov
	func_10028(var_5661_int, var_5662_float); // 0x33b0 NEW_2
	
Label_13234:
	var_5667_int = 45197; // 0x33b2 PushI
	var_5668_bool = var_4649_int == var_5667_int; // 0x33b3 Eq
	if(var_5668_bool == 0) goto Label_13258; // 0x33b4 JumpB
	var_5669_bool = 0; var_5670_object = Obj(); // 0x33b5 PushV
	var_5671_object = GlobalVars[16]; // 0x33b6 PushGE
	var_5670_object = var_5671_object; // 0x33b7 Mov
	func_12000(var_5670_object); // 0x33b9 NEW_2
	var_5676_bool = var_5669_bool == 0; // 0x33bb Not
	if(var_5676_bool == 0) goto Label_13258; // 0x33bc JumpB
	var_5677_object = Obj(); var_5678_object = Obj(); // 0x33bd PushV
	var_5679_object = GlobalVars[16]; // 0x33be PushGE
	var_5677_object = var_5679_object; // 0x33bf Mov
	var_5680_object = GlobalVars[16]; // 0x33c1 PushGE
	var_5678_object = var_5680_object; // 0x33c2 Mov
	func_11519(); // 0x33c4 NEW_2
	var_5689_int = 0; var_5690_float = 0; // 0x33c6 PushV
	var_5690_float = var_4650_float; // 0x33c7 Mov
	func_10406(var_5689_int, var_5690_float); // 0x33c8 NEW_2
	
Label_13258:
	var_5695_int = 45191; // 0x33ca PushI
	var_5696_bool = var_4649_int == var_5695_int; // 0x33cb Eq
	if(var_5696_bool == 0) goto Label_13265; // 0x33cc JumpB
	var_5697_int = 0; var_5698_float = 0; // 0x33cd PushV
	var_5698_float = var_4650_float; // 0x33ce Mov
	func_10118(var_5697_int, var_5698_float); // 0x33cf NEW_2
	
Label_13265:
	var_5703_int = 45235; // 0x33d1 PushI
	var_5704_bool = var_4649_int == var_5703_int; // 0x33d2 Eq
	if(var_5704_bool == 0) goto Label_13272; // 0x33d3 JumpB
	var_5705_int = 0; var_5706_float = 0; // 0x33d4 PushV
	var_5706_float = var_4650_float; // 0x33d5 Mov
	func_10208(var_5705_int, var_5706_float); // 0x33d6 NEW_2
	
Label_13272:
	var_5711_int = 45192; // 0x33d8 PushI
	var_5712_bool = var_4649_int == var_5711_int; // 0x33d9 Eq
	if(var_5712_bool == 0) goto Label_13284; // 0x33da JumpB
	var_5713_object = Obj(); var_5714_object = Obj(); // 0x33db PushV
	var_5715_object = GlobalVars[16]; // 0x33dc PushGE
	var_5713_object = var_5715_object; // 0x33dd Mov
	var_5716_object = GlobalVars[16]; // 0x33df PushGE
	var_5714_object = var_5716_object; // 0x33e0 Mov
	func_10546(); // 0x33e2 NEW_2
	
Label_13284:
	var_5719_int = 45186; // 0x33e4 PushI
	var_5720_bool = var_4649_int == var_5719_int; // 0x33e5 Eq
	if(var_5720_bool == 0) goto Label_13299; // 0x33e6 JumpB
	var_5721_bool = 0; var_5722_object = Obj(); // 0x33e7 PushV
	var_5723_object = GlobalVars[16]; // 0x33e8 PushGE
	var_5722_object = var_5723_object; // 0x33e9 Mov
	func_11928(var_5722_object); // 0x33eb NEW_2
	var_5728_bool = var_5721_bool == 0; // 0x33ed Not
	if(var_5728_bool == 0) goto Label_13299; // 0x33ee JumpB
	var_5729_int = 0; var_5730_float = 0; // 0x33ef PushV
	var_5730_float = var_4650_float; // 0x33f0 Mov
	func_10379(var_5729_int, var_5730_float); // 0x33f1 NEW_2
	
Label_13299:
	var_5735_int = 45195; // 0x33f3 PushI
	var_5736_bool = var_4649_int == var_5735_int; // 0x33f4 Eq
	if(var_5736_bool == 0) goto Label_13323; // 0x33f5 JumpB
	var_5737_bool = 0; var_5738_object = Obj(); // 0x33f6 PushV
	var_5739_object = GlobalVars[16]; // 0x33f7 PushGE
	var_5738_object = var_5739_object; // 0x33f8 Mov
	func_11976(var_5738_object); // 0x33fa NEW_2
	var_5744_bool = var_5737_bool == 0; // 0x33fc Not
	if(var_5744_bool == 0) goto Label_13323; // 0x33fd JumpB
	var_5745_object = Obj(); var_5746_object = Obj(); // 0x33fe PushV
	var_5747_object = GlobalVars[16]; // 0x33ff PushGE
	var_5745_object = var_5747_object; // 0x3400 Mov
	var_5748_object = GlobalVars[16]; // 0x3402 PushGE
	var_5746_object = var_5748_object; // 0x3403 Mov
	func_11503(); // 0x3405 NEW_2
	var_5757_int = 0; var_5758_float = 0; // 0x3407 PushV
	var_5758_float = var_4650_float; // 0x3408 Mov
	func_10199(var_5757_int, var_5758_float); // 0x3409 NEW_2
	
Label_13323:
	var_5763_int = 45234; // 0x340b PushI
	var_5764_bool = var_4649_int == var_5763_int; // 0x340c Eq
	if(var_5764_bool == 0) goto Label_13338; // 0x340d JumpB
	var_5765_bool = 0; var_5766_object = Obj(); // 0x340e PushV
	var_5767_object = GlobalVars[16]; // 0x340f PushGE
	var_5766_object = var_5767_object; // 0x3410 Mov
	func_12060(var_5766_object); // 0x3412 NEW_2
	var_5772_bool = var_5765_bool == 0; // 0x3414 Not
	if(var_5772_bool == 0) goto Label_13338; // 0x3415 JumpB
	var_5773_int = 0; var_5774_float = 0; // 0x3416 PushV
	var_5774_float = var_4650_float; // 0x3417 Mov
	func_10145(var_5773_int, var_5774_float); // 0x3418 NEW_2
	
Label_13338:
	var_5779_int = 45237; // 0x341a PushI
	var_5780_bool = var_4649_int == var_5779_int; // 0x341b Eq
	if(var_5780_bool == 0) goto Label_13354; // 0x341c JumpB
	var_5781_object = Obj(); var_5782_object = Obj(); // 0x341d PushV
	var_5783_object = GlobalVars[16]; // 0x341e PushGE
	var_5781_object = var_5783_object; // 0x341f Mov
	var_5784_object = GlobalVars[16]; // 0x3421 PushGE
	var_5782_object = var_5784_object; // 0x3422 Mov
	func_11572(); // 0x3424 NEW_2
	var_5787_int = 0; var_5788_float = 0; // 0x3426 PushV
	var_5788_float = var_4650_float; // 0x3427 Mov
	func_10370(var_5787_int, var_5788_float); // 0x3428 NEW_2
	
Label_13354:
	var_5793_int = 45238; // 0x342a PushI
	var_5794_bool = var_4649_int == var_5793_int; // 0x342b Eq
	if(var_5794_bool == 0) goto Label_13370; // 0x342c JumpB
	var_5795_object = Obj(); var_5796_object = Obj(); // 0x342d PushV
	var_5797_object = GlobalVars[16]; // 0x342e PushGE
	var_5795_object = var_5797_object; // 0x342f Mov
	var_5798_object = GlobalVars[16]; // 0x3431 PushGE
	var_5796_object = var_5798_object; // 0x3432 Mov
	func_11578(); // 0x3434 NEW_2
	var_5801_int = 0; var_5802_float = 0; // 0x3436 PushV
	var_5802_float = var_4650_float; // 0x3437 Mov
	func_10433(var_5801_int, var_5802_float); // 0x3438 NEW_2
	
Label_13370:
	var_5807_int = 45162; // 0x343a PushI
	var_5808_bool = var_4649_int == var_5807_int; // 0x343b Eq
	if(var_5808_bool == 0) goto Label_13384; // 0x343c JumpB
	var_5809_bool = 0; var_5810_object = Obj(); // 0x343d PushV
	var_5811_object = GlobalVars[16]; // 0x343e PushGE
	var_5810_object = var_5811_object; // 0x343f Mov
	func_12084(var_5809_bool, var_5810_object); // 0x3441 NEW_2
	if(var_5809_bool == 0) goto Label_13384; // 0x3443 JumpB
	var_5812_int = 0; var_5813_float = 0; // 0x3444 PushV
	var_5813_float = var_4650_float; // 0x3445 Mov
	func_9992(var_5812_int, var_5813_float); // 0x3446 NEW_2
	
Label_13384:
	var_5818_int = 45139; // 0x3448 PushI
	var_5819_bool = var_4649_int == var_5818_int; // 0x3449 Eq
	if(var_5819_bool == 0) goto Label_13391; // 0x344a JumpB
	var_5820_int = 0; var_5821_float = 0; // 0x344b PushV
	var_5821_float = var_4650_float; // 0x344c Mov
	func_9857(var_5820_int, var_5821_float); // 0x344d NEW_2
	
Label_13391:
	var_5826_int = 45141; // 0x344f PushI
	var_5827_bool = var_4649_int == var_5826_int; // 0x3450 Eq
	if(var_5827_bool == 0) goto Label_13398; // 0x3451 JumpB
	var_5828_int = 0; var_5829_float = 0; // 0x3452 PushV
	var_5829_float = var_4650_float; // 0x3453 Mov
	func_9929(var_5828_int, var_5829_float); // 0x3454 NEW_2
	
Label_13398:
	var_5834_int = 45140; // 0x3456 PushI
	var_5835_bool = var_4649_int == var_5834_int; // 0x3457 Eq
	if(var_5835_bool == 0) goto Label_13405; // 0x3458 JumpB
	var_5836_int = 0; var_5837_float = 0; // 0x3459 PushV
	var_5837_float = var_4650_float; // 0x345a Mov
	func_9902(var_5836_int, var_5837_float); // 0x345b NEW_2
	
Label_13405:
	var_5842_int = 45144; // 0x345d PushI
	var_5843_bool = var_4649_int == var_5842_int; // 0x345e Eq
	if(var_5843_bool == 0) goto Label_13412; // 0x345f JumpB
	var_5844_int = 0; var_5845_float = 0; // 0x3460 PushV
	var_5845_float = var_4650_float; // 0x3461 Mov
	func_10253(var_5844_int, var_5845_float); // 0x3462 NEW_2
	
Label_13412:
	var_5850_int = 45148; // 0x3464 PushI
	var_5851_bool = var_4649_int == var_5850_int; // 0x3465 Eq
	if(var_5851_bool == 0) goto Label_13419; // 0x3466 JumpB
	var_5852_object = Obj(); var_5853_string = ""; // 0x3467 PushV
	var_5853_string = "quest_b9_03"; // 0x3468 MovS
	func_122(var_5852_object, var_5853_string); // 0x3469 NEW_2
	
Label_13419:
	var_5854_int = 45149; // 0x346b PushI
	var_5855_bool = var_4649_int == var_5854_int; // 0x346c Eq
	if(var_5855_bool == 0) goto Label_13426; // 0x346d JumpB
	var_5856_object = Obj(); var_5857_string = ""; // 0x346e PushV
	var_5857_string = "quest_b10_04"; // 0x346f MovS
	func_111(var_5856_object, var_5857_string); // 0x3470 NEW_2
	
Label_13426:
	var_5858_int = 45150; // 0x3472 PushI
	var_5859_bool = var_4649_int == var_5858_int; // 0x3473 Eq
	if(var_5859_bool == 0) goto Label_13433; // 0x3474 JumpB
	var_5860_object = Obj(); var_5861_string = ""; // 0x3475 PushV
	var_5861_string = "quest_b11_04"; // 0x3476 MovS
	func_111(var_5860_object, var_5861_string); // 0x3477 NEW_2
	
Label_13433:
	var_5862_int = 45151; // 0x3479 PushI
	var_5863_bool = var_4649_int == var_5862_int; // 0x347a Eq
	if(var_5863_bool == 0) goto Label_13447; // 0x347b JumpB
	var_5864_bool = 0; var_5865_object = Obj(); // 0x347c PushV
	var_5866_object = GlobalVars[16]; // 0x347d PushGE
	var_5865_object = var_5866_object; // 0x347e Mov
	func_11904(var_5865_object); // 0x3480 NEW_2
	if(var_5864_bool == 0) goto Label_13447; // 0x3482 JumpB
	var_5871_int = 0; var_5872_float = 0; // 0x3483 PushV
	var_5872_float = var_4650_float; // 0x3484 Mov
	func_9938(var_5871_int, var_5872_float); // 0x3485 NEW_2
	
Label_13447:
	var_5877_int = 45155; // 0x3487 PushI
	var_5878_bool = var_4649_int == var_5877_int; // 0x3488 Eq
	if(var_5878_bool == 0) goto Label_13461; // 0x3489 JumpB
	var_5879_bool = 0; var_5880_object = Obj(); // 0x348a PushV
	var_5881_object = GlobalVars[16]; // 0x348b PushGE
	var_5880_object = var_5881_object; // 0x348c Mov
	func_12084(var_5879_bool, var_5880_object); // 0x348e NEW_2
	if(var_5879_bool == 0) goto Label_13461; // 0x3490 JumpB
	var_5882_int = 0; var_5883_float = 0; // 0x3491 PushV
	var_5883_float = var_4650_float; // 0x3492 Mov
	func_9812(var_5882_int, var_5883_float); // 0x3493 NEW_2
	
Label_13461:
	var_5888_int = 45142; // 0x3495 PushI
	var_5889_bool = var_4649_int == var_5888_int; // 0x3496 Eq
	if(var_5889_bool == 0) goto Label_13468; // 0x3497 JumpB
	var_5890_int = 0; var_5891_float = 0; // 0x3498 PushV
	var_5891_float = var_4650_float; // 0x3499 Mov
	func_9893(var_5890_int, var_5891_float); // 0x349a NEW_2
	
Label_13468:
	var_5896_int = 45147; // 0x349c PushI
	var_5897_bool = var_4649_int == var_5896_int; // 0x349d Eq
	if(var_5897_bool == 0) goto Label_13506; // 0x349e JumpB
	var_5898_bool = 0; // 0x349f PushV
	var_5898_bool = 0; // 0x34a0 MovB
	var_5899_bool = 0; // 0x34a1 PushV
	var_5899_bool = 0; // 0x34a2 MovB
	var_5900_bool = 0; var_5901_object = Obj(); // 0x34a3 PushV
	var_5902_object = GlobalVars[16]; // 0x34a4 PushGE
	var_5901_object = var_5902_object; // 0x34a5 Mov
	func_11868(var_5901_object); // 0x34a7 NEW_2
	var_5907_bool = var_5900_bool == 0; // 0x34a9 Not
	if(var_5907_bool == 0) goto Label_13491; // 0x34aa JumpB
	var_5908_bool = 0; var_5909_object = Obj(); // 0x34ab PushV
	var_5910_object = GlobalVars[16]; // 0x34ac PushGE
	var_5909_object = var_5910_object; // 0x34ad Mov
	func_11880(var_5909_object); // 0x34af NEW_2
	if(var_5908_bool == 0) goto Label_13491; // 0x34b1 JumpB
	var_5899_bool = 1; // 0x34b2 MovB
	
Label_13491:
	if(var_5899_bool == 0) goto Label_13501; // 0x34b3 JumpB
	var_5915_bool = 0; var_5916_object = Obj(); // 0x34b4 PushV
	var_5917_object = GlobalVars[16]; // 0x34b5 PushGE
	var_5916_object = var_5917_object; // 0x34b6 Mov
	func_11892(var_5916_object); // 0x34b8 NEW_2
	var_5922_bool = var_5915_bool == 0; // 0x34ba Not
	if(var_5922_bool == 0) goto Label_13501; // 0x34bb JumpB
	var_5898_bool = 1; // 0x34bc MovB
	
Label_13501:
	if(var_5898_bool == 0) goto Label_13506; // 0x34bd JumpB
	var_5923_int = 0; var_5924_float = 0; // 0x34be PushV
	var_5924_float = var_4650_float; // 0x34bf Mov
	func_10424(var_5923_int, var_5924_float); // 0x34c0 NEW_2
	
Label_13506:
	var_5929_int = 45152; // 0x34c2 PushI
	var_5930_bool = var_4649_int == var_5929_int; // 0x34c3 Eq
	if(var_5930_bool == 0) goto Label_13520; // 0x34c4 JumpB
	var_5931_bool = 0; var_5932_object = Obj(); // 0x34c5 PushV
	var_5933_object = GlobalVars[16]; // 0x34c6 PushGE
	var_5932_object = var_5933_object; // 0x34c7 Mov
	func_12084(var_5931_bool, var_5932_object); // 0x34c9 NEW_2
	if(var_5931_bool == 0) goto Label_13520; // 0x34cb JumpB
	var_5934_int = 0; var_5935_float = 0; // 0x34cc PushV
	var_5935_float = var_4650_float; // 0x34cd Mov
	func_9785(var_5934_int, var_5935_float); // 0x34ce NEW_2
	
Label_13520:
	var_5940_int = 45156; // 0x34d0 PushI
	var_5941_bool = var_4649_int == var_5940_int; // 0x34d1 Eq
	if(var_5941_bool == 0) goto Label_13534; // 0x34d2 JumpB
	var_5942_bool = 0; var_5943_object = Obj(); // 0x34d3 PushV
	var_5944_object = GlobalVars[16]; // 0x34d4 PushGE
	var_5943_object = var_5944_object; // 0x34d5 Mov
	func_12084(var_5942_bool, var_5943_object); // 0x34d7 NEW_2
	if(var_5942_bool == 0) goto Label_13534; // 0x34d9 JumpB
	var_5945_int = 0; var_5946_float = 0; // 0x34da PushV
	var_5946_float = var_4650_float; // 0x34db Mov
	func_9821(var_5945_int, var_5946_float); // 0x34dc NEW_2
	
Label_13534:
	var_5951_int = 45153; // 0x34de PushI
	var_5952_bool = var_4649_int == var_5951_int; // 0x34df Eq
	if(var_5952_bool == 0) goto Label_13548; // 0x34e0 JumpB
	var_5953_bool = 0; var_5954_object = Obj(); // 0x34e1 PushV
	var_5955_object = GlobalVars[16]; // 0x34e2 PushGE
	var_5954_object = var_5955_object; // 0x34e3 Mov
	func_12084(var_5953_bool, var_5954_object); // 0x34e5 NEW_2
	if(var_5953_bool == 0) goto Label_13548; // 0x34e7 JumpB
	var_5956_int = 0; var_5957_float = 0; // 0x34e8 PushV
	var_5957_float = var_4650_float; // 0x34e9 Mov
	func_9794(var_5956_int, var_5957_float); // 0x34ea NEW_2
	
Label_13548:
	var_5962_int = 45154; // 0x34ec PushI
	var_5963_bool = var_4649_int == var_5962_int; // 0x34ed Eq
	if(var_5963_bool == 0) goto Label_13562; // 0x34ee JumpB
	var_5964_bool = 0; var_5965_object = Obj(); // 0x34ef PushV
	var_5966_object = GlobalVars[16]; // 0x34f0 PushGE
	var_5965_object = var_5966_object; // 0x34f1 Mov
	func_12084(var_5964_bool, var_5965_object); // 0x34f3 NEW_2
	if(var_5964_bool == 0) goto Label_13562; // 0x34f5 JumpB
	var_5967_int = 0; var_5968_float = 0; // 0x34f6 PushV
	var_5968_float = var_4650_float; // 0x34f7 Mov
	func_9803(var_5967_int, var_5968_float); // 0x34f8 NEW_2
	
Label_13562:
	var_5973_int = 45143; // 0x34fa PushI
	var_5974_bool = var_4649_int == var_5973_int; // 0x34fb Eq
	if(var_5974_bool == 0) goto Label_13569; // 0x34fc JumpB
	var_5975_int = 0; var_5976_float = 0; // 0x34fd PushV
	var_5976_float = var_4650_float; // 0x34fe Mov
	func_9911(var_5975_int, var_5976_float); // 0x34ff NEW_2
	
Label_13569:
	var_5981_int = 45078; // 0x3501 PushI
	var_5982_bool = var_4649_int == var_5981_int; // 0x3502 Eq
	if(var_5982_bool == 0) goto Label_13599; // 0x3503 JumpB
	var_5983_object = Obj(); var_5984_object = Obj(); // 0x3504 PushV
	var_5985_object = GlobalVars[16]; // 0x3505 PushGE
	var_5983_object = var_5985_object; // 0x3506 Mov
	var_5986_object = GlobalVars[16]; // 0x3508 PushGE
	var_5984_object = var_5986_object; // 0x3509 Mov
	func_11676(); // 0x350b NEW_2
	var_5989_object = Obj(); var_5990_object = Obj(); // 0x350d PushV
	var_5991_object = GlobalVars[16]; // 0x350e PushGE
	var_5989_object = var_5991_object; // 0x350f Mov
	var_5992_object = GlobalVars[16]; // 0x3511 PushGE
	var_5990_object = var_5992_object; // 0x3512 Mov
	func_11043(); // 0x3514 NEW_2
	var_6016_bool = 0; var_6017_string = ""; var_6018_string = ""; // 0x3516 PushV
	var_6017_string = "quest_b6_01"; // 0x3517 MovS
	var_6018_string = "cleanup"; // 0x3518 MovS
	func_189(var_6016_bool, var_6017_string, var_6018_string); // 0x3519 NEW_2
	var_6019_object = Obj(); var_6020_string = ""; // 0x351b PushV
	var_6020_string = "quest_b7_01"; // 0x351c MovS
	func_111(var_6019_object, var_6020_string); // 0x351d NEW_2
	
Label_13599:
	var_6021_int = 45070; // 0x351f PushI
	var_6022_bool = var_4649_int == var_6021_int; // 0x3520 Eq
	if(var_6022_bool == 0) goto Label_13611; // 0x3521 JumpB
	var_6023_object = Obj(); var_6024_object = Obj(); // 0x3522 PushV
	var_6025_object = GlobalVars[16]; // 0x3523 PushGE
	var_6023_object = var_6025_object; // 0x3524 Mov
	var_6026_object = GlobalVars[16]; // 0x3526 PushGE
	var_6024_object = var_6026_object; // 0x3527 Mov
	func_10449(); // 0x3529 NEW_2
	
Label_13611:
	var_6029_int = 45059; // 0x352b PushI
	var_6030_bool = var_4649_int == var_6029_int; // 0x352c Eq
	if(var_6030_bool == 0) goto Label_13641; // 0x352d JumpB
	var_6031_object = Obj(); var_6032_object = Obj(); // 0x352e PushV
	var_6033_object = GlobalVars[16]; // 0x352f PushGE
	var_6031_object = var_6033_object; // 0x3530 Mov
	var_6034_object = GlobalVars[16]; // 0x3532 PushGE
	var_6032_object = var_6034_object; // 0x3533 Mov
	func_11734(); // 0x3535 NEW_2
	var_6037_object = Obj(); var_6038_object = Obj(); // 0x3537 PushV
	var_6039_object = GlobalVars[16]; // 0x3538 PushGE
	var_6037_object = var_6039_object; // 0x3539 Mov
	var_6040_object = GlobalVars[16]; // 0x353b PushGE
	var_6038_object = var_6040_object; // 0x353c Mov
	func_10763(); // 0x353e NEW_2
	var_6078_bool = 0; var_6079_string = ""; var_6080_string = ""; // 0x3540 PushV
	var_6079_string = "quest_b2_01"; // 0x3541 MovS
	var_6080_string = "cleanup"; // 0x3542 MovS
	func_189(var_6078_bool, var_6079_string, var_6080_string); // 0x3543 NEW_2
	var_6081_object = Obj(); var_6082_string = ""; // 0x3545 PushV
	var_6082_string = "quest_b3_01"; // 0x3546 MovS
	func_111(var_6081_object, var_6082_string); // 0x3547 NEW_2
	
Label_13641:
	var_6083_int = 45071; // 0x3549 PushI
	var_6084_bool = var_4649_int == var_6083_int; // 0x354a Eq
	if(var_6084_bool == 0) goto Label_13653; // 0x354b JumpB
	var_6085_object = Obj(); var_6086_object = Obj(); // 0x354c PushV
	var_6087_object = GlobalVars[16]; // 0x354d PushGE
	var_6085_object = var_6087_object; // 0x354e Mov
	var_6088_object = GlobalVars[16]; // 0x3550 PushGE
	var_6086_object = var_6088_object; // 0x3551 Mov
	func_10463(); // 0x3553 NEW_2
	
Label_13653:
	var_6100_int = 45073; // 0x3555 PushI
	var_6101_bool = var_4649_int == var_6100_int; // 0x3556 Eq
	if(var_6101_bool == 0) goto Label_13665; // 0x3557 JumpB
	var_6102_object = Obj(); var_6103_object = Obj(); // 0x3558 PushV
	var_6104_object = GlobalVars[16]; // 0x3559 PushGE
	var_6102_object = var_6104_object; // 0x355a Mov
	var_6105_object = GlobalVars[16]; // 0x355c PushGE
	var_6103_object = var_6105_object; // 0x355d Mov
	func_10500(); // 0x355f NEW_2
	
Label_13665:
	var_6106_int = 45072; // 0x3561 PushI
	var_6107_bool = var_4649_int == var_6106_int; // 0x3562 Eq
	if(var_6107_bool == 0) goto Label_13686; // 0x3563 JumpB
	var_6108_object = Obj(); var_6109_object = Obj(); // 0x3564 PushV
	var_6110_object = GlobalVars[16]; // 0x3565 PushGE
	var_6108_object = var_6110_object; // 0x3566 Mov
	var_6111_object = GlobalVars[16]; // 0x3568 PushGE
	var_6109_object = var_6111_object; // 0x3569 Mov
	func_10477(); // 0x356b NEW_2
	var_6114_object = Obj(); var_6115_object = Obj(); // 0x356d PushV
	var_6116_object = GlobalVars[16]; // 0x356e PushGE
	var_6114_object = var_6116_object; // 0x356f Mov
	var_6117_object = GlobalVars[16]; // 0x3571 PushGE
	var_6115_object = var_6117_object; // 0x3572 Mov
	func_10491(); // 0x3574 NEW_2
	
Label_13686:
	var_6120_int = 45076; // 0x3576 PushI
	var_6121_bool = var_4649_int == var_6120_int; // 0x3577 Eq
	if(var_6121_bool == 0) goto Label_13700; // 0x3578 JumpB
	var_6122_bool = 0; var_6123_object = Obj(); // 0x3579 PushV
	var_6124_object = GlobalVars[16]; // 0x357a PushGE
	var_6123_object = var_6124_object; // 0x357b Mov
	func_12118(var_6123_object); // 0x357d NEW_2
	if(var_6122_bool == 0) goto Label_13700; // 0x357f JumpB
	var_6129_int = 0; var_6130_float = 0; // 0x3580 PushV
	var_6130_float = var_4650_float; // 0x3581 Mov
	func_10046(var_6129_int, var_6130_float); // 0x3582 NEW_2
	
Label_13700:
	var_6135_int = 45077; // 0x3584 PushI
	var_6136_bool = var_4649_int == var_6135_int; // 0x3585 Eq
	if(var_6136_bool == 0) goto Label_13715; // 0x3586 JumpB
	var_6137_bool = 0; var_6138_object = Obj(); // 0x3587 PushV
	var_6139_object = GlobalVars[16]; // 0x3588 PushGE
	var_6138_object = var_6139_object; // 0x3589 Mov
	func_12154(var_6138_object); // 0x358b NEW_2
	var_6144_bool = var_6137_bool == 0; // 0x358d Not
	if(var_6144_bool == 0) goto Label_13715; // 0x358e JumpB
	var_6145_int = 0; var_6146_float = 0; // 0x358f PushV
	var_6146_float = var_4650_float; // 0x3590 Mov
	func_10055(var_6145_int, var_6146_float); // 0x3591 NEW_2
	
Label_13715:
	var_6151_int = 45075; // 0x3593 PushI
	var_6152_bool = var_4649_int == var_6151_int; // 0x3594 Eq
	if(var_6152_bool == 0) goto Label_13730; // 0x3595 JumpB
	var_6153_bool = 0; var_6154_object = Obj(); // 0x3596 PushV
	var_6155_object = GlobalVars[16]; // 0x3597 PushGE
	var_6154_object = var_6155_object; // 0x3598 Mov
	func_12130(var_6154_object); // 0x359a NEW_2
	var_6160_bool = var_6153_bool == 0; // 0x359c Not
	if(var_6160_bool == 0) goto Label_13730; // 0x359d JumpB
	var_6161_int = 0; var_6162_float = 0; // 0x359e PushV
	var_6162_float = var_4650_float; // 0x359f Mov
	func_10073(var_6161_int, var_6162_float); // 0x35a0 NEW_2
	
Label_13730:
	var_6167_int = 45058; // 0x35a2 PushI
	var_6168_bool = var_4649_int == var_6167_int; // 0x35a3 Eq
	if(var_6168_bool == 0) goto Label_13755; // 0x35a4 JumpB
	var_6169_object = Obj(); var_6170_object = Obj(); // 0x35a5 PushV
	var_6171_object = GlobalVars[16]; // 0x35a6 PushGE
	var_6169_object = var_6171_object; // 0x35a7 Mov
	var_6172_object = GlobalVars[16]; // 0x35a9 PushGE
	var_6170_object = var_6172_object; // 0x35aa Mov
	func_10581(); // 0x35ac NEW_2
	var_6232_bool = 0; var_6233_string = ""; var_6234_string = ""; // 0x35ae PushV
	var_6233_string = "quest_b1_01"; // 0x35af MovS
	var_6234_string = "cleanup"; // 0x35b0 MovS
	func_189(var_6232_bool, var_6233_string, var_6234_string); // 0x35b1 NEW_2
	var_6235_object = Obj(); var_6236_string = ""; // 0x35b3 PushV
	var_6236_string = "quest_b2_01"; // 0x35b4 MovS
	func_111(var_6235_object, var_6236_string); // 0x35b5 NEW_2
	var_6237_object = Obj(); var_6238_string = ""; // 0x35b7 PushV
	var_6238_string = "quest_b2_03"; // 0x35b8 MovS
	func_111(var_6237_object, var_6238_string); // 0x35b9 NEW_2
	
Label_13755:
	var_6239_int = 45060; // 0x35bb PushI
	var_6240_bool = var_4649_int == var_6239_int; // 0x35bc Eq
	if(var_6240_bool == 0) goto Label_13776; // 0x35bd JumpB
	var_6241_object = Obj(); var_6242_object = Obj(); // 0x35be PushV
	var_6243_object = GlobalVars[16]; // 0x35bf PushGE
	var_6241_object = var_6243_object; // 0x35c0 Mov
	var_6244_object = GlobalVars[16]; // 0x35c2 PushGE
	var_6242_object = var_6244_object; // 0x35c3 Mov
	func_10871(); // 0x35c5 NEW_2
	var_6274_bool = 0; var_6275_string = ""; var_6276_string = ""; // 0x35c7 PushV
	var_6275_string = "quest_b3_01"; // 0x35c8 MovS
	var_6276_string = "cleanup"; // 0x35c9 MovS
	func_189(var_6274_bool, var_6275_string, var_6276_string); // 0x35ca NEW_2
	var_6277_object = Obj(); var_6278_string = ""; // 0x35cc PushV
	var_6278_string = "quest_b4_01"; // 0x35cd MovS
	func_122(var_6277_object, var_6278_string); // 0x35ce NEW_2
	
Label_13776:
	var_6279_int = 45065; // 0x35d0 PushI
	var_6280_bool = var_4649_int == var_6279_int; // 0x35d1 Eq
	if(var_6280_bool == 0) goto Label_13797; // 0x35d2 JumpB
	var_6281_object = Obj(); var_6282_object = Obj(); // 0x35d3 PushV
	var_6283_object = GlobalVars[16]; // 0x35d4 PushGE
	var_6281_object = var_6283_object; // 0x35d5 Mov
	var_6284_object = GlobalVars[16]; // 0x35d7 PushGE
	var_6282_object = var_6284_object; // 0x35d8 Mov
	func_10951(); // 0x35da NEW_2
	var_6304_bool = 0; var_6305_string = ""; var_6306_string = ""; // 0x35dc PushV
	var_6305_string = "quest_b4_01"; // 0x35dd MovS
	var_6306_string = "cleanup"; // 0x35de MovS
	func_189(var_6304_bool, var_6305_string, var_6306_string); // 0x35df NEW_2
	var_6307_object = Obj(); var_6308_string = ""; // 0x35e1 PushV
	var_6308_string = "quest_b5_01"; // 0x35e2 MovS
	func_111(var_6307_object, var_6308_string); // 0x35e3 NEW_2
	
Label_13797:
	var_6309_int = 45061; // 0x35e5 PushI
	var_6310_bool = var_4649_int == var_6309_int; // 0x35e6 Eq
	if(var_6310_bool == 0) goto Label_13803; // 0x35e7 JumpB
	var_6311_string = "aglaja.wmv"; // 0x35e8 PushS
	QueuePlayMovie(var_6311_string); // 0x35e9 Func
	
Label_13803:
	var_6312_int = 45067; // 0x35eb PushI
	var_6313_bool = var_4649_int == var_6312_int; // 0x35ec Eq
	if(var_6313_bool == 0) goto Label_13818; // 0x35ed JumpB
	var_6314_bool = 0; var_6315_object = Obj(); // 0x35ee PushV
	var_6316_object = GlobalVars[16]; // 0x35ef PushGE
	var_6315_object = var_6316_object; // 0x35f0 Mov
	func_12036(var_6315_object); // 0x35f2 NEW_2
	var_6321_bool = var_6314_bool == 0; // 0x35f4 Not
	if(var_6321_bool == 0) goto Label_13818; // 0x35f5 JumpB
	var_6322_int = 0; var_6323_float = 0; // 0x35f6 PushV
	var_6323_float = var_4650_float; // 0x35f7 Mov
	func_10091(var_6322_int, var_6323_float); // 0x35f8 NEW_2
	
Label_13818:
	var_6328_int = 45068; // 0x35fa PushI
	var_6329_bool = var_4649_int == var_6328_int; // 0x35fb Eq
	if(var_6329_bool == 0) goto Label_13835; // 0x35fc JumpB
	var_6330_object = Obj(); var_6331_object = Obj(); // 0x35fd PushV
	var_6332_object = GlobalVars[16]; // 0x35fe PushGE
	var_6330_object = var_6332_object; // 0x35ff Mov
	var_6333_object = GlobalVars[16]; // 0x3601 PushGE
	var_6331_object = var_6333_object; // 0x3602 Mov
	func_11720(); // 0x3604 NEW_2
	var_6336_bool = 0; var_6337_string = ""; var_6338_string = ""; // 0x3606 PushV
	var_6337_string = "quest_b1_01"; // 0x3607 MovS
	var_6338_string = "remove_whitemask"; // 0x3608 MovS
	func_189(var_6336_bool, var_6337_string, var_6338_string); // 0x3609 NEW_2
	
Label_13835:
	var_6339_int = 45062; // 0x360b PushI
	var_6340_bool = var_4649_int == var_6339_int; // 0x360c Eq
	if(var_6340_bool == 0) goto Label_13841; // 0x360d JumpB
	var_6341_string = "army.wmv"; // 0x360e PushS
	QueuePlayMovie(var_6341_string); // 0x360f Func
	
Label_13841:
	var_6342_int = 45069; // 0x3611 PushI
	var_6343_bool = var_4649_int == var_6342_int; // 0x3612 Eq
	if(var_6343_bool == 0) goto Label_13853; // 0x3613 JumpB
	var_6344_object = Obj(); var_6345_object = Obj(); // 0x3614 PushV
	var_6346_object = GlobalVars[16]; // 0x3615 PushGE
	var_6344_object = var_6346_object; // 0x3616 Mov
	var_6347_object = GlobalVars[16]; // 0x3618 PushGE
	var_6345_object = var_6347_object; // 0x3619 Mov
	func_11741(); // 0x361b NEW_2
	
Label_13853:
	var_6350_int = 45066; // 0x361d PushI
	var_6351_bool = var_4649_int == var_6350_int; // 0x361e Eq
	if(var_6351_bool == 0) goto Label_13874; // 0x361f JumpB
	var_6352_object = Obj(); var_6353_object = Obj(); // 0x3620 PushV
	var_6354_object = GlobalVars[16]; // 0x3621 PushGE
	var_6352_object = var_6354_object; // 0x3622 Mov
	var_6355_object = GlobalVars[16]; // 0x3624 PushGE
	var_6353_object = var_6355_object; // 0x3625 Mov
	func_10999(); // 0x3627 NEW_2
	var_6373_bool = 0; var_6374_string = ""; var_6375_string = ""; // 0x3629 PushV
	var_6374_string = "quest_b5_01"; // 0x362a MovS
	var_6375_string = "cleanup"; // 0x362b MovS
	func_189(var_6373_bool, var_6374_string, var_6375_string); // 0x362c NEW_2
	var_6376_object = Obj(); var_6377_string = ""; // 0x362e PushV
	var_6377_string = "quest_b6_01"; // 0x362f MovS
	func_111(var_6376_object, var_6377_string); // 0x3630 NEW_2
	
Label_13874:
	var_6378_int = 45074; // 0x3632 PushI
	var_6379_bool = var_4649_int == var_6378_int; // 0x3633 Eq
	if(var_6379_bool == 0) goto Label_13886; // 0x3634 JumpB
	var_6380_object = Obj(); var_6381_object = Obj(); // 0x3635 PushV
	var_6382_object = GlobalVars[16]; // 0x3636 PushGE
	var_6380_object = var_6382_object; // 0x3637 Mov
	var_6383_object = GlobalVars[16]; // 0x3639 PushGE
	var_6381_object = var_6383_object; // 0x363a Mov
	func_10509(); // 0x363c NEW_2
	
Label_13886:
	return 2; // 0x363e Return
	
Label_12760:
	var_6386_bool = 0; var_6387_string = ""; var_6388_string = ""; var_6389_string = ""; // 0x31d8 PushV
	var_6387_string = "volonteers_danko"; // 0x31d9 MovS
	var_6388_string = "kill"; // 0x31da MovS
	var_6389_string = "bigvlad"; // 0x31db MovS
	func_201(var_6386_bool, var_6387_string, var_6388_string, var_6389_string); // 0x31dc NEW_2
	var_6390_string = "Big Vlad is dead"; // 0x31de PushS
	Trace(var_6390_string); // 0x31df Func
}


func_5240(var_2586_int, var_2587_int, var_2588_object, var_2589_object, var_2590_object, var_2591_object)
{
	var_2592_int = 0; // 0x1479 PushI
	var_2593_bool = var_2587_int == var_2592_int; // 0x147a Eq
	if(var_2593_bool == 0) goto Label_5280; // 0x147b JumpB
	var_2594_int = 0; var_2595_bool = 0; // 0x147c PushV
	var_2594_int = 4; // 0x147d MovI
	var_2595_bool = 1; // 0x147e MovB
	func_746(var_2594_int, var_2595_bool); // 0x147f NEW_2
	var_2596_int = 0; var_2597_bool = 0; var_2598_int = 0; // 0x1481 PushV
	var_2596_int = 4; // 0x1482 MovI
	var_2597_bool = 1; // 0x1483 MovB
	var_2598_int = 1; // 0x1484 MovI
	func_763(var_2596_int, var_2597_bool, var_2598_int); // 0x1485 NEW_2
	var_2599_int = 0; var_2600_int = 0; var_2601_object = Obj(); var_2602_object = Obj(); var_2603_object = Obj(); // 0x1487 PushV
	var_2599_int = 4; // 0x1488 MovI
	var_2600_int = var_2586_int; // 0x1489 Mov
	var_2601_object = var_2588_object; // 0x148a Mov
	var_2602_object = var_2589_object; // 0x148b Mov
	var_2603_object = var_2590_object; // 0x148c Mov
	func_591(var_2599_int, var_2600_int, var_2601_object, var_2602_object, var_2603_object); // 0x148d NEW_2
	var_2604_object = Obj(); var_2605_int = 0; // 0x148f PushV
	var_2604_object = var_2591_object; // 0x1490 Mov
	var_2605_int = 1; // 0x1491 MovI
	func_255(var_2605_int); // 0x1492 NEW_2
	var_2606_int = 0; var_2607_bool = 0; var_2608_int = 0; // 0x1494 PushV
	var_2606_int = 4; // 0x1495 MovI
	var_2607_bool = 1; // 0x1496 MovB
	var_2608_int = 4; // 0x1497 MovI
	func_820(var_2606_int, var_2607_bool, var_2608_int); // 0x1498 NEW_2
	var_2609_int = 0; var_2610_bool = 0; var_2611_int = 0; // 0x149a PushV
	var_2609_int = 4; // 0x149b MovI
	var_2610_bool = 0; // 0x149c MovB
	var_2611_int = 4; // 0x149d MovI
	func_882(var_2609_int, var_2610_bool, var_2611_int); // 0x149e NEW_2
	
Label_5280:
	var_2612_int = 0; var_2613_bool = 0; // 0x14a0 PushV
	var_2612_int = 4; // 0x14a1 MovI
	var_2613_bool = 0; // 0x14a2 MovB
	func_729(var_2612_int, var_2613_bool); // 0x14a3 NEW_2
	var_2614_int = 0; var_2615_int = 0; var_2616_int = 0; // 0x14a5 PushV
	var_2614_int = 4; // 0x14a6 MovI
	var_2615_int = var_2586_int; // 0x14a7 Mov
	var_2616_int = var_2587_int; // 0x14a8 Mov
	func_2894(var_2614_int, var_2615_int, var_2616_int); // 0x14a9 NEW_2
	return 0; // 0x14ab Return
}


func_10361(var_5284_int, var_5285_float)
{
	var_5286_int = 0; var_5287_int = 0; var_5288_int = 0; var_5289_float = 0; // 0x287a PushV
	var_5287_int = 521371; // 0x287b MovI
	var_5288_int = 521370; // 0x287c MovI
	var_5289_float = var_5285_float; // 0x287d Mov
	func_12278(var_5286_int, var_5287_int, var_5288_int, var_5289_float); // 0x287e NEW_2
	var_5284_int = var_5286_int; // 0x287f Mov
	return 0; // 0x2881 Return
}


func_122(var_4961_object, var_4962_string)
{
	var_4963_object = Obj(); var_4964_object = Obj(); var_4965_object = Obj(); var_4966_object = Obj(); // 0x7a PushV
	GetMainOutdoorScene(var_4965_object); // 0x7b Func
	var_4967_string = ".xml"; // 0x7d PushS
	var_4968_int = var_4962_string + var_4967_string; // 0x7e Add
	AddBlankActorFromXml(var_4966_object, var_4965_object, var_4962_string, var_4968_int); // 0x7f Func
	var_4961_object = var_4966_object; // 0x81 Mov
	return 4; // 0x82 Return
}


func_6268(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object)
{
	var_1643_int = 0; // 0x187d PushI
	var_1644_bool = var_1638_int == var_1643_int; // 0x187e Eq
	if(var_1644_bool == 0) goto Label_6308; // 0x187f JumpB
	var_1645_int = 0; var_1646_bool = 0; // 0x1880 PushV
	var_1645_int = 10; // 0x1881 MovI
	var_1646_bool = 0; // 0x1882 MovB
	func_746(var_1645_int, var_1646_bool); // 0x1883 NEW_2
	var_1647_int = 0; var_1648_bool = 0; var_1649_int = 0; // 0x1885 PushV
	var_1647_int = 10; // 0x1886 MovI
	var_1648_bool = 0; // 0x1887 MovB
	var_1649_int = 1; // 0x1888 MovI
	func_763(var_1647_int, var_1648_bool, var_1649_int); // 0x1889 NEW_2
	var_1650_int = 0; var_1651_int = 0; var_1652_object = Obj(); var_1653_object = Obj(); var_1654_object = Obj(); // 0x188b PushV
	var_1650_int = 10; // 0x188c MovI
	var_1651_int = var_1637_int; // 0x188d Mov
	var_1652_object = var_1639_object; // 0x188e Mov
	var_1653_object = var_1640_object; // 0x188f Mov
	var_1654_object = var_1641_object; // 0x1890 Mov
	func_572(var_1651_int, var_1652_object, var_1653_object, var_1654_object); // 0x1891 NEW_2
	var_1655_object = Obj(); var_1656_int = 0; // 0x1893 PushV
	var_1655_object = var_1642_object; // 0x1894 Mov
	var_1656_int = 0; // 0x1895 MovI
	func_255(var_1656_int); // 0x1896 NEW_2
	var_1657_int = 0; var_1658_bool = 0; var_1659_int = 0; // 0x1898 PushV
	var_1657_int = 10; // 0x1899 MovI
	var_1658_bool = 0; // 0x189a MovB
	var_1659_int = 7; // 0x189b MovI
	func_820(var_1657_int, var_1658_bool, var_1659_int); // 0x189c NEW_2
	var_1660_int = 0; var_1661_bool = 0; var_1662_int = 0; // 0x189e PushV
	var_1660_int = 10; // 0x189f MovI
	var_1661_bool = 0; // 0x18a0 MovB
	var_1662_int = 7; // 0x18a1 MovI
	func_882(var_1660_int, var_1661_bool, var_1662_int); // 0x18a2 NEW_2
	
Label_6308:
	var_1663_int = 0; var_1664_int = 0; // 0x18a4 PushV
	var_1663_int = 10; // 0x18a5 MovI
	var_1664_int = var_1638_int; // 0x18a6 Mov
	func_933(var_1663_int, var_1664_int); // 0x18a7 NEW_2
	var_1665_int = 0; var_1666_int = 0; var_1667_int = 0; // 0x18a9 PushV
	var_1665_int = 10; // 0x18aa MovI
	var_1666_int = var_1637_int; // 0x18ab Mov
	var_1667_int = var_1638_int; // 0x18ac Mov
	func_1574(var_1665_int, var_1666_int, var_1667_int); // 0x18ad NEW_2
	return 0; // 0x18af Return
}


func_10370(var_5787_int, var_5788_float)
{
	var_5789_int = 0; var_5790_int = 0; var_5791_int = 0; var_5792_float = 0; // 0x2883 PushV
	var_5790_int = 533052; // 0x2884 MovI
	var_5791_int = 533051; // 0x2885 MovI
	var_5792_float = var_5788_float; // 0x2886 Mov
	func_12278(var_5789_int, var_5790_int, var_5791_int, var_5792_float); // 0x2887 NEW_2
	var_5787_int = var_5789_int; // 0x2888 Mov
	return 0; // 0x288a Return
}


func_133(var_329_object, var_331_string, var_332_string, var_333_string)
{
	var_335_bool = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_object = Obj(); var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_object = Obj(); // 0x85 PushV
	GetLocator(var_331_string, var_339_bool, var_340_cvector, var_341_cvector); // 0x86 ObjFunc
	var_343_bool = var_339_bool == 0; // 0x88 Not
	if(var_343_bool == 0) goto Label_146; // 0x89 JumpB
	var_344_string = "Locator "; // 0x8a PushS
	var_345_int = var_344_string + var_331_string; // 0x8b Add
	var_346_string = " doesn't exist"; // 0x8c PushS
	var_347_int = var_345_int + var_346_string; // 0x8d Add
	Trace(var_347_int); // 0x8e Func
	var_342_object = 0; // 0x90 SetNull
	goto Label_148; // 0x91 Jump
	
Label_148:
	var_329_object = var_342_object; // 0x94 Mov
	return 8; // 0x95 Return
	
Label_146:
	AddStationaryActor(var_342_object, var_340_cvector, var_341_cvector, var_332_string, var_333_string); // 0x92 ObjFunc
}


func_10379(var_5729_int, var_5730_float)
{
	var_5731_int = 0; var_5732_int = 0; var_5733_int = 0; var_5734_float = 0; // 0x288c PushV
	var_5732_int = 530654; // 0x288d MovI
	var_5733_int = 530653; // 0x288e MovI
	var_5734_float = var_5730_float; // 0x288f Mov
	func_12278(var_5731_int, var_5732_int, var_5733_int, var_5734_float); // 0x2890 NEW_2
	var_5729_int = var_5731_int; // 0x2891 Mov
	return 0; // 0x2893 Return
}


func_7314(var_3138_int, var_3139_int, var_3140_object, var_3141_object, var_3142_object, var_3143_object)
{
	var_3144_int = 0; // 0x1c93 PushI
	var_3145_bool = var_3139_int == var_3144_int; // 0x1c94 Eq
	if(var_3145_bool == 0) goto Label_7354; // 0x1c95 JumpB
	var_3146_int = 0; var_3147_bool = 0; // 0x1c96 PushV
	var_3146_int = 15; // 0x1c97 MovI
	var_3147_bool = 1; // 0x1c98 MovB
	func_746(var_3146_int, var_3147_bool); // 0x1c99 NEW_2
	var_3148_int = 0; var_3149_bool = 0; var_3150_int = 0; // 0x1c9b PushV
	var_3148_int = 15; // 0x1c9c MovI
	var_3149_bool = 1; // 0x1c9d MovB
	var_3150_int = 1; // 0x1c9e MovI
	func_763(var_3148_int, var_3149_bool, var_3150_int); // 0x1c9f NEW_2
	var_3151_int = 0; var_3152_int = 0; var_3153_object = Obj(); var_3154_object = Obj(); var_3155_object = Obj(); // 0x1ca1 PushV
	var_3151_int = 15; // 0x1ca2 MovI
	var_3152_int = var_3138_int; // 0x1ca3 Mov
	var_3153_object = var_3140_object; // 0x1ca4 Mov
	var_3154_object = var_3141_object; // 0x1ca5 Mov
	var_3155_object = var_3142_object; // 0x1ca6 Mov
	func_591(var_3151_int, var_3152_int, var_3153_object, var_3154_object, var_3155_object); // 0x1ca7 NEW_2
	var_3156_object = Obj(); var_3157_int = 0; // 0x1ca9 PushV
	var_3156_object = var_3143_object; // 0x1caa Mov
	var_3157_int = 1; // 0x1cab MovI
	func_255(var_3157_int); // 0x1cac NEW_2
	var_3158_int = 0; var_3159_bool = 0; var_3160_int = 0; // 0x1cae PushV
	var_3158_int = 15; // 0x1caf MovI
	var_3159_bool = 1; // 0x1cb0 MovB
	var_3160_int = 5; // 0x1cb1 MovI
	func_820(var_3158_int, var_3159_bool, var_3160_int); // 0x1cb2 NEW_2
	var_3161_int = 0; var_3162_bool = 0; var_3163_int = 0; // 0x1cb4 PushV
	var_3161_int = 15; // 0x1cb5 MovI
	var_3162_bool = 0; // 0x1cb6 MovB
	var_3163_int = 5; // 0x1cb7 MovI
	func_882(var_3161_int, var_3162_bool, var_3163_int); // 0x1cb8 NEW_2
	
Label_7354:
	var_3164_int = 0; var_3165_bool = 0; // 0x1cba PushV
	var_3164_int = 15; // 0x1cbb MovI
	var_3165_bool = 0; // 0x1cbc MovB
	func_729(var_3164_int, var_3165_bool); // 0x1cbd NEW_2
	var_3166_int = 0; var_3167_int = 0; var_3168_int = 0; // 0x1cbf PushV
	var_3166_int = 15; // 0x1cc0 MovI
	var_3167_int = var_3138_int; // 0x1cc1 Mov
	var_3168_int = var_3139_int; // 0x1cc2 Mov
	func_2534(var_3166_int, var_3167_int, var_3168_int); // 0x1cc3 NEW_2
	return 0; // 0x1cc5 Return
}


func_10388(var_5199_int, var_5200_float)
{
	var_5201_int = 0; var_5202_int = 0; var_5203_int = 0; var_5204_float = 0; // 0x2895 PushV
	var_5202_int = 529880; // 0x2896 MovI
	var_5203_int = 529879; // 0x2897 MovI
	var_5204_float = var_5200_float; // 0x2898 Mov
	func_12278(var_5201_int, var_5202_int, var_5203_int, var_5204_float); // 0x2899 NEW_2
	var_5199_int = var_5201_int; // 0x289a Mov
	return 0; // 0x289c Return
}


func_11412()
{
	var_5035_object = Obj(); var_5036_object = Obj(); var_5037_object = Obj(); var_5038_object = Obj(); // 0x2c94 PushV
	var_5039_object = Obj(); // 0x2c95 PushV
	func_12286(var_5039_object); // 0x2c96 NEW_2
	var_5037_object = var_5039_object; // 0x2c97 Mov
	var_5040_string = "b11q04NotkinGotoSanitar"; // 0x2c99 PushS
	FindMark(var_5038_object, var_5040_string); // 0x2c9a ObjFunc
	var_5041_object = var_5038_object; // 0x2c9c Push
	if(var_5041_object == 0) goto Label_11424; // 0x2c9d JumpB
	Remove(); // 0x2c9e ObjFunc
	
Label_11424:
	var_5042_string = "b11q04SanitarGotoOfficer"; // 0x2ca0 PushS
	FindMark(var_5038_object, var_5042_string); // 0x2ca1 ObjFunc
	var_5043_object = var_5038_object; // 0x2ca3 Push
	if(var_5043_object == 0) goto Label_11431; // 0x2ca4 JumpB
	Remove(); // 0x2ca5 ObjFunc
	
Label_11431:
	var_5044_bool = 0; var_5045_int = 0; // 0x2ca7 PushV
	var_5045_int = 313; // 0x2ca8 MovI
	func_12261(var_5044_bool, var_5045_int); // 0x2ca9 NEW_2
	var_5046_bool = 0; var_5047_int = 0; // 0x2cab PushV
	var_5047_int = 551; // 0x2cac MovI
	func_12261(var_5046_bool, var_5047_int); // 0x2cad NEW_2
	var_5048_bool = 0; var_5049_int = 0; // 0x2caf PushV
	var_5049_int = 598; // 0x2cb0 MovI
	func_12261(var_5048_bool, var_5049_int); // 0x2cb1 NEW_2
	return 4; // 0x2cb3 Return
}


func_151(var_4783_string, var_4784_bool)
{
	var_4785_object = Obj(); var_4786_object = Obj(); // 0x97 PushV
	FindActor(var_4786_object, var_4783_string); // 0x98 Func
	var_4787_bool = var_4786_object == 0; // 0x9a Not
	if(var_4787_bool == 0) goto Label_163; // 0x9b JumpB
	var_4788_string = "Door "; // 0x9c PushS
	var_4789_int = var_4788_string + var_4783_string; // 0x9d Add
	var_4790_string = " not found"; // 0x9e PushS
	var_4791_int = var_4789_int + var_4790_string; // 0x9f Add
	Trace(var_4791_int); // 0xa0 Func
	goto Label_166; // 0xa2 Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_163:
	var_4792_string = "locked"; // 0xa3 PushS
	SetProperty(var_4792_string, var_4784_bool); // 0xa4 ObjFunc
}


func_10397(var_5354_int, var_5355_float)
{
	var_5356_int = 0; var_5357_int = 0; var_5358_int = 0; var_5359_float = 0; // 0x289e PushV
	var_5357_int = 529882; // 0x289f MovI
	var_5358_int = 529881; // 0x28a0 MovI
	var_5359_float = var_5355_float; // 0x28a1 Mov
	func_12278(var_5356_int, var_5357_int, var_5358_int, var_5359_float); // 0x28a2 NEW_2
	var_5354_int = var_5356_int; // 0x28a3 Mov
	return 0; // 0x28a5 Return
}


func_10406(var_5689_int, var_5690_float)
{
	var_5691_int = 0; var_5692_int = 0; var_5693_int = 0; var_5694_float = 0; // 0x28a7 PushV
	var_5692_int = 531549; // 0x28a8 MovI
	var_5693_int = 531548; // 0x28a9 MovI
	var_5694_float = var_5690_float; // 0x28aa Mov
	func_12278(var_5691_int, var_5692_int, var_5693_int, var_5694_float); // 0x28ab NEW_2
	var_5689_int = var_5691_int; // 0x28ac Mov
	return 0; // 0x28ae Return
}


func_168(var_4815_string, var_4816_bool)
{
	var_4817_object = Obj(); var_4818_object = Obj(); // 0xa8 PushV
	FindActor(var_4818_object, var_4815_string); // 0xa9 Func
	var_4819_bool = var_4818_object == 0; // 0xab Not
	if(var_4819_bool == 0) goto Label_180; // 0xac JumpB
	var_4820_string = "Door "; // 0xad PushS
	var_4821_int = var_4820_string + var_4815_string; // 0xae Add
	var_4822_string = " not found"; // 0xaf PushS
	var_4823_int = var_4821_int + var_4822_string; // 0xb0 Add
	Trace(var_4823_int); // 0xb1 Func
	goto Label_187; // 0xb3 Jump
	
Label_187:
	return 2; // 0xbb Return
	
Label_180:
	var_4824_bool = var_4816_bool; // 0xb4 Push
	if(var_4824_bool == 0) goto Label_184; // 0xb5 JumpB
	Close(); // 0xb6 ObjFunc
	
Label_184:
	var_4825_string = "locked"; // 0xb8 PushS
	SetProperty(var_4825_string, var_4816_bool); // 0xb9 ObjFunc
}


func_5292(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object)
{
	var_3718_int = 0; // 0x14ad PushI
	var_3719_bool = var_3713_int == var_3718_int; // 0x14ae Eq
	if(var_3719_bool == 0) goto Label_5332; // 0x14af JumpB
	var_3720_int = 0; var_3721_bool = 0; // 0x14b0 PushV
	var_3720_int = 4; // 0x14b1 MovI
	var_3721_bool = 0; // 0x14b2 MovB
	func_746(var_3720_int, var_3721_bool); // 0x14b3 NEW_2
	var_3722_int = 0; var_3723_bool = 0; var_3724_int = 0; // 0x14b5 PushV
	var_3722_int = 4; // 0x14b6 MovI
	var_3723_bool = 0; // 0x14b7 MovB
	var_3724_int = 1; // 0x14b8 MovI
	func_763(var_3722_int, var_3723_bool, var_3724_int); // 0x14b9 NEW_2
	var_3725_int = 0; var_3726_int = 0; var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj(); // 0x14bb PushV
	var_3725_int = 4; // 0x14bc MovI
	var_3726_int = var_3712_int; // 0x14bd Mov
	var_3727_object = var_3714_object; // 0x14be Mov
	var_3728_object = var_3715_object; // 0x14bf Mov
	var_3729_object = var_3716_object; // 0x14c0 Mov
	func_670(var_3725_int, var_3726_int, var_3727_object, var_3728_object, var_3729_object); // 0x14c1 NEW_2
	var_3730_object = Obj(); var_3731_int = 0; // 0x14c3 PushV
	var_3730_object = var_3717_object; // 0x14c4 Mov
	var_3731_int = 2; // 0x14c5 MovI
	func_255(var_3731_int); // 0x14c6 NEW_2
	var_3732_int = 0; var_3733_bool = 0; var_3734_int = 0; // 0x14c8 PushV
	var_3732_int = 4; // 0x14c9 MovI
	var_3733_bool = 0; // 0x14ca MovB
	var_3734_int = 4; // 0x14cb MovI
	func_820(var_3732_int, var_3733_bool, var_3734_int); // 0x14cc NEW_2
	var_3735_int = 0; var_3736_bool = 0; var_3737_int = 0; // 0x14ce PushV
	var_3735_int = 4; // 0x14cf MovI
	var_3736_bool = 1; // 0x14d0 MovB
	var_3737_int = 4; // 0x14d1 MovI
	func_882(var_3735_int, var_3736_bool, var_3737_int); // 0x14d2 NEW_2
	
Label_5332:
	var_3738_int = 0; var_3739_bool = 0; // 0x14d4 PushV
	var_3738_int = 4; // 0x14d5 MovI
	var_3739_bool = 0; // 0x14d6 MovB
	func_729(var_3738_int, var_3739_bool); // 0x14d7 NEW_2
	var_3740_int = 0; var_3741_int = 0; var_3742_int = 0; // 0x14d9 PushV
	var_3740_int = 4; // 0x14da MovI
	var_3741_int = var_3712_int; // 0x14db Mov
	var_3742_int = var_3713_int; // 0x14dc Mov
	func_3797(var_3740_int, var_3741_int, var_3742_int); // 0x14dd NEW_2
	return 0; // 0x14df Return
}


func_10415(var_5346_int, var_5347_float)
{
	var_5348_int = 0; var_5349_int = 0; var_5350_int = 0; var_5351_float = 0; // 0x28b0 PushV
	var_5349_int = 529884; // 0x28b1 MovI
	var_5350_int = 529883; // 0x28b2 MovI
	var_5351_float = var_5347_float; // 0x28b3 Mov
	func_12278(var_5348_int, var_5349_int, var_5350_int, var_5351_float); // 0x28b4 NEW_2
	var_5346_int = var_5348_int; // 0x28b5 Mov
	return 0; // 0x28b7 Return
}


func_6320(var_2867_int, var_2868_int, var_2869_object, var_2870_object, var_2871_object, var_2872_object)
{
	var_2873_int = 0; // 0x18b1 PushI
	var_2874_bool = var_2868_int == var_2873_int; // 0x18b2 Eq
	if(var_2874_bool == 0) goto Label_6360; // 0x18b3 JumpB
	var_2875_int = 0; var_2876_bool = 0; // 0x18b4 PushV
	var_2875_int = 10; // 0x18b5 MovI
	var_2876_bool = 1; // 0x18b6 MovB
	func_746(var_2875_int, var_2876_bool); // 0x18b7 NEW_2
	var_2877_int = 0; var_2878_bool = 0; var_2879_int = 0; // 0x18b9 PushV
	var_2877_int = 10; // 0x18ba MovI
	var_2878_bool = 1; // 0x18bb MovB
	var_2879_int = 1; // 0x18bc MovI
	func_763(var_2877_int, var_2878_bool, var_2879_int); // 0x18bd NEW_2
	var_2880_int = 0; var_2881_int = 0; var_2882_object = Obj(); var_2883_object = Obj(); var_2884_object = Obj(); // 0x18bf PushV
	var_2880_int = 10; // 0x18c0 MovI
	var_2881_int = var_2867_int; // 0x18c1 Mov
	var_2882_object = var_2869_object; // 0x18c2 Mov
	var_2883_object = var_2870_object; // 0x18c3 Mov
	var_2884_object = var_2871_object; // 0x18c4 Mov
	func_591(var_2880_int, var_2881_int, var_2882_object, var_2883_object, var_2884_object); // 0x18c5 NEW_2
	var_2885_object = Obj(); var_2886_int = 0; // 0x18c7 PushV
	var_2885_object = var_2872_object; // 0x18c8 Mov
	var_2886_int = 1; // 0x18c9 MovI
	func_255(var_2886_int); // 0x18ca NEW_2
	var_2887_int = 0; var_2888_bool = 0; var_2889_int = 0; // 0x18cc PushV
	var_2887_int = 10; // 0x18cd MovI
	var_2888_bool = 1; // 0x18ce MovB
	var_2889_int = 7; // 0x18cf MovI
	func_820(var_2887_int, var_2888_bool, var_2889_int); // 0x18d0 NEW_2
	var_2890_int = 0; var_2891_bool = 0; var_2892_int = 0; // 0x18d2 PushV
	var_2890_int = 10; // 0x18d3 MovI
	var_2891_bool = 0; // 0x18d4 MovB
	var_2892_int = 7; // 0x18d5 MovI
	func_882(var_2890_int, var_2891_bool, var_2892_int); // 0x18d6 NEW_2
	
Label_6360:
	var_2893_int = 0; var_2894_bool = 0; // 0x18d8 PushV
	var_2893_int = 10; // 0x18d9 MovI
	var_2894_bool = 0; // 0x18da MovB
	func_729(var_2893_int, var_2894_bool); // 0x18db NEW_2
	var_2895_int = 0; var_2896_int = 0; var_2897_int = 0; // 0x18dd PushV
	var_2895_int = 10; // 0x18de MovI
	var_2896_int = var_2867_int; // 0x18df Mov
	var_2897_int = var_2868_int; // 0x18e0 Mov
	func_2714(var_2895_int, var_2896_int, var_2897_int); // 0x18e1 NEW_2
	return 0; // 0x18e3 Return
}


func_14516(var_5393_bool, var_5394_int)
{
	var_5395_int = 18; // 0x38b5 PushI
	add(var_5395_int); // 0x38b6 ObjFunc
	var_5396_int = 24; // 0x38b8 PushI
	add(var_5396_int); // 0x38b9 ObjFunc
	var_5397_int = 20; // 0x38bb PushI
	add(var_5397_int); // 0x38bc ObjFunc
	var_5398_int = 14; // 0x38be PushI
	add(var_5398_int); // 0x38bf ObjFunc
	var_5399_bool = 0; // 0x38c1 PushB
	var_5400_bool = var_5393_bool == var_5399_bool; // 0x38c2 Eq
	if(var_5400_bool == 0) goto Label_14542; // 0x38c3 JumpB
	var_5401_int = 10; // 0x38c4 PushI
	add(var_5401_int); // 0x38c5 ObjFunc
	var_5402_int = 17; // 0x38c7 PushI
	add(var_5402_int); // 0x38c8 ObjFunc
	var_5403_int = 8; // 0x38ca PushI
	add(var_5403_int); // 0x38cb ObjFunc
	goto Label_14548; // 0x38cd Jump
	
Label_14548:
	return 0; // 0x38d4 Return
	
Label_14542:
	var_5404_int = 1; // 0x38ce PushI
	var_5405_bool = var_5394_int != var_5404_int; // 0x38cf Neq
	if(var_5405_bool == 0) goto Label_14548; // 0x38d0 JumpB
	var_5406_int = 10; // 0x38d1 PushI
	add(var_5406_int); // 0x38d2 ObjFunc
}


func_1205(var_2157_float, var_2158_int)
{
	var_2159_int = 1; // 0x4b6 PushI
	var_2160_int = var_2158_int + var_2159_int; // 0x4b7 Add
	var_2161_int = 1; // 0x4b8 PushI
	var_2162_bool = var_2160_int == var_2161_int; // 0x4b9 Eq
	if(var_2162_bool == 0) goto Label_1214; // 0x4ba JumpB
	var_2157_float = 0; // 0x4bb MovI
	return 0; // 0x4bc Return
	
Label_1214:
	var_2163_int = 1; // 0x4be PushI
	var_2164_int = var_2158_int + var_2163_int; // 0x4bf Add
	var_2165_int = 2; // 0x4c0 PushI
	var_2166_bool = var_2164_int == var_2165_int; // 0x4c1 Eq
	if(var_2166_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_2157_float = 0; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1222:
	var_2167_int = 1; // 0x4c6 PushI
	var_2168_int = var_2158_int + var_2167_int; // 0x4c7 Add
	var_2169_int = 3; // 0x4c8 PushI
	var_2170_bool = var_2168_int == var_2169_int; // 0x4c9 Eq
	if(var_2170_bool == 0) goto Label_1230; // 0x4ca JumpB
	var_2157_float = 0; // 0x4cb MovI
	return 0; // 0x4cc Return
	
Label_1230:
	var_2171_int = 1; // 0x4ce PushI
	var_2172_int = var_2158_int + var_2171_int; // 0x4cf Add
	var_2173_int = 4; // 0x4d0 PushI
	var_2174_bool = var_2172_int == var_2173_int; // 0x4d1 Eq
	if(var_2174_bool == 0) goto Label_1238; // 0x4d2 JumpB
	var_2157_float = 0; // 0x4d3 MovI
	return 0; // 0x4d4 Return
	
Label_1238:
	var_2175_int = 1; // 0x4d6 PushI
	var_2176_int = var_2158_int + var_2175_int; // 0x4d7 Add
	var_2177_int = 5; // 0x4d8 PushI
	var_2178_bool = var_2176_int == var_2177_int; // 0x4d9 Eq
	if(var_2178_bool == 0) goto Label_1246; // 0x4da JumpB
	var_2157_float = 0; // 0x4db MovI
	return 0; // 0x4dc Return
	
Label_1246:
	var_2179_int = 1; // 0x4de PushI
	var_2180_int = var_2158_int + var_2179_int; // 0x4df Add
	var_2181_int = 6; // 0x4e0 PushI
	var_2182_bool = var_2180_int == var_2181_int; // 0x4e1 Eq
	if(var_2182_bool == 0) goto Label_1254; // 0x4e2 JumpB
	var_2157_float = 2; // 0x4e3 MovI
	return 0; // 0x4e4 Return
	
Label_1254:
	var_2183_int = 1; // 0x4e6 PushI
	var_2184_int = var_2158_int + var_2183_int; // 0x4e7 Add
	var_2185_int = 7; // 0x4e8 PushI
	var_2186_bool = var_2184_int == var_2185_int; // 0x4e9 Eq
	if(var_2186_bool == 0) goto Label_1262; // 0x4ea JumpB
	var_2157_float = 1; // 0x4eb MovI
	return 0; // 0x4ec Return
	
Label_1262:
	var_2187_int = 1; // 0x4ee PushI
	var_2188_int = var_2158_int + var_2187_int; // 0x4ef Add
	var_2189_int = 8; // 0x4f0 PushI
	var_2190_bool = var_2188_int == var_2189_int; // 0x4f1 Eq
	if(var_2190_bool == 0) goto Label_1270; // 0x4f2 JumpB
	var_2157_float = 1; // 0x4f3 MovI
	return 0; // 0x4f4 Return
	
Label_1270:
	var_2191_int = 1; // 0x4f6 PushI
	var_2192_int = var_2158_int + var_2191_int; // 0x4f7 Add
	var_2193_int = 9; // 0x4f8 PushI
	var_2194_bool = var_2192_int == var_2193_int; // 0x4f9 Eq
	if(var_2194_bool == 0) goto Label_1278; // 0x4fa JumpB
	var_2157_float = 1; // 0x4fb MovI
	return 0; // 0x4fc Return
	
Label_1278:
	var_2195_int = 1; // 0x4fe PushI
	var_2196_int = var_2158_int + var_2195_int; // 0x4ff Add
	var_2197_int = 10; // 0x500 PushI
	var_2198_bool = var_2196_int == var_2197_int; // 0x501 Eq
	if(var_2198_bool == 0) goto Label_1286; // 0x502 JumpB
	var_2157_float = 1; // 0x503 MovI
	return 0; // 0x504 Return
	
Label_1286:
	var_2199_int = 1; // 0x506 PushI
	var_2200_int = var_2158_int + var_2199_int; // 0x507 Add
	var_2201_int = 11; // 0x508 PushI
	var_2202_bool = var_2200_int == var_2201_int; // 0x509 Eq
	if(var_2202_bool == 0) goto Label_1293; // 0x50a JumpB
	var_2157_float = 1; // 0x50b MovI
	return 0; // 0x50c Return
	
Label_1293:
	var_2157_float = 0; // 0x50d MovI
	return 0; // 0x50e Return
}


func_3254(var_2303_int, var_2304_int, var_2305_int)
{
	var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; var_2309_int = 0; // 0xcb6 PushV
	var_2310_bool = 0; // 0xcb7 PushV
	var_2310_bool = 0; // 0xcb8 MovB
	var_2311_int = 8; // 0xcb9 PushI
	var_2312_bool = var_2305_int > var_2311_int; // 0xcba GT
	if(var_2312_bool == 0) goto Label_3264; // 0xcbb JumpB
	var_2313_int = 21; // 0xcbc PushI
	var_2314_bool = var_2305_int < var_2313_int; // 0xcbd LT
	if(var_2314_bool == 0) goto Label_3264; // 0xcbe JumpB
	var_2310_bool = 1; // 0xcbf MovB
	
Label_3264:
	if(var_2310_bool == 0) goto Label_3319; // 0xcc0 JumpB
	var_2315_int = 0; var_2316_string = ""; var_2317_string = ""; var_2318_int = 0; // 0xcc1 PushV
	var_2315_int = var_2303_int; // 0xcc2 Mov
	var_2316_string = "pers_vaxxabit"; // 0xcc3 MovS
	var_2317_string = "vaxxabit_d.xml"; // 0xcc4 MovS
	var_2318_int = 7; // 0xcc5 MovI
	func_453(var_2315_int, var_2316_string, var_2317_string, var_2318_int); // 0xcc6 NEW_2
	var_2319_int = 0; var_2320_string = ""; var_2321_string = ""; var_2322_int = 0; // 0xcc8 PushV
	var_2319_int = var_2303_int; // 0xcc9 Mov
	var_2320_string = "pers_vaxxabitka"; // 0xcca MovS
	var_2321_string = "vaxxabitka_d.xml"; // 0xccb MovS
	var_2322_int = 7; // 0xccc MovI
	func_453(var_2319_int, var_2320_string, var_2321_string, var_2322_int); // 0xccd NEW_2
	var_2323_int = 0; var_2324_string = ""; var_2325_string = ""; var_2326_int = 0; // 0xccf PushV
	var_2323_int = var_2303_int; // 0xcd0 Mov
	var_2324_string = "pers_rat_big"; // 0xcd1 MovS
	var_2325_string = "rat_big.xml"; // 0xcd2 MovS
	var_2326_int = 3; // 0xcd3 MovI
	func_453(var_2323_int, var_2324_string, var_2325_string, var_2326_int); // 0xcd4 NEW_2
	var_2327_int = 0; var_2328_string = ""; var_2329_string = ""; var_2330_int = 0; // 0xcd6 PushV
	var_2327_int = var_2303_int; // 0xcd7 Mov
	var_2328_string = "fog"; // 0xcd8 MovS
	var_2329_string = "fog.xml"; // 0xcd9 MovS
	var_2330_int = 7; // 0xcda MovI
	func_479(var_2327_int, var_2328_string, var_2329_string, var_2330_int); // 0xcdb NEW_2
	var_2331_int = 5; // 0xcdd PushI
	var_2332_bool = var_2304_int >= var_2331_int; // 0xcde GE
	if(var_2332_bool == 0) goto Label_3303; // 0xcdf JumpB
	var_2333_int = 0; var_2334_string = ""; var_2335_string = ""; var_2336_int = 0; // 0xce0 PushV
	var_2333_int = var_2303_int; // 0xce1 Mov
	var_2334_string = "fog"; // 0xce2 MovS
	var_2335_string = "fog_hunter.xml"; // 0xce3 MovS
	var_2336_int = 3; // 0xce4 MovI
	func_479(var_2333_int, var_2334_string, var_2335_string, var_2336_int); // 0xce5 NEW_2
	
Label_3303:
	var_2337_int = 2; // 0xce7 PushI
	var_2338_float = 0; var_2339_int = 0; // 0xce8 PushV
	var_2339_int = var_2304_int; // 0xce9 Mov
	func_1205(var_2338_float, var_2339_int); // 0xcea NEW_2
	var_2308_int = var_2337_int * var_2338_float; // 0xcec Mult2
	var_2340_int = var_2308_int; // 0xced Push
	if(var_2340_int == 0) goto Label_3318; // 0xcee JumpB
	var_2341_int = 0; var_2342_string = ""; var_2343_string = ""; var_2344_int = 0; // 0xcef PushV
	var_2341_int = var_2303_int; // 0xcf0 Mov
	var_2342_string = "pers_bomber"; // 0xcf1 MovS
	var_2343_string = "bomber.xml"; // 0xcf2 MovS
	var_2344_int = var_2308_int; // 0xcf3 Mov
	func_453(var_2341_int, var_2342_string, var_2343_string, var_2344_int); // 0xcf4 NEW_2
	
Label_3318:
	goto Label_3372; // 0xcf6 Jump
	
Label_3372:
	var_2345_bool = 0; var_2346_int = 0; // 0xd2c PushV
	var_2346_int = var_2304_int; // 0xd2d Mov
	func_1322(var_2345_bool, var_2346_int); // 0xd2e NEW_2
	if(var_2345_bool == 0) goto Label_3384; // 0xd30 JumpB
	var_2347_int = 0; var_2348_string = ""; var_2349_string = ""; var_2350_int = 0; // 0xd31 PushV
	var_2347_int = var_2303_int; // 0xd32 Mov
	var_2348_string = "pers_sanitar"; // 0xd33 MovS
	var_2349_string = "sanitar.xml"; // 0xd34 MovS
	var_2350_int = 2; // 0xd35 MovI
	func_453(var_2347_int, var_2348_string, var_2349_string, var_2350_int); // 0xd36 NEW_2
	
Label_3384:
	var_2351_int = 0; var_2352_string = ""; var_2353_string = ""; var_2354_int = 0; var_2355_int = 0; var_2356_int = 0; // 0xd38 PushV
	var_2351_int = var_2303_int; // 0xd39 Mov
	var_2352_string = "pers_worker"; // 0xd3a MovS
	var_2353_string = "agony1_man.xml"; // 0xd3b MovS
	var_2354_int = 2; // 0xd3c MovI
	var_2355_int = 4; // 0xd3d MovI
	var_2356_int = 4; // 0xd3e MovI
	func_466(var_2351_int, var_2352_string, var_2353_string, var_2354_int, var_2355_int, var_2356_int); // 0xd3f NEW_2
	var_2357_int = 0; var_2358_string = ""; var_2359_string = ""; var_2360_int = 0; var_2361_int = 0; var_2362_int = 0; // 0xd41 PushV
	var_2357_int = var_2303_int; // 0xd42 Mov
	var_2358_string = "pers_unosha"; // 0xd43 MovS
	var_2359_string = "agony1_man.xml"; // 0xd44 MovS
	var_2360_int = 2; // 0xd45 MovI
	var_2361_int = 4; // 0xd46 MovI
	var_2362_int = 4; // 0xd47 MovI
	func_466(var_2357_int, var_2358_string, var_2359_string, var_2360_int, var_2361_int, var_2362_int); // 0xd48 NEW_2
	var_2363_int = 0; var_2364_string = ""; var_2365_string = ""; var_2366_int = 0; var_2367_int = 0; var_2368_int = 0; // 0xd4a PushV
	var_2363_int = var_2303_int; // 0xd4b Mov
	var_2364_string = "pers_woman"; // 0xd4c MovS
	var_2365_string = "agony1_woman.xml"; // 0xd4d MovS
	var_2366_int = 2; // 0xd4e MovI
	var_2367_int = 4; // 0xd4f MovI
	var_2368_int = 4; // 0xd50 MovI
	func_466(var_2363_int, var_2364_string, var_2365_string, var_2366_int, var_2367_int, var_2368_int); // 0xd51 NEW_2
	var_2369_int = 0; var_2370_string = ""; var_2371_string = ""; var_2372_int = 0; var_2373_int = 0; var_2374_int = 0; // 0xd53 PushV
	var_2369_int = var_2303_int; // 0xd54 Mov
	var_2370_string = "pers_wasted_girl"; // 0xd55 MovS
	var_2371_string = "agony1_woman.xml"; // 0xd56 MovS
	var_2372_int = 2; // 0xd57 MovI
	var_2373_int = 4; // 0xd58 MovI
	var_2374_int = 4; // 0xd59 MovI
	func_466(var_2369_int, var_2370_string, var_2371_string, var_2372_int, var_2373_int, var_2374_int); // 0xd5a NEW_2
	return 4; // 0xd5c Return
	
Label_3319:
	var_2375_int = 0; var_2376_string = ""; var_2377_string = ""; var_2378_int = 0; // 0xcf7 PushV
	var_2375_int = var_2303_int; // 0xcf8 Mov
	var_2376_string = "pers_vaxxabit"; // 0xcf9 MovS
	var_2377_string = "vaxxabit_d.xml"; // 0xcfa MovS
	var_2378_int = 5; // 0xcfb MovI
	func_453(var_2375_int, var_2376_string, var_2377_string, var_2378_int); // 0xcfc NEW_2
	var_2379_int = 0; var_2380_string = ""; var_2381_string = ""; var_2382_int = 0; // 0xcfe PushV
	var_2379_int = var_2303_int; // 0xcff Mov
	var_2380_string = "pers_vaxxabitka"; // 0xd00 MovS
	var_2381_string = "vaxxabitka_d.xml"; // 0xd01 MovS
	var_2382_int = 5; // 0xd02 MovI
	func_453(var_2379_int, var_2380_string, var_2381_string, var_2382_int); // 0xd03 NEW_2
	var_2383_int = 0; var_2384_string = ""; var_2385_string = ""; var_2386_int = 0; // 0xd05 PushV
	var_2383_int = var_2303_int; // 0xd06 Mov
	var_2384_string = "pers_rat_big"; // 0xd07 MovS
	var_2385_string = "rat_big.xml"; // 0xd08 MovS
	var_2386_int = 4; // 0xd09 MovI
	func_453(var_2383_int, var_2384_string, var_2385_string, var_2386_int); // 0xd0a NEW_2
	var_2387_int = 0; var_2388_string = ""; var_2389_string = ""; var_2390_int = 0; // 0xd0c PushV
	var_2387_int = var_2303_int; // 0xd0d Mov
	var_2388_string = "fog"; // 0xd0e MovS
	var_2389_string = "fog.xml"; // 0xd0f MovS
	var_2390_int = 7; // 0xd10 MovI
	func_479(var_2387_int, var_2388_string, var_2389_string, var_2390_int); // 0xd11 NEW_2
	var_2391_int = 5; // 0xd13 PushI
	var_2392_bool = var_2304_int >= var_2391_int; // 0xd14 GE
	if(var_2392_bool == 0) goto Label_3357; // 0xd15 JumpB
	var_2393_int = 0; var_2394_string = ""; var_2395_string = ""; var_2396_int = 0; // 0xd16 PushV
	var_2393_int = var_2303_int; // 0xd17 Mov
	var_2394_string = "fog"; // 0xd18 MovS
	var_2395_string = "fog_hunter.xml"; // 0xd19 MovS
	var_2396_int = 3; // 0xd1a MovI
	func_479(var_2393_int, var_2394_string, var_2395_string, var_2396_int); // 0xd1b NEW_2
	
Label_3357:
	var_2397_int = 2; // 0xd1d PushI
	var_2398_float = 0; var_2399_int = 0; // 0xd1e PushV
	var_2399_int = var_2304_int; // 0xd1f Mov
	func_1205(var_2398_float, var_2399_int); // 0xd20 NEW_2
	var_2309_int = var_2397_int * var_2398_float; // 0xd22 Mult2
	var_2400_int = var_2309_int; // 0xd23 Push
	if(var_2400_int == 0) goto Label_3372; // 0xd24 JumpB
	var_2401_int = 0; var_2402_string = ""; var_2403_string = ""; var_2404_int = 0; // 0xd25 PushV
	var_2401_int = var_2303_int; // 0xd26 Mov
	var_2402_string = "pers_bomber"; // 0xd27 MovS
	var_2403_string = "bomber.xml"; // 0xd28 MovS
	var_2404_int = var_2309_int; // 0xd29 Mov
	func_453(var_2401_int, var_2402_string, var_2403_string, var_2404_int); // 0xd2a NEW_2
}


func_11446()
{
	func_12181(); // 0x2cb8 NEW_2
	return 0; // 0x2cba Return
}


func_10424(var_5923_int, var_5924_float)
{
	var_5925_int = 0; var_5926_int = 0; var_5927_int = 0; var_5928_float = 0; // 0x28b9 PushV
	var_5926_int = 530276; // 0x28ba MovI
	var_5927_int = 530275; // 0x28bb MovI
	var_5928_float = var_5924_float; // 0x28bc Mov
	func_12278(var_5925_int, var_5926_int, var_5927_int, var_5928_float); // 0x28bd NEW_2
	var_5923_int = var_5925_int; // 0x28be Mov
	return 0; // 0x28c0 Return
}


func_11451()
{
	var_4904_int = 0; var_4905_string = ""; // 0x2cbc PushV
	var_4905_string = "B_Mission3"; // 0x2cbd MovS
	func_106(var_4904_int, var_4905_string); // 0x2cbe NEW_2
	var_4906_int = 0; // 0x2cc0 PushI
	var_4907_bool = var_4904_int == var_4906_int; // 0x2cc1 Eq
	if(var_4907_bool == 0) goto Label_11474; // 0x2cc2 JumpB
	var_4908_string = "B_Mission3"; // 0x2cc3 PushS
	var_4909_int = 1; // 0x2cc4 PushI
	SetVariable(var_4908_string, var_4909_int); // 0x2cc5 Func
	func_12194(); // 0x2cc8 NEW_2
	var_4929_bool = 0; var_4930_int = 0; // 0x2cca PushV
	var_4930_int = 562; // 0x2ccb MovI
	func_12261(var_4929_bool, var_4930_int); // 0x2ccc NEW_2
	var_4931_bool = 0; var_4932_int = 0; // 0x2cce PushV
	var_4932_int = 563; // 0x2ccf MovI
	func_12261(var_4931_bool, var_4932_int); // 0x2cd0 NEW_2
	
Label_11474:
	return 0; // 0x2cd2 Return
}


func_189(var_672_bool, var_673_string, var_674_string)
{
	var_675_object = Obj(); var_676_object = Obj(); // 0xbd PushV
	FindActor(var_676_object, var_673_string); // 0xbe Func
	var_677_bool = var_676_object == 0; // 0xc0 NullEq
	if(var_677_bool == 0) goto Label_196; // 0xc1 JumpB
	var_672_bool = 0; // 0xc2 MovB
	return 2; // 0xc3 Return
	
Label_196:
	Trigger(var_676_object, var_674_string); // 0xc4 Func
	var_672_bool = 1; // 0xc6 MovB
	return 2; // 0xc7 Return
}


func_10433(var_5801_int, var_5802_float)
{
	var_5803_int = 0; var_5804_int = 0; var_5805_int = 0; var_5806_float = 0; // 0x28c2 PushV
	var_5804_int = 533054; // 0x28c3 MovI
	var_5805_int = 533053; // 0x28c4 MovI
	var_5806_float = var_5802_float; // 0x28c5 Mov
	func_12278(var_5803_int, var_5804_int, var_5805_int, var_5806_float); // 0x28c6 NEW_2
	var_5801_int = var_5803_int; // 0x28c7 Mov
	return 0; // 0x28c9 Return
}


func_7366(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object)
{
	var_4278_int = 0; // 0x1cc7 PushI
	var_4279_bool = var_4273_int == var_4278_int; // 0x1cc8 Eq
	if(var_4279_bool == 0) goto Label_7406; // 0x1cc9 JumpB
	var_4280_int = 0; var_4281_bool = 0; // 0x1cca PushV
	var_4280_int = 15; // 0x1ccb MovI
	var_4281_bool = 0; // 0x1ccc MovB
	func_746(var_4280_int, var_4281_bool); // 0x1ccd NEW_2
	var_4282_int = 0; var_4283_bool = 0; var_4284_int = 0; // 0x1ccf PushV
	var_4282_int = 15; // 0x1cd0 MovI
	var_4283_bool = 0; // 0x1cd1 MovB
	var_4284_int = 1; // 0x1cd2 MovI
	func_763(var_4282_int, var_4283_bool, var_4284_int); // 0x1cd3 NEW_2
	var_4285_int = 0; var_4286_int = 0; var_4287_object = Obj(); var_4288_object = Obj(); var_4289_object = Obj(); // 0x1cd5 PushV
	var_4285_int = 15; // 0x1cd6 MovI
	var_4286_int = var_4272_int; // 0x1cd7 Mov
	var_4287_object = var_4274_object; // 0x1cd8 Mov
	var_4288_object = var_4275_object; // 0x1cd9 Mov
	var_4289_object = var_4276_object; // 0x1cda Mov
	func_670(var_4285_int, var_4286_int, var_4287_object, var_4288_object, var_4289_object); // 0x1cdb NEW_2
	var_4290_object = Obj(); var_4291_int = 0; // 0x1cdd PushV
	var_4290_object = var_4277_object; // 0x1cde Mov
	var_4291_int = 2; // 0x1cdf MovI
	func_255(var_4291_int); // 0x1ce0 NEW_2
	var_4292_int = 0; var_4293_bool = 0; var_4294_int = 0; // 0x1ce2 PushV
	var_4292_int = 15; // 0x1ce3 MovI
	var_4293_bool = 0; // 0x1ce4 MovB
	var_4294_int = 5; // 0x1ce5 MovI
	func_820(var_4292_int, var_4293_bool, var_4294_int); // 0x1ce6 NEW_2
	var_4295_int = 0; var_4296_bool = 0; var_4297_int = 0; // 0x1ce8 PushV
	var_4295_int = 15; // 0x1ce9 MovI
	var_4296_bool = 1; // 0x1cea MovB
	var_4297_int = 5; // 0x1ceb MovI
	func_882(var_4295_int, var_4296_bool, var_4297_int); // 0x1cec NEW_2
	
Label_7406:
	var_4298_int = 0; var_4299_bool = 0; // 0x1cee PushV
	var_4298_int = 15; // 0x1cef MovI
	var_4299_bool = 0; // 0x1cf0 MovB
	func_729(var_4298_int, var_4299_bool); // 0x1cf1 NEW_2
	var_4300_int = 0; var_4301_int = 0; var_4302_int = 0; // 0x1cf3 PushV
	var_4300_int = 15; // 0x1cf4 MovI
	var_4301_int = var_4272_int; // 0x1cf5 Mov
	var_4302_int = var_4273_int; // 0x1cf6 Mov
	func_3421(var_4300_int, var_4301_int, var_4302_int); // 0x1cf7 NEW_2
	return 0; // 0x1cf9 Return
}


func_201(var_4470_bool, var_4471_string, var_4472_string, var_4473_string)
{
	var_4474_object = Obj(); var_4475_object = Obj(); // 0xc9 PushV
	FindActor(var_4475_object, var_4471_string); // 0xca Func
	var_4476_bool = var_4475_object == 0; // 0xcc NullEq
	if(var_4476_bool == 0) goto Label_208; // 0xcd JumpB
	var_4470_bool = 0; // 0xce MovB
	return 2; // 0xcf Return
	
Label_208:
	Trigger(var_4475_object, var_4472_string, var_4473_string); // 0xd0 Func
	var_4470_bool = 1; // 0xd2 MovB
	return 2; // 0xd3 Return
}


func_10442()
{
	var_4809_string = ""; var_4810_bool = 0; // 0x28cb PushV
	var_4809_string = "cot_lara@door1"; // 0x28cc MovS
	var_4810_bool = 1; // 0x28cd MovB
	func_151(var_4809_string, var_4810_bool); // 0x28ce NEW_2
	return 0; // 0x28d0 Return
}


func_10449()
{
	var_6027_string = ""; var_6028_bool = 0; // 0x28d2 PushV
	var_6027_string = "cot_lara@door1"; // 0x28d3 MovS
	var_6028_bool = 0; // 0x28d4 MovB
	func_151(var_6027_string, var_6028_bool); // 0x28d5 NEW_2
	return 0; // 0x28d7 Return
}


func_11475()
{
	var_5054_int = 0; var_5055_string = ""; // 0x2cd4 PushV
	var_5055_string = "B_Mission4"; // 0x2cd5 MovS
	func_106(var_5054_int, var_5055_string); // 0x2cd6 NEW_2
	var_5056_int = 0; // 0x2cd8 PushI
	var_5057_bool = var_5054_int == var_5056_int; // 0x2cd9 Eq
	if(var_5057_bool == 0) goto Label_11502; // 0x2cda JumpB
	var_5058_string = "B_Mission4"; // 0x2cdb PushS
	var_5059_int = 1; // 0x2cdc PushI
	SetVariable(var_5058_string, var_5059_int); // 0x2cdd Func
	func_12207(); // 0x2ce0 NEW_2
	var_5068_bool = 0; var_5069_int = 0; // 0x2ce2 PushV
	var_5069_int = 562; // 0x2ce3 MovI
	func_12261(var_5068_bool, var_5069_int); // 0x2ce4 NEW_2
	var_5070_bool = 0; var_5071_int = 0; // 0x2ce6 PushV
	var_5071_int = 563; // 0x2ce7 MovI
	func_12261(var_5070_bool, var_5071_int); // 0x2ce8 NEW_2
	var_5072_bool = 0; var_5073_int = 0; // 0x2cea PushV
	var_5073_int = 564; // 0x2ceb MovI
	func_12261(var_5072_bool, var_5073_int); // 0x2cec NEW_2
	
Label_11502:
	return 0; // 0x2cee Return
}


func_213(var_599_object)
{
	var_600_int = 0; var_601_int = 0; var_602_object = Obj(); var_603_int = 0; var_604_int = 0; var_605_object = Obj(); // 0xd5 PushV
	var_606_object = var_599_object; // 0xd6 Push
	if(var_606_object == 0) goto Label_233; // 0xd7 JumpB
	size(var_603_int); // 0xd8 ObjFunc
	var_604_int = 0; // 0xda MovI
	
Label_219:
	var_607_bool = var_604_int < var_603_int; // 0xdb LT
	if(var_607_bool == 0) goto Label_231; // 0xdc JumpB
	get(var_605_object, var_604_int); // 0xdd ObjFunc
	var_608_object = var_605_object; // 0xdf Push
	if(var_608_object == 0) goto Label_227; // 0xe0 JumpB
	Remove(); // 0xe1 ObjFunc
	
Label_227:
	var_605_object = 0; // 0xe3 SetNull
	var_609_int = 1; // 0xe4 PushI
	var_604_int = var_604_int + var_609_int; // 0xe5 Add2
	goto Label_219; // 0xe6 Jump
	
Label_231:
	clear(); // 0xe7 ObjFunc
	
Label_233:
	return 6; // 0xe9 Return
}


func_14549(var_5408_int)
{
	var_5409_int = 0; var_5410_int = 0; // 0x38d5 PushV
	var_5411_string = "vol_"; // 0x38d6 PushS
	var_5412_int = var_5411_string + var_5408_int; // 0x38d7 Add
	GetVariable(var_5412_int, var_5410_int); // 0x38d8 Func
	var_5413_string = "vol_"; // 0x38da PushS
	var_5414_int = var_5413_string + var_5408_int; // 0x38db Add
	var_5415_int = 8; // 0x38dc PushI
	var_5416_int = var_5410_int | var_5415_int; // 0x38dd Or
	SetVariable(var_5414_int, var_5416_int); // 0x38de Func
	return 2; // 0x38e0 Return
}


func_10456()
{
	var_4815_string = ""; var_4816_bool = 0; // 0x28d9 PushV
	var_4815_string = "icot_eva_door"; // 0x28da MovS
	var_4816_bool = 1; // 0x28db MovB
	func_168(var_4815_string, var_4816_bool); // 0x28dc NEW_2
	return 0; // 0x28de Return
}


func_10463()
{
	var_6089_string = ""; var_6090_bool = 0; // 0x28e0 PushV
	var_6089_string = "icot_eva_door"; // 0x28e1 MovS
	var_6090_bool = 0; // 0x28e2 MovB
	func_168(var_6089_string, var_6090_bool); // 0x28e3 NEW_2
	return 0; // 0x28e5 Return
}


func_5344()
{
	var_145_string = "dt_house3_14_i2"; // 0x14e1 PushS
	add(var_145_string); // 0x14e2 ObjFunc
	var_146_string = "dt_house3_14"; // 0x14e4 PushS
	add(var_146_string); // 0x14e5 ObjFunc
	var_147_string = "house1_arc_01l"; // 0x14e7 PushS
	add(var_147_string); // 0x14e8 ObjFunc
	var_148_string = "house1_arc_01r"; // 0x14ea PushS
	add(var_148_string); // 0x14eb ObjFunc
	var_149_string = "dt_House6_01"; // 0x14ed PushS
	add(var_149_string); // 0x14ee ObjFunc
	var_150_string = "dt_house_1_09"; // 0x14f0 PushS
	add(var_150_string); // 0x14f1 ObjFunc
	var_151_string = "house5_24"; // 0x14f3 PushS
	add(var_151_string); // 0x14f4 ObjFunc
	var_152_string = "dt_House6_03"; // 0x14f6 PushS
	add(var_152_string); // 0x14f7 ObjFunc
	var_153_string = "dt_House6_04"; // 0x14f9 PushS
	add(var_153_string); // 0x14fa ObjFunc
	var_154_string = "dt_house_1_08"; // 0x14fc PushS
	add(var_154_string); // 0x14fd ObjFunc
	var_155_string = "house5_unoin_solidl"; // 0x14ff PushS
	add(var_155_string); // 0x1500 ObjFunc
	var_156_string = "house5_unoin_solidr"; // 0x1502 PushS
	add(var_156_string); // 0x1503 ObjFunc
	var_157_string = "dt_house2_12"; // 0x1505 PushS
	add(var_157_string); // 0x1506 ObjFunc
	var_158_string = "dt_house2_11"; // 0x1508 PushS
	add(var_158_string); // 0x1509 ObjFunc
	var_159_string = "dt_house2_13"; // 0x150b PushS
	add(var_159_string); // 0x150c ObjFunc
	var_160_string = "dt_house2_09"; // 0x150e PushS
	add(var_160_string); // 0x150f ObjFunc
	var_161_string = "dt_house2_08"; // 0x1511 PushS
	add(var_161_string); // 0x1512 ObjFunc
	var_162_string = "dt_house2_07"; // 0x1514 PushS
	add(var_162_string); // 0x1515 ObjFunc
	var_163_string = "dt_house2_06"; // 0x1517 PushS
	add(var_163_string); // 0x1518 ObjFunc
	var_164_string = "house5_01"; // 0x151a PushS
	add(var_164_string); // 0x151b ObjFunc
	var_165_string = "house5_15"; // 0x151d PushS
	add(var_165_string); // 0x151e ObjFunc
	var_166_string = "house5_16"; // 0x1520 PushS
	add(var_166_string); // 0x1521 ObjFunc
	var_167_string = "house5_17"; // 0x1523 PushS
	add(var_167_string); // 0x1524 ObjFunc
	var_168_string = "house5_unoin04l"; // 0x1526 PushS
	add(var_168_string); // 0x1527 ObjFunc
	var_169_string = "house5_unoin04r"; // 0x1529 PushS
	add(var_169_string); // 0x152a ObjFunc
	var_170_string = "house5_23"; // 0x152c PushS
	add(var_170_string); // 0x152d ObjFunc
	var_171_string = "house1_se_05r"; // 0x152f PushS
	add(var_171_string); // 0x1530 ObjFunc
	var_172_string = "house1_se_05l"; // 0x1532 PushS
	add(var_172_string); // 0x1533 ObjFunc
	var_173_string = "dt_house2_10"; // 0x1535 PushS
	add(var_173_string); // 0x1536 ObjFunc
	return 0; // 0x1538 Return
}


func_14561()
{
	var_5384_object = Obj(); var_5385_int = 0; var_5386_int = 0; var_5387_int = 0; var_5388_object = Obj(); var_5389_int = 0; var_5390_int = 0; var_5391_int = 0; // 0x38e1 PushV
	CreateIntVector(var_5388_object); // 0x38e2 Func
	var_5392_object = Obj(); var_5393_bool = 0; var_5394_int = 0; // 0x38e4 PushV
	var_5392_object = var_5388_object; // 0x38e5 Mov
	var_5393_bool = 0; // 0x38e6 MovB
	var_5394_int = -1; // 0x38e7 MovI
	func_14516(var_5393_bool, var_5394_int); // 0x38e8 NEW_2
	size(var_5389_int); // 0x38ea ObjFunc
	var_5390_int = 0; // 0x38ec MovI
	
Label_14573:
	var_5407_bool = var_5390_int < var_5389_int; // 0x38ed LT
	if(var_5407_bool == 0) goto Label_14584; // 0x38ee JumpB
	get(var_5391_int, var_5390_int); // 0x38ef ObjFunc
	var_5408_int = 0; // 0x38f1 PushV
	var_5408_int = var_5391_int; // 0x38f2 Mov
	func_14549(var_5408_int); // 0x38f3 NEW_2
	var_5417_int = 1; // 0x38f5 PushI
	var_5390_int = var_5390_int + var_5417_int; // 0x38f6 Add2
	goto Label_14573; // 0x38f7 Jump
	
Label_14584:
	return 8; // 0x38f8 Return
}


func_6372(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object)
{
	var_4003_int = 0; // 0x18e5 PushI
	var_4004_bool = var_3998_int == var_4003_int; // 0x18e6 Eq
	if(var_4004_bool == 0) goto Label_6412; // 0x18e7 JumpB
	var_4005_int = 0; var_4006_bool = 0; // 0x18e8 PushV
	var_4005_int = 10; // 0x18e9 MovI
	var_4006_bool = 0; // 0x18ea MovB
	func_746(var_4005_int, var_4006_bool); // 0x18eb NEW_2
	var_4007_int = 0; var_4008_bool = 0; var_4009_int = 0; // 0x18ed PushV
	var_4007_int = 10; // 0x18ee MovI
	var_4008_bool = 0; // 0x18ef MovB
	var_4009_int = 1; // 0x18f0 MovI
	func_763(var_4007_int, var_4008_bool, var_4009_int); // 0x18f1 NEW_2
	var_4010_int = 0; var_4011_int = 0; var_4012_object = Obj(); var_4013_object = Obj(); var_4014_object = Obj(); // 0x18f3 PushV
	var_4010_int = 10; // 0x18f4 MovI
	var_4011_int = var_3997_int; // 0x18f5 Mov
	var_4012_object = var_3999_object; // 0x18f6 Mov
	var_4013_object = var_4000_object; // 0x18f7 Mov
	var_4014_object = var_4001_object; // 0x18f8 Mov
	func_670(var_4010_int, var_4011_int, var_4012_object, var_4013_object, var_4014_object); // 0x18f9 NEW_2
	var_4015_object = Obj(); var_4016_int = 0; // 0x18fb PushV
	var_4015_object = var_4002_object; // 0x18fc Mov
	var_4016_int = 2; // 0x18fd MovI
	func_255(var_4016_int); // 0x18fe NEW_2
	var_4017_int = 0; var_4018_bool = 0; var_4019_int = 0; // 0x1900 PushV
	var_4017_int = 10; // 0x1901 MovI
	var_4018_bool = 0; // 0x1902 MovB
	var_4019_int = 7; // 0x1903 MovI
	func_820(var_4017_int, var_4018_bool, var_4019_int); // 0x1904 NEW_2
	var_4020_int = 0; var_4021_bool = 0; var_4022_int = 0; // 0x1906 PushV
	var_4020_int = 10; // 0x1907 MovI
	var_4021_bool = 1; // 0x1908 MovB
	var_4022_int = 7; // 0x1909 MovI
	func_882(var_4020_int, var_4021_bool, var_4022_int); // 0x190a NEW_2
	
Label_6412:
	var_4023_int = 0; var_4024_bool = 0; // 0x190c PushV
	var_4023_int = 10; // 0x190d MovI
	var_4024_bool = 0; // 0x190e MovB
	func_729(var_4023_int, var_4024_bool); // 0x190f NEW_2
	var_4025_int = 0; var_4026_int = 0; var_4027_int = 0; // 0x1911 PushV
	var_4025_int = 10; // 0x1912 MovI
	var_4026_int = var_3997_int; // 0x1913 Mov
	var_4027_int = var_3998_int; // 0x1914 Mov
	func_3609(var_4025_int, var_4026_int, var_4027_int); // 0x1915 NEW_2
	return 0; // 0x1917 Return
}


func_10470()
{
	var_4830_string = ""; var_4831_bool = 0; // 0x28e7 PushV
	var_4830_string = "cot_alexandr@door1"; // 0x28e8 MovS
	var_4831_bool = 1; // 0x28e9 MovB
	func_151(var_4830_string, var_4831_bool); // 0x28ea NEW_2
	return 0; // 0x28ec Return
}


func_234(var_4581_float)
{
	var_4582_float = 0; var_4583_float = 0; // 0xea PushV
	GetGameTime(var_4583_float); // 0xeb Func
	var_4581_float = var_4583_float; // 0xed Mov
	return 2; // 0xee Return
}


func_10477()
{
	var_6112_string = ""; var_6113_bool = 0; // 0x28ee PushV
	var_6112_string = "cot_alexandr@door1"; // 0x28ef MovS
	var_6113_bool = 0; // 0x28f0 MovB
	func_151(var_6112_string, var_6113_bool); // 0x28f1 NEW_2
	return 0; // 0x28f3 Return
}


func_239()
{
	var_109_float = 0.5; // 0xef PushF
	var_110_float = 0.886; // 0xf0 PushF
	SetSepia(var_109_float, var_110_float); // 0xf1 Func
	return 0; // 0xf3 Return
}


func_4335()
{
	return 0; // 0x10f0 Return
}


func_4337(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object)
{
	var_524_int = 0; // 0x10f2 PushI
	var_525_bool = var_519_int == var_524_int; // 0x10f3 Eq
	if(var_525_bool == 0) goto Label_4377; // 0x10f4 JumpB
	var_526_int = 0; var_527_bool = 0; // 0x10f5 PushV
	var_526_int = 0; // 0x10f6 MovI
	var_527_bool = 0; // 0x10f7 MovB
	func_746(var_526_int, var_527_bool); // 0x10f8 NEW_2
	var_528_int = 0; var_529_bool = 0; var_530_int = 0; // 0x10fa PushV
	var_528_int = 0; // 0x10fb MovI
	var_529_bool = 0; // 0x10fc MovB
	var_530_int = 1; // 0x10fd MovI
	func_763(var_528_int, var_529_bool, var_530_int); // 0x10fe NEW_2
	var_566_int = 0; var_567_int = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj(); // 0x1100 PushV
	var_566_int = 0; // 0x1101 MovI
	var_567_int = var_518_int; // 0x1102 Mov
	var_568_object = var_520_object; // 0x1103 Mov
	var_569_object = var_521_object; // 0x1104 Mov
	var_570_object = var_522_object; // 0x1105 Mov
	func_572(var_567_int, var_568_object, var_569_object, var_570_object); // 0x1106 NEW_2
	var_612_object = Obj(); var_613_int = 0; // 0x1108 PushV
	var_612_object = var_523_object; // 0x1109 Mov
	var_613_int = 0; // 0x110a MovI
	func_255(var_613_int); // 0x110b NEW_2
	var_639_int = 0; var_640_bool = 0; var_641_int = 0; // 0x110d PushV
	var_639_int = 0; // 0x110e MovI
	var_640_bool = 0; // 0x110f MovB
	var_641_int = 4; // 0x1110 MovI
	func_820(var_639_int, var_640_bool, var_641_int); // 0x1111 NEW_2
	var_686_int = 0; var_687_bool = 0; var_688_int = 0; // 0x1113 PushV
	var_686_int = 0; // 0x1114 MovI
	var_687_bool = 0; // 0x1115 MovB
	var_688_int = 4; // 0x1116 MovI
	func_882(var_686_int, var_687_bool, var_688_int); // 0x1117 NEW_2
	
Label_4377:
	var_724_int = 0; var_725_int = 0; // 0x1119 PushV
	var_724_int = 0; // 0x111a MovI
	var_725_int = var_519_int; // 0x111b Mov
	func_1000(var_724_int, var_725_int); // 0x111c NEW_2
	var_750_int = 0; var_751_int = 0; var_752_int = 0; // 0x111e PushV
	var_750_int = 0; // 0x111f MovI
	var_751_int = var_518_int; // 0x1120 Mov
	var_752_int = var_519_int; // 0x1121 Mov
	func_2156(var_750_int, var_751_int, var_752_int); // 0x1122 NEW_2
	return 0; // 0x1124 Return
}


func_11503()
{
	var_5749_object = Obj(); var_5750_object = Obj(); // 0x2cef PushV
	var_5751_object = Obj(); // 0x2cf0 PushV
	func_12286(var_5751_object); // 0x2cf1 NEW_2
	var_5750_object = var_5751_object; // 0x2cf2 Mov
	var_5752_string = "b4Spi4kaMapMark"; // 0x2cf4 PushS
	var_5753_string = "pt_map_spi4ka"; // 0x2cf5 PushS
	var_5754_int = 3; // 0x2cf6 PushI
	var_5755_int = 531086; // 0x2cf7 PushI
	var_5756_float = 0; // 0x2cf8 PushV
	func_234(var_5756_float); // 0x2cf9 NEW_2
	AddMark(var_5752_string, var_5753_string, var_5754_int, var_5755_int, var_5756_float); // 0x2cfb ObjFunc
	return 2; // 0x2cfd Return
}


func_244()
{
	var_113_int = 0; // 0xf4 PushI
	var_114_int = 0; // 0xf5 PushI
	SetSepia(var_113_int, var_114_int); // 0xf6 Func
	return 0; // 0xf8 Return
}


func_10484()
{
	var_4836_string = ""; var_4837_bool = 0; // 0x28f5 PushV
	var_4836_string = "cot_katerina@door1"; // 0x28f6 MovS
	var_4837_bool = 1; // 0x28f7 MovB
	func_151(var_4836_string, var_4837_bool); // 0x28f8 NEW_2
	return 0; // 0x28fa Return
}


func_249(var_446_string, var_447_int)
{
	var_448_string = "Region"; // 0xfa PushS
	var_449_int = var_448_string + var_447_int; // 0xfb Add
	var_450_string = "State"; // 0xfc PushS
	var_446_string = var_449_int + var_450_string; // 0xfd Add2
	return 0; // 0xfe Return
}


func_14586()
{
	func_14561(); // 0x38fb NEW_2
	return 0; // 0x38fd Return
}


func_10491()
{
	var_6118_string = ""; var_6119_bool = 0; // 0x28fc PushV
	var_6118_string = "cot_katerina@door1"; // 0x28fd MovS
	var_6119_bool = 0; // 0x28fe MovB
	func_151(var_6118_string, var_6119_bool); // 0x28ff NEW_2
	return 0; // 0x2901 Return
}


func_14590()
{
	var_4527_int = 0; // 0x38fe PushV
	var_4527_int = 7; // 0x38ff MovI
	func_7558(var_4527_int); // 0x3900 NEW_2
	return 0; // 0x3902 Return
}


func_255(var_613_int)
{
	var_614_int = 0; var_615_string = ""; var_616_int = 0; var_617_string = ""; var_618_string = ""; var_619_object = Obj(); var_620_int = 0; var_621_string = ""; var_622_int = 0; var_623_string = ""; var_624_string = ""; var_625_object = Obj(); // 0xff PushV
	size(var_620_int); // 0x100 ObjFunc
	var_626_int = 1; // 0x102 PushI
	var_627_bool = var_613_int == var_626_int; // 0x103 Eq
	if(var_627_bool == 0) goto Label_263; // 0x104 JumpB
	var_621_string = "s_"; // 0x105 MovS
	goto Label_267; // 0x106 Jump
	
Label_267:
	var_622_int = 0; // 0x10b MovI
	
Label_268:
	var_628_bool = var_622_int < var_620_int; // 0x10c LT
	if(var_628_bool == 0) goto Label_292; // 0x10d JumpB
	get(var_623_string, var_622_int); // 0x10e ObjFunc
	var_629_int = var_621_string + var_623_string; // 0x110 Add
	var_630_string = ".isc"; // 0x111 PushS
	var_624_string = var_629_int + var_630_string; // 0x112 Add2
	GetSceneByName(var_625_object, var_623_string); // 0x113 Func
	var_631_bool = var_625_object == 0; // 0x115 Not
	if(var_631_bool == 0) goto Label_286; // 0x116 JumpB
	var_632_string = "City manager: can't replace indoor scene ""; // 0x117 PushS
	var_633_int = var_632_string + var_623_string; // 0x118 Add
	var_634_string = "" because it doesn't exist"; // 0x119 PushS
	var_635_int = var_633_int + var_634_string; // 0x11a Add
	Trace(var_635_int); // 0x11b Func
	goto Label_288; // 0x11d Jump
	
Label_288:
	var_625_object = 0; // 0x120 SetNull
	var_636_int = 1; // 0x121 PushI
	var_622_int = var_622_int + var_636_int; // 0x122 Add2
	goto Label_268; // 0x123 Jump
	
Label_286:
	ReplaceScene(var_625_object, var_624_string); // 0x11e Func
	
Label_292:
	return 12; // 0x124 Return
	
Label_263:
	var_637_int = 2; // 0x107 PushI
	var_638_bool = var_613_int == var_637_int; // 0x108 Eq
	if(var_638_bool == 0) goto Label_267; // 0x109 JumpB
	var_621_string = "n_"; // 0x10a MovS
}


func_11519()
{
	var_5681_object = Obj(); var_5682_object = Obj(); // 0x2cff PushV
	var_5683_object = Obj(); // 0x2d00 PushV
	func_12286(var_5683_object); // 0x2d01 NEW_2
	var_5682_object = var_5683_object; // 0x2d02 Mov
	var_5684_string = "b9Block"; // 0x2d04 PushS
	var_5685_string = "pt_map_uprava_admin"; // 0x2d05 PushS
	var_5686_int = 3; // 0x2d06 PushI
	var_5687_int = 531551; // 0x2d07 PushI
	var_5688_float = 0; // 0x2d08 PushV
	func_234(var_5688_float); // 0x2d09 NEW_2
	AddMark(var_5684_string, var_5685_string, var_5686_int, var_5687_int, var_5688_float); // 0x2d0b ObjFunc
	return 2; // 0x2d0d Return
}


func_10498()
{
	return 0; // 0x2903 Return
}


func_14595(var_144_bool, var_145_int, var_146_int)
{
	var_147_int = 6; // 0x3904 PushI
	var_148_bool = var_145_int == var_147_int; // 0x3905 Eq
	if(var_148_bool == 0) goto Label_14601; // 0x3906 JumpB
	var_144_bool = 0; // 0x3907 MovB
	return 0; // 0x3908 Return
	
Label_14601:
	var_149_int = 4; // 0x3909 PushI
	var_150_bool = var_146_int == var_149_int; // 0x390a Eq
	if(var_150_bool == 0) goto Label_14615; // 0x390b JumpB
	var_151_int = 15; // 0x390c PushI
	var_152_bool = var_145_int == var_151_int; // 0x390d Eq
	if(var_152_bool == 0) goto Label_14609; // 0x390e JumpB
	var_144_bool = 0; // 0x390f MovB
	return 0; // 0x3910 Return
	
Label_14609:
	var_153_int = 9; // 0x3911 PushI
	var_154_bool = var_145_int == var_153_int; // 0x3912 Eq
	if(var_154_bool == 0) goto Label_14614; // 0x3913 JumpB
	var_144_bool = 0; // 0x3914 MovB
	return 0; // 0x3915 Return
	
Label_14614:
	goto Label_14632; // 0x3916 Jump
	
Label_14632:
	var_144_bool = 1; // 0x3928 MovB
	return 0; // 0x3929 Return
	
Label_14615:
	var_155_int = 5; // 0x3917 PushI
	var_156_bool = var_146_int == var_155_int; // 0x3918 Eq
	if(var_156_bool == 0) goto Label_14624; // 0x3919 JumpB
	var_157_int = 15; // 0x391a PushI
	var_158_bool = var_145_int == var_157_int; // 0x391b Eq
	if(var_158_bool == 0) goto Label_14623; // 0x391c JumpB
	var_144_bool = 0; // 0x391d MovB
	return 0; // 0x391e Return
	
Label_14623:
	goto Label_14632; // 0x391f Jump
	
Label_14624:
	var_159_int = 6; // 0x3920 PushI
	var_160_bool = var_146_int == var_159_int; // 0x3921 Eq
	if(var_160_bool == 0) goto Label_14632; // 0x3922 JumpB
	var_161_int = 15; // 0x3923 PushI
	var_162_bool = var_145_int == var_161_int; // 0x3924 Eq
	if(var_162_bool == 0) goto Label_14632; // 0x3925 JumpB
	var_144_bool = 0; // 0x3926 MovB
	return 0; // 0x3927 Return
}


func_10500()
{
	return 0; // 0x2905 Return
}


func_10502()
{
	var_4846_string = ""; var_4847_bool = 0; // 0x2907 PushV
	var_4846_string = "burah_home@door1"; // 0x2908 MovS
	var_4847_bool = 1; // 0x2909 MovB
	func_151(var_4846_string, var_4847_bool); // 0x290a NEW_2
	return 0; // 0x290c Return
}


func_10509()
{
	var_6384_string = ""; var_6385_bool = 0; // 0x290e PushV
	var_6384_string = "burah_home@door1"; // 0x290f MovS
	var_6385_bool = 0; // 0x2910 MovB
	func_151(var_6384_string, var_6385_bool); // 0x2911 NEW_2
	return 0; // 0x2913 Return
}


func_1295(var_1128_bool, var_1129_int, var_1130_int)
{
	var_1128_bool = 0; // 0x510 MovB
	var_1131_int = 10; // 0x511 PushI
	var_1132_bool = var_1129_int >= var_1131_int; // 0x512 GE
	if(var_1132_bool == 0) goto Label_1304; // 0x513 JumpB
	var_1133_int = 6; // 0x514 PushI
	var_1134_bool = var_1130_int < var_1133_int; // 0x515 LT
	if(var_1134_bool == 0) goto Label_1304; // 0x516 JumpB
	var_1128_bool = 1; // 0x517 MovB
	
Label_1304:
	return 0; // 0x518 Return
}


func_11535()
{
	var_5651_object = Obj(); var_5652_object = Obj(); // 0x2d0f PushV
	var_5653_object = Obj(); // 0x2d10 PushV
	func_12286(var_5653_object); // 0x2d11 NEW_2
	var_5652_object = var_5653_object; // 0x2d12 Mov
	var_5654_string = "b2AndreiKabak"; // 0x2d14 PushS
	var_5655_string = "pt_map_andrei"; // 0x2d15 PushS
	var_5656_int = 0; // 0x2d16 PushI
	var_5657_int = 531558; // 0x2d17 PushI
	var_5658_float = 0; // 0x2d18 PushV
	func_234(var_5658_float); // 0x2d19 NEW_2
	AddMark(var_5654_string, var_5655_string, var_5656_int, var_5657_int, var_5658_float); // 0x2d1b ObjFunc
	return 2; // 0x2d1d Return
}


func_10516()
{
	var_4852_object = Obj(); var_4853_object = Obj(); // 0x2914 PushV
	var_4854_object = Obj(); // 0x2915 PushV
	func_12286(var_4854_object); // 0x2916 NEW_2
	var_4853_object = var_4854_object; // 0x2917 Mov
	var_4861_string = "b1BigVlad"; // 0x2919 PushS
	var_4862_string = "pt_map_bigvlad"; // 0x291a PushS
	var_4863_int = 3; // 0x291b PushI
	var_4864_int = 520525; // 0x291c PushI
	var_4865_float = 0; // 0x291d PushV
	func_234(var_4865_float); // 0x291e NEW_2
	AddMark(var_4861_string, var_4862_string, var_4863_int, var_4864_int, var_4865_float); // 0x2920 ObjFunc
	return 2; // 0x2922 Return
}


func_6424()
{
	var_246_string = "r5_house2_01"; // 0x1919 PushS
	add(var_246_string); // 0x191a ObjFunc
	var_247_string = "r5_house2_02"; // 0x191c PushS
	add(var_247_string); // 0x191d ObjFunc
	var_248_string = "r5_house2_03"; // 0x191f PushS
	add(var_248_string); // 0x1920 ObjFunc
	var_249_string = "r5_house3_01_i2"; // 0x1922 PushS
	add(var_249_string); // 0x1923 ObjFunc
	var_250_string = "r5_house3_01"; // 0x1925 PushS
	add(var_250_string); // 0x1926 ObjFunc
	var_251_string = "r5_house3_02_i2"; // 0x1928 PushS
	add(var_251_string); // 0x1929 ObjFunc
	var_252_string = "r5_house3_02"; // 0x192b PushS
	add(var_252_string); // 0x192c ObjFunc
	var_253_string = "r5_house3_03_i2"; // 0x192e PushS
	add(var_253_string); // 0x192f ObjFunc
	var_254_string = "r5_house3_03"; // 0x1931 PushS
	add(var_254_string); // 0x1932 ObjFunc
	var_255_string = "r5_house3_04_i2"; // 0x1934 PushS
	add(var_255_string); // 0x1935 ObjFunc
	var_256_string = "r5_house3_04"; // 0x1937 PushS
	add(var_256_string); // 0x1938 ObjFunc
	var_257_string = "r5_house3_05_i2"; // 0x193a PushS
	add(var_257_string); // 0x193b ObjFunc
	var_258_string = "r5_house3_05"; // 0x193d PushS
	add(var_258_string); // 0x193e ObjFunc
	var_259_string = "r5_house3_06_i2"; // 0x1940 PushS
	add(var_259_string); // 0x1941 ObjFunc
	var_260_string = "r5_house3_06"; // 0x1943 PushS
	add(var_260_string); // 0x1944 ObjFunc
	var_261_string = "r5_house3_07_i2"; // 0x1946 PushS
	add(var_261_string); // 0x1947 ObjFunc
	var_262_string = "r5_house3_07"; // 0x1949 PushS
	add(var_262_string); // 0x194a ObjFunc
	var_263_string = "r5_House6_01"; // 0x194c PushS
	add(var_263_string); // 0x194d ObjFunc
	return 0; // 0x194f Return
}


func_1305(var_1139_bool, var_1140_int, var_1141_int)
{
	var_1139_bool = 0; // 0x51a MovB
	var_1142_int = 3; // 0x51b PushI
	var_1143_bool = var_1140_int >= var_1142_int; // 0x51c GE
	if(var_1143_bool == 0) goto Label_1321; // 0x51d JumpB
	var_1144_bool = 0; // 0x51e PushV
	var_1144_bool = 1; // 0x51f MovB
	var_1145_int = 22; // 0x520 PushI
	var_1146_bool = var_1141_int > var_1145_int; // 0x521 GT
	if(var_1146_bool == 0) goto Label_1319; // 0x522 JumpB
	var_1147_int = 5; // 0x523 PushI
	var_1148_bool = var_1141_int < var_1147_int; // 0x524 LT
	if(var_1148_bool == 0) goto Label_1319; // 0x525 JumpB
	var_1144_bool = 0; // 0x526 MovB
	
Label_1319:
	if(var_1144_bool == 0) goto Label_1321; // 0x527 JumpB
	var_1139_bool = 1; // 0x528 MovB
	
Label_1321:
	return 0; // 0x529 Return
}


func_2333(var_914_int, var_915_int, var_916_int)
{
	var_917_int = 0; var_918_int = 0; // 0x91d PushV
	var_919_int = 1; // 0x91e PushI
	var_920_int = var_915_int + var_919_int; // 0x91f Add
	var_921_int = 12; // 0x920 PushI
	var_922_bool = var_920_int == var_921_int; // 0x921 Eq
	if(var_922_bool == 0) goto Label_2340; // 0x922 JumpB
	return 2; // 0x923 Return
	
Label_2340:
	var_923_bool = 0; // 0x924 PushV
	var_923_bool = 0; // 0x925 MovB
	var_924_bool = 0; // 0x926 PushV
	var_924_bool = 1; // 0x927 MovB
	var_925_int = 7; // 0x928 PushI
	var_926_bool = var_916_int < var_925_int; // 0x929 LT
	if(var_926_bool == 0) goto Label_2351; // 0x92a JumpB
	var_927_int = 21; // 0x92b PushI
	var_928_bool = var_916_int > var_927_int; // 0x92c GT
	if(var_928_bool == 0) goto Label_2351; // 0x92d JumpB
	var_924_bool = 0; // 0x92e MovB
	
Label_2351:
	if(var_924_bool == 0) goto Label_2356; // 0x92f JumpB
	var_929_int = 0; // 0x930 PushI
	var_930_bool = var_915_int != var_929_int; // 0x931 Neq
	if(var_930_bool == 0) goto Label_2356; // 0x932 JumpB
	var_923_bool = 1; // 0x933 MovB
	
Label_2356:
	if(var_923_bool == 0) goto Label_2372; // 0x934 JumpB
	var_931_int = 1; // 0x935 PushI
	var_932_float = 0; var_933_int = 0; // 0x936 PushV
	var_933_int = var_915_int; // 0x937 Mov
	func_1091(var_932_float, var_933_int); // 0x938 NEW_2
	var_918_int = var_931_int * var_932_float; // 0x93a Mult2
	var_934_int = var_918_int; // 0x93b Push
	if(var_934_int == 0) goto Label_2372; // 0x93c JumpB
	var_935_int = 0; var_936_string = ""; var_937_string = ""; var_938_int = 0; // 0x93d PushV
	var_935_int = var_914_int; // 0x93e Mov
	var_936_string = "pers_grabitel"; // 0x93f MovS
	var_937_string = "grabitel.xml"; // 0x940 MovS
	var_938_int = var_918_int; // 0x941 Mov
	func_453(var_935_int, var_936_string, var_937_string, var_938_int); // 0x942 NEW_2
	
Label_2372:
	var_939_bool = 0; var_940_int = 0; var_941_int = 0; // 0x944 PushV
	var_940_int = var_915_int; // 0x945 Mov
	var_941_int = var_916_int; // 0x946 Mov
	func_1060(var_939_bool, var_940_int, var_941_int); // 0x947 NEW_2
	if(var_939_bool == 0) goto Label_2421; // 0x949 JumpB
	var_942_int = 0; var_943_string = ""; var_944_string = ""; var_945_int = 0; // 0x94a PushV
	var_942_int = var_914_int; // 0x94b Mov
	var_943_string = "pers_unosha"; // 0x94c MovS
	var_944_string = "unosha_attacker.xml"; // 0x94d MovS
	var_945_int = 1; // 0x94e MovI
	func_453(var_942_int, var_943_string, var_944_string, var_945_int); // 0x94f NEW_2
	var_946_int = 0; var_947_string = ""; var_948_string = ""; var_949_int = 0; // 0x951 PushV
	var_946_int = var_914_int; // 0x952 Mov
	var_947_string = "pers_unosha"; // 0x953 MovS
	var_948_string = "unosha2_attacker.xml"; // 0x954 MovS
	var_949_int = 1; // 0x955 MovI
	func_453(var_946_int, var_947_string, var_948_string, var_949_int); // 0x956 NEW_2
	var_950_int = 0; var_951_string = ""; var_952_string = ""; var_953_int = 0; // 0x958 PushV
	var_950_int = var_914_int; // 0x959 Mov
	var_951_string = "pers_worker"; // 0x95a MovS
	var_952_string = "worker_attacker.xml"; // 0x95b MovS
	var_953_int = 1; // 0x95c MovI
	func_453(var_950_int, var_951_string, var_952_string, var_953_int); // 0x95d NEW_2
	var_954_int = 0; var_955_string = ""; var_956_string = ""; var_957_int = 0; // 0x95f PushV
	var_954_int = var_914_int; // 0x960 Mov
	var_955_string = "pers_worker"; // 0x961 MovS
	var_956_string = "worker2_attacker.xml"; // 0x962 MovS
	var_957_int = 1; // 0x963 MovI
	func_453(var_954_int, var_955_string, var_956_string, var_957_int); // 0x964 NEW_2
	var_958_int = 0; var_959_string = ""; var_960_string = ""; var_961_int = 0; // 0x966 PushV
	var_958_int = var_914_int; // 0x967 Mov
	var_959_string = "pers_alkash"; // 0x968 MovS
	var_960_string = "alkash.xml"; // 0x969 MovS
	var_961_int = 1; // 0x96a MovI
	func_453(var_958_int, var_959_string, var_960_string, var_961_int); // 0x96b NEW_2
	var_962_int = 0; var_963_string = ""; var_964_string = ""; var_965_int = 0; // 0x96d PushV
	var_962_int = var_914_int; // 0x96e Mov
	var_963_string = "pers_woman"; // 0x96f MovS
	var_964_string = "woman.xml"; // 0x970 MovS
	var_965_int = 2; // 0x971 MovI
	func_453(var_962_int, var_963_string, var_964_string, var_965_int); // 0x972 NEW_2
	goto Label_2509; // 0x974 Jump
	
Label_2509:
	var_966_bool = 0; // 0x9cd PushV
	var_966_bool = 0; // 0x9ce MovB
	var_967_bool = 0; // 0x9cf PushV
	var_967_bool = 0; // 0x9d0 MovB
	var_968_int = 0; // 0x9d1 PushI
	var_969_bool = var_915_int == var_968_int; // 0x9d2 Eq
	if(var_969_bool == 0) goto Label_2520; // 0x9d3 JumpB
	var_970_int = 12; // 0x9d4 PushI
	var_971_bool = var_916_int > var_970_int; // 0x9d5 GT
	if(var_971_bool == 0) goto Label_2520; // 0x9d6 JumpB
	var_967_bool = 1; // 0x9d7 MovB
	
Label_2520:
	if(var_967_bool == 0) goto Label_2525; // 0x9d8 JumpB
	var_972_int = 22; // 0x9d9 PushI
	var_973_bool = var_916_int < var_972_int; // 0x9da LT
	if(var_973_bool == 0) goto Label_2525; // 0x9db JumpB
	var_966_bool = 1; // 0x9dc MovB
	
Label_2525:
	if(var_966_bool == 0) goto Label_2533; // 0x9dd JumpB
	var_974_int = 0; var_975_string = ""; var_976_string = ""; var_977_int = 0; // 0x9de PushV
	var_974_int = var_914_int; // 0x9df Mov
	var_975_string = "pers_woman"; // 0x9e0 MovS
	var_976_string = "woman_killme.xml"; // 0x9e1 MovS
	var_977_int = 1; // 0x9e2 MovI
	func_453(var_974_int, var_975_string, var_976_string, var_977_int); // 0x9e3 NEW_2
	
Label_2533:
	return 2; // 0x9e5 Return
	
Label_2421:
	var_978_bool = 0; // 0x975 PushV
	var_978_bool = 0; // 0x976 MovB
	var_979_int = 8; // 0x977 PushI
	var_980_bool = var_916_int > var_979_int; // 0x978 GT
	if(var_980_bool == 0) goto Label_2430; // 0x979 JumpB
	var_981_int = 21; // 0x97a PushI
	var_982_bool = var_916_int < var_981_int; // 0x97b LT
	if(var_982_bool == 0) goto Label_2430; // 0x97c JumpB
	var_978_bool = 1; // 0x97d MovB
	
Label_2430:
	if(var_978_bool == 0) goto Label_2474; // 0x97e JumpB
	var_983_int = 0; var_984_string = ""; var_985_string = ""; var_986_int = 0; // 0x97f PushV
	var_983_int = var_914_int; // 0x980 Mov
	var_984_string = "pers_worker"; // 0x981 MovS
	var_985_string = "worker.xml"; // 0x982 MovS
	var_986_int = 2; // 0x983 MovI
	func_453(var_983_int, var_984_string, var_985_string, var_986_int); // 0x984 NEW_2
	var_987_int = 0; var_988_string = ""; var_989_string = ""; var_990_int = 0; // 0x986 PushV
	var_987_int = var_914_int; // 0x987 Mov
	var_988_string = "pers_worker"; // 0x988 MovS
	var_989_string = "worker2.xml"; // 0x989 MovS
	var_990_int = 2; // 0x98a MovI
	func_453(var_987_int, var_988_string, var_989_string, var_990_int); // 0x98b NEW_2
	var_991_int = 0; var_992_string = ""; var_993_string = ""; var_994_int = 0; // 0x98d PushV
	var_991_int = var_914_int; // 0x98e Mov
	var_992_string = "pers_alkash"; // 0x98f MovS
	var_993_string = "alkash.xml"; // 0x990 MovS
	var_994_int = 1; // 0x991 MovI
	func_453(var_991_int, var_992_string, var_993_string, var_994_int); // 0x992 NEW_2
	var_995_int = 0; var_996_string = ""; var_997_string = ""; var_998_int = 0; // 0x994 PushV
	var_995_int = var_914_int; // 0x995 Mov
	var_996_string = "pers_woman"; // 0x996 MovS
	var_997_string = "woman.xml"; // 0x997 MovS
	var_998_int = 2; // 0x998 MovI
	func_453(var_995_int, var_996_string, var_997_string, var_998_int); // 0x999 NEW_2
	var_999_int = 0; var_1000_string = ""; var_1001_string = ""; var_1002_int = 0; // 0x99b PushV
	var_999_int = var_914_int; // 0x99c Mov
	var_1000_string = "pers_unosha"; // 0x99d MovS
	var_1001_string = "unosha.xml"; // 0x99e MovS
	var_1002_int = 1; // 0x99f MovI
	func_453(var_999_int, var_1000_string, var_1001_string, var_1002_int); // 0x9a0 NEW_2
	var_1003_int = 0; var_1004_string = ""; var_1005_string = ""; var_1006_int = 0; // 0x9a2 PushV
	var_1003_int = var_914_int; // 0x9a3 Mov
	var_1004_string = "pers_unosha"; // 0x9a4 MovS
	var_1005_string = "unosha2.xml"; // 0x9a5 MovS
	var_1006_int = 1; // 0x9a6 MovI
	func_453(var_1003_int, var_1004_string, var_1005_string, var_1006_int); // 0x9a7 NEW_2
	goto Label_2509; // 0x9a9 Jump
	
Label_2474:
	var_1007_int = 0; var_1008_string = ""; var_1009_string = ""; var_1010_int = 0; // 0x9aa PushV
	var_1007_int = var_914_int; // 0x9ab Mov
	var_1008_string = "pers_alkash"; // 0x9ac MovS
	var_1009_string = "alkash.xml"; // 0x9ad MovS
	var_1010_int = 1; // 0x9ae MovI
	func_453(var_1007_int, var_1008_string, var_1009_string, var_1010_int); // 0x9af NEW_2
	var_1011_int = 0; var_1012_string = ""; var_1013_string = ""; var_1014_int = 0; // 0x9b1 PushV
	var_1011_int = var_914_int; // 0x9b2 Mov
	var_1012_string = "pers_worker"; // 0x9b3 MovS
	var_1013_string = "worker.xml"; // 0x9b4 MovS
	var_1014_int = 1; // 0x9b5 MovI
	func_453(var_1011_int, var_1012_string, var_1013_string, var_1014_int); // 0x9b6 NEW_2
	var_1015_int = 0; var_1016_string = ""; var_1017_string = ""; var_1018_int = 0; // 0x9b8 PushV
	var_1015_int = var_914_int; // 0x9b9 Mov
	var_1016_string = "pers_worker"; // 0x9ba MovS
	var_1017_string = "worker2.xml"; // 0x9bb MovS
	var_1018_int = 1; // 0x9bc MovI
	func_453(var_1015_int, var_1016_string, var_1017_string, var_1018_int); // 0x9bd NEW_2
	var_1019_int = 0; var_1020_string = ""; var_1021_string = ""; var_1022_int = 0; // 0x9bf PushV
	var_1019_int = var_914_int; // 0x9c0 Mov
	var_1020_string = "pers_unosha"; // 0x9c1 MovS
	var_1021_string = "unosha2.xml"; // 0x9c2 MovS
	var_1022_int = 1; // 0x9c3 MovI
	func_453(var_1019_int, var_1020_string, var_1021_string, var_1022_int); // 0x9c4 NEW_2
	var_1023_int = 0; var_1024_string = ""; var_1025_string = ""; var_1026_int = 0; // 0x9c6 PushV
	var_1023_int = var_914_int; // 0x9c7 Mov
	var_1024_string = "pers_dog"; // 0x9c8 MovS
	var_1025_string = "dog.xml"; // 0x9c9 MovS
	var_1026_int = 1; // 0x9ca MovI
	func_453(var_1023_int, var_1024_string, var_1025_string, var_1026_int); // 0x9cb NEW_2
}


func_11551()
{
	var_4921_string = ""; var_4922_bool = 0; // 0x2d20 PushV
	var_4921_string = "vagon_army@door1"; // 0x2d21 MovS
	var_4922_bool = 1; // 0x2d22 MovB
	func_151(var_4921_string, var_4922_bool); // 0x2d23 NEW_2
	return 0; // 0x2d25 Return
}


func_10532()
{
	var_4870_string = ""; var_4871_bool = 0; // 0x2925 PushV
	var_4870_string = "termitnik2@door1"; // 0x2926 MovS
	var_4871_bool = 1; // 0x2927 MovB
	func_151(var_4870_string, var_4871_bool); // 0x2928 NEW_2
	return 0; // 0x292a Return
}


func_4389(var_2005_int, var_2006_int, var_2007_object, var_2008_object, var_2009_object, var_2010_object)
{
	var_2011_int = 0; // 0x1126 PushI
	var_2012_bool = var_2006_int == var_2011_int; // 0x1127 Eq
	if(var_2012_bool == 0) goto Label_4429; // 0x1128 JumpB
	var_2013_int = 0; var_2014_bool = 0; // 0x1129 PushV
	var_2013_int = 0; // 0x112a MovI
	var_2014_bool = 1; // 0x112b MovB
	func_746(var_2013_int, var_2014_bool); // 0x112c NEW_2
	var_2015_int = 0; var_2016_bool = 0; var_2017_int = 0; // 0x112e PushV
	var_2015_int = 0; // 0x112f MovI
	var_2016_bool = 1; // 0x1130 MovB
	var_2017_int = 1; // 0x1131 MovI
	func_763(var_2015_int, var_2016_bool, var_2017_int); // 0x1132 NEW_2
	var_2018_int = 0; var_2019_int = 0; var_2020_object = Obj(); var_2021_object = Obj(); var_2022_object = Obj(); // 0x1134 PushV
	var_2018_int = 0; // 0x1135 MovI
	var_2019_int = var_2005_int; // 0x1136 Mov
	var_2020_object = var_2007_object; // 0x1137 Mov
	var_2021_object = var_2008_object; // 0x1138 Mov
	var_2022_object = var_2009_object; // 0x1139 Mov
	func_591(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object); // 0x113a NEW_2
	var_2108_object = Obj(); var_2109_int = 0; // 0x113c PushV
	var_2108_object = var_2010_object; // 0x113d Mov
	var_2109_int = 1; // 0x113e MovI
	func_255(var_2109_int); // 0x113f NEW_2
	var_2110_int = 0; var_2111_bool = 0; var_2112_int = 0; // 0x1141 PushV
	var_2110_int = 0; // 0x1142 MovI
	var_2111_bool = 1; // 0x1143 MovB
	var_2112_int = 4; // 0x1144 MovI
	func_820(var_2110_int, var_2111_bool, var_2112_int); // 0x1145 NEW_2
	var_2113_int = 0; var_2114_bool = 0; var_2115_int = 0; // 0x1147 PushV
	var_2113_int = 0; // 0x1148 MovI
	var_2114_bool = 0; // 0x1149 MovB
	var_2115_int = 4; // 0x114a MovI
	func_882(var_2113_int, var_2114_bool, var_2115_int); // 0x114b NEW_2
	
Label_4429:
	var_2116_int = 0; var_2117_bool = 0; // 0x114d PushV
	var_2116_int = 0; // 0x114e MovI
	var_2117_bool = 0; // 0x114f MovB
	func_729(var_2116_int, var_2117_bool); // 0x1150 NEW_2
	var_2118_int = 0; var_2119_int = 0; var_2120_int = 0; // 0x1152 PushV
	var_2118_int = 0; // 0x1153 MovI
	var_2119_int = var_2005_int; // 0x1154 Mov
	var_2120_int = var_2006_int; // 0x1155 Mov
	func_3087(var_2118_int, var_2119_int, var_2120_int); // 0x1156 NEW_2
	return 0; // 0x1158 Return
}


func_293(var_108_int)
{
	var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; // 0x125 PushV
	var_111_int = 0; // 0x126 MovI
	var_112_int = 0; // 0x127 MovI
	
Label_296:
	var_113_int = 16; // 0x128 PushI
	var_114_bool = var_112_int < var_113_int; // 0x129 LT
	if(var_114_bool == 0) goto Label_309; // 0x12a JumpB
	var_115_bool = 0; var_116_int = 0; // 0x12b PushV
	var_116_int = var_112_int; // 0x12c Mov
	func_380(var_115_bool, var_116_int); // 0x12d NEW_2
	if(var_115_bool == 0) goto Label_306; // 0x12f JumpB
	var_117_int = 1; // 0x130 PushI
	var_111_int = var_111_int + var_117_int; // 0x131 Add2
	
Label_306:
	var_118_int = 1; // 0x132 PushI
	var_112_int = var_112_int + var_118_int; // 0x133 Add2
	goto Label_296; // 0x134 Jump
	
Label_309:
	var_108_int = var_111_int; // 0x135 Mov
	return 4; // 0x136 Return
}


func_11558()
{
	var_4933_string = ""; var_4934_bool = 0; // 0x2d27 PushV
	var_4933_string = "house1_kabak@door1"; // 0x2d28 MovS
	var_4934_bool = 1; // 0x2d29 MovB
	func_151(var_4933_string, var_4934_bool); // 0x2d2a NEW_2
	return 0; // 0x2d2c Return
}


func_14634(var_4589_int, var_4590_int)
{
	var_4592_object = Obj(); var_4593_object = Obj(); // 0x392a PushV
	var_4594_string = "Updating game "; // 0x392b PushS
	var_4595_int = var_4594_string + var_4589_int; // 0x392c Add
	var_4596_string = " "; // 0x392d PushS
	var_4597_int = var_4595_int + var_4596_string; // 0x392e Add
	var_4598_int = var_4597_int + var_4590_int; // 0x392f Add
	Trace(var_4598_int); // 0x3930 Func
	var_4599_bool = 0; // 0x3932 PushV
	var_4599_bool = 0; // 0x3933 MovB
	var_4600_int = 8; // 0x3934 PushI
	var_4601_bool = var_4589_int == var_4600_int; // 0x3935 Eq
	if(var_4601_bool == 0) goto Label_14651; // 0x3936 JumpB
	var_4602_int = 0; // 0x3937 PushI
	var_4603_bool = var_4590_int == var_4602_int; // 0x3938 Eq
	if(var_4603_bool == 0) goto Label_14651; // 0x3939 JumpB
	var_4599_bool = 1; // 0x393a MovB
	
Label_14651:
	if(var_4599_bool == 0) goto Label_14659; // 0x393b JumpB
	var_4604_string = "sobor"; // 0x393c PushS
	GetSceneByName(var_4593_object, var_4604_string); // 0x393d Func
	var_4605_string = "aglaja"; // 0x393f PushS
	Trigger(var_4593_object, var_4605_string); // 0x3940 Func
	var_4593_object = 0; // 0x3942 SetNull
	
Label_14659:
	var_4606_bool = 0; // 0x3943 PushV
	var_4606_bool = 0; // 0x3944 MovB
	var_4607_int = 9; // 0x3945 PushI
	var_4608_bool = var_4589_int == var_4607_int; // 0x3946 Eq
	if(var_4608_bool == 0) goto Label_14668; // 0x3947 JumpB
	var_4609_int = 0; // 0x3948 PushI
	var_4610_bool = var_4590_int == var_4609_int; // 0x3949 Eq
	if(var_4610_bool == 0) goto Label_14668; // 0x394a JumpB
	var_4606_bool = 1; // 0x394b MovB
	
Label_14668:
	if(var_4606_bool == 0) goto Label_14685; // 0x394c JumpB
	var_4611_int = 0; // 0x394d PushV
	var_4611_int = 0; // 0x394e MovI
	func_7635(var_4611_int); // 0x394f NEW_2
	var_4646_int = 0; // 0x3951 PushV
	var_4646_int = 1; // 0x3952 MovI
	func_7635(var_4646_int); // 0x3953 NEW_2
	var_4647_int = 0; // 0x3955 PushV
	var_4647_int = 2; // 0x3956 MovI
	func_7635(var_4647_int); // 0x3957 NEW_2
	var_4648_int = 0; // 0x3959 PushV
	var_4648_int = 3; // 0x395a MovI
	func_7635(var_4648_int); // 0x395b NEW_2
	
Label_14685:
	return 2; // 0x395d Return
}


func_10539()
{
	var_4845_string = ""; var_4846_bool = 0; // 0x292c PushV
	var_4845_string = "cot_viktor@door1"; // 0x292d MovS
	var_4846_bool = 0; // 0x292e MovB
	func_151(var_4845_string, var_4846_bool); // 0x292f NEW_2
	return 0; // 0x2931 Return
}


func_1322(var_2208_bool, var_2209_int)
{
	var_2210_int = 8; // 0x52b PushI
	var_2208_bool = var_2209_int >= var_2210_int; // 0x52c GE2
	return 0; // 0x52d Return
}


func_11565()
{
	var_4939_string = ""; var_4940_bool = 0; // 0x2d2e PushV
	var_4939_string = "mnogogrannik_han@door1"; // 0x2d2f MovS
	var_4940_bool = 1; // 0x2d30 MovB
	func_151(var_4939_string, var_4940_bool); // 0x2d31 NEW_2
	return 0; // 0x2d33 Return
}


func_1326(var_1806_int, var_1807_int, var_1808_int)
{
	var_1809_int = 0; var_1810_int = 0; // 0x52e PushV
	var_1811_int = 1; // 0x52f PushI
	var_1812_int = var_1807_int + var_1811_int; // 0x530 Add
	var_1813_int = 12; // 0x531 PushI
	var_1814_bool = var_1812_int == var_1813_int; // 0x532 Eq
	if(var_1814_bool == 0) goto Label_1333; // 0x533 JumpB
	return 2; // 0x534 Return
	
Label_1333:
	var_1815_bool = 0; // 0x535 PushV
	var_1815_bool = 0; // 0x536 MovB
	var_1816_bool = 0; // 0x537 PushV
	var_1816_bool = 1; // 0x538 MovB
	var_1817_int = 7; // 0x539 PushI
	var_1818_bool = var_1808_int < var_1817_int; // 0x53a LT
	if(var_1818_bool == 0) goto Label_1344; // 0x53b JumpB
	var_1819_int = 21; // 0x53c PushI
	var_1820_bool = var_1808_int > var_1819_int; // 0x53d GT
	if(var_1820_bool == 0) goto Label_1344; // 0x53e JumpB
	var_1816_bool = 0; // 0x53f MovB
	
Label_1344:
	if(var_1816_bool == 0) goto Label_1349; // 0x540 JumpB
	var_1821_int = 0; // 0x541 PushI
	var_1822_bool = var_1807_int != var_1821_int; // 0x542 Neq
	if(var_1822_bool == 0) goto Label_1349; // 0x543 JumpB
	var_1815_bool = 1; // 0x544 MovB
	
Label_1349:
	if(var_1815_bool == 0) goto Label_1364; // 0x545 JumpB
	var_1823_float = 0; var_1824_int = 0; // 0x546 PushV
	var_1824_int = var_1807_int; // 0x547 Mov
	func_1091(var_1823_float, var_1824_int); // 0x548 NEW_2
	var_1810_int = var_1823_float; // 0x549 Mov
	var_1825_int = var_1810_int; // 0x54b Push
	if(var_1825_int == 0) goto Label_1364; // 0x54c JumpB
	var_1826_int = 0; var_1827_string = ""; var_1828_string = ""; var_1829_int = 0; // 0x54d PushV
	var_1826_int = var_1806_int; // 0x54e Mov
	var_1827_string = "pers_grabitel"; // 0x54f MovS
	var_1828_string = "grabitel.xml"; // 0x550 MovS
	var_1829_int = var_1810_int; // 0x551 Mov
	func_453(var_1826_int, var_1827_string, var_1828_string, var_1829_int); // 0x552 NEW_2
	
Label_1364:
	var_1830_bool = 0; var_1831_int = 0; var_1832_int = 0; // 0x554 PushV
	var_1831_int = var_1807_int; // 0x555 Mov
	var_1832_int = var_1808_int; // 0x556 Mov
	func_1060(var_1830_bool, var_1831_int, var_1832_int); // 0x557 NEW_2
	if(var_1830_bool == 0) goto Label_1441; // 0x559 JumpB
	var_1833_int = 0; var_1834_string = ""; var_1835_string = ""; var_1836_int = 0; // 0x55a PushV
	var_1833_int = var_1806_int; // 0x55b Mov
	var_1834_string = "pers_unosha"; // 0x55c MovS
	var_1835_string = "unosha_attacker.xml"; // 0x55d MovS
	var_1836_int = 1; // 0x55e MovI
	func_453(var_1833_int, var_1834_string, var_1835_string, var_1836_int); // 0x55f NEW_2
	var_1837_int = 0; var_1838_string = ""; var_1839_string = ""; var_1840_int = 0; // 0x561 PushV
	var_1837_int = var_1806_int; // 0x562 Mov
	var_1838_string = "pers_unosha"; // 0x563 MovS
	var_1839_string = "unosha2_attacker.xml"; // 0x564 MovS
	var_1840_int = 1; // 0x565 MovI
	func_453(var_1837_int, var_1838_string, var_1839_string, var_1840_int); // 0x566 NEW_2
	var_1841_int = 0; var_1842_string = ""; var_1843_string = ""; var_1844_int = 0; // 0x568 PushV
	var_1841_int = var_1806_int; // 0x569 Mov
	var_1842_string = "pers_worker"; // 0x56a MovS
	var_1843_string = "worker_attacker.xml"; // 0x56b MovS
	var_1844_int = 1; // 0x56c MovI
	func_453(var_1841_int, var_1842_string, var_1843_string, var_1844_int); // 0x56d NEW_2
	var_1845_int = 0; var_1846_string = ""; var_1847_string = ""; var_1848_int = 0; // 0x56f PushV
	var_1845_int = var_1806_int; // 0x570 Mov
	var_1846_string = "pers_worker"; // 0x571 MovS
	var_1847_string = "worker2_attacker.xml"; // 0x572 MovS
	var_1848_int = 1; // 0x573 MovI
	func_453(var_1845_int, var_1846_string, var_1847_string, var_1848_int); // 0x574 NEW_2
	var_1849_int = 0; var_1850_string = ""; var_1851_string = ""; var_1852_int = 0; // 0x576 PushV
	var_1849_int = var_1806_int; // 0x577 Mov
	var_1850_string = "pers_wasted_girl"; // 0x578 MovS
	var_1851_string = "wasted_girl.xml"; // 0x579 MovS
	var_1852_int = 2; // 0x57a MovI
	func_453(var_1849_int, var_1850_string, var_1851_string, var_1852_int); // 0x57b NEW_2
	var_1853_int = 0; var_1854_string = ""; var_1855_string = ""; var_1856_int = 0; // 0x57d PushV
	var_1853_int = var_1806_int; // 0x57e Mov
	var_1854_string = "pers_wasted_male"; // 0x57f MovS
	var_1855_string = "wasted_male.xml"; // 0x580 MovS
	var_1856_int = 3; // 0x581 MovI
	func_453(var_1853_int, var_1854_string, var_1855_string, var_1856_int); // 0x582 NEW_2
	var_1857_int = 0; var_1858_string = ""; var_1859_string = ""; var_1860_int = 0; // 0x584 PushV
	var_1857_int = var_1806_int; // 0x585 Mov
	var_1858_string = "pers_woman"; // 0x586 MovS
	var_1859_string = "woman.xml"; // 0x587 MovS
	var_1860_int = 3; // 0x588 MovI
	func_453(var_1857_int, var_1858_string, var_1859_string, var_1860_int); // 0x589 NEW_2
	var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0; // 0x58b PushV
	var_1861_int = var_1806_int; // 0x58c Mov
	var_1862_string = "pers_boy"; // 0x58d MovS
	var_1863_string = "boy.xml"; // 0x58e MovS
	var_1864_int = 1; // 0x58f MovI
	func_453(var_1861_int, var_1862_string, var_1863_string, var_1864_int); // 0x590 NEW_2
	var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0; // 0x592 PushV
	var_1865_int = var_1806_int; // 0x593 Mov
	var_1866_string = "pers_girl"; // 0x594 MovS
	var_1867_string = "girl.xml"; // 0x595 MovS
	var_1868_int = 1; // 0x596 MovI
	func_453(var_1865_int, var_1866_string, var_1867_string, var_1868_int); // 0x597 NEW_2
	var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0; // 0x599 PushV
	var_1869_int = var_1806_int; // 0x59a Mov
	var_1870_string = "pers_girl"; // 0x59b MovS
	var_1871_string = "girl2.xml"; // 0x59c MovS
	var_1872_int = 1; // 0x59d MovI
	func_453(var_1869_int, var_1870_string, var_1871_string, var_1872_int); // 0x59e NEW_2
	goto Label_1536; // 0x5a0 Jump
	
Label_1536:
	var_1873_bool = 0; // 0x600 PushV
	var_1873_bool = 0; // 0x601 MovB
	var_1874_bool = 0; // 0x602 PushV
	var_1874_bool = 0; // 0x603 MovB
	var_1875_int = 0; // 0x604 PushI
	var_1876_bool = var_1807_int == var_1875_int; // 0x605 Eq
	if(var_1876_bool == 0) goto Label_1547; // 0x606 JumpB
	var_1877_int = 12; // 0x607 PushI
	var_1878_bool = var_1808_int > var_1877_int; // 0x608 GT
	if(var_1878_bool == 0) goto Label_1547; // 0x609 JumpB
	var_1874_bool = 1; // 0x60a MovB
	
Label_1547:
	if(var_1874_bool == 0) goto Label_1552; // 0x60b JumpB
	var_1879_int = 22; // 0x60c PushI
	var_1880_bool = var_1808_int < var_1879_int; // 0x60d LT
	if(var_1880_bool == 0) goto Label_1552; // 0x60e JumpB
	var_1873_bool = 1; // 0x60f MovB
	
Label_1552:
	if(var_1873_bool == 0) goto Label_1560; // 0x610 JumpB
	var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0; // 0x611 PushV
	var_1881_int = var_1806_int; // 0x612 Mov
	var_1882_string = "pers_wasted_girl"; // 0x613 MovS
	var_1883_string = "wasted_girl_killme.xml"; // 0x614 MovS
	var_1884_int = 1; // 0x615 MovI
	func_453(var_1881_int, var_1882_string, var_1883_string, var_1884_int); // 0x616 NEW_2
	
Label_1560:
	var_1885_bool = 0; var_1886_int = 0; var_1887_int = 0; // 0x618 PushV
	var_1886_int = var_1807_int; // 0x619 Mov
	var_1887_int = var_1808_int; // 0x61a Mov
	func_1295(var_1885_bool, var_1886_int, var_1887_int); // 0x61b NEW_2
	if(var_1885_bool == 0) goto Label_1573; // 0x61d JumpB
	var_1888_int = 0; var_1889_string = ""; var_1890_string = ""; var_1891_int = 0; // 0x61e PushV
	var_1888_int = var_1806_int; // 0x61f Mov
	var_1889_string = "pers_soldat"; // 0x620 MovS
	var_1890_string = "soldier_marauder.xml"; // 0x621 MovS
	var_1891_int = 2; // 0x622 MovI
	func_453(var_1888_int, var_1889_string, var_1890_string, var_1891_int); // 0x623 NEW_2
	
Label_1573:
	return 2; // 0x625 Return
	
Label_1441:
	var_1892_bool = 0; // 0x5a1 PushV
	var_1892_bool = 0; // 0x5a2 MovB
	var_1893_int = 8; // 0x5a3 PushI
	var_1894_bool = var_1808_int > var_1893_int; // 0x5a4 GT
	if(var_1894_bool == 0) goto Label_1450; // 0x5a5 JumpB
	var_1895_int = 21; // 0x5a6 PushI
	var_1896_bool = var_1808_int < var_1895_int; // 0x5a7 LT
	if(var_1896_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_1892_bool = 1; // 0x5a9 MovB
	
Label_1450:
	if(var_1892_bool == 0) goto Label_1508; // 0x5aa JumpB
	var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0; // 0x5ab PushV
	var_1897_int = var_1806_int; // 0x5ac Mov
	var_1898_string = "pers_wasted_girl"; // 0x5ad MovS
	var_1899_string = "wasted_girl.xml"; // 0x5ae MovS
	var_1900_int = 2; // 0x5af MovI
	func_453(var_1897_int, var_1898_string, var_1899_string, var_1900_int); // 0x5b0 NEW_2
	var_1901_int = 0; var_1902_string = ""; var_1903_string = ""; var_1904_int = 0; // 0x5b2 PushV
	var_1901_int = var_1806_int; // 0x5b3 Mov
	var_1902_string = "pers_wasted_male"; // 0x5b4 MovS
	var_1903_string = "wasted_male.xml"; // 0x5b5 MovS
	var_1904_int = 3; // 0x5b6 MovI
	func_453(var_1901_int, var_1902_string, var_1903_string, var_1904_int); // 0x5b7 NEW_2
	var_1905_int = 0; var_1906_string = ""; var_1907_string = ""; var_1908_int = 0; // 0x5b9 PushV
	var_1905_int = var_1806_int; // 0x5ba Mov
	var_1906_string = "pers_woman"; // 0x5bb MovS
	var_1907_string = "woman.xml"; // 0x5bc MovS
	var_1908_int = 3; // 0x5bd MovI
	func_453(var_1905_int, var_1906_string, var_1907_string, var_1908_int); // 0x5be NEW_2
	var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0; // 0x5c0 PushV
	var_1909_int = var_1806_int; // 0x5c1 Mov
	var_1910_string = "pers_unosha"; // 0x5c2 MovS
	var_1911_string = "unosha.xml"; // 0x5c3 MovS
	var_1912_int = 2; // 0x5c4 MovI
	func_453(var_1909_int, var_1910_string, var_1911_string, var_1912_int); // 0x5c5 NEW_2
	var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0; // 0x5c7 PushV
	var_1913_int = var_1806_int; // 0x5c8 Mov
	var_1914_string = "pers_unosha"; // 0x5c9 MovS
	var_1915_string = "unosha2.xml"; // 0x5ca MovS
	var_1916_int = 2; // 0x5cb MovI
	func_453(var_1913_int, var_1914_string, var_1915_string, var_1916_int); // 0x5cc NEW_2
	var_1917_int = 0; var_1918_string = ""; var_1919_string = ""; var_1920_int = 0; // 0x5ce PushV
	var_1917_int = var_1806_int; // 0x5cf Mov
	var_1918_string = "pers_boy"; // 0x5d0 MovS
	var_1919_string = "boy.xml"; // 0x5d1 MovS
	var_1920_int = 2; // 0x5d2 MovI
	func_453(var_1917_int, var_1918_string, var_1919_string, var_1920_int); // 0x5d3 NEW_2
	var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0; // 0x5d5 PushV
	var_1921_int = var_1806_int; // 0x5d6 Mov
	var_1922_string = "pers_girl"; // 0x5d7 MovS
	var_1923_string = "girl.xml"; // 0x5d8 MovS
	var_1924_int = 1; // 0x5d9 MovI
	func_453(var_1921_int, var_1922_string, var_1923_string, var_1924_int); // 0x5da NEW_2
	var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0; // 0x5dc PushV
	var_1925_int = var_1806_int; // 0x5dd Mov
	var_1926_string = "pers_girl"; // 0x5de MovS
	var_1927_string = "girl2.xml"; // 0x5df MovS
	var_1928_int = 1; // 0x5e0 MovI
	func_453(var_1925_int, var_1926_string, var_1927_string, var_1928_int); // 0x5e1 NEW_2
	goto Label_1536; // 0x5e3 Jump
	
Label_1508:
	var_1929_int = 0; var_1930_string = ""; var_1931_string = ""; var_1932_int = 0; // 0x5e4 PushV
	var_1929_int = var_1806_int; // 0x5e5 Mov
	var_1930_string = "pers_wasted_girl"; // 0x5e6 MovS
	var_1931_string = "wasted_girl.xml"; // 0x5e7 MovS
	var_1932_int = 1; // 0x5e8 MovI
	func_453(var_1929_int, var_1930_string, var_1931_string, var_1932_int); // 0x5e9 NEW_2
	var_1933_int = 0; var_1934_string = ""; var_1935_string = ""; var_1936_int = 0; // 0x5eb PushV
	var_1933_int = var_1806_int; // 0x5ec Mov
	var_1934_string = "pers_wasted_male"; // 0x5ed MovS
	var_1935_string = "wasted_male.xml"; // 0x5ee MovS
	var_1936_int = 2; // 0x5ef MovI
	func_453(var_1933_int, var_1934_string, var_1935_string, var_1936_int); // 0x5f0 NEW_2
	var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0; // 0x5f2 PushV
	var_1937_int = var_1806_int; // 0x5f3 Mov
	var_1938_string = "pers_unosha"; // 0x5f4 MovS
	var_1939_string = "unosha.xml"; // 0x5f5 MovS
	var_1940_int = 1; // 0x5f6 MovI
	func_453(var_1937_int, var_1938_string, var_1939_string, var_1940_int); // 0x5f7 NEW_2
	var_1941_int = 0; var_1942_string = ""; var_1943_string = ""; var_1944_int = 0; // 0x5f9 PushV
	var_1941_int = var_1806_int; // 0x5fa Mov
	var_1942_string = "pers_unosha"; // 0x5fb MovS
	var_1943_string = "unosha2.xml"; // 0x5fc MovS
	var_1944_int = 1; // 0x5fd MovI
	func_453(var_1941_int, var_1942_string, var_1943_string, var_1944_int); // 0x5fe NEW_2
}


func_10546()
{
	var_5717_string = ""; var_5718_bool = 0; // 0x2933 PushV
	var_5717_string = "cot_anna@door1"; // 0x2934 MovS
	var_5718_bool = 1; // 0x2935 MovB
	func_151(var_5717_string, var_5718_bool); // 0x2936 NEW_2
	return 0; // 0x2938 Return
}


func_11572()
{
	var_5785_string = "b8DankoLetter2"; // 0x2d35 PushS
	var_5786_int = 1; // 0x2d36 PushI
	SetVariable(var_5785_string, var_5786_int); // 0x2d37 Func
	return 0; // 0x2d39 Return
}


func_311(var_121_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x137 PushV
	var_129_int = 16; // 0x138 PushI
	irand(var_126_int, var_129_int); // 0x139 Func
	var_127_int = 0; // 0x13b MovI
	
Label_316:
	var_130_int = 16; // 0x13c PushI
	var_131_bool = var_127_int < var_130_int; // 0x13d LT
	if(var_131_bool == 0) goto Label_349; // 0x13e JumpB
	var_132_int = var_127_int + var_126_int; // 0x13f Add
	var_133_int = 16; // 0x140 PushI
	var_128_int = var_132_int % var_133_int; // 0x141 Mod2
	var_134_bool = 0; // 0x142 PushV
	var_134_bool = 0; // 0x143 MovB
	var_135_bool = 0; var_136_int = 0; // 0x144 PushV
	var_136_int = var_128_int; // 0x145 Mov
	func_350(var_135_bool, var_136_int); // 0x146 NEW_2
	if(var_135_bool == 0) goto Label_336; // 0x148 JumpB
	var_144_bool = 0; var_145_int = 0; var_146_int = 0; // 0x149 PushV
	var_145_int = var_128_int; // 0x14a Mov
	var_146_int = var_121_int; // 0x14b Mov
	func_14595(var_144_bool, var_145_int, var_146_int); // 0x14c NEW_2
	if(var_144_bool == 0) goto Label_336; // 0x14e JumpB
	var_134_bool = 1; // 0x14f MovB
	
Label_336:
	if(var_134_bool == 0) goto Label_346; // 0x150 JumpB
	var_163_int = 0; // 0x151 PushV
	var_163_int = var_128_int; // 0x152 Mov
	func_392(var_163_int); // 0x153 NEW_2
	var_164_string = "Diseased Region: "; // 0x155 PushS
	var_165_int = var_164_string + var_128_int; // 0x156 Add
	Trace(var_165_int); // 0x157 Func
	return 6; // 0x159 Return
	
Label_346:
	var_166_int = 1; // 0x15a PushI
	var_127_int = var_127_int + var_166_int; // 0x15b Add2
	goto Label_316; // 0x15c Jump
	
Label_349:
	return 6; // 0x15d Return
}


func_10553()
{
	var_4861_string = ""; var_4862_bool = 0; // 0x293a PushV
	var_4861_string = "cot_anna@door1"; // 0x293b MovS
	var_4862_bool = 0; // 0x293c MovB
	func_151(var_4861_string, var_4862_bool); // 0x293d NEW_2
	return 0; // 0x293f Return
}


func_5433(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object)
{
	var_1347_int = 0; // 0x153a PushI
	var_1348_bool = var_1342_int == var_1347_int; // 0x153b Eq
	if(var_1348_bool == 0) goto Label_5473; // 0x153c JumpB
	var_1349_int = 0; var_1350_bool = 0; // 0x153d PushV
	var_1349_int = 5; // 0x153e MovI
	var_1350_bool = 0; // 0x153f MovB
	func_746(var_1349_int, var_1350_bool); // 0x1540 NEW_2
	var_1351_int = 0; var_1352_bool = 0; var_1353_int = 0; // 0x1542 PushV
	var_1351_int = 5; // 0x1543 MovI
	var_1352_bool = 0; // 0x1544 MovB
	var_1353_int = 1; // 0x1545 MovI
	func_763(var_1351_int, var_1352_bool, var_1353_int); // 0x1546 NEW_2
	var_1354_int = 0; var_1355_int = 0; var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj(); // 0x1548 PushV
	var_1354_int = 5; // 0x1549 MovI
	var_1355_int = var_1341_int; // 0x154a Mov
	var_1356_object = var_1343_object; // 0x154b Mov
	var_1357_object = var_1344_object; // 0x154c Mov
	var_1358_object = var_1345_object; // 0x154d Mov
	func_572(var_1355_int, var_1356_object, var_1357_object, var_1358_object); // 0x154e NEW_2
	var_1359_object = Obj(); var_1360_int = 0; // 0x1550 PushV
	var_1359_object = var_1346_object; // 0x1551 Mov
	var_1360_int = 0; // 0x1552 MovI
	func_255(var_1360_int); // 0x1553 NEW_2
	var_1361_int = 0; var_1362_bool = 0; var_1363_int = 0; // 0x1555 PushV
	var_1361_int = 5; // 0x1556 MovI
	var_1362_bool = 0; // 0x1557 MovB
	var_1363_int = 4; // 0x1558 MovI
	func_820(var_1361_int, var_1362_bool, var_1363_int); // 0x1559 NEW_2
	var_1364_int = 0; var_1365_bool = 0; var_1366_int = 0; // 0x155b PushV
	var_1364_int = 5; // 0x155c MovI
	var_1365_bool = 0; // 0x155d MovB
	var_1366_int = 4; // 0x155e MovI
	func_882(var_1364_int, var_1365_bool, var_1366_int); // 0x155f NEW_2
	
Label_5473:
	var_1367_int = 0; var_1368_int = 0; // 0x1561 PushV
	var_1367_int = 5; // 0x1562 MovI
	var_1368_int = var_1342_int; // 0x1563 Mov
	func_933(var_1367_int, var_1368_int); // 0x1564 NEW_2
	var_1369_int = 0; var_1370_int = 0; var_1371_int = 0; // 0x1566 PushV
	var_1369_int = 5; // 0x1567 MovI
	var_1370_int = var_1341_int; // 0x1568 Mov
	var_1371_int = var_1342_int; // 0x1569 Mov
	func_1847(var_1369_int, var_1370_int, var_1371_int); // 0x156a NEW_2
	return 0; // 0x156c Return
}


func_11578()
{
	var_5799_string = "b9KlaraLetter"; // 0x2d3b PushS
	var_5800_int = 1; // 0x2d3c PushI
	SetVariable(var_5799_string, var_5800_int); // 0x2d3d Func
	return 0; // 0x2d3f Return
}


func_10560()
{
	var_4915_string = ""; var_4916_bool = 0; // 0x2941 PushV
	var_4915_string = "house_vlad@door2"; // 0x2942 MovS
	var_4916_bool = 1; // 0x2943 MovB
	func_151(var_4915_string, var_4916_bool); // 0x2944 NEW_2
	return 0; // 0x2946 Return
}


func_11584()
{
	var_5424_int = 0; var_5425_string = ""; // 0x2d41 PushV
	var_5425_string = "map_chertez_state"; // 0x2d42 MovS
	func_106(var_5424_int, var_5425_string); // 0x2d43 NEW_2
	var_5426_int = 2; // 0x2d45 PushI
	var_5427_bool = var_5424_int <= var_5426_int; // 0x2d46 LE
	if(var_5427_bool == 0) goto Label_11600; // 0x2d47 JumpB
	var_5428_string = "map_chertez_state"; // 0x2d48 PushS
	var_5429_int = 2; // 0x2d49 PushI
	SetVariable(var_5428_string, var_5429_int); // 0x2d4a Func
	var_5430_string = "map_chertez_force"; // 0x2d4c PushS
	var_5431_int = 1; // 0x2d4d PushI
	SetVariable(var_5430_string, var_5431_int); // 0x2d4e Func
	
Label_11600:
	return 0; // 0x2d50 Return
}


func_10567()
{
	var_4927_string = ""; var_4928_bool = 0; // 0x2948 PushV
	var_4927_string = "cot_maria@door1"; // 0x2949 MovS
	var_4928_bool = 1; // 0x294a MovB
	func_151(var_4927_string, var_4928_bool); // 0x294b NEW_2
	return 0; // 0x294d Return
}


func_8520(var_4267_int, var_4268_int)
{
	var_4270_object = Obj(); var_4271_object = Obj(); var_4272_string = ""; var_4273_int = 0; var_4274_int = 0; var_4275_int = 0; var_4276_object = Obj(); var_4277_object = Obj(); var_4278_string = ""; var_4279_int = 0; var_4280_int = 0; var_4281_int = 0; // 0x2148 PushV
	var_4282_bool = 0; // 0x2149 PushV
	var_4282_bool = 0; // 0x214a MovB
	var_4283_int = 5; // 0x214b PushI
	var_4284_bool = var_4268_int == var_4283_int; // 0x214c Eq
	if(var_4284_bool == 0) goto Label_8530; // 0x214d JumpB
	var_4285_int = 7; // 0x214e PushI
	var_4286_bool = var_4267_int >= var_4285_int; // 0x214f GE
	if(var_4286_bool == 0) goto Label_8530; // 0x2150 JumpB
	var_4282_bool = 1; // 0x2151 MovB
	
Label_8530:
	if(var_4282_bool == 0) goto Label_8541; // 0x2152 JumpB
	var_4287_int = 0; // 0x2153 PushV
	func_12303(var_4287_int); // 0x2154 NEW_2
	var_4288_int = 2; // 0x2156 PushI
	var_4289_bool = var_4287_int != var_4288_int; // 0x2157 Neq
	if(var_4289_bool == 0) goto Label_8540; // 0x2158 JumpB
	func_7731(); // 0x215a NEW_2
	
Label_8540:
	goto Label_8560; // 0x215c Jump
	
Label_8560:
	var_4336_bool = 0; // 0x2170 PushV
	var_4336_bool = 0; // 0x2171 MovB
	var_4337_int = 7; // 0x2172 PushI
	var_4338_bool = var_4268_int == var_4337_int; // 0x2173 Eq
	if(var_4338_bool == 0) goto Label_8569; // 0x2174 JumpB
	var_4339_int = 1; // 0x2175 PushI
	var_4340_bool = var_4267_int != var_4339_int; // 0x2176 Neq
	if(var_4340_bool == 0) goto Label_8569; // 0x2177 JumpB
	var_4336_bool = 1; // 0x2178 MovB
	
Label_8569:
	if(var_4336_bool == 0) goto Label_8573; // 0x2179 JumpB
	var_4341_int = 100; // 0x217a PushI
	SendWorldWndMessage(var_4341_int); // 0x217b Func
	
Label_8573:
	var_4342_int = 0; // 0x217d PushI
	var_4343_bool = var_4268_int == var_4342_int; // 0x217e Eq
	if(var_4343_bool == 0) goto Label_8661; // 0x217f JumpB
	func_8698(); // 0x2181 NEW_2
	func_8773(); // 0x2184 NEW_2
	var_4437_int = 6; // 0x2186 PushI
	var_4438_bool = var_4267_int == var_4437_int; // 0x2187 Eq
	if(var_4438_bool == 0) goto Label_8594; // 0x2188 JumpB
	GetMainOutdoorScene(var_4276_object); // 0x2189 Func
	var_4439_string = "shed_corpse"; // 0x218b PushS
	var_4440_string = "splash_object_wo_pf.bin"; // 0x218c PushS
	var_4441_cvector = CVector(0.0, 0.0, 0.0); // 0x218d PushVec
	AddScriptedActor(var_4277_object, var_4439_string, var_4440_string, var_4276_object, var_4441_cvector); // 0x218e Func
	var_4277_object = 0; // 0x2190 SetNull
	var_4276_object = 0; // 0x2191 SetNull
	
Label_8594:
	var_4442_int = 9; // 0x2192 PushI
	var_4443_bool = var_4267_int == var_4442_int; // 0x2193 Eq
	if(var_4443_bool == 0) goto Label_8600; // 0x2194 JumpB
	func_8822(); // 0x2196 NEW_2
	
Label_8600:
	var_4457_int = 1; // 0x2198 PushI
	var_4458_bool = var_4267_int != var_4457_int; // 0x2199 Neq
	if(var_4458_bool == 0) goto Label_8661; // 0x219a JumpB
	var_4459_int = 0; // 0x219b PushV
	func_12303(var_4459_int); // 0x219c NEW_2
	var_4460_int = 1; // 0x219e PushI
	var_4461_bool = var_4459_int == var_4460_int; // 0x219f Eq
	if(var_4461_bool == 0) goto Label_8619; // 0x21a0 JumpB
	var_4462_string = "b"; // 0x21a1 PushS
	var_4463_int = 1; // 0x21a2 PushI
	var_4464_int = var_4267_int - var_4463_int; // 0x21a3 Sub
	var_4465_int = var_4462_string + var_4464_int; // 0x21a4 Add
	var_4466_string = "q01"; // 0x21a5 PushS
	var_4467_int = var_4465_int + var_4466_string; // 0x21a6 Add
	GetVariable(var_4467_int, var_4279_int); // 0x21a7 Func
	var_4278_string = "volonteers_burah"; // 0x21a9 MovS
	goto Label_8644; // 0x21aa Jump
	
Label_8644:
	Trace(var_4278_string); // 0x21c4 Func
	var_4468_int = 1000; // 0x21c6 PushI
	var_4469_bool = var_4279_int == var_4468_int; // 0x21c7 Eq
	if(var_4469_bool == 0) goto Label_8655; // 0x21c8 JumpB
	var_4470_bool = 0; var_4471_string = ""; var_4472_string = ""; var_4473_string = ""; // 0x21c9 PushV
	var_4471_string = var_4278_string; // 0x21ca Mov
	var_4472_string = "rescue_locked"; // 0x21cb MovS
	var_4473_string = ""; // 0x21cc MovS
	func_201(var_4470_bool, var_4471_string, var_4472_string, var_4473_string); // 0x21cd NEW_2
	
Label_8655:
	var_4477_bool = 0; var_4478_string = ""; var_4479_string = ""; var_4480_string = ""; // 0x21cf PushV
	var_4478_string = var_4278_string; // 0x21d0 Mov
	var_4479_string = "update"; // 0x21d1 MovS
	var_4480_string = ""; // 0x21d2 MovS
	func_201(var_4477_bool, var_4478_string, var_4479_string, var_4480_string); // 0x21d3 NEW_2
	
Label_8661:
	var_4481_bool = 0; // 0x21d5 PushV
	var_4481_bool = 0; // 0x21d6 MovB
	var_4482_int = 6; // 0x21d7 PushI
	var_4483_bool = var_4267_int == var_4482_int; // 0x21d8 Eq
	if(var_4483_bool == 0) goto Label_8670; // 0x21d9 JumpB
	var_4484_int = 0; // 0x21da PushI
	var_4485_bool = var_4268_int == var_4484_int; // 0x21db Eq
	if(var_4485_bool == 0) goto Label_8670; // 0x21dc JumpB
	var_4481_bool = 1; // 0x21dd MovB
	
Label_8670:
	if(var_4481_bool == 0) goto Label_8674; // 0x21de JumpB
	func_7851(); // 0x21e0 NEW_2
	
Label_8674:
	var_4488_bool = 0; // 0x21e2 PushV
	var_4488_bool = 0; // 0x21e3 MovB
	var_4489_int = 7; // 0x21e4 PushI
	var_4490_bool = var_4267_int == var_4489_int; // 0x21e5 Eq
	if(var_4490_bool == 0) goto Label_8683; // 0x21e6 JumpB
	var_4491_int = 0; // 0x21e7 PushI
	var_4492_bool = var_4268_int == var_4491_int; // 0x21e8 Eq
	if(var_4492_bool == 0) goto Label_8683; // 0x21e9 JumpB
	var_4488_bool = 1; // 0x21ea MovB
	
Label_8683:
	if(var_4488_bool == 0) goto Label_8697; // 0x21eb JumpB
	var_4493_object = GlobalVars[14]; // 0x21ec PushGE
	size(var_4280_int); // 0x21ed ObjFunc
	var_4281_int = 0; // 0x21ef MovI
	
Label_8688:
	var_4494_bool = var_4281_int < var_4280_int; // 0x21f0 LT
	if(var_4494_bool == 0) goto Label_8697; // 0x21f1 JumpB
	var_4495_int = 0; // 0x21f2 PushV
	var_4495_int = var_4281_int; // 0x21f3 Mov
	func_7558(var_4495_int); // 0x21f4 NEW_2
	var_4548_int = 1; // 0x21f6 PushI
	var_4281_int = var_4281_int + var_4548_int; // 0x21f7 Add2
	goto Label_8688; // 0x21f8 Jump
	
Label_8697:
	return 12; // 0x21f9 Return
	
Label_8619:
	var_4549_int = 0; // 0x21ab PushV
	func_12303(var_4549_int); // 0x21ac NEW_2
	var_4550_int = 0; // 0x21ae PushI
	var_4551_bool = var_4549_int == var_4550_int; // 0x21af Eq
	if(var_4551_bool == 0) goto Label_8635; // 0x21b0 JumpB
	var_4552_string = "d"; // 0x21b1 PushS
	var_4553_int = 1; // 0x21b2 PushI
	var_4554_int = var_4267_int - var_4553_int; // 0x21b3 Sub
	var_4555_int = var_4552_string + var_4554_int; // 0x21b4 Add
	var_4556_string = "q01"; // 0x21b5 PushS
	var_4557_int = var_4555_int + var_4556_string; // 0x21b6 Add
	GetVariable(var_4557_int, var_4279_int); // 0x21b7 Func
	var_4278_string = "volonteers_danko"; // 0x21b9 MovS
	goto Label_8644; // 0x21ba Jump
	
Label_8635:
	var_4558_string = "k"; // 0x21bb PushS
	var_4559_int = 1; // 0x21bc PushI
	var_4560_int = var_4267_int - var_4559_int; // 0x21bd Sub
	var_4561_int = var_4558_string + var_4560_int; // 0x21be Add
	var_4562_string = "q01"; // 0x21bf PushS
	var_4563_int = var_4561_int + var_4562_string; // 0x21c0 Add
	GetVariable(var_4563_int, var_4279_int); // 0x21c1 Func
	var_4278_string = "volonteers_klara"; // 0x21c3 MovS
	
Label_8541:
	var_4564_bool = 0; // 0x215d PushV
	var_4564_bool = 0; // 0x215e MovB
	var_4565_int = 22; // 0x215f PushI
	var_4566_bool = var_4268_int == var_4565_int; // 0x2160 Eq
	if(var_4566_bool == 0) goto Label_8550; // 0x2161 JumpB
	var_4567_int = 7; // 0x2162 PushI
	var_4568_bool = var_4267_int >= var_4567_int; // 0x2163 GE
	if(var_4568_bool == 0) goto Label_8550; // 0x2164 JumpB
	var_4564_bool = 1; // 0x2165 MovB
	
Label_8550:
	if(var_4564_bool == 0) goto Label_8560; // 0x2166 JumpB
	var_4569_int = 0; // 0x2167 PushV
	func_12303(var_4569_int); // 0x2168 NEW_2
	var_4570_int = 2; // 0x216a PushI
	var_4571_bool = var_4569_int != var_4570_int; // 0x216b Neq
	if(var_4571_bool == 0) goto Label_8560; // 0x216c JumpB
	func_7794(); // 0x216e NEW_2
}


func_10574()
{
	var_4803_string = ""; var_4804_bool = 0; // 0x294f PushV
	var_4803_string = "warehouse_rubin@door1"; // 0x2950 MovS
	var_4804_bool = 1; // 0x2951 MovB
	func_151(var_4803_string, var_4804_bool); // 0x2952 NEW_2
	return 0; // 0x2954 Return
}


func_9551(var_3169_int, var_3170_int, var_3171_int)
{
	var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); var_3179_object = Obj(); // 0x254f PushV
	var_3180_object = GlobalVars[8]; // 0x2550 PushGE
	get(var_3176_object, var_3169_int); // 0x2551 ObjFunc
	var_3181_object = GlobalVars[9]; // 0x2553 PushGE
	get(var_3177_object, var_3169_int); // 0x2554 ObjFunc
	var_3182_object = GlobalVars[10]; // 0x2556 PushGE
	get(var_3178_object, var_3169_int); // 0x2557 ObjFunc
	var_3183_object = GlobalVars[13]; // 0x2559 PushGE
	get(var_3179_object, var_3169_int); // 0x255a ObjFunc
	var_3184_int = 0; // 0x255c PushI
	var_3185_bool = var_3169_int == var_3184_int; // 0x255d Eq
	if(var_3185_bool == 0) goto Label_9577; // 0x255e JumpB
	var_3186_int = 0; var_3187_int = 0; var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); // 0x255f PushV
	var_3186_int = var_3170_int; // 0x2560 Mov
	var_3187_int = var_3171_int; // 0x2561 Mov
	var_3188_object = var_3176_object; // 0x2562 Mov
	var_3189_object = var_3177_object; // 0x2563 Mov
	var_3190_object = var_3178_object; // 0x2564 Mov
	var_3191_object = var_3179_object; // 0x2565 Mov
	func_4441(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object); // 0x2566 NEW_2
	goto Label_9771; // 0x2568 Jump
	
Label_9771:
	return 8; // 0x262b Return
	
Label_9577:
	var_3398_int = 1; // 0x2569 PushI
	var_3399_bool = var_3169_int == var_3398_int; // 0x256a Eq
	if(var_3399_bool == 0) goto Label_9590; // 0x256b JumpB
	var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj(); // 0x256c PushV
	var_3400_int = var_3170_int; // 0x256d Mov
	var_3401_int = var_3171_int; // 0x256e Mov
	var_3402_object = var_3176_object; // 0x256f Mov
	var_3403_object = var_3177_object; // 0x2570 Mov
	var_3404_object = var_3178_object; // 0x2571 Mov
	var_3405_object = var_3179_object; // 0x2572 Mov
	func_4638(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object); // 0x2573 NEW_2
	goto Label_9771; // 0x2575 Jump
	
Label_9590:
	var_3534_int = 2; // 0x2576 PushI
	var_3535_bool = var_3169_int == var_3534_int; // 0x2577 Eq
	if(var_3535_bool == 0) goto Label_9603; // 0x2578 JumpB
	var_3536_int = 0; var_3537_int = 0; var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); var_3541_object = Obj(); // 0x2579 PushV
	var_3536_int = var_3170_int; // 0x257a Mov
	var_3537_int = var_3171_int; // 0x257b Mov
	var_3538_object = var_3176_object; // 0x257c Mov
	var_3539_object = var_3177_object; // 0x257d Mov
	var_3540_object = var_3178_object; // 0x257e Mov
	var_3541_object = var_3179_object; // 0x257f Mov
	func_4844(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object); // 0x2580 NEW_2
	goto Label_9771; // 0x2582 Jump
	
Label_9603:
	var_3677_int = 3; // 0x2583 PushI
	var_3678_bool = var_3169_int == var_3677_int; // 0x2584 Eq
	if(var_3678_bool == 0) goto Label_9616; // 0x2585 JumpB
	var_3679_int = 0; var_3680_int = 0; var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); var_3684_object = Obj(); // 0x2586 PushV
	var_3679_int = var_3170_int; // 0x2587 Mov
	var_3680_int = var_3171_int; // 0x2588 Mov
	var_3681_object = var_3176_object; // 0x2589 Mov
	var_3682_object = var_3177_object; // 0x258a Mov
	var_3683_object = var_3178_object; // 0x258b Mov
	var_3684_object = var_3179_object; // 0x258c Mov
	func_5074(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object); // 0x258d NEW_2
	goto Label_9771; // 0x258f Jump
	
Label_9616:
	var_3710_int = 4; // 0x2590 PushI
	var_3711_bool = var_3169_int == var_3710_int; // 0x2591 Eq
	if(var_3711_bool == 0) goto Label_9629; // 0x2592 JumpB
	var_3712_int = 0; var_3713_int = 0; var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); var_3717_object = Obj(); // 0x2593 PushV
	var_3712_int = var_3170_int; // 0x2594 Mov
	var_3713_int = var_3171_int; // 0x2595 Mov
	var_3714_object = var_3176_object; // 0x2596 Mov
	var_3715_object = var_3177_object; // 0x2597 Mov
	var_3716_object = var_3178_object; // 0x2598 Mov
	var_3717_object = var_3179_object; // 0x2599 Mov
	func_5292(var_3712_int, var_3713_int, var_3714_object, var_3715_object, var_3716_object, var_3717_object); // 0x259a NEW_2
	goto Label_9771; // 0x259c Jump
	
Label_9629:
	var_3743_int = 5; // 0x259d PushI
	var_3744_bool = var_3169_int == var_3743_int; // 0x259e Eq
	if(var_3744_bool == 0) goto Label_9642; // 0x259f JumpB
	var_3745_int = 0; var_3746_int = 0; var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); var_3750_object = Obj(); // 0x25a0 PushV
	var_3745_int = var_3170_int; // 0x25a1 Mov
	var_3746_int = var_3171_int; // 0x25a2 Mov
	var_3747_object = var_3176_object; // 0x25a3 Mov
	var_3748_object = var_3177_object; // 0x25a4 Mov
	var_3749_object = var_3178_object; // 0x25a5 Mov
	var_3750_object = var_3179_object; // 0x25a6 Mov
	func_5537(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object); // 0x25a7 NEW_2
	goto Label_9771; // 0x25a9 Jump
	
Label_9642:
	var_3776_int = 6; // 0x25aa PushI
	var_3777_bool = var_3169_int == var_3776_int; // 0x25ab Eq
	if(var_3777_bool == 0) goto Label_9655; // 0x25ac JumpB
	var_3778_int = 0; var_3779_int = 0; var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); var_3783_object = Obj(); // 0x25ad PushV
	var_3778_int = var_3170_int; // 0x25ae Mov
	var_3779_int = var_3171_int; // 0x25af Mov
	var_3780_object = var_3176_object; // 0x25b0 Mov
	var_3781_object = var_3177_object; // 0x25b1 Mov
	var_3782_object = var_3178_object; // 0x25b2 Mov
	var_3783_object = var_3179_object; // 0x25b3 Mov
	func_5605(); // 0x25b4 NEW_2
	goto Label_9771; // 0x25b6 Jump
	
Label_9655:
	var_3786_int = 7; // 0x25b7 PushI
	var_3787_bool = var_3169_int == var_3786_int; // 0x25b8 Eq
	if(var_3787_bool == 0) goto Label_9668; // 0x25b9 JumpB
	var_3788_int = 0; var_3789_int = 0; var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); var_3793_object = Obj(); // 0x25ba PushV
	var_3788_int = var_3170_int; // 0x25bb Mov
	var_3789_int = var_3171_int; // 0x25bc Mov
	var_3790_object = var_3176_object; // 0x25bd Mov
	var_3791_object = var_3177_object; // 0x25be Mov
	var_3792_object = var_3178_object; // 0x25bf Mov
	var_3793_object = var_3179_object; // 0x25c0 Mov
	func_5760(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object); // 0x25c1 NEW_2
	goto Label_9771; // 0x25c3 Jump
	
Label_9668:
	var_3929_int = 8; // 0x25c4 PushI
	var_3930_bool = var_3169_int == var_3929_int; // 0x25c5 Eq
	if(var_3930_bool == 0) goto Label_9681; // 0x25c6 JumpB
	var_3931_int = 0; var_3932_int = 0; var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); var_3936_object = Obj(); // 0x25c7 PushV
	var_3931_int = var_3170_int; // 0x25c8 Mov
	var_3932_int = var_3171_int; // 0x25c9 Mov
	var_3933_object = var_3176_object; // 0x25ca Mov
	var_3934_object = var_3177_object; // 0x25cb Mov
	var_3935_object = var_3178_object; // 0x25cc Mov
	var_3936_object = var_3179_object; // 0x25cd Mov
	func_5960(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object); // 0x25ce NEW_2
	goto Label_9771; // 0x25d0 Jump
	
Label_9681:
	var_3962_int = 9; // 0x25d1 PushI
	var_3963_bool = var_3169_int == var_3962_int; // 0x25d2 Eq
	if(var_3963_bool == 0) goto Label_9694; // 0x25d3 JumpB
	var_3964_int = 0; var_3965_int = 0; var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); var_3969_object = Obj(); // 0x25d4 PushV
	var_3964_int = var_3170_int; // 0x25d5 Mov
	var_3965_int = var_3171_int; // 0x25d6 Mov
	var_3966_object = var_3176_object; // 0x25d7 Mov
	var_3967_object = var_3177_object; // 0x25d8 Mov
	var_3968_object = var_3178_object; // 0x25d9 Mov
	var_3969_object = var_3179_object; // 0x25da Mov
	func_6163(var_3964_int, var_3965_int, var_3966_object, var_3967_object, var_3968_object, var_3969_object); // 0x25db NEW_2
	goto Label_9771; // 0x25dd Jump
	
Label_9694:
	var_3995_int = 10; // 0x25de PushI
	var_3996_bool = var_3169_int == var_3995_int; // 0x25df Eq
	if(var_3996_bool == 0) goto Label_9707; // 0x25e0 JumpB
	var_3997_int = 0; var_3998_int = 0; var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); var_4002_object = Obj(); // 0x25e1 PushV
	var_3997_int = var_3170_int; // 0x25e2 Mov
	var_3998_int = var_3171_int; // 0x25e3 Mov
	var_3999_object = var_3176_object; // 0x25e4 Mov
	var_4000_object = var_3177_object; // 0x25e5 Mov
	var_4001_object = var_3178_object; // 0x25e6 Mov
	var_4002_object = var_3179_object; // 0x25e7 Mov
	func_6372(var_3997_int, var_3998_int, var_3999_object, var_4000_object, var_4001_object, var_4002_object); // 0x25e8 NEW_2
	goto Label_9771; // 0x25ea Jump
	
Label_9707:
	var_4028_int = 11; // 0x25eb PushI
	var_4029_bool = var_3169_int == var_4028_int; // 0x25ec Eq
	if(var_4029_bool == 0) goto Label_9720; // 0x25ed JumpB
	var_4030_int = 0; var_4031_int = 0; var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); var_4035_object = Obj(); // 0x25ee PushV
	var_4030_int = var_3170_int; // 0x25ef Mov
	var_4031_int = var_3171_int; // 0x25f0 Mov
	var_4032_object = var_3176_object; // 0x25f1 Mov
	var_4033_object = var_3177_object; // 0x25f2 Mov
	var_4034_object = var_3178_object; // 0x25f3 Mov
	var_4035_object = var_3179_object; // 0x25f4 Mov
	func_6584(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object); // 0x25f5 NEW_2
	goto Label_9771; // 0x25f7 Jump
	
Label_9720:
	var_4061_int = 12; // 0x25f8 PushI
	var_4062_bool = var_3169_int == var_4061_int; // 0x25f9 Eq
	if(var_4062_bool == 0) goto Label_9733; // 0x25fa JumpB
	var_4063_int = 0; var_4064_int = 0; var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); var_4068_object = Obj(); // 0x25fb PushV
	var_4063_int = var_3170_int; // 0x25fc Mov
	var_4064_int = var_3171_int; // 0x25fd Mov
	var_4065_object = var_3176_object; // 0x25fe Mov
	var_4066_object = var_3177_object; // 0x25ff Mov
	var_4067_object = var_3178_object; // 0x2600 Mov
	var_4068_object = var_3179_object; // 0x2601 Mov
	func_6781(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object); // 0x2602 NEW_2
	goto Label_9771; // 0x2604 Jump
	
Label_9733:
	var_4094_int = 13; // 0x2605 PushI
	var_4095_bool = var_3169_int == var_4094_int; // 0x2606 Eq
	if(var_4095_bool == 0) goto Label_9746; // 0x2607 JumpB
	var_4096_int = 0; var_4097_int = 0; var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); var_4101_object = Obj(); // 0x2608 PushV
	var_4096_int = var_3170_int; // 0x2609 Mov
	var_4097_int = var_3171_int; // 0x260a Mov
	var_4098_object = var_3176_object; // 0x260b Mov
	var_4099_object = var_3177_object; // 0x260c Mov
	var_4100_object = var_3178_object; // 0x260d Mov
	var_4101_object = var_3179_object; // 0x260e Mov
	func_6984(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object); // 0x260f NEW_2
	goto Label_9771; // 0x2611 Jump
	
Label_9746:
	var_4127_int = 14; // 0x2612 PushI
	var_4128_bool = var_3169_int == var_4127_int; // 0x2613 Eq
	if(var_4128_bool == 0) goto Label_9759; // 0x2614 JumpB
	var_4129_int = 0; var_4130_int = 0; var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); var_4134_object = Obj(); // 0x2615 PushV
	var_4129_int = var_3170_int; // 0x2616 Mov
	var_4130_int = var_3171_int; // 0x2617 Mov
	var_4131_object = var_3176_object; // 0x2618 Mov
	var_4132_object = var_3177_object; // 0x2619 Mov
	var_4133_object = var_3178_object; // 0x261a Mov
	var_4134_object = var_3179_object; // 0x261b Mov
	func_7184(var_4129_int, var_4130_int, var_4131_object, var_4132_object, var_4133_object, var_4134_object); // 0x261c NEW_2
	goto Label_9771; // 0x261e Jump
	
Label_9759:
	var_4270_int = 15; // 0x261f PushI
	var_4271_bool = var_3169_int == var_4270_int; // 0x2620 Eq
	if(var_4271_bool == 0) goto Label_9771; // 0x2621 JumpB
	var_4272_int = 0; var_4273_int = 0; var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); var_4277_object = Obj(); // 0x2622 PushV
	var_4272_int = var_3170_int; // 0x2623 Mov
	var_4273_int = var_3171_int; // 0x2624 Mov
	var_4274_object = var_3176_object; // 0x2625 Mov
	var_4275_object = var_3177_object; // 0x2626 Mov
	var_4276_object = var_3178_object; // 0x2627 Mov
	var_4277_object = var_3179_object; // 0x2628 Mov
	func_7366(var_4272_int, var_4273_int, var_4274_object, var_4275_object, var_4276_object, var_4277_object); // 0x2629 NEW_2
}


func_6480(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object)
{
	var_1676_int = 0; // 0x1951 PushI
	var_1677_bool = var_1671_int == var_1676_int; // 0x1952 Eq
	if(var_1677_bool == 0) goto Label_6520; // 0x1953 JumpB
	var_1678_int = 0; var_1679_bool = 0; // 0x1954 PushV
	var_1678_int = 11; // 0x1955 MovI
	var_1679_bool = 0; // 0x1956 MovB
	func_746(var_1678_int, var_1679_bool); // 0x1957 NEW_2
	var_1680_int = 0; var_1681_bool = 0; var_1682_int = 0; // 0x1959 PushV
	var_1680_int = 11; // 0x195a MovI
	var_1681_bool = 0; // 0x195b MovB
	var_1682_int = 1; // 0x195c MovI
	func_763(var_1680_int, var_1681_bool, var_1682_int); // 0x195d NEW_2
	var_1683_int = 0; var_1684_int = 0; var_1685_object = Obj(); var_1686_object = Obj(); var_1687_object = Obj(); // 0x195f PushV
	var_1683_int = 11; // 0x1960 MovI
	var_1684_int = var_1670_int; // 0x1961 Mov
	var_1685_object = var_1672_object; // 0x1962 Mov
	var_1686_object = var_1673_object; // 0x1963 Mov
	var_1687_object = var_1674_object; // 0x1964 Mov
	func_572(var_1684_int, var_1685_object, var_1686_object, var_1687_object); // 0x1965 NEW_2
	var_1688_object = Obj(); var_1689_int = 0; // 0x1967 PushV
	var_1688_object = var_1675_object; // 0x1968 Mov
	var_1689_int = 0; // 0x1969 MovI
	func_255(var_1689_int); // 0x196a NEW_2
	var_1690_int = 0; var_1691_bool = 0; var_1692_int = 0; // 0x196c PushV
	var_1690_int = 11; // 0x196d MovI
	var_1691_bool = 0; // 0x196e MovB
	var_1692_int = 5; // 0x196f MovI
	func_820(var_1690_int, var_1691_bool, var_1692_int); // 0x1970 NEW_2
	var_1693_int = 0; var_1694_bool = 0; var_1695_int = 0; // 0x1972 PushV
	var_1693_int = 11; // 0x1973 MovI
	var_1694_bool = 0; // 0x1974 MovB
	var_1695_int = 5; // 0x1975 MovI
	func_882(var_1693_int, var_1694_bool, var_1695_int); // 0x1976 NEW_2
	
Label_6520:
	var_1696_int = 0; var_1697_int = 0; // 0x1978 PushV
	var_1696_int = 11; // 0x1979 MovI
	var_1697_int = var_1671_int; // 0x197a Mov
	func_933(var_1696_int, var_1697_int); // 0x197b NEW_2
	var_1698_int = 0; var_1699_int = 0; var_1700_int = 0; // 0x197d PushV
	var_1698_int = 11; // 0x197e MovI
	var_1699_int = var_1670_int; // 0x197f Mov
	var_1700_int = var_1671_int; // 0x1980 Mov
	func_1574(var_1698_int, var_1699_int, var_1700_int); // 0x1981 NEW_2
	return 0; // 0x1983 Return
}


func_11601()
{
	var_5446_int = 0; var_5447_string = ""; // 0x2d52 PushV
	var_5447_string = "map_chertez_state"; // 0x2d53 MovS
	func_106(var_5446_int, var_5447_string); // 0x2d54 NEW_2
	var_5448_int = 3; // 0x2d56 PushI
	var_5449_bool = var_5446_int <= var_5448_int; // 0x2d57 LE
	if(var_5449_bool == 0) goto Label_11617; // 0x2d58 JumpB
	var_5450_string = "map_chertez_state"; // 0x2d59 PushS
	var_5451_int = 3; // 0x2d5a PushI
	SetVariable(var_5450_string, var_5451_int); // 0x2d5b Func
	var_5452_string = "map_chertez_force"; // 0x2d5d PushS
	var_5453_int = 1; // 0x2d5e PushI
	SetVariable(var_5452_string, var_5453_int); // 0x2d5f Func
	
Label_11617:
	return 0; // 0x2d61 Return
}


func_10581()
{
	var_6173_object = Obj(); var_6174_object = Obj(); var_6175_object = Obj(); var_6176_object = Obj(); // 0x2955 PushV
	var_6177_object = Obj(); // 0x2956 PushV
	func_12286(var_6177_object); // 0x2957 NEW_2
	var_6175_object = var_6177_object; // 0x2958 Mov
	var_6178_string = "b1BigVlad"; // 0x295a PushS
	FindMark(var_6176_object, var_6178_string); // 0x295b ObjFunc
	var_6179_object = var_6176_object; // 0x295d Push
	if(var_6179_object == 0) goto Label_10593; // 0x295e JumpB
	Remove(); // 0x295f ObjFunc
	
Label_10593:
	var_6180_string = "b1BigVlad11Hours"; // 0x2961 PushS
	FindMark(var_6176_object, var_6180_string); // 0x2962 ObjFunc
	var_6181_object = var_6176_object; // 0x2964 Push
	if(var_6181_object == 0) goto Label_10600; // 0x2965 JumpB
	Remove(); // 0x2966 ObjFunc
	
Label_10600:
	var_6182_string = "b1KapellaGotoLaska"; // 0x2968 PushS
	FindMark(var_6176_object, var_6182_string); // 0x2969 ObjFunc
	var_6183_object = var_6176_object; // 0x296b Push
	if(var_6183_object == 0) goto Label_10607; // 0x296c JumpB
	Remove(); // 0x296d ObjFunc
	
Label_10607:
	var_6184_string = "b1KapellaGotoNotkin"; // 0x296f PushS
	FindMark(var_6176_object, var_6184_string); // 0x2970 ObjFunc
	var_6185_object = var_6176_object; // 0x2972 Push
	if(var_6185_object == 0) goto Label_10614; // 0x2973 JumpB
	Remove(); // 0x2974 ObjFunc
	
Label_10614:
	var_6186_string = "b1MladVladGotoGrif"; // 0x2976 PushS
	FindMark(var_6176_object, var_6186_string); // 0x2977 ObjFunc
	var_6187_object = var_6176_object; // 0x2979 Push
	if(var_6187_object == 0) goto Label_10621; // 0x297a JumpB
	Remove(); // 0x297b ObjFunc
	
Label_10621:
	var_6188_string = "b1q01BakWillBeAt18"; // 0x297d PushS
	FindMark(var_6176_object, var_6188_string); // 0x297e ObjFunc
	var_6189_object = var_6176_object; // 0x2980 Push
	if(var_6189_object == 0) goto Label_10628; // 0x2981 JumpB
	Remove(); // 0x2982 ObjFunc
	
Label_10628:
	var_6190_string = "b1q01BigVladGotoKapella"; // 0x2984 PushS
	FindMark(var_6176_object, var_6190_string); // 0x2985 ObjFunc
	var_6191_object = var_6176_object; // 0x2987 Push
	if(var_6191_object == 0) goto Label_10635; // 0x2988 JumpB
	Remove(); // 0x2989 ObjFunc
	
Label_10635:
	var_6192_string = "b1q01BigVladGotoMladVlad"; // 0x298b PushS
	FindMark(var_6176_object, var_6192_string); // 0x298c ObjFunc
	var_6193_object = var_6176_object; // 0x298e Push
	if(var_6193_object == 0) goto Label_10642; // 0x298f JumpB
	Remove(); // 0x2990 ObjFunc
	
Label_10642:
	var_6194_string = "b1q01GrifGotoDanko"; // 0x2992 PushS
	FindMark(var_6176_object, var_6194_string); // 0x2993 ObjFunc
	var_6195_object = var_6176_object; // 0x2995 Push
	if(var_6195_object == 0) goto Label_10649; // 0x2996 JumpB
	Remove(); // 0x2997 ObjFunc
	
Label_10649:
	var_6196_string = "b1q01NotkinGotoGrif"; // 0x2999 PushS
	FindMark(var_6176_object, var_6196_string); // 0x299a ObjFunc
	var_6197_object = var_6176_object; // 0x299c Push
	if(var_6197_object == 0) goto Label_10656; // 0x299d JumpB
	Remove(); // 0x299e ObjFunc
	
Label_10656:
	var_6198_string = "b1q02GrifGotoLaska"; // 0x29a0 PushS
	FindMark(var_6176_object, var_6198_string); // 0x29a1 ObjFunc
	var_6199_object = var_6176_object; // 0x29a3 Push
	if(var_6199_object == 0) goto Label_10663; // 0x29a4 JumpB
	Remove(); // 0x29a5 ObjFunc
	
Label_10663:
	var_6200_string = "b1q02LaskaGotoGorbin"; // 0x29a7 PushS
	FindMark(var_6176_object, var_6200_string); // 0x29a8 ObjFunc
	var_6201_object = var_6176_object; // 0x29aa Push
	if(var_6201_object == 0) goto Label_10670; // 0x29ab JumpB
	Remove(); // 0x29ac ObjFunc
	
Label_10670:
	var_6202_string = "b1q02LaskaSelf"; // 0x29ae PushS
	FindMark(var_6176_object, var_6202_string); // 0x29af ObjFunc
	var_6203_object = var_6176_object; // 0x29b1 Push
	if(var_6203_object == 0) goto Label_10677; // 0x29b2 JumpB
	Remove(); // 0x29b3 ObjFunc
	
Label_10677:
	var_6204_string = "b1q03GrifGotoDoberman"; // 0x29b5 PushS
	FindMark(var_6176_object, var_6204_string); // 0x29b6 ObjFunc
	var_6205_object = var_6176_object; // 0x29b8 Push
	if(var_6205_object == 0) goto Label_10684; // 0x29b9 JumpB
	Remove(); // 0x29ba ObjFunc
	
Label_10684:
	var_6206_string = "b1q03NotkinGotoDoberman"; // 0x29bc PushS
	FindMark(var_6176_object, var_6206_string); // 0x29bd ObjFunc
	var_6207_object = var_6176_object; // 0x29bf Push
	if(var_6207_object == 0) goto Label_10691; // 0x29c0 JumpB
	Remove(); // 0x29c1 ObjFunc
	
Label_10691:
	var_6208_string = "b1GrifGotoNotkin"; // 0x29c3 PushS
	FindMark(var_6176_object, var_6208_string); // 0x29c4 ObjFunc
	var_6209_object = var_6176_object; // 0x29c6 Push
	if(var_6209_object == 0) goto Label_10698; // 0x29c7 JumpB
	Remove(); // 0x29c8 ObjFunc
	
Label_10698:
	var_6210_string = "b1q03NotkinGotoDobermanSelf"; // 0x29ca PushS
	FindMark(var_6176_object, var_6210_string); // 0x29cb ObjFunc
	var_6211_object = var_6176_object; // 0x29cd Push
	if(var_6211_object == 0) goto Label_10705; // 0x29ce JumpB
	Remove(); // 0x29cf ObjFunc
	
Label_10705:
	var_6212_string = "b1LaskaGotoMishka"; // 0x29d1 PushS
	FindMark(var_6176_object, var_6212_string); // 0x29d2 ObjFunc
	var_6213_object = var_6176_object; // 0x29d4 Push
	if(var_6213_object == 0) goto Label_10712; // 0x29d5 JumpB
	Remove(); // 0x29d6 ObjFunc
	
Label_10712:
	var_6214_string = "b1q05Spi4kaGotoLaska"; // 0x29d8 PushS
	FindMark(var_6176_object, var_6214_string); // 0x29d9 ObjFunc
	var_6215_object = var_6176_object; // 0x29db Push
	if(var_6215_object == 0) goto Label_10719; // 0x29dc JumpB
	Remove(); // 0x29dd ObjFunc
	
Label_10719:
	var_6216_string = "b1q05Spi4kaGotoMishka"; // 0x29df PushS
	FindMark(var_6176_object, var_6216_string); // 0x29e0 ObjFunc
	var_6217_object = var_6176_object; // 0x29e2 Push
	if(var_6217_object == 0) goto Label_10726; // 0x29e3 JumpB
	Remove(); // 0x29e4 ObjFunc
	
Label_10726:
	var_6218_string = "b1q05PatrolGroup"; // 0x29e6 PushS
	FindMark(var_6176_object, var_6218_string); // 0x29e7 ObjFunc
	var_6219_object = var_6176_object; // 0x29e9 Push
	if(var_6219_object == 0) goto Label_10733; // 0x29ea JumpB
	Remove(); // 0x29eb ObjFunc
	
Label_10733:
	var_6220_string = "b1BurahFatherHome"; // 0x29ed PushS
	FindMark(var_6176_object, var_6220_string); // 0x29ee ObjFunc
	var_6221_object = var_6176_object; // 0x29f0 Push
	if(var_6221_object == 0) goto Label_10740; // 0x29f1 JumpB
	Remove(); // 0x29f2 ObjFunc
	
Label_10740:
	var_6222_bool = 0; var_6223_int = 0; // 0x29f4 PushV
	var_6223_int = 200; // 0x29f5 MovI
	func_12261(var_6222_bool, var_6223_int); // 0x29f6 NEW_2
	var_6224_bool = 0; var_6225_int = 0; // 0x29f8 PushV
	var_6225_int = 205; // 0x29f9 MovI
	func_12261(var_6224_bool, var_6225_int); // 0x29fa NEW_2
	var_6226_bool = 0; var_6227_int = 0; // 0x29fc PushV
	var_6227_int = 209; // 0x29fd MovI
	func_12261(var_6226_bool, var_6227_int); // 0x29fe NEW_2
	var_6228_bool = 0; var_6229_int = 0; // 0x2a00 PushV
	var_6229_int = 242; // 0x2a01 MovI
	func_12261(var_6228_bool, var_6229_int); // 0x2a02 NEW_2
	var_6230_bool = 0; var_6231_int = 0; // 0x2a04 PushV
	var_6231_int = 582; // 0x2a05 MovI
	func_12261(var_6230_bool, var_6231_int); // 0x2a06 NEW_2
	return 4; // 0x2a08 Return
}


func_4441(var_3186_int, var_3187_int, var_3188_object, var_3189_object, var_3190_object, var_3191_object)
{
	var_3192_int = 0; // 0x115a PushI
	var_3193_bool = var_3187_int == var_3192_int; // 0x115b Eq
	if(var_3193_bool == 0) goto Label_4481; // 0x115c JumpB
	var_3194_int = 0; var_3195_bool = 0; // 0x115d PushV
	var_3194_int = 0; // 0x115e MovI
	var_3195_bool = 0; // 0x115f MovB
	func_746(var_3194_int, var_3195_bool); // 0x1160 NEW_2
	var_3196_int = 0; var_3197_bool = 0; var_3198_int = 0; // 0x1162 PushV
	var_3196_int = 0; // 0x1163 MovI
	var_3197_bool = 0; // 0x1164 MovB
	var_3198_int = 1; // 0x1165 MovI
	func_763(var_3196_int, var_3197_bool, var_3198_int); // 0x1166 NEW_2
	var_3199_int = 0; var_3200_int = 0; var_3201_object = Obj(); var_3202_object = Obj(); var_3203_object = Obj(); // 0x1168 PushV
	var_3199_int = 0; // 0x1169 MovI
	var_3200_int = var_3186_int; // 0x116a Mov
	var_3201_object = var_3188_object; // 0x116b Mov
	var_3202_object = var_3189_object; // 0x116c Mov
	var_3203_object = var_3190_object; // 0x116d Mov
	func_670(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object); // 0x116e NEW_2
	var_3238_object = Obj(); var_3239_int = 0; // 0x1170 PushV
	var_3238_object = var_3191_object; // 0x1171 Mov
	var_3239_int = 2; // 0x1172 MovI
	func_255(var_3239_int); // 0x1173 NEW_2
	var_3240_int = 0; var_3241_bool = 0; var_3242_int = 0; // 0x1175 PushV
	var_3240_int = 0; // 0x1176 MovI
	var_3241_bool = 0; // 0x1177 MovB
	var_3242_int = 4; // 0x1178 MovI
	func_820(var_3240_int, var_3241_bool, var_3242_int); // 0x1179 NEW_2
	var_3243_int = 0; var_3244_bool = 0; var_3245_int = 0; // 0x117b PushV
	var_3243_int = 0; // 0x117c MovI
	var_3244_bool = 1; // 0x117d MovB
	var_3245_int = 4; // 0x117e MovI
	func_882(var_3243_int, var_3244_bool, var_3245_int); // 0x117f NEW_2
	
Label_4481:
	var_3246_int = 0; var_3247_bool = 0; // 0x1181 PushV
	var_3246_int = 0; // 0x1182 MovI
	var_3247_bool = 0; // 0x1183 MovB
	func_729(var_3246_int, var_3247_bool); // 0x1184 NEW_2
	var_3248_int = 0; var_3249_int = 0; var_3250_int = 0; // 0x1186 PushV
	var_3248_int = 0; // 0x1187 MovI
	var_3249_int = var_3186_int; // 0x1188 Mov
	var_3250_int = var_3187_int; // 0x1189 Mov
	func_3985(var_3248_int, var_3249_int, var_3250_int); // 0x118a NEW_2
	return 0; // 0x118c Return
}


func_3421(var_4157_int, var_4158_int, var_4159_int)
{
	var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; var_4167_int = 0; // 0xd5d PushV
	var_4168_bool = 0; // 0xd5e PushV
	var_4168_bool = 0; // 0xd5f MovB
	var_4169_int = 8; // 0xd60 PushI
	var_4170_bool = var_4159_int > var_4169_int; // 0xd61 GT
	if(var_4170_bool == 0) goto Label_3431; // 0xd62 JumpB
	var_4171_int = 21; // 0xd63 PushI
	var_4172_bool = var_4159_int < var_4171_int; // 0xd64 LT
	if(var_4172_bool == 0) goto Label_3431; // 0xd65 JumpB
	var_4168_bool = 1; // 0xd66 MovB
	
Label_3431:
	if(var_4168_bool == 0) goto Label_3508; // 0xd67 JumpB
	var_4173_int = 0; var_4174_string = ""; var_4175_string = ""; var_4176_int = 0; // 0xd68 PushV
	var_4173_int = var_4157_int; // 0xd69 Mov
	var_4174_string = "pers_rat"; // 0xd6a MovS
	var_4175_string = "rat.xml"; // 0xd6b MovS
	var_4176_int = 3; // 0xd6c MovI
	func_453(var_4173_int, var_4174_string, var_4175_string, var_4176_int); // 0xd6d NEW_2
	var_4177_int = 0; var_4178_string = ""; var_4179_string = ""; var_4180_int = 0; // 0xd6f PushV
	var_4177_int = var_4157_int; // 0xd70 Mov
	var_4178_string = "pers_alkash"; // 0xd71 MovS
	var_4179_string = "alkash.xml"; // 0xd72 MovS
	var_4180_int = 2; // 0xd73 MovI
	func_453(var_4177_int, var_4178_string, var_4179_string, var_4180_int); // 0xd74 NEW_2
	var_4181_int = 0; var_4182_string = ""; var_4183_string = ""; var_4184_int = 0; // 0xd76 PushV
	var_4181_int = var_4157_int; // 0xd77 Mov
	var_4182_string = "pers_dohodyaga"; // 0xd78 MovS
	var_4183_string = "dohodyaga.xml"; // 0xd79 MovS
	var_4184_int = 1; // 0xd7a MovI
	func_453(var_4181_int, var_4182_string, var_4183_string, var_4184_int); // 0xd7b NEW_2
	var_4185_int = 2; // 0xd7d PushI
	var_4186_float = 0; var_4187_int = 0; // 0xd7e PushV
	var_4187_int = var_4158_int; // 0xd7f Mov
	func_1115(var_4186_float, var_4187_int); // 0xd80 NEW_2
	var_4164_int = var_4185_int * var_4186_float; // 0xd82 Mult2
	var_4188_int = var_4164_int; // 0xd83 Push
	if(var_4188_int == 0) goto Label_3468; // 0xd84 JumpB
	var_4189_int = 0; var_4190_string = ""; var_4191_string = ""; var_4192_int = 0; // 0xd85 PushV
	var_4189_int = var_4157_int; // 0xd86 Mov
	var_4190_string = "pers_grabitel"; // 0xd87 MovS
	var_4191_string = "grabitel.xml"; // 0xd88 MovS
	var_4192_int = var_4164_int; // 0xd89 Mov
	func_453(var_4189_int, var_4190_string, var_4191_string, var_4192_int); // 0xd8a NEW_2
	
Label_3468:
	var_4193_int = 1; // 0xd8c PushI
	var_4194_int = var_4158_int + var_4193_int; // 0xd8d Add
	var_4195_int = 2; // 0xd8e PushI
	var_4196_bool = var_4194_int >= var_4195_int; // 0xd8f GE
	if(var_4196_bool == 0) goto Label_3492; // 0xd90 JumpB
	var_4197_int = 0; var_4198_string = ""; var_4199_string = ""; var_4200_int = 0; // 0xd91 PushV
	var_4197_int = var_4157_int; // 0xd92 Mov
	var_4198_string = "pers_patrool"; // 0xd93 MovS
	var_4199_string = "patrol.xml"; // 0xd94 MovS
	var_4200_int = 2; // 0xd95 MovI
	func_453(var_4197_int, var_4198_string, var_4199_string, var_4200_int); // 0xd96 NEW_2
	var_4201_bool = 0; var_4202_int = 0; // 0xd98 PushV
	var_4202_int = var_4158_int; // 0xd99 Mov
	func_1322(var_4201_bool, var_4202_int); // 0xd9a NEW_2
	if(var_4201_bool == 0) goto Label_3492; // 0xd9c JumpB
	var_4203_int = 0; var_4204_string = ""; var_4205_string = ""; var_4206_int = 0; // 0xd9d PushV
	var_4203_int = var_4157_int; // 0xd9e Mov
	var_4204_string = "pers_soldat_hand"; // 0xd9f MovS
	var_4205_string = "soldier_patrol.xml"; // 0xda0 MovS
	var_4206_int = 1; // 0xda1 MovI
	func_453(var_4203_int, var_4204_string, var_4205_string, var_4206_int); // 0xda2 NEW_2
	
Label_3492:
	var_4207_int = 1; // 0xda4 PushI
	var_4208_float = 0; var_4209_int = 0; // 0xda5 PushV
	var_4209_int = var_4158_int; // 0xda6 Mov
	func_1205(var_4208_float, var_4209_int); // 0xda7 NEW_2
	var_4165_int = var_4207_int * var_4208_float; // 0xda9 Mult2
	var_4210_int = var_4165_int; // 0xdaa Push
	if(var_4210_int == 0) goto Label_3507; // 0xdab JumpB
	var_4211_int = 0; var_4212_string = ""; var_4213_string = ""; var_4214_int = 0; // 0xdac PushV
	var_4211_int = var_4157_int; // 0xdad Mov
	var_4212_string = "pers_bomber"; // 0xdae MovS
	var_4213_string = "bomber.xml"; // 0xdaf MovS
	var_4214_int = var_4165_int; // 0xdb0 Mov
	func_453(var_4211_int, var_4212_string, var_4213_string, var_4214_int); // 0xdb1 NEW_2
	
Label_3507:
	goto Label_3583; // 0xdb3 Jump
	
Label_3583:
	var_4215_bool = 0; var_4216_int = 0; var_4217_int = 0; // 0xdff PushV
	var_4216_int = var_4158_int; // 0xe00 Mov
	var_4217_int = var_4159_int; // 0xe01 Mov
	func_1295(var_4215_bool, var_4216_int, var_4217_int); // 0xe02 NEW_2
	if(var_4215_bool == 0) goto Label_3596; // 0xe04 JumpB
	var_4218_int = 0; var_4219_string = ""; var_4220_string = ""; var_4221_int = 0; // 0xe05 PushV
	var_4218_int = var_4157_int; // 0xe06 Mov
	var_4219_string = "pers_soldat"; // 0xe07 MovS
	var_4220_string = "soldier_marauder.xml"; // 0xe08 MovS
	var_4221_int = 2; // 0xe09 MovI
	func_453(var_4218_int, var_4219_string, var_4220_string, var_4221_int); // 0xe0a NEW_2
	
Label_3596:
	var_4222_bool = 0; var_4223_int = 0; // 0xe0c PushV
	var_4223_int = var_4158_int; // 0xe0d Mov
	func_1322(var_4222_bool, var_4223_int); // 0xe0e NEW_2
	if(var_4222_bool == 0) goto Label_3608; // 0xe10 JumpB
	var_4224_int = 0; var_4225_string = ""; var_4226_string = ""; var_4227_int = 0; // 0xe11 PushV
	var_4224_int = var_4157_int; // 0xe12 Mov
	var_4225_string = "pers_sanitar"; // 0xe13 MovS
	var_4226_string = "sanitar.xml"; // 0xe14 MovS
	var_4227_int = 1; // 0xe15 MovI
	func_453(var_4224_int, var_4225_string, var_4226_string, var_4227_int); // 0xe16 NEW_2
	
Label_3608:
	return 8; // 0xe18 Return
	
Label_3508:
	var_4228_int = 0; var_4229_string = ""; var_4230_string = ""; var_4231_int = 0; // 0xdb4 PushV
	var_4228_int = var_4157_int; // 0xdb5 Mov
	var_4229_string = "pers_rat"; // 0xdb6 MovS
	var_4230_string = "rat.xml"; // 0xdb7 MovS
	var_4231_int = 5; // 0xdb8 MovI
	func_453(var_4228_int, var_4229_string, var_4230_string, var_4231_int); // 0xdb9 NEW_2
	var_4232_int = 0; var_4233_string = ""; var_4234_string = ""; var_4235_int = 0; // 0xdbb PushV
	var_4232_int = var_4157_int; // 0xdbc Mov
	var_4233_string = "pers_alkash"; // 0xdbd MovS
	var_4234_string = "alkash.xml"; // 0xdbe MovS
	var_4235_int = 1; // 0xdbf MovI
	func_453(var_4232_int, var_4233_string, var_4234_string, var_4235_int); // 0xdc0 NEW_2
	var_4236_int = 1; // 0xdc2 PushI
	var_4237_int = var_4158_int + var_4236_int; // 0xdc3 Add
	var_4238_int = 2; // 0xdc4 PushI
	var_4239_bool = var_4237_int >= var_4238_int; // 0xdc5 GE
	if(var_4239_bool == 0) goto Label_3546; // 0xdc6 JumpB
	var_4240_int = 0; var_4241_string = ""; var_4242_string = ""; var_4243_int = 0; // 0xdc7 PushV
	var_4240_int = var_4157_int; // 0xdc8 Mov
	var_4241_string = "pers_patrool"; // 0xdc9 MovS
	var_4242_string = "patrol.xml"; // 0xdca MovS
	var_4243_int = 1; // 0xdcb MovI
	func_453(var_4240_int, var_4241_string, var_4242_string, var_4243_int); // 0xdcc NEW_2
	var_4244_bool = 0; var_4245_int = 0; // 0xdce PushV
	var_4245_int = var_4158_int; // 0xdcf Mov
	func_1322(var_4244_bool, var_4245_int); // 0xdd0 NEW_2
	if(var_4244_bool == 0) goto Label_3546; // 0xdd2 JumpB
	var_4246_int = 0; var_4247_string = ""; var_4248_string = ""; var_4249_int = 0; // 0xdd3 PushV
	var_4246_int = var_4157_int; // 0xdd4 Mov
	var_4247_string = "pers_soldat_hand"; // 0xdd5 MovS
	var_4248_string = "soldier_patrol.xml"; // 0xdd6 MovS
	var_4249_int = 1; // 0xdd7 MovI
	func_453(var_4246_int, var_4247_string, var_4248_string, var_4249_int); // 0xdd8 NEW_2
	
Label_3546:
	var_4250_int = 0; var_4251_string = ""; var_4252_string = ""; var_4253_int = 0; // 0xdda PushV
	var_4250_int = var_4157_int; // 0xddb Mov
	var_4251_string = "pers_rat"; // 0xddc MovS
	var_4252_string = "rat.xml"; // 0xddd MovS
	var_4253_int = 2; // 0xdde MovI
	func_453(var_4250_int, var_4251_string, var_4252_string, var_4253_int); // 0xddf NEW_2
	var_4254_int = 3; // 0xde1 PushI
	var_4255_float = 0; var_4256_int = 0; // 0xde2 PushV
	var_4256_int = var_4158_int; // 0xde3 Mov
	func_1115(var_4255_float, var_4256_int); // 0xde4 NEW_2
	var_4166_int = var_4254_int * var_4255_float; // 0xde6 Mult2
	var_4257_int = var_4166_int; // 0xde7 Push
	if(var_4257_int == 0) goto Label_3568; // 0xde8 JumpB
	var_4258_int = 0; var_4259_string = ""; var_4260_string = ""; var_4261_int = 0; // 0xde9 PushV
	var_4258_int = var_4157_int; // 0xdea Mov
	var_4259_string = "pers_grabitel"; // 0xdeb MovS
	var_4260_string = "grabitel.xml"; // 0xdec MovS
	var_4261_int = var_4166_int; // 0xded Mov
	func_453(var_4258_int, var_4259_string, var_4260_string, var_4261_int); // 0xdee NEW_2
	
Label_3568:
	var_4262_int = 1; // 0xdf0 PushI
	var_4263_float = 0; var_4264_int = 0; // 0xdf1 PushV
	var_4264_int = var_4158_int; // 0xdf2 Mov
	func_1205(var_4263_float, var_4264_int); // 0xdf3 NEW_2
	var_4167_int = var_4262_int * var_4263_float; // 0xdf5 Mult2
	var_4265_int = var_4167_int; // 0xdf6 Push
	if(var_4265_int == 0) goto Label_3583; // 0xdf7 JumpB
	var_4266_int = 0; var_4267_string = ""; var_4268_string = ""; var_4269_int = 0; // 0xdf8 PushV
	var_4266_int = var_4157_int; // 0xdf9 Mov
	var_4267_string = "pers_bomber"; // 0xdfa MovS
	var_4268_string = "bomber.xml"; // 0xdfb MovS
	var_4269_int = var_4167_int; // 0xdfc Mov
	func_453(var_4266_int, var_4267_string, var_4268_string, var_4269_int); // 0xdfd NEW_2
}


func_350(var_492_bool, var_493_int)
{
	var_494_int = 0; var_495_int = 0; // 0x15e PushV
	var_496_string = ""; var_497_int = 0; // 0x15f PushV
	var_497_int = var_493_int; // 0x160 Mov
	func_249(var_496_string, var_497_int); // 0x161 NEW_2
	GetVariable(var_496_string, var_495_int); // 0x163 Func
	var_498_int = 3; // 0x165 PushI
	var_499_int = var_495_int & var_498_int; // 0x166 And
	var_500_int = 0; // 0x167 PushI
	var_492_bool = var_499_int == var_500_int; // 0x168 Eq2
	return 2; // 0x169 Return
}


func_14686(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; // 0x395e PushV
	var_36_string = "Disease update"; // 0x395f PushS
	Trace(var_36_string); // 0x3960 Func
	var_30_int = 0; // 0x3962 MovI
	var_37_int = 0; // 0x3963 PushI
	var_38_bool = var_23_int == var_37_int; // 0x3964 Eq
	if(var_38_bool == 0) goto Label_14696; // 0x3965 JumpB
	var_30_int = 0; // 0x3966 MovI
	goto Label_14750; // 0x3967 Jump
	
Label_14750:
	var_39_int = 1; // 0x399e PushI
	var_40_int = var_23_int + var_39_int; // 0x399f Add
	var_41_int = 12; // 0x39a0 PushI
	var_42_bool = var_40_int != var_41_int; // 0x39a1 Neq
	if(var_42_bool == 0) goto Label_14814; // 0x39a2 JumpB
	var_43_string = "Diseased regions : "; // 0x39a3 PushS
	var_44_int = var_43_string + var_30_int; // 0x39a4 Add
	Trace(var_44_int); // 0x39a5 Func
	var_31_int = 0; // 0x39a7 MovI
	
Label_14760:
	var_45_int = 16; // 0x39a8 PushI
	var_46_bool = var_31_int < var_45_int; // 0x39a9 LT
	if(var_46_bool == 0) goto Label_14785; // 0x39aa JumpB
	var_47_bool = 0; var_48_int = 0; // 0x39ab PushV
	var_48_int = var_31_int; // 0x39ac Mov
	func_380(var_47_bool, var_48_int); // 0x39ad NEW_2
	if(var_47_bool == 0) goto Label_14773; // 0x39af JumpB
	var_59_int = 0; // 0x39b0 PushV
	var_59_int = var_31_int; // 0x39b1 Mov
	func_422(var_59_int); // 0x39b2 NEW_2
	goto Label_14782; // 0x39b4 Jump
	
Label_14782:
	var_71_int = 1; // 0x39be PushI
	var_31_int = var_31_int + var_71_int; // 0x39bf Add2
	goto Label_14760; // 0x39c0 Jump
	
Label_14773:
	var_72_bool = 0; var_73_int = 0; // 0x39b5 PushV
	var_73_int = var_31_int; // 0x39b6 Mov
	func_410(var_72_bool, var_73_int); // 0x39b7 NEW_2
	if(var_72_bool == 0) goto Label_14782; // 0x39b9 JumpB
	var_81_int = 0; // 0x39ba PushV
	var_81_int = var_31_int; // 0x39bb Mov
	func_362(var_81_int); // 0x39bc NEW_2
	
Label_14785:
	var_93_int = 2; // 0x39c1 PushI
	var_94_bool = var_23_int == var_93_int; // 0x39c2 Eq
	if(var_94_bool == 0) goto Label_14795; // 0x39c3 JumpB
	var_95_string = "Special diseased region: 6"; // 0x39c4 PushS
	Trace(var_95_string); // 0x39c5 Func
	var_96_int = 0; // 0x39c7 PushV
	var_96_int = 5; // 0x39c8 MovI
	func_392(var_96_int); // 0x39c9 NEW_2
	
Label_14795:
	var_108_int = 0; // 0x39cb PushV
	func_293(var_108_int); // 0x39cc NEW_2
	var_32_int = var_108_int; // 0x39cd Mov
	var_119_bool = var_32_int < var_30_int; // 0x39cf LT
	if(var_119_bool == 0) goto Label_14813; // 0x39d0 JumpB
	var_33_int = var_30_int - var_32_int; // 0x39d1 Sub2
	var_34_int = 0; // 0x39d2 MovI
	
Label_14803:
	var_120_bool = var_34_int < var_33_int; // 0x39d3 LT
	if(var_120_bool == 0) goto Label_14813; // 0x39d4 JumpB
	var_121_int = 0; // 0x39d5 PushV
	var_122_int = 1; // 0x39d6 PushI
	var_121_int = var_23_int + var_122_int; // 0x39d7 Add2
	func_311(var_121_int); // 0x39d8 NEW_2
	var_167_int = 1; // 0x39da PushI
	var_34_int = var_34_int + var_167_int; // 0x39db Add2
	goto Label_14803; // 0x39dc Jump
	
Label_14813:
	goto Label_14839; // 0x39dd Jump
	
Label_14839:
	return 12; // 0x39f7 Return
	
Label_14814:
	var_35_int = 0; // 0x39de MovI
	
Label_14815:
	var_168_int = 16; // 0x39df PushI
	var_169_bool = var_35_int < var_168_int; // 0x39e0 LT
	if(var_169_bool == 0) goto Label_14839; // 0x39e1 JumpB
	var_170_bool = 0; // 0x39e2 PushV
	var_170_bool = 1; // 0x39e3 MovB
	var_171_bool = 0; var_172_int = 0; // 0x39e4 PushV
	var_172_int = var_35_int; // 0x39e5 Mov
	func_380(var_171_bool, var_172_int); // 0x39e6 NEW_2
	if(var_171_bool == 0) goto Label_14831; // 0x39e8 JumpB
	var_173_bool = 0; var_174_int = 0; // 0x39e9 PushV
	var_174_int = var_35_int; // 0x39ea Mov
	func_410(var_173_bool, var_174_int); // 0x39eb NEW_2
	if(var_173_bool == 0) goto Label_14831; // 0x39ed JumpB
	var_170_bool = 0; // 0x39ee MovB
	
Label_14831:
	if(var_170_bool == 0) goto Label_14836; // 0x39ef JumpB
	var_175_int = 0; // 0x39f0 PushV
	var_175_int = var_35_int; // 0x39f1 Mov
	func_362(var_175_int); // 0x39f2 NEW_2
	
Label_14836:
	var_176_int = 1; // 0x39f4 PushI
	var_35_int = var_35_int + var_176_int; // 0x39f5 Add2
	goto Label_14815; // 0x39f6 Jump
	
Label_14696:
	var_177_int = 1; // 0x3968 PushI
	var_178_bool = var_23_int == var_177_int; // 0x3969 Eq
	if(var_178_bool == 0) goto Label_14701; // 0x396a JumpB
	var_30_int = 0; // 0x396b MovI
	goto Label_14750; // 0x396c Jump
	
Label_14701:
	var_179_int = 2; // 0x396d PushI
	var_180_bool = var_23_int == var_179_int; // 0x396e Eq
	if(var_180_bool == 0) goto Label_14706; // 0x396f JumpB
	var_30_int = 1; // 0x3970 MovI
	goto Label_14750; // 0x3971 Jump
	
Label_14706:
	var_181_int = 3; // 0x3972 PushI
	var_182_bool = var_23_int == var_181_int; // 0x3973 Eq
	if(var_182_bool == 0) goto Label_14711; // 0x3974 JumpB
	var_30_int = 2; // 0x3975 MovI
	goto Label_14750; // 0x3976 Jump
	
Label_14711:
	var_183_int = 4; // 0x3977 PushI
	var_184_bool = var_23_int == var_183_int; // 0x3978 Eq
	if(var_184_bool == 0) goto Label_14716; // 0x3979 JumpB
	var_30_int = 3; // 0x397a MovI
	goto Label_14750; // 0x397b Jump
	
Label_14716:
	var_185_int = 5; // 0x397c PushI
	var_186_bool = var_23_int == var_185_int; // 0x397d Eq
	if(var_186_bool == 0) goto Label_14721; // 0x397e JumpB
	var_30_int = 4; // 0x397f MovI
	goto Label_14750; // 0x3980 Jump
	
Label_14721:
	var_187_int = 6; // 0x3981 PushI
	var_188_bool = var_23_int == var_187_int; // 0x3982 Eq
	if(var_188_bool == 0) goto Label_14726; // 0x3983 JumpB
	var_30_int = 5; // 0x3984 MovI
	goto Label_14750; // 0x3985 Jump
	
Label_14726:
	var_189_int = 7; // 0x3986 PushI
	var_190_bool = var_23_int == var_189_int; // 0x3987 Eq
	if(var_190_bool == 0) goto Label_14731; // 0x3988 JumpB
	var_30_int = 5; // 0x3989 MovI
	goto Label_14750; // 0x398a Jump
	
Label_14731:
	var_191_int = 8; // 0x398b PushI
	var_192_bool = var_23_int == var_191_int; // 0x398c Eq
	if(var_192_bool == 0) goto Label_14736; // 0x398d JumpB
	var_30_int = 6; // 0x398e MovI
	goto Label_14750; // 0x398f Jump
	
Label_14736:
	var_193_int = 9; // 0x3990 PushI
	var_194_bool = var_23_int == var_193_int; // 0x3991 Eq
	if(var_194_bool == 0) goto Label_14741; // 0x3992 JumpB
	var_30_int = 6; // 0x3993 MovI
	goto Label_14750; // 0x3994 Jump
	
Label_14741:
	var_195_int = 10; // 0x3995 PushI
	var_196_bool = var_23_int == var_195_int; // 0x3996 Eq
	if(var_196_bool == 0) goto Label_14746; // 0x3997 JumpB
	var_30_int = 7; // 0x3998 MovI
	goto Label_14750; // 0x3999 Jump
	
Label_14746:
	var_197_int = 11; // 0x399a PushI
	var_198_bool = var_23_int == var_197_int; // 0x399b Eq
	if(var_198_bool == 0) goto Label_14750; // 0x399c JumpB
	var_30_int = 8; // 0x399d MovI
}


func_11618()
{
	var_5460_int = 0; var_5461_string = ""; // 0x2d63 PushV
	var_5461_string = "map_chertez_state"; // 0x2d64 MovS
	func_106(var_5460_int, var_5461_string); // 0x2d65 NEW_2
	var_5462_int = 4; // 0x2d67 PushI
	var_5463_bool = var_5460_int <= var_5462_int; // 0x2d68 LE
	if(var_5463_bool == 0) goto Label_11634; // 0x2d69 JumpB
	var_5464_string = "map_chertez_state"; // 0x2d6a PushS
	var_5465_int = 4; // 0x2d6b PushI
	SetVariable(var_5464_string, var_5465_int); // 0x2d6c Func
	var_5466_string = "map_chertez_force"; // 0x2d6e PushS
	var_5467_int = 1; // 0x2d6f PushI
	SetVariable(var_5466_string, var_5467_int); // 0x2d70 Func
	
Label_11634:
	return 0; // 0x2d72 Return
}


func_362(var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; // 0x16a PushV
	var_86_string = ""; var_87_int = 0; // 0x16b PushV
	var_87_int = var_81_int; // 0x16c Mov
	func_249(var_86_string, var_87_int); // 0x16d NEW_2
	GetVariable(var_86_string, var_84_int); // 0x16f Func
	var_88_int = 252; // 0x171 PushI
	var_89_int = var_84_int & var_88_int; // 0x172 And
	var_90_int = 0; // 0x173 PushI
	var_85_int = var_89_int | var_90_int; // 0x174 Or2
	var_91_string = ""; var_92_int = 0; // 0x175 PushV
	var_92_int = var_81_int; // 0x176 Mov
	func_249(var_91_string, var_92_int); // 0x177 NEW_2
	SetVariable(var_91_string, var_85_int); // 0x179 Func
	return 4; // 0x17b Return
}


func_5485(var_2619_int, var_2620_int, var_2621_object, var_2622_object, var_2623_object, var_2624_object)
{
	var_2625_int = 0; // 0x156e PushI
	var_2626_bool = var_2620_int == var_2625_int; // 0x156f Eq
	if(var_2626_bool == 0) goto Label_5525; // 0x1570 JumpB
	var_2627_int = 0; var_2628_bool = 0; // 0x1571 PushV
	var_2627_int = 5; // 0x1572 MovI
	var_2628_bool = 1; // 0x1573 MovB
	func_746(var_2627_int, var_2628_bool); // 0x1574 NEW_2
	var_2629_int = 0; var_2630_bool = 0; var_2631_int = 0; // 0x1576 PushV
	var_2629_int = 5; // 0x1577 MovI
	var_2630_bool = 1; // 0x1578 MovB
	var_2631_int = 1; // 0x1579 MovI
	func_763(var_2629_int, var_2630_bool, var_2631_int); // 0x157a NEW_2
	var_2632_int = 0; var_2633_int = 0; var_2634_object = Obj(); var_2635_object = Obj(); var_2636_object = Obj(); // 0x157c PushV
	var_2632_int = 5; // 0x157d MovI
	var_2633_int = var_2619_int; // 0x157e Mov
	var_2634_object = var_2621_object; // 0x157f Mov
	var_2635_object = var_2622_object; // 0x1580 Mov
	var_2636_object = var_2623_object; // 0x1581 Mov
	func_591(var_2632_int, var_2633_int, var_2634_object, var_2635_object, var_2636_object); // 0x1582 NEW_2
	var_2637_object = Obj(); var_2638_int = 0; // 0x1584 PushV
	var_2637_object = var_2624_object; // 0x1585 Mov
	var_2638_int = 1; // 0x1586 MovI
	func_255(var_2638_int); // 0x1587 NEW_2
	var_2639_int = 0; var_2640_bool = 0; var_2641_int = 0; // 0x1589 PushV
	var_2639_int = 5; // 0x158a MovI
	var_2640_bool = 1; // 0x158b MovB
	var_2641_int = 4; // 0x158c MovI
	func_820(var_2639_int, var_2640_bool, var_2641_int); // 0x158d NEW_2
	var_2642_int = 0; var_2643_bool = 0; var_2644_int = 0; // 0x158f PushV
	var_2642_int = 5; // 0x1590 MovI
	var_2643_bool = 0; // 0x1591 MovB
	var_2644_int = 4; // 0x1592 MovI
	func_882(var_2642_int, var_2643_bool, var_2644_int); // 0x1593 NEW_2
	
Label_5525:
	var_2645_int = 0; var_2646_bool = 0; // 0x1595 PushV
	var_2645_int = 5; // 0x1596 MovI
	var_2646_bool = 0; // 0x1597 MovB
	func_729(var_2645_int, var_2646_bool); // 0x1598 NEW_2
	var_2647_int = 0; var_2648_int = 0; var_2649_int = 0; // 0x159a PushV
	var_2647_int = 5; // 0x159b MovI
	var_2648_int = var_2619_int; // 0x159c Mov
	var_2649_int = var_2620_int; // 0x159d Mov
	func_2894(var_2647_int, var_2648_int, var_2649_int); // 0x159e NEW_2
	return 0; // 0x15a0 Return
}


func_11635()
{
	var_5536_int = 0; var_5537_string = ""; // 0x2d74 PushV
	var_5537_string = "map_chertez_state"; // 0x2d75 MovS
	func_106(var_5536_int, var_5537_string); // 0x2d76 NEW_2
	var_5538_int = 5; // 0x2d78 PushI
	var_5539_bool = var_5536_int <= var_5538_int; // 0x2d79 LE
	if(var_5539_bool == 0) goto Label_11651; // 0x2d7a JumpB
	var_5540_string = "map_chertez_state"; // 0x2d7b PushS
	var_5541_int = 5; // 0x2d7c PushI
	SetVariable(var_5540_string, var_5541_int); // 0x2d7d Func
	var_5542_string = "map_chertez_force"; // 0x2d7f PushS
	var_5543_int = 1; // 0x2d80 PushI
	SetVariable(var_5542_string, var_5543_int); // 0x2d81 Func
	
Label_11651:
	return 0; // 0x2d83 Return
}


func_380(var_1979_bool, var_1980_int)
{
	var_1981_int = 0; var_1982_int = 0; // 0x17c PushV
	var_1983_string = ""; var_1984_int = 0; // 0x17d PushV
	var_1984_int = var_1980_int; // 0x17e Mov
	func_249(var_1983_string, var_1984_int); // 0x17f NEW_2
	GetVariable(var_1983_string, var_1982_int); // 0x181 Func
	var_1985_int = 3; // 0x183 PushI
	var_1986_int = var_1982_int & var_1985_int; // 0x184 And
	var_1987_int = 1; // 0x185 PushI
	var_1979_bool = var_1986_int == var_1987_int; // 0x186 Eq2
	return 2; // 0x187 Return
}


func_6532(var_2900_int, var_2901_int, var_2902_object, var_2903_object, var_2904_object, var_2905_object)
{
	var_2906_int = 0; // 0x1985 PushI
	var_2907_bool = var_2901_int == var_2906_int; // 0x1986 Eq
	if(var_2907_bool == 0) goto Label_6572; // 0x1987 JumpB
	var_2908_int = 0; var_2909_bool = 0; // 0x1988 PushV
	var_2908_int = 11; // 0x1989 MovI
	var_2909_bool = 0; // 0x198a MovB
	func_746(var_2908_int, var_2909_bool); // 0x198b NEW_2
	var_2910_int = 0; var_2911_bool = 0; var_2912_int = 0; // 0x198d PushV
	var_2910_int = 11; // 0x198e MovI
	var_2911_bool = 1; // 0x198f MovB
	var_2912_int = 1; // 0x1990 MovI
	func_763(var_2910_int, var_2911_bool, var_2912_int); // 0x1991 NEW_2
	var_2913_int = 0; var_2914_int = 0; var_2915_object = Obj(); var_2916_object = Obj(); var_2917_object = Obj(); // 0x1993 PushV
	var_2913_int = 11; // 0x1994 MovI
	var_2914_int = var_2900_int; // 0x1995 Mov
	var_2915_object = var_2902_object; // 0x1996 Mov
	var_2916_object = var_2903_object; // 0x1997 Mov
	var_2917_object = var_2904_object; // 0x1998 Mov
	func_591(var_2913_int, var_2914_int, var_2915_object, var_2916_object, var_2917_object); // 0x1999 NEW_2
	var_2918_object = Obj(); var_2919_int = 0; // 0x199b PushV
	var_2918_object = var_2905_object; // 0x199c Mov
	var_2919_int = 1; // 0x199d MovI
	func_255(var_2919_int); // 0x199e NEW_2
	var_2920_int = 0; var_2921_bool = 0; var_2922_int = 0; // 0x19a0 PushV
	var_2920_int = 11; // 0x19a1 MovI
	var_2921_bool = 1; // 0x19a2 MovB
	var_2922_int = 5; // 0x19a3 MovI
	func_820(var_2920_int, var_2921_bool, var_2922_int); // 0x19a4 NEW_2
	var_2923_int = 0; var_2924_bool = 0; var_2925_int = 0; // 0x19a6 PushV
	var_2923_int = 11; // 0x19a7 MovI
	var_2924_bool = 0; // 0x19a8 MovB
	var_2925_int = 5; // 0x19a9 MovI
	func_882(var_2923_int, var_2924_bool, var_2925_int); // 0x19aa NEW_2
	
Label_6572:
	var_2926_int = 0; var_2927_bool = 0; // 0x19ac PushV
	var_2926_int = 11; // 0x19ad MovI
	var_2927_bool = 0; // 0x19ae MovB
	func_729(var_2926_int, var_2927_bool); // 0x19af NEW_2
	var_2928_int = 0; var_2929_int = 0; var_2930_int = 0; // 0x19b1 PushV
	var_2928_int = 11; // 0x19b2 MovI
	var_2929_int = var_2900_int; // 0x19b3 Mov
	var_2930_int = var_2901_int; // 0x19b4 Mov
	func_2714(var_2928_int, var_2929_int, var_2930_int); // 0x19b5 NEW_2
	return 0; // 0x19b7 Return
}


func_11652()
{
	var_5474_int = 0; var_5475_string = ""; // 0x2d85 PushV
	var_5475_string = "map_chertez_state"; // 0x2d86 MovS
	func_106(var_5474_int, var_5475_string); // 0x2d87 NEW_2
	var_5476_int = 6; // 0x2d89 PushI
	var_5477_bool = var_5474_int <= var_5476_int; // 0x2d8a LE
	if(var_5477_bool == 0) goto Label_11668; // 0x2d8b JumpB
	var_5478_string = "map_chertez_state"; // 0x2d8c PushS
	var_5479_int = 6; // 0x2d8d PushI
	SetVariable(var_5478_string, var_5479_int); // 0x2d8e Func
	var_5480_string = "map_chertez_force"; // 0x2d90 PushS
	var_5481_int = 1; // 0x2d91 PushI
	SetVariable(var_5480_string, var_5481_int); // 0x2d92 Func
	
Label_11668:
	return 0; // 0x2d94 Return
}


func_7558(var_4527_int)
{
	var_4528_int = 0; var_4529_object = Obj(); var_4530_object = Obj(); var_4531_object = Obj(); var_4532_cvector = CVector(0,0,0); var_4533_cvector = CVector(0,0,0); var_4534_bool = 0; var_4535_object = Obj(); var_4536_int = 0; var_4537_object = Obj(); var_4538_object = Obj(); var_4539_object = Obj(); var_4540_cvector = CVector(0,0,0); var_4541_cvector = CVector(0,0,0); var_4542_bool = 0; var_4543_object = Obj(); // 0x1d86 PushV
	var_4544_object = GlobalVars[14]; // 0x1d87 PushGE
	size(var_4536_int); // 0x1d88 ObjFunc
	var_4545_bool = 0; // 0x1d8a PushV
	var_4545_bool = 1; // 0x1d8b MovB
	var_4546_bool = var_4527_int >= var_4536_int; // 0x1d8c GE
	if(var_4546_bool == 0) goto Label_7570; // 0x1d8d JumpB
	var_4547_int = -1; // 0x1d8e PushI
	var_4548_bool = var_4527_int == var_4547_int; // 0x1d8f Eq
	if(var_4548_bool == 0) goto Label_7570; // 0x1d90 JumpB
	var_4545_bool = 0; // 0x1d91 MovB
	
Label_7570:
	if(var_4545_bool == 0) goto Label_7576; // 0x1d92 JumpB
	var_4549_string = "Wrong bonfire index "; // 0x1d93 PushS
	var_4550_int = var_4549_string + var_4527_int; // 0x1d94 Add
	Trace(var_4550_int); // 0x1d95 Func
	return 16; // 0x1d97 Return
	
Label_7576:
	var_4551_object = GlobalVars[14]; // 0x1d98 PushGE
	get(var_4537_object, var_4527_int); // 0x1d99 ObjFunc
	var_4552_string = "bonfire_light"; // 0x1d9b PushS
	var_4553_int = 1; // 0x1d9c PushI
	var_4554_int = var_4527_int + var_4553_int; // 0x1d9d Add
	var_4555_int = var_4552_string + var_4554_int; // 0x1d9e Add
	FindActor(var_4538_object, var_4555_int); // 0x1d9f Func
	var_4556_bool = var_4538_object == 0; // 0x1da1 Not
	if(var_4556_bool == 0) goto Label_7596; // 0x1da2 JumpB
	var_4557_string = "Bofire  light "; // 0x1da3 PushS
	var_4558_int = 1; // 0x1da4 PushI
	var_4559_int = var_4527_int + var_4558_int; // 0x1da5 Add
	var_4560_int = var_4557_string + var_4559_int; // 0x1da6 Add
	var_4561_string = " not found"; // 0x1da7 PushS
	var_4562_int = var_4560_int + var_4561_string; // 0x1da8 Add
	Trace(var_4562_int); // 0x1da9 Func
	goto Label_7599; // 0x1dab Jump
	
Label_7599:
	GetMainOutdoorScene(var_4539_object); // 0x1daf Func
	var_4563_string = "pt_bonfire"; // 0x1db1 PushS
	var_4564_int = 1; // 0x1db2 PushI
	var_4565_int = var_4527_int + var_4564_int; // 0x1db3 Add
	var_4566_int = var_4563_string + var_4565_int; // 0x1db4 Add
	GetLocator(var_4566_int, var_4542_bool, var_4540_cvector, var_4541_cvector); // 0x1db5 ObjFunc
	var_4567_bool = var_4542_bool == 0; // 0x1db7 Not
	if(var_4567_bool == 0) goto Label_7613; // 0x1db8 JumpB
	var_4568_string = "Locator for bonfire doesn't exist"; // 0x1db9 PushS
	Trace(var_4568_string); // 0x1dba Func
	return 16; // 0x1dbc Return
	
Label_7613:
	var_4569_bool = var_4537_object == 0; // 0x1dbd Not
	if(var_4569_bool == 0) goto Label_7623; // 0x1dbe JumpB
	var_4570_string = "scripted"; // 0x1dbf PushS
	var_4571_string = "bonfire_big.xml"; // 0x1dc0 PushS
	AddActorByType(var_4543_object, var_4570_string, var_4539_object, var_4540_cvector, var_4541_cvector, var_4571_string); // 0x1dc1 Func
	var_4572_object = GlobalVars[14]; // 0x1dc3 PushGE
	set(var_4527_int, var_4543_object); // 0x1dc4 ObjFunc
	var_4543_object = 0; // 0x1dc6 SetNull
	
Label_7623:
	var_4573_string = "Setting bonfire "; // 0x1dc7 PushS
	var_4574_int = 1; // 0x1dc8 PushI
	var_4575_int = var_4527_int + var_4574_int; // 0x1dc9 Add
	var_4576_int = var_4573_string + var_4575_int; // 0x1dca Add
	var_4577_string = "... ok"; // 0x1dcb PushS
	var_4578_int = var_4576_int + var_4577_string; // 0x1dcc Add
	Trace(var_4578_int); // 0x1dcd Func
	return 16; // 0x1dcf Return
	
Label_7596:
	var_4579_bool = 1; // 0x1dac PushB
	Switch(var_4579_bool); // 0x1dad ObjFunc
}


func_392(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; // 0x188 PushV
	var_29_string = ""; var_30_int = 0; // 0x189 PushV
	var_30_int = var_24_int; // 0x18a Mov
	func_249(var_29_string, var_30_int); // 0x18b NEW_2
	GetVariable(var_29_string, var_27_int); // 0x18d Func
	var_34_int = 252; // 0x18f PushI
	var_35_int = var_27_int & var_34_int; // 0x190 And
	var_36_int = 1; // 0x191 PushI
	var_28_int = var_35_int | var_36_int; // 0x192 Or2
	var_37_string = ""; var_38_int = 0; // 0x193 PushV
	var_38_int = var_24_int; // 0x194 Mov
	func_249(var_37_string, var_38_int); // 0x195 NEW_2
	SetVariable(var_37_string, var_28_int); // 0x197 Func
	return 4; // 0x199 Return
}


func_4493()
{
	var_64_string = "dt_house3_05_i2"; // 0x118e PushS
	add(var_64_string); // 0x118f ObjFunc
	var_65_string = "dt_house3_05"; // 0x1191 PushS
	add(var_65_string); // 0x1192 ObjFunc
	var_66_string = "dt_house3_06_i2"; // 0x1194 PushS
	add(var_66_string); // 0x1195 ObjFunc
	var_67_string = "dt_house_1_10"; // 0x1197 PushS
	add(var_67_string); // 0x1198 ObjFunc
	var_68_string = "house5_10"; // 0x119a PushS
	add(var_68_string); // 0x119b ObjFunc
	var_69_string = "house5_07"; // 0x119d PushS
	add(var_69_string); // 0x119e ObjFunc
	var_70_string = "dt_house_1_03"; // 0x11a0 PushS
	add(var_70_string); // 0x11a1 ObjFunc
	var_71_string = "dt_house1_union2_04l"; // 0x11a3 PushS
	add(var_71_string); // 0x11a4 ObjFunc
	var_72_string = "dt_house1_union2_04r"; // 0x11a6 PushS
	add(var_72_string); // 0x11a7 ObjFunc
	var_73_string = "house5_22"; // 0x11a9 PushS
	add(var_73_string); // 0x11aa ObjFunc
	var_74_string = "house5_08"; // 0x11ac PushS
	add(var_74_string); // 0x11ad ObjFunc
	var_75_string = "dt_house1_union2_02l"; // 0x11af PushS
	add(var_75_string); // 0x11b0 ObjFunc
	var_76_string = "dt_house1_union2_02r"; // 0x11b2 PushS
	add(var_76_string); // 0x11b3 ObjFunc
	return 0; // 0x11b5 Return
}


func_11669()
{
	var_4876_string = ""; var_4877_bool = 0; // 0x2d96 PushV
	var_4876_string = "termitnik@door1"; // 0x2d97 MovS
	var_4877_bool = 1; // 0x2d98 MovB
	func_151(var_4876_string, var_4877_bool); // 0x2d99 NEW_2
	return 0; // 0x2d9b Return
}


func_410(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x19a PushV
	var_76_string = ""; var_77_int = 0; // 0x19b PushV
	var_77_int = var_73_int; // 0x19c Mov
	func_249(var_76_string, var_77_int); // 0x19d NEW_2
	GetVariable(var_76_string, var_75_int); // 0x19f Func
	var_78_int = 3; // 0x1a1 PushI
	var_79_int = var_75_int & var_78_int; // 0x1a2 And
	var_80_int = 2; // 0x1a3 PushI
	var_72_bool = var_79_int == var_80_int; // 0x1a4 Eq2
	return 2; // 0x1a5 Return
}


func_11676()
{
	var_5987_string = ""; var_5988_bool = 0; // 0x2d9d PushV
	var_5987_string = "termitnik@door1"; // 0x2d9e MovS
	var_5988_bool = 0; // 0x2d9f MovB
	func_151(var_5987_string, var_5988_bool); // 0x2da0 NEW_2
	return 0; // 0x2da2 Return
}


func_5537(var_3745_int, var_3746_int, var_3747_object, var_3748_object, var_3749_object, var_3750_object)
{
	var_3751_int = 0; // 0x15a2 PushI
	var_3752_bool = var_3746_int == var_3751_int; // 0x15a3 Eq
	if(var_3752_bool == 0) goto Label_5577; // 0x15a4 JumpB
	var_3753_int = 0; var_3754_bool = 0; // 0x15a5 PushV
	var_3753_int = 5; // 0x15a6 MovI
	var_3754_bool = 0; // 0x15a7 MovB
	func_746(var_3753_int, var_3754_bool); // 0x15a8 NEW_2
	var_3755_int = 0; var_3756_bool = 0; var_3757_int = 0; // 0x15aa PushV
	var_3755_int = 5; // 0x15ab MovI
	var_3756_bool = 0; // 0x15ac MovB
	var_3757_int = 1; // 0x15ad MovI
	func_763(var_3755_int, var_3756_bool, var_3757_int); // 0x15ae NEW_2
	var_3758_int = 0; var_3759_int = 0; var_3760_object = Obj(); var_3761_object = Obj(); var_3762_object = Obj(); // 0x15b0 PushV
	var_3758_int = 5; // 0x15b1 MovI
	var_3759_int = var_3745_int; // 0x15b2 Mov
	var_3760_object = var_3747_object; // 0x15b3 Mov
	var_3761_object = var_3748_object; // 0x15b4 Mov
	var_3762_object = var_3749_object; // 0x15b5 Mov
	func_670(var_3758_int, var_3759_int, var_3760_object, var_3761_object, var_3762_object); // 0x15b6 NEW_2
	var_3763_object = Obj(); var_3764_int = 0; // 0x15b8 PushV
	var_3763_object = var_3750_object; // 0x15b9 Mov
	var_3764_int = 2; // 0x15ba MovI
	func_255(var_3764_int); // 0x15bb NEW_2
	var_3765_int = 0; var_3766_bool = 0; var_3767_int = 0; // 0x15bd PushV
	var_3765_int = 5; // 0x15be MovI
	var_3766_bool = 0; // 0x15bf MovB
	var_3767_int = 4; // 0x15c0 MovI
	func_820(var_3765_int, var_3766_bool, var_3767_int); // 0x15c1 NEW_2
	var_3768_int = 0; var_3769_bool = 0; var_3770_int = 0; // 0x15c3 PushV
	var_3768_int = 5; // 0x15c4 MovI
	var_3769_bool = 1; // 0x15c5 MovB
	var_3770_int = 4; // 0x15c6 MovI
	func_882(var_3768_int, var_3769_bool, var_3770_int); // 0x15c7 NEW_2
	
Label_5577:
	var_3771_int = 0; var_3772_bool = 0; // 0x15c9 PushV
	var_3771_int = 5; // 0x15ca MovI
	var_3772_bool = 0; // 0x15cb MovB
	func_729(var_3771_int, var_3772_bool); // 0x15cc NEW_2
	var_3773_int = 0; var_3774_int = 0; var_3775_int = 0; // 0x15ce PushV
	var_3773_int = 5; // 0x15cf MovI
	var_3774_int = var_3745_int; // 0x15d0 Mov
	var_3775_int = var_3746_int; // 0x15d1 Mov
	func_3797(var_3773_int, var_3774_int, var_3775_int); // 0x15d2 NEW_2
	return 0; // 0x15d4 Return
}


func_11683()
{
	var_5382_string = "resque_list"; // 0x2da4 PushS
	var_5383_int = 1; // 0x2da5 PushI
	SetVariable(var_5382_string, var_5383_int); // 0x2da6 Func
	func_14586(); // 0x2da9 NEW_2
	return 0; // 0x2dab Return
}


func_422(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; // 0x1a6 PushV
	var_81_string = ""; var_82_int = 0; // 0x1a7 PushV
	var_82_int = var_76_int; // 0x1a8 Mov
	func_249(var_81_string, var_82_int); // 0x1a9 NEW_2
	GetVariable(var_81_string, var_79_int); // 0x1ab Func
	var_83_int = 252; // 0x1ad PushI
	var_84_int = var_79_int & var_83_int; // 0x1ae And
	var_85_int = 2; // 0x1af PushI
	var_80_int = var_84_int | var_85_int; // 0x1b0 Or2
	var_86_string = ""; var_87_int = 0; // 0x1b1 PushV
	var_87_int = var_76_int; // 0x1b2 Mov
	func_249(var_86_string, var_87_int); // 0x1b3 NEW_2
	SetVariable(var_86_string, var_80_int); // 0x1b5 Func
	return 4; // 0x1b7 Return
}


func_11692()
{
	var_4945_string = ""; var_4946_bool = 0; // 0x2dad PushV
	var_4945_string = "mnogogrannik@door1"; // 0x2dae MovS
	var_4946_bool = 1; // 0x2daf MovB
	func_151(var_4945_string, var_4946_bool); // 0x2db0 NEW_2
	return 0; // 0x2db2 Return
}


func_11699()
{
	var_4909_string = ""; var_4910_bool = 0; // 0x2db4 PushV
	var_4909_string = "sobor@door1"; // 0x2db5 MovS
	var_4910_bool = 1; // 0x2db6 MovB
	func_151(var_4909_string, var_4910_bool); // 0x2db7 NEW_2
	return 0; // 0x2db9 Return
}


func_4534(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object)
{
	var_892_int = 0; // 0x11b7 PushI
	var_893_bool = var_887_int == var_892_int; // 0x11b8 Eq
	if(var_893_bool == 0) goto Label_4574; // 0x11b9 JumpB
	var_894_int = 0; var_895_bool = 0; // 0x11ba PushV
	var_894_int = 1; // 0x11bb MovI
	var_895_bool = 0; // 0x11bc MovB
	func_746(var_894_int, var_895_bool); // 0x11bd NEW_2
	var_896_int = 0; var_897_bool = 0; var_898_int = 0; // 0x11bf PushV
	var_896_int = 1; // 0x11c0 MovI
	var_897_bool = 0; // 0x11c1 MovB
	var_898_int = 1; // 0x11c2 MovI
	func_763(var_896_int, var_897_bool, var_898_int); // 0x11c3 NEW_2
	var_899_int = 0; var_900_int = 0; var_901_object = Obj(); var_902_object = Obj(); var_903_object = Obj(); // 0x11c5 PushV
	var_899_int = 1; // 0x11c6 MovI
	var_900_int = var_886_int; // 0x11c7 Mov
	var_901_object = var_888_object; // 0x11c8 Mov
	var_902_object = var_889_object; // 0x11c9 Mov
	var_903_object = var_890_object; // 0x11ca Mov
	func_572(var_900_int, var_901_object, var_902_object, var_903_object); // 0x11cb NEW_2
	var_904_object = Obj(); var_905_int = 0; // 0x11cd PushV
	var_904_object = var_891_object; // 0x11ce Mov
	var_905_int = 0; // 0x11cf MovI
	func_255(var_905_int); // 0x11d0 NEW_2
	var_906_int = 0; var_907_bool = 0; var_908_int = 0; // 0x11d2 PushV
	var_906_int = 1; // 0x11d3 MovI
	var_907_bool = 0; // 0x11d4 MovB
	var_908_int = 8; // 0x11d5 MovI
	func_820(var_906_int, var_907_bool, var_908_int); // 0x11d6 NEW_2
	var_909_int = 0; var_910_bool = 0; var_911_int = 0; // 0x11d8 PushV
	var_909_int = 1; // 0x11d9 MovI
	var_910_bool = 0; // 0x11da MovB
	var_911_int = 8; // 0x11db MovI
	func_882(var_909_int, var_910_bool, var_911_int); // 0x11dc NEW_2
	
Label_4574:
	var_912_int = 0; var_913_int = 0; // 0x11de PushV
	var_912_int = 1; // 0x11df MovI
	var_913_int = var_887_int; // 0x11e0 Mov
	func_1000(var_912_int, var_913_int); // 0x11e1 NEW_2
	var_914_int = 0; var_915_int = 0; var_916_int = 0; // 0x11e3 PushV
	var_914_int = 1; // 0x11e4 MovI
	var_915_int = var_886_int; // 0x11e5 Mov
	var_916_int = var_887_int; // 0x11e6 Mov
	func_2333(var_914_int, var_915_int, var_916_int); // 0x11e7 NEW_2
	return 0; // 0x11e9 Return
}


func_440(var_487_int)
{
	var_488_object = Obj(); var_489_object = Obj(); // 0x1b8 PushV
	GetMainOutdoorScene(var_489_object); // 0x1b9 Func
	var_490_bool = var_489_object == 0; // 0x1bb NullEq
	if(var_490_bool == 0) goto Label_449; // 0x1bc JumpB
	var_491_string = "City manager: main outdoor scene not found"; // 0x1bd PushS
	Trace(var_491_string); // 0x1be Func
	return 2; // 0x1c0 Return
	
Label_449:
	RemoveAllRegionActors(var_487_int); // 0x1c1 ObjFunc
	return 2; // 0x1c3 Return
}


func_6584(var_4030_int, var_4031_int, var_4032_object, var_4033_object, var_4034_object, var_4035_object)
{
	var_4036_int = 0; // 0x19b9 PushI
	var_4037_bool = var_4031_int == var_4036_int; // 0x19ba Eq
	if(var_4037_bool == 0) goto Label_6624; // 0x19bb JumpB
	var_4038_int = 0; var_4039_bool = 0; // 0x19bc PushV
	var_4038_int = 11; // 0x19bd MovI
	var_4039_bool = 1; // 0x19be MovB
	func_746(var_4038_int, var_4039_bool); // 0x19bf NEW_2
	var_4040_int = 0; var_4041_bool = 0; var_4042_int = 0; // 0x19c1 PushV
	var_4040_int = 11; // 0x19c2 MovI
	var_4041_bool = 0; // 0x19c3 MovB
	var_4042_int = 1; // 0x19c4 MovI
	func_763(var_4040_int, var_4041_bool, var_4042_int); // 0x19c5 NEW_2
	var_4043_int = 0; var_4044_int = 0; var_4045_object = Obj(); var_4046_object = Obj(); var_4047_object = Obj(); // 0x19c7 PushV
	var_4043_int = 11; // 0x19c8 MovI
	var_4044_int = var_4030_int; // 0x19c9 Mov
	var_4045_object = var_4032_object; // 0x19ca Mov
	var_4046_object = var_4033_object; // 0x19cb Mov
	var_4047_object = var_4034_object; // 0x19cc Mov
	func_670(var_4043_int, var_4044_int, var_4045_object, var_4046_object, var_4047_object); // 0x19cd NEW_2
	var_4048_object = Obj(); var_4049_int = 0; // 0x19cf PushV
	var_4048_object = var_4035_object; // 0x19d0 Mov
	var_4049_int = 2; // 0x19d1 MovI
	func_255(var_4049_int); // 0x19d2 NEW_2
	var_4050_int = 0; var_4051_bool = 0; var_4052_int = 0; // 0x19d4 PushV
	var_4050_int = 11; // 0x19d5 MovI
	var_4051_bool = 0; // 0x19d6 MovB
	var_4052_int = 5; // 0x19d7 MovI
	func_820(var_4050_int, var_4051_bool, var_4052_int); // 0x19d8 NEW_2
	var_4053_int = 0; var_4054_bool = 0; var_4055_int = 0; // 0x19da PushV
	var_4053_int = 11; // 0x19db MovI
	var_4054_bool = 1; // 0x19dc MovB
	var_4055_int = 5; // 0x19dd MovI
	func_882(var_4053_int, var_4054_bool, var_4055_int); // 0x19de NEW_2
	
Label_6624:
	var_4056_int = 0; var_4057_bool = 0; // 0x19e0 PushV
	var_4056_int = 11; // 0x19e1 MovI
	var_4057_bool = 0; // 0x19e2 MovB
	func_729(var_4056_int, var_4057_bool); // 0x19e3 NEW_2
	var_4058_int = 0; var_4059_int = 0; var_4060_int = 0; // 0x19e5 PushV
	var_4058_int = 11; // 0x19e6 MovI
	var_4059_int = var_4030_int; // 0x19e7 Mov
	var_4060_int = var_4031_int; // 0x19e8 Mov
	func_3609(var_4058_int, var_4059_int, var_4060_int); // 0x19e9 NEW_2
	return 0; // 0x19eb Return
}


func_11706()
{
	var_4983_string = ""; var_4984_bool = 0; // 0x2dbb PushV
	var_4983_string = "sobor@door1"; // 0x2dbc MovS
	var_4984_bool = 0; // 0x2dbd MovB
	func_151(var_4983_string, var_4984_bool); // 0x2dbe NEW_2
	return 0; // 0x2dc0 Return
}


func_11713()
{
	var_4783_string = ""; var_4784_bool = 0; // 0x2dc2 PushV
	var_4783_string = "cot_bigvlad@door1"; // 0x2dc3 MovS
	var_4784_bool = 1; // 0x2dc4 MovB
	func_151(var_4783_string, var_4784_bool); // 0x2dc5 NEW_2
	return 0; // 0x2dc7 Return
}


func_453(var_783_int, var_784_string, var_785_string, var_786_int)
{
	var_787_object = Obj(); var_788_object = Obj(); // 0x1c5 PushV
	GetMainOutdoorScene(var_788_object); // 0x1c6 Func
	var_789_bool = var_788_object == 0; // 0x1c8 NullEq
	if(var_789_bool == 0) goto Label_462; // 0x1c9 JumpB
	var_790_string = "City manager: Can't find main outdoor scene"; // 0x1ca PushS
	Trace(var_790_string); // 0x1cb Func
	return 2; // 0x1cd Return
	
Label_462:
	SetRegionActorCount(var_783_int, var_784_string, var_785_string, var_786_int); // 0x1ce ObjFunc
	return 2; // 0x1d0 Return
}


func_11720()
{
	var_6334_string = ""; var_6335_bool = 0; // 0x2dc9 PushV
	var_6334_string = "cot_bigvlad@door1"; // 0x2dca MovS
	var_6335_bool = 0; // 0x2dcb MovB
	func_151(var_6334_string, var_6335_bool); // 0x2dcc NEW_2
	return 0; // 0x2dce Return
}


func_11727()
{
	var_4797_string = ""; var_4798_bool = 0; // 0x2dd0 PushV
	var_4797_string = "vagon_mishka@door1"; // 0x2dd1 MovS
	var_4798_bool = 1; // 0x2dd2 MovB
	func_151(var_4797_string, var_4798_bool); // 0x2dd3 NEW_2
	return 0; // 0x2dd5 Return
}


func_466(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int)
{
	var_2221_object = Obj(); var_2222_object = Obj(); // 0x1d2 PushV
	GetMainOutdoorScene(var_2222_object); // 0x1d3 Func
	var_2223_bool = var_2222_object == 0; // 0x1d5 NullEq
	if(var_2223_bool == 0) goto Label_475; // 0x1d6 JumpB
	var_2224_string = "City manager: Can't find main outdoor scene"; // 0x1d7 PushS
	Trace(var_2224_string); // 0x1d8 Func
	return 2; // 0x1da Return
	
Label_475:
	SetRegionActorCount(var_2215_int, var_2216_string, var_2217_string, var_2218_int, var_2219_int, var_2220_int); // 0x1db ObjFunc
	return 2; // 0x1dd Return
}


func_7635(var_379_int)
{
	var_380_int = 0; var_381_object = Obj(); var_382_object = Obj(); var_383_int = 0; var_384_object = Obj(); var_385_object = Obj(); // 0x1dd3 PushV
	var_386_object = GlobalVars[14]; // 0x1dd4 PushGE
	size(var_383_int); // 0x1dd5 ObjFunc
	var_387_bool = 0; // 0x1dd7 PushV
	var_387_bool = 1; // 0x1dd8 MovB
	var_388_bool = var_379_int >= var_383_int; // 0x1dd9 GE
	if(var_388_bool == 0) goto Label_7647; // 0x1dda JumpB
	var_389_int = -1; // 0x1ddb PushI
	var_390_bool = var_379_int == var_389_int; // 0x1ddc Eq
	if(var_390_bool == 0) goto Label_7647; // 0x1ddd JumpB
	var_387_bool = 0; // 0x1dde MovB
	
Label_7647:
	if(var_387_bool == 0) goto Label_7653; // 0x1ddf JumpB
	var_391_string = "Wrong bonfire index "; // 0x1de0 PushS
	var_392_int = var_391_string + var_379_int; // 0x1de1 Add
	Trace(var_392_int); // 0x1de2 Func
	return 6; // 0x1de4 Return
	
Label_7653:
	var_393_object = GlobalVars[14]; // 0x1de5 PushGE
	get(var_384_object, var_379_int); // 0x1de6 ObjFunc
	var_394_string = "bonfire_light"; // 0x1de8 PushS
	var_395_int = 1; // 0x1de9 PushI
	var_396_int = var_379_int + var_395_int; // 0x1dea Add
	var_397_int = var_394_string + var_396_int; // 0x1deb Add
	FindActor(var_385_object, var_397_int); // 0x1dec Func
	var_398_bool = var_385_object == 0; // 0x1dee Not
	if(var_398_bool == 0) goto Label_7673; // 0x1def JumpB
	var_399_string = "Bofire  light "; // 0x1df0 PushS
	var_400_int = 1; // 0x1df1 PushI
	var_401_int = var_379_int + var_400_int; // 0x1df2 Add
	var_402_int = var_399_string + var_401_int; // 0x1df3 Add
	var_403_string = " not found"; // 0x1df4 PushS
	var_404_int = var_402_int + var_403_string; // 0x1df5 Add
	Trace(var_404_int); // 0x1df6 Func
	goto Label_7676; // 0x1df8 Jump
	
Label_7676:
	var_405_object = var_384_object; // 0x1dfc Push
	if(var_405_object == 0) goto Label_7680; // 0x1dfd JumpB
	RemoveActor(var_384_object); // 0x1dfe Func
	
Label_7680:
	var_384_object = 0; // 0x1e00 SetNull
	var_406_object = GlobalVars[14]; // 0x1e01 PushGE
	set(var_379_int, var_384_object); // 0x1e02 ObjFunc
	var_407_string = "Cleanup bonfire "; // 0x1e04 PushS
	var_408_int = 1; // 0x1e05 PushI
	var_409_int = var_379_int + var_408_int; // 0x1e06 Add
	var_410_int = var_407_string + var_409_int; // 0x1e07 Add
	var_411_string = "... ok"; // 0x1e08 PushS
	var_412_int = var_410_int + var_411_string; // 0x1e09 Add
	Trace(var_412_int); // 0x1e0a Func
	return 6; // 0x1e0c Return
	
Label_7673:
	var_413_bool = 0; // 0x1df9 PushB
	Switch(var_413_bool); // 0x1dfa ObjFunc
}


func_5589()
{
	return 0; // 0x15d6 Return
}


func_11734()
{
	var_6035_string = ""; var_6036_bool = 0; // 0x2dd7 PushV
	var_6035_string = "warehouse_notkin@door1"; // 0x2dd8 MovS
	var_6036_bool = 1; // 0x2dd9 MovB
	func_151(var_6035_string, var_6036_bool); // 0x2dda NEW_2
	return 0; // 0x2ddc Return
}


func_5591(var_1375_int)
{
	var_1380_int = 0; var_1381_int = 0; // 0x15d8 PushV
	var_1380_int = 6; // 0x15d9 MovI
	var_1381_int = var_1375_int; // 0x15da Mov
	func_1000(var_1380_int, var_1381_int); // 0x15db NEW_2
	return 0; // 0x15dd Return
}


func_11741()
{
	var_6348_string = ""; var_6349_bool = 0; // 0x2dde PushV
	var_6348_string = "warehouse_notkin@door1"; // 0x2ddf MovS
	var_6349_bool = 0; // 0x2de0 MovB
	func_151(var_6348_string, var_6349_bool); // 0x2de1 NEW_2
	return 0; // 0x2de3 Return
}


func_5598()
{
	var_2658_int = 0; var_2659_bool = 0; // 0x15df PushV
	var_2658_int = 6; // 0x15e0 MovI
	var_2659_bool = 0; // 0x15e1 MovB
	func_729(var_2658_int, var_2659_bool); // 0x15e2 NEW_2
	return 0; // 0x15e4 Return
}


func_479(var_2142_int, var_2143_string, var_2144_string, var_2145_int)
{
	var_2146_object = Obj(); var_2147_object = Obj(); // 0x1df PushV
	GetMainOutdoorScene(var_2147_object); // 0x1e0 Func
	var_2148_bool = var_2147_object == 0; // 0x1e2 NullEq
	if(var_2148_bool == 0) goto Label_488; // 0x1e3 JumpB
	var_2149_string = "City manager: Can't find main outdoor scene"; // 0x1e4 PushS
	Trace(var_2149_string); // 0x1e5 Func
	return 2; // 0x1e7 Return
	
Label_488:
	SetRegionActorCountByType(var_2142_int, var_2143_string, var_2144_string, var_2145_int); // 0x1e8 ObjFunc
	return 2; // 0x1ea Return
}


func_11748(var_5253_bool)
{
	var_5256_int = 0; var_5257_string = ""; // 0x2de5 PushV
	var_5257_string = "b7q02"; // 0x2de6 MovS
	func_106(var_5256_int, var_5257_string); // 0x2de7 NEW_2
	var_5258_int = 0; // 0x2de9 PushI
	var_5259_bool = var_5256_int == var_5258_int; // 0x2dea Eq
	if(var_5259_bool == 0) goto Label_11758; // 0x2deb JumpB
	var_5253_bool = 1; // 0x2dec MovB
	return 0; // 0x2ded Return
	
Label_11758:
	var_5253_bool = 0; // 0x2dee MovB
	return 0; // 0x2def Return
}


func_5605()
{
	var_3784_int = 0; var_3785_bool = 0; // 0x15e6 PushV
	var_3784_int = 6; // 0x15e7 MovI
	var_3785_bool = 0; // 0x15e8 MovB
	func_729(var_3784_int, var_3785_bool); // 0x15e9 NEW_2
	return 0; // 0x15eb Return
}


func_2534(var_3027_int, var_3028_int, var_3029_int)
{
	var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; var_3033_int = 0; // 0x9e6 PushV
	var_3034_bool = 0; // 0x9e7 PushV
	var_3034_bool = 0; // 0x9e8 MovB
	var_3035_int = 8; // 0x9e9 PushI
	var_3036_bool = var_3029_int > var_3035_int; // 0x9ea GT
	if(var_3036_bool == 0) goto Label_2544; // 0x9eb JumpB
	var_3037_int = 21; // 0x9ec PushI
	var_3038_bool = var_3029_int < var_3037_int; // 0x9ed LT
	if(var_3038_bool == 0) goto Label_2544; // 0x9ee JumpB
	var_3034_bool = 1; // 0x9ef MovB
	
Label_2544:
	if(var_3034_bool == 0) goto Label_2599; // 0x9f0 JumpB
	var_3039_int = 0; var_3040_string = ""; var_3041_string = ""; var_3042_int = 0; // 0x9f1 PushV
	var_3039_int = var_3027_int; // 0x9f2 Mov
	var_3040_string = "pers_vaxxabit"; // 0x9f3 MovS
	var_3041_string = "vaxxabit_d.xml"; // 0x9f4 MovS
	var_3042_int = 6; // 0x9f5 MovI
	func_453(var_3039_int, var_3040_string, var_3041_string, var_3042_int); // 0x9f6 NEW_2
	var_3043_int = 0; var_3044_string = ""; var_3045_string = ""; var_3046_int = 0; // 0x9f8 PushV
	var_3043_int = var_3027_int; // 0x9f9 Mov
	var_3044_string = "pers_vaxxabitka"; // 0x9fa MovS
	var_3045_string = "vaxxabitka_d.xml"; // 0x9fb MovS
	var_3046_int = 6; // 0x9fc MovI
	func_453(var_3043_int, var_3044_string, var_3045_string, var_3046_int); // 0x9fd NEW_2
	var_3047_int = 0; var_3048_string = ""; var_3049_string = ""; var_3050_int = 0; // 0x9ff PushV
	var_3047_int = var_3027_int; // 0xa00 Mov
	var_3048_string = "pers_rat_big"; // 0xa01 MovS
	var_3049_string = "rat_big.xml"; // 0xa02 MovS
	var_3050_int = 3; // 0xa03 MovI
	func_453(var_3047_int, var_3048_string, var_3049_string, var_3050_int); // 0xa04 NEW_2
	var_3051_int = 0; var_3052_string = ""; var_3053_string = ""; var_3054_int = 0; // 0xa06 PushV
	var_3051_int = var_3027_int; // 0xa07 Mov
	var_3052_string = "fog"; // 0xa08 MovS
	var_3053_string = "fog.xml"; // 0xa09 MovS
	var_3054_int = 8; // 0xa0a MovI
	func_479(var_3051_int, var_3052_string, var_3053_string, var_3054_int); // 0xa0b NEW_2
	var_3055_int = 5; // 0xa0d PushI
	var_3056_bool = var_3028_int >= var_3055_int; // 0xa0e GE
	if(var_3056_bool == 0) goto Label_2583; // 0xa0f JumpB
	var_3057_int = 0; var_3058_string = ""; var_3059_string = ""; var_3060_int = 0; // 0xa10 PushV
	var_3057_int = var_3027_int; // 0xa11 Mov
	var_3058_string = "fog"; // 0xa12 MovS
	var_3059_string = "fog_hunter.xml"; // 0xa13 MovS
	var_3060_int = 3; // 0xa14 MovI
	func_479(var_3057_int, var_3058_string, var_3059_string, var_3060_int); // 0xa15 NEW_2
	
Label_2583:
	var_3061_int = 1; // 0xa17 PushI
	var_3062_float = 0; var_3063_int = 0; // 0xa18 PushV
	var_3063_int = var_3028_int; // 0xa19 Mov
	func_1205(var_3062_float, var_3063_int); // 0xa1a NEW_2
	var_3032_int = var_3061_int * var_3062_float; // 0xa1c Mult2
	var_3064_int = var_3032_int; // 0xa1d Push
	if(var_3064_int == 0) goto Label_2598; // 0xa1e JumpB
	var_3065_int = 0; var_3066_string = ""; var_3067_string = ""; var_3068_int = 0; // 0xa1f PushV
	var_3065_int = var_3027_int; // 0xa20 Mov
	var_3066_string = "pers_bomber"; // 0xa21 MovS
	var_3067_string = "bomber.xml"; // 0xa22 MovS
	var_3068_int = var_3032_int; // 0xa23 Mov
	func_453(var_3065_int, var_3066_string, var_3067_string, var_3068_int); // 0xa24 NEW_2
	
Label_2598:
	goto Label_2652; // 0xa26 Jump
	
Label_2652:
	var_3069_int = 0; var_3070_string = ""; var_3071_string = ""; var_3072_int = 0; var_3073_int = 0; var_3074_int = 0; // 0xa5c PushV
	var_3069_int = var_3027_int; // 0xa5d Mov
	var_3070_string = "pers_worker"; // 0xa5e MovS
	var_3071_string = "agony1_man.xml"; // 0xa5f MovS
	var_3072_int = 2; // 0xa60 MovI
	var_3073_int = 4; // 0xa61 MovI
	var_3074_int = 4; // 0xa62 MovI
	func_466(var_3069_int, var_3070_string, var_3071_string, var_3072_int, var_3073_int, var_3074_int); // 0xa63 NEW_2
	var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0; var_3079_int = 0; var_3080_int = 0; // 0xa65 PushV
	var_3075_int = var_3027_int; // 0xa66 Mov
	var_3076_string = "pers_unosha"; // 0xa67 MovS
	var_3077_string = "agony1_man.xml"; // 0xa68 MovS
	var_3078_int = 2; // 0xa69 MovI
	var_3079_int = 4; // 0xa6a MovI
	var_3080_int = 4; // 0xa6b MovI
	func_466(var_3075_int, var_3076_string, var_3077_string, var_3078_int, var_3079_int, var_3080_int); // 0xa6c NEW_2
	var_3081_int = 0; var_3082_string = ""; var_3083_string = ""; var_3084_int = 0; var_3085_int = 0; var_3086_int = 0; // 0xa6e PushV
	var_3081_int = var_3027_int; // 0xa6f Mov
	var_3082_string = "pers_woman"; // 0xa70 MovS
	var_3083_string = "agony1_woman.xml"; // 0xa71 MovS
	var_3084_int = 2; // 0xa72 MovI
	var_3085_int = 4; // 0xa73 MovI
	var_3086_int = 4; // 0xa74 MovI
	func_466(var_3081_int, var_3082_string, var_3083_string, var_3084_int, var_3085_int, var_3086_int); // 0xa75 NEW_2
	var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0; var_3091_int = 0; var_3092_int = 0; // 0xa77 PushV
	var_3087_int = var_3027_int; // 0xa78 Mov
	var_3088_string = "pers_wasted_girl"; // 0xa79 MovS
	var_3089_string = "agony1_woman.xml"; // 0xa7a MovS
	var_3090_int = 2; // 0xa7b MovI
	var_3091_int = 4; // 0xa7c MovI
	var_3092_int = 4; // 0xa7d MovI
	func_466(var_3087_int, var_3088_string, var_3089_string, var_3090_int, var_3091_int, var_3092_int); // 0xa7e NEW_2
	var_3093_bool = 0; var_3094_int = 0; var_3095_int = 0; // 0xa80 PushV
	var_3094_int = var_3028_int; // 0xa81 Mov
	var_3095_int = var_3029_int; // 0xa82 Mov
	func_1295(var_3093_bool, var_3094_int, var_3095_int); // 0xa83 NEW_2
	if(var_3093_bool == 0) goto Label_2701; // 0xa85 JumpB
	var_3096_int = 0; var_3097_string = ""; var_3098_string = ""; var_3099_int = 0; // 0xa86 PushV
	var_3096_int = var_3027_int; // 0xa87 Mov
	var_3097_string = "pers_soldat"; // 0xa88 MovS
	var_3098_string = "soldier_marauder.xml"; // 0xa89 MovS
	var_3099_int = 2; // 0xa8a MovI
	func_453(var_3096_int, var_3097_string, var_3098_string, var_3099_int); // 0xa8b NEW_2
	
Label_2701:
	var_3100_bool = 0; var_3101_int = 0; // 0xa8d PushV
	var_3101_int = var_3028_int; // 0xa8e Mov
	func_1322(var_3100_bool, var_3101_int); // 0xa8f NEW_2
	if(var_3100_bool == 0) goto Label_2713; // 0xa91 JumpB
	var_3102_int = 0; var_3103_string = ""; var_3104_string = ""; var_3105_int = 0; // 0xa92 PushV
	var_3102_int = var_3027_int; // 0xa93 Mov
	var_3103_string = "pers_sanitar"; // 0xa94 MovS
	var_3104_string = "sanitar.xml"; // 0xa95 MovS
	var_3105_int = 2; // 0xa96 MovI
	func_453(var_3102_int, var_3103_string, var_3104_string, var_3105_int); // 0xa97 NEW_2
	
Label_2713:
	return 4; // 0xa99 Return
	
Label_2599:
	var_3106_int = 0; var_3107_string = ""; var_3108_string = ""; var_3109_int = 0; // 0xa27 PushV
	var_3106_int = var_3027_int; // 0xa28 Mov
	var_3107_string = "pers_vaxxabit"; // 0xa29 MovS
	var_3108_string = "vaxxabit_d.xml"; // 0xa2a MovS
	var_3109_int = 6; // 0xa2b MovI
	func_453(var_3106_int, var_3107_string, var_3108_string, var_3109_int); // 0xa2c NEW_2
	var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0; // 0xa2e PushV
	var_3110_int = var_3027_int; // 0xa2f Mov
	var_3111_string = "pers_vaxxabitka"; // 0xa30 MovS
	var_3112_string = "vaxxabitka_d.xml"; // 0xa31 MovS
	var_3113_int = 5; // 0xa32 MovI
	func_453(var_3110_int, var_3111_string, var_3112_string, var_3113_int); // 0xa33 NEW_2
	var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0; // 0xa35 PushV
	var_3114_int = var_3027_int; // 0xa36 Mov
	var_3115_string = "pers_rat_big"; // 0xa37 MovS
	var_3116_string = "rat_big.xml"; // 0xa38 MovS
	var_3117_int = 4; // 0xa39 MovI
	func_453(var_3114_int, var_3115_string, var_3116_string, var_3117_int); // 0xa3a NEW_2
	var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0; // 0xa3c PushV
	var_3118_int = var_3027_int; // 0xa3d Mov
	var_3119_string = "fog"; // 0xa3e MovS
	var_3120_string = "fog.xml"; // 0xa3f MovS
	var_3121_int = 6; // 0xa40 MovI
	func_479(var_3118_int, var_3119_string, var_3120_string, var_3121_int); // 0xa41 NEW_2
	var_3122_int = 5; // 0xa43 PushI
	var_3123_bool = var_3028_int >= var_3122_int; // 0xa44 GE
	if(var_3123_bool == 0) goto Label_2637; // 0xa45 JumpB
	var_3124_int = 0; var_3125_string = ""; var_3126_string = ""; var_3127_int = 0; // 0xa46 PushV
	var_3124_int = var_3027_int; // 0xa47 Mov
	var_3125_string = "fog"; // 0xa48 MovS
	var_3126_string = "fog_hunter.xml"; // 0xa49 MovS
	var_3127_int = 2; // 0xa4a MovI
	func_479(var_3124_int, var_3125_string, var_3126_string, var_3127_int); // 0xa4b NEW_2
	
Label_2637:
	var_3128_int = 1; // 0xa4d PushI
	var_3129_float = 0; var_3130_int = 0; // 0xa4e PushV
	var_3130_int = var_3028_int; // 0xa4f Mov
	func_1205(var_3129_float, var_3130_int); // 0xa50 NEW_2
	var_3033_int = var_3128_int * var_3129_float; // 0xa52 Mult2
	var_3131_int = var_3033_int; // 0xa53 Push
	if(var_3131_int == 0) goto Label_2652; // 0xa54 JumpB
	var_3132_int = 0; var_3133_string = ""; var_3134_string = ""; var_3135_int = 0; // 0xa55 PushV
	var_3132_int = var_3027_int; // 0xa56 Mov
	var_3133_string = "pers_bomber"; // 0xa57 MovS
	var_3134_string = "bomber.xml"; // 0xa58 MovS
	var_3135_int = var_3033_int; // 0xa59 Mov
	func_453(var_3132_int, var_3133_string, var_3134_string, var_3135_int); // 0xa5a NEW_2
}


func_4586(var_2275_int, var_2276_int, var_2277_object, var_2278_object, var_2279_object, var_2280_object)
{
	var_2281_int = 0; // 0x11eb PushI
	var_2282_bool = var_2276_int == var_2281_int; // 0x11ec Eq
	if(var_2282_bool == 0) goto Label_4626; // 0x11ed JumpB
	var_2283_int = 0; var_2284_bool = 0; // 0x11ee PushV
	var_2283_int = 1; // 0x11ef MovI
	var_2284_bool = 1; // 0x11f0 MovB
	func_746(var_2283_int, var_2284_bool); // 0x11f1 NEW_2
	var_2285_int = 0; var_2286_bool = 0; var_2287_int = 0; // 0x11f3 PushV
	var_2285_int = 1; // 0x11f4 MovI
	var_2286_bool = 1; // 0x11f5 MovB
	var_2287_int = 1; // 0x11f6 MovI
	func_763(var_2285_int, var_2286_bool, var_2287_int); // 0x11f7 NEW_2
	var_2288_int = 0; var_2289_int = 0; var_2290_object = Obj(); var_2291_object = Obj(); var_2292_object = Obj(); // 0x11f9 PushV
	var_2288_int = 1; // 0x11fa MovI
	var_2289_int = var_2275_int; // 0x11fb Mov
	var_2290_object = var_2277_object; // 0x11fc Mov
	var_2291_object = var_2278_object; // 0x11fd Mov
	var_2292_object = var_2279_object; // 0x11fe Mov
	func_591(var_2288_int, var_2289_int, var_2290_object, var_2291_object, var_2292_object); // 0x11ff NEW_2
	var_2293_object = Obj(); var_2294_int = 0; // 0x1201 PushV
	var_2293_object = var_2280_object; // 0x1202 Mov
	var_2294_int = 1; // 0x1203 MovI
	func_255(var_2294_int); // 0x1204 NEW_2
	var_2295_int = 0; var_2296_bool = 0; var_2297_int = 0; // 0x1206 PushV
	var_2295_int = 1; // 0x1207 MovI
	var_2296_bool = 1; // 0x1208 MovB
	var_2297_int = 8; // 0x1209 MovI
	func_820(var_2295_int, var_2296_bool, var_2297_int); // 0x120a NEW_2
	var_2298_int = 0; var_2299_bool = 0; var_2300_int = 0; // 0x120c PushV
	var_2298_int = 1; // 0x120d MovI
	var_2299_bool = 0; // 0x120e MovB
	var_2300_int = 8; // 0x120f MovI
	func_882(var_2298_int, var_2299_bool, var_2300_int); // 0x1210 NEW_2
	
Label_4626:
	var_2301_int = 0; var_2302_bool = 0; // 0x1212 PushV
	var_2301_int = 1; // 0x1213 MovI
	var_2302_bool = 0; // 0x1214 MovB
	func_729(var_2301_int, var_2302_bool); // 0x1215 NEW_2
	var_2303_int = 0; var_2304_int = 0; var_2305_int = 0; // 0x1217 PushV
	var_2303_int = 1; // 0x1218 MovI
	var_2304_int = var_2275_int; // 0x1219 Mov
	var_2305_int = var_2276_int; // 0x121a Mov
	func_3254(var_2303_int, var_2304_int, var_2305_int); // 0x121b NEW_2
	return 0; // 0x121d Return
}


func_492(var_571_int, var_572_bool)
{
	var_573_object = Obj(); var_574_object = Obj(); var_575_bool = 0; var_576_object = Obj(); var_577_object = Obj(); var_578_object = Obj(); var_579_bool = 0; var_580_object = Obj(); // 0x1ec PushV
	GetMainOutdoorScene(var_577_object); // 0x1ed Func
	var_581_int = 101; // 0x1ef PushI
	var_582_int = var_581_int + var_571_int; // 0x1f0 Add
	GetGroupActors(var_578_object, var_582_int); // 0x1f1 ObjFunc
	var_583_object = var_578_object; // 0x1f3 Push
	if(var_583_object == 0) goto Label_523; // 0x1f4 JumpB
	
Label_501:
	Next(var_579_bool, var_580_object); // 0x1f5 ObjFunc
	var_584_bool = var_579_bool; // 0x1f7 Push
	if(var_584_bool == 0) goto Label_522; // 0x1f8 JumpB
	var_585_bool = 0; var_586_object = Obj(); var_587_string = ""; // 0x1f9 PushV
	var_586_object = var_580_object; // 0x1fa Mov
	var_587_string = "locked"; // 0x1fb MovS
	func_88(var_585_bool, var_586_object, var_587_string); // 0x1fc NEW_2
	if(var_585_bool == 0) goto Label_515; // 0x1fe JumpB
	var_594_string = "locked"; // 0x1ff PushS
	SetProperty(var_594_string, var_572_bool); // 0x200 ObjFunc
	goto Label_521; // 0x202 Jump
	
Label_521:
	goto Label_501; // 0x209 Jump
	
Label_515:
	var_595_string = "Actor ""; // 0x203 PushS
	var_596_int = var_595_string + var_580_object; // 0x204 Add
	var_597_string = "" can't be locked"; // 0x205 PushS
	var_598_int = var_596_int + var_597_string; // 0x206 Add
	Trace(var_598_int); // 0x207 Func
	
Label_522:
	var_580_object = 0; // 0x20a SetNull
	
Label_523:
	return 8; // 0x20b Return
}


func_6636()
{
	var_266_string = "r6_house2_03"; // 0x19ed PushS
	add(var_266_string); // 0x19ee ObjFunc
	var_267_string = "r6_house4_01_i2"; // 0x19f0 PushS
	add(var_267_string); // 0x19f1 ObjFunc
	var_268_string = "r6_house4_02_i2"; // 0x19f3 PushS
	add(var_268_string); // 0x19f4 ObjFunc
	var_269_string = "r6_house4_02"; // 0x19f6 PushS
	add(var_269_string); // 0x19f7 ObjFunc
	var_270_string = "r6_house3_02_i2"; // 0x19f9 PushS
	add(var_270_string); // 0x19fa ObjFunc
	var_271_string = "r6_house3_02"; // 0x19fc PushS
	add(var_271_string); // 0x19fd ObjFunc
	var_272_string = "r6_house3_01_i2"; // 0x19ff PushS
	add(var_272_string); // 0x1a00 ObjFunc
	var_273_string = "r6_house3_01"; // 0x1a02 PushS
	add(var_273_string); // 0x1a03 ObjFunc
	var_274_string = "r6_house2_01"; // 0x1a05 PushS
	add(var_274_string); // 0x1a06 ObjFunc
	var_275_string = "r6_house7_01"; // 0x1a08 PushS
	add(var_275_string); // 0x1a09 ObjFunc
	var_276_string = "r6_house7_02"; // 0x1a0b PushS
	add(var_276_string); // 0x1a0c ObjFunc
	var_277_string = "r6_House6_01"; // 0x1a0e PushS
	add(var_277_string); // 0x1a0f ObjFunc
	var_278_string = "r6_house2_02"; // 0x1a11 PushS
	add(var_278_string); // 0x1a12 ObjFunc
	return 0; // 0x1a14 Return
}


func_5612()
{
	var_178_string = "House6_02"; // 0x15ed PushS
	add(var_178_string); // 0x15ee ObjFunc
	var_179_string = "House6_01"; // 0x15f0 PushS
	add(var_179_string); // 0x15f1 ObjFunc
	var_180_string = "house_2_01"; // 0x15f3 PushS
	add(var_180_string); // 0x15f4 ObjFunc
	var_181_string = "house7_03"; // 0x15f6 PushS
	add(var_181_string); // 0x15f7 ObjFunc
	var_182_string = "house7_02"; // 0x15f9 PushS
	add(var_182_string); // 0x15fa ObjFunc
	var_183_string = "house3_01_i2"; // 0x15fc PushS
	add(var_183_string); // 0x15fd ObjFunc
	var_184_string = "house3_01"; // 0x15ff PushS
	add(var_184_string); // 0x1600 ObjFunc
	var_185_string = "house_2_03"; // 0x1602 PushS
	add(var_185_string); // 0x1603 ObjFunc
	var_186_string = "house_2_02"; // 0x1605 PushS
	add(var_186_string); // 0x1606 ObjFunc
	var_187_string = "house4_01_i2"; // 0x1608 PushS
	add(var_187_string); // 0x1609 ObjFunc
	var_188_string = "house4_01"; // 0x160b PushS
	add(var_188_string); // 0x160c ObjFunc
	var_189_string = "House6_05"; // 0x160e PushS
	add(var_189_string); // 0x160f ObjFunc
	var_190_string = "House6_04"; // 0x1611 PushS
	add(var_190_string); // 0x1612 ObjFunc
	var_191_string = "House6_03"; // 0x1614 PushS
	add(var_191_string); // 0x1615 ObjFunc
	return 0; // 0x1617 Return
}


func_11760(var_5184_bool)
{
	var_5187_int = 0; var_5188_string = ""; // 0x2df1 PushV
	var_5188_string = "b7q01"; // 0x2df2 MovS
	func_106(var_5187_int, var_5188_string); // 0x2df3 NEW_2
	var_5189_int = 1000; // 0x2df5 PushI
	var_5190_bool = var_5187_int == var_5189_int; // 0x2df6 Eq
	if(var_5190_bool == 0) goto Label_11770; // 0x2df7 JumpB
	var_5184_bool = 1; // 0x2df8 MovB
	return 0; // 0x2df9 Return
	
Label_11770:
	var_5184_bool = 0; // 0x2dfa MovB
	return 0; // 0x2dfb Return
}


func_14840(var_4305_int)
{
	var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); var_4313_object = Obj(); // 0x39f8 PushV
	var_4314_int = 3; // 0x39f9 PushI
	var_4315_bool = var_4305_int == var_4314_int; // 0x39fa Eq
	if(var_4315_bool == 0) goto Label_14864; // 0x39fb JumpB
	var_4316_string = "Special diseased house: house5_unoin03l"; // 0x39fc PushS
	Trace(var_4316_string); // 0x39fd Func
	var_4317_string = "Special diseased house: house5_unoin03r"; // 0x39ff PushS
	Trace(var_4317_string); // 0x3a00 Func
	var_4318_string = "house5_unoin03l"; // 0x3a02 PushS
	GetSceneByName(var_4310_object, var_4318_string); // 0x3a03 Func
	var_4319_string = "s_house5_unoin03l.isc"; // 0x3a05 PushS
	ReplaceScene(var_4310_object, var_4319_string); // 0x3a06 Func
	var_4320_string = "house5_unoin03r"; // 0x3a08 PushS
	GetSceneByName(var_4310_object, var_4320_string); // 0x3a09 Func
	var_4321_string = "s_house5_unoin03r.isc"; // 0x3a0b PushS
	ReplaceScene(var_4310_object, var_4321_string); // 0x3a0c Func
	var_4310_object = 0; // 0x3a0e SetNull
	goto Label_14899; // 0x3a0f Jump
	
Label_14899:
	return 8; // 0x3a33 Return
	
Label_14864:
	var_4322_int = 4; // 0x3a10 PushI
	var_4323_bool = var_4305_int == var_4322_int; // 0x3a11 Eq
	if(var_4323_bool == 0) goto Label_14875; // 0x3a12 JumpB
	var_4324_string = "theater"; // 0x3a13 PushS
	GetSceneByName(var_4311_object, var_4324_string); // 0x3a14 Func
	var_4325_string = "dtheater_burah.isc"; // 0x3a16 PushS
	ReplaceScene(var_4311_object, var_4325_string); // 0x3a17 Func
	var_4311_object = 0; // 0x3a19 SetNull
	goto Label_14899; // 0x3a1a Jump
	
Label_14875:
	var_4326_int = 8; // 0x3a1b PushI
	var_4327_bool = var_4305_int == var_4326_int; // 0x3a1c Eq
	if(var_4327_bool == 0) goto Label_14889; // 0x3a1d JumpB
	var_4328_string = "Special replaced house: uprava_admin"; // 0x3a1e PushS
	Trace(var_4328_string); // 0x3a1f Func
	var_4329_string = "uprava_admin"; // 0x3a21 PushS
	GetSceneByName(var_4312_object, var_4329_string); // 0x3a22 Func
	var_4330_string = "uprava_admin_army_burah.isc"; // 0x3a24 PushS
	ReplaceScene(var_4312_object, var_4330_string); // 0x3a25 Func
	var_4312_object = 0; // 0x3a27 SetNull
	goto Label_14899; // 0x3a28 Jump
	
Label_14889:
	var_4331_int = 11; // 0x3a29 PushI
	var_4332_bool = var_4305_int == var_4331_int; // 0x3a2a Eq
	if(var_4332_bool == 0) goto Label_14899; // 0x3a2b JumpB
	var_4333_string = "theater"; // 0x3a2c PushS
	GetSceneByName(var_4313_object, var_4333_string); // 0x3a2d Func
	var_4334_string = "theater_burah.isc"; // 0x3a2f PushS
	ReplaceScene(var_4313_object, var_4334_string); // 0x3a30 Func
	var_4313_object = 0; // 0x3a32 SetNull
}


func_8698()
{
	var_4433_int = 0; var_4434_object = Obj(); var_4435_int = 0; var_4436_object = Obj(); var_4437_bool = 0; var_4438_cvector = CVector(0,0,0); var_4439_cvector = CVector(0,0,0); var_4440_string = ""; var_4441_int = 0; var_4442_object = Obj(); var_4443_int = 0; var_4444_object = Obj(); var_4445_bool = 0; var_4446_cvector = CVector(0,0,0); var_4447_cvector = CVector(0,0,0); var_4448_string = ""; // 0x21fa PushV
	var_4449_int = 0; // 0x21fb PushV
	func_12303(var_4449_int); // 0x21fc NEW_2
	var_4450_int = 0; // 0x21fe PushI
	var_4451_bool = var_4449_int == var_4450_int; // 0x21ff Eq
	if(var_4451_bool == 0) goto Label_8706; // 0x2200 JumpB
	return 16; // 0x2201 Return
	
Label_8706:
	var_4452_object = GlobalVars[6]; // 0x2202 PushGE
	size(var_4441_int); // 0x2203 ObjFunc
	GetMainOutdoorScene(var_4442_object); // 0x2205 Func
	var_4443_int = 0; // 0x2207 MovI
	
Label_8712:
	var_4453_bool = var_4443_int < var_4441_int; // 0x2208 LT
	if(var_4453_bool == 0) goto Label_8771; // 0x2209 JumpB
	var_4454_object = GlobalVars[6]; // 0x220a PushGE
	get(var_4444_object, var_4443_int); // 0x220b ObjFunc
	var_4455_object = var_4444_object; // 0x220d Push
	if(var_4455_object == 0) goto Label_8720; // 0x220e JumpB
	goto Label_8768; // 0x220f Jump
	
Label_8768:
	var_4456_int = 1; // 0x2240 PushI
	var_4443_int = var_4443_int + var_4456_int; // 0x2241 Add2
	goto Label_8712; // 0x2242 Jump
	
Label_8720:
	var_4457_string = "pt_plant"; // 0x2210 PushS
	var_4458_int = 1; // 0x2211 PushI
	var_4459_int = var_4443_int + var_4458_int; // 0x2212 Add
	var_4460_int = var_4457_string + var_4459_int; // 0x2213 Add
	GetLocator(var_4460_int, var_4445_bool, var_4446_cvector, var_4447_cvector); // 0x2214 ObjFunc
	var_4461_bool = var_4445_bool == 0; // 0x2216 Not
	if(var_4461_bool == 0) goto Label_8732; // 0x2217 JumpB
	var_4462_string = "Plant point not found"; // 0x2218 PushS
	Trace(var_4462_string); // 0x2219 Func
	goto Label_8768; // 0x221b Jump
	
Label_8732:
	var_4463_int = 6; // 0x221c PushI
	var_4464_int = 3; // 0x221d PushI
	var_4465_int = 3; // 0x221e PushI
	var_4466_int = 3; // 0x221f PushI
	var_4467_int = 1; // 0x2220 PushI
	var_4468_int = 1; // 0x2221 PushI
	var_4469_string = ""; // 0x2222 PushS
	var_4470_string = "grass_black_tvir"; // 0x2223 PushS
	var_4471_string = "grass_blood_tvir"; // 0x2224 PushS
	var_4472_string = "grass_brown_tvir"; // 0x2225 PushS
	var_4473_string = "grass_savyur"; // 0x2226 PushS
	var_4474_string = "grass_white_plet"; // 0x2227 PushS
	RandOneOf(var_4448_string, var_4463_int, var_4464_int, var_4465_int, var_4466_int, var_4467_int, var_4468_int, var_4469_string, var_4470_string, var_4471_string, var_4472_string, var_4473_string, var_4474_string); // 0x2228 Func
	var_4475_string = var_4448_string; // 0x222a Push
	if(var_4475_string == 0) goto Label_8767; // 0x222b JumpB
	var_4476_string = "scripted"; // 0x222c PushS
	var_4477_string = "item_"; // 0x222d PushS
	var_4478_int = var_4477_string + var_4448_string; // 0x222e Add
	var_4479_string = "_stat.xml"; // 0x222f PushS
	var_4480_int = var_4478_int + var_4479_string; // 0x2230 Add
	AddStationaryActorByType(var_4444_object, var_4446_cvector, var_4447_cvector, var_4476_string, var_4480_int); // 0x2231 ObjFunc
	var_4481_object = GlobalVars[6]; // 0x2233 PushGE
	set(var_4443_int, var_4444_object); // 0x2234 ObjFunc
	var_4482_string = "New plant: ""; // 0x2236 PushS
	var_4483_int = var_4482_string + var_4448_string; // 0x2237 Add
	var_4484_string = "" at location #"; // 0x2238 PushS
	var_4485_int = var_4483_int + var_4484_string; // 0x2239 Add
	var_4486_int = 1; // 0x223a PushI
	var_4487_int = var_4443_int + var_4486_int; // 0x223b Add
	var_4488_int = var_4485_int + var_4487_int; // 0x223c Add
	Trace(var_4488_int); // 0x223d Func
	
Label_8767:
	var_4444_object = 0; // 0x223f SetNull
	
Label_8771:
	return 16; // 0x2243 Return
}


func_11772(var_5269_bool)
{
	var_5272_int = 0; var_5273_string = ""; // 0x2dfd PushV
	var_5273_string = "b8q01"; // 0x2dfe MovS
	func_106(var_5272_int, var_5273_string); // 0x2dff NEW_2
	var_5274_int = 0; // 0x2e01 PushI
	var_5275_bool = var_5272_int == var_5274_int; // 0x2e02 Eq
	if(var_5275_bool == 0) goto Label_11782; // 0x2e03 JumpB
	var_5269_bool = 1; // 0x2e04 MovB
	return 0; // 0x2e05 Return
	
Label_11782:
	var_5269_bool = 0; // 0x2e06 MovB
	return 0; // 0x2e07 Return
}


func_11784(var_5112_bool)
{
	var_5115_int = 0; var_5116_string = ""; // 0x2e09 PushV
	var_5116_string = "b10q01DankoTalk"; // 0x2e0a MovS
	func_106(var_5115_int, var_5116_string); // 0x2e0b NEW_2
	var_5117_int = 1; // 0x2e0d PushI
	var_5118_bool = var_5115_int == var_5117_int; // 0x2e0e Eq
	if(var_5118_bool == 0) goto Label_11794; // 0x2e0f JumpB
	var_5112_bool = 1; // 0x2e10 MovB
	return 0; // 0x2e11 Return
	
Label_11794:
	var_5112_bool = 0; // 0x2e12 MovB
	return 0; // 0x2e13 Return
}


func_10763()
{
	var_6041_object = Obj(); var_6042_object = Obj(); var_6043_object = Obj(); var_6044_object = Obj(); // 0x2a0b PushV
	var_6045_object = Obj(); // 0x2a0c PushV
	func_12286(var_6045_object); // 0x2a0d NEW_2
	var_6043_object = var_6045_object; // 0x2a0e Mov
	var_6046_string = "b2BurahHome"; // 0x2a10 PushS
	FindMark(var_6044_object, var_6046_string); // 0x2a11 ObjFunc
	var_6047_object = var_6044_object; // 0x2a13 Push
	if(var_6047_object == 0) goto Label_10775; // 0x2a14 JumpB
	Remove(); // 0x2a15 ObjFunc
	
Label_10775:
	var_6048_string = "b2DankoGotoMladVlad"; // 0x2a17 PushS
	FindMark(var_6044_object, var_6048_string); // 0x2a18 ObjFunc
	var_6049_object = var_6044_object; // 0x2a1a Push
	if(var_6049_object == 0) goto Label_10782; // 0x2a1b JumpB
	Remove(); // 0x2a1c ObjFunc
	
Label_10782:
	var_6050_string = "b2q01AlexandrGotoOspina"; // 0x2a1e PushS
	FindMark(var_6044_object, var_6050_string); // 0x2a1f ObjFunc
	var_6051_object = var_6044_object; // 0x2a21 Push
	if(var_6051_object == 0) goto Label_10789; // 0x2a22 JumpB
	Remove(); // 0x2a23 ObjFunc
	
Label_10789:
	var_6052_string = "b2q01BigVladGotoAlexandr"; // 0x2a25 PushS
	FindMark(var_6044_object, var_6052_string); // 0x2a26 ObjFunc
	var_6053_object = var_6044_object; // 0x2a28 Push
	if(var_6053_object == 0) goto Label_10796; // 0x2a29 JumpB
	Remove(); // 0x2a2a ObjFunc
	
Label_10796:
	var_6054_string = "b2q01BigVladGotoKaterina"; // 0x2a2c PushS
	FindMark(var_6044_object, var_6054_string); // 0x2a2d ObjFunc
	var_6055_object = var_6044_object; // 0x2a2f Push
	if(var_6055_object == 0) goto Label_10803; // 0x2a30 JumpB
	Remove(); // 0x2a31 ObjFunc
	
Label_10803:
	var_6056_string = "b2q01BigVladGotoMladVlad"; // 0x2a33 PushS
	FindMark(var_6044_object, var_6056_string); // 0x2a34 ObjFunc
	var_6057_object = var_6044_object; // 0x2a36 Push
	if(var_6057_object == 0) goto Label_10810; // 0x2a37 JumpB
	Remove(); // 0x2a38 ObjFunc
	
Label_10810:
	var_6058_string = "b2Travnik1"; // 0x2a3a PushS
	FindMark(var_6044_object, var_6058_string); // 0x2a3b ObjFunc
	var_6059_object = var_6044_object; // 0x2a3d Push
	if(var_6059_object == 0) goto Label_10817; // 0x2a3e JumpB
	Remove(); // 0x2a3f ObjFunc
	
Label_10817:
	var_6060_string = "b2Travnik2"; // 0x2a41 PushS
	FindMark(var_6044_object, var_6060_string); // 0x2a42 ObjFunc
	var_6061_object = var_6044_object; // 0x2a44 Push
	if(var_6061_object == 0) goto Label_10824; // 0x2a45 JumpB
	Remove(); // 0x2a46 ObjFunc
	
Label_10824:
	var_6062_string = "b2Travnik3"; // 0x2a48 PushS
	FindMark(var_6044_object, var_6062_string); // 0x2a49 ObjFunc
	var_6063_object = var_6044_object; // 0x2a4b Push
	if(var_6063_object == 0) goto Label_10831; // 0x2a4c JumpB
	Remove(); // 0x2a4d ObjFunc
	
Label_10831:
	var_6064_string = "b2q01BigVladGotoDanko"; // 0x2a4f PushS
	FindMark(var_6044_object, var_6064_string); // 0x2a50 ObjFunc
	var_6065_object = var_6044_object; // 0x2a52 Push
	if(var_6065_object == 0) goto Label_10838; // 0x2a53 JumpB
	Remove(); // 0x2a54 ObjFunc
	
Label_10838:
	var_6066_string = "b2q03GoodShop"; // 0x2a56 PushS
	FindMark(var_6044_object, var_6066_string); // 0x2a57 ObjFunc
	var_6067_object = var_6044_object; // 0x2a59 Push
	if(var_6067_object == 0) goto Label_10845; // 0x2a5a JumpB
	Remove(); // 0x2a5b ObjFunc
	
Label_10845:
	var_6068_string = "b2AndreiKabak"; // 0x2a5d PushS
	FindMark(var_6044_object, var_6068_string); // 0x2a5e ObjFunc
	var_6069_object = var_6044_object; // 0x2a60 Push
	if(var_6069_object == 0) goto Label_10852; // 0x2a61 JumpB
	Remove(); // 0x2a62 ObjFunc
	
Label_10852:
	var_6070_bool = 0; var_6071_int = 0; // 0x2a64 PushV
	var_6071_int = 245; // 0x2a65 MovI
	func_12261(var_6070_bool, var_6071_int); // 0x2a66 NEW_2
	var_6072_bool = 0; var_6073_int = 0; // 0x2a68 PushV
	var_6073_int = 456; // 0x2a69 MovI
	func_12261(var_6072_bool, var_6073_int); // 0x2a6a NEW_2
	var_6074_bool = 0; var_6075_int = 0; // 0x2a6c PushV
	var_6075_int = 585; // 0x2a6d MovI
	func_12261(var_6074_bool, var_6075_int); // 0x2a6e NEW_2
	var_6076_bool = 0; var_6077_int = 0; // 0x2a70 PushV
	var_6077_int = 588; // 0x2a71 MovI
	func_12261(var_6076_bool, var_6077_int); // 0x2a72 NEW_2
	return 4; // 0x2a74 Return
}


func_526(var_2030_string, var_2032_string, var_2033_string)
{
	var_2039_object = Obj(); var_2040_int = 0; var_2041_bool = 0; var_2042_cvector = CVector(0,0,0); var_2043_cvector = CVector(0,0,0); var_2044_object = Obj(); var_2045_object = Obj(); var_2046_int = 0; var_2047_bool = 0; var_2048_cvector = CVector(0,0,0); var_2049_cvector = CVector(0,0,0); var_2050_object = Obj(); // 0x20e PushV
	GetMainOutdoorScene(var_2045_object); // 0x20f Func
	var_2046_int = 0; // 0x211 MovI
	
Label_530:
	var_2051_int = 1; // 0x212 PushI
	var_2052_int = var_2046_int + var_2051_int; // 0x213 Add
	var_2053_int = var_2030_string + var_2052_int; // 0x214 Add
	GetLocator(var_2053_int, var_2047_bool, var_2048_cvector, var_2049_cvector); // 0x215 ObjFunc
	var_2054_bool = var_2047_bool == 0; // 0x217 Not
	if(var_2054_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_546; // 0x219 Jump
	
Label_546:
	return 12; // 0x222 Return
	
Label_538:
	AddStationaryActor(var_2050_object, var_2048_cvector, var_2049_cvector, var_2032_string, var_2033_string); // 0x21a ObjFunc
	add(var_2050_object); // 0x21c ObjFunc
	var_2050_object = 0; // 0x21e SetNull
	var_2055_int = 1; // 0x21f PushI
	var_2046_int = var_2046_int + var_2055_int; // 0x220 Add2
	goto Label_530; // 0x221 Jump
}


func_7695(var_4388_object, var_4390_string, var_4391_string, var_4392_string)
{
	var_4394_bool = 0; var_4395_cvector = CVector(0,0,0); var_4396_cvector = CVector(0,0,0); var_4397_object = Obj(); var_4398_bool = 0; var_4399_cvector = CVector(0,0,0); var_4400_cvector = CVector(0,0,0); var_4401_object = Obj(); // 0x1e0f PushV
	var_4402_string = "pt_guard_"; // 0x1e10 PushS
	var_4403_int = var_4402_string + var_4390_string; // 0x1e11 Add
	GetLocator(var_4403_int, var_4398_bool, var_4399_cvector, var_4400_cvector); // 0x1e12 ObjFunc
	var_4404_bool = var_4398_bool == 0; // 0x1e14 Not
	if(var_4404_bool == 0) goto Label_7707; // 0x1e15 JumpB
	var_4405_string = "Locator doesn't exist for guard "; // 0x1e16 PushS
	var_4406_int = var_4405_string + var_4390_string; // 0x1e17 Add
	Trace(var_4406_int); // 0x1e18 Func
	goto Label_7709; // 0x1e1a Jump
	
Label_7709:
	var_4388_object = var_4401_object; // 0x1e1d Mov
	return 8; // 0x1e1e Return
	
Label_7707:
	AddStationaryActor(var_4401_object, var_4399_cvector, var_4400_cvector, var_4391_string, var_4392_string); // 0x1e1b ObjFunc
}


func_11796(var_4764_bool)
{
	var_4767_int = 0; var_4768_string = ""; // 0x2e15 PushV
	var_4768_string = "b11q01"; // 0x2e16 MovS
	func_106(var_4767_int, var_4768_string); // 0x2e17 NEW_2
	var_4769_int = 0; // 0x2e19 PushI
	var_4770_bool = var_4767_int == var_4769_int; // 0x2e1a Eq
	if(var_4770_bool == 0) goto Label_11806; // 0x2e1b JumpB
	var_4764_bool = 1; // 0x2e1c MovB
	return 0; // 0x2e1d Return
	
Label_11806:
	var_4764_bool = 0; // 0x2e1e MovB
	return 0; // 0x2e1f Return
}


func_6677(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object)
{
	var_1709_int = 0; // 0x1a16 PushI
	var_1710_bool = var_1704_int == var_1709_int; // 0x1a17 Eq
	if(var_1710_bool == 0) goto Label_6717; // 0x1a18 JumpB
	var_1711_int = 0; var_1712_bool = 0; // 0x1a19 PushV
	var_1711_int = 12; // 0x1a1a MovI
	var_1712_bool = 0; // 0x1a1b MovB
	func_746(var_1711_int, var_1712_bool); // 0x1a1c NEW_2
	var_1713_int = 0; var_1714_bool = 0; var_1715_int = 0; // 0x1a1e PushV
	var_1713_int = 12; // 0x1a1f MovI
	var_1714_bool = 0; // 0x1a20 MovB
	var_1715_int = 1; // 0x1a21 MovI
	func_763(var_1713_int, var_1714_bool, var_1715_int); // 0x1a22 NEW_2
	var_1716_int = 0; var_1717_int = 0; var_1718_object = Obj(); var_1719_object = Obj(); var_1720_object = Obj(); // 0x1a24 PushV
	var_1716_int = 12; // 0x1a25 MovI
	var_1717_int = var_1703_int; // 0x1a26 Mov
	var_1718_object = var_1705_object; // 0x1a27 Mov
	var_1719_object = var_1706_object; // 0x1a28 Mov
	var_1720_object = var_1707_object; // 0x1a29 Mov
	func_572(var_1717_int, var_1718_object, var_1719_object, var_1720_object); // 0x1a2a NEW_2
	var_1721_object = Obj(); var_1722_int = 0; // 0x1a2c PushV
	var_1721_object = var_1708_object; // 0x1a2d Mov
	var_1722_int = 0; // 0x1a2e MovI
	func_255(var_1722_int); // 0x1a2f NEW_2
	var_1723_int = 0; var_1724_bool = 0; var_1725_int = 0; // 0x1a31 PushV
	var_1723_int = 12; // 0x1a32 MovI
	var_1724_bool = 0; // 0x1a33 MovB
	var_1725_int = 4; // 0x1a34 MovI
	func_820(var_1723_int, var_1724_bool, var_1725_int); // 0x1a35 NEW_2
	var_1726_int = 0; var_1727_bool = 0; var_1728_int = 0; // 0x1a37 PushV
	var_1726_int = 12; // 0x1a38 MovI
	var_1727_bool = 0; // 0x1a39 MovB
	var_1728_int = 4; // 0x1a3a MovI
	func_882(var_1726_int, var_1727_bool, var_1728_int); // 0x1a3b NEW_2
	
Label_6717:
	var_1729_int = 0; var_1730_int = 0; // 0x1a3d PushV
	var_1729_int = 12; // 0x1a3e MovI
	var_1730_int = var_1704_int; // 0x1a3f Mov
	func_970(var_1729_int, var_1730_int); // 0x1a40 NEW_2
	var_1731_int = 0; var_1732_int = 0; var_1733_int = 0; // 0x1a42 PushV
	var_1731_int = 12; // 0x1a43 MovI
	var_1732_int = var_1703_int; // 0x1a44 Mov
	var_1733_int = var_1704_int; // 0x1a45 Mov
	func_1574(var_1731_int, var_1732_int, var_1733_int); // 0x1a46 NEW_2
	return 0; // 0x1a48 Return
}


func_5656(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object)
{
	var_1390_int = 0; // 0x1619 PushI
	var_1391_bool = var_1385_int == var_1390_int; // 0x161a Eq
	if(var_1391_bool == 0) goto Label_5696; // 0x161b JumpB
	var_1392_int = 0; var_1393_bool = 0; // 0x161c PushV
	var_1392_int = 7; // 0x161d MovI
	var_1393_bool = 0; // 0x161e MovB
	func_746(var_1392_int, var_1393_bool); // 0x161f NEW_2
	var_1394_int = 0; var_1395_bool = 0; var_1396_int = 0; // 0x1621 PushV
	var_1394_int = 7; // 0x1622 MovI
	var_1395_bool = 0; // 0x1623 MovB
	var_1396_int = 1; // 0x1624 MovI
	func_763(var_1394_int, var_1395_bool, var_1396_int); // 0x1625 NEW_2
	var_1397_int = 0; var_1398_int = 0; var_1399_object = Obj(); var_1400_object = Obj(); var_1401_object = Obj(); // 0x1627 PushV
	var_1397_int = 7; // 0x1628 MovI
	var_1398_int = var_1384_int; // 0x1629 Mov
	var_1399_object = var_1386_object; // 0x162a Mov
	var_1400_object = var_1387_object; // 0x162b Mov
	var_1401_object = var_1388_object; // 0x162c Mov
	func_572(var_1398_int, var_1399_object, var_1400_object, var_1401_object); // 0x162d NEW_2
	var_1402_object = Obj(); var_1403_int = 0; // 0x162f PushV
	var_1402_object = var_1389_object; // 0x1630 Mov
	var_1403_int = 0; // 0x1631 MovI
	func_255(var_1403_int); // 0x1632 NEW_2
	var_1404_int = 0; var_1405_bool = 0; var_1406_int = 0; // 0x1634 PushV
	var_1404_int = 7; // 0x1635 MovI
	var_1405_bool = 0; // 0x1636 MovB
	var_1406_int = 6; // 0x1637 MovI
	func_820(var_1404_int, var_1405_bool, var_1406_int); // 0x1638 NEW_2
	var_1407_int = 0; var_1408_bool = 0; var_1409_int = 0; // 0x163a PushV
	var_1407_int = 7; // 0x163b MovI
	var_1408_bool = 0; // 0x163c MovB
	var_1409_int = 6; // 0x163d MovI
	func_882(var_1407_int, var_1408_bool, var_1409_int); // 0x163e NEW_2
	
Label_5696:
	var_1410_int = 0; var_1411_int = 0; // 0x1640 PushV
	var_1410_int = 7; // 0x1641 MovI
	var_1411_int = var_1385_int; // 0x1642 Mov
	func_970(var_1410_int, var_1411_int); // 0x1643 NEW_2
	var_1412_int = 0; var_1413_int = 0; var_1414_int = 0; // 0x1645 PushV
	var_1412_int = 7; // 0x1646 MovI
	var_1413_int = var_1384_int; // 0x1647 Mov
	var_1414_int = var_1385_int; // 0x1648 Mov
	func_1574(var_1412_int, var_1413_int, var_1414_int); // 0x1649 NEW_2
	return 0; // 0x164b Return
}


func_3609(var_3816_int, var_3817_int, var_3818_int)
{
	var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; var_3826_int = 0; // 0xe19 PushV
	var_3827_bool = 0; // 0xe1a PushV
	var_3827_bool = 0; // 0xe1b MovB
	var_3828_int = 8; // 0xe1c PushI
	var_3829_bool = var_3818_int > var_3828_int; // 0xe1d GT
	if(var_3829_bool == 0) goto Label_3619; // 0xe1e JumpB
	var_3830_int = 21; // 0xe1f PushI
	var_3831_bool = var_3818_int < var_3830_int; // 0xe20 LT
	if(var_3831_bool == 0) goto Label_3619; // 0xe21 JumpB
	var_3827_bool = 1; // 0xe22 MovB
	
Label_3619:
	if(var_3827_bool == 0) goto Label_3696; // 0xe23 JumpB
	var_3832_int = 0; var_3833_string = ""; var_3834_string = ""; var_3835_int = 0; // 0xe24 PushV
	var_3832_int = var_3816_int; // 0xe25 Mov
	var_3833_string = "pers_rat"; // 0xe26 MovS
	var_3834_string = "rat.xml"; // 0xe27 MovS
	var_3835_int = 1; // 0xe28 MovI
	func_453(var_3832_int, var_3833_string, var_3834_string, var_3835_int); // 0xe29 NEW_2
	var_3836_int = 0; var_3837_string = ""; var_3838_string = ""; var_3839_int = 0; // 0xe2b PushV
	var_3836_int = var_3816_int; // 0xe2c Mov
	var_3837_string = "pers_alkash"; // 0xe2d MovS
	var_3838_string = "alkash.xml"; // 0xe2e MovS
	var_3839_int = 2; // 0xe2f MovI
	func_453(var_3836_int, var_3837_string, var_3838_string, var_3839_int); // 0xe30 NEW_2
	var_3840_int = 0; var_3841_string = ""; var_3842_string = ""; var_3843_int = 0; // 0xe32 PushV
	var_3840_int = var_3816_int; // 0xe33 Mov
	var_3841_string = "pers_dohodyaga"; // 0xe34 MovS
	var_3842_string = "dohodyaga.xml"; // 0xe35 MovS
	var_3843_int = 1; // 0xe36 MovI
	func_453(var_3840_int, var_3841_string, var_3842_string, var_3843_int); // 0xe37 NEW_2
	var_3844_int = 2; // 0xe39 PushI
	var_3845_float = 0; var_3846_int = 0; // 0xe3a PushV
	var_3846_int = var_3817_int; // 0xe3b Mov
	func_1115(var_3845_float, var_3846_int); // 0xe3c NEW_2
	var_3823_int = var_3844_int * var_3845_float; // 0xe3e Mult2
	var_3847_int = var_3823_int; // 0xe3f Push
	if(var_3847_int == 0) goto Label_3656; // 0xe40 JumpB
	var_3848_int = 0; var_3849_string = ""; var_3850_string = ""; var_3851_int = 0; // 0xe41 PushV
	var_3848_int = var_3816_int; // 0xe42 Mov
	var_3849_string = "pers_grabitel"; // 0xe43 MovS
	var_3850_string = "grabitel.xml"; // 0xe44 MovS
	var_3851_int = var_3823_int; // 0xe45 Mov
	func_453(var_3848_int, var_3849_string, var_3850_string, var_3851_int); // 0xe46 NEW_2
	
Label_3656:
	var_3852_int = 1; // 0xe48 PushI
	var_3853_int = var_3817_int + var_3852_int; // 0xe49 Add
	var_3854_int = 2; // 0xe4a PushI
	var_3855_bool = var_3853_int >= var_3854_int; // 0xe4b GE
	if(var_3855_bool == 0) goto Label_3680; // 0xe4c JumpB
	var_3856_int = 0; var_3857_string = ""; var_3858_string = ""; var_3859_int = 0; // 0xe4d PushV
	var_3856_int = var_3816_int; // 0xe4e Mov
	var_3857_string = "pers_patrool"; // 0xe4f MovS
	var_3858_string = "patrol.xml"; // 0xe50 MovS
	var_3859_int = 1; // 0xe51 MovI
	func_453(var_3856_int, var_3857_string, var_3858_string, var_3859_int); // 0xe52 NEW_2
	var_3860_bool = 0; var_3861_int = 0; // 0xe54 PushV
	var_3861_int = var_3817_int; // 0xe55 Mov
	func_1322(var_3860_bool, var_3861_int); // 0xe56 NEW_2
	if(var_3860_bool == 0) goto Label_3680; // 0xe58 JumpB
	var_3862_int = 0; var_3863_string = ""; var_3864_string = ""; var_3865_int = 0; // 0xe59 PushV
	var_3862_int = var_3816_int; // 0xe5a Mov
	var_3863_string = "pers_soldat_hand"; // 0xe5b MovS
	var_3864_string = "soldier_patrol.xml"; // 0xe5c MovS
	var_3865_int = 1; // 0xe5d MovI
	func_453(var_3862_int, var_3863_string, var_3864_string, var_3865_int); // 0xe5e NEW_2
	
Label_3680:
	var_3866_int = 1; // 0xe60 PushI
	var_3867_float = 0; var_3868_int = 0; // 0xe61 PushV
	var_3868_int = var_3817_int; // 0xe62 Mov
	func_1205(var_3867_float, var_3868_int); // 0xe63 NEW_2
	var_3824_int = var_3866_int * var_3867_float; // 0xe65 Mult2
	var_3869_int = var_3824_int; // 0xe66 Push
	if(var_3869_int == 0) goto Label_3695; // 0xe67 JumpB
	var_3870_int = 0; var_3871_string = ""; var_3872_string = ""; var_3873_int = 0; // 0xe68 PushV
	var_3870_int = var_3816_int; // 0xe69 Mov
	var_3871_string = "pers_bomber"; // 0xe6a MovS
	var_3872_string = "bomber.xml"; // 0xe6b MovS
	var_3873_int = var_3824_int; // 0xe6c Mov
	func_453(var_3870_int, var_3871_string, var_3872_string, var_3873_int); // 0xe6d NEW_2
	
Label_3695:
	goto Label_3771; // 0xe6f Jump
	
Label_3771:
	var_3874_bool = 0; var_3875_int = 0; var_3876_int = 0; // 0xebb PushV
	var_3875_int = var_3817_int; // 0xebc Mov
	var_3876_int = var_3818_int; // 0xebd Mov
	func_1295(var_3874_bool, var_3875_int, var_3876_int); // 0xebe NEW_2
	if(var_3874_bool == 0) goto Label_3784; // 0xec0 JumpB
	var_3877_int = 0; var_3878_string = ""; var_3879_string = ""; var_3880_int = 0; // 0xec1 PushV
	var_3877_int = var_3816_int; // 0xec2 Mov
	var_3878_string = "pers_soldat"; // 0xec3 MovS
	var_3879_string = "soldier_marauder.xml"; // 0xec4 MovS
	var_3880_int = 2; // 0xec5 MovI
	func_453(var_3877_int, var_3878_string, var_3879_string, var_3880_int); // 0xec6 NEW_2
	
Label_3784:
	var_3881_bool = 0; var_3882_int = 0; // 0xec8 PushV
	var_3882_int = var_3817_int; // 0xec9 Mov
	func_1322(var_3881_bool, var_3882_int); // 0xeca NEW_2
	if(var_3881_bool == 0) goto Label_3796; // 0xecc JumpB
	var_3883_int = 0; var_3884_string = ""; var_3885_string = ""; var_3886_int = 0; // 0xecd PushV
	var_3883_int = var_3816_int; // 0xece Mov
	var_3884_string = "pers_sanitar"; // 0xecf MovS
	var_3885_string = "sanitar.xml"; // 0xed0 MovS
	var_3886_int = 1; // 0xed1 MovI
	func_453(var_3883_int, var_3884_string, var_3885_string, var_3886_int); // 0xed2 NEW_2
	
Label_3796:
	return 8; // 0xed4 Return
	
Label_3696:
	var_3887_int = 0; var_3888_string = ""; var_3889_string = ""; var_3890_int = 0; // 0xe70 PushV
	var_3887_int = var_3816_int; // 0xe71 Mov
	var_3888_string = "pers_rat"; // 0xe72 MovS
	var_3889_string = "rat.xml"; // 0xe73 MovS
	var_3890_int = 3; // 0xe74 MovI
	func_453(var_3887_int, var_3888_string, var_3889_string, var_3890_int); // 0xe75 NEW_2
	var_3891_int = 0; var_3892_string = ""; var_3893_string = ""; var_3894_int = 0; // 0xe77 PushV
	var_3891_int = var_3816_int; // 0xe78 Mov
	var_3892_string = "pers_alkash"; // 0xe79 MovS
	var_3893_string = "alkash.xml"; // 0xe7a MovS
	var_3894_int = 1; // 0xe7b MovI
	func_453(var_3891_int, var_3892_string, var_3893_string, var_3894_int); // 0xe7c NEW_2
	var_3895_int = 0; var_3896_string = ""; var_3897_string = ""; var_3898_int = 0; // 0xe7e PushV
	var_3895_int = var_3816_int; // 0xe7f Mov
	var_3896_string = "pers_dohodyaga"; // 0xe80 MovS
	var_3897_string = "dohodyaga.xml"; // 0xe81 MovS
	var_3898_int = 1; // 0xe82 MovI
	func_453(var_3895_int, var_3896_string, var_3897_string, var_3898_int); // 0xe83 NEW_2
	var_3899_int = 3; // 0xe85 PushI
	var_3900_float = 0; var_3901_int = 0; // 0xe86 PushV
	var_3901_int = var_3817_int; // 0xe87 Mov
	func_1115(var_3900_float, var_3901_int); // 0xe88 NEW_2
	var_3825_int = var_3899_int * var_3900_float; // 0xe8a Mult2
	var_3902_int = var_3825_int; // 0xe8b Push
	if(var_3902_int == 0) goto Label_3732; // 0xe8c JumpB
	var_3903_int = 0; var_3904_string = ""; var_3905_string = ""; var_3906_int = 0; // 0xe8d PushV
	var_3903_int = var_3816_int; // 0xe8e Mov
	var_3904_string = "pers_grabitel"; // 0xe8f MovS
	var_3905_string = "grabitel.xml"; // 0xe90 MovS
	var_3906_int = var_3825_int; // 0xe91 Mov
	func_453(var_3903_int, var_3904_string, var_3905_string, var_3906_int); // 0xe92 NEW_2
	
Label_3732:
	var_3907_int = 1; // 0xe94 PushI
	var_3908_int = var_3817_int + var_3907_int; // 0xe95 Add
	var_3909_int = 2; // 0xe96 PushI
	var_3910_bool = var_3908_int >= var_3909_int; // 0xe97 GE
	if(var_3910_bool == 0) goto Label_3756; // 0xe98 JumpB
	var_3911_int = 0; var_3912_string = ""; var_3913_string = ""; var_3914_int = 0; // 0xe99 PushV
	var_3911_int = var_3816_int; // 0xe9a Mov
	var_3912_string = "pers_patrool"; // 0xe9b MovS
	var_3913_string = "patrol.xml"; // 0xe9c MovS
	var_3914_int = 1; // 0xe9d MovI
	func_453(var_3911_int, var_3912_string, var_3913_string, var_3914_int); // 0xe9e NEW_2
	var_3915_bool = 0; var_3916_int = 0; // 0xea0 PushV
	var_3916_int = var_3817_int; // 0xea1 Mov
	func_1322(var_3915_bool, var_3916_int); // 0xea2 NEW_2
	if(var_3915_bool == 0) goto Label_3756; // 0xea4 JumpB
	var_3917_int = 0; var_3918_string = ""; var_3919_string = ""; var_3920_int = 0; // 0xea5 PushV
	var_3917_int = var_3816_int; // 0xea6 Mov
	var_3918_string = "pers_soldat_hand"; // 0xea7 MovS
	var_3919_string = "soldier_patrol.xml"; // 0xea8 MovS
	var_3920_int = 1; // 0xea9 MovI
	func_453(var_3917_int, var_3918_string, var_3919_string, var_3920_int); // 0xeaa NEW_2
	
Label_3756:
	var_3921_int = 1; // 0xeac PushI
	var_3922_float = 0; var_3923_int = 0; // 0xead PushV
	var_3923_int = var_3817_int; // 0xeae Mov
	func_1205(var_3922_float, var_3923_int); // 0xeaf NEW_2
	var_3826_int = var_3921_int * var_3922_float; // 0xeb1 Mult2
	var_3924_int = var_3826_int; // 0xeb2 Push
	if(var_3924_int == 0) goto Label_3771; // 0xeb3 JumpB
	var_3925_int = 0; var_3926_string = ""; var_3927_string = ""; var_3928_int = 0; // 0xeb4 PushV
	var_3925_int = var_3816_int; // 0xeb5 Mov
	var_3926_string = "pers_bomber"; // 0xeb6 MovS
	var_3927_string = "bomber.xml"; // 0xeb7 MovS
	var_3928_int = var_3826_int; // 0xeb8 Mov
	func_453(var_3925_int, var_3926_string, var_3927_string, var_3928_int); // 0xeb9 NEW_2
}


func_4638(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3406_int = 0; // 0x121f PushI
	var_3407_bool = var_3401_int == var_3406_int; // 0x1220 Eq
	if(var_3407_bool == 0) goto Label_4678; // 0x1221 JumpB
	var_3408_int = 0; var_3409_bool = 0; // 0x1222 PushV
	var_3408_int = 1; // 0x1223 MovI
	var_3409_bool = 0; // 0x1224 MovB
	func_746(var_3408_int, var_3409_bool); // 0x1225 NEW_2
	var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0; // 0x1227 PushV
	var_3410_int = 1; // 0x1228 MovI
	var_3411_bool = 0; // 0x1229 MovB
	var_3412_int = 1; // 0x122a MovI
	func_763(var_3410_int, var_3411_bool, var_3412_int); // 0x122b NEW_2
	var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj(); // 0x122d PushV
	var_3413_int = 1; // 0x122e MovI
	var_3414_int = var_3400_int; // 0x122f Mov
	var_3415_object = var_3402_object; // 0x1230 Mov
	var_3416_object = var_3403_object; // 0x1231 Mov
	var_3417_object = var_3404_object; // 0x1232 Mov
	func_670(var_3413_int, var_3414_int, var_3415_object, var_3416_object, var_3417_object); // 0x1233 NEW_2
	var_3418_object = Obj(); var_3419_int = 0; // 0x1235 PushV
	var_3418_object = var_3405_object; // 0x1236 Mov
	var_3419_int = 2; // 0x1237 MovI
	func_255(var_3419_int); // 0x1238 NEW_2
	var_3420_int = 0; var_3421_bool = 0; var_3422_int = 0; // 0x123a PushV
	var_3420_int = 1; // 0x123b MovI
	var_3421_bool = 0; // 0x123c MovB
	var_3422_int = 8; // 0x123d MovI
	func_820(var_3420_int, var_3421_bool, var_3422_int); // 0x123e NEW_2
	var_3423_int = 0; var_3424_bool = 0; var_3425_int = 0; // 0x1240 PushV
	var_3423_int = 1; // 0x1241 MovI
	var_3424_bool = 1; // 0x1242 MovB
	var_3425_int = 8; // 0x1243 MovI
	func_882(var_3423_int, var_3424_bool, var_3425_int); // 0x1244 NEW_2
	
Label_4678:
	var_3426_int = 0; var_3427_bool = 0; // 0x1246 PushV
	var_3426_int = 1; // 0x1247 MovI
	var_3427_bool = 0; // 0x1248 MovB
	func_729(var_3426_int, var_3427_bool); // 0x1249 NEW_2
	var_3428_int = 0; var_3429_int = 0; var_3430_int = 0; // 0x124b PushV
	var_3428_int = 1; // 0x124c MovI
	var_3429_int = var_3400_int; // 0x124d Mov
	var_3430_int = var_3401_int; // 0x124e Mov
	func_4160(var_3428_int, var_3429_int, var_3430_int); // 0x124f NEW_2
	return 0; // 0x1251 Return
}


func_7712(var_4385_object, var_4386_object, var_4387_int)
{
	var_4388_object = Obj(); var_4389_object = Obj(); var_4390_string = ""; var_4391_string = ""; var_4392_string = ""; // 0x1e21 PushV
	var_4389_object = var_4386_object; // 0x1e22 Mov
	var_4393_string = "term"; // 0x1e23 PushS
	var_4390_string = var_4393_string + var_4387_int; // 0x1e24 Add2
	var_4391_string = "pers_patrool"; // 0x1e25 MovS
	var_4392_string = "guard_term.xml"; // 0x1e26 MovS
	func_7695(var_4389_object, var_4390_string, var_4391_string, var_4392_string); // 0x1e27 NEW_2
	var_4385_object = var_4388_object; // 0x1e28 Mov
	return 0; // 0x1e2a Return
}


func_11808(var_4700_bool)
{
	var_4703_int = 0; var_4704_string = ""; // 0x2e21 PushV
	var_4704_string = "b12q01BlockVisit"; // 0x2e22 MovS
	func_106(var_4703_int, var_4704_string); // 0x2e23 NEW_2
	var_4705_int = 0; // 0x2e25 PushI
	var_4706_bool = var_4703_int != var_4705_int; // 0x2e26 Neq
	if(var_4706_bool == 0) goto Label_11818; // 0x2e27 JumpB
	var_4700_bool = 1; // 0x2e28 MovB
	return 0; // 0x2e29 Return
	
Label_11818:
	var_4700_bool = 0; // 0x2e2a MovB
	return 0; // 0x2e2b Return
}


func_548(var_2056_string)
{
	var_2063_object = Obj(); var_2064_int = 0; var_2065_bool = 0; var_2066_cvector = CVector(0,0,0); var_2067_cvector = CVector(0,0,0); var_2068_object = Obj(); var_2069_string = ""; var_2070_object = Obj(); var_2071_int = 0; var_2072_bool = 0; var_2073_cvector = CVector(0,0,0); var_2074_cvector = CVector(0,0,0); var_2075_object = Obj(); var_2076_string = ""; // 0x224 PushV
	GetMainOutdoorScene(var_2070_object); // 0x225 Func
	var_2071_int = 0; // 0x227 MovI
	
Label_552:
	var_2077_int = 1; // 0x228 PushI
	var_2078_int = var_2071_int + var_2077_int; // 0x229 Add
	var_2079_int = var_2056_string + var_2078_int; // 0x22a Add
	GetLocator(var_2079_int, var_2072_bool, var_2073_cvector, var_2074_cvector); // 0x22b ObjFunc
	var_2080_bool = var_2072_bool == 0; // 0x22d Not
	if(var_2080_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_570; // 0x22f Jump
	
Label_570:
	return 14; // 0x23a Return
	
Label_560:
	var_2076_string = "fog_stat.xml"; // 0x230 MovS
	var_2081_string = "fog"; // 0x231 PushS
	AddStationaryActorByType(var_2075_object, var_2073_cvector, var_2074_cvector, var_2081_string, var_2076_string); // 0x232 ObjFunc
	add(var_2075_object); // 0x234 ObjFunc
	var_2075_object = 0; // 0x236 SetNull
	var_2082_int = 1; // 0x237 PushI
	var_2071_int = var_2071_int + var_2082_int; // 0x238 Add2
	goto Label_552; // 0x239 Jump
}


func_1574(var_1412_int, var_1413_int, var_1414_int)
{
	var_1415_int = 0; var_1416_int = 0; // 0x626 PushV
	var_1417_int = 1; // 0x627 PushI
	var_1418_int = var_1413_int + var_1417_int; // 0x628 Add
	var_1419_int = 12; // 0x629 PushI
	var_1420_bool = var_1418_int == var_1419_int; // 0x62a Eq
	if(var_1420_bool == 0) goto Label_1581; // 0x62b JumpB
	return 2; // 0x62c Return
	
Label_1581:
	var_1421_bool = 0; // 0x62d PushV
	var_1421_bool = 0; // 0x62e MovB
	var_1422_bool = 0; // 0x62f PushV
	var_1422_bool = 1; // 0x630 MovB
	var_1423_int = 7; // 0x631 PushI
	var_1424_bool = var_1414_int < var_1423_int; // 0x632 LT
	if(var_1424_bool == 0) goto Label_1592; // 0x633 JumpB
	var_1425_int = 21; // 0x634 PushI
	var_1426_bool = var_1414_int > var_1425_int; // 0x635 GT
	if(var_1426_bool == 0) goto Label_1592; // 0x636 JumpB
	var_1422_bool = 0; // 0x637 MovB
	
Label_1592:
	if(var_1422_bool == 0) goto Label_1597; // 0x638 JumpB
	var_1427_int = 0; // 0x639 PushI
	var_1428_bool = var_1413_int != var_1427_int; // 0x63a Neq
	if(var_1428_bool == 0) goto Label_1597; // 0x63b JumpB
	var_1421_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_1421_bool == 0) goto Label_1613; // 0x63d JumpB
	var_1429_int = 1; // 0x63e PushI
	var_1430_float = 0; var_1431_int = 0; // 0x63f PushV
	var_1431_int = var_1413_int; // 0x640 Mov
	func_1091(var_1430_float, var_1431_int); // 0x641 NEW_2
	var_1416_int = var_1429_int * var_1430_float; // 0x643 Mult2
	var_1432_int = var_1416_int; // 0x644 Push
	if(var_1432_int == 0) goto Label_1613; // 0x645 JumpB
	var_1433_int = 0; var_1434_string = ""; var_1435_string = ""; var_1436_int = 0; // 0x646 PushV
	var_1433_int = var_1412_int; // 0x647 Mov
	var_1434_string = "pers_grabitel"; // 0x648 MovS
	var_1435_string = "grabitel.xml"; // 0x649 MovS
	var_1436_int = var_1416_int; // 0x64a Mov
	func_453(var_1433_int, var_1434_string, var_1435_string, var_1436_int); // 0x64b NEW_2
	
Label_1613:
	var_1437_bool = 0; var_1438_int = 0; var_1439_int = 0; // 0x64d PushV
	var_1438_int = var_1413_int; // 0x64e Mov
	var_1439_int = var_1414_int; // 0x64f Mov
	func_1060(var_1437_bool, var_1438_int, var_1439_int); // 0x650 NEW_2
	if(var_1437_bool == 0) goto Label_1707; // 0x652 JumpB
	var_1440_int = 0; var_1441_string = ""; var_1442_string = ""; var_1443_int = 0; // 0x653 PushV
	var_1440_int = var_1412_int; // 0x654 Mov
	var_1441_string = "pers_unosha"; // 0x655 MovS
	var_1442_string = "unosha_attacker.xml"; // 0x656 MovS
	var_1443_int = 1; // 0x657 MovI
	func_453(var_1440_int, var_1441_string, var_1442_string, var_1443_int); // 0x658 NEW_2
	var_1444_int = 0; var_1445_string = ""; var_1446_string = ""; var_1447_int = 0; // 0x65a PushV
	var_1444_int = var_1412_int; // 0x65b Mov
	var_1445_string = "pers_unosha"; // 0x65c MovS
	var_1446_string = "unosha2_attacker.xml"; // 0x65d MovS
	var_1447_int = 1; // 0x65e MovI
	func_453(var_1444_int, var_1445_string, var_1446_string, var_1447_int); // 0x65f NEW_2
	var_1448_int = 0; var_1449_string = ""; var_1450_string = ""; var_1451_int = 0; // 0x661 PushV
	var_1448_int = var_1412_int; // 0x662 Mov
	var_1449_string = "pers_worker"; // 0x663 MovS
	var_1450_string = "worker_attacker.xml"; // 0x664 MovS
	var_1451_int = 1; // 0x665 MovI
	func_453(var_1448_int, var_1449_string, var_1450_string, var_1451_int); // 0x666 NEW_2
	var_1452_int = 0; var_1453_string = ""; var_1454_string = ""; var_1455_int = 0; // 0x668 PushV
	var_1452_int = var_1412_int; // 0x669 Mov
	var_1453_string = "pers_worker"; // 0x66a MovS
	var_1454_string = "worker2_attacker.xml"; // 0x66b MovS
	var_1455_int = 1; // 0x66c MovI
	func_453(var_1452_int, var_1453_string, var_1454_string, var_1455_int); // 0x66d NEW_2
	var_1456_int = 0; var_1457_string = ""; var_1458_string = ""; var_1459_int = 0; // 0x66f PushV
	var_1456_int = var_1412_int; // 0x670 Mov
	var_1457_string = "pers_woman"; // 0x671 MovS
	var_1458_string = "woman.xml"; // 0x672 MovS
	var_1459_int = 1; // 0x673 MovI
	func_453(var_1456_int, var_1457_string, var_1458_string, var_1459_int); // 0x674 NEW_2
	var_1460_int = 0; var_1461_string = ""; var_1462_string = ""; var_1463_int = 0; // 0x676 PushV
	var_1460_int = var_1412_int; // 0x677 Mov
	var_1461_string = "pers_alkash"; // 0x678 MovS
	var_1462_string = "alkash.xml"; // 0x679 MovS
	var_1463_int = 1; // 0x67a MovI
	func_453(var_1460_int, var_1461_string, var_1462_string, var_1463_int); // 0x67b NEW_2
	var_1464_bool = 0; // 0x67d PushV
	var_1464_bool = 0; // 0x67e MovB
	var_1465_int = 8; // 0x67f PushI
	var_1466_bool = var_1414_int > var_1465_int; // 0x680 GT
	if(var_1466_bool == 0) goto Label_1670; // 0x681 JumpB
	var_1467_int = 21; // 0x682 PushI
	var_1468_bool = var_1414_int < var_1467_int; // 0x683 LT
	if(var_1468_bool == 0) goto Label_1670; // 0x684 JumpB
	var_1464_bool = 1; // 0x685 MovB
	
Label_1670:
	if(var_1464_bool == 0) goto Label_1706; // 0x686 JumpB
	var_1469_int = 0; var_1470_string = ""; var_1471_string = ""; var_1472_int = 0; // 0x687 PushV
	var_1469_int = var_1412_int; // 0x688 Mov
	var_1470_string = "pers_boy"; // 0x689 MovS
	var_1471_string = "boy.xml"; // 0x68a MovS
	var_1472_int = 1; // 0x68b MovI
	func_453(var_1469_int, var_1470_string, var_1471_string, var_1472_int); // 0x68c NEW_2
	var_1473_int = 0; var_1474_string = ""; var_1475_string = ""; var_1476_int = 0; // 0x68e PushV
	var_1473_int = var_1412_int; // 0x68f Mov
	var_1474_string = "pers_girl"; // 0x690 MovS
	var_1475_string = "girl.xml"; // 0x691 MovS
	var_1476_int = 1; // 0x692 MovI
	func_453(var_1473_int, var_1474_string, var_1475_string, var_1476_int); // 0x693 NEW_2
	var_1477_int = 0; var_1478_string = ""; var_1479_string = ""; var_1480_int = 0; // 0x695 PushV
	var_1477_int = var_1412_int; // 0x696 Mov
	var_1478_string = "pers_girl"; // 0x697 MovS
	var_1479_string = "girl2.xml"; // 0x698 MovS
	var_1480_int = 1; // 0x699 MovI
	func_453(var_1477_int, var_1478_string, var_1479_string, var_1480_int); // 0x69a NEW_2
	var_1481_int = 0; var_1482_string = ""; var_1483_string = ""; var_1484_int = 0; // 0x69c PushV
	var_1481_int = var_1412_int; // 0x69d Mov
	var_1482_string = "pers_littleboy"; // 0x69e MovS
	var_1483_string = "littleboy.xml"; // 0x69f MovS
	var_1484_int = 1; // 0x6a0 MovI
	func_453(var_1481_int, var_1482_string, var_1483_string, var_1484_int); // 0x6a1 NEW_2
	var_1485_int = 0; var_1486_string = ""; var_1487_string = ""; var_1488_int = 0; // 0x6a3 PushV
	var_1485_int = var_1412_int; // 0x6a4 Mov
	var_1486_string = "pers_littlegirl"; // 0x6a5 MovS
	var_1487_string = "littlegirl.xml"; // 0x6a6 MovS
	var_1488_int = 1; // 0x6a7 MovI
	func_453(var_1485_int, var_1486_string, var_1487_string, var_1488_int); // 0x6a8 NEW_2
	
Label_1706:
	goto Label_1833; // 0x6aa Jump
	
Label_1833:
	var_1489_bool = 0; var_1490_int = 0; var_1491_int = 0; // 0x729 PushV
	var_1490_int = var_1413_int; // 0x72a Mov
	var_1491_int = var_1414_int; // 0x72b Mov
	func_1295(var_1489_bool, var_1490_int, var_1491_int); // 0x72c NEW_2
	if(var_1489_bool == 0) goto Label_1846; // 0x72e JumpB
	var_1492_int = 0; var_1493_string = ""; var_1494_string = ""; var_1495_int = 0; // 0x72f PushV
	var_1492_int = var_1412_int; // 0x730 Mov
	var_1493_string = "pers_soldat"; // 0x731 MovS
	var_1494_string = "soldier_marauder.xml"; // 0x732 MovS
	var_1495_int = 2; // 0x733 MovI
	func_453(var_1492_int, var_1493_string, var_1494_string, var_1495_int); // 0x734 NEW_2
	
Label_1846:
	return 2; // 0x736 Return
	
Label_1707:
	var_1496_bool = 0; // 0x6ab PushV
	var_1496_bool = 0; // 0x6ac MovB
	var_1497_int = 8; // 0x6ad PushI
	var_1498_bool = var_1414_int > var_1497_int; // 0x6ae GT
	if(var_1498_bool == 0) goto Label_1716; // 0x6af JumpB
	var_1499_int = 21; // 0x6b0 PushI
	var_1500_bool = var_1414_int < var_1499_int; // 0x6b1 LT
	if(var_1500_bool == 0) goto Label_1716; // 0x6b2 JumpB
	var_1496_bool = 1; // 0x6b3 MovB
	
Label_1716:
	if(var_1496_bool == 0) goto Label_1793; // 0x6b4 JumpB
	var_1501_int = 0; var_1502_string = ""; var_1503_string = ""; var_1504_int = 0; // 0x6b5 PushV
	var_1501_int = var_1412_int; // 0x6b6 Mov
	var_1502_string = "pers_woman"; // 0x6b7 MovS
	var_1503_string = "woman.xml"; // 0x6b8 MovS
	var_1504_int = 1; // 0x6b9 MovI
	func_453(var_1501_int, var_1502_string, var_1503_string, var_1504_int); // 0x6ba NEW_2
	var_1505_int = 0; var_1506_string = ""; var_1507_string = ""; var_1508_int = 0; // 0x6bc PushV
	var_1505_int = var_1412_int; // 0x6bd Mov
	var_1506_string = "pers_unosha"; // 0x6be MovS
	var_1507_string = "unosha.xml"; // 0x6bf MovS
	var_1508_int = 1; // 0x6c0 MovI
	func_453(var_1505_int, var_1506_string, var_1507_string, var_1508_int); // 0x6c1 NEW_2
	var_1509_int = 0; var_1510_string = ""; var_1511_string = ""; var_1512_int = 0; // 0x6c3 PushV
	var_1509_int = var_1412_int; // 0x6c4 Mov
	var_1510_string = "pers_unosha"; // 0x6c5 MovS
	var_1511_string = "unosha2.xml"; // 0x6c6 MovS
	var_1512_int = 1; // 0x6c7 MovI
	func_453(var_1509_int, var_1510_string, var_1511_string, var_1512_int); // 0x6c8 NEW_2
	var_1513_int = 0; var_1514_string = ""; var_1515_string = ""; var_1516_int = 0; // 0x6ca PushV
	var_1513_int = var_1412_int; // 0x6cb Mov
	var_1514_string = "pers_boy"; // 0x6cc MovS
	var_1515_string = "boy.xml"; // 0x6cd MovS
	var_1516_int = 1; // 0x6ce MovI
	func_453(var_1513_int, var_1514_string, var_1515_string, var_1516_int); // 0x6cf NEW_2
	var_1517_int = 0; var_1518_string = ""; var_1519_string = ""; var_1520_int = 0; // 0x6d1 PushV
	var_1517_int = var_1412_int; // 0x6d2 Mov
	var_1518_string = "pers_girl"; // 0x6d3 MovS
	var_1519_string = "girl.xml"; // 0x6d4 MovS
	var_1520_int = 1; // 0x6d5 MovI
	func_453(var_1517_int, var_1518_string, var_1519_string, var_1520_int); // 0x6d6 NEW_2
	var_1521_int = 0; var_1522_string = ""; var_1523_string = ""; var_1524_int = 0; // 0x6d8 PushV
	var_1521_int = var_1412_int; // 0x6d9 Mov
	var_1522_string = "pers_girl"; // 0x6da MovS
	var_1523_string = "girl2.xml"; // 0x6db MovS
	var_1524_int = 1; // 0x6dc MovI
	func_453(var_1521_int, var_1522_string, var_1523_string, var_1524_int); // 0x6dd NEW_2
	var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0; // 0x6df PushV
	var_1525_int = var_1412_int; // 0x6e0 Mov
	var_1526_string = "pers_littleboy"; // 0x6e1 MovS
	var_1527_string = "littleboy.xml"; // 0x6e2 MovS
	var_1528_int = 1; // 0x6e3 MovI
	func_453(var_1525_int, var_1526_string, var_1527_string, var_1528_int); // 0x6e4 NEW_2
	var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0; // 0x6e6 PushV
	var_1529_int = var_1412_int; // 0x6e7 Mov
	var_1530_string = "pers_littlegirl"; // 0x6e8 MovS
	var_1531_string = "littlegirl.xml"; // 0x6e9 MovS
	var_1532_int = 1; // 0x6ea MovI
	func_453(var_1529_int, var_1530_string, var_1531_string, var_1532_int); // 0x6eb NEW_2
	var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0; // 0x6ed PushV
	var_1533_int = var_1412_int; // 0x6ee Mov
	var_1534_string = "pers_alkash"; // 0x6ef MovS
	var_1535_string = "alkash.xml"; // 0x6f0 MovS
	var_1536_int = 1; // 0x6f1 MovI
	func_453(var_1533_int, var_1534_string, var_1535_string, var_1536_int); // 0x6f2 NEW_2
	var_1537_int = 1; // 0x6f4 PushI
	var_1538_int = var_1413_int + var_1537_int; // 0x6f5 Add
	var_1539_int = 3; // 0x6f6 PushI
	var_1540_bool = var_1538_int >= var_1539_int; // 0x6f7 GE
	if(var_1540_bool == 0) goto Label_1792; // 0x6f8 JumpB
	var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0; // 0x6f9 PushV
	var_1541_int = var_1412_int; // 0x6fa Mov
	var_1542_string = "pers_dohodyaga"; // 0x6fb MovS
	var_1543_string = "dohodyaga.xml"; // 0x6fc MovS
	var_1544_int = 1; // 0x6fd MovI
	func_453(var_1541_int, var_1542_string, var_1543_string, var_1544_int); // 0x6fe NEW_2
	
Label_1792:
	goto Label_1833; // 0x700 Jump
	
Label_1793:
	var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0; // 0x701 PushV
	var_1545_int = var_1412_int; // 0x702 Mov
	var_1546_string = "pers_woman"; // 0x703 MovS
	var_1547_string = "woman.xml"; // 0x704 MovS
	var_1548_int = 1; // 0x705 MovI
	func_453(var_1545_int, var_1546_string, var_1547_string, var_1548_int); // 0x706 NEW_2
	var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0; // 0x708 PushV
	var_1549_int = var_1412_int; // 0x709 Mov
	var_1550_string = "pers_unosha"; // 0x70a MovS
	var_1551_string = "unosha.xml"; // 0x70b MovS
	var_1552_int = 1; // 0x70c MovI
	func_453(var_1549_int, var_1550_string, var_1551_string, var_1552_int); // 0x70d NEW_2
	var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0; // 0x70f PushV
	var_1553_int = var_1412_int; // 0x710 Mov
	var_1554_string = "pers_unosha"; // 0x711 MovS
	var_1555_string = "unosha2.xml"; // 0x712 MovS
	var_1556_int = 1; // 0x713 MovI
	func_453(var_1553_int, var_1554_string, var_1555_string, var_1556_int); // 0x714 NEW_2
	var_1557_int = 0; var_1558_string = ""; var_1559_string = ""; var_1560_int = 0; // 0x716 PushV
	var_1557_int = var_1412_int; // 0x717 Mov
	var_1558_string = "pers_alkash"; // 0x718 MovS
	var_1559_string = "alkash.xml"; // 0x719 MovS
	var_1560_int = 1; // 0x71a MovI
	func_453(var_1557_int, var_1558_string, var_1559_string, var_1560_int); // 0x71b NEW_2
	var_1561_int = 1; // 0x71d PushI
	var_1562_int = var_1413_int + var_1561_int; // 0x71e Add
	var_1563_int = 3; // 0x71f PushI
	var_1564_bool = var_1562_int >= var_1563_int; // 0x720 GE
	if(var_1564_bool == 0) goto Label_1833; // 0x721 JumpB
	var_1565_int = 0; var_1566_string = ""; var_1567_string = ""; var_1568_int = 0; // 0x722 PushV
	var_1565_int = var_1412_int; // 0x723 Mov
	var_1566_string = "pers_dohodyaga"; // 0x724 MovS
	var_1567_string = "dohodyaga.xml"; // 0x725 MovS
	var_1568_int = 1; // 0x726 MovI
	func_453(var_1565_int, var_1566_string, var_1567_string, var_1568_int); // 0x727 NEW_2
}


func_7723(var_4429_bool)
{
	var_4430_object = Obj(); var_4431_object = Obj(); // 0x1e2b PushV
	var_4432_string = "arena_light"; // 0x1e2c PushS
	FindActor(var_4431_object, var_4432_string); // 0x1e2d Func
	Switch(var_4429_bool); // 0x1e2f ObjFunc
	return 2; // 0x1e31 Return
}


func_11820(var_4655_bool)
{
	var_4658_int = 0; var_4659_string = ""; // 0x2e2d PushV
	var_4659_string = "b12q01DankoVisit"; // 0x2e2e MovS
	func_106(var_4658_int, var_4659_string); // 0x2e2f NEW_2
	var_4662_int = 0; // 0x2e31 PushI
	var_4663_bool = var_4658_int != var_4662_int; // 0x2e32 Neq
	if(var_4663_bool == 0) goto Label_11830; // 0x2e33 JumpB
	var_4655_bool = 1; // 0x2e34 MovB
	return 0; // 0x2e35 Return
	
Label_11830:
	var_4655_bool = 0; // 0x2e36 MovB
	return 0; // 0x2e37 Return
}


func_9776(var_5508_int, var_5509_float)
{
	var_5510_int = 0; var_5511_int = 0; var_5512_int = 0; var_5513_float = 0; // 0x2631 PushV
	var_5511_int = 531503; // 0x2632 MovI
	var_5512_int = 531502; // 0x2633 MovI
	var_5513_float = var_5509_float; // 0x2634 Mov
	func_12278(var_5510_int, var_5511_int, var_5512_int, var_5513_float); // 0x2635 NEW_2
	var_5508_int = var_5510_int; // 0x2636 Mov
	return 0; // 0x2638 Return
}


func_7731()
{
	var_4290_object = Obj(); var_4291_bool = 0; var_4292_cvector = CVector(0,0,0); var_4293_cvector = CVector(0,0,0); var_4294_int = 0; var_4295_object = Obj(); var_4296_object = Obj(); var_4297_bool = 0; var_4298_cvector = CVector(0,0,0); var_4299_cvector = CVector(0,0,0); var_4300_int = 0; var_4301_object = Obj(); // 0x1e33 PushV
	var_4302_string = "Setting arena..."; // 0x1e34 PushS
	Trace(var_4302_string); // 0x1e35 Func
	var_4303_object = GlobalVars[11]; // 0x1e37 PushGE
	var_4304_bool = var_4303_object == 0; // 0x1e38 NullEq
	if(var_4304_bool == 0) goto Label_7793; // 0x1e39 JumpB
	GetMainOutdoorScene(var_4296_object); // 0x1e3a Func
	var_4305_string = "pt_arena_manager"; // 0x1e3c PushS
	GetLocator(var_4305_string, var_4297_bool, var_4298_cvector, var_4299_cvector); // 0x1e3d ObjFunc
	var_4306_bool = var_4297_bool == 0; // 0x1e3f Not
	if(var_4306_bool == 0) goto Label_7749; // 0x1e40 JumpB
	var_4307_string = "Locator doesn't exist for arena manager"; // 0x1e41 PushS
	Trace(var_4307_string); // 0x1e42 Func
	goto Label_7758; // 0x1e44 Jump
	
Label_7758:
	var_4300_int = 0; // 0x1e4e MovI
	
Label_7759:
	var_4308_int = 6; // 0x1e4f PushI
	var_4309_bool = var_4300_int < var_4308_int; // 0x1e50 LT
	if(var_4309_bool == 0) goto Label_7788; // 0x1e51 JumpB
	var_4310_string = "pt_arena_torch"; // 0x1e52 PushS
	var_4311_int = 1; // 0x1e53 PushI
	var_4312_int = var_4300_int + var_4311_int; // 0x1e54 Add
	var_4313_int = var_4310_string + var_4312_int; // 0x1e55 Add
	GetLocator(var_4313_int, var_4297_bool, var_4298_cvector, var_4299_cvector); // 0x1e56 ObjFunc
	var_4314_bool = var_4297_bool == 0; // 0x1e58 Not
	if(var_4314_bool == 0) goto Label_7777; // 0x1e59 JumpB
	var_4315_string = "Locator doesn't exist for arena torch "; // 0x1e5a PushS
	var_4316_int = 1; // 0x1e5b PushI
	var_4317_int = var_4300_int + var_4316_int; // 0x1e5c Add
	var_4318_int = var_4315_string + var_4317_int; // 0x1e5d Add
	Trace(var_4318_int); // 0x1e5e Func
	goto Label_7785; // 0x1e60 Jump
	
Label_7785:
	var_4319_int = 1; // 0x1e69 PushI
	var_4300_int = var_4300_int + var_4319_int; // 0x1e6a Add2
	goto Label_7759; // 0x1e6b Jump
	
Label_7777:
	var_4320_string = "scripted"; // 0x1e61 PushS
	var_4321_string = "torch.xml"; // 0x1e62 PushS
	AddActorByType(var_4301_object, var_4320_string, var_4296_object, var_4298_cvector, var_4299_cvector, var_4321_string); // 0x1e63 Func
	var_4322_object = GlobalVars[12]; // 0x1e65 PushGE
	add(var_4301_object); // 0x1e66 ObjFunc
	var_4301_object = 0; // 0x1e68 SetNull
	
Label_7788:
	var_4323_bool = 0; // 0x1e6c PushV
	var_4323_bool = 1; // 0x1e6d MovB
	func_7723(var_4323_bool); // 0x1e6e NEW_2
	var_4296_object = 0; // 0x1e70 SetNull
	
Label_7793:
	return 12; // 0x1e71 Return
	
Label_7749:
	var_4327_object = GlobalVars[11]; // 0x1e45 PushGE
	var_4328_object = Obj(); var_4329_object = Obj(); var_4330_cvector = CVector(0,0,0); var_4331_cvector = CVector(0,0,0); // 0x1e46 PushV
	var_4329_object = var_4296_object; // 0x1e47 Mov
	var_4330_cvector = var_4298_cvector; // 0x1e48 Mov
	var_4331_cvector = var_4299_cvector; // 0x1e49 Mov
	func_14900(var_4329_object, var_4330_cvector, var_4331_cvector); // 0x1e4a NEW_2
	var_4327_object = var_4328_object; // 0x1e4b Mov
	GlobalVars[11] = var_4327_object; // 0x1e4d PopGE
}


func_14900(var_4328_object, var_4330_cvector, var_4331_cvector)
{
	var_4332_object = Obj(); var_4333_object = Obj(); // 0x3a34 PushV
	var_4334_string = "pers_morlok"; // 0x3a35 PushS
	var_4335_string = "Burah_arena_manager.xml"; // 0x3a36 PushS
	AddStationaryActor(var_4333_object, var_4330_cvector, var_4331_cvector, var_4334_string, var_4335_string); // 0x3a37 ObjFunc
	var_4328_object = var_4333_object; // 0x3a39 Mov
	return 2; // 0x3a3a Return
}


func_11832(var_4876_bool)
{
	var_4879_int = 0; var_4880_string = ""; // 0x2e39 PushV
	var_4880_string = "b12q01KlaraVisit"; // 0x2e3a MovS
	func_106(var_4879_int, var_4880_string); // 0x2e3b NEW_2
	var_4881_int = 0; // 0x2e3d PushI
	var_4882_bool = var_4879_int != var_4881_int; // 0x2e3e Neq
	if(var_4882_bool == 0) goto Label_11842; // 0x2e3f JumpB
	var_4876_bool = 1; // 0x2e40 MovB
	return 0; // 0x2e41 Return
	
Label_11842:
	var_4876_bool = 0; // 0x2e42 MovB
	return 0; // 0x2e43 Return
}


func_9785(var_5934_int, var_5935_float)
{
	var_5936_int = 0; var_5937_int = 0; var_5938_int = 0; var_5939_float = 0; // 0x263a PushV
	var_5937_int = 530554; // 0x263b MovI
	var_5938_int = 530553; // 0x263c MovI
	var_5939_float = var_5935_float; // 0x263d Mov
	func_12278(var_5936_int, var_5937_int, var_5938_int, var_5939_float); // 0x263e NEW_2
	var_5934_int = var_5936_int; // 0x263f Mov
	return 0; // 0x2641 Return
}


func_572(var_566_int, var_568_object, var_569_object, var_570_object)
{
	var_571_int = 0; var_572_bool = 0; // 0x23d PushV
	var_571_int = var_566_int; // 0x23e Mov
	var_572_bool = 1; // 0x23f MovB
	func_492(var_571_int, var_572_bool); // 0x240 NEW_2
	var_599_object = Obj(); // 0x242 PushV
	var_599_object = var_568_object; // 0x243 Mov
	func_213(var_599_object); // 0x244 NEW_2
	var_610_object = Obj(); // 0x246 PushV
	var_610_object = var_569_object; // 0x247 Mov
	func_213(var_610_object); // 0x248 NEW_2
	var_611_object = Obj(); // 0x24a PushV
	var_611_object = var_570_object; // 0x24b Mov
	func_213(var_611_object); // 0x24c NEW_2
	return 0; // 0x24e Return
}


func_13887(var_4580_float)
{
	var_4584_object = GlobalVars[16]; // 0x3640 PushGE
	var_4584_object = 0; // 0x3641 SetNull
	GlobalVars[16] = var_4584_object; // 0x3642 PopGE
	var_4585_int = 45091; // 0x3643 PushI
	var_4586_float = 271.5; // 0x3644 PushF
	SetTimeEvent(var_4585_int, var_4586_float); // 0x3645 Func
	var_4587_int = 45116; // 0x3647 PushI
	var_4588_float = 58.0; // 0x3648 PushF
	SetTimeEvent(var_4587_int, var_4588_float); // 0x3649 Func
	var_4589_int = 45113; // 0x364b PushI
	var_4590_float = 36.0; // 0x364c PushF
	SetTimeEvent(var_4589_int, var_4590_float); // 0x364d Func
	var_4591_int = 45090; // 0x364f PushI
	var_4592_float = 281.0; // 0x3650 PushF
	SetTimeEvent(var_4591_int, var_4592_float); // 0x3651 Func
	var_4593_int = 45117; // 0x3653 PushI
	var_4594_float = 48.08; // 0x3654 PushF
	SetTimeEvent(var_4593_int, var_4594_float); // 0x3655 Func
	var_4595_int = 45118; // 0x3657 PushI
	var_4596_float = 72.08; // 0x3658 PushF
	SetTimeEvent(var_4595_int, var_4596_float); // 0x3659 Func
	var_4597_int = 45119; // 0x365b PushI
	var_4598_float = 96.08; // 0x365c PushF
	SetTimeEvent(var_4597_int, var_4598_float); // 0x365d Func
	var_4599_int = 45120; // 0x365f PushI
	var_4600_float = 120.08; // 0x3660 PushF
	SetTimeEvent(var_4599_int, var_4600_float); // 0x3661 Func
	var_4601_int = 45121; // 0x3663 PushI
	var_4602_float = 144.08; // 0x3664 PushF
	SetTimeEvent(var_4601_int, var_4602_float); // 0x3665 Func
	var_4603_int = 45122; // 0x3667 PushI
	var_4604_float = 168.08; // 0x3668 PushF
	SetTimeEvent(var_4603_int, var_4604_float); // 0x3669 Func
	var_4605_int = 45089; // 0x366b PushI
	var_4606_float = 247.25; // 0x366c PushF
	SetTimeEvent(var_4605_int, var_4606_float); // 0x366d Func
	var_4607_int = 45080; // 0x366f PushI
	var_4608_float = 168.0; // 0x3670 PushF
	SetTimeEvent(var_4607_int, var_4608_float); // 0x3671 Func
	var_4609_int = 45081; // 0x3673 PushI
	var_4610_float = 144.0; // 0x3674 PushF
	SetTimeEvent(var_4609_int, var_4610_float); // 0x3675 Func
	var_4611_int = 45082; // 0x3677 PushI
	var_4612_float = 127.0; // 0x3678 PushF
	SetTimeEvent(var_4611_int, var_4612_float); // 0x3679 Func
	var_4613_int = 45092; // 0x367b PushI
	var_4614_float = 271.25; // 0x367c PushF
	SetTimeEvent(var_4613_int, var_4614_float); // 0x367d Func
	var_4615_int = 45093; // 0x367f PushI
	var_4616_float = 282.0; // 0x3680 PushF
	SetTimeEvent(var_4615_int, var_4616_float); // 0x3681 Func
	var_4617_int = 45083; // 0x3683 PushI
	var_4618_float = 192.0; // 0x3684 PushF
	SetTimeEvent(var_4617_int, var_4618_float); // 0x3685 Func
	var_4619_int = 45111; // 0x3687 PushI
	var_4620_float = 12.0; // 0x3688 PushF
	SetTimeEvent(var_4619_int, var_4620_float); // 0x3689 Func
	var_4621_int = 45079; // 0x368b PushI
	var_4622_float = 168.0; // 0x368c PushF
	SetTimeEvent(var_4621_int, var_4622_float); // 0x368d Func
	var_4623_int = 45086; // 0x368f PushI
	var_4624_float = 240.0; // 0x3690 PushF
	SetTimeEvent(var_4623_int, var_4624_float); // 0x3691 Func
	var_4625_int = 45087; // 0x3693 PushI
	var_4626_float = 264.0; // 0x3694 PushF
	SetTimeEvent(var_4625_int, var_4626_float); // 0x3695 Func
	var_4627_int = 45112; // 0x3697 PushI
	var_4628_float = 24.05; // 0x3698 PushF
	SetTimeEvent(var_4627_int, var_4628_float); // 0x3699 Func
	var_4629_int = 45115; // 0x369b PushI
	var_4630_float = 60.0; // 0x369c PushF
	SetTimeEvent(var_4629_int, var_4630_float); // 0x369d Func
	var_4631_int = 45114; // 0x369f PushI
	var_4632_float = 48.05; // 0x36a0 PushF
	SetTimeEvent(var_4631_int, var_4632_float); // 0x36a1 Func
	var_4633_int = 45088; // 0x36a3 PushI
	var_4634_float = 223.25; // 0x36a4 PushF
	SetTimeEvent(var_4633_int, var_4634_float); // 0x36a5 Func
	var_4635_int = 45084; // 0x36a7 PushI
	var_4636_float = 192.0; // 0x36a8 PushF
	SetTimeEvent(var_4635_int, var_4636_float); // 0x36a9 Func
	var_4637_int = 45085; // 0x36ab PushI
	var_4638_float = 216.0; // 0x36ac PushF
	SetTimeEvent(var_4637_int, var_4638_float); // 0x36ad Func
	var_4639_int = 45127; // 0x36af PushI
	var_4640_float = 120.05; // 0x36b0 PushF
	SetTimeEvent(var_4639_int, var_4640_float); // 0x36b1 Func
	var_4641_int = 45133; // 0x36b3 PushI
	var_4642_float = 168.05; // 0x36b4 PushF
	SetTimeEvent(var_4641_int, var_4642_float); // 0x36b5 Func
	var_4643_int = 45136; // 0x36b7 PushI
	var_4644_float = 180.0; // 0x36b8 PushF
	SetTimeEvent(var_4643_int, var_4644_float); // 0x36b9 Func
	var_4645_int = 45123; // 0x36bb PushI
	var_4646_float = 79.25; // 0x36bc PushF
	SetTimeEvent(var_4645_int, var_4646_float); // 0x36bd Func
	var_4647_int = 45124; // 0x36bf PushI
	var_4648_float = 84.0; // 0x36c0 PushF
	SetTimeEvent(var_4647_int, var_4648_float); // 0x36c1 Func
	var_4649_int = 45130; // 0x36c3 PushI
	var_4650_float = 151.25; // 0x36c4 PushF
	SetTimeEvent(var_4649_int, var_4650_float); // 0x36c5 Func
	var_4651_int = 45131; // 0x36c7 PushI
	var_4652_float = 152.0; // 0x36c8 PushF
	SetTimeEvent(var_4651_int, var_4652_float); // 0x36c9 Func
	var_4653_int = 45135; // 0x36cb PushI
	var_4654_float = 175.25; // 0x36cc PushF
	SetTimeEvent(var_4653_int, var_4654_float); // 0x36cd Func
	var_4655_int = 45125; // 0x36cf PushI
	var_4656_float = 96.05; // 0x36d0 PushF
	SetTimeEvent(var_4655_int, var_4656_float); // 0x36d1 Func
	var_4657_int = 45128; // 0x36d3 PushI
	var_4658_float = 127.25; // 0x36d4 PushF
	SetTimeEvent(var_4657_int, var_4658_float); // 0x36d5 Func
	var_4659_int = 45129; // 0x36d7 PushI
	var_4660_float = 144.05; // 0x36d8 PushF
	SetTimeEvent(var_4659_int, var_4660_float); // 0x36d9 Func
	var_4661_int = 45134; // 0x36db PushI
	var_4662_float = 192.05; // 0x36dc PushF
	SetTimeEvent(var_4661_int, var_4662_float); // 0x36dd Func
	var_4663_int = 45126; // 0x36df PushI
	var_4664_float = 103.25; // 0x36e0 PushF
	SetTimeEvent(var_4663_int, var_4664_float); // 0x36e1 Func
	var_4665_int = 45137; // 0x36e3 PushI
	var_4666_float = 199.25; // 0x36e4 PushF
	SetTimeEvent(var_4665_int, var_4666_float); // 0x36e5 Func
	var_4667_int = 45138; // 0x36e7 PushI
	var_4668_float = 216.05; // 0x36e8 PushF
	SetTimeEvent(var_4667_int, var_4668_float); // 0x36e9 Func
	var_4669_int = 45132; // 0x36eb PushI
	var_4670_float = 156.0; // 0x36ec PushF
	SetTimeEvent(var_4669_int, var_4670_float); // 0x36ed Func
	var_4671_int = 45198; // 0x36ef PushI
	var_4672_float = 24.0; // 0x36f0 PushF
	SetTimeEvent(var_4671_int, var_4672_float); // 0x36f1 Func
	var_4673_int = 45262; // 0x36f3 PushI
	var_4674_float = 168.0; // 0x36f4 PushF
	SetTimeEvent(var_4673_int, var_4674_float); // 0x36f5 Func
	var_4675_int = 45190; // 0x36f7 PushI
	var_4676_float = 64.0; // 0x36f8 PushF
	SetTimeEvent(var_4675_int, var_4676_float); // 0x36f9 Func
	var_4677_int = 45263; // 0x36fb PushI
	var_4678_float = 192.0; // 0x36fc PushF
	SetTimeEvent(var_4677_int, var_4678_float); // 0x36fd Func
	var_4679_int = 45264; // 0x36ff PushI
	var_4680_float = 216.0; // 0x3700 PushF
	SetTimeEvent(var_4679_int, var_4680_float); // 0x3701 Func
	var_4681_int = 45266; // 0x3703 PushI
	var_4682_float = 264.0; // 0x3704 PushF
	SetTimeEvent(var_4681_int, var_4682_float); // 0x3705 Func
	var_4683_int = 45185; // 0x3707 PushI
	var_4684_float = 63.0; // 0x3708 PushF
	SetTimeEvent(var_4683_int, var_4684_float); // 0x3709 Func
	var_4685_int = 45196; // 0x370b PushI
	var_4686_float = 227.5; // 0x370c PushF
	SetTimeEvent(var_4685_int, var_4686_float); // 0x370d Func
	var_4687_int = 45189; // 0x370f PushI
	var_4688_float = 111.5; // 0x3710 PushF
	SetTimeEvent(var_4687_int, var_4688_float); // 0x3711 Func
	var_4689_int = 45265; // 0x3713 PushI
	var_4690_float = 240.0; // 0x3714 PushF
	SetTimeEvent(var_4689_int, var_4690_float); // 0x3715 Func
	var_4691_int = 45157; // 0x3717 PushI
	var_4692_float = 151.02; // 0x3718 PushF
	SetTimeEvent(var_4691_int, var_4692_float); // 0x3719 Func
	var_4693_int = 45160; // 0x371b PushI
	var_4694_float = 223.02; // 0x371c PushF
	SetTimeEvent(var_4693_int, var_4694_float); // 0x371d Func
	var_4695_int = 45161; // 0x371f PushI
	var_4696_float = 247.02; // 0x3720 PushF
	SetTimeEvent(var_4695_int, var_4696_float); // 0x3721 Func
	var_4697_int = 45158; // 0x3723 PushI
	var_4698_float = 175.02; // 0x3724 PushF
	SetTimeEvent(var_4697_int, var_4698_float); // 0x3725 Func
	var_4699_int = 45159; // 0x3727 PushI
	var_4700_float = 199.02; // 0x3728 PushF
	SetTimeEvent(var_4699_int, var_4700_float); // 0x3729 Func
	var_4701_int = 45187; // 0x372b PushI
	var_4702_float = 230.0; // 0x372c PushF
	SetTimeEvent(var_4701_int, var_4702_float); // 0x372d Func
	var_4703_int = 45188; // 0x372f PushI
	var_4704_float = 135.0; // 0x3730 PushF
	SetTimeEvent(var_4703_int, var_4704_float); // 0x3731 Func
	var_4705_int = 45193; // 0x3733 PushI
	var_4706_float = 11.0; // 0x3734 PushF
	SetTimeEvent(var_4705_int, var_4706_float); // 0x3735 Func
	var_4707_int = 45194; // 0x3737 PushI
	var_4708_float = 39.0; // 0x3738 PushF
	SetTimeEvent(var_4707_int, var_4708_float); // 0x3739 Func
	var_4709_int = 45197; // 0x373b PushI
	var_4710_float = 199.33; // 0x373c PushF
	SetTimeEvent(var_4709_int, var_4710_float); // 0x373d Func
	var_4711_int = 45191; // 0x373f PushI
	var_4712_float = 64.25; // 0x3740 PushF
	SetTimeEvent(var_4711_int, var_4712_float); // 0x3741 Func
	var_4713_int = 45235; // 0x3743 PushI
	var_4714_float = 90.0; // 0x3744 PushF
	SetTimeEvent(var_4713_int, var_4714_float); // 0x3745 Func
	var_4715_int = 45192; // 0x3747 PushI
	var_4716_float = 120.0; // 0x3748 PushF
	SetTimeEvent(var_4715_int, var_4716_float); // 0x3749 Func
	var_4717_int = 45186; // 0x374b PushI
	var_4718_float = 184.5; // 0x374c PushF
	SetTimeEvent(var_4717_int, var_4718_float); // 0x374d Func
	var_4719_int = 45195; // 0x374f PushI
	var_4720_float = 82.5; // 0x3750 PushF
	SetTimeEvent(var_4719_int, var_4720_float); // 0x3751 Func
	var_4721_int = 45234; // 0x3753 PushI
	var_4722_float = 67.5; // 0x3754 PushF
	SetTimeEvent(var_4721_int, var_4722_float); // 0x3755 Func
	var_4723_int = 45237; // 0x3757 PushI
	var_4724_float = 178.5; // 0x3758 PushF
	SetTimeEvent(var_4723_int, var_4724_float); // 0x3759 Func
	var_4725_int = 45238; // 0x375b PushI
	var_4726_float = 205.25; // 0x375c PushF
	SetTimeEvent(var_4725_int, var_4726_float); // 0x375d Func
	var_4727_int = 45162; // 0x375f PushI
	var_4728_float = 271.01999; // 0x3760 PushF
	SetTimeEvent(var_4727_int, var_4728_float); // 0x3761 Func
	var_4729_int = 45139; // 0x3763 PushI
	var_4730_float = 240.05; // 0x3764 PushF
	SetTimeEvent(var_4729_int, var_4730_float); // 0x3765 Func
	var_4731_int = 45141; // 0x3767 PushI
	var_4732_float = 263.5; // 0x3768 PushF
	SetTimeEvent(var_4731_int, var_4732_float); // 0x3769 Func
	var_4733_int = 45140; // 0x376b PushI
	var_4734_float = 263.25; // 0x376c PushF
	SetTimeEvent(var_4733_int, var_4734_float); // 0x376d Func
	var_4735_int = 45144; // 0x376f PushI
	var_4736_float = 108.0; // 0x3770 PushF
	SetTimeEvent(var_4735_int, var_4736_float); // 0x3771 Func
	var_4737_int = 45148; // 0x3773 PushI
	var_4738_float = 210.0; // 0x3774 PushF
	SetTimeEvent(var_4737_int, var_4738_float); // 0x3775 Func
	var_4739_int = 45149; // 0x3777 PushI
	var_4740_float = 222.0; // 0x3778 PushF
	SetTimeEvent(var_4739_int, var_4740_float); // 0x3779 Func
	var_4741_int = 45150; // 0x377b PushI
	var_4742_float = 240.0; // 0x377c PushF
	SetTimeEvent(var_4741_int, var_4742_float); // 0x377d Func
	var_4743_int = 45151; // 0x377f PushI
	var_4744_float = 250.5; // 0x3780 PushF
	SetTimeEvent(var_4743_int, var_4744_float); // 0x3781 Func
	var_4745_int = 45155; // 0x3783 PushI
	var_4746_float = 103.02; // 0x3784 PushF
	SetTimeEvent(var_4745_int, var_4746_float); // 0x3785 Func
	var_4747_int = 45142; // 0x3787 PushI
	var_4748_float = 264.04999; // 0x3788 PushF
	SetTimeEvent(var_4747_int, var_4748_float); // 0x3789 Func
	var_4749_int = 45147; // 0x378b PushI
	var_4750_float = 210.0; // 0x378c PushF
	SetTimeEvent(var_4749_int, var_4750_float); // 0x378d Func
	var_4751_int = 45152; // 0x378f PushI
	var_4752_float = 31.02; // 0x3790 PushF
	SetTimeEvent(var_4751_int, var_4752_float); // 0x3791 Func
	var_4753_int = 45156; // 0x3793 PushI
	var_4754_float = 127.02; // 0x3794 PushF
	SetTimeEvent(var_4753_int, var_4754_float); // 0x3795 Func
	var_4755_int = 45153; // 0x3797 PushI
	var_4756_float = 55.02; // 0x3798 PushF
	SetTimeEvent(var_4755_int, var_4756_float); // 0x3799 Func
	var_4757_int = 45154; // 0x379b PushI
	var_4758_float = 79.02; // 0x379c PushF
	SetTimeEvent(var_4757_int, var_4758_float); // 0x379d Func
	var_4759_int = 45143; // 0x379f PushI
	var_4760_float = 252.0; // 0x37a0 PushF
	SetTimeEvent(var_4759_int, var_4760_float); // 0x37a1 Func
	var_4761_int = 45078; // 0x37a3 PushI
	var_4762_float = 144.0; // 0x37a4 PushF
	SetTimeEvent(var_4761_int, var_4762_float); // 0x37a5 Func
	var_4763_int = 45070; // 0x37a7 PushI
	var_4764_float = 72.0; // 0x37a8 PushF
	SetTimeEvent(var_4763_int, var_4764_float); // 0x37a9 Func
	var_4765_int = 45059; // 0x37ab PushI
	var_4766_float = 48.0; // 0x37ac PushF
	SetTimeEvent(var_4765_int, var_4766_float); // 0x37ad Func
	var_4767_int = 45071; // 0x37af PushI
	var_4768_float = 18.0; // 0x37b0 PushF
	SetTimeEvent(var_4767_int, var_4768_float); // 0x37b1 Func
	var_4769_int = 45073; // 0x37b3 PushI
	var_4770_float = 48.0; // 0x37b4 PushF
	SetTimeEvent(var_4769_int, var_4770_float); // 0x37b5 Func
	var_4771_int = 45072; // 0x37b7 PushI
	var_4772_float = 48.0; // 0x37b8 PushF
	SetTimeEvent(var_4771_int, var_4772_float); // 0x37b9 Func
	var_4773_int = 45076; // 0x37bb PushI
	var_4774_float = 31.25; // 0x37bc PushF
	SetTimeEvent(var_4773_int, var_4774_float); // 0x37bd Func
	var_4775_int = 45077; // 0x37bf PushI
	var_4776_float = 33.0; // 0x37c0 PushF
	SetTimeEvent(var_4775_int, var_4776_float); // 0x37c1 Func
	var_4777_int = 45075; // 0x37c3 PushI
	var_4778_float = 41.0; // 0x37c4 PushF
	SetTimeEvent(var_4777_int, var_4778_float); // 0x37c5 Func
	var_4779_object = Obj(); var_4780_object = Obj(); // 0x37c7 PushV
	var_4781_object = GlobalVars[16]; // 0x37c8 PushGE
	var_4779_object = var_4781_object; // 0x37c9 Mov
	var_4782_object = GlobalVars[16]; // 0x37cb PushGE
	var_4780_object = var_4782_object; // 0x37cc Mov
	func_11713(); // 0x37ce NEW_2
	var_4793_object = Obj(); var_4794_object = Obj(); // 0x37d0 PushV
	var_4795_object = GlobalVars[16]; // 0x37d1 PushGE
	var_4793_object = var_4795_object; // 0x37d2 Mov
	var_4796_object = GlobalVars[16]; // 0x37d4 PushGE
	var_4794_object = var_4796_object; // 0x37d5 Mov
	func_11727(); // 0x37d7 NEW_2
	var_4799_object = Obj(); var_4800_object = Obj(); // 0x37d9 PushV
	var_4801_object = GlobalVars[16]; // 0x37da PushGE
	var_4799_object = var_4801_object; // 0x37db Mov
	var_4802_object = GlobalVars[16]; // 0x37dd PushGE
	var_4800_object = var_4802_object; // 0x37de Mov
	func_10574(); // 0x37e0 NEW_2
	var_4805_object = Obj(); var_4806_object = Obj(); // 0x37e2 PushV
	var_4807_object = GlobalVars[16]; // 0x37e3 PushGE
	var_4805_object = var_4807_object; // 0x37e4 Mov
	var_4808_object = GlobalVars[16]; // 0x37e6 PushGE
	var_4806_object = var_4808_object; // 0x37e7 Mov
	func_10442(); // 0x37e9 NEW_2
	var_4811_object = Obj(); var_4812_object = Obj(); // 0x37eb PushV
	var_4813_object = GlobalVars[16]; // 0x37ec PushGE
	var_4811_object = var_4813_object; // 0x37ed Mov
	var_4814_object = GlobalVars[16]; // 0x37ef PushGE
	var_4812_object = var_4814_object; // 0x37f0 Mov
	func_10456(); // 0x37f2 NEW_2
	var_4826_object = Obj(); var_4827_object = Obj(); // 0x37f4 PushV
	var_4828_object = GlobalVars[16]; // 0x37f5 PushGE
	var_4826_object = var_4828_object; // 0x37f6 Mov
	var_4829_object = GlobalVars[16]; // 0x37f8 PushGE
	var_4827_object = var_4829_object; // 0x37f9 Mov
	func_10470(); // 0x37fb NEW_2
	var_4832_object = Obj(); var_4833_object = Obj(); // 0x37fd PushV
	var_4834_object = GlobalVars[16]; // 0x37fe PushGE
	var_4832_object = var_4834_object; // 0x37ff Mov
	var_4835_object = GlobalVars[16]; // 0x3801 PushGE
	var_4833_object = var_4835_object; // 0x3802 Mov
	func_10484(); // 0x3804 NEW_2
	var_4838_object = Obj(); var_4839_object = Obj(); // 0x3806 PushV
	var_4840_object = GlobalVars[16]; // 0x3807 PushGE
	var_4838_object = var_4840_object; // 0x3808 Mov
	var_4841_object = GlobalVars[16]; // 0x380a PushGE
	var_4839_object = var_4841_object; // 0x380b Mov
	func_10498(); // 0x380d NEW_2
	var_4842_object = Obj(); var_4843_object = Obj(); // 0x380f PushV
	var_4844_object = GlobalVars[16]; // 0x3810 PushGE
	var_4842_object = var_4844_object; // 0x3811 Mov
	var_4845_object = GlobalVars[16]; // 0x3813 PushGE
	var_4843_object = var_4845_object; // 0x3814 Mov
	func_10502(); // 0x3816 NEW_2
	var_4848_object = Obj(); var_4849_object = Obj(); // 0x3818 PushV
	var_4850_object = GlobalVars[16]; // 0x3819 PushGE
	var_4848_object = var_4850_object; // 0x381a Mov
	var_4851_object = GlobalVars[16]; // 0x381c PushGE
	var_4849_object = var_4851_object; // 0x381d Mov
	func_10516(); // 0x381f NEW_2
	var_4866_object = Obj(); var_4867_object = Obj(); // 0x3821 PushV
	var_4868_object = GlobalVars[16]; // 0x3822 PushGE
	var_4866_object = var_4868_object; // 0x3823 Mov
	var_4869_object = GlobalVars[16]; // 0x3825 PushGE
	var_4867_object = var_4869_object; // 0x3826 Mov
	func_10532(); // 0x3828 NEW_2
	var_4872_object = Obj(); var_4873_object = Obj(); // 0x382a PushV
	var_4874_object = GlobalVars[16]; // 0x382b PushGE
	var_4872_object = var_4874_object; // 0x382c Mov
	var_4875_object = GlobalVars[16]; // 0x382e PushGE
	var_4873_object = var_4875_object; // 0x382f Mov
	func_11669(); // 0x3831 NEW_2
	var_4878_object = Obj(); var_4879_object = Obj(); // 0x3833 PushV
	var_4880_object = GlobalVars[16]; // 0x3834 PushGE
	var_4878_object = var_4880_object; // 0x3835 Mov
	var_4881_object = GlobalVars[16]; // 0x3837 PushGE
	var_4879_object = var_4881_object; // 0x3838 Mov
	func_11446(); // 0x383a NEW_2
	var_4905_object = Obj(); var_4906_object = Obj(); // 0x383c PushV
	var_4907_object = GlobalVars[16]; // 0x383d PushGE
	var_4905_object = var_4907_object; // 0x383e Mov
	var_4908_object = GlobalVars[16]; // 0x3840 PushGE
	var_4906_object = var_4908_object; // 0x3841 Mov
	func_11699(); // 0x3843 NEW_2
	var_4911_object = Obj(); var_4912_object = Obj(); // 0x3845 PushV
	var_4913_object = GlobalVars[16]; // 0x3846 PushGE
	var_4911_object = var_4913_object; // 0x3847 Mov
	var_4914_object = GlobalVars[16]; // 0x3849 PushGE
	var_4912_object = var_4914_object; // 0x384a Mov
	func_10560(); // 0x384c NEW_2
	var_4917_object = Obj(); var_4918_object = Obj(); // 0x384e PushV
	var_4919_object = GlobalVars[16]; // 0x384f PushGE
	var_4917_object = var_4919_object; // 0x3850 Mov
	var_4920_object = GlobalVars[16]; // 0x3852 PushGE
	var_4918_object = var_4920_object; // 0x3853 Mov
	func_11551(); // 0x3855 NEW_2
	var_4923_object = Obj(); var_4924_object = Obj(); // 0x3857 PushV
	var_4925_object = GlobalVars[16]; // 0x3858 PushGE
	var_4923_object = var_4925_object; // 0x3859 Mov
	var_4926_object = GlobalVars[16]; // 0x385b PushGE
	var_4924_object = var_4926_object; // 0x385c Mov
	func_10567(); // 0x385e NEW_2
	var_4929_object = Obj(); var_4930_object = Obj(); // 0x3860 PushV
	var_4931_object = GlobalVars[16]; // 0x3861 PushGE
	var_4929_object = var_4931_object; // 0x3862 Mov
	var_4932_object = GlobalVars[16]; // 0x3864 PushGE
	var_4930_object = var_4932_object; // 0x3865 Mov
	func_11558(); // 0x3867 NEW_2
	var_4935_object = Obj(); var_4936_object = Obj(); // 0x3869 PushV
	var_4937_object = GlobalVars[16]; // 0x386a PushGE
	var_4935_object = var_4937_object; // 0x386b Mov
	var_4938_object = GlobalVars[16]; // 0x386d PushGE
	var_4936_object = var_4938_object; // 0x386e Mov
	func_11565(); // 0x3870 NEW_2
	var_4941_object = Obj(); var_4942_object = Obj(); // 0x3872 PushV
	var_4943_object = GlobalVars[16]; // 0x3873 PushGE
	var_4941_object = var_4943_object; // 0x3874 Mov
	var_4944_object = GlobalVars[16]; // 0x3876 PushGE
	var_4942_object = var_4944_object; // 0x3877 Mov
	func_11692(); // 0x3879 NEW_2
	var_4947_int = 0; var_4948_float = 0; // 0x387b PushV
	var_4948_float = var_4580_float; // 0x387c Mov
	func_10010(var_4947_int, var_4948_float); // 0x387d NEW_2
	var_4956_object = Obj(); var_4957_string = ""; // 0x387f PushV
	var_4957_string = "volonteers_burah"; // 0x3880 MovS
	func_111(var_4956_object, var_4957_string); // 0x3881 NEW_2
	var_4964_object = Obj(); var_4965_string = ""; // 0x3883 PushV
	var_4965_string = "quest_b1_01"; // 0x3884 MovS
	func_111(var_4964_object, var_4965_string); // 0x3885 NEW_2
	var_4966_object = Obj(); var_4967_string = ""; // 0x3887 PushV
	var_4967_string = "quest_b1_05"; // 0x3888 MovS
	func_111(var_4966_object, var_4967_string); // 0x3889 NEW_2
	var_4968_int = 45058; // 0x388b PushI
	var_4969_float = 24.0; // 0x388c PushF
	SetTimeEvent(var_4968_int, var_4969_float); // 0x388d Func
	var_4970_int = 45060; // 0x388f PushI
	var_4971_float = 72.0; // 0x3890 PushF
	SetTimeEvent(var_4970_int, var_4971_float); // 0x3891 Func
	var_4972_int = 45065; // 0x3893 PushI
	var_4973_float = 96.0; // 0x3894 PushF
	SetTimeEvent(var_4972_int, var_4973_float); // 0x3895 Func
	var_4974_int = 45061; // 0x3897 PushI
	var_4975_float = 144.0; // 0x3898 PushF
	SetTimeEvent(var_4974_int, var_4975_float); // 0x3899 Func
	var_4976_int = 45067; // 0x389b PushI
	var_4977_float = 55.25; // 0x389c PushF
	SetTimeEvent(var_4976_int, var_4977_float); // 0x389d Func
	var_4978_int = 45068; // 0x389f PushI
	var_4979_float = 11.0; // 0x38a0 PushF
	SetTimeEvent(var_4978_int, var_4979_float); // 0x38a1 Func
	var_4980_int = 45062; // 0x38a3 PushI
	var_4981_float = 192.0; // 0x38a4 PushF
	SetTimeEvent(var_4980_int, var_4981_float); // 0x38a5 Func
	var_4982_int = 45069; // 0x38a7 PushI
	var_4983_float = 72.0; // 0x38a8 PushF
	SetTimeEvent(var_4982_int, var_4983_float); // 0x38a9 Func
	var_4984_int = 45066; // 0x38ab PushI
	var_4985_float = 120.0; // 0x38ac PushF
	SetTimeEvent(var_4984_int, var_4985_float); // 0x38ad Func
	var_4986_int = 45074; // 0x38af PushI
	var_4987_float = 48.0; // 0x38b0 PushF
	SetTimeEvent(var_4986_int, var_4987_float); // 0x38b1 Func
	return 0; // 0x38b3 Return
}


func_9794(var_5956_int, var_5957_float)
{
	var_5958_int = 0; var_5959_int = 0; var_5960_int = 0; var_5961_float = 0; // 0x2643 PushV
	var_5959_int = 530556; // 0x2644 MovI
	var_5960_int = 530555; // 0x2645 MovI
	var_5961_float = var_5957_float; // 0x2646 Mov
	func_12278(var_5958_int, var_5959_int, var_5960_int, var_5961_float); // 0x2647 NEW_2
	var_5956_int = var_5958_int; // 0x2648 Mov
	return 0; // 0x264a Return
}


func_11844(var_5222_bool)
{
	var_5225_int = 0; var_5226_string = ""; // 0x2e45 PushV
	var_5226_string = "b4NotkinMapVisit"; // 0x2e46 MovS
	func_106(var_5225_int, var_5226_string); // 0x2e47 NEW_2
	var_5227_int = 0; // 0x2e49 PushI
	var_5228_bool = var_5225_int != var_5227_int; // 0x2e4a Neq
	if(var_5228_bool == 0) goto Label_11854; // 0x2e4b JumpB
	var_5222_bool = 1; // 0x2e4c MovB
	return 0; // 0x2e4d Return
	
Label_11854:
	var_5222_bool = 0; // 0x2e4e MovB
	return 0; // 0x2e4f Return
}


func_8773()
{
	var_4489_object = Obj(); var_4490_int = 0; var_4491_int = 0; var_4492_object = Obj(); var_4493_bool = 0; var_4494_cvector = CVector(0,0,0); var_4495_cvector = CVector(0,0,0); var_4496_string = ""; var_4497_object = Obj(); var_4498_int = 0; var_4499_int = 0; var_4500_object = Obj(); var_4501_bool = 0; var_4502_cvector = CVector(0,0,0); var_4503_cvector = CVector(0,0,0); var_4504_string = ""; // 0x2245 PushV
	GetMainOutdoorScene(var_4497_object); // 0x2246 Func
	var_4505_object = GlobalVars[7]; // 0x2248 PushGE
	size(var_4498_int); // 0x2249 ObjFunc
	var_4499_int = 0; // 0x224b MovI
	
Label_8780:
	var_4506_bool = var_4499_int < var_4498_int; // 0x224c LT
	if(var_4506_bool == 0) goto Label_8820; // 0x224d JumpB
	var_4507_object = GlobalVars[7]; // 0x224e PushGE
	get(var_4500_object, var_4499_int); // 0x224f ObjFunc
	var_4508_object = var_4500_object; // 0x2251 Push
	if(var_4508_object == 0) goto Label_8788; // 0x2252 JumpB
	goto Label_8817; // 0x2253 Jump
	
Label_8817:
	var_4509_int = 1; // 0x2271 PushI
	var_4499_int = var_4499_int + var_4509_int; // 0x2272 Add2
	goto Label_8780; // 0x2273 Jump
	
Label_8788:
	var_4510_string = "pt_grave_supply"; // 0x2254 PushS
	var_4511_int = 1; // 0x2255 PushI
	var_4512_int = var_4499_int + var_4511_int; // 0x2256 Add
	var_4513_int = var_4510_string + var_4512_int; // 0x2257 Add
	GetLocator(var_4513_int, var_4501_bool, var_4502_cvector, var_4503_cvector); // 0x2258 ObjFunc
	var_4514_bool = var_4501_bool == 0; // 0x225a Not
	if(var_4514_bool == 0) goto Label_8800; // 0x225b JumpB
	var_4515_string = "Grave supply point not found"; // 0x225c PushS
	Trace(var_4515_string); // 0x225d Func
	goto Label_8817; // 0x225f Jump
	
Label_8800:
	var_4516_int = 1; // 0x2260 PushI
	var_4517_int = 1; // 0x2261 PushI
	var_4518_string = "bread"; // 0x2262 PushS
	var_4519_string = "milk"; // 0x2263 PushS
	RandOneOf(var_4504_string, var_4516_int, var_4517_int, var_4518_string, var_4519_string); // 0x2264 Func
	var_4520_string = "scripted"; // 0x2266 PushS
	var_4521_string = "item_"; // 0x2267 PushS
	var_4522_int = var_4521_string + var_4504_string; // 0x2268 Add
	var_4523_string = "_stat.xml"; // 0x2269 PushS
	var_4524_int = var_4522_int + var_4523_string; // 0x226a Add
	AddStationaryActorByType(var_4500_object, var_4502_cvector, var_4503_cvector, var_4520_string, var_4524_int); // 0x226b ObjFunc
	var_4525_object = GlobalVars[7]; // 0x226d PushGE
	set(var_4499_int, var_4500_object); // 0x226e ObjFunc
	var_4500_object = 0; // 0x2270 SetNull
	
Label_8820:
	return 16; // 0x2274 Return
}


func_6729(var_2933_int, var_2934_int, var_2935_object, var_2936_object, var_2937_object, var_2938_object)
{
	var_2939_int = 0; // 0x1a4a PushI
	var_2940_bool = var_2934_int == var_2939_int; // 0x1a4b Eq
	if(var_2940_bool == 0) goto Label_6769; // 0x1a4c JumpB
	var_2941_int = 0; var_2942_bool = 0; // 0x1a4d PushV
	var_2941_int = 12; // 0x1a4e MovI
	var_2942_bool = 1; // 0x1a4f MovB
	func_746(var_2941_int, var_2942_bool); // 0x1a50 NEW_2
	var_2943_int = 0; var_2944_bool = 0; var_2945_int = 0; // 0x1a52 PushV
	var_2943_int = 12; // 0x1a53 MovI
	var_2944_bool = 1; // 0x1a54 MovB
	var_2945_int = 1; // 0x1a55 MovI
	func_763(var_2943_int, var_2944_bool, var_2945_int); // 0x1a56 NEW_2
	var_2946_int = 0; var_2947_int = 0; var_2948_object = Obj(); var_2949_object = Obj(); var_2950_object = Obj(); // 0x1a58 PushV
	var_2946_int = 12; // 0x1a59 MovI
	var_2947_int = var_2933_int; // 0x1a5a Mov
	var_2948_object = var_2935_object; // 0x1a5b Mov
	var_2949_object = var_2936_object; // 0x1a5c Mov
	var_2950_object = var_2937_object; // 0x1a5d Mov
	func_591(var_2946_int, var_2947_int, var_2948_object, var_2949_object, var_2950_object); // 0x1a5e NEW_2
	var_2951_object = Obj(); var_2952_int = 0; // 0x1a60 PushV
	var_2951_object = var_2938_object; // 0x1a61 Mov
	var_2952_int = 1; // 0x1a62 MovI
	func_255(var_2952_int); // 0x1a63 NEW_2
	var_2953_int = 0; var_2954_bool = 0; var_2955_int = 0; // 0x1a65 PushV
	var_2953_int = 12; // 0x1a66 MovI
	var_2954_bool = 1; // 0x1a67 MovB
	var_2955_int = 4; // 0x1a68 MovI
	func_820(var_2953_int, var_2954_bool, var_2955_int); // 0x1a69 NEW_2
	var_2956_int = 0; var_2957_bool = 0; var_2958_int = 0; // 0x1a6b PushV
	var_2956_int = 12; // 0x1a6c MovI
	var_2957_bool = 0; // 0x1a6d MovB
	var_2958_int = 4; // 0x1a6e MovI
	func_882(var_2956_int, var_2957_bool, var_2958_int); // 0x1a6f NEW_2
	
Label_6769:
	var_2959_int = 0; var_2960_bool = 0; // 0x1a71 PushV
	var_2959_int = 12; // 0x1a72 MovI
	var_2960_bool = 0; // 0x1a73 MovB
	func_729(var_2959_int, var_2960_bool); // 0x1a74 NEW_2
	var_2961_int = 0; var_2962_int = 0; var_2963_int = 0; // 0x1a76 PushV
	var_2961_int = 12; // 0x1a77 MovI
	var_2962_int = var_2933_int; // 0x1a78 Mov
	var_2963_int = var_2934_int; // 0x1a79 Mov
	func_2714(var_2961_int, var_2962_int, var_2963_int); // 0x1a7a NEW_2
	return 0; // 0x1a7c Return
}


func_9803(var_5967_int, var_5968_float)
{
	var_5969_int = 0; var_5970_int = 0; var_5971_int = 0; var_5972_float = 0; // 0x264c PushV
	var_5970_int = 530558; // 0x264d MovI
	var_5971_int = 530557; // 0x264e MovI
	var_5972_float = var_5968_float; // 0x264f Mov
	func_12278(var_5969_int, var_5970_int, var_5971_int, var_5972_float); // 0x2650 NEW_2
	var_5967_int = var_5969_int; // 0x2651 Mov
	return 0; // 0x2653 Return
}


func_5708(var_2662_int, var_2663_int, var_2664_object, var_2665_object, var_2666_object, var_2667_object)
{
	var_2668_int = 0; // 0x164d PushI
	var_2669_bool = var_2663_int == var_2668_int; // 0x164e Eq
	if(var_2669_bool == 0) goto Label_5748; // 0x164f JumpB
	var_2670_int = 0; var_2671_bool = 0; // 0x1650 PushV
	var_2670_int = 7; // 0x1651 MovI
	var_2671_bool = 1; // 0x1652 MovB
	func_746(var_2670_int, var_2671_bool); // 0x1653 NEW_2
	var_2672_int = 0; var_2673_bool = 0; var_2674_int = 0; // 0x1655 PushV
	var_2672_int = 7; // 0x1656 MovI
	var_2673_bool = 1; // 0x1657 MovB
	var_2674_int = 1; // 0x1658 MovI
	func_763(var_2672_int, var_2673_bool, var_2674_int); // 0x1659 NEW_2
	var_2675_int = 0; var_2676_int = 0; var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj(); // 0x165b PushV
	var_2675_int = 7; // 0x165c MovI
	var_2676_int = var_2662_int; // 0x165d Mov
	var_2677_object = var_2664_object; // 0x165e Mov
	var_2678_object = var_2665_object; // 0x165f Mov
	var_2679_object = var_2666_object; // 0x1660 Mov
	func_591(var_2675_int, var_2676_int, var_2677_object, var_2678_object, var_2679_object); // 0x1661 NEW_2
	var_2680_object = Obj(); var_2681_int = 0; // 0x1663 PushV
	var_2680_object = var_2667_object; // 0x1664 Mov
	var_2681_int = 1; // 0x1665 MovI
	func_255(var_2681_int); // 0x1666 NEW_2
	var_2682_int = 0; var_2683_bool = 0; var_2684_int = 0; // 0x1668 PushV
	var_2682_int = 7; // 0x1669 MovI
	var_2683_bool = 1; // 0x166a MovB
	var_2684_int = 6; // 0x166b MovI
	func_820(var_2682_int, var_2683_bool, var_2684_int); // 0x166c NEW_2
	var_2685_int = 0; var_2686_bool = 0; var_2687_int = 0; // 0x166e PushV
	var_2685_int = 7; // 0x166f MovI
	var_2686_bool = 0; // 0x1670 MovB
	var_2687_int = 6; // 0x1671 MovI
	func_882(var_2685_int, var_2686_bool, var_2687_int); // 0x1672 NEW_2
	
Label_5748:
	var_2688_int = 0; var_2689_bool = 0; // 0x1674 PushV
	var_2688_int = 7; // 0x1675 MovI
	var_2689_bool = 0; // 0x1676 MovB
	func_729(var_2688_int, var_2689_bool); // 0x1677 NEW_2
	var_2690_int = 0; var_2691_int = 0; var_2692_int = 0; // 0x1679 PushV
	var_2690_int = 7; // 0x167a MovI
	var_2691_int = var_2662_int; // 0x167b Mov
	var_2692_int = var_2663_int; // 0x167c Mov
	func_2714(var_2690_int, var_2691_int, var_2692_int); // 0x167d NEW_2
	return 0; // 0x167f Return
}


func_591(var_2018_int, var_2019_int, var_2020_object, var_2021_object, var_2022_object)
{
	var_2023_int = 0; var_2024_bool = 0; // 0x250 PushV
	var_2023_int = var_2018_int; // 0x251 Mov
	var_2024_bool = 0; // 0x252 MovB
	func_492(var_2023_int, var_2024_bool); // 0x253 NEW_2
	var_2025_object = Obj(); // 0x255 PushV
	var_2025_object = var_2020_object; // 0x256 Mov
	func_213(var_2025_object); // 0x257 NEW_2
	var_2026_object = Obj(); // 0x259 PushV
	var_2026_object = var_2021_object; // 0x25a Mov
	func_213(var_2026_object); // 0x25b NEW_2
	var_2027_object = Obj(); // 0x25d PushV
	var_2027_object = var_2022_object; // 0x25e Mov
	func_213(var_2027_object); // 0x25f NEW_2
	var_2028_int = 8; // 0x261 PushI
	var_2029_bool = var_2019_int < var_2028_int; // 0x262 LT
	if(var_2029_bool == 0) goto Label_635; // 0x263 JumpB
	var_2030_string = ""; var_2031_object = Obj(); var_2032_string = ""; var_2033_string = ""; // 0x264 PushV
	var_2034_string = "pt_blockpost"; // 0x265 PushS
	var_2035_int = 1; // 0x266 PushI
	var_2036_int = var_2018_int + var_2035_int; // 0x267 Add
	var_2037_int = var_2034_string + var_2036_int; // 0x268 Add
	var_2038_string = "_1_"; // 0x269 PushS
	var_2030_string = var_2037_int + var_2038_string; // 0x26a Add2
	var_2031_object = var_2020_object; // 0x26b Mov
	var_2032_string = "pers_patrool"; // 0x26c MovS
	var_2033_string = "patrol_stat.xml"; // 0x26d MovS
	func_526(var_2031_object, var_2032_string, var_2033_string); // 0x26e NEW_2
	var_2056_string = ""; var_2057_object = Obj(); // 0x270 PushV
	var_2058_string = "pt_fog"; // 0x271 PushS
	var_2059_int = 1; // 0x272 PushI
	var_2060_int = var_2018_int + var_2059_int; // 0x273 Add
	var_2061_int = var_2058_string + var_2060_int; // 0x274 Add
	var_2062_string = "_"; // 0x275 PushS
	var_2056_string = var_2061_int + var_2062_string; // 0x276 Add2
	var_2057_object = var_2022_object; // 0x277 Mov
	func_548(var_2057_object); // 0x278 NEW_2
	goto Label_669; // 0x27a Jump
	
Label_669:
	return 0; // 0x29d Return
	
Label_635:
	var_2083_string = ""; var_2084_object = Obj(); var_2085_string = ""; var_2086_string = ""; // 0x27b PushV
	var_2087_string = "pt_blockpost"; // 0x27c PushS
	var_2088_int = 1; // 0x27d PushI
	var_2089_int = var_2018_int + var_2088_int; // 0x27e Add
	var_2090_int = var_2087_string + var_2089_int; // 0x27f Add
	var_2091_string = "_1_"; // 0x280 PushS
	var_2083_string = var_2090_int + var_2091_string; // 0x281 Add2
	var_2084_object = var_2020_object; // 0x282 Mov
	var_2085_string = "pers_soldat"; // 0x283 MovS
	var_2086_string = "soldier.xml"; // 0x284 MovS
	func_526(var_2084_object, var_2085_string, var_2086_string); // 0x285 NEW_2
	var_2092_string = ""; var_2093_object = Obj(); var_2094_string = ""; var_2095_string = ""; // 0x287 PushV
	var_2096_string = "pt_blockpost"; // 0x288 PushS
	var_2097_int = 1; // 0x289 PushI
	var_2098_int = var_2018_int + var_2097_int; // 0x28a Add
	var_2099_int = var_2096_string + var_2098_int; // 0x28b Add
	var_2100_string = "_2_"; // 0x28c PushS
	var_2092_string = var_2099_int + var_2100_string; // 0x28d Add2
	var_2093_object = var_2021_object; // 0x28e Mov
	var_2094_string = "pers_sanitar"; // 0x28f MovS
	var_2095_string = "sanitar_stat.xml"; // 0x290 MovS
	func_526(var_2093_object, var_2094_string, var_2095_string); // 0x291 NEW_2
	var_2101_string = ""; var_2102_object = Obj(); // 0x293 PushV
	var_2103_string = "pt_fog"; // 0x294 PushS
	var_2104_int = 1; // 0x295 PushI
	var_2105_int = var_2018_int + var_2104_int; // 0x296 Add
	var_2106_int = var_2103_string + var_2105_int; // 0x297 Add
	var_2107_string = "_"; // 0x298 PushS
	var_2101_string = var_2106_int + var_2107_string; // 0x299 Add2
	var_2102_object = var_2022_object; // 0x29a Mov
	func_548(var_2102_object); // 0x29b NEW_2
}


func_11856(var_5300_bool)
{
	var_5303_int = 0; var_5304_string = ""; // 0x2e51 PushV
	var_5304_string = "b6q01"; // 0x2e52 MovS
	func_106(var_5303_int, var_5304_string); // 0x2e53 NEW_2
	var_5305_int = 0; // 0x2e55 PushI
	var_5306_bool = var_5303_int == var_5305_int; // 0x2e56 Eq
	if(var_5306_bool == 0) goto Label_11866; // 0x2e57 JumpB
	var_5300_bool = 1; // 0x2e58 MovB
	return 0; // 0x2e59 Return
	
Label_11866:
	var_5300_bool = 0; // 0x2e5a MovB
	return 0; // 0x2e5b Return
}


func_4690()
{
	var_79_string = "dt_house1_union2_05l"; // 0x1253 PushS
	add(var_79_string); // 0x1254 ObjFunc
	var_80_string = "dt_house1_union2_05r"; // 0x1256 PushS
	add(var_80_string); // 0x1257 ObjFunc
	var_81_string = "dt_house2_01"; // 0x1259 PushS
	add(var_81_string); // 0x125a ObjFunc
	var_82_string = "dt_house2_02"; // 0x125c PushS
	add(var_82_string); // 0x125d ObjFunc
	var_83_string = "dt_house2_03"; // 0x125f PushS
	add(var_83_string); // 0x1260 ObjFunc
	var_84_string = "dt_house2_04"; // 0x1262 PushS
	add(var_84_string); // 0x1263 ObjFunc
	var_85_string = "dt_house2_05"; // 0x1265 PushS
	add(var_85_string); // 0x1266 ObjFunc
	var_86_string = "dt_house3_10_i2"; // 0x1268 PushS
	add(var_86_string); // 0x1269 ObjFunc
	var_87_string = "dt_house3_10"; // 0x126b PushS
	add(var_87_string); // 0x126c ObjFunc
	var_88_string = "dt_house3_11_i2"; // 0x126e PushS
	add(var_88_string); // 0x126f ObjFunc
	var_89_string = "dt_house3_11"; // 0x1271 PushS
	add(var_89_string); // 0x1272 ObjFunc
	var_90_string = "dt_house3_12_i2"; // 0x1274 PushS
	add(var_90_string); // 0x1275 ObjFunc
	var_91_string = "dt_house3_12"; // 0x1277 PushS
	add(var_91_string); // 0x1278 ObjFunc
	var_92_string = "dt_house_1_06"; // 0x127a PushS
	add(var_92_string); // 0x127b ObjFunc
	var_93_string = "dt_house3_07_i2"; // 0x127d PushS
	add(var_93_string); // 0x127e ObjFunc
	var_94_string = "dt_house3_07"; // 0x1280 PushS
	add(var_94_string); // 0x1281 ObjFunc
	return 0; // 0x1283 Return
}


func_9812(var_5882_int, var_5883_float)
{
	var_5884_int = 0; var_5885_int = 0; var_5886_int = 0; var_5887_float = 0; // 0x2655 PushV
	var_5885_int = 530560; // 0x2656 MovI
	var_5886_int = 530559; // 0x2657 MovI
	var_5887_float = var_5883_float; // 0x2658 Mov
	func_12278(var_5884_int, var_5885_int, var_5886_int, var_5887_float); // 0x2659 NEW_2
	var_5882_int = var_5884_int; // 0x265a Mov
	return 0; // 0x265c Return
}


func_11868(var_5900_bool)
{
	var_5903_int = 0; var_5904_string = ""; // 0x2e5d PushV
	var_5904_string = "b9q03AglajaTalk"; // 0x2e5e MovS
	func_106(var_5903_int, var_5904_string); // 0x2e5f NEW_2
	var_5905_int = 0; // 0x2e61 PushI
	var_5906_bool = var_5903_int != var_5905_int; // 0x2e62 Neq
	if(var_5906_bool == 0) goto Label_11878; // 0x2e63 JumpB
	var_5900_bool = 1; // 0x2e64 MovB
	return 0; // 0x2e65 Return
	
Label_11878:
	var_5900_bool = 0; // 0x2e66 MovB
	return 0; // 0x2e67 Return
}


func_9821(var_5945_int, var_5946_float)
{
	var_5947_int = 0; var_5948_int = 0; var_5949_int = 0; var_5950_float = 0; // 0x265e PushV
	var_5948_int = 530562; // 0x265f MovI
	var_5949_int = 530561; // 0x2660 MovI
	var_5950_float = var_5946_float; // 0x2661 Mov
	func_12278(var_5947_int, var_5948_int, var_5949_int, var_5950_float); // 0x2662 NEW_2
	var_5945_int = var_5947_int; // 0x2663 Mov
	return 0; // 0x2665 Return
}


func_9830(var_5551_int, var_5552_float)
{
	var_5553_int = 0; var_5554_int = 0; var_5555_int = 0; var_5556_float = 0; // 0x2667 PushV
	var_5554_int = 530564; // 0x2668 MovI
	var_5555_int = 530563; // 0x2669 MovI
	var_5556_float = var_5552_float; // 0x266a Mov
	func_12278(var_5553_int, var_5554_int, var_5555_int, var_5556_float); // 0x266b NEW_2
	var_5551_int = var_5553_int; // 0x266c Mov
	return 0; // 0x266e Return
}


func_11880(var_5908_bool)
{
	var_5911_int = 0; var_5912_string = ""; // 0x2e69 PushV
	var_5912_string = "b9q03"; // 0x2e6a MovS
	func_106(var_5911_int, var_5912_string); // 0x2e6b NEW_2
	var_5913_int = 0; // 0x2e6d PushI
	var_5914_bool = var_5911_int == var_5913_int; // 0x2e6e Eq
	if(var_5914_bool == 0) goto Label_11890; // 0x2e6f JumpB
	var_5908_bool = 1; // 0x2e70 MovB
	return 0; // 0x2e71 Return
	
Label_11890:
	var_5908_bool = 0; // 0x2e72 MovB
	return 0; // 0x2e73 Return
}


func_9839(var_5584_int, var_5585_float)
{
	var_5586_int = 0; var_5587_int = 0; var_5588_int = 0; var_5589_float = 0; // 0x2670 PushV
	var_5587_int = 530566; // 0x2671 MovI
	var_5588_int = 530565; // 0x2672 MovI
	var_5589_float = var_5585_float; // 0x2673 Mov
	func_12278(var_5586_int, var_5587_int, var_5588_int, var_5589_float); // 0x2674 NEW_2
	var_5584_int = var_5586_int; // 0x2675 Mov
	return 0; // 0x2677 Return
}


func_7794()
{
	var_4572_int = 0; var_4573_int = 0; var_4574_object = Obj(); var_4575_int = 0; var_4576_int = 0; var_4577_object = Obj(); // 0x1e72 PushV
	var_4578_string = "Cleaning arena..."; // 0x1e73 PushS
	Trace(var_4578_string); // 0x1e74 Func
	var_4579_object = GlobalVars[11]; // 0x1e76 PushGE
	var_4580_bool = var_4579_object != 0; // 0x1e77 NullNeq
	if(var_4580_bool == 0) goto Label_7827; // 0x1e78 JumpB
	var_4581_object = GlobalVars[11]; // 0x1e79 PushGE
	Remove(); // 0x1e7a ObjFunc
	var_4582_object = GlobalVars[12]; // 0x1e7c PushGE
	size(var_4575_int); // 0x1e7d ObjFunc
	var_4576_int = 0; // 0x1e7f MovI
	
Label_7808:
	var_4583_bool = var_4576_int < var_4575_int; // 0x1e80 LT
	if(var_4583_bool == 0) goto Label_7820; // 0x1e81 JumpB
	var_4584_object = GlobalVars[12]; // 0x1e82 PushGE
	get(var_4577_object, var_4576_int); // 0x1e83 ObjFunc
	var_4585_string = "remove"; // 0x1e85 PushS
	Trigger(var_4577_object, var_4585_string); // 0x1e86 Func
	var_4577_object = 0; // 0x1e88 SetNull
	var_4586_int = 1; // 0x1e89 PushI
	var_4576_int = var_4576_int + var_4586_int; // 0x1e8a Add2
	goto Label_7808; // 0x1e8b Jump
	
Label_7820:
	var_4587_object = GlobalVars[12]; // 0x1e8c PushGE
	clear(); // 0x1e8d ObjFunc
	var_4588_bool = 0; // 0x1e8f PushV
	var_4588_bool = 0; // 0x1e90 MovB
	func_7723(var_4588_bool); // 0x1e91 NEW_2
	
Label_7827:
	return 6; // 0x1e93 Return
}


func_11892(var_5915_bool)
{
	var_5918_int = 0; var_5919_string = ""; // 0x2e75 PushV
	var_5919_string = "b9q03BadInit"; // 0x2e76 MovS
	func_106(var_5918_int, var_5919_string); // 0x2e77 NEW_2
	var_5920_int = 0; // 0x2e79 PushI
	var_5921_bool = var_5918_int != var_5920_int; // 0x2e7a Neq
	if(var_5921_bool == 0) goto Label_11902; // 0x2e7b JumpB
	var_5915_bool = 1; // 0x2e7c MovB
	return 0; // 0x2e7d Return
	
Label_11902:
	var_5915_bool = 0; // 0x2e7e MovB
	return 0; // 0x2e7f Return
}


func_8822()
{
	var_4444_object = Obj(); var_4445_object = Obj(); var_4446_object = Obj(); var_4447_object = Obj(); // 0x2276 PushV
	GetMainOutdoorScene(var_4446_object); // 0x2277 Func
	var_4448_string = "big_gun"; // 0x2279 PushS
	var_4449_string = "big_gun.bin"; // 0x227a PushS
	var_4450_cvector = CVector(0.0, 0.0, 0.0); // 0x227b PushVec
	AddScriptedActor(var_4447_object, var_4448_string, var_4449_string, var_4446_object, var_4450_cvector); // 0x227c Func
	var_4451_string = "vagon_martira"; // 0x227e PushS
	var_4452_string = "big_gun.bin"; // 0x227f PushS
	var_4453_cvector = CVector(0.0, 0.0, 0.0); // 0x2280 PushVec
	AddScriptedActor(var_4447_object, var_4451_string, var_4452_string, var_4446_object, var_4453_cvector); // 0x2281 Func
	var_4454_string = "d9q01_trigger_wagon"; // 0x2283 PushS
	var_4455_string = "quest_d9_01_wagon.bin"; // 0x2284 PushS
	var_4456_cvector = CVector(0.0, 0.0, 0.0); // 0x2285 PushVec
	AddScriptedActor(var_4447_object, var_4454_string, var_4455_string, var_4446_object, var_4456_cvector); // 0x2286 Func
	return 4; // 0x2288 Return
}


func_10871()
{
	var_6245_object = Obj(); var_6246_object = Obj(); var_6247_object = Obj(); var_6248_object = Obj(); // 0x2a77 PushV
	var_6249_object = Obj(); // 0x2a78 PushV
	func_12286(var_6249_object); // 0x2a79 NEW_2
	var_6247_object = var_6249_object; // 0x2a7a Mov
	var_6250_string = "b3q01BigVladGotoOspina"; // 0x2a7c PushS
	FindMark(var_6248_object, var_6250_string); // 0x2a7d ObjFunc
	var_6251_object = var_6248_object; // 0x2a7f Push
	if(var_6251_object == 0) goto Label_10883; // 0x2a80 JumpB
	Remove(); // 0x2a81 ObjFunc
	
Label_10883:
	var_6252_string = "b3q01ButcherGotoBigVlad"; // 0x2a83 PushS
	FindMark(var_6248_object, var_6252_string); // 0x2a84 ObjFunc
	var_6253_object = var_6248_object; // 0x2a86 Push
	if(var_6253_object == 0) goto Label_10890; // 0x2a87 JumpB
	Remove(); // 0x2a88 ObjFunc
	
Label_10890:
	var_6254_string = "b3q01OspinaGotoButcher"; // 0x2a8a PushS
	FindMark(var_6248_object, var_6254_string); // 0x2a8b ObjFunc
	var_6255_object = var_6248_object; // 0x2a8d Push
	if(var_6255_object == 0) goto Label_10897; // 0x2a8e JumpB
	Remove(); // 0x2a8f ObjFunc
	
Label_10897:
	var_6256_string = "b3q02GrifGotoDanko"; // 0x2a91 PushS
	FindMark(var_6248_object, var_6256_string); // 0x2a92 ObjFunc
	var_6257_object = var_6248_object; // 0x2a94 Push
	if(var_6257_object == 0) goto Label_10904; // 0x2a95 JumpB
	Remove(); // 0x2a96 ObjFunc
	
Label_10904:
	var_6258_string = "b3q02GrifGotoNotkin"; // 0x2a98 PushS
	FindMark(var_6248_object, var_6258_string); // 0x2a99 ObjFunc
	var_6259_object = var_6248_object; // 0x2a9b Push
	if(var_6259_object == 0) goto Label_10911; // 0x2a9c JumpB
	Remove(); // 0x2a9d ObjFunc
	
Label_10911:
	var_6260_string = "b3q02KapellaGotoNotkin"; // 0x2a9f PushS
	FindMark(var_6248_object, var_6260_string); // 0x2aa0 ObjFunc
	var_6261_object = var_6248_object; // 0x2aa2 Push
	if(var_6261_object == 0) goto Label_10918; // 0x2aa3 JumpB
	Remove(); // 0x2aa4 ObjFunc
	
Label_10918:
	var_6262_string = "b3q02NotkinGotoKapella"; // 0x2aa6 PushS
	FindMark(var_6248_object, var_6262_string); // 0x2aa7 ObjFunc
	var_6263_object = var_6248_object; // 0x2aa9 Push
	if(var_6263_object == 0) goto Label_10925; // 0x2aaa JumpB
	Remove(); // 0x2aab ObjFunc
	
Label_10925:
	var_6264_string = "b3q03BurahHome"; // 0x2aad PushS
	FindMark(var_6248_object, var_6264_string); // 0x2aae ObjFunc
	var_6265_object = var_6248_object; // 0x2ab0 Push
	if(var_6265_object == 0) goto Label_10932; // 0x2ab1 JumpB
	Remove(); // 0x2ab2 ObjFunc
	
Label_10932:
	var_6266_bool = 0; var_6267_int = 0; // 0x2ab4 PushV
	var_6267_int = 221; // 0x2ab5 MovI
	func_12261(var_6266_bool, var_6267_int); // 0x2ab6 NEW_2
	var_6268_bool = 0; var_6269_int = 0; // 0x2ab8 PushV
	var_6269_int = 227; // 0x2ab9 MovI
	func_12261(var_6268_bool, var_6269_int); // 0x2aba NEW_2
	var_6270_bool = 0; var_6271_int = 0; // 0x2abc PushV
	var_6271_int = 235; // 0x2abd MovI
	func_12261(var_6270_bool, var_6271_int); // 0x2abe NEW_2
	var_6272_bool = 0; var_6273_int = 0; // 0x2ac0 PushV
	var_6273_int = 631; // 0x2ac1 MovI
	func_12261(var_6272_bool, var_6273_int); // 0x2ac2 NEW_2
	return 4; // 0x2ac4 Return
}


func_9848(var_5595_int, var_5596_float)
{
	var_5597_int = 0; var_5598_int = 0; var_5599_int = 0; var_5600_float = 0; // 0x2679 PushV
	var_5598_int = 530568; // 0x267a MovI
	var_5599_int = 530567; // 0x267b MovI
	var_5600_float = var_5596_float; // 0x267c Mov
	func_12278(var_5597_int, var_5598_int, var_5599_int, var_5600_float); // 0x267d NEW_2
	var_5595_int = var_5597_int; // 0x267e Mov
	return 0; // 0x2680 Return
}


func_6781(var_4063_int, var_4064_int, var_4065_object, var_4066_object, var_4067_object, var_4068_object)
{
	var_4069_int = 0; // 0x1a7e PushI
	var_4070_bool = var_4064_int == var_4069_int; // 0x1a7f Eq
	if(var_4070_bool == 0) goto Label_6821; // 0x1a80 JumpB
	var_4071_int = 0; var_4072_bool = 0; // 0x1a81 PushV
	var_4071_int = 12; // 0x1a82 MovI
	var_4072_bool = 0; // 0x1a83 MovB
	func_746(var_4071_int, var_4072_bool); // 0x1a84 NEW_2
	var_4073_int = 0; var_4074_bool = 0; var_4075_int = 0; // 0x1a86 PushV
	var_4073_int = 12; // 0x1a87 MovI
	var_4074_bool = 0; // 0x1a88 MovB
	var_4075_int = 1; // 0x1a89 MovI
	func_763(var_4073_int, var_4074_bool, var_4075_int); // 0x1a8a NEW_2
	var_4076_int = 0; var_4077_int = 0; var_4078_object = Obj(); var_4079_object = Obj(); var_4080_object = Obj(); // 0x1a8c PushV
	var_4076_int = 12; // 0x1a8d MovI
	var_4077_int = var_4063_int; // 0x1a8e Mov
	var_4078_object = var_4065_object; // 0x1a8f Mov
	var_4079_object = var_4066_object; // 0x1a90 Mov
	var_4080_object = var_4067_object; // 0x1a91 Mov
	func_670(var_4076_int, var_4077_int, var_4078_object, var_4079_object, var_4080_object); // 0x1a92 NEW_2
	var_4081_object = Obj(); var_4082_int = 0; // 0x1a94 PushV
	var_4081_object = var_4068_object; // 0x1a95 Mov
	var_4082_int = 2; // 0x1a96 MovI
	func_255(var_4082_int); // 0x1a97 NEW_2
	var_4083_int = 0; var_4084_bool = 0; var_4085_int = 0; // 0x1a99 PushV
	var_4083_int = 12; // 0x1a9a MovI
	var_4084_bool = 0; // 0x1a9b MovB
	var_4085_int = 4; // 0x1a9c MovI
	func_820(var_4083_int, var_4084_bool, var_4085_int); // 0x1a9d NEW_2
	var_4086_int = 0; var_4087_bool = 0; var_4088_int = 0; // 0x1a9f PushV
	var_4086_int = 12; // 0x1aa0 MovI
	var_4087_bool = 1; // 0x1aa1 MovB
	var_4088_int = 4; // 0x1aa2 MovI
	func_882(var_4086_int, var_4087_bool, var_4088_int); // 0x1aa3 NEW_2
	
Label_6821:
	var_4089_int = 0; var_4090_bool = 0; // 0x1aa5 PushV
	var_4089_int = 12; // 0x1aa6 MovI
	var_4090_bool = 0; // 0x1aa7 MovB
	func_729(var_4089_int, var_4090_bool); // 0x1aa8 NEW_2
	var_4091_int = 0; var_4092_int = 0; var_4093_int = 0; // 0x1aaa PushV
	var_4091_int = 12; // 0x1aab MovI
	var_4092_int = var_4063_int; // 0x1aac Mov
	var_4093_int = var_4064_int; // 0x1aad Mov
	func_3609(var_4091_int, var_4092_int, var_4093_int); // 0x1aae NEW_2
	return 0; // 0x1ab0 Return
}


func_5760(var_3788_int, var_3789_int, var_3790_object, var_3791_object, var_3792_object, var_3793_object)
{
	var_3794_int = 0; // 0x1681 PushI
	var_3795_bool = var_3789_int == var_3794_int; // 0x1682 Eq
	if(var_3795_bool == 0) goto Label_5800; // 0x1683 JumpB
	var_3796_int = 0; var_3797_bool = 0; // 0x1684 PushV
	var_3796_int = 7; // 0x1685 MovI
	var_3797_bool = 0; // 0x1686 MovB
	func_746(var_3796_int, var_3797_bool); // 0x1687 NEW_2
	var_3798_int = 0; var_3799_bool = 0; var_3800_int = 0; // 0x1689 PushV
	var_3798_int = 7; // 0x168a MovI
	var_3799_bool = 0; // 0x168b MovB
	var_3800_int = 1; // 0x168c MovI
	func_763(var_3798_int, var_3799_bool, var_3800_int); // 0x168d NEW_2
	var_3801_int = 0; var_3802_int = 0; var_3803_object = Obj(); var_3804_object = Obj(); var_3805_object = Obj(); // 0x168f PushV
	var_3801_int = 7; // 0x1690 MovI
	var_3802_int = var_3788_int; // 0x1691 Mov
	var_3803_object = var_3790_object; // 0x1692 Mov
	var_3804_object = var_3791_object; // 0x1693 Mov
	var_3805_object = var_3792_object; // 0x1694 Mov
	func_670(var_3801_int, var_3802_int, var_3803_object, var_3804_object, var_3805_object); // 0x1695 NEW_2
	var_3806_object = Obj(); var_3807_int = 0; // 0x1697 PushV
	var_3806_object = var_3793_object; // 0x1698 Mov
	var_3807_int = 2; // 0x1699 MovI
	func_255(var_3807_int); // 0x169a NEW_2
	var_3808_int = 0; var_3809_bool = 0; var_3810_int = 0; // 0x169c PushV
	var_3808_int = 7; // 0x169d MovI
	var_3809_bool = 0; // 0x169e MovB
	var_3810_int = 6; // 0x169f MovI
	func_820(var_3808_int, var_3809_bool, var_3810_int); // 0x16a0 NEW_2
	var_3811_int = 0; var_3812_bool = 0; var_3813_int = 0; // 0x16a2 PushV
	var_3811_int = 7; // 0x16a3 MovI
	var_3812_bool = 1; // 0x16a4 MovB
	var_3813_int = 6; // 0x16a5 MovI
	func_882(var_3811_int, var_3812_bool, var_3813_int); // 0x16a6 NEW_2
	
Label_5800:
	var_3814_int = 0; var_3815_bool = 0; // 0x16a8 PushV
	var_3814_int = 7; // 0x16a9 MovI
	var_3815_bool = 0; // 0x16aa MovB
	func_729(var_3814_int, var_3815_bool); // 0x16ab NEW_2
	var_3816_int = 0; var_3817_int = 0; var_3818_int = 0; // 0x16ad PushV
	var_3816_int = 7; // 0x16ae MovI
	var_3817_int = var_3788_int; // 0x16af Mov
	var_3818_int = var_3789_int; // 0x16b0 Mov
	func_3609(var_3816_int, var_3817_int, var_3818_int); // 0x16b1 NEW_2
	return 0; // 0x16b3 Return
}


func_9857(var_5820_int, var_5821_float)
{
	var_5822_int = 0; var_5823_int = 0; var_5824_int = 0; var_5825_float = 0; // 0x2682 PushV
	var_5823_int = 529886; // 0x2683 MovI
	var_5824_int = 529885; // 0x2684 MovI
	var_5825_float = var_5821_float; // 0x2685 Mov
	func_12278(var_5822_int, var_5823_int, var_5824_int, var_5825_float); // 0x2686 NEW_2
	var_5820_int = var_5822_int; // 0x2687 Mov
	return 0; // 0x2689 Return
}


func_11904(var_5864_bool)
{
	var_5867_int = 0; var_5868_string = ""; // 0x2e81 PushV
	var_5868_string = "b11q04"; // 0x2e82 MovS
	func_106(var_5867_int, var_5868_string); // 0x2e83 NEW_2
	var_5869_int = 0; // 0x2e85 PushI
	var_5870_bool = var_5867_int == var_5869_int; // 0x2e86 Eq
	if(var_5870_bool == 0) goto Label_11914; // 0x2e87 JumpB
	var_5864_bool = 1; // 0x2e88 MovB
	return 0; // 0x2e89 Return
	
Label_11914:
	var_5864_bool = 0; // 0x2e8a MovB
	return 0; // 0x2e8b Return
}


func_4740(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object)
{
	var_1035_int = 0; // 0x1285 PushI
	var_1036_bool = var_1030_int == var_1035_int; // 0x1286 Eq
	if(var_1036_bool == 0) goto Label_4780; // 0x1287 JumpB
	var_1037_int = 0; var_1038_bool = 0; // 0x1288 PushV
	var_1037_int = 2; // 0x1289 MovI
	var_1038_bool = 0; // 0x128a MovB
	func_746(var_1037_int, var_1038_bool); // 0x128b NEW_2
	var_1039_int = 0; var_1040_bool = 0; var_1041_int = 0; // 0x128d PushV
	var_1039_int = 2; // 0x128e MovI
	var_1040_bool = 0; // 0x128f MovB
	var_1041_int = 1; // 0x1290 MovI
	func_763(var_1039_int, var_1040_bool, var_1041_int); // 0x1291 NEW_2
	var_1042_int = 0; var_1043_int = 0; var_1044_object = Obj(); var_1045_object = Obj(); var_1046_object = Obj(); // 0x1293 PushV
	var_1042_int = 2; // 0x1294 MovI
	var_1043_int = var_1029_int; // 0x1295 Mov
	var_1044_object = var_1031_object; // 0x1296 Mov
	var_1045_object = var_1032_object; // 0x1297 Mov
	var_1046_object = var_1033_object; // 0x1298 Mov
	func_572(var_1043_int, var_1044_object, var_1045_object, var_1046_object); // 0x1299 NEW_2
	var_1047_object = Obj(); var_1048_int = 0; // 0x129b PushV
	var_1047_object = var_1034_object; // 0x129c Mov
	var_1048_int = 0; // 0x129d MovI
	func_255(var_1048_int); // 0x129e NEW_2
	var_1049_int = 0; var_1050_bool = 0; var_1051_int = 0; // 0x12a0 PushV
	var_1049_int = 2; // 0x12a1 MovI
	var_1050_bool = 0; // 0x12a2 MovB
	var_1051_int = 5; // 0x12a3 MovI
	func_820(var_1049_int, var_1050_bool, var_1051_int); // 0x12a4 NEW_2
	var_1052_int = 0; var_1053_bool = 0; var_1054_int = 0; // 0x12a6 PushV
	var_1052_int = 2; // 0x12a7 MovI
	var_1053_bool = 0; // 0x12a8 MovB
	var_1054_int = 5; // 0x12a9 MovI
	func_882(var_1052_int, var_1053_bool, var_1054_int); // 0x12aa NEW_2
	
Label_4780:
	var_1055_int = 0; var_1056_int = 0; // 0x12ac PushV
	var_1055_int = 2; // 0x12ad MovI
	var_1056_int = var_1030_int; // 0x12ae Mov
	func_1000(var_1055_int, var_1056_int); // 0x12af NEW_2
	var_1057_int = 0; var_1058_int = 0; var_1059_int = 0; // 0x12b1 PushV
	var_1057_int = 2; // 0x12b2 MovI
	var_1058_int = var_1029_int; // 0x12b3 Mov
	var_1059_int = var_1030_int; // 0x12b4 Mov
	func_1847(var_1057_int, var_1058_int, var_1059_int); // 0x12b5 NEW_2
	return 0; // 0x12b7 Return
}


func_9866(var_5120_int, var_5121_float)
{
	var_5122_int = 0; var_5123_int = 0; var_5124_int = 0; var_5125_float = 0; // 0x268b PushV
	var_5123_int = 521908; // 0x268c MovI
	var_5124_int = 521907; // 0x268d MovI
	var_5125_float = var_5121_float; // 0x268e Mov
	func_12278(var_5122_int, var_5123_int, var_5124_int, var_5125_float); // 0x268f NEW_2
	var_5120_int = var_5122_int; // 0x2690 Mov
	return 0; // 0x2692 Return
}


func_8843(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x228b PushV
	var_17_bool = 0; // 0x228c PushV
	var_17_bool = 0; // 0x228d MovB
	var_18_int = 16384; // 0x228e PushI
	var_19_bool = var_3_int > var_18_int; // 0x228f GT
	if(var_19_bool == 0) goto Label_8853; // 0x2290 JumpB
	var_20_int = 16396; // 0x2291 PushI
	var_21_bool = var_3_int < var_20_int; // 0x2292 LT
	if(var_21_bool == 0) goto Label_8853; // 0x2293 JumpB
	var_17_bool = 1; // 0x2294 MovB
	
Label_8853:
	if(var_17_bool == 0) goto Label_8862; // 0x2295 JumpB
	var_22_int = 16384; // 0x2296 PushI
	var_11_int = var_3_int - var_22_int; // 0x2297 Sub2
	var_23_int = 0; // 0x2298 PushV
	var_23_int = var_11_int; // 0x2299 Mov
	func_14686(var_23_int); // 0x229a NEW_2
	var_2_bool = 1; // 0x229c MovB
	return 12; // 0x229d Return
	
Label_8862:
	var_199_bool = 0; // 0x229e PushV
	var_199_bool = 0; // 0x229f MovB
	var_200_int = 32768; // 0x22a0 PushI
	var_201_bool = var_3_int > var_200_int; // 0x22a1 GT
	if(var_201_bool == 0) goto Label_8871; // 0x22a2 JumpB
	var_202_int = 33056; // 0x22a3 PushI
	var_203_bool = var_3_int < var_202_int; // 0x22a4 LT
	if(var_203_bool == 0) goto Label_8871; // 0x22a5 JumpB
	var_199_bool = 1; // 0x22a6 MovB
	
Label_8871:
	if(var_199_bool == 0) goto Label_8896; // 0x22a7 JumpB
	var_204_int = 32768; // 0x22a8 PushI
	var_205_int = var_3_int - var_204_int; // 0x22a9 Sub
	var_206_int = 24; // 0x22aa PushI
	var_12_int = var_205_int / var_205_int; // 0x22ab Div2
	var_207_int = 32768; // 0x22ac PushI
	var_208_int = var_3_int - var_207_int; // 0x22ad Sub
	var_209_int = 24; // 0x22ae PushI
	var_13_int = var_208_int % var_209_int; // 0x22af Mod2
	GetGameTime(var_14_float); // 0x22b0 Func
	var_210_int = 24; // 0x22b2 PushI
	var_15_int = var_14_float / var_14_float; // 0x22b3 Div2
	var_16_int = var_14_float; // 0x22b4 Mov
	var_211_int = 24; // 0x22b5 PushI
	var_16_int = var_16_int % var_211_int; // 0x22b6 Mod2
	var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_int = 0; // 0x22b7 PushV
	var_212_int = var_12_int; // 0x22b8 Mov
	var_213_int = var_13_int; // 0x22b9 Mov
	var_214_int = var_15_int; // 0x22ba Mov
	var_215_int = var_16_int; // 0x22bb Mov
	func_8981(var_212_int, var_213_int, var_214_int, var_215_int); // 0x22bc NEW_2
	var_2_bool = 1; // 0x22be MovB
	return 12; // 0x22bf Return
	
Label_8896:
	var_2_bool = 0; // 0x22c0 MovB
	return 12; // 0x22c1 Return
}


func_11916(var_5484_bool)
{
	var_5487_int = 0; var_5488_string = ""; // 0x2e8d PushV
	var_5488_string = "b3KapellaVisit"; // 0x2e8e MovS
	func_106(var_5487_int, var_5488_string); // 0x2e8f NEW_2
	var_5489_int = 0; // 0x2e91 PushI
	var_5490_bool = var_5487_int != var_5489_int; // 0x2e92 Neq
	if(var_5490_bool == 0) goto Label_11926; // 0x2e93 JumpB
	var_5484_bool = 1; // 0x2e94 MovB
	return 0; // 0x2e95 Return
	
Label_11926:
	var_5484_bool = 0; // 0x2e96 MovB
	return 0; // 0x2e97 Return
}


func_9875(var_5611_int, var_5612_float)
{
	var_5613_int = 0; var_5614_int = 0; var_5615_int = 0; var_5616_float = 0; // 0x2694 PushV
	var_5614_int = 530492; // 0x2695 MovI
	var_5615_int = 530491; // 0x2696 MovI
	var_5616_float = var_5612_float; // 0x2697 Mov
	func_12278(var_5613_int, var_5614_int, var_5615_int, var_5616_float); // 0x2698 NEW_2
	var_5611_int = var_5613_int; // 0x2699 Mov
	return 0; // 0x269b Return
}


func_7828()
{
	var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); var_325_int = 0; // 0x1e94 PushV
	GetMainOutdoorScene(var_324_object); // 0x1e95 Func
	var_325_int = 1; // 0x1e97 MovI
	
Label_7832:
	var_326_int = 17; // 0x1e98 PushI
	var_327_bool = var_325_int <= var_326_int; // 0x1e99 LE
	if(var_327_bool == 0) goto Label_7849; // 0x1e9a JumpB
	var_328_object = GlobalVars[15]; // 0x1e9b PushGE
	var_329_object = Obj(); var_330_object = Obj(); var_331_string = ""; var_332_string = ""; var_333_string = ""; // 0x1e9c PushV
	var_330_object = var_324_object; // 0x1e9d Mov
	var_334_string = "pt_bull"; // 0x1e9e PushS
	var_331_string = var_334_string + var_325_int; // 0x1e9f Add2
	var_332_string = "pers_bull"; // 0x1ea0 MovS
	var_333_string = "bull.xml"; // 0x1ea1 MovS
	func_133(var_330_object, var_331_string, var_332_string, var_333_string); // 0x1ea2 NEW_2
	add(var_329_object); // 0x1ea4 ObjFunc
	var_348_int = 1; // 0x1ea6 PushI
	var_325_int = var_325_int + var_348_int; // 0x1ea7 Add2
	goto Label_7832; // 0x1ea8 Jump
	
Label_7849:
	return 4; // 0x1ea9 Return
}


func_11928(var_5721_bool)
{
	var_5724_int = 0; var_5725_string = ""; // 0x2e99 PushV
	var_5725_string = "b8GeorgVisit"; // 0x2e9a MovS
	func_106(var_5724_int, var_5725_string); // 0x2e9b NEW_2
	var_5726_int = 0; // 0x2e9d PushI
	var_5727_bool = var_5724_int != var_5726_int; // 0x2e9e Neq
	if(var_5727_bool == 0) goto Label_11938; // 0x2e9f JumpB
	var_5721_bool = 1; // 0x2ea0 MovB
	return 0; // 0x2ea1 Return
	
Label_11938:
	var_5721_bool = 0; // 0x2ea2 MovB
	return 0; // 0x2ea3 Return
}


func_2714(var_2690_int, var_2691_int, var_2692_int)
{
	var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; var_2696_int = 0; // 0xa9a PushV
	var_2697_bool = 0; // 0xa9b PushV
	var_2697_bool = 0; // 0xa9c MovB
	var_2698_int = 8; // 0xa9d PushI
	var_2699_bool = var_2692_int > var_2698_int; // 0xa9e GT
	if(var_2699_bool == 0) goto Label_2724; // 0xa9f JumpB
	var_2700_int = 21; // 0xaa0 PushI
	var_2701_bool = var_2692_int < var_2700_int; // 0xaa1 LT
	if(var_2701_bool == 0) goto Label_2724; // 0xaa2 JumpB
	var_2697_bool = 1; // 0xaa3 MovB
	
Label_2724:
	if(var_2697_bool == 0) goto Label_2779; // 0xaa4 JumpB
	var_2702_int = 0; var_2703_string = ""; var_2704_string = ""; var_2705_int = 0; // 0xaa5 PushV
	var_2702_int = var_2690_int; // 0xaa6 Mov
	var_2703_string = "pers_vaxxabit"; // 0xaa7 MovS
	var_2704_string = "vaxxabit_d.xml"; // 0xaa8 MovS
	var_2705_int = 6; // 0xaa9 MovI
	func_453(var_2702_int, var_2703_string, var_2704_string, var_2705_int); // 0xaaa NEW_2
	var_2706_int = 0; var_2707_string = ""; var_2708_string = ""; var_2709_int = 0; // 0xaac PushV
	var_2706_int = var_2690_int; // 0xaad Mov
	var_2707_string = "pers_vaxxabitka"; // 0xaae MovS
	var_2708_string = "vaxxabitka_d.xml"; // 0xaaf MovS
	var_2709_int = 5; // 0xab0 MovI
	func_453(var_2706_int, var_2707_string, var_2708_string, var_2709_int); // 0xab1 NEW_2
	var_2710_int = 0; var_2711_string = ""; var_2712_string = ""; var_2713_int = 0; // 0xab3 PushV
	var_2710_int = var_2690_int; // 0xab4 Mov
	var_2711_string = "pers_rat_big"; // 0xab5 MovS
	var_2712_string = "rat_big.xml"; // 0xab6 MovS
	var_2713_int = 2; // 0xab7 MovI
	func_453(var_2710_int, var_2711_string, var_2712_string, var_2713_int); // 0xab8 NEW_2
	var_2714_int = 0; var_2715_string = ""; var_2716_string = ""; var_2717_int = 0; // 0xaba PushV
	var_2714_int = var_2690_int; // 0xabb Mov
	var_2715_string = "fog"; // 0xabc MovS
	var_2716_string = "fog.xml"; // 0xabd MovS
	var_2717_int = 6; // 0xabe MovI
	func_479(var_2714_int, var_2715_string, var_2716_string, var_2717_int); // 0xabf NEW_2
	var_2718_int = 5; // 0xac1 PushI
	var_2719_bool = var_2691_int >= var_2718_int; // 0xac2 GE
	if(var_2719_bool == 0) goto Label_2763; // 0xac3 JumpB
	var_2720_int = 0; var_2721_string = ""; var_2722_string = ""; var_2723_int = 0; // 0xac4 PushV
	var_2720_int = var_2690_int; // 0xac5 Mov
	var_2721_string = "fog"; // 0xac6 MovS
	var_2722_string = "fog_hunter.xml"; // 0xac7 MovS
	var_2723_int = 2; // 0xac8 MovI
	func_479(var_2720_int, var_2721_string, var_2722_string, var_2723_int); // 0xac9 NEW_2
	
Label_2763:
	var_2724_int = 1; // 0xacb PushI
	var_2725_float = 0; var_2726_int = 0; // 0xacc PushV
	var_2726_int = var_2691_int; // 0xacd Mov
	func_1205(var_2725_float, var_2726_int); // 0xace NEW_2
	var_2695_int = var_2724_int * var_2725_float; // 0xad0 Mult2
	var_2727_int = var_2695_int; // 0xad1 Push
	if(var_2727_int == 0) goto Label_2778; // 0xad2 JumpB
	var_2728_int = 0; var_2729_string = ""; var_2730_string = ""; var_2731_int = 0; // 0xad3 PushV
	var_2728_int = var_2690_int; // 0xad4 Mov
	var_2729_string = "pers_bomber"; // 0xad5 MovS
	var_2730_string = "bomber.xml"; // 0xad6 MovS
	var_2731_int = var_2695_int; // 0xad7 Mov
	func_453(var_2728_int, var_2729_string, var_2730_string, var_2731_int); // 0xad8 NEW_2
	
Label_2778:
	goto Label_2832; // 0xada Jump
	
Label_2832:
	var_2732_int = 0; var_2733_string = ""; var_2734_string = ""; var_2735_int = 0; var_2736_int = 0; var_2737_int = 0; // 0xb10 PushV
	var_2732_int = var_2690_int; // 0xb11 Mov
	var_2733_string = "pers_worker"; // 0xb12 MovS
	var_2734_string = "agony1_man.xml"; // 0xb13 MovS
	var_2735_int = 2; // 0xb14 MovI
	var_2736_int = 4; // 0xb15 MovI
	var_2737_int = 4; // 0xb16 MovI
	func_466(var_2732_int, var_2733_string, var_2734_string, var_2735_int, var_2736_int, var_2737_int); // 0xb17 NEW_2
	var_2738_int = 0; var_2739_string = ""; var_2740_string = ""; var_2741_int = 0; var_2742_int = 0; var_2743_int = 0; // 0xb19 PushV
	var_2738_int = var_2690_int; // 0xb1a Mov
	var_2739_string = "pers_unosha"; // 0xb1b MovS
	var_2740_string = "agony1_man.xml"; // 0xb1c MovS
	var_2741_int = 2; // 0xb1d MovI
	var_2742_int = 4; // 0xb1e MovI
	var_2743_int = 4; // 0xb1f MovI
	func_466(var_2738_int, var_2739_string, var_2740_string, var_2741_int, var_2742_int, var_2743_int); // 0xb20 NEW_2
	var_2744_int = 0; var_2745_string = ""; var_2746_string = ""; var_2747_int = 0; var_2748_int = 0; var_2749_int = 0; // 0xb22 PushV
	var_2744_int = var_2690_int; // 0xb23 Mov
	var_2745_string = "pers_woman"; // 0xb24 MovS
	var_2746_string = "agony1_woman.xml"; // 0xb25 MovS
	var_2747_int = 2; // 0xb26 MovI
	var_2748_int = 4; // 0xb27 MovI
	var_2749_int = 4; // 0xb28 MovI
	func_466(var_2744_int, var_2745_string, var_2746_string, var_2747_int, var_2748_int, var_2749_int); // 0xb29 NEW_2
	var_2750_int = 0; var_2751_string = ""; var_2752_string = ""; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0; // 0xb2b PushV
	var_2750_int = var_2690_int; // 0xb2c Mov
	var_2751_string = "pers_wasted_girl"; // 0xb2d MovS
	var_2752_string = "agony1_woman.xml"; // 0xb2e MovS
	var_2753_int = 2; // 0xb2f MovI
	var_2754_int = 4; // 0xb30 MovI
	var_2755_int = 4; // 0xb31 MovI
	func_466(var_2750_int, var_2751_string, var_2752_string, var_2753_int, var_2754_int, var_2755_int); // 0xb32 NEW_2
	var_2756_bool = 0; var_2757_int = 0; var_2758_int = 0; // 0xb34 PushV
	var_2757_int = var_2691_int; // 0xb35 Mov
	var_2758_int = var_2692_int; // 0xb36 Mov
	func_1295(var_2756_bool, var_2757_int, var_2758_int); // 0xb37 NEW_2
	if(var_2756_bool == 0) goto Label_2881; // 0xb39 JumpB
	var_2759_int = 0; var_2760_string = ""; var_2761_string = ""; var_2762_int = 0; // 0xb3a PushV
	var_2759_int = var_2690_int; // 0xb3b Mov
	var_2760_string = "pers_soldat"; // 0xb3c MovS
	var_2761_string = "soldier_marauder.xml"; // 0xb3d MovS
	var_2762_int = 2; // 0xb3e MovI
	func_453(var_2759_int, var_2760_string, var_2761_string, var_2762_int); // 0xb3f NEW_2
	
Label_2881:
	var_2763_bool = 0; var_2764_int = 0; // 0xb41 PushV
	var_2764_int = var_2691_int; // 0xb42 Mov
	func_1322(var_2763_bool, var_2764_int); // 0xb43 NEW_2
	if(var_2763_bool == 0) goto Label_2893; // 0xb45 JumpB
	var_2765_int = 0; var_2766_string = ""; var_2767_string = ""; var_2768_int = 0; // 0xb46 PushV
	var_2765_int = var_2690_int; // 0xb47 Mov
	var_2766_string = "pers_sanitar"; // 0xb48 MovS
	var_2767_string = "sanitar.xml"; // 0xb49 MovS
	var_2768_int = 1; // 0xb4a MovI
	func_453(var_2765_int, var_2766_string, var_2767_string, var_2768_int); // 0xb4b NEW_2
	
Label_2893:
	return 4; // 0xb4d Return
	
Label_2779:
	var_2769_int = 0; var_2770_string = ""; var_2771_string = ""; var_2772_int = 0; // 0xadb PushV
	var_2769_int = var_2690_int; // 0xadc Mov
	var_2770_string = "pers_vaxxabit"; // 0xadd MovS
	var_2771_string = "vaxxabit_d.xml"; // 0xade MovS
	var_2772_int = 4; // 0xadf MovI
	func_453(var_2769_int, var_2770_string, var_2771_string, var_2772_int); // 0xae0 NEW_2
	var_2773_int = 0; var_2774_string = ""; var_2775_string = ""; var_2776_int = 0; // 0xae2 PushV
	var_2773_int = var_2690_int; // 0xae3 Mov
	var_2774_string = "pers_vaxxabitka"; // 0xae4 MovS
	var_2775_string = "vaxxabitka_d.xml"; // 0xae5 MovS
	var_2776_int = 4; // 0xae6 MovI
	func_453(var_2773_int, var_2774_string, var_2775_string, var_2776_int); // 0xae7 NEW_2
	var_2777_int = 0; var_2778_string = ""; var_2779_string = ""; var_2780_int = 0; // 0xae9 PushV
	var_2777_int = var_2690_int; // 0xaea Mov
	var_2778_string = "pers_rat_big"; // 0xaeb MovS
	var_2779_string = "rat_big.xml"; // 0xaec MovS
	var_2780_int = 3; // 0xaed MovI
	func_453(var_2777_int, var_2778_string, var_2779_string, var_2780_int); // 0xaee NEW_2
	var_2781_int = 0; var_2782_string = ""; var_2783_string = ""; var_2784_int = 0; // 0xaf0 PushV
	var_2781_int = var_2690_int; // 0xaf1 Mov
	var_2782_string = "fog"; // 0xaf2 MovS
	var_2783_string = "fog.xml"; // 0xaf3 MovS
	var_2784_int = 6; // 0xaf4 MovI
	func_479(var_2781_int, var_2782_string, var_2783_string, var_2784_int); // 0xaf5 NEW_2
	var_2785_int = 5; // 0xaf7 PushI
	var_2786_bool = var_2691_int >= var_2785_int; // 0xaf8 GE
	if(var_2786_bool == 0) goto Label_2817; // 0xaf9 JumpB
	var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0; // 0xafa PushV
	var_2787_int = var_2690_int; // 0xafb Mov
	var_2788_string = "fog"; // 0xafc MovS
	var_2789_string = "fog_hunter.xml"; // 0xafd MovS
	var_2790_int = 2; // 0xafe MovI
	func_479(var_2787_int, var_2788_string, var_2789_string, var_2790_int); // 0xaff NEW_2
	
Label_2817:
	var_2791_int = 1; // 0xb01 PushI
	var_2792_float = 0; var_2793_int = 0; // 0xb02 PushV
	var_2793_int = var_2691_int; // 0xb03 Mov
	func_1205(var_2792_float, var_2793_int); // 0xb04 NEW_2
	var_2696_int = var_2791_int * var_2792_float; // 0xb06 Mult2
	var_2794_int = var_2696_int; // 0xb07 Push
	if(var_2794_int == 0) goto Label_2832; // 0xb08 JumpB
	var_2795_int = 0; var_2796_string = ""; var_2797_string = ""; var_2798_int = 0; // 0xb09 PushV
	var_2795_int = var_2690_int; // 0xb0a Mov
	var_2796_string = "pers_bomber"; // 0xb0b MovS
	var_2797_string = "bomber.xml"; // 0xb0c MovS
	var_2798_int = var_2696_int; // 0xb0d Mov
	func_453(var_2795_int, var_2796_string, var_2797_string, var_2798_int); // 0xb0e NEW_2
}


func_9884(var_5562_int, var_5563_float)
{
	var_5564_int = 0; var_5565_int = 0; var_5566_int = 0; var_5567_float = 0; // 0x269d PushV
	var_5565_int = 530570; // 0x269e MovI
	var_5566_int = 530569; // 0x269f MovI
	var_5567_float = var_5563_float; // 0x26a0 Mov
	func_12278(var_5564_int, var_5565_int, var_5566_int, var_5567_float); // 0x26a1 NEW_2
	var_5562_int = var_5564_int; // 0x26a2 Mov
	return 0; // 0x26a4 Return
}


func_670(var_3199_int, var_3200_int, var_3201_object, var_3202_object, var_3203_object)
{
	var_3204_int = 0; var_3205_bool = 0; // 0x29f PushV
	var_3204_int = var_3199_int; // 0x2a0 Mov
	var_3205_bool = 0; // 0x2a1 MovB
	func_492(var_3204_int, var_3205_bool); // 0x2a2 NEW_2
	var_3206_object = Obj(); // 0x2a4 PushV
	var_3206_object = var_3201_object; // 0x2a5 Mov
	func_213(var_3206_object); // 0x2a6 NEW_2
	var_3207_object = Obj(); // 0x2a8 PushV
	var_3207_object = var_3202_object; // 0x2a9 Mov
	func_213(var_3207_object); // 0x2aa NEW_2
	var_3208_object = Obj(); // 0x2ac PushV
	var_3208_object = var_3203_object; // 0x2ad Mov
	func_213(var_3208_object); // 0x2ae NEW_2
	var_3209_int = 8; // 0x2b0 PushI
	var_3210_bool = var_3200_int < var_3209_int; // 0x2b1 LT
	if(var_3210_bool == 0) goto Label_704; // 0x2b2 JumpB
	var_3211_string = ""; var_3212_object = Obj(); var_3213_string = ""; var_3214_string = ""; // 0x2b3 PushV
	var_3215_string = "pt_blockpost"; // 0x2b4 PushS
	var_3216_int = 1; // 0x2b5 PushI
	var_3217_int = var_3199_int + var_3216_int; // 0x2b6 Add
	var_3218_int = var_3215_string + var_3217_int; // 0x2b7 Add
	var_3219_string = "_1_"; // 0x2b8 PushS
	var_3211_string = var_3218_int + var_3219_string; // 0x2b9 Add2
	var_3212_object = var_3201_object; // 0x2ba Mov
	var_3213_string = "pers_patrool"; // 0x2bb MovS
	var_3214_string = "patrol_stat.xml"; // 0x2bc MovS
	func_526(var_3212_object, var_3213_string, var_3214_string); // 0x2bd NEW_2
	goto Label_728; // 0x2bf Jump
	
Label_728:
	return 0; // 0x2d8 Return
	
Label_704:
	var_3220_string = ""; var_3221_object = Obj(); var_3222_string = ""; var_3223_string = ""; // 0x2c0 PushV
	var_3224_string = "pt_blockpost"; // 0x2c1 PushS
	var_3225_int = 1; // 0x2c2 PushI
	var_3226_int = var_3199_int + var_3225_int; // 0x2c3 Add
	var_3227_int = var_3224_string + var_3226_int; // 0x2c4 Add
	var_3228_string = "_1_"; // 0x2c5 PushS
	var_3220_string = var_3227_int + var_3228_string; // 0x2c6 Add2
	var_3221_object = var_3201_object; // 0x2c7 Mov
	var_3222_string = "pers_soldat"; // 0x2c8 MovS
	var_3223_string = "soldier.xml"; // 0x2c9 MovS
	func_526(var_3221_object, var_3222_string, var_3223_string); // 0x2ca NEW_2
	var_3229_string = ""; var_3230_object = Obj(); var_3231_string = ""; var_3232_string = ""; // 0x2cc PushV
	var_3233_string = "pt_blockpost"; // 0x2cd PushS
	var_3234_int = 1; // 0x2ce PushI
	var_3235_int = var_3199_int + var_3234_int; // 0x2cf Add
	var_3236_int = var_3233_string + var_3235_int; // 0x2d0 Add
	var_3237_string = "_2_"; // 0x2d1 PushS
	var_3229_string = var_3236_int + var_3237_string; // 0x2d2 Add2
	var_3230_object = var_3202_object; // 0x2d3 Mov
	var_3231_string = "pers_sanitar"; // 0x2d4 MovS
	var_3232_string = "sanitar_stat.xml"; // 0x2d5 MovS
	func_526(var_3230_object, var_3231_string, var_3232_string); // 0x2d6 NEW_2
}


func_11940(var_5603_bool)
{
	var_5606_int = 0; var_5607_string = ""; // 0x2ea5 PushV
	var_5607_string = "b10MatVisit"; // 0x2ea6 MovS
	func_106(var_5606_int, var_5607_string); // 0x2ea7 NEW_2
	var_5608_int = 0; // 0x2ea9 PushI
	var_5609_bool = var_5606_int != var_5608_int; // 0x2eaa Neq
	if(var_5609_bool == 0) goto Label_11950; // 0x2eab JumpB
	var_5603_bool = 1; // 0x2eac MovB
	return 0; // 0x2ead Return
	
Label_11950:
	var_5603_bool = 0; // 0x2eae MovB
	return 0; // 0x2eaf Return
}


func_9893(var_5890_int, var_5891_float)
{
	var_5892_int = 0; var_5893_int = 0; var_5894_int = 0; var_5895_float = 0; // 0x26a6 PushV
	var_5893_int = 529890; // 0x26a7 MovI
	var_5894_int = 529889; // 0x26a8 MovI
	var_5895_float = var_5891_float; // 0x26a9 Mov
	func_12278(var_5892_int, var_5893_int, var_5894_int, var_5895_float); // 0x26aa NEW_2
	var_5890_int = var_5892_int; // 0x26ab Mov
	return 0; // 0x26ad Return
}


func_7851()
{
	var_4486_object = Obj(); // 0x1eab PushV
	var_4487_object = GlobalVars[15]; // 0x1eac PushGE
	var_4486_object = var_4487_object; // 0x1ead Mov
	func_213(var_4486_object); // 0x1eaf NEW_2
	return 0; // 0x1eb1 Return
}


func_9902(var_5836_int, var_5837_float)
{
	var_5838_int = 0; var_5839_int = 0; var_5840_int = 0; var_5841_float = 0; // 0x26af PushV
	var_5839_int = 529894; // 0x26b0 MovI
	var_5840_int = 529893; // 0x26b1 MovI
	var_5841_float = var_5837_float; // 0x26b2 Mov
	func_12278(var_5838_int, var_5839_int, var_5840_int, var_5841_float); // 0x26b3 NEW_2
	var_5836_int = var_5838_int; // 0x26b4 Mov
	return 0; // 0x26b6 Return
}


func_11952(var_5619_bool)
{
	var_5622_int = 0; var_5623_string = ""; // 0x2eb1 PushV
	var_5623_string = "b6ViktorVisit"; // 0x2eb2 MovS
	func_106(var_5622_int, var_5623_string); // 0x2eb3 NEW_2
	var_5624_int = 0; // 0x2eb5 PushI
	var_5625_bool = var_5622_int != var_5624_int; // 0x2eb6 Neq
	if(var_5625_bool == 0) goto Label_11962; // 0x2eb7 JumpB
	var_5619_bool = 1; // 0x2eb8 MovB
	return 0; // 0x2eb9 Return
	
Label_11962:
	var_5619_bool = 0; // 0x2eba MovB
	return 0; // 0x2ebb Return
}


func_6833()
{
	var_281_string = "r7_house2_01"; // 0x1ab2 PushS
	add(var_281_string); // 0x1ab3 ObjFunc
	var_282_string = "r7_house2_02"; // 0x1ab5 PushS
	add(var_282_string); // 0x1ab6 ObjFunc
	var_283_string = "r7_house2_03"; // 0x1ab8 PushS
	add(var_283_string); // 0x1ab9 ObjFunc
	var_284_string = "r7_house2_04"; // 0x1abb PushS
	add(var_284_string); // 0x1abc ObjFunc
	var_285_string = "r7_house3_03_i2"; // 0x1abe PushS
	add(var_285_string); // 0x1abf ObjFunc
	var_286_string = "r7_house3_03"; // 0x1ac1 PushS
	add(var_286_string); // 0x1ac2 ObjFunc
	var_287_string = "r7_house3_04_i2"; // 0x1ac4 PushS
	add(var_287_string); // 0x1ac5 ObjFunc
	var_288_string = "r7_house3_04"; // 0x1ac7 PushS
	add(var_288_string); // 0x1ac8 ObjFunc
	var_289_string = "r7_house3_05_i2"; // 0x1aca PushS
	add(var_289_string); // 0x1acb ObjFunc
	var_290_string = "r7_house3_05"; // 0x1acd PushS
	add(var_290_string); // 0x1ace ObjFunc
	var_291_string = "r7_house3_06_i2"; // 0x1ad0 PushS
	add(var_291_string); // 0x1ad1 ObjFunc
	var_292_string = "r7_house3_01_i2"; // 0x1ad3 PushS
	add(var_292_string); // 0x1ad4 ObjFunc
	var_293_string = "r7_house3_01"; // 0x1ad6 PushS
	add(var_293_string); // 0x1ad7 ObjFunc
	var_294_string = "r7_house3_02_i2"; // 0x1ad9 PushS
	add(var_294_string); // 0x1ada ObjFunc
	var_295_string = "r7_house3_02"; // 0x1adc PushS
	add(var_295_string); // 0x1add ObjFunc
	return 0; // 0x1adf Return
}


func_7858()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); // 0x1eb2 PushV
	var_39_object = GlobalVars[15]; // 0x1eb3 PushGE
	var_40_object = Obj(); // 0x1eb4 PushV
	func_100(var_40_object); // 0x1eb5 NEW_2
	var_39_object = var_40_object; // 0x1eb6 Mov
	GlobalVars[15] = var_39_object; // 0x1eb8 PopGE
	var_43_object = GlobalVars[13]; // 0x1eb9 PushGE
	var_44_object = Obj(); // 0x1eba PushV
	func_100(var_44_object); // 0x1ebb NEW_2
	var_43_object = var_44_object; // 0x1ebc Mov
	GlobalVars[13] = var_43_object; // 0x1ebe PopGE
	var_45_object = GlobalVars[8]; // 0x1ebf PushGE
	var_46_object = Obj(); // 0x1ec0 PushV
	func_100(var_46_object); // 0x1ec1 NEW_2
	var_45_object = var_46_object; // 0x1ec2 Mov
	GlobalVars[8] = var_45_object; // 0x1ec4 PopGE
	var_47_object = GlobalVars[9]; // 0x1ec5 PushGE
	var_48_object = Obj(); // 0x1ec6 PushV
	func_100(var_48_object); // 0x1ec7 NEW_2
	var_47_object = var_48_object; // 0x1ec8 Mov
	GlobalVars[9] = var_47_object; // 0x1eca PopGE
	var_49_object = GlobalVars[10]; // 0x1ecb PushGE
	var_50_object = Obj(); // 0x1ecc PushV
	func_100(var_50_object); // 0x1ecd NEW_2
	var_49_object = var_50_object; // 0x1ece Mov
	GlobalVars[10] = var_49_object; // 0x1ed0 PopGE
	var_29_int = 0; // 0x1ed1 MovI
	
Label_7890:
	var_51_int = 16; // 0x1ed2 PushI
	var_52_bool = var_29_int < var_51_int; // 0x1ed3 LT
	if(var_52_bool == 0) goto Label_7914; // 0x1ed4 JumpB
	var_53_object = GlobalVars[8]; // 0x1ed5 PushGE
	var_54_object = Obj(); // 0x1ed6 PushV
	func_100(var_54_object); // 0x1ed7 NEW_2
	add(var_54_object); // 0x1ed9 ObjFunc
	var_55_object = GlobalVars[9]; // 0x1edb PushGE
	var_56_object = Obj(); // 0x1edc PushV
	func_100(var_56_object); // 0x1edd NEW_2
	add(var_56_object); // 0x1edf ObjFunc
	var_57_object = GlobalVars[10]; // 0x1ee1 PushGE
	var_58_object = Obj(); // 0x1ee2 PushV
	func_100(var_58_object); // 0x1ee3 NEW_2
	add(var_58_object); // 0x1ee5 ObjFunc
	var_59_int = 1; // 0x1ee7 PushI
	var_29_int = var_29_int + var_59_int; // 0x1ee8 Add2
	goto Label_7890; // 0x1ee9 Jump
	
Label_7914:
	CreateStringVector(var_30_object); // 0x1eea Func
	var_60_object = GlobalVars[13]; // 0x1eec PushGE
	add(var_30_object); // 0x1eed ObjFunc
	var_61_object = Obj(); // 0x1eef PushV
	var_61_object = var_30_object; // 0x1ef0 Mov
	func_4335(); // 0x1ef1 NEW_2
	CreateStringVector(var_30_object); // 0x1ef3 Func
	var_62_object = GlobalVars[13]; // 0x1ef5 PushGE
	add(var_30_object); // 0x1ef6 ObjFunc
	var_63_object = Obj(); // 0x1ef8 PushV
	var_63_object = var_30_object; // 0x1ef9 Mov
	func_4493(); // 0x1efa NEW_2
	CreateStringVector(var_30_object); // 0x1efc Func
	var_77_object = GlobalVars[13]; // 0x1efe PushGE
	add(var_30_object); // 0x1eff ObjFunc
	var_78_object = Obj(); // 0x1f01 PushV
	var_78_object = var_30_object; // 0x1f02 Mov
	func_4690(); // 0x1f03 NEW_2
	CreateStringVector(var_30_object); // 0x1f05 Func
	var_95_object = GlobalVars[13]; // 0x1f07 PushGE
	add(var_30_object); // 0x1f08 ObjFunc
	var_96_object = Obj(); // 0x1f0a PushV
	var_96_object = var_30_object; // 0x1f0b Mov
	func_4896(); // 0x1f0c NEW_2
	CreateStringVector(var_30_object); // 0x1f0e Func
	var_121_object = GlobalVars[13]; // 0x1f10 PushGE
	add(var_30_object); // 0x1f11 ObjFunc
	var_122_object = Obj(); // 0x1f13 PushV
	var_122_object = var_30_object; // 0x1f14 Mov
	func_5126(); // 0x1f15 NEW_2
	CreateStringVector(var_30_object); // 0x1f17 Func
	var_143_object = GlobalVars[13]; // 0x1f19 PushGE
	add(var_30_object); // 0x1f1a ObjFunc
	var_144_object = Obj(); // 0x1f1c PushV
	var_144_object = var_30_object; // 0x1f1d Mov
	func_5344(); // 0x1f1e NEW_2
	CreateStringVector(var_30_object); // 0x1f20 Func
	var_174_object = GlobalVars[13]; // 0x1f22 PushGE
	add(var_30_object); // 0x1f23 ObjFunc
	var_175_object = Obj(); // 0x1f25 PushV
	var_175_object = var_30_object; // 0x1f26 Mov
	func_5589(); // 0x1f27 NEW_2
	CreateStringVector(var_30_object); // 0x1f29 Func
	var_176_object = GlobalVars[13]; // 0x1f2b PushGE
	add(var_30_object); // 0x1f2c ObjFunc
	var_177_object = Obj(); // 0x1f2e PushV
	var_177_object = var_30_object; // 0x1f2f Mov
	func_5612(); // 0x1f30 NEW_2
	CreateStringVector(var_30_object); // 0x1f32 Func
	var_192_object = GlobalVars[13]; // 0x1f34 PushGE
	add(var_30_object); // 0x1f35 ObjFunc
	var_193_object = Obj(); // 0x1f37 PushV
	var_193_object = var_30_object; // 0x1f38 Mov
	func_5812(); // 0x1f39 NEW_2
	CreateStringVector(var_30_object); // 0x1f3b Func
	var_208_object = GlobalVars[13]; // 0x1f3d PushGE
	add(var_30_object); // 0x1f3e ObjFunc
	var_209_object = Obj(); // 0x1f40 PushV
	var_209_object = var_30_object; // 0x1f41 Mov
	func_6012(); // 0x1f42 NEW_2
	CreateStringVector(var_30_object); // 0x1f44 Func
	var_225_object = GlobalVars[13]; // 0x1f46 PushGE
	add(var_30_object); // 0x1f47 ObjFunc
	var_226_object = Obj(); // 0x1f49 PushV
	var_226_object = var_30_object; // 0x1f4a Mov
	func_6215(); // 0x1f4b NEW_2
	CreateStringVector(var_30_object); // 0x1f4d Func
	var_244_object = GlobalVars[13]; // 0x1f4f PushGE
	add(var_30_object); // 0x1f50 ObjFunc
	var_245_object = Obj(); // 0x1f52 PushV
	var_245_object = var_30_object; // 0x1f53 Mov
	func_6424(); // 0x1f54 NEW_2
	CreateStringVector(var_30_object); // 0x1f56 Func
	var_264_object = GlobalVars[13]; // 0x1f58 PushGE
	add(var_30_object); // 0x1f59 ObjFunc
	var_265_object = Obj(); // 0x1f5b PushV
	var_265_object = var_30_object; // 0x1f5c Mov
	func_6636(); // 0x1f5d NEW_2
	CreateStringVector(var_30_object); // 0x1f5f Func
	var_279_object = GlobalVars[13]; // 0x1f61 PushGE
	add(var_30_object); // 0x1f62 ObjFunc
	var_280_object = Obj(); // 0x1f64 PushV
	var_280_object = var_30_object; // 0x1f65 Mov
	func_6833(); // 0x1f66 NEW_2
	CreateStringVector(var_30_object); // 0x1f68 Func
	var_296_object = GlobalVars[13]; // 0x1f6a PushGE
	add(var_30_object); // 0x1f6b ObjFunc
	var_297_object = Obj(); // 0x1f6d PushV
	var_297_object = var_30_object; // 0x1f6e Mov
	func_7036(); // 0x1f6f NEW_2
	CreateStringVector(var_30_object); // 0x1f71 Func
	var_312_object = GlobalVars[13]; // 0x1f73 PushGE
	add(var_30_object); // 0x1f74 ObjFunc
	var_313_object = Obj(); // 0x1f76 PushV
	var_313_object = var_30_object; // 0x1f77 Mov
	func_7236(); // 0x1f78 NEW_2
	func_7828(); // 0x1f7b NEW_2
	GetMainOutdoorScene(var_31_object); // 0x1f7d Func
	var_349_object = GlobalVars[6]; // 0x1f7f PushGE
	var_350_object = Obj(); // 0x1f80 PushV
	func_100(var_350_object); // 0x1f81 NEW_2
	var_349_object = var_350_object; // 0x1f82 Mov
	GlobalVars[6] = var_349_object; // 0x1f84 PopGE
	var_32_int = 0; // 0x1f85 MovI
	
Label_8070:
	var_351_string = "pt_plant"; // 0x1f86 PushS
	var_352_int = 1; // 0x1f87 PushI
	var_353_int = var_32_int + var_352_int; // 0x1f88 Add
	var_354_int = var_351_string + var_353_int; // 0x1f89 Add
	GetLocator(var_354_int, var_33_bool); // 0x1f8a ObjFunc
	var_355_bool = var_33_bool == 0; // 0x1f8c Not
	if(var_355_bool == 0) goto Label_8079; // 0x1f8d JumpB
	goto Label_8082; // 0x1f8e Jump
	
Label_8082:
	var_356_object = GlobalVars[6]; // 0x1f92 PushGE
	resize(var_32_int); // 0x1f93 ObjFunc
	var_357_string = "Total plants: "; // 0x1f95 PushS
	var_358_int = var_357_string + var_32_int; // 0x1f96 Add
	Trace(var_358_int); // 0x1f97 Func
	var_359_object = GlobalVars[7]; // 0x1f99 PushGE
	var_360_object = Obj(); // 0x1f9a PushV
	func_100(var_360_object); // 0x1f9b NEW_2
	var_359_object = var_360_object; // 0x1f9c Mov
	GlobalVars[7] = var_359_object; // 0x1f9e PopGE
	var_34_int = 0; // 0x1f9f MovI
	
Label_8096:
	var_361_string = "pt_grave_supply"; // 0x1fa0 PushS
	var_362_int = 1; // 0x1fa1 PushI
	var_363_int = var_34_int + var_362_int; // 0x1fa2 Add
	var_364_int = var_361_string + var_363_int; // 0x1fa3 Add
	GetLocator(var_364_int, var_35_bool); // 0x1fa4 ObjFunc
	var_365_bool = var_35_bool == 0; // 0x1fa6 Not
	if(var_365_bool == 0) goto Label_8105; // 0x1fa7 JumpB
	goto Label_8108; // 0x1fa8 Jump
	
Label_8108:
	var_366_object = GlobalVars[7]; // 0x1fac PushGE
	resize(var_34_int); // 0x1fad ObjFunc
	var_367_string = "Total grave supplies: "; // 0x1faf PushS
	var_368_int = var_367_string + var_34_int; // 0x1fb0 Add
	Trace(var_368_int); // 0x1fb1 Func
	var_369_object = GlobalVars[14]; // 0x1fb3 PushGE
	var_370_object = Obj(); // 0x1fb4 PushV
	func_100(var_370_object); // 0x1fb5 NEW_2
	var_369_object = var_370_object; // 0x1fb6 Mov
	GlobalVars[14] = var_369_object; // 0x1fb8 PopGE
	var_36_int = 0; // 0x1fb9 MovI
	
Label_8122:
	var_371_string = "pt_bonfire"; // 0x1fba PushS
	var_372_int = 1; // 0x1fbb PushI
	var_373_int = var_36_int + var_372_int; // 0x1fbc Add
	var_374_int = var_371_string + var_373_int; // 0x1fbd Add
	GetLocator(var_374_int, var_37_bool); // 0x1fbe ObjFunc
	var_375_bool = var_37_bool == 0; // 0x1fc0 Not
	if(var_375_bool == 0) goto Label_8131; // 0x1fc1 JumpB
	goto Label_8143; // 0x1fc2 Jump
	
Label_8143:
	var_376_string = "Total bonfires: "; // 0x1fcf PushS
	var_377_int = var_376_string + var_36_int; // 0x1fd0 Add
	Trace(var_377_int); // 0x1fd1 Func
	return 20; // 0x1fd3 Return
	
Label_8131:
	var_38_object = 0; // 0x1fc3 SetNull
	var_378_object = GlobalVars[14]; // 0x1fc4 PushGE
	add(var_38_object); // 0x1fc5 ObjFunc
	var_379_int = 0; // 0x1fc7 PushV
	var_379_int = var_36_int; // 0x1fc8 Mov
	func_7635(var_379_int); // 0x1fc9 NEW_2
	var_38_object = 0; // 0x1fcb SetNull
	var_414_int = 1; // 0x1fcc PushI
	var_36_int = var_36_int + var_414_int; // 0x1fcd Add2
	goto Label_8122; // 0x1fce Jump
	
Label_8105:
	var_415_int = 1; // 0x1fa9 PushI
	var_34_int = var_34_int + var_415_int; // 0x1faa Add2
	goto Label_8096; // 0x1fab Jump
	
Label_8079:
	var_416_int = 1; // 0x1f8f PushI
	var_32_int = var_32_int + var_416_int; // 0x1f90 Add2
	goto Label_8070; // 0x1f91 Jump
}


func_5812()
{
	var_194_string = "r2_house_2_01"; // 0x16b5 PushS
	add(var_194_string); // 0x16b6 ObjFunc
	var_195_string = "r2_house_2_02"; // 0x16b8 PushS
	add(var_195_string); // 0x16b9 ObjFunc
	var_196_string = "r2_house_2_03"; // 0x16bb PushS
	add(var_196_string); // 0x16bc ObjFunc
	var_197_string = "r2_house7_02"; // 0x16be PushS
	add(var_197_string); // 0x16bf ObjFunc
	var_198_string = "r2_house01_01"; // 0x16c1 PushS
	add(var_198_string); // 0x16c2 ObjFunc
	var_199_string = "r2_house7_01"; // 0x16c4 PushS
	add(var_199_string); // 0x16c5 ObjFunc
	var_200_string = "r2_house3_01_i2"; // 0x16c7 PushS
	add(var_200_string); // 0x16c8 ObjFunc
	var_201_string = "r2_house3_01"; // 0x16ca PushS
	add(var_201_string); // 0x16cb ObjFunc
	var_202_string = "r2_house3_02_i2"; // 0x16cd PushS
	add(var_202_string); // 0x16ce ObjFunc
	var_203_string = "r2_house3_02"; // 0x16d0 PushS
	add(var_203_string); // 0x16d1 ObjFunc
	var_204_string = "r2_house3_03_i2"; // 0x16d3 PushS
	add(var_204_string); // 0x16d4 ObjFunc
	var_205_string = "r2_house3_03"; // 0x16d6 PushS
	add(var_205_string); // 0x16d7 ObjFunc
	var_206_string = "r3_house7_01"; // 0x16d9 PushS
	add(var_206_string); // 0x16da ObjFunc
	var_207_string = "r3_house7_02"; // 0x16dc PushS
	add(var_207_string); // 0x16dd ObjFunc
	return 0; // 0x16df Return
}


func_9911(var_5975_int, var_5976_float)
{
	var_5977_int = 0; var_5978_int = 0; var_5979_int = 0; var_5980_float = 0; // 0x26b8 PushV
	var_5978_int = 529888; // 0x26b9 MovI
	var_5979_int = 529887; // 0x26ba MovI
	var_5980_float = var_5976_float; // 0x26bb Mov
	func_12278(var_5977_int, var_5978_int, var_5979_int, var_5980_float); // 0x26bc NEW_2
	var_5975_int = var_5977_int; // 0x26bd Mov
	return 0; // 0x26bf Return
}


func_4792(var_2407_int, var_2408_int, var_2409_object, var_2410_object, var_2411_object, var_2412_object)
{
	var_2413_int = 0; // 0x12b9 PushI
	var_2414_bool = var_2408_int == var_2413_int; // 0x12ba Eq
	if(var_2414_bool == 0) goto Label_4832; // 0x12bb JumpB
	var_2415_int = 0; var_2416_bool = 0; // 0x12bc PushV
	var_2415_int = 2; // 0x12bd MovI
	var_2416_bool = 1; // 0x12be MovB
	func_746(var_2415_int, var_2416_bool); // 0x12bf NEW_2
	var_2417_int = 0; var_2418_bool = 0; var_2419_int = 0; // 0x12c1 PushV
	var_2417_int = 2; // 0x12c2 MovI
	var_2418_bool = 1; // 0x12c3 MovB
	var_2419_int = 1; // 0x12c4 MovI
	func_763(var_2417_int, var_2418_bool, var_2419_int); // 0x12c5 NEW_2
	var_2420_int = 0; var_2421_int = 0; var_2422_object = Obj(); var_2423_object = Obj(); var_2424_object = Obj(); // 0x12c7 PushV
	var_2420_int = 2; // 0x12c8 MovI
	var_2421_int = var_2407_int; // 0x12c9 Mov
	var_2422_object = var_2409_object; // 0x12ca Mov
	var_2423_object = var_2410_object; // 0x12cb Mov
	var_2424_object = var_2411_object; // 0x12cc Mov
	func_591(var_2420_int, var_2421_int, var_2422_object, var_2423_object, var_2424_object); // 0x12cd NEW_2
	var_2425_object = Obj(); var_2426_int = 0; // 0x12cf PushV
	var_2425_object = var_2412_object; // 0x12d0 Mov
	var_2426_int = 1; // 0x12d1 MovI
	func_255(var_2426_int); // 0x12d2 NEW_2
	var_2427_int = 0; var_2428_bool = 0; var_2429_int = 0; // 0x12d4 PushV
	var_2427_int = 2; // 0x12d5 MovI
	var_2428_bool = 1; // 0x12d6 MovB
	var_2429_int = 5; // 0x12d7 MovI
	func_820(var_2427_int, var_2428_bool, var_2429_int); // 0x12d8 NEW_2
	var_2430_int = 0; var_2431_bool = 0; var_2432_int = 0; // 0x12da PushV
	var_2430_int = 2; // 0x12db MovI
	var_2431_bool = 0; // 0x12dc MovB
	var_2432_int = 5; // 0x12dd MovI
	func_882(var_2430_int, var_2431_bool, var_2432_int); // 0x12de NEW_2
	
Label_4832:
	var_2433_int = 0; var_2434_bool = 0; // 0x12e0 PushV
	var_2433_int = 2; // 0x12e1 MovI
	var_2434_bool = 0; // 0x12e2 MovB
	func_729(var_2433_int, var_2434_bool); // 0x12e3 NEW_2
	var_2435_int = 0; var_2436_int = 0; var_2437_int = 0; // 0x12e5 PushV
	var_2435_int = 2; // 0x12e6 MovI
	var_2436_int = var_2407_int; // 0x12e7 Mov
	var_2437_int = var_2408_int; // 0x12e8 Mov
	func_2894(var_2435_int, var_2436_int, var_2437_int); // 0x12e9 NEW_2
	return 0; // 0x12eb Return
}


func_11964(var_5639_bool)
{
	var_5642_int = 0; var_5643_string = ""; // 0x2ebd PushV
	var_5643_string = "b2AndreiVisit"; // 0x2ebe MovS
	func_106(var_5642_int, var_5643_string); // 0x2ebf NEW_2
	var_5644_int = 0; // 0x2ec1 PushI
	var_5645_bool = var_5642_int != var_5644_int; // 0x2ec2 Neq
	if(var_5645_bool == 0) goto Label_11974; // 0x2ec3 JumpB
	var_5639_bool = 1; // 0x2ec4 MovB
	return 0; // 0x2ec5 Return
	
Label_11974:
	var_5639_bool = 0; // 0x2ec6 MovB
	return 0; // 0x2ec7 Return
}


func_9920(var_4771_int, var_4772_float)
{
	var_4773_int = 0; var_4774_int = 0; var_4775_int = 0; var_4776_float = 0; // 0x26c1 PushV
	var_4774_int = 522099; // 0x26c2 MovI
	var_4775_int = 522098; // 0x26c3 MovI
	var_4776_float = var_4772_float; // 0x26c4 Mov
	func_12278(var_4773_int, var_4774_int, var_4775_int, var_4776_float); // 0x26c5 NEW_2
	var_4771_int = var_4773_int; // 0x26c6 Mov
	return 0; // 0x26c8 Return
}


func_8898()
{
	var_417_float = 0; var_418_int = 0; var_419_int = 0; var_420_float = 0; var_421_int = 0; var_422_object = Obj(); var_423_object = Obj(); var_424_float = 0; var_425_int = 0; var_426_int = 0; var_427_float = 0; var_428_int = 0; var_429_object = Obj(); var_430_object = Obj(); // 0x22c2 PushV
	GetGameTime(var_424_float); // 0x22c3 Func
	var_425_int = 1; // 0x22c5 MovI
	
Label_8902:
	var_431_int = 12; // 0x22c6 PushI
	var_432_bool = var_425_int < var_431_int; // 0x22c7 LT
	if(var_432_bool == 0) goto Label_8914; // 0x22c8 JumpB
	var_433_int = 16384; // 0x22c9 PushI
	var_434_int = var_433_int + var_425_int; // 0x22ca Add
	var_435_int = 24; // 0x22cb PushI
	var_436_float = var_435_int * var_425_int; // 0x22cc Mult
	SetTimeEvent(var_434_int, var_436_float); // 0x22cd Func
	var_437_int = 1; // 0x22cf PushI
	var_425_int = var_425_int + var_437_int; // 0x22d0 Add2
	goto Label_8902; // 0x22d1 Jump
	
Label_8914:
	var_426_int = 0; // 0x22d2 MovI
	
Label_8915:
	var_438_int = 288; // 0x22d3 PushI
	var_439_bool = var_426_int < var_438_int; // 0x22d4 LT
	if(var_439_bool == 0) goto Label_8929; // 0x22d5 JumpB
	var_427_float = var_426_int; // 0x22d6 Mov
	var_440_bool = var_427_float < var_424_float; // 0x22d7 LT
	if(var_440_bool == 0) goto Label_8922; // 0x22d8 JumpB
	goto Label_8926; // 0x22d9 Jump
	
Label_8926:
	var_441_int = 1; // 0x22de PushI
	var_426_int = var_426_int + var_441_int; // 0x22df Add2
	goto Label_8915; // 0x22e0 Jump
	
Label_8922:
	var_442_int = 32768; // 0x22da PushI
	var_443_int = var_442_int + var_426_int; // 0x22db Add
	SetTimeEvent(var_443_int, var_427_float); // 0x22dc Func
	
Label_8929:
	var_428_int = 0; // 0x22e1 MovI
	
Label_8930:
	var_444_int = 16; // 0x22e2 PushI
	var_445_bool = var_428_int < var_444_int; // 0x22e3 LT
	if(var_445_bool == 0) goto Label_8948; // 0x22e4 JumpB
	var_446_string = ""; var_447_int = 0; // 0x22e5 PushV
	var_447_int = var_428_int; // 0x22e6 Mov
	func_249(var_446_string, var_447_int); // 0x22e7 NEW_2
	var_451_int = 0; // 0x22e9 PushI
	SetVariable(var_446_string, var_451_int); // 0x22ea Func
	var_452_int = 0; var_453_bool = 0; // 0x22ec PushV
	var_452_int = var_428_int; // 0x22ed Mov
	var_453_bool = 0; // 0x22ee MovB
	func_746(var_452_int, var_453_bool); // 0x22ef NEW_2
	var_463_int = 1; // 0x22f1 PushI
	var_428_int = var_428_int + var_463_int; // 0x22f2 Add2
	goto Label_8930; // 0x22f3 Jump
	
Label_8948:
	var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_int = 0; // 0x22f4 PushV
	var_464_int = 0; // 0x22f5 MovI
	var_468_int = 24; // 0x22f6 PushI
	var_465_int = var_424_float % var_468_int; // 0x22f7 Mod2
	var_466_int = 0; // 0x22f8 MovI
	var_469_int = 24; // 0x22f9 PushI
	var_467_int = var_424_float % var_469_int; // 0x22fa Mod2
	func_8981(var_464_int, var_465_int, var_466_int, var_467_int); // 0x22fb NEW_2
	var_4356_string = "dt_house_1_07"; // 0x22fd PushS
	FindActor(var_429_object, var_4356_string); // 0x22fe Func
	var_4357_int = 200; // 0x2300 PushI
	var_4358_bool = 0; // 0x2301 PushB
	EnableSubset(var_4357_int, var_4358_bool); // 0x2302 ObjFunc
	GetMainOutdoorScene(var_430_object); // 0x2304 Func
	var_4359_int = 0; // 0x2306 PushI
	var_4360_bool = 0; // 0x2307 PushV
	var_4360_bool = 1; // 0x2308 MovB
	var_4361_int = 7; // 0x2309 PushI
	var_4362_bool = var_424_float < var_4361_int; // 0x230a LT
	if(var_4362_bool == 0) goto Label_8976; // 0x230b JumpB
	var_4363_int = 20; // 0x230c PushI
	var_4364_bool = var_424_float >= var_4363_int; // 0x230d GE
	if(var_4364_bool == 0) goto Label_8976; // 0x230e JumpB
	var_4360_bool = 0; // 0x230f MovB
	
Label_8976:
	SwitchLights(var_4359_int, var_4360_bool); // 0x2310 ObjFunc
	return 14; // 0x2312 Return
}


func_10951()
{
	var_6285_object = Obj(); var_6286_object = Obj(); var_6287_object = Obj(); var_6288_object = Obj(); // 0x2ac7 PushV
	var_6289_object = Obj(); // 0x2ac8 PushV
	func_12286(var_6289_object); // 0x2ac9 NEW_2
	var_6287_object = var_6289_object; // 0x2aca Mov
	var_6290_string = "b4q01DankoGotoLara"; // 0x2acc PushS
	FindMark(var_6288_object, var_6290_string); // 0x2acd ObjFunc
	var_6291_object = var_6288_object; // 0x2acf Push
	if(var_6291_object == 0) goto Label_10963; // 0x2ad0 JumpB
	Remove(); // 0x2ad1 ObjFunc
	
Label_10963:
	var_6292_string = "b4q01DankoGotoLaraSelf"; // 0x2ad3 PushS
	FindMark(var_6288_object, var_6292_string); // 0x2ad4 ObjFunc
	var_6293_object = var_6288_object; // 0x2ad6 Push
	if(var_6293_object == 0) goto Label_10970; // 0x2ad7 JumpB
	Remove(); // 0x2ad8 ObjFunc
	
Label_10970:
	var_6294_string = "b4q01LaraGotoRubin"; // 0x2ada PushS
	FindMark(var_6288_object, var_6294_string); // 0x2adb ObjFunc
	var_6295_object = var_6288_object; // 0x2add Push
	if(var_6295_object == 0) goto Label_10977; // 0x2ade JumpB
	Remove(); // 0x2adf ObjFunc
	
Label_10977:
	var_6296_string = "b4Spi4kaMapMark"; // 0x2ae1 PushS
	FindMark(var_6288_object, var_6296_string); // 0x2ae2 ObjFunc
	var_6297_object = var_6288_object; // 0x2ae4 Push
	if(var_6297_object == 0) goto Label_10984; // 0x2ae5 JumpB
	Remove(); // 0x2ae6 ObjFunc
	
Label_10984:
	var_6298_bool = 0; var_6299_int = 0; // 0x2ae8 PushV
	var_6299_int = 213; // 0x2ae9 MovI
	func_12261(var_6298_bool, var_6299_int); // 0x2aea NEW_2
	var_6300_bool = 0; var_6301_int = 0; // 0x2aec PushV
	var_6301_int = 216; // 0x2aed MovI
	func_12261(var_6300_bool, var_6301_int); // 0x2aee NEW_2
	var_6302_bool = 0; var_6303_int = 0; // 0x2af0 PushV
	var_6303_int = 527; // 0x2af1 MovI
	func_12261(var_6302_bool, var_6303_int); // 0x2af2 NEW_2
	return 4; // 0x2af4 Return
}


func_11976(var_5737_bool)
{
	var_5740_int = 0; var_5741_string = ""; // 0x2ec9 PushV
	var_5741_string = "b4Spi4kaVisit"; // 0x2eca MovS
	func_106(var_5740_int, var_5741_string); // 0x2ecb NEW_2
	var_5742_int = 0; // 0x2ecd PushI
	var_5743_bool = var_5740_int != var_5742_int; // 0x2ece Neq
	if(var_5743_bool == 0) goto Label_11986; // 0x2ecf JumpB
	var_5737_bool = 1; // 0x2ed0 MovB
	return 0; // 0x2ed1 Return
	
Label_11986:
	var_5737_bool = 0; // 0x2ed2 MovB
	return 0; // 0x2ed3 Return
}


func_9929(var_5828_int, var_5829_float)
{
	var_5830_int = 0; var_5831_int = 0; var_5832_int = 0; var_5833_float = 0; // 0x26ca PushV
	var_5831_int = 529892; // 0x26cb MovI
	var_5832_int = 529891; // 0x26cc MovI
	var_5833_float = var_5829_float; // 0x26cd Mov
	func_12278(var_5830_int, var_5831_int, var_5832_int, var_5833_float); // 0x26ce NEW_2
	var_5828_int = var_5830_int; // 0x26cf Mov
	return 0; // 0x26d1 Return
}


func_9938(var_5871_int, var_5872_float)
{
	var_5873_int = 0; var_5874_int = 0; var_5875_int = 0; var_5876_float = 0; // 0x26d3 PushV
	var_5874_int = 530533; // 0x26d4 MovI
	var_5875_int = 530532; // 0x26d5 MovI
	var_5876_float = var_5872_float; // 0x26d6 Mov
	func_12278(var_5873_int, var_5874_int, var_5875_int, var_5876_float); // 0x26d7 NEW_2
	var_5871_int = var_5873_int; // 0x26d8 Mov
	return 0; // 0x26da Return
}


func_11988(var_5500_bool)
{
	var_5503_int = 0; var_5504_string = ""; // 0x2ed5 PushV
	var_5504_string = "b10KapellaVisit"; // 0x2ed6 MovS
	func_106(var_5503_int, var_5504_string); // 0x2ed7 NEW_2
	var_5505_int = 0; // 0x2ed9 PushI
	var_5506_bool = var_5503_int != var_5505_int; // 0x2eda Neq
	if(var_5506_bool == 0) goto Label_11998; // 0x2edb JumpB
	var_5500_bool = 1; // 0x2edc MovB
	return 0; // 0x2edd Return
	
Label_11998:
	var_5500_bool = 0; // 0x2ede MovB
	return 0; // 0x2edf Return
}


func_3797(var_3564_int, var_3565_int, var_3566_int)
{
	var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; var_3574_int = 0; // 0xed5 PushV
	var_3575_bool = 0; // 0xed6 PushV
	var_3575_bool = 0; // 0xed7 MovB
	var_3576_int = 8; // 0xed8 PushI
	var_3577_bool = var_3566_int > var_3576_int; // 0xed9 GT
	if(var_3577_bool == 0) goto Label_3807; // 0xeda JumpB
	var_3578_int = 21; // 0xedb PushI
	var_3579_bool = var_3566_int < var_3578_int; // 0xedc LT
	if(var_3579_bool == 0) goto Label_3807; // 0xedd JumpB
	var_3575_bool = 1; // 0xede MovB
	
Label_3807:
	if(var_3575_bool == 0) goto Label_3884; // 0xedf JumpB
	var_3580_int = 0; var_3581_string = ""; var_3582_string = ""; var_3583_int = 0; // 0xee0 PushV
	var_3580_int = var_3564_int; // 0xee1 Mov
	var_3581_string = "pers_rat"; // 0xee2 MovS
	var_3582_string = "rat.xml"; // 0xee3 MovS
	var_3583_int = 2; // 0xee4 MovI
	func_453(var_3580_int, var_3581_string, var_3582_string, var_3583_int); // 0xee5 NEW_2
	var_3584_int = 0; var_3585_string = ""; var_3586_string = ""; var_3587_int = 0; // 0xee7 PushV
	var_3584_int = var_3564_int; // 0xee8 Mov
	var_3585_string = "pers_alkash"; // 0xee9 MovS
	var_3586_string = "alkash.xml"; // 0xeea MovS
	var_3587_int = 2; // 0xeeb MovI
	func_453(var_3584_int, var_3585_string, var_3586_string, var_3587_int); // 0xeec NEW_2
	var_3588_int = 0; var_3589_string = ""; var_3590_string = ""; var_3591_int = 0; // 0xeee PushV
	var_3588_int = var_3564_int; // 0xeef Mov
	var_3589_string = "pers_dohodyaga"; // 0xef0 MovS
	var_3590_string = "dohodyaga.xml"; // 0xef1 MovS
	var_3591_int = 1; // 0xef2 MovI
	func_453(var_3588_int, var_3589_string, var_3590_string, var_3591_int); // 0xef3 NEW_2
	var_3592_int = 2; // 0xef5 PushI
	var_3593_float = 0; var_3594_int = 0; // 0xef6 PushV
	var_3594_int = var_3565_int; // 0xef7 Mov
	func_1115(var_3593_float, var_3594_int); // 0xef8 NEW_2
	var_3571_int = var_3592_int * var_3593_float; // 0xefa Mult2
	var_3595_int = var_3571_int; // 0xefb Push
	if(var_3595_int == 0) goto Label_3844; // 0xefc JumpB
	var_3596_int = 0; var_3597_string = ""; var_3598_string = ""; var_3599_int = 0; // 0xefd PushV
	var_3596_int = var_3564_int; // 0xefe Mov
	var_3597_string = "pers_grabitel"; // 0xeff MovS
	var_3598_string = "grabitel.xml"; // 0xf00 MovS
	var_3599_int = var_3571_int; // 0xf01 Mov
	func_453(var_3596_int, var_3597_string, var_3598_string, var_3599_int); // 0xf02 NEW_2
	
Label_3844:
	var_3600_int = 1; // 0xf04 PushI
	var_3601_int = var_3565_int + var_3600_int; // 0xf05 Add
	var_3602_int = 2; // 0xf06 PushI
	var_3603_bool = var_3601_int >= var_3602_int; // 0xf07 GE
	if(var_3603_bool == 0) goto Label_3868; // 0xf08 JumpB
	var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0; // 0xf09 PushV
	var_3604_int = var_3564_int; // 0xf0a Mov
	var_3605_string = "pers_patrool"; // 0xf0b MovS
	var_3606_string = "patrol.xml"; // 0xf0c MovS
	var_3607_int = 2; // 0xf0d MovI
	func_453(var_3604_int, var_3605_string, var_3606_string, var_3607_int); // 0xf0e NEW_2
	var_3608_bool = 0; var_3609_int = 0; // 0xf10 PushV
	var_3609_int = var_3565_int; // 0xf11 Mov
	func_1322(var_3608_bool, var_3609_int); // 0xf12 NEW_2
	if(var_3608_bool == 0) goto Label_3868; // 0xf14 JumpB
	var_3610_int = 0; var_3611_string = ""; var_3612_string = ""; var_3613_int = 0; // 0xf15 PushV
	var_3610_int = var_3564_int; // 0xf16 Mov
	var_3611_string = "pers_soldat_hand"; // 0xf17 MovS
	var_3612_string = "soldier_patrol.xml"; // 0xf18 MovS
	var_3613_int = 1; // 0xf19 MovI
	func_453(var_3610_int, var_3611_string, var_3612_string, var_3613_int); // 0xf1a NEW_2
	
Label_3868:
	var_3614_int = 1; // 0xf1c PushI
	var_3615_float = 0; var_3616_int = 0; // 0xf1d PushV
	var_3616_int = var_3565_int; // 0xf1e Mov
	func_1205(var_3615_float, var_3616_int); // 0xf1f NEW_2
	var_3572_int = var_3614_int * var_3615_float; // 0xf21 Mult2
	var_3617_int = var_3572_int; // 0xf22 Push
	if(var_3617_int == 0) goto Label_3883; // 0xf23 JumpB
	var_3618_int = 0; var_3619_string = ""; var_3620_string = ""; var_3621_int = 0; // 0xf24 PushV
	var_3618_int = var_3564_int; // 0xf25 Mov
	var_3619_string = "pers_bomber"; // 0xf26 MovS
	var_3620_string = "bomber.xml"; // 0xf27 MovS
	var_3621_int = var_3572_int; // 0xf28 Mov
	func_453(var_3618_int, var_3619_string, var_3620_string, var_3621_int); // 0xf29 NEW_2
	
Label_3883:
	goto Label_3959; // 0xf2b Jump
	
Label_3959:
	var_3622_bool = 0; var_3623_int = 0; var_3624_int = 0; // 0xf77 PushV
	var_3623_int = var_3565_int; // 0xf78 Mov
	var_3624_int = var_3566_int; // 0xf79 Mov
	func_1295(var_3622_bool, var_3623_int, var_3624_int); // 0xf7a NEW_2
	if(var_3622_bool == 0) goto Label_3972; // 0xf7c JumpB
	var_3625_int = 0; var_3626_string = ""; var_3627_string = ""; var_3628_int = 0; // 0xf7d PushV
	var_3625_int = var_3564_int; // 0xf7e Mov
	var_3626_string = "pers_soldat"; // 0xf7f MovS
	var_3627_string = "soldier_marauder.xml"; // 0xf80 MovS
	var_3628_int = 2; // 0xf81 MovI
	func_453(var_3625_int, var_3626_string, var_3627_string, var_3628_int); // 0xf82 NEW_2
	
Label_3972:
	var_3629_bool = 0; var_3630_int = 0; // 0xf84 PushV
	var_3630_int = var_3565_int; // 0xf85 Mov
	func_1322(var_3629_bool, var_3630_int); // 0xf86 NEW_2
	if(var_3629_bool == 0) goto Label_3984; // 0xf88 JumpB
	var_3631_int = 0; var_3632_string = ""; var_3633_string = ""; var_3634_int = 0; // 0xf89 PushV
	var_3631_int = var_3564_int; // 0xf8a Mov
	var_3632_string = "pers_sanitar"; // 0xf8b MovS
	var_3633_string = "sanitar.xml"; // 0xf8c MovS
	var_3634_int = 1; // 0xf8d MovI
	func_453(var_3631_int, var_3632_string, var_3633_string, var_3634_int); // 0xf8e NEW_2
	
Label_3984:
	return 8; // 0xf90 Return
	
Label_3884:
	var_3635_int = 0; var_3636_string = ""; var_3637_string = ""; var_3638_int = 0; // 0xf2c PushV
	var_3635_int = var_3564_int; // 0xf2d Mov
	var_3636_string = "pers_rat"; // 0xf2e MovS
	var_3637_string = "rat.xml"; // 0xf2f MovS
	var_3638_int = 4; // 0xf30 MovI
	func_453(var_3635_int, var_3636_string, var_3637_string, var_3638_int); // 0xf31 NEW_2
	var_3639_int = 0; var_3640_string = ""; var_3641_string = ""; var_3642_int = 0; // 0xf33 PushV
	var_3639_int = var_3564_int; // 0xf34 Mov
	var_3640_string = "pers_alkash"; // 0xf35 MovS
	var_3641_string = "alkash.xml"; // 0xf36 MovS
	var_3642_int = 1; // 0xf37 MovI
	func_453(var_3639_int, var_3640_string, var_3641_string, var_3642_int); // 0xf38 NEW_2
	var_3643_int = 0; var_3644_string = ""; var_3645_string = ""; var_3646_int = 0; // 0xf3a PushV
	var_3643_int = var_3564_int; // 0xf3b Mov
	var_3644_string = "pers_dohodyaga"; // 0xf3c MovS
	var_3645_string = "dohodyaga.xml"; // 0xf3d MovS
	var_3646_int = 1; // 0xf3e MovI
	func_453(var_3643_int, var_3644_string, var_3645_string, var_3646_int); // 0xf3f NEW_2
	var_3647_int = 3; // 0xf41 PushI
	var_3648_float = 0; var_3649_int = 0; // 0xf42 PushV
	var_3649_int = var_3565_int; // 0xf43 Mov
	func_1115(var_3648_float, var_3649_int); // 0xf44 NEW_2
	var_3573_int = var_3647_int * var_3648_float; // 0xf46 Mult2
	var_3650_int = var_3573_int; // 0xf47 Push
	if(var_3650_int == 0) goto Label_3920; // 0xf48 JumpB
	var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0; // 0xf49 PushV
	var_3651_int = var_3564_int; // 0xf4a Mov
	var_3652_string = "pers_grabitel"; // 0xf4b MovS
	var_3653_string = "grabitel.xml"; // 0xf4c MovS
	var_3654_int = var_3573_int; // 0xf4d Mov
	func_453(var_3651_int, var_3652_string, var_3653_string, var_3654_int); // 0xf4e NEW_2
	
Label_3920:
	var_3655_int = 1; // 0xf50 PushI
	var_3656_int = var_3565_int + var_3655_int; // 0xf51 Add
	var_3657_int = 2; // 0xf52 PushI
	var_3658_bool = var_3656_int >= var_3657_int; // 0xf53 GE
	if(var_3658_bool == 0) goto Label_3944; // 0xf54 JumpB
	var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0; // 0xf55 PushV
	var_3659_int = var_3564_int; // 0xf56 Mov
	var_3660_string = "pers_patrool"; // 0xf57 MovS
	var_3661_string = "patrol.xml"; // 0xf58 MovS
	var_3662_int = 1; // 0xf59 MovI
	func_453(var_3659_int, var_3660_string, var_3661_string, var_3662_int); // 0xf5a NEW_2
	var_3663_bool = 0; var_3664_int = 0; // 0xf5c PushV
	var_3664_int = var_3565_int; // 0xf5d Mov
	func_1322(var_3663_bool, var_3664_int); // 0xf5e NEW_2
	if(var_3663_bool == 0) goto Label_3944; // 0xf60 JumpB
	var_3665_int = 0; var_3666_string = ""; var_3667_string = ""; var_3668_int = 0; // 0xf61 PushV
	var_3665_int = var_3564_int; // 0xf62 Mov
	var_3666_string = "pers_soldat_hand"; // 0xf63 MovS
	var_3667_string = "soldier_patrol.xml"; // 0xf64 MovS
	var_3668_int = 1; // 0xf65 MovI
	func_453(var_3665_int, var_3666_string, var_3667_string, var_3668_int); // 0xf66 NEW_2
	
Label_3944:
	var_3669_int = 1; // 0xf68 PushI
	var_3670_float = 0; var_3671_int = 0; // 0xf69 PushV
	var_3671_int = var_3565_int; // 0xf6a Mov
	func_1205(var_3670_float, var_3671_int); // 0xf6b NEW_2
	var_3574_int = var_3669_int * var_3670_float; // 0xf6d Mult2
	var_3672_int = var_3574_int; // 0xf6e Push
	if(var_3672_int == 0) goto Label_3959; // 0xf6f JumpB
	var_3673_int = 0; var_3674_string = ""; var_3675_string = ""; var_3676_int = 0; // 0xf70 PushV
	var_3673_int = var_3564_int; // 0xf71 Mov
	var_3674_string = "pers_bomber"; // 0xf72 MovS
	var_3675_string = "bomber.xml"; // 0xf73 MovS
	var_3676_int = var_3574_int; // 0xf74 Mov
	func_453(var_3673_int, var_3674_string, var_3675_string, var_3676_int); // 0xf75 NEW_2
}


func_729(var_737_int, var_738_bool)
{
	var_739_object = Obj(); var_740_int = 0; var_741_object = Obj(); var_742_int = 0; // 0x2d9 PushV
	GetMainOutdoorScene(var_741_object); // 0x2da Func
	var_743_bool = var_741_object == 0; // 0x2dc NullEq
	if(var_743_bool == 0) goto Label_738; // 0x2dd JumpB
	var_744_string = "City manager: Can't find main outdoor scene"; // 0x2de PushS
	Trace(var_744_string); // 0x2df Func
	return 4; // 0x2e1 Return
	
Label_738:
	var_745_int = 1; // 0x2e2 PushI
	var_742_int = var_737_int + var_745_int; // 0x2e3 Add2
	var_746_int = 100; // 0x2e4 PushI
	var_747_bool = 1; // 0x2e5 PushB
	EnableSubsets(var_742_int, var_746_int, var_738_bool, var_747_bool); // 0x2e6 ObjFunc
	return 4; // 0x2e8 Return
}


func_9947(var_5573_int, var_5574_float)
{
	var_5575_int = 0; var_5576_int = 0; var_5577_int = 0; var_5578_float = 0; // 0x26dc PushV
	var_5576_int = 530572; // 0x26dd MovI
	var_5577_int = 530571; // 0x26de MovI
	var_5578_float = var_5574_float; // 0x26df Mov
	func_12278(var_5575_int, var_5576_int, var_5577_int, var_5578_float); // 0x26e0 NEW_2
	var_5573_int = var_5575_int; // 0x26e1 Mov
	return 0; // 0x26e3 Return
}


func_6880(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object)
{
	var_1742_int = 0; // 0x1ae1 PushI
	var_1743_bool = var_1737_int == var_1742_int; // 0x1ae2 Eq
	if(var_1743_bool == 0) goto Label_6920; // 0x1ae3 JumpB
	var_1744_int = 0; var_1745_bool = 0; // 0x1ae4 PushV
	var_1744_int = 13; // 0x1ae5 MovI
	var_1745_bool = 0; // 0x1ae6 MovB
	func_746(var_1744_int, var_1745_bool); // 0x1ae7 NEW_2
	var_1746_int = 0; var_1747_bool = 0; var_1748_int = 0; // 0x1ae9 PushV
	var_1746_int = 13; // 0x1aea MovI
	var_1747_bool = 0; // 0x1aeb MovB
	var_1748_int = 1; // 0x1aec MovI
	func_763(var_1746_int, var_1747_bool, var_1748_int); // 0x1aed NEW_2
	var_1749_int = 0; var_1750_int = 0; var_1751_object = Obj(); var_1752_object = Obj(); var_1753_object = Obj(); // 0x1aef PushV
	var_1749_int = 13; // 0x1af0 MovI
	var_1750_int = var_1736_int; // 0x1af1 Mov
	var_1751_object = var_1738_object; // 0x1af2 Mov
	var_1752_object = var_1739_object; // 0x1af3 Mov
	var_1753_object = var_1740_object; // 0x1af4 Mov
	func_572(var_1750_int, var_1751_object, var_1752_object, var_1753_object); // 0x1af5 NEW_2
	var_1754_object = Obj(); var_1755_int = 0; // 0x1af7 PushV
	var_1754_object = var_1741_object; // 0x1af8 Mov
	var_1755_int = 0; // 0x1af9 MovI
	func_255(var_1755_int); // 0x1afa NEW_2
	var_1756_int = 0; var_1757_bool = 0; var_1758_int = 0; // 0x1afc PushV
	var_1756_int = 13; // 0x1afd MovI
	var_1757_bool = 0; // 0x1afe MovB
	var_1758_int = 4; // 0x1aff MovI
	func_820(var_1756_int, var_1757_bool, var_1758_int); // 0x1b00 NEW_2
	var_1759_int = 0; var_1760_bool = 0; var_1761_int = 0; // 0x1b02 PushV
	var_1759_int = 13; // 0x1b03 MovI
	var_1760_bool = 0; // 0x1b04 MovB
	var_1761_int = 4; // 0x1b05 MovI
	func_882(var_1759_int, var_1760_bool, var_1761_int); // 0x1b06 NEW_2
	
Label_6920:
	var_1762_int = 0; var_1763_int = 0; // 0x1b08 PushV
	var_1762_int = 13; // 0x1b09 MovI
	var_1763_int = var_1737_int; // 0x1b0a Mov
	func_1000(var_1762_int, var_1763_int); // 0x1b0b NEW_2
	var_1764_int = 0; var_1765_int = 0; var_1766_int = 0; // 0x1b0d PushV
	var_1764_int = 13; // 0x1b0e MovI
	var_1765_int = var_1736_int; // 0x1b0f Mov
	var_1766_int = var_1737_int; // 0x1b10 Mov
	func_1574(var_1764_int, var_1765_int, var_1766_int); // 0x1b11 NEW_2
	return 0; // 0x1b13 Return
}


func_5856(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object)
{
	var_1577_int = 0; // 0x16e1 PushI
	var_1578_bool = var_1572_int == var_1577_int; // 0x16e2 Eq
	if(var_1578_bool == 0) goto Label_5896; // 0x16e3 JumpB
	var_1579_int = 0; var_1580_bool = 0; // 0x16e4 PushV
	var_1579_int = 8; // 0x16e5 MovI
	var_1580_bool = 0; // 0x16e6 MovB
	func_746(var_1579_int, var_1580_bool); // 0x16e7 NEW_2
	var_1581_int = 0; var_1582_bool = 0; var_1583_int = 0; // 0x16e9 PushV
	var_1581_int = 8; // 0x16ea MovI
	var_1582_bool = 0; // 0x16eb MovB
	var_1583_int = 1; // 0x16ec MovI
	func_763(var_1581_int, var_1582_bool, var_1583_int); // 0x16ed NEW_2
	var_1584_int = 0; var_1585_int = 0; var_1586_object = Obj(); var_1587_object = Obj(); var_1588_object = Obj(); // 0x16ef PushV
	var_1584_int = 8; // 0x16f0 MovI
	var_1585_int = var_1571_int; // 0x16f1 Mov
	var_1586_object = var_1573_object; // 0x16f2 Mov
	var_1587_object = var_1574_object; // 0x16f3 Mov
	var_1588_object = var_1575_object; // 0x16f4 Mov
	func_572(var_1585_int, var_1586_object, var_1587_object, var_1588_object); // 0x16f5 NEW_2
	var_1589_object = Obj(); var_1590_int = 0; // 0x16f7 PushV
	var_1589_object = var_1576_object; // 0x16f8 Mov
	var_1590_int = 0; // 0x16f9 MovI
	func_255(var_1590_int); // 0x16fa NEW_2
	var_1591_int = 0; var_1592_bool = 0; var_1593_int = 0; // 0x16fc PushV
	var_1591_int = 8; // 0x16fd MovI
	var_1592_bool = 0; // 0x16fe MovB
	var_1593_int = 4; // 0x16ff MovI
	func_820(var_1591_int, var_1592_bool, var_1593_int); // 0x1700 NEW_2
	var_1594_int = 0; var_1595_bool = 0; var_1596_int = 0; // 0x1702 PushV
	var_1594_int = 8; // 0x1703 MovI
	var_1595_bool = 0; // 0x1704 MovB
	var_1596_int = 4; // 0x1705 MovI
	func_882(var_1594_int, var_1595_bool, var_1596_int); // 0x1706 NEW_2
	
Label_5896:
	var_1597_int = 0; var_1598_int = 0; // 0x1708 PushV
	var_1597_int = 8; // 0x1709 MovI
	var_1598_int = var_1572_int; // 0x170a Mov
	func_933(var_1597_int, var_1598_int); // 0x170b NEW_2
	var_1599_int = 0; var_1600_int = 0; var_1601_int = 0; // 0x170d PushV
	var_1599_int = 8; // 0x170e MovI
	var_1600_int = var_1571_int; // 0x170f Mov
	var_1601_int = var_1572_int; // 0x1710 Mov
	func_1574(var_1599_int, var_1600_int, var_1601_int); // 0x1711 NEW_2
	return 0; // 0x1713 Return
}


func_12000(var_5669_bool)
{
	var_5672_int = 0; var_5673_string = ""; // 0x2ee1 PushV
	var_5673_string = "b9BlockVisit"; // 0x2ee2 MovS
	func_106(var_5672_int, var_5673_string); // 0x2ee3 NEW_2
	var_5674_int = 0; // 0x2ee5 PushI
	var_5675_bool = var_5672_int != var_5674_int; // 0x2ee6 Neq
	if(var_5675_bool == 0) goto Label_12010; // 0x2ee7 JumpB
	var_5669_bool = 1; // 0x2ee8 MovB
	return 0; // 0x2ee9 Return
	
Label_12010:
	var_5669_bool = 0; // 0x2eea MovB
	return 0; // 0x2eeb Return
}


func_9956(var_4892_int, var_4893_float)
{
	var_4894_int = 0; var_4895_int = 0; var_4896_int = 0; var_4897_float = 0; // 0x26e5 PushV
	var_4895_int = 522713; // 0x26e6 MovI
	var_4896_int = 522712; // 0x26e7 MovI
	var_4897_float = var_4893_float; // 0x26e8 Mov
	func_12278(var_4894_int, var_4895_int, var_4896_int, var_4897_float); // 0x26e9 NEW_2
	var_4892_int = var_4894_int; // 0x26ea Mov
	return 0; // 0x26ec Return
}


func_746(var_452_int, var_453_bool)
{
	var_454_object = Obj(); var_455_int = 0; var_456_object = Obj(); var_457_int = 0; // 0x2ea PushV
	GetMainOutdoorScene(var_456_object); // 0x2eb Func
	var_458_bool = var_456_object == 0; // 0x2ed NullEq
	if(var_458_bool == 0) goto Label_755; // 0x2ee JumpB
	var_459_string = "City manager: Can't find main outdoor scene"; // 0x2ef PushS
	Trace(var_459_string); // 0x2f0 Func
	return 4; // 0x2f2 Return
	
Label_755:
	var_460_int = 1; // 0x2f3 PushI
	var_457_int = var_452_int + var_460_int; // 0x2f4 Add2
	var_461_int = 200; // 0x2f5 PushI
	var_462_bool = 0; // 0x2f6 PushB
	EnableSubsets(var_457_int, var_461_int, var_453_bool, var_462_bool); // 0x2f7 ObjFunc
	return 4; // 0x2f9 Return
}


func_4844(var_3536_int, var_3537_int, var_3538_object, var_3539_object, var_3540_object, var_3541_object)
{
	var_3542_int = 0; // 0x12ed PushI
	var_3543_bool = var_3537_int == var_3542_int; // 0x12ee Eq
	if(var_3543_bool == 0) goto Label_4884; // 0x12ef JumpB
	var_3544_int = 0; var_3545_bool = 0; // 0x12f0 PushV
	var_3544_int = 2; // 0x12f1 MovI
	var_3545_bool = 0; // 0x12f2 MovB
	func_746(var_3544_int, var_3545_bool); // 0x12f3 NEW_2
	var_3546_int = 0; var_3547_bool = 0; var_3548_int = 0; // 0x12f5 PushV
	var_3546_int = 2; // 0x12f6 MovI
	var_3547_bool = 0; // 0x12f7 MovB
	var_3548_int = 1; // 0x12f8 MovI
	func_763(var_3546_int, var_3547_bool, var_3548_int); // 0x12f9 NEW_2
	var_3549_int = 0; var_3550_int = 0; var_3551_object = Obj(); var_3552_object = Obj(); var_3553_object = Obj(); // 0x12fb PushV
	var_3549_int = 2; // 0x12fc MovI
	var_3550_int = var_3536_int; // 0x12fd Mov
	var_3551_object = var_3538_object; // 0x12fe Mov
	var_3552_object = var_3539_object; // 0x12ff Mov
	var_3553_object = var_3540_object; // 0x1300 Mov
	func_670(var_3549_int, var_3550_int, var_3551_object, var_3552_object, var_3553_object); // 0x1301 NEW_2
	var_3554_object = Obj(); var_3555_int = 0; // 0x1303 PushV
	var_3554_object = var_3541_object; // 0x1304 Mov
	var_3555_int = 2; // 0x1305 MovI
	func_255(var_3555_int); // 0x1306 NEW_2
	var_3556_int = 0; var_3557_bool = 0; var_3558_int = 0; // 0x1308 PushV
	var_3556_int = 2; // 0x1309 MovI
	var_3557_bool = 0; // 0x130a MovB
	var_3558_int = 5; // 0x130b MovI
	func_820(var_3556_int, var_3557_bool, var_3558_int); // 0x130c NEW_2
	var_3559_int = 0; var_3560_bool = 0; var_3561_int = 0; // 0x130e PushV
	var_3559_int = 2; // 0x130f MovI
	var_3560_bool = 1; // 0x1310 MovB
	var_3561_int = 5; // 0x1311 MovI
	func_882(var_3559_int, var_3560_bool, var_3561_int); // 0x1312 NEW_2
	
Label_4884:
	var_3562_int = 0; var_3563_bool = 0; // 0x1314 PushV
	var_3562_int = 2; // 0x1315 MovI
	var_3563_bool = 0; // 0x1316 MovB
	func_729(var_3562_int, var_3563_bool); // 0x1317 NEW_2
	var_3564_int = 0; var_3565_int = 0; var_3566_int = 0; // 0x1319 PushV
	var_3564_int = 2; // 0x131a MovI
	var_3565_int = var_3536_int; // 0x131b Mov
	var_3566_int = var_3537_int; // 0x131c Mov
	func_3797(var_3564_int, var_3565_int, var_3566_int); // 0x131d NEW_2
	return 0; // 0x131f Return
}


func_12012(var_5516_bool)
{
	var_5519_int = 0; var_5520_string = ""; // 0x2eed PushV
	var_5520_string = "b5MladVladVisit"; // 0x2eee MovS
	func_106(var_5519_int, var_5520_string); // 0x2eef NEW_2
	var_5521_int = 0; // 0x2ef1 PushI
	var_5522_bool = var_5519_int != var_5521_int; // 0x2ef2 Neq
	if(var_5522_bool == 0) goto Label_12022; // 0x2ef3 JumpB
	var_5516_bool = 1; // 0x2ef4 MovB
	return 0; // 0x2ef5 Return
	
Label_12022:
	var_5516_bool = 0; // 0x2ef6 MovB
	return 0; // 0x2ef7 Return
}


func_9965(var_4708_int, var_4709_float)
{
	var_4710_int = 0; var_4711_int = 0; var_4712_int = 0; var_4713_float = 0; // 0x26ee PushV
	var_4711_int = 522715; // 0x26ef MovI
	var_4712_int = 522714; // 0x26f0 MovI
	var_4713_float = var_4709_float; // 0x26f1 Mov
	func_12278(var_4710_int, var_4711_int, var_4712_int, var_4713_float); // 0x26f2 NEW_2
	var_4708_int = var_4710_int; // 0x26f3 Mov
	return 0; // 0x26f5 Return
}


func_9974(var_4665_int, var_4666_float)
{
	var_4667_int = 0; var_4668_int = 0; var_4669_int = 0; var_4670_float = 0; // 0x26f7 PushV
	var_4668_int = 522719; // 0x26f8 MovI
	var_4669_int = 522718; // 0x26f9 MovI
	var_4670_float = var_4666_float; // 0x26fa Mov
	func_12278(var_4667_int, var_4668_int, var_4669_int, var_4670_float); // 0x26fb NEW_2
	var_4665_int = var_4667_int; // 0x26fc Mov
	return 0; // 0x26fe Return
}


func_10999()
{
	var_6356_object = Obj(); var_6357_object = Obj(); var_6358_object = Obj(); var_6359_object = Obj(); // 0x2af7 PushV
	var_6360_object = Obj(); // 0x2af8 PushV
	func_12286(var_6360_object); // 0x2af9 NEW_2
	var_6358_object = var_6360_object; // 0x2afa Mov
	var_6361_string = "b5q01DankoGotoAndrei"; // 0x2afc PushS
	FindMark(var_6359_object, var_6361_string); // 0x2afd ObjFunc
	var_6362_object = var_6359_object; // 0x2aff Push
	if(var_6362_object == 0) goto Label_11011; // 0x2b00 JumpB
	Remove(); // 0x2b01 ObjFunc
	
Label_11011:
	var_6363_string = "b5q01DankoGotoOspina"; // 0x2b03 PushS
	FindMark(var_6359_object, var_6363_string); // 0x2b04 ObjFunc
	var_6364_object = var_6359_object; // 0x2b06 Push
	if(var_6364_object == 0) goto Label_11018; // 0x2b07 JumpB
	Remove(); // 0x2b08 ObjFunc
	
Label_11018:
	var_6365_string = "b5q01VeraGotoStvorki"; // 0x2b0a PushS
	FindMark(var_6359_object, var_6365_string); // 0x2b0b ObjFunc
	var_6366_object = var_6359_object; // 0x2b0d Push
	if(var_6366_object == 0) goto Label_11025; // 0x2b0e JumpB
	Remove(); // 0x2b0f ObjFunc
	
Label_11025:
	var_6367_string = "b5q01GathererWife"; // 0x2b11 PushS
	FindMark(var_6359_object, var_6367_string); // 0x2b12 ObjFunc
	var_6368_object = var_6359_object; // 0x2b14 Push
	if(var_6368_object == 0) goto Label_11032; // 0x2b15 JumpB
	Remove(); // 0x2b16 ObjFunc
	
Label_11032:
	var_6369_bool = 0; var_6370_int = 0; // 0x2b18 PushV
	var_6370_int = 238; // 0x2b19 MovI
	func_12261(var_6369_bool, var_6370_int); // 0x2b1a NEW_2
	var_6371_bool = 0; var_6372_int = 0; // 0x2b1c PushV
	var_6372_int = 249; // 0x2b1d MovI
	func_12261(var_6371_bool, var_6372_int); // 0x2b1e NEW_2
	return 4; // 0x2b20 Return
}


func_12024(var_5370_bool)
{
	var_5373_int = 0; var_5374_string = ""; // 0x2ef9 PushV
	var_5374_string = "resque_list"; // 0x2efa MovS
	func_106(var_5373_int, var_5374_string); // 0x2efb NEW_2
	var_5375_int = 0; // 0x2efd PushI
	var_5376_bool = var_5373_int != var_5375_int; // 0x2efe Neq
	if(var_5376_bool == 0) goto Label_12034; // 0x2eff JumpB
	var_5370_bool = 1; // 0x2f00 MovB
	return 0; // 0x2f01 Return
	
Label_12034:
	var_5370_bool = 0; // 0x2f02 MovB
	return 0; // 0x2f03 Return
}


func_763(var_528_int, var_529_bool, var_530_int)
{
	var_531_string = ""; var_532_object = Obj(); var_533_int = 0; var_534_string = ""; var_535_object = Obj(); var_536_int = 0; var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_string = ""; var_542_object = Obj(); var_543_int = 0; var_544_object = Obj(); // 0x2fb PushV
	var_545_string = "street_rags"; // 0x2fc PushS
	var_546_int = 1; // 0x2fd PushI
	var_547_int = var_528_int + var_546_int; // 0x2fe Add
	var_538_string = var_545_string + var_547_int; // 0x2ff Add2
	var_548_bool = var_529_bool; // 0x300 Push
	if(var_548_bool == 0) goto Label_803; // 0x301 JumpB
	GetMainOutdoorScene(var_539_object); // 0x302 Func
	var_549_bool = var_539_object == 0; // 0x304 NullEq
	if(var_549_bool == 0) goto Label_778; // 0x305 JumpB
	var_550_string = "City manager: Can't find main outdoor scene"; // 0x306 PushS
	Trace(var_550_string); // 0x307 Func
	return 14; // 0x309 Return
	
Label_778:
	var_540_int = 1; // 0x30a MovI
	
Label_779:
	var_551_bool = var_540_int <= var_530_int; // 0x30b LE
	if(var_551_bool == 0) goto Label_801; // 0x30c JumpB
	var_552_string = "_"; // 0x30d PushS
	var_553_int = var_538_string + var_552_string; // 0x30e Add
	var_541_string = var_553_int + var_540_int; // 0x30f Add2
	FindActor(var_542_object, var_541_string); // 0x310 Func
	var_554_bool = var_542_object == 0; // 0x312 Not
	if(var_554_bool == 0) goto Label_794; // 0x313 JumpB
	var_555_cvector = CVector(0.0, 0.0, 0.0); // 0x314 PushVec
	var_556_cvector = CVector(0.0, 0.0, 1.0); // 0x315 PushVec
	var_557_string = "do_invis.xml"; // 0x316 PushS
	AddActor(var_542_object, var_541_string, var_539_object, var_555_cvector, var_556_cvector, var_557_string); // 0x317 Func
	goto Label_797; // 0x319 Jump
	
Label_797:
	var_542_object = 0; // 0x31d SetNull
	var_558_int = 1; // 0x31e PushI
	var_540_int = var_540_int + var_558_int; // 0x31f Add2
	goto Label_779; // 0x320 Jump
	
Label_794:
	var_559_bool = 0; // 0x31a PushB
	RemoveOnUnload(var_559_bool); // 0x31b ObjFunc
	
Label_801:
	var_539_object = 0; // 0x321 SetNull
	goto Label_819; // 0x322 Jump
	
Label_819:
	return 14; // 0x333 Return
	
Label_803:
	var_543_int = 1; // 0x323 MovI
	
Label_804:
	var_560_bool = var_543_int <= var_530_int; // 0x324 LE
	if(var_560_bool == 0) goto Label_819; // 0x325 JumpB
	var_561_string = "_"; // 0x326 PushS
	var_562_int = var_538_string + var_561_string; // 0x327 Add
	var_563_int = var_562_int + var_543_int; // 0x328 Add
	FindActor(var_544_object, var_563_int); // 0x329 Func
	var_564_object = var_544_object; // 0x32b Push
	if(var_564_object == 0) goto Label_815; // 0x32c JumpB
	RemoveOnUnload(); // 0x32d ObjFunc
	
Label_815:
	var_544_object = 0; // 0x32f SetNull
	var_565_int = 1; // 0x330 PushI
	var_543_int = var_543_int + var_565_int; // 0x331 Add2
	goto Label_804; // 0x332 Jump
}


func_9983(var_4884_int, var_4885_float)
{
	var_4886_int = 0; var_4887_int = 0; var_4888_int = 0; var_4889_float = 0; // 0x2700 PushV
	var_4887_int = 522717; // 0x2701 MovI
	var_4888_int = 522716; // 0x2702 MovI
	var_4889_float = var_4885_float; // 0x2703 Mov
	func_12278(var_4886_int, var_4887_int, var_4888_int, var_4889_float); // 0x2704 NEW_2
	var_4884_int = var_4886_int; // 0x2705 Mov
	return 0; // 0x2707 Return
}


func_12036(var_6314_bool)
{
	var_6317_int = 0; var_6318_string = ""; // 0x2f05 PushV
	var_6318_string = "b3BigVladVisit"; // 0x2f06 MovS
	func_106(var_6317_int, var_6318_string); // 0x2f07 NEW_2
	var_6319_int = 0; // 0x2f09 PushI
	var_6320_bool = var_6317_int != var_6319_int; // 0x2f0a Neq
	if(var_6320_bool == 0) goto Label_12046; // 0x2f0b JumpB
	var_6314_bool = 1; // 0x2f0c MovB
	return 0; // 0x2f0d Return
	
Label_12046:
	var_6314_bool = 0; // 0x2f0e MovB
	return 0; // 0x2f0f Return
}


func_9992(var_5812_int, var_5813_float)
{
	var_5814_int = 0; var_5815_int = 0; var_5816_int = 0; var_5817_float = 0; // 0x2709 PushV
	var_5815_int = 530574; // 0x270a MovI
	var_5816_int = 530573; // 0x270b MovI
	var_5817_float = var_5813_float; // 0x270c Mov
	func_12278(var_5814_int, var_5815_int, var_5816_int, var_5817_float); // 0x270d NEW_2
	var_5812_int = var_5814_int; // 0x270e Mov
	return 0; // 0x2710 Return
}


func_12048(var_4676_bool)
{
	var_4679_int = 0; var_4680_string = ""; // 0x2f11 PushV
	var_4680_string = "b3DankoVisit"; // 0x2f12 MovS
	func_106(var_4679_int, var_4680_string); // 0x2f13 NEW_2
	var_4681_int = 0; // 0x2f15 PushI
	var_4682_bool = var_4679_int != var_4681_int; // 0x2f16 Neq
	if(var_4682_bool == 0) goto Label_12058; // 0x2f17 JumpB
	var_4676_bool = 1; // 0x2f18 MovB
	return 0; // 0x2f19 Return
	
Label_12058:
	var_4676_bool = 0; // 0x2f1a MovB
	return 0; // 0x2f1b Return
}


func_10001(var_5081_int, var_5082_float)
{
	var_5083_int = 0; var_5084_int = 0; var_5085_int = 0; var_5086_float = 0; // 0x2712 PushV
	var_5084_int = 529840; // 0x2713 MovI
	var_5085_int = 529839; // 0x2714 MovI
	var_5086_float = var_5082_float; // 0x2715 Mov
	func_12278(var_5083_int, var_5084_int, var_5085_int, var_5086_float); // 0x2716 NEW_2
	var_5081_int = var_5083_int; // 0x2717 Mov
	return 0; // 0x2719 Return
}


func_6932(var_2966_int, var_2967_int, var_2968_object, var_2969_object, var_2970_object, var_2971_object)
{
	var_2972_int = 0; // 0x1b15 PushI
	var_2973_bool = var_2967_int == var_2972_int; // 0x1b16 Eq
	if(var_2973_bool == 0) goto Label_6972; // 0x1b17 JumpB
	var_2974_int = 0; var_2975_bool = 0; // 0x1b18 PushV
	var_2974_int = 13; // 0x1b19 MovI
	var_2975_bool = 1; // 0x1b1a MovB
	func_746(var_2974_int, var_2975_bool); // 0x1b1b NEW_2
	var_2976_int = 0; var_2977_bool = 0; var_2978_int = 0; // 0x1b1d PushV
	var_2976_int = 13; // 0x1b1e MovI
	var_2977_bool = 1; // 0x1b1f MovB
	var_2978_int = 1; // 0x1b20 MovI
	func_763(var_2976_int, var_2977_bool, var_2978_int); // 0x1b21 NEW_2
	var_2979_int = 0; var_2980_int = 0; var_2981_object = Obj(); var_2982_object = Obj(); var_2983_object = Obj(); // 0x1b23 PushV
	var_2979_int = 13; // 0x1b24 MovI
	var_2980_int = var_2966_int; // 0x1b25 Mov
	var_2981_object = var_2968_object; // 0x1b26 Mov
	var_2982_object = var_2969_object; // 0x1b27 Mov
	var_2983_object = var_2970_object; // 0x1b28 Mov
	func_591(var_2979_int, var_2980_int, var_2981_object, var_2982_object, var_2983_object); // 0x1b29 NEW_2
	var_2984_object = Obj(); var_2985_int = 0; // 0x1b2b PushV
	var_2984_object = var_2971_object; // 0x1b2c Mov
	var_2985_int = 1; // 0x1b2d MovI
	func_255(var_2985_int); // 0x1b2e NEW_2
	var_2986_int = 0; var_2987_bool = 0; var_2988_int = 0; // 0x1b30 PushV
	var_2986_int = 13; // 0x1b31 MovI
	var_2987_bool = 1; // 0x1b32 MovB
	var_2988_int = 4; // 0x1b33 MovI
	func_820(var_2986_int, var_2987_bool, var_2988_int); // 0x1b34 NEW_2
	var_2989_int = 0; var_2990_bool = 0; var_2991_int = 0; // 0x1b36 PushV
	var_2989_int = 13; // 0x1b37 MovI
	var_2990_bool = 0; // 0x1b38 MovB
	var_2991_int = 4; // 0x1b39 MovI
	func_882(var_2989_int, var_2990_bool, var_2991_int); // 0x1b3a NEW_2
	
Label_6972:
	var_2992_int = 0; var_2993_bool = 0; // 0x1b3c PushV
	var_2992_int = 13; // 0x1b3d MovI
	var_2993_bool = 0; // 0x1b3e MovB
	func_729(var_2992_int, var_2993_bool); // 0x1b3f NEW_2
	var_2994_int = 0; var_2995_int = 0; var_2996_int = 0; // 0x1b41 PushV
	var_2994_int = 13; // 0x1b42 MovI
	var_2995_int = var_2966_int; // 0x1b43 Mov
	var_2996_int = var_2967_int; // 0x1b44 Mov
	func_2714(var_2994_int, var_2995_int, var_2996_int); // 0x1b45 NEW_2
	return 0; // 0x1b47 Return
}


func_8981(var_464_int, var_465_int, var_466_int, var_467_int)
{
	var_470_int = 0; var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_object = Obj(); var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); // 0x2315 PushV
	var_480_string = "City update"; // 0x2316 PushS
	Trace(var_480_string); // 0x2317 Func
	var_481_bool = 0; // 0x2319 PushV
	var_481_bool = 0; // 0x231a MovB
	var_482_bool = var_464_int == var_466_int; // 0x231b Eq
	if(var_482_bool == 0) goto Label_8992; // 0x231c JumpB
	var_483_bool = var_465_int == var_467_int; // 0x231d Eq
	if(var_483_bool == 0) goto Label_8992; // 0x231e JumpB
	var_481_bool = 1; // 0x231f MovB
	
Label_8992:
	if(var_481_bool == 0) goto Label_8996; // 0x2320 JumpB
	var_484_string = "kolokol"; // 0x2321 PushS
	PlaySound(var_484_string); // 0x2322 Func
	
Label_8996:
	var_475_int = 0; // 0x2324 MovI
	
Label_8997:
	var_485_int = 16; // 0x2325 PushI
	var_486_bool = var_475_int < var_485_int; // 0x2326 LT
	if(var_486_bool == 0) goto Label_9037; // 0x2327 JumpB
	var_487_int = 0; // 0x2328 PushV
	var_487_int = var_475_int; // 0x2329 Mov
	func_440(var_487_int); // 0x232a NEW_2
	var_492_bool = 0; var_493_int = 0; // 0x232c PushV
	var_493_int = var_475_int; // 0x232d Mov
	func_350(var_492_bool, var_493_int); // 0x232e NEW_2
	if(var_492_bool == 0) goto Label_9016; // 0x2330 JumpB
	var_501_int = 0; var_502_int = 0; var_503_int = 0; // 0x2331 PushV
	var_501_int = var_475_int; // 0x2332 Mov
	var_502_int = var_464_int; // 0x2333 Mov
	var_503_int = var_465_int; // 0x2334 Mov
	func_9101(var_501_int, var_502_int, var_503_int); // 0x2335 NEW_2
	goto Label_9034; // 0x2337 Jump
	
Label_9034:
	var_1978_int = 1; // 0x234a PushI
	var_475_int = var_475_int + var_1978_int; // 0x234b Add2
	goto Label_8997; // 0x234c Jump
	
Label_9016:
	var_1979_bool = 0; var_1980_int = 0; // 0x2338 PushV
	var_1980_int = var_475_int; // 0x2339 Mov
	func_380(var_1979_bool, var_1980_int); // 0x233a NEW_2
	if(var_1979_bool == 0) goto Label_9028; // 0x233c JumpB
	var_1988_int = 0; var_1989_int = 0; var_1990_int = 0; // 0x233d PushV
	var_1988_int = var_475_int; // 0x233e Mov
	var_1989_int = var_464_int; // 0x233f Mov
	var_1990_int = var_465_int; // 0x2340 Mov
	func_9326(var_1988_int, var_1989_int, var_1990_int); // 0x2341 NEW_2
	goto Label_9034; // 0x2343 Jump
	
Label_9028:
	var_3169_int = 0; var_3170_int = 0; var_3171_int = 0; // 0x2344 PushV
	var_3169_int = var_475_int; // 0x2345 Mov
	var_3170_int = var_464_int; // 0x2346 Mov
	var_3171_int = var_465_int; // 0x2347 Mov
	func_9551(var_3169_int, var_3170_int, var_3171_int); // 0x2348 NEW_2
	
Label_9037:
	var_4303_int = 0; // 0x234d PushI
	var_4304_bool = var_465_int == var_4303_int; // 0x234e Eq
	if(var_4304_bool == 0) goto Label_9073; // 0x234f JumpB
	var_4305_int = 0; // 0x2350 PushV
	var_4305_int = var_464_int; // 0x2351 Mov
	func_14840(var_4305_int); // 0x2352 NEW_2
	var_4335_bool = 0; // 0x2354 PushV
	var_4335_bool = 1; // 0x2355 MovB
	var_4336_int = 1; // 0x2356 PushI
	var_4337_bool = var_464_int == var_4336_int; // 0x2357 Eq
	if(var_4337_bool == 0) goto Label_9055; // 0x2358 JumpB
	var_4338_bool = 0; var_4339_int = 0; // 0x2359 PushV
	var_4339_int = 5; // 0x235a MovI
	func_380(var_4338_bool, var_4339_int); // 0x235b NEW_2
	if(var_4338_bool == 0) goto Label_9055; // 0x235d JumpB
	var_4335_bool = 0; // 0x235e MovB
	
Label_9055:
	if(var_4335_bool == 0) goto Label_9065; // 0x235f JumpB
	var_4340_string = "dt_house_1_07"; // 0x2360 PushS
	FindActor(var_476_object, var_4340_string); // 0x2361 Func
	var_4341_int = 200; // 0x2363 PushI
	var_4342_bool = 1; // 0x2364 PushB
	EnableSubset(var_4341_int, var_4342_bool); // 0x2365 ObjFunc
	var_476_object = 0; // 0x2367 SetNull
	goto Label_9073; // 0x2368 Jump
	
Label_9073:
	var_4343_int = 7; // 0x2371 PushI
	var_4344_bool = var_465_int == var_4343_int; // 0x2372 Eq
	if(var_4344_bool == 0) goto Label_9087; // 0x2373 JumpB
	var_4345_string = "day time"; // 0x2374 PushS
	Trace(var_4345_string); // 0x2375 Func
	GetMainOutdoorScene(var_478_object); // 0x2377 Func
	var_4346_int = 0; // 0x2379 PushI
	var_4347_bool = 0; // 0x237a PushB
	SwitchLights(var_4346_int, var_4347_bool); // 0x237b ObjFunc
	var_478_object = 0; // 0x237d SetNull
	goto Label_9100; // 0x237e Jump
	
Label_9100:
	return 10; // 0x238c Return
	
Label_9087:
	var_4348_int = 20; // 0x237f PushI
	var_4349_bool = var_465_int == var_4348_int; // 0x2380 Eq
	if(var_4349_bool == 0) goto Label_9100; // 0x2381 JumpB
	var_4350_string = "night time"; // 0x2382 PushS
	Trace(var_4350_string); // 0x2383 Func
	GetMainOutdoorScene(var_479_object); // 0x2385 Func
	var_4351_int = 0; // 0x2387 PushI
	var_4352_bool = 1; // 0x2388 PushB
	SwitchLights(var_4351_int, var_4352_bool); // 0x2389 ObjFunc
	var_479_object = 0; // 0x238b SetNull
	
Label_9065:
	var_4353_string = "dt_house_1_07"; // 0x2369 PushS
	FindActor(var_477_object, var_4353_string); // 0x236a Func
	var_4354_int = 200; // 0x236c PushI
	var_4355_bool = 0; // 0x236d PushB
	EnableSubset(var_4354_int, var_4355_bool); // 0x236e ObjFunc
	var_477_object = 0; // 0x2370 SetNull
}


func_5908(var_2801_int, var_2802_int, var_2803_object, var_2804_object, var_2805_object, var_2806_object)
{
	var_2807_int = 0; // 0x1715 PushI
	var_2808_bool = var_2802_int == var_2807_int; // 0x1716 Eq
	if(var_2808_bool == 0) goto Label_5948; // 0x1717 JumpB
	var_2809_int = 0; var_2810_bool = 0; // 0x1718 PushV
	var_2809_int = 8; // 0x1719 MovI
	var_2810_bool = 1; // 0x171a MovB
	func_746(var_2809_int, var_2810_bool); // 0x171b NEW_2
	var_2811_int = 0; var_2812_bool = 0; var_2813_int = 0; // 0x171d PushV
	var_2811_int = 8; // 0x171e MovI
	var_2812_bool = 1; // 0x171f MovB
	var_2813_int = 1; // 0x1720 MovI
	func_763(var_2811_int, var_2812_bool, var_2813_int); // 0x1721 NEW_2
	var_2814_int = 0; var_2815_int = 0; var_2816_object = Obj(); var_2817_object = Obj(); var_2818_object = Obj(); // 0x1723 PushV
	var_2814_int = 8; // 0x1724 MovI
	var_2815_int = var_2801_int; // 0x1725 Mov
	var_2816_object = var_2803_object; // 0x1726 Mov
	var_2817_object = var_2804_object; // 0x1727 Mov
	var_2818_object = var_2805_object; // 0x1728 Mov
	func_591(var_2814_int, var_2815_int, var_2816_object, var_2817_object, var_2818_object); // 0x1729 NEW_2
	var_2819_object = Obj(); var_2820_int = 0; // 0x172b PushV
	var_2819_object = var_2806_object; // 0x172c Mov
	var_2820_int = 1; // 0x172d MovI
	func_255(var_2820_int); // 0x172e NEW_2
	var_2821_int = 0; var_2822_bool = 0; var_2823_int = 0; // 0x1730 PushV
	var_2821_int = 8; // 0x1731 MovI
	var_2822_bool = 1; // 0x1732 MovB
	var_2823_int = 4; // 0x1733 MovI
	func_820(var_2821_int, var_2822_bool, var_2823_int); // 0x1734 NEW_2
	var_2824_int = 0; var_2825_bool = 0; var_2826_int = 0; // 0x1736 PushV
	var_2824_int = 8; // 0x1737 MovI
	var_2825_bool = 0; // 0x1738 MovB
	var_2826_int = 4; // 0x1739 MovI
	func_882(var_2824_int, var_2825_bool, var_2826_int); // 0x173a NEW_2
	
Label_5948:
	var_2827_int = 0; var_2828_bool = 0; // 0x173c PushV
	var_2827_int = 8; // 0x173d MovI
	var_2828_bool = 0; // 0x173e MovB
	func_729(var_2827_int, var_2828_bool); // 0x173f NEW_2
	var_2829_int = 0; var_2830_int = 0; var_2831_int = 0; // 0x1741 PushV
	var_2829_int = 8; // 0x1742 MovI
	var_2830_int = var_2801_int; // 0x1743 Mov
	var_2831_int = var_2802_int; // 0x1744 Mov
	func_2714(var_2829_int, var_2830_int, var_2831_int); // 0x1745 NEW_2
	return 0; // 0x1747 Return
}


func_10010(var_4947_int, var_4948_float)
{
	var_4949_int = 0; var_4950_int = 0; var_4951_int = 0; var_4952_float = 0; // 0x271b PushV
	var_4950_int = 518132; // 0x271c MovI
	var_4951_int = 518131; // 0x271d MovI
	var_4952_float = var_4948_float; // 0x271e Mov
	func_12278(var_4949_int, var_4950_int, var_4951_int, var_4952_float); // 0x271f NEW_2
	var_4947_int = var_4949_int; // 0x2720 Mov
	return 0; // 0x2722 Return
}


func_12060(var_5765_bool)
{
	var_5768_int = 0; var_5769_string = ""; // 0x2f1d PushV
	var_5769_string = "b3NotkinVisit"; // 0x2f1e MovS
	func_106(var_5768_int, var_5769_string); // 0x2f1f NEW_2
	var_5770_int = 0; // 0x2f21 PushI
	var_5771_bool = var_5768_int != var_5770_int; // 0x2f22 Neq
	if(var_5771_bool == 0) goto Label_12070; // 0x2f23 JumpB
	var_5765_bool = 1; // 0x2f24 MovB
	return 0; // 0x2f25 Return
	
Label_12070:
	var_5765_bool = 0; // 0x2f26 MovB
	return 0; // 0x2f27 Return
}


func_4896()
{
	var_97_string = "house5_02"; // 0x1321 PushS
	add(var_97_string); // 0x1322 ObjFunc
	var_98_string = "dt_house1_union2_03l"; // 0x1324 PushS
	add(var_98_string); // 0x1325 ObjFunc
	var_99_string = "dt_house1_union2_03r"; // 0x1327 PushS
	add(var_99_string); // 0x1328 ObjFunc
	var_100_string = "dt_house1_union2_01l"; // 0x132a PushS
	add(var_100_string); // 0x132b ObjFunc
	var_101_string = "dt_house1_union2_01r"; // 0x132d PushS
	add(var_101_string); // 0x132e ObjFunc
	var_102_string = "house5_unoinl"; // 0x1330 PushS
	add(var_102_string); // 0x1331 ObjFunc
	var_103_string = "house5_unoinr"; // 0x1333 PushS
	add(var_103_string); // 0x1334 ObjFunc
	var_104_string = "dt_house_1_01"; // 0x1336 PushS
	add(var_104_string); // 0x1337 ObjFunc
	var_105_string = "house5_05"; // 0x1339 PushS
	add(var_105_string); // 0x133a ObjFunc
	var_106_string = "house5_06"; // 0x133c PushS
	add(var_106_string); // 0x133d ObjFunc
	var_107_string = "dt_house_1_02"; // 0x133f PushS
	add(var_107_string); // 0x1340 ObjFunc
	var_108_string = "house5_unoin_solid01l"; // 0x1342 PushS
	add(var_108_string); // 0x1343 ObjFunc
	var_109_string = "house5_unoin_solid01r"; // 0x1345 PushS
	add(var_109_string); // 0x1346 ObjFunc
	var_110_string = "house5_03"; // 0x1348 PushS
	add(var_110_string); // 0x1349 ObjFunc
	var_111_string = "house5_04"; // 0x134b PushS
	add(var_111_string); // 0x134c ObjFunc
	var_112_string = "house1_se_02l"; // 0x134e PushS
	add(var_112_string); // 0x134f ObjFunc
	var_113_string = "house1_se_02r"; // 0x1351 PushS
	add(var_113_string); // 0x1352 ObjFunc
	var_114_string = "dt_house3_01_i2"; // 0x1354 PushS
	add(var_114_string); // 0x1355 ObjFunc
	var_115_string = "dt_house3_02_i2"; // 0x1357 PushS
	add(var_115_string); // 0x1358 ObjFunc
	var_116_string = "dt_house3_02"; // 0x135a PushS
	add(var_116_string); // 0x135b ObjFunc
	var_117_string = "dt_house3_03_i2"; // 0x135d PushS
	add(var_117_string); // 0x135e ObjFunc
	var_118_string = "dt_house3_03"; // 0x1360 PushS
	add(var_118_string); // 0x1361 ObjFunc
	var_119_string = "dt_house3_04_i2"; // 0x1363 PushS
	add(var_119_string); // 0x1364 ObjFunc
	var_120_string = "house5_21"; // 0x1366 PushS
	add(var_120_string); // 0x1367 ObjFunc
	return 0; // 0x1369 Return
}


func_11043()
{
	var_5993_object = Obj(); var_5994_object = Obj(); var_5995_object = Obj(); var_5996_object = Obj(); // 0x2b23 PushV
	var_5997_object = Obj(); // 0x2b24 PushV
	func_12286(var_5997_object); // 0x2b25 NEW_2
	var_5995_object = var_5997_object; // 0x2b26 Mov
	var_5998_string = "b6q01KlaraGotoTermitnik2"; // 0x2b28 PushS
	FindMark(var_5996_object, var_5998_string); // 0x2b29 ObjFunc
	var_5999_object = var_5996_object; // 0x2b2b Push
	if(var_5999_object == 0) goto Label_11055; // 0x2b2c JumpB
	Remove(); // 0x2b2d ObjFunc
	
Label_11055:
	var_6000_string = "b6q02KlaraGotoRat"; // 0x2b2f PushS
	FindMark(var_5996_object, var_6000_string); // 0x2b30 ObjFunc
	var_6001_object = var_5996_object; // 0x2b32 Push
	if(var_6001_object == 0) goto Label_11062; // 0x2b33 JumpB
	Remove(); // 0x2b34 ObjFunc
	
Label_11062:
	var_6002_string = "b6q03MariaGotoNina"; // 0x2b36 PushS
	FindMark(var_5996_object, var_6002_string); // 0x2b37 ObjFunc
	var_6003_object = var_5996_object; // 0x2b39 Push
	if(var_6003_object == 0) goto Label_11069; // 0x2b3a JumpB
	Remove(); // 0x2b3b ObjFunc
	
Label_11069:
	var_6004_string = "b6q03ViktorGotoMaria"; // 0x2b3d PushS
	FindMark(var_5996_object, var_6004_string); // 0x2b3e ObjFunc
	var_6005_object = var_5996_object; // 0x2b40 Push
	if(var_6005_object == 0) goto Label_11076; // 0x2b41 JumpB
	Remove(); // 0x2b42 ObjFunc
	
Label_11076:
	var_6006_string = "b6q02LetterGotoAnna"; // 0x2b44 PushS
	FindMark(var_5996_object, var_6006_string); // 0x2b45 ObjFunc
	var_6007_object = var_5996_object; // 0x2b47 Push
	if(var_6007_object == 0) goto Label_11083; // 0x2b48 JumpB
	Remove(); // 0x2b49 ObjFunc
	
Label_11083:
	var_6008_string = "b6q01MatGotoByk"; // 0x2b4b PushS
	FindMark(var_5996_object, var_6008_string); // 0x2b4c ObjFunc
	var_6009_object = var_5996_object; // 0x2b4e Push
	if(var_6009_object == 0) goto Label_11090; // 0x2b4f JumpB
	Remove(); // 0x2b50 ObjFunc
	
Label_11090:
	var_6010_bool = 0; var_6011_int = 0; // 0x2b52 PushV
	var_6011_int = 265; // 0x2b53 MovI
	func_12261(var_6010_bool, var_6011_int); // 0x2b54 NEW_2
	var_6012_bool = 0; var_6013_int = 0; // 0x2b56 PushV
	var_6013_int = 266; // 0x2b57 MovI
	func_12261(var_6012_bool, var_6013_int); // 0x2b58 NEW_2
	var_6014_bool = 0; var_6015_int = 0; // 0x2b5a PushV
	var_6015_int = 276; // 0x2b5b MovI
	func_12261(var_6014_bool, var_6015_int); // 0x2b5c NEW_2
	return 4; // 0x2b5e Return
}


func_10019(var_4971_int, var_4972_float)
{
	var_4973_int = 0; var_4974_int = 0; var_4975_int = 0; var_4976_float = 0; // 0x2724 PushV
	var_4974_int = 529838; // 0x2725 MovI
	var_4975_int = 529837; // 0x2726 MovI
	var_4976_float = var_4972_float; // 0x2727 Mov
	func_12278(var_4973_int, var_4974_int, var_4975_int, var_4976_float); // 0x2728 NEW_2
	var_4971_int = var_4973_int; // 0x2729 Mov
	return 0; // 0x272b Return
}


func_12072(var_5276_bool)
{
	var_5279_int = 0; var_5280_string = ""; // 0x2f29 PushV
	var_5280_string = "b8DankoVisit"; // 0x2f2a MovS
	func_106(var_5279_int, var_5280_string); // 0x2f2b NEW_2
	var_5281_int = 0; // 0x2f2d PushI
	var_5282_bool = var_5279_int != var_5281_int; // 0x2f2e Neq
	if(var_5282_bool == 0) goto Label_12082; // 0x2f2f JumpB
	var_5276_bool = 1; // 0x2f30 MovB
	return 0; // 0x2f31 Return
	
Label_12082:
	var_5276_bool = 0; // 0x2f32 MovB
	return 0; // 0x2f33 Return
}


func_10028(var_5661_int, var_5662_float)
{
	var_5663_int = 0; var_5664_int = 0; var_5665_int = 0; var_5666_float = 0; // 0x272d PushV
	var_5664_int = 531053; // 0x272e MovI
	var_5665_int = 531052; // 0x272f MovI
	var_5666_float = var_5662_float; // 0x2730 Mov
	func_12278(var_5663_int, var_5664_int, var_5665_int, var_5666_float); // 0x2731 NEW_2
	var_5661_int = var_5663_int; // 0x2732 Mov
	return 0; // 0x2734 Return
}


func_820(var_639_int, var_640_bool, var_641_int)
{
	var_642_string = ""; var_643_object = Obj(); var_644_int = 0; var_645_string = ""; var_646_object = Obj(); var_647_int = 0; var_648_string = ""; var_649_object = Obj(); var_650_string = ""; var_651_object = Obj(); var_652_int = 0; var_653_string = ""; var_654_object = Obj(); var_655_int = 0; var_656_string = ""; var_657_object = Obj(); // 0x334 PushV
	var_658_string = "dr_mark"; // 0x335 PushS
	var_659_int = 1; // 0x336 PushI
	var_660_int = var_639_int + var_659_int; // 0x337 Add
	var_650_string = var_658_string + var_660_int; // 0x338 Add2
	var_661_bool = var_640_bool; // 0x339 Push
	if(var_661_bool == 0) goto Label_862; // 0x33a JumpB
	GetMainOutdoorScene(var_651_object); // 0x33b Func
	var_662_bool = var_651_object == 0; // 0x33d NullEq
	if(var_662_bool == 0) goto Label_835; // 0x33e JumpB
	var_663_string = "City manager: Can't find main outdoor scene"; // 0x33f PushS
	Trace(var_663_string); // 0x340 Func
	return 16; // 0x342 Return
	
Label_835:
	var_652_int = 1; // 0x343 MovI
	
Label_836:
	var_664_bool = var_652_int <= var_641_int; // 0x344 LE
	if(var_664_bool == 0) goto Label_860; // 0x345 JumpB
	var_665_string = "_"; // 0x346 PushS
	var_666_int = var_650_string + var_665_string; // 0x347 Add
	var_653_string = var_666_int + var_652_int; // 0x348 Add2
	FindActor(var_654_object, var_653_string); // 0x349 Func
	var_667_bool = var_654_object == 0; // 0x34b Not
	if(var_667_bool == 0) goto Label_851; // 0x34c JumpB
	var_668_cvector = CVector(0.0, 0.0, 0.0); // 0x34d PushVec
	var_669_cvector = CVector(0.0, 0.0, 1.0); // 0x34e PushVec
	var_670_string = "disease_object.xml"; // 0x34f PushS
	AddActor(var_654_object, var_653_string, var_651_object, var_668_cvector, var_669_cvector, var_670_string); // 0x350 Func
	goto Label_856; // 0x352 Jump
	
Label_856:
	var_654_object = 0; // 0x358 SetNull
	var_671_int = 1; // 0x359 PushI
	var_652_int = var_652_int + var_671_int; // 0x35a Add2
	goto Label_836; // 0x35b Jump
	
Label_851:
	var_672_bool = 0; var_673_string = ""; var_674_string = ""; // 0x353 PushV
	var_673_string = var_653_string; // 0x354 Mov
	var_674_string = "restore"; // 0x355 MovS
	func_189(var_672_bool, var_673_string, var_674_string); // 0x356 NEW_2
	
Label_860:
	var_651_object = 0; // 0x35c SetNull
	goto Label_881; // 0x35d Jump
	
Label_881:
	return 16; // 0x371 Return
	
Label_862:
	var_655_int = 1; // 0x35e MovI
	
Label_863:
	var_678_bool = var_655_int <= var_641_int; // 0x35f LE
	if(var_678_bool == 0) goto Label_881; // 0x360 JumpB
	var_679_string = "_"; // 0x361 PushS
	var_680_int = var_650_string + var_679_string; // 0x362 Add
	var_656_string = var_680_int + var_655_int; // 0x363 Add2
	FindActor(var_657_object, var_656_string); // 0x364 Func
	var_681_object = var_657_object; // 0x366 Push
	if(var_681_object == 0) goto Label_877; // 0x367 JumpB
	var_682_bool = 0; var_683_string = ""; var_684_string = ""; // 0x368 PushV
	var_683_string = var_656_string; // 0x369 Mov
	var_684_string = "cleanup"; // 0x36a MovS
	func_189(var_682_bool, var_683_string, var_684_string); // 0x36b NEW_2
	
Label_877:
	var_657_object = 0; // 0x36d SetNull
	var_685_int = 1; // 0x36e PushI
	var_655_int = var_655_int + var_685_int; // 0x36f Add2
	goto Label_863; // 0x370 Jump
}


func_12084(var_5546_bool, var_5547_object)
{
	var_5549_bool = 0; var_5550_object = Obj(); // 0x2f35 PushV
	var_5550_object = var_5547_object; // 0x2f36 Mov
	func_12178(var_5550_object); // 0x2f37 NEW_2
	if(var_5549_bool == 0) goto Label_12092; // 0x2f39 JumpB
	var_5546_bool = 1; // 0x2f3a MovB
	return 0; // 0x2f3b Return
	
Label_12092:
	var_5546_bool = 0; // 0x2f3c MovB
	return 0; // 0x2f3d Return
}


func_10037(var_5104_int, var_5105_float)
{
	var_5106_int = 0; var_5107_int = 0; var_5108_int = 0; var_5109_float = 0; // 0x2736 PushV
	var_5107_int = 529844; // 0x2737 MovI
	var_5108_int = 529843; // 0x2738 MovI
	var_5109_float = var_5105_float; // 0x2739 Mov
	func_12278(var_5106_int, var_5107_int, var_5108_int, var_5109_float); // 0x273a NEW_2
	var_5104_int = var_5106_int; // 0x273b Mov
	return 0; // 0x273d Return
}


func_1847(var_1057_int, var_1058_int, var_1059_int)
{
	var_1060_int = 0; var_1061_int = 0; // 0x737 PushV
	var_1062_int = 1; // 0x738 PushI
	var_1063_int = var_1058_int + var_1062_int; // 0x739 Add
	var_1064_int = 12; // 0x73a PushI
	var_1065_bool = var_1063_int == var_1064_int; // 0x73b Eq
	if(var_1065_bool == 0) goto Label_1854; // 0x73c JumpB
	return 2; // 0x73d Return
	
Label_1854:
	var_1066_bool = 0; // 0x73e PushV
	var_1066_bool = 0; // 0x73f MovB
	var_1067_bool = 0; // 0x740 PushV
	var_1067_bool = 1; // 0x741 MovB
	var_1068_int = 7; // 0x742 PushI
	var_1069_bool = var_1059_int < var_1068_int; // 0x743 LT
	if(var_1069_bool == 0) goto Label_1865; // 0x744 JumpB
	var_1070_int = 21; // 0x745 PushI
	var_1071_bool = var_1059_int > var_1070_int; // 0x746 GT
	if(var_1071_bool == 0) goto Label_1865; // 0x747 JumpB
	var_1067_bool = 0; // 0x748 MovB
	
Label_1865:
	if(var_1067_bool == 0) goto Label_1870; // 0x749 JumpB
	var_1072_int = 0; // 0x74a PushI
	var_1073_bool = var_1058_int != var_1072_int; // 0x74b Neq
	if(var_1073_bool == 0) goto Label_1870; // 0x74c JumpB
	var_1066_bool = 1; // 0x74d MovB
	
Label_1870:
	if(var_1066_bool == 0) goto Label_1885; // 0x74e JumpB
	var_1074_float = 0; var_1075_int = 0; // 0x74f PushV
	var_1075_int = var_1058_int; // 0x750 Mov
	func_1091(var_1074_float, var_1075_int); // 0x751 NEW_2
	var_1061_int = var_1074_float; // 0x752 Mov
	var_1076_int = var_1061_int; // 0x754 Push
	if(var_1076_int == 0) goto Label_1885; // 0x755 JumpB
	var_1077_int = 0; var_1078_string = ""; var_1079_string = ""; var_1080_int = 0; // 0x756 PushV
	var_1077_int = var_1057_int; // 0x757 Mov
	var_1078_string = "pers_grabitel"; // 0x758 MovS
	var_1079_string = "grabitel.xml"; // 0x759 MovS
	var_1080_int = var_1061_int; // 0x75a Mov
	func_453(var_1077_int, var_1078_string, var_1079_string, var_1080_int); // 0x75b NEW_2
	
Label_1885:
	var_1081_bool = 0; var_1082_int = 0; var_1083_int = 0; // 0x75d PushV
	var_1082_int = var_1058_int; // 0x75e Mov
	var_1083_int = var_1059_int; // 0x75f Mov
	func_1060(var_1081_bool, var_1082_int, var_1083_int); // 0x760 NEW_2
	if(var_1081_bool == 0) goto Label_1948; // 0x762 JumpB
	var_1084_int = 0; var_1085_string = ""; var_1086_string = ""; var_1087_int = 0; // 0x763 PushV
	var_1084_int = var_1057_int; // 0x764 Mov
	var_1085_string = "pers_unosha"; // 0x765 MovS
	var_1086_string = "unosha_attacker.xml"; // 0x766 MovS
	var_1087_int = 1; // 0x767 MovI
	func_453(var_1084_int, var_1085_string, var_1086_string, var_1087_int); // 0x768 NEW_2
	var_1088_int = 0; var_1089_string = ""; var_1090_string = ""; var_1091_int = 0; // 0x76a PushV
	var_1088_int = var_1057_int; // 0x76b Mov
	var_1089_string = "pers_unosha"; // 0x76c MovS
	var_1090_string = "unosha2_attacker.xml"; // 0x76d MovS
	var_1091_int = 1; // 0x76e MovI
	func_453(var_1088_int, var_1089_string, var_1090_string, var_1091_int); // 0x76f NEW_2
	var_1092_int = 0; var_1093_string = ""; var_1094_string = ""; var_1095_int = 0; // 0x771 PushV
	var_1092_int = var_1057_int; // 0x772 Mov
	var_1093_string = "pers_worker"; // 0x773 MovS
	var_1094_string = "worker_attacker.xml"; // 0x774 MovS
	var_1095_int = 1; // 0x775 MovI
	func_453(var_1092_int, var_1093_string, var_1094_string, var_1095_int); // 0x776 NEW_2
	var_1096_int = 0; var_1097_string = ""; var_1098_string = ""; var_1099_int = 0; // 0x778 PushV
	var_1096_int = var_1057_int; // 0x779 Mov
	var_1097_string = "pers_worker"; // 0x77a MovS
	var_1098_string = "worker2_attacker.xml"; // 0x77b MovS
	var_1099_int = 1; // 0x77c MovI
	func_453(var_1096_int, var_1097_string, var_1098_string, var_1099_int); // 0x77d NEW_2
	var_1100_int = 0; var_1101_string = ""; var_1102_string = ""; var_1103_int = 0; // 0x77f PushV
	var_1100_int = var_1057_int; // 0x780 Mov
	var_1101_string = "pers_woman"; // 0x781 MovS
	var_1102_string = "woman.xml"; // 0x782 MovS
	var_1103_int = 1; // 0x783 MovI
	func_453(var_1100_int, var_1101_string, var_1102_string, var_1103_int); // 0x784 NEW_2
	var_1104_int = 0; var_1105_string = ""; var_1106_string = ""; var_1107_int = 0; // 0x786 PushV
	var_1104_int = var_1057_int; // 0x787 Mov
	var_1105_string = "pers_alkash"; // 0x788 MovS
	var_1106_string = "alkash.xml"; // 0x789 MovS
	var_1107_int = 1; // 0x78a MovI
	func_453(var_1104_int, var_1105_string, var_1106_string, var_1107_int); // 0x78b NEW_2
	var_1108_int = 0; var_1109_string = ""; var_1110_string = ""; var_1111_int = 0; // 0x78d PushV
	var_1108_int = var_1057_int; // 0x78e Mov
	var_1109_string = "pers_girl"; // 0x78f MovS
	var_1110_string = "girl.xml"; // 0x790 MovS
	var_1111_int = 1; // 0x791 MovI
	func_453(var_1108_int, var_1109_string, var_1110_string, var_1111_int); // 0x792 NEW_2
	var_1112_int = 0; var_1113_string = ""; var_1114_string = ""; var_1115_int = 0; // 0x794 PushV
	var_1112_int = var_1057_int; // 0x795 Mov
	var_1113_string = "pers_girl"; // 0x796 MovS
	var_1114_string = "girl2.xml"; // 0x797 MovS
	var_1115_int = 1; // 0x798 MovI
	func_453(var_1112_int, var_1113_string, var_1114_string, var_1115_int); // 0x799 NEW_2
	goto Label_2105; // 0x79b Jump
	
Label_2105:
	var_1116_bool = 0; // 0x839 PushV
	var_1116_bool = 0; // 0x83a MovB
	var_1117_bool = 0; // 0x83b PushV
	var_1117_bool = 0; // 0x83c MovB
	var_1118_int = 0; // 0x83d PushI
	var_1119_bool = var_1058_int == var_1118_int; // 0x83e Eq
	if(var_1119_bool == 0) goto Label_2116; // 0x83f JumpB
	var_1120_int = 12; // 0x840 PushI
	var_1121_bool = var_1059_int > var_1120_int; // 0x841 GT
	if(var_1121_bool == 0) goto Label_2116; // 0x842 JumpB
	var_1117_bool = 1; // 0x843 MovB
	
Label_2116:
	if(var_1117_bool == 0) goto Label_2121; // 0x844 JumpB
	var_1122_int = 22; // 0x845 PushI
	var_1123_bool = var_1059_int < var_1122_int; // 0x846 LT
	if(var_1123_bool == 0) goto Label_2121; // 0x847 JumpB
	var_1116_bool = 1; // 0x848 MovB
	
Label_2121:
	if(var_1116_bool == 0) goto Label_2129; // 0x849 JumpB
	var_1124_int = 0; var_1125_string = ""; var_1126_string = ""; var_1127_int = 0; // 0x84a PushV
	var_1124_int = var_1057_int; // 0x84b Mov
	var_1125_string = "pers_woman"; // 0x84c MovS
	var_1126_string = "woman_killme.xml"; // 0x84d MovS
	var_1127_int = 1; // 0x84e MovI
	func_453(var_1124_int, var_1125_string, var_1126_string, var_1127_int); // 0x84f NEW_2
	
Label_2129:
	var_1128_bool = 0; var_1129_int = 0; var_1130_int = 0; // 0x851 PushV
	var_1129_int = var_1058_int; // 0x852 Mov
	var_1130_int = var_1059_int; // 0x853 Mov
	func_1295(var_1128_bool, var_1129_int, var_1130_int); // 0x854 NEW_2
	if(var_1128_bool == 0) goto Label_2142; // 0x856 JumpB
	var_1135_int = 0; var_1136_string = ""; var_1137_string = ""; var_1138_int = 0; // 0x857 PushV
	var_1135_int = var_1057_int; // 0x858 Mov
	var_1136_string = "pers_soldat"; // 0x859 MovS
	var_1137_string = "soldier_marauder.xml"; // 0x85a MovS
	var_1138_int = 2; // 0x85b MovI
	func_453(var_1135_int, var_1136_string, var_1137_string, var_1138_int); // 0x85c NEW_2
	
Label_2142:
	var_1139_bool = 0; var_1140_int = 0; var_1141_int = 0; // 0x85e PushV
	var_1140_int = var_1058_int; // 0x85f Mov
	var_1141_int = var_1059_int; // 0x860 Mov
	func_1305(var_1139_bool, var_1140_int, var_1141_int); // 0x861 NEW_2
	if(var_1139_bool == 0) goto Label_2155; // 0x863 JumpB
	var_1149_int = 0; var_1150_string = ""; var_1151_string = ""; var_1152_int = 0; // 0x864 PushV
	var_1149_int = var_1057_int; // 0x865 Mov
	var_1150_string = "pers_nudegirl"; // 0x866 MovS
	var_1151_string = "nudegirl.xml"; // 0x867 MovS
	var_1152_int = 1; // 0x868 MovI
	func_453(var_1149_int, var_1150_string, var_1151_string, var_1152_int); // 0x869 NEW_2
	
Label_2155:
	return 2; // 0x86b Return
	
Label_1948:
	var_1153_bool = 0; // 0x79c PushV
	var_1153_bool = 0; // 0x79d MovB
	var_1154_int = 8; // 0x79e PushI
	var_1155_bool = var_1059_int > var_1154_int; // 0x79f GT
	if(var_1155_bool == 0) goto Label_1957; // 0x7a0 JumpB
	var_1156_int = 21; // 0x7a1 PushI
	var_1157_bool = var_1059_int < var_1156_int; // 0x7a2 LT
	if(var_1157_bool == 0) goto Label_1957; // 0x7a3 JumpB
	var_1153_bool = 1; // 0x7a4 MovB
	
Label_1957:
	if(var_1153_bool == 0) goto Label_2039; // 0x7a5 JumpB
	var_1158_int = 0; var_1159_string = ""; var_1160_string = ""; var_1161_int = 0; // 0x7a6 PushV
	var_1158_int = var_1057_int; // 0x7a7 Mov
	var_1159_string = "pers_woman"; // 0x7a8 MovS
	var_1160_string = "woman.xml"; // 0x7a9 MovS
	var_1161_int = 1; // 0x7aa MovI
	func_453(var_1158_int, var_1159_string, var_1160_string, var_1161_int); // 0x7ab NEW_2
	var_1162_int = 0; var_1163_string = ""; var_1164_string = ""; var_1165_int = 0; // 0x7ad PushV
	var_1162_int = var_1057_int; // 0x7ae Mov
	var_1163_string = "pers_unosha"; // 0x7af MovS
	var_1164_string = "unosha.xml"; // 0x7b0 MovS
	var_1165_int = 1; // 0x7b1 MovI
	func_453(var_1162_int, var_1163_string, var_1164_string, var_1165_int); // 0x7b2 NEW_2
	var_1166_int = 0; var_1167_string = ""; var_1168_string = ""; var_1169_int = 0; // 0x7b4 PushV
	var_1166_int = var_1057_int; // 0x7b5 Mov
	var_1167_string = "pers_unosha"; // 0x7b6 MovS
	var_1168_string = "unosha2.xml"; // 0x7b7 MovS
	var_1169_int = 1; // 0x7b8 MovI
	func_453(var_1166_int, var_1167_string, var_1168_string, var_1169_int); // 0x7b9 NEW_2
	var_1170_int = 0; var_1171_string = ""; var_1172_string = ""; var_1173_int = 0; // 0x7bb PushV
	var_1170_int = var_1057_int; // 0x7bc Mov
	var_1171_string = "pers_worker"; // 0x7bd MovS
	var_1172_string = "worker.xml"; // 0x7be MovS
	var_1173_int = 1; // 0x7bf MovI
	func_453(var_1170_int, var_1171_string, var_1172_string, var_1173_int); // 0x7c0 NEW_2
	var_1174_int = 0; var_1175_string = ""; var_1176_string = ""; var_1177_int = 0; // 0x7c2 PushV
	var_1174_int = var_1057_int; // 0x7c3 Mov
	var_1175_string = "pers_worker"; // 0x7c4 MovS
	var_1176_string = "worker2.xml"; // 0x7c5 MovS
	var_1177_int = 1; // 0x7c6 MovI
	func_453(var_1174_int, var_1175_string, var_1176_string, var_1177_int); // 0x7c7 NEW_2
	var_1178_int = 0; var_1179_string = ""; var_1180_string = ""; var_1181_int = 0; // 0x7c9 PushV
	var_1178_int = var_1057_int; // 0x7ca Mov
	var_1179_string = "pers_alkash"; // 0x7cb MovS
	var_1180_string = "alkash.xml"; // 0x7cc MovS
	var_1181_int = 1; // 0x7cd MovI
	func_453(var_1178_int, var_1179_string, var_1180_string, var_1181_int); // 0x7ce NEW_2
	var_1182_int = 0; var_1183_string = ""; var_1184_string = ""; var_1185_int = 0; // 0x7d0 PushV
	var_1182_int = var_1057_int; // 0x7d1 Mov
	var_1183_string = "pers_girl"; // 0x7d2 MovS
	var_1184_string = "girl.xml"; // 0x7d3 MovS
	var_1185_int = 1; // 0x7d4 MovI
	func_453(var_1182_int, var_1183_string, var_1184_string, var_1185_int); // 0x7d5 NEW_2
	var_1186_int = 0; var_1187_string = ""; var_1188_string = ""; var_1189_int = 0; // 0x7d7 PushV
	var_1186_int = var_1057_int; // 0x7d8 Mov
	var_1187_string = "pers_girl"; // 0x7d9 MovS
	var_1188_string = "girl2.xml"; // 0x7da MovS
	var_1189_int = 1; // 0x7db MovI
	func_453(var_1186_int, var_1187_string, var_1188_string, var_1189_int); // 0x7dc NEW_2
	var_1190_int = 1; // 0x7de PushI
	var_1191_int = var_1058_int + var_1190_int; // 0x7df Add
	var_1192_int = 3; // 0x7e0 PushI
	var_1193_bool = var_1191_int >= var_1192_int; // 0x7e1 GE
	if(var_1193_bool == 0) goto Label_2026; // 0x7e2 JumpB
	var_1194_int = 0; var_1195_string = ""; var_1196_string = ""; var_1197_int = 0; // 0x7e3 PushV
	var_1194_int = var_1057_int; // 0x7e4 Mov
	var_1195_string = "pers_dohodyaga"; // 0x7e5 MovS
	var_1196_string = "dohodyaga.xml"; // 0x7e6 MovS
	var_1197_int = 1; // 0x7e7 MovI
	func_453(var_1194_int, var_1195_string, var_1196_string, var_1197_int); // 0x7e8 NEW_2
	
Label_2026:
	var_1198_int = 1; // 0x7ea PushI
	var_1199_int = var_1058_int + var_1198_int; // 0x7eb Add
	var_1200_int = 7; // 0x7ec PushI
	var_1201_bool = var_1199_int >= var_1200_int; // 0x7ed GE
	if(var_1201_bool == 0) goto Label_2038; // 0x7ee JumpB
	var_1202_int = 0; var_1203_string = ""; var_1204_string = ""; var_1205_int = 0; // 0x7ef PushV
	var_1202_int = var_1057_int; // 0x7f0 Mov
	var_1203_string = "pers_butcher"; // 0x7f1 MovS
	var_1204_string = "butcher.xml"; // 0x7f2 MovS
	var_1205_int = 2; // 0x7f3 MovI
	func_453(var_1202_int, var_1203_string, var_1204_string, var_1205_int); // 0x7f4 NEW_2
	
Label_2038:
	goto Label_2105; // 0x7f6 Jump
	
Label_2039:
	var_1206_int = 0; var_1207_string = ""; var_1208_string = ""; var_1209_int = 0; // 0x7f7 PushV
	var_1206_int = var_1057_int; // 0x7f8 Mov
	var_1207_string = "pers_woman"; // 0x7f9 MovS
	var_1208_string = "woman.xml"; // 0x7fa MovS
	var_1209_int = 1; // 0x7fb MovI
	func_453(var_1206_int, var_1207_string, var_1208_string, var_1209_int); // 0x7fc NEW_2
	var_1210_int = 0; var_1211_string = ""; var_1212_string = ""; var_1213_int = 0; // 0x7fe PushV
	var_1210_int = var_1057_int; // 0x7ff Mov
	var_1211_string = "pers_unosha"; // 0x800 MovS
	var_1212_string = "unosha.xml"; // 0x801 MovS
	var_1213_int = 1; // 0x802 MovI
	func_453(var_1210_int, var_1211_string, var_1212_string, var_1213_int); // 0x803 NEW_2
	var_1214_int = 0; var_1215_string = ""; var_1216_string = ""; var_1217_int = 0; // 0x805 PushV
	var_1214_int = var_1057_int; // 0x806 Mov
	var_1215_string = "pers_unosha"; // 0x807 MovS
	var_1216_string = "unosha2.xml"; // 0x808 MovS
	var_1217_int = 1; // 0x809 MovI
	func_453(var_1214_int, var_1215_string, var_1216_string, var_1217_int); // 0x80a NEW_2
	var_1218_int = 0; var_1219_string = ""; var_1220_string = ""; var_1221_int = 0; // 0x80c PushV
	var_1218_int = var_1057_int; // 0x80d Mov
	var_1219_string = "pers_worker"; // 0x80e MovS
	var_1220_string = "worker.xml"; // 0x80f MovS
	var_1221_int = 1; // 0x810 MovI
	func_453(var_1218_int, var_1219_string, var_1220_string, var_1221_int); // 0x811 NEW_2
	var_1222_int = 0; var_1223_string = ""; var_1224_string = ""; var_1225_int = 0; // 0x813 PushV
	var_1222_int = var_1057_int; // 0x814 Mov
	var_1223_string = "pers_worker"; // 0x815 MovS
	var_1224_string = "worker2.xml"; // 0x816 MovS
	var_1225_int = 1; // 0x817 MovI
	func_453(var_1222_int, var_1223_string, var_1224_string, var_1225_int); // 0x818 NEW_2
	var_1226_int = 0; var_1227_string = ""; var_1228_string = ""; var_1229_int = 0; // 0x81a PushV
	var_1226_int = var_1057_int; // 0x81b Mov
	var_1227_string = "pers_alkash"; // 0x81c MovS
	var_1228_string = "alkash.xml"; // 0x81d MovS
	var_1229_int = 1; // 0x81e MovI
	func_453(var_1226_int, var_1227_string, var_1228_string, var_1229_int); // 0x81f NEW_2
	var_1230_int = 1; // 0x821 PushI
	var_1231_int = var_1058_int + var_1230_int; // 0x822 Add
	var_1232_int = 3; // 0x823 PushI
	var_1233_bool = var_1231_int >= var_1232_int; // 0x824 GE
	if(var_1233_bool == 0) goto Label_2093; // 0x825 JumpB
	var_1234_int = 0; var_1235_string = ""; var_1236_string = ""; var_1237_int = 0; // 0x826 PushV
	var_1234_int = var_1057_int; // 0x827 Mov
	var_1235_string = "pers_dohodyaga"; // 0x828 MovS
	var_1236_string = "dohodyaga.xml"; // 0x829 MovS
	var_1237_int = 1; // 0x82a MovI
	func_453(var_1234_int, var_1235_string, var_1236_string, var_1237_int); // 0x82b NEW_2
	
Label_2093:
	var_1238_int = 1; // 0x82d PushI
	var_1239_int = var_1058_int + var_1238_int; // 0x82e Add
	var_1240_int = 7; // 0x82f PushI
	var_1241_bool = var_1239_int >= var_1240_int; // 0x830 GE
	if(var_1241_bool == 0) goto Label_2105; // 0x831 JumpB
	var_1242_int = 0; var_1243_string = ""; var_1244_string = ""; var_1245_int = 0; // 0x832 PushV
	var_1242_int = var_1057_int; // 0x833 Mov
	var_1243_string = "pers_butcher"; // 0x834 MovS
	var_1244_string = "butcher.xml"; // 0x835 MovS
	var_1245_int = 3; // 0x836 MovI
	func_453(var_1242_int, var_1243_string, var_1244_string, var_1245_int); // 0x837 NEW_2
}


func_12094(var_5207_bool)
{
	var_5210_int = 0; var_5211_string = ""; // 0x2f3f PushV
	var_5211_string = "b4q01"; // 0x2f40 MovS
	func_106(var_5210_int, var_5211_string); // 0x2f41 NEW_2
	var_5212_int = 0; // 0x2f43 PushI
	var_5213_bool = var_5210_int == var_5212_int; // 0x2f44 Eq
	if(var_5213_bool == 0) goto Label_12104; // 0x2f45 JumpB
	var_5207_bool = 1; // 0x2f46 MovB
	return 0; // 0x2f47 Return
	
Label_12104:
	var_5207_bool = 0; // 0x2f48 MovB
	return 0; // 0x2f49 Return
}


func_10046(var_6129_int, var_6130_float)
{
	var_6131_int = 0; var_6132_int = 0; var_6133_int = 0; var_6134_float = 0; // 0x273f PushV
	var_6132_int = 518218; // 0x2740 MovI
	var_6133_int = 518217; // 0x2741 MovI
	var_6134_float = var_6130_float; // 0x2742 Mov
	func_12278(var_6131_int, var_6132_int, var_6133_int, var_6134_float); // 0x2743 NEW_2
	var_6129_int = var_6131_int; // 0x2744 Mov
	return 0; // 0x2746 Return
}


func_10055(var_6145_int, var_6146_float)
{
	var_6147_int = 0; var_6148_int = 0; var_6149_int = 0; var_6150_float = 0; // 0x2748 PushV
	var_6148_int = 518220; // 0x2749 MovI
	var_6149_int = 518219; // 0x274a MovI
	var_6150_float = var_6146_float; // 0x274b Mov
	func_12278(var_6147_int, var_6148_int, var_6149_int, var_6150_float); // 0x274c NEW_2
	var_6145_int = var_6147_int; // 0x274d Mov
	return 0; // 0x274f Return
}


func_6984(var_4096_int, var_4097_int, var_4098_object, var_4099_object, var_4100_object, var_4101_object)
{
	var_4102_int = 0; // 0x1b49 PushI
	var_4103_bool = var_4097_int == var_4102_int; // 0x1b4a Eq
	if(var_4103_bool == 0) goto Label_7024; // 0x1b4b JumpB
	var_4104_int = 0; var_4105_bool = 0; // 0x1b4c PushV
	var_4104_int = 13; // 0x1b4d MovI
	var_4105_bool = 0; // 0x1b4e MovB
	func_746(var_4104_int, var_4105_bool); // 0x1b4f NEW_2
	var_4106_int = 0; var_4107_bool = 0; var_4108_int = 0; // 0x1b51 PushV
	var_4106_int = 13; // 0x1b52 MovI
	var_4107_bool = 0; // 0x1b53 MovB
	var_4108_int = 1; // 0x1b54 MovI
	func_763(var_4106_int, var_4107_bool, var_4108_int); // 0x1b55 NEW_2
	var_4109_int = 0; var_4110_int = 0; var_4111_object = Obj(); var_4112_object = Obj(); var_4113_object = Obj(); // 0x1b57 PushV
	var_4109_int = 13; // 0x1b58 MovI
	var_4110_int = var_4096_int; // 0x1b59 Mov
	var_4111_object = var_4098_object; // 0x1b5a Mov
	var_4112_object = var_4099_object; // 0x1b5b Mov
	var_4113_object = var_4100_object; // 0x1b5c Mov
	func_670(var_4109_int, var_4110_int, var_4111_object, var_4112_object, var_4113_object); // 0x1b5d NEW_2
	var_4114_object = Obj(); var_4115_int = 0; // 0x1b5f PushV
	var_4114_object = var_4101_object; // 0x1b60 Mov
	var_4115_int = 2; // 0x1b61 MovI
	func_255(var_4115_int); // 0x1b62 NEW_2
	var_4116_int = 0; var_4117_bool = 0; var_4118_int = 0; // 0x1b64 PushV
	var_4116_int = 13; // 0x1b65 MovI
	var_4117_bool = 0; // 0x1b66 MovB
	var_4118_int = 4; // 0x1b67 MovI
	func_820(var_4116_int, var_4117_bool, var_4118_int); // 0x1b68 NEW_2
	var_4119_int = 0; var_4120_bool = 0; var_4121_int = 0; // 0x1b6a PushV
	var_4119_int = 13; // 0x1b6b MovI
	var_4120_bool = 1; // 0x1b6c MovB
	var_4121_int = 4; // 0x1b6d MovI
	func_882(var_4119_int, var_4120_bool, var_4121_int); // 0x1b6e NEW_2
	
Label_7024:
	var_4122_int = 0; var_4123_bool = 0; // 0x1b70 PushV
	var_4122_int = 13; // 0x1b71 MovI
	var_4123_bool = 0; // 0x1b72 MovB
	func_729(var_4122_int, var_4123_bool); // 0x1b73 NEW_2
	var_4124_int = 0; var_4125_int = 0; var_4126_int = 0; // 0x1b75 PushV
	var_4124_int = 13; // 0x1b76 MovI
	var_4125_int = var_4096_int; // 0x1b77 Mov
	var_4126_int = var_4097_int; // 0x1b78 Mov
	func_3609(var_4124_int, var_4125_int, var_4126_int); // 0x1b79 NEW_2
	return 0; // 0x1b7b Return
}


func_5960(var_3931_int, var_3932_int, var_3933_object, var_3934_object, var_3935_object, var_3936_object)
{
	var_3937_int = 0; // 0x1749 PushI
	var_3938_bool = var_3932_int == var_3937_int; // 0x174a Eq
	if(var_3938_bool == 0) goto Label_6000; // 0x174b JumpB
	var_3939_int = 0; var_3940_bool = 0; // 0x174c PushV
	var_3939_int = 8; // 0x174d MovI
	var_3940_bool = 0; // 0x174e MovB
	func_746(var_3939_int, var_3940_bool); // 0x174f NEW_2
	var_3941_int = 0; var_3942_bool = 0; var_3943_int = 0; // 0x1751 PushV
	var_3941_int = 8; // 0x1752 MovI
	var_3942_bool = 0; // 0x1753 MovB
	var_3943_int = 1; // 0x1754 MovI
	func_763(var_3941_int, var_3942_bool, var_3943_int); // 0x1755 NEW_2
	var_3944_int = 0; var_3945_int = 0; var_3946_object = Obj(); var_3947_object = Obj(); var_3948_object = Obj(); // 0x1757 PushV
	var_3944_int = 8; // 0x1758 MovI
	var_3945_int = var_3931_int; // 0x1759 Mov
	var_3946_object = var_3933_object; // 0x175a Mov
	var_3947_object = var_3934_object; // 0x175b Mov
	var_3948_object = var_3935_object; // 0x175c Mov
	func_670(var_3944_int, var_3945_int, var_3946_object, var_3947_object, var_3948_object); // 0x175d NEW_2
	var_3949_object = Obj(); var_3950_int = 0; // 0x175f PushV
	var_3949_object = var_3936_object; // 0x1760 Mov
	var_3950_int = 2; // 0x1761 MovI
	func_255(var_3950_int); // 0x1762 NEW_2
	var_3951_int = 0; var_3952_bool = 0; var_3953_int = 0; // 0x1764 PushV
	var_3951_int = 8; // 0x1765 MovI
	var_3952_bool = 0; // 0x1766 MovB
	var_3953_int = 4; // 0x1767 MovI
	func_820(var_3951_int, var_3952_bool, var_3953_int); // 0x1768 NEW_2
	var_3954_int = 0; var_3955_bool = 0; var_3956_int = 0; // 0x176a PushV
	var_3954_int = 8; // 0x176b MovI
	var_3955_bool = 1; // 0x176c MovB
	var_3956_int = 4; // 0x176d MovI
	func_882(var_3954_int, var_3955_bool, var_3956_int); // 0x176e NEW_2
	
Label_6000:
	var_3957_int = 0; var_3958_bool = 0; // 0x1770 PushV
	var_3957_int = 8; // 0x1771 MovI
	var_3958_bool = 0; // 0x1772 MovB
	func_729(var_3957_int, var_3958_bool); // 0x1773 NEW_2
	var_3959_int = 0; var_3960_int = 0; var_3961_int = 0; // 0x1775 PushV
	var_3959_int = 8; // 0x1776 MovI
	var_3960_int = var_3931_int; // 0x1777 Mov
	var_3961_int = var_3932_int; // 0x1778 Mov
	func_3609(var_3959_int, var_3960_int, var_3961_int); // 0x1779 NEW_2
	return 0; // 0x177b Return
}


func_12106(var_5331_bool)
{
	var_5334_int = 0; var_5335_string = ""; // 0x2f4b PushV
	var_5335_string = "b5q01"; // 0x2f4c MovS
	func_106(var_5334_int, var_5335_string); // 0x2f4d NEW_2
	var_5336_int = 0; // 0x2f4f PushI
	var_5337_bool = var_5334_int == var_5336_int; // 0x2f50 Eq
	if(var_5337_bool == 0) goto Label_12116; // 0x2f51 JumpB
	var_5331_bool = 1; // 0x2f52 MovB
	return 0; // 0x2f53 Return
	
Label_12116:
	var_5331_bool = 0; // 0x2f54 MovB
	return 0; // 0x2f55 Return
}


func_2894(var_2435_int, var_2436_int, var_2437_int)
{
	var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; var_2441_int = 0; // 0xb4e PushV
	var_2442_bool = 0; // 0xb4f PushV
	var_2442_bool = 0; // 0xb50 MovB
	var_2443_int = 8; // 0xb51 PushI
	var_2444_bool = var_2437_int > var_2443_int; // 0xb52 GT
	if(var_2444_bool == 0) goto Label_2904; // 0xb53 JumpB
	var_2445_int = 21; // 0xb54 PushI
	var_2446_bool = var_2437_int < var_2445_int; // 0xb55 LT
	if(var_2446_bool == 0) goto Label_2904; // 0xb56 JumpB
	var_2442_bool = 1; // 0xb57 MovB
	
Label_2904:
	if(var_2442_bool == 0) goto Label_2959; // 0xb58 JumpB
	var_2447_int = 0; var_2448_string = ""; var_2449_string = ""; var_2450_int = 0; // 0xb59 PushV
	var_2447_int = var_2435_int; // 0xb5a Mov
	var_2448_string = "pers_vaxxabit"; // 0xb5b MovS
	var_2449_string = "vaxxabit_d.xml"; // 0xb5c MovS
	var_2450_int = 6; // 0xb5d MovI
	func_453(var_2447_int, var_2448_string, var_2449_string, var_2450_int); // 0xb5e NEW_2
	var_2451_int = 0; var_2452_string = ""; var_2453_string = ""; var_2454_int = 0; // 0xb60 PushV
	var_2451_int = var_2435_int; // 0xb61 Mov
	var_2452_string = "pers_vaxxabitka"; // 0xb62 MovS
	var_2453_string = "vaxxabitka_d.xml"; // 0xb63 MovS
	var_2454_int = 6; // 0xb64 MovI
	func_453(var_2451_int, var_2452_string, var_2453_string, var_2454_int); // 0xb65 NEW_2
	var_2455_int = 0; var_2456_string = ""; var_2457_string = ""; var_2458_int = 0; // 0xb67 PushV
	var_2455_int = var_2435_int; // 0xb68 Mov
	var_2456_string = "pers_rat_big"; // 0xb69 MovS
	var_2457_string = "rat_big.xml"; // 0xb6a MovS
	var_2458_int = 2; // 0xb6b MovI
	func_453(var_2455_int, var_2456_string, var_2457_string, var_2458_int); // 0xb6c NEW_2
	var_2459_int = 0; var_2460_string = ""; var_2461_string = ""; var_2462_int = 0; // 0xb6e PushV
	var_2459_int = var_2435_int; // 0xb6f Mov
	var_2460_string = "fog"; // 0xb70 MovS
	var_2461_string = "fog.xml"; // 0xb71 MovS
	var_2462_int = 6; // 0xb72 MovI
	func_479(var_2459_int, var_2460_string, var_2461_string, var_2462_int); // 0xb73 NEW_2
	var_2463_int = 5; // 0xb75 PushI
	var_2464_bool = var_2436_int >= var_2463_int; // 0xb76 GE
	if(var_2464_bool == 0) goto Label_2943; // 0xb77 JumpB
	var_2465_int = 0; var_2466_string = ""; var_2467_string = ""; var_2468_int = 0; // 0xb78 PushV
	var_2465_int = var_2435_int; // 0xb79 Mov
	var_2466_string = "fog"; // 0xb7a MovS
	var_2467_string = "fog_hunter.xml"; // 0xb7b MovS
	var_2468_int = 2; // 0xb7c MovI
	func_479(var_2465_int, var_2466_string, var_2467_string, var_2468_int); // 0xb7d NEW_2
	
Label_2943:
	var_2469_int = 1; // 0xb7f PushI
	var_2470_float = 0; var_2471_int = 0; // 0xb80 PushV
	var_2471_int = var_2436_int; // 0xb81 Mov
	func_1205(var_2470_float, var_2471_int); // 0xb82 NEW_2
	var_2440_int = var_2469_int * var_2470_float; // 0xb84 Mult2
	var_2472_int = var_2440_int; // 0xb85 Push
	if(var_2472_int == 0) goto Label_2958; // 0xb86 JumpB
	var_2473_int = 0; var_2474_string = ""; var_2475_string = ""; var_2476_int = 0; // 0xb87 PushV
	var_2473_int = var_2435_int; // 0xb88 Mov
	var_2474_string = "pers_bomber"; // 0xb89 MovS
	var_2475_string = "bomber.xml"; // 0xb8a MovS
	var_2476_int = var_2440_int; // 0xb8b Mov
	func_453(var_2473_int, var_2474_string, var_2475_string, var_2476_int); // 0xb8c NEW_2
	
Label_2958:
	goto Label_3012; // 0xb8e Jump
	
Label_3012:
	var_2477_int = 0; var_2478_string = ""; var_2479_string = ""; var_2480_int = 0; var_2481_int = 0; var_2482_int = 0; // 0xbc4 PushV
	var_2477_int = var_2435_int; // 0xbc5 Mov
	var_2478_string = "pers_worker"; // 0xbc6 MovS
	var_2479_string = "agony1_man.xml"; // 0xbc7 MovS
	var_2480_int = 2; // 0xbc8 MovI
	var_2481_int = 4; // 0xbc9 MovI
	var_2482_int = 4; // 0xbca MovI
	func_466(var_2477_int, var_2478_string, var_2479_string, var_2480_int, var_2481_int, var_2482_int); // 0xbcb NEW_2
	var_2483_int = 0; var_2484_string = ""; var_2485_string = ""; var_2486_int = 0; var_2487_int = 0; var_2488_int = 0; // 0xbcd PushV
	var_2483_int = var_2435_int; // 0xbce Mov
	var_2484_string = "pers_unosha"; // 0xbcf MovS
	var_2485_string = "agony1_man.xml"; // 0xbd0 MovS
	var_2486_int = 2; // 0xbd1 MovI
	var_2487_int = 4; // 0xbd2 MovI
	var_2488_int = 4; // 0xbd3 MovI
	func_466(var_2483_int, var_2484_string, var_2485_string, var_2486_int, var_2487_int, var_2488_int); // 0xbd4 NEW_2
	var_2489_int = 0; var_2490_string = ""; var_2491_string = ""; var_2492_int = 0; var_2493_int = 0; var_2494_int = 0; // 0xbd6 PushV
	var_2489_int = var_2435_int; // 0xbd7 Mov
	var_2490_string = "pers_woman"; // 0xbd8 MovS
	var_2491_string = "agony1_woman.xml"; // 0xbd9 MovS
	var_2492_int = 2; // 0xbda MovI
	var_2493_int = 4; // 0xbdb MovI
	var_2494_int = 4; // 0xbdc MovI
	func_466(var_2489_int, var_2490_string, var_2491_string, var_2492_int, var_2493_int, var_2494_int); // 0xbdd NEW_2
	var_2495_int = 0; var_2496_string = ""; var_2497_string = ""; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0; // 0xbdf PushV
	var_2495_int = var_2435_int; // 0xbe0 Mov
	var_2496_string = "pers_wasted_girl"; // 0xbe1 MovS
	var_2497_string = "agony1_woman.xml"; // 0xbe2 MovS
	var_2498_int = 2; // 0xbe3 MovI
	var_2499_int = 4; // 0xbe4 MovI
	var_2500_int = 4; // 0xbe5 MovI
	func_466(var_2495_int, var_2496_string, var_2497_string, var_2498_int, var_2499_int, var_2500_int); // 0xbe6 NEW_2
	var_2501_bool = 0; var_2502_int = 0; var_2503_int = 0; // 0xbe8 PushV
	var_2502_int = var_2436_int; // 0xbe9 Mov
	var_2503_int = var_2437_int; // 0xbea Mov
	func_1295(var_2501_bool, var_2502_int, var_2503_int); // 0xbeb NEW_2
	if(var_2501_bool == 0) goto Label_3061; // 0xbed JumpB
	var_2504_int = 0; var_2505_string = ""; var_2506_string = ""; var_2507_int = 0; // 0xbee PushV
	var_2504_int = var_2435_int; // 0xbef Mov
	var_2505_string = "pers_soldat"; // 0xbf0 MovS
	var_2506_string = "soldier_marauder.xml"; // 0xbf1 MovS
	var_2507_int = 2; // 0xbf2 MovI
	func_453(var_2504_int, var_2505_string, var_2506_string, var_2507_int); // 0xbf3 NEW_2
	
Label_3061:
	var_2508_bool = 0; var_2509_int = 0; var_2510_int = 0; // 0xbf5 PushV
	var_2509_int = var_2436_int; // 0xbf6 Mov
	var_2510_int = var_2437_int; // 0xbf7 Mov
	func_1305(var_2508_bool, var_2509_int, var_2510_int); // 0xbf8 NEW_2
	if(var_2508_bool == 0) goto Label_3074; // 0xbfa JumpB
	var_2511_int = 0; var_2512_string = ""; var_2513_string = ""; var_2514_int = 0; // 0xbfb PushV
	var_2511_int = var_2435_int; // 0xbfc Mov
	var_2512_string = "pers_nudegirl"; // 0xbfd MovS
	var_2513_string = "nudegirl.xml"; // 0xbfe MovS
	var_2514_int = 1; // 0xbff MovI
	func_453(var_2511_int, var_2512_string, var_2513_string, var_2514_int); // 0xc00 NEW_2
	
Label_3074:
	var_2515_bool = 0; var_2516_int = 0; // 0xc02 PushV
	var_2516_int = var_2436_int; // 0xc03 Mov
	func_1322(var_2515_bool, var_2516_int); // 0xc04 NEW_2
	if(var_2515_bool == 0) goto Label_3086; // 0xc06 JumpB
	var_2517_int = 0; var_2518_string = ""; var_2519_string = ""; var_2520_int = 0; // 0xc07 PushV
	var_2517_int = var_2435_int; // 0xc08 Mov
	var_2518_string = "pers_sanitar"; // 0xc09 MovS
	var_2519_string = "sanitar.xml"; // 0xc0a MovS
	var_2520_int = 1; // 0xc0b MovI
	func_453(var_2517_int, var_2518_string, var_2519_string, var_2520_int); // 0xc0c NEW_2
	
Label_3086:
	return 4; // 0xc0e Return
	
Label_2959:
	var_2521_int = 0; var_2522_string = ""; var_2523_string = ""; var_2524_int = 0; // 0xb8f PushV
	var_2521_int = var_2435_int; // 0xb90 Mov
	var_2522_string = "pers_vaxxabit"; // 0xb91 MovS
	var_2523_string = "vaxxabit_d.xml"; // 0xb92 MovS
	var_2524_int = 5; // 0xb93 MovI
	func_453(var_2521_int, var_2522_string, var_2523_string, var_2524_int); // 0xb94 NEW_2
	var_2525_int = 0; var_2526_string = ""; var_2527_string = ""; var_2528_int = 0; // 0xb96 PushV
	var_2525_int = var_2435_int; // 0xb97 Mov
	var_2526_string = "pers_vaxxabitka"; // 0xb98 MovS
	var_2527_string = "vaxxabitka_d.xml"; // 0xb99 MovS
	var_2528_int = 5; // 0xb9a MovI
	func_453(var_2525_int, var_2526_string, var_2527_string, var_2528_int); // 0xb9b NEW_2
	var_2529_int = 0; var_2530_string = ""; var_2531_string = ""; var_2532_int = 0; // 0xb9d PushV
	var_2529_int = var_2435_int; // 0xb9e Mov
	var_2530_string = "pers_rat_big"; // 0xb9f MovS
	var_2531_string = "rat_big.xml"; // 0xba0 MovS
	var_2532_int = 3; // 0xba1 MovI
	func_453(var_2529_int, var_2530_string, var_2531_string, var_2532_int); // 0xba2 NEW_2
	var_2533_int = 0; var_2534_string = ""; var_2535_string = ""; var_2536_int = 0; // 0xba4 PushV
	var_2533_int = var_2435_int; // 0xba5 Mov
	var_2534_string = "fog"; // 0xba6 MovS
	var_2535_string = "fog.xml"; // 0xba7 MovS
	var_2536_int = 6; // 0xba8 MovI
	func_479(var_2533_int, var_2534_string, var_2535_string, var_2536_int); // 0xba9 NEW_2
	var_2537_int = 5; // 0xbab PushI
	var_2538_bool = var_2436_int >= var_2537_int; // 0xbac GE
	if(var_2538_bool == 0) goto Label_2997; // 0xbad JumpB
	var_2539_int = 0; var_2540_string = ""; var_2541_string = ""; var_2542_int = 0; // 0xbae PushV
	var_2539_int = var_2435_int; // 0xbaf Mov
	var_2540_string = "fog"; // 0xbb0 MovS
	var_2541_string = "fog_hunter.xml"; // 0xbb1 MovS
	var_2542_int = 2; // 0xbb2 MovI
	func_479(var_2539_int, var_2540_string, var_2541_string, var_2542_int); // 0xbb3 NEW_2
	
Label_2997:
	var_2543_int = 1; // 0xbb5 PushI
	var_2544_float = 0; var_2545_int = 0; // 0xbb6 PushV
	var_2545_int = var_2436_int; // 0xbb7 Mov
	func_1205(var_2544_float, var_2545_int); // 0xbb8 NEW_2
	var_2441_int = var_2543_int * var_2544_float; // 0xbba Mult2
	var_2546_int = var_2441_int; // 0xbbb Push
	if(var_2546_int == 0) goto Label_3012; // 0xbbc JumpB
	var_2547_int = 0; var_2548_string = ""; var_2549_string = ""; var_2550_int = 0; // 0xbbd PushV
	var_2547_int = var_2435_int; // 0xbbe Mov
	var_2548_string = "pers_bomber"; // 0xbbf MovS
	var_2549_string = "bomber.xml"; // 0xbc0 MovS
	var_2550_int = var_2441_int; // 0xbc1 Mov
	func_453(var_2547_int, var_2548_string, var_2549_string, var_2550_int); // 0xbc2 NEW_2
}


func_10064(var_4716_int, var_4717_float)
{
	var_4718_int = 0; var_4719_int = 0; var_4720_int = 0; var_4721_float = 0; // 0x2751 PushV
	var_4719_int = 529846; // 0x2752 MovI
	var_4720_int = 529845; // 0x2753 MovI
	var_4721_float = var_4717_float; // 0x2754 Mov
	func_12278(var_4718_int, var_4719_int, var_4720_int, var_4721_float); // 0x2755 NEW_2
	var_4716_int = var_4718_int; // 0x2756 Mov
	return 0; // 0x2758 Return
}


func_12118(var_6122_bool)
{
	var_6125_int = 0; var_6126_string = ""; // 0x2f57 PushV
	var_6126_string = "b2q01"; // 0x2f58 MovS
	func_106(var_6125_int, var_6126_string); // 0x2f59 NEW_2
	var_6127_int = 0; // 0x2f5b PushI
	var_6128_bool = var_6125_int == var_6127_int; // 0x2f5c Eq
	if(var_6128_bool == 0) goto Label_12128; // 0x2f5d JumpB
	var_6122_bool = 1; // 0x2f5e MovB
	return 0; // 0x2f5f Return
	
Label_12128:
	var_6122_bool = 0; // 0x2f60 MovB
	return 0; // 0x2f61 Return
}


func_10073(var_6161_int, var_6162_float)
{
	var_6163_int = 0; var_6164_int = 0; var_6165_int = 0; var_6166_float = 0; // 0x275a PushV
	var_6164_int = 520462; // 0x275b MovI
	var_6165_int = 520461; // 0x275c MovI
	var_6166_float = var_6162_float; // 0x275d Mov
	func_12278(var_6163_int, var_6164_int, var_6165_int, var_6166_float); // 0x275e NEW_2
	var_6161_int = var_6163_int; // 0x275f Mov
	return 0; // 0x2761 Return
}


func_11105()
{
	var_4783_object = Obj(); var_4784_object = Obj(); var_4785_object = Obj(); var_4786_object = Obj(); // 0x2b61 PushV
	var_4787_object = Obj(); // 0x2b62 PushV
	func_12286(var_4787_object); // 0x2b63 NEW_2
	var_4785_object = var_4787_object; // 0x2b64 Mov
	var_4794_string = "b7q01AglajaGotoStarshina"; // 0x2b66 PushS
	FindMark(var_4786_object, var_4794_string); // 0x2b67 ObjFunc
	var_4795_object = var_4786_object; // 0x2b69 Push
	if(var_4795_object == 0) goto Label_11117; // 0x2b6a JumpB
	Remove(); // 0x2b6b ObjFunc
	
Label_11117:
	var_4796_string = "b7q01BirdmaskGotoMat"; // 0x2b6d PushS
	FindMark(var_4786_object, var_4796_string); // 0x2b6e ObjFunc
	var_4797_object = var_4786_object; // 0x2b70 Push
	if(var_4797_object == 0) goto Label_11124; // 0x2b71 JumpB
	Remove(); // 0x2b72 ObjFunc
	
Label_11124:
	var_4798_string = "b7q01DankoGotoSobor"; // 0x2b74 PushS
	FindMark(var_4786_object, var_4798_string); // 0x2b75 ObjFunc
	var_4799_object = var_4786_object; // 0x2b77 Push
	if(var_4799_object == 0) goto Label_11131; // 0x2b78 JumpB
	Remove(); // 0x2b79 ObjFunc
	
Label_11131:
	var_4800_string = "b7q01MatGotoPrison"; // 0x2b7b PushS
	FindMark(var_4786_object, var_4800_string); // 0x2b7c ObjFunc
	var_4801_object = var_4786_object; // 0x2b7e Push
	if(var_4801_object == 0) goto Label_11138; // 0x2b7f JumpB
	Remove(); // 0x2b80 ObjFunc
	
Label_11138:
	var_4802_string = "b7q01PatrolGotoGorbun"; // 0x2b82 PushS
	FindMark(var_4786_object, var_4802_string); // 0x2b83 ObjFunc
	var_4803_object = var_4786_object; // 0x2b85 Push
	if(var_4803_object == 0) goto Label_11145; // 0x2b86 JumpB
	Remove(); // 0x2b87 ObjFunc
	
Label_11145:
	var_4804_string = "b7q01ViktorGotoSobor"; // 0x2b89 PushS
	FindMark(var_4786_object, var_4804_string); // 0x2b8a ObjFunc
	var_4805_object = var_4786_object; // 0x2b8c Push
	if(var_4805_object == 0) goto Label_11152; // 0x2b8d JumpB
	Remove(); // 0x2b8e ObjFunc
	
Label_11152:
	var_4806_string = "b7q01WastedGotoViktor"; // 0x2b90 PushS
	FindMark(var_4786_object, var_4806_string); // 0x2b91 ObjFunc
	var_4807_object = var_4786_object; // 0x2b93 Push
	if(var_4807_object == 0) goto Label_11159; // 0x2b94 JumpB
	Remove(); // 0x2b95 ObjFunc
	
Label_11159:
	var_4808_string = "b7q03AglajaGotoTheater"; // 0x2b97 PushS
	FindMark(var_4786_object, var_4808_string); // 0x2b98 ObjFunc
	var_4809_object = var_4786_object; // 0x2b9a Push
	if(var_4809_object == 0) goto Label_11166; // 0x2b9b JumpB
	Remove(); // 0x2b9c ObjFunc
	
Label_11166:
	var_4810_bool = 0; var_4811_int = 0; // 0x2b9e PushV
	var_4811_int = 253; // 0x2b9f MovI
	func_12261(var_4810_bool, var_4811_int); // 0x2ba0 NEW_2
	var_4822_bool = 0; var_4823_int = 0; // 0x2ba2 PushV
	var_4823_int = 270; // 0x2ba3 MovI
	func_12261(var_4822_bool, var_4823_int); // 0x2ba4 NEW_2
	var_4824_bool = 0; var_4825_int = 0; // 0x2ba6 PushV
	var_4825_int = 280; // 0x2ba7 MovI
	func_12261(var_4824_bool, var_4825_int); // 0x2ba8 NEW_2
	return 4; // 0x2baa Return
}


func_10082(var_4692_int, var_4693_float)
{
	var_4694_int = 0; var_4695_int = 0; var_4696_int = 0; var_4697_float = 0; // 0x2763 PushV
	var_4695_int = 529842; // 0x2764 MovI
	var_4696_int = 529841; // 0x2765 MovI
	var_4697_float = var_4693_float; // 0x2766 Mov
	func_12278(var_4694_int, var_4695_int, var_4696_int, var_4697_float); // 0x2767 NEW_2
	var_4692_int = var_4694_int; // 0x2768 Mov
	return 0; // 0x276a Return
}


func_12130(var_6153_bool)
{
	var_6156_int = 0; var_6157_string = ""; // 0x2f63 PushV
	var_6157_string = "b2MladVladBurahHomeTalk"; // 0x2f64 MovS
	func_106(var_6156_int, var_6157_string); // 0x2f65 NEW_2
	var_6158_int = 1; // 0x2f67 PushI
	var_6159_bool = var_6156_int == var_6158_int; // 0x2f68 Eq
	if(var_6159_bool == 0) goto Label_12140; // 0x2f69 JumpB
	var_6153_bool = 1; // 0x2f6a MovB
	return 0; // 0x2f6b Return
	
Label_12140:
	var_6153_bool = 0; // 0x2f6c MovB
	return 0; // 0x2f6d Return
}


func_4970(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object)
{
	var_1254_int = 0; // 0x136b PushI
	var_1255_bool = var_1249_int == var_1254_int; // 0x136c Eq
	if(var_1255_bool == 0) goto Label_5010; // 0x136d JumpB
	var_1256_int = 0; var_1257_bool = 0; // 0x136e PushV
	var_1256_int = 3; // 0x136f MovI
	var_1257_bool = 0; // 0x1370 MovB
	func_746(var_1256_int, var_1257_bool); // 0x1371 NEW_2
	var_1258_int = 0; var_1259_bool = 0; var_1260_int = 0; // 0x1373 PushV
	var_1258_int = 3; // 0x1374 MovI
	var_1259_bool = 0; // 0x1375 MovB
	var_1260_int = 1; // 0x1376 MovI
	func_763(var_1258_int, var_1259_bool, var_1260_int); // 0x1377 NEW_2
	var_1261_int = 0; var_1262_int = 0; var_1263_object = Obj(); var_1264_object = Obj(); var_1265_object = Obj(); // 0x1379 PushV
	var_1261_int = 3; // 0x137a MovI
	var_1262_int = var_1248_int; // 0x137b Mov
	var_1263_object = var_1250_object; // 0x137c Mov
	var_1264_object = var_1251_object; // 0x137d Mov
	var_1265_object = var_1252_object; // 0x137e Mov
	func_572(var_1262_int, var_1263_object, var_1264_object, var_1265_object); // 0x137f NEW_2
	var_1266_object = Obj(); var_1267_int = 0; // 0x1381 PushV
	var_1266_object = var_1253_object; // 0x1382 Mov
	var_1267_int = 0; // 0x1383 MovI
	func_255(var_1267_int); // 0x1384 NEW_2
	var_1268_int = 0; var_1269_bool = 0; var_1270_int = 0; // 0x1386 PushV
	var_1268_int = 3; // 0x1387 MovI
	var_1269_bool = 0; // 0x1388 MovB
	var_1270_int = 7; // 0x1389 MovI
	func_820(var_1268_int, var_1269_bool, var_1270_int); // 0x138a NEW_2
	var_1271_int = 0; var_1272_bool = 0; var_1273_int = 0; // 0x138c PushV
	var_1271_int = 3; // 0x138d MovI
	var_1272_bool = 0; // 0x138e MovB
	var_1273_int = 7; // 0x138f MovI
	func_882(var_1271_int, var_1272_bool, var_1273_int); // 0x1390 NEW_2
	
Label_5010:
	var_1274_int = 0; var_1275_int = 0; // 0x1392 PushV
	var_1274_int = 3; // 0x1393 MovI
	var_1275_int = var_1249_int; // 0x1394 Mov
	func_933(var_1274_int, var_1275_int); // 0x1395 NEW_2
	var_1291_int = 0; var_1292_int = 0; var_1293_int = 0; // 0x1397 PushV
	var_1291_int = 3; // 0x1398 MovI
	var_1292_int = var_1248_int; // 0x1399 Mov
	var_1293_int = var_1249_int; // 0x139a Mov
	func_1847(var_1291_int, var_1292_int, var_1293_int); // 0x139b NEW_2
	return 0; // 0x139d Return
}


func_10091(var_6322_int, var_6323_float)
{
	var_6324_int = 0; var_6325_int = 0; var_6326_int = 0; var_6327_float = 0; // 0x276c PushV
	var_6325_int = 519684; // 0x276d MovI
	var_6326_int = 519683; // 0x276e MovI
	var_6327_float = var_6323_float; // 0x276f Mov
	func_12278(var_6324_int, var_6325_int, var_6326_int, var_6327_float); // 0x2770 NEW_2
	var_6322_int = var_6324_int; // 0x2771 Mov
	return 0; // 0x2773 Return
}


func_12142(var_5097_bool)
{
	var_5100_int = 0; var_5101_string = ""; // 0x2f6f PushV
	var_5101_string = "b2q01"; // 0x2f70 MovS
	func_106(var_5100_int, var_5101_string); // 0x2f71 NEW_2
	var_5102_int = 1000; // 0x2f73 PushI
	var_5103_bool = var_5100_int == var_5102_int; // 0x2f74 Eq
	if(var_5103_bool == 0) goto Label_12152; // 0x2f75 JumpB
	var_5097_bool = 1; // 0x2f76 MovB
	return 0; // 0x2f77 Return
	
Label_12152:
	var_5097_bool = 0; // 0x2f78 MovB
	return 0; // 0x2f79 Return
}


func_882(var_686_int, var_687_bool, var_688_int)
{
	var_689_string = ""; var_690_object = Obj(); var_691_object = Obj(); var_692_int = 0; var_693_string = ""; var_694_object = Obj(); var_695_string = ""; var_696_object = Obj(); var_697_object = Obj(); var_698_int = 0; var_699_string = ""; var_700_object = Obj(); // 0x372 PushV
	var_701_string = "dr_mark"; // 0x373 PushS
	var_702_int = 1; // 0x374 PushI
	var_703_int = var_686_int + var_702_int; // 0x375 Add
	var_695_string = var_701_string + var_703_int; // 0x376 Add2
	var_704_string = "br_"; // 0x377 PushS
	var_705_int = 1; // 0x378 PushI
	var_706_int = var_686_int + var_705_int; // 0x379 Add
	var_707_int = var_704_string + var_706_int; // 0x37a Add
	FindActor(var_696_object, var_707_int); // 0x37b Func
	var_708_bool = var_687_bool; // 0x37d Push
	if(var_708_bool == 0) goto Label_908; // 0x37e JumpB
	var_709_bool = var_696_object == 0; // 0x37f Not
	if(var_709_bool == 0) goto Label_907; // 0x380 JumpB
	GetMainOutdoorScene(var_697_object); // 0x381 Func
	var_710_string = "br_"; // 0x383 PushS
	var_711_int = 1; // 0x384 PushI
	var_712_int = var_686_int + var_711_int; // 0x385 Add
	var_713_int = var_710_string + var_712_int; // 0x386 Add
	var_714_cvector = CVector(0.0, 0.0, 0.0); // 0x387 PushVec
	AddActor(var_696_object, var_713_int, var_697_object, var_714_cvector); // 0x388 Func
	var_697_object = 0; // 0x38a SetNull
	
Label_907:
	goto Label_912; // 0x38b Jump
	
Label_912:
	var_698_int = 1; // 0x390 MovI
	
Label_913:
	var_715_bool = var_698_int <= var_688_int; // 0x391 LE
	if(var_715_bool == 0) goto Label_931; // 0x392 JumpB
	var_716_string = "_"; // 0x393 PushS
	var_717_int = var_695_string + var_716_string; // 0x394 Add
	var_699_string = var_717_int + var_698_int; // 0x395 Add2
	FindActor(var_700_object, var_699_string); // 0x396 Func
	var_718_object = var_700_object; // 0x398 Push
	if(var_718_object == 0) goto Label_927; // 0x399 JumpB
	var_719_bool = 0; var_720_string = ""; var_721_string = ""; // 0x39a PushV
	var_720_string = var_699_string; // 0x39b Mov
	var_721_string = "cleanup"; // 0x39c MovS
	func_189(var_719_bool, var_720_string, var_721_string); // 0x39d NEW_2
	
Label_927:
	var_700_object = 0; // 0x39f SetNull
	var_722_int = 1; // 0x3a0 PushI
	var_698_int = var_698_int + var_722_int; // 0x3a1 Add2
	goto Label_913; // 0x3a2 Jump
	
Label_931:
	return 12; // 0x3a3 Return
	
Label_908:
	var_723_object = var_696_object; // 0x38c Push
	if(var_723_object == 0) goto Label_912; // 0x38d JumpB
	RemoveActor(var_696_object); // 0x38e Func
}


func_10100(var_4684_int, var_4685_float)
{
	var_4686_int = 0; var_4687_int = 0; var_4688_int = 0; var_4689_float = 0; // 0x2775 PushV
	var_4687_int = 529848; // 0x2776 MovI
	var_4688_int = 529847; // 0x2777 MovI
	var_4689_float = var_4685_float; // 0x2778 Mov
	func_12278(var_4686_int, var_4687_int, var_4688_int, var_4689_float); // 0x2779 NEW_2
	var_4684_int = var_4686_int; // 0x277a Mov
	return 0; // 0x277c Return
}


func_12154(var_6137_bool)
{
	var_6140_int = 0; var_6141_string = ""; // 0x2f7b PushV
	var_6141_string = "b2DankoTalk"; // 0x2f7c MovS
	func_106(var_6140_int, var_6141_string); // 0x2f7d NEW_2
	var_6142_int = 1; // 0x2f7f PushI
	var_6143_bool = var_6140_int == var_6142_int; // 0x2f80 Eq
	if(var_6143_bool == 0) goto Label_12164; // 0x2f81 JumpB
	var_6137_bool = 1; // 0x2f82 MovB
	return 0; // 0x2f83 Return
	
Label_12164:
	var_6137_bool = 0; // 0x2f84 MovB
	return 0; // 0x2f85 Return
}


func_7036()
{
	var_298_string = "lc_house7_02"; // 0x1b7d PushS
	add(var_298_string); // 0x1b7e ObjFunc
	var_299_string = "lc_house7_03"; // 0x1b80 PushS
	add(var_299_string); // 0x1b81 ObjFunc
	var_300_string = "lc_house7_04"; // 0x1b83 PushS
	add(var_300_string); // 0x1b84 ObjFunc
	var_301_string = "lc_house7_05"; // 0x1b86 PushS
	add(var_301_string); // 0x1b87 ObjFunc
	var_302_string = "lc_house7_06"; // 0x1b89 PushS
	add(var_302_string); // 0x1b8a ObjFunc
	var_303_string = "lc_house7_07"; // 0x1b8c PushS
	add(var_303_string); // 0x1b8d ObjFunc
	var_304_string = "lc_House6_02"; // 0x1b8f PushS
	add(var_304_string); // 0x1b90 ObjFunc
	var_305_string = "lc_house7_01"; // 0x1b92 PushS
	add(var_305_string); // 0x1b93 ObjFunc
	var_306_string = "lc_house_2_02"; // 0x1b95 PushS
	add(var_306_string); // 0x1b96 ObjFunc
	var_307_string = "lc_House6_01"; // 0x1b98 PushS
	add(var_307_string); // 0x1b99 ObjFunc
	var_308_string = "lc_house3_03_i2"; // 0x1b9b PushS
	add(var_308_string); // 0x1b9c ObjFunc
	var_309_string = "lc_house3_03"; // 0x1b9e PushS
	add(var_309_string); // 0x1b9f ObjFunc
	var_310_string = "lc_House6_03"; // 0x1ba1 PushS
	add(var_310_string); // 0x1ba2 ObjFunc
	var_311_string = "lc_House6_04"; // 0x1ba4 PushS
	add(var_311_string); // 0x1ba5 ObjFunc
	return 0; // 0x1ba7 Return
}


func_6012()
{
	var_210_string = "r3_house_2_02"; // 0x177d PushS
	add(var_210_string); // 0x177e ObjFunc
	var_211_string = "r3_house3_02_i2"; // 0x1780 PushS
	add(var_211_string); // 0x1781 ObjFunc
	var_212_string = "r3_house3_02"; // 0x1783 PushS
	add(var_212_string); // 0x1784 ObjFunc
	var_213_string = "r3_house4_05_i2"; // 0x1786 PushS
	add(var_213_string); // 0x1787 ObjFunc
	var_214_string = "r3_house4_05"; // 0x1789 PushS
	add(var_214_string); // 0x178a ObjFunc
	var_215_string = "r3_house4_03_i2"; // 0x178c PushS
	add(var_215_string); // 0x178d ObjFunc
	var_216_string = "r3_house4_04_i2"; // 0x178f PushS
	add(var_216_string); // 0x1790 ObjFunc
	var_217_string = "r3_house4_04"; // 0x1792 PushS
	add(var_217_string); // 0x1793 ObjFunc
	var_218_string = "r3_house4_01_i2"; // 0x1795 PushS
	add(var_218_string); // 0x1796 ObjFunc
	var_219_string = "r3_house4_01"; // 0x1798 PushS
	add(var_219_string); // 0x1799 ObjFunc
	var_220_string = "r3_house_2_01"; // 0x179b PushS
	add(var_220_string); // 0x179c ObjFunc
	var_221_string = "r3_house4_02_i2"; // 0x179e PushS
	add(var_221_string); // 0x179f ObjFunc
	var_222_string = "r3_house4_02"; // 0x17a1 PushS
	add(var_222_string); // 0x17a2 ObjFunc
	var_223_string = "r3_house3_01_i2"; // 0x17a4 PushS
	add(var_223_string); // 0x17a5 ObjFunc
	var_224_string = "r3_house3_01"; // 0x17a7 PushS
	add(var_224_string); // 0x17a8 ObjFunc
	return 0; // 0x17aa Return
}


func_10109(var_5434_int, var_5435_float)
{
	var_5436_int = 0; var_5437_int = 0; var_5438_int = 0; var_5439_float = 0; // 0x277e PushV
	var_5437_int = 530678; // 0x277f MovI
	var_5438_int = 530677; // 0x2780 MovI
	var_5439_float = var_5435_float; // 0x2781 Mov
	func_12278(var_5436_int, var_5437_int, var_5438_int, var_5439_float); // 0x2782 NEW_2
	var_5434_int = var_5436_int; // 0x2783 Mov
	return 0; // 0x2785 Return
}


func_12166(var_5238_bool)
{
	var_5241_int = 0; var_5242_string = ""; // 0x2f87 PushV
	var_5242_string = "b7q01"; // 0x2f88 MovS
	func_106(var_5241_int, var_5242_string); // 0x2f89 NEW_2
	var_5243_int = 0; // 0x2f8b PushI
	var_5244_bool = var_5241_int == var_5243_int; // 0x2f8c Eq
	if(var_5244_bool == 0) goto Label_12176; // 0x2f8d JumpB
	var_5238_bool = 1; // 0x2f8e MovB
	return 0; // 0x2f8f Return
	
Label_12176:
	var_5238_bool = 0; // 0x2f90 MovB
	return 0; // 0x2f91 Return
}


func_10118(var_5697_int, var_5698_float)
{
	var_5699_int = 0; var_5700_int = 0; var_5701_int = 0; var_5702_float = 0; // 0x2787 PushV
	var_5700_int = 530680; // 0x2788 MovI
	var_5701_int = 530679; // 0x2789 MovI
	var_5702_float = var_5698_float; // 0x278a Mov
	func_12278(var_5699_int, var_5700_int, var_5701_int, var_5702_float); // 0x278b NEW_2
	var_5697_int = var_5699_int; // 0x278c Mov
	return 0; // 0x278e Return
}


func_9101(var_501_int, var_502_int, var_503_int)
{
	var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); var_511_object = Obj(); // 0x238d PushV
	var_512_object = GlobalVars[8]; // 0x238e PushGE
	get(var_508_object, var_501_int); // 0x238f ObjFunc
	var_513_object = GlobalVars[9]; // 0x2391 PushGE
	get(var_509_object, var_501_int); // 0x2392 ObjFunc
	var_514_object = GlobalVars[10]; // 0x2394 PushGE
	get(var_510_object, var_501_int); // 0x2395 ObjFunc
	var_515_object = GlobalVars[13]; // 0x2397 PushGE
	get(var_511_object, var_501_int); // 0x2398 ObjFunc
	var_516_int = 0; // 0x239a PushI
	var_517_bool = var_501_int == var_516_int; // 0x239b Eq
	if(var_517_bool == 0) goto Label_9127; // 0x239c JumpB
	var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); var_523_object = Obj(); // 0x239d PushV
	var_518_int = var_502_int; // 0x239e Mov
	var_519_int = var_503_int; // 0x239f Mov
	var_520_object = var_508_object; // 0x23a0 Mov
	var_521_object = var_509_object; // 0x23a1 Mov
	var_522_object = var_510_object; // 0x23a2 Mov
	var_523_object = var_511_object; // 0x23a3 Mov
	func_4337(var_518_int, var_519_int, var_520_object, var_521_object, var_522_object, var_523_object); // 0x23a4 NEW_2
	goto Label_9321; // 0x23a6 Jump
	
Label_9321:
	return 8; // 0x2469 Return
	
Label_9127:
	var_884_int = 1; // 0x23a7 PushI
	var_885_bool = var_501_int == var_884_int; // 0x23a8 Eq
	if(var_885_bool == 0) goto Label_9140; // 0x23a9 JumpB
	var_886_int = 0; var_887_int = 0; var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); var_891_object = Obj(); // 0x23aa PushV
	var_886_int = var_502_int; // 0x23ab Mov
	var_887_int = var_503_int; // 0x23ac Mov
	var_888_object = var_508_object; // 0x23ad Mov
	var_889_object = var_509_object; // 0x23ae Mov
	var_890_object = var_510_object; // 0x23af Mov
	var_891_object = var_511_object; // 0x23b0 Mov
	func_4534(var_886_int, var_887_int, var_888_object, var_889_object, var_890_object, var_891_object); // 0x23b1 NEW_2
	goto Label_9321; // 0x23b3 Jump
	
Label_9140:
	var_1027_int = 2; // 0x23b4 PushI
	var_1028_bool = var_501_int == var_1027_int; // 0x23b5 Eq
	if(var_1028_bool == 0) goto Label_9153; // 0x23b6 JumpB
	var_1029_int = 0; var_1030_int = 0; var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); var_1034_object = Obj(); // 0x23b7 PushV
	var_1029_int = var_502_int; // 0x23b8 Mov
	var_1030_int = var_503_int; // 0x23b9 Mov
	var_1031_object = var_508_object; // 0x23ba Mov
	var_1032_object = var_509_object; // 0x23bb Mov
	var_1033_object = var_510_object; // 0x23bc Mov
	var_1034_object = var_511_object; // 0x23bd Mov
	func_4740(var_1029_int, var_1030_int, var_1031_object, var_1032_object, var_1033_object, var_1034_object); // 0x23be NEW_2
	goto Label_9321; // 0x23c0 Jump
	
Label_9153:
	var_1246_int = 3; // 0x23c1 PushI
	var_1247_bool = var_501_int == var_1246_int; // 0x23c2 Eq
	if(var_1247_bool == 0) goto Label_9166; // 0x23c3 JumpB
	var_1248_int = 0; var_1249_int = 0; var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); var_1253_object = Obj(); // 0x23c4 PushV
	var_1248_int = var_502_int; // 0x23c5 Mov
	var_1249_int = var_503_int; // 0x23c6 Mov
	var_1250_object = var_508_object; // 0x23c7 Mov
	var_1251_object = var_509_object; // 0x23c8 Mov
	var_1252_object = var_510_object; // 0x23c9 Mov
	var_1253_object = var_511_object; // 0x23ca Mov
	func_4970(var_1248_int, var_1249_int, var_1250_object, var_1251_object, var_1252_object, var_1253_object); // 0x23cb NEW_2
	goto Label_9321; // 0x23cd Jump
	
Label_9166:
	var_1294_int = 4; // 0x23ce PushI
	var_1295_bool = var_501_int == var_1294_int; // 0x23cf Eq
	if(var_1295_bool == 0) goto Label_9179; // 0x23d0 JumpB
	var_1296_int = 0; var_1297_int = 0; var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); var_1301_object = Obj(); // 0x23d1 PushV
	var_1296_int = var_502_int; // 0x23d2 Mov
	var_1297_int = var_503_int; // 0x23d3 Mov
	var_1298_object = var_508_object; // 0x23d4 Mov
	var_1299_object = var_509_object; // 0x23d5 Mov
	var_1300_object = var_510_object; // 0x23d6 Mov
	var_1301_object = var_511_object; // 0x23d7 Mov
	func_5188(var_1296_int, var_1297_int, var_1298_object, var_1299_object, var_1300_object, var_1301_object); // 0x23d8 NEW_2
	goto Label_9321; // 0x23da Jump
	
Label_9179:
	var_1339_int = 5; // 0x23db PushI
	var_1340_bool = var_501_int == var_1339_int; // 0x23dc Eq
	if(var_1340_bool == 0) goto Label_9192; // 0x23dd JumpB
	var_1341_int = 0; var_1342_int = 0; var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); var_1346_object = Obj(); // 0x23de PushV
	var_1341_int = var_502_int; // 0x23df Mov
	var_1342_int = var_503_int; // 0x23e0 Mov
	var_1343_object = var_508_object; // 0x23e1 Mov
	var_1344_object = var_509_object; // 0x23e2 Mov
	var_1345_object = var_510_object; // 0x23e3 Mov
	var_1346_object = var_511_object; // 0x23e4 Mov
	func_5433(var_1341_int, var_1342_int, var_1343_object, var_1344_object, var_1345_object, var_1346_object); // 0x23e5 NEW_2
	goto Label_9321; // 0x23e7 Jump
	
Label_9192:
	var_1372_int = 6; // 0x23e8 PushI
	var_1373_bool = var_501_int == var_1372_int; // 0x23e9 Eq
	if(var_1373_bool == 0) goto Label_9205; // 0x23ea JumpB
	var_1374_int = 0; var_1375_int = 0; var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); var_1379_object = Obj(); // 0x23eb PushV
	var_1374_int = var_502_int; // 0x23ec Mov
	var_1375_int = var_503_int; // 0x23ed Mov
	var_1376_object = var_508_object; // 0x23ee Mov
	var_1377_object = var_509_object; // 0x23ef Mov
	var_1378_object = var_510_object; // 0x23f0 Mov
	var_1379_object = var_511_object; // 0x23f1 Mov
	func_5591(var_1379_object); // 0x23f2 NEW_2
	goto Label_9321; // 0x23f4 Jump
	
Label_9205:
	var_1382_int = 7; // 0x23f5 PushI
	var_1383_bool = var_501_int == var_1382_int; // 0x23f6 Eq
	if(var_1383_bool == 0) goto Label_9218; // 0x23f7 JumpB
	var_1384_int = 0; var_1385_int = 0; var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); var_1389_object = Obj(); // 0x23f8 PushV
	var_1384_int = var_502_int; // 0x23f9 Mov
	var_1385_int = var_503_int; // 0x23fa Mov
	var_1386_object = var_508_object; // 0x23fb Mov
	var_1387_object = var_509_object; // 0x23fc Mov
	var_1388_object = var_510_object; // 0x23fd Mov
	var_1389_object = var_511_object; // 0x23fe Mov
	func_5656(var_1384_int, var_1385_int, var_1386_object, var_1387_object, var_1388_object, var_1389_object); // 0x23ff NEW_2
	goto Label_9321; // 0x2401 Jump
	
Label_9218:
	var_1569_int = 8; // 0x2402 PushI
	var_1570_bool = var_501_int == var_1569_int; // 0x2403 Eq
	if(var_1570_bool == 0) goto Label_9231; // 0x2404 JumpB
	var_1571_int = 0; var_1572_int = 0; var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); var_1576_object = Obj(); // 0x2405 PushV
	var_1571_int = var_502_int; // 0x2406 Mov
	var_1572_int = var_503_int; // 0x2407 Mov
	var_1573_object = var_508_object; // 0x2408 Mov
	var_1574_object = var_509_object; // 0x2409 Mov
	var_1575_object = var_510_object; // 0x240a Mov
	var_1576_object = var_511_object; // 0x240b Mov
	func_5856(var_1571_int, var_1572_int, var_1573_object, var_1574_object, var_1575_object, var_1576_object); // 0x240c NEW_2
	goto Label_9321; // 0x240e Jump
	
Label_9231:
	var_1602_int = 9; // 0x240f PushI
	var_1603_bool = var_501_int == var_1602_int; // 0x2410 Eq
	if(var_1603_bool == 0) goto Label_9244; // 0x2411 JumpB
	var_1604_int = 0; var_1605_int = 0; var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); var_1609_object = Obj(); // 0x2412 PushV
	var_1604_int = var_502_int; // 0x2413 Mov
	var_1605_int = var_503_int; // 0x2414 Mov
	var_1606_object = var_508_object; // 0x2415 Mov
	var_1607_object = var_509_object; // 0x2416 Mov
	var_1608_object = var_510_object; // 0x2417 Mov
	var_1609_object = var_511_object; // 0x2418 Mov
	func_6059(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object); // 0x2419 NEW_2
	goto Label_9321; // 0x241b Jump
	
Label_9244:
	var_1635_int = 10; // 0x241c PushI
	var_1636_bool = var_501_int == var_1635_int; // 0x241d Eq
	if(var_1636_bool == 0) goto Label_9257; // 0x241e JumpB
	var_1637_int = 0; var_1638_int = 0; var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); var_1642_object = Obj(); // 0x241f PushV
	var_1637_int = var_502_int; // 0x2420 Mov
	var_1638_int = var_503_int; // 0x2421 Mov
	var_1639_object = var_508_object; // 0x2422 Mov
	var_1640_object = var_509_object; // 0x2423 Mov
	var_1641_object = var_510_object; // 0x2424 Mov
	var_1642_object = var_511_object; // 0x2425 Mov
	func_6268(var_1637_int, var_1638_int, var_1639_object, var_1640_object, var_1641_object, var_1642_object); // 0x2426 NEW_2
	goto Label_9321; // 0x2428 Jump
	
Label_9257:
	var_1668_int = 11; // 0x2429 PushI
	var_1669_bool = var_501_int == var_1668_int; // 0x242a Eq
	if(var_1669_bool == 0) goto Label_9270; // 0x242b JumpB
	var_1670_int = 0; var_1671_int = 0; var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); var_1675_object = Obj(); // 0x242c PushV
	var_1670_int = var_502_int; // 0x242d Mov
	var_1671_int = var_503_int; // 0x242e Mov
	var_1672_object = var_508_object; // 0x242f Mov
	var_1673_object = var_509_object; // 0x2430 Mov
	var_1674_object = var_510_object; // 0x2431 Mov
	var_1675_object = var_511_object; // 0x2432 Mov
	func_6480(var_1670_int, var_1671_int, var_1672_object, var_1673_object, var_1674_object, var_1675_object); // 0x2433 NEW_2
	goto Label_9321; // 0x2435 Jump
	
Label_9270:
	var_1701_int = 12; // 0x2436 PushI
	var_1702_bool = var_501_int == var_1701_int; // 0x2437 Eq
	if(var_1702_bool == 0) goto Label_9283; // 0x2438 JumpB
	var_1703_int = 0; var_1704_int = 0; var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); var_1708_object = Obj(); // 0x2439 PushV
	var_1703_int = var_502_int; // 0x243a Mov
	var_1704_int = var_503_int; // 0x243b Mov
	var_1705_object = var_508_object; // 0x243c Mov
	var_1706_object = var_509_object; // 0x243d Mov
	var_1707_object = var_510_object; // 0x243e Mov
	var_1708_object = var_511_object; // 0x243f Mov
	func_6677(var_1703_int, var_1704_int, var_1705_object, var_1706_object, var_1707_object, var_1708_object); // 0x2440 NEW_2
	goto Label_9321; // 0x2442 Jump
	
Label_9283:
	var_1734_int = 13; // 0x2443 PushI
	var_1735_bool = var_501_int == var_1734_int; // 0x2444 Eq
	if(var_1735_bool == 0) goto Label_9296; // 0x2445 JumpB
	var_1736_int = 0; var_1737_int = 0; var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); var_1741_object = Obj(); // 0x2446 PushV
	var_1736_int = var_502_int; // 0x2447 Mov
	var_1737_int = var_503_int; // 0x2448 Mov
	var_1738_object = var_508_object; // 0x2449 Mov
	var_1739_object = var_509_object; // 0x244a Mov
	var_1740_object = var_510_object; // 0x244b Mov
	var_1741_object = var_511_object; // 0x244c Mov
	func_6880(var_1736_int, var_1737_int, var_1738_object, var_1739_object, var_1740_object, var_1741_object); // 0x244d NEW_2
	goto Label_9321; // 0x244f Jump
	
Label_9296:
	var_1767_int = 14; // 0x2450 PushI
	var_1768_bool = var_501_int == var_1767_int; // 0x2451 Eq
	if(var_1768_bool == 0) goto Label_9309; // 0x2452 JumpB
	var_1769_int = 0; var_1770_int = 0; var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); var_1774_object = Obj(); // 0x2453 PushV
	var_1769_int = var_502_int; // 0x2454 Mov
	var_1770_int = var_503_int; // 0x2455 Mov
	var_1771_object = var_508_object; // 0x2456 Mov
	var_1772_object = var_509_object; // 0x2457 Mov
	var_1773_object = var_510_object; // 0x2458 Mov
	var_1774_object = var_511_object; // 0x2459 Mov
	func_7080(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object); // 0x245a NEW_2
	goto Label_9321; // 0x245c Jump
	
Label_9309:
	var_1945_int = 15; // 0x245d PushI
	var_1946_bool = var_501_int == var_1945_int; // 0x245e Eq
	if(var_1946_bool == 0) goto Label_9321; // 0x245f JumpB
	var_1947_int = 0; var_1948_int = 0; var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); var_1952_object = Obj(); // 0x2460 PushV
	var_1947_int = var_502_int; // 0x2461 Mov
	var_1948_int = var_503_int; // 0x2462 Mov
	var_1949_object = var_508_object; // 0x2463 Mov
	var_1950_object = var_509_object; // 0x2464 Mov
	var_1951_object = var_510_object; // 0x2465 Mov
	var_1952_object = var_511_object; // 0x2466 Mov
	func_7262(var_1947_int, var_1948_int, var_1949_object, var_1950_object, var_1951_object, var_1952_object); // 0x2467 NEW_2
}


func_10127(var_4724_int, var_4725_float)
{
	var_4726_int = 0; var_4727_int = 0; var_4728_int = 0; var_4729_float = 0; // 0x2790 PushV
	var_4727_int = 529852; // 0x2791 MovI
	var_4728_int = 529851; // 0x2792 MovI
	var_4729_float = var_4725_float; // 0x2793 Mov
	func_12278(var_4726_int, var_4727_int, var_4728_int, var_4729_float); // 0x2794 NEW_2
	var_4724_int = var_4726_int; // 0x2795 Mov
	return 0; // 0x2797 Return
}


func_3985(var_3248_int, var_3249_int, var_3250_int)
{
	var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; var_3258_int = 0; // 0xf91 PushV
	var_3259_bool = 0; // 0xf92 PushV
	var_3259_bool = 0; // 0xf93 MovB
	var_3260_int = 8; // 0xf94 PushI
	var_3261_bool = var_3250_int > var_3260_int; // 0xf95 GT
	if(var_3261_bool == 0) goto Label_3995; // 0xf96 JumpB
	var_3262_int = 21; // 0xf97 PushI
	var_3263_bool = var_3250_int < var_3262_int; // 0xf98 LT
	if(var_3263_bool == 0) goto Label_3995; // 0xf99 JumpB
	var_3259_bool = 1; // 0xf9a MovB
	
Label_3995:
	if(var_3259_bool == 0) goto Label_4072; // 0xf9b JumpB
	var_3264_int = 0; var_3265_string = ""; var_3266_string = ""; var_3267_int = 0; // 0xf9c PushV
	var_3264_int = var_3248_int; // 0xf9d Mov
	var_3265_string = "pers_rat"; // 0xf9e MovS
	var_3266_string = "rat.xml"; // 0xf9f MovS
	var_3267_int = 4; // 0xfa0 MovI
	func_453(var_3264_int, var_3265_string, var_3266_string, var_3267_int); // 0xfa1 NEW_2
	var_3268_int = 0; var_3269_string = ""; var_3270_string = ""; var_3271_int = 0; // 0xfa3 PushV
	var_3268_int = var_3248_int; // 0xfa4 Mov
	var_3269_string = "pers_alkash"; // 0xfa5 MovS
	var_3270_string = "alkash.xml"; // 0xfa6 MovS
	var_3271_int = 2; // 0xfa7 MovI
	func_453(var_3268_int, var_3269_string, var_3270_string, var_3271_int); // 0xfa8 NEW_2
	var_3272_int = 0; var_3273_string = ""; var_3274_string = ""; var_3275_int = 0; // 0xfaa PushV
	var_3272_int = var_3248_int; // 0xfab Mov
	var_3273_string = "pers_dohodyaga"; // 0xfac MovS
	var_3274_string = "dohodyaga.xml"; // 0xfad MovS
	var_3275_int = 1; // 0xfae MovI
	func_453(var_3272_int, var_3273_string, var_3274_string, var_3275_int); // 0xfaf NEW_2
	var_3276_int = 2; // 0xfb1 PushI
	var_3277_float = 0; var_3278_int = 0; // 0xfb2 PushV
	var_3278_int = var_3249_int; // 0xfb3 Mov
	func_1115(var_3277_float, var_3278_int); // 0xfb4 NEW_2
	var_3255_int = var_3276_int * var_3277_float; // 0xfb6 Mult2
	var_3323_int = var_3255_int; // 0xfb7 Push
	if(var_3323_int == 0) goto Label_4032; // 0xfb8 JumpB
	var_3324_int = 0; var_3325_string = ""; var_3326_string = ""; var_3327_int = 0; // 0xfb9 PushV
	var_3324_int = var_3248_int; // 0xfba Mov
	var_3325_string = "pers_grabitel"; // 0xfbb MovS
	var_3326_string = "grabitel.xml"; // 0xfbc MovS
	var_3327_int = var_3255_int; // 0xfbd Mov
	func_453(var_3324_int, var_3325_string, var_3326_string, var_3327_int); // 0xfbe NEW_2
	
Label_4032:
	var_3328_int = 1; // 0xfc0 PushI
	var_3329_int = var_3249_int + var_3328_int; // 0xfc1 Add
	var_3330_int = 2; // 0xfc2 PushI
	var_3331_bool = var_3329_int >= var_3330_int; // 0xfc3 GE
	if(var_3331_bool == 0) goto Label_4056; // 0xfc4 JumpB
	var_3332_int = 0; var_3333_string = ""; var_3334_string = ""; var_3335_int = 0; // 0xfc5 PushV
	var_3332_int = var_3248_int; // 0xfc6 Mov
	var_3333_string = "pers_patrool"; // 0xfc7 MovS
	var_3334_string = "patrol.xml"; // 0xfc8 MovS
	var_3335_int = 2; // 0xfc9 MovI
	func_453(var_3332_int, var_3333_string, var_3334_string, var_3335_int); // 0xfca NEW_2
	var_3336_bool = 0; var_3337_int = 0; // 0xfcc PushV
	var_3337_int = var_3249_int; // 0xfcd Mov
	func_1322(var_3336_bool, var_3337_int); // 0xfce NEW_2
	if(var_3336_bool == 0) goto Label_4056; // 0xfd0 JumpB
	var_3338_int = 0; var_3339_string = ""; var_3340_string = ""; var_3341_int = 0; // 0xfd1 PushV
	var_3338_int = var_3248_int; // 0xfd2 Mov
	var_3339_string = "pers_soldat_hand"; // 0xfd3 MovS
	var_3340_string = "soldier_patrol.xml"; // 0xfd4 MovS
	var_3341_int = 1; // 0xfd5 MovI
	func_453(var_3338_int, var_3339_string, var_3340_string, var_3341_int); // 0xfd6 NEW_2
	
Label_4056:
	var_3342_int = 1; // 0xfd8 PushI
	var_3343_float = 0; var_3344_int = 0; // 0xfd9 PushV
	var_3344_int = var_3249_int; // 0xfda Mov
	func_1205(var_3343_float, var_3344_int); // 0xfdb NEW_2
	var_3256_int = var_3342_int * var_3343_float; // 0xfdd Mult2
	var_3345_int = var_3256_int; // 0xfde Push
	if(var_3345_int == 0) goto Label_4071; // 0xfdf JumpB
	var_3346_int = 0; var_3347_string = ""; var_3348_string = ""; var_3349_int = 0; // 0xfe0 PushV
	var_3346_int = var_3248_int; // 0xfe1 Mov
	var_3347_string = "pers_bomber"; // 0xfe2 MovS
	var_3348_string = "bomber.xml"; // 0xfe3 MovS
	var_3349_int = var_3256_int; // 0xfe4 Mov
	func_453(var_3346_int, var_3347_string, var_3348_string, var_3349_int); // 0xfe5 NEW_2
	
Label_4071:
	goto Label_4147; // 0xfe7 Jump
	
Label_4147:
	var_3350_bool = 0; var_3351_int = 0; // 0x1033 PushV
	var_3351_int = var_3249_int; // 0x1034 Mov
	func_1322(var_3350_bool, var_3351_int); // 0x1035 NEW_2
	if(var_3350_bool == 0) goto Label_4159; // 0x1037 JumpB
	var_3352_int = 0; var_3353_string = ""; var_3354_string = ""; var_3355_int = 0; // 0x1038 PushV
	var_3352_int = var_3248_int; // 0x1039 Mov
	var_3353_string = "pers_sanitar"; // 0x103a MovS
	var_3354_string = "sanitar.xml"; // 0x103b MovS
	var_3355_int = 1; // 0x103c MovI
	func_453(var_3352_int, var_3353_string, var_3354_string, var_3355_int); // 0x103d NEW_2
	
Label_4159:
	return 8; // 0x103f Return
	
Label_4072:
	var_3356_int = 0; var_3357_string = ""; var_3358_string = ""; var_3359_int = 0; // 0xfe8 PushV
	var_3356_int = var_3248_int; // 0xfe9 Mov
	var_3357_string = "pers_rat"; // 0xfea MovS
	var_3358_string = "rat.xml"; // 0xfeb MovS
	var_3359_int = 7; // 0xfec MovI
	func_453(var_3356_int, var_3357_string, var_3358_string, var_3359_int); // 0xfed NEW_2
	var_3360_int = 0; var_3361_string = ""; var_3362_string = ""; var_3363_int = 0; // 0xfef PushV
	var_3360_int = var_3248_int; // 0xff0 Mov
	var_3361_string = "pers_alkash"; // 0xff1 MovS
	var_3362_string = "alkash.xml"; // 0xff2 MovS
	var_3363_int = 1; // 0xff3 MovI
	func_453(var_3360_int, var_3361_string, var_3362_string, var_3363_int); // 0xff4 NEW_2
	var_3364_int = 0; var_3365_string = ""; var_3366_string = ""; var_3367_int = 0; // 0xff6 PushV
	var_3364_int = var_3248_int; // 0xff7 Mov
	var_3365_string = "pers_dohodyaga"; // 0xff8 MovS
	var_3366_string = "dohodyaga.xml"; // 0xff9 MovS
	var_3367_int = 1; // 0xffa MovI
	func_453(var_3364_int, var_3365_string, var_3366_string, var_3367_int); // 0xffb NEW_2
	var_3368_int = 2; // 0xffd PushI
	var_3369_float = 0; var_3370_int = 0; // 0xffe PushV
	var_3370_int = var_3249_int; // 0xfff Mov
	func_1115(var_3369_float, var_3370_int); // 0x1000 NEW_2
	var_3257_int = var_3368_int * var_3369_float; // 0x1002 Mult2
	var_3371_int = var_3257_int; // 0x1003 Push
	if(var_3371_int == 0) goto Label_4108; // 0x1004 JumpB
	var_3372_int = 0; var_3373_string = ""; var_3374_string = ""; var_3375_int = 0; // 0x1005 PushV
	var_3372_int = var_3248_int; // 0x1006 Mov
	var_3373_string = "pers_grabitel"; // 0x1007 MovS
	var_3374_string = "grabitel.xml"; // 0x1008 MovS
	var_3375_int = var_3257_int; // 0x1009 Mov
	func_453(var_3372_int, var_3373_string, var_3374_string, var_3375_int); // 0x100a NEW_2
	
Label_4108:
	var_3376_int = 1; // 0x100c PushI
	var_3377_int = var_3249_int + var_3376_int; // 0x100d Add
	var_3378_int = 2; // 0x100e PushI
	var_3379_bool = var_3377_int >= var_3378_int; // 0x100f GE
	if(var_3379_bool == 0) goto Label_4132; // 0x1010 JumpB
	var_3380_int = 0; var_3381_string = ""; var_3382_string = ""; var_3383_int = 0; // 0x1011 PushV
	var_3380_int = var_3248_int; // 0x1012 Mov
	var_3381_string = "pers_patrool"; // 0x1013 MovS
	var_3382_string = "patrol.xml"; // 0x1014 MovS
	var_3383_int = 1; // 0x1015 MovI
	func_453(var_3380_int, var_3381_string, var_3382_string, var_3383_int); // 0x1016 NEW_2
	var_3384_bool = 0; var_3385_int = 0; // 0x1018 PushV
	var_3385_int = var_3249_int; // 0x1019 Mov
	func_1322(var_3384_bool, var_3385_int); // 0x101a NEW_2
	if(var_3384_bool == 0) goto Label_4132; // 0x101c JumpB
	var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0; // 0x101d PushV
	var_3386_int = var_3248_int; // 0x101e Mov
	var_3387_string = "pers_soldat_hand"; // 0x101f MovS
	var_3388_string = "soldier_patrol.xml"; // 0x1020 MovS
	var_3389_int = 1; // 0x1021 MovI
	func_453(var_3386_int, var_3387_string, var_3388_string, var_3389_int); // 0x1022 NEW_2
	
Label_4132:
	var_3390_int = 1; // 0x1024 PushI
	var_3391_float = 0; var_3392_int = 0; // 0x1025 PushV
	var_3392_int = var_3249_int; // 0x1026 Mov
	func_1205(var_3391_float, var_3392_int); // 0x1027 NEW_2
	var_3258_int = var_3390_int * var_3391_float; // 0x1029 Mult2
	var_3393_int = var_3258_int; // 0x102a Push
	if(var_3393_int == 0) goto Label_4147; // 0x102b JumpB
	var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0; // 0x102c PushV
	var_3394_int = var_3248_int; // 0x102d Mov
	var_3395_string = "pers_bomber"; // 0x102e MovS
	var_3396_string = "bomber.xml"; // 0x102f MovS
	var_3397_int = var_3258_int; // 0x1030 Mov
	func_453(var_3394_int, var_3395_string, var_3396_string, var_3397_int); // 0x1031 NEW_2
}


func_12178(var_5549_bool)
{
	var_5549_bool = 0; // 0x2f93 MovB
	return 0; // 0x2f94 Return
}


func_12181()
{
	var_4882_object = Obj(); var_4883_object = Obj(); // 0x2f95 PushV
	var_4884_int = 562; // 0x2f96 PushI
	var_4885_int = 0; // 0x2f97 PushI
	var_4886_int = 530576; // 0x2f98 PushI
	CreateDiaryEntry(var_4883_object, var_4884_int, var_4885_int, var_4886_int); // 0x2f99 Func
	var_4887_bool = 0; var_4888_object = Obj(); var_4889_int = 0; // 0x2f9b PushV
	var_4888_object = var_4883_object; // 0x2f9c Mov
	var_4889_int = -1; // 0x2f9d MovI
	func_12233(var_4887_bool, var_4888_object, var_4889_int); // 0x2f9e NEW_2
	return 2; // 0x2fa0 Return
}


func_10136(var_5492_int, var_5493_float)
{
	var_5494_int = 0; var_5495_int = 0; var_5496_int = 0; var_5497_float = 0; // 0x2799 PushV
	var_5495_int = 530601; // 0x279a MovI
	var_5496_int = 530600; // 0x279b MovI
	var_5497_float = var_5493_float; // 0x279c Mov
	func_12278(var_5494_int, var_5495_int, var_5496_int, var_5497_float); // 0x279d NEW_2
	var_5492_int = var_5494_int; // 0x279e Mov
	return 0; // 0x27a0 Return
}


func_5022(var_2553_int, var_2554_int, var_2555_object, var_2556_object, var_2557_object, var_2558_object)
{
	var_2559_int = 0; // 0x139f PushI
	var_2560_bool = var_2554_int == var_2559_int; // 0x13a0 Eq
	if(var_2560_bool == 0) goto Label_5062; // 0x13a1 JumpB
	var_2561_int = 0; var_2562_bool = 0; // 0x13a2 PushV
	var_2561_int = 3; // 0x13a3 MovI
	var_2562_bool = 1; // 0x13a4 MovB
	func_746(var_2561_int, var_2562_bool); // 0x13a5 NEW_2
	var_2563_int = 0; var_2564_bool = 0; var_2565_int = 0; // 0x13a7 PushV
	var_2563_int = 3; // 0x13a8 MovI
	var_2564_bool = 1; // 0x13a9 MovB
	var_2565_int = 1; // 0x13aa MovI
	func_763(var_2563_int, var_2564_bool, var_2565_int); // 0x13ab NEW_2
	var_2566_int = 0; var_2567_int = 0; var_2568_object = Obj(); var_2569_object = Obj(); var_2570_object = Obj(); // 0x13ad PushV
	var_2566_int = 3; // 0x13ae MovI
	var_2567_int = var_2553_int; // 0x13af Mov
	var_2568_object = var_2555_object; // 0x13b0 Mov
	var_2569_object = var_2556_object; // 0x13b1 Mov
	var_2570_object = var_2557_object; // 0x13b2 Mov
	func_591(var_2566_int, var_2567_int, var_2568_object, var_2569_object, var_2570_object); // 0x13b3 NEW_2
	var_2571_object = Obj(); var_2572_int = 0; // 0x13b5 PushV
	var_2571_object = var_2558_object; // 0x13b6 Mov
	var_2572_int = 1; // 0x13b7 MovI
	func_255(var_2572_int); // 0x13b8 NEW_2
	var_2573_int = 0; var_2574_bool = 0; var_2575_int = 0; // 0x13ba PushV
	var_2573_int = 3; // 0x13bb MovI
	var_2574_bool = 1; // 0x13bc MovB
	var_2575_int = 7; // 0x13bd MovI
	func_820(var_2573_int, var_2574_bool, var_2575_int); // 0x13be NEW_2
	var_2576_int = 0; var_2577_bool = 0; var_2578_int = 0; // 0x13c0 PushV
	var_2576_int = 3; // 0x13c1 MovI
	var_2577_bool = 0; // 0x13c2 MovB
	var_2578_int = 7; // 0x13c3 MovI
	func_882(var_2576_int, var_2577_bool, var_2578_int); // 0x13c4 NEW_2
	
Label_5062:
	var_2579_int = 0; var_2580_bool = 0; // 0x13c6 PushV
	var_2579_int = 3; // 0x13c7 MovI
	var_2580_bool = 0; // 0x13c8 MovB
	func_729(var_2579_int, var_2580_bool); // 0x13c9 NEW_2
	var_2581_int = 0; var_2582_int = 0; var_2583_int = 0; // 0x13cb PushV
	var_2581_int = 3; // 0x13cc MovI
	var_2582_int = var_2553_int; // 0x13cd Mov
	var_2583_int = var_2554_int; // 0x13ce Mov
	func_2894(var_2581_int, var_2582_int, var_2583_int); // 0x13cf NEW_2
	return 0; // 0x13d1 Return
}


func_10145(var_5773_int, var_5774_float)
{
	var_5775_int = 0; var_5776_int = 0; var_5777_int = 0; var_5778_float = 0; // 0x27a2 PushV
	var_5776_int = 533050; // 0x27a3 MovI
	var_5777_int = 533049; // 0x27a4 MovI
	var_5778_float = var_5774_float; // 0x27a5 Mov
	func_12278(var_5775_int, var_5776_int, var_5777_int, var_5778_float); // 0x27a6 NEW_2
	var_5773_int = var_5775_int; // 0x27a7 Mov
	return 0; // 0x27a9 Return
}


func_12194()
{
	var_4910_object = Obj(); var_4911_object = Obj(); // 0x2fa2 PushV
	var_4912_int = 564; // 0x2fa3 PushI
	var_4913_int = 0; // 0x2fa4 PushI
	var_4914_int = 530578; // 0x2fa5 PushI
	CreateDiaryEntry(var_4911_object, var_4912_int, var_4913_int, var_4914_int); // 0x2fa6 Func
	var_4915_bool = 0; var_4916_object = Obj(); var_4917_int = 0; // 0x2fa8 PushV
	var_4916_object = var_4911_object; // 0x2fa9 Mov
	var_4917_int = -1; // 0x2faa MovI
	func_12233(var_4915_bool, var_4916_object, var_4917_int); // 0x2fab NEW_2
	return 2; // 0x2fad Return
}


func_933(var_1274_int, var_1275_int)
{
	var_1276_bool = 0; // 0x3a6 PushV
	var_1276_bool = 1; // 0x3a7 MovB
	var_1277_bool = 0; // 0x3a8 PushV
	var_1277_bool = 1; // 0x3a9 MovB
	var_1278_int = 20; // 0x3aa PushI
	var_1279_bool = var_1275_int >= var_1278_int; // 0x3ab GE
	if(var_1279_bool == 0) goto Label_945; // 0x3ac JumpB
	var_1280_int = 2; // 0x3ad PushI
	var_1281_bool = var_1275_int < var_1280_int; // 0x3ae LT
	if(var_1281_bool == 0) goto Label_945; // 0x3af JumpB
	var_1277_bool = 0; // 0x3b0 MovB
	
Label_945:
	if(var_1277_bool == 0) goto Label_957; // 0x3b1 JumpB
	var_1282_bool = 0; // 0x3b2 PushV
	var_1282_bool = 0; // 0x3b3 MovB
	var_1283_int = 6; // 0x3b4 PushI
	var_1284_bool = var_1275_int >= var_1283_int; // 0x3b5 GE
	if(var_1284_bool == 0) goto Label_955; // 0x3b6 JumpB
	var_1285_int = 10; // 0x3b7 PushI
	var_1286_bool = var_1275_int < var_1285_int; // 0x3b8 LT
	if(var_1286_bool == 0) goto Label_955; // 0x3b9 JumpB
	var_1282_bool = 1; // 0x3ba MovB
	
Label_955:
	if(var_1282_bool == 0) goto Label_957; // 0x3bb JumpB
	var_1276_bool = 0; // 0x3bc MovB
	
Label_957:
	if(var_1276_bool == 0) goto Label_964; // 0x3bd JumpB
	var_1287_int = 0; var_1288_bool = 0; // 0x3be PushV
	var_1287_int = var_1274_int; // 0x3bf Mov
	var_1288_bool = 1; // 0x3c0 MovB
	func_729(var_1287_int, var_1288_bool); // 0x3c1 NEW_2
	goto Label_969; // 0x3c3 Jump
	
Label_969:
	return 0; // 0x3c9 Return
	
Label_964:
	var_1289_int = 0; var_1290_bool = 0; // 0x3c4 PushV
	var_1289_int = var_1274_int; // 0x3c5 Mov
	var_1290_bool = 0; // 0x3c6 MovB
	func_729(var_1289_int, var_1290_bool); // 0x3c7 NEW_2
}


func_7080(var_1769_int, var_1770_int, var_1771_object, var_1772_object, var_1773_object, var_1774_object)
{
	var_1775_int = 0; // 0x1ba9 PushI
	var_1776_bool = var_1770_int == var_1775_int; // 0x1baa Eq
	if(var_1776_bool == 0) goto Label_7120; // 0x1bab JumpB
	var_1777_int = 0; var_1778_bool = 0; // 0x1bac PushV
	var_1777_int = 14; // 0x1bad MovI
	var_1778_bool = 0; // 0x1bae MovB
	func_746(var_1777_int, var_1778_bool); // 0x1baf NEW_2
	var_1779_int = 0; var_1780_bool = 0; var_1781_int = 0; // 0x1bb1 PushV
	var_1779_int = 14; // 0x1bb2 MovI
	var_1780_bool = 0; // 0x1bb3 MovB
	var_1781_int = 1; // 0x1bb4 MovI
	func_763(var_1779_int, var_1780_bool, var_1781_int); // 0x1bb5 NEW_2
	var_1782_int = 0; var_1783_int = 0; var_1784_object = Obj(); var_1785_object = Obj(); var_1786_object = Obj(); // 0x1bb7 PushV
	var_1782_int = 14; // 0x1bb8 MovI
	var_1783_int = var_1769_int; // 0x1bb9 Mov
	var_1784_object = var_1771_object; // 0x1bba Mov
	var_1785_object = var_1772_object; // 0x1bbb Mov
	var_1786_object = var_1773_object; // 0x1bbc Mov
	func_572(var_1783_int, var_1784_object, var_1785_object, var_1786_object); // 0x1bbd NEW_2
	var_1787_object = Obj(); var_1788_int = 0; // 0x1bbf PushV
	var_1787_object = var_1774_object; // 0x1bc0 Mov
	var_1788_int = 0; // 0x1bc1 MovI
	func_255(var_1788_int); // 0x1bc2 NEW_2
	var_1789_int = 0; var_1790_bool = 0; var_1791_int = 0; // 0x1bc4 PushV
	var_1789_int = 14; // 0x1bc5 MovI
	var_1790_bool = 0; // 0x1bc6 MovB
	var_1791_int = 5; // 0x1bc7 MovI
	func_820(var_1789_int, var_1790_bool, var_1791_int); // 0x1bc8 NEW_2
	var_1792_int = 0; var_1793_bool = 0; var_1794_int = 0; // 0x1bca PushV
	var_1792_int = 14; // 0x1bcb MovI
	var_1793_bool = 0; // 0x1bcc MovB
	var_1794_int = 5; // 0x1bcd MovI
	func_882(var_1792_int, var_1793_bool, var_1794_int); // 0x1bce NEW_2
	
Label_7120:
	var_1795_int = 0; var_1796_int = 0; // 0x1bd0 PushV
	var_1795_int = 14; // 0x1bd1 MovI
	var_1796_int = var_1770_int; // 0x1bd2 Mov
	func_1037(var_1795_int, var_1796_int); // 0x1bd3 NEW_2
	var_1806_int = 0; var_1807_int = 0; var_1808_int = 0; // 0x1bd5 PushV
	var_1806_int = 14; // 0x1bd6 MovI
	var_1807_int = var_1769_int; // 0x1bd7 Mov
	var_1808_int = var_1770_int; // 0x1bd8 Mov
	func_1326(var_1806_int, var_1807_int, var_1808_int); // 0x1bd9 NEW_2
	return 0; // 0x1bdb Return
}


func_10154(var_5089_int, var_5090_float)
{
	var_5091_int = 0; var_5092_int = 0; var_5093_int = 0; var_5094_float = 0; // 0x27ab PushV
	var_5092_int = 529850; // 0x27ac MovI
	var_5093_int = 529849; // 0x27ad MovI
	var_5094_float = var_5090_float; // 0x27ae Mov
	func_12278(var_5091_int, var_5092_int, var_5093_int, var_5094_float); // 0x27af NEW_2
	var_5089_int = var_5091_int; // 0x27b0 Mov
	return 0; // 0x27b2 Return
}


func_6059(var_1604_int, var_1605_int, var_1606_object, var_1607_object, var_1608_object, var_1609_object)
{
	var_1610_int = 0; // 0x17ac PushI
	var_1611_bool = var_1605_int == var_1610_int; // 0x17ad Eq
	if(var_1611_bool == 0) goto Label_6099; // 0x17ae JumpB
	var_1612_int = 0; var_1613_bool = 0; // 0x17af PushV
	var_1612_int = 9; // 0x17b0 MovI
	var_1613_bool = 0; // 0x17b1 MovB
	func_746(var_1612_int, var_1613_bool); // 0x17b2 NEW_2
	var_1614_int = 0; var_1615_bool = 0; var_1616_int = 0; // 0x17b4 PushV
	var_1614_int = 9; // 0x17b5 MovI
	var_1615_bool = 0; // 0x17b6 MovB
	var_1616_int = 1; // 0x17b7 MovI
	func_763(var_1614_int, var_1615_bool, var_1616_int); // 0x17b8 NEW_2
	var_1617_int = 0; var_1618_int = 0; var_1619_object = Obj(); var_1620_object = Obj(); var_1621_object = Obj(); // 0x17ba PushV
	var_1617_int = 9; // 0x17bb MovI
	var_1618_int = var_1604_int; // 0x17bc Mov
	var_1619_object = var_1606_object; // 0x17bd Mov
	var_1620_object = var_1607_object; // 0x17be Mov
	var_1621_object = var_1608_object; // 0x17bf Mov
	func_572(var_1618_int, var_1619_object, var_1620_object, var_1621_object); // 0x17c0 NEW_2
	var_1622_object = Obj(); var_1623_int = 0; // 0x17c2 PushV
	var_1622_object = var_1609_object; // 0x17c3 Mov
	var_1623_int = 0; // 0x17c4 MovI
	func_255(var_1623_int); // 0x17c5 NEW_2
	var_1624_int = 0; var_1625_bool = 0; var_1626_int = 0; // 0x17c7 PushV
	var_1624_int = 9; // 0x17c8 MovI
	var_1625_bool = 0; // 0x17c9 MovB
	var_1626_int = 7; // 0x17ca MovI
	func_820(var_1624_int, var_1625_bool, var_1626_int); // 0x17cb NEW_2
	var_1627_int = 0; var_1628_bool = 0; var_1629_int = 0; // 0x17cd PushV
	var_1627_int = 9; // 0x17ce MovI
	var_1628_bool = 0; // 0x17cf MovB
	var_1629_int = 7; // 0x17d0 MovI
	func_882(var_1627_int, var_1628_bool, var_1629_int); // 0x17d1 NEW_2
	
Label_6099:
	var_1630_int = 0; var_1631_int = 0; // 0x17d3 PushV
	var_1630_int = 9; // 0x17d4 MovI
	var_1631_int = var_1605_int; // 0x17d5 Mov
	func_1000(var_1630_int, var_1631_int); // 0x17d6 NEW_2
	var_1632_int = 0; var_1633_int = 0; var_1634_int = 0; // 0x17d8 PushV
	var_1632_int = 9; // 0x17d9 MovI
	var_1633_int = var_1604_int; // 0x17da Mov
	var_1634_int = var_1605_int; // 0x17db Mov
	func_1574(var_1632_int, var_1633_int, var_1634_int); // 0x17dc NEW_2
	return 0; // 0x17de Return
}


func_11181()
{
	var_4937_object = Obj(); var_4938_object = Obj(); var_4939_object = Obj(); var_4940_object = Obj(); // 0x2bad PushV
	var_4941_object = Obj(); // 0x2bae PushV
	func_12286(var_4941_object); // 0x2baf NEW_2
	var_4939_object = var_4941_object; // 0x2bb0 Mov
	var_4942_string = "b8q01GrifGotoKlara"; // 0x2bb2 PushS
	FindMark(var_4940_object, var_4942_string); // 0x2bb3 ObjFunc
	var_4943_object = var_4940_object; // 0x2bb5 Push
	if(var_4943_object == 0) goto Label_11193; // 0x2bb6 JumpB
	Remove(); // 0x2bb7 ObjFunc
	
Label_11193:
	var_4944_string = "b8q01KapellaGotoKlara"; // 0x2bb9 PushS
	FindMark(var_4940_object, var_4944_string); // 0x2bba ObjFunc
	var_4945_object = var_4940_object; // 0x2bbc Push
	if(var_4945_object == 0) goto Label_11200; // 0x2bbd JumpB
	Remove(); // 0x2bbe ObjFunc
	
Label_11200:
	var_4946_string = "b8q01NotkinGotoKlara"; // 0x2bc0 PushS
	FindMark(var_4940_object, var_4946_string); // 0x2bc1 ObjFunc
	var_4947_object = var_4940_object; // 0x2bc3 Push
	if(var_4947_object == 0) goto Label_11207; // 0x2bc4 JumpB
	Remove(); // 0x2bc5 ObjFunc
	
Label_11207:
	var_4948_string = "b8q03GeorgGotoKaterina"; // 0x2bc7 PushS
	FindMark(var_4940_object, var_4948_string); // 0x2bc8 ObjFunc
	var_4949_object = var_4940_object; // 0x2bca Push
	if(var_4949_object == 0) goto Label_11214; // 0x2bcb JumpB
	Remove(); // 0x2bcc ObjFunc
	
Label_11214:
	var_4950_string = "b8q03KaterinaGotoMat"; // 0x2bce PushS
	FindMark(var_4940_object, var_4950_string); // 0x2bcf ObjFunc
	var_4951_object = var_4940_object; // 0x2bd1 Push
	if(var_4951_object == 0) goto Label_11221; // 0x2bd2 JumpB
	Remove(); // 0x2bd3 ObjFunc
	
Label_11221:
	var_4952_bool = 0; var_4953_int = 0; // 0x2bd5 PushV
	var_4953_int = 293; // 0x2bd6 MovI
	func_12261(var_4952_bool, var_4953_int); // 0x2bd7 NEW_2
	var_4954_bool = 0; var_4955_int = 0; // 0x2bd9 PushV
	var_4955_int = 284; // 0x2bda MovI
	func_12261(var_4954_bool, var_4955_int); // 0x2bdb NEW_2
	var_4956_bool = 0; var_4957_int = 0; // 0x2bdd PushV
	var_4957_int = 575; // 0x2bde MovI
	func_12261(var_4956_bool, var_4957_int); // 0x2bdf NEW_2
	return 4; // 0x2be1 Return
}


func_12207()
{
	var_5060_object = Obj(); var_5061_object = Obj(); // 0x2faf PushV
	var_5062_int = 565; // 0x2fb0 PushI
	var_5063_int = 0; // 0x2fb1 PushI
	var_5064_int = 530579; // 0x2fb2 PushI
	CreateDiaryEntry(var_5061_object, var_5062_int, var_5063_int, var_5064_int); // 0x2fb3 Func
	var_5065_bool = 0; var_5066_object = Obj(); var_5067_int = 0; // 0x2fb5 PushV
	var_5066_object = var_5061_object; // 0x2fb6 Mov
	var_5067_int = -1; // 0x2fb7 MovI
	func_12233(var_5065_bool, var_5066_object, var_5067_int); // 0x2fb8 NEW_2
	return 2; // 0x2fba Return
}


func_10163(var_5214_int, var_5215_float)
{
	var_5216_int = 0; var_5217_int = 0; var_5218_int = 0; var_5219_float = 0; // 0x27b4 PushV
	var_5217_int = 529862; // 0x27b5 MovI
	var_5218_int = 529861; // 0x27b6 MovI
	var_5219_float = var_5215_float; // 0x27b7 Mov
	func_12278(var_5216_int, var_5217_int, var_5218_int, var_5219_float); // 0x27b8 NEW_2
	var_5214_int = var_5216_int; // 0x27b9 Mov
	return 0; // 0x27bb Return
}


func_12220(var_4896_object)
{
	var_4897_object = Obj(); var_4898_object = Obj(); // 0x2fbc PushV
	GetDiaryRoot(var_4898_object); // 0x2fbd Func
	var_4899_bool = var_4898_object == 0; // 0x2fbf Not
	if(var_4899_bool == 0) goto Label_12230; // 0x2fc0 JumpB
	var_4900_string = "Can't retrieve diary root"; // 0x2fc1 PushS
	Trace(var_4900_string); // 0x2fc2 Func
	var_4896_object = 0; // 0x2fc4 MovB
	return 2; // 0x2fc5 Return
	
Label_12230:
	var_4896_object = var_4898_object; // 0x2fc6 Mov
	return 2; // 0x2fc7 Return
}


func_10172(var_5292_int, var_5293_float)
{
	var_5294_int = 0; var_5295_int = 0; var_5296_int = 0; var_5297_float = 0; // 0x27bd PushV
	var_5295_int = 529866; // 0x27be MovI
	var_5296_int = 529865; // 0x27bf MovI
	var_5297_float = var_5293_float; // 0x27c0 Mov
	func_12278(var_5294_int, var_5295_int, var_5296_int, var_5297_float); // 0x27c1 NEW_2
	var_5292_int = var_5294_int; // 0x27c2 Mov
	return 0; // 0x27c4 Return
}


func_10181(var_4732_int, var_4733_float)
{
	var_4734_int = 0; var_4735_int = 0; var_4736_int = 0; var_4737_float = 0; // 0x27c6 PushV
	var_4735_int = 529854; // 0x27c7 MovI
	var_4736_int = 529853; // 0x27c8 MovI
	var_4737_float = var_4733_float; // 0x27c9 Mov
	func_12278(var_4734_int, var_4735_int, var_4736_int, var_4737_float); // 0x27ca NEW_2
	var_4732_int = var_4734_int; // 0x27cb Mov
	return 0; // 0x27cd Return
}


func_12233(var_4887_bool, var_4888_object, var_4889_int)
{
	var_4890_object = Obj(); var_4891_object = Obj(); var_4892_int = 0; var_4893_object = Obj(); var_4894_object = Obj(); var_4895_int = 0; // 0x2fc9 PushV
	var_4896_object = Obj(); // 0x2fca PushV
	func_12220(var_4896_object); // 0x2fcb NEW_2
	var_4893_object = var_4896_object; // 0x2fcc Mov
	Find(var_4889_int, var_4894_object); // 0x2fce ObjFunc
	var_4901_bool = var_4894_object == 0; // 0x2fd0 Not
	if(var_4901_bool == 0) goto Label_12248; // 0x2fd1 JumpB
	var_4902_string = "Can't find diary parent with id: "; // 0x2fd2 PushS
	var_4903_int = var_4902_string + var_4889_int; // 0x2fd3 Add
	Trace(var_4903_int); // 0x2fd4 Func
	var_4887_bool = 0; // 0x2fd6 MovB
	return 6; // 0x2fd7 Return
	
Label_12248:
	AddChild(var_4888_object); // 0x2fd8 ObjFunc
	var_4904_int = 7; // 0x2fda PushI
	SendWorldWndMessage(var_4904_int); // 0x2fdb Func
	GetCategory(var_4895_int); // 0x2fdd ObjFunc
	SetDiarySection(var_4895_int); // 0x2fdf Func
	var_4887_bool = 0; // 0x2fe1 MovB
	return 6; // 0x2fe2 Return
}


func_970(var_1322_int, var_1323_int)
{
	var_1324_bool = 0; // 0x3cb PushV
	var_1324_bool = 1; // 0x3cc MovB
	var_1325_int = 20; // 0x3cd PushI
	var_1326_bool = var_1323_int >= var_1325_int; // 0x3ce GE
	if(var_1326_bool == 0) goto Label_987; // 0x3cf JumpB
	var_1327_bool = 0; // 0x3d0 PushV
	var_1327_bool = 0; // 0x3d1 MovB
	var_1328_int = 6; // 0x3d2 PushI
	var_1329_bool = var_1323_int >= var_1328_int; // 0x3d3 GE
	if(var_1329_bool == 0) goto Label_985; // 0x3d4 JumpB
	var_1330_int = 10; // 0x3d5 PushI
	var_1331_bool = var_1323_int < var_1330_int; // 0x3d6 LT
	if(var_1331_bool == 0) goto Label_985; // 0x3d7 JumpB
	var_1327_bool = 1; // 0x3d8 MovB
	
Label_985:
	if(var_1327_bool == 0) goto Label_987; // 0x3d9 JumpB
	var_1324_bool = 0; // 0x3da MovB
	
Label_987:
	if(var_1324_bool == 0) goto Label_994; // 0x3db JumpB
	var_1332_int = 0; var_1333_bool = 0; // 0x3dc PushV
	var_1332_int = var_1322_int; // 0x3dd Mov
	var_1333_bool = 1; // 0x3de MovB
	func_729(var_1332_int, var_1333_bool); // 0x3df NEW_2
	goto Label_999; // 0x3e1 Jump
	
Label_999:
	return 0; // 0x3e7 Return
	
Label_994:
	var_1334_int = 0; var_1335_bool = 0; // 0x3e2 PushV
	var_1334_int = var_1322_int; // 0x3e3 Mov
	var_1335_bool = 0; // 0x3e4 MovB
	func_729(var_1334_int, var_1335_bool); // 0x3e5 NEW_2
}


func_10190(var_5230_int, var_5231_float)
{
	var_5232_int = 0; var_5233_int = 0; var_5234_int = 0; var_5235_float = 0; // 0x27cf PushV
	var_5233_int = 529864; // 0x27d0 MovI
	var_5234_int = 529863; // 0x27d1 MovI
	var_5235_float = var_5231_float; // 0x27d2 Mov
	func_12278(var_5232_int, var_5233_int, var_5234_int, var_5235_float); // 0x27d3 NEW_2
	var_5230_int = var_5232_int; // 0x27d4 Mov
	return 0; // 0x27d6 Return
}


func_5074(var_3679_int, var_3680_int, var_3681_object, var_3682_object, var_3683_object, var_3684_object)
{
	var_3685_int = 0; // 0x13d3 PushI
	var_3686_bool = var_3680_int == var_3685_int; // 0x13d4 Eq
	if(var_3686_bool == 0) goto Label_5114; // 0x13d5 JumpB
	var_3687_int = 0; var_3688_bool = 0; // 0x13d6 PushV
	var_3687_int = 3; // 0x13d7 MovI
	var_3688_bool = 0; // 0x13d8 MovB
	func_746(var_3687_int, var_3688_bool); // 0x13d9 NEW_2
	var_3689_int = 0; var_3690_bool = 0; var_3691_int = 0; // 0x13db PushV
	var_3689_int = 3; // 0x13dc MovI
	var_3690_bool = 0; // 0x13dd MovB
	var_3691_int = 1; // 0x13de MovI
	func_763(var_3689_int, var_3690_bool, var_3691_int); // 0x13df NEW_2
	var_3692_int = 0; var_3693_int = 0; var_3694_object = Obj(); var_3695_object = Obj(); var_3696_object = Obj(); // 0x13e1 PushV
	var_3692_int = 3; // 0x13e2 MovI
	var_3693_int = var_3679_int; // 0x13e3 Mov
	var_3694_object = var_3681_object; // 0x13e4 Mov
	var_3695_object = var_3682_object; // 0x13e5 Mov
	var_3696_object = var_3683_object; // 0x13e6 Mov
	func_670(var_3692_int, var_3693_int, var_3694_object, var_3695_object, var_3696_object); // 0x13e7 NEW_2
	var_3697_object = Obj(); var_3698_int = 0; // 0x13e9 PushV
	var_3697_object = var_3684_object; // 0x13ea Mov
	var_3698_int = 2; // 0x13eb MovI
	func_255(var_3698_int); // 0x13ec NEW_2
	var_3699_int = 0; var_3700_bool = 0; var_3701_int = 0; // 0x13ee PushV
	var_3699_int = 3; // 0x13ef MovI
	var_3700_bool = 0; // 0x13f0 MovB
	var_3701_int = 7; // 0x13f1 MovI
	func_820(var_3699_int, var_3700_bool, var_3701_int); // 0x13f2 NEW_2
	var_3702_int = 0; var_3703_bool = 0; var_3704_int = 0; // 0x13f4 PushV
	var_3702_int = 3; // 0x13f5 MovI
	var_3703_bool = 1; // 0x13f6 MovB
	var_3704_int = 7; // 0x13f7 MovI
	func_882(var_3702_int, var_3703_bool, var_3704_int); // 0x13f8 NEW_2
	
Label_5114:
	var_3705_int = 0; var_3706_bool = 0; // 0x13fa PushV
	var_3705_int = 3; // 0x13fb MovI
	var_3706_bool = 0; // 0x13fc MovB
	func_729(var_3705_int, var_3706_bool); // 0x13fd NEW_2
	var_3707_int = 0; var_3708_int = 0; var_3709_int = 0; // 0x13ff PushV
	var_3707_int = 3; // 0x1400 MovI
	var_3708_int = var_3679_int; // 0x1401 Mov
	var_3709_int = var_3680_int; // 0x1402 Mov
	func_3797(var_3707_int, var_3708_int, var_3709_int); // 0x1403 NEW_2
	return 0; // 0x1405 Return
}


func_8150()
{
	var_4382_object = Obj(); var_4383_object = Obj(); // 0x1fd6 PushV
	GetMainOutdoorScene(var_4383_object); // 0x1fd7 Func
	var_4384_object = GlobalVars[0]; // 0x1fd9 PushGE
	var_4385_object = Obj(); var_4386_object = Obj(); var_4387_int = 0; // 0x1fda PushV
	var_4386_object = var_4383_object; // 0x1fdb Mov
	var_4387_int = 1; // 0x1fdc MovI
	func_7712(var_4385_object, var_4386_object, var_4387_int); // 0x1fdd NEW_2
	var_4384_object = var_4385_object; // 0x1fde Mov
	GlobalVars[0] = var_4384_object; // 0x1fe0 PopGE
	var_4407_object = GlobalVars[1]; // 0x1fe1 PushGE
	var_4408_object = Obj(); var_4409_object = Obj(); var_4410_int = 0; // 0x1fe2 PushV
	var_4409_object = var_4383_object; // 0x1fe3 Mov
	var_4410_int = 2; // 0x1fe4 MovI
	func_7712(var_4408_object, var_4409_object, var_4410_int); // 0x1fe5 NEW_2
	var_4407_object = var_4408_object; // 0x1fe6 Mov
	GlobalVars[1] = var_4407_object; // 0x1fe8 PopGE
	var_4411_object = GlobalVars[2]; // 0x1fe9 PushGE
	var_4412_object = Obj(); var_4413_object = Obj(); var_4414_int = 0; // 0x1fea PushV
	var_4413_object = var_4383_object; // 0x1feb Mov
	var_4414_int = 3; // 0x1fec MovI
	func_7712(var_4412_object, var_4413_object, var_4414_int); // 0x1fed NEW_2
	var_4411_object = var_4412_object; // 0x1fee Mov
	GlobalVars[2] = var_4411_object; // 0x1ff0 PopGE
	var_4415_object = GlobalVars[3]; // 0x1ff1 PushGE
	var_4416_object = Obj(); var_4417_object = Obj(); var_4418_int = 0; // 0x1ff2 PushV
	var_4417_object = var_4383_object; // 0x1ff3 Mov
	var_4418_int = 4; // 0x1ff4 MovI
	func_7712(var_4416_object, var_4417_object, var_4418_int); // 0x1ff5 NEW_2
	var_4415_object = var_4416_object; // 0x1ff6 Mov
	GlobalVars[3] = var_4415_object; // 0x1ff8 PopGE
	var_4419_object = GlobalVars[4]; // 0x1ff9 PushGE
	var_4420_object = Obj(); var_4421_object = Obj(); var_4422_int = 0; // 0x1ffa PushV
	var_4421_object = var_4383_object; // 0x1ffb Mov
	var_4422_int = 5; // 0x1ffc MovI
	func_7712(var_4420_object, var_4421_object, var_4422_int); // 0x1ffd NEW_2
	var_4419_object = var_4420_object; // 0x1ffe Mov
	GlobalVars[4] = var_4419_object; // 0x2000 PopGE
	var_4423_object = GlobalVars[5]; // 0x2001 PushGE
	var_4424_object = Obj(); var_4425_object = Obj(); var_4426_int = 0; // 0x2002 PushV
	var_4425_object = var_4383_object; // 0x2003 Mov
	var_4426_int = 6; // 0x2004 MovI
	func_7712(var_4424_object, var_4425_object, var_4426_int); // 0x2005 NEW_2
	var_4423_object = var_4424_object; // 0x2006 Mov
	GlobalVars[5] = var_4423_object; // 0x2008 PopGE
	var_4427_object = GlobalVars[12]; // 0x2009 PushGE
	var_4428_object = Obj(); // 0x200a PushV
	func_100(var_4428_object); // 0x200b NEW_2
	var_4427_object = var_4428_object; // 0x200c Mov
	GlobalVars[12] = var_4427_object; // 0x200e PopGE
	var_4429_bool = 0; // 0x200f PushV
	var_4429_bool = 0; // 0x2010 MovB
	func_7723(var_4429_bool); // 0x2011 NEW_2
	func_8698(); // 0x2014 NEW_2
	func_8773(); // 0x2017 NEW_2
	var_4526_int = 100; // 0x2019 PushI
	SendWorldWndMessage(var_4526_int); // 0x201a Func
	return 2; // 0x201c Return
}


func_10199(var_5757_int, var_5758_float)
{
	var_5759_int = 0; var_5760_int = 0; var_5761_int = 0; var_5762_float = 0; // 0x27d8 PushV
	var_5760_int = 531085; // 0x27d9 MovI
	var_5761_int = 531084; // 0x27da MovI
	var_5762_float = var_5758_float; // 0x27db Mov
	func_12278(var_5759_int, var_5760_int, var_5761_int, var_5762_float); // 0x27dc NEW_2
	var_5757_int = var_5759_int; // 0x27dd Mov
	return 0; // 0x27df Return
}


func_7132(var_2999_int, var_3000_int, var_3001_object, var_3002_object, var_3003_object, var_3004_object)
{
	var_3005_int = 0; // 0x1bdd PushI
	var_3006_bool = var_3000_int == var_3005_int; // 0x1bde Eq
	if(var_3006_bool == 0) goto Label_7172; // 0x1bdf JumpB
	var_3007_int = 0; var_3008_bool = 0; // 0x1be0 PushV
	var_3007_int = 14; // 0x1be1 MovI
	var_3008_bool = 1; // 0x1be2 MovB
	func_746(var_3007_int, var_3008_bool); // 0x1be3 NEW_2
	var_3009_int = 0; var_3010_bool = 0; var_3011_int = 0; // 0x1be5 PushV
	var_3009_int = 14; // 0x1be6 MovI
	var_3010_bool = 1; // 0x1be7 MovB
	var_3011_int = 1; // 0x1be8 MovI
	func_763(var_3009_int, var_3010_bool, var_3011_int); // 0x1be9 NEW_2
	var_3012_int = 0; var_3013_int = 0; var_3014_object = Obj(); var_3015_object = Obj(); var_3016_object = Obj(); // 0x1beb PushV
	var_3012_int = 14; // 0x1bec MovI
	var_3013_int = var_2999_int; // 0x1bed Mov
	var_3014_object = var_3001_object; // 0x1bee Mov
	var_3015_object = var_3002_object; // 0x1bef Mov
	var_3016_object = var_3003_object; // 0x1bf0 Mov
	func_591(var_3012_int, var_3013_int, var_3014_object, var_3015_object, var_3016_object); // 0x1bf1 NEW_2
	var_3017_object = Obj(); var_3018_int = 0; // 0x1bf3 PushV
	var_3017_object = var_3004_object; // 0x1bf4 Mov
	var_3018_int = 1; // 0x1bf5 MovI
	func_255(var_3018_int); // 0x1bf6 NEW_2
	var_3019_int = 0; var_3020_bool = 0; var_3021_int = 0; // 0x1bf8 PushV
	var_3019_int = 14; // 0x1bf9 MovI
	var_3020_bool = 1; // 0x1bfa MovB
	var_3021_int = 5; // 0x1bfb MovI
	func_820(var_3019_int, var_3020_bool, var_3021_int); // 0x1bfc NEW_2
	var_3022_int = 0; var_3023_bool = 0; var_3024_int = 0; // 0x1bfe PushV
	var_3022_int = 14; // 0x1bff MovI
	var_3023_bool = 0; // 0x1c00 MovB
	var_3024_int = 5; // 0x1c01 MovI
	func_882(var_3022_int, var_3023_bool, var_3024_int); // 0x1c02 NEW_2
	
Label_7172:
	var_3025_int = 0; var_3026_bool = 0; // 0x1c04 PushV
	var_3025_int = 14; // 0x1c05 MovI
	var_3026_bool = 0; // 0x1c06 MovB
	func_729(var_3025_int, var_3026_bool); // 0x1c07 NEW_2
	var_3027_int = 0; var_3028_int = 0; var_3029_int = 0; // 0x1c09 PushV
	var_3027_int = 14; // 0x1c0a MovI
	var_3028_int = var_2999_int; // 0x1c0b Mov
	var_3029_int = var_3000_int; // 0x1c0c Mov
	func_2534(var_3027_int, var_3028_int, var_3029_int); // 0x1c0d NEW_2
	return 0; // 0x1c0f Return
}


func_6111(var_2834_int, var_2835_int, var_2836_object, var_2837_object, var_2838_object, var_2839_object)
{
	var_2840_int = 0; // 0x17e0 PushI
	var_2841_bool = var_2835_int == var_2840_int; // 0x17e1 Eq
	if(var_2841_bool == 0) goto Label_6151; // 0x17e2 JumpB
	var_2842_int = 0; var_2843_bool = 0; // 0x17e3 PushV
	var_2842_int = 9; // 0x17e4 MovI
	var_2843_bool = 1; // 0x17e5 MovB
	func_746(var_2842_int, var_2843_bool); // 0x17e6 NEW_2
	var_2844_int = 0; var_2845_bool = 0; var_2846_int = 0; // 0x17e8 PushV
	var_2844_int = 9; // 0x17e9 MovI
	var_2845_bool = 1; // 0x17ea MovB
	var_2846_int = 1; // 0x17eb MovI
	func_763(var_2844_int, var_2845_bool, var_2846_int); // 0x17ec NEW_2
	var_2847_int = 0; var_2848_int = 0; var_2849_object = Obj(); var_2850_object = Obj(); var_2851_object = Obj(); // 0x17ee PushV
	var_2847_int = 9; // 0x17ef MovI
	var_2848_int = var_2834_int; // 0x17f0 Mov
	var_2849_object = var_2836_object; // 0x17f1 Mov
	var_2850_object = var_2837_object; // 0x17f2 Mov
	var_2851_object = var_2838_object; // 0x17f3 Mov
	func_591(var_2847_int, var_2848_int, var_2849_object, var_2850_object, var_2851_object); // 0x17f4 NEW_2
	var_2852_object = Obj(); var_2853_int = 0; // 0x17f6 PushV
	var_2852_object = var_2839_object; // 0x17f7 Mov
	var_2853_int = 1; // 0x17f8 MovI
	func_255(var_2853_int); // 0x17f9 NEW_2
	var_2854_int = 0; var_2855_bool = 0; var_2856_int = 0; // 0x17fb PushV
	var_2854_int = 9; // 0x17fc MovI
	var_2855_bool = 1; // 0x17fd MovB
	var_2856_int = 7; // 0x17fe MovI
	func_820(var_2854_int, var_2855_bool, var_2856_int); // 0x17ff NEW_2
	var_2857_int = 0; var_2858_bool = 0; var_2859_int = 0; // 0x1801 PushV
	var_2857_int = 9; // 0x1802 MovI
	var_2858_bool = 0; // 0x1803 MovB
	var_2859_int = 7; // 0x1804 MovI
	func_882(var_2857_int, var_2858_bool, var_2859_int); // 0x1805 NEW_2
	
Label_6151:
	var_2860_int = 0; var_2861_bool = 0; // 0x1807 PushV
	var_2860_int = 9; // 0x1808 MovI
	var_2861_bool = 0; // 0x1809 MovB
	func_729(var_2860_int, var_2861_bool); // 0x180a NEW_2
	var_2862_int = 0; var_2863_int = 0; var_2864_int = 0; // 0x180c PushV
	var_2862_int = 9; // 0x180d MovI
	var_2863_int = var_2834_int; // 0x180e Mov
	var_2864_int = var_2835_int; // 0x180f Mov
	func_2714(var_2862_int, var_2863_int, var_2864_int); // 0x1810 NEW_2
	return 0; // 0x1812 Return
}


func_10208(var_5705_int, var_5706_float)
{
	var_5707_int = 0; var_5708_int = 0; var_5709_int = 0; var_5710_float = 0; // 0x27e1 PushV
	var_5708_int = 538402; // 0x27e2 MovI
	var_5709_int = 538401; // 0x27e3 MovI
	var_5710_float = var_5706_float; // 0x27e4 Mov
	func_12278(var_5707_int, var_5708_int, var_5709_int, var_5710_float); // 0x27e5 NEW_2
	var_5705_int = var_5707_int; // 0x27e6 Mov
	return 0; // 0x27e8 Return
}


func_11236()
{
	var_5142_object = Obj(); var_5143_object = Obj(); var_5144_object = Obj(); var_5145_object = Obj(); // 0x2be4 PushV
	var_5146_object = Obj(); // 0x2be5 PushV
	func_12286(var_5146_object); // 0x2be6 NEW_2
	var_5144_object = var_5146_object; // 0x2be7 Mov
	var_5147_string = "b9q01MDobermanGotoFactory"; // 0x2be9 PushS
	FindMark(var_5145_object, var_5147_string); // 0x2bea ObjFunc
	var_5148_object = var_5145_object; // 0x2bec Push
	if(var_5148_object == 0) goto Label_11248; // 0x2bed JumpB
	Remove(); // 0x2bee ObjFunc
	
Label_11248:
	var_5149_string = "b9q03Bonfire1"; // 0x2bf0 PushS
	FindMark(var_5145_object, var_5149_string); // 0x2bf1 ObjFunc
	var_5150_object = var_5145_object; // 0x2bf3 Push
	if(var_5150_object == 0) goto Label_11255; // 0x2bf4 JumpB
	Remove(); // 0x2bf5 ObjFunc
	
Label_11255:
	var_5151_string = "b9q03Bonfire2"; // 0x2bf7 PushS
	FindMark(var_5145_object, var_5151_string); // 0x2bf8 ObjFunc
	var_5152_object = var_5145_object; // 0x2bfa Push
	if(var_5152_object == 0) goto Label_11262; // 0x2bfb JumpB
	Remove(); // 0x2bfc ObjFunc
	
Label_11262:
	var_5153_string = "b9q03Bonfire3"; // 0x2bfe PushS
	FindMark(var_5145_object, var_5153_string); // 0x2bff ObjFunc
	var_5154_object = var_5145_object; // 0x2c01 Push
	if(var_5154_object == 0) goto Label_11269; // 0x2c02 JumpB
	Remove(); // 0x2c03 ObjFunc
	
Label_11269:
	var_5155_string = "b9q03Bonfire4"; // 0x2c05 PushS
	FindMark(var_5145_object, var_5155_string); // 0x2c06 ObjFunc
	var_5156_object = var_5145_object; // 0x2c08 Push
	if(var_5156_object == 0) goto Label_11276; // 0x2c09 JumpB
	Remove(); // 0x2c0a ObjFunc
	
Label_11276:
	var_5157_string = "b9q03DobermanGotoFollower"; // 0x2c0c PushS
	FindMark(var_5145_object, var_5157_string); // 0x2c0d ObjFunc
	var_5158_object = var_5145_object; // 0x2c0f Push
	if(var_5158_object == 0) goto Label_11283; // 0x2c10 JumpB
	Remove(); // 0x2c11 ObjFunc
	
Label_11283:
	var_5159_string = "b9q03KapellaGotoSpi4ka"; // 0x2c13 PushS
	FindMark(var_5145_object, var_5159_string); // 0x2c14 ObjFunc
	var_5160_object = var_5145_object; // 0x2c16 Push
	if(var_5160_object == 0) goto Label_11290; // 0x2c17 JumpB
	Remove(); // 0x2c18 ObjFunc
	
Label_11290:
	var_5161_string = "b9q01BlockGotoBoiny"; // 0x2c1a PushS
	FindMark(var_5145_object, var_5161_string); // 0x2c1b ObjFunc
	var_5162_object = var_5145_object; // 0x2c1d Push
	if(var_5162_object == 0) goto Label_11297; // 0x2c1e JumpB
	Remove(); // 0x2c1f ObjFunc
	
Label_11297:
	var_5163_string = "b9Block"; // 0x2c21 PushS
	FindMark(var_5145_object, var_5163_string); // 0x2c22 ObjFunc
	var_5164_object = var_5145_object; // 0x2c24 Push
	if(var_5164_object == 0) goto Label_11304; // 0x2c25 JumpB
	Remove(); // 0x2c26 ObjFunc
	
Label_11304:
	var_5165_bool = 0; var_5166_int = 0; // 0x2c28 PushV
	var_5166_int = 297; // 0x2c29 MovI
	func_12261(var_5165_bool, var_5166_int); // 0x2c2a NEW_2
	var_5167_bool = 0; var_5168_int = 0; // 0x2c2c PushV
	var_5168_int = 532; // 0x2c2d MovI
	func_12261(var_5167_bool, var_5168_int); // 0x2c2e NEW_2
	return 4; // 0x2c30 Return
}


func_12261(var_4810_bool, var_4811_int)
{
	var_4812_object = Obj(); var_4813_object = Obj(); var_4814_object = Obj(); var_4815_object = Obj(); // 0x2fe5 PushV
	var_4816_object = Obj(); // 0x2fe6 PushV
	func_12220(var_4816_object); // 0x2fe7 NEW_2
	var_4814_object = var_4816_object; // 0x2fe8 Mov
	Find(var_4811_int, var_4815_object); // 0x2fea ObjFunc
	var_4821_bool = var_4815_object == 0; // 0x2fec Not
	if(var_4821_bool == 0) goto Label_12272; // 0x2fed JumpB
	var_4810_bool = 0; // 0x2fee MovB
	return 4; // 0x2fef Return
	
Label_12272:
	Remove(); // 0x2ff0 ObjFunc
	var_4810_bool = 1; // 0x2ff2 MovB
	return 4; // 0x2ff3 Return
}


func_1000(var_724_int, var_725_int)
{
	var_726_bool = 0; // 0x3e9 PushV
	var_726_bool = 1; // 0x3ea MovB
	var_727_bool = 0; // 0x3eb PushV
	var_727_bool = 1; // 0x3ec MovB
	var_728_int = 22; // 0x3ed PushI
	var_729_bool = var_725_int >= var_728_int; // 0x3ee GE
	if(var_729_bool == 0) goto Label_1012; // 0x3ef JumpB
	var_730_int = 4; // 0x3f0 PushI
	var_731_bool = var_725_int < var_730_int; // 0x3f1 LT
	if(var_731_bool == 0) goto Label_1012; // 0x3f2 JumpB
	var_727_bool = 0; // 0x3f3 MovB
	
Label_1012:
	if(var_727_bool == 0) goto Label_1024; // 0x3f4 JumpB
	var_732_bool = 0; // 0x3f5 PushV
	var_732_bool = 0; // 0x3f6 MovB
	var_733_int = 6; // 0x3f7 PushI
	var_734_bool = var_725_int >= var_733_int; // 0x3f8 GE
	if(var_734_bool == 0) goto Label_1022; // 0x3f9 JumpB
	var_735_int = 8; // 0x3fa PushI
	var_736_bool = var_725_int < var_735_int; // 0x3fb LT
	if(var_736_bool == 0) goto Label_1022; // 0x3fc JumpB
	var_732_bool = 1; // 0x3fd MovB
	
Label_1022:
	if(var_732_bool == 0) goto Label_1024; // 0x3fe JumpB
	var_726_bool = 0; // 0x3ff MovB
	
Label_1024:
	if(var_726_bool == 0) goto Label_1031; // 0x400 JumpB
	var_737_int = 0; var_738_bool = 0; // 0x401 PushV
	var_737_int = var_724_int; // 0x402 Mov
	var_738_bool = 1; // 0x403 MovB
	func_729(var_737_int, var_738_bool); // 0x404 NEW_2
	goto Label_1036; // 0x406 Jump
	
Label_1036:
	return 0; // 0x40c Return
	
Label_1031:
	var_748_int = 0; var_749_bool = 0; // 0x407 PushV
	var_748_int = var_724_int; // 0x408 Mov
	var_749_bool = 0; // 0x409 MovB
	func_729(var_748_int, var_749_bool); // 0x40a NEW_2
}


func_10217(var_5338_int, var_5339_float)
{
	var_5340_int = 0; var_5341_int = 0; var_5342_int = 0; var_5343_float = 0; // 0x27ea PushV
	var_5341_int = 529868; // 0x27eb MovI
	var_5342_int = 529867; // 0x27ec MovI
	var_5343_float = var_5339_float; // 0x27ed Mov
	func_12278(var_5340_int, var_5341_int, var_5342_int, var_5343_float); // 0x27ee NEW_2
	var_5338_int = var_5340_int; // 0x27ef Mov
	return 0; // 0x27f1 Return
}


func_10226(var_5176_int, var_5177_float)
{
	var_5178_int = 0; var_5179_int = 0; var_5180_int = 0; var_5181_float = 0; // 0x27f3 PushV
	var_5179_int = 529870; // 0x27f4 MovI
	var_5180_int = 529869; // 0x27f5 MovI
	var_5181_float = var_5177_float; // 0x27f6 Mov
	func_12278(var_5178_int, var_5179_int, var_5180_int, var_5181_float); // 0x27f7 NEW_2
	var_5176_int = var_5178_int; // 0x27f8 Mov
	return 0; // 0x27fa Return
}


func_12278(var_4949_int, var_4950_int, var_4951_int, var_4952_float)
{
	var_4953_int = 0; var_4954_int = 0; // 0x2ff6 PushV
	AddMessage(var_4950_int, var_4951_int, var_4952_float, var_4954_int); // 0x2ff7 Func
	var_4955_int = 6; // 0x2ff9 PushI
	SendWorldWndMessage(var_4955_int); // 0x2ffa Func
	var_4949_int = var_4954_int; // 0x2ffc Mov
	return 2; // 0x2ffd Return
}


func_10235(var_4740_int, var_4741_float)
{
	var_4742_int = 0; var_4743_int = 0; var_4744_int = 0; var_4745_float = 0; // 0x27fc PushV
	var_4743_int = 529856; // 0x27fd MovI
	var_4744_int = 529855; // 0x27fe MovI
	var_4745_float = var_4741_float; // 0x27ff Mov
	func_12278(var_4742_int, var_4743_int, var_4744_int, var_4745_float); // 0x2800 NEW_2
	var_4740_int = var_4742_int; // 0x2801 Mov
	return 0; // 0x2803 Return
}


func_12286(var_4854_object)
{
	var_4855_object = Obj(); var_4856_object = Obj(); var_4857_object = Obj(); var_4858_object = Obj(); // 0x2ffe PushV
	GetMainOutdoorScene(var_4857_object); // 0x2fff Func
	var_4859_bool = var_4857_object == 0; // 0x3001 NullEq
	if(var_4859_bool == 0) goto Label_12297; // 0x3002 JumpB
	var_4860_string = "Can't find main outdoor scene"; // 0x3003 PushS
	Trace(var_4860_string); // 0x3004 Func
	var_4858_object = 0; // 0x3006 SetNull
	var_4854_object = var_4858_object; // 0x3007 Mov
	return 4; // 0x3008 Return
	
Label_12297:
	GetMap(var_4858_object); // 0x3009 ObjFunc
	var_4854_object = var_4858_object; // 0x300b Mov
	return 4; // 0x300c Return
}


