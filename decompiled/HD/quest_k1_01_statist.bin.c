task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string)
{
	var_8_string = "cleanup"; // 0x2d PushS
	var_9_bool = var_7_string == var_8_string; // 0x2e Eq
	if(var_9_bool == 0) goto Label_51; // 0x2f JumpB
	func_24(var_7_string); // 0x31 NEW_2
	
Label_51:
	return 0; // 0x33 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_bool = var_6_bool; // 0x34 PushT
	if(var_7_bool == 0) goto Label_57; // 0x35 JumpB
	func_140(var_5_bool, var_6_bool); // 0x37 NEW_2
	
Label_57:
	var_11_bool = 0; // 0x39 PushV
	var_11_bool = 0; // 0x3a MovB
	var_12_bool = var_5_bool; // 0x3b PushT
	if(var_12_bool == 0) goto Label_66; // 0x3c JumpB
	var_13_bool = 0; // 0x3d PushV
	func_73(var_13_bool); // 0x3e NEW_2
	if(var_13_bool == 0) goto Label_66; // 0x40 JumpB
	var_11_bool = 1; // 0x41 MovB
	
Label_66:
	if(var_11_bool == 0) goto Label_72; // 0x42 JumpB
	var_14_object = Obj(); // 0x43 PushV
	func_264(var_14_object); // 0x44 NEW_2
	RemoveActor(var_14_object); // 0x46 Func
	
Label_72:
	return 0; // 0x48 Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x76 PushI
	var_9_bool = var_7_int == var_8_int; // 0x77 Eq
	if(var_9_bool == 0) goto Label_139; // 0x78 JumpB
	var_10_bool = 0; // 0x79 PushV
	func_102(var_5_bool, var_6_bool, var_7_int, var_10_bool); // 0x7a NEW_2
	if(var_10_bool == 0) goto Label_133; // 0x7c JumpB
	var_23_bool = var_2_bool == 0; // 0x7d Not
	if(var_23_bool == 0) goto Label_132; // 0x7e JumpB
	var_24_object = Obj(); // 0x7f PushV
	var_24_object = var_4_object; // 0x80 MovT
	func_253(var_24_object); // 0x81 NEW_2
	var_2_bool = 1; // 0x83 TMovB
	
Label_132:
	goto Label_139; // 0x84 Jump
	
Label_139:
	return 0; // 0x8b Return
	
Label_133:
	var_31_bool = var_2_bool; // 0x85 PushT
	if(var_31_bool == 0) goto Label_139; // 0x86 JumpB
	var_32_string = "head"; // 0x87 PushS
	UnlookAsync(var_32_string); // 0x88 Func
	var_2_bool = 0; // 0x8a TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_float = 0; var_8_float = 0; // 0x0 PushV
	var_7_float = 200; // 0x1 MovI
	var_8_float = 100; // 0x2 MovI
	func_6(var_6_bool, var_7_float, var_8_float); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_102(var_0_int, var_1_int, var_4_object, var_10_bool)
{
	var_11_float = 0; var_12_float = 0; // 0x66 PushV
	var_13_bool = var_4_object == 0; // 0x67 NullEq
	if(var_13_bool == 0) goto Label_107; // 0x68 JumpB
	var_10_bool = 0; // 0x69 MovB
	return 2; // 0x6a Return
	
Label_107:
	var_14_float = 0; var_15_object = Obj(); // 0x6b PushV
	var_15_object = var_4_object; // 0x6c MovT
	func_240(var_15_object); // 0x6d NEW_2
	var_12_float = sqrt(var_14_float); // 0x6f Sqrt2
	var_22_bool = var_2_bool; // 0x70 PushT
	if(var_22_bool == 0) goto Label_115; // 0x71 JumpB
	var_12_float = var_12_float - var_1_int; // 0x72 Sub2
	
Label_115:
	var_10_bool = var_12_float < var_0_int; // 0x73 LT2
	return 2; // 0x74 Return
}


func_6(var_6_bool, var_7_float, var_8_float)
{
	var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; // 0x6 PushV
	var_6_bool = 0; // 0x7 TMovB
	
Label_8:
	var_13_int = 3; // 0x8 PushI
	rand(var_11_float, var_13_int); // 0x9 Func
	var_14_int = 3; // 0xb PushI
	var_15_int = var_11_float + var_14_int; // 0xc Add
	Sleep(var_15_int, var_12_bool); // 0xd Func
	var_6_bool = 1; // 0xf TMovB
	var_16_float = 0; var_17_float = 0; // 0x10 PushV
	var_16_float = var_7_float; // 0x11 Mov
	var_17_float = var_8_float; // 0x12 Mov
	func_75(var_8_float, var_9_float, var_10_bool, var_11_float, var_12_bool, var_16_float, var_17_float); // 0x13 NEW_2
	var_6_bool = 0; // 0x15 TMovB
	goto Label_8; // 0x16 Jump
}


func_264(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x108 PushV
	self(var_16_object); // 0x109 Func
	var_14_object = var_16_object; // 0x10b Mov
	return 2; // 0x10c Return
}


func_73(var_13_bool)
{
	var_13_bool = 1; // 0x49 MovB
	return 0; // 0x4a Return
}


func_233(var_66_bool)
{
	var_66_bool = 1; // 0xe9 MovB
	return 0; // 0xea Return
}


func_75(var_0_int, var_1_int, var_2_bool, var_3_bool, var_12_bool, var_16_float, var_17_float)
{
	var_18_bool = 0; // 0x4c PushV
	func_248(var_18_bool); // 0x4d NEW_2
	var_21_bool = var_18_bool == 0; // 0x4f Not
	if(var_21_bool == 0) goto Label_82; // 0x50 JumpB
	return 0; // 0x51 Return
	
Label_82:
	var_22_string = "player"; // 0x52 PushS
	FindActor(var_12_bool, var_22_string); // 0x53 Func
	var_2_bool = 0; // 0x55 TMovB
	var_3_bool = 0; // 0x56 TMovB
	var_0_int = var_16_float; // 0x57 TMov
	var_1_int = var_17_float; // 0x58 TMov
	var_23_int = 10; // 0x59 PushI
	var_24_float = 1.0; // 0x5a PushF
	SetTimer(var_23_int, var_24_float); // 0x5b Func
	func_154(); // 0x5e NEW_2
	var_76_bool = var_3_bool == 0; // 0x60 Not
	if(var_76_bool == 0) goto Label_101; // 0x61 JumpB
	var_77_int = 10; // 0x62 PushI
	KillTimer(var_77_int); // 0x63 Func
	
Label_101:
	return 0; // 0x65 Return
}


func_140(var_2_bool, var_3_bool)
{
	func_235(); // 0x8d NEW_2
	var_8_int = 10; // 0x8f PushI
	KillTimer(var_8_int); // 0x90 Func
	var_9_bool = var_2_bool; // 0x92 PushT
	if(var_9_bool == 0) goto Label_152; // 0x93 JumpB
	var_10_string = "head"; // 0x94 PushS
	UnlookAsync(var_10_string); // 0x95 Func
	var_2_bool = 0; // 0x97 TMovB
	
Label_152:
	var_3_bool = 1; // 0x98 TMovB
	return 0; // 0x99 Return
}


func_235()
{
	StopAnimation(); // 0xeb Func
	StopGroup0(); // 0xed Func
	return 0; // 0xef Return
}


func_270(var_47_string, var_48_int)
{
	var_49_string = ""; var_50_string = ""; // 0x10e PushV
	var_50_string = "idle"; // 0x10f MovS
	var_51_int = var_48_int; // 0x110 Push
	if(var_51_int == 0) goto Label_275; // 0x111 JumpB
	var_50_string = var_50_string + var_48_int; // 0x112 Add2
	
Label_275:
	var_47_string = var_50_string; // 0x113 Mov
	return 2; // 0x114 Return
}


func_240(var_14_float)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0xf0 PushV
	GetPosition(var_19_cvector); // 0xf1 Func
	GetPosition(var_20_cvector); // 0xf3 ObjFunc
	var_21_cvector = var_20_cvector - var_19_cvector; // 0xf5 Sub2
	var_14_float = var_21_cvector | var_21_cvector; // 0xf6 Or2
	return 6; // 0xf7 Return
}


