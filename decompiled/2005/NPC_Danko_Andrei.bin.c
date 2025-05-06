task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x9b PushI
	if(var_48_int == 0) goto Label_195; // 0x9c JumpB
	func_5534(); // 0x9e NEW_2
	var_50_int = 34233; // 0xa0 PushI
	var_51_bool = var_46_bool == var_50_int; // 0xa1 Eq
	if(var_51_bool == 0) goto Label_183; // 0xa2 JumpB
	var_52_string = ""; // 0xa3 PushV
	var_52_string = "Neutral"; // 0xa4 MovS
	func_132(var_47_cvector, var_52_string); // 0xa5 NEW_2
	var_69_int = 532762; // 0xa7 PushI
	SetMessage(var_69_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_70_int = 532763; // 0xac PushI
	var_71_int = -1; // 0xad PushI
	var_72_int = 34234; // 0xae PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xaf TObjFunc
	var_73_int = 533665; // 0xb1 PushI
	var_74_int = -1; // 0xb2 PushI
	var_75_int = 35197; // 0xb3 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_76_bool = 0; // 0xb8 PushV
	func_5708(var_76_bool); // 0xb9 NEW_2
	if(var_76_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x16b PushI
	if(var_48_int == 0) goto Label_477; // 0x16c JumpB
	func_5534(); // 0x16e NEW_2
	var_50_int = 37354; // 0x170 PushI
	var_51_bool = var_46_bool == var_50_int; // 0x171 Eq
	if(var_51_bool == 0) goto Label_396; // 0x172 JumpB
	var_52_string = ""; // 0x173 PushV
	var_52_string = "What"; // 0x174 MovS
	func_340(var_47_cvector, var_52_string); // 0x175 NEW_2
	var_69_int = 535668; // 0x177 PushI
	SetMessage(var_69_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_70_int = 535669; // 0x17c PushI
	var_71_int = 42112; // 0x17d PushI
	var_72_int = 37355; // 0x17e PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x17f TObjFunc
	var_73_int = 540002; // 0x181 PushI
	var_74_int = -1; // 0x182 PushI
	var_75_int = 41973; // 0x183 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x184 TObjFunc
	var_76_int = 540201; // 0x186 PushI
	var_77_int = -1; // 0x187 PushI
	var_78_int = 42179; // 0x188 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_79_int = 42112; // 0x18c PushI
	var_80_bool = var_46_bool == var_79_int; // 0x18d Eq
	if(var_80_bool == 0) goto Label_419; // 0x18e JumpB
	var_81_string = ""; // 0x18f PushV
	var_81_string = "What"; // 0x190 MovS
	func_340(var_47_cvector, var_81_string); // 0x191 NEW_2
	var_82_int = 540140; // 0x193 PushI
	SetMessage(var_82_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_83_int = 540203; // 0x198 PushI
	var_84_int = 42182; // 0x199 PushI
	var_85_int = 42181; // 0x19a PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x19b TObjFunc
	var_86_int = 540211; // 0x19d PushI
	var_87_int = 42191; // 0x19e PushI
	var_88_int = 42189; // 0x19f PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_89_int = 42182; // 0x1a3 PushI
	var_90_bool = var_46_bool == var_89_int; // 0x1a4 Eq
	if(var_90_bool == 0) goto Label_442; // 0x1a5 JumpB
	var_91_string = ""; // 0x1a6 PushV
	var_91_string = "What"; // 0x1a7 MovS
	func_340(var_47_cvector, var_91_string); // 0x1a8 NEW_2
	var_92_int = 540204; // 0x1aa PushI
	SetMessage(var_92_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_93_int = 540210; // 0x1af PushI
	var_94_int = 42191; // 0x1b0 PushI
	var_95_int = 42188; // 0x1b1 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x1b2 TObjFunc
	var_96_int = 540212; // 0x1b4 PushI
	var_97_int = 42191; // 0x1b5 PushI
	var_98_int = 42190; // 0x1b6 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_99_int = 42191; // 0x1ba PushI
	var_100_bool = var_46_bool == var_99_int; // 0x1bb Eq
	if(var_100_bool == 0) goto Label_465; // 0x1bc JumpB
	var_101_string = ""; // 0x1bd PushV
	var_101_string = "What"; // 0x1be MovS
	func_340(var_47_cvector, var_101_string); // 0x1bf NEW_2
	var_102_int = 540213; // 0x1c1 PushI
	SetMessage(var_102_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_103_int = 540214; // 0x1c6 PushI
	var_104_int = -1; // 0x1c7 PushI
	var_105_int = 42194; // 0x1c8 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x1c9 TObjFunc
	var_106_int = 540215; // 0x1cb PushI
	var_107_int = -1; // 0x1cc PushI
	var_108_int = 42195; // 0x1cd PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_3_string = 1; // 0x1d1 TMovB
	var_109_bool = 0; // 0x1d2 PushV
	func_5708(var_109_bool); // 0x1d3 NEW_2
	if(var_109_bool == 0) goto Label_473; // 0x1d5 JumpB
	lshStopAnimation(); // 0x1d6 Func
	goto Label_475; // 0x1d8 Jump
	
Label_475:
	return 0; // 0x1db Return
	
Label_473:
	StopAnimation(); // 0x1d9 Func
	
Label_477:
	return 0; // 0x1dd Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x28a PushI
	if(var_48_int == 0) goto Label_828; // 0x28b JumpB
	func_5534(); // 0x28d NEW_2
	var_50_int = 224; // 0x28f PushI
	var_51_bool = var_46_bool == var_50_int; // 0x290 Eq
	if(var_51_bool == 0) goto Label_688; // 0x291 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x292 PushV
	var_52_object = var_1_object; // 0x293 MovT
	var_53_object = var_0_object; // 0x294 MovT
	func_5888(); // 0x295 NEW_2
	var_56_string = ""; // 0x297 PushV
	var_56_string = "Neutral"; // 0x298 MovS
	func_627(var_47_cvector, var_56_string); // 0x299 NEW_2
	var_73_int = 500187; // 0x29b PushI
	SetMessage(var_73_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_74_int = 500190; // 0x2a0 PushI
	var_75_int = 228; // 0x2a1 PushI
	var_76_int = 227; // 0x2a2 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x2a3 TObjFunc
	var_77_int = 533667; // 0x2a5 PushI
	var_78_int = 35200; // 0x2a6 PushI
	var_79_int = 35199; // 0x2a7 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x2a8 TObjFunc
	var_80_int = 500188; // 0x2aa PushI
	var_81_int = 226; // 0x2ab PushI
	var_82_int = 225; // 0x2ac PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_83_int = 226; // 0x2b0 PushI
	var_84_bool = var_46_bool == var_83_int; // 0x2b1 Eq
	if(var_84_bool == 0) goto Label_711; // 0x2b2 JumpB
	var_85_string = ""; // 0x2b3 PushV
	var_85_string = "What"; // 0x2b4 MovS
	func_627(var_47_cvector, var_85_string); // 0x2b5 NEW_2
	var_86_int = 500189; // 0x2b7 PushI
	SetMessage(var_86_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_87_int = 500192; // 0x2bc PushI
	var_88_int = 233; // 0x2bd PushI
	var_89_int = 229; // 0x2be PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x2bf TObjFunc
	var_90_int = 500193; // 0x2c1 PushI
	var_91_int = -1; // 0x2c2 PushI
	var_92_int = 230; // 0x2c3 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_93_int = 233; // 0x2c7 PushI
	var_94_bool = var_46_bool == var_93_int; // 0x2c8 Eq
	if(var_94_bool == 0) goto Label_729; // 0x2c9 JumpB
	var_95_string = ""; // 0x2ca PushV
	var_95_string = "Smile"; // 0x2cb MovS
	func_627(var_47_cvector, var_95_string); // 0x2cc NEW_2
	var_96_int = 500196; // 0x2ce PushI
	SetMessage(var_96_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_97_int = 500203; // 0x2d3 PushI
	var_98_int = -1; // 0x2d4 PushI
	var_99_int = 241; // 0x2d5 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x2d6 TObjFunc
	return 0; // 0x2d8 Return
	
Label_729:
	var_100_int = 35200; // 0x2d9 PushI
	var_101_bool = var_46_bool == var_100_int; // 0x2da Eq
	if(var_101_bool == 0) goto Label_752; // 0x2db JumpB
	var_102_string = ""; // 0x2dc PushV
	var_102_string = "What"; // 0x2dd MovS
	func_627(var_47_cvector, var_102_string); // 0x2de NEW_2
	var_103_int = 533668; // 0x2e0 PushI
	SetMessage(var_103_int); // 0x2e1 TObjFunc
	ClearReplies(); // 0x2e3 TObjFunc
	var_104_int = 533669; // 0x2e5 PushI
	var_105_int = 228; // 0x2e6 PushI
	var_106_int = 35201; // 0x2e7 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x2e8 TObjFunc
	var_107_int = 533670; // 0x2ea PushI
	var_108_int = 228; // 0x2eb PushI
	var_109_int = 35202; // 0x2ec PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x2ed TObjFunc
	return 0; // 0x2ef Return
	
Label_752:
	var_110_int = 228; // 0x2f0 PushI
	var_111_bool = var_46_bool == var_110_int; // 0x2f1 Eq
	if(var_111_bool == 0) goto Label_775; // 0x2f2 JumpB
	var_112_string = ""; // 0x2f3 PushV
	var_112_string = "What"; // 0x2f4 MovS
	func_627(var_47_cvector, var_112_string); // 0x2f5 NEW_2
	var_113_int = 500191; // 0x2f7 PushI
	SetMessage(var_113_int); // 0x2f8 TObjFunc
	ClearReplies(); // 0x2fa TObjFunc
	var_114_int = 500197; // 0x2fc PushI
	var_115_int = 236; // 0x2fd PushI
	var_116_int = 234; // 0x2fe PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x2ff TObjFunc
	var_117_int = 500198; // 0x301 PushI
	var_118_int = 9260; // 0x302 PushI
	var_119_int = 235; // 0x303 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x304 TObjFunc
	return 0; // 0x306 Return
	
Label_775:
	var_120_int = 9260; // 0x307 PushI
	var_121_bool = var_46_bool == var_120_int; // 0x308 Eq
	if(var_121_bool == 0) goto Label_798; // 0x309 JumpB
	var_122_string = ""; // 0x30a PushV
	var_122_string = "Smile"; // 0x30b MovS
	func_627(var_47_cvector, var_122_string); // 0x30c NEW_2
	var_123_int = 508437; // 0x30e PushI
	SetMessage(var_123_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_124_int = 508438; // 0x313 PushI
	var_125_int = -1; // 0x314 PushI
	var_126_int = 9261; // 0x315 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x316 TObjFunc
	var_127_int = 533671; // 0x318 PushI
	var_128_int = 233; // 0x319 PushI
	var_129_int = 35205; // 0x31a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x31b TObjFunc
	return 0; // 0x31d Return
	
Label_798:
	var_130_int = 236; // 0x31e PushI
	var_131_bool = var_46_bool == var_130_int; // 0x31f Eq
	if(var_131_bool == 0) goto Label_816; // 0x320 JumpB
	var_132_string = ""; // 0x321 PushV
	var_132_string = "Smile"; // 0x322 MovS
	func_627(var_47_cvector, var_132_string); // 0x323 NEW_2
	var_133_int = 500199; // 0x325 PushI
	SetMessage(var_133_int); // 0x326 TObjFunc
	ClearReplies(); // 0x328 TObjFunc
	var_134_int = 500200; // 0x32a PushI
	var_135_int = 233; // 0x32b PushI
	var_136_int = 237; // 0x32c PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_3_string = 1; // 0x330 TMovB
	var_137_bool = 0; // 0x331 PushV
	func_5708(var_137_bool); // 0x332 NEW_2
	if(var_137_bool == 0) goto Label_824; // 0x334 JumpB
	lshStopAnimation(); // 0x335 Func
	goto Label_826; // 0x337 Jump
	
Label_826:
	return 0; // 0x33a Return
	
Label_824:
	StopAnimation(); // 0x338 Func
	
Label_828:
	return 0; // 0x33c Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x439 PushI
	if(var_48_int == 0) goto Label_2042; // 0x43a JumpB
	func_5534(); // 0x43c NEW_2
	var_50_int = 7899; // 0x43e PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x43f Eq
	if(var_51_bool == 0) goto Label_1104; // 0x440 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x441 PushV
	var_52_object = var_1_object; // 0x442 MovT
	var_53_object = var_0_object; // 0x443 MovT
	func_5748(); // 0x444 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x446 PushV
	var_56_object = var_1_object; // 0x447 MovT
	var_57_object = var_0_object; // 0x448 MovT
	func_5801(); // 0x449 NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x44b PushV
	var_99_object = var_1_object; // 0x44c MovT
	var_100_object = var_0_object; // 0x44d MovT
	func_5930(); // 0x44e NEW_2
	
Label_1104:
	var_125_int = 7900; // 0x450 PushI
	var_126_bool = var_47_cvector == var_125_int; // 0x451 Eq
	if(var_126_bool == 0) goto Label_1117; // 0x452 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x453 PushV
	var_127_object = var_1_object; // 0x454 MovT
	var_128_object = var_0_object; // 0x455 MovT
	func_5748(); // 0x456 NEW_2
	var_129_object = Obj(); var_130_object = Obj(); // 0x458 PushV
	var_129_object = var_1_object; // 0x459 MovT
	var_130_object = var_0_object; // 0x45a MovT
	func_5801(); // 0x45b NEW_2
	
Label_1117:
	var_131_int = 7913; // 0x45d PushI
	var_132_bool = var_47_cvector == var_131_int; // 0x45e Eq
	if(var_132_bool == 0) goto Label_1125; // 0x45f JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x460 PushV
	var_133_object = var_1_object; // 0x461 MovT
	var_134_object = var_0_object; // 0x462 MovT
	func_5748(); // 0x463 NEW_2
	
Label_1125:
	var_135_int = 7909; // 0x465 PushI
	var_136_bool = var_47_cvector == var_135_int; // 0x466 Eq
	if(var_136_bool == 0) goto Label_1133; // 0x467 JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x468 PushV
	var_137_object = var_1_object; // 0x469 MovT
	var_138_object = var_0_object; // 0x46a MovT
	func_5748(); // 0x46b NEW_2
	
Label_1133:
	var_139_int = 7918; // 0x46d PushI
	var_140_bool = var_47_cvector == var_139_int; // 0x46e Eq
	if(var_140_bool == 0) goto Label_1141; // 0x46f JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x470 PushV
	var_141_object = var_1_object; // 0x471 MovT
	var_142_object = var_0_object; // 0x472 MovT
	func_5754(); // 0x473 NEW_2
	
Label_1141:
	var_145_int = 7919; // 0x475 PushI
	var_146_bool = var_47_cvector == var_145_int; // 0x476 Eq
	if(var_146_bool == 0) goto Label_1149; // 0x477 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x478 PushV
	var_147_object = var_1_object; // 0x479 MovT
	var_148_object = var_0_object; // 0x47a MovT
	func_5754(); // 0x47b NEW_2
	
Label_1149:
	var_149_int = 7942; // 0x47d PushI
	var_150_bool = var_47_cvector == var_149_int; // 0x47e Eq
	if(var_150_bool == 0) goto Label_1177; // 0x47f JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x480 PushV
	var_151_object = var_1_object; // 0x481 MovT
	var_152_object = var_0_object; // 0x482 MovT
	func_5760(); // 0x483 NEW_2
	var_155_object = Obj(); var_156_object = Obj(); // 0x485 PushV
	var_155_object = var_1_object; // 0x486 MovT
	var_156_object = var_0_object; // 0x487 MovT
	func_5824(); // 0x488 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x48a PushV
	var_175_object = var_1_object; // 0x48b MovT
	var_176_object = var_0_object; // 0x48c MovT
	func_5861(); // 0x48d NEW_2
	var_182_object = Obj(); var_183_object = Obj(); // 0x48f PushV
	var_182_object = var_1_object; // 0x490 MovT
	var_183_object = var_0_object; // 0x491 MovT
	func_5726(var_183_object); // 0x492 NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x494 PushV
	var_203_object = var_1_object; // 0x495 MovT
	var_204_object = var_0_object; // 0x496 MovT
	func_5736(); // 0x497 NEW_2
	
Label_1177:
	var_207_int = 7947; // 0x499 PushI
	var_208_bool = var_47_cvector == var_207_int; // 0x49a Eq
	if(var_208_bool == 0) goto Label_1205; // 0x49b JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x49c PushV
	var_209_object = var_1_object; // 0x49d MovT
	var_210_object = var_0_object; // 0x49e MovT
	func_5760(); // 0x49f NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x4a1 PushV
	var_211_object = var_1_object; // 0x4a2 MovT
	var_212_object = var_0_object; // 0x4a3 MovT
	func_5824(); // 0x4a4 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x4a6 PushV
	var_213_object = var_1_object; // 0x4a7 MovT
	var_214_object = var_0_object; // 0x4a8 MovT
	func_5861(); // 0x4a9 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x4ab PushV
	var_215_object = var_1_object; // 0x4ac MovT
	var_216_object = var_0_object; // 0x4ad MovT
	func_5726(var_216_object); // 0x4ae NEW_2
	var_217_object = Obj(); var_218_object = Obj(); // 0x4b0 PushV
	var_217_object = var_1_object; // 0x4b1 MovT
	var_218_object = var_0_object; // 0x4b2 MovT
	func_5736(); // 0x4b3 NEW_2
	
Label_1205:
	var_219_int = 7948; // 0x4b5 PushI
	var_220_bool = var_47_cvector == var_219_int; // 0x4b6 Eq
	if(var_220_bool == 0) goto Label_1218; // 0x4b7 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0x4b8 PushV
	var_221_object = var_1_object; // 0x4b9 MovT
	var_222_object = var_0_object; // 0x4ba MovT
	func_5766(); // 0x4bb NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x4bd PushV
	var_225_object = var_1_object; // 0x4be MovT
	var_226_object = var_0_object; // 0x4bf MovT
	func_5847(); // 0x4c0 NEW_2
	
Label_1218:
	var_243_int = 7949; // 0x4c2 PushI
	var_244_bool = var_47_cvector == var_243_int; // 0x4c3 Eq
	if(var_244_bool == 0) goto Label_1231; // 0x4c4 JumpB
	var_245_object = Obj(); var_246_object = Obj(); // 0x4c5 PushV
	var_245_object = var_1_object; // 0x4c6 MovT
	var_246_object = var_0_object; // 0x4c7 MovT
	func_5766(); // 0x4c8 NEW_2
	var_247_object = Obj(); var_248_object = Obj(); // 0x4ca PushV
	var_247_object = var_1_object; // 0x4cb MovT
	var_248_object = var_0_object; // 0x4cc MovT
	func_5847(); // 0x4cd NEW_2
	
Label_1231:
	var_249_int = 7950; // 0x4cf PushI
	var_250_bool = var_47_cvector == var_249_int; // 0x4d0 Eq
	if(var_250_bool == 0) goto Label_1239; // 0x4d1 JumpB
	var_251_object = Obj(); var_252_object = Obj(); // 0x4d2 PushV
	var_251_object = var_1_object; // 0x4d3 MovT
	var_252_object = var_0_object; // 0x4d4 MovT
	func_5772(); // 0x4d5 NEW_2
	
Label_1239:
	var_255_int = 7570; // 0x4d7 PushI
	var_256_bool = var_46_bool == var_255_int; // 0x4d8 Eq
	if(var_256_bool == 0) goto Label_1352; // 0x4d9 JumpB
	var_257_string = ""; // 0x4da PushV
	var_257_string = "Neutral"; // 0x4db MovS
	func_1058(var_47_cvector, var_257_string); // 0x4dc NEW_2
	var_274_int = 506864; // 0x4de PushI
	SetMessage(var_274_int); // 0x4df TObjFunc
	ClearReplies(); // 0x4e1 TObjFunc
	var_275_bool = 0; // 0x4e3 PushV
	var_275_bool = 0; // 0x4e4 MovB
	var_276_bool = 0; var_277_object = Obj(); // 0x4e5 PushV
	var_277_object = var_1_object; // 0x4e6 MovT
	func_6007(var_277_object); // 0x4e7 NEW_2
	if(var_276_bool == 0) goto Label_1264; // 0x4e9 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x4ea PushV
	var_285_object = var_1_object; // 0x4eb MovT
	func_6079(var_285_object); // 0x4ec NEW_2
	if(var_284_bool == 0) goto Label_1264; // 0x4ee JumpB
	var_275_bool = 1; // 0x4ef MovB
	
Label_1264:
	if(var_275_bool == 0) goto Label_1270; // 0x4f0 JumpB
	var_290_int = 506865; // 0x4f1 PushI
	var_291_int = 7572; // 0x4f2 PushI
	var_292_int = 7571; // 0x4f3 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x4f4 TObjFunc
	
Label_1270:
	var_293_bool = 0; // 0x4f6 PushV
	var_293_bool = 0; // 0x4f7 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x4f8 PushV
	var_295_object = var_1_object; // 0x4f9 MovT
	func_6019(var_295_object); // 0x4fa NEW_2
	if(var_294_bool == 0) goto Label_1283; // 0x4fc JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x4fd PushV
	var_301_object = var_1_object; // 0x4fe MovT
	func_6091(var_301_object); // 0x4ff NEW_2
	if(var_300_bool == 0) goto Label_1283; // 0x501 JumpB
	var_293_bool = 1; // 0x502 MovB
	
Label_1283:
	if(var_293_bool == 0) goto Label_1289; // 0x503 JumpB
	var_306_int = 506868; // 0x504 PushI
	var_307_int = 7575; // 0x505 PushI
	var_308_int = 7574; // 0x506 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x507 TObjFunc
	
Label_1289:
	var_309_bool = 0; // 0x509 PushV
	var_309_bool = 0; // 0x50a MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x50b PushV
	var_311_object = var_1_object; // 0x50c MovT
	func_6031(var_311_object); // 0x50d NEW_2
	if(var_310_bool == 0) goto Label_1302; // 0x50f JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x510 PushV
	var_317_object = var_1_object; // 0x511 MovT
	func_6103(var_317_object); // 0x512 NEW_2
	if(var_316_bool == 0) goto Label_1302; // 0x514 JumpB
	var_309_bool = 1; // 0x515 MovB
	
Label_1302:
	if(var_309_bool == 0) goto Label_1308; // 0x516 JumpB
	var_322_int = 506870; // 0x517 PushI
	var_323_int = 7577; // 0x518 PushI
	var_324_int = 7576; // 0x519 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x51a TObjFunc
	
Label_1308:
	var_325_bool = 0; // 0x51c PushV
	var_325_bool = 0; // 0x51d MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x51e PushV
	var_327_object = var_1_object; // 0x51f MovT
	func_6043(var_327_object); // 0x520 NEW_2
	if(var_326_bool == 0) goto Label_1321; // 0x522 JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x523 PushV
	var_333_object = var_1_object; // 0x524 MovT
	func_6115(var_333_object); // 0x525 NEW_2
	if(var_332_bool == 0) goto Label_1321; // 0x527 JumpB
	var_325_bool = 1; // 0x528 MovB
	
Label_1321:
	if(var_325_bool == 0) goto Label_1327; // 0x529 JumpB
	var_338_int = 506874; // 0x52a PushI
	var_339_int = 7581; // 0x52b PushI
	var_340_int = 7580; // 0x52c PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x52d TObjFunc
	
Label_1327:
	var_341_bool = 0; // 0x52f PushV
	var_341_bool = 0; // 0x530 MovB
	var_342_bool = 0; var_343_object = Obj(); // 0x531 PushV
	var_343_object = var_1_object; // 0x532 MovT
	func_6055(var_343_object); // 0x533 NEW_2
	if(var_342_bool == 0) goto Label_1340; // 0x535 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x536 PushV
	var_349_object = var_1_object; // 0x537 MovT
	func_6067(var_349_object); // 0x538 NEW_2
	if(var_348_bool == 0) goto Label_1340; // 0x53a JumpB
	var_341_bool = 1; // 0x53b MovB
	
Label_1340:
	if(var_341_bool == 0) goto Label_1346; // 0x53c JumpB
	var_354_int = 506872; // 0x53d PushI
	var_355_int = 7579; // 0x53e PushI
	var_356_int = 7578; // 0x53f PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x540 TObjFunc
	
Label_1346:
	var_357_int = 507531; // 0x542 PushI
	var_358_int = -1; // 0x543 PushI
	var_359_int = 8313; // 0x544 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x545 TObjFunc
	return 0; // 0x547 Return
	
Label_1352:
	var_360_int = 26389; // 0x548 PushI
	var_361_bool = var_46_bool == var_360_int; // 0x549 Eq
	if(var_361_bool == 0) goto Label_1355; // 0x54a JumpB
	
Label_1355:
	var_362_int = 26402; // 0x54b PushI
	var_363_bool = var_46_bool == var_362_int; // 0x54c Eq
	if(var_363_bool == 0) goto Label_1373; // 0x54d JumpB
	var_364_string = ""; // 0x54e PushV
	var_364_string = "Smile"; // 0x54f MovS
	func_1058(var_47_cvector, var_364_string); // 0x550 NEW_2
	var_365_int = 525049; // 0x552 PushI
	SetMessage(var_365_int); // 0x553 TObjFunc
	ClearReplies(); // 0x555 TObjFunc
	var_366_int = 525050; // 0x557 PushI
	var_367_int = 26391; // 0x558 PushI
	var_368_int = 26403; // 0x559 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x55a TObjFunc
	return 0; // 0x55c Return
	
Label_1373:
	var_369_int = 26391; // 0x55d PushI
	var_370_bool = var_46_bool == var_369_int; // 0x55e Eq
	if(var_370_bool == 0) goto Label_1396; // 0x55f JumpB
	var_371_string = ""; // 0x560 PushV
	var_371_string = "Smile"; // 0x561 MovS
	func_1058(var_47_cvector, var_371_string); // 0x562 NEW_2
	var_372_int = 525038; // 0x564 PushI
	SetMessage(var_372_int); // 0x565 TObjFunc
	ClearReplies(); // 0x567 TObjFunc
	var_373_int = 525039; // 0x569 PushI
	var_374_int = 26393; // 0x56a PushI
	var_375_int = 26392; // 0x56b PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x56c TObjFunc
	var_376_int = 525042; // 0x56e PushI
	var_377_int = 26396; // 0x56f PushI
	var_378_int = 26395; // 0x570 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x571 TObjFunc
	return 0; // 0x573 Return
	
Label_1396:
	var_379_int = 26396; // 0x574 PushI
	var_380_bool = var_46_bool == var_379_int; // 0x575 Eq
	if(var_380_bool == 0) goto Label_1419; // 0x576 JumpB
	var_381_string = ""; // 0x577 PushV
	var_381_string = "Neutral"; // 0x578 MovS
	func_1058(var_47_cvector, var_381_string); // 0x579 NEW_2
	var_382_int = 525043; // 0x57b PushI
	SetMessage(var_382_int); // 0x57c TObjFunc
	ClearReplies(); // 0x57e TObjFunc
	var_383_int = 525044; // 0x580 PushI
	var_384_int = 26398; // 0x581 PushI
	var_385_int = 26397; // 0x582 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x583 TObjFunc
	var_386_int = 525047; // 0x585 PushI
	var_387_int = -1; // 0x586 PushI
	var_388_int = 26400; // 0x587 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x588 TObjFunc
	return 0; // 0x58a Return
	
Label_1419:
	var_389_int = 26398; // 0x58b PushI
	var_390_bool = var_46_bool == var_389_int; // 0x58c Eq
	if(var_390_bool == 0) goto Label_1437; // 0x58d JumpB
	var_391_string = ""; // 0x58e PushV
	var_391_string = "Neutral"; // 0x58f MovS
	func_1058(var_47_cvector, var_391_string); // 0x590 NEW_2
	var_392_int = 525045; // 0x592 PushI
	SetMessage(var_392_int); // 0x593 TObjFunc
	ClearReplies(); // 0x595 TObjFunc
	var_393_int = 525046; // 0x597 PushI
	var_394_int = -1; // 0x598 PushI
	var_395_int = 26399; // 0x599 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x59a TObjFunc
	return 0; // 0x59c Return
	
Label_1437:
	var_396_int = 26393; // 0x59d PushI
	var_397_bool = var_46_bool == var_396_int; // 0x59e Eq
	if(var_397_bool == 0) goto Label_1455; // 0x59f JumpB
	var_398_string = ""; // 0x5a0 PushV
	var_398_string = "Smile"; // 0x5a1 MovS
	func_1058(var_47_cvector, var_398_string); // 0x5a2 NEW_2
	var_399_int = 525040; // 0x5a4 PushI
	SetMessage(var_399_int); // 0x5a5 TObjFunc
	ClearReplies(); // 0x5a7 TObjFunc
	var_400_int = 525041; // 0x5a9 PushI
	var_401_int = -1; // 0x5aa PushI
	var_402_int = 26394; // 0x5ab PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x5ac TObjFunc
	return 0; // 0x5ae Return
	
Label_1455:
	var_403_int = 10095; // 0x5af PushI
	var_404_bool = var_46_bool == var_403_int; // 0x5b0 Eq
	if(var_404_bool == 0) goto Label_1458; // 0x5b1 JumpB
	
Label_1458:
	var_405_int = 10111; // 0x5b2 PushI
	var_406_bool = var_46_bool == var_405_int; // 0x5b3 Eq
	if(var_406_bool == 0) goto Label_1476; // 0x5b4 JumpB
	var_407_string = ""; // 0x5b5 PushV
	var_407_string = "Grin"; // 0x5b6 MovS
	func_1058(var_47_cvector, var_407_string); // 0x5b7 NEW_2
	var_408_int = 509217; // 0x5b9 PushI
	SetMessage(var_408_int); // 0x5ba TObjFunc
	ClearReplies(); // 0x5bc TObjFunc
	var_409_int = 509218; // 0x5be PushI
	var_410_int = 10097; // 0x5bf PushI
	var_411_int = 10112; // 0x5c0 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x5c1 TObjFunc
	return 0; // 0x5c3 Return
	
Label_1476:
	var_412_int = 10097; // 0x5c4 PushI
	var_413_bool = var_46_bool == var_412_int; // 0x5c5 Eq
	if(var_413_bool == 0) goto Label_1499; // 0x5c6 JumpB
	var_414_string = ""; // 0x5c7 PushV
	var_414_string = "Grin"; // 0x5c8 MovS
	func_1058(var_47_cvector, var_414_string); // 0x5c9 NEW_2
	var_415_int = 509205; // 0x5cb PushI
	SetMessage(var_415_int); // 0x5cc TObjFunc
	ClearReplies(); // 0x5ce TObjFunc
	var_416_int = 509206; // 0x5d0 PushI
	var_417_int = 10099; // 0x5d1 PushI
	var_418_int = 10098; // 0x5d2 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x5d3 TObjFunc
	var_419_int = 509210; // 0x5d5 PushI
	var_420_int = 10103; // 0x5d6 PushI
	var_421_int = 10102; // 0x5d7 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x5d8 TObjFunc
	return 0; // 0x5da Return
	
Label_1499:
	var_422_int = 10103; // 0x5db PushI
	var_423_bool = var_46_bool == var_422_int; // 0x5dc Eq
	if(var_423_bool == 0) goto Label_1522; // 0x5dd JumpB
	var_424_string = ""; // 0x5de PushV
	var_424_string = "Smile"; // 0x5df MovS
	func_1058(var_47_cvector, var_424_string); // 0x5e0 NEW_2
	var_425_int = 509211; // 0x5e2 PushI
	SetMessage(var_425_int); // 0x5e3 TObjFunc
	ClearReplies(); // 0x5e5 TObjFunc
	var_426_int = 509212; // 0x5e7 PushI
	var_427_int = 10105; // 0x5e8 PushI
	var_428_int = 10104; // 0x5e9 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x5ea TObjFunc
	var_429_int = 509215; // 0x5ec PushI
	var_430_int = 10099; // 0x5ed PushI
	var_431_int = 10108; // 0x5ee PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x5ef TObjFunc
	return 0; // 0x5f1 Return
	
Label_1522:
	var_432_int = 10105; // 0x5f2 PushI
	var_433_bool = var_46_bool == var_432_int; // 0x5f3 Eq
	if(var_433_bool == 0) goto Label_1540; // 0x5f4 JumpB
	var_434_string = ""; // 0x5f5 PushV
	var_434_string = "Neutral"; // 0x5f6 MovS
	func_1058(var_47_cvector, var_434_string); // 0x5f7 NEW_2
	var_435_int = 509213; // 0x5f9 PushI
	SetMessage(var_435_int); // 0x5fa TObjFunc
	ClearReplies(); // 0x5fc TObjFunc
	var_436_int = 509214; // 0x5fe PushI
	var_437_int = 10099; // 0x5ff PushI
	var_438_int = 10106; // 0x600 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x601 TObjFunc
	return 0; // 0x603 Return
	
Label_1540:
	var_439_int = 10099; // 0x604 PushI
	var_440_bool = var_46_bool == var_439_int; // 0x605 Eq
	if(var_440_bool == 0) goto Label_1563; // 0x606 JumpB
	var_441_string = ""; // 0x607 PushV
	var_441_string = "Grin"; // 0x608 MovS
	func_1058(var_47_cvector, var_441_string); // 0x609 NEW_2
	var_442_int = 509207; // 0x60b PushI
	SetMessage(var_442_int); // 0x60c TObjFunc
	ClearReplies(); // 0x60e TObjFunc
	var_443_int = 509208; // 0x610 PushI
	var_444_int = -1; // 0x611 PushI
	var_445_int = 10100; // 0x612 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x613 TObjFunc
	var_446_int = 509209; // 0x615 PushI
	var_447_int = -1; // 0x616 PushI
	var_448_int = 10101; // 0x617 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x618 TObjFunc
	return 0; // 0x61a Return
	
Label_1563:
	var_449_int = 7579; // 0x61b PushI
	var_450_bool = var_46_bool == var_449_int; // 0x61c Eq
	if(var_450_bool == 0) goto Label_1581; // 0x61d JumpB
	var_451_string = ""; // 0x61e PushV
	var_451_string = "Neutral"; // 0x61f MovS
	func_1058(var_47_cvector, var_451_string); // 0x620 NEW_2
	var_452_int = 506873; // 0x622 PushI
	SetMessage(var_452_int); // 0x623 TObjFunc
	ClearReplies(); // 0x625 TObjFunc
	var_453_int = 507214; // 0x627 PushI
	var_454_int = -1; // 0x628 PushI
	var_455_int = 7950; // 0x629 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_456_int = 7581; // 0x62d PushI
	var_457_bool = var_46_bool == var_456_int; // 0x62e Eq
	if(var_457_bool == 0) goto Label_1604; // 0x62f JumpB
	var_458_string = ""; // 0x630 PushV
	var_458_string = "Neutral"; // 0x631 MovS
	func_1058(var_47_cvector, var_458_string); // 0x632 NEW_2
	var_459_int = 506875; // 0x634 PushI
	SetMessage(var_459_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_460_int = 507212; // 0x639 PushI
	var_461_int = -1; // 0x63a PushI
	var_462_int = 7948; // 0x63b PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x63c TObjFunc
	var_463_int = 507213; // 0x63e PushI
	var_464_int = -1; // 0x63f PushI
	var_465_int = 7949; // 0x640 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_466_int = 7577; // 0x644 PushI
	var_467_bool = var_46_bool == var_466_int; // 0x645 Eq
	if(var_467_bool == 0) goto Label_1632; // 0x646 JumpB
	var_468_string = ""; // 0x647 PushV
	var_468_string = "Untrust"; // 0x648 MovS
	func_1058(var_47_cvector, var_468_string); // 0x649 NEW_2
	var_469_int = 506871; // 0x64b PushI
	SetMessage(var_469_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_470_int = 507192; // 0x650 PushI
	var_471_int = 7926; // 0x651 PushI
	var_472_int = 7924; // 0x652 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x653 TObjFunc
	var_473_int = 507193; // 0x655 PushI
	var_474_int = 7926; // 0x656 PushI
	var_475_int = 7925; // 0x657 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x658 TObjFunc
	var_476_int = 507195; // 0x65a PushI
	var_477_int = 7928; // 0x65b PushI
	var_478_int = 7927; // 0x65c PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x65d TObjFunc
	return 0; // 0x65f Return
	
Label_1632:
	var_479_int = 7928; // 0x660 PushI
	var_480_bool = var_46_bool == var_479_int; // 0x661 Eq
	if(var_480_bool == 0) goto Label_1650; // 0x662 JumpB
	var_481_string = ""; // 0x663 PushV
	var_481_string = "Neutral"; // 0x664 MovS
	func_1058(var_47_cvector, var_481_string); // 0x665 NEW_2
	var_482_int = 507196; // 0x667 PushI
	SetMessage(var_482_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_483_int = 507197; // 0x66c PushI
	var_484_int = 7926; // 0x66d PushI
	var_485_int = 7929; // 0x66e PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x66f TObjFunc
	return 0; // 0x671 Return
	
Label_1650:
	var_486_int = 7926; // 0x672 PushI
	var_487_bool = var_46_bool == var_486_int; // 0x673 Eq
	if(var_487_bool == 0) goto Label_1684; // 0x674 JumpB
	var_488_string = ""; // 0x675 PushV
	var_488_string = "Untrust"; // 0x676 MovS
	func_1058(var_47_cvector, var_488_string); // 0x677 NEW_2
	var_489_int = 507194; // 0x679 PushI
	SetMessage(var_489_int); // 0x67a TObjFunc
	ClearReplies(); // 0x67c TObjFunc
	var_490_bool = 0; var_491_object = Obj(); // 0x67e PushV
	var_491_object = var_1_object; // 0x67f MovT
	func_6127(var_491_object); // 0x680 NEW_2
	if(var_490_bool == 0) goto Label_1672; // 0x682 JumpB
	var_496_int = 507198; // 0x683 PushI
	var_497_int = 7932; // 0x684 PushI
	var_498_int = 7931; // 0x685 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x686 TObjFunc
	
Label_1672:
	var_499_bool = 0; var_500_object = Obj(); // 0x688 PushV
	var_500_object = var_1_object; // 0x689 MovT
	func_6127(var_500_object); // 0x68a NEW_2
	var_501_bool = var_499_bool == 0; // 0x68c Not
	if(var_501_bool == 0) goto Label_1683; // 0x68d JumpB
	var_502_int = 507200; // 0x68e PushI
	var_503_int = 7935; // 0x68f PushI
	var_504_int = 7934; // 0x690 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x691 TObjFunc
	
Label_1683:
	return 0; // 0x693 Return
	
Label_1684:
	var_505_int = 7935; // 0x694 PushI
	var_506_bool = var_46_bool == var_505_int; // 0x695 Eq
	if(var_506_bool == 0) goto Label_1702; // 0x696 JumpB
	var_507_string = ""; // 0x697 PushV
	var_507_string = "Neutral"; // 0x698 MovS
	func_1058(var_47_cvector, var_507_string); // 0x699 NEW_2
	var_508_int = 507201; // 0x69b PushI
	SetMessage(var_508_int); // 0x69c TObjFunc
	ClearReplies(); // 0x69e TObjFunc
	var_509_int = 507202; // 0x6a0 PushI
	var_510_int = 7932; // 0x6a1 PushI
	var_511_int = 7936; // 0x6a2 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x6a3 TObjFunc
	return 0; // 0x6a5 Return
	
Label_1702:
	var_512_int = 7932; // 0x6a6 PushI
	var_513_bool = var_46_bool == var_512_int; // 0x6a7 Eq
	if(var_513_bool == 0) goto Label_1725; // 0x6a8 JumpB
	var_514_string = ""; // 0x6a9 PushV
	var_514_string = "Untrust"; // 0x6aa MovS
	func_1058(var_47_cvector, var_514_string); // 0x6ab NEW_2
	var_515_int = 507199; // 0x6ad PushI
	SetMessage(var_515_int); // 0x6ae TObjFunc
	ClearReplies(); // 0x6b0 TObjFunc
	var_516_int = 507203; // 0x6b2 PushI
	var_517_int = 7939; // 0x6b3 PushI
	var_518_int = 7938; // 0x6b4 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x6b5 TObjFunc
	var_519_int = 507208; // 0x6b7 PushI
	var_520_int = 7944; // 0x6b8 PushI
	var_521_int = 7943; // 0x6b9 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x6ba TObjFunc
	return 0; // 0x6bc Return
	
Label_1725:
	var_522_int = 7944; // 0x6bd PushI
	var_523_bool = var_46_bool == var_522_int; // 0x6be Eq
	if(var_523_bool == 0) goto Label_1743; // 0x6bf JumpB
	var_524_string = ""; // 0x6c0 PushV
	var_524_string = "Neutral"; // 0x6c1 MovS
	func_1058(var_47_cvector, var_524_string); // 0x6c2 NEW_2
	var_525_int = 507209; // 0x6c4 PushI
	SetMessage(var_525_int); // 0x6c5 TObjFunc
	ClearReplies(); // 0x6c7 TObjFunc
	var_526_int = 507210; // 0x6c9 PushI
	var_527_int = 7939; // 0x6ca PushI
	var_528_int = 7945; // 0x6cb PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x6cc TObjFunc
	return 0; // 0x6ce Return
	
Label_1743:
	var_529_int = 7939; // 0x6cf PushI
	var_530_bool = var_46_bool == var_529_int; // 0x6d0 Eq
	if(var_530_bool == 0) goto Label_1766; // 0x6d1 JumpB
	var_531_string = ""; // 0x6d2 PushV
	var_531_string = "Neutral"; // 0x6d3 MovS
	func_1058(var_47_cvector, var_531_string); // 0x6d4 NEW_2
	var_532_int = 507204; // 0x6d6 PushI
	SetMessage(var_532_int); // 0x6d7 TObjFunc
	ClearReplies(); // 0x6d9 TObjFunc
	var_533_int = 507205; // 0x6db PushI
	var_534_int = 7941; // 0x6dc PushI
	var_535_int = 7940; // 0x6dd PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x6de TObjFunc
	var_536_int = 507211; // 0x6e0 PushI
	var_537_int = -1; // 0x6e1 PushI
	var_538_int = 7947; // 0x6e2 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x6e3 TObjFunc
	return 0; // 0x6e5 Return
	
Label_1766:
	var_539_int = 7941; // 0x6e6 PushI
	var_540_bool = var_46_bool == var_539_int; // 0x6e7 Eq
	if(var_540_bool == 0) goto Label_1784; // 0x6e8 JumpB
	var_541_string = ""; // 0x6e9 PushV
	var_541_string = "Neutral"; // 0x6ea MovS
	func_1058(var_47_cvector, var_541_string); // 0x6eb NEW_2
	var_542_int = 507206; // 0x6ed PushI
	SetMessage(var_542_int); // 0x6ee TObjFunc
	ClearReplies(); // 0x6f0 TObjFunc
	var_543_int = 507207; // 0x6f2 PushI
	var_544_int = -1; // 0x6f3 PushI
	var_545_int = 7942; // 0x6f4 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x6f5 TObjFunc
	return 0; // 0x6f7 Return
	
Label_1784:
	var_546_int = 7575; // 0x6f8 PushI
	var_547_bool = var_46_bool == var_546_int; // 0x6f9 Eq
	if(var_547_bool == 0) goto Label_1807; // 0x6fa JumpB
	var_548_object = Obj(); var_549_object = Obj(); // 0x6fb PushV
	var_548_object = var_1_object; // 0x6fc MovT
	var_549_object = var_0_object; // 0x6fd MovT
	func_5778(); // 0x6fe NEW_2
	var_552_string = ""; // 0x700 PushV
	var_552_string = "What"; // 0x701 MovS
	func_1058(var_47_cvector, var_552_string); // 0x702 NEW_2
	var_553_int = 506869; // 0x704 PushI
	SetMessage(var_553_int); // 0x705 TObjFunc
	ClearReplies(); // 0x707 TObjFunc
	var_554_int = 507183; // 0x709 PushI
	var_555_int = 7915; // 0x70a PushI
	var_556_int = 7914; // 0x70b PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x70c TObjFunc
	return 0; // 0x70e Return
	
Label_1807:
	var_557_int = 7915; // 0x70f PushI
	var_558_bool = var_46_bool == var_557_int; // 0x710 Eq
	if(var_558_bool == 0) goto Label_1830; // 0x711 JumpB
	var_559_string = ""; // 0x712 PushV
	var_559_string = "What"; // 0x713 MovS
	func_1058(var_47_cvector, var_559_string); // 0x714 NEW_2
	var_560_int = 507184; // 0x716 PushI
	SetMessage(var_560_int); // 0x717 TObjFunc
	ClearReplies(); // 0x719 TObjFunc
	var_561_int = 507185; // 0x71b PushI
	var_562_int = 7917; // 0x71c PushI
	var_563_int = 7916; // 0x71d PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x71e TObjFunc
	var_564_int = 507189; // 0x720 PushI
	var_565_int = 7921; // 0x721 PushI
	var_566_int = 7920; // 0x722 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x723 TObjFunc
	return 0; // 0x725 Return
	
Label_1830:
	var_567_int = 7921; // 0x726 PushI
	var_568_bool = var_46_bool == var_567_int; // 0x727 Eq
	if(var_568_bool == 0) goto Label_1848; // 0x728 JumpB
	var_569_string = ""; // 0x729 PushV
	var_569_string = "Neutral"; // 0x72a MovS
	func_1058(var_47_cvector, var_569_string); // 0x72b NEW_2
	var_570_int = 507190; // 0x72d PushI
	SetMessage(var_570_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_571_int = 507191; // 0x732 PushI
	var_572_int = 7917; // 0x733 PushI
	var_573_int = 7922; // 0x734 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x735 TObjFunc
	return 0; // 0x737 Return
	
Label_1848:
	var_574_int = 7917; // 0x738 PushI
	var_575_bool = var_46_bool == var_574_int; // 0x739 Eq
	if(var_575_bool == 0) goto Label_1871; // 0x73a JumpB
	var_576_string = ""; // 0x73b PushV
	var_576_string = "Neutral"; // 0x73c MovS
	func_1058(var_47_cvector, var_576_string); // 0x73d NEW_2
	var_577_int = 507186; // 0x73f PushI
	SetMessage(var_577_int); // 0x740 TObjFunc
	ClearReplies(); // 0x742 TObjFunc
	var_578_int = 507187; // 0x744 PushI
	var_579_int = -1; // 0x745 PushI
	var_580_int = 7918; // 0x746 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x747 TObjFunc
	var_581_int = 507188; // 0x749 PushI
	var_582_int = -1; // 0x74a PushI
	var_583_int = 7919; // 0x74b PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x74c TObjFunc
	return 0; // 0x74e Return
	
Label_1871:
	var_584_int = 7572; // 0x74f PushI
	var_585_bool = var_46_bool == var_584_int; // 0x750 Eq
	if(var_585_bool == 0) goto Label_1889; // 0x751 JumpB
	var_586_string = ""; // 0x752 PushV
	var_586_string = "Neutral"; // 0x753 MovS
	func_1058(var_47_cvector, var_586_string); // 0x754 NEW_2
	var_587_int = 506866; // 0x756 PushI
	SetMessage(var_587_int); // 0x757 TObjFunc
	ClearReplies(); // 0x759 TObjFunc
	var_588_int = 506867; // 0x75b PushI
	var_589_int = 7894; // 0x75c PushI
	var_590_int = 7573; // 0x75d PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x75e TObjFunc
	return 0; // 0x760 Return
	
Label_1889:
	var_591_int = 7901; // 0x761 PushI
	var_592_bool = var_46_bool == var_591_int; // 0x762 Eq
	if(var_592_bool == 0) goto Label_1892; // 0x763 JumpB
	
Label_1892:
	var_593_int = 7903; // 0x764 PushI
	var_594_bool = var_46_bool == var_593_int; // 0x765 Eq
	if(var_594_bool == 0) goto Label_1915; // 0x766 JumpB
	var_595_string = ""; // 0x767 PushV
	var_595_string = "Grin"; // 0x768 MovS
	func_1058(var_47_cvector, var_595_string); // 0x769 NEW_2
	var_596_int = 507174; // 0x76b PushI
	SetMessage(var_596_int); // 0x76c TObjFunc
	ClearReplies(); // 0x76e TObjFunc
	var_597_int = 507175; // 0x770 PushI
	var_598_int = 7896; // 0x771 PushI
	var_599_int = 7904; // 0x772 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x773 TObjFunc
	var_600_int = 533672; // 0x775 PushI
	var_601_int = 7896; // 0x776 PushI
	var_602_int = 35207; // 0x777 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x778 TObjFunc
	return 0; // 0x77a Return
	
Label_1915:
	var_603_int = 7894; // 0x77b PushI
	var_604_bool = var_46_bool == var_603_int; // 0x77c Eq
	if(var_604_bool == 0) goto Label_1943; // 0x77d JumpB
	var_605_object = Obj(); var_606_object = Obj(); // 0x77e PushV
	var_605_object = var_1_object; // 0x77f MovT
	var_606_object = var_0_object; // 0x780 MovT
	func_5778(); // 0x781 NEW_2
	var_607_string = ""; // 0x783 PushV
	var_607_string = "What"; // 0x784 MovS
	func_1058(var_47_cvector, var_607_string); // 0x785 NEW_2
	var_608_int = 507165; // 0x787 PushI
	SetMessage(var_608_int); // 0x788 TObjFunc
	ClearReplies(); // 0x78a TObjFunc
	var_609_int = 507166; // 0x78c PushI
	var_610_int = 7896; // 0x78d PushI
	var_611_int = 7895; // 0x78e PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x78f TObjFunc
	var_612_int = 507176; // 0x791 PushI
	var_613_int = 7907; // 0x792 PushI
	var_614_int = 7906; // 0x793 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x794 TObjFunc
	return 0; // 0x796 Return
	
Label_1943:
	var_615_int = 7907; // 0x797 PushI
	var_616_bool = var_46_bool == var_615_int; // 0x798 Eq
	if(var_616_bool == 0) goto Label_1966; // 0x799 JumpB
	var_617_string = ""; // 0x79a PushV
	var_617_string = "Smile"; // 0x79b MovS
	func_1058(var_47_cvector, var_617_string); // 0x79c NEW_2
	var_618_int = 507177; // 0x79e PushI
	SetMessage(var_618_int); // 0x79f TObjFunc
	ClearReplies(); // 0x7a1 TObjFunc
	var_619_int = 507178; // 0x7a3 PushI
	var_620_int = 7910; // 0x7a4 PushI
	var_621_int = 7908; // 0x7a5 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x7a6 TObjFunc
	var_622_int = 507179; // 0x7a8 PushI
	var_623_int = -1; // 0x7a9 PushI
	var_624_int = 7909; // 0x7aa PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x7ab TObjFunc
	return 0; // 0x7ad Return
	
Label_1966:
	var_625_int = 7910; // 0x7ae PushI
	var_626_bool = var_46_bool == var_625_int; // 0x7af Eq
	if(var_626_bool == 0) goto Label_1989; // 0x7b0 JumpB
	var_627_string = ""; // 0x7b1 PushV
	var_627_string = "What"; // 0x7b2 MovS
	func_1058(var_47_cvector, var_627_string); // 0x7b3 NEW_2
	var_628_int = 507180; // 0x7b5 PushI
	SetMessage(var_628_int); // 0x7b6 TObjFunc
	ClearReplies(); // 0x7b8 TObjFunc
	var_629_int = 507181; // 0x7ba PushI
	var_630_int = 7896; // 0x7bb PushI
	var_631_int = 7911; // 0x7bc PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x7bd TObjFunc
	var_632_int = 507182; // 0x7bf PushI
	var_633_int = -1; // 0x7c0 PushI
	var_634_int = 7913; // 0x7c1 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x7c2 TObjFunc
	return 0; // 0x7c4 Return
	
Label_1989:
	var_635_int = 7896; // 0x7c5 PushI
	var_636_bool = var_46_bool == var_635_int; // 0x7c6 Eq
	if(var_636_bool == 0) goto Label_2007; // 0x7c7 JumpB
	var_637_string = ""; // 0x7c8 PushV
	var_637_string = "What"; // 0x7c9 MovS
	func_1058(var_47_cvector, var_637_string); // 0x7ca NEW_2
	var_638_int = 507167; // 0x7cc PushI
	SetMessage(var_638_int); // 0x7cd TObjFunc
	ClearReplies(); // 0x7cf TObjFunc
	var_639_int = 507168; // 0x7d1 PushI
	var_640_int = 7898; // 0x7d2 PushI
	var_641_int = 7897; // 0x7d3 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x7d4 TObjFunc
	return 0; // 0x7d6 Return
	
Label_2007:
	var_642_int = 7898; // 0x7d7 PushI
	var_643_bool = var_46_bool == var_642_int; // 0x7d8 Eq
	if(var_643_bool == 0) goto Label_2030; // 0x7d9 JumpB
	var_644_string = ""; // 0x7da PushV
	var_644_string = "Neutral"; // 0x7db MovS
	func_1058(var_47_cvector, var_644_string); // 0x7dc NEW_2
	var_645_int = 507169; // 0x7de PushI
	SetMessage(var_645_int); // 0x7df TObjFunc
	ClearReplies(); // 0x7e1 TObjFunc
	var_646_int = 507170; // 0x7e3 PushI
	var_647_int = -1; // 0x7e4 PushI
	var_648_int = 7899; // 0x7e5 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x7e6 TObjFunc
	var_649_int = 507171; // 0x7e8 PushI
	var_650_int = -1; // 0x7e9 PushI
	var_651_int = 7900; // 0x7ea PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x7eb TObjFunc
	return 0; // 0x7ed Return
	
Label_2030:
	var_3_string = 1; // 0x7ee TMovB
	var_652_bool = 0; // 0x7ef PushV
	func_5708(var_652_bool); // 0x7f0 NEW_2
	if(var_652_bool == 0) goto Label_2038; // 0x7f2 JumpB
	lshStopAnimation(); // 0x7f3 Func
	goto Label_2040; // 0x7f5 Jump
	
Label_2040:
	return 0; // 0x7f8 Return
	
Label_2038:
	StopAnimation(); // 0x7f6 Func
	
Label_2042:
	return 0; // 0x7fa Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x8b0 PushI
	if(var_48_int == 0) goto Label_2931; // 0x8b1 JumpB
	func_5534(); // 0x8b3 NEW_2
	var_50_int = 10753; // 0x8b5 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x8b6 Eq
	if(var_51_bool == 0) goto Label_2237; // 0x8b7 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x8b8 PushV
	var_52_object = var_1_object; // 0x8b9 MovT
	var_53_object = var_0_object; // 0x8ba MovT
	func_5946(); // 0x8bb NEW_2
	
Label_2237:
	var_56_int = 10740; // 0x8bd PushI
	var_57_bool = var_47_cvector == var_56_int; // 0x8be Eq
	if(var_57_bool == 0) goto Label_2250; // 0x8bf JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x8c0 PushV
	var_58_object = var_1_object; // 0x8c1 MovT
	var_59_object = var_0_object; // 0x8c2 MovT
	func_5877(var_59_object); // 0x8c3 NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0x8c5 PushV
	var_82_object = var_1_object; // 0x8c6 MovT
	var_83_object = var_0_object; // 0x8c7 MovT
	func_5742(); // 0x8c8 NEW_2
	
Label_2250:
	var_86_int = 10752; // 0x8ca PushI
	var_87_bool = var_46_bool == var_86_int; // 0x8cb Eq
	if(var_87_bool == 0) goto Label_2292; // 0x8cc JumpB
	var_88_string = ""; // 0x8cd PushV
	var_88_string = "Neutral"; // 0x8ce MovS
	func_2201(var_47_cvector, var_88_string); // 0x8cf NEW_2
	var_105_int = 509762; // 0x8d1 PushI
	SetMessage(var_105_int); // 0x8d2 TObjFunc
	ClearReplies(); // 0x8d4 TObjFunc
	var_106_bool = 0; // 0x8d6 PushV
	var_106_bool = 0; // 0x8d7 MovB
	var_107_bool = 0; var_108_object = Obj(); // 0x8d8 PushV
	var_108_object = var_1_object; // 0x8d9 MovT
	func_6199(var_108_object); // 0x8da NEW_2
	if(var_107_bool == 0) goto Label_2275; // 0x8dc JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x8dd PushV
	var_116_object = var_1_object; // 0x8de MovT
	func_5958(var_116_object); // 0x8df NEW_2
	if(var_115_bool == 0) goto Label_2275; // 0x8e1 JumpB
	var_106_bool = 1; // 0x8e2 MovB
	
Label_2275:
	if(var_106_bool == 0) goto Label_2281; // 0x8e3 JumpB
	var_134_int = 509763; // 0x8e4 PushI
	var_135_int = 10732; // 0x8e5 PushI
	var_136_int = 10753; // 0x8e6 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x8e7 TObjFunc
	
Label_2281:
	var_137_int = 533793; // 0x8e9 PushI
	var_138_int = -1; // 0x8ea PushI
	var_139_int = 35337; // 0x8eb PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x8ec TObjFunc
	var_140_int = 535105; // 0x8ee PushI
	var_141_int = -1; // 0x8ef PushI
	var_142_int = 36761; // 0x8f0 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x8f1 TObjFunc
	return 0; // 0x8f3 Return
	
Label_2292:
	var_143_int = 35327; // 0x8f4 PushI
	var_144_bool = var_46_bool == var_143_int; // 0x8f5 Eq
	if(var_144_bool == 0) goto Label_2295; // 0x8f6 JumpB
	
Label_2295:
	var_145_int = 35329; // 0x8f7 PushI
	var_146_bool = var_46_bool == var_145_int; // 0x8f8 Eq
	if(var_146_bool == 0) goto Label_2323; // 0x8f9 JumpB
	var_147_string = ""; // 0x8fa PushV
	var_147_string = "What"; // 0x8fb MovS
	func_2201(var_47_cvector, var_147_string); // 0x8fc NEW_2
	var_148_int = 533785; // 0x8fe PushI
	SetMessage(var_148_int); // 0x8ff TObjFunc
	ClearReplies(); // 0x901 TObjFunc
	var_149_int = 533786; // 0x903 PushI
	var_150_int = -1; // 0x904 PushI
	var_151_int = 35330; // 0x905 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x906 TObjFunc
	var_152_int = 533787; // 0x908 PushI
	var_153_int = 35332; // 0x909 PushI
	var_154_int = 35331; // 0x90a PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x90b TObjFunc
	var_155_int = 533790; // 0x90d PushI
	var_156_int = 35335; // 0x90e PushI
	var_157_int = 35334; // 0x90f PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x910 TObjFunc
	return 0; // 0x912 Return
	
Label_2323:
	var_158_int = 35335; // 0x913 PushI
	var_159_bool = var_46_bool == var_158_int; // 0x914 Eq
	if(var_159_bool == 0) goto Label_2341; // 0x915 JumpB
	var_160_string = ""; // 0x916 PushV
	var_160_string = "Neutral"; // 0x917 MovS
	func_2201(var_47_cvector, var_160_string); // 0x918 NEW_2
	var_161_int = 533791; // 0x91a PushI
	SetMessage(var_161_int); // 0x91b TObjFunc
	ClearReplies(); // 0x91d TObjFunc
	var_162_int = 533792; // 0x91f PushI
	var_163_int = -1; // 0x920 PushI
	var_164_int = 35336; // 0x921 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x922 TObjFunc
	return 0; // 0x924 Return
	
Label_2341:
	var_165_int = 35332; // 0x925 PushI
	var_166_bool = var_46_bool == var_165_int; // 0x926 Eq
	if(var_166_bool == 0) goto Label_2359; // 0x927 JumpB
	var_167_string = ""; // 0x928 PushV
	var_167_string = "Neutral"; // 0x929 MovS
	func_2201(var_47_cvector, var_167_string); // 0x92a NEW_2
	var_168_int = 533788; // 0x92c PushI
	SetMessage(var_168_int); // 0x92d TObjFunc
	ClearReplies(); // 0x92f TObjFunc
	var_169_int = 533789; // 0x931 PushI
	var_170_int = -1; // 0x932 PushI
	var_171_int = 35333; // 0x933 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x934 TObjFunc
	return 0; // 0x936 Return
	
Label_2359:
	var_172_int = 35305; // 0x937 PushI
	var_173_bool = var_46_bool == var_172_int; // 0x938 Eq
	if(var_173_bool == 0) goto Label_2362; // 0x939 JumpB
	
Label_2362:
	var_174_int = 35315; // 0x93a PushI
	var_175_bool = var_46_bool == var_174_int; // 0x93b Eq
	if(var_175_bool == 0) goto Label_2385; // 0x93c JumpB
	var_176_string = ""; // 0x93d PushV
	var_176_string = "Grin"; // 0x93e MovS
	func_2201(var_47_cvector, var_176_string); // 0x93f NEW_2
	var_177_int = 533773; // 0x941 PushI
	SetMessage(var_177_int); // 0x942 TObjFunc
	ClearReplies(); // 0x944 TObjFunc
	var_178_int = 533774; // 0x946 PushI
	var_179_int = 35317; // 0x947 PushI
	var_180_int = 35316; // 0x948 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x949 TObjFunc
	var_181_int = 533778; // 0x94b PushI
	var_182_int = 35323; // 0x94c PushI
	var_183_int = 35322; // 0x94d PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x94e TObjFunc
	return 0; // 0x950 Return
	
Label_2385:
	var_184_int = 35323; // 0x951 PushI
	var_185_bool = var_46_bool == var_184_int; // 0x952 Eq
	if(var_185_bool == 0) goto Label_2408; // 0x953 JumpB
	var_186_string = ""; // 0x954 PushV
	var_186_string = "Grin"; // 0x955 MovS
	func_2201(var_47_cvector, var_186_string); // 0x956 NEW_2
	var_187_int = 533779; // 0x958 PushI
	SetMessage(var_187_int); // 0x959 TObjFunc
	ClearReplies(); // 0x95b TObjFunc
	var_188_int = 533780; // 0x95d PushI
	var_189_int = -1; // 0x95e PushI
	var_190_int = 35324; // 0x95f PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x960 TObjFunc
	var_191_int = 533781; // 0x962 PushI
	var_192_int = -1; // 0x963 PushI
	var_193_int = 35325; // 0x964 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x965 TObjFunc
	return 0; // 0x967 Return
	
Label_2408:
	var_194_int = 35317; // 0x968 PushI
	var_195_bool = var_46_bool == var_194_int; // 0x969 Eq
	if(var_195_bool == 0) goto Label_2431; // 0x96a JumpB
	var_196_string = ""; // 0x96b PushV
	var_196_string = "Grin"; // 0x96c MovS
	func_2201(var_47_cvector, var_196_string); // 0x96d NEW_2
	var_197_int = 533775; // 0x96f PushI
	SetMessage(var_197_int); // 0x970 TObjFunc
	ClearReplies(); // 0x972 TObjFunc
	var_198_int = 533776; // 0x974 PushI
	var_199_int = 35309; // 0x975 PushI
	var_200_int = 35318; // 0x976 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x977 TObjFunc
	var_201_int = 533777; // 0x979 PushI
	var_202_int = 35309; // 0x97a PushI
	var_203_int = 35320; // 0x97b PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x97c TObjFunc
	return 0; // 0x97e Return
	
Label_2431:
	var_204_int = 35307; // 0x97f PushI
	var_205_bool = var_46_bool == var_204_int; // 0x980 Eq
	if(var_205_bool == 0) goto Label_2449; // 0x981 JumpB
	var_206_string = ""; // 0x982 PushV
	var_206_string = "Grin"; // 0x983 MovS
	func_2201(var_47_cvector, var_206_string); // 0x984 NEW_2
	var_207_int = 533765; // 0x986 PushI
	SetMessage(var_207_int); // 0x987 TObjFunc
	ClearReplies(); // 0x989 TObjFunc
	var_208_int = 533766; // 0x98b PushI
	var_209_int = 35309; // 0x98c PushI
	var_210_int = 35308; // 0x98d PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x98e TObjFunc
	return 0; // 0x990 Return
	
Label_2449:
	var_211_int = 35309; // 0x991 PushI
	var_212_bool = var_46_bool == var_211_int; // 0x992 Eq
	if(var_212_bool == 0) goto Label_2467; // 0x993 JumpB
	var_213_string = ""; // 0x994 PushV
	var_213_string = "Grin"; // 0x995 MovS
	func_2201(var_47_cvector, var_213_string); // 0x996 NEW_2
	var_214_int = 533767; // 0x998 PushI
	SetMessage(var_214_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_215_int = 533768; // 0x99d PushI
	var_216_int = 35311; // 0x99e PushI
	var_217_int = 35310; // 0x99f PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x9a0 TObjFunc
	return 0; // 0x9a2 Return
	
Label_2467:
	var_218_int = 35311; // 0x9a3 PushI
	var_219_bool = var_46_bool == var_218_int; // 0x9a4 Eq
	if(var_219_bool == 0) goto Label_2490; // 0x9a5 JumpB
	var_220_string = ""; // 0x9a6 PushV
	var_220_string = "Neutral"; // 0x9a7 MovS
	func_2201(var_47_cvector, var_220_string); // 0x9a8 NEW_2
	var_221_int = 533769; // 0x9aa PushI
	SetMessage(var_221_int); // 0x9ab TObjFunc
	ClearReplies(); // 0x9ad TObjFunc
	var_222_int = 533770; // 0x9af PushI
	var_223_int = -1; // 0x9b0 PushI
	var_224_int = 35312; // 0x9b1 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x9b2 TObjFunc
	var_225_int = 533771; // 0x9b4 PushI
	var_226_int = -1; // 0x9b5 PushI
	var_227_int = 35313; // 0x9b6 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x9b7 TObjFunc
	return 0; // 0x9b9 Return
	
Label_2490:
	var_228_int = 35291; // 0x9ba PushI
	var_229_bool = var_46_bool == var_228_int; // 0x9bb Eq
	if(var_229_bool == 0) goto Label_2493; // 0x9bc JumpB
	
Label_2493:
	var_230_int = 35293; // 0x9bd PushI
	var_231_bool = var_46_bool == var_230_int; // 0x9be Eq
	if(var_231_bool == 0) goto Label_2516; // 0x9bf JumpB
	var_232_string = ""; // 0x9c0 PushV
	var_232_string = "What"; // 0x9c1 MovS
	func_2201(var_47_cvector, var_232_string); // 0x9c2 NEW_2
	var_233_int = 533753; // 0x9c4 PushI
	SetMessage(var_233_int); // 0x9c5 TObjFunc
	ClearReplies(); // 0x9c7 TObjFunc
	var_234_int = 533754; // 0x9c9 PushI
	var_235_int = 35295; // 0x9ca PushI
	var_236_int = 35294; // 0x9cb PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x9cc TObjFunc
	var_237_int = 533760; // 0x9ce PushI
	var_238_int = 35297; // 0x9cf PushI
	var_239_int = 35300; // 0x9d0 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x9d1 TObjFunc
	return 0; // 0x9d3 Return
	
Label_2516:
	var_240_int = 35295; // 0x9d4 PushI
	var_241_bool = var_46_bool == var_240_int; // 0x9d5 Eq
	if(var_241_bool == 0) goto Label_2534; // 0x9d6 JumpB
	var_242_string = ""; // 0x9d7 PushV
	var_242_string = "What"; // 0x9d8 MovS
	func_2201(var_47_cvector, var_242_string); // 0x9d9 NEW_2
	var_243_int = 533755; // 0x9db PushI
	SetMessage(var_243_int); // 0x9dc TObjFunc
	ClearReplies(); // 0x9de TObjFunc
	var_244_int = 533756; // 0x9e0 PushI
	var_245_int = 35297; // 0x9e1 PushI
	var_246_int = 35296; // 0x9e2 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x9e3 TObjFunc
	return 0; // 0x9e5 Return
	
Label_2534:
	var_247_int = 35297; // 0x9e6 PushI
	var_248_bool = var_46_bool == var_247_int; // 0x9e7 Eq
	if(var_248_bool == 0) goto Label_2557; // 0x9e8 JumpB
	var_249_string = ""; // 0x9e9 PushV
	var_249_string = "What"; // 0x9ea MovS
	func_2201(var_47_cvector, var_249_string); // 0x9eb NEW_2
	var_250_int = 533757; // 0x9ed PushI
	SetMessage(var_250_int); // 0x9ee TObjFunc
	ClearReplies(); // 0x9f0 TObjFunc
	var_251_int = 533758; // 0x9f2 PushI
	var_252_int = -1; // 0x9f3 PushI
	var_253_int = 35298; // 0x9f4 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x9f5 TObjFunc
	var_254_int = 533759; // 0x9f7 PushI
	var_255_int = -1; // 0x9f8 PushI
	var_256_int = 35299; // 0x9f9 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x9fa TObjFunc
	return 0; // 0x9fc Return
	
Label_2557:
	var_257_int = 35275; // 0x9fd PushI
	var_258_bool = var_46_bool == var_257_int; // 0x9fe Eq
	if(var_258_bool == 0) goto Label_2560; // 0x9ff JumpB
	
Label_2560:
	var_259_int = 35277; // 0xa00 PushI
	var_260_bool = var_46_bool == var_259_int; // 0xa01 Eq
	if(var_260_bool == 0) goto Label_2583; // 0xa02 JumpB
	var_261_string = ""; // 0xa03 PushV
	var_261_string = "Untrust"; // 0xa04 MovS
	func_2201(var_47_cvector, var_261_string); // 0xa05 NEW_2
	var_262_int = 533737; // 0xa07 PushI
	SetMessage(var_262_int); // 0xa08 TObjFunc
	ClearReplies(); // 0xa0a TObjFunc
	var_263_int = 533738; // 0xa0c PushI
	var_264_int = 35279; // 0xa0d PushI
	var_265_int = 35278; // 0xa0e PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xa0f TObjFunc
	var_266_int = 533747; // 0xa11 PushI
	var_267_int = 35288; // 0xa12 PushI
	var_268_int = 35287; // 0xa13 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa14 TObjFunc
	return 0; // 0xa16 Return
	
Label_2583:
	var_269_int = 35288; // 0xa17 PushI
	var_270_bool = var_46_bool == var_269_int; // 0xa18 Eq
	if(var_270_bool == 0) goto Label_2601; // 0xa19 JumpB
	var_271_string = ""; // 0xa1a PushV
	var_271_string = "Untrust"; // 0xa1b MovS
	func_2201(var_47_cvector, var_271_string); // 0xa1c NEW_2
	var_272_int = 533748; // 0xa1e PushI
	SetMessage(var_272_int); // 0xa1f TObjFunc
	ClearReplies(); // 0xa21 TObjFunc
	var_273_int = 533749; // 0xa23 PushI
	var_274_int = -1; // 0xa24 PushI
	var_275_int = 35289; // 0xa25 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xa26 TObjFunc
	return 0; // 0xa28 Return
	
Label_2601:
	var_276_int = 35279; // 0xa29 PushI
	var_277_bool = var_46_bool == var_276_int; // 0xa2a Eq
	if(var_277_bool == 0) goto Label_2624; // 0xa2b JumpB
	var_278_string = ""; // 0xa2c PushV
	var_278_string = "Untrust"; // 0xa2d MovS
	func_2201(var_47_cvector, var_278_string); // 0xa2e NEW_2
	var_279_int = 533739; // 0xa30 PushI
	SetMessage(var_279_int); // 0xa31 TObjFunc
	ClearReplies(); // 0xa33 TObjFunc
	var_280_int = 533740; // 0xa35 PushI
	var_281_int = 35281; // 0xa36 PushI
	var_282_int = 35280; // 0xa37 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xa38 TObjFunc
	var_283_int = 533746; // 0xa3a PushI
	var_284_int = -1; // 0xa3b PushI
	var_285_int = 35286; // 0xa3c PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xa3d TObjFunc
	return 0; // 0xa3f Return
	
Label_2624:
	var_286_int = 35281; // 0xa40 PushI
	var_287_bool = var_46_bool == var_286_int; // 0xa41 Eq
	if(var_287_bool == 0) goto Label_2647; // 0xa42 JumpB
	var_288_string = ""; // 0xa43 PushV
	var_288_string = "What"; // 0xa44 MovS
	func_2201(var_47_cvector, var_288_string); // 0xa45 NEW_2
	var_289_int = 533741; // 0xa47 PushI
	SetMessage(var_289_int); // 0xa48 TObjFunc
	ClearReplies(); // 0xa4a TObjFunc
	var_290_int = 533742; // 0xa4c PushI
	var_291_int = 35283; // 0xa4d PushI
	var_292_int = 35282; // 0xa4e PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xa4f TObjFunc
	var_293_int = 533745; // 0xa51 PushI
	var_294_int = -1; // 0xa52 PushI
	var_295_int = 35285; // 0xa53 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xa54 TObjFunc
	return 0; // 0xa56 Return
	
Label_2647:
	var_296_int = 35283; // 0xa57 PushI
	var_297_bool = var_46_bool == var_296_int; // 0xa58 Eq
	if(var_297_bool == 0) goto Label_2670; // 0xa59 JumpB
	var_298_string = ""; // 0xa5a PushV
	var_298_string = "What"; // 0xa5b MovS
	func_2201(var_47_cvector, var_298_string); // 0xa5c NEW_2
	var_299_int = 533743; // 0xa5e PushI
	SetMessage(var_299_int); // 0xa5f TObjFunc
	ClearReplies(); // 0xa61 TObjFunc
	var_300_int = 533744; // 0xa63 PushI
	var_301_int = -1; // 0xa64 PushI
	var_302_int = 35284; // 0xa65 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xa66 TObjFunc
	var_303_int = 535141; // 0xa68 PushI
	var_304_int = -1; // 0xa69 PushI
	var_305_int = 36802; // 0xa6a PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xa6b TObjFunc
	return 0; // 0xa6d Return
	
Label_2670:
	var_306_int = 35249; // 0xa6e PushI
	var_307_bool = var_46_bool == var_306_int; // 0xa6f Eq
	if(var_307_bool == 0) goto Label_2673; // 0xa70 JumpB
	
Label_2673:
	var_308_int = 35257; // 0xa71 PushI
	var_309_bool = var_46_bool == var_308_int; // 0xa72 Eq
	if(var_309_bool == 0) goto Label_2691; // 0xa73 JumpB
	var_310_string = ""; // 0xa74 PushV
	var_310_string = "What"; // 0xa75 MovS
	func_2201(var_47_cvector, var_310_string); // 0xa76 NEW_2
	var_311_int = 533718; // 0xa78 PushI
	SetMessage(var_311_int); // 0xa79 TObjFunc
	ClearReplies(); // 0xa7b TObjFunc
	var_312_int = 533719; // 0xa7d PushI
	var_313_int = 35259; // 0xa7e PushI
	var_314_int = 35258; // 0xa7f PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xa80 TObjFunc
	return 0; // 0xa82 Return
	
Label_2691:
	var_315_int = 35259; // 0xa83 PushI
	var_316_bool = var_46_bool == var_315_int; // 0xa84 Eq
	if(var_316_bool == 0) goto Label_2714; // 0xa85 JumpB
	var_317_string = ""; // 0xa86 PushV
	var_317_string = "What"; // 0xa87 MovS
	func_2201(var_47_cvector, var_317_string); // 0xa88 NEW_2
	var_318_int = 533720; // 0xa8a PushI
	SetMessage(var_318_int); // 0xa8b TObjFunc
	ClearReplies(); // 0xa8d TObjFunc
	var_319_int = 533721; // 0xa8f PushI
	var_320_int = 35261; // 0xa90 PushI
	var_321_int = 35260; // 0xa91 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0xa92 TObjFunc
	var_322_int = 535106; // 0xa94 PushI
	var_323_int = -1; // 0xa95 PushI
	var_324_int = 36762; // 0xa96 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xa97 TObjFunc
	return 0; // 0xa99 Return
	
Label_2714:
	var_325_int = 35261; // 0xa9a PushI
	var_326_bool = var_46_bool == var_325_int; // 0xa9b Eq
	if(var_326_bool == 0) goto Label_2732; // 0xa9c JumpB
	var_327_string = ""; // 0xa9d PushV
	var_327_string = "What"; // 0xa9e MovS
	func_2201(var_47_cvector, var_327_string); // 0xa9f NEW_2
	var_328_int = 533722; // 0xaa1 PushI
	SetMessage(var_328_int); // 0xaa2 TObjFunc
	ClearReplies(); // 0xaa4 TObjFunc
	var_329_int = 533723; // 0xaa6 PushI
	var_330_int = -1; // 0xaa7 PushI
	var_331_int = 35262; // 0xaa8 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0xaa9 TObjFunc
	return 0; // 0xaab Return
	
Label_2732:
	var_332_int = 35251; // 0xaac PushI
	var_333_bool = var_46_bool == var_332_int; // 0xaad Eq
	if(var_333_bool == 0) goto Label_2755; // 0xaae JumpB
	var_334_string = ""; // 0xaaf PushV
	var_334_string = "What"; // 0xab0 MovS
	func_2201(var_47_cvector, var_334_string); // 0xab1 NEW_2
	var_335_int = 533712; // 0xab3 PushI
	SetMessage(var_335_int); // 0xab4 TObjFunc
	ClearReplies(); // 0xab6 TObjFunc
	var_336_int = 533713; // 0xab8 PushI
	var_337_int = -1; // 0xab9 PushI
	var_338_int = 35252; // 0xaba PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xabb TObjFunc
	var_339_int = 533714; // 0xabd PushI
	var_340_int = 35254; // 0xabe PushI
	var_341_int = 35253; // 0xabf PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xac0 TObjFunc
	return 0; // 0xac2 Return
	
Label_2755:
	var_342_int = 35254; // 0xac3 PushI
	var_343_bool = var_46_bool == var_342_int; // 0xac4 Eq
	if(var_343_bool == 0) goto Label_2773; // 0xac5 JumpB
	var_344_string = ""; // 0xac6 PushV
	var_344_string = "What"; // 0xac7 MovS
	func_2201(var_47_cvector, var_344_string); // 0xac8 NEW_2
	var_345_int = 533715; // 0xaca PushI
	SetMessage(var_345_int); // 0xacb TObjFunc
	ClearReplies(); // 0xacd TObjFunc
	var_346_int = 533716; // 0xacf PushI
	var_347_int = -1; // 0xad0 PushI
	var_348_int = 35255; // 0xad1 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xad2 TObjFunc
	return 0; // 0xad4 Return
	
Label_2773:
	var_349_int = 10754; // 0xad5 PushI
	var_350_bool = var_46_bool == var_349_int; // 0xad6 Eq
	if(var_350_bool == 0) goto Label_2776; // 0xad7 JumpB
	
Label_2776:
	var_351_int = 10756; // 0xad8 PushI
	var_352_bool = var_46_bool == var_351_int; // 0xad9 Eq
	if(var_352_bool == 0) goto Label_2799; // 0xada JumpB
	var_353_string = ""; // 0xadb PushV
	var_353_string = "Neutral"; // 0xadc MovS
	func_2201(var_47_cvector, var_353_string); // 0xadd NEW_2
	var_354_int = 509766; // 0xadf PushI
	SetMessage(var_354_int); // 0xae0 TObjFunc
	ClearReplies(); // 0xae2 TObjFunc
	var_355_int = 509767; // 0xae4 PushI
	var_356_int = -1; // 0xae5 PushI
	var_357_int = 10757; // 0xae6 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xae7 TObjFunc
	var_358_int = 509768; // 0xae9 PushI
	var_359_int = -1; // 0xaea PushI
	var_360_int = 10758; // 0xaeb PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xaec TObjFunc
	return 0; // 0xaee Return
	
Label_2799:
	var_361_int = 10732; // 0xaef PushI
	var_362_bool = var_46_bool == var_361_int; // 0xaf0 Eq
	if(var_362_bool == 0) goto Label_2827; // 0xaf1 JumpB
	var_363_string = ""; // 0xaf2 PushV
	var_363_string = "Smile"; // 0xaf3 MovS
	func_2201(var_47_cvector, var_363_string); // 0xaf4 NEW_2
	var_364_int = 509746; // 0xaf6 PushI
	SetMessage(var_364_int); // 0xaf7 TObjFunc
	ClearReplies(); // 0xaf9 TObjFunc
	var_365_int = 509747; // 0xafb PushI
	var_366_int = 10734; // 0xafc PushI
	var_367_int = 10733; // 0xafd PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xafe TObjFunc
	var_368_int = 509757; // 0xb00 PushI
	var_369_int = 10734; // 0xb01 PushI
	var_370_int = 10744; // 0xb02 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xb03 TObjFunc
	var_371_int = 509758; // 0xb05 PushI
	var_372_int = 10747; // 0xb06 PushI
	var_373_int = 10746; // 0xb07 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xb08 TObjFunc
	return 0; // 0xb0a Return
	
Label_2827:
	var_374_int = 10747; // 0xb0b PushI
	var_375_bool = var_46_bool == var_374_int; // 0xb0c Eq
	if(var_375_bool == 0) goto Label_2850; // 0xb0d JumpB
	var_376_string = ""; // 0xb0e PushV
	var_376_string = "Smile"; // 0xb0f MovS
	func_2201(var_47_cvector, var_376_string); // 0xb10 NEW_2
	var_377_int = 509759; // 0xb12 PushI
	SetMessage(var_377_int); // 0xb13 TObjFunc
	ClearReplies(); // 0xb15 TObjFunc
	var_378_int = 509760; // 0xb17 PushI
	var_379_int = 10734; // 0xb18 PushI
	var_380_int = 10748; // 0xb19 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xb1a TObjFunc
	var_381_int = 509761; // 0xb1c PushI
	var_382_int = 10734; // 0xb1d PushI
	var_383_int = 10750; // 0xb1e PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xb1f TObjFunc
	return 0; // 0xb21 Return
	
Label_2850:
	var_384_int = 10734; // 0xb22 PushI
	var_385_bool = var_46_bool == var_384_int; // 0xb23 Eq
	if(var_385_bool == 0) goto Label_2873; // 0xb24 JumpB
	var_386_string = ""; // 0xb25 PushV
	var_386_string = "What"; // 0xb26 MovS
	func_2201(var_47_cvector, var_386_string); // 0xb27 NEW_2
	var_387_int = 509748; // 0xb29 PushI
	SetMessage(var_387_int); // 0xb2a TObjFunc
	ClearReplies(); // 0xb2c TObjFunc
	var_388_int = 509749; // 0xb2e PushI
	var_389_int = 10736; // 0xb2f PushI
	var_390_int = 10735; // 0xb30 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xb31 TObjFunc
	var_391_int = 509756; // 0xb33 PushI
	var_392_int = -1; // 0xb34 PushI
	var_393_int = 10743; // 0xb35 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xb36 TObjFunc
	return 0; // 0xb38 Return
	
Label_2873:
	var_394_int = 10736; // 0xb39 PushI
	var_395_bool = var_46_bool == var_394_int; // 0xb3a Eq
	if(var_395_bool == 0) goto Label_2896; // 0xb3b JumpB
	var_396_string = ""; // 0xb3c PushV
	var_396_string = "What"; // 0xb3d MovS
	func_2201(var_47_cvector, var_396_string); // 0xb3e NEW_2
	var_397_int = 509750; // 0xb40 PushI
	SetMessage(var_397_int); // 0xb41 TObjFunc
	ClearReplies(); // 0xb43 TObjFunc
	var_398_int = 509751; // 0xb45 PushI
	var_399_int = 10738; // 0xb46 PushI
	var_400_int = 10737; // 0xb47 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xb48 TObjFunc
	var_401_int = 509755; // 0xb4a PushI
	var_402_int = 10738; // 0xb4b PushI
	var_403_int = 10741; // 0xb4c PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xb4d TObjFunc
	return 0; // 0xb4f Return
	
Label_2896:
	var_404_int = 10738; // 0xb50 PushI
	var_405_bool = var_46_bool == var_404_int; // 0xb51 Eq
	if(var_405_bool == 0) goto Label_2919; // 0xb52 JumpB
	var_406_string = ""; // 0xb53 PushV
	var_406_string = "Grin"; // 0xb54 MovS
	func_2201(var_47_cvector, var_406_string); // 0xb55 NEW_2
	var_407_int = 509752; // 0xb57 PushI
	SetMessage(var_407_int); // 0xb58 TObjFunc
	ClearReplies(); // 0xb5a TObjFunc
	var_408_int = 509753; // 0xb5c PushI
	var_409_int = -1; // 0xb5d PushI
	var_410_int = 10739; // 0xb5e PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xb5f TObjFunc
	var_411_int = 509754; // 0xb61 PushI
	var_412_int = -1; // 0xb62 PushI
	var_413_int = 10740; // 0xb63 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xb64 TObjFunc
	return 0; // 0xb66 Return
	
Label_2919:
	var_3_string = 1; // 0xb67 TMovB
	var_414_bool = 0; // 0xb68 PushV
	func_5708(var_414_bool); // 0xb69 NEW_2
	if(var_414_bool == 0) goto Label_2927; // 0xb6b JumpB
	lshStopAnimation(); // 0xb6c Func
	goto Label_2929; // 0xb6e Jump
	
Label_2929:
	return 0; // 0xb71 Return
	
Label_2927:
	StopAnimation(); // 0xb6f Func
	
Label_2931:
	return 0; // 0xb73 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xc16 PushI
	if(var_48_int == 0) goto Label_3270; // 0xc17 JumpB
	func_5534(); // 0xc19 NEW_2
	var_50_int = 14986; // 0xc1b PushI
	var_51_bool = var_46_bool == var_50_int; // 0xc1c Eq
	if(var_51_bool == 0) goto Label_3122; // 0xc1d JumpB
	var_52_string = ""; // 0xc1e PushV
	var_52_string = "Neutral"; // 0xc1f MovS
	func_3071(var_47_cvector, var_52_string); // 0xc20 NEW_2
	var_69_int = 513720; // 0xc22 PushI
	SetMessage(var_69_int); // 0xc23 TObjFunc
	ClearReplies(); // 0xc25 TObjFunc
	var_70_int = 513722; // 0xc27 PushI
	var_71_int = -1; // 0xc28 PushI
	var_72_int = 14988; // 0xc29 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xc2a TObjFunc
	var_73_int = 536132; // 0xc2c PushI
	var_74_int = -1; // 0xc2d PushI
	var_75_int = 37891; // 0xc2e PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xc2f TObjFunc
	return 0; // 0xc31 Return
	
Label_3122:
	var_76_int = 13787; // 0xc32 PushI
	var_77_bool = var_46_bool == var_76_int; // 0xc33 Eq
	if(var_77_bool == 0) goto Label_3125; // 0xc34 JumpB
	
Label_3125:
	var_78_int = 13812; // 0xc35 PushI
	var_79_bool = var_46_bool == var_78_int; // 0xc36 Eq
	if(var_79_bool == 0) goto Label_3143; // 0xc37 JumpB
	var_80_string = ""; // 0xc38 PushV
	var_80_string = "Neutral"; // 0xc39 MovS
	func_3071(var_47_cvector, var_80_string); // 0xc3a NEW_2
	var_81_int = 512633; // 0xc3c PushI
	SetMessage(var_81_int); // 0xc3d TObjFunc
	ClearReplies(); // 0xc3f TObjFunc
	var_82_int = 512634; // 0xc41 PushI
	var_83_int = 13791; // 0xc42 PushI
	var_84_int = 13813; // 0xc43 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xc44 TObjFunc
	return 0; // 0xc46 Return
	
Label_3143:
	var_85_int = 13789; // 0xc47 PushI
	var_86_bool = var_46_bool == var_85_int; // 0xc48 Eq
	if(var_86_bool == 0) goto Label_3166; // 0xc49 JumpB
	var_87_string = ""; // 0xc4a PushV
	var_87_string = "Neutral"; // 0xc4b MovS
	func_3071(var_47_cvector, var_87_string); // 0xc4c NEW_2
	var_88_int = 512615; // 0xc4e PushI
	SetMessage(var_88_int); // 0xc4f TObjFunc
	ClearReplies(); // 0xc51 TObjFunc
	var_89_int = 512616; // 0xc53 PushI
	var_90_int = 13791; // 0xc54 PushI
	var_91_int = 13790; // 0xc55 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xc56 TObjFunc
	var_92_int = 512623; // 0xc58 PushI
	var_93_int = 13800; // 0xc59 PushI
	var_94_int = 13799; // 0xc5a PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xc5b TObjFunc
	return 0; // 0xc5d Return
	
Label_3166:
	var_95_int = 13800; // 0xc5e PushI
	var_96_bool = var_46_bool == var_95_int; // 0xc5f Eq
	if(var_96_bool == 0) goto Label_3189; // 0xc60 JumpB
	var_97_string = ""; // 0xc61 PushV
	var_97_string = "Grin"; // 0xc62 MovS
	func_3071(var_47_cvector, var_97_string); // 0xc63 NEW_2
	var_98_int = 512624; // 0xc65 PushI
	SetMessage(var_98_int); // 0xc66 TObjFunc
	ClearReplies(); // 0xc68 TObjFunc
	var_99_int = 512625; // 0xc6a PushI
	var_100_int = 13802; // 0xc6b PushI
	var_101_int = 13801; // 0xc6c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xc6d TObjFunc
	var_102_int = 512629; // 0xc6f PushI
	var_103_int = 13802; // 0xc70 PushI
	var_104_int = 13805; // 0xc71 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xc72 TObjFunc
	return 0; // 0xc74 Return
	
Label_3189:
	var_105_int = 13802; // 0xc75 PushI
	var_106_bool = var_46_bool == var_105_int; // 0xc76 Eq
	if(var_106_bool == 0) goto Label_3212; // 0xc77 JumpB
	var_107_string = ""; // 0xc78 PushV
	var_107_string = "Untrust"; // 0xc79 MovS
	func_3071(var_47_cvector, var_107_string); // 0xc7a NEW_2
	var_108_int = 512626; // 0xc7c PushI
	SetMessage(var_108_int); // 0xc7d TObjFunc
	ClearReplies(); // 0xc7f TObjFunc
	var_109_int = 512627; // 0xc81 PushI
	var_110_int = -1; // 0xc82 PushI
	var_111_int = 13803; // 0xc83 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xc84 TObjFunc
	var_112_int = 512628; // 0xc86 PushI
	var_113_int = -1; // 0xc87 PushI
	var_114_int = 13804; // 0xc88 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xc89 TObjFunc
	return 0; // 0xc8b Return
	
Label_3212:
	var_115_int = 13791; // 0xc8c PushI
	var_116_bool = var_46_bool == var_115_int; // 0xc8d Eq
	if(var_116_bool == 0) goto Label_3235; // 0xc8e JumpB
	var_117_string = ""; // 0xc8f PushV
	var_117_string = "Smile"; // 0xc90 MovS
	func_3071(var_47_cvector, var_117_string); // 0xc91 NEW_2
	var_118_int = 512617; // 0xc93 PushI
	SetMessage(var_118_int); // 0xc94 TObjFunc
	ClearReplies(); // 0xc96 TObjFunc
	var_119_int = 512618; // 0xc98 PushI
	var_120_int = 13793; // 0xc99 PushI
	var_121_int = 13792; // 0xc9a PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xc9b TObjFunc
	var_122_int = 512622; // 0xc9d PushI
	var_123_int = 13802; // 0xc9e PushI
	var_124_int = 13797; // 0xc9f PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xca0 TObjFunc
	return 0; // 0xca2 Return
	
Label_3235:
	var_125_int = 13793; // 0xca3 PushI
	var_126_bool = var_46_bool == var_125_int; // 0xca4 Eq
	if(var_126_bool == 0) goto Label_3258; // 0xca5 JumpB
	var_127_string = ""; // 0xca6 PushV
	var_127_string = "Smile"; // 0xca7 MovS
	func_3071(var_47_cvector, var_127_string); // 0xca8 NEW_2
	var_128_int = 512619; // 0xcaa PushI
	SetMessage(var_128_int); // 0xcab TObjFunc
	ClearReplies(); // 0xcad TObjFunc
	var_129_int = 512621; // 0xcaf PushI
	var_130_int = 13802; // 0xcb0 PushI
	var_131_int = 13795; // 0xcb1 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xcb2 TObjFunc
	var_132_int = 512620; // 0xcb4 PushI
	var_133_int = -1; // 0xcb5 PushI
	var_134_int = 13794; // 0xcb6 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xcb7 TObjFunc
	return 0; // 0xcb9 Return
	
Label_3258:
	var_3_string = 1; // 0xcba TMovB
	var_135_bool = 0; // 0xcbb PushV
	func_5708(var_135_bool); // 0xcbc NEW_2
	if(var_135_bool == 0) goto Label_3266; // 0xcbe JumpB
	lshStopAnimation(); // 0xcbf Func
	goto Label_3268; // 0xcc1 Jump
	
Label_3268:
	return 0; // 0xcc4 Return
	
Label_3266:
	StopAnimation(); // 0xcc2 Func
	
Label_3270:
	return 0; // 0xcc6 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xd9b PushI
	if(var_48_int == 0) goto Label_3775; // 0xd9c JumpB
	func_5534(); // 0xd9e NEW_2
	var_50_int = 14165; // 0xda0 PushI
	var_51_bool = var_46_bool == var_50_int; // 0xda1 Eq
	if(var_51_bool == 0) goto Label_3561; // 0xda2 JumpB
	var_52_bool = 0; // 0xda3 PushV
	var_52_bool = 0; // 0xda4 MovB
	var_53_bool = 0; // 0xda5 PushV
	var_53_bool = 0; // 0xda6 MovB
	var_54_bool = 0; var_55_object = Obj(); // 0xda7 PushV
	var_55_object = var_1_object; // 0xda8 MovT
	func_6211(var_55_object); // 0xda9 NEW_2
	var_62_bool = var_54_bool == 0; // 0xdab Not
	if(var_62_bool == 0) goto Label_3508; // 0xdac JumpB
	var_63_bool = 0; var_64_object = Obj(); // 0xdad PushV
	var_64_object = var_1_object; // 0xdae MovT
	func_6223(var_64_object); // 0xdaf NEW_2
	var_69_bool = var_63_bool == 0; // 0xdb1 Not
	if(var_69_bool == 0) goto Label_3508; // 0xdb2 JumpB
	var_53_bool = 1; // 0xdb3 MovB
	
Label_3508:
	if(var_53_bool == 0) goto Label_3515; // 0xdb4 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0xdb5 PushV
	var_71_object = var_1_object; // 0xdb6 MovT
	func_6235(var_71_object); // 0xdb7 NEW_2
	if(var_70_bool == 0) goto Label_3515; // 0xdb9 JumpB
	var_52_bool = 1; // 0xdba MovB
	
Label_3515:
	if(var_52_bool == 0) goto Label_3541; // 0xdbb JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0xdbc PushV
	var_76_object = var_1_object; // 0xdbd MovT
	var_77_object = var_0_object; // 0xdbe MovT
	func_5952(); // 0xdbf NEW_2
	var_80_string = ""; // 0xdc1 PushV
	var_80_string = "Smile"; // 0xdc2 MovS
	func_3460(var_47_cvector, var_80_string); // 0xdc3 NEW_2
	var_97_int = 512960; // 0xdc5 PushI
	SetMessage(var_97_int); // 0xdc6 TObjFunc
	ClearReplies(); // 0xdc8 TObjFunc
	var_98_int = 512961; // 0xdca PushI
	var_99_int = 41443; // 0xdcb PushI
	var_100_int = 14166; // 0xdcc PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xdcd TObjFunc
	var_101_int = 539510; // 0xdcf PushI
	var_102_int = 41440; // 0xdd0 PushI
	var_103_int = 41439; // 0xdd1 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xdd2 TObjFunc
	return 0; // 0xdd4 Return
	
Label_3541:
	var_104_string = ""; // 0xdd5 PushV
	var_104_string = "Neutral"; // 0xdd6 MovS
	func_3460(var_47_cvector, var_104_string); // 0xdd7 NEW_2
	var_105_int = 512966; // 0xdd9 PushI
	SetMessage(var_105_int); // 0xdda TObjFunc
	ClearReplies(); // 0xddc TObjFunc
	var_106_int = 512967; // 0xdde PushI
	var_107_int = -1; // 0xddf PushI
	var_108_int = 14172; // 0xde0 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xde1 TObjFunc
	var_109_int = 539509; // 0xde3 PushI
	var_110_int = -1; // 0xde4 PushI
	var_111_int = 41438; // 0xde5 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xde6 TObjFunc
	return 0; // 0xde8 Return
	
Label_3561:
	var_112_int = 41440; // 0xde9 PushI
	var_113_bool = var_46_bool == var_112_int; // 0xdea Eq
	if(var_113_bool == 0) goto Label_3589; // 0xdeb JumpB
	var_114_string = ""; // 0xdec PushV
	var_114_string = "Neutral"; // 0xded MovS
	func_3460(var_47_cvector, var_114_string); // 0xdee NEW_2
	var_115_int = 539511; // 0xdf0 PushI
	SetMessage(var_115_int); // 0xdf1 TObjFunc
	ClearReplies(); // 0xdf3 TObjFunc
	var_116_bool = 0; var_117_object = Obj(); // 0xdf5 PushV
	var_117_object = var_1_object; // 0xdf6 MovT
	func_5995(var_117_object); // 0xdf7 NEW_2
	if(var_116_bool == 0) goto Label_3583; // 0xdf9 JumpB
	var_122_int = 539512; // 0xdfa PushI
	var_123_int = 41828; // 0xdfb PushI
	var_124_int = 41441; // 0xdfc PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xdfd TObjFunc
	
Label_3583:
	var_125_int = 539513; // 0xdff PushI
	var_126_int = 14169; // 0xe00 PushI
	var_127_int = 41442; // 0xe01 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xe02 TObjFunc
	return 0; // 0xe04 Return
	
Label_3589:
	var_128_int = 41828; // 0xe05 PushI
	var_129_bool = var_46_bool == var_128_int; // 0xe06 Eq
	if(var_129_bool == 0) goto Label_3607; // 0xe07 JumpB
	var_130_string = ""; // 0xe08 PushV
	var_130_string = "Neutral"; // 0xe09 MovS
	func_3460(var_47_cvector, var_130_string); // 0xe0a NEW_2
	var_131_int = 539874; // 0xe0c PushI
	SetMessage(var_131_int); // 0xe0d TObjFunc
	ClearReplies(); // 0xe0f TObjFunc
	var_132_int = 539875; // 0xe11 PushI
	var_133_int = 41446; // 0xe12 PushI
	var_134_int = 41829; // 0xe13 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xe14 TObjFunc
	return 0; // 0xe16 Return
	
Label_3607:
	var_135_int = 41443; // 0xe17 PushI
	var_136_bool = var_46_bool == var_135_int; // 0xe18 Eq
	if(var_136_bool == 0) goto Label_3630; // 0xe19 JumpB
	var_137_string = ""; // 0xe1a PushV
	var_137_string = "Smile"; // 0xe1b MovS
	func_3460(var_47_cvector, var_137_string); // 0xe1c NEW_2
	var_138_int = 539514; // 0xe1e PushI
	SetMessage(var_138_int); // 0xe1f TObjFunc
	ClearReplies(); // 0xe21 TObjFunc
	var_139_int = 512963; // 0xe23 PushI
	var_140_int = 14169; // 0xe24 PushI
	var_141_int = 14168; // 0xe25 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xe26 TObjFunc
	var_142_int = 539527; // 0xe28 PushI
	var_143_int = 41444; // 0xe29 PushI
	var_144_int = 41458; // 0xe2a PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xe2b TObjFunc
	return 0; // 0xe2d Return
	
Label_3630:
	var_145_int = 14169; // 0xe2e PushI
	var_146_bool = var_46_bool == var_145_int; // 0xe2f Eq
	if(var_146_bool == 0) goto Label_3648; // 0xe30 JumpB
	var_147_string = ""; // 0xe31 PushV
	var_147_string = "What"; // 0xe32 MovS
	func_3460(var_47_cvector, var_147_string); // 0xe33 NEW_2
	var_148_int = 512964; // 0xe35 PushI
	SetMessage(var_148_int); // 0xe36 TObjFunc
	ClearReplies(); // 0xe38 TObjFunc
	var_149_int = 512965; // 0xe3a PushI
	var_150_int = 41444; // 0xe3b PushI
	var_151_int = 14170; // 0xe3c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xe3d TObjFunc
	return 0; // 0xe3f Return
	
Label_3648:
	var_152_int = 41444; // 0xe40 PushI
	var_153_bool = var_46_bool == var_152_int; // 0xe41 Eq
	if(var_153_bool == 0) goto Label_3676; // 0xe42 JumpB
	var_154_string = ""; // 0xe43 PushV
	var_154_string = "What"; // 0xe44 MovS
	func_3460(var_47_cvector, var_154_string); // 0xe45 NEW_2
	var_155_int = 539515; // 0xe47 PushI
	SetMessage(var_155_int); // 0xe48 TObjFunc
	ClearReplies(); // 0xe4a TObjFunc
	var_156_int = 539516; // 0xe4c PushI
	var_157_int = 41446; // 0xe4d PushI
	var_158_int = 41445; // 0xe4e PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xe4f TObjFunc
	var_159_int = 539876; // 0xe51 PushI
	var_160_int = -1; // 0xe52 PushI
	var_161_int = 41830; // 0xe53 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xe54 TObjFunc
	var_162_int = 539877; // 0xe56 PushI
	var_163_int = -1; // 0xe57 PushI
	var_164_int = 41831; // 0xe58 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xe59 TObjFunc
	return 0; // 0xe5b Return
	
Label_3676:
	var_165_int = 41446; // 0xe5c PushI
	var_166_bool = var_46_bool == var_165_int; // 0xe5d Eq
	if(var_166_bool == 0) goto Label_3699; // 0xe5e JumpB
	var_167_string = ""; // 0xe5f PushV
	var_167_string = "What"; // 0xe60 MovS
	func_3460(var_47_cvector, var_167_string); // 0xe61 NEW_2
	var_168_int = 539517; // 0xe63 PushI
	SetMessage(var_168_int); // 0xe64 TObjFunc
	ClearReplies(); // 0xe66 TObjFunc
	var_169_int = 539518; // 0xe68 PushI
	var_170_int = 41449; // 0xe69 PushI
	var_171_int = 41447; // 0xe6a PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xe6b TObjFunc
	var_172_int = 539519; // 0xe6d PushI
	var_173_int = 41452; // 0xe6e PushI
	var_174_int = 41448; // 0xe6f PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xe70 TObjFunc
	return 0; // 0xe72 Return
	
Label_3699:
	var_175_int = 41449; // 0xe73 PushI
	var_176_bool = var_46_bool == var_175_int; // 0xe74 Eq
	if(var_176_bool == 0) goto Label_3722; // 0xe75 JumpB
	var_177_string = ""; // 0xe76 PushV
	var_177_string = "What"; // 0xe77 MovS
	func_3460(var_47_cvector, var_177_string); // 0xe78 NEW_2
	var_178_int = 539520; // 0xe7a PushI
	SetMessage(var_178_int); // 0xe7b TObjFunc
	ClearReplies(); // 0xe7d TObjFunc
	var_179_int = 539521; // 0xe7f PushI
	var_180_int = 41452; // 0xe80 PushI
	var_181_int = 41450; // 0xe81 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xe82 TObjFunc
	var_182_int = 539522; // 0xe84 PushI
	var_183_int = 41452; // 0xe85 PushI
	var_184_int = 41451; // 0xe86 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xe87 TObjFunc
	return 0; // 0xe89 Return
	
Label_3722:
	var_185_int = 41452; // 0xe8a PushI
	var_186_bool = var_46_bool == var_185_int; // 0xe8b Eq
	if(var_186_bool == 0) goto Label_3745; // 0xe8c JumpB
	var_187_string = ""; // 0xe8d PushV
	var_187_string = "What"; // 0xe8e MovS
	func_3460(var_47_cvector, var_187_string); // 0xe8f NEW_2
	var_188_int = 539523; // 0xe91 PushI
	SetMessage(var_188_int); // 0xe92 TObjFunc
	ClearReplies(); // 0xe94 TObjFunc
	var_189_int = 539524; // 0xe96 PushI
	var_190_int = -1; // 0xe97 PushI
	var_191_int = 41454; // 0xe98 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xe99 TObjFunc
	var_192_int = 539872; // 0xe9b PushI
	var_193_int = 41827; // 0xe9c PushI
	var_194_int = 41826; // 0xe9d PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xe9e TObjFunc
	return 0; // 0xea0 Return
	
Label_3745:
	var_195_int = 41827; // 0xea1 PushI
	var_196_bool = var_46_bool == var_195_int; // 0xea2 Eq
	if(var_196_bool == 0) goto Label_3763; // 0xea3 JumpB
	var_197_string = ""; // 0xea4 PushV
	var_197_string = "Neutral"; // 0xea5 MovS
	func_3460(var_47_cvector, var_197_string); // 0xea6 NEW_2
	var_198_int = 539873; // 0xea8 PushI
	SetMessage(var_198_int); // 0xea9 TObjFunc
	ClearReplies(); // 0xeab TObjFunc
	var_199_int = 539525; // 0xead PushI
	var_200_int = -1; // 0xeae PushI
	var_201_int = 41455; // 0xeaf PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xeb0 TObjFunc
	return 0; // 0xeb2 Return
	
Label_3763:
	var_3_string = 1; // 0xeb3 TMovB
	var_202_bool = 0; // 0xeb4 PushV
	func_5708(var_202_bool); // 0xeb5 NEW_2
	if(var_202_bool == 0) goto Label_3771; // 0xeb7 JumpB
	lshStopAnimation(); // 0xeb8 Func
	goto Label_3773; // 0xeba Jump
	
Label_3773:
	return 0; // 0xebd Return
	
Label_3771:
	StopAnimation(); // 0xebb Func
	
Label_3775:
	return 0; // 0xebf Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xfaa PushI
	if(var_48_int == 0) goto Label_4766; // 0xfab JumpB
	func_5534(); // 0xfad NEW_2
	var_50_int = 15743; // 0xfaf PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xfb0 Eq
	if(var_51_bool == 0) goto Label_4038; // 0xfb1 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xfb2 PushV
	var_52_object = var_1_object; // 0xfb3 MovT
	var_53_object = var_0_object; // 0xfb4 MovT
	func_5900(var_53_object); // 0xfb5 NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0xfb7 PushV
	var_101_object = var_1_object; // 0xfb8 MovT
	var_102_object = var_0_object; // 0xfb9 MovT
	func_5784(); // 0xfba NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0xfbc PushV
	var_113_object = var_1_object; // 0xfbd MovT
	var_114_object = var_0_object; // 0xfbe MovT
	func_5742(); // 0xfbf NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0xfc1 PushV
	var_117_object = var_1_object; // 0xfc2 MovT
	var_118_object = var_0_object; // 0xfc3 MovT
	func_5710(); // 0xfc4 NEW_2
	
Label_4038:
	var_149_int = 41888; // 0xfc6 PushI
	var_150_bool = var_47_cvector == var_149_int; // 0xfc7 Eq
	if(var_150_bool == 0) goto Label_4061; // 0xfc8 JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0xfc9 PushV
	var_151_object = var_1_object; // 0xfca MovT
	var_152_object = var_0_object; // 0xfcb MovT
	func_5900(var_152_object); // 0xfcc NEW_2
	var_153_object = Obj(); var_154_object = Obj(); // 0xfce PushV
	var_153_object = var_1_object; // 0xfcf MovT
	var_154_object = var_0_object; // 0xfd0 MovT
	func_5784(); // 0xfd1 NEW_2
	var_155_object = Obj(); var_156_object = Obj(); // 0xfd3 PushV
	var_155_object = var_1_object; // 0xfd4 MovT
	var_156_object = var_0_object; // 0xfd5 MovT
	func_5742(); // 0xfd6 NEW_2
	var_157_object = Obj(); var_158_object = Obj(); // 0xfd8 PushV
	var_157_object = var_1_object; // 0xfd9 MovT
	var_158_object = var_0_object; // 0xfda MovT
	func_5710(); // 0xfdb NEW_2
	
Label_4061:
	var_159_int = 41885; // 0xfdd PushI
	var_160_bool = var_47_cvector == var_159_int; // 0xfde Eq
	if(var_160_bool == 0) goto Label_4069; // 0xfdf JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0xfe0 PushV
	var_161_object = var_1_object; // 0xfe1 MovT
	var_162_object = var_0_object; // 0xfe2 MovT
	func_5900(var_162_object); // 0xfe3 NEW_2
	
Label_4069:
	var_163_int = 15478; // 0xfe5 PushI
	var_164_bool = var_47_cvector == var_163_int; // 0xfe6 Eq
	if(var_164_bool == 0) goto Label_4077; // 0xfe7 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0xfe8 PushV
	var_165_object = var_1_object; // 0xfe9 MovT
	var_166_object = var_0_object; // 0xfea MovT
	func_5918(); // 0xfeb NEW_2
	
Label_4077:
	var_169_int = 41582; // 0xfed PushI
	var_170_bool = var_47_cvector == var_169_int; // 0xfee Eq
	if(var_170_bool == 0) goto Label_4085; // 0xfef JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0xff0 PushV
	var_171_object = var_1_object; // 0xff1 MovT
	var_172_object = var_0_object; // 0xff2 MovT
	func_5924(); // 0xff3 NEW_2
	
Label_4085:
	var_175_int = 15459; // 0xff5 PushI
	var_176_bool = var_46_bool == var_175_int; // 0xff6 Eq
	if(var_176_bool == 0) goto Label_4180; // 0xff7 JumpB
	var_177_bool = 0; // 0xff8 PushV
	var_177_bool = 0; // 0xff9 MovB
	var_178_bool = 0; var_179_object = Obj(); // 0xffa PushV
	var_179_object = var_1_object; // 0xffb MovT
	func_6139(var_179_object); // 0xffc NEW_2
	if(var_178_bool == 0) goto Label_4101; // 0xffe JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0xfff PushV
	var_185_object = var_1_object; // 0x1000 MovT
	func_6151(var_185_object); // 0x1001 NEW_2
	if(var_184_bool == 0) goto Label_4101; // 0x1003 JumpB
	var_177_bool = 1; // 0x1004 MovB
	
Label_4101:
	if(var_177_bool == 0) goto Label_4127; // 0x1005 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x1006 PushV
	var_190_object = var_1_object; // 0x1007 MovT
	var_191_object = var_0_object; // 0x1008 MovT
	func_5894(); // 0x1009 NEW_2
	var_194_string = ""; // 0x100b PushV
	var_194_string = "What"; // 0x100c MovS
	func_3987(var_47_cvector, var_194_string); // 0x100d NEW_2
	var_211_int = 514241; // 0x100f PushI
	SetMessage(var_211_int); // 0x1010 TObjFunc
	ClearReplies(); // 0x1012 TObjFunc
	var_212_int = 539735; // 0x1014 PushI
	var_213_int = 41875; // 0x1015 PushI
	var_214_int = 41699; // 0x1016 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1017 TObjFunc
	var_215_int = 514242; // 0x1019 PushI
	var_216_int = 15461; // 0x101a PushI
	var_217_int = 15460; // 0x101b PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x101c TObjFunc
	return 0; // 0x101e Return
	
Label_4127:
	var_218_string = ""; // 0x101f PushV
	var_218_string = "Neutral"; // 0x1020 MovS
	func_3987(var_47_cvector, var_218_string); // 0x1021 NEW_2
	var_219_int = 514258; // 0x1023 PushI
	SetMessage(var_219_int); // 0x1024 TObjFunc
	ClearReplies(); // 0x1026 TObjFunc
	var_220_bool = 0; // 0x1028 PushV
	var_220_bool = 0; // 0x1029 MovB
	var_221_bool = 0; var_222_object = Obj(); // 0x102a PushV
	var_222_object = var_1_object; // 0x102b MovT
	func_6163(var_222_object); // 0x102c NEW_2
	if(var_221_bool == 0) goto Label_4149; // 0x102e JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x102f PushV
	var_228_object = var_1_object; // 0x1030 MovT
	func_6175(var_228_object); // 0x1031 NEW_2
	if(var_227_bool == 0) goto Label_4149; // 0x1033 JumpB
	var_220_bool = 1; // 0x1034 MovB
	
Label_4149:
	if(var_220_bool == 0) goto Label_4155; // 0x1035 JumpB
	var_233_int = 514259; // 0x1036 PushI
	var_234_int = 15479; // 0x1037 PushI
	var_235_int = 15478; // 0x1038 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1039 TObjFunc
	
Label_4155:
	var_236_bool = 0; // 0x103b PushV
	var_236_bool = 0; // 0x103c MovB
	var_237_bool = 0; var_238_object = Obj(); // 0x103d PushV
	var_238_object = var_1_object; // 0x103e MovT
	func_6187(var_238_object); // 0x103f NEW_2
	if(var_237_bool == 0) goto Label_4168; // 0x1041 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x1042 PushV
	var_244_object = var_1_object; // 0x1043 MovT
	func_6163(var_244_object); // 0x1044 NEW_2
	if(var_243_bool == 0) goto Label_4168; // 0x1046 JumpB
	var_236_bool = 1; // 0x1047 MovB
	
Label_4168:
	if(var_236_bool == 0) goto Label_4174; // 0x1048 JumpB
	var_245_int = 539636; // 0x1049 PushI
	var_246_int = 41583; // 0x104a PushI
	var_247_int = 41582; // 0x104b PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x104c TObjFunc
	
Label_4174:
	var_248_int = 514278; // 0x104e PushI
	var_249_int = -1; // 0x104f PushI
	var_250_int = 15498; // 0x1050 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1051 TObjFunc
	return 0; // 0x1053 Return
	
Label_4180:
	var_251_int = 41583; // 0x1054 PushI
	var_252_bool = var_46_bool == var_251_int; // 0x1055 Eq
	if(var_252_bool == 0) goto Label_4203; // 0x1056 JumpB
	var_253_string = ""; // 0x1057 PushV
	var_253_string = "What"; // 0x1058 MovS
	func_3987(var_47_cvector, var_253_string); // 0x1059 NEW_2
	var_254_int = 539637; // 0x105b PushI
	SetMessage(var_254_int); // 0x105c TObjFunc
	ClearReplies(); // 0x105e TObjFunc
	var_255_int = 539638; // 0x1060 PushI
	var_256_int = 41585; // 0x1061 PushI
	var_257_int = 41584; // 0x1062 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x1063 TObjFunc
	var_258_int = 541851; // 0x1065 PushI
	var_259_int = 41589; // 0x1066 PushI
	var_260_int = 44072; // 0x1067 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1068 TObjFunc
	return 0; // 0x106a Return
	
Label_4203:
	var_261_int = 41585; // 0x106b PushI
	var_262_bool = var_46_bool == var_261_int; // 0x106c Eq
	if(var_262_bool == 0) goto Label_4226; // 0x106d JumpB
	var_263_string = ""; // 0x106e PushV
	var_263_string = "Smile"; // 0x106f MovS
	func_3987(var_47_cvector, var_263_string); // 0x1070 NEW_2
	var_264_int = 539639; // 0x1072 PushI
	SetMessage(var_264_int); // 0x1073 TObjFunc
	ClearReplies(); // 0x1075 TObjFunc
	var_265_int = 539640; // 0x1077 PushI
	var_266_int = 41587; // 0x1078 PushI
	var_267_int = 41586; // 0x1079 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x107a TObjFunc
	var_268_int = 541852; // 0x107c PushI
	var_269_int = 41589; // 0x107d PushI
	var_270_int = 44074; // 0x107e PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x107f TObjFunc
	return 0; // 0x1081 Return
	
Label_4226:
	var_271_int = 41587; // 0x1082 PushI
	var_272_bool = var_46_bool == var_271_int; // 0x1083 Eq
	if(var_272_bool == 0) goto Label_4249; // 0x1084 JumpB
	var_273_string = ""; // 0x1085 PushV
	var_273_string = "Smile"; // 0x1086 MovS
	func_3987(var_47_cvector, var_273_string); // 0x1087 NEW_2
	var_274_int = 539641; // 0x1089 PushI
	SetMessage(var_274_int); // 0x108a TObjFunc
	ClearReplies(); // 0x108c TObjFunc
	var_275_int = 539642; // 0x108e PushI
	var_276_int = 41589; // 0x108f PushI
	var_277_int = 41588; // 0x1090 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x1091 TObjFunc
	var_278_int = 541853; // 0x1093 PushI
	var_279_int = 41593; // 0x1094 PushI
	var_280_int = 44076; // 0x1095 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1096 TObjFunc
	return 0; // 0x1098 Return
	
Label_4249:
	var_281_int = 41589; // 0x1099 PushI
	var_282_bool = var_46_bool == var_281_int; // 0x109a Eq
	if(var_282_bool == 0) goto Label_4267; // 0x109b JumpB
	var_283_string = ""; // 0x109c PushV
	var_283_string = "What"; // 0x109d MovS
	func_3987(var_47_cvector, var_283_string); // 0x109e NEW_2
	var_284_int = 539643; // 0x10a0 PushI
	SetMessage(var_284_int); // 0x10a1 TObjFunc
	ClearReplies(); // 0x10a3 TObjFunc
	var_285_int = 539644; // 0x10a5 PushI
	var_286_int = 41591; // 0x10a6 PushI
	var_287_int = 41590; // 0x10a7 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x10a8 TObjFunc
	return 0; // 0x10aa Return
	
Label_4267:
	var_288_int = 41591; // 0x10ab PushI
	var_289_bool = var_46_bool == var_288_int; // 0x10ac Eq
	if(var_289_bool == 0) goto Label_4290; // 0x10ad JumpB
	var_290_string = ""; // 0x10ae PushV
	var_290_string = "Neutral"; // 0x10af MovS
	func_3987(var_47_cvector, var_290_string); // 0x10b0 NEW_2
	var_291_int = 539645; // 0x10b2 PushI
	SetMessage(var_291_int); // 0x10b3 TObjFunc
	ClearReplies(); // 0x10b5 TObjFunc
	var_292_int = 539646; // 0x10b7 PushI
	var_293_int = 41593; // 0x10b8 PushI
	var_294_int = 41592; // 0x10b9 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x10ba TObjFunc
	var_295_int = 542037; // 0x10bc PushI
	var_296_int = 44316; // 0x10bd PushI
	var_297_int = 44315; // 0x10be PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x10bf TObjFunc
	return 0; // 0x10c1 Return
	
Label_4290:
	var_298_int = 44316; // 0x10c2 PushI
	var_299_bool = var_46_bool == var_298_int; // 0x10c3 Eq
	if(var_299_bool == 0) goto Label_4308; // 0x10c4 JumpB
	var_300_string = ""; // 0x10c5 PushV
	var_300_string = "Neutral"; // 0x10c6 MovS
	func_3987(var_47_cvector, var_300_string); // 0x10c7 NEW_2
	var_301_int = 542038; // 0x10c9 PushI
	SetMessage(var_301_int); // 0x10ca TObjFunc
	ClearReplies(); // 0x10cc TObjFunc
	var_302_int = 542039; // 0x10ce PushI
	var_303_int = 41593; // 0x10cf PushI
	var_304_int = 44317; // 0x10d0 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x10d1 TObjFunc
	return 0; // 0x10d3 Return
	
Label_4308:
	var_305_int = 41593; // 0x10d4 PushI
	var_306_bool = var_46_bool == var_305_int; // 0x10d5 Eq
	if(var_306_bool == 0) goto Label_4326; // 0x10d6 JumpB
	var_307_string = ""; // 0x10d7 PushV
	var_307_string = "Smile"; // 0x10d8 MovS
	func_3987(var_47_cvector, var_307_string); // 0x10d9 NEW_2
	var_308_int = 539647; // 0x10db PushI
	SetMessage(var_308_int); // 0x10dc TObjFunc
	ClearReplies(); // 0x10de TObjFunc
	var_309_int = 539648; // 0x10e0 PushI
	var_310_int = 41595; // 0x10e1 PushI
	var_311_int = 41594; // 0x10e2 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x10e3 TObjFunc
	return 0; // 0x10e5 Return
	
Label_4326:
	var_312_int = 41595; // 0x10e6 PushI
	var_313_bool = var_46_bool == var_312_int; // 0x10e7 Eq
	if(var_313_bool == 0) goto Label_4344; // 0x10e8 JumpB
	var_314_string = ""; // 0x10e9 PushV
	var_314_string = "Smile"; // 0x10ea MovS
	func_3987(var_47_cvector, var_314_string); // 0x10eb NEW_2
	var_315_int = 539649; // 0x10ed PushI
	SetMessage(var_315_int); // 0x10ee TObjFunc
	ClearReplies(); // 0x10f0 TObjFunc
	var_316_int = 539650; // 0x10f2 PushI
	var_317_int = 41597; // 0x10f3 PushI
	var_318_int = 41596; // 0x10f4 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x10f5 TObjFunc
	return 0; // 0x10f7 Return
	
Label_4344:
	var_319_int = 41597; // 0x10f8 PushI
	var_320_bool = var_46_bool == var_319_int; // 0x10f9 Eq
	if(var_320_bool == 0) goto Label_4372; // 0x10fa JumpB
	var_321_string = ""; // 0x10fb PushV
	var_321_string = "Smile"; // 0x10fc MovS
	func_3987(var_47_cvector, var_321_string); // 0x10fd NEW_2
	var_322_int = 539651; // 0x10ff PushI
	SetMessage(var_322_int); // 0x1100 TObjFunc
	ClearReplies(); // 0x1102 TObjFunc
	var_323_int = 539652; // 0x1104 PushI
	var_324_int = -1; // 0x1105 PushI
	var_325_int = 41598; // 0x1106 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x1107 TObjFunc
	var_326_int = 539653; // 0x1109 PushI
	var_327_int = -1; // 0x110a PushI
	var_328_int = 41599; // 0x110b PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x110c TObjFunc
	var_329_int = 539654; // 0x110e PushI
	var_330_int = -1; // 0x110f PushI
	var_331_int = 41600; // 0x1110 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1111 TObjFunc
	return 0; // 0x1113 Return
	
Label_4372:
	var_332_int = 15479; // 0x1114 PushI
	var_333_bool = var_46_bool == var_332_int; // 0x1115 Eq
	if(var_333_bool == 0) goto Label_4390; // 0x1116 JumpB
	var_334_string = ""; // 0x1117 PushV
	var_334_string = "What"; // 0x1118 MovS
	func_3987(var_47_cvector, var_334_string); // 0x1119 NEW_2
	var_335_int = 514260; // 0x111b PushI
	SetMessage(var_335_int); // 0x111c TObjFunc
	ClearReplies(); // 0x111e TObjFunc
	var_336_int = 514261; // 0x1120 PushI
	var_337_int = 15481; // 0x1121 PushI
	var_338_int = 15480; // 0x1122 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x1123 TObjFunc
	return 0; // 0x1125 Return
	
Label_4390:
	var_339_int = 15481; // 0x1126 PushI
	var_340_bool = var_46_bool == var_339_int; // 0x1127 Eq
	if(var_340_bool == 0) goto Label_4413; // 0x1128 JumpB
	var_341_string = ""; // 0x1129 PushV
	var_341_string = "What"; // 0x112a MovS
	func_3987(var_47_cvector, var_341_string); // 0x112b NEW_2
	var_342_int = 514262; // 0x112d PushI
	SetMessage(var_342_int); // 0x112e TObjFunc
	ClearReplies(); // 0x1130 TObjFunc
	var_343_int = 514263; // 0x1132 PushI
	var_344_int = 15483; // 0x1133 PushI
	var_345_int = 15482; // 0x1134 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x1135 TObjFunc
	var_346_int = 514268; // 0x1137 PushI
	var_347_int = 15488; // 0x1138 PushI
	var_348_int = 15487; // 0x1139 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x113a TObjFunc
	return 0; // 0x113c Return
	
Label_4413:
	var_349_int = 15488; // 0x113d PushI
	var_350_bool = var_46_bool == var_349_int; // 0x113e Eq
	if(var_350_bool == 0) goto Label_4431; // 0x113f JumpB
	var_351_string = ""; // 0x1140 PushV
	var_351_string = "What"; // 0x1141 MovS
	func_3987(var_47_cvector, var_351_string); // 0x1142 NEW_2
	var_352_int = 514269; // 0x1144 PushI
	SetMessage(var_352_int); // 0x1145 TObjFunc
	ClearReplies(); // 0x1147 TObjFunc
	var_353_int = 514270; // 0x1149 PushI
	var_354_int = -1; // 0x114a PushI
	var_355_int = 15489; // 0x114b PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x114c TObjFunc
	return 0; // 0x114e Return
	
Label_4431:
	var_356_int = 15483; // 0x114f PushI
	var_357_bool = var_46_bool == var_356_int; // 0x1150 Eq
	if(var_357_bool == 0) goto Label_4449; // 0x1151 JumpB
	var_358_string = ""; // 0x1152 PushV
	var_358_string = "What"; // 0x1153 MovS
	func_3987(var_47_cvector, var_358_string); // 0x1154 NEW_2
	var_359_int = 514264; // 0x1156 PushI
	SetMessage(var_359_int); // 0x1157 TObjFunc
	ClearReplies(); // 0x1159 TObjFunc
	var_360_int = 514265; // 0x115b PushI
	var_361_int = 15485; // 0x115c PushI
	var_362_int = 15484; // 0x115d PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x115e TObjFunc
	return 0; // 0x1160 Return
	
Label_4449:
	var_363_int = 15485; // 0x1161 PushI
	var_364_bool = var_46_bool == var_363_int; // 0x1162 Eq
	if(var_364_bool == 0) goto Label_4472; // 0x1163 JumpB
	var_365_string = ""; // 0x1164 PushV
	var_365_string = "What"; // 0x1165 MovS
	func_3987(var_47_cvector, var_365_string); // 0x1166 NEW_2
	var_366_int = 514266; // 0x1168 PushI
	SetMessage(var_366_int); // 0x1169 TObjFunc
	ClearReplies(); // 0x116b TObjFunc
	var_367_int = 514267; // 0x116d PushI
	var_368_int = -1; // 0x116e PushI
	var_369_int = 15486; // 0x116f PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1170 TObjFunc
	var_370_int = 543001; // 0x1172 PushI
	var_371_int = -1; // 0x1173 PushI
	var_372_int = 45450; // 0x1174 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x1175 TObjFunc
	return 0; // 0x1177 Return
	
Label_4472:
	var_373_int = 41875; // 0x1178 PushI
	var_374_bool = var_46_bool == var_373_int; // 0x1179 Eq
	if(var_374_bool == 0) goto Label_4495; // 0x117a JumpB
	var_375_string = ""; // 0x117b PushV
	var_375_string = "What"; // 0x117c MovS
	func_3987(var_47_cvector, var_375_string); // 0x117d NEW_2
	var_376_int = 539914; // 0x117f PushI
	SetMessage(var_376_int); // 0x1180 TObjFunc
	ClearReplies(); // 0x1182 TObjFunc
	var_377_int = 539915; // 0x1184 PushI
	var_378_int = 15467; // 0x1185 PushI
	var_379_int = 41876; // 0x1186 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x1187 TObjFunc
	var_380_int = 539916; // 0x1189 PushI
	var_381_int = 15461; // 0x118a PushI
	var_382_int = 41877; // 0x118b PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x118c TObjFunc
	return 0; // 0x118e Return
	
Label_4495:
	var_383_int = 15461; // 0x118f PushI
	var_384_bool = var_46_bool == var_383_int; // 0x1190 Eq
	if(var_384_bool == 0) goto Label_4513; // 0x1191 JumpB
	var_385_string = ""; // 0x1192 PushV
	var_385_string = "Neutral"; // 0x1193 MovS
	func_3987(var_47_cvector, var_385_string); // 0x1194 NEW_2
	var_386_int = 514243; // 0x1196 PushI
	SetMessage(var_386_int); // 0x1197 TObjFunc
	ClearReplies(); // 0x1199 TObjFunc
	var_387_int = 539908; // 0x119b PushI
	var_388_int = 41870; // 0x119c PushI
	var_389_int = 41869; // 0x119d PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x119e TObjFunc
	return 0; // 0x11a0 Return
	
Label_4513:
	var_390_int = 41870; // 0x11a1 PushI
	var_391_bool = var_46_bool == var_390_int; // 0x11a2 Eq
	if(var_391_bool == 0) goto Label_4531; // 0x11a3 JumpB
	var_392_string = ""; // 0x11a4 PushV
	var_392_string = "Neutral"; // 0x11a5 MovS
	func_3987(var_47_cvector, var_392_string); // 0x11a6 NEW_2
	var_393_int = 539909; // 0x11a8 PushI
	SetMessage(var_393_int); // 0x11a9 TObjFunc
	ClearReplies(); // 0x11ab TObjFunc
	var_394_int = 539910; // 0x11ad PushI
	var_395_int = 41872; // 0x11ae PushI
	var_396_int = 41871; // 0x11af PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x11b0 TObjFunc
	return 0; // 0x11b2 Return
	
Label_4531:
	var_397_int = 41872; // 0x11b3 PushI
	var_398_bool = var_46_bool == var_397_int; // 0x11b4 Eq
	if(var_398_bool == 0) goto Label_4549; // 0x11b5 JumpB
	var_399_string = ""; // 0x11b6 PushV
	var_399_string = "Neutral"; // 0x11b7 MovS
	func_3987(var_47_cvector, var_399_string); // 0x11b8 NEW_2
	var_400_int = 539911; // 0x11ba PushI
	SetMessage(var_400_int); // 0x11bb TObjFunc
	ClearReplies(); // 0x11bd TObjFunc
	var_401_int = 539912; // 0x11bf PushI
	var_402_int = 41874; // 0x11c0 PushI
	var_403_int = 41873; // 0x11c1 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x11c2 TObjFunc
	return 0; // 0x11c4 Return
	
Label_4549:
	var_404_int = 41874; // 0x11c5 PushI
	var_405_bool = var_46_bool == var_404_int; // 0x11c6 Eq
	if(var_405_bool == 0) goto Label_4567; // 0x11c7 JumpB
	var_406_string = ""; // 0x11c8 PushV
	var_406_string = "Neutral"; // 0x11c9 MovS
	func_3987(var_47_cvector, var_406_string); // 0x11ca NEW_2
	var_407_int = 539913; // 0x11cc PushI
	SetMessage(var_407_int); // 0x11cd TObjFunc
	ClearReplies(); // 0x11cf TObjFunc
	var_408_int = 539917; // 0x11d1 PushI
	var_409_int = 41880; // 0x11d2 PushI
	var_410_int = 41879; // 0x11d3 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x11d4 TObjFunc
	return 0; // 0x11d6 Return
	
Label_4567:
	var_411_int = 41880; // 0x11d7 PushI
	var_412_bool = var_46_bool == var_411_int; // 0x11d8 Eq
	if(var_412_bool == 0) goto Label_4585; // 0x11d9 JumpB
	var_413_string = ""; // 0x11da PushV
	var_413_string = "Smile"; // 0x11db MovS
	func_3987(var_47_cvector, var_413_string); // 0x11dc NEW_2
	var_414_int = 539918; // 0x11de PushI
	SetMessage(var_414_int); // 0x11df TObjFunc
	ClearReplies(); // 0x11e1 TObjFunc
	var_415_int = 539919; // 0x11e3 PushI
	var_416_int = 41882; // 0x11e4 PushI
	var_417_int = 41881; // 0x11e5 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x11e6 TObjFunc
	return 0; // 0x11e8 Return
	
Label_4585:
	var_418_int = 41882; // 0x11e9 PushI
	var_419_bool = var_46_bool == var_418_int; // 0x11ea Eq
	if(var_419_bool == 0) goto Label_4603; // 0x11eb JumpB
	var_420_string = ""; // 0x11ec PushV
	var_420_string = "Smile"; // 0x11ed MovS
	func_3987(var_47_cvector, var_420_string); // 0x11ee NEW_2
	var_421_int = 539920; // 0x11f0 PushI
	SetMessage(var_421_int); // 0x11f1 TObjFunc
	ClearReplies(); // 0x11f3 TObjFunc
	var_422_int = 539921; // 0x11f5 PushI
	var_423_int = 41884; // 0x11f6 PushI
	var_424_int = 41883; // 0x11f7 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x11f8 TObjFunc
	return 0; // 0x11fa Return
	
Label_4603:
	var_425_int = 41884; // 0x11fb PushI
	var_426_bool = var_46_bool == var_425_int; // 0x11fc Eq
	if(var_426_bool == 0) goto Label_4621; // 0x11fd JumpB
	var_427_string = ""; // 0x11fe PushV
	var_427_string = "What"; // 0x11ff MovS
	func_3987(var_47_cvector, var_427_string); // 0x1200 NEW_2
	var_428_int = 539922; // 0x1202 PushI
	SetMessage(var_428_int); // 0x1203 TObjFunc
	ClearReplies(); // 0x1205 TObjFunc
	var_429_int = 539923; // 0x1207 PushI
	var_430_int = -1; // 0x1208 PushI
	var_431_int = 41885; // 0x1209 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x120a TObjFunc
	return 0; // 0x120c Return
	
Label_4621:
	var_432_int = 15467; // 0x120d PushI
	var_433_bool = var_46_bool == var_432_int; // 0x120e Eq
	if(var_433_bool == 0) goto Label_4644; // 0x120f JumpB
	var_434_string = ""; // 0x1210 PushV
	var_434_string = "What"; // 0x1211 MovS
	func_3987(var_47_cvector, var_434_string); // 0x1212 NEW_2
	var_435_int = 514249; // 0x1214 PushI
	SetMessage(var_435_int); // 0x1215 TObjFunc
	ClearReplies(); // 0x1217 TObjFunc
	var_436_int = 514250; // 0x1219 PushI
	var_437_int = 15469; // 0x121a PushI
	var_438_int = 15468; // 0x121b PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x121c TObjFunc
	var_439_int = 514508; // 0x121e PushI
	var_440_int = 15742; // 0x121f PushI
	var_441_int = 15746; // 0x1220 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x1221 TObjFunc
	return 0; // 0x1223 Return
	
Label_4644:
	var_442_int = 15469; // 0x1224 PushI
	var_443_bool = var_46_bool == var_442_int; // 0x1225 Eq
	if(var_443_bool == 0) goto Label_4667; // 0x1226 JumpB
	var_444_string = ""; // 0x1227 PushV
	var_444_string = "What"; // 0x1228 MovS
	func_3987(var_47_cvector, var_444_string); // 0x1229 NEW_2
	var_445_int = 514251; // 0x122b PushI
	SetMessage(var_445_int); // 0x122c TObjFunc
	ClearReplies(); // 0x122e TObjFunc
	var_446_int = 514252; // 0x1230 PushI
	var_447_int = 15471; // 0x1231 PushI
	var_448_int = 15470; // 0x1232 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x1233 TObjFunc
	var_449_int = 514506; // 0x1235 PushI
	var_450_int = 15748; // 0x1236 PushI
	var_451_int = 15744; // 0x1237 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x1238 TObjFunc
	return 0; // 0x123a Return
	
Label_4667:
	var_452_int = 15748; // 0x123b PushI
	var_453_bool = var_46_bool == var_452_int; // 0x123c Eq
	if(var_453_bool == 0) goto Label_4690; // 0x123d JumpB
	var_454_string = ""; // 0x123e PushV
	var_454_string = "Grin"; // 0x123f MovS
	func_3987(var_47_cvector, var_454_string); // 0x1240 NEW_2
	var_455_int = 514509; // 0x1242 PushI
	SetMessage(var_455_int); // 0x1243 TObjFunc
	ClearReplies(); // 0x1245 TObjFunc
	var_456_int = 514511; // 0x1247 PushI
	var_457_int = 15751; // 0x1248 PushI
	var_458_int = 15750; // 0x1249 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x124a TObjFunc
	var_459_int = 514510; // 0x124c PushI
	var_460_int = -1; // 0x124d PushI
	var_461_int = 15749; // 0x124e PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x124f TObjFunc
	return 0; // 0x1251 Return
	
Label_4690:
	var_462_int = 15751; // 0x1252 PushI
	var_463_bool = var_46_bool == var_462_int; // 0x1253 Eq
	if(var_463_bool == 0) goto Label_4713; // 0x1254 JumpB
	var_464_string = ""; // 0x1255 PushV
	var_464_string = "Grin"; // 0x1256 MovS
	func_3987(var_47_cvector, var_464_string); // 0x1257 NEW_2
	var_465_int = 514512; // 0x1259 PushI
	SetMessage(var_465_int); // 0x125a TObjFunc
	ClearReplies(); // 0x125c TObjFunc
	var_466_int = 514513; // 0x125e PushI
	var_467_int = -1; // 0x125f PushI
	var_468_int = 15752; // 0x1260 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x1261 TObjFunc
	var_469_int = 539924; // 0x1263 PushI
	var_470_int = 15742; // 0x1264 PushI
	var_471_int = 41886; // 0x1265 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x1266 TObjFunc
	return 0; // 0x1268 Return
	
Label_4713:
	var_472_int = 15471; // 0x1269 PushI
	var_473_bool = var_46_bool == var_472_int; // 0x126a Eq
	if(var_473_bool == 0) goto Label_4731; // 0x126b JumpB
	var_474_string = ""; // 0x126c PushV
	var_474_string = "What"; // 0x126d MovS
	func_3987(var_47_cvector, var_474_string); // 0x126e NEW_2
	var_475_int = 514253; // 0x1270 PushI
	SetMessage(var_475_int); // 0x1271 TObjFunc
	ClearReplies(); // 0x1273 TObjFunc
	var_476_int = 514254; // 0x1275 PushI
	var_477_int = 15742; // 0x1276 PushI
	var_478_int = 15472; // 0x1277 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x1278 TObjFunc
	return 0; // 0x127a Return
	
Label_4731:
	var_479_int = 15742; // 0x127b PushI
	var_480_bool = var_46_bool == var_479_int; // 0x127c Eq
	if(var_480_bool == 0) goto Label_4754; // 0x127d JumpB
	var_481_string = ""; // 0x127e PushV
	var_481_string = "What"; // 0x127f MovS
	func_3987(var_47_cvector, var_481_string); // 0x1280 NEW_2
	var_482_int = 514504; // 0x1282 PushI
	SetMessage(var_482_int); // 0x1283 TObjFunc
	ClearReplies(); // 0x1285 TObjFunc
	var_483_int = 514505; // 0x1287 PushI
	var_484_int = -1; // 0x1288 PushI
	var_485_int = 15743; // 0x1289 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x128a TObjFunc
	var_486_int = 539925; // 0x128c PushI
	var_487_int = -1; // 0x128d PushI
	var_488_int = 41888; // 0x128e PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x128f TObjFunc
	return 0; // 0x1291 Return
	
Label_4754:
	var_3_string = 1; // 0x1292 TMovB
	var_489_bool = 0; // 0x1293 PushV
	func_5708(var_489_bool); // 0x1294 NEW_2
	if(var_489_bool == 0) goto Label_4762; // 0x1296 JumpB
	lshStopAnimation(); // 0x1297 Func
	goto Label_4764; // 0x1299 Jump
	
Label_4764:
	return 0; // 0x129c Return
	
Label_4762:
	StopAnimation(); // 0x129a Func
	
Label_4766:
	return 0; // 0x129e Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0x1341 PushI
	if(var_48_int == 0) goto Label_4969; // 0x1342 JumpB
	func_5534(); // 0x1344 NEW_2
	var_50_int = 42551; // 0x1346 PushI
	var_51_bool = var_46_int == var_50_int; // 0x1347 Eq
	if(var_51_bool == 0) goto Label_4957; // 0x1348 JumpB
	var_52_string = ""; // 0x1349 PushV
	var_52_string = "Neutral"; // 0x134a MovS
	func_4906(var_47_cvector, var_52_string); // 0x134b NEW_2
	var_69_int = 540542; // 0x134d PushI
	SetMessage(var_69_int); // 0x134e TObjFunc
	ClearReplies(); // 0x1350 TObjFunc
	var_70_int = 540543; // 0x1352 PushI
	var_71_int = -1; // 0x1353 PushI
	var_72_int = 42552; // 0x1354 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1355 TObjFunc
	var_73_int = 540796; // 0x1357 PushI
	var_74_int = -1; // 0x1358 PushI
	var_75_int = 42845; // 0x1359 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x135a TObjFunc
	return 0; // 0x135c Return
	
Label_4957:
	var_3_string = 1; // 0x135d TMovB
	var_76_bool = 0; // 0x135e PushV
	func_5708(var_76_bool); // 0x135f NEW_2
	if(var_76_bool == 0) goto Label_4965; // 0x1361 JumpB
	lshStopAnimation(); // 0x1362 Func
	goto Label_4967; // 0x1364 Jump
	
Label_4967:
	return 0; // 0x1367 Return
	
Label_4965:
	StopAnimation(); // 0x1365 Func
	
Label_4969:
	return 0; // 0x1369 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x13b4 PushI
	var_48_bool = var_46_int == var_47_int; // 0x13b5 Eq
	if(var_48_bool == 0) goto Label_5080; // 0x13b6 JumpB
	func_5039(); // 0x13b8 NEW_2
	var_50_bool = 0; // 0x13ba PushV
	var_50_bool = 0; // 0x13bb MovB
	var_51_bool = 0; // 0x13bc PushV
	func_5260(var_51_bool); // 0x13bd NEW_2
	if(var_51_bool == 0) goto Label_5061; // 0x13bf JumpB
	var_54_bool = 0; // 0x13c0 PushV
	func_5008(var_54_bool); // 0x13c1 NEW_2
	if(var_54_bool == 0) goto Label_5061; // 0x13c3 JumpB
	var_50_bool = 1; // 0x13c4 MovB
	
Label_5061:
	if(var_50_bool == 0) goto Label_5074; // 0x13c5 JumpB
	var_71_bool = 0; // 0x13c6 PushV
	func_4988(var_71_bool); // 0x13c7 NEW_2
	if(var_71_bool == 0) goto Label_5073; // 0x13c9 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x13ca PushV
	var_92_object = Obj(); // 0x13cb PushV
	func_5541(var_92_object); // 0x13cc NEW_2
	var_91_object = var_92_object; // 0x13cd Mov
	func_5408(var_91_object); // 0x13cf NEW_2
	
Label_5073:
	goto Label_5080; // 0x13d1 Jump
	
Label_5080:
	return 0; // 0x13d8 Return
	
Label_5074:
	func_5003(var_46_int); // 0x13d3 NEW_2
	func_5030(); // 0x13d6 NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_5221(); // 0x13da NEW_2
	func_5039(); // 0x13dd NEW_2
	lshStopSpeech(); // 0x13df Func
	lshStopAnimation(); // 0x13e1 Func
	StopAsync(); // 0x13e3 Func
	Hold(); // 0x13e5 Func
	return 0; // 0x13e7 Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x13e8 Func
	func_5039(); // 0x13eb NEW_2
	var_47_string = ""; // 0x13ed PushV
	var_47_string = "Neutral"; // 0x13ee MovS
	func_5488(var_47_string); // 0x13ef NEW_2
	func_5030(); // 0x13f2 NEW_2
	return 0; // 0x13f4 Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x13f6 Push
	if(var_47_bool == 0) goto Label_5116; // 0x13f7 JumpB
	func_5030(); // 0x13f9 NEW_2
	goto Label_5120; // 0x13fb Jump
	
Label_5120:
	return 0; // 0x1400 Return
	
Label_5116:
	var_53_string = ""; // 0x13fc PushV
	var_53_string = "Neutral"; // 0x13fd MovS
	func_5488(var_53_string); // 0x13fe NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x1401 PushV
	IsOverrideActive(var_48_bool); // 0x1402 Func
	var_49_bool = var_48_bool == 0; // 0x1404 Not
	if(var_49_bool == 0) goto Label_5149; // 0x1405 JumpB
	EventDisable(0); // 0x1406 EventDisable
	func_5221(); // 0x1408 NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x140a PushV
	var_51_object = var_46_object; // 0x140b Mov
	func_5251(var_51_object); // 0x140c NEW_2
	EventEnable(0); // 0x140e EventEnable
	var_64_object = Obj(); // 0x140f PushV
	var_64_object = var_46_object; // 0x1410 Mov
	func_6407(var_64_object); // 0x1411 NEW_2
	var_969_string = ""; // 0x1413 PushV
	var_969_string = "Neutral"; // 0x1414 MovS
	func_5488(var_969_string); // 0x1415 NEW_2
	func_5039(); // 0x1418 NEW_2
	func_5030(); // 0x141b NEW_2
	
Label_5149:
	return 2; // 0x141d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4974(var_45_cvector); // 0x136b NEW_2
	return 0; // 0x136d Return
}


func_0(var_0_object, var_316_int, var_317_object)
{
	var_319_object = Obj(); var_320_bool = 0; var_321_int = 0; var_322_bool = 0; var_323_object = Obj(); var_324_bool = 0; var_325_int = 0; var_326_bool = 0; // 0x0 PushV
	var_0_object = var_317_object; // 0x1 TMov
	var_327_bool = 0; var_328_object = Obj(); var_329_float = 0; // 0x2 PushV
	var_328_object = var_317_object; // 0x3 Mov
	var_329_float = 70.0; // 0x4 MovF
	func_5265(var_328_object, var_329_float); // 0x5 NEW_2
	var_330_bool = var_327_bool == 0; // 0x7 Not
	if(var_330_bool == 0) goto Label_11; // 0x8 JumpB
	var_316_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_323_object); // 0xb Func
	var_331_int = 0; // 0xd PushV
	func_5702(var_331_int); // 0xe NEW_2
	SetNPCName(var_331_int); // 0x10 ObjFunc
	var_332_int = 0; // 0x12 PushV
	func_5700(var_332_int); // 0x13 NEW_2
	SetNPCDescription(var_332_int); // 0x15 ObjFunc
	var_333_string = ""; // 0x17 PushV
	func_5704(var_333_string); // 0x18 NEW_2
	SetPhoto(var_333_string); // 0x1a ObjFunc
	var_334_string = ""; // 0x1c PushV
	func_5706(var_334_string); // 0x1d NEW_2
	SetPhoto2(var_334_string); // 0x1f ObjFunc
	var_335_int = 0; // 0x21 PushV
	func_6390(var_335_int); // 0x22 NEW_2
	SetPlayerName(var_335_int); // 0x24 ObjFunc
	var_325_int = -1; // 0x26 MovI
	IsOverrideActive(var_324_bool); // 0x27 Func
	var_336_bool = var_324_bool; // 0x29 Push
	if(var_336_bool == 0) goto Label_45; // 0x2a JumpB
	var_316_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_323_object); // 0x2d Func
	var_337_object = Obj(); var_338_object = Obj(); // 0x2f PushV
	var_337_object = var_317_object; // 0x30 Mov
	var_338_object = var_323_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_339_object, var_340_object, var_341_string, var_342_bool, var_337_object, var_338_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_326_bool); // 0x36 ObjFunc
	
Label_56:
	var_367_bool = var_326_bool == 0; // 0x38 Not
	if(var_367_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_326_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_368_object = Obj(); // 0x3f PushV
	var_368_object = var_317_object; // 0x40 Mov
	func_5333(); // 0x41 NEW_2
	StopDialog(var_323_object); // 0x43 Func
	GetReturnValue(var_325_int); // 0x45 ObjFunc
	var_316_int = var_325_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_5888()
{
	var_244_string = "KnowAndrei"; // 0x1701 PushS
	var_245_int = 1; // 0x1702 PushI
	SetVariable(var_244_string, var_245_int); // 0x1703 Func
	return 0; // 0x1705 Return
}


func_5637(var_73_float)
{
	var_74_float = 0; var_75_float = 0; // 0x1605 PushV
	GetGameTime(var_75_float); // 0x1606 Func
	var_73_float = var_75_float; // 0x1608 Mov
	return 2; // 0x1609 Return
}


func_5894()
{
	var_792_string = "ood11Andrei1"; // 0x1707 PushS
	var_793_int = 1; // 0x1708 PushI
	SetVariable(var_792_string, var_793_int); // 0x1709 Func
	return 0; // 0x170b Return
}


func_6151(var_784_bool)
{
	var_786_int = 0; var_787_string = ""; // 0x1808 PushV
	var_787_string = "ood11Andrei1"; // 0x1809 MovS
	func_5557(var_786_int, var_787_string); // 0x180a NEW_2
	var_788_int = 0; // 0x180c PushI
	var_789_bool = var_786_int == var_788_int; // 0x180d Eq
	if(var_789_bool == 0) goto Label_6161; // 0x180e JumpB
	var_784_bool = 1; // 0x180f MovB
	return 0; // 0x1810 Return
	
Label_6161:
	var_784_bool = 0; // 0x1811 MovB
	return 0; // 0x1812 Return
}


func_6407(var_64_object)
{
	var_65_int = 0; var_66_int = 0; // 0x1907 PushV
	var_67_string = "mt_andrei"; // 0x1908 PushS
	GetVariable(var_67_string, var_66_int); // 0x1909 Func
	var_68_bool = var_66_int == 0; // 0x190b Not
	if(var_68_bool == 0) goto Label_6423; // 0x190c JumpB
	var_69_int = 0; var_70_object = Obj(); // 0x190d PushV
	var_70_object = var_64_object; // 0x190e Mov
	TaskCall(4); // 0x190f TaskCall
	func_478(var_71_object, var_69_int, var_70_object); // 0x1910 NEW_2
	TaskReturn(); // 0x1911 TaskReturn
	var_299_string = "mt_andrei"; // 0x1913 PushS
	var_300_int = 1; // 0x1914 PushI
	SetVariable(var_299_string, var_300_int); // 0x1915 Func
	
Label_6423:
	var_301_bool = 0; var_302_int = 0; // 0x1917 PushV
	var_302_int = 2; // 0x1918 MovI
	func_5657(var_301_bool, var_302_int); // 0x1919 NEW_2
	if(var_301_bool == 0) goto Label_6435; // 0x191b JumpB
	var_316_int = 0; var_317_object = Obj(); // 0x191c PushV
	var_317_object = var_64_object; // 0x191d Mov
	TaskCall(0); // 0x191e TaskCall
	func_0(var_318_object, var_316_int, var_317_object); // 0x191f NEW_2
	TaskReturn(); // 0x1920 TaskReturn
	return 2; // 0x1922 Return
	
Label_6435:
	var_369_bool = 0; var_370_int = 0; // 0x1923 PushV
	var_370_int = 2; // 0x1924 MovI
	func_5651(var_369_bool, var_370_int); // 0x1925 NEW_2
	if(var_369_bool == 0) goto Label_6447; // 0x1927 JumpB
	var_372_int = 0; var_373_object = Obj(); // 0x1928 PushV
	var_373_object = var_64_object; // 0x1929 Mov
	TaskCall(6); // 0x192a TaskCall
	func_829(var_374_object, var_372_int, var_373_object); // 0x192b NEW_2
	TaskReturn(); // 0x192c TaskReturn
	return 2; // 0x192e Return
	
Label_6447:
	var_507_bool = 0; var_508_int = 0; // 0x192f PushV
	var_508_int = 3; // 0x1930 MovI
	func_5651(var_507_bool, var_508_int); // 0x1931 NEW_2
	if(var_507_bool == 0) goto Label_6459; // 0x1933 JumpB
	var_509_int = 0; var_510_object = Obj(); // 0x1934 PushV
	var_510_object = var_64_object; // 0x1935 Mov
	TaskCall(8); // 0x1936 TaskCall
	func_2043(var_511_object, var_509_int, var_510_object); // 0x1937 NEW_2
	TaskReturn(); // 0x1938 TaskReturn
	return 2; // 0x193a Return
	
Label_6459:
	var_594_bool = 0; var_595_int = 0; // 0x193b PushV
	var_595_int = 6; // 0x193c MovI
	func_5651(var_594_bool, var_595_int); // 0x193d NEW_2
	if(var_594_bool == 0) goto Label_6471; // 0x193f JumpB
	var_596_int = 0; var_597_object = Obj(); // 0x1940 PushV
	var_597_object = var_64_object; // 0x1941 Mov
	TaskCall(10); // 0x1942 TaskCall
	func_2932(var_598_object, var_596_int, var_597_object); // 0x1943 NEW_2
	TaskReturn(); // 0x1944 TaskReturn
	return 2; // 0x1946 Return
	
Label_6471:
	var_652_bool = 0; var_653_int = 0; // 0x1947 PushV
	var_653_int = 10; // 0x1948 MovI
	func_5651(var_652_bool, var_653_int); // 0x1949 NEW_2
	if(var_652_bool == 0) goto Label_6483; // 0x194b JumpB
	var_654_int = 0; var_655_object = Obj(); // 0x194c PushV
	var_655_object = var_64_object; // 0x194d Mov
	TaskCall(12); // 0x194e TaskCall
	func_3271(var_656_object, var_654_int, var_655_object); // 0x194f NEW_2
	TaskReturn(); // 0x1950 TaskReturn
	return 2; // 0x1952 Return
	
Label_6483:
	var_744_bool = 0; var_745_int = 0; // 0x1953 PushV
	var_745_int = 11; // 0x1954 MovI
	func_5651(var_744_bool, var_745_int); // 0x1955 NEW_2
	if(var_744_bool == 0) goto Label_6495; // 0x1957 JumpB
	var_746_int = 0; var_747_object = Obj(); // 0x1958 PushV
	var_747_object = var_64_object; // 0x1959 Mov
	TaskCall(14); // 0x195a TaskCall
	func_3776(var_748_object, var_746_int, var_747_object); // 0x195b NEW_2
	TaskReturn(); // 0x195c TaskReturn
	return 2; // 0x195e Return
	
Label_6495:
	var_852_bool = 0; var_853_int = 0; // 0x195f PushV
	var_853_int = 12; // 0x1960 MovI
	func_5651(var_852_bool, var_853_int); // 0x1961 NEW_2
	if(var_852_bool == 0) goto Label_6507; // 0x1963 JumpB
	var_854_int = 0; var_855_object = Obj(); // 0x1964 PushV
	var_855_object = var_64_object; // 0x1965 Mov
	TaskCall(2); // 0x1966 TaskCall
	func_196(var_856_object, var_854_int, var_855_object); // 0x1967 NEW_2
	TaskReturn(); // 0x1968 TaskReturn
	return 2; // 0x196a Return
	
Label_6507:
	var_913_int = 0; var_914_object = Obj(); // 0x196b PushV
	var_914_object = var_64_object; // 0x196c Mov
	TaskCall(16); // 0x196d TaskCall
	func_4767(var_915_object, var_913_int, var_914_object); // 0x196e NEW_2
	TaskReturn(); // 0x196f TaskReturn
	return 2; // 0x1971 Return
}


func_5642(var_195_int)
{
	var_196_float = 0; var_197_float = 0; // 0x160a PushV
	GetGameTime(var_197_float); // 0x160b Func
	var_198_int = 1; // 0x160d PushI
	var_199_int = 0; // 0x160e PushV
	var_200_int = 24; // 0x160f PushI
	var_199_int = var_197_float / var_197_float; // 0x1610 Div2
	var_195_int = var_198_int + var_199_int; // 0x1611 Add2
	return 2; // 0x1612 Return
}


func_5900(var_52_object)
{
	var_54_string = "d11q01"; // 0x170d PushS
	var_55_int = 4; // 0x170e PushI
	SetVariable(var_54_string, var_55_int); // 0x170f Func
	func_6247(); // 0x1712 NEW_2
	var_79_string = "blueprint is given"; // 0x1714 PushS
	Trace(var_79_string); // 0x1715 Func
	var_80_object = Obj(); var_81_string = ""; var_82_int = 0; // 0x1717 PushV
	var_80_object = var_52_object; // 0x1718 Mov
	var_81_string = "d11q01_blueprint"; // 0x1719 MovS
	var_82_int = 1; // 0x171a MovI
	func_5612(var_80_object, var_81_string, var_82_int); // 0x171b NEW_2
	return 0; // 0x171d Return
}


func_3857(var_0_object, var_1_object, var_2_object, var_3_string, var_770_object, var_771_object)
{
	var_0_object = var_771_object; // 0xf12 TMov
	var_1_object = var_770_object; // 0xf13 TMov
	var_3_string = 0; // 0xf14 TMovB
	var_776_int = 1; // 0xf15 PushI
	if(var_776_int == 0) goto Label_3957; // 0xf16 JumpB
	var_777_bool = 0; // 0xf17 PushV
	var_777_bool = 0; // 0xf18 MovB
	var_778_bool = 0; var_779_object = Obj(); // 0xf19 PushV
	var_779_object = var_1_object; // 0xf1a MovT
	func_6139(var_779_object); // 0xf1b NEW_2
	if(var_778_bool == 0) goto Label_3876; // 0xf1d JumpB
	var_784_bool = 0; var_785_object = Obj(); // 0xf1e PushV
	var_785_object = var_1_object; // 0xf1f MovT
	func_6151(var_785_object); // 0xf20 NEW_2
	if(var_784_bool == 0) goto Label_3876; // 0xf22 JumpB
	var_777_bool = 1; // 0xf23 MovB
	
Label_3876:
	if(var_777_bool == 0) goto Label_3902; // 0xf24 JumpB
	var_790_object = Obj(); var_791_object = Obj(); // 0xf25 PushV
	var_790_object = var_1_object; // 0xf26 MovT
	var_791_object = var_0_object; // 0xf27 MovT
	func_5894(); // 0xf28 NEW_2
	var_794_string = ""; // 0xf2a PushV
	var_794_string = "What"; // 0xf2b MovS
	func_3987(var_771_object, var_794_string); // 0xf2c NEW_2
	var_802_int = 514241; // 0xf2e PushI
	SetMessage(var_802_int); // 0xf2f TObjFunc
	ClearReplies(); // 0xf31 TObjFunc
	var_803_int = 539735; // 0xf33 PushI
	var_804_int = 41875; // 0xf34 PushI
	var_805_int = 41699; // 0xf35 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xf36 TObjFunc
	var_806_int = 514242; // 0xf38 PushI
	var_807_int = 15461; // 0xf39 PushI
	var_808_int = 15460; // 0xf3a PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0xf3b TObjFunc
	goto Label_3957; // 0xf3d Jump
	
Label_3957:
	var_809_bool = 0; // 0xf75 PushV
	func_5708(var_809_bool); // 0xf76 NEW_2
	if(var_809_bool == 0) goto Label_3972; // 0xf78 JumpB
	
Label_3961:
	lshWaitForAnimEnd(); // 0xf79 Func
	var_810_string = var_3_string; // 0xf7b PushT
	if(var_810_string == 0) goto Label_3966; // 0xf7c JumpB
	goto Label_3971; // 0xf7d Jump
	
Label_3971:
	goto Label_3986; // 0xf83 Jump
	
Label_3986:
	return 0; // 0xf92 Return
	
Label_3966:
	var_811_string = ""; // 0xf7e PushV
	var_811_string = var_2_object; // 0xf7f MovT
	func_5488(var_811_string); // 0xf80 NEW_2
	goto Label_3961; // 0xf82 Jump
	
Label_3972:
	var_812_string = "all"; // 0xf84 PushS
	var_813_string = "idle"; // 0xf85 PushS
	PlayAnimation(var_812_string, var_813_string); // 0xf86 Func
	
Label_3976:
	WaitForAnimEnd(); // 0xf88 Func
	var_814_string = var_3_string; // 0xf8a PushT
	if(var_814_string == 0) goto Label_3981; // 0xf8b JumpB
	goto Label_3986; // 0xf8c Jump
	
Label_3981:
	var_815_string = "all"; // 0xf8d PushS
	var_816_string = "idle"; // 0xf8e PushS
	PlayAnimation(var_815_string, var_816_string); // 0xf8f Func
	goto Label_3976; // 0xf91 Jump
	
Label_3902:
	var_817_string = ""; // 0xf3e PushV
	var_817_string = "Neutral"; // 0xf3f MovS
	func_3987(var_771_object, var_817_string); // 0xf40 NEW_2
	var_818_int = 514258; // 0xf42 PushI
	SetMessage(var_818_int); // 0xf43 TObjFunc
	ClearReplies(); // 0xf45 TObjFunc
	var_819_bool = 0; // 0xf47 PushV
	var_819_bool = 0; // 0xf48 MovB
	var_820_bool = 0; var_821_object = Obj(); // 0xf49 PushV
	var_821_object = var_1_object; // 0xf4a MovT
	func_6163(var_821_object); // 0xf4b NEW_2
	if(var_820_bool == 0) goto Label_3924; // 0xf4d JumpB
	var_826_bool = 0; var_827_object = Obj(); // 0xf4e PushV
	var_827_object = var_1_object; // 0xf4f MovT
	func_6175(var_827_object); // 0xf50 NEW_2
	if(var_826_bool == 0) goto Label_3924; // 0xf52 JumpB
	var_819_bool = 1; // 0xf53 MovB
	
Label_3924:
	if(var_819_bool == 0) goto Label_3930; // 0xf54 JumpB
	var_832_int = 514259; // 0xf55 PushI
	var_833_int = 15479; // 0xf56 PushI
	var_834_int = 15478; // 0xf57 PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0xf58 TObjFunc
	
Label_3930:
	var_835_bool = 0; // 0xf5a PushV
	var_835_bool = 0; // 0xf5b MovB
	var_836_bool = 0; var_837_object = Obj(); // 0xf5c PushV
	var_837_object = var_1_object; // 0xf5d MovT
	func_6187(var_837_object); // 0xf5e NEW_2
	if(var_836_bool == 0) goto Label_3943; // 0xf60 JumpB
	var_842_bool = 0; var_843_object = Obj(); // 0xf61 PushV
	var_843_object = var_1_object; // 0xf62 MovT
	func_6163(var_843_object); // 0xf63 NEW_2
	if(var_842_bool == 0) goto Label_3943; // 0xf65 JumpB
	var_835_bool = 1; // 0xf66 MovB
	
Label_3943:
	if(var_835_bool == 0) goto Label_3949; // 0xf67 JumpB
	var_844_int = 539636; // 0xf68 PushI
	var_845_int = 41583; // 0xf69 PushI
	var_846_int = 41582; // 0xf6a PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0xf6b TObjFunc
	
Label_3949:
	var_847_int = 514278; // 0xf6d PushI
	var_848_int = -1; // 0xf6e PushI
	var_849_int = 15498; // 0xf6f PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0xf70 TObjFunc
	goto Label_3957; // 0xf72 Jump
}


func_6163(var_820_bool)
{
	var_822_int = 0; var_823_string = ""; // 0x1814 PushV
	var_823_string = "d11q01"; // 0x1815 MovS
	func_5557(var_822_int, var_823_string); // 0x1816 NEW_2
	var_824_int = 4; // 0x1818 PushI
	var_825_bool = var_822_int == var_824_int; // 0x1819 Eq
	if(var_825_bool == 0) goto Label_6173; // 0x181a JumpB
	var_820_bool = 1; // 0x181b MovB
	return 0; // 0x181c Return
	
Label_6173:
	var_820_bool = 0; // 0x181d MovB
	return 0; // 0x181e Return
}


func_5651(var_369_bool, var_370_int)
{
	var_371_int = 0; // 0x1614 PushV
	func_5642(var_371_int); // 0x1615 NEW_2
	var_369_bool = var_371_int == var_370_int; // 0x1617 Eq2
	return 0; // 0x1618 Return
}


func_277(var_0_object, var_1_object, var_2_object, var_3_string, var_878_object, var_879_object)
{
	var_0_object = var_879_object; // 0x116 TMov
	var_1_object = var_878_object; // 0x117 TMov
	var_3_string = 0; // 0x118 TMovB
	var_884_int = 1; // 0x119 PushI
	if(var_884_int == 0) goto Label_310; // 0x11a JumpB
	var_885_string = ""; // 0x11b PushV
	var_885_string = "What"; // 0x11c MovS
	func_340(var_879_object, var_885_string); // 0x11d NEW_2
	var_893_int = 535668; // 0x11f PushI
	SetMessage(var_893_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_894_int = 535669; // 0x124 PushI
	var_895_int = 42112; // 0x125 PushI
	var_896_int = 37355; // 0x126 PushI
	AddReply(var_894_int, var_895_int, var_896_int); // 0x127 TObjFunc
	var_897_int = 540002; // 0x129 PushI
	var_898_int = -1; // 0x12a PushI
	var_899_int = 41973; // 0x12b PushI
	AddReply(var_897_int, var_898_int, var_899_int); // 0x12c TObjFunc
	var_900_int = 540201; // 0x12e PushI
	var_901_int = -1; // 0x12f PushI
	var_902_int = 42179; // 0x130 PushI
	AddReply(var_900_int, var_901_int, var_902_int); // 0x131 TObjFunc
	goto Label_310; // 0x133 Jump
	
Label_310:
	var_903_bool = 0; // 0x136 PushV
	func_5708(var_903_bool); // 0x137 NEW_2
	if(var_903_bool == 0) goto Label_325; // 0x139 JumpB
	
Label_314:
	lshWaitForAnimEnd(); // 0x13a Func
	var_904_string = var_3_string; // 0x13c PushT
	if(var_904_string == 0) goto Label_319; // 0x13d JumpB
	goto Label_324; // 0x13e Jump
	
Label_324:
	goto Label_339; // 0x144 Jump
	
Label_339:
	return 0; // 0x153 Return
	
Label_319:
	var_905_string = ""; // 0x13f PushV
	var_905_string = var_2_object; // 0x140 MovT
	func_5488(var_905_string); // 0x141 NEW_2
	goto Label_314; // 0x143 Jump
	
Label_325:
	var_906_string = "all"; // 0x145 PushS
	var_907_string = "idle"; // 0x146 PushS
	PlayAnimation(var_906_string, var_907_string); // 0x147 Func
	
Label_329:
	WaitForAnimEnd(); // 0x149 Func
	var_908_string = var_3_string; // 0x14b PushT
	if(var_908_string == 0) goto Label_334; // 0x14c JumpB
	goto Label_339; // 0x14d Jump
	
Label_334:
	var_909_string = "all"; // 0x14e PushS
	var_910_string = "idle"; // 0x14f PushS
	PlayAnimation(var_909_string, var_910_string); // 0x150 Func
	goto Label_329; // 0x152 Jump
}


func_3352(var_0_object, var_1_object, var_2_object, var_3_string, var_678_object, var_679_object)
{
	var_0_object = var_679_object; // 0xd19 TMov
	var_1_object = var_678_object; // 0xd1a TMov
	var_3_string = 0; // 0xd1b TMovB
	var_684_int = 1; // 0xd1c PushI
	if(var_684_int == 0) goto Label_3430; // 0xd1d JumpB
	var_685_bool = 0; // 0xd1e PushV
	var_685_bool = 0; // 0xd1f MovB
	var_686_bool = 0; // 0xd20 PushV
	var_686_bool = 0; // 0xd21 MovB
	var_687_bool = 0; var_688_object = Obj(); // 0xd22 PushV
	var_688_object = var_1_object; // 0xd23 MovT
	func_6211(var_688_object); // 0xd24 NEW_2
	var_693_bool = var_687_bool == 0; // 0xd26 Not
	if(var_693_bool == 0) goto Label_3375; // 0xd27 JumpB
	var_694_bool = 0; var_695_object = Obj(); // 0xd28 PushV
	var_695_object = var_1_object; // 0xd29 MovT
	func_6223(var_695_object); // 0xd2a NEW_2
	var_700_bool = var_694_bool == 0; // 0xd2c Not
	if(var_700_bool == 0) goto Label_3375; // 0xd2d JumpB
	var_686_bool = 1; // 0xd2e MovB
	
Label_3375:
	if(var_686_bool == 0) goto Label_3382; // 0xd2f JumpB
	var_701_bool = 0; var_702_object = Obj(); // 0xd30 PushV
	var_702_object = var_1_object; // 0xd31 MovT
	func_6235(var_702_object); // 0xd32 NEW_2
	if(var_701_bool == 0) goto Label_3382; // 0xd34 JumpB
	var_685_bool = 1; // 0xd35 MovB
	
Label_3382:
	if(var_685_bool == 0) goto Label_3408; // 0xd36 JumpB
	var_707_object = Obj(); var_708_object = Obj(); // 0xd37 PushV
	var_707_object = var_1_object; // 0xd38 MovT
	var_708_object = var_0_object; // 0xd39 MovT
	func_5952(); // 0xd3a NEW_2
	var_711_string = ""; // 0xd3c PushV
	var_711_string = "Smile"; // 0xd3d MovS
	func_3460(var_679_object, var_711_string); // 0xd3e NEW_2
	var_719_int = 512960; // 0xd40 PushI
	SetMessage(var_719_int); // 0xd41 TObjFunc
	ClearReplies(); // 0xd43 TObjFunc
	var_720_int = 512961; // 0xd45 PushI
	var_721_int = 41443; // 0xd46 PushI
	var_722_int = 14166; // 0xd47 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0xd48 TObjFunc
	var_723_int = 539510; // 0xd4a PushI
	var_724_int = 41440; // 0xd4b PushI
	var_725_int = 41439; // 0xd4c PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0xd4d TObjFunc
	goto Label_3430; // 0xd4f Jump
	
Label_3430:
	var_726_bool = 0; // 0xd66 PushV
	func_5708(var_726_bool); // 0xd67 NEW_2
	if(var_726_bool == 0) goto Label_3445; // 0xd69 JumpB
	
Label_3434:
	lshWaitForAnimEnd(); // 0xd6a Func
	var_727_string = var_3_string; // 0xd6c PushT
	if(var_727_string == 0) goto Label_3439; // 0xd6d JumpB
	goto Label_3444; // 0xd6e Jump
	
Label_3444:
	goto Label_3459; // 0xd74 Jump
	
Label_3459:
	return 0; // 0xd83 Return
	
Label_3439:
	var_728_string = ""; // 0xd6f PushV
	var_728_string = var_2_object; // 0xd70 MovT
	func_5488(var_728_string); // 0xd71 NEW_2
	goto Label_3434; // 0xd73 Jump
	
Label_3445:
	var_729_string = "all"; // 0xd75 PushS
	var_730_string = "idle"; // 0xd76 PushS
	PlayAnimation(var_729_string, var_730_string); // 0xd77 Func
	
Label_3449:
	WaitForAnimEnd(); // 0xd79 Func
	var_731_string = var_3_string; // 0xd7b PushT
	if(var_731_string == 0) goto Label_3454; // 0xd7c JumpB
	goto Label_3459; // 0xd7d Jump
	
Label_3454:
	var_732_string = "all"; // 0xd7e PushS
	var_733_string = "idle"; // 0xd7f PushS
	PlayAnimation(var_732_string, var_733_string); // 0xd80 Func
	goto Label_3449; // 0xd82 Jump
	
Label_3408:
	var_734_string = ""; // 0xd50 PushV
	var_734_string = "Neutral"; // 0xd51 MovS
	func_3460(var_679_object, var_734_string); // 0xd52 NEW_2
	var_735_int = 512966; // 0xd54 PushI
	SetMessage(var_735_int); // 0xd55 TObjFunc
	ClearReplies(); // 0xd57 TObjFunc
	var_736_int = 512967; // 0xd59 PushI
	var_737_int = -1; // 0xd5a PushI
	var_738_int = 14172; // 0xd5b PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0xd5c TObjFunc
	var_739_int = 539509; // 0xd5e PushI
	var_740_int = -1; // 0xd5f PushI
	var_741_int = 41438; // 0xd60 PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0xd61 TObjFunc
	goto Label_3430; // 0xd63 Jump
}


func_5657(var_301_bool, var_302_int)
{
	var_303_float = 0; var_304_int = 0; var_305_int = 0; var_306_float = 0; var_307_int = 0; var_308_int = 0; // 0x1619 PushV
	GetGameTime(var_306_float); // 0x161a Func
	var_309_int = 1; // 0x161c PushI
	var_310_int = 0; // 0x161d PushV
	var_311_int = 24; // 0x161e PushI
	var_310_int = var_306_float / var_306_float; // 0x161f Div2
	var_307_int = var_309_int + var_310_int; // 0x1620 Add2
	var_312_bool = var_307_int != var_302_int; // 0x1621 Neq
	if(var_312_bool == 0) goto Label_5669; // 0x1622 JumpB
	var_301_bool = 0; // 0x1623 MovB
	return 6; // 0x1624 Return
	
Label_5669:
	var_313_int = 0; // 0x1625 PushV
	var_313_int = var_306_float; // 0x1626 Mov
	var_314_int = 24; // 0x1627 PushI
	var_308_int = var_313_int % var_314_int; // 0x1628 Mod2
	var_315_int = 7; // 0x1629 PushI
	var_301_bool = var_308_int < var_315_int; // 0x162a LT2
	return 6; // 0x162b Return
}


func_5150()
{
	var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; // 0x141e PushV
	WaitForAnimEnd(); // 0x141f Func
	var_62_bool = 0; // 0x1421 PushV
	func_5260(var_62_bool); // 0x1422 NEW_2
	var_63_bool = var_62_bool == 0; // 0x1424 Not
	if(var_63_bool == 0) goto Label_5159; // 0x1425 JumpB
	return 12; // 0x1426 Return
	
Label_5159:
	var_64_int = 0; // 0x1427 PushV
	func_5683(var_64_int); // 0x1428 NEW_2
	var_56_int = var_64_int; // 0x1429 Mov
	var_57_int = 0; // 0x142b MovI
	
Label_5164:
	var_77_bool = 0; // 0x142c PushV
	var_77_bool = 0; // 0x142d MovB
	var_78_int = 5; // 0x142e PushI
	var_79_bool = var_57_int < var_78_int; // 0x142f LT
	if(var_79_bool == 0) goto Label_5174; // 0x1430 JumpB
	var_80_bool = 0; // 0x1431 PushV
	func_5260(var_80_bool); // 0x1432 NEW_2
	if(var_80_bool == 0) goto Label_5174; // 0x1434 JumpB
	var_77_bool = 1; // 0x1435 MovB
	
Label_5174:
	if(var_77_bool == 0) goto Label_5216; // 0x1436 JumpB
	var_81_bool = var_56_int == 0; // 0x1437 Not
	if(var_81_bool == 0) goto Label_5184; // 0x1438 JumpB
	var_82_int = 3; // 0x1439 PushI
	Sleep(var_82_int, var_58_bool); // 0x143a Func
	var_83_bool = var_58_bool == 0; // 0x143c Not
	if(var_83_bool == 0) goto Label_5183; // 0x143d JumpB
	goto Label_5216; // 0x143e Jump
	
Label_5216:
	ResetAAS(); // 0x1460 Func
	return 12; // 0x1462 Return
	
Label_5183:
	goto Label_5205; // 0x143f Jump
	
Label_5205:
	var_84_bool = 0; // 0x1455 PushV
	func_5219(var_84_bool); // 0x1456 NEW_2
	var_85_bool = var_84_bool == 0; // 0x1458 Not
	if(var_85_bool == 0) goto Label_5211; // 0x1459 JumpB
	goto Label_5216; // 0x145a Jump
	
Label_5211:
	ResetAAS(); // 0x145b Func
	var_86_int = 1; // 0x145d PushI
	var_57_int = var_57_int + var_86_int; // 0x145e Add2
	goto Label_5164; // 0x145f Jump
	
Label_5184:
	irand(var_59_int, var_56_int); // 0x1440 Func
	var_87_int = 5; // 0x1442 PushI
	irand(var_60_int, var_87_int); // 0x1443 Func
	var_88_int = 0; // 0x1445 PushI
	var_89_bool = var_60_int != var_88_int; // 0x1446 Neq
	if(var_89_bool == 0) goto Label_5193; // 0x1447 JumpB
	var_59_int = 0; // 0x1448 MovI
	
Label_5193:
	var_90_string = "all"; // 0x1449 PushS
	var_91_string = ""; var_92_int = 0; // 0x144a PushV
	var_92_int = var_59_int; // 0x144b Mov
	func_5676(var_91_string, var_92_int); // 0x144c NEW_2
	PlayAnimation(var_90_string, var_91_string); // 0x144e Func
	WaitForAnimEnd(var_61_bool); // 0x1450 Func
	var_93_bool = var_61_bool == 0; // 0x1452 Not
	if(var_93_bool == 0) goto Label_5205; // 0x1453 JumpB
	goto Label_5216; // 0x1454 Jump
}


func_6175(var_826_bool)
{
	var_828_int = 0; var_829_string = ""; // 0x1820 PushV
	var_829_string = "ood11Andrei2"; // 0x1821 MovS
	func_5557(var_828_int, var_829_string); // 0x1822 NEW_2
	var_830_int = 0; // 0x1824 PushI
	var_831_bool = var_828_int == var_830_int; // 0x1825 Eq
	if(var_831_bool == 0) goto Label_6185; // 0x1826 JumpB
	var_826_bool = 1; // 0x1827 MovB
	return 0; // 0x1828 Return
	
Label_6185:
	var_826_bool = 0; // 0x1829 MovB
	return 0; // 0x182a Return
}


func_5918()
{
	var_167_string = "ood11Andrei2"; // 0x171f PushS
	var_168_int = 1; // 0x1720 PushI
	SetVariable(var_167_string, var_168_int); // 0x1721 Func
	return 0; // 0x1723 Return
}


func_5408(var_151_bool)
{
	var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; // 0x1520 PushV
	var_158_string = "c"; // 0x1521 MovS
	var_159_int = 0; // 0x1522 MovI
	
Label_5411:
	var_163_int = 1; // 0x1523 PushI
	if(var_163_int == 0) goto Label_5424; // 0x1524 JumpB
	var_164_int = 1; // 0x1525 PushI
	var_165_int = var_159_int + var_164_int; // 0x1526 Add
	var_166_int = var_158_string + var_165_int; // 0x1527 Add
	HasProperty(var_166_int, var_160_bool); // 0x1528 ObjFunc
	var_167_bool = var_160_bool == 0; // 0x152a Not
	if(var_167_bool == 0) goto Label_5421; // 0x152b JumpB
	goto Label_5424; // 0x152c Jump
	
Label_5424:
	var_168_bool = var_159_int == 0; // 0x1530 Not
	if(var_168_bool == 0) goto Label_5428; // 0x1531 JumpB
	var_151_bool = 0; // 0x1532 MovB
	return 10; // 0x1533 Return
	
Label_5428:
	var_161_int = 0; // 0x1534 MovI
	var_169_int = 1; // 0x1535 PushI
	var_170_bool = var_159_int > var_169_int; // 0x1536 GT
	if(var_170_bool == 0) goto Label_5434; // 0x1537 JumpB
	irand(var_161_int, var_159_int); // 0x1538 Func
	
Label_5434:
	var_171_int = 1; // 0x153a PushI
	var_172_int = var_161_int + var_171_int; // 0x153b Add
	var_173_int = var_158_string + var_172_int; // 0x153c Add
	GetProperty(var_173_int, var_162_string); // 0x153d ObjFunc
	var_174_bool = 0; var_175_string = ""; // 0x153f PushV
	var_175_string = var_162_string; // 0x1540 Mov
	func_5519(var_174_bool, var_175_string); // 0x1541 NEW_2
	var_151_bool = var_174_bool; // 0x1542 Mov
	return 10; // 0x1544 Return
	
Label_5421:
	var_180_int = 1; // 0x152d PushI
	var_159_int = var_159_int + var_180_int; // 0x152e Add2
	goto Label_5411; // 0x152f Jump
}


func_1058(var_2_object, var_403_string)
{
	var_404_bool = 0; // 0x423 PushV
	func_5708(var_404_bool); // 0x424 NEW_2
	var_405_bool = var_404_bool == 0; // 0x426 Not
	if(var_405_bool == 0) goto Label_1065; // 0x427 JumpB
	return 0; // 0x428 Return
	
Label_1065:
	var_406_bool = var_403_string == var_2_object; // 0x429 Eq
	if(var_406_bool == 0) goto Label_1068; // 0x42a JumpB
	return 0; // 0x42b Return
	
Label_1068:
	var_407_string = ""; var_408_bool = 0; // 0x42c PushV
	var_407_string = var_403_string; // 0x42d Mov
	var_409_string = ""; // 0x42e PushS
	var_410_bool = var_403_string == var_409_string; // 0x42f Eq
	if(var_410_bool == 0) goto Label_1075; // 0x430 JumpB
	var_408_bool = 0; // 0x431 MovB
	goto Label_1076; // 0x432 Jump
	
Label_1076:
	func_5504(var_407_string, var_408_bool); // 0x434 NEW_2
	var_2_object = var_403_string; // 0x436 TMov
	return 0; // 0x437 Return
	
Label_1075:
	var_408_bool = 1; // 0x433 MovB
}


func_5924()
{
	var_173_string = "ood11Andrei3"; // 0x1725 PushS
	var_174_int = 1; // 0x1726 PushI
	SetVariable(var_173_string, var_174_int); // 0x1727 Func
	return 0; // 0x1729 Return
}


func_2043(var_0_object, var_509_int, var_510_object)
{
	var_512_object = Obj(); var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; // 0x7fb PushV
	var_0_object = var_510_object; // 0x7fc TMov
	var_520_bool = 0; var_521_object = Obj(); var_522_float = 0; // 0x7fd PushV
	var_521_object = var_510_object; // 0x7fe Mov
	var_522_float = 70.0; // 0x7ff MovF
	func_5265(var_521_object, var_522_float); // 0x800 NEW_2
	var_523_bool = var_520_bool == 0; // 0x802 Not
	if(var_523_bool == 0) goto Label_2054; // 0x803 JumpB
	var_509_int = -2; // 0x804 MovI
	return 8; // 0x805 Return
	
Label_2054:
	CreateDialog(var_516_object); // 0x806 Func
	var_524_int = 0; // 0x808 PushV
	func_5702(var_524_int); // 0x809 NEW_2
	SetNPCName(var_524_int); // 0x80b ObjFunc
	var_525_int = 0; // 0x80d PushV
	func_5700(var_525_int); // 0x80e NEW_2
	SetNPCDescription(var_525_int); // 0x810 ObjFunc
	var_526_string = ""; // 0x812 PushV
	func_5704(var_526_string); // 0x813 NEW_2
	SetPhoto(var_526_string); // 0x815 ObjFunc
	var_527_string = ""; // 0x817 PushV
	func_5706(var_527_string); // 0x818 NEW_2
	SetPhoto2(var_527_string); // 0x81a ObjFunc
	var_528_int = 0; // 0x81c PushV
	func_6390(var_528_int); // 0x81d NEW_2
	SetPlayerName(var_528_int); // 0x81f ObjFunc
	var_518_int = -1; // 0x821 MovI
	IsOverrideActive(var_517_bool); // 0x822 Func
	var_529_bool = var_517_bool; // 0x824 Push
	if(var_529_bool == 0) goto Label_2088; // 0x825 JumpB
	var_509_int = -2; // 0x826 MovI
	return 8; // 0x827 Return
	
Label_2088:
	DoDialog(var_516_object); // 0x828 Func
	var_530_bool = 0; var_531_object = Obj(); // 0x82a PushV
	var_532_object = Obj(); // 0x82b PushV
	func_5541(var_532_object); // 0x82c NEW_2
	var_531_object = var_532_object; // 0x82d Mov
	func_5350(var_530_bool, var_531_object); // 0x82f NEW_2
	var_533_object = Obj(); var_534_object = Obj(); // 0x831 PushV
	var_533_object = var_510_object; // 0x832 Mov
	var_534_object = var_516_object; // 0x833 Mov
	TaskCall(9); // 0x834 TaskCall
	func_2124(var_535_object, var_536_object, var_537_string, var_538_bool, var_533_object, var_534_object); // 0x835 NEW_2
	TaskReturn(); // 0x836 TaskReturn
	IsDialogEnd(var_519_bool); // 0x838 ObjFunc
	
Label_2106:
	var_592_bool = var_519_bool == 0; // 0x83a Not
	if(var_592_bool == 0) goto Label_2113; // 0x83b JumpB
	sync(); // 0x83c Func
	IsDialogEnd(var_519_bool); // 0x83e ObjFunc
	goto Label_2106; // 0x840 Jump
	
Label_2113:
	var_593_object = Obj(); // 0x841 PushV
	var_593_object = var_510_object; // 0x842 Mov
	func_5333(); // 0x843 NEW_2
	StopDialog(var_516_object); // 0x845 Func
	GetReturnValue(var_518_int); // 0x847 ObjFunc
	var_509_int = var_518_int; // 0x849 Mov
	return 8; // 0x84a Return
}


func_5930()
{
	var_101_object = Obj(); var_102_string = ""; var_103_float = 0; // 0x172b PushV
	var_104_object = Obj(); // 0x172c PushV
	func_6340(var_104_object); // 0x172d NEW_2
	var_101_object = var_104_object; // 0x172e Mov
	var_102_string = "pt_map_petr"; // 0x1730 MovS
	var_103_float = 2; // 0x1731 MovI
	func_6357(var_101_object, var_102_string, var_103_float); // 0x1732 NEW_2
	var_124_object = Obj(); // 0x1734 PushV
	func_6340(var_124_object); // 0x1735 NEW_2
	ShowMap(var_124_object); // 0x1737 ObjFunc
	return 0; // 0x1739 Return
}


func_6187(var_836_bool)
{
	var_838_int = 0; var_839_string = ""; // 0x182c PushV
	var_839_string = "ood11Andrei3"; // 0x182d MovS
	func_5557(var_838_int, var_839_string); // 0x182e NEW_2
	var_840_int = 0; // 0x1830 PushI
	var_841_bool = var_838_int == var_840_int; // 0x1831 Eq
	if(var_841_bool == 0) goto Label_6197; // 0x1832 JumpB
	var_836_bool = 1; // 0x1833 MovB
	return 0; // 0x1834 Return
	
Label_6197:
	var_836_bool = 0; // 0x1835 MovB
	return 0; // 0x1836 Return
}


func_5676(var_70_string, var_71_int)
{
	var_72_string = ""; var_73_string = ""; // 0x162c PushV
	var_73_string = "idle"; // 0x162d MovS
	var_74_int = var_71_int; // 0x162e Push
	if(var_74_int == 0) goto Label_5681; // 0x162f JumpB
	var_73_string = var_73_string + var_71_int; // 0x1630 Add2
	
Label_5681:
	var_70_string = var_73_string; // 0x1631 Mov
	return 2; // 0x1632 Return
}


func_4906(var_2_object, var_944_string)
{
	var_945_bool = 0; // 0x132b PushV
	func_5708(var_945_bool); // 0x132c NEW_2
	var_946_bool = var_945_bool == 0; // 0x132e Not
	if(var_946_bool == 0) goto Label_4913; // 0x132f JumpB
	return 0; // 0x1330 Return
	
Label_4913:
	var_947_bool = var_944_string == var_2_object; // 0x1331 Eq
	if(var_947_bool == 0) goto Label_4916; // 0x1332 JumpB
	return 0; // 0x1333 Return
	
Label_4916:
	var_948_string = ""; var_949_bool = 0; // 0x1334 PushV
	var_948_string = var_944_string; // 0x1335 Mov
	var_950_string = ""; // 0x1336 PushS
	var_951_bool = var_944_string == var_950_string; // 0x1337 Eq
	if(var_951_bool == 0) goto Label_4923; // 0x1338 JumpB
	var_949_bool = 0; // 0x1339 MovB
	goto Label_4924; // 0x133a Jump
	
Label_4924:
	func_5504(var_948_string, var_949_bool); // 0x133c NEW_2
	var_2_object = var_944_string; // 0x133e TMov
	return 0; // 0x133f Return
	
Label_4923:
	var_949_bool = 1; // 0x133b MovB
}


func_559(var_0_object, var_1_object, var_2_object, var_3_string, var_235_object, var_236_object)
{
	var_0_object = var_236_object; // 0x230 TMov
	var_1_object = var_235_object; // 0x231 TMov
	var_3_string = 0; // 0x232 TMovB
	var_241_int = 1; // 0x233 PushI
	if(var_241_int == 0) goto Label_597; // 0x234 JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0x235 PushV
	var_242_object = var_1_object; // 0x236 MovT
	var_243_object = var_0_object; // 0x237 MovT
	func_5888(); // 0x238 NEW_2
	var_246_string = ""; // 0x23a PushV
	var_246_string = "Neutral"; // 0x23b MovS
	func_627(var_236_object, var_246_string); // 0x23c NEW_2
	var_263_int = 500187; // 0x23e PushI
	SetMessage(var_263_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_264_int = 500190; // 0x243 PushI
	var_265_int = 228; // 0x244 PushI
	var_266_int = 227; // 0x245 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x246 TObjFunc
	var_267_int = 533667; // 0x248 PushI
	var_268_int = 35200; // 0x249 PushI
	var_269_int = 35199; // 0x24a PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x24b TObjFunc
	var_270_int = 500188; // 0x24d PushI
	var_271_int = 226; // 0x24e PushI
	var_272_int = 225; // 0x24f PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x250 TObjFunc
	goto Label_597; // 0x252 Jump
	
Label_597:
	var_273_bool = 0; // 0x255 PushV
	func_5708(var_273_bool); // 0x256 NEW_2
	if(var_273_bool == 0) goto Label_612; // 0x258 JumpB
	
Label_601:
	lshWaitForAnimEnd(); // 0x259 Func
	var_274_string = var_3_string; // 0x25b PushT
	if(var_274_string == 0) goto Label_606; // 0x25c JumpB
	goto Label_611; // 0x25d Jump
	
Label_611:
	goto Label_626; // 0x263 Jump
	
Label_626:
	return 0; // 0x272 Return
	
Label_606:
	var_275_string = ""; // 0x25e PushV
	var_275_string = var_2_object; // 0x25f MovT
	func_5488(var_275_string); // 0x260 NEW_2
	goto Label_601; // 0x262 Jump
	
Label_612:
	var_286_string = "all"; // 0x264 PushS
	var_287_string = "idle"; // 0x265 PushS
	PlayAnimation(var_286_string, var_287_string); // 0x266 Func
	
Label_616:
	WaitForAnimEnd(); // 0x268 Func
	var_288_string = var_3_string; // 0x26a PushT
	if(var_288_string == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_621:
	var_289_string = "all"; // 0x26d PushS
	var_290_string = "idle"; // 0x26e PushS
	PlayAnimation(var_289_string, var_290_string); // 0x26f Func
	goto Label_616; // 0x271 Jump
}


func_5683(var_64_int)
{
	var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0; // 0x1633 PushV
	var_67_int = 0; // 0x1634 MovI
	
Label_5685:
	var_69_string = "all"; // 0x1635 PushS
	var_70_string = ""; var_71_int = 0; // 0x1636 PushV
	var_71_int = var_67_int; // 0x1637 Mov
	func_5676(var_70_string, var_71_int); // 0x1638 NEW_2
	HasAnimation(var_68_bool, var_69_string, var_70_string); // 0x163a Func
	var_75_bool = var_68_bool == 0; // 0x163c Not
	if(var_75_bool == 0) goto Label_5695; // 0x163d JumpB
	goto Label_5698; // 0x163e Jump
	
Label_5698:
	var_64_int = var_67_int; // 0x1642 Mov
	return 4; // 0x1643 Return
	
Label_5695:
	var_76_int = 1; // 0x163f PushI
	var_67_int = var_67_int + var_76_int; // 0x1640 Add2
	goto Label_5685; // 0x1641 Jump
}


func_6199(var_550_bool)
{
	var_552_int = 0; var_553_string = ""; // 0x1838 PushV
	var_553_string = "ood3Andrei1"; // 0x1839 MovS
	func_5557(var_552_int, var_553_string); // 0x183a NEW_2
	var_554_int = 0; // 0x183c PushI
	var_555_bool = var_552_int == var_554_int; // 0x183d Eq
	if(var_555_bool == 0) goto Label_6209; // 0x183e JumpB
	var_550_bool = 1; // 0x183f MovB
	return 0; // 0x1840 Return
	
Label_6209:
	var_550_bool = 0; // 0x1841 MovB
	return 0; // 0x1842 Return
}


func_5946()
{
	var_54_string = "ood3Andrei1"; // 0x173b PushS
	var_55_int = 1; // 0x173c PushI
	SetVariable(var_54_string, var_55_int); // 0x173d Func
	return 0; // 0x173f Return
}


func_829(var_0_object, var_372_int, var_373_object)
{
	var_375_object = Obj(); var_376_bool = 0; var_377_int = 0; var_378_bool = 0; var_379_object = Obj(); var_380_bool = 0; var_381_int = 0; var_382_bool = 0; // 0x33d PushV
	var_0_object = var_373_object; // 0x33e TMov
	var_383_bool = 0; var_384_object = Obj(); var_385_float = 0; // 0x33f PushV
	var_384_object = var_373_object; // 0x340 Mov
	var_385_float = 70.0; // 0x341 MovF
	func_5265(var_384_object, var_385_float); // 0x342 NEW_2
	var_386_bool = var_383_bool == 0; // 0x344 Not
	if(var_386_bool == 0) goto Label_840; // 0x345 JumpB
	var_372_int = -2; // 0x346 MovI
	return 8; // 0x347 Return
	
Label_840:
	CreateDialog(var_379_object); // 0x348 Func
	var_387_int = 0; // 0x34a PushV
	func_5702(var_387_int); // 0x34b NEW_2
	SetNPCName(var_387_int); // 0x34d ObjFunc
	var_388_int = 0; // 0x34f PushV
	func_5700(var_388_int); // 0x350 NEW_2
	SetNPCDescription(var_388_int); // 0x352 ObjFunc
	var_389_string = ""; // 0x354 PushV
	func_5704(var_389_string); // 0x355 NEW_2
	SetPhoto(var_389_string); // 0x357 ObjFunc
	var_390_string = ""; // 0x359 PushV
	func_5706(var_390_string); // 0x35a NEW_2
	SetPhoto2(var_390_string); // 0x35c ObjFunc
	var_391_int = 0; // 0x35e PushV
	func_6390(var_391_int); // 0x35f NEW_2
	SetPlayerName(var_391_int); // 0x361 ObjFunc
	var_381_int = -1; // 0x363 MovI
	IsOverrideActive(var_380_bool); // 0x364 Func
	var_392_bool = var_380_bool; // 0x366 Push
	if(var_392_bool == 0) goto Label_874; // 0x367 JumpB
	var_372_int = -2; // 0x368 MovI
	return 8; // 0x369 Return
	
Label_874:
	DoDialog(var_379_object); // 0x36a Func
	var_393_bool = 0; var_394_object = Obj(); // 0x36c PushV
	var_395_object = Obj(); // 0x36d PushV
	func_5541(var_395_object); // 0x36e NEW_2
	var_394_object = var_395_object; // 0x36f Mov
	func_5350(var_393_bool, var_394_object); // 0x371 NEW_2
	var_396_object = Obj(); var_397_object = Obj(); // 0x373 PushV
	var_396_object = var_373_object; // 0x374 Mov
	var_397_object = var_379_object; // 0x375 Mov
	TaskCall(7); // 0x376 TaskCall
	func_910(var_398_object, var_399_object, var_400_string, var_401_bool, var_396_object, var_397_object); // 0x377 NEW_2
	TaskReturn(); // 0x378 TaskReturn
	IsDialogEnd(var_382_bool); // 0x37a ObjFunc
	
Label_892:
	var_505_bool = var_382_bool == 0; // 0x37c Not
	if(var_505_bool == 0) goto Label_899; // 0x37d JumpB
	sync(); // 0x37e Func
	IsDialogEnd(var_382_bool); // 0x380 ObjFunc
	goto Label_892; // 0x382 Jump
	
Label_899:
	var_506_object = Obj(); // 0x383 PushV
	var_506_object = var_373_object; // 0x384 Mov
	func_5333(); // 0x385 NEW_2
	StopDialog(var_379_object); // 0x387 Func
	GetReturnValue(var_381_int); // 0x389 ObjFunc
	var_372_int = var_381_int; // 0x38b Mov
	return 8; // 0x38c Return
}


func_5952()
{
	var_709_string = "ood10Andrei1"; // 0x1741 PushS
	var_710_int = 1; // 0x1742 PushI
	SetVariable(var_709_string, var_710_int); // 0x1743 Func
	return 0; // 0x1745 Return
}


func_6211(var_687_bool)
{
	var_689_int = 0; var_690_string = ""; // 0x1844 PushV
	var_690_string = "d10q01"; // 0x1845 MovS
	func_5557(var_689_int, var_690_string); // 0x1846 NEW_2
	var_691_int = 0; // 0x1848 PushI
	var_692_bool = var_689_int == var_691_int; // 0x1849 Eq
	if(var_692_bool == 0) goto Label_6221; // 0x184a JumpB
	var_687_bool = 1; // 0x184b MovB
	return 0; // 0x184c Return
	
Label_6221:
	var_687_bool = 0; // 0x184d MovB
	return 0; // 0x184e Return
}


func_5700(var_128_int)
{
	var_128_int = 515529; // 0x1644 MovI
	return 0; // 0x1645 Return
}


func_5445(var_182_bool)
{
	var_184_string = ""; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_string = ""; var_189_string = ""; var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_string = ""; // 0x1545 PushV
	var_194_string = "d"; // 0x1546 PushS
	var_195_int = 0; // 0x1547 PushV
	func_5642(var_195_int); // 0x1548 NEW_2
	var_201_int = var_194_string + var_195_int; // 0x154a Add
	var_202_string = "m"; // 0x154b PushS
	var_189_string = var_201_int + var_202_string; // 0x154c Add2
	var_190_int = 0; // 0x154d MovI
	
Label_5454:
	var_203_int = 1; // 0x154e PushI
	if(var_203_int == 0) goto Label_5467; // 0x154f JumpB
	var_204_int = 1; // 0x1550 PushI
	var_205_int = var_190_int + var_204_int; // 0x1551 Add
	var_206_int = var_189_string + var_205_int; // 0x1552 Add
	HasProperty(var_206_int, var_191_bool); // 0x1553 ObjFunc
	var_207_bool = var_191_bool == 0; // 0x1555 Not
	if(var_207_bool == 0) goto Label_5464; // 0x1556 JumpB
	goto Label_5467; // 0x1557 Jump
	
Label_5467:
	var_208_bool = var_190_int == 0; // 0x155b Not
	if(var_208_bool == 0) goto Label_5471; // 0x155c JumpB
	var_182_bool = 0; // 0x155d MovB
	return 10; // 0x155e Return
	
Label_5471:
	var_192_int = 0; // 0x155f MovI
	var_209_int = 1; // 0x1560 PushI
	var_210_bool = var_190_int > var_209_int; // 0x1561 GT
	if(var_210_bool == 0) goto Label_5477; // 0x1562 JumpB
	irand(var_192_int, var_190_int); // 0x1563 Func
	
Label_5477:
	var_211_int = 1; // 0x1565 PushI
	var_212_int = var_192_int + var_211_int; // 0x1566 Add
	var_213_int = var_189_string + var_212_int; // 0x1567 Add
	GetProperty(var_213_int, var_193_string); // 0x1568 ObjFunc
	var_214_bool = 0; var_215_string = ""; // 0x156a PushV
	var_215_string = var_193_string; // 0x156b Mov
	func_5519(var_214_bool, var_215_string); // 0x156c NEW_2
	var_182_bool = var_214_bool; // 0x156d Mov
	return 10; // 0x156f Return
	
Label_5464:
	var_216_int = 1; // 0x1558 PushI
	var_190_int = var_190_int + var_216_int; // 0x1559 Add2
	goto Label_5454; // 0x155a Jump
}


func_5702(var_127_int)
{
	var_127_int = 502855; // 0x1646 MovI
	return 0; // 0x1647 Return
}


func_5958(var_556_bool)
{
	var_558_bool = 0; // 0x1747 PushV
	var_558_bool = 0; // 0x1748 MovB
	var_559_bool = 0; // 0x1749 PushV
	var_559_bool = 0; // 0x174a MovB
	var_560_int = 0; var_561_string = ""; // 0x174b PushV
	var_561_string = "d3q01"; // 0x174c MovS
	func_5557(var_560_int, var_561_string); // 0x174d NEW_2
	var_562_int = 0; // 0x174f PushI
	var_563_bool = var_560_int == var_562_int; // 0x1750 Eq
	var_564_bool = var_563_bool == 0; // 0x1751 Not
	if(var_564_bool == 0) goto Label_5980; // 0x1752 JumpB
	var_565_int = 0; var_566_string = ""; // 0x1753 PushV
	var_566_string = "d3q01"; // 0x1754 MovS
	func_5557(var_565_int, var_566_string); // 0x1755 NEW_2
	var_567_int = 1000; // 0x1757 PushI
	var_568_bool = var_565_int == var_567_int; // 0x1758 Eq
	var_569_bool = var_568_bool == 0; // 0x1759 Not
	if(var_569_bool == 0) goto Label_5980; // 0x175a JumpB
	var_559_bool = 1; // 0x175b MovB
	
Label_5980:
	if(var_559_bool == 0) goto Label_5990; // 0x175c JumpB
	var_570_int = 0; var_571_string = ""; // 0x175d PushV
	var_571_string = "d3q01"; // 0x175e MovS
	func_5557(var_570_int, var_571_string); // 0x175f NEW_2
	var_572_int = -1; // 0x1761 PushI
	var_573_bool = var_570_int == var_572_int; // 0x1762 Eq
	var_574_bool = var_573_bool == 0; // 0x1763 Not
	if(var_574_bool == 0) goto Label_5990; // 0x1764 JumpB
	var_558_bool = 1; // 0x1765 MovB
	
Label_5990:
	if(var_558_bool == 0) goto Label_5993; // 0x1766 JumpB
	var_556_bool = 1; // 0x1767 MovB
	return 0; // 0x1768 Return
	
Label_5993:
	var_556_bool = 0; // 0x1769 MovB
	return 0; // 0x176a Return
}


func_5704(var_129_string)
{
	var_129_string = "ui/NPC_Andrei.png"; // 0x1648 MovS
	return 0; // 0x1649 Return
}


func_5706(var_130_string)
{
	var_130_string = "ui/NPC_Andrei_b.png"; // 0x164a MovS
	return 0; // 0x164b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_337_object, var_338_object)
{
	var_0_object = var_338_object; // 0x4b TMov
	var_1_object = var_337_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_343_int = 1; // 0x4e PushI
	if(var_343_int == 0) goto Label_102; // 0x4f JumpB
	var_344_string = ""; // 0x50 PushV
	var_344_string = "Neutral"; // 0x51 MovS
	func_132(var_338_object, var_344_string); // 0x52 NEW_2
	var_352_int = 532762; // 0x54 PushI
	SetMessage(var_352_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_353_int = 532763; // 0x59 PushI
	var_354_int = -1; // 0x5a PushI
	var_355_int = 34234; // 0x5b PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x5c TObjFunc
	var_356_int = 533665; // 0x5e PushI
	var_357_int = -1; // 0x5f PushI
	var_358_int = 35197; // 0x60 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_359_bool = 0; // 0x66 PushV
	func_5708(var_359_bool); // 0x67 NEW_2
	if(var_359_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_360_string = var_3_string; // 0x6c PushT
	if(var_360_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_361_string = ""; // 0x6f PushV
	var_361_string = var_2_object; // 0x70 MovT
	func_5488(var_361_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_362_string = "all"; // 0x75 PushS
	var_363_string = "idle"; // 0x76 PushS
	PlayAnimation(var_362_string, var_363_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_364_string = var_3_string; // 0x7b PushT
	if(var_364_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_365_string = "all"; // 0x7e PushS
	var_366_string = "idle"; // 0x7f PushS
	PlayAnimation(var_365_string, var_366_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_5708(var_122_bool)
{
	var_122_bool = 1; // 0x164c MovB
	return 0; // 0x164d Return
}


func_2124(var_0_object, var_1_object, var_2_object, var_3_string, var_533_object, var_534_object)
{
	var_0_object = var_534_object; // 0x84d TMov
	var_1_object = var_533_object; // 0x84e TMov
	var_3_string = 0; // 0x84f TMovB
	var_539_int = 1; // 0x850 PushI
	if(var_539_int == 0) goto Label_2171; // 0x851 JumpB
	var_540_string = ""; // 0x852 PushV
	var_540_string = "Neutral"; // 0x853 MovS
	func_2201(var_534_object, var_540_string); // 0x854 NEW_2
	var_548_int = 509762; // 0x856 PushI
	SetMessage(var_548_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_549_bool = 0; // 0x85b PushV
	var_549_bool = 0; // 0x85c MovB
	var_550_bool = 0; var_551_object = Obj(); // 0x85d PushV
	var_551_object = var_1_object; // 0x85e MovT
	func_6199(var_551_object); // 0x85f NEW_2
	if(var_550_bool == 0) goto Label_2152; // 0x861 JumpB
	var_556_bool = 0; var_557_object = Obj(); // 0x862 PushV
	var_557_object = var_1_object; // 0x863 MovT
	func_5958(var_557_object); // 0x864 NEW_2
	if(var_556_bool == 0) goto Label_2152; // 0x866 JumpB
	var_549_bool = 1; // 0x867 MovB
	
Label_2152:
	if(var_549_bool == 0) goto Label_2158; // 0x868 JumpB
	var_575_int = 509763; // 0x869 PushI
	var_576_int = 10732; // 0x86a PushI
	var_577_int = 10753; // 0x86b PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x86c TObjFunc
	
Label_2158:
	var_578_int = 533793; // 0x86e PushI
	var_579_int = -1; // 0x86f PushI
	var_580_int = 35337; // 0x870 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x871 TObjFunc
	var_581_int = 535105; // 0x873 PushI
	var_582_int = -1; // 0x874 PushI
	var_583_int = 36761; // 0x875 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x876 TObjFunc
	goto Label_2171; // 0x878 Jump
	
Label_2171:
	var_584_bool = 0; // 0x87b PushV
	func_5708(var_584_bool); // 0x87c NEW_2
	if(var_584_bool == 0) goto Label_2186; // 0x87e JumpB
	
Label_2175:
	lshWaitForAnimEnd(); // 0x87f Func
	var_585_string = var_3_string; // 0x881 PushT
	if(var_585_string == 0) goto Label_2180; // 0x882 JumpB
	goto Label_2185; // 0x883 Jump
	
Label_2185:
	goto Label_2200; // 0x889 Jump
	
Label_2200:
	return 0; // 0x898 Return
	
Label_2180:
	var_586_string = ""; // 0x884 PushV
	var_586_string = var_2_object; // 0x885 MovT
	func_5488(var_586_string); // 0x886 NEW_2
	goto Label_2175; // 0x888 Jump
	
Label_2186:
	var_587_string = "all"; // 0x88a PushS
	var_588_string = "idle"; // 0x88b PushS
	PlayAnimation(var_587_string, var_588_string); // 0x88c Func
	
Label_2190:
	WaitForAnimEnd(); // 0x88e Func
	var_589_string = var_3_string; // 0x890 PushT
	if(var_589_string == 0) goto Label_2195; // 0x891 JumpB
	goto Label_2200; // 0x892 Jump
	
Label_2195:
	var_590_string = "all"; // 0x893 PushS
	var_591_string = "idle"; // 0x894 PushS
	PlayAnimation(var_590_string, var_591_string); // 0x895 Func
	goto Label_2190; // 0x897 Jump
}


func_5710()
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0; // 0x164f PushV
	var_122_object = Obj(); // 0x1650 PushV
	func_6340(var_122_object); // 0x1651 NEW_2
	var_119_object = var_122_object; // 0x1652 Mov
	var_120_string = "pt_map_aglaja"; // 0x1654 MovS
	var_121_float = 2; // 0x1655 MovI
	func_6357(var_119_object, var_120_string, var_121_float); // 0x1656 NEW_2
	var_148_object = Obj(); // 0x1658 PushV
	func_6340(var_148_object); // 0x1659 NEW_2
	ShowMap(var_148_object); // 0x165b ObjFunc
	return 0; // 0x165d Return
}


func_6223(var_694_bool)
{
	var_696_int = 0; var_697_string = ""; // 0x1850 PushV
	var_697_string = "d10q01"; // 0x1851 MovS
	func_5557(var_696_int, var_697_string); // 0x1852 NEW_2
	var_698_int = 1000; // 0x1854 PushI
	var_699_bool = var_696_int == var_698_int; // 0x1855 Eq
	if(var_699_bool == 0) goto Label_6233; // 0x1856 JumpB
	var_694_bool = 1; // 0x1857 MovB
	return 0; // 0x1858 Return
	
Label_6233:
	var_694_bool = 0; // 0x1859 MovB
	return 0; // 0x185a Return
}


func_340(var_2_object, var_885_string)
{
	var_886_bool = 0; // 0x155 PushV
	func_5708(var_886_bool); // 0x156 NEW_2
	var_887_bool = var_886_bool == 0; // 0x158 Not
	if(var_887_bool == 0) goto Label_347; // 0x159 JumpB
	return 0; // 0x15a Return
	
Label_347:
	var_888_bool = var_885_string == var_2_object; // 0x15b Eq
	if(var_888_bool == 0) goto Label_350; // 0x15c JumpB
	return 0; // 0x15d Return
	
Label_350:
	var_889_string = ""; var_890_bool = 0; // 0x15e PushV
	var_889_string = var_885_string; // 0x15f Mov
	var_891_string = ""; // 0x160 PushS
	var_892_bool = var_885_string == var_891_string; // 0x161 Eq
	if(var_892_bool == 0) goto Label_357; // 0x162 JumpB
	var_890_bool = 0; // 0x163 MovB
	goto Label_358; // 0x164 Jump
	
Label_358:
	func_5504(var_889_string, var_890_bool); // 0x166 NEW_2
	var_2_object = var_885_string; // 0x168 TMov
	return 0; // 0x169 Return
	
Label_357:
	var_890_bool = 1; // 0x165 MovB
}


func_6235(var_701_bool)
{
	var_703_int = 0; var_704_string = ""; // 0x185c PushV
	var_704_string = "ood10Andrei1"; // 0x185d MovS
	func_5557(var_703_int, var_704_string); // 0x185e NEW_2
	var_705_int = 0; // 0x1860 PushI
	var_706_bool = var_703_int == var_705_int; // 0x1861 Eq
	if(var_706_bool == 0) goto Label_6245; // 0x1862 JumpB
	var_701_bool = 1; // 0x1863 MovB
	return 0; // 0x1864 Return
	
Label_6245:
	var_701_bool = 0; // 0x1865 MovB
	return 0; // 0x1866 Return
}


func_5726(var_182_object)
{
	var_184_string = "money1000 is given"; // 0x165f PushS
	Trace(var_184_string); // 0x1660 Func
	var_185_object = Obj(); var_186_int = 0; // 0x1662 PushV
	var_185_object = var_182_object; // 0x1663 Mov
	var_186_int = 1000; // 0x1664 MovI
	func_5574(var_185_object, var_186_int); // 0x1665 NEW_2
	return 0; // 0x1667 Return
}


func_5219(var_84_bool)
{
	var_84_bool = 1; // 0x1463 MovB
	return 0; // 0x1464 Return
}


func_5221()
{
	StopAnimation(); // 0x1465 Func
	StopGroup0(); // 0x1467 Func
	return 0; // 0x1469 Return
}


func_6247()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x1867 PushV
	var_58_int = 195; // 0x1868 PushI
	var_59_int = 1; // 0x1869 PushI
	var_60_int = 515480; // 0x186a PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x186b Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x186d PushV
	var_62_object = var_57_object; // 0x186e Mov
	var_63_int = 192; // 0x186f MovI
	func_6312(var_61_bool, var_62_object, var_63_int); // 0x1870 NEW_2
	return 2; // 0x1872 Return
}


func_5736()
{
	var_205_string = "playsound"; // 0x1669 PushS
	var_206_string = "givemoney"; // 0x166a PushS
	TriggerWorld(var_205_string, var_206_string); // 0x166b Func
	return 0; // 0x166d Return
}


func_5226(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x146a PushV
	GetPosition(var_66_cvector); // 0x146b Func
	GetPosition(var_67_cvector); // 0x146d ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x146f Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x1470 Or2
	return 6; // 0x1471 Return
}


func_5995(var_116_bool)
{
	var_118_int = 0; var_119_string = ""; // 0x176c PushV
	var_119_string = "d10q01SoldierTalk"; // 0x176d MovS
	func_5557(var_118_int, var_119_string); // 0x176e NEW_2
	var_120_int = 0; // 0x1770 PushI
	var_121_bool = var_118_int != var_120_int; // 0x1771 Neq
	if(var_121_bool == 0) goto Label_6005; // 0x1772 JumpB
	var_116_bool = 1; // 0x1773 MovB
	return 0; // 0x1774 Return
	
Label_6005:
	var_116_bool = 0; // 0x1775 MovB
	return 0; // 0x1776 Return
}


func_5742()
{
	var_115_string = "playsound"; // 0x166f PushS
	var_116_string = "giveitem"; // 0x1670 PushS
	TriggerWorld(var_115_string, var_116_string); // 0x1671 Func
	return 0; // 0x1673 Return
}


func_4974(var_0_object)
{
	var_46_bool = 0; // 0x136e PushV
	func_5260(var_46_bool); // 0x136f NEW_2
	var_49_bool = var_46_bool == 0; // 0x1371 Not
	if(var_49_bool == 0) goto Label_4981; // 0x1372 JumpB
	Hold(); // 0x1373 Func
	
Label_4981:
	GetDirection(var_0_object); // 0x1375 Func
	
Label_4983:
	func_5150(); // 0x1378 NEW_2
	goto Label_4983; // 0x137a Jump
}


func_5488(var_275_string)
{
	var_276_bool = 0; var_277_float = 0; var_278_float = 0; var_279_bool = 0; var_280_float = 0; var_281_float = 0; // 0x1570 PushV
	lshHasAnimation(var_279_bool, var_275_string); // 0x1571 Func
	var_282_bool = var_279_bool; // 0x1573 Push
	if(var_282_bool == 0) goto Label_5499; // 0x1574 JumpB
	lshGetAnimTimes(var_275_string, var_280_float, var_281_float); // 0x1575 Func
	var_283_bool = 0; // 0x1577 PushB
	lshPlayAnimation(var_280_float, var_281_float, var_283_bool); // 0x1578 Func
	goto Label_5503; // 0x157a Jump
	
Label_5503:
	return 6; // 0x157f Return
	
Label_5499:
	var_284_string = "Can't find lsh animation : "; // 0x157b PushS
	var_285_int = var_284_string + var_275_string; // 0x157c Add
	Trace(var_285_int); // 0x157d Func
}


func_5234(var_190_string, var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x1472 PushV
	GetProperty(var_190_string, var_193_int); // 0x1473 ObjFunc
	var_194_int = var_193_int + var_191_int; // 0x1475 Add
	SetProperty(var_190_string, var_194_int); // 0x1476 ObjFunc
	return 2; // 0x1478 Return
}


func_627(var_2_object, var_246_string)
{
	var_247_bool = 0; // 0x274 PushV
	func_5708(var_247_bool); // 0x275 NEW_2
	var_248_bool = var_247_bool == 0; // 0x277 Not
	if(var_248_bool == 0) goto Label_634; // 0x278 JumpB
	return 0; // 0x279 Return
	
Label_634:
	var_249_bool = var_246_string == var_2_object; // 0x27a Eq
	if(var_249_bool == 0) goto Label_637; // 0x27b JumpB
	return 0; // 0x27c Return
	
Label_637:
	var_250_string = ""; var_251_bool = 0; // 0x27d PushV
	var_250_string = var_246_string; // 0x27e Mov
	var_252_string = ""; // 0x27f PushS
	var_253_bool = var_246_string == var_252_string; // 0x280 Eq
	if(var_253_bool == 0) goto Label_644; // 0x281 JumpB
	var_251_bool = 0; // 0x282 MovB
	goto Label_645; // 0x283 Jump
	
Label_645:
	func_5504(var_250_string, var_251_bool); // 0x285 NEW_2
	var_2_object = var_246_string; // 0x287 TMov
	return 0; // 0x288 Return
	
Label_644:
	var_251_bool = 1; // 0x284 MovB
}


func_5748()
{
	var_54_string = "ood2Andrei1"; // 0x1675 PushS
	var_55_int = 1; // 0x1676 PushI
	SetVariable(var_54_string, var_55_int); // 0x1677 Func
	return 0; // 0x1679 Return
}


func_6260()
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x1874 PushV
	var_169_int = 59; // 0x1875 PushI
	var_170_int = 2; // 0x1876 PushI
	var_171_int = 512141; // 0x1877 PushI
	CreateDiaryEntry(var_168_object, var_169_int, var_170_int, var_171_int); // 0x1878 Func
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; // 0x187a PushV
	var_173_object = var_168_object; // 0x187b Mov
	var_174_int = 11; // 0x187c MovI
	func_6312(var_172_bool, var_173_object, var_174_int); // 0x187d NEW_2
	return 2; // 0x187f Return
}


func_2932(var_0_object, var_596_int, var_597_object)
{
	var_599_object = Obj(); var_600_bool = 0; var_601_int = 0; var_602_bool = 0; var_603_object = Obj(); var_604_bool = 0; var_605_int = 0; var_606_bool = 0; // 0xb74 PushV
	var_0_object = var_597_object; // 0xb75 TMov
	var_607_bool = 0; var_608_object = Obj(); var_609_float = 0; // 0xb76 PushV
	var_608_object = var_597_object; // 0xb77 Mov
	var_609_float = 70.0; // 0xb78 MovF
	func_5265(var_608_object, var_609_float); // 0xb79 NEW_2
	var_610_bool = var_607_bool == 0; // 0xb7b Not
	if(var_610_bool == 0) goto Label_2943; // 0xb7c JumpB
	var_596_int = -2; // 0xb7d MovI
	return 8; // 0xb7e Return
	
Label_2943:
	CreateDialog(var_603_object); // 0xb7f Func
	var_611_int = 0; // 0xb81 PushV
	func_5702(var_611_int); // 0xb82 NEW_2
	SetNPCName(var_611_int); // 0xb84 ObjFunc
	var_612_int = 0; // 0xb86 PushV
	func_5700(var_612_int); // 0xb87 NEW_2
	SetNPCDescription(var_612_int); // 0xb89 ObjFunc
	var_613_string = ""; // 0xb8b PushV
	func_5704(var_613_string); // 0xb8c NEW_2
	SetPhoto(var_613_string); // 0xb8e ObjFunc
	var_614_string = ""; // 0xb90 PushV
	func_5706(var_614_string); // 0xb91 NEW_2
	SetPhoto2(var_614_string); // 0xb93 ObjFunc
	var_615_int = 0; // 0xb95 PushV
	func_6390(var_615_int); // 0xb96 NEW_2
	SetPlayerName(var_615_int); // 0xb98 ObjFunc
	var_605_int = -1; // 0xb9a MovI
	IsOverrideActive(var_604_bool); // 0xb9b Func
	var_616_bool = var_604_bool; // 0xb9d Push
	if(var_616_bool == 0) goto Label_2977; // 0xb9e JumpB
	var_596_int = -2; // 0xb9f MovI
	return 8; // 0xba0 Return
	
Label_2977:
	DoDialog(var_603_object); // 0xba1 Func
	var_617_bool = 0; var_618_object = Obj(); // 0xba3 PushV
	var_619_object = Obj(); // 0xba4 PushV
	func_5541(var_619_object); // 0xba5 NEW_2
	var_618_object = var_619_object; // 0xba6 Mov
	func_5350(var_617_bool, var_618_object); // 0xba8 NEW_2
	var_620_object = Obj(); var_621_object = Obj(); // 0xbaa PushV
	var_620_object = var_597_object; // 0xbab Mov
	var_621_object = var_603_object; // 0xbac Mov
	TaskCall(11); // 0xbad TaskCall
	func_3013(var_622_object, var_623_object, var_624_string, var_625_bool, var_620_object, var_621_object); // 0xbae NEW_2
	TaskReturn(); // 0xbaf TaskReturn
	IsDialogEnd(var_606_bool); // 0xbb1 ObjFunc
	
Label_2995:
	var_650_bool = var_606_bool == 0; // 0xbb3 Not
	if(var_650_bool == 0) goto Label_3002; // 0xbb4 JumpB
	sync(); // 0xbb5 Func
	IsDialogEnd(var_606_bool); // 0xbb7 ObjFunc
	goto Label_2995; // 0xbb9 Jump
	
Label_3002:
	var_651_object = Obj(); // 0xbba PushV
	var_651_object = var_597_object; // 0xbbb Mov
	func_5333(); // 0xbbc NEW_2
	StopDialog(var_603_object); // 0xbbe Func
	GetReturnValue(var_605_int); // 0xbc0 ObjFunc
	var_596_int = var_605_int; // 0xbc2 Mov
	return 8; // 0xbc3 Return
}


func_6007(var_413_bool)
{
	var_415_int = 0; var_416_string = ""; // 0x1778 PushV
	var_416_string = "ood2Andrei1"; // 0x1779 MovS
	func_5557(var_415_int, var_416_string); // 0x177a NEW_2
	var_419_int = 0; // 0x177c PushI
	var_420_bool = var_415_int == var_419_int; // 0x177d Eq
	if(var_420_bool == 0) goto Label_6017; // 0x177e JumpB
	var_413_bool = 1; // 0x177f MovB
	return 0; // 0x1780 Return
	
Label_6017:
	var_413_bool = 0; // 0x1781 MovB
	return 0; // 0x1782 Return
}


func_5241(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x1479 PushV
	GetPosition(var_59_cvector); // 0x147a Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x147c Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x147d PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x147e PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x147f Func
	var_54_bool = var_61_bool; // 0x1481 Mov
	return 6; // 0x1482 Return
}


func_5754()
{
	var_143_string = "ood2Andrei2"; // 0x167b PushS
	var_144_int = 1; // 0x167c PushI
	SetVariable(var_143_string, var_144_int); // 0x167d Func
	return 0; // 0x167f Return
}


func_4988(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x137c PushV
	var_74_string = "player"; // 0x137d PushS
	FindActor(var_73_object, var_74_string); // 0x137e Func
	var_75_bool = var_73_object == 0; // 0x1380 Not
	if(var_75_bool == 0) goto Label_4996; // 0x1381 JumpB
	var_71_bool = 0; // 0x1382 MovB
	return 2; // 0x1383 Return
	
Label_4996:
	var_76_bool = 0; var_77_object = Obj(); // 0x1384 PushV
	var_77_object = var_73_object; // 0x1385 Mov
	func_5251(var_77_object); // 0x1386 NEW_2
	var_71_bool = var_76_bool; // 0x1387 Mov
	return 2; // 0x1389 Return
}


func_5760()
{
	var_153_string = "ood2Andrei3"; // 0x1681 PushS
	var_154_int = 1; // 0x1682 PushI
	SetVariable(var_153_string, var_154_int); // 0x1683 Func
	return 0; // 0x1685 Return
}


func_6273()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1881 PushV
	var_78_int = 58; // 0x1882 PushI
	var_79_int = 2; // 0x1883 PushI
	var_80_int = 512140; // 0x1884 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x1885 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x1887 PushV
	var_82_object = var_77_object; // 0x1888 Mov
	var_83_int = 11; // 0x1889 MovI
	func_6312(var_81_bool, var_82_object, var_83_int); // 0x188a NEW_2
	return 2; // 0x188c Return
}


func_5504(var_250_string, var_251_bool)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0x1580 PushV
	lshHasAnimation(var_257_bool, var_250_string); // 0x1581 Func
	var_260_bool = var_257_bool; // 0x1583 Push
	if(var_260_bool == 0) goto Label_5514; // 0x1584 JumpB
	lshGetAnimTimes(var_250_string, var_258_float, var_259_float); // 0x1585 Func
	lshPlayAnimation(var_258_float, var_259_float, var_251_bool); // 0x1587 Func
	goto Label_5518; // 0x1589 Jump
	
Label_5518:
	return 6; // 0x158e Return
	
Label_5514:
	var_261_string = "Can't find lsh animation : "; // 0x158a PushS
	var_262_int = var_261_string + var_250_string; // 0x158b Add
	Trace(var_262_int); // 0x158c Func
}


func_5251(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1483 PushV
	GetPosition(var_53_cvector); // 0x1484 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x1486 PushV
	var_55_cvector = var_53_cvector; // 0x1487 Mov
	func_5241(var_54_bool, var_55_cvector); // 0x1488 NEW_2
	var_50_bool = var_54_bool; // 0x1489 Mov
	return 2; // 0x148b Return
}


func_132(var_2_object, var_344_string)
{
	var_345_bool = 0; // 0x85 PushV
	func_5708(var_345_bool); // 0x86 NEW_2
	var_346_bool = var_345_bool == 0; // 0x88 Not
	if(var_346_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_347_bool = var_344_string == var_2_object; // 0x8b Eq
	if(var_347_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_348_string = ""; var_349_bool = 0; // 0x8e PushV
	var_348_string = var_344_string; // 0x8f Mov
	var_350_string = ""; // 0x90 PushS
	var_351_bool = var_344_string == var_350_string; // 0x91 Eq
	if(var_351_bool == 0) goto Label_149; // 0x92 JumpB
	var_349_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_5504(var_348_string, var_349_bool); // 0x96 NEW_2
	var_2_object = var_344_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_349_bool = 1; // 0x95 MovB
}


func_6019(var_431_bool)
{
	var_433_int = 0; var_434_string = ""; // 0x1784 PushV
	var_434_string = "ood2Andrei2"; // 0x1785 MovS
	func_5557(var_433_int, var_434_string); // 0x1786 NEW_2
	var_435_int = 0; // 0x1788 PushI
	var_436_bool = var_433_int == var_435_int; // 0x1789 Eq
	if(var_436_bool == 0) goto Label_6029; // 0x178a JumpB
	var_431_bool = 1; // 0x178b MovB
	return 0; // 0x178c Return
	
Label_6029:
	var_431_bool = 0; // 0x178d MovB
	return 0; // 0x178e Return
}


func_5766()
{
	var_223_string = "ood2Andrei4"; // 0x1687 PushS
	var_224_int = 1; // 0x1688 PushI
	SetVariable(var_223_string, var_224_int); // 0x1689 Func
	return 0; // 0x168b Return
}


func_3460(var_2_object, var_711_string)
{
	var_712_bool = 0; // 0xd85 PushV
	func_5708(var_712_bool); // 0xd86 NEW_2
	var_713_bool = var_712_bool == 0; // 0xd88 Not
	if(var_713_bool == 0) goto Label_3467; // 0xd89 JumpB
	return 0; // 0xd8a Return
	
Label_3467:
	var_714_bool = var_711_string == var_2_object; // 0xd8b Eq
	if(var_714_bool == 0) goto Label_3470; // 0xd8c JumpB
	return 0; // 0xd8d Return
	
Label_3470:
	var_715_string = ""; var_716_bool = 0; // 0xd8e PushV
	var_715_string = var_711_string; // 0xd8f Mov
	var_717_string = ""; // 0xd90 PushS
	var_718_bool = var_711_string == var_717_string; // 0xd91 Eq
	if(var_718_bool == 0) goto Label_3477; // 0xd92 JumpB
	var_716_bool = 0; // 0xd93 MovB
	goto Label_3478; // 0xd94 Jump
	
Label_3478:
	func_5504(var_715_string, var_716_bool); // 0xd96 NEW_2
	var_2_object = var_711_string; // 0xd98 TMov
	return 0; // 0xd99 Return
	
Label_3477:
	var_716_bool = 1; // 0xd95 MovB
}


func_5003(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x138b PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x138c PushE
	RotateAsync(var_123_float, var_124_float); // 0x138d Func
	return 0; // 0x138f Return
}


func_5772()
{
	var_253_string = "ood2Andrei5"; // 0x168d PushS
	var_254_int = 1; // 0x168e PushI
	SetVariable(var_253_string, var_254_int); // 0x168f Func
	return 0; // 0x1691 Return
}


func_5260(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x148c PushV
	IsLoaded(var_48_bool); // 0x148d Func
	var_46_bool = var_48_bool; // 0x148f Mov
	return 2; // 0x1490 Return
}


func_6286()
{
	var_229_object = Obj(); var_230_object = Obj(); // 0x188e PushV
	var_231_int = 60; // 0x188f PushI
	var_232_int = 2; // 0x1890 PushI
	var_233_int = 512142; // 0x1891 PushI
	CreateDiaryEntry(var_230_object, var_231_int, var_232_int, var_233_int); // 0x1892 Func
	var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; // 0x1894 PushV
	var_235_object = var_230_object; // 0x1895 Mov
	var_236_int = 11; // 0x1896 MovI
	func_6312(var_234_bool, var_235_object, var_236_int); // 0x1897 NEW_2
	return 2; // 0x1899 Return
}


func_910(var_0_object, var_1_object, var_2_object, var_3_string, var_396_object, var_397_object)
{
	var_0_object = var_397_object; // 0x38f TMov
	var_1_object = var_396_object; // 0x390 TMov
	var_3_string = 0; // 0x391 TMovB
	var_402_int = 1; // 0x392 PushI
	if(var_402_int == 0) goto Label_1028; // 0x393 JumpB
	var_403_string = ""; // 0x394 PushV
	var_403_string = "Neutral"; // 0x395 MovS
	func_1058(var_397_object, var_403_string); // 0x396 NEW_2
	var_411_int = 506864; // 0x398 PushI
	SetMessage(var_411_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_412_bool = 0; // 0x39d PushV
	var_412_bool = 0; // 0x39e MovB
	var_413_bool = 0; var_414_object = Obj(); // 0x39f PushV
	var_414_object = var_1_object; // 0x3a0 MovT
	func_6007(var_414_object); // 0x3a1 NEW_2
	if(var_413_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x3a4 PushV
	var_422_object = var_1_object; // 0x3a5 MovT
	func_6079(var_422_object); // 0x3a6 NEW_2
	if(var_421_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_412_bool = 1; // 0x3a9 MovB
	
Label_938:
	if(var_412_bool == 0) goto Label_944; // 0x3aa JumpB
	var_427_int = 506865; // 0x3ab PushI
	var_428_int = 7572; // 0x3ac PushI
	var_429_int = 7571; // 0x3ad PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x3ae TObjFunc
	
Label_944:
	var_430_bool = 0; // 0x3b0 PushV
	var_430_bool = 0; // 0x3b1 MovB
	var_431_bool = 0; var_432_object = Obj(); // 0x3b2 PushV
	var_432_object = var_1_object; // 0x3b3 MovT
	func_6019(var_432_object); // 0x3b4 NEW_2
	if(var_431_bool == 0) goto Label_957; // 0x3b6 JumpB
	var_437_bool = 0; var_438_object = Obj(); // 0x3b7 PushV
	var_438_object = var_1_object; // 0x3b8 MovT
	func_6091(var_438_object); // 0x3b9 NEW_2
	if(var_437_bool == 0) goto Label_957; // 0x3bb JumpB
	var_430_bool = 1; // 0x3bc MovB
	
Label_957:
	if(var_430_bool == 0) goto Label_963; // 0x3bd JumpB
	var_443_int = 506868; // 0x3be PushI
	var_444_int = 7575; // 0x3bf PushI
	var_445_int = 7574; // 0x3c0 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x3c1 TObjFunc
	
Label_963:
	var_446_bool = 0; // 0x3c3 PushV
	var_446_bool = 0; // 0x3c4 MovB
	var_447_bool = 0; var_448_object = Obj(); // 0x3c5 PushV
	var_448_object = var_1_object; // 0x3c6 MovT
	func_6031(var_448_object); // 0x3c7 NEW_2
	if(var_447_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_453_bool = 0; var_454_object = Obj(); // 0x3ca PushV
	var_454_object = var_1_object; // 0x3cb MovT
	func_6103(var_454_object); // 0x3cc NEW_2
	if(var_453_bool == 0) goto Label_976; // 0x3ce JumpB
	var_446_bool = 1; // 0x3cf MovB
	
Label_976:
	if(var_446_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_459_int = 506870; // 0x3d1 PushI
	var_460_int = 7577; // 0x3d2 PushI
	var_461_int = 7576; // 0x3d3 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x3d4 TObjFunc
	
Label_982:
	var_462_bool = 0; // 0x3d6 PushV
	var_462_bool = 0; // 0x3d7 MovB
	var_463_bool = 0; var_464_object = Obj(); // 0x3d8 PushV
	var_464_object = var_1_object; // 0x3d9 MovT
	func_6043(var_464_object); // 0x3da NEW_2
	if(var_463_bool == 0) goto Label_995; // 0x3dc JumpB
	var_469_bool = 0; var_470_object = Obj(); // 0x3dd PushV
	var_470_object = var_1_object; // 0x3de MovT
	func_6115(var_470_object); // 0x3df NEW_2
	if(var_469_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_462_bool = 1; // 0x3e2 MovB
	
Label_995:
	if(var_462_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_475_int = 506874; // 0x3e4 PushI
	var_476_int = 7581; // 0x3e5 PushI
	var_477_int = 7580; // 0x3e6 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x3e7 TObjFunc
	
Label_1001:
	var_478_bool = 0; // 0x3e9 PushV
	var_478_bool = 0; // 0x3ea MovB
	var_479_bool = 0; var_480_object = Obj(); // 0x3eb PushV
	var_480_object = var_1_object; // 0x3ec MovT
	func_6055(var_480_object); // 0x3ed NEW_2
	if(var_479_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_485_bool = 0; var_486_object = Obj(); // 0x3f0 PushV
	var_486_object = var_1_object; // 0x3f1 MovT
	func_6067(var_486_object); // 0x3f2 NEW_2
	if(var_485_bool == 0) goto Label_1014; // 0x3f4 JumpB
	var_478_bool = 1; // 0x3f5 MovB
	
Label_1014:
	if(var_478_bool == 0) goto Label_1020; // 0x3f6 JumpB
	var_491_int = 506872; // 0x3f7 PushI
	var_492_int = 7579; // 0x3f8 PushI
	var_493_int = 7578; // 0x3f9 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x3fa TObjFunc
	
Label_1020:
	var_494_int = 507531; // 0x3fc PushI
	var_495_int = -1; // 0x3fd PushI
	var_496_int = 8313; // 0x3fe PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x3ff TObjFunc
	goto Label_1028; // 0x401 Jump
	
Label_1028:
	var_497_bool = 0; // 0x404 PushV
	func_5708(var_497_bool); // 0x405 NEW_2
	if(var_497_bool == 0) goto Label_1043; // 0x407 JumpB
	
Label_1032:
	lshWaitForAnimEnd(); // 0x408 Func
	var_498_string = var_3_string; // 0x40a PushT
	if(var_498_string == 0) goto Label_1037; // 0x40b JumpB
	goto Label_1042; // 0x40c Jump
	
Label_1042:
	goto Label_1057; // 0x412 Jump
	
Label_1057:
	return 0; // 0x421 Return
	
Label_1037:
	var_499_string = ""; // 0x40d PushV
	var_499_string = var_2_object; // 0x40e MovT
	func_5488(var_499_string); // 0x40f NEW_2
	goto Label_1032; // 0x411 Jump
	
Label_1043:
	var_500_string = "all"; // 0x413 PushS
	var_501_string = "idle"; // 0x414 PushS
	PlayAnimation(var_500_string, var_501_string); // 0x415 Func
	
Label_1047:
	WaitForAnimEnd(); // 0x417 Func
	var_502_string = var_3_string; // 0x419 PushT
	if(var_502_string == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1057; // 0x41b Jump
	
Label_1052:
	var_503_string = "all"; // 0x41c PushS
	var_504_string = "idle"; // 0x41d PushS
	PlayAnimation(var_503_string, var_504_string); // 0x41e Func
	goto Label_1047; // 0x420 Jump
}


func_6031(var_447_bool)
{
	var_449_int = 0; var_450_string = ""; // 0x1790 PushV
	var_450_string = "ood2Andrei3"; // 0x1791 MovS
	func_5557(var_449_int, var_450_string); // 0x1792 NEW_2
	var_451_int = 0; // 0x1794 PushI
	var_452_bool = var_449_int == var_451_int; // 0x1795 Eq
	if(var_452_bool == 0) goto Label_6041; // 0x1796 JumpB
	var_447_bool = 1; // 0x1797 MovB
	return 0; // 0x1798 Return
	
Label_6041:
	var_447_bool = 0; // 0x1799 MovB
	return 0; // 0x179a Return
}


func_5265(var_80_bool, var_82_float)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0; // 0x1491 PushV
	GetPosition(var_93_cvector); // 0x1492 ObjFunc
	GetEyesHeight(var_92_float); // 0x1494 ObjFunc
	var_101_float = GetByIndex(var_93_cvector, 1); // 0x1496 PushE
	var_101_float = var_101_float + var_92_float; // 0x1497 Add2
	SetByIndex(var_93_cvector, 1) = var_101_float; // 0x1498 PopE
	GetPosition(var_94_cvector); // 0x1499 Func
	GetEyesHeight(var_92_float); // 0x149b Func
	var_102_float = GetByIndex(var_94_cvector, 1); // 0x149d PushE
	var_102_float = var_102_float + var_92_float; // 0x149e Add2
	SetByIndex(var_94_cvector, 1) = var_102_float; // 0x149f PopE
	var_95_cvector = var_93_cvector - var_94_cvector; // 0x14a0 Sub2
	var_103_float = GetByIndex(var_95_cvector, 1); // 0x14a1 PushE
	var_103_float = 0; // 0x14a2 MovI
	SetByIndex(var_95_cvector, 1) = var_103_float; // 0x14a3 PopE
	var_104_int = var_95_cvector | var_95_cvector; // 0x14a4 Or
	var_105_float = sqrt(var_104_int); // 0x14a5 Sqrt
	var_95_cvector = var_95_cvector / var_95_cvector; // 0x14a6 Div2
	var_96_cvector = -var_95_cvector; // 0x14a7 Neg2
	var_106_float = var_95_cvector * var_82_float; // 0x14a8 Mult
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); // 0x14a9 PushV
	var_109_cvector = CVector(0.0, 1.0, 0.0); // 0x14aa PushVec
	var_108_cvector = var_96_cvector ^ var_109_cvector; // 0x14ab Xor2
	func_5547(var_107_cvector, var_108_cvector); // 0x14ac NEW_2
	var_115_int = 25; // 0x14ae PushI
	var_116_float = var_107_cvector * var_115_int; // 0x14af Mult
	var_117_int = var_106_float + var_116_float; // 0x14b0 Add
	var_118_cvector = CVector(0.0, 10.0, 0.0); // 0x14b1 PushVec
	var_97_cvector = var_117_int - var_118_cvector; // 0x14b2 Sub2
	var_98_cvector = var_94_cvector + var_97_cvector; // 0x14b3 Add2
	IsOverrideActive(var_99_bool); // 0x14b4 Func
	var_119_bool = var_99_bool; // 0x14b6 Push
	if(var_119_bool == 0) goto Label_5306; // 0x14b7 JumpB
	var_80_bool = 0; // 0x14b8 MovB
	return 18; // 0x14b9 Return
	
Label_5306:
	StopWorld(); // 0x14ba Func
	CameraTransit(var_98_cvector, var_96_cvector); // 0x14bc Func
	var_120_float = GetByIndex(var_97_cvector, 0); // 0x14be PushE
	var_121_float = GetByIndex(var_97_cvector, 2); // 0x14bf PushE
	Rotate(var_120_float, var_121_float); // 0x14c0 Func
	var_122_bool = 0; // 0x14c2 PushV
	func_5708(var_122_bool); // 0x14c3 NEW_2
	if(var_122_bool == 0) goto Label_5319; // 0x14c5 JumpB
	goto Label_5327; // 0x14c6 Jump
	
Label_5327:
	CameraWaitForPlayFinish(); // 0x14cf Func
	ResumeWorld(); // 0x14d1 Func
	var_80_bool = 1; // 0x14d3 MovB
	return 18; // 0x14d4 Return
	
Label_5319:
	var_123_string = "head"; // 0x14c7 PushS
	HasAnimationTrack(var_100_bool, var_123_string); // 0x14c8 Func
	var_124_bool = var_100_bool; // 0x14ca Push
	if(var_124_bool == 0) goto Label_5327; // 0x14cb JumpB
	var_125_string = "head"; // 0x14cc PushS
	LookAsyncCamera(var_125_string); // 0x14cd Func
}


func_5778()
{
	var_550_string = "KnowAgo"; // 0x1693 PushS
	var_551_int = 1; // 0x1694 PushI
	SetVariable(var_550_string, var_551_int); // 0x1695 Func
	return 0; // 0x1697 Return
}


func_5008(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x1390 PushV
	var_59_string = "player"; // 0x1391 PushS
	FindActor(var_57_object, var_59_string); // 0x1392 Func
	var_60_bool = var_57_object == 0; // 0x1394 Not
	if(var_60_bool == 0) goto Label_5016; // 0x1395 JumpB
	var_54_bool = 0; // 0x1396 MovB
	return 4; // 0x1397 Return
	
Label_5016:
	var_61_float = 0; var_62_object = Obj(); // 0x1398 PushV
	var_62_object = var_57_object; // 0x1399 Mov
	func_5226(var_62_object); // 0x139a NEW_2
	var_69_float = 90000.0; // 0x139c PushF
	var_70_bool = var_61_float > var_69_float; // 0x139d GT
	if(var_70_bool == 0) goto Label_5025; // 0x139e JumpB
	var_54_bool = 0; // 0x139f MovB
	return 4; // 0x13a0 Return
	
Label_5025:
	CanSee(var_58_bool, var_57_object); // 0x13a1 Func
	var_54_bool = var_58_bool; // 0x13a3 Mov
	return 4; // 0x13a4 Return
}


func_5519(var_174_bool, var_175_string)
{
	var_176_bool = 0; var_177_bool = 0; // 0x158f PushV
	var_178_bool = 0; // 0x1590 PushV
	func_5708(var_178_bool); // 0x1591 NEW_2
	if(var_178_bool == 0) goto Label_5532; // 0x1593 JumpB
	lshHasSpeech(var_177_bool, var_175_string); // 0x1594 Func
	var_179_bool = var_177_bool; // 0x1596 Push
	if(var_179_bool == 0) goto Label_5532; // 0x1597 JumpB
	lshPlaySpeech(var_175_string); // 0x1598 Func
	var_174_bool = 1; // 0x159a MovB
	return 2; // 0x159b Return
	
Label_5532:
	var_174_bool = 0; // 0x159c MovB
	return 2; // 0x159d Return
}


func_3987(var_2_object, var_794_string)
{
	var_795_bool = 0; // 0xf94 PushV
	func_5708(var_795_bool); // 0xf95 NEW_2
	var_796_bool = var_795_bool == 0; // 0xf97 Not
	if(var_796_bool == 0) goto Label_3994; // 0xf98 JumpB
	return 0; // 0xf99 Return
	
Label_3994:
	var_797_bool = var_794_string == var_2_object; // 0xf9a Eq
	if(var_797_bool == 0) goto Label_3997; // 0xf9b JumpB
	return 0; // 0xf9c Return
	
Label_3997:
	var_798_string = ""; var_799_bool = 0; // 0xf9d PushV
	var_798_string = var_794_string; // 0xf9e Mov
	var_800_string = ""; // 0xf9f PushS
	var_801_bool = var_794_string == var_800_string; // 0xfa0 Eq
	if(var_801_bool == 0) goto Label_4004; // 0xfa1 JumpB
	var_799_bool = 0; // 0xfa2 MovB
	goto Label_4005; // 0xfa3 Jump
	
Label_4005:
	func_5504(var_798_string, var_799_bool); // 0xfa5 NEW_2
	var_2_object = var_794_string; // 0xfa7 TMov
	return 0; // 0xfa8 Return
	
Label_4004:
	var_799_bool = 1; // 0xfa4 MovB
}


func_5784()
{
	var_103_int = 0; var_104_string = ""; // 0x1699 PushV
	var_104_string = "map_chertez_state"; // 0x169a MovS
	func_5557(var_103_int, var_104_string); // 0x169b NEW_2
	var_107_int = 6; // 0x169d PushI
	var_108_bool = var_103_int <= var_107_int; // 0x169e LE
	if(var_108_bool == 0) goto Label_5800; // 0x169f JumpB
	var_109_string = "map_chertez_state"; // 0x16a0 PushS
	var_110_int = 6; // 0x16a1 PushI
	SetVariable(var_109_string, var_110_int); // 0x16a2 Func
	var_111_string = "map_chertez_force"; // 0x16a4 PushS
	var_112_int = 1; // 0x16a5 PushI
	SetVariable(var_111_string, var_112_int); // 0x16a6 Func
	
Label_5800:
	return 0; // 0x16a8 Return
}


func_2201(var_2_object, var_540_string)
{
	var_541_bool = 0; // 0x89a PushV
	func_5708(var_541_bool); // 0x89b NEW_2
	var_542_bool = var_541_bool == 0; // 0x89d Not
	if(var_542_bool == 0) goto Label_2208; // 0x89e JumpB
	return 0; // 0x89f Return
	
Label_2208:
	var_543_bool = var_540_string == var_2_object; // 0x8a0 Eq
	if(var_543_bool == 0) goto Label_2211; // 0x8a1 JumpB
	return 0; // 0x8a2 Return
	
Label_2211:
	var_544_string = ""; var_545_bool = 0; // 0x8a3 PushV
	var_544_string = var_540_string; // 0x8a4 Mov
	var_546_string = ""; // 0x8a5 PushS
	var_547_bool = var_540_string == var_546_string; // 0x8a6 Eq
	if(var_547_bool == 0) goto Label_2218; // 0x8a7 JumpB
	var_545_bool = 0; // 0x8a8 MovB
	goto Label_2219; // 0x8a9 Jump
	
Label_2219:
	func_5504(var_544_string, var_545_bool); // 0x8ab NEW_2
	var_2_object = var_540_string; // 0x8ad TMov
	return 0; // 0x8ae Return
	
Label_2218:
	var_545_bool = 1; // 0x8aa MovB
}


func_6299(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x189b PushV
	GetDiaryRoot(var_72_object); // 0x189c Func
	var_73_bool = var_72_object == 0; // 0x189e Not
	if(var_73_bool == 0) goto Label_6309; // 0x189f JumpB
	var_74_string = "Can't retrieve diary root"; // 0x18a0 PushS
	Trace(var_74_string); // 0x18a1 Func
	var_70_object = 0; // 0x18a3 MovB
	return 2; // 0x18a4 Return
	
Label_6309:
	var_70_object = var_72_object; // 0x18a5 Mov
	return 2; // 0x18a6 Return
}


func_6043(var_463_bool)
{
	var_465_int = 0; var_466_string = ""; // 0x179c PushV
	var_466_string = "ood2Andrei4"; // 0x179d MovS
	func_5557(var_465_int, var_466_string); // 0x179e NEW_2
	var_467_int = 0; // 0x17a0 PushI
	var_468_bool = var_465_int == var_467_int; // 0x17a1 Eq
	if(var_468_bool == 0) goto Label_6053; // 0x17a2 JumpB
	var_463_bool = 1; // 0x17a3 MovB
	return 0; // 0x17a4 Return
	
Label_6053:
	var_463_bool = 0; // 0x17a5 MovB
	return 0; // 0x17a6 Return
}


func_5534()
{
	var_49_bool = 0; // 0x159e PushV
	func_5708(var_49_bool); // 0x159f NEW_2
	if(var_49_bool == 0) goto Label_5540; // 0x15a1 JumpB
	lshStopSpeech(); // 0x15a2 Func
	
Label_5540:
	return 0; // 0x15a4 Return
}


func_4767(var_0_object, var_913_int, var_914_object)
{
	var_916_object = Obj(); var_917_bool = 0; var_918_int = 0; var_919_bool = 0; var_920_object = Obj(); var_921_bool = 0; var_922_int = 0; var_923_bool = 0; // 0x129f PushV
	var_0_object = var_914_object; // 0x12a0 TMov
	var_924_bool = 0; var_925_object = Obj(); var_926_float = 0; // 0x12a1 PushV
	var_925_object = var_914_object; // 0x12a2 Mov
	var_926_float = 70.0; // 0x12a3 MovF
	func_5265(var_925_object, var_926_float); // 0x12a4 NEW_2
	var_927_bool = var_924_bool == 0; // 0x12a6 Not
	if(var_927_bool == 0) goto Label_4778; // 0x12a7 JumpB
	var_913_int = -2; // 0x12a8 MovI
	return 8; // 0x12a9 Return
	
Label_4778:
	CreateDialog(var_920_object); // 0x12aa Func
	var_928_int = 0; // 0x12ac PushV
	func_5702(var_928_int); // 0x12ad NEW_2
	SetNPCName(var_928_int); // 0x12af ObjFunc
	var_929_int = 0; // 0x12b1 PushV
	func_5700(var_929_int); // 0x12b2 NEW_2
	SetNPCDescription(var_929_int); // 0x12b4 ObjFunc
	var_930_string = ""; // 0x12b6 PushV
	func_5704(var_930_string); // 0x12b7 NEW_2
	SetPhoto(var_930_string); // 0x12b9 ObjFunc
	var_931_string = ""; // 0x12bb PushV
	func_5706(var_931_string); // 0x12bc NEW_2
	SetPhoto2(var_931_string); // 0x12be ObjFunc
	var_932_int = 0; // 0x12c0 PushV
	func_6390(var_932_int); // 0x12c1 NEW_2
	SetPlayerName(var_932_int); // 0x12c3 ObjFunc
	var_922_int = -1; // 0x12c5 MovI
	IsOverrideActive(var_921_bool); // 0x12c6 Func
	var_933_bool = var_921_bool; // 0x12c8 Push
	if(var_933_bool == 0) goto Label_4812; // 0x12c9 JumpB
	var_913_int = -2; // 0x12ca MovI
	return 8; // 0x12cb Return
	
Label_4812:
	DoDialog(var_920_object); // 0x12cc Func
	var_934_bool = 0; var_935_object = Obj(); // 0x12ce PushV
	var_936_object = Obj(); // 0x12cf PushV
	func_5541(var_936_object); // 0x12d0 NEW_2
	var_935_object = var_936_object; // 0x12d1 Mov
	func_5350(var_934_bool, var_935_object); // 0x12d3 NEW_2
	var_937_object = Obj(); var_938_object = Obj(); // 0x12d5 PushV
	var_937_object = var_914_object; // 0x12d6 Mov
	var_938_object = var_920_object; // 0x12d7 Mov
	TaskCall(17); // 0x12d8 TaskCall
	func_4848(var_939_object, var_940_object, var_941_string, var_942_bool, var_937_object, var_938_object); // 0x12d9 NEW_2
	TaskReturn(); // 0x12da TaskReturn
	IsDialogEnd(var_923_bool); // 0x12dc ObjFunc
	
Label_4830:
	var_967_bool = var_923_bool == 0; // 0x12de Not
	if(var_967_bool == 0) goto Label_4837; // 0x12df JumpB
	sync(); // 0x12e0 Func
	IsDialogEnd(var_923_bool); // 0x12e2 ObjFunc
	goto Label_4830; // 0x12e4 Jump
	
Label_4837:
	var_968_object = Obj(); // 0x12e5 PushV
	var_968_object = var_914_object; // 0x12e6 Mov
	func_5333(); // 0x12e7 NEW_2
	StopDialog(var_920_object); // 0x12e9 Func
	GetReturnValue(var_922_int); // 0x12eb ObjFunc
	var_913_int = var_922_int; // 0x12ed Mov
	return 8; // 0x12ee Return
}


func_5541(var_142_object)
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x15a5 PushV
	self(var_144_object); // 0x15a6 Func
	var_142_object = var_144_object; // 0x15a8 Mov
	return 2; // 0x15a9 Return
}


func_5030()
{
	var_971_float = 0; var_972_float = 0; // 0x13a6 PushV
	var_973_int = 8; // 0x13a7 PushI
	var_974_int = 16; // 0x13a8 PushI
	rand(var_972_float, var_973_int, var_974_int); // 0x13a9 Func
	var_975_int = 10; // 0x13ab PushI
	SetTimer(var_975_int, var_972_float); // 0x13ac Func
	return 2; // 0x13ae Return
}


func_6055(var_479_bool)
{
	var_481_int = 0; var_482_string = ""; // 0x17a8 PushV
	var_482_string = "ood2Andrei5"; // 0x17a9 MovS
	func_5557(var_481_int, var_482_string); // 0x17aa NEW_2
	var_483_int = 0; // 0x17ac PushI
	var_484_bool = var_481_int == var_483_int; // 0x17ad Eq
	if(var_484_bool == 0) goto Label_6065; // 0x17ae JumpB
	var_479_bool = 1; // 0x17af MovB
	return 0; // 0x17b0 Return
	
Label_6065:
	var_479_bool = 0; // 0x17b1 MovB
	return 0; // 0x17b2 Return
}


func_6312(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x18a8 PushV
	var_70_object = Obj(); // 0x18a9 PushV
	func_6299(var_70_object); // 0x18aa NEW_2
	var_67_object = var_70_object; // 0x18ab Mov
	Find(var_63_int, var_68_object); // 0x18ad ObjFunc
	var_75_bool = var_68_object == 0; // 0x18af Not
	if(var_75_bool == 0) goto Label_6327; // 0x18b0 JumpB
	var_76_string = "Can't find diary parent with id: "; // 0x18b1 PushS
	var_77_int = var_76_string + var_63_int; // 0x18b2 Add
	Trace(var_77_int); // 0x18b3 Func
	var_61_bool = 0; // 0x18b5 MovB
	return 6; // 0x18b6 Return
	
Label_6327:
	AddChild(var_62_object); // 0x18b7 ObjFunc
	var_78_int = 7; // 0x18b9 PushI
	SendWorldWndMessage(var_78_int); // 0x18ba Func
	GetCategory(var_69_int); // 0x18bc ObjFunc
	SetDiarySection(var_69_int); // 0x18be Func
	var_61_bool = 0; // 0x18c0 MovB
	return 6; // 0x18c1 Return
}


func_5801()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x16a9 PushV
	var_60_string = "d2q02"; // 0x16aa PushS
	var_61_int = 2; // 0x16ab PushI
	SetVariable(var_60_string, var_61_int); // 0x16ac Func
	var_62_object = Obj(); // 0x16ae PushV
	func_6340(var_62_object); // 0x16af NEW_2
	var_59_object = var_62_object; // 0x16b0 Mov
	var_69_string = "d2q02AndreiGotoPetr"; // 0x16b2 PushS
	var_70_string = "pt_map_petr"; // 0x16b3 PushS
	var_71_int = 0; // 0x16b4 PushI
	var_72_int = 515273; // 0x16b5 PushI
	var_73_float = 0; // 0x16b6 PushV
	func_5637(var_73_float); // 0x16b7 NEW_2
	AddMark(var_69_string, var_70_string, var_71_int, var_72_int, var_73_float); // 0x16b9 ObjFunc
	func_6273(); // 0x16bc NEW_2
	return 2; // 0x16be Return
}


func_5547(var_107_cvector, var_108_cvector)
{
	var_110_float = 0; var_111_float = 0; // 0x15ab PushV
	var_112_int = var_108_cvector | var_108_cvector; // 0x15ac Or
	var_111_float = sqrt(var_112_int); // 0x15ad Sqrt2
	var_113_float = 0.0; // 0x15ae PushF
	var_114_bool = var_111_float < var_113_float; // 0x15af LT
	if(var_114_bool == 0) goto Label_5555; // 0x15b0 JumpB
	var_107_cvector = CVector(0.0, 0.0, 0.0); // 0x15b1 MovV
	return 2; // 0x15b2 Return
	
Label_5555:
	var_107_cvector = var_108_cvector / var_108_cvector; // 0x15b3 Div2
	return 2; // 0x15b4 Return
}


func_5039()
{
	var_970_int = 10; // 0x13af PushI
	KillTimer(var_970_int); // 0x13b0 Func
	return 0; // 0x13b2 Return
}


func_6067(var_485_bool)
{
	var_487_int = 0; var_488_string = ""; // 0x17b4 PushV
	var_488_string = "d2q02"; // 0x17b5 MovS
	func_5557(var_487_int, var_488_string); // 0x17b6 NEW_2
	var_489_int = 1000; // 0x17b8 PushI
	var_490_bool = var_487_int == var_489_int; // 0x17b9 Eq
	if(var_490_bool == 0) goto Label_6077; // 0x17ba JumpB
	var_485_bool = 1; // 0x17bb MovB
	return 0; // 0x17bc Return
	
Label_6077:
	var_485_bool = 0; // 0x17bd MovB
	return 0; // 0x17be Return
}


func_5557(var_415_int, var_416_string)
{
	var_417_int = 0; var_418_int = 0; // 0x15b5 PushV
	GetVariable(var_416_string, var_418_int); // 0x15b6 Func
	var_415_int = var_418_int; // 0x15b8 Mov
	return 2; // 0x15b9 Return
}


func_5562(var_96_int, var_97_int)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x15ba PushV
	CreateIntVector(var_99_object); // 0x15bb Func
	add(var_96_int); // 0x15bd ObjFunc
	add(var_97_int); // 0x15bf ObjFunc
	var_100_int = 3; // 0x15c1 PushI
	SendWorldWndMessage(var_100_int, var_99_object); // 0x15c2 Func
	return 2; // 0x15c4 Return
}


func_6079(var_421_bool)
{
	var_423_int = 0; var_424_string = ""; // 0x17c0 PushV
	var_424_string = "d2q02"; // 0x17c1 MovS
	func_5557(var_423_int, var_424_string); // 0x17c2 NEW_2
	var_425_int = 1; // 0x17c4 PushI
	var_426_bool = var_423_int == var_425_int; // 0x17c5 Eq
	if(var_426_bool == 0) goto Label_6089; // 0x17c6 JumpB
	var_421_bool = 1; // 0x17c7 MovB
	return 0; // 0x17c8 Return
	
Label_6089:
	var_421_bool = 0; // 0x17c9 MovB
	return 0; // 0x17ca Return
}


func_5824()
{
	var_157_object = Obj(); var_158_object = Obj(); // 0x16c0 PushV
	var_159_string = "d2q02"; // 0x16c1 PushS
	var_160_int = 6; // 0x16c2 PushI
	SetVariable(var_159_string, var_160_int); // 0x16c3 Func
	var_161_object = Obj(); // 0x16c5 PushV
	func_6340(var_161_object); // 0x16c6 NEW_2
	var_158_object = var_161_object; // 0x16c7 Mov
	var_162_string = "d2q02AndreiGotoGrif"; // 0x16c9 PushS
	var_163_string = "pt_map_grif"; // 0x16ca PushS
	var_164_int = 0; // 0x16cb PushI
	var_165_int = 515277; // 0x16cc PushI
	var_166_float = 0; // 0x16cd PushV
	func_5637(var_166_float); // 0x16ce NEW_2
	AddMark(var_162_string, var_163_string, var_164_int, var_165_int, var_166_float); // 0x16d0 ObjFunc
	func_6260(); // 0x16d3 NEW_2
	return 2; // 0x16d5 Return
}


func_3776(var_0_object, var_746_int, var_747_object)
{
	var_749_object = Obj(); var_750_bool = 0; var_751_int = 0; var_752_bool = 0; var_753_object = Obj(); var_754_bool = 0; var_755_int = 0; var_756_bool = 0; // 0xec0 PushV
	var_0_object = var_747_object; // 0xec1 TMov
	var_757_bool = 0; var_758_object = Obj(); var_759_float = 0; // 0xec2 PushV
	var_758_object = var_747_object; // 0xec3 Mov
	var_759_float = 70.0; // 0xec4 MovF
	func_5265(var_758_object, var_759_float); // 0xec5 NEW_2
	var_760_bool = var_757_bool == 0; // 0xec7 Not
	if(var_760_bool == 0) goto Label_3787; // 0xec8 JumpB
	var_746_int = -2; // 0xec9 MovI
	return 8; // 0xeca Return
	
Label_3787:
	CreateDialog(var_753_object); // 0xecb Func
	var_761_int = 0; // 0xecd PushV
	func_5702(var_761_int); // 0xece NEW_2
	SetNPCName(var_761_int); // 0xed0 ObjFunc
	var_762_int = 0; // 0xed2 PushV
	func_5700(var_762_int); // 0xed3 NEW_2
	SetNPCDescription(var_762_int); // 0xed5 ObjFunc
	var_763_string = ""; // 0xed7 PushV
	func_5704(var_763_string); // 0xed8 NEW_2
	SetPhoto(var_763_string); // 0xeda ObjFunc
	var_764_string = ""; // 0xedc PushV
	func_5706(var_764_string); // 0xedd NEW_2
	SetPhoto2(var_764_string); // 0xedf ObjFunc
	var_765_int = 0; // 0xee1 PushV
	func_6390(var_765_int); // 0xee2 NEW_2
	SetPlayerName(var_765_int); // 0xee4 ObjFunc
	var_755_int = -1; // 0xee6 MovI
	IsOverrideActive(var_754_bool); // 0xee7 Func
	var_766_bool = var_754_bool; // 0xee9 Push
	if(var_766_bool == 0) goto Label_3821; // 0xeea JumpB
	var_746_int = -2; // 0xeeb MovI
	return 8; // 0xeec Return
	
Label_3821:
	DoDialog(var_753_object); // 0xeed Func
	var_767_bool = 0; var_768_object = Obj(); // 0xeef PushV
	var_769_object = Obj(); // 0xef0 PushV
	func_5541(var_769_object); // 0xef1 NEW_2
	var_768_object = var_769_object; // 0xef2 Mov
	func_5350(var_767_bool, var_768_object); // 0xef4 NEW_2
	var_770_object = Obj(); var_771_object = Obj(); // 0xef6 PushV
	var_770_object = var_747_object; // 0xef7 Mov
	var_771_object = var_753_object; // 0xef8 Mov
	TaskCall(15); // 0xef9 TaskCall
	func_3857(var_772_object, var_773_object, var_774_string, var_775_bool, var_770_object, var_771_object); // 0xefa NEW_2
	TaskReturn(); // 0xefb TaskReturn
	IsDialogEnd(var_756_bool); // 0xefd ObjFunc
	
Label_3839:
	var_850_bool = var_756_bool == 0; // 0xeff Not
	if(var_850_bool == 0) goto Label_3846; // 0xf00 JumpB
	sync(); // 0xf01 Func
	IsDialogEnd(var_756_bool); // 0xf03 ObjFunc
	goto Label_3839; // 0xf05 Jump
	
Label_3846:
	var_851_object = Obj(); // 0xf06 PushV
	var_851_object = var_747_object; // 0xf07 Mov
	func_5333(); // 0xf08 NEW_2
	StopDialog(var_753_object); // 0xf0a Func
	GetReturnValue(var_755_int); // 0xf0c ObjFunc
	var_746_int = var_755_int; // 0xf0e Mov
	return 8; // 0xf0f Return
}


func_6340(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj(); var_126_object = Obj(); // 0x18c4 PushV
	GetMainOutdoorScene(var_125_object); // 0x18c5 Func
	var_127_bool = var_125_object == 0; // 0x18c7 NullEq
	if(var_127_bool == 0) goto Label_6351; // 0x18c8 JumpB
	var_128_string = "Can't find main outdoor scene"; // 0x18c9 PushS
	Trace(var_128_string); // 0x18ca Func
	var_126_object = 0; // 0x18cc SetNull
	var_122_object = var_126_object; // 0x18cd Mov
	return 4; // 0x18ce Return
	
Label_6351:
	GetMap(var_126_object); // 0x18cf ObjFunc
	var_122_object = var_126_object; // 0x18d1 Mov
	return 4; // 0x18d2 Return
}


func_196(var_0_object, var_854_int, var_855_object)
{
	var_857_object = Obj(); var_858_bool = 0; var_859_int = 0; var_860_bool = 0; var_861_object = Obj(); var_862_bool = 0; var_863_int = 0; var_864_bool = 0; // 0xc4 PushV
	var_0_object = var_855_object; // 0xc5 TMov
	var_865_bool = 0; var_866_object = Obj(); var_867_float = 0; // 0xc6 PushV
	var_866_object = var_855_object; // 0xc7 Mov
	var_867_float = 70.0; // 0xc8 MovF
	func_5265(var_866_object, var_867_float); // 0xc9 NEW_2
	var_868_bool = var_865_bool == 0; // 0xcb Not
	if(var_868_bool == 0) goto Label_207; // 0xcc JumpB
	var_854_int = -2; // 0xcd MovI
	return 8; // 0xce Return
	
Label_207:
	CreateDialog(var_861_object); // 0xcf Func
	var_869_int = 0; // 0xd1 PushV
	func_5702(var_869_int); // 0xd2 NEW_2
	SetNPCName(var_869_int); // 0xd4 ObjFunc
	var_870_int = 0; // 0xd6 PushV
	func_5700(var_870_int); // 0xd7 NEW_2
	SetNPCDescription(var_870_int); // 0xd9 ObjFunc
	var_871_string = ""; // 0xdb PushV
	func_5704(var_871_string); // 0xdc NEW_2
	SetPhoto(var_871_string); // 0xde ObjFunc
	var_872_string = ""; // 0xe0 PushV
	func_5706(var_872_string); // 0xe1 NEW_2
	SetPhoto2(var_872_string); // 0xe3 ObjFunc
	var_873_int = 0; // 0xe5 PushV
	func_6390(var_873_int); // 0xe6 NEW_2
	SetPlayerName(var_873_int); // 0xe8 ObjFunc
	var_863_int = -1; // 0xea MovI
	IsOverrideActive(var_862_bool); // 0xeb Func
	var_874_bool = var_862_bool; // 0xed Push
	if(var_874_bool == 0) goto Label_241; // 0xee JumpB
	var_854_int = -2; // 0xef MovI
	return 8; // 0xf0 Return
	
Label_241:
	DoDialog(var_861_object); // 0xf1 Func
	var_875_bool = 0; var_876_object = Obj(); // 0xf3 PushV
	var_877_object = Obj(); // 0xf4 PushV
	func_5541(var_877_object); // 0xf5 NEW_2
	var_876_object = var_877_object; // 0xf6 Mov
	func_5350(var_875_bool, var_876_object); // 0xf8 NEW_2
	var_878_object = Obj(); var_879_object = Obj(); // 0xfa PushV
	var_878_object = var_855_object; // 0xfb Mov
	var_879_object = var_861_object; // 0xfc Mov
	TaskCall(3); // 0xfd TaskCall
	func_277(var_880_object, var_881_object, var_882_string, var_883_bool, var_878_object, var_879_object); // 0xfe NEW_2
	TaskReturn(); // 0xff TaskReturn
	IsDialogEnd(var_864_bool); // 0x101 ObjFunc
	
Label_259:
	var_911_bool = var_864_bool == 0; // 0x103 Not
	if(var_911_bool == 0) goto Label_266; // 0x104 JumpB
	sync(); // 0x105 Func
	IsDialogEnd(var_864_bool); // 0x107 ObjFunc
	goto Label_259; // 0x109 Jump
	
Label_266:
	var_912_object = Obj(); // 0x10a PushV
	var_912_object = var_855_object; // 0x10b Mov
	func_5333(); // 0x10c NEW_2
	StopDialog(var_861_object); // 0x10e Func
	GetReturnValue(var_863_int); // 0x110 ObjFunc
	var_854_int = var_863_int; // 0x112 Mov
	return 8; // 0x113 Return
}


func_3013(var_0_object, var_1_object, var_2_object, var_3_string, var_620_object, var_621_object)
{
	var_0_object = var_621_object; // 0xbc6 TMov
	var_1_object = var_620_object; // 0xbc7 TMov
	var_3_string = 0; // 0xbc8 TMovB
	var_626_int = 1; // 0xbc9 PushI
	if(var_626_int == 0) goto Label_3041; // 0xbca JumpB
	var_627_string = ""; // 0xbcb PushV
	var_627_string = "Neutral"; // 0xbcc MovS
	func_3071(var_621_object, var_627_string); // 0xbcd NEW_2
	var_635_int = 513720; // 0xbcf PushI
	SetMessage(var_635_int); // 0xbd0 TObjFunc
	ClearReplies(); // 0xbd2 TObjFunc
	var_636_int = 513722; // 0xbd4 PushI
	var_637_int = -1; // 0xbd5 PushI
	var_638_int = 14988; // 0xbd6 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0xbd7 TObjFunc
	var_639_int = 536132; // 0xbd9 PushI
	var_640_int = -1; // 0xbda PushI
	var_641_int = 37891; // 0xbdb PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0xbdc TObjFunc
	goto Label_3041; // 0xbde Jump
	
Label_3041:
	var_642_bool = 0; // 0xbe1 PushV
	func_5708(var_642_bool); // 0xbe2 NEW_2
	if(var_642_bool == 0) goto Label_3056; // 0xbe4 JumpB
	
Label_3045:
	lshWaitForAnimEnd(); // 0xbe5 Func
	var_643_string = var_3_string; // 0xbe7 PushT
	if(var_643_string == 0) goto Label_3050; // 0xbe8 JumpB
	goto Label_3055; // 0xbe9 Jump
	
Label_3055:
	goto Label_3070; // 0xbef Jump
	
Label_3070:
	return 0; // 0xbfe Return
	
Label_3050:
	var_644_string = ""; // 0xbea PushV
	var_644_string = var_2_object; // 0xbeb MovT
	func_5488(var_644_string); // 0xbec NEW_2
	goto Label_3045; // 0xbee Jump
	
Label_3056:
	var_645_string = "all"; // 0xbf0 PushS
	var_646_string = "idle"; // 0xbf1 PushS
	PlayAnimation(var_645_string, var_646_string); // 0xbf2 Func
	
Label_3060:
	WaitForAnimEnd(); // 0xbf4 Func
	var_647_string = var_3_string; // 0xbf6 PushT
	if(var_647_string == 0) goto Label_3065; // 0xbf7 JumpB
	goto Label_3070; // 0xbf8 Jump
	
Label_3065:
	var_648_string = "all"; // 0xbf9 PushS
	var_649_string = "idle"; // 0xbfa PushS
	PlayAnimation(var_648_string, var_649_string); // 0xbfb Func
	goto Label_3060; // 0xbfd Jump
}


func_3271(var_0_object, var_654_int, var_655_object)
{
	var_657_object = Obj(); var_658_bool = 0; var_659_int = 0; var_660_bool = 0; var_661_object = Obj(); var_662_bool = 0; var_663_int = 0; var_664_bool = 0; // 0xcc7 PushV
	var_0_object = var_655_object; // 0xcc8 TMov
	var_665_bool = 0; var_666_object = Obj(); var_667_float = 0; // 0xcc9 PushV
	var_666_object = var_655_object; // 0xcca Mov
	var_667_float = 70.0; // 0xccb MovF
	func_5265(var_666_object, var_667_float); // 0xccc NEW_2
	var_668_bool = var_665_bool == 0; // 0xcce Not
	if(var_668_bool == 0) goto Label_3282; // 0xccf JumpB
	var_654_int = -2; // 0xcd0 MovI
	return 8; // 0xcd1 Return
	
Label_3282:
	CreateDialog(var_661_object); // 0xcd2 Func
	var_669_int = 0; // 0xcd4 PushV
	func_5702(var_669_int); // 0xcd5 NEW_2
	SetNPCName(var_669_int); // 0xcd7 ObjFunc
	var_670_int = 0; // 0xcd9 PushV
	func_5700(var_670_int); // 0xcda NEW_2
	SetNPCDescription(var_670_int); // 0xcdc ObjFunc
	var_671_string = ""; // 0xcde PushV
	func_5704(var_671_string); // 0xcdf NEW_2
	SetPhoto(var_671_string); // 0xce1 ObjFunc
	var_672_string = ""; // 0xce3 PushV
	func_5706(var_672_string); // 0xce4 NEW_2
	SetPhoto2(var_672_string); // 0xce6 ObjFunc
	var_673_int = 0; // 0xce8 PushV
	func_6390(var_673_int); // 0xce9 NEW_2
	SetPlayerName(var_673_int); // 0xceb ObjFunc
	var_663_int = -1; // 0xced MovI
	IsOverrideActive(var_662_bool); // 0xcee Func
	var_674_bool = var_662_bool; // 0xcf0 Push
	if(var_674_bool == 0) goto Label_3316; // 0xcf1 JumpB
	var_654_int = -2; // 0xcf2 MovI
	return 8; // 0xcf3 Return
	
Label_3316:
	DoDialog(var_661_object); // 0xcf4 Func
	var_675_bool = 0; var_676_object = Obj(); // 0xcf6 PushV
	var_677_object = Obj(); // 0xcf7 PushV
	func_5541(var_677_object); // 0xcf8 NEW_2
	var_676_object = var_677_object; // 0xcf9 Mov
	func_5350(var_675_bool, var_676_object); // 0xcfb NEW_2
	var_678_object = Obj(); var_679_object = Obj(); // 0xcfd PushV
	var_678_object = var_655_object; // 0xcfe Mov
	var_679_object = var_661_object; // 0xcff Mov
	TaskCall(13); // 0xd00 TaskCall
	func_3352(var_680_object, var_681_object, var_682_string, var_683_bool, var_678_object, var_679_object); // 0xd01 NEW_2
	TaskReturn(); // 0xd02 TaskReturn
	IsDialogEnd(var_664_bool); // 0xd04 ObjFunc
	
Label_3334:
	var_742_bool = var_664_bool == 0; // 0xd06 Not
	if(var_742_bool == 0) goto Label_3341; // 0xd07 JumpB
	sync(); // 0xd08 Func
	IsDialogEnd(var_664_bool); // 0xd0a ObjFunc
	goto Label_3334; // 0xd0c Jump
	
Label_3341:
	var_743_object = Obj(); // 0xd0d PushV
	var_743_object = var_655_object; // 0xd0e Mov
	func_5333(); // 0xd0f NEW_2
	StopDialog(var_661_object); // 0xd11 Func
	GetReturnValue(var_663_int); // 0xd13 ObjFunc
	var_654_int = var_663_int; // 0xd15 Mov
	return 8; // 0xd16 Return
}


func_5574(var_185_object, var_186_int)
{
	var_187_int = 0; var_188_int = 0; // 0x15c6 PushV
	var_189_object = Obj(); var_190_string = ""; var_191_int = 0; // 0x15c7 PushV
	var_189_object = var_185_object; // 0x15c8 Mov
	var_190_string = "money"; // 0x15c9 MovS
	var_191_int = var_186_int; // 0x15ca Mov
	func_5234(var_190_string, var_191_int); // 0x15cb NEW_2
	var_195_int = 0; // 0x15cd PushI
	var_196_bool = var_186_int > var_195_int; // 0x15ce GT
	if(var_196_bool == 0) goto Label_5592; // 0x15cf JumpB
	var_197_string = "Money"; // 0x15d0 PushS
	GetInvItemByName(var_188_int, var_197_string); // 0x15d1 Func
	var_198_int = 0; var_199_int = 0; // 0x15d3 PushV
	var_198_int = var_188_int; // 0x15d4 Mov
	var_199_int = var_186_int; // 0x15d5 Mov
	func_5562(var_198_int, var_199_int); // 0x15d6 NEW_2
	
Label_5592:
	return 2; // 0x15d8 Return
}


func_6091(var_437_bool)
{
	var_439_int = 0; var_440_string = ""; // 0x17cc PushV
	var_440_string = "d2q02"; // 0x17cd MovS
	func_5557(var_439_int, var_440_string); // 0x17ce NEW_2
	var_441_int = 3; // 0x17d0 PushI
	var_442_bool = var_439_int == var_441_int; // 0x17d1 Eq
	if(var_442_bool == 0) goto Label_6101; // 0x17d2 JumpB
	var_437_bool = 1; // 0x17d3 MovB
	return 0; // 0x17d4 Return
	
Label_6101:
	var_437_bool = 0; // 0x17d5 MovB
	return 0; // 0x17d6 Return
}


func_5333()
{
	var_293_bool = 0; var_294_bool = 0; // 0x14d5 PushV
	CameraSwitchToNormal(); // 0x14d6 Func
	var_295_bool = 0; // 0x14d8 PushV
	func_5708(var_295_bool); // 0x14d9 NEW_2
	if(var_295_bool == 0) goto Label_5341; // 0x14db JumpB
	goto Label_5349; // 0x14dc Jump
	
Label_5349:
	return 2; // 0x14e5 Return
	
Label_5341:
	var_296_string = "head"; // 0x14dd PushS
	HasAnimationTrack(var_294_bool, var_296_string); // 0x14de Func
	var_297_bool = var_294_bool; // 0x14e0 Push
	if(var_297_bool == 0) goto Label_5349; // 0x14e1 JumpB
	var_298_string = "head"; // 0x14e2 PushS
	UnlookAsync(var_298_string); // 0x14e3 Func
}


func_6357(var_119_object, var_120_string, var_121_float)
{
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_object = Obj(); var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_object = Obj(); var_136_bool = 0; // 0x18d5 PushV
	GetMainOutdoorScene(var_135_object); // 0x18d6 Func
	var_137_bool = var_135_object == 0; // 0x18d8 NullEq
	if(var_137_bool == 0) goto Label_6366; // 0x18d9 JumpB
	var_138_string = "Can't find main outdoor scene"; // 0x18da PushS
	Trace(var_138_string); // 0x18db Func
	return 8; // 0x18dd Return
	
Label_6366:
	GetLocator(var_120_string, var_136_bool, var_133_cvector, var_134_cvector); // 0x18de ObjFunc
	var_139_bool = var_136_bool == 0; // 0x18e0 Not
	if(var_139_bool == 0) goto Label_6376; // 0x18e1 JumpB
	var_140_string = "Warning: outdoor scene locator "; // 0x18e2 PushS
	var_141_int = var_140_string + var_120_string; // 0x18e3 Add
	var_142_string = " doesnt exist"; // 0x18e4 PushS
	var_143_int = var_141_int + var_142_string; // 0x18e5 Add
	Trace(var_143_int); // 0x18e6 Func
	
Label_6376:
	GetMap(var_119_object); // 0x18e8 ObjFunc
	var_144_bool = var_119_object == 0; // 0x18ea NullEq
	if(var_144_bool == 0) goto Label_6384; // 0x18eb JumpB
	var_145_string = "Can't find map"; // 0x18ec PushS
	Trace(var_145_string); // 0x18ed Func
	return 8; // 0x18ef Return
	
Label_6384:
	var_146_float = GetByIndex(var_133_cvector, 0); // 0x18f0 PushE
	var_147_float = GetByIndex(var_133_cvector, 2); // 0x18f1 PushE
	SetMapParams(var_146_float, var_147_float, var_121_float); // 0x18f2 ObjFunc
	return 8; // 0x18f4 Return
}


func_5847()
{
	var_227_string = "d2q02"; // 0x16d8 PushS
	var_228_int = 8; // 0x16d9 PushI
	SetVariable(var_227_string, var_228_int); // 0x16da Func
	func_6286(); // 0x16dd NEW_2
	var_237_bool = 0; var_238_string = ""; var_239_string = ""; // 0x16df PushV
	var_238_string = "quest_d2_02"; // 0x16e0 MovS
	var_239_string = "put_patrol"; // 0x16e1 MovS
	func_5625(var_237_bool, var_238_string, var_239_string); // 0x16e2 NEW_2
	return 0; // 0x16e4 Return
}


func_6103(var_453_bool)
{
	var_455_int = 0; var_456_string = ""; // 0x17d8 PushV
	var_456_string = "d2q02"; // 0x17d9 MovS
	func_5557(var_455_int, var_456_string); // 0x17da NEW_2
	var_457_int = 5; // 0x17dc PushI
	var_458_bool = var_455_int == var_457_int; // 0x17dd Eq
	if(var_458_bool == 0) goto Label_6113; // 0x17de JumpB
	var_453_bool = 1; // 0x17df MovB
	return 0; // 0x17e0 Return
	
Label_6113:
	var_453_bool = 0; // 0x17e1 MovB
	return 0; // 0x17e2 Return
}


func_5593(var_86_object, var_87_int)
{
	var_88_int = 0; var_89_int = 0; var_90_bool = 0; var_91_int = 0; var_92_int = 0; var_93_bool = 0; // 0x15d9 PushV
	GetItemID(var_91_int); // 0x15da ObjFunc
	var_94_string = "Category"; // 0x15dc PushS
	GetInvItemProperty(var_92_int, var_91_int, var_94_string); // 0x15dd Func
	AddItem(var_93_bool, var_86_object, var_92_int, var_87_int); // 0x15df ObjFunc
	var_95_bool = var_93_bool == 0; // 0x15e1 Not
	if(var_95_bool == 0) goto Label_5606; // 0x15e2 JumpB
	DropItems(var_86_object, var_87_int); // 0x15e3 ObjFunc
	goto Label_5611; // 0x15e5 Jump
	
Label_5611:
	return 6; // 0x15eb Return
	
Label_5606:
	var_96_int = 0; var_97_int = 0; // 0x15e6 PushV
	var_96_int = var_91_int; // 0x15e7 Mov
	var_97_int = var_87_int; // 0x15e8 Mov
	func_5562(var_96_int, var_97_int); // 0x15e9 NEW_2
}


func_478(var_0_object, var_69_int, var_70_object)
{
	var_72_object = Obj(); var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_object = Obj(); var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x1de PushV
	var_0_object = var_70_object; // 0x1df TMov
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0; // 0x1e0 PushV
	var_81_object = var_70_object; // 0x1e1 Mov
	var_82_float = 70.0; // 0x1e2 MovF
	func_5265(var_81_object, var_82_float); // 0x1e3 NEW_2
	var_126_bool = var_80_bool == 0; // 0x1e5 Not
	if(var_126_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_69_int = -2; // 0x1e7 MovI
	return 8; // 0x1e8 Return
	
Label_489:
	CreateDialog(var_76_object); // 0x1e9 Func
	var_127_int = 0; // 0x1eb PushV
	func_5702(var_127_int); // 0x1ec NEW_2
	SetNPCName(var_127_int); // 0x1ee ObjFunc
	var_128_int = 0; // 0x1f0 PushV
	func_5700(var_128_int); // 0x1f1 NEW_2
	SetNPCDescription(var_128_int); // 0x1f3 ObjFunc
	var_129_string = ""; // 0x1f5 PushV
	func_5704(var_129_string); // 0x1f6 NEW_2
	SetPhoto(var_129_string); // 0x1f8 ObjFunc
	var_130_string = ""; // 0x1fa PushV
	func_5706(var_130_string); // 0x1fb NEW_2
	SetPhoto2(var_130_string); // 0x1fd ObjFunc
	var_131_int = 0; // 0x1ff PushV
	func_6390(var_131_int); // 0x200 NEW_2
	SetPlayerName(var_131_int); // 0x202 ObjFunc
	var_78_int = -1; // 0x204 MovI
	IsOverrideActive(var_77_bool); // 0x205 Func
	var_139_bool = var_77_bool; // 0x207 Push
	if(var_139_bool == 0) goto Label_523; // 0x208 JumpB
	var_69_int = -2; // 0x209 MovI
	return 8; // 0x20a Return
	
Label_523:
	DoDialog(var_76_object); // 0x20b Func
	var_140_bool = 0; var_141_object = Obj(); // 0x20d PushV
	var_142_object = Obj(); // 0x20e PushV
	func_5541(var_142_object); // 0x20f NEW_2
	var_141_object = var_142_object; // 0x210 Mov
	func_5350(var_140_bool, var_141_object); // 0x212 NEW_2
	var_235_object = Obj(); var_236_object = Obj(); // 0x214 PushV
	var_235_object = var_70_object; // 0x215 Mov
	var_236_object = var_76_object; // 0x216 Mov
	TaskCall(5); // 0x217 TaskCall
	func_559(var_237_object, var_238_object, var_239_string, var_240_bool, var_235_object, var_236_object); // 0x218 NEW_2
	TaskReturn(); // 0x219 TaskReturn
	IsDialogEnd(var_79_bool); // 0x21b ObjFunc
	
Label_541:
	var_291_bool = var_79_bool == 0; // 0x21d Not
	if(var_291_bool == 0) goto Label_548; // 0x21e JumpB
	sync(); // 0x21f Func
	IsDialogEnd(var_79_bool); // 0x221 ObjFunc
	goto Label_541; // 0x223 Jump
	
Label_548:
	var_292_object = Obj(); // 0x224 PushV
	var_292_object = var_70_object; // 0x225 Mov
	func_5333(); // 0x226 NEW_2
	StopDialog(var_76_object); // 0x228 Func
	GetReturnValue(var_78_int); // 0x22a ObjFunc
	var_69_int = var_78_int; // 0x22c Mov
	return 8; // 0x22d Return
}


func_6115(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0x17e4 PushV
	var_472_string = "d2q02"; // 0x17e5 MovS
	func_5557(var_471_int, var_472_string); // 0x17e6 NEW_2
	var_473_int = 7; // 0x17e8 PushI
	var_474_bool = var_471_int == var_473_int; // 0x17e9 Eq
	if(var_474_bool == 0) goto Label_6125; // 0x17ea JumpB
	var_469_bool = 1; // 0x17eb MovB
	return 0; // 0x17ec Return
	
Label_6125:
	var_469_bool = 0; // 0x17ed MovB
	return 0; // 0x17ee Return
}


func_5861()
{
	var_177_object = Obj(); var_178_string = ""; var_179_float = 0; // 0x16e6 PushV
	var_180_object = Obj(); // 0x16e7 PushV
	func_6340(var_180_object); // 0x16e8 NEW_2
	var_177_object = var_180_object; // 0x16e9 Mov
	var_178_string = "pt_map_grif"; // 0x16eb MovS
	var_179_float = 2; // 0x16ec MovI
	func_6357(var_177_object, var_178_string, var_179_float); // 0x16ed NEW_2
	var_181_object = Obj(); // 0x16ef PushV
	func_6340(var_181_object); // 0x16f0 NEW_2
	ShowMap(var_181_object); // 0x16f2 ObjFunc
	return 0; // 0x16f4 Return
}


func_5350(var_140_bool, var_141_object)
{
	var_145_int = 0; var_146_int = 0; var_147_int = 0; var_148_int = 0; // 0x14e6 PushV
	var_149_string = "voice_common"; // 0x14e7 PushS
	GetVariable(var_149_string, var_147_int); // 0x14e8 Func
	var_150_int = var_147_int; // 0x14ea Push
	if(var_150_int == 0) goto Label_5388; // 0x14eb JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x14ec PushV
	var_152_object = var_141_object; // 0x14ed Mov
	func_5408(var_152_object); // 0x14ee NEW_2
	var_181_bool = var_151_bool == 0; // 0x14f0 Not
	if(var_181_bool == 0) goto Label_5370; // 0x14f1 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x14f2 PushV
	var_183_object = var_141_object; // 0x14f3 Mov
	func_5445(var_183_object); // 0x14f4 NEW_2
	var_217_bool = var_182_bool == 0; // 0x14f6 Not
	if(var_217_bool == 0) goto Label_5370; // 0x14f7 JumpB
	var_140_bool = 0; // 0x14f8 MovB
	return 4; // 0x14f9 Return
	
Label_5370:
	var_218_int = 2; // 0x14fa PushI
	irand(var_148_int, var_218_int); // 0x14fb Func
	var_219_int = var_148_int; // 0x14fd Push
	if(var_219_int == 0) goto Label_5383; // 0x14fe JumpB
	var_220_string = "voice_common"; // 0x14ff PushS
	var_221_int = 1; // 0x1500 PushI
	var_222_int = var_147_int + var_221_int; // 0x1501 Add
	var_223_int = 3; // 0x1502 PushI
	var_224_int = var_222_int / var_223_int; // 0x1503 Mod
	SetVariable(var_220_string, var_224_int); // 0x1504 Func
	goto Label_5387; // 0x1506 Jump
	
Label_5387:
	goto Label_5406; // 0x150b Jump
	
Label_5406:
	var_140_bool = 1; // 0x151e MovB
	return 4; // 0x151f Return
	
Label_5383:
	var_225_string = "voice_common"; // 0x1507 PushS
	var_226_int = 0; // 0x1508 PushI
	SetVariable(var_225_string, var_226_int); // 0x1509 Func
	
Label_5388:
	var_227_bool = 0; var_228_object = Obj(); // 0x150c PushV
	var_228_object = var_141_object; // 0x150d Mov
	func_5445(var_228_object); // 0x150e NEW_2
	var_229_bool = var_227_bool == 0; // 0x1510 Not
	if(var_229_bool == 0) goto Label_5402; // 0x1511 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x1512 PushV
	var_231_object = var_141_object; // 0x1513 Mov
	func_5408(var_231_object); // 0x1514 NEW_2
	var_232_bool = var_230_bool == 0; // 0x1516 Not
	if(var_232_bool == 0) goto Label_5402; // 0x1517 JumpB
	var_140_bool = 0; // 0x1518 MovB
	return 4; // 0x1519 Return
	
Label_5402:
	var_233_string = "voice_common"; // 0x151a PushS
	var_234_int = 1; // 0x151b PushI
	SetVariable(var_233_string, var_234_int); // 0x151c Func
}


func_5612(var_80_object, var_81_string, var_82_int)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x15ec PushV
	CreateInvItem(var_84_object); // 0x15ed Func
	SetItemName(var_81_string); // 0x15ef ObjFunc
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; // 0x15f1 PushV
	var_85_object = var_80_object; // 0x15f2 Mov
	var_86_object = var_84_object; // 0x15f3 Mov
	var_87_int = var_82_int; // 0x15f4 Mov
	func_5593(var_86_object, var_87_int); // 0x15f5 NEW_2
	return 2; // 0x15f7 Return
}


func_6127(var_490_bool)
{
	var_492_int = 0; var_493_string = ""; // 0x17f0 PushV
	var_493_string = "KnowGrif"; // 0x17f1 MovS
	func_5557(var_492_int, var_493_string); // 0x17f2 NEW_2
	var_494_int = 1; // 0x17f4 PushI
	var_495_bool = var_492_int == var_494_int; // 0x17f5 Eq
	if(var_495_bool == 0) goto Label_6137; // 0x17f6 JumpB
	var_490_bool = 1; // 0x17f7 MovB
	return 0; // 0x17f8 Return
	
Label_6137:
	var_490_bool = 0; // 0x17f9 MovB
	return 0; // 0x17fa Return
}


func_4848(var_0_object, var_1_object, var_2_object, var_3_string, var_937_object, var_938_object)
{
	var_0_object = var_938_object; // 0x12f1 TMov
	var_1_object = var_937_object; // 0x12f2 TMov
	var_3_string = 0; // 0x12f3 TMovB
	var_943_int = 1; // 0x12f4 PushI
	if(var_943_int == 0) goto Label_4876; // 0x12f5 JumpB
	var_944_string = ""; // 0x12f6 PushV
	var_944_string = "Neutral"; // 0x12f7 MovS
	func_4906(var_938_object, var_944_string); // 0x12f8 NEW_2
	var_952_int = 540542; // 0x12fa PushI
	SetMessage(var_952_int); // 0x12fb TObjFunc
	ClearReplies(); // 0x12fd TObjFunc
	var_953_int = 540543; // 0x12ff PushI
	var_954_int = -1; // 0x1300 PushI
	var_955_int = 42552; // 0x1301 PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0x1302 TObjFunc
	var_956_int = 540796; // 0x1304 PushI
	var_957_int = -1; // 0x1305 PushI
	var_958_int = 42845; // 0x1306 PushI
	AddReply(var_956_int, var_957_int, var_958_int); // 0x1307 TObjFunc
	goto Label_4876; // 0x1309 Jump
	
Label_4876:
	var_959_bool = 0; // 0x130c PushV
	func_5708(var_959_bool); // 0x130d NEW_2
	if(var_959_bool == 0) goto Label_4891; // 0x130f JumpB
	
Label_4880:
	lshWaitForAnimEnd(); // 0x1310 Func
	var_960_string = var_3_string; // 0x1312 PushT
	if(var_960_string == 0) goto Label_4885; // 0x1313 JumpB
	goto Label_4890; // 0x1314 Jump
	
Label_4890:
	goto Label_4905; // 0x131a Jump
	
Label_4905:
	return 0; // 0x1329 Return
	
Label_4885:
	var_961_string = ""; // 0x1315 PushV
	var_961_string = var_2_object; // 0x1316 MovT
	func_5488(var_961_string); // 0x1317 NEW_2
	goto Label_4880; // 0x1319 Jump
	
Label_4891:
	var_962_string = "all"; // 0x131b PushS
	var_963_string = "idle"; // 0x131c PushS
	PlayAnimation(var_962_string, var_963_string); // 0x131d Func
	
Label_4895:
	WaitForAnimEnd(); // 0x131f Func
	var_964_string = var_3_string; // 0x1321 PushT
	if(var_964_string == 0) goto Label_4900; // 0x1322 JumpB
	goto Label_4905; // 0x1323 Jump
	
Label_4900:
	var_965_string = "all"; // 0x1324 PushS
	var_966_string = "idle"; // 0x1325 PushS
	PlayAnimation(var_965_string, var_966_string); // 0x1326 Func
	goto Label_4895; // 0x1328 Jump
}


func_5877(var_58_object)
{
	var_60_string = "tvirin is given"; // 0x16f6 PushS
	Trace(var_60_string); // 0x16f7 Func
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; // 0x16f9 PushV
	var_61_object = var_58_object; // 0x16fa Mov
	var_62_string = "tvirin"; // 0x16fb MovS
	var_63_int = 1; // 0x16fc MovI
	func_5612(var_61_object, var_62_string, var_63_int); // 0x16fd NEW_2
	return 0; // 0x16ff Return
}


func_6390(var_131_int)
{
	var_132_int = 0; var_133_int = 0; // 0x18f6 PushV
	var_134_string = "branch"; // 0x18f7 PushS
	GetVariable(var_134_string, var_133_int); // 0x18f8 Func
	var_135_int = 0; // 0x18fa PushI
	var_136_bool = var_133_int == var_135_int; // 0x18fb Eq
	if(var_136_bool == 0) goto Label_6400; // 0x18fc JumpB
	var_131_int = 1; // 0x18fd MovI
	return 2; // 0x18fe Return
	
Label_6400:
	var_137_int = 1; // 0x1900 PushI
	var_138_bool = var_133_int == var_137_int; // 0x1901 Eq
	if(var_138_bool == 0) goto Label_6405; // 0x1902 JumpB
	var_131_int = 2; // 0x1903 MovI
	return 2; // 0x1904 Return
	
Label_6405:
	var_131_int = 3; // 0x1905 MovI
	return 2; // 0x1906 Return
}


func_5625(var_237_bool, var_238_string, var_239_string)
{
	var_240_object = Obj(); var_241_object = Obj(); // 0x15f9 PushV
	FindActor(var_241_object, var_238_string); // 0x15fa Func
	var_242_bool = var_241_object == 0; // 0x15fc NullEq
	if(var_242_bool == 0) goto Label_5632; // 0x15fd JumpB
	var_237_bool = 0; // 0x15fe MovB
	return 2; // 0x15ff Return
	
Label_5632:
	Trigger(var_241_object, var_239_string); // 0x1600 Func
	var_237_bool = 1; // 0x1602 MovB
	return 2; // 0x1603 Return
}


func_6139(var_778_bool)
{
	var_780_int = 0; var_781_string = ""; // 0x17fc PushV
	var_781_string = "d11q01"; // 0x17fd MovS
	func_5557(var_780_int, var_781_string); // 0x17fe NEW_2
	var_782_int = 3; // 0x1800 PushI
	var_783_bool = var_780_int == var_782_int; // 0x1801 Eq
	if(var_783_bool == 0) goto Label_6149; // 0x1802 JumpB
	var_778_bool = 1; // 0x1803 MovB
	return 0; // 0x1804 Return
	
Label_6149:
	var_778_bool = 0; // 0x1805 MovB
	return 0; // 0x1806 Return
}


func_3071(var_2_object, var_627_string)
{
	var_628_bool = 0; // 0xc00 PushV
	func_5708(var_628_bool); // 0xc01 NEW_2
	var_629_bool = var_628_bool == 0; // 0xc03 Not
	if(var_629_bool == 0) goto Label_3078; // 0xc04 JumpB
	return 0; // 0xc05 Return
	
Label_3078:
	var_630_bool = var_627_string == var_2_object; // 0xc06 Eq
	if(var_630_bool == 0) goto Label_3081; // 0xc07 JumpB
	return 0; // 0xc08 Return
	
Label_3081:
	var_631_string = ""; var_632_bool = 0; // 0xc09 PushV
	var_631_string = var_627_string; // 0xc0a Mov
	var_633_string = ""; // 0xc0b PushS
	var_634_bool = var_627_string == var_633_string; // 0xc0c Eq
	if(var_634_bool == 0) goto Label_3088; // 0xc0d JumpB
	var_632_bool = 0; // 0xc0e MovB
	goto Label_3089; // 0xc0f Jump
	
Label_3089:
	func_5504(var_631_string, var_632_bool); // 0xc11 NEW_2
	var_2_object = var_627_string; // 0xc13 TMov
	return 0; // 0xc14 Return
	
Label_3088:
	var_632_bool = 1; // 0xc10 MovB
}


