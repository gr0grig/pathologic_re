task_0_event_5()
{
	var_0_bool = 1; // 0x15 PushB
	SetVisibility(var_0_bool); // 0x16 Func
	StopGroup0(); // 0x18 Func
	return 0; // 0x1a Return
}


main()
{
	var_0_int = 0; var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); // 0x0 PushV
	GetPFPolyID(var_2_int); // 0x1 Func
	var_4_int = -1; // 0x3 PushI
	var_5_bool = var_2_int != var_4_int; // 0x4 Neq
	if(var_5_bool == 0) goto Label_18; // 0x5 JumpB
	var_6_string = "Gun blocking polygon: "; // 0x6 PushS
	var_7_int = 1016; // 0x7 PushI
	var_8_int = var_2_int & var_7_int; // 0x8 And
	var_9_int = var_6_string + var_8_int; // 0x9 Add
	Trace(var_9_int); // 0xa Func
	GetMainOutdoorScene(var_3_object); // 0xc Func
	var_10_int = 1016; // 0xe PushI
	BlockPolygons(var_2_int, var_10_int); // 0xf ObjFunc
	var_3_object = 0; // 0x11 SetNull
	
Label_18:
	Hold(); // 0x12 Func
	return 4; // 0x14 Return
}