func_277(var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x115 PushV
	var_44_int = 0; // 0x116 MovI
	
Label_279:
	var_46_string = "all"; // 0x117 PushS
	var_47_string = ""; var_48_int = 0; // 0x118 PushV
	var_48_int = var_44_int; // 0x119 Mov
	func_270(var_47_string, var_48_int); // 0x11a NEW_2
	HasAnimation(var_45_bool, var_46_string, var_47_string); // 0x11c Func
	var_52_bool = var_45_bool == 0; // 0x11e Not
	if(var_52_bool == 0) goto Label_289; // 0x11f JumpB
	goto Label_292; // 0x120 Jump
	
Label_292:
	var_41_int = var_44_int; // 0x124 Mov
	return 4; // 0x125 Return
	
Label_289:
	var_53_int = 1; // 0x121 PushI
	var_44_int = var_44_int + var_53_int; // 0x122 Add2
	goto Label_279; // 0x123 Jump
}


func_248(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0xf8 PushV
	IsLoaded(var_20_bool); // 0xf9 Func
	var_18_bool = var_20_bool; // 0xfb Mov
	return 2; // 0xfc Return
}


func_24(var_5_bool)
{
	var_5_bool = 1; // 0x18 TMovB
	var_10_bool = 0; // 0x19 PushV
	var_10_bool = 0; // 0x1a MovB
	var_11_bool = 0; // 0x1b PushV
	func_248(var_11_bool); // 0x1c NEW_2
	var_14_bool = var_11_bool == 0; // 0x1e Not
	if(var_14_bool == 0) goto Label_37; // 0x1f JumpB
	var_15_bool = 0; // 0x20 PushV
	func_73(var_15_bool); // 0x21 NEW_2
	if(var_15_bool == 0) goto Label_37; // 0x23 JumpB
	var_10_bool = 1; // 0x24 MovB
	
Label_37:
	if(var_10_bool == 0) goto Label_43; // 0x25 JumpB
	var_16_object = Obj(); // 0x26 PushV
	func_264(var_16_object); // 0x27 NEW_2
	RemoveActor(var_16_object); // 0x29 Func
	
Label_43:
	return 0; // 0x2b Return
}


