task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	Trace(var_3_string); // 0x23 Func
	var_4_string = "butcher_trigger"; // 0x25 PushS
	var_5_bool = var_3_string == var_4_string; // 0x26 Eq
	if(var_5_bool == 0) goto Label_53; // 0x27 JumpB
	var_6_object = var_0_object; // 0x28 PushT
	if(var_6_object == 0) goto Label_45; // 0x29 JumpB
	var_7_string = "trigger"; // 0x2a PushS
	Trigger(var_0_object, var_7_string); // 0x2b Func
	
Label_45:
	func_101(var_2_object, var_3_string); // 0x2e Call
	var_14_string = "d3q02SeeCorpse"; // 0x30 PushS
	var_15_int = 1; // 0x31 PushI
	SetVariable(var_14_string, var_15_int); // 0x32 Func
	goto Label_59; // 0x34 Jump
	
Label_59:
	return 0; // 0x3b Return
	
Label_53:
	var_16_string = "completed"; // 0x35 PushS
	var_17_bool = var_3_string == var_16_string; // 0x36 Eq
	if(var_17_bool == 0) goto Label_59; // 0x37 JumpB
	func_79(); // 0x39 Call
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	func_60(); // 0x94 Call
	return 0; // 0x96 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = "d3q02"; // 0x1 PushS
	var_6_int = 1; // 0x2 PushI
	SetVariable(var_5_string, var_6_int); // 0x3 Func
	var_7_object = Obj(); var_8_string = ""; // 0x5 PushV
	var_8_string = "r7_house2_01"; // 0x6 MovS
	func_157(var_7_object, var_8_string); // 0x7 Call
	var_4_object = var_7_object; // 0x8 Mov
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = ""; // 0xa PushV
	var_12_object = var_4_object; // 0xb Mov
	var_13_string = "pt_d3q02_butcher"; // 0xc MovS
	var_14_string = "pers_butcher"; // 0xd MovS
	var_15_string = "d3q02_butcher.xml"; // 0xe MovS
	func_163(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string); // 0xf Call
	var_0_object = var_11_object; // 0x10 TMov
	var_29_string = "d3q02_corpse"; // 0x12 PushS
	var_30_string = "actor_disp.bin"; // 0x13 PushS
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x14 PushVec
	AddScriptedActor(var_31_cvector, var_29_string, var_30_string, var_4_object, var_31_cvector); // 0x15 Func
	var_32_string = "d3q02_btrigger"; // 0x17 PushS
	var_33_string = "quest_d3_02_btrigger.bin"; // 0x18 PushS
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x19 PushVec
	AddScriptedActor(var_33_string, var_32_string, var_33_string, var_4_object, var_34_cvector); // 0x1a Func
	var_35_int = 0; // 0x1c PushV
	var_35_int = 3; // 0x1d MovI
	func_127(var_35_int); // 0x1e Call
	return 2; // 0x20 Return
}


func_163(var_11_object, var_12_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0xa3 PushV
	GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector); // 0xa4 ObjFunc
	var_24_bool = var_20_bool == 0; // 0xa6 Not
	if(var_24_bool == 0) goto Label_176; // 0xa7 JumpB
	var_25_string = "Locator "; // 0xa8 PushS
	var_26_int = var_25_string + var_13_string; // 0xa9 Add
	var_27_string = " doesn't exist"; // 0xaa PushS
	var_28_int = var_26_int + var_27_string; // 0xab Add
	Trace(var_28_int); // 0xac Func
	var_23_object = 0; // 0xae SetNull
	goto Label_178; // 0xaf Jump
	
Label_178:
	var_11_object = var_23_object; // 0xb2 Mov
	return 8; // 0xb3 Return
	
Label_176:
	AddActor(var_23_object, var_14_string, var_12_object, var_21_cvector, var_22_cvector, var_15_string); // 0xb0 Func
}


