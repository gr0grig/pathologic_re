task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = var_0_bool; // 0x6 PushT
	if(var_4_bool == 0) goto Label_19; // 0x7 JumpB
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = ""; // 0x8 PushV
	var_10_object = Obj(); // 0x9 PushV
	func_73(var_10_object); // 0xa NEW_2
	var_6_object = var_10_object; // 0xb Mov
	var_7_string = "pt_Danko"; // 0xd MovS
	var_8_string = "NPC_Bakalavr"; // 0xe MovS
	var_9_string = "NPC_Klara_Danko.xml"; // 0xf MovS
	func_79(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string); // 0x10 NEW_2
	var_2_object = var_5_object; // 0x11 TMov
	
Label_19:
	var_26_bool = var_1_bool; // 0x13 PushT
	if(var_26_bool == 0) goto Label_32; // 0x14 JumpB
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x15 PushV
	var_32_object = Obj(); // 0x16 PushV
	func_73(var_32_object); // 0x17 NEW_2
	var_28_object = var_32_object; // 0x18 Mov
	var_29_string = "pt_eva"; // 0x1a MovS
	var_30_string = "NPC_Eva"; // 0x1b MovS
	var_31_string = "NPC_Klara_Eva.xml"; // 0x1c MovS
	func_79(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x1d NEW_2
	var_3_object = var_27_object; // 0x1e TMov
	
Label_32:
	var_33_bool = 0; var_34_string = ""; var_35_string = ""; // 0x20 PushV
	var_34_string = "quest_k6_01"; // 0x21 MovS
	var_35_string = "cot_eva_load"; // 0x22 MovS
	func_97(var_33_bool, var_34_string, var_35_string); // 0x23 NEW_2
	var_39_bool = 0; var_40_string = ""; var_41_string = ""; // 0x25 PushV
	var_40_string = "quest_k7_01"; // 0x26 MovS
	var_41_string = "cot_eva_load"; // 0x27 MovS
	func_97(var_39_bool, var_40_string, var_41_string); // 0x28 NEW_2
	return 0; // 0x2a Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_object = var_2_object; // 0x2b PushT
	if(var_4_object == 0) goto Label_47; // 0x2c JumpB
	RemoveActor(var_2_object); // 0x2d Func
	
Label_47:
	var_5_object = var_3_object; // 0x2f PushT
	if(var_5_object == 0) goto Label_51; // 0x30 JumpB
	RemoveActor(var_1_bool); // 0x31 Func
	
Label_51:
	return 0; // 0x33 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string)
{
	var_5_string = "nodanko"; // 0x35 PushS
	var_6_bool = var_4_string == var_5_string; // 0x36 Eq
	if(var_6_bool == 0) goto Label_58; // 0x37 JumpB
	var_0_bool = 0; // 0x38 TMovB
	goto Label_72; // 0x39 Jump
	
Label_72:
	return 0; // 0x48 Return
	
Label_58:
	var_7_string = "danko"; // 0x3a PushS
	var_8_bool = var_4_string == var_7_string; // 0x3b Eq
	if(var_8_bool == 0) goto Label_63; // 0x3c JumpB
	var_0_bool = 1; // 0x3d TMovB
	goto Label_72; // 0x3e Jump
	
Label_63:
	var_9_string = "noeva"; // 0x3f PushS
	var_10_bool = var_4_string == var_9_string; // 0x40 Eq
	if(var_10_bool == 0) goto Label_68; // 0x41 JumpB
	var_1_bool = 0; // 0x42 TMovB
	goto Label_72; // 0x43 Jump
	
Label_68:
	var_11_string = "eva"; // 0x44 PushS
	var_12_bool = var_4_string == var_11_string; // 0x45 Eq
	if(var_12_bool == 0) goto Label_72; // 0x46 JumpB
	var_1_bool = 1; // 0x47 TMovB
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_0_bool = 1; // 0x0 TMovB
	var_1_bool = 1; // 0x1 TMovB
	
Label_2:
	Hold(); // 0x2 Func
	goto Label_2; // 0x4 Jump
}


func_73(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x49 PushV
	self(var_12_object); // 0x4a Func
	var_10_object = var_12_object; // 0x4c Mov
	return 2; // 0x4d Return
}


func_97(var_33_bool, var_34_string, var_35_string)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x61 PushV
	FindActor(var_37_object, var_34_string); // 0x62 Func
	var_38_bool = var_37_object == 0; // 0x64 NullEq
	if(var_38_bool == 0) goto Label_104; // 0x65 JumpB
	var_33_bool = 0; // 0x66 MovB
	return 2; // 0x67 Return
	
Label_104:
	Trigger(var_37_object, var_35_string); // 0x68 Func
	var_33_bool = 1; // 0x6a MovB
	return 2; // 0x6b Return
}


func_79(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x4f PushV
	GetLocator(var_7_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x50 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x52 Not
	if(var_21_bool == 0) goto Label_92; // 0x53 JumpB
	var_22_string = "Locator "; // 0x54 PushS
	var_23_int = var_22_string + var_7_string; // 0x55 Add
	var_24_string = " doesn't exist"; // 0x56 PushS
	var_25_int = var_23_int + var_24_string; // 0x57 Add
	Trace(var_25_int); // 0x58 Func
	var_20_object = 0; // 0x5a SetNull
	goto Label_94; // 0x5b Jump
	
Label_94:
	var_5_object = var_20_object; // 0x5e Mov
	return 8; // 0x5f Return
	
Label_92:
	AddActor(var_20_object, var_8_string, var_6_object, var_18_cvector, var_19_cvector, var_9_string); // 0x5c Func
}


