task_0_event_5(var_0_bool, var_1_object)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x5 PushV
	var_6_bool = var_0_bool == 0; // 0x6 Not
	if(var_6_bool == 0) goto Label_33; // 0x7 JumpB
	GetGameTime(var_4_float); // 0x8 Func
	var_7_bool = 0; // 0xa PushV
	var_7_bool = 0; // 0xb MovB
	var_8_int = 240; // 0xc PushI
	var_9_bool = var_4_float >= var_8_int; // 0xd GE
	if(var_9_bool == 0) goto Label_19; // 0xe JumpB
	var_10_int = 264; // 0xf PushI
	var_11_bool = var_4_float < var_10_int; // 0x10 LT
	if(var_11_bool == 0) goto Label_19; // 0x11 JumpB
	var_7_bool = 1; // 0x12 MovB
	
Label_19:
	if(var_7_bool == 0) goto Label_32; // 0x13 JumpB
	var_0_bool = 1; // 0x14 TMovB
	var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_string = ""; // 0x15 PushV
	var_17_object = Obj(); // 0x16 PushV
	func_44(var_17_object); // 0x17 NEW_2
	var_13_object = var_17_object; // 0x18 Mov
	var_14_string = "pt_d11q03_Burah"; // 0x1a MovS
	var_15_string = "NPC_Burah"; // 0x1b MovS
	var_16_string = "d11q03_Burah.xml"; // 0x1c MovS
	func_50(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string); // 0x1d NEW_2
	var_1_object = var_12_object; // 0x1e TMov
	
Label_32:
	goto Label_43; // 0x20 Jump
	
Label_43:
	return 4; // 0x2b Return
	
Label_33:
	GetGameTime(var_5_float); // 0x21 Func
	var_33_int = 264; // 0x23 PushI
	var_34_bool = var_5_float >= var_33_int; // 0x24 GE
	if(var_34_bool == 0) goto Label_43; // 0x25 JumpB
	var_35_object = var_1_object; // 0x26 PushT
	if(var_35_object == 0) goto Label_42; // 0x27 JumpB
	RemoveActor(var_5_float); // 0x28 Func
	
Label_42:
	var_0_bool = 0; // 0x2a TMovB
}


main(var_0_bool, var_1_object)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_50(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); // 0x32 PushV
	GetLocator(var_14_string, var_24_bool, var_25_cvector, var_26_cvector); // 0x33 ObjFunc
	var_28_bool = var_24_bool == 0; // 0x35 Not
	if(var_28_bool == 0) goto Label_63; // 0x36 JumpB
	var_29_string = "Locator "; // 0x37 PushS
	var_30_int = var_29_string + var_14_string; // 0x38 Add
	var_31_string = " doesn't exist"; // 0x39 PushS
	var_32_int = var_30_int + var_31_string; // 0x3a Add
	Trace(var_32_int); // 0x3b Func
	var_27_object = 0; // 0x3d SetNull
	goto Label_65; // 0x3e Jump
	
Label_65:
	var_12_object = var_27_object; // 0x41 Mov
	return 8; // 0x42 Return
	
Label_63:
	AddActor(var_27_object, var_15_string, var_13_object, var_25_cvector, var_26_cvector, var_16_string); // 0x3f Func
}


func_44(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x2c PushV
	self(var_19_object); // 0x2d Func
	var_17_object = var_19_object; // 0x2f Mov
	return 2; // 0x30 Return
}


