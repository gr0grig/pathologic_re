task_0_event_1000(var_0_string, var_1_string, var_2_bool, var_3_object, var_4_bool)
{
	var_5_string = "fstop"; // 0x1e PushS
	var_6_bool = var_3_object == var_5_string; // 0x1f Eq
	if(var_6_bool == 0) goto Label_39; // 0x20 JumpB
	TaskCall(2); // 0x22 TaskCall
	func_230(); // 0x23 NEW_2
	TaskReturn(); // 0x24 TaskReturn
	goto Label_44; // 0x26 Jump
	
Label_44:
	return 0; // 0x2c Return
	
Label_39:
	var_9_string = ""; var_10_string = ""; // 0x27 PushV
	var_9_string = var_3_object; // 0x28 Mov
	var_10_string = var_4_bool; // 0x29 Mov
	func_331(); // 0x2a NEW_2
}


task_1_event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_5_string = "fstop"; // 0x3c PushS
	var_6_bool = var_3_string == var_5_string; // 0x3d Eq
	if(var_6_bool == 0) goto Label_68; // 0x3e JumpB
	var_2_bool = 1; // 0x3f TMovB
	func_203(var_4_string); // 0x41 NEW_2
	goto Label_78; // 0x43 Jump
	
Label_78:
	return 0; // 0x4e Return
	
Label_68:
	var_8_string = "fgo"; // 0x44 PushS
	var_9_bool = var_3_string == var_8_string; // 0x45 Eq
	if(var_9_bool == 0) goto Label_73; // 0x46 JumpB
	var_2_bool = 0; // 0x47 TMovB
	goto Label_78; // 0x48 Jump
	
Label_73:
	var_10_string = ""; var_11_string = ""; // 0x49 PushV
	var_10_string = var_3_string; // 0x4a Mov
	var_11_string = var_4_string; // 0x4b Mov
	func_331(); // 0x4c NEW_2
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int)
{
	var_4_int = 0; // 0xb6 PushI
	var_5_bool = var_3_int != var_4_int; // 0xb7 Neq
	if(var_5_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_6_bool = 0; var_7_object = Obj(); // 0xba PushV
	var_7_object = var_1_object; // 0xbb MovT
	func_219(var_6_bool, var_7_object); // 0xbc NEW_2
	var_42_bool = var_6_bool == 0; // 0xbe Not
	if(var_42_bool == 0) goto Label_193; // 0xbf JumpB
	var_0_bool = 1; // 0xc0 TMovB
	
Label_193:
	var_43_int = 0; // 0xc1 PushI
	KillTimer(var_43_int); // 0xc2 Func
	Stop(); // 0xc4 Func
	return 0; // 0xc6 Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	RequestClearPath(var_3_object); // 0xc8 Func
	return 0; // 0xca Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	func_203(var_3_object); // 0xd4 NEW_2
	var_5_object = Obj(); // 0xd6 PushV
	var_5_object = var_3_object; // 0xd7 Mov
	func_329(); // 0xd8 NEW_2
	return 0; // 0xda Return
}


task_2_event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_5_string = "fgo"; // 0xf0 PushS
	var_6_bool = var_3_string == var_5_string; // 0xf1 Eq
	if(var_6_bool == 0) goto Label_246; // 0xf2 JumpB
	StopGroup0(); // 0xf3 Func
	goto Label_251; // 0xf5 Jump
	
Label_251:
	return 0; // 0xfb Return
	
Label_246:
	var_7_string = ""; var_8_string = ""; // 0xf6 PushV
	var_7_string = var_3_string; // 0xf7 Mov
	var_8_string = var_4_string; // 0xf8 Mov
	func_331(); // 0xf9 NEW_2
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object)
{
	return 0; // 0x14a Return
}


