task_0_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int, var_7_float)
{
	SendToParent(); // 0x1a Func
	return 0; // 0x1c Return
}


task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int)
{
	var_5_bool = var_1_bool; // 0x1d PushT
	if(var_5_bool == 0) goto Label_32; // 0x1e JumpB
	return 0; // 0x1f Return
	
Label_32:
	var_6_bool = var_0_bool; // 0x20 PushT
	if(var_6_bool == 0) goto Label_48; // 0x21 JumpB
	var_7_string = "slider_pressed"; // 0x22 PushS
	var_8_bool = var_2_bool; // 0x23 PushT
	if(var_8_bool == 0) goto Label_39; // 0x24 JumpB
	var_9_int = 0; // 0x25 PushI
	goto Label_40; // 0x26 Jump
	
Label_40:
	var_10_bool = var_2_bool; // 0x28 PushT
	if(var_10_bool == 0) goto Label_44; // 0x29 JumpB
	var_11_int = var_3_int; // 0x2a PushT
	goto Label_45; // 0x2b Jump
	
Label_45:
	Blit(var_7_string, var_9_int, var_11_int); // 0x2d Func
	goto Label_61; // 0x2f Jump
	
Label_61:
	return 0; // 0x3d Return
	
Label_44:
	var_12_int = 0; // 0x2c PushI
	
Label_39:
	var_13_int = var_3_int; // 0x27 PushT
	
Label_48:
	var_14_string = "slider"; // 0x30 PushS
	var_15_bool = var_2_bool; // 0x31 PushT
	if(var_15_bool == 0) goto Label_53; // 0x32 JumpB
	var_16_int = 0; // 0x33 PushI
	goto Label_54; // 0x34 Jump
	
Label_54:
	var_17_bool = var_2_bool; // 0x36 PushT
	if(var_17_bool == 0) goto Label_58; // 0x37 JumpB
	var_18_int = var_3_int; // 0x38 PushT
	goto Label_59; // 0x39 Jump
	
Label_59:
	Blit(var_14_string, var_16_int, var_18_int); // 0x3b Func
	
Label_58:
	var_19_int = 0; // 0x3a PushI
	
Label_53:
	var_20_int = var_3_int; // 0x35 PushT
}


task_0_event_2(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0x45 PushV
	var_13_bool = var_1_bool; // 0x46 PushT
	if(var_13_bool == 0) goto Label_73; // 0x47 JumpB
	return 6; // 0x48 Return
	
Label_73:
	var_14_bool = 0; var_15_int = 0; var_16_int = 0; // 0x49 PushV
	var_15_int = var_5_int; // 0x4a Mov
	var_16_int = var_6_int; // 0x4b Mov
	func_207(var_12_int, var_14_bool, var_15_int, var_16_int); // 0x4c NEW_2
	if(var_14_bool == 0) goto Label_83; // 0x4e JumpB
	CaptureMouse(); // 0x4f Func
	var_0_bool = 1; // 0x51 TMovB
	return 6; // 0x52 Return
	
Label_83:
	var_28_bool = var_2_bool; // 0x53 PushT
	if(var_28_bool == 0) goto Label_87; // 0x54 JumpB
	var_10_int = var_6_int; // 0x55 Mov
	goto Label_88; // 0x56 Jump
	
Label_88:
	var_29_int = 0; // 0x58 PushI
	var_30_bool = var_10_int < var_29_int; // 0x59 LT
	if(var_30_bool == 0) goto Label_93; // 0x5a JumpB
	var_10_int = 0; // 0x5b MovI
	goto Label_96; // 0x5c Jump
	
Label_96:
	var_31_bool = var_10_int > var_3_int; // 0x60 GT
	if(var_31_bool == 0) goto Label_113; // 0x61 JumpB
	var_11_int = var_10_int - var_3_int; // 0x62 Sub2
	var_32_int = 100; // 0x63 PushI
	var_33_float = var_11_int * var_32_int; // 0x64 Mult
	var_11_int = var_33_float / var_1_bool; // 0x65 Div2
	var_34_int = 27; // 0x66 PushI
	var_35_bool = var_11_int < var_34_int; // 0x67 LT
	if(var_35_bool == 0) goto Label_107; // 0x68 JumpB
	var_3_int = var_10_int; // 0x69 TMov
	goto Label_112; // 0x6a Jump
	
Label_112:
	goto Label_127; // 0x70 Jump
	
Label_127:
	func_62(var_11_int, var_12_int); // 0x80 NEW_2
	return 6; // 0x82 Return
	
Label_107:
	var_40_int = 27; // 0x6b PushI
	var_41_float = var_40_int * var_4_int; // 0x6c Mult
	var_42_int = 100; // 0x6d PushI
	var_43_float = var_41_float / var_42_int; // 0x6e Div
	var_3_int = var_3_int + var_43_float; // 0x6f Add2
	
Label_113:
	var_12_int = var_3_int - var_10_int; // 0x71 Sub2
	var_44_int = 100; // 0x72 PushI
	var_45_float = var_12_int * var_44_int; // 0x73 Mult
	var_12_int = var_45_float / var_1_bool; // 0x74 Div2
	var_46_int = 27; // 0x75 PushI
	var_47_bool = var_12_int < var_46_int; // 0x76 LT
	if(var_47_bool == 0) goto Label_122; // 0x77 JumpB
	var_3_int = var_10_int; // 0x78 TMov
	goto Label_127; // 0x79 Jump
	
Label_122:
	var_48_int = 27; // 0x7a PushI
	var_49_float = var_48_int * var_4_int; // 0x7b Mult
	var_50_int = 100; // 0x7c PushI
	var_51_float = var_49_float / var_50_int; // 0x7d Div
	var_3_int = var_3_int - var_51_float; // 0x7e Sub2
	
Label_93:
	var_52_bool = var_10_int > var_4_int; // 0x5d GT
	if(var_52_bool == 0) goto Label_96; // 0x5e JumpB
	var_10_int = var_4_int; // 0x5f MovT
	
Label_87:
	var_10_int = var_5_int; // 0x57 Mov
}


