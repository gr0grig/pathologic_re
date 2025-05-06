task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_object = Obj(); var_3_object = Obj(); var_4_string = ""; var_5_object = Obj(); var_6_object = Obj(); // 0xc PushV
	var_7_bool = 0; var_8_object = Obj(); // 0xd PushV
	var_8_object = var_0_object; // 0xe Mov
	func_105(var_7_bool, var_8_object); // 0xf NEW_2
	var_41_bool = var_7_bool == 0; // 0x11 Not
	if(var_41_bool == 0) goto Label_20; // 0x12 JumpB
	return 6; // 0x13 Return
	
Label_20:
	var_42_string = "Item"; // 0x14 PushS
	GetProperty(var_42_string, var_4_string); // 0x15 Func
	CreateInvItem(var_5_object); // 0x17 Func
	SetItemName(var_4_string); // 0x19 ObjFunc
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x1b PushV
	var_44_object = var_0_object; // 0x1c Mov
	var_45_object = var_5_object; // 0x1d Mov
	var_46_int = 1; // 0x1e MovI
	func_147(var_44_object, var_45_object, var_46_int); // 0x1f NEW_2
	if(var_43_bool == 0) goto Label_50; // 0x21 JumpB
	GetScene(var_6_object); // 0x22 Func
	var_60_object = Obj(); // 0x24 PushV
	func_129(var_60_object); // 0x25 NEW_2
	RemoveStationaryActor(var_60_object); // 0x27 ObjFunc
	func_164(); // 0x2a NEW_2
	var_86_object = Obj(); // 0x2c PushV
	func_129(var_86_object); // 0x2d NEW_2
	RemoveActor(var_86_object); // 0x2f Func
	var_6_object = 0; // 0x31 SetNull
	
Label_50:
	return 6; // 0x32 Return
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


func_64(var_22_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x40 PushV
	IsDead(var_25_bool); // 0x41 ObjFunc
	var_22_bool = var_25_bool; // 0x43 Mov
	return 2; // 0x44 Return
}


func_129(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x81 PushV
	self(var_62_object); // 0x82 Func
	var_60_object = var_62_object; // 0x84 Mov
	return 2; // 0x85 Return
}


func_164()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0xa4 PushV
	var_65_int = 597; // 0xa5 PushI
	var_66_int = 2; // 0xa6 PushI
	var_67_int = 531148; // 0xa7 PushI
	CreateDiaryEntry(var_64_object, var_65_int, var_66_int, var_67_int); // 0xa8 Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0xaa PushV
	var_69_object = var_64_object; // 0xab Mov
	var_70_int = 594; // 0xac MovI
	func_190(var_68_bool, var_69_object, var_70_int); // 0xad NEW_2
	return 2; // 0xaf Return
}


func_69(var_11_bool, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x45 PushV
	var_17_bool = var_12_object == 0; // 0x46 NullEq
	if(var_17_bool == 0) goto Label_74; // 0x47 JumpB
	var_11_bool = 0; // 0x48 MovB
	return 4; // 0x49 Return
	
Label_74:
	var_18_bool = 0; // 0x4a PushV
	var_18_bool = 0; // 0x4b MovB
	var_19_string = "IsDead"; // 0x4c PushS
	var_20_int = 1; // 0x4d PushI
	var_21_bool = IsFuncExist(var_12_object, var_19_string, var_20_int); // 0x4e FuncExist
	if(var_21_bool == 0) goto Label_86; // 0x4f JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x50 PushV
	var_23_object = var_12_object; // 0x51 Mov
	func_64(var_23_object); // 0x52 NEW_2
	if(var_22_bool == 0) goto Label_86; // 0x54 JumpB
	var_18_bool = 1; // 0x55 MovB
	
Label_86:
	if(var_18_bool == 0) goto Label_89; // 0x56 JumpB
	var_11_bool = 0; // 0x57 MovB
	return 4; // 0x58 Return
	
Label_89:
	GetScene(var_15_object); // 0x59 Func
	var_26_bool = var_15_object == 0; // 0x5b NullEq
	if(var_26_bool == 0) goto Label_95; // 0x5c JumpB
	var_11_bool = 0; // 0x5d MovB
	return 4; // 0x5e Return
	
Label_95:
	GetScene(var_16_object); // 0x5f ObjFunc
	var_27_bool = var_15_object != var_16_object; // 0x61 Neq
	if(var_27_bool == 0) goto Label_101; // 0x62 JumpB
	var_11_bool = 0; // 0x63 MovB
	return 4; // 0x64 Return
	
Label_101:
	var_11_bool = 1; // 0x65 MovB
	return 4; // 0x66 Return
}


