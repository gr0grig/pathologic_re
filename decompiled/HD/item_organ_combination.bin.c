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
	var_23_string = "DiseaseRate"; // 0x16 PushS
	GetProperty(var_7_float, var_23_string); // 0x17 ObjFunc
	var_24_string = "HealthIncrease"; // 0x19 PushS
	GetProperty(var_8_float, var_24_string); // 0x1a ObjFunc
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0x1c PushV
	var_26_string = "health"; // 0x1d MovS
	var_27_float = var_8_float; // 0x1e Mov
	var_28_float = 0; // 0x1f MovI
	var_29_float = 1; // 0x20 MovI
	func_64(var_25_bool, var_26_string, var_27_float, var_28_float, var_29_float); // 0x21 NEW_2
	var_41_float = 0; // 0x23 PushV
	var_41_float = var_8_float; // 0x24 Mov
	func_104(var_41_float); // 0x25 NEW_2
	var_49_string = "disease"; // 0x27 PushS
	GetProperty(var_49_string, var_9_float); // 0x28 Func
	var_50_string = "disease"; // 0x2a PushS
	var_51_float = var_9_float * var_7_float; // 0x2b Mult
	SetProperty(var_50_string, var_51_float); // 0x2c Func
	var_52_float = 0; // 0x2e PushV
	var_53_float = var_9_float * var_7_float; // 0x2f Mult
	var_52_float = var_9_float - var_53_float; // 0x30 Sub2
	func_94(var_52_float); // 0x31 NEW_2
	var_57_string = "GC: "; // 0x33 PushS
	var_58_int = var_57_string + var_8_float; // 0x34 Add
	var_59_string = " "; // 0x35 PushS
	var_60_int = var_58_int + var_59_string; // 0x36 Add
	var_61_int = var_60_int + var_7_float; // 0x37 Add
	Trace(var_61_int); // 0x38 Func
	var_62_int = 1; // 0x3a PushI
	var_63_int = GlobalVars[2]; // 0x3b PushGE
	RemoveItem(var_5_int, var_62_int, var_63_int); // 0x3c Func
	return 10; // 0x3e Return
}


func_64(var_25_bool, var_26_string, var_27_float, var_28_float, var_29_float)
{
	var_30_bool = 0; var_31_float = 0; var_32_bool = 0; var_33_float = 0; // 0x40 PushV
	HasProperty(var_26_string, var_32_bool); // 0x41 Func
	var_34_bool = var_32_bool == 0; // 0x43 Not
	if(var_34_bool == 0) goto Label_71; // 0x44 JumpB
	var_25_bool = 0; // 0x45 MovB
	return 4; // 0x46 Return
	
Label_71:
	GetProperty(var_26_string, var_33_float); // 0x47 Func
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x49 PushV
	var_36_float = var_33_float + var_27_float; // 0x4a Add2
	var_37_float = var_28_float; // 0x4b Mov
	var_38_float = var_29_float; // 0x4c Mov
	func_83(var_35_float, var_36_float, var_37_float, var_38_float); // 0x4d NEW_2
	SetProperty(var_26_string, var_35_float); // 0x4f Func
	var_25_bool = 1; // 0x51 MovB
	return 4; // 0x52 Return
}


func_83(var_35_float, var_36_float, var_37_float, var_38_float)
{
	var_39_bool = var_36_float < var_37_float; // 0x54 LT
	if(var_39_bool == 0) goto Label_88; // 0x55 JumpB
	var_35_float = var_37_float; // 0x56 Mov
	return 0; // 0x57 Return
	
Label_88:
	var_40_bool = var_36_float > var_38_float; // 0x58 GT
	if(var_40_bool == 0) goto Label_92; // 0x59 JumpB
	var_35_float = var_38_float; // 0x5a Mov
	return 0; // 0x5b Return
	
Label_92:
	var_35_float = var_36_float; // 0x5c Mov
	return 0; // 0x5d Return
}


func_104(var_41_float)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x68 PushV
	CreateFloatVector(var_43_object); // 0x69 Func
	add(var_41_float); // 0x6b ObjFunc
	var_44_int = 0; // 0x6d PushI
	var_45_bool = var_41_float < var_44_int; // 0x6e LT
	if(var_45_bool == 0) goto Label_116; // 0x6f JumpB
	var_46_float = 0.7; // 0x70 PushF
	var_47_int = 500; // 0x71 PushI
	RumblePlay(var_46_float, var_47_int); // 0x72 Func
	
Label_116:
	var_48_int = 15; // 0x74 PushI
	SendWorldWndMessage(var_48_int, var_43_object); // 0x75 Func
	return 2; // 0x77 Return
}


func_94(var_52_float)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x5e PushV
	CreateFloatVector(var_55_object); // 0x5f Func
	add(var_52_float); // 0x61 ObjFunc
	var_56_int = 14; // 0x63 PushI
	SendWorldWndMessage(var_56_int, var_55_object); // 0x64 Func
	return 2; // 0x66 Return
}


