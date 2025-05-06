task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x26 PushV
	Trace(var_1_string); // 0x27 Func
	var_6_string = "place_klara"; // 0x29 PushS
	var_7_bool = var_1_string == var_6_string; // 0x2a Eq
	if(var_7_bool == 0) goto Label_57; // 0x2b JumpB
	var_8_string = "vagon_mishka"; // 0x2c PushS
	GetSceneByName(var_4_object, var_8_string); // 0x2d Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = ""; // 0x2f PushV
	var_10_object = var_4_object; // 0x30 Mov
	var_11_string = "pt_b8q01_klara"; // 0x31 MovS
	var_12_string = "NPC_Klara"; // 0x32 MovS
	var_13_string = "b8q01_klara.xml"; // 0x33 MovS
	func_149(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string); // 0x34 NEW_2
	var_0_object = var_9_object; // 0x35 TMov
	var_4_object = 0; // 0x37 SetNull
	goto Label_106; // 0x38 Jump
	
Label_106:
	return 4; // 0x6a Return
	
Label_57:
	var_27_string = "remove_klara"; // 0x39 PushS
	var_28_bool = var_1_string == var_27_string; // 0x3a Eq
	if(var_28_bool == 0) goto Label_64; // 0x3b JumpB
	var_29_string = "cleanup"; // 0x3c PushS
	Trigger(var_0_object, var_29_string); // 0x3d Func
	goto Label_106; // 0x3f Jump
	
Label_64:
	var_30_string = "unlock_boiny"; // 0x40 PushS
	var_31_bool = var_1_string == var_30_string; // 0x41 Eq
	if(var_31_bool == 0) goto Label_73; // 0x42 JumpB
	var_32_string = ""; var_33_bool = 0; // 0x43 PushV
	var_32_string = "boiny@door1"; // 0x44 MovS
	var_33_bool = 0; // 0x45 MovB
	func_167(var_32_string, var_33_bool); // 0x46 NEW_2
	goto Label_106; // 0x48 Jump
	
Label_73:
	var_42_string = "cleanup"; // 0x49 PushS
	var_43_bool = var_1_string == var_42_string; // 0x4a Eq
	if(var_43_bool == 0) goto Label_93; // 0x4b JumpB
	var_44_string = "b8q01"; // 0x4c PushS
	GetVariable(var_44_string, var_5_int); // 0x4d Func
	var_45_int = 1000; // 0x4f PushI
	var_46_bool = var_5_int != var_45_int; // 0x50 Neq
	if(var_46_bool == 0) goto Label_86; // 0x51 JumpB
	func_107(); // 0x53 NEW_2
	goto Label_89; // 0x55 Jump
	
Label_89:
	func_129(); // 0x5a NEW_2
	goto Label_106; // 0x5c Jump
	
Label_86:
	func_123(var_5_int); // 0x57 NEW_2
	
Label_93:
	var_73_string = "fail"; // 0x5d PushS
	var_74_bool = var_1_string == var_73_string; // 0x5e Eq
	if(var_74_bool == 0) goto Label_100; // 0x5f JumpB
	func_107(); // 0x61 NEW_2
	goto Label_106; // 0x63 Jump
	
Label_100:
	var_75_string = "completed"; // 0x64 PushS
	var_76_bool = var_1_string == var_75_string; // 0x65 Eq
	if(var_76_bool == 0) goto Label_106; // 0x66 JumpB
	func_115(); // 0x68 NEW_2
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0; // 0x18 PushV
	var_1_string = "boiny@door1"; // 0x19 MovS
	var_2_bool = 1; // 0x1a MovB
	func_167(var_1_string, var_2_bool); // 0x1b NEW_2
	var_11_string = ""; var_12_bool = 0; // 0x1d PushV
	var_11_string = "vagon_mishka@door1"; // 0x1e MovS
	var_12_bool = 0; // 0x1f MovB
	func_167(var_11_string, var_12_bool); // 0x20 NEW_2
	
Label_34:
	Hold(); // 0x22 Func
	goto Label_34; // 0x24 Jump
}


