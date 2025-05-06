task_0_event_0(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x7 PushT
	if(var_1_bool == 0) goto Label_14; // 0x8 JumpB
	var_2_string = "default"; // 0x9 PushS
	var_3_int = 0; // 0xa PushI
	var_4_int = 0; // 0xb PushI
	Blit(var_2_string, var_3_int, var_4_int); // 0xc Func
	
Label_14:
	return 0; // 0xe Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_string, var_3_object)
{
	var_4_int = 0; // 0x10 PushI
	var_0_bool = var_1_int != var_4_int; // 0x11 Neq2
	return 0; // 0x12 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_bool = 1; // 0x1 PushB
	SetOwnerDraw(var_1_bool); // 0x2 Func
	ProcessEvents(); // 0x4 Func
	return 0; // 0x6 Return
}


