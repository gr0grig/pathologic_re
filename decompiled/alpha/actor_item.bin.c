task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0xc PushV
	var_5_bool = 0; var_6_object = Obj(); // 0xd PushV
	var_6_object = var_0_object; // 0xe Mov
	func_96(var_5_bool, var_6_object); // 0xf Call
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
	func_120(var_43_object, var_44_object, var_45_int); // 0x1e Call
	if(var_42_bool == 0) goto Label_39; // 0x20 JumpB
	var_53_object = Obj(); // 0x21 PushV
	var_53_object = var_0_object; // 0x22 Mov
	func_41(); // 0x23 Call
	SetDeathStateAndRemove(); // 0x25 Func
	
Label_39:
	return 4; // 0x27 Return
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


func_96(var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x60 PushV
	var_9_bool = 0; var_10_object = Obj(); // 0x61 PushV
	var_10_object = var_6_object; // 0x62 Mov
	func_60(var_9_bool, var_10_object); // 0x63 Call
	var_26_bool = var_9_bool == 0; // 0x65 Not
	if(var_26_bool == 0) goto Label_105; // 0x66 JumpB
	var_5_bool = 0; // 0x67 MovB
	return 2; // 0x68 Return
	
Label_105:
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x69 PushV
	var_28_object = var_6_object; // 0x6a Mov
	var_29_string = "noaccess"; // 0x6b MovS
	func_43(var_27_bool, var_28_object, var_29_string); // 0x6c Call
	var_36_bool = var_27_bool == 0; // 0x6e Not
	if(var_36_bool == 0) goto Label_114; // 0x6f JumpB
	var_5_bool = 1; // 0x70 MovB
	return 2; // 0x71 Return
	
Label_114:
	var_37_string = "noaccess"; // 0x72 PushS
	GetProperty(var_37_string, var_8_int); // 0x73 ObjFunc
	var_38_int = 0; // 0x75 PushI
	var_5_bool = var_8_int == var_38_int; // 0x76 Eq2
	return 2; // 0x77 Return
}


func_41()
{
	return 0; // 0x2a Return
}


func_43(var_27_bool, var_28_object, var_29_string)
{
	var_30_bool = 0; var_31_bool = 0; // 0x2b PushV
	var_32_string = "HasProperty"; // 0x2c PushS
	var_33_int = 2; // 0x2d PushI
	var_34_bool = IsFuncExist(var_28_object, var_32_string, var_33_int); // 0x2e FuncExist
	var_35_bool = var_34_bool == 0; // 0x2f Not
	if(var_35_bool == 0) goto Label_51; // 0x30 JumpB
	var_27_bool = 0; // 0x31 MovB
	return 2; // 0x32 Return
	
Label_51:
	HasProperty(var_29_string, var_31_bool); // 0x33 ObjFunc
	var_27_bool = var_31_bool; // 0x35 Mov
	return 2; // 0x36 Return
}


func_55(var_20_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x37 PushV
	IsDead(var_23_bool); // 0x38 ObjFunc
	var_20_bool = var_23_bool; // 0x3a Mov
	return 2; // 0x3b Return
}


func_120(var_42_bool, var_44_object, var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x78 PushV
	GetItemID(var_49_int); // 0x79 ObjFunc
	var_52_string = "Category"; // 0x7b PushS
	GetInvItemProperty(var_50_int, var_49_int, var_52_string); // 0x7c Func
	AddItem(var_51_bool, var_44_object, var_50_int, var_45_int); // 0x7e ObjFunc
	var_42_bool = var_51_bool; // 0x80 Mov
	return 6; // 0x81 Return
}


func_60(var_9_bool, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0x3c PushV
	var_15_bool = var_10_object == 0; // 0x3d NullEq
	if(var_15_bool == 0) goto Label_65; // 0x3e JumpB
	var_9_bool = 0; // 0x3f MovB
	return 4; // 0x40 Return
	
Label_65:
	var_16_bool = 0; // 0x41 PushV
	var_16_bool = 0; // 0x42 MovB
	var_17_string = "IsDead"; // 0x43 PushS
	var_18_int = 1; // 0x44 PushI
	var_19_bool = IsFuncExist(var_10_object, var_17_string, var_18_int); // 0x45 FuncExist
	if(var_19_bool == 0) goto Label_77; // 0x46 JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x47 PushV
	var_21_object = var_10_object; // 0x48 Mov
	func_55(var_21_object); // 0x49 Call
	if(var_20_bool == 0) goto Label_77; // 0x4b JumpB
	var_16_bool = 1; // 0x4c MovB
	
Label_77:
	if(var_16_bool == 0) goto Label_80; // 0x4d JumpB
	var_9_bool = 0; // 0x4e MovB
	return 4; // 0x4f Return
	
Label_80:
	GetScene(var_13_object); // 0x50 Func
	var_24_bool = var_13_object == 0; // 0x52 NullEq
	if(var_24_bool == 0) goto Label_86; // 0x53 JumpB
	var_9_bool = 0; // 0x54 MovB
	return 4; // 0x55 Return
	
Label_86:
	GetScene(var_14_object); // 0x56 ObjFunc
	var_25_bool = var_13_object != var_14_object; // 0x58 Neq
	if(var_25_bool == 0) goto Label_92; // 0x59 JumpB
	var_9_bool = 0; // 0x5a MovB
	return 4; // 0x5b Return
	
Label_92:
	var_9_bool = 1; // 0x5c MovB
	return 4; // 0x5d Return
}


