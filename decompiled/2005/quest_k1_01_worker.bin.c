task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	func_166(var_6_bool, var_7_object); // 0x17 NEW_2
	return 0; // 0x19 Return
}


task_0_event_9(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_float)
{
	var_9_string = ""; // 0x1b PushV
	var_9_string = "cleanup"; // 0x1c MovS
	func_70(); // 0x1d NEW_2
	return 0; // 0x1f Return
}


	task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_float, var_8_float, var_11_string)
	{
	var_12_string = "cleanup"; // 0x47 PushS
	var_13_bool = var_11_string == var_12_string; // 0x48 Eq
	if(var_13_bool == 0) goto Label_77; // 0x49 JumpB
	func_50(var_11_string); // 0x4b NEW_2
	
Label_77:
	return 0; // 0x4d Return
	}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_bool = var_6_bool; // 0x4e PushT
	if(var_7_bool == 0) goto Label_83; // 0x4f JumpB
	func_166(var_5_bool, var_6_bool); // 0x51 NEW_2
	
Label_83:
	var_11_bool = 0; // 0x53 PushV
	var_11_bool = 0; // 0x54 MovB
	var_12_bool = var_5_bool; // 0x55 PushT
	if(var_12_bool == 0) goto Label_92; // 0x56 JumpB
	var_13_bool = 0; // 0x57 PushV
	func_99(var_13_bool); // 0x58 NEW_2
	if(var_13_bool == 0) goto Label_92; // 0x5a JumpB
	var_11_bool = 1; // 0x5b MovB
	
Label_92:
	if(var_11_bool == 0) goto Label_98; // 0x5c JumpB
	var_14_object = Obj(); // 0x5d PushV
	func_290(var_14_object); // 0x5e NEW_2
	RemoveActor(var_14_object); // 0x60 Func
	
Label_98:
	return 0; // 0x62 Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x90 PushI
	var_9_bool = var_7_int == var_8_int; // 0x91 Eq
	if(var_9_bool == 0) goto Label_165; // 0x92 JumpB
	var_10_bool = 0; // 0x93 PushV
	func_128(var_5_bool, var_6_bool, var_7_int, var_10_bool); // 0x94 NEW_2
	if(var_10_bool == 0) goto Label_159; // 0x96 JumpB
	var_23_bool = var_2_bool == 0; // 0x97 Not
	if(var_23_bool == 0) goto Label_158; // 0x98 JumpB
	var_24_object = Obj(); // 0x99 PushV
	var_24_object = var_4_object; // 0x9a MovT
	func_279(var_24_object); // 0x9b NEW_2
	var_2_bool = 1; // 0x9d TMovB
	
Label_158:
	goto Label_165; // 0x9e Jump
	
Label_165:
	return 0; // 0xa5 Return
	
Label_159:
	var_31_bool = var_2_bool; // 0x9f PushT
	if(var_31_bool == 0) goto Label_165; // 0xa0 JumpB
	var_32_string = "head"; // 0xa1 PushS
	UnlookAsync(var_32_string); // 0xa2 Func
	var_2_bool = 0; // 0xa4 TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_float = 0; var_8_float = 0; // 0x0 PushV
	GetGameTime(var_8_float); // 0x1 Func
	var_9_int = 24; // 0x3 PushI
	var_10_bool = var_8_float >= var_9_int; // 0x4 GE
	if(var_10_bool == 0) goto Label_11; // 0x5 JumpB
	var_11_string = ""; // 0x6 PushV
	var_11_string = "cleanup"; // 0x7 MovS
	func_70(); // 0x8 NEW_2
	goto Label_15; // 0xa Jump
	
Label_15:
	var_23_float = 0; var_24_float = 0; // 0xf PushV
	var_23_float = 300; // 0x10 MovI
	var_24_float = 100; // 0x11 MovI
	func_32(var_8_float, var_23_float, var_24_float); // 0x12 NEW_2
	return 2; // 0x14 Return
	
Label_11:
	var_92_int = 0; // 0xb PushI
	var_93_int = 24; // 0xc PushI
	SetTimeEvent(var_92_int, var_93_int); // 0xd Func
}


