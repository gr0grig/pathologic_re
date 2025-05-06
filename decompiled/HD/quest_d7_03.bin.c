task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x5 PushV
	Trace(var_2_string); // 0x6 Func
	var_5_string = "init_house_petr"; // 0x8 PushS
	var_6_bool = var_2_string == var_5_string; // 0x9 Eq
	if(var_6_bool == 0) goto Label_32; // 0xa JumpB
	var_7_string = "house_petr"; // 0xb PushS
	GetSceneByName(var_4_object, var_7_string); // 0xc Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0xe PushV
	var_9_object = var_4_object; // 0xf Mov
	var_10_string = "pt_d7q03_maria"; // 0x10 MovS
	var_11_string = "NPC_Maria"; // 0x11 MovS
	var_12_string = "d7q03_maria.xml"; // 0x12 MovS
	func_128(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string); // 0x13 NEW_2
	var_0_object = var_8_object; // 0x14 TMov
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x16 PushV
	var_27_object = var_4_object; // 0x17 Mov
	var_28_string = "pt_d7q03_aglaja"; // 0x18 MovS
	var_29_string = "NPC_Aglaja"; // 0x19 MovS
	var_30_string = "d7q03_aglaja.xml"; // 0x1a MovS
	func_128(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string); // 0x1b NEW_2
	var_1_object = var_26_object; // 0x1c TMov
	var_4_object = 0; // 0x1e SetNull
	goto Label_53; // 0x1f Jump
	
Label_53:
	return 2; // 0x35 Return
	
Label_32:
	var_31_string = "remove_maria"; // 0x20 PushS
	var_32_bool = var_2_string == var_31_string; // 0x21 Eq
	if(var_32_bool == 0) goto Label_40; // 0x22 JumpB
	var_33_object = var_0_object; // 0x23 PushT
	if(var_33_object == 0) goto Label_39; // 0x24 JumpB
	RemoveActor(var_0_object); // 0x25 Func
	
Label_39:
	goto Label_53; // 0x27 Jump
	
Label_40:
	var_34_string = "fail"; // 0x28 PushS
	var_35_bool = var_2_string == var_34_string; // 0x29 Eq
	if(var_35_bool == 0) goto Label_47; // 0x2a JumpB
	func_65(); // 0x2c NEW_2
	goto Label_53; // 0x2e Jump
	
Label_47:
	var_45_string = "completed"; // 0x2f PushS
	var_46_bool = var_2_string == var_45_string; // 0x30 Eq
	if(var_46_bool == 0) goto Label_53; // 0x31 JumpB
	func_73(); // 0x33 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_54(); // 0x77 NEW_2
	return 0; // 0x79 Return
}


main(var_0_object, var_1_object)
{
	var_2_int = 0; // 0x0 PushV
	var_2_int = 7; // 0x1 MovI
	func_98(var_2_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_128(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x80 PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x81 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x83 Not
	if(var_21_bool == 0) goto Label_141; // 0x84 JumpB
	var_22_string = "Locator "; // 0x85 PushS
	var_23_int = var_22_string + var_10_string; // 0x86 Add
	var_24_string = " doesn't exist"; // 0x87 PushS
	var_25_int = var_23_int + var_24_string; // 0x88 Add
	Trace(var_25_int); // 0x89 Func
	var_20_object = 0; // 0x8b SetNull
	goto Label_143; // 0x8c Jump
	
Label_143:
	var_8_object = var_20_object; // 0x8f Mov
	return 8; // 0x90 Return
	
Label_141:
	AddActor(var_20_object, var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string); // 0x8d Func
}


func_65()
{
	var_9_string = "d7q03"; // 0x41 PushS
	var_10_int = -1; // 0x42 PushI
	SetVariable(var_9_string, var_10_int); // 0x43 Func
	func_81(var_5_int); // 0x46 NEW_2
	return 0; // 0x48 Return
}


func_98(var_2_int)
{
	var_3_float = 0; var_4_float = 0; // 0x62 PushV
	GetGameTime(var_4_float); // 0x63 Func
	var_5_int = 24; // 0x65 PushI
	var_6_float = var_2_int * var_5_int; // 0x66 Mult
	var_7_bool = var_4_float >= var_6_float; // 0x67 GE
	if(var_7_bool == 0) goto Label_109; // 0x68 JumpB
	func_81(var_4_float); // 0x6a NEW_2
	goto Label_116; // 0x6c Jump
	
Label_116:
	return 2; // 0x74 Return
	
Label_109:
	var_15_int = 0; // 0x6d PushI
	var_16_int = 24; // 0x6e PushI
	var_17_float = var_2_int * var_16_int; // 0x6f Mult
	SetTimeEvent(var_15_int, var_17_float); // 0x70 Func
	Hold(); // 0x72 Func
}


func_73()
{
	var_47_string = "d7q03"; // 0x49 PushS
	var_48_int = 1000; // 0x4a PushI
	SetVariable(var_47_string, var_48_int); // 0x4b Func
	func_81(var_4_object); // 0x4e NEW_2
	return 0; // 0x50 Return
}


func_81(var_0_object)
{
	EventDisable(26); // 0x51 EventDisable
	var_8_object = var_0_object; // 0x52 PushT
	if(var_8_object == 0) goto Label_87; // 0x53 JumpB
	var_9_string = "cleanup"; // 0x54 PushS
	Trigger(var_0_object, var_9_string); // 0x55 Func
	
Label_87:
	var_10_object = var_1_object; // 0x57 PushT
	if(var_10_object == 0) goto Label_92; // 0x58 JumpB
	var_11_string = "cleanup"; // 0x59 PushS
	Trigger(var_11_string, var_11_string); // 0x5a Func
	
Label_92:
	var_12_object = Obj(); // 0x5c PushV
	func_122(var_12_object); // 0x5d NEW_2
	RemoveActor(var_12_object); // 0x5f Func
	return 0; // 0x61 Return
}


func_54()
{
	var_4_int = 0; var_5_int = 0; // 0x36 PushV
	var_6_string = "d7q03"; // 0x37 PushS
	GetVariable(var_6_string, var_5_int); // 0x38 Func
	var_7_int = 1000; // 0x3a PushI
	var_8_bool = var_5_int != var_7_int; // 0x3b Neq
	if(var_8_bool == 0) goto Label_64; // 0x3c JumpB
	func_65(); // 0x3e NEW_2
	
Label_64:
	return 2; // 0x40 Return
}


func_122(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x7a PushV
	self(var_14_object); // 0x7b Func
	var_12_object = var_14_object; // 0x7d Mov
	return 2; // 0x7e Return
}


