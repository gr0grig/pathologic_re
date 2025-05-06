task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_int = 0; // 0x9 PushV
	Trace(var_3_string); // 0xa Func
	var_12_string = "saburov_klara"; // 0xc PushS
	var_13_bool = var_3_string == var_12_string; // 0xd Eq
	if(var_13_bool == 0) goto Label_28; // 0xe JumpB
	var_14_string = "cot_katerina"; // 0xf PushS
	GetSceneByName(var_8_object, var_14_string); // 0x10 Func
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = ""; // 0x12 PushV
	var_16_object = var_8_object; // 0x13 Mov
	var_17_string = "pt_d6q01_klara"; // 0x14 MovS
	var_18_string = "NPC_Klara"; // 0x15 MovS
	var_19_string = "d6q01_Klara.xml"; // 0x16 MovS
	func_166(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string); // 0x17 NEW_2
	var_0_object = var_15_object; // 0x18 TMov
	var_8_object = 0; // 0x1a SetNull
	goto Label_115; // 0x1b Jump
	
Label_115:
	return 8; // 0x73 Return
	
Label_28:
	var_33_string = "saburov_klara_remove"; // 0x1c PushS
	var_34_bool = var_3_string == var_33_string; // 0x1d Eq
	if(var_34_bool == 0) goto Label_35; // 0x1e JumpB
	var_35_string = "cleanup"; // 0x1f PushS
	Trigger(var_0_object, var_35_string); // 0x20 Func
	goto Label_115; // 0x22 Jump
	
Label_35:
	var_36_string = "eva_klara"; // 0x23 PushS
	var_37_bool = var_3_string == var_36_string; // 0x24 Eq
	if(var_37_bool == 0) goto Label_51; // 0x25 JumpB
	var_38_string = "cot_eva"; // 0x26 PushS
	GetSceneByName(var_9_object, var_38_string); // 0x27 Func
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x29 PushV
	var_40_object = var_9_object; // 0x2a Mov
	var_41_string = "pt_d6q01_klara"; // 0x2b MovS
	var_42_string = "NPC_Klara"; // 0x2c MovS
	var_43_string = "d6q01_Klara.xml"; // 0x2d MovS
	func_166(var_39_object, var_40_object, var_41_string, var_42_string, var_43_string); // 0x2e NEW_2
	var_1_object = var_39_object; // 0x2f TMov
	var_9_object = 0; // 0x31 SetNull
	goto Label_115; // 0x32 Jump
	
Label_51:
	var_44_string = "eva_klara_remove"; // 0x33 PushS
	var_45_bool = var_3_string == var_44_string; // 0x34 Eq
	if(var_45_bool == 0) goto Label_58; // 0x35 JumpB
	var_46_string = "cleanup"; // 0x36 PushS
	Trigger(var_46_string, var_46_string); // 0x37 Func
	goto Label_115; // 0x39 Jump
	
Label_58:
	var_47_string = "albinos_klara"; // 0x3a PushS
	var_48_bool = var_3_string == var_47_string; // 0x3b Eq
	if(var_48_bool == 0) goto Label_73; // 0x3c JumpB
	GetMainOutdoorScene(var_10_object); // 0x3d Func
	var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = ""; // 0x3f PushV
	var_50_object = var_10_object; // 0x40 Mov
	var_51_string = "pt_d6q03_albinos"; // 0x41 MovS
	var_52_string = "NPC_Klara"; // 0x42 MovS
	var_53_string = "d6q01_Klara.xml"; // 0x43 MovS
	func_166(var_49_object, var_50_object, var_51_string, var_52_string, var_53_string); // 0x44 NEW_2
	var_2_object = var_49_object; // 0x45 TMov
	var_10_object = 0; // 0x47 SetNull
	goto Label_115; // 0x48 Jump
	
Label_73:
	var_54_string = "albinos_klara_remove"; // 0x49 PushS
	var_55_bool = var_3_string == var_54_string; // 0x4a Eq
	if(var_55_bool == 0) goto Label_82; // 0x4b JumpB
	var_56_object = var_2_object; // 0x4c PushT
	if(var_56_object == 0) goto Label_81; // 0x4d JumpB
	var_57_string = "cleanup"; // 0x4e PushS
	Trigger(var_11_int, var_57_string); // 0x4f Func
	
Label_81:
	goto Label_115; // 0x51 Jump
	
Label_82:
	var_58_string = "cleanup"; // 0x52 PushS
	var_59_bool = var_3_string == var_58_string; // 0x53 Eq
	if(var_59_bool == 0) goto Label_102; // 0x54 JumpB
	var_60_string = "d6q01"; // 0x55 PushS
	GetVariable(var_60_string, var_11_int); // 0x56 Func
	var_61_int = 1000; // 0x58 PushI
	var_62_bool = var_11_int != var_61_int; // 0x59 Neq
	if(var_62_bool == 0) goto Label_95; // 0x5a JumpB
	func_116(); // 0x5c NEW_2
	goto Label_98; // 0x5e Jump
	
