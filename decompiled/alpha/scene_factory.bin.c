task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x5 PushV
	var_3_bool = var_0_bool == 0; // 0x6 Not
	if(var_3_bool == 0) goto Label_24; // 0x7 JumpB
	GetGameTime(var_2_float); // 0x8 Func
	var_4_int = 240; // 0xa PushI
	var_5_bool = var_2_float >= var_4_int; // 0xb GE
	if(var_5_bool == 0) goto Label_24; // 0xc JumpB
	var_0_bool = 1; // 0xd TMovB
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0xe PushV
	var_11_object = Obj(); // 0xf PushV
	func_25(var_11_object); // 0x10 Call
	var_7_object = var_11_object; // 0x11 Mov
	var_8_string = "pt_d11q03_Burah"; // 0x13 MovS
	var_9_string = "NPC_Burah"; // 0x14 MovS
	var_10_string = "d11q03_Burah.xml"; // 0x15 MovS
	func_31(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string); // 0x16 Call
	
Label_24:
	return 2; // 0x18 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_25(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x19 PushV
	self(var_13_object); // 0x1a Func
	var_11_object = var_13_object; // 0x1c Mov
	return 2; // 0x1d Return
}


func_31(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1f PushV
	GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x20 ObjFunc
	var_22_bool = var_18_bool == 0; // 0x22 Not
	if(var_22_bool == 0) goto Label_44; // 0x23 JumpB
	var_23_string = "Locator "; // 0x24 PushS
	var_24_int = var_23_string + var_8_string; // 0x25 Add
	var_25_string = " doesn't exist"; // 0x26 PushS
	var_26_int = var_24_int + var_25_string; // 0x27 Add
	Trace(var_26_int); // 0x28 Func
	var_21_object = 0; // 0x2a SetNull
	goto Label_46; // 0x2b Jump
	
Label_46:
	var_6_object = var_21_object; // 0x2e Mov
	return 8; // 0x2f Return
	
Label_44:
	AddActor(var_21_object, var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string); // 0x2c Func
}


