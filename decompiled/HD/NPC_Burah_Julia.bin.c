task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0xa2 PushI
	if(var_18_int == 0) goto Label_243; // 0xa3 JumpB
	func_1268(); // 0xa5 NEW_2
	var_20_int = 19145; // 0xa7 PushI
	var_21_bool = var_16_bool == var_20_int; // 0xa8 Eq
	if(var_21_bool == 0) goto Label_190; // 0xa9 JumpB
	var_22_string = ""; // 0xaa PushV
	var_22_string = "Neutral"; // 0xab MovS
	func_139(var_17_cvector, var_22_string); // 0xac NEW_2
	var_39_int = 518012; // 0xae PushI
	SetMessage(var_39_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_40_int = 518013; // 0xb3 PushI
	var_41_int = 32562; // 0xb4 PushI
	var_42_int = 19146; // 0xb5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xb6 TObjFunc
	var_43_int = 531249; // 0xb8 PushI
	var_44_int = 32565; // 0xb9 PushI
	var_45_int = 32564; // 0xba PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_46_int = 32565; // 0xbe PushI
	var_47_bool = var_16_bool == var_46_int; // 0xbf Eq
	if(var_47_bool == 0) goto Label_208; // 0xc0 JumpB
	var_48_string = ""; // 0xc1 PushV
	var_48_string = "Fear"; // 0xc2 MovS
	func_139(var_17_cvector, var_48_string); // 0xc3 NEW_2
	var_49_int = 531250; // 0xc5 PushI
	SetMessage(var_49_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_50_int = 531251; // 0xca PushI
	var_51_int = 32562; // 0xcb PushI
	var_52_int = 32566; // 0xcc PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_53_int = 32562; // 0xd0 PushI
	var_54_bool = var_16_bool == var_53_int; // 0xd1 Eq
	if(var_54_bool == 0) goto Label_231; // 0xd2 JumpB
	var_55_string = ""; // 0xd3 PushV
	var_55_string = "Independence"; // 0xd4 MovS
	func_139(var_17_cvector, var_55_string); // 0xd5 NEW_2
	var_56_int = 531247; // 0xd7 PushI
	SetMessage(var_56_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_57_int = 531248; // 0xdc PushI
	var_58_int = -1; // 0xdd PushI
	var_59_int = 32563; // 0xde PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xdf TObjFunc
	var_60_int = 531252; // 0xe1 PushI
	var_61_int = -1; // 0xe2 PushI
	var_62_int = 32568; // 0xe3 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_3_string = 1; // 0xe7 TMovB
	var_63_bool = 0; // 0xe8 PushV
	func_1338(var_63_bool); // 0xe9 NEW_2
	if(var_63_bool == 0) goto Label_239; // 0xeb JumpB
	lshStopAnimation(); // 0xec Func
	goto Label_241; // 0xee Jump
	
Label_241:
	return 0; // 0xf1 Return
	
Label_239:
	StopAnimation(); // 0xef Func
	
Label_243:
	return 0; // 0xf3 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0x19b PushI
	if(var_18_int == 0) goto Label_502; // 0x19c JumpB
	func_1268(); // 0x19e NEW_2
	var_20_int = 36971; // 0x1a0 PushI
	var_21_bool = var_16_bool == var_20_int; // 0x1a1 Eq
	if(var_21_bool == 0) goto Label_444; // 0x1a2 JumpB
	var_22_string = ""; // 0x1a3 PushV
	var_22_string = "Neutral"; // 0x1a4 MovS
	func_388(var_17_cvector, var_22_string); // 0x1a5 NEW_2
	var_39_int = 535294; // 0x1a7 PushI
	SetMessage(var_39_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_40_int = 535295; // 0x1ac PushI
	var_41_int = 36973; // 0x1ad PushI
	var_42_int = 36972; // 0x1ae PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x1af TObjFunc
	var_43_int = 535302; // 0x1b1 PushI
	var_44_int = -1; // 0x1b2 PushI
	var_45_int = 36980; // 0x1b3 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x1b4 TObjFunc
	var_46_int = 535303; // 0x1b6 PushI
	var_47_int = -1; // 0x1b7 PushI
	var_48_int = 36981; // 0x1b8 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_49_int = 36973; // 0x1bc PushI
	var_50_bool = var_16_bool == var_49_int; // 0x1bd Eq
	if(var_50_bool == 0) goto Label_467; // 0x1be JumpB
	var_51_string = ""; // 0x1bf PushV
	var_51_string = "Neutral"; // 0x1c0 MovS
	func_388(var_17_cvector, var_51_string); // 0x1c1 NEW_2
	var_52_int = 535296; // 0x1c3 PushI
	SetMessage(var_52_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_53_int = 535297; // 0x1c8 PushI
	var_54_int = 36975; // 0x1c9 PushI
	var_55_int = 36974; // 0x1ca PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x1cb TObjFunc
	var_56_int = 535301; // 0x1cd PushI
	var_57_int = 36975; // 0x1ce PushI
	var_58_int = 36978; // 0x1cf PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_59_int = 36975; // 0x1d3 PushI
	var_60_bool = var_16_bool == var_59_int; // 0x1d4 Eq
	if(var_60_bool == 0) goto Label_490; // 0x1d5 JumpB
	var_61_string = ""; // 0x1d6 PushV
	var_61_string = "Neutral"; // 0x1d7 MovS
	func_388(var_17_cvector, var_61_string); // 0x1d8 NEW_2
	var_62_int = 535298; // 0x1da PushI
	SetMessage(var_62_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_63_int = 535299; // 0x1df PushI
	var_64_int = -1; // 0x1e0 PushI
	var_65_int = 36976; // 0x1e1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x1e2 TObjFunc
	var_66_int = 535300; // 0x1e4 PushI
	var_67_int = -1; // 0x1e5 PushI
	var_68_int = 36977; // 0x1e6 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_3_string = 1; // 0x1ea TMovB
	var_69_bool = 0; // 0x1eb PushV
	func_1338(var_69_bool); // 0x1ec NEW_2
	if(var_69_bool == 0) goto Label_498; // 0x1ee JumpB
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
	func_1268(); // 0x29c NEW_2
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
	func_1338(var_46_bool); // 0x2b7 NEW_2
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
	func_1275(var_62_object); // 0x327 NEW_2
	var_61_object = var_62_object; // 0x328 Mov
	func_1142(var_61_object); // 0x32a NEW_2
	
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
	func_1222(var_17_string); // 0x34a NEW_2
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
	func_1222(var_23_string); // 0x359 NEW_2
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
	func_1357(var_34_object); // 0x36c NEW_2
	var_385_string = ""; // 0x36e PushV
	var_385_string = "Neutral"; // 0x36f MovS
	func_1222(var_385_string); // 0x370 NEW_2
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


func_0(var_0_object, var_37_int, var_38_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; // 0x0 PushV
	var_0_object = var_38_object; // 0x1 TMov
	var_48_bool = 0; var_49_object = Obj(); var_50_float = 0; // 0x2 PushV
	var_49_object = var_38_object; // 0x3 Mov
	var_50_float = 70.0; // 0x4 MovF
	func_997(var_49_object, var_50_float); // 0x5 NEW_2
	var_95_bool = var_48_bool == 0; // 0x7 Not
	if(var_95_bool == 0) goto Label_11; // 0x8 JumpB
	var_37_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_44_object); // 0xb Func
	var_96_int = 0; // 0xd PushV
	func_1332(var_96_int); // 0xe NEW_2
	SetNPCName(var_96_int); // 0x10 ObjFunc
	var_97_int = 0; // 0x12 PushV
	func_1330(var_97_int); // 0x13 NEW_2
	SetNPCDescription(var_97_int); // 0x15 ObjFunc
	var_98_string = ""; // 0x17 PushV
	func_1334(var_98_string); // 0x18 NEW_2
	SetPhoto(var_98_string); // 0x1a ObjFunc
	var_99_string = ""; // 0x1c PushV
	func_1336(var_99_string); // 0x1d NEW_2
	SetPhoto2(var_99_string); // 0x1f ObjFunc
	var_100_int = 0; // 0x21 PushV
	func_1340(var_100_int); // 0x22 NEW_2
	SetPlayerName(var_100_int); // 0x24 ObjFunc
	var_46_int = -1; // 0x26 MovI
	IsOverrideActive(var_45_bool); // 0x27 Func
	var_108_bool = var_45_bool; // 0x29 Push
	if(var_108_bool == 0) goto Label_45; // 0x2a JumpB
	var_37_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_44_object); // 0x2d Func
	var_109_bool = 0; var_110_object = Obj(); // 0x2f PushV
	var_111_object = Obj(); // 0x30 PushV
	func_1275(var_111_object); // 0x31 NEW_2
	var_110_object = var_111_object; // 0x32 Mov
	func_1084(var_109_bool, var_110_object); // 0x34 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x36 PushV
	var_204_object = var_38_object; // 0x37 Mov
	var_205_object = var_44_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_47_bool); // 0x3d ObjFunc
	
Label_63:
	var_253_bool = var_47_bool == 0; // 0x3f Not
	if(var_253_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_47_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_254_object = Obj(); // 0x46 PushV
	var_254_object = var_38_object; // 0x47 Mov
	func_1066(); // 0x48 NEW_2
	StopDialog(var_44_object); // 0x4a Func
	GetReturnValue(var_46_int); // 0x4c ObjFunc
	var_37_int = var_46_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769()
{
	var_387_float = 0; var_388_float = 0; // 0x301 PushV
	var_389_int = 8; // 0x302 PushI
	var_390_int = 16; // 0x303 PushI
	rand(var_388_float, var_389_int, var_390_int); // 0x304 Func
	var_391_int = 10; // 0x306 PushI
	SetTimer(var_391_int, var_388_float); // 0x307 Func
	return 2; // 0x309 Return
}


func_642(var_2_object, var_360_string)
{
	var_361_bool = 0; // 0x283 PushV
	func_1338(var_361_bool); // 0x284 NEW_2
	var_362_bool = var_361_bool == 0; // 0x286 Not
	if(var_362_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_363_bool = var_360_string == var_2_object; // 0x289 Eq
	if(var_363_bool == 0) goto Label_652; // 0x28a JumpB
	return 0; // 0x28b Return
	
Label_652:
	var_364_string = ""; var_365_bool = 0; // 0x28c PushV
	var_364_string = var_360_string; // 0x28d Mov
	var_366_string = ""; // 0x28e PushS
	var_367_bool = var_360_string == var_366_string; // 0x28f Eq
	if(var_367_bool == 0) goto Label_659; // 0x290 JumpB
	var_365_bool = 0; // 0x291 MovB
	goto Label_660; // 0x292 Jump
	
Label_660:
	func_1238(var_364_string, var_365_bool); // 0x294 NEW_2
	var_2_object = var_360_string; // 0x296 TMov
	return 0; // 0x297 Return
	
Label_659:
	var_365_bool = 1; // 0x293 MovB
}


func_1281(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x501 PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x502 Or
	var_79_float = sqrt(var_80_int); // 0x503 Sqrt2
	var_81_float = 0.0; // 0x504 PushF
	var_82_bool = var_79_float < var_81_float; // 0x505 LT
	if(var_82_bool == 0) goto Label_1289; // 0x506 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x507 MovV
	return 2; // 0x508 Return
	
Label_1289:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x509 Div2
	return 2; // 0x50a Return
}


func_388(var_2_object, var_300_string)
{
	var_301_bool = 0; // 0x185 PushV
	func_1338(var_301_bool); // 0x186 NEW_2
	var_302_bool = var_301_bool == 0; // 0x188 Not
	if(var_302_bool == 0) goto Label_395; // 0x189 JumpB
	return 0; // 0x18a Return
	
Label_395:
	var_303_bool = var_300_string == var_2_object; // 0x18b Eq
	if(var_303_bool == 0) goto Label_398; // 0x18c JumpB
	return 0; // 0x18d Return
	
Label_398:
	var_304_string = ""; var_305_bool = 0; // 0x18e PushV
	var_304_string = var_300_string; // 0x18f Mov
	var_306_string = ""; // 0x190 PushS
	var_307_bool = var_300_string == var_306_string; // 0x191 Eq
	if(var_307_bool == 0) goto Label_405; // 0x192 JumpB
	var_305_bool = 0; // 0x193 MovB
	goto Label_406; // 0x194 Jump
	
Label_406:
	func_1238(var_304_string, var_305_bool); // 0x196 NEW_2
	var_2_object = var_300_string; // 0x198 TMov
	return 0; // 0x199 Return
	
Label_405:
	var_305_bool = 1; // 0x195 MovB
}


func_778()
{
	var_386_int = 10; // 0x30a PushI
	KillTimer(var_386_int); // 0x30b Func
	return 0; // 0x30d Return
}


func_139(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0x8c PushV
	func_1338(var_212_bool); // 0x8d NEW_2
	var_213_bool = var_212_bool == 0; // 0x8f Not
	if(var_213_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_214_bool = var_211_string == var_2_object; // 0x92 Eq
	if(var_214_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_215_string = ""; var_216_bool = 0; // 0x95 PushV
	var_215_string = var_211_string; // 0x96 Mov
	var_217_string = ""; // 0x97 PushS
	var_218_bool = var_211_string == var_217_string; // 0x98 Eq
	if(var_218_bool == 0) goto Label_156; // 0x99 JumpB
	var_216_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1238(var_215_string, var_216_bool); // 0x9d NEW_2
	var_2_object = var_211_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_216_bool = 1; // 0x9c MovB
}


func_1291(var_164_int)
{
	var_165_float = 0; var_166_float = 0; // 0x50b PushV
	GetGameTime(var_166_float); // 0x50c Func
	var_167_int = 1; // 0x50e PushI
	var_168_int = 0; // 0x50f PushV
	var_169_int = 24; // 0x510 PushI
	var_168_int = var_166_float / var_166_float; // 0x511 Div2
	var_164_int = var_167_int + var_168_int; // 0x512 Add2
	return 2; // 0x513 Return
}


func_1300(var_264_bool, var_265_int)
{
	var_266_int = 0; // 0x515 PushV
	func_1291(var_266_int); // 0x516 NEW_2
	var_264_bool = var_266_int == var_265_int; // 0x518 Eq2
	return 0; // 0x519 Return
}


func_1306(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x51a PushV
	var_44_string = "idle"; // 0x51b MovS
	var_45_int = var_42_int; // 0x51c Push
	if(var_45_int == 0) goto Label_1311; // 0x51d JumpB
	var_44_string = var_44_string + var_42_int; // 0x51e Add2
	
Label_1311:
	var_41_string = var_44_string; // 0x51f Mov
	return 2; // 0x520 Return
}


func_1179(var_151_bool)
{
	var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; // 0x49b PushV
	var_163_string = "d"; // 0x49c PushS
	var_164_int = 0; // 0x49d PushV
	func_1291(var_164_int); // 0x49e NEW_2
	var_170_int = var_163_string + var_164_int; // 0x4a0 Add
	var_171_string = "m"; // 0x4a1 PushS
	var_158_string = var_170_int + var_171_string; // 0x4a2 Add2
	var_159_int = 0; // 0x4a3 MovI
	
Label_1188:
	var_172_int = 1; // 0x4a4 PushI
	if(var_172_int == 0) goto Label_1201; // 0x4a5 JumpB
	var_173_int = 1; // 0x4a6 PushI
	var_174_int = var_159_int + var_173_int; // 0x4a7 Add
	var_175_int = var_158_string + var_174_int; // 0x4a8 Add
	HasProperty(var_175_int, var_160_bool); // 0x4a9 ObjFunc
	var_176_bool = var_160_bool == 0; // 0x4ab Not
	if(var_176_bool == 0) goto Label_1198; // 0x4ac JumpB
	goto Label_1201; // 0x4ad Jump
	
Label_1201:
	var_177_bool = var_159_int == 0; // 0x4b1 Not
	if(var_177_bool == 0) goto Label_1205; // 0x4b2 JumpB
	var_151_bool = 0; // 0x4b3 MovB
	return 10; // 0x4b4 Return
	
Label_1205:
	var_161_int = 0; // 0x4b5 MovI
	var_178_int = 1; // 0x4b6 PushI
	var_179_bool = var_159_int > var_178_int; // 0x4b7 GT
	if(var_179_bool == 0) goto Label_1211; // 0x4b8 JumpB
	irand(var_161_int, var_159_int); // 0x4b9 Func
	
Label_1211:
	var_180_int = 1; // 0x4bb PushI
	var_181_int = var_161_int + var_180_int; // 0x4bc Add
	var_182_int = var_158_string + var_181_int; // 0x4bd Add
	GetProperty(var_182_int, var_162_string); // 0x4be ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x4c0 PushV
	var_184_string = var_162_string; // 0x4c1 Mov
	func_1253(var_183_bool, var_184_string); // 0x4c2 NEW_2
	var_151_bool = var_183_bool; // 0x4c3 Mov
	return 10; // 0x4c5 Return
	
Label_1198:
	var_185_int = 1; // 0x4ae PushI
	var_159_int = var_159_int + var_185_int; // 0x4af Add2
	goto Label_1188; // 0x4b0 Jump
}


func_1313(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x521 PushV
	var_38_int = 0; // 0x522 MovI
	
Label_1315:
	var_40_string = "all"; // 0x523 PushS
	var_41_string = ""; var_42_int = 0; // 0x524 PushV
	var_42_int = var_38_int; // 0x525 Mov
	func_1306(var_41_string, var_42_int); // 0x526 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x528 Func
	var_46_bool = var_39_bool == 0; // 0x52a Not
	if(var_46_bool == 0) goto Label_1325; // 0x52b JumpB
	goto Label_1328; // 0x52c Jump
	
Label_1328:
	var_35_int = var_38_int; // 0x530 Mov
	return 4; // 0x531 Return
	
Label_1325:
	var_47_int = 1; // 0x52d PushI
	var_38_int = var_38_int + var_47_int; // 0x52e Add2
	goto Label_1315; // 0x52f Jump
}


func_1066()
{
	var_255_bool = 0; var_256_bool = 0; // 0x42a PushV
	var_257_bool = 1; // 0x42b PushB
	CameraSwitchToNormal(var_257_bool); // 0x42c Func
	var_258_bool = 0; // 0x42e PushV
	func_1338(var_258_bool); // 0x42f NEW_2
	if(var_258_bool == 0) goto Label_1075; // 0x431 JumpB
	goto Label_1083; // 0x432 Jump
	
Label_1083:
	return 2; // 0x43b Return
	
Label_1075:
	var_259_string = "head"; // 0x433 PushS
	HasAnimationTrack(var_256_bool, var_259_string); // 0x434 Func
	var_260_bool = var_256_bool; // 0x436 Push
	if(var_260_bool == 0) goto Label_1083; // 0x437 JumpB
	var_261_string = "head"; // 0x438 PushS
	UnlookAsync(var_261_string); // 0x439 Func
}


func_1330(var_97_int)
{
	var_97_int = 515537; // 0x532 MovI
	return 0; // 0x533 Return
}


func_1332(var_96_int)
{
	var_96_int = 502862; // 0x534 MovI
	return 0; // 0x535 Return
}


func_1334(var_98_string)
{
	var_98_string = "ui/NPC_Julia.png"; // 0x536 MovS
	return 0; // 0x537 Return
}


func_1336(var_99_string)
{
	var_99_string = "ui/NPC_Julia_b.png"; // 0x538 MovS
	return 0; // 0x539 Return
}


func_1338(var_91_bool)
{
	var_91_bool = 1; // 0x53a MovB
	return 0; // 0x53b Return
}


func_1084(var_109_bool, var_110_object)
{
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0; // 0x43c PushV
	var_118_string = "voice_common"; // 0x43d PushS
	GetVariable(var_118_string, var_116_int); // 0x43e Func
	var_119_int = var_116_int; // 0x440 Push
	if(var_119_int == 0) goto Label_1122; // 0x441 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x442 PushV
	var_121_object = var_110_object; // 0x443 Mov
	func_1142(var_121_object); // 0x444 NEW_2
	var_150_bool = var_120_bool == 0; // 0x446 Not
	if(var_150_bool == 0) goto Label_1104; // 0x447 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x448 PushV
	var_152_object = var_110_object; // 0x449 Mov
	func_1179(var_152_object); // 0x44a NEW_2
	var_186_bool = var_151_bool == 0; // 0x44c Not
	if(var_186_bool == 0) goto Label_1104; // 0x44d JumpB
	var_109_bool = 0; // 0x44e MovB
	return 4; // 0x44f Return
	
Label_1104:
	var_187_int = 2; // 0x450 PushI
	irand(var_117_int, var_187_int); // 0x451 Func
	var_188_int = var_117_int; // 0x453 Push
	if(var_188_int == 0) goto Label_1117; // 0x454 JumpB
	var_189_string = "voice_common"; // 0x455 PushS
	var_190_int = 1; // 0x456 PushI
	var_191_int = var_116_int + var_190_int; // 0x457 Add
	var_192_int = 3; // 0x458 PushI
	var_193_int = var_191_int / var_192_int; // 0x459 Mod
	SetVariable(var_189_string, var_193_int); // 0x45a Func
	goto Label_1121; // 0x45c Jump
	
Label_1121:
	goto Label_1140; // 0x461 Jump
	
Label_1140:
	var_109_bool = 1; // 0x474 MovB
	return 4; // 0x475 Return
	
Label_1117:
	var_194_string = "voice_common"; // 0x45d PushS
	var_195_int = 0; // 0x45e PushI
	SetVariable(var_194_string, var_195_int); // 0x45f Func
	
Label_1122:
	var_196_bool = 0; var_197_object = Obj(); // 0x462 PushV
	var_197_object = var_110_object; // 0x463 Mov
	func_1179(var_197_object); // 0x464 NEW_2
	var_198_bool = var_196_bool == 0; // 0x466 Not
	if(var_198_bool == 0) goto Label_1136; // 0x467 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x468 PushV
	var_200_object = var_110_object; // 0x469 Mov
	func_1142(var_200_object); // 0x46a NEW_2
	var_201_bool = var_199_bool == 0; // 0x46c Not
	if(var_201_bool == 0) goto Label_1136; // 0x46d JumpB
	var_109_bool = 0; // 0x46e MovB
	return 4; // 0x46f Return
	
Label_1136:
	var_202_string = "voice_common"; // 0x470 PushS
	var_203_int = 1; // 0x471 PushI
	SetVariable(var_202_string, var_203_int); // 0x472 Func
}


func_1340(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x53c PushV
	var_103_string = "branch"; // 0x53d PushS
	GetVariable(var_103_string, var_102_int); // 0x53e Func
	var_104_int = 0; // 0x540 PushI
	var_105_bool = var_102_int == var_104_int; // 0x541 Eq
	if(var_105_bool == 0) goto Label_1350; // 0x542 JumpB
	var_100_int = 1; // 0x543 MovI
	return 2; // 0x544 Return
	
Label_1350:
	var_106_int = 1; // 0x546 PushI
	var_107_bool = var_102_int == var_106_int; // 0x547 Eq
	if(var_107_bool == 0) goto Label_1355; // 0x548 JumpB
	var_100_int = 2; // 0x549 MovI
	return 2; // 0x54a Return
	
Label_1355:
	var_100_int = 3; // 0x54b MovI
	return 2; // 0x54c Return
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


func_325(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object; // 0x146 TMov
	var_1_object = var_293_object; // 0x147 TMov
	var_3_string = 0; // 0x148 TMovB
	var_299_int = 1; // 0x149 PushI
	if(var_299_int == 0) goto Label_358; // 0x14a JumpB
	var_300_string = ""; // 0x14b PushV
	var_300_string = "Neutral"; // 0x14c MovS
	func_388(var_294_object, var_300_string); // 0x14d NEW_2
	var_308_int = 535294; // 0x14f PushI
	SetMessage(var_308_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_309_int = 535295; // 0x154 PushI
	var_310_int = 36973; // 0x155 PushI
	var_311_int = 36972; // 0x156 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x157 TObjFunc
	var_312_int = 535302; // 0x159 PushI
	var_313_int = -1; // 0x15a PushI
	var_314_int = 36980; // 0x15b PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x15c TObjFunc
	var_315_int = 535303; // 0x15e PushI
	var_316_int = -1; // 0x15f PushI
	var_317_int = 36981; // 0x160 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x161 TObjFunc
	goto Label_358; // 0x163 Jump
	
Label_358:
	var_318_bool = 0; // 0x166 PushV
	func_1338(var_318_bool); // 0x167 NEW_2
	if(var_318_bool == 0) goto Label_373; // 0x169 JumpB
	
Label_362:
	lshWaitForAnimEnd(); // 0x16a Func
	var_319_string = var_3_string; // 0x16c PushT
	if(var_319_string == 0) goto Label_367; // 0x16d JumpB
	goto Label_372; // 0x16e Jump
	
Label_372:
	goto Label_387; // 0x174 Jump
	
Label_387:
	return 0; // 0x183 Return
	
Label_367:
	var_320_string = ""; // 0x16f PushV
	var_320_string = var_2_object; // 0x170 MovT
	func_1222(var_320_string); // 0x171 NEW_2
	goto Label_362; // 0x173 Jump
	
Label_373:
	var_321_string = "all"; // 0x175 PushS
	var_322_string = "idle"; // 0x176 PushS
	PlayAnimation(var_321_string, var_322_string); // 0x177 Func
	
Label_377:
	WaitForAnimEnd(); // 0x179 Func
	var_323_string = var_3_string; // 0x17b PushT
	if(var_323_string == 0) goto Label_382; // 0x17c JumpB
	goto Label_387; // 0x17d Jump
	
Label_382:
	var_324_string = "all"; // 0x17e PushS
	var_325_string = "idle"; // 0x17f PushS
	PlayAnimation(var_324_string, var_325_string); // 0x180 Func
	goto Label_377; // 0x182 Jump
}


func_1222(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x4c6 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x4c7 Func
	var_244_bool = var_241_bool; // 0x4c9 Push
	if(var_244_bool == 0) goto Label_1233; // 0x4ca JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x4cb Func
	var_245_bool = 0; // 0x4cd PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x4ce Func
	goto Label_1237; // 0x4d0 Jump
	
Label_1237:
	return 6; // 0x4d5 Return
	
Label_1233:
	var_246_string = "Can't find lsh animation : "; // 0x4d1 PushS
	var_247_int = var_246_string + var_237_string; // 0x4d2 Add
	Trace(var_247_int); // 0x4d3 Func
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


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_353_object, var_354_object)
{
	var_0_object = var_354_object; // 0x249 TMov
	var_1_object = var_353_object; // 0x24a TMov
	var_3_string = 0; // 0x24b TMovB
	var_359_int = 1; // 0x24c PushI
	if(var_359_int == 0) goto Label_612; // 0x24d JumpB
	var_360_string = ""; // 0x24e PushV
	var_360_string = "Neutral"; // 0x24f MovS
	func_642(var_354_object, var_360_string); // 0x250 NEW_2
	var_368_int = 540551; // 0x252 PushI
	SetMessage(var_368_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_369_int = 540552; // 0x257 PushI
	var_370_int = -1; // 0x258 PushI
	var_371_int = 42561; // 0x259 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x25a TObjFunc
	var_372_int = 540795; // 0x25c PushI
	var_373_int = -1; // 0x25d PushI
	var_374_int = 42844; // 0x25e PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x25f TObjFunc
	goto Label_612; // 0x261 Jump
	
Label_612:
	var_375_bool = 0; // 0x264 PushV
	func_1338(var_375_bool); // 0x265 NEW_2
	if(var_375_bool == 0) goto Label_627; // 0x267 JumpB
	
Label_616:
	lshWaitForAnimEnd(); // 0x268 Func
	var_376_string = var_3_string; // 0x26a PushT
	if(var_376_string == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_626:
	goto Label_641; // 0x272 Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_621:
	var_377_string = ""; // 0x26d PushV
	var_377_string = var_2_object; // 0x26e MovT
	func_1222(var_377_string); // 0x26f NEW_2
	goto Label_616; // 0x271 Jump
	
Label_627:
	var_378_string = "all"; // 0x273 PushS
	var_379_string = "idle"; // 0x274 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x275 Func
	
Label_631:
	WaitForAnimEnd(); // 0x277 Func
	var_380_string = var_3_string; // 0x279 PushT
	if(var_380_string == 0) goto Label_636; // 0x27a JumpB
	goto Label_641; // 0x27b Jump
	
Label_636:
	var_381_string = "all"; // 0x27c PushS
	var_382_string = "idle"; // 0x27d PushS
	PlayAnimation(var_381_string, var_382_string); // 0x27e Func
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


func_1357(var_34_object)
{
	var_35_bool = GlobalVars[1]; // 0x54e PushGE
	var_36_bool = var_35_bool == 0; // 0x54f Not
	if(var_36_bool == 0) goto Label_1370; // 0x550 JumpB
	var_37_int = 0; var_38_object = Obj(); // 0x551 PushV
	var_38_object = var_34_object; // 0x552 Mov
	TaskCall(0); // 0x553 TaskCall
	func_0(var_39_object, var_37_int, var_38_object); // 0x554 NEW_2
	TaskReturn(); // 0x555 TaskReturn
	var_262_bool = GlobalVars[1]; // 0x557 PushGE
	var_262_bool = 1; // 0x558 MovB
	GlobalVars[1] = var_262_bool; // 0x559 PopGE
	
Label_1370:
	var_263_bool = 0; // 0x55a PushV
	var_263_bool = 0; // 0x55b MovB
	var_264_bool = 0; var_265_int = 0; // 0x55c PushV
	var_265_int = 12; // 0x55d MovI
	func_1300(var_264_bool, var_265_int); // 0x55e NEW_2
	if(var_264_bool == 0) goto Label_1381; // 0x560 JumpB
	var_267_bool = GlobalVars[2]; // 0x561 PushGE
	var_268_bool = var_267_bool == 0; // 0x562 Not
	if(var_268_bool == 0) goto Label_1381; // 0x563 JumpB
	var_263_bool = 1; // 0x564 MovB
	
Label_1381:
	if(var_263_bool == 0) goto Label_1392; // 0x565 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0x566 PushV
	var_270_object = var_34_object; // 0x567 Mov
	TaskCall(2); // 0x568 TaskCall
	func_244(var_271_object, var_269_int, var_270_object); // 0x569 NEW_2
	TaskReturn(); // 0x56a TaskReturn
	var_328_bool = GlobalVars[2]; // 0x56c PushGE
	var_328_bool = 1; // 0x56d MovB
	GlobalVars[2] = var_328_bool; // 0x56e PopGE
	return 0; // 0x56f Return
	
Label_1392:
	var_329_int = 0; var_330_object = Obj(); // 0x570 PushV
	var_330_object = var_34_object; // 0x571 Mov
	TaskCall(4); // 0x572 TaskCall
	func_503(var_331_object, var_329_int, var_330_object); // 0x573 NEW_2
	TaskReturn(); // 0x574 TaskReturn
	return 0; // 0x576 Return
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object; // 0x52 TMov
	var_1_object = var_204_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_210_int = 1; // 0x55 PushI
	if(var_210_int == 0) goto Label_109; // 0x56 JumpB
	var_211_string = ""; // 0x57 PushV
	var_211_string = "Neutral"; // 0x58 MovS
	func_139(var_205_object, var_211_string); // 0x59 NEW_2
	var_228_int = 518012; // 0x5b PushI
	SetMessage(var_228_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_229_int = 518013; // 0x60 PushI
	var_230_int = 32562; // 0x61 PushI
	var_231_int = 19146; // 0x62 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x63 TObjFunc
	var_232_int = 531249; // 0x65 PushI
	var_233_int = 32565; // 0x66 PushI
	var_234_int = 32564; // 0x67 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_235_bool = 0; // 0x6d PushV
	func_1338(var_235_bool); // 0x6e NEW_2
	if(var_235_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_236_string = var_3_string; // 0x73 PushT
	if(var_236_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_237_string = ""; // 0x76 PushV
	var_237_string = var_2_object; // 0x77 MovT
	func_1222(var_237_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_248_string = "all"; // 0x7c PushS
	var_249_string = "idle"; // 0x7d PushS
	PlayAnimation(var_248_string, var_249_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_250_string = var_3_string; // 0x82 PushT
	if(var_250_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_251_string = "all"; // 0x85 PushS
	var_252_string = "idle"; // 0x86 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1238(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x4d6 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x4d7 Func
	var_225_bool = var_222_bool; // 0x4d9 Push
	if(var_225_bool == 0) goto Label_1248; // 0x4da JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x4db Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x4dd Func
	goto Label_1252; // 0x4df Jump
	
Label_1252:
	return 6; // 0x4e4 Return
	
Label_1248:
	var_226_string = "Can't find lsh animation : "; // 0x4e0 PushS
	var_227_int = var_226_string + var_215_string; // 0x4e1 Add
	Trace(var_227_int); // 0x4e2 Func
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
	func_1281(var_75_cvector, var_76_cvector); // 0x400 NEW_2
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
	var_88_bool = 1; // 0x410 PushB
	CameraTransit(var_66_cvector, var_64_cvector, var_88_bool); // 0x411 Func
	var_89_float = GetByIndex(var_65_cvector, 0); // 0x413 PushE
	var_90_float = GetByIndex(var_65_cvector, 2); // 0x414 PushE
	Rotate(var_89_float, var_90_float); // 0x415 Func
	var_91_bool = 0; // 0x417 PushV
	func_1338(var_91_bool); // 0x418 NEW_2
	if(var_91_bool == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1060; // 0x41b Jump
	
Label_1060:
	CameraWaitForPlayFinish(); // 0x424 Func
	ResumeWorld(); // 0x426 Func
	var_48_bool = 1; // 0x428 MovB
	return 18; // 0x429 Return
	
Label_1052:
	var_92_string = "head"; // 0x41c PushS
	HasAnimationTrack(var_68_bool, var_92_string); // 0x41d Func
	var_93_bool = var_68_bool; // 0x41f Push
	if(var_93_bool == 0) goto Label_1060; // 0x420 JumpB
	var_94_string = "head"; // 0x421 PushS
	LookAsyncCamera(var_94_string); // 0x422 Func
}


func_742(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0); // 0x2e6 PushE
	var_94_float = GetByIndex(var_0_object, 2); // 0x2e7 PushE
	RotateAsync(var_93_float, var_94_float); // 0x2e8 Func
	return 0; // 0x2ea Return
}


func_1253(var_143_bool, var_144_string)
{
	var_145_bool = 0; var_146_bool = 0; // 0x4e5 PushV
	var_147_bool = 0; // 0x4e6 PushV
	func_1338(var_147_bool); // 0x4e7 NEW_2
	if(var_147_bool == 0) goto Label_1266; // 0x4e9 JumpB
	lshHasSpeech(var_146_bool, var_144_string); // 0x4ea Func
	var_148_bool = var_146_bool; // 0x4ec Push
	if(var_148_bool == 0) goto Label_1266; // 0x4ed JumpB
	lshPlaySpeech(var_144_string); // 0x4ee Func
	var_143_bool = 1; // 0x4f0 MovB
	return 2; // 0x4f1 Return
	
Label_1266:
	var_143_bool = 0; // 0x4f2 MovB
	return 2; // 0x4f3 Return
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


func_1268()
{
	var_19_bool = 0; // 0x4f4 PushV
	func_1338(var_19_bool); // 0x4f5 NEW_2
	if(var_19_bool == 0) goto Label_1274; // 0x4f7 JumpB
	lshStopSpeech(); // 0x4f8 Func
	
Label_1274:
	return 0; // 0x4fa Return
}


func_244(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0xf4 PushV
	var_0_object = var_270_object; // 0xf5 TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0xf6 PushV
	var_281_object = var_270_object; // 0xf7 Mov
	var_282_float = 70.0; // 0xf8 MovF
	func_997(var_281_object, var_282_float); // 0xf9 NEW_2
	var_283_bool = var_280_bool == 0; // 0xfb Not
	if(var_283_bool == 0) goto Label_255; // 0xfc JumpB
	var_269_int = -2; // 0xfd MovI
	return 8; // 0xfe Return
	
Label_255:
	CreateDialog(var_276_object); // 0xff Func
	var_284_int = 0; // 0x101 PushV
	func_1332(var_284_int); // 0x102 NEW_2
	SetNPCName(var_284_int); // 0x104 ObjFunc
	var_285_int = 0; // 0x106 PushV
	func_1330(var_285_int); // 0x107 NEW_2
	SetNPCDescription(var_285_int); // 0x109 ObjFunc
	var_286_string = ""; // 0x10b PushV
	func_1334(var_286_string); // 0x10c NEW_2
	SetPhoto(var_286_string); // 0x10e ObjFunc
	var_287_string = ""; // 0x110 PushV
	func_1336(var_287_string); // 0x111 NEW_2
	SetPhoto2(var_287_string); // 0x113 ObjFunc
	var_288_int = 0; // 0x115 PushV
	func_1340(var_288_int); // 0x116 NEW_2
	SetPlayerName(var_288_int); // 0x118 ObjFunc
	var_278_int = -1; // 0x11a MovI
	IsOverrideActive(var_277_bool); // 0x11b Func
	var_289_bool = var_277_bool; // 0x11d Push
	if(var_289_bool == 0) goto Label_289; // 0x11e JumpB
	var_269_int = -2; // 0x11f MovI
	return 8; // 0x120 Return
	
Label_289:
	DoDialog(var_276_object); // 0x121 Func
	var_290_bool = 0; var_291_object = Obj(); // 0x123 PushV
	var_292_object = Obj(); // 0x124 PushV
	func_1275(var_292_object); // 0x125 NEW_2
	var_291_object = var_292_object; // 0x126 Mov
	func_1084(var_290_bool, var_291_object); // 0x128 NEW_2
	var_293_object = Obj(); var_294_object = Obj(); // 0x12a PushV
	var_293_object = var_270_object; // 0x12b Mov
	var_294_object = var_276_object; // 0x12c Mov
	TaskCall(3); // 0x12d TaskCall
	func_325(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object); // 0x12e NEW_2
	TaskReturn(); // 0x12f TaskReturn
	IsDialogEnd(var_279_bool); // 0x131 ObjFunc
	
Label_307:
	var_326_bool = var_279_bool == 0; // 0x133 Not
	if(var_326_bool == 0) goto Label_314; // 0x134 JumpB
	sync(); // 0x135 Func
	IsDialogEnd(var_279_bool); // 0x137 ObjFunc
	goto Label_307; // 0x139 Jump
	
Label_314:
	var_327_object = Obj(); // 0x13a PushV
	var_327_object = var_270_object; // 0x13b Mov
	func_1066(); // 0x13c NEW_2
	StopDialog(var_276_object); // 0x13e Func
	GetReturnValue(var_278_int); // 0x140 ObjFunc
	var_269_int = var_278_int; // 0x142 Mov
	return 8; // 0x143 Return
}


func_1142(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x476 PushV
	var_127_string = "c"; // 0x477 MovS
	var_128_int = 0; // 0x478 MovI
	
Label_1145:
	var_132_int = 1; // 0x479 PushI
	if(var_132_int == 0) goto Label_1158; // 0x47a JumpB
	var_133_int = 1; // 0x47b PushI
	var_134_int = var_128_int + var_133_int; // 0x47c Add
	var_135_int = var_127_string + var_134_int; // 0x47d Add
	HasProperty(var_135_int, var_129_bool); // 0x47e ObjFunc
	var_136_bool = var_129_bool == 0; // 0x480 Not
	if(var_136_bool == 0) goto Label_1155; // 0x481 JumpB
	goto Label_1158; // 0x482 Jump
	
Label_1158:
	var_137_bool = var_128_int == 0; // 0x486 Not
	if(var_137_bool == 0) goto Label_1162; // 0x487 JumpB
	var_120_bool = 0; // 0x488 MovB
	return 10; // 0x489 Return
	
Label_1162:
	var_130_int = 0; // 0x48a MovI
	var_138_int = 1; // 0x48b PushI
	var_139_bool = var_128_int > var_138_int; // 0x48c GT
	if(var_139_bool == 0) goto Label_1168; // 0x48d JumpB
	irand(var_130_int, var_128_int); // 0x48e Func
	
Label_1168:
	var_140_int = 1; // 0x490 PushI
	var_141_int = var_130_int + var_140_int; // 0x491 Add
	var_142_int = var_127_string + var_141_int; // 0x492 Add
	GetProperty(var_142_int, var_131_string); // 0x493 ObjFunc
	var_143_bool = 0; var_144_string = ""; // 0x495 PushV
	var_144_string = var_131_string; // 0x496 Mov
	func_1253(var_143_bool, var_144_string); // 0x497 NEW_2
	var_120_bool = var_143_bool; // 0x498 Mov
	return 10; // 0x49a Return
	
Label_1155:
	var_149_int = 1; // 0x483 PushI
	var_128_int = var_128_int + var_149_int; // 0x484 Add2
	goto Label_1145; // 0x485 Jump
}


func_503(var_0_object, var_329_int, var_330_object)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0; var_336_object = Obj(); var_337_bool = 0; var_338_int = 0; var_339_bool = 0; // 0x1f7 PushV
	var_0_object = var_330_object; // 0x1f8 TMov
	var_340_bool = 0; var_341_object = Obj(); var_342_float = 0; // 0x1f9 PushV
	var_341_object = var_330_object; // 0x1fa Mov
	var_342_float = 70.0; // 0x1fb MovF
	func_997(var_341_object, var_342_float); // 0x1fc NEW_2
	var_343_bool = var_340_bool == 0; // 0x1fe Not
	if(var_343_bool == 0) goto Label_514; // 0x1ff JumpB
	var_329_int = -2; // 0x200 MovI
	return 8; // 0x201 Return
	
Label_514:
	CreateDialog(var_336_object); // 0x202 Func
	var_344_int = 0; // 0x204 PushV
	func_1332(var_344_int); // 0x205 NEW_2
	SetNPCName(var_344_int); // 0x207 ObjFunc
	var_345_int = 0; // 0x209 PushV
	func_1330(var_345_int); // 0x20a NEW_2
	SetNPCDescription(var_345_int); // 0x20c ObjFunc
	var_346_string = ""; // 0x20e PushV
	func_1334(var_346_string); // 0x20f NEW_2
	SetPhoto(var_346_string); // 0x211 ObjFunc
	var_347_string = ""; // 0x213 PushV
	func_1336(var_347_string); // 0x214 NEW_2
	SetPhoto2(var_347_string); // 0x216 ObjFunc
	var_348_int = 0; // 0x218 PushV
	func_1340(var_348_int); // 0x219 NEW_2
	SetPlayerName(var_348_int); // 0x21b ObjFunc
	var_338_int = -1; // 0x21d MovI
	IsOverrideActive(var_337_bool); // 0x21e Func
	var_349_bool = var_337_bool; // 0x220 Push
	if(var_349_bool == 0) goto Label_548; // 0x221 JumpB
	var_329_int = -2; // 0x222 MovI
	return 8; // 0x223 Return
	
Label_548:
	DoDialog(var_336_object); // 0x224 Func
	var_350_bool = 0; var_351_object = Obj(); // 0x226 PushV
	var_352_object = Obj(); // 0x227 PushV
	func_1275(var_352_object); // 0x228 NEW_2
	var_351_object = var_352_object; // 0x229 Mov
	func_1084(var_350_bool, var_351_object); // 0x22b NEW_2
	var_353_object = Obj(); var_354_object = Obj(); // 0x22d PushV
	var_353_object = var_330_object; // 0x22e Mov
	var_354_object = var_336_object; // 0x22f Mov
	TaskCall(5); // 0x230 TaskCall
	func_584(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	IsDialogEnd(var_339_bool); // 0x234 ObjFunc
	
Label_566:
	var_383_bool = var_339_bool == 0; // 0x236 Not
	if(var_383_bool == 0) goto Label_573; // 0x237 JumpB
	sync(); // 0x238 Func
	IsDialogEnd(var_339_bool); // 0x23a ObjFunc
	goto Label_566; // 0x23c Jump
	
Label_573:
	var_384_object = Obj(); // 0x23d PushV
	var_384_object = var_330_object; // 0x23e Mov
	func_1066(); // 0x23f NEW_2
	StopDialog(var_336_object); // 0x241 Func
	GetReturnValue(var_338_int); // 0x243 ObjFunc
	var_329_int = var_338_int; // 0x245 Mov
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
	func_1313(var_35_int); // 0x383 NEW_2
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
	func_1306(var_62_string, var_63_int); // 0x3a7 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x3a9 Func
	WaitForAnimEnd(var_32_bool); // 0x3ab Func
	var_64_bool = var_32_bool == 0; // 0x3ad Not
	if(var_64_bool == 0) goto Label_944; // 0x3ae JumpB
	goto Label_955; // 0x3af Jump
}


func_1275(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x4fb PushV
	self(var_113_object); // 0x4fc Func
	var_111_object = var_113_object; // 0x4fe Mov
	return 2; // 0x4ff Return
}


