task_0_event_26(var_0_object, var_1_string)
{
	var_2_string = "exit"; // 0x2d PushS
	var_3_bool = var_1_string == var_2_string; // 0x2e Eq
	if(var_3_bool == 0) goto Label_51; // 0x2f JumpB
	func_52(); // 0x31 NEW_2
	
Label_51:
	return 0; // 0x33 Return
}


main(var_0_object)
{
	var_1_int = 0; // 0x0 PushI
	var_2_int = 3; // 0x1 PushI
	SetSaveProperty(var_1_int, var_2_int); // 0x2 Func
	func_22(var_0_object); // 0x5 NEW_2
	sync(); // 0x7 Func
	var_17_string = "intro"; // 0x9 PushS
	PlaySharedSound(var_17_string); // 0xa Func
	var_18_float = 188.0; // 0xc PushF
	Sleep(var_18_float); // 0xd Func
	func_61(); // 0x10 NEW_2
	
Label_18:
	Hold(); // 0x12 Func
	goto Label_18; // 0x14 Jump
}


func_52()
{
	var_4_string = "exiting"; // 0x34 PushS
	Trace(var_4_string); // 0x35 Func
	RemoveWorld(); // 0x37 Func
	var_5_string = "choose_pers.xml"; // 0x39 PushS
	ActivateInitGameOverride(var_5_string); // 0x3a Func
	return 0; // 0x3c Return
}


func_61()
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0; // 0x3d PushV
	var_25_int = 0; // 0x3e PushI
	GetGroupActors(var_22_object, var_25_int); // 0x3f TObjFunc
	
Label_65:
	Next(var_24_bool, var_23_object); // 0x41 ObjFunc
	var_26_bool = var_24_bool; // 0x43 Push
	if(var_26_bool == 0) goto Label_75; // 0x44 JumpB
	var_27_object = var_23_object; // 0x45 Push
	if(var_27_object == 0) goto Label_74; // 0x46 JumpB
	var_28_string = "off"; // 0x47 PushS
	Trigger(var_23_object, var_28_string); // 0x48 Func
	
Label_74:
	goto Label_65; // 0x4a Jump
	
Label_75:
	return 6; // 0x4b Return
}


func_22(var_0_object)
{
	var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); // 0x16 PushV
	var_11_string = "player"; // 0x17 PushS
	FindActor(var_7_object, var_11_string); // 0x18 Func
	var_12_string = "intro_theater"; // 0x1a PushS
	GetSceneByName(var_0_object, var_12_string); // 0x1b Func
	var_13_bool = var_0_object == 0; // 0x1d Not
	if(var_13_bool == 0) goto Label_35; // 0x1e JumpB
	var_14_string = "Intro scene not found"; // 0x1f PushS
	Trace(var_14_string); // 0x20 Func
	return 8; // 0x22 Return
	
Label_35:
	var_15_string = "birth"; // 0x23 PushS
	GetLocator(var_15_string, var_8_bool, var_9_cvector, var_10_cvector); // 0x24 TObjFunc
	var_16_bool = var_8_bool; // 0x26 Push
	if(var_16_bool == 0) goto Label_42; // 0x27 JumpB
	Teleport(var_7_object, var_0_object, var_9_cvector, var_10_cvector); // 0x28 Func
	
Label_42:
	return 8; // 0x2a Return
}


