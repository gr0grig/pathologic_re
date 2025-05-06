task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x7 PushV
	var_6_bool = 0; // 0x8 PushV
	var_6_bool = 1; // 0x9 MovB
	var_7_bool = 0; var_8_object = Obj(); // 0xa PushV
	var_8_object = var_1_object; // 0xb Mov
	func_143(var_7_bool, var_8_object); // 0xc NEW_2
	var_41_bool = var_7_bool == 0; // 0xe Not
	if(var_41_bool == 0) goto Label_22; // 0xf JumpB
	var_42_bool = 0; // 0x10 PushV
	func_173(var_42_bool); // 0x11 NEW_2
	var_46_bool = var_42_bool == 0; // 0x13 Not
	if(var_46_bool == 0) goto Label_22; // 0x14 JumpB
	var_6_bool = 0; // 0x15 MovB
	
Label_22:
	if(var_6_bool == 0) goto Label_24; // 0x16 JumpB
	return 4; // 0x17 Return
	
Label_24:
	var_47_int = 0; // 0x18 PushI
	GetItem(var_4_object, var_47_int); // 0x19 Func
	var_48_int = 0; // 0x1b PushI
	GetItemAmount(var_5_int, var_48_int); // 0x1c Func
	var_49_bool = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x1e PushV
	var_50_object = var_1_object; // 0x1f Mov
	var_51_object = var_4_object; // 0x20 Mov
	var_52_int = var_5_int; // 0x21 Mov
	func_191(var_50_object, var_51_object, var_52_int); // 0x22 NEW_2
	if(var_49_bool == 0) goto Label_42; // 0x24 JumpB
	var_66_object = Obj(); // 0x25 PushV
	func_167(var_66_object); // 0x26 NEW_2
	RemoveActor(var_66_object); // 0x28 Func
	
Label_42:
	return 4; // 0x2a Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x2c PushV
	var_4_string = "cleanup"; // 0x2d PushS
	var_5_bool = var_1_string == var_4_string; // 0x2e Eq
	if(var_5_bool == 0) goto Label_67; // 0x2f JumpB
	var_0_bool = 1; // 0x30 TMovB
	IsLoaded(var_3_bool); // 0x31 Func
	var_6_bool = 0; // 0x33 PushV
	var_6_bool = 0; // 0x34 MovB
	var_7_bool = var_3_bool == 0; // 0x35 Not
	if(var_7_bool == 0) goto Label_60; // 0x36 JumpB
	var_8_bool = 0; // 0x37 PushV
	func_88(var_8_bool); // 0x38 NEW_2
	if(var_8_bool == 0) goto Label_60; // 0x3a JumpB
	var_6_bool = 1; // 0x3b MovB
	
Label_60:
	if(var_6_bool == 0) goto Label_66; // 0x3c JumpB
	var_9_object = Obj(); // 0x3d PushV
	func_167(var_9_object); // 0x3e NEW_2
	RemoveActor(var_9_object); // 0x40 Func
	
Label_66:
	goto Label_71; // 0x42 Jump
	
Label_71:
	return 2; // 0x47 Return
	
Label_67:
	var_12_string = "restore"; // 0x43 PushS
	var_13_bool = var_1_string == var_12_string; // 0x44 Eq
	if(var_13_bool == 0) goto Label_71; // 0x45 JumpB
	var_0_bool = 0; // 0x46 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x48 PushV
	var_1_bool = 0; // 0x49 MovB
	var_2_bool = var_0_bool; // 0x4a PushT
	if(var_2_bool == 0) goto Label_81; // 0x4b JumpB
	var_3_bool = 0; // 0x4c PushV
	func_88(var_3_bool); // 0x4d NEW_2
	if(var_3_bool == 0) goto Label_81; // 0x4f JumpB
	var_1_bool = 1; // 0x50 MovB
	
Label_81:
	if(var_1_bool == 0) goto Label_87; // 0x51 JumpB
	var_4_object = Obj(); // 0x52 PushV
	func_167(var_4_object); // 0x53 NEW_2
	RemoveActor(var_4_object); // 0x55 Func
	
Label_87:
	return 0; // 0x57 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_102(var_22_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x66 PushV
	IsDead(var_25_bool); // 0x67 ObjFunc
	var_22_bool = var_25_bool; // 0x69 Mov
	return 2; // 0x6a Return
}


func_167(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0xa7 PushV
	self(var_6_object); // 0xa8 Func
	var_4_object = var_6_object; // 0xaa Mov
	return 2; // 0xab Return
}


