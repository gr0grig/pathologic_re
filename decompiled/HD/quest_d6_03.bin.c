task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_4_string = "completed"; // 0xc PushS
	var_5_bool = var_1_string == var_4_string; // 0xd Eq
	if(var_5_bool == 0) goto Label_19; // 0xe JumpB
	func_83(); // 0x10 NEW_2
	goto Label_63; // 0x12 Jump
	
Label_63:
	return 2; // 0x3f Return
	
Label_19:
	var_20_string = "fail"; // 0x13 PushS
	var_21_bool = var_1_string == var_20_string; // 0x14 Eq
	if(var_21_bool == 0) goto Label_26; // 0x15 JumpB
	func_75(); // 0x17 NEW_2
	goto Label_63; // 0x19 Jump
	
Label_26:
	var_24_string = "place_albinos"; // 0x1a PushS
	var_25_bool = var_1_string == var_24_string; // 0x1b Eq
	if(var_25_bool == 0) goto Label_41; // 0x1c JumpB
	GetMainOutdoorScene(var_3_object); // 0x1d Func
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x1f PushV
	var_27_object = var_3_object; // 0x20 Mov
	var_28_string = "pt_d6q03_albinos"; // 0x21 MovS
	var_29_string = "pers_albinos"; // 0x22 MovS
	var_30_string = "d6q03_albinos.xml"; // 0x23 MovS
	func_146(var_27_object, var_28_string, var_29_string, var_30_string); // 0x24 NEW_2
	var_0_object = var_26_object; // 0x25 TMov
	var_3_object = 0; // 0x27 SetNull
	goto Label_63; // 0x28 Jump
	
Label_41:
	var_44_string = "albinos_retreated"; // 0x29 PushS
	var_45_bool = var_1_string == var_44_string; // 0x2a Eq
	if(var_45_bool == 0) goto Label_51; // 0x2b JumpB
	var_46_string = "d6q03AlbinosFlee"; // 0x2c PushS
	var_47_int = 1; // 0x2d PushI
	SetVariable(var_46_string, var_47_int); // 0x2e Func
	Remove(); // 0x30 TObjFunc
	goto Label_63; // 0x32 Jump
	
Label_51:
	var_48_string = "albinos_dead"; // 0x33 PushS
	var_49_bool = var_1_string == var_48_string; // 0x34 Eq
	if(var_49_bool == 0) goto Label_63; // 0x35 JumpB
	var_50_string = "d6q03AlbinosKilled"; // 0x36 PushS
	var_51_int = 1; // 0x37 PushI
	SetVariable(var_50_string, var_51_int); // 0x38 Func
	func_164(); // 0x3b NEW_2
	Remove(); // 0x3d TObjFunc
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_64(); // 0x89 NEW_2
	return 0; // 0x8b Return
}


main(var_0_object)
{
	var_1_string = "d6q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 6; // 0x5 MovI
	func_116(var_3_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_64()
{
	var_3_int = 0; var_4_int = 0; // 0x40 PushV
	var_5_string = "d6q03"; // 0x41 PushS
	GetVariable(var_5_string, var_4_int); // 0x42 Func
	var_6_int = 1000; // 0x44 PushI
	var_7_bool = var_4_int != var_6_int; // 0x45 Neq
	if(var_7_bool == 0) goto Label_74; // 0x46 JumpB
	func_75(); // 0x48 NEW_2
	
Label_74:
	return 2; // 0x4a Return
}


func_164()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xa4 PushV
	var_54_int = 108; // 0xa5 PushI
	var_55_int = 2; // 0xa6 PushI
	var_56_int = 513731; // 0xa7 PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0xa8 Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0xaa PushV
	var_58_object = var_53_object; // 0xab Mov
	var_59_int = 107; // 0xac MovI
	func_190(var_57_bool, var_58_object, var_59_int); // 0xad NEW_2
	return 2; // 0xaf Return
}


func_105()
{
	EventDisable(26); // 0x69 EventDisable
	var_9_object = var_0_object; // 0x6a PushT
	if(var_9_object == 0) goto Label_110; // 0x6b JumpB
	Remove(); // 0x6c TObjFunc
	
Label_110:
	var_10_object = Obj(); // 0x6e PushV
	func_140(var_10_object); // 0x6f NEW_2
	RemoveActor(var_10_object); // 0x71 Func
	return 0; // 0x73 Return
}


func_75()
{
	var_8_string = "d6q03"; // 0x4b PushS
	var_9_int = -1; // 0x4c PushI
	SetVariable(var_8_string, var_9_int); // 0x4d Func
	func_105(); // 0x50 NEW_2
	return 0; // 0x52 Return
}


func_140(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x8c PushV
	self(var_12_object); // 0x8d Func
	var_10_object = var_12_object; // 0x8f Mov
	return 2; // 0x90 Return
}


func_177(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xb1 PushV
	GetDiaryRoot(var_68_object); // 0xb2 Func
	var_69_bool = var_68_object == 0; // 0xb4 Not
	if(var_69_bool == 0) goto Label_187; // 0xb5 JumpB
	var_70_string = "Can't retrieve diary root"; // 0xb6 PushS
	Trace(var_70_string); // 0xb7 Func
	var_66_object = 0; // 0xb9 MovB
	return 2; // 0xba Return
	
Label_187:
	var_66_object = var_68_object; // 0xbb Mov
	return 2; // 0xbc Return
}


func_146(var_26_object, var_28_string, var_29_string, var_30_string)
{
	var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); // 0x92 PushV
	GetLocator(var_28_string, var_35_bool, var_36_cvector, var_37_cvector); // 0x93 ObjFunc
	var_39_bool = var_35_bool == 0; // 0x95 Not
	if(var_39_bool == 0) goto Label_159; // 0x96 JumpB
	var_40_string = "Locator "; // 0x97 PushS
	var_41_int = var_40_string + var_28_string; // 0x98 Add
	var_42_string = " doesn't exist"; // 0x99 PushS
	var_43_int = var_41_int + var_42_string; // 0x9a Add
	Trace(var_43_int); // 0x9b Func
	var_38_object = 0; // 0x9d SetNull
	goto Label_161; // 0x9e Jump
	
Label_161:
	var_26_object = var_38_object; // 0xa1 Mov
	return 8; // 0xa2 Return
	
Label_159:
	AddStationaryActor(var_38_object, var_36_cvector, var_37_cvector, var_29_string, var_30_string); // 0x9f ObjFunc
}


