task_0_event_24(var_0_object, var_1_int)
{
	var_2_string = ""; // 0x21 PushV
	var_2_string = "exit"; // 0x22 MovS
	func_60(); // 0x23 NEW_2
	return 0; // 0x25 Return
}


	task_0_event_26(var_0_object, var_31_string)
	{
	var_32_string = "exit"; // 0x3d PushS
	var_33_bool = var_31_string == var_32_string; // 0x3e Eq
	if(var_33_bool == 0) goto Label_67; // 0x3f JumpB
	func_68(); // 0x41 NEW_2
	
Label_67:
	return 0; // 0x43 Return
	}


main(var_0_object)
{
	var_1_int = 0; // 0x0 PushI
	var_2_int = 3; // 0x1 PushI
	SetSaveProperty(var_1_int, var_2_int); // 0x2 Func
	var_3_string = "escape"; // 0x4 PushS
	RegisterKeyCallback(var_3_string); // 0x5 Func
	func_38(var_0_object); // 0x8 NEW_2
	sync(); // 0xa Func
	var_18_string = "intro"; // 0xc PushS
	PlaySharedSound(var_18_string); // 0xd Func
	var_19_float = 188.0; // 0xf PushF
	Sleep(var_19_float); // 0x10 Func
	func_77(); // 0x13 NEW_2
	var_30_int = 2; // 0x15 PushI
	Sleep(var_30_int); // 0x16 Func
	var_31_string = ""; // 0x18 PushV
	var_31_string = "exit"; // 0x19 MovS
	func_60(); // 0x1a NEW_2
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_68()
{
	var_34_string = "exiting"; // 0x44 PushS
	Trace(var_34_string); // 0x45 Func
	RemoveWorld(); // 0x47 Func
	var_35_string = "choose_pers.xml"; // 0x49 PushS
	ActivateInitGameOverride(var_35_string); // 0x4a Func
	return 0; // 0x4c Return
}


func_77()
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0x4d PushV
	var_26_int = 0; // 0x4e PushI
	GetGroupActors(var_23_object, var_26_int); // 0x4f TObjFunc
	
Label_81:
	Next(var_25_bool, var_24_object); // 0x51 ObjFunc
	var_27_bool = var_25_bool; // 0x53 Push
	if(var_27_bool == 0) goto Label_91; // 0x54 JumpB
	var_28_object = var_24_object; // 0x55 Push
	if(var_28_object == 0) goto Label_90; // 0x56 JumpB
	var_29_string = "off"; // 0x57 PushS
	Trigger(var_24_object, var_29_string); // 0x58 Func
	
Label_90:
	goto Label_81; // 0x5a Jump
	
Label_91:
	return 6; // 0x5b Return
}


func_38(var_0_object)
{
	var_4_object = Obj(); var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x26 PushV
	var_12_string = "player"; // 0x27 PushS
	FindActor(var_8_object, var_12_string); // 0x28 Func
	var_13_string = "intro_theater"; // 0x2a PushS
	GetSceneByName(var_0_object, var_13_string); // 0x2b Func
	var_14_bool = var_0_object == 0; // 0x2d Not
	if(var_14_bool == 0) goto Label_51; // 0x2e JumpB
	var_15_string = "Intro scene not found"; // 0x2f PushS
	Trace(var_15_string); // 0x30 Func
	return 8; // 0x32 Return
	
Label_51:
	var_16_string = "birth"; // 0x33 PushS
	GetLocator(var_16_string, var_9_bool, var_10_cvector, var_11_cvector); // 0x34 TObjFunc
	var_17_bool = var_9_bool; // 0x36 Push
	if(var_17_bool == 0) goto Label_58; // 0x37 JumpB
	Teleport(var_8_object, var_0_object, var_10_cvector, var_11_cvector); // 0x38 Func
	
Label_58:
	return 8; // 0x3a Return
}


