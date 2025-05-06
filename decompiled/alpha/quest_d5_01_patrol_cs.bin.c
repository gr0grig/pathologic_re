task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int)
{
	var_8_int = 0; // 0x271 PushI
	var_9_bool = var_7_int != var_8_int; // 0x272 Neq
	if(var_9_bool == 0) goto Label_629; // 0x273 JumpB
	return 0; // 0x274 Return
	
Label_629:
	var_10_bool = 0; var_11_object = Obj(); // 0x275 PushV
	var_11_object = var_1_int; // 0x276 MovT
	func_662(var_10_bool, var_11_object); // 0x277 Call
	var_46_bool = var_10_bool == 0; // 0x279 Not
	if(var_46_bool == 0) goto Label_636; // 0x27a JumpB
	var_0_object = 1; // 0x27b TMovB
	
Label_636:
	var_47_int = 0; // 0x27c PushI
	KillTimer(var_47_int); // 0x27d Func
	Stop(); // 0x27f Func
	return 0; // 0x281 Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	RequestClearPath(var_7_object); // 0x283 Func
	return 0; // 0x285 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	func_646(var_7_object); // 0x28f Call
	var_9_object = Obj(); // 0x291 PushV
	var_9_object = var_7_object; // 0x292 Mov
	func_1114(); // 0x293 Call
	return 0; // 0x295 Return
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2b3 PushV
	IsOverrideActive(var_9_bool); // 0x2b4 Func
	var_10_bool = var_9_bool == 0; // 0x2b6 Not
	if(var_10_bool == 0) goto Label_698; // 0x2b7 JumpB
	WorkWithCorpse(var_7_object); // 0x2b8 Func
	
Label_698:
	return 2; // 0x2ba Return
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	var_7_object = Obj(); // 0x2bb PushV
	func_1049(var_7_object); // 0x2bc Call
	RemoveActor(var_7_object); // 0x2be Func
	Hold(); // 0x2c0 Func
	return 0; // 0x2c2 Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	return 0; // 0x331 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string)
{
	return 0; // 0x333 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	return 0; // 0x335 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; // 0x446 PushV
	var_11_object = var_7_object; // 0x447 Mov
	var_12_int = var_8_int; // 0x448 Mov
	var_13_float = var_9_float; // 0x449 Mov
	func_971(var_12_int, var_13_float); // 0x44a Call
	return 0; // 0x44c Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0; // 0x44d PushV
	var_11_string = "health"; // 0x44e PushS
	var_12_bool = var_8_string == var_11_string; // 0x44f Eq
	if(var_12_bool == 0) goto Label_1113; // 0x450 JumpB
	var_13_string = "health"; // 0x451 PushS
	GetProperty(var_13_string, var_10_float); // 0x452 Func
	var_14_int = 0; // 0x454 PushI
	var_15_bool = var_10_float <= var_14_int; // 0x455 LE
	if(var_15_bool == 0) goto Label_1113; // 0x456 JumpB
	SignalDeath(var_7_object); // 0x457 Func
	
Label_1113:
	return 2; // 0x459 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	var_8_object = Obj(); // 0x45b PushV
	var_8_object = var_7_object; // 0x45c Mov
	func_1085(var_8_object); // 0x45d Call
	return 0; // 0x45f Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	
Label_0:
	TaskCall(1); // 0x1 TaskCall
	func_10(); // 0x2 Call
	TaskReturn(); // 0x3 TaskReturn
	var_368_float = 0.5; // 0x5 PushF
	Sleep(var_368_float); // 0x6 Func
	goto Label_0; // 0x8 Jump
}


func_514(var_322_int)
{
	var_322_int = 0; // 0x202 MovI
	return 0; // 0x203 Return
}


func_516()
{
	return 0; // 0x205 Return
}


func_646(var_0_object)
{
	var_0_object = 1; // 0x286 TMovB
	var_8_int = 0; // 0x287 PushI
	KillTimer(var_8_int); // 0x288 Func
	Stop(); // 0x28a Func
	return 0; // 0x28c Return
}


func_518(var_251_int)
{
	var_251_int = 1; // 0x206 MovI
	return 0; // 0x207 Return
}


func_520(var_246_float)
{
	var_246_float = 0.5; // 0x208 MovF
	return 0; // 0x209 Return
}


func_522(var_0_object, var_1_int, var_99_bool, var_100_object, var_101_float, var_102_float, var_103_bool, var_104_bool)
{
	var_107_bool = 0; var_108_bool = 0; var_109_object = Obj(); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_float = 0; var_114_object = Obj(); var_115_bool = 0; var_116_bool = 0; var_117_object = Obj(); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_object = Obj(); // 0x20a PushV
	var_0_object = 0; // 0x20b TMovB
	var_1_int = var_100_object; // 0x20c TMov
	var_116_bool = var_104_bool; // 0x20d Mov
	
Label_526:
	var_123_bool = 0; var_124_object = Obj(); // 0x20e PushV
	var_124_object = var_100_object; // 0x20f Mov
	func_662(var_123_bool, var_124_object); // 0x210 Call
	var_127_bool = var_123_bool == 0; // 0x212 Not
	if(var_127_bool == 0) goto Label_534; // 0x213 JumpB
	var_99_bool = 0; // 0x214 MovB
	return 16; // 0x215 Return
	
Label_534:
	GetPosition(var_118_cvector); // 0x216 ObjFunc
	GetPosition(var_119_cvector); // 0x218 Func
	var_120_cvector = var_118_cvector - var_119_cvector; // 0x21a Sub2
	var_121_float = var_120_cvector | var_120_cvector; // 0x21b Or2
	var_128_bool = 0; // 0x21c PushV
	var_128_bool = 0; // 0x21d MovB
	var_129_int = 0; // 0x21e PushI
	var_130_bool = var_102_float > var_129_int; // 0x21f GT
	if(var_130_bool == 0) goto Label_549; // 0x220 JumpB
	var_131_float = var_102_float * var_102_float; // 0x221 Mult
	var_132_bool = var_121_float > var_131_float; // 0x222 GT
	if(var_132_bool == 0) goto Label_549; // 0x223 JumpB
	var_128_bool = 1; // 0x224 MovB
	
Label_549:
	if(var_128_bool == 0) goto Label_554; // 0x225 JumpB
	Stop(); // 0x226 Func
	var_99_bool = 0; // 0x228 MovB
	return 16; // 0x229 Return
	
Label_554:
	var_133_float = var_101_float * var_101_float; // 0x22a Mult
	var_134_bool = var_121_float > var_133_float; // 0x22b GT
	if(var_134_bool == 0) goto Label_616; // 0x22c JumpB
	GetPFPosition(var_118_cvector); // 0x22d ObjFunc
	FindPathTo(var_122_object, var_118_cvector); // 0x22f Func
	var_135_bool = var_122_object != 0; // 0x231 NullNeq
	if(var_135_bool == 0) goto Label_565; // 0x232 JumpB
	var_117_object = var_122_object; // 0x233 Mov
	var_122_object = 0; // 0x234 SetNull
	
Label_565:
	var_136_bool = var_117_object != 0; // 0x235 NullNeq
	if(var_136_bool == 0) goto Label_598; // 0x236 JumpB
	var_137_bool = var_116_bool; // 0x237 Push
	if(var_137_bool == 0) goto Label_575; // 0x238 JumpB
	var_116_bool = 0; // 0x239 MovB
	RotatePath(var_117_object, var_115_bool); // 0x23a Func
	var_138_bool = var_115_bool == 0; // 0x23c Not
	if(var_138_bool == 0) goto Label_575; // 0x23d JumpB
	goto Label_622; // 0x23e Jump
	
Label_622:
	var_99_bool = !var_0_object; // 0x26e Not2
	return 16; // 0x26f Return
	
Label_575:
	var_139_int = 0; // 0x23f PushI
	var_140_float = 0.3; // 0x240 PushF
	SetTimer(var_139_int, var_140_float); // 0x241 Func
	var_141_string = ""; // 0x243 PushV
	func_669(var_141_string); // 0x244 Call
	var_142_string = ""; // 0x246 PushV
	func_671(var_142_string); // 0x247 Call
	FollowPath(var_117_object, var_103_bool, var_115_bool, var_141_string, var_142_string); // 0x249 Func
	var_143_bool = var_115_bool == 0; // 0x24b Not
	if(var_143_bool == 0) goto Label_596; // 0x24c JumpB
	var_144_object = var_0_object; // 0x24d PushT
	if(var_144_object == 0) goto Label_594; // 0x24e JumpB
	var_117_object = 0; // 0x24f SetNull
	goto Label_622; // 0x250 Jump
	
Label_594:
	goto Label_621; // 0x252 Jump
	
Label_621:
	goto Label_526; // 0x26d Jump
	
Label_596:
	var_117_object = 0; // 0x254 SetNull
	goto Label_614; // 0x255 Jump
	
Label_614:
	var_122_object = 0; // 0x266 SetNull
	goto Label_620; // 0x267 Jump
	
Label_620:
	var_117_object = 0; // 0x26c SetNull
	
Label_598:
	var_145_int = 0; // 0x256 PushI
	KillTimer(var_145_int); // 0x257 Func
	var_146_float = 0.5; // 0x259 PushF
	Sleep(var_146_float, var_115_bool); // 0x25a Func
	var_147_bool = var_115_bool == 0; // 0x25c Not
	if(var_147_bool == 0) goto Label_610; // 0x25d JumpB
	var_148_object = var_0_object; // 0x25e PushT
	if(var_148_object == 0) goto Label_610; // 0x25f JumpB
	var_117_object = 0; // 0x260 SetNull
	goto Label_622; // 0x261 Jump
	
Label_610:
	var_149_int = 0; // 0x262 PushI
	var_150_float = 0.3; // 0x263 PushF
	SetTimer(var_149_int, var_150_float); // 0x264 Func
	
Label_616:
	var_151_int = 0; // 0x268 PushI
	KillTimer(var_151_int); // 0x269 Func
	goto Label_622; // 0x26b Jump
}


func_10()
{
	var_12_object = Obj(); var_13_object = Obj(); // 0xa PushV
	var_14_string = "player"; // 0xb PushS
	FindActor(var_13_object, var_14_string); // 0xc Func
	var_15_bool = var_13_object == 0; // 0xe Not
	if(var_15_bool == 0) goto Label_17; // 0xf JumpB
	return 2; // 0x10 Return
	
Label_17:
	var_16_object = Obj(); var_17_bool = 0; var_18_float = 0; // 0x11 PushV
	var_16_object = var_13_object; // 0x12 Mov
	var_17_bool = 1; // 0x13 MovB
	var_18_float = 180.0; // 0x14 MovF
	func_31(var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_object, var_16_object, var_17_bool, var_18_float); // 0x15 Call
	return 2; // 0x17 Return
}


func_906(var_73_bool)
{
	var_75_bool = 0; var_76_bool = 0; // 0x38a PushV
	IsDead(var_76_bool); // 0x38b ObjFunc
	var_73_bool = var_76_bool; // 0x38d Mov
	return 2; // 0x38e Return
}


func_1038()
{
	var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); // 0x40e PushV
	GetPosition(var_165_cvector); // 0x40f ObjFunc
	GetPosition(var_166_cvector); // 0x411 Func
	var_167_cvector = var_165_cvector - var_166_cvector; // 0x413 Sub2
	var_168_float = GetByIndex(var_167_cvector, 0); // 0x414 PushE
	var_169_float = GetByIndex(var_167_cvector, 2); // 0x415 PushE
	RotateAsync(var_168_float, var_169_float); // 0x416 Func
	return 6; // 0x418 Return
}


