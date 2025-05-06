task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x18 PushV
	var_4_string = "cleanup"; // 0x19 PushS
	var_5_bool = var_1_string == var_4_string; // 0x1a Eq
	if(var_5_bool == 0) goto Label_38; // 0x1b JumpB
	var_0_bool = 1; // 0x1c TMovB
	IsLoaded(var_3_bool); // 0x1d Func
	var_6_bool = var_3_bool == 0; // 0x1f Not
	if(var_6_bool == 0) goto Label_38; // 0x20 JumpB
	var_7_object = Obj(); // 0x21 PushV
	func_166(var_7_object); // 0x22 NEW_2
	RemoveActor(var_7_object); // 0x24 Func
	
Label_38:
	return 2; // 0x26 Return
}


task_0_event_6(var_0_bool)
{
	func_16(); // 0x28 NEW_2
	return 0; // 0x2a Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x37 PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x38 PushV
	var_7_object = var_1_object; // 0x39 Mov
	func_142(var_6_bool, var_7_object); // 0x3a NEW_2
	var_40_bool = var_6_bool == 0; // 0x3c Not
	if(var_40_bool == 0) goto Label_63; // 0x3d JumpB
	return 4; // 0x3e Return
	
Label_63:
	var_41_int = 0; // 0x3f PushI
	GetItem(var_4_object, var_41_int); // 0x40 Func
	var_42_int = 0; // 0x42 PushI
	GetItemAmount(var_5_int, var_42_int); // 0x43 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x45 PushV
	var_44_object = var_1_object; // 0x46 Mov
	var_45_object = var_4_object; // 0x47 Mov
	var_46_int = var_5_int; // 0x48 Mov
	func_184(var_44_object, var_45_object, var_46_int); // 0x49 NEW_2
	if(var_43_bool == 0) goto Label_80; // 0x4b JumpB
	var_60_object = Obj(); // 0x4c PushV
	var_60_object = var_1_object; // 0x4d Mov
	func_0(var_60_object); // 0x4e NEW_2
	
Label_80:
	return 4; // 0x50 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0xb TMovB
	func_43(); // 0xd NEW_2
	return 0; // 0xf Return
}


func_0(var_60_object)
{
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x1 PushV
	var_62_string = "quest_b6_03"; // 0x2 MovS
	var_63_string = "diary_taken"; // 0x3 MovS
	func_201(var_61_bool, var_62_string, var_63_string); // 0x4 NEW_2
	var_67_object = Obj(); // 0x6 PushV
	var_67_object = var_60_object; // 0x7 Mov
	func_82(); // 0x8 NEW_2
	return 0; // 0xa Return
}


func_101(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x65 PushV
	IsDead(var_24_bool); // 0x66 ObjFunc
	var_21_bool = var_24_bool; // 0x68 Mov
	return 2; // 0x69 Return
}


func_166(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xa6 PushV
	self(var_70_object); // 0xa7 Func
	var_68_object = var_70_object; // 0xa9 Mov
	return 2; // 0xaa Return
}


func_201(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xc9 PushV
	FindActor(var_65_object, var_62_string); // 0xca Func
	var_66_bool = var_65_object == 0; // 0xcc NullEq
	if(var_66_bool == 0) goto Label_208; // 0xcd JumpB
	var_61_bool = 0; // 0xce MovB
	return 2; // 0xcf Return
	
Label_208:
	Trigger(var_65_object, var_63_string); // 0xd0 Func
	var_61_bool = 1; // 0xd2 MovB
	return 2; // 0xd3 Return
}


func_106(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x6a PushV
	var_16_bool = var_11_object == 0; // 0x6b NullEq
	if(var_16_bool == 0) goto Label_111; // 0x6c JumpB
	var_10_bool = 0; // 0x6d MovB
	return 4; // 0x6e Return
	
Label_111:
	var_17_bool = 0; // 0x6f PushV
	var_17_bool = 0; // 0x70 MovB
	var_18_string = "IsDead"; // 0x71 PushS
	var_19_int = 1; // 0x72 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x73 FuncExist
	if(var_20_bool == 0) goto Label_123; // 0x74 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x75 PushV
	var_22_object = var_11_object; // 0x76 Mov
	func_101(var_22_object); // 0x77 NEW_2
	if(var_21_bool == 0) goto Label_123; // 0x79 JumpB
	var_17_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_17_bool == 0) goto Label_126; // 0x7b JumpB
	var_10_bool = 0; // 0x7c MovB
	return 4; // 0x7d Return
	
