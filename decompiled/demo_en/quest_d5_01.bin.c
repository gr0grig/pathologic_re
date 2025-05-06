task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_float = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_float = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; // 0x30 PushV
	Trace(var_6_string); // 0x31 Func
	var_27_string = "factory"; // 0x33 PushS
	var_28_bool = var_6_string == var_27_string; // 0x34 Eq
	if(var_28_bool == 0) goto Label_104; // 0x35 JumpB
	var_29_string = ""; var_30_bool = 0; // 0x36 PushV
	var_29_string = "factory@door1"; // 0x37 MovS
	var_30_bool = 0; // 0x38 MovB
	func_521(var_29_string, var_30_bool); // 0x39 NEW_2
	var_39_string = ""; var_40_bool = 0; // 0x3b PushV
	var_39_string = "ifactory_grid_door"; // 0x3c MovS
	var_40_bool = 1; // 0x3d MovB
	func_538(var_39_string, var_40_bool); // 0x3e NEW_2
	var_50_string = "factory"; // 0x40 PushS
	GetSceneByName(var_17_object, var_50_string); // 0x41 Func
	var_51_object = Obj(); var_52_object = Obj(); var_53_string = ""; var_54_string = ""; var_55_string = ""; // 0x43 PushV
	var_52_object = var_17_object; // 0x44 Mov
	var_53_string = "pt_d5q01_Burah"; // 0x45 MovS
	var_54_string = "NPC_Burah"; // 0x46 MovS
	var_55_string = "d5q01_Burah.xml"; // 0x47 MovS
	func_485(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string); // 0x48 NEW_2
	var_0_object = var_51_object; // 0x49 TMov
	var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = ""; // 0x4b PushV
	var_70_object = var_17_object; // 0x4c Mov
	var_71_string = "pt_d5q01_PatrolBoss"; // 0x4d MovS
	var_72_string = "pers_patrool"; // 0x4e MovS
	var_73_string = "d5q01_PatrolBoss.xml"; // 0x4f MovS
	func_485(var_69_object, var_70_object, var_71_string, var_72_string, var_73_string); // 0x50 NEW_2
	add(var_69_object); // 0x52 TObjFunc
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = ""; // 0x54 PushV
	var_75_object = var_17_object; // 0x55 Mov
	var_76_string = "pt_d5q01_Patrol1"; // 0x56 MovS
	var_77_string = "pers_patrool"; // 0x57 MovS
	var_78_string = "d5q01_Patrol.xml"; // 0x58 MovS
	func_485(var_74_object, var_75_object, var_76_string, var_77_string, var_78_string); // 0x59 NEW_2
	add(var_74_object); // 0x5b TObjFunc
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x5d PushV
	var_80_object = var_17_object; // 0x5e Mov
	var_81_string = "pt_d5q01_Patrol2"; // 0x5f MovS
	var_82_string = "pers_patrool"; // 0x60 MovS
	var_83_string = "d5q01_Patrol.xml"; // 0x61 MovS
	func_485(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x62 NEW_2
	add(var_79_object); // 0x64 TObjFunc
	var_17_object = 0; // 0x66 SetNull
	goto Label_309; // 0x67 Jump
	
Label_309:
	return 20; // 0x135 Return
	
Label_104:
	var_84_string = "d5q01_trigger_factory"; // 0x68 PushS
	var_85_bool = var_6_string == var_84_string; // 0x69 Eq
	if(var_85_bool == 0) goto Label_138; // 0x6a JumpB
	var_86_string = "d5q01PlayCutscene"; // 0x6b PushS
	GetVariable(var_86_string, var_18_int); // 0x6c Func
	var_87_int = var_18_int; // 0x6e Push
	if(var_87_int == 0) goto Label_137; // 0x6f JumpB
	var_88_string = "d5q01"; // 0x70 PushS
	GetVariable(var_88_string, var_19_int); // 0x71 Func
	var_89_bool = 0; var_90_int = 0; // 0x73 PushV
	var_90_int = var_19_int; // 0x74 Mov
	func_665(var_89_bool, var_90_int); // 0x75 NEW_2
	if(var_89_bool == 0) goto Label_137; // 0x77 JumpB
	var_95_string = ""; var_96_bool = 0; // 0x78 PushV
	var_95_string = "ifactory@door1"; // 0x79 MovS
	var_96_bool = 1; // 0x7a MovB
	func_521(var_95_string, var_96_bool); // 0x7b NEW_2
	var_97_string = "d5q01PlayCutscene"; // 0x7d PushS
	var_98_int = 0; // 0x7e PushI
	SetVariable(var_97_string, var_98_int); // 0x7f Func
	var_99_object = Obj(); // 0x81 PushV
	var_99_object = var_1_object; // 0x82 MovT
	func_604(var_99_object); // 0x83 NEW_2
	var_110_object = Obj(); var_111_string = ""; // 0x85 PushV
	var_111_string = "quest_d5_01_cutscene"; // 0x86 MovS
	func_474(var_110_object, var_111_string); // 0x87 NEW_2
	
Label_137:
	goto Label_309; // 0x89 Jump
	
Label_138:
	var_118_string = "cutscene_end"; // 0x8a PushS
	var_119_bool = var_6_string == var_118_string; // 0x8b Eq
	if(var_119_bool == 0) goto Label_191; // 0x8c JumpB
	var_120_string = "factory"; // 0x8d PushS
	GetSceneByName(var_20_object, var_120_string); // 0x8e Func
	var_121_object = Obj(); var_122_object = Obj(); var_123_string = ""; var_124_string = ""; var_125_string = ""; // 0x90 PushV
	var_122_object = var_20_object; // 0x91 Mov
	var_123_string = "pt_d5q01_patrol_corpse1"; // 0x92 MovS
	var_124_string = "pers_patrool"; // 0x93 MovS
	var_125_string = "dummy_dead_disp_b.xml"; // 0x94 MovS
	func_485(var_121_object, var_122_object, var_123_string, var_124_string, var_125_string); // 0x95 NEW_2
	add(var_121_object); // 0x97 TObjFunc
	var_126_object = Obj(); var_127_object = Obj(); var_128_string = ""; var_129_string = ""; var_130_string = ""; // 0x99 PushV
	var_127_object = var_20_object; // 0x9a Mov
	var_128_string = "pt_d5q01_patrol_corpse2"; // 0x9b MovS
	var_129_string = "pers_patrool"; // 0x9c MovS
	var_130_string = "dummy_dead_disp_b.xml"; // 0x9d MovS
	func_485(var_126_object, var_127_object, var_128_string, var_129_string, var_130_string); // 0x9e NEW_2
	add(var_126_object); // 0xa0 TObjFunc
	var_131_object = Obj(); var_132_object = Obj(); var_133_string = ""; var_134_string = ""; var_135_string = ""; // 0xa2 PushV
	var_132_object = var_20_object; // 0xa3 Mov
	var_133_string = "pt_d5q01_grabitel_corpse1"; // 0xa4 MovS
	var_134_string = "pers_grabitel"; // 0xa5 MovS
	var_135_string = "dummy_dead_disp_b.xml"; // 0xa6 MovS
	func_485(var_131_object, var_132_object, var_133_string, var_134_string, var_135_string); // 0xa7 NEW_2
	add(var_131_object); // 0xa9 TObjFunc
	var_136_object = Obj(); var_137_object = Obj(); var_138_string = ""; var_139_string = ""; var_140_string = ""; // 0xab PushV
	var_137_object = var_20_object; // 0xac Mov
	var_138_string = "pt_d5q01_grabitel_corpse2"; // 0xad MovS
	var_139_string = "pers_grabitel"; // 0xae MovS
	var_140_string = "dummy_dead_disp_b.xml"; // 0xaf MovS
	func_485(var_136_object, var_137_object, var_138_string, var_139_string, var_140_string); // 0xb0 NEW_2
	add(var_136_object); // 0xb2 TObjFunc
	var_141_object = Obj(); var_142_object = Obj(); var_143_string = ""; var_144_string = ""; var_145_string = ""; // 0xb4 PushV
	var_142_object = var_20_object; // 0xb5 Mov
	var_143_string = "pt_d5q01_patrol_survived"; // 0xb6 MovS
	var_144_string = "pers_patrool"; // 0xb7 MovS
	var_145_string = "d5q01_PatrolCS.xml"; // 0xb8 MovS
	func_485(var_141_object, var_142_object, var_143_string, var_144_string, var_145_string); // 0xb9 NEW_2
	add(var_141_object); // 0xbb TObjFunc
	var_20_object = 0; // 0xbd SetNull
	goto Label_309; // 0xbe Jump
	
Label_191:
	var_146_string = "burah_free"; // 0xbf PushS
	var_147_bool = var_6_string == var_146_string; // 0xc0 Eq
	if(var_147_bool == 0) goto Label_216; // 0xc1 JumpB
	GetGameTime(var_21_float); // 0xc2 Func
	var_148_int = 116; // 0xc4 PushI
	var_149_bool = var_21_float >= var_148_int; // 0xc5 GE
	if(var_149_bool == 0) goto Label_203; // 0xc6 JumpB
	func_338(); // 0xc8 NEW_2
	goto Label_207; // 0xca Jump
	
Label_207:
	var_164_string = "cleanup"; // 0xcf PushS
	Trigger(var_0_object, var_164_string); // 0xd0 Func
	var_165_string = ""; var_166_bool = 0; // 0xd2 PushV
	var_165_string = "factory@door1"; // 0xd3 MovS
	var_166_bool = 1; // 0xd4 MovB
	func_521(var_165_string, var_166_bool); // 0xd5 NEW_2
	goto Label_309; // 0xd7 Jump
	
Label_203:
	var_167_int = 0; // 0xcb PushI
	var_168_int = 116; // 0xcc PushI
	SetTimeEvent(var_167_int, var_168_int); // 0xcd Func
	
Label_216:
	var_169_string = "factory_fight"; // 0xd8 PushS
	var_170_bool = var_6_string == var_169_string; // 0xd9 Eq
	if(var_170_bool == 0) goto Label_241; // 0xda JumpB
	var_171_string = ""; var_172_bool = 0; // 0xdb PushV
	var_171_string = "ifactory@door1"; // 0xdc MovS
	var_172_bool = 1; // 0xdd MovB
	func_521(var_171_string, var_172_bool); // 0xde NEW_2
	var_173_object = Obj(); var_174_string = ""; // 0xe0 PushV
	var_173_object = var_1_object; // 0xe1 MovT
	var_174_string = "attack"; // 0xe2 MovS
	func_646(var_173_object, var_174_string); // 0xe3 NEW_2
	var_185_string = "door_close"; // 0xe5 PushS
	PlaySound(var_185_string); // 0xe6 Func
	var_186_bool = 0; var_187_object = Obj(); var_188_float = 0; // 0xe8 PushV
	var_189_object = Obj(); // 0xe9 PushV
	func_416(var_189_object); // 0xea NEW_2
	var_187_object = var_189_object; // 0xeb Mov
	var_188_float = -0.25; // 0xed MovF
	func_559(var_186_bool, var_187_object, var_188_float); // 0xee NEW_2
	goto Label_309; // 0xf0 Jump
	
Label_241:
	var_228_string = "dead"; // 0xf1 PushS
	var_229_bool = var_6_string == var_228_string; // 0xf2 Eq
	if(var_229_bool == 0) goto Label_276; // 0xf3 JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; // 0xf4 PushV
	var_233_object = Obj(); // 0xf5 PushV
	func_416(var_233_object); // 0xf6 NEW_2
	var_231_object = var_233_object; // 0xf7 Mov
	var_232_float = -0.25; // 0xf9 MovF
	func_559(var_230_bool, var_231_object, var_232_float); // 0xfa NEW_2
	size(var_22_int); // 0xfc TObjFunc
	var_23_int = 0; // 0xfe MovI
	
Label_255:
	var_234_bool = var_23_int < var_22_int; // 0xff LT
	if(var_234_bool == 0) goto Label_268; // 0x100 JumpB
	get(var_24_object, var_23_int); // 0x101 TObjFunc
	IsDead(var_25_bool); // 0x103 ObjFunc
	var_235_bool = var_25_bool == 0; // 0x105 Not
	if(var_235_bool == 0) goto Label_264; // 0x106 JumpB
	goto Label_268; // 0x107 Jump
	
Label_268:
	var_236_bool = var_23_int == var_22_int; // 0x10c Eq
	if(var_236_bool == 0) goto Label_275; // 0x10d JumpB
	var_237_string = ""; var_238_bool = 0; // 0x10e PushV
	var_237_string = "ifactory@door1"; // 0x10f MovS
	var_238_bool = 0; // 0x110 MovB
	func_521(var_237_string, var_238_bool); // 0x111 NEW_2
	
Label_275:
	goto Label_309; // 0x113 Jump
	
Label_264:
	var_24_object = 0; // 0x108 SetNull
	var_239_int = 1; // 0x109 PushI
	var_23_int = var_23_int + var_239_int; // 0x10a Add2
	goto Label_255; // 0x10b Jump
	
Label_276:
	var_240_string = "cleanup"; // 0x114 PushS
	var_241_bool = var_6_string == var_240_string; // 0x115 Eq
	if(var_241_bool == 0) goto Label_296; // 0x116 JumpB
	var_242_string = "d5q01"; // 0x117 PushS
	GetVariable(var_242_string, var_26_int); // 0x118 Func
	var_243_int = 1000; // 0x11a PushI
	var_244_bool = var_26_int != var_243_int; // 0x11b Neq
	if(var_244_bool == 0) goto Label_289; // 0x11c JumpB
	func_310(); // 0x11e NEW_2
	goto Label_292; // 0x120 Jump
	
Label_292:
	func_404(var_26_int); // 0x125 NEW_2
	goto Label_309; // 0x127 Jump
	
Label_289:
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int); // 0x122 NEW_2
	
