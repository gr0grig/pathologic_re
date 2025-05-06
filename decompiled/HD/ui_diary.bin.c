task_0_event_100(var_0_int, var_1_int)
{
	SetDiarySelectedSection(var_0_int); // 0x14 Func
	DestroyWindow(); // 0x16 Func
	return 0; // 0x18 Return
}


task_0_event_101(var_0_int, var_1_int)
{
	var_2_int = 266; // 0x1a PushI
	var_3_bool = var_1_int == var_2_int; // 0x1b Eq
	if(var_3_bool == 0) goto Label_56; // 0x1c JumpB
	var_4_int = 0; // 0x1d PushI
	var_5_bool = var_0_int == var_4_int; // 0x1e Eq
	if(var_5_bool == 0) goto Label_38; // 0x1f JumpB
	var_0_int = 1; // 0x20 TMovI
	var_6_int = 0; // 0x21 PushV
	var_6_int = var_0_int; // 0x22 MovT
	func_147(var_6_int); // 0x23 NEW_2
	goto Label_55; // 0x25 Jump
	
Label_55:
	goto Label_101; // 0x37 Jump
	
Label_101:
	return 0; // 0x65 Return
	
Label_38:
	var_26_int = 1; // 0x26 PushI
	var_27_bool = var_0_int == var_26_int; // 0x27 Eq
	if(var_27_bool == 0) goto Label_47; // 0x28 JumpB
	var_0_int = 2; // 0x29 TMovI
	var_28_int = 0; // 0x2a PushV
	var_28_int = var_0_int; // 0x2b MovT
	func_147(var_28_int); // 0x2c NEW_2
	goto Label_55; // 0x2e Jump
	
Label_47:
	var_29_int = 2; // 0x2f PushI
	var_30_bool = var_0_int == var_29_int; // 0x30 Eq
	if(var_30_bool == 0) goto Label_55; // 0x31 JumpB
	var_0_int = 0; // 0x32 TMovI
	var_31_int = 0; // 0x33 PushV
	var_31_int = var_0_int; // 0x34 MovT
	func_147(var_31_int); // 0x35 NEW_2
	
Label_56:
	var_32_int = 265; // 0x38 PushI
	var_33_bool = var_1_int == var_32_int; // 0x39 Eq
	if(var_33_bool == 0) goto Label_86; // 0x3a JumpB
	var_34_int = 0; // 0x3b PushI
	var_35_bool = var_0_int == var_34_int; // 0x3c Eq
	if(var_35_bool == 0) goto Label_68; // 0x3d JumpB
	var_0_int = 2; // 0x3e TMovI
	var_36_int = 0; // 0x3f PushV
	var_36_int = var_0_int; // 0x40 MovT
	func_147(var_36_int); // 0x41 NEW_2
	goto Label_85; // 0x43 Jump
	
Label_85:
	goto Label_101; // 0x55 Jump
	
Label_68:
	var_37_int = 1; // 0x44 PushI
	var_38_bool = var_0_int == var_37_int; // 0x45 Eq
	if(var_38_bool == 0) goto Label_77; // 0x46 JumpB
	var_0_int = 0; // 0x47 TMovI
	var_39_int = 0; // 0x48 PushV
	var_39_int = var_0_int; // 0x49 MovT
	func_147(var_39_int); // 0x4a NEW_2
	goto Label_85; // 0x4c Jump
	
Label_77:
	var_40_int = 2; // 0x4d PushI
	var_41_bool = var_0_int == var_40_int; // 0x4e Eq
	if(var_41_bool == 0) goto Label_85; // 0x4f JumpB
	var_0_int = 1; // 0x50 TMovI
	var_42_int = 0; // 0x51 PushV
	var_42_int = var_0_int; // 0x52 MovT
	func_147(var_42_int); // 0x53 NEW_2
	
Label_86:
	var_43_int = 267; // 0x56 PushI
	var_44_bool = var_1_int == var_43_int; // 0x57 Eq
	if(var_44_bool == 0) goto Label_94; // 0x58 JumpB
	var_45_int = 1001; // 0x59 PushI
	var_46_string = "text"; // 0x5a PushS
	SendMessage(var_45_int, var_46_string); // 0x5b Func
	goto Label_101; // 0x5d Jump
	
Label_94:
	var_47_int = 268; // 0x5e PushI
	var_48_bool = var_1_int == var_47_int; // 0x5f Eq
	if(var_48_bool == 0) goto Label_101; // 0x60 JumpB
	var_49_int = 1000; // 0x61 PushI
	var_50_string = "text"; // 0x62 PushS
	SendMessage(var_49_int, var_50_string); // 0x63 Func
}


