task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int)
{
	var_4_int = 0; // 0xad PushI
	var_5_bool = var_3_int != var_4_int; // 0xae Neq
	if(var_5_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_6_bool = 0; var_7_object = Obj(); // 0xb1 PushV
	var_7_object = var_1_object; // 0xb2 MovT
	func_210(var_6_bool, var_7_object); // 0xb3 NEW_2
	var_42_bool = var_6_bool == 0; // 0xb5 Not
	if(var_42_bool == 0) goto Label_184; // 0xb6 JumpB
	var_0_bool = 1; // 0xb7 TMovB
	
Label_184:
	var_43_int = 0; // 0xb8 PushI
	KillTimer(var_43_int); // 0xb9 Func
	Stop(); // 0xbb Func
	return 0; // 0xbd Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	RequestClearPath(var_3_object); // 0xbf Func
	return 0; // 0xc1 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	func_194(var_3_object); // 0xcb NEW_2
	var_5_object = Obj(); // 0xcd PushV
	var_5_object = var_3_object; // 0xce Mov
	func_307(); // 0xcf NEW_2
	return 0; // 0xd1 Return
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	return 0; // 0x134 Return
}


main(var_0_bool, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_bool = GlobalVars[0]; // 0x1 PushGE
	var_5_bool = 1; // 0x2 MovB
	GlobalVars[0] = var_5_bool; // 0x3 PopGE
	var_6_string = "player"; // 0x4 PushS
	FindActor(var_4_object, var_6_string); // 0x5 Func
	
Label_7:
	var_7_bool = var_4_object != 0; // 0x7 NullNeq
	if(var_7_bool == 0) goto Label_28; // 0x8 JumpB
	var_8_bool = 0; var_9_object = Obj(); var_10_string = ""; // 0x9 PushV
	var_9_object = var_4_object; // 0xa Mov
	var_10_string = "pt_b4_boy_dest"; // 0xb MovS
	TaskCall(1); // 0xc TaskCall
	func_30(var_13_bool, var_8_bool, var_9_object, var_10_string); // 0xd NEW_2
	TaskReturn(); // 0xe TaskReturn
	if(var_11_bool == 0) goto Label_22; // 0x10 JumpB
	TaskCall(2); // 0x12 TaskCall
	func_221(); // 0x13 NEW_2
	TaskReturn(); // 0x14 TaskReturn
	
Label_22:
	WaitForAnimEnd(); // 0x16 Func
	var_115_int = 3; // 0x18 PushI
	Sleep(var_115_int); // 0x19 Func
	goto Label_7; // 0x1b Jump
	
Label_28:
	return 2; // 0x1c Return
}


func_194(var_0_bool)
{
	var_0_bool = 1; // 0xc2 TMovB
	var_4_int = 0; // 0xc3 PushI
	KillTimer(var_4_int); // 0xc4 Func
	Stop(); // 0xc6 Func
	return 0; // 0xc8 Return
}


func_230(var_71_bool, var_72_object, var_73_string)
{
	var_74_bool = 0; var_75_bool = 0; // 0xe6 PushV
	var_76_string = "HasProperty"; // 0xe7 PushS
	var_77_int = 2; // 0xe8 PushI
	var_78_bool = IsFuncExist(var_72_object, var_76_string, var_77_int); // 0xe9 FuncExist
	var_79_bool = var_78_bool == 0; // 0xea Not
	if(var_79_bool == 0) goto Label_238; // 0xeb JumpB
	var_71_bool = 0; // 0xec MovB
	return 2; // 0xed Return
	
Label_238:
	HasProperty(var_73_string, var_75_bool); // 0xee ObjFunc
	var_71_bool = var_75_bool; // 0xf0 Mov
	return 2; // 0xf1 Return
}


func_283(var_49_bool, var_50_object)
{
	var_51_int = 0; var_52_int = 0; // 0x11b PushV
	var_53_bool = 0; var_54_object = Obj(); // 0x11c PushV
	var_54_object = var_50_object; // 0x11d Mov
	func_247(var_53_bool, var_54_object); // 0x11e NEW_2
	var_70_bool = var_53_bool == 0; // 0x120 Not
	if(var_70_bool == 0) goto Label_292; // 0x121 JumpB
	var_49_bool = 0; // 0x122 MovB
	return 2; // 0x123 Return
	
Label_292:
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0x124 PushV
	var_72_object = var_50_object; // 0x125 Mov
	var_73_string = "noaccess"; // 0x126 MovS
	func_230(var_71_bool, var_72_object, var_73_string); // 0x127 NEW_2
	var_80_bool = var_71_bool == 0; // 0x129 Not
	if(var_80_bool == 0) goto Label_301; // 0x12a JumpB
	var_49_bool = 1; // 0x12b MovB
	return 2; // 0x12c Return
	
Label_301:
	var_81_string = "noaccess"; // 0x12d PushS
	GetProperty(var_81_string, var_52_int); // 0x12e ObjFunc
	var_82_int = 0; // 0x130 PushI
	var_49_bool = var_52_int == var_82_int; // 0x131 Eq2
	return 2; // 0x132 Return
}


func_242(var_64_bool)
{
	var_66_bool = 0; var_67_bool = 0; // 0xf2 PushV
	IsDead(var_67_bool); // 0xf3 ObjFunc
	var_64_bool = var_67_bool; // 0xf5 Mov
	return 2; // 0xf6 Return
}


func_210(var_47_bool, var_48_object)
{
	var_49_bool = 0; var_50_object = Obj(); // 0xd3 PushV
	var_50_object = var_48_object; // 0xd4 Mov
	func_283(var_49_bool, var_50_object); // 0xd5 NEW_2
	var_47_bool = var_49_bool; // 0xd6 Mov
	return 0; // 0xd8 Return
}


func_247(var_53_bool, var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0xf7 PushV
	var_59_bool = var_54_object == 0; // 0xf8 NullEq
	if(var_59_bool == 0) goto Label_252; // 0xf9 JumpB
	var_53_bool = 0; // 0xfa MovB
	return 4; // 0xfb Return
	
Label_252:
	var_60_bool = 0; // 0xfc PushV
	var_60_bool = 0; // 0xfd MovB
	var_61_string = "IsDead"; // 0xfe PushS
	var_62_int = 1; // 0xff PushI
	var_63_bool = IsFuncExist(var_54_object, var_61_string, var_62_int); // 0x100 FuncExist
	if(var_63_bool == 0) goto Label_264; // 0x101 JumpB
	var_64_bool = 0; var_65_object = Obj(); // 0x102 PushV
	var_65_object = var_54_object; // 0x103 Mov
	func_242(var_65_object); // 0x104 NEW_2
	if(var_64_bool == 0) goto Label_264; // 0x106 JumpB
	var_60_bool = 1; // 0x107 MovB
	
Label_264:
	if(var_60_bool == 0) goto Label_267; // 0x108 JumpB
	var_53_bool = 0; // 0x109 MovB
	return 4; // 0x10a Return
	
Label_267:
	GetScene(var_57_object); // 0x10b Func
	var_68_bool = var_57_object == 0; // 0x10d NullEq
	if(var_68_bool == 0) goto Label_273; // 0x10e JumpB
	var_53_bool = 0; // 0x10f MovB
	return 4; // 0x110 Return
	
Label_273:
	GetScene(var_58_object); // 0x111 ObjFunc
	var_69_bool = var_57_object != var_58_object; // 0x113 Neq
	if(var_69_bool == 0) goto Label_279; // 0x114 JumpB
	var_53_bool = 0; // 0x115 MovB
	return 4; // 0x116 Return
	
Label_279:
	var_53_bool = 1; // 0x117 MovB
	return 4; // 0x118 Return
}


func_56(var_0_bool, var_1_object, var_24_bool, var_25_object, var_26_cvector, var_27_float, var_28_bool, var_29_bool)
{
	var_31_bool = 0; var_32_bool = 0; var_33_object = Obj(); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_object = Obj(); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_object = Obj(); // 0x38 PushV
	var_0_bool = 0; // 0x39 TMovB
	var_1_object = var_25_object; // 0x3a TMov
	var_40_bool = var_29_bool; // 0x3b Mov
	
Label_60:
	var_47_bool = 0; var_48_object = Obj(); // 0x3c PushV
	var_48_object = var_25_object; // 0x3d Mov
	func_210(var_47_bool, var_48_object); // 0x3e NEW_2
	var_83_bool = var_47_bool == 0; // 0x40 Not
	if(var_83_bool == 0) goto Label_68; // 0x41 JumpB
	var_24_bool = 0; // 0x42 MovB
	return 16; // 0x43 Return
	
Label_68:
	GetPosition(var_42_cvector); // 0x44 ObjFunc
	GetPosition(var_43_cvector); // 0x46 Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x48 Sub2
	var_45_float = var_44_cvector | var_44_cvector; // 0x49 Or2
	var_84_bool = 0; // 0x4a PushV
	var_84_bool = 0; // 0x4b MovB
	var_85_int = 0; // 0x4c PushI
	var_86_bool = var_27_float > var_85_int; // 0x4d GT
	if(var_86_bool == 0) goto Label_83; // 0x4e JumpB
	var_87_float = var_27_float * var_27_float; // 0x4f Mult
	var_88_bool = var_45_float > var_87_float; // 0x50 GT
	if(var_88_bool == 0) goto Label_83; // 0x51 JumpB
	var_84_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_84_bool == 0) goto Label_88; // 0x53 JumpB
	Stop(); // 0x54 Func
	var_24_bool = 0; // 0x56 MovB
	return 16; // 0x57 Return
	
Label_88:
	FindPathTo(var_46_object, var_26_cvector); // 0x58 Func
	var_89_bool = var_46_object != 0; // 0x5a NullNeq
	if(var_89_bool == 0) goto Label_97; // 0x5b JumpB
	var_90_string = "path found"; // 0x5c PushS
	Trace(var_90_string); // 0x5d Func
	var_41_object = var_46_object; // 0x5f Mov
	var_46_object = 0; // 0x60 SetNull
	
Label_97:
	var_91_bool = var_41_object != 0; // 0x61 NullNeq
	if(var_91_bool == 0) goto Label_148; // 0x62 JumpB
	var_92_string = "1"; // 0x63 PushS
	Trace(var_92_string); // 0x64 Func
	var_93_bool = var_40_bool; // 0x66 Push
	if(var_93_bool == 0) goto Label_113; // 0x67 JumpB
	var_94_string = "2"; // 0x68 PushS
	Trace(var_94_string); // 0x69 Func
	var_40_bool = 0; // 0x6b MovB
	RotatePath(var_41_object, var_39_bool); // 0x6c Func
	var_95_bool = var_39_bool == 0; // 0x6e Not
	if(var_95_bool == 0) goto Label_113; // 0x6f JumpB
	goto Label_170; // 0x70 Jump
	
Label_170:
	var_24_bool = !var_0_bool; // 0xaa Not2
	return 16; // 0xab Return
	
Label_113:
	var_96_string = "3"; // 0x71 PushS
	Trace(var_96_string); // 0x72 Func
	var_97_int = 0; // 0x74 PushI
	var_98_int = 3; // 0x75 PushI
	SetTimer(var_97_int, var_98_int); // 0x76 Func
	var_99_string = ""; // 0x78 PushV
	func_217(var_99_string); // 0x79 NEW_2
	var_100_string = ""; // 0x7b PushV
	func_219(var_100_string); // 0x7c NEW_2
	FollowPath(var_41_object, var_28_bool, var_39_bool, var_99_string, var_100_string); // 0x7e Func
	var_101_bool = var_39_bool == 0; // 0x80 Not
	if(var_101_bool == 0) goto Label_143; // 0x81 JumpB
	var_102_bool = var_0_bool; // 0x82 PushT
	if(var_102_bool == 0) goto Label_138; // 0x83 JumpB
	var_103_string = "4"; // 0x84 PushS
	Trace(var_103_string); // 0x85 Func
	var_41_object = 0; // 0x87 SetNull
	goto Label_170; // 0x88 Jump
	
Label_138:
	var_104_string = "5"; // 0x8a PushS
	Trace(var_104_string); // 0x8b Func
	goto Label_169; // 0x8d Jump
	
Label_169:
	goto Label_60; // 0xa9 Jump
	
Label_143:
	var_105_string = "6"; // 0x8f PushS
	Trace(var_105_string); // 0x90 Func
	var_41_object = 0; // 0x92 SetNull
	goto Label_167; // 0x93 Jump
	
Label_167:
	var_46_object = 0; // 0xa7 SetNull
	var_41_object = 0; // 0xa8 SetNull
	
Label_148:
	var_106_string = "7"; // 0x94 PushS
	Trace(var_106_string); // 0x95 Func
	var_107_int = 0; // 0x97 PushI
	KillTimer(var_107_int); // 0x98 Func
	var_108_float = 0.5; // 0x9a PushF
	Sleep(var_108_float, var_39_bool); // 0x9b Func
	var_109_bool = var_39_bool == 0; // 0x9d Not
	if(var_109_bool == 0) goto Label_163; // 0x9e JumpB
	var_110_bool = var_0_bool; // 0x9f PushT
	if(var_110_bool == 0) goto Label_163; // 0xa0 JumpB
	var_41_object = 0; // 0xa1 SetNull
	goto Label_170; // 0xa2 Jump
	
Label_163:
	var_111_int = 0; // 0xa3 PushI
	var_112_float = 0.3; // 0xa4 PushF
	SetTimer(var_111_int, var_112_float); // 0xa5 Func
}


