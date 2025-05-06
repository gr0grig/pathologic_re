task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "cleanup"; // 0x2a PushS
	var_3_bool = var_1_string == var_2_string; // 0x2b Eq
	if(var_3_bool == 0) goto Label_48; // 0x2c JumpB
	func_21(var_1_string); // 0x2e NEW_2
	
Label_48:
	return 0; // 0x30 Return
}


task_0_event_5(var_0_bool)
{
	StopGroup0(); // 0x31 Func
	sync(); // 0x33 Func
	return 0; // 0x35 Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x36 PushV
	var_1_bool = 0; // 0x37 MovB
	var_2_bool = var_0_bool; // 0x38 PushT
	if(var_2_bool == 0) goto Label_63; // 0x39 JumpB
	var_3_bool = 0; // 0x3a PushV
	func_70(var_3_bool); // 0x3b NEW_2
	if(var_3_bool == 0) goto Label_63; // 0x3d JumpB
	var_1_bool = 1; // 0x3e MovB
	
Label_63:
	if(var_1_bool == 0) goto Label_69; // 0x3f JumpB
	var_4_object = Obj(); // 0x40 PushV
	func_158(var_4_object); // 0x41 NEW_2
	RemoveActor(var_4_object); // 0x43 Func
	
Label_69:
	return 0; // 0x45 Return
}


main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x0 PushV
	
Label_1:
	var_3_bool = 0; // 0x1 PushV
	func_153(var_3_bool); // 0x2 NEW_2
	var_6_bool = var_3_bool == 0; // 0x4 Not
	if(var_6_bool == 0) goto Label_9; // 0x5 JumpB
	Hold(); // 0x6 Func
	goto Label_1; // 0x8 Jump
	
Label_9:
	var_7_int = 3; // 0x9 PushI
	rand(var_2_float, var_7_int); // 0xa Func
	var_8_int = 3; // 0xc PushI
	var_9_int = var_2_float + var_8_int; // 0xd Add
	Sleep(var_9_int); // 0xe Func
	func_72(); // 0x11 NEW_2
	goto Label_1; // 0x13 Jump
}


func_164(var_32_string, var_33_int)
{
	var_34_string = ""; var_35_string = ""; // 0xa4 PushV
	var_35_string = "idle"; // 0xa5 MovS
	var_36_int = var_33_int; // 0xa6 Push
	if(var_36_int == 0) goto Label_169; // 0xa7 JumpB
	var_35_string = var_35_string + var_33_int; // 0xa8 Add2
	
Label_169:
	var_32_string = var_35_string; // 0xa9 Mov
	return 2; // 0xaa Return
}


func_70(var_3_bool)
{
	var_3_bool = 1; // 0x46 MovB
	return 0; // 0x47 Return
}


func_72()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0; // 0x48 PushV
	WaitForAnimEnd(); // 0x49 Func
	var_24_bool = 0; // 0x4b PushV
	func_153(var_24_bool); // 0x4c NEW_2
	var_25_bool = var_24_bool == 0; // 0x4e Not
	if(var_25_bool == 0) goto Label_81; // 0x4f JumpB
	return 14; // 0x50 Return
	
Label_81:
	var_26_int = 0; // 0x51 PushV
	func_171(var_26_int); // 0x52 NEW_2
	var_17_int = var_26_int; // 0x53 Mov
	var_18_int = 0; // 0x55 MovI
	
Label_86:
	var_39_bool = 0; // 0x56 PushV
	var_39_bool = 0; // 0x57 MovB
	var_40_int = 5; // 0x58 PushI
	var_41_bool = var_18_int < var_40_int; // 0x59 LT
	if(var_41_bool == 0) goto Label_96; // 0x5a JumpB
	var_42_bool = 0; // 0x5b PushV
	func_153(var_42_bool); // 0x5c NEW_2
	if(var_42_bool == 0) goto Label_96; // 0x5e JumpB
	var_39_bool = 1; // 0x5f MovB
	
Label_96:
	if(var_39_bool == 0) goto Label_148; // 0x60 JumpB
	var_43_int = 3; // 0x61 PushI
	irand(var_19_int, var_43_int); // 0x62 Func
	var_44_int = 0; // 0x64 PushI
	var_45_bool = var_19_int == var_44_int; // 0x65 Eq
	if(var_45_bool == 0) goto Label_120; // 0x66 JumpB
	var_46_int = var_17_int; // 0x67 Push
	if(var_46_int == 0) goto Label_119; // 0x68 JumpB
	irand(var_20_int, var_17_int); // 0x69 Func
	var_47_string = "all"; // 0x6b PushS
	var_48_string = ""; var_49_int = 0; // 0x6c PushV
	var_49_int = var_20_int; // 0x6d Mov
	func_164(var_48_string, var_49_int); // 0x6e NEW_2
	PlayAnimation(var_47_string, var_48_string); // 0x70 Func
	WaitForAnimEnd(var_21_bool); // 0x72 Func
	var_50_bool = var_21_bool == 0; // 0x74 Not
	if(var_50_bool == 0) goto Label_119; // 0x75 JumpB
	goto Label_148; // 0x76 Jump
	
