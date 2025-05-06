task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_float = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_bool = 0; // 0x8 PushV
	Trace(var_3_string); // 0x9 Func
	var_34_string = "factory"; // 0xb PushS
	var_35_bool = var_3_string == var_34_string; // 0xc Eq
	if(var_35_bool == 0) goto Label_64; // 0xd JumpB
	var_36_string = ""; var_37_bool = 0; // 0xe PushV
	var_36_string = "factory@door1"; // 0xf MovS
	var_37_bool = 0; // 0x10 MovB
	func_455(var_36_string, var_37_bool); // 0x11 Call
	var_46_string = ""; var_47_bool = 0; // 0x13 PushV
	var_46_string = "ifactory_grid_door"; // 0x14 MovS
	var_47_bool = 1; // 0x15 MovB
	func_471(var_46_string, var_47_bool); // 0x16 Call
	var_56_string = "factory"; // 0x18 PushS
	GetSceneByName(var_19_object, var_56_string); // 0x19 Func
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x1b PushV
	var_58_object = var_19_object; // 0x1c Mov
	var_59_string = "pt_d5q01_Burah"; // 0x1d MovS
	var_60_string = "NPC_Burah"; // 0x1e MovS
	var_61_string = "d5q01_Burah.xml"; // 0x1f MovS
	func_437(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string); // 0x20 Call
	var_0_object = var_57_object; // 0x21 TMov
	var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = ""; // 0x23 PushV
	var_76_object = var_19_object; // 0x24 Mov
	var_77_string = "pt_d5q01_PatrolBoss"; // 0x25 MovS
	var_78_string = "pers_patrool"; // 0x26 MovS
	var_79_string = "d5q01_PatrolBoss.xml"; // 0x27 MovS
	func_437(var_75_object, var_76_object, var_77_string, var_78_string, var_79_string); // 0x28 Call
	add(var_75_object); // 0x2a TObjFunc
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = ""; // 0x2c PushV
	var_81_object = var_19_object; // 0x2d Mov
	var_82_string = "pt_d5q01_Patrol1"; // 0x2e MovS
	var_83_string = "pers_patrool"; // 0x2f MovS
	var_84_string = "d5q01_Patrol.xml"; // 0x30 MovS
	func_437(var_80_object, var_81_object, var_82_string, var_83_string, var_84_string); // 0x31 Call
	add(var_80_object); // 0x33 TObjFunc
	var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = ""; // 0x35 PushV
	var_86_object = var_19_object; // 0x36 Mov
	var_87_string = "pt_d5q01_Patrol2"; // 0x37 MovS
	var_88_string = "pers_patrool"; // 0x38 MovS
	var_89_string = "d5q01_Patrol.xml"; // 0x39 MovS
	func_437(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string); // 0x3a Call
	add(var_85_object); // 0x3c TObjFunc
	var_19_object = 0; // 0x3e SetNull
	goto Label_296; // 0x3f Jump
	
Label_296:
	return 30; // 0x128 Return
	
