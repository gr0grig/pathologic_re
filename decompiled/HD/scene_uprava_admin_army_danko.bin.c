task_0_event_5(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_string = ""; // 0x4 PushV
	var_2_string = "quest_d11_02"; // 0x5 MovS
	var_3_string = "uprava_load"; // 0x6 MovS
	func_55(var_1_bool, var_2_string, var_3_string); // 0x7 NEW_2
	var_7_bool = 0; var_8_int = 0; // 0x9 PushV
	var_8_int = 11; // 0xa MovI
	func_76(var_7_bool, var_8_int); // 0xb NEW_2
	if(var_7_bool == 0) goto Label_25; // 0xd JumpB
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = ""; // 0xe PushV
	var_20_object = Obj(); // 0xf PushV
	func_31(var_20_object); // 0x10 NEW_2
	var_16_object = var_20_object; // 0x11 Mov
	var_17_string = "pt_d11_klara"; // 0x13 MovS
	var_18_string = "NPC_Klara"; // 0x14 MovS
	var_19_string = "d11_klara.xml"; // 0x15 MovS
	func_37(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string); // 0x16 NEW_2
	var_0_object = var_15_object; // 0x17 TMov
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_6(var_0_object)
{
	var_1_object = var_0_object; // 0x1a PushT
	if(var_1_object == 0) goto Label_30; // 0x1b JumpB
	RemoveActor(var_0_object); // 0x1c Func
	
Label_30:
	return 0; // 0x1e Return
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_67(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x43 PushV
	GetGameTime(var_11_float); // 0x44 Func
	var_12_int = 1; // 0x46 PushI
	var_13_int = 0; // 0x47 PushV
	var_14_int = 24; // 0x48 PushI
	var_13_int = var_11_float / var_11_float; // 0x49 Div2
	var_9_int = var_12_int + var_13_int; // 0x4a Add2
	return 2; // 0x4b Return
}


func_37(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); // 0x25 PushV
	GetLocator(var_17_string, var_27_bool, var_28_cvector, var_29_cvector); // 0x26 ObjFunc
	var_31_bool = var_27_bool == 0; // 0x28 Not
	if(var_31_bool == 0) goto Label_50; // 0x29 JumpB
	var_32_string = "Locator "; // 0x2a PushS
	var_33_int = var_32_string + var_17_string; // 0x2b Add
	var_34_string = " doesn't exist"; // 0x2c PushS
	var_35_int = var_33_int + var_34_string; // 0x2d Add
	Trace(var_35_int); // 0x2e Func
	var_30_object = 0; // 0x30 SetNull
	goto Label_52; // 0x31 Jump
	
Label_52:
	var_15_object = var_30_object; // 0x34 Mov
	return 8; // 0x35 Return
	
Label_50:
	AddActor(var_30_object, var_18_string, var_16_object, var_28_cvector, var_29_cvector, var_19_string); // 0x32 Func
}


func_76(var_7_bool, var_8_int)
{
	var_9_int = 0; // 0x4d PushV
	func_67(var_9_int); // 0x4e NEW_2
	var_7_bool = var_9_int == var_8_int; // 0x50 Eq2
	return 0; // 0x51 Return
}


func_55(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x37 PushV
	FindActor(var_5_object, var_2_string); // 0x38 Func
	var_6_bool = var_5_object == 0; // 0x3a NullEq
	if(var_6_bool == 0) goto Label_62; // 0x3b JumpB
	var_1_bool = 0; // 0x3c MovB
	return 2; // 0x3d Return
	
Label_62:
	Trigger(var_5_object, var_3_string); // 0x3e Func
	var_1_bool = 1; // 0x40 MovB
	return 2; // 0x41 Return
}


func_31(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x1f PushV
	self(var_22_object); // 0x20 Func
	var_20_object = var_22_object; // 0x22 Mov
	return 2; // 0x23 Return
}