Label_296:
	var_278_string = "fail"; // 0x128 PushS
	var_279_bool = var_6_string == var_278_string; // 0x129 Eq
	if(var_279_bool == 0) goto Label_303; // 0x12a JumpB
	func_310(); // 0x12c NEW_2
	goto Label_309; // 0x12e Jump
	
Label_303:
	var_280_string = "completed"; // 0x12f PushS
	var_281_bool = var_6_string == var_280_string; // 0x130 Eq
	if(var_281_bool == 0) goto Label_309; // 0x131 JumpB
	func_318(); // 0x133 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_int = 0; // 0x147 PushI
	ReleaseTimeEvent(var_8_int); // 0x148 Func
	func_338(); // 0x14b NEW_2
	return 0; // 0x14d Return
}


task_0_event_24(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int)
{
	CameraSwitchToNormal(); // 0x14f Func
	return 0; // 0x151 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	CreateObjectVector(var_7_object); // 0x1 Func
	CreateObjectVector(var_3_object); // 0x3 Func
	GetMainOutdoorScene(var_7_object); // 0x5 Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0x7 PushV
	var_9_object = var_7_object; // 0x8 Mov
	var_10_string = "pt_d5q01_sobor_guard1"; // 0x9 MovS
	var_11_string = "pers_wasted_male"; // 0xa MovS
	var_12_string = "d5q01_sobor_guard1.xml"; // 0xb MovS
	func_503(var_9_object, var_10_string, var_11_string, var_12_string); // 0xc NEW_2
	add(var_8_object); // 0xe TObjFunc
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x10 PushV
	var_27_object = var_7_object; // 0x11 Mov
	var_28_string = "pt_d5q01_sobor_guard2"; // 0x12 MovS
	var_29_string = "pers_wasted_male"; // 0x13 MovS
	var_30_string = "d5q01_sobor_guard2.xml"; // 0x14 MovS
	func_503(var_27_object, var_28_string, var_29_string, var_30_string); // 0x15 NEW_2
	add(var_26_object); // 0x17 TObjFunc
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = ""; // 0x19 PushV
	var_32_object = var_7_object; // 0x1a Mov
	var_33_string = "pt_d5q01_sobor_guard3"; // 0x1b MovS
	var_34_string = "pers_wasted_male"; // 0x1c MovS
	var_35_string = "d5q01_sobor_guard3.xml"; // 0x1d MovS
	func_503(var_32_object, var_33_string, var_34_string, var_35_string); // 0x1e NEW_2
	add(var_31_object); // 0x20 TObjFunc
	var_36_object = Obj(); var_37_object = Obj(); var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x22 PushV
	var_37_object = var_7_object; // 0x23 Mov
	var_38_string = "pt_d5q01_theater_guard"; // 0x24 MovS
	var_39_string = "pers_whitemask"; // 0x25 MovS
	var_40_string = "d5q01_theater_guard.xml"; // 0x26 MovS
	func_503(var_37_object, var_38_string, var_39_string, var_40_string); // 0x27 NEW_2
	add(var_36_object); // 0x29 TObjFunc
	
Label_43:
	Hold(); // 0x2b Func
	goto Label_43; // 0x2d Jump
}


