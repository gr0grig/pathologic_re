task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); // 0x1e PushV
	Trace(var_2_string); // 0x1f Func
	var_15_string = "b8q02_trigger"; // 0x21 PushS
	var_16_bool = var_2_string == var_15_string; // 0x22 Eq
	if(var_16_bool == 0) goto Label_65; // 0x23 JumpB
	var_17_string = "door_close"; // 0x24 PushS
	PlaySound(var_17_string); // 0x25 Func
	var_18_string = ""; var_19_bool = 0; // 0x27 PushV
	var_18_string = "ihouse_vlad@door2"; // 0x28 MovS
	var_19_bool = 1; // 0x29 MovB
	func_203(var_18_string, var_19_bool); // 0x2a NEW_2
	var_28_string = "house_vlad"; // 0x2c PushS
	GetSceneByName(var_9_object, var_28_string); // 0x2d Func
	var_10_int = 1; // 0x2f MovI
	
Label_48:
	var_29_string = "pt_b8q02_grabitel"; // 0x30 PushS
	var_30_int = var_29_string + var_10_int; // 0x31 Add
	GetLocator(var_30_int, var_11_bool, var_12_cvector, var_13_cvector); // 0x32 ObjFunc
	var_31_bool = var_11_bool == 0; // 0x34 Not
	if(var_31_bool == 0) goto Label_55; // 0x35 JumpB
	goto Label_63; // 0x36 Jump
	
Label_63:
	var_9_object = 0; // 0x3f SetNull
	goto Label_93; // 0x40 Jump
	
Label_93:
	return 12; // 0x5d Return
	
Label_55:
	var_32_string = "pers_grabitel"; // 0x37 PushS
	var_33_string = "b8q02_grabitel.xml"; // 0x38 PushS
	AddActor(var_14_object, var_32_string, var_9_object, var_12_cvector, var_13_cvector, var_33_string); // 0x39 Func
	var_14_object = 0; // 0x3b SetNull
	var_34_int = 1; // 0x3c PushI
	var_10_int = var_10_int + var_34_int; // 0x3d Add2
	goto Label_48; // 0x3e Jump
	
Label_65:
	var_35_string = "book_taken"; // 0x41 PushS
	var_36_bool = var_2_string == var_35_string; // 0x42 Eq
	if(var_36_bool == 0) goto Label_80; // 0x43 JumpB
	func_220(); // 0x45 NEW_2
	var_60_string = "door_open"; // 0x47 PushS
	PlaySound(var_60_string); // 0x48 Func
	var_61_string = ""; var_62_bool = 0; // 0x4a PushV
	var_61_string = "ihouse_vlad@door2"; // 0x4b MovS
	var_62_bool = 0; // 0x4c MovB
	func_203(var_61_string, var_62_bool); // 0x4d NEW_2
	goto Label_93; // 0x4f Jump
	
Label_80:
	var_63_string = "fail"; // 0x50 PushS
	var_64_bool = var_2_string == var_63_string; // 0x51 Eq
	if(var_64_bool == 0) goto Label_87; // 0x52 JumpB
	func_105(); // 0x54 NEW_2
	goto Label_93; // 0x56 Jump
	
Label_87:
	var_77_string = "completed"; // 0x57 PushS
	var_78_bool = var_2_string == var_77_string; // 0x58 Eq
	if(var_78_bool == 0) goto Label_93; // 0x59 JumpB
	func_113(); // 0x5b NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_94(); // 0xa8 NEW_2
	return 0; // 0xaa Return
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	var_4_string = "house_vlad"; // 0x1 PushS
	GetSceneByName(var_3_object, var_4_string); // 0x2 Func
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; // 0x4 PushV
	var_6_object = var_3_object; // 0x5 Mov
	var_7_string = "b8q02_trigger"; // 0x6 MovS
	var_8_string = "b8q02_trigger.xml"; // 0x7 MovS
	func_177(var_5_object, var_6_object, var_7_string, var_8_string); // 0x8 NEW_2
	var_0_object = var_5_object; // 0x9 TMov
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0xb PushV
	var_14_object = var_3_object; // 0xc Mov
	var_15_string = "pt_b8q02_book"; // 0xd MovS
	var_16_string = "scripted_container"; // 0xe MovS
	var_17_string = "b8q02_item_book.xml"; // 0xf MovS
	func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0x10 NEW_2
	var_1_object = var_13_object; // 0x11 TMov
	var_31_string = ""; var_32_bool = 0; // 0x13 PushV
	var_31_string = "house_vlad@door2"; // 0x14 MovS
	var_32_bool = 0; // 0x15 MovB
	func_203(var_31_string, var_32_bool); // 0x16 NEW_2
	var_41_int = 0; // 0x18 PushV
	var_41_int = 8; // 0x19 MovI
	func_147(var_41_int); // 0x1a NEW_2
	return 2; // 0x1c Return
}