func_32(var_6_bool, var_23_float, var_24_float)
{
	var_25_float = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x20 PushV
	var_6_bool = 0; // 0x21 TMovB
	
Label_34:
	var_29_int = 3; // 0x22 PushI
	rand(var_27_float, var_29_int); // 0x23 Func
	var_30_int = 3; // 0x25 PushI
	var_31_int = var_27_float + var_30_int; // 0x26 Add
	Sleep(var_31_int, var_28_bool); // 0x27 Func
	var_6_bool = 1; // 0x29 TMovB
	var_32_float = 0; var_33_float = 0; // 0x2a PushV
	var_32_float = var_23_float; // 0x2b Mov
	var_33_float = var_24_float; // 0x2c Mov
	func_101(var_24_float, var_25_float, var_26_bool, var_27_float, var_28_bool, var_32_float, var_33_float); // 0x2d NEW_2
	var_6_bool = 0; // 0x2f TMovB
	goto Label_34; // 0x30 Jump
}


func_128(var_0_int, var_1_int, var_4_object, var_10_bool)
{
	var_11_float = 0; var_12_float = 0; // 0x80 PushV
	var_13_bool = var_4_object == 0; // 0x81 NullEq
	if(var_13_bool == 0) goto Label_133; // 0x82 JumpB
	var_10_bool = 0; // 0x83 MovB
	return 2; // 0x84 Return
	
Label_133:
	var_14_float = 0; var_15_object = Obj(); // 0x85 PushV
	var_15_object = var_4_object; // 0x86 MovT
	func_266(var_15_object); // 0x87 NEW_2
	var_12_float = sqrt(var_14_float); // 0x89 Sqrt2
	var_22_bool = var_2_bool; // 0x8a PushT
	if(var_22_bool == 0) goto Label_141; // 0x8b JumpB
	var_12_float = var_12_float - var_1_int; // 0x8c Sub2
	
Label_141:
	var_10_bool = var_12_float < var_0_int; // 0x8d LT2
	return 2; // 0x8e Return
}


func_290(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x122 PushV
	self(var_22_object); // 0x123 Func
	var_20_object = var_22_object; // 0x125 Mov
	return 2; // 0x126 Return
}


func_99(var_19_bool)
{
	var_19_bool = 1; // 0x63 MovB
	return 0; // 0x64 Return
}


func_259(var_80_bool)
{
	var_80_bool = 1; // 0x103 MovB
	return 0; // 0x104 Return
}


func_101(var_0_int, var_1_int, var_2_bool, var_3_bool, var_28_bool, var_32_float, var_33_float)
{
	var_34_bool = 0; // 0x66 PushV
	func_274(var_34_bool); // 0x67 NEW_2
	var_35_bool = var_34_bool == 0; // 0x69 Not
	if(var_35_bool == 0) goto Label_108; // 0x6a JumpB
	return 0; // 0x6b Return
	
Label_108:
	var_36_string = "player"; // 0x6c PushS
	FindActor(var_28_bool, var_36_string); // 0x6d Func
	var_2_bool = 0; // 0x6f TMovB
	var_3_bool = 0; // 0x70 TMovB
	var_0_int = var_32_float; // 0x71 TMov
	var_1_int = var_33_float; // 0x72 TMov
	var_37_int = 10; // 0x73 PushI
	var_38_float = 1.0; // 0x74 PushF
	SetTimer(var_37_int, var_38_float); // 0x75 Func
	func_180(); // 0x78 NEW_2
	var_90_bool = var_3_bool == 0; // 0x7a Not
	if(var_90_bool == 0) goto Label_127; // 0x7b JumpB
	var_91_int = 10; // 0x7c PushI
	KillTimer(var_91_int); // 0x7d Func
	
Label_127:
	return 0; // 0x7f Return
}


