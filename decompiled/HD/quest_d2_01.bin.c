task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_int = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; // 0xe PushV
	Trace(var_1_string); // 0xf Func
	var_8_string = "woman"; // 0x11 PushS
	var_9_bool = var_1_string == var_8_string; // 0x12 Eq
	if(var_9_bool == 0) goto Label_38; // 0x13 JumpB
	var_10_string = ""; var_11_bool = 0; // 0x14 PushV
	var_10_string = "d2q01_house1@door1"; // 0x15 MovS
	var_11_bool = 0; // 0x16 MovB
	func_151(var_10_string, var_11_bool); // 0x17 NEW_2
	var_20_string = "d2q01_house1"; // 0x19 PushS
	GetSceneByName(var_5_object, var_20_string); // 0x1a Func
	var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = ""; // 0x1c PushV
	var_22_object = var_5_object; // 0x1d Mov
	var_23_string = "pt_woman"; // 0x1e MovS
	var_24_string = "pers_woman"; // 0x1f MovS
	var_25_string = "d2q01_woman.xml"; // 0x20 MovS
	func_133(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string); // 0x21 NEW_2
	var_0_object = var_21_object; // 0x22 TMov
	var_5_object = 0; // 0x24 SetNull
	goto Label_93; // 0x25 Jump
	
Label_93:
	return 6; // 0x5d Return
	
Label_38:
	var_39_string = "cursed_women"; // 0x26 PushS
	var_40_bool = var_1_string == var_39_string; // 0x27 Eq
	if(var_40_bool == 0) goto Label_63; // 0x28 JumpB
	var_41_string = "d2q01_house1"; // 0x29 PushS
	GetSceneByName(var_6_object, var_41_string); // 0x2a Func
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x2c PushV
	var_43_object = var_6_object; // 0x2d Mov
	var_44_string = "pt_enemy01"; // 0x2e MovS
	var_45_string = "pers_woman"; // 0x2f MovS
	var_46_string = "d2q01_zombie_woman.xml"; // 0x30 MovS
	func_133(var_42_object, var_43_object, var_44_string, var_45_string, var_46_string); // 0x31 NEW_2
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x33 PushV
	var_48_object = var_6_object; // 0x34 Mov
	var_49_string = "pt_enemy02"; // 0x35 MovS
	var_50_string = "pers_woman"; // 0x36 MovS
	var_51_string = "d2q01_zombie_woman.xml"; // 0x37 MovS
	func_133(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string); // 0x38 NEW_2
	var_52_string = "cleanup"; // 0x3a PushS
	Trigger(var_0_object, var_52_string); // 0x3b Func
	var_6_object = 0; // 0x3d SetNull
	goto Label_93; // 0x3e Jump
	
Label_63:
	var_53_string = "cleanup"; // 0x3f PushS
	var_54_bool = var_1_string == var_53_string; // 0x40 Eq
	if(var_54_bool == 0) goto Label_80; // 0x41 JumpB
	var_55_string = "d2q01"; // 0x42 PushS
	GetVariable(var_55_string, var_7_int); // 0x43 Func
	var_56_int = 1000; // 0x45 PushI
	var_57_bool = var_7_int != var_56_int; // 0x46 Neq
	if(var_57_bool == 0) goto Label_76; // 0x47 JumpB
	func_94(); // 0x49 NEW_2
	goto Label_79; // 0x4b Jump
	
Label_79:
	goto Label_93; // 0x4f Jump
	
Label_76:
	func_110(var_7_int); // 0x4d NEW_2
	
Label_80:
	var_67_string = "fail"; // 0x50 PushS
	var_68_bool = var_1_string == var_67_string; // 0x51 Eq
	if(var_68_bool == 0) goto Label_87; // 0x52 JumpB
	func_94(); // 0x54 NEW_2
	goto Label_93; // 0x56 Jump
	