func_646(var_173_object, var_174_string)
{
	var_175_int = 0; var_176_int = 0; var_177_object = Obj(); var_178_int = 0; var_179_int = 0; var_180_object = Obj(); // 0x286 PushV
	var_181_object = var_173_object; // 0x287 Push
	if(var_181_object == 0) goto Label_664; // 0x288 JumpB
	size(var_178_int); // 0x289 ObjFunc
	var_179_int = 0; // 0x28b MovI
	
Label_652:
	var_182_bool = var_179_int < var_178_int; // 0x28c LT
	if(var_182_bool == 0) goto Label_664; // 0x28d JumpB
	get(var_180_object, var_179_int); // 0x28e ObjFunc
	var_183_object = var_180_object; // 0x290 Push
	if(var_183_object == 0) goto Label_660; // 0x291 JumpB
	Trigger(var_180_object, var_174_string); // 0x292 Func
	
Label_660:
	var_180_object = 0; // 0x294 SetNull
	var_184_int = 1; // 0x295 PushI
	var_179_int = var_179_int + var_184_int; // 0x296 Add2
	goto Label_652; // 0x297 Jump
	
Label_664:
	return 6; // 0x298 Return
}


func_521(var_29_string, var_30_bool)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x209 PushV
	FindActor(var_32_object, var_29_string); // 0x20a Func
	var_33_bool = var_32_object == 0; // 0x20c Not
	if(var_33_bool == 0) goto Label_533; // 0x20d JumpB
	var_34_string = "Door "; // 0x20e PushS
	var_35_int = var_34_string + var_29_string; // 0x20f Add
	var_36_string = " not found"; // 0x210 PushS
	var_37_int = var_35_int + var_36_string; // 0x211 Add
	Trace(var_37_int); // 0x212 Func
	goto Label_536; // 0x214 Jump
	