task_0_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_bool = var_1_bool; // 0x84 PushT
	if(var_7_bool == 0) goto Label_135; // 0x85 JumpB
	return 0; // 0x86 Return
	
Label_135:
	var_0_bool = 0; // 0x87 TMovB
	ReleaseMouse(); // 0x88 Func
	return 0; // 0x8a Return
}


task_0_event_200(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_string, var_7_object)
{
	var_8_string = "scroll_button_up"; // 0x8c PushS
	var_9_bool = var_6_string == var_8_string; // 0x8d Eq
	if(var_9_bool == 0) goto Label_156; // 0x8e JumpB
	var_10_int = 27; // 0x8f PushI
	var_11_float = var_10_int * var_4_int; // 0x90 Mult
	var_12_int = 100; // 0x91 PushI
	var_13_float = var_11_float / var_12_int; // 0x92 Div
	var_3_int = var_3_int - var_13_float; // 0x93 Sub2
	var_14_int = 0; // 0x94 PushI
	var_15_bool = var_3_int < var_14_int; // 0x95 LT
	if(var_15_bool == 0) goto Label_152; // 0x96 JumpB
	var_3_int = 0; // 0x97 TMovI
	
Label_152:
	func_62(var_6_string, var_7_object); // 0x99 NEW_2
	goto Label_182; // 0x9b Jump
	
Label_182:
	return 0; // 0xb6 Return
	
Label_156:
	var_20_string = "scroll_button_down"; // 0x9c PushS
	var_21_bool = var_6_string == var_20_string; // 0x9d Eq
	if(var_21_bool == 0) goto Label_171; // 0x9e JumpB
	var_22_int = 27; // 0x9f PushI
	var_23_float = var_22_int * var_4_int; // 0xa0 Mult
	var_24_int = 100; // 0xa1 PushI
	var_25_float = var_23_float / var_24_int; // 0xa2 Div
	var_3_int = var_3_int + var_25_float; // 0xa3 Add2
	var_26_bool = var_3_int > var_4_int; // 0xa4 GT
	if(var_26_bool == 0) goto Label_167; // 0xa5 JumpB
	var_3_int = var_4_int; // 0xa6 TMovT
	
Label_167:
	func_62(var_6_string, var_7_object); // 0xa8 NEW_2
	goto Label_182; // 0xaa Jump
	
Label_171:
	var_27_int = 16384; // 0xab PushI
	var_28_int = var_27_int & var_5_int; // 0xac And
	if(var_28_int == 0) goto Label_176; // 0xad JumpB
	var_1_bool = 1; // 0xae TMovB
	goto Label_177; // 0xaf Jump
	
Label_177:
	var_29_int = 16383; // 0xb1 PushI
	var_30_int = var_29_int & var_5_int; // 0xb2 And
	var_31_float = var_30_int * var_4_int; // 0xb3 Mult
	var_32_int = 100; // 0xb4 PushI
	var_3_int = var_31_float / var_31_float; // 0xb5 Div2
	
Label_176:
	var_1_bool = 0; // 0xb0 TMovB
}


