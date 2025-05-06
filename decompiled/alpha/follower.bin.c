task_1_event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 0; // 0x7f PushI
	var_4_bool = var_2_int != var_3_int; // 0x80 Neq
	if(var_4_bool == 0) goto Label_131; // 0x81 JumpB
	return 0; // 0x82 Return
	
Label_131:
	var_5_bool = 0; var_6_object = Obj(); // 0x83 PushV
	var_6_object = var_1_object; // 0x84 MovT
	func_164(var_5_bool, var_6_object); // 0x85 Call
	var_41_bool = var_5_bool == 0; // 0x87 Not
	if(var_41_bool == 0) goto Label_138; // 0x88 JumpB
	var_0_bool = 1; // 0x89 TMovB
	
Label_138:
	var_42_int = 0; // 0x8a PushI
	KillTimer(var_42_int); // 0x8b Func
	Stop(); // 0x8d Func
	return 0; // 0x8f Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_object)
{
	RequestClearPath(var_2_object); // 0x91 Func
	return 0; // 0x93 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_object)
{
	func_148(var_2_object); // 0x9d Call
	var_4_object = Obj(); // 0x9f PushV
	var_4_object = var_2_object; // 0xa0 Mov
	func_252(); // 0xa1 Call
	return 0; // 0xa3 Return
}


event_41(var_0_bool, var_1_object, var_2_object)
{
	return 0; // 0xfd Return
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	var_4_string = "player"; // 0x1 PushS
	FindActor(var_3_object, var_4_string); // 0x2 Func
	
Label_4:
	var_5_bool = var_3_object != 0; // 0x4 NullNeq
	if(var_5_bool == 0) goto Label_22; // 0x5 JumpB
	var_6_bool = 0; var_7_object = Obj(); var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_bool = 0; // 0x6 PushV
	var_7_object = var_3_object; // 0x7 Mov
	var_8_float = 200; // 0x8 MovI
	var_9_float = 5000; // 0x9 MovI
	var_10_bool = 1; // 0xa MovB
	var_11_bool = 1; // 0xb MovB
	TaskCall(1); // 0xc TaskCall
	func_24(var_12_bool, var_13_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_bool, var_11_bool); // 0xd Call
	TaskReturn(); // 0xe TaskReturn
	WaitForAnimEnd(); // 0x10 Func
	var_91_int = 3; // 0x12 PushI
	Sleep(var_91_int); // 0x13 Func
	goto Label_4; // 0x15 Jump
	
Label_22:
	return 2; // 0x16 Return
}


func_192(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0xc0 PushV
	var_42_bool = var_37_object == 0; // 0xc1 NullEq
	if(var_42_bool == 0) goto Label_197; // 0xc2 JumpB
	var_36_bool = 0; // 0xc3 MovB
	return 4; // 0xc4 Return
	
Label_197:
	var_43_bool = 0; // 0xc5 PushV
	var_43_bool = 0; // 0xc6 MovB
	var_44_string = "IsDead"; // 0xc7 PushS
	var_45_int = 1; // 0xc8 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0xc9 FuncExist
	if(var_46_bool == 0) goto Label_209; // 0xca JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xcb PushV
	var_48_object = var_37_object; // 0xcc Mov
	func_187(var_48_object); // 0xcd Call
	if(var_47_bool == 0) goto Label_209; // 0xcf JumpB
	var_43_bool = 1; // 0xd0 MovB
	
Label_209:
	if(var_43_bool == 0) goto Label_212; // 0xd1 JumpB
	var_36_bool = 0; // 0xd2 MovB
	return 4; // 0xd3 Return
	
Label_212:
	GetScene(var_40_object); // 0xd4 Func
	var_51_bool = var_40_object == 0; // 0xd6 NullEq
	if(var_51_bool == 0) goto Label_218; // 0xd7 JumpB
	var_36_bool = 0; // 0xd8 MovB
	return 4; // 0xd9 Return
	
Label_218:
	GetScene(var_41_object); // 0xda ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0xdc Neq
	if(var_52_bool == 0) goto Label_224; // 0xdd JumpB
	var_36_bool = 0; // 0xde MovB
	return 4; // 0xdf Return
	
Label_224:
	var_36_bool = 1; // 0xe0 MovB
	return 4; // 0xe1 Return
}


func_164(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xa5 PushV
	var_33_object = var_31_object; // 0xa6 Mov
	func_228(var_32_bool, var_33_object); // 0xa7 Call
	var_30_bool = var_32_bool; // 0xa8 Mov
	return 0; // 0xaa Return
}


func_228(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0xe4 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0xe5 PushV
	var_37_object = var_33_object; // 0xe6 Mov
	func_192(var_36_bool, var_37_object); // 0xe7 Call
	var_53_bool = var_36_bool == 0; // 0xe9 Not
	if(var_53_bool == 0) goto Label_237; // 0xea JumpB
	var_32_bool = 0; // 0xeb MovB
	return 2; // 0xec Return
	
Label_237:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0xed PushV
	var_55_object = var_33_object; // 0xee Mov
	var_56_string = "noaccess"; // 0xef MovS
	func_175(var_54_bool, var_55_object, var_56_string); // 0xf0 Call
	var_63_bool = var_54_bool == 0; // 0xf2 Not
	if(var_63_bool == 0) goto Label_246; // 0xf3 JumpB
	var_32_bool = 1; // 0xf4 MovB
	return 2; // 0xf5 Return
	
Label_246:
	var_64_string = "noaccess"; // 0xf6 PushS
	GetProperty(var_64_string, var_35_int); // 0xf7 ObjFunc
	var_65_int = 0; // 0xf9 PushI
	var_32_bool = var_35_int == var_65_int; // 0xfa Eq2
	return 2; // 0xfb Return
}


func_171(var_80_string)
{
	var_80_string = "walk"; // 0xab MovS
	return 0; // 0xac Return
}


func_173(var_81_string)
{
	var_81_string = "run"; // 0xad MovS
	return 0; // 0xae Return
}


func_175(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0xaf PushV
	var_59_string = "HasProperty"; // 0xb0 PushS
	var_60_int = 2; // 0xb1 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0xb2 FuncExist
	var_62_bool = var_61_bool == 0; // 0xb3 Not
	if(var_62_bool == 0) goto Label_183; // 0xb4 JumpB
	var_54_bool = 0; // 0xb5 MovB
	return 2; // 0xb6 Return
	
Label_183:
	HasProperty(var_56_string, var_58_bool); // 0xb7 ObjFunc
	var_54_bool = var_58_bool; // 0xb9 Mov
	return 2; // 0xba Return
}


func_148(var_0_bool)
{
	var_0_bool = 1; // 0x94 TMovB
	var_3_int = 0; // 0x95 PushI
	KillTimer(var_3_int); // 0x96 Func
	Stop(); // 0x98 Func
	return 0; // 0x9a Return
}


func_24(var_0_bool, var_1_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_bool, var_11_bool)
{
	var_14_bool = 0; var_15_bool = 0; var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_object = Obj(); // 0x18 PushV
	var_0_bool = 0; // 0x19 TMovB
	var_1_object = var_7_object; // 0x1a TMov
	var_23_bool = var_11_bool; // 0x1b Mov
	
Label_28:
	var_30_bool = 0; var_31_object = Obj(); // 0x1c PushV
	var_31_object = var_7_object; // 0x1d Mov
	func_164(var_30_bool, var_31_object); // 0x1e Call
	var_66_bool = var_30_bool == 0; // 0x20 Not
	if(var_66_bool == 0) goto Label_36; // 0x21 JumpB
	var_6_bool = 0; // 0x22 MovB
	return 16; // 0x23 Return
	
Label_36:
	GetPosition(var_25_cvector); // 0x24 ObjFunc
	GetPosition(var_26_cvector); // 0x26 Func
	var_27_cvector = var_25_cvector - var_26_cvector; // 0x28 Sub2
	var_28_float = var_27_cvector | var_27_cvector; // 0x29 Or2
	var_67_bool = 0; // 0x2a PushV
	var_67_bool = 0; // 0x2b MovB
	var_68_int = 0; // 0x2c PushI
	var_69_bool = var_9_float > var_68_int; // 0x2d GT
	if(var_69_bool == 0) goto Label_51; // 0x2e JumpB
	var_70_float = var_9_float * var_9_float; // 0x2f Mult
	var_71_bool = var_28_float > var_70_float; // 0x30 GT
	if(var_71_bool == 0) goto Label_51; // 0x31 JumpB
	var_67_bool = 1; // 0x32 MovB
	
Label_51:
	if(var_67_bool == 0) goto Label_56; // 0x33 JumpB
	Stop(); // 0x34 Func
	var_6_bool = 0; // 0x36 MovB
	return 16; // 0x37 Return
	
Label_56:
	var_72_float = var_8_float * var_8_float; // 0x38 Mult
	var_73_bool = var_28_float > var_72_float; // 0x39 GT
	if(var_73_bool == 0) goto Label_118; // 0x3a JumpB
	GetPFPosition(var_25_cvector); // 0x3b ObjFunc
	FindPathTo(var_29_object, var_25_cvector); // 0x3d Func
	var_74_bool = var_29_object != 0; // 0x3f NullNeq
	if(var_74_bool == 0) goto Label_67; // 0x40 JumpB
	var_24_object = var_29_object; // 0x41 Mov
	var_29_object = 0; // 0x42 SetNull
	
Label_67:
	var_75_bool = var_24_object != 0; // 0x43 NullNeq
	if(var_75_bool == 0) goto Label_100; // 0x44 JumpB
	var_76_bool = var_23_bool; // 0x45 Push
	if(var_76_bool == 0) goto Label_77; // 0x46 JumpB
	var_23_bool = 0; // 0x47 MovB
	RotatePath(var_24_object, var_22_bool); // 0x48 Func
	var_77_bool = var_22_bool == 0; // 0x4a Not
	if(var_77_bool == 0) goto Label_77; // 0x4b JumpB
	goto Label_124; // 0x4c Jump
	
Label_124:
	var_6_bool = !var_0_bool; // 0x7c Not2
	return 16; // 0x7d Return
	
Label_77:
	var_78_int = 0; // 0x4d PushI
	var_79_float = 0.3; // 0x4e PushF
	SetTimer(var_78_int, var_79_float); // 0x4f Func
	var_80_string = ""; // 0x51 PushV
	func_171(var_80_string); // 0x52 Call
	var_81_string = ""; // 0x54 PushV
	func_173(var_81_string); // 0x55 Call
	FollowPath(var_24_object, var_10_bool, var_22_bool, var_80_string, var_81_string); // 0x57 Func
	var_82_bool = var_22_bool == 0; // 0x59 Not
	if(var_82_bool == 0) goto Label_98; // 0x5a JumpB
	var_83_bool = var_0_bool; // 0x5b PushT
	if(var_83_bool == 0) goto Label_96; // 0x5c JumpB
	var_24_object = 0; // 0x5d SetNull
	goto Label_124; // 0x5e Jump
	
Label_96:
	goto Label_123; // 0x60 Jump
	
Label_123:
	goto Label_28; // 0x7b Jump
	
Label_98:
	var_24_object = 0; // 0x62 SetNull
	goto Label_116; // 0x63 Jump
	
Label_116:
	var_29_object = 0; // 0x74 SetNull
	goto Label_122; // 0x75 Jump
	
Label_122:
	var_24_object = 0; // 0x7a SetNull
	
Label_100:
	var_84_int = 0; // 0x64 PushI
	KillTimer(var_84_int); // 0x65 Func
	var_85_float = 0.5; // 0x67 PushF
	Sleep(var_85_float, var_22_bool); // 0x68 Func
	var_86_bool = var_22_bool == 0; // 0x6a Not
	if(var_86_bool == 0) goto Label_112; // 0x6b JumpB
	var_87_bool = var_0_bool; // 0x6c PushT
	if(var_87_bool == 0) goto Label_112; // 0x6d JumpB
	var_24_object = 0; // 0x6e SetNull
	goto Label_124; // 0x6f Jump
	
Label_112:
	var_88_int = 0; // 0x70 PushI
	var_89_float = 0.3; // 0x71 PushF
	SetTimer(var_88_int, var_89_float); // 0x72 Func
	
Label_118:
	var_90_int = 0; // 0x76 PushI
	KillTimer(var_90_int); // 0x77 Func
	goto Label_124; // 0x79 Jump
}


func_187(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0xbb PushV
	IsDead(var_50_bool); // 0xbc ObjFunc
	var_47_bool = var_50_bool; // 0xbe Mov
	return 2; // 0xbf Return
}


