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
	func_157(var_7_object); // 0x17 Call
	RemoveActor(var_7_object); // 0x19 Func
	
Label_27:
	return 2; // 0x1b Return
}


task_0_event_6(var_0_bool)
{
	func_5(); // 0x1d Call
	return 0; // 0x1f Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x33 PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x34 PushV
	var_7_object = var_1_object; // 0x35 Mov
	func_133(var_6_bool, var_7_object); // 0x36 Call
	var_40_bool = var_6_bool == 0; // 0x38 Not
	if(var_40_bool == 0) goto Label_59; // 0x39 JumpB
	return 4; // 0x3a Return
	
Label_59:
	var_41_int = 0; // 0x3b PushI
	GetItem(var_4_object, var_41_int); // 0x3c Func
	var_42_int = 0; // 0x3e PushI
	GetItemAmount(var_5_int, var_42_int); // 0x3f Func
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x41 PushV
	var_44_object = var_1_object; // 0x42 Mov
	var_45_object = var_4_object; // 0x43 Mov
	var_46_int = var_5_int; // 0x44 Mov
	func_163(var_44_object, var_45_object, var_46_int); // 0x45 Call
	if(var_43_bool == 0) goto Label_78; // 0x47 JumpB
	var_54_object = Obj(); // 0x48 PushV
	var_54_object = var_1_object; // 0x49 Mov
	func_32(); // 0x4a Call
	SetDeathStateAndRemove(); // 0x4c Func
	
Label_78:
	return 4; // 0x4e Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	func_39(); // 0x2 Call
	return 0; // 0x4 Return
}


func_32()
{
	var_55_bool = 0; var_56_string = ""; var_57_string = ""; // 0x21 PushV
	var_56_string = "quest_d10_01"; // 0x22 MovS
	var_57_string = "soldier_fight"; // 0x23 MovS
	func_173(var_55_bool, var_56_string, var_57_string); // 0x24 Call
	return 0; // 0x26 Return
}


func_97(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x61 PushV
	var_16_bool = var_11_object == 0; // 0x62 NullEq
	if(var_16_bool == 0) goto Label_102; // 0x63 JumpB
	var_10_bool = 0; // 0x64 MovB
	return 4; // 0x65 Return
	
Label_102:
	var_17_bool = 0; // 0x66 PushV
	var_17_bool = 0; // 0x67 MovB
	var_18_string = "IsDead"; // 0x68 PushS
	var_19_int = 1; // 0x69 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x6a FuncExist
	if(var_20_bool == 0) goto Label_114; // 0x6b JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x6c PushV
	var_22_object = var_11_object; // 0x6d Mov
	func_92(var_22_object); // 0x6e Call
	if(var_21_bool == 0) goto Label_114; // 0x70 JumpB
	var_17_bool = 1; // 0x71 MovB
	
Label_114:
	if(var_17_bool == 0) goto Label_117; // 0x72 JumpB
	var_10_bool = 0; // 0x73 MovB
	return 4; // 0x74 Return
	
Label_117:
	GetScene(var_14_object); // 0x75 Func
	var_25_bool = var_14_object == 0; // 0x77 NullEq
	if(var_25_bool == 0) goto Label_123; // 0x78 JumpB
	var_10_bool = 0; // 0x79 MovB
	return 4; // 0x7a Return
	
Label_123:
	GetScene(var_15_object); // 0x7b ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x7d Neq
	if(var_26_bool == 0) goto Label_129; // 0x7e JumpB
	var_10_bool = 0; // 0x7f MovB
	return 4; // 0x80 Return
	
Label_129:
	var_10_bool = 1; // 0x81 MovB
	return 4; // 0x82 Return
}


func_163(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0xa3 PushV
	GetItemID(var_50_int); // 0xa4 ObjFunc
	var_53_string = "Category"; // 0xa6 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xa7 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xa9 ObjFunc
	var_43_bool = var_52_bool; // 0xab Mov
	return 6; // 0xac Return
}


func_5()
{
	var_1_bool = var_0_bool; // 0x5 PushT
	if(var_1_bool == 0) goto Label_12; // 0x6 JumpB
	var_2_object = Obj(); // 0x7 PushV
	func_157(var_2_object); // 0x8 Call
	RemoveActor(var_2_object); // 0xa Func
	
Label_12:
	return 0; // 0xc Return
}


func_133(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x85 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x86 PushV
	var_11_object = var_7_object; // 0x87 Mov
	func_97(var_10_bool, var_11_object); // 0x88 Call
	var_27_bool = var_10_bool == 0; // 0x8a Not
	if(var_27_bool == 0) goto Label_142; // 0x8b JumpB
	var_6_bool = 0; // 0x8c MovB
	return 2; // 0x8d Return
	
Label_142:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x8e PushV
	var_29_object = var_7_object; // 0x8f Mov
	var_30_string = "noaccess"; // 0x90 MovS
	func_80(var_28_bool, var_29_object, var_30_string); // 0x91 Call
	var_37_bool = var_28_bool == 0; // 0x93 Not
	if(var_37_bool == 0) goto Label_151; // 0x94 JumpB
	var_6_bool = 1; // 0x95 MovB
	return 2; // 0x96 Return
	
Label_151:
	var_38_string = "noaccess"; // 0x97 PushS
	GetProperty(var_38_string, var_9_int); // 0x98 ObjFunc
	var_39_int = 0; // 0x9a PushI
	var_6_bool = var_9_int == var_39_int; // 0x9b Eq2
	return 2; // 0x9c Return
}


func_39()
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x27 PushV
	var_3_string = "object"; // 0x28 PushS
	FindGeometry(var_3_string, var_2_object); // 0x29 Func
	var_4_bool = 1; // 0x2b PushB
	Enable(var_4_bool); // 0x2c ObjFunc
	
Label_46:
	Hold(); // 0x2e Func
	goto Label_46; // 0x30 Jump
}


func_173(var_55_bool, var_56_string, var_57_string)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0xad PushV
	FindActor(var_59_object, var_56_string); // 0xae Func
	var_60_bool = var_59_object == 0; // 0xb0 NullEq
	if(var_60_bool == 0) goto Label_180; // 0xb1 JumpB
	var_55_bool = 0; // 0xb2 MovB
	return 2; // 0xb3 Return
	
Label_180:
	Trigger(var_59_object, var_57_string); // 0xb4 Func
	var_55_bool = 1; // 0xb6 MovB
	return 2; // 0xb7 Return
}


func_80(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x50 PushV
	var_33_string = "HasProperty"; // 0x51 PushS
	var_34_int = 2; // 0x52 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x53 FuncExist
	var_36_bool = var_35_bool == 0; // 0x54 Not
	if(var_36_bool == 0) goto Label_88; // 0x55 JumpB
	var_28_bool = 0; // 0x56 MovB
	return 2; // 0x57 Return
	
Label_88:
	HasProperty(var_30_string, var_32_bool); // 0x58 ObjFunc
	var_28_bool = var_32_bool; // 0x5a Mov
	return 2; // 0x5b Return
}


func_92(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5c PushV
	IsDead(var_24_bool); // 0x5d ObjFunc
	var_21_bool = var_24_bool; // 0x5f Mov
	return 2; // 0x60 Return
}


func_157(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x9d PushV
	self(var_4_object); // 0x9e Func
	var_2_object = var_4_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


