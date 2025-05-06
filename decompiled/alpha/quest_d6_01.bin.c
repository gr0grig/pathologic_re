task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); // 0x4 PushV
	Trace(var_3_string); // 0x5 Func
	var_10_string = "saburov_klara"; // 0x7 PushS
	var_11_bool = var_3_string == var_10_string; // 0x8 Eq
	if(var_11_bool == 0) goto Label_23; // 0x9 JumpB
	var_12_string = "cot_katerina"; // 0xa PushS
	GetSceneByName(var_7_object, var_12_string); // 0xb Func
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0xd PushV
	var_14_object = var_7_object; // 0xe Mov
	var_15_string = "pt_d6q01_klara"; // 0xf MovS
	var_16_string = "NPC_Klara"; // 0x10 MovS
	var_17_string = "d6q01_Klara.xml"; // 0x11 MovS
	func_122(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string); // 0x12 Call
	var_0_object = var_13_object; // 0x13 TMov
	var_7_object = 0; // 0x15 SetNull
	goto Label_88; // 0x16 Jump
	
Label_88:
	return 6; // 0x58 Return
	
Label_23:
	var_31_string = "saburov_klara_remove"; // 0x17 PushS
	var_32_bool = var_3_string == var_31_string; // 0x18 Eq
	if(var_32_bool == 0) goto Label_30; // 0x19 JumpB
	var_33_string = "cleanup"; // 0x1a PushS
	Trigger(var_0_object, var_33_string); // 0x1b Func
	goto Label_88; // 0x1d Jump
	
Label_30:
	var_34_string = "eva_klara"; // 0x1e PushS
	var_35_bool = var_3_string == var_34_string; // 0x1f Eq
	if(var_35_bool == 0) goto Label_46; // 0x20 JumpB
	var_36_string = "cot_eva"; // 0x21 PushS
	GetSceneByName(var_8_object, var_36_string); // 0x22 Func
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x24 PushV
	var_38_object = var_8_object; // 0x25 Mov
	var_39_string = "pt_d6q01_klara"; // 0x26 MovS
	var_40_string = "NPC_Klara"; // 0x27 MovS
	var_41_string = "d6q01_Klara.xml"; // 0x28 MovS
	func_122(var_37_object, var_38_object, var_39_string, var_40_string, var_41_string); // 0x29 Call
	var_1_object = var_37_object; // 0x2a TMov
	var_8_object = 0; // 0x2c SetNull
	goto Label_88; // 0x2d Jump
	
Label_46:
	var_42_string = "eva_klara_remove"; // 0x2e PushS
	var_43_bool = var_3_string == var_42_string; // 0x2f Eq
	if(var_43_bool == 0) goto Label_53; // 0x30 JumpB
	var_44_string = "cleanup"; // 0x31 PushS
	Trigger(var_44_string, var_44_string); // 0x32 Func
	goto Label_88; // 0x34 Jump
	
Label_53:
	var_45_string = "albinos_klara"; // 0x35 PushS
	var_46_bool = var_3_string == var_45_string; // 0x36 Eq
	if(var_46_bool == 0) goto Label_68; // 0x37 JumpB
	GetMainOutdoorScene(var_9_object); // 0x38 Func
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x3a PushV
	var_48_object = var_9_object; // 0x3b Mov
	var_49_string = "pt_d6q03_albinos"; // 0x3c MovS
	var_50_string = "NPC_Klara"; // 0x3d MovS
	var_51_string = "d6q01_Klara.xml"; // 0x3e MovS
	func_122(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string); // 0x3f Call
	var_2_object = var_47_object; // 0x40 TMov
	var_9_object = 0; // 0x42 SetNull
	goto Label_88; // 0x43 Jump
	
Label_68:
	var_52_string = "albinos_klara_remove"; // 0x44 PushS
	var_53_bool = var_3_string == var_52_string; // 0x45 Eq
	if(var_53_bool == 0) goto Label_75; // 0x46 JumpB
	var_54_string = "cleanup"; // 0x47 PushS
	Trigger(var_9_object, var_54_string); // 0x48 Func
	goto Label_88; // 0x4a Jump
	
Label_75:
	var_55_string = "fail"; // 0x4b PushS
	var_56_bool = var_3_string == var_55_string; // 0x4c Eq
	if(var_56_bool == 0) goto Label_82; // 0x4d JumpB
	func_89(); // 0x4f Call
	goto Label_88; // 0x51 Jump
	
Label_82:
	var_65_string = "completed"; // 0x52 PushS
	var_66_bool = var_3_string == var_65_string; // 0x53 Eq
	if(var_66_bool == 0) goto Label_88; // 0x54 JumpB
	func_97(); // 0x56 Call
}


main(var_0_object, var_1_object, var_2_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_89()
{
	var_57_string = "d6q01"; // 0x59 PushS
	var_58_int = -1; // 0x5a PushI
	SetVariable(var_57_string, var_58_int); // 0x5b Func
	func_105(var_8_object, var_9_object); // 0x5e Call
	return 0; // 0x60 Return
}


func_122(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0x7a PushV
	GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector); // 0x7b ObjFunc
	var_26_bool = var_22_bool == 0; // 0x7d Not
	if(var_26_bool == 0) goto Label_135; // 0x7e JumpB
	var_27_string = "Locator "; // 0x7f PushS
	var_28_int = var_27_string + var_15_string; // 0x80 Add
	var_29_string = " doesn't exist"; // 0x81 PushS
	var_30_int = var_28_int + var_29_string; // 0x82 Add
	Trace(var_30_int); // 0x83 Func
	var_25_object = 0; // 0x85 SetNull
	goto Label_137; // 0x86 Jump
	
Label_137:
	var_13_object = var_25_object; // 0x89 Mov
	return 8; // 0x8a Return
	
Label_135:
	AddActor(var_25_object, var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string); // 0x87 Func
}


func_97()
{
	var_67_string = "d6q01"; // 0x61 PushS
	var_68_int = 1000; // 0x62 PushI
	SetVariable(var_67_string, var_68_int); // 0x63 Func
	func_105(var_8_object, var_9_object); // 0x66 Call
	return 0; // 0x68 Return
}


func_105(var_0_object, var_9_object)
{
	EventDisable(26); // 0x69 EventDisable
	var_59_object = var_0_object; // 0x6a PushT
	if(var_59_object == 0) goto Label_111; // 0x6b JumpB
	var_60_string = "cleanup"; // 0x6c PushS
	Trigger(var_0_object, var_60_string); // 0x6d Func
	
Label_111:
	var_61_object = var_1_object; // 0x6f PushT
	if(var_61_object == 0) goto Label_116; // 0x70 JumpB
	var_62_string = "cleanup"; // 0x71 PushS
	Trigger(var_62_string, var_62_string); // 0x72 Func
	
Label_116:
	var_63_object = var_2_object; // 0x74 PushT
	if(var_63_object == 0) goto Label_121; // 0x75 JumpB
	var_64_string = "cleanup"; // 0x76 PushS
	Trigger(var_9_object, var_64_string); // 0x77 Func
	
Label_121:
	return 0; // 0x79 Return
}


