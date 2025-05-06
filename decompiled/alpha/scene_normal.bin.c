task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x207 PushV
	var_18_bool = var_1_object == 0; // 0x208 Not
	if(var_18_bool == 0) goto Label_526; // 0x209 JumpB
	var_19_object = Obj(); // 0x20a PushV
	func_651(var_19_object); // 0x20b Call
	var_1_object = var_19_object; // 0x20c TMov
	
Label_526:
	var_22_bool = var_0_object == 0; // 0x20e Not
	if(var_22_bool == 0) goto Label_530; // 0x20f JumpB
	CreateIntVector(var_0_object); // 0x210 Func
	
Label_530:
	var_23_object = Obj(); // 0x212 PushV
	var_23_object = var_1_object; // 0x213 MovT
	func_675(); // 0x214 Call
	size(var_10_int); // 0x216 TObjFunc
	var_11_int = 0; // 0x218 MovI
	
Label_537:
	var_33_bool = var_11_int < var_10_int; // 0x219 LT
	if(var_33_bool == 0) goto Label_582; // 0x21a JumpB
	get(var_12_int, var_11_int); // 0x21b TObjFunc
	var_34_int = 1; // 0x21d PushI
	var_35_int = var_11_int + var_34_int; // 0x21e Add
	get(var_13_int, var_35_int); // 0x21f TObjFunc
	var_36_int = 2; // 0x221 PushI
	var_37_int = var_11_int + var_36_int; // 0x222 Add
	get(var_14_int, var_37_int); // 0x223 TObjFunc
	var_38_string = ""; var_39_int = 0; var_40_int = 0; // 0x225 PushV
	var_39_int = var_12_int; // 0x226 Mov
	var_40_int = var_13_int; // 0x227 Mov
	func_65(var_38_string, var_39_int, var_40_int); // 0x228 Call
	var_15_string = var_38_string; // 0x229 Mov
	var_50_string = ""; var_51_int = 0; var_52_int = 0; // 0x22b PushV
	var_51_int = var_12_int; // 0x22c Mov
	var_52_int = var_14_int; // 0x22d Mov
	func_88(var_50_string, var_51_int, var_52_int); // 0x22e Call
	var_16_string = var_50_string; // 0x22f Mov
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0x231 PushV
	var_84_int = var_12_int; // 0x232 Mov
	var_85_int = var_14_int; // 0x233 Mov
	func_171(var_83_string, var_84_int, var_85_int); // 0x234 Call
	var_17_string = var_83_string; // 0x235 Mov
	var_116_object = Obj(); var_117_object = Obj(); var_118_string = ""; var_119_string = ""; var_120_string = ""; // 0x237 PushV
	var_121_object = Obj(); // 0x238 PushV
	func_640(var_121_object); // 0x239 Call
	var_117_object = var_121_object; // 0x23a Mov
	var_118_string = var_15_string; // 0x23c Mov
	var_119_string = var_16_string; // 0x23d Mov
	var_120_string = var_17_string; // 0x23e Mov
	func_657(var_116_object, var_117_object, var_118_string, var_119_string, var_120_string); // 0x23f Call
	add(var_116_object); // 0x241 TObjFunc
	var_137_int = 3; // 0x243 PushI
	var_11_int = var_11_int + var_137_int; // 0x244 Add2
	goto Label_537; // 0x245 Jump
	
Label_582:
	return 16; // 0x246 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x247 PushV
	size(var_6_int); // 0x248 TObjFunc
	var_7_int = 0; // 0x24a MovI
	
Label_587:
	var_10_bool = var_7_int < var_6_int; // 0x24b LT
	if(var_10_bool == 0) goto Label_623; // 0x24c JumpB
	get(var_8_object, var_7_int); // 0x24d TObjFunc
	var_11_bool = var_8_object != 0; // 0x24f NullNeq
	if(var_11_bool == 0) goto Label_609; // 0x250 JumpB
	IsDead(var_9_bool); // 0x251 ObjFunc
	var_12_bool = var_9_bool == 0; // 0x253 Not
	if(var_12_bool == 0) goto Label_607; // 0x254 JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x255 PushV
	var_14_object = var_8_object; // 0x256 Mov
	var_15_string = "ToDie"; // 0x257 MovS
	func_628(var_13_bool, var_14_object, var_15_string); // 0x258 Call
	var_22_bool = var_13_bool == 0; // 0x25a Not
	if(var_22_bool == 0) goto Label_607; // 0x25b JumpB
	var_23_int = 1; // 0x25c PushI
	var_7_int = var_7_int + var_23_int; // 0x25d Add2
	goto Label_622; // 0x25e Jump
	
Label_622:
	goto Label_587; // 0x26e Jump
	
Label_607:
	RemoveActor(var_8_object); // 0x25f Func
	
