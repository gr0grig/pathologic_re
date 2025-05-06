task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0xd PushV
	var_4_string = "cleanup"; // 0xe PushS
	var_5_bool = var_1_string == var_4_string; // 0xf Eq
	if(var_5_bool == 0) goto Label_27; // 0x10 JumpB
	var_0_bool = 1; // 0x11 TMovB
	IsLoaded(var_3_bool); // 0x12 Func
	var_6_bool = var_3_bool == 0; // 0x14 Not
	if(var_6_bool == 0) goto Label_27; // 0x15 JumpB
	var_7_object = Obj(); // 0x16 PushV
	func_155(var_7_object); // 0x17 NEW_2
	RemoveActor(var_7_object); // 0x19 Func
	
Label_27:
	return 2; // 0x1b Return
}


task_0_event_6(var_0_bool)
{
	func_5(); // 0x1d NEW_2
	return 0; // 0x1f Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x2c PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x2d PushV
	var_7_object = var_1_object; // 0x2e Mov
	func_131(var_6_bool, var_7_object); // 0x2f NEW_2
	var_40_bool = var_6_bool == 0; // 0x31 Not
	if(var_40_bool == 0) goto Label_52; // 0x32 JumpB
	return 4; // 0x33 Return
	
Label_52:
	var_41_int = 0; // 0x34 PushI
	GetItem(var_4_object, var_41_int); // 0x35 Func
	var_42_int = 0; // 0x37 PushI
	GetItemAmount(var_5_int, var_42_int); // 0x38 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x3a PushV
	var_44_object = var_1_object; // 0x3b Mov
	var_45_object = var_4_object; // 0x3c Mov
	var_46_int = var_5_int; // 0x3d Mov
	func_173(var_44_object, var_45_object, var_46_int); // 0x3e NEW_2
	if(var_43_bool == 0) goto Label_69; // 0x40 JumpB
	var_60_object = Obj(); // 0x41 PushV
	var_60_object = var_1_object; // 0x42 Mov
	func_71(); // 0x43 NEW_2
	
Label_69:
	return 4; // 0x45 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	func_32(); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_32()
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x20 PushV
	var_3_string = "object"; // 0x21 PushS
	FindGeometry(var_3_string, var_2_object); // 0x22 Func
	var_4_bool = 1; // 0x24 PushB
	Enable(var_4_bool); // 0x25 ObjFunc
	
Label_39:
	Hold(); // 0x27 Func
	goto Label_39; // 0x29 Jump
}


func_161(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xa1 PushV
	CreateIntVector(var_58_object); // 0xa2 Func
	add(var_55_int); // 0xa4 ObjFunc
	add(var_56_int); // 0xa6 ObjFunc
	var_59_int = 3; // 0xa8 PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0xa9 Func
	return 2; // 0xab Return
}


func_131(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x83 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x84 PushV
	var_11_object = var_7_object; // 0x85 Mov
	func_95(var_10_bool, var_11_object); // 0x86 NEW_2
	var_27_bool = var_10_bool == 0; // 0x88 Not
	if(var_27_bool == 0) goto Label_140; // 0x89 JumpB
	var_6_bool = 0; // 0x8a MovB
	return 2; // 0x8b Return
	
Label_140:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x8c PushV
	var_29_object = var_7_object; // 0x8d Mov
	var_30_string = "noaccess"; // 0x8e MovS
	func_78(var_28_bool, var_29_object, var_30_string); // 0x8f NEW_2
	var_37_bool = var_28_bool == 0; // 0x91 Not
	if(var_37_bool == 0) goto Label_149; // 0x92 JumpB
	var_6_bool = 1; // 0x93 MovB
	return 2; // 0x94 Return
	
Label_149:
	var_38_string = "noaccess"; // 0x95 PushS
	GetProperty(var_38_string, var_9_int); // 0x96 ObjFunc
	var_39_int = 0; // 0x98 PushI
	var_6_bool = var_9_int == var_39_int; // 0x99 Eq2
	return 2; // 0x9a Return
}