Label_126:
	GetScene(var_14_object); // 0x7e Func
	var_25_bool = var_14_object == 0; // 0x80 NullEq
	if(var_25_bool == 0) goto Label_132; // 0x81 JumpB
	var_10_bool = 0; // 0x82 MovB
	return 4; // 0x83 Return
	
Label_132:
	GetScene(var_15_object); // 0x84 ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x86 Neq
	if(var_26_bool == 0) goto Label_138; // 0x87 JumpB
	var_10_bool = 0; // 0x88 MovB
	return 4; // 0x89 Return
	
Label_138:
	var_10_bool = 1; // 0x8a MovB
	return 4; // 0x8b Return
}


func_43()
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x2b PushV
	var_3_string = "object"; // 0x2c PushS
	FindGeometry(var_3_string, var_2_object); // 0x2d Func
	var_4_bool = 1; // 0x2f PushB
	Enable(var_4_bool); // 0x30 ObjFunc
	
Label_50:
	Hold(); // 0x32 Func
	goto Label_50; // 0x34 Jump
}


func_172(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xac PushV
	CreateIntVector(var_58_object); // 0xad Func
	add(var_55_int); // 0xaf ObjFunc
	add(var_56_int); // 0xb1 ObjFunc
	var_59_int = 3; // 0xb3 PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0xb4 Func
	return 2; // 0xb6 Return
}


func_142(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x8e PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x8f PushV
	var_11_object = var_7_object; // 0x90 Mov
	func_106(var_10_bool, var_11_object); // 0x91 NEW_2
	var_27_bool = var_10_bool == 0; // 0x93 Not
	if(var_27_bool == 0) goto Label_151; // 0x94 JumpB
	var_6_bool = 0; // 0x95 MovB
	return 2; // 0x96 Return
	
Label_151:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x97 PushV
	var_29_object = var_7_object; // 0x98 Mov
	var_30_string = "noaccess"; // 0x99 MovS
	func_89(var_28_bool, var_29_object, var_30_string); // 0x9a NEW_2
	var_37_bool = var_28_bool == 0; // 0x9c Not
	if(var_37_bool == 0) goto Label_160; // 0x9d JumpB
	var_6_bool = 1; // 0x9e MovB
	return 2; // 0x9f Return
	
Label_160:
	var_38_string = "noaccess"; // 0xa0 PushS
	GetProperty(var_38_string, var_9_int); // 0xa1 ObjFunc
	var_39_int = 0; // 0xa3 PushI
	var_6_bool = var_9_int == var_39_int; // 0xa4 Eq2
	return 2; // 0xa5 Return
}


func_16()
{
	var_1_bool = var_0_bool; // 0x10 PushT
	if(var_1_bool == 0) goto Label_23; // 0x11 JumpB
	var_2_object = Obj(); // 0x12 PushV
	func_166(var_2_object); // 0x13 NEW_2
	RemoveActor(var_2_object); // 0x15 Func
	
Label_23:
	return 0; // 0x17 Return
}


func_82()
{
	var_68_object = Obj(); // 0x53 PushV
	func_166(var_68_object); // 0x54 NEW_2
	RemoveActor(var_68_object); // 0x56 Func
	return 0; // 0x58 Return
}


func_184(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xb8 PushV
	GetItemID(var_50_int); // 0xb9 ObjFunc
	var_53_string = "Category"; // 0xbb PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xbc Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xbe ObjFunc
	var_54_bool = var_52_bool; // 0xc0 Push
	if(var_54_bool == 0) goto Label_199; // 0xc1 JumpB
	var_55_int = 0; var_56_int = 0; // 0xc2 PushV
	var_55_int = var_50_int; // 0xc3 Mov
	var_56_int = var_46_int; // 0xc4 Mov
	func_172(var_55_int, var_56_int); // 0xc5 NEW_2
	
Label_199:
	var_43_bool = var_52_bool; // 0xc7 Mov
	return 6; // 0xc8 Return
}


func_89(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x59 PushV
	var_33_string = "HasProperty"; // 0x5a PushS
	var_34_int = 2; // 0x5b PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x5c FuncExist
	var_36_bool = var_35_bool == 0; // 0x5d Not
	if(var_36_bool == 0) goto Label_97; // 0x5e JumpB
	var_28_bool = 0; // 0x5f MovB
	return 2; // 0x60 Return
	
Label_97:
	HasProperty(var_30_string, var_32_bool); // 0x61 ObjFunc
	var_28_bool = var_32_bool; // 0x63 Mov
	return 2; // 0x64 Return
}


