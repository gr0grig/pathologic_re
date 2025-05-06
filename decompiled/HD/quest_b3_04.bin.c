task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string); // 0x25 Func
	var_3_string = "fail"; // 0x27 PushS
	var_4_bool = var_2_string == var_3_string; // 0x28 Eq
	if(var_4_bool == 0) goto Label_46; // 0x29 JumpB
	func_64(); // 0x2b NEW_2
	goto Label_52; // 0x2d Jump
	
Label_52:
	return 0; // 0x34 Return
	
Label_46:
	var_13_string = "completed"; // 0x2e PushS
	var_14_bool = var_2_string == var_13_string; // 0x2f Eq
	if(var_14_bool == 0) goto Label_52; // 0x30 JumpB
	func_72(); // 0x32 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_53(); // 0x75 NEW_2
	return 0; // 0x77 Return
}


main(var_0_object, var_1_object)
{
	var_2_string = "b3q04"; // 0x18 PushS
	var_3_int = 1; // 0x19 PushI
	SetVariable(var_2_string, var_3_int); // 0x1a Func
	func_0(var_1_object); // 0x1d NEW_2
	var_29_int = 0; // 0x1f PushV
	var_29_int = 3; // 0x20 MovI
	func_96(var_29_int); // 0x21 NEW_2
	return 0; // 0x23 Return
}


func_0(var_0_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_5_object); // 0x1 Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x3 PushV
	var_7_object = var_5_object; // 0x4 Mov
	var_8_string = "pt_d3q01_gpatrol1"; // 0x5 MovS
	var_9_string = "pers_patrool"; // 0x6 MovS
	var_10_string = "b3q04_gpatrol.xml"; // 0x7 MovS
	func_126(var_7_object, var_8_string, var_9_string, var_10_string); // 0x8 NEW_2
	var_0_object = var_6_object; // 0x9 TMov
	var_24_string = "d3q01_graveyard_fire"; // 0xb PushS
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0xc PushVec
	var_26_cvector = CVector(0.0, 0.0, 1.0); // 0xd PushVec
	var_27_string = "d3q01_graveyard_fire.xml"; // 0xe PushS
	AddActor(var_27_string, var_24_string, var_5_object, var_25_cvector, var_26_cvector, var_27_string); // 0xf Func
	sync(); // 0x11 Func
	var_28_string = "put_item"; // 0x13 PushS
	Trigger(var_28_string, var_28_string); // 0x14 Func
	return 2; // 0x16 Return
}


func_64()
{
	var_9_string = "b3q04"; // 0x40 PushS
	var_10_int = -1; // 0x41 PushI
	SetVariable(var_9_string, var_10_int); // 0x42 Func
	func_80(); // 0x45 NEW_2
	return 0; // 0x47 Return
}


func_96(var_29_int)
{
	var_30_float = 0; var_31_float = 0; // 0x60 PushV
	GetGameTime(var_31_float); // 0x61 Func
	var_32_int = 24; // 0x63 PushI
	var_33_float = var_29_int * var_32_int; // 0x64 Mult
	var_34_bool = var_31_float >= var_33_float; // 0x65 GE
	if(var_34_bool == 0) goto Label_107; // 0x66 JumpB
	func_80(); // 0x68 NEW_2
	goto Label_114; // 0x6a Jump
	
Label_114:
	return 2; // 0x72 Return
	
Label_107:
	var_41_int = 0; // 0x6b PushI
	var_42_int = 24; // 0x6c PushI
	var_43_float = var_29_int * var_42_int; // 0x6d Mult
	SetTimeEvent(var_41_int, var_43_float); // 0x6e Func
	Hold(); // 0x70 Func
}


func_72()
{
	var_15_string = "b3q04"; // 0x48 PushS
	var_16_int = 1000; // 0x49 PushI
	SetVariable(var_15_string, var_16_int); // 0x4a Func
	func_80(); // 0x4d NEW_2
	return 0; // 0x4f Return
}


func_80()
{
	EventDisable(26); // 0x50 EventDisable
	var_35_object = var_0_object; // 0x51 PushT
	if(var_35_object == 0) goto Label_85; // 0x52 JumpB
	Remove(); // 0x53 TObjFunc
	
Label_85:
	var_36_object = var_1_object; // 0x55 PushT
	if(var_36_object == 0) goto Label_90; // 0x56 JumpB
	var_37_string = "cleanup"; // 0x57 PushS
	Trigger(var_37_string, var_37_string); // 0x58 Func
	
Label_90:
	var_38_object = Obj(); // 0x5a PushV
	func_120(var_38_object); // 0x5b NEW_2
	RemoveActor(var_38_object); // 0x5d Func
	return 0; // 0x5f Return
}


func_53()
{
	var_4_int = 0; var_5_int = 0; // 0x35 PushV
	var_6_string = "b3q04"; // 0x36 PushS
	GetVariable(var_6_string, var_5_int); // 0x37 Func
	var_7_int = 1000; // 0x39 PushI
	var_8_bool = var_5_int != var_7_int; // 0x3a Neq
	if(var_8_bool == 0) goto Label_63; // 0x3b JumpB
	func_64(); // 0x3d NEW_2
	
Label_63:
	return 2; // 0x3f Return
}


func_120(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x78 PushV
	self(var_40_object); // 0x79 Func
	var_38_object = var_40_object; // 0x7b Mov
	return 2; // 0x7c Return
}


func_126(var_6_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x7e PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x7f ObjFunc
	var_19_bool = var_15_bool == 0; // 0x81 Not
	if(var_19_bool == 0) goto Label_139; // 0x82 JumpB
	var_20_string = "Locator "; // 0x83 PushS
	var_21_int = var_20_string + var_8_string; // 0x84 Add
	var_22_string = " doesn't exist"; // 0x85 PushS
	var_23_int = var_21_int + var_22_string; // 0x86 Add
	Trace(var_23_int); // 0x87 Func
	var_18_object = 0; // 0x89 SetNull
	goto Label_141; // 0x8a Jump
	
Label_141:
	var_6_object = var_18_object; // 0x8d Mov
	return 8; // 0x8e Return
	
Label_139:
	AddStationaryActor(var_18_object, var_16_cvector, var_17_cvector, var_9_string, var_10_string); // 0x8b ObjFunc
}


