task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string)
{
	var_8_string = "cleanup"; // 0x31 PushS
	var_9_bool = var_7_string == var_8_string; // 0x32 Eq
	if(var_9_bool == 0) goto Label_55; // 0x33 JumpB
	func_28(var_7_string); // 0x35 NEW_2
	
Label_55:
	return 0; // 0x37 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_bool = var_6_bool; // 0x38 PushT
	if(var_7_bool == 0) goto Label_61; // 0x39 JumpB
	func_144(var_5_bool, var_6_bool); // 0x3b NEW_2
	
Label_61:
	var_11_bool = 0; // 0x3d PushV
	var_11_bool = 0; // 0x3e MovB
	var_12_bool = var_5_bool; // 0x3f PushT
	if(var_12_bool == 0) goto Label_70; // 0x40 JumpB
	var_13_bool = 0; // 0x41 PushV
	func_77(var_13_bool); // 0x42 NEW_2
	if(var_13_bool == 0) goto Label_70; // 0x44 JumpB
	var_11_bool = 1; // 0x45 MovB
	
Label_70:
	if(var_11_bool == 0) goto Label_76; // 0x46 JumpB
	var_14_object = Obj(); // 0x47 PushV
	func_268(var_14_object); // 0x48 NEW_2
	RemoveActor(var_14_object); // 0x4a Func
	
Label_76:
	return 0; // 0x4c Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x7a PushI
	var_9_bool = var_7_int == var_8_int; // 0x7b Eq
	if(var_9_bool == 0) goto Label_143; // 0x7c JumpB
	var_10_bool = 0; // 0x7d PushV
	func_106(var_5_bool, var_6_bool, var_7_int, var_10_bool); // 0x7e NEW_2
	if(var_10_bool == 0) goto Label_137; // 0x80 JumpB
	var_23_bool = var_2_bool == 0; // 0x81 Not
	if(var_23_bool == 0) goto Label_136; // 0x82 JumpB
	var_24_object = Obj(); // 0x83 PushV
	var_24_object = var_4_object; // 0x84 MovT
	func_257(var_24_object); // 0x85 NEW_2
	var_2_bool = 1; // 0x87 TMovB
	
Label_136:
	goto Label_143; // 0x88 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_137:
	var_31_bool = var_2_bool; // 0x89 PushT
	if(var_31_bool == 0) goto Label_143; // 0x8a JumpB
	var_32_string = "head"; // 0x8b PushS
	UnlookAsync(var_32_string); // 0x8c Func
	var_2_bool = 0; // 0x8e TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	
Label_0:
	var_7_float = 0; var_8_float = 0; // 0x0 PushV
	var_7_float = 300; // 0x1 MovI
	var_8_float = 100; // 0x2 MovI
	func_10(var_6_bool, var_7_float, var_8_float); // 0x3 NEW_2
	var_78_int = 3; // 0x5 PushI
	Sleep(var_78_int); // 0x6 Func
	goto Label_0; // 0x8 Jump
}


func_257(var_24_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); // 0x101 PushV
	GetEyesHeight(var_27_float); // 0x102 ObjFunc
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x104 MovV
	var_29_float = GetByIndex(var_28_cvector, 1); // 0x105 PushE
	var_29_float = var_27_float; // 0x106 Mov
	SetByIndex(var_28_cvector, 1) = var_29_float; // 0x107 PopE
	var_30_string = "head"; // 0x108 PushS
	LookAsync(var_24_object, var_30_string, var_28_cvector); // 0x109 Func
	return 4; // 0x10b Return
}


func_10(var_6_bool, var_7_float, var_8_float)
{
	var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; // 0xa PushV
	var_6_bool = 0; // 0xb TMovB
	
Label_12:
	var_13_int = 3; // 0xc PushI
	rand(var_11_float, var_13_int); // 0xd Func
	var_14_int = 3; // 0xf PushI
	var_15_int = var_11_float + var_14_int; // 0x10 Add
	Sleep(var_15_int, var_12_bool); // 0x11 Func
	var_6_bool = 1; // 0x13 TMovB
	var_16_float = 0; var_17_float = 0; // 0x14 PushV
	var_16_float = var_7_float; // 0x15 Mov
	var_17_float = var_8_float; // 0x16 Mov
	func_79(var_8_float, var_9_float, var_10_bool, var_11_float, var_12_bool, var_16_float, var_17_float); // 0x17 NEW_2
	var_6_bool = 0; // 0x19 TMovB
	goto Label_12; // 0x1a Jump
}


func_106(var_0_int, var_1_int, var_4_object, var_10_bool)
{
	var_11_float = 0; var_12_float = 0; // 0x6a PushV
	var_13_bool = var_4_object == 0; // 0x6b NullEq
	if(var_13_bool == 0) goto Label_111; // 0x6c JumpB
	var_10_bool = 0; // 0x6d MovB
	return 2; // 0x6e Return
	
Label_111:
	var_14_float = 0; var_15_object = Obj(); // 0x6f PushV
	var_15_object = var_4_object; // 0x70 MovT
	func_244(var_15_object); // 0x71 NEW_2
	var_12_float = sqrt(var_14_float); // 0x73 Sqrt2
	var_22_bool = var_2_bool; // 0x74 PushT
	if(var_22_bool == 0) goto Label_119; // 0x75 JumpB
	var_12_float = var_12_float - var_1_int; // 0x76 Sub2
	
Label_119:
	var_10_bool = var_12_float < var_0_int; // 0x77 LT2
	return 2; // 0x78 Return
}