Label_609:
	remove(var_7_int); // 0x261 TObjFunc
	var_24_int = 3; // 0x263 PushI
	var_25_float = var_7_int * var_24_int; // 0x264 Mult
	var_26_int = 1; // 0x265 PushI
	var_27_int = var_7_int + var_26_int; // 0x266 Add
	var_28_int = 3; // 0x267 PushI
	var_29_float = var_27_int * var_28_int; // 0x268 Mult
	remove(var_25_float, var_29_float); // 0x269 TObjFunc
	var_30_int = -1; // 0x26b PushI
	var_6_int = var_6_int + var_30_int; // 0x26c Add2
	var_8_object = 0; // 0x26d SetNull
	
Label_623:
	var_31_object = Obj(); // 0x26f PushV
	var_31_object = var_1_object; // 0x270 MovT
	func_675(); // 0x271 Call
	return 8; // 0x273 Return
}


main(var_0_object, var_1_object)
{
	var_2_bool = var_1_object == 0; // 0xfe Not
	if(var_2_bool == 0) goto Label_260; // 0xff JumpB
	var_3_object = Obj(); // 0x100 PushV
	func_651(var_3_object); // 0x101 Call
	var_1_object = var_3_object; // 0x102 TMov
	
Label_260:
	var_6_bool = var_0_object == 0; // 0x104 Not
	if(var_6_bool == 0) goto Label_264; // 0x105 JumpB
	CreateIntVector(var_0_object); // 0x106 Func
	
Label_264:
	func_275(); // 0x109 Call
	var_175_object = Obj(); // 0x10b PushV
	var_175_object = var_0_object; // 0x10c MovT
	func_0(); // 0x10d Call
	
Label_271:
	Hold(); // 0x10f Func
	goto Label_271; // 0x111 Jump
}


