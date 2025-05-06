task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); // 0xd PushV
	GetDiaryRoot(var_11_object); // 0xe Func
	var_6_int = 0; // 0x10 TMovI
	ChildCount(var_12_int); // 0x11 ObjFunc
	var_13_int = 0; // 0x13 MovI
	
Label_20:
	var_15_bool = var_13_int < var_12_int; // 0x14 LT
	if(var_15_bool == 0) goto Label_35; // 0x15 JumpB
	Child(var_14_object, var_13_int); // 0x16 ObjFunc
	var_16_object = Obj(); var_17_int = 0; // 0x18 PushV
	var_16_object = var_14_object; // 0x19 Mov
	var_17_int = 0; // 0x1a MovI
	func_42(var_12_int, var_13_int, var_14_object, var_16_object, var_17_int); // 0x1b Call
	var_48_int = 15; // 0x1d PushI
	var_6_int = var_6_int + var_48_int; // 0x1e Add2
	var_14_object = 0; // 0x1f SetNull
	var_49_int = 1; // 0x20 PushI
	var_13_int = var_13_int + var_49_int; // 0x21 Add2
	goto Label_20; // 0x22 Jump
	
Label_35:
	var_2_int = var_6_int - var_4_int; // 0x23 Sub2
	var_50_int = 0; // 0x24 PushI
	var_51_bool = var_2_int < var_50_int; // 0x25 LT
	if(var_51_bool == 0) goto Label_40; // 0x26 JumpB
	var_2_int = 0; // 0x27 TMovI
	
Label_40:
	return 8; // 0x28 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_string = "scrollbar"; // 0x57 PushS
	var_11_bool = var_8_string == var_10_string; // 0x58 Eq
	if(var_11_bool == 0) goto Label_95; // 0x59 JumpB
	var_12_int = -var_2_int; // 0x5a Neg
	var_13_float = var_12_int * var_7_int; // 0x5b Mult
	var_14_int = 100; // 0x5c PushI
	var_1_int = var_13_float / var_13_float; // 0x5d Div2
	return 0; // 0x5e Return
	
Label_95:
	var_5_int = var_7_int; // 0x5f TMov
	return 0; // 0x60 Return
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_5_int = 0; // 0x0 TMovI
	var_1_int = 0; // 0x1 TMovI
	GetWindowSize(var_4_int, var_3_int); // 0x2 Func
	var_7_bool = 1; // 0x4 PushB
	EnableClipping(var_7_bool); // 0x5 Func
	var_8_bool = 1; // 0x7 PushB
	SetOwnerDraw(var_8_bool); // 0x8 Func
	ProcessEvents(); // 0xa Func
	return 0; // 0xc Return
}


func_42(var_1_int, var_3_int, var_5_int, var_6_int, var_17_int)
{
	var_18_int = 0; var_19_int = 0; var_20_string = ""; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_int = 0; // 0x2a PushV
	GetCategory(var_26_int); // 0x2b ObjFunc
	var_34_bool = var_26_int != var_5_int; // 0x2d Neq
	if(var_34_bool == 0) goto Label_48; // 0x2e JumpB
	return 16; // 0x2f Return
	
Label_48:
	GetTextID(var_27_int); // 0x30 ObjFunc
	GetStringByID(var_28_string, var_27_int); // 0x32 Func
	var_35_string = "default"; // 0x34 PushS
	var_36_int = var_1_int + var_6_int; // 0x35 Add
	var_37_int = var_3_int + var_17_int; // 0x36 Add
	var_38_float = 1.0; // 0x37 PushF
	var_39_float = 1.0; // 0x38 PushF
	var_40_float = 1.0; // 0x39 PushF
	PrintInWidth(var_29_int, var_35_string, var_17_int, var_36_int, var_37_int, var_28_string, var_38_float, var_39_float, var_40_float); // 0x3a Func
	var_6_int = var_6_int + var_29_int; // 0x3c Add2
	ChildCount(var_30_int); // 0x3d ObjFunc
	var_31_int = 0; // 0x3f MovI
	
Label_64:
	var_41_bool = var_31_int < var_30_int; // 0x40 LT
	if(var_41_bool == 0) goto Label_85; // 0x41 JumpB
	Child(var_32_object, var_31_int); // 0x42 ObjFunc
	GetCategory(var_33_int); // 0x44 ObjFunc
	var_42_bool = var_33_int != var_5_int; // 0x46 Neq
	if(var_42_bool == 0) goto Label_73; // 0x47 JumpB
	goto Label_82; // 0x48 Jump
	
Label_82:
	var_43_int = 1; // 0x52 PushI
	var_31_int = var_31_int + var_43_int; // 0x53 Add2
	goto Label_64; // 0x54 Jump
	
Label_73:
	var_44_int = 10; // 0x49 PushI
	var_6_int = var_6_int + var_44_int; // 0x4a Add2
	var_45_object = Obj(); var_46_int = 0; // 0x4b PushV
	var_45_object = var_32_object; // 0x4c Mov
	var_47_int = 20; // 0x4d PushI
	var_46_int = var_17_int + var_47_int; // 0x4e Add2
	func_42(var_31_int, var_32_object, var_33_int, var_45_object, var_46_int); // 0x4f Call
	var_32_object = 0; // 0x51 SetNull
	
Label_85:
	return 16; // 0x55 Return
}