Label_536:
	return 2; // 0x218 Return
	
Label_533:
	var_38_string = "locked"; // 0x215 PushS
	SetProperty(var_38_string, var_30_bool); // 0x216 ObjFunc
}


func_457(var_275_object)
{
	var_276_object = Obj(); var_277_object = Obj(); // 0x1c9 PushV
	self(var_277_object); // 0x1ca Func
	var_275_object = var_277_object; // 0x1cc Mov
	return 2; // 0x1cd Return
}


func_463(var_219_float, var_220_float, var_221_float, var_222_float)
{
	var_223_bool = var_220_float < var_221_float; // 0x1d0 LT
	if(var_223_bool == 0) goto Label_468; // 0x1d1 JumpB
	var_219_float = var_221_float; // 0x1d2 Mov
	return 0; // 0x1d3 Return
	
Label_468:
	var_224_bool = var_220_float > var_222_float; // 0x1d4 GT
	if(var_224_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_219_float = var_222_float; // 0x1d6 Mov
	return 0; // 0x1d7 Return
	
Label_472:
	var_219_float = var_220_float; // 0x1d8 Mov
	return 0; // 0x1d9 Return
}


func_338()
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x152 PushV
	GetMainOutdoorScene(var_10_object); // 0x153 Func
	var_11_string = "d5q01_corpse_girl"; // 0x155 PushS
	var_12_cvector = CVector(0.0, 0.0, 0.0); // 0x156 PushVec
	var_13_cvector = CVector(0.0, 0.0, 1.0); // 0x157 PushVec
	var_14_string = "d5q01_girl_corpse.xml"; // 0x158 PushS
	AddActor(var_13_cvector, var_11_string, var_10_object, var_12_cvector, var_13_cvector, var_14_string); // 0x159 Func
	var_15_string = "d5q01_corpse1"; // 0x15b PushS
	var_16_cvector = CVector(0.0, 0.0, 0.0); // 0x15c PushVec
	var_17_cvector = CVector(0.0, 0.0, 1.0); // 0x15d PushVec
	var_18_string = "d5q01_corpse.xml"; // 0x15e PushS
	AddActor(var_16_cvector, var_15_string, var_10_object, var_16_cvector, var_17_cvector, var_18_string); // 0x15f Func
	var_19_string = "d5q01_corpse2"; // 0x161 PushS
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0x162 PushVec
	var_21_cvector = CVector(0.0, 0.0, 1.0); // 0x163 PushVec
	var_22_string = "d5q01_corpse.xml"; // 0x164 PushS
	AddActor(var_19_string, var_19_string, var_10_object, var_20_cvector, var_21_cvector, var_22_string); // 0x165 Func
	return 2; // 0x167 Return
}