func_217(var_99_string)
{
	var_99_string = "walk"; // 0xd9 MovS
	return 0; // 0xda Return
}


func_219(var_100_string)
{
	var_100_string = "run"; // 0xdb MovS
	return 0; // 0xdc Return
}


func_221()
{
	var_113_string = "Waiting for your orders!"; // 0xdd PushS
	Trace(var_113_string); // 0xde Func
	Hold(); // 0xe0 Func
	var_114_string = "Following you!"; // 0xe2 PushS
	Trace(var_114_string); // 0xe3 Func
	return 0; // 0xe5 Return
}


func_30(var_2_bool, var_8_bool, var_9_object, var_10_string)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x1e PushV
	var_2_bool = 0; // 0x1f TMovB
	GetMainOutdoorScene(var_18_object); // 0x20 Func
	GetLocator(var_10_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x22 ObjFunc
	var_22_bool = var_19_bool == 0; // 0x24 Not
	if(var_22_bool == 0) goto Label_43; // 0x25 JumpB
	var_23_string = "Unknown destination point"; // 0x26 PushS
	Trace(var_23_string); // 0x27 Func
	var_8_bool = 0; // 0x29 MovB
	return 8; // 0x2a Return
	
Label_43:
	var_24_bool = 0; var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_bool = 0; // 0x2b PushV
	var_25_object = var_9_object; // 0x2c Mov
	var_26_cvector = var_20_cvector; // 0x2d Mov
	var_27_float = 10000; // 0x2e MovI
	var_30_bool = GlobalVars[0]; // 0x2f PushGE
	var_28_bool = var_30_bool; // 0x30 Mov
	var_29_bool = 1; // 0x32 MovB
	func_56(var_20_cvector, var_21_cvector, var_24_bool, var_25_object, var_26_cvector, var_27_float, var_28_bool, var_29_bool); // 0x33 NEW_2
	var_8_bool = var_2_bool; // 0x35 MovT
	return 8; // 0x36 Return
}


