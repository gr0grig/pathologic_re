task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_int, var_5_float)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x28 PushV
	var_8_int = 1; // 0x29 PushI
	var_9_bool = var_4_int == var_8_int; // 0x2a Eq
	if(var_9_bool == 0) goto Label_66; // 0x2b JumpB
	var_10_bool = 0; // 0x2c PushV
	func_255(var_10_bool); // 0x2d NEW_2
	if(var_10_bool == 0) goto Label_53; // 0x2f JumpB
	var_16_string = "bad maria init"; // 0x30 PushS
	Trace(var_16_string); // 0x31 Func
	var_3_bool = 1; // 0x33 TMovB
	goto Label_65; // 0x34 Jump
	
Label_65:
	goto Label_71; // 0x41 Jump
	
Label_71:
	return 2; // 0x47 Return
	
Label_53:
	var_17_string = "shouse1_kabak"; // 0x35 PushS
	GetSceneByName(var_7_object, var_17_string); // 0x36 Func
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = ""; // 0x38 PushV
	var_19_object = var_7_object; // 0x39 Mov
	var_20_string = "pt_b2q03_maria"; // 0x3a MovS
	var_21_string = "NPC_Maria"; // 0x3b MovS
	var_22_string = "b2q03_maria.xml"; // 0x3c MovS
	func_229(var_18_object, var_19_object, var_20_string, var_21_string, var_22_string); // 0x3d NEW_2
	var_1_object = var_18_object; // 0x3e TMov
	var_7_object = 0; // 0x40 SetNull
	
Label_66:
	var_36_int = 0; var_37_float = 0; // 0x42 PushV
	var_36_int = var_4_int; // 0x43 Mov
	var_37_float = var_5_float; // 0x44 Mov
	func_218(); // 0x45 NEW_2
}


task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_string)
{
	var_5_float = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); // 0x48 PushV
	Trace(var_4_string); // 0x49 Func
	var_11_string = "place_maria"; // 0x4b PushS
	var_12_bool = var_4_string == var_11_string; // 0x4c Eq
	if(var_12_bool == 0) goto Label_92; // 0x4d JumpB
	var_13_int = 0; // 0x4e PushV
	func_247(var_13_int); // 0x4f NEW_2
	var_18_int = 22; // 0x51 PushI
	var_19_bool = var_13_int < var_18_int; // 0x52 LT
	if(var_19_bool == 0) goto Label_91; // 0x53 JumpB
	GetGameTime(var_8_float); // 0x54 Func
	var_20_float = 0.5; // 0x56 PushF
	var_8_float = var_8_float + var_20_float; // 0x57 Add2
	var_21_int = 1; // 0x58 PushI
	SetTimeEvent(var_21_int, var_8_float); // 0x59 Func
	
Label_91:
	goto Label_139; // 0x5b Jump
	
Label_139:
	return 6; // 0x8b Return
	
Label_92:
	var_22_string = "kabak_unload"; // 0x5c PushS
	var_23_bool = var_4_string == var_22_string; // 0x5d Eq
	if(var_23_bool == 0) goto Label_126; // 0x5e JumpB
	var_24_bool = var_2_bool; // 0x5f PushT
	if(var_24_bool == 0) goto Label_110; // 0x60 JumpB
	var_2_bool = 0; // 0x61 TMovB
	var_25_string = "shouse1_kabak"; // 0x62 PushS
	GetSceneByName(var_9_object, var_25_string); // 0x63 Func
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x65 PushV
	var_27_object = var_9_object; // 0x66 Mov
	var_28_string = "pt_b2q03_petr"; // 0x67 MovS
	var_29_string = "NPC_Petr"; // 0x68 MovS
	var_30_string = "b2q03_petr.xml"; // 0x69 MovS
	func_229(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string); // 0x6a NEW_2
	var_0_object = var_26_object; // 0x6b TMov
	var_9_object = 0; // 0x6d SetNull
	
