task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_bool = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; // 0x1e PushV
	var_17_bool = 0; // 0x1f MovB
	var_25_string = "inited"; // 0x20 PushS
	HasProperty(var_25_string, var_16_bool); // 0x21 Func
	var_26_bool = var_16_bool; // 0x23 Push
	if(var_26_bool == 0) goto Label_42; // 0x24 JumpB
	var_27_string = "inited"; // 0x25 PushS
	GetProperty(var_27_string, var_18_int); // 0x26 Func
	var_28_int = 0; // 0x28 PushI
	var_17_bool = var_18_int != var_28_int; // 0x29 Neq2
	
Label_42:
	var_29_bool = var_17_bool == 0; // 0x2a Not
	if(var_29_bool == 0) goto Label_45; // 0x2b JumpB
	return 18; // 0x2c Return
	
Label_45:
	var_30_bool = var_5_bool == 0; // 0x2d Not
	if(var_30_bool == 0) goto Label_59; // 0x2e JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x2f PushV
	var_33_object = Obj(); // 0x30 PushV
	func_133(var_33_object); // 0x31 NEW_2
	var_32_object = var_33_object; // 0x32 Mov
	func_166(var_31_object, var_32_object); // 0x34 NEW_2
	var_3_object = var_31_object; // 0x35 TMov
	var_54_string = "day"; // 0x37 PushS
	SetProperty(var_54_string, var_20_int); // 0x38 TObjFunc
	var_5_bool = 1; // 0x3a TMovB
	
Label_59:
	size(var_19_int); // 0x3b TObjFunc
	var_20_int = 0; // 0x3d MovI
	
Label_62:
	var_55_bool = var_20_int < var_19_int; // 0x3e LT
	if(var_55_bool == 0) goto Label_110; // 0x3f JumpB
	get(var_21_string, var_20_int); // 0x40 TObjFunc
	get(var_22_string, var_20_int); // 0x42 TObjFunc
	var_23_object = 0; // 0x44 SetNull
	get(var_24_bool, var_20_int); // 0x45 TObjFunc
	var_56_bool = var_24_bool == 0; // 0x47 Not
	if(var_56_bool == 0) goto Label_104; // 0x48 JumpB
	var_57_string = "strActorName: "; // 0x49 PushS
	var_58_int = var_57_string + var_21_string; // 0x4a Add
	Trace(var_58_int); // 0x4b Func
	var_59_string = "strXMLName: "; // 0x4d PushS
	var_60_int = var_59_string + var_22_string; // 0x4e Add
	Trace(var_60_int); // 0x4f Func
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x51 PushV
	var_66_object = Obj(); // 0x52 PushV
	func_133(var_66_object); // 0x53 NEW_2
	var_62_object = var_66_object; // 0x54 Mov
	var_67_string = "pt_k2s_svita"; // 0x56 PushS
	var_68_int = 1; // 0x57 PushI
	var_69_int = var_20_int + var_68_int; // 0x58 Add
	var_63_string = var_67_string + var_69_int; // 0x59 Add2
	var_64_string = var_21_string; // 0x5a Mov
	var_65_string = var_22_string; // 0x5b Mov
	func_139(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x5c NEW_2
	var_23_object = var_61_object; // 0x5d Mov
	var_70_string = "setting property"; // 0x5f PushS
	Trace(var_70_string); // 0x60 Func
	var_71_string = "index"; // 0x62 PushS
	SetProperty(var_71_string, var_20_int); // 0x63 ObjFunc
	var_72_string = "property set"; // 0x65 PushS
	Trace(var_72_string); // 0x66 Func
	
Label_104:
	set(var_20_int, var_23_object); // 0x68 TObjFunc
	var_23_object = 0; // 0x6a SetNull
	var_73_int = 1; // 0x6b PushI
	var_20_int = var_20_int + var_73_int; // 0x6c Add2
	goto Label_62; // 0x6d Jump
	
Label_110:
	return 18; // 0x6e Return
}


