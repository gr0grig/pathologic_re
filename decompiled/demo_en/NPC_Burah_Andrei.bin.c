task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_bool = 0; // 0x1b PushV
	func_2968(var_33_bool); // 0x1c NEW_2
	if(var_33_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0xca PushI
	if(var_34_int == 0) goto Label_250; // 0xcb JumpB
	func_2814(); // 0xcd NEW_2
	var_36_int = 33378; // 0xcf PushI
	var_37_bool = var_33_cvector == var_36_int; // 0xd0 Eq
	if(var_37_bool == 0) goto Label_215; // 0xd1 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0xd2 PushV
	var_38_object = var_1_object; // 0xd3 MovT
	var_39_object = var_0_bool; // 0xd4 MovT
	func_3095(); // 0xd5 NEW_2
	
Label_215:
	var_41_int = 33377; // 0xd7 PushI
	var_42_bool = var_32_bool == var_41_int; // 0xd8 Eq
	if(var_42_bool == 0) goto Label_238; // 0xd9 JumpB
	var_43_string = ""; // 0xda PushV
	var_43_string = "Neutral"; // 0xdb MovS
	func_179(var_33_cvector, var_43_string); // 0xdc NEW_2
	var_60_int = 531971; // 0xde PushI
	SetMessage(var_60_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_61_int = 531972; // 0xe3 PushI
	var_62_int = -1; // 0xe4 PushI
	var_63_int = 33378; // 0xe5 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xe6 TObjFunc
	var_64_int = 531973; // 0xe8 PushI
	var_65_int = -1; // 0xe9 PushI
	var_66_int = 33379; // 0xea PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_3_object = 1; // 0xee TMovB
	var_67_bool = 0; // 0xef PushV
	func_2968(var_67_bool); // 0xf0 NEW_2
	if(var_67_bool == 0) goto Label_246; // 0xf2 JumpB
	lshStopAnimation(); // 0xf3 Func
	goto Label_248; // 0xf5 Jump
	
Label_248:
	return 0; // 0xf8 Return
	
Label_246:
	StopAnimation(); // 0xf6 Func
	
Label_250:
	return 0; // 0xfa Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x1a2 PushI
	if(var_34_int == 0) goto Label_509; // 0x1a3 JumpB
	func_2814(); // 0x1a5 NEW_2
	var_36_int = 36906; // 0x1a7 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x1a8 Eq
	if(var_37_bool == 0) goto Label_451; // 0x1a9 JumpB
	var_38_string = ""; // 0x1aa PushV
	var_38_string = "Neutral"; // 0x1ab MovS
	func_395(var_33_cvector, var_38_string); // 0x1ac NEW_2
	var_55_int = 535231; // 0x1ae PushI
	SetMessage(var_55_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_56_int = 535232; // 0x1b3 PushI
	var_57_int = 36953; // 0x1b4 PushI
	var_58_int = 36907; // 0x1b5 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x1b6 TObjFunc
	var_59_int = 535233; // 0x1b8 PushI
	var_60_int = -1; // 0x1b9 PushI
	var_61_int = 36908; // 0x1ba PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x1bb TObjFunc
	var_62_int = 535280; // 0x1bd PushI
	var_63_int = -1; // 0x1be PushI
	var_64_int = 36956; // 0x1bf PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x1c0 TObjFunc
	return 0; // 0x1c2 Return
	
Label_451:
	var_65_int = 36953; // 0x1c3 PushI
	var_66_bool = var_32_bool == var_65_int; // 0x1c4 Eq
	if(var_66_bool == 0) goto Label_474; // 0x1c5 JumpB
	var_67_string = ""; // 0x1c6 PushV
	var_67_string = "Neutral"; // 0x1c7 MovS
	func_395(var_33_cvector, var_67_string); // 0x1c8 NEW_2
	var_68_int = 535277; // 0x1ca PushI
	SetMessage(var_68_int); // 0x1cb TObjFunc
	ClearReplies(); // 0x1cd TObjFunc
	var_69_int = 535278; // 0x1cf PushI
	var_70_int = 36957; // 0x1d0 PushI
	var_71_int = 36954; // 0x1d1 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x1d2 TObjFunc
	var_72_int = 535279; // 0x1d4 PushI
	var_73_int = 36957; // 0x1d5 PushI
	var_74_int = 36955; // 0x1d6 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_75_int = 36957; // 0x1da PushI
	var_76_bool = var_32_bool == var_75_int; // 0x1db Eq
	if(var_76_bool == 0) goto Label_497; // 0x1dc JumpB
	var_77_string = ""; // 0x1dd PushV
	var_77_string = "Neutral"; // 0x1de MovS
	func_395(var_33_cvector, var_77_string); // 0x1df NEW_2
	var_78_int = 535281; // 0x1e1 PushI
	SetMessage(var_78_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_79_int = 535282; // 0x1e6 PushI
	var_80_int = -1; // 0x1e7 PushI
	var_81_int = 36958; // 0x1e8 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x1e9 TObjFunc
	var_82_int = 535283; // 0x1eb PushI
	var_83_int = -1; // 0x1ec PushI
	var_84_int = 36959; // 0x1ed PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_3_object = 1; // 0x1f1 TMovB
	var_85_bool = 0; // 0x1f2 PushV
	func_2968(var_85_bool); // 0x1f3 NEW_2
	if(var_85_bool == 0) goto Label_505; // 0x1f5 JumpB
	lshStopAnimation(); // 0x1f6 Func
	goto Label_507; // 0x1f8 Jump
	
Label_507:
	return 0; // 0x1fb Return
	
Label_505:
	StopAnimation(); // 0x1f9 Func
	
Label_509:
	return 0; // 0x1fd Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x29b PushI
	if(var_34_int == 0) goto Label_799; // 0x29c JumpB
	func_2814(); // 0x29e NEW_2
	var_36_int = 19127; // 0x2a0 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x2a1 Eq
	if(var_37_bool == 0) goto Label_690; // 0x2a2 JumpB
	var_38_string = ""; // 0x2a3 PushV
	var_38_string = "Neutral"; // 0x2a4 MovS
	func_644(var_33_cvector, var_38_string); // 0x2a5 NEW_2
	var_55_int = 517994; // 0x2a7 PushI
	SetMessage(var_55_int); // 0x2a8 TObjFunc
	ClearReplies(); // 0x2aa TObjFunc
	var_56_int = 517995; // 0x2ac PushI
	var_57_int = 23147; // 0x2ad PushI
	var_58_int = 19128; // 0x2ae PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_59_int = 23147; // 0x2b2 PushI
	var_60_bool = var_32_bool == var_59_int; // 0x2b3 Eq
	if(var_60_bool == 0) goto Label_713; // 0x2b4 JumpB
	var_61_string = ""; // 0x2b5 PushV
	var_61_string = "Smile"; // 0x2b6 MovS
	func_644(var_33_cvector, var_61_string); // 0x2b7 NEW_2
	var_62_int = 521978; // 0x2b9 PushI
	SetMessage(var_62_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_63_int = 521979; // 0x2be PushI
	var_64_int = 23149; // 0x2bf PushI
	var_65_int = 23148; // 0x2c0 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x2c1 TObjFunc
	var_66_int = 521984; // 0x2c3 PushI
	var_67_int = -1; // 0x2c4 PushI
	var_68_int = 23153; // 0x2c5 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x2c6 TObjFunc
	return 0; // 0x2c8 Return
	
Label_713:
	var_69_int = 23149; // 0x2c9 PushI
	var_70_bool = var_32_bool == var_69_int; // 0x2ca Eq
	if(var_70_bool == 0) goto Label_736; // 0x2cb JumpB
	var_71_string = ""; // 0x2cc PushV
	var_71_string = "Smile"; // 0x2cd MovS
	func_644(var_33_cvector, var_71_string); // 0x2ce NEW_2
	var_72_int = 521980; // 0x2d0 PushI
	SetMessage(var_72_int); // 0x2d1 TObjFunc
	ClearReplies(); // 0x2d3 TObjFunc
	var_73_int = 521981; // 0x2d5 PushI
	var_74_int = 23151; // 0x2d6 PushI
	var_75_int = 23150; // 0x2d7 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x2d8 TObjFunc
	var_76_int = 521985; // 0x2da PushI
	var_77_int = 23157; // 0x2db PushI
	var_78_int = 23154; // 0x2dc PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x2dd TObjFunc
	return 0; // 0x2df Return
	
Label_736:
	var_79_int = 23151; // 0x2e0 PushI
	var_80_bool = var_32_bool == var_79_int; // 0x2e1 Eq
	if(var_80_bool == 0) goto Label_764; // 0x2e2 JumpB
	var_81_string = ""; // 0x2e3 PushV
	var_81_string = "Smile"; // 0x2e4 MovS
	func_644(var_33_cvector, var_81_string); // 0x2e5 NEW_2
	var_82_int = 521982; // 0x2e7 PushI
	SetMessage(var_82_int); // 0x2e8 TObjFunc
	ClearReplies(); // 0x2ea TObjFunc
	var_83_int = 521987; // 0x2ec PushI
	var_84_int = -1; // 0x2ed PushI
	var_85_int = 23156; // 0x2ee PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x2ef TObjFunc
	var_86_int = 521983; // 0x2f1 PushI
	var_87_int = 23157; // 0x2f2 PushI
	var_88_int = 23152; // 0x2f3 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x2f4 TObjFunc
	var_89_int = 521986; // 0x2f6 PushI
	var_90_int = -1; // 0x2f7 PushI
	var_91_int = 23155; // 0x2f8 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x2f9 TObjFunc
	return 0; // 0x2fb Return
	
Label_764:
	var_92_int = 23157; // 0x2fc PushI
	var_93_bool = var_32_bool == var_92_int; // 0x2fd Eq
	if(var_93_bool == 0) goto Label_787; // 0x2fe JumpB
	var_94_string = ""; // 0x2ff PushV
	var_94_string = "What"; // 0x300 MovS
	func_644(var_33_cvector, var_94_string); // 0x301 NEW_2
	var_95_int = 521988; // 0x303 PushI
	SetMessage(var_95_int); // 0x304 TObjFunc
	ClearReplies(); // 0x306 TObjFunc
	var_96_int = 521989; // 0x308 PushI
	var_97_int = -1; // 0x309 PushI
	var_98_int = 23158; // 0x30a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x30b TObjFunc
	var_99_int = 521990; // 0x30d PushI
	var_100_int = -1; // 0x30e PushI
	var_101_int = 23159; // 0x30f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x310 TObjFunc
	return 0; // 0x312 Return
	
Label_787:
	var_3_object = 1; // 0x313 TMovB
	var_102_bool = 0; // 0x314 PushV
	func_2968(var_102_bool); // 0x315 NEW_2
	if(var_102_bool == 0) goto Label_795; // 0x317 JumpB
	lshStopAnimation(); // 0x318 Func
	goto Label_797; // 0x31a Jump
	
Label_797:
	return 0; // 0x31d Return
	
Label_795:
	StopAnimation(); // 0x31b Func
	
Label_799:
	return 0; // 0x31f Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x429 PushI
	if(var_34_int == 0) goto Label_1650; // 0x42a JumpB
	func_2814(); // 0x42c NEW_2
	var_36_int = 32376; // 0x42e PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x42f Eq
	if(var_37_bool == 0) goto Label_1078; // 0x430 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x431 PushV
	var_38_object = var_1_object; // 0x432 MovT
	var_39_object = var_0_bool; // 0x433 MovT
	func_2998(); // 0x434 NEW_2
	
Label_1078:
	var_79_int = 32374; // 0x436 PushI
	var_80_bool = var_33_cvector == var_79_int; // 0x437 Eq
	if(var_80_bool == 0) goto Label_1086; // 0x438 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x439 PushV
	var_81_object = var_1_object; // 0x43a MovT
	var_82_object = var_0_bool; // 0x43b MovT
	func_2998(); // 0x43c NEW_2
	
Label_1086:
	var_83_int = 32379; // 0x43e PushI
	var_84_bool = var_33_cvector == var_83_int; // 0x43f Eq
	if(var_84_bool == 0) goto Label_1114; // 0x440 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x441 PushV
	var_85_object = var_1_object; // 0x442 MovT
	var_86_object = var_0_bool; // 0x443 MovT
	func_3015(); // 0x444 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x446 PushV
	var_118_object = var_1_object; // 0x447 MovT
	var_119_object = var_0_bool; // 0x448 MovT
	func_2976(var_119_object); // 0x449 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x44b PushV
	var_139_object = var_1_object; // 0x44c MovT
	var_140_object = var_0_bool; // 0x44d MovT
	func_2986(); // 0x44e NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x450 PushV
	var_143_object = var_1_object; // 0x451 MovT
	var_144_object = var_0_bool; // 0x452 MovT
	func_3077(); // 0x453 NEW_2
	var_159_object = Obj(); var_160_object = Obj(); // 0x455 PushV
	var_159_object = var_1_object; // 0x456 MovT
	var_160_object = var_0_bool; // 0x457 MovT
	func_3049(); // 0x458 NEW_2
	
Label_1114:
	var_185_int = 32401; // 0x45a PushI
	var_186_bool = var_33_cvector == var_185_int; // 0x45b Eq
	if(var_186_bool == 0) goto Label_1122; // 0x45c JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x45d PushV
	var_187_object = var_1_object; // 0x45e MovT
	var_188_object = var_0_bool; // 0x45f MovT
	func_3089(); // 0x460 NEW_2
	
Label_1122:
	var_191_int = 32403; // 0x462 PushI
	var_192_bool = var_33_cvector == var_191_int; // 0x463 Eq
	if(var_192_bool == 0) goto Label_1130; // 0x464 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x465 PushV
	var_193_object = var_1_object; // 0x466 MovT
	var_194_object = var_0_bool; // 0x467 MovT
	func_3065(); // 0x468 NEW_2
	
Label_1130:
	var_213_int = 20587; // 0x46a PushI
	var_214_bool = var_33_cvector == var_213_int; // 0x46b Eq
	if(var_214_bool == 0) goto Label_1138; // 0x46c JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x46d PushV
	var_215_object = var_1_object; // 0x46e MovT
	var_216_object = var_0_bool; // 0x46f MovT
	func_3095(); // 0x470 NEW_2
	
Label_1138:
	var_218_int = 32369; // 0x472 PushI
	var_219_bool = var_32_bool == var_218_int; // 0x473 Eq
	if(var_219_bool == 0) goto Label_1264; // 0x474 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x475 PushV
	var_221_object = var_1_object; // 0x476 MovT
	func_3100(var_221_object); // 0x477 NEW_2
	if(var_220_bool == 0) goto Label_1176; // 0x479 JumpB
	var_226_object = Obj(); var_227_object = Obj(); // 0x47a PushV
	var_226_object = var_1_object; // 0x47b MovT
	var_227_object = var_0_bool; // 0x47c MovT
	func_2992(); // 0x47d NEW_2
	var_230_object = Obj(); var_231_object = Obj(); // 0x47f PushV
	var_230_object = var_1_object; // 0x480 MovT
	var_231_object = var_0_bool; // 0x481 MovT
	func_3043(); // 0x482 NEW_2
	var_234_string = ""; // 0x484 PushV
	var_234_string = "Neutral"; // 0x485 MovS
	func_1042(var_33_cvector, var_234_string); // 0x486 NEW_2
	var_251_int = 531038; // 0x488 PushI
	SetMessage(var_251_int); // 0x489 TObjFunc
	ClearReplies(); // 0x48b TObjFunc
	var_252_int = 531227; // 0x48d PushI
	var_253_int = 32541; // 0x48e PushI
	var_254_int = 32540; // 0x48f PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x490 TObjFunc
	var_255_int = 531231; // 0x492 PushI
	var_256_int = 32545; // 0x493 PushI
	var_257_int = 32544; // 0x494 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x495 TObjFunc
	return 0; // 0x497 Return
	
Label_1176:
	var_258_string = ""; // 0x498 PushV
	var_258_string = "Smile"; // 0x499 MovS
	func_1042(var_33_cvector, var_258_string); // 0x49a NEW_2
	var_259_int = 518214; // 0x49c PushI
	SetMessage(var_259_int); // 0x49d TObjFunc
	ClearReplies(); // 0x49f TObjFunc
	var_260_bool = 0; var_261_object = Obj(); // 0x4a1 PushV
	var_261_object = var_1_object; // 0x4a2 MovT
	func_3124(var_261_object); // 0x4a3 NEW_2
	if(var_260_bool == 0) goto Label_1195; // 0x4a5 JumpB
	var_266_int = 531041; // 0x4a6 PushI
	var_267_int = 32373; // 0x4a7 PushI
	var_268_int = 32372; // 0x4a8 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x4a9 TObjFunc
	
Label_1195:
	var_269_bool = 0; // 0x4ab PushV
	var_269_bool = 0; // 0x4ac MovB
	var_270_bool = 0; // 0x4ad PushV
	var_270_bool = 0; // 0x4ae MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x4af PushV
	var_272_object = var_1_object; // 0x4b0 MovT
	func_3136(var_271_bool, var_272_object); // 0x4b1 NEW_2
	if(var_271_bool == 0) goto Label_1210; // 0x4b3 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x4b4 PushV
	var_281_object = var_1_object; // 0x4b5 MovT
	func_3112(var_281_object); // 0x4b6 NEW_2
	if(var_280_bool == 0) goto Label_1210; // 0x4b8 JumpB
	var_270_bool = 1; // 0x4b9 MovB
	
Label_1210:
	if(var_270_bool == 0) goto Label_1218; // 0x4ba JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x4bb PushV
	var_287_object = var_1_object; // 0x4bc MovT
	func_3170(var_287_object); // 0x4bd NEW_2
	var_292_bool = var_286_bool == 0; // 0x4bf Not
	if(var_292_bool == 0) goto Label_1218; // 0x4c0 JumpB
	var_269_bool = 1; // 0x4c1 MovB
	
Label_1218:
	if(var_269_bool == 0) goto Label_1224; // 0x4c2 JumpB
	var_293_int = 531048; // 0x4c3 PushI
	var_294_int = 32378; // 0x4c4 PushI
	var_295_int = 32377; // 0x4c5 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x4c6 TObjFunc
	
Label_1224:
	var_296_bool = 0; // 0x4c8 PushV
	var_296_bool = 0; // 0x4c9 MovB
	var_297_bool = 0; // 0x4ca PushV
	var_297_bool = 0; // 0x4cb MovB
	var_298_bool = 0; var_299_object = Obj(); // 0x4cc PushV
	var_299_object = var_1_object; // 0x4cd MovT
	func_3158(var_299_object); // 0x4ce NEW_2
	if(var_298_bool == 0) goto Label_1240; // 0x4d0 JumpB
	var_304_bool = 0; var_305_object = Obj(); // 0x4d1 PushV
	var_305_object = var_1_object; // 0x4d2 MovT
	func_3146(var_305_object); // 0x4d3 NEW_2
	var_310_bool = var_304_bool == 0; // 0x4d5 Not
	if(var_310_bool == 0) goto Label_1240; // 0x4d6 JumpB
	var_297_bool = 1; // 0x4d7 MovB
	
Label_1240:
	if(var_297_bool == 0) goto Label_1247; // 0x4d8 JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0x4d9 PushV
	var_312_object = var_1_object; // 0x4da MovT
	func_3182(var_312_object); // 0x4db NEW_2
	if(var_311_bool == 0) goto Label_1247; // 0x4dd JumpB
	var_296_bool = 1; // 0x4de MovB
	
Label_1247:
	if(var_296_bool == 0) goto Label_1253; // 0x4df JumpB
	var_317_int = 531081; // 0x4e0 PushI
	var_318_int = 32402; // 0x4e1 PushI
	var_319_int = 32401; // 0x4e2 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x4e3 TObjFunc
	
Label_1253:
	var_320_int = 518215; // 0x4e5 PushI
	var_321_int = 20584; // 0x4e6 PushI
	var_322_int = 19328; // 0x4e7 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x4e8 TObjFunc
	var_323_int = 518216; // 0x4ea PushI
	var_324_int = -1; // 0x4eb PushI
	var_325_int = 19329; // 0x4ec PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x4ed TObjFunc
	return 0; // 0x4ef Return
	
Label_1264:
	var_326_int = 20584; // 0x4f0 PushI
	var_327_bool = var_32_bool == var_326_int; // 0x4f1 Eq
	if(var_327_bool == 0) goto Label_1287; // 0x4f2 JumpB
	var_328_string = ""; // 0x4f3 PushV
	var_328_string = "Neutral"; // 0x4f4 MovS
	func_1042(var_33_cvector, var_328_string); // 0x4f5 NEW_2
	var_329_int = 519419; // 0x4f7 PushI
	SetMessage(var_329_int); // 0x4f8 TObjFunc
	ClearReplies(); // 0x4fa TObjFunc
	var_330_int = 519420; // 0x4fc PushI
	var_331_int = 20586; // 0x4fd PushI
	var_332_int = 20585; // 0x4fe PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x4ff TObjFunc
	var_333_int = 519424; // 0x501 PushI
	var_334_int = 20586; // 0x502 PushI
	var_335_int = 20589; // 0x503 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x504 TObjFunc
	return 0; // 0x506 Return
	
Label_1287:
	var_336_int = 20586; // 0x507 PushI
	var_337_bool = var_32_bool == var_336_int; // 0x508 Eq
	if(var_337_bool == 0) goto Label_1310; // 0x509 JumpB
	var_338_string = ""; // 0x50a PushV
	var_338_string = "Neutral"; // 0x50b MovS
	func_1042(var_33_cvector, var_338_string); // 0x50c NEW_2
	var_339_int = 519421; // 0x50e PushI
	SetMessage(var_339_int); // 0x50f TObjFunc
	ClearReplies(); // 0x511 TObjFunc
	var_340_int = 519422; // 0x513 PushI
	var_341_int = -1; // 0x514 PushI
	var_342_int = 20587; // 0x515 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x516 TObjFunc
	var_343_int = 519423; // 0x518 PushI
	var_344_int = -1; // 0x519 PushI
	var_345_int = 20588; // 0x51a PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x51b TObjFunc
	return 0; // 0x51d Return
	
Label_1310:
	var_346_int = 20576; // 0x51e PushI
	var_347_bool = var_32_bool == var_346_int; // 0x51f Eq
	if(var_347_bool == 0) goto Label_1313; // 0x520 JumpB
	
Label_1313:
	var_348_int = 20578; // 0x521 PushI
	var_349_bool = var_32_bool == var_348_int; // 0x522 Eq
	if(var_349_bool == 0) goto Label_1336; // 0x523 JumpB
	var_350_string = ""; // 0x524 PushV
	var_350_string = "Grin"; // 0x525 MovS
	func_1042(var_33_cvector, var_350_string); // 0x526 NEW_2
	var_351_int = 519413; // 0x528 PushI
	SetMessage(var_351_int); // 0x529 TObjFunc
	ClearReplies(); // 0x52b TObjFunc
	var_352_int = 519414; // 0x52d PushI
	var_353_int = 20580; // 0x52e PushI
	var_354_int = 20579; // 0x52f PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x530 TObjFunc
	var_355_int = 519426; // 0x532 PushI
	var_356_int = 20582; // 0x533 PushI
	var_357_int = 20592; // 0x534 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x535 TObjFunc
	return 0; // 0x537 Return
	
Label_1336:
	var_358_int = 20580; // 0x538 PushI
	var_359_bool = var_32_bool == var_358_int; // 0x539 Eq
	if(var_359_bool == 0) goto Label_1359; // 0x53a JumpB
	var_360_string = ""; // 0x53b PushV
	var_360_string = "Neutral"; // 0x53c MovS
	func_1042(var_33_cvector, var_360_string); // 0x53d NEW_2
	var_361_int = 519415; // 0x53f PushI
	SetMessage(var_361_int); // 0x540 TObjFunc
	ClearReplies(); // 0x542 TObjFunc
	var_362_int = 519416; // 0x544 PushI
	var_363_int = 20582; // 0x545 PushI
	var_364_int = 20581; // 0x546 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x547 TObjFunc
	var_365_int = 519427; // 0x549 PushI
	var_366_int = -1; // 0x54a PushI
	var_367_int = 20594; // 0x54b PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_368_int = 20582; // 0x54f PushI
	var_369_bool = var_32_bool == var_368_int; // 0x550 Eq
	if(var_369_bool == 0) goto Label_1382; // 0x551 JumpB
	var_370_string = ""; // 0x552 PushV
	var_370_string = "Neutral"; // 0x553 MovS
	func_1042(var_33_cvector, var_370_string); // 0x554 NEW_2
	var_371_int = 519417; // 0x556 PushI
	SetMessage(var_371_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_372_int = 519418; // 0x55b PushI
	var_373_int = -1; // 0x55c PushI
	var_374_int = 20583; // 0x55d PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x55e TObjFunc
	var_375_int = 519428; // 0x560 PushI
	var_376_int = -1; // 0x561 PushI
	var_377_int = 20595; // 0x562 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x563 TObjFunc
	return 0; // 0x565 Return
	
Label_1382:
	var_378_int = 32402; // 0x566 PushI
	var_379_bool = var_32_bool == var_378_int; // 0x567 Eq
	if(var_379_bool == 0) goto Label_1405; // 0x568 JumpB
	var_380_string = ""; // 0x569 PushV
	var_380_string = "Neutral"; // 0x56a MovS
	func_1042(var_33_cvector, var_380_string); // 0x56b NEW_2
	var_381_int = 531082; // 0x56d PushI
	SetMessage(var_381_int); // 0x56e TObjFunc
	ClearReplies(); // 0x570 TObjFunc
	var_382_int = 531217; // 0x572 PushI
	var_383_int = 32529; // 0x573 PushI
	var_384_int = 32528; // 0x574 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x575 TObjFunc
	var_385_int = 531221; // 0x577 PushI
	var_386_int = 32536; // 0x578 PushI
	var_387_int = 32532; // 0x579 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x57a TObjFunc
	return 0; // 0x57c Return
	
Label_1405:
	var_388_int = 32529; // 0x57d PushI
	var_389_bool = var_32_bool == var_388_int; // 0x57e Eq
	if(var_389_bool == 0) goto Label_1428; // 0x57f JumpB
	var_390_string = ""; // 0x580 PushV
	var_390_string = "Neutral"; // 0x581 MovS
	func_1042(var_33_cvector, var_390_string); // 0x582 NEW_2
	var_391_int = 531218; // 0x584 PushI
	SetMessage(var_391_int); // 0x585 TObjFunc
	ClearReplies(); // 0x587 TObjFunc
	var_392_int = 531219; // 0x589 PushI
	var_393_int = 32531; // 0x58a PushI
	var_394_int = 32530; // 0x58b PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x58c TObjFunc
	var_395_int = 531222; // 0x58e PushI
	var_396_int = 32536; // 0x58f PushI
	var_397_int = 32533; // 0x590 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x591 TObjFunc
	return 0; // 0x593 Return
	
Label_1428:
	var_398_int = 32536; // 0x594 PushI
	var_399_bool = var_32_bool == var_398_int; // 0x595 Eq
	if(var_399_bool == 0) goto Label_1451; // 0x596 JumpB
	var_400_string = ""; // 0x597 PushV
	var_400_string = "Grin"; // 0x598 MovS
	func_1042(var_33_cvector, var_400_string); // 0x599 NEW_2
	var_401_int = 531224; // 0x59b PushI
	SetMessage(var_401_int); // 0x59c TObjFunc
	ClearReplies(); // 0x59e TObjFunc
	var_402_int = 531225; // 0x5a0 PushI
	var_403_int = -1; // 0x5a1 PushI
	var_404_int = 32538; // 0x5a2 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x5a3 TObjFunc
	var_405_int = 531226; // 0x5a5 PushI
	var_406_int = -1; // 0x5a6 PushI
	var_407_int = 32539; // 0x5a7 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x5a8 TObjFunc
	return 0; // 0x5aa Return
	
Label_1451:
	var_408_int = 32531; // 0x5ab PushI
	var_409_bool = var_32_bool == var_408_int; // 0x5ac Eq
	if(var_409_bool == 0) goto Label_1469; // 0x5ad JumpB
	var_410_string = ""; // 0x5ae PushV
	var_410_string = "Neutral"; // 0x5af MovS
	func_1042(var_33_cvector, var_410_string); // 0x5b0 NEW_2
	var_411_int = 531220; // 0x5b2 PushI
	SetMessage(var_411_int); // 0x5b3 TObjFunc
	ClearReplies(); // 0x5b5 TObjFunc
	var_412_int = 531083; // 0x5b7 PushI
	var_413_int = -1; // 0x5b8 PushI
	var_414_int = 32403; // 0x5b9 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x5ba TObjFunc
	return 0; // 0x5bc Return
	
Label_1469:
	var_415_int = 32378; // 0x5bd PushI
	var_416_bool = var_32_bool == var_415_int; // 0x5be Eq
	if(var_416_bool == 0) goto Label_1492; // 0x5bf JumpB
	var_417_string = ""; // 0x5c0 PushV
	var_417_string = "Smile"; // 0x5c1 MovS
	func_1042(var_33_cvector, var_417_string); // 0x5c2 NEW_2
	var_418_int = 531049; // 0x5c4 PushI
	SetMessage(var_418_int); // 0x5c5 TObjFunc
	ClearReplies(); // 0x5c7 TObjFunc
	var_419_int = 531214; // 0x5c9 PushI
	var_420_int = 32526; // 0x5ca PushI
	var_421_int = 32524; // 0x5cb PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x5cc TObjFunc
	var_422_int = 531215; // 0x5ce PushI
	var_423_int = 32526; // 0x5cf PushI
	var_424_int = 32525; // 0x5d0 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x5d1 TObjFunc
	return 0; // 0x5d3 Return
	
Label_1492:
	var_425_int = 32526; // 0x5d4 PushI
	var_426_bool = var_32_bool == var_425_int; // 0x5d5 Eq
	if(var_426_bool == 0) goto Label_1510; // 0x5d6 JumpB
	var_427_string = ""; // 0x5d7 PushV
	var_427_string = "Neutral"; // 0x5d8 MovS
	func_1042(var_33_cvector, var_427_string); // 0x5d9 NEW_2
	var_428_int = 531216; // 0x5db PushI
	SetMessage(var_428_int); // 0x5dc TObjFunc
	ClearReplies(); // 0x5de TObjFunc
	var_429_int = 531050; // 0x5e0 PushI
	var_430_int = -1; // 0x5e1 PushI
	var_431_int = 32379; // 0x5e2 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x5e3 TObjFunc
	return 0; // 0x5e5 Return
	
Label_1510:
	var_432_int = 32373; // 0x5e6 PushI
	var_433_bool = var_32_bool == var_432_int; // 0x5e7 Eq
	if(var_433_bool == 0) goto Label_1528; // 0x5e8 JumpB
	var_434_string = ""; // 0x5e9 PushV
	var_434_string = "Neutral"; // 0x5ea MovS
	func_1042(var_33_cvector, var_434_string); // 0x5eb NEW_2
	var_435_int = 531042; // 0x5ed PushI
	SetMessage(var_435_int); // 0x5ee TObjFunc
	ClearReplies(); // 0x5f0 TObjFunc
	var_436_int = 531043; // 0x5f2 PushI
	var_437_int = -1; // 0x5f3 PushI
	var_438_int = 32374; // 0x5f4 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x5f5 TObjFunc
	return 0; // 0x5f7 Return
	
Label_1528:
	var_439_int = 32545; // 0x5f8 PushI
	var_440_bool = var_32_bool == var_439_int; // 0x5f9 Eq
	if(var_440_bool == 0) goto Label_1551; // 0x5fa JumpB
	var_441_string = ""; // 0x5fb PushV
	var_441_string = "Neutral"; // 0x5fc MovS
	func_1042(var_33_cvector, var_441_string); // 0x5fd NEW_2
	var_442_int = 531232; // 0x5ff PushI
	SetMessage(var_442_int); // 0x600 TObjFunc
	ClearReplies(); // 0x602 TObjFunc
	var_443_int = 531233; // 0x604 PushI
	var_444_int = 32541; // 0x605 PushI
	var_445_int = 32546; // 0x606 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x607 TObjFunc
	var_446_int = 531234; // 0x609 PushI
	var_447_int = -1; // 0x60a PushI
	var_448_int = 32547; // 0x60b PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x60c TObjFunc
	return 0; // 0x60e Return
	
Label_1551:
	var_449_int = 32541; // 0x60f PushI
	var_450_bool = var_32_bool == var_449_int; // 0x610 Eq
	if(var_450_bool == 0) goto Label_1574; // 0x611 JumpB
	var_451_string = ""; // 0x612 PushV
	var_451_string = "Smile"; // 0x613 MovS
	func_1042(var_33_cvector, var_451_string); // 0x614 NEW_2
	var_452_int = 531228; // 0x616 PushI
	SetMessage(var_452_int); // 0x617 TObjFunc
	ClearReplies(); // 0x619 TObjFunc
	var_453_int = 531238; // 0x61b PushI
	var_454_int = 32553; // 0x61c PushI
	var_455_int = 32552; // 0x61d PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x61e TObjFunc
	var_456_int = 531229; // 0x620 PushI
	var_457_int = 32543; // 0x621 PushI
	var_458_int = 32542; // 0x622 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x623 TObjFunc
	return 0; // 0x625 Return
	
Label_1574:
	var_459_int = 32543; // 0x626 PushI
	var_460_bool = var_32_bool == var_459_int; // 0x627 Eq
	if(var_460_bool == 0) goto Label_1597; // 0x628 JumpB
	var_461_string = ""; // 0x629 PushV
	var_461_string = "Untrust"; // 0x62a MovS
	func_1042(var_33_cvector, var_461_string); // 0x62b NEW_2
	var_462_int = 531230; // 0x62d PushI
	SetMessage(var_462_int); // 0x62e TObjFunc
	ClearReplies(); // 0x630 TObjFunc
	var_463_int = 531235; // 0x632 PushI
	var_464_int = -1; // 0x633 PushI
	var_465_int = 32549; // 0x634 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x635 TObjFunc
	var_466_int = 531240; // 0x637 PushI
	var_467_int = 32553; // 0x638 PushI
	var_468_int = 32554; // 0x639 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x63a TObjFunc
	return 0; // 0x63c Return
	
Label_1597:
	var_469_int = 32553; // 0x63d PushI
	var_470_bool = var_32_bool == var_469_int; // 0x63e Eq
	if(var_470_bool == 0) goto Label_1615; // 0x63f JumpB
	var_471_string = ""; // 0x640 PushV
	var_471_string = "Smile"; // 0x641 MovS
	func_1042(var_33_cvector, var_471_string); // 0x642 NEW_2
	var_472_int = 531239; // 0x644 PushI
	SetMessage(var_472_int); // 0x645 TObjFunc
	ClearReplies(); // 0x647 TObjFunc
	var_473_int = 531236; // 0x649 PushI
	var_474_int = 32551; // 0x64a PushI
	var_475_int = 32550; // 0x64b PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x64c TObjFunc
	return 0; // 0x64e Return
	
Label_1615:
	var_476_int = 32551; // 0x64f PushI
	var_477_bool = var_32_bool == var_476_int; // 0x650 Eq
	if(var_477_bool == 0) goto Label_1638; // 0x651 JumpB
	var_478_string = ""; // 0x652 PushV
	var_478_string = "Neutral"; // 0x653 MovS
	func_1042(var_33_cvector, var_478_string); // 0x654 NEW_2
	var_479_int = 531237; // 0x656 PushI
	SetMessage(var_479_int); // 0x657 TObjFunc
	ClearReplies(); // 0x659 TObjFunc
	var_480_int = 531045; // 0x65b PushI
	var_481_int = -1; // 0x65c PushI
	var_482_int = 32376; // 0x65d PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x65e TObjFunc
	var_483_int = 531040; // 0x660 PushI
	var_484_int = -1; // 0x661 PushI
	var_485_int = 32371; // 0x662 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x663 TObjFunc
	return 0; // 0x665 Return
	
Label_1638:
	var_3_object = 1; // 0x666 TMovB
	var_486_bool = 0; // 0x667 PushV
	func_2968(var_486_bool); // 0x668 NEW_2
	if(var_486_bool == 0) goto Label_1646; // 0x66a JumpB
	lshStopAnimation(); // 0x66b Func
	goto Label_1648; // 0x66d Jump
	
Label_1648:
	return 0; // 0x670 Return
	
Label_1646:
	StopAnimation(); // 0x66e Func
	
Label_1650:
	return 0; // 0x672 Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x728 PushI
	if(var_34_int == 0) goto Label_1987; // 0x729 JumpB
	func_2814(); // 0x72b NEW_2
	var_36_int = 20030; // 0x72d PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x72e Eq
	if(var_37_bool == 0) goto Label_1845; // 0x72f JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x730 PushV
	var_38_object = var_1_object; // 0x731 MovT
	var_39_object = var_0_bool; // 0x732 MovT
	func_2970(); // 0x733 NEW_2
	
Label_1845:
	var_42_int = 33368; // 0x735 PushI
	var_43_bool = var_33_cvector == var_42_int; // 0x736 Eq
	if(var_43_bool == 0) goto Label_1853; // 0x737 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x738 PushV
	var_44_object = var_1_object; // 0x739 MovT
	var_45_object = var_0_bool; // 0x73a MovT
	func_3095(); // 0x73b NEW_2
	
Label_1853:
	var_47_int = 20028; // 0x73d PushI
	var_48_bool = var_32_bool == var_47_int; // 0x73e Eq
	if(var_48_bool == 0) goto Label_1895; // 0x73f JumpB
	var_49_string = ""; // 0x740 PushV
	var_49_string = "Smile"; // 0x741 MovS
	func_1809(var_33_cvector, var_49_string); // 0x742 NEW_2
	var_66_int = 518917; // 0x744 PushI
	SetMessage(var_66_int); // 0x745 TObjFunc
	ClearReplies(); // 0x747 TObjFunc
	var_67_bool = 0; // 0x749 PushV
	var_67_bool = 0; // 0x74a MovB
	var_68_bool = 0; var_69_object = Obj(); // 0x74b PushV
	var_69_object = var_1_object; // 0x74c MovT
	func_3194(var_69_object); // 0x74d NEW_2
	if(var_68_bool == 0) goto Label_1878; // 0x74f JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x750 PushV
	var_77_object = var_1_object; // 0x751 MovT
	func_3206(var_77_object); // 0x752 NEW_2
	if(var_76_bool == 0) goto Label_1878; // 0x754 JumpB
	var_67_bool = 1; // 0x755 MovB
	
Label_1878:
	if(var_67_bool == 0) goto Label_1884; // 0x756 JumpB
	var_82_int = 518919; // 0x757 PushI
	var_83_int = 20031; // 0x758 PushI
	var_84_int = 20030; // 0x759 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x75a TObjFunc
	
Label_1884:
	var_85_int = 531963; // 0x75c PushI
	var_86_int = -1; // 0x75d PushI
	var_87_int = 33368; // 0x75e PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x75f TObjFunc
	var_88_int = 518918; // 0x761 PushI
	var_89_int = -1; // 0x762 PushI
	var_90_int = 20029; // 0x763 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x764 TObjFunc
	return 0; // 0x766 Return
	
Label_1895:
	var_91_int = 20031; // 0x767 PushI
	var_92_bool = var_32_bool == var_91_int; // 0x768 Eq
	if(var_92_bool == 0) goto Label_1913; // 0x769 JumpB
	var_93_string = ""; // 0x76a PushV
	var_93_string = "Neutral"; // 0x76b MovS
	func_1809(var_33_cvector, var_93_string); // 0x76c NEW_2
	var_94_int = 518920; // 0x76e PushI
	SetMessage(var_94_int); // 0x76f TObjFunc
	ClearReplies(); // 0x771 TObjFunc
	var_95_int = 518923; // 0x773 PushI
	var_96_int = 20039; // 0x774 PushI
	var_97_int = 20034; // 0x775 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x776 TObjFunc
	return 0; // 0x778 Return
	
Label_1913:
	var_98_int = 20033; // 0x779 PushI
	var_99_bool = var_32_bool == var_98_int; // 0x77a Eq
	if(var_99_bool == 0) goto Label_1916; // 0x77b JumpB
	
Label_1916:
	var_100_int = 20037; // 0x77c PushI
	var_101_bool = var_32_bool == var_100_int; // 0x77d Eq
	if(var_101_bool == 0) goto Label_1934; // 0x77e JumpB
	var_102_string = ""; // 0x77f PushV
	var_102_string = "What"; // 0x780 MovS
	func_1809(var_33_cvector, var_102_string); // 0x781 NEW_2
	var_103_int = 518926; // 0x783 PushI
	SetMessage(var_103_int); // 0x784 TObjFunc
	ClearReplies(); // 0x786 TObjFunc
	var_104_int = 518927; // 0x788 PushI
	var_105_int = -1; // 0x789 PushI
	var_106_int = 20038; // 0x78a PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x78b TObjFunc
	return 0; // 0x78d Return
	
Label_1934:
	var_107_int = 20039; // 0x78e PushI
	var_108_bool = var_32_bool == var_107_int; // 0x78f Eq
	if(var_108_bool == 0) goto Label_1957; // 0x790 JumpB
	var_109_string = ""; // 0x791 PushV
	var_109_string = "Grin"; // 0x792 MovS
	func_1809(var_33_cvector, var_109_string); // 0x793 NEW_2
	var_110_int = 518928; // 0x795 PushI
	SetMessage(var_110_int); // 0x796 TObjFunc
	ClearReplies(); // 0x798 TObjFunc
	var_111_int = 518930; // 0x79a PushI
	var_112_int = 20042; // 0x79b PushI
	var_113_int = 20041; // 0x79c PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x79d TObjFunc
	var_114_int = 518929; // 0x79f PushI
	var_115_int = -1; // 0x7a0 PushI
	var_116_int = 20040; // 0x7a1 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x7a2 TObjFunc
	return 0; // 0x7a4 Return
	
Label_1957:
	var_117_int = 20042; // 0x7a5 PushI
	var_118_bool = var_32_bool == var_117_int; // 0x7a6 Eq
	if(var_118_bool == 0) goto Label_1975; // 0x7a7 JumpB
	var_119_string = ""; // 0x7a8 PushV
	var_119_string = "Grin"; // 0x7a9 MovS
	func_1809(var_33_cvector, var_119_string); // 0x7aa NEW_2
	var_120_int = 518931; // 0x7ac PushI
	SetMessage(var_120_int); // 0x7ad TObjFunc
	ClearReplies(); // 0x7af TObjFunc
	var_121_int = 518932; // 0x7b1 PushI
	var_122_int = -1; // 0x7b2 PushI
	var_123_int = 20043; // 0x7b3 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x7b4 TObjFunc
	return 0; // 0x7b6 Return
	
Label_1975:
	var_3_object = 1; // 0x7b7 TMovB
	var_124_bool = 0; // 0x7b8 PushV
	func_2968(var_124_bool); // 0x7b9 NEW_2
	if(var_124_bool == 0) goto Label_1983; // 0x7bb JumpB
	lshStopAnimation(); // 0x7bc Func
	goto Label_1985; // 0x7be Jump
	
Label_1985:
	return 0; // 0x7c1 Return
	
Label_1983:
	StopAnimation(); // 0x7bf Func
	
Label_1987:
	return 0; // 0x7c3 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_cvector)
{
	var_34_int = 1; // 0x866 PushI
	if(var_34_int == 0) goto Label_2190; // 0x867 JumpB
	func_2814(); // 0x869 NEW_2
	var_36_int = 42563; // 0x86b PushI
	var_37_bool = var_32_int == var_36_int; // 0x86c Eq
	if(var_37_bool == 0) goto Label_2178; // 0x86d JumpB
	var_38_string = ""; // 0x86e PushV
	var_38_string = "Neutral"; // 0x86f MovS
	func_2127(var_33_cvector, var_38_string); // 0x870 NEW_2
	var_55_int = 540554; // 0x872 PushI
	SetMessage(var_55_int); // 0x873 TObjFunc
	ClearReplies(); // 0x875 TObjFunc
	var_56_int = 540555; // 0x877 PushI
	var_57_int = -1; // 0x878 PushI
	var_58_int = 42564; // 0x879 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x87a TObjFunc
	var_59_int = 540794; // 0x87c PushI
	var_60_int = -1; // 0x87d PushI
	var_61_int = 42843; // 0x87e PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x87f TObjFunc
	return 0; // 0x881 Return
	
Label_2178:
	var_3_object = 1; // 0x882 TMovB
	var_62_bool = 0; // 0x883 PushV
	func_2968(var_62_bool); // 0x884 NEW_2
	if(var_62_bool == 0) goto Label_2186; // 0x886 JumpB
	lshStopAnimation(); // 0x887 Func
	goto Label_2188; // 0x889 Jump
	
Label_2188:
	return 0; // 0x88c Return
	
Label_2186:
	StopAnimation(); // 0x88a Func
	
Label_2190:
	return 0; // 0x88e Return
}


task_13_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_int)
{
	var_33_int = 10; // 0x8d9 PushI
	var_34_bool = var_32_int == var_33_int; // 0x8da Eq
	if(var_34_bool == 0) goto Label_2301; // 0x8db JumpB
	func_2260(); // 0x8dd NEW_2
	var_36_bool = 0; // 0x8df PushV
	var_36_bool = 0; // 0x8e0 MovB
	var_37_bool = 0; // 0x8e1 PushV
	func_2481(var_37_bool); // 0x8e2 NEW_2
	if(var_37_bool == 0) goto Label_2282; // 0x8e4 JumpB
	var_40_bool = 0; // 0x8e5 PushV
	func_2229(var_40_bool); // 0x8e6 NEW_2
	if(var_40_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_36_bool = 1; // 0x8e9 MovB
	
Label_2282:
	if(var_36_bool == 0) goto Label_2295; // 0x8ea JumpB
	var_57_bool = 0; // 0x8eb PushV
	func_2209(var_57_bool); // 0x8ec NEW_2
	if(var_57_bool == 0) goto Label_2294; // 0x8ee JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x8ef PushV
	var_78_object = Obj(); // 0x8f0 PushV
	func_2847(var_78_object); // 0x8f1 NEW_2
	var_77_object = var_78_object; // 0x8f2 Mov
	func_2629(var_77_object); // 0x8f4 NEW_2
	
Label_2294:
	goto Label_2301; // 0x8f6 Jump
	
Label_2301:
	return 0; // 0x8fd Return
	
Label_2295:
	func_2224(var_32_int); // 0x8f8 NEW_2
	func_2251(); // 0x8fb NEW_2
}


task_13_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2442(); // 0x8ff NEW_2
	func_2260(); // 0x902 NEW_2
	lshStopSpeech(); // 0x904 Func
	lshStopAnimation(); // 0x906 Func
	StopAsync(); // 0x908 Func
	Hold(); // 0x90a Func
	return 0; // 0x90c Return
}


task_13_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	StopGroup0(); // 0x90d Func
	func_2260(); // 0x910 NEW_2
	var_33_string = ""; // 0x912 PushV
	var_33_string = "Neutral"; // 0x913 MovS
	func_2768(var_33_string); // 0x914 NEW_2
	func_2251(); // 0x917 NEW_2
	return 0; // 0x919 Return
}


task_13_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_bool)
{
	var_33_bool = var_32_bool; // 0x91b Push
	if(var_33_bool == 0) goto Label_2337; // 0x91c JumpB
	func_2251(); // 0x91e NEW_2
	goto Label_2341; // 0x920 Jump
	
Label_2341:
	return 0; // 0x925 Return
	
Label_2337:
	var_39_string = ""; // 0x921 PushV
	var_39_string = "Neutral"; // 0x922 MovS
	func_2768(var_39_string); // 0x923 NEW_2
}


task_13_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x926 PushV
	IsOverrideActive(var_34_bool); // 0x927 Func
	var_35_bool = var_34_bool == 0; // 0x929 Not
	if(var_35_bool == 0) goto Label_2370; // 0x92a JumpB
	EventDisable(0); // 0x92b EventDisable
	func_2442(); // 0x92d NEW_2
	var_36_bool = 0; var_37_object = Obj(); // 0x92f PushV
	var_37_object = var_32_object; // 0x930 Mov
	func_2472(var_37_object); // 0x931 NEW_2
	EventEnable(0); // 0x933 EventEnable
	var_50_object = Obj(); // 0x934 PushV
	var_50_object = var_32_object; // 0x935 Mov
	func_3461(var_32_object, var_33_bool, var_34_bool, var_50_object); // 0x936 NEW_2
	var_805_string = ""; // 0x938 PushV
	var_805_string = "Neutral"; // 0x939 MovS
	func_2768(var_805_string); // 0x93a NEW_2
	func_2260(); // 0x93d NEW_2
	func_2251(); // 0x940 NEW_2
	
Label_2370:
	return 2; // 0x942 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2195(var_31_cvector); // 0x890 NEW_2
	return 0; // 0x892 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_508_bool = 0; // 0x4 PushV
	func_2968(var_508_bool); // 0x5 NEW_2
	if(var_508_bool == 0) goto Label_15; // 0x7 JumpB
	var_509_string = ""; // 0x8 PushV
	var_509_string = "Neutral"; // 0x9 MovS
	func_2768(var_509_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_510_bool = var_0_bool; // 0x15 PushT
	if(var_510_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_511_string = "all"; // 0x11 PushS
	var_512_string = "idle"; // 0x12 PushS
	PlayAnimation(var_511_string, var_512_string); // 0x13 Func
}


func_3077()
{
	var_145_int = 0; var_146_string = ""; // 0xc06 PushV
	var_146_string = "b2q03_1"; // 0xc07 MovS
	func_2868(var_145_int, var_146_string); // 0xc08 NEW_2
	var_149_int = 0; // 0xc0a PushI
	var_150_bool = var_145_int != var_149_int; // 0xc0b Neq
	if(var_150_bool == 0) goto Label_3088; // 0xc0c JumpB
	func_3294(); // 0xc0e NEW_2
	
Label_3088:
	return 0; // 0xc10 Return
}


func_2821(var_99_string, var_100_int, var_101_int)
{
	var_102_bool = 0; var_103_bool = 0; // 0xb05 PushV
	var_104_bool = 0; var_105_int = 0; var_106_int = 0; // 0xb06 PushV
	var_105_int = var_100_int; // 0xb07 Mov
	var_106_int = var_101_int; // 0xb08 Mov
	func_2863(var_104_bool, var_105_int, var_106_int); // 0xb09 NEW_2
	if(var_104_bool == 0) goto Label_2831; // 0xb0b JumpB
	var_107_int = 0; // 0xb0c PushI
	AddItem(var_103_bool, var_99_string, var_107_int); // 0xb0d Func
	
Label_2831:
	return 2; // 0xb0f Return
}


func_510(var_0_bool, var_112_int, var_113_object)
{
	var_115_object = Obj(); var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_object = Obj(); var_120_bool = 0; var_121_int = 0; var_122_bool = 0; // 0x1fe PushV
	var_0_bool = var_113_object; // 0x1ff TMov
	var_123_bool = 0; var_124_object = Obj(); var_125_float = 0; // 0x200 PushV
	var_124_object = var_113_object; // 0x201 Mov
	var_125_float = 70.0; // 0x202 MovF
	func_2486(var_124_object, var_125_float); // 0x203 NEW_2
	var_169_bool = var_123_bool == 0; // 0x205 Not
	if(var_169_bool == 0) goto Label_521; // 0x206 JumpB
	var_112_int = -2; // 0x207 MovI
	return 8; // 0x208 Return
	
Label_521:
	CreateDialog(var_119_object); // 0x209 Func
	var_170_int = 0; // 0x20b PushV
	func_2962(var_170_int); // 0x20c NEW_2
	SetNPCName(var_170_int); // 0x20e ObjFunc
	var_171_int = 0; // 0x210 PushV
	func_2960(var_171_int); // 0x211 NEW_2
	SetNPCDescription(var_171_int); // 0x213 ObjFunc
	var_172_string = ""; // 0x215 PushV
	func_2964(var_172_string); // 0x216 NEW_2
	SetPhoto(var_172_string); // 0x218 ObjFunc
	var_173_string = ""; // 0x21a PushV
	func_2966(var_173_string); // 0x21b NEW_2
	SetPhoto2(var_173_string); // 0x21d ObjFunc
	var_174_int = 0; // 0x21f PushV
	func_3444(var_174_int); // 0x220 NEW_2
	SetPlayerName(var_174_int); // 0x222 ObjFunc
	var_121_int = -1; // 0x224 MovI
	IsOverrideActive(var_120_bool); // 0x225 Func
	var_182_bool = var_120_bool; // 0x227 Push
	if(var_182_bool == 0) goto Label_555; // 0x228 JumpB
	var_112_int = -2; // 0x229 MovI
	return 8; // 0x22a Return
	
Label_555:
	DoDialog(var_119_object); // 0x22b Func
	var_183_bool = 0; var_184_object = Obj(); // 0x22d PushV
	var_185_object = Obj(); // 0x22e PushV
	func_2847(var_185_object); // 0x22f NEW_2
	var_184_object = var_185_object; // 0x230 Mov
	func_2571(var_183_bool, var_184_object); // 0x232 NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0x234 PushV
	var_273_object = var_113_object; // 0x235 Mov
	var_274_object = var_119_object; // 0x236 Mov
	TaskCall(6); // 0x237 TaskCall
	func_591(var_275_object, var_276_object, var_277_string, var_278_bool, var_273_object, var_274_object); // 0x238 NEW_2
	TaskReturn(); // 0x239 TaskReturn
	IsDialogEnd(var_122_bool); // 0x23b ObjFunc
	
Label_573:
	var_319_bool = var_122_bool == 0; // 0x23d Not
	if(var_319_bool == 0) goto Label_580; // 0x23e JumpB
	sync(); // 0x23f Func
	IsDialogEnd(var_122_bool); // 0x241 ObjFunc
	goto Label_573; // 0x243 Jump
	
Label_580:
	var_320_object = Obj(); // 0x244 PushV
	var_320_object = var_113_object; // 0x245 Mov
	func_2554(); // 0x246 NEW_2
	StopDialog(var_119_object); // 0x248 Func
	GetReturnValue(var_121_int); // 0x24a ObjFunc
	var_112_int = var_121_int; // 0x24c Mov
	return 8; // 0x24d Return
}


func_2571(var_183_bool, var_184_object)
{
	var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_int = 0; // 0xa0b PushV
	var_192_string = "voice_common"; // 0xa0c PushS
	GetVariable(var_192_string, var_190_int); // 0xa0d Func
	var_193_int = var_190_int; // 0xa0f Push
	if(var_193_int == 0) goto Label_2609; // 0xa10 JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0xa11 PushV
	var_195_object = var_184_object; // 0xa12 Mov
	func_2629(var_195_object); // 0xa13 NEW_2
	var_224_bool = var_194_bool == 0; // 0xa15 Not
	if(var_224_bool == 0) goto Label_2591; // 0xa16 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xa17 PushV
	var_226_object = var_184_object; // 0xa18 Mov
	func_2666(var_226_object); // 0xa19 NEW_2
	var_255_bool = var_225_bool == 0; // 0xa1b Not
	if(var_255_bool == 0) goto Label_2591; // 0xa1c JumpB
	var_183_bool = 0; // 0xa1d MovB
	return 4; // 0xa1e Return
	
Label_2591:
	var_256_int = 2; // 0xa1f PushI
	irand(var_191_int, var_256_int); // 0xa20 Func
	var_257_int = var_191_int; // 0xa22 Push
	if(var_257_int == 0) goto Label_2604; // 0xa23 JumpB
	var_258_string = "voice_common"; // 0xa24 PushS
	var_259_int = 1; // 0xa25 PushI
	var_260_int = var_190_int + var_259_int; // 0xa26 Add
	var_261_int = 3; // 0xa27 PushI
	var_262_int = var_260_int / var_261_int; // 0xa28 Mod
	SetVariable(var_258_string, var_262_int); // 0xa29 Func
	goto Label_2608; // 0xa2b Jump
	
Label_2608:
	goto Label_2627; // 0xa30 Jump
	
Label_2627:
	var_183_bool = 1; // 0xa43 MovB
	return 4; // 0xa44 Return
	
Label_2604:
	var_263_string = "voice_common"; // 0xa2c PushS
	var_264_int = 0; // 0xa2d PushI
	SetVariable(var_263_string, var_264_int); // 0xa2e Func
	
Label_2609:
	var_265_bool = 0; var_266_object = Obj(); // 0xa31 PushV
	var_266_object = var_184_object; // 0xa32 Mov
	func_2666(var_266_object); // 0xa33 NEW_2
	var_267_bool = var_265_bool == 0; // 0xa35 Not
	if(var_267_bool == 0) goto Label_2623; // 0xa36 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0xa37 PushV
	var_269_object = var_184_object; // 0xa38 Mov
	func_2629(var_269_object); // 0xa39 NEW_2
	var_270_bool = var_268_bool == 0; // 0xa3b Not
	if(var_270_bool == 0) goto Label_2623; // 0xa3c JumpB
	var_183_bool = 0; // 0xa3d MovB
	return 4; // 0xa3e Return
	
Label_2623:
	var_271_string = "voice_common"; // 0xa3f PushS
	var_272_int = 1; // 0xa40 PushI
	SetVariable(var_271_string, var_272_int); // 0xa41 Func
}


func_2832(var_69_string, var_70_int, var_71_int, var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; // 0xb10 PushV
	var_77_bool = 0; var_78_int = 0; var_79_int = 0; // 0xb11 PushV
	var_78_int = var_70_int; // 0xb12 Mov
	var_79_int = var_71_int; // 0xb13 Mov
	func_2863(var_77_bool, var_78_int, var_79_int); // 0xb14 NEW_2
	if(var_77_bool == 0) goto Label_2846; // 0xb16 JumpB
	irand(var_75_int, var_72_int); // 0xb17 Func
	var_82_int = 0; // 0xb19 PushI
	var_83_int = 1; // 0xb1a PushI
	var_84_int = var_75_int + var_83_int; // 0xb1b Add
	AddItem(var_76_bool, var_69_string, var_82_int, var_84_int); // 0xb1c Func
	
Label_2846:
	return 4; // 0xb1e Return
}


func_3089()
{
	var_189_string = "oob2Andrei3"; // 0xc12 PushS
	var_190_int = 1; // 0xc13 PushI
	SetVariable(var_189_string, var_190_int); // 0xc14 Func
	return 0; // 0xc16 Return
}


func_1042(var_2_object, var_380_string)
{
	var_381_bool = 0; // 0x413 PushV
	func_2968(var_381_bool); // 0x414 NEW_2
	var_382_bool = var_381_bool == 0; // 0x416 Not
	if(var_382_bool == 0) goto Label_1049; // 0x417 JumpB
	return 0; // 0x418 Return
	
Label_1049:
	var_383_bool = var_380_string == var_2_object; // 0x419 Eq
	if(var_383_bool == 0) goto Label_1052; // 0x41a JumpB
	return 0; // 0x41b Return
	
Label_1052:
	var_384_string = ""; var_385_bool = 0; // 0x41c PushV
	var_384_string = var_380_string; // 0x41d Mov
	var_386_string = ""; // 0x41e PushS
	var_387_bool = var_380_string == var_386_string; // 0x41f Eq
	if(var_387_bool == 0) goto Label_1059; // 0x420 JumpB
	var_385_bool = 0; // 0x421 MovB
	goto Label_1060; // 0x422 Jump
	
Label_1060:
	func_2784(var_384_string, var_385_bool); // 0x424 NEW_2
	var_2_object = var_380_string; // 0x426 TMov
	return 0; // 0x427 Return
	
Label_1059:
	var_385_bool = 1; // 0x423 MovB
}


func_1809(var_2_object, var_548_string)
{
	var_549_bool = 0; // 0x712 PushV
	func_2968(var_549_bool); // 0x713 NEW_2
	var_550_bool = var_549_bool == 0; // 0x715 Not
	if(var_550_bool == 0) goto Label_1816; // 0x716 JumpB
	return 0; // 0x717 Return
	
Label_1816:
	var_551_bool = var_548_string == var_2_object; // 0x718 Eq
	if(var_551_bool == 0) goto Label_1819; // 0x719 JumpB
	return 0; // 0x71a Return
	
Label_1819:
	var_552_string = ""; var_553_bool = 0; // 0x71b PushV
	var_552_string = var_548_string; // 0x71c Mov
	var_554_string = ""; // 0x71d PushS
	var_555_bool = var_548_string == var_554_string; // 0x71e Eq
	if(var_555_bool == 0) goto Label_1826; // 0x71f JumpB
	var_553_bool = 0; // 0x720 MovB
	goto Label_1827; // 0x721 Jump
	
Label_1827:
	func_2784(var_552_string, var_553_bool); // 0x723 NEW_2
	var_2_object = var_548_string; // 0x725 TMov
	return 0; // 0x726 Return
	
Label_1826:
	var_553_bool = 1; // 0x722 MovB
}


func_3348(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); // 0xd14 PushV
	GetMainOutdoorScene(var_94_object); // 0xd15 Func
	var_96_bool = var_94_object == 0; // 0xd17 NullEq
	if(var_96_bool == 0) goto Label_3359; // 0xd18 JumpB
	var_97_string = "Can't find main outdoor scene"; // 0xd19 PushS
	Trace(var_97_string); // 0xd1a Func
	var_95_object = 0; // 0xd1c SetNull
	var_91_object = var_95_object; // 0xd1d Mov
	return 4; // 0xd1e Return
	
Label_3359:
	GetMap(var_95_object); // 0xd1f ObjFunc
	var_91_object = var_95_object; // 0xd21 Mov
	return 4; // 0xd22 Return
}


func_2069(var_0_bool, var_1_object, var_2_object, var_3_object, var_773_object, var_774_object)
{
	var_0_bool = var_774_object; // 0x816 TMov
	var_1_object = var_773_object; // 0x817 TMov
	var_3_object = 0; // 0x818 TMovB
	var_779_int = 1; // 0x819 PushI
	if(var_779_int == 0) goto Label_2097; // 0x81a JumpB
	var_780_string = ""; // 0x81b PushV
	var_780_string = "Neutral"; // 0x81c MovS
	func_2127(var_774_object, var_780_string); // 0x81d NEW_2
	var_788_int = 540554; // 0x81f PushI
	SetMessage(var_788_int); // 0x820 TObjFunc
	ClearReplies(); // 0x822 TObjFunc
	var_789_int = 540555; // 0x824 PushI
	var_790_int = -1; // 0x825 PushI
	var_791_int = 42564; // 0x826 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x827 TObjFunc
	var_792_int = 540794; // 0x829 PushI
	var_793_int = -1; // 0x82a PushI
	var_794_int = 42843; // 0x82b PushI
	AddReply(var_792_int, var_793_int, var_794_int); // 0x82c TObjFunc
	goto Label_2097; // 0x82e Jump
	
Label_2097:
	var_795_bool = 0; // 0x831 PushV
	func_2968(var_795_bool); // 0x832 NEW_2
	if(var_795_bool == 0) goto Label_2112; // 0x834 JumpB
	
Label_2101:
	lshWaitForAnimEnd(); // 0x835 Func
	var_796_object = var_3_object; // 0x837 PushT
	if(var_796_object == 0) goto Label_2106; // 0x838 JumpB
	goto Label_2111; // 0x839 Jump
	
Label_2111:
	goto Label_2126; // 0x83f Jump
	
Label_2126:
	return 0; // 0x84e Return
	
Label_2106:
	var_797_string = ""; // 0x83a PushV
	var_797_string = var_2_object; // 0x83b MovT
	func_2768(var_797_string); // 0x83c NEW_2
	goto Label_2101; // 0x83e Jump
	
Label_2112:
	var_798_string = "all"; // 0x840 PushS
	var_799_string = "idle"; // 0x841 PushS
	PlayAnimation(var_798_string, var_799_string); // 0x842 Func
	
Label_2116:
	WaitForAnimEnd(); // 0x844 Func
	var_800_object = var_3_object; // 0x846 PushT
	if(var_800_object == 0) goto Label_2121; // 0x847 JumpB
	goto Label_2126; // 0x848 Jump
	
Label_2121:
	var_801_string = "all"; // 0x849 PushS
	var_802_string = "idle"; // 0x84a PushS
	PlayAnimation(var_801_string, var_802_string); // 0x84b Func
	goto Label_2116; // 0x84d Jump
}


func_3095()
{
	var_46_int = 1000; // 0xc18 PushI
	SetReturnValue(var_46_int); // 0xc19 ObjFunc
	return 0; // 0xc1b Return
}


func_3100(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0xc1d PushV
	var_367_string = "oob2Andrei2"; // 0xc1e MovS
	func_2868(var_366_int, var_367_string); // 0xc1f NEW_2
	var_370_int = 0; // 0xc21 PushI
	var_371_bool = var_366_int == var_370_int; // 0xc22 Eq
	if(var_371_bool == 0) goto Label_3110; // 0xc23 JumpB
	var_364_bool = 1; // 0xc24 MovB
	return 0; // 0xc25 Return
	
Label_3110:
	var_364_bool = 0; // 0xc26 MovB
	return 0; // 0xc27 Return
}


func_2847(var_185_object)
{
	var_186_object = Obj(); var_187_object = Obj(); // 0xb1f PushV
	self(var_187_object); // 0xb20 Func
	var_185_object = var_187_object; // 0xb22 Mov
	return 2; // 0xb23 Return
}


func_800(var_0_bool, var_333_int, var_334_object)
{
	var_336_object = Obj(); var_337_bool = 0; var_338_int = 0; var_339_bool = 0; var_340_object = Obj(); var_341_bool = 0; var_342_int = 0; var_343_bool = 0; // 0x320 PushV
	var_0_bool = var_334_object; // 0x321 TMov
	var_344_bool = 0; var_345_object = Obj(); var_346_float = 0; // 0x322 PushV
	var_345_object = var_334_object; // 0x323 Mov
	var_346_float = 70.0; // 0x324 MovF
	func_2486(var_345_object, var_346_float); // 0x325 NEW_2
	var_347_bool = var_344_bool == 0; // 0x327 Not
	if(var_347_bool == 0) goto Label_811; // 0x328 JumpB
	var_333_int = -2; // 0x329 MovI
	return 8; // 0x32a Return
	
Label_811:
	CreateDialog(var_340_object); // 0x32b Func
	var_348_int = 0; // 0x32d PushV
	func_2962(var_348_int); // 0x32e NEW_2
	SetNPCName(var_348_int); // 0x330 ObjFunc
	var_349_int = 0; // 0x332 PushV
	func_2960(var_349_int); // 0x333 NEW_2
	SetNPCDescription(var_349_int); // 0x335 ObjFunc
	var_350_string = ""; // 0x337 PushV
	func_2964(var_350_string); // 0x338 NEW_2
	SetPhoto(var_350_string); // 0x33a ObjFunc
	var_351_string = ""; // 0x33c PushV
	func_2966(var_351_string); // 0x33d NEW_2
	SetPhoto2(var_351_string); // 0x33f ObjFunc
	var_352_int = 0; // 0x341 PushV
	func_3444(var_352_int); // 0x342 NEW_2
	SetPlayerName(var_352_int); // 0x344 ObjFunc
	var_342_int = -1; // 0x346 MovI
	IsOverrideActive(var_341_bool); // 0x347 Func
	var_353_bool = var_341_bool; // 0x349 Push
	if(var_353_bool == 0) goto Label_845; // 0x34a JumpB
	var_333_int = -2; // 0x34b MovI
	return 8; // 0x34c Return
	
Label_845:
	DoDialog(var_340_object); // 0x34d Func
	var_354_bool = 0; var_355_object = Obj(); // 0x34f PushV
	var_356_object = Obj(); // 0x350 PushV
	func_2847(var_356_object); // 0x351 NEW_2
	var_355_object = var_356_object; // 0x352 Mov
	func_2571(var_354_bool, var_355_object); // 0x354 NEW_2
	var_357_object = Obj(); var_358_object = Obj(); // 0x356 PushV
	var_357_object = var_334_object; // 0x357 Mov
	var_358_object = var_340_object; // 0x358 Mov
	TaskCall(8); // 0x359 TaskCall
	func_881(var_359_object, var_360_object, var_361_string, var_362_bool, var_357_object, var_358_object); // 0x35a NEW_2
	TaskReturn(); // 0x35b TaskReturn
	IsDialogEnd(var_343_bool); // 0x35d ObjFunc
	
Label_863:
	var_471_bool = var_343_bool == 0; // 0x35f Not
	if(var_471_bool == 0) goto Label_870; // 0x360 JumpB
	sync(); // 0x361 Func
	IsDialogEnd(var_343_bool); // 0x363 ObjFunc
	goto Label_863; // 0x365 Jump
	
Label_870:
	var_472_object = Obj(); // 0x366 PushV
	var_472_object = var_334_object; // 0x367 Mov
	func_2554(); // 0x368 NEW_2
	StopDialog(var_340_object); // 0x36a Func
	GetReturnValue(var_342_int); // 0x36c ObjFunc
	var_333_int = var_342_int; // 0x36e Mov
	return 8; // 0x36f Return
}


func_2853(var_150_cvector, var_151_cvector)
{
	var_153_float = 0; var_154_float = 0; // 0xb25 PushV
	var_155_int = var_151_cvector | var_151_cvector; // 0xb26 Or
	var_154_float = sqrt(var_155_int); // 0xb27 Sqrt2
	var_156_float = 0.0; // 0xb28 PushF
	var_157_bool = var_154_float < var_156_float; // 0xb29 LT
	if(var_157_bool == 0) goto Label_2861; // 0xb2a JumpB
	var_150_cvector = CVector(0.0, 0.0, 0.0); // 0xb2b MovV
	return 2; // 0xb2c Return
	
Label_2861:
	var_150_cvector = var_151_cvector / var_151_cvector; // 0xb2d Div2
	return 2; // 0xb2e Return
}


func_3365(var_161_object, var_162_string, var_163_float)
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_object = Obj(); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_bool = 0; // 0xd25 PushV
	GetMainOutdoorScene(var_171_object); // 0xd26 Func
	var_173_bool = var_171_object == 0; // 0xd28 NullEq
	if(var_173_bool == 0) goto Label_3374; // 0xd29 JumpB
	var_174_string = "Can't find main outdoor scene"; // 0xd2a PushS
	Trace(var_174_string); // 0xd2b Func
	return 8; // 0xd2d Return
	
Label_3374:
	GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector); // 0xd2e ObjFunc
	var_175_bool = var_172_bool == 0; // 0xd30 Not
	if(var_175_bool == 0) goto Label_3384; // 0xd31 JumpB
	var_176_string = "Warning: outdoor scene locator "; // 0xd32 PushS
	var_177_int = var_176_string + var_162_string; // 0xd33 Add
	var_178_string = " doesnt exist"; // 0xd34 PushS
	var_179_int = var_177_int + var_178_string; // 0xd35 Add
	Trace(var_179_int); // 0xd36 Func
	
Label_3384:
	GetMap(var_161_object); // 0xd38 ObjFunc
	var_180_bool = var_161_object == 0; // 0xd3a NullEq
	if(var_180_bool == 0) goto Label_3392; // 0xd3b JumpB
	var_181_string = "Can't find map"; // 0xd3c PushS
	Trace(var_181_string); // 0xd3d Func
	return 8; // 0xd3f Return
	
Label_3392:
	var_182_float = GetByIndex(var_169_cvector, 0); // 0xd40 PushE
	var_183_float = GetByIndex(var_169_cvector, 2); // 0xd41 PushE
	SetMapParams(var_182_float, var_183_float, var_163_float); // 0xd42 ObjFunc
	return 8; // 0xd44 Return
}


func_3112(var_425_bool)
{
	var_427_int = 0; var_428_string = ""; // 0xc29 PushV
	var_428_string = "b2q03"; // 0xc2a MovS
	func_2868(var_427_int, var_428_string); // 0xc2b NEW_2
	var_429_int = 1; // 0xc2d PushI
	var_430_bool = var_427_int == var_429_int; // 0xc2e Eq
	if(var_430_bool == 0) goto Label_3122; // 0xc2f JumpB
	var_425_bool = 1; // 0xc30 MovB
	return 0; // 0xc31 Return
	
Label_3122:
	var_425_bool = 0; // 0xc32 MovB
	return 0; // 0xc33 Return
}


func_40(var_0_bool, var_620_int, var_621_object)
{
	var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0; var_627_object = Obj(); var_628_bool = 0; var_629_int = 0; var_630_bool = 0; // 0x28 PushV
	var_0_bool = var_621_object; // 0x29 TMov
	var_631_bool = 0; var_632_object = Obj(); var_633_float = 0; // 0x2a PushV
	var_632_object = var_621_object; // 0x2b Mov
	var_633_float = 70.0; // 0x2c MovF
	func_2486(var_632_object, var_633_float); // 0x2d NEW_2
	var_634_bool = var_631_bool == 0; // 0x2f Not
	if(var_634_bool == 0) goto Label_51; // 0x30 JumpB
	var_620_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_627_object); // 0x33 Func
	var_635_int = 0; // 0x35 PushV
	func_2962(var_635_int); // 0x36 NEW_2
	SetNPCName(var_635_int); // 0x38 ObjFunc
	var_636_int = 0; // 0x3a PushV
	func_2960(var_636_int); // 0x3b NEW_2
	SetNPCDescription(var_636_int); // 0x3d ObjFunc
	var_637_string = ""; // 0x3f PushV
	func_2964(var_637_string); // 0x40 NEW_2
	SetPhoto(var_637_string); // 0x42 ObjFunc
	var_638_string = ""; // 0x44 PushV
	func_2966(var_638_string); // 0x45 NEW_2
	SetPhoto2(var_638_string); // 0x47 ObjFunc
	var_639_int = 0; // 0x49 PushV
	func_3444(var_639_int); // 0x4a NEW_2
	SetPlayerName(var_639_int); // 0x4c ObjFunc
	var_629_int = -1; // 0x4e MovI
	IsOverrideActive(var_628_bool); // 0x4f Func
	var_640_bool = var_628_bool; // 0x51 Push
	if(var_640_bool == 0) goto Label_85; // 0x52 JumpB
	var_620_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_627_object); // 0x55 Func
	var_641_bool = 0; var_642_object = Obj(); // 0x57 PushV
	var_643_object = Obj(); // 0x58 PushV
	func_2847(var_643_object); // 0x59 NEW_2
	var_642_object = var_643_object; // 0x5a Mov
	func_2571(var_641_bool, var_642_object); // 0x5c NEW_2
	var_644_object = Obj(); var_645_object = Obj(); // 0x5e PushV
	var_644_object = var_621_object; // 0x5f Mov
	var_645_object = var_627_object; // 0x60 Mov
	TaskCall(2); // 0x61 TaskCall
	func_121(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object); // 0x62 NEW_2
	TaskReturn(); // 0x63 TaskReturn
	IsDialogEnd(var_630_bool); // 0x65 ObjFunc
	