Label_110:
	var_44_bool = var_3_bool; // 0x6e PushT
	if(var_44_bool == 0) goto Label_125; // 0x6f JumpB
	var_3_bool = 0; // 0x70 TMovB
	var_45_string = "shouse1_kabak"; // 0x71 PushS
	GetSceneByName(var_10_object, var_45_string); // 0x72 Func
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x74 PushV
	var_47_object = var_10_object; // 0x75 Mov
	var_48_string = "pt_b2q03_maria"; // 0x76 MovS
	var_49_string = "NPC_Maria"; // 0x77 MovS
	var_50_string = "b2q03_maria.xml"; // 0x78 MovS
	func_229(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string); // 0x79 NEW_2
	var_1_object = var_46_object; // 0x7a TMov
	var_10_object = 0; // 0x7c SetNull
	
Label_125:
	goto Label_139; // 0x7d Jump
	
Label_126:
	var_51_string = "fail"; // 0x7e PushS
	var_52_bool = var_4_string == var_51_string; // 0x7f Eq
	if(var_52_bool == 0) goto Label_133; // 0x80 JumpB
	func_151(); // 0x82 NEW_2
	goto Label_139; // 0x84 Jump
	
Label_133:
	var_68_string = "completed"; // 0x85 PushS
	var_69_bool = var_4_string == var_68_string; // 0x86 Eq
	if(var_69_bool == 0) goto Label_139; // 0x87 JumpB
	func_159(); // 0x89 NEW_2
}


main(var_0_object, var_1_object, var_2_bool, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	var_8_string = "house_petr"; // 0x1 PushS
	GetSceneByName(var_6_object, var_8_string); // 0x2 Func
	var_9_string = "nopetr"; // 0x4 PushS
	Trigger(var_6_object, var_9_string); // 0x5 Func
	var_10_string = "cot_maria"; // 0x7 PushS
	GetSceneByName(var_6_object, var_10_string); // 0x8 Func
	var_11_string = "nomaria"; // 0xa PushS
	Trigger(var_6_object, var_11_string); // 0xb Func
	var_12_bool = 0; // 0xd PushV
	func_255(var_12_bool); // 0xe NEW_2
	if(var_12_bool == 0) goto Label_22; // 0x10 JumpB
	var_18_string = "bad petr init"; // 0x11 PushS
	Trace(var_18_string); // 0x12 Func
	var_2_bool = 1; // 0x14 TMovB
	goto Label_34; // 0x15 Jump
	
Label_34:
	var_19_int = 0; // 0x22 PushV
	var_19_int = 2; // 0x23 MovI
	func_199(var_19_int); // 0x24 NEW_2
	return 4; // 0x26 Return
	
Label_22:
	var_41_string = "shouse1_kabak"; // 0x16 PushS
	GetSceneByName(var_7_object, var_41_string); // 0x17 Func
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x19 PushV
	var_43_object = var_7_object; // 0x1a Mov
	var_44_string = "pt_b2q03_petr"; // 0x1b MovS
	var_45_string = "NPC_Petr"; // 0x1c MovS
	var_46_string = "b2q03_petr.xml"; // 0x1d MovS
	func_229(var_42_object, var_43_object, var_44_string, var_45_string, var_46_string); // 0x1e NEW_2
	var_0_object = var_42_object; // 0x1f TMov
	var_7_object = 0; // 0x21 SetNull
}


func_159()
{
	var_70_string = "b2q03"; // 0x9f PushS
	var_71_int = 1000; // 0xa0 PushI
	SetVariable(var_70_string, var_71_int); // 0xa1 Func
	func_167(var_10_object); // 0xa4 NEW_2
	return 0; // 0xa6 Return
}


func_223(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0xdf PushV
	self(var_37_object); // 0xe0 Func
	var_35_object = var_37_object; // 0xe2 Mov
	return 2; // 0xe3 Return
}


func_229(var_42_object, var_43_object, var_44_string, var_45_string, var_46_string)
{
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0xe5 PushV
	GetLocator(var_44_string, var_51_bool, var_52_cvector, var_53_cvector); // 0xe6 ObjFunc
	var_55_bool = var_51_bool == 0; // 0xe8 Not
	if(var_55_bool == 0) goto Label_242; // 0xe9 JumpB
	var_56_string = "Locator "; // 0xea PushS
	var_57_int = var_56_string + var_44_string; // 0xeb Add
	var_58_string = " doesn't exist"; // 0xec PushS
	var_59_int = var_57_int + var_58_string; // 0xed Add
	Trace(var_59_int); // 0xee Func
	var_54_object = 0; // 0xf0 SetNull
	goto Label_244; // 0xf1 Jump
	
Label_244:
	var_42_object = var_54_object; // 0xf4 Mov
	return 8; // 0xf5 Return
	
Label_242:
	AddActor(var_54_object, var_45_string, var_43_object, var_52_cvector, var_53_cvector, var_46_string); // 0xf2 Func
}


