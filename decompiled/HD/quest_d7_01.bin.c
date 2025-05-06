task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	var_5_string = ""; var_6_bool = 0; // 0x21 PushV
	var_5_string = "sobor@door1"; // 0x22 MovS
	var_6_bool = 0; // 0x23 MovB
	func_224(var_5_string, var_6_bool); // 0x24 NEW_2
	return 0; // 0x26 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_int = 0; // 0x27 PushV
	Trace(var_3_string); // 0x28 Func
	var_8_string = "place_birdmasks"; // 0x2a PushS
	var_9_bool = var_3_string == var_8_string; // 0x2b Eq
	if(var_9_bool == 0) goto Label_73; // 0x2c JumpB
	GetMainOutdoorScene(var_6_object); // 0x2d Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0x2f PushV
	var_11_object = var_6_object; // 0x30 Mov
	var_12_string = "pt_d7q01_ubirdmask"; // 0x31 MovS
	var_13_string = "pers_birdmask"; // 0x32 MovS
	var_14_string = "d7q01_birdmask1.xml"; // 0x33 MovS
	func_206(var_11_object, var_12_string, var_13_string, var_14_string); // 0x34 NEW_2
	var_0_object = var_10_object; // 0x35 TMov
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = ""; // 0x37 PushV
	var_29_object = var_6_object; // 0x38 Mov
	var_30_string = "pt_d7q01_dbirdmask"; // 0x39 MovS
	var_31_string = "pers_birdmask"; // 0x3a MovS
	var_32_string = "d7q01_birdmask2.xml"; // 0x3b MovS
	func_206(var_29_object, var_30_string, var_31_string, var_32_string); // 0x3c NEW_2
	var_1_object = var_28_object; // 0x3d TMov
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = ""; // 0x3f PushV
	var_34_object = var_6_object; // 0x40 Mov
	var_35_string = "pt_d7q01_mbirdmask"; // 0x41 MovS
	var_36_string = "pers_birdmask"; // 0x42 MovS
	var_37_string = "d7q01_birdmask3.xml"; // 0x43 MovS
	func_206(var_34_object, var_35_string, var_36_string, var_37_string); // 0x44 NEW_2
	var_2_object = var_33_object; // 0x45 TMov
	var_6_object = 0; // 0x47 SetNull
	goto Label_138; // 0x48 Jump
	
Label_138:
	return 4; // 0x8a Return
	
Label_73:
	var_38_string = "remove_birdmasks"; // 0x49 PushS
	var_39_bool = var_3_string == var_38_string; // 0x4a Eq
	if(var_39_bool == 0) goto Label_80; // 0x4b JumpB
	func_155(); // 0x4d NEW_2
	goto Label_138; // 0x4f Jump
	
Label_80:
	var_43_string = "kill_player"; // 0x50 PushS
	var_44_bool = var_3_string == var_43_string; // 0x51 Eq
	if(var_44_bool == 0) goto Label_89; // 0x52 JumpB
	var_45_bool = 0; var_46_string = ""; var_47_string = ""; // 0x53 PushV
	var_46_string = "player"; // 0x54 MovS
	var_47_string = "die"; // 0x55 MovS
	func_241(var_45_bool, var_46_string, var_47_string); // 0x56 NEW_2
	goto Label_138; // 0x58 Jump
	
Label_89:
	var_51_string = "sobor_teleport"; // 0x59 PushS
	var_52_bool = var_3_string == var_51_string; // 0x5a Eq
	if(var_52_bool == 0) goto Label_108; // 0x5b JumpB
	var_53_object = Obj(); var_54_string = ""; var_55_string = ""; // 0x5c PushV
	var_56_object = Obj(); // 0x5d PushV
	func_182(var_56_object); // 0x5e NEW_2
	var_53_object = var_56_object; // 0x5f Mov
	var_54_string = "sobor"; // 0x61 MovS
	var_55_string = "pt_d7q01_birth"; // 0x62 MovS
	func_253(var_53_object, var_54_string, var_55_string); // 0x63 NEW_2
	sync(); // 0x65 Func
	var_77_object = Obj(); var_78_string = ""; // 0x67 PushV
	var_78_string = "quest_d7_01_cutscene"; // 0x68 MovS
	func_195(var_77_object, var_78_string); // 0x69 NEW_2
	goto Label_138; // 0x6b Jump
	
