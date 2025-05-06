task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_string = ""; var_4_string = ""; // 0x1 PushV
	var_3_string = "quest_b4_02"; // 0x2 MovS
	var_4_string = "ammo_or_samopal_taken"; // 0x3 MovS
	func_201(var_2_bool, var_3_string, var_4_string); // 0x4 NEW_2
	var_8_object = Obj(); // 0x6 PushV
	var_8_object = var_1_object; // 0x7 Mov
	func_55(var_8_object); // 0x8 NEW_2
	return 0; // 0xa Return
}


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


main(var_0_bool)
{
	var_0_bool = 0; // 0xb TMovB
	func_43(); // 0xd NEW_2
	return 0; // 0xf Return
}


func_101(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x65 PushV
	IsDead(var_31_bool); // 0x66 ObjFunc
	var_28_bool = var_31_bool; // 0x68 Mov
	return 2; // 0x69 Return
}


func_166(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xa6 PushV
	self(var_4_object); // 0xa7 Func
	var_2_object = var_4_object; // 0xa9 Mov
	return 2; // 0xaa Return
}


func_201(var_2_bool, var_3_string, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xc9 PushV
	FindActor(var_6_object, var_3_string); // 0xca Func
	var_7_bool = var_6_object == 0; // 0xcc NullEq
	if(var_7_bool == 0) goto Label_208; // 0xcd JumpB
	var_2_bool = 0; // 0xce MovB
	return 2; // 0xcf Return
	
Label_208:
	Trigger(var_6_object, var_4_string); // 0xd0 Func
	var_2_bool = 1; // 0xd2 MovB
	return 2; // 0xd3 Return
}


func_106(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x6a PushV
	var_23_bool = var_18_object == 0; // 0x6b NullEq
	if(var_23_bool == 0) goto Label_111; // 0x6c JumpB
	var_17_bool = 0; // 0x6d MovB
	return 4; // 0x6e Return
	
Label_111:
	var_24_bool = 0; // 0x6f PushV
	var_24_bool = 0; // 0x70 MovB
	var_25_string = "IsDead"; // 0x71 PushS
	var_26_int = 1; // 0x72 PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x73 FuncExist
	if(var_27_bool == 0) goto Label_123; // 0x74 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x75 PushV
	var_29_object = var_18_object; // 0x76 Mov
	func_101(var_29_object); // 0x77 NEW_2
	if(var_28_bool == 0) goto Label_123; // 0x79 JumpB
	var_24_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_24_bool == 0) goto Label_126; // 0x7b JumpB
	var_17_bool = 0; // 0x7c MovB
	return 4; // 0x7d Return
	
Label_126:
	GetScene(var_21_object); // 0x7e Func
	var_32_bool = var_21_object == 0; // 0x80 NullEq
	if(var_32_bool == 0) goto Label_132; // 0x81 JumpB
	var_17_bool = 0; // 0x82 MovB
	return 4; // 0x83 Return
	
Label_132:
	GetScene(var_22_object); // 0x84 ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x86 Neq
	if(var_33_bool == 0) goto Label_138; // 0x87 JumpB
	var_17_bool = 0; // 0x88 MovB
	return 4; // 0x89 Return
	
Label_138:
	var_17_bool = 1; // 0x8a MovB
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


func_172(var_62_int, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xac PushV
	CreateIntVector(var_65_object); // 0xad Func
	add(var_62_int); // 0xaf ObjFunc
	add(var_63_int); // 0xb1 ObjFunc
	var_66_int = 3; // 0xb3 PushI
	SendWorldWndMessage(var_66_int, var_65_object); // 0xb4 Func
	return 2; // 0xb6 Return
}


func_142(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x8e PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x8f PushV
	var_18_object = var_14_object; // 0x90 Mov
	func_106(var_17_bool, var_18_object); // 0x91 NEW_2
	var_34_bool = var_17_bool == 0; // 0x93 Not
	if(var_34_bool == 0) goto Label_151; // 0x94 JumpB
	var_13_bool = 0; // 0x95 MovB
	return 2; // 0x96 Return
	
Label_151:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x97 PushV
	var_36_object = var_14_object; // 0x98 Mov
	var_37_string = "noaccess"; // 0x99 MovS
	func_89(var_35_bool, var_36_object, var_37_string); // 0x9a NEW_2
	var_44_bool = var_35_bool == 0; // 0x9c Not
	if(var_44_bool == 0) goto Label_160; // 0x9d JumpB
	var_13_bool = 1; // 0x9e MovB
	return 2; // 0x9f Return
	
Label_160:
	var_45_string = "noaccess"; // 0xa0 PushS
	GetProperty(var_45_string, var_16_int); // 0xa1 ObjFunc
	var_46_int = 0; // 0xa3 PushI
	var_13_bool = var_16_int == var_46_int; // 0xa4 Eq2
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


func_55(var_8_object)
{
	var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0; // 0x37 PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x38 PushV
	var_14_object = var_8_object; // 0x39 Mov
	func_142(var_13_bool, var_14_object); // 0x3a NEW_2
	var_47_bool = var_13_bool == 0; // 0x3c Not
	if(var_47_bool == 0) goto Label_63; // 0x3d JumpB
	return 4; // 0x3e Return
	
Label_63:
	var_48_int = 0; // 0x3f PushI
	GetItem(var_11_object, var_48_int); // 0x40 Func
	var_49_int = 0; // 0x42 PushI
	GetItemAmount(var_12_int, var_49_int); // 0x43 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x45 PushV
	var_51_object = var_8_object; // 0x46 Mov
	var_52_object = var_11_object; // 0x47 Mov
	var_53_int = var_12_int; // 0x48 Mov
	func_184(var_51_object, var_52_object, var_53_int); // 0x49 NEW_2
	if(var_50_bool == 0) goto Label_80; // 0x4b JumpB
	var_67_object = Obj(); // 0x4c PushV
	var_67_object = var_8_object; // 0x4d Mov
	func_82(); // 0x4e NEW_2
	
Label_80:
	return 4; // 0x50 Return
}


func_184(var_50_bool, var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; // 0xb8 PushV
	GetItemID(var_57_int); // 0xb9 ObjFunc
	var_60_string = "Category"; // 0xbb PushS
	GetInvItemProperty(var_58_int, var_57_int, var_60_string); // 0xbc Func
	AddItem(var_59_bool, var_52_object, var_58_int, var_53_int); // 0xbe ObjFunc
	var_61_bool = var_59_bool; // 0xc0 Push
	if(var_61_bool == 0) goto Label_199; // 0xc1 JumpB
	var_62_int = 0; var_63_int = 0; // 0xc2 PushV
	var_62_int = var_57_int; // 0xc3 Mov
	var_63_int = var_53_int; // 0xc4 Mov
	func_172(var_62_int, var_63_int); // 0xc5 NEW_2
	
Label_199:
	var_50_bool = var_59_bool; // 0xc7 Mov
	return 6; // 0xc8 Return
}


func_89(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x59 PushV
	var_40_string = "HasProperty"; // 0x5a PushS
	var_41_int = 2; // 0x5b PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x5c FuncExist
	var_43_bool = var_42_bool == 0; // 0x5d Not
	if(var_43_bool == 0) goto Label_97; // 0x5e JumpB
	var_35_bool = 0; // 0x5f MovB
	return 2; // 0x60 Return
	
Label_97:
	HasProperty(var_37_string, var_39_bool); // 0x61 ObjFunc
	var_35_bool = var_39_bool; // 0x63 Mov
	return 2; // 0x64 Return
}


