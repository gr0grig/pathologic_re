task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "cleanup"; // 0x6 PushS
	var_3_bool = var_1_string == var_2_string; // 0x7 Eq
	if(var_3_bool == 0) goto Label_11; // 0x8 JumpB
	var_0_bool = 1; // 0x9 TMovB
	goto Label_15; // 0xa Jump
	
Label_15:
	return 0; // 0xf Return
	
Label_11:
	var_4_string = "restore"; // 0xb PushS
	var_5_bool = var_1_string == var_4_string; // 0xc Eq
	if(var_5_bool == 0) goto Label_15; // 0xd JumpB
	var_0_bool = 0; // 0xe TMovB
}


task_0_event_5(var_0_bool)
{
	var_1_bool = var_0_bool == 0; // 0x10 Not
	if(var_1_bool == 0) goto Label_25; // 0x11 JumpB
	var_2_bool = 1; // 0x12 PushB
	SetVisibility(var_2_bool); // 0x13 Func
	var_3_bool = 0; // 0x15 PushV
	var_3_bool = 1; // 0x16 MovB
	func_38(var_3_bool); // 0x17 NEW_2
	
Label_25:
	return 0; // 0x19 Return
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x1a PushT
	if(var_1_bool == 0) goto Label_37; // 0x1b JumpB
	var_2_bool = 0; // 0x1c PushV
	var_2_bool = 0; // 0x1d MovB
	func_38(var_2_bool); // 0x1e NEW_2
	var_17_object = Obj(); // 0x20 PushV
	func_67(var_17_object); // 0x21 NEW_2
	RemoveActor(var_17_object); // 0x23 Func
	
Label_37:
	return 0; // 0x25 Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_67(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x43 PushV
	self(var_19_object); // 0x44 Func
	var_17_object = var_19_object; // 0x46 Mov
	return 2; // 0x47 Return
}


func_38(var_2_bool)
{
	var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); // 0x26 PushV
	GetPFPolyID(var_5_int); // 0x27 Func
	var_7_int = -1; // 0x29 PushI
	var_8_bool = var_5_int != var_7_int; // 0x2a Neq
	if(var_8_bool == 0) goto Label_63; // 0x2b JumpB
	GetMainOutdoorScene(var_6_object); // 0x2c Func
	var_9_bool = var_2_bool; // 0x2e Push
	if(var_9_bool == 0) goto Label_58; // 0x2f JumpB
	var_10_string = "Blocking polygons: "; // 0x30 PushS
	var_11_int = 1016; // 0x31 PushI
	var_12_int = var_5_int & var_11_int; // 0x32 And
	var_13_int = var_10_string + var_12_int; // 0x33 Add
	Trace(var_13_int); // 0x34 Func
	var_14_int = 1016; // 0x36 PushI
	BlockPolygons(var_5_int, var_14_int); // 0x37 ObjFunc
	goto Label_61; // 0x39 Jump
	
Label_61:
	var_6_object = 0; // 0x3d SetNull
	goto Label_66; // 0x3e Jump
	
Label_66:
	return 4; // 0x42 Return
	
Label_58:
	var_15_int = 1016; // 0x3a PushI
	UnblockPolygons(var_5_int, var_15_int); // 0x3b ObjFunc
	
Label_63:
	var_16_string = "ERROR: Can't find PF polygon to block"; // 0x3f PushS
	Trace(var_16_string); // 0x40 Func
}


