task_0_event_0(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_1_bool; // 0x12 PushT
	if(var_4_bool == 0) goto Label_21; // 0x13 JumpB
	return 0; // 0x14 Return
	
Label_21:
	var_5_bool = var_0_bool; // 0x15 PushT
	if(var_5_bool == 0) goto Label_28; // 0x16 JumpB
	var_6_string = "slider_pressed"; // 0x17 PushS
	var_7_int = 0; // 0x18 PushI
	Blit(var_6_string, var_7_int, var_6_string); // 0x19 Func
	goto Label_32; // 0x1b Jump
	
Label_32:
	return 0; // 0x20 Return
	
Label_28:
	var_8_string = "slider"; // 0x1c PushS
	var_9_int = 0; // 0x1d PushI
	Blit(var_8_string, var_9_int, var_8_string); // 0x1e Func
}


task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; // 0x28 PushV
	var_12_bool = var_1_bool; // 0x29 PushT
	if(var_12_bool == 0) goto Label_44; // 0x2a JumpB
	return 6; // 0x2b Return
	
Label_44:
	var_13_bool = 0; var_14_int = 0; var_15_int = 0; // 0x2c PushV
	var_14_int = var_4_int; // 0x2d Mov
	var_15_int = var_5_int; // 0x2e Mov
	func_178(var_13_bool, var_14_int, var_15_int); // 0x2f Call
	if(var_13_bool == 0) goto Label_54; // 0x31 JumpB
	CaptureMouse(); // 0x32 Func
	var_0_bool = 1; // 0x34 TMovB
	return 6; // 0x35 Return
	
Label_54:
	var_9_int = var_5_int; // 0x36 Mov
	var_21_int = 0; // 0x37 PushI
	var_22_bool = var_9_int < var_21_int; // 0x38 LT
	if(var_22_bool == 0) goto Label_60; // 0x39 JumpB
	var_9_int = 0; // 0x3a MovI
	goto Label_63; // 0x3b Jump
	
Label_63:
	var_23_bool = var_9_int > var_2_int; // 0x3f GT
	if(var_23_bool == 0) goto Label_80; // 0x40 JumpB
	var_10_int = var_9_int - var_2_int; // 0x41 Sub2
	var_24_int = 100; // 0x42 PushI
	var_25_float = var_10_int * var_24_int; // 0x43 Mult
	var_10_int = var_25_float / var_1_bool; // 0x44 Div2
	var_26_int = 27; // 0x45 PushI
	var_27_bool = var_10_int < var_26_int; // 0x46 LT
	if(var_27_bool == 0) goto Label_74; // 0x47 JumpB
	var_2_int = var_9_int; // 0x48 TMov
	goto Label_79; // 0x49 Jump
	
Label_79:
	goto Label_94; // 0x4f Jump
	
Label_94:
	func_33(var_10_int, var_11_int); // 0x5f Call
	return 6; // 0x61 Return
	
Label_74:
	var_32_int = 27; // 0x4a PushI
	var_33_float = var_32_int * var_3_int; // 0x4b Mult
	var_34_int = 100; // 0x4c PushI
	var_35_float = var_33_float / var_34_int; // 0x4d Div
	var_2_int = var_2_int + var_35_float; // 0x4e Add2
	
Label_80:
	var_11_int = var_2_int - var_9_int; // 0x50 Sub2
	var_36_int = 100; // 0x51 PushI
	var_37_float = var_11_int * var_36_int; // 0x52 Mult
	var_11_int = var_37_float / var_1_bool; // 0x53 Div2
	var_38_int = 27; // 0x54 PushI
	var_39_bool = var_11_int < var_38_int; // 0x55 LT
	if(var_39_bool == 0) goto Label_89; // 0x56 JumpB
	var_2_int = var_9_int; // 0x57 TMov
	goto Label_94; // 0x58 Jump
	
Label_89:
	var_40_int = 27; // 0x59 PushI
	var_41_float = var_40_int * var_3_int; // 0x5a Mult
	var_42_int = 100; // 0x5b PushI
	var_43_float = var_41_float / var_42_int; // 0x5c Div
	var_2_int = var_2_int - var_43_float; // 0x5d Sub2
	
Label_60:
	var_44_bool = var_9_int > var_3_int; // 0x3c GT
	if(var_44_bool == 0) goto Label_63; // 0x3d JumpB
	var_9_int = var_3_int; // 0x3e MovT
}


