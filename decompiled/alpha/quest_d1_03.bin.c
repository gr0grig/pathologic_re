task_0_event_26(var_0_object, var_1_string)
{
	var_2_int = 0; var_3_int = 0; // 0x1c PushV
	Trace(var_1_string); // 0x1d Func
	var_4_string = "butcher_fail"; // 0x1f PushS
	var_5_bool = var_1_string == var_4_string; // 0x20 Eq
	if(var_5_bool == 0) goto Label_41; // 0x21 JumpB
	func_226(); // 0x23 Call
	func_88(); // 0x26 Call
	goto Label_79; // 0x28 Jump
	
Label_79:
	return 2; // 0x4f Return
	
Label_41:
	var_38_string = "butcher_battle"; // 0x29 PushS
	var_39_bool = var_1_string == var_38_string; // 0x2a Eq
	if(var_39_bool == 0) goto Label_49; // 0x2b JumpB
	var_40_string = "d1q03"; // 0x2c PushS
	var_41_int = 2; // 0x2d PushI
	SetVariable(var_40_string, var_41_int); // 0x2e Func
	goto Label_79; // 0x30 Jump
	
Label_49:
	var_42_string = "butcher_death"; // 0x31 PushS
	var_43_bool = var_1_string == var_42_string; // 0x32 Eq
	if(var_43_bool == 0) goto Label_71; // 0x33 JumpB
	var_44_string = "d1q03IsKapella"; // 0x34 PushS
	GetVariable(var_44_string, var_3_int); // 0x35 Func
	var_45_int = var_3_int; // 0x37 Push
	if(var_45_int == 0) goto Label_64; // 0x38 JumpB
	func_194(); // 0x3a Call
	func_88(); // 0x3d Call
	goto Label_70; // 0x3f Jump
	
Label_70:
	goto Label_79; // 0x46 Jump
	
Label_64:
	func_210(); // 0x41 Call
	func_80(); // 0x44 Call
	
Label_71:
	var_66_string = "kapella_finish"; // 0x47 PushS
	var_67_bool = var_1_string == var_66_string; // 0x48 Eq
	if(var_67_bool == 0) goto Label_79; // 0x49 JumpB
	RemoveActor(var_0_object); // 0x4a Func
	func_80(); // 0x4d Call
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_96(); // 0x8f Call
	return 0; // 0x91 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_bool = 0; var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); // 0x1 PushV
	var_9_string = "d1q03"; // 0x2 PushS
	var_10_int = 1; // 0x3 PushI
	SetVariable(var_9_string, var_10_int); // 0x4 Func
	var_11_string = "dt_house_1_04"; // 0x6 PushS
	GetSceneByName(var_5_object, var_11_string); // 0x7 Func
	var_12_string = "pt_butcher"; // 0x9 PushS
	GetLocator(var_12_string, var_6_bool, var_7_cvector, var_8_cvector); // 0xa ObjFunc
	var_13_bool = var_6_bool == 0; // 0xc Not
	if(var_13_bool == 0) goto Label_18; // 0xd JumpB
	var_14_string = "Locator doesn't exist for qd1_03_butcher"; // 0xe PushS
	Trace(var_14_string); // 0xf Func
	goto Label_22; // 0x11 Jump
	
Label_22:
	var_15_int = 0; // 0x16 PushV
	var_15_int = 1; // 0x17 MovI
	func_122(var_15_int); // 0x18 Call
	return 8; // 0x1a Return
	
Label_18:
	var_29_string = "pers_butcher"; // 0x12 PushS
	var_30_string = "butcher_qd1_03.xml"; // 0x13 PushS
	AddActor(var_0_object, var_29_string, var_5_object, var_7_cvector, var_8_cvector, var_30_string); // 0x14 Func
}


func_0()
{
	return 0; // 0x0 Return
}


func_96()
{
	var_3_int = 0; var_4_int = 0; // 0x60 PushV
	var_5_string = "d1q03"; // 0x61 PushS
	GetVariable(var_5_string, var_4_int); // 0x62 Func
	var_6_int = 1000; // 0x64 PushI
	var_7_bool = var_4_int != var_6_int; // 0x65 Neq
	if(var_7_bool == 0) goto Label_106; // 0x66 JumpB
	func_88(); // 0x68 Call
	
Label_106:
	return 2; // 0x6a Return
}


func_194()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xc2 PushV
	var_48_string = "Adding diary entry"; // 0xc3 PushS
	Trace(var_48_string); // 0xc4 Func
	var_49_int = 39; // 0xc6 PushI
	var_50_int = 2; // 0xc7 PushI
	var_51_int = 12121; // 0xc8 PushI
	CreateDiaryEntry(var_47_object, var_49_int, var_50_int, var_51_int); // 0xc9 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xcb PushV
	var_53_object = var_47_object; // 0xcc Mov
	var_54_int = 37; // 0xcd MovI
	func_165(var_52_bool, var_53_object, var_54_int); // 0xce Call
	return 2; // 0xd0 Return
}