Label_103:
	var_674_bool = var_630_bool == 0; // 0x67 Not
	if(var_674_bool == 0) goto Label_110; // 0x68 JumpB
	sync(); // 0x69 Func
	IsDialogEnd(var_630_bool); // 0x6b ObjFunc
	goto Label_103; // 0x6d Jump
	
Label_110:
	var_675_object = Obj(); // 0x6e PushV
	var_675_object = var_621_object; // 0x6f Mov
	func_2554(); // 0x70 NEW_2
	StopDialog(var_627_object); // 0x72 Func
	GetReturnValue(var_629_int); // 0x74 ObjFunc
	var_620_int = var_629_int; // 0x76 Mov
	return 8; // 0x77 Return
}


func_2863(var_77_bool, var_78_int, var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0xb2f PushV
	irand(var_81_int, var_79_int); // 0xb30 Func
	var_77_bool = var_81_int < var_78_int; // 0xb32 LT2
	return 2; // 0xb33 Return
}


func_3124(var_405_bool)
{
	var_407_int = 0; var_408_string = ""; // 0xc35 PushV
	var_408_string = "b2q03"; // 0xc36 MovS
	func_2868(var_407_int, var_408_string); // 0xc37 NEW_2
	var_409_int = 0; // 0xc39 PushI
	var_410_bool = var_407_int == var_409_int; // 0xc3a Eq
	if(var_410_bool == 0) goto Label_3134; // 0xc3b JumpB
	var_405_bool = 1; // 0xc3c MovB
	return 0; // 0xc3d Return
	
Label_3134:
	var_405_bool = 0; // 0xc3e MovB
	return 0; // 0xc3f Return
}


