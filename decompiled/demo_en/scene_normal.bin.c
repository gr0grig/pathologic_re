task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x23d PushV
	var_18_bool = var_1_object == 0; // 0x23e Not
	if(var_18_bool == 0) goto Label_580; // 0x23f JumpB
	var_19_object = Obj(); // 0x240 PushV
	func_705(var_19_object); // 0x241 NEW_2
	var_1_object = var_19_object; // 0x242 TMov
	
Label_580:
	var_22_bool = var_0_object == 0; // 0x244 Not
	if(var_22_bool == 0) goto Label_584; // 0x245 JumpB
	CreateIntVector(var_0_object); // 0x246 Func
	
Label_584:
	var_23_object = Obj(); // 0x248 PushV
	var_23_object = var_1_object; // 0x249 MovT
	func_729(var_23_object); // 0x24a NEW_2
	size(var_10_int); // 0x24c TObjFunc
	var_11_int = 0; // 0x24e MovI
	
Label_591:
	var_34_bool = var_11_int < var_10_int; // 0x24f LT
	if(var_34_bool == 0) goto Label_636; // 0x250 JumpB
	get(var_12_int, var_11_int); // 0x251 TObjFunc
	var_35_int = 1; // 0x253 PushI
	var_36_int = var_11_int + var_35_int; // 0x254 Add
	get(var_13_int, var_36_int); // 0x255 TObjFunc
	var_37_int = 2; // 0x257 PushI
	var_38_int = var_11_int + var_37_int; // 0x258 Add
	get(var_14_int, var_38_int); // 0x259 TObjFunc
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x25b PushV
	var_40_int = var_12_int; // 0x25c Mov
	var_41_int = var_13_int; // 0x25d Mov
	func_65(var_39_string, var_40_int, var_41_int); // 0x25e NEW_2
	var_15_string = var_39_string; // 0x25f Mov
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x261 PushV
	var_52_int = var_12_int; // 0x262 Mov
	var_53_int = var_14_int; // 0x263 Mov
	func_88(var_51_string, var_52_int, var_53_int); // 0x264 NEW_2
	var_16_string = var_51_string; // 0x265 Mov
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x267 PushV
	var_85_int = var_12_int; // 0x268 Mov
	var_86_int = var_14_int; // 0x269 Mov
	func_171(var_84_string, var_85_int, var_86_int); // 0x26a NEW_2
	var_17_string = var_84_string; // 0x26b Mov
	var_117_object = Obj(); var_118_object = Obj(); var_119_string = ""; var_120_string = ""; var_121_string = ""; // 0x26d PushV
	var_122_object = Obj(); // 0x26e PushV
	func_694(var_122_object); // 0x26f NEW_2
	var_118_object = var_122_object; // 0x270 Mov
	var_119_string = var_15_string; // 0x272 Mov
	var_120_string = var_16_string; // 0x273 Mov
	var_121_string = var_17_string; // 0x274 Mov
	func_711(var_117_object, var_118_object, var_119_string, var_120_string, var_121_string); // 0x275 NEW_2
	add(var_117_object); // 0x277 TObjFunc
	var_138_int = 3; // 0x279 PushI
	var_11_int = var_11_int + var_138_int; // 0x27a Add2
	goto Label_591; // 0x27b Jump
	
Label_636:
	return 16; // 0x27c Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x27d PushV
	size(var_6_int); // 0x27e TObjFunc
	var_7_int = 0; // 0x280 MovI
	
Label_641:
	var_10_bool = var_7_int < var_6_int; // 0x281 LT
	if(var_10_bool == 0) goto Label_677; // 0x282 JumpB
	get(var_8_object, var_7_int); // 0x283 TObjFunc
	var_11_bool = var_8_object != 0; // 0x285 NullNeq
	if(var_11_bool == 0) goto Label_663; // 0x286 JumpB
	IsDead(var_9_bool); // 0x287 ObjFunc
	var_12_bool = var_9_bool == 0; // 0x289 Not
	if(var_12_bool == 0) goto Label_661; // 0x28a JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x28b PushV
	var_14_object = var_8_object; // 0x28c Mov
	var_15_string = "ToDie"; // 0x28d MovS
	func_682(var_13_bool, var_14_object, var_15_string); // 0x28e NEW_2
	var_22_bool = var_13_bool == 0; // 0x290 Not
	if(var_22_bool == 0) goto Label_661; // 0x291 JumpB
	var_23_int = 1; // 0x292 PushI
	var_7_int = var_7_int + var_23_int; // 0x293 Add2
	goto Label_676; // 0x294 Jump
	
Label_676:
	goto Label_641; // 0x2a4 Jump
	
Label_661:
	RemoveActor(var_8_object); // 0x295 Func
	
Label_663:
	remove(var_7_int); // 0x297 TObjFunc
	var_24_int = 3; // 0x299 PushI
	var_25_float = var_7_int * var_24_int; // 0x29a Mult
	var_26_int = 1; // 0x29b PushI
	var_27_int = var_7_int + var_26_int; // 0x29c Add
	var_28_int = 3; // 0x29d PushI
	var_29_float = var_27_int * var_28_int; // 0x29e Mult
	remove(var_25_float, var_29_float); // 0x29f TObjFunc
	var_30_int = -1; // 0x2a1 PushI
	var_6_int = var_6_int + var_30_int; // 0x2a2 Add2
	var_8_object = 0; // 0x2a3 SetNull
	
