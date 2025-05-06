task_0_event_5(var_0_object)
{
	var_1_bool = 0; // 0x4 PushV
	func_28(var_1_bool); // 0x5 NEW_2
	if(var_1_bool == 0) goto Label_16; // 0x7 JumpB
	var_6_bool = 0; // 0x8 PushV
	var_6_bool = 1; // 0x9 MovB
	func_38(var_6_bool); // 0xa NEW_2
	func_65(var_0_object); // 0xd NEW_2
	goto Label_23; // 0xf Jump
	
Label_23:
	return 0; // 0x17 Return
	
Label_16:
	var_55_bool = 0; // 0x10 PushV
	var_55_bool = 0; // 0x11 MovB
	func_38(var_55_bool); // 0x12 NEW_2
	func_116(var_0_object); // 0x15 NEW_2
}


task_0_event_6(var_0_object)
{
	func_116(var_0_object); // 0x19 NEW_2
	return 0; // 0x1b Return
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_65(var_0_object)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_object = Obj(); // 0x41 PushV
	var_30_cvector = CVector(0,0,0); // 0x42 PushV
	func_122(var_30_cvector); // 0x43 NEW_2
	var_33_cvector = CVector(0.0, 150.0, 0.0); // 0x45 PushVec
	var_25_cvector = var_30_cvector + var_33_cvector; // 0x46 Add2
	RandVec2D(var_27_float, var_28_float); // 0x47 Func
	var_34_float = GetByIndex(var_26_cvector, 0); // 0x49 PushE
	var_34_float = var_27_float; // 0x4a Mov
	SetByIndex(var_26_cvector, 0) = var_34_float; // 0x4b PopE
	var_35_float = GetByIndex(var_26_cvector, 1); // 0x4c PushE
	var_35_float = 0; // 0x4d MovI
	SetByIndex(var_26_cvector, 1) = var_35_float; // 0x4e PopE
	var_36_float = GetByIndex(var_26_cvector, 2); // 0x4f PushE
	var_36_float = var_28_float; // 0x50 Mov
	SetByIndex(var_26_cvector, 2) = var_36_float; // 0x51 PopE
	GetScene(var_29_object); // 0x52 Func
	var_37_bool = var_29_object == 0; // 0x54 Not
	if(var_37_bool == 0) goto Label_90; // 0x55 JumpB
	var_38_string = "Barricade null scene"; // 0x56 PushS
	Trace(var_38_string); // 0x57 Func
	return 10; // 0x59 Return
	
Label_90:
	var_39_string = "pers_soldat"; // 0x5a PushS
	var_40_string = "soldier.xml"; // 0x5b PushS
	var_41_bool = 1; // 0x5c PushB
	AddStationaryActor(var_0_object, var_25_cvector, var_26_cvector, var_39_string, var_40_string, var_41_bool); // 0x5d ObjFunc
	var_42_bool = var_0_object == 0; // 0x5f NullEq
	if(var_42_bool == 0) goto Label_101; // 0x60 JumpB
	var_43_string = "Error adding soldier"; // 0x61 PushS
	Trace(var_43_string); // 0x62 Func
	goto Label_114; // 0x64 Jump
	
Label_114:
	return 10; // 0x72 Return
	
Label_101:
	var_44_string = "Soldier was added: "; // 0x65 PushS
	var_45_float = GetByIndex(var_25_cvector, 0); // 0x66 PushE
	var_46_int = var_44_string + var_45_float; // 0x67 Add
	var_47_string = " "; // 0x68 PushS
	var_48_int = var_46_int + var_47_string; // 0x69 Add
	var_49_float = GetByIndex(var_25_cvector, 1); // 0x6a PushE
	var_50_int = var_48_int + var_49_float; // 0x6b Add
	var_51_string = " "; // 0x6c PushS
	var_52_int = var_50_int + var_51_string; // 0x6d Add
	var_53_float = GetByIndex(var_25_cvector, 2); // 0x6e PushE
	var_54_int = var_52_int + var_53_float; // 0x6f Add
	Trace(var_54_int); // 0x70 Func
}


func_38(var_6_bool)
{
	var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); // 0x26 PushV
	SetVisibility(var_6_bool); // 0x27 Func
	GetPFPolyID(var_9_int); // 0x29 Func
	var_11_int = -1; // 0x2b PushI
	var_12_bool = var_9_int != var_11_int; // 0x2c Neq
	if(var_12_bool == 0) goto Label_64; // 0x2d JumpB
	GetMainOutdoorScene(var_10_object); // 0x2e Func
	var_13_bool = var_6_bool; // 0x30 Push
	if(var_13_bool == 0) goto Label_60; // 0x31 JumpB
	var_14_string = "Blocking polygons: "; // 0x32 PushS
	var_15_int = 1016; // 0x33 PushI
	var_16_int = var_9_int & var_15_int; // 0x34 And
	var_17_int = var_14_string + var_16_int; // 0x35 Add
	Trace(var_17_int); // 0x36 Func
	var_18_int = 1016; // 0x38 PushI
	BlockPolygons(var_9_int, var_18_int); // 0x39 ObjFunc
	goto Label_63; // 0x3b Jump
	
Label_63:
	var_10_object = 0; // 0x3f SetNull
	
Label_64:
	return 4; // 0x40 Return
	
Label_60:
	var_19_int = 1016; // 0x3c PushI
	UnblockPolygons(var_9_int, var_19_int); // 0x3d ObjFunc
}


func_116(var_0_object)
{
	var_1_object = var_0_object; // 0x74 PushT
	if(var_1_object == 0) goto Label_121; // 0x75 JumpB
	Remove(); // 0x76 TObjFunc
	var_0_object = 0; // 0x78 SetNullT
	
Label_121:
	return 0; // 0x79 Return
}


func_122(var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x7a PushV
	GetPosition(var_32_cvector); // 0x7b Func
	var_30_cvector = var_32_cvector; // 0x7d Mov
	return 2; // 0x7e Return
}


func_28(var_1_bool)
{
	var_2_float = 0; var_3_float = 0; // 0x1c PushV
	GetGameTime(var_3_float); // 0x1d Func
	var_4_int = 198; // 0x1f PushI
	var_5_bool = var_3_float > var_4_int; // 0x20 GT
	if(var_5_bool == 0) goto Label_36; // 0x21 JumpB
	var_1_bool = 1; // 0x22 MovB
	return 2; // 0x23 Return
	
Label_36:
	var_1_bool = 0; // 0x24 MovB
	return 2; // 0x25 Return
}


