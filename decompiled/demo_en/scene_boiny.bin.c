task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0x8 PushV
	var_11_int = 0; // 0x9 MovI
	
Label_10:
	var_21_string = "pt_spawn"; // 0xa PushS
	var_22_int = 1; // 0xb PushI
	var_23_int = var_11_int + var_22_int; // 0xc Add
	var_24_int = var_21_string + var_23_int; // 0xd Add
	GetLocator(var_24_int, var_12_bool); // 0xe Func
	var_25_bool = var_12_bool == 0; // 0x10 Not
	if(var_25_bool == 0) goto Label_19; // 0x11 JumpB
	goto Label_22; // 0x12 Jump
	
Label_22:
	var_26_int = 18; // 0x16 PushI
	var_27_bool = var_11_int < var_26_int; // 0x17 LT
	if(var_27_bool == 0) goto Label_29; // 0x18 JumpB
	var_28_string = "Not enough spawn points"; // 0x19 PushS
	Trace(var_28_string); // 0x1a Func
	return 20; // 0x1c Return
	
Label_29:
	CreateIntVector(var_13_object); // 0x1d Func
	var_14_int = 1; // 0x1f MovI
	
Label_32:
	var_29_bool = var_14_int <= var_11_int; // 0x20 LE
	if(var_29_bool == 0) goto Label_39; // 0x21 JumpB
	add(var_14_int); // 0x22 ObjFunc
	var_30_int = 1; // 0x24 PushI
	var_14_int = var_14_int + var_30_int; // 0x25 Add2
	goto Label_32; // 0x26 Jump
	
Label_39:
	var_15_int = 0; // 0x27 MovI
	
Label_40:
	var_31_int = 12; // 0x28 PushI
	var_32_bool = var_15_int < var_31_int; // 0x29 LT
	if(var_32_bool == 0) goto Label_67; // 0x2a JumpB
	irand(var_16_int, var_11_int); // 0x2b Func
	get(var_17_int, var_16_int); // 0x2d ObjFunc
	remove(var_16_int); // 0x2f ObjFunc
	var_33_int = -1; // 0x31 PushI
	var_11_int = var_11_int + var_33_int; // 0x32 Add2
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x33 PushV
	var_39_object = Obj(); // 0x34 PushV
	func_102(var_39_object); // 0x35 NEW_2
	var_35_object = var_39_object; // 0x36 Mov
	var_42_string = "pt_spawn"; // 0x38 PushS
	var_36_string = var_42_string + var_17_int; // 0x39 Add2
	var_37_string = "pers_butcher"; // 0x3a MovS
	var_38_string = "boiny_butcher.xml"; // 0x3b MovS
	func_114(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x3c NEW_2
	add(var_34_object); // 0x3e TObjFunc
	var_56_int = 1; // 0x40 PushI
	var_15_int = var_15_int + var_56_int; // 0x41 Add2
	goto Label_40; // 0x42 Jump
	
Label_67:
	var_18_int = 0; // 0x43 MovI
	
Label_68:
	var_57_int = 6; // 0x44 PushI
	var_58_bool = var_18_int < var_57_int; // 0x45 LT
	if(var_58_bool == 0) goto Label_95; // 0x46 JumpB
	irand(var_19_int, var_11_int); // 0x47 Func
	get(var_20_int, var_19_int); // 0x49 ObjFunc
	remove(var_19_int); // 0x4b ObjFunc
	var_59_int = -1; // 0x4d PushI
	var_11_int = var_11_int + var_59_int; // 0x4e Add2
	var_60_object = Obj(); var_61_object = Obj(); var_62_string = ""; var_63_string = ""; var_64_string = ""; // 0x4f PushV
	var_65_object = Obj(); // 0x50 PushV
	func_102(var_65_object); // 0x51 NEW_2
	var_61_object = var_65_object; // 0x52 Mov
	var_66_string = "pt_spawn"; // 0x54 PushS
	var_62_string = var_66_string + var_20_int; // 0x55 Add2
	var_63_string = "pers_morlok"; // 0x56 MovS
	var_64_string = "boiny_morlok.xml"; // 0x57 MovS
	func_114(var_60_object, var_61_object, var_62_string, var_63_string, var_64_string); // 0x58 NEW_2
	add(var_60_object); // 0x5a TObjFunc
	var_67_int = 1; // 0x5c PushI
	var_18_int = var_18_int + var_67_int; // 0x5d Add2
	goto Label_68; // 0x5e Jump
	
Label_95:
	return 20; // 0x5f Return
	
Label_19:
	var_68_int = 1; // 0x13 PushI
	var_11_int = var_11_int + var_68_int; // 0x14 Add2
	goto Label_10; // 0x15 Jump
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj(); // 0x61 PushV
	var_1_object = var_0_object; // 0x62 MovT
	func_132(var_1_object); // 0x63 NEW_2
	return 0; // 0x65 Return
}


main(var_0_object)
{
	var_1_object = Obj(); // 0x0 PushV
	func_108(var_1_object); // 0x1 NEW_2
	var_0_object = var_1_object; // 0x2 TMov
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_132(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0x84 PushV
	var_8_object = var_1_object; // 0x85 Push
	if(var_8_object == 0) goto Label_152; // 0x86 JumpB
	size(var_5_int); // 0x87 ObjFunc
	var_6_int = 0; // 0x89 MovI
	
Label_138:
	var_9_bool = var_6_int < var_5_int; // 0x8a LT
	if(var_9_bool == 0) goto Label_150; // 0x8b JumpB
	get(var_7_object, var_6_int); // 0x8c ObjFunc
	var_10_object = var_7_object; // 0x8e Push
	if(var_10_object == 0) goto Label_146; // 0x8f JumpB
	RemoveActor(var_7_object); // 0x90 Func
	
Label_146:
	var_7_object = 0; // 0x92 SetNull
	var_11_int = 1; // 0x93 PushI
	var_6_int = var_6_int + var_11_int; // 0x94 Add2
	goto Label_138; // 0x95 Jump
	
Label_150:
	clear(); // 0x96 ObjFunc
	
Label_152:
	return 6; // 0x98 Return
}


func_114(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x72 PushV
	GetLocator(var_36_string, var_47_bool, var_48_cvector, var_49_cvector); // 0x73 ObjFunc
	var_51_bool = var_47_bool == 0; // 0x75 Not
	if(var_51_bool == 0) goto Label_127; // 0x76 JumpB
	var_52_string = "Locator "; // 0x77 PushS
	var_53_int = var_52_string + var_36_string; // 0x78 Add
	var_54_string = " doesn't exist"; // 0x79 PushS
	var_55_int = var_53_int + var_54_string; // 0x7a Add
	Trace(var_55_int); // 0x7b Func
	var_50_object = 0; // 0x7d SetNull
	goto Label_129; // 0x7e Jump
	
Label_129:
	var_34_object = var_50_object; // 0x81 Mov
	return 8; // 0x82 Return
	
Label_127:
	AddActor(var_50_object, var_37_string, var_35_object, var_48_cvector, var_49_cvector, var_38_string); // 0x7f Func
}


func_108(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x6c PushV
	CreateObjectVector(var_3_object); // 0x6d Func
	var_1_object = var_3_object; // 0x6f Mov
	return 2; // 0x70 Return
}


func_102(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x66 PushV
	self(var_41_object); // 0x67 Func
	var_39_object = var_41_object; // 0x69 Mov
	return 2; // 0x6a Return
}


