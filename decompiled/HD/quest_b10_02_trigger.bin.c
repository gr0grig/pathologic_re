task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; // 0x0 PushV
	IsPlayerActor(var_1_object, var_3_bool); // 0x1 Func
	var_4_bool = var_3_bool == 0; // 0x3 Not
	if(var_4_bool == 0) goto Label_6; // 0x4 JumpB
	return 2; // 0x5 Return
	
Label_6:
	EventDisable(23); // 0x6 EventDisable
	TaskCall(1); // 0x8 TaskCall
	func_67(); // 0x9 NEW_2
	TaskReturn(); // 0xa TaskReturn
	return 2; // 0xc Return
}


task_0_event_24(var_0_bool, var_1_int)
{
	CameraSwitchToNormal(); // 0xe Func
	return 0; // 0x10 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x15 PushV
	var_4_string = "cleanup"; // 0x16 PushS
	var_5_bool = var_1_string == var_4_string; // 0x17 Eq
	if(var_5_bool == 0) goto Label_44; // 0x18 JumpB
	var_0_bool = 1; // 0x19 TMovB
	IsLoaded(var_3_bool); // 0x1a Func
	var_6_bool = 0; // 0x1c PushV
	var_6_bool = 0; // 0x1d MovB
	var_7_bool = var_3_bool == 0; // 0x1e Not
	if(var_7_bool == 0) goto Label_37; // 0x1f JumpB
	var_8_bool = 0; // 0x20 PushV
	func_65(var_8_bool); // 0x21 NEW_2
	if(var_8_bool == 0) goto Label_37; // 0x23 JumpB
	var_6_bool = 1; // 0x24 MovB
	
Label_37:
	if(var_6_bool == 0) goto Label_43; // 0x25 JumpB
	var_9_object = Obj(); // 0x26 PushV
	func_222(var_9_object); // 0x27 NEW_2
	RemoveActor(var_9_object); // 0x29 Func
	
Label_43:
	goto Label_48; // 0x2b Jump
	
Label_48:
	return 2; // 0x30 Return
	
Label_44:
	var_12_string = "restore"; // 0x2c PushS
	var_13_bool = var_1_string == var_12_string; // 0x2d Eq
	if(var_13_bool == 0) goto Label_48; // 0x2e JumpB
	var_0_bool = 0; // 0x2f TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x31 PushV
	var_1_bool = 0; // 0x32 MovB
	var_2_bool = var_0_bool; // 0x33 PushT
	if(var_2_bool == 0) goto Label_58; // 0x34 JumpB
	var_3_bool = 0; // 0x35 PushV
	func_65(var_3_bool); // 0x36 NEW_2
	if(var_3_bool == 0) goto Label_58; // 0x38 JumpB
	var_1_bool = 1; // 0x39 MovB
	
Label_58:
	if(var_1_bool == 0) goto Label_64; // 0x3a JumpB
	var_4_object = Obj(); // 0x3b PushV
	func_222(var_4_object); // 0x3c NEW_2
	RemoveActor(var_4_object); // 0x3e Func
	
Label_64:
	return 0; // 0x40 Return
}


