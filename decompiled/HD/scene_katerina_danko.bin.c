task_0_event_5(var_0_object)
{
	var_1_bool = 0; var_2_int = 0; // 0x4 PushV
	var_2_int = 3; // 0x5 MovI
	func_59(var_1_bool, var_2_int); // 0x6 NEW_2
	if(var_1_bool == 0) goto Label_20; // 0x8 JumpB
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0x9 PushV
	var_14_object = Obj(); // 0xa PushV
	func_26(var_14_object); // 0xb NEW_2
	var_10_object = var_14_object; // 0xc Mov
	var_11_string = "pt_klara"; // 0xe MovS
	var_12_string = "NPC_Klara"; // 0xf MovS
	var_13_string = "d3_klara.xml"; // 0x10 MovS
	func_32(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x11 NEW_2
	var_0_object = var_9_object; // 0x12 TMov
	
Label_20:
	return 0; // 0x14 Return
}


task_0_event_6(var_0_object)
{
	var_1_object = var_0_object; // 0x15 PushT
	if(var_1_object == 0) goto Label_25; // 0x16 JumpB
	RemoveActor(var_0_object); // 0x17 Func
	
Label_25:
	return 0; // 0x19 Return
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_32(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); // 0x20 PushV
	GetLocator(var_11_string, var_21_bool, var_22_cvector, var_23_cvector); // 0x21 ObjFunc
	var_25_bool = var_21_bool == 0; // 0x23 Not
	if(var_25_bool == 0) goto Label_45; // 0x24 JumpB
	var_26_string = "Locator "; // 0x25 PushS
	var_27_int = var_26_string + var_11_string; // 0x26 Add
	var_28_string = " doesn't exist"; // 0x27 PushS
	var_29_int = var_27_int + var_28_string; // 0x28 Add
	Trace(var_29_int); // 0x29 Func
	var_24_object = 0; // 0x2b SetNull
	goto Label_47; // 0x2c Jump
	
Label_47:
	var_9_object = var_24_object; // 0x2f Mov
	return 8; // 0x30 Return
	
Label_45:
	AddActor(var_24_object, var_12_string, var_10_object, var_22_cvector, var_23_cvector, var_13_string); // 0x2d Func
}


func_26(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x1a PushV
	self(var_16_object); // 0x1b Func
	var_14_object = var_16_object; // 0x1d Mov
	return 2; // 0x1e Return
}


func_59(var_1_bool, var_2_int)
{
	var_3_int = 0; // 0x3c PushV
	func_50(var_3_int); // 0x3d NEW_2
	var_1_bool = var_3_int == var_2_int; // 0x3f Eq2
	return 0; // 0x40 Return
}


func_50(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x32 PushV
	GetGameTime(var_5_float); // 0x33 Func
	var_6_int = 1; // 0x35 PushI
	var_7_int = 0; // 0x36 PushV
	var_8_int = 24; // 0x37 PushI
	var_7_int = var_5_float / var_5_float; // 0x38 Div2
	var_3_int = var_6_int + var_7_int; // 0x39 Add2
	return 2; // 0x3a Return
}