func_83()
{
	var_6_int = 0; var_7_int = 0; // 0x53 PushV
	var_8_string = "d6q03"; // 0x54 PushS
	GetVariable(var_8_string, var_7_int); // 0x55 Func
	var_9_bool = 0; // 0x57 PushV
	var_9_bool = 0; // 0x58 MovB
	var_10_int = 1000; // 0x59 PushI
	var_11_bool = var_7_int != var_10_int; // 0x5a Neq
	if(var_11_bool == 0) goto Label_96; // 0x5b JumpB
	var_12_int = -1; // 0x5c PushI
	var_13_bool = var_7_int != var_12_int; // 0x5d Neq
	if(var_13_bool == 0) goto Label_96; // 0x5e JumpB
	var_9_bool = 1; // 0x5f MovB
	
Label_96:
	if(var_9_bool == 0) goto Label_104; // 0x60 JumpB
	var_14_string = "d6q03"; // 0x61 PushS
	var_15_int = 1000; // 0x62 PushI
	SetVariable(var_14_string, var_15_int); // 0x63 Func
	func_105(); // 0x66 NEW_2
	
Label_104:
	return 2; // 0x68 Return
}


func_116(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x74 PushV
	GetGameTime(var_5_float); // 0x75 Func
	var_6_int = 24; // 0x77 PushI
	var_7_float = var_3_int * var_6_int; // 0x78 Mult
	var_8_bool = var_5_float >= var_7_float; // 0x79 GE
	if(var_8_bool == 0) goto Label_127; // 0x7a JumpB
	func_105(); // 0x7c NEW_2
	goto Label_134; // 0x7e Jump
	
Label_134:
	return 2; // 0x86 Return
	
Label_127:
	var_13_int = 0; // 0x7f PushI
	var_14_int = 24; // 0x80 PushI
	var_15_float = var_3_int * var_14_int; // 0x81 Mult
	SetTimeEvent(var_13_int, var_15_float); // 0x82 Func
	Hold(); // 0x84 Func
}


func_190(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0xbe PushV
	var_66_object = Obj(); // 0xbf PushV
	func_177(var_66_object); // 0xc0 NEW_2
	var_63_object = var_66_object; // 0xc1 Mov
	Find(var_59_int, var_64_object); // 0xc3 ObjFunc
	var_71_bool = var_64_object == 0; // 0xc5 Not
	if(var_71_bool == 0) goto Label_205; // 0xc6 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0xc7 PushS
	var_73_int = var_72_string + var_59_int; // 0xc8 Add
	Trace(var_73_int); // 0xc9 Func
	var_57_bool = 0; // 0xcb MovB
	return 6; // 0xcc Return
	
Label_205:
	AddChild(var_58_object); // 0xcd ObjFunc
	var_74_int = 7; // 0xcf PushI
	SendWorldWndMessage(var_74_int); // 0xd0 Func
	GetCategory(var_65_int); // 0xd2 ObjFunc
	SetDiarySection(var_65_int); // 0xd4 Func
	var_57_bool = 0; // 0xd6 MovB
	return 6; // 0xd7 Return
}


