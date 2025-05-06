task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0; // 0x0 PushV
	var_7_string = "d7q02BirdBalahon"; // 0x1 PushS
	var_8_int = 1; // 0x2 PushI
	SetVariable(var_7_string, var_8_int); // 0x3 Func
	var_0_bool = 1; // 0x5 TMovB
	var_9_string = "d7q02"; // 0x6 PushS
	GetVariable(var_9_string, var_5_int); // 0x7 Func
	var_10_int = 4; // 0x9 PushI
	var_11_bool = var_5_int == var_10_int; // 0xa Eq
	if(var_11_bool == 0) goto Label_17; // 0xb JumpB
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0xc PushV
	var_13_string = "quest_d7_02"; // 0xd MovS
	var_14_string = "completed"; // 0xe MovS
	func_116(var_12_bool, var_13_string, var_14_string); // 0xf Call
	
Label_17:
	IsOverrideActive(var_6_bool); // 0x11 Func
	var_18_bool = var_6_bool == 0; // 0x13 Not
	if(var_18_bool == 0) goto Label_23; // 0x14 JumpB
	WorkWithCorpse(var_2_object); // 0x15 Func
	
Label_23:
	return 4; // 0x17 Return
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; // 0x2f Not
	if(var_2_bool == 0) goto Label_53; // 0x30 JumpB
	var_3_bool = 1; // 0x31 PushB
	SetVisibility(var_3_bool); // 0x32 Func
	var_1_bool = 1; // 0x34 TMovB
	
Label_53:
	func_89(); // 0x36 Call
	return 0; // 0x38 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x3d PushV
	var_5_string = "cleanup"; // 0x3e PushS
	var_6_bool = var_2_string == var_5_string; // 0x3f Eq
	if(var_6_bool == 0) goto Label_84; // 0x40 JumpB
	var_0_bool = 1; // 0x41 TMovB
	IsLoaded(var_4_bool); // 0x42 Func
	var_7_bool = 0; // 0x44 PushV
	var_7_bool = 0; // 0x45 MovB
	var_8_bool = var_4_bool == 0; // 0x46 Not
	if(var_8_bool == 0) goto Label_77; // 0x47 JumpB
	var_9_bool = 0; // 0x48 PushV
	func_24(var_9_bool); // 0x49 Call
	if(var_9_bool == 0) goto Label_77; // 0x4b JumpB
	var_7_bool = 1; // 0x4c MovB
	
Label_77:
	if(var_7_bool == 0) goto Label_83; // 0x4d JumpB
	var_13_object = Obj(); // 0x4e PushV
	func_110(var_13_object); // 0x4f Call
	RemoveActor(var_13_object); // 0x51 Func
	
Label_83:
	goto Label_88; // 0x53 Jump
	
Label_88:
	return 2; // 0x58 Return
	
Label_84:
	var_16_string = "restore"; // 0x54 PushS
	var_17_bool = var_2_string == var_16_string; // 0x55 Eq
	if(var_17_bool == 0) goto Label_88; // 0x56 JumpB
	var_0_bool = 0; // 0x57 TMovB
}


main(var_0_bool, var_1_bool)
{
	sync(); // 0x1e Func
	var_2_bool = 0; // 0x20 PushV
	func_105(var_2_bool); // 0x21 Call
	var_5_bool = var_2_bool == 0; // 0x23 Not
	if(var_5_bool == 0) goto Label_42; // 0x24 JumpB
	var_6_bool = 1; // 0x25 PushB
	SetVisibility(var_6_bool); // 0x26 Func
	var_1_bool = 1; // 0x28 TMovB
	goto Label_43; // 0x29 Jump
	
Label_43:
	func_57(); // 0x2c Call
	return 0; // 0x2e Return
	
Label_42:
	var_1_bool = 0; // 0x2a TMovB
}


func_105(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x69 PushV
	IsLoaded(var_4_bool); // 0x6a Func
	var_2_bool = var_4_bool; // 0x6c Mov
	return 2; // 0x6d Return
}


func_110(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x6e PushV
	self(var_15_object); // 0x6f Func
	var_13_object = var_15_object; // 0x71 Mov
	return 2; // 0x72 Return
}


func_116(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x74 PushV
	FindActor(var_16_object, var_13_string); // 0x75 Func
	var_17_bool = var_16_object == 0; // 0x77 NullEq
	if(var_17_bool == 0) goto Label_123; // 0x78 JumpB
	var_12_bool = 0; // 0x79 MovB
	return 2; // 0x7a Return
	
Label_123:
	Trigger(var_16_object, var_14_string); // 0x7b Func
	var_12_bool = 1; // 0x7d MovB
	return 2; // 0x7e Return
}


func_24(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x18 PushV
	var_12_string = "d7q02BirdBalahon"; // 0x19 PushS
	GetVariable(var_12_string, var_11_bool); // 0x1a Func
	var_9_bool = var_11_bool; // 0x1c Mov
	return 2; // 0x1d Return
}


func_89()
{
	var_4_bool = 0; // 0x59 PushV
	var_4_bool = 0; // 0x5a MovB
	var_5_bool = var_0_bool; // 0x5b PushT
	if(var_5_bool == 0) goto Label_98; // 0x5c JumpB
	var_6_bool = 0; // 0x5d PushV
	func_24(var_6_bool); // 0x5e Call
	if(var_6_bool == 0) goto Label_98; // 0x60 JumpB
	var_4_bool = 1; // 0x61 MovB
	
Label_98:
	if(var_4_bool == 0) goto Label_104; // 0x62 JumpB
	var_10_object = Obj(); // 0x63 PushV
	func_110(var_10_object); // 0x64 Call
	RemoveActor(var_10_object); // 0x66 Func
	
Label_104:
	return 0; // 0x68 Return
}


func_57()
{
	
Label_57:
	Hold(); // 0x39 Func
	goto Label_57; // 0x3b Jump
}