Label_64:
	var_90_string = "d5q01_trigger_factory"; // 0x40 PushS
	var_91_bool = var_3_string == var_90_string; // 0x41 Eq
	if(var_91_bool == 0) goto Label_214; // 0x42 JumpB
	var_92_string = "d5q01PlayCutscene"; // 0x43 PushS
	GetVariable(var_92_string, var_20_int); // 0x44 Func
	var_93_int = var_20_int; // 0x46 Push
	if(var_93_int == 0) goto Label_213; // 0x47 JumpB
	var_94_string = "d5q01"; // 0x48 PushS
	GetVariable(var_94_string, var_21_int); // 0x49 Func
	var_95_bool = 0; var_96_int = 0; // 0x4b PushV
	var_96_int = var_21_int; // 0x4c Mov
	func_525(var_95_bool, var_96_int); // 0x4d Call
	if(var_95_bool == 0) goto Label_213; // 0x4f JumpB
	var_101_string = ""; var_102_bool = 0; // 0x50 PushV
	var_101_string = "ifactory@door1"; // 0x51 MovS
	var_102_bool = 1; // 0x52 MovB
	func_455(var_101_string, var_102_bool); // 0x53 Call
	var_103_string = "factory"; // 0x55 PushS
	GetSceneByName(var_22_object, var_103_string); // 0x56 Func
	var_104_string = "d5q01PlayCutscene"; // 0x58 PushS
	var_105_int = 0; // 0x59 PushI
	SetVariable(var_104_string, var_105_int); // 0x5a Func
	var_106_object = Obj(); // 0x5c PushV
	var_106_object = var_1_object; // 0x5d MovT
	func_489(); // 0x5e Call
	var_116_string = "cs_factory_grabitel1"; // 0x60 PushS
	var_117_string = "cs_play_all.bin"; // 0x61 PushS
	var_118_cvector = CVector(0.0, 0.0, 0.0); // 0x62 PushVec
	AddScriptedActor(var_23_object, var_116_string, var_117_string, var_22_object, var_118_cvector); // 0x63 Func
	var_119_string = "cs_factory_grabitel2"; // 0x65 PushS
	var_120_string = "cs_play_all.bin"; // 0x66 PushS
	var_121_cvector = CVector(0.0, 0.0, 0.0); // 0x67 PushVec
	AddScriptedActor(var_24_object, var_119_string, var_120_string, var_22_object, var_121_cvector); // 0x68 Func
	var_122_string = "cs_factory_patrol1"; // 0x6a PushS
	var_123_string = "cs_play_all.bin"; // 0x6b PushS
	var_124_cvector = CVector(0.0, 0.0, 0.0); // 0x6c PushVec
	AddScriptedActor(var_25_object, var_122_string, var_123_string, var_22_object, var_124_cvector); // 0x6d Func
	var_125_string = "cs_factory_patrol2"; // 0x6f PushS
	var_126_string = "cs_play_all.bin"; // 0x70 PushS
	var_127_cvector = CVector(0.0, 0.0, 0.0); // 0x71 PushVec
	AddScriptedActor(var_26_object, var_125_string, var_126_string, var_22_object, var_127_cvector); // 0x72 Func
	var_128_string = "cs_factory_patrol3"; // 0x74 PushS
	var_129_string = "cs_play_all.bin"; // 0x75 PushS
	var_130_cvector = CVector(0.0, 0.0, 0.0); // 0x76 PushVec
	AddScriptedActor(var_27_object, var_128_string, var_129_string, var_22_object, var_130_cvector); // 0x77 Func
	ForceGeometryLoad(); // 0x79 ObjFunc
	ForceGeometryLoad(); // 0x7b ObjFunc
	ForceGeometryLoad(); // 0x7d ObjFunc
	var_131_string = "player"; // 0x7f PushS
	FindActor(var_28_object, var_131_string); // 0x80 Func
	var_132_object = Obj(); // 0x82 PushV
	var_132_object = var_28_object; // 0x83 Mov
	func_388(var_132_object); // 0x84 Call
	var_146_string = "space"; // 0x86 PushS
	RegisterKeyCallback(var_146_string); // 0x87 Func
	var_147_string = "cs_factory1.mot"; // 0x89 PushS
	CameraPlay(var_147_string); // 0x8a Func
	CameraWaitForPlayFinish(); // 0x8c Func
	var_148_string = "space"; // 0x8e PushS
	UnregisterKeyCallback(var_148_string); // 0x8f Func
	var_149_object = Obj(); // 0x91 PushV
	var_149_object = var_28_object; // 0x92 Mov
	func_411(var_149_object); // 0x93 Call
	RemoveActor(var_23_object); // 0x95 Func
	RemoveActor(var_24_object); // 0x97 Func
	RemoveActor(var_25_object); // 0x99 Func
	RemoveActor(var_26_object); // 0x9b Func
	RemoveActor(var_27_object); // 0x9d Func
	var_160_object = Obj(); var_161_object = Obj(); var_162_string = ""; var_163_string = ""; var_164_string = ""; // 0x9f PushV
	var_161_object = var_22_object; // 0xa0 Mov
	var_162_string = "pt_d5q01_patrol_corpse1"; // 0xa1 MovS
	var_163_string = "pers_patrool"; // 0xa2 MovS
	var_164_string = "dummy_dead_b.xml"; // 0xa3 MovS
	func_437(var_160_object, var_161_object, var_162_string, var_163_string, var_164_string); // 0xa4 Call
	add(var_160_object); // 0xa6 TObjFunc
	var_165_object = Obj(); var_166_object = Obj(); var_167_string = ""; var_168_string = ""; var_169_string = ""; // 0xa8 PushV
	var_166_object = var_22_object; // 0xa9 Mov
	var_167_string = "pt_d5q01_patrol_corpse2"; // 0xaa MovS
	var_168_string = "pers_patrool"; // 0xab MovS
	var_169_string = "dummy_dead_b.xml"; // 0xac MovS
	func_437(var_165_object, var_166_object, var_167_string, var_168_string, var_169_string); // 0xad Call
	add(var_165_object); // 0xaf TObjFunc
	var_170_object = Obj(); var_171_object = Obj(); var_172_string = ""; var_173_string = ""; var_174_string = ""; // 0xb1 PushV
	var_171_object = var_22_object; // 0xb2 Mov
	var_172_string = "pt_d5q01_grabitel_corpse1"; // 0xb3 MovS
	var_173_string = "pers_grabitel"; // 0xb4 MovS
	var_174_string = "dummy_dead_b.xml"; // 0xb5 MovS
	func_437(var_170_object, var_171_object, var_172_string, var_173_string, var_174_string); // 0xb6 Call
	add(var_170_object); // 0xb8 TObjFunc
	var_175_object = Obj(); var_176_object = Obj(); var_177_string = ""; var_178_string = ""; var_179_string = ""; // 0xba PushV
	var_176_object = var_22_object; // 0xbb Mov
	var_177_string = "pt_d5q01_grabitel_corpse2"; // 0xbc MovS
	var_178_string = "pers_grabitel"; // 0xbd MovS
	var_179_string = "dummy_dead_b.xml"; // 0xbe MovS
	func_437(var_175_object, var_176_object, var_177_string, var_178_string, var_179_string); // 0xbf Call
	add(var_175_object); // 0xc1 TObjFunc
	var_180_object = Obj(); var_181_object = Obj(); var_182_string = ""; var_183_string = ""; var_184_string = ""; // 0xc3 PushV
	var_181_object = var_22_object; // 0xc4 Mov
	var_182_string = "pt_d5q01_patrol_survived"; // 0xc5 MovS
	var_183_string = "pers_patrool"; // 0xc6 MovS
	var_184_string = "d5q01_PatrolCS.xml"; // 0xc7 MovS
	func_437(var_180_object, var_181_object, var_182_string, var_183_string, var_184_string); // 0xc8 Call
	add(var_180_object); // 0xca TObjFunc
	CameraSwitchToNormal(); // 0xcc Func
	var_28_object = 0; // 0xce SetNull
	var_27_object = 0; // 0xcf SetNull
	var_26_object = 0; // 0xd0 SetNull
	var_25_object = 0; // 0xd1 SetNull
	var_24_object = 0; // 0xd2 SetNull
	var_23_object = 0; // 0xd3 SetNull
	var_22_object = 0; // 0xd4 SetNull
	