func_2868(var_366_int, var_367_string)
{
	var_368_int = 0; var_369_int = 0; // 0xb34 PushV
	GetVariable(var_367_string, var_369_int); // 0xb35 Func
	var_366_int = var_369_int; // 0xb37 Mov
	return 2; // 0xb38 Return
}


func_2873(var_134_int, var_135_int)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0xb39 PushV
	CreateIntVector(var_137_object); // 0xb3a Func
	add(var_134_int); // 0xb3c ObjFunc
	add(var_135_int); // 0xb3e ObjFunc
	var_138_int = 3; // 0xb40 PushI
	SendWorldWndMessage(var_138_int, var_137_object); // 0xb41 Func
	return 2; // 0xb43 Return
}


func_3136(var_416_bool, var_417_object)
{
	var_418_bool = 0; var_419_object = Obj(); // 0xc41 PushV
	var_419_object = var_417_object; // 0xc42 Mov
	func_3218(var_419_object); // 0xc43 NEW_2
	if(var_418_bool == 0) goto Label_3144; // 0xc45 JumpB
	var_416_bool = 1; // 0xc46 MovB
	return 0; // 0xc47 Return
	
Label_3144:
	var_416_bool = 0; // 0xc48 MovB
	return 0; // 0xc49 Return
}


func_2371()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x943 PushV
	WaitForAnimEnd(); // 0x944 Func
	var_48_bool = 0; // 0x946 PushV
	func_2481(var_48_bool); // 0x947 NEW_2
	var_49_bool = var_48_bool == 0; // 0x949 Not
	if(var_49_bool == 0) goto Label_2380; // 0x94a JumpB
	return 12; // 0x94b Return
	
