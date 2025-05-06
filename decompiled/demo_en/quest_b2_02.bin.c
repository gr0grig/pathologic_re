task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	Trace(var_3_string); // 0x1a Func
	var_4_string = "move_bride"; // 0x1c PushS
	var_5_bool = var_3_string == var_4_string; // 0x1d Eq
	if(var_5_bool == 0) goto Label_37; // 0x1e JumpB
	var_2_bool = 1; // 0x1f TMovB
	var_6_object = var_1_object; // 0x20 PushT
	if(var_6_object == 0) goto Label_36; // 0x21 JumpB
	Remove(); // 0x22 TObjFunc
	
Label_36:
	goto Label_50; // 0x24 Jump
	
Label_50:
	return 0; // 0x32 Return
	
Label_37:
	var_7_string = "fail"; // 0x25 PushS
	var_8_bool = var_3_string == var_7_string; // 0x26 Eq
	if(var_8_bool == 0) goto Label_44; // 0x27 JumpB
	func_62(); // 0x29 NEW_2
	goto Label_50; // 0x2b Jump
	
Label_44:
	var_42_string = "completed"; // 0x2c PushS
	var_43_bool = var_3_string == var_42_string; // 0x2d Eq
	if(var_43_bool == 0) goto Label_50; // 0x2e JumpB
	func_70(); // 0x30 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	func_51(); // 0x87 NEW_2
	return 0; // 0x89 Return
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_4_object); // 0x1 Func
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = ""; // 0x3 PushV
	var_6_object = var_4_object; // 0x4 Mov
	var_7_string = "pt_b2q02_gatherer"; // 0x5 MovS
	var_8_string = "pers_morlok"; // 0x6 MovS
	var_9_string = "b2q02_gatherer.xml"; // 0x7 MovS
	func_144(var_6_object, var_7_string, var_8_string, var_9_string); // 0x8 NEW_2
	var_0_object = var_5_object; // 0x9 TMov
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = ""; var_27_string = ""; // 0xb PushV
	var_24_object = var_4_object; // 0xc Mov
	var_25_string = "pt_b2q02_bride1"; // 0xd MovS
	var_26_string = "pers_nudegirl"; // 0xe MovS
	var_27_string = "b2q02_bride.xml"; // 0xf MovS
	func_144(var_24_object, var_25_string, var_26_string, var_27_string); // 0x10 NEW_2
	var_1_object = var_23_object; // 0x11 TMov
	var_28_int = 0; // 0x13 PushV
	var_28_int = 2; // 0x14 MovI
	func_114(var_28_int); // 0x15 NEW_2
	return 2; // 0x17 Return
}


func_70()
{
	var_44_string = "b2q02"; // 0x46 PushS
	var_45_int = 1000; // 0x47 PushI
	SetVariable(var_44_string, var_45_int); // 0x48 Func
	func_78(); // 0x4b NEW_2
	return 0; // 0x4d Return
}


func_138(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x8a PushV
	self(var_46_object); // 0x8b Func
	var_44_object = var_46_object; // 0x8d Mov
	return 2; // 0x8e Return
}


func_78()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x4e PushV
	EventDisable(26); // 0x4f EventDisable
	var_36_object = var_1_object; // 0x50 PushT
	if(var_36_object == 0) goto Label_84; // 0x51 JumpB
	Remove(); // 0x52 TObjFunc
	
Label_84:
	var_37_object = var_0_object; // 0x54 PushT
	if(var_37_object == 0) goto Label_88; // 0x55 JumpB
	Remove(); // 0x56 TObjFunc
	
Label_88:
	GetMainOutdoorScene(var_35_object); // 0x58 Func
	var_38_bool = var_2_bool; // 0x5a PushT
	if(var_38_bool == 0) goto Label_100; // 0x5b JumpB
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; var_43_string = ""; // 0x5c PushV
	var_40_object = var_35_object; // 0x5d Mov
	var_41_string = "pt_b2q02_bride2"; // 0x5e MovS
	var_42_string = "pers_nudegirl"; // 0x5f MovS
	var_43_string = "b2q02_bride2.xml"; // 0x60 MovS
	func_144(var_40_object, var_41_string, var_42_string, var_43_string); // 0x61 NEW_2
	goto Label_107; // 0x63 Jump
	
Label_107:
	var_44_object = Obj(); // 0x6b PushV
	func_138(var_44_object); // 0x6c NEW_2
	RemoveActor(var_44_object); // 0x6e Func
	return 2; // 0x70 Return
	
Label_100:
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x64 PushV
	var_48_object = var_35_object; // 0x65 Mov
	var_49_string = "pt_b2q02_bride1"; // 0x66 MovS
	var_50_string = "pers_nudegirl"; // 0x67 MovS
	var_51_string = "b2q02_bride2.xml"; // 0x68 MovS
	func_144(var_48_object, var_49_string, var_50_string, var_51_string); // 0x69 NEW_2
}


func_144(var_5_object, var_7_string, var_8_string, var_9_string)
{
	var_10_bool = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); // 0x90 PushV
	GetLocator(var_7_string, var_14_bool, var_15_cvector, var_16_cvector); // 0x91 ObjFunc
	var_18_bool = var_14_bool == 0; // 0x93 Not
	if(var_18_bool == 0) goto Label_157; // 0x94 JumpB
	var_19_string = "Locator "; // 0x95 PushS
	var_20_int = var_19_string + var_7_string; // 0x96 Add
	var_21_string = " doesn't exist"; // 0x97 PushS
	var_22_int = var_20_int + var_21_string; // 0x98 Add
	Trace(var_22_int); // 0x99 Func
	var_17_object = 0; // 0x9b SetNull
	goto Label_159; // 0x9c Jump
	
Label_159:
	var_5_object = var_17_object; // 0x9f Mov
	return 8; // 0xa0 Return
	
Label_157:
	AddStationaryActor(var_17_object, var_15_cvector, var_16_cvector, var_8_string, var_9_string); // 0x9d ObjFunc
}


func_114(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0x72 PushV
	GetGameTime(var_30_float); // 0x73 Func
	var_31_int = 24; // 0x75 PushI
	var_32_float = var_28_int * var_31_int; // 0x76 Mult
	var_33_bool = var_30_float >= var_32_float; // 0x77 GE
	if(var_33_bool == 0) goto Label_125; // 0x78 JumpB
	func_78(); // 0x7a NEW_2
	goto Label_132; // 0x7c Jump
	
Label_132:
	return 2; // 0x84 Return
	
Label_125:
	var_52_int = 0; // 0x7d PushI
	var_53_int = 24; // 0x7e PushI
	var_54_float = var_28_int * var_53_int; // 0x7f Mult
	SetTimeEvent(var_52_int, var_54_float); // 0x80 Func
	Hold(); // 0x82 Func
}


func_51()
{
	var_5_int = 0; var_6_int = 0; // 0x33 PushV
	var_7_string = "b2q02"; // 0x34 PushS
	GetVariable(var_7_string, var_6_int); // 0x35 Func
	var_8_int = 1000; // 0x37 PushI
	var_9_bool = var_6_int != var_8_int; // 0x38 Neq
	if(var_9_bool == 0) goto Label_61; // 0x39 JumpB
	func_62(); // 0x3b NEW_2
	
Label_61:
	return 2; // 0x3d Return
}


func_62()
{
	var_10_string = "b2q02"; // 0x3e PushS
	var_11_int = -1; // 0x3f PushI
	SetVariable(var_10_string, var_11_int); // 0x40 Func
	func_78(); // 0x43 NEW_2
	return 0; // 0x45 Return
}