Label_677:
	var_31_object = Obj(); // 0x2a5 PushV
	var_31_object = var_1_object; // 0x2a6 MovT
	func_729(var_31_object); // 0x2a7 NEW_2
	return 8; // 0x2a9 Return
}


main(var_0_object, var_1_object)
{
	func_261(); // 0xff NEW_2
	func_555(var_0_object, var_1_object); // 0x102 NEW_2
	return 0; // 0x104 Return
}


func_0()
{
	var_208_int = 0; var_209_string = ""; var_210_bool = 0; var_211_cvector = CVector(0,0,0); var_212_int = 0; var_213_int = 0; var_214_string = ""; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_int = 0; var_218_int = 0; var_219_string = ""; var_220_bool = 0; var_221_cvector = CVector(0,0,0); var_222_int = 0; var_223_int = 0; var_224_string = ""; var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_int = 0; var_228_int = 0; var_229_string = ""; var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_int = 0; var_233_int = 0; var_234_string = ""; var_235_bool = 0; var_236_cvector = CVector(0,0,0); var_237_int = 0; // 0x0 PushV
	var_223_int = 1; // 0x1 MovI
	
Label_2:
	var_238_string = "pt_child"; // 0x2 PushS
	var_224_string = var_238_string + var_223_int; // 0x3 Add2
	GetLocator(var_224_string, var_225_bool, var_226_cvector); // 0x4 Func
	var_239_bool = var_225_bool == 0; // 0x6 Not
	if(var_239_bool == 0) goto Label_9; // 0x7 JumpB
	goto Label_22; // 0x8 Jump
	
Label_22:
	var_228_int = 1; // 0x16 MovI
	
Label_23:
	var_240_string = "pt_woman"; // 0x17 PushS
	var_229_string = var_240_string + var_228_int; // 0x18 Add2
	GetLocator(var_229_string, var_230_bool, var_231_cvector); // 0x19 Func
	var_241_bool = var_230_bool == 0; // 0x1b Not
	if(var_241_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_43; // 0x1d Jump
	
Label_43:
	var_233_int = 1; // 0x2b MovI
	
Label_44:
	var_242_string = "pt_man"; // 0x2c PushS
	var_234_string = var_242_string + var_233_int; // 0x2d Add2
	GetLocator(var_234_string, var_235_bool, var_236_cvector); // 0x2e Func
	var_243_bool = var_235_bool == 0; // 0x30 Not
	if(var_243_bool == 0) goto Label_51; // 0x31 JumpB
	goto Label_64; // 0x32 Jump
	
Label_64:
	return 30; // 0x40 Return
	
Label_51:
	var_244_int = 2; // 0x33 PushI
	add(var_244_int); // 0x34 ObjFunc
	add(var_233_int); // 0x36 ObjFunc
	var_245_int = 5; // 0x38 PushI
	irand(var_237_int, var_245_int); // 0x39 Func
	add(var_237_int); // 0x3b ObjFunc
	var_246_int = 1; // 0x3d PushI
	var_233_int = var_233_int + var_246_int; // 0x3e Add2
	goto Label_44; // 0x3f Jump
	
Label_30:
	var_247_int = 1; // 0x1e PushI
	add(var_247_int); // 0x1f ObjFunc
	add(var_228_int); // 0x21 ObjFunc
	var_248_int = 2; // 0x23 PushI
	irand(var_232_int, var_248_int); // 0x24 Func
	add(var_232_int); // 0x26 ObjFunc
	var_249_int = 1; // 0x28 PushI
	var_228_int = var_228_int + var_249_int; // 0x29 Add2
	goto Label_23; // 0x2a Jump
	
Label_9:
	var_250_int = 0; // 0x9 PushI
	add(var_250_int); // 0xa ObjFunc
	add(var_223_int); // 0xc ObjFunc
	var_251_int = 5; // 0xe PushI
	irand(var_227_int, var_251_int); // 0xf Func
	add(var_227_int); // 0x11 ObjFunc
	var_252_int = 1; // 0x13 PushI
	var_223_int = var_223_int + var_252_int; // 0x14 Add2
	goto Label_2; // 0x15 Jump
}


func_320(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x140 PushV
	var_142_int = 1; // 0x141 MovI
	
Label_322:
	var_146_string = "pt_item_knife"; // 0x142 PushS
	var_147_int = var_146_string + var_142_int; // 0x143 Add
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector); // 0x144 Func
	var_148_bool = var_143_bool == 0; // 0x146 Not
	if(var_148_bool == 0) goto Label_329; // 0x147 JumpB
	goto Label_338; // 0x148 Jump
	
Label_338:
	return 8; // 0x152 Return
	
Label_329:
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; // 0x149 PushV
	var_149_cvector = var_144_cvector; // 0x14a Mov
	var_150_cvector = var_145_cvector; // 0x14b Mov
	var_151_bool = var_137_bool; // 0x14c Mov
	func_500(var_149_cvector, var_150_cvector, var_151_bool); // 0x14d NEW_2
	var_160_int = 1; // 0x14f PushI
	var_142_int = var_142_int + var_160_int; // 0x150 Add2
	goto Label_322; // 0x151 Jump
}