func_0()
{
	var_176_int = 0; var_177_string = ""; var_178_bool = 0; var_179_cvector = CVector(0,0,0); var_180_int = 0; var_181_int = 0; var_182_string = ""; var_183_bool = 0; var_184_cvector = CVector(0,0,0); var_185_int = 0; var_186_int = 0; var_187_string = ""; var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_int = 0; var_191_int = 0; var_192_string = ""; var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_int = 0; var_196_int = 0; var_197_string = ""; var_198_bool = 0; var_199_cvector = CVector(0,0,0); var_200_int = 0; var_201_int = 0; var_202_string = ""; var_203_bool = 0; var_204_cvector = CVector(0,0,0); var_205_int = 0; // 0x0 PushV
	var_191_int = 1; // 0x1 MovI
	
Label_2:
	var_206_string = "pt_child"; // 0x2 PushS
	var_192_string = var_206_string + var_191_int; // 0x3 Add2
	GetLocator(var_192_string, var_193_bool, var_194_cvector); // 0x4 Func
	var_207_bool = var_193_bool == 0; // 0x6 Not
	if(var_207_bool == 0) goto Label_9; // 0x7 JumpB
	goto Label_22; // 0x8 Jump
	
Label_22:
	var_196_int = 1; // 0x16 MovI
	
Label_23:
	var_208_string = "pt_woman"; // 0x17 PushS
	var_197_string = var_208_string + var_196_int; // 0x18 Add2
	GetLocator(var_197_string, var_198_bool, var_199_cvector); // 0x19 Func
	var_209_bool = var_198_bool == 0; // 0x1b Not
	if(var_209_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_43; // 0x1d Jump
	
Label_43:
	var_201_int = 1; // 0x2b MovI
	
Label_44:
	var_210_string = "pt_man"; // 0x2c PushS
	var_202_string = var_210_string + var_201_int; // 0x2d Add2
	GetLocator(var_202_string, var_203_bool, var_204_cvector); // 0x2e Func
	var_211_bool = var_203_bool == 0; // 0x30 Not
	if(var_211_bool == 0) goto Label_51; // 0x31 JumpB
	goto Label_64; // 0x32 Jump
	
Label_64:
	return 30; // 0x40 Return
	
Label_51:
	var_212_int = 2; // 0x33 PushI
	add(var_212_int); // 0x34 ObjFunc
	add(var_201_int); // 0x36 ObjFunc
	var_213_int = 5; // 0x38 PushI
	irand(var_205_int, var_213_int); // 0x39 Func
	add(var_205_int); // 0x3b ObjFunc
	var_214_int = 1; // 0x3d PushI
	var_201_int = var_201_int + var_214_int; // 0x3e Add2
	goto Label_44; // 0x3f Jump
	
Label_30:
	var_215_int = 1; // 0x1e PushI
	add(var_215_int); // 0x1f ObjFunc
	add(var_196_int); // 0x21 ObjFunc
	var_216_int = 2; // 0x23 PushI
	irand(var_200_int, var_216_int); // 0x24 Func
	add(var_200_int); // 0x26 ObjFunc
	var_217_int = 1; // 0x28 PushI
	var_196_int = var_196_int + var_217_int; // 0x29 Add2
	goto Label_23; // 0x2a Jump
	
Label_9:
	var_218_int = 0; // 0x9 PushI
	add(var_218_int); // 0xa ObjFunc
	add(var_191_int); // 0xc ObjFunc
	var_219_int = 5; // 0xe PushI
	irand(var_195_int, var_219_int); // 0xf Func
	add(var_195_int); // 0x11 ObjFunc
	var_220_int = 1; // 0x13 PushI
	var_191_int = var_191_int + var_220_int; // 0x14 Add2
	goto Label_2; // 0x15 Jump
}


func_640(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x280 PushV
	self(var_47_object); // 0x281 Func
	var_45_object = var_47_object; // 0x283 Mov
	return 2; // 0x284 Return
}


func_65(var_38_string, var_39_int, var_40_int)
{
	var_41_int = 0; // 0x42 PushI
	var_42_bool = var_39_int == var_41_int; // 0x43 Eq
	if(var_42_bool == 0) goto Label_73; // 0x44 JumpB
	var_43_string = "pt_child"; // 0x45 PushS
	var_38_string = var_43_string + var_40_int; // 0x46 Add2
	return 0; // 0x47 Return
	
Label_73:
	var_44_int = 1; // 0x49 PushI
	var_45_bool = var_39_int == var_44_int; // 0x4a Eq
	if(var_45_bool == 0) goto Label_80; // 0x4b JumpB
	var_46_string = "pt_woman"; // 0x4c PushS
	var_38_string = var_46_string + var_40_int; // 0x4d Add2
	return 0; // 0x4e Return
	
Label_80:
	var_47_int = 2; // 0x50 PushI
	var_48_bool = var_39_int == var_47_int; // 0x51 Eq
	if(var_48_bool == 0) goto Label_86; // 0x52 JumpB
	var_49_string = "pt_man"; // 0x53 PushS
	var_38_string = var_49_string + var_40_int; // 0x54 Add2
	return 0; // 0x55 Return
	
Label_86:
	var_38_string = ""; // 0x56 MovS
	return 0; // 0x57 Return
}


func_646(var_29_bool, var_30_float)
{
	var_32_float = 0; var_33_float = 0; // 0x286 PushV
	rand(var_33_float); // 0x287 Func
	var_29_bool = var_33_float < var_30_float; // 0x289 LT2
	return 2; // 0x28a Return
}


func_651(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x28b PushV
	CreateObjectVector(var_5_object); // 0x28c Func
	var_3_object = var_5_object; // 0x28e Mov
	return 2; // 0x28f Return
}


func_334(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_int = 0; var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); // 0x14e PushV
	var_115_int = 1; // 0x14f MovI
	
Label_336:
	var_119_string = "pt_item_knife"; // 0x150 PushS
	var_120_int = var_119_string + var_115_int; // 0x151 Add
	GetLocator(var_120_int, var_116_bool, var_117_cvector, var_118_cvector); // 0x152 Func
	var_121_bool = var_116_bool == 0; // 0x154 Not
	if(var_121_bool == 0) goto Label_343; // 0x155 JumpB
	goto Label_352; // 0x156 Jump
	
Label_352:
	return 8; // 0x160 Return
	
Label_343:
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_bool = 0; // 0x157 PushV
	var_122_cvector = var_117_cvector; // 0x158 Mov
	var_123_cvector = var_118_cvector; // 0x159 Mov
	var_124_bool = var_110_bool; // 0x15a Mov
	func_464(var_122_cvector, var_123_cvector, var_124_bool); // 0x15b Call
	var_133_int = 1; // 0x15d PushI
	var_115_int = var_115_int + var_133_int; // 0x15e Add2
	goto Label_336; // 0x15f Jump
}


func_464(var_122_cvector, var_123_cvector, var_124_bool)
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x1d0 PushV
	var_127_bool = 0; var_128_float = 0; // 0x1d1 PushV
	var_129_bool = var_124_bool; // 0x1d2 Push
	if(var_129_bool == 0) goto Label_470; // 0x1d3 JumpB
	var_128_float = 0.1; // 0x1d4 MovF
	goto Label_471; // 0x1d5 Jump
	
Label_471:
	func_646(var_127_bool, var_128_float); // 0x1d7 Call
	if(var_127_bool == 0) goto Label_482; // 0x1d9 JumpB
	var_130_string = "scripted_container"; // 0x1da PushS
	var_131_object = Obj(); // 0x1db PushV
	func_640(var_131_object); // 0x1dc Call
	var_132_string = "item_knife_steal.xml"; // 0x1de PushS
	AddActorByType(var_126_object, var_130_string, var_131_object, var_122_cvector, var_123_cvector, var_132_string); // 0x1df Func
	var_126_object = 0; // 0x1e1 SetNull
	
Label_482:
	return 2; // 0x1e2 Return
	
Label_470:
	var_128_float = 0.1; // 0x1d6 MovF
}