func_268(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x10c PushV
	self(var_16_object); // 0x10d Func
	var_14_object = var_16_object; // 0x10f Mov
	return 2; // 0x110 Return
}


func_77(var_13_bool)
{
	var_13_bool = 1; // 0x4d MovB
	return 0; // 0x4e Return
}


func_237(var_66_bool)
{
	var_66_bool = 1; // 0xed MovB
	return 0; // 0xee Return
}


func_79(var_0_int, var_1_int, var_2_bool, var_3_bool, var_12_bool, var_16_float, var_17_float)
{
	var_18_bool = 0; // 0x50 PushV
	func_252(var_18_bool); // 0x51 NEW_2
	var_21_bool = var_18_bool == 0; // 0x53 Not
	if(var_21_bool == 0) goto Label_86; // 0x54 JumpB
	return 0; // 0x55 Return
	
Label_86:
	var_22_string = "player"; // 0x56 PushS
	FindActor(var_12_bool, var_22_string); // 0x57 Func
	var_2_bool = 0; // 0x59 TMovB
	var_3_bool = 0; // 0x5a TMovB
	var_0_int = var_16_float; // 0x5b TMov
	var_1_int = var_17_float; // 0x5c TMov
	var_23_int = 10; // 0x5d PushI
	var_24_float = 1.0; // 0x5e PushF
	SetTimer(var_23_int, var_24_float); // 0x5f Func
	func_158(); // 0x62 NEW_2
	var_76_bool = var_3_bool == 0; // 0x64 Not
	if(var_76_bool == 0) goto Label_105; // 0x65 JumpB
	var_77_int = 10; // 0x66 PushI
	KillTimer(var_77_int); // 0x67 Func
	
Label_105:
	return 0; // 0x69 Return
}


func_144(var_2_bool, var_3_bool)
{
	func_239(); // 0x91 NEW_2
	var_8_int = 10; // 0x93 PushI
	KillTimer(var_8_int); // 0x94 Func
	var_9_bool = var_2_bool; // 0x96 PushT
	if(var_9_bool == 0) goto Label_156; // 0x97 JumpB
	var_10_string = "head"; // 0x98 PushS
	UnlookAsync(var_10_string); // 0x99 Func
	var_2_bool = 0; // 0x9b TMovB
	
Label_156:
	var_3_bool = 1; // 0x9c TMovB
	return 0; // 0x9d Return
}


func_239()
{
	StopAnimation(); // 0xef Func
	StopGroup0(); // 0xf1 Func
	return 0; // 0xf3 Return
}


func_274(var_47_string, var_48_int)
{
	var_49_string = ""; var_50_string = ""; // 0x112 PushV
	var_50_string = "idle"; // 0x113 MovS
	var_51_int = var_48_int; // 0x114 Push
	if(var_51_int == 0) goto Label_279; // 0x115 JumpB
	var_50_string = var_50_string + var_48_int; // 0x116 Add2
	
Label_279:
	var_47_string = var_50_string; // 0x117 Mov
	return 2; // 0x118 Return
}


func_28(var_5_bool)
{
	var_5_bool = 1; // 0x1c TMovB
	var_10_bool = 0; // 0x1d PushV
	var_10_bool = 0; // 0x1e MovB
	var_11_bool = 0; // 0x1f PushV
	func_252(var_11_bool); // 0x20 NEW_2
	var_14_bool = var_11_bool == 0; // 0x22 Not
	if(var_14_bool == 0) goto Label_41; // 0x23 JumpB
	var_15_bool = 0; // 0x24 PushV
	func_77(var_15_bool); // 0x25 NEW_2
	if(var_15_bool == 0) goto Label_41; // 0x27 JumpB
	var_10_bool = 1; // 0x28 MovB
	
Label_41:
	if(var_10_bool == 0) goto Label_47; // 0x29 JumpB
	var_16_object = Obj(); // 0x2a PushV
	func_268(var_16_object); // 0x2b NEW_2
	RemoveActor(var_16_object); // 0x2d Func
	
Label_47:
	return 0; // 0x2f Return
}


func_244(var_14_float)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0xf4 PushV
	GetPosition(var_19_cvector); // 0xf5 Func
	GetPosition(var_20_cvector); // 0xf7 ObjFunc
	var_21_cvector = var_20_cvector - var_19_cvector; // 0xf9 Sub2
	var_14_float = var_21_cvector | var_21_cvector; // 0xfa Or2
	return 6; // 0xfb Return
}


