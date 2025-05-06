task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0; // 0x7 PushV
	var_3_string = "locked"; // 0x8 PushS
	GetProperty(var_3_string, var_2_int); // 0x9 Func
	var_4_int = var_2_int; // 0xb Push
	if(var_4_int == 0) goto Label_45; // 0xc JumpB
	var_5_bool = 0; var_6_object = Obj(); var_7_string = ""; // 0xd PushV
	var_6_object = var_0_object; // 0xe Mov
	var_7_string = "b2q01_key"; // 0xf MovS
	func_98(var_6_object, var_7_string); // 0x10 NEW_2
	if(var_5_bool == 0) goto Label_41; // 0x12 JumpB
	var_12_bool = 0; var_13_object = Obj(); var_14_string = ""; // 0x13 PushV
	var_13_object = var_0_object; // 0x14 Mov
	var_14_string = "b2q01_key"; // 0x15 MovS
	func_105(var_13_object, var_14_string); // 0x16 NEW_2
	var_28_string = "locked"; // 0x18 PushS
	var_29_int = 0; // 0x19 PushI
	SetProperty(var_28_string, var_29_int); // 0x1a Func
	var_30_string = "unlock"; // 0x1c PushS
	PlaySound(var_30_string); // 0x1d Func
	func_135(); // 0x20 NEW_2
	func_148(); // 0x23 NEW_2
	func_122(); // 0x26 NEW_2
	goto Label_45; // 0x28 Jump
	
Label_45:
	var_70_object = Obj(); // 0x2d PushV
	var_70_object = var_0_object; // 0x2e Mov
	func_54(var_70_object); // 0x2f NEW_2
	return 2; // 0x31 Return
	
Label_41:
	var_84_string = "locked"; // 0x29 PushS
	PlaySound(var_84_string); // 0x2a Func
	return 2; // 0x2c Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	func_50(); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_194(var_54_bool, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0xc2 PushV
	var_60_object = Obj(); // 0xc3 PushV
	func_153(var_60_object); // 0xc4 NEW_2
	var_58_object = var_60_object; // 0xc5 Mov
	Find(var_55_int, var_59_object); // 0xc7 ObjFunc
	var_61_bool = var_59_object == 0; // 0xc9 Not
	if(var_61_bool == 0) goto Label_205; // 0xca JumpB
	var_54_bool = 0; // 0xcb MovB
	return 4; // 0xcc Return
	
Label_205:
	Remove(); // 0xcd ObjFunc
	var_54_bool = 1; // 0xcf MovB
	return 4; // 0xd0 Return
}


func_98(var_5_bool, var_7_string)
{
	var_8_int = 0; var_9_bool = 0; var_10_int = 0; var_11_bool = 0; // 0x62 PushV
	GetInvItemByName(var_10_int, var_7_string); // 0x63 Func
	HasItem(var_10_int, var_11_bool); // 0x65 ObjFunc
	var_5_bool = var_11_bool; // 0x67 Mov
	return 4; // 0x68 Return
}


func_166(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0xa6 PushV
	var_45_object = Obj(); // 0xa7 PushV
	func_153(var_45_object); // 0xa8 NEW_2
	var_42_object = var_45_object; // 0xa9 Mov
	Find(var_38_int, var_43_object); // 0xab ObjFunc
	var_50_bool = var_43_object == 0; // 0xad Not
	if(var_50_bool == 0) goto Label_181; // 0xae JumpB
	var_51_string = "Can't find diary parent with id: "; // 0xaf PushS
	var_52_int = var_51_string + var_38_int; // 0xb0 Add
	Trace(var_52_int); // 0xb1 Func
	var_36_bool = 0; // 0xb3 MovB
	return 6; // 0xb4 Return
	
Label_181:
	AddChild(var_37_object); // 0xb5 ObjFunc
	var_53_int = 7; // 0xb7 PushI
	SendWorldWndMessage(var_53_int); // 0xb8 Func
	GetCategory(var_44_int); // 0xba ObjFunc
	SetDiarySection(var_44_int); // 0xbc Func
	var_36_bool = 0; // 0xbe MovB
	return 6; // 0xbf Return
}


func_135()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x87 PushV
	var_33_int = 572; // 0x88 PushI
	var_34_int = 1; // 0x89 PushI
	var_35_int = 530605; // 0x8a PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x8b Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x8d PushV
	var_37_object = var_32_object; // 0x8e Mov
	var_38_int = 245; // 0x8f MovI
	func_166(var_36_bool, var_37_object, var_38_int); // 0x90 NEW_2
	return 2; // 0x92 Return
}


