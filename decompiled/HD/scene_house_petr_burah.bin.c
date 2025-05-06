task_0_event_5(var_0_bool, var_1_object)
{
	var_2_bool = var_0_bool; // 0x5 PushT
	if(var_2_bool == 0) goto Label_18; // 0x6 JumpB
	var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; // 0x7 PushV
	var_8_object = Obj(); // 0x8 PushV
	func_35(var_8_object); // 0x9 NEW_2
	var_4_object = var_8_object; // 0xa Mov
	var_5_string = "pt_petr"; // 0xc MovS
	var_6_string = "NPC_Petr"; // 0xd MovS
	var_7_string = "NPC_Burah_Petr.xml"; // 0xe MovS
	func_41(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string); // 0xf NEW_2
	var_1_object = var_3_object; // 0x10 TMov
	
Label_18:
	return 0; // 0x12 Return
}


task_0_event_6(var_0_bool, var_1_object)
{
	var_2_object = var_1_object; // 0x13 PushT
	if(var_2_object == 0) goto Label_23; // 0x14 JumpB
	RemoveActor(var_1_object); // 0x15 Func
	
Label_23:
	return 0; // 0x17 Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_string = "nopetr"; // 0x19 PushS
	var_4_bool = var_2_string == var_3_string; // 0x1a Eq
	if(var_4_bool == 0) goto Label_30; // 0x1b JumpB
	var_0_bool = 0; // 0x1c TMovB
	goto Label_34; // 0x1d Jump
	
Label_34:
	return 0; // 0x22 Return
	
Label_30:
	var_5_string = "petr"; // 0x1e PushS
	var_6_bool = var_2_string == var_5_string; // 0x1f Eq
	if(var_6_bool == 0) goto Label_34; // 0x20 JumpB
	var_0_bool = 1; // 0x21 TMovB
}


main(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_41(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x29 PushV
	GetLocator(var_5_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x2a ObjFunc
	var_19_bool = var_15_bool == 0; // 0x2c Not
	if(var_19_bool == 0) goto Label_54; // 0x2d JumpB
	var_20_string = "Locator "; // 0x2e PushS
	var_21_int = var_20_string + var_5_string; // 0x2f Add
	var_22_string = " doesn't exist"; // 0x30 PushS
	var_23_int = var_21_int + var_22_string; // 0x31 Add
	Trace(var_23_int); // 0x32 Func
	var_18_object = 0; // 0x34 SetNull
	goto Label_56; // 0x35 Jump
	
Label_56:
	var_3_object = var_18_object; // 0x38 Mov
	return 8; // 0x39 Return
	
Label_54:
	AddActor(var_18_object, var_6_string, var_4_object, var_16_cvector, var_17_cvector, var_7_string); // 0x36 Func
}


func_35(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x23 PushV
	self(var_10_object); // 0x24 Func
	var_8_object = var_10_object; // 0x26 Mov
	return 2; // 0x27 Return
}


