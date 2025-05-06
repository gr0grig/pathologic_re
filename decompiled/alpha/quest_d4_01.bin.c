task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); // 0x4 PushV
	Trace(var_4_string); // 0x5 Func
	var_9_string = "key_actors"; // 0x7 PushS
	var_10_bool = var_4_string == var_9_string; // 0x8 Eq
	if(var_10_bool == 0) goto Label_30; // 0x9 JumpB
	GetMainOutdoorScene(var_7_object); // 0xa Func
	var_11_object = Obj(); var_12_object = Obj(); var_13_string = ""; var_14_string = ""; var_15_string = ""; // 0xc PushV
	var_12_object = var_7_object; // 0xd Mov
	var_13_string = "pt_d4q01_key1"; // 0xe MovS
	var_14_string = "pers_whitemask"; // 0xf MovS
	var_15_string = "d4q01_key1.xml"; // 0x10 MovS
	func_125(var_12_object, var_13_string, var_14_string, var_15_string); // 0x11 Call
	var_0_object = var_11_object; // 0x12 TMov
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0x14 PushV
	var_30_object = var_7_object; // 0x15 Mov
	var_31_string = "pt_d4q01_key2"; // 0x16 MovS
	var_32_string = "pers_wasted_male"; // 0x17 MovS
	var_33_string = "d4q01_key2.xml"; // 0x18 MovS
	func_125(var_30_object, var_31_string, var_32_string, var_33_string); // 0x19 Call
	var_1_object = var_29_object; // 0x1a TMov
	var_7_object = 0; // 0x1c SetNull
	goto Label_90; // 0x1d Jump
	
Label_90:
	return 4; // 0x5a Return
	
Label_30:
	var_34_string = "pers"; // 0x1e PushS
	var_35_bool = var_4_string == var_34_string; // 0x1f Eq
	if(var_35_bool == 0) goto Label_53; // 0x20 JumpB
	GetMainOutdoorScene(var_8_object); // 0x21 Func
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x23 PushV
	var_37_object = var_8_object; // 0x24 Mov
	var_38_string = "pt_d4q01_birdmask"; // 0x25 MovS
	var_39_string = "pers_birdmask"; // 0x26 MovS
	var_40_string = "d4q01_birdmask.xml"; // 0x27 MovS
	func_125(var_37_object, var_38_string, var_39_string, var_40_string); // 0x28 Call
	var_2_object = var_36_object; // 0x29 TMov
	var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = ""; // 0x2b PushV
	var_42_object = var_8_object; // 0x2c Mov
	var_43_string = "pt_d4q01_wastedwoman"; // 0x2d MovS
	var_44_string = "pers_wasted_girl"; // 0x2e MovS
	var_45_string = "d4q01_wastedwoman.xml"; // 0x2f MovS
	func_125(var_42_object, var_43_string, var_44_string, var_45_string); // 0x30 Call
	var_3_object = var_41_object; // 0x31 TMov
	var_8_object = 0; // 0x33 SetNull
	goto Label_90; // 0x34 Jump
	
Label_53:
	var_46_string = "key1_done"; // 0x35 PushS
	var_47_bool = var_4_string == var_46_string; // 0x36 Eq
	if(var_47_bool == 0) goto Label_59; // 0x37 JumpB
	Remove(); // 0x38 TObjFunc
	goto Label_90; // 0x3a Jump
	
Label_59:
	var_48_string = "key2_done"; // 0x3b PushS
	var_49_bool = var_4_string == var_48_string; // 0x3c Eq
	if(var_49_bool == 0) goto Label_65; // 0x3d JumpB
	Remove(); // 0x3e TObjFunc
	goto Label_90; // 0x40 Jump
	
Label_65:
	var_50_string = "birdmask_done"; // 0x41 PushS
	var_51_bool = var_4_string == var_50_string; // 0x42 Eq
	if(var_51_bool == 0) goto Label_71; // 0x43 JumpB
	Remove(); // 0x44 TObjFunc
	goto Label_90; // 0x46 Jump
	
Label_71:
	var_52_string = "wastedwoman_done"; // 0x47 PushS
	var_53_bool = var_4_string == var_52_string; // 0x48 Eq
	if(var_53_bool == 0) goto Label_77; // 0x49 JumpB
	Remove(); // 0x4a TObjFunc
	goto Label_90; // 0x4c Jump
	
Label_77:
	var_54_string = "fail"; // 0x4d PushS
	var_55_bool = var_4_string == var_54_string; // 0x4e Eq
	if(var_55_bool == 0) goto Label_84; // 0x4f JumpB
	func_91(); // 0x51 Call
	goto Label_90; // 0x53 Jump
	
Label_84:
	var_62_string = "completed"; // 0x54 PushS
	var_63_bool = var_4_string == var_62_string; // 0x55 Eq
	if(var_63_bool == 0) goto Label_90; // 0x56 JumpB
	func_99(); // 0x58 Call
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_99()
{
	var_64_string = "d4q01"; // 0x63 PushS
	var_65_int = 1000; // 0x64 PushI
	SetVariable(var_64_string, var_65_int); // 0x65 Func
	func_107(); // 0x68 Call
	return 0; // 0x6a Return
}


func_91()
{
	var_56_string = "d4q01"; // 0x5b PushS
	var_57_int = -1; // 0x5c PushI
	SetVariable(var_56_string, var_57_int); // 0x5d Func
	func_107(); // 0x60 Call
	return 0; // 0x62 Return
}


func_107()
{
	EventDisable(26); // 0x6b EventDisable
	var_58_object = var_0_object; // 0x6c PushT
	if(var_58_object == 0) goto Label_112; // 0x6d JumpB
	Remove(); // 0x6e TObjFunc
	
Label_112:
	var_59_object = var_1_object; // 0x70 PushT
	if(var_59_object == 0) goto Label_116; // 0x71 JumpB
	Remove(); // 0x72 TObjFunc
	
Label_116:
	var_60_object = var_2_object; // 0x74 PushT
	if(var_60_object == 0) goto Label_120; // 0x75 JumpB
	Remove(); // 0x76 TObjFunc
	
Label_120:
	var_61_object = var_3_object; // 0x78 PushT
	if(var_61_object == 0) goto Label_124; // 0x79 JumpB
	Remove(); // 0x7a TObjFunc
	
Label_124:
	return 0; // 0x7c Return
}


func_125(var_11_object, var_13_string, var_14_string, var_15_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0x7d PushV
	GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector); // 0x7e ObjFunc
	var_24_bool = var_20_bool == 0; // 0x80 Not
	if(var_24_bool == 0) goto Label_138; // 0x81 JumpB
	var_25_string = "Locator "; // 0x82 PushS
	var_26_int = var_25_string + var_13_string; // 0x83 Add
	var_27_string = " doesn't exist"; // 0x84 PushS
	var_28_int = var_26_int + var_27_string; // 0x85 Add
	Trace(var_28_int); // 0x86 Func
	var_23_object = 0; // 0x88 SetNull
	goto Label_140; // 0x89 Jump
	
Label_140:
	var_11_object = var_23_object; // 0x8c Mov
	return 8; // 0x8d Return
	
Label_138:
	AddStationaryActor(var_23_object, var_21_cvector, var_22_cvector, var_14_string, var_15_string); // 0x8a ObjFunc
}


