task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string, var_13_string)
{
	var_14_int = 0; var_15_int = 0; // 0xca PushV
	Trace(var_12_string); // 0xcb Func
	var_16_string = "rescue"; // 0xcd PushS
	var_17_bool = var_12_string == var_16_string; // 0xce Eq
	if(var_17_bool == 0) goto Label_224; // 0xcf JumpB
	var_18_int = 0; // 0xd0 PushV
	var_19_int = 0; var_20_int = 0; // 0xd1 PushV
	var_21_int = 0; var_22_string = ""; // 0xd2 PushV
	var_22_string = var_13_string; // 0xd3 Mov
	func_1148(var_21_int, var_22_string); // 0xd4 NEW_2
	var_20_int = var_21_int; // 0xd5 Mov
	func_727(var_19_int, var_20_int); // 0xd7 NEW_2
	var_18_int = var_19_int; // 0xd8 Mov
	func_944(var_18_int); // 0xda NEW_2
	func_95(var_12_string, var_13_string, var_14_int, var_15_int); // 0xdd NEW_2
	goto Label_351; // 0xdf Jump
	
Label_351:
	return 2; // 0x15f Return
	
Label_224:
	var_451_string = "rescue_oneday"; // 0xe0 PushS
	var_452_bool = var_12_string == var_451_string; // 0xe1 Eq
	if(var_452_bool == 0) goto Label_240; // 0xe2 JumpB
	var_453_int = 0; // 0xe3 PushV
	var_454_int = 0; var_455_int = 0; // 0xe4 PushV
	var_456_int = 0; var_457_string = ""; // 0xe5 PushV
	var_457_string = var_13_string; // 0xe6 Mov
	func_1148(var_456_int, var_457_string); // 0xe7 NEW_2
	var_455_int = var_456_int; // 0xe8 Mov
	func_727(var_454_int, var_455_int); // 0xea NEW_2
	var_453_int = var_454_int; // 0xeb Mov
	func_874(var_453_int); // 0xed NEW_2
	goto Label_351; // 0xef Jump
	
Label_240:
	var_478_string = "rescue_locked"; // 0xf0 PushS
	var_479_bool = var_12_string == var_478_string; // 0xf1 Eq
	if(var_479_bool == 0) goto Label_278; // 0xf2 JumpB
	var_15_int = 0; // 0xf3 MovI
	
Label_244:
	var_480_int = 0; // 0xf4 PushV
	func_722(var_480_int); // 0xf5 NEW_2
	var_481_bool = var_15_int < var_480_int; // 0xf7 LT
	if(var_481_bool == 0) goto Label_274; // 0xf8 JumpB
	var_482_bool = 0; // 0xf9 PushV
	var_482_bool = 0; // 0xfa MovB
	var_483_bool = 0; var_484_int = 0; // 0xfb PushV
	var_484_int = var_15_int; // 0xfc Mov
	func_768(var_483_bool, var_484_int); // 0xfd NEW_2
	if(var_483_bool == 0) goto Label_266; // 0xff JumpB
	var_492_bool = 0; var_493_int = 0; // 0x100 PushV
	var_494_int = 0; var_495_int = 0; // 0x101 PushV
	var_495_int = var_15_int; // 0x102 Mov
	func_745(var_494_int, var_495_int); // 0x103 NEW_2
	var_493_int = var_494_int; // 0x104 Mov
	func_26(var_492_bool, var_493_int); // 0x106 NEW_2
	if(var_492_bool == 0) goto Label_266; // 0x108 JumpB
	var_482_bool = 1; // 0x109 MovB
	
Label_266:
	if(var_482_bool == 0) goto Label_271; // 0x10a JumpB
	var_518_int = 0; // 0x10b PushV
	var_518_int = var_15_int; // 0x10c Mov
	func_944(var_518_int); // 0x10d NEW_2
	
Label_271:
	var_519_int = 1; // 0x10f PushI
	var_15_int = var_15_int + var_519_int; // 0x110 Add2
	goto Label_244; // 0x111 Jump
	
Label_274:
	func_95(var_12_string, var_13_string, var_14_int, var_15_int); // 0x113 NEW_2
	goto Label_351; // 0x115 Jump
	
Label_278:
	var_520_string = "kill"; // 0x116 PushS
	var_521_bool = var_12_string == var_520_string; // 0x117 Eq
	if(var_521_bool == 0) goto Label_294; // 0x118 JumpB
	var_522_int = 0; // 0x119 PushV
	var_523_int = 0; var_524_int = 0; // 0x11a PushV
	var_525_int = 0; var_526_string = ""; // 0x11b PushV
	var_526_string = var_13_string; // 0x11c Mov
	func_1148(var_525_int, var_526_string); // 0x11d NEW_2
	var_524_int = var_525_int; // 0x11e Mov
	func_727(var_523_int, var_524_int); // 0x120 NEW_2
	var_522_int = var_523_int; // 0x121 Mov
	func_995(var_522_int); // 0x123 NEW_2
	goto Label_351; // 0x125 Jump
	
Label_294:
	var_761_string = "disease"; // 0x126 PushS
	var_762_bool = var_12_string == var_761_string; // 0x127 Eq
	if(var_762_bool == 0) goto Label_310; // 0x128 JumpB
	var_763_int = 0; // 0x129 PushV
	var_764_int = 0; var_765_int = 0; // 0x12a PushV
	var_766_int = 0; var_767_string = ""; // 0x12b PushV
	var_767_string = var_13_string; // 0x12c Mov
	func_1148(var_766_int, var_767_string); // 0x12d NEW_2
	var_765_int = var_766_int; // 0x12e Mov
	func_727(var_764_int, var_765_int); // 0x130 NEW_2
	var_763_int = var_764_int; // 0x131 Mov
	func_804(var_763_int); // 0x133 NEW_2
	goto Label_351; // 0x135 Jump
	
Label_310:
	var_812_string = "update"; // 0x136 PushS
	var_813_bool = var_12_string == var_812_string; // 0x137 Eq
	if(var_813_bool == 0) goto Label_317; // 0x138 JumpB
	func_426(var_15_int); // 0x13a NEW_2
	goto Label_351; // 0x13c Jump
	
Label_317:
	var_1012_string = "cleanup"; // 0x13d PushS
	var_1013_bool = var_12_string == var_1012_string; // 0x13e Eq
	if(var_1013_bool == 0) goto Label_324; // 0x13f JumpB
	func_632(); // 0x141 NEW_2
	goto Label_351; // 0x143 Jump
	
Label_324:
	var_1023_string = "childs_letter"; // 0x144 PushS
	var_1024_bool = var_12_string == var_1023_string; // 0x145 Eq
	if(var_1024_bool == 0) goto Label_338; // 0x146 JumpB
	var_1025_bool = var_8_bool == 0; // 0x147 Not
	if(var_1025_bool == 0) goto Label_337; // 0x148 JumpB
	var_1026_float = 0; // 0x149 PushV
	var_1027_float = 0; // 0x14a PushV
	func_1120(var_1027_float); // 0x14b NEW_2
	var_1026_float = var_1027_float; // 0x14c Mov
	func_6(var_1026_float); // 0x14e NEW_2
	var_8_bool = 1; // 0x150 TMovB
	
Label_337:
	goto Label_351; // 0x151 Jump
	
Label_338:
	var_1028_string = "theater_letter"; // 0x152 PushS
	var_1029_bool = var_12_string == var_1028_string; // 0x153 Eq
	if(var_1029_bool == 0) goto Label_351; // 0x154 JumpB
	var_1030_bool = var_7_bool == 0; // 0x155 Not
	if(var_1030_bool == 0) goto Label_351; // 0x156 JumpB
	var_1031_float = 0; // 0x157 PushV
	var_1032_float = 0; // 0x158 PushV
	func_1120(var_1032_float); // 0x159 NEW_2
	var_1031_float = var_1032_float; // 0x15a Mov
	func_0(var_1031_float); // 0x15c NEW_2
	var_7_bool = 1; // 0x15e TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_654(var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool); // 0x57 NEW_2
	var_7_bool = 0; // 0x59 TMovB
	var_8_bool = 0; // 0x5a TMovB
	
Label_91:
	Hold(); // 0x5b Func
	goto Label_91; // 0x5d Jump
}


func_768(var_483_bool, var_484_int)
{
	var_485_int = 0; var_486_int = 0; // 0x300 PushV
	var_487_string = ""; var_488_int = 0; // 0x301 PushV
	var_488_int = var_484_int; // 0x302 Mov
	func_750(var_487_string, var_488_int); // 0x303 NEW_2
	GetVariable(var_487_string, var_486_int); // 0x305 Func
	var_489_int = 2; // 0x307 PushI
	var_490_int = var_486_int & var_489_int; // 0x308 And
	var_491_int = 0; // 0x309 PushI
	var_483_bool = var_490_int != var_491_int; // 0x30a Neq2
	return 2; // 0x30b Return
}


