task_0_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_int)
{
	var_13_int = 1; // 0x1d PushI
	var_14_bool = var_13_int != var_12_int; // 0x1e Neq
	if(var_14_bool == 0) goto Label_33; // 0x1f JumpB
	return 0; // 0x20 Return
	
Label_33:
	var_15_object = Obj(); // 0x21 PushV
	var_15_object = var_11_object; // 0x22 MovT
	func_342(var_15_object); // 0x23 NEW_2
	return 0; // 0x25 Return
}


task_0_event_23(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_bool = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; // 0x26 PushV
	IsPlayerActor(var_12_object, var_19_bool); // 0x27 Func
	var_25_bool = var_19_bool == 0; // 0x29 Not
	if(var_25_bool == 0) goto Label_44; // 0x2a JumpB
	return 12; // 0x2b Return
	
Label_44:
	var_11_object = var_12_object; // 0x2c TMov
	GetMainOutdoorScene(var_20_object); // 0x2d Func
	var_26_object = Obj(); // 0x2f PushV
	var_26_object = var_11_object; // 0x30 MovT
	func_342(var_26_object); // 0x31 NEW_2
	var_31_int = 1; // 0x33 PushI
	var_32_int = 2; // 0x34 PushI
	SetTimer(var_31_int, var_32_int); // 0x35 Func
	var_33_string = "cs_b1q01_unosha3"; // 0x37 PushS
	var_34_string = "cs_play_all.bin"; // 0x38 PushS
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x39 PushVec
	AddScriptedActor(var_21_object, var_33_string, var_34_string, var_20_object, var_35_cvector); // 0x3a Func
	var_36_string = "cs_b1q01_unosha4"; // 0x3c PushS
	var_37_string = "cs_play_all.bin"; // 0x3d PushS
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x3e PushVec
	AddScriptedActor(var_20_object, var_36_string, var_37_string, var_20_object, var_38_cvector); // 0x3f Func
	var_39_string = "cs_b1q01_worker3"; // 0x41 PushS
	var_40_string = "cs_play_all.bin"; // 0x42 PushS
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x43 PushVec
	AddScriptedActor(var_39_string, var_39_string, var_40_string, var_20_object, var_41_cvector); // 0x44 Func
	var_42_string = "cs_b1q01_worker4"; // 0x46 PushS
	var_43_string = "cs_play_all.bin"; // 0x47 PushS
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x48 PushVec
	AddScriptedActor(var_24_bool, var_42_string, var_43_string, var_20_object, var_44_cvector); // 0x49 Func
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; // 0x4b PushV
	var_46_object = var_20_object; // 0x4c Mov
	var_47_string = "cs_b1q01_burah1"; // 0x4d MovS
	var_48_string = "cs_b1q01_burah.xml"; // 0x4e MovS
	func_322(var_45_object, var_46_object, var_47_string, var_48_string); // 0x4f NEW_2
	var_9_object = var_45_object; // 0x50 TMov
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; // 0x52 PushV
	var_54_object = var_20_object; // 0x53 Mov
	var_55_string = "cs_b1q01_burah2"; // 0x54 MovS
	var_56_string = "cs_b1q01_burah.xml"; // 0x55 MovS
	func_322(var_53_object, var_54_object, var_55_string, var_56_string); // 0x56 NEW_2
	var_10_object = var_53_object; // 0x57 TMov
	ForceGeometryLoad(); // 0x59 TObjFunc
	ForceGeometryLoad(); // 0x5b TObjFunc
	ForceGeometryLoad(); // 0x5d TObjFunc
	ForceGeometryLoad(); // 0x5f TObjFunc
	ForceGeometryLoad(); // 0x61 TObjFunc
	ForceGeometryLoad(); // 0x63 TObjFunc
	ForceGeometryLoad(); // 0x65 TObjFunc
	ForceGeometryLoad(); // 0x67 TObjFunc
	ForceGeometryLoad(); // 0x69 TObjFunc
	ForceGeometryLoad(); // 0x6b TObjFunc
	var_57_string = "play"; // 0x6d PushS
	Trigger(var_21_object, var_57_string); // 0x6e Func
	var_58_string = "play"; // 0x70 PushS
	Trigger(var_20_object, var_58_string); // 0x71 Func
	var_59_string = "play"; // 0x73 PushS
	Trigger(var_59_string, var_59_string); // 0x74 Func
	var_60_string = "play"; // 0x76 PushS
	Trigger(var_24_bool, var_60_string); // 0x77 Func
	var_61_string = "player"; // 0x79 PushS
	FindActor(var_21_object, var_61_string); // 0x7a Func
	func_351(); // 0x7d NEW_2
	var_64_object = Obj(); // 0x7f PushV
	var_64_object = var_21_object; // 0x80 Mov
	func_273(var_64_object); // 0x81 NEW_2
	var_78_string = "cs_b1q01.mot"; // 0x83 PushS
	CameraPlay(var_78_string); // 0x84 Func
	CameraWaitForPlayFinish(); // 0x86 Func
	var_79_object = Obj(); // 0x88 PushV
	var_79_object = var_21_object; // 0x89 Mov
	func_296(var_79_object); // 0x8a NEW_2
	func_356(); // 0x8d NEW_2
	func_178(var_16_cvector, var_17_cvector, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_cvector, var_23_cvector, var_24_bool); // 0x90 NEW_2
	var_101_object = var_10_object; // 0x92 PushT
	if(var_101_object == 0) goto Label_152; // 0x93 JumpB
	var_102_string = "remove"; // 0x94 PushS
	Trigger(var_16_cvector, var_102_string); // 0x95 Func
	var_10_object = 0; // 0x97 SetNullT
	
Label_152:
	CameraSwitchToNormal(); // 0x98 Func
	var_103_int = 1; // 0x9a PushI
	KillTimer(var_103_int); // 0x9b Func
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x9d PushV
	var_105_string = "quest_b1_01"; // 0x9e MovS
	var_106_string = "cutscene_end"; // 0x9f MovS
	func_330(var_104_bool, var_105_string, var_106_string); // 0xa0 NEW_2
	var_110_string = "warehouse_notkin"; // 0xa2 PushS
	GetSceneByName(var_20_object, var_110_string); // 0xa3 Func
	var_111_string = "pt_door1"; // 0xa5 PushS
	GetLocator(var_111_string, var_24_bool, var_22_cvector, var_23_cvector); // 0xa6 ObjFunc
	Teleport(var_21_object, var_20_object, var_22_cvector, var_23_cvector); // 0xa8 Func
	var_112_object = Obj(); // 0xaa PushV
	func_316(var_112_object); // 0xab NEW_2
	RemoveActor(var_112_object); // 0xad Func
	return 12; // 0xaf Return
}


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	func_178(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object); // 0xd8 NEW_2
	var_21_object = var_10_object; // 0xda PushT
	if(var_21_object == 0) goto Label_222; // 0xdb JumpB
	RemoveActor(var_2_object); // 0xdc Func
	