Label_213:
	goto Label_296; // 0xd5 Jump
	
Label_214:
	var_185_string = "burah_free"; // 0xd6 PushS
	var_186_bool = var_3_string == var_185_string; // 0xd7 Eq
	if(var_186_bool == 0) goto Label_239; // 0xd8 JumpB
	GetGameTime(var_29_float); // 0xd9 Func
	var_187_int = 117; // 0xdb PushI
	var_188_bool = var_29_float >= var_187_int; // 0xdc GE
	if(var_188_bool == 0) goto Label_226; // 0xdd JumpB
	func_325(); // 0xdf Call
	goto Label_230; // 0xe1 Jump
	
Label_230:
	var_206_string = "cleanup"; // 0xe6 PushS
	Trigger(var_0_object, var_206_string); // 0xe7 Func
	var_207_string = ""; var_208_bool = 0; // 0xe9 PushV
	var_207_string = "factory@door1"; // 0xea MovS
	var_208_bool = 1; // 0xeb MovB
	func_455(var_207_string, var_208_bool); // 0xec Call
	goto Label_296; // 0xee Jump
	
Label_226:
	var_209_int = 0; // 0xe2 PushI
	var_210_int = 117; // 0xe3 PushI
	SetTimeEvent(var_209_int, var_210_int); // 0xe4 Func
	