func_281(var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x119 PushV
	var_44_int = 0; // 0x11a MovI
	
Label_283:
	var_46_string = "all"; // 0x11b PushS
	var_47_string = ""; var_48_int = 0; // 0x11c PushV
	var_48_int = var_44_int; // 0x11d Mov
	func_274(var_47_string, var_48_int); // 0x11e NEW_2
	HasAnimation(var_45_bool, var_46_string, var_47_string); // 0x120 Func
	var_52_bool = var_45_bool == 0; // 0x122 Not
	if(var_52_bool == 0) goto Label_293; // 0x123 JumpB
	goto Label_296; // 0x124 Jump
	
Label_296:
	var_41_int = var_44_int; // 0x128 Mov
	return 4; // 0x129 Return
	
Label_293:
	var_53_int = 1; // 0x125 PushI
	var_44_int = var_44_int + var_53_int; // 0x126 Add2
	goto Label_283; // 0x127 Jump
}


func_252(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0xfc PushV
	IsLoaded(var_20_bool); // 0xfd Func
	var_18_bool = var_20_bool; // 0xff Mov
	return 2; // 0x100 Return
}


func_158()
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_bool = 0; // 0x9e PushV
	WaitForAnimEnd(); // 0x9f Func
	var_39_bool = 0; // 0xa1 PushV
	func_252(var_39_bool); // 0xa2 NEW_2
	var_40_bool = var_39_bool == 0; // 0xa4 Not
	if(var_40_bool == 0) goto Label_167; // 0xa5 JumpB
	return 14; // 0xa6 Return
	
Label_167:
	var_41_int = 0; // 0xa7 PushV
	func_281(var_41_int); // 0xa8 NEW_2
	var_32_int = var_41_int; // 0xa9 Mov
	var_33_int = 0; // 0xab MovI
	
Label_172:
	var_54_bool = 0; // 0xac PushV
	var_54_bool = 0; // 0xad MovB
	var_55_int = 5; // 0xae PushI
	var_56_bool = var_33_int < var_55_int; // 0xaf LT
	if(var_56_bool == 0) goto Label_182; // 0xb0 JumpB
	var_57_bool = 0; // 0xb1 PushV
	func_252(var_57_bool); // 0xb2 NEW_2
	if(var_57_bool == 0) goto Label_182; // 0xb4 JumpB
	var_54_bool = 1; // 0xb5 MovB
	
Label_182:
	if(var_54_bool == 0) goto Label_234; // 0xb6 JumpB
	var_58_int = 3; // 0xb7 PushI
	irand(var_34_int, var_58_int); // 0xb8 Func
	var_59_int = 0; // 0xba PushI
	var_60_bool = var_34_int == var_59_int; // 0xbb Eq
	if(var_60_bool == 0) goto Label_206; // 0xbc JumpB
	var_61_int = var_32_int; // 0xbd Push
	if(var_61_int == 0) goto Label_205; // 0xbe JumpB
	irand(var_35_int, var_32_int); // 0xbf Func
	var_62_string = "all"; // 0xc1 PushS
	var_63_string = ""; var_64_int = 0; // 0xc2 PushV
	var_64_int = var_35_int; // 0xc3 Mov
	func_274(var_63_string, var_64_int); // 0xc4 NEW_2
	PlayAnimation(var_62_string, var_63_string); // 0xc6 Func
	WaitForAnimEnd(var_36_bool); // 0xc8 Func
	var_65_bool = var_36_bool == 0; // 0xca Not
	if(var_65_bool == 0) goto Label_205; // 0xcb JumpB
	goto Label_234; // 0xcc Jump
	
Label_234:
	ResetAAS(); // 0xea Func
	return 14; // 0xec Return
	
Label_205:
	goto Label_223; // 0xcd Jump
	
Label_223:
	var_66_bool = 0; // 0xdf PushV
	func_237(var_66_bool); // 0xe0 NEW_2
	var_67_bool = var_66_bool == 0; // 0xe2 Not
	if(var_67_bool == 0) goto Label_229; // 0xe3 JumpB
	goto Label_234; // 0xe4 Jump
	
Label_229:
	ResetAAS(); // 0xe5 Func
	var_68_int = 1; // 0xe7 PushI
	var_33_int = var_33_int + var_68_int; // 0xe8 Add2
	goto Label_172; // 0xe9 Jump
	
Label_206:
	var_69_int = 1; // 0xce PushI
	var_70_bool = var_34_int == var_69_int; // 0xcf Eq
	if(var_70_bool == 0) goto Label_220; // 0xd0 JumpB
	var_71_int = 4; // 0xd1 PushI
	rand(var_37_float, var_71_int); // 0xd2 Func
	var_72_int = 1; // 0xd4 PushI
	var_73_int = var_37_float + var_72_int; // 0xd5 Add
	Sleep(var_73_int, var_38_bool); // 0xd6 Func
	var_74_bool = var_38_bool == 0; // 0xd8 Not
	if(var_74_bool == 0) goto Label_219; // 0xd9 JumpB
	goto Label_234; // 0xda Jump
	
Label_219:
	goto Label_223; // 0xdb Jump
	
Label_220:
	var_75_int = var_33_int; // 0xdc Push
	if(var_75_int == 0) goto Label_223; // 0xdd JumpB
	goto Label_234; // 0xde Jump
}