func_705(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj(); // 0x2c1 PushV
	CreateObjectVector(var_205_object); // 0x2c2 Func
	var_203_object = var_205_object; // 0x2c4 Mov
	return 2; // 0x2c5 Return
}


func_65(var_39_string, var_40_int, var_41_int)
{
	var_42_int = 0; // 0x42 PushI
	var_43_bool = var_40_int == var_42_int; // 0x43 Eq
	if(var_43_bool == 0) goto Label_73; // 0x44 JumpB
	var_44_string = "pt_child"; // 0x45 PushS
	var_39_string = var_44_string + var_41_int; // 0x46 Add2
	return 0; // 0x47 Return
	
Label_73:
	var_45_int = 1; // 0x49 PushI
	var_46_bool = var_40_int == var_45_int; // 0x4a Eq
	if(var_46_bool == 0) goto Label_80; // 0x4b JumpB
	var_47_string = "pt_woman"; // 0x4c PushS
	var_39_string = var_47_string + var_41_int; // 0x4d Add2
	return 0; // 0x4e Return
	
Label_80:
	var_48_int = 2; // 0x50 PushI
	var_49_bool = var_40_int == var_48_int; // 0x51 Eq
	if(var_49_bool == 0) goto Label_86; // 0x52 JumpB
	var_50_string = "pt_man"; // 0x53 PushS
	var_39_string = var_50_string + var_41_int; // 0x54 Add2
	return 0; // 0x55 Return
	
Label_86:
	var_39_string = ""; // 0x56 MovS
	return 0; // 0x57 Return
}


func_261()
{
	var_2_bool = 0; var_3_bool = 0; // 0x105 PushV
	var_4_string = "nailed"; // 0x106 PushS
	GetProperty(var_4_string, var_3_bool); // 0x107 Func
	var_5_bool = 0; // 0x109 PushV
	var_5_bool = var_3_bool; // 0x10a Mov
	func_282(var_5_bool); // 0x10b NEW_2
	var_64_bool = 0; // 0x10d PushV
	var_64_bool = var_3_bool; // 0x10e Mov
	func_301(var_64_bool); // 0x10f NEW_2
	var_137_bool = 0; // 0x111 PushV
	var_137_bool = var_3_bool; // 0x112 Mov
	func_320(var_137_bool); // 0x113 NEW_2
	var_161_bool = 0; // 0x115 PushV
	var_161_bool = var_3_bool; // 0x116 Mov
	func_339(var_161_bool); // 0x117 NEW_2
	return 2; // 0x119 Return
}


func_519(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj(); // 0x207 PushV
	var_180_bool = 0; var_181_float = 0; // 0x208 PushV
	var_182_bool = var_175_bool; // 0x209 Push
	if(var_182_bool == 0) goto Label_525; // 0x20a JumpB
	var_181_float = 0.2; // 0x20b MovF
	goto Label_526; // 0x20c Jump
	
Label_526:
	func_700(var_180_bool, var_181_float); // 0x20e NEW_2
	if(var_180_bool == 0) goto Label_554; // 0x210 JumpB
	var_183_int = 10; // 0x211 PushI
	var_184_int = 15; // 0x212 PushI
	var_185_int = 3; // 0x213 PushI
	var_186_int = 3; // 0x214 PushI
	var_187_int = 3; // 0x215 PushI
	var_188_int = 1; // 0x216 PushI
	var_189_string = "bottle_water"; // 0x217 PushS
	var_190_string = "bottle_empty"; // 0x218 PushS
	var_191_string = "vegetables"; // 0x219 PushS
	var_192_string = "milk"; // 0x21a PushS
	var_193_string = "egg"; // 0x21b PushS
	var_194_string = "tvirin"; // 0x21c PushS
	RandOneOf(var_178_string, var_183_int, var_184_int, var_185_int, var_186_int, var_187_int, var_188_int, var_189_string, var_190_string, var_191_string, var_192_string, var_193_string, var_194_string); // 0x21d Func
	var_195_string = "scripted_container"; // 0x21f PushS
	var_196_object = Obj(); // 0x220 PushV
	func_694(var_196_object); // 0x221 NEW_2
	var_197_string = "item_"; // 0x223 PushS
	var_198_int = var_197_string + var_178_string; // 0x224 Add
	var_199_string = "_steal.xml"; // 0x225 PushS
	var_200_int = var_198_int + var_199_string; // 0x226 Add
	AddActorByType(var_179_object, var_195_string, var_196_object, var_173_cvector, var_174_cvector, var_200_int); // 0x227 Func
	var_179_object = 0; // 0x229 SetNull
	
Label_554:
	return 4; // 0x22a Return
	
Label_525:
	var_181_float = 0.4; // 0x20d MovF
}


func_711(var_117_object, var_118_object, var_119_string, var_120_string, var_121_string)
{
	var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj(); // 0x2c7 PushV
	GetLocator(var_119_string, var_129_bool, var_130_cvector, var_131_cvector); // 0x2c8 ObjFunc
	var_133_bool = var_129_bool == 0; // 0x2ca Not
	if(var_133_bool == 0) goto Label_724; // 0x2cb JumpB
	var_134_string = "Locator "; // 0x2cc PushS
	var_135_int = var_134_string + var_119_string; // 0x2cd Add
	var_136_string = " doesn't exist"; // 0x2ce PushS
	var_137_int = var_135_int + var_136_string; // 0x2cf Add
	Trace(var_137_int); // 0x2d0 Func
	var_132_object = 0; // 0x2d2 SetNull
	goto Label_726; // 0x2d3 Jump
	
Label_726:
	var_117_object = var_132_object; // 0x2d6 Mov
	return 8; // 0x2d7 Return
	
Label_724:
	AddActor(var_132_object, var_120_string, var_118_object, var_130_cvector, var_131_cvector, var_121_string); // 0x2d4 Func
}