func_0()
{
	var_51_int = 0; var_52_int = 0; // 0x0 PushV
	var_53_string = "kill the one"; // 0x1 PushS
	Trace(var_53_string); // 0x2 Func
	var_54_string = "b8q03MladVladIsVictim"; // 0x4 PushS
	GetVariable(var_54_string, var_52_int); // 0x5 Func
	var_55_int = 0; // 0x7 PushI
	var_56_bool = var_52_int != var_55_int; // 0x8 Neq
	if(var_56_bool == 0) goto Label_17; // 0x9 JumpB
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; var_60_string = ""; // 0xa PushV
	var_58_string = "volonteers_burah"; // 0xb MovS
	var_59_string = "kill"; // 0xc MovS
	var_60_string = "mladvlad"; // 0xd MovS
	func_184(var_57_bool, var_58_string, var_59_string, var_60_string); // 0xe NEW_2
	goto Label_23; // 0x10 Jump
	
Label_23:
	return 2; // 0x17 Return
	
Label_17:
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x11 PushV
	var_65_string = "volonteers_burah"; // 0x12 MovS
	var_66_string = "kill"; // 0x13 MovS
	var_67_string = "bigvlad"; // 0x14 MovS
	func_184(var_64_bool, var_65_string, var_66_string, var_67_string); // 0x15 NEW_2
}


func_129()
{
	func_0(); // 0x82 NEW_2
	var_68_object = Obj(); // 0x84 PushV
	func_143(var_68_object); // 0x85 NEW_2
	RemoveActor(var_68_object); // 0x87 Func
	var_71_string = ""; var_72_bool = 0; // 0x89 PushV
	var_71_string = "boiny@door1"; // 0x8a MovS
	var_72_bool = 1; // 0x8b MovB
	func_167(var_71_string, var_72_bool); // 0x8c NEW_2
	return 0; // 0x8e Return
}


func_167(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xa7 PushV
	FindActor(var_4_object, var_1_string); // 0xa8 Func
	var_5_bool = var_4_object == 0; // 0xaa Not
	if(var_5_bool == 0) goto Label_179; // 0xab JumpB
	var_6_string = "Door "; // 0xac PushS
	var_7_int = var_6_string + var_1_string; // 0xad Add
	var_8_string = " not found"; // 0xae PushS
	var_9_int = var_7_int + var_8_string; // 0xaf Add
	Trace(var_9_int); // 0xb0 Func
	goto Label_182; // 0xb2 Jump
	
Label_182:
	return 2; // 0xb6 Return
	
Label_179:
	var_10_string = "locked"; // 0xb3 PushS
	SetProperty(var_10_string, var_2_bool); // 0xb4 ObjFunc
}


func_107()
{
	var_47_string = "b8q01"; // 0x6b PushS
	var_48_int = -1; // 0x6c PushI
	SetVariable(var_47_string, var_48_int); // 0x6d Func
	func_123(var_5_int); // 0x70 NEW_2
	return 0; // 0x72 Return
}


func_143(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x8f PushV
	self(var_70_object); // 0x90 Func
	var_68_object = var_70_object; // 0x92 Mov
	return 2; // 0x93 Return
}


func_115()
{
	var_77_string = "b8q01"; // 0x73 PushS
	var_78_int = 1000; // 0x74 PushI
	SetVariable(var_77_string, var_78_int); // 0x75 Func
	func_123(var_5_int); // 0x78 NEW_2
	return 0; // 0x7a Return
}


func_149(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x95 PushV
	GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x96 ObjFunc
	var_22_bool = var_18_bool == 0; // 0x98 Not
	if(var_22_bool == 0) goto Label_162; // 0x99 JumpB
	var_23_string = "Locator "; // 0x9a PushS
	var_24_int = var_23_string + var_11_string; // 0x9b Add
	var_25_string = " doesn't exist"; // 0x9c PushS
	var_26_int = var_24_int + var_25_string; // 0x9d Add
	Trace(var_26_int); // 0x9e Func
	var_21_object = 0; // 0xa0 SetNull
	goto Label_164; // 0xa1 Jump
	
Label_164:
	var_9_object = var_21_object; // 0xa4 Mov
	return 8; // 0xa5 Return
	
Label_162:
	AddActor(var_21_object, var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string); // 0xa2 Func
}


func_184(var_57_bool, var_58_string, var_59_string, var_60_string)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0xb8 PushV
	FindActor(var_62_object, var_58_string); // 0xb9 Func
	var_63_bool = var_62_object == 0; // 0xbb NullEq
	if(var_63_bool == 0) goto Label_191; // 0xbc JumpB
	var_57_bool = 0; // 0xbd MovB
	return 2; // 0xbe Return
	
Label_191:
	Trigger(var_62_object, var_59_string, var_60_string); // 0xbf Func
	var_57_bool = 1; // 0xc1 MovB
	return 2; // 0xc2 Return
}


func_123(var_0_object)
{
	var_49_object = var_0_object; // 0x7b PushT
	if(var_49_object == 0) goto Label_128; // 0x7c JumpB
	var_50_string = "cleanup"; // 0x7d PushS
	Trigger(var_0_object, var_50_string); // 0x7e Func
	
Label_128:
	return 0; // 0x80 Return
}