func_121(var_0_object)
{
	EventDisable(26); // 0x79 EventDisable
	var_47_object = var_0_object; // 0x7a PushT
	if(var_47_object == 0) goto Label_126; // 0x7b JumpB
	RemoveActor(var_0_object); // 0x7c Func
	
Label_126:
	var_48_object = var_1_object; // 0x7e PushT
	if(var_48_object == 0) goto Label_131; // 0x7f JumpB
	var_49_string = "cleanup"; // 0x80 PushS
	Trigger(var_49_string, var_49_string); // 0x81 Func
	
Label_131:
	var_50_string = ""; var_51_bool = 0; // 0x83 PushV
	var_50_string = "ihouse_vlad@door2"; // 0x84 MovS
	var_51_bool = 0; // 0x85 MovB
	func_203(var_50_string, var_51_bool); // 0x86 NEW_2
	var_52_string = ""; var_53_bool = 0; // 0x88 PushV
	var_52_string = "house_vlad@door2"; // 0x89 MovS
	var_53_bool = 1; // 0x8a MovB
	func_203(var_52_string, var_53_bool); // 0x8b NEW_2
	var_54_object = Obj(); // 0x8d PushV
	func_171(var_54_object); // 0x8e NEW_2
	RemoveActor(var_54_object); // 0x90 Func
	return 0; // 0x92 Return
}


func_233(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xe9 PushV
	GetDiaryRoot(var_53_object); // 0xea Func
	var_54_bool = var_53_object == 0; // 0xec Not
	if(var_54_bool == 0) goto Label_243; // 0xed JumpB
	var_55_string = "Can't retrieve diary root"; // 0xee PushS
	Trace(var_55_string); // 0xef Func
	var_51_object = 0; // 0xf1 MovB
	return 2; // 0xf2 Return
	
Label_243:
	var_51_object = var_53_object; // 0xf3 Mov
	return 2; // 0xf4 Return
}


func_105()
{
	var_9_string = "b8q02"; // 0x69 PushS
	var_10_int = -1; // 0x6a PushI
	SetVariable(var_9_string, var_10_int); // 0x6b Func
	func_121(var_5_int); // 0x6e NEW_2
	return 0; // 0x70 Return
}


func_171(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0xab PushV
	self(var_56_object); // 0xac Func
	var_54_object = var_56_object; // 0xae Mov
	return 2; // 0xaf Return
}


func_203(var_31_string, var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0xcb PushV
	FindActor(var_34_object, var_31_string); // 0xcc Func
	var_35_bool = var_34_object == 0; // 0xce Not
	if(var_35_bool == 0) goto Label_215; // 0xcf JumpB
	var_36_string = "Door "; // 0xd0 PushS
	var_37_int = var_36_string + var_31_string; // 0xd1 Add
	var_38_string = " not found"; // 0xd2 PushS
	var_39_int = var_37_int + var_38_string; // 0xd3 Add
	Trace(var_39_int); // 0xd4 Func
	goto Label_218; // 0xd6 Jump
	
Label_218:
	return 2; // 0xda Return
	
Label_215:
	var_40_string = "locked"; // 0xd7 PushS
	SetProperty(var_40_string, var_32_bool); // 0xd8 ObjFunc
}