func_657(var_116_object, var_117_object, var_118_string, var_119_string, var_120_string)
{
	var_124_bool = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_object = Obj(); var_128_bool = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_object = Obj(); // 0x291 PushV
	GetLocator(var_118_string, var_128_bool, var_129_cvector, var_130_cvector); // 0x292 ObjFunc
	var_132_bool = var_128_bool == 0; // 0x294 Not
	if(var_132_bool == 0) goto Label_670; // 0x295 JumpB
	var_133_string = "Locator "; // 0x296 PushS
	var_134_int = var_133_string + var_118_string; // 0x297 Add
	var_135_string = " doesn't exist"; // 0x298 PushS
	var_136_int = var_134_int + var_135_string; // 0x299 Add
	Trace(var_136_int); // 0x29a Func
	var_131_object = 0; // 0x29c SetNull
	goto Label_672; // 0x29d Jump
	
Label_672:
	var_116_object = var_131_object; // 0x2a0 Mov
	return 8; // 0x2a1 Return
	
Label_670:
	AddActor(var_131_object, var_119_string, var_117_object, var_129_cvector, var_130_cvector, var_120_string); // 0x29e Func
}


func_275()
{
	var_7_bool = 0; var_8_bool = 0; // 0x113 PushV
	var_9_string = "nailed"; // 0x114 PushS
	GetProperty(var_9_string, var_8_bool); // 0x115 Func
	var_10_bool = 0; // 0x117 PushV
	var_10_bool = var_8_bool; // 0x118 Mov
	func_296(var_10_bool); // 0x119 Call
	var_53_bool = 0; // 0x11b PushV
	var_53_bool = var_8_bool; // 0x11c Mov
	func_315(var_53_bool); // 0x11d Call
	var_110_bool = 0; // 0x11f PushV
	var_110_bool = var_8_bool; // 0x120 Mov
	func_334(var_110_bool); // 0x121 Call
	var_134_bool = 0; // 0x123 PushV
	var_134_bool = var_8_bool; // 0x124 Mov
	func_353(var_134_bool); // 0x125 Call
	return 2; // 0x127 Return
}


func_406(var_65_cvector, var_66_cvector, var_67_bool)
{
	var_68_string = ""; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); // 0x196 PushV
	var_78_bool = 0; var_79_float = 0; // 0x197 PushV
	var_80_bool = var_67_bool; // 0x198 Push
	if(var_80_bool == 0) goto Label_412; // 0x199 JumpB
	var_79_float = 0.1; // 0x19a MovF
	goto Label_413; // 0x19b Jump
	
Label_413:
	func_646(var_78_bool, var_79_float); // 0x19d Call
	if(var_78_bool == 0) goto Label_463; // 0x19f JumpB
	var_81_int = 8; // 0x1a0 PushI
	var_82_int = 3; // 0x1a1 PushI
	var_83_int = 3; // 0x1a2 PushI
	var_84_int = 3; // 0x1a3 PushI
	var_85_int = 2; // 0x1a4 PushI
	var_86_int = 2; // 0x1a5 PushI
	var_87_int = 1; // 0x1a6 PushI
	var_88_string = "rusk"; // 0x1a7 PushS
	var_89_string = "dried_fish"; // 0x1a8 PushS
	var_90_string = "dried_meat"; // 0x1a9 PushS
	var_91_string = "smoked_meat"; // 0x1aa PushS
	var_92_string = "fresh_fish"; // 0x1ab PushS
	var_93_string = "fresh_meat"; // 0x1ac PushS
	var_94_string = "tvirin"; // 0x1ad PushS
	RandOneOf(var_73_string, var_81_int, var_82_int, var_83_int, var_84_int, var_85_int, var_86_int, var_87_int, var_88_string, var_89_string, var_90_string, var_91_string, var_92_string, var_93_string, var_94_string); // 0x1ae Func
	RandVec2D(var_75_float, var_76_float); // 0x1b0 Func
	var_95_float = GetByIndex(var_77_cvector, 0); // 0x1b2 PushE
	var_95_float = var_75_float; // 0x1b3 Mov
	SetByIndex(var_77_cvector, 0) = var_95_float; // 0x1b4 PopE
	var_96_float = GetByIndex(var_77_cvector, 1); // 0x1b5 PushE
	var_96_float = 0; // 0x1b6 MovI
	SetByIndex(var_77_cvector, 1) = var_96_float; // 0x1b7 PopE
	var_97_float = GetByIndex(var_77_cvector, 2); // 0x1b8 PushE
	var_97_float = var_76_float; // 0x1b9 Mov
	SetByIndex(var_77_cvector, 2) = var_97_float; // 0x1ba PopE
	var_98_string = "scripted_container"; // 0x1bb PushS
	var_99_object = Obj(); // 0x1bc PushV
	func_640(var_99_object); // 0x1bd Call
	var_100_string = "item_plate.xml"; // 0x1bf PushS
	AddActorByType(var_74_object, var_98_string, var_99_object, var_65_cvector, var_77_cvector, var_100_string); // 0x1c0 Func
	var_101_string = "scripted_container"; // 0x1c2 PushS
	var_102_object = Obj(); // 0x1c3 PushV
	func_640(var_102_object); // 0x1c4 Call
	var_103_cvector = CVector(0.0, 5.0, 0.0); // 0x1c6 PushVec
	var_104_int = var_65_cvector + var_103_cvector; // 0x1c7 Add
	var_105_string = "item_"; // 0x1c8 PushS
	var_106_int = var_105_string + var_73_string; // 0x1c9 Add
	var_107_string = "_steal.xml"; // 0x1ca PushS
	var_108_int = var_106_int + var_107_string; // 0x1cb Add
	AddActorByType(var_74_object, var_101_string, var_102_object, var_104_int, var_66_cvector, var_108_int); // 0x1cc Func
	var_74_object = 0; // 0x1ce SetNull
	