Label_239:
	var_211_string = "factory_fight"; // 0xef PushS
	var_212_bool = var_3_string == var_211_string; // 0xf0 Eq
	if(var_212_bool == 0) goto Label_256; // 0xf1 JumpB
	var_213_string = ""; var_214_bool = 0; // 0xf2 PushV
	var_213_string = "ifactory@door1"; // 0xf3 MovS
	var_214_bool = 1; // 0xf4 MovB
	func_455(var_213_string, var_214_bool); // 0xf5 Call
	var_215_object = Obj(); var_216_string = ""; // 0xf7 PushV
	var_215_object = var_1_object; // 0xf8 MovT
	var_216_string = "attack"; // 0xf9 MovS
	func_508(var_216_string); // 0xfa Call
	var_226_string = "door_close"; // 0xfc PushS
	PlaySound(var_226_string); // 0xfd Func
	goto Label_296; // 0xff Jump
	
Label_256:
	var_227_string = "dead"; // 0x100 PushS
	var_228_bool = var_3_string == var_227_string; // 0x101 Eq
	if(var_228_bool == 0) goto Label_283; // 0x102 JumpB
	size(var_30_int); // 0x103 TObjFunc
	var_31_int = 0; // 0x105 MovI
	
Label_262:
	var_229_bool = var_31_int < var_30_int; // 0x106 LT
	if(var_229_bool == 0) goto Label_275; // 0x107 JumpB
	get(var_32_object, var_31_int); // 0x108 TObjFunc
	IsDead(var_33_bool); // 0x10a ObjFunc
	var_230_bool = var_33_bool == 0; // 0x10c Not
	if(var_230_bool == 0) goto Label_271; // 0x10d JumpB
	goto Label_275; // 0x10e Jump
	
Label_275:
	var_231_bool = var_31_int == var_30_int; // 0x113 Eq
	if(var_231_bool == 0) goto Label_282; // 0x114 JumpB
	var_232_string = ""; var_233_bool = 0; // 0x115 PushV
	var_232_string = "ifactory@door1"; // 0x116 MovS
	var_233_bool = 0; // 0x117 MovB
	func_455(var_232_string, var_233_bool); // 0x118 Call
	
Label_282:
	goto Label_296; // 0x11a Jump
	
Label_271:
	var_32_object = 0; // 0x10f SetNull
	var_234_int = 1; // 0x110 PushI
	var_31_int = var_31_int + var_234_int; // 0x111 Add2
	goto Label_262; // 0x112 Jump
	
Label_283:
	var_235_string = "fail"; // 0x11b PushS
	var_236_bool = var_3_string == var_235_string; // 0x11c Eq
	if(var_236_bool == 0) goto Label_290; // 0x11d JumpB
	func_297(); // 0x11f Call
	goto Label_296; // 0x121 Jump
	
