task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string, var_13_string)
{
	var_14_int = 0; var_15_int = 0; // 0xd1 PushV
	Trace(var_12_string); // 0xd2 Func
	var_16_string = "rescue"; // 0xd4 PushS
	var_17_bool = var_12_string == var_16_string; // 0xd5 Eq
	if(var_17_bool == 0) goto Label_231; // 0xd6 JumpB
	var_18_int = 0; // 0xd7 PushV
	var_19_int = 0; var_20_int = 0; // 0xd8 PushV
	var_21_int = 0; var_22_string = ""; // 0xd9 PushV
	var_22_string = var_13_string; // 0xda Mov
	func_1155(var_21_int, var_22_string); // 0xdb NEW_2
	var_20_int = var_21_int; // 0xdc Mov
	func_734(var_19_int, var_20_int); // 0xde NEW_2
	var_18_int = var_19_int; // 0xdf Mov
	func_951(var_18_int); // 0xe1 NEW_2
	func_102(var_12_string, var_13_string, var_14_int, var_15_int); // 0xe4 NEW_2
	goto Label_358; // 0xe6 Jump
	
Label_358:
	return 2; // 0x166 Return
	
Label_231:
	var_447_string = "rescue_oneday"; // 0xe7 PushS
	var_448_bool = var_12_string == var_447_string; // 0xe8 Eq
	if(var_448_bool == 0) goto Label_247; // 0xe9 JumpB
	var_449_int = 0; // 0xea PushV
	var_450_int = 0; var_451_int = 0; // 0xeb PushV
	var_452_int = 0; var_453_string = ""; // 0xec PushV
	var_453_string = var_13_string; // 0xed Mov
	func_1155(var_452_int, var_453_string); // 0xee NEW_2
	var_451_int = var_452_int; // 0xef Mov
	func_734(var_450_int, var_451_int); // 0xf1 NEW_2
	var_449_int = var_450_int; // 0xf2 Mov
	func_881(var_449_int); // 0xf4 NEW_2
	goto Label_358; // 0xf6 Jump
	
Label_247:
	var_474_string = "rescue_locked"; // 0xf7 PushS
	var_475_bool = var_12_string == var_474_string; // 0xf8 Eq
	if(var_475_bool == 0) goto Label_285; // 0xf9 JumpB
	var_15_int = 0; // 0xfa MovI
	
Label_251:
	var_476_int = 0; // 0xfb PushV
	func_729(var_476_int); // 0xfc NEW_2
	var_477_bool = var_15_int < var_476_int; // 0xfe LT
	if(var_477_bool == 0) goto Label_281; // 0xff JumpB
	var_478_bool = 0; // 0x100 PushV
	var_478_bool = 0; // 0x101 MovB
	var_479_bool = 0; var_480_int = 0; // 0x102 PushV
	var_480_int = var_15_int; // 0x103 Mov
	func_775(var_479_bool, var_480_int); // 0x104 NEW_2
	if(var_479_bool == 0) goto Label_273; // 0x106 JumpB
	var_488_bool = 0; var_489_int = 0; // 0x107 PushV
	var_490_int = 0; var_491_int = 0; // 0x108 PushV
	var_491_int = var_15_int; // 0x109 Mov
	func_752(var_490_int, var_491_int); // 0x10a NEW_2
	var_489_int = var_490_int; // 0x10b Mov
	func_26(var_488_bool, var_489_int); // 0x10d NEW_2
	if(var_488_bool == 0) goto Label_273; // 0x10f JumpB
	var_478_bool = 1; // 0x110 MovB
	
Label_273:
	if(var_478_bool == 0) goto Label_278; // 0x111 JumpB
	var_510_int = 0; // 0x112 PushV
	var_510_int = var_15_int; // 0x113 Mov
	func_951(var_510_int); // 0x114 NEW_2
	
Label_278:
	var_511_int = 1; // 0x116 PushI
	var_15_int = var_15_int + var_511_int; // 0x117 Add2
	goto Label_251; // 0x118 Jump
	
Label_281:
	func_102(var_12_string, var_13_string, var_14_int, var_15_int); // 0x11a NEW_2
	goto Label_358; // 0x11c Jump
	
Label_285:
	var_512_string = "kill"; // 0x11d PushS
	var_513_bool = var_12_string == var_512_string; // 0x11e Eq
	if(var_513_bool == 0) goto Label_301; // 0x11f JumpB
	var_514_int = 0; // 0x120 PushV
	var_515_int = 0; var_516_int = 0; // 0x121 PushV
	var_517_int = 0; var_518_string = ""; // 0x122 PushV
	var_518_string = var_13_string; // 0x123 Mov
	func_1155(var_517_int, var_518_string); // 0x124 NEW_2
	var_516_int = var_517_int; // 0x125 Mov
	func_734(var_515_int, var_516_int); // 0x127 NEW_2
	var_514_int = var_515_int; // 0x128 Mov
	func_1002(var_514_int); // 0x12a NEW_2
	goto Label_358; // 0x12c Jump
	
Label_301:
	var_749_string = "disease"; // 0x12d PushS
	var_750_bool = var_12_string == var_749_string; // 0x12e Eq
	if(var_750_bool == 0) goto Label_317; // 0x12f JumpB
	var_751_int = 0; // 0x130 PushV
	var_752_int = 0; var_753_int = 0; // 0x131 PushV
	var_754_int = 0; var_755_string = ""; // 0x132 PushV
	var_755_string = var_13_string; // 0x133 Mov
	func_1155(var_754_int, var_755_string); // 0x134 NEW_2
	var_753_int = var_754_int; // 0x135 Mov
	func_734(var_752_int, var_753_int); // 0x137 NEW_2
	var_751_int = var_752_int; // 0x138 Mov
	func_811(var_751_int); // 0x13a NEW_2
	goto Label_358; // 0x13c Jump
	
Label_317:
	var_800_string = "update"; // 0x13d PushS
	var_801_bool = var_12_string == var_800_string; // 0x13e Eq
	if(var_801_bool == 0) goto Label_324; // 0x13f JumpB
	func_433(var_15_int); // 0x141 NEW_2
	goto Label_358; // 0x143 Jump
	
Label_324:
	var_1003_string = "cleanup"; // 0x144 PushS
	var_1004_bool = var_12_string == var_1003_string; // 0x145 Eq
	if(var_1004_bool == 0) goto Label_331; // 0x146 JumpB
	func_639(); // 0x148 NEW_2
	goto Label_358; // 0x14a Jump
	
Label_331:
	var_1014_string = "childs_letter"; // 0x14b PushS
	var_1015_bool = var_12_string == var_1014_string; // 0x14c Eq
	if(var_1015_bool == 0) goto Label_345; // 0x14d JumpB
	var_1016_bool = var_8_bool == 0; // 0x14e Not
	if(var_1016_bool == 0) goto Label_344; // 0x14f JumpB
	var_1017_float = 0; // 0x150 PushV
	var_1018_float = 0; // 0x151 PushV
	func_1127(var_1018_float); // 0x152 NEW_2
	var_1017_float = var_1018_float; // 0x153 Mov
	func_6(var_1017_float); // 0x155 NEW_2
	var_8_bool = 1; // 0x157 TMovB
	
Label_344:
	goto Label_358; // 0x158 Jump
	
Label_345:
	var_1019_string = "theater_letter"; // 0x159 PushS
	var_1020_bool = var_12_string == var_1019_string; // 0x15a Eq
	if(var_1020_bool == 0) goto Label_358; // 0x15b JumpB
	var_1021_bool = var_7_bool == 0; // 0x15c Not
	if(var_1021_bool == 0) goto Label_358; // 0x15d JumpB
	var_1022_float = 0; // 0x15e PushV
	var_1023_float = 0; // 0x15f PushV
	func_1127(var_1023_float); // 0x160 NEW_2
	var_1022_float = var_1023_float; // 0x161 Mov
	func_0(var_1022_float); // 0x163 NEW_2
	var_7_bool = 1; // 0x165 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_661(var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool); // 0x5e NEW_2
	var_7_bool = 0; // 0x60 TMovB
	var_8_bool = 0; // 0x61 TMovB
	
Label_98:
	Hold(); // 0x62 Func
	goto Label_98; // 0x64 Jump
}