event_1000(var_0_bool, var_1_object, var_2_bool, var_3_string, var_4_string)
{
	var_5_string = "frun"; // 0x14c PushS
	var_6_bool = var_3_string == var_5_string; // 0x14d Eq
	if(var_6_bool == 0) goto Label_339; // 0x14e JumpB
	var_7_bool = GlobalVars[0]; // 0x14f PushGE
	var_7_bool = 1; // 0x150 MovB
	GlobalVars[0] = var_7_bool; // 0x151 PopGE
	goto Label_345; // 0x152 Jump
	
Label_345:
	return 0; // 0x159 Return
	
Label_339:
	var_8_string = "fwalk"; // 0x153 PushS
	var_9_bool = var_3_string == var_8_string; // 0x154 Eq
	if(var_9_bool == 0) goto Label_345; // 0x155 JumpB
	var_10_bool = GlobalVars[0]; // 0x156 PushGE
	var_10_bool = 0; // 0x157 MovB
	GlobalVars[0] = var_10_bool; // 0x158 PopGE
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
	if(var_7_bool == 0) goto Label_27; // 0x8 JumpB
	var_8_bool = 0; var_9_object = Obj(); // 0x9 PushV
	var_9_object = var_4_object; // 0xa Mov
	TaskCall(1); // 0xb TaskCall
	func_45(var_12_bool, var_8_bool, var_9_object); // 0xc NEW_2
	TaskReturn(); // 0xd TaskReturn
	if(var_10_bool == 0) goto Label_21; // 0xf JumpB
	TaskCall(2); // 0x11 TaskCall
	func_230(); // 0x12 NEW_2
	TaskReturn(); // 0x13 TaskReturn
	
Label_21:
	WaitForAnimEnd(); // 0x15 Func
	var_99_int = 3; // 0x17 PushI
	Sleep(var_99_int); // 0x18 Func
	goto Label_7; // 0x1a Jump
	
Label_27:
	return 2; // 0x1b Return
}


func_226(var_86_string)
{
	var_86_string = "walk"; // 0xe2 MovS
	return 0; // 0xe3 Return
}


func_228(var_87_string)
{
	var_87_string = "run"; // 0xe4 MovS
	return 0; // 0xe5 Return
}


func_230()
{
	var_97_string = "Waiting for your orders!"; // 0xe6 PushS
	Trace(var_97_string); // 0xe7 Func
	Hold(); // 0xe9 Func
	var_98_string = "Following you!"; // 0xeb PushS
	Trace(var_98_string); // 0xec Func
	return 0; // 0xee Return
}


func_264(var_53_bool)
{
	var_55_bool = 0; var_56_bool = 0; // 0x108 PushV
	IsDead(var_56_bool); // 0x109 ObjFunc
	var_53_bool = var_56_bool; // 0x10b Mov
	return 2; // 0x10c Return
}


func_203(var_0_bool)
{
	var_0_bool = 1; // 0xcb TMovB
	var_4_int = 0; // 0xcc PushI
	KillTimer(var_4_int); // 0xcd Func
	Stop(); // 0xcf Func
	return 0; // 0xd1 Return
}


func_45(var_2_bool, var_8_bool, var_9_object)
{
	var_2_bool = 0; // 0x2e TMovB
	var_13_bool = 0; var_14_object = Obj(); var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0; // 0x2f PushV
	var_14_object = var_9_object; // 0x30 Mov
	var_15_float = 200; // 0x31 MovI
	var_16_float = 10000; // 0x32 MovI
	var_19_bool = GlobalVars[0]; // 0x33 PushGE
	var_17_bool = var_19_bool; // 0x34 Mov
	var_18_bool = 1; // 0x36 MovB
	func_79(var_8_bool, var_9_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool); // 0x37 NEW_2
	var_8_bool = var_2_bool; // 0x39 MovT
	return 0; // 0x3a Return
}


func_269(var_42_bool, var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0x10d PushV
	var_48_bool = var_43_object == 0; // 0x10e NullEq
	if(var_48_bool == 0) goto Label_274; // 0x10f JumpB
	var_42_bool = 0; // 0x110 MovB
	return 4; // 0x111 Return
	
Label_274:
	var_49_bool = 0; // 0x112 PushV
	var_49_bool = 0; // 0x113 MovB
	var_50_string = "IsDead"; // 0x114 PushS
	var_51_int = 1; // 0x115 PushI
	var_52_bool = IsFuncExist(var_43_object, var_50_string, var_51_int); // 0x116 FuncExist
	if(var_52_bool == 0) goto Label_286; // 0x117 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x118 PushV
	var_54_object = var_43_object; // 0x119 Mov
	func_264(var_54_object); // 0x11a NEW_2
	if(var_53_bool == 0) goto Label_286; // 0x11c JumpB
	var_49_bool = 1; // 0x11d MovB
	
Label_286:
	if(var_49_bool == 0) goto Label_289; // 0x11e JumpB
	var_42_bool = 0; // 0x11f MovB
	return 4; // 0x120 Return
	
Label_289:
	GetScene(var_46_object); // 0x121 Func
	var_57_bool = var_46_object == 0; // 0x123 NullEq
	if(var_57_bool == 0) goto Label_295; // 0x124 JumpB
	var_42_bool = 0; // 0x125 MovB
	return 4; // 0x126 Return
	
Label_295:
	GetScene(var_47_object); // 0x127 ObjFunc
	var_58_bool = var_46_object != var_47_object; // 0x129 Neq
	if(var_58_bool == 0) goto Label_301; // 0x12a JumpB
	var_42_bool = 0; // 0x12b MovB
	return 4; // 0x12c Return
	
Label_301:
	var_42_bool = 1; // 0x12d MovB
	return 4; // 0x12e Return
}


