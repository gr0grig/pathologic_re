task_0_event_26(var_0_object, var_1_string)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_bool = 0; var_5_object = Obj(); // 0x1d PushV
	Trace(var_1_string); // 0x1e Func
	var_6_string = "scene_load"; // 0x20 PushS
	var_7_bool = var_1_string == var_6_string; // 0x21 Eq
	if(var_7_bool == 0) goto Label_48; // 0x22 JumpB
	var_8_string = "d4q02_survived"; // 0x23 PushS
	GetVariable(var_8_string, var_4_bool); // 0x24 Func
	var_9_bool = var_4_bool == 0; // 0x26 Not
	if(var_9_bool == 0) goto Label_47; // 0x27 JumpB
	var_10_string = "door_close"; // 0x28 PushS
	PlaySound(var_10_string); // 0x29 Func
	var_11_object = Obj(); var_12_string = ""; // 0x2b PushV
	var_12_string = "quest_d4_02_survival"; // 0x2c MovS
	func_210(var_11_object, var_12_string); // 0x2d Call
	
Label_47:
	goto Label_107; // 0x2f Jump
	
Label_107:
	return 4; // 0x6b Return
	
Label_48:
	var_19_string = "scene_unload"; // 0x30 PushS
	var_20_bool = var_1_string == var_19_string; // 0x31 Eq
	if(var_20_bool == 0) goto Label_61; // 0x32 JumpB
	var_21_object = var_0_object; // 0x33 PushT
	if(var_21_object == 0) goto Label_55; // 0x34 JumpB
	Remove(); // 0x35 TObjFunc
	
Label_55:
	var_22_string = ""; var_23_bool = 0; // 0x37 PushV
	var_22_string = "s_house7_03_door2"; // 0x38 MovS
	var_23_bool = 0; // 0x39 MovB
	func_239(var_22_string, var_23_bool); // 0x3a Call
	goto Label_107; // 0x3c Jump
	
Label_61:
	var_32_string = "birdmask"; // 0x3d PushS
	var_33_bool = var_1_string == var_32_string; // 0x3e Eq
	if(var_33_bool == 0) goto Label_76; // 0x3f JumpB
	GetMainOutdoorScene(var_5_object); // 0x40 Func
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x42 PushV
	var_35_object = var_5_object; // 0x43 Mov
	var_36_string = "pt_d4q02_birdmask"; // 0x44 MovS
	var_37_string = "pers_birdmask"; // 0x45 MovS
	var_38_string = "d4q02_birdmask.xml"; // 0x46 MovS
	func_221(var_35_object, var_36_string, var_37_string, var_38_string); // 0x47 Call
	var_0_object = var_34_object; // 0x48 TMov
	var_5_object = 0; // 0x4a SetNull
	goto Label_107; // 0x4b Jump
	
Label_76:
	var_52_string = "birdmask_talk"; // 0x4c PushS
	var_53_bool = var_1_string == var_52_string; // 0x4d Eq
	if(var_53_bool == 0) goto Label_85; // 0x4e JumpB
	var_54_string = ""; var_55_bool = 0; // 0x4f PushV
	var_54_string = "house7_03@door1"; // 0x50 MovS
	var_55_bool = 0; // 0x51 MovB
	func_239(var_54_string, var_55_bool); // 0x52 Call
	goto Label_107; // 0x54 Jump
	
Label_85:
	var_56_string = "survived"; // 0x55 PushS
	var_57_bool = var_1_string == var_56_string; // 0x56 Eq
	if(var_57_bool == 0) goto Label_101; // 0x57 JumpB
	var_58_string = ""; var_59_bool = 0; // 0x58 PushV
	var_58_string = "s_house7_03_door1"; // 0x59 MovS
	var_59_bool = 0; // 0x5a MovB
	func_239(var_58_string, var_59_bool); // 0x5b Call
	var_60_string = "d4q02_survived"; // 0x5d PushS
	var_61_int = 1; // 0x5e PushI
	SetVariable(var_60_string, var_61_int); // 0x5f Func
	var_62_string = "door_open"; // 0x61 PushS
	PlaySound(var_62_string); // 0x62 Func
	goto Label_107; // 0x64 Jump
	
