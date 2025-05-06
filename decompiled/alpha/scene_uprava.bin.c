task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x5 PushV
	var_3_bool = 0; var_4_string = ""; var_5_string = ""; // 0x6 PushV
	var_4_string = "quest_d11_02"; // 0x7 MovS
	var_5_string = "uprava_load"; // 0x8 MovS
	func_54(var_3_bool, var_4_string, var_5_string); // 0x9 Call
	var_9_bool = var_0_bool == 0; // 0xb Not
	if(var_9_bool == 0) goto Label_29; // 0xc JumpB
	GetGameTime(var_2_float); // 0xd Func
	var_10_int = 192; // 0xf PushI
	var_11_bool = var_2_float >= var_10_int; // 0x10 GE
	if(var_11_bool == 0) goto Label_29; // 0x11 JumpB
	var_0_bool = 1; // 0x12 TMovB
	var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; var_16_string = ""; // 0x13 PushV
	var_17_object = Obj(); // 0x14 PushV
	func_30(var_17_object); // 0x15 Call
	var_13_object = var_17_object; // 0x16 Mov
	var_14_string = "pt_Block"; // 0x18 MovS
	var_15_string = "NPC_Block"; // 0x19 MovS
	var_16_string = "NPC_Danko_Block.xml"; // 0x1a MovS
	func_36(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string); // 0x1b Call
	
Label_29:
	return 2; // 0x1d Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_36(var_12_object, var_13_object, var_14_string, var_15_string, var_16_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); // 0x24 PushV
	GetLocator(var_14_string, var_24_bool, var_25_cvector, var_26_cvector); // 0x25 ObjFunc
	var_28_bool = var_24_bool == 0; // 0x27 Not
	if(var_28_bool == 0) goto Label_49; // 0x28 JumpB
	var_29_string = "Locator "; // 0x29 PushS
	var_30_int = var_29_string + var_14_string; // 0x2a Add
	var_31_string = " doesn't exist"; // 0x2b PushS
	var_32_int = var_30_int + var_31_string; // 0x2c Add
	Trace(var_32_int); // 0x2d Func
	var_27_object = 0; // 0x2f SetNull
	goto Label_51; // 0x30 Jump
	
Label_51:
	var_12_object = var_27_object; // 0x33 Mov
	return 8; // 0x34 Return
	
Label_49:
	AddActor(var_27_object, var_15_string, var_13_object, var_25_cvector, var_26_cvector, var_16_string); // 0x31 Func
}


func_54(var_3_bool, var_4_string, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x36 PushV
	FindActor(var_7_object, var_4_string); // 0x37 Func
	var_8_bool = var_7_object == 0; // 0x39 NullEq
	if(var_8_bool == 0) goto Label_61; // 0x3a JumpB
	var_3_bool = 0; // 0x3b MovB
	return 2; // 0x3c Return
	
Label_61:
	Trigger(var_7_object, var_5_string); // 0x3d Func
	var_3_bool = 1; // 0x3f MovB
	return 2; // 0x40 Return
}


func_30(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x1e PushV
	self(var_19_object); // 0x1f Func
	var_17_object = var_19_object; // 0x21 Mov
	return 2; // 0x22 Return
}