func_177(var_5_object, var_6_object, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0xb1 PushV
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0xb2 PushVec
	var_12_cvector = CVector(0.0, 0.0, 1.0); // 0xb3 PushVec
	AddActor(var_10_object, var_7_string, var_6_object, var_11_cvector, var_12_cvector, var_8_string); // 0xb4 Func
	var_5_object = var_10_object; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_113()
{
	var_79_string = "b8q02"; // 0x71 PushS
	var_80_int = 1000; // 0x72 PushI
	SetVariable(var_79_string, var_80_int); // 0x73 Func
	func_121(var_14_object); // 0x76 NEW_2
	return 0; // 0x78 Return
}


func_147(var_41_int)
{
	var_42_float = 0; var_43_float = 0; // 0x93 PushV
	GetGameTime(var_43_float); // 0x94 Func
	var_44_int = 24; // 0x96 PushI
	var_45_float = var_41_int * var_44_int; // 0x97 Mult
	var_46_bool = var_43_float >= var_45_float; // 0x98 GE
	if(var_46_bool == 0) goto Label_158; // 0x99 JumpB
	func_121(var_43_float); // 0x9b NEW_2
	goto Label_165; // 0x9d Jump
	
Label_165:
	return 2; // 0xa5 Return
	
Label_158:
	var_57_int = 0; // 0x9e PushI
	var_58_int = 24; // 0x9f PushI
	var_59_float = var_41_int * var_58_int; // 0xa0 Mult
	SetTimeEvent(var_57_int, var_59_float); // 0xa1 Func
	Hold(); // 0xa3 Func
}


func_246(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0xf6 PushV
	var_51_object = Obj(); // 0xf7 PushV
	func_233(var_51_object); // 0xf8 NEW_2
	var_48_object = var_51_object; // 0xf9 Mov
	Find(var_44_int, var_49_object); // 0xfb ObjFunc
	var_56_bool = var_49_object == 0; // 0xfd Not
	if(var_56_bool == 0) goto Label_261; // 0xfe JumpB
	var_57_string = "Can't find diary parent with id: "; // 0xff PushS
	var_58_int = var_57_string + var_44_int; // 0x100 Add
	Trace(var_58_int); // 0x101 Func
	var_42_bool = 0; // 0x103 MovB
	return 6; // 0x104 Return
	
Label_261:
	AddChild(var_43_object); // 0x105 ObjFunc
	var_59_int = 7; // 0x107 PushI
	SendWorldWndMessage(var_59_int); // 0x108 Func
	GetCategory(var_50_int); // 0x10a ObjFunc
	SetDiarySection(var_50_int); // 0x10c Func
	var_42_bool = 0; // 0x10e MovB
	return 6; // 0x10f Return
}


func_185(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0xb9 PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0xba ObjFunc
	var_26_bool = var_22_bool == 0; // 0xbc Not
	if(var_26_bool == 0) goto Label_198; // 0xbd JumpB
	var_27_string = "Locator "; // 0xbe PushS
	var_28_int = var_27_string + var_15_string; // 0xbf Add
	var_29_string = " doesn't exist"; // 0xc0 PushS
	var_30_int = var_28_int + var_29_string; // 0xc1 Add
	Trace(var_30_int); // 0xc2 Func
	var_25_object = 0; // 0xc4 SetNull
	goto Label_200; // 0xc5 Jump
	
Label_200:
	var_13_object = var_25_object; // 0xc8 Mov
	return 8; // 0xc9 Return
	
Label_198:
	AddActorByType(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0xc6 Func
}


func_220()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0xdc PushV
	var_39_int = 295; // 0xdd PushI
	var_40_int = 2; // 0xde PushI
	var_41_int = 521493; // 0xdf PushI
	CreateDiaryEntry(var_38_object, var_39_int, var_40_int, var_41_int); // 0xe0 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0xe2 PushV
	var_43_object = var_38_object; // 0xe3 Mov
	var_44_int = 293; // 0xe4 MovI
	func_246(var_42_bool, var_43_object, var_44_int); // 0xe5 NEW_2
	return 2; // 0xe7 Return
}


func_94()
{
	var_4_int = 0; var_5_int = 0; // 0x5e PushV
	var_6_string = "b8q02"; // 0x5f PushS
	GetVariable(var_6_string, var_5_int); // 0x60 Func
	var_7_int = 1000; // 0x62 PushI
	var_8_bool = var_5_int != var_7_int; // 0x63 Neq
	if(var_8_bool == 0) goto Label_104; // 0x64 JumpB
	func_105(); // 0x66 NEW_2
	
Label_104:
	return 2; // 0x68 Return
}


