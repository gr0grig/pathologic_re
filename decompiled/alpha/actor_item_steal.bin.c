task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0x15 PushV
	var_5_bool = 0; var_6_object = Obj(); // 0x16 PushV
	var_6_object = var_0_object; // 0x17 Mov
	func_103(var_5_bool, var_6_object); // 0x18 Call
	var_39_bool = var_5_bool == 0; // 0x1a Not
	if(var_39_bool == 0) goto Label_29; // 0x1b JumpB
	return 4; // 0x1c Return
	
Label_29:
	var_40_int = 0; // 0x1d PushI
	GetItem(var_3_object, var_40_int); // 0x1e Func
	var_41_int = 0; // 0x20 PushI
	GetItemAmount(var_4_int, var_41_int); // 0x21 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x23 PushV
	var_43_object = var_0_object; // 0x24 Mov
	var_44_object = var_3_object; // 0x25 Mov
	var_45_int = var_4_int; // 0x26 Mov
	func_127(var_43_object, var_44_object, var_45_int); // 0x27 Call
	if(var_42_bool == 0) goto Label_48; // 0x29 JumpB
	var_53_object = Obj(); // 0x2a PushV
	var_53_object = var_0_object; // 0x2b Mov
	func_0(var_53_object); // 0x2c Call
	SetDeathStateAndRemove(); // 0x2e Func
	
Label_48:
	return 4; // 0x30 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x9 PushV
	var_2_string = "object"; // 0xa PushS
	FindGeometry(var_2_string, var_1_object); // 0xb Func
	var_3_bool = 1; // 0xd PushB
	Enable(var_3_bool); // 0xe ObjFunc
	
Label_16:
	Hold(); // 0x10 Func
	goto Label_16; // 0x12 Jump
}


func_0(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x0 PushV
	var_56_object = var_53_object; // 0x1 Push
	if(var_56_object == 0) goto Label_8; // 0x2 JumpB
	GetScene(var_55_object); // 0x3 Func
	BroadcastSteal(var_53_object, var_55_object); // 0x5 Func
	var_55_object = 0; // 0x7 SetNull
	
Label_8:
	return 2; // 0x8 Return
}


func_67(var_9_bool, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0x43 PushV
	var_15_bool = var_10_object == 0; // 0x44 NullEq
	if(var_15_bool == 0) goto Label_72; // 0x45 JumpB
	var_9_bool = 0; // 0x46 MovB
	return 4; // 0x47 Return
	
Label_72:
	var_16_bool = 0; // 0x48 PushV
	var_16_bool = 0; // 0x49 MovB
	var_17_string = "IsDead"; // 0x4a PushS
	var_18_int = 1; // 0x4b PushI
	var_19_bool = IsFuncExist(var_10_object, var_17_string, var_18_int); // 0x4c FuncExist
	if(var_19_bool == 0) goto Label_84; // 0x4d JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x4e PushV
	var_21_object = var_10_object; // 0x4f Mov
	func_62(var_21_object); // 0x50 Call
	if(var_20_bool == 0) goto Label_84; // 0x52 JumpB
	var_16_bool = 1; // 0x53 MovB
	
Label_84:
	if(var_16_bool == 0) goto Label_87; // 0x54 JumpB
	var_9_bool = 0; // 0x55 MovB
	return 4; // 0x56 Return
	
Label_87:
	GetScene(var_13_object); // 0x57 Func
	var_24_bool = var_13_object == 0; // 0x59 NullEq
	if(var_24_bool == 0) goto Label_93; // 0x5a JumpB
	var_9_bool = 0; // 0x5b MovB
	return 4; // 0x5c Return
	
Label_93:
	GetScene(var_14_object); // 0x5d ObjFunc
	var_25_bool = var_13_object != var_14_object; // 0x5f Neq
	if(var_25_bool == 0) goto Label_99; // 0x60 JumpB
	var_9_bool = 0; // 0x61 MovB
	return 4; // 0x62 Return
	
Label_99:
	var_9_bool = 1; // 0x63 MovB
	return 4; // 0x64 Return
}


func_103(var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x67 PushV
	var_9_bool = 0; var_10_object = Obj(); // 0x68 PushV
	var_10_object = var_6_object; // 0x69 Mov
	func_67(var_9_bool, var_10_object); // 0x6a Call
	var_26_bool = var_9_bool == 0; // 0x6c Not
	if(var_26_bool == 0) goto Label_112; // 0x6d JumpB
	var_5_bool = 0; // 0x6e MovB
	return 2; // 0x6f Return
	
Label_112:
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x70 PushV
	var_28_object = var_6_object; // 0x71 Mov
	var_29_string = "noaccess"; // 0x72 MovS
	func_50(var_27_bool, var_28_object, var_29_string); // 0x73 Call
	var_36_bool = var_27_bool == 0; // 0x75 Not
	if(var_36_bool == 0) goto Label_121; // 0x76 JumpB
	var_5_bool = 1; // 0x77 MovB
	return 2; // 0x78 Return
	
Label_121:
	var_37_string = "noaccess"; // 0x79 PushS
	GetProperty(var_37_string, var_8_int); // 0x7a ObjFunc
	var_38_int = 0; // 0x7c PushI
	var_5_bool = var_8_int == var_38_int; // 0x7d Eq2
	return 2; // 0x7e Return
}


func_50(var_27_bool, var_28_object, var_29_string)
{
	var_30_bool = 0; var_31_bool = 0; // 0x32 PushV
	var_32_string = "HasProperty"; // 0x33 PushS
	var_33_int = 2; // 0x34 PushI
	var_34_bool = IsFuncExist(var_28_object, var_32_string, var_33_int); // 0x35 FuncExist
	var_35_bool = var_34_bool == 0; // 0x36 Not
	if(var_35_bool == 0) goto Label_58; // 0x37 JumpB
	var_27_bool = 0; // 0x38 MovB
	return 2; // 0x39 Return
	
Label_58:
	HasProperty(var_29_string, var_31_bool); // 0x3a ObjFunc
	var_27_bool = var_31_bool; // 0x3c Mov
	return 2; // 0x3d Return
}


func_62(var_20_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x3e PushV
	IsDead(var_23_bool); // 0x3f ObjFunc
	var_20_bool = var_23_bool; // 0x41 Mov
	return 2; // 0x42 Return
}


func_127(var_42_bool, var_44_object, var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x7f PushV
	GetItemID(var_49_int); // 0x80 ObjFunc
	var_52_string = "Category"; // 0x82 PushS
	GetInvItemProperty(var_50_int, var_49_int, var_52_string); // 0x83 Func
	AddItem(var_51_bool, var_44_object, var_50_int, var_45_int); // 0x85 ObjFunc
	var_42_bool = var_51_bool; // 0x87 Mov
	return 6; // 0x88 Return
}


