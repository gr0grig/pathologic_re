task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_float, var_18_int)
{
	var_19_bool = 0; // 0x1b PushV
	func_1454(var_19_bool); // 0x1c NEW_2
	if(var_19_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_int, var_9_int, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_bool, var_18_float, var_19_int)
{
	var_20_int = 1; // 0xc3 PushI
	if(var_20_int == 0) goto Label_258; // 0xc4 JumpB
	func_864(); // 0xc6 NEW_2
	var_22_int = 21712; // 0xc8 PushI
	var_23_bool = var_18_float == var_22_int; // 0xc9 Eq
	if(var_23_bool == 0) goto Label_223; // 0xca JumpB
	var_24_string = ""; // 0xcb PushV
	var_24_string = "Neutral"; // 0xcc MovS
	func_172(var_19_int, var_24_string); // 0xcd NEW_2
	var_41_int = 520509; // 0xcf PushI
	SetMessage(var_41_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_42_int = 524384; // 0xd4 PushI
	var_43_int = 25709; // 0xd5 PushI
	var_44_int = 25708; // 0xd6 PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xd7 TObjFunc
	var_45_int = 520510; // 0xd9 PushI
	var_46_int = -1; // 0xda PushI
	var_47_int = 21713; // 0xdb PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_48_int = 25709; // 0xdf PushI
	var_49_bool = var_18_float == var_48_int; // 0xe0 Eq
	if(var_49_bool == 0) goto Label_246; // 0xe1 JumpB
	var_50_string = ""; // 0xe2 PushV
	var_50_string = "Neutral"; // 0xe3 MovS
	func_172(var_19_int, var_50_string); // 0xe4 NEW_2
	var_51_int = 524385; // 0xe6 PushI
	SetMessage(var_51_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_52_int = 524387; // 0xeb PushI
	var_53_int = -1; // 0xec PushI
	var_54_int = 25711; // 0xed PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xee TObjFunc
	var_55_int = 524386; // 0xf0 PushI
	var_56_int = -1; // 0xf1 PushI
	var_57_int = 25710; // 0xf2 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_object = 1; // 0xf6 TMovB
	var_58_bool = 0; // 0xf7 PushV
	func_1454(var_58_bool); // 0xf8 NEW_2
	if(var_58_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	func_549(var_16_float, var_17_int); // 0x118 NEW_2
	Hold(); // 0x11a Func
	return 0; // 0x11c Return
}


task_3_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	StopGroup0(); // 0x11d Func
	return 0; // 0x11f Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_object)
{
	var_19_float = 0; var_20_object = Obj(); // 0x121 PushV
	var_20_object = var_18_object; // 0x122 Mov
	func_1456(var_20_object); // 0x123 NEW_2
	var_24_bool = var_10_object > var_19_float; // 0x125 GT
	if(var_24_bool == 0) goto Label_302; // 0x126 JumpB
	var_25_int = 0; var_26_object = Obj(); // 0x127 PushV
	var_26_object = var_18_object; // 0x128 Mov
	TaskCall(1); // 0x129 TaskCall
	func_40(var_27_object, var_25_int, var_26_object); // 0x12a NEW_2
	TaskReturn(); // 0x12b TaskReturn
	return 0; // 0x12d Return
	
Label_302:
	var_155_int = 0; // 0x12e PushV
	func_961(var_155_int); // 0x12f NEW_2
	var_161_bool = var_11_bool != var_155_int; // 0x131 Neq
	if(var_161_bool == 0) goto Label_317; // 0x132 JumpB
	var_162_string = "Updating salesman"; // 0x133 PushS
	Trace(var_162_string); // 0x134 Func
	var_163_int = 0; // 0x136 PushV
	func_961(var_163_int); // 0x137 NEW_2
	var_11_bool = var_163_int; // 0x138 TMov
	func_420(); // 0x13b NEW_2
	
Label_317:
	var_479_bool = 0; var_480_object = Obj(); // 0x13d PushV
	var_480_object = var_18_object; // 0x13e Mov
	func_761(var_479_bool, var_480_object); // 0x13f NEW_2
	if(var_479_bool == 0) goto Label_332; // 0x141 JumpB
	var_511_object = Obj(); // 0x142 PushV
	var_511_object = var_18_object; // 0x143 Mov
	TaskCall(0); // 0x144 TaskCall
	func_0(var_511_object); // 0x145 NEW_2
	TaskReturn(); // 0x146 TaskReturn
	var_518_object = Obj(); // 0x148 PushV
	var_518_object = var_18_object; // 0x149 Mov
	func_817(); // 0x14a NEW_2
	
Label_332:
	return 0; // 0x14c Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_18_int)
{
	var_19_int = 10; // 0x20f PushI
	var_20_bool = var_18_int == var_19_int; // 0x210 Eq
	if(var_20_bool == 0) goto Label_548; // 0x211 JumpB
	var_21_bool = 0; // 0x212 PushV
	func_511(var_16_float, var_17_int, var_18_int, var_21_bool); // 0x213 NEW_2
	if(var_21_bool == 0) goto Label_542; // 0x215 JumpB
	var_34_bool = var_2_object == 0; // 0x216 Not
	if(var_34_bool == 0) goto Label_541; // 0x217 JumpB
	var_35_object = Obj(); // 0x218 PushV
	var_35_object = var_4_string; // 0x219 MovT
	func_853(var_35_object); // 0x21a NEW_2
	var_2_object = 1; // 0x21c TMovB
	
Label_541:
	goto Label_548; // 0x21d Jump
	
Label_548:
	return 0; // 0x224 Return
	
Label_542:
	var_42_object = var_2_object; // 0x21e PushT
	if(var_42_object == 0) goto Label_548; // 0x21f JumpB
	var_43_string = "head"; // 0x220 PushS
	UnlookAsync(var_43_string); // 0x221 Func
	var_2_object = 0; // 0x223 TMovB
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int)
{
	var_11_bool = -1; // 0x103 TMovI
	func_333(var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int); // 0x105 NEW_2
	var_73_bool = 0; // 0x107 PushV
	func_669(var_73_bool); // 0x108 NEW_2
	var_76_bool = var_73_bool == 0; // 0x10a Not
	if(var_76_bool == 0) goto Label_270; // 0x10b JumpB
	Hold(); // 0x10c Func
	
Label_270:
	var_77_bool = 1; // 0x10e PushB
	if(var_77_bool == 0) goto Label_278; // 0x10f JumpB
	var_78_float = 0; var_79_float = 0; // 0x110 PushV
	var_78_float = 300; // 0x111 MovI
	var_79_float = 100; // 0x112 MovI
	func_484(var_13_bool, var_14_bool, var_15_bool, var_16_float, var_17_int, var_78_float, var_79_float); // 0x113 NEW_2
	goto Label_270; // 0x115 Jump
	
Label_278:
	return 0; // 0x116 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_513_bool = 0; // 0x4 PushV
	func_1454(var_513_bool); // 0x5 NEW_2
	if(var_513_bool == 0) goto Label_15; // 0x7 JumpB
	var_514_string = ""; // 0x8 PushV
	var_514_string = "Neutral"; // 0x9 MovS
	func_822(var_514_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_515_bool = var_0_bool; // 0x15 PushT
	if(var_515_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_516_string = "all"; // 0x11 PushS
	var_517_string = "idle"; // 0x12 PushS
	PlayAnimation(var_516_string, var_517_string); // 0x13 Func
}


func_769(var_481_bool, var_483_float)
{
	var_484_float = 0; var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_cvector = CVector(0,0,0); var_489_cvector = CVector(0,0,0); var_490_cvector = CVector(0,0,0); var_491_bool = 0; var_492_float = 0; var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_bool = 0; // 0x301 PushV
	GetPosition(var_493_cvector); // 0x302 ObjFunc
	GetEyesHeight(var_492_float); // 0x304 ObjFunc
	var_500_float = GetByIndex(var_493_cvector, 1); // 0x306 PushE
	var_500_float = var_500_float + var_492_float; // 0x307 Add2
	SetByIndex(var_493_cvector, 1) = var_500_float; // 0x308 PopE
	GetPosition(var_494_cvector); // 0x309 Func
	GetEyesHeight(var_492_float); // 0x30b Func
	var_501_float = GetByIndex(var_494_cvector, 1); // 0x30d PushE
	var_501_float = var_501_float + var_492_float; // 0x30e Add2
	SetByIndex(var_494_cvector, 1) = var_501_float; // 0x30f PopE
	var_495_cvector = var_493_cvector - var_494_cvector; // 0x310 Sub2
	var_502_float = GetByIndex(var_495_cvector, 1); // 0x311 PushE
	var_502_float = 0; // 0x312 MovI
	SetByIndex(var_495_cvector, 1) = var_502_float; // 0x313 PopE
	var_503_int = var_495_cvector | var_495_cvector; // 0x314 Or
	var_504_float = sqrt(var_503_int); // 0x315 Sqrt
	var_495_cvector = var_495_cvector / var_495_cvector; // 0x316 Div2
	var_496_cvector = -var_495_cvector; // 0x317 Neg2
	var_505_float = var_495_cvector * var_483_float; // 0x318 Mult
	var_506_cvector = CVector(0.0, 10.0, 0.0); // 0x319 PushVec
	var_497_cvector = var_505_float - var_506_cvector; // 0x31a Sub2
	var_498_cvector = var_494_cvector + var_497_cvector; // 0x31b Add2
	IsOverrideActive(var_499_bool); // 0x31c Func
	var_507_bool = var_499_bool; // 0x31e Push
	if(var_507_bool == 0) goto Label_802; // 0x31f JumpB
	var_481_bool = 0; // 0x320 MovB
	return 16; // 0x321 Return
	
Label_802:
	StopWorld(); // 0x322 Func
	var_508_bool = 1; // 0x324 PushB
	CameraTransit(var_498_cvector, var_496_cvector, var_508_bool); // 0x325 Func
	var_509_float = GetByIndex(var_497_cvector, 0); // 0x327 PushE
	var_510_float = GetByIndex(var_497_cvector, 2); // 0x328 PushE
	Rotate(var_509_float, var_510_float); // 0x329 Func
	CameraWaitForPlayFinish(); // 0x32b Func
	ResumeWorld(); // 0x32d Func
	var_481_bool = 1; // 0x32f MovB
	return 16; // 0x330 Return
}


func_642(var_126_bool)
{
	var_126_bool = 1; // 0x282 MovB
	return 0; // 0x283 Return
}


func_1024(var_183_bool, var_185_int)
{
	var_186_string = ""; var_187_int = 0; var_188_int = 0; // 0x401 PushV
	var_186_string = "drapery"; // 0x402 MovS
	var_187_int = 1; // 0x403 MovI
	var_188_int = 2; // 0x404 MovI
	func_897(var_186_string, var_187_int, var_188_int); // 0x405 NEW_2
	var_197_int = 2; // 0x407 PushI
	var_198_bool = var_185_int >= var_197_int; // 0x408 GE
	if(var_198_bool == 0) goto Label_1052; // 0x409 JumpB
	var_199_string = ""; var_200_int = 0; var_201_int = 0; // 0x40a PushV
	var_199_string = "halfboot_repel"; // 0x40b MovS
	var_200_int = 1; // 0x40c MovI
	var_201_int = 3; // 0x40d MovI
	func_897(var_199_string, var_200_int, var_201_int); // 0x40e NEW_2
	var_202_string = ""; var_203_int = 0; var_204_int = 0; // 0x410 PushV
	var_202_string = "glove_disp"; // 0x411 MovS
	var_203_int = 1; // 0x412 MovI
	var_204_int = 3; // 0x413 MovI
	func_897(var_202_string, var_203_int, var_204_int); // 0x414 NEW_2
	var_205_string = ""; var_206_int = 0; var_207_int = 0; // 0x416 PushV
	var_205_string = "drapery"; // 0x417 MovS
	var_206_int = 1; // 0x418 MovI
	var_207_int = 3; // 0x419 MovI
	func_897(var_205_string, var_206_int, var_207_int); // 0x41a NEW_2
	
Label_1052:
	var_208_int = 4; // 0x41c PushI
	var_209_bool = var_185_int >= var_208_int; // 0x41d GE
	if(var_209_bool == 0) goto Label_1067; // 0x41e JumpB
	var_210_string = ""; var_211_int = 0; var_212_int = 0; // 0x41f PushV
	var_210_string = "glove"; // 0x420 MovS
	var_211_int = 1; // 0x421 MovI
	var_212_int = 4; // 0x422 MovI
	func_897(var_210_string, var_211_int, var_212_int); // 0x423 NEW_2
	var_213_string = ""; var_214_int = 0; var_215_int = 0; // 0x425 PushV
	var_213_string = "cloak_repel"; // 0x426 MovS
	var_214_int = 1; // 0x427 MovI
	var_215_int = 4; // 0x428 MovI
	func_897(var_213_string, var_214_int, var_215_int); // 0x429 NEW_2
	
Label_1067:
	var_216_int = 5; // 0x42b PushI
	var_217_bool = var_185_int >= var_216_int; // 0x42c GE
	if(var_217_bool == 0) goto Label_1082; // 0x42d JumpB
	var_218_string = ""; var_219_int = 0; var_220_int = 0; // 0x42e PushV
	var_218_string = "mask"; // 0x42f MovS
	var_219_int = 1; // 0x430 MovI
	var_220_int = 8; // 0x431 MovI
	func_897(var_218_string, var_219_int, var_220_int); // 0x432 NEW_2
	var_221_string = ""; var_222_int = 0; var_223_int = 0; // 0x434 PushV
	var_221_string = "boot_repel"; // 0x435 MovS
	var_222_int = 1; // 0x436 MovI
	var_223_int = 4; // 0x437 MovI
	func_897(var_221_string, var_222_int, var_223_int); // 0x438 NEW_2
	
Label_1082:
	var_224_int = 7; // 0x43a PushI
	var_225_bool = var_185_int >= var_224_int; // 0x43b GE
	if(var_225_bool == 0) goto Label_1091; // 0x43c JumpB
	var_226_string = ""; var_227_int = 0; var_228_int = 0; // 0x43d PushV
	var_226_string = "raincoat_repel"; // 0x43e MovS
	var_227_int = 1; // 0x43f MovI
	var_228_int = 4; // 0x440 MovI
	func_897(var_226_string, var_227_int, var_228_int); // 0x441 NEW_2
	
Label_1091:
	var_229_int = 9; // 0x443 PushI
	var_230_bool = var_185_int >= var_229_int; // 0x444 GE
	if(var_230_bool == 0) goto Label_1106; // 0x445 JumpB
	var_231_string = ""; var_232_int = 0; var_233_int = 0; // 0x446 PushV
	var_231_string = "glove_army"; // 0x447 MovS
	var_232_int = 1; // 0x448 MovI
	var_233_int = 5; // 0x449 MovI
	func_897(var_231_string, var_232_int, var_233_int); // 0x44a NEW_2
	var_234_string = ""; var_235_int = 0; var_236_int = 0; // 0x44c PushV
	var_234_string = "boot_army"; // 0x44d MovS
	var_235_int = 1; // 0x44e MovI
	var_236_int = 5; // 0x44f MovI
	func_897(var_234_string, var_235_int, var_236_int); // 0x450 NEW_2
	
Label_1106:
	var_237_int = 10; // 0x452 PushI
	var_238_bool = var_185_int >= var_237_int; // 0x453 GE
	if(var_238_bool == 0) goto Label_1115; // 0x454 JumpB
	var_239_string = ""; var_240_int = 0; var_241_int = 0; // 0x455 PushV
	var_239_string = "balahon"; // 0x456 MovS
	var_240_int = 1; // 0x457 MovI
	var_241_int = 9; // 0x458 MovI
	func_897(var_239_string, var_240_int, var_241_int); // 0x459 NEW_2
	
Label_1115:
	var_183_bool = 1; // 0x45b MovB
	return 0; // 0x45c Return
}


func_644()
{
	StopAnimation(); // 0x284 Func
	StopGroup0(); // 0x286 Func
	return 0; // 0x288 Return
}


func_897(var_186_string, var_187_int, var_188_int)
{
	var_189_bool = 0; var_190_bool = 0; // 0x381 PushV
	var_191_bool = 0; var_192_int = 0; var_193_int = 0; // 0x382 PushV
	var_192_int = var_187_int; // 0x383 Mov
	var_193_int = var_188_int; // 0x384 Mov
	func_956(var_191_bool, var_192_int, var_193_int); // 0x385 NEW_2
	if(var_191_bool == 0) goto Label_907; // 0x387 JumpB
	var_196_int = 0; // 0x388 PushI
	AddItem(var_190_bool, var_186_string, var_196_int); // 0x389 Func
	
Label_907:
	return 2; // 0x38b Return
}


func_649(var_25_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x289 PushV
	GetPosition(var_30_cvector); // 0x28a Func
	GetPosition(var_31_cvector); // 0x28c ObjFunc
	var_32_cvector = var_31_cvector - var_30_cvector; // 0x28e Sub2
	var_25_float = var_32_cvector | var_32_cvector; // 0x28f Or2
	return 6; // 0x290 Return
}


func_908(var_358_string, var_359_int, var_360_int, var_361_int)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_bool = 0; // 0x38c PushV
	var_366_bool = 0; var_367_int = 0; var_368_int = 0; // 0x38d PushV
	var_367_int = var_359_int; // 0x38e Mov
	var_368_int = var_360_int; // 0x38f Mov
	func_956(var_366_bool, var_367_int, var_368_int); // 0x390 NEW_2
	if(var_366_bool == 0) goto Label_922; // 0x392 JumpB
	irand(var_364_int, var_361_int); // 0x393 Func
	var_369_int = 0; // 0x395 PushI
	var_370_int = 1; // 0x396 PushI
	var_371_int = var_364_int + var_370_int; // 0x397 Add
	AddItem(var_365_bool, var_358_string, var_369_int, var_371_int); // 0x398 Func
	
Label_922:
	return 4; // 0x39a Return
}


func_1422(var_107_string, var_108_int)
{
	var_109_string = ""; var_110_string = ""; // 0x58e PushV
	var_110_string = "idle"; // 0x58f MovS
	var_111_int = var_108_int; // 0x590 Push
	if(var_111_int == 0) goto Label_1427; // 0x591 JumpB
	var_110_string = var_110_string + var_108_int; // 0x592 Add2
	
Label_1427:
	var_107_string = var_110_string; // 0x593 Mov
	return 2; // 0x594 Return
}


func_657(var_30_bool, var_31_object, var_32_string)
{
	var_36_bool = 0; var_37_bool = 0; // 0x291 PushV
	var_38_string = "HasProperty"; // 0x292 PushS
	var_39_int = 2; // 0x293 PushI
	var_40_bool = IsFuncExist(var_31_object, var_38_string, var_39_int); // 0x294 FuncExist
	var_41_bool = var_40_bool == 0; // 0x295 Not
	if(var_41_bool == 0) goto Label_665; // 0x296 JumpB
	var_30_bool = 0; // 0x297 MovB
	return 2; // 0x298 Return
	
Label_665:
	HasProperty(var_32_string, var_37_bool); // 0x299 ObjFunc
	var_30_bool = var_37_bool; // 0x29b Mov
	return 2; // 0x29c Return
}


func_1429(var_101_int)
{
	var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_bool = 0; // 0x595 PushV
	var_104_int = 0; // 0x596 MovI
	
Label_1431:
	var_106_string = "all"; // 0x597 PushS
	var_107_string = ""; var_108_int = 0; // 0x598 PushV
	var_108_int = var_104_int; // 0x599 Mov
	func_1422(var_107_string, var_108_int); // 0x59a NEW_2
	HasAnimation(var_105_bool, var_106_string, var_107_string); // 0x59c Func
	var_112_bool = var_105_bool == 0; // 0x59e Not
	if(var_112_bool == 0) goto Label_1441; // 0x59f JumpB
	goto Label_1444; // 0x5a0 Jump
	
Label_1444:
	var_101_int = var_104_int; // 0x5a4 Mov
	return 4; // 0x5a5 Return
	
Label_1441:
	var_113_int = 1; // 0x5a1 PushI
	var_104_int = var_104_int + var_113_int; // 0x5a2 Add2
	goto Label_1431; // 0x5a3 Jump
}


func_923(var_432_string, var_433_int, var_434_int, var_435_int, var_436_int)
{
	var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_bool = 0; // 0x39b PushV
	var_441_bool = 0; var_442_int = 0; var_443_int = 0; // 0x39c PushV
	var_442_int = var_433_int; // 0x39d Mov
	var_443_int = var_434_int; // 0x39e Mov
	func_956(var_441_bool, var_442_int, var_443_int); // 0x39f NEW_2
	if(var_441_bool == 0) goto Label_939; // 0x3a1 JumpB
	var_444_int = var_436_int - var_435_int; // 0x3a2 Sub
	var_445_int = 1; // 0x3a3 PushI
	var_446_int = var_444_int + var_445_int; // 0x3a4 Add
	irand(var_439_int, var_446_int); // 0x3a5 Func
	var_447_int = 0; // 0x3a7 PushI
	var_448_int = var_439_int + var_435_int; // 0x3a8 Add
	AddItem(var_440_bool, var_432_string, var_447_int, var_448_int); // 0x3a9 Func
	
Label_939:
	return 4; // 0x3ab Return
}


func_669(var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; // 0x29d PushV
	IsLoaded(var_75_bool); // 0x29e Func
	var_73_bool = var_75_bool; // 0x2a0 Mov
	return 2; // 0x2a1 Return
}


func_1405(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x57d PushV
	var_91_string = "branch"; // 0x57e PushS
	GetVariable(var_91_string, var_90_int); // 0x57f Func
	var_92_int = 0; // 0x581 PushI
	var_93_bool = var_90_int == var_92_int; // 0x582 Eq
	if(var_93_bool == 0) goto Label_1415; // 0x583 JumpB
	var_88_int = 1; // 0x584 MovI
	return 2; // 0x585 Return
	
Label_1415:
	var_94_int = 1; // 0x587 PushI
	var_95_bool = var_90_int == var_94_int; // 0x588 Eq
	if(var_95_bool == 0) goto Label_1420; // 0x589 JumpB
	var_88_int = 2; // 0x58a MovI
	return 2; // 0x58b Return
	
Label_1420:
	var_88_int = 3; // 0x58c MovI
	return 2; // 0x58d Return
}


func_674(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x2a2 PushV
	GetPosition(var_49_cvector); // 0x2a3 ObjFunc
	GetEyesHeight(var_48_float); // 0x2a5 ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x2a7 PushE
	var_57_float = var_57_float + var_48_float; // 0x2a8 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x2a9 PopE
	GetPosition(var_50_cvector); // 0x2aa Func
	GetEyesHeight(var_48_float); // 0x2ac Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ae PushE
	var_58_float = var_58_float + var_48_float; // 0x2af Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2b0 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x2b1 Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2b2 PushE
	var_59_float = 0; // 0x2b3 MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2b4 PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x2b5 Or
	var_61_float = sqrt(var_60_int); // 0x2b6 Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x2b7 Div2
	var_52_cvector = -var_51_cvector; // 0x2b8 Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x2b9 Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x2ba PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x2bb PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x2bc Xor2
	func_946(var_63_cvector, var_64_cvector); // 0x2bd NEW_2
	var_71_int = 25; // 0x2bf PushI
	var_72_float = var_63_cvector * var_71_int; // 0x2c0 Mult
	var_73_int = var_62_float + var_72_float; // 0x2c1 Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x2c2 PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x2c3 Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x2c4 Add2
	IsOverrideActive(var_55_bool); // 0x2c5 Func
	var_75_bool = var_55_bool; // 0x2c7 Push
	if(var_75_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_36_bool = 0; // 0x2c9 MovB
	return 18; // 0x2ca Return
	
Label_715:
	StopWorld(); // 0x2cb Func
	var_76_bool = 1; // 0x2cd PushB
	CameraTransit(var_54_cvector, var_52_cvector, var_76_bool); // 0x2ce Func
	var_77_float = GetByIndex(var_53_cvector, 0); // 0x2d0 PushE
	var_78_float = GetByIndex(var_53_cvector, 2); // 0x2d1 PushE
	Rotate(var_77_float, var_78_float); // 0x2d2 Func
	var_79_bool = 0; // 0x2d4 PushV
	func_1454(var_79_bool); // 0x2d5 NEW_2
	if(var_79_bool == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_737; // 0x2d8 Jump
	
Label_737:
	CameraWaitForPlayFinish(); // 0x2e1 Func
	ResumeWorld(); // 0x2e3 Func
	var_36_bool = 1; // 0x2e5 MovB
	return 18; // 0x2e6 Return
	
Label_729:
	var_80_string = "head"; // 0x2d9 PushS
	HasAnimationTrack(var_56_bool, var_80_string); // 0x2da Func
	var_81_bool = var_56_bool; // 0x2dc Push
	if(var_81_bool == 0) goto Label_737; // 0x2dd JumpB
	var_82_string = "head"; // 0x2de PushS
	LookAsyncCamera(var_82_string); // 0x2df Func
}


func_420()
{
	var_164_int = 0; var_165_int = 0; // 0x1a4 PushV
	var_166_int = 0; // 0x1a5 PushV
	func_961(var_166_int); // 0x1a6 NEW_2
	var_165_int = var_166_int; // 0x1a7 Mov
	var_167_int = 0; // 0x1a9 PushI
	ClearSubContainer(var_167_int); // 0x1aa Func
	var_168_bool = var_5_bool; // 0x1ac PushT
	if(var_168_bool == 0) goto Label_439; // 0x1ad JumpB
	var_169_bool = 0; var_170_object = Obj(); var_171_int = 0; var_172_int = 0; // 0x1ae PushV
	var_173_object = Obj(); // 0x1af PushV
	func_940(var_173_object); // 0x1b0 NEW_2
	var_170_object = var_173_object; // 0x1b1 Mov
	var_171_int = var_165_int; // 0x1b3 Mov
	var_172_int = 1; // 0x1b4 MovI
	func_970(var_169_bool, var_170_object, var_171_int, var_172_int); // 0x1b5 NEW_2
	
Label_439:
	var_455_int = var_6_int; // 0x1b7 PushT
	if(var_455_int == 0) goto Label_450; // 0x1b8 JumpB
	var_456_bool = 0; var_457_object = Obj(); var_458_int = 0; var_459_int = 0; // 0x1b9 PushV
	var_460_object = Obj(); // 0x1ba PushV
	func_940(var_460_object); // 0x1bb NEW_2
	var_457_object = var_460_object; // 0x1bc Mov
	var_458_int = var_165_int; // 0x1be Mov
	var_459_int = 0; // 0x1bf MovI
	func_970(var_456_bool, var_457_object, var_458_int, var_459_int); // 0x1c0 NEW_2
	
Label_450:
	var_461_int = var_7_int; // 0x1c2 PushT
	if(var_461_int == 0) goto Label_461; // 0x1c3 JumpB
	var_462_bool = 0; var_463_object = Obj(); var_464_int = 0; var_465_int = 0; // 0x1c4 PushV
	var_466_object = Obj(); // 0x1c5 PushV
	func_940(var_466_object); // 0x1c6 NEW_2
	var_463_object = var_466_object; // 0x1c7 Mov
	var_464_int = var_165_int; // 0x1c9 Mov
	var_465_int = 3; // 0x1ca MovI
	func_970(var_462_bool, var_463_object, var_464_int, var_465_int); // 0x1cb NEW_2
	
Label_461:
	var_467_bool = var_8_bool; // 0x1cd PushT
	if(var_467_bool == 0) goto Label_472; // 0x1ce JumpB
	var_468_bool = 0; var_469_object = Obj(); var_470_int = 0; var_471_int = 0; // 0x1cf PushV
	var_472_object = Obj(); // 0x1d0 PushV
	func_940(var_472_object); // 0x1d1 NEW_2
	var_469_object = var_472_object; // 0x1d2 Mov
	var_470_int = var_165_int; // 0x1d4 Mov
	var_471_int = 2; // 0x1d5 MovI
	func_970(var_468_bool, var_469_object, var_470_int, var_471_int); // 0x1d6 NEW_2
	
Label_472:
	var_473_bool = var_9_bool; // 0x1d8 PushT
	if(var_473_bool == 0) goto Label_483; // 0x1d9 JumpB
	var_474_bool = 0; var_475_object = Obj(); var_476_int = 0; var_477_int = 0; // 0x1da PushV
	var_478_object = Obj(); // 0x1db PushV
	func_940(var_478_object); // 0x1dc NEW_2
	var_475_object = var_478_object; // 0x1dd Mov
	var_476_int = var_165_int; // 0x1df Mov
	var_477_int = 4; // 0x1e0 MovI
	func_970(var_474_bool, var_475_object, var_476_int, var_477_int); // 0x1e1 NEW_2
	
Label_483:
	return 2; // 0x1e3 Return
}


func_549(var_2_object, var_3_object)
{
	func_644(); // 0x226 NEW_2
	var_18_int = 10; // 0x228 PushI
	KillTimer(var_18_int); // 0x229 Func
	var_19_object = var_2_object; // 0x22b PushT
	if(var_19_object == 0) goto Label_561; // 0x22c JumpB
	var_20_string = "head"; // 0x22d PushS
	UnlookAsync(var_20_string); // 0x22e Func
	var_2_object = 0; // 0x230 TMovB
	
Label_561:
	var_3_object = 1; // 0x231 TMovB
	return 0; // 0x232 Return
}


func_1446(var_85_int)
{
	var_85_int = 531557; // 0x5a6 MovI
	return 0; // 0x5a7 Return
}


func_1448(var_84_int)
{
	var_84_int = 531556; // 0x5a8 MovI
	return 0; // 0x5a9 Return
}


func_40(var_0_bool, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x28 PushV
	var_0_bool = var_26_object; // 0x29 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x2a PushV
	var_37_object = var_26_object; // 0x2b Mov
	var_38_float = 70.0; // 0x2c MovF
	func_674(var_37_object, var_38_float); // 0x2d NEW_2
	var_83_bool = var_36_bool == 0; // 0x2f Not
	if(var_83_bool == 0) goto Label_51; // 0x30 JumpB
	var_25_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_32_object); // 0x33 Func
	var_84_int = 0; // 0x35 PushV
	func_1448(var_84_int); // 0x36 NEW_2
	SetNPCName(var_84_int); // 0x38 ObjFunc
	var_85_int = 0; // 0x3a PushV
	func_1446(var_85_int); // 0x3b NEW_2
	SetNPCDescription(var_85_int); // 0x3d ObjFunc
	var_86_string = ""; // 0x3f PushV
	func_1450(var_86_string); // 0x40 NEW_2
	SetPhoto(var_86_string); // 0x42 ObjFunc
	var_87_string = ""; // 0x44 PushV
	func_1452(var_87_string); // 0x45 NEW_2
	SetPhoto2(var_87_string); // 0x47 ObjFunc
	var_88_int = 0; // 0x49 PushV
	func_1405(var_88_int); // 0x4a NEW_2
	SetPlayerName(var_88_int); // 0x4c ObjFunc
	var_34_int = -1; // 0x4e MovI
	IsOverrideActive(var_33_bool); // 0x4f Func
	var_96_bool = var_33_bool; // 0x51 Push
	if(var_96_bool == 0) goto Label_85; // 0x52 JumpB
	var_25_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_32_object); // 0x55 Func
	var_97_object = Obj(); var_98_object = Obj(); // 0x57 PushV
	var_97_object = var_26_object; // 0x58 Mov
	var_98_object = var_32_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_35_bool); // 0x5e ObjFunc
	
Label_96:
	var_146_bool = var_35_bool == 0; // 0x60 Not
	if(var_146_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_35_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_147_object = Obj(); // 0x67 PushV
	var_147_object = var_26_object; // 0x68 Mov
	func_743(); // 0x69 NEW_2
	StopDialog(var_32_object); // 0x6b Func
	GetReturnValue(var_34_int); // 0x6d ObjFunc
	var_25_int = var_34_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_1450(var_86_string)
{
	var_86_string = "ui/NPC_Citizen1.png"; // 0x5aa MovS
	return 0; // 0x5ab Return
}


func_1452(var_87_string)
{
	var_87_string = "ui/NPC_Citizen1_b.png"; // 0x5ac MovS
	return 0; // 0x5ad Return
}


func_172(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0xad PushV
	func_1454(var_105_bool); // 0xae NEW_2
	var_106_bool = var_105_bool == 0; // 0xb0 Not
	if(var_106_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_107_bool = var_104_string == var_2_object; // 0xb3 Eq
	if(var_107_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_108_string = ""; var_109_bool = 0; // 0xb6 PushV
	var_108_string = var_104_string; // 0xb7 Mov
	var_110_string = ""; // 0xb8 PushS
	var_111_bool = var_104_string == var_110_string; // 0xb9 Eq
	if(var_111_bool == 0) goto Label_189; // 0xba JumpB
	var_109_bool = 0; // 0xbb MovB
	goto Label_190; // 0xbc Jump
	
Label_190:
	func_838(var_108_string, var_109_bool); // 0xbe NEW_2
	var_2_object = var_104_string; // 0xc0 TMov
	return 0; // 0xc1 Return
	
Label_189:
	var_109_bool = 1; // 0xbd MovB
}


func_1454(var_79_bool)
{
	var_79_bool = 0; // 0x5ae MovB
	return 0; // 0x5af Return
}


func_940(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x3ac PushV
	self(var_35_object); // 0x3ad Func
	var_33_object = var_35_object; // 0x3af Mov
	return 2; // 0x3b0 Return
}


func_1456(var_19_float)
{
	var_21_float = 0; var_22_float = 0; // 0x5b0 PushV
	var_23_string = "reputation"; // 0x5b1 PushS
	GetProperty(var_23_string, var_22_float); // 0x5b2 ObjFunc
	var_19_float = var_22_float; // 0x5b4 Mov
	return 2; // 0x5b5 Return
}


func_817()
{
	var_519_bool = 1; // 0x332 PushB
	CameraSwitchToNormal(var_519_bool); // 0x333 Func
	return 0; // 0x335 Return
}


func_946(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x3b2 PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x3b3 Or
	var_67_float = sqrt(var_68_int); // 0x3b4 Sqrt2
	var_69_float = 0.0; // 0x3b5 PushF
	var_70_bool = var_67_float < var_69_float; // 0x3b6 LT
	if(var_70_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x3b8 MovV
	return 2; // 0x3b9 Return
	
Label_954:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x3ba Div2
	return 2; // 0x3bb Return
}


func_563()
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_bool = 0; var_90_float = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_bool = 0; // 0x233 PushV
	WaitForAnimEnd(); // 0x234 Func
	var_99_bool = 0; // 0x236 PushV
	func_669(var_99_bool); // 0x237 NEW_2
	var_100_bool = var_99_bool == 0; // 0x239 Not
	if(var_100_bool == 0) goto Label_572; // 0x23a JumpB
	return 14; // 0x23b Return
	
Label_572:
	var_101_int = 0; // 0x23c PushV
	func_1429(var_101_int); // 0x23d NEW_2
	var_92_int = var_101_int; // 0x23e Mov
	var_93_int = 0; // 0x240 MovI
	
Label_577:
	var_114_bool = 0; // 0x241 PushV
	var_114_bool = 0; // 0x242 MovB
	var_115_int = 5; // 0x243 PushI
	var_116_bool = var_93_int < var_115_int; // 0x244 LT
	if(var_116_bool == 0) goto Label_587; // 0x245 JumpB
	var_117_bool = 0; // 0x246 PushV
	func_669(var_117_bool); // 0x247 NEW_2
	if(var_117_bool == 0) goto Label_587; // 0x249 JumpB
	var_114_bool = 1; // 0x24a MovB
	
Label_587:
	if(var_114_bool == 0) goto Label_639; // 0x24b JumpB
	var_118_int = 3; // 0x24c PushI
	irand(var_94_int, var_118_int); // 0x24d Func
	var_119_int = 0; // 0x24f PushI
	var_120_bool = var_94_int == var_119_int; // 0x250 Eq
	if(var_120_bool == 0) goto Label_611; // 0x251 JumpB
	var_121_int = var_92_int; // 0x252 Push
	if(var_121_int == 0) goto Label_610; // 0x253 JumpB
	irand(var_95_int, var_92_int); // 0x254 Func
	var_122_string = "all"; // 0x256 PushS
	var_123_string = ""; var_124_int = 0; // 0x257 PushV
	var_124_int = var_95_int; // 0x258 Mov
	func_1422(var_123_string, var_124_int); // 0x259 NEW_2
	PlayAnimation(var_122_string, var_123_string); // 0x25b Func
	WaitForAnimEnd(var_96_bool); // 0x25d Func
	var_125_bool = var_96_bool == 0; // 0x25f Not
	if(var_125_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_639; // 0x261 Jump
	
Label_639:
	ResetAAS(); // 0x27f Func
	return 14; // 0x281 Return
	
Label_610:
	goto Label_628; // 0x262 Jump
	
Label_628:
	var_126_bool = 0; // 0x274 PushV
	func_642(var_126_bool); // 0x275 NEW_2
	var_127_bool = var_126_bool == 0; // 0x277 Not
	if(var_127_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_639; // 0x279 Jump
	
Label_634:
	ResetAAS(); // 0x27a Func
	var_128_int = 1; // 0x27c PushI
	var_93_int = var_93_int + var_128_int; // 0x27d Add2
	goto Label_577; // 0x27e Jump
	
Label_611:
	var_129_int = 1; // 0x263 PushI
	var_130_bool = var_94_int == var_129_int; // 0x264 Eq
	if(var_130_bool == 0) goto Label_625; // 0x265 JumpB
	var_131_int = 4; // 0x266 PushI
	rand(var_97_float, var_131_int); // 0x267 Func
	var_132_int = 1; // 0x269 PushI
	var_133_int = var_97_float + var_132_int; // 0x26a Add
	Sleep(var_133_int, var_98_bool); // 0x26b Func
	var_134_bool = var_98_bool == 0; // 0x26d Not
	if(var_134_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_639; // 0x26f Jump
	
Label_624:
	goto Label_628; // 0x270 Jump
	
Label_625:
	var_135_int = var_93_int; // 0x271 Push
	if(var_135_int == 0) goto Label_628; // 0x272 JumpB
	goto Label_639; // 0x273 Jump
}


func_822(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x336 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x337 Func
	var_137_bool = var_134_bool; // 0x339 Push
	if(var_137_bool == 0) goto Label_833; // 0x33a JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x33b Func
	var_138_bool = 0; // 0x33d PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x33e Func
	goto Label_837; // 0x340 Jump
	
Label_837:
	return 6; // 0x345 Return
	
Label_833:
	var_139_string = "Can't find lsh animation : "; // 0x341 PushS
	var_140_int = var_139_string + var_130_string; // 0x342 Add
	Trace(var_140_int); // 0x343 Func
}


func_956(var_191_bool, var_192_int, var_193_int)
{
	var_194_int = 0; var_195_int = 0; // 0x3bc PushV
	irand(var_195_int, var_193_int); // 0x3bd Func
	var_191_bool = var_195_int < var_192_int; // 0x3bf LT2
	return 2; // 0x3c0 Return
}


func_961(var_155_int)
{
	var_156_float = 0; var_157_float = 0; // 0x3c1 PushV
	GetGameTime(var_157_float); // 0x3c2 Func
	var_158_int = 1; // 0x3c4 PushI
	var_159_int = 0; // 0x3c5 PushV
	var_160_int = 24; // 0x3c6 PushI
	var_159_int = var_157_float / var_157_float; // 0x3c7 Div2
	var_155_int = var_158_int + var_159_int; // 0x3c8 Add2
	return 2; // 0x3c9 Return
}


func_838(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x346 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x347 Func
	var_118_bool = var_115_bool; // 0x349 Push
	if(var_118_bool == 0) goto Label_848; // 0x34a JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x34b Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x34d Func
	goto Label_852; // 0x34f Jump
	
Label_852:
	return 6; // 0x354 Return
	
Label_848:
	var_119_string = "Can't find lsh animation : "; // 0x350 PushS
	var_120_int = var_119_string + var_108_string; // 0x351 Add
	Trace(var_120_int); // 0x352 Func
}


func_970(var_169_bool, var_170_object, var_171_int, var_172_int)
{
	var_176_int = 0; // 0x3cb PushI
	var_177_bool = var_172_int == var_176_int; // 0x3cc Eq
	if(var_177_bool == 0) goto Label_982; // 0x3cd JumpB
	var_178_bool = 0; var_179_object = Obj(); var_180_int = 0; // 0x3ce PushV
	var_179_object = var_170_object; // 0x3cf Mov
	var_180_int = var_171_int; // 0x3d0 Mov
	func_1021(var_180_int); // 0x3d1 NEW_2
	var_169_bool = var_178_bool; // 0x3d2 Mov
	return 0; // 0x3d4 Return
	
Label_982:
	var_181_int = 1; // 0x3d6 PushI
	var_182_bool = var_172_int == var_181_int; // 0x3d7 Eq
	if(var_182_bool == 0) goto Label_993; // 0x3d8 JumpB
	var_183_bool = 0; var_184_object = Obj(); var_185_int = 0; // 0x3d9 PushV
	var_184_object = var_170_object; // 0x3da Mov
	var_185_int = var_171_int; // 0x3db Mov
	func_1024(var_184_object, var_185_int); // 0x3dc NEW_2
	var_169_bool = var_183_bool; // 0x3dd Mov
	return 0; // 0x3df Return
	
Label_993:
	var_242_int = 2; // 0x3e1 PushI
	var_243_bool = var_172_int == var_242_int; // 0x3e2 Eq
	if(var_243_bool == 0) goto Label_1004; // 0x3e3 JumpB
	var_244_bool = 0; var_245_object = Obj(); var_246_int = 0; // 0x3e4 PushV
	var_245_object = var_170_object; // 0x3e5 Mov
	var_246_int = var_171_int; // 0x3e6 Mov
	func_1117(var_244_bool, var_245_object, var_246_int); // 0x3e7 NEW_2
	var_169_bool = var_244_bool; // 0x3e8 Mov
	return 0; // 0x3ea Return
	
Label_1004:
	var_337_int = 3; // 0x3ec PushI
	var_338_bool = var_172_int == var_337_int; // 0x3ed Eq
	if(var_338_bool == 0) goto Label_1014; // 0x3ee JumpB
	var_339_bool = 0; var_340_object = Obj(); var_341_int = 0; // 0x3ef PushV
	var_340_object = var_170_object; // 0x3f0 Mov
	var_341_int = var_171_int; // 0x3f1 Mov
	func_1238(var_340_object, var_341_int); // 0x3f2 NEW_2
	var_169_bool = var_339_bool; // 0x3f3 Mov
	return 0; // 0x3f5 Return
	
Label_1014:
	var_422_bool = 0; var_423_object = Obj(); var_424_int = 0; // 0x3f6 PushV
	var_423_object = var_170_object; // 0x3f7 Mov
	var_424_int = var_171_int; // 0x3f8 Mov
	func_1371(var_423_object, var_424_int); // 0x3f9 NEW_2
	var_169_bool = var_422_bool; // 0x3fa Mov
	return 0; // 0x3fc Return
}


func_333(var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_object)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_float = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_float = 0; // 0x14d PushV
	var_30_bool = 0; var_31_object = Obj(); var_32_string = ""; // 0x14e PushV
	var_33_object = Obj(); // 0x14f PushV
	func_940(var_33_object); // 0x150 NEW_2
	var_31_object = var_33_object; // 0x151 Mov
	var_32_string = "clothes"; // 0x153 MovS
	func_657(var_30_bool, var_31_object, var_32_string); // 0x154 NEW_2
	if(var_30_bool == 0) goto Label_346; // 0x156 JumpB
	var_42_string = "clothes"; // 0x157 PushS
	GetProperty(var_42_string, var_24_int); // 0x158 Func
	
Label_346:
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x15a PushV
	var_46_object = Obj(); // 0x15b PushV
	func_940(var_46_object); // 0x15c NEW_2
	var_44_object = var_46_object; // 0x15d Mov
	var_45_string = "weapon"; // 0x15f MovS
	func_657(var_43_bool, var_44_object, var_45_string); // 0x160 NEW_2
	if(var_43_bool == 0) goto Label_358; // 0x162 JumpB
	var_47_string = "weapon"; // 0x163 PushS
	GetProperty(var_47_string, var_25_int); // 0x164 Func
	
Label_358:
	var_48_bool = 0; var_49_object = Obj(); var_50_string = ""; // 0x166 PushV
	var_51_object = Obj(); // 0x167 PushV
	func_940(var_51_object); // 0x168 NEW_2
	var_49_object = var_51_object; // 0x169 Mov
	var_50_string = "food"; // 0x16b MovS
	func_657(var_48_bool, var_49_object, var_50_string); // 0x16c NEW_2
	if(var_48_bool == 0) goto Label_370; // 0x16e JumpB
	var_52_string = "food"; // 0x16f PushS
	GetProperty(var_52_string, var_26_int); // 0x170 Func
	
Label_370:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x172 PushV
	var_56_object = Obj(); // 0x173 PushV
	func_940(var_56_object); // 0x174 NEW_2
	var_54_object = var_56_object; // 0x175 Mov
	var_55_string = "medcine"; // 0x177 MovS
	func_657(var_53_bool, var_54_object, var_55_string); // 0x178 NEW_2
	if(var_53_bool == 0) goto Label_382; // 0x17a JumpB
	var_57_string = "medcine"; // 0x17b PushS
	GetProperty(var_57_string, var_27_int); // 0x17c Func
	
Label_382:
	var_58_bool = 0; var_59_object = Obj(); var_60_string = ""; // 0x17e PushV
	var_61_object = Obj(); // 0x17f PushV
	func_940(var_61_object); // 0x180 NEW_2
	var_59_object = var_61_object; // 0x181 Mov
	var_60_string = "other"; // 0x183 MovS
	func_657(var_58_bool, var_59_object, var_60_string); // 0x184 NEW_2
	if(var_58_bool == 0) goto Label_394; // 0x186 JumpB
	var_62_string = "other"; // 0x187 PushS
	GetProperty(var_62_string, var_28_int); // 0x188 Func
	
Label_394:
	var_63_bool = 0; var_64_object = Obj(); var_65_string = ""; // 0x18a PushV
	var_66_object = Obj(); // 0x18b PushV
	func_940(var_66_object); // 0x18c NEW_2
	var_64_object = var_66_object; // 0x18d Mov
	var_65_string = "rep_threshold"; // 0x18f MovS
	func_657(var_63_bool, var_64_object, var_65_string); // 0x190 NEW_2
	if(var_63_bool == 0) goto Label_407; // 0x192 JumpB
	var_67_string = "rep_threshold"; // 0x193 PushS
	GetProperty(var_67_string, var_29_float); // 0x194 Func
	goto Label_408; // 0x196 Jump
	
Label_408:
	var_68_int = 0; // 0x198 PushI
	var_5_bool = var_24_int != var_68_int; // 0x199 Neq2
	var_69_int = 0; // 0x19a PushI
	var_6_int = var_25_int != var_69_int; // 0x19b Neq2
	var_70_int = 0; // 0x19c PushI
	var_7_int = var_26_int != var_70_int; // 0x19d Neq2
	var_71_int = 0; // 0x19e PushI
	var_8_bool = var_27_int != var_71_int; // 0x19f Neq2
	var_72_int = 0; // 0x1a0 PushI
	var_9_bool = var_28_int != var_72_int; // 0x1a1 Neq2
	var_10_object = var_29_float; // 0x1a2 TMov
	return 12; // 0x1a3 Return
	
Label_407:
	var_29_float = 0.33; // 0x197 MovF
}


func_853(var_35_object)
{
	var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); // 0x355 PushV
	GetEyesHeight(var_38_float); // 0x356 ObjFunc
	var_39_cvector = CVector(0.0, 0.0, 0.0); // 0x358 MovV
	var_40_float = GetByIndex(var_39_cvector, 1); // 0x359 PushE
	var_40_float = var_38_float; // 0x35a Mov
	SetByIndex(var_39_cvector, 1) = var_40_float; // 0x35b PopE
	var_41_string = "head"; // 0x35c PushS
	LookAsync(var_35_object, var_41_string, var_39_cvector); // 0x35d Func
	return 4; // 0x35f Return
}


func_1238(var_339_bool, var_341_int)
{
	var_342_bool = 0; var_343_int = 0; var_344_int = 0; var_345_bool = 0; var_346_int = 0; var_347_int = 0; // 0x4d6 PushV
	var_348_int = 3; // 0x4d7 PushI
	var_349_bool = var_341_int < var_348_int; // 0x4d8 LT
	if(var_349_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_347_int = 2; // 0x4da MovI
	goto Label_1260; // 0x4db Jump
	
Label_1260:
	var_350_string = ""; var_351_int = 0; var_352_int = 0; // 0x4ec PushV
	var_350_string = "lemon"; // 0x4ed MovS
	var_351_int = 1; // 0x4ee MovI
	var_352_int = var_347_int; // 0x4ef Mov
	func_897(var_350_string, var_351_int, var_352_int); // 0x4f0 NEW_2
	var_353_string = ""; var_354_int = 0; var_355_int = 0; // 0x4f2 PushV
	var_353_string = "rusk"; // 0x4f3 MovS
	var_354_int = 1; // 0x4f4 MovI
	var_355_int = var_347_int; // 0x4f5 Mov
	func_897(var_353_string, var_354_int, var_355_int); // 0x4f6 NEW_2
	var_356_int = 2; // 0x4f8 PushI
	var_357_bool = var_341_int == var_356_int; // 0x4f9 Eq
	if(var_357_bool == 0) goto Label_1297; // 0x4fa JumpB
	var_358_string = ""; var_359_int = 0; var_360_int = 0; var_361_int = 0; // 0x4fb PushV
	var_358_string = "dried_fish"; // 0x4fc MovS
	var_359_int = 1; // 0x4fd MovI
	var_360_int = 1; // 0x4fe MovI
	var_361_int = 2; // 0x4ff MovI
	func_908(var_358_string, var_359_int, var_360_int, var_361_int); // 0x500 NEW_2
	var_372_string = ""; var_373_int = 0; var_374_int = 0; var_375_int = 0; // 0x502 PushV
	var_372_string = "smoked_meat"; // 0x503 MovS
	var_373_int = 1; // 0x504 MovI
	var_374_int = 1; // 0x505 MovI
	var_375_int = 2; // 0x506 MovI
	func_908(var_372_string, var_373_int, var_374_int, var_375_int); // 0x507 NEW_2
	var_376_string = ""; var_377_int = 0; var_378_int = 0; var_379_int = 0; // 0x509 PushV
	var_376_string = "bread"; // 0x50a MovS
	var_377_int = 1; // 0x50b MovI
	var_378_int = 1; // 0x50c MovI
	var_379_int = 2; // 0x50d MovI
	func_908(var_376_string, var_377_int, var_378_int, var_379_int); // 0x50e NEW_2
	goto Label_1315; // 0x510 Jump
	
Label_1315:
	var_380_string = ""; var_381_int = 0; var_382_int = 0; // 0x523 PushV
	var_380_string = "egg"; // 0x524 MovS
	var_381_int = 1; // 0x525 MovI
	var_382_int = var_347_int; // 0x526 Mov
	func_897(var_380_string, var_381_int, var_382_int); // 0x527 NEW_2
	var_383_string = ""; var_384_int = 0; var_385_int = 0; // 0x529 PushV
	var_383_string = "vegetables"; // 0x52a MovS
	var_384_int = 1; // 0x52b MovI
	var_385_int = var_347_int; // 0x52c Mov
	func_897(var_383_string, var_384_int, var_385_int); // 0x52d NEW_2
	var_386_string = ""; var_387_int = 0; var_388_int = 0; // 0x52f PushV
	var_386_string = "milk"; // 0x530 MovS
	var_387_int = 1; // 0x531 MovI
	var_388_int = var_347_int; // 0x532 Mov
	func_897(var_386_string, var_387_int, var_388_int); // 0x533 NEW_2
	var_389_string = ""; var_390_int = 0; var_391_int = 0; // 0x535 PushV
	var_389_string = "dried_meat"; // 0x536 MovS
	var_390_int = 1; // 0x537 MovI
	var_391_int = var_347_int; // 0x538 Mov
	func_897(var_389_string, var_390_int, var_391_int); // 0x539 NEW_2
	var_392_string = ""; var_393_int = 0; var_394_int = 0; // 0x53b PushV
	var_392_string = "fresh_fish"; // 0x53c MovS
	var_393_int = 1; // 0x53d MovI
	var_394_int = var_347_int; // 0x53e Mov
	func_897(var_392_string, var_393_int, var_394_int); // 0x53f NEW_2
	var_395_string = ""; var_396_int = 0; var_397_int = 0; // 0x541 PushV
	var_395_string = "fresh_meat"; // 0x542 MovS
	var_396_int = 1; // 0x543 MovI
	var_397_int = var_347_int; // 0x544 Mov
	func_897(var_395_string, var_396_int, var_397_int); // 0x545 NEW_2
	var_398_string = ""; var_399_int = 0; var_400_int = 0; // 0x547 PushV
	var_398_string = "funduk"; // 0x548 MovS
	var_399_int = 1; // 0x549 MovI
	var_400_int = 20; // 0x54a MovI
	func_897(var_398_string, var_399_int, var_400_int); // 0x54b NEW_2
	var_401_string = ""; var_402_int = 0; var_403_int = 0; // 0x54d PushV
	var_401_string = "peanut"; // 0x54e MovS
	var_402_int = 1; // 0x54f MovI
	var_403_int = 20; // 0x550 MovI
	func_897(var_401_string, var_402_int, var_403_int); // 0x551 NEW_2
	var_404_string = ""; var_405_int = 0; var_406_int = 0; // 0x553 PushV
	var_404_string = "walnut"; // 0x554 MovS
	var_405_int = 1; // 0x555 MovI
	var_406_int = 20; // 0x556 MovI
	func_897(var_404_string, var_405_int, var_406_int); // 0x557 NEW_2
	var_339_bool = 1; // 0x559 MovB
	return 6; // 0x55a Return
	
Label_1297:
	var_407_string = ""; var_408_int = 0; var_409_int = 0; // 0x511 PushV
	var_407_string = "dried_fish"; // 0x512 MovS
	var_408_int = 1; // 0x513 MovI
	var_409_int = var_347_int; // 0x514 Mov
	func_897(var_407_string, var_408_int, var_409_int); // 0x515 NEW_2
	var_410_string = ""; var_411_int = 0; var_412_int = 0; // 0x517 PushV
	var_410_string = "smoked_meat"; // 0x518 MovS
	var_411_int = 1; // 0x519 MovI
	var_412_int = var_347_int; // 0x51a Mov
	func_897(var_410_string, var_411_int, var_412_int); // 0x51b NEW_2
	var_413_string = ""; var_414_int = 0; var_415_int = 0; // 0x51d PushV
	var_413_string = "bread"; // 0x51e MovS
	var_414_int = 1; // 0x51f MovI
	var_415_int = var_347_int; // 0x520 Mov
	func_897(var_413_string, var_414_int, var_415_int); // 0x521 NEW_2
	
Label_1244:
	var_416_int = 5; // 0x4dc PushI
	var_417_bool = var_341_int < var_416_int; // 0x4dd LT
	if(var_417_bool == 0) goto Label_1249; // 0x4de JumpB
	var_347_int = 3; // 0x4df MovI
	goto Label_1260; // 0x4e0 Jump
	
Label_1249:
	var_418_int = 7; // 0x4e1 PushI
	var_419_bool = var_341_int < var_418_int; // 0x4e2 LT
	if(var_419_bool == 0) goto Label_1254; // 0x4e3 JumpB
	var_347_int = 3; // 0x4e4 MovI
	goto Label_1260; // 0x4e5 Jump
	
Label_1254:
	var_420_int = 7; // 0x4e6 PushI
	var_421_bool = var_341_int < var_420_int; // 0x4e7 LT
	if(var_421_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_347_int = 4; // 0x4e9 MovI
	goto Label_1260; // 0x4ea Jump
	
Label_1259:
	var_347_int = 5; // 0x4eb MovI
}


func_1371(var_422_bool, var_424_int)
{
	var_425_string = ""; var_426_int = 0; var_427_int = 0; // 0x55c PushV
	var_425_string = "hook"; // 0x55d MovS
	var_426_int = 1; // 0x55e MovI
	var_427_int = 5; // 0x55f MovI
	func_897(var_425_string, var_426_int, var_427_int); // 0x560 NEW_2
	var_428_string = ""; var_429_int = 0; var_430_int = 0; var_431_int = 0; // 0x562 PushV
	var_428_string = "needle"; // 0x563 MovS
	var_429_int = 2; // 0x564 MovI
	var_430_int = 3; // 0x565 MovI
	var_431_int = 3; // 0x566 MovI
	func_908(var_428_string, var_429_int, var_430_int, var_431_int); // 0x567 NEW_2
	var_432_string = ""; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0; // 0x569 PushV
	var_432_string = "kerosene"; // 0x56a MovS
	var_433_int = 9; // 0x56b MovI
	var_434_int = 10; // 0x56c MovI
	var_435_int = 4; // 0x56d MovI
	var_436_int = 20; // 0x56e MovI
	func_923(var_432_string, var_433_int, var_434_int, var_435_int, var_436_int); // 0x56f NEW_2
	var_449_int = 9; // 0x571 PushI
	var_450_bool = var_424_int >= var_449_int; // 0x572 GE
	if(var_450_bool == 0) goto Label_1403; // 0x573 JumpB
	var_451_string = ""; var_452_int = 0; var_453_int = 0; var_454_int = 0; // 0x574 PushV
	var_451_string = "rifle_ammo"; // 0x575 MovS
	var_452_int = 1; // 0x576 MovI
	var_453_int = 2; // 0x577 MovI
	var_454_int = 5; // 0x578 MovI
	func_908(var_451_string, var_452_int, var_453_int, var_454_int); // 0x579 NEW_2
	
Label_1403:
	var_422_bool = 1; // 0x57b MovB
	return 0; // 0x57c Return
}


func_1117(var_244_bool, var_245_object, var_246_int)
{
	var_247_bool = 0; var_248_bool = 0; // 0x45d PushV
	var_249_object = Obj(); var_250_string = ""; var_251_int = 0; var_252_int = 0; var_253_int = 0; // 0x45e PushV
	var_249_object = var_245_object; // 0x45f Mov
	var_250_string = "tourniquet"; // 0x460 MovS
	var_251_int = 1; // 0x461 MovI
	var_252_int = 2; // 0x462 MovI
	var_253_int = 10; // 0x463 MovI
	func_882(var_250_string, var_251_int, var_252_int, var_253_int); // 0x464 NEW_2
	var_264_object = Obj(); var_265_string = ""; var_266_int = 0; var_267_int = 0; var_268_int = 0; // 0x466 PushV
	var_264_object = var_245_object; // 0x467 Mov
	var_265_string = "alpha_pills"; // 0x468 MovS
	var_266_int = 1; // 0x469 MovI
	var_267_int = 1; // 0x46a MovI
	var_268_int = 10; // 0x46b MovI
	func_882(var_265_string, var_266_int, var_267_int, var_268_int); // 0x46c NEW_2
	var_269_object = Obj(); var_270_string = ""; var_271_int = 0; var_272_int = 0; var_273_int = 0; // 0x46e PushV
	var_269_object = var_245_object; // 0x46f Mov
	var_270_string = "meradorm"; // 0x470 MovS
	var_271_int = 1; // 0x471 MovI
	var_272_int = 1; // 0x472 MovI
	var_273_int = 2; // 0x473 MovI
	func_882(var_270_string, var_271_int, var_272_int, var_273_int); // 0x474 NEW_2
	var_274_int = 3; // 0x476 PushI
	var_275_bool = var_246_int >= var_274_int; // 0x477 GE
	if(var_275_bool == 0) goto Label_1153; // 0x478 JumpB
	var_276_object = Obj(); var_277_string = ""; var_278_int = 0; var_279_int = 0; var_280_int = 0; // 0x479 PushV
	var_276_object = var_245_object; // 0x47a Mov
	var_277_string = "neomicin"; // 0x47b MovS
	var_278_int = 1; // 0x47c MovI
	var_279_int = 1; // 0x47d MovI
	var_280_int = 2; // 0x47e MovI
	func_882(var_277_string, var_278_int, var_279_int, var_280_int); // 0x47f NEW_2
	
Label_1153:
	var_281_int = 4; // 0x481 PushI
	var_282_bool = var_246_int >= var_281_int; // 0x482 GE
	if(var_282_bool == 0) goto Label_1179; // 0x483 JumpB
	var_283_object = Obj(); var_284_string = ""; var_285_int = 0; var_286_int = 0; // 0x484 PushV
	var_283_object = var_245_object; // 0x485 Mov
	var_284_string = "novocaine"; // 0x486 MovS
	var_285_int = 1; // 0x487 MovI
	var_286_int = 2; // 0x488 MovI
	func_871(var_284_string, var_285_int, var_286_int); // 0x489 NEW_2
	var_293_object = Obj(); var_294_string = ""; var_295_int = 0; var_296_int = 0; var_297_int = 0; // 0x48b PushV
	var_293_object = var_245_object; // 0x48c Mov
	var_294_string = "gamma_pills"; // 0x48d MovS
	var_295_int = 1; // 0x48e MovI
	var_296_int = 2; // 0x48f MovI
	var_297_int = 2; // 0x490 MovI
	func_882(var_294_string, var_295_int, var_296_int, var_297_int); // 0x491 NEW_2
	var_298_object = Obj(); var_299_string = ""; var_300_int = 0; var_301_int = 0; var_302_int = 0; // 0x493 PushV
	var_298_object = var_245_object; // 0x494 Mov
	var_299_string = "beta_pills"; // 0x495 MovS
	var_300_int = 1; // 0x496 MovI
	var_301_int = 2; // 0x497 MovI
	var_302_int = 2; // 0x498 MovI
	func_882(var_299_string, var_300_int, var_301_int, var_302_int); // 0x499 NEW_2
	
Label_1179:
	var_303_int = 6; // 0x49b PushI
	var_304_bool = var_246_int >= var_303_int; // 0x49c GE
	if(var_304_bool == 0) goto Label_1211; // 0x49d JumpB
	var_305_object = Obj(); var_306_string = ""; var_307_int = 0; var_308_int = 0; // 0x49e PushV
	var_305_object = var_245_object; // 0x49f Mov
	var_306_string = "packet"; // 0x4a0 MovS
	var_307_int = 1; // 0x4a1 MovI
	var_308_int = 4; // 0x4a2 MovI
	func_871(var_306_string, var_307_int, var_308_int); // 0x4a3 NEW_2
	var_309_object = Obj(); var_310_string = ""; var_311_int = 0; var_312_int = 0; // 0x4a5 PushV
	var_309_object = var_245_object; // 0x4a6 Mov
	var_310_string = "morfin"; // 0x4a7 MovS
	var_311_int = 1; // 0x4a8 MovI
	var_312_int = 2; // 0x4a9 MovI
	func_871(var_310_string, var_311_int, var_312_int); // 0x4aa NEW_2
	var_313_object = Obj(); var_314_string = ""; var_315_int = 0; var_316_int = 0; // 0x4ac PushV
	var_313_object = var_245_object; // 0x4ad Mov
	var_314_string = "Scalpel"; // 0x4ae MovS
	var_315_int = 1; // 0x4af MovI
	var_316_int = 8; // 0x4b0 MovI
	func_871(var_314_string, var_315_int, var_316_int); // 0x4b1 NEW_2
	var_317_object = Obj(); var_318_string = ""; var_319_int = 0; var_320_int = 0; var_321_int = 0; // 0x4b3 PushV
	var_317_object = var_245_object; // 0x4b4 Mov
	var_318_string = "monomicin"; // 0x4b5 MovS
	var_319_int = 1; // 0x4b6 MovI
	var_320_int = 2; // 0x4b7 MovI
	var_321_int = 2; // 0x4b8 MovI
	func_882(var_318_string, var_319_int, var_320_int, var_321_int); // 0x4b9 NEW_2
	
Label_1211:
	var_322_int = 9; // 0x4bb PushI
	var_323_bool = var_246_int >= var_322_int; // 0x4bc GE
	if(var_323_bool == 0) goto Label_1236; // 0x4bd JumpB
	var_324_object = Obj(); var_325_string = ""; var_326_int = 0; var_327_int = 0; // 0x4be PushV
	var_324_object = var_245_object; // 0x4bf Mov
	var_325_string = "etorfin"; // 0x4c0 MovS
	var_326_int = 1; // 0x4c1 MovI
	var_327_int = 2; // 0x4c2 MovI
	func_871(var_325_string, var_326_int, var_327_int); // 0x4c3 NEW_2
	var_328_object = Obj(); var_329_string = ""; var_330_int = 0; var_331_int = 0; // 0x4c5 PushV
	var_328_object = var_245_object; // 0x4c6 Mov
	var_329_string = "feromicin"; // 0x4c7 MovS
	var_330_int = 1; // 0x4c8 MovI
	var_331_int = 2; // 0x4c9 MovI
	func_871(var_329_string, var_330_int, var_331_int); // 0x4ca NEW_2
	var_332_object = Obj(); var_333_string = ""; var_334_int = 0; var_335_int = 0; var_336_int = 0; // 0x4cc PushV
	var_332_object = var_245_object; // 0x4cd Mov
	var_333_string = "delta_pills"; // 0x4ce MovS
	var_334_int = 1; // 0x4cf MovI
	var_335_int = 2; // 0x4d0 MovI
	var_336_int = 2; // 0x4d1 MovI
	func_882(var_333_string, var_334_int, var_335_int, var_336_int); // 0x4d2 NEW_2
	
Label_1236:
	var_244_bool = 1; // 0x4d4 MovB
	return 2; // 0x4d5 Return
}


func_864()
{
	var_21_bool = 0; // 0x360 PushV
	func_1454(var_21_bool); // 0x361 NEW_2
	if(var_21_bool == 0) goto Label_870; // 0x363 JumpB
	lshStopSpeech(); // 0x364 Func
	
Label_870:
	return 0; // 0x366 Return
}


func_484(var_0_bool, var_1_object, var_2_object, var_3_object, var_17_int, var_78_float, var_79_float)
{
	var_80_bool = 0; // 0x1e5 PushV
	func_669(var_80_bool); // 0x1e6 NEW_2
	var_81_bool = var_80_bool == 0; // 0x1e8 Not
	if(var_81_bool == 0) goto Label_491; // 0x1e9 JumpB
	return 0; // 0x1ea Return
	
Label_491:
	var_82_string = "player"; // 0x1eb PushS
	FindActor(var_17_int, var_82_string); // 0x1ec Func
	var_2_object = 0; // 0x1ee TMovB
	var_3_object = 0; // 0x1ef TMovB
	var_0_bool = var_78_float; // 0x1f0 TMov
	var_1_object = var_79_float; // 0x1f1 TMov
	var_83_int = 10; // 0x1f2 PushI
	var_84_float = 1.0; // 0x1f3 PushF
	SetTimer(var_83_int, var_84_float); // 0x1f4 Func
	func_563(); // 0x1f7 NEW_2
	var_136_bool = var_3_object == 0; // 0x1f9 Not
	if(var_136_bool == 0) goto Label_510; // 0x1fa JumpB
	var_137_int = 10; // 0x1fb PushI
	KillTimer(var_137_int); // 0x1fc Func
	
Label_510:
	return 0; // 0x1fe Return
}


func_743()
{
	var_148_bool = 0; var_149_bool = 0; // 0x2e7 PushV
	var_150_bool = 1; // 0x2e8 PushB
	CameraSwitchToNormal(var_150_bool); // 0x2e9 Func
	var_151_bool = 0; // 0x2eb PushV
	func_1454(var_151_bool); // 0x2ec NEW_2
	if(var_151_bool == 0) goto Label_752; // 0x2ee JumpB
	goto Label_760; // 0x2ef Jump
	
Label_760:
	return 2; // 0x2f8 Return
	
Label_752:
	var_152_string = "head"; // 0x2f0 PushS
	HasAnimationTrack(var_149_bool, var_152_string); // 0x2f1 Func
	var_153_bool = var_149_bool; // 0x2f3 Push
	if(var_153_bool == 0) goto Label_760; // 0x2f4 JumpB
	var_154_string = "head"; // 0x2f5 PushS
	UnlookAsync(var_154_string); // 0x2f6 Func
}


func_871(var_284_string, var_285_int, var_286_int)
{
	var_287_bool = 0; var_288_bool = 0; // 0x367 PushV
	var_289_bool = 0; var_290_int = 0; var_291_int = 0; // 0x368 PushV
	var_290_int = var_285_int; // 0x369 Mov
	var_291_int = var_286_int; // 0x36a Mov
	func_956(var_289_bool, var_290_int, var_291_int); // 0x36b NEW_2
	if(var_289_bool == 0) goto Label_881; // 0x36d JumpB
	var_292_int = 0; // 0x36e PushI
	AddItem(var_288_bool, var_284_string, var_292_int); // 0x36f ObjFunc
	
Label_881:
	return 2; // 0x371 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_bool = var_98_object; // 0x73 TMov
	var_1_object = var_97_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_103_int = 1; // 0x76 PushI
	if(var_103_int == 0) goto Label_142; // 0x77 JumpB
	var_104_string = ""; // 0x78 PushV
	var_104_string = "Neutral"; // 0x79 MovS
	func_172(var_98_object, var_104_string); // 0x7a NEW_2
	var_121_int = 520509; // 0x7c PushI
	SetMessage(var_121_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_122_int = 524384; // 0x81 PushI
	var_123_int = 25709; // 0x82 PushI
	var_124_int = 25708; // 0x83 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x84 TObjFunc
	var_125_int = 520510; // 0x86 PushI
	var_126_int = -1; // 0x87 PushI
	var_127_int = 21713; // 0x88 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x89 TObjFunc
	goto Label_142; // 0x8b Jump
	
Label_142:
	var_128_bool = 0; // 0x8e PushV
	func_1454(var_128_bool); // 0x8f NEW_2
	if(var_128_bool == 0) goto Label_157; // 0x91 JumpB
	
Label_146:
	lshWaitForAnimEnd(); // 0x92 Func
	var_129_object = var_3_object; // 0x94 PushT
	if(var_129_object == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_156:
	goto Label_171; // 0x9c Jump
	
Label_171:
	return 0; // 0xab Return
	
Label_151:
	var_130_string = ""; // 0x97 PushV
	var_130_string = var_2_object; // 0x98 MovT
	func_822(var_130_string); // 0x99 NEW_2
	goto Label_146; // 0x9b Jump
	
Label_157:
	var_141_string = "all"; // 0x9d PushS
	var_142_string = "idle"; // 0x9e PushS
	PlayAnimation(var_141_string, var_142_string); // 0x9f Func
	
Label_161:
	WaitForAnimEnd(); // 0xa1 Func
	var_143_object = var_3_object; // 0xa3 PushT
	if(var_143_object == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_166:
	var_144_string = "all"; // 0xa6 PushS
	var_145_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_144_string, var_145_string); // 0xa8 Func
	goto Label_161; // 0xaa Jump
}


func_882(var_250_string, var_251_int, var_252_int, var_253_int)
{
	var_254_int = 0; var_255_bool = 0; var_256_int = 0; var_257_bool = 0; // 0x372 PushV
	var_258_bool = 0; var_259_int = 0; var_260_int = 0; // 0x373 PushV
	var_259_int = var_251_int; // 0x374 Mov
	var_260_int = var_252_int; // 0x375 Mov
	func_956(var_258_bool, var_259_int, var_260_int); // 0x376 NEW_2
	if(var_258_bool == 0) goto Label_896; // 0x378 JumpB
	irand(var_256_int, var_253_int); // 0x379 Func
	var_261_int = 0; // 0x37b PushI
	var_262_int = 1; // 0x37c PushI
	var_263_int = var_253_int + var_262_int; // 0x37d Add
	AddItem(var_257_bool, var_250_string, var_261_int, var_263_int); // 0x37e ObjFunc
	
Label_896:
	return 4; // 0x380 Return
}


func_761(var_479_bool, var_480_object)
{
	var_481_bool = 0; var_482_object = Obj(); var_483_float = 0; // 0x2fa PushV
	var_482_object = var_480_object; // 0x2fb Mov
	var_483_float = 70; // 0x2fc MovI
	func_769(var_482_object, var_483_float); // 0x2fd NEW_2
	var_479_bool = var_481_bool; // 0x2fe Mov
	return 0; // 0x300 Return
}


func_1021(var_178_bool)
{
	var_178_bool = 1; // 0x3fe MovB
	return 0; // 0x3ff Return
}


func_511(var_0_bool, var_1_object, var_4_string, var_21_bool)
{
	var_22_float = 0; var_23_float = 0; // 0x1ff PushV
	var_24_bool = var_4_string == 0; // 0x200 NullEq
	if(var_24_bool == 0) goto Label_516; // 0x201 JumpB
	var_21_bool = 0; // 0x202 MovB
	return 2; // 0x203 Return
	
Label_516:
	var_25_float = 0; var_26_object = Obj(); // 0x204 PushV
	var_26_object = var_4_string; // 0x205 MovT
	func_649(var_26_object); // 0x206 NEW_2
	var_23_float = sqrt(var_25_float); // 0x208 Sqrt2
	var_33_object = var_2_object; // 0x209 PushT
	if(var_33_object == 0) goto Label_524; // 0x20a JumpB
	var_23_float = var_23_float - var_1_object; // 0x20b Sub2
	
Label_524:
	var_21_bool = var_23_float < var_0_bool; // 0x20c LT2
	return 2; // 0x20d Return
}


