task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_bool = 0; var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0x8 PushV
	var_8_int = 0; // 0x9 MovI
	
Label_10:
	var_15_string = "pt_spawn"; // 0xa PushS
	var_16_int = 1; // 0xb PushI
	var_17_int = var_8_int + var_16_int; // 0xc Add
	var_18_int = var_15_string + var_17_int; // 0xd Add
	GetLocator(var_18_int, var_9_bool); // 0xe Func
	var_19_bool = var_9_bool == 0; // 0x10 Not
	if(var_19_bool == 0) goto Label_19; // 0x11 JumpB
	goto Label_22; // 0x12 Jump
	
Label_22:
	var_20_int = 2; // 0x16 PushI
	var_21_bool = var_8_int < var_20_int; // 0x17 LT
	if(var_21_bool == 0) goto Label_29; // 0x18 JumpB
	var_22_string = "Not enough spawn points"; // 0x19 PushS
	Trace(var_22_string); // 0x1a Func
	goto Label_68; // 0x1c Jump
	
Label_68:
	return 14; // 0x44 Return
	
Label_29:
	CreateIntVector(var_10_object); // 0x1d Func
	var_11_int = 1; // 0x1f MovI
	
Label_32:
	var_23_bool = var_11_int <= var_8_int; // 0x20 LE
	if(var_23_bool == 0) goto Label_39; // 0x21 JumpB
	add(var_11_int); // 0x22 ObjFunc
	var_24_int = 1; // 0x24 PushI
	var_11_int = var_11_int + var_24_int; // 0x25 Add2
	goto Label_32; // 0x26 Jump
	
Label_39:
	var_12_int = 0; // 0x27 MovI
	
Label_40:
	var_25_int = 2; // 0x28 PushI
	var_26_bool = var_12_int < var_25_int; // 0x29 LT
	if(var_26_bool == 0) goto Label_67; // 0x2a JumpB
	irand(var_13_int, var_8_int); // 0x2b Func
	get(var_14_int, var_13_int); // 0x2d ObjFunc
	remove(var_13_int); // 0x2f ObjFunc
	var_27_int = -1; // 0x31 PushI
	var_8_int = var_8_int + var_27_int; // 0x32 Add2
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x33 PushV
	var_33_object = Obj(); // 0x34 PushV
	func_74(var_33_object); // 0x35 NEW_2
	var_29_object = var_33_object; // 0x36 Mov
	var_36_string = "pt_spawn"; // 0x38 PushS
	var_30_string = var_36_string + var_14_int; // 0x39 Add2
	var_31_string = "pers_butcher"; // 0x3a MovS
	var_32_string = "termitnik_butcher.xml"; // 0x3b MovS
	func_86(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x3c NEW_2
	add(var_28_object); // 0x3e TObjFunc
	var_50_int = 1; // 0x40 PushI
	var_12_int = var_12_int + var_50_int; // 0x41 Add2
	goto Label_40; // 0x42 Jump
	
Label_67:
	var_10_object = 0; // 0x43 SetNull
	
Label_19:
	var_51_int = 1; // 0x13 PushI
	var_8_int = var_8_int + var_51_int; // 0x14 Add2
	goto Label_10; // 0x15 Jump
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj(); // 0x45 PushV
	var_1_object = var_0_object; // 0x46 MovT
	func_104(var_1_object); // 0x47 NEW_2
	return 0; // 0x49 Return
}


main(var_0_object)
{
	var_1_object = Obj(); // 0x0 PushV
	func_80(var_1_object); // 0x1 NEW_2
	var_0_object = var_1_object; // 0x2 TMov
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_80(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x50 PushV
	CreateObjectVector(var_3_object); // 0x51 Func
	var_1_object = var_3_object; // 0x53 Mov
	return 2; // 0x54 Return
}


func_74(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x4a PushV
	self(var_35_object); // 0x4b Func
	var_33_object = var_35_object; // 0x4d Mov
	return 2; // 0x4e Return
}


func_104(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0x68 PushV
	var_8_object = var_1_object; // 0x69 Push
	if(var_8_object == 0) goto Label_124; // 0x6a JumpB
	size(var_5_int); // 0x6b ObjFunc
	var_6_int = 0; // 0x6d MovI
	
Label_110:
	var_9_bool = var_6_int < var_5_int; // 0x6e LT
	if(var_9_bool == 0) goto Label_122; // 0x6f JumpB
	get(var_7_object, var_6_int); // 0x70 ObjFunc
	var_10_object = var_7_object; // 0x72 Push
	if(var_10_object == 0) goto Label_118; // 0x73 JumpB
	RemoveActor(var_7_object); // 0x74 Func
	
Label_118:
	var_7_object = 0; // 0x76 SetNull
	var_11_int = 1; // 0x77 PushI
	var_6_int = var_6_int + var_11_int; // 0x78 Add2
	goto Label_110; // 0x79 Jump
	
Label_122:
	clear(); // 0x7a ObjFunc
	
Label_124:
	return 6; // 0x7c Return
}


func_86(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x56 PushV
	GetLocator(var_30_string, var_41_bool, var_42_cvector, var_43_cvector); // 0x57 ObjFunc
	var_45_bool = var_41_bool == 0; // 0x59 Not
	if(var_45_bool == 0) goto Label_99; // 0x5a JumpB
	var_46_string = "Locator "; // 0x5b PushS
	var_47_int = var_46_string + var_30_string; // 0x5c Add
	var_48_string = " doesn't exist"; // 0x5d PushS
	var_49_int = var_47_int + var_48_string; // 0x5e Add
	Trace(var_49_int); // 0x5f Func
	var_44_object = 0; // 0x61 SetNull
	goto Label_101; // 0x62 Jump
	
Label_101:
	var_28_object = var_44_object; // 0x65 Mov
	return 8; // 0x66 Return
	
Label_99:
	AddActor(var_44_object, var_31_string, var_29_object, var_42_cvector, var_43_cvector, var_32_string); // 0x63 Func
}


