task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); // 0x9 PushV
	Trace(var_3_string); // 0xa Func
	var_18_string = "place_klara"; // 0xc PushS
	var_19_bool = var_3_string == var_18_string; // 0xd Eq
	if(var_19_bool == 0) goto Label_28; // 0xe JumpB
	var_20_string = "cot_anna"; // 0xf PushS
	GetSceneByName(var_11_object, var_20_string); // 0x10 Func
	var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = ""; // 0x12 PushV
	var_22_object = var_11_object; // 0x13 Mov
	var_23_string = "pt_b6q02_klara"; // 0x14 MovS
	var_24_string = "NPC_Klara"; // 0x15 MovS
	var_25_string = "b6q02_klara.xml"; // 0x16 MovS
	func_191(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string); // 0x17 NEW_2
	var_0_object = var_21_object; // 0x18 TMov
	var_11_object = 0; // 0x1a SetNull
	goto Label_93; // 0x1b Jump
	
Label_93:
	return 14; // 0x5d Return
	
Label_28:
	var_39_string = "init_maze"; // 0x1c PushS
	var_40_bool = var_3_string == var_39_string; // 0x1d Eq
	if(var_40_bool == 0) goto Label_67; // 0x1e JumpB
	var_41_string = ""; var_42_bool = 0; // 0x1f PushV
	var_41_string = "house_vlad@door2"; // 0x20 MovS
	var_42_bool = 0; // 0x21 MovB
	func_209(var_41_string, var_42_bool); // 0x22 NEW_2
	var_51_string = "house_vlad"; // 0x24 PushS
	GetSceneByName(var_12_object, var_51_string); // 0x25 Func
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; var_56_string = ""; // 0x27 PushV
	var_53_object = var_12_object; // 0x28 Mov
	var_54_string = "pt_prorok"; // 0x29 MovS
	var_55_string = "pers_krysa"; // 0x2a MovS
	var_56_string = "b6q02_prorok.xml"; // 0x2b MovS
	func_191(var_52_object, var_53_object, var_54_string, var_55_string, var_56_string); // 0x2c NEW_2
	var_1_object = var_52_object; // 0x2d TMov
	var_13_int = 1; // 0x2f MovI
	
Label_48:
	var_57_string = "pt_fog"; // 0x30 PushS
	var_58_int = var_57_string + var_13_int; // 0x31 Add
	GetLocator(var_58_int, var_14_bool, var_15_cvector, var_16_cvector); // 0x32 ObjFunc
	var_59_bool = var_14_bool == 0; // 0x34 Not
	if(var_59_bool == 0) goto Label_55; // 0x35 JumpB
	goto Label_65; // 0x36 Jump
	
Label_65:
	var_12_object = 0; // 0x41 SetNull
	goto Label_93; // 0x42 Jump
	
Label_55:
	var_60_string = "fog"; // 0x37 PushS
	var_61_string = "fog_stat_indoor.xml"; // 0x38 PushS
	AddActorByType(var_17_object, var_60_string, var_12_object, var_15_cvector, var_16_cvector, var_61_string); // 0x39 Func
	add(var_17_object); // 0x3b TObjFunc
	var_17_object = 0; // 0x3d SetNull
	var_62_int = 1; // 0x3e PushI
	var_13_int = var_13_int + var_62_int; // 0x3f Add2
	goto Label_48; // 0x40 Jump
	
Label_67:
	var_63_string = "maze_start"; // 0x43 PushS
	var_64_bool = var_3_string == var_63_string; // 0x44 Eq
	if(var_64_bool == 0) goto Label_80; // 0x45 JumpB
	var_65_object = Obj(); var_66_string = ""; var_67_string = ""; // 0x46 PushV
	var_68_object = Obj(); // 0x47 PushV
	func_172(var_68_object); // 0x48 NEW_2
	var_65_object = var_68_object; // 0x49 Mov
	var_66_string = "house_vlad"; // 0x4b MovS
	var_67_string = "pt_maze_start"; // 0x4c MovS
	func_226(var_65_object, var_66_string, var_67_string); // 0x4d NEW_2
	goto Label_93; // 0x4f Jump
	
Label_80:
	var_89_string = "fail"; // 0x50 PushS
	var_90_bool = var_3_string == var_89_string; // 0x51 Eq
	if(var_90_bool == 0) goto Label_87; // 0x52 JumpB
	func_105(); // 0x54 NEW_2
	goto Label_93; // 0x56 Jump
	