Label_222:
	return 0; // 0xde Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0xe3 PushV
	var_15_string = "cleanup"; // 0xe4 PushS
	var_16_bool = var_12_string == var_15_string; // 0xe5 Eq
	if(var_16_bool == 0) goto Label_250; // 0xe6 JumpB
	var_0_bool = 1; // 0xe7 TMovB
	IsLoaded(var_14_bool); // 0xe8 Func
	var_17_bool = 0; // 0xea PushV
	var_17_bool = 0; // 0xeb MovB
	var_18_bool = var_14_bool == 0; // 0xec Not
	if(var_18_bool == 0) goto Label_243; // 0xed JumpB
	var_19_bool = 0; // 0xee PushV
	func_271(var_19_bool); // 0xef NEW_2
	if(var_19_bool == 0) goto Label_243; // 0xf1 JumpB
	var_17_bool = 1; // 0xf2 MovB
	
Label_243:
	if(var_17_bool == 0) goto Label_249; // 0xf3 JumpB
	var_20_object = Obj(); // 0xf4 PushV
	func_316(var_20_object); // 0xf5 NEW_2
	RemoveActor(var_20_object); // 0xf7 Func
	
Label_249:
	goto Label_254; // 0xf9 Jump
	
Label_254:
	return 2; // 0xfe Return
	
Label_250:
	var_23_string = "restore"; // 0xfa PushS
	var_24_bool = var_12_string == var_23_string; // 0xfb Eq
	if(var_24_bool == 0) goto Label_254; // 0xfc JumpB
	var_0_bool = 0; // 0xfd TMovB
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_bool = 0; // 0xff PushV
	var_12_bool = 0; // 0x100 MovB
	var_13_bool = var_0_bool; // 0x101 PushT
	if(var_13_bool == 0) goto Label_264; // 0x102 JumpB
	var_14_bool = 0; // 0x103 PushV
	func_271(var_14_bool); // 0x104 NEW_2
	if(var_14_bool == 0) goto Label_264; // 0x106 JumpB
	var_12_bool = 1; // 0x107 MovB
	
