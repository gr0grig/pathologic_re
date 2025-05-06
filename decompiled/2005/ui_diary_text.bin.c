task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_bool = 0; // 0x37 PushV
	var_7_bool = 0; // 0x38 MovB
	func_20(var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool); // 0x39 NEW_2
	return 0; // 0x3b Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_string = "scrollbar"; // 0x71 PushS
	var_11_bool = var_8_string == var_10_string; // 0x72 Eq
	if(var_11_bool == 0) goto Label_125; // 0x73 JumpB
	var_12_int = -var_2_int; // 0x74 Neg
	var_13_float = var_12_int * var_7_int; // 0x75 Mult
	var_14_int = 100; // 0x76 PushI
	var_1_int = var_13_float / var_13_float; // 0x77 Div2
	func_151(var_8_string, var_9_object); // 0x79 NEW_2
	return 0; // 0x7b Return
	
Label_125:
	var_21_string = "diary"; // 0x7d PushS
	var_22_bool = var_8_string == var_21_string; // 0x7e Eq
	if(var_22_bool == 0) goto Label_137; // 0x7f JumpB
	var_5_int = var_7_int; // 0x80 TMov
	var_1_int = 0; // 0x81 TMovI
	var_23_bool = 0; // 0x82 PushV
	var_23_bool = 1; // 0x83 MovB
	func_20(var_6_int, var_7_int, var_8_string, var_9_object, var_23_bool); // 0x84 NEW_2
	func_166(var_8_string, var_9_object); // 0x87 NEW_2
	
Label_137:
	return 0; // 0x89 Return
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_int = 0; var_11_int = 0; // 0x8a PushV
	var_12_int = 15; // 0x8b PushI
	var_13_float = var_9_float * var_12_int; // 0x8c Mult
	var_14_int = 2; // 0x8d PushI
	var_11_int = var_13_float * var_14_int; // 0x8e Mult2
	var_1_int = var_1_int + var_11_int; // 0x8f Add2
	func_151(var_10_int, var_11_int); // 0x91 NEW_2
	func_166(var_10_int, var_11_int); // 0x94 NEW_2
	return 2; // 0x96 Return
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_5_int = 0; // 0x0 TMovI
	var_1_int = 0; // 0x1 TMovI
	GetWindowSize(var_4_int, var_3_int); // 0x2 Func
	var_7_bool = 0; // 0x4 PushV
	var_7_bool = 1; // 0x5 MovB
	func_20(var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool); // 0x6 NEW_2
	func_166(var_5_int, var_6_int); // 0x9 NEW_2
	var_70_bool = 1; // 0xb PushB
	EnableClipping(var_70_bool); // 0xc Func
	var_71_bool = 1; // 0xe PushB
	SetOwnerDraw(var_71_bool); // 0xf Func
	ProcessEvents(); // 0x11 Func
	return 0; // 0x13 Return
}


func_20(var_2_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); // 0x14 PushV
	var_6_int = 0; // 0x15 TMovI
	GetDiaryRoot(var_13_object); // 0x16 Func
	ChildCount(var_14_int); // 0x18 ObjFunc
	var_16_int = 0; // 0x1a MovI
	
Label_27:
	var_18_bool = var_16_int < var_14_int; // 0x1b LT
	if(var_18_bool == 0) goto Label_48; // 0x1c JumpB
	Child(var_17_object, var_16_int); // 0x1d ObjFunc
	GetCategory(var_15_int); // 0x1f ObjFunc
	var_19_bool = var_15_int != var_5_int; // 0x21 Neq
	if(var_19_bool == 0) goto Label_36; // 0x22 JumpB
	goto Label_45; // 0x23 Jump
	
Label_45:
	var_20_int = 1; // 0x2d PushI
	var_16_int = var_16_int + var_20_int; // 0x2e Add2
	goto Label_27; // 0x2f Jump
	
Label_36:
	var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; // 0x24 PushV
	var_21_object = var_17_object; // 0x25 Mov
	var_22_int = 0; // 0x26 MovI
	var_23_bool = var_7_bool; // 0x27 Mov
	func_60(var_15_int, var_16_int, var_17_object, var_21_object, var_22_int, var_23_bool); // 0x28 NEW_2
	var_58_int = 15; // 0x2a PushI
	var_6_int = var_6_int + var_58_int; // 0x2b Add2
	var_17_object = 0; // 0x2c SetNull
	
Label_48:
	var_2_int = var_6_int - var_4_int; // 0x30 Sub2
	var_59_int = 0; // 0x31 PushI
	var_60_bool = var_2_int < var_59_int; // 0x32 LT
	if(var_60_bool == 0) goto Label_53; // 0x33 JumpB
	var_2_int = 0; // 0x34 TMovI
	
Label_53:
	return 10; // 0x35 Return
}


