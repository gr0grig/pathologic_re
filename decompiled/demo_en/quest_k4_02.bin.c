task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x31 PushV
	Trace(var_5_string); // 0x32 Func
	var_8_string = "init_theater"; // 0x34 PushS
	var_9_bool = var_5_string == var_8_string; // 0x35 Eq
	if(var_9_bool == 0) goto Label_73; // 0x36 JumpB
	var_10_string = "theater"; // 0x37 PushS
	GetSceneByName(var_7_object, var_10_string); // 0x38 Func
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = ""; // 0x3a PushV
	var_12_object = var_7_object; // 0x3b Mov
	var_13_string = "pt_k4q02_prophet"; // 0x3c MovS
	var_14_string = "pers_krysa"; // 0x3d MovS
	var_15_string = "k4q02_prophet.xml"; // 0x3e MovS
	func_182(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string); // 0x3f NEW_2
	var_4_object = var_11_object; // 0x40 TMov
	var_29_string = ""; var_30_bool = 0; // 0x42 PushV
	var_29_string = "theater@door1"; // 0x43 MovS
	var_30_bool = 0; // 0x44 MovB
	func_219(var_29_string, var_30_bool); // 0x45 NEW_2
	var_7_object = 0; // 0x47 SetNull
	goto Label_79; // 0x48 Jump
	
Label_79:
	return 2; // 0x4f Return
	
Label_73:
	var_39_string = "completed"; // 0x49 PushS
	var_40_bool = var_5_string == var_39_string; // 0x4a Eq
	if(var_40_bool == 0) goto Label_79; // 0x4b JumpB
	func_99(); // 0x4d NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_float)
{
	func_80(); // 0xad NEW_2
	return 0; // 0xaf Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x0 PushV
	var_7_bool = 0; var_8_string = ""; // 0x1 PushV
	var_8_string = "NPC_Mark"; // 0x2 MovS
	func_236(var_7_bool, var_8_string); // 0x3 NEW_2
	var_12_string = ""; var_13_bool = 0; // 0x5 PushV
	var_12_string = "theater@door1"; // 0x6 MovS
	var_13_bool = 1; // 0x7 MovB
	func_219(var_12_string, var_13_bool); // 0x8 NEW_2
	var_22_string = "k4q02"; // 0xa PushS
	var_23_int = 1; // 0xb PushI
	SetVariable(var_22_string, var_23_int); // 0xc Func
	GetMainOutdoorScene(var_6_object); // 0xe Func
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x10 PushV
	var_25_object = var_6_object; // 0x11 Mov
	var_26_string = "pt_k4q02_birdmask1"; // 0x12 MovS
	var_27_string = "pers_birdmask"; // 0x13 MovS
	var_28_string = "k4q02_birdmask.xml"; // 0x14 MovS
	func_200(var_25_object, var_26_string, var_27_string, var_28_string); // 0x15 NEW_2
	var_0_object = var_24_object; // 0x16 TMov
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x18 PushV
	var_44_object = var_6_object; // 0x19 Mov
	var_45_string = "pt_k4q02_birdmask2"; // 0x1a MovS
	var_46_string = "pers_birdmask"; // 0x1b MovS
	var_47_string = "k4q02_birdmask.xml"; // 0x1c MovS
	func_200(var_44_object, var_45_string, var_46_string, var_47_string); // 0x1d NEW_2
	var_1_object = var_43_object; // 0x1e TMov
	var_48_string = "cot_maria"; // 0x20 PushS
	GetSceneByName(var_6_object, var_48_string); // 0x21 Func
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x23 PushV
	var_50_object = var_6_object; // 0x24 Mov
	var_51_string = "pt_k4q02_mark"; // 0x25 MovS
	var_52_string = "NPC_Mark"; // 0x26 MovS
	var_53_string = "k4q02_mark.xml"; // 0x27 MovS
	func_182(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string); // 0x28 NEW_2
	var_2_object = var_49_object; // 0x29 TMov
	var_67_int = 0; // 0x2b PushV
	var_67_int = 4; // 0x2c MovI
	func_152(var_67_int); // 0x2d NEW_2
	return 2; // 0x2f Return
}