func_339(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); // 0x153 PushV
	var_166_int = 1; // 0x154 MovI
	
Label_341:
	var_170_string = "pt_item_bottle"; // 0x155 PushS
	var_171_int = var_170_string + var_166_int; // 0x156 Add
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector); // 0x157 Func
	var_172_bool = var_167_bool == 0; // 0x159 Not
	if(var_172_bool == 0) goto Label_348; // 0x15a JumpB
	goto Label_357; // 0x15b Jump
	
Label_357:
	return 8; // 0x165 Return
	
Label_348:
	var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; // 0x15c PushV
	var_173_cvector = var_168_cvector; // 0x15d Mov
	var_174_cvector = var_169_cvector; // 0x15e Mov
	var_175_bool = var_161_bool; // 0x15f Mov
	func_519(var_173_cvector, var_174_cvector, var_175_bool); // 0x160 NEW_2
	var_201_int = 1; // 0x162 PushI
	var_166_int = var_166_int + var_201_int; // 0x163 Add2
	goto Label_341; // 0x164 Jump
}


func_88(var_51_string, var_52_int, var_53_int)
{
	var_54_int = 0; // 0x59 PushI
	var_55_bool = var_52_int == var_54_int; // 0x5a Eq
	if(var_55_bool == 0) goto Label_122; // 0x5b JumpB
	var_56_int = 0; // 0x5c PushI
	var_57_bool = var_53_int == var_56_int; // 0x5d Eq
	if(var_57_bool == 0) goto Label_98; // 0x5e JumpB
	var_51_string = "pers_littleboy"; // 0x5f MovS
	return 0; // 0x60 Return
	
Label_98:
	var_58_int = 1; // 0x62 PushI
	var_59_bool = var_53_int == var_58_int; // 0x63 Eq
	if(var_59_bool == 0) goto Label_104; // 0x64 JumpB
	var_51_string = "pers_littlegirl"; // 0x65 MovS
	return 0; // 0x66 Return
	
Label_104:
	var_60_int = 2; // 0x68 PushI
	var_61_bool = var_53_int == var_60_int; // 0x69 Eq
	if(var_61_bool == 0) goto Label_110; // 0x6a JumpB
	var_51_string = "pers_boy"; // 0x6b MovS
	return 0; // 0x6c Return
	
Label_110:
	var_62_int = 3; // 0x6e PushI
	var_63_bool = var_53_int == var_62_int; // 0x6f Eq
	if(var_63_bool == 0) goto Label_116; // 0x70 JumpB
	var_51_string = "pers_girl"; // 0x71 MovS
	return 0; // 0x72 Return
	
Label_116:
	var_64_int = 4; // 0x74 PushI
	var_65_bool = var_53_int == var_64_int; // 0x75 Eq
	if(var_65_bool == 0) goto Label_121; // 0x76 JumpB
	var_51_string = "pers_girl"; // 0x77 MovS
	return 0; // 0x78 Return
	
Label_121:
	goto Label_169; // 0x79 Jump
	
Label_169:
	var_51_string = ""; // 0xa9 MovS
	return 0; // 0xaa Return
	
Label_122:
	var_66_int = 1; // 0x7a PushI
	var_67_bool = var_52_int == var_66_int; // 0x7b Eq
	if(var_67_bool == 0) goto Label_137; // 0x7c JumpB
	var_68_int = 0; // 0x7d PushI
	var_69_bool = var_53_int == var_68_int; // 0x7e Eq
	if(var_69_bool == 0) goto Label_131; // 0x7f JumpB
	var_51_string = "pers_woman"; // 0x80 MovS
	return 0; // 0x81 Return
	
Label_131:
	var_70_int = 1; // 0x83 PushI
	var_71_bool = var_53_int == var_70_int; // 0x84 Eq
	if(var_71_bool == 0) goto Label_136; // 0x85 JumpB
	var_51_string = "pers_wasted_girl"; // 0x86 MovS
	return 0; // 0x87 Return
	
Label_136:
	goto Label_169; // 0x88 Jump
	
Label_137:
	var_72_int = 2; // 0x89 PushI
	var_73_bool = var_52_int == var_72_int; // 0x8a Eq
	if(var_73_bool == 0) goto Label_169; // 0x8b JumpB
	var_74_int = 0; // 0x8c PushI
	var_75_bool = var_53_int == var_74_int; // 0x8d Eq
	if(var_75_bool == 0) goto Label_146; // 0x8e JumpB
	var_51_string = "pers_unosha"; // 0x8f MovS
	return 0; // 0x90 Return
	
Label_146:
	var_76_int = 1; // 0x92 PushI
	var_77_bool = var_53_int == var_76_int; // 0x93 Eq
	if(var_77_bool == 0) goto Label_152; // 0x94 JumpB
	var_51_string = "pers_unosha"; // 0x95 MovS
	return 0; // 0x96 Return
	
Label_152:
	var_78_int = 2; // 0x98 PushI
	var_79_bool = var_53_int == var_78_int; // 0x99 Eq
	if(var_79_bool == 0) goto Label_158; // 0x9a JumpB
	var_51_string = "pers_worker"; // 0x9b MovS
	return 0; // 0x9c Return
	
Label_158:
	var_80_int = 3; // 0x9e PushI
	var_81_bool = var_53_int == var_80_int; // 0x9f Eq
	if(var_81_bool == 0) goto Label_164; // 0xa0 JumpB
	var_51_string = "pers_worker"; // 0xa1 MovS
	return 0; // 0xa2 Return
	
Label_164:
	var_82_int = 4; // 0xa4 PushI
	var_83_bool = var_53_int == var_82_int; // 0xa5 Eq
	if(var_83_bool == 0) goto Label_169; // 0xa6 JumpB
	var_51_string = "pers_wasted_male"; // 0xa7 MovS
	return 0; // 0xa8 Return
}


