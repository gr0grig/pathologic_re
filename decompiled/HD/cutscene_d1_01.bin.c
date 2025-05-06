task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object)
{
	var_6_bool = var_2_bool; // 0x13 PushT
	if(var_6_bool == 0) goto Label_25; // 0x14 JumpB
	func_189(var_5_object); // 0x16 NEW_2
	goto Label_31; // 0x18 Jump
	
Label_31:
	return 0; // 0x1f Return
	
Label_25:
	var_23_bool = var_1_bool; // 0x19 PushT
	if(var_23_bool == 0) goto Label_31; // 0x1a JumpB
	var_1_bool = 0; // 0x1b TMovB
	func_111(var_3_object, var_4_object, var_5_object); // 0x1d NEW_2
}


task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_int = 0; // 0x21 PushI
	var_9_bool = var_6_int == var_8_int; // 0x22 Eq
	if(var_9_bool == 0) goto Label_46; // 0x23 JumpB
	var_10_bool = 0; // 0x24 PushV
	func_235(var_10_bool); // 0x25 NEW_2
	if(var_10_bool == 0) goto Label_42; // 0x27 JumpB
	var_1_bool = 1; // 0x28 TMovB
	goto Label_45; // 0x29 Jump
	
Label_45:
	goto Label_55; // 0x2d Jump
	
Label_55:
	return 0; // 0x37 Return
	
Label_42:
	func_111(var_5_object, var_6_int, var_7_float); // 0x2b NEW_2
	
Label_46:
	var_65_bool = 0; // 0x2e PushV
	func_235(var_65_bool); // 0x2f NEW_2
	if(var_65_bool == 0) goto Label_52; // 0x31 JumpB
	var_2_bool = 1; // 0x32 TMovB
	goto Label_55; // 0x33 Jump
	
Label_52:
	func_189(var_7_float); // 0x35 NEW_2
}