Label_87:
	var_114_string = "completed"; // 0x57 PushS
	var_115_bool = var_3_string == var_114_string; // 0x58 Eq
	if(var_115_bool == 0) goto Label_93; // 0x59 JumpB
	func_113(); // 0x5b NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_94(); // 0xa9 NEW_2
	return 0; // 0xab Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); // 0x0 PushV
	func_185(var_3_object); // 0x1 NEW_2
	var_2_object = var_3_object; // 0x2 TMov
	var_6_int = 0; // 0x4 PushV
	var_6_int = 6; // 0x5 MovI
	func_148(var_6_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_121(var_0_object, var_2_object)
{
	EventDisable(26); // 0x79 EventDisable
	var_12_object = var_0_object; // 0x7a PushT
	if(var_12_object == 0) goto Label_127; // 0x7b JumpB
	var_13_string = "cleanup"; // 0x7c PushS
	Trigger(var_0_object, var_13_string); // 0x7d Func
	
Label_127:
	var_14_object = var_1_object; // 0x7f PushT
	if(var_14_object == 0) goto Label_132; // 0x80 JumpB
	var_15_string = "cleanup"; // 0x81 PushS
	Trigger(var_15_string, var_15_string); // 0x82 Func
	
Label_132:
	var_16_object = Obj(); var_17_string = ""; // 0x84 PushV
	var_16_object = var_2_object; // 0x85 MovT
	var_17_string = "cleanup"; // 0x86 MovS
	func_250(var_16_object, var_17_string); // 0x87 NEW_2
	var_28_string = ""; var_29_bool = 0; // 0x89 PushV
	var_28_string = "house_vlad@door2"; // 0x8a MovS
	var_29_bool = 1; // 0x8b MovB
	func_209(var_28_string, var_29_bool); // 0x8c NEW_2
	var_38_object = Obj(); // 0x8e PushV
	func_179(var_38_object); // 0x8f NEW_2
	RemoveActor(var_38_object); // 0x91 Func
	return 0; // 0x93 Return
}


func_226(var_65_object, var_66_string, var_67_string)
{
	var_72_object = Obj(); var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_object = Obj(); var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); // 0xe2 PushV
	var_80_bool = var_65_object == 0; // 0xe3 Not
	if(var_80_bool == 0) goto Label_230; // 0xe4 JumpB
	return 8; // 0xe5 Return
	
Label_230:
	GetSceneByName(var_76_object, var_66_string); // 0xe6 Func
	GetLocator(var_67_string, var_77_bool, var_78_cvector, var_79_cvector); // 0xe8 ObjFunc
	var_81_bool = var_77_bool == 0; // 0xea Not
	if(var_81_bool == 0) goto Label_246; // 0xeb JumpB
	var_82_string = "Teleport location '"; // 0xec PushS
	var_83_int = var_82_string + var_67_string; // 0xed Add
	var_84_string = "' not found in scene '"; // 0xee PushS
	var_85_int = var_83_int + var_84_string; // 0xef Add
	var_86_int = var_85_int + var_66_string; // 0xf0 Add
	var_87_string = "'"; // 0xf1 PushS
	var_88_int = var_86_int + var_87_string; // 0xf2 Add
	Trace(var_88_int); // 0xf3 Func
	goto Label_248; // 0xf5 Jump
	
Label_248:
	return 8; // 0xf8 Return
	
Label_246:
	Teleport(var_65_object, var_76_object, var_78_cvector, var_79_cvector); // 0xf6 Func
}


func_105()
{
	var_10_string = "b6q02"; // 0x69 PushS
	var_11_int = -1; // 0x6a PushI
	SetVariable(var_10_string, var_11_int); // 0x6b Func
	func_121(var_5_int, var_6_int); // 0x6e NEW_2
	return 0; // 0x70 Return
}


func_172(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xac PushV
	var_71_string = "player"; // 0xad PushS
	FindActor(var_70_object, var_71_string); // 0xae Func
	var_68_object = var_70_object; // 0xb0 Mov
	return 2; // 0xb1 Return
}


func_209(var_28_string, var_29_bool)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0xd1 PushV
	FindActor(var_31_object, var_28_string); // 0xd2 Func
	var_32_bool = var_31_object == 0; // 0xd4 Not
	if(var_32_bool == 0) goto Label_221; // 0xd5 JumpB
	var_33_string = "Door "; // 0xd6 PushS
	var_34_int = var_33_string + var_28_string; // 0xd7 Add
	var_35_string = " not found"; // 0xd8 PushS
	var_36_int = var_34_int + var_35_string; // 0xd9 Add
	Trace(var_36_int); // 0xda Func
	goto Label_224; // 0xdc Jump
	
