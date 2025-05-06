main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; // 0x0 PushV
	var_4_string = "drink"; // 0x1 PushS
	PlaySound(var_4_string); // 0x2 Func
	var_5_bool = 0; var_6_string = ""; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x4 PushV
	var_6_string = "hunger"; // 0x5 MovS
	var_7_float = -0.01; // 0x6 MovF
	var_8_float = 0; // 0x7 MovI
	var_9_float = 1; // 0x8 MovI
	func_59(var_5_bool, var_6_string, var_7_float, var_8_float, var_9_float); // 0x9 NEW_2
	var_21_float = 0; // 0xb PushV
	var_21_float = -0.01; // 0xc MovF
	func_149(var_21_float); // 0xd NEW_2
	var_25_string = "tiredness"; // 0xf PushS
	GetProperty(var_25_string, var_2_float); // 0x10 Func
	var_26_float = 0.03; // 0x12 PushF
	var_27_int = var_2_float + var_26_float; // 0x13 Add
	var_28_int = 1; // 0x14 PushI
	var_29_bool = var_27_int > var_28_int; // 0x15 GT
	if(var_29_bool == 0) goto Label_38; // 0x16 JumpB
	var_30_float = 0.03; // 0x17 PushF
	var_31_int = var_2_float + var_30_float; // 0x18 Add
	var_32_int = 1; // 0x19 PushI
	var_3_float = var_31_int - var_32_int; // 0x1a Sub2
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0; // 0x1b PushV
	var_34_string = "health"; // 0x1c MovS
	var_35_float = -var_3_float; // 0x1d Neg2
	var_36_float = 0; // 0x1e MovI
	var_37_float = 1; // 0x1f MovI
	func_59(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float); // 0x20 NEW_2
	var_38_float = 0; // 0x22 PushV
	var_38_float = -var_3_float; // 0x23 Neg2
	func_159(var_38_float); // 0x24 NEW_2
	
Label_38:
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x26 PushV
	var_43_string = "tiredness"; // 0x27 MovS
	var_44_float = 0.03; // 0x28 MovF
	var_45_float = 0; // 0x29 MovI
	var_46_float = 1; // 0x2a MovI
	func_59(var_42_bool, var_43_string, var_44_float, var_45_float, var_46_float); // 0x2b NEW_2
	var_47_float = 0; // 0x2d PushV
	var_47_float = 0.03; // 0x2e MovF
	func_139(var_47_float); // 0x2f NEW_2
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0; // 0x31 PushV
	var_54_object = Obj(); // 0x32 PushV
	func_78(var_54_object); // 0x33 NEW_2
	var_51_object = var_54_object; // 0x34 Mov
	var_52_string = "bottle_empty"; // 0x36 MovS
	var_53_int = 1; // 0x37 MovI
	func_126(var_51_object, var_52_string, var_53_int); // 0x38 NEW_2
	return 4; // 0x3a Return
}


func_159(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x9f PushV
	CreateFloatVector(var_40_object); // 0xa0 Func
	add(var_38_float); // 0xa2 ObjFunc
	var_41_int = 15; // 0xa4 PushI
	SendWorldWndMessage(var_41_int, var_40_object); // 0xa5 Func
	return 2; // 0xa7 Return
}


func_107(var_60_object, var_61_int)
{
	var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x6b PushV
	GetItemID(var_65_int); // 0x6c ObjFunc
	var_68_string = "Category"; // 0x6e PushS
	GetInvItemProperty(var_66_int, var_65_int, var_68_string); // 0x6f Func
	AddItem(var_67_bool, var_60_object, var_66_int, var_61_int); // 0x71 ObjFunc
	var_69_bool = var_67_bool == 0; // 0x73 Not
	if(var_69_bool == 0) goto Label_120; // 0x74 JumpB
	DropItems(var_60_object, var_61_int); // 0x75 ObjFunc
	goto Label_125; // 0x77 Jump
	
Label_125:
	return 6; // 0x7d Return
	
Label_120:
	var_70_int = 0; var_71_int = 0; // 0x78 PushV
	var_70_int = var_65_int; // 0x79 Mov
	var_71_int = var_61_int; // 0x7a Mov
	func_95(var_70_int, var_71_int); // 0x7b NEW_2
}


func_139(var_47_float)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x8b PushV
	CreateFloatVector(var_49_object); // 0x8c Func
	add(var_47_float); // 0x8e ObjFunc
	var_50_int = 11; // 0x90 PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x91 Func
	return 2; // 0x93 Return
}


func_78(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x4e PushV
	self(var_56_object); // 0x4f Func
	var_54_object = var_56_object; // 0x51 Mov
	return 2; // 0x52 Return
}


func_84(var_15_float, var_16_float, var_17_float, var_18_float)
{
	var_19_bool = var_16_float < var_17_float; // 0x55 LT
	if(var_19_bool == 0) goto Label_89; // 0x56 JumpB
	var_15_float = var_17_float; // 0x57 Mov
	return 0; // 0x58 Return
	
Label_89:
	var_20_bool = var_16_float > var_18_float; // 0x59 GT
	if(var_20_bool == 0) goto Label_93; // 0x5a JumpB
	var_15_float = var_18_float; // 0x5b Mov
	return 0; // 0x5c Return
	
Label_93:
	var_15_float = var_16_float; // 0x5d Mov
	return 0; // 0x5e Return
}


func_149(var_21_float)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x95 PushV
	CreateFloatVector(var_23_object); // 0x96 Func
	add(var_21_float); // 0x98 ObjFunc
	var_24_int = 12; // 0x9a PushI
	SendWorldWndMessage(var_24_int, var_23_object); // 0x9b Func
	return 2; // 0x9d Return
}


func_59(var_5_bool, var_6_string, var_7_float, var_8_float, var_9_float)
{
	var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_float = 0; // 0x3b PushV
	HasProperty(var_6_string, var_12_bool); // 0x3c Func
	var_14_bool = var_12_bool == 0; // 0x3e Not
	if(var_14_bool == 0) goto Label_66; // 0x3f JumpB
	var_5_bool = 0; // 0x40 MovB
	return 4; // 0x41 Return
	
Label_66:
	GetProperty(var_6_string, var_13_float); // 0x42 Func
	var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; // 0x44 PushV
	var_16_float = var_13_float + var_7_float; // 0x45 Add2
	var_17_float = var_8_float; // 0x46 Mov
	var_18_float = var_9_float; // 0x47 Mov
	func_84(var_15_float, var_16_float, var_17_float, var_18_float); // 0x48 NEW_2
	SetProperty(var_6_string, var_15_float); // 0x4a Func
	var_5_bool = 1; // 0x4c MovB
	return 4; // 0x4d Return
}


func_126(var_51_object, var_52_string, var_53_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x7e PushV
	CreateInvItem(var_58_object); // 0x7f Func
	SetItemName(var_52_string); // 0x81 ObjFunc
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; // 0x83 PushV
	var_59_object = var_51_object; // 0x84 Mov
	var_60_object = var_58_object; // 0x85 Mov
	var_61_int = var_53_int; // 0x86 Mov
	func_107(var_60_object, var_61_int); // 0x87 NEW_2
	return 2; // 0x89 Return
}


func_95(var_70_int, var_71_int)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x5f PushV
	CreateIntVector(var_73_object); // 0x60 Func
	add(var_70_int); // 0x62 ObjFunc
	add(var_71_int); // 0x64 ObjFunc
	var_74_int = 3; // 0x66 PushI
	SendWorldWndMessage(var_74_int, var_73_object); // 0x67 Func
	return 2; // 0x69 Return
}