func_99()
{
	var_41_string = "k4q02"; // 0x63 PushS
	var_42_int = 1000; // 0x64 PushI
	SetVariable(var_41_string, var_42_int); // 0x65 Func
	func_107(var_6_object, var_7_object); // 0x68 NEW_2
	return 0; // 0x6a Return
}


func_200(var_24_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); // 0xc8 PushV
	GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector); // 0xc9 ObjFunc
	var_37_bool = var_33_bool == 0; // 0xcb Not
	if(var_37_bool == 0) goto Label_213; // 0xcc JumpB
	var_38_string = "Locator "; // 0xcd PushS
	var_39_int = var_38_string + var_26_string; // 0xce Add
	var_40_string = " doesn't exist"; // 0xcf PushS
	var_41_int = var_39_int + var_40_string; // 0xd0 Add
	Trace(var_41_int); // 0xd1 Func
	var_36_object = 0; // 0xd3 SetNull
	goto Label_216; // 0xd4 Jump
	
Label_216:
	var_24_object = var_36_object; // 0xd8 Mov
	return 8; // 0xd9 Return
	
Label_213:
	var_42_bool = 1; // 0xd5 PushB
	AddStationaryActor(var_36_object, var_34_cvector, var_35_cvector, var_27_string, var_28_string, var_42_bool); // 0xd6 ObjFunc
}


func_91()
{
	var_12_string = "k4q02"; // 0x5b PushS
	var_13_int = -1; // 0x5c PushI
	SetVariable(var_12_string, var_13_int); // 0x5d Func
	func_107(var_7_int, var_8_int); // 0x60 NEW_2
	return 0; // 0x62 Return
}


func_107(var_3_object, var_69_float)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x6b PushV
	EventDisable(26); // 0x6c EventDisable
	var_75_string = ""; var_76_bool = 0; // 0x6d PushV
	var_75_string = "theater@door1"; // 0x6e MovS
	var_76_bool = 0; // 0x6f MovB
	func_219(var_75_string, var_76_bool); // 0x70 NEW_2
	var_77_object = var_2_object; // 0x72 PushT
	if(var_77_object == 0) goto Label_119; // 0x73 JumpB
	var_78_string = "cleanup"; // 0x74 PushS
	Trigger(var_74_object, var_78_string); // 0x75 Func
	
Label_119:
	var_79_object = var_0_object; // 0x77 PushT
	if(var_79_object == 0) goto Label_123; // 0x78 JumpB
	Remove(); // 0x79 TObjFunc
	
Label_123:
	var_80_object = var_1_object; // 0x7b PushT
	if(var_80_object == 0) goto Label_127; // 0x7c JumpB
	Remove(); // 0x7d TObjFunc
	
Label_127:
	var_81_object = var_4_object; // 0x7f PushT
	if(var_81_object == 0) goto Label_132; // 0x80 JumpB
	var_82_string = "cleanup"; // 0x81 PushS
	Trigger(var_69_float, var_82_string); // 0x82 Func
	
Label_132:
	var_83_bool = var_3_object == 0; // 0x84 Not
	if(var_83_bool == 0) goto Label_146; // 0x85 JumpB
	var_84_string = "theater"; // 0x86 PushS
	GetSceneByName(var_74_object, var_84_string); // 0x87 Func
	var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = ""; // 0x89 PushV
	var_86_object = var_74_object; // 0x8a Mov
	var_87_string = "pt_mark"; // 0x8b MovS
	var_88_string = "NPC_Mark"; // 0x8c MovS
	var_89_string = "NPC_Klara_Mark.xml"; // 0x8d MovS
	func_182(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string); // 0x8e NEW_2
	var_3_object = var_85_object; // 0x8f TMov
	var_74_object = 0; // 0x91 SetNull
	
Label_146:
	var_90_object = Obj(); // 0x92 PushV
	func_176(var_90_object); // 0x93 NEW_2
	RemoveActor(var_90_object); // 0x95 Func
	return 2; // 0x97 Return
}


