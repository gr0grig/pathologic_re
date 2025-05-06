task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x19 PushV
	var_4_string = "cleanup"; // 0x1a PushS
	var_5_bool = var_1_string == var_4_string; // 0x1b Eq
	if(var_5_bool == 0) goto Label_39; // 0x1c JumpB
	var_0_bool = 1; // 0x1d TMovB
	IsLoaded(var_3_bool); // 0x1e Func
	var_6_bool = var_3_bool == 0; // 0x20 Not
	if(var_6_bool == 0) goto Label_39; // 0x21 JumpB
	var_7_object = Obj(); // 0x22 PushV
	func_160(var_7_object); // 0x23 NEW_2
	RemoveActor(var_7_object); // 0x25 Func
	
Label_39:
	return 2; // 0x27 Return
}


task_0_event_6(var_0_bool)
{
	func_17(); // 0x29 NEW_2
	return 0; // 0x2b Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x38 PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x39 PushV
	var_7_object = var_1_object; // 0x3a Mov
	func_136(var_6_bool, var_7_object); // 0x3b NEW_2
	var_40_bool = var_6_bool == 0; // 0x3d Not
	if(var_40_bool == 0) goto Label_64; // 0x3e JumpB
	return 4; // 0x3f Return
	
Label_64:
	var_41_int = 0; // 0x40 PushI
	GetItem(var_4_object, var_41_int); // 0x41 Func
	var_42_int = 0; // 0x43 PushI
	GetItemAmount(var_5_int, var_42_int); // 0x44 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x46 PushV
	var_44_object = var_1_object; // 0x47 Mov
	var_45_object = var_4_object; // 0x48 Mov
	var_46_int = var_5_int; // 0x49 Mov
	func_178(var_44_object, var_45_object, var_46_int); // 0x4a NEW_2
	if(var_43_bool == 0) goto Label_81; // 0x4c JumpB
	var_60_object = Obj(); // 0x4d PushV
	var_60_object = var_1_object; // 0x4e Mov
	func_0(); // 0x4f NEW_2
	
Label_81:
	return 4; // 0x51 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0xc TMovB
	func_44(); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_160(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xa0 PushV
	self(var_69_object); // 0xa1 Func
	var_67_object = var_69_object; // 0xa3 Mov
	return 2; // 0xa4 Return
}


func_0()
{
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x1 PushV
	var_62_string = "quest_k4_01"; // 0x2 MovS
	var_63_string = "meshok_taken"; // 0x3 MovS
	func_195(var_61_bool, var_62_string, var_63_string); // 0x4 NEW_2
	var_67_object = Obj(); // 0x6 PushV
	func_160(var_67_object); // 0x7 NEW_2
	RemoveActor(var_67_object); // 0x9 Func
	return 0; // 0xb Return
}


func_195(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xc3 PushV
	FindActor(var_65_object, var_62_string); // 0xc4 Func
	var_66_bool = var_65_object == 0; // 0xc6 NullEq
	if(var_66_bool == 0) goto Label_202; // 0xc7 JumpB
	var_61_bool = 0; // 0xc8 MovB
	return 2; // 0xc9 Return
	
Label_202:
	Trigger(var_65_object, var_63_string); // 0xca Func
	var_61_bool = 1; // 0xcc MovB
	return 2; // 0xcd Return
}


func_100(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x64 PushV
	var_16_bool = var_11_object == 0; // 0x65 NullEq
	if(var_16_bool == 0) goto Label_105; // 0x66 JumpB
	var_10_bool = 0; // 0x67 MovB
	return 4; // 0x68 Return
	
Label_105:
	var_17_bool = 0; // 0x69 PushV
	var_17_bool = 0; // 0x6a MovB
	var_18_string = "IsDead"; // 0x6b PushS
	var_19_int = 1; // 0x6c PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x6d FuncExist
	if(var_20_bool == 0) goto Label_117; // 0x6e JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x6f PushV
	var_22_object = var_11_object; // 0x70 Mov
	func_95(var_22_object); // 0x71 NEW_2
	if(var_21_bool == 0) goto Label_117; // 0x73 JumpB
	var_17_bool = 1; // 0x74 MovB
	
Label_117:
	if(var_17_bool == 0) goto Label_120; // 0x75 JumpB
	var_10_bool = 0; // 0x76 MovB
	return 4; // 0x77 Return
	
Label_120:
	GetScene(var_14_object); // 0x78 Func
	var_25_bool = var_14_object == 0; // 0x7a NullEq
	if(var_25_bool == 0) goto Label_126; // 0x7b JumpB
	var_10_bool = 0; // 0x7c MovB
	return 4; // 0x7d Return
	
Label_126:
	GetScene(var_15_object); // 0x7e ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x80 Neq
	if(var_26_bool == 0) goto Label_132; // 0x81 JumpB
	var_10_bool = 0; // 0x82 MovB
	return 4; // 0x83 Return
	
Label_132:
	var_10_bool = 1; // 0x84 MovB
	return 4; // 0x85 Return
}


func_166(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xa6 PushV
	CreateIntVector(var_58_object); // 0xa7 Func
	add(var_55_int); // 0xa9 ObjFunc
	add(var_56_int); // 0xab ObjFunc
	var_59_int = 3; // 0xad PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0xae Func
	return 2; // 0xb0 Return
}


func_136(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x88 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x89 PushV
	var_11_object = var_7_object; // 0x8a Mov
	func_100(var_10_bool, var_11_object); // 0x8b NEW_2
	var_27_bool = var_10_bool == 0; // 0x8d Not
	if(var_27_bool == 0) goto Label_145; // 0x8e JumpB
	var_6_bool = 0; // 0x8f MovB
	return 2; // 0x90 Return
	
Label_145:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x91 PushV
	var_29_object = var_7_object; // 0x92 Mov
	var_30_string = "noaccess"; // 0x93 MovS
	func_83(var_28_bool, var_29_object, var_30_string); // 0x94 NEW_2
	var_37_bool = var_28_bool == 0; // 0x96 Not
	if(var_37_bool == 0) goto Label_154; // 0x97 JumpB
	var_6_bool = 1; // 0x98 MovB
	return 2; // 0x99 Return
	
Label_154:
	var_38_string = "noaccess"; // 0x9a PushS
	GetProperty(var_38_string, var_9_int); // 0x9b ObjFunc
	var_39_int = 0; // 0x9d PushI
	var_6_bool = var_9_int == var_39_int; // 0x9e Eq2
	return 2; // 0x9f Return
}


func_44()
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x2c PushV
	var_3_string = "object"; // 0x2d PushS
	FindGeometry(var_3_string, var_2_object); // 0x2e Func
	var_4_bool = 1; // 0x30 PushB
	Enable(var_4_bool); // 0x31 ObjFunc
	
Label_51:
	Hold(); // 0x33 Func
	goto Label_51; // 0x35 Jump
}


