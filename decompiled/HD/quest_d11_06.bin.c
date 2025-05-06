task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x41 PushV
	Trace(var_2_string); // 0x42 Func
	var_5_string = "place_maria"; // 0x44 PushS
	var_6_bool = var_2_string == var_5_string; // 0x45 Eq
	if(var_6_bool == 0) goto Label_84; // 0x46 JumpB
	var_7_string = "crypt2"; // 0x47 PushS
	GetSceneByName(var_4_object, var_7_string); // 0x48 Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0x4a PushV
	var_9_object = var_4_object; // 0x4b Mov
	var_10_string = "pt_d11q06_maria"; // 0x4c MovS
	var_11_string = "NPC_Maria"; // 0x4d MovS
	var_12_string = "d11q06_maria.xml"; // 0x4e MovS
	func_178(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string); // 0x4f NEW_2
	var_1_object = var_8_object; // 0x50 TMov
	var_4_object = 0; // 0x52 SetNull
	goto Label_97; // 0x53 Jump
	
Label_97:
	return 2; // 0x61 Return
	
Label_84:
	var_26_string = "fail"; // 0x54 PushS
	var_27_bool = var_2_string == var_26_string; // 0x55 Eq
	if(var_27_bool == 0) goto Label_91; // 0x56 JumpB
	func_112(); // 0x58 NEW_2
	goto Label_97; // 0x5a Jump
	
Label_91:
	var_30_string = "completed"; // 0x5b PushS
	var_31_bool = var_2_string == var_30_string; // 0x5c Eq
	if(var_31_bool == 0) goto Label_97; // 0x5d JumpB
	func_120(); // 0x5f NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_98(); // 0xa9 NEW_2
	return 0; // 0xab Return
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_3_object); // 0x1 Func
	CreateObjectVector(var_0_object); // 0x3 Func
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = ""; // 0x5 PushV
	var_5_object = var_3_object; // 0x6 Mov
	var_6_string = "pt_d11q06_wastedmale1"; // 0x7 MovS
	var_7_string = "pers_wasted_male"; // 0x8 MovS
	var_8_string = "d11q06_wastedmale.xml"; // 0x9 MovS
	func_196(var_5_object, var_6_string, var_7_string, var_8_string); // 0xa NEW_2
	add(var_4_object); // 0xc TObjFunc
	var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = ""; // 0xe PushV
	var_23_object = var_3_object; // 0xf Mov
	var_24_string = "pt_d11q06_wastedmale2"; // 0x10 MovS
	var_25_string = "pers_wasted_male"; // 0x11 MovS
	var_26_string = "d11q06_wastedmale.xml"; // 0x12 MovS
	func_196(var_23_object, var_24_string, var_25_string, var_26_string); // 0x13 NEW_2
	add(var_22_object); // 0x15 TObjFunc
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x17 PushV
	var_28_object = var_3_object; // 0x18 Mov
	var_29_string = "pt_d11q06_wastedmale3"; // 0x19 MovS
	var_30_string = "pers_wasted_male"; // 0x1a MovS
	var_31_string = "d11q06_wastedmale.xml"; // 0x1b MovS
	func_196(var_28_object, var_29_string, var_30_string, var_31_string); // 0x1c NEW_2
	add(var_27_object); // 0x1e TObjFunc
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = ""; // 0x20 PushV
	var_33_object = var_3_object; // 0x21 Mov
	var_34_string = "pt_d11q06_wastedmale4"; // 0x22 MovS
	var_35_string = "pers_wasted_male"; // 0x23 MovS
	var_36_string = "d11q06_wastedmale.xml"; // 0x24 MovS
	func_196(var_33_object, var_34_string, var_35_string, var_36_string); // 0x25 NEW_2
	add(var_32_object); // 0x27 TObjFunc
	var_37_object = Obj(); var_38_object = Obj(); var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x29 PushV
	var_38_object = var_3_object; // 0x2a Mov
	var_39_string = "pt_d11q06_wastedgirl1"; // 0x2b MovS
	var_40_string = "pers_wasted_girl"; // 0x2c MovS
	var_41_string = "d11q06_wastedgirl.xml"; // 0x2d MovS
	func_196(var_38_object, var_39_string, var_40_string, var_41_string); // 0x2e NEW_2
	add(var_37_object); // 0x30 TObjFunc
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x32 PushV
	var_43_object = var_3_object; // 0x33 Mov
	var_44_string = "pt_d11q06_wastedgirl2"; // 0x34 MovS
	var_45_string = "pers_wasted_girl"; // 0x35 MovS
	var_46_string = "d11q06_wastedgirl.xml"; // 0x36 MovS
	func_196(var_43_object, var_44_string, var_45_string, var_46_string); // 0x37 NEW_2
	add(var_42_object); // 0x39 TObjFunc
	var_47_int = 0; // 0x3b PushV
	var_47_int = 11; // 0x3c MovI
	func_148(var_47_int); // 0x3d NEW_2
	return 2; // 0x3f Return
}


func_128()
{
	return 0; // 0x80 Return
}


func_129(var_0_object)
{
	EventDisable(26); // 0x81 EventDisable
	func_128(); // 0x83 NEW_2
	var_53_object = Obj(); // 0x85 PushV
	var_53_object = var_0_object; // 0x86 MovT
	func_214(var_53_object); // 0x87 NEW_2
	var_64_object = var_1_object; // 0x89 PushT
	if(var_64_object == 0) goto Label_142; // 0x8a JumpB
	var_65_string = "cleanup"; // 0x8b PushS
	Trigger(var_65_string, var_65_string); // 0x8c Func
	
Label_142:
	var_66_object = Obj(); // 0x8e PushV
	func_172(var_66_object); // 0x8f NEW_2
	RemoveActor(var_66_object); // 0x91 Func
	return 0; // 0x93 Return
}


