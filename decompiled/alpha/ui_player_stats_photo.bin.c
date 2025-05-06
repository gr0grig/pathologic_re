task_0_event_0(var_0_string, var_1_string, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x26 PushV
	GetPlayerHealth(var_4_float); // 0x27 Func
	var_5_float = 0.7; // 0x29 PushF
	var_6_bool = var_4_float >= var_5_float; // 0x2a GE
	if(var_6_bool == 0) goto Label_49; // 0x2b JumpB
	var_7_int = 0; // 0x2c PushI
	var_8_int = 0; // 0x2d PushI
	Blit(var_0_string, var_7_int, var_8_int); // 0x2e Func
	goto Label_61; // 0x30 Jump
	
Label_61:
	return 2; // 0x3d Return
	
Label_49:
	var_9_float = 0.2; // 0x31 PushF
	var_10_bool = var_4_float >= var_9_float; // 0x32 GE
	if(var_10_bool == 0) goto Label_57; // 0x33 JumpB
	var_11_int = 0; // 0x34 PushI
	var_12_int = 0; // 0x35 PushI
	Blit(var_12_int, var_11_int, var_12_int); // 0x36 Func
	goto Label_61; // 0x38 Jump
	
Label_57:
	var_13_int = 0; // 0x39 PushI
	var_14_int = 0; // 0x3a PushI
	Blit(var_13_int, var_13_int, var_14_int); // 0x3b Func
}


main(var_0_string, var_1_string, var_2_string)
{
	var_3_bool = 1; // 0x0 PushB
	EnableClipping(var_3_bool); // 0x1 Func
	var_4_int = 0; // 0x3 PushV
	func_62(var_4_int); // 0x4 Call
	var_5_int = 0; // 0x6 PushI
	var_6_bool = var_4_int == var_5_int; // 0x7 Eq
	if(var_6_bool == 0) goto Label_13; // 0x8 JumpB
	var_0_string = "ui/stat_Danko0.png"; // 0x9 TMovS
	var_1_string = "ui/stat_Danko1.png"; // 0xa TMovS
	var_2_string = "ui/stat_Danko2.png"; // 0xb TMovS
	goto Label_26; // 0xc Jump
	
Label_26:
	LoadImage(var_0_string); // 0x1a Func
	LoadImage(var_2_string); // 0x1c Func
	LoadImage(var_1_string); // 0x1e Func
	var_7_bool = 1; // 0x20 PushB
	SetOwnerDraw(var_7_bool); // 0x21 Func
	ProcessEvents(); // 0x23 Func
	return 0; // 0x25 Return
	
Label_13:
	var_8_int = 0; // 0xd PushV
	func_62(var_8_int); // 0xe Call
	var_9_int = 1; // 0x10 PushI
	var_10_bool = var_8_int == var_9_int; // 0x11 Eq
	if(var_10_bool == 0) goto Label_23; // 0x12 JumpB
	var_0_string = "ui/stat_Burah0.png"; // 0x13 TMovS
	var_1_string = "ui/stat_Burah1.png"; // 0x14 TMovS
	var_2_string = "ui/stat_Burah2.png"; // 0x15 TMovS
	goto Label_26; // 0x16 Jump
	
Label_23:
	var_0_string = "ui/stat_Klara0.png"; // 0x17 TMovS
	var_1_string = "ui/stat_Klara1.png"; // 0x18 TMovS
	var_2_string = "ui/stat_Klara2.png"; // 0x19 TMovS
}


func_62(var_4_int)
{
	var_4_int = 0; // 0x3e MovI
	return 0; // 0x3f Return
}


