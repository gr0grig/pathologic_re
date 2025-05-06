task_0_event_5(var_0_object, var_1_object)
{
	var_2_cvector = CVector(0,0,0); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_string = ""; var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_string = ""; // 0x7 PushV
	GetPosition(var_7_cvector); // 0x8 Func
	GetScene(var_8_object); // 0xa Func
	GetRegionByPt(var_9_int, var_7_cvector); // 0xc ObjFunc
	var_12_int = -1; // 0xe PushI
	var_13_bool = var_9_int == var_12_int; // 0xf Eq
	if(var_13_bool == 0) goto Label_21; // 0x10 JumpB
	var_14_string = "Invalid bonfire region"; // 0x11 PushS
	Trace(var_14_string); // 0x12 Func
	return 10; // 0x14 Return
	
Label_21:
	var_15_string = ""; var_16_int = 0; // 0x15 PushV
	var_16_int = var_9_int; // 0x16 Mov
	func_64(var_15_string, var_16_int); // 0x17 NEW_2
	GetVariable(var_15_string, var_10_int); // 0x19 Func
	var_20_int = 3; // 0x1b PushI
	var_10_int = var_10_int & var_20_int; // 0x1c And2
	var_21_bool = 0; // 0x1d PushV
	var_21_bool = 1; // 0x1e MovB
	var_22_int = 1; // 0x1f PushI
	var_23_bool = var_10_int == var_22_int; // 0x20 Eq
	if(var_23_bool == 0) goto Label_38; // 0x21 JumpB
	var_24_int = 2; // 0x22 PushI
	var_25_bool = var_10_int == var_24_int; // 0x23 Eq
	if(var_25_bool == 0) goto Label_38; // 0x24 JumpB
	var_21_bool = 0; // 0x25 MovB
	
Label_38:
	if(var_21_bool == 0) goto Label_53; // 0x26 JumpB
	GetActorName(var_11_string); // 0x27 Func
	var_26_string = "_light"; // 0x29 PushS
	var_27_int = var_11_string + var_26_string; // 0x2a Add
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x2b PushVec
	var_29_cvector = CVector(0.0, 0.0, 1.0); // 0x2c PushVec
	var_30_string = "light_fire.xml"; // 0x2d PushS
	AddActor(var_0_object, var_27_int, var_8_object, var_28_cvector, var_29_cvector, var_30_string); // 0x2e Func
	var_31_string = "scripted"; // 0x30 PushS
	var_32_cvector = CVector(0.0, 0.0, 1.0); // 0x31 PushVec
	var_33_string = "fire.xml"; // 0x32 PushS
	AddActorByType(var_33_string, var_31_string, var_8_object, var_7_cvector, var_32_cvector, var_33_string); // 0x33 Func
	
Label_53:
	return 10; // 0x35 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_object = var_0_object; // 0x37 PushT
	if(var_2_object == 0) goto Label_59; // 0x38 JumpB
	RemoveActor(var_0_object); // 0x39 Func
	
Label_59:
	var_3_object = var_1_object; // 0x3b PushT
	if(var_3_object == 0) goto Label_63; // 0x3c JumpB
	RemoveActor(var_1_object); // 0x3d Func
	
Label_63:
	return 0; // 0x3f Return
}


main(var_0_object, var_1_object)
{
	var_2_bool = 1; // 0x0 PushB
	SetVisibility(var_2_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_64(var_15_string, var_16_int)
{
	var_17_string = "Region"; // 0x41 PushS
	var_18_int = var_17_string + var_16_int; // 0x42 Add
	var_19_string = "State"; // 0x43 PushS
	var_15_string = var_18_int + var_19_string; // 0x44 Add2
	return 0; // 0x45 Return
}