task_0_event_102(var_0_int, var_1_int)
{
	var_2_int = 272; // 0x67 PushI
	var_3_bool = var_1_int == var_2_int; // 0x68 Eq
	if(var_3_bool == 0) goto Label_111; // 0x69 JumpB
	var_4_int = 1001; // 0x6a PushI
	var_5_string = "text"; // 0x6b PushS
	SendMessage(var_4_int, var_5_string); // 0x6c Func
	goto Label_118; // 0x6e Jump
	
Label_118:
	return 0; // 0x76 Return
	
Label_111:
	var_6_int = 274; // 0x6f PushI
	var_7_bool = var_1_int == var_6_int; // 0x70 Eq
	if(var_7_bool == 0) goto Label_118; // 0x71 JumpB
	var_8_int = 1000; // 0x72 PushI
	var_9_string = "text"; // 0x73 PushS
	SendMessage(var_8_int, var_9_string); // 0x74 Func
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_4_string = "button_mission"; // 0x78 PushS
	var_5_bool = var_2_string == var_4_string; // 0x79 Eq
	if(var_5_bool == 0) goto Label_129; // 0x7a JumpB
	var_0_int = 0; // 0x7b TMovI
	var_6_int = 0; // 0x7c PushV
	var_6_int = var_0_int; // 0x7d MovT
	func_147(var_6_int); // 0x7e NEW_2
	goto Label_146; // 0x80 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_129:
	var_26_string = "button_daytasks"; // 0x81 PushS
	var_27_bool = var_2_string == var_26_string; // 0x82 Eq
	if(var_27_bool == 0) goto Label_138; // 0x83 JumpB
	var_0_int = 1; // 0x84 TMovI
	var_28_int = 0; // 0x85 PushV
	var_28_int = var_0_int; // 0x86 MovT
	func_147(var_28_int); // 0x87 NEW_2
	goto Label_146; // 0x89 Jump
	
Label_138:
	var_29_string = "button_othertasks"; // 0x8a PushS
	var_30_bool = var_2_string == var_29_string; // 0x8b Eq
	if(var_30_bool == 0) goto Label_146; // 0x8c JumpB
	var_0_int = 2; // 0x8d TMovI
	var_31_int = 0; // 0x8e PushV
	var_31_int = var_0_int; // 0x8f MovT
	func_147(var_31_int); // 0x90 NEW_2
}


main(var_0_int)
{
	GetDiarySelectedSection(var_0_int); // 0x0 Func
	var_1_string = "default"; // 0x2 PushS
	SetCursor(var_1_string); // 0x3 Func
	ShowCursor(); // 0x5 Func
	var_2_int = 0; // 0x7 PushV
	var_2_int = var_0_int; // 0x8 MovT
	func_147(var_2_int); // 0x9 NEW_2
	CaptureKeyboard(); // 0xb Func
	var_22_bool = 0; // 0xd PushB
	SetOwnerDraw(var_22_bool); // 0xe Func
	ProcessEvents(); // 0x10 Func
	return 0; // 0x12 Return
}


func_147(var_2_int)
{
	var_3_int = 0; // 0x94 PushI
	var_4_bool = var_2_int != var_3_int; // 0x95 Neq
	if(var_4_bool == 0) goto Label_156; // 0x96 JumpB
	var_5_int = 0; // 0x97 PushI
	var_6_string = "button_mission"; // 0x98 PushS
	SendMessage(var_5_int, var_6_string); // 0x99 Func
	goto Label_160; // 0x9b Jump
	
Label_160:
	var_7_int = 1; // 0xa0 PushI
	var_8_bool = var_2_int != var_7_int; // 0xa1 Neq
	if(var_8_bool == 0) goto Label_168; // 0xa2 JumpB
	var_9_int = 0; // 0xa3 PushI
	var_10_string = "button_daytasks"; // 0xa4 PushS
	SendMessage(var_9_int, var_10_string); // 0xa5 Func
	goto Label_172; // 0xa7 Jump
	
Label_172:
	var_11_int = 2; // 0xac PushI
	var_12_bool = var_2_int != var_11_int; // 0xad Neq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_int = 0; // 0xaf PushI
	var_14_string = "button_othertasks"; // 0xb0 PushS
	SendMessage(var_13_int, var_14_string); // 0xb1 Func
	goto Label_184; // 0xb3 Jump
	
Label_184:
	var_15_string = "text"; // 0xb8 PushS
	SendMessage(var_2_int, var_15_string); // 0xb9 Func
	return 0; // 0xbb Return
	
Label_180:
	var_16_int = 1; // 0xb4 PushI
	var_17_string = "button_othertasks"; // 0xb5 PushS
	SendMessage(var_16_int, var_17_string); // 0xb6 Func
	
Label_168:
	var_18_int = 1; // 0xa8 PushI
	var_19_string = "button_daytasks"; // 0xa9 PushS
	SendMessage(var_18_int, var_19_string); // 0xaa Func
	
Label_156:
	var_20_int = 1; // 0x9c PushI
	var_21_string = "button_mission"; // 0x9d PushS
	SendMessage(var_20_int, var_21_string); // 0x9e Func
}