Label_463:
	return 10; // 0x1cf Return
	
Label_412:
	var_79_float = 0.2; // 0x19c MovF
}


func_88(var_50_string, var_51_int, var_52_int)
{
	var_53_int = 0; // 0x59 PushI
	var_54_bool = var_51_int == var_53_int; // 0x5a Eq
	if(var_54_bool == 0) goto Label_122; // 0x5b JumpB
	var_55_int = 0; // 0x5c PushI
	var_56_bool = var_52_int == var_55_int; // 0x5d Eq
	if(var_56_bool == 0) goto Label_98; // 0x5e JumpB
	var_50_string = "pers_littleboy"; // 0x5f MovS
	return 0; // 0x60 Return
	
Label_98:
	var_57_int = 1; // 0x62 PushI
	var_58_bool = var_52_int == var_57_int; // 0x63 Eq
	if(var_58_bool == 0) goto Label_104; // 0x64 JumpB
	var_50_string = "pers_littlegirl"; // 0x65 MovS
	return 0; // 0x66 Return
	
Label_104:
	var_59_int = 2; // 0x68 PushI
	var_60_bool = var_52_int == var_59_int; // 0x69 Eq
	if(var_60_bool == 0) goto Label_110; // 0x6a JumpB
	var_50_string = "pers_boy"; // 0x6b MovS
	return 0; // 0x6c Return
	
Label_110:
	var_61_int = 3; // 0x6e PushI
	var_62_bool = var_52_int == var_61_int; // 0x6f Eq
	if(var_62_bool == 0) goto Label_116; // 0x70 JumpB
	var_50_string = "pers_girl"; // 0x71 MovS
	return 0; // 0x72 Return
	
Label_116:
	var_63_int = 4; // 0x74 PushI
	var_64_bool = var_52_int == var_63_int; // 0x75 Eq
	if(var_64_bool == 0) goto Label_121; // 0x76 JumpB
	var_50_string = "pers_girl"; // 0x77 MovS
	return 0; // 0x78 Return
	
Label_121:
	goto Label_169; // 0x79 Jump
	
Label_169:
	var_50_string = ""; // 0xa9 MovS
	return 0; // 0xaa Return
	
Label_122:
	var_65_int = 1; // 0x7a PushI
	var_66_bool = var_51_int == var_65_int; // 0x7b Eq
	if(var_66_bool == 0) goto Label_137; // 0x7c JumpB
	var_67_int = 0; // 0x7d PushI
	var_68_bool = var_52_int == var_67_int; // 0x7e Eq
	if(var_68_bool == 0) goto Label_131; // 0x7f JumpB
	var_50_string = "pers_woman"; // 0x80 MovS
	return 0; // 0x81 Return
	
Label_131:
	var_69_int = 1; // 0x83 PushI
	var_70_bool = var_52_int == var_69_int; // 0x84 Eq
	if(var_70_bool == 0) goto Label_136; // 0x85 JumpB
	var_50_string = "pers_wasted_girl"; // 0x86 MovS
	return 0; // 0x87 Return
	
Label_136:
	goto Label_169; // 0x88 Jump
	
Label_137:
	var_71_int = 2; // 0x89 PushI
	var_72_bool = var_51_int == var_71_int; // 0x8a Eq
	if(var_72_bool == 0) goto Label_169; // 0x8b JumpB
	var_73_int = 0; // 0x8c PushI
	var_74_bool = var_52_int == var_73_int; // 0x8d Eq
	if(var_74_bool == 0) goto Label_146; // 0x8e JumpB
	var_50_string = "pers_unosha"; // 0x8f MovS
	return 0; // 0x90 Return
	
Label_146:
	var_75_int = 1; // 0x92 PushI
	var_76_bool = var_52_int == var_75_int; // 0x93 Eq
	if(var_76_bool == 0) goto Label_152; // 0x94 JumpB
	var_50_string = "pers_unosha"; // 0x95 MovS
	return 0; // 0x96 Return
	
Label_152:
	var_77_int = 2; // 0x98 PushI
	var_78_bool = var_52_int == var_77_int; // 0x99 Eq
	if(var_78_bool == 0) goto Label_158; // 0x9a JumpB
	var_50_string = "pers_worker"; // 0x9b MovS
	return 0; // 0x9c Return
	
Label_158:
	var_79_int = 3; // 0x9e PushI
	var_80_bool = var_52_int == var_79_int; // 0x9f Eq
	if(var_80_bool == 0) goto Label_164; // 0xa0 JumpB
	var_50_string = "pers_worker"; // 0xa1 MovS
	return 0; // 0xa2 Return
	
Label_164:
	var_81_int = 4; // 0xa4 PushI
	var_82_bool = var_52_int == var_81_int; // 0xa5 Eq
	if(var_82_bool == 0) goto Label_169; // 0xa6 JumpB
	var_50_string = "pers_wasted_male"; // 0xa7 MovS
	return 0; // 0xa8 Return
}


