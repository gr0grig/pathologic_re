main()
{
	var_0_int = 0; var_1_object = Obj(); var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_int = 0; var_6_object = Obj(); var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x0 PushV
	var_10_int = GlobalVars[0]; // 0x1 PushGE
	var_11_int = GlobalVars[1]; // 0x2 PushGE
	var_12_int = GlobalVars[2]; // 0x3 PushGE
	GetItemPosByID(var_5_int, var_10_int, var_11_int, var_12_int); // 0x4 Func
	var_13_int = -1; // 0x6 PushI
	var_14_bool = var_5_int == var_13_int; // 0x7 Eq
	if(var_14_bool == 0) goto Label_19; // 0x8 JumpB
	var_15_string = "error: "; // 0x9 PushS
	var_16_int = GlobalVars[0]; // 0xa PushGE
	var_17_int = var_15_string + var_16_int; // 0xb Add
	var_18_string = " "; // 0xc PushS
	var_19_int = var_17_int + var_18_string; // 0xd Add
	var_20_int = GlobalVars[1]; // 0xe PushGE
	var_21_int = var_19_int + var_20_int; // 0xf Add
	Trace(var_21_int); // 0x10 Func
	return 10; // 0x12 Return
	
Label_19:
	var_22_int = GlobalVars[2]; // 0x13 PushGE
	GetItem(var_6_object, var_5_int, var_22_int); // 0x14 Func
	var_23_string = "hl_inc"; // 0x16 PushS
	GetProperty(var_7_float, var_23_string); // 0x17 ObjFunc
	var_24_string = "im_inc"; // 0x19 PushS
	GetProperty(var_8_float, var_24_string); // 0x1a ObjFunc
	var_25_string = "GC: "; // 0x1c PushS
	var_26_int = var_25_string + var_7_float; // 0x1d Add
	var_27_string = " "; // 0x1e PushS
	var_28_int = var_26_int + var_27_string; // 0x1f Add
	var_29_int = var_28_int + var_8_float; // 0x20 Add
	var_30_string = " "; // 0x21 PushS
	var_31_int = var_29_int + var_30_string; // 0x22 Add
	var_32_int = var_31_int + var_9_float; // 0x23 Add
	Trace(var_32_int); // 0x24 Func
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0; // 0x26 PushV
	var_34_string = "health"; // 0x27 MovS
	var_35_float = var_7_float; // 0x28 Mov
	var_36_float = 0; // 0x29 MovI
	var_37_float = 1; // 0x2a MovI
	func_66(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float); // 0x2b NEW_2
	var_49_float = 0; // 0x2d PushV
	var_49_float = var_7_float; // 0x2e Mov
	func_106(var_49_float); // 0x2f NEW_2
	var_53_bool = 0; var_54_string = ""; var_55_float = 0; var_56_float = 0; var_57_float = 0; // 0x31 PushV
	var_54_string = "immunity"; // 0x32 MovS
	var_55_float = var_8_float; // 0x33 Mov
	var_56_float = 0; // 0x34 MovI
	var_57_float = 1; // 0x35 MovI
	func_66(var_53_bool, var_54_string, var_55_float, var_56_float, var_57_float); // 0x36 NEW_2
	var_58_float = 0; // 0x38 PushV
	var_58_float = var_8_float; // 0x39 Mov
	func_96(var_58_float); // 0x3a NEW_2
	var_62_int = 1; // 0x3c PushI
	var_63_int = GlobalVars[2]; // 0x3d PushGE
	RemoveItem(var_5_int, var_62_int, var_63_int); // 0x3e Func
	return 10; // 0x40 Return
}


func_96(var_58_float)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x60 PushV
	CreateFloatVector(var_60_object); // 0x61 Func
	add(var_58_float); // 0x63 ObjFunc
	var_61_int = 13; // 0x65 PushI
	SendWorldWndMessage(var_61_int, var_60_object); // 0x66 Func
	return 2; // 0x68 Return
}


func_66(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_38_bool = 0; var_39_float = 0; var_40_bool = 0; var_41_float = 0; // 0x42 PushV
	HasProperty(var_34_string, var_40_bool); // 0x43 Func
	var_42_bool = var_40_bool == 0; // 0x45 Not
	if(var_42_bool == 0) goto Label_73; // 0x46 JumpB
	var_33_bool = 0; // 0x47 MovB
	return 4; // 0x48 Return
	
Label_73:
	GetProperty(var_34_string, var_41_float); // 0x49 Func
	var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x4b PushV
	var_44_float = var_41_float + var_35_float; // 0x4c Add2
	var_45_float = var_36_float; // 0x4d Mov
	var_46_float = var_37_float; // 0x4e Mov
	func_85(var_43_float, var_44_float, var_45_float, var_46_float); // 0x4f NEW_2
	SetProperty(var_34_string, var_43_float); // 0x51 Func
	var_33_bool = 1; // 0x53 MovB
	return 4; // 0x54 Return
}


func_85(var_43_float, var_44_float, var_45_float, var_46_float)
{
	var_47_bool = var_44_float < var_45_float; // 0x56 LT
	if(var_47_bool == 0) goto Label_90; // 0x57 JumpB
	var_43_float = var_45_float; // 0x58 Mov
	return 0; // 0x59 Return
	
Label_90:
	var_48_bool = var_44_float > var_46_float; // 0x5a GT
	if(var_48_bool == 0) goto Label_94; // 0x5b JumpB
	var_43_float = var_46_float; // 0x5c Mov
	return 0; // 0x5d Return
	
Label_94:
	var_43_float = var_44_float; // 0x5e Mov
	return 0; // 0x5f Return
}


func_106(var_49_float)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x6a PushV
	CreateFloatVector(var_51_object); // 0x6b Func
	add(var_49_float); // 0x6d ObjFunc
	var_52_int = 15; // 0x6f PushI
	SendWorldWndMessage(var_52_int, var_51_object); // 0x70 Func
	return 2; // 0x72 Return
}


