task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_bool = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_bool = 0; // 0x31 PushV
	Trace(var_2_string); // 0x32 Func
	var_11_string = "scene_load"; // 0x34 PushS
	var_12_bool = var_2_string == var_11_string; // 0x35 Eq
	if(var_12_bool == 0) goto Label_58; // 0x36 JumpB
	var_13_string = "door"; // 0x37 PushS
	PlaySound(var_13_string); // 0x38 Func
	
Label_58:
	var_14_string = "gang_attack"; // 0x3a PushS
	var_15_bool = var_2_string == var_14_string; // 0x3b Eq
	if(var_15_bool == 0) goto Label_72; // 0x3c JumpB
	var_16_int = 1; // 0x3d PushI
	var_1_int = var_1_int + var_16_int; // 0x3e Add2
	var_17_int = 3; // 0x3f PushI
	var_18_bool = var_1_int >= var_17_int; // 0x40 GE
	if(var_18_bool == 0) goto Label_71; // 0x41 JumpB
	var_19_object = Obj(); var_20_string = ""; // 0x42 PushV
	var_19_object = var_0_object; // 0x43 MovT
	var_20_string = "attack"; // 0x44 MovS
	func_256(var_19_object, var_20_string); // 0x45 NEW_2
	
Label_71:
	goto Label_114; // 0x47 Jump
	
Label_114:
	return 8; // 0x72 Return
	
Label_72:
	var_31_string = "death"; // 0x48 PushS
	var_32_bool = var_2_string == var_31_string; // 0x49 Eq
	if(var_32_bool == 0) goto Label_108; // 0x4a JumpB
	size(var_7_int); // 0x4b TObjFunc
	var_8_int = 0; // 0x4d MovI
	
Label_78:
	var_33_bool = var_8_int < var_7_int; // 0x4e LT
	if(var_33_bool == 0) goto Label_91; // 0x4f JumpB
	get(var_9_object, var_8_int); // 0x50 TObjFunc
	IsDead(var_10_bool); // 0x52 ObjFunc
	var_34_bool = var_10_bool == 0; // 0x54 Not
	if(var_34_bool == 0) goto Label_87; // 0x55 JumpB
	goto Label_91; // 0x56 Jump
	
Label_91:
	var_35_bool = var_8_int == var_7_int; // 0x5b Eq
	if(var_35_bool == 0) goto Label_107; // 0x5c JumpB
	var_36_string = "d4q03_alldead"; // 0x5d PushS
	var_37_int = 1; // 0x5e PushI
	SetVariable(var_36_string, var_37_int); // 0x5f Func
	var_38_string = ""; var_39_bool = 0; // 0x61 PushV
	var_38_string = "iwarehouse_gangster@door1"; // 0x62 MovS
	var_39_bool = 0; // 0x63 MovB
	func_239(var_38_string, var_39_bool); // 0x64 NEW_2
	var_48_string = ""; var_49_bool = 0; // 0x66 PushV
	var_48_string = "warehouse_gangster@door1"; // 0x67 MovS
	var_49_bool = 1; // 0x68 MovB
	func_239(var_48_string, var_49_bool); // 0x69 NEW_2
	
Label_107:
	goto Label_114; // 0x6b Jump
	
Label_87:
	var_9_object = 0; // 0x57 SetNull
	var_50_int = 1; // 0x58 PushI
	var_8_int = var_8_int + var_50_int; // 0x59 Add2
	goto Label_78; // 0x5a Jump
	
Label_108:
	var_51_string = "completed"; // 0x6c PushS
	var_52_bool = var_2_string == var_51_string; // 0x6d Eq
	if(var_52_bool == 0) goto Label_114; // 0x6e JumpB
	func_134(); // 0x70 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_115(); // 0xc8 NEW_2
	return 0; // 0xca Return
}


main(var_0_object, var_1_int)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x0 PushV
	var_6_string = "d4q03"; // 0x1 PushS
	var_7_int = 1; // 0x2 PushI
	SetVariable(var_6_string, var_7_int); // 0x3 Func
	var_8_string = ""; var_9_bool = 0; // 0x5 PushV
	var_8_string = "warehouse_gangster@door1"; // 0x6 MovS
	var_9_bool = 0; // 0x7 MovB
	func_239(var_8_string, var_9_bool); // 0x8 NEW_2
	var_18_string = ""; var_19_bool = 0; // 0xa PushV
	var_18_string = "iwarehouse_gangster@door1"; // 0xb MovS
	var_19_bool = 1; // 0xc MovB
	func_239(var_18_string, var_19_bool); // 0xd NEW_2
	var_20_object = Obj(); // 0xf PushV
	func_209(var_20_object); // 0x10 NEW_2
	var_0_object = var_20_object; // 0x11 TMov
	var_23_object = Obj(); var_24_string = ""; // 0x13 PushV
	var_24_string = "warehouse_gangster"; // 0x14 MovS
	func_215(var_23_object, var_24_string); // 0x15 NEW_2
	var_4_object = var_23_object; // 0x16 Mov
	var_5_int = 0; // 0x18 MovI
	