func_236(var_7_bool, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0xec PushV
	FindActor(var_10_object, var_8_string); // 0xed Func
	var_11_bool = var_10_object == 0; // 0xef Not
	if(var_11_bool == 0) goto Label_243; // 0xf0 JumpB
	var_7_bool = 0; // 0xf1 MovB
	return 2; // 0xf2 Return
	
Label_243:
	RemoveActor(var_10_object); // 0xf3 Func
	var_7_bool = 1; // 0xf5 MovB
	return 2; // 0xf6 Return
}


func_176(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0xb0 PushV
	self(var_92_object); // 0xb1 Func
	var_90_object = var_92_object; // 0xb3 Mov
	return 2; // 0xb4 Return
}


func_80()
{
	var_7_int = 0; var_8_int = 0; // 0x50 PushV
	var_9_string = "k4q02"; // 0x51 PushS
	GetVariable(var_9_string, var_8_int); // 0x52 Func
	var_10_int = 1000; // 0x54 PushI
	var_11_bool = var_8_int != var_10_int; // 0x55 Neq
	if(var_11_bool == 0) goto Label_90; // 0x56 JumpB
	func_91(); // 0x58 NEW_2
	
Label_90:
	return 2; // 0x5a Return
}


func_182(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string)
{
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0xb6 PushV
	GetLocator(var_51_string, var_58_bool, var_59_cvector, var_60_cvector); // 0xb7 ObjFunc
	var_62_bool = var_58_bool == 0; // 0xb9 Not
	if(var_62_bool == 0) goto Label_195; // 0xba JumpB
	var_63_string = "Locator "; // 0xbb PushS
	var_64_int = var_63_string + var_51_string; // 0xbc Add
	var_65_string = " doesn't exist"; // 0xbd PushS
	var_66_int = var_64_int + var_65_string; // 0xbe Add
	Trace(var_66_int); // 0xbf Func
	var_61_object = 0; // 0xc1 SetNull
	goto Label_197; // 0xc2 Jump
	
Label_197:
	var_49_object = var_61_object; // 0xc5 Mov
	return 8; // 0xc6 Return
	
Label_195:
	AddActor(var_61_object, var_52_string, var_50_object, var_59_cvector, var_60_cvector, var_53_string); // 0xc3 Func
}


func_152(var_67_int)
{
	var_68_float = 0; var_69_float = 0; // 0x98 PushV
	GetGameTime(var_69_float); // 0x99 Func
	var_70_int = 24; // 0x9b PushI
	var_71_float = var_67_int * var_70_int; // 0x9c Mult
	var_72_bool = var_69_float >= var_71_float; // 0x9d GE
	if(var_72_bool == 0) goto Label_163; // 0x9e JumpB
	func_107(var_68_float, var_69_float); // 0xa0 NEW_2
	goto Label_170; // 0xa2 Jump
	
Label_170:
	return 2; // 0xaa Return
	
Label_163:
	var_93_int = 0; // 0xa3 PushI
	var_94_int = 24; // 0xa4 PushI
	var_95_float = var_67_int * var_94_int; // 0xa5 Mult
	SetTimeEvent(var_93_int, var_95_float); // 0xa6 Func
	Hold(); // 0xa8 Func
}


func_219(var_12_string, var_13_bool)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0xdb PushV
	FindActor(var_15_object, var_12_string); // 0xdc Func
	var_16_bool = var_15_object == 0; // 0xde Not
	if(var_16_bool == 0) goto Label_231; // 0xdf JumpB
	var_17_string = "Door "; // 0xe0 PushS
	var_18_int = var_17_string + var_12_string; // 0xe1 Add
	var_19_string = " not found"; // 0xe2 PushS
	var_20_int = var_18_int + var_19_string; // 0xe3 Add
	Trace(var_20_int); // 0xe4 Func
	goto Label_234; // 0xe6 Jump
	
Label_234:
	return 2; // 0xea Return
	
Label_231:
	var_21_string = "locked"; // 0xe7 PushS
	SetProperty(var_21_string, var_13_bool); // 0xe8 ObjFunc
}


