task_0_event_5()
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_float = 0; var_4_bool = 0; var_5_float = 0; var_6_bool = 0; var_7_bool = 0; var_8_float = 0; var_9_bool = 0; var_10_float = 0; // 0x41 PushV
	IsDead(var_6_bool); // 0x42 Func
	var_11_bool = var_6_bool; // 0x44 Push
	if(var_11_bool == 0) goto Label_77; // 0x45 JumpB
	IsOverrideActive(var_7_bool); // 0x46 Func
	var_12_bool = var_7_bool == 0; // 0x48 Not
	if(var_12_bool == 0) goto Label_76; // 0x49 JumpB
	WorkWithCorpse(var_0_object); // 0x4a Func
	
Label_76:
	goto Label_114; // 0x4c Jump
	
Label_114:
	return 10; // 0x72 Return
	
Label_77:
	var_13_string = "agony"; // 0x4d PushS
	GetProperty(var_13_string, var_8_float); // 0x4e Func
	var_14_int = 0; // 0x50 PushI
	var_15_bool = var_8_float == var_14_int; // 0x51 Eq
	if(var_15_bool == 0) goto Label_84; // 0x52 JumpB
	return 10; // 0x53 Return
	
Label_84:
	IsOverrideActive(var_9_bool); // 0x54 Func
	var_16_bool = var_9_bool == 0; // 0x56 Not
	if(var_16_bool == 0) goto Label_114; // 0x57 JumpB
	var_17_string = "agony.xml"; // 0x58 PushS
	var_18_bool = 1; // 0x59 PushB
	var_19_bool = 0; // 0x5a PushB
	var_20_object = Obj(); // 0x5b PushV
	func_177(var_20_object); // 0x5c Call
	ShowWindow(var_17_string, var_18_bool, var_19_bool, var_20_object); // 0x5e Func
	var_23_string = "agony"; // 0x60 PushS
	GetProperty(var_23_string, var_10_float); // 0x61 Func
	var_24_int = 0; // 0x63 PushI
	var_25_bool = var_10_float == var_24_int; // 0x64 Eq
	if(var_25_bool == 0) goto Label_114; // 0x65 JumpB
	var_26_string = "agony"; // 0x66 PushS
	var_27_int = 0; // 0x67 PushI
	SetProperty(var_26_string, var_27_int); // 0x68 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x6a PushV
	var_29_object = var_0_object; // 0x6b Mov
	var_30_string = "reputation"; // 0x6c MovS
	var_31_float = 0.2; // 0x6d MovF
	var_32_float = 0; // 0x6e MovI
	var_33_float = 1; // 0x6f MovI
	func_155(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float); // 0x70 Call
}


task_1_event_5()
{
	var_0_bool = 0; var_1_bool = 0; // 0x73 PushV
	IsDead(var_1_bool); // 0x74 Func
	var_2_bool = var_1_bool; // 0x76 Push
	if(var_2_bool == 0) goto Label_124; // 0x77 JumpB
	var_3_string = "all"; // 0x78 PushS
	var_4_string = "agony_die"; // 0x79 PushS
	LockAnimationEnd(var_3_string, var_4_string); // 0x7a Func
	
Label_124:
	return 2; // 0x7c Return
}


task_1_event_6()
{
	func_140(); // 0x7e Call
	TaskCall(0); // 0x81 TaskCall
	func_0(); // 0x82 Call
	TaskReturn(); // 0x83 TaskReturn
	return 0; // 0x85 Return
}


