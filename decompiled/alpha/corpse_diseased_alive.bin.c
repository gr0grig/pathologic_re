task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x7 PushV
	var_5_string = "Trying to use"; // 0x8 PushS
	Trace(var_5_string); // 0x9 Func
	IsOnGround(var_3_bool); // 0xb ObjFunc
	var_6_bool = var_3_bool; // 0xd Push
	if(var_6_bool == 0) goto Label_23; // 0xe JumpB
	EventDisable(0); // 0xf EventDisable
	IsOverrideActive(var_4_bool); // 0x10 Func
	var_7_bool = var_4_bool == 0; // 0x12 Not
	if(var_7_bool == 0) goto Label_22; // 0x13 JumpB
	WorkWithCorpse(var_0_object); // 0x14 Func
	
Label_22:
	EventEnable(0); // 0x16 EventEnable
	
Label_23:
	return 4; // 0x17 Return
}


task_0_event_5()
{
	func_40(); // 0x19 Call
	return 0; // 0x1b Return
}


main()
{
	func_28(); // 0x1 Call
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_97(var_4_int)
{
	var_5_float = 0; var_6_float = 0; // 0x61 PushV
	GetGameTime(var_6_float); // 0x62 Func
	var_7_int = 1; // 0x64 PushI
	var_8_int = 0; // 0x65 PushV
	var_9_int = 24; // 0x66 PushI
	var_8_int = var_6_float / var_6_float; // 0x67 Div2
	var_4_int = var_7_int + var_8_int; // 0x68 Add2
	return 2; // 0x69 Return
}


func_134(var_8_int, var_9_string)
{
	var_10_int = 0; var_11_int = 0; // 0x86 PushV
	GetInvItemByName(var_11_int, var_9_string); // 0x87 Func
	var_8_int = var_11_int; // 0x89 Mov
	return 2; // 0x8a Return
}


func_40()
{
	var_0_int = 0; var_1_int = 0; // 0x28 PushV
	var_2_bool = 0; var_3_int = 0; // 0x29 PushV
	var_3_int = 5; // 0x2a MovI
	func_106(var_2_bool, var_3_int); // 0x2b Call
	var_10_bool = var_2_bool == 0; // 0x2d Not
	if(var_10_bool == 0) goto Label_51; // 0x2e JumpB
	var_11_bool = 0; // 0x2f PushB
	SetVisibility(var_11_bool); // 0x30 Func
	return 2; // 0x32 Return
	
Label_51:
	var_12_int = 0; // 0x33 PushV
	func_86(var_12_int); // 0x34 Call
	var_1_int = var_12_int; // 0x35 Mov
	var_20_bool = 0; var_21_int = 0; // 0x37 PushV
	var_22_int = 1; // 0x38 PushI
	var_21_int = var_1_int - var_22_int; // 0x39 Sub2
	func_118(var_20_bool, var_21_int); // 0x3a Call
	if(var_20_bool == 0) goto Label_71; // 0x3c JumpB
	var_34_bool = 1; // 0x3d PushB
	SetVisibility(var_34_bool); // 0x3e Func
	var_35_string = "I am in region "; // 0x40 PushS
	var_36_int = var_35_string + var_1_int; // 0x41 Add
	var_37_string = " and visible"; // 0x42 PushS
	var_38_int = var_36_int + var_37_string; // 0x43 Add
	Trace(var_38_int); // 0x44 Func
	goto Label_80; // 0x46 Jump
	
Label_80:
	return 2; // 0x50 Return
	
Label_71:
	var_39_bool = 1; // 0x47 PushB
	SetVisibility(var_39_bool); // 0x48 Func
	var_40_string = "I am in region "; // 0x4a PushS
	var_41_int = var_40_string + var_1_int; // 0x4b Add
	var_42_string = " and not visible"; // 0x4c PushS
	var_43_int = var_41_int + var_42_string; // 0x4d Add
	Trace(var_43_int); // 0x4e Func
}


func_106(var_2_bool, var_3_int)
{
	var_4_int = 0; // 0x6b PushV
	func_97(var_4_int); // 0x6c Call
	var_2_bool = var_4_int == var_3_int; // 0x6e Eq2
	return 0; // 0x6f Return
}


func_139(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_bool = 0; var_6_int = 0; var_7_bool = 0; // 0x8b PushV
	var_8_int = 0; var_9_string = ""; // 0x8c PushV
	var_9_string = var_1_string; // 0x8d Mov
	func_134(var_8_int, var_9_string); // 0x8e Call
	var_6_int = var_8_int; // 0x8f Mov
	var_12_int = -1; // 0x91 PushI
	var_13_bool = var_6_int == var_12_int; // 0x92 Eq
	if(var_13_bool == 0) goto Label_150; // 0x93 JumpB
	var_0_bool = 0; // 0x94 MovB
	return 4; // 0x95 Return
	
Label_150:
	var_14_int = 0; // 0x96 PushI
	var_15_bool = var_2_int == var_14_int; // 0x97 Eq
	if(var_15_bool == 0) goto Label_155; // 0x98 JumpB
	var_0_bool = 1; // 0x99 MovB
	return 4; // 0x9a Return
	
Label_155:
	AddItem(var_7_bool, var_6_int, var_3_int, var_2_int); // 0x9b Func
	var_0_bool = var_7_bool; // 0x9d Mov
	return 4; // 0x9e Return
}


func_112(var_25_string, var_26_int)
{
	var_27_string = "Region"; // 0x71 PushS
	var_28_int = var_27_string + var_26_int; // 0x72 Add
	var_29_string = "State"; // 0x73 PushS
	var_25_string = var_28_int + var_29_string; // 0x74 Add2
	return 0; // 0x75 Return
}


func_81(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x51 PushV
	GetPosition(var_19_cvector); // 0x52 Func
	var_17_cvector = var_19_cvector; // 0x54 Mov
	return 2; // 0x55 Return
}


func_86(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0; // 0x56 PushV
	GetScene(var_15_object); // 0x57 Func
	var_17_cvector = CVector(0,0,0); // 0x59 PushV
	func_81(var_17_cvector); // 0x5a Call
	GetRegionByPt(var_16_int, var_17_cvector); // 0x5c ObjFunc
	var_12_int = var_16_int; // 0x5e Mov
	return 4; // 0x5f Return
}


func_118(var_20_bool, var_21_int)
{
	var_23_int = 0; var_24_int = 0; // 0x76 PushV
	var_25_string = ""; var_26_int = 0; // 0x77 PushV
	var_26_int = var_21_int; // 0x78 Mov
	func_112(var_25_string, var_26_int); // 0x79 Call
	GetVariable(var_25_string, var_24_int); // 0x7b Func
	var_30_int = 3; // 0x7d PushI
	var_31_int = var_24_int & var_30_int; // 0x7e And
	var_32_int = 1; // 0x7f PushI
	var_33_bool = var_31_int == var_32_int; // 0x80 Eq
	if(var_33_bool == 0) goto Label_132; // 0x81 JumpB
	var_20_bool = 1; // 0x82 MovB
	return 2; // 0x83 Return
	
Label_132:
	var_20_bool = 0; // 0x84 MovB
	return 2; // 0x85 Return
}


func_28()
{
	var_0_bool = 0; var_1_string = ""; var_2_int = 0; var_3_int = 0; // 0x1c PushV
	var_1_string = "blooddiseasedalive"; // 0x1d MovS
	var_2_int = 1; // 0x1e MovI
	var_3_int = 0; // 0x1f MovI
	func_139(var_0_bool, var_1_string, var_2_int, var_3_int); // 0x20 Call
	var_16_bool = var_0_bool == 0; // 0x22 Not
	if(var_16_bool == 0) goto Label_39; // 0x23 JumpB
	var_17_string = "Can't add corpse item"; // 0x24 PushS
	Trace(var_17_string); // 0x25 Func
	
Label_39:
	return 0; // 0x27 Return
}


