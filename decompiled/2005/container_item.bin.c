task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0; // 0x7 PushV
	var_5_bool = 0; // 0x8 PushV
	var_5_bool = 1; // 0x9 MovB
	var_6_bool = 0; var_7_object = Obj(); // 0xa PushV
	var_7_object = var_0_object; // 0xb Mov
	func_97(var_6_bool, var_7_object); // 0xc NEW_2
	var_40_bool = var_6_bool == 0; // 0xe Not
	if(var_40_bool == 0) goto Label_22; // 0xf JumpB
	var_41_bool = 0; // 0x10 PushV
	func_127(var_41_bool); // 0x11 NEW_2
	var_45_bool = var_41_bool == 0; // 0x13 Not
	if(var_45_bool == 0) goto Label_22; // 0x14 JumpB
	var_5_bool = 0; // 0x15 MovB
	
Label_22:
	if(var_5_bool == 0) goto Label_24; // 0x16 JumpB
	return 4; // 0x17 Return
	
Label_24:
	var_46_int = 0; // 0x18 PushI
	GetItem(var_3_object, var_46_int); // 0x19 Func
	var_47_int = 0; // 0x1b PushI
	GetItemAmount(var_4_int, var_47_int); // 0x1c Func
	var_48_bool = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x1e PushV
	var_49_object = var_0_object; // 0x1f Mov
	var_50_object = var_3_object; // 0x20 Mov
	var_51_int = var_4_int; // 0x21 Mov
	func_145(var_49_object, var_50_object, var_51_int); // 0x22 NEW_2
	if(var_48_bool == 0) goto Label_42; // 0x24 JumpB
	var_65_object = Obj(); // 0x25 PushV
	func_121(var_65_object); // 0x26 NEW_2
	RemoveActor(var_65_object); // 0x28 Func
	
Label_42:
	return 4; // 0x2a Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_97(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x61 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x62 PushV
	var_11_object = var_7_object; // 0x63 Mov
	func_61(var_10_bool, var_11_object); // 0x64 NEW_2
	var_27_bool = var_10_bool == 0; // 0x66 Not
	if(var_27_bool == 0) goto Label_106; // 0x67 JumpB
	var_6_bool = 0; // 0x68 MovB
	return 2; // 0x69 Return
	
Label_106:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x6a PushV
	var_29_object = var_7_object; // 0x6b Mov
	var_30_string = "noaccess"; // 0x6c MovS
	func_44(var_28_bool, var_29_object, var_30_string); // 0x6d NEW_2
	var_37_bool = var_28_bool == 0; // 0x6f Not
	if(var_37_bool == 0) goto Label_115; // 0x70 JumpB
	var_6_bool = 1; // 0x71 MovB
	return 2; // 0x72 Return
	
Label_115:
	var_38_string = "noaccess"; // 0x73 PushS
	GetProperty(var_38_string, var_9_int); // 0x74 ObjFunc
	var_39_int = 0; // 0x76 PushI
	var_6_bool = var_9_int == var_39_int; // 0x77 Eq2
	return 2; // 0x78 Return
}


func_133(var_60_int, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x85 PushV
	CreateIntVector(var_63_object); // 0x86 Func
	add(var_60_int); // 0x88 ObjFunc
	add(var_61_int); // 0x8a ObjFunc
	var_64_int = 3; // 0x8c PushI
	SendWorldWndMessage(var_64_int, var_63_object); // 0x8d Func
	return 2; // 0x8f Return
}


func_44(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x2c PushV
	var_33_string = "HasProperty"; // 0x2d PushS
	var_34_int = 2; // 0x2e PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x2f FuncExist
	var_36_bool = var_35_bool == 0; // 0x30 Not
	if(var_36_bool == 0) goto Label_52; // 0x31 JumpB
	var_28_bool = 0; // 0x32 MovB
	return 2; // 0x33 Return
	
Label_52:
	HasProperty(var_30_string, var_32_bool); // 0x34 ObjFunc
	var_28_bool = var_32_bool; // 0x36 Mov
	return 2; // 0x37 Return
}


func_145(var_48_bool, var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x91 PushV
	GetItemID(var_55_int); // 0x92 ObjFunc
	var_58_string = "Category"; // 0x94 PushS
	GetInvItemProperty(var_56_int, var_55_int, var_58_string); // 0x95 Func
	AddItem(var_57_bool, var_50_object, var_56_int, var_51_int); // 0x97 ObjFunc
	var_59_bool = var_57_bool; // 0x99 Push
	if(var_59_bool == 0) goto Label_160; // 0x9a JumpB
	var_60_int = 0; var_61_int = 0; // 0x9b PushV
	var_60_int = var_55_int; // 0x9c Mov
	var_61_int = var_51_int; // 0x9d Mov
	func_133(var_60_int, var_61_int); // 0x9e NEW_2
	
Label_160:
	var_48_bool = var_57_bool; // 0xa0 Mov
	return 6; // 0xa1 Return
}


func_56(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x38 PushV
	IsDead(var_24_bool); // 0x39 ObjFunc
	var_21_bool = var_24_bool; // 0x3b Mov
	return 2; // 0x3c Return
}


func_121(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x79 PushV
	self(var_67_object); // 0x7a Func
	var_65_object = var_67_object; // 0x7c Mov
	return 2; // 0x7d Return
}


func_61(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x3d PushV
	var_16_bool = var_11_object == 0; // 0x3e NullEq
	if(var_16_bool == 0) goto Label_66; // 0x3f JumpB
	var_10_bool = 0; // 0x40 MovB
	return 4; // 0x41 Return
	
Label_66:
	var_17_bool = 0; // 0x42 PushV
	var_17_bool = 0; // 0x43 MovB
	var_18_string = "IsDead"; // 0x44 PushS
	var_19_int = 1; // 0x45 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x46 FuncExist
	if(var_20_bool == 0) goto Label_78; // 0x47 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x48 PushV
	var_22_object = var_11_object; // 0x49 Mov
	func_56(var_22_object); // 0x4a NEW_2
	if(var_21_bool == 0) goto Label_78; // 0x4c JumpB
	var_17_bool = 1; // 0x4d MovB
	
Label_78:
	if(var_17_bool == 0) goto Label_81; // 0x4e JumpB
	var_10_bool = 0; // 0x4f MovB
	return 4; // 0x50 Return
	
Label_81:
	GetScene(var_14_object); // 0x51 Func
	var_25_bool = var_14_object == 0; // 0x53 NullEq
	if(var_25_bool == 0) goto Label_87; // 0x54 JumpB
	var_10_bool = 0; // 0x55 MovB
	return 4; // 0x56 Return
	
Label_87:
	GetScene(var_15_object); // 0x57 ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x59 Neq
	if(var_26_bool == 0) goto Label_93; // 0x5a JumpB
	var_10_bool = 0; // 0x5b MovB
	return 4; // 0x5c Return
	
Label_93:
	var_10_bool = 1; // 0x5d MovB
	return 4; // 0x5e Return
}


func_127(var_41_bool)
{
	var_42_int = 0; var_43_int = 0; // 0x7f PushV
	var_44_string = "nouse_container"; // 0x80 PushS
	GetVariable(var_44_string, var_43_int); // 0x81 Func
	var_41_bool = !var_43_int; // 0x83 Not2
	return 2; // 0x84 Return
}


