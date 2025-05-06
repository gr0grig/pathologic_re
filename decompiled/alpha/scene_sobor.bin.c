task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x5 PushV
	var_3_bool = var_0_bool == 0; // 0x6 Not
	if(var_3_bool == 0) goto Label_24; // 0x7 JumpB
	GetGameTime(var_2_float); // 0x8 Func
	var_4_int = 144; // 0xa PushI
	var_5_bool = var_2_float >= var_4_int; // 0xb GE
	if(var_5_bool == 0) goto Label_24; // 0xc JumpB
	var_0_bool = 1; // 0xd TMovB
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0xe PushV
	var_11_object = Obj(); // 0xf PushV
	func_31(var_11_object); // 0x10 Call
	var_7_object = var_11_object; // 0x11 Mov
	var_8_string = "pt_Aglaja"; // 0x13 MovS
	var_9_string = "NPC_Aglaja"; // 0x14 MovS
	var_10_string = "NPC_Danko_Aglaja.xml"; // 0x15 MovS
	func_37(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string); // 0x16 Call
	
Label_24:
	return 2; // 0x18 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "noaglaja"; // 0x1a PushS
	var_3_bool = var_1_string == var_2_string; // 0x1b Eq
	if(var_3_bool == 0) goto Label_30; // 0x1c JumpB
	var_0_bool = 1; // 0x1d TMovB
	
Label_30:
	return 0; // 0x1e Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_37(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x25 PushV
	GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x26 ObjFunc
	var_22_bool = var_18_bool == 0; // 0x28 Not
	if(var_22_bool == 0) goto Label_50; // 0x29 JumpB
	var_23_string = "Locator "; // 0x2a PushS
	var_24_int = var_23_string + var_8_string; // 0x2b Add
	var_25_string = " doesn't exist"; // 0x2c PushS
	var_26_int = var_24_int + var_25_string; // 0x2d Add
	Trace(var_26_int); // 0x2e Func
	var_21_object = 0; // 0x30 SetNull
	goto Label_52; // 0x31 Jump
	
Label_52:
	var_6_object = var_21_object; // 0x34 Mov
	return 8; // 0x35 Return
	
Label_50:
	AddActor(var_21_object, var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string); // 0x32 Func
}


func_31(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x1f PushV
	self(var_13_object); // 0x20 Func
	var_11_object = var_13_object; // 0x22 Mov
	return 2; // 0x23 Return
}