func_226()
{
	var_6_object = Obj(); var_7_object = Obj(); // 0xe2 PushV
	var_8_string = "Adding diary entry"; // 0xe3 PushS
	Trace(var_8_string); // 0xe4 Func
	var_9_int = 42; // 0xe6 PushI
	var_10_int = 2; // 0xe7 PushI
	var_11_int = 12124; // 0xe8 PushI
	CreateDiaryEntry(var_7_object, var_9_int, var_10_int, var_11_int); // 0xe9 Func
	var_12_bool = 0; var_13_object = Obj(); var_14_int = 0; // 0xeb PushV
	var_13_object = var_7_object; // 0xec Mov
	var_14_int = 37; // 0xed MovI
	func_165(var_12_bool, var_13_object, var_14_int); // 0xee Call
	return 2; // 0xf0 Return
}


func_165(var_12_bool, var_13_object, var_14_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; // 0xa5 PushV
	var_21_object = Obj(); // 0xa6 PushV
	func_152(var_21_object); // 0xa7 Call
	var_18_object = var_21_object; // 0xa8 Mov
	Find(var_14_int, var_19_object); // 0xaa ObjFunc
	var_26_bool = var_19_object == 0; // 0xac Not
	if(var_26_bool == 0) goto Label_180; // 0xad JumpB
	var_27_string = "Can't find diary parent with id: "; // 0xae PushS
	var_28_int = var_27_string + var_14_int; // 0xaf Add
	Trace(var_28_int); // 0xb0 Func
	var_12_bool = 0; // 0xb2 MovB
	return 6; // 0xb3 Return
	
Label_180:
	AddChild(var_13_object); // 0xb4 ObjFunc
	var_29_string = "player_diary"; // 0xb6 PushS
	var_30_int = 1; // 0xb7 PushI
	SetVariable(var_29_string, var_30_int); // 0xb8 Func
	GetCategory(var_20_int); // 0xba ObjFunc
	SetDiarySection(var_20_int); // 0xbc Func
	var_12_bool = 0; // 0xbe MovB
	return 6; // 0xbf Return
}


func_107(var_0_object)
{
	EventDisable(26); // 0x6b EventDisable
	func_0(); // 0x6d Call
	var_21_bool = var_0_object != 0; // 0x6f NullNeq
	if(var_21_bool == 0) goto Label_116; // 0x70 JumpB
	var_22_string = "cleanup"; // 0x71 PushS
	Trigger(var_0_object, var_22_string); // 0x72 Func
	
Label_116:
	var_23_object = Obj(); // 0x74 PushV
	func_146(var_23_object); // 0x75 Call
	RemoveActor(var_23_object); // 0x77 Func
	return 0; // 0x79 Return
}


func_80()
{
	var_64_string = "d1q03"; // 0x50 PushS
	var_65_int = 1000; // 0x51 PushI
	SetVariable(var_64_string, var_65_int); // 0x52 Func
	func_107(var_3_int); // 0x55 Call
	return 0; // 0x57 Return
}


func_210()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0xd2 PushV
	var_57_string = "Adding diary entry"; // 0xd3 PushS
	Trace(var_57_string); // 0xd4 Func
	var_58_int = 40; // 0xd6 PushI
	var_59_int = 2; // 0xd7 PushI
	var_60_int = 12122; // 0xd8 PushI
	CreateDiaryEntry(var_56_object, var_58_int, var_59_int, var_60_int); // 0xd9 Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0xdb PushV
	var_62_object = var_56_object; // 0xdc Mov
	var_63_int = 37; // 0xdd MovI
	func_165(var_61_bool, var_62_object, var_63_int); // 0xde Call
	return 2; // 0xe0 Return
}


func_146(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x92 PushV
	self(var_25_object); // 0x93 Func
	var_23_object = var_25_object; // 0x95 Mov
	return 2; // 0x96 Return
}


func_88()
{
	var_8_string = "d1q03"; // 0x58 PushS
	var_9_int = -1; // 0x59 PushI
	SetVariable(var_8_string, var_9_int); // 0x5a Func
	func_107(var_4_int); // 0x5d Call
	return 0; // 0x5f Return
}


func_122(var_15_int)
{
	var_16_float = 0; var_17_float = 0; // 0x7a PushV
	GetGameTime(var_17_float); // 0x7b Func
	var_18_int = 24; // 0x7d PushI
	var_19_float = var_15_int * var_18_int; // 0x7e Mult
	var_20_bool = var_17_float >= var_19_float; // 0x7f GE
	if(var_20_bool == 0) goto Label_133; // 0x80 JumpB
	func_107(var_17_float); // 0x82 Call
	goto Label_140; // 0x84 Jump
	
Label_140:
	return 2; // 0x8c Return
	
Label_133:
	var_26_int = 0; // 0x85 PushI
	var_27_int = 24; // 0x86 PushI
	var_28_float = var_15_int * var_27_int; // 0x87 Mult
	SetTimeEvent(var_26_int, var_28_float); // 0x88 Func
	Hold(); // 0x8a Func
}


func_152(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x98 PushV
	GetDiaryRoot(var_23_object); // 0x99 Func
	var_24_bool = var_23_object == 0; // 0x9b Not
	if(var_24_bool == 0) goto Label_162; // 0x9c JumpB
	var_25_string = "Can't retrieve diary root"; // 0x9d PushS
	Trace(var_25_string); // 0x9e Func
	var_21_object = 0; // 0xa0 MovB
	return 2; // 0xa1 Return
	
Label_162:
	var_21_object = var_23_object; // 0xa2 Mov
	return 2; // 0xa3 Return
}