func_729(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x2d9 PushV
	var_38_object = var_31_object; // 0x2da Push
	if(var_38_object == 0) goto Label_749; // 0x2db JumpB
	size(var_35_int); // 0x2dc ObjFunc
	var_36_int = 0; // 0x2de MovI
	
Label_735:
	var_39_bool = var_36_int < var_35_int; // 0x2df LT
	if(var_39_bool == 0) goto Label_747; // 0x2e0 JumpB
	get(var_37_object, var_36_int); // 0x2e1 ObjFunc
	var_40_object = var_37_object; // 0x2e3 Push
	if(var_40_object == 0) goto Label_743; // 0x2e4 JumpB
	RemoveActor(var_37_object); // 0x2e5 Func
	
Label_743:
	var_37_object = 0; // 0x2e7 SetNull
	var_41_int = 1; // 0x2e8 PushI
	var_36_int = var_36_int + var_41_int; // 0x2e9 Add2
	goto Label_735; // 0x2ea Jump
	
Label_747:
	clear(); // 0x2eb ObjFunc
	
Label_749:
	return 6; // 0x2ed Return
}


func_282(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x11a PushV
	var_10_int = 1; // 0x11b MovI
	
Label_284:
	var_14_string = "pt_item_food"; // 0x11c PushS
	var_15_int = var_14_string + var_10_int; // 0x11d Add
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector); // 0x11e Func
	var_16_bool = var_11_bool == 0; // 0x120 Not
	if(var_16_bool == 0) goto Label_291; // 0x121 JumpB
	goto Label_300; // 0x122 Jump
	
Label_300:
	return 8; // 0x12c Return
	
Label_291:
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; // 0x123 PushV
	var_17_cvector = var_12_cvector; // 0x124 Mov
	var_18_cvector = var_13_cvector; // 0x125 Mov
	var_19_bool = var_5_bool; // 0x126 Mov
	func_358(var_17_cvector, var_18_cvector, var_19_bool); // 0x127 NEW_2
	var_63_int = 1; // 0x129 PushI
	var_10_int = var_10_int + var_63_int; // 0x12a Add2
	goto Label_284; // 0x12b Jump
}


func_417(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); // 0x1a1 PushV
	var_97_bool = 0; var_98_float = 0; // 0x1a2 PushV
	var_99_bool = var_78_bool; // 0x1a3 Push
	if(var_99_bool == 0) goto Label_423; // 0x1a4 JumpB
	var_98_float = 0.05; // 0x1a5 MovF
	goto Label_424; // 0x1a6 Jump
	
Label_424:
	func_700(var_97_bool, var_98_float); // 0x1a8 NEW_2
	if(var_97_bool == 0) goto Label_475; // 0x1aa JumpB
	var_100_int = 8; // 0x1ab PushI
	var_101_int = 3; // 0x1ac PushI
	var_102_int = 3; // 0x1ad PushI
	var_103_int = 3; // 0x1ae PushI
	var_104_int = 2; // 0x1af PushI
	var_105_int = 2; // 0x1b0 PushI
	var_106_int = 1; // 0x1b1 PushI
	var_107_string = "rusk"; // 0x1b2 PushS
	var_108_string = "dried_fish"; // 0x1b3 PushS
	var_109_string = "dried_meat"; // 0x1b4 PushS
	var_110_string = "smoked_meat"; // 0x1b5 PushS
	var_111_string = "fresh_fish"; // 0x1b6 PushS
	var_112_string = "fresh_meat"; // 0x1b7 PushS
	var_113_string = "tvirin"; // 0x1b8 PushS
	RandOneOf(var_88_string, var_100_int, var_101_int, var_102_int, var_103_int, var_104_int, var_105_int, var_106_int, var_107_string, var_108_string, var_109_string, var_110_string, var_111_string, var_112_string, var_113_string); // 0x1b9 Func
	RandVec2D(var_90_float, var_91_float); // 0x1bb Func
	var_114_float = GetByIndex(var_92_cvector, 0); // 0x1bd PushE
	var_114_float = var_90_float; // 0x1be Mov
	SetByIndex(var_92_cvector, 0) = var_114_float; // 0x1bf PopE
	var_115_float = GetByIndex(var_92_cvector, 1); // 0x1c0 PushE
	var_115_float = 0; // 0x1c1 MovI
	SetByIndex(var_92_cvector, 1) = var_115_float; // 0x1c2 PopE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0x1c3 PushE
	var_116_float = var_91_float; // 0x1c4 Mov
	SetByIndex(var_92_cvector, 2) = var_116_float; // 0x1c5 PopE
	var_117_string = "scripted_container"; // 0x1c6 PushS
	var_118_object = Obj(); // 0x1c7 PushV
	func_694(var_118_object); // 0x1c8 NEW_2
	var_119_string = "item_plate.xml"; // 0x1ca PushS
	AddActorByType(var_89_object, var_117_string, var_118_object, var_76_cvector, var_92_cvector, var_119_string); // 0x1cb Func
	var_120_string = "scripted_container"; // 0x1cd PushS
	var_121_object = Obj(); // 0x1ce PushV
	func_694(var_121_object); // 0x1cf NEW_2
	var_122_cvector = CVector(0.0, 5.0, 0.0); // 0x1d1 PushVec
	var_123_int = var_76_cvector + var_122_cvector; // 0x1d2 Add
	var_124_string = "item_"; // 0x1d3 PushS
	var_125_int = var_124_string + var_88_string; // 0x1d4 Add
	var_126_string = "_steal.xml"; // 0x1d5 PushS
	var_127_int = var_125_int + var_126_string; // 0x1d6 Add
	AddActorByType(var_89_object, var_120_string, var_121_object, var_123_int, var_77_cvector, var_127_int); // 0x1d7 Func
	var_89_object = 0; // 0x1d9 SetNull
	goto Label_499; // 0x1da Jump
	