func_594(var_197_float)
{
	var_198_object = Obj(); var_199_object = Obj(); // 0x252 PushV
	CreateFloatVector(var_199_object); // 0x253 Func
	add(var_197_float); // 0x255 ObjFunc
	var_200_int = 16; // 0x257 PushI
	SendWorldWndMessage(var_200_int, var_199_object); // 0x258 Func
	return 2; // 0x25a Return
}


func_404(var_5_object)
{
	EventDisable(26); // 0x194 EventDisable
	EventDisable(9); // 0x195 EventDisable
	var_264_object = Obj(); // 0x196 PushV
	var_264_object = var_5_object; // 0x197 MovT
	func_625(var_264_object); // 0x198 NEW_2
	var_275_object = Obj(); // 0x19a PushV
	func_457(var_275_object); // 0x19b NEW_2
	RemoveActor(var_275_object); // 0x19d Func
	return 0; // 0x19f Return
}


func_665(var_89_bool, var_90_int)
{
	var_89_bool = 0; // 0x29a MovB
	var_91_int = 1; // 0x29b PushI
	var_92_bool = var_90_int >= var_91_int; // 0x29c GE
	if(var_92_bool == 0) goto Label_674; // 0x29d JumpB
	var_93_int = 1000; // 0x29e PushI
	var_94_bool = var_90_int < var_93_int; // 0x29f LT
	if(var_94_bool == 0) goto Label_674; // 0x2a0 JumpB
	var_89_bool = 1; // 0x2a1 MovB
	
Label_674:
	return 0; // 0x2a2 Return
}