Label_224:
	return 2; // 0xe0 Return
	
Label_221:
	var_37_string = "locked"; // 0xdd PushS
	SetProperty(var_37_string, var_29_bool); // 0xde ObjFunc
}


func_113()
{
	var_116_string = "b6q02"; // 0x71 PushS
	var_117_int = 1000; // 0x72 PushI
	SetVariable(var_116_string, var_117_int); // 0x73 Func
	func_121(var_16_cvector, var_17_object); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_179(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xb3 PushV
	self(var_40_object); // 0xb4 Func
	var_38_object = var_40_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_148(var_6_int)
{
	var_7_float = 0; var_8_float = 0; // 0x94 PushV
	GetGameTime(var_8_float); // 0x95 Func
	var_9_int = 24; // 0x97 PushI
	var_10_float = var_6_int * var_9_int; // 0x98 Mult
	var_11_bool = var_8_float >= var_10_float; // 0x99 GE
	if(var_11_bool == 0) goto Label_159; // 0x9a JumpB
	func_121(var_7_float, var_8_float); // 0x9c NEW_2
	goto Label_166; // 0x9e Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_159:
	var_41_int = 0; // 0x9f PushI
	var_42_int = 24; // 0xa0 PushI
	var_43_float = var_6_int * var_42_int; // 0xa1 Mult
	SetTimeEvent(var_41_int, var_43_float); // 0xa2 Func
	Hold(); // 0xa4 Func
}


func_185(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0xb9 PushV
	CreateObjectVector(var_5_object); // 0xba Func
	var_3_object = var_5_object; // 0xbc Mov
	return 2; // 0xbd Return
}


func_250(var_16_object, var_17_string)
{
	var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); // 0xfa PushV
	var_24_object = var_16_object; // 0xfb Push
	if(var_24_object == 0) goto Label_268; // 0xfc JumpB
	size(var_21_int); // 0xfd ObjFunc
	var_22_int = 0; // 0xff MovI
	
Label_256:
	var_25_bool = var_22_int < var_21_int; // 0x100 LT
	if(var_25_bool == 0) goto Label_268; // 0x101 JumpB
	get(var_23_object, var_22_int); // 0x102 ObjFunc
	var_26_object = var_23_object; // 0x104 Push
	if(var_26_object == 0) goto Label_264; // 0x105 JumpB
	Trigger(var_23_object, var_17_string); // 0x106 Func
	
Label_264:
	var_23_object = 0; // 0x108 SetNull
	var_27_int = 1; // 0x109 PushI
	var_22_int = var_22_int + var_27_int; // 0x10a Add2
	goto Label_256; // 0x10b Jump
	
Label_268:
	return 6; // 0x10c Return
}


func_94()
{
	var_5_int = 0; var_6_int = 0; // 0x5e PushV
	var_7_string = "b6q02"; // 0x5f PushS
	GetVariable(var_7_string, var_6_int); // 0x60 Func
	var_8_int = 1000; // 0x62 PushI
	var_9_bool = var_6_int != var_8_int; // 0x63 Neq
	if(var_9_bool == 0) goto Label_104; // 0x64 JumpB
	func_105(); // 0x66 NEW_2
	
Label_104:
	return 2; // 0x68 Return
}


func_191(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); // 0xbf PushV
	GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector); // 0xc0 ObjFunc
	var_34_bool = var_30_bool == 0; // 0xc2 Not
	if(var_34_bool == 0) goto Label_204; // 0xc3 JumpB
	var_35_string = "Locator "; // 0xc4 PushS
	var_36_int = var_35_string + var_23_string; // 0xc5 Add
	var_37_string = " doesn't exist"; // 0xc6 PushS
	var_38_int = var_36_int + var_37_string; // 0xc7 Add
	Trace(var_38_int); // 0xc8 Func
	var_33_object = 0; // 0xca SetNull
	goto Label_206; // 0xcb Jump
	
Label_206:
	var_21_object = var_33_object; // 0xce Mov
	return 8; // 0xcf Return
	
Label_204:
	AddActor(var_33_object, var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string); // 0xcc Func
}