Label_101:
	var_63_string = "completed"; // 0x65 PushS
	var_64_bool = var_1_string == var_63_string; // 0x66 Eq
	if(var_64_bool == 0) goto Label_107; // 0x67 JumpB
	func_127(); // 0x69 Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_108(); // 0xc9 Call
	return 0; // 0xcb Return
}


main(var_0_object)
{
	var_1_string = "d4q02"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_string = ""; var_4_bool = 0; // 0x4 PushV
	var_3_string = "s_house7_03_door1"; // 0x5 MovS
	var_4_bool = 1; // 0x6 MovB
	func_239(var_3_string, var_4_bool); // 0x7 Call
	var_13_string = ""; var_14_bool = 0; // 0x9 PushV
	var_13_string = "s_house7_03_door2"; // 0xa MovS
	var_14_bool = 1; // 0xb MovB
	func_239(var_13_string, var_14_bool); // 0xc Call
	var_15_string = ""; var_16_bool = 0; // 0xe PushV
	var_15_string = "house7_03@door1"; // 0xf MovS
	var_16_bool = 1; // 0x10 MovB
	func_239(var_15_string, var_16_bool); // 0x11 Call
	var_17_string = ""; var_18_bool = 0; // 0x13 PushV
	var_17_string = "house7_03@door2"; // 0x14 MovS
	var_18_bool = 1; // 0x15 MovB
	func_239(var_17_string, var_18_bool); // 0x16 Call
	var_19_int = 0; // 0x18 PushV
	var_19_int = 4; // 0x19 MovI
	func_180(var_19_int); // 0x1a Call
	return 0; // 0x1c Return
}


func_204(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xcc PushV
	self(var_36_object); // 0xcd Func
	var_34_object = var_36_object; // 0xcf Mov
	return 2; // 0xd0 Return
}


func_108()
{
	var_3_int = 0; var_4_int = 0; // 0x6c PushV
	var_5_string = "d4q02"; // 0x6d PushS
	GetVariable(var_5_string, var_4_int); // 0x6e Func
	var_6_int = 1000; // 0x70 PushI
	var_7_bool = var_4_int != var_6_int; // 0x71 Neq
	if(var_7_bool == 0) goto Label_118; // 0x72 JumpB
	func_119(); // 0x74 Call
	
Label_118:
	return 2; // 0x76 Return
}


func_239(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xef PushV
	FindActor(var_6_object, var_3_string); // 0xf0 Func
	var_7_bool = var_6_object == 0; // 0xf2 Not
	if(var_7_bool == 0) goto Label_250; // 0xf3 JumpB
	var_8_string = "Door "; // 0xf4 PushS
	var_9_int = var_8_string + var_3_string; // 0xf5 Add
	var_10_string = " not found"; // 0xf6 PushS
	var_11_int = var_9_int + var_10_string; // 0xf7 Add
	Trace(var_11_int); // 0xf8 Func
	
Label_250:
	var_12_string = "locked"; // 0xfa PushS
	SetProperty(var_12_string, var_4_bool); // 0xfb ObjFunc
	return 2; // 0xfd Return
}


func_210(var_11_object, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0xd2 PushV
	GetMainOutdoorScene(var_15_object); // 0xd3 Func
	var_17_string = ".bin"; // 0xd5 PushS
	var_18_int = var_12_string + var_17_string; // 0xd6 Add
	AddBlankActor(var_16_object, var_15_object, var_12_string, var_18_int); // 0xd7 Func
	var_11_object = var_16_object; // 0xd9 Mov
	return 4; // 0xda Return
}


func_180(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0xb4 PushV
	GetGameTime(var_21_float); // 0xb5 Func
	var_22_int = 24; // 0xb7 PushI
	var_23_float = var_19_int * var_22_int; // 0xb8 Mult
	var_24_bool = var_21_float >= var_23_float; // 0xb9 GE
	if(var_24_bool == 0) goto Label_191; // 0xba JumpB
	func_149(); // 0xbc Call
	goto Label_198; // 0xbe Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_191:
	var_37_int = 0; // 0xbf PushI
	var_38_int = 24; // 0xc0 PushI
	var_39_float = var_19_int * var_38_int; // 0xc1 Mult
	SetTimeEvent(var_37_int, var_39_float); // 0xc2 Func
	Hold(); // 0xc4 Func
}