Label_290:
	var_252_string = "completed"; // 0x122 PushS
	var_253_bool = var_3_string == var_252_string; // 0x123 Eq
	if(var_253_bool == 0) goto Label_296; // 0x124 JumpB
	func_305(); // 0x126 Call
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_int, var_4_float)
{
	var_5_int = 0; // 0x13a PushI
	ReleaseTimeEvent(var_5_int); // 0x13b Func
	func_325(); // 0x13e Call
	return 0; // 0x140 Return
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_int)
{
	CameraSwitchToNormal(); // 0x142 Func
	return 0; // 0x144 Return
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); // 0x0 PushV
	func_431(var_3_object); // 0x1 Call
	var_1_object = var_3_object; // 0x2 TMov
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_388(var_132_object)
{
	var_133_bool = 0; var_134_int = 0; var_135_bool = 0; var_136_int = 0; // 0x184 PushV
	var_137_bool = var_132_object == 0; // 0x185 Not
	if(var_137_bool == 0) goto Label_392; // 0x186 JumpB
	return 4; // 0x187 Return
	
Label_392:
	var_138_string = "noaccess"; // 0x188 PushS
	HasProperty(var_138_string, var_135_bool); // 0x189 ObjFunc
	var_139_bool = var_135_bool; // 0x18b Push
	if(var_139_bool == 0) goto Label_406; // 0x18c JumpB
	var_140_string = "noaccess"; // 0x18d PushS
	GetProperty(var_140_string, var_136_int); // 0x18e ObjFunc
	var_141_string = "noaccess"; // 0x190 PushS
	var_142_int = 1; // 0x191 PushI
	var_143_int = var_136_int + var_142_int; // 0x192 Add
	SetProperty(var_141_string, var_143_int); // 0x193 ObjFunc
	goto Label_410; // 0x195 Jump
	
Label_410:
	return 4; // 0x19a Return
	
Label_406:
	var_144_string = "noaccess"; // 0x196 PushS
	var_145_int = 1; // 0x197 PushI
	SetProperty(var_144_string, var_145_int); // 0x198 ObjFunc
}


func_325()
{
	var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); var_9_int = 0; // 0x145 PushV
	GetMainOutdoorScene(var_8_object); // 0x146 Func
	var_10_int = 2; // 0x148 PushI
	irand(var_9_int, var_10_int); // 0x149 Func
	var_11_string = "Girl location: "; // 0x14b PushS
	var_12_int = 1; // 0x14c PushI
	var_13_int = var_9_int + var_12_int; // 0x14d Add
	var_14_int = var_11_string + var_13_int; // 0x14e Add
	Trace(var_14_int); // 0x14f Func
	var_15_string = "d5q01_girl_corpse"; // 0x151 PushS
	var_16_int = 1; // 0x152 PushI
	var_17_int = var_9_int + var_16_int; // 0x153 Add
	var_18_int = var_15_string + var_17_int; // 0x154 Add
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x155 PushVec
	var_20_cvector = CVector(0.0, 0.0, 1.0); // 0x156 PushVec
	var_21_string = "d5q01_girl_corpse.xml"; // 0x157 PushS
	AddActor(var_20_cvector, var_18_int, var_8_object, var_19_cvector, var_20_cvector, var_21_string); // 0x158 Func
	var_22_string = "cleanup"; // 0x15a PushS
	Trigger(var_9_int, var_22_string); // 0x15b Func
	return 4; // 0x15d Return
}


func_455(var_36_string, var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x1c7 PushV
	FindActor(var_39_object, var_36_string); // 0x1c8 Func
	var_40_bool = var_39_object == 0; // 0x1ca Not
	if(var_40_bool == 0) goto Label_466; // 0x1cb JumpB
	var_41_string = "Door "; // 0x1cc PushS
	var_42_int = var_41_string + var_36_string; // 0x1cd Add
	var_43_string = " not found"; // 0x1ce PushS
	var_44_int = var_42_int + var_43_string; // 0x1cf Add
	Trace(var_44_int); // 0x1d0 Func
	
Label_466:
	var_45_string = "locked"; // 0x1d2 PushS
	SetProperty(var_45_string, var_37_bool); // 0x1d3 ObjFunc
	return 2; // 0x1d5 Return
}