Label_2380:
	var_50_int = 0; // 0x94c PushV
	func_2943(var_50_int); // 0x94d NEW_2
	var_42_int = var_50_int; // 0x94e Mov
	var_43_int = 0; // 0x950 MovI
	
Label_2385:
	var_63_bool = 0; // 0x951 PushV
	var_63_bool = 0; // 0x952 MovB
	var_64_int = 5; // 0x953 PushI
	var_65_bool = var_43_int < var_64_int; // 0x954 LT
	if(var_65_bool == 0) goto Label_2395; // 0x955 JumpB
	var_66_bool = 0; // 0x956 PushV
	func_2481(var_66_bool); // 0x957 NEW_2
	if(var_66_bool == 0) goto Label_2395; // 0x959 JumpB
	var_63_bool = 1; // 0x95a MovB
	
Label_2395:
	if(var_63_bool == 0) goto Label_2437; // 0x95b JumpB
	var_67_bool = var_42_int == 0; // 0x95c Not
	if(var_67_bool == 0) goto Label_2405; // 0x95d JumpB
	var_68_int = 3; // 0x95e PushI
	Sleep(var_68_int, var_44_bool); // 0x95f Func
	var_69_bool = var_44_bool == 0; // 0x961 Not
	if(var_69_bool == 0) goto Label_2404; // 0x962 JumpB
	goto Label_2437; // 0x963 Jump
	
Label_2437:
	ResetAAS(); // 0x985 Func
	return 12; // 0x987 Return
	
Label_2404:
	goto Label_2426; // 0x964 Jump
	
Label_2426:
	var_70_bool = 0; // 0x97a PushV
	func_2440(var_70_bool); // 0x97b NEW_2
	var_71_bool = var_70_bool == 0; // 0x97d Not
	if(var_71_bool == 0) goto Label_2432; // 0x97e JumpB
	goto Label_2437; // 0x97f Jump
	
Label_2432:
	ResetAAS(); // 0x980 Func
	var_72_int = 1; // 0x982 PushI
	var_43_int = var_43_int + var_72_int; // 0x983 Add2
	goto Label_2385; // 0x984 Jump
	
Label_2405:
	irand(var_45_int, var_42_int); // 0x965 Func
	var_73_int = 5; // 0x967 PushI
	irand(var_46_int, var_73_int); // 0x968 Func
	var_74_int = 0; // 0x96a PushI
	var_75_bool = var_46_int != var_74_int; // 0x96b Neq
	if(var_75_bool == 0) goto Label_2414; // 0x96c JumpB
	var_45_int = 0; // 0x96d MovI
	
Label_2414:
	var_76_string = "all"; // 0x96e PushS
	var_77_string = ""; var_78_int = 0; // 0x96f PushV
	var_78_int = var_45_int; // 0x970 Mov
	func_2936(var_77_string, var_78_int); // 0x971 NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x973 Func
	WaitForAnimEnd(var_47_bool); // 0x975 Func
	var_79_bool = var_47_bool == 0; // 0x977 Not
	if(var_79_bool == 0) goto Label_2426; // 0x978 JumpB
	goto Label_2437; // 0x979 Jump
}


func_2629(var_194_bool)
{
	var_196_string = ""; var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_string = ""; var_201_string = ""; var_202_int = 0; var_203_bool = 0; var_204_int = 0; var_205_string = ""; // 0xa45 PushV
	var_201_string = "c"; // 0xa46 MovS
	var_202_int = 0; // 0xa47 MovI
	
Label_2632:
	var_206_int = 1; // 0xa48 PushI
	if(var_206_int == 0) goto Label_2645; // 0xa49 JumpB
	var_207_int = 1; // 0xa4a PushI
	var_208_int = var_202_int + var_207_int; // 0xa4b Add
	var_209_int = var_201_string + var_208_int; // 0xa4c Add
	HasProperty(var_209_int, var_203_bool); // 0xa4d ObjFunc
	var_210_bool = var_203_bool == 0; // 0xa4f Not
	if(var_210_bool == 0) goto Label_2642; // 0xa50 JumpB
	goto Label_2645; // 0xa51 Jump
	
Label_2645:
	var_211_bool = var_202_int == 0; // 0xa55 Not
	if(var_211_bool == 0) goto Label_2649; // 0xa56 JumpB
	var_194_bool = 0; // 0xa57 MovB
	return 10; // 0xa58 Return
	
Label_2649:
	var_204_int = 0; // 0xa59 MovI
	var_212_int = 1; // 0xa5a PushI
	var_213_bool = var_202_int > var_212_int; // 0xa5b GT
	if(var_213_bool == 0) goto Label_2655; // 0xa5c JumpB
	irand(var_204_int, var_202_int); // 0xa5d Func
	
Label_2655:
	var_214_int = 1; // 0xa5f PushI
	var_215_int = var_204_int + var_214_int; // 0xa60 Add
	var_216_int = var_201_string + var_215_int; // 0xa61 Add
	GetProperty(var_216_int, var_205_string); // 0xa62 ObjFunc
	var_217_bool = 0; var_218_string = ""; // 0xa64 PushV
	var_218_string = var_205_string; // 0xa65 Mov
	func_2799(var_217_bool, var_218_string); // 0xa66 NEW_2
	var_194_bool = var_217_bool; // 0xa67 Mov
	return 10; // 0xa69 Return
	
Label_2642:
	var_223_int = 1; // 0xa52 PushI
	var_202_int = var_202_int + var_223_int; // 0xa53 Add2
	goto Label_2632; // 0xa54 Jump
}


func_2885(var_121_object, var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0xb45 PushV
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0; // 0xb46 PushV
	var_125_object = var_121_object; // 0xb47 Mov
	var_126_string = "money"; // 0xb48 MovS
	var_127_int = var_122_int; // 0xb49 Mov
	func_2455(var_126_string, var_127_int); // 0xb4a NEW_2
	var_131_int = 0; // 0xb4c PushI
	var_132_bool = var_122_int > var_131_int; // 0xb4d GT
	if(var_132_bool == 0) goto Label_2903; // 0xb4e JumpB
	var_133_string = "Money"; // 0xb4f PushS
	GetInvItemByName(var_124_int, var_133_string); // 0xb50 Func
	var_134_int = 0; var_135_int = 0; // 0xb52 PushV
	var_134_int = var_124_int; // 0xb53 Mov
	var_135_int = var_122_int; // 0xb54 Mov
	func_2873(var_134_int, var_135_int); // 0xb55 NEW_2
	
Label_2903:
	return 2; // 0xb57 Return
}


func_3398()
{
	var_65_int = 0; var_66_int = 0; // 0xd46 PushV
	var_67_int = 0; // 0xd47 PushI
	ClearSubContainer(var_67_int); // 0xd48 Func
	var_68_int = 0; // 0xd4a PushV
	func_2921(var_68_int); // 0xd4b NEW_2
	var_66_int = var_68_int; // 0xd4c Mov
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0xd4e PushV
	var_69_string = "samopal_ammo"; // 0xd4f MovS
	var_70_int = 1; // 0xd50 MovI
	var_71_int = 1; // 0xd51 MovI
	var_72_int = 6; // 0xd52 MovI
	func_2832(var_69_string, var_70_int, var_71_int, var_72_int); // 0xd53 NEW_2
	var_85_string = ""; var_86_int = 0; var_87_int = 0; var_88_int = 0; // 0xd55 PushV
	var_85_string = "rifle_ammo"; // 0xd56 MovS
	var_86_int = 1; // 0xd57 MovI
	var_87_int = 1; // 0xd58 MovI
	var_88_int = 8; // 0xd59 MovI
	func_2832(var_85_string, var_86_int, var_87_int, var_88_int); // 0xd5a NEW_2
	var_89_string = ""; var_90_int = 0; var_91_int = 0; var_92_int = 0; // 0xd5c PushV
	var_89_string = "revolver_ammo"; // 0xd5d MovS
	var_90_int = 1; // 0xd5e MovI
	var_91_int = 1; // 0xd5f MovI
	var_92_int = 8; // 0xd60 MovI
	func_2832(var_89_string, var_90_int, var_91_int, var_92_int); // 0xd61 NEW_2
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0xd63 PushV
	var_93_string = "tvirin"; // 0xd64 MovS
	var_94_int = 1; // 0xd65 MovI
	var_95_int = 1; // 0xd66 MovI
	var_96_int = 3; // 0xd67 MovI
	func_2832(var_93_string, var_94_int, var_95_int, var_96_int); // 0xd68 NEW_2
	var_97_int = 5; // 0xd6a PushI
	var_98_bool = var_66_int >= var_97_int; // 0xd6b GE
	if(var_98_bool == 0) goto Label_3443; // 0xd6c JumpB
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0xd6d PushV
	var_99_string = "Samopal"; // 0xd6e MovS
	var_100_int = 1; // 0xd6f MovI
	var_101_int = 1; // 0xd70 MovI
	func_2821(var_99_string, var_100_int, var_101_int); // 0xd71 NEW_2
	
Label_3443:
	return 2; // 0xd73 Return
}