main(var_0_bool)
{
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_65(var_3_bool)
{
	var_3_bool = 1; // 0x41 MovB
	return 0; // 0x42 Return
}


func_67()
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); // 0x43 PushV
	var_13_string = "b10q02Cutscene"; // 0x44 PushS
	var_14_int = 1; // 0x45 PushI
	SetVariable(var_13_string, var_14_int); // 0x46 Func
	GetMainOutdoorScene(var_9_object); // 0x48 Func
	var_15_object = Obj(); // 0x4a PushV
	func_228(var_15_object); // 0x4b NEW_2
	var_10_object = var_15_object; // 0x4c Mov
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; // 0x4e PushV
	var_19_object = var_9_object; // 0x4f Mov
	var_20_string = "cs_b10q02_girl"; // 0x50 MovS
	var_21_string = "cs_play_all.bin"; // 0x51 MovS
	func_234(var_18_object, var_19_object, var_20_string, var_21_string); // 0x52 NEW_2
	var_11_object = var_18_object; // 0x53 Mov
	ForceGeometryLoad(); // 0x55 ObjFunc
	add(var_11_object); // 0x57 ObjFunc
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; // 0x59 PushV
	var_27_object = var_9_object; // 0x5a Mov
	var_28_string = "cs_b10q02_boy"; // 0x5b MovS
	var_29_string = "cs_play_all.bin"; // 0x5c MovS
	func_234(var_26_object, var_27_object, var_28_string, var_29_string); // 0x5d NEW_2
	var_11_object = var_26_object; // 0x5e Mov
	ForceGeometryLoad(); // 0x60 ObjFunc
	add(var_11_object); // 0x62 ObjFunc
	var_30_object = Obj(); var_31_object = Obj(); var_32_string = ""; var_33_string = ""; // 0x64 PushV
	var_31_object = var_9_object; // 0x65 Mov
	var_32_string = "cs_b10q02_doberman"; // 0x66 MovS
	var_33_string = "cs_play_all.bin"; // 0x67 MovS
	func_234(var_30_object, var_31_object, var_32_string, var_33_string); // 0x68 NEW_2
	var_11_object = var_30_object; // 0x69 Mov
	ForceGeometryLoad(); // 0x6b ObjFunc
	add(var_11_object); // 0x6d ObjFunc
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; // 0x6f PushV
	var_35_object = var_9_object; // 0x70 Mov
	var_36_string = "cs_b10q02_littleboy"; // 0x71 MovS
	var_37_string = "cs_play_all.bin"; // 0x72 MovS
	func_234(var_34_object, var_35_object, var_36_string, var_37_string); // 0x73 NEW_2
	var_11_object = var_34_object; // 0x74 Mov
	ForceGeometryLoad(); // 0x76 ObjFunc
	add(var_11_object); // 0x78 ObjFunc
	var_38_object = Obj(); // 0x7a PushV
	func_172(var_38_object); // 0x7b NEW_2
	var_12_object = var_38_object; // 0x7c Mov
	func_275(); // 0x7f NEW_2
	var_44_object = Obj(); // 0x81 PushV
	var_44_object = var_12_object; // 0x82 Mov
	func_179(var_44_object); // 0x83 NEW_2
	var_58_string = "space"; // 0x85 PushS
	RegisterKeyCallback(var_58_string); // 0x86 Func
	var_59_string = "cs_b10q02.mot"; // 0x88 PushS
	CameraPlay(var_59_string); // 0x89 Func
	CameraWaitForPlayFinish(); // 0x8b Func
	var_60_string = "space"; // 0x8d PushS
	UnregisterKeyCallback(var_60_string); // 0x8e Func
	var_61_object = Obj(); // 0x90 PushV
	var_61_object = var_12_object; // 0x91 Mov
	func_202(var_61_object); // 0x92 NEW_2
	func_280(); // 0x95 NEW_2
	CameraSwitchToNormal(); // 0x97 Func
	var_74_object = Obj(); // 0x99 PushV
	var_74_object = var_10_object; // 0x9a Mov
	func_254(var_74_object); // 0x9b NEW_2
	var_85_bool = 0; var_86_string = ""; var_87_string = ""; // 0x9d PushV
	var_86_string = "quest_b10_02"; // 0x9e MovS
	var_87_string = "place_bomb"; // 0x9f MovS
	func_242(var_85_bool, var_86_string, var_87_string); // 0xa0 NEW_2
	var_91_object = Obj(); // 0xa2 PushV
	func_222(var_91_object); // 0xa3 NEW_2
	RemoveActor(var_91_object); // 0xa5 Func
	return 8; // 0xa7 Return
}


func_228(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0xe4 PushV
	CreateObjectVector(var_17_object); // 0xe5 Func
	var_15_object = var_17_object; // 0xe7 Mov
	return 2; // 0xe8 Return
}


func_234(var_18_object, var_19_object, var_20_string, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0xea PushV
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0xeb PushVec
	var_25_cvector = CVector(0.0, 0.0, 1.0); // 0xec PushVec
	AddScriptedActor(var_23_object, var_20_string, var_21_string, var_19_object, var_24_cvector, var_25_cvector); // 0xed Func
	var_18_object = var_23_object; // 0xef Mov
	return 2; // 0xf0 Return
}


func_202(var_61_object)
{
	var_62_int = 0; var_63_int = 0; // 0xca PushV
	var_64_bool = var_61_object == 0; // 0xcb Not
	if(var_64_bool == 0) goto Label_206; // 0xcc JumpB
	return 2; // 0xcd Return
	
Label_206:
	var_65_string = "noaccess"; // 0xce PushS
	GetProperty(var_65_string, var_63_int); // 0xcf ObjFunc
	var_66_int = 1; // 0xd1 PushI
	var_67_bool = var_63_int > var_66_int; // 0xd2 GT
	if(var_67_bool == 0) goto Label_218; // 0xd3 JumpB
	var_68_string = "noaccess"; // 0xd4 PushS
	var_69_int = 1; // 0xd5 PushI
	var_70_int = var_63_int - var_69_int; // 0xd6 Sub
	SetProperty(var_68_string, var_70_int); // 0xd7 ObjFunc
	goto Label_221; // 0xd9 Jump
	
Label_221:
	return 2; // 0xdd Return
	
Label_218:
	var_71_string = "noaccess"; // 0xda PushS
	RemoveProperty(var_71_string); // 0xdb ObjFunc
}