Label_499:
	return 18; // 0x1f3 Return
	
Label_475:
	var_128_bool = 0; var_129_float = 0; // 0x1db PushV
	var_129_float = 0.5; // 0x1dc MovF
	func_700(var_128_bool, var_129_float); // 0x1dd NEW_2
	if(var_128_bool == 0) goto Label_499; // 0x1df JumpB
	RandVec2D(var_94_float, var_95_float); // 0x1e0 Func
	var_130_float = GetByIndex(var_96_cvector, 0); // 0x1e2 PushE
	var_130_float = var_94_float; // 0x1e3 Mov
	SetByIndex(var_96_cvector, 0) = var_130_float; // 0x1e4 PopE
	var_131_float = GetByIndex(var_96_cvector, 1); // 0x1e5 PushE
	var_131_float = 0; // 0x1e6 MovI
	SetByIndex(var_96_cvector, 1) = var_131_float; // 0x1e7 PopE
	var_132_float = GetByIndex(var_96_cvector, 2); // 0x1e8 PushE
	var_132_float = var_95_float; // 0x1e9 Mov
	SetByIndex(var_96_cvector, 2) = var_132_float; // 0x1ea PopE
	var_133_string = "scripted_container"; // 0x1eb PushS
	var_134_object = Obj(); // 0x1ec PushV
	func_694(var_134_object); // 0x1ed NEW_2
	var_135_string = "item_plate.xml"; // 0x1ef PushS
	AddActorByType(var_93_object, var_133_string, var_134_object, var_76_cvector, var_96_cvector, var_135_string); // 0x1f0 Func
	var_93_object = 0; // 0x1f2 SetNull
	
Label_423:
	var_98_float = 0.2; // 0x1a7 MovF
}


func_358(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x166 PushV
	var_32_bool = 0; var_33_float = 0; // 0x167 PushV
	var_34_bool = var_19_bool; // 0x168 Push
	if(var_34_bool == 0) goto Label_364; // 0x169 JumpB
	var_33_float = 0.05; // 0x16a MovF
	goto Label_365; // 0x16b Jump
	
Label_365:
	func_700(var_32_bool, var_33_float); // 0x16d NEW_2
	if(var_32_bool == 0) goto Label_392; // 0x16f JumpB
	var_37_int = 5; // 0x170 PushI
	var_38_int = 5; // 0x171 PushI
	var_39_int = 3; // 0x172 PushI
	var_40_int = 2; // 0x173 PushI
	var_41_int = 3; // 0x174 PushI
	var_42_string = "bread"; // 0x175 PushS
	var_43_string = "bottle_water"; // 0x176 PushS
	var_44_string = "milk"; // 0x177 PushS
	var_45_string = "vegetables"; // 0x178 PushS
	var_46_string = "lemon"; // 0x179 PushS
	RandOneOf(var_26_string, var_37_int, var_38_int, var_39_int, var_40_int, var_41_int, var_42_string, var_43_string, var_44_string, var_45_string, var_46_string); // 0x17a Func
	var_47_string = "scripted_container"; // 0x17c PushS
	var_48_object = Obj(); // 0x17d PushV
	func_694(var_48_object); // 0x17e NEW_2
	var_51_string = "item_"; // 0x180 PushS
	var_52_int = var_51_string + var_26_string; // 0x181 Add
	var_53_string = "_steal.xml"; // 0x182 PushS
	var_54_int = var_52_int + var_53_string; // 0x183 Add
	AddActorByType(var_27_object, var_47_string, var_48_object, var_17_cvector, var_18_cvector, var_54_int); // 0x184 Func
	var_27_object = 0; // 0x186 SetNull
	goto Label_416; // 0x187 Jump
	
Label_416:
	return 12; // 0x1a0 Return
	
Label_392:
	var_55_bool = 0; var_56_float = 0; // 0x188 PushV
	var_56_float = 0.5; // 0x189 MovF
	func_700(var_55_bool, var_56_float); // 0x18a NEW_2
	if(var_55_bool == 0) goto Label_416; // 0x18c JumpB
	RandVec2D(var_29_float, var_30_float); // 0x18d Func
	var_57_float = GetByIndex(var_31_cvector, 0); // 0x18f PushE
	var_57_float = var_29_float; // 0x190 Mov
	SetByIndex(var_31_cvector, 0) = var_57_float; // 0x191 PopE
	var_58_float = GetByIndex(var_31_cvector, 1); // 0x192 PushE
	var_58_float = 0; // 0x193 MovI
	SetByIndex(var_31_cvector, 1) = var_58_float; // 0x194 PopE
	var_59_float = GetByIndex(var_31_cvector, 2); // 0x195 PushE
	var_59_float = var_30_float; // 0x196 Mov
	SetByIndex(var_31_cvector, 2) = var_59_float; // 0x197 PopE
	var_60_string = "scripted_container"; // 0x198 PushS
	var_61_object = Obj(); // 0x199 PushV
	func_694(var_61_object); // 0x19a NEW_2
	var_62_string = "item_plate.xml"; // 0x19c PushS
	AddActorByType(var_28_object, var_60_string, var_61_object, var_17_cvector, var_31_cvector, var_62_string); // 0x19d Func
	var_28_object = 0; // 0x19f SetNull
	
Label_364:
	var_33_float = 0.2; // 0x16c MovF
}