func_353(var_134_bool)
{
	var_135_int = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_int = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); // 0x161 PushV
	var_139_int = 1; // 0x162 MovI
	
Label_355:
	var_143_string = "pt_item_bottle"; // 0x163 PushS
	var_144_int = var_143_string + var_139_int; // 0x164 Add
	GetLocator(var_144_int, var_140_bool, var_141_cvector, var_142_cvector); // 0x165 Func
	var_145_bool = var_140_bool == 0; // 0x167 Not
	if(var_145_bool == 0) goto Label_362; // 0x168 JumpB
	goto Label_371; // 0x169 Jump
	
Label_371:
	return 8; // 0x173 Return
	
Label_362:
	var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0; // 0x16a PushV
	var_146_cvector = var_141_cvector; // 0x16b Mov
	var_147_cvector = var_142_cvector; // 0x16c Mov
	var_148_bool = var_134_bool; // 0x16d Mov
	func_483(var_146_cvector, var_147_cvector, var_148_bool); // 0x16e Call
	var_174_int = 1; // 0x170 PushI
	var_139_int = var_139_int + var_174_int; // 0x171 Add2
	goto Label_355; // 0x172 Jump
}


func_675()
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x2a3 PushV
	size(var_35_int); // 0x2a4 ObjFunc
	var_36_int = 0; // 0x2a6 MovI
	
Label_679:
	var_38_bool = var_36_int < var_35_int; // 0x2a7 LT
	if(var_38_bool == 0) goto Label_691; // 0x2a8 JumpB
	get(var_37_object, var_36_int); // 0x2a9 ObjFunc
	var_39_object = var_37_object; // 0x2ab Push
	if(var_39_object == 0) goto Label_687; // 0x2ac JumpB
	RemoveActor(var_37_object); // 0x2ad Func
	
Label_687:
	var_37_object = 0; // 0x2af SetNull
	var_40_int = 1; // 0x2b0 PushI
	var_36_int = var_36_int + var_40_int; // 0x2b1 Add2
	goto Label_679; // 0x2b2 Jump
	
Label_691:
	clear(); // 0x2b3 ObjFunc
	return 6; // 0x2b5 Return
}


