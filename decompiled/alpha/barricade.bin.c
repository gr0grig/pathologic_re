task_0_event_5(var_0_object)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_5(var_0_object)
{
	var_1_bool = 0; // 0xa PushV
	func_39(var_1_bool); // 0xb Call
	if(var_1_bool == 0) goto Label_22; // 0xd JumpB
	var_6_bool = 0; // 0xe PushV
	var_6_bool = 1; // 0xf MovB
	func_49(var_6_bool); // 0x10 Call
	func_76(var_0_object); // 0x13 Call
	goto Label_29; // 0x15 Jump
	
Label_29:
	return 0; // 0x1d Return
	
Label_22:
	var_55_bool = 0; // 0x16 PushV
	var_55_bool = 0; // 0x17 MovB
	func_49(var_55_bool); // 0x18 Call
	func_127(var_0_object); // 0x1b Call
}


task_1_event_6(var_0_object)
{
	func_127(var_0_object); // 0x1f Call
	TaskCall(0); // 0x22 TaskCall
	func_0(); // 0x23 Call
	TaskReturn(); // 0x24 TaskReturn
	return 0; // 0x26 Return
}


main(var_0_object)
{
	
Label_6:
	Hold(); // 0x6 Func
	goto Label_6; // 0x8 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_133(var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x85 PushV
	GetPosition(var_32_cvector); // 0x86 Func
	var_30_cvector = var_32_cvector; // 0x88 Mov
	return 2; // 0x89 Return
}


func_39(var_1_bool)
{
	var_2_float = 0; var_3_float = 0; // 0x27 PushV
	GetGameTime(var_3_float); // 0x28 Func
	var_4_int = 198; // 0x2a PushI
	var_5_bool = var_3_float > var_4_int; // 0x2b GT
	if(var_5_bool == 0) goto Label_47; // 0x2c JumpB
	var_1_bool = 1; // 0x2d MovB
	return 2; // 0x2e Return
	
Label_47:
	var_1_bool = 0; // 0x2f MovB
	return 2; // 0x30 Return
}


func_76(var_0_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_object = Obj(); // 0x4c PushV
	var_30_cvector = CVector(0,0,0); // 0x4d PushV
	func_133(var_30_cvector); // 0x4e Call
	var_33_cvector = CVector(0.0, 150.0, 0.0); // 0x50 PushVec
	var_25_cvector = var_30_cvector + var_33_cvector; // 0x51 Add2
	RandVec2D(var_27_float, var_28_float); // 0x52 Func
	var_34_float = GetByIndex(var_26_cvector, 0); // 0x54 PushE
	var_34_float = var_27_float; // 0x55 Mov
	SetByIndex(var_26_cvector, 0) = var_34_float; // 0x56 PopE
	var_35_float = GetByIndex(var_26_cvector, 1); // 0x57 PushE
	var_35_float = 0; // 0x58 MovI
	SetByIndex(var_26_cvector, 1) = var_35_float; // 0x59 PopE
	var_36_float = GetByIndex(var_26_cvector, 2); // 0x5a PushE
	var_36_float = var_28_float; // 0x5b Mov
	SetByIndex(var_26_cvector, 2) = var_36_float; // 0x5c PopE
	GetScene(var_29_object); // 0x5d Func
	var_37_bool = var_29_object == 0; // 0x5f Not
	if(var_37_bool == 0) goto Label_101; // 0x60 JumpB
	var_38_string = "Barricade null scene"; // 0x61 PushS
	Trace(var_38_string); // 0x62 Func
	return 10; // 0x64 Return
	
Label_101:
	var_39_string = "pers_soldat"; // 0x65 PushS
	var_40_string = "soldier.xml"; // 0x66 PushS
	var_41_bool = 1; // 0x67 PushB
	AddStationaryActor(var_0_object, var_25_cvector, var_26_cvector, var_39_string, var_40_string, var_41_bool); // 0x68 ObjFunc
	var_42_bool = var_0_object == 0; // 0x6a NullEq
	if(var_42_bool == 0) goto Label_112; // 0x6b JumpB
	var_43_string = "Error adding soldier"; // 0x6c PushS
	Trace(var_43_string); // 0x6d Func
	goto Label_125; // 0x6f Jump
	
Label_125:
	return 10; // 0x7d Return
	
Label_112:
	var_44_string = "Soldier was added: "; // 0x70 PushS
	var_45_float = GetByIndex(var_25_cvector, 0); // 0x71 PushE
	var_46_int = var_44_string + var_45_float; // 0x72 Add
	var_47_string = " "; // 0x73 PushS
	var_48_int = var_46_int + var_47_string; // 0x74 Add
	var_49_float = GetByIndex(var_25_cvector, 1); // 0x75 PushE
	var_50_int = var_48_int + var_49_float; // 0x76 Add
	var_51_string = " "; // 0x77 PushS
	var_52_int = var_50_int + var_51_string; // 0x78 Add
	var_53_float = GetByIndex(var_25_cvector, 2); // 0x79 PushE
	var_54_int = var_52_int + var_53_float; // 0x7a Add
	Trace(var_54_int); // 0x7b Func
}


func_49(var_6_bool)
{
	var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); // 0x31 PushV
	SetVisibility(var_6_bool); // 0x32 Func
	GetPFPolyID(var_9_int); // 0x34 Func
	var_11_int = -1; // 0x36 PushI
	var_12_bool = var_9_int != var_11_int; // 0x37 Neq
	if(var_12_bool == 0) goto Label_75; // 0x38 JumpB
	var_13_string = "Blocking polygons: "; // 0x39 PushS
	var_14_int = 248; // 0x3a PushI
	var_15_int = var_9_int & var_14_int; // 0x3b And
	var_16_int = var_13_string + var_15_int; // 0x3c Add
	Trace(var_16_int); // 0x3d Func
	GetMainOutdoorScene(var_10_object); // 0x3f Func
	var_17_bool = var_6_bool; // 0x41 Push
	if(var_17_bool == 0) goto Label_71; // 0x42 JumpB
	var_18_int = 248; // 0x43 PushI
	BlockPolygons(var_9_int, var_18_int); // 0x44 ObjFunc
	goto Label_74; // 0x46 Jump
	
Label_74:
	var_10_object = 0; // 0x4a SetNull
	
Label_75:
	return 4; // 0x4b Return
	
Label_71:
	var_19_int = 248; // 0x47 PushI
	UnblockPolygons(var_9_int, var_19_int); // 0x48 ObjFunc
}


func_127(var_0_object)
{
	var_1_object = var_0_object; // 0x7f PushT
	if(var_1_object == 0) goto Label_132; // 0x80 JumpB
	Remove(); // 0x81 TObjFunc
	var_0_object = 0; // 0x83 SetNullT
	
Label_132:
	return 0; // 0x84 Return
}


