task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x8 PushV
	Trace(var_3_string); // 0x9 Func
	var_22_string = "init_soldiers"; // 0xb PushS
	var_23_bool = var_3_string == var_22_string; // 0xc Eq
	if(var_23_bool == 0) goto Label_43; // 0xd JumpB
	GetMainOutdoorScene(var_13_object); // 0xe Func
	var_14_int = 1; // 0x10 MovI
	
Label_17:
	var_24_int = 10; // 0x11 PushI
	var_25_bool = var_14_int <= var_24_int; // 0x12 LE
	if(var_25_bool == 0) goto Label_33; // 0x13 JumpB
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x14 PushV
	var_27_object = var_13_object; // 0x15 Mov
	var_31_string = "pt_d11q01_soldier"; // 0x16 PushS
	var_28_string = var_31_string + var_14_int; // 0x17 Add2
	var_29_string = "pers_soldat"; // 0x18 MovS
	var_30_string = "d11q01_soldier.xml"; // 0x19 MovS
	func_181(var_27_object, var_28_string, var_29_string, var_30_string); // 0x1a Call
	add(var_26_object); // 0x1c TObjFunc
	var_45_int = 1; // 0x1e PushI
	var_14_int = var_14_int + var_45_int; // 0x1f Add2
	goto Label_17; // 0x20 Jump
	
Label_33:
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x21 PushV
	var_47_object = var_13_object; // 0x22 Mov
	var_48_string = "pt_d11q01_msoldier"; // 0x23 MovS
	var_49_string = "pers_soldat"; // 0x24 MovS
	var_50_string = "d11q01_msoldier.xml"; // 0x25 MovS
	func_181(var_47_object, var_48_string, var_49_string, var_50_string); // 0x26 Call
	var_2_object = var_46_object; // 0x27 TMov
	var_13_object = 0; // 0x29 SetNull
	goto Label_125; // 0x2a Jump
	
Label_125:
	return 18; // 0x7d Return
	
Label_43:
	var_51_string = "init_girl"; // 0x2b PushS
	var_52_bool = var_3_string == var_51_string; // 0x2c Eq
	if(var_52_bool == 0) goto Label_59; // 0x2d JumpB
	var_53_string = "shouse1_kabak"; // 0x2e PushS
	GetSceneByName(var_15_object, var_53_string); // 0x2f Func
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x31 PushV
	var_55_object = var_15_object; // 0x32 Mov
	var_56_string = "pt_d11q01_girl"; // 0x33 MovS
	var_57_string = "pers_nudegirl"; // 0x34 MovS
	var_58_string = "d11q01_girl.xml"; // 0x35 MovS
	func_163(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string); // 0x36 Call
	var_0_object = var_54_object; // 0x37 TMov
	var_15_object = 0; // 0x39 SetNull
	goto Label_125; // 0x3a Jump
	
Label_59:
	var_72_string = "remove_andrei"; // 0x3b PushS
	var_73_bool = var_3_string == var_72_string; // 0x3c Eq
	if(var_73_bool == 0) goto Label_69; // 0x3d JumpB
	var_74_string = "NPC_Andrei"; // 0x3e PushS
	FindActor(var_16_object, var_74_string); // 0x3f Func
	RemoveActor(var_16_object); // 0x41 Func
	var_16_object = 0; // 0x43 SetNull
	goto Label_125; // 0x44 Jump
	
Label_69:
	var_75_string = "restore_andrei"; // 0x45 PushS
	var_76_bool = var_3_string == var_75_string; // 0x46 Eq
	if(var_76_bool == 0) goto Label_84; // 0x47 JumpB
	var_77_string = "shouse1_kabak"; // 0x48 PushS
	GetSceneByName(var_17_object, var_77_string); // 0x49 Func
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0x4b PushV
	var_79_object = var_17_object; // 0x4c Mov
	var_80_string = "pt_andrei"; // 0x4d MovS
	var_81_string = "NPC_Andrei"; // 0x4e MovS
	var_82_string = "NPC_Danko_Andrei.xml"; // 0x4f MovS
	func_163(var_78_object, var_79_object, var_80_string, var_81_string, var_82_string); // 0x50 Call
	var_17_object = 0; // 0x52 SetNull
	goto Label_125; // 0x53 Jump
	
Label_84:
	var_83_string = "soldier_attack"; // 0x54 PushS
	var_84_bool = var_3_string == var_83_string; // 0x55 Eq
	if(var_84_bool == 0) goto Label_112; // 0x56 JumpB
	size(var_18_int); // 0x57 TObjFunc
	var_19_int = 0; // 0x59 MovI
	
Label_90:
	var_85_bool = var_19_int < var_18_int; // 0x5a LT
	if(var_85_bool == 0) goto Label_111; // 0x5b JumpB
	get(var_20_object, var_19_int); // 0x5c TObjFunc
	var_86_object = var_20_object; // 0x5e Push
	if(var_86_object == 0) goto Label_107; // 0x5f JumpB
	GetActor(var_21_object); // 0x60 ObjFunc
	var_87_bool = var_21_object == 0; // 0x62 Not
	if(var_87_bool == 0) goto Label_103; // 0x63 JumpB
	Remove(); // 0x64 ObjFunc
	goto Label_106; // 0x66 Jump
	
Label_106:
	var_21_object = 0; // 0x6a SetNull
	
Label_107:
	var_20_object = 0; // 0x6b SetNull
	var_88_int = 1; // 0x6c PushI
	var_19_int = var_19_int + var_88_int; // 0x6d Add2
	goto Label_90; // 0x6e Jump
	
