task_0_event_16(var_0_bool, var_1_object, var_2_string)
{
	return 0; // 0x13 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x14 PushV
	var_4_string = "cleanup"; // 0x15 PushS
	var_5_bool = var_1_string == var_4_string; // 0x16 Eq
	if(var_5_bool == 0) goto Label_35; // 0x17 JumpB
	var_0_bool = 1; // 0x18 TMovB
	IsLoaded(var_3_bool); // 0x19 Func
	var_6_bool = var_3_bool == 0; // 0x1b Not
	if(var_6_bool == 0) goto Label_34; // 0x1c JumpB
	var_7_object = Obj(); // 0x1d PushV
	func_48(var_7_object); // 0x1e NEW_2
	RemoveActor(var_7_object); // 0x20 Func
	
Label_34:
	goto Label_39; // 0x22 Jump
	
Label_39:
	return 2; // 0x27 Return
	
Label_35:
	var_10_string = "restore"; // 0x23 PushS
	var_11_bool = var_1_string == var_10_string; // 0x24 Eq
	if(var_11_bool == 0) goto Label_39; // 0x25 JumpB
	var_0_bool = 0; // 0x26 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x28 PushT
	if(var_1_bool == 0) goto Label_47; // 0x29 JumpB
	var_2_object = Obj(); // 0x2a PushV
	func_48(var_2_object); // 0x2b NEW_2
	RemoveActor(var_2_object); // 0x2d Func
	
Label_47:
	return 0; // 0x2f Return
}


main(var_0_bool)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "disease"; // 0x1 PushS
	var_4_int = 1; // 0x2 PushI
	SetProperty(var_3_string, var_4_int); // 0x3 Func
	var_5_string = "corpse"; // 0x5 PushS
	FindGeometry(var_5_string, var_2_object); // 0x6 Func
	var_6_bool = 1; // 0x8 PushB
	Enable(var_6_bool); // 0x9 ObjFunc
	
Label_11:
	var_7_bool = 1; // 0xb PushB
	if(var_7_bool == 0) goto Label_16; // 0xc JumpB
	Hold(); // 0xd Func
	goto Label_11; // 0xf Jump
	
Label_16:
	return 2; // 0x10 Return
}


func_48(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x30 PushV
	self(var_4_object); // 0x31 Func
	var_2_object = var_4_object; // 0x33 Mov
	return 2; // 0x34 Return
}