func_538(var_39_string, var_40_bool)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x21a PushV
	FindActor(var_42_object, var_39_string); // 0x21b Func
	var_43_bool = var_42_object == 0; // 0x21d Not
	if(var_43_bool == 0) goto Label_550; // 0x21e JumpB
	var_44_string = "Door "; // 0x21f PushS
	var_45_int = var_44_string + var_39_string; // 0x220 Add
	var_46_string = " not found"; // 0x221 PushS
	var_47_int = var_45_int + var_46_string; // 0x222 Add
	Trace(var_47_int); // 0x223 Func
	goto Label_557; // 0x225 Jump
	
Label_557:
	return 2; // 0x22d Return
	
Label_550:
	var_48_bool = var_40_bool; // 0x226 Push
	if(var_48_bool == 0) goto Label_554; // 0x227 JumpB
	Close(); // 0x228 ObjFunc
	
Label_554:
	var_49_string = "locked"; // 0x22a PushS
	SetProperty(var_49_string, var_40_bool); // 0x22b ObjFunc
}


func_474(var_110_object, var_111_string)
{
	var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj(); var_115_object = Obj(); // 0x1da PushV
	GetMainOutdoorScene(var_114_object); // 0x1db Func
	var_116_string = ".bin"; // 0x1dd PushS
	var_117_int = var_111_string + var_116_string; // 0x1de Add
	AddBlankActor(var_115_object, var_114_object, var_111_string, var_117_int); // 0x1df Func
	var_110_object = var_115_object; // 0x1e1 Mov
	return 4; // 0x1e2 Return
}


func_604(var_99_object)
{
	var_100_int = 0; var_101_int = 0; var_102_object = Obj(); var_103_int = 0; var_104_int = 0; var_105_object = Obj(); // 0x25c PushV
	var_106_object = var_99_object; // 0x25d Push
	if(var_106_object == 0) goto Label_624; // 0x25e JumpB
	size(var_103_int); // 0x25f ObjFunc
	var_104_int = 0; // 0x261 MovI
	
Label_610:
	var_107_bool = var_104_int < var_103_int; // 0x262 LT
	if(var_107_bool == 0) goto Label_622; // 0x263 JumpB
	get(var_105_object, var_104_int); // 0x264 ObjFunc
	var_108_object = var_105_object; // 0x266 Push
	if(var_108_object == 0) goto Label_618; // 0x267 JumpB
	RemoveActor(var_105_object); // 0x268 Func
	
Label_618:
	var_105_object = 0; // 0x26a SetNull
	var_109_int = 1; // 0x26b PushI
	var_104_int = var_104_int + var_109_int; // 0x26c Add2
	goto Label_610; // 0x26d Jump
	
Label_622:
	clear(); // 0x26e ObjFunc
	
Label_624:
	return 6; // 0x270 Return
}


func_416(var_189_object)
{
	var_190_object = Obj(); var_191_object = Obj(); // 0x1a0 PushV
	var_192_string = "player"; // 0x1a1 PushS
	FindActor(var_191_object, var_192_string); // 0x1a2 Func
	var_189_object = var_191_object; // 0x1a4 Mov
	return 2; // 0x1a5 Return
}


func_485(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x1e5 PushV
	GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector); // 0x1e6 ObjFunc
	var_64_bool = var_60_bool == 0; // 0x1e8 Not
	if(var_64_bool == 0) goto Label_498; // 0x1e9 JumpB
	var_65_string = "Locator "; // 0x1ea PushS
	var_66_int = var_65_string + var_53_string; // 0x1eb Add
	var_67_string = " doesn't exist"; // 0x1ec PushS
	var_68_int = var_66_int + var_67_string; // 0x1ed Add
	Trace(var_68_int); // 0x1ee Func
	var_63_object = 0; // 0x1f0 SetNull
	goto Label_500; // 0x1f1 Jump
	
Label_500:
	var_51_object = var_63_object; // 0x1f4 Mov
	return 8; // 0x1f5 Return
	
Label_498:
	AddActor(var_63_object, var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string); // 0x1f2 Func
}