Label_87:
	var_69_string = "completed"; // 0x57 PushS
	var_70_bool = var_1_string == var_69_string; // 0x58 Eq
	if(var_70_bool == 0) goto Label_93; // 0x59 JumpB
	func_102(); // 0x5b NEW_2
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0; // 0x0 PushV
	var_1_string = "house_petr@door1"; // 0x1 MovS
	var_2_bool = 0; // 0x2 MovB
	func_151(var_1_string, var_2_bool); // 0x3 NEW_2
	var_11_string = ""; var_12_bool = 0; // 0x5 PushV
	var_11_string = "shouse1_kabak@door1"; // 0x6 MovS
	var_12_bool = 0; // 0x7 MovB
	func_151(var_11_string, var_12_bool); // 0x8 NEW_2
	
Label_10:
	Hold(); // 0xa Func
	goto Label_10; // 0xc Jump
}


func_133(var_21_object, var_22_object, var_23_string, var_24_string, var_25_string)
{
	var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); // 0x85 PushV
	GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector); // 0x86 ObjFunc
	var_34_bool = var_30_bool == 0; // 0x88 Not
	if(var_34_bool == 0) goto Label_146; // 0x89 JumpB
	var_35_string = "Locator "; // 0x8a PushS
	var_36_int = var_35_string + var_23_string; // 0x8b Add
	var_37_string = " doesn't exist"; // 0x8c PushS
	var_38_int = var_36_int + var_37_string; // 0x8d Add
	Trace(var_38_int); // 0x8e Func
	var_33_object = 0; // 0x90 SetNull
	goto Label_148; // 0x91 Jump
	
Label_148:
	var_21_object = var_33_object; // 0x94 Mov
	return 8; // 0x95 Return
	
Label_146:
	AddActor(var_33_object, var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string); // 0x92 Func
}


func_102()
{
	var_71_string = "d2q01"; // 0x66 PushS
	var_72_int = 1000; // 0x67 PushI
	SetVariable(var_71_string, var_72_int); // 0x68 Func
	func_110(var_7_int); // 0x6b NEW_2
	return 0; // 0x6d Return
}


func_110(var_0_object)
{
	EventDisable(26); // 0x6e EventDisable
	var_60_object = var_0_object; // 0x6f PushT
	if(var_60_object == 0) goto Label_116; // 0x70 JumpB
	var_61_string = "cleanup"; // 0x71 PushS
	Trigger(var_0_object, var_61_string); // 0x72 Func
	
Label_116:
	var_62_string = ""; var_63_bool = 0; // 0x74 PushV
	var_62_string = "d2q01_house1@door1"; // 0x75 MovS
	var_63_bool = 1; // 0x76 MovB
	func_151(var_62_string, var_63_bool); // 0x77 NEW_2
	var_64_object = Obj(); // 0x79 PushV
	func_127(var_64_object); // 0x7a NEW_2
	RemoveActor(var_64_object); // 0x7c Func
	return 0; // 0x7e Return
}


func_151(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x97 PushV
	FindActor(var_4_object, var_1_string); // 0x98 Func
	var_5_bool = var_4_object == 0; // 0x9a Not
	if(var_5_bool == 0) goto Label_163; // 0x9b JumpB
	var_6_string = "Door "; // 0x9c PushS
	var_7_int = var_6_string + var_1_string; // 0x9d Add
	var_8_string = " not found"; // 0x9e PushS
	var_9_int = var_7_int + var_8_string; // 0x9f Add
	Trace(var_9_int); // 0xa0 Func
	goto Label_166; // 0xa2 Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_163:
	var_10_string = "locked"; // 0xa3 PushS
	SetProperty(var_10_string, var_2_bool); // 0xa4 ObjFunc
}


func_94()
{
	var_58_string = "d2q01"; // 0x5e PushS
	var_59_int = -1; // 0x5f PushI
	SetVariable(var_58_string, var_59_int); // 0x60 Func
	func_110(var_7_int); // 0x63 NEW_2
	return 0; // 0x65 Return
}


func_127(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x7f PushV
	self(var_66_object); // 0x80 Func
	var_64_object = var_66_object; // 0x82 Mov
	return 2; // 0x83 Return
}