func_483(var_146_cvector, var_147_cvector, var_148_bool)
{
	var_149_string = ""; var_150_object = Obj(); var_151_string = ""; var_152_object = Obj(); // 0x1e3 PushV
	var_153_bool = 0; var_154_float = 0; // 0x1e4 PushV
	var_155_bool = var_148_bool; // 0x1e5 Push
	if(var_155_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_154_float = 0.2; // 0x1e7 MovF
	goto Label_490; // 0x1e8 Jump
	
Label_490:
	func_646(var_153_bool, var_154_float); // 0x1ea Call
	if(var_153_bool == 0) goto Label_518; // 0x1ec JumpB
	var_156_int = 10; // 0x1ed PushI
	var_157_int = 15; // 0x1ee PushI
	var_158_int = 3; // 0x1ef PushI
	var_159_int = 3; // 0x1f0 PushI
	var_160_int = 3; // 0x1f1 PushI
	var_161_int = 1; // 0x1f2 PushI
	var_162_string = "bottle_water"; // 0x1f3 PushS
	var_163_string = "bottle_empty"; // 0x1f4 PushS
	var_164_string = "vegetables"; // 0x1f5 PushS
	var_165_string = "milk"; // 0x1f6 PushS
	var_166_string = "egg"; // 0x1f7 PushS
	var_167_string = "tvirin"; // 0x1f8 PushS
	RandOneOf(var_151_string, var_156_int, var_157_int, var_158_int, var_159_int, var_160_int, var_161_int, var_162_string, var_163_string, var_164_string, var_165_string, var_166_string, var_167_string); // 0x1f9 Func
	var_168_string = "scripted_container"; // 0x1fb PushS
	var_169_object = Obj(); // 0x1fc PushV
	func_640(var_169_object); // 0x1fd Call
	var_170_string = "item_"; // 0x1ff PushS
	var_171_int = var_170_string + var_151_string; // 0x200 Add
	var_172_string = "_steal.xml"; // 0x201 PushS
	var_173_int = var_171_int + var_172_string; // 0x202 Add
	AddActorByType(var_152_object, var_168_string, var_169_object, var_146_cvector, var_147_cvector, var_173_int); // 0x203 Func
	var_152_object = 0; // 0x205 SetNull
	
Label_518:
	return 4; // 0x206 Return
	
Label_489:
	var_154_float = 0.4; // 0x1e9 MovF
}


func_296(var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x128 PushV
	var_15_int = 1; // 0x129 MovI
	
Label_298:
	var_19_string = "pt_item_food"; // 0x12a PushS
	var_20_int = var_19_string + var_15_int; // 0x12b Add
	GetLocator(var_20_int, var_16_bool, var_17_cvector, var_18_cvector); // 0x12c Func
	var_21_bool = var_16_bool == 0; // 0x12e Not
	if(var_21_bool == 0) goto Label_305; // 0x12f JumpB
	goto Label_314; // 0x130 Jump
	
Label_314:
	return 8; // 0x13a Return
	
Label_305:
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; // 0x131 PushV
	var_22_cvector = var_17_cvector; // 0x132 Mov
	var_23_cvector = var_18_cvector; // 0x133 Mov
	var_24_bool = var_10_bool; // 0x134 Mov
	func_372(var_22_cvector, var_23_cvector, var_24_bool); // 0x135 Call
	var_52_int = 1; // 0x137 PushI
	var_15_int = var_15_int + var_52_int; // 0x138 Add2
	goto Label_298; // 0x139 Jump
}


func_171(var_83_string, var_84_int, var_85_int)
{
	var_86_int = 0; // 0xac PushI
	var_87_bool = var_84_int == var_86_int; // 0xad Eq
	if(var_87_bool == 0) goto Label_205; // 0xae JumpB
	var_88_int = 0; // 0xaf PushI
	var_89_bool = var_85_int == var_88_int; // 0xb0 Eq
	if(var_89_bool == 0) goto Label_181; // 0xb1 JumpB
	var_83_string = "ilittleboy.xml"; // 0xb2 MovS
	return 0; // 0xb3 Return
	
Label_181:
	var_90_int = 1; // 0xb5 PushI
	var_91_bool = var_85_int == var_90_int; // 0xb6 Eq
	if(var_91_bool == 0) goto Label_187; // 0xb7 JumpB
	var_83_string = "ilittlegirl.xml"; // 0xb8 MovS
	return 0; // 0xb9 Return
	
Label_187:
	var_92_int = 2; // 0xbb PushI
	var_93_bool = var_85_int == var_92_int; // 0xbc Eq
	if(var_93_bool == 0) goto Label_193; // 0xbd JumpB
	var_83_string = "iboy.xml"; // 0xbe MovS
	return 0; // 0xbf Return
	
Label_193:
	var_94_int = 3; // 0xc1 PushI
	var_95_bool = var_85_int == var_94_int; // 0xc2 Eq
	if(var_95_bool == 0) goto Label_199; // 0xc3 JumpB
	var_83_string = "igirl.xml"; // 0xc4 MovS
	return 0; // 0xc5 Return
	
Label_199:
	var_96_int = 4; // 0xc7 PushI
	var_97_bool = var_85_int == var_96_int; // 0xc8 Eq
	if(var_97_bool == 0) goto Label_204; // 0xc9 JumpB
	var_83_string = "igirl2.xml"; // 0xca MovS
	return 0; // 0xcb Return
	
Label_204:
	goto Label_252; // 0xcc Jump
	
Label_252:
	var_83_string = ""; // 0xfc MovS
	return 0; // 0xfd Return
	
Label_205:
	var_98_int = 1; // 0xcd PushI
	var_99_bool = var_84_int == var_98_int; // 0xce Eq
	if(var_99_bool == 0) goto Label_220; // 0xcf JumpB
	var_100_int = 0; // 0xd0 PushI
	var_101_bool = var_85_int == var_100_int; // 0xd1 Eq
	if(var_101_bool == 0) goto Label_214; // 0xd2 JumpB
	var_83_string = "iwoman.xml"; // 0xd3 MovS
	return 0; // 0xd4 Return
	
Label_214:
	var_102_int = 1; // 0xd6 PushI
	var_103_bool = var_85_int == var_102_int; // 0xd7 Eq
	if(var_103_bool == 0) goto Label_219; // 0xd8 JumpB
	var_83_string = "iwasted_girl.xml"; // 0xd9 MovS
	return 0; // 0xda Return
	
Label_219:
	goto Label_252; // 0xdb Jump
	
Label_220:
	var_104_int = 2; // 0xdc PushI
	var_105_bool = var_84_int == var_104_int; // 0xdd Eq
	if(var_105_bool == 0) goto Label_252; // 0xde JumpB
	var_106_int = 0; // 0xdf PushI
	var_107_bool = var_85_int == var_106_int; // 0xe0 Eq
	if(var_107_bool == 0) goto Label_229; // 0xe1 JumpB
	var_83_string = "iunosha.xml"; // 0xe2 MovS
	return 0; // 0xe3 Return
	
Label_229:
	var_108_int = 1; // 0xe5 PushI
	var_109_bool = var_85_int == var_108_int; // 0xe6 Eq
	if(var_109_bool == 0) goto Label_235; // 0xe7 JumpB
	var_83_string = "iunosha2.xml"; // 0xe8 MovS
	return 0; // 0xe9 Return
	
Label_235:
	var_110_int = 2; // 0xeb PushI
	var_111_bool = var_85_int == var_110_int; // 0xec Eq
	if(var_111_bool == 0) goto Label_241; // 0xed JumpB
	var_83_string = "iworker.xml"; // 0xee MovS
	return 0; // 0xef Return
	
Label_241:
	var_112_int = 3; // 0xf1 PushI
	var_113_bool = var_85_int == var_112_int; // 0xf2 Eq
	if(var_113_bool == 0) goto Label_247; // 0xf3 JumpB
	var_83_string = "iworker2.xml"; // 0xf4 MovS
	return 0; // 0xf5 Return
	
Label_247:
	var_114_int = 4; // 0xf7 PushI
	var_115_bool = var_85_int == var_114_int; // 0xf8 Eq
	if(var_115_bool == 0) goto Label_252; // 0xf9 JumpB
	var_83_string = "iwasted_male.xml"; // 0xfa MovS
	return 0; // 0xfb Return
}


func_372(var_22_cvector, var_23_cvector, var_24_bool)
{
	var_25_string = ""; var_26_object = Obj(); var_27_string = ""; var_28_object = Obj(); // 0x174 PushV
	var_29_bool = 0; var_30_float = 0; // 0x175 PushV
	var_31_bool = var_24_bool; // 0x176 Push
	if(var_31_bool == 0) goto Label_378; // 0x177 JumpB
	var_30_float = 0.1; // 0x178 MovF
	goto Label_379; // 0x179 Jump
	
Label_379:
	func_646(var_29_bool, var_30_float); // 0x17b Call
	if(var_29_bool == 0) goto Label_405; // 0x17d JumpB
	var_34_int = 5; // 0x17e PushI
	var_35_int = 5; // 0x17f PushI
	var_36_int = 3; // 0x180 PushI
	var_37_int = 2; // 0x181 PushI
	var_38_int = 3; // 0x182 PushI
	var_39_string = "bread"; // 0x183 PushS
	var_40_string = "bottle_water"; // 0x184 PushS
	var_41_string = "milk"; // 0x185 PushS
	var_42_string = "vegetables"; // 0x186 PushS
	var_43_string = "lemon"; // 0x187 PushS
	RandOneOf(var_27_string, var_34_int, var_35_int, var_36_int, var_37_int, var_38_int, var_39_string, var_40_string, var_41_string, var_42_string, var_43_string); // 0x188 Func
	var_44_string = "scripted_container"; // 0x18a PushS
	var_45_object = Obj(); // 0x18b PushV
	func_640(var_45_object); // 0x18c Call
	var_48_string = "item_"; // 0x18e PushS
	var_49_int = var_48_string + var_27_string; // 0x18f Add
	var_50_string = "_steal.xml"; // 0x190 PushS
	var_51_int = var_49_int + var_50_string; // 0x191 Add
	AddActorByType(var_28_object, var_44_string, var_45_object, var_22_cvector, var_23_cvector, var_51_int); // 0x192 Func
	var_28_object = 0; // 0x194 SetNull
	
Label_405:
	return 4; // 0x195 Return
	
Label_378:
	var_30_float = 0.2; // 0x17a MovF
}


func_628(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x274 PushV
	var_18_string = "HasProperty"; // 0x275 PushS
	var_19_int = 2; // 0x276 PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x277 FuncExist
	var_21_bool = var_20_bool == 0; // 0x278 Not
	if(var_21_bool == 0) goto Label_636; // 0x279 JumpB
	var_13_bool = 0; // 0x27a MovB
	return 2; // 0x27b Return
	
Label_636:
	HasProperty(var_15_string, var_17_bool); // 0x27c ObjFunc
	var_13_bool = var_17_bool; // 0x27e Mov
	return 2; // 0x27f Return
}


func_315(var_53_bool)
{
	var_54_int = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_int = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x13b PushV
	var_58_int = 1; // 0x13c MovI
	
Label_317:
	var_62_string = "pt_item_pfood"; // 0x13d PushS
	var_63_int = var_62_string + var_58_int; // 0x13e Add
	GetLocator(var_63_int, var_59_bool, var_60_cvector, var_61_cvector); // 0x13f Func
	var_64_bool = var_59_bool == 0; // 0x141 Not
	if(var_64_bool == 0) goto Label_324; // 0x142 JumpB
	goto Label_333; // 0x143 Jump
	
Label_333:
	return 8; // 0x14d Return
	
Label_324:
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x144 PushV
	var_65_cvector = var_60_cvector; // 0x145 Mov
	var_66_cvector = var_61_cvector; // 0x146 Mov
	var_67_bool = var_53_bool; // 0x147 Mov
	func_406(var_65_cvector, var_66_cvector, var_67_bool); // 0x148 Call
	var_109_int = 1; // 0x14a PushI
	var_58_int = var_58_int + var_109_int; // 0x14b Add2
	goto Label_317; // 0x14c Jump
}