func_107(var_11_bool, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x6b PushV
	var_17_bool = var_12_object == 0; // 0x6c NullEq
	if(var_17_bool == 0) goto Label_112; // 0x6d JumpB
	var_11_bool = 0; // 0x6e MovB
	return 4; // 0x6f Return
	
Label_112:
	var_18_bool = 0; // 0x70 PushV
	var_18_bool = 0; // 0x71 MovB
	var_19_string = "IsDead"; // 0x72 PushS
	var_20_int = 1; // 0x73 PushI
	var_21_bool = IsFuncExist(var_12_object, var_19_string, var_20_int); // 0x74 FuncExist
	if(var_21_bool == 0) goto Label_124; // 0x75 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x76 PushV
	var_23_object = var_12_object; // 0x77 Mov
	func_102(var_23_object); // 0x78 NEW_2
	if(var_22_bool == 0) goto Label_124; // 0x7a JumpB
	var_18_bool = 1; // 0x7b MovB
	
Label_124:
	if(var_18_bool == 0) goto Label_127; // 0x7c JumpB
	var_11_bool = 0; // 0x7d MovB
	return 4; // 0x7e Return
	
Label_127:
	GetScene(var_15_object); // 0x7f Func
	var_26_bool = var_15_object == 0; // 0x81 NullEq
	if(var_26_bool == 0) goto Label_133; // 0x82 JumpB
	var_11_bool = 0; // 0x83 MovB
	return 4; // 0x84 Return
	
Label_133:
	GetScene(var_16_object); // 0x85 ObjFunc
	var_27_bool = var_15_object != var_16_object; // 0x87 Neq
	if(var_27_bool == 0) goto Label_139; // 0x88 JumpB
	var_11_bool = 0; // 0x89 MovB
	return 4; // 0x8a Return
	
Label_139:
	var_11_bool = 1; // 0x8b MovB
	return 4; // 0x8c Return
}


func_173(var_42_bool)
{
	var_43_int = 0; var_44_int = 0; // 0xad PushV
	var_45_string = "nouse_container"; // 0xae PushS
	GetVariable(var_45_string, var_44_int); // 0xaf Func
	var_42_bool = !var_44_int; // 0xb1 Not2
	return 2; // 0xb2 Return
}


func_143(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0; // 0x8f PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x90 PushV
	var_12_object = var_8_object; // 0x91 Mov
	func_107(var_11_bool, var_12_object); // 0x92 NEW_2
	var_28_bool = var_11_bool == 0; // 0x94 Not
	if(var_28_bool == 0) goto Label_152; // 0x95 JumpB
	var_7_bool = 0; // 0x96 MovB
	return 2; // 0x97 Return
	
Label_152:
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; // 0x98 PushV
	var_30_object = var_8_object; // 0x99 Mov
	var_31_string = "noaccess"; // 0x9a MovS
	func_90(var_29_bool, var_30_object, var_31_string); // 0x9b NEW_2
	var_38_bool = var_29_bool == 0; // 0x9d Not
	if(var_38_bool == 0) goto Label_161; // 0x9e JumpB
	var_7_bool = 1; // 0x9f MovB
	return 2; // 0xa0 Return
	
Label_161:
	var_39_string = "noaccess"; // 0xa1 PushS
	GetProperty(var_39_string, var_10_int); // 0xa2 ObjFunc
	var_40_int = 0; // 0xa4 PushI
	var_7_bool = var_10_int == var_40_int; // 0xa5 Eq2
	return 2; // 0xa6 Return
}


func_179(var_61_int, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0xb3 PushV
	CreateIntVector(var_64_object); // 0xb4 Func
	add(var_61_int); // 0xb6 ObjFunc
	add(var_62_int); // 0xb8 ObjFunc
	var_65_int = 3; // 0xba PushI
	SendWorldWndMessage(var_65_int, var_64_object); // 0xbb Func
	return 2; // 0xbd Return
}


func_88(var_3_bool)
{
	var_3_bool = 1; // 0x58 MovB
	return 0; // 0x59 Return
}


func_90(var_29_bool, var_30_object, var_31_string)
{
	var_32_bool = 0; var_33_bool = 0; // 0x5a PushV
	var_34_string = "HasProperty"; // 0x5b PushS
	var_35_int = 2; // 0x5c PushI
	var_36_bool = IsFuncExist(var_30_object, var_34_string, var_35_int); // 0x5d FuncExist
	var_37_bool = var_36_bool == 0; // 0x5e Not
	if(var_37_bool == 0) goto Label_98; // 0x5f JumpB
	var_29_bool = 0; // 0x60 MovB
	return 2; // 0x61 Return
	
Label_98:
	HasProperty(var_31_string, var_33_bool); // 0x62 ObjFunc
	var_29_bool = var_33_bool; // 0x64 Mov
	return 2; // 0x65 Return
}


func_191(var_49_bool, var_51_object, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; // 0xbf PushV
	GetItemID(var_56_int); // 0xc0 ObjFunc
	var_59_string = "Category"; // 0xc2 PushS
	GetInvItemProperty(var_57_int, var_56_int, var_59_string); // 0xc3 Func
	AddItem(var_58_bool, var_51_object, var_57_int, var_52_int); // 0xc5 ObjFunc
	var_60_bool = var_58_bool; // 0xc7 Push
	if(var_60_bool == 0) goto Label_206; // 0xc8 JumpB
	var_61_int = 0; var_62_int = 0; // 0xc9 PushV
	var_61_int = var_56_int; // 0xca Mov
	var_62_int = var_52_int; // 0xcb Mov
	func_179(var_61_int, var_62_int); // 0xcc NEW_2
	
Label_206:
	var_49_bool = var_58_bool; // 0xce Mov
	return 6; // 0xcf Return
}


