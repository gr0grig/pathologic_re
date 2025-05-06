task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow(); // 0x42 Func
	return 0; // 0x44 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x83 PushV
	var_8_int = 0; // 0x84 MovI
	
Label_133:
	var_9_int = 12; // 0x85 PushI
	var_10_bool = var_8_int < var_9_int; // 0x86 LT
	if(var_10_bool == 0) goto Label_150; // 0x87 JumpB
	var_11_string = ""; var_12_int = 0; // 0x88 PushV
	var_12_int = var_8_int; // 0x89 Mov
	func_151(var_11_string, var_12_int); // 0x8a Call
	var_23_bool = var_5_string == var_11_string; // 0x8c Eq
	if(var_23_bool == 0) goto Label_147; // 0x8d JumpB
	var_0_int = var_8_int; // 0x8e TMov
	func_69(var_8_int); // 0x90 Call
	goto Label_150; // 0x92 Jump
	
Label_150:
	return 2; // 0x96 Return
	
Label_147:
	var_63_int = 1; // 0x93 PushI
	var_8_int = var_8_int + var_63_int; // 0x94 Add2
	goto Label_133; // 0x95 Jump
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	var_4_string = "default"; // 0x0 PushS
	SetCursor(var_4_string); // 0x1 Func
	ShowCursor(); // 0x3 Func
	CaptureKeyboard(); // 0x5 Func
	var_5_bool = 0; // 0x7 PushB
	SetOwnerDraw(var_5_bool); // 0x8 Func
	func_19(var_2_object, var_3_object); // 0xb Call
	func_69(var_3_object); // 0xe Call
	ProcessEvents(); // 0x10 Func
	return 0; // 0x12 Return
}


func_69(var_0_int)
{
	var_31_int = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0; // 0x45 PushV
	size(var_35_int); // 0x46 TObjFunc
	var_36_int = 0; // 0x48 MovI
	
Label_73:
	var_39_int = 12; // 0x49 PushI
	var_40_bool = var_36_int < var_39_int; // 0x4a LT
	if(var_40_bool == 0) goto Label_130; // 0x4b JumpB
	var_41_bool = var_36_int < var_35_int; // 0x4c LT
	if(var_41_bool == 0) goto Label_120; // 0x4d JumpB
	get(var_37_object, var_36_int); // 0x4e TObjFunc
	get(var_38_int, var_36_int); // 0x50 TObjFunc
	var_42_bool = var_0_int == var_36_int; // 0x52 Eq
	if(var_42_bool == 0) goto Label_104; // 0x53 JumpB
	var_43_int = 16384; // 0x54 PushI
	var_44_string = ""; var_45_int = 0; // 0x55 PushV
	var_45_int = var_36_int; // 0x56 Mov
	func_151(var_44_string, var_45_int); // 0x57 Call
	SendMessage(var_43_int, var_44_string, var_37_object); // 0x59 Func
	var_56_string = "video"; // 0x5b PushS
	SendMessage(var_38_int, var_56_string); // 0x5c Func
	var_57_string = "microscope_"; // 0x5e PushS
	var_58_string = ""; var_59_object = Obj(); // 0x5f PushV
	var_59_object = var_37_object; // 0x60 Mov
	func_172(var_58_string, var_59_object); // 0x61 Call
	var_66_int = var_57_string + var_58_string; // 0x63 Add
	var_67_int = 1; // 0x64 PushI
	SetVariable(var_66_int, var_67_int); // 0x65 Func
	goto Label_111; // 0x67 Jump
	
Label_111:
	var_68_int = 65537; // 0x6f PushI
	var_69_string = ""; var_70_int = 0; // 0x70 PushV
	var_70_int = var_36_int; // 0x71 Mov
	func_151(var_69_string, var_70_int); // 0x72 Call
	SendMessage(var_68_int, var_69_string); // 0x74 Func
	var_37_object = 0; // 0x76 SetNull
	goto Label_127; // 0x77 Jump
	
Label_127:
	var_71_int = 1; // 0x7f PushI
	var_36_int = var_36_int + var_71_int; // 0x80 Add2
	goto Label_73; // 0x81 Jump
	
Label_104:
	var_72_int = 0; // 0x68 PushI
	var_73_string = ""; var_74_int = 0; // 0x69 PushV
	var_74_int = var_36_int; // 0x6a Mov
	func_151(var_73_string, var_74_int); // 0x6b Call
	SendMessage(var_72_int, var_73_string, var_37_object); // 0x6d Func
	
Label_120:
	var_75_int = 32768; // 0x78 PushI
	var_76_string = ""; var_77_int = 0; // 0x79 PushV
	var_77_int = var_36_int; // 0x7a Mov
	func_151(var_76_string, var_77_int); // 0x7b Call
	SendMessage(var_75_int, var_76_string); // 0x7d Func
	
Label_130:
	return 8; // 0x82 Return
}