func_105(var_12_bool, var_14_string)
{
	var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; // 0x69 PushV
	GetInvItemByName(var_18_int, var_14_string); // 0x6a Func
	var_21_string = "Category"; // 0x6c PushS
	GetInvItemProperty(var_19_int, var_18_int, var_21_string); // 0x6d Func
	RemoveItemByType(var_20_bool, var_18_int, var_19_int); // 0x6f ObjFunc
	var_22_bool = var_20_bool; // 0x71 Push
	if(var_22_bool == 0) goto Label_120; // 0x72 JumpB
	var_23_int = 0; var_24_int = 0; // 0x73 PushV
	var_23_int = var_18_int; // 0x74 Mov
	var_24_int = 1; // 0x75 MovI
	func_86(var_23_int, var_24_int); // 0x76 NEW_2
	
Label_120:
	var_12_bool = var_20_bool; // 0x78 Mov
	return 6; // 0x79 Return
}


func_80(var_77_bool)
{
	var_78_int = 0; var_79_int = 0; // 0x50 PushV
	var_80_string = "nouse_container"; // 0x51 PushS
	GetVariable(var_80_string, var_79_int); // 0x52 Func
	var_77_bool = !var_79_int; // 0x54 Not2
	return 2; // 0x55 Return
}


func_50()
{
	
Label_50:
	Hold(); // 0x32 Func
	goto Label_50; // 0x34 Jump
}


func_148()
{
	var_54_bool = 0; var_55_int = 0; // 0x94 PushV
	var_55_int = 562; // 0x95 MovI
	func_194(var_54_bool, var_55_int); // 0x96 NEW_2
	return 0; // 0x98 Return
}


func_54(var_70_object)
{
	var_71_bool = 0; var_72_bool = 0; var_73_bool = 0; var_74_bool = 0; // 0x36 PushV
	var_75_bool = 0; // 0x37 PushV
	var_75_bool = 1; // 0x38 MovB
	var_76_bool = var_70_object == 0; // 0x39 Not
	if(var_76_bool == 0) goto Label_65; // 0x3a JumpB
	var_77_bool = 0; // 0x3b PushV
	func_80(var_77_bool); // 0x3c NEW_2
	var_81_bool = var_77_bool == 0; // 0x3e Not
	if(var_81_bool == 0) goto Label_65; // 0x3f JumpB
	var_75_bool = 0; // 0x40 MovB
	
Label_65:
	if(var_75_bool == 0) goto Label_67; // 0x41 JumpB
	return 4; // 0x42 Return
	
Label_67:
	IsOnGround(var_73_bool); // 0x43 ObjFunc
	var_82_bool = var_73_bool; // 0x45 Push
	if(var_82_bool == 0) goto Label_79; // 0x46 JumpB
	EventDisable(0); // 0x47 EventDisable
	IsOverrideActive(var_74_bool); // 0x48 Func
	var_83_bool = var_74_bool == 0; // 0x4a Not
	if(var_83_bool == 0) goto Label_78; // 0x4b JumpB
	Barter(var_70_object); // 0x4c Func
	
Label_78:
	EventEnable(0); // 0x4e EventEnable
	
Label_79:
	return 4; // 0x4f Return
}


func_86(var_23_int, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x56 PushV
	CreateIntVector(var_26_object); // 0x57 Func
	add(var_23_int); // 0x59 ObjFunc
	add(var_24_int); // 0x5b ObjFunc
	var_27_int = 4; // 0x5d PushI
	SendWorldWndMessage(var_27_int, var_26_object); // 0x5e Func
	return 2; // 0x60 Return
}


func_153(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x99 PushV
	GetDiaryRoot(var_47_object); // 0x9a Func
	var_48_bool = var_47_object == 0; // 0x9c Not
	if(var_48_bool == 0) goto Label_163; // 0x9d JumpB
	var_49_string = "Can't retrieve diary root"; // 0x9e PushS
	Trace(var_49_string); // 0x9f Func
	var_45_object = 0; // 0xa1 MovB
	return 2; // 0xa2 Return
	
Label_163:
	var_45_object = var_47_object; // 0xa3 Mov
	return 2; // 0xa4 Return
}


func_122()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x7a PushV
	var_64_int = 563; // 0x7b PushI
	var_65_int = 0; // 0x7c PushI
	var_66_int = 530577; // 0x7d PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x7e Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x80 PushV
	var_68_object = var_63_object; // 0x81 Mov
	var_69_int = -1; // 0x82 MovI
	func_166(var_67_bool, var_68_object, var_69_int); // 0x83 NEW_2
	return 2; // 0x85 Return
}


