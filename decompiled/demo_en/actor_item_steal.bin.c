task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0x19 PushV
	var_5_bool = 0; var_6_object = Obj(); // 0x1a PushV
	var_6_object = var_0_object; // 0x1b Mov
	func_112(var_5_bool, var_6_object); // 0x1c NEW_2
	var_39_bool = var_5_bool == 0; // 0x1e Not
	if(var_39_bool == 0) goto Label_33; // 0x1f JumpB
	return 4; // 0x20 Return
	
Label_33:
	var_40_int = 0; // 0x21 PushI
	GetItem(var_3_object, var_40_int); // 0x22 Func
	var_41_int = 0; // 0x24 PushI
	GetItemAmount(var_4_int, var_41_int); // 0x25 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x27 PushV
	var_43_object = var_0_object; // 0x28 Mov
	var_44_object = var_3_object; // 0x29 Mov
	var_45_int = var_4_int; // 0x2a Mov
	func_154(var_43_object, var_44_object, var_45_int); // 0x2b NEW_2
	if(var_42_bool == 0) goto Label_50; // 0x2d JumpB
	var_59_object = Obj(); // 0x2e PushV
	var_59_object = var_0_object; // 0x2f Mov
	func_0(var_59_object); // 0x30 NEW_2
	
Label_50:
	return 4; // 0x32 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0xd PushV
	var_2_string = "object"; // 0xe PushS
	FindGeometry(var_2_string, var_1_object); // 0xf Func
	var_3_bool = 1; // 0x11 PushB
	Enable(var_3_bool); // 0x12 ObjFunc
	
Label_20:
	Hold(); // 0x14 Func
	goto Label_20; // 0x16 Jump
}


func_0(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x0 PushV
	var_62_object = var_59_object; // 0x1 Push
	if(var_62_object == 0) goto Label_8; // 0x2 JumpB
	GetScene(var_61_object); // 0x3 Func
	BroadcastSteal(var_59_object, var_61_object); // 0x5 Func
	var_61_object = 0; // 0x7 SetNull
	
Label_8:
	var_63_object = Obj(); // 0x8 PushV
	var_63_object = var_59_object; // 0x9 Mov
	func_52(); // 0xa NEW_2
	return 2; // 0xc Return
}


func_71(var_20_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x47 PushV
	IsDead(var_23_bool); // 0x48 ObjFunc
	var_20_bool = var_23_bool; // 0x4a Mov
	return 2; // 0x4b Return
}


func_136(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x88 PushV
	self(var_66_object); // 0x89 Func
	var_64_object = var_66_object; // 0x8b Mov
	return 2; // 0x8c Return
}


func_76(var_9_bool, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); // 0x4c PushV
	var_15_bool = var_10_object == 0; // 0x4d NullEq
	if(var_15_bool == 0) goto Label_81; // 0x4e JumpB
	var_9_bool = 0; // 0x4f MovB
	return 4; // 0x50 Return
	
Label_81:
	var_16_bool = 0; // 0x51 PushV
	var_16_bool = 0; // 0x52 MovB
	var_17_string = "IsDead"; // 0x53 PushS
	var_18_int = 1; // 0x54 PushI
	var_19_bool = IsFuncExist(var_10_object, var_17_string, var_18_int); // 0x55 FuncExist
	if(var_19_bool == 0) goto Label_93; // 0x56 JumpB
	var_20_bool = 0; var_21_object = Obj(); // 0x57 PushV
	var_21_object = var_10_object; // 0x58 Mov
	func_71(var_21_object); // 0x59 NEW_2
	if(var_20_bool == 0) goto Label_93; // 0x5b JumpB
	var_16_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_16_bool == 0) goto Label_96; // 0x5d JumpB
	var_9_bool = 0; // 0x5e MovB
	return 4; // 0x5f Return
	
Label_96:
	GetScene(var_13_object); // 0x60 Func
	var_24_bool = var_13_object == 0; // 0x62 NullEq
	if(var_24_bool == 0) goto Label_102; // 0x63 JumpB
	var_9_bool = 0; // 0x64 MovB
	return 4; // 0x65 Return
	
