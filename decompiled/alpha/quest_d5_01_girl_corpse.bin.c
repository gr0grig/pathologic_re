task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0; // 0x0 PushV
	var_5_string = "d5q02KnowNudeIsDead"; // 0x1 PushS
	var_6_int = 1; // 0x2 PushI
	SetVariable(var_5_string, var_6_int); // 0x3 Func
	IsOverrideActive(var_4_bool); // 0x5 Func
	var_7_bool = var_4_bool == 0; // 0x7 Not
	if(var_7_bool == 0) goto Label_11; // 0x8 JumpB
	WorkWithCorpse(var_2_object); // 0x9 Func
	
Label_11:
	return 2; // 0xb Return
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; // 0x2e Not
	if(var_2_bool == 0) goto Label_52; // 0x2f JumpB
	var_3_bool = 1; // 0x30 PushB
	SetVisibility(var_3_bool); // 0x31 Func
	var_1_bool = 1; // 0x33 TMovB
	
Label_52:
	func_88(); // 0x35 Call
	return 0; // 0x37 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x3c PushV
	var_5_string = "cleanup"; // 0x3d PushS
	var_6_bool = var_2_string == var_5_string; // 0x3e Eq
	if(var_6_bool == 0) goto Label_83; // 0x3f JumpB
	var_0_bool = 1; // 0x40 TMovB
	IsLoaded(var_4_bool); // 0x41 Func
	var_7_bool = 0; // 0x43 PushV
	var_7_bool = 0; // 0x44 MovB
	var_8_bool = var_4_bool == 0; // 0x45 Not
	if(var_8_bool == 0) goto Label_76; // 0x46 JumpB
	var_9_bool = 0; // 0x47 PushV
	func_12(var_9_bool); // 0x48 Call
	if(var_9_bool == 0) goto Label_76; // 0x4a JumpB
	var_7_bool = 1; // 0x4b MovB
	
Label_76:
	if(var_7_bool == 0) goto Label_82; // 0x4c JumpB
	var_23_object = Obj(); // 0x4d PushV
	func_109(var_23_object); // 0x4e Call
	RemoveActor(var_23_object); // 0x50 Func
	
Label_82:
	goto Label_87; // 0x52 Jump
	
Label_87:
	return 2; // 0x57 Return
	
Label_83:
	var_26_string = "restore"; // 0x53 PushS
	var_27_bool = var_2_string == var_26_string; // 0x54 Eq
	if(var_27_bool == 0) goto Label_87; // 0x55 JumpB
	var_0_bool = 0; // 0x56 TMovB
}


main(var_0_bool, var_1_bool)
{
	sync(); // 0x1d Func
	var_2_bool = 0; // 0x1f PushV
	func_104(var_2_bool); // 0x20 Call
	var_5_bool = var_2_bool == 0; // 0x22 Not
	if(var_5_bool == 0) goto Label_41; // 0x23 JumpB
	var_6_bool = 1; // 0x24 PushB
	SetVisibility(var_6_bool); // 0x25 Func
	var_1_bool = 1; // 0x27 TMovB
	goto Label_42; // 0x28 Jump
	
Label_42:
	func_56(); // 0x2b Call
	return 0; // 0x2d Return
	
Label_41:
	var_1_bool = 0; // 0x29 TMovB
}


func_104(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x68 PushV
	IsLoaded(var_4_bool); // 0x69 Func
	var_2_bool = var_4_bool; // 0x6b Mov
	return 2; // 0x6c Return
}


func_12(var_9_bool)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xc PushV
	var_14_string = "d5q01_heart"; // 0xd PushS
	GetItemCountOfType(var_12_int, var_14_string); // 0xe Func
	var_15_bool = var_12_int == 0; // 0x10 Not
	if(var_15_bool == 0) goto Label_20; // 0x11 JumpB
	var_9_bool = 1; // 0x12 MovB
	return 4; // 0x13 Return
	
Label_20:
	var_16_string = "d5q01"; // 0x14 PushS
	GetVariable(var_16_string, var_13_int); // 0x15 Func
	var_17_bool = 0; var_18_int = 0; // 0x17 PushV
	var_18_int = var_13_int; // 0x18 Mov
	func_115(var_17_bool, var_18_int); // 0x19 Call
	var_9_bool = !var_17_bool; // 0x1b Not2
	return 4; // 0x1c Return
}


func_109(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6d PushV
	self(var_25_object); // 0x6e Func
	var_23_object = var_25_object; // 0x70 Mov
	return 2; // 0x71 Return
}


func_115(var_17_bool, var_18_int)
{
	var_17_bool = 0; // 0x74 MovB
	var_19_int = 1; // 0x75 PushI
	var_20_bool = var_18_int >= var_19_int; // 0x76 GE
	if(var_20_bool == 0) goto Label_124; // 0x77 JumpB
	var_21_int = 1000; // 0x78 PushI
	var_22_bool = var_18_int < var_21_int; // 0x79 LT
	if(var_22_bool == 0) goto Label_124; // 0x7a JumpB
	var_17_bool = 1; // 0x7b MovB
	
Label_124:
	return 0; // 0x7c Return
}


func_88()
{
	var_4_bool = 0; // 0x58 PushV
	var_4_bool = 0; // 0x59 MovB
	var_5_bool = var_0_bool; // 0x5a PushT
	if(var_5_bool == 0) goto Label_97; // 0x5b JumpB
	var_6_bool = 0; // 0x5c PushV
	func_12(var_6_bool); // 0x5d Call
	if(var_6_bool == 0) goto Label_97; // 0x5f JumpB
	var_4_bool = 1; // 0x60 MovB
	
Label_97:
	if(var_4_bool == 0) goto Label_103; // 0x61 JumpB
	var_20_object = Obj(); // 0x62 PushV
	func_109(var_20_object); // 0x63 Call
	RemoveActor(var_20_object); // 0x65 Func
	
Label_103:
	return 0; // 0x67 Return
}


func_56()
{
	
Label_56:
	Hold(); // 0x38 Func
	goto Label_56; // 0x3a Jump
}


