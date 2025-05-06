task_0_event_5(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x5 PushV
	var_3_bool = var_0_bool == 0; // 0x6 Not
	if(var_3_bool == 0) goto Label_14; // 0x7 JumpB
	GetGameTime(var_2_float); // 0x8 Func
	var_4_int = 240; // 0xa PushI
	var_5_bool = var_2_float >= var_4_int; // 0xb GE
	if(var_5_bool == 0) goto Label_14; // 0xc JumpB
	var_0_bool = 1; // 0xd TMovB
	
Label_14:
	return 2; // 0xe Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


