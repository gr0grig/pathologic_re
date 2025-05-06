task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x4 PushV
	Trace(var_1_string); // 0x5 Func
	var_8_string = "woman"; // 0x7 PushS
	var_9_bool = var_1_string == var_8_string; // 0x8 Eq
	if(var_9_bool == 0) goto Label_31; // 0x9 JumpB
	var_10_string = "dt_house_1_07"; // 0xa PushS
	FindActor(var_5_object, var_10_string); // 0xb Func
	var_11_int = 200; // 0xd PushI
	var_12_bool = 1; // 0xe PushB
	EnableSubset(var_11_int, var_12_bool); // 0xf ObjFunc
	var_13_string = "d2q01_house1"; // 0x11 PushS
	GetSceneByName(var_6_object, var_13_string); // 0x12 Func
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = ""; // 0x14 PushV
	var_15_object = var_6_object; // 0x15 Mov
	var_16_string = "pt_woman"; // 0x16 MovS
	var_17_string = "pers_woman"; // 0x17 MovS
	var_18_string = "d2q01_woman.xml"; // 0x18 MovS
	func_85(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string); // 0x19 Call
	var_0_object = var_14_object; // 0x1a TMov
	var_6_object = 0; // 0x1c SetNull
	var_5_object = 0; // 0x1d SetNull
	goto Label_69; // 0x1e Jump
	
Label_69:
	return 6; // 0x45 Return
	
Label_31:
	var_32_string = "cursed_women"; // 0x1f PushS
	var_33_bool = var_1_string == var_32_string; // 0x20 Eq
	if(var_33_bool == 0) goto Label_56; // 0x21 JumpB
	var_34_string = "d2q01_house1"; // 0x22 PushS
	GetSceneByName(var_7_object, var_34_string); // 0x23 Func
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x25 PushV
	var_36_object = var_7_object; // 0x26 Mov
	var_37_string = "pt_enemy01"; // 0x27 MovS
	var_38_string = "pers_woman"; // 0x28 MovS
	var_39_string = "d2q01_zombie_woman.xml"; // 0x29 MovS
	func_85(var_35_object, var_36_object, var_37_string, var_38_string, var_39_string); // 0x2a Call
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x2c PushV
	var_41_object = var_7_object; // 0x2d Mov
	var_42_string = "pt_enemy02"; // 0x2e MovS
	var_43_string = "pers_woman"; // 0x2f MovS
	var_44_string = "d2q01_zombie_woman.xml"; // 0x30 MovS
	func_85(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x31 Call
	var_45_string = "cleanup"; // 0x33 PushS
	Trigger(var_0_object, var_45_string); // 0x34 Func
	var_7_object = 0; // 0x36 SetNull
	goto Label_69; // 0x37 Jump
	
Label_56:
	var_46_string = "fail"; // 0x38 PushS
	var_47_bool = var_1_string == var_46_string; // 0x39 Eq
	if(var_47_bool == 0) goto Label_63; // 0x3a JumpB
	func_70(); // 0x3c Call
	goto Label_69; // 0x3e Jump
	
Label_63:
	var_52_string = "completed"; // 0x3f PushS
	var_53_bool = var_1_string == var_52_string; // 0x40 Eq
	if(var_53_bool == 0) goto Label_69; // 0x41 JumpB
	func_70(); // 0x43 Call
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_78(var_0_object)
{
	EventDisable(26); // 0x4e EventDisable
	var_50_object = var_0_object; // 0x4f PushT
	if(var_50_object == 0) goto Label_84; // 0x50 JumpB
	var_51_string = "cleanup"; // 0x51 PushS
	Trigger(var_0_object, var_51_string); // 0x52 Func
	
Label_84:
	return 0; // 0x54 Return
}


func_85(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0x55 PushV
	GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector); // 0x56 ObjFunc
	var_27_bool = var_23_bool == 0; // 0x58 Not
	if(var_27_bool == 0) goto Label_98; // 0x59 JumpB
	var_28_string = "Locator "; // 0x5a PushS
	var_29_int = var_28_string + var_16_string; // 0x5b Add
	var_30_string = " doesn't exist"; // 0x5c PushS
	var_31_int = var_29_int + var_30_string; // 0x5d Add
	Trace(var_31_int); // 0x5e Func
	var_26_object = 0; // 0x60 SetNull
	goto Label_100; // 0x61 Jump
	
Label_100:
	var_14_object = var_26_object; // 0x64 Mov
	return 8; // 0x65 Return
	
Label_98:
	AddActor(var_26_object, var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string); // 0x62 Func
}


func_70()
{
	var_48_string = "d2q01"; // 0x46 PushS
	var_49_int = 1000; // 0x47 PushI
	SetVariable(var_48_string, var_49_int); // 0x48 Func
	func_78(var_7_object); // 0x4b Call
	return 0; // 0x4d Return
}