task_0_event_6(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_int = 0; var_13_object = Obj(); var_14_bool = 0; // 0x6f PushV
	size(var_11_int); // 0x70 TObjFunc
	var_12_int = 0; // 0x72 MovI
	
Label_115:
	var_15_bool = var_12_int < var_11_int; // 0x73 LT
	if(var_15_bool == 0) goto Label_132; // 0x74 JumpB
	get(var_13_object, var_12_int); // 0x75 TObjFunc
	var_16_object = var_13_object; // 0x77 Push
	if(var_16_object == 0) goto Label_128; // 0x78 JumpB
	var_17_string = "dead"; // 0x79 PushS
	HasProperty(var_17_string, var_14_bool); // 0x7a ObjFunc
	set(var_12_int, var_14_bool); // 0x7c TObjFunc
	RemoveActor(var_13_object); // 0x7e Func
	
Label_128:
	var_13_object = 0; // 0x80 SetNull
	var_18_int = 1; // 0x81 PushI
	var_12_int = var_12_int + var_18_int; // 0x82 Add2
	goto Label_115; // 0x83 Jump
	
Label_132:
	return 8; // 0x84 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_int)
{
	var_7_int = 0; var_8_int = 0; // 0x0 PushV
	var_5_bool = 0; // 0x1 TMovB
	var_9_int = 0; // 0x2 PushV
	func_157(var_9_int); // 0x3 NEW_2
	var_6_int = var_9_int; // 0x4 TMov
	CreateObjectVector(var_5_bool); // 0x6 Func
	CreateStringVector(var_0_object); // 0x8 Func
	CreateStringVector(var_8_int); // 0xa Func
	CreateBoolVector(var_7_int); // 0xc Func
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); // 0xe PushV
	var_15_object = var_0_object; // 0xf MovT
	var_16_object = var_1_object; // 0x10 MovT
	var_17_object = var_2_object; // 0x11 MovT
	func_176(); // 0x12 NEW_2
	size(var_8_int); // 0x14 TObjFunc
	var_27_int = var_8_int; // 0x16 Push
	if(var_27_int == 0) goto Label_26; // 0x17 JumpB
	resize(var_8_int); // 0x18 TObjFunc
	
Label_26:
	Hold(); // 0x1a Func
	goto Label_26; // 0x1c Jump
}


func_133(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x85 PushV
	self(var_35_object); // 0x86 Func
	var_33_object = var_35_object; // 0x88 Mov
	return 2; // 0x89 Return
}


func_166(var_31_object, var_32_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0xa7 PushV
	var_37_object = var_32_object; // 0xa8 Mov
	var_38_string = "pt_k2s_npc"; // 0xa9 MovS
	var_39_string = "NPC_Bakalavr"; // 0xaa MovS
	var_40_string = "k2system_danko.xml"; // 0xab MovS
	func_139(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string); // 0xac NEW_2
	var_31_object = var_36_object; // 0xad Mov
	return 0; // 0xaf Return
}


func_139(var_36_object, var_37_object, var_38_string, var_39_string, var_40_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x8b PushV
	GetLocator(var_38_string, var_45_bool, var_46_cvector, var_47_cvector); // 0x8c ObjFunc
	var_49_bool = var_45_bool == 0; // 0x8e Not
	if(var_49_bool == 0) goto Label_152; // 0x8f JumpB
	var_50_string = "Locator "; // 0x90 PushS
	var_51_int = var_50_string + var_38_string; // 0x91 Add
	var_52_string = " doesn't exist"; // 0x92 PushS
	var_53_int = var_51_int + var_52_string; // 0x93 Add
	Trace(var_53_int); // 0x94 Func
	var_48_object = 0; // 0x96 SetNull
	goto Label_154; // 0x97 Jump
	
Label_154:
	var_36_object = var_48_object; // 0x9a Mov
	return 8; // 0x9b Return
	
Label_152:
	AddActor(var_48_object, var_39_string, var_37_object, var_46_cvector, var_47_cvector, var_40_string); // 0x98 Func
}


func_176()
{
	var_18_string = "pers_wasted_male"; // 0xb1 PushS
	add(var_18_string); // 0xb2 ObjFunc
	var_19_string = "k2system_wasted_male.xml"; // 0xb4 PushS
	add(var_19_string); // 0xb5 ObjFunc
	var_20_bool = 0; // 0xb7 PushB
	add(var_20_bool); // 0xb8 ObjFunc
	var_21_string = "pers_wasted_male"; // 0xba PushS
	add(var_21_string); // 0xbb ObjFunc
	var_22_string = "k2system_wasted_male.xml"; // 0xbd PushS
	add(var_22_string); // 0xbe ObjFunc
	var_23_bool = 0; // 0xc0 PushB
	add(var_23_bool); // 0xc1 ObjFunc
	var_24_string = "pers_patrool"; // 0xc3 PushS
	add(var_24_string); // 0xc4 ObjFunc
	var_25_string = "k2system_patrol.xml"; // 0xc6 PushS
	add(var_25_string); // 0xc7 ObjFunc
	var_26_bool = 0; // 0xc9 PushB
	add(var_26_bool); // 0xca ObjFunc
	return 0; // 0xcc Return
}


func_157(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x9d PushV
	GetGameTime(var_11_float); // 0x9e Func
	var_12_int = 1; // 0xa0 PushI
	var_13_int = 0; // 0xa1 PushV
	var_14_int = 24; // 0xa2 PushI
	var_13_int = var_11_float / var_11_float; // 0xa3 Div2
	var_9_int = var_12_int + var_13_int; // 0xa4 Add2
	return 2; // 0xa5 Return
}