func_3146(var_449_bool)
{
	var_451_int = 0; var_452_string = ""; // 0xc4b PushV
	var_452_string = "b2q03"; // 0xc4c MovS
	func_2868(var_451_int, var_452_string); // 0xc4d NEW_2
	var_453_int = 1000; // 0xc4f PushI
	var_454_bool = var_451_int == var_453_int; // 0xc50 Eq
	if(var_454_bool == 0) goto Label_3156; // 0xc51 JumpB
	var_449_bool = 1; // 0xc52 MovB
	return 0; // 0xc53 Return
	
Label_3156:
	var_449_bool = 0; // 0xc54 MovB
	return 0; // 0xc55 Return
}


func_332(var_0_bool, var_1_object, var_2_object, var_3_object, var_712_object, var_713_object)
{
	var_0_bool = var_713_object; // 0x14d TMov
	var_1_object = var_712_object; // 0x14e TMov
	var_3_object = 0; // 0x14f TMovB
	var_718_int = 1; // 0x150 PushI
	if(var_718_int == 0) goto Label_365; // 0x151 JumpB
	var_719_string = ""; // 0x152 PushV
	var_719_string = "Neutral"; // 0x153 MovS
	func_395(var_713_object, var_719_string); // 0x154 NEW_2
	var_727_int = 535231; // 0x156 PushI
	SetMessage(var_727_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_728_int = 535232; // 0x15b PushI
	var_729_int = 36953; // 0x15c PushI
	var_730_int = 36907; // 0x15d PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0x15e TObjFunc
	var_731_int = 535233; // 0x160 PushI
	var_732_int = -1; // 0x161 PushI
	var_733_int = 36908; // 0x162 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x163 TObjFunc
	var_734_int = 535280; // 0x165 PushI
	var_735_int = -1; // 0x166 PushI
	var_736_int = 36956; // 0x167 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x168 TObjFunc
	goto Label_365; // 0x16a Jump
	
Label_365:
	var_737_bool = 0; // 0x16d PushV
	func_2968(var_737_bool); // 0x16e NEW_2
	if(var_737_bool == 0) goto Label_380; // 0x170 JumpB
	
Label_369:
	lshWaitForAnimEnd(); // 0x171 Func
	var_738_object = var_3_object; // 0x173 PushT
	if(var_738_object == 0) goto Label_374; // 0x174 JumpB
	goto Label_379; // 0x175 Jump
	
Label_379:
	goto Label_394; // 0x17b Jump
	
Label_394:
	return 0; // 0x18a Return
	
Label_374:
	var_739_string = ""; // 0x176 PushV
	var_739_string = var_2_object; // 0x177 MovT
	func_2768(var_739_string); // 0x178 NEW_2
	goto Label_369; // 0x17a Jump
	
Label_380:
	var_740_string = "all"; // 0x17c PushS
	var_741_string = "idle"; // 0x17d PushS
	PlayAnimation(var_740_string, var_741_string); // 0x17e Func
	
Label_384:
	WaitForAnimEnd(); // 0x180 Func
	var_742_object = var_3_object; // 0x182 PushT
	if(var_742_object == 0) goto Label_389; // 0x183 JumpB
	goto Label_394; // 0x184 Jump
	
Label_389:
	var_743_string = "all"; // 0x185 PushS
	var_744_string = "idle"; // 0x186 PushS
	PlayAnimation(var_743_string, var_744_string); // 0x187 Func
	goto Label_384; // 0x189 Jump
}


func_591(var_0_bool, var_1_object, var_2_object, var_3_object, var_273_object, var_274_object)
{
	var_0_bool = var_274_object; // 0x250 TMov
	var_1_object = var_273_object; // 0x251 TMov
	var_3_object = 0; // 0x252 TMovB
	var_279_int = 1; // 0x253 PushI
	if(var_279_int == 0) goto Label_614; // 0x254 JumpB
	var_280_string = ""; // 0x255 PushV
	var_280_string = "Neutral"; // 0x256 MovS
	func_644(var_274_object, var_280_string); // 0x257 NEW_2
	var_297_int = 517994; // 0x259 PushI
	SetMessage(var_297_int); // 0x25a TObjFunc
	ClearReplies(); // 0x25c TObjFunc
	var_298_int = 517995; // 0x25e PushI
	var_299_int = 23147; // 0x25f PushI
	var_300_int = 19128; // 0x260 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x261 TObjFunc
	goto Label_614; // 0x263 Jump
	
Label_614:
	var_301_bool = 0; // 0x266 PushV
	func_2968(var_301_bool); // 0x267 NEW_2
	if(var_301_bool == 0) goto Label_629; // 0x269 JumpB
	
Label_618:
	lshWaitForAnimEnd(); // 0x26a Func
	var_302_object = var_3_object; // 0x26c PushT
	if(var_302_object == 0) goto Label_623; // 0x26d JumpB
	goto Label_628; // 0x26e Jump
	
Label_628:
	goto Label_643; // 0x274 Jump
	
Label_643:
	return 0; // 0x283 Return
	
Label_623:
	var_303_string = ""; // 0x26f PushV
	var_303_string = var_2_object; // 0x270 MovT
	func_2768(var_303_string); // 0x271 NEW_2
	goto Label_618; // 0x273 Jump
	
Label_629:
	var_314_string = "all"; // 0x275 PushS
	var_315_string = "idle"; // 0x276 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x277 Func
	
Label_633:
	WaitForAnimEnd(); // 0x279 Func
	var_316_object = var_3_object; // 0x27b PushT
	if(var_316_object == 0) goto Label_638; // 0x27c JumpB
	goto Label_643; // 0x27d Jump
	
Label_638:
	var_317_string = "all"; // 0x27e PushS
	var_318_string = "idle"; // 0x27f PushS
	PlayAnimation(var_317_string, var_318_string); // 0x280 Func
	goto Label_633; // 0x282 Jump
}


func_2127(var_2_object, var_780_string)
{
	var_781_bool = 0; // 0x850 PushV
	func_2968(var_781_bool); // 0x851 NEW_2
	var_782_bool = var_781_bool == 0; // 0x853 Not
	if(var_782_bool == 0) goto Label_2134; // 0x854 JumpB
	return 0; // 0x855 Return
	
Label_2134:
	var_783_bool = var_780_string == var_2_object; // 0x856 Eq
	if(var_783_bool == 0) goto Label_2137; // 0x857 JumpB
	return 0; // 0x858 Return
	
Label_2137:
	var_784_string = ""; var_785_bool = 0; // 0x859 PushV
	var_784_string = var_780_string; // 0x85a Mov
	var_786_string = ""; // 0x85b PushS
	var_787_bool = var_780_string == var_786_string; // 0x85c Eq
	if(var_787_bool == 0) goto Label_2144; // 0x85d JumpB
	var_785_bool = 0; // 0x85e MovB
	goto Label_2145; // 0x85f Jump
	
Label_2145:
	func_2784(var_784_string, var_785_bool); // 0x861 NEW_2
	var_2_object = var_780_string; // 0x863 TMov
	return 0; // 0x864 Return
	
Label_2144:
	var_785_bool = 1; // 0x860 MovB
}


func_3158(var_443_bool)
{
	var_445_int = 0; var_446_string = ""; // 0xc57 PushV
	var_446_string = "b2q03_1"; // 0xc58 MovS
	func_2868(var_445_int, var_446_string); // 0xc59 NEW_2
	var_447_int = 1; // 0xc5b PushI
	var_448_bool = var_445_int == var_447_int; // 0xc5c Eq
	if(var_448_bool == 0) goto Label_3168; // 0xc5d JumpB
	var_443_bool = 1; // 0xc5e MovB
	return 0; // 0xc5f Return
	
Label_3168:
	var_443_bool = 0; // 0xc60 MovB
	return 0; // 0xc61 Return
}


func_2904(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xb58 PushV
	FindActor(var_77_object, var_74_string); // 0xb59 Func
	var_78_bool = var_77_object == 0; // 0xb5b NullEq
	if(var_78_bool == 0) goto Label_2911; // 0xb5c JumpB
	var_73_bool = 0; // 0xb5d MovB
	return 2; // 0xb5e Return
	
Label_2911:
	Trigger(var_77_object, var_75_string); // 0xb5f Func
	var_73_bool = 1; // 0xb61 MovB
	return 2; // 0xb62 Return
}


func_3170(var_431_bool)
{
	var_433_int = 0; var_434_string = ""; // 0xc63 PushV
	var_434_string = "b2q03_1"; // 0xc64 MovS
	func_2868(var_433_int, var_434_string); // 0xc65 NEW_2
	var_435_int = 2; // 0xc67 PushI
	var_436_bool = var_433_int == var_435_int; // 0xc68 Eq
	if(var_436_bool == 0) goto Label_3180; // 0xc69 JumpB
	var_431_bool = 1; // 0xc6a MovB
	return 0; // 0xc6b Return
	
Label_3180:
	var_431_bool = 0; // 0xc6c MovB
	return 0; // 0xc6d Return
}


func_2916(var_102_float)
{
	var_103_float = 0; var_104_float = 0; // 0xb64 PushV
	GetGameTime(var_104_float); // 0xb65 Func
	var_102_float = var_104_float; // 0xb67 Mov
	return 2; // 0xb68 Return
}


func_2921(var_58_int)
{
	var_59_float = 0; var_60_float = 0; // 0xb69 PushV
	GetGameTime(var_60_float); // 0xb6a Func
	var_61_int = 1; // 0xb6c PushI
	var_62_int = 0; // 0xb6d PushV
	var_63_int = 24; // 0xb6e PushI
	var_62_int = var_60_float / var_60_float; // 0xb6f Div2
	var_58_int = var_61_int + var_62_int; // 0xb70 Add2
	return 2; // 0xb71 Return
}


func_2666(var_225_bool)
{
	var_227_string = ""; var_228_int = 0; var_229_bool = 0; var_230_int = 0; var_231_string = ""; var_232_string = ""; var_233_int = 0; var_234_bool = 0; var_235_int = 0; var_236_string = ""; // 0xa6a PushV
	var_237_string = "d"; // 0xa6b PushS
	var_238_int = 0; // 0xa6c PushV
	func_2921(var_238_int); // 0xa6d NEW_2
	var_239_int = var_237_string + var_238_int; // 0xa6f Add
	var_240_string = "m"; // 0xa70 PushS
	var_232_string = var_239_int + var_240_string; // 0xa71 Add2
	var_233_int = 0; // 0xa72 MovI
	
Label_2675:
	var_241_int = 1; // 0xa73 PushI
	if(var_241_int == 0) goto Label_2688; // 0xa74 JumpB
	var_242_int = 1; // 0xa75 PushI
	var_243_int = var_233_int + var_242_int; // 0xa76 Add
	var_244_int = var_232_string + var_243_int; // 0xa77 Add
	HasProperty(var_244_int, var_234_bool); // 0xa78 ObjFunc
	var_245_bool = var_234_bool == 0; // 0xa7a Not
	if(var_245_bool == 0) goto Label_2685; // 0xa7b JumpB
	goto Label_2688; // 0xa7c Jump
	
Label_2688:
	var_246_bool = var_233_int == 0; // 0xa80 Not
	if(var_246_bool == 0) goto Label_2692; // 0xa81 JumpB
	var_225_bool = 0; // 0xa82 MovB
	return 10; // 0xa83 Return
	
Label_2692:
	var_235_int = 0; // 0xa84 MovI
	var_247_int = 1; // 0xa85 PushI
	var_248_bool = var_233_int > var_247_int; // 0xa86 GT
	if(var_248_bool == 0) goto Label_2698; // 0xa87 JumpB
	irand(var_235_int, var_233_int); // 0xa88 Func
	
Label_2698:
	var_249_int = 1; // 0xa8a PushI
	var_250_int = var_235_int + var_249_int; // 0xa8b Add
	var_251_int = var_232_string + var_250_int; // 0xa8c Add
	GetProperty(var_251_int, var_236_string); // 0xa8d ObjFunc
	var_252_bool = 0; var_253_string = ""; // 0xa8f PushV
	var_253_string = var_236_string; // 0xa90 Mov
	func_2799(var_252_bool, var_253_string); // 0xa91 NEW_2
	var_225_bool = var_252_bool; // 0xa92 Mov
	return 10; // 0xa94 Return
	
Label_2685:
	var_254_int = 1; // 0xa7d PushI
	var_233_int = var_233_int + var_254_int; // 0xa7e Add2
	goto Label_2675; // 0xa7f Jump
}


func_3182(var_456_bool)
{
	var_458_int = 0; var_459_string = ""; // 0xc6f PushV
	var_459_string = "oob2Andrei3"; // 0xc70 MovS
	func_2868(var_458_int, var_459_string); // 0xc71 NEW_2
	var_460_int = 0; // 0xc73 PushI
	var_461_bool = var_458_int == var_460_int; // 0xc74 Eq
	if(var_461_bool == 0) goto Label_3192; // 0xc75 JumpB
	var_456_bool = 1; // 0xc76 MovB
	return 0; // 0xc77 Return
	
Label_3192:
	var_456_bool = 0; // 0xc78 MovB
	return 0; // 0xc79 Return
}


func_881(var_0_bool, var_1_object, var_2_object, var_3_object, var_357_object, var_358_object)
{
	var_0_bool = var_358_object; // 0x372 TMov
	var_1_object = var_357_object; // 0x373 TMov
	var_3_object = 0; // 0x374 TMovB
	var_363_int = 1; // 0x375 PushI
	if(var_363_int == 0) goto Label_1012; // 0x376 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x377 PushV
	var_365_object = var_1_object; // 0x378 MovT
	func_3100(var_365_object); // 0x379 NEW_2
	if(var_364_bool == 0) goto Label_922; // 0x37b JumpB
	var_372_object = Obj(); var_373_object = Obj(); // 0x37c PushV
	var_372_object = var_1_object; // 0x37d MovT
	var_373_object = var_0_bool; // 0x37e MovT
	func_2992(); // 0x37f NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x381 PushV
	var_376_object = var_1_object; // 0x382 MovT
	var_377_object = var_0_bool; // 0x383 MovT
	func_3043(); // 0x384 NEW_2
	var_380_string = ""; // 0x386 PushV
	var_380_string = "Neutral"; // 0x387 MovS
	func_1042(var_358_object, var_380_string); // 0x388 NEW_2
	var_388_int = 531038; // 0x38a PushI
	SetMessage(var_388_int); // 0x38b TObjFunc
	ClearReplies(); // 0x38d TObjFunc
	var_389_int = 531227; // 0x38f PushI
	var_390_int = 32541; // 0x390 PushI
	var_391_int = 32540; // 0x391 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x392 TObjFunc
	var_392_int = 531231; // 0x394 PushI
	var_393_int = 32545; // 0x395 PushI
	var_394_int = 32544; // 0x396 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x397 TObjFunc
	goto Label_1012; // 0x399 Jump
	
Label_1012:
	var_395_bool = 0; // 0x3f4 PushV
	func_2968(var_395_bool); // 0x3f5 NEW_2
	if(var_395_bool == 0) goto Label_1027; // 0x3f7 JumpB
	
Label_1016:
	lshWaitForAnimEnd(); // 0x3f8 Func
	var_396_object = var_3_object; // 0x3fa PushT
	if(var_396_object == 0) goto Label_1021; // 0x3fb JumpB
	goto Label_1026; // 0x3fc Jump
	
Label_1026:
	goto Label_1041; // 0x402 Jump
	
Label_1041:
	return 0; // 0x411 Return
	
Label_1021:
	var_397_string = ""; // 0x3fd PushV
	var_397_string = var_2_object; // 0x3fe MovT
	func_2768(var_397_string); // 0x3ff NEW_2
	goto Label_1016; // 0x401 Jump
	
Label_1027:
	var_398_string = "all"; // 0x403 PushS
	var_399_string = "idle"; // 0x404 PushS
	PlayAnimation(var_398_string, var_399_string); // 0x405 Func
	
Label_1031:
	WaitForAnimEnd(); // 0x407 Func
	var_400_object = var_3_object; // 0x409 PushT
	if(var_400_object == 0) goto Label_1036; // 0x40a JumpB
	goto Label_1041; // 0x40b Jump
	
Label_1036:
	var_401_string = "all"; // 0x40c PushS
	var_402_string = "idle"; // 0x40d PushS
	PlayAnimation(var_401_string, var_402_string); // 0x40e Func
	goto Label_1031; // 0x410 Jump
	
Label_922:
	var_403_string = ""; // 0x39a PushV
	var_403_string = "Smile"; // 0x39b MovS
	func_1042(var_358_object, var_403_string); // 0x39c NEW_2
	var_404_int = 518214; // 0x39e PushI
	SetMessage(var_404_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_405_bool = 0; var_406_object = Obj(); // 0x3a3 PushV
	var_406_object = var_1_object; // 0x3a4 MovT
	func_3124(var_406_object); // 0x3a5 NEW_2
	if(var_405_bool == 0) goto Label_941; // 0x3a7 JumpB
	var_411_int = 531041; // 0x3a8 PushI
	var_412_int = 32373; // 0x3a9 PushI
	var_413_int = 32372; // 0x3aa PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x3ab TObjFunc
	
Label_941:
	var_414_bool = 0; // 0x3ad PushV
	var_414_bool = 0; // 0x3ae MovB
	var_415_bool = 0; // 0x3af PushV
	var_415_bool = 0; // 0x3b0 MovB
	var_416_bool = 0; var_417_object = Obj(); // 0x3b1 PushV
	var_417_object = var_1_object; // 0x3b2 MovT
	func_3136(var_416_bool, var_417_object); // 0x3b3 NEW_2
	if(var_416_bool == 0) goto Label_956; // 0x3b5 JumpB
	var_425_bool = 0; var_426_object = Obj(); // 0x3b6 PushV
	var_426_object = var_1_object; // 0x3b7 MovT
	func_3112(var_426_object); // 0x3b8 NEW_2
	if(var_425_bool == 0) goto Label_956; // 0x3ba JumpB
	var_415_bool = 1; // 0x3bb MovB
	
Label_956:
	if(var_415_bool == 0) goto Label_964; // 0x3bc JumpB
	var_431_bool = 0; var_432_object = Obj(); // 0x3bd PushV
	var_432_object = var_1_object; // 0x3be MovT
	func_3170(var_432_object); // 0x3bf NEW_2
	var_437_bool = var_431_bool == 0; // 0x3c1 Not
	if(var_437_bool == 0) goto Label_964; // 0x3c2 JumpB
	var_414_bool = 1; // 0x3c3 MovB
	
Label_964:
	if(var_414_bool == 0) goto Label_970; // 0x3c4 JumpB
	var_438_int = 531048; // 0x3c5 PushI
	var_439_int = 32378; // 0x3c6 PushI
	var_440_int = 32377; // 0x3c7 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x3c8 TObjFunc
	
Label_970:
	var_441_bool = 0; // 0x3ca PushV
	var_441_bool = 0; // 0x3cb MovB
	var_442_bool = 0; // 0x3cc PushV
	var_442_bool = 0; // 0x3cd MovB
	var_443_bool = 0; var_444_object = Obj(); // 0x3ce PushV
	var_444_object = var_1_object; // 0x3cf MovT
	func_3158(var_444_object); // 0x3d0 NEW_2
	if(var_443_bool == 0) goto Label_986; // 0x3d2 JumpB
	var_449_bool = 0; var_450_object = Obj(); // 0x3d3 PushV
	var_450_object = var_1_object; // 0x3d4 MovT
	func_3146(var_450_object); // 0x3d5 NEW_2
	var_455_bool = var_449_bool == 0; // 0x3d7 Not
	if(var_455_bool == 0) goto Label_986; // 0x3d8 JumpB
	var_442_bool = 1; // 0x3d9 MovB
	
Label_986:
	if(var_442_bool == 0) goto Label_993; // 0x3da JumpB
	var_456_bool = 0; var_457_object = Obj(); // 0x3db PushV
	var_457_object = var_1_object; // 0x3dc MovT
	func_3182(var_457_object); // 0x3dd NEW_2
	if(var_456_bool == 0) goto Label_993; // 0x3df JumpB
	var_441_bool = 1; // 0x3e0 MovB
	
Label_993:
	if(var_441_bool == 0) goto Label_999; // 0x3e1 JumpB
	var_462_int = 531081; // 0x3e2 PushI
	var_463_int = 32402; // 0x3e3 PushI
	var_464_int = 32401; // 0x3e4 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x3e5 TObjFunc
	
Label_999:
	var_465_int = 518215; // 0x3e7 PushI
	var_466_int = 20584; // 0x3e8 PushI
	var_467_int = 19328; // 0x3e9 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x3ea TObjFunc
	var_468_int = 518216; // 0x3ec PushI
	var_469_int = -1; // 0x3ed PushI
	var_470_int = 19329; // 0x3ee PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x3ef TObjFunc
	goto Label_1012; // 0x3f1 Jump
}


func_2930(var_329_bool, var_330_int)
{
	var_331_int = 0; // 0xb73 PushV
	func_2921(var_331_int); // 0xb74 NEW_2
	var_329_bool = var_331_int == var_330_int; // 0xb76 Eq2
	return 0; // 0xb77 Return
}


func_1651(var_0_bool, var_517_int, var_518_object)
{
	var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0; var_524_object = Obj(); var_525_bool = 0; var_526_int = 0; var_527_bool = 0; // 0x673 PushV
	var_0_bool = var_518_object; // 0x674 TMov
	var_528_bool = 0; var_529_object = Obj(); var_530_float = 0; // 0x675 PushV
	var_529_object = var_518_object; // 0x676 Mov
	var_530_float = 70.0; // 0x677 MovF
	func_2486(var_529_object, var_530_float); // 0x678 NEW_2
	var_531_bool = var_528_bool == 0; // 0x67a Not
	if(var_531_bool == 0) goto Label_1662; // 0x67b JumpB
	var_517_int = -2; // 0x67c MovI
	return 8; // 0x67d Return
	
Label_1662:
	CreateDialog(var_524_object); // 0x67e Func
	var_532_int = 0; // 0x680 PushV
	func_2962(var_532_int); // 0x681 NEW_2
	SetNPCName(var_532_int); // 0x683 ObjFunc
	var_533_int = 0; // 0x685 PushV
	func_2960(var_533_int); // 0x686 NEW_2
	SetNPCDescription(var_533_int); // 0x688 ObjFunc
	var_534_string = ""; // 0x68a PushV
	func_2964(var_534_string); // 0x68b NEW_2
	SetPhoto(var_534_string); // 0x68d ObjFunc
	var_535_string = ""; // 0x68f PushV
	func_2966(var_535_string); // 0x690 NEW_2
	SetPhoto2(var_535_string); // 0x692 ObjFunc
	var_536_int = 0; // 0x694 PushV
	func_3444(var_536_int); // 0x695 NEW_2
	SetPlayerName(var_536_int); // 0x697 ObjFunc
	var_526_int = -1; // 0x699 MovI
	IsOverrideActive(var_525_bool); // 0x69a Func
	var_537_bool = var_525_bool; // 0x69c Push
	if(var_537_bool == 0) goto Label_1696; // 0x69d JumpB
	var_517_int = -2; // 0x69e MovI
	return 8; // 0x69f Return
	
Label_1696:
	DoDialog(var_524_object); // 0x6a0 Func
	var_538_bool = 0; var_539_object = Obj(); // 0x6a2 PushV
	var_540_object = Obj(); // 0x6a3 PushV
	func_2847(var_540_object); // 0x6a4 NEW_2
	var_539_object = var_540_object; // 0x6a5 Mov
	func_2571(var_538_bool, var_539_object); // 0x6a7 NEW_2
	var_541_object = Obj(); var_542_object = Obj(); // 0x6a9 PushV
	var_541_object = var_518_object; // 0x6aa Mov
	var_542_object = var_524_object; // 0x6ab Mov
	TaskCall(10); // 0x6ac TaskCall
	func_1732(var_543_object, var_544_object, var_545_string, var_546_bool, var_541_object, var_542_object); // 0x6ad NEW_2
	TaskReturn(); // 0x6ae TaskReturn
	IsDialogEnd(var_527_bool); // 0x6b0 ObjFunc
	
Label_1714:
	var_587_bool = var_527_bool == 0; // 0x6b2 Not
	if(var_587_bool == 0) goto Label_1721; // 0x6b3 JumpB
	sync(); // 0x6b4 Func
	IsDialogEnd(var_527_bool); // 0x6b6 ObjFunc
	goto Label_1714; // 0x6b8 Jump
	
Label_1721:
	var_588_object = Obj(); // 0x6b9 PushV
	var_588_object = var_518_object; // 0x6ba Mov
	func_2554(); // 0x6bb NEW_2
	StopDialog(var_524_object); // 0x6bd Func
	GetReturnValue(var_526_int); // 0x6bf ObjFunc
	var_517_int = var_526_int; // 0x6c1 Mov
	return 8; // 0x6c2 Return
}


func_3444(var_174_int)
{
	var_175_int = 0; var_176_int = 0; // 0xd74 PushV
	var_177_string = "branch"; // 0xd75 PushS
	GetVariable(var_177_string, var_176_int); // 0xd76 Func
	var_178_int = 0; // 0xd78 PushI
	var_179_bool = var_176_int == var_178_int; // 0xd79 Eq
	if(var_179_bool == 0) goto Label_3454; // 0xd7a JumpB
	var_174_int = 1; // 0xd7b MovI
	return 2; // 0xd7c Return
	
Label_3454:
	var_180_int = 1; // 0xd7e PushI
	var_181_bool = var_176_int == var_180_int; // 0xd7f Eq
	if(var_181_bool == 0) goto Label_3459; // 0xd80 JumpB
	var_174_int = 2; // 0xd81 MovI
	return 2; // 0xd82 Return
	
Label_3459:
	var_174_int = 3; // 0xd83 MovI
	return 2; // 0xd84 Return
}


func_2936(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xb78 PushV
	var_59_string = "idle"; // 0xb79 MovS
	var_60_int = var_57_int; // 0xb7a Push
	if(var_60_int == 0) goto Label_2941; // 0xb7b JumpB
	var_59_string = var_59_string + var_57_int; // 0xb7c Add2
	
Label_2941:
	var_56_string = var_59_string; // 0xb7d Mov
	return 2; // 0xb7e Return
}


func_121(var_0_bool, var_1_object, var_2_object, var_3_object, var_644_object, var_645_object)
{
	var_0_bool = var_645_object; // 0x7a TMov
	var_1_object = var_644_object; // 0x7b TMov
	var_3_object = 0; // 0x7c TMovB
	var_650_int = 1; // 0x7d PushI
	if(var_650_int == 0) goto Label_149; // 0x7e JumpB
	var_651_string = ""; // 0x7f PushV
	var_651_string = "Neutral"; // 0x80 MovS
	func_179(var_645_object, var_651_string); // 0x81 NEW_2
	var_659_int = 531971; // 0x83 PushI
	SetMessage(var_659_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_660_int = 531972; // 0x88 PushI
	var_661_int = -1; // 0x89 PushI
	var_662_int = 33378; // 0x8a PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x8b TObjFunc
	var_663_int = 531973; // 0x8d PushI
	var_664_int = -1; // 0x8e PushI
	var_665_int = 33379; // 0x8f PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x90 TObjFunc
	goto Label_149; // 0x92 Jump
	
Label_149:
	var_666_bool = 0; // 0x95 PushV
	func_2968(var_666_bool); // 0x96 NEW_2
	if(var_666_bool == 0) goto Label_164; // 0x98 JumpB
	
Label_153:
	lshWaitForAnimEnd(); // 0x99 Func
	var_667_object = var_3_object; // 0x9b PushT
	if(var_667_object == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_163:
	goto Label_178; // 0xa3 Jump
	
Label_178:
	return 0; // 0xb2 Return
	
Label_158:
	var_668_string = ""; // 0x9e PushV
	var_668_string = var_2_object; // 0x9f MovT
	func_2768(var_668_string); // 0xa0 NEW_2
	goto Label_153; // 0xa2 Jump
	
Label_164:
	var_669_string = "all"; // 0xa4 PushS
	var_670_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_669_string, var_670_string); // 0xa6 Func
	
Label_168:
	WaitForAnimEnd(); // 0xa8 Func
	var_671_object = var_3_object; // 0xaa PushT
	if(var_671_object == 0) goto Label_173; // 0xab JumpB
	goto Label_178; // 0xac Jump
	
Label_173:
	var_672_string = "all"; // 0xad PushS
	var_673_string = "idle"; // 0xae PushS
	PlayAnimation(var_672_string, var_673_string); // 0xaf Func
	goto Label_168; // 0xb1 Jump
}


func_3194(var_558_bool)
{
	var_560_int = 0; var_561_string = ""; // 0xc7b PushV
	var_561_string = "b5q01"; // 0xc7c MovS
	func_2868(var_560_int, var_561_string); // 0xc7d NEW_2
	var_562_int = 1; // 0xc7f PushI
	var_563_bool = var_560_int == var_562_int; // 0xc80 Eq
	if(var_563_bool == 0) goto Label_3204; // 0xc81 JumpB
	var_558_bool = 1; // 0xc82 MovB
	return 0; // 0xc83 Return
	
Label_3204:
	var_558_bool = 0; // 0xc84 MovB
	return 0; // 0xc85 Return
}


func_2943(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xb7f PushV
	var_53_int = 0; // 0xb80 MovI
	
Label_2945:
	var_55_string = "all"; // 0xb81 PushS
	var_56_string = ""; var_57_int = 0; // 0xb82 PushV
	var_57_int = var_53_int; // 0xb83 Mov
	func_2936(var_56_string, var_57_int); // 0xb84 NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xb86 Func
	var_61_bool = var_54_bool == 0; // 0xb88 Not
	if(var_61_bool == 0) goto Label_2955; // 0xb89 JumpB
	goto Label_2958; // 0xb8a Jump
	
Label_2958:
	var_50_int = var_53_int; // 0xb8e Mov
	return 4; // 0xb8f Return
	
Label_2955:
	var_62_int = 1; // 0xb8b PushI
	var_53_int = var_53_int + var_62_int; // 0xb8c Add2
	goto Label_2945; // 0xb8d Jump
}


func_644(var_2_object, var_280_string)
{
	var_281_bool = 0; // 0x285 PushV
	func_2968(var_281_bool); // 0x286 NEW_2
	var_282_bool = var_281_bool == 0; // 0x288 Not
	if(var_282_bool == 0) goto Label_651; // 0x289 JumpB
	return 0; // 0x28a Return
	
Label_651:
	var_283_bool = var_280_string == var_2_object; // 0x28b Eq
	if(var_283_bool == 0) goto Label_654; // 0x28c JumpB
	return 0; // 0x28d Return
	
Label_654:
	var_284_string = ""; var_285_bool = 0; // 0x28e PushV
	var_284_string = var_280_string; // 0x28f Mov
	var_286_string = ""; // 0x290 PushS
	var_287_bool = var_280_string == var_286_string; // 0x291 Eq
	if(var_287_bool == 0) goto Label_661; // 0x292 JumpB
	var_285_bool = 0; // 0x293 MovB
	goto Label_662; // 0x294 Jump
	
Label_662:
	func_2784(var_284_string, var_285_bool); // 0x296 NEW_2
	var_2_object = var_280_string; // 0x298 TMov
	return 0; // 0x299 Return
	
Label_661:
	var_285_bool = 1; // 0x295 MovB
}


func_3461(var_50_object, var_335_object, var_519_object, var_622_object)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0xd85 PushV
	var_57_string = "tr_andrei"; // 0xd86 PushS
	GetVariable(var_57_string, var_54_int); // 0xd87 Func
	var_58_int = 0; // 0xd89 PushV
	func_2921(var_58_int); // 0xd8a NEW_2
	var_64_bool = var_54_int != var_58_int; // 0xd8c Neq
	if(var_64_bool == 0) goto Label_3479; // 0xd8d JumpB
	func_3398(); // 0xd8f NEW_2
	var_108_string = "tr_andrei"; // 0xd91 PushS
	var_109_int = 0; // 0xd92 PushV
	func_2921(var_109_int); // 0xd93 NEW_2
	SetVariable(var_108_string, var_109_int); // 0xd95 Func
	
Label_3479:
	var_110_string = "mt_andrei"; // 0xd97 PushS
	GetVariable(var_110_string, var_55_int); // 0xd98 Func
	var_111_bool = var_55_int == 0; // 0xd9a Not
	if(var_111_bool == 0) goto Label_3494; // 0xd9b JumpB
	var_112_int = 0; var_113_object = Obj(); // 0xd9c PushV
	var_113_object = var_50_object; // 0xd9d Mov
	TaskCall(5); // 0xd9e TaskCall
	func_510(var_114_object, var_112_int, var_113_object); // 0xd9f NEW_2
	TaskReturn(); // 0xda0 TaskReturn
	var_327_string = "mt_andrei"; // 0xda2 PushS
	var_328_int = 1; // 0xda3 PushI
	SetVariable(var_327_string, var_328_int); // 0xda4 Func
	
Label_3494:
	var_329_bool = 0; var_330_int = 0; // 0xda6 PushV
	var_330_int = 2; // 0xda7 MovI
	func_2930(var_329_bool, var_330_int); // 0xda8 NEW_2
	if(var_329_bool == 0) goto Label_3526; // 0xdaa JumpB
	var_332_int = 1000; // 0xdab PushI
	var_333_int = 0; var_334_object = Obj(); // 0xdac PushV
	var_334_object = var_50_object; // 0xdad Mov
	TaskCall(7); // 0xdae TaskCall
	func_800(var_335_object, var_333_int, var_334_object); // 0xdaf NEW_2
	TaskReturn(); // 0xdb0 TaskReturn
	var_473_bool = var_332_int == var_335_object; // 0xdb2 Eq
	if(var_473_bool == 0) goto Label_3525; // 0xdb3 JumpB
	var_474_bool = 0; var_475_object = Obj(); // 0xdb4 PushV
	var_475_object = var_50_object; // 0xdb5 Mov
	func_2709(var_474_bool, var_475_object); // 0xdb6 NEW_2
	var_505_bool = var_474_bool == 0; // 0xdb8 Not
	if(var_505_bool == 0) goto Label_3515; // 0xdb9 JumpB
	return 6; // 0xdba Return
	
Label_3515:
	var_506_object = Obj(); // 0xdbb PushV
	var_506_object = var_50_object; // 0xdbc Mov
	TaskCall(0); // 0xdbd TaskCall
	func_0(var_506_object); // 0xdbe NEW_2
	TaskReturn(); // 0xdbf TaskReturn
	var_513_object = Obj(); // 0xdc1 PushV
	var_513_object = var_50_object; // 0xdc2 Mov
	func_2764(); // 0xdc3 NEW_2
	
Label_3525:
	return 6; // 0xdc5 Return
	
Label_3526:
	var_514_bool = 0; var_515_int = 0; // 0xdc6 PushV
	var_515_int = 5; // 0xdc7 MovI
	func_2930(var_514_bool, var_515_int); // 0xdc8 NEW_2
	if(var_514_bool == 0) goto Label_3558; // 0xdca JumpB
	var_516_int = 1000; // 0xdcb PushI
	var_517_int = 0; var_518_object = Obj(); // 0xdcc PushV
	var_518_object = var_50_object; // 0xdcd Mov
	TaskCall(9); // 0xdce TaskCall
	func_1651(var_519_object, var_517_int, var_518_object); // 0xdcf NEW_2
	TaskReturn(); // 0xdd0 TaskReturn
	var_589_bool = var_516_int == var_519_object; // 0xdd2 Eq
	if(var_589_bool == 0) goto Label_3557; // 0xdd3 JumpB
	var_590_bool = 0; var_591_object = Obj(); // 0xdd4 PushV
	var_591_object = var_50_object; // 0xdd5 Mov
	func_2709(var_590_bool, var_591_object); // 0xdd6 NEW_2
	var_592_bool = var_590_bool == 0; // 0xdd8 Not
	if(var_592_bool == 0) goto Label_3547; // 0xdd9 JumpB
	return 6; // 0xdda Return
	
Label_3547:
	var_593_object = Obj(); // 0xddb PushV
	var_593_object = var_50_object; // 0xddc Mov
	TaskCall(0); // 0xddd TaskCall
	func_0(var_593_object); // 0xdde NEW_2
	TaskReturn(); // 0xddf TaskReturn
	var_595_object = Obj(); // 0xde1 PushV
	var_595_object = var_50_object; // 0xde2 Mov
	func_2764(); // 0xde3 NEW_2
	
Label_3557:
	return 6; // 0xde5 Return
	
Label_3558:
	var_596_bool = 0; // 0xde6 PushV
	var_596_bool = 1; // 0xde7 MovB
	var_597_bool = 0; // 0xde8 PushV
	var_597_bool = 1; // 0xde9 MovB
	var_598_bool = 0; // 0xdea PushV
	var_598_bool = 1; // 0xdeb MovB
	var_599_bool = 0; // 0xdec PushV
	var_599_bool = 1; // 0xded MovB
	var_600_bool = 0; // 0xdee PushV
	var_600_bool = 1; // 0xdef MovB
	var_601_bool = 0; // 0xdf0 PushV
	var_601_bool = 1; // 0xdf1 MovB
	var_602_bool = 0; // 0xdf2 PushV
	var_602_bool = 1; // 0xdf3 MovB
	var_603_bool = 0; var_604_int = 0; // 0xdf4 PushV
	var_604_int = 3; // 0xdf5 MovI
	func_2930(var_603_bool, var_604_int); // 0xdf6 NEW_2
	if(var_603_bool == 0) goto Label_3583; // 0xdf8 JumpB
	var_605_bool = 0; var_606_int = 0; // 0xdf9 PushV
	var_606_int = 4; // 0xdfa MovI
	func_2930(var_605_bool, var_606_int); // 0xdfb NEW_2
	if(var_605_bool == 0) goto Label_3583; // 0xdfd JumpB
	var_602_bool = 0; // 0xdfe MovB
	
Label_3583:
	if(var_602_bool == 0) goto Label_3590; // 0xdff JumpB
	var_607_bool = 0; var_608_int = 0; // 0xe00 PushV
	var_608_int = 6; // 0xe01 MovI
	func_2930(var_607_bool, var_608_int); // 0xe02 NEW_2
	if(var_607_bool == 0) goto Label_3590; // 0xe04 JumpB
	var_601_bool = 0; // 0xe05 MovB
	
Label_3590:
	if(var_601_bool == 0) goto Label_3597; // 0xe06 JumpB
	var_609_bool = 0; var_610_int = 0; // 0xe07 PushV
	var_610_int = 7; // 0xe08 MovI
	func_2930(var_609_bool, var_610_int); // 0xe09 NEW_2
	if(var_609_bool == 0) goto Label_3597; // 0xe0b JumpB
	var_600_bool = 0; // 0xe0c MovB
	
Label_3597:
	if(var_600_bool == 0) goto Label_3604; // 0xe0d JumpB
	var_611_bool = 0; var_612_int = 0; // 0xe0e PushV
	var_612_int = 8; // 0xe0f MovI
	func_2930(var_611_bool, var_612_int); // 0xe10 NEW_2
	if(var_611_bool == 0) goto Label_3604; // 0xe12 JumpB
	var_599_bool = 0; // 0xe13 MovB
	
Label_3604:
	if(var_599_bool == 0) goto Label_3611; // 0xe14 JumpB
	var_613_bool = 0; var_614_int = 0; // 0xe15 PushV
	var_614_int = 9; // 0xe16 MovI
	func_2930(var_613_bool, var_614_int); // 0xe17 NEW_2
	if(var_613_bool == 0) goto Label_3611; // 0xe19 JumpB
	var_598_bool = 0; // 0xe1a MovB
	
Label_3611:
	if(var_598_bool == 0) goto Label_3618; // 0xe1b JumpB
	var_615_bool = 0; var_616_int = 0; // 0xe1c PushV
	var_616_int = 10; // 0xe1d MovI
	func_2930(var_615_bool, var_616_int); // 0xe1e NEW_2
	if(var_615_bool == 0) goto Label_3618; // 0xe20 JumpB
	var_597_bool = 0; // 0xe21 MovB
	
Label_3618:
	if(var_597_bool == 0) goto Label_3625; // 0xe22 JumpB
	var_617_bool = 0; var_618_int = 0; // 0xe23 PushV
	var_618_int = 11; // 0xe24 MovI
	func_2930(var_617_bool, var_618_int); // 0xe25 NEW_2
	if(var_617_bool == 0) goto Label_3625; // 0xe27 JumpB
	var_596_bool = 0; // 0xe28 MovB
	
Label_3625:
	if(var_596_bool == 0) goto Label_3653; // 0xe29 JumpB
	var_619_int = 1000; // 0xe2a PushI
	var_620_int = 0; var_621_object = Obj(); // 0xe2b PushV
	var_621_object = var_50_object; // 0xe2c Mov
	TaskCall(1); // 0xe2d TaskCall
	func_40(var_622_object, var_620_int, var_621_object); // 0xe2e NEW_2
	TaskReturn(); // 0xe2f TaskReturn
	var_676_bool = var_619_int == var_622_object; // 0xe31 Eq
	if(var_676_bool == 0) goto Label_3652; // 0xe32 JumpB
	var_677_bool = 0; var_678_object = Obj(); // 0xe33 PushV
	var_678_object = var_50_object; // 0xe34 Mov
	func_2709(var_677_bool, var_678_object); // 0xe35 NEW_2
	var_679_bool = var_677_bool == 0; // 0xe37 Not
	if(var_679_bool == 0) goto Label_3642; // 0xe38 JumpB
	return 6; // 0xe39 Return
	
Label_3642:
	var_680_object = Obj(); // 0xe3a PushV
	var_680_object = var_50_object; // 0xe3b Mov
	TaskCall(0); // 0xe3c TaskCall
	func_0(var_680_object); // 0xe3d NEW_2
	TaskReturn(); // 0xe3e TaskReturn
	var_682_object = Obj(); // 0xe40 PushV
	var_682_object = var_50_object; // 0xe41 Mov
	func_2764(); // 0xe42 NEW_2
	
Label_3652:
	return 6; // 0xe44 Return
	
Label_3653:
	var_683_string = "d12_andrei"; // 0xe45 PushS
	GetVariable(var_683_string, var_56_int); // 0xe46 Func
	var_684_bool = 0; // 0xe48 PushV
	var_684_bool = 0; // 0xe49 MovB
	var_685_bool = 0; var_686_int = 0; // 0xe4a PushV
	var_686_int = 12; // 0xe4b MovI
	func_2930(var_685_bool, var_686_int); // 0xe4c NEW_2
	if(var_685_bool == 0) goto Label_3666; // 0xe4e JumpB
	var_687_bool = var_56_int == 0; // 0xe4f Not
	if(var_687_bool == 0) goto Label_3666; // 0xe50 JumpB
	var_684_bool = 1; // 0xe51 MovB
	
Label_3666:
	if(var_684_bool == 0) goto Label_3678; // 0xe52 JumpB
	var_688_int = 0; var_689_object = Obj(); // 0xe53 PushV
	var_689_object = var_50_object; // 0xe54 Mov
	TaskCall(3); // 0xe55 TaskCall
	func_251(var_690_object, var_688_int, var_689_object); // 0xe56 NEW_2
	TaskReturn(); // 0xe57 TaskReturn
	var_747_string = "d12_andrei"; // 0xe59 PushS
	var_748_int = 1; // 0xe5a PushI
	SetVariable(var_747_string, var_748_int); // 0xe5b Func
	return 6; // 0xe5d Return
	
Label_3678:
	var_749_int = 0; var_750_object = Obj(); // 0xe5e PushV
	var_750_object = var_50_object; // 0xe5f Mov
	TaskCall(11); // 0xe60 TaskCall
	func_1988(var_751_object, var_749_int, var_750_object); // 0xe61 NEW_2
	TaskReturn(); // 0xe62 TaskReturn
	return 6; // 0xe64 Return
}


func_3206(var_564_bool)
{
	var_566_int = 0; var_567_string = ""; // 0xc87 PushV
	var_567_string = "oob5Andrei1"; // 0xc88 MovS
	func_2868(var_566_int, var_567_string); // 0xc89 NEW_2
	var_568_int = 0; // 0xc8b PushI
	var_569_bool = var_566_int == var_568_int; // 0xc8c Eq
	if(var_569_bool == 0) goto Label_3216; // 0xc8d JumpB
	var_564_bool = 1; // 0xc8e MovB
	return 0; // 0xc8f Return
	
Label_3216:
	var_564_bool = 0; // 0xc90 MovB
	return 0; // 0xc91 Return
}


func_2440(var_70_bool)
{
	var_70_bool = 1; // 0x988 MovB
	return 0; // 0x989 Return
}


func_2442()
{
	StopAnimation(); // 0x98a Func
	StopGroup0(); // 0x98c Func
	return 0; // 0x98e Return
}


func_395(var_2_object, var_719_string)
{
	var_720_bool = 0; // 0x18c PushV
	func_2968(var_720_bool); // 0x18d NEW_2
	var_721_bool = var_720_bool == 0; // 0x18f Not
	if(var_721_bool == 0) goto Label_402; // 0x190 JumpB
	return 0; // 0x191 Return
	
Label_402:
	var_722_bool = var_719_string == var_2_object; // 0x192 Eq
	if(var_722_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_723_string = ""; var_724_bool = 0; // 0x195 PushV
	var_723_string = var_719_string; // 0x196 Mov
	var_725_string = ""; // 0x197 PushS
	var_726_bool = var_719_string == var_725_string; // 0x198 Eq
	if(var_726_bool == 0) goto Label_412; // 0x199 JumpB
	var_724_bool = 0; // 0x19a MovB
	goto Label_413; // 0x19b Jump
	
Label_413:
	func_2784(var_723_string, var_724_bool); // 0x19d NEW_2
	var_2_object = var_719_string; // 0x19f TMov
	return 0; // 0x1a0 Return
	
Label_412:
	var_724_bool = 1; // 0x19c MovB
}


func_2447(var_47_float)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x98f PushV
	GetPosition(var_52_cvector); // 0x990 Func
	GetPosition(var_53_cvector); // 0x992 ObjFunc
	var_54_cvector = var_53_cvector - var_52_cvector; // 0x994 Sub2
	var_47_float = var_54_cvector | var_54_cvector; // 0x995 Or2
	return 6; // 0x996 Return
}


func_2960(var_171_int)
{
	var_171_int = 515529; // 0xb90 MovI
	return 0; // 0xb91 Return
}


func_3218(var_418_bool)
{
	var_420_int = 0; var_421_int = 0; // 0xc92 PushV
	var_422_string = "grass_brown_tvir"; // 0xc93 PushS
	GetItemCountOfType(var_421_int, var_422_string); // 0xc94 ObjFunc
	var_423_int = 10; // 0xc96 PushI
	var_424_bool = var_421_int >= var_423_int; // 0xc97 GE
	if(var_424_bool == 0) goto Label_3227; // 0xc98 JumpB
	var_418_bool = 1; // 0xc99 MovB
	return 2; // 0xc9a Return
	
Label_3227:
	var_418_bool = 0; // 0xc9b MovB
	return 2; // 0xc9c Return
}


func_2195(var_0_bool)
{
	var_32_bool = 0; // 0x893 PushV
	func_2481(var_32_bool); // 0x894 NEW_2
	var_35_bool = var_32_bool == 0; // 0x896 Not
	if(var_35_bool == 0) goto Label_2202; // 0x897 JumpB
	Hold(); // 0x898 Func
	
Label_2202:
	GetDirection(var_0_bool); // 0x89a Func
	
Label_2204:
	func_2371(); // 0x89d NEW_2
	goto Label_2204; // 0x89f Jump
}


func_2962(var_170_int)
{
	var_170_int = 502855; // 0xb92 MovI
	return 0; // 0xb93 Return
}


func_2709(var_474_bool, var_475_object)
{
	var_476_bool = 0; var_477_object = Obj(); var_478_float = 0; // 0xa96 PushV
	var_477_object = var_475_object; // 0xa97 Mov
	var_478_float = 70; // 0xa98 MovI
	func_2717(var_477_object, var_478_float); // 0xa99 NEW_2
	var_474_bool = var_476_bool; // 0xa9a Mov
	return 0; // 0xa9c Return
}


func_2964(var_172_string)
{
	var_172_string = "ui/NPC_Andrei.png"; // 0xb94 MovS
	return 0; // 0xb95 Return
}


func_2966(var_173_string)
{
	var_173_string = "ui/NPC_Andrei_b.png"; // 0xb96 MovS
	return 0; // 0xb97 Return
}


func_2455(var_126_string, var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x997 PushV
	GetProperty(var_126_string, var_129_int); // 0x998 ObjFunc
	var_130_int = var_129_int + var_127_int; // 0x99a Add
	SetProperty(var_126_string, var_130_int); // 0x99b ObjFunc
	return 2; // 0x99d Return
}


func_2968(var_165_bool)
{
	var_165_bool = 1; // 0xb98 MovB
	return 0; // 0xb99 Return
}


func_2970()
{
	var_40_string = "oob5Andrei1"; // 0xb9b PushS
	var_41_int = 1; // 0xb9c PushI
	SetVariable(var_40_string, var_41_int); // 0xb9d Func
	return 0; // 0xb9f Return
}


func_2717(var_476_bool, var_478_float)
{
	var_479_float = 0; var_480_cvector = CVector(0,0,0); var_481_cvector = CVector(0,0,0); var_482_cvector = CVector(0,0,0); var_483_cvector = CVector(0,0,0); var_484_cvector = CVector(0,0,0); var_485_cvector = CVector(0,0,0); var_486_bool = 0; var_487_float = 0; var_488_cvector = CVector(0,0,0); var_489_cvector = CVector(0,0,0); var_490_cvector = CVector(0,0,0); var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_bool = 0; // 0xa9d PushV
	GetPosition(var_488_cvector); // 0xa9e ObjFunc
	GetEyesHeight(var_487_float); // 0xaa0 ObjFunc
	var_495_float = GetByIndex(var_488_cvector, 1); // 0xaa2 PushE
	var_495_float = var_495_float + var_487_float; // 0xaa3 Add2
	SetByIndex(var_488_cvector, 1) = var_495_float; // 0xaa4 PopE
	GetPosition(var_489_cvector); // 0xaa5 Func
	GetEyesHeight(var_487_float); // 0xaa7 Func
	var_496_float = GetByIndex(var_489_cvector, 1); // 0xaa9 PushE
	var_496_float = var_496_float + var_487_float; // 0xaaa Add2
	SetByIndex(var_489_cvector, 1) = var_496_float; // 0xaab PopE
	var_490_cvector = var_488_cvector - var_489_cvector; // 0xaac Sub2
	var_497_float = GetByIndex(var_490_cvector, 1); // 0xaad PushE
	var_497_float = 0; // 0xaae MovI
	SetByIndex(var_490_cvector, 1) = var_497_float; // 0xaaf PopE
	var_498_int = var_490_cvector | var_490_cvector; // 0xab0 Or
	var_499_float = sqrt(var_498_int); // 0xab1 Sqrt
	var_490_cvector = var_490_cvector / var_490_cvector; // 0xab2 Div2
	var_491_cvector = -var_490_cvector; // 0xab3 Neg2
	var_500_float = var_490_cvector * var_478_float; // 0xab4 Mult
	var_501_cvector = CVector(0.0, 10.0, 0.0); // 0xab5 PushVec
	var_492_cvector = var_500_float - var_501_cvector; // 0xab6 Sub2
	var_493_cvector = var_489_cvector + var_492_cvector; // 0xab7 Add2
	IsOverrideActive(var_494_bool); // 0xab8 Func
	var_502_bool = var_494_bool; // 0xaba Push
	if(var_502_bool == 0) goto Label_2750; // 0xabb JumpB
	var_476_bool = 0; // 0xabc MovB
	return 16; // 0xabd Return
	
Label_2750:
	StopWorld(); // 0xabe Func
	CameraTransit(var_493_cvector, var_491_cvector); // 0xac0 Func
	var_503_float = GetByIndex(var_492_cvector, 0); // 0xac2 PushE
	var_504_float = GetByIndex(var_492_cvector, 2); // 0xac3 PushE
	Rotate(var_503_float, var_504_float); // 0xac4 Func
	CameraWaitForPlayFinish(); // 0xac6 Func
	ResumeWorld(); // 0xac8 Func
	var_476_bool = 1; // 0xaca MovB
	return 16; // 0xacb Return
}


func_3229()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xc9d PushV
	var_44_int = 585; // 0xc9e PushI
	var_45_int = 2; // 0xc9f PushI
	var_46_int = 531046; // 0xca0 PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0xca1 Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0xca3 PushV
	var_48_object = var_43_object; // 0xca4 Mov
	var_49_int = -1; // 0xca5 MovI
	func_3320(var_47_bool, var_48_object, var_49_int); // 0xca6 NEW_2
	return 2; // 0xca8 Return
}


func_2462(var_40_bool, var_41_cvector)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; // 0x99e PushV
	GetPosition(var_45_cvector); // 0x99f Func
	var_46_cvector = var_41_cvector - var_45_cvector; // 0x9a1 Sub2
	var_48_float = GetByIndex(var_46_cvector, 0); // 0x9a2 PushE
	var_49_float = GetByIndex(var_46_cvector, 2); // 0x9a3 PushE
	Rotate(var_48_float, var_49_float, var_47_bool); // 0x9a4 Func
	var_40_bool = var_47_bool; // 0x9a6 Mov
	return 6; // 0x9a7 Return
}