func_101(var_0_object, var_37_float)
{
	var_41_object = var_0_object; // 0x65 PushT
	if(var_41_object == 0) goto Label_106; // 0x66 JumpB
	var_42_string = "cleanup"; // 0x67 PushS
	Trigger(var_0_object, var_42_string); // 0x68 Func
	
Label_106:
	var_43_object = var_1_object; // 0x6a PushT
	if(var_43_object == 0) goto Label_111; // 0x6b JumpB
	var_44_string = "cleanup"; // 0x6c PushS
	Trigger(var_44_string, var_44_string); // 0x6d Func
	
Label_111:
	var_45_object = var_2_object; // 0x6f PushT
	if(var_45_object == 0) goto Label_116; // 0x70 JumpB
	var_46_string = "cleanup"; // 0x71 PushS
	Trigger(var_37_float, var_46_string); // 0x72 Func
	
Label_116:
	return 0; // 0x74 Return
}


func_71()
{
	var_10_string = "d3q02"; // 0x47 PushS
	var_11_int = -1; // 0x48 PushI
	SetVariable(var_10_string, var_11_int); // 0x49 Func
	func_117(); // 0x4c Call
	return 0; // 0x4e Return
}


func_79()
{
	var_18_int = 0; var_19_int = 0; // 0x4f PushV
	var_20_string = "d3q02"; // 0x50 PushS
	GetVariable(var_20_string, var_19_int); // 0x51 Func
	var_21_bool = 0; // 0x53 PushV
	var_21_bool = 0; // 0x54 MovB
	var_22_int = 1000; // 0x55 PushI
	var_23_bool = var_19_int != var_22_int; // 0x56 Neq
	if(var_23_bool == 0) goto Label_92; // 0x57 JumpB
	var_24_int = -1; // 0x58 PushI
	var_25_bool = var_19_int != var_24_int; // 0x59 Neq
	if(var_25_bool == 0) goto Label_92; // 0x5a JumpB
	var_21_bool = 1; // 0x5b MovB
	
Label_92:
	if(var_21_bool == 0) goto Label_100; // 0x5c JumpB
	var_26_string = "d3q02"; // 0x5d PushS
	var_27_int = 1000; // 0x5e PushI
	SetVariable(var_26_string, var_27_int); // 0x5f Func
	func_117(); // 0x62 Call
	
Label_100:
	return 2; // 0x64 Return
}


func_117()
{
	EventDisable(26); // 0x75 EventDisable
	func_101(var_36_float, var_37_float); // 0x77 Call
	var_47_object = Obj(); // 0x79 PushV
	func_151(var_47_object); // 0x7a Call
	RemoveActor(var_47_object); // 0x7c Func
	return 0; // 0x7e Return
}


func_151(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x97 PushV
	self(var_49_object); // 0x98 Func
	var_47_object = var_49_object; // 0x9a Mov
	return 2; // 0x9b Return
}


func_60()
{
	var_5_int = 0; var_6_int = 0; // 0x3c PushV
	var_7_string = "d3q02"; // 0x3d PushS
	GetVariable(var_7_string, var_6_int); // 0x3e Func
	var_8_int = 1000; // 0x40 PushI
	var_9_bool = var_6_int != var_8_int; // 0x41 Neq
	if(var_9_bool == 0) goto Label_70; // 0x42 JumpB
	func_71(); // 0x44 Call
	
Label_70:
	return 2; // 0x46 Return
}


func_157(var_7_object, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x9d PushV
	GetSceneByName(var_10_object, var_8_string); // 0x9e Func
	var_7_object = var_10_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


func_127(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0x7f PushV
	GetGameTime(var_37_float); // 0x80 Func
	var_38_int = 24; // 0x82 PushI
	var_39_float = var_35_int * var_38_int; // 0x83 Mult
	var_40_bool = var_37_float >= var_39_float; // 0x84 GE
	if(var_40_bool == 0) goto Label_138; // 0x85 JumpB
	func_117(); // 0x87 Call
	goto Label_145; // 0x89 Jump
	
Label_145:
	return 2; // 0x91 Return
	
Label_138:
	var_50_int = 0; // 0x8a PushI
	var_51_int = 24; // 0x8b PushI
	var_52_float = var_35_int * var_51_int; // 0x8c Mult
	SetTimeEvent(var_50_int, var_52_float); // 0x8d Func
	Hold(); // 0x8f Func
}