func_489()
{
	var_107_int = 0; var_108_int = 0; var_109_object = Obj(); var_110_int = 0; var_111_int = 0; var_112_object = Obj(); // 0x1e9 PushV
	size(var_110_int); // 0x1ea ObjFunc
	var_111_int = 0; // 0x1ec MovI
	
Label_493:
	var_113_bool = var_111_int < var_110_int; // 0x1ed LT
	if(var_113_bool == 0) goto Label_505; // 0x1ee JumpB
	get(var_112_object, var_111_int); // 0x1ef ObjFunc
	var_114_object = var_112_object; // 0x1f1 Push
	if(var_114_object == 0) goto Label_501; // 0x1f2 JumpB
	RemoveActor(var_112_object); // 0x1f3 Func
	
Label_501:
	var_112_object = 0; // 0x1f5 SetNull
	var_115_int = 1; // 0x1f6 PushI
	var_111_int = var_111_int + var_115_int; // 0x1f7 Add2
	goto Label_493; // 0x1f8 Jump
	
Label_505:
	clear(); // 0x1f9 ObjFunc
	return 6; // 0x1fb Return
}


func_297()
{
	var_237_string = "d5q01"; // 0x129 PushS
	var_238_int = -1; // 0x12a PushI
	SetVariable(var_237_string, var_238_int); // 0x12b Func
	func_351(var_31_int, var_32_object, var_33_bool); // 0x12e Call
	return 0; // 0x130 Return
}


func_525(var_95_bool, var_96_int)
{
	var_95_bool = 0; // 0x20e MovB
	var_97_int = 1; // 0x20f PushI
	var_98_bool = var_96_int >= var_97_int; // 0x210 GE
	if(var_98_bool == 0) goto Label_534; // 0x211 JumpB
	var_99_int = 1000; // 0x212 PushI
	var_100_bool = var_96_int < var_99_int; // 0x213 LT
	if(var_100_bool == 0) goto Label_534; // 0x214 JumpB
	var_95_bool = 1; // 0x215 MovB
	
Label_534:
	return 0; // 0x216 Return
}


func_431(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x1af PushV
	CreateObjectVector(var_5_object); // 0x1b0 Func
	var_3_object = var_5_object; // 0x1b2 Mov
	return 2; // 0x1b3 Return
}


func_305()
{
	var_254_string = "d5q01"; // 0x131 PushS
	var_255_int = 1000; // 0x132 PushI
	SetVariable(var_254_string, var_255_int); // 0x133 Func
	func_351(var_31_int, var_32_object, var_33_bool); // 0x136 Call
	return 0; // 0x138 Return
}


func_437(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x1b5 PushV
	GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector); // 0x1b6 ObjFunc
	var_70_bool = var_66_bool == 0; // 0x1b8 Not
	if(var_70_bool == 0) goto Label_450; // 0x1b9 JumpB
	var_71_string = "Locator "; // 0x1ba PushS
	var_72_int = var_71_string + var_59_string; // 0x1bb Add
	var_73_string = " doesn't exist"; // 0x1bc PushS
	var_74_int = var_72_int + var_73_string; // 0x1bd Add
	Trace(var_74_int); // 0x1be Func
	var_69_object = 0; // 0x1c0 SetNull
	goto Label_452; // 0x1c1 Jump
	
Label_452:
	var_57_object = var_69_object; // 0x1c4 Mov
	return 8; // 0x1c5 Return
	
Label_450:
	AddActor(var_69_object, var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string); // 0x1c2 Func
}


func_471(var_46_string, var_47_bool)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1d7 PushV
	FindActor(var_49_object, var_46_string); // 0x1d8 Func
	var_50_bool = var_49_object == 0; // 0x1da Not
	if(var_50_bool == 0) goto Label_482; // 0x1db JumpB
	var_51_string = "Door "; // 0x1dc PushS
	var_52_int = var_51_string + var_46_string; // 0x1dd Add
	var_53_string = " not found"; // 0x1de PushS
	var_54_int = var_52_int + var_53_string; // 0x1df Add
	Trace(var_54_int); // 0x1e0 Func
	
Label_482:
	Close(); // 0x1e2 ObjFunc
	var_55_string = "locked"; // 0x1e4 PushS
	SetProperty(var_55_string, var_47_bool); // 0x1e5 ObjFunc
	return 2; // 0x1e7 Return
}


