task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x4 PushV
	var_12_bool = var_0_bool == 0; // 0x5 Not
	if(var_12_bool == 0) goto Label_8; // 0x6 JumpB
	return 10; // 0x7 Return
	
Label_8:
	IsPlayerActor(var_1_object, var_7_bool); // 0x8 Func
	var_13_bool = var_7_bool; // 0xa Push
	if(var_13_bool == 0) goto Label_25; // 0xb JumpB
	var_14_string = "boiny_well"; // 0xc PushS
	GetSceneByName(var_8_object, var_14_string); // 0xd Func
	RemoveScene(var_8_object); // 0xf Func
	GetMainOutdoorScene(var_8_object); // 0x11 Func
	var_15_string = "pt_b11q01_well_return"; // 0x13 PushS
	GetLocator(var_15_string, var_9_bool, var_10_cvector, var_11_cvector); // 0x14 ObjFunc
	Teleport(var_1_object, var_8_object, var_10_cvector, var_11_cvector); // 0x16 Func
	var_8_object = 0; // 0x18 SetNull
	
Label_25:
	return 10; // 0x19 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "activate"; // 0x1b PushS
	var_3_bool = var_1_string == var_2_string; // 0x1c Eq
	if(var_3_bool == 0) goto Label_31; // 0x1d JumpB
	var_0_bool = 1; // 0x1e TMovB
	
Label_31:
	return 0; // 0x1f Return
}


main(var_0_bool)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