func_0(var_1031_float)
{
	var_1033_int = 0; var_1034_float = 0; // 0x1 PushV
	var_1034_float = var_1031_float; // 0x2 Mov
	func_2626(var_1033_int, var_1034_float); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_6(var_383_float)
{
	var_387_int = 0; var_388_float = 0; // 0x7 PushV
	var_388_float = var_383_float; // 0x8 Mov
	func_2617(var_387_int, var_388_float); // 0x9 NEW_2
	var_396_bool = 0; var_397_string = ""; var_398_string = ""; // 0xb PushV
	var_397_string = "quest_k12_01"; // 0xc MovS
	var_398_string = "init_hidden_room"; // 0xd MovS
	func_1108(var_396_bool, var_397_string, var_398_string); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_2059(var_196_bool, var_197_int)
{
	var_198_int = 6; // 0x80c PushI
	add(var_198_int); // 0x80d ObjFunc
	var_199_int = 26; // 0x80f PushI
	add(var_199_int); // 0x810 ObjFunc
	var_200_int = 2; // 0x812 PushI
	add(var_200_int); // 0x813 ObjFunc
	var_201_int = 22; // 0x815 PushI
	add(var_201_int); // 0x816 ObjFunc
	var_202_bool = 0; // 0x818 PushB
	var_203_bool = var_196_bool == var_202_bool; // 0x819 Eq
	if(var_203_bool == 0) goto Label_2085; // 0x81a JumpB
	var_204_int = 15; // 0x81b PushI
	add(var_204_int); // 0x81c ObjFunc
	var_205_int = 5; // 0x81e PushI
	add(var_205_int); // 0x81f ObjFunc
	var_206_int = 16; // 0x821 PushI
	add(var_206_int); // 0x822 ObjFunc
	goto Label_2091; // 0x824 Jump
	
Label_2091:
	return 0; // 0x82b Return
	
Label_2085:
	var_207_int = 0; // 0x825 PushI
	var_208_bool = var_197_int != var_207_int; // 0x826 Neq
	if(var_208_bool == 0) goto Label_2091; // 0x827 JumpB
	var_209_int = 15; // 0x828 PushI
	add(var_209_int); // 0x829 ObjFunc
}


func_780(var_948_bool, var_949_int)
{
	var_950_int = 0; var_951_int = 0; // 0x30c PushV
	var_952_string = ""; var_953_int = 0; // 0x30d PushV
	var_953_int = var_949_int; // 0x30e Mov
	func_750(var_952_string, var_953_int); // 0x30f NEW_2
	GetVariable(var_952_string, var_951_int); // 0x311 Func
	var_954_int = 1; // 0x313 PushI
	var_955_int = var_951_int & var_954_int; // 0x314 And
	var_956_int = 0; // 0x315 PushI
	var_948_bool = var_955_int == var_956_int; // 0x316 Eq2
	return 2; // 0x317 Return
}


func_908(var_860_int)
{
	var_861_int = 0; var_862_object = Obj(); var_863_int = 0; var_864_int = 0; var_865_string = ""; var_866_int = 0; var_867_object = Obj(); var_868_int = 0; var_869_int = 0; var_870_string = ""; // 0x38c PushV
	var_871_string = ""; var_872_int = 0; // 0x38d PushV
	var_872_int = var_860_int; // 0x38e Mov
	func_750(var_871_string, var_872_int); // 0x38f NEW_2
	GetVariable(var_871_string, var_866_int); // 0x391 Func
	var_873_string = ""; var_874_int = 0; // 0x393 PushV
	var_874_int = var_860_int; // 0x394 Mov
	func_750(var_873_string, var_874_int); // 0x395 NEW_2
	var_875_int = 32; // 0x397 PushI
	var_876_int = var_866_int | var_875_int; // 0x398 Or
	var_877_int = 32; // 0x399 PushI
	var_878_int = var_876_int - var_877_int; // 0x39a Sub
	SetVariable(var_873_string, var_878_int); // 0x39b Func
	get(var_867_object, var_860_int); // 0x39d TObjFunc
	size(var_868_int); // 0x39f ObjFunc
	var_869_int = 0; // 0x3a1 MovI
	
Label_930:
	var_879_bool = var_869_int < var_868_int; // 0x3a2 LT
	if(var_879_bool == 0) goto Label_942; // 0x3a3 JumpB
	get(var_870_string, var_869_int); // 0x3a4 ObjFunc
	var_880_string = ""; var_881_int = 0; // 0x3a6 PushV
	var_880_string = var_870_string; // 0x3a7 Mov
	var_881_int = 1; // 0x3a8 MovI
	func_2710(var_880_string, var_881_int); // 0x3a9 NEW_2
	var_882_int = 1; // 0x3ab PushI
	var_869_int = var_869_int + var_882_int; // 0x3ac Add2
	goto Label_930; // 0x3ad Jump
	
Label_942:
	return 10; // 0x3ae Return
}


func_654(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); // 0x28e PushV
	var_28_string = "Volonteers Init..."; // 0x28f PushS
	Trace(var_28_string); // 0x290 Func
	CreateIntVector(var_20_object); // 0x292 Func
	CreateObjectVector(var_21_object); // 0x294 Func
	CreateStringVector(var_22_object); // 0x296 Func
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x298 PushV
	var_29_object = var_20_object; // 0x299 Mov
	var_30_object = var_21_object; // 0x29a Mov
	var_31_object = var_22_object; // 0x29b Mov
	func_2172(var_30_object, var_31_object); // 0x29c NEW_2
	var_0_object = var_20_object; // 0x29e TMov
	var_4_object = var_21_object; // 0x29f TMov
	var_5_object = var_22_object; // 0x2a0 TMov
	CreateObjectVector(var_23_object); // 0x2a1 Func
	CreateObjectVector(var_24_object); // 0x2a3 Func
	var_158_object = Obj(); var_159_object = Obj(); // 0x2a5 PushV
	var_158_object = var_23_object; // 0x2a6 Mov
	var_159_object = var_24_object; // 0x2a7 Mov
	func_33(); // 0x2a8 NEW_2
	var_1_object = var_23_object; // 0x2aa TMov
	var_2_object = var_24_object; // 0x2ab TMov
	CreateObjectVector(var_25_object); // 0x2ac Func
	var_3_object = var_25_object; // 0x2ae TMov
	var_26_int = 0; // 0x2af MovI
	
Label_688:
	var_213_int = 0; // 0x2b0 PushV
	func_722(var_213_int); // 0x2b1 NEW_2
	var_216_bool = var_26_int < var_213_int; // 0x2b3 LT
	if(var_216_bool == 0) goto Label_707; // 0x2b4 JumpB
	var_217_string = ""; var_218_int = 0; // 0x2b5 PushV
	var_218_int = var_26_int; // 0x2b6 Mov
	func_750(var_217_string, var_218_int); // 0x2b7 NEW_2
	var_222_int = 0; // 0x2b9 PushI
	SetVariable(var_217_string, var_222_int); // 0x2ba Func
	var_27_object = 0; // 0x2bc SetNull
	add(var_27_object); // 0x2bd TObjFunc
	var_27_object = 0; // 0x2bf SetNull
	var_223_int = 1; // 0x2c0 PushI
	var_26_int = var_26_int + var_223_int; // 0x2c1 Add2
	goto Label_688; // 0x2c2 Jump
	
Label_707:
	var_6_int = 0; // 0x2c3 TMovI
	var_224_string = "Volonteers count: "; // 0x2c4 PushS
	var_225_int = 0; // 0x2c5 PushV
	func_722(var_225_int); // 0x2c6 NEW_2
	var_226_int = var_224_string + var_225_int; // 0x2c8 Add
	Trace(var_226_int); // 0x2c9 Func
	return 16; // 0x2cb Return
}


func_2702(var_389_int, var_390_int, var_391_int, var_392_float)
{
	var_393_int = 0; var_394_int = 0; // 0xa8e PushV
	AddMessage(var_390_int, var_391_int, var_392_float, var_394_int); // 0xa8f Func
	var_395_int = 6; // 0xa91 PushI
	SendWorldWndMessage(var_395_int); // 0xa92 Func
	var_389_int = var_394_int; // 0xa94 Mov
	return 2; // 0xa95 Return
}


func_1148(var_21_int, var_22_string)
{
	_strlwr(var_22_string); // 0x47d Func
	var_23_string = "alexandr"; // 0x47f PushS
	var_24_bool = var_22_string == var_23_string; // 0x480 Eq
	if(var_24_bool == 0) goto Label_1156; // 0x481 JumpB
	var_21_int = 1; // 0x482 MovI
	return 0; // 0x483 Return
	
Label_1156:
	var_25_string = "andrei"; // 0x484 PushS
	var_26_bool = var_22_string == var_25_string; // 0x485 Eq
	if(var_26_bool == 0) goto Label_1161; // 0x486 JumpB
	var_21_int = 2; // 0x487 MovI
	return 0; // 0x488 Return
	
Label_1161:
	var_27_string = "anna"; // 0x489 PushS
	var_28_bool = var_22_string == var_27_string; // 0x48a Eq
	if(var_28_bool == 0) goto Label_1166; // 0x48b JumpB
	var_21_int = 3; // 0x48c MovI
	return 0; // 0x48d Return
	
Label_1166:
	var_29_string = "bigvlad"; // 0x48e PushS
	var_30_bool = var_22_string == var_29_string; // 0x48f Eq
	if(var_30_bool == 0) goto Label_1171; // 0x490 JumpB
	var_21_int = 4; // 0x491 MovI
	return 0; // 0x492 Return
	
Label_1171:
	var_31_string = "eva"; // 0x493 PushS
	var_32_bool = var_22_string == var_31_string; // 0x494 Eq
	if(var_32_bool == 0) goto Label_1176; // 0x495 JumpB
	var_21_int = 5; // 0x496 MovI
	return 0; // 0x497 Return
	
Label_1176:
	var_33_string = "georg"; // 0x498 PushS
	var_34_bool = var_22_string == var_33_string; // 0x499 Eq
	if(var_34_bool == 0) goto Label_1181; // 0x49a JumpB
	var_21_int = 6; // 0x49b MovI
	return 0; // 0x49c Return
	
Label_1181:
	var_35_string = "grif"; // 0x49d PushS
	var_36_bool = var_22_string == var_35_string; // 0x49e Eq
	if(var_36_bool == 0) goto Label_1186; // 0x49f JumpB
	var_21_int = 7; // 0x4a0 MovI
	return 0; // 0x4a1 Return
	
Label_1186:
	var_37_string = "han"; // 0x4a2 PushS
	var_38_bool = var_22_string == var_37_string; // 0x4a3 Eq
	if(var_38_bool == 0) goto Label_1191; // 0x4a4 JumpB
	var_21_int = 8; // 0x4a5 MovI
	return 0; // 0x4a6 Return
	
Label_1191:
	var_39_string = "julia"; // 0x4a7 PushS
	var_40_bool = var_22_string == var_39_string; // 0x4a8 Eq
	if(var_40_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_21_int = 9; // 0x4aa MovI
	return 0; // 0x4ab Return
	
Label_1196:
	var_41_string = "kapella"; // 0x4ac PushS
	var_42_bool = var_22_string == var_41_string; // 0x4ad Eq
	if(var_42_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_21_int = 10; // 0x4af MovI
	return 0; // 0x4b0 Return
	
Label_1201:
	var_43_string = "katerina"; // 0x4b1 PushS
	var_44_bool = var_22_string == var_43_string; // 0x4b2 Eq
	if(var_44_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_21_int = 11; // 0x4b4 MovI
	return 0; // 0x4b5 Return
	
Label_1206:
	var_45_string = "klara"; // 0x4b6 PushS
	var_46_bool = var_22_string == var_45_string; // 0x4b7 Eq
	if(var_46_bool == 0) goto Label_1211; // 0x4b8 JumpB
	var_21_int = 12; // 0x4b9 MovI
	return 0; // 0x4ba Return
	
Label_1211:
	var_47_string = "lara"; // 0x4bb PushS
	var_48_bool = var_22_string == var_47_string; // 0x4bc Eq
	if(var_48_bool == 0) goto Label_1216; // 0x4bd JumpB
	var_21_int = 13; // 0x4be MovI
	return 0; // 0x4bf Return
	
Label_1216:
	var_49_string = "laska"; // 0x4c0 PushS
	var_50_bool = var_22_string == var_49_string; // 0x4c1 Eq
	if(var_50_bool == 0) goto Label_1221; // 0x4c2 JumpB
	var_21_int = 14; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1221:
	var_51_string = "maria"; // 0x4c5 PushS
	var_52_bool = var_22_string == var_51_string; // 0x4c6 Eq
	if(var_52_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_21_int = 15; // 0x4c8 MovI
	return 0; // 0x4c9 Return
	
Label_1226:
	var_53_string = "mark"; // 0x4ca PushS
	var_54_bool = var_22_string == var_53_string; // 0x4cb Eq
	if(var_54_bool == 0) goto Label_1231; // 0x4cc JumpB
	var_21_int = 16; // 0x4cd MovI
	return 0; // 0x4ce Return
	
Label_1231:
	var_55_string = "mat"; // 0x4cf PushS
	var_56_bool = var_22_string == var_55_string; // 0x4d0 Eq
	if(var_56_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_21_int = 17; // 0x4d2 MovI
	return 0; // 0x4d3 Return
	
Label_1236:
	var_57_string = "mishka"; // 0x4d4 PushS
	var_58_bool = var_22_string == var_57_string; // 0x4d5 Eq
	if(var_58_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_21_int = 18; // 0x4d7 MovI
	return 0; // 0x4d8 Return
	
Label_1241:
	var_59_string = "mladvlad"; // 0x4d9 PushS
	var_60_bool = var_22_string == var_59_string; // 0x4da Eq
	if(var_60_bool == 0) goto Label_1246; // 0x4db JumpB
	var_21_int = 19; // 0x4dc MovI
	return 0; // 0x4dd Return
	
Label_1246:
	var_61_string = "notkin"; // 0x4de PushS
	var_62_bool = var_22_string == var_61_string; // 0x4df Eq
	if(var_62_bool == 0) goto Label_1251; // 0x4e0 JumpB
	var_21_int = 20; // 0x4e1 MovI
	return 0; // 0x4e2 Return
	
Label_1251:
	var_63_string = "ospina"; // 0x4e3 PushS
	var_64_bool = var_22_string == var_63_string; // 0x4e4 Eq
	if(var_64_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_21_int = 21; // 0x4e6 MovI
	return 0; // 0x4e7 Return
	
Label_1256:
	var_65_string = "petr"; // 0x4e8 PushS
	var_66_bool = var_22_string == var_65_string; // 0x4e9 Eq
	if(var_66_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_21_int = 22; // 0x4eb MovI
	return 0; // 0x4ec Return
	
Label_1261:
	var_67_string = "rubin"; // 0x4ed PushS
	var_68_bool = var_22_string == var_67_string; // 0x4ee Eq
	if(var_68_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_21_int = 23; // 0x4f0 MovI
	return 0; // 0x4f1 Return
	
Label_1266:
	var_69_string = "spi4ka"; // 0x4f2 PushS
	var_70_bool = var_22_string == var_69_string; // 0x4f3 Eq
	if(var_70_bool == 0) goto Label_1271; // 0x4f4 JumpB
	var_21_int = 24; // 0x4f5 MovI
	return 0; // 0x4f6 Return
	
Label_1271:
	var_71_string = "starshina"; // 0x4f7 PushS
	var_72_bool = var_22_string == var_71_string; // 0x4f8 Eq
	if(var_72_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_21_int = 25; // 0x4fa MovI
	return 0; // 0x4fb Return
	
Label_1276:
	var_73_string = "viktor"; // 0x4fc PushS
	var_74_bool = var_22_string == var_73_string; // 0x4fd Eq
	if(var_74_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_21_int = 26; // 0x4ff MovI
	return 0; // 0x500 Return
	
Label_1281:
	var_75_string = "wasted_woman"; // 0x501 PushS
	var_76_bool = var_22_string == var_75_string; // 0x502 Eq
	if(var_76_bool == 0) goto Label_1286; // 0x503 JumpB
	var_21_int = 27; // 0x504 MovI
	return 0; // 0x505 Return
	
Label_1286:
	var_77_string = "wasted_male"; // 0x506 PushS
	var_78_bool = var_22_string == var_77_string; // 0x507 Eq
	if(var_78_bool == 0) goto Label_1291; // 0x508 JumpB
	var_21_int = 28; // 0x509 MovI
	return 0; // 0x50a Return
	
Label_1291:
	var_79_string = "alkash"; // 0x50b PushS
	var_80_bool = var_22_string == var_79_string; // 0x50c Eq
	if(var_80_bool == 0) goto Label_1296; // 0x50d JumpB
	var_21_int = 29; // 0x50e MovI
	return 0; // 0x50f Return
	
Label_1296:
	var_81_string = "boy"; // 0x510 PushS
	var_82_bool = var_22_string == var_81_string; // 0x511 Eq
	if(var_82_bool == 0) goto Label_1301; // 0x512 JumpB
	var_21_int = 30; // 0x513 MovI
	return 0; // 0x514 Return
	
Label_1301:
	var_83_string = "girl"; // 0x515 PushS
	var_84_bool = var_22_string == var_83_string; // 0x516 Eq
	if(var_84_bool == 0) goto Label_1306; // 0x517 JumpB
	var_21_int = 31; // 0x518 MovI
	return 0; // 0x519 Return
	
Label_1306:
	var_85_string = "littleboy"; // 0x51a PushS
	var_86_bool = var_22_string == var_85_string; // 0x51b Eq
	if(var_86_bool == 0) goto Label_1311; // 0x51c JumpB
	var_21_int = 32; // 0x51d MovI
	return 0; // 0x51e Return
	
Label_1311:
	var_87_string = "littlegirl"; // 0x51f PushS
	var_88_bool = var_22_string == var_87_string; // 0x520 Eq
	if(var_88_bool == 0) goto Label_1316; // 0x521 JumpB
	var_21_int = 33; // 0x522 MovI
	return 0; // 0x523 Return
	
Label_1316:
	var_89_string = "butcher"; // 0x524 PushS
	var_90_bool = var_22_string == var_89_string; // 0x525 Eq
	if(var_90_bool == 0) goto Label_1321; // 0x526 JumpB
	var_21_int = 34; // 0x527 MovI
	return 0; // 0x528 Return
	
Label_1321:
	var_91_string = "dohodyaga"; // 0x529 PushS
	var_92_bool = var_22_string == var_91_string; // 0x52a Eq
	if(var_92_bool == 0) goto Label_1326; // 0x52b JumpB
	var_21_int = 35; // 0x52c MovI
	return 0; // 0x52d Return
	
Label_1326:
	var_93_string = "unosha"; // 0x52e PushS
	var_94_bool = var_22_string == var_93_string; // 0x52f Eq
	if(var_94_bool == 0) goto Label_1331; // 0x530 JumpB
	var_21_int = 36; // 0x531 MovI
	return 0; // 0x532 Return
	
Label_1331:
	var_95_string = "vaxxabit"; // 0x533 PushS
	var_96_bool = var_22_string == var_95_string; // 0x534 Eq
	if(var_96_bool == 0) goto Label_1336; // 0x535 JumpB
	var_21_int = 37; // 0x536 MovI
	return 0; // 0x537 Return
	
Label_1336:
	var_97_string = "vaxxabitka"; // 0x538 PushS
	var_98_bool = var_22_string == var_97_string; // 0x539 Eq
	if(var_98_bool == 0) goto Label_1341; // 0x53a JumpB
	var_21_int = 38; // 0x53b MovI
	return 0; // 0x53c Return
	
Label_1341:
	var_99_string = "woman"; // 0x53d PushS
	var_100_bool = var_22_string == var_99_string; // 0x53e Eq
	if(var_100_bool == 0) goto Label_1346; // 0x53f JumpB
	var_21_int = 39; // 0x540 MovI
	return 0; // 0x541 Return
	
Label_1346:
	var_101_string = "worker"; // 0x542 PushS
	var_102_bool = var_22_string == var_101_string; // 0x543 Eq
	if(var_102_bool == 0) goto Label_1351; // 0x544 JumpB
	var_21_int = 40; // 0x545 MovI
	return 0; // 0x546 Return
	
Label_1351:
	var_103_string = "whitemask"; // 0x547 PushS
	var_104_bool = var_22_string == var_103_string; // 0x548 Eq
	if(var_104_bool == 0) goto Label_1356; // 0x549 JumpB
	var_21_int = 42; // 0x54a MovI
	return 0; // 0x54b Return
	
Label_1356:
	var_105_string = "birdmask"; // 0x54c PushS
	var_106_bool = var_22_string == var_105_string; // 0x54d Eq
	if(var_106_bool == 0) goto Label_1361; // 0x54e JumpB
	var_21_int = 43; // 0x54f MovI
	return 0; // 0x550 Return
	
Label_1361:
	var_107_string = "birdmask"; // 0x551 PushS
	var_108_bool = var_22_string == var_107_string; // 0x552 Eq
	if(var_108_bool == 0) goto Label_1366; // 0x553 JumpB
	var_21_int = 44; // 0x554 MovI
	return 0; // 0x555 Return
	
Label_1366:
	var_109_string = "patrol"; // 0x556 PushS
	var_110_bool = var_22_string == var_109_string; // 0x557 Eq
	if(var_110_bool == 0) goto Label_1371; // 0x558 JumpB
	var_21_int = 46; // 0x559 MovI
	return 0; // 0x55a Return
	
Label_1371:
	var_111_string = "danko"; // 0x55b PushS
	var_112_bool = var_22_string == var_111_string; // 0x55c Eq
	if(var_112_bool == 0) goto Label_1376; // 0x55d JumpB
	var_21_int = 47; // 0x55e MovI
	return 0; // 0x55f Return
	
Label_1376:
	var_113_string = "alkash_d"; // 0x560 PushS
	var_114_bool = var_22_string == var_113_string; // 0x561 Eq
	if(var_114_bool == 0) goto Label_1381; // 0x562 JumpB
	var_21_int = 48; // 0x563 MovI
	return 0; // 0x564 Return
	
Label_1381:
	var_115_string = "boy_d"; // 0x565 PushS
	var_116_bool = var_22_string == var_115_string; // 0x566 Eq
	if(var_116_bool == 0) goto Label_1386; // 0x567 JumpB
	var_21_int = 49; // 0x568 MovI
	return 0; // 0x569 Return
	
Label_1386:
	var_117_string = "butcher_d"; // 0x56a PushS
	var_118_bool = var_22_string == var_117_string; // 0x56b Eq
	if(var_118_bool == 0) goto Label_1391; // 0x56c JumpB
	var_21_int = 50; // 0x56d MovI
	return 0; // 0x56e Return
	
Label_1391:
	var_119_string = "dohodyaga_d"; // 0x56f PushS
	var_120_bool = var_22_string == var_119_string; // 0x570 Eq
	if(var_120_bool == 0) goto Label_1396; // 0x571 JumpB
	var_21_int = 51; // 0x572 MovI
	return 0; // 0x573 Return
	
Label_1396:
	var_121_string = "girl_d"; // 0x574 PushS
	var_122_bool = var_22_string == var_121_string; // 0x575 Eq
	if(var_122_bool == 0) goto Label_1401; // 0x576 JumpB
	var_21_int = 52; // 0x577 MovI
	return 0; // 0x578 Return
	
Label_1401:
	var_123_string = "littleboy_d"; // 0x579 PushS
	var_124_bool = var_22_string == var_123_string; // 0x57a Eq
	if(var_124_bool == 0) goto Label_1406; // 0x57b JumpB
	var_21_int = 53; // 0x57c MovI
	return 0; // 0x57d Return
	
Label_1406:
	var_125_string = "littlegirl_d"; // 0x57e PushS
	var_126_bool = var_22_string == var_125_string; // 0x57f Eq
	if(var_126_bool == 0) goto Label_1411; // 0x580 JumpB
	var_21_int = 54; // 0x581 MovI
	return 0; // 0x582 Return
	
Label_1411:
	var_127_string = "unosha2"; // 0x583 PushS
	var_128_bool = var_22_string == var_127_string; // 0x584 Eq
	if(var_128_bool == 0) goto Label_1416; // 0x585 JumpB
	var_21_int = 55; // 0x586 MovI
	return 0; // 0x587 Return
	
Label_1416:
	var_129_string = "unosha_d"; // 0x588 PushS
	var_130_bool = var_22_string == var_129_string; // 0x589 Eq
	if(var_130_bool == 0) goto Label_1421; // 0x58a JumpB
	var_21_int = 56; // 0x58b MovI
	return 0; // 0x58c Return
	
Label_1421:
	var_131_string = "unosha2_d"; // 0x58d PushS
	var_132_bool = var_22_string == var_131_string; // 0x58e Eq
	if(var_132_bool == 0) goto Label_1426; // 0x58f JumpB
	var_21_int = 57; // 0x590 MovI
	return 0; // 0x591 Return
	
Label_1426:
	var_133_string = "vaxxabit_d"; // 0x592 PushS
	var_134_bool = var_22_string == var_133_string; // 0x593 Eq
	if(var_134_bool == 0) goto Label_1431; // 0x594 JumpB
	var_21_int = 58; // 0x595 MovI
	return 0; // 0x596 Return
	
Label_1431:
	var_135_string = "vaxxabitka_d"; // 0x597 PushS
	var_136_bool = var_22_string == var_135_string; // 0x598 Eq
	if(var_136_bool == 0) goto Label_1436; // 0x599 JumpB
	var_21_int = 59; // 0x59a MovI
	return 0; // 0x59b Return
	
Label_1436:
	var_137_string = "wasted_male_d"; // 0x59c PushS
	var_138_bool = var_22_string == var_137_string; // 0x59d Eq
	if(var_138_bool == 0) goto Label_1441; // 0x59e JumpB
	var_21_int = 60; // 0x59f MovI
	return 0; // 0x5a0 Return
	
Label_1441:
	var_139_string = "wasted_woman_d"; // 0x5a1 PushS
	var_140_bool = var_22_string == var_139_string; // 0x5a2 Eq
	if(var_140_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_21_int = 61; // 0x5a4 MovI
	return 0; // 0x5a5 Return
	
Label_1446:
	var_141_string = "woman_d"; // 0x5a6 PushS
	var_142_bool = var_22_string == var_141_string; // 0x5a7 Eq
	if(var_142_bool == 0) goto Label_1451; // 0x5a8 JumpB
	var_21_int = 62; // 0x5a9 MovI
	return 0; // 0x5aa Return
	
Label_1451:
	var_143_string = "worker2"; // 0x5ab PushS
	var_144_bool = var_22_string == var_143_string; // 0x5ac Eq
	if(var_144_bool == 0) goto Label_1456; // 0x5ad JumpB
	var_21_int = 63; // 0x5ae MovI
	return 0; // 0x5af Return
	
Label_1456:
	var_145_string = "worker_d"; // 0x5b0 PushS
	var_146_bool = var_22_string == var_145_string; // 0x5b1 Eq
	if(var_146_bool == 0) goto Label_1461; // 0x5b2 JumpB
	var_21_int = 64; // 0x5b3 MovI
	return 0; // 0x5b4 Return
	
Label_1461:
	var_147_string = "worker2_d"; // 0x5b5 PushS
	var_148_bool = var_22_string == var_147_string; // 0x5b6 Eq
	if(var_148_bool == 0) goto Label_1466; // 0x5b7 JumpB
	var_21_int = 65; // 0x5b8 MovI
	return 0; // 0x5b9 Return
	
Label_1466:
	var_149_string = "burah"; // 0x5ba PushS
	var_150_bool = var_22_string == var_149_string; // 0x5bb Eq
	if(var_150_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_21_int = 66; // 0x5bd MovI
	return 0; // 0x5be Return
	
Label_1471:
	var_151_string = "gorbun_daughter"; // 0x5bf PushS
	var_152_bool = var_22_string == var_151_string; // 0x5c0 Eq
	if(var_152_bool == 0) goto Label_1476; // 0x5c1 JumpB
	var_21_int = 67; // 0x5c2 MovI
	return 0; // 0x5c3 Return
	
Label_1476:
	var_153_string = "gorbun"; // 0x5c4 PushS
	var_154_bool = var_22_string == var_153_string; // 0x5c5 Eq
	if(var_154_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_21_int = 68; // 0x5c7 MovI
	return 0; // 0x5c8 Return
	
Label_1481:
	var_155_string = "albinos"; // 0x5c9 PushS
	var_156_bool = var_22_string == var_155_string; // 0x5ca Eq
	if(var_156_bool == 0) goto Label_1486; // 0x5cb JumpB
	var_21_int = 69; // 0x5cc MovI
	return 0; // 0x5cd Return
	
Label_1486:
	var_157_string = "aglaja"; // 0x5ce PushS
	var_158_bool = var_22_string == var_157_string; // 0x5cf Eq
	if(var_158_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_21_int = 70; // 0x5d1 MovI
	return 0; // 0x5d2 Return
	
Label_1491:
	var_159_string = "nude"; // 0x5d3 PushS
	var_160_bool = var_22_string == var_159_string; // 0x5d4 Eq
	if(var_160_bool == 0) goto Label_1496; // 0x5d5 JumpB
	var_21_int = 71; // 0x5d6 MovI
	return 0; // 0x5d7 Return
	
Label_1496:
	var_161_string = "block"; // 0x5d8 PushS
	var_162_bool = var_22_string == var_161_string; // 0x5d9 Eq
	if(var_162_bool == 0) goto Label_1501; // 0x5da JumpB
	var_21_int = 72; // 0x5db MovI
	return 0; // 0x5dc Return
	
Label_1501:
	var_163_string = "officer"; // 0x5dd PushS
	var_164_bool = var_22_string == var_163_string; // 0x5de Eq
	if(var_164_bool == 0) goto Label_1506; // 0x5df JumpB
	var_21_int = 73; // 0x5e0 MovI
	return 0; // 0x5e1 Return
	
Label_1506:
	var_165_string = "doberman"; // 0x5e2 PushS
	var_166_bool = var_22_string == var_165_string; // 0x5e3 Eq
	if(var_166_bool == 0) goto Label_1511; // 0x5e4 JumpB
	var_21_int = 74; // 0x5e5 MovI
	return 0; // 0x5e6 Return
	
Label_1511:
	var_167_string = "grabitel"; // 0x5e7 PushS
	var_168_bool = var_22_string == var_167_string; // 0x5e8 Eq
	if(var_168_bool == 0) goto Label_1516; // 0x5e9 JumpB
	var_21_int = 75; // 0x5ea MovI
	return 0; // 0x5eb Return
	
Label_1516:
	var_169_string = "gatherer_wife"; // 0x5ec PushS
	var_170_bool = var_22_string == var_169_string; // 0x5ed Eq
	if(var_170_bool == 0) goto Label_1521; // 0x5ee JumpB
	var_21_int = 76; // 0x5ef MovI
	return 0; // 0x5f0 Return
	
Label_1521:
	var_171_string = "rat_prophet"; // 0x5f1 PushS
	var_172_bool = var_22_string == var_171_string; // 0x5f2 Eq
	if(var_172_bool == 0) goto Label_1526; // 0x5f3 JumpB
	var_21_int = 77; // 0x5f4 MovI
	return 0; // 0x5f5 Return
	
Label_1526:
	var_173_string = "morlok"; // 0x5f6 PushS
	var_174_bool = var_22_string == var_173_string; // 0x5f7 Eq
	if(var_174_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_21_int = 78; // 0x5f9 MovI
	return 0; // 0x5fa Return
	
Label_1531:
	var_175_string = "soldier"; // 0x5fb PushS
	var_176_bool = var_22_string == var_175_string; // 0x5fc Eq
	if(var_176_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_21_int = 79; // 0x5fe MovI
	return 0; // 0x5ff Return
	
Label_1536:
	var_177_string = "britva"; // 0x600 PushS
	var_178_bool = var_22_string == var_177_string; // 0x601 Eq
	if(var_178_bool == 0) goto Label_1541; // 0x602 JumpB
	var_21_int = 80; // 0x603 MovI
	return 0; // 0x604 Return
	
Label_1541:
	var_179_string = "kabaktchik"; // 0x605 PushS
	var_180_bool = var_22_string == var_179_string; // 0x606 Eq
	if(var_180_bool == 0) goto Label_1546; // 0x607 JumpB
	var_21_int = 81; // 0x608 MovI
	return 0; // 0x609 Return
	
Label_1546:
	var_181_string = "sanitar"; // 0x60a PushS
	var_182_bool = var_22_string == var_181_string; // 0x60b Eq
	if(var_182_bool == 0) goto Label_1551; // 0x60c JumpB
	var_21_int = 82; // 0x60d MovI
	return 0; // 0x60e Return
	
Label_1551:
	var_183_string = "salesman"; // 0x60f PushS
	var_184_bool = var_22_string == var_183_string; // 0x610 Eq
	if(var_184_bool == 0) goto Label_1556; // 0x611 JumpB
	var_21_int = 83; // 0x612 MovI
	return 0; // 0x613 Return
	
Label_1556:
	var_185_string = "ayyan"; // 0x614 PushS
	var_186_bool = var_22_string == var_185_string; // 0x615 Eq
	if(var_186_bool == 0) goto Label_1561; // 0x616 JumpB
	var_21_int = 84; // 0x617 MovI
	return 0; // 0x618 Return
	
Label_1561:
	var_187_string = "petrbirdmask"; // 0x619 PushS
	var_188_bool = var_22_string == var_187_string; // 0x61a Eq
	if(var_188_bool == 0) goto Label_1566; // 0x61b JumpB
	var_21_int = 85; // 0x61c MovI
	return 0; // 0x61d Return
	
Label_1566:
	var_189_string = "mogila"; // 0x61e PushS
	var_190_bool = var_22_string == var_189_string; // 0x61f Eq
	if(var_190_bool == 0) goto Label_1571; // 0x620 JumpB
	var_21_int = 86; // 0x621 MovI
	return 0; // 0x622 Return
	
Label_1571:
	var_191_string = "klikusha"; // 0x623 PushS
	var_192_bool = var_22_string == var_191_string; // 0x624 Eq
	if(var_192_bool == 0) goto Label_1576; // 0x625 JumpB
	var_21_int = 87; // 0x626 MovI
	return 0; // 0x627 Return
	
Label_1576:
	var_193_string = "karlik"; // 0x628 PushS
	var_194_bool = var_22_string == var_193_string; // 0x629 Eq
	if(var_194_bool == 0) goto Label_1581; // 0x62a JumpB
	var_21_int = 88; // 0x62b MovI
	return 0; // 0x62c Return
	
Label_1581:
	var_195_string = "lisa"; // 0x62d PushS
	var_196_bool = var_22_string == var_195_string; // 0x62e Eq
	if(var_196_bool == 0) goto Label_1586; // 0x62f JumpB
	var_21_int = 89; // 0x630 MovI
	return 0; // 0x631 Return
	
Label_1586:
	var_21_int = -1; // 0x632 MovI
	return 0; // 0x633 Return
}


func_17()
{
	return 0; // 0x11 Return
}


func_18()
{
	func_2648(); // 0x13 NEW_2
	return 0; // 0x15 Return
}


func_22()
{
	func_2635(); // 0x17 NEW_2
	return 0; // 0x19 Return
}


func_2710(var_240_string, var_241_int)
{
	var_242_object = Obj(); var_243_object = Obj(); // 0xa96 PushV
	FindActor(var_243_object, var_240_string); // 0xa97 Func
	var_244_bool = var_243_object == 0; // 0xa99 Not
	if(var_244_bool == 0) goto Label_2722; // 0xa9a JumpB
	var_245_string = "Door "; // 0xa9b PushS
	var_246_int = var_245_string + var_240_string; // 0xa9c Add
	var_247_string = " not found"; // 0xa9d PushS
	var_248_int = var_246_int + var_247_string; // 0xa9e Add
	Trace(var_248_int); // 0xa9f Func
	goto Label_2725; // 0xaa1 Jump
	
Label_2725:
	return 2; // 0xaa5 Return
	
Label_2722:
	var_249_string = "dlocked"; // 0xaa2 PushS
	SetProperty(var_249_string, var_241_int); // 0xaa3 ObjFunc
}


func_792(var_884_bool, var_885_int)
{
	var_886_int = 0; var_887_int = 0; // 0x318 PushV
	var_888_string = ""; var_889_int = 0; // 0x319 PushV
	var_889_int = var_885_int; // 0x31a Mov
	func_750(var_888_string, var_889_int); // 0x31b NEW_2
	GetVariable(var_888_string, var_887_int); // 0x31d Func
	var_890_int = 4; // 0x31f PushI
	var_891_int = var_887_int & var_890_int; // 0x320 And
	var_892_int = 0; // 0x321 PushI
	var_884_bool = var_891_int != var_892_int; // 0x322 Neq2
	return 2; // 0x323 Return
}


func_2841(var_263_bool)
{
	var_264_int = 0; var_265_int = 0; // 0xb19 PushV
	var_265_int = 0; // 0xb1a MovI
	var_266_bool = 0; // 0xb1b PushV
	func_2803(var_266_bool); // 0xb1c NEW_2
	if(var_266_bool == 0) goto Label_2849; // 0xb1e JumpB
	var_310_int = 1; // 0xb1f PushI
	var_265_int = var_265_int + var_310_int; // 0xb20 Add2
	
Label_2849:
	var_311_bool = 0; // 0xb21 PushV
	func_2765(var_311_bool); // 0xb22 NEW_2
	if(var_311_bool == 0) goto Label_2855; // 0xb24 JumpB
	var_342_int = 1; // 0xb25 PushI
	var_265_int = var_265_int + var_342_int; // 0xb26 Add2
	
Label_2855:
	var_343_bool = 0; // 0xb27 PushV
	func_2727(var_343_bool); // 0xb28 NEW_2
	if(var_343_bool == 0) goto Label_2861; // 0xb2a JumpB
	var_374_int = 1; // 0xb2b PushI
	var_265_int = var_265_int + var_374_int; // 0xb2c Add2
	
Label_2861:
	var_375_int = 2; // 0xb2d PushI
	var_263_bool = var_265_int >= var_375_int; // 0xb2e GE2
	return 2; // 0xb2f Return
}


func_26(var_492_bool, var_493_int)
{
	var_498_bool = 0; var_499_int = 0; // 0x1b PushV
	var_499_int = var_493_int; // 0x1c Mov
	func_2092(var_498_bool, var_499_int); // 0x1d NEW_2
	var_492_bool = var_498_bool; // 0x1e Mov
	return 0; // 0x20 Return
}


func_1056(var_547_object, var_548_int)
{
	var_549_string = ""; var_550_object = Obj(); var_551_object = Obj(); var_552_string = ""; var_553_object = Obj(); var_554_object = Obj(); // 0x420 PushV
	get(var_552_string, var_548_int); // 0x421 TObjFunc
	var_555_string = "outdoor"; // 0x423 PushS
	var_556_bool = var_552_string == var_555_string; // 0x424 Eq
	if(var_556_bool == 0) goto Label_1067; // 0x425 JumpB
	GetMainOutdoorScene(var_553_object); // 0x426 Func
	var_547_object = var_553_object; // 0x428 Mov
	return 6; // 0x429 Return
	
Label_1067:
	GetSceneByName(var_554_object, var_552_string); // 0x42b Func
	var_547_object = var_554_object; // 0x42d Mov
	return 6; // 0x42e Return
}


func_33()
{
	var_160_object = Obj(); var_161_object = Obj(); var_162_int = 0; var_163_object = Obj(); var_164_object = Obj(); var_165_int = 0; // 0x21 PushV
	CreateIntVector(var_163_object); // 0x22 Func
	var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; // 0x24 PushV
	var_166_object = var_163_object; // 0x25 Mov
	var_167_bool = 1; // 0x26 MovB
	var_168_int = 2; // 0x27 MovI
	func_2140(var_168_int); // 0x28 NEW_2
	CreateIntVector(var_164_object); // 0x2a Func
	var_180_object = Obj(); var_181_bool = 0; var_182_int = 0; // 0x2c PushV
	var_180_object = var_164_object; // 0x2d Mov
	var_181_bool = 1; // 0x2e MovB
	var_182_int = 2; // 0x2f MovI
	func_2026(var_181_bool, var_182_int); // 0x30 NEW_2
	var_195_object = Obj(); var_196_bool = 0; var_197_int = 0; // 0x32 PushV
	var_195_object = var_164_object; // 0x33 Mov
	var_196_bool = 1; // 0x34 MovB
	var_197_int = 2; // 0x35 MovI
	func_2059(var_196_bool, var_197_int); // 0x36 NEW_2
	var_165_int = 0; // 0x38 MovI
	
Label_57:
	var_210_int = 12; // 0x39 PushI
	var_211_bool = var_165_int < var_210_int; // 0x3a LT
	if(var_211_bool == 0) goto Label_67; // 0x3b JumpB
	add(var_163_object); // 0x3c ObjFunc
	add(var_164_object); // 0x3e ObjFunc
	var_212_int = 1; // 0x40 PushI
	var_165_int = var_165_int + var_212_int; // 0x41 Add2
	goto Label_57; // 0x42 Jump
	
Label_67:
	return 6; // 0x43 Return
}


func_804(var_763_int)
{
	var_768_int = 0; var_769_object = Obj(); var_770_object = Obj(); var_771_string = ""; var_772_object = Obj(); var_773_int = 0; var_774_int = 0; var_775_string = ""; var_776_int = 0; var_777_object = Obj(); var_778_object = Obj(); var_779_string = ""; var_780_object = Obj(); var_781_int = 0; var_782_int = 0; var_783_string = ""; // 0x324 PushV
	var_784_string = ""; var_785_int = 0; // 0x325 PushV
	var_785_int = var_763_int; // 0x326 Mov
	func_750(var_784_string, var_785_int); // 0x327 NEW_2
	GetVariable(var_784_string, var_776_int); // 0x329 Func
	var_786_string = ""; var_787_int = 0; // 0x32b PushV
	var_787_int = var_763_int; // 0x32c Mov
	func_750(var_786_string, var_787_int); // 0x32d NEW_2
	var_788_int = 8; // 0x32f PushI
	var_789_int = var_776_int & var_788_int; // 0x330 And
	var_790_int = 5; // 0x331 PushI
	var_791_int = var_789_int | var_790_int; // 0x332 Or
	SetVariable(var_786_string, var_791_int); // 0x333 Func
	get(var_777_object, var_763_int); // 0x335 TObjFunc
	var_792_bool = var_777_object == 0; // 0x337 NullEq
	if(var_792_bool == 0) goto Label_854; // 0x338 JumpB
	var_793_object = Obj(); var_794_int = 0; // 0x339 PushV
	var_794_int = var_763_int; // 0x33a Mov
	func_1056(var_793_object, var_794_int); // 0x33b NEW_2
	var_778_object = var_793_object; // 0x33c Mov
	var_795_string = ""; var_796_int = 0; // 0x33e PushV
	var_797_int = 0; var_798_int = 0; // 0x33f PushV
	var_798_int = var_763_int; // 0x340 Mov
	func_745(var_797_int, var_798_int); // 0x341 NEW_2
	var_796_int = var_797_int; // 0x342 Mov
	func_1588(var_795_string, var_796_int); // 0x344 NEW_2
	var_779_string = var_795_string; // 0x345 Mov
	var_799_object = Obj(); var_800_object = Obj(); var_801_string = ""; var_802_string = ""; var_803_string = ""; // 0x347 PushV
	var_800_object = var_778_object; // 0x348 Mov
	var_804_string = "pt_volonteer_"; // 0x349 PushS
	var_801_string = var_804_string + var_779_string; // 0x34a Add2
	var_802_string = "pers_birdmask"; // 0x34b MovS
	var_805_string = "vbirdmask_"; // 0x34c PushS
	var_806_int = var_805_string + var_779_string; // 0x34d Add
	var_807_string = ".xml"; // 0x34e PushS
	var_803_string = var_806_int + var_807_string; // 0x34f Add2
	func_1090(var_800_object, var_801_string, var_802_string, var_803_string); // 0x350 NEW_2
	var_777_object = var_799_object; // 0x351 Mov
	set(var_763_int, var_777_object); // 0x353 TObjFunc
	var_778_object = 0; // 0x355 SetNull
	
Label_854:
	get(var_780_object, var_763_int); // 0x356 TObjFunc
	size(var_781_int); // 0x358 ObjFunc
	var_782_int = 0; // 0x35a MovI
	
Label_859:
	var_808_bool = var_782_int < var_781_int; // 0x35b LT
	if(var_808_bool == 0) goto Label_871; // 0x35c JumpB
	get(var_783_string, var_782_int); // 0x35d ObjFunc
	var_809_string = ""; var_810_int = 0; // 0x35f PushV
	var_809_string = var_783_string; // 0x360 Mov
	var_810_int = 1; // 0x361 MovI
	func_2710(var_809_string, var_810_int); // 0x362 NEW_2
	var_811_int = 1; // 0x364 PushI
	var_782_int = var_782_int + var_811_int; // 0x365 Add2
	goto Label_859; // 0x366 Jump
	
Label_871:
	return 16; // 0x367 Return
}


func_2597(var_300_bool, var_301_int)
{
	var_302_int = 0; var_303_int = 0; // 0xa25 PushV
	var_304_string = "vol_"; // 0xa26 PushS
	var_305_int = var_304_string + var_301_int; // 0xa27 Add
	GetVariable(var_305_int, var_303_int); // 0xa28 Func
	var_306_int = 4; // 0xa2a PushI
	var_307_int = var_303_int & var_306_int; // 0xa2b And
	var_308_int = 0; // 0xa2c PushI
	var_300_bool = var_307_int != var_308_int; // 0xa2d Neq2
	return 2; // 0xa2e Return
}


func_2727(var_343_bool)
{
	var_344_object = Obj(); var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_object = Obj(); var_349_int = 0; var_350_int = 0; var_351_int = 0; // 0xaa7 PushV
	CreateIntVector(var_348_object); // 0xaa8 Func
	var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; // 0xaaa PushV
	var_352_object = var_348_object; // 0xaab Mov
	var_353_bool = 0; // 0xaac MovB
	var_354_int = -1; // 0xaad MovI
	func_2026(var_353_bool, var_354_int); // 0xaae NEW_2
	size(var_349_int); // 0xab0 ObjFunc
	var_350_int = 0; // 0xab2 MovI
	
Label_2739:
	var_367_bool = var_350_int < var_349_int; // 0xab3 LT
	if(var_367_bool == 0) goto Label_2762; // 0xab4 JumpB
	get(var_351_int, var_350_int); // 0xab5 ObjFunc
	var_368_bool = 0; // 0xab7 PushV
	var_368_bool = 1; // 0xab8 MovB
	var_369_bool = 0; var_370_int = 0; // 0xab9 PushV
	var_370_int = var_351_int; // 0xaba Mov
	func_2607(var_369_bool, var_370_int); // 0xabb NEW_2
	if(var_369_bool == 0) goto Label_2756; // 0xabd JumpB
	var_371_bool = 0; var_372_int = 0; // 0xabe PushV
	var_372_int = var_351_int; // 0xabf Mov
	func_2597(var_371_bool, var_372_int); // 0xac0 NEW_2
	if(var_371_bool == 0) goto Label_2756; // 0xac2 JumpB
	var_368_bool = 0; // 0xac3 MovB
	
Label_2756:
	if(var_368_bool == 0) goto Label_2759; // 0xac4 JumpB
	var_343_bool = 0; // 0xac5 MovB
	return 8; // 0xac6 Return
	
Label_2759:
	var_373_int = 1; // 0xac7 PushI
	var_350_int = var_350_int + var_373_int; // 0xac8 Add2
	goto Label_2739; // 0xac9 Jump
	
Label_2762:
	var_343_bool = 1; // 0xaca MovB
	return 8; // 0xacb Return
}


func_426(var_6_int)
{
	var_814_int = 0; var_815_int = 0; var_816_object = Obj(); var_817_int = 0; var_818_int = 0; var_819_string = ""; var_820_int = 0; var_821_int = 0; var_822_int = 0; var_823_int = 0; var_824_int = 0; var_825_int = 0; var_826_int = 0; var_827_int = 0; var_828_object = Obj(); var_829_int = 0; var_830_int = 0; var_831_string = ""; var_832_int = 0; var_833_int = 0; var_834_int = 0; var_835_int = 0; var_836_int = 0; var_837_int = 0; // 0x1aa PushV
	var_838_int = 1; // 0x1ab PushI
	Trace(var_838_int); // 0x1ac Func
	var_826_int = 0; // 0x1ae MovI
	
Label_431:
	var_839_int = 0; // 0x1af PushV
	func_722(var_839_int); // 0x1b0 NEW_2
	var_840_bool = var_826_int < var_839_int; // 0x1b2 LT
	if(var_840_bool == 0) goto Label_521; // 0x1b3 JumpB
	var_841_int = 2; // 0x1b4 PushI
	Trace(var_841_int); // 0x1b5 Func
	var_842_int = 0; var_843_int = 0; // 0x1b7 PushV
	var_843_int = var_826_int; // 0x1b8 Mov
	func_745(var_842_int, var_843_int); // 0x1b9 NEW_2
	var_827_int = var_842_int; // 0x1ba Mov
	var_844_int = 3; // 0x1bc PushI
	Trace(var_844_int); // 0x1bd Func
	var_845_bool = 0; var_846_int = 0; // 0x1bf PushV
	var_846_int = var_826_int; // 0x1c0 Mov
	func_768(var_845_bool, var_846_int); // 0x1c1 NEW_2
	if(var_845_bool == 0) goto Label_459; // 0x1c3 JumpB
	var_847_int = 4; // 0x1c4 PushI
	Trace(var_847_int); // 0x1c5 Func
	var_848_int = 0; // 0x1c7 PushV
	var_848_int = var_826_int; // 0x1c8 Mov
	func_804(var_848_int); // 0x1c9 NEW_2
	
Label_459:
	var_849_int = 5; // 0x1cb PushI
	Trace(var_849_int); // 0x1cc Func
	var_850_bool = 0; var_851_int = 0; // 0x1ce PushV
	var_851_int = var_826_int; // 0x1cf Mov
	func_756(var_850_bool, var_851_int); // 0x1d0 NEW_2
	if(var_850_bool == 0) goto Label_474; // 0x1d2 JumpB
	var_859_int = 6; // 0x1d3 PushI
	Trace(var_859_int); // 0x1d4 Func
	var_860_int = 0; // 0x1d6 PushV
	var_860_int = var_826_int; // 0x1d7 Mov
	func_908(var_860_int); // 0x1d8 NEW_2
	
Label_474:
	var_883_int = 7; // 0x1da PushI
	Trace(var_883_int); // 0x1db Func
	var_884_bool = 0; var_885_int = 0; // 0x1dd PushV
	var_885_int = var_826_int; // 0x1de Mov
	func_792(var_884_bool, var_885_int); // 0x1df NEW_2
	if(var_884_bool == 0) goto Label_515; // 0x1e1 JumpB
	var_893_int = 8; // 0x1e2 PushI
	Trace(var_893_int); // 0x1e3 Func
	get(var_828_object, var_826_int); // 0x1e5 TObjFunc
	var_894_int = 9; // 0x1e7 PushI
	Trace(var_894_int); // 0x1e8 Func
	size(var_829_int); // 0x1ea ObjFunc
	var_895_int = 10; // 0x1ec PushI
	Trace(var_895_int); // 0x1ed Func
	var_830_int = 0; // 0x1ef MovI
	
Label_496:
	var_896_bool = var_830_int < var_829_int; // 0x1f0 LT
	if(var_896_bool == 0) goto Label_511; // 0x1f1 JumpB
	var_897_int = 11; // 0x1f2 PushI
	Trace(var_897_int); // 0x1f3 Func
	get(var_831_string, var_830_int); // 0x1f5 ObjFunc
	var_898_string = ""; var_899_int = 0; // 0x1f7 PushV
	var_898_string = var_831_string; // 0x1f8 Mov
	var_899_int = 1; // 0x1f9 MovI
	func_2710(var_898_string, var_899_int); // 0x1fa NEW_2
	var_900_int = 1; // 0x1fc PushI
	var_830_int = var_830_int + var_900_int; // 0x1fd Add2
	goto Label_496; // 0x1fe Jump
	
Label_511:
	var_901_int = 12; // 0x1ff PushI
	Trace(var_901_int); // 0x200 Func
	var_828_object = 0; // 0x202 SetNull
	
Label_515:
	var_902_int = 13; // 0x203 PushI
	Trace(var_902_int); // 0x204 Func
	var_903_int = 1; // 0x206 PushI
	var_826_int = var_826_int + var_903_int; // 0x207 Add2
	goto Label_431; // 0x208 Jump
	
Label_521:
	var_904_int = 14; // 0x209 PushI
	Trace(var_904_int); // 0x20a Func
	var_905_int = 1; // 0x20c PushI
	var_6_int = var_6_int + var_905_int; // 0x20d Add2
	var_906_int = 0; var_907_int = 0; var_908_int = 0; // 0x20e PushV
	var_909_int = 0; var_910_int = 0; // 0x20f PushV
	var_910_int = var_6_int; // 0x210 MovT
	func_70(var_909_int, var_910_int); // 0x211 NEW_2
	var_906_int = var_909_int; // 0x212 Mov
	var_913_int = 0; var_914_int = 0; // 0x214 PushV
	var_914_int = var_6_int; // 0x215 MovT
	func_78(var_913_int, var_914_int); // 0x216 NEW_2
	var_907_int = var_913_int; // 0x217 Mov
	var_908_int = var_6_int; // 0x219 MovT
	func_352(var_906_int, var_907_int, var_908_int); // 0x21a NEW_2
	var_975_int = 15; // 0x21c PushI
	Trace(var_975_int); // 0x21d Func
	var_832_int = 0; // 0x21f MovI
	var_833_int = 0; // 0x220 MovI
	
Label_545:
	var_976_int = 0; // 0x221 PushV
	func_722(var_976_int); // 0x222 NEW_2
	var_977_bool = var_833_int < var_976_int; // 0x224 LT
	if(var_977_bool == 0) goto Label_582; // 0x225 JumpB
	var_978_int = 16; // 0x226 PushI
	Trace(var_978_int); // 0x227 Func
	var_979_int = 0; var_980_int = 0; // 0x229 PushV
	var_980_int = var_833_int; // 0x22a Mov
	func_745(var_979_int, var_980_int); // 0x22b NEW_2
	var_834_int = var_979_int; // 0x22c Mov
	var_981_int = 17; // 0x22e PushI
	Trace(var_981_int); // 0x22f Func
	var_982_bool = 0; var_983_int = 0; // 0x231 PushV
	var_983_int = var_833_int; // 0x232 Mov
	func_768(var_982_bool, var_983_int); // 0x233 NEW_2
	if(var_982_bool == 0) goto Label_579; // 0x235 JumpB
	var_984_int = 18; // 0x236 PushI
	Trace(var_984_int); // 0x237 Func
	var_985_string = "Volonteer : "; // 0x239 PushS
	var_986_string = ""; var_987_int = 0; // 0x23a PushV
	var_987_int = var_834_int; // 0x23b Mov
	func_1588(var_986_string, var_987_int); // 0x23c NEW_2
	var_988_int = var_985_string + var_986_string; // 0x23e Add
	Trace(var_988_int); // 0x23f Func
	var_989_int = 1; // 0x241 PushI
	var_832_int = var_832_int + var_989_int; // 0x242 Add2
	
Label_579:
	var_990_int = 1; // 0x243 PushI
	var_833_int = var_833_int + var_990_int; // 0x244 Add2
	goto Label_545; // 0x245 Jump
	
Label_582:
	var_991_int = 19; // 0x246 PushI
	Trace(var_991_int); // 0x247 Func
	var_835_int = 0; // 0x249 MovI
	var_836_int = 0; // 0x24a MovI
	
Label_587:
	var_992_int = 0; // 0x24b PushV
	func_722(var_992_int); // 0x24c NEW_2
	var_993_bool = var_836_int < var_992_int; // 0x24e LT
	if(var_993_bool == 0) goto Label_621; // 0x24f JumpB
	var_994_int = 20; // 0x250 PushI
	Trace(var_994_int); // 0x251 Func
	var_995_int = 0; var_996_int = 0; // 0x253 PushV
	var_996_int = var_836_int; // 0x254 Mov
	func_745(var_995_int, var_996_int); // 0x255 NEW_2
	var_837_int = var_995_int; // 0x256 Mov
	var_997_bool = 0; var_998_int = 0; // 0x258 PushV
	var_998_int = var_836_int; // 0x259 Mov
	func_792(var_997_bool, var_998_int); // 0x25a NEW_2
	if(var_997_bool == 0) goto Label_618; // 0x25c JumpB
	var_999_int = 21; // 0x25d PushI
	Trace(var_999_int); // 0x25e Func
	var_1000_int = 1; // 0x260 PushI
	var_835_int = var_835_int + var_1000_int; // 0x261 Add2
	var_1001_string = "Diseased volonteer : "; // 0x262 PushS
	var_1002_string = ""; var_1003_int = 0; // 0x263 PushV
	var_1003_int = var_837_int; // 0x264 Mov
	func_1588(var_1002_string, var_1003_int); // 0x265 NEW_2
	var_1004_int = var_1001_string + var_1002_string; // 0x267 Add
	Trace(var_1004_int); // 0x268 Func
	
Label_618:
	var_1005_int = 1; // 0x26a PushI
	var_836_int = var_836_int + var_1005_int; // 0x26b Add2
	goto Label_587; // 0x26c Jump
	
Label_621:
	var_1006_int = 22; // 0x26d PushI
	Trace(var_1006_int); // 0x26e Func
	var_1007_string = "Today volonteers: "; // 0x270 PushS
	var_1008_int = var_1007_string + var_832_int; // 0x271 Add
	var_1009_string = ", diseased: "; // 0x272 PushS
	var_1010_int = var_1008_int + var_1009_string; // 0x273 Add
	var_1011_int = var_1010_int + var_835_int; // 0x274 Add
	Trace(var_1011_int); // 0x275 Func
	return 24; // 0x277 Return
}


func_2092(var_498_bool, var_499_int)
{
	var_500_int = 7; // 0x82d PushI
	var_501_bool = var_499_int == var_500_int; // 0x82e Eq
	if(var_501_bool == 0) goto Label_2098; // 0x82f JumpB
	var_498_bool = 1; // 0x830 MovB
	return 0; // 0x831 Return
	
Label_2098:
	var_502_int = 23; // 0x832 PushI
	var_503_bool = var_499_int == var_502_int; // 0x833 Eq
	if(var_503_bool == 0) goto Label_2103; // 0x834 JumpB
	var_498_bool = 1; // 0x835 MovB
	return 0; // 0x836 Return
	
Label_2103:
	var_504_int = 21; // 0x837 PushI
	var_505_bool = var_499_int == var_504_int; // 0x838 Eq
	if(var_505_bool == 0) goto Label_2108; // 0x839 JumpB
	var_498_bool = 1; // 0x83a MovB
	return 0; // 0x83b Return
	
Label_2108:
	var_506_int = 9; // 0x83c PushI
	var_507_bool = var_499_int == var_506_int; // 0x83d Eq
	if(var_507_bool == 0) goto Label_2113; // 0x83e JumpB
	var_498_bool = 1; // 0x83f MovB
	return 0; // 0x840 Return
	
Label_2113:
	var_508_int = 3; // 0x841 PushI
	var_509_bool = var_499_int == var_508_int; // 0x842 Eq
	if(var_509_bool == 0) goto Label_2118; // 0x843 JumpB
	var_498_bool = 1; // 0x844 MovB
	return 0; // 0x845 Return
	
Label_2118:
	var_510_int = 1; // 0x846 PushI
	var_511_bool = var_499_int == var_510_int; // 0x847 Eq
	if(var_511_bool == 0) goto Label_2123; // 0x848 JumpB
	var_498_bool = 1; // 0x849 MovB
	return 0; // 0x84a Return
	
Label_2123:
	var_512_int = 11; // 0x84b PushI
	var_513_bool = var_499_int == var_512_int; // 0x84c Eq
	if(var_513_bool == 0) goto Label_2128; // 0x84d JumpB
	var_498_bool = 1; // 0x84e MovB
	return 0; // 0x84f Return
	
Label_2128:
	var_514_int = 13; // 0x850 PushI
	var_515_bool = var_499_int == var_514_int; // 0x851 Eq
	if(var_515_bool == 0) goto Label_2133; // 0x852 JumpB
	var_498_bool = 1; // 0x853 MovB
	return 0; // 0x854 Return
	
Label_2133:
	var_516_int = 25; // 0x855 PushI
	var_517_bool = var_499_int == var_516_int; // 0x856 Eq
	if(var_517_bool == 0) goto Label_2138; // 0x857 JumpB
	var_498_bool = 1; // 0x858 MovB
	return 0; // 0x859 Return
	
Label_2138:
	var_498_bool = 0; // 0x85a MovB
	return 0; // 0x85b Return
}


func_2607(var_291_bool, var_292_int)
{
	var_293_int = 0; var_294_int = 0; // 0xa2f PushV
	var_295_string = "vol_"; // 0xa30 PushS
	var_296_int = var_295_string + var_292_int; // 0xa31 Add
	GetVariable(var_296_int, var_294_int); // 0xa32 Func
	var_297_int = 16; // 0xa34 PushI
	var_298_int = var_294_int & var_297_int; // 0xa35 And
	var_299_int = 0; // 0xa36 PushI
	var_291_bool = var_298_int != var_299_int; // 0xa37 Neq2
	return 2; // 0xa38 Return
}


func_944(var_18_int)
{
	var_207_int = 0; var_208_object = Obj(); var_209_object = Obj(); var_210_int = 0; var_211_int = 0; var_212_string = ""; var_213_int = 0; var_214_object = Obj(); var_215_object = Obj(); var_216_int = 0; var_217_int = 0; var_218_string = ""; // 0x3b0 PushV
	var_219_string = ""; var_220_int = 0; // 0x3b1 PushV
	var_220_int = var_18_int; // 0x3b2 Mov
	func_750(var_219_string, var_220_int); // 0x3b3 NEW_2
	GetVariable(var_219_string, var_213_int); // 0x3b5 Func
	var_224_string = ""; var_225_int = 0; // 0x3b7 PushV
	var_225_int = var_18_int; // 0x3b8 Mov
	func_750(var_224_string, var_225_int); // 0x3b9 NEW_2
	var_226_int = 4; // 0x3bb PushI
	var_227_int = var_213_int | var_226_int; // 0x3bc Or
	var_228_int = 1; // 0x3bd PushI
	var_229_int = var_227_int | var_228_int; // 0x3be Or
	var_230_int = 2; // 0x3bf PushI
	var_231_int = var_229_int | var_230_int; // 0x3c0 Or
	var_232_int = 4; // 0x3c1 PushI
	var_233_int = var_231_int - var_232_int; // 0x3c2 Sub
	var_234_int = 1; // 0x3c3 PushI
	var_235_int = var_233_int - var_234_int; // 0x3c4 Sub
	var_236_int = 2; // 0x3c5 PushI
	var_237_int = var_235_int - var_236_int; // 0x3c6 Sub
	SetVariable(var_224_string, var_237_int); // 0x3c7 Func
	get(var_214_object, var_18_int); // 0x3c9 TObjFunc
	var_238_bool = var_214_object != 0; // 0x3cb NullNeq
	if(var_238_bool == 0) goto Label_975; // 0x3cc JumpB
	Remove(); // 0x3cd ObjFunc
	
Label_975:
	get(var_215_object, var_18_int); // 0x3cf TObjFunc
	size(var_216_int); // 0x3d1 ObjFunc
	var_217_int = 0; // 0x3d3 MovI
	
Label_980:
	var_239_bool = var_217_int < var_216_int; // 0x3d4 LT
	if(var_239_bool == 0) goto Label_992; // 0x3d5 JumpB
	get(var_218_string, var_217_int); // 0x3d6 ObjFunc
	var_240_string = ""; var_241_int = 0; // 0x3d8 PushV
	var_240_string = var_218_string; // 0x3d9 Mov
	var_241_int = 0; // 0x3da MovI
	func_2710(var_240_string, var_241_int); // 0x3db NEW_2
	var_250_int = 1; // 0x3dd PushI
	var_217_int = var_217_int + var_250_int; // 0x3de Add2
	goto Label_980; // 0x3df Jump
	
Label_992:
	return 12; // 0x3e0 Return
}


func_1072(var_957_int)
{
	var_958_int = 0; var_959_int = 0; // 0x430 PushV
	var_960_string = ""; var_961_int = 0; // 0x431 PushV
	var_961_int = var_957_int; // 0x432 Mov
	func_750(var_960_string, var_961_int); // 0x433 NEW_2
	GetVariable(var_960_string, var_959_int); // 0x435 Func
	var_962_string = ""; var_963_int = 0; // 0x437 PushV
	var_963_int = var_957_int; // 0x438 Mov
	func_750(var_962_string, var_963_int); // 0x439 NEW_2
	var_964_int = 8; // 0x43b PushI
	var_965_int = var_959_int & var_964_int; // 0x43c And
	var_966_int = 3; // 0x43d PushI
	var_967_int = var_965_int | var_966_int; // 0x43e Or
	SetVariable(var_962_string, var_967_int); // 0x43f Func
	return 2; // 0x441 Return
}


func_1588(var_557_string, var_558_int)
{
	var_561_int = 1; // 0x635 PushI
	var_562_bool = var_558_int == var_561_int; // 0x636 Eq
	if(var_562_bool == 0) goto Label_1594; // 0x637 JumpB
	var_557_string = "alexandr"; // 0x638 MovS
	return 0; // 0x639 Return
	
Label_1594:
	var_563_int = 2; // 0x63a PushI
	var_564_bool = var_558_int == var_563_int; // 0x63b Eq
	if(var_564_bool == 0) goto Label_1599; // 0x63c JumpB
	var_557_string = "andrei"; // 0x63d MovS
	return 0; // 0x63e Return
	
Label_1599:
	var_565_int = 3; // 0x63f PushI
	var_566_bool = var_558_int == var_565_int; // 0x640 Eq
	if(var_566_bool == 0) goto Label_1604; // 0x641 JumpB
	var_557_string = "anna"; // 0x642 MovS
	return 0; // 0x643 Return
	
Label_1604:
	var_567_int = 4; // 0x644 PushI
	var_568_bool = var_558_int == var_567_int; // 0x645 Eq
	if(var_568_bool == 0) goto Label_1609; // 0x646 JumpB
	var_557_string = "bigvlad"; // 0x647 MovS
	return 0; // 0x648 Return
	
Label_1609:
	var_569_int = 5; // 0x649 PushI
	var_570_bool = var_558_int == var_569_int; // 0x64a Eq
	if(var_570_bool == 0) goto Label_1614; // 0x64b JumpB
	var_557_string = "eva"; // 0x64c MovS
	return 0; // 0x64d Return
	
Label_1614:
	var_571_int = 6; // 0x64e PushI
	var_572_bool = var_558_int == var_571_int; // 0x64f Eq
	if(var_572_bool == 0) goto Label_1619; // 0x650 JumpB
	var_557_string = "georg"; // 0x651 MovS
	return 0; // 0x652 Return
	
Label_1619:
	var_573_int = 7; // 0x653 PushI
	var_574_bool = var_558_int == var_573_int; // 0x654 Eq
	if(var_574_bool == 0) goto Label_1624; // 0x655 JumpB
	var_557_string = "grif"; // 0x656 MovS
	return 0; // 0x657 Return
	
Label_1624:
	var_575_int = 8; // 0x658 PushI
	var_576_bool = var_558_int == var_575_int; // 0x659 Eq
	if(var_576_bool == 0) goto Label_1629; // 0x65a JumpB
	var_557_string = "han"; // 0x65b MovS
	return 0; // 0x65c Return
	
Label_1629:
	var_577_int = 9; // 0x65d PushI
	var_578_bool = var_558_int == var_577_int; // 0x65e Eq
	if(var_578_bool == 0) goto Label_1634; // 0x65f JumpB
	var_557_string = "julia"; // 0x660 MovS
	return 0; // 0x661 Return
	
Label_1634:
	var_579_int = 10; // 0x662 PushI
	var_580_bool = var_558_int == var_579_int; // 0x663 Eq
	if(var_580_bool == 0) goto Label_1639; // 0x664 JumpB
	var_557_string = "kapella"; // 0x665 MovS
	return 0; // 0x666 Return
	
Label_1639:
	var_581_int = 11; // 0x667 PushI
	var_582_bool = var_558_int == var_581_int; // 0x668 Eq
	if(var_582_bool == 0) goto Label_1644; // 0x669 JumpB
	var_557_string = "katerina"; // 0x66a MovS
	return 0; // 0x66b Return
	
Label_1644:
	var_583_int = 12; // 0x66c PushI
	var_584_bool = var_558_int == var_583_int; // 0x66d Eq
	if(var_584_bool == 0) goto Label_1649; // 0x66e JumpB
	var_557_string = "klara"; // 0x66f MovS
	return 0; // 0x670 Return
	
Label_1649:
	var_585_int = 13; // 0x671 PushI
	var_586_bool = var_558_int == var_585_int; // 0x672 Eq
	if(var_586_bool == 0) goto Label_1654; // 0x673 JumpB
	var_557_string = "lara"; // 0x674 MovS
	return 0; // 0x675 Return
	
Label_1654:
	var_587_int = 14; // 0x676 PushI
	var_588_bool = var_558_int == var_587_int; // 0x677 Eq
	if(var_588_bool == 0) goto Label_1659; // 0x678 JumpB
	var_557_string = "laska"; // 0x679 MovS
	return 0; // 0x67a Return
	
Label_1659:
	var_589_int = 15; // 0x67b PushI
	var_590_bool = var_558_int == var_589_int; // 0x67c Eq
	if(var_590_bool == 0) goto Label_1664; // 0x67d JumpB
	var_557_string = "maria"; // 0x67e MovS
	return 0; // 0x67f Return
	
Label_1664:
	var_591_int = 16; // 0x680 PushI
	var_592_bool = var_558_int == var_591_int; // 0x681 Eq
	if(var_592_bool == 0) goto Label_1669; // 0x682 JumpB
	var_557_string = "mark"; // 0x683 MovS
	return 0; // 0x684 Return
	
Label_1669:
	var_593_int = 17; // 0x685 PushI
	var_594_bool = var_558_int == var_593_int; // 0x686 Eq
	if(var_594_bool == 0) goto Label_1674; // 0x687 JumpB
	var_557_string = "mat"; // 0x688 MovS
	return 0; // 0x689 Return
	
Label_1674:
	var_595_int = 18; // 0x68a PushI
	var_596_bool = var_558_int == var_595_int; // 0x68b Eq
	if(var_596_bool == 0) goto Label_1679; // 0x68c JumpB
	var_557_string = "mishka"; // 0x68d MovS
	return 0; // 0x68e Return
	
Label_1679:
	var_597_int = 19; // 0x68f PushI
	var_598_bool = var_558_int == var_597_int; // 0x690 Eq
	if(var_598_bool == 0) goto Label_1684; // 0x691 JumpB
	var_557_string = "mladvlad"; // 0x692 MovS
	return 0; // 0x693 Return
	
Label_1684:
	var_599_int = 20; // 0x694 PushI
	var_600_bool = var_558_int == var_599_int; // 0x695 Eq
	if(var_600_bool == 0) goto Label_1689; // 0x696 JumpB
	var_557_string = "notkin"; // 0x697 MovS
	return 0; // 0x698 Return
	
Label_1689:
	var_601_int = 21; // 0x699 PushI
	var_602_bool = var_558_int == var_601_int; // 0x69a Eq
	if(var_602_bool == 0) goto Label_1694; // 0x69b JumpB
	var_557_string = "ospina"; // 0x69c MovS
	return 0; // 0x69d Return
	
Label_1694:
	var_603_int = 22; // 0x69e PushI
	var_604_bool = var_558_int == var_603_int; // 0x69f Eq
	if(var_604_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_557_string = "petr"; // 0x6a1 MovS
	return 0; // 0x6a2 Return
	
Label_1699:
	var_605_int = 23; // 0x6a3 PushI
	var_606_bool = var_558_int == var_605_int; // 0x6a4 Eq
	if(var_606_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_557_string = "rubin"; // 0x6a6 MovS
	return 0; // 0x6a7 Return
	
Label_1704:
	var_607_int = 24; // 0x6a8 PushI
	var_608_bool = var_558_int == var_607_int; // 0x6a9 Eq
	if(var_608_bool == 0) goto Label_1709; // 0x6aa JumpB
	var_557_string = "spi4ka"; // 0x6ab MovS
	return 0; // 0x6ac Return
	
Label_1709:
	var_609_int = 25; // 0x6ad PushI
	var_610_bool = var_558_int == var_609_int; // 0x6ae Eq
	if(var_610_bool == 0) goto Label_1714; // 0x6af JumpB
	var_557_string = "starshina"; // 0x6b0 MovS
	return 0; // 0x6b1 Return
	
Label_1714:
	var_611_int = 26; // 0x6b2 PushI
	var_612_bool = var_558_int == var_611_int; // 0x6b3 Eq
	if(var_612_bool == 0) goto Label_1719; // 0x6b4 JumpB
	var_557_string = "viktor"; // 0x6b5 MovS
	return 0; // 0x6b6 Return
	
Label_1719:
	var_613_int = 27; // 0x6b7 PushI
	var_614_bool = var_558_int == var_613_int; // 0x6b8 Eq
	if(var_614_bool == 0) goto Label_1724; // 0x6b9 JumpB
	var_557_string = "wasted_woman"; // 0x6ba MovS
	return 0; // 0x6bb Return
	
Label_1724:
	var_615_int = 28; // 0x6bc PushI
	var_616_bool = var_558_int == var_615_int; // 0x6bd Eq
	if(var_616_bool == 0) goto Label_1729; // 0x6be JumpB
	var_557_string = "wasted_male"; // 0x6bf MovS
	return 0; // 0x6c0 Return
	
Label_1729:
	var_617_int = 29; // 0x6c1 PushI
	var_618_bool = var_558_int == var_617_int; // 0x6c2 Eq
	if(var_618_bool == 0) goto Label_1734; // 0x6c3 JumpB
	var_557_string = "alkash"; // 0x6c4 MovS
	return 0; // 0x6c5 Return
	
Label_1734:
	var_619_int = 30; // 0x6c6 PushI
	var_620_bool = var_558_int == var_619_int; // 0x6c7 Eq
	if(var_620_bool == 0) goto Label_1739; // 0x6c8 JumpB
	var_557_string = "boy"; // 0x6c9 MovS
	return 0; // 0x6ca Return
	
Label_1739:
	var_621_int = 31; // 0x6cb PushI
	var_622_bool = var_558_int == var_621_int; // 0x6cc Eq
	if(var_622_bool == 0) goto Label_1744; // 0x6cd JumpB
	var_557_string = "girl"; // 0x6ce MovS
	return 0; // 0x6cf Return
	
Label_1744:
	var_623_int = 32; // 0x6d0 PushI
	var_624_bool = var_558_int == var_623_int; // 0x6d1 Eq
	if(var_624_bool == 0) goto Label_1749; // 0x6d2 JumpB
	var_557_string = "littleboy"; // 0x6d3 MovS
	return 0; // 0x6d4 Return
	
Label_1749:
	var_625_int = 33; // 0x6d5 PushI
	var_626_bool = var_558_int == var_625_int; // 0x6d6 Eq
	if(var_626_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_557_string = "littlegirl"; // 0x6d8 MovS
	return 0; // 0x6d9 Return
	
Label_1754:
	var_627_int = 34; // 0x6da PushI
	var_628_bool = var_558_int == var_627_int; // 0x6db Eq
	if(var_628_bool == 0) goto Label_1759; // 0x6dc JumpB
	var_557_string = "butcher"; // 0x6dd MovS
	return 0; // 0x6de Return
	
Label_1759:
	var_629_int = 35; // 0x6df PushI
	var_630_bool = var_558_int == var_629_int; // 0x6e0 Eq
	if(var_630_bool == 0) goto Label_1764; // 0x6e1 JumpB
	var_557_string = "dohodyaga"; // 0x6e2 MovS
	return 0; // 0x6e3 Return
	
Label_1764:
	var_631_int = 36; // 0x6e4 PushI
	var_632_bool = var_558_int == var_631_int; // 0x6e5 Eq
	if(var_632_bool == 0) goto Label_1769; // 0x6e6 JumpB
	var_557_string = "unosha"; // 0x6e7 MovS
	return 0; // 0x6e8 Return
	
Label_1769:
	var_633_int = 37; // 0x6e9 PushI
	var_634_bool = var_558_int == var_633_int; // 0x6ea Eq
	if(var_634_bool == 0) goto Label_1774; // 0x6eb JumpB
	var_557_string = "vaxxabit"; // 0x6ec MovS
	return 0; // 0x6ed Return
	
Label_1774:
	var_635_int = 38; // 0x6ee PushI
	var_636_bool = var_558_int == var_635_int; // 0x6ef Eq
	if(var_636_bool == 0) goto Label_1779; // 0x6f0 JumpB
	var_557_string = "vaxxabitka"; // 0x6f1 MovS
	return 0; // 0x6f2 Return
	
Label_1779:
	var_637_int = 39; // 0x6f3 PushI
	var_638_bool = var_558_int == var_637_int; // 0x6f4 Eq
	if(var_638_bool == 0) goto Label_1784; // 0x6f5 JumpB
	var_557_string = "woman"; // 0x6f6 MovS
	return 0; // 0x6f7 Return
	
Label_1784:
	var_639_int = 40; // 0x6f8 PushI
	var_640_bool = var_558_int == var_639_int; // 0x6f9 Eq
	if(var_640_bool == 0) goto Label_1789; // 0x6fa JumpB
	var_557_string = "worker"; // 0x6fb MovS
	return 0; // 0x6fc Return
	
Label_1789:
	var_641_int = 42; // 0x6fd PushI
	var_642_bool = var_558_int == var_641_int; // 0x6fe Eq
	if(var_642_bool == 0) goto Label_1794; // 0x6ff JumpB
	var_557_string = "whitemask"; // 0x700 MovS
	return 0; // 0x701 Return
	
Label_1794:
	var_643_int = 43; // 0x702 PushI
	var_644_bool = var_558_int == var_643_int; // 0x703 Eq
	if(var_644_bool == 0) goto Label_1799; // 0x704 JumpB
	var_557_string = "birdmask"; // 0x705 MovS
	return 0; // 0x706 Return
	
Label_1799:
	var_645_int = 44; // 0x707 PushI
	var_646_bool = var_558_int == var_645_int; // 0x708 Eq
	if(var_646_bool == 0) goto Label_1804; // 0x709 JumpB
	var_557_string = "birdmask"; // 0x70a MovS
	return 0; // 0x70b Return
	
Label_1804:
	var_647_int = 46; // 0x70c PushI
	var_648_bool = var_558_int == var_647_int; // 0x70d Eq
	if(var_648_bool == 0) goto Label_1809; // 0x70e JumpB
	var_557_string = "patrol"; // 0x70f MovS
	return 0; // 0x710 Return
	
Label_1809:
	var_649_int = 47; // 0x711 PushI
	var_650_bool = var_558_int == var_649_int; // 0x712 Eq
	if(var_650_bool == 0) goto Label_1814; // 0x713 JumpB
	var_557_string = "danko"; // 0x714 MovS
	return 0; // 0x715 Return
	
Label_1814:
	var_651_int = 48; // 0x716 PushI
	var_652_bool = var_558_int == var_651_int; // 0x717 Eq
	if(var_652_bool == 0) goto Label_1819; // 0x718 JumpB
	var_557_string = "alkash_d"; // 0x719 MovS
	return 0; // 0x71a Return
	
Label_1819:
	var_653_int = 49; // 0x71b PushI
	var_654_bool = var_558_int == var_653_int; // 0x71c Eq
	if(var_654_bool == 0) goto Label_1824; // 0x71d JumpB
	var_557_string = "boy_d"; // 0x71e MovS
	return 0; // 0x71f Return
	
Label_1824:
	var_655_int = 50; // 0x720 PushI
	var_656_bool = var_558_int == var_655_int; // 0x721 Eq
	if(var_656_bool == 0) goto Label_1829; // 0x722 JumpB
	var_557_string = "butcher_d"; // 0x723 MovS
	return 0; // 0x724 Return
	
Label_1829:
	var_657_int = 51; // 0x725 PushI
	var_658_bool = var_558_int == var_657_int; // 0x726 Eq
	if(var_658_bool == 0) goto Label_1834; // 0x727 JumpB
	var_557_string = "dohodyaga_d"; // 0x728 MovS
	return 0; // 0x729 Return
	
Label_1834:
	var_659_int = 52; // 0x72a PushI
	var_660_bool = var_558_int == var_659_int; // 0x72b Eq
	if(var_660_bool == 0) goto Label_1839; // 0x72c JumpB
	var_557_string = "girl_d"; // 0x72d MovS
	return 0; // 0x72e Return
	
Label_1839:
	var_661_int = 53; // 0x72f PushI
	var_662_bool = var_558_int == var_661_int; // 0x730 Eq
	if(var_662_bool == 0) goto Label_1844; // 0x731 JumpB
	var_557_string = "littleboy_d"; // 0x732 MovS
	return 0; // 0x733 Return
	
Label_1844:
	var_663_int = 54; // 0x734 PushI
	var_664_bool = var_558_int == var_663_int; // 0x735 Eq
	if(var_664_bool == 0) goto Label_1849; // 0x736 JumpB
	var_557_string = "littlegirl_d"; // 0x737 MovS
	return 0; // 0x738 Return
	
Label_1849:
	var_665_int = 55; // 0x739 PushI
	var_666_bool = var_558_int == var_665_int; // 0x73a Eq
	if(var_666_bool == 0) goto Label_1854; // 0x73b JumpB
	var_557_string = "unosha2"; // 0x73c MovS
	return 0; // 0x73d Return
	
Label_1854:
	var_667_int = 56; // 0x73e PushI
	var_668_bool = var_558_int == var_667_int; // 0x73f Eq
	if(var_668_bool == 0) goto Label_1859; // 0x740 JumpB
	var_557_string = "unosha_d"; // 0x741 MovS
	return 0; // 0x742 Return
	
Label_1859:
	var_669_int = 57; // 0x743 PushI
	var_670_bool = var_558_int == var_669_int; // 0x744 Eq
	if(var_670_bool == 0) goto Label_1864; // 0x745 JumpB
	var_557_string = "unosha2_d"; // 0x746 MovS
	return 0; // 0x747 Return
	
Label_1864:
	var_671_int = 58; // 0x748 PushI
	var_672_bool = var_558_int == var_671_int; // 0x749 Eq
	if(var_672_bool == 0) goto Label_1869; // 0x74a JumpB
	var_557_string = "vaxxabit_d"; // 0x74b MovS
	return 0; // 0x74c Return
	
Label_1869:
	var_673_int = 59; // 0x74d PushI
	var_674_bool = var_558_int == var_673_int; // 0x74e Eq
	if(var_674_bool == 0) goto Label_1874; // 0x74f JumpB
	var_557_string = "vaxxabitka_d"; // 0x750 MovS
	return 0; // 0x751 Return
	
Label_1874:
	var_675_int = 60; // 0x752 PushI
	var_676_bool = var_558_int == var_675_int; // 0x753 Eq
	if(var_676_bool == 0) goto Label_1879; // 0x754 JumpB
	var_557_string = "wasted_male_d"; // 0x755 MovS
	return 0; // 0x756 Return
	
Label_1879:
	var_677_int = 61; // 0x757 PushI
	var_678_bool = var_558_int == var_677_int; // 0x758 Eq
	if(var_678_bool == 0) goto Label_1884; // 0x759 JumpB
	var_557_string = "wasted_woman_d"; // 0x75a MovS
	return 0; // 0x75b Return
	
Label_1884:
	var_679_int = 62; // 0x75c PushI
	var_680_bool = var_558_int == var_679_int; // 0x75d Eq
	if(var_680_bool == 0) goto Label_1889; // 0x75e JumpB
	var_557_string = "woman_d"; // 0x75f MovS
	return 0; // 0x760 Return
	
Label_1889:
	var_681_int = 63; // 0x761 PushI
	var_682_bool = var_558_int == var_681_int; // 0x762 Eq
	if(var_682_bool == 0) goto Label_1894; // 0x763 JumpB
	var_557_string = "worker2"; // 0x764 MovS
	return 0; // 0x765 Return
	
Label_1894:
	var_683_int = 64; // 0x766 PushI
	var_684_bool = var_558_int == var_683_int; // 0x767 Eq
	if(var_684_bool == 0) goto Label_1899; // 0x768 JumpB
	var_557_string = "worker_d"; // 0x769 MovS
	return 0; // 0x76a Return
	
Label_1899:
	var_685_int = 65; // 0x76b PushI
	var_686_bool = var_558_int == var_685_int; // 0x76c Eq
	if(var_686_bool == 0) goto Label_1904; // 0x76d JumpB
	var_557_string = "worker2_d"; // 0x76e MovS
	return 0; // 0x76f Return
	
Label_1904:
	var_687_int = 66; // 0x770 PushI
	var_688_bool = var_558_int == var_687_int; // 0x771 Eq
	if(var_688_bool == 0) goto Label_1909; // 0x772 JumpB
	var_557_string = "burah"; // 0x773 MovS
	return 0; // 0x774 Return
	
Label_1909:
	var_689_int = 67; // 0x775 PushI
	var_690_bool = var_558_int == var_689_int; // 0x776 Eq
	if(var_690_bool == 0) goto Label_1914; // 0x777 JumpB
	var_557_string = "gorbun_daughter"; // 0x778 MovS
	return 0; // 0x779 Return
	
Label_1914:
	var_691_int = 68; // 0x77a PushI
	var_692_bool = var_558_int == var_691_int; // 0x77b Eq
	if(var_692_bool == 0) goto Label_1919; // 0x77c JumpB
	var_557_string = "gorbun"; // 0x77d MovS
	return 0; // 0x77e Return
	
Label_1919:
	var_693_int = 69; // 0x77f PushI
	var_694_bool = var_558_int == var_693_int; // 0x780 Eq
	if(var_694_bool == 0) goto Label_1924; // 0x781 JumpB
	var_557_string = "albinos"; // 0x782 MovS
	return 0; // 0x783 Return
	
Label_1924:
	var_695_int = 70; // 0x784 PushI
	var_696_bool = var_558_int == var_695_int; // 0x785 Eq
	if(var_696_bool == 0) goto Label_1929; // 0x786 JumpB
	var_557_string = "aglaja"; // 0x787 MovS
	return 0; // 0x788 Return
	
Label_1929:
	var_697_int = 71; // 0x789 PushI
	var_698_bool = var_558_int == var_697_int; // 0x78a Eq
	if(var_698_bool == 0) goto Label_1934; // 0x78b JumpB
	var_557_string = "nude"; // 0x78c MovS
	return 0; // 0x78d Return
	
Label_1934:
	var_699_int = 72; // 0x78e PushI
	var_700_bool = var_558_int == var_699_int; // 0x78f Eq
	if(var_700_bool == 0) goto Label_1939; // 0x790 JumpB
	var_557_string = "block"; // 0x791 MovS
	return 0; // 0x792 Return
	
Label_1939:
	var_701_int = 73; // 0x793 PushI
	var_702_bool = var_558_int == var_701_int; // 0x794 Eq
	if(var_702_bool == 0) goto Label_1944; // 0x795 JumpB
	var_557_string = "officer"; // 0x796 MovS
	return 0; // 0x797 Return
	
Label_1944:
	var_703_int = 74; // 0x798 PushI
	var_704_bool = var_558_int == var_703_int; // 0x799 Eq
	if(var_704_bool == 0) goto Label_1949; // 0x79a JumpB
	var_557_string = "doberman"; // 0x79b MovS
	return 0; // 0x79c Return
	
Label_1949:
	var_705_int = 75; // 0x79d PushI
	var_706_bool = var_558_int == var_705_int; // 0x79e Eq
	if(var_706_bool == 0) goto Label_1954; // 0x79f JumpB
	var_557_string = "grabitel"; // 0x7a0 MovS
	return 0; // 0x7a1 Return
	
Label_1954:
	var_707_int = 76; // 0x7a2 PushI
	var_708_bool = var_558_int == var_707_int; // 0x7a3 Eq
	if(var_708_bool == 0) goto Label_1959; // 0x7a4 JumpB
	var_557_string = "gatherer_wife"; // 0x7a5 MovS
	return 0; // 0x7a6 Return
	
Label_1959:
	var_709_int = 77; // 0x7a7 PushI
	var_710_bool = var_558_int == var_709_int; // 0x7a8 Eq
	if(var_710_bool == 0) goto Label_1964; // 0x7a9 JumpB
	var_557_string = "rat_prophet"; // 0x7aa MovS
	return 0; // 0x7ab Return
	
Label_1964:
	var_711_int = 78; // 0x7ac PushI
	var_712_bool = var_558_int == var_711_int; // 0x7ad Eq
	if(var_712_bool == 0) goto Label_1969; // 0x7ae JumpB
	var_557_string = "morlok"; // 0x7af MovS
	return 0; // 0x7b0 Return
	
Label_1969:
	var_713_int = 79; // 0x7b1 PushI
	var_714_bool = var_558_int == var_713_int; // 0x7b2 Eq
	if(var_714_bool == 0) goto Label_1974; // 0x7b3 JumpB
	var_557_string = "soldier"; // 0x7b4 MovS
	return 0; // 0x7b5 Return
	
Label_1974:
	var_715_int = 80; // 0x7b6 PushI
	var_716_bool = var_558_int == var_715_int; // 0x7b7 Eq
	if(var_716_bool == 0) goto Label_1979; // 0x7b8 JumpB
	var_557_string = "britva"; // 0x7b9 MovS
	return 0; // 0x7ba Return
	
Label_1979:
	var_717_int = 81; // 0x7bb PushI
	var_718_bool = var_558_int == var_717_int; // 0x7bc Eq
	if(var_718_bool == 0) goto Label_1984; // 0x7bd JumpB
	var_557_string = "kabaktchik"; // 0x7be MovS
	return 0; // 0x7bf Return
	
Label_1984:
	var_719_int = 82; // 0x7c0 PushI
	var_720_bool = var_558_int == var_719_int; // 0x7c1 Eq
	if(var_720_bool == 0) goto Label_1989; // 0x7c2 JumpB
	var_557_string = "sanitar"; // 0x7c3 MovS
	return 0; // 0x7c4 Return
	
Label_1989:
	var_721_int = 83; // 0x7c5 PushI
	var_722_bool = var_558_int == var_721_int; // 0x7c6 Eq
	if(var_722_bool == 0) goto Label_1994; // 0x7c7 JumpB
	var_557_string = "salesman"; // 0x7c8 MovS
	return 0; // 0x7c9 Return
	
Label_1994:
	var_723_int = 84; // 0x7ca PushI
	var_724_bool = var_558_int == var_723_int; // 0x7cb Eq
	if(var_724_bool == 0) goto Label_1999; // 0x7cc JumpB
	var_557_string = "ayyan"; // 0x7cd MovS
	return 0; // 0x7ce Return
	
Label_1999:
	var_725_int = 85; // 0x7cf PushI
	var_726_bool = var_558_int == var_725_int; // 0x7d0 Eq
	if(var_726_bool == 0) goto Label_2004; // 0x7d1 JumpB
	var_557_string = "petrbirdmask"; // 0x7d2 MovS
	return 0; // 0x7d3 Return
	
Label_2004:
	var_727_int = 86; // 0x7d4 PushI
	var_728_bool = var_558_int == var_727_int; // 0x7d5 Eq
	if(var_728_bool == 0) goto Label_2009; // 0x7d6 JumpB
	var_557_string = "mogila"; // 0x7d7 MovS
	return 0; // 0x7d8 Return
	
Label_2009:
	var_729_int = 87; // 0x7d9 PushI
	var_730_bool = var_558_int == var_729_int; // 0x7da Eq
	if(var_730_bool == 0) goto Label_2014; // 0x7db JumpB
	var_557_string = "klikusha"; // 0x7dc MovS
	return 0; // 0x7dd Return
	
Label_2014:
	var_731_int = 88; // 0x7de PushI
	var_732_bool = var_558_int == var_731_int; // 0x7df Eq
	if(var_732_bool == 0) goto Label_2019; // 0x7e0 JumpB
	var_557_string = "karlik"; // 0x7e1 MovS
	return 0; // 0x7e2 Return
	
Label_2019:
	var_733_int = 89; // 0x7e3 PushI
	var_734_bool = var_558_int == var_733_int; // 0x7e4 Eq
	if(var_734_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_557_string = "lisa"; // 0x7e6 MovS
	return 0; // 0x7e7 Return
	
Label_2024:
	var_557_string = ""; // 0x7e8 MovS
	return 0; // 0x7e9 Return
}


func_2617(var_387_int, var_388_float)
{
	var_389_int = 0; var_390_int = 0; var_391_int = 0; var_392_float = 0; // 0xa3a PushV
	var_390_int = 539371; // 0xa3b MovI
	var_391_int = 539370; // 0xa3c MovI
	var_392_float = var_388_float; // 0xa3d Mov
	func_2702(var_389_int, var_390_int, var_391_int, var_392_float); // 0xa3e NEW_2
	var_387_int = var_389_int; // 0xa3f Mov
	return 0; // 0xa41 Return
}


func_2626(var_1033_int, var_1034_float)
{
	var_1035_int = 0; var_1036_int = 0; var_1037_int = 0; var_1038_float = 0; // 0xa43 PushV
	var_1036_int = 539373; // 0xa44 MovI
	var_1037_int = 539372; // 0xa45 MovI
	var_1038_float = var_1034_float; // 0xa46 Mov
	func_2702(var_1035_int, var_1036_int, var_1037_int, var_1038_float); // 0xa47 NEW_2
	var_1033_int = var_1035_int; // 0xa48 Mov
	return 0; // 0xa4a Return
}


func_1090(var_735_object, var_737_string, var_738_string, var_739_string)
{
	var_744_bool = 0; var_745_cvector = CVector(0,0,0); var_746_cvector = CVector(0,0,0); var_747_object = Obj(); var_748_bool = 0; var_749_cvector = CVector(0,0,0); var_750_cvector = CVector(0,0,0); var_751_object = Obj(); // 0x442 PushV
	GetLocator(var_737_string, var_748_bool, var_749_cvector, var_750_cvector); // 0x443 ObjFunc
	var_752_bool = var_748_bool == 0; // 0x445 Not
	if(var_752_bool == 0) goto Label_1103; // 0x446 JumpB
	var_753_string = "Locator "; // 0x447 PushS
	var_754_int = var_753_string + var_737_string; // 0x448 Add
	var_755_string = " doesn't exist"; // 0x449 PushS
	var_756_int = var_754_int + var_755_string; // 0x44a Add
	Trace(var_756_int); // 0x44b Func
	var_751_object = 0; // 0x44d SetNull
	goto Label_1105; // 0x44e Jump
	
Label_1105:
	var_735_object = var_751_object; // 0x451 Mov
	return 8; // 0x452 Return
	
Label_1103:
	AddStationaryActor(var_751_object, var_749_cvector, var_750_cvector, var_738_string, var_739_string); // 0x44f ObjFunc
}


func_70(var_909_int, var_910_int)
{
	var_911_int = 11; // 0x47 PushI
	var_912_bool = var_910_int >= var_911_int; // 0x48 GE
	if(var_912_bool == 0) goto Label_76; // 0x49 JumpB
	var_909_int = 0; // 0x4a MovI
	return 0; // 0x4b Return
	
Label_76:
	var_909_int = 1; // 0x4c MovI
	return 0; // 0x4d Return
}


func_2635()
{
	var_437_object = Obj(); var_438_object = Obj(); // 0xa4b PushV
	var_439_int = 739; // 0xa4c PushI
	var_440_int = 1; // 0xa4d PushI
	var_441_int = 539369; // 0xa4e PushI
	CreateDiaryEntry(var_438_object, var_439_int, var_440_int, var_441_int); // 0xa4f Func
	var_442_bool = 0; var_443_object = Obj(); var_444_int = 0; // 0xa51 PushV
	var_443_object = var_438_object; // 0xa52 Mov
	var_444_int = 738; // 0xa53 MovI
	func_2674(var_442_bool, var_443_object, var_444_int); // 0xa54 NEW_2
	return 2; // 0xa56 Return
}


func_2765(var_311_bool)
{
	var_312_object = Obj(); var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_object = Obj(); var_317_int = 0; var_318_int = 0; var_319_int = 0; // 0xacd PushV
	CreateIntVector(var_316_object); // 0xace Func
	var_320_object = Obj(); var_321_bool = 0; var_322_int = 0; // 0xad0 PushV
	var_320_object = var_316_object; // 0xad1 Mov
	var_321_bool = 0; // 0xad2 MovB
	var_322_int = -1; // 0xad3 MovI
	func_2059(var_321_bool, var_322_int); // 0xad4 NEW_2
	size(var_317_int); // 0xad6 ObjFunc
	var_318_int = 0; // 0xad8 MovI
	
Label_2777:
	var_335_bool = var_318_int < var_317_int; // 0xad9 LT
	if(var_335_bool == 0) goto Label_2800; // 0xada JumpB
	get(var_319_int, var_318_int); // 0xadb ObjFunc
	var_336_bool = 0; // 0xadd PushV
	var_336_bool = 1; // 0xade MovB
	var_337_bool = 0; var_338_int = 0; // 0xadf PushV
	var_338_int = var_319_int; // 0xae0 Mov
	func_2607(var_337_bool, var_338_int); // 0xae1 NEW_2
	if(var_337_bool == 0) goto Label_2794; // 0xae3 JumpB
	var_339_bool = 0; var_340_int = 0; // 0xae4 PushV
	var_340_int = var_319_int; // 0xae5 Mov
	func_2597(var_339_bool, var_340_int); // 0xae6 NEW_2
	if(var_339_bool == 0) goto Label_2794; // 0xae8 JumpB
	var_336_bool = 0; // 0xae9 MovB
	
Label_2794:
	if(var_336_bool == 0) goto Label_2797; // 0xaea JumpB
	var_311_bool = 0; // 0xaeb MovB
	return 8; // 0xaec Return
	
Label_2797:
	var_341_int = 1; // 0xaed PushI
	var_318_int = var_318_int + var_341_int; // 0xaee Add2
	goto Label_2777; // 0xaef Jump
	
Label_2800:
	var_311_bool = 1; // 0xaf0 MovB
	return 8; // 0xaf1 Return
}


func_78(var_913_int, var_914_int)
{
	var_915_int = 5; // 0x4f PushI
	var_916_bool = var_914_int < var_915_int; // 0x50 LT
	if(var_916_bool == 0) goto Label_84; // 0x51 JumpB
	var_913_int = 0; // 0x52 MovI
	return 0; // 0x53 Return
	
Label_84:
	var_913_int = 1; // 0x54 MovI
	return 0; // 0x55 Return
}


func_722(var_213_int)
{
	var_214_int = 0; var_215_int = 0; // 0x2d2 PushV
	size(var_215_int); // 0x2d3 TObjFunc
	var_213_int = var_215_int; // 0x2d5 Mov
	return 2; // 0x2d6 Return
}


func_1108(var_396_bool, var_397_string, var_398_string)
{
	var_399_object = Obj(); var_400_object = Obj(); // 0x454 PushV
	FindActor(var_400_object, var_397_string); // 0x455 Func
	var_401_bool = var_400_object == 0; // 0x457 NullEq
	if(var_401_bool == 0) goto Label_1115; // 0x458 JumpB
	var_396_bool = 0; // 0x459 MovB
	return 2; // 0x45a Return
	
Label_1115:
	Trigger(var_400_object, var_398_string); // 0x45b Func
	var_396_bool = 1; // 0x45d MovB
	return 2; // 0x45e Return
}


func_727(var_19_int, var_20_int)
{
	var_197_int = 0; var_198_int = 0; var_199_int = 0; var_200_int = 0; // 0x2d7 PushV
	var_199_int = 0; // 0x2d8 MovI
	
Label_729:
	var_201_int = 0; // 0x2d9 PushV
	func_722(var_201_int); // 0x2da NEW_2
	var_204_bool = var_199_int < var_201_int; // 0x2dc LT
	if(var_204_bool == 0) goto Label_743; // 0x2dd JumpB
	get(var_200_int, var_199_int); // 0x2de TObjFunc
	var_205_bool = var_20_int == var_200_int; // 0x2e0 Eq
	if(var_205_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_19_int = var_199_int; // 0x2e2 Mov
	return 4; // 0x2e3 Return
	
Label_740:
	var_206_int = 1; // 0x2e4 PushI
	var_199_int = var_199_int + var_206_int; // 0x2e5 Add2
	goto Label_729; // 0x2e6 Jump
	
Label_743:
	var_19_int = -1; // 0x2e7 MovI
	return 4; // 0x2e8 Return
}


func_2648()
{
	var_408_object = Obj(); var_409_object = Obj(); // 0xa58 PushV
	var_410_int = 737; // 0xa59 PushI
	var_411_int = 1; // 0xa5a PushI
	var_412_int = 539367; // 0xa5b PushI
	CreateDiaryEntry(var_409_object, var_410_int, var_411_int, var_412_int); // 0xa5c Func
	var_413_bool = 0; var_414_object = Obj(); var_415_int = 0; // 0xa5e PushV
	var_414_object = var_409_object; // 0xa5f Mov
	var_415_int = 736; // 0xa60 MovI
	func_2674(var_413_bool, var_414_object, var_415_int); // 0xa61 NEW_2
	return 2; // 0xa63 Return
}


func_2140(var_167_bool)
{
	var_169_int = 7; // 0x85d PushI
	add(var_169_int); // 0x85e ObjFunc
	var_170_int = 23; // 0x860 PushI
	add(var_170_int); // 0x861 ObjFunc
	var_171_int = 21; // 0x863 PushI
	add(var_171_int); // 0x864 ObjFunc
	var_172_int = 9; // 0x866 PushI
	add(var_172_int); // 0x867 ObjFunc
	var_173_int = 3; // 0x869 PushI
	add(var_173_int); // 0x86a ObjFunc
	var_174_int = 1; // 0x86c PushI
	add(var_174_int); // 0x86d ObjFunc
	var_175_int = 11; // 0x86f PushI
	add(var_175_int); // 0x870 ObjFunc
	var_176_int = 13; // 0x872 PushI
	add(var_176_int); // 0x873 ObjFunc
	var_177_bool = 0; // 0x875 PushB
	var_178_bool = var_167_bool == var_177_bool; // 0x876 Eq
	if(var_178_bool == 0) goto Label_2171; // 0x877 JumpB
	var_179_int = 25; // 0x878 PushI
	add(var_179_int); // 0x879 ObjFunc
	
Label_2171:
	return 0; // 0x87b Return
}


func_95(var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_251_bool = 0; // 0x5f PushV
	var_251_bool = 0; // 0x60 MovB
	var_252_bool = 0; // 0x61 PushV
	var_252_bool = 0; // 0x62 MovB
	var_253_bool = 0; // 0x63 PushV
	var_253_bool = 0; // 0x64 MovB
	var_254_bool = var_8_bool == 0; // 0x65 Not
	if(var_254_bool == 0) goto Label_109; // 0x66 JumpB
	var_255_bool = 0; var_256_int = 0; // 0x67 PushV
	var_256_int = 12; // 0x68 MovI
	func_1142(var_255_bool, var_256_int); // 0x69 NEW_2
	if(var_255_bool == 0) goto Label_109; // 0x6b JumpB
	var_253_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_253_bool == 0) goto Label_115; // 0x6d JumpB
	var_263_bool = 0; // 0x6e PushV
	func_2841(var_263_bool); // 0x6f NEW_2
	if(var_263_bool == 0) goto Label_115; // 0x71 JumpB
	var_252_bool = 1; // 0x72 MovB
	
Label_115:
	if(var_252_bool == 0) goto Label_123; // 0x73 JumpB
	var_376_int = 0; // 0x74 PushV
	func_1134(var_376_int); // 0x75 NEW_2
	var_381_int = 8; // 0x77 PushI
	var_382_bool = var_376_int >= var_381_int; // 0x78 GE
	if(var_382_bool == 0) goto Label_123; // 0x79 JumpB
	var_251_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_251_bool == 0) goto Label_132; // 0x7b JumpB
	var_383_float = 0; // 0x7c PushV
	var_384_float = 0; // 0x7d PushV
	func_1120(var_384_float); // 0x7e NEW_2
	var_383_float = var_384_float; // 0x7f Mov
	func_6(var_383_float); // 0x81 NEW_2
	var_8_bool = 1; // 0x83 TMovB
	
Label_132:
	var_402_bool = 0; // 0x84 PushV
	var_402_bool = 0; // 0x85 MovB
	var_403_bool = 0; // 0x86 PushV
	var_403_bool = 0; // 0x87 MovB
	var_404_bool = var_9_bool == 0; // 0x88 Not
	if(var_404_bool == 0) goto Label_144; // 0x89 JumpB
	var_405_bool = 0; var_406_int = 0; // 0x8a PushV
	var_406_int = 12; // 0x8b MovI
	func_1142(var_405_bool, var_406_int); // 0x8c NEW_2
	if(var_405_bool == 0) goto Label_144; // 0x8e JumpB
	var_403_bool = 1; // 0x8f MovB
	
Label_144:
	if(var_403_bool == 0) goto Label_150; // 0x90 JumpB
	var_407_bool = 0; // 0x91 PushV
	func_2765(var_407_bool); // 0x92 NEW_2
	if(var_407_bool == 0) goto Label_150; // 0x94 JumpB
	var_402_bool = 1; // 0x95 MovB
	
Label_150:
	if(var_402_bool == 0) goto Label_155; // 0x96 JumpB
	var_9_bool = 1; // 0x97 TMovB
	func_18(); // 0x99 NEW_2
	
Label_155:
	var_431_bool = 0; // 0x9b PushV
	var_431_bool = 0; // 0x9c MovB
	var_432_bool = 0; // 0x9d PushV
	var_432_bool = 0; // 0x9e MovB
	var_433_bool = var_10_bool == 0; // 0x9f Not
	if(var_433_bool == 0) goto Label_167; // 0xa0 JumpB
	var_434_bool = 0; var_435_int = 0; // 0xa1 PushV
	var_435_int = 12; // 0xa2 MovI
	func_1142(var_434_bool, var_435_int); // 0xa3 NEW_2
	if(var_434_bool == 0) goto Label_167; // 0xa5 JumpB
	var_432_bool = 1; // 0xa6 MovB
	
Label_167:
	if(var_432_bool == 0) goto Label_173; // 0xa7 JumpB
	var_436_bool = 0; // 0xa8 PushV
	func_2727(var_436_bool); // 0xa9 NEW_2
	if(var_436_bool == 0) goto Label_173; // 0xab JumpB
	var_431_bool = 1; // 0xac MovB
	
Label_173:
	if(var_431_bool == 0) goto Label_178; // 0xad JumpB
	var_10_bool = 1; // 0xae TMovB
	func_22(); // 0xb0 NEW_2
	
Label_178:
	var_445_bool = 0; // 0xb2 PushV
	var_445_bool = 0; // 0xb3 MovB
	var_446_bool = 0; // 0xb4 PushV
	var_446_bool = 0; // 0xb5 MovB
	var_447_bool = var_11_bool == 0; // 0xb6 Not
	if(var_447_bool == 0) goto Label_190; // 0xb7 JumpB
	var_448_bool = 0; var_449_int = 0; // 0xb8 PushV
	var_449_int = 12; // 0xb9 MovI
	func_1142(var_448_bool, var_449_int); // 0xba NEW_2
	if(var_448_bool == 0) goto Label_190; // 0xbc JumpB
	var_446_bool = 1; // 0xbd MovB
	
Label_190:
	if(var_446_bool == 0) goto Label_196; // 0xbe JumpB
	var_450_bool = 0; // 0xbf PushV
	func_2803(var_450_bool); // 0xc0 NEW_2
	if(var_450_bool == 0) goto Label_196; // 0xc2 JumpB
	var_445_bool = 1; // 0xc3 MovB
	
Label_196:
	if(var_445_bool == 0) goto Label_201; // 0xc4 JumpB
	var_11_bool = 1; // 0xc5 TMovB
	func_17(); // 0xc7 NEW_2
	
Label_201:
	return 0; // 0xc9 Return
}


func_1120(var_384_float)
{
	var_385_float = 0; var_386_float = 0; // 0x460 PushV
	GetGameTime(var_386_float); // 0x461 Func
	var_384_float = var_386_float; // 0x463 Mov
	return 2; // 0x464 Return
}


func_352(var_906_int, var_907_int, var_908_int)
{
	var_917_int = 0; var_918_int = 0; var_919_int = 0; var_920_int = 0; // 0x160 PushV
	var_919_int = 0; // 0x161 MovI
	
Label_354:
	var_921_bool = var_919_int < var_906_int; // 0x162 LT
	if(var_921_bool == 0) goto Label_364; // 0x163 JumpB
	var_922_int = 0; var_923_int = 0; var_924_bool = 0; // 0x164 PushV
	var_923_int = var_908_int; // 0x165 Mov
	var_924_bool = 1; // 0x166 MovB
	func_376(var_922_int, var_923_int, var_924_bool); // 0x167 NEW_2
	var_969_int = 1; // 0x169 PushI
	var_919_int = var_919_int + var_969_int; // 0x16a Add2
	goto Label_354; // 0x16b Jump
	
Label_364:
	var_920_int = 0; // 0x16c MovI
	
Label_365:
	var_970_bool = var_920_int < var_907_int; // 0x16d LT
	if(var_970_bool == 0) goto Label_375; // 0x16e JumpB
	var_971_int = 0; var_972_int = 0; var_973_bool = 0; // 0x16f PushV
	var_972_int = var_908_int; // 0x170 Mov
	var_973_bool = 0; // 0x171 MovB
	func_376(var_971_int, var_972_int, var_973_bool); // 0x172 NEW_2
	var_974_int = 1; // 0x174 PushI
	var_920_int = var_920_int + var_974_int; // 0x175 Add2
	goto Label_365; // 0x176 Jump
	
Label_375:
	return 4; // 0x177 Return
}


func_995(var_522_int)
{
	var_527_int = 0; var_528_object = Obj(); var_529_object = Obj(); var_530_string = ""; var_531_object = Obj(); var_532_int = 0; var_533_int = 0; var_534_string = ""; var_535_int = 0; var_536_object = Obj(); var_537_object = Obj(); var_538_string = ""; var_539_object = Obj(); var_540_int = 0; var_541_int = 0; var_542_string = ""; // 0x3e3 PushV
	var_543_string = ""; var_544_int = 0; // 0x3e4 PushV
	var_544_int = var_522_int; // 0x3e5 Mov
	func_750(var_543_string, var_544_int); // 0x3e6 NEW_2
	var_545_int = 17; // 0x3e8 PushI
	SetVariable(var_543_string, var_545_int); // 0x3e9 Func
	get(var_536_object, var_522_int); // 0x3eb TObjFunc
	var_546_bool = var_536_object == 0; // 0x3ed NullEq
	if(var_546_bool == 0) goto Label_1036; // 0x3ee JumpB
	var_547_object = Obj(); var_548_int = 0; // 0x3ef PushV
	var_548_int = var_522_int; // 0x3f0 Mov
	func_1056(var_547_object, var_548_int); // 0x3f1 NEW_2
	var_537_object = var_547_object; // 0x3f2 Mov
	var_557_string = ""; var_558_int = 0; // 0x3f4 PushV
	var_559_int = 0; var_560_int = 0; // 0x3f5 PushV
	var_560_int = var_522_int; // 0x3f6 Mov
	func_745(var_559_int, var_560_int); // 0x3f7 NEW_2
	var_558_int = var_559_int; // 0x3f8 Mov
	func_1588(var_557_string, var_558_int); // 0x3fa NEW_2
	var_538_string = var_557_string; // 0x3fb Mov
	var_735_object = Obj(); var_736_object = Obj(); var_737_string = ""; var_738_string = ""; var_739_string = ""; // 0x3fd PushV
	var_736_object = var_537_object; // 0x3fe Mov
	var_740_string = "pt_volonteer_"; // 0x3ff PushS
	var_737_string = var_740_string + var_538_string; // 0x400 Add2
	var_738_string = "pers_birdmask"; // 0x401 MovS
	var_741_string = "vbirdmask_"; // 0x402 PushS
	var_742_int = var_741_string + var_538_string; // 0x403 Add
	var_743_string = ".xml"; // 0x404 PushS
	var_739_string = var_742_int + var_743_string; // 0x405 Add2
	func_1090(var_736_object, var_737_string, var_738_string, var_739_string); // 0x406 NEW_2
	var_536_object = var_735_object; // 0x407 Mov
	set(var_522_int, var_536_object); // 0x409 TObjFunc
	var_537_object = 0; // 0x40b SetNull
	
Label_1036:
	get(var_539_object, var_522_int); // 0x40c TObjFunc
	size(var_540_int); // 0x40e ObjFunc
	var_541_int = 0; // 0x410 MovI
	
Label_1041:
	var_757_bool = var_541_int < var_540_int; // 0x411 LT
	if(var_757_bool == 0) goto Label_1053; // 0x412 JumpB
	get(var_542_string, var_541_int); // 0x413 ObjFunc
	var_758_string = ""; var_759_int = 0; // 0x415 PushV
	var_758_string = var_542_string; // 0x416 Mov
	var_759_int = 2; // 0x417 MovI
	func_2710(var_758_string, var_759_int); // 0x418 NEW_2
	var_760_int = 1; // 0x41a PushI
	var_541_int = var_541_int + var_760_int; // 0x41b Add2
	goto Label_1041; // 0x41c Jump
	
Label_1053:
	return 16; // 0x41d Return
}


func_1125(var_257_int)
{
	var_258_float = 0; var_259_float = 0; // 0x465 PushV
	GetGameTime(var_259_float); // 0x466 Func
	var_260_int = 1; // 0x468 PushI
	var_261_int = 0; // 0x469 PushV
	var_262_int = 24; // 0x46a PushI
	var_261_int = var_259_float / var_259_float; // 0x46b Div2
	var_257_int = var_260_int + var_261_int; // 0x46c Add2
	return 2; // 0x46d Return
}


func_2661(var_422_object)
{
	var_423_object = Obj(); var_424_object = Obj(); // 0xa65 PushV
	GetDiaryRoot(var_424_object); // 0xa66 Func
	var_425_bool = var_424_object == 0; // 0xa68 Not
	if(var_425_bool == 0) goto Label_2671; // 0xa69 JumpB
	var_426_string = "Can't retrieve diary root"; // 0xa6a PushS
	Trace(var_426_string); // 0xa6b Func
	var_422_object = 0; // 0xa6d MovB
	return 2; // 0xa6e Return
	
Label_2671:
	var_422_object = var_424_object; // 0xa6f Mov
	return 2; // 0xa70 Return
}


func_745(var_494_int, var_495_int)
{
	var_496_int = 0; var_497_int = 0; // 0x2e9 PushV
	get(var_497_int, var_495_int); // 0x2ea TObjFunc
	var_494_int = var_497_int; // 0x2ec Mov
	return 2; // 0x2ed Return
}


func_2026(var_181_bool, var_182_int)
{
	var_183_int = 18; // 0x7eb PushI
	add(var_183_int); // 0x7ec ObjFunc
	var_184_int = 24; // 0x7ee PushI
	add(var_184_int); // 0x7ef ObjFunc
	var_185_int = 20; // 0x7f1 PushI
	add(var_185_int); // 0x7f2 ObjFunc
	var_186_int = 14; // 0x7f4 PushI
	add(var_186_int); // 0x7f5 ObjFunc
	var_187_bool = 0; // 0x7f7 PushB
	var_188_bool = var_181_bool == var_187_bool; // 0x7f8 Eq
	if(var_188_bool == 0) goto Label_2052; // 0x7f9 JumpB
	var_189_int = 10; // 0x7fa PushI
	add(var_189_int); // 0x7fb ObjFunc
	var_190_int = 17; // 0x7fd PushI
	add(var_190_int); // 0x7fe ObjFunc
	var_191_int = 8; // 0x800 PushI
	add(var_191_int); // 0x801 ObjFunc
	goto Label_2058; // 0x803 Jump
	
Label_2058:
	return 0; // 0x80a Return
	
Label_2052:
	var_192_int = 1; // 0x804 PushI
	var_193_bool = var_182_int != var_192_int; // 0x805 Neq
	if(var_193_bool == 0) goto Label_2058; // 0x806 JumpB
	var_194_int = 10; // 0x807 PushI
	add(var_194_int); // 0x808 ObjFunc
}


func_874(var_453_int)
{
	var_458_int = 0; var_459_object = Obj(); var_460_int = 0; var_461_int = 0; var_462_string = ""; var_463_int = 0; var_464_object = Obj(); var_465_int = 0; var_466_int = 0; var_467_string = ""; // 0x36a PushV
	var_468_string = ""; var_469_int = 0; // 0x36b PushV
	var_469_int = var_453_int; // 0x36c Mov
	func_750(var_468_string, var_469_int); // 0x36d NEW_2
	GetVariable(var_468_string, var_463_int); // 0x36f Func
	var_470_string = ""; var_471_int = 0; // 0x371 PushV
	var_471_int = var_453_int; // 0x372 Mov
	func_750(var_470_string, var_471_int); // 0x373 NEW_2
	var_472_int = 32; // 0x375 PushI
	var_473_int = var_463_int | var_472_int; // 0x376 Or
	SetVariable(var_470_string, var_473_int); // 0x377 Func
	get(var_464_object, var_453_int); // 0x379 TObjFunc
	size(var_465_int); // 0x37b ObjFunc
	var_466_int = 0; // 0x37d MovI
	
Label_894:
	var_474_bool = var_466_int < var_465_int; // 0x37e LT
	if(var_474_bool == 0) goto Label_906; // 0x37f JumpB
	get(var_467_string, var_466_int); // 0x380 ObjFunc
	var_475_string = ""; var_476_int = 0; // 0x382 PushV
	var_475_string = var_467_string; // 0x383 Mov
	var_476_int = 0; // 0x384 MovI
	func_2710(var_475_string, var_476_int); // 0x385 NEW_2
	var_477_int = 1; // 0x387 PushI
	var_466_int = var_466_int + var_477_int; // 0x388 Add2
	goto Label_894; // 0x389 Jump
	
Label_906:
	return 10; // 0x38a Return
}


func_632()
{
	var_1014_int = 0; var_1015_object = Obj(); var_1016_int = 0; var_1017_object = Obj(); // 0x278 PushV
	EventDisable(26); // 0x279 EventDisable
	var_1018_string = "Volonteers Cleanup..."; // 0x27a PushS
	Trace(var_1018_string); // 0x27b Func
	var_1016_int = 0; // 0x27d MovI
	
Label_638:
	var_1019_int = 0; // 0x27e PushV
	func_722(var_1019_int); // 0x27f NEW_2
	var_1020_bool = var_1016_int < var_1019_int; // 0x281 LT
	if(var_1020_bool == 0) goto Label_653; // 0x282 JumpB
	get(var_1017_object, var_1016_int); // 0x283 TObjFunc
	var_1021_bool = var_1017_object != 0; // 0x285 NullNeq
	if(var_1021_bool == 0) goto Label_649; // 0x286 JumpB
	Remove(); // 0x287 ObjFunc
	
Label_649:
	var_1017_object = 0; // 0x289 SetNull
	var_1022_int = 1; // 0x28a PushI
	var_1016_int = var_1016_int + var_1022_int; // 0x28b Add2
	goto Label_638; // 0x28c Jump
	
Label_653:
	return 4; // 0x28d Return
}


func_1134(var_376_int)
{
	var_377_float = 0; var_378_float = 0; // 0x46e PushV
	GetGameTime(var_378_float); // 0x46f Func
	var_379_int = 0; // 0x471 PushV
	var_379_int = var_378_float; // 0x472 Mov
	var_380_int = 24; // 0x473 PushI
	var_376_int = var_379_int % var_380_int; // 0x474 Mod2
	return 2; // 0x475 Return
}


func_750(var_217_string, var_218_int)
{
	var_219_int = 0; var_220_int = 0; // 0x2ee PushV
	get(var_220_int, var_218_int); // 0x2ef TObjFunc
	var_221_string = "vol_"; // 0x2f1 PushS
	var_217_string = var_221_string + var_220_int; // 0x2f2 Add2
	return 2; // 0x2f3 Return
}


func_2674(var_413_bool, var_414_object, var_415_int)
{
	var_416_object = Obj(); var_417_object = Obj(); var_418_int = 0; var_419_object = Obj(); var_420_object = Obj(); var_421_int = 0; // 0xa72 PushV
	var_422_object = Obj(); // 0xa73 PushV
	func_2661(var_422_object); // 0xa74 NEW_2
	var_419_object = var_422_object; // 0xa75 Mov
	Find(var_415_int, var_420_object); // 0xa77 ObjFunc
	var_427_bool = var_420_object == 0; // 0xa79 Not
	if(var_427_bool == 0) goto Label_2689; // 0xa7a JumpB
	var_428_string = "Can't find diary parent with id: "; // 0xa7b PushS
	var_429_int = var_428_string + var_415_int; // 0xa7c Add
	Trace(var_429_int); // 0xa7d Func
	var_413_bool = 0; // 0xa7f MovB
	return 6; // 0xa80 Return
	
Label_2689:
	AddChild(var_414_object); // 0xa81 ObjFunc
	var_430_int = 7; // 0xa83 PushI
	SendWorldWndMessage(var_430_int); // 0xa84 Func
	GetCategory(var_421_int); // 0xa86 ObjFunc
	SetDiarySection(var_421_int); // 0xa88 Func
	var_413_bool = 0; // 0xa8a MovB
	return 6; // 0xa8b Return
}


func_2803(var_266_bool)
{
	var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_int = 0; // 0xaf3 PushV
	CreateIntVector(var_271_object); // 0xaf4 Func
	var_275_object = Obj(); var_276_bool = 0; var_277_int = 0; // 0xaf6 PushV
	var_275_object = var_271_object; // 0xaf7 Mov
	var_276_bool = 0; // 0xaf8 MovB
	var_277_int = -1; // 0xaf9 MovI
	func_2140(var_277_int); // 0xafa NEW_2
	size(var_272_int); // 0xafc ObjFunc
	var_273_int = 0; // 0xafe MovI
	
Label_2815:
	var_289_bool = var_273_int < var_272_int; // 0xaff LT
	if(var_289_bool == 0) goto Label_2838; // 0xb00 JumpB
	get(var_274_int, var_273_int); // 0xb01 ObjFunc
	var_290_bool = 0; // 0xb03 PushV
	var_290_bool = 1; // 0xb04 MovB
	var_291_bool = 0; var_292_int = 0; // 0xb05 PushV
	var_292_int = var_274_int; // 0xb06 Mov
	func_2607(var_291_bool, var_292_int); // 0xb07 NEW_2
	if(var_291_bool == 0) goto Label_2832; // 0xb09 JumpB
	var_300_bool = 0; var_301_int = 0; // 0xb0a PushV
	var_301_int = var_274_int; // 0xb0b Mov
	func_2597(var_300_bool, var_301_int); // 0xb0c NEW_2
	if(var_300_bool == 0) goto Label_2832; // 0xb0e JumpB
	var_290_bool = 0; // 0xb0f MovB
	
Label_2832:
	if(var_290_bool == 0) goto Label_2835; // 0xb10 JumpB
	var_266_bool = 0; // 0xb11 MovB
	return 8; // 0xb12 Return
	
Label_2835:
	var_309_int = 1; // 0xb13 PushI
	var_273_int = var_273_int + var_309_int; // 0xb14 Add2
	goto Label_2815; // 0xb15 Jump
	
Label_2838:
	var_266_bool = 1; // 0xb16 MovB
	return 8; // 0xb17 Return
}


func_756(var_850_bool, var_851_int)
{
	var_852_int = 0; var_853_int = 0; // 0x2f4 PushV
	var_854_string = ""; var_855_int = 0; // 0x2f5 PushV
	var_855_int = var_851_int; // 0x2f6 Mov
	func_750(var_854_string, var_855_int); // 0x2f7 NEW_2
	GetVariable(var_854_string, var_853_int); // 0x2f9 Func
	var_856_int = 32; // 0x2fb PushI
	var_857_int = var_853_int & var_856_int; // 0x2fc And
	var_858_int = 0; // 0x2fd PushI
	var_850_bool = var_857_int != var_858_int; // 0x2fe Neq2
	return 2; // 0x2ff Return
}


func_1142(var_255_bool, var_256_int)
{
	var_257_int = 0; // 0x477 PushV
	func_1125(var_257_int); // 0x478 NEW_2
	var_255_bool = var_257_int == var_256_int; // 0x47a Eq2
	return 0; // 0x47b Return
}


func_376(var_922_int, var_923_int, var_924_bool)
{
	var_925_object = Obj(); var_926_int = 0; var_927_int = 0; var_928_int = 0; var_929_int = 0; var_930_int = 0; var_931_int = 0; var_932_object = Obj(); var_933_int = 0; var_934_int = 0; var_935_int = 0; var_936_int = 0; var_937_int = 0; var_938_int = 0; // 0x178 PushV
	var_939_bool = var_924_bool; // 0x179 Push
	if(var_939_bool == 0) goto Label_382; // 0x17a JumpB
	get(var_932_object, var_923_int); // 0x17b TObjFunc
	goto Label_384; // 0x17d Jump
	
Label_384:
	size(var_933_int); // 0x180 ObjFunc
	var_940_int = 0; // 0x182 PushI
	var_941_bool = var_933_int == var_940_int; // 0x183 Eq
	if(var_941_bool == 0) goto Label_391; // 0x184 JumpB
	var_922_int = -1; // 0x185 MovI
	return 14; // 0x186 Return
	
Label_391:
	var_934_int = 0; // 0x187 MovI
	var_942_int = 1; // 0x188 PushI
	var_943_bool = var_933_int > var_942_int; // 0x189 GT
	if(var_943_bool == 0) goto Label_397; // 0x18a JumpB
	irand(var_934_int, var_933_int); // 0x18b Func
	
Label_397:
	var_935_int = 0; // 0x18d MovI
	
Label_398:
	var_944_bool = var_935_int < var_933_int; // 0x18e LT
	if(var_944_bool == 0) goto Label_423; // 0x18f JumpB
	var_945_int = var_935_int + var_934_int; // 0x190 Add
	var_936_int = var_945_int % var_933_int; // 0x191 Mod2
	get(var_937_int, var_936_int); // 0x192 ObjFunc
	var_946_int = 0; var_947_int = 0; // 0x194 PushV
	var_947_int = var_937_int; // 0x195 Mov
	func_727(var_946_int, var_947_int); // 0x196 NEW_2
	var_938_int = var_946_int; // 0x197 Mov
	var_948_bool = 0; var_949_int = 0; // 0x199 PushV
	var_949_int = var_938_int; // 0x19a Mov
	func_780(var_948_bool, var_949_int); // 0x19b NEW_2
	if(var_948_bool == 0) goto Label_420; // 0x19d JumpB
	var_957_int = 0; // 0x19e PushV
	var_957_int = var_938_int; // 0x19f Mov
	func_1072(var_957_int); // 0x1a0 NEW_2
	var_922_int = var_938_int; // 0x1a2 Mov
	return 14; // 0x1a3 Return
	
Label_420:
	var_968_int = 1; // 0x1a4 PushI
	var_935_int = var_935_int + var_968_int; // 0x1a5 Add2
	goto Label_398; // 0x1a6 Jump
	
Label_423:
	var_922_int = -1; // 0x1a7 MovI
	return 14; // 0x1a8 Return
	
Label_382:
	get(var_932_object, var_923_int); // 0x17e TObjFunc
}


func_2172(var_30_object, var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x87c PushV
	var_34_int = 1; // 0x87d PushI
	add(var_34_int); // 0x87e ObjFunc
	var_35_object = var_30_object; // 0x880 Push
	if(var_35_object == 0) goto Label_2185; // 0x881 JumpB
	CreateStringVector(var_33_object); // 0x882 Func
	var_36_string = "cot_alexandr@door1"; // 0x884 PushS
	add(var_36_string); // 0x885 ObjFunc
	add(var_33_object); // 0x887 ObjFunc
	
Label_2185:
	var_37_object = var_31_object; // 0x889 Push
	if(var_37_object == 0) goto Label_2190; // 0x88a JumpB
	var_38_string = "outdoor"; // 0x88b PushS
	add(var_38_string); // 0x88c ObjFunc
	
Label_2190:
	var_39_int = 2; // 0x88e PushI
	add(var_39_int); // 0x88f ObjFunc
	var_40_object = var_30_object; // 0x891 Push
	if(var_40_object == 0) goto Label_2202; // 0x892 JumpB
	CreateStringVector(var_33_object); // 0x893 Func
	var_41_string = "shouse1_kabak@door1"; // 0x895 PushS
	add(var_41_string); // 0x896 ObjFunc
	add(var_33_object); // 0x898 ObjFunc
	
Label_2202:
	var_42_object = var_31_object; // 0x89a Push
	if(var_42_object == 0) goto Label_2207; // 0x89b JumpB
	var_43_string = "outdoor"; // 0x89c PushS
	add(var_43_string); // 0x89d ObjFunc
	
Label_2207:
	var_44_int = 3; // 0x89f PushI
	add(var_44_int); // 0x8a0 ObjFunc
	var_45_object = var_30_object; // 0x8a2 Push
	if(var_45_object == 0) goto Label_2219; // 0x8a3 JumpB
	CreateStringVector(var_33_object); // 0x8a4 Func
	var_46_string = "cot_anna@door1"; // 0x8a6 PushS
	add(var_46_string); // 0x8a7 ObjFunc
	add(var_33_object); // 0x8a9 ObjFunc
	
Label_2219:
	var_47_object = var_31_object; // 0x8ab Push
	if(var_47_object == 0) goto Label_2224; // 0x8ac JumpB
	var_48_string = "outdoor"; // 0x8ad PushS
	add(var_48_string); // 0x8ae ObjFunc
	
Label_2224:
	var_49_int = 4; // 0x8b0 PushI
	add(var_49_int); // 0x8b1 ObjFunc
	var_50_object = var_30_object; // 0x8b3 Push
	if(var_50_object == 0) goto Label_2236; // 0x8b4 JumpB
	CreateStringVector(var_33_object); // 0x8b5 Func
	var_51_string = "cot_bigvlad@door1"; // 0x8b7 PushS
	add(var_51_string); // 0x8b8 ObjFunc
	add(var_33_object); // 0x8ba ObjFunc
	
Label_2236:
	var_52_object = var_31_object; // 0x8bc Push
	if(var_52_object == 0) goto Label_2241; // 0x8bd JumpB
	var_53_string = "outdoor"; // 0x8be PushS
	add(var_53_string); // 0x8bf ObjFunc
	
Label_2241:
	var_54_int = 6; // 0x8c1 PushI
	add(var_54_int); // 0x8c2 ObjFunc
	var_55_object = var_30_object; // 0x8c4 Push
	if(var_55_object == 0) goto Label_2253; // 0x8c5 JumpB
	CreateStringVector(var_33_object); // 0x8c6 Func
	var_56_string = "cot_georg@door1"; // 0x8c8 PushS
	add(var_56_string); // 0x8c9 ObjFunc
	add(var_33_object); // 0x8cb ObjFunc
	
Label_2253:
	var_57_object = var_31_object; // 0x8cd Push
	if(var_57_object == 0) goto Label_2258; // 0x8ce JumpB
	var_58_string = "outdoor"; // 0x8cf PushS
	add(var_58_string); // 0x8d0 ObjFunc
	
Label_2258:
	var_59_int = 15; // 0x8d2 PushI
	add(var_59_int); // 0x8d3 ObjFunc
	var_60_object = var_30_object; // 0x8d5 Push
	if(var_60_object == 0) goto Label_2270; // 0x8d6 JumpB
	CreateStringVector(var_33_object); // 0x8d7 Func
	var_61_string = "cot_maria@door1"; // 0x8d9 PushS
	add(var_61_string); // 0x8da ObjFunc
	add(var_33_object); // 0x8dc ObjFunc
	
Label_2270:
	var_62_object = var_31_object; // 0x8de Push
	if(var_62_object == 0) goto Label_2275; // 0x8df JumpB
	var_63_string = "outdoor"; // 0x8e0 PushS
	add(var_63_string); // 0x8e1 ObjFunc
	
Label_2275:
	var_64_int = 9; // 0x8e3 PushI
	add(var_64_int); // 0x8e4 ObjFunc
	var_65_object = var_30_object; // 0x8e6 Push
	if(var_65_object == 0) goto Label_2287; // 0x8e7 JumpB
	CreateStringVector(var_33_object); // 0x8e8 Func
	var_66_string = "cot_julia@door1"; // 0x8ea PushS
	add(var_66_string); // 0x8eb ObjFunc
	add(var_33_object); // 0x8ed ObjFunc
	
Label_2287:
	var_67_object = var_31_object; // 0x8ef Push
	if(var_67_object == 0) goto Label_2292; // 0x8f0 JumpB
	var_68_string = "outdoor"; // 0x8f1 PushS
	add(var_68_string); // 0x8f2 ObjFunc
	
Label_2292:
	var_69_int = 10; // 0x8f4 PushI
	add(var_69_int); // 0x8f5 ObjFunc
	var_70_object = var_30_object; // 0x8f7 Push
	if(var_70_object == 0) goto Label_2304; // 0x8f8 JumpB
	CreateStringVector(var_33_object); // 0x8f9 Func
	var_71_string = "cot_kapella@door1"; // 0x8fb PushS
	add(var_71_string); // 0x8fc ObjFunc
	add(var_33_object); // 0x8fe ObjFunc
	
Label_2304:
	var_72_object = var_31_object; // 0x900 Push
	if(var_72_object == 0) goto Label_2309; // 0x901 JumpB
	var_73_string = "outdoor"; // 0x902 PushS
	add(var_73_string); // 0x903 ObjFunc
	
Label_2309:
	var_74_int = 11; // 0x905 PushI
	add(var_74_int); // 0x906 ObjFunc
	var_75_object = var_30_object; // 0x908 Push
	if(var_75_object == 0) goto Label_2321; // 0x909 JumpB
	CreateStringVector(var_33_object); // 0x90a Func
	var_76_string = "cot_katerina@door1"; // 0x90c PushS
	add(var_76_string); // 0x90d ObjFunc
	add(var_33_object); // 0x90f ObjFunc
	
Label_2321:
	var_77_object = var_31_object; // 0x911 Push
	if(var_77_object == 0) goto Label_2326; // 0x912 JumpB
	var_78_string = "outdoor"; // 0x913 PushS
	add(var_78_string); // 0x914 ObjFunc
	
Label_2326:
	var_79_int = 13; // 0x916 PushI
	add(var_79_int); // 0x917 ObjFunc
	var_80_object = var_30_object; // 0x919 Push
	if(var_80_object == 0) goto Label_2338; // 0x91a JumpB
	CreateStringVector(var_33_object); // 0x91b Func
	var_81_string = "cot_lara@door1"; // 0x91d PushS
	add(var_81_string); // 0x91e ObjFunc
	add(var_33_object); // 0x920 ObjFunc
	
Label_2338:
	var_82_object = var_31_object; // 0x922 Push
	if(var_82_object == 0) goto Label_2343; // 0x923 JumpB
	var_83_string = "outdoor"; // 0x924 PushS
	add(var_83_string); // 0x925 ObjFunc
	
Label_2343:
	var_84_int = 18; // 0x927 PushI
	add(var_84_int); // 0x928 ObjFunc
	var_85_object = var_30_object; // 0x92a Push
	if(var_85_object == 0) goto Label_2355; // 0x92b JumpB
	CreateStringVector(var_33_object); // 0x92c Func
	var_86_string = "vagon_mishka@door1"; // 0x92e PushS
	add(var_86_string); // 0x92f ObjFunc
	add(var_33_object); // 0x931 ObjFunc
	
Label_2355:
	var_87_object = var_31_object; // 0x933 Push
	if(var_87_object == 0) goto Label_2360; // 0x934 JumpB
	var_88_string = "outdoor"; // 0x935 PushS
	add(var_88_string); // 0x936 ObjFunc
	
Label_2360:
	var_89_int = 19; // 0x938 PushI
	add(var_89_int); // 0x939 ObjFunc
	var_90_object = var_30_object; // 0x93b Push
	if(var_90_object == 0) goto Label_2372; // 0x93c JumpB
	CreateStringVector(var_33_object); // 0x93d Func
	var_91_string = "house_vlad@door1"; // 0x93f PushS
	add(var_91_string); // 0x940 ObjFunc
	add(var_33_object); // 0x942 ObjFunc
	
Label_2372:
	var_92_object = var_31_object; // 0x944 Push
	if(var_92_object == 0) goto Label_2377; // 0x945 JumpB
	var_93_string = "outdoor"; // 0x946 PushS
	add(var_93_string); // 0x947 ObjFunc
	
Label_2377:
	var_94_int = 20; // 0x949 PushI
	add(var_94_int); // 0x94a ObjFunc
	var_95_object = var_30_object; // 0x94c Push
	if(var_95_object == 0) goto Label_2389; // 0x94d JumpB
	CreateStringVector(var_33_object); // 0x94e Func
	var_96_string = "warehouse_notkin@door1"; // 0x950 PushS
	add(var_96_string); // 0x951 ObjFunc
	add(var_33_object); // 0x953 ObjFunc
	
Label_2389:
	var_97_object = var_31_object; // 0x955 Push
	if(var_97_object == 0) goto Label_2394; // 0x956 JumpB
	var_98_string = "outdoor"; // 0x957 PushS
	add(var_98_string); // 0x958 ObjFunc
	
Label_2394:
	var_99_int = 21; // 0x95a PushI
	add(var_99_int); // 0x95b ObjFunc
	var_100_object = var_30_object; // 0x95d Push
	if(var_100_object == 0) goto Label_2406; // 0x95e JumpB
	CreateStringVector(var_33_object); // 0x95f Func
	var_101_string = "dt_house_1_04@door1"; // 0x961 PushS
	add(var_101_string); // 0x962 ObjFunc
	add(var_33_object); // 0x964 ObjFunc
	
Label_2406:
	var_102_object = var_31_object; // 0x966 Push
	if(var_102_object == 0) goto Label_2411; // 0x967 JumpB
	var_103_string = "outdoor"; // 0x968 PushS
	add(var_103_string); // 0x969 ObjFunc
	
Label_2411:
	var_104_int = 22; // 0x96b PushI
	add(var_104_int); // 0x96c ObjFunc
	var_105_object = var_30_object; // 0x96e Push
	if(var_105_object == 0) goto Label_2426; // 0x96f JumpB
	CreateStringVector(var_33_object); // 0x970 Func
	var_106_string = "house_petr@door1"; // 0x972 PushS
	add(var_106_string); // 0x973 ObjFunc
	var_107_string = "house_petr@door2"; // 0x975 PushS
	add(var_107_string); // 0x976 ObjFunc
	add(var_33_object); // 0x978 ObjFunc
	
Label_2426:
	var_108_object = var_31_object; // 0x97a Push
	if(var_108_object == 0) goto Label_2431; // 0x97b JumpB
	var_109_string = "outdoor"; // 0x97c PushS
	add(var_109_string); // 0x97d ObjFunc
	
Label_2431:
	var_110_int = 24; // 0x97f PushI
	add(var_110_int); // 0x980 ObjFunc
	var_111_object = var_30_object; // 0x982 Push
	if(var_111_object == 0) goto Label_2446; // 0x983 JumpB
	CreateStringVector(var_33_object); // 0x984 Func
	var_112_string = "house_spi4ka@door1"; // 0x986 PushS
	add(var_112_string); // 0x987 ObjFunc
	var_113_string = "house_spi4ka@door2"; // 0x989 PushS
	add(var_113_string); // 0x98a ObjFunc
	add(var_33_object); // 0x98c ObjFunc
	
Label_2446:
	var_114_object = var_31_object; // 0x98e Push
	if(var_114_object == 0) goto Label_2451; // 0x98f JumpB
	var_115_string = "outdoor"; // 0x990 PushS
	add(var_115_string); // 0x991 ObjFunc
	
Label_2451:
	var_116_int = 26; // 0x993 PushI
	add(var_116_int); // 0x994 ObjFunc
	var_117_object = var_30_object; // 0x996 Push
	if(var_117_object == 0) goto Label_2463; // 0x997 JumpB
	CreateStringVector(var_33_object); // 0x998 Func
	var_118_string = "cot_viktor@door1"; // 0x99a PushS
	add(var_118_string); // 0x99b ObjFunc
	add(var_33_object); // 0x99d ObjFunc
	
Label_2463:
	var_119_object = var_31_object; // 0x99f Push
	if(var_119_object == 0) goto Label_2468; // 0x9a0 JumpB
	var_120_string = "outdoor"; // 0x9a1 PushS
	add(var_120_string); // 0x9a2 ObjFunc
	
Label_2468:
	var_121_int = 8; // 0x9a4 PushI
	add(var_121_int); // 0x9a5 ObjFunc
	var_122_object = var_30_object; // 0x9a7 Push
	if(var_122_object == 0) goto Label_2477; // 0x9a8 JumpB
	CreateStringVector(var_33_object); // 0x9a9 Func
	add(var_33_object); // 0x9ab ObjFunc
	
Label_2477:
	var_123_object = var_31_object; // 0x9ad Push
	if(var_123_object == 0) goto Label_2482; // 0x9ae JumpB
	var_124_string = "outdoor"; // 0x9af PushS
	add(var_124_string); // 0x9b0 ObjFunc
	
Label_2482:
	var_125_int = 14; // 0x9b2 PushI
	add(var_125_int); // 0x9b3 ObjFunc
	var_126_object = var_30_object; // 0x9b5 Push
	if(var_126_object == 0) goto Label_2494; // 0x9b6 JumpB
	CreateStringVector(var_33_object); // 0x9b7 Func
	var_127_string = "storojka@door1"; // 0x9b9 PushS
	add(var_127_string); // 0x9ba ObjFunc
	add(var_33_object); // 0x9bc ObjFunc
	
Label_2494:
	var_128_object = var_31_object; // 0x9be Push
	if(var_128_object == 0) goto Label_2499; // 0x9bf JumpB
	var_129_string = "outdoor"; // 0x9c0 PushS
	add(var_129_string); // 0x9c1 ObjFunc
	
Label_2499:
	var_130_int = 17; // 0x9c3 PushI
	add(var_130_int); // 0x9c4 ObjFunc
	var_131_object = var_30_object; // 0x9c6 Push
	if(var_131_object == 0) goto Label_2511; // 0x9c7 JumpB
	CreateStringVector(var_33_object); // 0x9c8 Func
	var_132_string = "termitnik_mat@door1"; // 0x9ca PushS
	add(var_132_string); // 0x9cb ObjFunc
	add(var_33_object); // 0x9cd ObjFunc
	
Label_2511:
	var_133_object = var_31_object; // 0x9cf Push
	if(var_133_object == 0) goto Label_2516; // 0x9d0 JumpB
	var_134_string = "termitnik"; // 0x9d1 PushS
	add(var_134_string); // 0x9d2 ObjFunc
	
Label_2516:
	var_135_int = 16; // 0x9d4 PushI
	add(var_135_int); // 0x9d5 ObjFunc
	var_136_object = var_30_object; // 0x9d7 Push
	if(var_136_object == 0) goto Label_2525; // 0x9d8 JumpB
	CreateStringVector(var_33_object); // 0x9d9 Func
	add(var_33_object); // 0x9db ObjFunc
	
Label_2525:
	var_137_object = var_31_object; // 0x9dd Push
	if(var_137_object == 0) goto Label_2530; // 0x9de JumpB
	var_138_string = "outdoor"; // 0x9df PushS
	add(var_138_string); // 0x9e0 ObjFunc
	
Label_2530:
	var_139_int = 7; // 0x9e2 PushI
	add(var_139_int); // 0x9e3 ObjFunc
	var_140_object = var_30_object; // 0x9e5 Push
	if(var_140_object == 0) goto Label_2542; // 0x9e6 JumpB
	CreateStringVector(var_33_object); // 0x9e7 Func
	var_141_string = "warehouse_grif@door1"; // 0x9e9 PushS
	add(var_141_string); // 0x9ea ObjFunc
	add(var_33_object); // 0x9ec ObjFunc
	
Label_2542:
	var_142_object = var_31_object; // 0x9ee Push
	if(var_142_object == 0) goto Label_2547; // 0x9ef JumpB
	var_143_string = "outdoor"; // 0x9f0 PushS
	add(var_143_string); // 0x9f1 ObjFunc
	
Label_2547:
	var_144_int = 23; // 0x9f3 PushI
	add(var_144_int); // 0x9f4 ObjFunc
	var_145_object = var_30_object; // 0x9f6 Push
	if(var_145_object == 0) goto Label_2559; // 0x9f7 JumpB
	CreateStringVector(var_33_object); // 0x9f8 Func
	var_146_string = "warehouse_rubin@door1"; // 0x9fa PushS
	add(var_146_string); // 0x9fb ObjFunc
	add(var_33_object); // 0x9fd ObjFunc
	
Label_2559:
	var_147_object = var_31_object; // 0x9ff Push
	if(var_147_object == 0) goto Label_2564; // 0xa00 JumpB
	var_148_string = "outdoor"; // 0xa01 PushS
	add(var_148_string); // 0xa02 ObjFunc
	
Label_2564:
	var_149_int = 5; // 0xa04 PushI
	add(var_149_int); // 0xa05 ObjFunc
	var_150_object = var_30_object; // 0xa07 Push
	if(var_150_object == 0) goto Label_2576; // 0xa08 JumpB
	CreateStringVector(var_33_object); // 0xa09 Func
	var_151_string = "cot_eva@door1"; // 0xa0b PushS
	add(var_151_string); // 0xa0c ObjFunc
	add(var_33_object); // 0xa0e ObjFunc
	
Label_2576:
	var_152_object = var_31_object; // 0xa10 Push
	if(var_152_object == 0) goto Label_2581; // 0xa11 JumpB
	var_153_string = "outdoor"; // 0xa12 PushS
	add(var_153_string); // 0xa13 ObjFunc
	
Label_2581:
	var_154_int = 25; // 0xa15 PushI
	add(var_154_int); // 0xa16 ObjFunc
	var_155_object = var_30_object; // 0xa18 Push
	if(var_155_object == 0) goto Label_2590; // 0xa19 JumpB
	CreateStringVector(var_33_object); // 0xa1a Func
	add(var_33_object); // 0xa1c ObjFunc
	
Label_2590:
	var_156_object = var_31_object; // 0xa1e Push
	if(var_156_object == 0) goto Label_2595; // 0xa1f JumpB
	var_157_string = "outdoor"; // 0xa20 PushS
	add(var_157_string); // 0xa21 ObjFunc
	
Label_2595:
	return 2; // 0xa23 Return
}