Label_102:
	GetScene(var_14_object); // 0x66 ObjFunc
	var_25_bool = var_13_object != var_14_object; // 0x68 Neq
	if(var_25_bool == 0) goto Label_108; // 0x69 JumpB
	var_9_bool = 0; // 0x6a MovB
	return 4; // 0x6b Return
	
Label_108:
	var_9_bool = 1; // 0x6c MovB
	return 4; // 0x6d Return
}


func_142(var_54_int, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x8e PushV
	CreateIntVector(var_57_object); // 0x8f Func
	add(var_54_int); // 0x91 ObjFunc
	add(var_55_int); // 0x93 ObjFunc
	var_58_int = 3; // 0x95 PushI
	SendWorldWndMessage(var_58_int, var_57_object); // 0x96 Func
	return 2; // 0x98 Return
}


func_112(var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x70 PushV
	var_9_bool = 0; var_10_object = Obj(); // 0x71 PushV
	var_10_object = var_6_object; // 0x72 Mov
	func_76(var_9_bool, var_10_object); // 0x73 NEW_2
	var_26_bool = var_9_bool == 0; // 0x75 Not
	if(var_26_bool == 0) goto Label_121; // 0x76 JumpB
	var_5_bool = 0; // 0x77 MovB
	return 2; // 0x78 Return
	
Label_121:
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x79 PushV
	var_28_object = var_6_object; // 0x7a Mov
	var_29_string = "noaccess"; // 0x7b MovS
	func_59(var_27_bool, var_28_object, var_29_string); // 0x7c NEW_2
	var_36_bool = var_27_bool == 0; // 0x7e Not
	if(var_36_bool == 0) goto Label_130; // 0x7f JumpB
	var_5_bool = 1; // 0x80 MovB
	return 2; // 0x81 Return
	
Label_130:
	var_37_string = "noaccess"; // 0x82 PushS
	GetProperty(var_37_string, var_8_int); // 0x83 ObjFunc
	var_38_int = 0; // 0x85 PushI
	var_5_bool = var_8_int == var_38_int; // 0x86 Eq2
	return 2; // 0x87 Return
}


func_52()
{
	var_64_object = Obj(); // 0x35 PushV
	func_136(var_64_object); // 0x36 NEW_2
	RemoveActor(var_64_object); // 0x38 Func
	return 0; // 0x3a Return
}


func_154(var_42_bool, var_44_object, var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x9a PushV
	GetItemID(var_49_int); // 0x9b ObjFunc
	var_52_string = "Category"; // 0x9d PushS
	GetInvItemProperty(var_50_int, var_49_int, var_52_string); // 0x9e Func
	AddItem(var_51_bool, var_44_object, var_50_int, var_45_int); // 0xa0 ObjFunc
	var_53_bool = var_51_bool; // 0xa2 Push
	if(var_53_bool == 0) goto Label_169; // 0xa3 JumpB
	var_54_int = 0; var_55_int = 0; // 0xa4 PushV
	var_54_int = var_49_int; // 0xa5 Mov
	var_55_int = var_45_int; // 0xa6 Mov
	func_142(var_54_int, var_55_int); // 0xa7 NEW_2
	
Label_169:
	var_42_bool = var_51_bool; // 0xa9 Mov
	return 6; // 0xaa Return
}


func_59(var_27_bool, var_28_object, var_29_string)
{
	var_30_bool = 0; var_31_bool = 0; // 0x3b PushV
	var_32_string = "HasProperty"; // 0x3c PushS
	var_33_int = 2; // 0x3d PushI
	var_34_bool = IsFuncExist(var_28_object, var_32_string, var_33_int); // 0x3e FuncExist
	var_35_bool = var_34_bool == 0; // 0x3f Not
	if(var_35_bool == 0) goto Label_67; // 0x40 JumpB
	var_27_bool = 0; // 0x41 MovB
	return 2; // 0x42 Return
	
Label_67:
	HasProperty(var_29_string, var_31_bool); // 0x43 ObjFunc
	var_27_bool = var_31_bool; // 0x45 Mov
	return 2; // 0x46 Return
}


