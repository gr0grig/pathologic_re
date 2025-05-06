task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_object = Obj(); var_3_object = Obj(); var_4_string = ""; var_5_object = Obj(); var_6_object = Obj(); // 0xc PushV
	var_7_bool = 0; var_8_object = Obj(); // 0xd PushV
	var_8_object = var_0_object; // 0xe Mov
	func_102(var_7_bool, var_8_object); // 0xf NEW_2
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
	func_144(var_44_object, var_45_object, var_46_int); // 0x1f NEW_2
	if(var_43_bool == 0) goto Label_47; // 0x21 JumpB
	GetScene(var_6_object); // 0x22 Func
	var_60_object = Obj(); // 0x24 PushV
	func_126(var_60_object); // 0x25 NEW_2
	RemoveStationaryActor(var_60_object); // 0x27 ObjFunc
	var_63_object = Obj(); // 0x29 PushV
	func_126(var_63_object); // 0x2a NEW_2
	RemoveActor(var_63_object); // 0x2c Func
	var_6_object = 0; // 0x2e SetNull
	
Label_47:
	return 6; // 0x2f Return
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


func_66(var_11_bool, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x42 PushV
	var_17_bool = var_12_object == 0; // 0x43 NullEq
	if(var_17_bool == 0) goto Label_71; // 0x44 JumpB
	var_11_bool = 0; // 0x45 MovB
	return 4; // 0x46 Return
	
Label_71:
	var_18_bool = 0; // 0x47 PushV
	var_18_bool = 0; // 0x48 MovB
	var_19_string = "IsDead"; // 0x49 PushS
	var_20_int = 1; // 0x4a PushI
	var_21_bool = IsFuncExist(var_12_object, var_19_string, var_20_int); // 0x4b FuncExist
	if(var_21_bool == 0) goto Label_83; // 0x4c JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x4d PushV
	var_23_object = var_12_object; // 0x4e Mov
	func_61(var_23_object); // 0x4f NEW_2
	if(var_22_bool == 0) goto Label_83; // 0x51 JumpB
	var_18_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_18_bool == 0) goto Label_86; // 0x53 JumpB
	var_11_bool = 0; // 0x54 MovB
	return 4; // 0x55 Return
	
Label_86:
	GetScene(var_15_object); // 0x56 Func
	var_26_bool = var_15_object == 0; // 0x58 NullEq
	if(var_26_bool == 0) goto Label_92; // 0x59 JumpB
	var_11_bool = 0; // 0x5a MovB
	return 4; // 0x5b Return
	
Label_92:
	GetScene(var_16_object); // 0x5c ObjFunc
	var_27_bool = var_15_object != var_16_object; // 0x5e Neq
	if(var_27_bool == 0) goto Label_98; // 0x5f JumpB
	var_11_bool = 0; // 0x60 MovB
	return 4; // 0x61 Return
	
Label_98:
	var_11_bool = 1; // 0x62 MovB
	return 4; // 0x63 Return
}


func_132(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x84 PushV
	CreateIntVector(var_58_object); // 0x85 Func
	add(var_55_int); // 0x87 ObjFunc
	add(var_56_int); // 0x89 ObjFunc
	var_59_int = 3; // 0x8b PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0x8c Func
	return 2; // 0x8e Return
}


func_102(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0; // 0x66 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x67 PushV
	var_12_object = var_8_object; // 0x68 Mov
	func_66(var_11_bool, var_12_object); // 0x69 NEW_2
	var_28_bool = var_11_bool == 0; // 0x6b Not
	if(var_28_bool == 0) goto Label_111; // 0x6c JumpB
	var_7_bool = 0; // 0x6d MovB
	return 2; // 0x6e Return
	
Label_111:
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; // 0x6f PushV
	var_30_object = var_8_object; // 0x70 Mov
	var_31_string = "noaccess"; // 0x71 MovS
	func_49(var_29_bool, var_30_object, var_31_string); // 0x72 NEW_2
	var_38_bool = var_29_bool == 0; // 0x74 Not
	if(var_38_bool == 0) goto Label_120; // 0x75 JumpB
	var_7_bool = 1; // 0x76 MovB
	return 2; // 0x77 Return
	
Label_120:
	var_39_string = "noaccess"; // 0x78 PushS
	GetProperty(var_39_string, var_10_int); // 0x79 ObjFunc
	var_40_int = 0; // 0x7b PushI
	var_7_bool = var_10_int == var_40_int; // 0x7c Eq2
	return 2; // 0x7d Return
}


func_144(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0x90 PushV
	GetItemID(var_50_int); // 0x91 ObjFunc
	var_53_string = "Category"; // 0x93 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0x94 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0x96 ObjFunc
	var_54_bool = var_52_bool; // 0x98 Push
	if(var_54_bool == 0) goto Label_159; // 0x99 JumpB
	var_55_int = 0; var_56_int = 0; // 0x9a PushV
	var_55_int = var_50_int; // 0x9b Mov
	var_56_int = var_46_int; // 0x9c Mov
	func_132(var_55_int, var_56_int); // 0x9d NEW_2
	
Label_159:
	var_43_bool = var_52_bool; // 0x9f Mov
	return 6; // 0xa0 Return
}


func_49(var_29_bool, var_30_object, var_31_string)
{
	var_32_bool = 0; var_33_bool = 0; // 0x31 PushV
	var_34_string = "HasProperty"; // 0x32 PushS
	var_35_int = 2; // 0x33 PushI
	var_36_bool = IsFuncExist(var_30_object, var_34_string, var_35_int); // 0x34 FuncExist
	var_37_bool = var_36_bool == 0; // 0x35 Not
	if(var_37_bool == 0) goto Label_57; // 0x36 JumpB
	var_29_bool = 0; // 0x37 MovB
	return 2; // 0x38 Return
	
Label_57:
	HasProperty(var_31_string, var_33_bool); // 0x39 ObjFunc
	var_29_bool = var_33_bool; // 0x3b Mov
	return 2; // 0x3c Return
}


func_61(var_22_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x3d PushV
	IsDead(var_25_bool); // 0x3e ObjFunc
	var_22_bool = var_25_bool; // 0x40 Mov
	return 2; // 0x41 Return
}


func_126(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x7e PushV
	self(var_62_object); // 0x7f Func
	var_60_object = var_62_object; // 0x81 Mov
	return 2; // 0x82 Return
}