func_17()
{
	var_1_bool = var_0_bool; // 0x11 PushT
	if(var_1_bool == 0) goto Label_24; // 0x12 JumpB
	var_2_object = Obj(); // 0x13 PushV
	func_160(var_2_object); // 0x14 NEW_2
	RemoveActor(var_2_object); // 0x16 Func
	
Label_24:
	return 0; // 0x18 Return
}


func_178(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xb2 PushV
	GetItemID(var_50_int); // 0xb3 ObjFunc
	var_53_string = "Category"; // 0xb5 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xb6 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xb8 ObjFunc
	var_54_bool = var_52_bool; // 0xba Push
	if(var_54_bool == 0) goto Label_193; // 0xbb JumpB
	var_55_int = 0; var_56_int = 0; // 0xbc PushV
	var_55_int = var_50_int; // 0xbd Mov
	var_56_int = var_46_int; // 0xbe Mov
	func_166(var_55_int, var_56_int); // 0xbf NEW_2
	
Label_193:
	var_43_bool = var_52_bool; // 0xc1 Mov
	return 6; // 0xc2 Return
}


func_83(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x53 PushV
	var_33_string = "HasProperty"; // 0x54 PushS
	var_34_int = 2; // 0x55 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x56 FuncExist
	var_36_bool = var_35_bool == 0; // 0x57 Not
	if(var_36_bool == 0) goto Label_91; // 0x58 JumpB
	var_28_bool = 0; // 0x59 MovB
	return 2; // 0x5a Return
	
Label_91:
	HasProperty(var_30_string, var_32_bool); // 0x5b ObjFunc
	var_28_bool = var_32_bool; // 0x5d Mov
	return 2; // 0x5e Return
}


func_95(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5f PushV
	IsDead(var_24_bool); // 0x60 ObjFunc
	var_21_bool = var_24_bool; // 0x62 Mov
	return 2; // 0x63 Return
}