func_411(var_149_object)
{
	var_150_int = 0; var_151_int = 0; // 0x19b PushV
	var_152_bool = var_149_object == 0; // 0x19c Not
	if(var_152_bool == 0) goto Label_415; // 0x19d JumpB
	return 2; // 0x19e Return
	
Label_415:
	var_153_string = "noaccess"; // 0x19f PushS
	GetProperty(var_153_string, var_151_int); // 0x1a0 ObjFunc
	var_154_int = 1; // 0x1a2 PushI
	var_155_bool = var_151_int > var_154_int; // 0x1a3 GT
	if(var_155_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_156_string = "noaccess"; // 0x1a5 PushS
	var_157_int = 1; // 0x1a6 PushI
	var_158_int = var_151_int - var_157_int; // 0x1a7 Sub
	SetProperty(var_156_string, var_158_int); // 0x1a8 ObjFunc
	goto Label_430; // 0x1aa Jump
	
Label_430:
	return 2; // 0x1ae Return
	
Label_427:
	var_159_string = "noaccess"; // 0x1ab PushS
	RemoveProperty(var_159_string); // 0x1ac ObjFunc
}


func_508(var_216_string)
{
	var_217_int = 0; var_218_int = 0; var_219_object = Obj(); var_220_int = 0; var_221_int = 0; var_222_object = Obj(); // 0x1fc PushV
	size(var_220_int); // 0x1fd ObjFunc
	var_221_int = 0; // 0x1ff MovI
	
Label_512:
	var_223_bool = var_221_int < var_220_int; // 0x200 LT
	if(var_223_bool == 0) goto Label_524; // 0x201 JumpB
	get(var_222_object, var_221_int); // 0x202 ObjFunc
	var_224_object = var_222_object; // 0x204 Push
	if(var_224_object == 0) goto Label_520; // 0x205 JumpB
	Trigger(var_222_object, var_216_string); // 0x206 Func
	
Label_520:
	var_222_object = 0; // 0x208 SetNull
	var_225_int = 1; // 0x209 PushI
	var_221_int = var_221_int + var_225_int; // 0x20a Add2
	goto Label_512; // 0x20b Jump
	
Label_524:
	return 6; // 0x20c Return
}


func_351(var_0_object, var_1_object, var_33_bool)
{
	EventDisable(26); // 0x15f EventDisable
	EventDisable(9); // 0x160 EventDisable
	var_239_object = var_0_object; // 0x161 PushT
	if(var_239_object == 0) goto Label_358; // 0x162 JumpB
	var_240_string = "cleanup"; // 0x163 PushS
	Trigger(var_0_object, var_240_string); // 0x164 Func
	
Label_358:
	var_241_object = var_2_object; // 0x166 PushT
	if(var_241_object == 0) goto Label_363; // 0x167 JumpB
	var_242_string = "cleanup"; // 0x168 PushS
	Trigger(var_33_bool, var_242_string); // 0x169 Func
	
Label_363:
	var_243_string = ""; var_244_bool = 0; // 0x16b PushV
	var_243_string = "ifactory_grid_door"; // 0x16c MovS
	var_244_bool = 0; // 0x16d MovB
	func_471(var_243_string, var_244_bool); // 0x16e Call
	var_245_object = Obj(); var_246_string = ""; // 0x170 PushV
	var_245_object = var_1_object; // 0x171 MovT
	var_246_string = "cleanup"; // 0x172 MovS
	func_508(var_246_string); // 0x173 Call
	clear(); // 0x175 TObjFunc
	var_247_string = ""; var_248_bool = 0; // 0x177 PushV
	var_247_string = "factory@door1"; // 0x178 MovS
	var_248_bool = 1; // 0x179 MovB
	func_455(var_247_string, var_248_bool); // 0x17a Call
	var_249_string = "d5q01PlayCutscene"; // 0x17c PushS
	var_250_int = 0; // 0x17d PushI
	SetVariable(var_249_string, var_250_int); // 0x17e Func
	var_251_int = 0; // 0x180 PushI
	ReleaseTimeEvent(var_251_int); // 0x181 Func
	return 0; // 0x183 Return
}


