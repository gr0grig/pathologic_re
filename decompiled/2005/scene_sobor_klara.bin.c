task_0_event_5(var_0_object, var_1_object, var_2_object)
{
	var_3_int = 0; var_4_int = 0; // 0x4 PushV
	var_5_string = "sobor_aglaja"; // 0x5 PushS
	GetVariable(var_5_string, var_4_int); // 0x6 Func
	var_6_int = var_4_int; // 0x8 Push
	if(var_6_int == 0) goto Label_43; // 0x9 JumpB
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0xa PushV
	var_12_object = Obj(); // 0xb PushV
	func_99(var_12_object); // 0xc NEW_2
	var_8_object = var_12_object; // 0xd Mov
	var_9_string = "pt_Aglaja"; // 0xf MovS
	var_10_string = "NPC_Aglaja"; // 0x10 MovS
	var_11_string = "NPC_Klara_Aglaja.xml"; // 0x11 MovS
	func_105(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x12 NEW_2
	var_0_object = var_7_object; // 0x13 TMov
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x15 PushV
	var_33_object = Obj(); // 0x16 PushV
	func_99(var_33_object); // 0x17 NEW_2
	var_29_object = var_33_object; // 0x18 Mov
	var_30_string = "pt_sobor_mask1"; // 0x1a MovS
	var_31_string = "pers_whitemask"; // 0x1b MovS
	var_32_string = "sobor_whitemask.xml"; // 0x1c MovS
	func_105(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string); // 0x1d NEW_2
	var_1_object = var_28_object; // 0x1e TMov
	var_34_object = Obj(); var_35_object = Obj(); var_36_string = ""; var_37_string = ""; var_38_string = ""; // 0x20 PushV
	var_39_object = Obj(); // 0x21 PushV
	func_99(var_39_object); // 0x22 NEW_2
	var_35_object = var_39_object; // 0x23 Mov
	var_36_string = "pt_sobor_mask2"; // 0x25 MovS
	var_37_string = "pers_whitemask"; // 0x26 MovS
	var_38_string = "sobor_whitemask.xml"; // 0x27 MovS
	func_105(var_34_object, var_35_object, var_36_string, var_37_string, var_38_string); // 0x28 NEW_2
	var_2_object = var_34_object; // 0x29 TMov
	
Label_43:
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x2b PushV
	var_41_string = "quest_k12_01"; // 0x2c MovS
	var_42_string = "sobor_load"; // 0x2d MovS
	func_123(var_40_bool, var_41_string, var_42_string); // 0x2e NEW_2
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x30 PushV
	var_47_string = "quest_k5_04"; // 0x31 MovS
	var_48_string = "sobor_load"; // 0x32 MovS
	func_123(var_46_bool, var_47_string, var_48_string); // 0x33 NEW_2
	var_49_bool = 0; var_50_string = ""; var_51_string = ""; // 0x35 PushV
	var_50_string = "quest_k7_01"; // 0x36 MovS
	var_51_string = "sobor_load"; // 0x37 MovS
	func_123(var_49_bool, var_50_string, var_51_string); // 0x38 NEW_2
	return 2; // 0x3a Return
}


task_0_event_6(var_0_object, var_1_object, var_2_object)
{
	var_3_object = var_0_object; // 0x3b PushT
	if(var_3_object == 0) goto Label_63; // 0x3c JumpB
	RemoveActor(var_0_object); // 0x3d Func
	
Label_63:
	var_4_object = var_1_object; // 0x3f PushT
	if(var_4_object == 0) goto Label_67; // 0x40 JumpB
	RemoveActor(var_2_object); // 0x41 Func
	
Label_67:
	var_5_object = var_2_object; // 0x43 PushT
	if(var_5_object == 0) goto Label_71; // 0x44 JumpB
	RemoveActor(var_1_object); // 0x45 Func
	
Label_71:
	var_6_bool = 0; var_7_string = ""; var_8_string = ""; // 0x47 PushV
	var_7_string = "quest_k12_01"; // 0x48 MovS
	var_8_string = "sobor_unload"; // 0x49 MovS
	func_123(var_6_bool, var_7_string, var_8_string); // 0x4a NEW_2
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x4c PushV
	var_13_string = "quest_k5_04"; // 0x4d MovS
	var_14_string = "sobor_unload"; // 0x4e MovS
	func_123(var_12_bool, var_13_string, var_14_string); // 0x4f NEW_2
	return 0; // 0x51 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_string = "noaglaja"; // 0x53 PushS
	var_5_bool = var_3_string == var_4_string; // 0x54 Eq
	if(var_5_bool == 0) goto Label_91; // 0x55 JumpB
	var_6_string = "sobor_aglaja"; // 0x56 PushS
	var_7_int = 0; // 0x57 PushI
	SetVariable(var_6_string, var_7_int); // 0x58 Func
	goto Label_98; // 0x5a Jump
	
Label_98:
	return 0; // 0x62 Return
	
Label_91:
	var_8_string = "aglaja"; // 0x5b PushS
	var_9_bool = var_3_string == var_8_string; // 0x5c Eq
	if(var_9_bool == 0) goto Label_98; // 0x5d JumpB
	var_10_string = "sobor_aglaja"; // 0x5e PushS
	var_11_int = 1; // 0x5f PushI
	SetVariable(var_10_string, var_11_int); // 0x60 Func
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_123(var_6_bool, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x7b PushV
	FindActor(var_10_object, var_7_string); // 0x7c Func
	var_11_bool = var_10_object == 0; // 0x7e NullEq
	if(var_11_bool == 0) goto Label_130; // 0x7f JumpB
	var_6_bool = 0; // 0x80 MovB
	return 2; // 0x81 Return
	
Label_130:
	Trigger(var_10_object, var_8_string); // 0x82 Func
	var_6_bool = 1; // 0x84 MovB
	return 2; // 0x85 Return
}


func_105(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x69 PushV
	GetLocator(var_9_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x6a ObjFunc
	var_23_bool = var_19_bool == 0; // 0x6c Not
	if(var_23_bool == 0) goto Label_118; // 0x6d JumpB
	var_24_string = "Locator "; // 0x6e PushS
	var_25_int = var_24_string + var_9_string; // 0x6f Add
	var_26_string = " doesn't exist"; // 0x70 PushS
	var_27_int = var_25_int + var_26_string; // 0x71 Add
	Trace(var_27_int); // 0x72 Func
	var_22_object = 0; // 0x74 SetNull
	goto Label_120; // 0x75 Jump
	
Label_120:
	var_7_object = var_22_object; // 0x78 Mov
	return 8; // 0x79 Return
	
Label_118:
	AddActor(var_22_object, var_10_string, var_8_object, var_20_cvector, var_21_cvector, var_11_string); // 0x76 Func
}


func_99(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x63 PushV
	self(var_14_object); // 0x64 Func
	var_12_object = var_14_object; // 0x66 Mov
	return 2; // 0x67 Return
}