func_79(var_0_bool, var_1_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool)
{
	var_20_bool = 0; var_21_bool = 0; var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_object = Obj(); // 0x4f PushV
	var_0_bool = 0; // 0x50 TMovB
	var_1_object = var_14_object; // 0x51 TMov
	var_29_bool = var_18_bool; // 0x52 Mov
	
Label_83:
	var_36_bool = 0; var_37_object = Obj(); // 0x53 PushV
	var_37_object = var_14_object; // 0x54 Mov
	func_219(var_36_bool, var_37_object); // 0x55 NEW_2
	var_72_bool = var_36_bool == 0; // 0x57 Not
	if(var_72_bool == 0) goto Label_91; // 0x58 JumpB
	var_13_bool = 0; // 0x59 MovB
	return 16; // 0x5a Return
	
Label_91:
	GetPosition(var_31_cvector); // 0x5b ObjFunc
	GetPosition(var_32_cvector); // 0x5d Func
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x5f Sub2
	var_34_float = var_33_cvector | var_33_cvector; // 0x60 Or2
	var_73_bool = 0; // 0x61 PushV
	var_73_bool = 0; // 0x62 MovB
	var_74_int = 0; // 0x63 PushI
	var_75_bool = var_16_float > var_74_int; // 0x64 GT
	if(var_75_bool == 0) goto Label_106; // 0x65 JumpB
	var_76_float = var_16_float * var_16_float; // 0x66 Mult
	var_77_bool = var_34_float > var_76_float; // 0x67 GT
	if(var_77_bool == 0) goto Label_106; // 0x68 JumpB
	var_73_bool = 1; // 0x69 MovB
	
Label_106:
	if(var_73_bool == 0) goto Label_111; // 0x6a JumpB
	Stop(); // 0x6b Func
	var_13_bool = 0; // 0x6d MovB
	return 16; // 0x6e Return
	
Label_111:
	var_78_float = var_15_float * var_15_float; // 0x6f Mult
	var_79_bool = var_34_float > var_78_float; // 0x70 GT
	if(var_79_bool == 0) goto Label_173; // 0x71 JumpB
	GetPFPosition(var_31_cvector); // 0x72 ObjFunc
	FindPathTo(var_35_object, var_31_cvector); // 0x74 Func
	var_80_bool = var_35_object != 0; // 0x76 NullNeq
	if(var_80_bool == 0) goto Label_122; // 0x77 JumpB
	var_30_object = var_35_object; // 0x78 Mov
	var_35_object = 0; // 0x79 SetNull
	
Label_122:
	var_81_bool = var_30_object != 0; // 0x7a NullNeq
	if(var_81_bool == 0) goto Label_155; // 0x7b JumpB
	var_82_bool = var_29_bool; // 0x7c Push
	if(var_82_bool == 0) goto Label_132; // 0x7d JumpB
	var_29_bool = 0; // 0x7e MovB
	RotatePath(var_30_object, var_28_bool); // 0x7f Func
	var_83_bool = var_28_bool == 0; // 0x81 Not
	if(var_83_bool == 0) goto Label_132; // 0x82 JumpB
	goto Label_179; // 0x83 Jump
	
Label_179:
	var_13_bool = !var_0_bool; // 0xb3 Not2
	return 16; // 0xb4 Return
	
Label_132:
	var_84_int = 0; // 0x84 PushI
	var_85_float = 0.3; // 0x85 PushF
	SetTimer(var_84_int, var_85_float); // 0x86 Func
	var_86_string = ""; // 0x88 PushV
	func_226(var_86_string); // 0x89 NEW_2
	var_87_string = ""; // 0x8b PushV
	func_228(var_87_string); // 0x8c NEW_2
	FollowPath(var_30_object, var_17_bool, var_28_bool, var_86_string, var_87_string); // 0x8e Func
	var_88_bool = var_28_bool == 0; // 0x90 Not
	if(var_88_bool == 0) goto Label_153; // 0x91 JumpB
	var_89_bool = var_0_bool; // 0x92 PushT
	if(var_89_bool == 0) goto Label_151; // 0x93 JumpB
	var_30_object = 0; // 0x94 SetNull
	goto Label_179; // 0x95 Jump
	
Label_151:
	goto Label_178; // 0x97 Jump
	
Label_178:
	goto Label_83; // 0xb2 Jump
	
Label_153:
	var_30_object = 0; // 0x99 SetNull
	goto Label_171; // 0x9a Jump
	
Label_171:
	var_35_object = 0; // 0xab SetNull
	goto Label_177; // 0xac Jump
	
Label_177:
	var_30_object = 0; // 0xb1 SetNull
	
Label_155:
	var_90_int = 0; // 0x9b PushI
	KillTimer(var_90_int); // 0x9c Func
	var_91_float = 0.5; // 0x9e PushF
	Sleep(var_91_float, var_28_bool); // 0x9f Func
	var_92_bool = var_28_bool == 0; // 0xa1 Not
	if(var_92_bool == 0) goto Label_167; // 0xa2 JumpB
	var_93_bool = var_0_bool; // 0xa3 PushT
	if(var_93_bool == 0) goto Label_167; // 0xa4 JumpB
	var_30_object = 0; // 0xa5 SetNull
	goto Label_179; // 0xa6 Jump
	
Label_167:
	var_94_int = 0; // 0xa7 PushI
	var_95_float = 0.3; // 0xa8 PushF
	SetTimer(var_94_int, var_95_float); // 0xa9 Func
	
Label_173:
	var_96_int = 0; // 0xad PushI
	KillTimer(var_96_int); // 0xae Func
	goto Label_179; // 0xb0 Jump
}


