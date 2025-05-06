task_0_event_0(var_0_string)
{
	var_1_int = 0; // 0x1c PushI
	var_2_int = 0; // 0x1d PushI
	Blit(var_0_string, var_1_int, var_2_int); // 0x1e Func
	return 0; // 0x20 Return
}


main(var_0_string)
{
	var_1_bool = 1; // 0x0 PushB
	EnableClipping(var_1_bool); // 0x1 Func
	var_2_int = 0; // 0x3 PushV
	func_33(var_2_int); // 0x4 NEW_2
	var_6_int = 0; // 0x6 PushI
	var_7_bool = var_2_int == var_6_int; // 0x7 Eq
	if(var_7_bool == 0) goto Label_11; // 0x8 JumpB
	var_0_string = "ui/stat_Danko.png"; // 0x9 TMovS
	goto Label_20; // 0xa Jump
	
Label_20:
	LoadImage(var_0_string); // 0x14 Func
	var_8_bool = 1; // 0x16 PushB
	SetOwnerDraw(var_8_bool); // 0x17 Func
	ProcessEvents(); // 0x19 Func
	return 0; // 0x1b Return
	
Label_11:
	var_9_int = 0; // 0xb PushV
	func_33(var_9_int); // 0xc NEW_2
	var_10_int = 1; // 0xe PushI
	var_11_bool = var_9_int == var_10_int; // 0xf Eq
	if(var_11_bool == 0) goto Label_19; // 0x10 JumpB
	var_0_string = "ui/stat_Burah.png"; // 0x11 TMovS
	goto Label_20; // 0x12 Jump
	
Label_19:
	var_0_string = "ui/stat_Klara.png"; // 0x13 TMovS
}


func_33(var_2_int)
{
	var_3_int = 0; var_4_int = 0; // 0x21 PushV
	var_5_string = "branch"; // 0x22 PushS
	GetVariable(var_5_string, var_4_int); // 0x23 Func
	var_2_int = var_4_int; // 0x25 Mov
	return 2; // 0x26 Return
}