task_0_event_8(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_int = 0; // 0xb7 PushV
	var_9_bool = var_1_bool; // 0xb8 PushT
	if(var_9_bool == 0) goto Label_187; // 0xb9 JumpB
	return 2; // 0xba Return
	
Label_187:
	var_10_bool = var_0_bool; // 0xbb PushT
	if(var_10_bool == 0) goto Label_206; // 0xbc JumpB
	var_11_bool = var_2_bool; // 0xbd PushT
	if(var_11_bool == 0) goto Label_193; // 0xbe JumpB
	var_8_int = var_6_int; // 0xbf Mov
	goto Label_194; // 0xc0 Jump
	
Label_194:
	var_12_int = 0; // 0xc2 PushI
	var_13_bool = var_8_int < var_12_int; // 0xc3 LT
	if(var_13_bool == 0) goto Label_199; // 0xc4 JumpB
	var_8_int = 0; // 0xc5 MovI
	goto Label_202; // 0xc6 Jump
	
Label_202:
	var_3_int = var_8_int; // 0xca TMov
	func_62(var_7_int, var_8_int); // 0xcc NEW_2
	
Label_206:
	return 2; // 0xce Return
	
Label_199:
	var_18_bool = var_8_int > var_4_int; // 0xc7 GT
	if(var_18_bool == 0) goto Label_202; // 0xc8 JumpB
	var_8_int = var_4_int; // 0xc9 MovT
	
Label_193:
	var_8_int = var_5_int; // 0xc1 Mov
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int)
{
	var_5_bool = 0; // 0x0 PushV
	var_5_bool = 0; // 0x1 MovB
	func_5(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_bool); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_5(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_int, var_5_bool)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0x5 PushV
	var_2_bool = var_5_bool; // 0x6 TMov
	var_0_bool = 0; // 0x7 TMovB
	var_1_bool = 0; // 0x8 TMovB
	var_3_int = 0; // 0x9 TMovI
	var_10_bool = 1; // 0xa PushB
	SetOwnerDraw(var_10_bool); // 0xb Func
	GetWindowSize(var_8_int, var_9_int); // 0xd Func
	var_11_bool = var_2_bool; // 0xf PushT
	if(var_11_bool == 0) goto Label_20; // 0x10 JumpB
	var_12_int = 14; // 0x11 PushI
	var_4_int = var_9_int - var_12_int; // 0x12 Sub2
	goto Label_22; // 0x13 Jump
	
Label_22:
	ProcessEvents(); // 0x16 Func
	return 4; // 0x18 Return
	
Label_20:
	var_13_int = 14; // 0x14 PushI
	var_4_int = var_8_int - var_13_int; // 0x15 Sub2
}


func_62(var_1_bool, var_3_int)
{
	var_14_int = 0; var_15_int = 0; // 0x3e PushV
	var_16_int = 100; // 0x3f PushI
	var_17_float = var_3_int * var_16_int; // 0x40 Mult
	var_15_int = var_17_float / var_1_bool; // 0x41 Div2
	SendMessageToParent(var_15_int); // 0x42 Func
	return 2; // 0x44 Return
}


func_207(var_3_int, var_14_bool, var_15_int, var_16_int)
{
	var_17_bool = var_2_bool; // 0xd0 PushT
	if(var_17_bool == 0) goto Label_224; // 0xd1 JumpB
	var_18_bool = 0; // 0xd2 PushV
	var_18_bool = 0; // 0xd3 MovB
	var_19_bool = var_16_int >= var_3_int; // 0xd4 GE
	if(var_19_bool == 0) goto Label_219; // 0xd5 JumpB
	var_20_int = 14; // 0xd6 PushI
	var_21_int = var_3_int + var_20_int; // 0xd7 Add
	var_22_bool = var_16_int <= var_21_int; // 0xd8 LE
	if(var_22_bool == 0) goto Label_219; // 0xd9 JumpB
	var_18_bool = 1; // 0xda MovB
	
Label_219:
	if(var_18_bool == 0) goto Label_222; // 0xdb JumpB
	var_14_bool = 1; // 0xdc MovB
	return 0; // 0xdd Return
	
Label_222:
	var_14_bool = 0; // 0xde MovB
	return 0; // 0xdf Return
	
Label_224:
	var_23_bool = 0; // 0xe0 PushV
	var_23_bool = 0; // 0xe1 MovB
	var_24_bool = var_15_int >= var_3_int; // 0xe2 GE
	if(var_24_bool == 0) goto Label_233; // 0xe3 JumpB
	var_25_int = 14; // 0xe4 PushI
	var_26_int = var_3_int + var_25_int; // 0xe5 Add
	var_27_bool = var_15_int <= var_26_int; // 0xe6 LE
	if(var_27_bool == 0) goto Label_233; // 0xe7 JumpB
	var_23_bool = 1; // 0xe8 MovB
	
Label_233:
	if(var_23_bool == 0) goto Label_236; // 0xe9 JumpB
	var_14_bool = 1; // 0xea MovB
	return 0; // 0xeb Return
	
Label_236:
	var_14_bool = 0; // 0xec MovB
	return 0; // 0xed Return
}