Label_148:
	ResetAAS(); // 0x94 Func
	return 14; // 0x96 Return
	
Label_119:
	goto Label_137; // 0x77 Jump
	
Label_137:
	var_51_bool = 0; // 0x89 PushV
	func_151(var_51_bool); // 0x8a NEW_2
	var_52_bool = var_51_bool == 0; // 0x8c Not
	if(var_52_bool == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	ResetAAS(); // 0x8f Func
	var_53_int = 1; // 0x91 PushI
	var_18_int = var_18_int + var_53_int; // 0x92 Add2
	goto Label_86; // 0x93 Jump
	
Label_120:
	var_54_int = 1; // 0x78 PushI
	var_55_bool = var_19_int == var_54_int; // 0x79 Eq
	if(var_55_bool == 0) goto Label_134; // 0x7a JumpB
	var_56_int = 4; // 0x7b PushI
	rand(var_22_float, var_56_int); // 0x7c Func
	var_57_int = 1; // 0x7e PushI
	var_58_int = var_22_float + var_57_int; // 0x7f Add
	Sleep(var_58_int, var_23_bool); // 0x80 Func
	var_59_bool = var_23_bool == 0; // 0x82 Not
	if(var_59_bool == 0) goto Label_133; // 0x83 JumpB
	goto Label_148; // 0x84 Jump
	
Label_133:
	goto Label_137; // 0x85 Jump
	
Label_134:
	var_60_int = var_18_int; // 0x86 Push
	if(var_60_int == 0) goto Label_137; // 0x87 JumpB
	goto Label_148; // 0x88 Jump
}


func_171(var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0xab PushV
	var_29_int = 0; // 0xac MovI
	
Label_173:
	var_31_string = "all"; // 0xad PushS
	var_32_string = ""; var_33_int = 0; // 0xae PushV
	var_33_int = var_29_int; // 0xaf Mov
	func_164(var_32_string, var_33_int); // 0xb0 NEW_2
	HasAnimation(var_30_bool, var_31_string, var_32_string); // 0xb2 Func
	var_37_bool = var_30_bool == 0; // 0xb4 Not
	if(var_37_bool == 0) goto Label_183; // 0xb5 JumpB
	goto Label_186; // 0xb6 Jump
	
Label_186:
	var_26_int = var_29_int; // 0xba Mov
	return 4; // 0xbb Return
	
Label_183:
	var_38_int = 1; // 0xb7 PushI
	var_29_int = var_29_int + var_38_int; // 0xb8 Add2
	goto Label_173; // 0xb9 Jump
}


func_21(var_0_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x15 PushV
	var_0_bool = 1; // 0x16 TMovB
	IsLoaded(var_5_bool); // 0x17 Func
	var_6_bool = 0; // 0x19 PushV
	var_6_bool = 0; // 0x1a MovB
	var_7_bool = var_5_bool == 0; // 0x1b Not
	if(var_7_bool == 0) goto Label_34; // 0x1c JumpB
	var_8_bool = 0; // 0x1d PushV
	func_70(var_8_bool); // 0x1e NEW_2
	if(var_8_bool == 0) goto Label_34; // 0x20 JumpB
	var_6_bool = 1; // 0x21 MovB
	
Label_34:
	if(var_6_bool == 0) goto Label_40; // 0x22 JumpB
	var_9_object = Obj(); // 0x23 PushV
	func_158(var_9_object); // 0x24 NEW_2
	RemoveActor(var_9_object); // 0x26 Func
	
Label_40:
	return 2; // 0x28 Return
}


func_151(var_51_bool)
{
	var_51_bool = 1; // 0x97 MovB
	return 0; // 0x98 Return
}


func_153(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x99 PushV
	IsLoaded(var_5_bool); // 0x9a Func
	var_3_bool = var_5_bool; // 0x9c Mov
	return 2; // 0x9d Return
}


func_158(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x9e PushV
	self(var_6_object); // 0x9f Func
	var_4_object = var_6_object; // 0xa1 Mov
	return 2; // 0xa2 Return
}


