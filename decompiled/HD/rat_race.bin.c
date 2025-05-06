task_1_event_7(var_0_int)
{
	var_1_int = 0; // 0xb0 PushI
	var_2_bool = var_0_int == var_1_int; // 0xb1 Eq
	if(var_2_bool == 0) goto Label_181; // 0xb2 JumpB
	Stop(); // 0xb3 Func
	
Label_181:
	return 0; // 0xb5 Return
}


event_6()
{
	var_0_object = Obj(); // 0xe6 PushV
	func_187(var_0_object); // 0xe7 NEW_2
	RemoveActor(var_0_object); // 0xe9 Func
	Hold(); // 0xeb Func
	return 0; // 0xed Return
}


main()
{
	var_0_cvector = CVector(0,0,0); var_1_cvector = CVector(0,0,0); var_2_int = 0; var_3_bool = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_bool = 0; var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_object = Obj(); // 0x0 PushV
	var_18_int = 1; // 0x1 PushI
	Sleep(var_18_int); // 0x2 Func
	GetPosition(var_9_cvector); // 0x4 Func
	GetDirection(var_10_cvector); // 0x6 Func
	var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x8 PushV
	var_21_float = 100.0; // 0x9 PushF
	var_22_float = var_10_cvector * var_21_float; // 0xa Mult
	var_19_cvector = var_9_cvector + var_22_float; // 0xb Add2
	var_20_bool = 0; // 0xc MovB
	TaskCall(1); // 0xd TaskCall
	func_118(var_19_cvector, var_20_bool); // 0xe NEW_2
	TaskReturn(); // 0xf TaskReturn
	var_11_int = 0; // 0x11 MovI
	var_12_bool = 1; // 0x12 MovB
	var_61_object = GlobalVars[0]; // 0x13 PushGE
	size(var_13_int); // 0x14 ObjFunc
	var_14_int = 0; // 0x16 MovI
	
Label_23:
	var_62_bool = var_14_int < var_13_int; // 0x17 LT
	if(var_62_bool == 0) goto Label_85; // 0x18 JumpB
	var_63_object = GlobalVars[0]; // 0x19 PushGE
	get(var_15_int, var_14_int); // 0x1a ObjFunc
	var_64_bool = var_15_int != var_11_int; // 0x1c Neq
	if(var_64_bool == 0) goto Label_56; // 0x1d JumpB
	var_16_bool = 0; // 0x1e MovB
	var_65_bool = var_15_int < var_11_int; // 0x1f LT
	if(var_65_bool == 0) goto Label_38; // 0x20 JumpB
	var_66_bool = var_12_bool; // 0x21 Push
	if(var_66_bool == 0) goto Label_37; // 0x22 JumpB
	var_16_bool = 1; // 0x23 MovB
	var_12_bool = 0; // 0x24 MovB
	
Label_37:
	goto Label_42; // 0x25 Jump
	
Label_42:
	var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0x2a PushV
	var_69_float = 100.0; // 0x2b PushF
	var_70_float = var_10_cvector * var_69_float; // 0x2c Mult
	var_71_int = 1; // 0x2d PushI
	var_72_int = var_15_int + var_71_int; // 0x2e Add
	var_73_float = var_70_float * var_72_int; // 0x2f Mult
	var_67_cvector = var_9_cvector + var_73_float; // 0x30 Add2
	var_68_bool = var_16_bool; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_118(var_67_cvector, var_68_bool); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	var_11_int = var_15_int; // 0x36 Mov
	goto Label_82; // 0x37 Jump
	
Label_82:
	var_74_int = 1; // 0x52 PushI
	var_14_int = var_14_int + var_74_int; // 0x53 Add2
	goto Label_23; // 0x54 Jump
	
Label_38:
	var_75_bool = var_12_bool == 0; // 0x26 Not
	if(var_75_bool == 0) goto Label_42; // 0x27 JumpB
	var_16_bool = 1; // 0x28 MovB
	var_12_bool = 1; // 0x29 MovB
	
Label_56:
	WaitForAnimEnd(); // 0x38 Func
	var_76_string = "all"; // 0x3a PushS
	var_77_string = "attack_begin"; // 0x3b PushS
	PlayAnimation(var_76_string, var_77_string); // 0x3c Func
	WaitForAnimEnd(); // 0x3e Func
	var_78_string = "all"; // 0x40 PushS
	var_79_string = "attack_end"; // 0x41 PushS
	PlayAnimation(var_78_string, var_79_string); // 0x42 Func
	WaitForAnimEnd(); // 0x44 Func
	var_80_string = "all"; // 0x46 PushS
	var_81_string = "attack_begin"; // 0x47 PushS
	PlayAnimation(var_80_string, var_81_string); // 0x48 Func
	WaitForAnimEnd(); // 0x4a Func
	var_82_string = "all"; // 0x4c PushS
	var_83_string = "attack_end"; // 0x4d PushS
	PlayAnimation(var_82_string, var_83_string); // 0x4e Func
	WaitForAnimEnd(); // 0x50 Func
	
Label_85:
	GetScene(var_17_object); // 0x55 Func
	var_84_cvector = CVector(0,0,0); var_85_bool = 0; // 0x57 PushV
	var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_string = ""; // 0x58 PushV
	var_87_object = var_17_object; // 0x59 Mov
	var_89_string = "pt_ratf"; // 0x5a PushS
	var_90_int = GlobalVars[1]; // 0x5b PushGE
	var_88_string = var_89_string + var_90_int; // 0x5c Add2
	func_203(var_87_object, var_88_string); // 0x5d NEW_2
	var_84_cvector = var_86_cvector; // 0x5e Mov
	var_85_bool = !var_12_bool; // 0x60 Not2
	TaskCall(1); // 0x61 TaskCall
	func_118(var_84_cvector, var_85_bool); // 0x62 NEW_2
	TaskReturn(); // 0x63 TaskReturn
	var_100_bool = 0; var_101_string = ""; var_102_string = ""; // 0x65 PushV
	var_101_string = "rats_manager"; // 0x66 MovS
	var_103_string = "race_over"; // 0x67 PushS
	var_104_int = GlobalVars[1]; // 0x68 PushGE
	var_102_string = var_103_string + var_104_int; // 0x69 Add2
	func_218(var_100_bool, var_101_string, var_102_string); // 0x6a NEW_2
	var_108_int = 3; // 0x6c PushI
	Sleep(var_108_int); // 0x6d Func
	var_109_object = Obj(); // 0x6f PushV
	func_187(var_109_object); // 0x70 NEW_2
	RemoveActor(var_109_object); // 0x72 Func
	return 18; // 0x74 Return
}