Label_25:
	var_27_int = 7; // 0x19 PushI
	var_28_bool = var_5_int < var_27_int; // 0x1a LT
	if(var_28_bool == 0) goto Label_43; // 0x1b JumpB
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x1c PushV
	var_30_object = var_4_object; // 0x1d Mov
	var_34_string = "pt_gangster"; // 0x1e PushS
	var_35_int = 1; // 0x1f PushI
	var_36_int = var_5_int + var_35_int; // 0x20 Add
	var_31_string = var_34_string + var_36_int; // 0x21 Add2
	var_32_string = "pers_grabitel"; // 0x22 MovS
	var_33_string = "d4q03_grabitel.xml"; // 0x23 MovS
	func_221(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string); // 0x24 NEW_2
	add(var_29_object); // 0x26 TObjFunc
	var_50_int = 1; // 0x28 PushI
	var_5_int = var_5_int + var_50_int; // 0x29 Add2
	goto Label_25; // 0x2a Jump
	
Label_43:
	var_51_int = 0; // 0x2b PushV
	var_51_int = 4; // 0x2c MovI
	func_179(var_51_int); // 0x2d NEW_2
	return 4; // 0x2f Return
}


func_256(var_57_object, var_58_string)
{
	var_59_int = 0; var_60_int = 0; var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_object = Obj(); // 0x100 PushV
	var_65_object = var_57_object; // 0x101 Push
	if(var_65_object == 0) goto Label_274; // 0x102 JumpB
	size(var_62_int); // 0x103 ObjFunc
	var_63_int = 0; // 0x105 MovI
	
Label_262:
	var_66_bool = var_63_int < var_62_int; // 0x106 LT
	if(var_66_bool == 0) goto Label_274; // 0x107 JumpB
	get(var_64_object, var_63_int); // 0x108 ObjFunc
	var_67_object = var_64_object; // 0x10a Push
	if(var_67_object == 0) goto Label_270; // 0x10b JumpB
	Trigger(var_64_object, var_58_string); // 0x10c Func
	
Label_270:
	var_64_object = 0; // 0x10e SetNull
	var_68_int = 1; // 0x10f PushI
	var_63_int = var_63_int + var_68_int; // 0x110 Add2
	goto Label_262; // 0x111 Jump
	
Label_274:
	return 6; // 0x112 Return
}


func_134()
{
	var_53_int = 0; var_54_int = 0; // 0x86 PushV
	var_55_string = "d4q03"; // 0x87 PushS
	GetVariable(var_55_string, var_54_int); // 0x88 Func
	var_56_bool = 0; // 0x8a PushV
	var_56_bool = 0; // 0x8b MovB
	var_57_int = 1000; // 0x8c PushI
	var_58_bool = var_54_int != var_57_int; // 0x8d Neq
	if(var_58_bool == 0) goto Label_147; // 0x8e JumpB
	var_59_int = -1; // 0x8f PushI
	var_60_bool = var_54_int != var_59_int; // 0x90 Neq
	if(var_60_bool == 0) goto Label_147; // 0x91 JumpB
	var_56_bool = 1; // 0x92 MovB
	
Label_147:
	if(var_56_bool == 0) goto Label_155; // 0x93 JumpB
	var_61_string = "d4q03"; // 0x94 PushS
	var_62_int = 1000; // 0x95 PushI
	SetVariable(var_61_string, var_62_int); // 0x96 Func
	func_156(var_54_int); // 0x99 NEW_2
	
Label_155:
	return 2; // 0x9b Return
}


func_203(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0xcb PushV
	self(var_75_object); // 0xcc Func
	var_73_object = var_75_object; // 0xce Mov
	return 2; // 0xcf Return
}


func_239(var_8_string, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0xef PushV
	FindActor(var_11_object, var_8_string); // 0xf0 Func
	var_12_bool = var_11_object == 0; // 0xf2 Not
	if(var_12_bool == 0) goto Label_251; // 0xf3 JumpB
	var_13_string = "Door "; // 0xf4 PushS
	var_14_int = var_13_string + var_8_string; // 0xf5 Add
	var_15_string = " not found"; // 0xf6 PushS
	var_16_int = var_14_int + var_15_string; // 0xf7 Add
	Trace(var_16_int); // 0xf8 Func
	goto Label_254; // 0xfa Jump
	
Label_254:
	return 2; // 0xfe Return
	
Label_251:
	var_17_string = "locked"; // 0xfb PushS
	SetProperty(var_17_string, var_9_bool); // 0xfc ObjFunc
}