func_98()
{
	var_4_int = 0; var_5_int = 0; // 0x62 PushV
	var_6_string = "d11q06"; // 0x63 PushS
	GetVariable(var_6_string, var_5_int); // 0x64 Func
	var_7_int = 1000; // 0x66 PushI
	var_8_bool = var_5_int != var_7_int; // 0x67 Neq
	if(var_8_bool == 0) goto Label_108; // 0x68 JumpB
	func_112(); // 0x6a NEW_2
	
Label_108:
	func_129(var_5_int); // 0x6d NEW_2
	return 2; // 0x6f Return
}


func_196(var_4_object, var_6_string, var_7_string, var_8_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0xc4 PushV
	GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector); // 0xc5 ObjFunc
	var_17_bool = var_13_bool == 0; // 0xc7 Not
	if(var_17_bool == 0) goto Label_209; // 0xc8 JumpB
	var_18_string = "Locator "; // 0xc9 PushS
	var_19_int = var_18_string + var_6_string; // 0xca Add
	var_20_string = " doesn't exist"; // 0xcb PushS
	var_21_int = var_19_int + var_20_string; // 0xcc Add
	Trace(var_21_int); // 0xcd Func
	var_16_object = 0; // 0xcf SetNull
	goto Label_211; // 0xd0 Jump
	
Label_211:
	var_4_object = var_16_object; // 0xd3 Mov
	return 8; // 0xd4 Return
	
Label_209:
	AddStationaryActor(var_16_object, var_14_cvector, var_15_cvector, var_7_string, var_8_string); // 0xd1 ObjFunc
}


func_172(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xac PushV
	self(var_68_object); // 0xad Func
	var_66_object = var_68_object; // 0xaf Mov
	return 2; // 0xb0 Return
}


func_112()
{
	var_9_string = "d11q06"; // 0x70 PushS
	var_10_int = -1; // 0x71 PushI
	SetVariable(var_9_string, var_10_int); // 0x72 Func
	func_128(); // 0x75 NEW_2
	return 0; // 0x77 Return
}


func_178(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0xb2 PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0xb3 ObjFunc
	var_21_bool = var_17_bool == 0; // 0xb5 Not
	if(var_21_bool == 0) goto Label_191; // 0xb6 JumpB
	var_22_string = "Locator "; // 0xb7 PushS
	var_23_int = var_22_string + var_10_string; // 0xb8 Add
	var_24_string = " doesn't exist"; // 0xb9 PushS
	var_25_int = var_23_int + var_24_string; // 0xba Add
	Trace(var_25_int); // 0xbb Func
	var_20_object = 0; // 0xbd SetNull
	goto Label_193; // 0xbe Jump
	
Label_193:
	var_8_object = var_20_object; // 0xc1 Mov
	return 8; // 0xc2 Return
	
Label_191:
	AddActor(var_20_object, var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string); // 0xbf Func
}


func_148(var_47_int)
{
	var_48_float = 0; var_49_float = 0; // 0x94 PushV
	GetGameTime(var_49_float); // 0x95 Func
	var_50_int = 24; // 0x97 PushI
	var_51_float = var_47_int * var_50_int; // 0x98 Mult
	var_52_bool = var_49_float >= var_51_float; // 0x99 GE
	if(var_52_bool == 0) goto Label_159; // 0x9a JumpB
	func_129(var_49_float); // 0x9c NEW_2
	goto Label_166; // 0x9e Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_159:
	var_69_int = 0; // 0x9f PushI
	var_70_int = 24; // 0xa0 PushI
	var_71_float = var_47_int * var_70_int; // 0xa1 Mult
	SetTimeEvent(var_69_int, var_71_float); // 0xa2 Func
	Hold(); // 0xa4 Func
}


func_214(var_53_object)
{
	var_54_int = 0; var_55_int = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj(); // 0xd6 PushV
	var_60_object = var_53_object; // 0xd7 Push
	if(var_60_object == 0) goto Label_234; // 0xd8 JumpB
	size(var_57_int); // 0xd9 ObjFunc
	var_58_int = 0; // 0xdb MovI
	
Label_220:
	var_61_bool = var_58_int < var_57_int; // 0xdc LT
	if(var_61_bool == 0) goto Label_232; // 0xdd JumpB
	get(var_59_object, var_58_int); // 0xde ObjFunc
	var_62_object = var_59_object; // 0xe0 Push
	if(var_62_object == 0) goto Label_228; // 0xe1 JumpB
	Remove(); // 0xe2 ObjFunc
	
Label_228:
	var_59_object = 0; // 0xe4 SetNull
	var_63_int = 1; // 0xe5 PushI
	var_58_int = var_58_int + var_63_int; // 0xe6 Add2
	goto Label_220; // 0xe7 Jump
	
Label_232:
	clear(); // 0xe8 ObjFunc
	
Label_234:
	return 6; // 0xea Return
}


func_120()
{
	var_32_string = "d11q06"; // 0x78 PushS
	var_33_int = 1000; // 0x79 PushI
	SetVariable(var_32_string, var_33_int); // 0x7a Func
	func_128(); // 0x7d NEW_2
	return 0; // 0x7f Return
}