func_193(var_50_cvector, var_51_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0xc1 PushV
	var_57_int = var_51_cvector | var_51_cvector; // 0xc2 Or
	var_56_float = sqrt(var_57_int); // 0xc3 Sqrt2
	var_58_float = 0.0; // 0xc4 PushF
	var_59_bool = var_56_float < var_58_float; // 0xc5 LT
	if(var_59_bool == 0) goto Label_201; // 0xc6 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xc7 MovV
	return 2; // 0xc8 Return
	
Label_201:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xc9 Div2
	return 2; // 0xca Return
}


func_203(var_86_cvector, var_88_string)
{
	var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_cvector = CVector(0,0,0); // 0xcb PushV
	GetLocator(var_88_string, var_93_bool, var_94_cvector); // 0xcc ObjFunc
	var_95_bool = var_93_bool == 0; // 0xce Not
	if(var_95_bool == 0) goto Label_216; // 0xcf JumpB
	var_96_string = "Locator '"; // 0xd0 PushS
	var_97_int = var_96_string + var_88_string; // 0xd1 Add
	var_98_string = "' doesn't exist"; // 0xd2 PushS
	var_99_int = var_97_int + var_98_string; // 0xd3 Add
	Trace(var_99_int); // 0xd4 Func
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0xd6 MovV
	return 4; // 0xd7 Return
	
Label_216:
	var_86_cvector = var_94_cvector; // 0xd8 Mov
	return 4; // 0xd9 Return
}