func_209(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xd1 PushV
	CreateObjectVector(var_22_object); // 0xd2 Func
	var_20_object = var_22_object; // 0xd4 Mov
	return 2; // 0xd5 Return
}


func_179(var_51_int)
{
	var_52_float = 0; var_53_float = 0; // 0xb3 PushV
	GetGameTime(var_53_float); // 0xb4 Func
	var_54_int = 24; // 0xb6 PushI
	var_55_float = var_51_int * var_54_int; // 0xb7 Mult
	var_56_bool = var_53_float >= var_55_float; // 0xb8 GE
	if(var_56_bool == 0) goto Label_190; // 0xb9 JumpB
	func_156(var_53_float); // 0xbb NEW_2
	goto Label_197; // 0xbd Jump
	
Label_197:
	return 2; // 0xc5 Return
	
Label_190:
	var_76_int = 0; // 0xbe PushI
	var_77_int = 24; // 0xbf PushI
	var_78_float = var_51_int * var_77_int; // 0xc0 Mult
	SetTimeEvent(var_76_int, var_78_float); // 0xc1 Func
	Hold(); // 0xc3 Func
}


func_115()
{
	var_4_int = 0; var_5_int = 0; // 0x73 PushV
	var_6_string = "d4q03"; // 0x74 PushS
	GetVariable(var_6_string, var_5_int); // 0x75 Func
	var_7_int = 1000; // 0x77 PushI
	var_8_bool = var_5_int != var_7_int; // 0x78 Neq
	if(var_8_bool == 0) goto Label_125; // 0x79 JumpB
	func_126(); // 0x7b NEW_2
	
Label_125:
	return 2; // 0x7d Return
}


func_215(var_23_object, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xd7 PushV
	GetSceneByName(var_26_object, var_24_string); // 0xd8 Func
	var_23_object = var_26_object; // 0xda Mov
	return 2; // 0xdb Return
}


func_156(var_0_object)
{
	EventDisable(26); // 0x9c EventDisable
	var_57_object = Obj(); var_58_string = ""; // 0x9d PushV
	var_57_object = var_0_object; // 0x9e MovT
	var_58_string = "cleanup"; // 0x9f MovS
	func_256(var_57_object, var_58_string); // 0xa0 NEW_2
	var_0_object = 0; // 0xa2 SetNullT
	var_69_string = ""; var_70_bool = 0; // 0xa3 PushV
	var_69_string = "iwarehouse_gangster@door1"; // 0xa4 MovS
	var_70_bool = 0; // 0xa5 MovB
	func_239(var_69_string, var_70_bool); // 0xa6 NEW_2
	var_71_string = ""; var_72_bool = 0; // 0xa8 PushV
	var_71_string = "warehouse_gangster@door1"; // 0xa9 MovS
	var_72_bool = 1; // 0xaa MovB
	func_239(var_71_string, var_72_bool); // 0xab NEW_2
	var_73_object = Obj(); // 0xad PushV
	func_203(var_73_object); // 0xae NEW_2
	RemoveActor(var_73_object); // 0xb0 Func
	return 0; // 0xb2 Return
}


func_221(var_29_object, var_30_object, var_31_string, var_32_string, var_33_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0xdd PushV
	GetLocator(var_31_string, var_41_bool, var_42_cvector, var_43_cvector); // 0xde ObjFunc
	var_45_bool = var_41_bool == 0; // 0xe0 Not
	if(var_45_bool == 0) goto Label_234; // 0xe1 JumpB
	var_46_string = "Locator "; // 0xe2 PushS
	var_47_int = var_46_string + var_31_string; // 0xe3 Add
	var_48_string = " doesn't exist"; // 0xe4 PushS
	var_49_int = var_47_int + var_48_string; // 0xe5 Add
	Trace(var_49_int); // 0xe6 Func
	var_44_object = 0; // 0xe8 SetNull
	goto Label_236; // 0xe9 Jump
	
Label_236:
	var_29_object = var_44_object; // 0xec Mov
	return 8; // 0xed Return
	
Label_234:
	AddActor(var_44_object, var_32_string, var_30_object, var_42_cvector, var_43_cvector, var_33_string); // 0xea Func
}


func_126()
{
	var_9_string = "d4q03"; // 0x7e PushS
	var_10_int = -1; // 0x7f PushI
	SetVariable(var_9_string, var_10_int); // 0x80 Func
	func_156(var_5_int); // 0x83 NEW_2
	return 0; // 0x85 Return
}