func_149()
{
	EventDisable(26); // 0x95 EventDisable
	var_25_object = var_0_object; // 0x96 PushT
	if(var_25_object == 0) goto Label_154; // 0x97 JumpB
	Remove(); // 0x98 TObjFunc
	
Label_154:
	var_26_string = ""; var_27_bool = 0; // 0x9a PushV
	var_26_string = "s_house7_03_door1"; // 0x9b MovS
	var_27_bool = 0; // 0x9c MovB
	func_239(var_26_string, var_27_bool); // 0x9d Call
	var_28_string = ""; var_29_bool = 0; // 0x9f PushV
	var_28_string = "s_house7_03_door2"; // 0xa0 MovS
	var_29_bool = 0; // 0xa1 MovB
	func_239(var_28_string, var_29_bool); // 0xa2 Call
	var_30_string = ""; var_31_bool = 0; // 0xa4 PushV
	var_30_string = "house7_03@door1"; // 0xa5 MovS
	var_31_bool = 0; // 0xa6 MovB
	func_239(var_30_string, var_31_bool); // 0xa7 Call
	var_32_string = ""; var_33_bool = 0; // 0xa9 PushV
	var_32_string = "house7_03@door2"; // 0xaa MovS
	var_33_bool = 0; // 0xab MovB
	func_239(var_32_string, var_33_bool); // 0xac Call
	var_34_object = Obj(); // 0xae PushV
	func_204(var_34_object); // 0xaf Call
	RemoveActor(var_34_object); // 0xb1 Func
	return 0; // 0xb3 Return
}


func_119()
{
	var_8_string = "d4q02"; // 0x77 PushS
	var_9_int = -1; // 0x78 PushI
	SetVariable(var_8_string, var_9_int); // 0x79 Func
	func_149(); // 0x7c Call
	return 0; // 0x7e Return
}


func_221(var_34_object, var_36_string, var_37_string, var_38_string)
{
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0xdd PushV
	GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector); // 0xde ObjFunc
	var_47_bool = var_43_bool == 0; // 0xe0 Not
	if(var_47_bool == 0) goto Label_234; // 0xe1 JumpB
	var_48_string = "Locator "; // 0xe2 PushS
	var_49_int = var_48_string + var_36_string; // 0xe3 Add
	var_50_string = " doesn't exist"; // 0xe4 PushS
	var_51_int = var_49_int + var_50_string; // 0xe5 Add
	Trace(var_51_int); // 0xe6 Func
	var_46_object = 0; // 0xe8 SetNull
	goto Label_236; // 0xe9 Jump
	
Label_236:
	var_34_object = var_46_object; // 0xec Mov
	return 8; // 0xed Return
	
Label_234:
	AddStationaryActor(var_46_object, var_44_cvector, var_45_cvector, var_37_string, var_38_string); // 0xea ObjFunc
}


func_127()
{
	var_65_int = 0; var_66_int = 0; // 0x7f PushV
	var_67_string = "d4q02"; // 0x80 PushS
	GetVariable(var_67_string, var_66_int); // 0x81 Func
	var_68_bool = 0; // 0x83 PushV
	var_68_bool = 0; // 0x84 MovB
	var_69_int = 1000; // 0x85 PushI
	var_70_bool = var_66_int != var_69_int; // 0x86 Neq
	if(var_70_bool == 0) goto Label_140; // 0x87 JumpB
	var_71_int = -1; // 0x88 PushI
	var_72_bool = var_66_int != var_71_int; // 0x89 Neq
	if(var_72_bool == 0) goto Label_140; // 0x8a JumpB
	var_68_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_68_bool == 0) goto Label_148; // 0x8c JumpB
	var_73_string = "d4q02"; // 0x8d PushS
	var_74_int = 1000; // 0x8e PushI
	SetVariable(var_73_string, var_74_int); // 0x8f Func
	func_149(); // 0x92 Call
	
Label_148:
	return 2; // 0x94 Return
}


