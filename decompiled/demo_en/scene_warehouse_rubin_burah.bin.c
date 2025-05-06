task_0_event_5(var_0_bool, var_1_object)
{
	var_2_bool = var_0_bool; // 0x5 PushT
	if(var_2_bool == 0) goto Label_18; // 0x6 JumpB
	var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; // 0x7 PushV
	var_8_object = Obj(); // 0x8 PushV
	func_40(var_8_object); // 0x9 NEW_2
	var_4_object = var_8_object; // 0xa Mov
	var_5_string = "pt_rubin"; // 0xc MovS
	var_6_string = "NPC_Rubin"; // 0xd MovS
	var_7_string = "NPC_Burah_Rubin.xml"; // 0xe MovS
	func_46(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string); // 0xf NEW_2
	var_1_object = var_3_object; // 0x10 TMov
	
Label_18:
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0x12 PushV
	var_25_string = "quest_k10_01"; // 0x13 MovS
	var_26_string = "warehouse_rubin_load"; // 0x14 MovS
	func_64(var_24_bool, var_25_string, var_26_string); // 0x15 NEW_2
	return 0; // 0x17 Return
}


task_0_event_6(var_0_bool, var_1_object)
{
	var_2_object = var_1_object; // 0x18 PushT
	if(var_2_object == 0) goto Label_28; // 0x19 JumpB
	RemoveActor(var_1_object); // 0x1a Func
	
Label_28:
	return 0; // 0x1c Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_string = "norubin"; // 0x1e PushS
	var_4_bool = var_2_string == var_3_string; // 0x1f Eq
	if(var_4_bool == 0) goto Label_35; // 0x20 JumpB
	var_0_bool = 0; // 0x21 TMovB
	goto Label_39; // 0x22 Jump
	
Label_39:
	return 0; // 0x27 Return
	
Label_35:
	var_5_string = "rubin"; // 0x23 PushS
	var_6_bool = var_2_string == var_5_string; // 0x24 Eq
	if(var_6_bool == 0) goto Label_39; // 0x25 JumpB
	var_0_bool = 1; // 0x26 TMovB
}


main(var_0_bool, var_1_object)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_40(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x28 PushV
	self(var_10_object); // 0x29 Func
	var_8_object = var_10_object; // 0x2b Mov
	return 2; // 0x2c Return
}


func_64(var_24_bool, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x40 PushV
	FindActor(var_28_object, var_25_string); // 0x41 Func
	var_29_bool = var_28_object == 0; // 0x43 NullEq
	if(var_29_bool == 0) goto Label_71; // 0x44 JumpB
	var_24_bool = 0; // 0x45 MovB
	return 2; // 0x46 Return
	
Label_71:
	Trigger(var_28_object, var_26_string); // 0x47 Func
	var_24_bool = 1; // 0x49 MovB
	return 2; // 0x4a Return
}


func_46(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x2e PushV
	GetLocator(var_5_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x2f ObjFunc
	var_19_bool = var_15_bool == 0; // 0x31 Not
	if(var_19_bool == 0) goto Label_59; // 0x32 JumpB
	var_20_string = "Locator "; // 0x33 PushS
	var_21_int = var_20_string + var_5_string; // 0x34 Add
	var_22_string = " doesn't exist"; // 0x35 PushS
	var_23_int = var_21_int + var_22_string; // 0x36 Add
	Trace(var_23_int); // 0x37 Func
	var_18_object = 0; // 0x39 SetNull
	goto Label_61; // 0x3a Jump
	
Label_61:
	var_3_object = var_18_object; // 0x3d Mov
	return 8; // 0x3e Return
	
Label_59:
	AddActor(var_18_object, var_6_string, var_4_object, var_16_cvector, var_17_cvector, var_7_string); // 0x3b Func
}