func_166(var_2_bool, var_3_bool)
{
	func_261(); // 0xa7 NEW_2
	var_8_int = 10; // 0xa9 PushI
	KillTimer(var_8_int); // 0xaa Func
	var_9_bool = var_2_bool; // 0xac PushT
	if(var_9_bool == 0) goto Label_178; // 0xad JumpB
	var_10_string = "head"; // 0xae PushS
	UnlookAsync(var_10_string); // 0xaf Func
	var_2_bool = 0; // 0xb1 TMovB
	
Label_178:
	var_3_bool = 1; // 0xb2 TMovB
	return 0; // 0xb3 Return
}


func_261()
{
	StopAnimation(); // 0x105 Func
	StopGroup0(); // 0x107 Func
	return 0; // 0x109 Return
}


func_296(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = ""; // 0x128 PushV
	var_64_string = "idle"; // 0x129 MovS
	var_65_int = var_62_int; // 0x12a Push
	if(var_65_int == 0) goto Label_301; // 0x12b JumpB
	var_64_string = var_64_string + var_62_int; // 0x12c Add2
	
Label_301:
	var_61_string = var_64_string; // 0x12d Mov
	return 2; // 0x12e Return
}


func_266(var_14_float)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x10a PushV
	GetPosition(var_19_cvector); // 0x10b Func
	GetPosition(var_20_cvector); // 0x10d ObjFunc
	var_21_cvector = var_20_cvector - var_19_cvector; // 0x10f Sub2
	var_14_float = var_21_cvector | var_21_cvector; // 0x110 Or2
	return 6; // 0x111 Return
}


func_303(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x12f PushV
	var_58_int = 0; // 0x130 MovI
	
Label_305:
	var_60_string = "all"; // 0x131 PushS
	var_61_string = ""; var_62_int = 0; // 0x132 PushV
	var_62_int = var_58_int; // 0x133 Mov
	func_296(var_61_string, var_62_int); // 0x134 NEW_2
	HasAnimation(var_59_bool, var_60_string, var_61_string); // 0x136 Func
	var_66_bool = var_59_bool == 0; // 0x138 Not
	if(var_66_bool == 0) goto Label_315; // 0x139 JumpB
	goto Label_318; // 0x13a Jump
	
Label_318:
	var_55_int = var_58_int; // 0x13e Mov
	return 4; // 0x13f Return
	
Label_315:
	var_67_int = 1; // 0x13b PushI
	var_58_int = var_58_int + var_67_int; // 0x13c Add2
	goto Label_305; // 0x13d Jump
}


func_274(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x112 PushV
	IsLoaded(var_17_bool); // 0x113 Func
	var_15_bool = var_17_bool; // 0x115 Mov
	return 2; // 0x116 Return
}


func_50(var_5_bool)
{
	var_5_bool = 1; // 0x32 TMovB
	var_14_bool = 0; // 0x33 PushV
	var_14_bool = 0; // 0x34 MovB
	var_15_bool = 0; // 0x35 PushV
	func_274(var_15_bool); // 0x36 NEW_2
	var_18_bool = var_15_bool == 0; // 0x38 Not
	if(var_18_bool == 0) goto Label_63; // 0x39 JumpB
	var_19_bool = 0; // 0x3a PushV
	func_99(var_19_bool); // 0x3b NEW_2
	if(var_19_bool == 0) goto Label_63; // 0x3d JumpB
	var_14_bool = 1; // 0x3e MovB
	
Label_63:
	if(var_14_bool == 0) goto Label_69; // 0x3f JumpB
	var_20_object = Obj(); // 0x40 PushV
	func_290(var_20_object); // 0x41 NEW_2
	RemoveActor(var_20_object); // 0x43 Func
	
Label_69:
	return 0; // 0x45 Return
}