func_2976(var_118_object)
{
	var_120_string = "money 4000 is given"; // 0xba1 PushS
	Trace(var_120_string); // 0xba2 Func
	var_121_object = Obj(); var_122_int = 0; // 0xba4 PushV
	var_121_object = var_118_object; // 0xba5 Mov
	var_122_int = 4000; // 0xba6 MovI
	func_2885(var_121_object, var_122_int); // 0xba7 NEW_2
	return 0; // 0xba9 Return
}


func_2209(var_57_bool)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x8a1 PushV
	var_60_string = "player"; // 0x8a2 PushS
	FindActor(var_59_object, var_60_string); // 0x8a3 Func
	var_61_bool = var_59_object == 0; // 0x8a5 Not
	if(var_61_bool == 0) goto Label_2217; // 0x8a6 JumpB
	var_57_bool = 0; // 0x8a7 MovB
	return 2; // 0x8a8 Return
	
Label_2217:
	var_62_bool = 0; var_63_object = Obj(); // 0x8a9 PushV
	var_63_object = var_59_object; // 0x8aa Mov
	func_2472(var_63_object); // 0x8ab NEW_2
	var_57_bool = var_62_bool; // 0x8ac Mov
	return 2; // 0x8ae Return
}


func_2472(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x9a8 PushV
	GetPosition(var_39_cvector); // 0x9a9 ObjFunc
	var_40_bool = 0; var_41_cvector = CVector(0,0,0); // 0x9ab PushV
	var_41_cvector = var_39_cvector; // 0x9ac Mov
	func_2462(var_40_bool, var_41_cvector); // 0x9ad NEW_2
	var_36_bool = var_40_bool; // 0x9ae Mov
	return 2; // 0x9b0 Return
}


