task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa7 PushI
	if(var_28_int == 0) goto Label_312; // 0xa8 JumpB
	func_2129(); // 0xaa NEW_2
	var_30_int = 32175; // 0xac PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xad Eq
	if(var_31_bool == 0) goto Label_180; // 0xae JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xaf PushV
	var_32_object = var_1_object; // 0xb0 MovT
	var_33_object = var_0_object; // 0xb1 MovT
	func_2265(); // 0xb2 NEW_2
	
Label_180:
	var_36_int = 32173; // 0xb4 PushI
	var_37_bool = var_26_bool == var_36_int; // 0xb5 Eq
	if(var_37_bool == 0) goto Label_208; // 0xb6 JumpB
	var_38_string = ""; // 0xb7 PushV
	var_38_string = "Neutral"; // 0xb8 MovS
	func_144(var_27_cvector, var_38_string); // 0xb9 NEW_2
	var_55_int = 530857; // 0xbb PushI
	SetMessage(var_55_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0xc0 PushV
	var_57_object = var_1_object; // 0xc1 MovT
	func_2281(var_57_object); // 0xc2 NEW_2
	if(var_56_bool == 0) goto Label_202; // 0xc4 JumpB
	var_64_int = 530859; // 0xc5 PushI
	var_65_int = 32176; // 0xc6 PushI
	var_66_int = 32175; // 0xc7 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xc8 TObjFunc
	
Label_202:
	var_67_int = 530858; // 0xca PushI
	var_68_int = -1; // 0xcb PushI
	var_69_int = 32174; // 0xcc PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_70_int = 32176; // 0xd0 PushI
	var_71_bool = var_26_bool == var_70_int; // 0xd1 Eq
	if(var_71_bool == 0) goto Label_231; // 0xd2 JumpB
	var_72_string = ""; // 0xd3 PushV
	var_72_string = "Fear"; // 0xd4 MovS
	func_144(var_27_cvector, var_72_string); // 0xd5 NEW_2
	var_73_int = 530860; // 0xd7 PushI
	SetMessage(var_73_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_74_int = 530861; // 0xdc PushI
	var_75_int = 32179; // 0xdd PushI
	var_76_int = 32177; // 0xde PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xdf TObjFunc
	var_77_int = 530862; // 0xe1 PushI
	var_78_int = 32185; // 0xe2 PushI
	var_79_int = 32178; // 0xe3 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_80_int = 32179; // 0xe7 PushI
	var_81_bool = var_26_bool == var_80_int; // 0xe8 Eq
	if(var_81_bool == 0) goto Label_254; // 0xe9 JumpB
	var_82_string = ""; // 0xea PushV
	var_82_string = "Fear"; // 0xeb MovS
	func_144(var_27_cvector, var_82_string); // 0xec NEW_2
	var_83_int = 530863; // 0xee PushI
	SetMessage(var_83_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_84_int = 530864; // 0xf3 PushI
	var_85_int = 32182; // 0xf4 PushI
	var_86_int = 32180; // 0xf5 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xf6 TObjFunc
	var_87_int = 530865; // 0xf8 PushI
	var_88_int = 32185; // 0xf9 PushI
	var_89_int = 32181; // 0xfa PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_90_int = 32182; // 0xfe PushI
	var_91_bool = var_26_bool == var_90_int; // 0xff Eq
	if(var_91_bool == 0) goto Label_277; // 0x100 JumpB
	var_92_string = ""; // 0x101 PushV
	var_92_string = "Fear"; // 0x102 MovS
	func_144(var_27_cvector, var_92_string); // 0x103 NEW_2
	var_93_int = 530866; // 0x105 PushI
	SetMessage(var_93_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_94_int = 530867; // 0x10a PushI
	var_95_int = 32185; // 0x10b PushI
	var_96_int = 32183; // 0x10c PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x10d TObjFunc
	var_97_int = 530868; // 0x10f PushI
	var_98_int = 32185; // 0x110 PushI
	var_99_int = 32184; // 0x111 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_100_int = 32185; // 0x115 PushI
	var_101_bool = var_26_bool == var_100_int; // 0x116 Eq
	if(var_101_bool == 0) goto Label_300; // 0x117 JumpB
	var_102_string = ""; // 0x118 PushV
	var_102_string = "Fear"; // 0x119 MovS
	func_144(var_27_cvector, var_102_string); // 0x11a NEW_2
	var_103_int = 530870; // 0x11c PushI
	SetMessage(var_103_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_104_int = 530871; // 0x121 PushI
	var_105_int = -1; // 0x122 PushI
	var_106_int = 32189; // 0x123 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x124 TObjFunc
	var_107_int = 530872; // 0x126 PushI
	var_108_int = -1; // 0x127 PushI
	var_109_int = 32190; // 0x128 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_3_string = 1; // 0x12c TMovB
	var_110_bool = 0; // 0x12d PushV
	func_2235(var_110_bool); // 0x12e NEW_2
	if(var_110_bool == 0) goto Label_308; // 0x130 JumpB
	lshStopAnimation(); // 0x131 Func
	goto Label_310; // 0x133 Jump
	
Label_310:
	return 0; // 0x136 Return
	
Label_308:
	StopAnimation(); // 0x134 Func
	
Label_312:
	return 0; // 0x138 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1e0 PushI
	if(var_28_int == 0) goto Label_571; // 0x1e1 JumpB
	func_2129(); // 0x1e3 NEW_2
	var_30_int = 36971; // 0x1e5 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x1e6 Eq
	if(var_31_bool == 0) goto Label_513; // 0x1e7 JumpB
	var_32_string = ""; // 0x1e8 PushV
	var_32_string = "Neutral"; // 0x1e9 MovS
	func_457(var_27_cvector, var_32_string); // 0x1ea NEW_2
	var_49_int = 535294; // 0x1ec PushI
	SetMessage(var_49_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_50_int = 535295; // 0x1f1 PushI
	var_51_int = 36973; // 0x1f2 PushI
	var_52_int = 36972; // 0x1f3 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x1f4 TObjFunc
	var_53_int = 535302; // 0x1f6 PushI
	var_54_int = -1; // 0x1f7 PushI
	var_55_int = 36980; // 0x1f8 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x1f9 TObjFunc
	var_56_int = 535303; // 0x1fb PushI
	var_57_int = -1; // 0x1fc PushI
	var_58_int = 36981; // 0x1fd PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x1fe TObjFunc
	return 0; // 0x200 Return
	
Label_513:
	var_59_int = 36973; // 0x201 PushI
	var_60_bool = var_26_bool == var_59_int; // 0x202 Eq
	if(var_60_bool == 0) goto Label_536; // 0x203 JumpB
	var_61_string = ""; // 0x204 PushV
	var_61_string = "Neutral"; // 0x205 MovS
	func_457(var_27_cvector, var_61_string); // 0x206 NEW_2
	var_62_int = 535296; // 0x208 PushI
	SetMessage(var_62_int); // 0x209 TObjFunc
	ClearReplies(); // 0x20b TObjFunc
	var_63_int = 535297; // 0x20d PushI
	var_64_int = 36975; // 0x20e PushI
	var_65_int = 36974; // 0x20f PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x210 TObjFunc
	var_66_int = 535301; // 0x212 PushI
	var_67_int = 36975; // 0x213 PushI
	var_68_int = 36978; // 0x214 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x215 TObjFunc
	return 0; // 0x217 Return
	
Label_536:
	var_69_int = 36975; // 0x218 PushI
	var_70_bool = var_26_bool == var_69_int; // 0x219 Eq
	if(var_70_bool == 0) goto Label_559; // 0x21a JumpB
	var_71_string = ""; // 0x21b PushV
	var_71_string = "Neutral"; // 0x21c MovS
	func_457(var_27_cvector, var_71_string); // 0x21d NEW_2
	var_72_int = 535298; // 0x21f PushI
	SetMessage(var_72_int); // 0x220 TObjFunc
	ClearReplies(); // 0x222 TObjFunc
	var_73_int = 535299; // 0x224 PushI
	var_74_int = -1; // 0x225 PushI
	var_75_int = 36976; // 0x226 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x227 TObjFunc
	var_76_int = 535300; // 0x229 PushI
	var_77_int = -1; // 0x22a PushI
	var_78_int = 36977; // 0x22b PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_3_string = 1; // 0x22f TMovB
	var_79_bool = 0; // 0x230 PushV
	func_2235(var_79_bool); // 0x231 NEW_2
	if(var_79_bool == 0) goto Label_567; // 0x233 JumpB
	lshStopAnimation(); // 0x234 Func
	goto Label_569; // 0x236 Jump
	
Label_569:
	return 0; // 0x239 Return
	
Label_567:
	StopAnimation(); // 0x237 Func
	
Label_571:
	return 0; // 0x23b Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x2de PushI
	if(var_28_int == 0) goto Label_797; // 0x2df JumpB
	func_2129(); // 0x2e1 NEW_2
	var_30_int = 19130; // 0x2e3 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x2e4 Eq
	if(var_31_bool == 0) goto Label_762; // 0x2e5 JumpB
	var_32_string = ""; // 0x2e6 PushV
	var_32_string = "Neutral"; // 0x2e7 MovS
	func_711(var_27_cvector, var_32_string); // 0x2e8 NEW_2
	var_49_int = 517997; // 0x2ea PushI
	SetMessage(var_49_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_50_int = 517998; // 0x2ef PushI
	var_51_int = 29658; // 0x2f0 PushI
	var_52_int = 19131; // 0x2f1 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x2f2 TObjFunc
	var_53_int = 528292; // 0x2f4 PushI
	var_54_int = 29658; // 0x2f5 PushI
	var_55_int = 29657; // 0x2f6 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_56_int = 29658; // 0x2fa PushI
	var_57_bool = var_26_bool == var_56_int; // 0x2fb Eq
	if(var_57_bool == 0) goto Label_785; // 0x2fc JumpB
	var_58_string = ""; // 0x2fd PushV
	var_58_string = "Neutral"; // 0x2fe MovS
	func_711(var_27_cvector, var_58_string); // 0x2ff NEW_2
	var_59_int = 528293; // 0x301 PushI
	SetMessage(var_59_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_60_int = 528294; // 0x306 PushI
	var_61_int = -1; // 0x307 PushI
	var_62_int = 29660; // 0x308 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x309 TObjFunc
	var_63_int = 528295; // 0x30b PushI
	var_64_int = -1; // 0x30c PushI
	var_65_int = 29661; // 0x30d PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_3_string = 1; // 0x311 TMovB
	var_66_bool = 0; // 0x312 PushV
	func_2235(var_66_bool); // 0x313 NEW_2
	if(var_66_bool == 0) goto Label_793; // 0x315 JumpB
	lshStopAnimation(); // 0x316 Func
	goto Label_795; // 0x318 Jump
	
Label_795:
	return 0; // 0x31b Return
	
Label_793:
	StopAnimation(); // 0x319 Func
	
Label_797:
	return 0; // 0x31d Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3e1 PushI
	if(var_28_int == 0) goto Label_1358; // 0x3e2 JumpB
	func_2129(); // 0x3e4 NEW_2
	var_30_int = 19739; // 0x3e6 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x3e7 Eq
	if(var_31_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x3e9 PushV
	var_32_object = var_1_object; // 0x3ea MovT
	var_33_object = var_0_object; // 0x3eb MovT
	func_2237(); // 0x3ec NEW_2
	
Label_1006:
	var_36_int = 19745; // 0x3ee PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x3ef Eq
	if(var_37_bool == 0) goto Label_1024; // 0x3f0 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x3f1 PushV
	var_38_object = var_1_object; // 0x3f2 MovT
	var_39_object = var_0_object; // 0x3f3 MovT
	func_2243(); // 0x3f4 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x3f6 PushV
	var_42_object = var_1_object; // 0x3f7 MovT
	var_43_object = var_0_object; // 0x3f8 MovT
	func_2249(var_43_object); // 0x3f9 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x3fb PushV
	var_63_object = var_1_object; // 0x3fc MovT
	var_64_object = var_0_object; // 0x3fd MovT
	func_2259(); // 0x3fe NEW_2
	
Label_1024:
	var_67_int = 19824; // 0x400 PushI
	var_68_bool = var_27_cvector == var_67_int; // 0x401 Eq
	if(var_68_bool == 0) goto Label_1042; // 0x402 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0x403 PushV
	var_69_object = var_1_object; // 0x404 MovT
	var_70_object = var_0_object; // 0x405 MovT
	func_2243(); // 0x406 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0x408 PushV
	var_71_object = var_1_object; // 0x409 MovT
	var_72_object = var_0_object; // 0x40a MovT
	func_2271(var_72_object); // 0x40b NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x40d PushV
	var_76_object = var_1_object; // 0x40e MovT
	var_77_object = var_0_object; // 0x40f MovT
	func_2259(); // 0x410 NEW_2
	
Label_1042:
	var_78_int = 19738; // 0x412 PushI
	var_79_bool = var_26_bool == var_78_int; // 0x413 Eq
	if(var_79_bool == 0) goto Label_1098; // 0x414 JumpB
	var_80_string = ""; // 0x415 PushV
	var_80_string = "Fear"; // 0x416 MovS
	func_970(var_27_cvector, var_80_string); // 0x417 NEW_2
	var_97_int = 518646; // 0x419 PushI
	SetMessage(var_97_int); // 0x41a TObjFunc
	ClearReplies(); // 0x41c TObjFunc
	var_98_bool = 0; // 0x41e PushV
	var_98_bool = 0; // 0x41f MovB
	var_99_bool = 0; var_100_object = Obj(); // 0x420 PushV
	var_100_object = var_1_object; // 0x421 MovT
	func_2293(var_100_object); // 0x422 NEW_2
	if(var_99_bool == 0) goto Label_1067; // 0x424 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x425 PushV
	var_108_object = var_1_object; // 0x426 MovT
	func_2317(var_108_object); // 0x427 NEW_2
	if(var_107_bool == 0) goto Label_1067; // 0x429 JumpB
	var_98_bool = 1; // 0x42a MovB
	
Label_1067:
	if(var_98_bool == 0) goto Label_1073; // 0x42b JumpB
	var_113_int = 518647; // 0x42c PushI
	var_114_int = 19740; // 0x42d PushI
	var_115_int = 19739; // 0x42e PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x42f TObjFunc
	
Label_1073:
	var_116_bool = 0; // 0x431 PushV
	var_116_bool = 0; // 0x432 MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x433 PushV
	var_118_object = var_1_object; // 0x434 MovT
	func_2305(var_118_object); // 0x435 NEW_2
	if(var_117_bool == 0) goto Label_1086; // 0x437 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x438 PushV
	var_124_object = var_1_object; // 0x439 MovT
	func_2329(var_124_object); // 0x43a NEW_2
	if(var_123_bool == 0) goto Label_1086; // 0x43c JumpB
	var_116_bool = 1; // 0x43d MovB
	
Label_1086:
	if(var_116_bool == 0) goto Label_1092; // 0x43e JumpB
	var_129_int = 518651; // 0x43f PushI
	var_130_int = 19744; // 0x440 PushI
	var_131_int = 19743; // 0x441 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x442 TObjFunc
	
Label_1092:
	var_132_int = 518654; // 0x444 PushI
	var_133_int = -1; // 0x445 PushI
	var_134_int = 19746; // 0x446 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x447 TObjFunc
	return 0; // 0x449 Return
	
Label_1098:
	var_135_int = 19744; // 0x44a PushI
	var_136_bool = var_26_bool == var_135_int; // 0x44b Eq
	if(var_136_bool == 0) goto Label_1126; // 0x44c JumpB
	var_137_string = ""; // 0x44d PushV
	var_137_string = "Rage"; // 0x44e MovS
	func_970(var_27_cvector, var_137_string); // 0x44f NEW_2
	var_138_int = 518652; // 0x451 PushI
	SetMessage(var_138_int); // 0x452 TObjFunc
	ClearReplies(); // 0x454 TObjFunc
	var_139_int = 518720; // 0x456 PushI
	var_140_int = 19815; // 0x457 PushI
	var_141_int = 19811; // 0x458 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x459 TObjFunc
	var_142_int = 518722; // 0x45b PushI
	var_143_int = -1; // 0x45c PushI
	var_144_int = 19813; // 0x45d PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x45e TObjFunc
	var_145_int = 518732; // 0x460 PushI
	var_146_int = -1; // 0x461 PushI
	var_147_int = 19824; // 0x462 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x463 TObjFunc
	return 0; // 0x465 Return
	
Label_1126:
	var_148_int = 19815; // 0x466 PushI
	var_149_bool = var_26_bool == var_148_int; // 0x467 Eq
	if(var_149_bool == 0) goto Label_1149; // 0x468 JumpB
	var_150_string = ""; // 0x469 PushV
	var_150_string = "Rage"; // 0x46a MovS
	func_970(var_27_cvector, var_150_string); // 0x46b NEW_2
	var_151_int = 518724; // 0x46d PushI
	SetMessage(var_151_int); // 0x46e TObjFunc
	ClearReplies(); // 0x470 TObjFunc
	var_152_int = 518725; // 0x472 PushI
	var_153_int = 19817; // 0x473 PushI
	var_154_int = 19816; // 0x474 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x475 TObjFunc
	var_155_int = 518727; // 0x477 PushI
	var_156_int = 19819; // 0x478 PushI
	var_157_int = 19818; // 0x479 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x47a TObjFunc
	return 0; // 0x47c Return
	
Label_1149:
	var_158_int = 19819; // 0x47d PushI
	var_159_bool = var_26_bool == var_158_int; // 0x47e Eq
	if(var_159_bool == 0) goto Label_1167; // 0x47f JumpB
	var_160_string = ""; // 0x480 PushV
	var_160_string = "Adoration"; // 0x481 MovS
	func_970(var_27_cvector, var_160_string); // 0x482 NEW_2
	var_161_int = 518728; // 0x484 PushI
	SetMessage(var_161_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_162_int = 518729; // 0x489 PushI
	var_163_int = 19817; // 0x48a PushI
	var_164_int = 19820; // 0x48b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x48c TObjFunc
	return 0; // 0x48e Return
	
Label_1167:
	var_165_int = 19817; // 0x48f PushI
	var_166_bool = var_26_bool == var_165_int; // 0x490 Eq
	if(var_166_bool == 0) goto Label_1190; // 0x491 JumpB
	var_167_string = ""; // 0x492 PushV
	var_167_string = "Adoration"; // 0x493 MovS
	func_970(var_27_cvector, var_167_string); // 0x494 NEW_2
	var_168_int = 518726; // 0x496 PushI
	SetMessage(var_168_int); // 0x497 TObjFunc
	ClearReplies(); // 0x499 TObjFunc
	var_169_int = 518730; // 0x49b PushI
	var_170_int = -1; // 0x49c PushI
	var_171_int = 19822; // 0x49d PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x49e TObjFunc
	var_172_int = 518653; // 0x4a0 PushI
	var_173_int = -1; // 0x4a1 PushI
	var_174_int = 19745; // 0x4a2 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x4a3 TObjFunc
	return 0; // 0x4a5 Return
	
Label_1190:
	var_175_int = 19740; // 0x4a6 PushI
	var_176_bool = var_26_bool == var_175_int; // 0x4a7 Eq
	if(var_176_bool == 0) goto Label_1208; // 0x4a8 JumpB
	var_177_string = ""; // 0x4a9 PushV
	var_177_string = "Rage"; // 0x4aa MovS
	func_970(var_27_cvector, var_177_string); // 0x4ab NEW_2
	var_178_int = 518648; // 0x4ad PushI
	SetMessage(var_178_int); // 0x4ae TObjFunc
	ClearReplies(); // 0x4b0 TObjFunc
	var_179_int = 518649; // 0x4b2 PushI
	var_180_int = 19826; // 0x4b3 PushI
	var_181_int = 19741; // 0x4b4 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x4b5 TObjFunc
	return 0; // 0x4b7 Return
	
Label_1208:
	var_182_int = 19826; // 0x4b8 PushI
	var_183_bool = var_26_bool == var_182_int; // 0x4b9 Eq
	if(var_183_bool == 0) goto Label_1241; // 0x4ba JumpB
	var_184_string = ""; // 0x4bb PushV
	var_184_string = "Rage"; // 0x4bc MovS
	func_970(var_27_cvector, var_184_string); // 0x4bd NEW_2
	var_185_int = 518734; // 0x4bf PushI
	SetMessage(var_185_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_186_int = 518735; // 0x4c4 PushI
	var_187_int = 19830; // 0x4c5 PushI
	var_188_int = 19827; // 0x4c6 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x4c7 TObjFunc
	var_189_int = 518736; // 0x4c9 PushI
	var_190_int = 19829; // 0x4ca PushI
	var_191_int = 19828; // 0x4cb PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x4cc TObjFunc
	var_192_bool = 0; var_193_object = Obj(); // 0x4ce PushV
	var_193_object = var_1_object; // 0x4cf MovT
	func_2305(var_193_object); // 0x4d0 NEW_2
	if(var_192_bool == 0) goto Label_1240; // 0x4d2 JumpB
	var_194_int = 531552; // 0x4d3 PushI
	var_195_int = 19744; // 0x4d4 PushI
	var_196_int = 32915; // 0x4d5 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x4d6 TObjFunc
	
Label_1240:
	return 0; // 0x4d8 Return
	
Label_1241:
	var_197_int = 19829; // 0x4d9 PushI
	var_198_bool = var_26_bool == var_197_int; // 0x4da Eq
	if(var_198_bool == 0) goto Label_1264; // 0x4db JumpB
	var_199_string = ""; // 0x4dc PushV
	var_199_string = "Rage"; // 0x4dd MovS
	func_970(var_27_cvector, var_199_string); // 0x4de NEW_2
	var_200_int = 518737; // 0x4e0 PushI
	SetMessage(var_200_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_201_int = 528296; // 0x4e5 PushI
	var_202_int = 29663; // 0x4e6 PushI
	var_203_int = 29662; // 0x4e7 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x4e8 TObjFunc
	var_204_int = 518742; // 0x4ea PushI
	var_205_int = -1; // 0x4eb PushI
	var_206_int = 19834; // 0x4ec PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x4ed TObjFunc
	return 0; // 0x4ef Return
	
Label_1264:
	var_207_int = 29663; // 0x4f0 PushI
	var_208_bool = var_26_bool == var_207_int; // 0x4f1 Eq
	if(var_208_bool == 0) goto Label_1282; // 0x4f2 JumpB
	var_209_string = ""; // 0x4f3 PushV
	var_209_string = "Dream"; // 0x4f4 MovS
	func_970(var_27_cvector, var_209_string); // 0x4f5 NEW_2
	var_210_int = 528297; // 0x4f7 PushI
	SetMessage(var_210_int); // 0x4f8 TObjFunc
	ClearReplies(); // 0x4fa TObjFunc
	var_211_int = 518741; // 0x4fc PushI
	var_212_int = 19835; // 0x4fd PushI
	var_213_int = 19833; // 0x4fe PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_214_int = 19835; // 0x502 PushI
	var_215_bool = var_26_bool == var_214_int; // 0x503 Eq
	if(var_215_bool == 0) goto Label_1300; // 0x504 JumpB
	var_216_string = ""; // 0x505 PushV
	var_216_string = "Dream"; // 0x506 MovS
	func_970(var_27_cvector, var_216_string); // 0x507 NEW_2
	var_217_int = 518743; // 0x509 PushI
	SetMessage(var_217_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_218_int = 518744; // 0x50e PushI
	var_219_int = 19837; // 0x50f PushI
	var_220_int = 19836; // 0x510 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_221_int = 19837; // 0x514 PushI
	var_222_bool = var_26_bool == var_221_int; // 0x515 Eq
	if(var_222_bool == 0) goto Label_1323; // 0x516 JumpB
	var_223_string = ""; // 0x517 PushV
	var_223_string = "Dream"; // 0x518 MovS
	func_970(var_27_cvector, var_223_string); // 0x519 NEW_2
	var_224_int = 518745; // 0x51b PushI
	SetMessage(var_224_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_225_int = 518746; // 0x520 PushI
	var_226_int = -1; // 0x521 PushI
	var_227_int = 19838; // 0x522 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x523 TObjFunc
	var_228_int = 518747; // 0x525 PushI
	var_229_int = -1; // 0x526 PushI
	var_230_int = 19839; // 0x527 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x528 TObjFunc
	return 0; // 0x52a Return
	
Label_1323:
	var_231_int = 19830; // 0x52b PushI
	var_232_bool = var_26_bool == var_231_int; // 0x52c Eq
	if(var_232_bool == 0) goto Label_1346; // 0x52d JumpB
	var_233_string = ""; // 0x52e PushV
	var_233_string = "Adoration"; // 0x52f MovS
	func_970(var_27_cvector, var_233_string); // 0x530 NEW_2
	var_234_int = 518738; // 0x532 PushI
	SetMessage(var_234_int); // 0x533 TObjFunc
	ClearReplies(); // 0x535 TObjFunc
	var_235_int = 518739; // 0x537 PushI
	var_236_int = -1; // 0x538 PushI
	var_237_int = 19831; // 0x539 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x53a TObjFunc
	var_238_int = 518740; // 0x53c PushI
	var_239_int = -1; // 0x53d PushI
	var_240_int = 19832; // 0x53e PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x53f TObjFunc
	return 0; // 0x541 Return
	
Label_1346:
	var_3_string = 1; // 0x542 TMovB
	var_241_bool = 0; // 0x543 PushV
	func_2235(var_241_bool); // 0x544 NEW_2
	if(var_241_bool == 0) goto Label_1354; // 0x546 JumpB
	lshStopAnimation(); // 0x547 Func
	goto Label_1356; // 0x549 Jump
	
Label_1356:
	return 0; // 0x54c Return
	
Label_1354:
	StopAnimation(); // 0x54a Func
	
Label_1358:
	return 0; // 0x54e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x5f1 PushI
	if(var_28_int == 0) goto Label_1561; // 0x5f2 JumpB
	func_2129(); // 0x5f4 NEW_2
	var_30_int = 42560; // 0x5f6 PushI
	var_31_bool = var_26_int == var_30_int; // 0x5f7 Eq
	if(var_31_bool == 0) goto Label_1549; // 0x5f8 JumpB
	var_32_string = ""; // 0x5f9 PushV
	var_32_string = "Neutral"; // 0x5fa MovS
	func_1498(var_27_cvector, var_32_string); // 0x5fb NEW_2
	var_49_int = 540551; // 0x5fd PushI
	SetMessage(var_49_int); // 0x5fe TObjFunc
	ClearReplies(); // 0x600 TObjFunc
	var_50_int = 540552; // 0x602 PushI
	var_51_int = -1; // 0x603 PushI
	var_52_int = 42561; // 0x604 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x605 TObjFunc
	var_53_int = 540795; // 0x607 PushI
	var_54_int = -1; // 0x608 PushI
	var_55_int = 42844; // 0x609 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x60a TObjFunc
	return 0; // 0x60c Return
	
Label_1549:
	var_3_string = 1; // 0x60d TMovB
	var_56_bool = 0; // 0x60e PushV
	func_2235(var_56_bool); // 0x60f NEW_2
	if(var_56_bool == 0) goto Label_1557; // 0x611 JumpB
	lshStopAnimation(); // 0x612 Func
	goto Label_1559; // 0x614 Jump
	
Label_1559:
	return 0; // 0x617 Return
	
Label_1557:
	StopAnimation(); // 0x615 Func
	
Label_1561:
	return 0; // 0x619 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x667 PushI
	var_28_bool = var_26_int == var_27_int; // 0x668 Eq
	if(var_28_bool == 0) goto Label_1675; // 0x669 JumpB
	func_1634(); // 0x66b NEW_2
	var_30_bool = 0; // 0x66d PushV
	var_30_bool = 0; // 0x66e MovB
	var_31_bool = 0; // 0x66f PushV
	func_1855(var_31_bool); // 0x670 NEW_2
	if(var_31_bool == 0) goto Label_1656; // 0x672 JumpB
	var_34_bool = 0; // 0x673 PushV
	func_1603(var_34_bool); // 0x674 NEW_2
	if(var_34_bool == 0) goto Label_1656; // 0x676 JumpB
	var_30_bool = 1; // 0x677 MovB
	
Label_1656:
	if(var_30_bool == 0) goto Label_1669; // 0x678 JumpB
	var_51_bool = 0; // 0x679 PushV
	func_1583(var_51_bool); // 0x67a NEW_2
	if(var_51_bool == 0) goto Label_1668; // 0x67c JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x67d PushV
	var_72_object = Obj(); // 0x67e PushV
	func_2136(var_72_object); // 0x67f NEW_2
	var_71_object = var_72_object; // 0x680 Mov
	func_2003(var_71_object); // 0x682 NEW_2
	
Label_1668:
	goto Label_1675; // 0x684 Jump
	
Label_1675:
	return 0; // 0x68b Return
	
Label_1669:
	func_1598(var_26_int); // 0x686 NEW_2
	func_1625(); // 0x689 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1816(); // 0x68d NEW_2
	func_1634(); // 0x690 NEW_2
	lshStopSpeech(); // 0x692 Func
	lshStopAnimation(); // 0x694 Func
	StopAsync(); // 0x696 Func
	Hold(); // 0x698 Func
	return 0; // 0x69a Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x69b Func
	func_1634(); // 0x69e NEW_2
	var_27_string = ""; // 0x6a0 PushV
	var_27_string = "Neutral"; // 0x6a1 MovS
	func_2083(var_27_string); // 0x6a2 NEW_2
	func_1625(); // 0x6a5 NEW_2
	return 0; // 0x6a7 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6a9 Push
	if(var_27_bool == 0) goto Label_1711; // 0x6aa JumpB
	func_1625(); // 0x6ac NEW_2
	goto Label_1715; // 0x6ae Jump
	
Label_1715:
	return 0; // 0x6b3 Return
	
Label_1711:
	var_33_string = ""; // 0x6af PushV
	var_33_string = "Neutral"; // 0x6b0 MovS
	func_2083(var_33_string); // 0x6b1 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x6b4 PushV
	IsOverrideActive(var_28_bool); // 0x6b5 Func
	var_29_bool = var_28_bool == 0; // 0x6b7 Not
	if(var_29_bool == 0) goto Label_1744; // 0x6b8 JumpB
	EventDisable(0); // 0x6b9 EventDisable
	func_1816(); // 0x6bb NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x6bd PushV
	var_31_object = var_26_object; // 0x6be Mov
	func_1846(var_31_object); // 0x6bf NEW_2
	EventEnable(0); // 0x6c1 EventEnable
	var_44_object = Obj(); // 0x6c2 PushV
	var_44_object = var_26_object; // 0x6c3 Mov
	func_2358(var_44_object); // 0x6c4 NEW_2
	var_546_string = ""; // 0x6c6 PushV
	var_546_string = "Neutral"; // 0x6c7 MovS
	func_2083(var_546_string); // 0x6c8 NEW_2
	func_1634(); // 0x6cb NEW_2
	func_1625(); // 0x6ce NEW_2
	
Label_1744:
	return 2; // 0x6d0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1]; // 0x61a PushGE
	var_26_bool = 0; // 0x61b MovB
	GlobalVars[1] = var_26_bool; // 0x61c PopGE
	func_1569(var_25_cvector); // 0x61e NEW_2
	return 0; // 0x620 Return
}


func_0(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x0 PushV
	var_0_object = var_364_object; // 0x1 TMov
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0; // 0x2 PushV
	var_375_object = var_364_object; // 0x3 Mov
	var_376_float = 70.0; // 0x4 MovF
	func_1860(var_375_object, var_376_float); // 0x5 NEW_2
	var_377_bool = var_374_bool == 0; // 0x7 Not
	if(var_377_bool == 0) goto Label_11; // 0x8 JumpB
	var_363_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_370_object); // 0xb Func
	var_378_int = 0; // 0xd PushV
	func_2229(var_378_int); // 0xe NEW_2
	SetNPCName(var_378_int); // 0x10 ObjFunc
	var_379_int = 0; // 0x12 PushV
	func_2227(var_379_int); // 0x13 NEW_2
	SetNPCDescription(var_379_int); // 0x15 ObjFunc
	var_380_string = ""; // 0x17 PushV
	func_2231(var_380_string); // 0x18 NEW_2
	SetPhoto(var_380_string); // 0x1a ObjFunc
	var_381_string = ""; // 0x1c PushV
	func_2233(var_381_string); // 0x1d NEW_2
	SetPhoto2(var_381_string); // 0x1f ObjFunc
	var_382_int = 0; // 0x21 PushV
	func_2341(var_382_int); // 0x22 NEW_2
	SetPlayerName(var_382_int); // 0x24 ObjFunc
	var_372_int = -1; // 0x26 MovI
	IsOverrideActive(var_371_bool); // 0x27 Func
	var_383_bool = var_371_bool; // 0x29 Push
	if(var_383_bool == 0) goto Label_45; // 0x2a JumpB
	var_363_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_370_object); // 0x2d Func
	var_384_bool = 0; var_385_object = Obj(); // 0x2f PushV
	var_386_object = Obj(); // 0x30 PushV
	func_2136(var_386_object); // 0x31 NEW_2
	var_385_object = var_386_object; // 0x32 Mov
	func_1945(var_384_bool, var_385_object); // 0x34 NEW_2
	var_387_object = Obj(); var_388_object = Obj(); // 0x36 PushV
	var_387_object = var_364_object; // 0x37 Mov
	var_388_object = var_370_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_373_bool); // 0x3d ObjFunc
	
Label_63:
	var_423_bool = var_373_bool == 0; // 0x3f Not
	if(var_423_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_373_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_424_object = Obj(); // 0x46 PushV
	var_424_object = var_364_object; // 0x47 Mov
	func_1928(); // 0x48 NEW_2
	StopDialog(var_370_object); // 0x4a Func
	GetReturnValue(var_372_int); // 0x4c ObjFunc
	var_363_int = var_372_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2305(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0x902 PushV
	var_336_string = "b5q01VeraDead"; // 0x903 MovS
	func_2152(var_335_int, var_336_string); // 0x904 NEW_2
	var_337_int = 0; // 0x906 PushI
	var_338_bool = var_335_int != var_337_int; // 0x907 Neq
	if(var_338_bool == 0) goto Label_2315; // 0x908 JumpB
	var_333_bool = 1; // 0x909 MovB
	return 0; // 0x90a Return
	
Label_2315:
	var_333_bool = 0; // 0x90b MovB
	return 0; // 0x90c Return
}


func_2317(var_323_bool)
{
	var_325_int = 0; var_326_string = ""; // 0x90e PushV
	var_326_string = "b5q01_1"; // 0x90f MovS
	func_2152(var_325_int, var_326_string); // 0x910 NEW_2
	var_327_int = 0; // 0x912 PushI
	var_328_bool = var_325_int == var_327_int; // 0x913 Eq
	if(var_328_bool == 0) goto Label_2327; // 0x914 JumpB
	var_323_bool = 1; // 0x915 MovB
	return 0; // 0x916 Return
	
Label_2327:
	var_323_bool = 0; // 0x917 MovB
	return 0; // 0x918 Return
}


func_1814(var_65_bool)
{
	var_65_bool = 1; // 0x716 MovB
	return 0; // 0x717 Return
}


func_1816()
{
	StopAnimation(); // 0x718 Func
	StopGroup0(); // 0x71a Func
	return 0; // 0x71c Return
}


func_2329(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x91a PushV
	var_342_string = "b5q01_1"; // 0x91b MovS
	func_2152(var_341_int, var_342_string); // 0x91c NEW_2
	var_343_int = 1; // 0x91e PushI
	var_344_bool = var_341_int == var_343_int; // 0x91f Eq
	if(var_344_bool == 0) goto Label_2339; // 0x920 JumpB
	var_339_bool = 1; // 0x921 MovB
	return 0; // 0x922 Return
	
Label_2339:
	var_339_bool = 0; // 0x923 MovB
	return 0; // 0x924 Return
}


func_1821(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x71d PushV
	GetPosition(var_46_cvector); // 0x71e Func
	GetPosition(var_47_cvector); // 0x720 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x722 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x723 Or2
	return 6; // 0x724 Return
}


func_798(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0; // 0x31e PushV
	var_0_object = var_275_object; // 0x31f TMov
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0; // 0x320 PushV
	var_286_object = var_275_object; // 0x321 Mov
	var_287_float = 70.0; // 0x322 MovF
	func_1860(var_286_object, var_287_float); // 0x323 NEW_2
	var_288_bool = var_285_bool == 0; // 0x325 Not
	if(var_288_bool == 0) goto Label_809; // 0x326 JumpB
	var_274_int = -2; // 0x327 MovI
	return 8; // 0x328 Return
	
Label_809:
	CreateDialog(var_281_object); // 0x329 Func
	var_289_int = 0; // 0x32b PushV
	func_2229(var_289_int); // 0x32c NEW_2
	SetNPCName(var_289_int); // 0x32e ObjFunc
	var_290_int = 0; // 0x330 PushV
	func_2227(var_290_int); // 0x331 NEW_2
	SetNPCDescription(var_290_int); // 0x333 ObjFunc
	var_291_string = ""; // 0x335 PushV
	func_2231(var_291_string); // 0x336 NEW_2
	SetPhoto(var_291_string); // 0x338 ObjFunc
	var_292_string = ""; // 0x33a PushV
	func_2233(var_292_string); // 0x33b NEW_2
	SetPhoto2(var_292_string); // 0x33d ObjFunc
	var_293_int = 0; // 0x33f PushV
	func_2341(var_293_int); // 0x340 NEW_2
	SetPlayerName(var_293_int); // 0x342 ObjFunc
	var_283_int = -1; // 0x344 MovI
	IsOverrideActive(var_282_bool); // 0x345 Func
	var_294_bool = var_282_bool; // 0x347 Push
	if(var_294_bool == 0) goto Label_843; // 0x348 JumpB
	var_274_int = -2; // 0x349 MovI
	return 8; // 0x34a Return
	
Label_843:
	DoDialog(var_281_object); // 0x34b Func
	var_295_bool = 0; var_296_object = Obj(); // 0x34d PushV
	var_297_object = Obj(); // 0x34e PushV
	func_2136(var_297_object); // 0x34f NEW_2
	var_296_object = var_297_object; // 0x350 Mov
	func_1945(var_295_bool, var_296_object); // 0x352 NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0x354 PushV
	var_298_object = var_275_object; // 0x355 Mov
	var_299_object = var_281_object; // 0x356 Mov
	TaskCall(7); // 0x357 TaskCall
	func_879(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object); // 0x358 NEW_2
	TaskReturn(); // 0x359 TaskReturn
	IsDialogEnd(var_284_bool); // 0x35b ObjFunc
	
Label_861:
	var_359_bool = var_284_bool == 0; // 0x35d Not
	if(var_359_bool == 0) goto Label_868; // 0x35e JumpB
	sync(); // 0x35f Func
	IsDialogEnd(var_284_bool); // 0x361 ObjFunc
	goto Label_861; // 0x363 Jump
	
Label_868:
	var_360_object = Obj(); // 0x364 PushV
	var_360_object = var_275_object; // 0x365 Mov
	func_1928(); // 0x366 NEW_2
	StopDialog(var_281_object); // 0x368 Func
	GetReturnValue(var_283_int); // 0x36a ObjFunc
	var_274_int = var_283_int; // 0x36c Mov
	return 8; // 0x36d Return
}


func_1569(var_0_object)
{
	var_27_bool = 0; // 0x621 PushV
	func_1855(var_27_bool); // 0x622 NEW_2
	var_30_bool = var_27_bool == 0; // 0x624 Not
	if(var_30_bool == 0) goto Label_1576; // 0x625 JumpB
	Hold(); // 0x626 Func
	
Label_1576:
	GetDirection(var_0_object); // 0x628 Func
	
Label_1578:
	func_1745(); // 0x62b NEW_2
	goto Label_1578; // 0x62d Jump
}


func_2083(var_246_string)
{
	var_247_bool = 0; var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_float = 0; var_252_float = 0; // 0x823 PushV
	lshHasAnimation(var_250_bool, var_246_string); // 0x824 Func
	var_253_bool = var_250_bool; // 0x826 Push
	if(var_253_bool == 0) goto Label_2094; // 0x827 JumpB
	lshGetAnimTimes(var_246_string, var_251_float, var_252_float); // 0x828 Func
	var_254_bool = 0; // 0x82a PushB
	lshPlayAnimation(var_251_float, var_252_float, var_254_bool); // 0x82b Func
	goto Label_2098; // 0x82d Jump
	
Label_2098:
	return 6; // 0x832 Return
	
Label_2094:
	var_255_string = "Can't find lsh animation : "; // 0x82e PushS
	var_256_int = var_255_string + var_246_string; // 0x82f Add
	Trace(var_256_int); // 0x830 Func
}


func_2341(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x925 PushV
	var_112_string = "branch"; // 0x926 PushS
	GetVariable(var_112_string, var_111_int); // 0x927 Func
	var_113_int = 0; // 0x929 PushI
	var_114_bool = var_111_int == var_113_int; // 0x92a Eq
	if(var_114_bool == 0) goto Label_2351; // 0x92b JumpB
	var_109_int = 1; // 0x92c MovI
	return 2; // 0x92d Return
	
Label_2351:
	var_115_int = 1; // 0x92f PushI
	var_116_bool = var_111_int == var_115_int; // 0x930 Eq
	if(var_116_bool == 0) goto Label_2356; // 0x931 JumpB
	var_109_int = 2; // 0x932 MovI
	return 2; // 0x933 Return
	
Label_2356:
	var_109_int = 3; // 0x934 MovI
	return 2; // 0x935 Return
}


func_1829(var_50_string, var_51_int)
{
	var_52_int = 0; var_53_int = 0; // 0x725 PushV
	GetProperty(var_50_string, var_53_int); // 0x726 ObjFunc
	var_54_int = var_53_int + var_51_int; // 0x728 Add
	SetProperty(var_50_string, var_54_int); // 0x729 ObjFunc
	return 2; // 0x72b Return
}


func_1836(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x72c PushV
	GetPosition(var_39_cvector); // 0x72d Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x72f Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x730 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x731 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x732 Func
	var_34_bool = var_41_bool; // 0x734 Mov
	return 6; // 0x735 Return
}


func_1583(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x62f PushV
	var_54_string = "player"; // 0x630 PushS
	FindActor(var_53_object, var_54_string); // 0x631 Func
	var_55_bool = var_53_object == 0; // 0x633 Not
	if(var_55_bool == 0) goto Label_1591; // 0x634 JumpB
	var_51_bool = 0; // 0x635 MovB
	return 2; // 0x636 Return
	
Label_1591:
	var_56_bool = 0; var_57_object = Obj(); // 0x637 PushV
	var_57_object = var_53_object; // 0x638 Mov
	func_1846(var_57_object); // 0x639 NEW_2
	var_51_bool = var_56_bool; // 0x63a Mov
	return 2; // 0x63c Return
}


func_2099(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x833 PushV
	lshHasAnimation(var_231_bool, var_224_string); // 0x834 Func
	var_234_bool = var_231_bool; // 0x836 Push
	if(var_234_bool == 0) goto Label_2109; // 0x837 JumpB
	lshGetAnimTimes(var_224_string, var_232_float, var_233_float); // 0x838 Func
	lshPlayAnimation(var_232_float, var_233_float, var_225_bool); // 0x83a Func
	goto Label_2113; // 0x83c Jump
	
Label_2113:
	return 6; // 0x841 Return
	
Label_2109:
	var_235_string = "Can't find lsh animation : "; // 0x83d PushS
	var_236_int = var_235_string + var_224_string; // 0x83e Add
	Trace(var_236_int); // 0x83f Func
}


func_1846(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x736 PushV
	GetPosition(var_33_cvector); // 0x737 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x739 PushV
	var_35_cvector = var_33_cvector; // 0x73a Mov
	func_1836(var_34_bool, var_35_cvector); // 0x73b NEW_2
	var_30_bool = var_34_bool; // 0x73c Mov
	return 2; // 0x73e Return
}


func_2358(var_44_object)
{
	var_45_bool = GlobalVars[1]; // 0x937 PushGE
	var_46_bool = var_45_bool == 0; // 0x938 Not
	if(var_46_bool == 0) goto Label_2371; // 0x939 JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x93a PushV
	var_48_object = var_44_object; // 0x93b Mov
	TaskCall(4); // 0x93c TaskCall
	func_572(var_49_object, var_47_int, var_48_object); // 0x93d NEW_2
	TaskReturn(); // 0x93e TaskReturn
	var_270_bool = GlobalVars[1]; // 0x940 PushGE
	var_270_bool = 1; // 0x941 MovB
	GlobalVars[1] = var_270_bool; // 0x942 PopGE
	
Label_2371:
	var_271_bool = 0; var_272_int = 0; // 0x943 PushV
	var_272_int = 5; // 0x944 MovI
	func_2197(var_271_bool, var_272_int); // 0x945 NEW_2
	if(var_271_bool == 0) goto Label_2383; // 0x947 JumpB
	var_274_int = 0; var_275_object = Obj(); // 0x948 PushV
	var_275_object = var_44_object; // 0x949 Mov
	TaskCall(6); // 0x94a TaskCall
	func_798(var_276_object, var_274_int, var_275_object); // 0x94b NEW_2
	TaskReturn(); // 0x94c TaskReturn
	return 0; // 0x94e Return
	
Label_2383:
	var_361_bool = 0; var_362_int = 0; // 0x94f PushV
	var_362_int = 6; // 0x950 MovI
	func_2197(var_361_bool, var_362_int); // 0x951 NEW_2
	if(var_361_bool == 0) goto Label_2395; // 0x953 JumpB
	var_363_int = 0; var_364_object = Obj(); // 0x954 PushV
	var_364_object = var_44_object; // 0x955 Mov
	TaskCall(0); // 0x956 TaskCall
	func_0(var_365_object, var_363_int, var_364_object); // 0x957 NEW_2
	TaskReturn(); // 0x958 TaskReturn
	return 0; // 0x95a Return
	
Label_2395:
	var_425_bool = 0; // 0x95b PushV
	var_425_bool = 0; // 0x95c MovB
	var_426_bool = 0; var_427_int = 0; // 0x95d PushV
	var_427_int = 12; // 0x95e MovI
	func_2197(var_426_bool, var_427_int); // 0x95f NEW_2
	if(var_426_bool == 0) goto Label_2406; // 0x961 JumpB
	var_428_bool = GlobalVars[2]; // 0x962 PushGE
	var_429_bool = var_428_bool == 0; // 0x963 Not
	if(var_429_bool == 0) goto Label_2406; // 0x964 JumpB
	var_425_bool = 1; // 0x965 MovB
	
Label_2406:
	if(var_425_bool == 0) goto Label_2417; // 0x966 JumpB
	var_430_int = 0; var_431_object = Obj(); // 0x967 PushV
	var_431_object = var_44_object; // 0x968 Mov
	TaskCall(2); // 0x969 TaskCall
	func_313(var_432_object, var_430_int, var_431_object); // 0x96a NEW_2
	TaskReturn(); // 0x96b TaskReturn
	var_489_bool = GlobalVars[2]; // 0x96d PushGE
	var_489_bool = 1; // 0x96e MovB
	GlobalVars[2] = var_489_bool; // 0x96f PopGE
	return 0; // 0x970 Return
	
Label_2417:
	var_490_int = 0; var_491_object = Obj(); // 0x971 PushV
	var_491_object = var_44_object; // 0x972 Mov
	TaskCall(8); // 0x973 TaskCall
	func_1359(var_492_object, var_490_int, var_491_object); // 0x974 NEW_2
	TaskReturn(); // 0x975 TaskReturn
	return 0; // 0x977 Return
}


func_313(var_0_object, var_430_int, var_431_object)
{
	var_433_object = Obj(); var_434_bool = 0; var_435_int = 0; var_436_bool = 0; var_437_object = Obj(); var_438_bool = 0; var_439_int = 0; var_440_bool = 0; // 0x139 PushV
	var_0_object = var_431_object; // 0x13a TMov
	var_441_bool = 0; var_442_object = Obj(); var_443_float = 0; // 0x13b PushV
	var_442_object = var_431_object; // 0x13c Mov
	var_443_float = 70.0; // 0x13d MovF
	func_1860(var_442_object, var_443_float); // 0x13e NEW_2
	var_444_bool = var_441_bool == 0; // 0x140 Not
	if(var_444_bool == 0) goto Label_324; // 0x141 JumpB
	var_430_int = -2; // 0x142 MovI
	return 8; // 0x143 Return
	
Label_324:
	CreateDialog(var_437_object); // 0x144 Func
	var_445_int = 0; // 0x146 PushV
	func_2229(var_445_int); // 0x147 NEW_2
	SetNPCName(var_445_int); // 0x149 ObjFunc
	var_446_int = 0; // 0x14b PushV
	func_2227(var_446_int); // 0x14c NEW_2
	SetNPCDescription(var_446_int); // 0x14e ObjFunc
	var_447_string = ""; // 0x150 PushV
	func_2231(var_447_string); // 0x151 NEW_2
	SetPhoto(var_447_string); // 0x153 ObjFunc
	var_448_string = ""; // 0x155 PushV
	func_2233(var_448_string); // 0x156 NEW_2
	SetPhoto2(var_448_string); // 0x158 ObjFunc
	var_449_int = 0; // 0x15a PushV
	func_2341(var_449_int); // 0x15b NEW_2
	SetPlayerName(var_449_int); // 0x15d ObjFunc
	var_439_int = -1; // 0x15f MovI
	IsOverrideActive(var_438_bool); // 0x160 Func
	var_450_bool = var_438_bool; // 0x162 Push
	if(var_450_bool == 0) goto Label_358; // 0x163 JumpB
	var_430_int = -2; // 0x164 MovI
	return 8; // 0x165 Return
	
Label_358:
	DoDialog(var_437_object); // 0x166 Func
	var_451_bool = 0; var_452_object = Obj(); // 0x168 PushV
	var_453_object = Obj(); // 0x169 PushV
	func_2136(var_453_object); // 0x16a NEW_2
	var_452_object = var_453_object; // 0x16b Mov
	func_1945(var_451_bool, var_452_object); // 0x16d NEW_2
	var_454_object = Obj(); var_455_object = Obj(); // 0x16f PushV
	var_454_object = var_431_object; // 0x170 Mov
	var_455_object = var_437_object; // 0x171 Mov
	TaskCall(3); // 0x172 TaskCall
	func_394(var_456_object, var_457_object, var_458_string, var_459_bool, var_454_object, var_455_object); // 0x173 NEW_2
	TaskReturn(); // 0x174 TaskReturn
	IsDialogEnd(var_440_bool); // 0x176 ObjFunc
	
Label_376:
	var_487_bool = var_440_bool == 0; // 0x178 Not
	if(var_487_bool == 0) goto Label_383; // 0x179 JumpB
	sync(); // 0x17a Func
	IsDialogEnd(var_440_bool); // 0x17c ObjFunc
	goto Label_376; // 0x17e Jump
	
Label_383:
	var_488_object = Obj(); // 0x17f PushV
	var_488_object = var_431_object; // 0x180 Mov
	func_1928(); // 0x181 NEW_2
	StopDialog(var_437_object); // 0x183 Func
	GetReturnValue(var_439_int); // 0x185 ObjFunc
	var_430_int = var_439_int; // 0x187 Mov
	return 8; // 0x188 Return
}


func_572(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x23c PushV
	var_0_object = var_48_object; // 0x23d TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x23e PushV
	var_59_object = var_48_object; // 0x23f Mov
	var_60_float = 70.0; // 0x240 MovF
	func_1860(var_59_object, var_60_float); // 0x241 NEW_2
	var_104_bool = var_58_bool == 0; // 0x243 Not
	if(var_104_bool == 0) goto Label_583; // 0x244 JumpB
	var_47_int = -2; // 0x245 MovI
	return 8; // 0x246 Return
	
Label_583:
	CreateDialog(var_54_object); // 0x247 Func
	var_105_int = 0; // 0x249 PushV
	func_2229(var_105_int); // 0x24a NEW_2
	SetNPCName(var_105_int); // 0x24c ObjFunc
	var_106_int = 0; // 0x24e PushV
	func_2227(var_106_int); // 0x24f NEW_2
	SetNPCDescription(var_106_int); // 0x251 ObjFunc
	var_107_string = ""; // 0x253 PushV
	func_2231(var_107_string); // 0x254 NEW_2
	SetPhoto(var_107_string); // 0x256 ObjFunc
	var_108_string = ""; // 0x258 PushV
	func_2233(var_108_string); // 0x259 NEW_2
	SetPhoto2(var_108_string); // 0x25b ObjFunc
	var_109_int = 0; // 0x25d PushV
	func_2341(var_109_int); // 0x25e NEW_2
	SetPlayerName(var_109_int); // 0x260 ObjFunc
	var_56_int = -1; // 0x262 MovI
	IsOverrideActive(var_55_bool); // 0x263 Func
	var_117_bool = var_55_bool; // 0x265 Push
	if(var_117_bool == 0) goto Label_617; // 0x266 JumpB
	var_47_int = -2; // 0x267 MovI
	return 8; // 0x268 Return
	
Label_617:
	DoDialog(var_54_object); // 0x269 Func
	var_118_bool = 0; var_119_object = Obj(); // 0x26b PushV
	var_120_object = Obj(); // 0x26c PushV
	func_2136(var_120_object); // 0x26d NEW_2
	var_119_object = var_120_object; // 0x26e Mov
	func_1945(var_118_bool, var_119_object); // 0x270 NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x272 PushV
	var_213_object = var_48_object; // 0x273 Mov
	var_214_object = var_54_object; // 0x274 Mov
	TaskCall(5); // 0x275 TaskCall
	func_653(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object); // 0x276 NEW_2
	TaskReturn(); // 0x277 TaskReturn
	IsDialogEnd(var_57_bool); // 0x279 ObjFunc
	
Label_635:
	var_262_bool = var_57_bool == 0; // 0x27b Not
	if(var_262_bool == 0) goto Label_642; // 0x27c JumpB
	sync(); // 0x27d Func
	IsDialogEnd(var_57_bool); // 0x27f ObjFunc
	goto Label_635; // 0x281 Jump
	
Label_642:
	var_263_object = Obj(); // 0x282 PushV
	var_263_object = var_48_object; // 0x283 Mov
	func_1928(); // 0x284 NEW_2
	StopDialog(var_54_object); // 0x286 Func
	GetReturnValue(var_56_int); // 0x288 ObjFunc
	var_47_int = var_56_int; // 0x28a Mov
	return 8; // 0x28b Return
}


func_1598(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x63e PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x63f PushE
	RotateAsync(var_103_float, var_104_float); // 0x640 Func
	return 0; // 0x642 Return
}


func_1855(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x73f PushV
	IsLoaded(var_29_bool); // 0x740 Func
	var_27_bool = var_29_bool; // 0x742 Mov
	return 2; // 0x743 Return
}


func_2114(var_152_bool, var_153_string)
{
	var_154_bool = 0; var_155_bool = 0; // 0x842 PushV
	var_156_bool = 0; // 0x843 PushV
	func_2235(var_156_bool); // 0x844 NEW_2
	if(var_156_bool == 0) goto Label_2127; // 0x846 JumpB
	lshHasSpeech(var_155_bool, var_153_string); // 0x847 Func
	var_157_bool = var_155_bool; // 0x849 Push
	if(var_157_bool == 0) goto Label_2127; // 0x84a JumpB
	lshPlaySpeech(var_153_string); // 0x84b Func
	var_152_bool = 1; // 0x84d MovB
	return 2; // 0x84e Return
	
Label_2127:
	var_152_bool = 0; // 0x84f MovB
	return 2; // 0x850 Return
}


func_1603(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x643 PushV
	var_39_string = "player"; // 0x644 PushS
	FindActor(var_37_object, var_39_string); // 0x645 Func
	var_40_bool = var_37_object == 0; // 0x647 Not
	if(var_40_bool == 0) goto Label_1611; // 0x648 JumpB
	var_34_bool = 0; // 0x649 MovB
	return 4; // 0x64a Return
	
Label_1611:
	var_41_float = 0; var_42_object = Obj(); // 0x64b PushV
	var_42_object = var_37_object; // 0x64c Mov
	func_1821(var_42_object); // 0x64d NEW_2
	var_49_float = 90000.0; // 0x64f PushF
	var_50_bool = var_41_float > var_49_float; // 0x650 GT
	if(var_50_bool == 0) goto Label_1620; // 0x651 JumpB
	var_34_bool = 0; // 0x652 MovB
	return 4; // 0x653 Return
	
Label_1620:
	CanSee(var_38_bool, var_37_object); // 0x654 Func
	var_34_bool = var_38_bool; // 0x656 Mov
	return 4; // 0x657 Return
}


func_1860(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x744 PushV
	GetPosition(var_71_cvector); // 0x745 ObjFunc
	GetEyesHeight(var_70_float); // 0x747 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x749 PushE
	var_79_float = var_79_float + var_70_float; // 0x74a Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x74b PopE
	GetPosition(var_72_cvector); // 0x74c Func
	GetEyesHeight(var_70_float); // 0x74e Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x750 PushE
	var_80_float = var_80_float + var_70_float; // 0x751 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x752 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x753 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x754 PushE
	var_81_float = 0; // 0x755 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x756 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x757 Or
	var_83_float = sqrt(var_82_int); // 0x758 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x759 Div2
	var_74_cvector = -var_73_cvector; // 0x75a Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x75b Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x75c PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x75d PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x75e Xor2
	func_2142(var_85_cvector, var_86_cvector); // 0x75f NEW_2
	var_93_int = 25; // 0x761 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x762 Mult
	var_95_int = var_84_float + var_94_float; // 0x763 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x764 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x765 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x766 Add2
	IsOverrideActive(var_77_bool); // 0x767 Func
	var_97_bool = var_77_bool; // 0x769 Push
	if(var_97_bool == 0) goto Label_1901; // 0x76a JumpB
	var_58_bool = 0; // 0x76b MovB
	return 18; // 0x76c Return
	
Label_1901:
	StopWorld(); // 0x76d Func
	CameraTransit(var_76_cvector, var_74_cvector); // 0x76f Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0x771 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0x772 PushE
	Rotate(var_98_float, var_99_float); // 0x773 Func
	var_100_bool = 0; // 0x775 PushV
	func_2235(var_100_bool); // 0x776 NEW_2
	if(var_100_bool == 0) goto Label_1914; // 0x778 JumpB
	goto Label_1922; // 0x779 Jump
	
Label_1922:
	CameraWaitForPlayFinish(); // 0x782 Func
	ResumeWorld(); // 0x784 Func
	var_58_bool = 1; // 0x786 MovB
	return 18; // 0x787 Return
	
Label_1914:
	var_101_string = "head"; // 0x77a PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0x77b Func
	var_102_bool = var_78_bool; // 0x77d Push
	if(var_102_bool == 0) goto Label_1922; // 0x77e JumpB
	var_103_string = "head"; // 0x77f PushS
	LookAsyncCamera(var_103_string); // 0x780 Func
}


func_1359(var_0_object, var_490_int, var_491_object)
{
	var_493_object = Obj(); var_494_bool = 0; var_495_int = 0; var_496_bool = 0; var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0; // 0x54f PushV
	var_0_object = var_491_object; // 0x550 TMov
	var_501_bool = 0; var_502_object = Obj(); var_503_float = 0; // 0x551 PushV
	var_502_object = var_491_object; // 0x552 Mov
	var_503_float = 70.0; // 0x553 MovF
	func_1860(var_502_object, var_503_float); // 0x554 NEW_2
	var_504_bool = var_501_bool == 0; // 0x556 Not
	if(var_504_bool == 0) goto Label_1370; // 0x557 JumpB
	var_490_int = -2; // 0x558 MovI
	return 8; // 0x559 Return
	
Label_1370:
	CreateDialog(var_497_object); // 0x55a Func
	var_505_int = 0; // 0x55c PushV
	func_2229(var_505_int); // 0x55d NEW_2
	SetNPCName(var_505_int); // 0x55f ObjFunc
	var_506_int = 0; // 0x561 PushV
	func_2227(var_506_int); // 0x562 NEW_2
	SetNPCDescription(var_506_int); // 0x564 ObjFunc
	var_507_string = ""; // 0x566 PushV
	func_2231(var_507_string); // 0x567 NEW_2
	SetPhoto(var_507_string); // 0x569 ObjFunc
	var_508_string = ""; // 0x56b PushV
	func_2233(var_508_string); // 0x56c NEW_2
	SetPhoto2(var_508_string); // 0x56e ObjFunc
	var_509_int = 0; // 0x570 PushV
	func_2341(var_509_int); // 0x571 NEW_2
	SetPlayerName(var_509_int); // 0x573 ObjFunc
	var_499_int = -1; // 0x575 MovI
	IsOverrideActive(var_498_bool); // 0x576 Func
	var_510_bool = var_498_bool; // 0x578 Push
	if(var_510_bool == 0) goto Label_1404; // 0x579 JumpB
	var_490_int = -2; // 0x57a MovI
	return 8; // 0x57b Return
	
Label_1404:
	DoDialog(var_497_object); // 0x57c Func
	var_511_bool = 0; var_512_object = Obj(); // 0x57e PushV
	var_513_object = Obj(); // 0x57f PushV
	func_2136(var_513_object); // 0x580 NEW_2
	var_512_object = var_513_object; // 0x581 Mov
	func_1945(var_511_bool, var_512_object); // 0x583 NEW_2
	var_514_object = Obj(); var_515_object = Obj(); // 0x585 PushV
	var_514_object = var_491_object; // 0x586 Mov
	var_515_object = var_497_object; // 0x587 Mov
	TaskCall(9); // 0x588 TaskCall
	func_1440(var_516_object, var_517_object, var_518_string, var_519_bool, var_514_object, var_515_object); // 0x589 NEW_2
	TaskReturn(); // 0x58a TaskReturn
	IsDialogEnd(var_500_bool); // 0x58c ObjFunc
	
Label_1422:
	var_544_bool = var_500_bool == 0; // 0x58e Not
	if(var_544_bool == 0) goto Label_1429; // 0x58f JumpB
	sync(); // 0x590 Func
	IsDialogEnd(var_500_bool); // 0x592 ObjFunc
	goto Label_1422; // 0x594 Jump
	
Label_1429:
	var_545_object = Obj(); // 0x595 PushV
	var_545_object = var_491_object; // 0x596 Mov
	func_1928(); // 0x597 NEW_2
	StopDialog(var_497_object); // 0x599 Func
	GetReturnValue(var_499_int); // 0x59b ObjFunc
	var_490_int = var_499_int; // 0x59d Mov
	return 8; // 0x59e Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object; // 0x52 TMov
	var_1_object = var_387_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_393_int = 1; // 0x55 PushI
	if(var_393_int == 0) goto Label_114; // 0x56 JumpB
	var_394_string = ""; // 0x57 PushV
	var_394_string = "Neutral"; // 0x58 MovS
	func_144(var_388_object, var_394_string); // 0x59 NEW_2
	var_402_int = 530857; // 0x5b PushI
	SetMessage(var_402_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_403_bool = 0; var_404_object = Obj(); // 0x60 PushV
	var_404_object = var_1_object; // 0x61 MovT
	func_2281(var_404_object); // 0x62 NEW_2
	if(var_403_bool == 0) goto Label_106; // 0x64 JumpB
	var_409_int = 530859; // 0x65 PushI
	var_410_int = 32176; // 0x66 PushI
	var_411_int = 32175; // 0x67 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x68 TObjFunc
	
Label_106:
	var_412_int = 530858; // 0x6a PushI
	var_413_int = -1; // 0x6b PushI
	var_414_int = 32174; // 0x6c PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_415_bool = 0; // 0x72 PushV
	func_2235(var_415_bool); // 0x73 NEW_2
	if(var_415_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_416_string = var_3_string; // 0x78 PushT
	if(var_416_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_417_string = ""; // 0x7b PushV
	var_417_string = var_2_object; // 0x7c MovT
	func_2083(var_417_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_418_string = "all"; // 0x81 PushS
	var_419_string = "idle"; // 0x82 PushS
	PlayAnimation(var_418_string, var_419_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_420_string = var_3_string; // 0x87 PushT
	if(var_420_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_421_string = "all"; // 0x8a PushS
	var_422_string = "idle"; // 0x8b PushS
	PlayAnimation(var_421_string, var_422_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_2129()
{
	var_29_bool = 0; // 0x851 PushV
	func_2235(var_29_bool); // 0x852 NEW_2
	if(var_29_bool == 0) goto Label_2135; // 0x854 JumpB
	lshStopSpeech(); // 0x855 Func
	
Label_2135:
	return 0; // 0x857 Return
}


func_2136(var_120_object)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x858 PushV
	self(var_122_object); // 0x859 Func
	var_120_object = var_122_object; // 0x85b Mov
	return 2; // 0x85c Return
}


func_1625()
{
	var_548_float = 0; var_549_float = 0; // 0x659 PushV
	var_550_int = 8; // 0x65a PushI
	var_551_int = 16; // 0x65b PushI
	rand(var_549_float, var_550_int, var_551_int); // 0x65c Func
	var_552_int = 10; // 0x65e PushI
	SetTimer(var_552_int, var_549_float); // 0x65f Func
	return 2; // 0x661 Return
}


func_2142(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0; // 0x85e PushV
	var_90_int = var_86_cvector | var_86_cvector; // 0x85f Or
	var_89_float = sqrt(var_90_int); // 0x860 Sqrt2
	var_91_float = 0.0; // 0x861 PushF
	var_92_bool = var_89_float < var_91_float; // 0x862 LT
	if(var_92_bool == 0) goto Label_2150; // 0x863 JumpB
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x864 MovV
	return 2; // 0x865 Return
	
Label_2150:
	var_85_cvector = var_86_cvector / var_86_cvector; // 0x866 Div2
	return 2; // 0x867 Return
}


func_1634()
{
	var_547_int = 10; // 0x662 PushI
	KillTimer(var_547_int); // 0x663 Func
	return 0; // 0x665 Return
}


func_2152(var_317_int, var_318_string)
{
	var_319_int = 0; var_320_int = 0; // 0x868 PushV
	GetVariable(var_318_string, var_320_int); // 0x869 Func
	var_317_int = var_320_int; // 0x86b Mov
	return 2; // 0x86c Return
}


func_2157(var_58_int, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x86d PushV
	CreateIntVector(var_61_object); // 0x86e Func
	add(var_58_int); // 0x870 ObjFunc
	add(var_59_int); // 0x872 ObjFunc
	var_62_int = 3; // 0x874 PushI
	SendWorldWndMessage(var_62_int, var_61_object); // 0x875 Func
	return 2; // 0x877 Return
}


func_879(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object; // 0x370 TMov
	var_1_object = var_298_object; // 0x371 TMov
	var_3_string = 0; // 0x372 TMovB
	var_304_int = 1; // 0x373 PushI
	if(var_304_int == 0) goto Label_940; // 0x374 JumpB
	var_305_string = ""; // 0x375 PushV
	var_305_string = "Fear"; // 0x376 MovS
	func_970(var_299_object, var_305_string); // 0x377 NEW_2
	var_313_int = 518646; // 0x379 PushI
	SetMessage(var_313_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_314_bool = 0; // 0x37e PushV
	var_314_bool = 0; // 0x37f MovB
	var_315_bool = 0; var_316_object = Obj(); // 0x380 PushV
	var_316_object = var_1_object; // 0x381 MovT
	func_2293(var_316_object); // 0x382 NEW_2
	if(var_315_bool == 0) goto Label_907; // 0x384 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x385 PushV
	var_324_object = var_1_object; // 0x386 MovT
	func_2317(var_324_object); // 0x387 NEW_2
	if(var_323_bool == 0) goto Label_907; // 0x389 JumpB
	var_314_bool = 1; // 0x38a MovB
	
Label_907:
	if(var_314_bool == 0) goto Label_913; // 0x38b JumpB
	var_329_int = 518647; // 0x38c PushI
	var_330_int = 19740; // 0x38d PushI
	var_331_int = 19739; // 0x38e PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x38f TObjFunc
	
Label_913:
	var_332_bool = 0; // 0x391 PushV
	var_332_bool = 0; // 0x392 MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x393 PushV
	var_334_object = var_1_object; // 0x394 MovT
	func_2305(var_334_object); // 0x395 NEW_2
	if(var_333_bool == 0) goto Label_926; // 0x397 JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x398 PushV
	var_340_object = var_1_object; // 0x399 MovT
	func_2329(var_340_object); // 0x39a NEW_2
	if(var_339_bool == 0) goto Label_926; // 0x39c JumpB
	var_332_bool = 1; // 0x39d MovB
	
Label_926:
	if(var_332_bool == 0) goto Label_932; // 0x39e JumpB
	var_345_int = 518651; // 0x39f PushI
	var_346_int = 19744; // 0x3a0 PushI
	var_347_int = 19743; // 0x3a1 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x3a2 TObjFunc
	
Label_932:
	var_348_int = 518654; // 0x3a4 PushI
	var_349_int = -1; // 0x3a5 PushI
	var_350_int = 19746; // 0x3a6 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x3a7 TObjFunc
	goto Label_940; // 0x3a9 Jump
	
Label_940:
	var_351_bool = 0; // 0x3ac PushV
	func_2235(var_351_bool); // 0x3ad NEW_2
	if(var_351_bool == 0) goto Label_955; // 0x3af JumpB
	
Label_944:
	lshWaitForAnimEnd(); // 0x3b0 Func
	var_352_string = var_3_string; // 0x3b2 PushT
	if(var_352_string == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_954; // 0x3b4 Jump
	
Label_954:
	goto Label_969; // 0x3ba Jump
	
Label_969:
	return 0; // 0x3c9 Return
	
Label_949:
	var_353_string = ""; // 0x3b5 PushV
	var_353_string = var_2_object; // 0x3b6 MovT
	func_2083(var_353_string); // 0x3b7 NEW_2
	goto Label_944; // 0x3b9 Jump
	
Label_955:
	var_354_string = "all"; // 0x3bb PushS
	var_355_string = "idle"; // 0x3bc PushS
	PlayAnimation(var_354_string, var_355_string); // 0x3bd Func
	
Label_959:
	WaitForAnimEnd(); // 0x3bf Func
	var_356_string = var_3_string; // 0x3c1 PushT
	if(var_356_string == 0) goto Label_964; // 0x3c2 JumpB
	goto Label_969; // 0x3c3 Jump
	
Label_964:
	var_357_string = "all"; // 0x3c4 PushS
	var_358_string = "idle"; // 0x3c5 PushS
	PlayAnimation(var_357_string, var_358_string); // 0x3c6 Func
	goto Label_959; // 0x3c8 Jump
}


func_2169(var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x879 PushV
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0; // 0x87a PushV
	var_49_object = var_45_object; // 0x87b Mov
	var_50_string = "money"; // 0x87c MovS
	var_51_int = var_46_int; // 0x87d Mov
	func_1829(var_50_string, var_51_int); // 0x87e NEW_2
	var_55_int = 0; // 0x880 PushI
	var_56_bool = var_46_int > var_55_int; // 0x881 GT
	if(var_56_bool == 0) goto Label_2187; // 0x882 JumpB
	var_57_string = "Money"; // 0x883 PushS
	GetInvItemByName(var_48_int, var_57_string); // 0x884 Func
	var_58_int = 0; var_59_int = 0; // 0x886 PushV
	var_58_int = var_48_int; // 0x887 Mov
	var_59_int = var_46_int; // 0x888 Mov
	func_2157(var_58_int, var_59_int); // 0x889 NEW_2
	
Label_2187:
	return 2; // 0x88b Return
}


func_1928()
{
	var_264_bool = 0; var_265_bool = 0; // 0x788 PushV
	CameraSwitchToNormal(); // 0x789 Func
	var_266_bool = 0; // 0x78b PushV
	func_2235(var_266_bool); // 0x78c NEW_2
	if(var_266_bool == 0) goto Label_1936; // 0x78e JumpB
	goto Label_1944; // 0x78f Jump
	
Label_1944:
	return 2; // 0x798 Return
	
Label_1936:
	var_267_string = "head"; // 0x790 PushS
	HasAnimationTrack(var_265_bool, var_267_string); // 0x791 Func
	var_268_bool = var_265_bool; // 0x793 Push
	if(var_268_bool == 0) goto Label_1944; // 0x794 JumpB
	var_269_string = "head"; // 0x795 PushS
	UnlookAsync(var_269_string); // 0x796 Func
}


func_394(var_0_object, var_1_object, var_2_object, var_3_string, var_454_object, var_455_object)
{
	var_0_object = var_455_object; // 0x18b TMov
	var_1_object = var_454_object; // 0x18c TMov
	var_3_string = 0; // 0x18d TMovB
	var_460_int = 1; // 0x18e PushI
	if(var_460_int == 0) goto Label_427; // 0x18f JumpB
	var_461_string = ""; // 0x190 PushV
	var_461_string = "Neutral"; // 0x191 MovS
	func_457(var_455_object, var_461_string); // 0x192 NEW_2
	var_469_int = 535294; // 0x194 PushI
	SetMessage(var_469_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_470_int = 535295; // 0x199 PushI
	var_471_int = 36973; // 0x19a PushI
	var_472_int = 36972; // 0x19b PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x19c TObjFunc
	var_473_int = 535302; // 0x19e PushI
	var_474_int = -1; // 0x19f PushI
	var_475_int = 36980; // 0x1a0 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x1a1 TObjFunc
	var_476_int = 535303; // 0x1a3 PushI
	var_477_int = -1; // 0x1a4 PushI
	var_478_int = 36981; // 0x1a5 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x1a6 TObjFunc
	goto Label_427; // 0x1a8 Jump
	
Label_427:
	var_479_bool = 0; // 0x1ab PushV
	func_2235(var_479_bool); // 0x1ac NEW_2
	if(var_479_bool == 0) goto Label_442; // 0x1ae JumpB
	
Label_431:
	lshWaitForAnimEnd(); // 0x1af Func
	var_480_string = var_3_string; // 0x1b1 PushT
	if(var_480_string == 0) goto Label_436; // 0x1b2 JumpB
	goto Label_441; // 0x1b3 Jump
	
Label_441:
	goto Label_456; // 0x1b9 Jump
	
Label_456:
	return 0; // 0x1c8 Return
	
Label_436:
	var_481_string = ""; // 0x1b4 PushV
	var_481_string = var_2_object; // 0x1b5 MovT
	func_2083(var_481_string); // 0x1b6 NEW_2
	goto Label_431; // 0x1b8 Jump
	
Label_442:
	var_482_string = "all"; // 0x1ba PushS
	var_483_string = "idle"; // 0x1bb PushS
	PlayAnimation(var_482_string, var_483_string); // 0x1bc Func
	
Label_446:
	WaitForAnimEnd(); // 0x1be Func
	var_484_string = var_3_string; // 0x1c0 PushT
	if(var_484_string == 0) goto Label_451; // 0x1c1 JumpB
	goto Label_456; // 0x1c2 Jump
	
Label_451:
	var_485_string = "all"; // 0x1c3 PushS
	var_486_string = "idle"; // 0x1c4 PushS
	PlayAnimation(var_485_string, var_486_string); // 0x1c5 Func
	goto Label_446; // 0x1c7 Jump
}


func_2188(var_173_int)
{
	var_174_float = 0; var_175_float = 0; // 0x88c PushV
	GetGameTime(var_175_float); // 0x88d Func
	var_176_int = 1; // 0x88f PushI
	var_177_int = 0; // 0x890 PushV
	var_178_int = 24; // 0x891 PushI
	var_177_int = var_175_float / var_175_float; // 0x892 Div2
	var_173_int = var_176_int + var_177_int; // 0x893 Add2
	return 2; // 0x894 Return
}


func_653(var_0_object, var_1_object, var_2_object, var_3_string, var_213_object, var_214_object)
{
	var_0_object = var_214_object; // 0x28e TMov
	var_1_object = var_213_object; // 0x28f TMov
	var_3_string = 0; // 0x290 TMovB
	var_219_int = 1; // 0x291 PushI
	if(var_219_int == 0) goto Label_681; // 0x292 JumpB
	var_220_string = ""; // 0x293 PushV
	var_220_string = "Neutral"; // 0x294 MovS
	func_711(var_214_object, var_220_string); // 0x295 NEW_2
	var_237_int = 517997; // 0x297 PushI
	SetMessage(var_237_int); // 0x298 TObjFunc
	ClearReplies(); // 0x29a TObjFunc
	var_238_int = 517998; // 0x29c PushI
	var_239_int = 29658; // 0x29d PushI
	var_240_int = 19131; // 0x29e PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x29f TObjFunc
	var_241_int = 528292; // 0x2a1 PushI
	var_242_int = 29658; // 0x2a2 PushI
	var_243_int = 29657; // 0x2a3 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x2a4 TObjFunc
	goto Label_681; // 0x2a6 Jump
	
Label_681:
	var_244_bool = 0; // 0x2a9 PushV
	func_2235(var_244_bool); // 0x2aa NEW_2
	if(var_244_bool == 0) goto Label_696; // 0x2ac JumpB
	
Label_685:
	lshWaitForAnimEnd(); // 0x2ad Func
	var_245_string = var_3_string; // 0x2af PushT
	if(var_245_string == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_695; // 0x2b1 Jump
	
Label_695:
	goto Label_710; // 0x2b7 Jump
	
Label_710:
	return 0; // 0x2c6 Return
	
Label_690:
	var_246_string = ""; // 0x2b2 PushV
	var_246_string = var_2_object; // 0x2b3 MovT
	func_2083(var_246_string); // 0x2b4 NEW_2
	goto Label_685; // 0x2b6 Jump
	
Label_696:
	var_257_string = "all"; // 0x2b8 PushS
	var_258_string = "idle"; // 0x2b9 PushS
	PlayAnimation(var_257_string, var_258_string); // 0x2ba Func
	
Label_700:
	WaitForAnimEnd(); // 0x2bc Func
	var_259_string = var_3_string; // 0x2be PushT
	if(var_259_string == 0) goto Label_705; // 0x2bf JumpB
	goto Label_710; // 0x2c0 Jump
	
Label_705:
	var_260_string = "all"; // 0x2c1 PushS
	var_261_string = "idle"; // 0x2c2 PushS
	PlayAnimation(var_260_string, var_261_string); // 0x2c3 Func
	goto Label_700; // 0x2c5 Jump
}


func_144(var_2_object, var_394_string)
{
	var_395_bool = 0; // 0x91 PushV
	func_2235(var_395_bool); // 0x92 NEW_2
	var_396_bool = var_395_bool == 0; // 0x94 Not
	if(var_396_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_397_bool = var_394_string == var_2_object; // 0x97 Eq
	if(var_397_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_398_string = ""; var_399_bool = 0; // 0x9a PushV
	var_398_string = var_394_string; // 0x9b Mov
	var_400_string = ""; // 0x9c PushS
	var_401_bool = var_394_string == var_400_string; // 0x9d Eq
	if(var_401_bool == 0) goto Label_161; // 0x9e JumpB
	var_399_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2099(var_398_string, var_399_bool); // 0xa2 NEW_2
	var_2_object = var_394_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_399_bool = 1; // 0xa1 MovB
}


func_2197(var_271_bool, var_272_int)
{
	var_273_int = 0; // 0x896 PushV
	func_2188(var_273_int); // 0x897 NEW_2
	var_271_bool = var_273_int == var_272_int; // 0x899 Eq2
	return 0; // 0x89a Return
}


func_1945(var_118_bool, var_119_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; // 0x799 PushV
	var_127_string = "voice_common"; // 0x79a PushS
	GetVariable(var_127_string, var_125_int); // 0x79b Func
	var_128_int = var_125_int; // 0x79d Push
	if(var_128_int == 0) goto Label_1983; // 0x79e JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x79f PushV
	var_130_object = var_119_object; // 0x7a0 Mov
	func_2003(var_130_object); // 0x7a1 NEW_2
	var_159_bool = var_129_bool == 0; // 0x7a3 Not
	if(var_159_bool == 0) goto Label_1965; // 0x7a4 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x7a5 PushV
	var_161_object = var_119_object; // 0x7a6 Mov
	func_2040(var_161_object); // 0x7a7 NEW_2
	var_195_bool = var_160_bool == 0; // 0x7a9 Not
	if(var_195_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_118_bool = 0; // 0x7ab MovB
	return 4; // 0x7ac Return
	
Label_1965:
	var_196_int = 2; // 0x7ad PushI
	irand(var_126_int, var_196_int); // 0x7ae Func
	var_197_int = var_126_int; // 0x7b0 Push
	if(var_197_int == 0) goto Label_1978; // 0x7b1 JumpB
	var_198_string = "voice_common"; // 0x7b2 PushS
	var_199_int = 1; // 0x7b3 PushI
	var_200_int = var_125_int + var_199_int; // 0x7b4 Add
	var_201_int = 3; // 0x7b5 PushI
	var_202_int = var_200_int / var_201_int; // 0x7b6 Mod
	SetVariable(var_198_string, var_202_int); // 0x7b7 Func
	goto Label_1982; // 0x7b9 Jump
	
Label_1982:
	goto Label_2001; // 0x7be Jump
	
Label_2001:
	var_118_bool = 1; // 0x7d1 MovB
	return 4; // 0x7d2 Return
	
Label_1978:
	var_203_string = "voice_common"; // 0x7ba PushS
	var_204_int = 0; // 0x7bb PushI
	SetVariable(var_203_string, var_204_int); // 0x7bc Func
	
Label_1983:
	var_205_bool = 0; var_206_object = Obj(); // 0x7bf PushV
	var_206_object = var_119_object; // 0x7c0 Mov
	func_2040(var_206_object); // 0x7c1 NEW_2
	var_207_bool = var_205_bool == 0; // 0x7c3 Not
	if(var_207_bool == 0) goto Label_1997; // 0x7c4 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x7c5 PushV
	var_209_object = var_119_object; // 0x7c6 Mov
	func_2003(var_209_object); // 0x7c7 NEW_2
	var_210_bool = var_208_bool == 0; // 0x7c9 Not
	if(var_210_bool == 0) goto Label_1997; // 0x7ca JumpB
	var_118_bool = 0; // 0x7cb MovB
	return 4; // 0x7cc Return
	
Label_1997:
	var_211_string = "voice_common"; // 0x7cd PushS
	var_212_int = 1; // 0x7ce PushI
	SetVariable(var_211_string, var_212_int); // 0x7cf Func
}


func_2203(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x89b PushV
	var_54_string = "idle"; // 0x89c MovS
	var_55_int = var_52_int; // 0x89d Push
	if(var_55_int == 0) goto Label_2208; // 0x89e JumpB
	var_54_string = var_54_string + var_52_int; // 0x89f Add2
	
Label_2208:
	var_51_string = var_54_string; // 0x8a0 Mov
	return 2; // 0x8a1 Return
}


func_1440(var_0_object, var_1_object, var_2_object, var_3_string, var_514_object, var_515_object)
{
	var_0_object = var_515_object; // 0x5a1 TMov
	var_1_object = var_514_object; // 0x5a2 TMov
	var_3_string = 0; // 0x5a3 TMovB
	var_520_int = 1; // 0x5a4 PushI
	if(var_520_int == 0) goto Label_1468; // 0x5a5 JumpB
	var_521_string = ""; // 0x5a6 PushV
	var_521_string = "Neutral"; // 0x5a7 MovS
	func_1498(var_515_object, var_521_string); // 0x5a8 NEW_2
	var_529_int = 540551; // 0x5aa PushI
	SetMessage(var_529_int); // 0x5ab TObjFunc
	ClearReplies(); // 0x5ad TObjFunc
	var_530_int = 540552; // 0x5af PushI
	var_531_int = -1; // 0x5b0 PushI
	var_532_int = 42561; // 0x5b1 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x5b2 TObjFunc
	var_533_int = 540795; // 0x5b4 PushI
	var_534_int = -1; // 0x5b5 PushI
	var_535_int = 42844; // 0x5b6 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x5b7 TObjFunc
	goto Label_1468; // 0x5b9 Jump
	
Label_1468:
	var_536_bool = 0; // 0x5bc PushV
	func_2235(var_536_bool); // 0x5bd NEW_2
	if(var_536_bool == 0) goto Label_1483; // 0x5bf JumpB
	
Label_1472:
	lshWaitForAnimEnd(); // 0x5c0 Func
	var_537_string = var_3_string; // 0x5c2 PushT
	if(var_537_string == 0) goto Label_1477; // 0x5c3 JumpB
	goto Label_1482; // 0x5c4 Jump
	
Label_1482:
	goto Label_1497; // 0x5ca Jump
	
Label_1497:
	return 0; // 0x5d9 Return
	
Label_1477:
	var_538_string = ""; // 0x5c5 PushV
	var_538_string = var_2_object; // 0x5c6 MovT
	func_2083(var_538_string); // 0x5c7 NEW_2
	goto Label_1472; // 0x5c9 Jump
	
Label_1483:
	var_539_string = "all"; // 0x5cb PushS
	var_540_string = "idle"; // 0x5cc PushS
	PlayAnimation(var_539_string, var_540_string); // 0x5cd Func
	
Label_1487:
	WaitForAnimEnd(); // 0x5cf Func
	var_541_string = var_3_string; // 0x5d1 PushT
	if(var_541_string == 0) goto Label_1492; // 0x5d2 JumpB
	goto Label_1497; // 0x5d3 Jump
	
Label_1492:
	var_542_string = "all"; // 0x5d4 PushS
	var_543_string = "idle"; // 0x5d5 PushS
	PlayAnimation(var_542_string, var_543_string); // 0x5d6 Func
	goto Label_1487; // 0x5d8 Jump
}


func_2210(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x8a2 PushV
	var_48_int = 0; // 0x8a3 MovI
	
Label_2212:
	var_50_string = "all"; // 0x8a4 PushS
	var_51_string = ""; var_52_int = 0; // 0x8a5 PushV
	var_52_int = var_48_int; // 0x8a6 Mov
	func_2203(var_51_string, var_52_int); // 0x8a7 NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x8a9 Func
	var_56_bool = var_49_bool == 0; // 0x8ab Not
	if(var_56_bool == 0) goto Label_2222; // 0x8ac JumpB
	goto Label_2225; // 0x8ad Jump
	
Label_2225:
	var_45_int = var_48_int; // 0x8b1 Mov
	return 4; // 0x8b2 Return
	
Label_2222:
	var_57_int = 1; // 0x8ae PushI
	var_48_int = var_48_int + var_57_int; // 0x8af Add2
	goto Label_2212; // 0x8b0 Jump
}


func_2227(var_106_int)
{
	var_106_int = 515530; // 0x8b3 MovI
	return 0; // 0x8b4 Return
}


func_2229(var_105_int)
{
	var_105_int = 502856; // 0x8b5 MovI
	return 0; // 0x8b6 Return
}


func_2231(var_107_string)
{
	var_107_string = "ui/NPC_Anna.png"; // 0x8b7 MovS
	return 0; // 0x8b8 Return
}


func_2233(var_108_string)
{
	var_108_string = "ui/NPC_Anna_b.png"; // 0x8b9 MovS
	return 0; // 0x8ba Return
}


func_2235(var_100_bool)
{
	var_100_bool = 1; // 0x8bb MovB
	return 0; // 0x8bc Return
}


func_2237()
{
	var_34_string = "b5q01_1"; // 0x8be PushS
	var_35_int = 1; // 0x8bf PushI
	SetVariable(var_34_string, var_35_int); // 0x8c0 Func
	return 0; // 0x8c2 Return
}


func_2243()
{
	var_40_string = "b5q01_1"; // 0x8c4 PushS
	var_41_int = 1000; // 0x8c5 PushI
	SetVariable(var_40_string, var_41_int); // 0x8c6 Func
	return 0; // 0x8c8 Return
}


func_711(var_2_object, var_220_string)
{
	var_221_bool = 0; // 0x2c8 PushV
	func_2235(var_221_bool); // 0x2c9 NEW_2
	var_222_bool = var_221_bool == 0; // 0x2cb Not
	if(var_222_bool == 0) goto Label_718; // 0x2cc JumpB
	return 0; // 0x2cd Return
	
Label_718:
	var_223_bool = var_220_string == var_2_object; // 0x2ce Eq
	if(var_223_bool == 0) goto Label_721; // 0x2cf JumpB
	return 0; // 0x2d0 Return
	
Label_721:
	var_224_string = ""; var_225_bool = 0; // 0x2d1 PushV
	var_224_string = var_220_string; // 0x2d2 Mov
	var_226_string = ""; // 0x2d3 PushS
	var_227_bool = var_220_string == var_226_string; // 0x2d4 Eq
	if(var_227_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_225_bool = 0; // 0x2d6 MovB
	goto Label_729; // 0x2d7 Jump
	
Label_729:
	func_2099(var_224_string, var_225_bool); // 0x2d9 NEW_2
	var_2_object = var_220_string; // 0x2db TMov
	return 0; // 0x2dc Return
	
Label_728:
	var_225_bool = 1; // 0x2d8 MovB
}


func_457(var_2_object, var_461_string)
{
	var_462_bool = 0; // 0x1ca PushV
	func_2235(var_462_bool); // 0x1cb NEW_2
	var_463_bool = var_462_bool == 0; // 0x1cd Not
	if(var_463_bool == 0) goto Label_464; // 0x1ce JumpB
	return 0; // 0x1cf Return
	
Label_464:
	var_464_bool = var_461_string == var_2_object; // 0x1d0 Eq
	if(var_464_bool == 0) goto Label_467; // 0x1d1 JumpB
	return 0; // 0x1d2 Return
	
Label_467:
	var_465_string = ""; var_466_bool = 0; // 0x1d3 PushV
	var_465_string = var_461_string; // 0x1d4 Mov
	var_467_string = ""; // 0x1d5 PushS
	var_468_bool = var_461_string == var_467_string; // 0x1d6 Eq
	if(var_468_bool == 0) goto Label_474; // 0x1d7 JumpB
	var_466_bool = 0; // 0x1d8 MovB
	goto Label_475; // 0x1d9 Jump
	
Label_475:
	func_2099(var_465_string, var_466_bool); // 0x1db NEW_2
	var_2_object = var_461_string; // 0x1dd TMov
	return 0; // 0x1de Return
	
Label_474:
	var_466_bool = 1; // 0x1da MovB
}


func_970(var_2_object, var_305_string)
{
	var_306_bool = 0; // 0x3cb PushV
	func_2235(var_306_bool); // 0x3cc NEW_2
	var_307_bool = var_306_bool == 0; // 0x3ce Not
	if(var_307_bool == 0) goto Label_977; // 0x3cf JumpB
	return 0; // 0x3d0 Return
	
Label_977:
	var_308_bool = var_305_string == var_2_object; // 0x3d1 Eq
	if(var_308_bool == 0) goto Label_980; // 0x3d2 JumpB
	return 0; // 0x3d3 Return
	
Label_980:
	var_309_string = ""; var_310_bool = 0; // 0x3d4 PushV
	var_309_string = var_305_string; // 0x3d5 Mov
	var_311_string = ""; // 0x3d6 PushS
	var_312_bool = var_305_string == var_311_string; // 0x3d7 Eq
	if(var_312_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_310_bool = 0; // 0x3d9 MovB
	goto Label_988; // 0x3da Jump
	
Label_988:
	func_2099(var_309_string, var_310_bool); // 0x3dc NEW_2
	var_2_object = var_305_string; // 0x3de TMov
	return 0; // 0x3df Return
	
Label_987:
	var_310_bool = 1; // 0x3db MovB
}


func_2249(var_42_object)
{
	var_44_string = "money10000 is given"; // 0x8ca PushS
	Trace(var_44_string); // 0x8cb Func
	var_45_object = Obj(); var_46_int = 0; // 0x8cd PushV
	var_45_object = var_42_object; // 0x8ce Mov
	var_46_int = 10000; // 0x8cf MovI
	func_2169(var_45_object, var_46_int); // 0x8d0 NEW_2
	return 0; // 0x8d2 Return
}


func_1745()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x6d1 PushV
	WaitForAnimEnd(); // 0x6d2 Func
	var_43_bool = 0; // 0x6d4 PushV
	func_1855(var_43_bool); // 0x6d5 NEW_2
	var_44_bool = var_43_bool == 0; // 0x6d7 Not
	if(var_44_bool == 0) goto Label_1754; // 0x6d8 JumpB
	return 12; // 0x6d9 Return
	
Label_1754:
	var_45_int = 0; // 0x6da PushV
	func_2210(var_45_int); // 0x6db NEW_2
	var_37_int = var_45_int; // 0x6dc Mov
	var_38_int = 0; // 0x6de MovI
	
Label_1759:
	var_58_bool = 0; // 0x6df PushV
	var_58_bool = 0; // 0x6e0 MovB
	var_59_int = 5; // 0x6e1 PushI
	var_60_bool = var_38_int < var_59_int; // 0x6e2 LT
	if(var_60_bool == 0) goto Label_1769; // 0x6e3 JumpB
	var_61_bool = 0; // 0x6e4 PushV
	func_1855(var_61_bool); // 0x6e5 NEW_2
	if(var_61_bool == 0) goto Label_1769; // 0x6e7 JumpB
	var_58_bool = 1; // 0x6e8 MovB
	
Label_1769:
	if(var_58_bool == 0) goto Label_1811; // 0x6e9 JumpB
	var_62_bool = var_37_int == 0; // 0x6ea Not
	if(var_62_bool == 0) goto Label_1779; // 0x6eb JumpB
	var_63_int = 3; // 0x6ec PushI
	Sleep(var_63_int, var_39_bool); // 0x6ed Func
	var_64_bool = var_39_bool == 0; // 0x6ef Not
	if(var_64_bool == 0) goto Label_1778; // 0x6f0 JumpB
	goto Label_1811; // 0x6f1 Jump
	
Label_1811:
	ResetAAS(); // 0x713 Func
	return 12; // 0x715 Return
	
Label_1778:
	goto Label_1800; // 0x6f2 Jump
	
Label_1800:
	var_65_bool = 0; // 0x708 PushV
	func_1814(var_65_bool); // 0x709 NEW_2
	var_66_bool = var_65_bool == 0; // 0x70b Not
	if(var_66_bool == 0) goto Label_1806; // 0x70c JumpB
	goto Label_1811; // 0x70d Jump
	
Label_1806:
	ResetAAS(); // 0x70e Func
	var_67_int = 1; // 0x710 PushI
	var_38_int = var_38_int + var_67_int; // 0x711 Add2
	goto Label_1759; // 0x712 Jump
	
Label_1779:
	irand(var_40_int, var_37_int); // 0x6f3 Func
	var_68_int = 5; // 0x6f5 PushI
	irand(var_41_int, var_68_int); // 0x6f6 Func
	var_69_int = 0; // 0x6f8 PushI
	var_70_bool = var_41_int != var_69_int; // 0x6f9 Neq
	if(var_70_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_40_int = 0; // 0x6fb MovI
	
Label_1788:
	var_71_string = "all"; // 0x6fc PushS
	var_72_string = ""; var_73_int = 0; // 0x6fd PushV
	var_73_int = var_40_int; // 0x6fe Mov
	func_2203(var_72_string, var_73_int); // 0x6ff NEW_2
	PlayAnimation(var_71_string, var_72_string); // 0x701 Func
	WaitForAnimEnd(var_42_bool); // 0x703 Func
	var_74_bool = var_42_bool == 0; // 0x705 Not
	if(var_74_bool == 0) goto Label_1800; // 0x706 JumpB
	goto Label_1811; // 0x707 Jump
}


func_2259()
{
	var_65_string = "playsound"; // 0x8d4 PushS
	var_66_string = "givemoney"; // 0x8d5 PushS
	TriggerWorld(var_65_string, var_66_string); // 0x8d6 Func
	return 0; // 0x8d8 Return
}


func_2003(var_129_bool)
{
	var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; // 0x7d3 PushV
	var_136_string = "c"; // 0x7d4 MovS
	var_137_int = 0; // 0x7d5 MovI
	
Label_2006:
	var_141_int = 1; // 0x7d6 PushI
	if(var_141_int == 0) goto Label_2019; // 0x7d7 JumpB
	var_142_int = 1; // 0x7d8 PushI
	var_143_int = var_137_int + var_142_int; // 0x7d9 Add
	var_144_int = var_136_string + var_143_int; // 0x7da Add
	HasProperty(var_144_int, var_138_bool); // 0x7db ObjFunc
	var_145_bool = var_138_bool == 0; // 0x7dd Not
	if(var_145_bool == 0) goto Label_2016; // 0x7de JumpB
	goto Label_2019; // 0x7df Jump
	
Label_2019:
	var_146_bool = var_137_int == 0; // 0x7e3 Not
	if(var_146_bool == 0) goto Label_2023; // 0x7e4 JumpB
	var_129_bool = 0; // 0x7e5 MovB
	return 10; // 0x7e6 Return
	
Label_2023:
	var_139_int = 0; // 0x7e7 MovI
	var_147_int = 1; // 0x7e8 PushI
	var_148_bool = var_137_int > var_147_int; // 0x7e9 GT
	if(var_148_bool == 0) goto Label_2029; // 0x7ea JumpB
	irand(var_139_int, var_137_int); // 0x7eb Func
	
Label_2029:
	var_149_int = 1; // 0x7ed PushI
	var_150_int = var_139_int + var_149_int; // 0x7ee Add
	var_151_int = var_136_string + var_150_int; // 0x7ef Add
	GetProperty(var_151_int, var_140_string); // 0x7f0 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x7f2 PushV
	var_153_string = var_140_string; // 0x7f3 Mov
	func_2114(var_152_bool, var_153_string); // 0x7f4 NEW_2
	var_129_bool = var_152_bool; // 0x7f5 Mov
	return 10; // 0x7f7 Return
	
Label_2016:
	var_158_int = 1; // 0x7e0 PushI
	var_137_int = var_137_int + var_158_int; // 0x7e1 Add2
	goto Label_2006; // 0x7e2 Jump
}


func_2265()
{
	var_34_string = "oob6Anna1"; // 0x8da PushS
	var_35_int = 1; // 0x8db PushI
	SetVariable(var_34_string, var_35_int); // 0x8dc Func
	return 0; // 0x8de Return
}


func_1498(var_2_object, var_521_string)
{
	var_522_bool = 0; // 0x5db PushV
	func_2235(var_522_bool); // 0x5dc NEW_2
	var_523_bool = var_522_bool == 0; // 0x5de Not
	if(var_523_bool == 0) goto Label_1505; // 0x5df JumpB
	return 0; // 0x5e0 Return
	
Label_1505:
	var_524_bool = var_521_string == var_2_object; // 0x5e1 Eq
	if(var_524_bool == 0) goto Label_1508; // 0x5e2 JumpB
	return 0; // 0x5e3 Return
	
Label_1508:
	var_525_string = ""; var_526_bool = 0; // 0x5e4 PushV
	var_525_string = var_521_string; // 0x5e5 Mov
	var_527_string = ""; // 0x5e6 PushS
	var_528_bool = var_521_string == var_527_string; // 0x5e7 Eq
	if(var_528_bool == 0) goto Label_1515; // 0x5e8 JumpB
	var_526_bool = 0; // 0x5e9 MovB
	goto Label_1516; // 0x5ea Jump
	
Label_1516:
	func_2099(var_525_string, var_526_bool); // 0x5ec NEW_2
	var_2_object = var_521_string; // 0x5ee TMov
	return 0; // 0x5ef Return
	
Label_1515:
	var_526_bool = 1; // 0x5eb MovB
}


func_2271(var_71_object)
{
	var_73_string = "money3000 is given"; // 0x8e0 PushS
	Trace(var_73_string); // 0x8e1 Func
	var_74_object = Obj(); var_75_int = 0; // 0x8e3 PushV
	var_74_object = var_71_object; // 0x8e4 Mov
	var_75_int = 3000; // 0x8e5 MovI
	func_2169(var_74_object, var_75_int); // 0x8e6 NEW_2
	return 0; // 0x8e8 Return
}


func_2281(var_403_bool)
{
	var_405_int = 0; var_406_string = ""; // 0x8ea PushV
	var_406_string = "oob6Anna1"; // 0x8eb MovS
	func_2152(var_405_int, var_406_string); // 0x8ec NEW_2
	var_407_int = 0; // 0x8ee PushI
	var_408_bool = var_405_int == var_407_int; // 0x8ef Eq
	if(var_408_bool == 0) goto Label_2291; // 0x8f0 JumpB
	var_403_bool = 1; // 0x8f1 MovB
	return 0; // 0x8f2 Return
	
Label_2291:
	var_403_bool = 0; // 0x8f3 MovB
	return 0; // 0x8f4 Return
}


func_2293(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0x8f6 PushV
	var_318_string = "b5q01TalkToVera"; // 0x8f7 MovS
	func_2152(var_317_int, var_318_string); // 0x8f8 NEW_2
	var_321_int = 1; // 0x8fa PushI
	var_322_bool = var_317_int == var_321_int; // 0x8fb Eq
	if(var_322_bool == 0) goto Label_2303; // 0x8fc JumpB
	var_315_bool = 1; // 0x8fd MovB
	return 0; // 0x8fe Return
	
Label_2303:
	var_315_bool = 0; // 0x8ff MovB
	return 0; // 0x900 Return
}


func_2040(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x7f8 PushV
	var_172_string = "d"; // 0x7f9 PushS
	var_173_int = 0; // 0x7fa PushV
	func_2188(var_173_int); // 0x7fb NEW_2
	var_179_int = var_172_string + var_173_int; // 0x7fd Add
	var_180_string = "m"; // 0x7fe PushS
	var_167_string = var_179_int + var_180_string; // 0x7ff Add2
	var_168_int = 0; // 0x800 MovI
	
Label_2049:
	var_181_int = 1; // 0x801 PushI
	if(var_181_int == 0) goto Label_2062; // 0x802 JumpB
	var_182_int = 1; // 0x803 PushI
	var_183_int = var_168_int + var_182_int; // 0x804 Add
	var_184_int = var_167_string + var_183_int; // 0x805 Add
	HasProperty(var_184_int, var_169_bool); // 0x806 ObjFunc
	var_185_bool = var_169_bool == 0; // 0x808 Not
	if(var_185_bool == 0) goto Label_2059; // 0x809 JumpB
	goto Label_2062; // 0x80a Jump
	
Label_2062:
	var_186_bool = var_168_int == 0; // 0x80e Not
	if(var_186_bool == 0) goto Label_2066; // 0x80f JumpB
	var_160_bool = 0; // 0x810 MovB
	return 10; // 0x811 Return
	
Label_2066:
	var_170_int = 0; // 0x812 MovI
	var_187_int = 1; // 0x813 PushI
	var_188_bool = var_168_int > var_187_int; // 0x814 GT
	if(var_188_bool == 0) goto Label_2072; // 0x815 JumpB
	irand(var_170_int, var_168_int); // 0x816 Func
	
Label_2072:
	var_189_int = 1; // 0x818 PushI
	var_190_int = var_170_int + var_189_int; // 0x819 Add
	var_191_int = var_167_string + var_190_int; // 0x81a Add
	GetProperty(var_191_int, var_171_string); // 0x81b ObjFunc
	var_192_bool = 0; var_193_string = ""; // 0x81d PushV
	var_193_string = var_171_string; // 0x81e Mov
	func_2114(var_192_bool, var_193_string); // 0x81f NEW_2
	var_160_bool = var_192_bool; // 0x820 Mov
	return 10; // 0x822 Return
	
Label_2059:
	var_194_int = 1; // 0x80b PushI
	var_168_int = var_168_int + var_194_int; // 0x80c Add2
	goto Label_2049; // 0x80d Jump
}