Label_98:
	func_148(); // 0x63 NEW_2
	goto Label_115; // 0x65 Jump
	
Label_95:
	func_132(var_10_object, var_11_int); // 0x60 NEW_2
	
Label_102:
	var_84_string = "fail"; // 0x66 PushS
	var_85_bool = var_3_string == var_84_string; // 0x67 Eq
	if(var_85_bool == 0) goto Label_109; // 0x68 JumpB
	func_116(); // 0x6a NEW_2
	goto Label_115; // 0x6c Jump
	
Label_109:
	var_86_string = "completed"; // 0x6d PushS
	var_87_bool = var_3_string == var_86_string; // 0x6e Eq
	if(var_87_bool == 0) goto Label_115; // 0x6f JumpB
	func_124(); // 0x71 NEW_2
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_string = ""; var_4_bool = 0; // 0x0 PushV
	var_3_string = "sobor@door1"; // 0x1 MovS
	var_4_bool = 0; // 0x2 MovB
	func_184(var_3_string, var_4_bool); // 0x3 NEW_2
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_160(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xa0 PushV
	self(var_83_object); // 0xa1 Func
	var_81_object = var_83_object; // 0xa3 Mov
	return 2; // 0xa4 Return
}


func_132(var_0_object, var_11_int)
{
	var_65_object = var_0_object; // 0x84 PushT
	if(var_65_object == 0) goto Label_137; // 0x85 JumpB
	var_66_string = "cleanup"; // 0x86 PushS
	Trigger(var_0_object, var_66_string); // 0x87 Func
	
Label_137:
	var_67_object = var_1_object; // 0x89 PushT
	if(var_67_object == 0) goto Label_142; // 0x8a JumpB
	var_68_string = "cleanup"; // 0x8b PushS
	Trigger(var_68_string, var_68_string); // 0x8c Func
	
Label_142:
	var_69_object = var_2_object; // 0x8e PushT
	if(var_69_object == 0) goto Label_147; // 0x8f JumpB
	var_70_string = "cleanup"; // 0x90 PushS
	Trigger(var_11_int, var_70_string); // 0x91 Func
	
Label_147:
	return 0; // 0x93 Return
}


func_166(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); // 0xa6 PushV
	GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector); // 0xa7 ObjFunc
	var_28_bool = var_24_bool == 0; // 0xa9 Not
	if(var_28_bool == 0) goto Label_179; // 0xaa JumpB
	var_29_string = "Locator "; // 0xab PushS
	var_30_int = var_29_string + var_17_string; // 0xac Add
	var_31_string = " doesn't exist"; // 0xad PushS
	var_32_int = var_30_int + var_31_string; // 0xae Add
	Trace(var_32_int); // 0xaf Func
	var_27_object = 0; // 0xb1 SetNull
	goto Label_181; // 0xb2 Jump
	
Label_181:
	var_15_object = var_27_object; // 0xb5 Mov
	return 8; // 0xb6 Return
	
Label_179:
	AddActor(var_27_object, var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string); // 0xb3 Func
}


func_116()
{
	var_63_string = "d6q01"; // 0x74 PushS
	var_64_int = -1; // 0x75 PushI
	SetVariable(var_63_string, var_64_int); // 0x76 Func
	func_132(var_10_object, var_11_int); // 0x79 NEW_2
	return 0; // 0x7b Return
}


func_148()
{
	EventDisable(26); // 0x94 EventDisable
	var_71_string = ""; var_72_bool = 0; // 0x95 PushV
	var_71_string = "sobor@door1"; // 0x96 MovS
	var_72_bool = 1; // 0x97 MovB
	func_184(var_71_string, var_72_bool); // 0x98 NEW_2
	var_81_object = Obj(); // 0x9a PushV
	func_160(var_81_object); // 0x9b NEW_2
	RemoveActor(var_81_object); // 0x9d Func
	return 0; // 0x9f Return
}


func_184(var_3_string, var_4_bool)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xb8 PushV
	FindActor(var_6_object, var_3_string); // 0xb9 Func
	var_7_bool = var_6_object == 0; // 0xbb Not
	if(var_7_bool == 0) goto Label_196; // 0xbc JumpB
	var_8_string = "Door "; // 0xbd PushS
	var_9_int = var_8_string + var_3_string; // 0xbe Add
	var_10_string = " not found"; // 0xbf PushS
	var_11_int = var_9_int + var_10_string; // 0xc0 Add
	Trace(var_11_int); // 0xc1 Func
	goto Label_199; // 0xc3 Jump
	
Label_199:
	return 2; // 0xc7 Return
	
Label_196:
	var_12_string = "locked"; // 0xc4 PushS
	SetProperty(var_12_string, var_4_bool); // 0xc5 ObjFunc
}


func_124()
{
	var_88_string = "d6q01"; // 0x7c PushS
	var_89_int = 1000; // 0x7d PushI
	SetVariable(var_88_string, var_89_int); // 0x7e Func
	func_132(var_10_object, var_11_int); // 0x81 NEW_2
	return 0; // 0x83 Return
}