task_0_event_23(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_object = Obj(); // 0x38 PushV
	var_11_bool = var_0_bool == 0; // 0x39 Not
	if(var_11_bool == 0) goto Label_60; // 0x3a JumpB
	return 4; // 0x3b Return
	
Label_60:
	var_12_string = "cutscene_burn_d1"; // 0x3c PushS
	var_13_int = 1; // 0x3d PushI
	SetVariable(var_12_string, var_13_int); // 0x3e Func
	IsPlayerActor(var_6_object, var_9_bool); // 0x40 Func
	var_14_bool = var_9_bool; // 0x42 Push
	if(var_14_bool == 0) goto Label_110; // 0x43 JumpB
	EventDisable(23); // 0x44 EventDisable
	var_15_object = Obj(); var_16_string = ""; // 0x45 PushV
	var_15_object = var_3_object; // 0x46 MovT
	var_16_string = "play"; // 0x47 MovS
	func_360(var_15_object, var_16_string); // 0x48 NEW_2
	var_27_string = "play"; // 0x4a PushS
	Trigger(var_8_object, var_27_string); // 0x4b Func
	var_28_object = Obj(); // 0x4d PushV
	var_28_object = var_6_object; // 0x4e Mov
	TaskCall(1); // 0x4f TaskCall
	func_202(var_28_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	GetMainOutdoorScene(var_10_object); // 0x53 Func
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x55 PushV
	var_62_object = var_10_object; // 0x56 Mov
	var_63_string = "pt_cs_d1_01_worker"; // 0x57 MovS
	var_64_string = "pers_worker"; // 0x58 MovS
	var_65_string = "cutscene_d1_01_worker.xml"; // 0x59 MovS
	func_295(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x5a NEW_2
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x5c PushV
	var_80_object = var_10_object; // 0x5d Mov
	var_81_string = "pt_cs_d1_01_woman"; // 0x5e MovS
	var_82_string = "pers_woman"; // 0x5f MovS
	var_83_string = "cutscene_d1_01_woman.xml"; // 0x60 MovS
	func_295(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x61 NEW_2
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = ""; // 0x63 PushV
	var_85_object = var_10_object; // 0x64 Mov
	var_86_string = "pt_cs_d1_01_alkash"; // 0x65 MovS
	var_87_string = "pers_alkash"; // 0x66 MovS
	var_88_string = "cutscene_d1_01_alkash.xml"; // 0x67 MovS
	func_295(var_84_object, var_85_object, var_86_string, var_87_string, var_88_string); // 0x68 NEW_2
	func_180(var_9_bool, var_10_object); // 0x6b NEW_2
	var_10_object = 0; // 0x6d SetNull
	
Label_110:
	return 4; // 0x6e Return
}


task_1_event_24(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int)
{
	CameraSwitchToNormal(); // 0xe8 Func
	return 0; // 0xea Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_bool = 0; // 0x1 TMovB
	var_2_bool = 0; // 0x2 TMovB
	var_6_object = Obj(); // 0x3 PushV
	func_289(var_6_object); // 0x4 NEW_2
	var_3_object = var_6_object; // 0x5 TMov
	var_9_int = 0; // 0x7 PushI
	var_10_int = 7; // 0x8 PushI
	SetTimeEvent(var_9_int, var_10_int); // 0x9 Func
	var_11_int = 1; // 0xb PushI
	var_12_int = 18; // 0xc PushI
	SetTimeEvent(var_11_int, var_12_int); // 0xd Func
	
Label_15:
	Hold(); // 0xf Func
	goto Label_15; // 0x11 Jump
}


func_384()
{
	var_59_int = 0; // 0x180 PushI
	var_60_int = 0; // 0x181 PushI
	SetSepia(var_59_int, var_60_int); // 0x182 Func
	return 0; // 0x184 Return
}


func_289(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x121 PushV
	CreateObjectVector(var_8_object); // 0x122 Func
	var_6_object = var_8_object; // 0x124 Mov
	return 2; // 0x125 Return
}


func_321(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string)
{
	var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x141 PushV
	GetLocator(var_45_string, var_52_bool, var_53_cvector, var_54_cvector); // 0x142 ObjFunc
	var_56_bool = var_52_bool == 0; // 0x144 Not
	if(var_56_bool == 0) goto Label_334; // 0x145 JumpB
	var_57_string = "Locator "; // 0x146 PushS
	var_58_int = var_57_string + var_45_string; // 0x147 Add
	var_59_string = " doesn't exist"; // 0x148 PushS
	var_60_int = var_58_int + var_59_string; // 0x149 Add
	Trace(var_60_int); // 0x14a Func
	var_55_object = 0; // 0x14c SetNull
	goto Label_336; // 0x14d Jump
	
Label_336:
	var_43_object = var_55_object; // 0x150 Mov
	return 8; // 0x151 Return
	
Label_334:
	AddActorByType(var_55_object, var_46_string, var_44_object, var_53_cvector, var_54_cvector, var_47_string); // 0x14e Func
}


func_295(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string)
{
	var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); // 0x127 PushV
	GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector); // 0x128 ObjFunc
	var_74_bool = var_70_bool == 0; // 0x12a Not
	if(var_74_bool == 0) goto Label_308; // 0x12b JumpB
	var_75_string = "Locator "; // 0x12c PushS
	var_76_int = var_75_string + var_63_string; // 0x12d Add
	var_77_string = " doesn't exist"; // 0x12e PushS
	var_78_int = var_76_int + var_77_string; // 0x12f Add
	Trace(var_78_int); // 0x130 Func
	var_73_object = 0; // 0x132 SetNull
	goto Label_310; // 0x133 Jump
	
Label_310:
	var_61_object = var_73_object; // 0x136 Mov
	return 8; // 0x137 Return
	
Label_308:
	AddActor(var_73_object, var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string); // 0x134 Func
}


func_360(var_15_object, var_16_string)
{
	var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_object = Obj(); // 0x168 PushV
	var_23_object = var_15_object; // 0x169 Push
	if(var_23_object == 0) goto Label_378; // 0x16a JumpB
	size(var_20_int); // 0x16b ObjFunc
	var_21_int = 0; // 0x16d MovI
	
Label_366:
	var_24_bool = var_21_int < var_20_int; // 0x16e LT
	if(var_24_bool == 0) goto Label_378; // 0x16f JumpB
	get(var_22_object, var_21_int); // 0x170 ObjFunc
	var_25_object = var_22_object; // 0x172 Push
	if(var_25_object == 0) goto Label_374; // 0x173 JumpB
	Trigger(var_22_object, var_16_string); // 0x174 Func
	
Label_374:
	var_22_object = 0; // 0x176 SetNull
	var_26_int = 1; // 0x177 PushI
	var_21_int = var_21_int + var_26_int; // 0x178 Add2
	goto Label_366; // 0x179 Jump
	
Label_378:
	return 6; // 0x17a Return
}


func_263(var_48_object)
{
	var_49_int = 0; var_50_int = 0; // 0x107 PushV
	var_51_bool = var_48_object == 0; // 0x108 Not
	if(var_51_bool == 0) goto Label_267; // 0x109 JumpB
	return 2; // 0x10a Return
	
Label_267:
	var_52_string = "noaccess"; // 0x10b PushS
	GetProperty(var_52_string, var_50_int); // 0x10c ObjFunc
	var_53_int = 1; // 0x10e PushI
	var_54_bool = var_50_int > var_53_int; // 0x10f GT
	if(var_54_bool == 0) goto Label_279; // 0x110 JumpB
	var_55_string = "noaccess"; // 0x111 PushS
	var_56_int = 1; // 0x112 PushI
	var_57_int = var_50_int - var_56_int; // 0x113 Sub
	SetProperty(var_55_string, var_57_int); // 0x114 ObjFunc
	goto Label_282; // 0x116 Jump
	
Label_282:
	return 2; // 0x11a Return
	
Label_279:
	var_58_string = "noaccess"; // 0x117 PushS
	RemoveProperty(var_58_string); // 0x118 ObjFunc
}


func_202(var_28_object)
{
	func_379(); // 0xcc NEW_2
	var_31_object = Obj(); // 0xce PushV
	var_31_object = var_28_object; // 0xcf Mov
	func_240(var_31_object); // 0xd0 NEW_2
	var_45_string = "space"; // 0xd2 PushS
	RegisterKeyCallback(var_45_string); // 0xd3 Func
	var_46_string = "cs_cannibal.mot"; // 0xd5 PushS
	CameraPlay(var_46_string); // 0xd6 Func
	CameraWaitForPlayFinish(); // 0xd8 Func
	var_47_string = "space"; // 0xda PushS
	UnregisterKeyCallback(var_47_string); // 0xdb Func
	var_48_object = Obj(); // 0xdd PushV
	var_48_object = var_28_object; // 0xde Mov
	func_263(var_48_object); // 0xdf NEW_2
	func_384(); // 0xe2 NEW_2
	CameraSwitchToNormal(); // 0xe4 Func
	return 0; // 0xe6 Return
}


func_235(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0xeb PushV
	IsLoaded(var_12_bool); // 0xec Func
	var_10_bool = var_12_bool; // 0xee Mov
	return 2; // 0xef Return
}


func_111(var_0_bool, var_4_object, var_5_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x6f PushV
	var_0_bool = 1; // 0x70 TMovB
	GetMainOutdoorScene(var_14_object); // 0x71 Func
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; // 0x73 PushV
	var_16_object = var_14_object; // 0x74 Mov
	var_17_string = "cs_cannibal_alkash1"; // 0x75 MovS
	var_18_string = "cs_play_all_trigger.bin"; // 0x76 MovS
	func_313(var_15_object, var_16_object, var_17_string, var_18_string); // 0x77 NEW_2
	add(var_15_object); // 0x79 TObjFunc
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = ""; // 0x7b PushV
	var_24_object = var_14_object; // 0x7c Mov
	var_25_string = "cs_cannibal_grabitel1"; // 0x7d MovS
	var_26_string = "cs_play_all_trigger.bin"; // 0x7e MovS
	func_313(var_23_object, var_24_object, var_25_string, var_26_string); // 0x7f NEW_2
	add(var_23_object); // 0x81 TObjFunc
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; // 0x83 PushV
	var_28_object = var_14_object; // 0x84 Mov
	var_29_string = "cs_cannibal_unosha1"; // 0x85 MovS
	var_30_string = "cs_play_all_trigger.bin"; // 0x86 MovS
	func_313(var_27_object, var_28_object, var_29_string, var_30_string); // 0x87 NEW_2
	add(var_27_object); // 0x89 TObjFunc
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; // 0x8b PushV
	var_32_object = var_14_object; // 0x8c Mov
	var_33_string = "cs_cannibal_unosha2"; // 0x8d MovS
	var_34_string = "cs_play_all_trigger.bin"; // 0x8e MovS
	func_313(var_31_object, var_32_object, var_33_string, var_34_string); // 0x8f NEW_2
	add(var_31_object); // 0x91 TObjFunc
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; // 0x93 PushV
	var_36_object = var_14_object; // 0x94 Mov
	var_37_string = "cs_cannibal_woman1"; // 0x95 MovS
	var_38_string = "cs_play_all_trigger.bin"; // 0x96 MovS
	func_313(var_35_object, var_36_object, var_37_string, var_38_string); // 0x97 NEW_2
	add(var_35_object); // 0x99 TObjFunc
	var_39_object = Obj(); var_40_object = Obj(); var_41_string = ""; var_42_string = ""; // 0x9b PushV
	var_40_object = var_14_object; // 0x9c Mov
	var_41_string = "cs_cannibal_worker1"; // 0x9d MovS
	var_42_string = "cs_play_all_trigger.bin"; // 0x9e MovS
	func_313(var_39_object, var_40_object, var_41_string, var_42_string); // 0x9f NEW_2
	add(var_39_object); // 0xa1 TObjFunc
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0xa3 PushV
	var_44_object = var_14_object; // 0xa4 Mov
	var_45_string = "pt_cs_d1_01_fire"; // 0xa5 MovS
	var_46_string = "scripted"; // 0xa6 MovS
	var_47_string = "bonfire_big.xml"; // 0xa7 MovS
	func_321(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string); // 0xa8 NEW_2
	var_5_object = var_43_object; // 0xa9 TMov
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; // 0xab PushV
	var_62_object = var_14_object; // 0xac Mov
	var_63_string = "cs_cannibal_nudegirl"; // 0xad MovS
	var_64_string = "cs_play_all_trigger.bin"; // 0xae MovS
	func_313(var_61_object, var_62_object, var_63_string, var_64_string); // 0xaf NEW_2
	var_4_object = var_61_object; // 0xb0 TMov
	return 2; // 0xb2 Return
}


func_240(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; // 0xf0 PushV
	var_36_bool = var_31_object == 0; // 0xf1 Not
	if(var_36_bool == 0) goto Label_244; // 0xf2 JumpB
	return 4; // 0xf3 Return
	
Label_244:
	var_37_string = "noaccess"; // 0xf4 PushS
	HasProperty(var_37_string, var_34_bool); // 0xf5 ObjFunc
	var_38_bool = var_34_bool; // 0xf7 Push
	if(var_38_bool == 0) goto Label_258; // 0xf8 JumpB
	var_39_string = "noaccess"; // 0xf9 PushS
	GetProperty(var_39_string, var_35_int); // 0xfa ObjFunc
	var_40_string = "noaccess"; // 0xfc PushS
	var_41_int = 1; // 0xfd PushI
	var_42_int = var_35_int + var_41_int; // 0xfe Add
	SetProperty(var_40_string, var_42_int); // 0xff ObjFunc
	goto Label_262; // 0x101 Jump
	
Label_262:
	return 4; // 0x106 Return
	
Label_258:
	var_43_string = "noaccess"; // 0x102 PushS
	var_44_int = 1; // 0x103 PushI
	SetProperty(var_43_string, var_44_int); // 0x104 ObjFunc
}


func_339(var_89_object)
{
	var_90_int = 0; var_91_int = 0; var_92_object = Obj(); var_93_int = 0; var_94_int = 0; var_95_object = Obj(); // 0x153 PushV
	var_96_object = var_89_object; // 0x154 Push
	if(var_96_object == 0) goto Label_359; // 0x155 JumpB
	size(var_93_int); // 0x156 ObjFunc
	var_94_int = 0; // 0x158 MovI
	
Label_345:
	var_97_bool = var_94_int < var_93_int; // 0x159 LT
	if(var_97_bool == 0) goto Label_357; // 0x15a JumpB
	get(var_95_object, var_94_int); // 0x15b ObjFunc
	var_98_object = var_95_object; // 0x15d Push
	if(var_98_object == 0) goto Label_353; // 0x15e JumpB
	RemoveActor(var_95_object); // 0x15f Func
	
Label_353:
	var_95_object = 0; // 0x161 SetNull
	var_99_int = 1; // 0x162 PushI
	var_94_int = var_94_int + var_99_int; // 0x163 Add2
	goto Label_345; // 0x164 Jump
	
Label_357:
	clear(); // 0x165 ObjFunc
	
Label_359:
	return 6; // 0x167 Return
}


func_180(var_3_object, var_7_bool)
{
	var_89_object = Obj(); // 0xb4 PushV
	var_89_object = var_3_object; // 0xb5 MovT
	func_339(var_89_object); // 0xb6 NEW_2
	var_100_object = var_4_object; // 0xb8 PushT
	if(var_100_object == 0) goto Label_188; // 0xb9 JumpB
	RemoveActor(var_7_bool); // 0xba Func
	
Label_188:
	return 0; // 0xbc Return
}


func_379()
{
	var_29_float = 0.5; // 0x17b PushF
	var_30_float = 0.886; // 0x17c PushF
	SetSepia(var_29_float, var_30_float); // 0x17d Func
	return 0; // 0x17f Return
}


func_313(var_15_object, var_16_object, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x139 PushV
	var_21_cvector = CVector(0.0, 0.0, 0.0); // 0x13a PushVec
	var_22_cvector = CVector(0.0, 0.0, 1.0); // 0x13b PushVec
	AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, var_21_cvector, var_22_cvector); // 0x13c Func
	var_15_object = var_20_object; // 0x13e Mov
	return 2; // 0x13f Return
}


func_283(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x11b PushV
	self(var_81_object); // 0x11c Func
	var_79_object = var_81_object; // 0x11e Mov
	return 2; // 0x11f Return
}


func_189(var_3_object)
{
	func_180(var_6_int, var_7_float); // 0xbe NEW_2
	var_78_object = var_5_object; // 0xc0 PushT
	if(var_78_object == 0) goto Label_196; // 0xc1 JumpB
	RemoveActor(var_3_object); // 0xc2 Func
	
Label_196:
	var_79_object = Obj(); // 0xc4 PushV
	func_283(var_79_object); // 0xc5 NEW_2
	RemoveActor(var_79_object); // 0xc7 Func
	return 0; // 0xc9 Return
}