func_135(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x87 PushV
	CreateIntVector(var_58_object); // 0x88 Func
	add(var_55_int); // 0x8a ObjFunc
	add(var_56_int); // 0x8c ObjFunc
	var_59_int = 3; // 0x8e PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0x8f Func
	return 2; // 0x91 Return
}


func_105(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0; // 0x69 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x6a PushV
	var_12_object = var_8_object; // 0x6b Mov
	func_69(var_11_bool, var_12_object); // 0x6c NEW_2
	var_28_bool = var_11_bool == 0; // 0x6e Not
	if(var_28_bool == 0) goto Label_114; // 0x6f JumpB
	var_7_bool = 0; // 0x70 MovB
	return 2; // 0x71 Return
	
Label_114:
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; // 0x72 PushV
	var_30_object = var_8_object; // 0x73 Mov
	var_31_string = "noaccess"; // 0x74 MovS
	func_52(var_29_bool, var_30_object, var_31_string); // 0x75 NEW_2
	var_38_bool = var_29_bool == 0; // 0x77 Not
	if(var_38_bool == 0) goto Label_123; // 0x78 JumpB
	var_7_bool = 1; // 0x79 MovB
	return 2; // 0x7a Return
	
Label_123:
	var_39_string = "noaccess"; // 0x7b PushS
	GetProperty(var_39_string, var_10_int); // 0x7c ObjFunc
	var_40_int = 0; // 0x7e PushI
	var_7_bool = var_10_int == var_40_int; // 0x7f Eq2
	return 2; // 0x80 Return
}


func_177(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0xb1 PushV
	GetDiaryRoot(var_79_object); // 0xb2 Func
	var_80_bool = var_79_object == 0; // 0xb4 Not
	if(var_80_bool == 0) goto Label_187; // 0xb5 JumpB
	var_81_string = "Can't retrieve diary root"; // 0xb6 PushS
	Trace(var_81_string); // 0xb7 Func
	var_77_object = 0; // 0xb9 MovB
	return 2; // 0xba Return
	
Label_187:
	var_77_object = var_79_object; // 0xbb Mov
	return 2; // 0xbc Return
}


func_147(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0x93 PushV
	GetItemID(var_50_int); // 0x94 ObjFunc
	var_53_string = "Category"; // 0x96 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0x97 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0x99 ObjFunc
	var_54_bool = var_52_bool; // 0x9b Push
	if(var_54_bool == 0) goto Label_162; // 0x9c JumpB
	var_55_int = 0; var_56_int = 0; // 0x9d PushV
	var_55_int = var_50_int; // 0x9e Mov
	var_56_int = var_46_int; // 0x9f Mov
	func_135(var_55_int, var_56_int); // 0xa0 NEW_2
	
Label_162:
	var_43_bool = var_52_bool; // 0xa2 Mov
	return 6; // 0xa3 Return
}


func_52(var_29_bool, var_30_object, var_31_string)
{
	var_32_bool = 0; var_33_bool = 0; // 0x34 PushV
	var_34_string = "HasProperty"; // 0x35 PushS
	var_35_int = 2; // 0x36 PushI
	var_36_bool = IsFuncExist(var_30_object, var_34_string, var_35_int); // 0x37 FuncExist
	var_37_bool = var_36_bool == 0; // 0x38 Not
	if(var_37_bool == 0) goto Label_60; // 0x39 JumpB
	var_29_bool = 0; // 0x3a MovB
	return 2; // 0x3b Return
	
Label_60:
	HasProperty(var_31_string, var_33_bool); // 0x3c ObjFunc
	var_29_bool = var_33_bool; // 0x3e Mov
	return 2; // 0x3f Return
}


func_190(var_68_bool, var_69_object, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; // 0xbe PushV
	var_77_object = Obj(); // 0xbf PushV
	func_177(var_77_object); // 0xc0 NEW_2
	var_74_object = var_77_object; // 0xc1 Mov
	Find(var_70_int, var_75_object); // 0xc3 ObjFunc
	var_82_bool = var_75_object == 0; // 0xc5 Not
	if(var_82_bool == 0) goto Label_205; // 0xc6 JumpB
	var_83_string = "Can't find diary parent with id: "; // 0xc7 PushS
	var_84_int = var_83_string + var_70_int; // 0xc8 Add
	Trace(var_84_int); // 0xc9 Func
	var_68_bool = 0; // 0xcb MovB
	return 6; // 0xcc Return
	
Label_205:
	AddChild(var_69_object); // 0xcd ObjFunc
	var_85_int = 7; // 0xcf PushI
	SendWorldWndMessage(var_85_int); // 0xd0 Func
	GetCategory(var_76_int); // 0xd2 ObjFunc
	SetDiarySection(var_76_int); // 0xd4 Func
	var_68_bool = 0; // 0xd6 MovB
	return 6; // 0xd7 Return
}