func_911(var_62_bool, var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x38f PushV
	var_68_bool = var_63_object == 0; // 0x390 NullEq
	if(var_68_bool == 0) goto Label_916; // 0x391 JumpB
	var_62_bool = 0; // 0x392 MovB
	return 4; // 0x393 Return
	
Label_916:
	var_69_bool = 0; // 0x394 PushV
	var_69_bool = 0; // 0x395 MovB
	var_70_string = "IsDead"; // 0x396 PushS
	var_71_int = 1; // 0x397 PushI
	var_72_bool = IsFuncExist(var_63_object, var_70_string, var_71_int); // 0x398 FuncExist
	if(var_72_bool == 0) goto Label_928; // 0x399 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x39a PushV
	var_74_object = var_63_object; // 0x39b Mov
	func_906(var_74_object); // 0x39c Call
	if(var_73_bool == 0) goto Label_928; // 0x39e JumpB
	var_69_bool = 1; // 0x39f MovB
	
Label_928:
	if(var_69_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_62_bool = 0; // 0x3a1 MovB
	return 4; // 0x3a2 Return
	
Label_931:
	GetScene(var_66_object); // 0x3a3 Func
	var_77_bool = var_66_object == 0; // 0x3a5 NullEq
	if(var_77_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_62_bool = 0; // 0x3a7 MovB
	return 4; // 0x3a8 Return
	
Label_937:
	GetScene(var_67_object); // 0x3a9 ObjFunc
	var_78_bool = var_66_object != var_67_object; // 0x3ab Neq
	if(var_78_bool == 0) goto Label_943; // 0x3ac JumpB
	var_62_bool = 0; // 0x3ad MovB
	return 4; // 0x3ae Return
	
Label_943:
	var_62_bool = 1; // 0x3af MovB
	return 4; // 0x3b0 Return
}


func_275(var_0_object, var_226_bool, var_227_float)
{
	var_228_int = 0; var_229_bool = 0; var_230_int = 0; var_231_bool = 0; // 0x113 PushV
	irand(var_230_int, var_231_bool); // 0x114 Func
	var_232_int = 1; // 0x116 PushI
	var_230_int = var_230_int + var_232_int; // 0x117 Add2
	Face(var_0_object); // 0x118 Func
	var_233_bool = 1; // 0x11a PushB
	SetAttackState(var_233_bool); // 0x11b Func
	var_234_string = "all"; // 0x11d PushS
	var_235_string = "attack_begin"; // 0x11e PushS
	var_236_int = var_235_string + var_230_int; // 0x11f Add
	PlayAnimation(var_234_string, var_236_int); // 0x120 Func
	WaitForAnimEnd(); // 0x122 Func
	func_482(var_230_int, var_231_bool); // 0x125 Call
	var_252_bool = 0; var_253_object = Obj(); // 0x127 PushV
	var_253_object = var_0_object; // 0x128 MovT
	func_947(var_252_bool, var_253_object); // 0x129 Call
	var_254_bool = var_252_bool == 0; // 0x12b Not
	if(var_254_bool == 0) goto Label_305; // 0x12c JumpB
	StopAsync(); // 0x12d Func
	var_226_bool = 0; // 0x12f MovB
	return 4; // 0x130 Return
	
Label_305:
	var_255_float = 0; var_256_int = 0; // 0x131 PushV
	var_255_float = var_227_float; // 0x132 Mov
	var_256_int = var_230_int; // 0x133 Mov
	func_236(var_231_bool, var_255_float, var_256_int); // 0x134 Call
	var_325_string = "all"; // 0x136 PushS
	var_326_string = "attack_middle"; // 0x137 PushS
	var_327_int = var_326_string + var_230_int; // 0x138 Add
	HasAnimation(var_231_bool, var_325_string, var_327_int); // 0x139 Func
	var_328_bool = var_231_bool; // 0x13b Push
	if(var_328_bool == 0) goto Label_339; // 0x13c JumpB
	var_329_string = "all"; // 0x13d PushS
	var_330_string = "attack_middle"; // 0x13e PushS
	var_331_int = var_330_string + var_230_int; // 0x13f Add
	PlayAnimation(var_329_string, var_331_int); // 0x140 Func
	WaitForAnimEnd(); // 0x142 Func
	var_332_bool = 0; var_333_object = Obj(); // 0x144 PushV
	var_333_object = var_0_object; // 0x145 MovT
	func_947(var_332_bool, var_333_object); // 0x146 Call
	var_334_bool = var_332_bool == 0; // 0x148 Not
	if(var_334_bool == 0) goto Label_334; // 0x149 JumpB
	StopAsync(); // 0x14a Func
	var_226_bool = 0; // 0x14c MovB
	return 4; // 0x14d Return
	
Label_334:
	var_335_float = 0; var_336_int = 0; // 0x14e PushV
	var_335_float = var_227_float; // 0x14f Mov
	var_336_int = var_230_int; // 0x150 Mov
	func_236(var_231_bool, var_335_float, var_336_int); // 0x151 Call
	
Label_339:
	var_337_bool = 0; // 0x153 PushB
	SetAttackState(var_337_bool); // 0x154 Func
	var_338_string = "all"; // 0x156 PushS
	var_339_string = "attack_end"; // 0x157 PushS
	var_340_int = var_339_string + var_230_int; // 0x158 Add
	PlayAnimation(var_338_string, var_340_int); // 0x159 Func
	var_341_bool = 0; var_342_float = 0; // 0x15b PushV
	var_342_float = 0.75; // 0x15c MovF
	func_355(var_341_bool, var_342_float); // 0x15d Call
	StopAsync(); // 0x15f Func
	var_226_bool = 1; // 0x161 MovB
	return 4; // 0x162 Return
}


func_662(var_123_bool, var_124_object)
{
	var_125_bool = 0; var_126_object = Obj(); // 0x297 PushV
	var_126_object = var_124_object; // 0x298 Mov
	func_947(var_125_bool, var_126_object); // 0x299 Call
	var_123_bool = var_125_bool; // 0x29a Mov
	return 0; // 0x29c Return
}


func_25(var_266_float)
{
	var_266_float = 0.3; // 0x1a MovF
	return 0; // 0x1b Return
}


func_794(var_38_string)
{
	RemoveRTEnvelope(); // 0x31b Func
	SetDeathState(); // 0x31d Func
	Stop(); // 0x31f Func
	StopAsync(); // 0x321 Func
	StopSecondaryAnimation(); // 0x323 Func
	var_39_string = "all"; // 0x325 PushS
	PlayAnimation(var_39_string, var_38_string); // 0x326 Func
	WaitForAnimEnd(); // 0x328 Func
	var_40_string = "all"; // 0x32a PushS
	LockAnimationEnd(var_40_string, var_38_string); // 0x32b Func
	RemoveEnvelope(); // 0x32d Func
	return 0; // 0x32f Return
}


func_1049(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x419 PushV
	self(var_9_object); // 0x41a Func
	var_7_object = var_9_object; // 0x41c Mov
	return 2; // 0x41d Return
}


func_28(var_273_int)
{
	var_273_int = 0; // 0x1d MovI
	return 0; // 0x1e Return
}


func_669(var_141_string)
{
	var_141_string = "walk"; // 0x29d MovS
	return 0; // 0x29e Return
}


func_31(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_16_object, var_17_bool, var_18_float, var_105_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; // 0x1f PushV
	var_1_int = 0; // 0x20 TMovI
	
Label_33:
	var_39_string = "all"; // 0x21 PushS
	var_40_string = "attack_begin"; // 0x22 PushS
	var_41_int = 1; // 0x23 PushI
	var_42_int = var_1_int + var_41_int; // 0x24 Add
	var_43_int = var_40_string + var_42_int; // 0x25 Add
	HasAnimation(var_29_bool, var_39_string, var_43_int); // 0x26 Func
	var_44_bool = var_29_bool == 0; // 0x28 Not
	if(var_44_bool == 0) goto Label_43; // 0x29 JumpB
	goto Label_46; // 0x2a Jump
	
Label_46:
	var_2_int = 0; // 0x2e TMovI
	
Label_47:
	var_45_string = "attack"; // 0x2f PushS
	var_46_int = 1; // 0x30 PushI
	var_47_int = var_2_int + var_46_int; // 0x31 Add
	var_48_int = var_45_string + var_47_int; // 0x32 Add
	IsExisting3DSound(var_30_bool, var_48_int); // 0x33 Func
	var_49_bool = var_30_bool == 0; // 0x35 Not
	if(var_49_bool == 0) goto Label_56; // 0x36 JumpB
	goto Label_59; // 0x37 Jump
	
Label_59:
	var_4_int = 0; // 0x3b TMovI
	var_50_string = "@GetAttackDistance"; // 0x3c PushS
	var_51_int = 1; // 0x3d PushI
	var_52_bool = IsFuncExist(var_16_object, var_50_string, var_51_int); // 0x3e FuncExist
	if(var_52_bool == 0) goto Label_69; // 0x3f JumpB
	GetAttackDistance(var_31_float); // 0x40 ObjFunc
	var_53_int = 50; // 0x42 PushI
	var_31_float = var_31_float + var_53_int; // 0x43 Add2
	goto Label_70; // 0x44 Jump
	
Label_70:
	var_54_int = 150; // 0x46 PushI
	var_55_bool = var_31_float >= var_54_int; // 0x47 GE
	if(var_55_bool == 0) goto Label_74; // 0x48 JumpB
	var_31_float = 150; // 0x49 MovI
	
Label_74:
	var_3_bool = 0; // 0x4a TMovB
	var_0_object = var_16_object; // 0x4b TMov
	IsPlayerActor(var_0_object, var_34_bool); // 0x4c Func
	var_56_bool = var_17_bool; // 0x4e Push
	if(var_56_bool == 0) goto Label_82; // 0x4f JumpB
	var_35_bool = 0; // 0x50 MovB
	goto Label_83; // 0x51 Jump
	
Label_83:
	var_57_bool = 0; // 0x53 PushV
	var_57_bool = 0; // 0x54 MovB
	var_58_bool = 0; var_59_object = Obj(); // 0x55 PushV
	var_59_object = var_0_object; // 0x56 MovT
	func_947(var_58_bool, var_59_object); // 0x57 Call
	if(var_58_bool == 0) goto Label_93; // 0x59 JumpB
	var_92_bool = var_3_bool == 0; // 0x5a Not
	if(var_92_bool == 0) goto Label_93; // 0x5b JumpB
	var_57_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_57_bool == 0) goto Label_219; // 0x5d JumpB
	GetPFPosition(var_32_cvector); // 0x5e TObjFunc
	GetPFPosition(var_33_cvector); // 0x60 Func
	var_36_cvector = var_32_cvector - var_33_cvector; // 0x62 Sub2
	var_37_float = var_36_cvector | var_36_cvector; // 0x63 Or2
	var_93_float = 400.0; // 0x64 PushF
	var_94_int = var_93_float + var_31_float; // 0x65 Add
	var_95_float = 400.0; // 0x66 PushF
	var_96_int = var_95_float + var_31_float; // 0x67 Add
	var_97_float = var_94_int * var_96_int; // 0x68 Mult
	var_98_bool = var_37_float >= var_97_float; // 0x69 GE
	if(var_98_bool == 0) goto Label_122; // 0x6a JumpB
	var_99_bool = 0; var_100_object = Obj(); var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_bool = 0; // 0x6b PushV
	var_100_object = var_0_object; // 0x6c MovT
	var_101_float = var_31_float; // 0x6d Mov
	var_102_float = 10000.0; // 0x6e MovF
	var_103_bool = 1; // 0x6f MovB
	var_104_bool = 0; // 0x70 MovB
	TaskCall(2); // 0x71 TaskCall
	func_522(var_105_bool, var_106_object, var_99_bool, var_100_object, var_101_float, var_102_float, var_103_bool, var_104_bool); // 0x72 Call
	TaskReturn(); // 0x73 TaskReturn
	var_152_bool = var_105_bool == 0; // 0x75 Not
	if(var_152_bool == 0) goto Label_120; // 0x76 JumpB
	goto Label_219; // 0x77 Jump
	
Label_219:
	WaitForAnimEnd(); // 0xdb Func
	var_153_bool = var_3_bool; // 0xdd PushT
	if(var_153_bool == 0) goto Label_224; // 0xde JumpB
	return 20; // 0xdf Return
	
Label_224:
	var_154_string = "all"; // 0xe0 PushS
	var_155_string = "attack_off"; // 0xe1 PushS
	PlayAnimation(var_154_string, var_155_string); // 0xe2 Func
	WaitForAnimEnd(); // 0xe4 Func
	var_156_bool = var_34_bool; // 0xe6 Push
	if(var_156_bool == 0) goto Label_235; // 0xe7 JumpB
	var_157_float = 2.0; // 0xe8 PushF
	Sleep(var_157_float); // 0xe9 Func
	
Label_235:
	return 20; // 0xeb Return
	
Label_120:
	var_35_bool = 0; // 0x78 MovB
	goto Label_218; // 0x79 Jump
	
Label_218:
	goto Label_83; // 0xda Jump
	
Label_122:
	var_158_float = var_18_float * var_18_float; // 0x7a Mult
	var_159_bool = var_37_float >= var_158_float; // 0x7b GE
	if(var_159_bool == 0) goto Label_210; // 0x7c JumpB
	var_160_bool = var_35_bool == 0; // 0x7d Not
	if(var_160_bool == 0) goto Label_140; // 0x7e JumpB
	var_161_object = Obj(); // 0x7f PushV
	var_161_object = var_0_object; // 0x80 MovT
	func_1038(); // 0x81 Call
	var_170_string = "all"; // 0x83 PushS
	var_171_string = "attack_on"; // 0x84 PushS
	PlayAnimation(var_170_string, var_171_string); // 0x85 Func
	WaitForAnimEnd(); // 0x87 Func
	StopAsync(); // 0x89 Func
	var_35_bool = 1; // 0x8b MovB
	
Label_140:
	rand(var_38_float); // 0x8c Func
	var_172_bool = 0; // 0x8e PushV
	var_172_bool = 1; // 0x8f MovB
	var_173_float = 0.6; // 0x90 PushF
	var_174_bool = var_38_float < var_173_float; // 0x91 LT
	if(var_174_bool == 0) goto Label_152; // 0x92 JumpB
	var_175_bool = 0; // 0x93 PushV
	func_471(var_172_bool, var_175_bool); // 0x94 Call
	if(var_175_bool == 0) goto Label_152; // 0x96 JumpB
	var_172_bool = 0; // 0x97 MovB
	
Label_152:
	if(var_172_bool == 0) goto Label_166; // 0x98 JumpB
	Face(var_0_object); // 0x99 Func
	var_181_string = "all"; // 0x9b PushS
	var_182_string = "attack_stay"; // 0x9c PushS
	PlayAnimation(var_181_string, var_182_string); // 0x9d Func
	var_183_bool = 0; var_184_float = 0; // 0x9f PushV
	var_184_float = var_18_float; // 0xa0 Mov
	func_379(var_38_float, var_183_bool, var_184_float); // 0xa1 Call
	StopAsync(); // 0xa3 Func
	goto Label_209; // 0xa5 Jump
	
Label_209:
	goto Label_218; // 0xd1 Jump
	
Label_166:
	Face(var_0_object); // 0xa6 Func
	var_350_string = "all"; // 0xa8 PushS
	var_351_string = "fjump"; // 0xa9 PushS
	PlayAnimation(var_350_string, var_351_string); // 0xaa Func
	WaitForAnimEnd(); // 0xac Func
	var_352_cvector = CVector(0.0, 0.0, 0.0); // 0xae PushVec
	SetSpeed(var_352_cvector); // 0xaf Func
	Stop(); // 0xb1 Func
	StopAsync(); // 0xb3 Func
	var_353_bool = 0; // 0xb5 PushV
	func_471(var_38_float, var_353_bool); // 0xb6 Call
	var_354_bool = var_353_bool == 0; // 0xb8 Not
	if(var_354_bool == 0) goto Label_209; // 0xb9 JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0xba PushV
	var_356_object = var_0_object; // 0xbb MovT
	func_947(var_355_bool, var_356_object); // 0xbc Call
	var_357_bool = var_355_bool == 0; // 0xbe Not
	if(var_357_bool == 0) goto Label_193; // 0xbf JumpB
	goto Label_219; // 0xc0 Jump
	
Label_193:
	GetPFPosition(var_32_cvector); // 0xc1 TObjFunc
	GetPFPosition(var_33_cvector); // 0xc3 Func
	var_36_cvector = var_32_cvector - var_33_cvector; // 0xc5 Sub2
	var_37_float = var_36_cvector | var_36_cvector; // 0xc6 Or2
	var_358_float = var_18_float * var_18_float; // 0xc7 Mult
	var_359_bool = var_37_float < var_358_float; // 0xc8 LT
	if(var_359_bool == 0) goto Label_209; // 0xc9 JumpB
	var_360_bool = 0; var_361_float = 0; // 0xca PushV
	var_361_float = var_18_float; // 0xcb Mov
	func_275(var_38_float, var_360_bool, var_361_float); // 0xcc Call
	var_362_bool = var_360_bool == 0; // 0xce Not
	if(var_362_bool == 0) goto Label_209; // 0xcf JumpB
	goto Label_219; // 0xd0 Jump
	
Label_210:
	var_363_bool = 0; var_364_float = 0; // 0xd2 PushV
	var_364_float = var_18_float; // 0xd3 Mov
	func_275(var_38_float, var_363_bool, var_364_float); // 0xd4 Call
	var_365_bool = var_363_bool == 0; // 0xd6 Not
	if(var_365_bool == 0) goto Label_217; // 0xd7 JumpB
	goto Label_219; // 0xd8 Jump
	
Label_217:
	var_35_bool = 1; // 0xd9 MovB
	
Label_82:
	var_35_bool = 1; // 0x52 MovB
	
Label_69:
	var_31_float = var_18_float; // 0x45 Mov
	
Label_56:
	var_366_int = 1; // 0x38 PushI
	var_2_int = var_2_int + var_366_int; // 0x39 Add2
	goto Label_47; // 0x3a Jump
	
Label_43:
	var_367_int = 1; // 0x2b PushI
	var_1_int = var_1_int + var_367_int; // 0x2c Add2
	goto Label_33; // 0x2d Jump
}


func_671(var_142_string)
{
	var_142_string = "run"; // 0x29f MovS
	return 0; // 0x2a0 Return
}


func_1055(var_305_float, var_306_float, var_307_float)
{
	var_310_bool = var_306_float < var_307_float; // 0x420 LT
	if(var_310_bool == 0) goto Label_1060; // 0x421 JumpB
	var_305_float = var_306_float; // 0x422 Mov
	goto Label_1061; // 0x423 Jump
	
Label_1061:
	return 0; // 0x425 Return
	
Label_1060:
	var_305_float = var_307_float; // 0x424 Mov
}


func_673(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = ""; // 0x2a2 PushV
	var_11_string = "quest_d5_01"; // 0x2a3 MovS
	var_12_string = "dead"; // 0x2a4 MovS
	func_1073(var_10_bool, var_11_string, var_12_string); // 0x2a5 Call
	var_16_object = Obj(); // 0x2a7 PushV
	var_16_object = var_9_object; // 0x2a8 Mov
	func_707(var_16_object); // 0x2a9 Call
	var_66_int = 50; // 0x2ab PushI
	var_67_int = 40; // 0x2ac PushI
	SetRTEnvelope(var_66_int, var_67_int); // 0x2ad Func
	
Label_687:
	Hold(); // 0x2af Func
	goto Label_687; // 0x2b1 Jump
}


func_419(var_0_object, var_196_bool)
{
	var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_float = 0; var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_float = 0; var_206_float = 0; // 0x1a3 PushV
	var_207_bool = 0; var_208_object = Obj(); // 0x1a4 PushV
	var_208_object = var_0_object; // 0x1a5 MovT
	func_947(var_207_bool, var_208_object); // 0x1a6 Call
	var_209_bool = var_207_bool == 0; // 0x1a8 Not
	if(var_209_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_196_bool = 0; // 0x1aa MovB
	return 10; // 0x1ab Return
	
Label_428:
	var_210_bool = 0; // 0x1ac PushV
	func_471(var_206_float, var_210_bool); // 0x1ad Call
	if(var_210_bool == 0) goto Label_450; // 0x1af JumpB
	GetPFPosition(var_202_cvector); // 0x1b0 TObjFunc
	GetPFPosition(var_203_cvector); // 0x1b2 Func
	var_204_cvector = var_202_cvector - var_203_cvector; // 0x1b4 Sub2
	var_205_float = var_204_cvector | var_204_cvector; // 0x1b5 Or2
	GetAttackDistance(var_206_float); // 0x1b6 TObjFunc
	var_211_int = 50; // 0x1b8 PushI
	var_206_float = var_206_float + var_211_int; // 0x1b9 Add2
	var_212_float = var_206_float * var_206_float; // 0x1ba Mult
	var_213_bool = var_205_float <= var_212_float; // 0x1bb LE
	if(var_213_bool == 0) goto Label_450; // 0x1bc JumpB
	func_452(var_206_float); // 0x1be Call
	var_196_bool = 1; // 0x1c0 MovB
	return 10; // 0x1c1 Return
	
Label_450:
	var_196_bool = 0; // 0x1c2 MovB
	return 10; // 0x1c3 Return
}


func_1062(var_315_float, var_316_float, var_317_float, var_318_float)
{
	var_319_bool = var_316_float < var_317_float; // 0x427 LT
	if(var_319_bool == 0) goto Label_1067; // 0x428 JumpB
	var_315_float = var_317_float; // 0x429 Mov
	return 0; // 0x42a Return
	
Label_1067:
	var_320_bool = var_316_float > var_318_float; // 0x42b GT
	if(var_320_bool == 0) goto Label_1071; // 0x42c JumpB
	var_315_float = var_318_float; // 0x42d Mov
	return 0; // 0x42e Return
	
Label_1071:
	var_315_float = var_316_float; // 0x42f Mov
	return 0; // 0x430 Return
}


func_1073(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x431 PushV
	FindActor(var_14_object, var_11_string); // 0x432 Func
	var_15_bool = var_14_object == 0; // 0x434 NullEq
	if(var_15_bool == 0) goto Label_1080; // 0x435 JumpB
	var_10_bool = 0; // 0x436 MovB
	return 2; // 0x437 Return
	
Label_1080:
	Trigger(var_14_object, var_12_string); // 0x438 Func
	var_10_bool = 1; // 0x43a MovB
	return 2; // 0x43b Return
}


func_947(var_58_bool, var_59_object)
{
	var_60_int = 0; var_61_int = 0; // 0x3b3 PushV
	var_62_bool = 0; var_63_object = Obj(); // 0x3b4 PushV
	var_63_object = var_59_object; // 0x3b5 Mov
	func_911(var_62_bool, var_63_object); // 0x3b6 Call
	var_79_bool = var_62_bool == 0; // 0x3b8 Not
	if(var_79_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_58_bool = 0; // 0x3ba MovB
	return 2; // 0x3bb Return
	
Label_956:
	var_80_bool = 0; var_81_object = Obj(); var_82_string = ""; // 0x3bc PushV
	var_81_object = var_59_object; // 0x3bd Mov
	var_82_string = "noaccess"; // 0x3be MovS
	func_830(var_80_bool, var_81_object, var_82_string); // 0x3bf Call
	var_89_bool = var_80_bool == 0; // 0x3c1 Not
	if(var_89_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_58_bool = 1; // 0x3c3 MovB
	return 2; // 0x3c4 Return
	
Label_965:
	var_90_string = "noaccess"; // 0x3c5 PushS
	GetProperty(var_90_string, var_61_int); // 0x3c6 ObjFunc
	var_91_int = 0; // 0x3c8 PushI
	var_58_bool = var_61_int == var_91_int; // 0x3c9 Eq2
	return 2; // 0x3ca Return
}


func_822(var_297_string, var_298_int)
{
	var_299_int = 1; // 0x337 PushI
	var_300_bool = var_298_int == var_299_int; // 0x338 Eq
	if(var_300_bool == 0) goto Label_828; // 0x339 JumpB
	var_297_string = "fire"; // 0x33a MovS
	return 0; // 0x33b Return
	
Label_828:
	var_297_string = "phys"; // 0x33c MovS
	return 0; // 0x33d Return
}


func_1085(var_8_object)
{
	var_9_object = Obj(); // 0x43e PushV
	var_9_object = var_8_object; // 0x43f Mov
	TaskCall(3); // 0x440 TaskCall
	func_673(var_9_object); // 0x441 Call
	TaskReturn(); // 0x442 TaskReturn
	return 0; // 0x444 Return
}


func_830(var_80_bool, var_81_object, var_82_string)
{
	var_83_bool = 0; var_84_bool = 0; // 0x33e PushV
	var_85_string = "HasProperty"; // 0x33f PushS
	var_86_int = 2; // 0x340 PushI
	var_87_bool = IsFuncExist(var_81_object, var_85_string, var_86_int); // 0x341 FuncExist
	var_88_bool = var_87_bool == 0; // 0x342 Not
	if(var_88_bool == 0) goto Label_838; // 0x343 JumpB
	var_80_bool = 0; // 0x344 MovB
	return 2; // 0x345 Return
	
Label_838:
	HasProperty(var_82_string, var_84_bool); // 0x346 ObjFunc
	var_80_bool = var_84_bool; // 0x348 Mov
	return 2; // 0x349 Return
}


func_707(var_16_object)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0x2c3 PushV
	var_37_bool = var_16_object == 0; // 0x2c4 NullEq
	if(var_37_bool == 0) goto Label_715; // 0x2c5 JumpB
	var_38_string = ""; // 0x2c6 PushV
	var_38_string = "fdie"; // 0x2c7 MovS
	func_794(var_38_string); // 0x2c8 Call
	goto Label_793; // 0x2ca Jump
	
Label_793:
	return 20; // 0x319 Return
	
Label_715:
	GetPosition(var_27_cvector); // 0x2cb ObjFunc
	GetPosition(var_28_cvector); // 0x2cd Func
	GetDirection(var_29_cvector); // 0x2cf Func
	var_30_cvector = var_28_cvector - var_27_cvector; // 0x2d1 Sub2
	var_41_float = GetByIndex(var_30_cvector, 0); // 0x2d2 PushE
	var_42_float = GetByIndex(var_29_cvector, 0); // 0x2d3 PushE
	var_43_float = var_41_float * var_42_float; // 0x2d4 Mult
	var_44_float = GetByIndex(var_30_cvector, 2); // 0x2d5 PushE
	var_45_float = GetByIndex(var_29_cvector, 2); // 0x2d6 PushE
	var_46_float = var_44_float * var_45_float; // 0x2d7 Mult
	var_47_int = var_43_float + var_46_float; // 0x2d8 Add
	var_48_int = 0; // 0x2d9 PushI
	var_49_bool = var_47_int >= var_48_int; // 0x2da GE
	if(var_49_bool == 0) goto Label_734; // 0x2db JumpB
	var_31_string = "fdie"; // 0x2dc MovS
	goto Label_735; // 0x2dd Jump
	
Label_735:
	RemoveRTEnvelope(); // 0x2df Func
	SetDeathState(); // 0x2e1 Func
	Stop(); // 0x2e3 Func
	StopAsync(); // 0x2e5 Func
	var_32_object = var_16_object; // 0x2e7 Mov
	var_50_string = "GetScriptProperty"; // 0x2e8 PushS
	var_51_int = 2; // 0x2e9 PushI
	var_52_bool = IsFuncExist(var_16_object, var_50_string, var_51_int); // 0x2ea FuncExist
	if(var_52_bool == 0) goto Label_759; // 0x2eb JumpB
	var_53_string = "Owner"; // 0x2ec PushS
	HasScriptProperty(var_33_bool, var_53_string); // 0x2ed ObjFunc
	var_54_bool = var_33_bool; // 0x2ef Push
	if(var_54_bool == 0) goto Label_759; // 0x2f0 JumpB
	var_55_string = "Owner"; // 0x2f1 PushS
	GetScriptProperty(var_32_object, var_55_string); // 0x2f2 ObjFunc
	var_56_bool = var_32_object == 0; // 0x2f4 NullEq
	if(var_56_bool == 0) goto Label_759; // 0x2f5 JumpB
	var_32_object = var_16_object; // 0x2f6 Mov
	
Label_759:
	var_57_string = "@GetEyesHeight"; // 0x2f7 PushS
	var_58_int = 1; // 0x2f8 PushI
	var_59_bool = IsFuncExist(var_32_object, var_57_string, var_58_int); // 0x2f9 FuncExist
	if(var_59_bool == 0) goto Label_774; // 0x2fa JumpB
	GetEyesHeight(var_35_float); // 0x2fb ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x2fd MovV
	var_60_float = GetByIndex(var_36_cvector, 1); // 0x2fe PushE
	var_60_float = var_35_float; // 0x2ff Mov
	SetByIndex(var_36_cvector, 1) = var_60_float; // 0x300 PopE
	var_61_string = "head"; // 0x301 PushS
	LookAsync(var_16_object, var_61_string, var_36_cvector); // 0x302 Func
	var_34_bool = 1; // 0x304 MovB
	goto Label_775; // 0x305 Jump
	
Label_775:
	var_62_string = "all"; // 0x307 PushS
	PlayAnimation(var_62_string, var_31_string); // 0x308 Func
	WaitForAnimEnd(); // 0x30a Func
	var_63_bool = var_34_bool; // 0x30c Push
	if(var_63_bool == 0) goto Label_787; // 0x30d JumpB
	StopAsync(); // 0x30e Func
	var_64_string = "head"; // 0x310 PushS
	UnlookAsync(var_64_string); // 0x311 Func
	
Label_787:
	var_65_string = "all"; // 0x313 PushS
	LockAnimationEnd(var_65_string, var_31_string); // 0x314 Func
	RemoveEnvelope(); // 0x316 Func
	var_32_object = 0; // 0x318 SetNull
	
Label_774:
	var_34_bool = 0; // 0x306 MovB
	
Label_734:
	var_31_string = "bdie"; // 0x2de MovS
}


func_452(var_0_object)
{
	var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); // 0x1c4 PushV
	Face(var_0_object); // 0x1c5 Func
	var_218_string = "all"; // 0x1c7 PushS
	var_219_string = "bjump"; // 0x1c8 PushS
	PlayAnimation(var_218_string, var_219_string); // 0x1c9 Func
	GetPFPosition(var_216_cvector); // 0x1cb TObjFunc
	GetPFPosition(var_217_cvector); // 0x1cd Func
	WaitForAnimEnd(); // 0x1cf Func
	StopAsync(); // 0x1d1 Func
	var_220_cvector = CVector(0.0, 0.0, 0.0); // 0x1d3 PushVec
	SetSpeed(var_220_cvector); // 0x1d4 Func
	return 4; // 0x1d6 Return
}


func_842(var_269_float, var_270_object, var_271_float, var_272_int)
{
	var_276_int = 0; var_277_string = ""; var_278_int = 0; var_279_float = 0; var_280_float = 0; var_281_float = 0; var_282_int = 0; var_283_string = ""; var_284_int = 0; var_285_float = 0; var_286_float = 0; var_287_float = 0; // 0x34a PushV
	var_288_bool = 0; var_289_object = Obj(); var_290_string = ""; // 0x34b PushV
	var_289_object = var_270_object; // 0x34c Mov
	var_290_string = "health"; // 0x34d MovS
	func_830(var_288_bool, var_289_object, var_290_string); // 0x34e Call
	var_291_bool = var_288_bool == 0; // 0x350 Not
	if(var_291_bool == 0) goto Label_852; // 0x351 JumpB
	var_269_float = 0.0; // 0x352 MovF
	return 12; // 0x353 Return
	
Label_852:
	var_292_bool = 0; var_293_object = Obj(); var_294_string = ""; // 0x354 PushV
	var_293_object = var_270_object; // 0x355 Mov
	var_294_string = "armor"; // 0x356 MovS
	func_830(var_292_bool, var_293_object, var_294_string); // 0x357 Call
	var_295_bool = var_292_bool == 0; // 0x359 Not
	if(var_295_bool == 0) goto Label_861; // 0x35a JumpB
	var_282_int = 0; // 0x35b MovI
	goto Label_864; // 0x35c Jump
	
Label_864:
	var_296_string = "armor_"; // 0x360 PushS
	var_297_string = ""; var_298_int = 0; // 0x361 PushV
	var_298_int = var_272_int; // 0x362 Mov
	func_822(var_297_string, var_298_int); // 0x363 Call
	var_283_string = var_296_string + var_297_string; // 0x365 Add2
	var_301_bool = 0; var_302_object = Obj(); var_303_string = ""; // 0x366 PushV
	var_302_object = var_270_object; // 0x367 Mov
	var_303_string = var_283_string; // 0x368 Mov
	func_830(var_301_bool, var_302_object, var_303_string); // 0x369 Call
	var_304_bool = var_301_bool == 0; // 0x36b Not
	if(var_304_bool == 0) goto Label_879; // 0x36c JumpB
	var_284_int = 0; // 0x36d MovI
	goto Label_881; // 0x36e Jump
	
Label_881:
	var_305_float = 0; var_306_float = 0; var_307_float = 0; // 0x371 PushV
	var_308_int = var_282_int + var_284_int; // 0x372 Add
	var_309_float = 100.0; // 0x373 PushF
	var_306_float = var_308_int / var_308_int; // 0x374 Div2
	var_307_float = 1; // 0x375 MovI
	func_1055(var_305_float, var_306_float, var_307_float); // 0x376 Call
	var_285_float = var_305_float; // 0x377 Mov
	var_311_string = "health"; // 0x379 PushS
	GetProperty(var_311_string, var_286_float); // 0x37a ObjFunc
	var_312_int = 1; // 0x37c PushI
	var_313_int = var_312_int - var_285_float; // 0x37d Sub
	var_287_float = var_271_float * var_313_int; // 0x37e Mult2
	var_314_string = "health"; // 0x37f PushS
	var_315_float = 0; var_316_float = 0; var_317_float = 0; var_318_float = 0; // 0x380 PushV
	var_316_float = var_286_float - var_287_float; // 0x381 Sub2
	var_317_float = 0; // 0x382 MovI
	var_318_float = 1; // 0x383 MovI
	func_1062(var_315_float, var_316_float, var_317_float, var_318_float); // 0x384 Call
	SetProperty(var_314_string, var_315_float); // 0x386 ObjFunc
	var_269_float = var_287_float; // 0x388 Mov
	return 12; // 0x389 Return
	
Label_879:
	GetProperty(var_283_string, var_284_int); // 0x36f ObjFunc
	
Label_861:
	var_321_string = "armor"; // 0x35d PushS
	GetProperty(var_321_string, var_282_int); // 0x35e ObjFunc
}


func_971(var_11_object, var_12_int)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_int = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; // 0x3cb PushV
	var_34_bool = 0; // 0x3cc PushV
	var_34_bool = 0; // 0x3cd MovB
	var_35_int = 4; // 0x3ce PushI
	var_36_bool = var_12_int != var_35_int; // 0x3cf Neq
	if(var_36_bool == 0) goto Label_981; // 0x3d0 JumpB
	var_37_int = 5; // 0x3d1 PushI
	var_38_bool = var_12_int != var_37_int; // 0x3d2 Neq
	if(var_38_bool == 0) goto Label_981; // 0x3d3 JumpB
	var_34_bool = 1; // 0x3d4 MovB
	
Label_981:
	if(var_34_bool == 0) goto Label_1000; // 0x3d5 JumpB
	GetScene(var_24_object); // 0x3d6 Func
	GetPosition(var_26_cvector); // 0x3d8 Func
	GetEyesHeight(var_27_float); // 0x3da Func
	var_39_float = GetByIndex(var_26_cvector, 1); // 0x3dc PushE
	var_40_int = 2; // 0x3dd PushI
	var_41_float = var_27_float / var_40_int; // 0x3de Div
	var_39_float = var_39_float + var_41_float; // 0x3df Add2
	SetByIndex(var_26_cvector, 1) = var_39_float; // 0x3e0 PopE
	var_42_string = "scripted"; // 0x3e1 PushS
	var_43_cvector = CVector(0.0, 0.0, 1.0); // 0x3e2 PushVec
	var_44_string = "blood.xml"; // 0x3e3 PushS
	AddActorByType(var_25_object, var_42_string, var_24_object, var_26_cvector, var_43_cvector, var_44_string); // 0x3e4 Func
	var_25_object = 0; // 0x3e6 SetNull
	var_24_object = 0; // 0x3e7 SetNull
	
Label_1000:
	var_45_bool = var_11_object == 0; // 0x3e8 NullEq
	if(var_45_bool == 0) goto Label_1003; // 0x3e9 JumpB
	return 20; // 0x3ea Return
	
Label_1003:
	GetSecondaryAnimationType(var_28_int); // 0x3eb Func
	var_46_int = 0; // 0x3ed PushI
	var_47_bool = var_28_int < var_46_int; // 0x3ee LT
	if(var_47_bool == 0) goto Label_1009; // 0x3ef JumpB
	return 20; // 0x3f0 Return
	
Label_1009:
	GetPosition(var_29_cvector); // 0x3f1 ObjFunc
	GetPosition(var_30_cvector); // 0x3f3 Func
	GetDirection(var_31_cvector); // 0x3f5 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x3f7 Sub2
	var_48_float = GetByIndex(var_32_cvector, 0); // 0x3f8 PushE
	var_49_float = GetByIndex(var_31_cvector, 0); // 0x3f9 PushE
	var_50_float = var_48_float * var_49_float; // 0x3fa Mult
	var_51_float = GetByIndex(var_32_cvector, 2); // 0x3fb PushE
	var_52_float = GetByIndex(var_31_cvector, 2); // 0x3fc PushE
	var_53_float = var_51_float * var_52_float; // 0x3fd Mult
	var_54_int = var_50_float + var_53_float; // 0x3fe Add
	var_55_int = 0; // 0x3ff PushI
	var_56_bool = var_54_int >= var_55_int; // 0x400 GE
	if(var_56_bool == 0) goto Label_1028; // 0x401 JumpB
	var_33_string = "fhit"; // 0x402 MovS
	goto Label_1029; // 0x403 Jump
	
Label_1029:
	var_57_string = "hit_react"; // 0x405 PushS
	var_58_string = "1"; // 0x406 PushS
	var_59_int = var_33_string + var_58_string; // 0x407 Add
	var_60_string = "2"; // 0x408 PushS
	var_61_int = var_33_string + var_60_string; // 0x409 Add
	var_62_int = -10; // 0x40a PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x40b Func
	return 20; // 0x40d Return
	
Label_1028:
	var_33_string = "bhit"; // 0x404 MovS
}


func_471(var_0_object, var_175_bool)
{
	var_176_bool = 0; var_177_bool = 0; // 0x1d7 PushV
	var_178_string = "IsAttacking"; // 0x1d8 PushS
	var_179_int = 1; // 0x1d9 PushI
	var_180_bool = IsFuncExist(var_0_object, var_178_string, var_179_int); // 0x1da FuncExist
	if(var_180_bool == 0) goto Label_480; // 0x1db JumpB
	IsAttacking(var_177_bool); // 0x1dc TObjFunc
	var_175_bool = var_177_bool; // 0x1de Mov
	return 2; // 0x1df Return
	
Label_480:
	var_175_bool = 0; // 0x1e0 MovB
	return 2; // 0x1e1 Return
}


func_482(var_2_int, var_4_int)
{
	var_237_float = 0; var_238_int = 0; var_239_float = 0; var_240_int = 0; // 0x1e2 PushV
	var_241_bool = var_2_int == 0; // 0x1e3 Not
	if(var_241_bool == 0) goto Label_486; // 0x1e4 JumpB
	return 4; // 0x1e5 Return
	
Label_486:
	var_242_int = var_4_int; // 0x1e6 PushT
	if(var_242_int == 0) goto Label_494; // 0x1e7 JumpB
	var_243_int = -1; // 0x1e8 PushI
	var_4_int = var_4_int + var_243_int; // 0x1e9 Add2
	var_244_int = 0; // 0x1ea PushI
	var_245_bool = var_4_int > var_244_int; // 0x1eb GT
	if(var_245_bool == 0) goto Label_494; // 0x1ec JumpB
	return 4; // 0x1ed Return
	
Label_494:
	rand(var_239_float); // 0x1ee Func
	var_246_float = 0; // 0x1f0 PushV
	func_520(var_246_float); // 0x1f1 Call
	var_247_bool = var_239_float < var_246_float; // 0x1f3 LT
	if(var_247_bool == 0) goto Label_513; // 0x1f4 JumpB
	irand(var_240_int, var_239_float); // 0x1f5 Func
	var_248_int = 1; // 0x1f7 PushI
	var_240_int = var_240_int + var_248_int; // 0x1f8 Add2
	var_249_string = "attack"; // 0x1f9 PushS
	var_250_int = var_249_string + var_240_int; // 0x1fa Add
	Speak(var_250_int); // 0x1fb Func
	var_251_int = 0; // 0x1fd PushV
	func_518(var_251_int); // 0x1fe Call
	var_4_int = var_251_int; // 0x1ff TMov
	
Label_513:
	return 4; // 0x201 Return
}


func_355(var_341_bool, var_342_float)
{
	var_343_float = 0; var_344_bool = 0; var_345_float = 0; var_346_bool = 0; // 0x163 PushV
	rand(var_345_float); // 0x164 Func
	var_347_bool = var_345_float < var_342_float; // 0x166 LT
	if(var_347_bool == 0) goto Label_375; // 0x167 JumpB
	
Label_360:
	IsAnimationPlaying(var_346_bool); // 0x168 Func
	var_348_bool = var_346_bool == 0; // 0x16a Not
	if(var_348_bool == 0) goto Label_365; // 0x16b JumpB
	goto Label_374; // 0x16c Jump
	
Label_374:
	goto Label_377; // 0x176 Jump
	
Label_377:
	var_341_bool = 0; // 0x179 MovB
	return 4; // 0x17a Return
	
Label_365:
	var_349_bool = 0; // 0x16d PushV
	func_419(var_346_bool, var_349_bool); // 0x16e Call
	if(var_349_bool == 0) goto Label_371; // 0x170 JumpB
	var_341_bool = 1; // 0x171 MovB
	return 4; // 0x172 Return
	
Label_371:
	sync(); // 0x173 Func
	goto Label_360; // 0x175 Jump
	
Label_375:
	WaitForAnimEnd(); // 0x177 Func
}


func_236(var_0_object, var_255_float, var_256_int)
{
	var_257_object = Obj(); var_258_float = 0; var_259_float = 0; var_260_object = Obj(); var_261_float = 0; var_262_float = 0; // 0xec PushV
	var_263_float = 0.9; // 0xed PushF
	var_264_float = var_255_float * var_263_float; // 0xee Mult
	GetVictim(var_264_float, var_260_object); // 0xef Func
	ReportAttack(var_0_object); // 0xf1 Func
	var_265_bool = var_260_object == var_0_object; // 0xf3 Eq
	if(var_265_bool == 0) goto Label_273; // 0xf4 JumpB
	var_266_float = 0; var_267_object = Obj(); var_268_int = 0; // 0xf5 PushV
	var_267_object = var_260_object; // 0xf6 Mov
	var_268_int = var_256_int; // 0xf7 Mov
	func_25(var_268_int); // 0xf8 Call
	var_261_float = var_266_float; // 0xf9 Mov
	var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_int = 0; // 0xfb PushV
	var_270_object = var_260_object; // 0xfc Mov
	var_271_float = var_261_float; // 0xfd Mov
	var_273_int = 0; var_274_object = Obj(); var_275_int = 0; // 0xfe PushV
	var_274_object = var_260_object; // 0xff Mov
	var_275_int = var_256_int; // 0x100 Mov
	func_28(var_275_int); // 0x101 Call
	var_272_int = var_273_int; // 0x102 Mov
	func_842(var_269_float, var_270_object, var_271_float, var_272_int); // 0x104 Call
	var_262_float = var_269_float; // 0x105 Mov
	var_322_int = 0; // 0x107 PushV
	func_514(var_322_int); // 0x108 Call
	ReportHit(var_0_object, var_322_int, var_262_float, var_261_float); // 0x10a Func
	var_323_object = Obj(); var_324_float = 0; // 0x10c PushV
	var_323_object = var_260_object; // 0x10d Mov
	var_324_float = var_262_float; // 0x10e Mov
	func_516(); // 0x10f Call
	
Label_273:
	return 6; // 0x111 Return
}


func_379(var_0_object, var_183_bool, var_184_float)
{
	var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_cvector = CVector(0,0,0); var_194_float = 0; // 0x17b PushV
	
Label_380:
	IsAnimationPlaying(var_190_bool); // 0x17c Func
	var_195_bool = var_190_bool == 0; // 0x17e Not
	if(var_195_bool == 0) goto Label_385; // 0x17f JumpB
	goto Label_417; // 0x180 Jump
	
Label_417:
	var_183_bool = 0; // 0x1a1 MovB
	return 10; // 0x1a2 Return
	
Label_385:
	var_196_bool = 0; // 0x181 PushV
	func_419(var_194_float, var_196_bool); // 0x182 Call
	if(var_196_bool == 0) goto Label_391; // 0x184 JumpB
	var_183_bool = 1; // 0x185 MovB
	return 10; // 0x186 Return
	
Label_391:
	var_221_bool = 0; var_222_object = Obj(); // 0x187 PushV
	var_222_object = var_0_object; // 0x188 MovT
	func_947(var_221_bool, var_222_object); // 0x189 Call
	var_223_bool = var_221_bool == 0; // 0x18b Not
	if(var_223_bool == 0) goto Label_399; // 0x18c JumpB
	var_183_bool = 0; // 0x18d MovB
	return 10; // 0x18e Return
	
Label_399:
	GetPFPosition(var_191_cvector); // 0x18f TObjFunc
	GetPFPosition(var_192_cvector); // 0x191 Func
	var_193_cvector = var_191_cvector - var_192_cvector; // 0x193 Sub2
	var_194_float = var_193_cvector | var_193_cvector; // 0x194 Or2
	var_224_float = var_184_float * var_184_float; // 0x195 Mult
	var_225_bool = var_194_float < var_224_float; // 0x196 LT
	if(var_225_bool == 0) goto Label_414; // 0x197 JumpB
	var_226_bool = 0; var_227_float = 0; // 0x198 PushV
	var_227_float = var_184_float; // 0x199 Mov
	func_275(var_194_float, var_226_bool, var_227_float); // 0x19a Call
	var_183_bool = 1; // 0x19c MovB
	return 10; // 0x19d Return
	
Label_414:
	sync(); // 0x19e Func
	goto Label_380; // 0x1a0 Jump
}


