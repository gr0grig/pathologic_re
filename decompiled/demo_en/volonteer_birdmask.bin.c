task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	var_22_int = 1; // 0x9b PushI
	if(var_22_int == 0) goto Label_195; // 0x9c JumpB
	func_1489(); // 0x9e NEW_2
	var_24_int = 35470; // 0xa0 PushI
	var_25_bool = var_20_bool == var_24_int; // 0xa1 Eq
	if(var_25_bool == 0) goto Label_183; // 0xa2 JumpB
	var_26_string = ""; // 0xa3 PushV
	var_26_string = "Neutral"; // 0xa4 MovS
	func_132(var_21_object, var_26_string); // 0xa5 NEW_2
	var_43_int = 533911; // 0xa7 PushI
	SetMessage(var_43_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_44_int = 533912; // 0xac PushI
	var_45_int = -1; // 0xad PushI
	var_46_int = 35471; // 0xae PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xaf TObjFunc
	var_47_int = 533913; // 0xb1 PushI
	var_48_int = -1; // 0xb2 PushI
	var_49_int = 35472; // 0xb3 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_50_bool = 0; // 0xb8 PushV
	func_2428(var_50_bool); // 0xb9 NEW_2
	if(var_50_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	var_22_int = 1; // 0x1e5 PushI
	if(var_22_int == 0) goto Label_890; // 0x1e6 JumpB
	func_1489(); // 0x1e8 NEW_2
	var_24_int = 15324; // 0x1ea PushI
	var_25_bool = var_21_object == var_24_int; // 0x1eb Eq
	if(var_25_bool == 0) goto Label_508; // 0x1ec JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x1ed PushV
	var_26_object = var_1_object; // 0x1ee MovT
	var_27_object = var_0_object; // 0x1ef MovT
	func_1631(); // 0x1f0 NEW_2
	var_32_object = Obj(); var_33_object = Obj(); // 0x1f2 PushV
	var_32_object = var_1_object; // 0x1f3 MovT
	var_33_object = var_0_object; // 0x1f4 MovT
	func_1637(); // 0x1f5 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0x1f7 PushV
	var_61_object = var_1_object; // 0x1f8 MovT
	var_62_object = var_0_object; // 0x1f9 MovT
	func_1607(); // 0x1fa NEW_2
	
Label_508:
	var_65_int = 15327; // 0x1fc PushI
	var_66_bool = var_21_object == var_65_int; // 0x1fd Eq
	if(var_66_bool == 0) goto Label_526; // 0x1fe JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x1ff PushV
	var_67_object = var_1_object; // 0x200 MovT
	var_68_object = var_0_object; // 0x201 MovT
	func_1625(); // 0x202 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0x204 PushV
	var_73_object = var_1_object; // 0x205 MovT
	var_74_object = var_0_object; // 0x206 MovT
	func_1637(); // 0x207 NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0x209 PushV
	var_75_object = var_1_object; // 0x20a MovT
	var_76_object = var_0_object; // 0x20b MovT
	func_1607(); // 0x20c NEW_2
	
Label_526:
	var_77_int = 33530; // 0x20e PushI
	var_78_bool = var_21_object == var_77_int; // 0x20f Eq
	if(var_78_bool == 0) goto Label_544; // 0x210 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x211 PushV
	var_79_object = var_1_object; // 0x212 MovT
	var_80_object = var_0_object; // 0x213 MovT
	func_1558(); // 0x214 NEW_2
	var_102_object = Obj(); var_103_object = Obj(); // 0x216 PushV
	var_102_object = var_1_object; // 0x217 MovT
	var_103_object = var_0_object; // 0x218 MovT
	func_1601(); // 0x219 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x21b PushV
	var_108_object = var_1_object; // 0x21c MovT
	var_109_object = var_0_object; // 0x21d MovT
	func_1607(); // 0x21e NEW_2
	
Label_544:
	var_110_int = 33533; // 0x220 PushI
	var_111_bool = var_21_object == var_110_int; // 0x221 Eq
	if(var_111_bool == 0) goto Label_562; // 0x222 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x223 PushV
	var_112_object = var_1_object; // 0x224 MovT
	var_113_object = var_0_object; // 0x225 MovT
	func_1558(); // 0x226 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x228 PushV
	var_114_object = var_1_object; // 0x229 MovT
	var_115_object = var_0_object; // 0x22a MovT
	func_1595(); // 0x22b NEW_2
	var_120_object = Obj(); var_121_object = Obj(); // 0x22d PushV
	var_120_object = var_1_object; // 0x22e MovT
	var_121_object = var_0_object; // 0x22f MovT
	func_1607(); // 0x230 NEW_2
	
Label_562:
	var_122_int = 15312; // 0x232 PushI
	var_123_bool = var_20_bool == var_122_int; // 0x233 Eq
	if(var_123_bool == 0) goto Label_719; // 0x234 JumpB
	var_124_bool = 0; // 0x235 PushV
	var_124_bool = 0; // 0x236 MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x237 PushV
	var_126_object = var_1_object; // 0x238 MovT
	func_1728(var_125_bool, var_126_object); // 0x239 NEW_2
	if(var_125_bool == 0) goto Label_578; // 0x23b JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x23c PushV
	var_140_object = var_1_object; // 0x23d MovT
	func_1696(var_139_bool, var_140_object); // 0x23e NEW_2
	if(var_139_bool == 0) goto Label_578; // 0x240 JumpB
	var_124_bool = 1; // 0x241 MovB
	
Label_578:
	if(var_124_bool == 0) goto Label_604; // 0x242 JumpB
	var_380_object = Obj(); var_381_object = Obj(); // 0x243 PushV
	var_380_object = var_1_object; // 0x244 MovT
	var_381_object = var_0_object; // 0x245 MovT
	func_1613(); // 0x246 NEW_2
	var_390_string = ""; // 0x248 PushV
	var_390_string = "Neutral"; // 0x249 MovS
	func_462(var_21_object, var_390_string); // 0x24a NEW_2
	var_407_int = 514075; // 0x24c PushI
	SetMessage(var_407_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_408_int = 514076; // 0x251 PushI
	var_409_int = 15314; // 0x252 PushI
	var_410_int = 15313; // 0x253 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x254 TObjFunc
	var_411_int = 534587; // 0x256 PushI
	var_412_int = -1; // 0x257 PushI
	var_413_int = 36225; // 0x258 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x259 TObjFunc
	return 0; // 0x25b Return
	
Label_604:
	var_414_bool = 0; // 0x25c PushV
	var_414_bool = 0; // 0x25d MovB
	var_415_bool = 0; var_416_object = Obj(); // 0x25e PushV
	var_416_object = var_1_object; // 0x25f MovT
	func_1728(var_415_bool, var_416_object); // 0x260 NEW_2
	if(var_415_bool == 0) goto Label_618; // 0x262 JumpB
	var_417_bool = 0; var_418_object = Obj(); // 0x263 PushV
	var_418_object = var_1_object; // 0x264 MovT
	func_1696(var_417_bool, var_418_object); // 0x265 NEW_2
	var_419_bool = var_417_bool == 0; // 0x267 Not
	if(var_419_bool == 0) goto Label_618; // 0x268 JumpB
	var_414_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_414_bool == 0) goto Label_644; // 0x26a JumpB
	var_420_object = Obj(); var_421_object = Obj(); // 0x26b PushV
	var_420_object = var_1_object; // 0x26c MovT
	var_421_object = var_0_object; // 0x26d MovT
	func_1613(); // 0x26e NEW_2
	var_422_string = ""; // 0x270 PushV
	var_422_string = "Neutral"; // 0x271 MovS
	func_462(var_21_object, var_422_string); // 0x272 NEW_2
	var_423_int = 541516; // 0x274 PushI
	SetMessage(var_423_int); // 0x275 TObjFunc
	ClearReplies(); // 0x277 TObjFunc
	var_424_int = 541517; // 0x279 PushI
	var_425_int = 43681; // 0x27a PushI
	var_426_int = 43680; // 0x27b PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x27c TObjFunc
	var_427_int = 541523; // 0x27e PushI
	var_428_int = -1; // 0x27f PushI
	var_429_int = 43686; // 0x280 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x281 TObjFunc
	return 0; // 0x283 Return
	
Label_644:
	var_430_string = ""; // 0x284 PushV
	var_430_string = "Neutral"; // 0x285 MovS
	func_462(var_21_object, var_430_string); // 0x286 NEW_2
	var_431_int = 514079; // 0x288 PushI
	SetMessage(var_431_int); // 0x289 TObjFunc
	ClearReplies(); // 0x28b TObjFunc
	var_432_bool = 0; var_433_object = Obj(); // 0x28d PushV
	var_433_object = var_1_object; // 0x28e MovT
	func_1706(var_432_bool, var_433_object); // 0x28f NEW_2
	if(var_432_bool == 0) goto Label_663; // 0x291 JumpB
	var_441_int = 514080; // 0x292 PushI
	var_442_int = 15318; // 0x293 PushI
	var_443_int = 15317; // 0x294 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x295 TObjFunc
	
Label_663:
	var_444_bool = 0; var_445_object = Obj(); // 0x297 PushV
	var_445_object = var_1_object; // 0x298 MovT
	func_1717(var_444_bool, var_445_object); // 0x299 NEW_2
	if(var_444_bool == 0) goto Label_673; // 0x29b JumpB
	var_449_int = 514110; // 0x29c PushI
	var_450_int = 15326; // 0x29d PushI
	var_451_int = 15325; // 0x29e PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x29f TObjFunc
	
Label_673:
	var_452_bool = 0; // 0x2a1 PushV
	var_452_bool = 0; // 0x2a2 MovB
	var_453_bool = 0; var_454_object = Obj(); // 0x2a3 PushV
	var_454_object = var_1_object; // 0x2a4 MovT
	func_1674(var_453_bool, var_454_object); // 0x2a5 NEW_2
	if(var_453_bool == 0) goto Label_687; // 0x2a7 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x2a8 PushV
	var_459_object = var_1_object; // 0x2a9 MovT
	func_1738(var_458_bool, var_459_object); // 0x2aa NEW_2
	var_469_bool = var_458_bool == 0; // 0x2ac Not
	if(var_469_bool == 0) goto Label_687; // 0x2ad JumpB
	var_452_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_452_bool == 0) goto Label_693; // 0x2af JumpB
	var_470_int = 532117; // 0x2b0 PushI
	var_471_int = 33529; // 0x2b1 PushI
	var_472_int = 33528; // 0x2b2 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x2b3 TObjFunc
	
Label_693:
	var_473_bool = 0; // 0x2b5 PushV
	var_473_bool = 0; // 0x2b6 MovB
	var_474_bool = 0; var_475_object = Obj(); // 0x2b7 PushV
	var_475_object = var_1_object; // 0x2b8 MovT
	func_1685(var_474_bool, var_475_object); // 0x2b9 NEW_2
	if(var_474_bool == 0) goto Label_707; // 0x2bb JumpB
	var_479_bool = 0; var_480_object = Obj(); // 0x2bc PushV
	var_480_object = var_1_object; // 0x2bd MovT
	func_1738(var_479_bool, var_480_object); // 0x2be NEW_2
	var_481_bool = var_479_bool == 0; // 0x2c0 Not
	if(var_481_bool == 0) goto Label_707; // 0x2c1 JumpB
	var_473_bool = 1; // 0x2c2 MovB
	
Label_707:
	if(var_473_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_482_int = 532120; // 0x2c4 PushI
	var_483_int = 33532; // 0x2c5 PushI
	var_484_int = 33531; // 0x2c6 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x2c7 TObjFunc
	
Label_713:
	var_485_int = 514082; // 0x2c9 PushI
	var_486_int = -1; // 0x2ca PushI
	var_487_int = 15319; // 0x2cb PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x2cc TObjFunc
	return 0; // 0x2ce Return
	
Label_719:
	var_488_int = 33532; // 0x2cf PushI
	var_489_bool = var_20_bool == var_488_int; // 0x2d0 Eq
	if(var_489_bool == 0) goto Label_737; // 0x2d1 JumpB
	var_490_string = ""; // 0x2d2 PushV
	var_490_string = "Neutral"; // 0x2d3 MovS
	func_462(var_21_object, var_490_string); // 0x2d4 NEW_2
	var_491_int = 532121; // 0x2d6 PushI
	SetMessage(var_491_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_492_int = 532122; // 0x2db PushI
	var_493_int = -1; // 0x2dc PushI
	var_494_int = 33533; // 0x2dd PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x2de TObjFunc
	return 0; // 0x2e0 Return
	
Label_737:
	var_495_int = 33529; // 0x2e1 PushI
	var_496_bool = var_20_bool == var_495_int; // 0x2e2 Eq
	if(var_496_bool == 0) goto Label_755; // 0x2e3 JumpB
	var_497_string = ""; // 0x2e4 PushV
	var_497_string = "Neutral"; // 0x2e5 MovS
	func_462(var_21_object, var_497_string); // 0x2e6 NEW_2
	var_498_int = 532118; // 0x2e8 PushI
	SetMessage(var_498_int); // 0x2e9 TObjFunc
	ClearReplies(); // 0x2eb TObjFunc
	var_499_int = 532119; // 0x2ed PushI
	var_500_int = -1; // 0x2ee PushI
	var_501_int = 33530; // 0x2ef PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_502_int = 15326; // 0x2f3 PushI
	var_503_bool = var_20_bool == var_502_int; // 0x2f4 Eq
	if(var_503_bool == 0) goto Label_778; // 0x2f5 JumpB
	var_504_string = ""; // 0x2f6 PushV
	var_504_string = "Neutral"; // 0x2f7 MovS
	func_462(var_21_object, var_504_string); // 0x2f8 NEW_2
	var_505_int = 514111; // 0x2fa PushI
	SetMessage(var_505_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_506_int = 514112; // 0x2ff PushI
	var_507_int = -1; // 0x300 PushI
	var_508_int = 15327; // 0x301 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x302 TObjFunc
	var_509_int = 529951; // 0x304 PushI
	var_510_int = -1; // 0x305 PushI
	var_511_int = 31335; // 0x306 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x307 TObjFunc
	return 0; // 0x309 Return
	
Label_778:
	var_512_int = 15318; // 0x30a PushI
	var_513_bool = var_20_bool == var_512_int; // 0x30b Eq
	if(var_513_bool == 0) goto Label_796; // 0x30c JumpB
	var_514_string = ""; // 0x30d PushV
	var_514_string = "Neutral"; // 0x30e MovS
	func_462(var_21_object, var_514_string); // 0x30f NEW_2
	var_515_int = 514081; // 0x311 PushI
	SetMessage(var_515_int); // 0x312 TObjFunc
	ClearReplies(); // 0x314 TObjFunc
	var_516_int = 514109; // 0x316 PushI
	var_517_int = -1; // 0x317 PushI
	var_518_int = 15324; // 0x318 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x319 TObjFunc
	return 0; // 0x31b Return
	
Label_796:
	var_519_int = 43681; // 0x31c PushI
	var_520_bool = var_20_bool == var_519_int; // 0x31d Eq
	if(var_520_bool == 0) goto Label_819; // 0x31e JumpB
	var_521_string = ""; // 0x31f PushV
	var_521_string = "Neutral"; // 0x320 MovS
	func_462(var_21_object, var_521_string); // 0x321 NEW_2
	var_522_int = 541518; // 0x323 PushI
	SetMessage(var_522_int); // 0x324 TObjFunc
	ClearReplies(); // 0x326 TObjFunc
	var_523_int = 541519; // 0x328 PushI
	var_524_int = -1; // 0x329 PushI
	var_525_int = 43682; // 0x32a PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x32b TObjFunc
	var_526_int = 541520; // 0x32d PushI
	var_527_int = 43684; // 0x32e PushI
	var_528_int = 43683; // 0x32f PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x330 TObjFunc
	return 0; // 0x332 Return
	
Label_819:
	var_529_int = 43684; // 0x333 PushI
	var_530_bool = var_20_bool == var_529_int; // 0x334 Eq
	if(var_530_bool == 0) goto Label_837; // 0x335 JumpB
	var_531_string = ""; // 0x336 PushV
	var_531_string = "Neutral"; // 0x337 MovS
	func_462(var_21_object, var_531_string); // 0x338 NEW_2
	var_532_int = 541521; // 0x33a PushI
	SetMessage(var_532_int); // 0x33b TObjFunc
	ClearReplies(); // 0x33d TObjFunc
	var_533_int = 541522; // 0x33f PushI
	var_534_int = -1; // 0x340 PushI
	var_535_int = 43685; // 0x341 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x342 TObjFunc
	return 0; // 0x344 Return
	
Label_837:
	var_536_int = 15314; // 0x345 PushI
	var_537_bool = var_20_bool == var_536_int; // 0x346 Eq
	if(var_537_bool == 0) goto Label_860; // 0x347 JumpB
	var_538_string = ""; // 0x348 PushV
	var_538_string = "Neutral"; // 0x349 MovS
	func_462(var_21_object, var_538_string); // 0x34a NEW_2
	var_539_int = 514077; // 0x34c PushI
	SetMessage(var_539_int); // 0x34d TObjFunc
	ClearReplies(); // 0x34f TObjFunc
	var_540_int = 514078; // 0x351 PushI
	var_541_int = -1; // 0x352 PushI
	var_542_int = 15315; // 0x353 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x354 TObjFunc
	var_543_int = 534588; // 0x356 PushI
	var_544_int = 36227; // 0x357 PushI
	var_545_int = 36226; // 0x358 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x359 TObjFunc
	return 0; // 0x35b Return
	
Label_860:
	var_546_int = 36227; // 0x35c PushI
	var_547_bool = var_20_bool == var_546_int; // 0x35d Eq
	if(var_547_bool == 0) goto Label_878; // 0x35e JumpB
	var_548_string = ""; // 0x35f PushV
	var_548_string = "Neutral"; // 0x360 MovS
	func_462(var_21_object, var_548_string); // 0x361 NEW_2
	var_549_int = 534589; // 0x363 PushI
	SetMessage(var_549_int); // 0x364 TObjFunc
	ClearReplies(); // 0x366 TObjFunc
	var_550_int = 534590; // 0x368 PushI
	var_551_int = -1; // 0x369 PushI
	var_552_int = 36228; // 0x36a PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x36b TObjFunc
	return 0; // 0x36d Return
	
Label_878:
	var_3_string = 1; // 0x36e TMovB
	var_553_bool = 0; // 0x36f PushV
	func_2428(var_553_bool); // 0x370 NEW_2
	if(var_553_bool == 0) goto Label_886; // 0x372 JumpB
	lshStopAnimation(); // 0x373 Func
	goto Label_888; // 0x375 Jump
	
Label_888:
	return 0; // 0x378 Return
	
Label_886:
	StopAnimation(); // 0x376 Func
	
Label_890:
	return 0; // 0x37a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_int, var_18_int, var_19_bool, var_20_bool, var_21_object)
{
	var_22_int = 1; // 0x416 PushI
	if(var_22_int == 0) goto Label_1132; // 0x417 JumpB
	func_1489(); // 0x419 NEW_2
	var_24_int = 22691; // 0x41b PushI
	var_25_bool = var_20_bool == var_24_int; // 0x41c Eq
	if(var_25_bool == 0) goto Label_1074; // 0x41d JumpB
	var_26_string = ""; // 0x41e PushV
	var_26_string = "Neutral"; // 0x41f MovS
	func_1023(var_21_object, var_26_string); // 0x420 NEW_2
	var_43_int = 521530; // 0x422 PushI
	SetMessage(var_43_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_44_int = 521531; // 0x427 PushI
	var_45_int = 36229; // 0x428 PushI
	var_46_int = 22692; // 0x429 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x42a TObjFunc
	var_47_int = 534594; // 0x42c PushI
	var_48_int = 36233; // 0x42d PushI
	var_49_int = 36232; // 0x42e PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_50_int = 36233; // 0x432 PushI
	var_51_bool = var_20_bool == var_50_int; // 0x433 Eq
	if(var_51_bool == 0) goto Label_1097; // 0x434 JumpB
	var_52_string = ""; // 0x435 PushV
	var_52_string = "Neutral"; // 0x436 MovS
	func_1023(var_21_object, var_52_string); // 0x437 NEW_2
	var_53_int = 534595; // 0x439 PushI
	SetMessage(var_53_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_54_int = 534596; // 0x43e PushI
	var_55_int = -1; // 0x43f PushI
	var_56_int = 36234; // 0x440 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x441 TObjFunc
	var_57_int = 534597; // 0x443 PushI
	var_58_int = -1; // 0x444 PushI
	var_59_int = 36235; // 0x445 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_60_int = 36229; // 0x449 PushI
	var_61_bool = var_20_bool == var_60_int; // 0x44a Eq
	if(var_61_bool == 0) goto Label_1120; // 0x44b JumpB
	var_62_string = ""; // 0x44c PushV
	var_62_string = "Neutral"; // 0x44d MovS
	func_1023(var_21_object, var_62_string); // 0x44e NEW_2
	var_63_int = 534591; // 0x450 PushI
	SetMessage(var_63_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_64_int = 534592; // 0x455 PushI
	var_65_int = -1; // 0x456 PushI
	var_66_int = 36230; // 0x457 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x458 TObjFunc
	var_67_int = 534593; // 0x45a PushI
	var_68_int = -1; // 0x45b PushI
	var_69_int = 36231; // 0x45c PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x45d TObjFunc
	return 0; // 0x45f Return
	
Label_1120:
	var_3_string = 1; // 0x460 TMovB
	var_70_bool = 0; // 0x461 PushV
	func_2428(var_70_bool); // 0x462 NEW_2
	if(var_70_bool == 0) goto Label_1128; // 0x464 JumpB
	lshStopAnimation(); // 0x465 Func
	goto Label_1130; // 0x467 Jump
	
Label_1130:
	return 0; // 0x46a Return
	
Label_1128:
	StopAnimation(); // 0x468 Func
	
Label_1132:
	return 0; // 0x46c Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, var_20_object)
{
	var_21_string = ""; var_22_string = ""; // 0x477 PushV
	var_23_string = "npc"; // 0x478 PushS
	GetProperty(var_23_string, var_22_string); // 0x479 Func
	Trace(var_22_string); // 0x47b Func
	var_24_int = 0; var_25_string = ""; // 0x47d PushV
	var_25_string = var_22_string; // 0x47e Mov
	func_1831(var_24_int, var_25_string); // 0x47f NEW_2
	Trace(var_24_int); // 0x481 Func
	var_196_bool = 0; var_197_int = 0; // 0x483 PushV
	var_198_int = 0; var_199_string = ""; // 0x484 PushV
	var_199_string = var_22_string; // 0x485 Mov
	func_1831(var_198_int, var_199_string); // 0x486 NEW_2
	var_197_int = var_198_int; // 0x487 Mov
	func_2410(var_196_bool, var_197_int); // 0x489 NEW_2
	if(var_196_bool == 0) goto Label_1171; // 0x48b JumpB
	var_207_int = 0; var_208_object = Obj(); // 0x48c PushV
	var_208_object = var_20_object; // 0x48d Mov
	TaskCall(4); // 0x48e TaskCall
	func_891(var_209_object, var_207_int, var_208_object); // 0x48f NEW_2
	TaskReturn(); // 0x490 TaskReturn
	goto Label_1202; // 0x492 Jump
	
Label_1202:
	return 2; // 0x4b2 Return
	
Label_1171:
	var_335_bool = 0; var_336_int = 0; // 0x493 PushV
	var_337_int = 0; var_338_string = ""; // 0x494 PushV
	var_338_string = var_22_string; // 0x495 Mov
	func_1831(var_337_int, var_338_string); // 0x496 NEW_2
	var_336_int = var_337_int; // 0x497 Mov
	func_2390(var_335_bool, var_336_int); // 0x499 NEW_2
	if(var_335_bool == 0) goto Label_1187; // 0x49b JumpB
	var_346_int = 0; var_347_object = Obj(); // 0x49c PushV
	var_347_object = var_20_object; // 0x49d Mov
	TaskCall(0); // 0x49e TaskCall
	func_0(var_348_object, var_346_int, var_347_object); // 0x49f NEW_2
	TaskReturn(); // 0x4a0 TaskReturn
	goto Label_1202; // 0x4a2 Jump
	
Label_1187:
	var_399_bool = 0; var_400_int = 0; // 0x4a3 PushV
	var_401_int = 0; var_402_string = ""; // 0x4a4 PushV
	var_402_string = var_22_string; // 0x4a5 Mov
	func_1831(var_401_int, var_402_string); // 0x4a6 NEW_2
	var_400_int = var_401_int; // 0x4a7 Mov
	func_2400(var_399_bool, var_400_int); // 0x4a9 NEW_2
	if(var_399_bool == 0) goto Label_1202; // 0x4ab JumpB
	var_410_int = 0; var_411_object = Obj(); // 0x4ac PushV
	var_411_object = var_20_object; // 0x4ad Mov
	TaskCall(2); // 0x4ae TaskCall
	func_196(var_412_object, var_410_int, var_411_object); // 0x4af NEW_2
	TaskReturn(); // 0x4b0 TaskReturn
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, var_20_int)
{
	var_21_int = 10; // 0x4de PushI
	var_22_bool = var_20_int == var_21_int; // 0x4df Eq
	if(var_22_bool == 0) goto Label_1267; // 0x4e0 JumpB
	var_23_bool = 0; // 0x4e1 PushV
	func_1230(var_18_bool, var_19_object, var_20_int, var_23_bool); // 0x4e2 NEW_2
	if(var_23_bool == 0) goto Label_1261; // 0x4e4 JumpB
	var_36_bool = var_2_object == 0; // 0x4e5 Not
	if(var_36_bool == 0) goto Label_1260; // 0x4e6 JumpB
	var_37_object = Obj(); // 0x4e7 PushV
	var_37_object = var_4_bool; // 0x4e8 MovT
	func_1478(var_37_object); // 0x4e9 NEW_2
	var_2_object = 1; // 0x4eb TMovB
	
Label_1260:
	goto Label_1267; // 0x4ec Jump
	
Label_1267:
	return 0; // 0x4f3 Return
	
Label_1261:
	var_44_object = var_2_object; // 0x4ed PushT
	if(var_44_object == 0) goto Label_1267; // 0x4ee JumpB
	var_45_string = "head"; // 0x4ef PushS
	UnlookAsync(var_45_string); // 0x4f0 Func
	var_2_object = 0; // 0x4f2 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object)
{
	
Label_1133:
	var_20_int = 3; // 0x46d PushI
	Sleep(var_20_int); // 0x46e Func
	var_21_float = 0; var_22_float = 0; // 0x470 PushV
	var_21_float = 300; // 0x471 MovI
	var_22_float = 100; // 0x472 MovI
	func_1203(var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, var_21_float, var_22_float); // 0x473 NEW_2
	goto Label_1133; // 0x475 Jump
}


func_0(var_0_object, var_346_int, var_347_object)
{
	var_349_object = Obj(); var_350_bool = 0; var_351_int = 0; var_352_bool = 0; var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0; // 0x0 PushV
	var_0_object = var_347_object; // 0x1 TMov
	var_357_bool = 0; var_358_object = Obj(); var_359_float = 0; // 0x2 PushV
	var_358_object = var_347_object; // 0x3 Mov
	var_359_float = 130.0; // 0x4 MovF
	func_1362(var_358_object, var_359_float); // 0x5 NEW_2
	var_360_bool = var_357_bool == 0; // 0x7 Not
	if(var_360_bool == 0) goto Label_11; // 0x8 JumpB
	var_346_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_353_object); // 0xb Func
	var_361_int = 0; // 0xd PushV
	func_2422(var_361_int); // 0xe NEW_2
	SetNPCName(var_361_int); // 0x10 ObjFunc
	var_362_int = 0; // 0x12 PushV
	func_2420(var_362_int); // 0x13 NEW_2
	SetNPCDescription(var_362_int); // 0x15 ObjFunc
	var_363_string = ""; // 0x17 PushV
	func_2424(var_363_string); // 0x18 NEW_2
	SetPhoto(var_363_string); // 0x1a ObjFunc
	var_364_string = ""; // 0x1c PushV
	func_2426(var_364_string); // 0x1d NEW_2
	SetPhoto2(var_364_string); // 0x1f ObjFunc
	var_365_int = 0; // 0x21 PushV
	func_1808(var_365_int); // 0x22 NEW_2
	SetPlayerName(var_365_int); // 0x24 ObjFunc
	var_355_int = -1; // 0x26 MovI
	IsOverrideActive(var_354_bool); // 0x27 Func
	var_366_bool = var_354_bool; // 0x29 Push
	if(var_366_bool == 0) goto Label_45; // 0x2a JumpB
	var_346_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_353_object); // 0x2d Func
	var_367_object = Obj(); var_368_object = Obj(); // 0x2f PushV
	var_367_object = var_347_object; // 0x30 Mov
	var_368_object = var_353_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_369_object, var_370_object, var_371_string, var_372_bool, var_367_object, var_368_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_356_bool); // 0x36 ObjFunc
	
Label_56:
	var_397_bool = var_356_bool == 0; // 0x38 Not
	if(var_397_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_356_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_398_object = Obj(); // 0x3f PushV
	var_398_object = var_347_object; // 0x40 Mov
	func_1430(); // 0x41 NEW_2
	StopDialog(var_353_object); // 0x43 Func
	GetReturnValue(var_355_int); // 0x45 ObjFunc
	var_346_int = var_355_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_891(var_0_object, var_207_int, var_208_object)
{
	var_210_object = Obj(); var_211_bool = 0; var_212_int = 0; var_213_bool = 0; var_214_object = Obj(); var_215_bool = 0; var_216_int = 0; var_217_bool = 0; // 0x37b PushV
	var_0_object = var_208_object; // 0x37c TMov
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; // 0x37d PushV
	var_219_object = var_208_object; // 0x37e Mov
	var_220_float = 130.0; // 0x37f MovF
	func_1362(var_219_object, var_220_float); // 0x380 NEW_2
	var_264_bool = var_218_bool == 0; // 0x382 Not
	if(var_264_bool == 0) goto Label_902; // 0x383 JumpB
	var_207_int = -2; // 0x384 MovI
	return 8; // 0x385 Return
	
Label_902:
	CreateDialog(var_214_object); // 0x386 Func
	var_265_int = 0; // 0x388 PushV
	func_2422(var_265_int); // 0x389 NEW_2
	SetNPCName(var_265_int); // 0x38b ObjFunc
	var_266_int = 0; // 0x38d PushV
	func_2420(var_266_int); // 0x38e NEW_2
	SetNPCDescription(var_266_int); // 0x390 ObjFunc
	var_267_string = ""; // 0x392 PushV
	func_2424(var_267_string); // 0x393 NEW_2
	SetPhoto(var_267_string); // 0x395 ObjFunc
	var_268_string = ""; // 0x397 PushV
	func_2426(var_268_string); // 0x398 NEW_2
	SetPhoto2(var_268_string); // 0x39a ObjFunc
	var_269_int = 0; // 0x39c PushV
	func_1808(var_269_int); // 0x39d NEW_2
	SetPlayerName(var_269_int); // 0x39f ObjFunc
	var_216_int = -1; // 0x3a1 MovI
	IsOverrideActive(var_215_bool); // 0x3a2 Func
	var_277_bool = var_215_bool; // 0x3a4 Push
	if(var_277_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_207_int = -2; // 0x3a6 MovI
	return 8; // 0x3a7 Return
	
Label_936:
	DoDialog(var_214_object); // 0x3a8 Func
	var_278_object = Obj(); var_279_object = Obj(); // 0x3aa PushV
	var_278_object = var_208_object; // 0x3ab Mov
	var_279_object = var_214_object; // 0x3ac Mov
	TaskCall(5); // 0x3ad TaskCall
	func_965(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object); // 0x3ae NEW_2
	TaskReturn(); // 0x3af TaskReturn
	IsDialogEnd(var_217_bool); // 0x3b1 ObjFunc
	
Label_947:
	var_327_bool = var_217_bool == 0; // 0x3b3 Not
	if(var_327_bool == 0) goto Label_954; // 0x3b4 JumpB
	sync(); // 0x3b5 Func
	IsDialogEnd(var_217_bool); // 0x3b7 ObjFunc
	goto Label_947; // 0x3b9 Jump
	
Label_954:
	var_328_object = Obj(); // 0x3ba PushV
	var_328_object = var_208_object; // 0x3bb Mov
	func_1430(); // 0x3bc NEW_2
	StopDialog(var_214_object); // 0x3be Func
	GetReturnValue(var_216_int); // 0x3c0 ObjFunc
	var_207_int = var_216_int; // 0x3c2 Mov
	return 8; // 0x3c3 Return
}


func_132(var_2_object, var_374_string)
{
	var_375_bool = 0; // 0x85 PushV
	func_2428(var_375_bool); // 0x86 NEW_2
	var_376_bool = var_375_bool == 0; // 0x88 Not
	if(var_376_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_377_bool = var_374_string == var_2_object; // 0x8b Eq
	if(var_377_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_378_string = ""; var_379_bool = 0; // 0x8e PushV
	var_378_string = var_374_string; // 0x8f Mov
	var_380_string = ""; // 0x90 PushS
	var_381_bool = var_374_string == var_380_string; // 0x91 Eq
	if(var_381_bool == 0) goto Label_149; // 0x92 JumpB
	var_379_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1463(var_378_string, var_379_bool); // 0x96 NEW_2
	var_2_object = var_374_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_379_bool = 1; // 0x95 MovB
}


func_1541(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x605 PushV
	var_49_int = 0; // 0x606 MovI
	
Label_1543:
	var_51_string = "all"; // 0x607 PushS
	var_52_string = ""; var_53_int = 0; // 0x608 PushV
	var_53_int = var_49_int; // 0x609 Mov
	func_1534(var_52_string, var_53_int); // 0x60a NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x60c Func
	var_57_bool = var_50_bool == 0; // 0x60e Not
	if(var_57_bool == 0) goto Label_1553; // 0x60f JumpB
	goto Label_1556; // 0x610 Jump
	
Label_1556:
	var_46_int = var_49_int; // 0x614 Mov
	return 4; // 0x615 Return
	
Label_1553:
	var_58_int = 1; // 0x611 PushI
	var_49_int = var_49_int + var_58_int; // 0x612 Add2
	goto Label_1543; // 0x613 Jump
}


func_1801(var_606_bool)
{
	var_608_int = 0; // 0x70a PushV
	func_1525(var_608_int); // 0x70b NEW_2
	var_614_int = 12; // 0x70d PushI
	var_606_bool = var_608_int == var_614_int; // 0x70e Eq2
	return 0; // 0x70f Return
}


func_1674(var_599_bool, var_600_object)
{
	var_601_bool = 0; var_602_object = Obj(); var_603_string = ""; // 0x68b PushV
	var_602_object = var_600_object; // 0x68c Mov
	var_603_string = "monomicin"; // 0x68d MovS
	func_1506(var_602_object, var_603_string); // 0x68e NEW_2
	if(var_601_bool == 0) goto Label_1683; // 0x690 JumpB
	var_599_bool = 1; // 0x691 MovB
	return 0; // 0x692 Return
	
Label_1683:
	var_599_bool = 0; // 0x693 MovB
	return 0; // 0x694 Return
}


func_270(var_0_object, var_1_object, var_2_object, var_3_string, var_431_object, var_432_object)
{
	var_0_object = var_432_object; // 0x10f TMov
	var_1_object = var_431_object; // 0x110 TMov
	var_3_string = 0; // 0x111 TMovB
	var_437_int = 1; // 0x112 PushI
	if(var_437_int == 0) goto Label_432; // 0x113 JumpB
	var_438_bool = 0; // 0x114 PushV
	var_438_bool = 0; // 0x115 MovB
	var_439_bool = 0; var_440_object = Obj(); // 0x116 PushV
	var_440_object = var_1_object; // 0x117 MovT
	func_1728(var_439_bool, var_440_object); // 0x118 NEW_2
	if(var_439_bool == 0) goto Label_289; // 0x11a JumpB
	var_453_bool = 0; var_454_object = Obj(); // 0x11b PushV
	var_454_object = var_1_object; // 0x11c MovT
	func_1696(var_453_bool, var_454_object); // 0x11d NEW_2
	if(var_453_bool == 0) goto Label_289; // 0x11f JumpB
	var_438_bool = 1; // 0x120 MovB
	
Label_289:
	if(var_438_bool == 0) goto Label_315; // 0x121 JumpB
	var_527_object = Obj(); var_528_object = Obj(); // 0x122 PushV
	var_527_object = var_1_object; // 0x123 MovT
	var_528_object = var_0_object; // 0x124 MovT
	func_1613(); // 0x125 NEW_2
	var_537_string = ""; // 0x127 PushV
	var_537_string = "Neutral"; // 0x128 MovS
	func_462(var_432_object, var_537_string); // 0x129 NEW_2
	var_545_int = 514075; // 0x12b PushI
	SetMessage(var_545_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_546_int = 514076; // 0x130 PushI
	var_547_int = 15314; // 0x131 PushI
	var_548_int = 15313; // 0x132 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x133 TObjFunc
	var_549_int = 534587; // 0x135 PushI
	var_550_int = -1; // 0x136 PushI
	var_551_int = 36225; // 0x137 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x138 TObjFunc
	goto Label_432; // 0x13a Jump
	
Label_432:
	var_552_bool = 0; // 0x1b0 PushV
	func_2428(var_552_bool); // 0x1b1 NEW_2
	if(var_552_bool == 0) goto Label_447; // 0x1b3 JumpB
	
Label_436:
	lshWaitForAnimEnd(); // 0x1b4 Func
	var_553_string = var_3_string; // 0x1b6 PushT
	if(var_553_string == 0) goto Label_441; // 0x1b7 JumpB
	goto Label_446; // 0x1b8 Jump
	
Label_446:
	goto Label_461; // 0x1be Jump
	
Label_461:
	return 0; // 0x1cd Return
	
Label_441:
	var_554_string = ""; // 0x1b9 PushV
	var_554_string = var_2_object; // 0x1ba MovT
	func_1447(var_554_string); // 0x1bb NEW_2
	goto Label_436; // 0x1bd Jump
	
Label_447:
	var_555_string = "all"; // 0x1bf PushS
	var_556_string = "idle"; // 0x1c0 PushS
	PlayAnimation(var_555_string, var_556_string); // 0x1c1 Func
	
Label_451:
	WaitForAnimEnd(); // 0x1c3 Func
	var_557_string = var_3_string; // 0x1c5 PushT
	if(var_557_string == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_461; // 0x1c7 Jump
	
Label_456:
	var_558_string = "all"; // 0x1c8 PushS
	var_559_string = "idle"; // 0x1c9 PushS
	PlayAnimation(var_558_string, var_559_string); // 0x1ca Func
	goto Label_451; // 0x1cc Jump
	
Label_315:
	var_560_bool = 0; // 0x13b PushV
	var_560_bool = 0; // 0x13c MovB
	var_561_bool = 0; var_562_object = Obj(); // 0x13d PushV
	var_562_object = var_1_object; // 0x13e MovT
	func_1728(var_561_bool, var_562_object); // 0x13f NEW_2
	if(var_561_bool == 0) goto Label_329; // 0x141 JumpB
	var_563_bool = 0; var_564_object = Obj(); // 0x142 PushV
	var_564_object = var_1_object; // 0x143 MovT
	func_1696(var_563_bool, var_564_object); // 0x144 NEW_2
	var_565_bool = var_563_bool == 0; // 0x146 Not
	if(var_565_bool == 0) goto Label_329; // 0x147 JumpB
	var_560_bool = 1; // 0x148 MovB
	
Label_329:
	if(var_560_bool == 0) goto Label_355; // 0x149 JumpB
	var_566_object = Obj(); var_567_object = Obj(); // 0x14a PushV
	var_566_object = var_1_object; // 0x14b MovT
	var_567_object = var_0_object; // 0x14c MovT
	func_1613(); // 0x14d NEW_2
	var_568_string = ""; // 0x14f PushV
	var_568_string = "Neutral"; // 0x150 MovS
	func_462(var_432_object, var_568_string); // 0x151 NEW_2
	var_569_int = 541516; // 0x153 PushI
	SetMessage(var_569_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_570_int = 541517; // 0x158 PushI
	var_571_int = 43681; // 0x159 PushI
	var_572_int = 43680; // 0x15a PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x15b TObjFunc
	var_573_int = 541523; // 0x15d PushI
	var_574_int = -1; // 0x15e PushI
	var_575_int = 43686; // 0x15f PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x160 TObjFunc
	goto Label_432; // 0x162 Jump
	
Label_355:
	var_576_string = ""; // 0x163 PushV
	var_576_string = "Neutral"; // 0x164 MovS
	func_462(var_432_object, var_576_string); // 0x165 NEW_2
	var_577_int = 514079; // 0x167 PushI
	SetMessage(var_577_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_578_bool = 0; var_579_object = Obj(); // 0x16c PushV
	var_579_object = var_1_object; // 0x16d MovT
	func_1706(var_578_bool, var_579_object); // 0x16e NEW_2
	if(var_578_bool == 0) goto Label_374; // 0x170 JumpB
	var_587_int = 514080; // 0x171 PushI
	var_588_int = 15318; // 0x172 PushI
	var_589_int = 15317; // 0x173 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x174 TObjFunc
	
Label_374:
	var_590_bool = 0; var_591_object = Obj(); // 0x176 PushV
	var_591_object = var_1_object; // 0x177 MovT
	func_1717(var_590_bool, var_591_object); // 0x178 NEW_2
	if(var_590_bool == 0) goto Label_384; // 0x17a JumpB
	var_595_int = 514110; // 0x17b PushI
	var_596_int = 15326; // 0x17c PushI
	var_597_int = 15325; // 0x17d PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x17e TObjFunc
	
Label_384:
	var_598_bool = 0; // 0x180 PushV
	var_598_bool = 0; // 0x181 MovB
	var_599_bool = 0; var_600_object = Obj(); // 0x182 PushV
	var_600_object = var_1_object; // 0x183 MovT
	func_1674(var_599_bool, var_600_object); // 0x184 NEW_2
	if(var_599_bool == 0) goto Label_398; // 0x186 JumpB
	var_604_bool = 0; var_605_object = Obj(); // 0x187 PushV
	var_605_object = var_1_object; // 0x188 MovT
	func_1738(var_604_bool, var_605_object); // 0x189 NEW_2
	var_615_bool = var_604_bool == 0; // 0x18b Not
	if(var_615_bool == 0) goto Label_398; // 0x18c JumpB
	var_598_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_598_bool == 0) goto Label_404; // 0x18e JumpB
	var_616_int = 532117; // 0x18f PushI
	var_617_int = 33529; // 0x190 PushI
	var_618_int = 33528; // 0x191 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x192 TObjFunc
	
Label_404:
	var_619_bool = 0; // 0x194 PushV
	var_619_bool = 0; // 0x195 MovB
	var_620_bool = 0; var_621_object = Obj(); // 0x196 PushV
	var_621_object = var_1_object; // 0x197 MovT
	func_1685(var_620_bool, var_621_object); // 0x198 NEW_2
	if(var_620_bool == 0) goto Label_418; // 0x19a JumpB
	var_625_bool = 0; var_626_object = Obj(); // 0x19b PushV
	var_626_object = var_1_object; // 0x19c MovT
	func_1738(var_625_bool, var_626_object); // 0x19d NEW_2
	var_627_bool = var_625_bool == 0; // 0x19f Not
	if(var_627_bool == 0) goto Label_418; // 0x1a0 JumpB
	var_619_bool = 1; // 0x1a1 MovB
	
Label_418:
	if(var_619_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_628_int = 532120; // 0x1a3 PushI
	var_629_int = 33532; // 0x1a4 PushI
	var_630_int = 33531; // 0x1a5 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x1a6 TObjFunc
	
Label_424:
	var_631_int = 514082; // 0x1a8 PushI
	var_632_int = -1; // 0x1a9 PushI
	var_633_int = 15319; // 0x1aa PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x1ab TObjFunc
	goto Label_432; // 0x1ad Jump
}


func_1808(var_269_int)
{
	var_270_int = 0; var_271_int = 0; // 0x710 PushV
	var_272_string = "branch"; // 0x711 PushS
	GetVariable(var_272_string, var_271_int); // 0x712 Func
	var_273_int = 0; // 0x714 PushI
	var_274_bool = var_271_int == var_273_int; // 0x715 Eq
	if(var_274_bool == 0) goto Label_1818; // 0x716 JumpB
	var_269_int = 1; // 0x717 MovI
	return 2; // 0x718 Return
	
Label_1818:
	var_275_int = 1; // 0x71a PushI
	var_276_bool = var_271_int == var_275_int; // 0x71b Eq
	if(var_276_bool == 0) goto Label_1823; // 0x71c JumpB
	var_269_int = 2; // 0x71d MovI
	return 2; // 0x71e Return
	
Label_1823:
	var_269_int = 3; // 0x71f MovI
	return 2; // 0x720 Return
}


func_1685(var_620_bool, var_621_object)
{
	var_622_bool = 0; var_623_object = Obj(); var_624_string = ""; // 0x696 PushV
	var_623_object = var_621_object; // 0x697 Mov
	var_624_string = "feromicin"; // 0x698 MovS
	func_1506(var_623_object, var_624_string); // 0x699 NEW_2
	if(var_622_bool == 0) goto Label_1694; // 0x69b JumpB
	var_620_bool = 1; // 0x69c MovB
	return 0; // 0x69d Return
	
Label_1694:
	var_620_bool = 0; // 0x69e MovB
	return 0; // 0x69f Return
}


func_1430()
{
	var_329_bool = 0; var_330_bool = 0; // 0x596 PushV
	CameraSwitchToNormal(); // 0x597 Func
	var_331_bool = 0; // 0x599 PushV
	func_2428(var_331_bool); // 0x59a NEW_2
	if(var_331_bool == 0) goto Label_1438; // 0x59c JumpB
	goto Label_1446; // 0x59d Jump
	
Label_1446:
	return 2; // 0x5a6 Return
	
Label_1438:
	var_332_string = "head"; // 0x59e PushS
	HasAnimationTrack(var_330_bool, var_332_string); // 0x59f Func
	var_333_bool = var_330_bool; // 0x5a1 Push
	if(var_333_bool == 0) goto Label_1446; // 0x5a2 JumpB
	var_334_string = "head"; // 0x5a3 PushS
	UnlookAsync(var_334_string); // 0x5a4 Func
}


func_1558()
{
	var_81_string = ""; var_82_string = ""; // 0x616 PushV
	var_83_string = "npc"; // 0x617 PushS
	GetProperty(var_83_string, var_82_string); // 0x618 Func
	var_84_int = 0; // 0x61a PushV
	func_1825(var_84_int); // 0x61b NEW_2
	var_85_int = 0; // 0x61d PushI
	var_86_bool = var_84_int == var_85_int; // 0x61e Eq
	if(var_86_bool == 0) goto Label_1575; // 0x61f JumpB
	var_87_bool = 0; var_88_string = ""; var_89_string = ""; var_90_string = ""; // 0x620 PushV
	var_88_string = "volonteers_danko"; // 0x621 MovS
	var_89_string = "rescue_oneday"; // 0x622 MovS
	var_90_string = var_82_string; // 0x623 Mov
	func_1513(var_87_bool, var_88_string, var_89_string, var_90_string); // 0x624 NEW_2
	goto Label_1594; // 0x626 Jump
	
Label_1594:
	return 2; // 0x63a Return
	
Label_1575:
	var_91_int = 0; // 0x627 PushV
	func_1825(var_91_int); // 0x628 NEW_2
	var_92_int = 1; // 0x62a PushI
	var_93_bool = var_91_int == var_92_int; // 0x62b Eq
	if(var_93_bool == 0) goto Label_1588; // 0x62c JumpB
	var_94_bool = 0; var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x62d PushV
	var_95_string = "volonteers_burah"; // 0x62e MovS
	var_96_string = "rescue_oneday"; // 0x62f MovS
	var_97_string = var_82_string; // 0x630 Mov
	func_1513(var_94_bool, var_95_string, var_96_string, var_97_string); // 0x631 NEW_2
	goto Label_1594; // 0x633 Jump
	
Label_1588:
	var_98_bool = 0; var_99_string = ""; var_100_string = ""; var_101_string = ""; // 0x634 PushV
	var_99_string = "volonteers_klara"; // 0x635 MovS
	var_100_string = "rescue_oneday"; // 0x636 MovS
	var_101_string = var_82_string; // 0x637 Mov
	func_1513(var_98_bool, var_99_string, var_100_string, var_101_string); // 0x638 NEW_2
}


func_1696(var_453_bool, var_454_object)
{
	var_455_bool = 0; var_456_object = Obj(); // 0x6a1 PushV
	var_456_object = var_454_object; // 0x6a2 Mov
	func_1748(var_456_object); // 0x6a3 NEW_2
	if(var_455_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_453_bool = 1; // 0x6a6 MovB
	return 0; // 0x6a7 Return
	
Label_1704:
	var_453_bool = 0; // 0x6a8 MovB
	return 0; // 0x6a9 Return
}


func_1825(var_464_int)
{
	var_465_int = 0; var_466_int = 0; // 0x721 PushV
	var_467_string = "branch"; // 0x722 PushS
	GetVariable(var_467_string, var_466_int); // 0x723 Func
	var_464_int = var_466_int; // 0x725 Mov
	return 2; // 0x726 Return
}


func_2342(var_507_bool, var_508_int)
{
	var_509_int = 7; // 0x927 PushI
	var_510_bool = var_508_int == var_509_int; // 0x928 Eq
	if(var_510_bool == 0) goto Label_2348; // 0x929 JumpB
	var_507_bool = 1; // 0x92a MovB
	return 0; // 0x92b Return
	
Label_2348:
	var_511_int = 23; // 0x92c PushI
	var_512_bool = var_508_int == var_511_int; // 0x92d Eq
	if(var_512_bool == 0) goto Label_2353; // 0x92e JumpB
	var_507_bool = 1; // 0x92f MovB
	return 0; // 0x930 Return
	
Label_2353:
	var_513_int = 21; // 0x931 PushI
	var_514_bool = var_508_int == var_513_int; // 0x932 Eq
	if(var_514_bool == 0) goto Label_2358; // 0x933 JumpB
	var_507_bool = 1; // 0x934 MovB
	return 0; // 0x935 Return
	
Label_2358:
	var_515_int = 9; // 0x936 PushI
	var_516_bool = var_508_int == var_515_int; // 0x937 Eq
	if(var_516_bool == 0) goto Label_2363; // 0x938 JumpB
	var_507_bool = 1; // 0x939 MovB
	return 0; // 0x93a Return
	
Label_2363:
	var_517_int = 3; // 0x93b PushI
	var_518_bool = var_508_int == var_517_int; // 0x93c Eq
	if(var_518_bool == 0) goto Label_2368; // 0x93d JumpB
	var_507_bool = 1; // 0x93e MovB
	return 0; // 0x93f Return
	
Label_2368:
	var_519_int = 1; // 0x940 PushI
	var_520_bool = var_508_int == var_519_int; // 0x941 Eq
	if(var_520_bool == 0) goto Label_2373; // 0x942 JumpB
	var_507_bool = 1; // 0x943 MovB
	return 0; // 0x944 Return
	
Label_2373:
	var_521_int = 11; // 0x945 PushI
	var_522_bool = var_508_int == var_521_int; // 0x946 Eq
	if(var_522_bool == 0) goto Label_2378; // 0x947 JumpB
	var_507_bool = 1; // 0x948 MovB
	return 0; // 0x949 Return
	
Label_2378:
	var_523_int = 13; // 0x94a PushI
	var_524_bool = var_508_int == var_523_int; // 0x94b Eq
	if(var_524_bool == 0) goto Label_2383; // 0x94c JumpB
	var_507_bool = 1; // 0x94d MovB
	return 0; // 0x94e Return
	
Label_2383:
	var_525_int = 25; // 0x94f PushI
	var_526_bool = var_508_int == var_525_int; // 0x950 Eq
	if(var_526_bool == 0) goto Label_2388; // 0x951 JumpB
	var_507_bool = 1; // 0x952 MovB
	return 0; // 0x953 Return
	
Label_2388:
	var_507_bool = 0; // 0x954 MovB
	return 0; // 0x955 Return
}


func_1447(var_311_string)
{
	var_312_bool = 0; var_313_float = 0; var_314_float = 0; var_315_bool = 0; var_316_float = 0; var_317_float = 0; // 0x5a7 PushV
	lshHasAnimation(var_315_bool, var_311_string); // 0x5a8 Func
	var_318_bool = var_315_bool; // 0x5aa Push
	if(var_318_bool == 0) goto Label_1458; // 0x5ab JumpB
	lshGetAnimTimes(var_311_string, var_316_float, var_317_float); // 0x5ac Func
	var_319_bool = 0; // 0x5ae PushB
	lshPlayAnimation(var_316_float, var_317_float, var_319_bool); // 0x5af Func
	goto Label_1462; // 0x5b1 Jump
	
Label_1462:
	return 6; // 0x5b6 Return
	
Label_1458:
	var_320_string = "Can't find lsh animation : "; // 0x5b2 PushS
	var_321_int = var_320_string + var_311_string; // 0x5b3 Add
	Trace(var_321_int); // 0x5b4 Func
}


func_1831(var_24_int, var_25_string)
{
	_strlwr(var_25_string); // 0x728 Func
	var_26_string = "alexandr"; // 0x72a PushS
	var_27_bool = var_25_string == var_26_string; // 0x72b Eq
	if(var_27_bool == 0) goto Label_1839; // 0x72c JumpB
	var_24_int = 1; // 0x72d MovI
	return 0; // 0x72e Return
	
Label_1839:
	var_28_string = "andrei"; // 0x72f PushS
	var_29_bool = var_25_string == var_28_string; // 0x730 Eq
	if(var_29_bool == 0) goto Label_1844; // 0x731 JumpB
	var_24_int = 2; // 0x732 MovI
	return 0; // 0x733 Return
	
Label_1844:
	var_30_string = "anna"; // 0x734 PushS
	var_31_bool = var_25_string == var_30_string; // 0x735 Eq
	if(var_31_bool == 0) goto Label_1849; // 0x736 JumpB
	var_24_int = 3; // 0x737 MovI
	return 0; // 0x738 Return
	
Label_1849:
	var_32_string = "bigvlad"; // 0x739 PushS
	var_33_bool = var_25_string == var_32_string; // 0x73a Eq
	if(var_33_bool == 0) goto Label_1854; // 0x73b JumpB
	var_24_int = 4; // 0x73c MovI
	return 0; // 0x73d Return
	
Label_1854:
	var_34_string = "eva"; // 0x73e PushS
	var_35_bool = var_25_string == var_34_string; // 0x73f Eq
	if(var_35_bool == 0) goto Label_1859; // 0x740 JumpB
	var_24_int = 5; // 0x741 MovI
	return 0; // 0x742 Return
	
Label_1859:
	var_36_string = "georg"; // 0x743 PushS
	var_37_bool = var_25_string == var_36_string; // 0x744 Eq
	if(var_37_bool == 0) goto Label_1864; // 0x745 JumpB
	var_24_int = 6; // 0x746 MovI
	return 0; // 0x747 Return
	
Label_1864:
	var_38_string = "grif"; // 0x748 PushS
	var_39_bool = var_25_string == var_38_string; // 0x749 Eq
	if(var_39_bool == 0) goto Label_1869; // 0x74a JumpB
	var_24_int = 7; // 0x74b MovI
	return 0; // 0x74c Return
	
Label_1869:
	var_40_string = "han"; // 0x74d PushS
	var_41_bool = var_25_string == var_40_string; // 0x74e Eq
	if(var_41_bool == 0) goto Label_1874; // 0x74f JumpB
	var_24_int = 8; // 0x750 MovI
	return 0; // 0x751 Return
	
Label_1874:
	var_42_string = "julia"; // 0x752 PushS
	var_43_bool = var_25_string == var_42_string; // 0x753 Eq
	if(var_43_bool == 0) goto Label_1879; // 0x754 JumpB
	var_24_int = 9; // 0x755 MovI
	return 0; // 0x756 Return
	
Label_1879:
	var_44_string = "kapella"; // 0x757 PushS
	var_45_bool = var_25_string == var_44_string; // 0x758 Eq
	if(var_45_bool == 0) goto Label_1884; // 0x759 JumpB
	var_24_int = 10; // 0x75a MovI
	return 0; // 0x75b Return
	
Label_1884:
	var_46_string = "katerina"; // 0x75c PushS
	var_47_bool = var_25_string == var_46_string; // 0x75d Eq
	if(var_47_bool == 0) goto Label_1889; // 0x75e JumpB
	var_24_int = 11; // 0x75f MovI
	return 0; // 0x760 Return
	
Label_1889:
	var_48_string = "klara"; // 0x761 PushS
	var_49_bool = var_25_string == var_48_string; // 0x762 Eq
	if(var_49_bool == 0) goto Label_1894; // 0x763 JumpB
	var_24_int = 12; // 0x764 MovI
	return 0; // 0x765 Return
	
Label_1894:
	var_50_string = "lara"; // 0x766 PushS
	var_51_bool = var_25_string == var_50_string; // 0x767 Eq
	if(var_51_bool == 0) goto Label_1899; // 0x768 JumpB
	var_24_int = 13; // 0x769 MovI
	return 0; // 0x76a Return
	
Label_1899:
	var_52_string = "laska"; // 0x76b PushS
	var_53_bool = var_25_string == var_52_string; // 0x76c Eq
	if(var_53_bool == 0) goto Label_1904; // 0x76d JumpB
	var_24_int = 14; // 0x76e MovI
	return 0; // 0x76f Return
	
Label_1904:
	var_54_string = "maria"; // 0x770 PushS
	var_55_bool = var_25_string == var_54_string; // 0x771 Eq
	if(var_55_bool == 0) goto Label_1909; // 0x772 JumpB
	var_24_int = 15; // 0x773 MovI
	return 0; // 0x774 Return
	
Label_1909:
	var_56_string = "mark"; // 0x775 PushS
	var_57_bool = var_25_string == var_56_string; // 0x776 Eq
	if(var_57_bool == 0) goto Label_1914; // 0x777 JumpB
	var_24_int = 16; // 0x778 MovI
	return 0; // 0x779 Return
	
Label_1914:
	var_58_string = "mat"; // 0x77a PushS
	var_59_bool = var_25_string == var_58_string; // 0x77b Eq
	if(var_59_bool == 0) goto Label_1919; // 0x77c JumpB
	var_24_int = 17; // 0x77d MovI
	return 0; // 0x77e Return
	
Label_1919:
	var_60_string = "mishka"; // 0x77f PushS
	var_61_bool = var_25_string == var_60_string; // 0x780 Eq
	if(var_61_bool == 0) goto Label_1924; // 0x781 JumpB
	var_24_int = 18; // 0x782 MovI
	return 0; // 0x783 Return
	
Label_1924:
	var_62_string = "mladvlad"; // 0x784 PushS
	var_63_bool = var_25_string == var_62_string; // 0x785 Eq
	if(var_63_bool == 0) goto Label_1929; // 0x786 JumpB
	var_24_int = 19; // 0x787 MovI
	return 0; // 0x788 Return
	
Label_1929:
	var_64_string = "notkin"; // 0x789 PushS
	var_65_bool = var_25_string == var_64_string; // 0x78a Eq
	if(var_65_bool == 0) goto Label_1934; // 0x78b JumpB
	var_24_int = 20; // 0x78c MovI
	return 0; // 0x78d Return
	
Label_1934:
	var_66_string = "ospina"; // 0x78e PushS
	var_67_bool = var_25_string == var_66_string; // 0x78f Eq
	if(var_67_bool == 0) goto Label_1939; // 0x790 JumpB
	var_24_int = 21; // 0x791 MovI
	return 0; // 0x792 Return
	
Label_1939:
	var_68_string = "petr"; // 0x793 PushS
	var_69_bool = var_25_string == var_68_string; // 0x794 Eq
	if(var_69_bool == 0) goto Label_1944; // 0x795 JumpB
	var_24_int = 22; // 0x796 MovI
	return 0; // 0x797 Return
	
Label_1944:
	var_70_string = "rubin"; // 0x798 PushS
	var_71_bool = var_25_string == var_70_string; // 0x799 Eq
	if(var_71_bool == 0) goto Label_1949; // 0x79a JumpB
	var_24_int = 23; // 0x79b MovI
	return 0; // 0x79c Return
	
Label_1949:
	var_72_string = "spi4ka"; // 0x79d PushS
	var_73_bool = var_25_string == var_72_string; // 0x79e Eq
	if(var_73_bool == 0) goto Label_1954; // 0x79f JumpB
	var_24_int = 24; // 0x7a0 MovI
	return 0; // 0x7a1 Return
	
Label_1954:
	var_74_string = "starshina"; // 0x7a2 PushS
	var_75_bool = var_25_string == var_74_string; // 0x7a3 Eq
	if(var_75_bool == 0) goto Label_1959; // 0x7a4 JumpB
	var_24_int = 25; // 0x7a5 MovI
	return 0; // 0x7a6 Return
	
Label_1959:
	var_76_string = "viktor"; // 0x7a7 PushS
	var_77_bool = var_25_string == var_76_string; // 0x7a8 Eq
	if(var_77_bool == 0) goto Label_1964; // 0x7a9 JumpB
	var_24_int = 26; // 0x7aa MovI
	return 0; // 0x7ab Return
	
Label_1964:
	var_78_string = "wasted_woman"; // 0x7ac PushS
	var_79_bool = var_25_string == var_78_string; // 0x7ad Eq
	if(var_79_bool == 0) goto Label_1969; // 0x7ae JumpB
	var_24_int = 27; // 0x7af MovI
	return 0; // 0x7b0 Return
	
Label_1969:
	var_80_string = "wasted_male"; // 0x7b1 PushS
	var_81_bool = var_25_string == var_80_string; // 0x7b2 Eq
	if(var_81_bool == 0) goto Label_1974; // 0x7b3 JumpB
	var_24_int = 28; // 0x7b4 MovI
	return 0; // 0x7b5 Return
	
Label_1974:
	var_82_string = "alkash"; // 0x7b6 PushS
	var_83_bool = var_25_string == var_82_string; // 0x7b7 Eq
	if(var_83_bool == 0) goto Label_1979; // 0x7b8 JumpB
	var_24_int = 29; // 0x7b9 MovI
	return 0; // 0x7ba Return
	
Label_1979:
	var_84_string = "boy"; // 0x7bb PushS
	var_85_bool = var_25_string == var_84_string; // 0x7bc Eq
	if(var_85_bool == 0) goto Label_1984; // 0x7bd JumpB
	var_24_int = 30; // 0x7be MovI
	return 0; // 0x7bf Return
	
Label_1984:
	var_86_string = "girl"; // 0x7c0 PushS
	var_87_bool = var_25_string == var_86_string; // 0x7c1 Eq
	if(var_87_bool == 0) goto Label_1989; // 0x7c2 JumpB
	var_24_int = 31; // 0x7c3 MovI
	return 0; // 0x7c4 Return
	
Label_1989:
	var_88_string = "littleboy"; // 0x7c5 PushS
	var_89_bool = var_25_string == var_88_string; // 0x7c6 Eq
	if(var_89_bool == 0) goto Label_1994; // 0x7c7 JumpB
	var_24_int = 32; // 0x7c8 MovI
	return 0; // 0x7c9 Return
	
Label_1994:
	var_90_string = "littlegirl"; // 0x7ca PushS
	var_91_bool = var_25_string == var_90_string; // 0x7cb Eq
	if(var_91_bool == 0) goto Label_1999; // 0x7cc JumpB
	var_24_int = 33; // 0x7cd MovI
	return 0; // 0x7ce Return
	
Label_1999:
	var_92_string = "butcher"; // 0x7cf PushS
	var_93_bool = var_25_string == var_92_string; // 0x7d0 Eq
	if(var_93_bool == 0) goto Label_2004; // 0x7d1 JumpB
	var_24_int = 34; // 0x7d2 MovI
	return 0; // 0x7d3 Return
	
Label_2004:
	var_94_string = "dohodyaga"; // 0x7d4 PushS
	var_95_bool = var_25_string == var_94_string; // 0x7d5 Eq
	if(var_95_bool == 0) goto Label_2009; // 0x7d6 JumpB
	var_24_int = 35; // 0x7d7 MovI
	return 0; // 0x7d8 Return
	
Label_2009:
	var_96_string = "unosha"; // 0x7d9 PushS
	var_97_bool = var_25_string == var_96_string; // 0x7da Eq
	if(var_97_bool == 0) goto Label_2014; // 0x7db JumpB
	var_24_int = 36; // 0x7dc MovI
	return 0; // 0x7dd Return
	
Label_2014:
	var_98_string = "vaxxabit"; // 0x7de PushS
	var_99_bool = var_25_string == var_98_string; // 0x7df Eq
	if(var_99_bool == 0) goto Label_2019; // 0x7e0 JumpB
	var_24_int = 37; // 0x7e1 MovI
	return 0; // 0x7e2 Return
	
Label_2019:
	var_100_string = "vaxxabitka"; // 0x7e3 PushS
	var_101_bool = var_25_string == var_100_string; // 0x7e4 Eq
	if(var_101_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_24_int = 38; // 0x7e6 MovI
	return 0; // 0x7e7 Return
	
Label_2024:
	var_102_string = "woman"; // 0x7e8 PushS
	var_103_bool = var_25_string == var_102_string; // 0x7e9 Eq
	if(var_103_bool == 0) goto Label_2029; // 0x7ea JumpB
	var_24_int = 39; // 0x7eb MovI
	return 0; // 0x7ec Return
	
Label_2029:
	var_104_string = "worker"; // 0x7ed PushS
	var_105_bool = var_25_string == var_104_string; // 0x7ee Eq
	if(var_105_bool == 0) goto Label_2034; // 0x7ef JumpB
	var_24_int = 40; // 0x7f0 MovI
	return 0; // 0x7f1 Return
	
Label_2034:
	var_106_string = "whitemask"; // 0x7f2 PushS
	var_107_bool = var_25_string == var_106_string; // 0x7f3 Eq
	if(var_107_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_24_int = 42; // 0x7f5 MovI
	return 0; // 0x7f6 Return
	
Label_2039:
	var_108_string = "birdmask"; // 0x7f7 PushS
	var_109_bool = var_25_string == var_108_string; // 0x7f8 Eq
	if(var_109_bool == 0) goto Label_2044; // 0x7f9 JumpB
	var_24_int = 43; // 0x7fa MovI
	return 0; // 0x7fb Return
	
Label_2044:
	var_110_string = "birdmask"; // 0x7fc PushS
	var_111_bool = var_25_string == var_110_string; // 0x7fd Eq
	if(var_111_bool == 0) goto Label_2049; // 0x7fe JumpB
	var_24_int = 44; // 0x7ff MovI
	return 0; // 0x800 Return
	
Label_2049:
	var_112_string = "patrol"; // 0x801 PushS
	var_113_bool = var_25_string == var_112_string; // 0x802 Eq
	if(var_113_bool == 0) goto Label_2054; // 0x803 JumpB
	var_24_int = 46; // 0x804 MovI
	return 0; // 0x805 Return
	
Label_2054:
	var_114_string = "danko"; // 0x806 PushS
	var_115_bool = var_25_string == var_114_string; // 0x807 Eq
	if(var_115_bool == 0) goto Label_2059; // 0x808 JumpB
	var_24_int = 47; // 0x809 MovI
	return 0; // 0x80a Return
	
Label_2059:
	var_116_string = "alkash_d"; // 0x80b PushS
	var_117_bool = var_25_string == var_116_string; // 0x80c Eq
	if(var_117_bool == 0) goto Label_2064; // 0x80d JumpB
	var_24_int = 48; // 0x80e MovI
	return 0; // 0x80f Return
	
Label_2064:
	var_118_string = "boy_d"; // 0x810 PushS
	var_119_bool = var_25_string == var_118_string; // 0x811 Eq
	if(var_119_bool == 0) goto Label_2069; // 0x812 JumpB
	var_24_int = 49; // 0x813 MovI
	return 0; // 0x814 Return
	
Label_2069:
	var_120_string = "butcher_d"; // 0x815 PushS
	var_121_bool = var_25_string == var_120_string; // 0x816 Eq
	if(var_121_bool == 0) goto Label_2074; // 0x817 JumpB
	var_24_int = 50; // 0x818 MovI
	return 0; // 0x819 Return
	
Label_2074:
	var_122_string = "dohodyaga_d"; // 0x81a PushS
	var_123_bool = var_25_string == var_122_string; // 0x81b Eq
	if(var_123_bool == 0) goto Label_2079; // 0x81c JumpB
	var_24_int = 51; // 0x81d MovI
	return 0; // 0x81e Return
	
Label_2079:
	var_124_string = "girl_d"; // 0x81f PushS
	var_125_bool = var_25_string == var_124_string; // 0x820 Eq
	if(var_125_bool == 0) goto Label_2084; // 0x821 JumpB
	var_24_int = 52; // 0x822 MovI
	return 0; // 0x823 Return
	
Label_2084:
	var_126_string = "littleboy_d"; // 0x824 PushS
	var_127_bool = var_25_string == var_126_string; // 0x825 Eq
	if(var_127_bool == 0) goto Label_2089; // 0x826 JumpB
	var_24_int = 53; // 0x827 MovI
	return 0; // 0x828 Return
	
Label_2089:
	var_128_string = "littlegirl_d"; // 0x829 PushS
	var_129_bool = var_25_string == var_128_string; // 0x82a Eq
	if(var_129_bool == 0) goto Label_2094; // 0x82b JumpB
	var_24_int = 54; // 0x82c MovI
	return 0; // 0x82d Return
	
Label_2094:
	var_130_string = "unosha2"; // 0x82e PushS
	var_131_bool = var_25_string == var_130_string; // 0x82f Eq
	if(var_131_bool == 0) goto Label_2099; // 0x830 JumpB
	var_24_int = 55; // 0x831 MovI
	return 0; // 0x832 Return
	
Label_2099:
	var_132_string = "unosha_d"; // 0x833 PushS
	var_133_bool = var_25_string == var_132_string; // 0x834 Eq
	if(var_133_bool == 0) goto Label_2104; // 0x835 JumpB
	var_24_int = 56; // 0x836 MovI
	return 0; // 0x837 Return
	
Label_2104:
	var_134_string = "unosha2_d"; // 0x838 PushS
	var_135_bool = var_25_string == var_134_string; // 0x839 Eq
	if(var_135_bool == 0) goto Label_2109; // 0x83a JumpB
	var_24_int = 57; // 0x83b MovI
	return 0; // 0x83c Return
	
Label_2109:
	var_136_string = "vaxxabit_d"; // 0x83d PushS
	var_137_bool = var_25_string == var_136_string; // 0x83e Eq
	if(var_137_bool == 0) goto Label_2114; // 0x83f JumpB
	var_24_int = 58; // 0x840 MovI
	return 0; // 0x841 Return
	
Label_2114:
	var_138_string = "vaxxabitka_d"; // 0x842 PushS
	var_139_bool = var_25_string == var_138_string; // 0x843 Eq
	if(var_139_bool == 0) goto Label_2119; // 0x844 JumpB
	var_24_int = 59; // 0x845 MovI
	return 0; // 0x846 Return
	
Label_2119:
	var_140_string = "wasted_male_d"; // 0x847 PushS
	var_141_bool = var_25_string == var_140_string; // 0x848 Eq
	if(var_141_bool == 0) goto Label_2124; // 0x849 JumpB
	var_24_int = 60; // 0x84a MovI
	return 0; // 0x84b Return
	
Label_2124:
	var_142_string = "wasted_woman_d"; // 0x84c PushS
	var_143_bool = var_25_string == var_142_string; // 0x84d Eq
	if(var_143_bool == 0) goto Label_2129; // 0x84e JumpB
	var_24_int = 61; // 0x84f MovI
	return 0; // 0x850 Return
	
Label_2129:
	var_144_string = "woman_d"; // 0x851 PushS
	var_145_bool = var_25_string == var_144_string; // 0x852 Eq
	if(var_145_bool == 0) goto Label_2134; // 0x853 JumpB
	var_24_int = 62; // 0x854 MovI
	return 0; // 0x855 Return
	
Label_2134:
	var_146_string = "worker2"; // 0x856 PushS
	var_147_bool = var_25_string == var_146_string; // 0x857 Eq
	if(var_147_bool == 0) goto Label_2139; // 0x858 JumpB
	var_24_int = 63; // 0x859 MovI
	return 0; // 0x85a Return
	
Label_2139:
	var_148_string = "worker_d"; // 0x85b PushS
	var_149_bool = var_25_string == var_148_string; // 0x85c Eq
	if(var_149_bool == 0) goto Label_2144; // 0x85d JumpB
	var_24_int = 64; // 0x85e MovI
	return 0; // 0x85f Return
	
Label_2144:
	var_150_string = "worker2_d"; // 0x860 PushS
	var_151_bool = var_25_string == var_150_string; // 0x861 Eq
	if(var_151_bool == 0) goto Label_2149; // 0x862 JumpB
	var_24_int = 65; // 0x863 MovI
	return 0; // 0x864 Return
	
Label_2149:
	var_152_string = "burah"; // 0x865 PushS
	var_153_bool = var_25_string == var_152_string; // 0x866 Eq
	if(var_153_bool == 0) goto Label_2154; // 0x867 JumpB
	var_24_int = 66; // 0x868 MovI
	return 0; // 0x869 Return
	
Label_2154:
	var_154_string = "gorbun_daughter"; // 0x86a PushS
	var_155_bool = var_25_string == var_154_string; // 0x86b Eq
	if(var_155_bool == 0) goto Label_2159; // 0x86c JumpB
	var_24_int = 67; // 0x86d MovI
	return 0; // 0x86e Return
	
Label_2159:
	var_156_string = "gorbun"; // 0x86f PushS
	var_157_bool = var_25_string == var_156_string; // 0x870 Eq
	if(var_157_bool == 0) goto Label_2164; // 0x871 JumpB
	var_24_int = 68; // 0x872 MovI
	return 0; // 0x873 Return
	
Label_2164:
	var_158_string = "albinos"; // 0x874 PushS
	var_159_bool = var_25_string == var_158_string; // 0x875 Eq
	if(var_159_bool == 0) goto Label_2169; // 0x876 JumpB
	var_24_int = 69; // 0x877 MovI
	return 0; // 0x878 Return
	
Label_2169:
	var_160_string = "aglaja"; // 0x879 PushS
	var_161_bool = var_25_string == var_160_string; // 0x87a Eq
	if(var_161_bool == 0) goto Label_2174; // 0x87b JumpB
	var_24_int = 70; // 0x87c MovI
	return 0; // 0x87d Return
	
Label_2174:
	var_162_string = "nude"; // 0x87e PushS
	var_163_bool = var_25_string == var_162_string; // 0x87f Eq
	if(var_163_bool == 0) goto Label_2179; // 0x880 JumpB
	var_24_int = 71; // 0x881 MovI
	return 0; // 0x882 Return
	
Label_2179:
	var_164_string = "block"; // 0x883 PushS
	var_165_bool = var_25_string == var_164_string; // 0x884 Eq
	if(var_165_bool == 0) goto Label_2184; // 0x885 JumpB
	var_24_int = 72; // 0x886 MovI
	return 0; // 0x887 Return
	
Label_2184:
	var_166_string = "officer"; // 0x888 PushS
	var_167_bool = var_25_string == var_166_string; // 0x889 Eq
	if(var_167_bool == 0) goto Label_2189; // 0x88a JumpB
	var_24_int = 73; // 0x88b MovI
	return 0; // 0x88c Return
	
Label_2189:
	var_168_string = "doberman"; // 0x88d PushS
	var_169_bool = var_25_string == var_168_string; // 0x88e Eq
	if(var_169_bool == 0) goto Label_2194; // 0x88f JumpB
	var_24_int = 74; // 0x890 MovI
	return 0; // 0x891 Return
	
Label_2194:
	var_170_string = "grabitel"; // 0x892 PushS
	var_171_bool = var_25_string == var_170_string; // 0x893 Eq
	if(var_171_bool == 0) goto Label_2199; // 0x894 JumpB
	var_24_int = 75; // 0x895 MovI
	return 0; // 0x896 Return
	
Label_2199:
	var_172_string = "gatherer_wife"; // 0x897 PushS
	var_173_bool = var_25_string == var_172_string; // 0x898 Eq
	if(var_173_bool == 0) goto Label_2204; // 0x899 JumpB
	var_24_int = 76; // 0x89a MovI
	return 0; // 0x89b Return
	
Label_2204:
	var_174_string = "rat_prophet"; // 0x89c PushS
	var_175_bool = var_25_string == var_174_string; // 0x89d Eq
	if(var_175_bool == 0) goto Label_2209; // 0x89e JumpB
	var_24_int = 77; // 0x89f MovI
	return 0; // 0x8a0 Return
	
Label_2209:
	var_176_string = "morlok"; // 0x8a1 PushS
	var_177_bool = var_25_string == var_176_string; // 0x8a2 Eq
	if(var_177_bool == 0) goto Label_2214; // 0x8a3 JumpB
	var_24_int = 78; // 0x8a4 MovI
	return 0; // 0x8a5 Return
	
Label_2214:
	var_178_string = "soldier"; // 0x8a6 PushS
	var_179_bool = var_25_string == var_178_string; // 0x8a7 Eq
	if(var_179_bool == 0) goto Label_2219; // 0x8a8 JumpB
	var_24_int = 79; // 0x8a9 MovI
	return 0; // 0x8aa Return
	
Label_2219:
	var_180_string = "britva"; // 0x8ab PushS
	var_181_bool = var_25_string == var_180_string; // 0x8ac Eq
	if(var_181_bool == 0) goto Label_2224; // 0x8ad JumpB
	var_24_int = 80; // 0x8ae MovI
	return 0; // 0x8af Return
	
Label_2224:
	var_182_string = "kabaktchik"; // 0x8b0 PushS
	var_183_bool = var_25_string == var_182_string; // 0x8b1 Eq
	if(var_183_bool == 0) goto Label_2229; // 0x8b2 JumpB
	var_24_int = 81; // 0x8b3 MovI
	return 0; // 0x8b4 Return
	
Label_2229:
	var_184_string = "sanitar"; // 0x8b5 PushS
	var_185_bool = var_25_string == var_184_string; // 0x8b6 Eq
	if(var_185_bool == 0) goto Label_2234; // 0x8b7 JumpB
	var_24_int = 82; // 0x8b8 MovI
	return 0; // 0x8b9 Return
	
Label_2234:
	var_186_string = "salesman"; // 0x8ba PushS
	var_187_bool = var_25_string == var_186_string; // 0x8bb Eq
	if(var_187_bool == 0) goto Label_2239; // 0x8bc JumpB
	var_24_int = 83; // 0x8bd MovI
	return 0; // 0x8be Return
	
Label_2239:
	var_188_string = "ayyan"; // 0x8bf PushS
	var_189_bool = var_25_string == var_188_string; // 0x8c0 Eq
	if(var_189_bool == 0) goto Label_2244; // 0x8c1 JumpB
	var_24_int = 84; // 0x8c2 MovI
	return 0; // 0x8c3 Return
	
Label_2244:
	var_190_string = "petrbirdmask"; // 0x8c4 PushS
	var_191_bool = var_25_string == var_190_string; // 0x8c5 Eq
	if(var_191_bool == 0) goto Label_2249; // 0x8c6 JumpB
	var_24_int = 85; // 0x8c7 MovI
	return 0; // 0x8c8 Return
	
Label_2249:
	var_192_string = "mogila"; // 0x8c9 PushS
	var_193_bool = var_25_string == var_192_string; // 0x8ca Eq
	if(var_193_bool == 0) goto Label_2254; // 0x8cb JumpB
	var_24_int = 86; // 0x8cc MovI
	return 0; // 0x8cd Return
	
Label_2254:
	var_194_string = "klikusha"; // 0x8ce PushS
	var_195_bool = var_25_string == var_194_string; // 0x8cf Eq
	if(var_195_bool == 0) goto Label_2259; // 0x8d0 JumpB
	var_24_int = 87; // 0x8d1 MovI
	return 0; // 0x8d2 Return
	
Label_2259:
	var_24_int = -1; // 0x8d3 MovI
	return 0; // 0x8d4 Return
}


func_1706(var_578_bool, var_579_object)
{
	var_580_bool = 0; var_581_object = Obj(); var_582_string = ""; // 0x6ab PushV
	var_581_object = var_579_object; // 0x6ac Mov
	var_582_string = "burah_serum"; // 0x6ad MovS
	func_1506(var_581_object, var_582_string); // 0x6ae NEW_2
	if(var_580_bool == 0) goto Label_1715; // 0x6b0 JumpB
	var_578_bool = 1; // 0x6b1 MovB
	return 0; // 0x6b2 Return
	
Label_1715:
	var_578_bool = 0; // 0x6b3 MovB
	return 0; // 0x6b4 Return
}


func_1203(var_0_object, var_1_object, var_2_object, var_3_string, var_19_object, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x4b4 PushV
	func_1357(var_23_bool); // 0x4b5 NEW_2
	var_26_bool = var_23_bool == 0; // 0x4b7 Not
	if(var_26_bool == 0) goto Label_1210; // 0x4b8 JumpB
	return 0; // 0x4b9 Return
	
Label_1210:
	var_27_string = "player"; // 0x4ba PushS
	FindActor(var_19_object, var_27_string); // 0x4bb Func
	var_2_object = 0; // 0x4bd TMovB
	var_3_string = 0; // 0x4be TMovB
	var_0_object = var_21_float; // 0x4bf TMov
	var_1_object = var_22_float; // 0x4c0 TMov
	var_28_int = 10; // 0x4c1 PushI
	var_29_float = 1.0; // 0x4c2 PushF
	SetTimer(var_28_int, var_29_float); // 0x4c3 Func
	func_1268(); // 0x4c6 NEW_2
	var_81_bool = var_3_string == 0; // 0x4c8 Not
	if(var_81_bool == 0) goto Label_1229; // 0x4c9 JumpB
	var_82_int = 10; // 0x4ca PushI
	KillTimer(var_82_int); // 0x4cb Func
	
Label_1229:
	return 0; // 0x4cd Return
}


func_1717(var_590_bool, var_591_object)
{
	var_592_bool = 0; var_593_object = Obj(); var_594_string = ""; // 0x6b6 PushV
	var_593_object = var_591_object; // 0x6b7 Mov
	var_594_string = "powder"; // 0x6b8 MovS
	func_1506(var_593_object, var_594_string); // 0x6b9 NEW_2
	if(var_592_bool == 0) goto Label_1726; // 0x6bb JumpB
	var_590_bool = 1; // 0x6bc MovB
	return 0; // 0x6bd Return
	
Label_1726:
	var_590_bool = 0; // 0x6be MovB
	return 0; // 0x6bf Return
}


func_1463(var_289_string, var_290_bool)
{
	var_293_bool = 0; var_294_float = 0; var_295_float = 0; var_296_bool = 0; var_297_float = 0; var_298_float = 0; // 0x5b7 PushV
	lshHasAnimation(var_296_bool, var_289_string); // 0x5b8 Func
	var_299_bool = var_296_bool; // 0x5ba Push
	if(var_299_bool == 0) goto Label_1473; // 0x5bb JumpB
	lshGetAnimTimes(var_289_string, var_297_float, var_298_float); // 0x5bc Func
	lshPlayAnimation(var_297_float, var_298_float, var_290_bool); // 0x5be Func
	goto Label_1477; // 0x5c0 Jump
	
Label_1477:
	return 6; // 0x5c5 Return
	
Label_1473:
	var_300_string = "Can't find lsh animation : "; // 0x5c1 PushS
	var_301_int = var_300_string + var_289_string; // 0x5c2 Add
	Trace(var_301_int); // 0x5c3 Func
}


func_2428(var_260_bool)
{
	var_260_bool = 0; // 0x97c MovB
	return 0; // 0x97d Return
}


func_1595()
{
	var_116_int = 0; var_117_int = 0; // 0x63b PushV
	var_118_string = "feromicin"; // 0x63c PushS
	var_119_int = 1; // 0x63d PushI
	RemoveItemByType(var_117_int, var_118_string, var_119_int); // 0x63e ObjFunc
	return 2; // 0x640 Return
}


func_1728(var_439_bool, var_440_object)
{
	var_441_bool = 0; var_442_object = Obj(); // 0x6c1 PushV
	var_442_object = var_440_object; // 0x6c2 Mov
	func_1788(var_442_object); // 0x6c3 NEW_2
	if(var_441_bool == 0) goto Label_1736; // 0x6c5 JumpB
	var_439_bool = 1; // 0x6c6 MovB
	return 0; // 0x6c7 Return
	
Label_1736:
	var_439_bool = 0; // 0x6c8 MovB
	return 0; // 0x6c9 Return
}


func_1601()
{
	var_104_int = 0; var_105_int = 0; // 0x641 PushV
	var_106_string = "monomicin"; // 0x642 PushS
	var_107_int = 1; // 0x643 PushI
	RemoveItemByType(var_105_int, var_106_string, var_107_int); // 0x644 ObjFunc
	return 2; // 0x646 Return
}


func_1347(var_71_bool)
{
	var_71_bool = 1; // 0x543 MovB
	return 0; // 0x544 Return
}


func_196(var_0_object, var_410_int, var_411_object)
{
	var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0; var_417_object = Obj(); var_418_bool = 0; var_419_int = 0; var_420_bool = 0; // 0xc4 PushV
	var_0_object = var_411_object; // 0xc5 TMov
	var_421_bool = 0; var_422_object = Obj(); var_423_float = 0; // 0xc6 PushV
	var_422_object = var_411_object; // 0xc7 Mov
	var_423_float = 130.0; // 0xc8 MovF
	func_1362(var_422_object, var_423_float); // 0xc9 NEW_2
	var_424_bool = var_421_bool == 0; // 0xcb Not
	if(var_424_bool == 0) goto Label_207; // 0xcc JumpB
	var_410_int = -2; // 0xcd MovI
	return 8; // 0xce Return
	
Label_207:
	CreateDialog(var_417_object); // 0xcf Func
	var_425_int = 0; // 0xd1 PushV
	func_2422(var_425_int); // 0xd2 NEW_2
	SetNPCName(var_425_int); // 0xd4 ObjFunc
	var_426_int = 0; // 0xd6 PushV
	func_2420(var_426_int); // 0xd7 NEW_2
	SetNPCDescription(var_426_int); // 0xd9 ObjFunc
	var_427_string = ""; // 0xdb PushV
	func_2424(var_427_string); // 0xdc NEW_2
	SetPhoto(var_427_string); // 0xde ObjFunc
	var_428_string = ""; // 0xe0 PushV
	func_2426(var_428_string); // 0xe1 NEW_2
	SetPhoto2(var_428_string); // 0xe3 ObjFunc
	var_429_int = 0; // 0xe5 PushV
	func_1808(var_429_int); // 0xe6 NEW_2
	SetPlayerName(var_429_int); // 0xe8 ObjFunc
	var_419_int = -1; // 0xea MovI
	IsOverrideActive(var_418_bool); // 0xeb Func
	var_430_bool = var_418_bool; // 0xed Push
	if(var_430_bool == 0) goto Label_241; // 0xee JumpB
	var_410_int = -2; // 0xef MovI
	return 8; // 0xf0 Return
	
Label_241:
	DoDialog(var_417_object); // 0xf1 Func
	var_431_object = Obj(); var_432_object = Obj(); // 0xf3 PushV
	var_431_object = var_411_object; // 0xf4 Mov
	var_432_object = var_417_object; // 0xf5 Mov
	TaskCall(3); // 0xf6 TaskCall
	func_270(var_433_object, var_434_object, var_435_string, var_436_bool, var_431_object, var_432_object); // 0xf7 NEW_2
	TaskReturn(); // 0xf8 TaskReturn
	IsDialogEnd(var_420_bool); // 0xfa ObjFunc
	
Label_252:
	var_634_bool = var_420_bool == 0; // 0xfc Not
	if(var_634_bool == 0) goto Label_259; // 0xfd JumpB
	sync(); // 0xfe Func
	IsDialogEnd(var_420_bool); // 0x100 ObjFunc
	goto Label_252; // 0x102 Jump
	
Label_259:
	var_635_object = Obj(); // 0x103 PushV
	var_635_object = var_411_object; // 0x104 Mov
	func_1430(); // 0x105 NEW_2
	StopDialog(var_417_object); // 0x107 Func
	GetReturnValue(var_419_int); // 0x109 ObjFunc
	var_410_int = var_419_int; // 0x10b Mov
	return 8; // 0x10c Return
}


func_965(var_0_object, var_1_object, var_2_object, var_3_string, var_278_object, var_279_object)
{
	var_0_object = var_279_object; // 0x3c6 TMov
	var_1_object = var_278_object; // 0x3c7 TMov
	var_3_string = 0; // 0x3c8 TMovB
	var_284_int = 1; // 0x3c9 PushI
	if(var_284_int == 0) goto Label_993; // 0x3ca JumpB
	var_285_string = ""; // 0x3cb PushV
	var_285_string = "Neutral"; // 0x3cc MovS
	func_1023(var_279_object, var_285_string); // 0x3cd NEW_2
	var_302_int = 521530; // 0x3cf PushI
	SetMessage(var_302_int); // 0x3d0 TObjFunc
	ClearReplies(); // 0x3d2 TObjFunc
	var_303_int = 521531; // 0x3d4 PushI
	var_304_int = 36229; // 0x3d5 PushI
	var_305_int = 22692; // 0x3d6 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x3d7 TObjFunc
	var_306_int = 534594; // 0x3d9 PushI
	var_307_int = 36233; // 0x3da PushI
	var_308_int = 36232; // 0x3db PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x3dc TObjFunc
	goto Label_993; // 0x3de Jump
	
Label_993:
	var_309_bool = 0; // 0x3e1 PushV
	func_2428(var_309_bool); // 0x3e2 NEW_2
	if(var_309_bool == 0) goto Label_1008; // 0x3e4 JumpB
	
Label_997:
	lshWaitForAnimEnd(); // 0x3e5 Func
	var_310_string = var_3_string; // 0x3e7 PushT
	if(var_310_string == 0) goto Label_1002; // 0x3e8 JumpB
	goto Label_1007; // 0x3e9 Jump
	
Label_1007:
	goto Label_1022; // 0x3ef Jump
	
Label_1022:
	return 0; // 0x3fe Return
	
Label_1002:
	var_311_string = ""; // 0x3ea PushV
	var_311_string = var_2_object; // 0x3eb MovT
	func_1447(var_311_string); // 0x3ec NEW_2
	goto Label_997; // 0x3ee Jump
	
Label_1008:
	var_322_string = "all"; // 0x3f0 PushS
	var_323_string = "idle"; // 0x3f1 PushS
	PlayAnimation(var_322_string, var_323_string); // 0x3f2 Func
	
Label_1012:
	WaitForAnimEnd(); // 0x3f4 Func
	var_324_string = var_3_string; // 0x3f6 PushT
	if(var_324_string == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1022; // 0x3f8 Jump
	
Label_1017:
	var_325_string = "all"; // 0x3f9 PushS
	var_326_string = "idle"; // 0x3fa PushS
	PlayAnimation(var_325_string, var_326_string); // 0x3fb Func
	goto Label_1012; // 0x3fd Jump
}


func_1349(var_27_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x545 PushV
	GetPosition(var_32_cvector); // 0x546 Func
	GetPosition(var_33_cvector); // 0x548 ObjFunc
	var_34_cvector = var_33_cvector - var_32_cvector; // 0x54a Sub2
	var_27_float = var_34_cvector | var_34_cvector; // 0x54b Or2
	return 6; // 0x54c Return
}


func_1607()
{
	var_63_string = "playsound"; // 0x648 PushS
	var_64_string = "giveitem"; // 0x649 PushS
	TriggerWorld(var_63_string, var_64_string); // 0x64a Func
	return 0; // 0x64c Return
}


func_1478(var_37_object)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x5c6 PushV
	GetEyesHeight(var_40_float); // 0x5c7 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5c9 MovV
	var_42_float = GetByIndex(var_41_cvector, 1); // 0x5ca PushE
	var_42_float = var_40_float; // 0x5cb Mov
	SetByIndex(var_41_cvector, 1) = var_42_float; // 0x5cc PopE
	var_43_string = "head"; // 0x5cd PushS
	LookAsync(var_37_object, var_43_string, var_41_cvector); // 0x5ce Func
	return 4; // 0x5d0 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_367_object, var_368_object)
{
	var_0_object = var_368_object; // 0x4b TMov
	var_1_object = var_367_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_373_int = 1; // 0x4e PushI
	if(var_373_int == 0) goto Label_102; // 0x4f JumpB
	var_374_string = ""; // 0x50 PushV
	var_374_string = "Neutral"; // 0x51 MovS
	func_132(var_368_object, var_374_string); // 0x52 NEW_2
	var_382_int = 533911; // 0x54 PushI
	SetMessage(var_382_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_383_int = 533912; // 0x59 PushI
	var_384_int = -1; // 0x5a PushI
	var_385_int = 35471; // 0x5b PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x5c TObjFunc
	var_386_int = 533913; // 0x5e PushI
	var_387_int = -1; // 0x5f PushI
	var_388_int = 35472; // 0x60 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_389_bool = 0; // 0x66 PushV
	func_2428(var_389_bool); // 0x67 NEW_2
	if(var_389_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_390_string = var_3_string; // 0x6c PushT
	if(var_390_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_391_string = ""; // 0x6f PushV
	var_391_string = var_2_object; // 0x70 MovT
	func_1447(var_391_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_392_string = "all"; // 0x75 PushS
	var_393_string = "idle"; // 0x76 PushS
	PlayAnimation(var_392_string, var_393_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_394_string = var_3_string; // 0x7b PushT
	if(var_394_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_395_string = "all"; // 0x7e PushS
	var_396_string = "idle"; // 0x7f PushS
	PlayAnimation(var_395_string, var_396_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1738(var_604_bool, var_605_object)
{
	var_606_bool = 0; var_607_object = Obj(); // 0x6cb PushV
	var_607_object = var_605_object; // 0x6cc Mov
	func_1801(var_607_object); // 0x6cd NEW_2
	if(var_606_bool == 0) goto Label_1746; // 0x6cf JumpB
	var_604_bool = 1; // 0x6d0 MovB
	return 0; // 0x6d1 Return
	
Label_1746:
	var_604_bool = 0; // 0x6d2 MovB
	return 0; // 0x6d3 Return
}


func_1613()
{
	var_529_string = ""; var_530_string = ""; // 0x64d PushV
	var_531_string = "npc"; // 0x64e PushS
	GetProperty(var_531_string, var_530_string); // 0x64f Func
	var_532_string = "oo"; // 0x651 PushS
	var_533_int = var_532_string + var_530_string; // 0x652 Add
	var_534_string = "1"; // 0x653 PushS
	var_535_int = var_533_int + var_534_string; // 0x654 Add
	var_536_int = 1; // 0x655 PushI
	SetVariable(var_535_int, var_536_int); // 0x656 Func
	return 2; // 0x658 Return
}


func_462(var_2_object, var_537_string)
{
	var_538_bool = 0; // 0x1cf PushV
	func_2428(var_538_bool); // 0x1d0 NEW_2
	var_539_bool = var_538_bool == 0; // 0x1d2 Not
	if(var_539_bool == 0) goto Label_469; // 0x1d3 JumpB
	return 0; // 0x1d4 Return
	
Label_469:
	var_540_bool = var_537_string == var_2_object; // 0x1d5 Eq
	if(var_540_bool == 0) goto Label_472; // 0x1d6 JumpB
	return 0; // 0x1d7 Return
	
Label_472:
	var_541_string = ""; var_542_bool = 0; // 0x1d8 PushV
	var_541_string = var_537_string; // 0x1d9 Mov
	var_543_string = ""; // 0x1da PushS
	var_544_bool = var_537_string == var_543_string; // 0x1db Eq
	if(var_544_bool == 0) goto Label_479; // 0x1dc JumpB
	var_542_bool = 0; // 0x1dd MovB
	goto Label_480; // 0x1de Jump
	
Label_480:
	func_1463(var_541_string, var_542_bool); // 0x1e0 NEW_2
	var_2_object = var_537_string; // 0x1e2 TMov
	return 0; // 0x1e3 Return
	
Label_479:
	var_542_bool = 1; // 0x1df MovB
}


func_1357(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x54d PushV
	IsLoaded(var_25_bool); // 0x54e Func
	var_23_bool = var_25_bool; // 0x550 Mov
	return 2; // 0x551 Return
}


func_1230(var_0_object, var_1_object, var_4_bool, var_23_bool)
{
	var_24_float = 0; var_25_float = 0; // 0x4ce PushV
	var_26_bool = var_4_bool == 0; // 0x4cf NullEq
	if(var_26_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_23_bool = 0; // 0x4d1 MovB
	return 2; // 0x4d2 Return
	
Label_1235:
	var_27_float = 0; var_28_object = Obj(); // 0x4d3 PushV
	var_28_object = var_4_bool; // 0x4d4 MovT
	func_1349(var_28_object); // 0x4d5 NEW_2
	var_25_float = sqrt(var_27_float); // 0x4d7 Sqrt2
	var_35_object = var_2_object; // 0x4d8 PushT
	if(var_35_object == 0) goto Label_1243; // 0x4d9 JumpB
	var_25_float = var_25_float - var_1_object; // 0x4da Sub2
	
Label_1243:
	var_23_bool = var_25_float < var_0_object; // 0x4db LT2
	return 2; // 0x4dc Return
}


func_1489()
{
	var_23_bool = 0; // 0x5d1 PushV
	func_2428(var_23_bool); // 0x5d2 NEW_2
	if(var_23_bool == 0) goto Label_1495; // 0x5d4 JumpB
	lshStopSpeech(); // 0x5d5 Func
	
Label_1495:
	return 0; // 0x5d7 Return
}


func_1362(var_218_bool, var_220_float)
{
	var_221_float = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_bool = 0; var_229_bool = 0; var_230_float = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_bool = 0; var_238_bool = 0; // 0x552 PushV
	GetPosition(var_231_cvector); // 0x553 ObjFunc
	GetEyesHeight(var_230_float); // 0x555 ObjFunc
	var_239_float = GetByIndex(var_231_cvector, 1); // 0x557 PushE
	var_239_float = var_239_float + var_230_float; // 0x558 Add2
	SetByIndex(var_231_cvector, 1) = var_239_float; // 0x559 PopE
	GetPosition(var_232_cvector); // 0x55a Func
	GetEyesHeight(var_230_float); // 0x55c Func
	var_240_float = GetByIndex(var_232_cvector, 1); // 0x55e PushE
	var_240_float = var_240_float + var_230_float; // 0x55f Add2
	SetByIndex(var_232_cvector, 1) = var_240_float; // 0x560 PopE
	var_233_cvector = var_231_cvector - var_232_cvector; // 0x561 Sub2
	var_241_float = GetByIndex(var_233_cvector, 1); // 0x562 PushE
	var_241_float = 0; // 0x563 MovI
	SetByIndex(var_233_cvector, 1) = var_241_float; // 0x564 PopE
	var_242_int = var_233_cvector | var_233_cvector; // 0x565 Or
	var_243_float = sqrt(var_242_int); // 0x566 Sqrt
	var_233_cvector = var_233_cvector / var_233_cvector; // 0x567 Div2
	var_234_cvector = -var_233_cvector; // 0x568 Neg2
	var_244_float = var_233_cvector * var_220_float; // 0x569 Mult
	var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); // 0x56a PushV
	var_247_cvector = CVector(0.0, 1.0, 0.0); // 0x56b PushVec
	var_246_cvector = var_234_cvector ^ var_247_cvector; // 0x56c Xor2
	func_1496(var_245_cvector, var_246_cvector); // 0x56d NEW_2
	var_253_int = 25; // 0x56f PushI
	var_254_float = var_245_cvector * var_253_int; // 0x570 Mult
	var_255_int = var_244_float + var_254_float; // 0x571 Add
	var_256_cvector = CVector(0.0, 10.0, 0.0); // 0x572 PushVec
	var_235_cvector = var_255_int - var_256_cvector; // 0x573 Sub2
	var_236_cvector = var_232_cvector + var_235_cvector; // 0x574 Add2
	IsOverrideActive(var_237_bool); // 0x575 Func
	var_257_bool = var_237_bool; // 0x577 Push
	if(var_257_bool == 0) goto Label_1403; // 0x578 JumpB
	var_218_bool = 0; // 0x579 MovB
	return 18; // 0x57a Return
	
Label_1403:
	StopWorld(); // 0x57b Func
	CameraTransit(var_236_cvector, var_234_cvector); // 0x57d Func
	var_258_float = GetByIndex(var_235_cvector, 0); // 0x57f PushE
	var_259_float = GetByIndex(var_235_cvector, 2); // 0x580 PushE
	Rotate(var_258_float, var_259_float); // 0x581 Func
	var_260_bool = 0; // 0x583 PushV
	func_2428(var_260_bool); // 0x584 NEW_2
	if(var_260_bool == 0) goto Label_1416; // 0x586 JumpB
	goto Label_1424; // 0x587 Jump
	
Label_1424:
	CameraWaitForPlayFinish(); // 0x590 Func
	ResumeWorld(); // 0x592 Func
	var_218_bool = 1; // 0x594 MovB
	return 18; // 0x595 Return
	
Label_1416:
	var_261_string = "head"; // 0x588 PushS
	HasAnimationTrack(var_238_bool, var_261_string); // 0x589 Func
	var_262_bool = var_238_bool; // 0x58b Push
	if(var_262_bool == 0) goto Label_1424; // 0x58c JumpB
	var_263_string = "head"; // 0x58d PushS
	LookAsyncCamera(var_263_string); // 0x58e Func
}


func_1748(var_455_bool)
{
	var_457_string = ""; var_458_int = 0; var_459_string = ""; var_460_int = 0; // 0x6d4 PushV
	var_461_string = "npc"; // 0x6d5 PushS
	GetProperty(var_461_string, var_459_string); // 0x6d6 Func
	var_462_int = 0; var_463_string = ""; // 0x6d8 PushV
	var_463_string = var_459_string; // 0x6d9 Mov
	func_1831(var_462_int, var_463_string); // 0x6da NEW_2
	var_460_int = var_462_int; // 0x6db Mov
	var_464_int = 0; // 0x6dd PushV
	func_1825(var_464_int); // 0x6de NEW_2
	var_468_int = 1; // 0x6e0 PushI
	var_469_bool = var_464_int == var_468_int; // 0x6e1 Eq
	if(var_469_bool == 0) goto Label_1770; // 0x6e2 JumpB
	var_470_bool = 0; var_471_int = 0; // 0x6e3 PushV
	var_471_int = var_460_int; // 0x6e4 Mov
	func_2261(var_470_bool, var_471_int); // 0x6e5 NEW_2
	var_455_bool = var_470_bool; // 0x6e6 Mov
	return 4; // 0x6e8 Return
	
Label_1770:
	var_486_int = 0; // 0x6ea PushV
	func_1825(var_486_int); // 0x6eb NEW_2
	var_487_int = 0; // 0x6ed PushI
	var_488_bool = var_486_int == var_487_int; // 0x6ee Eq
	if(var_488_bool == 0) goto Label_1782; // 0x6ef JumpB
	var_489_bool = 0; var_490_int = 0; // 0x6f0 PushV
	var_490_int = var_460_int; // 0x6f1 Mov
	func_2299(var_489_bool, var_490_int); // 0x6f2 NEW_2
	var_455_bool = var_489_bool; // 0x6f3 Mov
	return 4; // 0x6f5 Return
	
Label_1782:
	var_507_bool = 0; var_508_int = 0; // 0x6f6 PushV
	var_508_int = var_460_int; // 0x6f7 Mov
	func_2342(var_507_bool, var_508_int); // 0x6f8 NEW_2
	var_455_bool = var_507_bool; // 0x6f9 Mov
	return 4; // 0x6fb Return
}


func_2261(var_470_bool, var_471_int)
{
	var_472_int = 18; // 0x8d6 PushI
	var_473_bool = var_471_int == var_472_int; // 0x8d7 Eq
	if(var_473_bool == 0) goto Label_2267; // 0x8d8 JumpB
	var_470_bool = 1; // 0x8d9 MovB
	return 0; // 0x8da Return
	
Label_2267:
	var_474_int = 24; // 0x8db PushI
	var_475_bool = var_471_int == var_474_int; // 0x8dc Eq
	if(var_475_bool == 0) goto Label_2272; // 0x8dd JumpB
	var_470_bool = 1; // 0x8de MovB
	return 0; // 0x8df Return
	
Label_2272:
	var_476_int = 20; // 0x8e0 PushI
	var_477_bool = var_471_int == var_476_int; // 0x8e1 Eq
	if(var_477_bool == 0) goto Label_2277; // 0x8e2 JumpB
	var_470_bool = 1; // 0x8e3 MovB
	return 0; // 0x8e4 Return
	
Label_2277:
	var_478_int = 14; // 0x8e5 PushI
	var_479_bool = var_471_int == var_478_int; // 0x8e6 Eq
	if(var_479_bool == 0) goto Label_2282; // 0x8e7 JumpB
	var_470_bool = 1; // 0x8e8 MovB
	return 0; // 0x8e9 Return
	
Label_2282:
	var_480_int = 10; // 0x8ea PushI
	var_481_bool = var_471_int == var_480_int; // 0x8eb Eq
	if(var_481_bool == 0) goto Label_2287; // 0x8ec JumpB
	var_470_bool = 1; // 0x8ed MovB
	return 0; // 0x8ee Return
	
Label_2287:
	var_482_int = 17; // 0x8ef PushI
	var_483_bool = var_471_int == var_482_int; // 0x8f0 Eq
	if(var_483_bool == 0) goto Label_2292; // 0x8f1 JumpB
	var_470_bool = 1; // 0x8f2 MovB
	return 0; // 0x8f3 Return
	
Label_2292:
	var_484_int = 8; // 0x8f4 PushI
	var_485_bool = var_471_int == var_484_int; // 0x8f5 Eq
	if(var_485_bool == 0) goto Label_2297; // 0x8f6 JumpB
	var_470_bool = 1; // 0x8f7 MovB
	return 0; // 0x8f8 Return
	
Label_2297:
	var_470_bool = 0; // 0x8f9 MovB
	return 0; // 0x8fa Return
}


func_2390(var_335_bool, var_336_int)
{
	var_339_int = 0; var_340_int = 0; // 0x956 PushV
	var_341_string = "vol_"; // 0x957 PushS
	var_342_int = var_341_string + var_336_int; // 0x958 Add
	GetVariable(var_342_int, var_340_int); // 0x959 Func
	var_343_int = 32; // 0x95b PushI
	var_344_int = var_340_int & var_343_int; // 0x95c And
	var_345_int = 0; // 0x95d PushI
	var_335_bool = var_344_int != var_345_int; // 0x95e Neq2
	return 2; // 0x95f Return
}


func_1496(var_245_cvector, var_246_cvector)
{
	var_248_float = 0; var_249_float = 0; // 0x5d8 PushV
	var_250_int = var_246_cvector | var_246_cvector; // 0x5d9 Or
	var_249_float = sqrt(var_250_int); // 0x5da Sqrt2
	var_251_float = 0.0; // 0x5db PushF
	var_252_bool = var_249_float < var_251_float; // 0x5dc LT
	if(var_252_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_245_cvector = CVector(0.0, 0.0, 0.0); // 0x5de MovV
	return 2; // 0x5df Return
	
Label_1504:
	var_245_cvector = var_246_cvector / var_246_cvector; // 0x5e0 Div2
	return 2; // 0x5e1 Return
}


func_1625()
{
	var_69_int = 0; var_70_int = 0; // 0x659 PushV
	var_71_string = "powder"; // 0x65a PushS
	var_72_int = 1; // 0x65b PushI
	RemoveItemByType(var_70_int, var_71_string, var_72_int); // 0x65c ObjFunc
	return 2; // 0x65e Return
}


func_1631()
{
	var_28_int = 0; var_29_int = 0; // 0x65f PushV
	var_30_string = "burah_serum"; // 0x660 PushS
	var_31_int = 1; // 0x661 PushI
	RemoveItemByType(var_29_int, var_30_string, var_31_int); // 0x662 ObjFunc
	return 2; // 0x664 Return
}


func_2400(var_399_bool, var_400_int)
{
	var_403_int = 0; var_404_int = 0; // 0x960 PushV
	var_405_string = "vol_"; // 0x961 PushS
	var_406_int = var_405_string + var_400_int; // 0x962 Add
	GetVariable(var_406_int, var_404_int); // 0x963 Func
	var_407_int = 4; // 0x965 PushI
	var_408_int = var_404_int & var_407_int; // 0x966 And
	var_409_int = 0; // 0x967 PushI
	var_399_bool = var_408_int != var_409_int; // 0x968 Neq2
	return 2; // 0x969 Return
}


func_1506(var_580_bool, var_582_string)
{
	var_583_int = 0; var_584_bool = 0; var_585_int = 0; var_586_bool = 0; // 0x5e2 PushV
	GetInvItemByName(var_585_int, var_582_string); // 0x5e3 Func
	HasItem(var_585_int, var_586_bool); // 0x5e5 ObjFunc
	var_580_bool = var_586_bool; // 0x5e7 Mov
	return 4; // 0x5e8 Return
}


func_1637()
{
	var_34_string = ""; var_35_string = ""; // 0x665 PushV
	var_36_string = "npc"; // 0x666 PushS
	GetProperty(var_36_string, var_35_string); // 0x667 Func
	var_37_int = 0; // 0x669 PushV
	func_1825(var_37_int); // 0x66a NEW_2
	var_41_int = 0; // 0x66c PushI
	var_42_bool = var_37_int == var_41_int; // 0x66d Eq
	if(var_42_bool == 0) goto Label_1654; // 0x66e JumpB
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x66f PushV
	var_44_string = "volonteers_danko"; // 0x670 MovS
	var_45_string = "rescue"; // 0x671 MovS
	var_46_string = var_35_string; // 0x672 Mov
	func_1513(var_43_bool, var_44_string, var_45_string, var_46_string); // 0x673 NEW_2
	goto Label_1673; // 0x675 Jump
	
Label_1673:
	return 2; // 0x689 Return
	
Label_1654:
	var_50_int = 0; // 0x676 PushV
	func_1825(var_50_int); // 0x677 NEW_2
	var_51_int = 1; // 0x679 PushI
	var_52_bool = var_50_int == var_51_int; // 0x67a Eq
	if(var_52_bool == 0) goto Label_1667; // 0x67b JumpB
	var_53_bool = 0; var_54_string = ""; var_55_string = ""; var_56_string = ""; // 0x67c PushV
	var_54_string = "volonteers_burah"; // 0x67d MovS
	var_55_string = "rescue"; // 0x67e MovS
	var_56_string = var_35_string; // 0x67f Mov
	func_1513(var_53_bool, var_54_string, var_55_string, var_56_string); // 0x680 NEW_2
	goto Label_1673; // 0x682 Jump
	
Label_1667:
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; var_60_string = ""; // 0x683 PushV
	var_58_string = "volonteers_klara"; // 0x684 MovS
	var_59_string = "rescue"; // 0x685 MovS
	var_60_string = var_35_string; // 0x686 Mov
	func_1513(var_57_bool, var_58_string, var_59_string, var_60_string); // 0x687 NEW_2
}


func_1513(var_43_bool, var_44_string, var_45_string, var_46_string)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x5e9 PushV
	FindActor(var_48_object, var_44_string); // 0x5ea Func
	var_49_bool = var_48_object == 0; // 0x5ec NullEq
	if(var_49_bool == 0) goto Label_1520; // 0x5ed JumpB
	var_43_bool = 0; // 0x5ee MovB
	return 2; // 0x5ef Return
	
Label_1520:
	Trigger(var_48_object, var_45_string, var_46_string); // 0x5f0 Func
	var_43_bool = 1; // 0x5f2 MovB
	return 2; // 0x5f3 Return
}


func_2410(var_196_bool, var_197_int)
{
	var_200_int = 0; var_201_int = 0; // 0x96a PushV
	var_202_string = "vol_"; // 0x96b PushS
	var_203_int = var_202_string + var_197_int; // 0x96c Add
	GetVariable(var_203_int, var_201_int); // 0x96d Func
	var_204_int = 16; // 0x96f PushI
	var_205_int = var_201_int & var_204_int; // 0x970 And
	var_206_int = 0; // 0x971 PushI
	var_196_bool = var_205_int != var_206_int; // 0x972 Neq2
	return 2; // 0x973 Return
}


func_2420(var_266_int)
{
	var_266_int = 515571; // 0x974 MovI
	return 0; // 0x975 Return
}


func_1268()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x4f4 PushV
	WaitForAnimEnd(); // 0x4f5 Func
	var_44_bool = 0; // 0x4f7 PushV
	func_1357(var_44_bool); // 0x4f8 NEW_2
	var_45_bool = var_44_bool == 0; // 0x4fa Not
	if(var_45_bool == 0) goto Label_1277; // 0x4fb JumpB
	return 14; // 0x4fc Return
	
Label_1277:
	var_46_int = 0; // 0x4fd PushV
	func_1541(var_46_int); // 0x4fe NEW_2
	var_37_int = var_46_int; // 0x4ff Mov
	var_38_int = 0; // 0x501 MovI
	
Label_1282:
	var_59_bool = 0; // 0x502 PushV
	var_59_bool = 0; // 0x503 MovB
	var_60_int = 5; // 0x504 PushI
	var_61_bool = var_38_int < var_60_int; // 0x505 LT
	if(var_61_bool == 0) goto Label_1292; // 0x506 JumpB
	var_62_bool = 0; // 0x507 PushV
	func_1357(var_62_bool); // 0x508 NEW_2
	if(var_62_bool == 0) goto Label_1292; // 0x50a JumpB
	var_59_bool = 1; // 0x50b MovB
	
Label_1292:
	if(var_59_bool == 0) goto Label_1344; // 0x50c JumpB
	var_63_int = 3; // 0x50d PushI
	irand(var_39_int, var_63_int); // 0x50e Func
	var_64_int = 0; // 0x510 PushI
	var_65_bool = var_39_int == var_64_int; // 0x511 Eq
	if(var_65_bool == 0) goto Label_1316; // 0x512 JumpB
	var_66_int = var_37_int; // 0x513 Push
	if(var_66_int == 0) goto Label_1315; // 0x514 JumpB
	irand(var_40_int, var_37_int); // 0x515 Func
	var_67_string = "all"; // 0x517 PushS
	var_68_string = ""; var_69_int = 0; // 0x518 PushV
	var_69_int = var_40_int; // 0x519 Mov
	func_1534(var_68_string, var_69_int); // 0x51a NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x51c Func
	WaitForAnimEnd(var_41_bool); // 0x51e Func
	var_70_bool = var_41_bool == 0; // 0x520 Not
	if(var_70_bool == 0) goto Label_1315; // 0x521 JumpB
	goto Label_1344; // 0x522 Jump
	
Label_1344:
	ResetAAS(); // 0x540 Func
	return 14; // 0x542 Return
	
Label_1315:
	goto Label_1333; // 0x523 Jump
	
Label_1333:
	var_71_bool = 0; // 0x535 PushV
	func_1347(var_71_bool); // 0x536 NEW_2
	var_72_bool = var_71_bool == 0; // 0x538 Not
	if(var_72_bool == 0) goto Label_1339; // 0x539 JumpB
	goto Label_1344; // 0x53a Jump
	
Label_1339:
	ResetAAS(); // 0x53b Func
	var_73_int = 1; // 0x53d PushI
	var_38_int = var_38_int + var_73_int; // 0x53e Add2
	goto Label_1282; // 0x53f Jump
	
Label_1316:
	var_74_int = 1; // 0x524 PushI
	var_75_bool = var_39_int == var_74_int; // 0x525 Eq
	if(var_75_bool == 0) goto Label_1330; // 0x526 JumpB
	var_76_int = 4; // 0x527 PushI
	rand(var_42_float, var_76_int); // 0x528 Func
	var_77_int = 1; // 0x52a PushI
	var_78_int = var_42_float + var_77_int; // 0x52b Add
	Sleep(var_78_int, var_43_bool); // 0x52c Func
	var_79_bool = var_43_bool == 0; // 0x52e Not
	if(var_79_bool == 0) goto Label_1329; // 0x52f JumpB
	goto Label_1344; // 0x530 Jump
	
Label_1329:
	goto Label_1333; // 0x531 Jump
	
Label_1330:
	var_80_int = var_38_int; // 0x532 Push
	if(var_80_int == 0) goto Label_1333; // 0x533 JumpB
	goto Label_1344; // 0x534 Jump
}


func_2422(var_265_int)
{
	var_265_int = 504029; // 0x976 MovI
	return 0; // 0x977 Return
}


func_1525(var_608_int)
{
	var_609_float = 0; var_610_float = 0; // 0x5f5 PushV
	GetGameTime(var_610_float); // 0x5f6 Func
	var_611_int = 1; // 0x5f8 PushI
	var_612_int = 0; // 0x5f9 PushV
	var_613_int = 24; // 0x5fa PushI
	var_612_int = var_610_float / var_610_float; // 0x5fb Div2
	var_608_int = var_611_int + var_612_int; // 0x5fc Add2
	return 2; // 0x5fd Return
}


func_2424(var_267_string)
{
	var_267_string = "ui/NPC_bmask.png"; // 0x978 MovS
	return 0; // 0x979 Return
}


func_2426(var_268_string)
{
	var_268_string = "ui/NPC_bmask_b.png"; // 0x97a MovS
	return 0; // 0x97b Return
}


func_2299(var_489_bool, var_490_int)
{
	var_491_int = 6; // 0x8fc PushI
	var_492_bool = var_490_int == var_491_int; // 0x8fd Eq
	if(var_492_bool == 0) goto Label_2305; // 0x8fe JumpB
	var_489_bool = 1; // 0x8ff MovB
	return 0; // 0x900 Return
	
Label_2305:
	var_493_int = 26; // 0x901 PushI
	var_494_bool = var_490_int == var_493_int; // 0x902 Eq
	if(var_494_bool == 0) goto Label_2310; // 0x903 JumpB
	var_489_bool = 1; // 0x904 MovB
	return 0; // 0x905 Return
	
Label_2310:
	var_495_int = 2; // 0x906 PushI
	var_496_bool = var_490_int == var_495_int; // 0x907 Eq
	if(var_496_bool == 0) goto Label_2315; // 0x908 JumpB
	var_489_bool = 1; // 0x909 MovB
	return 0; // 0x90a Return
	
Label_2315:
	var_497_int = 22; // 0x90b PushI
	var_498_bool = var_490_int == var_497_int; // 0x90c Eq
	if(var_498_bool == 0) goto Label_2320; // 0x90d JumpB
	var_489_bool = 1; // 0x90e MovB
	return 0; // 0x90f Return
	
Label_2320:
	var_499_int = 15; // 0x910 PushI
	var_500_bool = var_490_int == var_499_int; // 0x911 Eq
	if(var_500_bool == 0) goto Label_2325; // 0x912 JumpB
	var_489_bool = 1; // 0x913 MovB
	return 0; // 0x914 Return
	
Label_2325:
	var_501_int = 5; // 0x915 PushI
	var_502_bool = var_490_int == var_501_int; // 0x916 Eq
	if(var_502_bool == 0) goto Label_2330; // 0x917 JumpB
	var_489_bool = 1; // 0x918 MovB
	return 0; // 0x919 Return
	
Label_2330:
	var_503_int = 16; // 0x91a PushI
	var_504_bool = var_490_int == var_503_int; // 0x91b Eq
	if(var_504_bool == 0) goto Label_2335; // 0x91c JumpB
	var_489_bool = 1; // 0x91d MovB
	return 0; // 0x91e Return
	
Label_2335:
	var_505_int = 19; // 0x91f PushI
	var_506_bool = var_490_int == var_505_int; // 0x920 Eq
	if(var_506_bool == 0) goto Label_2340; // 0x921 JumpB
	var_489_bool = 1; // 0x922 MovB
	return 0; // 0x923 Return
	
Label_2340:
	var_489_bool = 0; // 0x924 MovB
	return 0; // 0x925 Return
}


func_1788(var_441_bool)
{
	var_443_string = ""; var_444_int = 0; var_445_string = ""; var_446_int = 0; // 0x6fc PushV
	var_447_string = "npc"; // 0x6fd PushS
	GetProperty(var_447_string, var_445_string); // 0x6fe Func
	var_448_string = "oo"; // 0x700 PushS
	var_449_int = var_448_string + var_445_string; // 0x701 Add
	var_450_string = "1"; // 0x702 PushS
	var_451_int = var_449_int + var_450_string; // 0x703 Add
	GetVariable(var_451_int, var_446_int); // 0x704 Func
	var_452_int = 0; // 0x706 PushI
	var_441_bool = var_446_int == var_452_int; // 0x707 Eq2
	return 4; // 0x708 Return
}


func_1534(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x5fe PushV
	var_55_string = "idle"; // 0x5ff MovS
	var_56_int = var_53_int; // 0x600 Push
	if(var_56_int == 0) goto Label_1539; // 0x601 JumpB
	var_55_string = var_55_string + var_53_int; // 0x602 Add2
	
Label_1539:
	var_52_string = var_55_string; // 0x603 Mov
	return 2; // 0x604 Return
}


func_1023(var_2_object, var_285_string)
{
	var_286_bool = 0; // 0x400 PushV
	func_2428(var_286_bool); // 0x401 NEW_2
	var_287_bool = var_286_bool == 0; // 0x403 Not
	if(var_287_bool == 0) goto Label_1030; // 0x404 JumpB
	return 0; // 0x405 Return
	
Label_1030:
	var_288_bool = var_285_string == var_2_object; // 0x406 Eq
	if(var_288_bool == 0) goto Label_1033; // 0x407 JumpB
	return 0; // 0x408 Return
	
Label_1033:
	var_289_string = ""; var_290_bool = 0; // 0x409 PushV
	var_289_string = var_285_string; // 0x40a Mov
	var_291_string = ""; // 0x40b PushS
	var_292_bool = var_285_string == var_291_string; // 0x40c Eq
	if(var_292_bool == 0) goto Label_1040; // 0x40d JumpB
	var_290_bool = 0; // 0x40e MovB
	goto Label_1041; // 0x40f Jump
	
Label_1041:
	func_1463(var_289_string, var_290_bool); // 0x411 NEW_2
	var_2_object = var_285_string; // 0x413 TMov
	return 0; // 0x414 Return
	
Label_1040:
	var_290_bool = 1; // 0x410 MovB
}


