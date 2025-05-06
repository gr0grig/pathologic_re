task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = var_0_bool; // 0x6 PushT
	if(var_4_bool == 0) goto Label_19; // 0x7 JumpB
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = ""; // 0x8 PushV
	var_10_object = Obj(); // 0x9 PushV
	func_63(var_10_object); // 0xa NEW_2
	var_6_object = var_10_object; // 0xb Mov
	var_7_string = "pt_Danko"; // 0xd MovS
	var_8_string = "NPC_Bakalavr"; // 0xe MovS
	var_9_string = "NPC_Burah_Danko.xml"; // 0xf MovS
	func_69(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string); // 0x10 NEW_2
	var_2_object = var_5_object; // 0x11 TMov
	
Label_19:
	var_26_bool = var_1_bool; // 0x13 PushT
	if(var_26_bool == 0) goto Label_32; // 0x14 JumpB
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x15 PushV
	var_32_object = Obj(); // 0x16 PushV
	func_63(var_32_object); // 0x17 NEW_2
	var_28_object = var_32_object; // 0x18 Mov
	var_29_string = "pt_eva"; // 0x1a MovS
	var_30_string = "NPC_Eva"; // 0x1b MovS
	var_31_string = "NPC_Burah_Eva.xml"; // 0x1c MovS
	func_69(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x1d NEW_2
	var_3_object = var_27_object; // 0x1e TMov
	
Label_32:
	return 0; // 0x20 Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_object = var_2_object; // 0x21 PushT
	if(var_4_object == 0) goto Label_37; // 0x22 JumpB
	RemoveActor(var_2_object); // 0x23 Func
	
Label_37:
	var_5_object = var_3_object; // 0x25 PushT
	if(var_5_object == 0) goto Label_41; // 0x26 JumpB
	RemoveActor(var_1_bool); // 0x27 Func
	
Label_41:
	return 0; // 0x29 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string)
{
	var_5_string = "nodanko"; // 0x2b PushS
	var_6_bool = var_4_string == var_5_string; // 0x2c Eq
	if(var_6_bool == 0) goto Label_48; // 0x2d JumpB
	var_0_bool = 0; // 0x2e TMovB
	goto Label_62; // 0x2f Jump
	
Label_62:
	return 0; // 0x3e Return
	
Label_48:
	var_7_string = "danko"; // 0x30 PushS
	var_8_bool = var_4_string == var_7_string; // 0x31 Eq
	if(var_8_bool == 0) goto Label_53; // 0x32 JumpB
	var_0_bool = 1; // 0x33 TMovB
	goto Label_62; // 0x34 Jump
	
Label_53:
	var_9_string = "noeva"; // 0x35 PushS
	var_10_bool = var_4_string == var_9_string; // 0x36 Eq
	if(var_10_bool == 0) goto Label_58; // 0x37 JumpB
	var_1_bool = 0; // 0x38 TMovB
	goto Label_62; // 0x39 Jump
	
Label_58:
	var_11_string = "eva"; // 0x3a PushS
	var_12_bool = var_4_string == var_11_string; // 0x3b Eq
	if(var_12_bool == 0) goto Label_62; // 0x3c JumpB
	var_1_bool = 1; // 0x3d TMovB
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_0_bool = 1; // 0x0 TMovB
	var_1_bool = 1; // 0x1 TMovB
	
Label_2:
	Hold(); // 0x2 Func
	goto Label_2; // 0x4 Jump
}


func_69(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x45 PushV
	GetLocator(var_7_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x46 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x48 Not
	if(var_21_bool == 0) goto Label_82; // 0x49 JumpB
	var_22_string = "Locator "; // 0x4a PushS
	var_23_int = var_22_string + var_7_string; // 0x4b Add
	var_24_string = " doesn't exist"; // 0x4c PushS
	var_25_int = var_23_int + var_24_string; // 0x4d Add
	Trace(var_25_int); // 0x4e Func
	var_20_object = 0; // 0x50 SetNull
	goto Label_84; // 0x51 Jump
	
Label_84:
	var_5_object = var_20_object; // 0x54 Mov
	return 8; // 0x55 Return
	
Label_82:
	AddActor(var_20_object, var_8_string, var_6_object, var_18_cvector, var_19_cvector, var_9_string); // 0x52 Func
}


func_63(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x3f PushV
	self(var_12_object); // 0x40 Func
	var_10_object = var_12_object; // 0x42 Mov
	return 2; // 0x43 Return
}