main()
{
	var_0_string = "agony"; // 0x6 PushS
	var_1_float = 0.5; // 0x7 PushF
	SetProperty(var_0_string, var_1_float); // 0x8 Func
	func_21(); // 0xb Call
	return 0; // 0xd Return
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_134(var_8_bool)
{
	var_9_float = 0; var_10_float = 0; // 0x86 PushV
	var_11_string = "agony"; // 0x87 PushS
	GetProperty(var_11_string, var_10_float); // 0x88 Func
	var_8_bool = !var_10_float; // 0x8a Not2
	return 2; // 0x8b Return
}


func_140()
{
	StopAnimation(); // 0x8c Func
	return 0; // 0x8e Return
}


func_14()
{
	var_15_bool = 0; var_16_bool = 0; // 0xe PushV
	var_17_string = "Money"; // 0xf PushS
	var_18_int = 0; // 0x10 PushI
	var_19_int = 500; // 0x11 PushI
	AddItem(var_16_bool, var_17_string, var_18_int, var_19_int); // 0x12 Func
	return 2; // 0x14 Return
}


func_143(var_36_bool, var_37_object, var_38_string)
{
	var_39_bool = 0; var_40_bool = 0; // 0x8f PushV
	var_41_string = "HasProperty"; // 0x90 PushS
	var_42_int = 2; // 0x91 PushI
	var_43_bool = IsFuncExist(var_37_object, var_41_string, var_42_int); // 0x92 FuncExist
	var_44_bool = var_43_bool == 0; // 0x93 Not
	if(var_44_bool == 0) goto Label_151; // 0x94 JumpB
	var_36_bool = 0; // 0x95 MovB
	return 2; // 0x96 Return
	
Label_151:
	HasProperty(var_38_string, var_40_bool); // 0x97 ObjFunc
	var_36_bool = var_40_bool; // 0x99 Mov
	return 2; // 0x9a Return
}


func_177(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xb1 PushV
	self(var_22_object); // 0xb2 Func
	var_20_object = var_22_object; // 0xb4 Mov
	return 2; // 0xb5 Return
}


func_21()
{
	var_2_bool = 0; var_3_bool = 0; // 0x15 PushV
	RemoveEnvelope(); // 0x16 Func
	var_4_int = 50; // 0x18 PushI
	var_5_int = 40; // 0x19 PushI
	SetRTEnvelope(var_4_int, var_5_int); // 0x1a Func
	
Label_28:
	var_6_string = "all"; // 0x1c PushS
	var_7_string = "agony"; // 0x1d PushS
	PlayAnimation(var_6_string, var_7_string); // 0x1e Func
	WaitForAnimEnd(var_3_bool); // 0x20 Func
	var_8_bool = 0; // 0x22 PushV
	func_134(var_8_bool); // 0x23 Call
	if(var_8_bool == 0) goto Label_49; // 0x25 JumpB
	var_12_bool = var_3_bool; // 0x26 Push
	if(var_12_bool == 0) goto Label_43; // 0x27 JumpB
	func_58(); // 0x29 Call
	
Label_43:
	SetDeathState(); // 0x2b Func
	func_14(); // 0x2e Call
	goto Label_50; // 0x30 Jump
	
Label_50:
	var_20_string = "all"; // 0x32 PushS
	var_21_string = "agony_die"; // 0x33 PushS
	LockAnimationEnd(var_20_string, var_21_string); // 0x34 Func
	
Label_54:
	Hold(); // 0x36 Func
	goto Label_54; // 0x38 Jump
	
Label_49:
	goto Label_28; // 0x31 Jump
}


func_183(var_46_float, var_47_float, var_48_float, var_49_float)
{
	var_50_bool = var_47_float < var_48_float; // 0xb8 LT
	if(var_50_bool == 0) goto Label_188; // 0xb9 JumpB
	var_46_float = var_48_float; // 0xba Mov
	return 0; // 0xbb Return
	
Label_188:
	var_51_bool = var_47_float > var_49_float; // 0xbc GT
	if(var_51_bool == 0) goto Label_192; // 0xbd JumpB
	var_46_float = var_49_float; // 0xbe Mov
	return 0; // 0xbf Return
	
Label_192:
	var_46_float = var_47_float; // 0xc0 Mov
	return 0; // 0xc1 Return
}


func_58()
{
	var_13_string = "all"; // 0x3a PushS
	var_14_string = "agony_die"; // 0x3b PushS
	PlayAnimation(var_13_string, var_14_string); // 0x3c Func
	WaitForAnimEnd(); // 0x3e Func
	return 0; // 0x40 Return
}


func_155(var_28_bool, var_29_object, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x9b PushV
	var_36_bool = 0; var_37_object = Obj(); var_38_string = ""; // 0x9c PushV
	var_37_object = var_29_object; // 0x9d Mov
	var_38_string = var_30_string; // 0x9e Mov
	func_143(var_36_bool, var_37_object, var_38_string); // 0x9f Call
	var_45_bool = var_36_bool == 0; // 0xa1 Not
	if(var_45_bool == 0) goto Label_165; // 0xa2 JumpB
	var_28_bool = 0; // 0xa3 MovB
	return 2; // 0xa4 Return
	
Label_165:
	GetProperty(var_30_string, var_35_float); // 0xa5 ObjFunc
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0xa7 PushV
	var_47_float = var_35_float + var_31_float; // 0xa8 Add2
	var_48_float = var_32_float; // 0xa9 Mov
	var_49_float = var_33_float; // 0xaa Mov
	func_183(var_46_float, var_47_float, var_48_float, var_49_float); // 0xab Call
	SetProperty(var_30_string, var_46_float); // 0xad ObjFunc
	var_28_bool = 1; // 0xaf MovB
	return 2; // 0xb0 Return
}