func_180()
{
	var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; // 0xb4 PushV
	WaitForAnimEnd(); // 0xb5 Func
	var_53_bool = 0; // 0xb7 PushV
	func_274(var_53_bool); // 0xb8 NEW_2
	var_54_bool = var_53_bool == 0; // 0xba Not
	if(var_54_bool == 0) goto Label_189; // 0xbb JumpB
	return 14; // 0xbc Return
	
Label_189:
	var_55_int = 0; // 0xbd PushV
	func_303(var_55_int); // 0xbe NEW_2
	var_46_int = var_55_int; // 0xbf Mov
	var_47_int = 0; // 0xc1 MovI
	
Label_194:
	var_68_bool = 0; // 0xc2 PushV
	var_68_bool = 0; // 0xc3 MovB
	var_69_int = 5; // 0xc4 PushI
	var_70_bool = var_47_int < var_69_int; // 0xc5 LT
	if(var_70_bool == 0) goto Label_204; // 0xc6 JumpB
	var_71_bool = 0; // 0xc7 PushV
	func_274(var_71_bool); // 0xc8 NEW_2
	if(var_71_bool == 0) goto Label_204; // 0xca JumpB
	var_68_bool = 1; // 0xcb MovB
	
Label_204:
	if(var_68_bool == 0) goto Label_256; // 0xcc JumpB
	var_72_int = 3; // 0xcd PushI
	irand(var_48_int, var_72_int); // 0xce Func
	var_73_int = 0; // 0xd0 PushI
	var_74_bool = var_48_int == var_73_int; // 0xd1 Eq
	if(var_74_bool == 0) goto Label_228; // 0xd2 JumpB
	var_75_int = var_46_int; // 0xd3 Push
	if(var_75_int == 0) goto Label_227; // 0xd4 JumpB
	irand(var_49_int, var_46_int); // 0xd5 Func
	var_76_string = "all"; // 0xd7 PushS
	var_77_string = ""; var_78_int = 0; // 0xd8 PushV
	var_78_int = var_49_int; // 0xd9 Mov
	func_296(var_77_string, var_78_int); // 0xda NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0xdc Func
	WaitForAnimEnd(var_50_bool); // 0xde Func
	var_79_bool = var_50_bool == 0; // 0xe0 Not
	if(var_79_bool == 0) goto Label_227; // 0xe1 JumpB
	goto Label_256; // 0xe2 Jump
	
Label_256:
	ResetAAS(); // 0x100 Func
	return 14; // 0x102 Return
	
Label_227:
	goto Label_245; // 0xe3 Jump
	
Label_245:
	var_80_bool = 0; // 0xf5 PushV
	func_259(var_80_bool); // 0xf6 NEW_2
	var_81_bool = var_80_bool == 0; // 0xf8 Not
	if(var_81_bool == 0) goto Label_251; // 0xf9 JumpB
	goto Label_256; // 0xfa Jump
	
Label_251:
	ResetAAS(); // 0xfb Func
	var_82_int = 1; // 0xfd PushI
	var_47_int = var_47_int + var_82_int; // 0xfe Add2
	goto Label_194; // 0xff Jump
	
Label_228:
	var_83_int = 1; // 0xe4 PushI
	var_84_bool = var_48_int == var_83_int; // 0xe5 Eq
	if(var_84_bool == 0) goto Label_242; // 0xe6 JumpB
	var_85_int = 4; // 0xe7 PushI
	rand(var_51_float, var_85_int); // 0xe8 Func
	var_86_int = 1; // 0xea PushI
	var_87_int = var_51_float + var_86_int; // 0xeb Add
	Sleep(var_87_int, var_52_bool); // 0xec Func
	var_88_bool = var_52_bool == 0; // 0xee Not
	if(var_88_bool == 0) goto Label_241; // 0xef JumpB
	goto Label_256; // 0xf0 Jump
	
Label_241:
	goto Label_245; // 0xf1 Jump
	
Label_242:
	var_89_int = var_47_int; // 0xf2 Push
	if(var_89_int == 0) goto Label_245; // 0xf3 JumpB
	goto Label_256; // 0xf4 Jump
}


func_279(var_24_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); // 0x117 PushV
	GetEyesHeight(var_27_float); // 0x118 ObjFunc
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x11a MovV
	var_29_float = GetByIndex(var_28_cvector, 1); // 0x11b PushE
	var_29_float = var_27_float; // 0x11c Mov
	SetByIndex(var_28_cvector, 1) = var_29_float; // 0x11d PopE
	var_30_string = "head"; // 0x11e PushS
	LookAsync(var_24_object, var_30_string, var_28_cvector); // 0x11f Func
	return 4; // 0x121 Return
}