func_423(var_209_bool, var_210_object, var_211_string)
{
	var_212_bool = 0; var_213_bool = 0; // 0x1a7 PushV
	var_214_string = "HasProperty"; // 0x1a8 PushS
	var_215_int = 2; // 0x1a9 PushI
	var_216_bool = IsFuncExist(var_210_object, var_214_string, var_215_int); // 0x1aa FuncExist
	var_217_bool = var_216_bool == 0; // 0x1ab Not
	if(var_217_bool == 0) goto Label_431; // 0x1ac JumpB
	var_209_bool = 0; // 0x1ad MovB
	return 2; // 0x1ae Return
	
Label_431:
	HasProperty(var_211_string, var_213_bool); // 0x1af ObjFunc
	var_209_bool = var_213_bool; // 0x1b1 Mov
	return 2; // 0x1b2 Return
}


func_361(var_0_object, var_1_object, var_24_object, var_25_bool, var_26_int)
{
	var_247_object = var_0_object; // 0x169 PushT
	if(var_247_object == 0) goto Label_366; // 0x16a JumpB
	var_248_string = "cleanup"; // 0x16b PushS
	Trigger(var_0_object, var_248_string); // 0x16c Func
	
Label_366:
	var_249_object = var_2_object; // 0x16e PushT
	if(var_249_object == 0) goto Label_371; // 0x16f JumpB
	var_250_string = "cleanup"; // 0x170 PushS
	Trigger(var_26_int, var_250_string); // 0x171 Func
	
Label_371:
	var_251_object = var_3_object; // 0x173 PushT
	if(var_251_object == 0) goto Label_376; // 0x174 JumpB
	var_252_string = "cleanup"; // 0x175 PushS
	Trigger(var_25_bool, var_252_string); // 0x176 Func
	
Label_376:
	var_253_object = var_4_object; // 0x178 PushT
	if(var_253_object == 0) goto Label_381; // 0x179 JumpB
	var_254_string = "cleanup"; // 0x17a PushS
	Trigger(var_24_object, var_254_string); // 0x17b Func
	
Label_381:
	var_255_string = ""; var_256_bool = 0; // 0x17d PushV
	var_255_string = "ifactory_grid_door"; // 0x17e MovS
	var_256_bool = 0; // 0x17f MovB
	func_538(var_255_string, var_256_bool); // 0x180 NEW_2
	var_257_object = Obj(); var_258_string = ""; // 0x182 PushV
	var_257_object = var_1_object; // 0x183 MovT
	var_258_string = "cleanup"; // 0x184 MovS
	func_646(var_257_object, var_258_string); // 0x185 NEW_2
	var_259_string = ""; var_260_bool = 0; // 0x187 PushV
	var_259_string = "factory@door1"; // 0x188 MovS
	var_260_bool = 1; // 0x189 MovB
	func_521(var_259_string, var_260_bool); // 0x18a NEW_2
	var_261_string = "d5q01PlayCutscene"; // 0x18c PushS
	var_262_int = 0; // 0x18d PushI
	SetVariable(var_261_string, var_262_int); // 0x18e Func
	var_263_int = 0; // 0x190 PushI
	ReleaseTimeEvent(var_263_int); // 0x191 Func
	return 0; // 0x193 Return
}


func_559(var_186_bool, var_187_object, var_188_float)
{
	var_193_bool = var_187_object == 0; // 0x230 Not
	if(var_193_bool == 0) goto Label_564; // 0x231 JumpB
	var_186_bool = 0; // 0x232 MovB
	return 0; // 0x233 Return
	
Label_564:
	var_194_int = 0; // 0x234 PushI
	var_195_bool = var_188_float > var_194_int; // 0x235 GT
	if(var_195_bool == 0) goto Label_571; // 0x236 JumpB
	var_196_int = 8; // 0x237 PushI
	SendWorldWndMessage(var_196_int); // 0x238 Func
	goto Label_580; // 0x23a Jump
	
Label_580:
	var_197_float = 0; // 0x244 PushV
	var_197_float = var_188_float; // 0x245 Mov
	func_594(var_197_float); // 0x246 NEW_2
	var_201_bool = 0; var_202_object = Obj(); var_203_string = ""; var_204_float = 0; var_205_float = 0; var_206_float = 0; // 0x248 PushV
	var_202_object = var_187_object; // 0x249 Mov
	var_203_string = "reputation"; // 0x24a MovS
	var_204_float = var_188_float; // 0x24b Mov
	var_205_float = 0; // 0x24c MovI
	var_206_float = 1; // 0x24d MovI
	func_435(var_201_bool, var_202_object, var_203_string, var_204_float, var_205_float, var_206_float); // 0x24e NEW_2
	var_186_bool = 1; // 0x250 MovB
	return 0; // 0x251 Return
	
Label_571:
	var_225_int = 0; // 0x23b PushI
	var_226_bool = var_188_float < var_225_int; // 0x23c LT
	if(var_226_bool == 0) goto Label_578; // 0x23d JumpB
	var_227_int = 9; // 0x23e PushI
	SendWorldWndMessage(var_227_int); // 0x23f Func
	goto Label_580; // 0x241 Jump
	
Label_578:
	var_186_bool = 0; // 0x242 MovB
	return 0; // 0x243 Return
}