Label_264:
	if(var_12_bool == 0) goto Label_270; // 0x108 JumpB
	var_15_object = Obj(); // 0x109 PushV
	func_316(var_15_object); // 0x10a NEW_2
	RemoveActor(var_15_object); // 0x10c Func
	
Label_270:
	return 0; // 0x10e Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_13_object); // 0x1 Func
	var_14_string = "cs_b1q01_unosha1"; // 0x3 PushS
	var_15_string = "cs_play_all_trigger.bin"; // 0x4 PushS
	var_16_cvector = CVector(0.0, 0.0, 0.0); // 0x5 PushVec
	AddScriptedActor(var_12_object, var_14_string, var_15_string, var_13_object, var_16_cvector); // 0x6 Func
	var_17_string = "cs_b1q01_unosha2"; // 0x8 PushS
	var_18_string = "cs_play_all_trigger.bin"; // 0x9 PushS
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	AddScriptedActor(var_11_object, var_17_string, var_18_string, var_13_object, var_19_cvector); // 0xb Func
	var_20_string = "cs_b1q01_worker1"; // 0xd PushS
	var_21_string = "cs_play_all_trigger.bin"; // 0xe PushS
	var_22_cvector = CVector(0.0, 0.0, 0.0); // 0xf PushVec
	AddScriptedActor(var_22_cvector, var_20_string, var_21_string, var_13_object, var_22_cvector); // 0x10 Func
	var_23_string = "cs_b1q01_worker2"; // 0x12 PushS
	var_24_string = "cs_play_all_trigger.bin"; // 0x13 PushS
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x14 PushVec
	AddScriptedActor(var_24_string, var_23_string, var_24_string, var_13_object, var_25_cvector); // 0x15 Func
	func_223(); // 0x18 NEW_2
	return 2; // 0x1a Return
}


func_322(var_45_object, var_46_object, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x142 PushV
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x143 PushVec
	var_52_cvector = CVector(0.0, 0.0, 1.0); // 0x144 PushVec
	AddActor(var_50_object, var_47_string, var_46_object, var_51_cvector, var_52_cvector, var_48_string); // 0x145 Func
	var_45_object = var_50_object; // 0x147 Mov
	return 2; // 0x148 Return
}


func_223()
{
	
Label_223:
	Hold(); // 0xdf Func
	goto Label_223; // 0xe1 Jump
}


func_356()
{
	var_90_int = 0; // 0x164 PushI
	var_91_int = 0; // 0x165 PushI
	SetSepia(var_90_int, var_91_int); // 0x166 Func
	return 0; // 0x168 Return
}


func_296(var_79_object)
{
	var_80_int = 0; var_81_int = 0; // 0x128 PushV
	var_82_bool = var_79_object == 0; // 0x129 Not
	if(var_82_bool == 0) goto Label_300; // 0x12a JumpB
	return 2; // 0x12b Return
	
Label_300:
	var_83_string = "noaccess"; // 0x12c PushS
	GetProperty(var_83_string, var_81_int); // 0x12d ObjFunc
	var_84_int = 1; // 0x12f PushI
	var_85_bool = var_81_int > var_84_int; // 0x130 GT
	if(var_85_bool == 0) goto Label_312; // 0x131 JumpB
	var_86_string = "noaccess"; // 0x132 PushS
	var_87_int = 1; // 0x133 PushI
	var_88_int = var_81_int - var_87_int; // 0x134 Sub
	SetProperty(var_86_string, var_88_int); // 0x135 ObjFunc
	goto Label_315; // 0x137 Jump
	
Label_315:
	return 2; // 0x13b Return
	
Label_312:
	var_89_string = "noaccess"; // 0x138 PushS
	RemoveProperty(var_89_string); // 0x139 ObjFunc
}


func_330(var_104_bool, var_105_string, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x14a PushV
	FindActor(var_108_object, var_105_string); // 0x14b Func
	var_109_bool = var_108_object == 0; // 0x14d NullEq
	if(var_109_bool == 0) goto Label_337; // 0x14e JumpB
	var_104_bool = 0; // 0x14f MovB
	return 2; // 0x150 Return
	
Label_337:
	Trigger(var_108_object, var_106_string); // 0x151 Func
	var_104_bool = 1; // 0x153 MovB
	return 2; // 0x154 Return
}


