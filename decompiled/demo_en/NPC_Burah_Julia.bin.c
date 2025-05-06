task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0xa7 PushI
	if(var_18_int == 0) goto Label_258; // 0xa8 JumpB
	func_1266(); // 0xaa NEW_2
	var_20_int = 36971; // 0xac PushI
	var_21_bool = var_16_bool == var_20_int; // 0xad Eq
	if(var_21_bool == 0) goto Label_200; // 0xae JumpB
	var_22_string = ""; // 0xaf PushV
	var_22_string = "Neutral"; // 0xb0 MovS
	func_144(var_17_cvector, var_22_string); // 0xb1 NEW_2
	var_39_int = 535294; // 0xb3 PushI
	SetMessage(var_39_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_40_int = 535295; // 0xb8 PushI
	var_41_int = 36973; // 0xb9 PushI
	var_42_int = 36972; // 0xba PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xbb TObjFunc
	var_43_int = 535302; // 0xbd PushI
	var_44_int = -1; // 0xbe PushI
	var_45_int = 36980; // 0xbf PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xc0 TObjFunc
	var_46_int = 535303; // 0xc2 PushI
	var_47_int = -1; // 0xc3 PushI
	var_48_int = 36981; // 0xc4 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_49_int = 36973; // 0xc8 PushI
	var_50_bool = var_16_bool == var_49_int; // 0xc9 Eq
	if(var_50_bool == 0) goto Label_223; // 0xca JumpB
	var_51_string = ""; // 0xcb PushV
	var_51_string = "Neutral"; // 0xcc MovS
	func_144(var_17_cvector, var_51_string); // 0xcd NEW_2
	var_52_int = 535296; // 0xcf PushI
	SetMessage(var_52_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_53_int = 535297; // 0xd4 PushI
	var_54_int = 36975; // 0xd5 PushI
	var_55_int = 36974; // 0xd6 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xd7 TObjFunc
	var_56_int = 535301; // 0xd9 PushI
	var_57_int = 36975; // 0xda PushI
	var_58_int = 36978; // 0xdb PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_59_int = 36975; // 0xdf PushI
	var_60_bool = var_16_bool == var_59_int; // 0xe0 Eq
	if(var_60_bool == 0) goto Label_246; // 0xe1 JumpB
	var_61_string = ""; // 0xe2 PushV
	var_61_string = "Neutral"; // 0xe3 MovS
	func_144(var_17_cvector, var_61_string); // 0xe4 NEW_2
	var_62_int = 535298; // 0xe6 PushI
	SetMessage(var_62_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_63_int = 535299; // 0xeb PushI
	var_64_int = -1; // 0xec PushI
	var_65_int = 36976; // 0xed PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xee TObjFunc
	var_66_int = 535300; // 0xf0 PushI
	var_67_int = -1; // 0xf1 PushI
	var_68_int = 36977; // 0xf2 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_69_bool = 0; // 0xf7 PushV
	func_1336(var_69_bool); // 0xf8 NEW_2
	if(var_69_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0x1a5 PushI
	if(var_18_int == 0) goto Label_502; // 0x1a6 JumpB
	func_1266(); // 0x1a8 NEW_2
	var_20_int = 19145; // 0x1aa PushI
	var_21_bool = var_16_bool == var_20_int; // 0x1ab Eq
	if(var_21_bool == 0) goto Label_449; // 0x1ac JumpB
	var_22_string = ""; // 0x1ad PushV
	var_22_string = "Neutral"; // 0x1ae MovS
	func_398(var_17_cvector, var_22_string); // 0x1af NEW_2
	var_39_int = 518012; // 0x1b1 PushI
	SetMessage(var_39_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_40_int = 518013; // 0x1b6 PushI
	var_41_int = 32562; // 0x1b7 PushI
	var_42_int = 19146; // 0x1b8 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x1b9 TObjFunc
	var_43_int = 531249; // 0x1bb PushI
	var_44_int = 32565; // 0x1bc PushI
	var_45_int = 32564; // 0x1bd PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_46_int = 32565; // 0x1c1 PushI
	var_47_bool = var_16_bool == var_46_int; // 0x1c2 Eq
	if(var_47_bool == 0) goto Label_467; // 0x1c3 JumpB
	var_48_string = ""; // 0x1c4 PushV
	var_48_string = "Fear"; // 0x1c5 MovS
	func_398(var_17_cvector, var_48_string); // 0x1c6 NEW_2
	var_49_int = 531250; // 0x1c8 PushI
	SetMessage(var_49_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_50_int = 531251; // 0x1cd PushI
	var_51_int = 32562; // 0x1ce PushI
	var_52_int = 32566; // 0x1cf PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_53_int = 32562; // 0x1d3 PushI
	var_54_bool = var_16_bool == var_53_int; // 0x1d4 Eq
	if(var_54_bool == 0) goto Label_490; // 0x1d5 JumpB
	var_55_string = ""; // 0x1d6 PushV
	var_55_string = "Independence"; // 0x1d7 MovS
	func_398(var_17_cvector, var_55_string); // 0x1d8 NEW_2
	var_56_int = 531247; // 0x1da PushI
	SetMessage(var_56_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_57_int = 531248; // 0x1df PushI
	var_58_int = -1; // 0x1e0 PushI
	var_59_int = 32563; // 0x1e1 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x1e2 TObjFunc
	var_60_int = 531252; // 0x1e4 PushI
	var_61_int = -1; // 0x1e5 PushI
	var_62_int = 32568; // 0x1e6 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_3_string = 1; // 0x1ea TMovB
	var_63_bool = 0; // 0x1eb PushV
	func_1336(var_63_bool); // 0x1ec NEW_2
	if(var_63_bool == 0) goto Label_498; // 0x1ee JumpB
	lshStopAnimation(); // 0x1ef Func
	goto Label_500; // 0x1f1 Jump
	
Label_500:
	return 0; // 0x1f4 Return
	
Label_498:
	StopAnimation(); // 0x1f2 Func
	
Label_502:
	return 0; // 0x1f6 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	var_18_int = 1; // 0x299 PushI
	if(var_18_int == 0) goto Label_705; // 0x29a JumpB
	func_1266(); // 0x29c NEW_2
	var_20_int = 42560; // 0x29e PushI
	var_21_bool = var_16_int == var_20_int; // 0x29f Eq
	if(var_21_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_22_string = ""; // 0x2a1 PushV
	var_22_string = "Neutral"; // 0x2a2 MovS
	func_642(var_17_cvector, var_22_string); // 0x2a3 NEW_2
	var_39_int = 540551; // 0x2a5 PushI
	SetMessage(var_39_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_40_int = 540552; // 0x2aa PushI
	var_41_int = -1; // 0x2ab PushI
	var_42_int = 42561; // 0x2ac PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x2ad TObjFunc
	var_43_int = 540795; // 0x2af PushI
	var_44_int = -1; // 0x2b0 PushI
	var_45_int = 42844; // 0x2b1 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_3_string = 1; // 0x2b5 TMovB
	var_46_bool = 0; // 0x2b6 PushV
	func_1336(var_46_bool); // 0x2b7 NEW_2
	if(var_46_bool == 0) goto Label_701; // 0x2b9 JumpB
	lshStopAnimation(); // 0x2ba Func
	goto Label_703; // 0x2bc Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_701:
	StopAnimation(); // 0x2bd Func
	
Label_705:
	return 0; // 0x2c1 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_17_int = 10; // 0x30f PushI
	var_18_bool = var_16_int == var_17_int; // 0x310 Eq
	if(var_18_bool == 0) goto Label_819; // 0x311 JumpB
	func_778(); // 0x313 NEW_2
	var_20_bool = 0; // 0x315 PushV
	var_20_bool = 0; // 0x316 MovB
	var_21_bool = 0; // 0x317 PushV
	func_992(var_21_bool); // 0x318 NEW_2
	if(var_21_bool == 0) goto Label_800; // 0x31a JumpB
	var_24_bool = 0; // 0x31b PushV
	func_747(var_24_bool); // 0x31c NEW_2
	if(var_24_bool == 0) goto Label_800; // 0x31e JumpB
	var_20_bool = 1; // 0x31f MovB
	
Label_800:
	if(var_20_bool == 0) goto Label_813; // 0x320 JumpB
	var_41_bool = 0; // 0x321 PushV
	func_727(var_41_bool); // 0x322 NEW_2
	if(var_41_bool == 0) goto Label_812; // 0x324 JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x325 PushV
	var_62_object = Obj(); // 0x326 PushV
	func_1273(var_62_object); // 0x327 NEW_2
	var_61_object = var_62_object; // 0x328 Mov
	func_1140(var_61_object); // 0x32a NEW_2
	
Label_812:
	goto Label_819; // 0x32c Jump
	
Label_819:
	return 0; // 0x333 Return
	
Label_813:
	func_742(var_16_int); // 0x32e NEW_2
	func_769(); // 0x331 NEW_2
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_960(); // 0x335 NEW_2
	func_778(); // 0x338 NEW_2
	lshStopSpeech(); // 0x33a Func
	lshStopAnimation(); // 0x33c Func
	StopAsync(); // 0x33e Func
	Hold(); // 0x340 Func
	return 0; // 0x342 Return
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0(); // 0x343 Func
	func_778(); // 0x346 NEW_2
	var_17_string = ""; // 0x348 PushV
	var_17_string = "Neutral"; // 0x349 MovS
	func_1220(var_17_string); // 0x34a NEW_2
	func_769(); // 0x34d NEW_2
	return 0; // 0x34f Return
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool; // 0x351 Push
	if(var_17_bool == 0) goto Label_855; // 0x352 JumpB
	func_769(); // 0x354 NEW_2
	goto Label_859; // 0x356 Jump
	
Label_859:
	return 0; // 0x35b Return
	
Label_855:
	var_23_string = ""; // 0x357 PushV
	var_23_string = "Neutral"; // 0x358 MovS
	func_1220(var_23_string); // 0x359 NEW_2
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x35c PushV
	IsOverrideActive(var_18_bool); // 0x35d Func
	var_19_bool = var_18_bool == 0; // 0x35f Not
	if(var_19_bool == 0) goto Label_888; // 0x360 JumpB
	EventDisable(0); // 0x361 EventDisable
	func_960(); // 0x363 NEW_2
	var_20_bool = 0; var_21_object = Obj(); // 0x365 PushV
	var_21_object = var_16_object; // 0x366 Mov
	func_983(var_21_object); // 0x367 NEW_2
	EventEnable(0); // 0x369 EventEnable
	var_34_object = Obj(); // 0x36a PushV
	var_34_object = var_16_object; // 0x36b Mov
	func_1355(var_34_object); // 0x36c NEW_2
	var_383_string = ""; // 0x36e PushV
	var_383_string = "Neutral"; // 0x36f MovS
	func_1220(var_383_string); // 0x370 NEW_2
	func_778(); // 0x373 NEW_2
	func_769(); // 0x376 NEW_2
	
Label_888:
	return 2; // 0x378 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	var_16_bool = GlobalVars[1]; // 0x2c2 PushGE
	var_16_bool = 0; // 0x2c3 MovB
	GlobalVars[1] = var_16_bool; // 0x2c4 PopGE
	func_713(var_15_cvector); // 0x2c6 NEW_2
	return 0; // 0x2c8 Return
}


func_0(var_0_object, var_267_int, var_268_object)
{
	var_270_object = Obj(); var_271_bool = 0; var_272_int = 0; var_273_bool = 0; var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; // 0x0 PushV
	var_0_object = var_268_object; // 0x1 TMov
	var_278_bool = 0; var_279_object = Obj(); var_280_float = 0; // 0x2 PushV
	var_279_object = var_268_object; // 0x3 Mov
	var_280_float = 70.0; // 0x4 MovF
	func_997(var_279_object, var_280_float); // 0x5 NEW_2
	var_281_bool = var_278_bool == 0; // 0x7 Not
	if(var_281_bool == 0) goto Label_11; // 0x8 JumpB
	var_267_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_274_object); // 0xb Func
	var_282_int = 0; // 0xd PushV
	func_1330(var_282_int); // 0xe NEW_2
	SetNPCName(var_282_int); // 0x10 ObjFunc
	var_283_int = 0; // 0x12 PushV
	func_1328(var_283_int); // 0x13 NEW_2
	SetNPCDescription(var_283_int); // 0x15 ObjFunc
	var_284_string = ""; // 0x17 PushV
	func_1332(var_284_string); // 0x18 NEW_2
	SetPhoto(var_284_string); // 0x1a ObjFunc
	var_285_string = ""; // 0x1c PushV
	func_1334(var_285_string); // 0x1d NEW_2
	SetPhoto2(var_285_string); // 0x1f ObjFunc
	var_286_int = 0; // 0x21 PushV
	func_1338(var_286_int); // 0x22 NEW_2
	SetPlayerName(var_286_int); // 0x24 ObjFunc
	var_276_int = -1; // 0x26 MovI
	IsOverrideActive(var_275_bool); // 0x27 Func
	var_287_bool = var_275_bool; // 0x29 Push
	if(var_287_bool == 0) goto Label_45; // 0x2a JumpB
	var_267_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_274_object); // 0x2d Func
	var_288_bool = 0; var_289_object = Obj(); // 0x2f PushV
	var_290_object = Obj(); // 0x30 PushV
	func_1273(var_290_object); // 0x31 NEW_2
	var_289_object = var_290_object; // 0x32 Mov
	func_1082(var_288_bool, var_289_object); // 0x34 NEW_2
	var_291_object = Obj(); var_292_object = Obj(); // 0x36 PushV
	var_291_object = var_268_object; // 0x37 Mov
	var_292_object = var_274_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_293_object, var_294_object, var_295_string, var_296_bool, var_291_object, var_292_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_277_bool); // 0x3d ObjFunc
	
Label_63:
	var_324_bool = var_277_bool == 0; // 0x3f Not
	if(var_324_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_277_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_325_object = Obj(); // 0x46 PushV
	var_325_object = var_268_object; // 0x47 Mov
	func_1065(); // 0x48 NEW_2
	StopDialog(var_274_object); // 0x4a Func
	GetReturnValue(var_276_int); // 0x4c ObjFunc
	var_267_int = var_276_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769()
{
	var_385_float = 0; var_386_float = 0; // 0x301 PushV
	var_387_int = 8; // 0x302 PushI
	var_388_int = 16; // 0x303 PushI
	rand(var_386_float, var_387_int, var_388_int); // 0x304 Func
	var_389_int = 10; // 0x306 PushI
	SetTimer(var_389_int, var_386_float); // 0x307 Func
	return 2; // 0x309 Return
}


func_642(var_2_object, var_358_string)
{
	var_359_bool = 0; // 0x283 PushV
	func_1336(var_359_bool); // 0x284 NEW_2
	var_360_bool = var_359_bool == 0; // 0x286 Not
	if(var_360_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_361_bool = var_358_string == var_2_object; // 0x289 Eq
	if(var_361_bool == 0) goto Label_652; // 0x28a JumpB
	return 0; // 0x28b Return
	
Label_652:
	var_362_string = ""; var_363_bool = 0; // 0x28c PushV
	var_362_string = var_358_string; // 0x28d Mov
	var_364_string = ""; // 0x28e PushS
	var_365_bool = var_358_string == var_364_string; // 0x28f Eq
	if(var_365_bool == 0) goto Label_659; // 0x290 JumpB
	var_363_bool = 0; // 0x291 MovB
	goto Label_660; // 0x292 Jump
	
Label_660:
	func_1236(var_362_string, var_363_bool); // 0x294 NEW_2
	var_2_object = var_358_string; // 0x296 TMov
	return 0; // 0x297 Return
	
Label_659:
	var_363_bool = 1; // 0x293 MovB
}


func_259(var_0_object, var_37_int, var_38_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; // 0x103 PushV
	var_0_object = var_38_object; // 0x104 TMov
	var_48_bool = 0; var_49_object = Obj(); var_50_float = 0; // 0x105 PushV
	var_49_object = var_38_object; // 0x106 Mov
	var_50_float = 70.0; // 0x107 MovF
	func_997(var_49_object, var_50_float); // 0x108 NEW_2
	var_94_bool = var_48_bool == 0; // 0x10a Not
	if(var_94_bool == 0) goto Label_270; // 0x10b JumpB
	var_37_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_44_object); // 0x10e Func
	var_95_int = 0; // 0x110 PushV
	func_1330(var_95_int); // 0x111 NEW_2
	SetNPCName(var_95_int); // 0x113 ObjFunc
	var_96_int = 0; // 0x115 PushV
	func_1328(var_96_int); // 0x116 NEW_2
	SetNPCDescription(var_96_int); // 0x118 ObjFunc
	var_97_string = ""; // 0x11a PushV
	func_1332(var_97_string); // 0x11b NEW_2
	SetPhoto(var_97_string); // 0x11d ObjFunc
	var_98_string = ""; // 0x11f PushV
	func_1334(var_98_string); // 0x120 NEW_2
	SetPhoto2(var_98_string); // 0x122 ObjFunc
	var_99_int = 0; // 0x124 PushV
	func_1338(var_99_int); // 0x125 NEW_2
	SetPlayerName(var_99_int); // 0x127 ObjFunc
	var_46_int = -1; // 0x129 MovI
	IsOverrideActive(var_45_bool); // 0x12a Func
	var_107_bool = var_45_bool; // 0x12c Push
	if(var_107_bool == 0) goto Label_304; // 0x12d JumpB
	var_37_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_44_object); // 0x130 Func
	var_108_bool = 0; var_109_object = Obj(); // 0x132 PushV
	var_110_object = Obj(); // 0x133 PushV
	func_1273(var_110_object); // 0x134 NEW_2
	var_109_object = var_110_object; // 0x135 Mov
	func_1082(var_108_bool, var_109_object); // 0x137 NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x139 PushV
	var_203_object = var_38_object; // 0x13a Mov
	var_204_object = var_44_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_47_bool); // 0x140 ObjFunc
	
Label_322:
	var_252_bool = var_47_bool == 0; // 0x142 Not
	if(var_252_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_47_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_253_object = Obj(); // 0x149 PushV
	var_253_object = var_38_object; // 0x14a Mov
	func_1065(); // 0x14b NEW_2
	StopDialog(var_44_object); // 0x14d Func
	GetReturnValue(var_46_int); // 0x14f ObjFunc
	var_37_int = var_46_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1273(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x4f9 PushV
	self(var_112_object); // 0x4fa Func
	var_110_object = var_112_object; // 0x4fc Mov
	return 2; // 0x4fd Return
}


func_1289(var_163_int)
{
	var_164_float = 0; var_165_float = 0; // 0x509 PushV
	GetGameTime(var_165_float); // 0x50a Func
	var_166_int = 1; // 0x50c PushI
	var_167_int = 0; // 0x50d PushV
	var_168_int = 24; // 0x50e PushI
	var_167_int = var_165_float / var_165_float; // 0x50f Div2
	var_163_int = var_166_int + var_167_int; // 0x510 Add2
	return 2; // 0x511 Return
}


func_778()
{
	var_384_int = 10; // 0x30a PushI
	KillTimer(var_384_int); // 0x30b Func
	return 0; // 0x30d Return
}


func_398(var_2_object, var_210_string)
{
	var_211_bool = 0; // 0x18f PushV
	func_1336(var_211_bool); // 0x190 NEW_2
	var_212_bool = var_211_bool == 0; // 0x192 Not
	if(var_212_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_213_bool = var_210_string == var_2_object; // 0x195 Eq
	if(var_213_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_214_string = ""; var_215_bool = 0; // 0x198 PushV
	var_214_string = var_210_string; // 0x199 Mov
	var_216_string = ""; // 0x19a PushS
	var_217_bool = var_210_string == var_216_string; // 0x19b Eq
	if(var_217_bool == 0) goto Label_415; // 0x19c JumpB
	var_215_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_1236(var_214_string, var_215_bool); // 0x1a0 NEW_2
	var_2_object = var_210_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_215_bool = 1; // 0x19f MovB
}


func_144(var_2_object, var_298_string)
{
	var_299_bool = 0; // 0x91 PushV
	func_1336(var_299_bool); // 0x92 NEW_2
	var_300_bool = var_299_bool == 0; // 0x94 Not
	if(var_300_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_301_bool = var_298_string == var_2_object; // 0x97 Eq
	if(var_301_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_302_string = ""; var_303_bool = 0; // 0x9a PushV
	var_302_string = var_298_string; // 0x9b Mov
	var_304_string = ""; // 0x9c PushS
	var_305_bool = var_298_string == var_304_string; // 0x9d Eq
	if(var_305_bool == 0) goto Label_161; // 0x9e JumpB
	var_303_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1236(var_302_string, var_303_bool); // 0xa2 NEW_2
	var_2_object = var_298_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_303_bool = 1; // 0xa1 MovB
}


func_1298(var_262_bool, var_263_int)
{
	var_264_int = 0; // 0x513 PushV
	func_1289(var_264_int); // 0x514 NEW_2
	var_262_bool = var_264_int == var_263_int; // 0x516 Eq2
	return 0; // 0x517 Return
}


func_1304(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x518 PushV
	var_44_string = "idle"; // 0x519 MovS
	var_45_int = var_42_int; // 0x51a Push
	if(var_45_int == 0) goto Label_1309; // 0x51b JumpB
	var_44_string = var_44_string + var_42_int; // 0x51c Add2
	
Label_1309:
	var_41_string = var_44_string; // 0x51d Mov
	return 2; // 0x51e Return
}


func_1177(var_150_bool)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; // 0x499 PushV
	var_162_string = "d"; // 0x49a PushS
	var_163_int = 0; // 0x49b PushV
	func_1289(var_163_int); // 0x49c NEW_2
	var_169_int = var_162_string + var_163_int; // 0x49e Add
	var_170_string = "m"; // 0x49f PushS
	var_157_string = var_169_int + var_170_string; // 0x4a0 Add2
	var_158_int = 0; // 0x4a1 MovI
	
Label_1186:
	var_171_int = 1; // 0x4a2 PushI
	if(var_171_int == 0) goto Label_1199; // 0x4a3 JumpB
	var_172_int = 1; // 0x4a4 PushI
	var_173_int = var_158_int + var_172_int; // 0x4a5 Add
	var_174_int = var_157_string + var_173_int; // 0x4a6 Add
	HasProperty(var_174_int, var_159_bool); // 0x4a7 ObjFunc
	var_175_bool = var_159_bool == 0; // 0x4a9 Not
	if(var_175_bool == 0) goto Label_1196; // 0x4aa JumpB
	goto Label_1199; // 0x4ab Jump
	
Label_1199:
	var_176_bool = var_158_int == 0; // 0x4af Not
	if(var_176_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_150_bool = 0; // 0x4b1 MovB
	return 10; // 0x4b2 Return
	
Label_1203:
	var_160_int = 0; // 0x4b3 MovI
	var_177_int = 1; // 0x4b4 PushI
	var_178_bool = var_158_int > var_177_int; // 0x4b5 GT
	if(var_178_bool == 0) goto Label_1209; // 0x4b6 JumpB
	irand(var_160_int, var_158_int); // 0x4b7 Func
	
Label_1209:
	var_179_int = 1; // 0x4b9 PushI
	var_180_int = var_160_int + var_179_int; // 0x4ba Add
	var_181_int = var_157_string + var_180_int; // 0x4bb Add
	GetProperty(var_181_int, var_161_string); // 0x4bc ObjFunc
	var_182_bool = 0; var_183_string = ""; // 0x4be PushV
	var_183_string = var_161_string; // 0x4bf Mov
	func_1251(var_182_bool, var_183_string); // 0x4c0 NEW_2
	var_150_bool = var_182_bool; // 0x4c1 Mov
	return 10; // 0x4c3 Return
	
Label_1196:
	var_184_int = 1; // 0x4ac PushI
	var_158_int = var_158_int + var_184_int; // 0x4ad Add2
	goto Label_1186; // 0x4ae Jump
}


func_1311(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x51f PushV
	var_38_int = 0; // 0x520 MovI
	
Label_1313:
	var_40_string = "all"; // 0x521 PushS
	var_41_string = ""; var_42_int = 0; // 0x522 PushV
	var_42_int = var_38_int; // 0x523 Mov
	func_1304(var_41_string, var_42_int); // 0x524 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x526 Func
	var_46_bool = var_39_bool == 0; // 0x528 Not
	if(var_46_bool == 0) goto Label_1323; // 0x529 JumpB
	goto Label_1326; // 0x52a Jump
	
Label_1326:
	var_35_int = var_38_int; // 0x52e Mov
	return 4; // 0x52f Return
	
Label_1323:
	var_47_int = 1; // 0x52b PushI
	var_38_int = var_38_int + var_47_int; // 0x52c Add2
	goto Label_1313; // 0x52d Jump
}


func_1065()
{
	var_254_bool = 0; var_255_bool = 0; // 0x429 PushV
	CameraSwitchToNormal(); // 0x42a Func
	var_256_bool = 0; // 0x42c PushV
	func_1336(var_256_bool); // 0x42d NEW_2
	if(var_256_bool == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1081; // 0x430 Jump
	
Label_1081:
	return 2; // 0x439 Return
	
Label_1073:
	var_257_string = "head"; // 0x431 PushS
	HasAnimationTrack(var_255_bool, var_257_string); // 0x432 Func
	var_258_bool = var_255_bool; // 0x434 Push
	if(var_258_bool == 0) goto Label_1081; // 0x435 JumpB
	var_259_string = "head"; // 0x436 PushS
	UnlookAsync(var_259_string); // 0x437 Func
}


func_1328(var_96_int)
{
	var_96_int = 515537; // 0x530 MovI
	return 0; // 0x531 Return
}


func_1330(var_95_int)
{
	var_95_int = 502862; // 0x532 MovI
	return 0; // 0x533 Return
}


func_1332(var_97_string)
{
	var_97_string = "ui/NPC_Julia.png"; // 0x534 MovS
	return 0; // 0x535 Return
}


func_1334(var_98_string)
{
	var_98_string = "ui/NPC_Julia_b.png"; // 0x536 MovS
	return 0; // 0x537 Return
}


func_1336(var_90_bool)
{
	var_90_bool = 1; // 0x538 MovB
	return 0; // 0x539 Return
}


func_1082(var_108_bool, var_109_object)
{
	var_113_int = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; // 0x43a PushV
	var_117_string = "voice_common"; // 0x43b PushS
	GetVariable(var_117_string, var_115_int); // 0x43c Func
	var_118_int = var_115_int; // 0x43e Push
	if(var_118_int == 0) goto Label_1120; // 0x43f JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x440 PushV
	var_120_object = var_109_object; // 0x441 Mov
	func_1140(var_120_object); // 0x442 NEW_2
	var_149_bool = var_119_bool == 0; // 0x444 Not
	if(var_149_bool == 0) goto Label_1102; // 0x445 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x446 PushV
	var_151_object = var_109_object; // 0x447 Mov
	func_1177(var_151_object); // 0x448 NEW_2
	var_185_bool = var_150_bool == 0; // 0x44a Not
	if(var_185_bool == 0) goto Label_1102; // 0x44b JumpB
	var_108_bool = 0; // 0x44c MovB
	return 4; // 0x44d Return
	
Label_1102:
	var_186_int = 2; // 0x44e PushI
	irand(var_116_int, var_186_int); // 0x44f Func
	var_187_int = var_116_int; // 0x451 Push
	if(var_187_int == 0) goto Label_1115; // 0x452 JumpB
	var_188_string = "voice_common"; // 0x453 PushS
	var_189_int = 1; // 0x454 PushI
	var_190_int = var_115_int + var_189_int; // 0x455 Add
	var_191_int = 3; // 0x456 PushI
	var_192_int = var_190_int / var_191_int; // 0x457 Mod
	SetVariable(var_188_string, var_192_int); // 0x458 Func
	goto Label_1119; // 0x45a Jump
	
Label_1119:
	goto Label_1138; // 0x45f Jump
	
Label_1138:
	var_108_bool = 1; // 0x472 MovB
	return 4; // 0x473 Return
	
Label_1115:
	var_193_string = "voice_common"; // 0x45b PushS
	var_194_int = 0; // 0x45c PushI
	SetVariable(var_193_string, var_194_int); // 0x45d Func
	
Label_1120:
	var_195_bool = 0; var_196_object = Obj(); // 0x460 PushV
	var_196_object = var_109_object; // 0x461 Mov
	func_1177(var_196_object); // 0x462 NEW_2
	var_197_bool = var_195_bool == 0; // 0x464 Not
	if(var_197_bool == 0) goto Label_1134; // 0x465 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x466 PushV
	var_199_object = var_109_object; // 0x467 Mov
	func_1140(var_199_object); // 0x468 NEW_2
	var_200_bool = var_198_bool == 0; // 0x46a Not
	if(var_200_bool == 0) goto Label_1134; // 0x46b JumpB
	var_108_bool = 0; // 0x46c MovB
	return 4; // 0x46d Return
	
Label_1134:
	var_201_string = "voice_common"; // 0x46e PushS
	var_202_int = 1; // 0x46f PushI
	SetVariable(var_201_string, var_202_int); // 0x470 Func
}


func_1338(var_99_int)
{
	var_100_int = 0; var_101_int = 0; // 0x53a PushV
	var_102_string = "branch"; // 0x53b PushS
	GetVariable(var_102_string, var_101_int); // 0x53c Func
	var_103_int = 0; // 0x53e PushI
	var_104_bool = var_101_int == var_103_int; // 0x53f Eq
	if(var_104_bool == 0) goto Label_1348; // 0x540 JumpB
	var_99_int = 1; // 0x541 MovI
	return 2; // 0x542 Return
	
Label_1348:
	var_105_int = 1; // 0x544 PushI
	var_106_bool = var_101_int == var_105_int; // 0x545 Eq
	if(var_106_bool == 0) goto Label_1353; // 0x546 JumpB
	var_99_int = 2; // 0x547 MovI
	return 2; // 0x548 Return
	
Label_1353:
	var_99_int = 3; // 0x549 MovI
	return 2; // 0x54a Return
}


func_958(var_55_bool)
{
	var_55_bool = 1; // 0x3be MovB
	return 0; // 0x3bf Return
}


func_960()
{
	StopAnimation(); // 0x3c0 Func
	StopGroup0(); // 0x3c2 Func
	return 0; // 0x3c4 Return
}


func_1220(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x4c4 PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x4c5 Func
	var_243_bool = var_240_bool; // 0x4c7 Push
	if(var_243_bool == 0) goto Label_1231; // 0x4c8 JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x4c9 Func
	var_244_bool = 0; // 0x4cb PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x4cc Func
	goto Label_1235; // 0x4ce Jump
	
Label_1235:
	return 6; // 0x4d3 Return
	
Label_1231:
	var_245_string = "Can't find lsh animation : "; // 0x4cf PushS
	var_246_int = var_245_string + var_236_string; // 0x4d0 Add
	Trace(var_246_int); // 0x4d1 Func
}


func_965(var_31_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x3c5 PushV
	GetPosition(var_36_cvector); // 0x3c6 Func
	GetPosition(var_37_cvector); // 0x3c8 ObjFunc
	var_38_cvector = var_37_cvector - var_36_cvector; // 0x3ca Sub2
	var_31_float = var_38_cvector | var_38_cvector; // 0x3cb Or2
	return 6; // 0x3cc Return
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_351_object, var_352_object)
{
	var_0_object = var_352_object; // 0x249 TMov
	var_1_object = var_351_object; // 0x24a TMov
	var_3_string = 0; // 0x24b TMovB
	var_357_int = 1; // 0x24c PushI
	if(var_357_int == 0) goto Label_612; // 0x24d JumpB
	var_358_string = ""; // 0x24e PushV
	var_358_string = "Neutral"; // 0x24f MovS
	func_642(var_352_object, var_358_string); // 0x250 NEW_2
	var_366_int = 540551; // 0x252 PushI
	SetMessage(var_366_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_367_int = 540552; // 0x257 PushI
	var_368_int = -1; // 0x258 PushI
	var_369_int = 42561; // 0x259 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x25a TObjFunc
	var_370_int = 540795; // 0x25c PushI
	var_371_int = -1; // 0x25d PushI
	var_372_int = 42844; // 0x25e PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x25f TObjFunc
	goto Label_612; // 0x261 Jump
	
Label_612:
	var_373_bool = 0; // 0x264 PushV
	func_1336(var_373_bool); // 0x265 NEW_2
	if(var_373_bool == 0) goto Label_627; // 0x267 JumpB
	
Label_616:
	lshWaitForAnimEnd(); // 0x268 Func
	var_374_string = var_3_string; // 0x26a PushT
	if(var_374_string == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_626:
	goto Label_641; // 0x272 Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_621:
	var_375_string = ""; // 0x26d PushV
	var_375_string = var_2_object; // 0x26e MovT
	func_1220(var_375_string); // 0x26f NEW_2
	goto Label_616; // 0x271 Jump
	
Label_627:
	var_376_string = "all"; // 0x273 PushS
	var_377_string = "idle"; // 0x274 PushS
	PlayAnimation(var_376_string, var_377_string); // 0x275 Func
	
Label_631:
	WaitForAnimEnd(); // 0x277 Func
	var_378_string = var_3_string; // 0x279 PushT
	if(var_378_string == 0) goto Label_636; // 0x27a JumpB
	goto Label_641; // 0x27b Jump
	
Label_636:
	var_379_string = "all"; // 0x27c PushS
	var_380_string = "idle"; // 0x27d PushS
	PlayAnimation(var_379_string, var_380_string); // 0x27e Func
	goto Label_631; // 0x280 Jump
}


func_713(var_0_object)
{
	var_17_bool = 0; // 0x2c9 PushV
	func_992(var_17_bool); // 0x2ca NEW_2
	var_20_bool = var_17_bool == 0; // 0x2cc Not
	if(var_20_bool == 0) goto Label_720; // 0x2cd JumpB
	Hold(); // 0x2ce Func
	
Label_720:
	GetDirection(var_0_object); // 0x2d0 Func
	
Label_722:
	func_889(); // 0x2d3 NEW_2
	goto Label_722; // 0x2d5 Jump
}


func_1355(var_34_object)
{
	var_35_bool = GlobalVars[1]; // 0x54c PushGE
	var_36_bool = var_35_bool == 0; // 0x54d Not
	if(var_36_bool == 0) goto Label_1368; // 0x54e JumpB
	var_37_int = 0; var_38_object = Obj(); // 0x54f PushV
	var_38_object = var_34_object; // 0x550 Mov
	TaskCall(2); // 0x551 TaskCall
	func_259(var_39_object, var_37_int, var_38_object); // 0x552 NEW_2
	TaskReturn(); // 0x553 TaskReturn
	var_260_bool = GlobalVars[1]; // 0x555 PushGE
	var_260_bool = 1; // 0x556 MovB
	GlobalVars[1] = var_260_bool; // 0x557 PopGE
	
Label_1368:
	var_261_bool = 0; // 0x558 PushV
	var_261_bool = 0; // 0x559 MovB
	var_262_bool = 0; var_263_int = 0; // 0x55a PushV
	var_263_int = 12; // 0x55b MovI
	func_1298(var_262_bool, var_263_int); // 0x55c NEW_2
	if(var_262_bool == 0) goto Label_1379; // 0x55e JumpB
	var_265_bool = GlobalVars[2]; // 0x55f PushGE
	var_266_bool = var_265_bool == 0; // 0x560 Not
	if(var_266_bool == 0) goto Label_1379; // 0x561 JumpB
	var_261_bool = 1; // 0x562 MovB
	
Label_1379:
	if(var_261_bool == 0) goto Label_1390; // 0x563 JumpB
	var_267_int = 0; var_268_object = Obj(); // 0x564 PushV
	var_268_object = var_34_object; // 0x565 Mov
	TaskCall(0); // 0x566 TaskCall
	func_0(var_269_object, var_267_int, var_268_object); // 0x567 NEW_2
	TaskReturn(); // 0x568 TaskReturn
	var_326_bool = GlobalVars[2]; // 0x56a PushGE
	var_326_bool = 1; // 0x56b MovB
	GlobalVars[2] = var_326_bool; // 0x56c PopGE
	return 0; // 0x56d Return
	
Label_1390:
	var_327_int = 0; var_328_object = Obj(); // 0x56e PushV
	var_328_object = var_34_object; // 0x56f Mov
	TaskCall(4); // 0x570 TaskCall
	func_503(var_329_object, var_327_int, var_328_object); // 0x571 NEW_2
	TaskReturn(); // 0x572 TaskReturn
	return 0; // 0x574 Return
}


func_973(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; // 0x3cd PushV
	GetPosition(var_29_cvector); // 0x3ce Func
	var_30_cvector = var_25_cvector - var_29_cvector; // 0x3d0 Sub2
	var_32_float = GetByIndex(var_30_cvector, 0); // 0x3d1 PushE
	var_33_float = GetByIndex(var_30_cvector, 2); // 0x3d2 PushE
	Rotate(var_32_float, var_33_float, var_31_bool); // 0x3d3 Func
	var_24_bool = var_31_bool; // 0x3d5 Mov
	return 6; // 0x3d6 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_291_object, var_292_object)
{
	var_0_object = var_292_object; // 0x52 TMov
	var_1_object = var_291_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_297_int = 1; // 0x55 PushI
	if(var_297_int == 0) goto Label_114; // 0x56 JumpB
	var_298_string = ""; // 0x57 PushV
	var_298_string = "Neutral"; // 0x58 MovS
	func_144(var_292_object, var_298_string); // 0x59 NEW_2
	var_306_int = 535294; // 0x5b PushI
	SetMessage(var_306_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_307_int = 535295; // 0x60 PushI
	var_308_int = 36973; // 0x61 PushI
	var_309_int = 36972; // 0x62 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x63 TObjFunc
	var_310_int = 535302; // 0x65 PushI
	var_311_int = -1; // 0x66 PushI
	var_312_int = 36980; // 0x67 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x68 TObjFunc
	var_313_int = 535303; // 0x6a PushI
	var_314_int = -1; // 0x6b PushI
	var_315_int = 36981; // 0x6c PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_316_bool = 0; // 0x72 PushV
	func_1336(var_316_bool); // 0x73 NEW_2
	if(var_316_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_317_string = var_3_string; // 0x78 PushT
	if(var_317_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_318_string = ""; // 0x7b PushV
	var_318_string = var_2_object; // 0x7c MovT
	func_1220(var_318_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_319_string = "all"; // 0x81 PushS
	var_320_string = "idle"; // 0x82 PushS
	PlayAnimation(var_319_string, var_320_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_321_string = var_3_string; // 0x87 PushT
	if(var_321_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_322_string = "all"; // 0x8a PushS
	var_323_string = "idle"; // 0x8b PushS
	PlayAnimation(var_322_string, var_323_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1236(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x4d4 PushV
	lshHasAnimation(var_221_bool, var_214_string); // 0x4d5 Func
	var_224_bool = var_221_bool; // 0x4d7 Push
	if(var_224_bool == 0) goto Label_1246; // 0x4d8 JumpB
	lshGetAnimTimes(var_214_string, var_222_float, var_223_float); // 0x4d9 Func
	lshPlayAnimation(var_222_float, var_223_float, var_215_bool); // 0x4db Func
	goto Label_1250; // 0x4dd Jump
	
Label_1250:
	return 6; // 0x4e2 Return
	
Label_1246:
	var_225_string = "Can't find lsh animation : "; // 0x4de PushS
	var_226_int = var_225_string + var_214_string; // 0x4df Add
	Trace(var_226_int); // 0x4e0 Func
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_203_object, var_204_object)
{
	var_0_object = var_204_object; // 0x155 TMov
	var_1_object = var_203_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_209_int = 1; // 0x158 PushI
	if(var_209_int == 0) goto Label_368; // 0x159 JumpB
	var_210_string = ""; // 0x15a PushV
	var_210_string = "Neutral"; // 0x15b MovS
	func_398(var_204_object, var_210_string); // 0x15c NEW_2
	var_227_int = 518012; // 0x15e PushI
	SetMessage(var_227_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_228_int = 518013; // 0x163 PushI
	var_229_int = 32562; // 0x164 PushI
	var_230_int = 19146; // 0x165 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x166 TObjFunc
	var_231_int = 531249; // 0x168 PushI
	var_232_int = 32565; // 0x169 PushI
	var_233_int = 32564; // 0x16a PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_234_bool = 0; // 0x170 PushV
	func_1336(var_234_bool); // 0x171 NEW_2
	if(var_234_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_235_string = var_3_string; // 0x176 PushT
	if(var_235_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_236_string = ""; // 0x179 PushV
	var_236_string = var_2_object; // 0x17a MovT
	func_1220(var_236_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_247_string = "all"; // 0x17f PushS
	var_248_string = "idle"; // 0x180 PushS
	PlayAnimation(var_247_string, var_248_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_249_string = var_3_string; // 0x185 PushT
	if(var_249_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_250_string = "all"; // 0x188 PushS
	var_251_string = "idle"; // 0x189 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_983(var_20_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x3d7 PushV
	GetPosition(var_23_cvector); // 0x3d8 ObjFunc
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); // 0x3da PushV
	var_25_cvector = var_23_cvector; // 0x3db Mov
	func_973(var_24_bool, var_25_cvector); // 0x3dc NEW_2
	var_20_bool = var_24_bool; // 0x3dd Mov
	return 2; // 0x3df Return
}


func_727(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x2d7 PushV
	var_44_string = "player"; // 0x2d8 PushS
	FindActor(var_43_object, var_44_string); // 0x2d9 Func
	var_45_bool = var_43_object == 0; // 0x2db Not
	if(var_45_bool == 0) goto Label_735; // 0x2dc JumpB
	var_41_bool = 0; // 0x2dd MovB
	return 2; // 0x2de Return
	
Label_735:
	var_46_bool = 0; var_47_object = Obj(); // 0x2df PushV
	var_47_object = var_43_object; // 0x2e0 Mov
	func_983(var_47_object); // 0x2e1 NEW_2
	var_41_bool = var_46_bool; // 0x2e2 Mov
	return 2; // 0x2e4 Return
}


func_992(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x3e0 PushV
	IsLoaded(var_19_bool); // 0x3e1 Func
	var_17_bool = var_19_bool; // 0x3e3 Mov
	return 2; // 0x3e4 Return
}


func_1251(var_142_bool, var_143_string)
{
	var_144_bool = 0; var_145_bool = 0; // 0x4e3 PushV
	var_146_bool = 0; // 0x4e4 PushV
	func_1336(var_146_bool); // 0x4e5 NEW_2
	if(var_146_bool == 0) goto Label_1264; // 0x4e7 JumpB
	lshHasSpeech(var_145_bool, var_143_string); // 0x4e8 Func
	var_147_bool = var_145_bool; // 0x4ea Push
	if(var_147_bool == 0) goto Label_1264; // 0x4eb JumpB
	lshPlaySpeech(var_143_string); // 0x4ec Func
	var_142_bool = 1; // 0x4ee MovB
	return 2; // 0x4ef Return
	
Label_1264:
	var_142_bool = 0; // 0x4f0 MovB
	return 2; // 0x4f1 Return
}


func_997(var_48_bool, var_50_float)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; // 0x3e5 PushV
	GetPosition(var_61_cvector); // 0x3e6 ObjFunc
	GetEyesHeight(var_60_float); // 0x3e8 ObjFunc
	var_69_float = GetByIndex(var_61_cvector, 1); // 0x3ea PushE
	var_69_float = var_69_float + var_60_float; // 0x3eb Add2
	SetByIndex(var_61_cvector, 1) = var_69_float; // 0x3ec PopE
	GetPosition(var_62_cvector); // 0x3ed Func
	GetEyesHeight(var_60_float); // 0x3ef Func
	var_70_float = GetByIndex(var_62_cvector, 1); // 0x3f1 PushE
	var_70_float = var_70_float + var_60_float; // 0x3f2 Add2
	SetByIndex(var_62_cvector, 1) = var_70_float; // 0x3f3 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x3f4 Sub2
	var_71_float = GetByIndex(var_63_cvector, 1); // 0x3f5 PushE
	var_71_float = 0; // 0x3f6 MovI
	SetByIndex(var_63_cvector, 1) = var_71_float; // 0x3f7 PopE
	var_72_int = var_63_cvector | var_63_cvector; // 0x3f8 Or
	var_73_float = sqrt(var_72_int); // 0x3f9 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x3fa Div2
	var_64_cvector = -var_63_cvector; // 0x3fb Neg2
	var_74_float = var_63_cvector * var_50_float; // 0x3fc Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x3fd PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x3fe PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x3ff Xor2
	func_1279(var_75_cvector, var_76_cvector); // 0x400 NEW_2
	var_83_int = 25; // 0x402 PushI
	var_84_float = var_75_cvector * var_83_int; // 0x403 Mult
	var_85_int = var_74_float + var_84_float; // 0x404 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x405 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x406 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x407 Add2
	IsOverrideActive(var_67_bool); // 0x408 Func
	var_87_bool = var_67_bool; // 0x40a Push
	if(var_87_bool == 0) goto Label_1038; // 0x40b JumpB
	var_48_bool = 0; // 0x40c MovB
	return 18; // 0x40d Return
	
Label_1038:
	StopWorld(); // 0x40e Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0x410 Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0x412 PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0x413 PushE
	Rotate(var_88_float, var_89_float); // 0x414 Func
	var_90_bool = 0; // 0x416 PushV
	func_1336(var_90_bool); // 0x417 NEW_2
	if(var_90_bool == 0) goto Label_1051; // 0x419 JumpB
	goto Label_1059; // 0x41a Jump
	
Label_1059:
	CameraWaitForPlayFinish(); // 0x423 Func
	ResumeWorld(); // 0x425 Func
	var_48_bool = 1; // 0x427 MovB
	return 18; // 0x428 Return
	
Label_1051:
	var_91_string = "head"; // 0x41b PushS
	HasAnimationTrack(var_68_bool, var_91_string); // 0x41c Func
	var_92_bool = var_68_bool; // 0x41e Push
	if(var_92_bool == 0) goto Label_1059; // 0x41f JumpB
	var_93_string = "head"; // 0x420 PushS
	LookAsyncCamera(var_93_string); // 0x421 Func
}


func_742(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0); // 0x2e6 PushE
	var_94_float = GetByIndex(var_0_object, 2); // 0x2e7 PushE
	RotateAsync(var_93_float, var_94_float); // 0x2e8 Func
	return 0; // 0x2ea Return
}


func_747(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x2eb PushV
	var_29_string = "player"; // 0x2ec PushS
	FindActor(var_27_object, var_29_string); // 0x2ed Func
	var_30_bool = var_27_object == 0; // 0x2ef Not
	if(var_30_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_24_bool = 0; // 0x2f1 MovB
	return 4; // 0x2f2 Return
	
Label_755:
	var_31_float = 0; var_32_object = Obj(); // 0x2f3 PushV
	var_32_object = var_27_object; // 0x2f4 Mov
	func_965(var_32_object); // 0x2f5 NEW_2
	var_39_float = 90000.0; // 0x2f7 PushF
	var_40_bool = var_31_float > var_39_float; // 0x2f8 GT
	if(var_40_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_24_bool = 0; // 0x2fa MovB
	return 4; // 0x2fb Return
	
Label_764:
	CanSee(var_28_bool, var_27_object); // 0x2fc Func
	var_24_bool = var_28_bool; // 0x2fe Mov
	return 4; // 0x2ff Return
}


func_1266()
{
	var_19_bool = 0; // 0x4f2 PushV
	func_1336(var_19_bool); // 0x4f3 NEW_2
	if(var_19_bool == 0) goto Label_1272; // 0x4f5 JumpB
	lshStopSpeech(); // 0x4f6 Func
	
Label_1272:
	return 0; // 0x4f8 Return
}


func_1140(var_119_bool)
{
	var_121_string = ""; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_string = ""; var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; // 0x474 PushV
	var_126_string = "c"; // 0x475 MovS
	var_127_int = 0; // 0x476 MovI
	
Label_1143:
	var_131_int = 1; // 0x477 PushI
	if(var_131_int == 0) goto Label_1156; // 0x478 JumpB
	var_132_int = 1; // 0x479 PushI
	var_133_int = var_127_int + var_132_int; // 0x47a Add
	var_134_int = var_126_string + var_133_int; // 0x47b Add
	HasProperty(var_134_int, var_128_bool); // 0x47c ObjFunc
	var_135_bool = var_128_bool == 0; // 0x47e Not
	if(var_135_bool == 0) goto Label_1153; // 0x47f JumpB
	goto Label_1156; // 0x480 Jump
	
Label_1156:
	var_136_bool = var_127_int == 0; // 0x484 Not
	if(var_136_bool == 0) goto Label_1160; // 0x485 JumpB
	var_119_bool = 0; // 0x486 MovB
	return 10; // 0x487 Return
	
Label_1160:
	var_129_int = 0; // 0x488 MovI
	var_137_int = 1; // 0x489 PushI
	var_138_bool = var_127_int > var_137_int; // 0x48a GT
	if(var_138_bool == 0) goto Label_1166; // 0x48b JumpB
	irand(var_129_int, var_127_int); // 0x48c Func
	
Label_1166:
	var_139_int = 1; // 0x48e PushI
	var_140_int = var_129_int + var_139_int; // 0x48f Add
	var_141_int = var_126_string + var_140_int; // 0x490 Add
	GetProperty(var_141_int, var_130_string); // 0x491 ObjFunc
	var_142_bool = 0; var_143_string = ""; // 0x493 PushV
	var_143_string = var_130_string; // 0x494 Mov
	func_1251(var_142_bool, var_143_string); // 0x495 NEW_2
	var_119_bool = var_142_bool; // 0x496 Mov
	return 10; // 0x498 Return
	
Label_1153:
	var_148_int = 1; // 0x481 PushI
	var_127_int = var_127_int + var_148_int; // 0x482 Add2
	goto Label_1143; // 0x483 Jump
}


func_503(var_0_object, var_327_int, var_328_object)
{
	var_330_object = Obj(); var_331_bool = 0; var_332_int = 0; var_333_bool = 0; var_334_object = Obj(); var_335_bool = 0; var_336_int = 0; var_337_bool = 0; // 0x1f7 PushV
	var_0_object = var_328_object; // 0x1f8 TMov
	var_338_bool = 0; var_339_object = Obj(); var_340_float = 0; // 0x1f9 PushV
	var_339_object = var_328_object; // 0x1fa Mov
	var_340_float = 70.0; // 0x1fb MovF
	func_997(var_339_object, var_340_float); // 0x1fc NEW_2
	var_341_bool = var_338_bool == 0; // 0x1fe Not
	if(var_341_bool == 0) goto Label_514; // 0x1ff JumpB
	var_327_int = -2; // 0x200 MovI
	return 8; // 0x201 Return
	
Label_514:
	CreateDialog(var_334_object); // 0x202 Func
	var_342_int = 0; // 0x204 PushV
	func_1330(var_342_int); // 0x205 NEW_2
	SetNPCName(var_342_int); // 0x207 ObjFunc
	var_343_int = 0; // 0x209 PushV
	func_1328(var_343_int); // 0x20a NEW_2
	SetNPCDescription(var_343_int); // 0x20c ObjFunc
	var_344_string = ""; // 0x20e PushV
	func_1332(var_344_string); // 0x20f NEW_2
	SetPhoto(var_344_string); // 0x211 ObjFunc
	var_345_string = ""; // 0x213 PushV
	func_1334(var_345_string); // 0x214 NEW_2
	SetPhoto2(var_345_string); // 0x216 ObjFunc
	var_346_int = 0; // 0x218 PushV
	func_1338(var_346_int); // 0x219 NEW_2
	SetPlayerName(var_346_int); // 0x21b ObjFunc
	var_336_int = -1; // 0x21d MovI
	IsOverrideActive(var_335_bool); // 0x21e Func
	var_347_bool = var_335_bool; // 0x220 Push
	if(var_347_bool == 0) goto Label_548; // 0x221 JumpB
	var_327_int = -2; // 0x222 MovI
	return 8; // 0x223 Return
	
Label_548:
	DoDialog(var_334_object); // 0x224 Func
	var_348_bool = 0; var_349_object = Obj(); // 0x226 PushV
	var_350_object = Obj(); // 0x227 PushV
	func_1273(var_350_object); // 0x228 NEW_2
	var_349_object = var_350_object; // 0x229 Mov
	func_1082(var_348_bool, var_349_object); // 0x22b NEW_2
	var_351_object = Obj(); var_352_object = Obj(); // 0x22d PushV
	var_351_object = var_328_object; // 0x22e Mov
	var_352_object = var_334_object; // 0x22f Mov
	TaskCall(5); // 0x230 TaskCall
	func_584(var_353_object, var_354_object, var_355_string, var_356_bool, var_351_object, var_352_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	IsDialogEnd(var_337_bool); // 0x234 ObjFunc
	
Label_566:
	var_381_bool = var_337_bool == 0; // 0x236 Not
	if(var_381_bool == 0) goto Label_573; // 0x237 JumpB
	sync(); // 0x238 Func
	IsDialogEnd(var_337_bool); // 0x23a ObjFunc
	goto Label_566; // 0x23c Jump
	
Label_573:
	var_382_object = Obj(); // 0x23d PushV
	var_382_object = var_328_object; // 0x23e Mov
	func_1065(); // 0x23f NEW_2
	StopDialog(var_334_object); // 0x241 Func
	GetReturnValue(var_336_int); // 0x243 ObjFunc
	var_327_int = var_336_int; // 0x245 Mov
	return 8; // 0x246 Return
}


func_889()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x379 PushV
	WaitForAnimEnd(); // 0x37a Func
	var_33_bool = 0; // 0x37c PushV
	func_992(var_33_bool); // 0x37d NEW_2
	var_34_bool = var_33_bool == 0; // 0x37f Not
	if(var_34_bool == 0) goto Label_898; // 0x380 JumpB
	return 12; // 0x381 Return
	
Label_898:
	var_35_int = 0; // 0x382 PushV
	func_1311(var_35_int); // 0x383 NEW_2
	var_27_int = var_35_int; // 0x384 Mov
	var_28_int = 0; // 0x386 MovI
	
Label_903:
	var_48_bool = 0; // 0x387 PushV
	var_48_bool = 0; // 0x388 MovB
	var_49_int = 5; // 0x389 PushI
	var_50_bool = var_28_int < var_49_int; // 0x38a LT
	if(var_50_bool == 0) goto Label_913; // 0x38b JumpB
	var_51_bool = 0; // 0x38c PushV
	func_992(var_51_bool); // 0x38d NEW_2
	if(var_51_bool == 0) goto Label_913; // 0x38f JumpB
	var_48_bool = 1; // 0x390 MovB
	
Label_913:
	if(var_48_bool == 0) goto Label_955; // 0x391 JumpB
	var_52_bool = var_27_int == 0; // 0x392 Not
	if(var_52_bool == 0) goto Label_923; // 0x393 JumpB
	var_53_int = 3; // 0x394 PushI
	Sleep(var_53_int, var_29_bool); // 0x395 Func
	var_54_bool = var_29_bool == 0; // 0x397 Not
	if(var_54_bool == 0) goto Label_922; // 0x398 JumpB
	goto Label_955; // 0x399 Jump
	
Label_955:
	ResetAAS(); // 0x3bb Func
	return 12; // 0x3bd Return
	
Label_922:
	goto Label_944; // 0x39a Jump
	
Label_944:
	var_55_bool = 0; // 0x3b0 PushV
	func_958(var_55_bool); // 0x3b1 NEW_2
	var_56_bool = var_55_bool == 0; // 0x3b3 Not
	if(var_56_bool == 0) goto Label_950; // 0x3b4 JumpB
	goto Label_955; // 0x3b5 Jump
	
Label_950:
	ResetAAS(); // 0x3b6 Func
	var_57_int = 1; // 0x3b8 PushI
	var_28_int = var_28_int + var_57_int; // 0x3b9 Add2
	goto Label_903; // 0x3ba Jump
	
Label_923:
	irand(var_30_int, var_27_int); // 0x39b Func
	var_58_int = 5; // 0x39d PushI
	irand(var_31_int, var_58_int); // 0x39e Func
	var_59_int = 0; // 0x3a0 PushI
	var_60_bool = var_31_int != var_59_int; // 0x3a1 Neq
	if(var_60_bool == 0) goto Label_932; // 0x3a2 JumpB
	var_30_int = 0; // 0x3a3 MovI
	
Label_932:
	var_61_string = "all"; // 0x3a4 PushS
	var_62_string = ""; var_63_int = 0; // 0x3a5 PushV
	var_63_int = var_30_int; // 0x3a6 Mov
	func_1304(var_62_string, var_63_int); // 0x3a7 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x3a9 Func
	WaitForAnimEnd(var_32_bool); // 0x3ab Func
	var_64_bool = var_32_bool == 0; // 0x3ad Not
	if(var_64_bool == 0) goto Label_944; // 0x3ae JumpB
	goto Label_955; // 0x3af Jump
}


func_1279(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x4ff PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x500 Or
	var_79_float = sqrt(var_80_int); // 0x501 Sqrt2
	var_81_float = 0.0; // 0x502 PushF
	var_82_bool = var_79_float < var_81_float; // 0x503 LT
	if(var_82_bool == 0) goto Label_1287; // 0x504 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x505 MovV
	return 2; // 0x506 Return
	
Label_1287:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x507 Div2
	return 2; // 0x508 Return
}