func_166(var_1_int, var_2_int)
{
	var_61_int = 0; // 0xa6 PushI
	var_62_bool = var_2_int == var_61_int; // 0xa7 Eq
	if(var_62_bool == 0) goto Label_174; // 0xa8 JumpB
	var_63_int = 16384; // 0xa9 PushI
	var_64_string = "scrollbar"; // 0xaa PushS
	SendMessage(var_63_int, var_64_string); // 0xab Func
	goto Label_181; // 0xad Jump
	
Label_181:
	return 0; // 0xb5 Return
	
Label_174:
	var_65_int = -var_1_int; // 0xae Neg
	var_66_int = 100; // 0xaf PushI
	var_67_float = var_65_int * var_66_int; // 0xb0 Mult
	var_68_float = var_67_float / var_2_int; // 0xb1 Div
	var_69_string = "scrollbar"; // 0xb2 PushS
	SendMessage(var_68_float, var_69_string); // 0xb3 Func
}


func_60(var_1_int, var_3_int, var_5_int, var_6_int, var_22_int, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_object = Obj(); var_39_int = 0; // 0x3c PushV
	GetCategory(var_32_int); // 0x3d ObjFunc
	var_40_bool = var_32_int != var_5_int; // 0x3f Neq
	if(var_40_bool == 0) goto Label_66; // 0x40 JumpB
	return 16; // 0x41 Return
	
Label_66:
	GetTextID(var_33_int); // 0x42 ObjFunc
	GetStringByID(var_34_string, var_33_int); // 0x44 Func
	var_41_bool = var_23_bool; // 0x46 Push
	if(var_41_bool == 0) goto Label_77; // 0x47 JumpB
	var_42_string = "default"; // 0x48 PushS
	var_43_int = var_3_int - var_22_int; // 0x49 Sub
	GetTextHeightInWidth(var_35_int, var_42_string, var_43_int, var_34_string); // 0x4a Func
	goto Label_85; // 0x4c Jump
	
Label_85:
	var_6_int = var_6_int + var_35_int; // 0x55 Add2
	ChildCount(var_36_int); // 0x56 ObjFunc
	var_37_int = 0; // 0x58 MovI
	
Label_89:
	var_44_bool = var_37_int < var_36_int; // 0x59 LT
	if(var_44_bool == 0) goto Label_111; // 0x5a JumpB
	Child(var_38_object, var_37_int); // 0x5b ObjFunc
	GetCategory(var_39_int); // 0x5d ObjFunc
	var_45_bool = var_39_int != var_5_int; // 0x5f Neq
	if(var_45_bool == 0) goto Label_98; // 0x60 JumpB
	goto Label_108; // 0x61 Jump
	
Label_108:
	var_46_int = 1; // 0x6c PushI
	var_37_int = var_37_int + var_46_int; // 0x6d Add2
	goto Label_89; // 0x6e Jump
	
Label_98:
	var_47_int = 10; // 0x62 PushI
	var_6_int = var_6_int + var_47_int; // 0x63 Add2
	var_48_object = Obj(); var_49_int = 0; var_50_bool = 0; // 0x64 PushV
	var_48_object = var_38_object; // 0x65 Mov
	var_51_int = 20; // 0x66 PushI
	var_49_int = var_22_int + var_51_int; // 0x67 Add2
	var_50_bool = var_23_bool; // 0x68 Mov
	func_60(var_37_int, var_38_object, var_39_int, var_48_object, var_49_int, var_50_bool); // 0x69 NEW_2
	var_38_object = 0; // 0x6b SetNull
	
Label_111:
	return 16; // 0x6f Return
	
Label_77:
	var_52_string = "default"; // 0x4d PushS
	var_53_int = var_1_int + var_6_int; // 0x4e Add
	var_54_int = var_3_int - var_22_int; // 0x4f Sub
	var_55_float = 1.0; // 0x50 PushF
	var_56_float = 1.0; // 0x51 PushF
	var_57_float = 1.0; // 0x52 PushF
	PrintInWidth(var_35_int, var_52_string, var_22_int, var_53_int, var_54_int, var_34_string, var_55_float, var_56_float, var_57_float); // 0x53 Func
}


func_151(var_1_int, var_2_int)
{
	var_15_int = 0; // 0x97 PushI
	var_16_bool = var_2_int == var_15_int; // 0x98 Eq
	if(var_16_bool == 0) goto Label_156; // 0x99 JumpB
	var_1_int = 0; // 0x9a TMovI
	return 0; // 0x9b Return
	
Label_156:
	var_17_int = -var_1_int; // 0x9c Neg
	var_18_bool = var_17_int > var_2_int; // 0x9d GT
	if(var_18_bool == 0) goto Label_161; // 0x9e JumpB
	var_1_int = -var_2_int; // 0x9f Neg2
	goto Label_165; // 0xa0 Jump
	
Label_165:
	return 0; // 0xa5 Return
	
Label_161:
	var_19_int = 0; // 0xa1 PushI
	var_20_bool = var_1_int > var_19_int; // 0xa2 GT
	if(var_20_bool == 0) goto Label_165; // 0xa3 JumpB
	var_1_int = 0; // 0xa4 TMovI
}