func_154()
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_bool = 0; // 0x9a PushV
	WaitForAnimEnd(); // 0x9b Func
	var_39_bool = 0; // 0x9d PushV
	func_248(var_39_bool); // 0x9e NEW_2
	var_40_bool = var_39_bool == 0; // 0xa0 Not
	if(var_40_bool == 0) goto Label_163; // 0xa1 JumpB
	return 14; // 0xa2 Return
	
Label_163:
	var_41_int = 0; // 0xa3 PushV
	func_277(var_41_int); // 0xa4 NEW_2
	var_32_int = var_41_int; // 0xa5 Mov
	var_33_int = 0; // 0xa7 MovI
	
Label_168:
	var_54_bool = 0; // 0xa8 PushV
	var_54_bool = 0; // 0xa9 MovB
	var_55_int = 5; // 0xaa PushI
	var_56_bool = var_33_int < var_55_int; // 0xab LT
	if(var_56_bool == 0) goto Label_178; // 0xac JumpB
	var_57_bool = 0; // 0xad PushV
	func_248(var_57_bool); // 0xae NEW_2
	if(var_57_bool == 0) goto Label_178; // 0xb0 JumpB
	var_54_bool = 1; // 0xb1 MovB
	
Label_178:
	if(var_54_bool == 0) goto Label_230; // 0xb2 JumpB
	var_58_int = 3; // 0xb3 PushI
	irand(var_34_int, var_58_int); // 0xb4 Func
	var_59_int = 0; // 0xb6 PushI
	var_60_bool = var_34_int == var_59_int; // 0xb7 Eq
	if(var_60_bool == 0) goto Label_202; // 0xb8 JumpB
	var_61_int = var_32_int; // 0xb9 Push
	if(var_61_int == 0) goto Label_201; // 0xba JumpB
	irand(var_35_int, var_32_int); // 0xbb Func
	var_62_string = "all"; // 0xbd PushS
	var_63_string = ""; var_64_int = 0; // 0xbe PushV
	var_64_int = var_35_int; // 0xbf Mov
	func_270(var_63_string, var_64_int); // 0xc0 NEW_2
	PlayAnimation(var_62_string, var_63_string); // 0xc2 Func
	WaitForAnimEnd(var_36_bool); // 0xc4 Func
	var_65_bool = var_36_bool == 0; // 0xc6 Not
	if(var_65_bool == 0) goto Label_201; // 0xc7 JumpB
	goto Label_230; // 0xc8 Jump
	
Label_230:
	ResetAAS(); // 0xe6 Func
	return 14; // 0xe8 Return
	
Label_201:
	goto Label_219; // 0xc9 Jump
	
Label_219:
	var_66_bool = 0; // 0xdb PushV
	func_233(var_66_bool); // 0xdc NEW_2
	var_67_bool = var_66_bool == 0; // 0xde Not
	if(var_67_bool == 0) goto Label_225; // 0xdf JumpB
	goto Label_230; // 0xe0 Jump
	
Label_225:
	ResetAAS(); // 0xe1 Func
	var_68_int = 1; // 0xe3 PushI
	var_33_int = var_33_int + var_68_int; // 0xe4 Add2
	goto Label_168; // 0xe5 Jump
	
Label_202:
	var_69_int = 1; // 0xca PushI
	var_70_bool = var_34_int == var_69_int; // 0xcb Eq
	if(var_70_bool == 0) goto Label_216; // 0xcc JumpB
	var_71_int = 4; // 0xcd PushI
	rand(var_37_float, var_71_int); // 0xce Func
	var_72_int = 1; // 0xd0 PushI
	var_73_int = var_37_float + var_72_int; // 0xd1 Add
	Sleep(var_73_int, var_38_bool); // 0xd2 Func
	var_74_bool = var_38_bool == 0; // 0xd4 Not
	if(var_74_bool == 0) goto Label_215; // 0xd5 JumpB
	goto Label_230; // 0xd6 Jump
	
Label_215:
	goto Label_219; // 0xd7 Jump
	
Label_216:
	var_75_int = var_33_int; // 0xd8 Push
	if(var_75_int == 0) goto Label_219; // 0xd9 JumpB
	goto Label_230; // 0xda Jump
}


func_253(var_24_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); // 0xfd PushV
	GetEyesHeight(var_27_float); // 0xfe ObjFunc
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x100 MovV
	var_29_float = GetByIndex(var_28_cvector, 1); // 0x101 PushE
	var_29_float = var_27_float; // 0x102 Mov
	SetByIndex(var_28_cvector, 1) = var_29_float; // 0x103 PopE
	var_30_string = "head"; // 0x104 PushS
	LookAsync(var_24_object, var_30_string, var_28_cvector); // 0x105 Func
	return 4; // 0x107 Return
}


