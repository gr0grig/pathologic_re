task_0_event_5(var_0_object, var_1_object, var_2_object)
{
	var_3_int = 0; var_4_int = 0; // 0x4 PushV
	var_5_string = "sobor_aglaja"; // 0x5 PushS
	GetVariable(var_5_string, var_4_int); // 0x6 Func
	var_6_int = var_4_int; // 0x8 Push
	if(var_6_int == 0) goto Label_43; // 0x9 JumpB
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0xa PushV
	var_12_object = Obj(); // 0xb PushV
	func_84(var_12_object); // 0xc NEW_2
	var_8_object = var_12_object; // 0xd Mov
	var_9_string = "pt_Aglaja"; // 0xf MovS
	var_10_string = "NPC_Aglaja"; // 0x10 MovS
	var_11_string = "NPC_Danko_Aglaja.xml"; // 0x11 MovS
	func_90(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x12 NEW_2
	var_0_object = var_7_object; // 0x13 TMov
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x15 PushV
	var_33_object = Obj(); // 0x16 PushV
	func_84(var_33_object); // 0x17 NEW_2
	var_29_object = var_33_object; // 0x18 Mov
	var_30_string = "pt_sobor_mask1"; // 0x1a MovS
	var_31_string = "pers_whitemask"; // 0x1b MovS
	var_32_string = "sobor_whitemask.xml"; // 0x1c MovS
	func_90(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x1d NEW_2
	var_1_object = var_28_object; // 0x1e TMov
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x20 PushV
	var_39_object = Obj(); // 0x21 PushV
	func_84(var_39_object); // 0x22 NEW_2
	var_35_object = var_39_object; // 0x23 Mov
	var_36_string = "pt_sobor_mask2"; // 0x25 MovS
	var_37_string = "pers_whitemask"; // 0x26 MovS
	var_38_string = "sobor_whitemask.xml"; // 0x27 MovS
	func_90(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x28 NEW_2
	var_2_object = var_34_object; // 0x29 TMov
	
Label_43:
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x2b PushV
	var_41_string = "quest_d12_01"; // 0x2c MovS
	var_42_string = "sobor_load"; // 0x2d MovS
	func_108(var_40_bool, var_41_string, var_42_string); // 0x2e NEW_2
	return 2; // 0x30 Return
}


task_0_event_6(var_0_object, var_1_object, var_2_object)
{
	var_3_object = var_0_object; // 0x31 PushT
	if(var_3_object == 0) goto Label_53; // 0x32 JumpB
	RemoveActor(var_0_object); // 0x33 Func
	
Label_53:
	var_4_object = var_1_object; // 0x35 PushT
	if(var_4_object == 0) goto Label_57; // 0x36 JumpB
	RemoveActor(var_2_object); // 0x37 Func
	
Label_57:
	var_5_object = var_2_object; // 0x39 PushT
	if(var_5_object == 0) goto Label_61; // 0x3a JumpB
	RemoveActor(var_1_object); // 0x3b Func
	
Label_61:
	var_6_bool = 0; var_7_string = ""; var_8_string = ""; // 0x3d PushV
	var_7_string = "quest_d12_01"; // 0x3e MovS
	var_8_string = "sobor_unload"; // 0x3f MovS
	func_108(var_6_bool, var_7_string, var_8_string); // 0x40 NEW_2
	return 0; // 0x42 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_string = "noaglaja"; // 0x44 PushS
	var_5_bool = var_3_string == var_4_string; // 0x45 Eq
	if(var_5_bool == 0) goto Label_76; // 0x46 JumpB
	var_6_string = "sobor_aglaja"; // 0x47 PushS
	var_7_int = 0; // 0x48 PushI
	SetVariable(var_6_string, var_7_int); // 0x49 Func
	goto Label_83; // 0x4b Jump
	
Label_83:
	return 0; // 0x53 Return
	
Label_76:
	var_8_string = "aglaja"; // 0x4c PushS
	var_9_bool = var_3_string == var_8_string; // 0x4d Eq
	if(var_9_bool == 0) goto Label_83; // 0x4e JumpB
	var_10_string = "sobor_aglaja"; // 0x4f PushS
	var_11_int = 1; // 0x50 PushI
	SetVariable(var_10_string, var_11_int); // 0x51 Func
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_90(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x5a PushV
	GetLocator(var_9_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x5b ObjFunc
	var_23_bool = var_19_bool == 0; // 0x5d Not
	if(var_23_bool == 0) goto Label_103; // 0x5e JumpB
	var_24_string = "Locator "; // 0x5f PushS
	var_25_int = var_24_string + var_9_string; // 0x60 Add
	var_26_string = " doesn't exist"; // 0x61 PushS
	var_27_int = var_25_int + var_26_string; // 0x62 Add
	Trace(var_27_int); // 0x63 Func
	var_22_object = 0; // 0x65 SetNull
	goto Label_105; // 0x66 Jump
	
Label_105:
	var_7_object = var_22_object; // 0x69 Mov
	return 8; // 0x6a Return
	
Label_103:
	AddActor(var_22_object, var_10_string, var_8_object, var_20_cvector, var_21_cvector, var_11_string); // 0x67 Func
}


func_108(var_6_bool, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x6c PushV
	FindActor(var_10_object, var_7_string); // 0x6d Func
	var_11_bool = var_10_object == 0; // 0x6f NullEq
	if(var_11_bool == 0) goto Label_115; // 0x70 JumpB
	var_6_bool = 0; // 0x71 MovB
	return 2; // 0x72 Return
	
Label_115:
	Trigger(var_10_object, var_8_string); // 0x73 Func
	var_6_bool = 1; // 0x75 MovB
	return 2; // 0x76 Return
}


func_84(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x54 PushV
	self(var_14_object); // 0x55 Func
	var_12_object = var_14_object; // 0x57 Mov
	return 2; // 0x58 Return
}


