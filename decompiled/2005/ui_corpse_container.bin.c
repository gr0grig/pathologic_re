task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_float)
{
	var_2_int = var_2_int + var_5_float; // 0x5f Add2
	var_6_int = 0; // 0x60 PushI
	var_7_bool = var_2_int < var_6_int; // 0x61 LT
	if(var_7_bool == 0) goto Label_100; // 0x62 JumpB
	var_2_int = 0; // 0x63 TMovI
	
Label_100:
	func_160(var_5_float); // 0x65 NEW_2
	return 0; // 0x67 Return
}


task_0_event_100(var_0_int, var_1_object, var_2_int, var_3_int)
{
	DestroyWindow(); // 0x1b8 Func
	return 0; // 0x1ba Return
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_float)
{
	var_4_int = 0; // 0x1d0 PushV
	var_4_int = var_0_int; // 0x1d1 MovT
	func_824(var_4_int); // 0x1d2 NEW_2
	func_625(); // 0x1d5 NEW_2
	func_104(); // 0x1d8 NEW_2
	return 0; // 0x1da Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_int, var_4_string, var_5_object)
{
	var_6_bool = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); // 0x1db PushV
	var_12_bool = 0; // 0x1dc MovB
	var_18_string = "button_weapon"; // 0x1dd PushS
	var_19_bool = var_4_string == var_18_string; // 0x1de Eq
	if(var_19_bool == 0) goto Label_486; // 0x1df JumpB
	var_20_int = 0; // 0x1e0 PushV
	var_20_int = 0; // 0x1e1 MovI
	func_590(var_17_object, var_20_int); // 0x1e2 NEW_2
	var_12_bool = 1; // 0x1e4 MovB
	goto Label_578; // 0x1e5 Jump
	
Label_578:
	var_55_bool = var_12_bool == 0; // 0x242 Not
	if(var_55_bool == 0) goto Label_587; // 0x243 JumpB
	var_56_bool = 0; var_57_int = 0; var_58_string = ""; var_59_object = Obj(); // 0x244 PushV
	var_57_int = var_3_int; // 0x245 Mov
	var_58_string = var_4_string; // 0x246 Mov
	var_59_object = var_5_object; // 0x247 Mov
	func_18(var_56_bool, var_57_int, var_58_string, var_59_object); // 0x248 NEW_2
	var_12_bool = var_56_bool; // 0x249 Mov
	
Label_587:
	var_341_bool = var_12_bool; // 0x24b Push
	if(var_341_bool == 0) goto Label_589; // 0x24c JumpB
	
Label_589:
	return 12; // 0x24d Return
	
Label_486:
	var_342_string = "button_clothes"; // 0x1e6 PushS
	var_343_bool = var_4_string == var_342_string; // 0x1e7 Eq
	if(var_343_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_344_int = 0; // 0x1e9 PushV
	var_344_int = 1; // 0x1ea MovI
	func_590(var_17_object, var_344_int); // 0x1eb NEW_2
	var_12_bool = 1; // 0x1ed MovB
	goto Label_578; // 0x1ee Jump
	
Label_495:
	var_345_string = "button_medcine"; // 0x1ef PushS
	var_346_bool = var_4_string == var_345_string; // 0x1f0 Eq
	if(var_346_bool == 0) goto Label_504; // 0x1f1 JumpB
	var_347_int = 0; // 0x1f2 PushV
	var_347_int = 2; // 0x1f3 MovI
	func_590(var_17_object, var_347_int); // 0x1f4 NEW_2
	var_12_bool = 1; // 0x1f6 MovB
	goto Label_578; // 0x1f7 Jump
	
Label_504:
	var_348_string = "button_food"; // 0x1f8 PushS
	var_349_bool = var_4_string == var_348_string; // 0x1f9 Eq
	if(var_349_bool == 0) goto Label_513; // 0x1fa JumpB
	var_350_int = 0; // 0x1fb PushV
	var_350_int = 3; // 0x1fc MovI
	func_590(var_17_object, var_350_int); // 0x1fd NEW_2
	var_12_bool = 1; // 0x1ff MovB
	goto Label_578; // 0x200 Jump
	
Label_513:
	var_351_string = "button_other"; // 0x201 PushS
	var_352_bool = var_4_string == var_351_string; // 0x202 Eq
	if(var_352_bool == 0) goto Label_522; // 0x203 JumpB
	var_353_int = 0; // 0x204 PushV
	var_353_int = 4; // 0x205 MovI
	func_590(var_17_object, var_353_int); // 0x206 NEW_2
	var_12_bool = 1; // 0x208 MovB
	goto Label_578; // 0x209 Jump
	
Label_522:
	var_354_string = "button_detector"; // 0x20a PushS
	var_355_bool = var_4_string == var_354_string; // 0x20b Eq
	if(var_355_bool == 0) goto Label_526; // 0x20c JumpB
	goto Label_578; // 0x20d Jump
	
Label_526:
	var_356_string = "button_anticeptic"; // 0x20e PushS
	var_357_bool = var_4_string == var_356_string; // 0x20f Eq
	if(var_357_bool == 0) goto Label_530; // 0x210 JumpB
	goto Label_578; // 0x211 Jump
	
Label_530:
	var_358_int = 0; // 0x212 PushI
	var_359_bool = var_3_int != var_358_int; // 0x213 Neq
	if(var_359_bool == 0) goto Label_539; // 0x214 JumpB
	var_360_string = "noinv_drop"; // 0x215 PushS
	GetVariable(var_360_string, var_13_int); // 0x216 Func
	var_361_int = var_13_int; // 0x218 Push
	if(var_361_int == 0) goto Label_539; // 0x219 JumpB
	return 12; // 0x21a Return
	
Label_539:
	var_14_int = 0; // 0x21b MovI
	
Label_540:
	var_362_int = 12; // 0x21c PushI
	var_363_bool = var_14_int < var_362_int; // 0x21d LT
	if(var_363_bool == 0) goto Label_578; // 0x21e JumpB
	var_364_string = ""; var_365_int = 0; // 0x21f PushV
	var_365_int = var_14_int; // 0x220 Mov
	func_911(var_364_string, var_365_int); // 0x221 NEW_2
	var_376_bool = var_4_string == var_364_string; // 0x223 Eq
	if(var_376_bool == 0) goto Label_575; // 0x224 JumpB
	var_377_object = Obj(); // 0x225 PushV
	func_12(var_377_object); // 0x226 NEW_2
	var_15_object = var_377_object; // 0x227 Mov
	GetItemCount(var_16_int, var_0_int); // 0x229 ObjFunc
	var_378_bool = var_16_int > var_14_int; // 0x22b GT
	if(var_378_bool == 0) goto Label_573; // 0x22c JumpB
	GetItem(var_17_object, var_14_int, var_0_int); // 0x22d ObjFunc
	var_379_bool = 0; var_380_object = Obj(); // 0x22f PushV
	var_380_object = var_17_object; // 0x230 Mov
	func_443(var_380_object); // 0x231 NEW_2
	var_381_bool = var_379_bool == 0; // 0x233 Not
	if(var_381_bool == 0) goto Label_572; // 0x234 JumpB
	var_382_bool = 0; var_383_int = 0; var_384_int = 0; // 0x235 PushV
	var_383_int = var_14_int; // 0x236 Mov
	var_385_int = 0; // 0x237 PushI
	var_384_int = var_3_int == var_385_int; // 0x238 Eq2
	func_147(var_17_object, var_382_bool, var_383_int, var_384_int); // 0x239 NEW_2
	var_12_bool = var_382_bool; // 0x23a Mov
	
Label_572:
	var_17_object = 0; // 0x23c SetNull
	
Label_573:
	goto Label_578; // 0x23d Jump
	
Label_575:
	var_420_int = 1; // 0x23f PushI
	var_14_int = var_14_int + var_420_int; // 0x240 Add2
	goto Label_540; // 0x241 Jump
}


main(var_0_int, var_1_object, var_2_int)
{
	var_3_string = "inventory_base.xml"; // 0x0 PushS
	var_4_bool = 0; // 0x1 PushB
	CreateWindow(var_3_string, var_4_bool, var_4_bool); // 0x2 Func
	func_160(var_2_int); // 0x5 NEW_2
	var_53_int = 0; // 0x7 PushV
	var_53_int = 0; // 0x8 MovI
	func_407(var_2_int, var_53_int); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_131(var_2_int, var_196_int)
{
	var_201_bool = 0; var_202_bool = 0; // 0x83 PushV
	var_203_int = 0; // 0x84 PushV
	var_204_int = 0; var_205_bool = 0; var_206_int = 0; // 0x85 PushV
	var_205_bool = var_202_bool; // 0x86 Mov
	var_206_int = var_196_int + var_2_int; // 0x87 Add2
	func_694(var_204_int, var_205_bool, var_206_int); // 0x88 NEW_2
	var_203_int = var_204_int; // 0x89 Mov
	func_590(var_202_bool, var_203_int); // 0x8b NEW_2
	var_207_bool = var_202_bool == 0; // 0x8d Not
	if(var_207_bool == 0) goto Label_143; // 0x8e JumpB
	
Label_143:
	func_160(var_202_bool); // 0x90 NEW_2
	return 2; // 0x92 Return
}


func_323(var_83_int, var_84_int, var_85_bool)
{
	var_86_object = Obj(); var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_int = 0; var_91_object = Obj(); var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_object = Obj(); var_101_int = 0; var_102_int = 0; var_103_bool = 0; // 0x143 PushV
	GetContainer(var_95_object); // 0x144 Func
	GetItemCount(var_96_int); // 0x146 ObjFunc
	var_97_int = 0; // 0x148 MovI
	var_98_int = 0; // 0x149 MovI
	var_99_int = 0; // 0x14a MovI
	
Label_331:
	var_104_bool = var_99_int < var_96_int; // 0x14b LT
	if(var_104_bool == 0) goto Label_374; // 0x14c JumpB
	GetItem(var_100_object, var_99_int); // 0x14d ObjFunc
	GetItemID(var_101_int); // 0x14f ObjFunc
	GetItemAmount(var_102_int, var_99_int); // 0x151 ObjFunc
	var_103_bool = 0; // 0x153 MovB
	var_105_string = "Organ"; // 0x154 PushS
	HasProperty(var_103_bool, var_105_string); // 0x155 ObjFunc
	var_106_bool = var_103_bool; // 0x157 Push
	if(var_106_bool == 0) goto Label_358; // 0x158 JumpB
	var_107_bool = 0; // 0x159 PushV
	var_107_bool = 0; // 0x15a MovB
	var_108_bool = var_85_bool; // 0x15b Push
	if(var_108_bool == 0) goto Label_352; // 0x15c JumpB
	var_109_bool = var_97_int == var_84_int; // 0x15d Eq
	if(var_109_bool == 0) goto Label_352; // 0x15e JumpB
	var_107_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_107_bool == 0) goto Label_355; // 0x160 JumpB
	var_83_int = var_99_int; // 0x161 Mov
	return 18; // 0x162 Return
	
Label_355:
	var_110_int = 1; // 0x163 PushI
	var_97_int = var_97_int + var_110_int; // 0x164 Add2
	goto Label_370; // 0x165 Jump
	
Label_370:
	var_100_object = 0; // 0x172 SetNull
	var_111_int = 1; // 0x173 PushI
	var_99_int = var_99_int + var_111_int; // 0x174 Add2
	goto Label_331; // 0x175 Jump
	
Label_358:
	var_112_bool = 0; // 0x166 PushV
	var_112_bool = 0; // 0x167 MovB
	var_113_bool = var_85_bool == 0; // 0x168 Not
	if(var_113_bool == 0) goto Label_365; // 0x169 JumpB
	var_114_bool = var_98_int == var_84_int; // 0x16a Eq
	if(var_114_bool == 0) goto Label_365; // 0x16b JumpB
	var_112_bool = 1; // 0x16c MovB
	
Label_365:
	if(var_112_bool == 0) goto Label_368; // 0x16d JumpB
	var_83_int = var_99_int; // 0x16e Mov
	return 18; // 0x16f Return
	
Label_368:
	var_115_int = 1; // 0x170 PushI
	var_98_int = var_98_int + var_115_int; // 0x171 Add2
	
Label_374:
	var_83_int = -1; // 0x176 MovI
	return 18; // 0x177 Return
}


func_774(var_0_int, var_386_bool, var_387_int, var_388_int)
{
	var_389_object = Obj(); var_390_object = Obj(); var_391_object = Obj(); var_392_int = 0; var_393_int = 0; var_394_bool = 0; var_395_int = 0; var_396_bool = 0; var_397_bool = 0; var_398_object = Obj(); var_399_object = Obj(); var_400_object = Obj(); var_401_int = 0; var_402_int = 0; var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_bool = 0; // 0x306 PushV
	var_407_object = Obj(); // 0x307 PushV
	func_12(var_407_object); // 0x308 NEW_2
	var_399_object = var_407_object; // 0x309 Mov
	GetContainer(var_398_object); // 0x30b Func
	GetItemCount(var_401_int, var_387_int); // 0x30d ObjFunc
	var_408_bool = var_401_int <= var_388_int; // 0x30f LE
	if(var_408_bool == 0) goto Label_787; // 0x310 JumpB
	var_386_bool = 0; // 0x311 MovB
	return 18; // 0x312 Return
	
Label_787:
	GetItemAmount(var_402_int, var_388_int, var_387_int); // 0x313 ObjFunc
	GetItem(var_400_object, var_388_int, var_387_int); // 0x315 ObjFunc
	var_409_int = 0; // 0x317 PushI
	var_410_int = 1; // 0x318 PushI
	AddItem(var_403_bool, var_400_object, var_409_int, var_410_int); // 0x319 ObjFunc
	var_411_bool = var_403_bool == 0; // 0x31b Not
	if(var_411_bool == 0) goto Label_799; // 0x31c JumpB
	var_386_bool = 0; // 0x31d MovB
	return 18; // 0x31e Return
	
Label_799:
	var_412_int = 0; // 0x31f PushI
	var_413_bool = var_0_int == var_412_int; // 0x320 Eq
	if(var_413_bool == 0) goto Label_816; // 0x321 JumpB
	GetItemID(var_404_int); // 0x322 ObjFunc
	var_414_string = "Weapon"; // 0x324 PushS
	HasInvItemProperty(var_405_bool, var_404_int, var_414_string); // 0x325 Func
	var_415_bool = var_405_bool; // 0x327 Push
	if(var_415_bool == 0) goto Label_816; // 0x328 JumpB
	IsItemSelected(var_406_bool, var_388_int, var_0_int); // 0x329 ObjFunc
	var_416_bool = var_406_bool; // 0x32b Push
	if(var_416_bool == 0) goto Label_816; // 0x32c JumpB
	var_417_int = -1; // 0x32d PushI
	SetPlayerHandsItem(var_417_int); // 0x32e Func
	
Label_816:
	var_418_int = 1; // 0x330 PushI
	RemoveItem(var_388_int, var_418_int, var_387_int); // 0x331 ObjFunc
	var_386_bool = 1; // 0x333 MovB
	return 18; // 0x334 Return
}


func_200(var_2_int)
{
	var_165_object = Obj(); var_166_int = 0; var_167_int = 0; var_168_int = 0; var_169_object = Obj(); var_170_int = 0; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_int = 0; var_175_object = Obj(); var_176_int = 0; var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_object = Obj(); var_181_int = 0; var_182_int = 0; var_183_int = 0; var_184_object = Obj(); var_185_int = 0; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_int = 0; var_190_object = Obj(); var_191_int = 0; var_192_int = 0; var_193_bool = 0; var_194_int = 0; // 0xc8 PushV
	GetContainer(var_180_object); // 0xc9 Func
	GetItemCount(var_181_int); // 0xcb ObjFunc
	var_182_int = 0; // 0xcd MovI
	var_183_int = 0; // 0xce MovI
	
Label_207:
	var_195_bool = var_183_int < var_181_int; // 0xcf LT
	if(var_195_bool == 0) goto Label_250; // 0xd0 JumpB
	GetItem(var_184_object, var_183_int); // 0xd1 ObjFunc
	GetItemID(var_185_int); // 0xd3 ObjFunc
	GetItemAmount(var_186_int, var_183_int); // 0xd5 ObjFunc
	var_187_bool = 0; // 0xd7 MovB
	var_196_string = "Organ"; // 0xd8 PushS
	HasProperty(var_187_bool, var_196_string); // 0xd9 ObjFunc
	var_197_bool = var_187_bool; // 0xdb Push
	if(var_197_bool == 0) goto Label_222; // 0xdc JumpB
	goto Label_247; // 0xdd Jump
	
Label_247:
	var_198_int = 1; // 0xf7 PushI
	var_183_int = var_183_int + var_198_int; // 0xf8 Add2
	goto Label_207; // 0xf9 Jump
	
Label_222:
	var_199_bool = var_182_int >= var_2_int; // 0xde GE
	if(var_199_bool == 0) goto Label_239; // 0xdf JumpB
	var_200_int = 0; // 0xe0 PushI
	var_201_string = ""; var_202_int = 0; // 0xe1 PushV
	var_202_int = var_182_int - var_2_int; // 0xe2 Sub2
	func_927(var_201_string, var_202_int); // 0xe3 NEW_2
	SendMessage(var_200_int, var_201_string, var_184_object); // 0xe5 Func
	var_213_int = 65536; // 0xe7 PushI
	var_214_int = var_186_int | var_213_int; // 0xe8 Or
	var_215_string = ""; var_216_int = 0; // 0xe9 PushV
	var_216_int = var_182_int - var_2_int; // 0xea Sub2
	func_927(var_215_string, var_216_int); // 0xeb NEW_2
	SendMessage(var_214_int, var_215_string); // 0xed Func
	
Label_239:
	var_217_int = 1; // 0xef PushI
	var_182_int = var_182_int + var_217_int; // 0xf0 Add2
	var_218_int = 4; // 0xf1 PushI
	var_219_int = var_218_int + var_2_int; // 0xf2 Add
	var_220_bool = var_182_int >= var_219_int; // 0xf3 GE
	if(var_220_bool == 0) goto Label_246; // 0xf4 JumpB
	goto Label_250; // 0xf5 Jump
	
Label_250:
	var_188_int = var_182_int + var_2_int; // 0xfa Add2
	
Label_251:
	var_221_int = 4; // 0xfb PushI
	var_222_int = var_221_int + var_2_int; // 0xfc Add
	var_223_bool = var_188_int < var_222_int; // 0xfd LT
	if(var_223_bool == 0) goto Label_265; // 0xfe JumpB
	var_224_int = 32768; // 0xff PushI
	var_225_string = ""; var_226_int = 0; // 0x100 PushV
	var_226_int = var_188_int - var_2_int; // 0x101 Sub2
	func_927(var_225_string, var_226_int); // 0x102 NEW_2
	SendMessage(var_224_int, var_225_string); // 0x104 Func
	var_227_int = 1; // 0x106 PushI
	var_188_int = var_188_int + var_227_int; // 0x107 Add2
	goto Label_251; // 0x108 Jump
	
Label_265:
	var_182_int = 0; // 0x109 MovI
	var_189_int = 0; // 0x10a MovI
	
Label_267:
	var_228_bool = var_189_int < var_181_int; // 0x10b LT
	if(var_228_bool == 0) goto Label_307; // 0x10c JumpB
	GetItem(var_190_object, var_189_int); // 0x10d ObjFunc
	GetItemID(var_191_int); // 0x10f ObjFunc
	GetItemAmount(var_192_int, var_189_int); // 0x111 ObjFunc
	var_193_bool = 0; // 0x113 MovB
	var_229_string = "Organ"; // 0x114 PushS
	HasProperty(var_193_bool, var_229_string); // 0x115 ObjFunc
	var_230_bool = var_193_bool == 0; // 0x117 Not
	if(var_230_bool == 0) goto Label_282; // 0x118 JumpB
	goto Label_304; // 0x119 Jump
	
Label_304:
	var_231_int = 1; // 0x130 PushI
	var_189_int = var_189_int + var_231_int; // 0x131 Add2
	goto Label_267; // 0x132 Jump
	
Label_282:
	var_232_int = 0; // 0x11a PushI
	var_233_string = ""; var_234_int = 0; // 0x11b PushV
	var_234_int = var_182_int; // 0x11c Mov
	func_943(var_233_string, var_234_int); // 0x11d NEW_2
	SendMessage(var_232_int, var_233_string, var_190_object); // 0x11f Func
	var_245_int = 65536; // 0x121 PushI
	var_246_int = var_192_int | var_245_int; // 0x122 Or
	var_247_string = ""; var_248_int = 0; // 0x123 PushV
	var_248_int = var_182_int; // 0x124 Mov
	func_943(var_247_string, var_248_int); // 0x125 NEW_2
	SendMessage(var_246_int, var_247_string); // 0x127 Func
	var_249_int = 1; // 0x129 PushI
	var_182_int = var_182_int + var_249_int; // 0x12a Add2
	var_250_int = 4; // 0x12b PushI
	var_251_bool = var_182_int >= var_250_int; // 0x12c GE
	if(var_251_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_307; // 0x12e Jump
	
Label_307:
	var_194_int = var_182_int; // 0x133 Mov
	
Label_308:
	var_252_int = 4; // 0x134 PushI
	var_253_bool = var_194_int < var_252_int; // 0x135 LT
	if(var_253_bool == 0) goto Label_321; // 0x136 JumpB
	var_254_int = 32768; // 0x137 PushI
	var_255_string = ""; var_256_int = 0; // 0x138 PushV
	var_256_int = var_194_int; // 0x139 Mov
	func_943(var_255_string, var_256_int); // 0x13a NEW_2
	SendMessage(var_254_int, var_255_string); // 0x13c Func
	var_257_int = 1; // 0x13e PushI
	var_194_int = var_194_int + var_257_int; // 0x13f Add2
	goto Label_308; // 0x140 Jump
	
Label_321:
	return 30; // 0x141 Return
	
Label_303:
	var_190_object = 0; // 0x12f SetNull
	
Label_246:
	var_184_object = 0; // 0xf6 SetNull
}


func_12(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0xc PushV
	GetPlayerContainer(var_106_object); // 0xd Func
	var_104_object = var_106_object; // 0xf Mov
	return 2; // 0x10 Return
}


func_590(var_0_int, var_54_int)
{
	var_55_int = -1; // 0x24f PushI
	var_56_bool = var_54_int == var_55_int; // 0x250 Eq
	if(var_56_bool == 0) goto Label_595; // 0x251 JumpB
	return 0; // 0x252 Return
	
Label_595:
	var_57_bool = var_0_int == var_54_int; // 0x253 Eq
	if(var_57_bool == 0) goto Label_598; // 0x254 JumpB
	return 0; // 0x255 Return
	
Label_598:
	var_0_int = var_54_int; // 0x256 TMov
	var_58_int = 0; // 0x257 PushV
	var_58_int = var_0_int; // 0x258 MovT
	func_632(var_58_int); // 0x259 NEW_2
	return 0; // 0x25b Return
}


func_911(var_124_string, var_125_int)
{
	var_126_int = 1; // 0x390 PushI
	var_127_int = var_125_int + var_126_int; // 0x391 Add
	var_128_int = 10; // 0x392 PushI
	var_129_bool = var_127_int < var_128_int; // 0x393 LT
	if(var_129_bool == 0) goto Label_922; // 0x394 JumpB
	var_130_string = "slot0"; // 0x395 PushS
	var_131_int = 1; // 0x396 PushI
	var_132_int = var_125_int + var_131_int; // 0x397 Add
	var_124_string = var_130_string + var_132_int; // 0x398 Add2
	return 0; // 0x399 Return
	
Label_922:
	var_133_string = "slot"; // 0x39a PushS
	var_134_int = 1; // 0x39b PushI
	var_135_int = var_125_int + var_134_int; // 0x39c Add
	var_124_string = var_133_string + var_135_int; // 0x39d Add2
	return 0; // 0x39e Return
}


func_18(var_2_int, var_56_bool, var_57_int, var_58_string)
{
	var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x12 PushV
	var_63_int = 0; // 0x13 MovI
	
Label_20:
	var_66_int = 4; // 0x14 PushI
	var_67_bool = var_63_int < var_66_int; // 0x15 LT
	if(var_67_bool == 0) goto Label_44; // 0x16 JumpB
	var_68_string = ""; var_69_int = 0; // 0x17 PushV
	var_69_int = var_63_int; // 0x18 Mov
	func_943(var_68_string, var_69_int); // 0x19 NEW_2
	var_80_bool = var_58_string == var_68_string; // 0x1b Eq
	if(var_80_bool == 0) goto Label_41; // 0x1c JumpB
	var_81_int = 0; var_82_bool = 0; // 0x1d PushV
	var_83_int = 0; var_84_int = 0; var_85_bool = 0; // 0x1e PushV
	var_84_int = var_63_int; // 0x1f Mov
	var_85_bool = 1; // 0x20 MovB
	func_323(var_83_int, var_84_int, var_85_bool); // 0x21 NEW_2
	var_81_int = var_83_int; // 0x22 Mov
	var_82_bool = 1; // 0x24 MovB
	func_115(var_82_bool); // 0x25 NEW_2
	var_56_bool = 1; // 0x27 MovB
	return 6; // 0x28 Return
	
Label_41:
	var_180_int = 1; // 0x29 PushI
	var_63_int = var_63_int + var_180_int; // 0x2a Add2
	goto Label_20; // 0x2b Jump
	
Label_44:
	var_64_int = 0; // 0x2c MovI
	
Label_45:
	var_181_int = 4; // 0x2d PushI
	var_182_bool = var_64_int < var_181_int; // 0x2e LT
	if(var_182_bool == 0) goto Label_69; // 0x2f JumpB
	var_183_string = ""; var_184_int = 0; // 0x30 PushV
	var_184_int = var_64_int; // 0x31 Mov
	func_927(var_183_string, var_184_int); // 0x32 NEW_2
	var_195_bool = var_58_string == var_183_string; // 0x34 Eq
	if(var_195_bool == 0) goto Label_66; // 0x35 JumpB
	var_196_int = 0; var_197_bool = 0; // 0x36 PushV
	var_198_int = 0; var_199_int = 0; var_200_bool = 0; // 0x37 PushV
	var_199_int = var_64_int; // 0x38 Mov
	var_200_bool = 0; // 0x39 MovB
	func_323(var_198_int, var_199_int, var_200_bool); // 0x3a NEW_2
	var_196_int = var_198_int; // 0x3b Mov
	var_197_bool = 1; // 0x3d MovB
	func_131(var_196_int, var_197_bool); // 0x3e NEW_2
	var_56_bool = 1; // 0x40 MovB
	return 6; // 0x41 Return
	
Label_66:
	var_256_int = 1; // 0x42 PushI
	var_64_int = var_64_int + var_256_int; // 0x43 Add2
	goto Label_45; // 0x44 Jump
	
Label_69:
	var_257_string = "scrollbar"; // 0x45 PushS
	var_258_bool = var_58_string == var_257_string; // 0x46 Eq
	if(var_258_bool == 0) goto Label_92; // 0x47 JumpB
	var_259_int = 0; // 0x48 PushV
	func_377(var_259_int); // 0x49 NEW_2
	var_65_int = var_259_int; // 0x4a Mov
	var_260_float = 0.01; // 0x4c PushF
	var_261_int = 4; // 0x4d PushI
	var_262_int = var_65_int - var_261_int; // 0x4e Sub
	var_263_float = var_260_float * var_262_int; // 0x4f Mult
	var_264_float = var_263_float * var_57_int; // 0x50 Mult
	var_265_float = 0.5; // 0x51 PushF
	var_2_int = var_264_float + var_265_float; // 0x52 Add2
	var_266_int = 0; // 0x53 PushI
	var_267_bool = var_2_int < var_266_int; // 0x54 LT
	if(var_267_bool == 0) goto Label_87; // 0x55 JumpB
	var_2_int = 0; // 0x56 TMovI
	
Label_87:
	func_200(var_65_int); // 0x58 NEW_2
	var_56_bool = 1; // 0x5a MovB
	return 6; // 0x5b Return
	
Label_92:
	var_56_bool = 0; // 0x5c MovB
	return 6; // 0x5d Return
}


func_147(var_0_int, var_2_int, var_382_bool, var_383_int)
{
	var_386_bool = 0; var_387_int = 0; var_388_int = 0; // 0x94 PushV
	var_387_int = var_0_int; // 0x95 MovT
	var_388_int = var_383_int; // 0x96 Mov
	func_774(var_384_int, var_386_bool, var_387_int, var_388_int); // 0x97 NEW_2
	var_419_int = 1; // 0x99 PushI
	var_2_int = var_2_int + var_419_int; // 0x9a Add2
	func_160(var_384_int); // 0x9c NEW_2
	var_382_bool = 1; // 0x9e MovB
	return 0; // 0x9f Return
}


func_407(var_0_int, var_53_int)
{
	var_0_int = -1; // 0x198 TMovI
	var_54_int = 0; // 0x199 PushV
	var_54_int = var_53_int; // 0x19a Mov
	func_590(var_53_int, var_54_int); // 0x19b NEW_2
	var_89_int = 0; // 0x19d PushV
	var_89_int = var_0_int; // 0x19e MovT
	func_824(var_89_int); // 0x19f NEW_2
	func_625(); // 0x1a2 NEW_2
	var_162_string = "default"; // 0x1a4 PushS
	SetCursor(var_162_string); // 0x1a5 Func
	ShowCursor(); // 0x1a7 Func
	CaptureKeyboard(); // 0x1a9 Func
	var_163_bool = 0; // 0x1ab PushB
	SetOwnerDraw(var_163_bool); // 0x1ac Func
	var_164_bool = 1; // 0x1ae PushB
	SetNeedUpdate(var_164_bool); // 0x1af Func
	func_108(); // 0x1b2 NEW_2
	ProcessEvents(); // 0x1b4 Func
	return 0; // 0x1b6 Return
}


func_604(var_154_int)
{
	var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); var_158_int = 0; // 0x25c PushV
	var_159_object = Obj(); // 0x25d PushV
	func_12(var_159_object); // 0x25e NEW_2
	var_157_object = var_159_object; // 0x25f Mov
	var_160_string = "money"; // 0x261 PushS
	GetProperty(var_160_string, var_158_int); // 0x262 ObjFunc
	var_154_int = var_158_int; // 0x264 Mov
	return 4; // 0x265 Return
}


func_927(var_201_string, var_202_int)
{
	var_203_int = 1; // 0x3a0 PushI
	var_204_int = var_202_int + var_203_int; // 0x3a1 Add
	var_205_int = 10; // 0x3a2 PushI
	var_206_bool = var_204_int < var_205_int; // 0x3a3 LT
	if(var_206_bool == 0) goto Label_938; // 0x3a4 JumpB
	var_207_string = "cslot0"; // 0x3a5 PushS
	var_208_int = 1; // 0x3a6 PushI
	var_209_int = var_202_int + var_208_int; // 0x3a7 Add
	var_201_string = var_207_string + var_209_int; // 0x3a8 Add2
	return 0; // 0x3a9 Return
	
Label_938:
	var_210_string = "cslot"; // 0x3aa PushS
	var_211_int = 1; // 0x3ab PushI
	var_212_int = var_202_int + var_211_int; // 0x3ac Add
	var_201_string = var_210_string + var_212_int; // 0x3ad Add2
	return 0; // 0x3ae Return
}


func_160(var_2_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0xa0 PushV
	var_11_int = 0; // 0xa1 PushV
	func_377(var_11_int); // 0xa2 NEW_2
	var_8_int = var_11_int; // 0xa3 Mov
	var_33_int = 4; // 0xa5 PushI
	var_34_bool = var_8_int <= var_33_int; // 0xa6 LE
	if(var_34_bool == 0) goto Label_174; // 0xa7 JumpB
	var_35_int = 16384; // 0xa8 PushI
	var_36_string = "scrollbar"; // 0xa9 PushS
	SendMessage(var_35_int, var_36_string); // 0xaa Func
	var_2_int = 0; // 0xac TMovI
	goto Label_199; // 0xad Jump
	
Label_199:
	return 6; // 0xc7 Return
	
Label_174:
	var_37_int = 4; // 0xae PushI
	var_38_int = var_2_int + var_37_int; // 0xaf Add
	var_39_bool = var_38_int > var_8_int; // 0xb0 GT
	if(var_39_bool == 0) goto Label_191; // 0xb1 JumpB
	var_40_int = 4; // 0xb2 PushI
	var_41_int = var_2_int + var_40_int; // 0xb3 Add
	var_42_int = var_41_int - var_8_int; // 0xb4 Sub
	var_2_int = var_2_int - var_42_int; // 0xb5 Sub2
	var_43_int = 100; // 0xb6 PushI
	var_44_float = var_2_int * var_43_int; // 0xb7 Mult
	var_45_int = 4; // 0xb8 PushI
	var_46_int = var_8_int - var_45_int; // 0xb9 Sub
	var_9_int = var_44_float / var_44_float; // 0xba Div2
	var_47_string = "scrollbar"; // 0xbb PushS
	SendMessage(var_9_int, var_47_string); // 0xbc Func
	goto Label_199; // 0xbe Jump
	
Label_191:
	var_48_int = 100; // 0xbf PushI
	var_49_float = var_2_int * var_48_int; // 0xc0 Mult
	var_50_int = 4; // 0xc1 PushI
	var_51_int = var_8_int - var_50_int; // 0xc2 Sub
	var_10_int = var_49_float / var_49_float; // 0xc3 Div2
	var_52_string = "scrollbar"; // 0xc4 PushS
	SendMessage(var_10_int, var_52_string); // 0xc5 Func
}


func_615(var_169_int)
{
	var_170_object = Obj(); var_171_object = Obj(); // 0x267 PushV
	var_172_object = Obj(); // 0x268 PushV
	func_12(var_172_object); // 0x269 NEW_2
	var_171_object = var_172_object; // 0x26a Mov
	var_173_string = "money"; // 0x26c PushS
	SetProperty(var_173_string, var_169_int); // 0x26d ObjFunc
	return 2; // 0x26f Return
}


func_104()
{
	func_200(var_3_float); // 0x69 NEW_2
	return 0; // 0x6b Return
}


func_108()
{
	func_160(var_53_int); // 0x6d NEW_2
	func_200(var_53_int); // 0x70 NEW_2
	return 0; // 0x72 Return
}


func_632(var_58_int)
{
	var_59_int = 0; // 0x279 PushI
	var_60_bool = var_58_int != var_59_int; // 0x27a Neq
	if(var_60_bool == 0) goto Label_641; // 0x27b JumpB
	var_61_int = 0; // 0x27c PushI
	var_62_string = "button_weapon"; // 0x27d PushS
	SendMessage(var_61_int, var_62_string); // 0x27e Func
	goto Label_645; // 0x280 Jump
	
Label_645:
	var_63_int = 1; // 0x285 PushI
	var_64_bool = var_58_int != var_63_int; // 0x286 Neq
	if(var_64_bool == 0) goto Label_653; // 0x287 JumpB
	var_65_int = 0; // 0x288 PushI
	var_66_string = "button_clothes"; // 0x289 PushS
	SendMessage(var_65_int, var_66_string); // 0x28a Func
	goto Label_657; // 0x28c Jump
	
Label_657:
	var_67_int = 2; // 0x291 PushI
	var_68_bool = var_58_int != var_67_int; // 0x292 Neq
	if(var_68_bool == 0) goto Label_665; // 0x293 JumpB
	var_69_int = 0; // 0x294 PushI
	var_70_string = "button_medcine"; // 0x295 PushS
	SendMessage(var_69_int, var_70_string); // 0x296 Func
	goto Label_669; // 0x298 Jump
	
Label_669:
	var_71_int = 3; // 0x29d PushI
	var_72_bool = var_58_int != var_71_int; // 0x29e Neq
	if(var_72_bool == 0) goto Label_677; // 0x29f JumpB
	var_73_int = 0; // 0x2a0 PushI
	var_74_string = "button_food"; // 0x2a1 PushS
	SendMessage(var_73_int, var_74_string); // 0x2a2 Func
	goto Label_681; // 0x2a4 Jump
	
Label_681:
	var_75_int = 4; // 0x2a9 PushI
	var_76_bool = var_58_int != var_75_int; // 0x2aa Neq
	if(var_76_bool == 0) goto Label_689; // 0x2ab JumpB
	var_77_int = 0; // 0x2ac PushI
	var_78_string = "button_other"; // 0x2ad PushS
	SendMessage(var_77_int, var_78_string); // 0x2ae Func
	goto Label_693; // 0x2b0 Jump
	
Label_693:
	return 0; // 0x2b5 Return
	
Label_689:
	var_79_int = 1; // 0x2b1 PushI
	var_80_string = "button_other"; // 0x2b2 PushS
	SendMessage(var_79_int, var_80_string); // 0x2b3 Func
	
Label_677:
	var_81_int = 1; // 0x2a5 PushI
	var_82_string = "button_food"; // 0x2a6 PushS
	SendMessage(var_81_int, var_82_string); // 0x2a7 Func
	
Label_665:
	var_83_int = 1; // 0x299 PushI
	var_84_string = "button_medcine"; // 0x29a PushS
	SendMessage(var_83_int, var_84_string); // 0x29b Func
	
Label_653:
	var_85_int = 1; // 0x28d PushI
	var_86_string = "button_clothes"; // 0x28e PushS
	SendMessage(var_85_int, var_86_string); // 0x28f Func
	
Label_641:
	var_87_int = 1; // 0x281 PushI
	var_88_string = "button_weapon"; // 0x282 PushS
	SendMessage(var_87_int, var_88_string); // 0x283 Func
}


func_943(var_233_string, var_234_int)
{
	var_235_int = 1; // 0x3b0 PushI
	var_236_int = var_234_int + var_235_int; // 0x3b1 Add
	var_237_int = 10; // 0x3b2 PushI
	var_238_bool = var_236_int < var_237_int; // 0x3b3 LT
	if(var_238_bool == 0) goto Label_954; // 0x3b4 JumpB
	var_239_string = "ccslot0"; // 0x3b5 PushS
	var_240_int = 1; // 0x3b6 PushI
	var_241_int = var_234_int + var_240_int; // 0x3b7 Add
	var_233_string = var_239_string + var_241_int; // 0x3b8 Add2
	return 0; // 0x3b9 Return
	
Label_954:
	var_242_string = "ccslot"; // 0x3ba PushS
	var_243_int = 1; // 0x3bb PushI
	var_244_int = var_234_int + var_243_int; // 0x3bc Add
	var_233_string = var_242_string + var_244_int; // 0x3bd Add2
	return 0; // 0x3be Return
}


func_625()
{
	var_154_int = 0; // 0x271 PushV
	func_604(var_154_int); // 0x272 NEW_2
	var_161_string = "money"; // 0x274 PushS
	SendMessage(var_154_int, var_161_string); // 0x275 Func
	return 0; // 0x277 Return
}


func_115(var_81_int)
{
	var_116_bool = 0; var_117_bool = 0; // 0x73 PushV
	var_118_string = "take_organ"; // 0x74 PushS
	PlaySound(var_118_string); // 0x75 Func
	var_119_int = 0; // 0x77 PushV
	var_120_int = 0; var_121_bool = 0; var_122_int = 0; // 0x78 PushV
	var_121_bool = var_117_bool; // 0x79 Mov
	var_122_int = var_81_int; // 0x7a Mov
	func_694(var_120_int, var_121_bool, var_122_int); // 0x7b NEW_2
	var_119_int = var_120_int; // 0x7c Mov
	func_590(var_117_bool, var_119_int); // 0x7e NEW_2
	var_179_bool = var_117_bool == 0; // 0x80 Not
	if(var_179_bool == 0) goto Label_130; // 0x81 JumpB
	
Label_130:
	return 2; // 0x82 Return
}


func_694(var_120_int, var_121_bool, var_122_int)
{
	var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj(); var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_int = 0; var_132_bool = 0; var_133_bool = 0; var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_bool = 0; // 0x2b6 PushV
	var_121_bool = 0; // 0x2b7 MovB
	var_145_int = -1; // 0x2b8 PushI
	var_146_bool = var_122_int == var_145_int; // 0x2b9 Eq
	if(var_146_bool == 0) goto Label_701; // 0x2ba JumpB
	var_120_int = -1; // 0x2bb MovI
	return 22; // 0x2bc Return
	
Label_701:
	var_147_object = Obj(); // 0x2bd PushV
	func_12(var_147_object); // 0x2be NEW_2
	var_135_object = var_147_object; // 0x2bf Mov
	GetContainer(var_134_object); // 0x2c1 Func
	GetItemCount(var_137_int); // 0x2c3 ObjFunc
	var_150_bool = var_137_int <= var_122_int; // 0x2c5 LE
	if(var_150_bool == 0) goto Label_713; // 0x2c6 JumpB
	var_120_int = -1; // 0x2c7 MovI
	return 22; // 0x2c8 Return
	
Label_713:
	GetItemAmount(var_138_int, var_122_int); // 0x2c9 ObjFunc
	var_151_int = 0; // 0x2cb PushI
	var_152_bool = var_138_int == var_151_int; // 0x2cc Eq
	if(var_152_bool == 0) goto Label_720; // 0x2cd JumpB
	var_120_int = -1; // 0x2ce MovI
	return 22; // 0x2cf Return
	
Label_720:
	GetItem(var_136_object, var_122_int); // 0x2d0 ObjFunc
	GetItemID(var_139_int); // 0x2d2 ObjFunc
	var_140_bool = 0; // 0x2d4 MovB
	var_153_string = "Organ"; // 0x2d5 PushS
	HasProperty(var_140_bool, var_153_string); // 0x2d6 ObjFunc
	var_154_bool = var_140_bool; // 0x2d8 Push
	if(var_154_bool == 0) goto Label_733; // 0x2d9 JumpB
	var_155_string = "Organ"; // 0x2da PushS
	RemoveProperty(var_155_string); // 0x2db ObjFunc
	
Label_733:
	var_156_string = "Category"; // 0x2dd PushS
	GetInvItemProperty(var_141_int, var_139_int, var_156_string); // 0x2de Func
	var_157_int = 0; // 0x2e0 PushV
	func_959(var_157_int); // 0x2e1 NEW_2
	var_161_bool = var_139_int == var_157_int; // 0x2e3 Eq
	if(var_161_bool == 0) goto Label_758; // 0x2e4 JumpB
	var_162_int = 0; // 0x2e5 PushV
	func_604(var_162_int); // 0x2e6 NEW_2
	var_142_int = var_162_int; // 0x2e7 Mov
	var_142_int = var_142_int + var_138_int; // 0x2e9 Add2
	var_169_int = 0; // 0x2ea PushV
	var_169_int = var_142_int; // 0x2eb Mov
	func_615(var_169_int); // 0x2ec NEW_2
	RemoveItem(var_122_int, var_138_int); // 0x2ee ObjFunc
	func_625(); // 0x2f1 NEW_2
	var_121_bool = 1; // 0x2f3 MovB
	var_120_int = -1; // 0x2f4 MovI
	return 22; // 0x2f5 Return
	
Label_758:
	var_176_int = 1; // 0x2f6 PushI
	AddItem(var_144_bool, var_136_object, var_141_int, var_176_int); // 0x2f7 ObjFunc
	var_177_bool = var_144_bool == 0; // 0x2f9 Not
	if(var_177_bool == 0) goto Label_765; // 0x2fa JumpB
	var_120_int = var_141_int; // 0x2fb Mov
	return 22; // 0x2fc Return
	
Label_765:
	var_121_bool = 1; // 0x2fd MovB
	var_178_int = 1; // 0x2fe PushI
	RemoveItem(var_122_int, var_178_int); // 0x2ff ObjFunc
	var_120_int = var_141_int; // 0x301 Mov
	return 22; // 0x302 Return
}


func_824(var_89_int)
{
	var_90_object = Obj(); var_91_int = 0; var_92_int = 0; var_93_object = Obj(); var_94_int = 0; var_95_bool = 0; var_96_bool = 0; var_97_object = Obj(); var_98_int = 0; var_99_int = 0; var_100_object = Obj(); var_101_int = 0; var_102_bool = 0; var_103_bool = 0; // 0x338 PushV
	var_104_object = Obj(); // 0x339 PushV
	func_12(var_104_object); // 0x33a NEW_2
	var_97_object = var_104_object; // 0x33b Mov
	GetItemCount(var_98_int, var_89_int); // 0x33d ObjFunc
	var_99_int = 0; // 0x33f MovI
	
Label_832:
	var_107_int = 12; // 0x340 PushI
	var_108_bool = var_99_int < var_107_int; // 0x341 LT
	if(var_108_bool == 0) goto Label_909; // 0x342 JumpB
	var_109_bool = var_99_int < var_98_int; // 0x343 LT
	if(var_109_bool == 0) goto Label_899; // 0x344 JumpB
	GetItem(var_100_object, var_99_int, var_89_int); // 0x345 ObjFunc
	GetItemAmount(var_101_int, var_99_int, var_89_int); // 0x347 ObjFunc
	var_110_bool = 0; var_111_int = 0; var_112_int = 0; // 0x349 PushV
	var_111_int = var_99_int; // 0x34a Mov
	var_112_int = var_89_int; // 0x34b Mov
	func_446(var_110_bool, var_111_int, var_112_int); // 0x34c NEW_2
	var_102_bool = var_110_bool; // 0x34d Mov
	var_119_bool = 0; var_120_object = Obj(); // 0x34f PushV
	var_120_object = var_100_object; // 0x350 Mov
	func_443(var_120_object); // 0x351 NEW_2
	var_103_bool = var_119_bool; // 0x352 Mov
	var_121_bool = var_102_bool; // 0x354 Push
	if(var_121_bool == 0) goto Label_872; // 0x355 JumpB
	var_122_bool = var_103_bool; // 0x356 Push
	if(var_122_bool == 0) goto Label_864; // 0x357 JumpB
	var_123_int = 0; // 0x358 PushI
	var_124_string = ""; var_125_int = 0; // 0x359 PushV
	var_125_int = var_99_int; // 0x35a Mov
	func_911(var_124_string, var_125_int); // 0x35b NEW_2
	SendMessage(var_123_int, var_124_string, var_100_object); // 0x35d Func
	goto Label_871; // 0x35f Jump
	
Label_871:
	goto Label_889; // 0x367 Jump
	
Label_889:
	var_136_int = 65536; // 0x379 PushI
	var_137_int = var_101_int | var_136_int; // 0x37a Or
	var_138_string = ""; var_139_int = 0; // 0x37b PushV
	var_139_int = var_99_int; // 0x37c Mov
	func_911(var_138_string, var_139_int); // 0x37d NEW_2
	SendMessage(var_137_int, var_138_string); // 0x37f Func
	var_100_object = 0; // 0x381 SetNull
	goto Label_906; // 0x382 Jump
	
Label_906:
	var_140_int = 1; // 0x38a PushI
	var_99_int = var_99_int + var_140_int; // 0x38b Add2
	goto Label_832; // 0x38c Jump
	
Label_864:
	var_141_int = 16384; // 0x360 PushI
	var_142_string = ""; var_143_int = 0; // 0x361 PushV
	var_143_int = var_99_int; // 0x362 Mov
	func_911(var_142_string, var_143_int); // 0x363 NEW_2
	SendMessage(var_141_int, var_142_string, var_100_object); // 0x365 Func
	
Label_872:
	var_144_bool = var_103_bool; // 0x368 Push
	if(var_144_bool == 0) goto Label_882; // 0x369 JumpB
	var_145_int = 131072; // 0x36a PushI
	var_146_string = ""; var_147_int = 0; // 0x36b PushV
	var_147_int = var_99_int; // 0x36c Mov
	func_911(var_146_string, var_147_int); // 0x36d NEW_2
	SendMessage(var_145_int, var_146_string, var_100_object); // 0x36f Func
	goto Label_889; // 0x371 Jump
	
Label_882:
	var_148_int = 0; // 0x372 PushI
	var_149_string = ""; var_150_int = 0; // 0x373 PushV
	var_150_int = var_99_int; // 0x374 Mov
	func_911(var_149_string, var_150_int); // 0x375 NEW_2
	SendMessage(var_148_int, var_149_string, var_100_object); // 0x377 Func
	
Label_899:
	var_151_int = 32768; // 0x383 PushI
	var_152_string = ""; var_153_int = 0; // 0x384 PushV
	var_153_int = var_99_int; // 0x385 Mov
	func_911(var_152_string, var_153_int); // 0x386 NEW_2
	SendMessage(var_151_int, var_152_string); // 0x388 Func
	
Label_909:
	return 14; // 0x38d Return
}


func_377(var_11_int)
{
	var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x179 PushV
	GetContainer(var_20_object); // 0x17a Func
	GetItemCount(var_21_int); // 0x17c ObjFunc
	var_22_int = 0; // 0x17e MovI
	var_23_int = 0; // 0x17f MovI
	
Label_384:
	var_28_bool = var_23_int < var_21_int; // 0x180 LT
	if(var_28_bool == 0) goto Label_404; // 0x181 JumpB
	GetItem(var_24_object, var_23_int); // 0x182 ObjFunc
	GetItemID(var_25_int); // 0x184 ObjFunc
	GetItemAmount(var_26_int, var_23_int); // 0x186 ObjFunc
	var_27_bool = 0; // 0x188 MovB
	var_29_string = "Organ"; // 0x189 PushS
	HasProperty(var_27_bool, var_29_string); // 0x18a ObjFunc
	var_30_bool = var_27_bool == 0; // 0x18c Not
	if(var_30_bool == 0) goto Label_400; // 0x18d JumpB
	var_31_int = 1; // 0x18e PushI
	var_22_int = var_22_int + var_31_int; // 0x18f Add2
	
Label_400:
	var_24_object = 0; // 0x190 SetNull
	var_32_int = 1; // 0x191 PushI
	var_23_int = var_23_int + var_32_int; // 0x192 Add2
	goto Label_384; // 0x193 Jump
	
Label_404:
	var_11_int = var_22_int; // 0x194 Mov
	return 16; // 0x195 Return
}


func_443(var_119_bool)
{
	var_119_bool = 0; // 0x1bc MovB
	return 0; // 0x1bd Return
}


func_446(var_110_bool, var_111_int, var_112_int)
{
	var_113_bool = 0; var_114_bool = 0; // 0x1be PushV
	var_115_object = Obj(); // 0x1bf PushV
	func_12(var_115_object); // 0x1c0 NEW_2
	var_116_object = Obj(); // 0x1c2 PushV
	func_12(var_116_object); // 0x1c3 NEW_2
	var_117_object = Obj(); // 0x1c5 PushV
	func_12(var_117_object); // 0x1c6 NEW_2
	var_118_object = Obj(); // 0x1c8 PushV
	func_12(var_118_object); // 0x1c9 NEW_2
	IsItemSelected(var_114_bool, var_111_int, var_112_int); // 0x1cb ObjFunc
	var_110_bool = var_114_bool; // 0x1cd Mov
	return 2; // 0x1ce Return
}


func_959(var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0x3bf PushV
	var_160_string = "Money"; // 0x3c0 PushS
	GetInvItemByName(var_159_int, var_160_string); // 0x3c1 Func
	var_157_int = var_159_int; // 0x3c3 Mov
	return 2; // 0x3c4 Return
}


