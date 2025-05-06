task_0_event_23(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_float = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_float = 0; // 0x4e PushV
	var_14_bool = var_0_object == 0; // 0x4f Not
	if(var_14_bool == 0) goto Label_82; // 0x50 JumpB
	return 12; // 0x51 Return
	
Label_82:
	IsPlayerActor(var_1_object, var_8_bool); // 0x52 Func
	var_15_bool = var_8_bool; // 0x54 Push
	if(var_15_bool == 0) goto Label_111; // 0x55 JumpB
	EventDisable(23); // 0x56 EventDisable
	size(var_9_int); // 0x57 TObjFunc
	var_10_int = 0; // 0x59 MovI
	
Label_90:
	var_16_bool = var_10_int < var_9_int; // 0x5a LT
	if(var_16_bool == 0) goto Label_110; // 0x5b JumpB
	get(var_11_object, var_10_int); // 0x5c TObjFunc
	GetActor(var_12_object); // 0x5e ObjFunc
	var_17_object = var_12_object; // 0x60 Push
	if(var_17_object == 0) goto Label_105; // 0x61 JumpB
	var_18_float = 0.35; // 0x62 PushF
	rand(var_13_float, var_18_float); // 0x63 Func
	Sleep(var_13_float); // 0x65 Func
	SimulateAttack(var_12_object, var_1_object); // 0x67 Func
	
Label_105:
	var_12_object = 0; // 0x69 SetNull
	var_11_object = 0; // 0x6a SetNull
	var_19_int = 1; // 0x6b PushI
	var_10_int = var_10_int + var_19_int; // 0x6c Add2
	goto Label_90; // 0x6d Jump
	
Label_110:
	EventEnable(23); // 0x6e EventEnable
	
Label_111:
	return 12; // 0x6f Return
}


main(var_0_object)
{
	var_1_object = Obj(); // 0x0 PushV
	func_112(var_1_object); // 0x1 NEW_2
	var_0_object = var_1_object; // 0x2 TMov
	func_11(); // 0x5 NEW_2
	
Label_7:
	Hold(); // 0x7 Func
	goto Label_7; // 0x9 Jump
}


func_112(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x70 PushV
	CreateObjectVector(var_3_object); // 0x71 Func
	var_1_object = var_3_object; // 0x73 Mov
	return 2; // 0x74 Return
}


func_11()
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xb PushV
	GetMainOutdoorScene(var_9_object); // 0xc Func
	var_10_int = 1; // 0xe MovI
	
Label_15:
	var_14_int = 5; // 0xf PushI
	var_15_bool = var_10_int <= var_14_int; // 0x10 LE
	if(var_15_bool == 0) goto Label_31; // 0x11 JumpB
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x12 PushV
	var_17_object = var_9_object; // 0x13 Mov
	var_21_string = "pt_gun_soldier"; // 0x14 PushS
	var_18_string = var_21_string + var_10_int; // 0x15 Add2
	var_19_string = "pers_soldat"; // 0x16 MovS
	var_20_string = "gun_sentry.xml"; // 0x17 MovS
	func_118(var_17_object, var_18_string, var_19_string, var_20_string); // 0x18 NEW_2
	add(var_16_object); // 0x1a TObjFunc
	var_35_int = 1; // 0x1c PushI
	var_10_int = var_10_int + var_35_int; // 0x1d Add2
	goto Label_15; // 0x1e Jump
	
Label_31:
	var_11_int = 1; // 0x1f MovI
	
Label_32:
	var_36_int = 2; // 0x20 PushI
	var_37_bool = var_11_int <= var_36_int; // 0x21 LE
	if(var_37_bool == 0) goto Label_46; // 0x22 JumpB
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = ""; // 0x23 PushV
	var_39_object = var_9_object; // 0x24 Mov
	var_43_string = "pt_gun_sanitar"; // 0x25 PushS
	var_40_string = var_43_string + var_11_int; // 0x26 Add2
	var_41_string = "pers_sanitar"; // 0x27 MovS
	var_42_string = "d9q01_sanitar.xml"; // 0x28 MovS
	func_118(var_39_object, var_40_string, var_41_string, var_42_string); // 0x29 NEW_2
	var_44_int = 1; // 0x2b PushI
	var_11_int = var_11_int + var_44_int; // 0x2c Add2
	goto Label_32; // 0x2d Jump
	
Label_46:
	var_12_int = 1; // 0x2e MovI
	
Label_47:
	var_45_int = 3; // 0x2f PushI
	var_46_bool = var_12_int <= var_45_int; // 0x30 LE
	if(var_46_bool == 0) goto Label_61; // 0x31 JumpB
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x32 PushV
	var_48_object = var_9_object; // 0x33 Mov
	var_52_string = "pt_gun_guard_soldier"; // 0x34 PushS
	var_49_string = var_52_string + var_12_int; // 0x35 Add2
	var_50_string = "pers_soldat"; // 0x36 MovS
	var_51_string = "soldier.xml"; // 0x37 MovS
	func_118(var_48_object, var_49_string, var_50_string, var_51_string); // 0x38 NEW_2
	var_53_int = 1; // 0x3a PushI
	var_12_int = var_12_int + var_53_int; // 0x3b Add2
	goto Label_47; // 0x3c Jump
	
Label_61:
	var_13_int = 1; // 0x3d MovI
	
Label_62:
	var_54_int = 2; // 0x3e PushI
	var_55_bool = var_13_int <= var_54_int; // 0x3f LE
	if(var_55_bool == 0) goto Label_76; // 0x40 JumpB
	var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = ""; // 0x41 PushV
	var_57_object = var_9_object; // 0x42 Mov
	var_61_string = "pt_gun_guard_sanitar"; // 0x43 PushS
	var_58_string = var_61_string + var_13_int; // 0x44 Add2
	var_59_string = "pers_sanitar"; // 0x45 MovS
	var_60_string = "sanitar_stat.xml"; // 0x46 MovS
	func_118(var_57_object, var_58_string, var_59_string, var_60_string); // 0x47 NEW_2
	var_62_int = 1; // 0x49 PushI
	var_13_int = var_13_int + var_62_int; // 0x4a Add2
	goto Label_62; // 0x4b Jump
	
Label_76:
	return 10; // 0x4c Return
}


func_118(var_16_object, var_18_string, var_19_string, var_20_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x76 PushV
	GetLocator(var_18_string, var_26_bool, var_27_cvector, var_28_cvector); // 0x77 ObjFunc
	var_30_bool = var_26_bool == 0; // 0x79 Not
	if(var_30_bool == 0) goto Label_131; // 0x7a JumpB
	var_31_string = "Locator "; // 0x7b PushS
	var_32_int = var_31_string + var_18_string; // 0x7c Add
	var_33_string = " doesn't exist"; // 0x7d PushS
	var_34_int = var_32_int + var_33_string; // 0x7e Add
	Trace(var_34_int); // 0x7f Func
	var_29_object = 0; // 0x81 SetNull
	goto Label_133; // 0x82 Jump
	
Label_133:
	var_16_object = var_29_object; // 0x85 Mov
	return 8; // 0x86 Return
	
Label_131:
	AddStationaryActor(var_29_object, var_27_cvector, var_28_cvector, var_19_string, var_20_string); // 0x83 ObjFunc
}


