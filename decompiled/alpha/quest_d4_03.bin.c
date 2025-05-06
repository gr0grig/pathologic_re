task_0_event_26(var_0_object, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x31 PushV
	Trace(var_1_string); // 0x32 Func
	var_10_string = "scene_load"; // 0x34 PushS
	var_11_bool = var_1_string == var_10_string; // 0x35 Eq
	if(var_11_bool == 0) goto Label_63; // 0x36 JumpB
	var_12_object = Obj(); var_13_string = ""; // 0x37 PushV
	var_12_object = var_0_object; // 0x38 MovT
	var_13_string = "attack"; // 0x39 MovS
	func_256(var_13_string); // 0x3a Call
	var_23_string = "door"; // 0x3c PushS
	PlaySound(var_23_string); // 0x3d Func
	
Label_63:
	var_24_string = "gang_attack"; // 0x3f PushS
	var_25_bool = var_1_string == var_24_string; // 0x40 Eq
	if(var_25_bool == 0) goto Label_72; // 0x41 JumpB
	var_26_object = Obj(); var_27_string = ""; // 0x42 PushV
	var_26_object = var_0_object; // 0x43 MovT
	var_27_string = "attack"; // 0x44 MovS
	func_256(var_27_string); // 0x45 Call
	goto Label_114; // 0x47 Jump
	
Label_114:
	return 8; // 0x72 Return
	
Label_72:
	var_28_string = "death"; // 0x48 PushS
	var_29_bool = var_1_string == var_28_string; // 0x49 Eq
	if(var_29_bool == 0) goto Label_108; // 0x4a JumpB
	size(var_6_int); // 0x4b TObjFunc
	var_7_int = 0; // 0x4d MovI
	
Label_78:
	var_30_bool = var_7_int < var_6_int; // 0x4e LT
	if(var_30_bool == 0) goto Label_91; // 0x4f JumpB
	get(var_8_object, var_7_int); // 0x50 TObjFunc
	IsDead(var_9_bool); // 0x52 ObjFunc
	var_31_bool = var_9_bool == 0; // 0x54 Not
	if(var_31_bool == 0) goto Label_87; // 0x55 JumpB
	goto Label_91; // 0x56 Jump
	
Label_91:
	var_32_bool = var_7_int == var_6_int; // 0x5b Eq
	if(var_32_bool == 0) goto Label_107; // 0x5c JumpB
	var_33_string = "d4q03_alldead"; // 0x5d PushS
	var_34_int = 1; // 0x5e PushI
	SetVariable(var_33_string, var_34_int); // 0x5f Func
	var_35_string = ""; var_36_bool = 0; // 0x61 PushV
	var_35_string = "iwarehouse_gangster@door1"; // 0x62 MovS
	var_36_bool = 0; // 0x63 MovB
	func_240(var_35_string, var_36_bool); // 0x64 Call
	var_45_string = ""; var_46_bool = 0; // 0x66 PushV
	var_45_string = "warehouse_gangster@door1"; // 0x67 MovS
	var_46_bool = 1; // 0x68 MovB
	func_240(var_45_string, var_46_bool); // 0x69 Call
	
Label_107:
	goto Label_114; // 0x6b Jump
	
Label_87:
	var_8_object = 0; // 0x57 SetNull
	var_47_int = 1; // 0x58 PushI
	var_7_int = var_7_int + var_47_int; // 0x59 Add2
	goto Label_78; // 0x5a Jump
	
Label_108:
	var_48_string = "completed"; // 0x6c PushS
	var_49_bool = var_1_string == var_48_string; // 0x6d Eq
	if(var_49_bool == 0) goto Label_114; // 0x6e JumpB
	func_134(); // 0x70 Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_115(); // 0xc9 Call
	return 0; // 0xcb Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0x0 PushV
	var_5_string = "d4q03"; // 0x1 PushS
	var_6_int = 1; // 0x2 PushI
	SetVariable(var_5_string, var_6_int); // 0x3 Func
	var_7_string = ""; var_8_bool = 0; // 0x5 PushV
	var_7_string = "warehouse_gangster@door1"; // 0x6 MovS
	var_8_bool = 0; // 0x7 MovB
	func_240(var_7_string, var_8_bool); // 0x8 Call
	var_17_string = ""; var_18_bool = 0; // 0xa PushV
	var_17_string = "iwarehouse_gangster@door1"; // 0xb MovS
	var_18_bool = 1; // 0xc MovB
	func_240(var_17_string, var_18_bool); // 0xd Call
	var_19_object = Obj(); // 0xf PushV
	func_210(var_19_object); // 0x10 Call
	var_0_object = var_19_object; // 0x11 TMov
	var_22_object = Obj(); var_23_string = ""; // 0x13 PushV
	var_23_string = "warehouse_gangster"; // 0x14 MovS
	func_216(var_22_object, var_23_string); // 0x15 Call
	var_3_object = var_22_object; // 0x16 Mov
	var_4_int = 0; // 0x18 MovI
	
Label_25:
	var_26_int = 7; // 0x19 PushI
	var_27_bool = var_4_int < var_26_int; // 0x1a LT
	if(var_27_bool == 0) goto Label_43; // 0x1b JumpB
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x1c PushV
	var_29_object = var_3_object; // 0x1d Mov
	var_33_string = "pt_gangster"; // 0x1e PushS
	var_34_int = 1; // 0x1f PushI
	var_35_int = var_4_int + var_34_int; // 0x20 Add
	var_30_string = var_33_string + var_35_int; // 0x21 Add2
	var_31_string = "pers_grabitel"; // 0x22 MovS
	var_32_string = "d4q03_grabitel.xml"; // 0x23 MovS
	func_222(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x24 Call
	add(var_28_object); // 0x26 TObjFunc
	var_49_int = 1; // 0x28 PushI
	var_4_int = var_4_int + var_49_int; // 0x29 Add2
	goto Label_25; // 0x2a Jump
	
Label_43:
	var_50_int = 0; // 0x2b PushV
	var_50_int = 4; // 0x2c MovI
	func_180(var_50_int); // 0x2d Call
	return 4; // 0x2f Return
}


func_256(var_57_string)
{
	var_58_int = 0; var_59_int = 0; var_60_object = Obj(); var_61_int = 0; var_62_int = 0; var_63_object = Obj(); // 0x100 PushV
	size(var_61_int); // 0x101 ObjFunc
	var_62_int = 0; // 0x103 MovI
	
Label_260:
	var_64_bool = var_62_int < var_61_int; // 0x104 LT
	if(var_64_bool == 0) goto Label_272; // 0x105 JumpB
	get(var_63_object, var_62_int); // 0x106 ObjFunc
	var_65_object = var_63_object; // 0x108 Push
	if(var_65_object == 0) goto Label_268; // 0x109 JumpB
	Trigger(var_63_object, var_57_string); // 0x10a Func
	
Label_268:
	var_63_object = 0; // 0x10c SetNull
	var_66_int = 1; // 0x10d PushI
	var_62_int = var_62_int + var_66_int; // 0x10e Add2
	goto Label_260; // 0x10f Jump
	
Label_272:
	return 6; // 0x110 Return
}


func_134()
{
	var_50_int = 0; var_51_int = 0; // 0x86 PushV
	var_52_string = "d4q03"; // 0x87 PushS
	GetVariable(var_52_string, var_51_int); // 0x88 Func
	var_53_bool = 0; // 0x8a PushV
	var_53_bool = 0; // 0x8b MovB
	var_54_int = 1000; // 0x8c PushI
	var_55_bool = var_51_int != var_54_int; // 0x8d Neq
	if(var_55_bool == 0) goto Label_147; // 0x8e JumpB
	var_56_int = -1; // 0x8f PushI
	var_57_bool = var_51_int != var_56_int; // 0x90 Neq
	if(var_57_bool == 0) goto Label_147; // 0x91 JumpB
	var_53_bool = 1; // 0x92 MovB
	
Label_147:
	if(var_53_bool == 0) goto Label_155; // 0x93 JumpB
	var_58_string = "d4q03"; // 0x94 PushS
	var_59_int = 1000; // 0x95 PushI
	SetVariable(var_58_string, var_59_int); // 0x96 Func
	func_156(var_51_int); // 0x99 Call
	
Label_155:
	return 2; // 0x9b Return
}


func_204(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xcc PushV
	self(var_73_object); // 0xcd Func
	var_71_object = var_73_object; // 0xcf Mov
	return 2; // 0xd0 Return
}


func_240(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0xf0 PushV
	FindActor(var_10_object, var_7_string); // 0xf1 Func
	var_11_bool = var_10_object == 0; // 0xf3 Not
	if(var_11_bool == 0) goto Label_251; // 0xf4 JumpB
	var_12_string = "Door "; // 0xf5 PushS
	var_13_int = var_12_string + var_7_string; // 0xf6 Add
	var_14_string = " not found"; // 0xf7 PushS
	var_15_int = var_13_int + var_14_string; // 0xf8 Add
	Trace(var_15_int); // 0xf9 Func
	
Label_251:
	var_16_string = "locked"; // 0xfb PushS
	SetProperty(var_16_string, var_8_bool); // 0xfc ObjFunc
	return 2; // 0xfe Return
}


func_210(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xd2 PushV
	CreateObjectVector(var_21_object); // 0xd3 Func
	var_19_object = var_21_object; // 0xd5 Mov
	return 2; // 0xd6 Return
}


func_115()
{
	var_3_int = 0; var_4_int = 0; // 0x73 PushV
	var_5_string = "d4q03"; // 0x74 PushS
	GetVariable(var_5_string, var_4_int); // 0x75 Func
	var_6_int = 1000; // 0x77 PushI
	var_7_bool = var_4_int != var_6_int; // 0x78 Neq
	if(var_7_bool == 0) goto Label_125; // 0x79 JumpB
	func_126(); // 0x7b Call
	
Label_125:
	return 2; // 0x7d Return
}


func_180(var_50_int)
{
	var_51_float = 0; var_52_float = 0; // 0xb4 PushV
	GetGameTime(var_52_float); // 0xb5 Func
	var_53_int = 24; // 0xb7 PushI
	var_54_float = var_50_int * var_53_int; // 0xb8 Mult
	var_55_bool = var_52_float >= var_54_float; // 0xb9 GE
	if(var_55_bool == 0) goto Label_191; // 0xba JumpB
	func_156(var_52_float); // 0xbc Call
	goto Label_198; // 0xbe Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_191:
	var_74_int = 0; // 0xbf PushI
	var_75_int = 24; // 0xc0 PushI
	var_76_float = var_50_int * var_75_int; // 0xc1 Mult
	SetTimeEvent(var_74_int, var_76_float); // 0xc2 Func
	Hold(); // 0xc4 Func
}


func_216(var_22_object, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0xd8 PushV
	GetSceneByName(var_25_object, var_23_string); // 0xd9 Func
	var_22_object = var_25_object; // 0xdb Mov
	return 2; // 0xdc Return
}


func_126()
{
	var_8_string = "d4q03"; // 0x7e PushS
	var_9_int = -1; // 0x7f PushI
	SetVariable(var_8_string, var_9_int); // 0x80 Func
	func_156(var_4_int); // 0x83 Call
	return 0; // 0x85 Return
}


func_156(var_0_object)
{
	EventDisable(26); // 0x9c EventDisable
	var_56_object = Obj(); var_57_string = ""; // 0x9d PushV
	var_56_object = var_0_object; // 0x9e MovT
	var_57_string = "cleanup"; // 0x9f MovS
	func_256(var_57_string); // 0xa0 Call
	var_67_string = ""; var_68_bool = 0; // 0xa2 PushV
	var_67_string = "iwarehouse_gangster@door1"; // 0xa3 MovS
	var_68_bool = 0; // 0xa4 MovB
	func_240(var_67_string, var_68_bool); // 0xa5 Call
	var_69_string = ""; var_70_bool = 0; // 0xa7 PushV
	var_69_string = "warehouse_gangster@door1"; // 0xa8 MovS
	var_70_bool = 1; // 0xa9 MovB
	func_240(var_69_string, var_70_bool); // 0xaa Call
	clear(); // 0xac TObjFunc
	var_71_object = Obj(); // 0xae PushV
	func_204(var_71_object); // 0xaf Call
	RemoveActor(var_71_object); // 0xb1 Func
	return 0; // 0xb3 Return
}


func_222(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0xde PushV
	GetLocator(var_30_string, var_40_bool, var_41_cvector, var_42_cvector); // 0xdf ObjFunc
	var_44_bool = var_40_bool == 0; // 0xe1 Not
	if(var_44_bool == 0) goto Label_235; // 0xe2 JumpB
	var_45_string = "Locator "; // 0xe3 PushS
	var_46_int = var_45_string + var_30_string; // 0xe4 Add
	var_47_string = " doesn't exist"; // 0xe5 PushS
	var_48_int = var_46_int + var_47_string; // 0xe6 Add
	Trace(var_48_int); // 0xe7 Func
	var_43_object = 0; // 0xe9 SetNull
	goto Label_237; // 0xea Jump
	
Label_237:
	var_28_object = var_43_object; // 0xed Mov
	return 8; // 0xee Return
	
Label_235:
	AddActor(var_43_object, var_31_string, var_29_object, var_41_cvector, var_42_cvector, var_32_string); // 0xeb Func
}