task_0_event_3(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_bool = var_1_bool; // 0x63 PushT
	if(var_6_bool == 0) goto Label_102; // 0x64 JumpB
	return 0; // 0x65 Return
	
Label_102:
	var_0_bool = 0; // 0x66 TMovB
	ReleaseMouse(); // 0x67 Func
	return 0; // 0x69 Return
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_7_string = "scroll_button_up"; // 0x6b PushS
	var_8_bool = var_5_string == var_7_string; // 0x6c Eq
	if(var_8_bool == 0) goto Label_127; // 0x6d JumpB
	var_9_int = 27; // 0x6e PushI
	var_10_float = var_9_int * var_3_int; // 0x6f Mult
	var_11_int = 100; // 0x70 PushI
	var_12_float = var_10_float / var_11_int; // 0x71 Div
	var_2_int = var_2_int - var_12_float; // 0x72 Sub2
	var_13_int = 0; // 0x73 PushI
	var_14_bool = var_2_int < var_13_int; // 0x74 LT
	if(var_14_bool == 0) goto Label_119; // 0x75 JumpB
	var_2_int = 0; // 0x76 TMovI
	
Label_119:
	var_15_string = "scroll up "; // 0x77 PushS
	var_16_int = var_15_string + var_2_int; // 0x78 Add
	Trace(var_16_int); // 0x79 Func
	func_33(var_5_string, var_6_object); // 0x7c Call
	goto Label_157; // 0x7e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_127:
	var_21_string = "scroll_button_down"; // 0x7f PushS
	var_22_bool = var_5_string == var_21_string; // 0x80 Eq
	if(var_22_bool == 0) goto Label_146; // 0x81 JumpB
	var_23_int = 10; // 0x82 PushI
	var_2_int = var_2_int + var_23_int; // 0x83 Add2
	var_24_bool = var_2_int > var_3_int; // 0x84 GT
	if(var_24_bool == 0) goto Label_135; // 0x85 JumpB
	var_2_int = var_3_int; // 0x86 TMovT
	
Label_135:
	var_25_string = "scroll down "; // 0x87 PushS
	var_26_int = var_25_string + var_2_int; // 0x88 Add
	var_27_string = " "; // 0x89 PushS
	var_28_int = var_26_int + var_27_string; // 0x8a Add
	var_29_int = var_28_int + var_3_int; // 0x8b Add
	Trace(var_29_int); // 0x8c Func
	func_33(var_5_string, var_6_object); // 0x8f Call
	goto Label_157; // 0x91 Jump
	
Label_146:
	var_30_int = 16384; // 0x92 PushI
	var_31_int = var_30_int & var_4_int; // 0x93 And
	if(var_31_int == 0) goto Label_151; // 0x94 JumpB
	var_1_bool = 1; // 0x95 TMovB
	goto Label_152; // 0x96 Jump
	
Label_152:
	var_32_int = 16383; // 0x98 PushI
	var_33_int = var_32_int & var_4_int; // 0x99 And
	var_34_float = var_33_int * var_3_int; // 0x9a Mult
	var_35_int = 100; // 0x9b PushI
	var_2_int = var_34_float / var_34_float; // 0x9c Div2
	
Label_151:
	var_1_bool = 0; // 0x97 TMovB
}


task_0_event_8(var_0_bool, var_1_bool, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; // 0x9e PushV
	var_8_bool = var_1_bool; // 0x9f PushT
	if(var_8_bool == 0) goto Label_162; // 0xa0 JumpB
	return 2; // 0xa1 Return
	
Label_162:
	var_9_bool = var_0_bool; // 0xa2 PushT
	if(var_9_bool == 0) goto Label_177; // 0xa3 JumpB
	var_7_int = var_5_int; // 0xa4 Mov
	var_10_int = 0; // 0xa5 PushI
	var_11_bool = var_7_int < var_10_int; // 0xa6 LT
	if(var_11_bool == 0) goto Label_170; // 0xa7 JumpB
	var_7_int = 0; // 0xa8 MovI
	goto Label_173; // 0xa9 Jump
	
Label_173:
	var_2_int = var_7_int; // 0xad TMov
	func_33(var_6_int, var_7_int); // 0xaf Call
	
Label_177:
	return 2; // 0xb1 Return
	
Label_170:
	var_16_bool = var_7_int > var_3_int; // 0xaa GT
	if(var_16_bool == 0) goto Label_173; // 0xab JumpB
	var_7_int = var_3_int; // 0xac MovT
}


main(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; // 0x0 PushV
	var_0_bool = 0; // 0x1 TMovB
	var_1_bool = 0; // 0x2 TMovB
	var_2_int = 0; // 0x3 TMovI
	var_8_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_8_bool); // 0x5 Func
	GetWindowSize(var_6_int, var_7_int); // 0x7 Func
	var_9_int = 14; // 0x9 PushI
	var_3_int = var_7_int - var_9_int; // 0xa Sub2
	var_10_string = "iMouseMax "; // 0xb PushS
	var_11_int = var_10_string + var_3_int; // 0xc Add
	Trace(var_11_int); // 0xd Func
	ProcessEvents(); // 0xf Func
	return 4; // 0x11 Return
}


func_33(var_1_bool, var_2_int)
{
	var_12_int = 0; var_13_int = 0; // 0x21 PushV
	var_14_int = 100; // 0x22 PushI
	var_15_float = var_2_int * var_14_int; // 0x23 Mult
	var_13_int = var_15_float / var_1_bool; // 0x24 Div2
	SendMessageToParent(var_13_int); // 0x25 Func
	return 2; // 0x27 Return
}


func_178(var_2_int, var_13_bool, var_15_int)
{
	var_16_bool = 0; // 0xb3 PushV
	var_16_bool = 0; // 0xb4 MovB
	var_17_bool = var_15_int >= var_2_int; // 0xb5 GE
	if(var_17_bool == 0) goto Label_188; // 0xb6 JumpB
	var_18_int = 14; // 0xb7 PushI
	var_19_int = var_2_int + var_18_int; // 0xb8 Add
	var_20_bool = var_15_int <= var_19_int; // 0xb9 LE
	if(var_20_bool == 0) goto Label_188; // 0xba JumpB
	var_16_bool = 1; // 0xbb MovB
	
Label_188:
	if(var_16_bool == 0) goto Label_191; // 0xbc JumpB
	var_13_bool = 1; // 0xbd MovB
	return 0; // 0xbe Return
	
Label_191:
	var_13_bool = 0; // 0xbf MovB
	return 0; // 0xc0 Return
}