func_0(var_1022_float)
{
	var_1024_int = 0; var_1025_float = 0; // 0x1 PushV
	var_1025_float = var_1022_float; // 0x2 Mov
	func_2603(var_1024_int, var_1025_float); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_2818(var_259_bool)
{
	var_260_int = 0; var_261_int = 0; // 0xb02 PushV
	var_261_int = 0; // 0xb03 MovI
	var_262_bool = 0; // 0xb04 PushV
	func_2780(var_262_bool); // 0xb05 NEW_2
	if(var_262_bool == 0) goto Label_2826; // 0xb07 JumpB
	var_306_int = 1; // 0xb08 PushI
	var_261_int = var_261_int + var_306_int; // 0xb09 Add2
	
Label_2826:
	var_307_bool = 0; // 0xb0a PushV
	func_2742(var_307_bool); // 0xb0b NEW_2
	if(var_307_bool == 0) goto Label_2832; // 0xb0d JumpB
	var_338_int = 1; // 0xb0e PushI
	var_261_int = var_261_int + var_338_int; // 0xb0f Add2
	
Label_2832:
	var_339_bool = 0; // 0xb10 PushV
	func_2704(var_339_bool); // 0xb11 NEW_2
	if(var_339_bool == 0) goto Label_2838; // 0xb13 JumpB
	var_370_int = 1; // 0xb14 PushI
	var_261_int = var_261_int + var_370_int; // 0xb15 Add2
	
Label_2838:
	var_371_int = 2; // 0xb16 PushI
	var_259_bool = var_261_int >= var_371_int; // 0xb17 GE2
	return 2; // 0xb18 Return
}


func_2051(var_167_bool, var_168_int)
{
	var_169_int = 18; // 0x804 PushI
	add(var_169_int); // 0x805 ObjFunc
	var_170_int = 24; // 0x807 PushI
	add(var_170_int); // 0x808 ObjFunc
	var_171_int = 20; // 0x80a PushI
	add(var_171_int); // 0x80b ObjFunc
	var_172_int = 14; // 0x80d PushI
	add(var_172_int); // 0x80e ObjFunc
	var_173_bool = 0; // 0x810 PushB
	var_174_bool = var_167_bool == var_173_bool; // 0x811 Eq
	if(var_174_bool == 0) goto Label_2077; // 0x812 JumpB
	var_175_int = 10; // 0x813 PushI
	add(var_175_int); // 0x814 ObjFunc
	var_176_int = 17; // 0x816 PushI
	add(var_176_int); // 0x817 ObjFunc
	var_177_int = 8; // 0x819 PushI
	add(var_177_int); // 0x81a ObjFunc
	goto Label_2083; // 0x81c Jump
	
Label_2083:
	return 0; // 0x823 Return
	
Label_2077:
	var_178_int = 1; // 0x81d PushI
	var_179_bool = var_168_int != var_178_int; // 0x81e Neq
	if(var_179_bool == 0) goto Label_2083; // 0x81f JumpB
	var_180_int = 10; // 0x820 PushI
	add(var_180_int); // 0x821 ObjFunc
}


func_1155(var_21_int, var_22_string)
{
	_strlwr(var_22_string); // 0x484 Func
	var_23_string = "alexandr"; // 0x486 PushS
	var_24_bool = var_22_string == var_23_string; // 0x487 Eq
	if(var_24_bool == 0) goto Label_1163; // 0x488 JumpB
	var_21_int = 1; // 0x489 MovI
	return 0; // 0x48a Return
	
Label_1163:
	var_25_string = "andrei"; // 0x48b PushS
	var_26_bool = var_22_string == var_25_string; // 0x48c Eq
	if(var_26_bool == 0) goto Label_1168; // 0x48d JumpB
	var_21_int = 2; // 0x48e MovI
	return 0; // 0x48f Return
	
Label_1168:
	var_27_string = "anna"; // 0x490 PushS
	var_28_bool = var_22_string == var_27_string; // 0x491 Eq
	if(var_28_bool == 0) goto Label_1173; // 0x492 JumpB
	var_21_int = 3; // 0x493 MovI
	return 0; // 0x494 Return
	
Label_1173:
	var_29_string = "bigvlad"; // 0x495 PushS
	var_30_bool = var_22_string == var_29_string; // 0x496 Eq
	if(var_30_bool == 0) goto Label_1178; // 0x497 JumpB
	var_21_int = 4; // 0x498 MovI
	return 0; // 0x499 Return
	
Label_1178:
	var_31_string = "eva"; // 0x49a PushS
	var_32_bool = var_22_string == var_31_string; // 0x49b Eq
	if(var_32_bool == 0) goto Label_1183; // 0x49c JumpB
	var_21_int = 5; // 0x49d MovI
	return 0; // 0x49e Return
	
Label_1183:
	var_33_string = "georg"; // 0x49f PushS
	var_34_bool = var_22_string == var_33_string; // 0x4a0 Eq
	if(var_34_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_21_int = 6; // 0x4a2 MovI
	return 0; // 0x4a3 Return
	
Label_1188:
	var_35_string = "grif"; // 0x4a4 PushS
	var_36_bool = var_22_string == var_35_string; // 0x4a5 Eq
	if(var_36_bool == 0) goto Label_1193; // 0x4a6 JumpB
	var_21_int = 7; // 0x4a7 MovI
	return 0; // 0x4a8 Return
	
Label_1193:
	var_37_string = "han"; // 0x4a9 PushS
	var_38_bool = var_22_string == var_37_string; // 0x4aa Eq
	if(var_38_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_21_int = 8; // 0x4ac MovI
	return 0; // 0x4ad Return
	
Label_1198:
	var_39_string = "julia"; // 0x4ae PushS
	var_40_bool = var_22_string == var_39_string; // 0x4af Eq
	if(var_40_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_21_int = 9; // 0x4b1 MovI
	return 0; // 0x4b2 Return
	
Label_1203:
	var_41_string = "kapella"; // 0x4b3 PushS
	var_42_bool = var_22_string == var_41_string; // 0x4b4 Eq
	if(var_42_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_21_int = 10; // 0x4b6 MovI
	return 0; // 0x4b7 Return
	
Label_1208:
	var_43_string = "katerina"; // 0x4b8 PushS
	var_44_bool = var_22_string == var_43_string; // 0x4b9 Eq
	if(var_44_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_21_int = 11; // 0x4bb MovI
	return 0; // 0x4bc Return
	
Label_1213:
	var_45_string = "klara"; // 0x4bd PushS
	var_46_bool = var_22_string == var_45_string; // 0x4be Eq
	if(var_46_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_21_int = 12; // 0x4c0 MovI
	return 0; // 0x4c1 Return
	
Label_1218:
	var_47_string = "lara"; // 0x4c2 PushS
	var_48_bool = var_22_string == var_47_string; // 0x4c3 Eq
	if(var_48_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_21_int = 13; // 0x4c5 MovI
	return 0; // 0x4c6 Return
	
Label_1223:
	var_49_string = "laska"; // 0x4c7 PushS
	var_50_bool = var_22_string == var_49_string; // 0x4c8 Eq
	if(var_50_bool == 0) goto Label_1228; // 0x4c9 JumpB
	var_21_int = 14; // 0x4ca MovI
	return 0; // 0x4cb Return
	
Label_1228:
	var_51_string = "maria"; // 0x4cc PushS
	var_52_bool = var_22_string == var_51_string; // 0x4cd Eq
	if(var_52_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_21_int = 15; // 0x4cf MovI
	return 0; // 0x4d0 Return
	
Label_1233:
	var_53_string = "mark"; // 0x4d1 PushS
	var_54_bool = var_22_string == var_53_string; // 0x4d2 Eq
	if(var_54_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_21_int = 16; // 0x4d4 MovI
	return 0; // 0x4d5 Return
	
Label_1238:
	var_55_string = "mat"; // 0x4d6 PushS
	var_56_bool = var_22_string == var_55_string; // 0x4d7 Eq
	if(var_56_bool == 0) goto Label_1243; // 0x4d8 JumpB
	var_21_int = 17; // 0x4d9 MovI
	return 0; // 0x4da Return
	
Label_1243:
	var_57_string = "mishka"; // 0x4db PushS
	var_58_bool = var_22_string == var_57_string; // 0x4dc Eq
	if(var_58_bool == 0) goto Label_1248; // 0x4dd JumpB
	var_21_int = 18; // 0x4de MovI
	return 0; // 0x4df Return
	
Label_1248:
	var_59_string = "mladvlad"; // 0x4e0 PushS
	var_60_bool = var_22_string == var_59_string; // 0x4e1 Eq
	if(var_60_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_21_int = 19; // 0x4e3 MovI
	return 0; // 0x4e4 Return
	
Label_1253:
	var_61_string = "notkin"; // 0x4e5 PushS
	var_62_bool = var_22_string == var_61_string; // 0x4e6 Eq
	if(var_62_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_21_int = 20; // 0x4e8 MovI
	return 0; // 0x4e9 Return
	
Label_1258:
	var_63_string = "ospina"; // 0x4ea PushS
	var_64_bool = var_22_string == var_63_string; // 0x4eb Eq
	if(var_64_bool == 0) goto Label_1263; // 0x4ec JumpB
	var_21_int = 21; // 0x4ed MovI
	return 0; // 0x4ee Return
	
Label_1263:
	var_65_string = "petr"; // 0x4ef PushS
	var_66_bool = var_22_string == var_65_string; // 0x4f0 Eq
	if(var_66_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_21_int = 22; // 0x4f2 MovI
	return 0; // 0x4f3 Return
	
Label_1268:
	var_67_string = "rubin"; // 0x4f4 PushS
	var_68_bool = var_22_string == var_67_string; // 0x4f5 Eq
	if(var_68_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_21_int = 23; // 0x4f7 MovI
	return 0; // 0x4f8 Return
	
Label_1273:
	var_69_string = "spi4ka"; // 0x4f9 PushS
	var_70_bool = var_22_string == var_69_string; // 0x4fa Eq
	if(var_70_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_21_int = 24; // 0x4fc MovI
	return 0; // 0x4fd Return
	
Label_1278:
	var_71_string = "starshina"; // 0x4fe PushS
	var_72_bool = var_22_string == var_71_string; // 0x4ff Eq
	if(var_72_bool == 0) goto Label_1283; // 0x500 JumpB
	var_21_int = 25; // 0x501 MovI
	return 0; // 0x502 Return
	
Label_1283:
	var_73_string = "viktor"; // 0x503 PushS
	var_74_bool = var_22_string == var_73_string; // 0x504 Eq
	if(var_74_bool == 0) goto Label_1288; // 0x505 JumpB
	var_21_int = 26; // 0x506 MovI
	return 0; // 0x507 Return
	
Label_1288:
	var_75_string = "wasted_woman"; // 0x508 PushS
	var_76_bool = var_22_string == var_75_string; // 0x509 Eq
	if(var_76_bool == 0) goto Label_1293; // 0x50a JumpB
	var_21_int = 27; // 0x50b MovI
	return 0; // 0x50c Return
	
Label_1293:
	var_77_string = "wasted_male"; // 0x50d PushS
	var_78_bool = var_22_string == var_77_string; // 0x50e Eq
	if(var_78_bool == 0) goto Label_1298; // 0x50f JumpB
	var_21_int = 28; // 0x510 MovI
	return 0; // 0x511 Return
	
Label_1298:
	var_79_string = "alkash"; // 0x512 PushS
	var_80_bool = var_22_string == var_79_string; // 0x513 Eq
	if(var_80_bool == 0) goto Label_1303; // 0x514 JumpB
	var_21_int = 29; // 0x515 MovI
	return 0; // 0x516 Return
	
Label_1303:
	var_81_string = "boy"; // 0x517 PushS
	var_82_bool = var_22_string == var_81_string; // 0x518 Eq
	if(var_82_bool == 0) goto Label_1308; // 0x519 JumpB
	var_21_int = 30; // 0x51a MovI
	return 0; // 0x51b Return
	
Label_1308:
	var_83_string = "girl"; // 0x51c PushS
	var_84_bool = var_22_string == var_83_string; // 0x51d Eq
	if(var_84_bool == 0) goto Label_1313; // 0x51e JumpB
	var_21_int = 31; // 0x51f MovI
	return 0; // 0x520 Return
	
Label_1313:
	var_85_string = "littleboy"; // 0x521 PushS
	var_86_bool = var_22_string == var_85_string; // 0x522 Eq
	if(var_86_bool == 0) goto Label_1318; // 0x523 JumpB
	var_21_int = 32; // 0x524 MovI
	return 0; // 0x525 Return
	
Label_1318:
	var_87_string = "littlegirl"; // 0x526 PushS
	var_88_bool = var_22_string == var_87_string; // 0x527 Eq
	if(var_88_bool == 0) goto Label_1323; // 0x528 JumpB
	var_21_int = 33; // 0x529 MovI
	return 0; // 0x52a Return
	
Label_1323:
	var_89_string = "butcher"; // 0x52b PushS
	var_90_bool = var_22_string == var_89_string; // 0x52c Eq
	if(var_90_bool == 0) goto Label_1328; // 0x52d JumpB
	var_21_int = 34; // 0x52e MovI
	return 0; // 0x52f Return
	
Label_1328:
	var_91_string = "dohodyaga"; // 0x530 PushS
	var_92_bool = var_22_string == var_91_string; // 0x531 Eq
	if(var_92_bool == 0) goto Label_1333; // 0x532 JumpB
	var_21_int = 35; // 0x533 MovI
	return 0; // 0x534 Return
	
Label_1333:
	var_93_string = "unosha"; // 0x535 PushS
	var_94_bool = var_22_string == var_93_string; // 0x536 Eq
	if(var_94_bool == 0) goto Label_1338; // 0x537 JumpB
	var_21_int = 36; // 0x538 MovI
	return 0; // 0x539 Return
	
Label_1338:
	var_95_string = "vaxxabit"; // 0x53a PushS
	var_96_bool = var_22_string == var_95_string; // 0x53b Eq
	if(var_96_bool == 0) goto Label_1343; // 0x53c JumpB
	var_21_int = 37; // 0x53d MovI
	return 0; // 0x53e Return
	
Label_1343:
	var_97_string = "vaxxabitka"; // 0x53f PushS
	var_98_bool = var_22_string == var_97_string; // 0x540 Eq
	if(var_98_bool == 0) goto Label_1348; // 0x541 JumpB
	var_21_int = 38; // 0x542 MovI
	return 0; // 0x543 Return
	
Label_1348:
	var_99_string = "woman"; // 0x544 PushS
	var_100_bool = var_22_string == var_99_string; // 0x545 Eq
	if(var_100_bool == 0) goto Label_1353; // 0x546 JumpB
	var_21_int = 39; // 0x547 MovI
	return 0; // 0x548 Return
	
Label_1353:
	var_101_string = "worker"; // 0x549 PushS
	var_102_bool = var_22_string == var_101_string; // 0x54a Eq
	if(var_102_bool == 0) goto Label_1358; // 0x54b JumpB
	var_21_int = 40; // 0x54c MovI
	return 0; // 0x54d Return
	
Label_1358:
	var_103_string = "whitemask"; // 0x54e PushS
	var_104_bool = var_22_string == var_103_string; // 0x54f Eq
	if(var_104_bool == 0) goto Label_1363; // 0x550 JumpB
	var_21_int = 42; // 0x551 MovI
	return 0; // 0x552 Return
	
Label_1363:
	var_105_string = "birdmask"; // 0x553 PushS
	var_106_bool = var_22_string == var_105_string; // 0x554 Eq
	if(var_106_bool == 0) goto Label_1368; // 0x555 JumpB
	var_21_int = 43; // 0x556 MovI
	return 0; // 0x557 Return
	
Label_1368:
	var_107_string = "birdmask"; // 0x558 PushS
	var_108_bool = var_22_string == var_107_string; // 0x559 Eq
	if(var_108_bool == 0) goto Label_1373; // 0x55a JumpB
	var_21_int = 44; // 0x55b MovI
	return 0; // 0x55c Return
	
Label_1373:
	var_109_string = "patrol"; // 0x55d PushS
	var_110_bool = var_22_string == var_109_string; // 0x55e Eq
	if(var_110_bool == 0) goto Label_1378; // 0x55f JumpB
	var_21_int = 46; // 0x560 MovI
	return 0; // 0x561 Return
	
Label_1378:
	var_111_string = "danko"; // 0x562 PushS
	var_112_bool = var_22_string == var_111_string; // 0x563 Eq
	if(var_112_bool == 0) goto Label_1383; // 0x564 JumpB
	var_21_int = 47; // 0x565 MovI
	return 0; // 0x566 Return
	
Label_1383:
	var_113_string = "alkash_d"; // 0x567 PushS
	var_114_bool = var_22_string == var_113_string; // 0x568 Eq
	if(var_114_bool == 0) goto Label_1388; // 0x569 JumpB
	var_21_int = 48; // 0x56a MovI
	return 0; // 0x56b Return
	
Label_1388:
	var_115_string = "boy_d"; // 0x56c PushS
	var_116_bool = var_22_string == var_115_string; // 0x56d Eq
	if(var_116_bool == 0) goto Label_1393; // 0x56e JumpB
	var_21_int = 49; // 0x56f MovI
	return 0; // 0x570 Return
	
Label_1393:
	var_117_string = "butcher_d"; // 0x571 PushS
	var_118_bool = var_22_string == var_117_string; // 0x572 Eq
	if(var_118_bool == 0) goto Label_1398; // 0x573 JumpB
	var_21_int = 50; // 0x574 MovI
	return 0; // 0x575 Return
	
Label_1398:
	var_119_string = "dohodyaga_d"; // 0x576 PushS
	var_120_bool = var_22_string == var_119_string; // 0x577 Eq
	if(var_120_bool == 0) goto Label_1403; // 0x578 JumpB
	var_21_int = 51; // 0x579 MovI
	return 0; // 0x57a Return
	
Label_1403:
	var_121_string = "girl_d"; // 0x57b PushS
	var_122_bool = var_22_string == var_121_string; // 0x57c Eq
	if(var_122_bool == 0) goto Label_1408; // 0x57d JumpB
	var_21_int = 52; // 0x57e MovI
	return 0; // 0x57f Return
	
Label_1408:
	var_123_string = "littleboy_d"; // 0x580 PushS
	var_124_bool = var_22_string == var_123_string; // 0x581 Eq
	if(var_124_bool == 0) goto Label_1413; // 0x582 JumpB
	var_21_int = 53; // 0x583 MovI
	return 0; // 0x584 Return
	
Label_1413:
	var_125_string = "littlegirl_d"; // 0x585 PushS
	var_126_bool = var_22_string == var_125_string; // 0x586 Eq
	if(var_126_bool == 0) goto Label_1418; // 0x587 JumpB
	var_21_int = 54; // 0x588 MovI
	return 0; // 0x589 Return
	
Label_1418:
	var_127_string = "unosha2"; // 0x58a PushS
	var_128_bool = var_22_string == var_127_string; // 0x58b Eq
	if(var_128_bool == 0) goto Label_1423; // 0x58c JumpB
	var_21_int = 55; // 0x58d MovI
	return 0; // 0x58e Return
	
Label_1423:
	var_129_string = "unosha_d"; // 0x58f PushS
	var_130_bool = var_22_string == var_129_string; // 0x590 Eq
	if(var_130_bool == 0) goto Label_1428; // 0x591 JumpB
	var_21_int = 56; // 0x592 MovI
	return 0; // 0x593 Return
	
Label_1428:
	var_131_string = "unosha2_d"; // 0x594 PushS
	var_132_bool = var_22_string == var_131_string; // 0x595 Eq
	if(var_132_bool == 0) goto Label_1433; // 0x596 JumpB
	var_21_int = 57; // 0x597 MovI
	return 0; // 0x598 Return
	
Label_1433:
	var_133_string = "vaxxabit_d"; // 0x599 PushS
	var_134_bool = var_22_string == var_133_string; // 0x59a Eq
	if(var_134_bool == 0) goto Label_1438; // 0x59b JumpB
	var_21_int = 58; // 0x59c MovI
	return 0; // 0x59d Return
	
Label_1438:
	var_135_string = "vaxxabitka_d"; // 0x59e PushS
	var_136_bool = var_22_string == var_135_string; // 0x59f Eq
	if(var_136_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_21_int = 59; // 0x5a1 MovI
	return 0; // 0x5a2 Return
	
Label_1443:
	var_137_string = "wasted_male_d"; // 0x5a3 PushS
	var_138_bool = var_22_string == var_137_string; // 0x5a4 Eq
	if(var_138_bool == 0) goto Label_1448; // 0x5a5 JumpB
	var_21_int = 60; // 0x5a6 MovI
	return 0; // 0x5a7 Return
	
Label_1448:
	var_139_string = "wasted_woman_d"; // 0x5a8 PushS
	var_140_bool = var_22_string == var_139_string; // 0x5a9 Eq
	if(var_140_bool == 0) goto Label_1453; // 0x5aa JumpB
	var_21_int = 61; // 0x5ab MovI
	return 0; // 0x5ac Return
	
Label_1453:
	var_141_string = "woman_d"; // 0x5ad PushS
	var_142_bool = var_22_string == var_141_string; // 0x5ae Eq
	if(var_142_bool == 0) goto Label_1458; // 0x5af JumpB
	var_21_int = 62; // 0x5b0 MovI
	return 0; // 0x5b1 Return
	
Label_1458:
	var_143_string = "worker2"; // 0x5b2 PushS
	var_144_bool = var_22_string == var_143_string; // 0x5b3 Eq
	if(var_144_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_21_int = 63; // 0x5b5 MovI
	return 0; // 0x5b6 Return
	
Label_1463:
	var_145_string = "worker_d"; // 0x5b7 PushS
	var_146_bool = var_22_string == var_145_string; // 0x5b8 Eq
	if(var_146_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_21_int = 64; // 0x5ba MovI
	return 0; // 0x5bb Return
	
Label_1468:
	var_147_string = "worker2_d"; // 0x5bc PushS
	var_148_bool = var_22_string == var_147_string; // 0x5bd Eq
	if(var_148_bool == 0) goto Label_1473; // 0x5be JumpB
	var_21_int = 65; // 0x5bf MovI
	return 0; // 0x5c0 Return
	
Label_1473:
	var_149_string = "burah"; // 0x5c1 PushS
	var_150_bool = var_22_string == var_149_string; // 0x5c2 Eq
	if(var_150_bool == 0) goto Label_1478; // 0x5c3 JumpB
	var_21_int = 66; // 0x5c4 MovI
	return 0; // 0x5c5 Return
	
Label_1478:
	var_151_string = "gorbun_daughter"; // 0x5c6 PushS
	var_152_bool = var_22_string == var_151_string; // 0x5c7 Eq
	if(var_152_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_21_int = 67; // 0x5c9 MovI
	return 0; // 0x5ca Return
	
Label_1483:
	var_153_string = "gorbun"; // 0x5cb PushS
	var_154_bool = var_22_string == var_153_string; // 0x5cc Eq
	if(var_154_bool == 0) goto Label_1488; // 0x5cd JumpB
	var_21_int = 68; // 0x5ce MovI
	return 0; // 0x5cf Return
	
Label_1488:
	var_155_string = "albinos"; // 0x5d0 PushS
	var_156_bool = var_22_string == var_155_string; // 0x5d1 Eq
	if(var_156_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_21_int = 69; // 0x5d3 MovI
	return 0; // 0x5d4 Return
	
Label_1493:
	var_157_string = "aglaja"; // 0x5d5 PushS
	var_158_bool = var_22_string == var_157_string; // 0x5d6 Eq
	if(var_158_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_21_int = 70; // 0x5d8 MovI
	return 0; // 0x5d9 Return
	
Label_1498:
	var_159_string = "nude"; // 0x5da PushS
	var_160_bool = var_22_string == var_159_string; // 0x5db Eq
	if(var_160_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_21_int = 71; // 0x5dd MovI
	return 0; // 0x5de Return
	
Label_1503:
	var_161_string = "block"; // 0x5df PushS
	var_162_bool = var_22_string == var_161_string; // 0x5e0 Eq
	if(var_162_bool == 0) goto Label_1508; // 0x5e1 JumpB
	var_21_int = 72; // 0x5e2 MovI
	return 0; // 0x5e3 Return
	
Label_1508:
	var_163_string = "officer"; // 0x5e4 PushS
	var_164_bool = var_22_string == var_163_string; // 0x5e5 Eq
	if(var_164_bool == 0) goto Label_1513; // 0x5e6 JumpB
	var_21_int = 73; // 0x5e7 MovI
	return 0; // 0x5e8 Return
	
Label_1513:
	var_165_string = "doberman"; // 0x5e9 PushS
	var_166_bool = var_22_string == var_165_string; // 0x5ea Eq
	if(var_166_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_21_int = 74; // 0x5ec MovI
	return 0; // 0x5ed Return
	
Label_1518:
	var_167_string = "grabitel"; // 0x5ee PushS
	var_168_bool = var_22_string == var_167_string; // 0x5ef Eq
	if(var_168_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_21_int = 75; // 0x5f1 MovI
	return 0; // 0x5f2 Return
	
Label_1523:
	var_169_string = "gatherer_wife"; // 0x5f3 PushS
	var_170_bool = var_22_string == var_169_string; // 0x5f4 Eq
	if(var_170_bool == 0) goto Label_1528; // 0x5f5 JumpB
	var_21_int = 76; // 0x5f6 MovI
	return 0; // 0x5f7 Return
	
Label_1528:
	var_171_string = "rat_prophet"; // 0x5f8 PushS
	var_172_bool = var_22_string == var_171_string; // 0x5f9 Eq
	if(var_172_bool == 0) goto Label_1533; // 0x5fa JumpB
	var_21_int = 77; // 0x5fb MovI
	return 0; // 0x5fc Return
	
Label_1533:
	var_173_string = "morlok"; // 0x5fd PushS
	var_174_bool = var_22_string == var_173_string; // 0x5fe Eq
	if(var_174_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_21_int = 78; // 0x600 MovI
	return 0; // 0x601 Return
	
Label_1538:
	var_175_string = "soldier"; // 0x602 PushS
	var_176_bool = var_22_string == var_175_string; // 0x603 Eq
	if(var_176_bool == 0) goto Label_1543; // 0x604 JumpB
	var_21_int = 79; // 0x605 MovI
	return 0; // 0x606 Return
	
Label_1543:
	var_177_string = "britva"; // 0x607 PushS
	var_178_bool = var_22_string == var_177_string; // 0x608 Eq
	if(var_178_bool == 0) goto Label_1548; // 0x609 JumpB
	var_21_int = 80; // 0x60a MovI
	return 0; // 0x60b Return
	
Label_1548:
	var_179_string = "kabaktchik"; // 0x60c PushS
	var_180_bool = var_22_string == var_179_string; // 0x60d Eq
	if(var_180_bool == 0) goto Label_1553; // 0x60e JumpB
	var_21_int = 81; // 0x60f MovI
	return 0; // 0x610 Return
	
Label_1553:
	var_181_string = "sanitar"; // 0x611 PushS
	var_182_bool = var_22_string == var_181_string; // 0x612 Eq
	if(var_182_bool == 0) goto Label_1558; // 0x613 JumpB
	var_21_int = 82; // 0x614 MovI
	return 0; // 0x615 Return
	
Label_1558:
	var_183_string = "salesman"; // 0x616 PushS
	var_184_bool = var_22_string == var_183_string; // 0x617 Eq
	if(var_184_bool == 0) goto Label_1563; // 0x618 JumpB
	var_21_int = 83; // 0x619 MovI
	return 0; // 0x61a Return
	
Label_1563:
	var_185_string = "ayyan"; // 0x61b PushS
	var_186_bool = var_22_string == var_185_string; // 0x61c Eq
	if(var_186_bool == 0) goto Label_1568; // 0x61d JumpB
	var_21_int = 84; // 0x61e MovI
	return 0; // 0x61f Return
	
Label_1568:
	var_187_string = "petrbirdmask"; // 0x620 PushS
	var_188_bool = var_22_string == var_187_string; // 0x621 Eq
	if(var_188_bool == 0) goto Label_1573; // 0x622 JumpB
	var_21_int = 85; // 0x623 MovI
	return 0; // 0x624 Return
	
Label_1573:
	var_189_string = "mogila"; // 0x625 PushS
	var_190_bool = var_22_string == var_189_string; // 0x626 Eq
	if(var_190_bool == 0) goto Label_1578; // 0x627 JumpB
	var_21_int = 86; // 0x628 MovI
	return 0; // 0x629 Return
	
Label_1578:
	var_191_string = "klikusha"; // 0x62a PushS
	var_192_bool = var_22_string == var_191_string; // 0x62b Eq
	if(var_192_bool == 0) goto Label_1583; // 0x62c JumpB
	var_21_int = 87; // 0x62d MovI
	return 0; // 0x62e Return
	
Label_1583:
	var_21_int = -1; // 0x62f MovI
	return 0; // 0x630 Return
}


func_6(var_379_float)
{
	var_383_int = 0; var_384_float = 0; // 0x7 PushV
	var_384_float = var_379_float; // 0x8 Mov
	func_2594(var_383_int, var_384_float); // 0x9 NEW_2
	var_392_bool = 0; var_393_string = ""; var_394_string = ""; // 0xb PushV
	var_393_string = "quest_b12_01"; // 0xc MovS
	var_394_string = "init_hidden_room"; // 0xd MovS
	func_1115(var_392_bool, var_393_string, var_394_string); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_775(var_479_bool, var_480_int)
{
	var_481_int = 0; var_482_int = 0; // 0x307 PushV
	var_483_string = ""; var_484_int = 0; // 0x308 PushV
	var_484_int = var_480_int; // 0x309 Mov
	func_757(var_483_string, var_484_int); // 0x30a NEW_2
	GetVariable(var_483_string, var_482_int); // 0x30c Func
	var_485_int = 2; // 0x30e PushI
	var_486_int = var_482_int & var_485_int; // 0x30f And
	var_487_int = 0; // 0x310 PushI
	var_479_bool = var_486_int != var_487_int; // 0x311 Neq2
	return 2; // 0x312 Return
}


func_2574(var_296_bool, var_297_int)
{
	var_298_int = 0; var_299_int = 0; // 0xa0e PushV
	var_300_string = "vol_"; // 0xa0f PushS
	var_301_int = var_300_string + var_297_int; // 0xa10 Add
	GetVariable(var_301_int, var_299_int); // 0xa11 Func
	var_302_int = 4; // 0xa13 PushI
	var_303_int = var_299_int & var_302_int; // 0xa14 And
	var_304_int = 0; // 0xa15 PushI
	var_296_bool = var_303_int != var_304_int; // 0xa16 Neq2
	return 2; // 0xa17 Return
}


func_639()
{
	var_1005_int = 0; var_1006_object = Obj(); var_1007_int = 0; var_1008_object = Obj(); // 0x27f PushV
	EventDisable(26); // 0x280 EventDisable
	var_1009_string = "Volonteers Cleanup..."; // 0x281 PushS
	Trace(var_1009_string); // 0x282 Func
	var_1007_int = 0; // 0x284 MovI
	
Label_645:
	var_1010_int = 0; // 0x285 PushV
	func_729(var_1010_int); // 0x286 NEW_2
	var_1011_bool = var_1007_int < var_1010_int; // 0x288 LT
	if(var_1011_bool == 0) goto Label_660; // 0x289 JumpB
	get(var_1008_object, var_1007_int); // 0x28a TObjFunc
	var_1012_bool = var_1008_object != 0; // 0x28c NullNeq
	if(var_1012_bool == 0) goto Label_656; // 0x28d JumpB
	Remove(); // 0x28e ObjFunc
	
Label_656:
	var_1008_object = 0; // 0x290 SetNull
	var_1013_int = 1; // 0x291 PushI
	var_1007_int = var_1007_int + var_1013_int; // 0x292 Add2
	goto Label_645; // 0x293 Jump
	
Label_660:
	return 4; // 0x294 Return
}


func_2704(var_339_bool)
{
	var_340_object = Obj(); var_341_int = 0; var_342_int = 0; var_343_int = 0; var_344_object = Obj(); var_345_int = 0; var_346_int = 0; var_347_int = 0; // 0xa90 PushV
	CreateIntVector(var_344_object); // 0xa91 Func
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; // 0xa93 PushV
	var_348_object = var_344_object; // 0xa94 Mov
	var_349_bool = 0; // 0xa95 MovB
	var_350_int = -1; // 0xa96 MovI
	func_2051(var_349_bool, var_350_int); // 0xa97 NEW_2
	size(var_345_int); // 0xa99 ObjFunc
	var_346_int = 0; // 0xa9b MovI
	
Label_2716:
	var_363_bool = var_346_int < var_345_int; // 0xa9c LT
	if(var_363_bool == 0) goto Label_2739; // 0xa9d JumpB
	get(var_347_int, var_346_int); // 0xa9e ObjFunc
	var_364_bool = 0; // 0xaa0 PushV
	var_364_bool = 1; // 0xaa1 MovB
	var_365_bool = 0; var_366_int = 0; // 0xaa2 PushV
	var_366_int = var_347_int; // 0xaa3 Mov
	func_2584(var_365_bool, var_366_int); // 0xaa4 NEW_2
	if(var_365_bool == 0) goto Label_2733; // 0xaa6 JumpB
	var_367_bool = 0; var_368_int = 0; // 0xaa7 PushV
	var_368_int = var_347_int; // 0xaa8 Mov
	func_2574(var_367_bool, var_368_int); // 0xaa9 NEW_2
	if(var_367_bool == 0) goto Label_2733; // 0xaab JumpB
	var_364_bool = 0; // 0xaac MovB
	
Label_2733:
	if(var_364_bool == 0) goto Label_2736; // 0xaad JumpB
	var_339_bool = 0; // 0xaae MovB
	return 8; // 0xaaf Return
	
Label_2736:
	var_369_int = 1; // 0xab0 PushI
	var_346_int = var_346_int + var_369_int; // 0xab1 Add2
	goto Label_2716; // 0xab2 Jump
	
Label_2739:
	var_339_bool = 1; // 0xab3 MovB
	return 8; // 0xab4 Return
}


func_17()
{
	func_2625(); // 0x12 NEW_2
	return 0; // 0x14 Return
}


func_787(var_939_bool, var_940_int)
{
	var_941_int = 0; var_942_int = 0; // 0x313 PushV
	var_943_string = ""; var_944_int = 0; // 0x314 PushV
	var_944_int = var_940_int; // 0x315 Mov
	func_757(var_943_string, var_944_int); // 0x316 NEW_2
	GetVariable(var_943_string, var_942_int); // 0x318 Func
	var_945_int = 1; // 0x31a PushI
	var_946_int = var_942_int & var_945_int; // 0x31b And
	var_947_int = 0; // 0x31c PushI
	var_939_bool = var_946_int == var_947_int; // 0x31d Eq2
	return 2; // 0x31e Return
}


func_915(var_848_int)
{
	var_849_int = 0; var_850_object = Obj(); var_851_int = 0; var_852_int = 0; var_853_string = ""; var_854_int = 0; var_855_object = Obj(); var_856_int = 0; var_857_int = 0; var_858_string = ""; // 0x393 PushV
	var_859_string = ""; var_860_int = 0; // 0x394 PushV
	var_860_int = var_848_int; // 0x395 Mov
	func_757(var_859_string, var_860_int); // 0x396 NEW_2
	GetVariable(var_859_string, var_854_int); // 0x398 Func
	var_861_string = ""; var_862_int = 0; // 0x39a PushV
	var_862_int = var_848_int; // 0x39b Mov
	func_757(var_861_string, var_862_int); // 0x39c NEW_2
	var_863_int = 32; // 0x39e PushI
	var_864_int = var_854_int | var_863_int; // 0x39f Or
	var_865_int = 32; // 0x3a0 PushI
	var_866_int = var_864_int - var_865_int; // 0x3a1 Sub
	SetVariable(var_861_string, var_866_int); // 0x3a2 Func
	get(var_855_object, var_848_int); // 0x3a4 TObjFunc
	size(var_856_int); // 0x3a6 ObjFunc
	var_857_int = 0; // 0x3a8 MovI
	
Label_937:
	var_867_bool = var_857_int < var_856_int; // 0x3a9 LT
	if(var_867_bool == 0) goto Label_949; // 0x3aa JumpB
	get(var_858_string, var_857_int); // 0x3ab ObjFunc
	var_868_string = ""; var_869_int = 0; // 0x3ad PushV
	var_868_string = var_858_string; // 0x3ae Mov
	var_869_int = 1; // 0x3af MovI
	func_2687(var_868_string, var_869_int); // 0x3b0 NEW_2
	var_870_int = 1; // 0x3b2 PushI
	var_857_int = var_857_int + var_870_int; // 0x3b3 Add2
	goto Label_937; // 0x3b4 Jump
	
Label_949:
	return 10; // 0x3b5 Return
}


func_661(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); // 0x295 PushV
	var_28_string = "Volonteers Init..."; // 0x296 PushS
	Trace(var_28_string); // 0x297 Func
	CreateIntVector(var_20_object); // 0x299 Func
	CreateObjectVector(var_21_object); // 0x29b Func
	CreateStringVector(var_22_object); // 0x29d Func
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x29f PushV
	var_29_object = var_20_object; // 0x2a0 Mov
	var_30_object = var_21_object; // 0x2a1 Mov
	var_31_object = var_22_object; // 0x2a2 Mov
	func_2149(var_30_object, var_31_object); // 0x2a3 NEW_2
	var_0_object = var_20_object; // 0x2a5 TMov
	var_4_object = var_21_object; // 0x2a6 TMov
	var_5_object = var_22_object; // 0x2a7 TMov
	CreateObjectVector(var_23_object); // 0x2a8 Func
	CreateObjectVector(var_24_object); // 0x2aa Func
	var_158_object = Obj(); var_159_object = Obj(); // 0x2ac PushV
	var_158_object = var_23_object; // 0x2ad Mov
	var_159_object = var_24_object; // 0x2ae Mov
	func_33(); // 0x2af NEW_2
	var_1_object = var_23_object; // 0x2b1 TMov
	var_2_object = var_24_object; // 0x2b2 TMov
	CreateObjectVector(var_25_object); // 0x2b3 Func
	var_3_object = var_25_object; // 0x2b5 TMov
	var_26_int = 0; // 0x2b6 MovI
	
Label_695:
	var_213_int = 0; // 0x2b7 PushV
	func_729(var_213_int); // 0x2b8 NEW_2
	var_216_bool = var_26_int < var_213_int; // 0x2ba LT
	if(var_216_bool == 0) goto Label_714; // 0x2bb JumpB
	var_217_string = ""; var_218_int = 0; // 0x2bc PushV
	var_218_int = var_26_int; // 0x2bd Mov
	func_757(var_217_string, var_218_int); // 0x2be NEW_2
	var_222_int = 0; // 0x2c0 PushI
	SetVariable(var_217_string, var_222_int); // 0x2c1 Func
	var_27_object = 0; // 0x2c3 SetNull
	add(var_27_object); // 0x2c4 TObjFunc
	var_27_object = 0; // 0x2c6 SetNull
	var_223_int = 1; // 0x2c7 PushI
	var_26_int = var_26_int + var_223_int; // 0x2c8 Add2
	goto Label_695; // 0x2c9 Jump
	
Label_714:
	var_6_int = 0; // 0x2ca TMovI
	var_224_string = "Volonteers count: "; // 0x2cb PushS
	var_225_int = 0; // 0x2cc PushV
	func_729(var_225_int); // 0x2cd NEW_2
	var_226_int = var_224_string + var_225_int; // 0x2cf Add
	Trace(var_226_int); // 0x2d0 Func
	return 16; // 0x2d2 Return
}


func_21()
{
	func_2612(); // 0x16 NEW_2
	return 0; // 0x18 Return
}


func_2584(var_287_bool, var_288_int)
{
	var_289_int = 0; var_290_int = 0; // 0xa18 PushV
	var_291_string = "vol_"; // 0xa19 PushS
	var_292_int = var_291_string + var_288_int; // 0xa1a Add
	GetVariable(var_292_int, var_290_int); // 0xa1b Func
	var_293_int = 16; // 0xa1d PushI
	var_294_int = var_290_int & var_293_int; // 0xa1e And
	var_295_int = 0; // 0xa1f PushI
	var_287_bool = var_294_int != var_295_int; // 0xa20 Neq2
	return 2; // 0xa21 Return
}


func_25()
{
	return 0; // 0x19 Return
}


func_26(var_488_bool, var_489_int)
{
	var_494_bool = 0; var_495_int = 0; // 0x1b PushV
	var_495_int = var_489_int; // 0x1c Mov
	func_2013(var_494_bool, var_495_int); // 0x1d NEW_2
	var_488_bool = var_494_bool; // 0x1e Mov
	return 0; // 0x20 Return
}


func_799(var_872_bool, var_873_int)
{
	var_874_int = 0; var_875_int = 0; // 0x31f PushV
	var_876_string = ""; var_877_int = 0; // 0x320 PushV
	var_877_int = var_873_int; // 0x321 Mov
	func_757(var_876_string, var_877_int); // 0x322 NEW_2
	GetVariable(var_876_string, var_875_int); // 0x324 Func
	var_878_int = 4; // 0x326 PushI
	var_879_int = var_875_int & var_878_int; // 0x327 And
	var_880_int = 0; // 0x328 PushI
	var_872_bool = var_879_int != var_880_int; // 0x329 Neq2
	return 2; // 0x32a Return
}


func_33()
{
	var_160_object = Obj(); var_161_object = Obj(); var_162_int = 0; var_163_object = Obj(); var_164_object = Obj(); var_165_int = 0; // 0x21 PushV
	CreateIntVector(var_163_object); // 0x22 Func
	var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; // 0x24 PushV
	var_166_object = var_163_object; // 0x25 Mov
	var_167_bool = 1; // 0x26 MovB
	var_168_int = 1; // 0x27 MovI
	func_2051(var_167_bool, var_168_int); // 0x28 NEW_2
	CreateIntVector(var_164_object); // 0x2a Func
	var_181_object = Obj(); var_182_bool = 0; var_183_int = 0; // 0x2c PushV
	var_181_object = var_164_object; // 0x2d Mov
	var_182_bool = 1; // 0x2e MovB
	var_183_int = 1; // 0x2f MovI
	func_2084(var_182_bool, var_183_int); // 0x30 NEW_2
	var_196_object = Obj(); var_197_bool = 0; var_198_int = 0; // 0x32 PushV
	var_196_object = var_164_object; // 0x33 Mov
	var_197_bool = 1; // 0x34 MovB
	var_198_int = 1; // 0x35 MovI
	func_2117(var_198_int); // 0x36 NEW_2
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


func_2594(var_383_int, var_384_float)
{
	var_385_int = 0; var_386_int = 0; var_387_int = 0; var_388_float = 0; // 0xa23 PushV
	var_386_int = 522709; // 0xa24 MovI
	var_387_int = 522708; // 0xa25 MovI
	var_388_float = var_384_float; // 0xa26 Mov
	func_2679(var_385_int, var_386_int, var_387_int, var_388_float); // 0xa27 NEW_2
	var_383_int = var_385_int; // 0xa28 Mov
	return 0; // 0xa2a Return
}


func_2084(var_182_bool, var_183_int)
{
	var_184_int = 6; // 0x825 PushI
	add(var_184_int); // 0x826 ObjFunc
	var_185_int = 26; // 0x828 PushI
	add(var_185_int); // 0x829 ObjFunc
	var_186_int = 2; // 0x82b PushI
	add(var_186_int); // 0x82c ObjFunc
	var_187_int = 22; // 0x82e PushI
	add(var_187_int); // 0x82f ObjFunc
	var_188_bool = 0; // 0x831 PushB
	var_189_bool = var_182_bool == var_188_bool; // 0x832 Eq
	if(var_189_bool == 0) goto Label_2110; // 0x833 JumpB
	var_190_int = 15; // 0x834 PushI
	add(var_190_int); // 0x835 ObjFunc
	var_191_int = 5; // 0x837 PushI
	add(var_191_int); // 0x838 ObjFunc
	var_192_int = 16; // 0x83a PushI
	add(var_192_int); // 0x83b ObjFunc
	goto Label_2116; // 0x83d Jump
	
Label_2116:
	return 0; // 0x844 Return
	
Label_2110:
	var_193_int = 0; // 0x83e PushI
	var_194_bool = var_183_int != var_193_int; // 0x83f Neq
	if(var_194_bool == 0) goto Label_2116; // 0x840 JumpB
	var_195_int = 15; // 0x841 PushI
	add(var_195_int); // 0x842 ObjFunc
}


func_1063(var_539_object, var_540_int)
{
	var_541_string = ""; var_542_object = Obj(); var_543_object = Obj(); var_544_string = ""; var_545_object = Obj(); var_546_object = Obj(); // 0x427 PushV
	get(var_544_string, var_540_int); // 0x428 TObjFunc
	var_547_string = "outdoor"; // 0x42a PushS
	var_548_bool = var_544_string == var_547_string; // 0x42b Eq
	if(var_548_bool == 0) goto Label_1074; // 0x42c JumpB
	GetMainOutdoorScene(var_545_object); // 0x42d Func
	var_539_object = var_545_object; // 0x42f Mov
	return 6; // 0x430 Return
	
Label_1074:
	GetSceneByName(var_546_object, var_544_string); // 0x432 Func
	var_539_object = var_546_object; // 0x434 Mov
	return 6; // 0x435 Return
}


func_2603(var_1024_int, var_1025_float)
{
	var_1026_int = 0; var_1027_int = 0; var_1028_int = 0; var_1029_float = 0; // 0xa2c PushV
	var_1027_int = 522711; // 0xa2d MovI
	var_1028_int = 522710; // 0xa2e MovI
	var_1029_float = var_1025_float; // 0xa2f Mov
	func_2679(var_1026_int, var_1027_int, var_1028_int, var_1029_float); // 0xa30 NEW_2
	var_1024_int = var_1026_int; // 0xa31 Mov
	return 0; // 0xa33 Return
}


func_811(var_751_int)
{
	var_756_int = 0; var_757_object = Obj(); var_758_object = Obj(); var_759_string = ""; var_760_object = Obj(); var_761_int = 0; var_762_int = 0; var_763_string = ""; var_764_int = 0; var_765_object = Obj(); var_766_object = Obj(); var_767_string = ""; var_768_object = Obj(); var_769_int = 0; var_770_int = 0; var_771_string = ""; // 0x32b PushV
	var_772_string = ""; var_773_int = 0; // 0x32c PushV
	var_773_int = var_751_int; // 0x32d Mov
	func_757(var_772_string, var_773_int); // 0x32e NEW_2
	GetVariable(var_772_string, var_764_int); // 0x330 Func
	var_774_string = ""; var_775_int = 0; // 0x332 PushV
	var_775_int = var_751_int; // 0x333 Mov
	func_757(var_774_string, var_775_int); // 0x334 NEW_2
	var_776_int = 8; // 0x336 PushI
	var_777_int = var_764_int & var_776_int; // 0x337 And
	var_778_int = 5; // 0x338 PushI
	var_779_int = var_777_int | var_778_int; // 0x339 Or
	SetVariable(var_774_string, var_779_int); // 0x33a Func
	get(var_765_object, var_751_int); // 0x33c TObjFunc
	var_780_bool = var_765_object == 0; // 0x33e NullEq
	if(var_780_bool == 0) goto Label_861; // 0x33f JumpB
	var_781_object = Obj(); var_782_int = 0; // 0x340 PushV
	var_782_int = var_751_int; // 0x341 Mov
	func_1063(var_781_object, var_782_int); // 0x342 NEW_2
	var_766_object = var_781_object; // 0x343 Mov
	var_783_string = ""; var_784_int = 0; // 0x345 PushV
	var_785_int = 0; var_786_int = 0; // 0x346 PushV
	var_786_int = var_751_int; // 0x347 Mov
	func_752(var_785_int, var_786_int); // 0x348 NEW_2
	var_784_int = var_785_int; // 0x349 Mov
	func_1585(var_783_string, var_784_int); // 0x34b NEW_2
	var_767_string = var_783_string; // 0x34c Mov
	var_787_object = Obj(); var_788_object = Obj(); var_789_string = ""; var_790_string = ""; var_791_string = ""; // 0x34e PushV
	var_788_object = var_766_object; // 0x34f Mov
	var_792_string = "pt_volonteer_"; // 0x350 PushS
	var_789_string = var_792_string + var_767_string; // 0x351 Add2
	var_790_string = "pers_birdmask"; // 0x352 MovS
	var_793_string = "vbirdmask_"; // 0x353 PushS
	var_794_int = var_793_string + var_767_string; // 0x354 Add
	var_795_string = ".xml"; // 0x355 PushS
	var_791_string = var_794_int + var_795_string; // 0x356 Add2
	func_1097(var_788_object, var_789_string, var_790_string, var_791_string); // 0x357 NEW_2
	var_765_object = var_787_object; // 0x358 Mov
	set(var_751_int, var_765_object); // 0x35a TObjFunc
	var_766_object = 0; // 0x35c SetNull
	
Label_861:
	get(var_768_object, var_751_int); // 0x35d TObjFunc
	size(var_769_int); // 0x35f ObjFunc
	var_770_int = 0; // 0x361 MovI
	
Label_866:
	var_796_bool = var_770_int < var_769_int; // 0x362 LT
	if(var_796_bool == 0) goto Label_878; // 0x363 JumpB
	get(var_771_string, var_770_int); // 0x364 ObjFunc
	var_797_string = ""; var_798_int = 0; // 0x366 PushV
	var_797_string = var_771_string; // 0x367 Mov
	var_798_int = 1; // 0x368 MovI
	func_2687(var_797_string, var_798_int); // 0x369 NEW_2
	var_799_int = 1; // 0x36b PushI
	var_770_int = var_770_int + var_799_int; // 0x36c Add2
	goto Label_866; // 0x36d Jump
	
Label_878:
	return 16; // 0x36e Return
}


func_433(var_6_int)
{
	var_802_int = 0; var_803_int = 0; var_804_object = Obj(); var_805_int = 0; var_806_int = 0; var_807_string = ""; var_808_int = 0; var_809_int = 0; var_810_int = 0; var_811_int = 0; var_812_int = 0; var_813_int = 0; var_814_int = 0; var_815_int = 0; var_816_object = Obj(); var_817_int = 0; var_818_int = 0; var_819_string = ""; var_820_int = 0; var_821_int = 0; var_822_int = 0; var_823_int = 0; var_824_int = 0; var_825_int = 0; // 0x1b1 PushV
	var_826_int = 1; // 0x1b2 PushI
	Trace(var_826_int); // 0x1b3 Func
	var_814_int = 0; // 0x1b5 MovI
	
Label_438:
	var_827_int = 0; // 0x1b6 PushV
	func_729(var_827_int); // 0x1b7 NEW_2
	var_828_bool = var_814_int < var_827_int; // 0x1b9 LT
	if(var_828_bool == 0) goto Label_528; // 0x1ba JumpB
	var_829_int = 2; // 0x1bb PushI
	Trace(var_829_int); // 0x1bc Func
	var_830_int = 0; var_831_int = 0; // 0x1be PushV
	var_831_int = var_814_int; // 0x1bf Mov
	func_752(var_830_int, var_831_int); // 0x1c0 NEW_2
	var_815_int = var_830_int; // 0x1c1 Mov
	var_832_int = 3; // 0x1c3 PushI
	Trace(var_832_int); // 0x1c4 Func
	var_833_bool = 0; var_834_int = 0; // 0x1c6 PushV
	var_834_int = var_814_int; // 0x1c7 Mov
	func_775(var_833_bool, var_834_int); // 0x1c8 NEW_2
	if(var_833_bool == 0) goto Label_466; // 0x1ca JumpB
	var_835_int = 4; // 0x1cb PushI
	Trace(var_835_int); // 0x1cc Func
	var_836_int = 0; // 0x1ce PushV
	var_836_int = var_814_int; // 0x1cf Mov
	func_811(var_836_int); // 0x1d0 NEW_2
	
Label_466:
	var_837_int = 5; // 0x1d2 PushI
	Trace(var_837_int); // 0x1d3 Func
	var_838_bool = 0; var_839_int = 0; // 0x1d5 PushV
	var_839_int = var_814_int; // 0x1d6 Mov
	func_763(var_838_bool, var_839_int); // 0x1d7 NEW_2
	if(var_838_bool == 0) goto Label_481; // 0x1d9 JumpB
	var_847_int = 6; // 0x1da PushI
	Trace(var_847_int); // 0x1db Func
	var_848_int = 0; // 0x1dd PushV
	var_848_int = var_814_int; // 0x1de Mov
	func_915(var_848_int); // 0x1df NEW_2
	
Label_481:
	var_871_int = 7; // 0x1e1 PushI
	Trace(var_871_int); // 0x1e2 Func
	var_872_bool = 0; var_873_int = 0; // 0x1e4 PushV
	var_873_int = var_814_int; // 0x1e5 Mov
	func_799(var_872_bool, var_873_int); // 0x1e6 NEW_2
	if(var_872_bool == 0) goto Label_522; // 0x1e8 JumpB
	var_881_int = 8; // 0x1e9 PushI
	Trace(var_881_int); // 0x1ea Func
	get(var_816_object, var_814_int); // 0x1ec TObjFunc
	var_882_int = 9; // 0x1ee PushI
	Trace(var_882_int); // 0x1ef Func
	size(var_817_int); // 0x1f1 ObjFunc
	var_883_int = 10; // 0x1f3 PushI
	Trace(var_883_int); // 0x1f4 Func
	var_818_int = 0; // 0x1f6 MovI
	
Label_503:
	var_884_bool = var_818_int < var_817_int; // 0x1f7 LT
	if(var_884_bool == 0) goto Label_518; // 0x1f8 JumpB
	var_885_int = 11; // 0x1f9 PushI
	Trace(var_885_int); // 0x1fa Func
	get(var_819_string, var_818_int); // 0x1fc ObjFunc
	var_886_string = ""; var_887_int = 0; // 0x1fe PushV
	var_886_string = var_819_string; // 0x1ff Mov
	var_887_int = 1; // 0x200 MovI
	func_2687(var_886_string, var_887_int); // 0x201 NEW_2
	var_888_int = 1; // 0x203 PushI
	var_818_int = var_818_int + var_888_int; // 0x204 Add2
	goto Label_503; // 0x205 Jump
	
Label_518:
	var_889_int = 12; // 0x206 PushI
	Trace(var_889_int); // 0x207 Func
	var_816_object = 0; // 0x209 SetNull
	
Label_522:
	var_890_int = 13; // 0x20a PushI
	Trace(var_890_int); // 0x20b Func
	var_891_int = 1; // 0x20d PushI
	var_814_int = var_814_int + var_891_int; // 0x20e Add2
	goto Label_438; // 0x20f Jump
	
Label_528:
	var_892_int = 14; // 0x210 PushI
	Trace(var_892_int); // 0x211 Func
	var_893_int = 1; // 0x213 PushI
	var_6_int = var_6_int + var_893_int; // 0x214 Add2
	var_894_int = 0; var_895_int = 0; var_896_int = 0; // 0x215 PushV
	var_897_int = 0; var_898_int = 0; // 0x216 PushV
	var_898_int = var_6_int; // 0x217 MovT
	func_70(var_897_int, var_898_int); // 0x218 NEW_2
	var_894_int = var_897_int; // 0x219 Mov
	var_904_int = 0; var_905_int = 0; // 0x21b PushV
	var_905_int = var_6_int; // 0x21c MovT
	func_85(var_904_int, var_905_int); // 0x21d NEW_2
	var_895_int = var_904_int; // 0x21e Mov
	var_896_int = var_6_int; // 0x220 MovT
	func_359(var_894_int, var_895_int, var_896_int); // 0x221 NEW_2
	var_966_int = 15; // 0x223 PushI
	Trace(var_966_int); // 0x224 Func
	var_820_int = 0; // 0x226 MovI
	var_821_int = 0; // 0x227 MovI
	
Label_552:
	var_967_int = 0; // 0x228 PushV
	func_729(var_967_int); // 0x229 NEW_2
	var_968_bool = var_821_int < var_967_int; // 0x22b LT
	if(var_968_bool == 0) goto Label_589; // 0x22c JumpB
	var_969_int = 16; // 0x22d PushI
	Trace(var_969_int); // 0x22e Func
	var_970_int = 0; var_971_int = 0; // 0x230 PushV
	var_971_int = var_821_int; // 0x231 Mov
	func_752(var_970_int, var_971_int); // 0x232 NEW_2
	var_822_int = var_970_int; // 0x233 Mov
	var_972_int = 17; // 0x235 PushI
	Trace(var_972_int); // 0x236 Func
	var_973_bool = 0; var_974_int = 0; // 0x238 PushV
	var_974_int = var_821_int; // 0x239 Mov
	func_775(var_973_bool, var_974_int); // 0x23a NEW_2
	if(var_973_bool == 0) goto Label_586; // 0x23c JumpB
	var_975_int = 18; // 0x23d PushI
	Trace(var_975_int); // 0x23e Func
	var_976_string = "Volonteer : "; // 0x240 PushS
	var_977_string = ""; var_978_int = 0; // 0x241 PushV
	var_978_int = var_822_int; // 0x242 Mov
	func_1585(var_977_string, var_978_int); // 0x243 NEW_2
	var_979_int = var_976_string + var_977_string; // 0x245 Add
	Trace(var_979_int); // 0x246 Func
	var_980_int = 1; // 0x248 PushI
	var_820_int = var_820_int + var_980_int; // 0x249 Add2
	
Label_586:
	var_981_int = 1; // 0x24a PushI
	var_821_int = var_821_int + var_981_int; // 0x24b Add2
	goto Label_552; // 0x24c Jump
	
Label_589:
	var_982_int = 19; // 0x24d PushI
	Trace(var_982_int); // 0x24e Func
	var_823_int = 0; // 0x250 MovI
	var_824_int = 0; // 0x251 MovI
	
Label_594:
	var_983_int = 0; // 0x252 PushV
	func_729(var_983_int); // 0x253 NEW_2
	var_984_bool = var_824_int < var_983_int; // 0x255 LT
	if(var_984_bool == 0) goto Label_628; // 0x256 JumpB
	var_985_int = 20; // 0x257 PushI
	Trace(var_985_int); // 0x258 Func
	var_986_int = 0; var_987_int = 0; // 0x25a PushV
	var_987_int = var_824_int; // 0x25b Mov
	func_752(var_986_int, var_987_int); // 0x25c NEW_2
	var_825_int = var_986_int; // 0x25d Mov
	var_988_bool = 0; var_989_int = 0; // 0x25f PushV
	var_989_int = var_824_int; // 0x260 Mov
	func_799(var_988_bool, var_989_int); // 0x261 NEW_2
	if(var_988_bool == 0) goto Label_625; // 0x263 JumpB
	var_990_int = 21; // 0x264 PushI
	Trace(var_990_int); // 0x265 Func
	var_991_int = 1; // 0x267 PushI
	var_823_int = var_823_int + var_991_int; // 0x268 Add2
	var_992_string = "Diseased volonteer : "; // 0x269 PushS
	var_993_string = ""; var_994_int = 0; // 0x26a PushV
	var_994_int = var_825_int; // 0x26b Mov
	func_1585(var_993_string, var_994_int); // 0x26c NEW_2
	var_995_int = var_992_string + var_993_string; // 0x26e Add
	Trace(var_995_int); // 0x26f Func
	
Label_625:
	var_996_int = 1; // 0x271 PushI
	var_824_int = var_824_int + var_996_int; // 0x272 Add2
	goto Label_594; // 0x273 Jump
	
Label_628:
	var_997_int = 22; // 0x274 PushI
	Trace(var_997_int); // 0x275 Func
	var_998_string = "Today volonteers: "; // 0x277 PushS
	var_999_int = var_998_string + var_820_int; // 0x278 Add
	var_1000_string = ", diseased: "; // 0x279 PushS
	var_1001_int = var_999_int + var_1000_string; // 0x27a Add
	var_1002_int = var_1001_int + var_823_int; // 0x27b Add
	Trace(var_1002_int); // 0x27c Func
	return 24; // 0x27e Return
}


func_1585(var_549_string, var_550_int)
{
	var_553_int = 1; // 0x632 PushI
	var_554_bool = var_550_int == var_553_int; // 0x633 Eq
	if(var_554_bool == 0) goto Label_1591; // 0x634 JumpB
	var_549_string = "alexandr"; // 0x635 MovS
	return 0; // 0x636 Return
	
Label_1591:
	var_555_int = 2; // 0x637 PushI
	var_556_bool = var_550_int == var_555_int; // 0x638 Eq
	if(var_556_bool == 0) goto Label_1596; // 0x639 JumpB
	var_549_string = "andrei"; // 0x63a MovS
	return 0; // 0x63b Return
	
Label_1596:
	var_557_int = 3; // 0x63c PushI
	var_558_bool = var_550_int == var_557_int; // 0x63d Eq
	if(var_558_bool == 0) goto Label_1601; // 0x63e JumpB
	var_549_string = "anna"; // 0x63f MovS
	return 0; // 0x640 Return
	
Label_1601:
	var_559_int = 4; // 0x641 PushI
	var_560_bool = var_550_int == var_559_int; // 0x642 Eq
	if(var_560_bool == 0) goto Label_1606; // 0x643 JumpB
	var_549_string = "bigvlad"; // 0x644 MovS
	return 0; // 0x645 Return
	
Label_1606:
	var_561_int = 5; // 0x646 PushI
	var_562_bool = var_550_int == var_561_int; // 0x647 Eq
	if(var_562_bool == 0) goto Label_1611; // 0x648 JumpB
	var_549_string = "eva"; // 0x649 MovS
	return 0; // 0x64a Return
	
Label_1611:
	var_563_int = 6; // 0x64b PushI
	var_564_bool = var_550_int == var_563_int; // 0x64c Eq
	if(var_564_bool == 0) goto Label_1616; // 0x64d JumpB
	var_549_string = "georg"; // 0x64e MovS
	return 0; // 0x64f Return
	
Label_1616:
	var_565_int = 7; // 0x650 PushI
	var_566_bool = var_550_int == var_565_int; // 0x651 Eq
	if(var_566_bool == 0) goto Label_1621; // 0x652 JumpB
	var_549_string = "grif"; // 0x653 MovS
	return 0; // 0x654 Return
	
Label_1621:
	var_567_int = 8; // 0x655 PushI
	var_568_bool = var_550_int == var_567_int; // 0x656 Eq
	if(var_568_bool == 0) goto Label_1626; // 0x657 JumpB
	var_549_string = "han"; // 0x658 MovS
	return 0; // 0x659 Return
	
Label_1626:
	var_569_int = 9; // 0x65a PushI
	var_570_bool = var_550_int == var_569_int; // 0x65b Eq
	if(var_570_bool == 0) goto Label_1631; // 0x65c JumpB
	var_549_string = "julia"; // 0x65d MovS
	return 0; // 0x65e Return
	
Label_1631:
	var_571_int = 10; // 0x65f PushI
	var_572_bool = var_550_int == var_571_int; // 0x660 Eq
	if(var_572_bool == 0) goto Label_1636; // 0x661 JumpB
	var_549_string = "kapella"; // 0x662 MovS
	return 0; // 0x663 Return
	
Label_1636:
	var_573_int = 11; // 0x664 PushI
	var_574_bool = var_550_int == var_573_int; // 0x665 Eq
	if(var_574_bool == 0) goto Label_1641; // 0x666 JumpB
	var_549_string = "katerina"; // 0x667 MovS
	return 0; // 0x668 Return
	
Label_1641:
	var_575_int = 12; // 0x669 PushI
	var_576_bool = var_550_int == var_575_int; // 0x66a Eq
	if(var_576_bool == 0) goto Label_1646; // 0x66b JumpB
	var_549_string = "klara"; // 0x66c MovS
	return 0; // 0x66d Return
	
Label_1646:
	var_577_int = 13; // 0x66e PushI
	var_578_bool = var_550_int == var_577_int; // 0x66f Eq
	if(var_578_bool == 0) goto Label_1651; // 0x670 JumpB
	var_549_string = "lara"; // 0x671 MovS
	return 0; // 0x672 Return
	
Label_1651:
	var_579_int = 14; // 0x673 PushI
	var_580_bool = var_550_int == var_579_int; // 0x674 Eq
	if(var_580_bool == 0) goto Label_1656; // 0x675 JumpB
	var_549_string = "laska"; // 0x676 MovS
	return 0; // 0x677 Return
	
Label_1656:
	var_581_int = 15; // 0x678 PushI
	var_582_bool = var_550_int == var_581_int; // 0x679 Eq
	if(var_582_bool == 0) goto Label_1661; // 0x67a JumpB
	var_549_string = "maria"; // 0x67b MovS
	return 0; // 0x67c Return
	
Label_1661:
	var_583_int = 16; // 0x67d PushI
	var_584_bool = var_550_int == var_583_int; // 0x67e Eq
	if(var_584_bool == 0) goto Label_1666; // 0x67f JumpB
	var_549_string = "mark"; // 0x680 MovS
	return 0; // 0x681 Return
	
Label_1666:
	var_585_int = 17; // 0x682 PushI
	var_586_bool = var_550_int == var_585_int; // 0x683 Eq
	if(var_586_bool == 0) goto Label_1671; // 0x684 JumpB
	var_549_string = "mat"; // 0x685 MovS
	return 0; // 0x686 Return
	
Label_1671:
	var_587_int = 18; // 0x687 PushI
	var_588_bool = var_550_int == var_587_int; // 0x688 Eq
	if(var_588_bool == 0) goto Label_1676; // 0x689 JumpB
	var_549_string = "mishka"; // 0x68a MovS
	return 0; // 0x68b Return
	
Label_1676:
	var_589_int = 19; // 0x68c PushI
	var_590_bool = var_550_int == var_589_int; // 0x68d Eq
	if(var_590_bool == 0) goto Label_1681; // 0x68e JumpB
	var_549_string = "mladvlad"; // 0x68f MovS
	return 0; // 0x690 Return
	
Label_1681:
	var_591_int = 20; // 0x691 PushI
	var_592_bool = var_550_int == var_591_int; // 0x692 Eq
	if(var_592_bool == 0) goto Label_1686; // 0x693 JumpB
	var_549_string = "notkin"; // 0x694 MovS
	return 0; // 0x695 Return
	
Label_1686:
	var_593_int = 21; // 0x696 PushI
	var_594_bool = var_550_int == var_593_int; // 0x697 Eq
	if(var_594_bool == 0) goto Label_1691; // 0x698 JumpB
	var_549_string = "ospina"; // 0x699 MovS
	return 0; // 0x69a Return
	
Label_1691:
	var_595_int = 22; // 0x69b PushI
	var_596_bool = var_550_int == var_595_int; // 0x69c Eq
	if(var_596_bool == 0) goto Label_1696; // 0x69d JumpB
	var_549_string = "petr"; // 0x69e MovS
	return 0; // 0x69f Return
	
Label_1696:
	var_597_int = 23; // 0x6a0 PushI
	var_598_bool = var_550_int == var_597_int; // 0x6a1 Eq
	if(var_598_bool == 0) goto Label_1701; // 0x6a2 JumpB
	var_549_string = "rubin"; // 0x6a3 MovS
	return 0; // 0x6a4 Return
	
Label_1701:
	var_599_int = 24; // 0x6a5 PushI
	var_600_bool = var_550_int == var_599_int; // 0x6a6 Eq
	if(var_600_bool == 0) goto Label_1706; // 0x6a7 JumpB
	var_549_string = "spi4ka"; // 0x6a8 MovS
	return 0; // 0x6a9 Return
	
Label_1706:
	var_601_int = 25; // 0x6aa PushI
	var_602_bool = var_550_int == var_601_int; // 0x6ab Eq
	if(var_602_bool == 0) goto Label_1711; // 0x6ac JumpB
	var_549_string = "starshina"; // 0x6ad MovS
	return 0; // 0x6ae Return
	
Label_1711:
	var_603_int = 26; // 0x6af PushI
	var_604_bool = var_550_int == var_603_int; // 0x6b0 Eq
	if(var_604_bool == 0) goto Label_1716; // 0x6b1 JumpB
	var_549_string = "viktor"; // 0x6b2 MovS
	return 0; // 0x6b3 Return
	
Label_1716:
	var_605_int = 27; // 0x6b4 PushI
	var_606_bool = var_550_int == var_605_int; // 0x6b5 Eq
	if(var_606_bool == 0) goto Label_1721; // 0x6b6 JumpB
	var_549_string = "wasted_woman"; // 0x6b7 MovS
	return 0; // 0x6b8 Return
	
Label_1721:
	var_607_int = 28; // 0x6b9 PushI
	var_608_bool = var_550_int == var_607_int; // 0x6ba Eq
	if(var_608_bool == 0) goto Label_1726; // 0x6bb JumpB
	var_549_string = "wasted_male"; // 0x6bc MovS
	return 0; // 0x6bd Return
	
Label_1726:
	var_609_int = 29; // 0x6be PushI
	var_610_bool = var_550_int == var_609_int; // 0x6bf Eq
	if(var_610_bool == 0) goto Label_1731; // 0x6c0 JumpB
	var_549_string = "alkash"; // 0x6c1 MovS
	return 0; // 0x6c2 Return
	
Label_1731:
	var_611_int = 30; // 0x6c3 PushI
	var_612_bool = var_550_int == var_611_int; // 0x6c4 Eq
	if(var_612_bool == 0) goto Label_1736; // 0x6c5 JumpB
	var_549_string = "boy"; // 0x6c6 MovS
	return 0; // 0x6c7 Return
	
Label_1736:
	var_613_int = 31; // 0x6c8 PushI
	var_614_bool = var_550_int == var_613_int; // 0x6c9 Eq
	if(var_614_bool == 0) goto Label_1741; // 0x6ca JumpB
	var_549_string = "girl"; // 0x6cb MovS
	return 0; // 0x6cc Return
	
Label_1741:
	var_615_int = 32; // 0x6cd PushI
	var_616_bool = var_550_int == var_615_int; // 0x6ce Eq
	if(var_616_bool == 0) goto Label_1746; // 0x6cf JumpB
	var_549_string = "littleboy"; // 0x6d0 MovS
	return 0; // 0x6d1 Return
	
Label_1746:
	var_617_int = 33; // 0x6d2 PushI
	var_618_bool = var_550_int == var_617_int; // 0x6d3 Eq
	if(var_618_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_549_string = "littlegirl"; // 0x6d5 MovS
	return 0; // 0x6d6 Return
	
Label_1751:
	var_619_int = 34; // 0x6d7 PushI
	var_620_bool = var_550_int == var_619_int; // 0x6d8 Eq
	if(var_620_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_549_string = "butcher"; // 0x6da MovS
	return 0; // 0x6db Return
	
Label_1756:
	var_621_int = 35; // 0x6dc PushI
	var_622_bool = var_550_int == var_621_int; // 0x6dd Eq
	if(var_622_bool == 0) goto Label_1761; // 0x6de JumpB
	var_549_string = "dohodyaga"; // 0x6df MovS
	return 0; // 0x6e0 Return
	
Label_1761:
	var_623_int = 36; // 0x6e1 PushI
	var_624_bool = var_550_int == var_623_int; // 0x6e2 Eq
	if(var_624_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_549_string = "unosha"; // 0x6e4 MovS
	return 0; // 0x6e5 Return
	
Label_1766:
	var_625_int = 37; // 0x6e6 PushI
	var_626_bool = var_550_int == var_625_int; // 0x6e7 Eq
	if(var_626_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_549_string = "vaxxabit"; // 0x6e9 MovS
	return 0; // 0x6ea Return
	
Label_1771:
	var_627_int = 38; // 0x6eb PushI
	var_628_bool = var_550_int == var_627_int; // 0x6ec Eq
	if(var_628_bool == 0) goto Label_1776; // 0x6ed JumpB
	var_549_string = "vaxxabitka"; // 0x6ee MovS
	return 0; // 0x6ef Return
	
Label_1776:
	var_629_int = 39; // 0x6f0 PushI
	var_630_bool = var_550_int == var_629_int; // 0x6f1 Eq
	if(var_630_bool == 0) goto Label_1781; // 0x6f2 JumpB
	var_549_string = "woman"; // 0x6f3 MovS
	return 0; // 0x6f4 Return
	
Label_1781:
	var_631_int = 40; // 0x6f5 PushI
	var_632_bool = var_550_int == var_631_int; // 0x6f6 Eq
	if(var_632_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_549_string = "worker"; // 0x6f8 MovS
	return 0; // 0x6f9 Return
	
Label_1786:
	var_633_int = 42; // 0x6fa PushI
	var_634_bool = var_550_int == var_633_int; // 0x6fb Eq
	if(var_634_bool == 0) goto Label_1791; // 0x6fc JumpB
	var_549_string = "whitemask"; // 0x6fd MovS
	return 0; // 0x6fe Return
	
Label_1791:
	var_635_int = 43; // 0x6ff PushI
	var_636_bool = var_550_int == var_635_int; // 0x700 Eq
	if(var_636_bool == 0) goto Label_1796; // 0x701 JumpB
	var_549_string = "birdmask"; // 0x702 MovS
	return 0; // 0x703 Return
	
Label_1796:
	var_637_int = 44; // 0x704 PushI
	var_638_bool = var_550_int == var_637_int; // 0x705 Eq
	if(var_638_bool == 0) goto Label_1801; // 0x706 JumpB
	var_549_string = "birdmask"; // 0x707 MovS
	return 0; // 0x708 Return
	
Label_1801:
	var_639_int = 46; // 0x709 PushI
	var_640_bool = var_550_int == var_639_int; // 0x70a Eq
	if(var_640_bool == 0) goto Label_1806; // 0x70b JumpB
	var_549_string = "patrol"; // 0x70c MovS
	return 0; // 0x70d Return
	
Label_1806:
	var_641_int = 47; // 0x70e PushI
	var_642_bool = var_550_int == var_641_int; // 0x70f Eq
	if(var_642_bool == 0) goto Label_1811; // 0x710 JumpB
	var_549_string = "danko"; // 0x711 MovS
	return 0; // 0x712 Return
	
Label_1811:
	var_643_int = 48; // 0x713 PushI
	var_644_bool = var_550_int == var_643_int; // 0x714 Eq
	if(var_644_bool == 0) goto Label_1816; // 0x715 JumpB
	var_549_string = "alkash_d"; // 0x716 MovS
	return 0; // 0x717 Return
	
Label_1816:
	var_645_int = 49; // 0x718 PushI
	var_646_bool = var_550_int == var_645_int; // 0x719 Eq
	if(var_646_bool == 0) goto Label_1821; // 0x71a JumpB
	var_549_string = "boy_d"; // 0x71b MovS
	return 0; // 0x71c Return
	
Label_1821:
	var_647_int = 50; // 0x71d PushI
	var_648_bool = var_550_int == var_647_int; // 0x71e Eq
	if(var_648_bool == 0) goto Label_1826; // 0x71f JumpB
	var_549_string = "butcher_d"; // 0x720 MovS
	return 0; // 0x721 Return
	
Label_1826:
	var_649_int = 51; // 0x722 PushI
	var_650_bool = var_550_int == var_649_int; // 0x723 Eq
	if(var_650_bool == 0) goto Label_1831; // 0x724 JumpB
	var_549_string = "dohodyaga_d"; // 0x725 MovS
	return 0; // 0x726 Return
	
Label_1831:
	var_651_int = 52; // 0x727 PushI
	var_652_bool = var_550_int == var_651_int; // 0x728 Eq
	if(var_652_bool == 0) goto Label_1836; // 0x729 JumpB
	var_549_string = "girl_d"; // 0x72a MovS
	return 0; // 0x72b Return
	
Label_1836:
	var_653_int = 53; // 0x72c PushI
	var_654_bool = var_550_int == var_653_int; // 0x72d Eq
	if(var_654_bool == 0) goto Label_1841; // 0x72e JumpB
	var_549_string = "littleboy_d"; // 0x72f MovS
	return 0; // 0x730 Return
	
Label_1841:
	var_655_int = 54; // 0x731 PushI
	var_656_bool = var_550_int == var_655_int; // 0x732 Eq
	if(var_656_bool == 0) goto Label_1846; // 0x733 JumpB
	var_549_string = "littlegirl_d"; // 0x734 MovS
	return 0; // 0x735 Return
	
Label_1846:
	var_657_int = 55; // 0x736 PushI
	var_658_bool = var_550_int == var_657_int; // 0x737 Eq
	if(var_658_bool == 0) goto Label_1851; // 0x738 JumpB
	var_549_string = "unosha2"; // 0x739 MovS
	return 0; // 0x73a Return
	
Label_1851:
	var_659_int = 56; // 0x73b PushI
	var_660_bool = var_550_int == var_659_int; // 0x73c Eq
	if(var_660_bool == 0) goto Label_1856; // 0x73d JumpB
	var_549_string = "unosha_d"; // 0x73e MovS
	return 0; // 0x73f Return
	
Label_1856:
	var_661_int = 57; // 0x740 PushI
	var_662_bool = var_550_int == var_661_int; // 0x741 Eq
	if(var_662_bool == 0) goto Label_1861; // 0x742 JumpB
	var_549_string = "unosha2_d"; // 0x743 MovS
	return 0; // 0x744 Return
	
Label_1861:
	var_663_int = 58; // 0x745 PushI
	var_664_bool = var_550_int == var_663_int; // 0x746 Eq
	if(var_664_bool == 0) goto Label_1866; // 0x747 JumpB
	var_549_string = "vaxxabit_d"; // 0x748 MovS
	return 0; // 0x749 Return
	
Label_1866:
	var_665_int = 59; // 0x74a PushI
	var_666_bool = var_550_int == var_665_int; // 0x74b Eq
	if(var_666_bool == 0) goto Label_1871; // 0x74c JumpB
	var_549_string = "vaxxabitka_d"; // 0x74d MovS
	return 0; // 0x74e Return
	
Label_1871:
	var_667_int = 60; // 0x74f PushI
	var_668_bool = var_550_int == var_667_int; // 0x750 Eq
	if(var_668_bool == 0) goto Label_1876; // 0x751 JumpB
	var_549_string = "wasted_male_d"; // 0x752 MovS
	return 0; // 0x753 Return
	
Label_1876:
	var_669_int = 61; // 0x754 PushI
	var_670_bool = var_550_int == var_669_int; // 0x755 Eq
	if(var_670_bool == 0) goto Label_1881; // 0x756 JumpB
	var_549_string = "wasted_woman_d"; // 0x757 MovS
	return 0; // 0x758 Return
	
Label_1881:
	var_671_int = 62; // 0x759 PushI
	var_672_bool = var_550_int == var_671_int; // 0x75a Eq
	if(var_672_bool == 0) goto Label_1886; // 0x75b JumpB
	var_549_string = "woman_d"; // 0x75c MovS
	return 0; // 0x75d Return
	
Label_1886:
	var_673_int = 63; // 0x75e PushI
	var_674_bool = var_550_int == var_673_int; // 0x75f Eq
	if(var_674_bool == 0) goto Label_1891; // 0x760 JumpB
	var_549_string = "worker2"; // 0x761 MovS
	return 0; // 0x762 Return
	
Label_1891:
	var_675_int = 64; // 0x763 PushI
	var_676_bool = var_550_int == var_675_int; // 0x764 Eq
	if(var_676_bool == 0) goto Label_1896; // 0x765 JumpB
	var_549_string = "worker_d"; // 0x766 MovS
	return 0; // 0x767 Return
	
Label_1896:
	var_677_int = 65; // 0x768 PushI
	var_678_bool = var_550_int == var_677_int; // 0x769 Eq
	if(var_678_bool == 0) goto Label_1901; // 0x76a JumpB
	var_549_string = "worker2_d"; // 0x76b MovS
	return 0; // 0x76c Return
	
Label_1901:
	var_679_int = 66; // 0x76d PushI
	var_680_bool = var_550_int == var_679_int; // 0x76e Eq
	if(var_680_bool == 0) goto Label_1906; // 0x76f JumpB
	var_549_string = "burah"; // 0x770 MovS
	return 0; // 0x771 Return
	
Label_1906:
	var_681_int = 67; // 0x772 PushI
	var_682_bool = var_550_int == var_681_int; // 0x773 Eq
	if(var_682_bool == 0) goto Label_1911; // 0x774 JumpB
	var_549_string = "gorbun_daughter"; // 0x775 MovS
	return 0; // 0x776 Return
	
Label_1911:
	var_683_int = 68; // 0x777 PushI
	var_684_bool = var_550_int == var_683_int; // 0x778 Eq
	if(var_684_bool == 0) goto Label_1916; // 0x779 JumpB
	var_549_string = "gorbun"; // 0x77a MovS
	return 0; // 0x77b Return
	
Label_1916:
	var_685_int = 69; // 0x77c PushI
	var_686_bool = var_550_int == var_685_int; // 0x77d Eq
	if(var_686_bool == 0) goto Label_1921; // 0x77e JumpB
	var_549_string = "albinos"; // 0x77f MovS
	return 0; // 0x780 Return
	
Label_1921:
	var_687_int = 70; // 0x781 PushI
	var_688_bool = var_550_int == var_687_int; // 0x782 Eq
	if(var_688_bool == 0) goto Label_1926; // 0x783 JumpB
	var_549_string = "aglaja"; // 0x784 MovS
	return 0; // 0x785 Return
	
Label_1926:
	var_689_int = 71; // 0x786 PushI
	var_690_bool = var_550_int == var_689_int; // 0x787 Eq
	if(var_690_bool == 0) goto Label_1931; // 0x788 JumpB
	var_549_string = "nude"; // 0x789 MovS
	return 0; // 0x78a Return
	
Label_1931:
	var_691_int = 72; // 0x78b PushI
	var_692_bool = var_550_int == var_691_int; // 0x78c Eq
	if(var_692_bool == 0) goto Label_1936; // 0x78d JumpB
	var_549_string = "block"; // 0x78e MovS
	return 0; // 0x78f Return
	
Label_1936:
	var_693_int = 73; // 0x790 PushI
	var_694_bool = var_550_int == var_693_int; // 0x791 Eq
	if(var_694_bool == 0) goto Label_1941; // 0x792 JumpB
	var_549_string = "officer"; // 0x793 MovS
	return 0; // 0x794 Return
	
Label_1941:
	var_695_int = 74; // 0x795 PushI
	var_696_bool = var_550_int == var_695_int; // 0x796 Eq
	if(var_696_bool == 0) goto Label_1946; // 0x797 JumpB
	var_549_string = "doberman"; // 0x798 MovS
	return 0; // 0x799 Return
	
Label_1946:
	var_697_int = 75; // 0x79a PushI
	var_698_bool = var_550_int == var_697_int; // 0x79b Eq
	if(var_698_bool == 0) goto Label_1951; // 0x79c JumpB
	var_549_string = "grabitel"; // 0x79d MovS
	return 0; // 0x79e Return
	
Label_1951:
	var_699_int = 76; // 0x79f PushI
	var_700_bool = var_550_int == var_699_int; // 0x7a0 Eq
	if(var_700_bool == 0) goto Label_1956; // 0x7a1 JumpB
	var_549_string = "gatherer_wife"; // 0x7a2 MovS
	return 0; // 0x7a3 Return
	
Label_1956:
	var_701_int = 77; // 0x7a4 PushI
	var_702_bool = var_550_int == var_701_int; // 0x7a5 Eq
	if(var_702_bool == 0) goto Label_1961; // 0x7a6 JumpB
	var_549_string = "rat_prophet"; // 0x7a7 MovS
	return 0; // 0x7a8 Return
	
Label_1961:
	var_703_int = 78; // 0x7a9 PushI
	var_704_bool = var_550_int == var_703_int; // 0x7aa Eq
	if(var_704_bool == 0) goto Label_1966; // 0x7ab JumpB
	var_549_string = "morlok"; // 0x7ac MovS
	return 0; // 0x7ad Return
	
Label_1966:
	var_705_int = 79; // 0x7ae PushI
	var_706_bool = var_550_int == var_705_int; // 0x7af Eq
	if(var_706_bool == 0) goto Label_1971; // 0x7b0 JumpB
	var_549_string = "soldier"; // 0x7b1 MovS
	return 0; // 0x7b2 Return
	
Label_1971:
	var_707_int = 80; // 0x7b3 PushI
	var_708_bool = var_550_int == var_707_int; // 0x7b4 Eq
	if(var_708_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_549_string = "britva"; // 0x7b6 MovS
	return 0; // 0x7b7 Return
	
Label_1976:
	var_709_int = 81; // 0x7b8 PushI
	var_710_bool = var_550_int == var_709_int; // 0x7b9 Eq
	if(var_710_bool == 0) goto Label_1981; // 0x7ba JumpB
	var_549_string = "kabaktchik"; // 0x7bb MovS
	return 0; // 0x7bc Return
	
Label_1981:
	var_711_int = 82; // 0x7bd PushI
	var_712_bool = var_550_int == var_711_int; // 0x7be Eq
	if(var_712_bool == 0) goto Label_1986; // 0x7bf JumpB
	var_549_string = "sanitar"; // 0x7c0 MovS
	return 0; // 0x7c1 Return
	
Label_1986:
	var_713_int = 83; // 0x7c2 PushI
	var_714_bool = var_550_int == var_713_int; // 0x7c3 Eq
	if(var_714_bool == 0) goto Label_1991; // 0x7c4 JumpB
	var_549_string = "salesman"; // 0x7c5 MovS
	return 0; // 0x7c6 Return
	
Label_1991:
	var_715_int = 84; // 0x7c7 PushI
	var_716_bool = var_550_int == var_715_int; // 0x7c8 Eq
	if(var_716_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_549_string = "ayyan"; // 0x7ca MovS
	return 0; // 0x7cb Return
	
Label_1996:
	var_717_int = 85; // 0x7cc PushI
	var_718_bool = var_550_int == var_717_int; // 0x7cd Eq
	if(var_718_bool == 0) goto Label_2001; // 0x7ce JumpB
	var_549_string = "petrbirdmask"; // 0x7cf MovS
	return 0; // 0x7d0 Return
	
Label_2001:
	var_719_int = 86; // 0x7d1 PushI
	var_720_bool = var_550_int == var_719_int; // 0x7d2 Eq
	if(var_720_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_549_string = "mogila"; // 0x7d4 MovS
	return 0; // 0x7d5 Return
	
Label_2006:
	var_721_int = 87; // 0x7d6 PushI
	var_722_bool = var_550_int == var_721_int; // 0x7d7 Eq
	if(var_722_bool == 0) goto Label_2011; // 0x7d8 JumpB
	var_549_string = "klikusha"; // 0x7d9 MovS
	return 0; // 0x7da Return
	
Label_2011:
	var_549_string = ""; // 0x7db MovS
	return 0; // 0x7dc Return
}


func_2612()
{
	var_404_object = Obj(); var_405_object = Obj(); // 0xa34 PushV
	var_406_int = 697; // 0xa35 PushI
	var_407_int = 1; // 0xa36 PushI
	var_408_int = 535405; // 0xa37 PushI
	CreateDiaryEntry(var_405_object, var_406_int, var_407_int, var_408_int); // 0xa38 Func
	var_409_bool = 0; var_410_object = Obj(); var_411_int = 0; // 0xa3a PushV
	var_410_object = var_405_object; // 0xa3b Mov
	var_411_int = 695; // 0xa3c MovI
	func_2651(var_409_bool, var_410_object, var_411_int); // 0xa3d NEW_2
	return 2; // 0xa3f Return
}


func_2742(var_307_bool)
{
	var_308_object = Obj(); var_309_int = 0; var_310_int = 0; var_311_int = 0; var_312_object = Obj(); var_313_int = 0; var_314_int = 0; var_315_int = 0; // 0xab6 PushV
	CreateIntVector(var_312_object); // 0xab7 Func
	var_316_object = Obj(); var_317_bool = 0; var_318_int = 0; // 0xab9 PushV
	var_316_object = var_312_object; // 0xaba Mov
	var_317_bool = 0; // 0xabb MovB
	var_318_int = -1; // 0xabc MovI
	func_2084(var_317_bool, var_318_int); // 0xabd NEW_2
	size(var_313_int); // 0xabf ObjFunc
	var_314_int = 0; // 0xac1 MovI
	
Label_2754:
	var_331_bool = var_314_int < var_313_int; // 0xac2 LT
	if(var_331_bool == 0) goto Label_2777; // 0xac3 JumpB
	get(var_315_int, var_314_int); // 0xac4 ObjFunc
	var_332_bool = 0; // 0xac6 PushV
	var_332_bool = 1; // 0xac7 MovB
	var_333_bool = 0; var_334_int = 0; // 0xac8 PushV
	var_334_int = var_315_int; // 0xac9 Mov
	func_2584(var_333_bool, var_334_int); // 0xaca NEW_2
	if(var_333_bool == 0) goto Label_2771; // 0xacc JumpB
	var_335_bool = 0; var_336_int = 0; // 0xacd PushV
	var_336_int = var_315_int; // 0xace Mov
	func_2574(var_335_bool, var_336_int); // 0xacf NEW_2
	if(var_335_bool == 0) goto Label_2771; // 0xad1 JumpB
	var_332_bool = 0; // 0xad2 MovB
	
Label_2771:
	if(var_332_bool == 0) goto Label_2774; // 0xad3 JumpB
	var_307_bool = 0; // 0xad4 MovB
	return 8; // 0xad5 Return
	
Label_2774:
	var_337_int = 1; // 0xad6 PushI
	var_314_int = var_314_int + var_337_int; // 0xad7 Add2
	goto Label_2754; // 0xad8 Jump
	
Label_2777:
	var_307_bool = 1; // 0xad9 MovB
	return 8; // 0xada Return
}


func_951(var_18_int)
{
	var_203_int = 0; var_204_object = Obj(); var_205_object = Obj(); var_206_int = 0; var_207_int = 0; var_208_string = ""; var_209_int = 0; var_210_object = Obj(); var_211_object = Obj(); var_212_int = 0; var_213_int = 0; var_214_string = ""; // 0x3b7 PushV
	var_215_string = ""; var_216_int = 0; // 0x3b8 PushV
	var_216_int = var_18_int; // 0x3b9 Mov
	func_757(var_215_string, var_216_int); // 0x3ba NEW_2
	GetVariable(var_215_string, var_209_int); // 0x3bc Func
	var_220_string = ""; var_221_int = 0; // 0x3be PushV
	var_221_int = var_18_int; // 0x3bf Mov
	func_757(var_220_string, var_221_int); // 0x3c0 NEW_2
	var_222_int = 4; // 0x3c2 PushI
	var_223_int = var_209_int | var_222_int; // 0x3c3 Or
	var_224_int = 1; // 0x3c4 PushI
	var_225_int = var_223_int | var_224_int; // 0x3c5 Or
	var_226_int = 2; // 0x3c6 PushI
	var_227_int = var_225_int | var_226_int; // 0x3c7 Or
	var_228_int = 4; // 0x3c8 PushI
	var_229_int = var_227_int - var_228_int; // 0x3c9 Sub
	var_230_int = 1; // 0x3ca PushI
	var_231_int = var_229_int - var_230_int; // 0x3cb Sub
	var_232_int = 2; // 0x3cc PushI
	var_233_int = var_231_int - var_232_int; // 0x3cd Sub
	SetVariable(var_220_string, var_233_int); // 0x3ce Func
	get(var_210_object, var_18_int); // 0x3d0 TObjFunc
	var_234_bool = var_210_object != 0; // 0x3d2 NullNeq
	if(var_234_bool == 0) goto Label_982; // 0x3d3 JumpB
	Remove(); // 0x3d4 ObjFunc
	
Label_982:
	get(var_211_object, var_18_int); // 0x3d6 TObjFunc
	size(var_212_int); // 0x3d8 ObjFunc
	var_213_int = 0; // 0x3da MovI
	
Label_987:
	var_235_bool = var_213_int < var_212_int; // 0x3db LT
	if(var_235_bool == 0) goto Label_999; // 0x3dc JumpB
	get(var_214_string, var_213_int); // 0x3dd ObjFunc
	var_236_string = ""; var_237_int = 0; // 0x3df PushV
	var_236_string = var_214_string; // 0x3e0 Mov
	var_237_int = 0; // 0x3e1 MovI
	func_2687(var_236_string, var_237_int); // 0x3e2 NEW_2
	var_246_int = 1; // 0x3e4 PushI
	var_213_int = var_213_int + var_246_int; // 0x3e5 Add2
	goto Label_987; // 0x3e6 Jump
	
Label_999:
	return 12; // 0x3e7 Return
}


func_1079(var_948_int)
{
	var_949_int = 0; var_950_int = 0; // 0x437 PushV
	var_951_string = ""; var_952_int = 0; // 0x438 PushV
	var_952_int = var_948_int; // 0x439 Mov
	func_757(var_951_string, var_952_int); // 0x43a NEW_2
	GetVariable(var_951_string, var_950_int); // 0x43c Func
	var_953_string = ""; var_954_int = 0; // 0x43e PushV
	var_954_int = var_948_int; // 0x43f Mov
	func_757(var_953_string, var_954_int); // 0x440 NEW_2
	var_955_int = 8; // 0x442 PushI
	var_956_int = var_950_int & var_955_int; // 0x443 And
	var_957_int = 3; // 0x444 PushI
	var_958_int = var_956_int | var_957_int; // 0x445 Or
	SetVariable(var_953_string, var_958_int); // 0x446 Func
	return 2; // 0x448 Return
}


func_2625()
{
	var_439_object = Obj(); var_440_object = Obj(); // 0xa41 PushV
	var_441_int = 698; // 0xa42 PushI
	var_442_int = 1; // 0xa43 PushI
	var_443_int = 535406; // 0xa44 PushI
	CreateDiaryEntry(var_440_object, var_441_int, var_442_int, var_443_int); // 0xa45 Func
	var_444_bool = 0; var_445_object = Obj(); var_446_int = 0; // 0xa47 PushV
	var_445_object = var_440_object; // 0xa48 Mov
	var_446_int = 696; // 0xa49 MovI
	func_2651(var_444_bool, var_445_object, var_446_int); // 0xa4a NEW_2
	return 2; // 0xa4c Return
}


func_2117(var_197_bool)
{
	var_199_int = 7; // 0x846 PushI
	add(var_199_int); // 0x847 ObjFunc
	var_200_int = 23; // 0x849 PushI
	add(var_200_int); // 0x84a ObjFunc
	var_201_int = 21; // 0x84c PushI
	add(var_201_int); // 0x84d ObjFunc
	var_202_int = 9; // 0x84f PushI
	add(var_202_int); // 0x850 ObjFunc
	var_203_int = 3; // 0x852 PushI
	add(var_203_int); // 0x853 ObjFunc
	var_204_int = 1; // 0x855 PushI
	add(var_204_int); // 0x856 ObjFunc
	var_205_int = 11; // 0x858 PushI
	add(var_205_int); // 0x859 ObjFunc
	var_206_int = 13; // 0x85b PushI
	add(var_206_int); // 0x85c ObjFunc
	var_207_bool = 0; // 0x85e PushB
	var_208_bool = var_197_bool == var_207_bool; // 0x85f Eq
	if(var_208_bool == 0) goto Label_2148; // 0x860 JumpB
	var_209_int = 25; // 0x861 PushI
	add(var_209_int); // 0x862 ObjFunc
	
Label_2148:
	return 0; // 0x864 Return
}


func_70(var_897_int, var_898_int)
{
	var_899_bool = 0; // 0x47 PushV
	var_899_bool = 1; // 0x48 MovB
	var_900_int = 1; // 0x49 PushI
	var_901_bool = var_898_int < var_900_int; // 0x4a LT
	if(var_901_bool == 0) goto Label_80; // 0x4b JumpB
	var_902_int = 11; // 0x4c PushI
	var_903_bool = var_898_int >= var_902_int; // 0x4d GE
	if(var_903_bool == 0) goto Label_80; // 0x4e JumpB
	var_899_bool = 0; // 0x4f MovB
	
Label_80:
	if(var_899_bool == 0) goto Label_83; // 0x50 JumpB
	var_897_int = 0; // 0x51 MovI
	return 0; // 0x52 Return
	
Label_83:
	var_897_int = 1; // 0x53 MovI
	return 0; // 0x54 Return
}


func_1097(var_723_object, var_725_string, var_726_string, var_727_string)
{
	var_732_bool = 0; var_733_cvector = CVector(0,0,0); var_734_cvector = CVector(0,0,0); var_735_object = Obj(); var_736_bool = 0; var_737_cvector = CVector(0,0,0); var_738_cvector = CVector(0,0,0); var_739_object = Obj(); // 0x449 PushV
	GetLocator(var_725_string, var_736_bool, var_737_cvector, var_738_cvector); // 0x44a ObjFunc
	var_740_bool = var_736_bool == 0; // 0x44c Not
	if(var_740_bool == 0) goto Label_1110; // 0x44d JumpB
	var_741_string = "Locator "; // 0x44e PushS
	var_742_int = var_741_string + var_725_string; // 0x44f Add
	var_743_string = " doesn't exist"; // 0x450 PushS
	var_744_int = var_742_int + var_743_string; // 0x451 Add
	Trace(var_744_int); // 0x452 Func
	var_739_object = 0; // 0x454 SetNull
	goto Label_1112; // 0x455 Jump
	
Label_1112:
	var_723_object = var_739_object; // 0x458 Mov
	return 8; // 0x459 Return
	
Label_1110:
	AddStationaryActor(var_739_object, var_737_cvector, var_738_cvector, var_726_string, var_727_string); // 0x456 ObjFunc
}


func_2638(var_418_object)
{
	var_419_object = Obj(); var_420_object = Obj(); // 0xa4e PushV
	GetDiaryRoot(var_420_object); // 0xa4f Func
	var_421_bool = var_420_object == 0; // 0xa51 Not
	if(var_421_bool == 0) goto Label_2648; // 0xa52 JumpB
	var_422_string = "Can't retrieve diary root"; // 0xa53 PushS
	Trace(var_422_string); // 0xa54 Func
	var_418_object = 0; // 0xa56 MovB
	return 2; // 0xa57 Return
	
Label_2648:
	var_418_object = var_420_object; // 0xa58 Mov
	return 2; // 0xa59 Return
}


func_2687(var_236_string, var_237_int)
{
	var_238_object = Obj(); var_239_object = Obj(); // 0xa7f PushV
	FindActor(var_239_object, var_236_string); // 0xa80 Func
	var_240_bool = var_239_object == 0; // 0xa82 Not
	if(var_240_bool == 0) goto Label_2699; // 0xa83 JumpB
	var_241_string = "Door "; // 0xa84 PushS
	var_242_int = var_241_string + var_236_string; // 0xa85 Add
	var_243_string = " not found"; // 0xa86 PushS
	var_244_int = var_242_int + var_243_string; // 0xa87 Add
	Trace(var_244_int); // 0xa88 Func
	goto Label_2702; // 0xa8a Jump
	
Label_2702:
	return 2; // 0xa8e Return
	
Label_2699:
	var_245_string = "dlocked"; // 0xa8b PushS
	SetProperty(var_245_string, var_237_int); // 0xa8c ObjFunc
}


func_85(var_904_int, var_905_int)
{
	var_906_int = 5; // 0x56 PushI
	var_907_bool = var_905_int < var_906_int; // 0x57 LT
	if(var_907_bool == 0) goto Label_91; // 0x58 JumpB
	var_904_int = 0; // 0x59 MovI
	return 0; // 0x5a Return
	
Label_91:
	var_904_int = 1; // 0x5b MovI
	return 0; // 0x5c Return
}


func_729(var_213_int)
{
	var_214_int = 0; var_215_int = 0; // 0x2d9 PushV
	size(var_215_int); // 0x2da TObjFunc
	var_213_int = var_215_int; // 0x2dc Mov
	return 2; // 0x2dd Return
}


func_1115(var_392_bool, var_393_string, var_394_string)
{
	var_395_object = Obj(); var_396_object = Obj(); // 0x45b PushV
	FindActor(var_396_object, var_393_string); // 0x45c Func
	var_397_bool = var_396_object == 0; // 0x45e NullEq
	if(var_397_bool == 0) goto Label_1122; // 0x45f JumpB
	var_392_bool = 0; // 0x460 MovB
	return 2; // 0x461 Return
	
Label_1122:
	Trigger(var_396_object, var_394_string); // 0x462 Func
	var_392_bool = 1; // 0x464 MovB
	return 2; // 0x465 Return
}


func_2780(var_262_bool)
{
	var_263_object = Obj(); var_264_int = 0; var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_int = 0; // 0xadc PushV
	CreateIntVector(var_267_object); // 0xadd Func
	var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; // 0xadf PushV
	var_271_object = var_267_object; // 0xae0 Mov
	var_272_bool = 0; // 0xae1 MovB
	var_273_int = -1; // 0xae2 MovI
	func_2117(var_273_int); // 0xae3 NEW_2
	size(var_268_int); // 0xae5 ObjFunc
	var_269_int = 0; // 0xae7 MovI
	
Label_2792:
	var_285_bool = var_269_int < var_268_int; // 0xae8 LT
	if(var_285_bool == 0) goto Label_2815; // 0xae9 JumpB
	get(var_270_int, var_269_int); // 0xaea ObjFunc
	var_286_bool = 0; // 0xaec PushV
	var_286_bool = 1; // 0xaed MovB
	var_287_bool = 0; var_288_int = 0; // 0xaee PushV
	var_288_int = var_270_int; // 0xaef Mov
	func_2584(var_287_bool, var_288_int); // 0xaf0 NEW_2
	if(var_287_bool == 0) goto Label_2809; // 0xaf2 JumpB
	var_296_bool = 0; var_297_int = 0; // 0xaf3 PushV
	var_297_int = var_270_int; // 0xaf4 Mov
	func_2574(var_296_bool, var_297_int); // 0xaf5 NEW_2
	if(var_296_bool == 0) goto Label_2809; // 0xaf7 JumpB
	var_286_bool = 0; // 0xaf8 MovB
	
Label_2809:
	if(var_286_bool == 0) goto Label_2812; // 0xaf9 JumpB
	var_262_bool = 0; // 0xafa MovB
	return 8; // 0xafb Return
	
Label_2812:
	var_305_int = 1; // 0xafc PushI
	var_269_int = var_269_int + var_305_int; // 0xafd Add2
	goto Label_2792; // 0xafe Jump
	
Label_2815:
	var_262_bool = 1; // 0xaff MovB
	return 8; // 0xb00 Return
}


func_2013(var_494_bool, var_495_int)
{
	var_496_int = 18; // 0x7de PushI
	var_497_bool = var_495_int == var_496_int; // 0x7df Eq
	if(var_497_bool == 0) goto Label_2019; // 0x7e0 JumpB
	var_494_bool = 1; // 0x7e1 MovB
	return 0; // 0x7e2 Return
	
Label_2019:
	var_498_int = 24; // 0x7e3 PushI
	var_499_bool = var_495_int == var_498_int; // 0x7e4 Eq
	if(var_499_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_494_bool = 1; // 0x7e6 MovB
	return 0; // 0x7e7 Return
	
Label_2024:
	var_500_int = 20; // 0x7e8 PushI
	var_501_bool = var_495_int == var_500_int; // 0x7e9 Eq
	if(var_501_bool == 0) goto Label_2029; // 0x7ea JumpB
	var_494_bool = 1; // 0x7eb MovB
	return 0; // 0x7ec Return
	
Label_2029:
	var_502_int = 14; // 0x7ed PushI
	var_503_bool = var_495_int == var_502_int; // 0x7ee Eq
	if(var_503_bool == 0) goto Label_2034; // 0x7ef JumpB
	var_494_bool = 1; // 0x7f0 MovB
	return 0; // 0x7f1 Return
	
Label_2034:
	var_504_int = 10; // 0x7f2 PushI
	var_505_bool = var_495_int == var_504_int; // 0x7f3 Eq
	if(var_505_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_494_bool = 1; // 0x7f5 MovB
	return 0; // 0x7f6 Return
	
Label_2039:
	var_506_int = 17; // 0x7f7 PushI
	var_507_bool = var_495_int == var_506_int; // 0x7f8 Eq
	if(var_507_bool == 0) goto Label_2044; // 0x7f9 JumpB
	var_494_bool = 1; // 0x7fa MovB
	return 0; // 0x7fb Return
	
Label_2044:
	var_508_int = 8; // 0x7fc PushI
	var_509_bool = var_495_int == var_508_int; // 0x7fd Eq
	if(var_509_bool == 0) goto Label_2049; // 0x7fe JumpB
	var_494_bool = 1; // 0x7ff MovB
	return 0; // 0x800 Return
	
Label_2049:
	var_494_bool = 0; // 0x801 MovB
	return 0; // 0x802 Return
}


func_734(var_19_int, var_20_int)
{
	var_193_int = 0; var_194_int = 0; var_195_int = 0; var_196_int = 0; // 0x2de PushV
	var_195_int = 0; // 0x2df MovI
	
Label_736:
	var_197_int = 0; // 0x2e0 PushV
	func_729(var_197_int); // 0x2e1 NEW_2
	var_200_bool = var_195_int < var_197_int; // 0x2e3 LT
	if(var_200_bool == 0) goto Label_750; // 0x2e4 JumpB
	get(var_196_int, var_195_int); // 0x2e5 TObjFunc
	var_201_bool = var_20_int == var_196_int; // 0x2e7 Eq
	if(var_201_bool == 0) goto Label_747; // 0x2e8 JumpB
	var_19_int = var_195_int; // 0x2e9 Mov
	return 4; // 0x2ea Return
	
Label_747:
	var_202_int = 1; // 0x2eb PushI
	var_195_int = var_195_int + var_202_int; // 0x2ec Add2
	goto Label_736; // 0x2ed Jump
	
Label_750:
	var_19_int = -1; // 0x2ee MovI
	return 4; // 0x2ef Return
}


func_2651(var_409_bool, var_410_object, var_411_int)
{
	var_412_object = Obj(); var_413_object = Obj(); var_414_int = 0; var_415_object = Obj(); var_416_object = Obj(); var_417_int = 0; // 0xa5b PushV
	var_418_object = Obj(); // 0xa5c PushV
	func_2638(var_418_object); // 0xa5d NEW_2
	var_415_object = var_418_object; // 0xa5e Mov
	Find(var_411_int, var_416_object); // 0xa60 ObjFunc
	var_423_bool = var_416_object == 0; // 0xa62 Not
	if(var_423_bool == 0) goto Label_2666; // 0xa63 JumpB
	var_424_string = "Can't find diary parent with id: "; // 0xa64 PushS
	var_425_int = var_424_string + var_411_int; // 0xa65 Add
	Trace(var_425_int); // 0xa66 Func
	var_409_bool = 0; // 0xa68 MovB
	return 6; // 0xa69 Return
	
Label_2666:
	AddChild(var_410_object); // 0xa6a ObjFunc
	var_426_int = 7; // 0xa6c PushI
	SendWorldWndMessage(var_426_int); // 0xa6d Func
	GetCategory(var_417_int); // 0xa6f ObjFunc
	SetDiarySection(var_417_int); // 0xa71 Func
	var_409_bool = 0; // 0xa73 MovB
	return 6; // 0xa74 Return
}


func_2149(var_30_object, var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x865 PushV
	var_34_int = 1; // 0x866 PushI
	add(var_34_int); // 0x867 ObjFunc
	var_35_object = var_30_object; // 0x869 Push
	if(var_35_object == 0) goto Label_2162; // 0x86a JumpB
	CreateStringVector(var_33_object); // 0x86b Func
	var_36_string = "cot_alexandr@door1"; // 0x86d PushS
	add(var_36_string); // 0x86e ObjFunc
	add(var_33_object); // 0x870 ObjFunc
	
Label_2162:
	var_37_object = var_31_object; // 0x872 Push
	if(var_37_object == 0) goto Label_2167; // 0x873 JumpB
	var_38_string = "outdoor"; // 0x874 PushS
	add(var_38_string); // 0x875 ObjFunc
	
Label_2167:
	var_39_int = 2; // 0x877 PushI
	add(var_39_int); // 0x878 ObjFunc
	var_40_object = var_30_object; // 0x87a Push
	if(var_40_object == 0) goto Label_2179; // 0x87b JumpB
	CreateStringVector(var_33_object); // 0x87c Func
	var_41_string = "shouse1_kabak@door1"; // 0x87e PushS
	add(var_41_string); // 0x87f ObjFunc
	add(var_33_object); // 0x881 ObjFunc
	
Label_2179:
	var_42_object = var_31_object; // 0x883 Push
	if(var_42_object == 0) goto Label_2184; // 0x884 JumpB
	var_43_string = "outdoor"; // 0x885 PushS
	add(var_43_string); // 0x886 ObjFunc
	
Label_2184:
	var_44_int = 3; // 0x888 PushI
	add(var_44_int); // 0x889 ObjFunc
	var_45_object = var_30_object; // 0x88b Push
	if(var_45_object == 0) goto Label_2196; // 0x88c JumpB
	CreateStringVector(var_33_object); // 0x88d Func
	var_46_string = "cot_anna@door1"; // 0x88f PushS
	add(var_46_string); // 0x890 ObjFunc
	add(var_33_object); // 0x892 ObjFunc
	
Label_2196:
	var_47_object = var_31_object; // 0x894 Push
	if(var_47_object == 0) goto Label_2201; // 0x895 JumpB
	var_48_string = "outdoor"; // 0x896 PushS
	add(var_48_string); // 0x897 ObjFunc
	
Label_2201:
	var_49_int = 4; // 0x899 PushI
	add(var_49_int); // 0x89a ObjFunc
	var_50_object = var_30_object; // 0x89c Push
	if(var_50_object == 0) goto Label_2213; // 0x89d JumpB
	CreateStringVector(var_33_object); // 0x89e Func
	var_51_string = "cot_bigvlad@door1"; // 0x8a0 PushS
	add(var_51_string); // 0x8a1 ObjFunc
	add(var_33_object); // 0x8a3 ObjFunc
	
Label_2213:
	var_52_object = var_31_object; // 0x8a5 Push
	if(var_52_object == 0) goto Label_2218; // 0x8a6 JumpB
	var_53_string = "outdoor"; // 0x8a7 PushS
	add(var_53_string); // 0x8a8 ObjFunc
	
Label_2218:
	var_54_int = 6; // 0x8aa PushI
	add(var_54_int); // 0x8ab ObjFunc
	var_55_object = var_30_object; // 0x8ad Push
	if(var_55_object == 0) goto Label_2230; // 0x8ae JumpB
	CreateStringVector(var_33_object); // 0x8af Func
	var_56_string = "cot_georg@door1"; // 0x8b1 PushS
	add(var_56_string); // 0x8b2 ObjFunc
	add(var_33_object); // 0x8b4 ObjFunc
	
Label_2230:
	var_57_object = var_31_object; // 0x8b6 Push
	if(var_57_object == 0) goto Label_2235; // 0x8b7 JumpB
	var_58_string = "outdoor"; // 0x8b8 PushS
	add(var_58_string); // 0x8b9 ObjFunc
	
Label_2235:
	var_59_int = 15; // 0x8bb PushI
	add(var_59_int); // 0x8bc ObjFunc
	var_60_object = var_30_object; // 0x8be Push
	if(var_60_object == 0) goto Label_2247; // 0x8bf JumpB
	CreateStringVector(var_33_object); // 0x8c0 Func
	var_61_string = "cot_maria@door1"; // 0x8c2 PushS
	add(var_61_string); // 0x8c3 ObjFunc
	add(var_33_object); // 0x8c5 ObjFunc
	
Label_2247:
	var_62_object = var_31_object; // 0x8c7 Push
	if(var_62_object == 0) goto Label_2252; // 0x8c8 JumpB
	var_63_string = "outdoor"; // 0x8c9 PushS
	add(var_63_string); // 0x8ca ObjFunc
	
Label_2252:
	var_64_int = 9; // 0x8cc PushI
	add(var_64_int); // 0x8cd ObjFunc
	var_65_object = var_30_object; // 0x8cf Push
	if(var_65_object == 0) goto Label_2264; // 0x8d0 JumpB
	CreateStringVector(var_33_object); // 0x8d1 Func
	var_66_string = "cot_julia@door1"; // 0x8d3 PushS
	add(var_66_string); // 0x8d4 ObjFunc
	add(var_33_object); // 0x8d6 ObjFunc
	
Label_2264:
	var_67_object = var_31_object; // 0x8d8 Push
	if(var_67_object == 0) goto Label_2269; // 0x8d9 JumpB
	var_68_string = "outdoor"; // 0x8da PushS
	add(var_68_string); // 0x8db ObjFunc
	
Label_2269:
	var_69_int = 10; // 0x8dd PushI
	add(var_69_int); // 0x8de ObjFunc
	var_70_object = var_30_object; // 0x8e0 Push
	if(var_70_object == 0) goto Label_2281; // 0x8e1 JumpB
	CreateStringVector(var_33_object); // 0x8e2 Func
	var_71_string = "cot_kapella@door1"; // 0x8e4 PushS
	add(var_71_string); // 0x8e5 ObjFunc
	add(var_33_object); // 0x8e7 ObjFunc
	
Label_2281:
	var_72_object = var_31_object; // 0x8e9 Push
	if(var_72_object == 0) goto Label_2286; // 0x8ea JumpB
	var_73_string = "outdoor"; // 0x8eb PushS
	add(var_73_string); // 0x8ec ObjFunc
	
Label_2286:
	var_74_int = 11; // 0x8ee PushI
	add(var_74_int); // 0x8ef ObjFunc
	var_75_object = var_30_object; // 0x8f1 Push
	if(var_75_object == 0) goto Label_2298; // 0x8f2 JumpB
	CreateStringVector(var_33_object); // 0x8f3 Func
	var_76_string = "cot_katerina@door1"; // 0x8f5 PushS
	add(var_76_string); // 0x8f6 ObjFunc
	add(var_33_object); // 0x8f8 ObjFunc
	
Label_2298:
	var_77_object = var_31_object; // 0x8fa Push
	if(var_77_object == 0) goto Label_2303; // 0x8fb JumpB
	var_78_string = "outdoor"; // 0x8fc PushS
	add(var_78_string); // 0x8fd ObjFunc
	
Label_2303:
	var_79_int = 13; // 0x8ff PushI
	add(var_79_int); // 0x900 ObjFunc
	var_80_object = var_30_object; // 0x902 Push
	if(var_80_object == 0) goto Label_2315; // 0x903 JumpB
	CreateStringVector(var_33_object); // 0x904 Func
	var_81_string = "cot_lara@door1"; // 0x906 PushS
	add(var_81_string); // 0x907 ObjFunc
	add(var_33_object); // 0x909 ObjFunc
	
Label_2315:
	var_82_object = var_31_object; // 0x90b Push
	if(var_82_object == 0) goto Label_2320; // 0x90c JumpB
	var_83_string = "outdoor"; // 0x90d PushS
	add(var_83_string); // 0x90e ObjFunc
	
Label_2320:
	var_84_int = 18; // 0x910 PushI
	add(var_84_int); // 0x911 ObjFunc
	var_85_object = var_30_object; // 0x913 Push
	if(var_85_object == 0) goto Label_2332; // 0x914 JumpB
	CreateStringVector(var_33_object); // 0x915 Func
	var_86_string = "vagon_mishka@door1"; // 0x917 PushS
	add(var_86_string); // 0x918 ObjFunc
	add(var_33_object); // 0x91a ObjFunc
	
Label_2332:
	var_87_object = var_31_object; // 0x91c Push
	if(var_87_object == 0) goto Label_2337; // 0x91d JumpB
	var_88_string = "outdoor"; // 0x91e PushS
	add(var_88_string); // 0x91f ObjFunc
	
Label_2337:
	var_89_int = 19; // 0x921 PushI
	add(var_89_int); // 0x922 ObjFunc
	var_90_object = var_30_object; // 0x924 Push
	if(var_90_object == 0) goto Label_2349; // 0x925 JumpB
	CreateStringVector(var_33_object); // 0x926 Func
	var_91_string = "house_vlad@door1"; // 0x928 PushS
	add(var_91_string); // 0x929 ObjFunc
	add(var_33_object); // 0x92b ObjFunc
	
Label_2349:
	var_92_object = var_31_object; // 0x92d Push
	if(var_92_object == 0) goto Label_2354; // 0x92e JumpB
	var_93_string = "outdoor"; // 0x92f PushS
	add(var_93_string); // 0x930 ObjFunc
	
Label_2354:
	var_94_int = 20; // 0x932 PushI
	add(var_94_int); // 0x933 ObjFunc
	var_95_object = var_30_object; // 0x935 Push
	if(var_95_object == 0) goto Label_2366; // 0x936 JumpB
	CreateStringVector(var_33_object); // 0x937 Func
	var_96_string = "warehouse_notkin@door1"; // 0x939 PushS
	add(var_96_string); // 0x93a ObjFunc
	add(var_33_object); // 0x93c ObjFunc
	
Label_2366:
	var_97_object = var_31_object; // 0x93e Push
	if(var_97_object == 0) goto Label_2371; // 0x93f JumpB
	var_98_string = "outdoor"; // 0x940 PushS
	add(var_98_string); // 0x941 ObjFunc
	
Label_2371:
	var_99_int = 21; // 0x943 PushI
	add(var_99_int); // 0x944 ObjFunc
	var_100_object = var_30_object; // 0x946 Push
	if(var_100_object == 0) goto Label_2383; // 0x947 JumpB
	CreateStringVector(var_33_object); // 0x948 Func
	var_101_string = "dt_house_1_04@door1"; // 0x94a PushS
	add(var_101_string); // 0x94b ObjFunc
	add(var_33_object); // 0x94d ObjFunc
	
Label_2383:
	var_102_object = var_31_object; // 0x94f Push
	if(var_102_object == 0) goto Label_2388; // 0x950 JumpB
	var_103_string = "outdoor"; // 0x951 PushS
	add(var_103_string); // 0x952 ObjFunc
	
Label_2388:
	var_104_int = 22; // 0x954 PushI
	add(var_104_int); // 0x955 ObjFunc
	var_105_object = var_30_object; // 0x957 Push
	if(var_105_object == 0) goto Label_2403; // 0x958 JumpB
	CreateStringVector(var_33_object); // 0x959 Func
	var_106_string = "house_petr@door1"; // 0x95b PushS
	add(var_106_string); // 0x95c ObjFunc
	var_107_string = "house_petr@door2"; // 0x95e PushS
	add(var_107_string); // 0x95f ObjFunc
	add(var_33_object); // 0x961 ObjFunc
	
Label_2403:
	var_108_object = var_31_object; // 0x963 Push
	if(var_108_object == 0) goto Label_2408; // 0x964 JumpB
	var_109_string = "outdoor"; // 0x965 PushS
	add(var_109_string); // 0x966 ObjFunc
	
Label_2408:
	var_110_int = 24; // 0x968 PushI
	add(var_110_int); // 0x969 ObjFunc
	var_111_object = var_30_object; // 0x96b Push
	if(var_111_object == 0) goto Label_2423; // 0x96c JumpB
	CreateStringVector(var_33_object); // 0x96d Func
	var_112_string = "house_spi4ka@door1"; // 0x96f PushS
	add(var_112_string); // 0x970 ObjFunc
	var_113_string = "house_spi4ka@door2"; // 0x972 PushS
	add(var_113_string); // 0x973 ObjFunc
	add(var_33_object); // 0x975 ObjFunc
	
Label_2423:
	var_114_object = var_31_object; // 0x977 Push
	if(var_114_object == 0) goto Label_2428; // 0x978 JumpB
	var_115_string = "outdoor"; // 0x979 PushS
	add(var_115_string); // 0x97a ObjFunc
	
Label_2428:
	var_116_int = 26; // 0x97c PushI
	add(var_116_int); // 0x97d ObjFunc
	var_117_object = var_30_object; // 0x97f Push
	if(var_117_object == 0) goto Label_2440; // 0x980 JumpB
	CreateStringVector(var_33_object); // 0x981 Func
	var_118_string = "cot_viktor@door1"; // 0x983 PushS
	add(var_118_string); // 0x984 ObjFunc
	add(var_33_object); // 0x986 ObjFunc
	
Label_2440:
	var_119_object = var_31_object; // 0x988 Push
	if(var_119_object == 0) goto Label_2445; // 0x989 JumpB
	var_120_string = "outdoor"; // 0x98a PushS
	add(var_120_string); // 0x98b ObjFunc
	
Label_2445:
	var_121_int = 8; // 0x98d PushI
	add(var_121_int); // 0x98e ObjFunc
	var_122_object = var_30_object; // 0x990 Push
	if(var_122_object == 0) goto Label_2454; // 0x991 JumpB
	CreateStringVector(var_33_object); // 0x992 Func
	add(var_33_object); // 0x994 ObjFunc
	
Label_2454:
	var_123_object = var_31_object; // 0x996 Push
	if(var_123_object == 0) goto Label_2459; // 0x997 JumpB
	var_124_string = "outdoor"; // 0x998 PushS
	add(var_124_string); // 0x999 ObjFunc
	
Label_2459:
	var_125_int = 14; // 0x99b PushI
	add(var_125_int); // 0x99c ObjFunc
	var_126_object = var_30_object; // 0x99e Push
	if(var_126_object == 0) goto Label_2471; // 0x99f JumpB
	CreateStringVector(var_33_object); // 0x9a0 Func
	var_127_string = "storojka@door1"; // 0x9a2 PushS
	add(var_127_string); // 0x9a3 ObjFunc
	add(var_33_object); // 0x9a5 ObjFunc
	
Label_2471:
	var_128_object = var_31_object; // 0x9a7 Push
	if(var_128_object == 0) goto Label_2476; // 0x9a8 JumpB
	var_129_string = "outdoor"; // 0x9a9 PushS
	add(var_129_string); // 0x9aa ObjFunc
	
Label_2476:
	var_130_int = 17; // 0x9ac PushI
	add(var_130_int); // 0x9ad ObjFunc
	var_131_object = var_30_object; // 0x9af Push
	if(var_131_object == 0) goto Label_2488; // 0x9b0 JumpB
	CreateStringVector(var_33_object); // 0x9b1 Func
	var_132_string = "termitnik_mat@door1"; // 0x9b3 PushS
	add(var_132_string); // 0x9b4 ObjFunc
	add(var_33_object); // 0x9b6 ObjFunc
	
Label_2488:
	var_133_object = var_31_object; // 0x9b8 Push
	if(var_133_object == 0) goto Label_2493; // 0x9b9 JumpB
	var_134_string = "termitnik"; // 0x9ba PushS
	add(var_134_string); // 0x9bb ObjFunc
	
Label_2493:
	var_135_int = 16; // 0x9bd PushI
	add(var_135_int); // 0x9be ObjFunc
	var_136_object = var_30_object; // 0x9c0 Push
	if(var_136_object == 0) goto Label_2502; // 0x9c1 JumpB
	CreateStringVector(var_33_object); // 0x9c2 Func
	add(var_33_object); // 0x9c4 ObjFunc
	
Label_2502:
	var_137_object = var_31_object; // 0x9c6 Push
	if(var_137_object == 0) goto Label_2507; // 0x9c7 JumpB
	var_138_string = "outdoor"; // 0x9c8 PushS
	add(var_138_string); // 0x9c9 ObjFunc
	
Label_2507:
	var_139_int = 7; // 0x9cb PushI
	add(var_139_int); // 0x9cc ObjFunc
	var_140_object = var_30_object; // 0x9ce Push
	if(var_140_object == 0) goto Label_2519; // 0x9cf JumpB
	CreateStringVector(var_33_object); // 0x9d0 Func
	var_141_string = "warehouse_grif@door1"; // 0x9d2 PushS
	add(var_141_string); // 0x9d3 ObjFunc
	add(var_33_object); // 0x9d5 ObjFunc
	
Label_2519:
	var_142_object = var_31_object; // 0x9d7 Push
	if(var_142_object == 0) goto Label_2524; // 0x9d8 JumpB
	var_143_string = "outdoor"; // 0x9d9 PushS
	add(var_143_string); // 0x9da ObjFunc
	
Label_2524:
	var_144_int = 23; // 0x9dc PushI
	add(var_144_int); // 0x9dd ObjFunc
	var_145_object = var_30_object; // 0x9df Push
	if(var_145_object == 0) goto Label_2536; // 0x9e0 JumpB
	CreateStringVector(var_33_object); // 0x9e1 Func
	var_146_string = "warehouse_rubin@door1"; // 0x9e3 PushS
	add(var_146_string); // 0x9e4 ObjFunc
	add(var_33_object); // 0x9e6 ObjFunc
	
Label_2536:
	var_147_object = var_31_object; // 0x9e8 Push
	if(var_147_object == 0) goto Label_2541; // 0x9e9 JumpB
	var_148_string = "outdoor"; // 0x9ea PushS
	add(var_148_string); // 0x9eb ObjFunc
	
Label_2541:
	var_149_int = 5; // 0x9ed PushI
	add(var_149_int); // 0x9ee ObjFunc
	var_150_object = var_30_object; // 0x9f0 Push
	if(var_150_object == 0) goto Label_2553; // 0x9f1 JumpB
	CreateStringVector(var_33_object); // 0x9f2 Func
	var_151_string = "cot_eva@door1"; // 0x9f4 PushS
	add(var_151_string); // 0x9f5 ObjFunc
	add(var_33_object); // 0x9f7 ObjFunc
	
Label_2553:
	var_152_object = var_31_object; // 0x9f9 Push
	if(var_152_object == 0) goto Label_2558; // 0x9fa JumpB
	var_153_string = "outdoor"; // 0x9fb PushS
	add(var_153_string); // 0x9fc ObjFunc
	
Label_2558:
	var_154_int = 25; // 0x9fe PushI
	add(var_154_int); // 0x9ff ObjFunc
	var_155_object = var_30_object; // 0xa01 Push
	if(var_155_object == 0) goto Label_2567; // 0xa02 JumpB
	CreateStringVector(var_33_object); // 0xa03 Func
	add(var_33_object); // 0xa05 ObjFunc
	
Label_2567:
	var_156_object = var_31_object; // 0xa07 Push
	if(var_156_object == 0) goto Label_2572; // 0xa08 JumpB
	var_157_string = "outdoor"; // 0xa09 PushS
	add(var_157_string); // 0xa0a ObjFunc
	
Label_2572:
	return 2; // 0xa0c Return
}


func_102(var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_247_bool = 0; // 0x66 PushV
	var_247_bool = 0; // 0x67 MovB
	var_248_bool = 0; // 0x68 PushV
	var_248_bool = 0; // 0x69 MovB
	var_249_bool = 0; // 0x6a PushV
	var_249_bool = 0; // 0x6b MovB
	var_250_bool = var_8_bool == 0; // 0x6c Not
	if(var_250_bool == 0) goto Label_116; // 0x6d JumpB
	var_251_bool = 0; var_252_int = 0; // 0x6e PushV
	var_252_int = 12; // 0x6f MovI
	func_1149(var_251_bool, var_252_int); // 0x70 NEW_2
	if(var_251_bool == 0) goto Label_116; // 0x72 JumpB
	var_249_bool = 1; // 0x73 MovB
	
Label_116:
	if(var_249_bool == 0) goto Label_122; // 0x74 JumpB
	var_259_bool = 0; // 0x75 PushV
	func_2818(var_259_bool); // 0x76 NEW_2
	if(var_259_bool == 0) goto Label_122; // 0x78 JumpB
	var_248_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_248_bool == 0) goto Label_130; // 0x7a JumpB
	var_372_int = 0; // 0x7b PushV
	func_1141(var_372_int); // 0x7c NEW_2
	var_377_int = 8; // 0x7e PushI
	var_378_bool = var_372_int >= var_377_int; // 0x7f GE
	if(var_378_bool == 0) goto Label_130; // 0x80 JumpB
	var_247_bool = 1; // 0x81 MovB
	
Label_130:
	if(var_247_bool == 0) goto Label_139; // 0x82 JumpB
	var_379_float = 0; // 0x83 PushV
	var_380_float = 0; // 0x84 PushV
	func_1127(var_380_float); // 0x85 NEW_2
	var_379_float = var_380_float; // 0x86 Mov
	func_6(var_379_float); // 0x88 NEW_2
	var_8_bool = 1; // 0x8a TMovB
	
Label_139:
	var_398_bool = 0; // 0x8b PushV
	var_398_bool = 0; // 0x8c MovB
	var_399_bool = 0; // 0x8d PushV
	var_399_bool = 0; // 0x8e MovB
	var_400_bool = var_9_bool == 0; // 0x8f Not
	if(var_400_bool == 0) goto Label_151; // 0x90 JumpB
	var_401_bool = 0; var_402_int = 0; // 0x91 PushV
	var_402_int = 12; // 0x92 MovI
	func_1149(var_401_bool, var_402_int); // 0x93 NEW_2
	if(var_401_bool == 0) goto Label_151; // 0x95 JumpB
	var_399_bool = 1; // 0x96 MovB
	
Label_151:
	if(var_399_bool == 0) goto Label_157; // 0x97 JumpB
	var_403_bool = 0; // 0x98 PushV
	func_2742(var_403_bool); // 0x99 NEW_2
	if(var_403_bool == 0) goto Label_157; // 0x9b JumpB
	var_398_bool = 1; // 0x9c MovB
	
Label_157:
	if(var_398_bool == 0) goto Label_162; // 0x9d JumpB
	var_9_bool = 1; // 0x9e TMovB
	func_21(); // 0xa0 NEW_2
	
Label_162:
	var_427_bool = 0; // 0xa2 PushV
	var_427_bool = 0; // 0xa3 MovB
	var_428_bool = 0; // 0xa4 PushV
	var_428_bool = 0; // 0xa5 MovB
	var_429_bool = var_10_bool == 0; // 0xa6 Not
	if(var_429_bool == 0) goto Label_174; // 0xa7 JumpB
	var_430_bool = 0; var_431_int = 0; // 0xa8 PushV
	var_431_int = 12; // 0xa9 MovI
	func_1149(var_430_bool, var_431_int); // 0xaa NEW_2
	if(var_430_bool == 0) goto Label_174; // 0xac JumpB
	var_428_bool = 1; // 0xad MovB
	
Label_174:
	if(var_428_bool == 0) goto Label_180; // 0xae JumpB
	var_432_bool = 0; // 0xaf PushV
	func_2704(var_432_bool); // 0xb0 NEW_2
	if(var_432_bool == 0) goto Label_180; // 0xb2 JumpB
	var_427_bool = 1; // 0xb3 MovB
	
Label_180:
	if(var_427_bool == 0) goto Label_185; // 0xb4 JumpB
	var_10_bool = 1; // 0xb5 TMovB
	func_25(); // 0xb7 NEW_2
	
Label_185:
	var_433_bool = 0; // 0xb9 PushV
	var_433_bool = 0; // 0xba MovB
	var_434_bool = 0; // 0xbb PushV
	var_434_bool = 0; // 0xbc MovB
	var_435_bool = var_11_bool == 0; // 0xbd Not
	if(var_435_bool == 0) goto Label_197; // 0xbe JumpB
	var_436_bool = 0; var_437_int = 0; // 0xbf PushV
	var_437_int = 12; // 0xc0 MovI
	func_1149(var_436_bool, var_437_int); // 0xc1 NEW_2
	if(var_436_bool == 0) goto Label_197; // 0xc3 JumpB
	var_434_bool = 1; // 0xc4 MovB
	
Label_197:
	if(var_434_bool == 0) goto Label_203; // 0xc5 JumpB
	var_438_bool = 0; // 0xc6 PushV
	func_2780(var_438_bool); // 0xc7 NEW_2
	if(var_438_bool == 0) goto Label_203; // 0xc9 JumpB
	var_433_bool = 1; // 0xca MovB
	
Label_203:
	if(var_433_bool == 0) goto Label_208; // 0xcb JumpB
	var_11_bool = 1; // 0xcc TMovB
	func_17(); // 0xce NEW_2
	
Label_208:
	return 0; // 0xd0 Return
}


func_1127(var_380_float)
{
	var_381_float = 0; var_382_float = 0; // 0x467 PushV
	GetGameTime(var_382_float); // 0x468 Func
	var_380_float = var_382_float; // 0x46a Mov
	return 2; // 0x46b Return
}


func_359(var_894_int, var_895_int, var_896_int)
{
	var_908_int = 0; var_909_int = 0; var_910_int = 0; var_911_int = 0; // 0x167 PushV
	var_910_int = 0; // 0x168 MovI
	
Label_361:
	var_912_bool = var_910_int < var_894_int; // 0x169 LT
	if(var_912_bool == 0) goto Label_371; // 0x16a JumpB
	var_913_int = 0; var_914_int = 0; var_915_bool = 0; // 0x16b PushV
	var_914_int = var_896_int; // 0x16c Mov
	var_915_bool = 1; // 0x16d MovB
	func_383(var_913_int, var_914_int, var_915_bool); // 0x16e NEW_2
	var_960_int = 1; // 0x170 PushI
	var_910_int = var_910_int + var_960_int; // 0x171 Add2
	goto Label_361; // 0x172 Jump
	
Label_371:
	var_911_int = 0; // 0x173 MovI
	
Label_372:
	var_961_bool = var_911_int < var_895_int; // 0x174 LT
	if(var_961_bool == 0) goto Label_382; // 0x175 JumpB
	var_962_int = 0; var_963_int = 0; var_964_bool = 0; // 0x176 PushV
	var_963_int = var_896_int; // 0x177 Mov
	var_964_bool = 0; // 0x178 MovB
	func_383(var_962_int, var_963_int, var_964_bool); // 0x179 NEW_2
	var_965_int = 1; // 0x17b PushI
	var_911_int = var_911_int + var_965_int; // 0x17c Add2
	goto Label_372; // 0x17d Jump
	
Label_382:
	return 4; // 0x17e Return
}


func_1002(var_514_int)
{
	var_519_int = 0; var_520_object = Obj(); var_521_object = Obj(); var_522_string = ""; var_523_object = Obj(); var_524_int = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_object = Obj(); var_529_object = Obj(); var_530_string = ""; var_531_object = Obj(); var_532_int = 0; var_533_int = 0; var_534_string = ""; // 0x3ea PushV
	var_535_string = ""; var_536_int = 0; // 0x3eb PushV
	var_536_int = var_514_int; // 0x3ec Mov
	func_757(var_535_string, var_536_int); // 0x3ed NEW_2
	var_537_int = 17; // 0x3ef PushI
	SetVariable(var_535_string, var_537_int); // 0x3f0 Func
	get(var_528_object, var_514_int); // 0x3f2 TObjFunc
	var_538_bool = var_528_object == 0; // 0x3f4 NullEq
	if(var_538_bool == 0) goto Label_1043; // 0x3f5 JumpB
	var_539_object = Obj(); var_540_int = 0; // 0x3f6 PushV
	var_540_int = var_514_int; // 0x3f7 Mov
	func_1063(var_539_object, var_540_int); // 0x3f8 NEW_2
	var_529_object = var_539_object; // 0x3f9 Mov
	var_549_string = ""; var_550_int = 0; // 0x3fb PushV
	var_551_int = 0; var_552_int = 0; // 0x3fc PushV
	var_552_int = var_514_int; // 0x3fd Mov
	func_752(var_551_int, var_552_int); // 0x3fe NEW_2
	var_550_int = var_551_int; // 0x3ff Mov
	func_1585(var_549_string, var_550_int); // 0x401 NEW_2
	var_530_string = var_549_string; // 0x402 Mov
	var_723_object = Obj(); var_724_object = Obj(); var_725_string = ""; var_726_string = ""; var_727_string = ""; // 0x404 PushV
	var_724_object = var_529_object; // 0x405 Mov
	var_728_string = "pt_volonteer_"; // 0x406 PushS
	var_725_string = var_728_string + var_530_string; // 0x407 Add2
	var_726_string = "pers_birdmask"; // 0x408 MovS
	var_729_string = "vbirdmask_"; // 0x409 PushS
	var_730_int = var_729_string + var_530_string; // 0x40a Add
	var_731_string = ".xml"; // 0x40b PushS
	var_727_string = var_730_int + var_731_string; // 0x40c Add2
	func_1097(var_724_object, var_725_string, var_726_string, var_727_string); // 0x40d NEW_2
	var_528_object = var_723_object; // 0x40e Mov
	set(var_514_int, var_528_object); // 0x410 TObjFunc
	var_529_object = 0; // 0x412 SetNull
	
Label_1043:
	get(var_531_object, var_514_int); // 0x413 TObjFunc
	size(var_532_int); // 0x415 ObjFunc
	var_533_int = 0; // 0x417 MovI
	
Label_1048:
	var_745_bool = var_533_int < var_532_int; // 0x418 LT
	if(var_745_bool == 0) goto Label_1060; // 0x419 JumpB
	get(var_534_string, var_533_int); // 0x41a ObjFunc
	var_746_string = ""; var_747_int = 0; // 0x41c PushV
	var_746_string = var_534_string; // 0x41d Mov
	var_747_int = 2; // 0x41e MovI
	func_2687(var_746_string, var_747_int); // 0x41f NEW_2
	var_748_int = 1; // 0x421 PushI
	var_533_int = var_533_int + var_748_int; // 0x422 Add2
	goto Label_1048; // 0x423 Jump
	
Label_1060:
	return 16; // 0x424 Return
}


func_1132(var_253_int)
{
	var_254_float = 0; var_255_float = 0; // 0x46c PushV
	GetGameTime(var_255_float); // 0x46d Func
	var_256_int = 1; // 0x46f PushI
	var_257_int = 0; // 0x470 PushV
	var_258_int = 24; // 0x471 PushI
	var_257_int = var_255_float / var_255_float; // 0x472 Div2
	var_253_int = var_256_int + var_257_int; // 0x473 Add2
	return 2; // 0x474 Return
}


func_752(var_490_int, var_491_int)
{
	var_492_int = 0; var_493_int = 0; // 0x2f0 PushV
	get(var_493_int, var_491_int); // 0x2f1 TObjFunc
	var_490_int = var_493_int; // 0x2f3 Mov
	return 2; // 0x2f4 Return
}


func_881(var_449_int)
{
	var_454_int = 0; var_455_object = Obj(); var_456_int = 0; var_457_int = 0; var_458_string = ""; var_459_int = 0; var_460_object = Obj(); var_461_int = 0; var_462_int = 0; var_463_string = ""; // 0x371 PushV
	var_464_string = ""; var_465_int = 0; // 0x372 PushV
	var_465_int = var_449_int; // 0x373 Mov
	func_757(var_464_string, var_465_int); // 0x374 NEW_2
	GetVariable(var_464_string, var_459_int); // 0x376 Func
	var_466_string = ""; var_467_int = 0; // 0x378 PushV
	var_467_int = var_449_int; // 0x379 Mov
	func_757(var_466_string, var_467_int); // 0x37a NEW_2
	var_468_int = 32; // 0x37c PushI
	var_469_int = var_459_int | var_468_int; // 0x37d Or
	SetVariable(var_466_string, var_469_int); // 0x37e Func
	get(var_460_object, var_449_int); // 0x380 TObjFunc
	size(var_461_int); // 0x382 ObjFunc
	var_462_int = 0; // 0x384 MovI
	
Label_901:
	var_470_bool = var_462_int < var_461_int; // 0x385 LT
	if(var_470_bool == 0) goto Label_913; // 0x386 JumpB
	get(var_463_string, var_462_int); // 0x387 ObjFunc
	var_471_string = ""; var_472_int = 0; // 0x389 PushV
	var_471_string = var_463_string; // 0x38a Mov
	var_472_int = 0; // 0x38b MovI
	func_2687(var_471_string, var_472_int); // 0x38c NEW_2
	var_473_int = 1; // 0x38e PushI
	var_462_int = var_462_int + var_473_int; // 0x38f Add2
	goto Label_901; // 0x390 Jump
	
Label_913:
	return 10; // 0x391 Return
}


func_1141(var_372_int)
{
	var_373_float = 0; var_374_float = 0; // 0x475 PushV
	GetGameTime(var_374_float); // 0x476 Func
	var_375_int = 0; // 0x478 PushV
	var_375_int = var_374_float; // 0x479 Mov
	var_376_int = 24; // 0x47a PushI
	var_372_int = var_375_int % var_376_int; // 0x47b Mod2
	return 2; // 0x47c Return
}


func_757(var_217_string, var_218_int)
{
	var_219_int = 0; var_220_int = 0; // 0x2f5 PushV
	get(var_220_int, var_218_int); // 0x2f6 TObjFunc
	var_221_string = "vol_"; // 0x2f8 PushS
	var_217_string = var_221_string + var_220_int; // 0x2f9 Add2
	return 2; // 0x2fa Return
}


func_2679(var_385_int, var_386_int, var_387_int, var_388_float)
{
	var_389_int = 0; var_390_int = 0; // 0xa77 PushV
	AddMessage(var_386_int, var_387_int, var_388_float, var_390_int); // 0xa78 Func
	var_391_int = 6; // 0xa7a PushI
	SendWorldWndMessage(var_391_int); // 0xa7b Func
	var_385_int = var_390_int; // 0xa7d Mov
	return 2; // 0xa7e Return
}


func_763(var_838_bool, var_839_int)
{
	var_840_int = 0; var_841_int = 0; // 0x2fb PushV
	var_842_string = ""; var_843_int = 0; // 0x2fc PushV
	var_843_int = var_839_int; // 0x2fd Mov
	func_757(var_842_string, var_843_int); // 0x2fe NEW_2
	GetVariable(var_842_string, var_841_int); // 0x300 Func
	var_844_int = 32; // 0x302 PushI
	var_845_int = var_841_int & var_844_int; // 0x303 And
	var_846_int = 0; // 0x304 PushI
	var_838_bool = var_845_int != var_846_int; // 0x305 Neq2
	return 2; // 0x306 Return
}


func_1149(var_251_bool, var_252_int)
{
	var_253_int = 0; // 0x47e PushV
	func_1132(var_253_int); // 0x47f NEW_2
	var_251_bool = var_253_int == var_252_int; // 0x481 Eq2
	return 0; // 0x482 Return
}


func_383(var_913_int, var_914_int, var_915_bool)
{
	var_916_object = Obj(); var_917_int = 0; var_918_int = 0; var_919_int = 0; var_920_int = 0; var_921_int = 0; var_922_int = 0; var_923_object = Obj(); var_924_int = 0; var_925_int = 0; var_926_int = 0; var_927_int = 0; var_928_int = 0; var_929_int = 0; // 0x17f PushV
	var_930_bool = var_915_bool; // 0x180 Push
	if(var_930_bool == 0) goto Label_389; // 0x181 JumpB
	get(var_923_object, var_914_int); // 0x182 TObjFunc
	goto Label_391; // 0x184 Jump
	
Label_391:
	size(var_924_int); // 0x187 ObjFunc
	var_931_int = 0; // 0x189 PushI
	var_932_bool = var_924_int == var_931_int; // 0x18a Eq
	if(var_932_bool == 0) goto Label_398; // 0x18b JumpB
	var_913_int = -1; // 0x18c MovI
	return 14; // 0x18d Return
	
Label_398:
	var_925_int = 0; // 0x18e MovI
	var_933_int = 1; // 0x18f PushI
	var_934_bool = var_924_int > var_933_int; // 0x190 GT
	if(var_934_bool == 0) goto Label_404; // 0x191 JumpB
	irand(var_925_int, var_924_int); // 0x192 Func
	
Label_404:
	var_926_int = 0; // 0x194 MovI
	
Label_405:
	var_935_bool = var_926_int < var_924_int; // 0x195 LT
	if(var_935_bool == 0) goto Label_430; // 0x196 JumpB
	var_936_int = var_926_int + var_925_int; // 0x197 Add
	var_927_int = var_936_int % var_924_int; // 0x198 Mod2
	get(var_928_int, var_927_int); // 0x199 ObjFunc
	var_937_int = 0; var_938_int = 0; // 0x19b PushV
	var_938_int = var_928_int; // 0x19c Mov
	func_734(var_937_int, var_938_int); // 0x19d NEW_2
	var_929_int = var_937_int; // 0x19e Mov
	var_939_bool = 0; var_940_int = 0; // 0x1a0 PushV
	var_940_int = var_929_int; // 0x1a1 Mov
	func_787(var_939_bool, var_940_int); // 0x1a2 NEW_2
	if(var_939_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_948_int = 0; // 0x1a5 PushV
	var_948_int = var_929_int; // 0x1a6 Mov
	func_1079(var_948_int); // 0x1a7 NEW_2
	var_913_int = var_929_int; // 0x1a9 Mov
	return 14; // 0x1aa Return
	
Label_427:
	var_959_int = 1; // 0x1ab PushI
	var_926_int = var_926_int + var_959_int; // 0x1ac Add2
	goto Label_405; // 0x1ad Jump
	
Label_430:
	var_913_int = -1; // 0x1ae MovI
	return 14; // 0x1af Return
	
Label_389:
	get(var_923_object, var_914_int); // 0x185 TObjFunc
}