func_271(var_14_bool)
{
	var_14_bool = 1; // 0x10f MovB
	return 0; // 0x110 Return
}


func_273(var_64_object)
{
	var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; // 0x111 PushV
	var_69_bool = var_64_object == 0; // 0x112 Not
	if(var_69_bool == 0) goto Label_277; // 0x113 JumpB
	return 4; // 0x114 Return
	
Label_277:
	var_70_string = "noaccess"; // 0x115 PushS
	HasProperty(var_70_string, var_67_bool); // 0x116 ObjFunc
	var_71_bool = var_67_bool; // 0x118 Push
	if(var_71_bool == 0) goto Label_291; // 0x119 JumpB
	var_72_string = "noaccess"; // 0x11a PushS
	GetProperty(var_72_string, var_68_int); // 0x11b ObjFunc
	var_73_string = "noaccess"; // 0x11d PushS
	var_74_int = 1; // 0x11e PushI
	var_75_int = var_68_int + var_74_int; // 0x11f Add
	SetProperty(var_73_string, var_75_int); // 0x120 ObjFunc
	goto Label_295; // 0x122 Jump
	
Label_295:
	return 4; // 0x127 Return
	
Label_291:
	var_76_string = "noaccess"; // 0x123 PushS
	var_77_int = 1; // 0x124 PushI
	SetProperty(var_76_string, var_77_int); // 0x125 ObjFunc
}


func_178(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object)
{
	var_12_object = var_5_object; // 0xb2 PushT
	if(var_12_object == 0) goto Label_182; // 0xb3 JumpB
	RemoveActor(var_7_object); // 0xb4 Func
	
Label_182:
	var_13_object = var_6_object; // 0xb6 PushT
	if(var_13_object == 0) goto Label_186; // 0xb7 JumpB
	RemoveActor(var_6_object); // 0xb8 Func
	
Label_186:
	var_14_object = var_7_object; // 0xba PushT
	if(var_14_object == 0) goto Label_190; // 0xbb JumpB
	RemoveActor(var_5_object); // 0xbc Func
	
Label_190:
	var_15_object = var_8_object; // 0xbe PushT
	if(var_15_object == 0) goto Label_194; // 0xbf JumpB
	RemoveActor(var_4_object); // 0xc0 Func
	
Label_194:
	var_16_object = var_1_object; // 0xc2 PushT
	if(var_16_object == 0) goto Label_198; // 0xc3 JumpB
	RemoveActor(var_11_object); // 0xc4 Func
	
Label_198:
	var_17_object = var_2_object; // 0xc6 PushT
	if(var_17_object == 0) goto Label_202; // 0xc7 JumpB
	RemoveActor(var_10_object); // 0xc8 Func
	
Label_202:
	var_18_object = var_3_object; // 0xca PushT
	if(var_18_object == 0) goto Label_206; // 0xcb JumpB
	RemoveActor(var_9_object); // 0xcc Func
	
Label_206:
	var_19_object = var_4_object; // 0xce PushT
	if(var_19_object == 0) goto Label_210; // 0xcf JumpB
	RemoveActor(var_8_object); // 0xd0 Func
	
Label_210:
	var_20_object = var_9_object; // 0xd2 PushT
	if(var_20_object == 0) goto Label_214; // 0xd3 JumpB
	RemoveActor(var_3_object); // 0xd4 Func
	
Label_214:
	return 0; // 0xd6 Return
}


func_342(var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x156 PushV
	IsPlayerActor(var_26_object, var_28_bool); // 0x157 Func
	var_29_bool = var_28_bool; // 0x159 Push
	if(var_29_bool == 0) goto Label_350; // 0x15a JumpB
	var_30_string = "attack"; // 0x15b PushS
	PlayGlobalMusic(var_30_string); // 0x15c Func
	
Label_350:
	return 2; // 0x15e Return
}


func_316(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x13c PushV
	self(var_17_object); // 0x13d Func
	var_15_object = var_17_object; // 0x13f Mov
	return 2; // 0x140 Return
}


func_351()
{
	var_62_float = 0.5; // 0x15f PushF
	var_63_float = 0.886; // 0x160 PushF
	SetSepia(var_62_float, var_63_float); // 0x161 Func
	return 0; // 0x163 Return
}