func_167(var_0_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xa7 PushV
	EventDisable(26); // 0xa8 EventDisable
	EventDisable(9); // 0xa9 EventDisable
	var_27_object = var_0_object; // 0xaa PushT
	if(var_27_object == 0) goto Label_175; // 0xab JumpB
	var_28_string = "cleanup"; // 0xac PushS
	Trigger(var_0_object, var_28_string); // 0xad Func
	
Label_175:
	var_29_object = var_1_object; // 0xaf PushT
	if(var_29_object == 0) goto Label_180; // 0xb0 JumpB
	var_30_string = "cleanup"; // 0xb1 PushS
	Trigger(var_30_string, var_30_string); // 0xb2 Func
	
Label_180:
	var_31_string = "house_petr"; // 0xb4 PushS
	GetSceneByName(var_26_object, var_31_string); // 0xb5 Func
	var_32_string = "petr"; // 0xb7 PushS
	Trigger(var_26_object, var_32_string); // 0xb8 Func
	var_33_string = "cot_maria"; // 0xba PushS
	GetSceneByName(var_26_object, var_33_string); // 0xbb Func
	var_34_string = "maria"; // 0xbd PushS
	Trigger(var_26_object, var_34_string); // 0xbe Func
	var_35_object = Obj(); // 0xc0 PushV
	func_223(var_35_object); // 0xc1 NEW_2
	RemoveActor(var_35_object); // 0xc3 Func
	return 2; // 0xc5 Return
}


func_199(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0xc7 PushV
	GetGameTime(var_21_float); // 0xc8 Func
	var_22_int = 24; // 0xca PushI
	var_23_float = var_19_int * var_22_int; // 0xcb Mult
	var_24_bool = var_21_float >= var_23_float; // 0xcc GE
	if(var_24_bool == 0) goto Label_210; // 0xcd JumpB
	func_167(var_21_float); // 0xcf NEW_2
	goto Label_217; // 0xd1 Jump
	
Label_217:
	return 2; // 0xd9 Return
	
Label_210:
	var_38_int = 0; // 0xd2 PushI
	var_39_int = 24; // 0xd3 PushI
	var_40_float = var_19_int * var_39_int; // 0xd4 Mult
	SetTimeEvent(var_38_int, var_40_float); // 0xd5 Func
	Hold(); // 0xd7 Func
}


func_140()
{
	var_38_int = 0; var_39_int = 0; // 0x8c PushV
	var_40_string = "b2q03"; // 0x8d PushS
	GetVariable(var_40_string, var_39_int); // 0x8e Func
	var_41_int = 1000; // 0x90 PushI
	var_42_bool = var_39_int != var_41_int; // 0x91 Neq
	if(var_42_bool == 0) goto Label_150; // 0x92 JumpB
	func_151(); // 0x94 NEW_2
	
Label_150:
	return 2; // 0x96 Return
}


func_247(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0xf7 PushV
	GetGameTime(var_15_float); // 0xf8 Func
	var_16_int = 0; // 0xfa PushV
	var_16_int = var_15_float; // 0xfb Mov
	var_17_int = 24; // 0xfc PushI
	var_13_int = var_16_int % var_17_int; // 0xfd Mod2
	return 2; // 0xfe Return
}


func_151()
{
	var_53_string = "b2q03"; // 0x97 PushS
	var_54_int = -1; // 0x98 PushI
	SetVariable(var_53_string, var_54_int); // 0x99 Func
	func_167(var_10_object); // 0x9c NEW_2
	return 0; // 0x9e Return
}


func_218()
{
	func_140(); // 0xdc NEW_2
	return 0; // 0xde Return
}


func_255(var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0xff PushV
	GetActiveScene(var_15_object); // 0x100 Func
	var_17_string = "shouse1_kabak"; // 0x102 PushS
	GetSceneByName(var_16_object, var_17_string); // 0x103 Func
	var_12_bool = var_16_object == var_15_object; // 0x105 Eq2
	return 4; // 0x106 Return
}