func_3242()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xcaa PushV
	var_67_int = 586; // 0xcab PushI
	var_68_int = 2; // 0xcac PushI
	var_69_int = 531047; // 0xcad PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0xcae Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0xcb0 PushV
	var_71_object = var_66_object; // 0xcb1 Mov
	var_72_int = 585; // 0xcb2 MovI
	func_3320(var_70_bool, var_71_object, var_72_int); // 0xcb3 NEW_2
	return 2; // 0xcb5 Return
}


func_2986()
{
	var_141_string = "playsound"; // 0xbab PushS
	var_142_string = "givemoney"; // 0xbac PushS
	TriggerWorld(var_141_string, var_142_string); // 0xbad Func
	return 0; // 0xbaf Return
}


func_2224(var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0); // 0x8b0 PushE
	var_110_float = GetByIndex(var_0_bool, 2); // 0x8b1 PushE
	RotateAsync(var_109_float, var_110_float); // 0x8b2 Func
	return 0; // 0x8b4 Return
}


func_2992()
{
	var_374_string = "oob2Andrei2"; // 0xbb1 PushS
	var_375_int = 1; // 0xbb2 PushI
	SetVariable(var_374_string, var_375_int); // 0xbb3 Func
	return 0; // 0xbb5 Return
}


func_2481(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x9b1 PushV
	IsLoaded(var_34_bool); // 0x9b2 Func
	var_32_bool = var_34_bool; // 0x9b4 Mov
	return 2; // 0x9b5 Return
}


func_179(var_2_object, var_651_string)
{
	var_652_bool = 0; // 0xb4 PushV
	func_2968(var_652_bool); // 0xb5 NEW_2
	var_653_bool = var_652_bool == 0; // 0xb7 Not
	if(var_653_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_654_bool = var_651_string == var_2_object; // 0xba Eq
	if(var_654_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_655_string = ""; var_656_bool = 0; // 0xbd PushV
	var_655_string = var_651_string; // 0xbe Mov
	var_657_string = ""; // 0xbf PushS
	var_658_bool = var_651_string == var_657_string; // 0xc0 Eq
	if(var_658_bool == 0) goto Label_196; // 0xc1 JumpB
	var_656_bool = 0; // 0xc2 MovB
	goto Label_197; // 0xc3 Jump
	
Label_197:
	func_2784(var_655_string, var_656_bool); // 0xc5 NEW_2
	var_2_object = var_651_string; // 0xc7 TMov
	return 0; // 0xc8 Return
	
Label_196:
	var_656_bool = 1; // 0xc4 MovB
}


func_2229(var_40_bool)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0; // 0x8b5 PushV
	var_45_string = "player"; // 0x8b6 PushS
	FindActor(var_43_object, var_45_string); // 0x8b7 Func
	var_46_bool = var_43_object == 0; // 0x8b9 Not
	if(var_46_bool == 0) goto Label_2237; // 0x8ba JumpB
	var_40_bool = 0; // 0x8bb MovB
	return 4; // 0x8bc Return
	
Label_2237:
	var_47_float = 0; var_48_object = Obj(); // 0x8bd PushV
	var_48_object = var_43_object; // 0x8be Mov
	func_2447(var_48_object); // 0x8bf NEW_2
	var_55_float = 90000.0; // 0x8c1 PushF
	var_56_bool = var_47_float > var_55_float; // 0x8c2 GT
	if(var_56_bool == 0) goto Label_2246; // 0x8c3 JumpB
	var_40_bool = 0; // 0x8c4 MovB
	return 4; // 0x8c5 Return
	
Label_2246:
	CanSee(var_44_bool, var_43_object); // 0x8c6 Func
	var_40_bool = var_44_bool; // 0x8c8 Mov
	return 4; // 0x8c9 Return
}


func_2486(var_123_bool, var_125_float)
{
	var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_bool = 0; var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0; // 0x9b6 PushV
	GetPosition(var_136_cvector); // 0x9b7 ObjFunc
	GetEyesHeight(var_135_float); // 0x9b9 ObjFunc
	var_144_float = GetByIndex(var_136_cvector, 1); // 0x9bb PushE
	var_144_float = var_144_float + var_135_float; // 0x9bc Add2
	SetByIndex(var_136_cvector, 1) = var_144_float; // 0x9bd PopE
	GetPosition(var_137_cvector); // 0x9be Func
	GetEyesHeight(var_135_float); // 0x9c0 Func
	var_145_float = GetByIndex(var_137_cvector, 1); // 0x9c2 PushE
	var_145_float = var_145_float + var_135_float; // 0x9c3 Add2
	SetByIndex(var_137_cvector, 1) = var_145_float; // 0x9c4 PopE
	var_138_cvector = var_136_cvector - var_137_cvector; // 0x9c5 Sub2
	var_146_float = GetByIndex(var_138_cvector, 1); // 0x9c6 PushE
	var_146_float = 0; // 0x9c7 MovI
	SetByIndex(var_138_cvector, 1) = var_146_float; // 0x9c8 PopE
	var_147_int = var_138_cvector | var_138_cvector; // 0x9c9 Or
	var_148_float = sqrt(var_147_int); // 0x9ca Sqrt
	var_138_cvector = var_138_cvector / var_138_cvector; // 0x9cb Div2
	var_139_cvector = -var_138_cvector; // 0x9cc Neg2
	var_149_float = var_138_cvector * var_125_float; // 0x9cd Mult
	var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); // 0x9ce PushV
	var_152_cvector = CVector(0.0, 1.0, 0.0); // 0x9cf PushVec
	var_151_cvector = var_139_cvector ^ var_152_cvector; // 0x9d0 Xor2
	func_2853(var_150_cvector, var_151_cvector); // 0x9d1 NEW_2
	var_158_int = 25; // 0x9d3 PushI
	var_159_float = var_150_cvector * var_158_int; // 0x9d4 Mult
	var_160_int = var_149_float + var_159_float; // 0x9d5 Add
	var_161_cvector = CVector(0.0, 10.0, 0.0); // 0x9d6 PushVec
	var_140_cvector = var_160_int - var_161_cvector; // 0x9d7 Sub2
	var_141_cvector = var_137_cvector + var_140_cvector; // 0x9d8 Add2
	IsOverrideActive(var_142_bool); // 0x9d9 Func
	var_162_bool = var_142_bool; // 0x9db Push
	if(var_162_bool == 0) goto Label_2527; // 0x9dc JumpB
	var_123_bool = 0; // 0x9dd MovB
	return 18; // 0x9de Return
	
Label_2527:
	StopWorld(); // 0x9df Func
	CameraTransit(var_141_cvector, var_139_cvector); // 0x9e1 Func
	var_163_float = GetByIndex(var_140_cvector, 0); // 0x9e3 PushE
	var_164_float = GetByIndex(var_140_cvector, 2); // 0x9e4 PushE
	Rotate(var_163_float, var_164_float); // 0x9e5 Func
	var_165_bool = 0; // 0x9e7 PushV
	func_2968(var_165_bool); // 0x9e8 NEW_2
	if(var_165_bool == 0) goto Label_2540; // 0x9ea JumpB
	goto Label_2548; // 0x9eb Jump
	
Label_2548:
	CameraWaitForPlayFinish(); // 0x9f4 Func
	ResumeWorld(); // 0x9f6 Func
	var_123_bool = 1; // 0x9f8 MovB
	return 18; // 0x9f9 Return
	
Label_2540:
	var_166_string = "head"; // 0x9ec PushS
	HasAnimationTrack(var_143_bool, var_166_string); // 0x9ed Func
	var_167_bool = var_143_bool; // 0x9ef Push
	if(var_167_bool == 0) goto Label_2548; // 0x9f0 JumpB
	var_168_string = "head"; // 0x9f1 PushS
	LookAsyncCamera(var_168_string); // 0x9f2 Func
}


func_3255()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0xcb7 PushV
	var_107_int = 587; // 0xcb8 PushI
	var_108_int = 2; // 0xcb9 PushI
	var_109_int = 531051; // 0xcba PushI
	CreateDiaryEntry(var_106_object, var_107_int, var_108_int, var_109_int); // 0xcbb Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0xcbd PushV
	var_111_object = var_106_object; // 0xcbe Mov
	var_112_int = 585; // 0xcbf MovI
	func_3320(var_110_bool, var_111_object, var_112_int); // 0xcc0 NEW_2
	return 2; // 0xcc2 Return
}


func_2998()
{
	var_40_string = "b2q03"; // 0xbb7 PushS
	var_41_int = 1; // 0xbb8 PushI
	SetVariable(var_40_string, var_41_int); // 0xbb9 Func
	func_3229(); // 0xbbc NEW_2
	func_3242(); // 0xbbf NEW_2
	var_73_bool = 0; var_74_string = ""; var_75_string = ""; // 0xbc1 PushV
	var_74_string = "quest_b2_03"; // 0xbc2 MovS
	var_75_string = "place_maria"; // 0xbc3 MovS
	func_2904(var_73_bool, var_74_string, var_75_string); // 0xbc4 NEW_2
	return 0; // 0xbc6 Return
}