func_305(var_38_bool, var_39_object)
{
	var_40_int = 0; var_41_int = 0; // 0x131 PushV
	var_42_bool = 0; var_43_object = Obj(); // 0x132 PushV
	var_43_object = var_39_object; // 0x133 Mov
	func_269(var_42_bool, var_43_object); // 0x134 NEW_2
	var_59_bool = var_42_bool == 0; // 0x136 Not
	if(var_59_bool == 0) goto Label_314; // 0x137 JumpB
	var_38_bool = 0; // 0x138 MovB
	return 2; // 0x139 Return
	
Label_314:
	var_60_bool = 0; var_61_object = Obj(); var_62_string = ""; // 0x13a PushV
	var_61_object = var_39_object; // 0x13b Mov
	var_62_string = "noaccess"; // 0x13c MovS
	func_252(var_60_bool, var_61_object, var_62_string); // 0x13d NEW_2
	var_69_bool = var_60_bool == 0; // 0x13f Not
	if(var_69_bool == 0) goto Label_323; // 0x140 JumpB
	var_38_bool = 1; // 0x141 MovB
	return 2; // 0x142 Return
	
Label_323:
	var_70_string = "noaccess"; // 0x143 PushS
	GetProperty(var_70_string, var_41_int); // 0x144 ObjFunc
	var_71_int = 0; // 0x146 PushI
	var_38_bool = var_41_int == var_71_int; // 0x147 Eq2
	return 2; // 0x148 Return
}


func_219(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_object = Obj(); // 0xdc PushV
	var_39_object = var_37_object; // 0xdd Mov
	func_305(var_38_bool, var_39_object); // 0xde NEW_2
	var_36_bool = var_38_bool; // 0xdf Mov
	return 0; // 0xe1 Return
}


func_252(var_60_bool, var_61_object, var_62_string)
{
	var_63_bool = 0; var_64_bool = 0; // 0xfc PushV
	var_65_string = "HasProperty"; // 0xfd PushS
	var_66_int = 2; // 0xfe PushI
	var_67_bool = IsFuncExist(var_61_object, var_65_string, var_66_int); // 0xff FuncExist
	var_68_bool = var_67_bool == 0; // 0x100 Not
	if(var_68_bool == 0) goto Label_260; // 0x101 JumpB
	var_60_bool = 0; // 0x102 MovB
	return 2; // 0x103 Return
	
Label_260:
	HasProperty(var_62_string, var_64_bool); // 0x104 ObjFunc
	var_60_bool = var_64_bool; // 0x106 Mov
	return 2; // 0x107 Return
}