func_5()
{
	var_1_bool = var_0_bool; // 0x5 PushT
	if(var_1_bool == 0) goto Label_12; // 0x6 JumpB
	var_2_object = Obj(); // 0x7 PushV
	func_155(var_2_object); // 0x8 NEW_2
	RemoveActor(var_2_object); // 0xa Func
	
Label_12:
	return 0; // 0xc Return
}


func_71()
{
	var_61_object = Obj(); // 0x48 PushV
	func_155(var_61_object); // 0x49 NEW_2
	RemoveActor(var_61_object); // 0x4b Func
	return 0; // 0x4d Return
}


func_173(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xad PushV
	GetItemID(var_50_int); // 0xae ObjFunc
	var_53_string = "Category"; // 0xb0 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xb1 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xb3 ObjFunc
	var_54_bool = var_52_bool; // 0xb5 Push
	if(var_54_bool == 0) goto Label_188; // 0xb6 JumpB
	var_55_int = 0; var_56_int = 0; // 0xb7 PushV
	var_55_int = var_50_int; // 0xb8 Mov
	var_56_int = var_46_int; // 0xb9 Mov
	func_161(var_55_int, var_56_int); // 0xba NEW_2
	
Label_188:
	var_43_bool = var_52_bool; // 0xbc Mov
	return 6; // 0xbd Return
}


func_78(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x4e PushV
	var_33_string = "HasProperty"; // 0x4f PushS
	var_34_int = 2; // 0x50 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x51 FuncExist
	var_36_bool = var_35_bool == 0; // 0x52 Not
	if(var_36_bool == 0) goto Label_86; // 0x53 JumpB
	var_28_bool = 0; // 0x54 MovB
	return 2; // 0x55 Return
	
Label_86:
	HasProperty(var_30_string, var_32_bool); // 0x56 ObjFunc
	var_28_bool = var_32_bool; // 0x58 Mov
	return 2; // 0x59 Return
}


func_90(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5a PushV
	IsDead(var_24_bool); // 0x5b ObjFunc
	var_21_bool = var_24_bool; // 0x5d Mov
	return 2; // 0x5e Return
}


func_155(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x9b PushV
	self(var_63_object); // 0x9c Func
	var_61_object = var_63_object; // 0x9e Mov
	return 2; // 0x9f Return
}


func_95(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x5f PushV
	var_16_bool = var_11_object == 0; // 0x60 NullEq
	if(var_16_bool == 0) goto Label_100; // 0x61 JumpB
	var_10_bool = 0; // 0x62 MovB
	return 4; // 0x63 Return
	
Label_100:
	var_17_bool = 0; // 0x64 PushV
	var_17_bool = 0; // 0x65 MovB
	var_18_string = "IsDead"; // 0x66 PushS
	var_19_int = 1; // 0x67 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x68 FuncExist
	if(var_20_bool == 0) goto Label_112; // 0x69 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x6a PushV
	var_22_object = var_11_object; // 0x6b Mov
	func_90(var_22_object); // 0x6c NEW_2
	if(var_21_bool == 0) goto Label_112; // 0x6e JumpB
	var_17_bool = 1; // 0x6f MovB
	
Label_112:
	if(var_17_bool == 0) goto Label_115; // 0x70 JumpB
	var_10_bool = 0; // 0x71 MovB
	return 4; // 0x72 Return
	
Label_115:
	GetScene(var_14_object); // 0x73 Func
	var_25_bool = var_14_object == 0; // 0x75 NullEq
	if(var_25_bool == 0) goto Label_121; // 0x76 JumpB
	var_10_bool = 0; // 0x77 MovB
	return 4; // 0x78 Return
	
Label_121:
	GetScene(var_15_object); // 0x79 ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x7b Neq
	if(var_26_bool == 0) goto Label_127; // 0x7c JumpB
	var_10_bool = 0; // 0x7d MovB
	return 4; // 0x7e Return
	
Label_127:
	var_10_bool = 1; // 0x7f MovB
	return 4; // 0x80 Return
}