Label_108:
	var_85_string = "cleanup"; // 0x6c PushS
	var_86_bool = var_3_string == var_85_string; // 0x6d Eq
	if(var_86_bool == 0) goto Label_125; // 0x6e JumpB
	var_87_string = "d7q01"; // 0x6f PushS
	GetVariable(var_87_string, var_7_int); // 0x70 Func
	var_88_int = 1000; // 0x72 PushI
	var_89_bool = var_7_int != var_88_int; // 0x73 Neq
	if(var_89_bool == 0) goto Label_121; // 0x74 JumpB
	func_139(); // 0x76 NEW_2
	goto Label_124; // 0x78 Jump
	
Label_124:
	goto Label_138; // 0x7c Jump
	
Label_121:
	func_168(); // 0x7a NEW_2
	
Label_125:
	var_95_string = "fail"; // 0x7d PushS
	var_96_bool = var_3_string == var_95_string; // 0x7e Eq
	if(var_96_bool == 0) goto Label_132; // 0x7f JumpB
	func_139(); // 0x81 NEW_2
	goto Label_138; // 0x83 Jump
	
Label_132:
	var_97_string = "completed"; // 0x84 PushS
	var_98_bool = var_3_string == var_97_string; // 0x85 Eq
	if(var_98_bool == 0) goto Label_138; // 0x86 JumpB
	func_147(); // 0x88 NEW_2
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_int)
{
	CameraSwitchToNormal(); // 0xb3 Func
	return 0; // 0xb5 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_float = 0; var_5_object = Obj(); var_6_float = 0; // 0x0 PushV
	var_7_string = "warehouse_rubin"; // 0x1 PushS
	GetSceneByName(var_5_object, var_7_string); // 0x2 Func
	var_8_string = "norubin"; // 0x4 PushS
	Trigger(var_5_object, var_8_string); // 0x5 Func
	GetGameTime(var_6_float); // 0x7 Func
	var_9_float = 151.0; // 0x9 PushF
	var_10_bool = var_6_float >= var_9_float; // 0xa GE
	if(var_10_bool == 0) goto Label_18; // 0xb JumpB
	var_11_string = ""; var_12_bool = 0; // 0xc PushV
	var_11_string = "sobor@door1"; // 0xd MovS
	var_12_bool = 0; // 0xe MovB
	func_224(var_11_string, var_12_bool); // 0xf NEW_2
	goto Label_27; // 0x11 Jump
	
Label_27:
	Hold(); // 0x1b Func
	goto Label_27; // 0x1d Jump
	
Label_18:
	var_21_string = ""; var_22_bool = 0; // 0x12 PushV
	var_21_string = "sobor@door1"; // 0x13 MovS
	var_22_bool = 1; // 0x14 MovB
	func_224(var_21_string, var_22_bool); // 0x15 NEW_2
	var_23_int = 0; // 0x17 PushI
	var_24_float = 151.0; // 0x18 PushF
	SetTimeEvent(var_23_int, var_24_float); // 0x19 Func
}


func_224(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0xe0 PushV
	FindActor(var_14_object, var_11_string); // 0xe1 Func
	var_15_bool = var_14_object == 0; // 0xe3 Not
	if(var_15_bool == 0) goto Label_236; // 0xe4 JumpB
	var_16_string = "Door "; // 0xe5 PushS
	var_17_int = var_16_string + var_11_string; // 0xe6 Add
	var_18_string = " not found"; // 0xe7 PushS
	var_19_int = var_17_int + var_18_string; // 0xe8 Add
	Trace(var_19_int); // 0xe9 Func
	goto Label_239; // 0xeb Jump
	
Label_239:
	return 2; // 0xef Return
	
Label_236:
	var_20_string = "locked"; // 0xec PushS
	SetProperty(var_20_string, var_12_bool); // 0xed ObjFunc
}


func_195(var_77_object, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); // 0xc3 PushV
	GetMainOutdoorScene(var_81_object); // 0xc4 Func
	var_83_string = ".bin"; // 0xc6 PushS
	var_84_int = var_78_string + var_83_string; // 0xc7 Add
	AddBlankActor(var_82_object, var_81_object, var_78_string, var_84_int); // 0xc8 Func
	var_77_object = var_82_object; // 0xca Mov
	return 4; // 0xcb Return
}


func_168()
{
	EventDisable(26); // 0xa8 EventDisable
	func_155(); // 0xaa NEW_2
	var_92_object = Obj(); // 0xac PushV
	func_189(var_92_object); // 0xad NEW_2
	RemoveActor(var_92_object); // 0xaf Func
	return 0; // 0xb1 Return
}