func_167(var_23_int)
{
	var_25_int = 0; var_26_int = 0; // 0xa7 PushV
	GetItemID(var_26_int); // 0xa8 ObjFunc
	var_23_int = var_26_int; // 0xaa Mov
	return 2; // 0xab Return
}


func_172(var_58_string, var_59_object)
{
	var_60_int = 0; var_61_string = ""; var_62_int = 0; var_63_string = ""; // 0xac PushV
	var_64_int = 0; var_65_object = Obj(); // 0xad PushV
	var_65_object = var_59_object; // 0xae Mov
	func_167(var_65_object); // 0xaf Call
	var_62_int = var_64_int; // 0xb0 Mov
	GetInvItemName(var_63_string, var_62_int); // 0xb2 Func
	var_58_string = var_63_string; // 0xb4 Mov
	return 4; // 0xb5 Return
}


func_19(var_0_int, var_3_object)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_int = 0; // 0x13 PushV
	var_0_int = -1; // 0x14 TMovI
	CreateObjectVector(var_17_int); // 0x15 Func
	CreateIntVector(var_16_bool); // 0x17 Func
	var_18_string = "player"; // 0x19 PushS
	FindActor(var_16_bool, var_18_string); // 0x1a Func
	var_19_bool = var_3_object == 0; // 0x1c Not
	if(var_19_bool == 0) goto Label_33; // 0x1d JumpB
	DestroyWindow(); // 0x1e Func
	return 12; // 0x20 Return
	
Label_33:
	var_20_int = 4; // 0x21 PushI
	GetItemCount(var_12_int, var_20_int); // 0x22 TObjFunc
	var_13_int = 0; // 0x24 MovI
	
Label_37:
	var_21_bool = var_13_int < var_12_int; // 0x25 LT
	if(var_21_bool == 0) goto Label_64; // 0x26 JumpB
	var_22_int = 4; // 0x27 PushI
	GetItem(var_14_object, var_13_int, var_22_int); // 0x28 TObjFunc
	var_23_int = 0; var_24_object = Obj(); // 0x2a PushV
	var_24_object = var_14_object; // 0x2b Mov
	func_167(var_24_object); // 0x2c Call
	var_15_int = var_23_int; // 0x2d Mov
	var_27_string = "Microscope"; // 0x2f PushS
	HasInvItemProperty(var_16_bool, var_15_int, var_27_string); // 0x30 Func
	var_28_bool = var_16_bool == 0; // 0x32 Not
	if(var_28_bool == 0) goto Label_53; // 0x33 JumpB
	goto Label_61; // 0x34 Jump
	
Label_61:
	var_29_int = 1; // 0x3d PushI
	var_13_int = var_13_int + var_29_int; // 0x3e Add2
	goto Label_37; // 0x3f Jump
	
Label_53:
	var_30_string = "Microscope"; // 0x35 PushS
	GetInvItemProperty(var_17_int, var_15_int, var_30_string); // 0x36 Func
	add(var_14_object); // 0x38 TObjFunc
	add(var_17_int); // 0x3a TObjFunc
	var_14_object = 0; // 0x3c SetNull
	
Label_64:
	return 12; // 0x40 Return
}


func_151(var_44_string, var_45_int)
{
	var_46_int = 1; // 0x98 PushI
	var_47_int = var_45_int + var_46_int; // 0x99 Add
	var_48_int = 10; // 0x9a PushI
	var_49_bool = var_47_int < var_48_int; // 0x9b LT
	if(var_49_bool == 0) goto Label_162; // 0x9c JumpB
	var_50_string = "slot0"; // 0x9d PushS
	var_51_int = 1; // 0x9e PushI
	var_52_int = var_45_int + var_51_int; // 0x9f Add
	var_44_string = var_50_string + var_52_int; // 0xa0 Add2
	return 0; // 0xa1 Return
	
Label_162:
	var_53_string = "slot"; // 0xa2 PushS
	var_54_int = 1; // 0xa3 PushI
	var_55_int = var_45_int + var_54_int; // 0xa4 Add
	var_44_string = var_53_string + var_55_int; // 0xa5 Add2
	return 0; // 0xa6 Return
}