Label_103:
	var_89_string = "attack"; // 0x67 PushS
	Trigger(var_21_object, var_89_string); // 0x68 Func
	
Label_111:
	goto Label_125; // 0x6f Jump
	
Label_112:
	var_90_string = "fail"; // 0x70 PushS
	var_91_bool = var_3_string == var_90_string; // 0x71 Eq
	if(var_91_bool == 0) goto Label_119; // 0x72 JumpB
	func_126(); // 0x74 Call
	goto Label_125; // 0x76 Jump
	
Label_119:
	var_107_string = "completed"; // 0x77 PushS
	var_108_bool = var_3_string == var_107_string; // 0x78 Eq
	if(var_108_bool == 0) goto Label_125; // 0x79 JumpB
	func_134(); // 0x7b Call
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); // 0x0 PushV
	func_157(var_3_object); // 0x1 Call
	var_1_object = var_3_object; // 0x2 TMov
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_163(var_54_object, var_55_object, var_56_string, var_57_string, var_58_string)
{
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0xa3 PushV
	GetLocator(var_56_string, var_63_bool, var_64_cvector, var_65_cvector); // 0xa4 ObjFunc
	var_67_bool = var_63_bool == 0; // 0xa6 Not
	if(var_67_bool == 0) goto Label_176; // 0xa7 JumpB
	var_68_string = "Locator "; // 0xa8 PushS
	var_69_int = var_68_string + var_56_string; // 0xa9 Add
	var_70_string = " doesn't exist"; // 0xaa PushS
	var_71_int = var_69_int + var_70_string; // 0xab Add
	Trace(var_71_int); // 0xac Func
	var_66_object = 0; // 0xae SetNull
	goto Label_178; // 0xaf Jump
	
Label_178:
	var_54_object = var_66_object; // 0xb2 Mov
	return 8; // 0xb3 Return
	
Label_176:
	AddActor(var_66_object, var_57_string, var_55_object, var_64_cvector, var_65_cvector, var_58_string); // 0xb0 Func
}


func_134()
{
	var_109_string = "d11q01"; // 0x86 PushS
	var_110_int = 1000; // 0x87 PushI
	SetVariable(var_109_string, var_110_int); // 0x88 Func
	func_142(var_20_object, var_21_object); // 0x8b Call
	return 0; // 0x8d Return
}


func_199()
{
	var_95_int = 0; var_96_int = 0; var_97_object = Obj(); var_98_int = 0; var_99_int = 0; var_100_object = Obj(); // 0xc7 PushV
	size(var_98_int); // 0xc8 ObjFunc
	var_99_int = 0; // 0xca MovI
	
Label_203:
	var_101_bool = var_99_int < var_98_int; // 0xcb LT
	if(var_101_bool == 0) goto Label_215; // 0xcc JumpB
	get(var_100_object, var_99_int); // 0xcd ObjFunc
	var_102_object = var_100_object; // 0xcf Push
	if(var_102_object == 0) goto Label_211; // 0xd0 JumpB
	Remove(); // 0xd1 ObjFunc
	
Label_211:
	var_100_object = 0; // 0xd3 SetNull
	var_103_int = 1; // 0xd4 PushI
	var_99_int = var_99_int + var_103_int; // 0xd5 Add2
	goto Label_203; // 0xd6 Jump
	
Label_215:
	clear(); // 0xd7 ObjFunc
	return 6; // 0xd9 Return
}


func_142(var_0_object, var_1_object)
{
	EventDisable(26); // 0x8e EventDisable
	var_94_object = Obj(); // 0x8f PushV
	var_94_object = var_1_object; // 0x90 MovT
	func_199(); // 0x91 Call
	var_104_object = var_2_object; // 0x93 PushT
	if(var_104_object == 0) goto Label_151; // 0x94 JumpB
	Remove(); // 0x95 TObjFunc
	
Label_151:
	var_105_object = var_0_object; // 0x97 PushT
	if(var_105_object == 0) goto Label_156; // 0x98 JumpB
	var_106_string = "cleanup"; // 0x99 PushS
	Trigger(var_0_object, var_106_string); // 0x9a Func
	
Label_156:
	return 0; // 0x9c Return
}


func_181(var_26_object, var_28_string, var_29_string, var_30_string)
{
	var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); // 0xb5 PushV
	GetLocator(var_28_string, var_36_bool, var_37_cvector, var_38_cvector); // 0xb6 ObjFunc
	var_40_bool = var_36_bool == 0; // 0xb8 Not
	if(var_40_bool == 0) goto Label_194; // 0xb9 JumpB
	var_41_string = "Locator "; // 0xba PushS
	var_42_int = var_41_string + var_28_string; // 0xbb Add
	var_43_string = " doesn't exist"; // 0xbc PushS
	var_44_int = var_42_int + var_43_string; // 0xbd Add
	Trace(var_44_int); // 0xbe Func
	var_39_object = 0; // 0xc0 SetNull
	goto Label_196; // 0xc1 Jump
	
Label_196:
	var_26_object = var_39_object; // 0xc4 Mov
	return 8; // 0xc5 Return
	
Label_194:
	AddStationaryActor(var_39_object, var_37_cvector, var_38_cvector, var_29_string, var_30_string); // 0xc2 ObjFunc
}


func_157(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x9d PushV
	CreateObjectVector(var_5_object); // 0x9e Func
	var_3_object = var_5_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


func_126()
{
	var_92_string = "d11q01"; // 0x7e PushS
	var_93_int = -1; // 0x7f PushI
	SetVariable(var_92_string, var_93_int); // 0x80 Func
	func_142(var_20_object, var_21_object); // 0x83 Call
	return 0; // 0x85 Return
}