func_682(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x2aa PushV
	var_18_string = "HasProperty"; // 0x2ab PushS
	var_19_int = 2; // 0x2ac PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x2ad FuncExist
	var_21_bool = var_20_bool == 0; // 0x2ae Not
	if(var_21_bool == 0) goto Label_690; // 0x2af JumpB
	var_13_bool = 0; // 0x2b0 MovB
	return 2; // 0x2b1 Return
	
Label_690:
	HasProperty(var_15_string, var_17_bool); // 0x2b2 ObjFunc
	var_13_bool = var_17_bool; // 0x2b4 Mov
	return 2; // 0x2b5 Return
}


func_555(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; // 0x22b Not
	if(var_202_bool == 0) goto Label_561; // 0x22c JumpB
	var_203_object = Obj(); // 0x22d PushV
	func_705(var_203_object); // 0x22e NEW_2
	var_1_object = var_203_object; // 0x22f TMov
	
Label_561:
	var_206_bool = var_0_object == 0; // 0x231 Not
	if(var_206_bool == 0) goto Label_565; // 0x232 JumpB
	CreateIntVector(var_0_object); // 0x233 Func
	
Label_565:
	var_207_object = Obj(); // 0x235 PushV
	var_207_object = var_0_object; // 0x236 MovT
	func_0(); // 0x237 NEW_2
	
Label_569:
	Hold(); // 0x239 Func
	goto Label_569; // 0x23b Jump
}