func_182(var_52_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0xb6 PushV
	GetPosition(var_54_cvector); // 0xb7 Func
	var_52_cvector = var_54_cvector; // 0xb9 Mov
	return 2; // 0xba Return
}


func_118(var_19_cvector, var_20_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_object = Obj(); // 0x76 PushV
	var_33_bool = var_20_bool; // 0x77 Push
	if(var_33_bool == 0) goto Label_147; // 0x78 JumpB
	WaitForAnimEnd(); // 0x79 Func
	GetPosition(var_28_cvector); // 0x7b Func
	var_29_cvector = var_19_cvector - var_28_cvector; // 0x7d Sub2
	var_34_float = GetByIndex(var_29_cvector, 0); // 0x7e PushE
	var_35_float = GetByIndex(var_29_cvector, 2); // 0x7f PushE
	var_36_float = 6.28319; // 0x80 PushF
	RotateAsync(var_34_float, var_35_float, var_36_float, var_30_bool); // 0x81 Func
	var_37_string = "all"; // 0x83 PushS
	var_38_bool = var_30_bool; // 0x84 Push
	if(var_38_bool == 0) goto Label_136; // 0x85 JumpB
	var_39_string = "rotate_left"; // 0x86 PushS
	goto Label_137; // 0x87 Jump
	
Label_137:
	PlayAnimation(var_37_string, var_39_string); // 0x89 Func
	WaitForAnimEnd(); // 0x8b Func
	StopAsync(); // 0x8d Func
	var_40_float = GetByIndex(var_29_cvector, 0); // 0x8f PushE
	var_41_float = GetByIndex(var_29_cvector, 2); // 0x90 PushE
	Rotate(var_40_float, var_41_float); // 0x91 Func
	
Label_147:
	var_42_int = 0; // 0x93 PushI
	var_43_int = 10; // 0x94 PushI
	SetTimer(var_42_int, var_43_int); // 0x95 Func
	var_44_bool = 1; // 0x97 PushB
	MovePoint(var_19_cvector, var_44_bool, var_31_bool); // 0x98 Func
	var_45_int = 0; // 0x9a PushI
	KillTimer(var_45_int); // 0x9b Func
	var_46_bool = var_31_bool == 0; // 0x9d Not
	if(var_46_bool == 0) goto Label_174; // 0x9e JumpB
	GetScene(var_32_object); // 0x9f Func
	var_47_object = Obj(); // 0xa1 PushV
	func_187(var_47_object); // 0xa2 NEW_2
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa4 PushV
	var_52_cvector = CVector(0,0,0); // 0xa5 PushV
	func_182(var_52_cvector); // 0xa6 NEW_2
	var_51_cvector = var_19_cvector - var_52_cvector; // 0xa8 Sub2
	func_193(var_50_cvector, var_51_cvector); // 0xa9 NEW_2
	Teleport(var_47_object, var_32_object, var_19_cvector, var_50_cvector); // 0xab Func
	var_32_object = 0; // 0xad SetNull
	
Label_174:
	return 10; // 0xae Return
	
Label_136:
	var_60_string = "rotate_right"; // 0x88 PushS
}


func_218(var_100_bool, var_101_string, var_102_string)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0xda PushV
	FindActor(var_106_object, var_101_string); // 0xdb Func
	var_107_bool = var_106_object == 0; // 0xdd NullEq
	if(var_107_bool == 0) goto Label_225; // 0xde JumpB
	var_100_bool = 0; // 0xdf MovB
	return 2; // 0xe0 Return
	
Label_225:
	Trigger(var_106_object, var_102_string); // 0xe1 Func
	var_100_bool = 1; // 0xe3 MovB
	return 2; // 0xe4 Return
}


func_187(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0xbb PushV
	self(var_49_object); // 0xbc Func
	var_47_object = var_49_object; // 0xbe Mov
	return 2; // 0xbf Return
}