func_139()
{
	var_90_string = "d7q01"; // 0x8b PushS
	var_91_int = -1; // 0x8c PushI
	SetVariable(var_90_string, var_91_int); // 0x8d Func
	func_168(); // 0x90 NEW_2
	return 0; // 0x92 Return
}


func_206(var_10_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0xce PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0xcf ObjFunc
	var_23_bool = var_19_bool == 0; // 0xd1 Not
	if(var_23_bool == 0) goto Label_219; // 0xd2 JumpB
	var_24_string = "Locator "; // 0xd3 PushS
	var_25_int = var_24_string + var_12_string; // 0xd4 Add
	var_26_string = " doesn't exist"; // 0xd5 PushS
	var_27_int = var_25_int + var_26_string; // 0xd6 Add
	Trace(var_27_int); // 0xd7 Func
	var_22_object = 0; // 0xd9 SetNull
	goto Label_221; // 0xda Jump
	
Label_221:
	var_10_object = var_22_object; // 0xdd Mov
	return 8; // 0xde Return
	
Label_219:
	AddStationaryActor(var_22_object, var_20_cvector, var_21_cvector, var_13_string, var_14_string); // 0xdb ObjFunc
}


func_241(var_45_bool, var_46_string, var_47_string)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0xf1 PushV
	FindActor(var_49_object, var_46_string); // 0xf2 Func
	var_50_bool = var_49_object == 0; // 0xf4 NullEq
	if(var_50_bool == 0) goto Label_248; // 0xf5 JumpB
	var_45_bool = 0; // 0xf6 MovB
	return 2; // 0xf7 Return
	
Label_248:
	Trigger(var_49_object, var_47_string); // 0xf8 Func
	var_45_bool = 1; // 0xfa MovB
	return 2; // 0xfb Return
}


func_147()
{
	var_99_string = "d7q01"; // 0x93 PushS
	var_100_int = 1000; // 0x94 PushI
	SetVariable(var_99_string, var_100_int); // 0x95 Func
	func_168(); // 0x98 NEW_2
	return 0; // 0x9a Return
}


func_182(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xb6 PushV
	var_59_string = "player"; // 0xb7 PushS
	FindActor(var_58_object, var_59_string); // 0xb8 Func
	var_56_object = var_58_object; // 0xba Mov
	return 2; // 0xbb Return
}


func_189(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0xbd PushV
	self(var_94_object); // 0xbe Func
	var_92_object = var_94_object; // 0xc0 Mov
	return 2; // 0xc1 Return
}


func_155()
{
	var_40_object = var_0_object; // 0x9b PushT
	if(var_40_object == 0) goto Label_159; // 0x9c JumpB
	Remove(); // 0x9d TObjFunc
	
Label_159:
	var_41_object = var_1_object; // 0x9f PushT
	if(var_41_object == 0) goto Label_163; // 0xa0 JumpB
	Remove(); // 0xa1 TObjFunc
	
Label_163:
	var_42_object = var_2_object; // 0xa3 PushT
	if(var_42_object == 0) goto Label_167; // 0xa4 JumpB
	Remove(); // 0xa5 TObjFunc
	
Label_167:
	return 0; // 0xa7 Return
}


func_253(var_53_object, var_54_string, var_55_string)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0xfd PushV
	var_68_bool = var_53_object == 0; // 0xfe Not
	if(var_68_bool == 0) goto Label_257; // 0xff JumpB
	return 8; // 0x100 Return
	
Label_257:
	GetSceneByName(var_64_object, var_54_string); // 0x101 Func
	GetLocator(var_55_string, var_65_bool, var_66_cvector, var_67_cvector); // 0x103 ObjFunc
	var_69_bool = var_65_bool == 0; // 0x105 Not
	if(var_69_bool == 0) goto Label_273; // 0x106 JumpB
	var_70_string = "Teleport location '"; // 0x107 PushS
	var_71_int = var_70_string + var_55_string; // 0x108 Add
	var_72_string = "' not found in scene '"; // 0x109 PushS
	var_73_int = var_71_int + var_72_string; // 0x10a Add
	var_74_int = var_73_int + var_54_string; // 0x10b Add
	var_75_string = "'"; // 0x10c PushS
	var_76_int = var_74_int + var_75_string; // 0x10d Add
	Trace(var_76_int); // 0x10e Func
	goto Label_275; // 0x110 Jump
	
Label_275:
	return 8; // 0x113 Return
	
Label_273:
	Teleport(var_53_object, var_64_object, var_66_cvector, var_67_cvector); // 0x111 Func
}


