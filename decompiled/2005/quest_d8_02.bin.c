task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	Trace(var_3_string); // 0x32 Func
	var_4_string = "fail"; // 0x34 PushS
	var_5_bool = var_3_string == var_4_string; // 0x35 Eq
	if(var_5_bool == 0) goto Label_59; // 0x36 JumpB
	func_77(); // 0x38 NEW_2
	goto Label_65; // 0x3a Jump
	
Label_65:
	return 0; // 0x41 Return
	
Label_59:
	var_17_string = "completed"; // 0x3b PushS
	var_18_bool = var_3_string == var_17_string; // 0x3c Eq
	if(var_18_bool == 0) goto Label_65; // 0x3d JumpB
	func_85(); // 0x3f NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_66(); // 0x88 NEW_2
	return 0; // 0x8a Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_float = 0; var_4_object = Obj(); var_5_float = 0; var_6_object = Obj(); // 0x0 PushV
	GetGameTime(var_5_float); // 0x1 Func
	var_7_int = 0; // 0x3 PushV
	func_163(var_7_int); // 0x4 NEW_2
	var_13_int = 8; // 0x6 PushI
	var_14_bool = var_7_int == var_13_int; // 0x7 Eq
	if(var_14_bool == 0) goto Label_13; // 0x8 JumpB
	var_15_int = 0; var_16_float = 0; // 0x9 PushV
	var_16_float = var_5_float; // 0xa Mov
	func_172(var_15_int, var_16_float); // 0xb NEW_2
	
Label_13:
	var_24_string = "cot_eva"; // 0xd PushS
	GetSceneByName(var_6_object, var_24_string); // 0xe Func
	var_25_object = Obj(); var_26_object = Obj(); var_27_string = ""; var_28_string = ""; var_29_string = ""; // 0x10 PushV
	var_26_object = var_6_object; // 0x11 Mov
	var_27_string = "pt_d8q02_doberman1"; // 0x12 MovS
	var_28_string = "pers_doberman"; // 0x13 MovS
	var_29_string = "d8q02_doberman.xml"; // 0x14 MovS
	func_145(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string); // 0x15 NEW_2
	var_0_object = var_25_object; // 0x16 TMov
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x18 PushV
	var_44_object = var_6_object; // 0x19 Mov
	var_45_string = "pt_d8q02_doberman2"; // 0x1a MovS
	var_46_string = "pers_doberman"; // 0x1b MovS
	var_47_string = "d8q02_doberman.xml"; // 0x1c MovS
	func_145(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string); // 0x1d NEW_2
	var_1_object = var_43_object; // 0x1e TMov
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = ""; // 0x20 PushV
	var_49_object = var_6_object; // 0x21 Mov
	var_50_string = "pt_d8q02_doberman3"; // 0x22 MovS
	var_51_string = "pers_doberman"; // 0x23 MovS
	var_52_string = "d8q02_doberman.xml"; // 0x24 MovS
	func_145(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string); // 0x25 NEW_2
	var_2_object = var_48_object; // 0x26 TMov
	var_53_string = "d8q02 dobermans are placed"; // 0x28 PushS
	Trace(var_53_string); // 0x29 Func
	var_54_int = 0; // 0x2b PushV
	var_54_int = 8; // 0x2c MovI
	func_115(var_54_int); // 0x2d NEW_2
	return 4; // 0x2f Return
}


func_66()
{
	var_5_int = 0; var_6_int = 0; // 0x42 PushV
	var_7_string = "d8q02"; // 0x43 PushS
	GetVariable(var_7_string, var_6_int); // 0x44 Func
	var_8_int = 1000; // 0x46 PushI
	var_9_bool = var_6_int != var_8_int; // 0x47 Neq
	if(var_9_bool == 0) goto Label_76; // 0x48 JumpB
	func_77(); // 0x4a NEW_2
	
Label_76:
	return 2; // 0x4c Return
}


func_163(var_7_int)
{
	var_8_float = 0; var_9_float = 0; // 0xa3 PushV
	GetGameTime(var_9_float); // 0xa4 Func
	var_10_int = 1; // 0xa6 PushI
	var_11_int = 0; // 0xa7 PushV
	var_12_int = 24; // 0xa8 PushI
	var_11_int = var_9_float / var_9_float; // 0xa9 Div2
	var_7_int = var_10_int + var_11_int; // 0xaa Add2
	return 2; // 0xab Return
}


func_139(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x8b PushV
	self(var_68_object); // 0x8c Func
	var_66_object = var_68_object; // 0x8e Mov
	return 2; // 0x8f Return
}