func_625(var_264_object)
{
	var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_object = Obj(); // 0x271 PushV
	var_271_object = var_264_object; // 0x272 Push
	if(var_271_object == 0) goto Label_645; // 0x273 JumpB
	size(var_268_int); // 0x274 ObjFunc
	var_269_int = 0; // 0x276 MovI
	
Label_631:
	var_272_bool = var_269_int < var_268_int; // 0x277 LT
	if(var_272_bool == 0) goto Label_643; // 0x278 JumpB
	get(var_270_object, var_269_int); // 0x279 ObjFunc
	var_273_object = var_270_object; // 0x27b Push
	if(var_273_object == 0) goto Label_639; // 0x27c JumpB
	Remove(); // 0x27d ObjFunc
	
Label_639:
	var_270_object = 0; // 0x27f SetNull
	var_274_int = 1; // 0x280 PushI
	var_269_int = var_269_int + var_274_int; // 0x281 Add2
	goto Label_631; // 0x282 Jump
	
Label_643:
	clear(); // 0x283 ObjFunc
	
Label_645:
	return 6; // 0x285 Return
}


func_435(var_201_bool, var_202_object, var_203_string, var_204_float, var_205_float, var_206_float)
{
	var_207_float = 0; var_208_float = 0; // 0x1b3 PushV
	var_209_bool = 0; var_210_object = Obj(); var_211_string = ""; // 0x1b4 PushV
	var_210_object = var_202_object; // 0x1b5 Mov
	var_211_string = var_203_string; // 0x1b6 Mov
	func_423(var_209_bool, var_210_object, var_211_string); // 0x1b7 NEW_2
	var_218_bool = var_209_bool == 0; // 0x1b9 Not
	if(var_218_bool == 0) goto Label_445; // 0x1ba JumpB
	var_201_bool = 0; // 0x1bb MovB
	return 2; // 0x1bc Return
	
Label_445:
	GetProperty(var_203_string, var_208_float); // 0x1bd ObjFunc
	var_219_float = 0; var_220_float = 0; var_221_float = 0; var_222_float = 0; // 0x1bf PushV
	var_220_float = var_208_float + var_204_float; // 0x1c0 Add2
	var_221_float = var_205_float; // 0x1c1 Mov
	var_222_float = var_206_float; // 0x1c2 Mov
	func_463(var_219_float, var_220_float, var_221_float, var_222_float); // 0x1c3 NEW_2
	SetProperty(var_203_string, var_219_float); // 0x1c5 ObjFunc
	var_201_bool = 1; // 0x1c7 MovB
	return 2; // 0x1c8 Return
}


func_310()
{
	var_245_string = "d5q01"; // 0x136 PushS
	var_246_int = -1; // 0x137 PushI
	SetVariable(var_245_string, var_246_int); // 0x138 Func
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int); // 0x13b NEW_2
	return 0; // 0x13d Return
}


func_503(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj(); // 0x1f7 PushV
	GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector); // 0x1f8 ObjFunc
	var_21_bool = var_17_bool == 0; // 0x1fa Not
	if(var_21_bool == 0) goto Label_516; // 0x1fb JumpB
	var_22_string = "Locator "; // 0x1fc PushS
	var_23_int = var_22_string + var_10_string; // 0x1fd Add
	var_24_string = " doesn't exist"; // 0x1fe PushS
	var_25_int = var_23_int + var_24_string; // 0x1ff Add
	Trace(var_25_int); // 0x200 Func
	var_20_object = 0; // 0x202 SetNull
	goto Label_518; // 0x203 Jump
	
Label_518:
	var_8_object = var_20_object; // 0x206 Mov
	return 8; // 0x207 Return
	
Label_516:
	AddStationaryActor(var_20_object, var_18_cvector, var_19_cvector, var_11_string, var_12_string); // 0x204 ObjFunc
}


func_318()
{
	var_282_string = "d5q01"; // 0x13e PushS
	var_283_int = 1000; // 0x13f PushI
	SetVariable(var_282_string, var_283_int); // 0x140 Func
	func_361(var_22_int, var_23_int, var_24_object, var_25_bool, var_26_int); // 0x143 NEW_2
	return 0; // 0x145 Return
}


