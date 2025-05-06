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
	func_152(var_7_object); // 0x17 Call
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
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x2c PushV
	var_6_bool = 0; var_7_object = Obj(); // 0x2d PushV
	var_7_object = var_1_object; // 0x2e Mov
	func_128(var_6_bool, var_7_object); // 0x2f Call
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
	func_158(var_44_object, var_45_object, var_46_int); // 0x3e Call
	if(var_43_bool == 0) goto Label_71; // 0x40 JumpB
	var_54_object = Obj(); // 0x41 PushV
	var_54_object = var_1_object; // 0x42 Mov
	func_73(); // 0x43 Call
	SetDeathStateAndRemove(); // 0x45 Func
	
Label_71:
	return 4; // 0x47 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	func_32(); // 0x2 Call
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


func_128(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x80 PushV
	var_10_bool = 0; var_11_object = Obj(); // 0x81 PushV
	var_11_object = var_7_object; // 0x82 Mov
	func_92(var_10_bool, var_11_object); // 0x83 Call
	var_27_bool = var_10_bool == 0; // 0x85 Not
	if(var_27_bool == 0) goto Label_137; // 0x86 JumpB
	var_6_bool = 0; // 0x87 MovB
	return 2; // 0x88 Return
	
Label_137:
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0x89 PushV
	var_29_object = var_7_object; // 0x8a Mov
	var_30_string = "noaccess"; // 0x8b MovS
	func_75(var_28_bool, var_29_object, var_30_string); // 0x8c Call
	var_37_bool = var_28_bool == 0; // 0x8e Not
	if(var_37_bool == 0) goto Label_146; // 0x8f JumpB
	var_6_bool = 1; // 0x90 MovB
	return 2; // 0x91 Return
	
Label_146:
	var_38_string = "noaccess"; // 0x92 PushS
	GetProperty(var_38_string, var_9_int); // 0x93 ObjFunc
	var_39_int = 0; // 0x95 PushI
	var_6_bool = var_9_int == var_39_int; // 0x96 Eq2
	return 2; // 0x97 Return
}


func_5()
{
	var_1_bool = var_0_bool; // 0x5 PushT
	if(var_1_bool == 0) goto Label_12; // 0x6 JumpB
	var_2_object = Obj(); // 0x7 PushV
	func_152(var_2_object); // 0x8 Call
	RemoveActor(var_2_object); // 0xa Func
	
Label_12:
	return 0; // 0xc Return
}


func_73()
{
	return 0; // 0x4a Return
}


func_75(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x4b PushV
	var_33_string = "HasProperty"; // 0x4c PushS
	var_34_int = 2; // 0x4d PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x4e FuncExist
	var_36_bool = var_35_bool == 0; // 0x4f Not
	if(var_36_bool == 0) goto Label_83; // 0x50 JumpB
	var_28_bool = 0; // 0x51 MovB
	return 2; // 0x52 Return
	
Label_83:
	HasProperty(var_30_string, var_32_bool); // 0x53 ObjFunc
	var_28_bool = var_32_bool; // 0x55 Mov
	return 2; // 0x56 Return
}


func_87(var_21_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x57 PushV
	IsDead(var_24_bool); // 0x58 ObjFunc
	var_21_bool = var_24_bool; // 0x5a Mov
	return 2; // 0x5b Return
}


func_152(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x98 PushV
	self(var_4_object); // 0x99 Func
	var_2_object = var_4_object; // 0x9b Mov
	return 2; // 0x9c Return
}


func_92(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x5c PushV
	var_16_bool = var_11_object == 0; // 0x5d NullEq
	if(var_16_bool == 0) goto Label_97; // 0x5e JumpB
	var_10_bool = 0; // 0x5f MovB
	return 4; // 0x60 Return
	
Label_97:
	var_17_bool = 0; // 0x61 PushV
	var_17_bool = 0; // 0x62 MovB
	var_18_string = "IsDead"; // 0x63 PushS
	var_19_int = 1; // 0x64 PushI
	var_20_bool = IsFuncExist(var_11_object, var_18_string, var_19_int); // 0x65 FuncExist
	if(var_20_bool == 0) goto Label_109; // 0x66 JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x67 PushV
	var_22_object = var_11_object; // 0x68 Mov
	func_87(var_22_object); // 0x69 Call
	if(var_21_bool == 0) goto Label_109; // 0x6b JumpB
	var_17_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_17_bool == 0) goto Label_112; // 0x6d JumpB
	var_10_bool = 0; // 0x6e MovB
	return 4; // 0x6f Return
	
Label_112:
	GetScene(var_14_object); // 0x70 Func
	var_25_bool = var_14_object == 0; // 0x72 NullEq
	if(var_25_bool == 0) goto Label_118; // 0x73 JumpB
	var_10_bool = 0; // 0x74 MovB
	return 4; // 0x75 Return
	
Label_118:
	GetScene(var_15_object); // 0x76 ObjFunc
	var_26_bool = var_14_object != var_15_object; // 0x78 Neq
	if(var_26_bool == 0) goto Label_124; // 0x79 JumpB
	var_10_bool = 0; // 0x7a MovB
	return 4; // 0x7b Return
	
Label_124:
	var_10_bool = 1; // 0x7c MovB
	return 4; // 0x7d Return
}


func_158(var_43_bool, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0x9e PushV
	GetItemID(var_50_int); // 0x9f ObjFunc
	var_53_string = "Category"; // 0xa1 PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0xa2 Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0xa4 ObjFunc
	var_43_bool = var_52_bool; // 0xa6 Mov
	return 6; // 0xa7 Return
}