func_172(var_15_int, var_16_float)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_float = 0; // 0xad PushV
	var_18_int = 533303; // 0xae MovI
	var_19_int = 533302; // 0xaf MovI
	var_20_float = var_16_float; // 0xb0 Mov
	func_181(var_17_int, var_18_int, var_19_int, var_20_float); // 0xb1 NEW_2
	var_15_int = var_17_int; // 0xb2 Mov
	return 0; // 0xb4 Return
}


func_77()
{
	var_10_string = "d8q02"; // 0x4d PushS
	var_11_int = -1; // 0x4e PushI
	SetVariable(var_10_string, var_11_int); // 0x4f Func
	func_93(var_5_int, var_6_int); // 0x52 NEW_2
	return 0; // 0x54 Return
}


func_145(var_25_object, var_26_object, var_27_string, var_28_string, var_29_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); // 0x91 PushV
	GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector); // 0x92 ObjFunc
	var_38_bool = var_34_bool == 0; // 0x94 Not
	if(var_38_bool == 0) goto Label_158; // 0x95 JumpB
	var_39_string = "Locator "; // 0x96 PushS
	var_40_int = var_39_string + var_27_string; // 0x97 Add
	var_41_string = " doesn't exist"; // 0x98 PushS
	var_42_int = var_40_int + var_41_string; // 0x99 Add
	Trace(var_42_int); // 0x9a Func
	var_37_object = 0; // 0x9c SetNull
	goto Label_160; // 0x9d Jump
	
Label_160:
	var_25_object = var_37_object; // 0xa0 Mov
	return 8; // 0xa1 Return
	
Label_158:
	AddActor(var_37_object, var_28_string, var_26_object, var_35_cvector, var_36_cvector, var_29_string); // 0x9e Func
}


func_115(var_54_int)
{
	var_55_float = 0; var_56_float = 0; // 0x73 PushV
	GetGameTime(var_56_float); // 0x74 Func
	var_57_int = 24; // 0x76 PushI
	var_58_float = var_54_int * var_57_int; // 0x77 Mult
	var_59_bool = var_56_float >= var_58_float; // 0x78 GE
	if(var_59_bool == 0) goto Label_126; // 0x79 JumpB
	func_93(var_55_float, var_56_float); // 0x7b NEW_2
	goto Label_133; // 0x7d Jump
	
Label_133:
	return 2; // 0x85 Return
	
Label_126:
	var_69_int = 0; // 0x7e PushI
	var_70_int = 24; // 0x7f PushI
	var_71_float = var_54_int * var_70_int; // 0x80 Mult
	SetTimeEvent(var_69_int, var_71_float); // 0x81 Func
	Hold(); // 0x83 Func
}


func_85()
{
	var_19_string = "d8q02"; // 0x55 PushS
	var_20_int = 1000; // 0x56 PushI
	SetVariable(var_19_string, var_20_int); // 0x57 Func
	func_93(var_2_object, var_3_string); // 0x5a NEW_2
	return 0; // 0x5c Return
}


func_181(var_17_int, var_18_int, var_19_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0; // 0xb5 PushV
	AddMessage(var_18_int, var_19_int, var_20_float, var_22_int); // 0xb6 Func
	var_23_int = 6; // 0xb8 PushI
	SendWorldWndMessage(var_23_int); // 0xb9 Func
	var_17_int = var_22_int; // 0xbb Mov
	return 2; // 0xbc Return
}


func_93(var_0_object, var_56_float)
{
	EventDisable(26); // 0x5d EventDisable
	var_60_object = var_0_object; // 0x5e PushT
	if(var_60_object == 0) goto Label_99; // 0x5f JumpB
	var_61_string = "cleanup"; // 0x60 PushS
	Trigger(var_0_object, var_61_string); // 0x61 Func
	
Label_99:
	var_62_object = var_1_object; // 0x63 PushT
	if(var_62_object == 0) goto Label_104; // 0x64 JumpB
	var_63_string = "cleanup"; // 0x65 PushS
	Trigger(var_63_string, var_63_string); // 0x66 Func
	
Label_104:
	var_64_object = var_2_object; // 0x68 PushT
	if(var_64_object == 0) goto Label_109; // 0x69 JumpB
	var_65_string = "cleanup"; // 0x6a PushS
	Trigger(var_56_float, var_65_string); // 0x6b Func
	
Label_109:
	var_66_object = Obj(); // 0x6d PushV
	func_139(var_66_object); // 0x6e NEW_2
	RemoveActor(var_66_object); // 0x70 Func
	return 0; // 0x72 Return
}