func_1732(var_0_bool, var_1_object, var_2_object, var_3_object, var_541_object, var_542_object)
{
	var_0_bool = var_542_object; // 0x6c5 TMov
	var_1_object = var_541_object; // 0x6c6 TMov
	var_3_object = 0; // 0x6c7 TMovB
	var_547_int = 1; // 0x6c8 PushI
	if(var_547_int == 0) goto Label_1779; // 0x6c9 JumpB
	var_548_string = ""; // 0x6ca PushV
	var_548_string = "Smile"; // 0x6cb MovS
	func_1809(var_542_object, var_548_string); // 0x6cc NEW_2
	var_556_int = 518917; // 0x6ce PushI
	SetMessage(var_556_int); // 0x6cf TObjFunc
	ClearReplies(); // 0x6d1 TObjFunc
	var_557_bool = 0; // 0x6d3 PushV
	var_557_bool = 0; // 0x6d4 MovB
	var_558_bool = 0; var_559_object = Obj(); // 0x6d5 PushV
	var_559_object = var_1_object; // 0x6d6 MovT
	func_3194(var_559_object); // 0x6d7 NEW_2
	if(var_558_bool == 0) goto Label_1760; // 0x6d9 JumpB
	var_564_bool = 0; var_565_object = Obj(); // 0x6da PushV
	var_565_object = var_1_object; // 0x6db MovT
	func_3206(var_565_object); // 0x6dc NEW_2
	if(var_564_bool == 0) goto Label_1760; // 0x6de JumpB
	var_557_bool = 1; // 0x6df MovB
	
Label_1760:
	if(var_557_bool == 0) goto Label_1766; // 0x6e0 JumpB
	var_570_int = 518919; // 0x6e1 PushI
	var_571_int = 20031; // 0x6e2 PushI
	var_572_int = 20030; // 0x6e3 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x6e4 TObjFunc
	
Label_1766:
	var_573_int = 531963; // 0x6e6 PushI
	var_574_int = -1; // 0x6e7 PushI
	var_575_int = 33368; // 0x6e8 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x6e9 TObjFunc
	var_576_int = 518918; // 0x6eb PushI
	var_577_int = -1; // 0x6ec PushI
	var_578_int = 20029; // 0x6ed PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x6ee TObjFunc
	goto Label_1779; // 0x6f0 Jump
	
Label_1779:
	var_579_bool = 0; // 0x6f3 PushV
	func_2968(var_579_bool); // 0x6f4 NEW_2
	if(var_579_bool == 0) goto Label_1794; // 0x6f6 JumpB
	
Label_1783:
	lshWaitForAnimEnd(); // 0x6f7 Func
	var_580_object = var_3_object; // 0x6f9 PushT
	if(var_580_object == 0) goto Label_1788; // 0x6fa JumpB
	goto Label_1793; // 0x6fb Jump
	
Label_1793:
	goto Label_1808; // 0x701 Jump
	
Label_1808:
	return 0; // 0x710 Return
	
Label_1788:
	var_581_string = ""; // 0x6fc PushV
	var_581_string = var_2_object; // 0x6fd MovT
	func_2768(var_581_string); // 0x6fe NEW_2
	goto Label_1783; // 0x700 Jump
	
Label_1794:
	var_582_string = "all"; // 0x702 PushS
	var_583_string = "idle"; // 0x703 PushS
	PlayAnimation(var_582_string, var_583_string); // 0x704 Func
	
Label_1798:
	WaitForAnimEnd(); // 0x706 Func
	var_584_object = var_3_object; // 0x708 PushT
	if(var_584_object == 0) goto Label_1803; // 0x709 JumpB
	goto Label_1808; // 0x70a Jump
	
Label_1803:
	var_585_string = "all"; // 0x70b PushS
	var_586_string = "idle"; // 0x70c PushS
	PlayAnimation(var_585_string, var_586_string); // 0x70d Func
	goto Label_1798; // 0x70f Jump
}


func_3268()
{
	var_205_object = Obj(); var_206_object = Obj(); // 0xcc4 PushV
	var_207_int = 592; // 0xcc5 PushI
	var_208_int = 2; // 0xcc6 PushI
	var_209_int = 531080; // 0xcc7 PushI
	CreateDiaryEntry(var_206_object, var_207_int, var_208_int, var_209_int); // 0xcc8 Func
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0; // 0xcca PushV
	var_211_object = var_206_object; // 0xccb Mov
	var_212_int = 585; // 0xccc MovI
	func_3320(var_210_bool, var_211_object, var_212_int); // 0xccd NEW_2
	return 2; // 0xccf Return
}


func_1988(var_0_bool, var_749_int, var_750_object)
{
	var_752_object = Obj(); var_753_bool = 0; var_754_int = 0; var_755_bool = 0; var_756_object = Obj(); var_757_bool = 0; var_758_int = 0; var_759_bool = 0; // 0x7c4 PushV
	var_0_bool = var_750_object; // 0x7c5 TMov
	var_760_bool = 0; var_761_object = Obj(); var_762_float = 0; // 0x7c6 PushV
	var_761_object = var_750_object; // 0x7c7 Mov
	var_762_float = 70.0; // 0x7c8 MovF
	func_2486(var_761_object, var_762_float); // 0x7c9 NEW_2
	var_763_bool = var_760_bool == 0; // 0x7cb Not
	if(var_763_bool == 0) goto Label_1999; // 0x7cc JumpB
	var_749_int = -2; // 0x7cd MovI
	return 8; // 0x7ce Return
	
Label_1999:
	CreateDialog(var_756_object); // 0x7cf Func
	var_764_int = 0; // 0x7d1 PushV
	func_2962(var_764_int); // 0x7d2 NEW_2
	SetNPCName(var_764_int); // 0x7d4 ObjFunc
	var_765_int = 0; // 0x7d6 PushV
	func_2960(var_765_int); // 0x7d7 NEW_2
	SetNPCDescription(var_765_int); // 0x7d9 ObjFunc
	var_766_string = ""; // 0x7db PushV
	func_2964(var_766_string); // 0x7dc NEW_2
	SetPhoto(var_766_string); // 0x7de ObjFunc
	var_767_string = ""; // 0x7e0 PushV
	func_2966(var_767_string); // 0x7e1 NEW_2
	SetPhoto2(var_767_string); // 0x7e3 ObjFunc
	var_768_int = 0; // 0x7e5 PushV
	func_3444(var_768_int); // 0x7e6 NEW_2
	SetPlayerName(var_768_int); // 0x7e8 ObjFunc
	var_758_int = -1; // 0x7ea MovI
	IsOverrideActive(var_757_bool); // 0x7eb Func
	var_769_bool = var_757_bool; // 0x7ed Push
	if(var_769_bool == 0) goto Label_2033; // 0x7ee JumpB
	var_749_int = -2; // 0x7ef MovI
	return 8; // 0x7f0 Return
	
Label_2033:
	DoDialog(var_756_object); // 0x7f1 Func
	var_770_bool = 0; var_771_object = Obj(); // 0x7f3 PushV
	var_772_object = Obj(); // 0x7f4 PushV
	func_2847(var_772_object); // 0x7f5 NEW_2
	var_771_object = var_772_object; // 0x7f6 Mov
	func_2571(var_770_bool, var_771_object); // 0x7f8 NEW_2
	var_773_object = Obj(); var_774_object = Obj(); // 0x7fa PushV
	var_773_object = var_750_object; // 0x7fb Mov
	var_774_object = var_756_object; // 0x7fc Mov
	TaskCall(12); // 0x7fd TaskCall
	func_2069(var_775_object, var_776_object, var_777_string, var_778_bool, var_773_object, var_774_object); // 0x7fe NEW_2
	TaskReturn(); // 0x7ff TaskReturn
	IsDialogEnd(var_759_bool); // 0x801 ObjFunc
	
Label_2051:
	var_803_bool = var_759_bool == 0; // 0x803 Not
	if(var_803_bool == 0) goto Label_2058; // 0x804 JumpB
	sync(); // 0x805 Func
	IsDialogEnd(var_759_bool); // 0x807 ObjFunc
	goto Label_2051; // 0x809 Jump
	
Label_2058:
	var_804_object = Obj(); // 0x80a PushV
	var_804_object = var_750_object; // 0x80b Mov
	func_2554(); // 0x80c NEW_2
	StopDialog(var_756_object); // 0x80e Func
	GetReturnValue(var_758_int); // 0x810 ObjFunc
	var_749_int = var_758_int; // 0x812 Mov
	return 8; // 0x813 Return
}


func_3015()
{
	var_87_object = Obj(); var_88_int = 0; var_89_object = Obj(); var_90_int = 0; // 0xbc7 PushV
	var_91_object = Obj(); // 0xbc8 PushV
	func_3348(var_91_object); // 0xbc9 NEW_2
	var_89_object = var_91_object; // 0xbca Mov
	var_98_string = "b2q03GoodShop"; // 0xbcc PushS
	var_99_string = "pt_b2q03_good_shop"; // 0xbcd PushS
	var_100_int = 3; // 0xbce PushI
	var_101_int = 531061; // 0xbcf PushI
	var_102_float = 0; // 0xbd0 PushV
	func_2916(var_102_float); // 0xbd1 NEW_2
	AddMark(var_98_string, var_99_string, var_100_int, var_101_int, var_102_float); // 0xbd3 ObjFunc
	func_3255(); // 0xbd6 NEW_2
	var_113_string = "grass_brown_tvir"; // 0xbd8 PushS
	var_114_int = 10; // 0xbd9 PushI
	RemoveItemByType(var_90_int, var_113_string, var_114_int); // 0xbda ObjFunc
	var_115_bool = 0; var_116_string = ""; var_117_string = ""; // 0xbdc PushV
	var_116_string = "quest_b2_03"; // 0xbdd MovS
	var_117_string = "completed"; // 0xbde MovS
	func_2904(var_115_bool, var_116_string, var_117_string); // 0xbdf NEW_2
	return 4; // 0xbe1 Return
}


func_2251()
{
	var_807_float = 0; var_808_float = 0; // 0x8cb PushV
	var_809_int = 8; // 0x8cc PushI
	var_810_int = 16; // 0x8cd PushI
	rand(var_808_float, var_809_int, var_810_int); // 0x8ce Func
	var_811_int = 10; // 0x8d0 PushI
	SetTimer(var_811_int, var_808_float); // 0x8d1 Func
	return 2; // 0x8d3 Return
}


func_2764()
{
	CameraSwitchToNormal(); // 0xacd Func
	return 0; // 0xacf Return
}


func_2768(var_303_string)
{
	var_304_bool = 0; var_305_float = 0; var_306_float = 0; var_307_bool = 0; var_308_float = 0; var_309_float = 0; // 0xad0 PushV
	lshHasAnimation(var_307_bool, var_303_string); // 0xad1 Func
	var_310_bool = var_307_bool; // 0xad3 Push
	if(var_310_bool == 0) goto Label_2779; // 0xad4 JumpB
	lshGetAnimTimes(var_303_string, var_308_float, var_309_float); // 0xad5 Func
	var_311_bool = 0; // 0xad7 PushB
	lshPlayAnimation(var_308_float, var_309_float, var_311_bool); // 0xad8 Func
	goto Label_2783; // 0xada Jump
	
Label_2783:
	return 6; // 0xadf Return
	
Label_2779:
	var_312_string = "Can't find lsh animation : "; // 0xadb PushS
	var_313_int = var_312_string + var_303_string; // 0xadc Add
	Trace(var_313_int); // 0xadd Func
}


func_3281()
{
	var_197_object = Obj(); var_198_object = Obj(); // 0xcd1 PushV
	var_199_int = 591; // 0xcd2 PushI
	var_200_int = 2; // 0xcd3 PushI
	var_201_int = 531079; // 0xcd4 PushI
	CreateDiaryEntry(var_198_object, var_199_int, var_200_int, var_201_int); // 0xcd5 Func
	var_202_bool = 0; var_203_object = Obj(); var_204_int = 0; // 0xcd7 PushV
	var_203_object = var_198_object; // 0xcd8 Mov
	var_204_int = 588; // 0xcd9 MovI
	func_3320(var_202_bool, var_203_object, var_204_int); // 0xcda NEW_2
	return 2; // 0xcdc Return
}


func_2260()
{
	var_806_int = 10; // 0x8d4 PushI
	KillTimer(var_806_int); // 0x8d5 Func
	return 0; // 0x8d7 Return
}


func_3294()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0xcde PushV
	var_153_int = 612; // 0xcdf PushI
	var_154_int = 2; // 0xce0 PushI
	var_155_int = 531559; // 0xce1 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0xce2 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0xce4 PushV
	var_157_object = var_152_object; // 0xce5 Mov
	var_158_int = 588; // 0xce6 MovI
	func_3320(var_156_bool, var_157_object, var_158_int); // 0xce7 NEW_2
	return 2; // 0xce9 Return
}


func_2784(var_284_string, var_285_bool)
{
	var_288_bool = 0; var_289_float = 0; var_290_float = 0; var_291_bool = 0; var_292_float = 0; var_293_float = 0; // 0xae0 PushV
	lshHasAnimation(var_291_bool, var_284_string); // 0xae1 Func
	var_294_bool = var_291_bool; // 0xae3 Push
	if(var_294_bool == 0) goto Label_2794; // 0xae4 JumpB
	lshGetAnimTimes(var_284_string, var_292_float, var_293_float); // 0xae5 Func
	lshPlayAnimation(var_292_float, var_293_float, var_285_bool); // 0xae7 Func
	goto Label_2798; // 0xae9 Jump
	
Label_2798:
	return 6; // 0xaee Return
	
Label_2794:
	var_295_string = "Can't find lsh animation : "; // 0xaea PushS
	var_296_int = var_295_string + var_284_string; // 0xaeb Add
	Trace(var_296_int); // 0xaec Func
}


func_3043()
{
	var_378_string = "b2AndreiVisit"; // 0xbe4 PushS
	var_379_int = 1; // 0xbe5 PushI
	SetVariable(var_378_string, var_379_int); // 0xbe6 Func
	return 0; // 0xbe8 Return
}


func_3049()
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0; // 0xbea PushV
	var_164_object = Obj(); // 0xbeb PushV
	func_3348(var_164_object); // 0xbec NEW_2
	var_161_object = var_164_object; // 0xbed Mov
	var_162_string = "pt_b2q03_good_shop"; // 0xbef MovS
	var_163_float = 2; // 0xbf0 MovI
	func_3365(var_161_object, var_162_string, var_163_float); // 0xbf1 NEW_2
	var_184_object = Obj(); // 0xbf3 PushV
	func_3348(var_184_object); // 0xbf4 NEW_2
	ShowMap(var_184_object); // 0xbf6 ObjFunc
	return 0; // 0xbf8 Return
}


func_3307(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xceb PushV
	GetDiaryRoot(var_58_object); // 0xcec Func
	var_59_bool = var_58_object == 0; // 0xcee Not
	if(var_59_bool == 0) goto Label_3317; // 0xcef JumpB
	var_60_string = "Can't retrieve diary root"; // 0xcf0 PushS
	Trace(var_60_string); // 0xcf1 Func
	var_56_object = 0; // 0xcf3 MovB
	return 2; // 0xcf4 Return
	
Label_3317:
	var_56_object = var_58_object; // 0xcf5 Mov
	return 2; // 0xcf6 Return
}


func_2799(var_217_bool, var_218_string)
{
	var_219_bool = 0; var_220_bool = 0; // 0xaef PushV
	var_221_bool = 0; // 0xaf0 PushV
	func_2968(var_221_bool); // 0xaf1 NEW_2
	if(var_221_bool == 0) goto Label_2812; // 0xaf3 JumpB
	lshHasSpeech(var_220_bool, var_218_string); // 0xaf4 Func
	var_222_bool = var_220_bool; // 0xaf6 Push
	if(var_222_bool == 0) goto Label_2812; // 0xaf7 JumpB
	lshPlaySpeech(var_218_string); // 0xaf8 Func
	var_217_bool = 1; // 0xafa MovB
	return 2; // 0xafb Return
	
Label_2812:
	var_217_bool = 0; // 0xafc MovB
	return 2; // 0xafd Return
}


func_3320(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0xcf8 PushV
	var_56_object = Obj(); // 0xcf9 PushV
	func_3307(var_56_object); // 0xcfa NEW_2
	var_53_object = var_56_object; // 0xcfb Mov
	Find(var_49_int, var_54_object); // 0xcfd ObjFunc
	var_61_bool = var_54_object == 0; // 0xcff Not
	if(var_61_bool == 0) goto Label_3335; // 0xd00 JumpB
	var_62_string = "Can't find diary parent with id: "; // 0xd01 PushS
	var_63_int = var_62_string + var_49_int; // 0xd02 Add
	Trace(var_63_int); // 0xd03 Func
	var_47_bool = 0; // 0xd05 MovB
	return 6; // 0xd06 Return
	
Label_3335:
	AddChild(var_48_object); // 0xd07 ObjFunc
	var_64_int = 7; // 0xd09 PushI
	SendWorldWndMessage(var_64_int); // 0xd0a Func
	GetCategory(var_55_int); // 0xd0c ObjFunc
	SetDiarySection(var_55_int); // 0xd0e Func
	var_47_bool = 0; // 0xd10 MovB
	return 6; // 0xd11 Return
}


func_3065()
{
	var_195_string = "b2q03_1"; // 0xbfa PushS
	var_196_int = 2; // 0xbfb PushI
	SetVariable(var_195_string, var_196_int); // 0xbfc Func
	func_3281(); // 0xbff NEW_2
	func_3268(); // 0xc02 NEW_2
	return 0; // 0xc04 Return
}


func_2554()
{
	var_321_bool = 0; var_322_bool = 0; // 0x9fa PushV
	CameraSwitchToNormal(); // 0x9fb Func
	var_323_bool = 0; // 0x9fd PushV
	func_2968(var_323_bool); // 0x9fe NEW_2
	if(var_323_bool == 0) goto Label_2562; // 0xa00 JumpB
	goto Label_2570; // 0xa01 Jump
	
Label_2570:
	return 2; // 0xa0a Return
	
Label_2562:
	var_324_string = "head"; // 0xa02 PushS
	HasAnimationTrack(var_322_bool, var_324_string); // 0xa03 Func
	var_325_bool = var_322_bool; // 0xa05 Push
	if(var_325_bool == 0) goto Label_2570; // 0xa06 JumpB
	var_326_string = "head"; // 0xa07 PushS
	UnlookAsync(var_326_string); // 0xa08 Func
}


func_251(var_0_bool, var_688_int, var_689_object)
{
	var_691_object = Obj(); var_692_bool = 0; var_693_int = 0; var_694_bool = 0; var_695_object = Obj(); var_696_bool = 0; var_697_int = 0; var_698_bool = 0; // 0xfb PushV
	var_0_bool = var_689_object; // 0xfc TMov
	var_699_bool = 0; var_700_object = Obj(); var_701_float = 0; // 0xfd PushV
	var_700_object = var_689_object; // 0xfe Mov
	var_701_float = 70.0; // 0xff MovF
	func_2486(var_700_object, var_701_float); // 0x100 NEW_2
	var_702_bool = var_699_bool == 0; // 0x102 Not
	if(var_702_bool == 0) goto Label_262; // 0x103 JumpB
	var_688_int = -2; // 0x104 MovI
	return 8; // 0x105 Return
	
Label_262:
	CreateDialog(var_695_object); // 0x106 Func
	var_703_int = 0; // 0x108 PushV
	func_2962(var_703_int); // 0x109 NEW_2
	SetNPCName(var_703_int); // 0x10b ObjFunc
	var_704_int = 0; // 0x10d PushV
	func_2960(var_704_int); // 0x10e NEW_2
	SetNPCDescription(var_704_int); // 0x110 ObjFunc
	var_705_string = ""; // 0x112 PushV
	func_2964(var_705_string); // 0x113 NEW_2
	SetPhoto(var_705_string); // 0x115 ObjFunc
	var_706_string = ""; // 0x117 PushV
	func_2966(var_706_string); // 0x118 NEW_2
	SetPhoto2(var_706_string); // 0x11a ObjFunc
	var_707_int = 0; // 0x11c PushV
	func_3444(var_707_int); // 0x11d NEW_2
	SetPlayerName(var_707_int); // 0x11f ObjFunc
	var_697_int = -1; // 0x121 MovI
	IsOverrideActive(var_696_bool); // 0x122 Func
	var_708_bool = var_696_bool; // 0x124 Push
	if(var_708_bool == 0) goto Label_296; // 0x125 JumpB
	var_688_int = -2; // 0x126 MovI
	return 8; // 0x127 Return
	
Label_296:
	DoDialog(var_695_object); // 0x128 Func
	var_709_bool = 0; var_710_object = Obj(); // 0x12a PushV
	var_711_object = Obj(); // 0x12b PushV
	func_2847(var_711_object); // 0x12c NEW_2
	var_710_object = var_711_object; // 0x12d Mov
	func_2571(var_709_bool, var_710_object); // 0x12f NEW_2
	var_712_object = Obj(); var_713_object = Obj(); // 0x131 PushV
	var_712_object = var_689_object; // 0x132 Mov
	var_713_object = var_695_object; // 0x133 Mov
	TaskCall(4); // 0x134 TaskCall
	func_332(var_714_object, var_715_object, var_716_string, var_717_bool, var_712_object, var_713_object); // 0x135 NEW_2
	TaskReturn(); // 0x136 TaskReturn
	IsDialogEnd(var_698_bool); // 0x138 ObjFunc
	
Label_314:
	var_745_bool = var_698_bool == 0; // 0x13a Not
	if(var_745_bool == 0) goto Label_321; // 0x13b JumpB
	sync(); // 0x13c Func
	IsDialogEnd(var_698_bool); // 0x13e ObjFunc
	goto Label_314; // 0x140 Jump
	
Label_321:
	var_746_object = Obj(); // 0x141 PushV
	var_746_object = var_689_object; // 0x142 Mov
	func_2554(); // 0x143 NEW_2
	StopDialog(var_695_object); // 0x145 Func
	GetReturnValue(var_697_int); // 0x147 ObjFunc
	var_688_int = var_697_int; // 0x149 Mov
	return 8; // 0x14a Return
}


func_2814()
{
	var_35_bool = 0; // 0xafe PushV
	func_2968(var_35_bool); // 0xaff NEW_2
	if(var_35_bool == 0) goto Label_2820; // 0xb01 JumpB
	lshStopSpeech(); // 0xb02 Func
	
Label_2820:
	return 0; // 0xb04 Return
}


