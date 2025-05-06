task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0xc PushV
	var_5_bool = 0; var_6_object = Obj(); // 0xd PushV
	var_6_object = var_0_object; // 0xe Mov
	func_99(var_5_bool, var_6_object); // 0xf NEW_2
	var_39_bool = var_5_bool == 0; // 0x11 Not
	if(var_39_bool == 0) goto Label_20; // 0x12 JumpB
	return 4; // 0x13 Return
	
Label_20:
	var_40_int = 0; // 0x14 PushI
	GetItem(var_3_object, var_40_int); // 0x15 Func
	var_41_int = 0; // 0x17 PushI
	GetItemAmount(var_4_int, var_41_int); // 0x18 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x1a PushV
	var_43_object = var_0_object; // 0x1b Mov
	var_44_object = var_3_object; // 0x1c Mov
	var_45_int = var_4_int; // 0x1d Mov
	func_141(var_43_object, var_44_object, var_45_int); // 0x1e NEW_2
	if(var_42_bool == 0) goto Label_37; // 0x20 JumpB
	var_59_object = Obj(); // 0x21 PushV
	var_59_object = var_0_object; // 0x22 Mov
	func_39(); // 0x23 NEW_2
	
Label_37:
	return 4; // 0x25 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_string = "object"; // 0x1 PushS
	FindGeometry(var_2_string, var_1_object); // 0x2 Func
	var_3_bool = 1; // 0x4 PushB
	Enable(var_3_bool); // 0x5 ObjFunc
	
Label_7:
	Hold(); // 0x7 Func
	goto Label_7; // 0x9 Jump
}


func_129(var_54_int, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x81 PushV
	CreateIntVector(var_57_object); // 0x82 Func
	add(var_54_int); // 0x84 ObjFunc
	add(var_55_int); // 0x86 ObjFunc
	var_58_int = 3; // 0x88 PushI
	SendWorldWndMessage(var_58_int, var_57_object); // 0x89 Func
	return 2; // 0x8b Return
}


func_99(var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x63 PushV
	var_9_bool = 0; var_10_object = Obj(); // 0x64 PushV
	var_10_object = var_6_object; // 0x65 Mov
	func_63(var_9_bool, var_10_object); // 0x66 NEW_2
	var_26_bool = var_9_bool == 0; // 0x68 Not
	if(var_26_bool == 0) goto Label_108; // 0x69 JumpB
	var_5_bool = 0; // 0x6a MovB
	return 2; // 0x6b Return
	
Label_108:
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x6c PushV
	var_28_object = var_6_object; // 0x6d Mov
	var_29_string = "noaccess"; // 0x6e MovS
	func_46(var_27_bool, var_28_object, var_29_string); // 0x6f NEW_2
	var_36_bool = var_27_bool == 0; // 0x71 Not
	if(var_36_bool == 0) goto Label_117; // 0x72 JumpB
	var_5_bool = 1; // 0x73 MovB
	return 2; // 0x74 Return
	
Label_117:
	var_37_string = "noaccess"; // 0x75 PushS
	GetProperty(var_37_string, var_8_int); // 0x76 ObjFunc
	var_38_int = 0; // 0x78 PushI
	var_5_bool = var_8_int == var_38_int; // 0x79 Eq2
	return 2; // 0x7a Return
}


func_39()
{
	var_60_object = Obj(); // 0x28 PushV
	func_123(var_60_object); // 0x29 NEW_2
	RemoveActor(var_60_object); // 0x2b Func
	return 0; // 0x2d Return
}


func_141(var_42_bool, var_44_object, var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x8d PushV
	GetItemID(var_49_int); // 0x8e ObjFunc
	var_52_string = "Category"; // 0x90 PushS
	GetInvItemProperty(var_50_int, var_49_int, var_52_string); // 0x91 Func
	AddItem(var_51_bool, var_44_object, var_50_int, var_45_int); // 0x93 ObjFunc
	var_53_bool = var_51_bool; // 0x95 Push
	if(var_53_bool == 0) goto Label_156; // 0x96 JumpB
	var_54_int = 0; var_55_int = 0; // 0x97 PushV
	var_54_int = var_49_int; // 0x98 Mov
	var_55_int = var_45_int; // 0x99 Mov
	func_129(var_54_int, var_55_int); // 0x9a NEW_2
	
Label_156:
	var_42_bool = var_51_bool; // 0x9c Mov
	return 6; // 0x9d Return
}


func_46(var_27_bool, var_28_object, var_29_string)
{
	var_30_bool = 0; var_31_bool = 0; // 0x2e PushV
	var_32_string = "HasProperty"; // 0x2f PushS
	var_33_int = 2; // 0x30 PushI
	var_34_bool = IsFuncExist(var_28_object, var_32_string, var_33_int); // 0x31 FuncExist
	var_35_bool = var_34_bool == 0; // 0x32 Not
	if(var_35_bool == 0) goto Label_54; // 0x33 JumpB
	var_27_bool = 0; // 0x34 MovB
	return 2; // 0x35 Return
	
Label_54:
	HasProperty(var_29_string, var_31_bool); // 0x36 ObjFunc
	var_27_bool = var_31_bool; // 0x38 Mov
	return 2; // 0x39 Return
}


func_58(var_20_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x3a PushV
	IsDead(var_23_bool); // 0x3b ObjFunc
	var_20_bool = var_23_bool; // 0x3d Mov
	return 2; // 0x3e Return
}


func_123(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x7b PushV
	self(var_62_object); // 0x7c Func
	var_60_object = var_62_object; // 0x7e Mov
	return 2; // 0x7f Return
}


func_63(var_9_bool, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0x3f PushV
	var_15_bool = var_10_object == 0; // 0x40 NullEq
	if(var_15_bool == 0) goto Label_68; // 0x41 JumpB
	var_9_bool = 0; // 0x42 MovB
	return 4; // 0x43 Return
	
Label_68:
	var_16_bool = 0; // 0x44 PushV
	var_16_bool = 0; // 0x45 MovB
	var_17_string = "IsDead"; // 0x46 PushS
	var_18_int = 1; // 0x47 PushI
	var_19_bool = IsFuncExist(var_10_object, var_17_string, var_18_int); // 0x48 FuncExist
	if(var_19_bool == 0) goto Label_80; // 0x49 JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x4a PushV
	var_21_object = var_10_object; // 0x4b Mov
	func_58(var_21_object); // 0x4c NEW_2
	if(var_20_bool == 0) goto Label_80; // 0x4e JumpB
	var_16_bool = 1; // 0x4f MovB
	
Label_80:
	if(var_16_bool == 0) goto Label_83; // 0x50 JumpB
	var_9_bool = 0; // 0x51 MovB
	return 4; // 0x52 Return
	
Label_83:
	GetScene(var_13_object); // 0x53 Func
	var_24_bool = var_13_object == 0; // 0x55 NullEq
	if(var_24_bool == 0) goto Label_89; // 0x56 JumpB
	var_9_bool = 0; // 0x57 MovB
	return 4; // 0x58 Return
	
Label_89:
	GetScene(var_14_object); // 0x59 ObjFunc
	var_25_bool = var_13_object != var_14_object; // 0x5b Neq
	if(var_25_bool == 0) goto Label_95; // 0x5c JumpB
	var_9_bool = 0; // 0x5d MovB
	return 4; // 0x5e Return
	
Label_95:
	var_9_bool = 1; // 0x5f MovB
	return 4; // 0x60 Return
}