func_171(var_84_string, var_85_int, var_86_int)
{
	var_87_int = 0; // 0xac PushI
	var_88_bool = var_85_int == var_87_int; // 0xad Eq
	if(var_88_bool == 0) goto Label_205; // 0xae JumpB
	var_89_int = 0; // 0xaf PushI
	var_90_bool = var_86_int == var_89_int; // 0xb0 Eq
	if(var_90_bool == 0) goto Label_181; // 0xb1 JumpB
	var_84_string = "ilittleboy.xml"; // 0xb2 MovS
	return 0; // 0xb3 Return
	
Label_181:
	var_91_int = 1; // 0xb5 PushI
	var_92_bool = var_86_int == var_91_int; // 0xb6 Eq
	if(var_92_bool == 0) goto Label_187; // 0xb7 JumpB
	var_84_string = "ilittlegirl.xml"; // 0xb8 MovS
	return 0; // 0xb9 Return
	
Label_187:
	var_93_int = 2; // 0xbb PushI
	var_94_bool = var_86_int == var_93_int; // 0xbc Eq
	if(var_94_bool == 0) goto Label_193; // 0xbd JumpB
	var_84_string = "iboy.xml"; // 0xbe MovS
	return 0; // 0xbf Return
	
Label_193:
	var_95_int = 3; // 0xc1 PushI
	var_96_bool = var_86_int == var_95_int; // 0xc2 Eq
	if(var_96_bool == 0) goto Label_199; // 0xc3 JumpB
	var_84_string = "igirl.xml"; // 0xc4 MovS
	return 0; // 0xc5 Return
	
Label_199:
	var_97_int = 4; // 0xc7 PushI
	var_98_bool = var_86_int == var_97_int; // 0xc8 Eq
	if(var_98_bool == 0) goto Label_204; // 0xc9 JumpB
	var_84_string = "igirl2.xml"; // 0xca MovS
	return 0; // 0xcb Return
	
Label_204:
	goto Label_252; // 0xcc Jump
	
Label_252:
	var_84_string = ""; // 0xfc MovS
	return 0; // 0xfd Return
	
Label_205:
	var_99_int = 1; // 0xcd PushI
	var_100_bool = var_85_int == var_99_int; // 0xce Eq
	if(var_100_bool == 0) goto Label_220; // 0xcf JumpB
	var_101_int = 0; // 0xd0 PushI
	var_102_bool = var_86_int == var_101_int; // 0xd1 Eq
	if(var_102_bool == 0) goto Label_214; // 0xd2 JumpB
	var_84_string = "iwoman.xml"; // 0xd3 MovS
	return 0; // 0xd4 Return
	
Label_214:
	var_103_int = 1; // 0xd6 PushI
	var_104_bool = var_86_int == var_103_int; // 0xd7 Eq
	if(var_104_bool == 0) goto Label_219; // 0xd8 JumpB
	var_84_string = "iwasted_girl.xml"; // 0xd9 MovS
	return 0; // 0xda Return
	
Label_219:
	goto Label_252; // 0xdb Jump
	
Label_220:
	var_105_int = 2; // 0xdc PushI
	var_106_bool = var_85_int == var_105_int; // 0xdd Eq
	if(var_106_bool == 0) goto Label_252; // 0xde JumpB
	var_107_int = 0; // 0xdf PushI
	var_108_bool = var_86_int == var_107_int; // 0xe0 Eq
	if(var_108_bool == 0) goto Label_229; // 0xe1 JumpB
	var_84_string = "iunosha.xml"; // 0xe2 MovS
	return 0; // 0xe3 Return
	
Label_229:
	var_109_int = 1; // 0xe5 PushI
	var_110_bool = var_86_int == var_109_int; // 0xe6 Eq
	if(var_110_bool == 0) goto Label_235; // 0xe7 JumpB
	var_84_string = "iunosha2.xml"; // 0xe8 MovS
	return 0; // 0xe9 Return
	
Label_235:
	var_111_int = 2; // 0xeb PushI
	var_112_bool = var_86_int == var_111_int; // 0xec Eq
	if(var_112_bool == 0) goto Label_241; // 0xed JumpB
	var_84_string = "iworker.xml"; // 0xee MovS
	return 0; // 0xef Return
	
Label_241:
	var_113_int = 3; // 0xf1 PushI
	var_114_bool = var_86_int == var_113_int; // 0xf2 Eq
	if(var_114_bool == 0) goto Label_247; // 0xf3 JumpB
	var_84_string = "iworker2.xml"; // 0xf4 MovS
	return 0; // 0xf5 Return
	
Label_247:
	var_115_int = 4; // 0xf7 PushI
	var_116_bool = var_86_int == var_115_int; // 0xf8 Eq
	if(var_116_bool == 0) goto Label_252; // 0xf9 JumpB
	var_84_string = "iwasted_male.xml"; // 0xfa MovS
	return 0; // 0xfb Return
}


func_301(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x12d PushV
	var_69_int = 1; // 0x12e MovI
	
Label_303:
	var_73_string = "pt_item_pfood"; // 0x12f PushS
	var_74_int = var_73_string + var_69_int; // 0x130 Add
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector); // 0x131 Func
	var_75_bool = var_70_bool == 0; // 0x133 Not
	if(var_75_bool == 0) goto Label_310; // 0x134 JumpB
	goto Label_319; // 0x135 Jump
	
Label_319:
	return 8; // 0x13f Return
	
Label_310:
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; // 0x136 PushV
	var_76_cvector = var_71_cvector; // 0x137 Mov
	var_77_cvector = var_72_cvector; // 0x138 Mov
	var_78_bool = var_64_bool; // 0x139 Mov
	func_417(var_76_cvector, var_77_cvector, var_78_bool); // 0x13a NEW_2
	var_136_int = 1; // 0x13c PushI
	var_69_int = var_69_int + var_136_int; // 0x13d Add2
	goto Label_303; // 0x13e Jump
}


func_500(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x1f4 PushV
	var_154_bool = 0; var_155_float = 0; // 0x1f5 PushV
	var_156_bool = var_151_bool; // 0x1f6 Push
	if(var_156_bool == 0) goto Label_506; // 0x1f7 JumpB
	var_155_float = 0.05; // 0x1f8 MovF
	goto Label_507; // 0x1f9 Jump
	
Label_507:
	func_700(var_154_bool, var_155_float); // 0x1fb NEW_2
	if(var_154_bool == 0) goto Label_518; // 0x1fd JumpB
	var_157_string = "scripted_container"; // 0x1fe PushS
	var_158_object = Obj(); // 0x1ff PushV
	func_694(var_158_object); // 0x200 NEW_2
	var_159_string = "item_knife_steal.xml"; // 0x202 PushS
	AddActorByType(var_153_object, var_157_string, var_158_object, var_149_cvector, var_150_cvector, var_159_string); // 0x203 Func
	var_153_object = 0; // 0x205 SetNull
	
Label_518:
	return 2; // 0x206 Return
	
Label_506:
	var_155_float = 0.05; // 0x1fa MovF
}


func_694(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x2b6 PushV
	self(var_50_object); // 0x2b7 Func
	var_48_object = var_50_object; // 0x2b9 Mov
	return 2; // 0x2ba Return
}


func_700(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0; // 0x2bc PushV
	rand(var_36_float); // 0x2bd Func
	var_32_bool = var_36_float < var_33_float; // 0x2bf LT2
	return 2; // 0x2c0 Return
}