func_172(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xac PushV
	var_41_string = "player"; // 0xad PushS
	FindActor(var_40_object, var_41_string); // 0xae Func
	var_38_object = var_40_object; // 0xb0 Mov
	return 2; // 0xb1 Return
}


func_242(var_85_bool, var_86_string, var_87_string)
{
	var_88_object = Obj(); var_89_object = Obj(); // 0xf2 PushV
	FindActor(var_89_object, var_86_string); // 0xf3 Func
	var_90_bool = var_89_object == 0; // 0xf5 NullEq
	if(var_90_bool == 0) goto Label_249; // 0xf6 JumpB
	var_85_bool = 0; // 0xf7 MovB
	return 2; // 0xf8 Return
	
Label_249:
	Trigger(var_89_object, var_87_string); // 0xf9 Func
	var_85_bool = 1; // 0xfb MovB
	return 2; // 0xfc Return
}


func_275()
{
	var_42_float = 0.5; // 0x113 PushF
	var_43_float = 0.886; // 0x114 PushF
	SetSepia(var_42_float, var_43_float); // 0x115 Func
	return 0; // 0x117 Return
}


func_179(var_44_object)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; // 0xb3 PushV
	var_49_bool = var_44_object == 0; // 0xb4 Not
	if(var_49_bool == 0) goto Label_183; // 0xb5 JumpB
	return 4; // 0xb6 Return
	
Label_183:
	var_50_string = "noaccess"; // 0xb7 PushS
	HasProperty(var_50_string, var_47_bool); // 0xb8 ObjFunc
	var_51_bool = var_47_bool; // 0xba Push
	if(var_51_bool == 0) goto Label_197; // 0xbb JumpB
	var_52_string = "noaccess"; // 0xbc PushS
	GetProperty(var_52_string, var_48_int); // 0xbd ObjFunc
	var_53_string = "noaccess"; // 0xbf PushS
	var_54_int = 1; // 0xc0 PushI
	var_55_int = var_48_int + var_54_int; // 0xc1 Add
	SetProperty(var_53_string, var_55_int); // 0xc2 ObjFunc
	goto Label_201; // 0xc4 Jump
	
Label_201:
	return 4; // 0xc9 Return
	
Label_197:
	var_56_string = "noaccess"; // 0xc5 PushS
	var_57_int = 1; // 0xc6 PushI
	SetProperty(var_56_string, var_57_int); // 0xc7 ObjFunc
}


func_254(var_74_object)
{
	var_75_int = 0; var_76_int = 0; var_77_object = Obj(); var_78_int = 0; var_79_int = 0; var_80_object = Obj(); // 0xfe PushV
	var_81_object = var_74_object; // 0xff Push
	if(var_81_object == 0) goto Label_274; // 0x100 JumpB
	size(var_78_int); // 0x101 ObjFunc
	var_79_int = 0; // 0x103 MovI
	
Label_260:
	var_82_bool = var_79_int < var_78_int; // 0x104 LT
	if(var_82_bool == 0) goto Label_272; // 0x105 JumpB
	get(var_80_object, var_79_int); // 0x106 ObjFunc
	var_83_object = var_80_object; // 0x108 Push
	if(var_83_object == 0) goto Label_268; // 0x109 JumpB
	RemoveActor(var_80_object); // 0x10a Func
	
Label_268:
	var_80_object = 0; // 0x10c SetNull
	var_84_int = 1; // 0x10d PushI
	var_79_int = var_79_int + var_84_int; // 0x10e Add2
	goto Label_260; // 0x10f Jump
	
Label_272:
	clear(); // 0x110 ObjFunc
	
Label_274:
	return 6; // 0x112 Return
}


func_280()
{
	var_72_int = 0; // 0x118 PushI
	var_73_int = 0; // 0x119 PushI
	SetSepia(var_72_int, var_73_int); // 0x11a Func
	return 0; // 0x11c Return
}


func_222(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xde PushV
	self(var_6_object); // 0xdf Func
	var_4_object = var_6_object; // 0xe1 Mov
	return 2; // 0xe2 Return
}


