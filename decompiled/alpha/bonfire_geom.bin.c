task_0_event_32(var_0_bool, var_1_object, var_2_object)
{
	RemoveActor(var_1_object); // 0x23 Func
	var_3_bool = 0; // 0x25 PushB
	Switch(var_3_bool); // 0x26 TObjFunc
	return 0; // 0x28 Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_string)
{
	var_4_bool = 0; var_5_bool = 0; // 0x2d PushV
	var_6_string = "cleanup"; // 0x2e PushS
	var_7_bool = var_3_string == var_6_string; // 0x2f Eq
	if(var_7_bool == 0) goto Label_68; // 0x30 JumpB
	var_0_bool = 1; // 0x31 TMovB
	IsLoaded(var_5_bool); // 0x32 Func
	var_8_bool = 0; // 0x34 PushV
	var_8_bool = 0; // 0x35 MovB
	var_9_bool = var_5_bool == 0; // 0x36 Not
	if(var_9_bool == 0) goto Label_61; // 0x37 JumpB
	var_10_bool = 0; // 0x38 PushV
	func_89(var_10_bool); // 0x39 Call
	if(var_10_bool == 0) goto Label_61; // 0x3b JumpB
	var_8_bool = 1; // 0x3c MovB
	
Label_61:
	if(var_8_bool == 0) goto Label_67; // 0x3d JumpB
	var_11_object = Obj(); // 0x3e PushV
	func_91(var_11_object); // 0x3f Call
	RemoveActor(var_11_object); // 0x41 Func
	
Label_67:
	goto Label_72; // 0x43 Jump
	
Label_72:
	return 2; // 0x48 Return
	
Label_68:
	var_14_string = "restore"; // 0x44 PushS
	var_15_bool = var_3_string == var_14_string; // 0x45 Eq
	if(var_15_bool == 0) goto Label_72; // 0x46 JumpB
	var_0_bool = 0; // 0x47 TMovB
}


task_0_event_6(var_0_bool, var_1_object, var_2_object)
{
	var_3_bool = 0; // 0x49 PushV
	var_3_bool = 0; // 0x4a MovB
	var_4_bool = var_0_bool; // 0x4b PushT
	if(var_4_bool == 0) goto Label_82; // 0x4c JumpB
	var_5_bool = 0; // 0x4d PushV
	func_89(var_5_bool); // 0x4e Call
	if(var_5_bool == 0) goto Label_82; // 0x50 JumpB
	var_3_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_3_bool == 0) goto Label_88; // 0x52 JumpB
	var_6_object = Obj(); // 0x53 PushV
	func_91(var_6_object); // 0x54 Call
	RemoveActor(var_6_object); // 0x56 Func
	
Label_88:
	return 0; // 0x58 Return
}


main(var_0_bool, var_1_object, var_2_object)
{
	var_3_string = ""; var_4_string = ""; // 0x0 PushV
	var_5_string = "light"; // 0x1 PushS
	GetProperty(var_5_string, var_4_string); // 0x2 Func
	FindActor(var_4_string, var_4_string); // 0x4 Func
	var_6_bool = 1; // 0x6 PushB
	Switch(var_6_bool); // 0x7 TObjFunc
	var_7_bool = 1; // 0x9 PushB
	SetVisibility(var_7_bool); // 0xa Func
	func_19(var_4_string); // 0xd Call
	func_41(); // 0x10 Call
	return 2; // 0x12 Return
}


func_97(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0x61 PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0x62 ObjFunc
	var_26_bool = var_22_bool == 0; // 0x64 Not
	if(var_26_bool == 0) goto Label_110; // 0x65 JumpB
	var_27_string = "Locator "; // 0x66 PushS
	var_28_int = var_27_string + var_15_string; // 0x67 Add
	var_29_string = " doesn't exist"; // 0x68 PushS
	var_30_int = var_28_int + var_29_string; // 0x69 Add
	Trace(var_30_int); // 0x6a Func
	var_25_object = 0; // 0x6c SetNull
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_13_object = var_25_object; // 0x70 Mov
	return 8; // 0x71 Return
	
Label_110:
	AddActorByType(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0x6e Func
}


func_41()
{
	
Label_41:
	Hold(); // 0x29 Func
	goto Label_41; // 0x2b Jump
}


func_19(var_2_object)
{
	var_8_object = Obj(); var_9_string = ""; var_10_object = Obj(); var_11_string = ""; // 0x13 PushV
	GetScene(var_10_object); // 0x14 Func
	var_12_string = "fire_loc"; // 0x16 PushS
	GetProperty(var_12_string, var_11_string); // 0x17 Func
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x19 PushV
	var_14_object = var_10_object; // 0x1a Mov
	var_15_string = var_11_string; // 0x1b Mov
	var_16_string = "scripted"; // 0x1c MovS
	var_17_string = "bonfire.xml"; // 0x1d MovS
	func_97(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0x1e Call
	var_2_object = var_13_object; // 0x1f TMov
	return 4; // 0x21 Return
}


func_89(var_5_bool)
{
	var_5_bool = 1; // 0x59 MovB
	return 0; // 0x5a Return
}


func_91(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x5b PushV
	self(var_8_object); // 0x5c Func
	var_6_object = var_8_object; // 0x5e Mov
	return 2; // 0x5f Return
}


