task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	var_0_bool = 1; // 0x38 TMovB
	func_145(); // 0x3a NEW_2
	func_4374(); // 0x3d NEW_2
	TaskCall(0); // 0x40 TaskCall
	func_0(); // 0x41 NEW_2
	TaskReturn(); // 0x42 TaskReturn
	return 0; // 0x44 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0; // 0x45 PushV
	IsOverrideActive(var_41_bool); // 0x46 Func
	var_42_bool = var_41_bool == 0; // 0x48 Not
	if(var_42_bool == 0) goto Label_88; // 0x49 JumpB
	func_145(); // 0x4b NEW_2
	EventDisable(0); // 0x4d EventDisable
	var_43_bool = 0; var_44_object = Obj(); // 0x4e PushV
	var_44_object = var_39_int; // 0x4f Mov
	func_3890(var_44_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_57_object = Obj(); // 0x53 PushV
	var_57_object = var_39_int; // 0x54 Mov
	func_4995(var_57_object); // 0x55 NEW_2
	var_0_bool = 0; // 0x57 TMovB
	
Label_88:
	return 2; // 0x58 Return
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int, var_40_object, var_41_object, var_61_object)
	{
	var_62_bool = 0; var_63_bool = 0; // 0x59 PushV
	IsPlayerActor(var_61_object, var_63_bool); // 0x5a Func
	var_64_bool = var_63_bool; // 0x5c Push
	if(var_64_bool == 0) goto Label_108; // 0x5d JumpB
	func_145(); // 0x5f NEW_2
	var_65_object = Obj(); // 0x61 PushV
	var_65_object = var_61_object; // 0x62 Mov
	TaskCall(2); // 0x63 TaskCall
	func_148(var_65_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_0_bool = 0; // 0x67 TMovB
	var_79_int = 20; // 0x68 PushI
	var_80_float = 10.0; // 0x69 PushF
	SetTimer(var_79_int, var_80_float); // 0x6a Func
	
Label_108:
	return 2; // 0x6c Return
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x6d PushV
	var_42_int = 20; // 0x6e PushI
	var_43_bool = var_39_int == var_42_int; // 0x6f Eq
	if(var_43_bool == 0) goto Label_118; // 0x70 JumpB
	var_0_bool = 1; // 0x71 TMovB
	var_44_int = 20; // 0x72 PushI
	KillTimer(var_44_int); // 0x73 Func
	goto Label_144; // 0x75 Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_118:
	var_45_int = 21; // 0x76 PushI
	var_46_bool = var_39_int == var_45_int; // 0x77 Eq
	if(var_46_bool == 0) goto Label_144; // 0x78 JumpB
	var_47_bool = var_0_bool; // 0x79 PushT
	if(var_47_bool == 0) goto Label_144; // 0x7a JumpB
	var_48_string = "player"; // 0x7b PushS
	FindActor(var_41_object, var_48_string); // 0x7c Func
	var_49_bool = 0; // 0x7e PushV
	var_49_bool = 0; // 0x7f MovB
	var_50_object = var_41_object; // 0x80 Push
	if(var_50_object == 0) goto Label_138; // 0x81 JumpB
	var_51_float = 0; var_52_object = Obj(); // 0x82 PushV
	var_52_object = var_41_object; // 0x83 Mov
	func_3831(var_52_object); // 0x84 NEW_2
	var_59_float = 62500.0; // 0x86 PushF
	var_60_bool = var_51_float <= var_59_float; // 0x87 LE
	if(var_60_bool == 0) goto Label_138; // 0x88 JumpB
	var_49_bool = 1; // 0x89 MovB
	
Label_138:
	if(var_49_bool == 0) goto Label_143; // 0x8a JumpB
	var_61_object = Obj(); // 0x8b PushV
	var_61_object = var_41_object; // 0x8c Mov
	func_89(); // 0x8d NEW_2
	
Label_143:
	var_41_object = 0; // 0x8f SetNull
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_193(); // 0xa3 NEW_2
	func_4374(); // 0xa6 NEW_2
	TaskCall(0); // 0xa9 TaskCall
	func_0(); // 0xaa NEW_2
	TaskReturn(); // 0xab TaskReturn
	return 0; // 0xad Return
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0; // 0xae PushV
	IsOverrideActive(var_41_bool); // 0xaf Func
	var_42_bool = var_41_bool == 0; // 0xb1 Not
	if(var_42_bool == 0) goto Label_192; // 0xb2 JumpB
	func_193(); // 0xb4 NEW_2
	EventDisable(0); // 0xb6 EventDisable
	var_43_bool = 0; var_44_object = Obj(); // 0xb7 PushV
	var_44_object = var_39_int; // 0xb8 Mov
	func_3890(var_44_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_57_object = Obj(); // 0xbc PushV
	var_57_object = var_39_int; // 0xbd Mov
	func_4995(var_57_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4374(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x22d PushI
	if(var_41_int == 0) goto Label_1602; // 0x22e JumpB
	func_4184(); // 0x230 NEW_2
	var_43_int = 26708; // 0x232 PushI
	var_44_bool = var_40_int == var_43_int; // 0x233 Eq
	if(var_44_bool == 0) goto Label_575; // 0x234 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x235 PushV
	var_45_object = var_1_object; // 0x236 MovT
	var_46_object = var_0_bool; // 0x237 MovT
	func_4421(); // 0x238 NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0x23a PushV
	var_96_object = var_1_object; // 0x23b MovT
	var_97_object = var_0_bool; // 0x23c MovT
	func_4569(); // 0x23d NEW_2
	
Label_575:
	var_122_int = 44290; // 0x23f PushI
	var_123_bool = var_40_int == var_122_int; // 0x240 Eq
	if(var_123_bool == 0) goto Label_583; // 0x241 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x242 PushV
	var_124_object = var_1_object; // 0x243 MovT
	var_125_object = var_0_bool; // 0x244 MovT
	func_4385(var_125_object); // 0x245 NEW_2
	
Label_583:
	var_164_int = 44277; // 0x247 PushI
	var_165_bool = var_40_int == var_164_int; // 0x248 Eq
	if(var_165_bool == 0) goto Label_591; // 0x249 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x24a PushV
	var_166_object = var_1_object; // 0x24b MovT
	var_167_object = var_0_bool; // 0x24c MovT
	func_4549(var_167_object); // 0x24d NEW_2
	
Label_591:
	var_171_int = 26610; // 0x24f PushI
	var_172_bool = var_40_int == var_171_int; // 0x250 Eq
	if(var_172_bool == 0) goto Label_599; // 0x251 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x252 PushV
	var_173_object = var_1_object; // 0x253 MovT
	var_174_object = var_0_bool; // 0x254 MovT
	func_4392(); // 0x255 NEW_2
	
Label_599:
	var_193_int = 44473; // 0x257 PushI
	var_194_bool = var_40_int == var_193_int; // 0x258 Eq
	if(var_194_bool == 0) goto Label_607; // 0x259 JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x25a PushV
	var_195_object = var_1_object; // 0x25b MovT
	var_196_object = var_0_bool; // 0x25c MovT
	func_4392(); // 0x25d NEW_2
	
Label_607:
	var_197_int = 26740; // 0x25f PushI
	var_198_bool = var_40_int == var_197_int; // 0x260 Eq
	if(var_198_bool == 0) goto Label_615; // 0x261 JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x262 PushV
	var_199_object = var_1_object; // 0x263 MovT
	var_200_object = var_0_bool; // 0x264 MovT
	func_4447(); // 0x265 NEW_2
	
Label_615:
	var_203_int = 26739; // 0x267 PushI
	var_204_bool = var_40_int == var_203_int; // 0x268 Eq
	if(var_204_bool == 0) goto Label_633; // 0x269 JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x26a PushV
	var_205_object = var_1_object; // 0x26b MovT
	var_206_object = var_0_bool; // 0x26c MovT
	func_4453(); // 0x26d NEW_2
	var_223_object = Obj(); var_224_object = Obj(); // 0x26f PushV
	var_223_object = var_1_object; // 0x270 MovT
	var_224_object = var_0_bool; // 0x271 MovT
	func_4533(var_224_object); // 0x272 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x274 PushV
	var_244_object = var_1_object; // 0x275 MovT
	var_245_object = var_0_bool; // 0x276 MovT
	func_4543(); // 0x277 NEW_2
	
Label_633:
	var_248_int = 26751; // 0x279 PushI
	var_249_bool = var_40_int == var_248_int; // 0x27a Eq
	if(var_249_bool == 0) goto Label_646; // 0x27b JumpB
	var_250_object = Obj(); var_251_object = Obj(); // 0x27c PushV
	var_250_object = var_1_object; // 0x27d MovT
	var_251_object = var_0_bool; // 0x27e MovT
	func_4470(); // 0x27f NEW_2
	var_262_object = Obj(); var_263_object = Obj(); // 0x281 PushV
	var_262_object = var_1_object; // 0x282 MovT
	var_263_object = var_0_bool; // 0x283 MovT
	func_4385(var_263_object); // 0x284 NEW_2
	
Label_646:
	var_264_int = 26748; // 0x286 PushI
	var_265_bool = var_40_int == var_264_int; // 0x287 Eq
	if(var_265_bool == 0) goto Label_664; // 0x288 JumpB
	var_266_object = Obj(); var_267_object = Obj(); // 0x289 PushV
	var_266_object = var_1_object; // 0x28a MovT
	var_267_object = var_0_bool; // 0x28b MovT
	func_4479(); // 0x28c NEW_2
	var_278_object = Obj(); var_279_object = Obj(); // 0x28e PushV
	var_278_object = var_1_object; // 0x28f MovT
	var_279_object = var_0_bool; // 0x290 MovT
	func_4523(var_279_object); // 0x291 NEW_2
	var_283_object = Obj(); var_284_object = Obj(); // 0x293 PushV
	var_283_object = var_1_object; // 0x294 MovT
	var_284_object = var_0_bool; // 0x295 MovT
	func_4543(); // 0x296 NEW_2
	
Label_664:
	var_285_int = 26746; // 0x298 PushI
	var_286_bool = var_40_int == var_285_int; // 0x299 Eq
	if(var_286_bool == 0) goto Label_677; // 0x29a JumpB
	var_287_object = Obj(); var_288_object = Obj(); // 0x29b PushV
	var_287_object = var_1_object; // 0x29c MovT
	var_288_object = var_0_bool; // 0x29d MovT
	func_4488(); // 0x29e NEW_2
	var_299_object = Obj(); var_300_object = Obj(); // 0x2a0 PushV
	var_299_object = var_1_object; // 0x2a1 MovT
	var_300_object = var_0_bool; // 0x2a2 MovT
	func_4556(var_300_object); // 0x2a3 NEW_2
	
Label_677:
	var_304_int = 26705; // 0x2a5 PushI
	var_305_bool = var_39_float == var_304_int; // 0x2a6 Eq
	if(var_305_bool == 0) goto Label_813; // 0x2a7 JumpB
	var_306_bool = 0; // 0x2a8 PushV
	var_306_bool = 0; // 0x2a9 MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x2aa PushV
	var_308_object = var_1_object; // 0x2ab MovT
	func_4597(var_308_object); // 0x2ac NEW_2
	if(var_307_bool == 0) goto Label_694; // 0x2ae JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x2af PushV
	var_316_object = var_1_object; // 0x2b0 MovT
	func_4585(var_316_object); // 0x2b1 NEW_2
	var_321_bool = var_315_bool == 0; // 0x2b3 Not
	if(var_321_bool == 0) goto Label_694; // 0x2b4 JumpB
	var_306_bool = 1; // 0x2b5 MovB
	
Label_694:
	if(var_306_bool == 0) goto Label_715; // 0x2b6 JumpB
	var_322_object = Obj(); var_323_object = Obj(); // 0x2b7 PushV
	var_322_object = var_1_object; // 0x2b8 MovT
	var_323_object = var_0_bool; // 0x2b9 MovT
	func_4415(); // 0x2ba NEW_2
	var_326_string = ""; // 0x2bc PushV
	var_326_string = "Neutral"; // 0x2bd MovS
	func_534(var_40_int, var_326_string); // 0x2be NEW_2
	var_343_int = 525337; // 0x2c0 PushI
	SetMessage(var_343_int); // 0x2c1 TObjFunc
	ClearReplies(); // 0x2c3 TObjFunc
	var_344_int = 525338; // 0x2c5 PushI
	var_345_int = 44250; // 0x2c6 PushI
	var_346_int = 26706; // 0x2c7 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x2c8 TObjFunc
	return 0; // 0x2ca Return
	
Label_715:
	var_347_string = ""; // 0x2cb PushV
	var_347_string = "Neutral"; // 0x2cc MovS
	func_534(var_40_int, var_347_string); // 0x2cd NEW_2
	var_348_int = 525237; // 0x2cf PushI
	SetMessage(var_348_int); // 0x2d0 TObjFunc
	ClearReplies(); // 0x2d2 TObjFunc
	var_349_bool = 0; var_350_object = Obj(); // 0x2d4 PushV
	var_350_object = var_1_object; // 0x2d5 MovT
	func_4585(var_350_object); // 0x2d6 NEW_2
	if(var_349_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_351_int = 525238; // 0x2d9 PushI
	var_352_int = 26607; // 0x2da PushI
	var_353_int = 26606; // 0x2db PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x2dc TObjFunc
	
Label_734:
	var_354_bool = 0; // 0x2de PushV
	var_354_bool = 0; // 0x2df MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x2e0 PushV
	var_356_object = var_1_object; // 0x2e1 MovT
	func_4609(var_356_object); // 0x2e2 NEW_2
	if(var_355_bool == 0) goto Label_747; // 0x2e4 JumpB
	var_361_bool = 0; var_362_object = Obj(); // 0x2e5 PushV
	var_362_object = var_1_object; // 0x2e6 MovT
	func_4643(var_362_object); // 0x2e7 NEW_2
	if(var_361_bool == 0) goto Label_747; // 0x2e9 JumpB
	var_354_bool = 1; // 0x2ea MovB
	
Label_747:
	if(var_354_bool == 0) goto Label_753; // 0x2eb JumpB
	var_367_int = 525372; // 0x2ec PushI
	var_368_int = 26741; // 0x2ed PushI
	var_369_int = 26740; // 0x2ee PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x2ef TObjFunc
	
Label_753:
	var_370_bool = 0; // 0x2f1 PushV
	var_370_bool = 0; // 0x2f2 MovB
	var_371_bool = 0; var_372_object = Obj(); // 0x2f3 PushV
	var_372_object = var_1_object; // 0x2f4 MovT
	func_4633(var_371_bool, var_372_object); // 0x2f5 NEW_2
	if(var_371_bool == 0) goto Label_766; // 0x2f7 JumpB
	var_383_bool = 0; var_384_object = Obj(); // 0x2f8 PushV
	var_384_object = var_1_object; // 0x2f9 MovT
	func_4655(var_384_object); // 0x2fa NEW_2
	if(var_383_bool == 0) goto Label_766; // 0x2fc JumpB
	var_370_bool = 1; // 0x2fd MovB
	
Label_766:
	if(var_370_bool == 0) goto Label_772; // 0x2fe JumpB
	var_389_int = 525369; // 0x2ff PushI
	var_390_int = 44309; // 0x300 PushI
	var_391_int = 26737; // 0x301 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x302 TObjFunc
	
Label_772:
	var_392_bool = 0; // 0x304 PushV
	var_392_bool = 0; // 0x305 MovB
	var_393_bool = 0; var_394_object = Obj(); // 0x306 PushV
	var_394_object = var_1_object; // 0x307 MovT
	func_4633(var_393_bool, var_394_object); // 0x308 NEW_2
	var_395_bool = var_393_bool == 0; // 0x30a Not
	if(var_395_bool == 0) goto Label_786; // 0x30b JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x30c PushV
	var_397_object = var_1_object; // 0x30d MovT
	func_4655(var_397_object); // 0x30e NEW_2
	if(var_396_bool == 0) goto Label_786; // 0x310 JumpB
	var_392_bool = 1; // 0x311 MovB
	
Label_786:
	if(var_392_bool == 0) goto Label_792; // 0x312 JumpB
	var_398_int = 525381; // 0x313 PushI
	var_399_int = 26750; // 0x314 PushI
	var_400_int = 26749; // 0x315 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x316 TObjFunc
	
Label_792:
	var_401_bool = 0; var_402_object = Obj(); // 0x318 PushV
	var_402_object = var_1_object; // 0x319 MovT
	func_4621(var_402_object); // 0x31a NEW_2
	if(var_401_bool == 0) goto Label_802; // 0x31c JumpB
	var_407_int = 525375; // 0x31d PushI
	var_408_int = 26744; // 0x31e PushI
	var_409_int = 26743; // 0x31f PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x320 TObjFunc
	
Label_802:
	var_410_int = 525243; // 0x322 PushI
	var_411_int = -1; // 0x323 PushI
	var_412_int = 26611; // 0x324 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x325 TObjFunc
	var_413_int = 529207; // 0x327 PushI
	var_414_int = -1; // 0x328 PushI
	var_415_int = 30658; // 0x329 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x32a TObjFunc
	return 0; // 0x32c Return
	
Label_813:
	var_416_int = 26744; // 0x32d PushI
	var_417_bool = var_39_float == var_416_int; // 0x32e Eq
	if(var_417_bool == 0) goto Label_831; // 0x32f JumpB
	var_418_string = ""; // 0x330 PushV
	var_418_string = "Untrust"; // 0x331 MovS
	func_534(var_40_int, var_418_string); // 0x332 NEW_2
	var_419_int = 525376; // 0x334 PushI
	SetMessage(var_419_int); // 0x335 TObjFunc
	ClearReplies(); // 0x337 TObjFunc
	var_420_int = 542113; // 0x339 PushI
	var_421_int = 44419; // 0x33a PushI
	var_422_int = 44418; // 0x33b PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_423_int = 44419; // 0x33f PushI
	var_424_bool = var_39_float == var_423_int; // 0x340 Eq
	if(var_424_bool == 0) goto Label_849; // 0x341 JumpB
	var_425_string = ""; // 0x342 PushV
	var_425_string = "Untrust"; // 0x343 MovS
	func_534(var_40_int, var_425_string); // 0x344 NEW_2
	var_426_int = 542114; // 0x346 PushI
	SetMessage(var_426_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_427_int = 542115; // 0x34b PushI
	var_428_int = 44421; // 0x34c PushI
	var_429_int = 44420; // 0x34d PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x34e TObjFunc
	return 0; // 0x350 Return
	
Label_849:
	var_430_int = 44421; // 0x351 PushI
	var_431_bool = var_39_float == var_430_int; // 0x352 Eq
	if(var_431_bool == 0) goto Label_872; // 0x353 JumpB
	var_432_string = ""; // 0x354 PushV
	var_432_string = "Untrust"; // 0x355 MovS
	func_534(var_40_int, var_432_string); // 0x356 NEW_2
	var_433_int = 542116; // 0x358 PushI
	SetMessage(var_433_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_434_int = 525377; // 0x35d PushI
	var_435_int = 26747; // 0x35e PushI
	var_436_int = 26745; // 0x35f PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x360 TObjFunc
	var_437_int = 542117; // 0x362 PushI
	var_438_int = 44423; // 0x363 PushI
	var_439_int = 44422; // 0x364 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_440_int = 44423; // 0x368 PushI
	var_441_bool = var_39_float == var_440_int; // 0x369 Eq
	if(var_441_bool == 0) goto Label_890; // 0x36a JumpB
	var_442_string = ""; // 0x36b PushV
	var_442_string = "Neutral"; // 0x36c MovS
	func_534(var_40_int, var_442_string); // 0x36d NEW_2
	var_443_int = 542118; // 0x36f PushI
	SetMessage(var_443_int); // 0x370 TObjFunc
	ClearReplies(); // 0x372 TObjFunc
	var_444_int = 525378; // 0x374 PushI
	var_445_int = -1; // 0x375 PushI
	var_446_int = 26746; // 0x376 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x377 TObjFunc
	return 0; // 0x379 Return
	
Label_890:
	var_447_int = 26747; // 0x37a PushI
	var_448_bool = var_39_float == var_447_int; // 0x37b Eq
	if(var_448_bool == 0) goto Label_908; // 0x37c JumpB
	var_449_string = ""; // 0x37d PushV
	var_449_string = "Sly"; // 0x37e MovS
	func_534(var_40_int, var_449_string); // 0x37f NEW_2
	var_450_int = 525379; // 0x381 PushI
	SetMessage(var_450_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_451_int = 525380; // 0x386 PushI
	var_452_int = -1; // 0x387 PushI
	var_453_int = 26748; // 0x388 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x389 TObjFunc
	return 0; // 0x38b Return
	
Label_908:
	var_454_int = 26750; // 0x38c PushI
	var_455_bool = var_39_float == var_454_int; // 0x38d Eq
	if(var_455_bool == 0) goto Label_926; // 0x38e JumpB
	var_456_string = ""; // 0x38f PushV
	var_456_string = "Fear"; // 0x390 MovS
	func_534(var_40_int, var_456_string); // 0x391 NEW_2
	var_457_int = 525382; // 0x393 PushI
	SetMessage(var_457_int); // 0x394 TObjFunc
	ClearReplies(); // 0x396 TObjFunc
	var_458_int = 525383; // 0x398 PushI
	var_459_int = -1; // 0x399 PushI
	var_460_int = 26751; // 0x39a PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x39b TObjFunc
	return 0; // 0x39d Return
	
Label_926:
	var_461_int = 44309; // 0x39e PushI
	var_462_bool = var_39_float == var_461_int; // 0x39f Eq
	if(var_462_bool == 0) goto Label_944; // 0x3a0 JumpB
	var_463_string = ""; // 0x3a1 PushV
	var_463_string = "Sly"; // 0x3a2 MovS
	func_534(var_40_int, var_463_string); // 0x3a3 NEW_2
	var_464_int = 542032; // 0x3a5 PushI
	SetMessage(var_464_int); // 0x3a6 TObjFunc
	ClearReplies(); // 0x3a8 TObjFunc
	var_465_int = 542033; // 0x3aa PushI
	var_466_int = 44311; // 0x3ab PushI
	var_467_int = 44310; // 0x3ac PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_468_int = 44311; // 0x3b0 PushI
	var_469_bool = var_39_float == var_468_int; // 0x3b1 Eq
	if(var_469_bool == 0) goto Label_967; // 0x3b2 JumpB
	var_470_string = ""; // 0x3b3 PushV
	var_470_string = "Untrust"; // 0x3b4 MovS
	func_534(var_40_int, var_470_string); // 0x3b5 NEW_2
	var_471_int = 542034; // 0x3b7 PushI
	SetMessage(var_471_int); // 0x3b8 TObjFunc
	ClearReplies(); // 0x3ba TObjFunc
	var_472_int = 542035; // 0x3bc PushI
	var_473_int = 44428; // 0x3bd PushI
	var_474_int = 44312; // 0x3be PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x3bf TObjFunc
	var_475_int = 542120; // 0x3c1 PushI
	var_476_int = 26738; // 0x3c2 PushI
	var_477_int = 44425; // 0x3c3 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_478_int = 44428; // 0x3c7 PushI
	var_479_bool = var_39_float == var_478_int; // 0x3c8 Eq
	if(var_479_bool == 0) goto Label_990; // 0x3c9 JumpB
	var_480_string = ""; // 0x3ca PushV
	var_480_string = "Neutral"; // 0x3cb MovS
	func_534(var_40_int, var_480_string); // 0x3cc NEW_2
	var_481_int = 542122; // 0x3ce PushI
	SetMessage(var_481_int); // 0x3cf TObjFunc
	ClearReplies(); // 0x3d1 TObjFunc
	var_482_int = 542123; // 0x3d3 PushI
	var_483_int = 44430; // 0x3d4 PushI
	var_484_int = 44429; // 0x3d5 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x3d6 TObjFunc
	var_485_int = 542126; // 0x3d8 PushI
	var_486_int = 26738; // 0x3d9 PushI
	var_487_int = 44432; // 0x3da PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_488_int = 44430; // 0x3de PushI
	var_489_bool = var_39_float == var_488_int; // 0x3df Eq
	if(var_489_bool == 0) goto Label_1008; // 0x3e0 JumpB
	var_490_string = ""; // 0x3e1 PushV
	var_490_string = "Neutral"; // 0x3e2 MovS
	func_534(var_40_int, var_490_string); // 0x3e3 NEW_2
	var_491_int = 542124; // 0x3e5 PushI
	SetMessage(var_491_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_492_int = 542125; // 0x3ea PushI
	var_493_int = 26738; // 0x3eb PushI
	var_494_int = 44431; // 0x3ec PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_495_int = 26738; // 0x3f0 PushI
	var_496_bool = var_39_float == var_495_int; // 0x3f1 Eq
	if(var_496_bool == 0) goto Label_1026; // 0x3f2 JumpB
	var_497_string = ""; // 0x3f3 PushV
	var_497_string = "Neutral"; // 0x3f4 MovS
	func_534(var_40_int, var_497_string); // 0x3f5 NEW_2
	var_498_int = 525370; // 0x3f7 PushI
	SetMessage(var_498_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_499_int = 525371; // 0x3fc PushI
	var_500_int = -1; // 0x3fd PushI
	var_501_int = 26739; // 0x3fe PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_502_int = 26741; // 0x402 PushI
	var_503_bool = var_39_float == var_502_int; // 0x403 Eq
	if(var_503_bool == 0) goto Label_1044; // 0x404 JumpB
	var_504_string = ""; // 0x405 PushV
	var_504_string = "Fear"; // 0x406 MovS
	func_534(var_40_int, var_504_string); // 0x407 NEW_2
	var_505_int = 525373; // 0x409 PushI
	SetMessage(var_505_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_506_int = 525374; // 0x40e PushI
	var_507_int = 44313; // 0x40f PushI
	var_508_int = 26742; // 0x410 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_509_int = 44313; // 0x414 PushI
	var_510_bool = var_39_float == var_509_int; // 0x415 Eq
	if(var_510_bool == 0) goto Label_1062; // 0x416 JumpB
	var_511_string = ""; // 0x417 PushV
	var_511_string = "Untrust"; // 0x418 MovS
	func_534(var_40_int, var_511_string); // 0x419 NEW_2
	var_512_int = 542036; // 0x41b PushI
	SetMessage(var_512_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_513_int = 542119; // 0x420 PushI
	var_514_int = -1; // 0x421 PushI
	var_515_int = 44424; // 0x422 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x423 TObjFunc
	return 0; // 0x425 Return
	
Label_1062:
	var_516_int = 26607; // 0x426 PushI
	var_517_bool = var_39_float == var_516_int; // 0x427 Eq
	if(var_517_bool == 0) goto Label_1085; // 0x428 JumpB
	var_518_string = ""; // 0x429 PushV
	var_518_string = "Neutral"; // 0x42a MovS
	func_534(var_40_int, var_518_string); // 0x42b NEW_2
	var_519_int = 525239; // 0x42d PushI
	SetMessage(var_519_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_520_int = 529208; // 0x432 PushI
	var_521_int = 44301; // 0x433 PushI
	var_522_int = 30659; // 0x434 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x435 TObjFunc
	var_523_int = 529212; // 0x437 PushI
	var_524_int = 44453; // 0x438 PushI
	var_525_int = 30663; // 0x439 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_526_int = 44453; // 0x43d PushI
	var_527_bool = var_39_float == var_526_int; // 0x43e Eq
	if(var_527_bool == 0) goto Label_1103; // 0x43f JumpB
	var_528_string = ""; // 0x440 PushV
	var_528_string = "Rage"; // 0x441 MovS
	func_534(var_40_int, var_528_string); // 0x442 NEW_2
	var_529_int = 542140; // 0x444 PushI
	SetMessage(var_529_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_530_int = 542141; // 0x449 PushI
	var_531_int = 44458; // 0x44a PushI
	var_532_int = 44454; // 0x44b PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x44c TObjFunc
	return 0; // 0x44e Return
	
Label_1103:
	var_533_int = 44458; // 0x44f PushI
	var_534_bool = var_39_float == var_533_int; // 0x450 Eq
	if(var_534_bool == 0) goto Label_1121; // 0x451 JumpB
	var_535_string = ""; // 0x452 PushV
	var_535_string = "Rage"; // 0x453 MovS
	func_534(var_40_int, var_535_string); // 0x454 NEW_2
	var_536_int = 542145; // 0x456 PushI
	SetMessage(var_536_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_537_int = 542146; // 0x45b PushI
	var_538_int = 30660; // 0x45c PushI
	var_539_int = 44459; // 0x45d PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_540_int = 44301; // 0x461 PushI
	var_541_bool = var_39_float == var_540_int; // 0x462 Eq
	if(var_541_bool == 0) goto Label_1144; // 0x463 JumpB
	var_542_string = ""; // 0x464 PushV
	var_542_string = "Untrust"; // 0x465 MovS
	func_534(var_40_int, var_542_string); // 0x466 NEW_2
	var_543_int = 542024; // 0x468 PushI
	SetMessage(var_543_int); // 0x469 TObjFunc
	ClearReplies(); // 0x46b TObjFunc
	var_544_int = 542025; // 0x46d PushI
	var_545_int = 30660; // 0x46e PushI
	var_546_int = 44302; // 0x46f PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x470 TObjFunc
	var_547_int = 542143; // 0x472 PushI
	var_548_int = 44457; // 0x473 PushI
	var_549_int = 44456; // 0x474 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x475 TObjFunc
	return 0; // 0x477 Return
	
Label_1144:
	var_550_int = 44457; // 0x478 PushI
	var_551_bool = var_39_float == var_550_int; // 0x479 Eq
	if(var_551_bool == 0) goto Label_1162; // 0x47a JumpB
	var_552_string = ""; // 0x47b PushV
	var_552_string = "Neutral"; // 0x47c MovS
	func_534(var_40_int, var_552_string); // 0x47d NEW_2
	var_553_int = 542144; // 0x47f PushI
	SetMessage(var_553_int); // 0x480 TObjFunc
	ClearReplies(); // 0x482 TObjFunc
	var_554_int = 542147; // 0x484 PushI
	var_555_int = 30660; // 0x485 PushI
	var_556_int = 44462; // 0x486 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_557_int = 30660; // 0x48a PushI
	var_558_bool = var_39_float == var_557_int; // 0x48b Eq
	if(var_558_bool == 0) goto Label_1180; // 0x48c JumpB
	var_559_string = ""; // 0x48d PushV
	var_559_string = "Fear"; // 0x48e MovS
	func_534(var_40_int, var_559_string); // 0x48f NEW_2
	var_560_int = 529209; // 0x491 PushI
	SetMessage(var_560_int); // 0x492 TObjFunc
	ClearReplies(); // 0x494 TObjFunc
	var_561_int = 529210; // 0x496 PushI
	var_562_int = 30662; // 0x497 PushI
	var_563_int = 30661; // 0x498 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x499 TObjFunc
	return 0; // 0x49b Return
	
Label_1180:
	var_564_int = 30662; // 0x49c PushI
	var_565_bool = var_39_float == var_564_int; // 0x49d Eq
	if(var_565_bool == 0) goto Label_1203; // 0x49e JumpB
	var_566_string = ""; // 0x49f PushV
	var_566_string = "Sly"; // 0x4a0 MovS
	func_534(var_40_int, var_566_string); // 0x4a1 NEW_2
	var_567_int = 529211; // 0x4a3 PushI
	SetMessage(var_567_int); // 0x4a4 TObjFunc
	ClearReplies(); // 0x4a6 TObjFunc
	var_568_int = 525240; // 0x4a8 PushI
	var_569_int = 26609; // 0x4a9 PushI
	var_570_int = 26608; // 0x4aa PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x4ab TObjFunc
	var_571_int = 542150; // 0x4ad PushI
	var_572_int = 44466; // 0x4ae PushI
	var_573_int = 44465; // 0x4af PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x4b0 TObjFunc
	return 0; // 0x4b2 Return
	
Label_1203:
	var_574_int = 44466; // 0x4b3 PushI
	var_575_bool = var_39_float == var_574_int; // 0x4b4 Eq
	if(var_575_bool == 0) goto Label_1221; // 0x4b5 JumpB
	var_576_string = ""; // 0x4b6 PushV
	var_576_string = "Neutral"; // 0x4b7 MovS
	func_534(var_40_int, var_576_string); // 0x4b8 NEW_2
	var_577_int = 542151; // 0x4ba PushI
	SetMessage(var_577_int); // 0x4bb TObjFunc
	ClearReplies(); // 0x4bd TObjFunc
	var_578_int = 542152; // 0x4bf PushI
	var_579_int = 44468; // 0x4c0 PushI
	var_580_int = 44467; // 0x4c1 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x4c2 TObjFunc
	return 0; // 0x4c4 Return
	
Label_1221:
	var_581_int = 44468; // 0x4c5 PushI
	var_582_bool = var_39_float == var_581_int; // 0x4c6 Eq
	if(var_582_bool == 0) goto Label_1239; // 0x4c7 JumpB
	var_583_string = ""; // 0x4c8 PushV
	var_583_string = "Neutral"; // 0x4c9 MovS
	func_534(var_40_int, var_583_string); // 0x4ca NEW_2
	var_584_int = 542153; // 0x4cc PushI
	SetMessage(var_584_int); // 0x4cd TObjFunc
	ClearReplies(); // 0x4cf TObjFunc
	var_585_int = 542154; // 0x4d1 PushI
	var_586_int = 26609; // 0x4d2 PushI
	var_587_int = 44469; // 0x4d3 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x4d4 TObjFunc
	return 0; // 0x4d6 Return
	
Label_1239:
	var_588_int = 26609; // 0x4d7 PushI
	var_589_bool = var_39_float == var_588_int; // 0x4d8 Eq
	if(var_589_bool == 0) goto Label_1257; // 0x4d9 JumpB
	var_590_string = ""; // 0x4da PushV
	var_590_string = "Sly"; // 0x4db MovS
	func_534(var_40_int, var_590_string); // 0x4dc NEW_2
	var_591_int = 525241; // 0x4de PushI
	SetMessage(var_591_int); // 0x4df TObjFunc
	ClearReplies(); // 0x4e1 TObjFunc
	var_592_int = 542022; // 0x4e3 PushI
	var_593_int = 44300; // 0x4e4 PushI
	var_594_int = 44299; // 0x4e5 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x4e6 TObjFunc
	return 0; // 0x4e8 Return
	
Label_1257:
	var_595_int = 44300; // 0x4e9 PushI
	var_596_bool = var_39_float == var_595_int; // 0x4ea Eq
	if(var_596_bool == 0) goto Label_1275; // 0x4eb JumpB
	var_597_string = ""; // 0x4ec PushV
	var_597_string = "Untrust"; // 0x4ed MovS
	func_534(var_40_int, var_597_string); // 0x4ee NEW_2
	var_598_int = 542023; // 0x4f0 PushI
	SetMessage(var_598_int); // 0x4f1 TObjFunc
	ClearReplies(); // 0x4f3 TObjFunc
	var_599_int = 542155; // 0x4f5 PushI
	var_600_int = 44472; // 0x4f6 PushI
	var_601_int = 44471; // 0x4f7 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x4f8 TObjFunc
	return 0; // 0x4fa Return
	
Label_1275:
	var_602_int = 44472; // 0x4fb PushI
	var_603_bool = var_39_float == var_602_int; // 0x4fc Eq
	if(var_603_bool == 0) goto Label_1298; // 0x4fd JumpB
	var_604_string = ""; // 0x4fe PushV
	var_604_string = "Neutral"; // 0x4ff MovS
	func_534(var_40_int, var_604_string); // 0x500 NEW_2
	var_605_int = 542156; // 0x502 PushI
	SetMessage(var_605_int); // 0x503 TObjFunc
	ClearReplies(); // 0x505 TObjFunc
	var_606_int = 525242; // 0x507 PushI
	var_607_int = -1; // 0x508 PushI
	var_608_int = 26610; // 0x509 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x50a TObjFunc
	var_609_int = 542157; // 0x50c PushI
	var_610_int = -1; // 0x50d PushI
	var_611_int = 44473; // 0x50e PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x50f TObjFunc
	return 0; // 0x511 Return
	
Label_1298:
	var_612_int = 44260; // 0x512 PushI
	var_613_bool = var_39_float == var_612_int; // 0x513 Eq
	if(var_613_bool == 0) goto Label_1301; // 0x514 JumpB
	
Label_1301:
	var_614_int = 44263; // 0x515 PushI
	var_615_bool = var_39_float == var_614_int; // 0x516 Eq
	if(var_615_bool == 0) goto Label_1319; // 0x517 JumpB
	var_616_string = ""; // 0x518 PushV
	var_616_string = "Sly"; // 0x519 MovS
	func_534(var_40_int, var_616_string); // 0x51a NEW_2
	var_617_int = 541996; // 0x51c PushI
	SetMessage(var_617_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_618_int = 541997; // 0x521 PushI
	var_619_int = 44250; // 0x522 PushI
	var_620_int = 44264; // 0x523 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x524 TObjFunc
	return 0; // 0x526 Return
	
Label_1319:
	var_621_int = 44250; // 0x527 PushI
	var_622_bool = var_39_float == var_621_int; // 0x528 Eq
	if(var_622_bool == 0) goto Label_1342; // 0x529 JumpB
	var_623_string = ""; // 0x52a PushV
	var_623_string = "Untrust"; // 0x52b MovS
	func_534(var_40_int, var_623_string); // 0x52c NEW_2
	var_624_int = 541985; // 0x52e PushI
	SetMessage(var_624_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_625_int = 541986; // 0x533 PushI
	var_626_int = 26707; // 0x534 PushI
	var_627_int = 44251; // 0x535 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x536 TObjFunc
	var_628_int = 541998; // 0x538 PushI
	var_629_int = 44252; // 0x539 PushI
	var_630_int = 44266; // 0x53a PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x53b TObjFunc
	return 0; // 0x53d Return
	
Label_1342:
	var_631_int = 44252; // 0x53e PushI
	var_632_bool = var_39_float == var_631_int; // 0x53f Eq
	if(var_632_bool == 0) goto Label_1365; // 0x540 JumpB
	var_633_string = ""; // 0x541 PushV
	var_633_string = "Neutral"; // 0x542 MovS
	func_534(var_40_int, var_633_string); // 0x543 NEW_2
	var_634_int = 541987; // 0x545 PushI
	SetMessage(var_634_int); // 0x546 TObjFunc
	ClearReplies(); // 0x548 TObjFunc
	var_635_int = 541988; // 0x54a PushI
	var_636_int = 44268; // 0x54b PushI
	var_637_int = 44253; // 0x54c PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x54d TObjFunc
	var_638_int = 542001; // 0x54f PushI
	var_639_int = 26707; // 0x550 PushI
	var_640_int = 44270; // 0x551 PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x552 TObjFunc
	return 0; // 0x554 Return
	
Label_1365:
	var_641_int = 26707; // 0x555 PushI
	var_642_bool = var_39_float == var_641_int; // 0x556 Eq
	if(var_642_bool == 0) goto Label_1388; // 0x557 JumpB
	var_643_string = ""; // 0x558 PushV
	var_643_string = "Untrust"; // 0x559 MovS
	func_534(var_40_int, var_643_string); // 0x55a NEW_2
	var_644_int = 525339; // 0x55c PushI
	SetMessage(var_644_int); // 0x55d TObjFunc
	ClearReplies(); // 0x55f TObjFunc
	var_645_int = 541989; // 0x561 PushI
	var_646_int = 44268; // 0x562 PushI
	var_647_int = 44254; // 0x563 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x564 TObjFunc
	var_648_int = 542002; // 0x566 PushI
	var_649_int = 44273; // 0x567 PushI
	var_650_int = 44272; // 0x568 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x569 TObjFunc
	return 0; // 0x56b Return
	
Label_1388:
	var_651_int = 44273; // 0x56c PushI
	var_652_bool = var_39_float == var_651_int; // 0x56d Eq
	if(var_652_bool == 0) goto Label_1411; // 0x56e JumpB
	var_653_string = ""; // 0x56f PushV
	var_653_string = "Neutral"; // 0x570 MovS
	func_534(var_40_int, var_653_string); // 0x571 NEW_2
	var_654_int = 542003; // 0x573 PushI
	SetMessage(var_654_int); // 0x574 TObjFunc
	ClearReplies(); // 0x576 TObjFunc
	var_655_int = 542004; // 0x578 PushI
	var_656_int = 44268; // 0x579 PushI
	var_657_int = 44274; // 0x57a PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0x57b TObjFunc
	var_658_int = 542005; // 0x57d PushI
	var_659_int = 44276; // 0x57e PushI
	var_660_int = 44275; // 0x57f PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x580 TObjFunc
	return 0; // 0x582 Return
	
Label_1411:
	var_661_int = 44276; // 0x583 PushI
	var_662_bool = var_39_float == var_661_int; // 0x584 Eq
	if(var_662_bool == 0) goto Label_1434; // 0x585 JumpB
	var_663_string = ""; // 0x586 PushV
	var_663_string = "Untrust"; // 0x587 MovS
	func_534(var_40_int, var_663_string); // 0x588 NEW_2
	var_664_int = 542006; // 0x58a PushI
	SetMessage(var_664_int); // 0x58b TObjFunc
	ClearReplies(); // 0x58d TObjFunc
	var_665_int = 542007; // 0x58f PushI
	var_666_int = -1; // 0x590 PushI
	var_667_int = 44277; // 0x591 PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0x592 TObjFunc
	var_668_int = 542008; // 0x594 PushI
	var_669_int = 44255; // 0x595 PushI
	var_670_int = 44278; // 0x596 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x597 TObjFunc
	return 0; // 0x599 Return
	
Label_1434:
	var_671_int = 44268; // 0x59a PushI
	var_672_bool = var_39_float == var_671_int; // 0x59b Eq
	if(var_672_bool == 0) goto Label_1457; // 0x59c JumpB
	var_673_string = ""; // 0x59d PushV
	var_673_string = "Sly"; // 0x59e MovS
	func_534(var_40_int, var_673_string); // 0x59f NEW_2
	var_674_int = 541999; // 0x5a1 PushI
	SetMessage(var_674_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_675_int = 542000; // 0x5a6 PushI
	var_676_int = 44255; // 0x5a7 PushI
	var_677_int = 44269; // 0x5a8 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x5a9 TObjFunc
	var_678_int = 542009; // 0x5ab PushI
	var_679_int = 44286; // 0x5ac PushI
	var_680_int = 44281; // 0x5ad PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x5ae TObjFunc
	return 0; // 0x5b0 Return
	
Label_1457:
	var_681_int = 44255; // 0x5b1 PushI
	var_682_bool = var_39_float == var_681_int; // 0x5b2 Eq
	if(var_682_bool == 0) goto Label_1480; // 0x5b3 JumpB
	var_683_string = ""; // 0x5b4 PushV
	var_683_string = "Sly"; // 0x5b5 MovS
	func_534(var_40_int, var_683_string); // 0x5b6 NEW_2
	var_684_int = 541990; // 0x5b8 PushI
	SetMessage(var_684_int); // 0x5b9 TObjFunc
	ClearReplies(); // 0x5bb TObjFunc
	var_685_int = 542010; // 0x5bd PushI
	var_686_int = 44284; // 0x5be PushI
	var_687_int = 44283; // 0x5bf PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x5c0 TObjFunc
	var_688_int = 542012; // 0x5c2 PushI
	var_689_int = 44286; // 0x5c3 PushI
	var_690_int = 44285; // 0x5c4 PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x5c5 TObjFunc
	return 0; // 0x5c7 Return
	
Label_1480:
	var_691_int = 44286; // 0x5c8 PushI
	var_692_bool = var_39_float == var_691_int; // 0x5c9 Eq
	if(var_692_bool == 0) goto Label_1503; // 0x5ca JumpB
	var_693_string = ""; // 0x5cb PushV
	var_693_string = "Rage"; // 0x5cc MovS
	func_534(var_40_int, var_693_string); // 0x5cd NEW_2
	var_694_int = 542013; // 0x5cf PushI
	SetMessage(var_694_int); // 0x5d0 TObjFunc
	ClearReplies(); // 0x5d2 TObjFunc
	var_695_int = 542015; // 0x5d4 PushI
	var_696_int = -1; // 0x5d5 PushI
	var_697_int = 44290; // 0x5d6 PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x5d7 TObjFunc
	var_698_int = 542014; // 0x5d9 PushI
	var_699_int = 44284; // 0x5da PushI
	var_700_int = 44289; // 0x5db PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x5dc TObjFunc
	return 0; // 0x5de Return
	
Label_1503:
	var_701_int = 44284; // 0x5df PushI
	var_702_bool = var_39_float == var_701_int; // 0x5e0 Eq
	if(var_702_bool == 0) goto Label_1526; // 0x5e1 JumpB
	var_703_string = ""; // 0x5e2 PushV
	var_703_string = "Sly"; // 0x5e3 MovS
	func_534(var_40_int, var_703_string); // 0x5e4 NEW_2
	var_704_int = 542011; // 0x5e6 PushI
	SetMessage(var_704_int); // 0x5e7 TObjFunc
	ClearReplies(); // 0x5e9 TObjFunc
	var_705_int = 541991; // 0x5eb PushI
	var_706_int = 44257; // 0x5ec PushI
	var_707_int = 44256; // 0x5ed PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x5ee TObjFunc
	var_708_int = 542016; // 0x5f0 PushI
	var_709_int = 44293; // 0x5f1 PushI
	var_710_int = 44292; // 0x5f2 PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0x5f3 TObjFunc
	return 0; // 0x5f5 Return
	
Label_1526:
	var_711_int = 44293; // 0x5f6 PushI
	var_712_bool = var_39_float == var_711_int; // 0x5f7 Eq
	if(var_712_bool == 0) goto Label_1549; // 0x5f8 JumpB
	var_713_string = ""; // 0x5f9 PushV
	var_713_string = "Rage"; // 0x5fa MovS
	func_534(var_40_int, var_713_string); // 0x5fb NEW_2
	var_714_int = 542017; // 0x5fd PushI
	SetMessage(var_714_int); // 0x5fe TObjFunc
	ClearReplies(); // 0x600 TObjFunc
	var_715_int = 542018; // 0x602 PushI
	var_716_int = 44297; // 0x603 PushI
	var_717_int = 44294; // 0x604 PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x605 TObjFunc
	var_718_int = 542019; // 0x607 PushI
	var_719_int = 44257; // 0x608 PushI
	var_720_int = 44295; // 0x609 PushI
	AddReply(var_718_int, var_719_int, var_720_int); // 0x60a TObjFunc
	return 0; // 0x60c Return
	
Label_1549:
	var_721_int = 44297; // 0x60d PushI
	var_722_bool = var_39_float == var_721_int; // 0x60e Eq
	if(var_722_bool == 0) goto Label_1567; // 0x60f JumpB
	var_723_string = ""; // 0x610 PushV
	var_723_string = "Sly"; // 0x611 MovS
	func_534(var_40_int, var_723_string); // 0x612 NEW_2
	var_724_int = 542020; // 0x614 PushI
	SetMessage(var_724_int); // 0x615 TObjFunc
	ClearReplies(); // 0x617 TObjFunc
	var_725_int = 542021; // 0x619 PushI
	var_726_int = 44257; // 0x61a PushI
	var_727_int = 44298; // 0x61b PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x61c TObjFunc
	return 0; // 0x61e Return
	
Label_1567:
	var_728_int = 44257; // 0x61f PushI
	var_729_bool = var_39_float == var_728_int; // 0x620 Eq
	if(var_729_bool == 0) goto Label_1590; // 0x621 JumpB
	var_730_string = ""; // 0x622 PushV
	var_730_string = "Neutral"; // 0x623 MovS
	func_534(var_40_int, var_730_string); // 0x624 NEW_2
	var_731_int = 541992; // 0x626 PushI
	SetMessage(var_731_int); // 0x627 TObjFunc
	ClearReplies(); // 0x629 TObjFunc
	var_732_int = 525340; // 0x62b PushI
	var_733_int = -1; // 0x62c PushI
	var_734_int = 26708; // 0x62d PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x62e TObjFunc
	var_735_int = 525341; // 0x630 PushI
	var_736_int = -1; // 0x631 PushI
	var_737_int = 26709; // 0x632 PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0x633 TObjFunc
	return 0; // 0x635 Return
	
Label_1590:
	var_3_object = 1; // 0x636 TMovB
	var_738_bool = 0; // 0x637 PushV
	func_4383(var_738_bool); // 0x638 NEW_2
	if(var_738_bool == 0) goto Label_1598; // 0x63a JumpB
	lshStopAnimation(); // 0x63b Func
	goto Label_1600; // 0x63d Jump
	
Label_1600:
	return 0; // 0x640 Return
	
Label_1598:
	StopAnimation(); // 0x63e Func
	
Label_1602:
	return 0; // 0x642 Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x6f3 PushI
	if(var_41_int == 0) goto Label_2092; // 0x6f4 JumpB
	func_4184(); // 0x6f6 NEW_2
	var_43_int = 26783; // 0x6f8 PushI
	var_44_bool = var_40_int == var_43_int; // 0x6f9 Eq
	if(var_44_bool == 0) goto Label_1792; // 0x6fa JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x6fb PushV
	var_45_object = var_1_object; // 0x6fc MovT
	var_46_object = var_0_bool; // 0x6fd MovT
	func_4497(); // 0x6fe NEW_2
	
Label_1792:
	var_49_int = 26782; // 0x700 PushI
	var_50_bool = var_39_float == var_49_int; // 0x701 Eq
	if(var_50_bool == 0) goto Label_1829; // 0x702 JumpB
	var_51_string = ""; // 0x703 PushV
	var_51_string = "Neutral"; // 0x704 MovS
	func_1756(var_40_int, var_51_string); // 0x705 NEW_2
	var_68_int = 525414; // 0x707 PushI
	SetMessage(var_68_int); // 0x708 TObjFunc
	ClearReplies(); // 0x70a TObjFunc
	var_69_bool = 0; // 0x70c PushV
	var_69_bool = 0; // 0x70d MovB
	var_70_bool = 0; var_71_object = Obj(); // 0x70e PushV
	var_71_object = var_1_object; // 0x70f MovT
	func_4667(var_71_object); // 0x710 NEW_2
	if(var_70_bool == 0) goto Label_1817; // 0x712 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x713 PushV
	var_79_object = var_1_object; // 0x714 MovT
	func_4679(var_79_object); // 0x715 NEW_2
	if(var_78_bool == 0) goto Label_1817; // 0x717 JumpB
	var_69_bool = 1; // 0x718 MovB
	
Label_1817:
	if(var_69_bool == 0) goto Label_1823; // 0x719 JumpB
	var_84_int = 525415; // 0x71a PushI
	var_85_int = 42567; // 0x71b PushI
	var_86_int = 26783; // 0x71c PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x71d TObjFunc
	
Label_1823:
	var_87_int = 525418; // 0x71f PushI
	var_88_int = -1; // 0x720 PushI
	var_89_int = 26786; // 0x721 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x722 TObjFunc
	return 0; // 0x724 Return
	
Label_1829:
	var_90_int = 42567; // 0x725 PushI
	var_91_bool = var_39_float == var_90_int; // 0x726 Eq
	if(var_91_bool == 0) goto Label_1852; // 0x727 JumpB
	var_92_string = ""; // 0x728 PushV
	var_92_string = "Untrust"; // 0x729 MovS
	func_1756(var_40_int, var_92_string); // 0x72a NEW_2
	var_93_int = 540558; // 0x72c PushI
	SetMessage(var_93_int); // 0x72d TObjFunc
	ClearReplies(); // 0x72f TObjFunc
	var_94_int = 540559; // 0x731 PushI
	var_95_int = 26784; // 0x732 PushI
	var_96_int = 42568; // 0x733 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x734 TObjFunc
	var_97_int = 540560; // 0x736 PushI
	var_98_int = 40922; // 0x737 PushI
	var_99_int = 42569; // 0x738 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x739 TObjFunc
	return 0; // 0x73b Return
	
Label_1852:
	var_100_int = 26784; // 0x73c PushI
	var_101_bool = var_39_float == var_100_int; // 0x73d Eq
	if(var_101_bool == 0) goto Label_1875; // 0x73e JumpB
	var_102_string = ""; // 0x73f PushV
	var_102_string = "Untrust"; // 0x740 MovS
	func_1756(var_40_int, var_102_string); // 0x741 NEW_2
	var_103_int = 525416; // 0x743 PushI
	SetMessage(var_103_int); // 0x744 TObjFunc
	ClearReplies(); // 0x746 TObjFunc
	var_104_int = 525417; // 0x748 PushI
	var_105_int = 40922; // 0x749 PushI
	var_106_int = 26785; // 0x74a PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x74b TObjFunc
	var_107_int = 540561; // 0x74d PushI
	var_108_int = 40924; // 0x74e PushI
	var_109_int = 42571; // 0x74f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x750 TObjFunc
	return 0; // 0x752 Return
	
Label_1875:
	var_110_int = 40922; // 0x753 PushI
	var_111_bool = var_39_float == var_110_int; // 0x754 Eq
	if(var_111_bool == 0) goto Label_1893; // 0x755 JumpB
	var_112_string = ""; // 0x756 PushV
	var_112_string = "Fear"; // 0x757 MovS
	func_1756(var_40_int, var_112_string); // 0x758 NEW_2
	var_113_int = 538982; // 0x75a PushI
	SetMessage(var_113_int); // 0x75b TObjFunc
	ClearReplies(); // 0x75d TObjFunc
	var_114_int = 538983; // 0x75f PushI
	var_115_int = 40924; // 0x760 PushI
	var_116_int = 40923; // 0x761 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x762 TObjFunc
	return 0; // 0x764 Return
	
Label_1893:
	var_117_int = 40924; // 0x765 PushI
	var_118_bool = var_39_float == var_117_int; // 0x766 Eq
	if(var_118_bool == 0) goto Label_1916; // 0x767 JumpB
	var_119_string = ""; // 0x768 PushV
	var_119_string = "Neutral"; // 0x769 MovS
	func_1756(var_40_int, var_119_string); // 0x76a NEW_2
	var_120_int = 538984; // 0x76c PushI
	SetMessage(var_120_int); // 0x76d TObjFunc
	ClearReplies(); // 0x76f TObjFunc
	var_121_int = 538985; // 0x771 PushI
	var_122_int = 40926; // 0x772 PushI
	var_123_int = 40925; // 0x773 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x774 TObjFunc
	var_124_int = 538988; // 0x776 PushI
	var_125_int = 40929; // 0x777 PushI
	var_126_int = 40928; // 0x778 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x779 TObjFunc
	return 0; // 0x77b Return
	
Label_1916:
	var_127_int = 40929; // 0x77c PushI
	var_128_bool = var_39_float == var_127_int; // 0x77d Eq
	if(var_128_bool == 0) goto Label_1939; // 0x77e JumpB
	var_129_string = ""; // 0x77f PushV
	var_129_string = "Untrust"; // 0x780 MovS
	func_1756(var_40_int, var_129_string); // 0x781 NEW_2
	var_130_int = 538989; // 0x783 PushI
	SetMessage(var_130_int); // 0x784 TObjFunc
	ClearReplies(); // 0x786 TObjFunc
	var_131_int = 540565; // 0x788 PushI
	var_132_int = 42578; // 0x789 PushI
	var_133_int = 42577; // 0x78a PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x78b TObjFunc
	var_134_int = 538990; // 0x78d PushI
	var_135_int = 40931; // 0x78e PushI
	var_136_int = 40930; // 0x78f PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_137_int = 40931; // 0x793 PushI
	var_138_bool = var_39_float == var_137_int; // 0x794 Eq
	if(var_138_bool == 0) goto Label_1962; // 0x795 JumpB
	var_139_string = ""; // 0x796 PushV
	var_139_string = "Fear"; // 0x797 MovS
	func_1756(var_40_int, var_139_string); // 0x798 NEW_2
	var_140_int = 538991; // 0x79a PushI
	SetMessage(var_140_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_141_int = 538992; // 0x79f PushI
	var_142_int = -1; // 0x7a0 PushI
	var_143_int = 40932; // 0x7a1 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7a2 TObjFunc
	var_144_int = 540575; // 0x7a4 PushI
	var_145_int = -1; // 0x7a5 PushI
	var_146_int = 42589; // 0x7a6 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7a7 TObjFunc
	return 0; // 0x7a9 Return
	
Label_1962:
	var_147_int = 40926; // 0x7aa PushI
	var_148_bool = var_39_float == var_147_int; // 0x7ab Eq
	if(var_148_bool == 0) goto Label_1980; // 0x7ac JumpB
	var_149_string = ""; // 0x7ad PushV
	var_149_string = "Untrust"; // 0x7ae MovS
	func_1756(var_40_int, var_149_string); // 0x7af NEW_2
	var_150_int = 538986; // 0x7b1 PushI
	SetMessage(var_150_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_151_int = 538987; // 0x7b6 PushI
	var_152_int = 42573; // 0x7b7 PushI
	var_153_int = 40927; // 0x7b8 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7b9 TObjFunc
	return 0; // 0x7bb Return
	
Label_1980:
	var_154_int = 42573; // 0x7bc PushI
	var_155_bool = var_39_float == var_154_int; // 0x7bd Eq
	if(var_155_bool == 0) goto Label_2003; // 0x7be JumpB
	var_156_string = ""; // 0x7bf PushV
	var_156_string = "Rage"; // 0x7c0 MovS
	func_1756(var_40_int, var_156_string); // 0x7c1 NEW_2
	var_157_int = 540562; // 0x7c3 PushI
	SetMessage(var_157_int); // 0x7c4 TObjFunc
	ClearReplies(); // 0x7c6 TObjFunc
	var_158_int = 540563; // 0x7c8 PushI
	var_159_int = 40929; // 0x7c9 PushI
	var_160_int = 42574; // 0x7ca PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x7cb TObjFunc
	var_161_int = 540564; // 0x7cd PushI
	var_162_int = 42578; // 0x7ce PushI
	var_163_int = 42576; // 0x7cf PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x7d0 TObjFunc
	return 0; // 0x7d2 Return
	
Label_2003:
	var_164_int = 42578; // 0x7d3 PushI
	var_165_bool = var_39_float == var_164_int; // 0x7d4 Eq
	if(var_165_bool == 0) goto Label_2021; // 0x7d5 JumpB
	var_166_string = ""; // 0x7d6 PushV
	var_166_string = "Rage"; // 0x7d7 MovS
	func_1756(var_40_int, var_166_string); // 0x7d8 NEW_2
	var_167_int = 540566; // 0x7da PushI
	SetMessage(var_167_int); // 0x7db TObjFunc
	ClearReplies(); // 0x7dd TObjFunc
	var_168_int = 540592; // 0x7df PushI
	var_169_int = 42607; // 0x7e0 PushI
	var_170_int = 42606; // 0x7e1 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x7e2 TObjFunc
	return 0; // 0x7e4 Return
	
Label_2021:
	var_171_int = 42607; // 0x7e5 PushI
	var_172_bool = var_39_float == var_171_int; // 0x7e6 Eq
	if(var_172_bool == 0) goto Label_2044; // 0x7e7 JumpB
	var_173_string = ""; // 0x7e8 PushV
	var_173_string = "Rage"; // 0x7e9 MovS
	func_1756(var_40_int, var_173_string); // 0x7ea NEW_2
	var_174_int = 540593; // 0x7ec PushI
	SetMessage(var_174_int); // 0x7ed TObjFunc
	ClearReplies(); // 0x7ef TObjFunc
	var_175_int = 540594; // 0x7f1 PushI
	var_176_int = 42609; // 0x7f2 PushI
	var_177_int = 42608; // 0x7f3 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x7f4 TObjFunc
	var_178_int = 540601; // 0x7f6 PushI
	var_179_int = -1; // 0x7f7 PushI
	var_180_int = 42615; // 0x7f8 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x7f9 TObjFunc
	return 0; // 0x7fb Return
	
Label_2044:
	var_181_int = 42609; // 0x7fc PushI
	var_182_bool = var_39_float == var_181_int; // 0x7fd Eq
	if(var_182_bool == 0) goto Label_2062; // 0x7fe JumpB
	var_183_string = ""; // 0x7ff PushV
	var_183_string = "Neutral"; // 0x800 MovS
	func_1756(var_40_int, var_183_string); // 0x801 NEW_2
	var_184_int = 540595; // 0x803 PushI
	SetMessage(var_184_int); // 0x804 TObjFunc
	ClearReplies(); // 0x806 TObjFunc
	var_185_int = 540596; // 0x808 PushI
	var_186_int = 42611; // 0x809 PushI
	var_187_int = 42610; // 0x80a PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x80b TObjFunc
	return 0; // 0x80d Return
	
Label_2062:
	var_188_int = 42611; // 0x80e PushI
	var_189_bool = var_39_float == var_188_int; // 0x80f Eq
	if(var_189_bool == 0) goto Label_2080; // 0x810 JumpB
	var_190_string = ""; // 0x811 PushV
	var_190_string = "Neutral"; // 0x812 MovS
	func_1756(var_40_int, var_190_string); // 0x813 NEW_2
	var_191_int = 540597; // 0x815 PushI
	SetMessage(var_191_int); // 0x816 TObjFunc
	ClearReplies(); // 0x818 TObjFunc
	var_192_int = 540600; // 0x81a PushI
	var_193_int = -1; // 0x81b PushI
	var_194_int = 42614; // 0x81c PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x81d TObjFunc
	return 0; // 0x81f Return
	
Label_2080:
	var_3_object = 1; // 0x820 TMovB
	var_195_bool = 0; // 0x821 PushV
	func_4383(var_195_bool); // 0x822 NEW_2
	if(var_195_bool == 0) goto Label_2088; // 0x824 JumpB
	lshStopAnimation(); // 0x825 Func
	goto Label_2090; // 0x827 Jump
	
Label_2090:
	return 0; // 0x82a Return
	
Label_2088:
	StopAnimation(); // 0x828 Func
	
Label_2092:
	return 0; // 0x82c Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x8cf PushI
	if(var_41_int == 0) goto Label_2318; // 0x8d0 JumpB
	func_4184(); // 0x8d2 NEW_2
	var_43_int = 26869; // 0x8d4 PushI
	var_44_bool = var_39_float == var_43_int; // 0x8d5 Eq
	if(var_44_bool == 0) goto Label_2283; // 0x8d6 JumpB
	var_45_string = ""; // 0x8d7 PushV
	var_45_string = "Neutral"; // 0x8d8 MovS
	func_2232(var_40_int, var_45_string); // 0x8d9 NEW_2
	var_62_int = 525513; // 0x8db PushI
	SetMessage(var_62_int); // 0x8dc TObjFunc
	ClearReplies(); // 0x8de TObjFunc
	var_63_int = 525514; // 0x8e0 PushI
	var_64_int = 30738; // 0x8e1 PushI
	var_65_int = 26870; // 0x8e2 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x8e3 TObjFunc
	var_66_int = 529284; // 0x8e5 PushI
	var_67_int = 30738; // 0x8e6 PushI
	var_68_int = 30737; // 0x8e7 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x8e8 TObjFunc
	return 0; // 0x8ea Return
	
Label_2283:
	var_69_int = 30738; // 0x8eb PushI
	var_70_bool = var_39_float == var_69_int; // 0x8ec Eq
	if(var_70_bool == 0) goto Label_2306; // 0x8ed JumpB
	var_71_string = ""; // 0x8ee PushV
	var_71_string = "Neutral"; // 0x8ef MovS
	func_2232(var_40_int, var_71_string); // 0x8f0 NEW_2
	var_72_int = 529285; // 0x8f2 PushI
	SetMessage(var_72_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_73_int = 529286; // 0x8f7 PushI
	var_74_int = -1; // 0x8f8 PushI
	var_75_int = 30740; // 0x8f9 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x8fa TObjFunc
	var_76_int = 529287; // 0x8fc PushI
	var_77_int = -1; // 0x8fd PushI
	var_78_int = 30741; // 0x8fe PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x8ff TObjFunc
	return 0; // 0x901 Return
	
Label_2306:
	var_3_object = 1; // 0x902 TMovB
	var_79_bool = 0; // 0x903 PushV
	func_4383(var_79_bool); // 0x904 NEW_2
	if(var_79_bool == 0) goto Label_2314; // 0x906 JumpB
	lshStopAnimation(); // 0x907 Func
	goto Label_2316; // 0x909 Jump
	
Label_2316:
	return 0; // 0x90c Return
	
Label_2314:
	StopAnimation(); // 0x90a Func
	
Label_2318:
	return 0; // 0x90e Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x9ce PushI
	if(var_41_int == 0) goto Label_2739; // 0x9cf JumpB
	func_4184(); // 0x9d1 NEW_2
	var_43_int = 27141; // 0x9d3 PushI
	var_44_bool = var_40_int == var_43_int; // 0x9d4 Eq
	if(var_44_bool == 0) goto Label_2523; // 0x9d5 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x9d6 PushV
	var_45_object = var_1_object; // 0x9d7 MovT
	var_46_object = var_0_bool; // 0x9d8 MovT
	func_4503(); // 0x9d9 NEW_2
	
Label_2523:
	var_49_int = 27143; // 0x9db PushI
	var_50_bool = var_40_int == var_49_int; // 0x9dc Eq
	if(var_50_bool == 0) goto Label_2531; // 0x9dd JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x9de PushV
	var_51_object = var_1_object; // 0x9df MovT
	var_52_object = var_0_bool; // 0x9e0 MovT
	func_4509(); // 0x9e1 NEW_2
	
Label_2531:
	var_76_int = 27144; // 0x9e3 PushI
	var_77_bool = var_40_int == var_76_int; // 0x9e4 Eq
	if(var_77_bool == 0) goto Label_2539; // 0x9e5 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x9e6 PushV
	var_78_object = var_1_object; // 0x9e7 MovT
	var_79_object = var_0_bool; // 0x9e8 MovT
	func_4563(); // 0x9e9 NEW_2
	
Label_2539:
	var_82_int = 27140; // 0x9eb PushI
	var_83_bool = var_39_float == var_82_int; // 0x9ec Eq
	if(var_83_bool == 0) goto Label_2591; // 0x9ed JumpB
	var_84_string = ""; // 0x9ee PushV
	var_84_string = "Neutral"; // 0x9ef MovS
	func_2487(var_40_int, var_84_string); // 0x9f0 NEW_2
	var_101_int = 525841; // 0x9f2 PushI
	SetMessage(var_101_int); // 0x9f3 TObjFunc
	ClearReplies(); // 0x9f5 TObjFunc
	var_102_bool = 0; // 0x9f7 PushV
	var_102_bool = 0; // 0x9f8 MovB
	var_103_bool = 0; var_104_object = Obj(); // 0x9f9 PushV
	var_104_object = var_1_object; // 0x9fa MovT
	func_4691(var_104_object); // 0x9fb NEW_2
	if(var_103_bool == 0) goto Label_2564; // 0x9fd JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x9fe PushV
	var_112_object = var_1_object; // 0x9ff MovT
	func_4703(var_112_object); // 0xa00 NEW_2
	if(var_111_bool == 0) goto Label_2564; // 0xa02 JumpB
	var_102_bool = 1; // 0xa03 MovB
	
Label_2564:
	if(var_102_bool == 0) goto Label_2570; // 0xa04 JumpB
	var_117_int = 525842; // 0xa05 PushI
	var_118_int = 30544; // 0xa06 PushI
	var_119_int = 27141; // 0xa07 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xa08 TObjFunc
	
Label_2570:
	var_120_bool = 0; var_121_object = Obj(); // 0xa0a PushV
	var_121_object = var_1_object; // 0xa0b MovT
	func_4739(var_121_object); // 0xa0c NEW_2
	if(var_120_bool == 0) goto Label_2580; // 0xa0e JumpB
	var_126_int = 525845; // 0xa0f PushI
	var_127_int = 30542; // 0xa10 PushI
	var_128_int = 27144; // 0xa11 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xa12 TObjFunc
	
Label_2580:
	var_129_int = 529095; // 0xa14 PushI
	var_130_int = -1; // 0xa15 PushI
	var_131_int = 30540; // 0xa16 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xa17 TObjFunc
	var_132_int = 529096; // 0xa19 PushI
	var_133_int = -1; // 0xa1a PushI
	var_134_int = 30541; // 0xa1b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xa1c TObjFunc
	return 0; // 0xa1e Return
	
Label_2591:
	var_135_int = 30542; // 0xa1f PushI
	var_136_bool = var_39_float == var_135_int; // 0xa20 Eq
	if(var_136_bool == 0) goto Label_2614; // 0xa21 JumpB
	var_137_string = ""; // 0xa22 PushV
	var_137_string = "Untrust"; // 0xa23 MovS
	func_2487(var_40_int, var_137_string); // 0xa24 NEW_2
	var_138_int = 529097; // 0xa26 PushI
	SetMessage(var_138_int); // 0xa27 TObjFunc
	ClearReplies(); // 0xa29 TObjFunc
	var_139_int = 529098; // 0xa2b PushI
	var_140_int = -1; // 0xa2c PushI
	var_141_int = 30543; // 0xa2d PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xa2e TObjFunc
	var_142_int = 541643; // 0xa30 PushI
	var_143_int = -1; // 0xa31 PushI
	var_144_int = 43815; // 0xa32 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xa33 TObjFunc
	return 0; // 0xa35 Return
	
Label_2614:
	var_145_int = 30544; // 0xa36 PushI
	var_146_bool = var_39_float == var_145_int; // 0xa37 Eq
	if(var_146_bool == 0) goto Label_2632; // 0xa38 JumpB
	var_147_string = ""; // 0xa39 PushV
	var_147_string = "Sly"; // 0xa3a MovS
	func_2487(var_40_int, var_147_string); // 0xa3b NEW_2
	var_148_int = 529099; // 0xa3d PushI
	SetMessage(var_148_int); // 0xa3e TObjFunc
	ClearReplies(); // 0xa40 TObjFunc
	var_149_int = 529100; // 0xa42 PushI
	var_150_int = 30546; // 0xa43 PushI
	var_151_int = 30545; // 0xa44 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xa45 TObjFunc
	return 0; // 0xa47 Return
	
Label_2632:
	var_152_int = 30546; // 0xa48 PushI
	var_153_bool = var_39_float == var_152_int; // 0xa49 Eq
	if(var_153_bool == 0) goto Label_2650; // 0xa4a JumpB
	var_154_string = ""; // 0xa4b PushV
	var_154_string = "Sly"; // 0xa4c MovS
	func_2487(var_40_int, var_154_string); // 0xa4d NEW_2
	var_155_int = 529101; // 0xa4f PushI
	SetMessage(var_155_int); // 0xa50 TObjFunc
	ClearReplies(); // 0xa52 TObjFunc
	var_156_int = 529102; // 0xa54 PushI
	var_157_int = 27142; // 0xa55 PushI
	var_158_int = 30547; // 0xa56 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xa57 TObjFunc
	return 0; // 0xa59 Return
	
Label_2650:
	var_159_int = 27142; // 0xa5a PushI
	var_160_bool = var_39_float == var_159_int; // 0xa5b Eq
	if(var_160_bool == 0) goto Label_2668; // 0xa5c JumpB
	var_161_string = ""; // 0xa5d PushV
	var_161_string = "Sly"; // 0xa5e MovS
	func_2487(var_40_int, var_161_string); // 0xa5f NEW_2
	var_162_int = 525843; // 0xa61 PushI
	SetMessage(var_162_int); // 0xa62 TObjFunc
	ClearReplies(); // 0xa64 TObjFunc
	var_163_int = 529103; // 0xa66 PushI
	var_164_int = 30549; // 0xa67 PushI
	var_165_int = 30548; // 0xa68 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xa69 TObjFunc
	return 0; // 0xa6b Return
	
Label_2668:
	var_166_int = 30549; // 0xa6c PushI
	var_167_bool = var_39_float == var_166_int; // 0xa6d Eq
	if(var_167_bool == 0) goto Label_2691; // 0xa6e JumpB
	var_168_string = ""; // 0xa6f PushV
	var_168_string = "Rage"; // 0xa70 MovS
	func_2487(var_40_int, var_168_string); // 0xa71 NEW_2
	var_169_int = 529104; // 0xa73 PushI
	SetMessage(var_169_int); // 0xa74 TObjFunc
	ClearReplies(); // 0xa76 TObjFunc
	var_170_int = 529105; // 0xa78 PushI
	var_171_int = 30551; // 0xa79 PushI
	var_172_int = 30550; // 0xa7a PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xa7b TObjFunc
	var_173_int = 539587; // 0xa7d PushI
	var_174_int = 41533; // 0xa7e PushI
	var_175_int = 41532; // 0xa7f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xa80 TObjFunc
	return 0; // 0xa82 Return
	
Label_2691:
	var_176_int = 41533; // 0xa83 PushI
	var_177_bool = var_39_float == var_176_int; // 0xa84 Eq
	if(var_177_bool == 0) goto Label_2709; // 0xa85 JumpB
	var_178_string = ""; // 0xa86 PushV
	var_178_string = "Neutral"; // 0xa87 MovS
	func_2487(var_40_int, var_178_string); // 0xa88 NEW_2
	var_179_int = 539588; // 0xa8a PushI
	SetMessage(var_179_int); // 0xa8b TObjFunc
	ClearReplies(); // 0xa8d TObjFunc
	var_180_int = 539589; // 0xa8f PushI
	var_181_int = 30551; // 0xa90 PushI
	var_182_int = 41534; // 0xa91 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xa92 TObjFunc
	return 0; // 0xa94 Return
	
Label_2709:
	var_183_int = 30551; // 0xa95 PushI
	var_184_bool = var_39_float == var_183_int; // 0xa96 Eq
	if(var_184_bool == 0) goto Label_2727; // 0xa97 JumpB
	var_185_string = ""; // 0xa98 PushV
	var_185_string = "Untrust"; // 0xa99 MovS
	func_2487(var_40_int, var_185_string); // 0xa9a NEW_2
	var_186_int = 529106; // 0xa9c PushI
	SetMessage(var_186_int); // 0xa9d TObjFunc
	ClearReplies(); // 0xa9f TObjFunc
	var_187_int = 525844; // 0xaa1 PushI
	var_188_int = -1; // 0xaa2 PushI
	var_189_int = 27143; // 0xaa3 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xaa4 TObjFunc
	return 0; // 0xaa6 Return
	
Label_2727:
	var_3_object = 1; // 0xaa7 TMovB
	var_190_bool = 0; // 0xaa8 PushV
	func_4383(var_190_bool); // 0xaa9 NEW_2
	if(var_190_bool == 0) goto Label_2735; // 0xaab JumpB
	lshStopAnimation(); // 0xaac Func
	goto Label_2737; // 0xaae Jump
	
Label_2737:
	return 0; // 0xab1 Return
	
Label_2735:
	StopAnimation(); // 0xaaf Func
	
Label_2739:
	return 0; // 0xab3 Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xb6a PushI
	if(var_41_int == 0) goto Label_3213; // 0xb6b JumpB
	func_4184(); // 0xb6d NEW_2
	var_43_int = 28018; // 0xb6f PushI
	var_44_bool = var_40_int == var_43_int; // 0xb70 Eq
	if(var_44_bool == 0) goto Label_2935; // 0xb71 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xb72 PushV
	var_45_object = var_1_object; // 0xb73 MovT
	var_46_object = var_0_bool; // 0xb74 MovT
	func_4514(); // 0xb75 NEW_2
	
Label_2935:
	var_72_int = 45451; // 0xb77 PushI
	var_73_bool = var_40_int == var_72_int; // 0xb78 Eq
	if(var_73_bool == 0) goto Label_2943; // 0xb79 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xb7a PushV
	var_74_object = var_1_object; // 0xb7b MovT
	var_75_object = var_0_bool; // 0xb7c MovT
	func_4514(); // 0xb7d NEW_2
	
Label_2943:
	var_76_int = 28015; // 0xb7f PushI
	var_77_bool = var_39_float == var_76_int; // 0xb80 Eq
	if(var_77_bool == 0) goto Label_2986; // 0xb81 JumpB
	var_78_string = ""; // 0xb82 PushV
	var_78_string = "Rage"; // 0xb83 MovS
	func_2899(var_40_int, var_78_string); // 0xb84 NEW_2
	var_95_int = 526738; // 0xb86 PushI
	SetMessage(var_95_int); // 0xb87 TObjFunc
	ClearReplies(); // 0xb89 TObjFunc
	var_96_bool = 0; var_97_object = Obj(); // 0xb8b PushV
	var_97_object = var_1_object; // 0xb8c MovT
	func_4727(var_97_object); // 0xb8d NEW_2
	if(var_96_bool == 0) goto Label_2965; // 0xb8f JumpB
	var_104_int = 526739; // 0xb90 PushI
	var_105_int = 28017; // 0xb91 PushI
	var_106_int = 28016; // 0xb92 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xb93 TObjFunc
	
Label_2965:
	var_107_bool = 0; var_108_object = Obj(); // 0xb95 PushV
	var_108_object = var_1_object; // 0xb96 MovT
	func_4715(var_108_object); // 0xb97 NEW_2
	if(var_107_bool == 0) goto Label_2975; // 0xb99 JumpB
	var_113_int = 528763; // 0xb9a PushI
	var_114_int = 30180; // 0xb9b PushI
	var_115_int = 30179; // 0xb9c PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xb9d TObjFunc
	
Label_2975:
	var_116_int = 526742; // 0xb9f PushI
	var_117_int = -1; // 0xba0 PushI
	var_118_int = 28019; // 0xba1 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xba2 TObjFunc
	var_119_int = 528847; // 0xba4 PushI
	var_120_int = -1; // 0xba5 PushI
	var_121_int = 30265; // 0xba6 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xba7 TObjFunc
	return 0; // 0xba9 Return
	
Label_2986:
	var_122_int = 30180; // 0xbaa PushI
	var_123_bool = var_39_float == var_122_int; // 0xbab Eq
	if(var_123_bool == 0) goto Label_3014; // 0xbac JumpB
	var_124_string = ""; // 0xbad PushV
	var_124_string = "Rage"; // 0xbae MovS
	func_2899(var_40_int, var_124_string); // 0xbaf NEW_2
	var_125_int = 528764; // 0xbb1 PushI
	SetMessage(var_125_int); // 0xbb2 TObjFunc
	ClearReplies(); // 0xbb4 TObjFunc
	var_126_int = 542466; // 0xbb6 PushI
	var_127_int = 44860; // 0xbb7 PushI
	var_128_int = 44859; // 0xbb8 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xbb9 TObjFunc
	var_129_int = 542463; // 0xbbb PushI
	var_130_int = 44857; // 0xbbc PushI
	var_131_int = 44856; // 0xbbd PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xbbe TObjFunc
	var_132_int = 528765; // 0xbc0 PushI
	var_133_int = -1; // 0xbc1 PushI
	var_134_int = 30181; // 0xbc2 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xbc3 TObjFunc
	return 0; // 0xbc5 Return
	
Label_3014:
	var_135_int = 44857; // 0xbc6 PushI
	var_136_bool = var_39_float == var_135_int; // 0xbc7 Eq
	if(var_136_bool == 0) goto Label_3032; // 0xbc8 JumpB
	var_137_string = ""; // 0xbc9 PushV
	var_137_string = "Neutral"; // 0xbca MovS
	func_2899(var_40_int, var_137_string); // 0xbcb NEW_2
	var_138_int = 542464; // 0xbcd PushI
	SetMessage(var_138_int); // 0xbce TObjFunc
	ClearReplies(); // 0xbd0 TObjFunc
	var_139_int = 542465; // 0xbd2 PushI
	var_140_int = -1; // 0xbd3 PushI
	var_141_int = 44858; // 0xbd4 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xbd5 TObjFunc
	return 0; // 0xbd7 Return
	
Label_3032:
	var_142_int = 44860; // 0xbd8 PushI
	var_143_bool = var_39_float == var_142_int; // 0xbd9 Eq
	if(var_143_bool == 0) goto Label_3055; // 0xbda JumpB
	var_144_string = ""; // 0xbdb PushV
	var_144_string = "Neutral"; // 0xbdc MovS
	func_2899(var_40_int, var_144_string); // 0xbdd NEW_2
	var_145_int = 542467; // 0xbdf PushI
	SetMessage(var_145_int); // 0xbe0 TObjFunc
	ClearReplies(); // 0xbe2 TObjFunc
	var_146_int = 542468; // 0xbe4 PushI
	var_147_int = -1; // 0xbe5 PushI
	var_148_int = 44861; // 0xbe6 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xbe7 TObjFunc
	var_149_int = 543008; // 0xbe9 PushI
	var_150_int = -1; // 0xbea PushI
	var_151_int = 45460; // 0xbeb PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xbec TObjFunc
	return 0; // 0xbee Return
	
Label_3055:
	var_152_int = 28017; // 0xbef PushI
	var_153_bool = var_39_float == var_152_int; // 0xbf0 Eq
	if(var_153_bool == 0) goto Label_3078; // 0xbf1 JumpB
	var_154_string = ""; // 0xbf2 PushV
	var_154_string = "Rage"; // 0xbf3 MovS
	func_2899(var_40_int, var_154_string); // 0xbf4 NEW_2
	var_155_int = 526740; // 0xbf6 PushI
	SetMessage(var_155_int); // 0xbf7 TObjFunc
	ClearReplies(); // 0xbf9 TObjFunc
	var_156_int = 528841; // 0xbfb PushI
	var_157_int = 30260; // 0xbfc PushI
	var_158_int = 30259; // 0xbfd PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xbfe TObjFunc
	var_159_int = 528848; // 0xc00 PushI
	var_160_int = 30267; // 0xc01 PushI
	var_161_int = 30266; // 0xc02 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xc03 TObjFunc
	return 0; // 0xc05 Return
	
Label_3078:
	var_162_int = 30267; // 0xc06 PushI
	var_163_bool = var_39_float == var_162_int; // 0xc07 Eq
	if(var_163_bool == 0) goto Label_3101; // 0xc08 JumpB
	var_164_string = ""; // 0xc09 PushV
	var_164_string = "Neutral"; // 0xc0a MovS
	func_2899(var_40_int, var_164_string); // 0xc0b NEW_2
	var_165_int = 528849; // 0xc0d PushI
	SetMessage(var_165_int); // 0xc0e TObjFunc
	ClearReplies(); // 0xc10 TObjFunc
	var_166_int = 528850; // 0xc12 PushI
	var_167_int = 45452; // 0xc13 PushI
	var_168_int = 30268; // 0xc14 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xc15 TObjFunc
	var_169_int = 528851; // 0xc17 PushI
	var_170_int = 45452; // 0xc18 PushI
	var_171_int = 30269; // 0xc19 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xc1a TObjFunc
	return 0; // 0xc1c Return
	
Label_3101:
	var_172_int = 45452; // 0xc1d PushI
	var_173_bool = var_39_float == var_172_int; // 0xc1e Eq
	if(var_173_bool == 0) goto Label_3119; // 0xc1f JumpB
	var_174_string = ""; // 0xc20 PushV
	var_174_string = "Neutral"; // 0xc21 MovS
	func_2899(var_40_int, var_174_string); // 0xc22 NEW_2
	var_175_int = 543003; // 0xc24 PushI
	SetMessage(var_175_int); // 0xc25 TObjFunc
	ClearReplies(); // 0xc27 TObjFunc
	var_176_int = 543005; // 0xc29 PushI
	var_177_int = 45457; // 0xc2a PushI
	var_178_int = 45456; // 0xc2b PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xc2c TObjFunc
	return 0; // 0xc2e Return
	
Label_3119:
	var_179_int = 45457; // 0xc2f PushI
	var_180_bool = var_39_float == var_179_int; // 0xc30 Eq
	if(var_180_bool == 0) goto Label_3137; // 0xc31 JumpB
	var_181_string = ""; // 0xc32 PushV
	var_181_string = "Sly"; // 0xc33 MovS
	func_2899(var_40_int, var_181_string); // 0xc34 NEW_2
	var_182_int = 543006; // 0xc36 PushI
	SetMessage(var_182_int); // 0xc37 TObjFunc
	ClearReplies(); // 0xc39 TObjFunc
	var_183_int = 543007; // 0xc3b PushI
	var_184_int = 30264; // 0xc3c PushI
	var_185_int = 45458; // 0xc3d PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xc3e TObjFunc
	return 0; // 0xc40 Return
	
Label_3137:
	var_186_int = 30260; // 0xc41 PushI
	var_187_bool = var_39_float == var_186_int; // 0xc42 Eq
	if(var_187_bool == 0) goto Label_3155; // 0xc43 JumpB
	var_188_string = ""; // 0xc44 PushV
	var_188_string = "Sly"; // 0xc45 MovS
	func_2899(var_40_int, var_188_string); // 0xc46 NEW_2
	var_189_int = 528842; // 0xc48 PushI
	SetMessage(var_189_int); // 0xc49 TObjFunc
	ClearReplies(); // 0xc4b TObjFunc
	var_190_int = 528843; // 0xc4d PushI
	var_191_int = 30262; // 0xc4e PushI
	var_192_int = 30261; // 0xc4f PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_193_int = 30262; // 0xc53 PushI
	var_194_bool = var_39_float == var_193_int; // 0xc54 Eq
	if(var_194_bool == 0) goto Label_3178; // 0xc55 JumpB
	var_195_string = ""; // 0xc56 PushV
	var_195_string = "Rage"; // 0xc57 MovS
	func_2899(var_40_int, var_195_string); // 0xc58 NEW_2
	var_196_int = 528844; // 0xc5a PushI
	SetMessage(var_196_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_197_int = 528845; // 0xc5f PushI
	var_198_int = 30264; // 0xc60 PushI
	var_199_int = 30263; // 0xc61 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xc62 TObjFunc
	var_200_int = 543004; // 0xc64 PushI
	var_201_int = 30264; // 0xc65 PushI
	var_202_int = 45454; // 0xc66 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xc67 TObjFunc
	return 0; // 0xc69 Return
	
Label_3178:
	var_203_int = 30264; // 0xc6a PushI
	var_204_bool = var_39_float == var_203_int; // 0xc6b Eq
	if(var_204_bool == 0) goto Label_3201; // 0xc6c JumpB
	var_205_string = ""; // 0xc6d PushV
	var_205_string = "Neutral"; // 0xc6e MovS
	func_2899(var_40_int, var_205_string); // 0xc6f NEW_2
	var_206_int = 528846; // 0xc71 PushI
	SetMessage(var_206_int); // 0xc72 TObjFunc
	ClearReplies(); // 0xc74 TObjFunc
	var_207_int = 526741; // 0xc76 PushI
	var_208_int = -1; // 0xc77 PushI
	var_209_int = 28018; // 0xc78 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xc79 TObjFunc
	var_210_int = 543002; // 0xc7b PushI
	var_211_int = -1; // 0xc7c PushI
	var_212_int = 45451; // 0xc7d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xc7e TObjFunc
	return 0; // 0xc80 Return
	
Label_3201:
	var_3_object = 1; // 0xc81 TMovB
	var_213_bool = 0; // 0xc82 PushV
	func_4383(var_213_bool); // 0xc83 NEW_2
	if(var_213_bool == 0) goto Label_3209; // 0xc85 JumpB
	lshStopAnimation(); // 0xc86 Func
	goto Label_3211; // 0xc88 Jump
	
Label_3211:
	return 0; // 0xc8b Return
	
Label_3209:
	StopAnimation(); // 0xc89 Func
	
Label_3213:
	return 0; // 0xc8d Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xd35 PushI
	if(var_41_int == 0) goto Label_3472; // 0xd36 JumpB
	func_4184(); // 0xd38 NEW_2
	var_43_int = 36906; // 0xd3a PushI
	var_44_bool = var_39_float == var_43_int; // 0xd3b Eq
	if(var_44_bool == 0) goto Label_3414; // 0xd3c JumpB
	var_45_string = ""; // 0xd3d PushV
	var_45_string = "Neutral"; // 0xd3e MovS
	func_3358(var_40_int, var_45_string); // 0xd3f NEW_2
	var_62_int = 535231; // 0xd41 PushI
	SetMessage(var_62_int); // 0xd42 TObjFunc
	ClearReplies(); // 0xd44 TObjFunc
	var_63_int = 535232; // 0xd46 PushI
	var_64_int = 36953; // 0xd47 PushI
	var_65_int = 36907; // 0xd48 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd49 TObjFunc
	var_66_int = 535233; // 0xd4b PushI
	var_67_int = -1; // 0xd4c PushI
	var_68_int = 36908; // 0xd4d PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xd4e TObjFunc
	var_69_int = 535280; // 0xd50 PushI
	var_70_int = -1; // 0xd51 PushI
	var_71_int = 36956; // 0xd52 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xd53 TObjFunc
	return 0; // 0xd55 Return
	
Label_3414:
	var_72_int = 36953; // 0xd56 PushI
	var_73_bool = var_39_float == var_72_int; // 0xd57 Eq
	if(var_73_bool == 0) goto Label_3437; // 0xd58 JumpB
	var_74_string = ""; // 0xd59 PushV
	var_74_string = "Neutral"; // 0xd5a MovS
	func_3358(var_40_int, var_74_string); // 0xd5b NEW_2
	var_75_int = 535277; // 0xd5d PushI
	SetMessage(var_75_int); // 0xd5e TObjFunc
	ClearReplies(); // 0xd60 TObjFunc
	var_76_int = 535278; // 0xd62 PushI
	var_77_int = 36957; // 0xd63 PushI
	var_78_int = 36954; // 0xd64 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xd65 TObjFunc
	var_79_int = 535279; // 0xd67 PushI
	var_80_int = 36957; // 0xd68 PushI
	var_81_int = 36955; // 0xd69 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xd6a TObjFunc
	return 0; // 0xd6c Return
	
Label_3437:
	var_82_int = 36957; // 0xd6d PushI
	var_83_bool = var_39_float == var_82_int; // 0xd6e Eq
	if(var_83_bool == 0) goto Label_3460; // 0xd6f JumpB
	var_84_string = ""; // 0xd70 PushV
	var_84_string = "Neutral"; // 0xd71 MovS
	func_3358(var_40_int, var_84_string); // 0xd72 NEW_2
	var_85_int = 535281; // 0xd74 PushI
	SetMessage(var_85_int); // 0xd75 TObjFunc
	ClearReplies(); // 0xd77 TObjFunc
	var_86_int = 535282; // 0xd79 PushI
	var_87_int = -1; // 0xd7a PushI
	var_88_int = 36958; // 0xd7b PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xd7c TObjFunc
	var_89_int = 535283; // 0xd7e PushI
	var_90_int = -1; // 0xd7f PushI
	var_91_int = 36959; // 0xd80 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xd81 TObjFunc
	return 0; // 0xd83 Return
	
Label_3460:
	var_3_object = 1; // 0xd84 TMovB
	var_92_bool = 0; // 0xd85 PushV
	func_4383(var_92_bool); // 0xd86 NEW_2
	if(var_92_bool == 0) goto Label_3468; // 0xd88 JumpB
	lshStopAnimation(); // 0xd89 Func
	goto Label_3470; // 0xd8b Jump
	
Label_3470:
	return 0; // 0xd8e Return
	
Label_3468:
	StopAnimation(); // 0xd8c Func
	
Label_3472:
	return 0; // 0xd90 Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xe33 PushI
	if(var_41_int == 0) goto Label_3675; // 0xe34 JumpB
	func_4184(); // 0xe36 NEW_2
	var_43_int = 42554; // 0xe38 PushI
	var_44_bool = var_39_float == var_43_int; // 0xe39 Eq
	if(var_44_bool == 0) goto Label_3663; // 0xe3a JumpB
	var_45_string = ""; // 0xe3b PushV
	var_45_string = "Neutral"; // 0xe3c MovS
	func_3612(var_40_int, var_45_string); // 0xe3d NEW_2
	var_62_int = 540545; // 0xe3f PushI
	SetMessage(var_62_int); // 0xe40 TObjFunc
	ClearReplies(); // 0xe42 TObjFunc
	var_63_int = 540546; // 0xe44 PushI
	var_64_int = -1; // 0xe45 PushI
	var_65_int = 42555; // 0xe46 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe47 TObjFunc
	var_66_int = 540798; // 0xe49 PushI
	var_67_int = -1; // 0xe4a PushI
	var_68_int = 42847; // 0xe4b PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe4c TObjFunc
	return 0; // 0xe4e Return
	
Label_3663:
	var_3_object = 1; // 0xe4f TMovB
	var_69_bool = 0; // 0xe50 PushV
	func_4383(var_69_bool); // 0xe51 NEW_2
	if(var_69_bool == 0) goto Label_3671; // 0xe53 JumpB
	lshStopAnimation(); // 0xe54 Func
	goto Label_3673; // 0xe56 Jump
	
Label_3673:
	return 0; // 0xe59 Return
	
Label_3671:
	StopAnimation(); // 0xe57 Func
	
Label_3675:
	return 0; // 0xe5b Return
}


task_18_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4374(); // 0xeda NEW_2
	TaskCall(0); // 0xedd TaskCall
	func_0(); // 0xede NEW_2
	TaskReturn(); // 0xedf TaskReturn
	return 0; // 0xee1 Return
}


task_18_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0; // 0xee2 PushV
	IsOverrideActive(var_41_bool); // 0xee3 Func
	var_42_bool = var_41_bool == 0; // 0xee5 Not
	if(var_42_bool == 0) goto Label_3825; // 0xee6 JumpB
	EventDisable(0); // 0xee7 EventDisable
	var_43_bool = 0; var_44_object = Obj(); // 0xee8 PushV
	var_44_object = var_39_object; // 0xee9 Mov
	func_3890(var_44_object); // 0xeea NEW_2
	EventEnable(0); // 0xeec EventEnable
	var_57_object = Obj(); // 0xeed PushV
	var_57_object = var_39_object; // 0xeee Mov
	func_4995(var_57_object); // 0xeef NEW_2
	
Label_3825:
	return 2; // 0xef1 Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	return 0; // 0x1116 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	var_39_bool = GlobalVars[2]; // 0xe5c PushGE
	var_39_bool = 0; // 0xe5d MovB
	GlobalVars[2] = var_39_bool; // 0xe5e PopGE
	func_3683(var_36_float, var_37_float, var_38_int); // 0xe60 NEW_2
	return 0; // 0xe62 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_81_bool = 0; // 0x2 PushV
	func_3910(var_81_bool); // 0x3 NEW_2
	var_82_bool = var_81_bool == 0; // 0x5 Not
	if(var_82_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_4609(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0x1202 PushV
	var_369_string = "k2q04"; // 0x1203 MovS
	func_4236(var_368_int, var_369_string); // 0x1204 NEW_2
	var_370_int = 2; // 0x1206 PushI
	var_371_bool = var_368_int == var_370_int; // 0x1207 Eq
	if(var_371_bool == 0) goto Label_4619; // 0x1208 JumpB
	var_366_bool = 1; // 0x1209 MovB
	return 0; // 0x120a Return
	
Label_4619:
	var_366_bool = 0; // 0x120b MovB
	return 0; // 0x120c Return
}


func_256(var_174_string, var_175_string, var_176_int)
{
	var_177_int = 0; // 0x101 PushI
	var_178_bool = var_176_int == var_177_int; // 0x102 Eq
	if(var_178_bool == 0) goto Label_262; // 0x103 JumpB
	var_174_string = var_175_string; // 0x104 Mov
	goto Label_263; // 0x105 Jump
	
Label_263:
	return 0; // 0x107 Return
	
Label_262:
	var_174_string = var_175_string + var_176_int; // 0x106 Add2
}


func_2821(var_0_bool, var_1_object, var_2_object, var_3_object, var_609_object, var_610_object)
{
	var_0_bool = var_610_object; // 0xb06 TMov
	var_1_object = var_609_object; // 0xb07 TMov
	var_3_object = 0; // 0xb08 TMovB
	var_615_int = 1; // 0xb09 PushI
	if(var_615_int == 0) goto Label_2869; // 0xb0a JumpB
	var_616_string = ""; // 0xb0b PushV
	var_616_string = "Rage"; // 0xb0c MovS
	func_2899(var_610_object, var_616_string); // 0xb0d NEW_2
	var_624_int = 526738; // 0xb0f PushI
	SetMessage(var_624_int); // 0xb10 TObjFunc
	ClearReplies(); // 0xb12 TObjFunc
	var_625_bool = 0; var_626_object = Obj(); // 0xb14 PushV
	var_626_object = var_1_object; // 0xb15 MovT
	func_4727(var_626_object); // 0xb16 NEW_2
	if(var_625_bool == 0) goto Label_2846; // 0xb18 JumpB
	var_631_int = 526739; // 0xb19 PushI
	var_632_int = 28017; // 0xb1a PushI
	var_633_int = 28016; // 0xb1b PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0xb1c TObjFunc
	
Label_2846:
	var_634_bool = 0; var_635_object = Obj(); // 0xb1e PushV
	var_635_object = var_1_object; // 0xb1f MovT
	func_4715(var_635_object); // 0xb20 NEW_2
	if(var_634_bool == 0) goto Label_2856; // 0xb22 JumpB
	var_640_int = 528763; // 0xb23 PushI
	var_641_int = 30180; // 0xb24 PushI
	var_642_int = 30179; // 0xb25 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xb26 TObjFunc
	
Label_2856:
	var_643_int = 526742; // 0xb28 PushI
	var_644_int = -1; // 0xb29 PushI
	var_645_int = 28019; // 0xb2a PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0xb2b TObjFunc
	var_646_int = 528847; // 0xb2d PushI
	var_647_int = -1; // 0xb2e PushI
	var_648_int = 30265; // 0xb2f PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xb30 TObjFunc
	goto Label_2869; // 0xb32 Jump
	
Label_2869:
	var_649_bool = 0; // 0xb35 PushV
	func_4383(var_649_bool); // 0xb36 NEW_2
	if(var_649_bool == 0) goto Label_2884; // 0xb38 JumpB
	
Label_2873:
	lshWaitForAnimEnd(); // 0xb39 Func
	var_650_object = var_3_object; // 0xb3b PushT
	if(var_650_object == 0) goto Label_2878; // 0xb3c JumpB
	goto Label_2883; // 0xb3d Jump
	
Label_2883:
	goto Label_2898; // 0xb43 Jump
	
Label_2898:
	return 0; // 0xb52 Return
	
Label_2878:
	var_651_string = ""; // 0xb3e PushV
	var_651_string = var_2_object; // 0xb3f MovT
	func_4138(var_651_string); // 0xb40 NEW_2
	goto Label_2873; // 0xb42 Jump
	
Label_2884:
	var_652_string = "all"; // 0xb44 PushS
	var_653_string = "idle"; // 0xb45 PushS
	PlayAnimation(var_652_string, var_653_string); // 0xb46 Func
	
Label_2888:
	WaitForAnimEnd(); // 0xb48 Func
	var_654_object = var_3_object; // 0xb4a PushT
	if(var_654_object == 0) goto Label_2893; // 0xb4b JumpB
	goto Label_2898; // 0xb4c Jump
	
Label_2893:
	var_655_string = "all"; // 0xb4d PushS
	var_656_string = "idle"; // 0xb4e PushS
	PlayAnimation(var_655_string, var_656_string); // 0xb4f Func
	goto Label_2888; // 0xb51 Jump
}


func_264(var_167_int, var_168_string)
{
	var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_bool = 0; // 0x108 PushV
	var_171_int = 0; // 0x109 MovI
	
Label_266:
	var_173_string = "all"; // 0x10a PushS
	var_174_string = ""; var_175_string = ""; var_176_int = 0; // 0x10b PushV
	var_175_string = var_168_string; // 0x10c Mov
	var_176_int = var_171_int; // 0x10d Mov
	func_256(var_174_string, var_175_string, var_176_int); // 0x10e NEW_2
	HasAnimation(var_172_bool, var_173_string, var_174_string); // 0x110 Func
	var_179_bool = var_172_bool == 0; // 0x112 Not
	if(var_179_bool == 0) goto Label_277; // 0x113 JumpB
	goto Label_280; // 0x114 Jump
	
Label_280:
	var_167_int = var_171_int; // 0x118 Mov
	return 4; // 0x119 Return
	
Label_277:
	var_180_int = 1; // 0x115 PushI
	var_171_int = var_171_int + var_180_int; // 0x116 Add2
	goto Label_266; // 0x117 Jump
}


func_4361(var_67_string, var_68_int)
{
	var_69_int = 0; // 0x110a PushI
	var_70_bool = var_68_int == var_69_int; // 0x110b Eq
	if(var_70_bool == 0) goto Label_4369; // 0x110c JumpB
	var_71_string = "pt_"; // 0x110d PushS
	var_72_string = GlobalVars[0]; // 0x110e PushGE
	var_67_string = var_71_string + var_72_string; // 0x110f Add2
	goto Label_4373; // 0x1110 Jump
	
Label_4373:
	return 0; // 0x1115 Return
	
Label_4369:
	var_73_string = "pt_"; // 0x1111 PushS
	var_74_string = GlobalVars[0]; // 0x1112 PushGE
	var_75_int = var_73_string + var_74_string; // 0x1113 Add
	var_67_string = var_75_int + var_68_int; // 0x1114 Add2
}


func_4874()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x130a PushV
	var_51_int = 503; // 0x130b PushI
	var_52_int = 2; // 0x130c PushI
	var_53_int = 528769; // 0x130d PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x130e Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x1310 PushV
	var_55_object = var_50_object; // 0x1311 Mov
	var_56_int = 500; // 0x1312 MovI
	func_4900(var_54_bool, var_55_object, var_56_int); // 0x1313 NEW_2
	return 2; // 0x1315 Return
}


func_3851(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float)
{
	var_143_float = 0; var_144_float = 0; // 0xf0b PushV
	var_145_bool = 0; var_146_object = Obj(); var_147_string = ""; // 0xf0c PushV
	var_146_object = var_138_object; // 0xf0d Mov
	var_147_string = var_139_string; // 0xf0e Mov
	func_3839(var_145_bool, var_146_object, var_147_string); // 0xf0f NEW_2
	var_154_bool = var_145_bool == 0; // 0xf11 Not
	if(var_154_bool == 0) goto Label_3861; // 0xf12 JumpB
	var_137_bool = 0; // 0xf13 MovB
	return 2; // 0xf14 Return
	
Label_3861:
	GetProperty(var_139_string, var_144_float); // 0xf15 ObjFunc
	var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; // 0xf17 PushV
	var_156_float = var_144_float + var_140_float; // 0xf18 Add2
	var_157_float = var_141_float; // 0xf19 Mov
	var_158_float = var_142_float; // 0xf1a Mov
	func_4215(var_155_float, var_156_float, var_157_float, var_158_float); // 0xf1b NEW_2
	SetProperty(var_139_string, var_155_float); // 0xf1d ObjFunc
	var_137_bool = 1; // 0xf1f MovB
	return 2; // 0xf20 Return
}


func_13(var_0_bool, var_122_bool, var_123_cvector, var_124_cvector)
{
	var_126_bool = 0; var_127_bool = 0; // 0xd PushV
	var_0_bool = 1; // 0xe TMovB
	var_128_int = 21; // 0xf PushI
	var_129_float = 0.5; // 0x10 PushF
	SetTimer(var_128_int, var_129_float); // 0x11 Func
	
Label_19:
	var_130_bool = 0; var_131_cvector = CVector(0,0,0); // 0x13 PushV
	var_131_cvector = var_123_cvector; // 0x14 Mov
	func_3880(var_130_bool, var_131_cvector); // 0x15 NEW_2
	var_140_bool = var_130_bool == 0; // 0x17 Not
	if(var_140_bool == 0) goto Label_26; // 0x18 JumpB
	goto Label_19; // 0x19 Jump
	
Label_26:
	var_141_bool = 0; // 0x1a PushB
	MovePoint(var_123_cvector, var_141_bool, var_127_bool); // 0x1b Func
	var_142_bool = var_127_bool; // 0x1d Push
	if(var_142_bool == 0) goto Label_32; // 0x1e JumpB
	goto Label_33; // 0x1f Jump
	
Label_33:
	var_143_int = 20; // 0x21 PushI
	KillTimer(var_143_int); // 0x22 Func
	var_144_int = 21; // 0x24 PushI
	KillTimer(var_144_int); // 0x25 Func
	var_0_bool = 0; // 0x27 TMovB
	WaitForAnimEnd(var_127_bool); // 0x28 Func
	var_145_bool = var_127_bool == 0; // 0x2a Not
	if(var_145_bool == 0) goto Label_46; // 0x2b JumpB
	var_122_bool = 0; // 0x2c MovB
	return 2; // 0x2d Return
	
Label_46:
	var_146_float = GetByIndex(var_124_cvector, 0); // 0x2e PushE
	var_147_float = GetByIndex(var_124_cvector, 2); // 0x2f PushE
	Rotate(var_146_float, var_147_float, var_127_bool); // 0x30 Func
	var_148_bool = var_127_bool == 0; // 0x32 Not
	if(var_148_bool == 0) goto Label_54; // 0x33 JumpB
	var_122_bool = 0; // 0x34 MovB
	return 2; // 0x35 Return
	
Label_54:
	var_122_bool = 1; // 0x36 MovB
	return 2; // 0x37 Return
	
Label_32:
	goto Label_19; // 0x20 Jump
}


func_4621(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0x120e PushV
	var_415_string = "k2q04"; // 0x120f MovS
	func_4236(var_414_int, var_415_string); // 0x1210 NEW_2
	var_416_int = 3; // 0x1212 PushI
	var_417_bool = var_414_int == var_416_int; // 0x1213 Eq
	if(var_417_bool == 0) goto Label_4631; // 0x1214 JumpB
	var_412_bool = 1; // 0x1215 MovB
	return 0; // 0x1216 Return
	
Label_4631:
	var_412_bool = 0; // 0x1217 MovB
	return 0; // 0x1218 Return
}


func_2319(var_0_bool, var_502_int, var_503_object)
{
	var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0; var_509_object = Obj(); var_510_bool = 0; var_511_int = 0; var_512_bool = 0; // 0x90f PushV
	var_0_bool = var_503_object; // 0x910 TMov
	var_513_bool = 0; var_514_object = Obj(); var_515_float = 0; // 0x911 PushV
	var_514_object = var_503_object; // 0x912 Mov
	var_515_float = 70.0; // 0x913 MovF
	func_3915(var_514_object, var_515_float); // 0x914 NEW_2
	var_516_bool = var_513_bool == 0; // 0x916 Not
	if(var_516_bool == 0) goto Label_2330; // 0x917 JumpB
	var_502_int = -2; // 0x918 MovI
	return 8; // 0x919 Return
	
Label_2330:
	CreateDialog(var_509_object); // 0x91a Func
	var_517_int = 0; // 0x91c PushV
	func_4377(var_517_int); // 0x91d NEW_2
	SetNPCName(var_517_int); // 0x91f ObjFunc
	var_518_int = 0; // 0x921 PushV
	func_4375(var_518_int); // 0x922 NEW_2
	SetNPCDescription(var_518_int); // 0x924 ObjFunc
	var_519_string = ""; // 0x926 PushV
	func_4379(var_519_string); // 0x927 NEW_2
	SetPhoto(var_519_string); // 0x929 ObjFunc
	var_520_string = ""; // 0x92b PushV
	func_4381(var_520_string); // 0x92c NEW_2
	SetPhoto2(var_520_string); // 0x92e ObjFunc
	var_521_int = 0; // 0x930 PushV
	func_4978(var_521_int); // 0x931 NEW_2
	SetPlayerName(var_521_int); // 0x933 ObjFunc
	var_511_int = -1; // 0x935 MovI
	IsOverrideActive(var_510_bool); // 0x936 Func
	var_522_bool = var_510_bool; // 0x938 Push
	if(var_522_bool == 0) goto Label_2364; // 0x939 JumpB
	var_502_int = -2; // 0x93a MovI
	return 8; // 0x93b Return
	
Label_2364:
	DoDialog(var_509_object); // 0x93c Func
	var_523_bool = 0; var_524_object = Obj(); // 0x93e PushV
	var_525_object = Obj(); // 0x93f PushV
	func_4191(var_525_object); // 0x940 NEW_2
	var_524_object = var_525_object; // 0x941 Mov
	func_4000(var_523_bool, var_524_object); // 0x943 NEW_2
	var_526_object = Obj(); var_527_object = Obj(); // 0x945 PushV
	var_526_object = var_503_object; // 0x946 Mov
	var_527_object = var_509_object; // 0x947 Mov
	TaskCall(11); // 0x948 TaskCall
	func_2400(var_528_object, var_529_object, var_530_string, var_531_bool, var_526_object, var_527_object); // 0x949 NEW_2
	TaskReturn(); // 0x94a TaskReturn
	IsDialogEnd(var_512_bool); // 0x94c ObjFunc
	
Label_2382:
	var_581_bool = var_512_bool == 0; // 0x94e Not
	if(var_581_bool == 0) goto Label_2389; // 0x94f JumpB
	sync(); // 0x950 Func
	IsDialogEnd(var_512_bool); // 0x952 ObjFunc
	goto Label_2382; // 0x954 Jump
	
Label_2389:
	var_582_object = Obj(); // 0x955 PushV
	var_582_object = var_503_object; // 0x956 Mov
	func_3983(); // 0x957 NEW_2
	StopDialog(var_509_object); // 0x959 Func
	GetReturnValue(var_511_int); // 0x95b ObjFunc
	var_502_int = var_511_int; // 0x95d Mov
	return 8; // 0x95e Return
}


func_534(var_2_object, var_338_string)
{
	var_339_bool = 0; // 0x217 PushV
	func_4383(var_339_bool); // 0x218 NEW_2
	var_340_bool = var_339_bool == 0; // 0x21a Not
	if(var_340_bool == 0) goto Label_541; // 0x21b JumpB
	return 0; // 0x21c Return
	
Label_541:
	var_341_bool = var_338_string == var_2_object; // 0x21d Eq
	if(var_341_bool == 0) goto Label_544; // 0x21e JumpB
	return 0; // 0x21f Return
	
Label_544:
	var_342_string = ""; var_343_bool = 0; // 0x220 PushV
	var_342_string = var_338_string; // 0x221 Mov
	var_344_string = ""; // 0x222 PushS
	var_345_bool = var_338_string == var_344_string; // 0x223 Eq
	if(var_345_bool == 0) goto Label_551; // 0x224 JumpB
	var_343_bool = 0; // 0x225 MovB
	goto Label_552; // 0x226 Jump
	
Label_552:
	func_4154(var_342_string, var_343_bool); // 0x228 NEW_2
	var_2_object = var_338_string; // 0x22a TMov
	return 0; // 0x22b Return
	
Label_551:
	var_343_bool = 1; // 0x227 MovB
}


func_4375(var_119_int)
{
	var_119_int = 515547; // 0x1117 MovI
	return 0; // 0x1118 Return
}


func_4633(var_382_bool, var_383_object)
{
	var_384_bool = 0; var_385_object = Obj(); // 0x121a PushV
	var_385_object = var_383_object; // 0x121b Mov
	func_4751(var_385_object); // 0x121c NEW_2
	if(var_384_bool == 0) goto Label_4641; // 0x121e JumpB
	var_382_bool = 1; // 0x121f MovB
	return 0; // 0x1220 Return
	
Label_4641:
	var_382_bool = 0; // 0x1221 MovB
	return 0; // 0x1222 Return
}


func_4887(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x1317 PushV
	GetDiaryRoot(var_65_object); // 0x1318 Func
	var_66_bool = var_65_object == 0; // 0x131a Not
	if(var_66_bool == 0) goto Label_4897; // 0x131b JumpB
	var_67_string = "Can't retrieve diary root"; // 0x131c PushS
	Trace(var_67_string); // 0x131d Func
	var_63_object = 0; // 0x131f MovB
	return 2; // 0x1320 Return
	
Label_4897:
	var_63_object = var_65_object; // 0x1321 Mov
	return 2; // 0x1322 Return
}


func_4377(var_118_int)
{
	var_118_int = 502872; // 0x1119 MovI
	return 0; // 0x111a Return
}


func_3612(var_2_object, var_751_string)
{
	var_752_bool = 0; // 0xe1d PushV
	func_4383(var_752_bool); // 0xe1e NEW_2
	var_753_bool = var_752_bool == 0; // 0xe20 Not
	if(var_753_bool == 0) goto Label_3619; // 0xe21 JumpB
	return 0; // 0xe22 Return
	
Label_3619:
	var_754_bool = var_751_string == var_2_object; // 0xe23 Eq
	if(var_754_bool == 0) goto Label_3622; // 0xe24 JumpB
	return 0; // 0xe25 Return
	
Label_3622:
	var_755_string = ""; var_756_bool = 0; // 0xe26 PushV
	var_755_string = var_751_string; // 0xe27 Mov
	var_757_string = ""; // 0xe28 PushS
	var_758_bool = var_751_string == var_757_string; // 0xe29 Eq
	if(var_758_bool == 0) goto Label_3629; // 0xe2a JumpB
	var_756_bool = 0; // 0xe2b MovB
	goto Label_3630; // 0xe2c Jump
	
Label_3630:
	func_4154(var_755_string, var_756_bool); // 0xe2e NEW_2
	var_2_object = var_751_string; // 0xe30 TMov
	return 0; // 0xe31 Return
	
Label_3629:
	var_756_bool = 1; // 0xe2d MovB
}


func_282(var_0_bool, var_287_int, var_288_object)
{
	var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0; var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; // 0x11a PushV
	var_0_bool = var_288_object; // 0x11b TMov
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; // 0x11c PushV
	var_299_object = var_288_object; // 0x11d Mov
	var_300_float = 70.0; // 0x11e MovF
	func_3915(var_299_object, var_300_float); // 0x11f NEW_2
	var_301_bool = var_298_bool == 0; // 0x121 Not
	if(var_301_bool == 0) goto Label_293; // 0x122 JumpB
	var_287_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_294_object); // 0x125 Func
	var_302_int = 0; // 0x127 PushV
	func_4377(var_302_int); // 0x128 NEW_2
	SetNPCName(var_302_int); // 0x12a ObjFunc
	var_303_int = 0; // 0x12c PushV
	func_4375(var_303_int); // 0x12d NEW_2
	SetNPCDescription(var_303_int); // 0x12f ObjFunc
	var_304_string = ""; // 0x131 PushV
	func_4379(var_304_string); // 0x132 NEW_2
	SetPhoto(var_304_string); // 0x134 ObjFunc
	var_305_string = ""; // 0x136 PushV
	func_4381(var_305_string); // 0x137 NEW_2
	SetPhoto2(var_305_string); // 0x139 ObjFunc
	var_306_int = 0; // 0x13b PushV
	func_4978(var_306_int); // 0x13c NEW_2
	SetPlayerName(var_306_int); // 0x13e ObjFunc
	var_296_int = -1; // 0x140 MovI
	IsOverrideActive(var_295_bool); // 0x141 Func
	var_307_bool = var_295_bool; // 0x143 Push
	if(var_307_bool == 0) goto Label_327; // 0x144 JumpB
	var_287_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_294_object); // 0x147 Func
	var_308_bool = 0; var_309_object = Obj(); // 0x149 PushV
	var_310_object = Obj(); // 0x14a PushV
	func_4191(var_310_object); // 0x14b NEW_2
	var_309_object = var_310_object; // 0x14c Mov
	func_4000(var_308_bool, var_309_object); // 0x14e NEW_2
	var_311_object = Obj(); var_312_object = Obj(); // 0x150 PushV
	var_311_object = var_288_object; // 0x151 Mov
	var_312_object = var_294_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_297_bool); // 0x157 ObjFunc
	
Label_345:
	var_427_bool = var_297_bool == 0; // 0x159 Not
	if(var_427_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_297_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_428_object = Obj(); // 0x160 PushV
	var_428_object = var_288_object; // 0x161 Mov
	func_3983(); // 0x162 NEW_2
	StopDialog(var_294_object); // 0x164 Func
	GetReturnValue(var_296_int); // 0x166 ObjFunc
	var_287_int = var_296_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_4379(var_120_string)
{
	var_120_string = "ui/NPC_MladVlad.png"; // 0x111b MovS
	return 0; // 0x111c Return
}


func_4381(var_121_string)
{
	var_121_string = "ui/NPC_MladVlad_b.png"; // 0x111d MovS
	return 0; // 0x111e Return
}


func_3358(var_2_object, var_692_string)
{
	var_693_bool = 0; // 0xd1f PushV
	func_4383(var_693_bool); // 0xd20 NEW_2
	var_694_bool = var_693_bool == 0; // 0xd22 Not
	if(var_694_bool == 0) goto Label_3365; // 0xd23 JumpB
	return 0; // 0xd24 Return
	
Label_3365:
	var_695_bool = var_692_string == var_2_object; // 0xd25 Eq
	if(var_695_bool == 0) goto Label_3368; // 0xd26 JumpB
	return 0; // 0xd27 Return
	
Label_3368:
	var_696_string = ""; var_697_bool = 0; // 0xd28 PushV
	var_696_string = var_692_string; // 0xd29 Mov
	var_698_string = ""; // 0xd2a PushS
	var_699_bool = var_692_string == var_698_string; // 0xd2b Eq
	if(var_699_bool == 0) goto Label_3375; // 0xd2c JumpB
	var_697_bool = 0; // 0xd2d MovB
	goto Label_3376; // 0xd2e Jump
	
Label_3376:
	func_4154(var_696_string, var_697_bool); // 0xd30 NEW_2
	var_2_object = var_692_string; // 0xd32 TMov
	return 0; // 0xd33 Return
	
Label_3375:
	var_697_bool = 1; // 0xd2f MovB
}


func_4383(var_113_bool)
{
	var_113_bool = 1; // 0x111f MovB
	return 0; // 0x1120 Return
}


func_4385(var_124_object)
{
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; // 0x1122 PushV
	var_127_object = var_124_object; // 0x1123 Mov
	var_128_float = -0.05; // 0x1124 MovF
	func_4272(var_126_bool, var_127_object, var_128_float); // 0x1125 NEW_2
	return 0; // 0x1127 Return
}


func_4643(var_372_bool)
{
	var_374_int = 0; var_375_string = ""; // 0x1224 PushV
	var_375_string = "ook2MladVlad2"; // 0x1225 MovS
	func_4236(var_374_int, var_375_string); // 0x1226 NEW_2
	var_376_int = 0; // 0x1228 PushI
	var_377_bool = var_374_int == var_376_int; // 0x1229 Eq
	if(var_377_bool == 0) goto Label_4653; // 0x122a JumpB
	var_372_bool = 1; // 0x122b MovB
	return 0; // 0x122c Return
	
Label_4653:
	var_372_bool = 0; // 0x122d MovB
	return 0; // 0x122e Return
}


func_3873(var_231_string, var_232_int)
{
	var_233_int = 0; var_234_int = 0; // 0xf21 PushV
	GetProperty(var_231_string, var_234_int); // 0xf22 ObjFunc
	var_235_int = var_234_int + var_232_int; // 0xf24 Add
	SetProperty(var_231_string, var_235_int); // 0xf25 ObjFunc
	return 2; // 0xf27 Return
}


func_4900(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x1324 PushV
	var_63_object = Obj(); // 0x1325 PushV
	func_4887(var_63_object); // 0x1326 NEW_2
	var_60_object = var_63_object; // 0x1327 Mov
	Find(var_56_int, var_61_object); // 0x1329 ObjFunc
	var_68_bool = var_61_object == 0; // 0x132b Not
	if(var_68_bool == 0) goto Label_4915; // 0x132c JumpB
	var_69_string = "Can't find diary parent with id: "; // 0x132d PushS
	var_70_int = var_69_string + var_56_int; // 0x132e Add
	Trace(var_70_int); // 0x132f Func
	var_54_bool = 0; // 0x1331 MovB
	return 6; // 0x1332 Return
	
Label_4915:
	AddChild(var_55_object); // 0x1333 ObjFunc
	var_71_int = 7; // 0x1335 PushI
	SendWorldWndMessage(var_71_int); // 0x1336 Func
	GetCategory(var_62_int); // 0x1338 ObjFunc
	SetDiarySection(var_62_int); // 0x133a Func
	var_54_bool = 0; // 0x133c MovB
	return 6; // 0x133d Return
}


func_3880(var_130_bool, var_131_cvector)
{
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0; // 0xf28 PushV
	GetPosition(var_135_cvector); // 0xf29 Func
	var_136_cvector = var_131_cvector - var_135_cvector; // 0xf2b Sub2
	var_138_float = GetByIndex(var_136_cvector, 0); // 0xf2c PushE
	var_139_float = GetByIndex(var_136_cvector, 2); // 0xf2d PushE
	Rotate(var_138_float, var_139_float, var_137_bool); // 0xf2e Func
	var_130_bool = var_137_bool; // 0xf30 Mov
	return 6; // 0xf31 Return
}


func_4392()
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x1128 PushV
	var_177_string = "k2q01"; // 0x1129 PushS
	var_178_int = 2; // 0x112a PushI
	SetVariable(var_177_string, var_178_int); // 0x112b Func
	var_179_object = Obj(); // 0x112d PushV
	func_4928(var_179_object); // 0x112e NEW_2
	var_176_object = var_179_object; // 0x112f Mov
	var_180_string = "k2q01MladVladGotoOspina"; // 0x1131 PushS
	var_181_string = "pt_map_ospina"; // 0x1132 PushS
	var_182_int = 1; // 0x1133 PushI
	var_183_int = 539374; // 0x1134 PushI
	var_184_float = 0; // 0x1135 PushV
	func_4317(var_184_float); // 0x1136 NEW_2
	AddMark(var_180_string, var_181_string, var_182_int, var_183_int, var_184_float); // 0x1138 ObjFunc
	func_4770(); // 0x113b NEW_2
	return 2; // 0x113d Return
}


func_4138(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0; // 0x102a PushV
	lshHasAnimation(var_263_bool, var_259_string); // 0x102b Func
	var_266_bool = var_263_bool; // 0x102d Push
	if(var_266_bool == 0) goto Label_4149; // 0x102e JumpB
	lshGetAnimTimes(var_259_string, var_264_float, var_265_float); // 0x102f Func
	var_267_bool = 0; // 0x1031 PushB
	lshPlayAnimation(var_264_float, var_265_float, var_267_bool); // 0x1032 Func
	goto Label_4153; // 0x1034 Jump
	
Label_4153:
	return 6; // 0x1039 Return
	
Label_4149:
	var_268_string = "Can't find lsh animation : "; // 0x1035 PushS
	var_269_int = var_268_string + var_259_string; // 0x1036 Add
	Trace(var_269_int); // 0x1037 Func
}


func_2093(var_0_bool, var_60_int, var_61_object)
{
	var_63_object = Obj(); var_64_bool = 0; var_65_int = 0; var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x82d PushV
	var_0_bool = var_61_object; // 0x82e TMov
	var_71_bool = 0; var_72_object = Obj(); var_73_float = 0; // 0x82f PushV
	var_72_object = var_61_object; // 0x830 Mov
	var_73_float = 70.0; // 0x831 MovF
	func_3915(var_72_object, var_73_float); // 0x832 NEW_2
	var_117_bool = var_71_bool == 0; // 0x834 Not
	if(var_117_bool == 0) goto Label_2104; // 0x835 JumpB
	var_60_int = -2; // 0x836 MovI
	return 8; // 0x837 Return
	
Label_2104:
	CreateDialog(var_67_object); // 0x838 Func
	var_118_int = 0; // 0x83a PushV
	func_4377(var_118_int); // 0x83b NEW_2
	SetNPCName(var_118_int); // 0x83d ObjFunc
	var_119_int = 0; // 0x83f PushV
	func_4375(var_119_int); // 0x840 NEW_2
	SetNPCDescription(var_119_int); // 0x842 ObjFunc
	var_120_string = ""; // 0x844 PushV
	func_4379(var_120_string); // 0x845 NEW_2
	SetPhoto(var_120_string); // 0x847 ObjFunc
	var_121_string = ""; // 0x849 PushV
	func_4381(var_121_string); // 0x84a NEW_2
	SetPhoto2(var_121_string); // 0x84c ObjFunc
	var_122_int = 0; // 0x84e PushV
	func_4978(var_122_int); // 0x84f NEW_2
	SetPlayerName(var_122_int); // 0x851 ObjFunc
	var_69_int = -1; // 0x853 MovI
	IsOverrideActive(var_68_bool); // 0x854 Func
	var_130_bool = var_68_bool; // 0x856 Push
	if(var_130_bool == 0) goto Label_2138; // 0x857 JumpB
	var_60_int = -2; // 0x858 MovI
	return 8; // 0x859 Return
	
Label_2138:
	DoDialog(var_67_object); // 0x85a Func
	var_131_bool = 0; var_132_object = Obj(); // 0x85c PushV
	var_133_object = Obj(); // 0x85d PushV
	func_4191(var_133_object); // 0x85e NEW_2
	var_132_object = var_133_object; // 0x85f Mov
	func_4000(var_131_bool, var_132_object); // 0x861 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x863 PushV
	var_226_object = var_61_object; // 0x864 Mov
	var_227_object = var_67_object; // 0x865 Mov
	TaskCall(9); // 0x866 TaskCall
	func_2174(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object); // 0x867 NEW_2
	TaskReturn(); // 0x868 TaskReturn
	IsDialogEnd(var_70_bool); // 0x86a ObjFunc
	
Label_2156:
	var_275_bool = var_70_bool == 0; // 0x86c Not
	if(var_275_bool == 0) goto Label_2163; // 0x86d JumpB
	sync(); // 0x86e Func
	IsDialogEnd(var_70_bool); // 0x870 ObjFunc
	goto Label_2156; // 0x872 Jump
	
Label_2163:
	var_276_object = Obj(); // 0x873 PushV
	var_276_object = var_61_object; // 0x874 Mov
	func_3983(); // 0x875 NEW_2
	StopDialog(var_67_object); // 0x877 Func
	GetReturnValue(var_69_int); // 0x879 ObjFunc
	var_60_int = var_69_int; // 0x87b Mov
	return 8; // 0x87c Return
}


func_4655(var_394_bool)
{
	var_396_int = 0; var_397_string = ""; // 0x1230 PushV
	var_397_string = "k2q04"; // 0x1231 MovS
	func_4236(var_396_int, var_397_string); // 0x1232 NEW_2
	var_398_int = 9; // 0x1234 PushI
	var_399_bool = var_396_int == var_398_int; // 0x1235 Eq
	if(var_399_bool == 0) goto Label_4665; // 0x1236 JumpB
	var_394_bool = 1; // 0x1237 MovB
	return 0; // 0x1238 Return
	
Label_4665:
	var_394_bool = 0; // 0x1239 MovB
	return 0; // 0x123a Return
}


func_3890(var_43_bool)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0xf32 PushV
	GetPosition(var_46_cvector); // 0xf33 ObjFunc
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); // 0xf35 PushV
	var_48_cvector = var_46_cvector; // 0xf36 Mov
	func_3880(var_47_bool, var_48_cvector); // 0xf37 NEW_2
	var_43_bool = var_47_bool; // 0xf38 Mov
	return 2; // 0xf3a Return
}


func_4154(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0x103a PushV
	lshHasAnimation(var_244_bool, var_237_string); // 0x103b Func
	var_247_bool = var_244_bool; // 0x103d Push
	if(var_247_bool == 0) goto Label_4164; // 0x103e JumpB
	lshGetAnimTimes(var_237_string, var_245_float, var_246_float); // 0x103f Func
	lshPlayAnimation(var_245_float, var_246_float, var_238_bool); // 0x1041 Func
	goto Label_4168; // 0x1043 Jump
	
Label_4168:
	return 6; // 0x1048 Return
	
Label_4164:
	var_248_string = "Can't find lsh animation : "; // 0x1044 PushS
	var_249_int = var_248_string + var_237_string; // 0x1045 Add
	Trace(var_249_int); // 0x1046 Func
}


func_4667(var_472_bool)
{
	var_474_int = 0; var_475_string = ""; // 0x123c PushV
	var_475_string = "k3q01"; // 0x123d MovS
	func_4236(var_474_int, var_475_string); // 0x123e NEW_2
	var_476_int = 2; // 0x1240 PushI
	var_477_bool = var_474_int == var_476_int; // 0x1241 Eq
	if(var_477_bool == 0) goto Label_4677; // 0x1242 JumpB
	var_472_bool = 1; // 0x1243 MovB
	return 0; // 0x1244 Return
	
Label_4677:
	var_472_bool = 0; // 0x1245 MovB
	return 0; // 0x1246 Return
}


func_3899()
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xf3b PushV
	GetPosition(var_73_cvector); // 0xf3c ObjFunc
	GetPosition(var_74_cvector); // 0xf3e Func
	var_75_cvector = var_73_cvector - var_74_cvector; // 0xf40 Sub2
	var_76_float = GetByIndex(var_75_cvector, 0); // 0xf41 PushE
	var_77_float = GetByIndex(var_75_cvector, 2); // 0xf42 PushE
	RotateAsync(var_76_float, var_77_float); // 0xf43 Func
	return 6; // 0xf45 Return
}


func_4415()
{
	var_336_string = "ook2MladVlad1"; // 0x1140 PushS
	var_337_int = 1; // 0x1141 PushI
	SetVariable(var_336_string, var_337_int); // 0x1142 Func
	return 0; // 0x1144 Return
}


func_4928(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); // 0x1340 PushV
	GetMainOutdoorScene(var_54_object); // 0x1341 Func
	var_56_bool = var_54_object == 0; // 0x1343 NullEq
	if(var_56_bool == 0) goto Label_4939; // 0x1344 JumpB
	var_57_string = "Can't find main outdoor scene"; // 0x1345 PushS
	Trace(var_57_string); // 0x1346 Func
	var_55_object = 0; // 0x1348 SetNull
	var_51_object = var_55_object; // 0x1349 Mov
	return 4; // 0x134a Return
	
Label_4939:
	GetMap(var_55_object); // 0x134b ObjFunc
	var_51_object = var_55_object; // 0x134d Mov
	return 4; // 0x134e Return
}


func_1603(var_0_bool, var_431_int, var_432_object)
{
	var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; // 0x643 PushV
	var_0_bool = var_432_object; // 0x644 TMov
	var_442_bool = 0; var_443_object = Obj(); var_444_float = 0; // 0x645 PushV
	var_443_object = var_432_object; // 0x646 Mov
	var_444_float = 70.0; // 0x647 MovF
	func_3915(var_443_object, var_444_float); // 0x648 NEW_2
	var_445_bool = var_442_bool == 0; // 0x64a Not
	if(var_445_bool == 0) goto Label_1614; // 0x64b JumpB
	var_431_int = -2; // 0x64c MovI
	return 8; // 0x64d Return
	
Label_1614:
	CreateDialog(var_438_object); // 0x64e Func
	var_446_int = 0; // 0x650 PushV
	func_4377(var_446_int); // 0x651 NEW_2
	SetNPCName(var_446_int); // 0x653 ObjFunc
	var_447_int = 0; // 0x655 PushV
	func_4375(var_447_int); // 0x656 NEW_2
	SetNPCDescription(var_447_int); // 0x658 ObjFunc
	var_448_string = ""; // 0x65a PushV
	func_4379(var_448_string); // 0x65b NEW_2
	SetPhoto(var_448_string); // 0x65d ObjFunc
	var_449_string = ""; // 0x65f PushV
	func_4381(var_449_string); // 0x660 NEW_2
	SetPhoto2(var_449_string); // 0x662 ObjFunc
	var_450_int = 0; // 0x664 PushV
	func_4978(var_450_int); // 0x665 NEW_2
	SetPlayerName(var_450_int); // 0x667 ObjFunc
	var_440_int = -1; // 0x669 MovI
	IsOverrideActive(var_439_bool); // 0x66a Func
	var_451_bool = var_439_bool; // 0x66c Push
	if(var_451_bool == 0) goto Label_1648; // 0x66d JumpB
	var_431_int = -2; // 0x66e MovI
	return 8; // 0x66f Return
	
Label_1648:
	DoDialog(var_438_object); // 0x670 Func
	var_452_bool = 0; var_453_object = Obj(); // 0x672 PushV
	var_454_object = Obj(); // 0x673 PushV
	func_4191(var_454_object); // 0x674 NEW_2
	var_453_object = var_454_object; // 0x675 Mov
	func_4000(var_452_bool, var_453_object); // 0x677 NEW_2
	var_455_object = Obj(); var_456_object = Obj(); // 0x679 PushV
	var_455_object = var_432_object; // 0x67a Mov
	var_456_object = var_438_object; // 0x67b Mov
	TaskCall(7); // 0x67c TaskCall
	func_1684(var_457_object, var_458_object, var_459_string, var_460_bool, var_455_object, var_456_object); // 0x67d NEW_2
	TaskReturn(); // 0x67e TaskReturn
	IsDialogEnd(var_441_bool); // 0x680 ObjFunc
	
Label_1666:
	var_498_bool = var_441_bool == 0; // 0x682 Not
	if(var_498_bool == 0) goto Label_1673; // 0x683 JumpB
	sync(); // 0x684 Func
	IsDialogEnd(var_441_bool); // 0x686 ObjFunc
	goto Label_1666; // 0x688 Jump
	
Label_1673:
	var_499_object = Obj(); // 0x689 PushV
	var_499_object = var_432_object; // 0x68a Mov
	func_3983(); // 0x68b NEW_2
	StopDialog(var_438_object); // 0x68d Func
	GetReturnValue(var_440_int); // 0x68f ObjFunc
	var_431_int = var_440_int; // 0x691 Mov
	return 8; // 0x692 Return
}


func_4421()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1145 PushV
	var_49_string = "k2q04"; // 0x1146 PushS
	var_50_int = 1; // 0x1147 PushI
	SetVariable(var_49_string, var_50_int); // 0x1148 Func
	var_51_object = Obj(); // 0x114a PushV
	func_4928(var_51_object); // 0x114b NEW_2
	var_48_object = var_51_object; // 0x114c Mov
	var_58_string = "k2q04MladVladGotoAnna"; // 0x114e PushS
	var_59_string = "pt_map_anna"; // 0x114f PushS
	var_60_int = 0; // 0x1150 PushI
	var_61_int = 508645; // 0x1151 PushI
	var_62_float = 0; // 0x1152 PushV
	func_4317(var_62_float); // 0x1153 NEW_2
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x1155 ObjFunc
	func_4783(); // 0x1158 NEW_2
	func_4848(); // 0x115b NEW_2
	return 2; // 0x115d Return
}


func_3910(var_77_bool)
{
	var_78_bool = 0; var_79_bool = 0; // 0xf46 PushV
	IsLoaded(var_79_bool); // 0xf47 Func
	var_77_bool = var_79_bool; // 0xf49 Mov
	return 2; // 0xf4a Return
}


func_4679(var_478_bool)
{
	var_480_int = 0; var_481_string = ""; // 0x1248 PushV
	var_481_string = "ook3MladVlad1"; // 0x1249 MovS
	func_4236(var_480_int, var_481_string); // 0x124a NEW_2
	var_482_int = 0; // 0x124c PushI
	var_483_bool = var_480_int == var_482_int; // 0x124d Eq
	if(var_483_bool == 0) goto Label_4689; // 0x124e JumpB
	var_478_bool = 1; // 0x124f MovB
	return 0; // 0x1250 Return
	
Label_4689:
	var_478_bool = 0; // 0x1251 MovB
	return 0; // 0x1252 Return
}


func_4169(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0; // 0x1049 PushV
	var_169_bool = 0; // 0x104a PushV
	func_4383(var_169_bool); // 0x104b NEW_2
	if(var_169_bool == 0) goto Label_4182; // 0x104d JumpB
	lshHasSpeech(var_168_bool, var_166_string); // 0x104e Func
	var_170_bool = var_168_bool; // 0x1050 Push
	if(var_170_bool == 0) goto Label_4182; // 0x1051 JumpB
	lshPlaySpeech(var_166_string); // 0x1052 Func
	var_165_bool = 1; // 0x1054 MovB
	return 2; // 0x1055 Return
	
Label_4182:
	var_165_bool = 0; // 0x1056 MovB
	return 2; // 0x1057 Return
}


func_3915(var_71_bool, var_73_float)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_bool = 0; // 0xf4b PushV
	GetPosition(var_84_cvector); // 0xf4c ObjFunc
	GetEyesHeight(var_83_float); // 0xf4e ObjFunc
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xf50 PushE
	var_92_float = var_92_float + var_83_float; // 0xf51 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xf52 PopE
	GetPosition(var_85_cvector); // 0xf53 Func
	GetEyesHeight(var_83_float); // 0xf55 Func
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xf57 PushE
	var_93_float = var_93_float + var_83_float; // 0xf58 Add2
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xf59 PopE
	var_86_cvector = var_84_cvector - var_85_cvector; // 0xf5a Sub2
	var_94_float = GetByIndex(var_86_cvector, 1); // 0xf5b PushE
	var_94_float = 0; // 0xf5c MovI
	SetByIndex(var_86_cvector, 1) = var_94_float; // 0xf5d PopE
	var_95_int = var_86_cvector | var_86_cvector; // 0xf5e Or
	var_96_float = sqrt(var_95_int); // 0xf5f Sqrt
	var_86_cvector = var_86_cvector / var_86_cvector; // 0xf60 Div2
	var_87_cvector = -var_86_cvector; // 0xf61 Neg2
	var_97_float = var_86_cvector * var_73_float; // 0xf62 Mult
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0xf63 PushV
	var_100_cvector = CVector(0.0, 1.0, 0.0); // 0xf64 PushVec
	var_99_cvector = var_87_cvector ^ var_100_cvector; // 0xf65 Xor2
	func_4197(var_98_cvector, var_99_cvector); // 0xf66 NEW_2
	var_106_int = 25; // 0xf68 PushI
	var_107_float = var_98_cvector * var_106_int; // 0xf69 Mult
	var_108_int = var_97_float + var_107_float; // 0xf6a Add
	var_109_cvector = CVector(0.0, 10.0, 0.0); // 0xf6b PushVec
	var_88_cvector = var_108_int - var_109_cvector; // 0xf6c Sub2
	var_89_cvector = var_85_cvector + var_88_cvector; // 0xf6d Add2
	IsOverrideActive(var_90_bool); // 0xf6e Func
	var_110_bool = var_90_bool; // 0xf70 Push
	if(var_110_bool == 0) goto Label_3956; // 0xf71 JumpB
	var_71_bool = 0; // 0xf72 MovB
	return 18; // 0xf73 Return
	
Label_3956:
	StopWorld(); // 0xf74 Func
	CameraTransit(var_89_cvector, var_87_cvector); // 0xf76 Func
	var_111_float = GetByIndex(var_88_cvector, 0); // 0xf78 PushE
	var_112_float = GetByIndex(var_88_cvector, 2); // 0xf79 PushE
	Rotate(var_111_float, var_112_float); // 0xf7a Func
	var_113_bool = 0; // 0xf7c PushV
	func_4383(var_113_bool); // 0xf7d NEW_2
	if(var_113_bool == 0) goto Label_3969; // 0xf7f JumpB
	goto Label_3977; // 0xf80 Jump
	
Label_3977:
	CameraWaitForPlayFinish(); // 0xf89 Func
	ResumeWorld(); // 0xf8b Func
	var_71_bool = 1; // 0xf8d MovB
	return 18; // 0xf8e Return
	
Label_3969:
	var_114_string = "head"; // 0xf81 PushS
	HasAnimationTrack(var_91_bool, var_114_string); // 0xf82 Func
	var_115_bool = var_91_bool; // 0xf84 Push
	if(var_115_bool == 0) goto Label_3977; // 0xf85 JumpB
	var_116_string = "head"; // 0xf86 PushS
	LookAsyncCamera(var_116_string); // 0xf87 Func
}


func_4945(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x1351 PushV
	GetMainOutdoorScene(var_108_object); // 0x1352 Func
	var_110_bool = var_108_object == 0; // 0x1354 NullEq
	if(var_110_bool == 0) goto Label_4954; // 0x1355 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1356 PushS
	Trace(var_111_string); // 0x1357 Func
	return 8; // 0x1359 Return
	
Label_4954:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x135a ObjFunc
	var_112_bool = var_109_bool == 0; // 0x135c Not
	if(var_112_bool == 0) goto Label_4964; // 0x135d JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x135e PushS
	var_114_int = var_113_string + var_99_string; // 0x135f Add
	var_115_string = " doesnt exist"; // 0x1360 PushS
	var_116_int = var_114_int + var_115_string; // 0x1361 Add
	Trace(var_116_int); // 0x1362 Func
	
Label_4964:
	GetMap(var_98_object); // 0x1364 ObjFunc
	var_117_bool = var_98_object == 0; // 0x1366 NullEq
	if(var_117_bool == 0) goto Label_4972; // 0x1367 JumpB
	var_118_string = "Can't find map"; // 0x1368 PushS
	Trace(var_118_string); // 0x1369 Func
	return 8; // 0x136b Return
	
Label_4972:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x136c PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x136d PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x136e ObjFunc
	return 8; // 0x1370 Return
}


func_4691(var_543_bool)
{
	var_545_int = 0; var_546_string = ""; // 0x1254 PushV
	var_546_string = "k5q01"; // 0x1255 MovS
	func_4236(var_545_int, var_546_string); // 0x1256 NEW_2
	var_547_int = 1; // 0x1258 PushI
	var_548_bool = var_545_int == var_547_int; // 0x1259 Eq
	if(var_548_bool == 0) goto Label_4701; // 0x125a JumpB
	var_543_bool = 1; // 0x125b MovB
	return 0; // 0x125c Return
	
Label_4701:
	var_543_bool = 0; // 0x125d MovB
	return 0; // 0x125e Return
}


func_2899(var_2_object, var_616_string)
{
	var_617_bool = 0; // 0xb54 PushV
	func_4383(var_617_bool); // 0xb55 NEW_2
	var_618_bool = var_617_bool == 0; // 0xb57 Not
	if(var_618_bool == 0) goto Label_2906; // 0xb58 JumpB
	return 0; // 0xb59 Return
	
Label_2906:
	var_619_bool = var_616_string == var_2_object; // 0xb5a Eq
	if(var_619_bool == 0) goto Label_2909; // 0xb5b JumpB
	return 0; // 0xb5c Return
	
Label_2909:
	var_620_string = ""; var_621_bool = 0; // 0xb5d PushV
	var_620_string = var_616_string; // 0xb5e Mov
	var_622_string = ""; // 0xb5f PushS
	var_623_bool = var_616_string == var_622_string; // 0xb60 Eq
	if(var_623_bool == 0) goto Label_2916; // 0xb61 JumpB
	var_621_bool = 0; // 0xb62 MovB
	goto Label_2917; // 0xb63 Jump
	
Label_2917:
	func_4154(var_620_string, var_621_bool); // 0xb65 NEW_2
	var_2_object = var_616_string; // 0xb67 TMov
	return 0; // 0xb68 Return
	
Label_2916:
	var_621_bool = 1; // 0xb64 MovB
}


func_4184()
{
	var_42_bool = 0; // 0x1058 PushV
	func_4383(var_42_bool); // 0x1059 NEW_2
	if(var_42_bool == 0) goto Label_4190; // 0x105b JumpB
	lshStopSpeech(); // 0x105c Func
	
Label_4190:
	return 0; // 0x105e Return
}


func_4191(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x105f PushV
	self(var_135_object); // 0x1060 Func
	var_133_object = var_135_object; // 0x1062 Mov
	return 2; // 0x1063 Return
}


func_4703(var_549_bool)
{
	var_551_int = 0; var_552_string = ""; // 0x1260 PushV
	var_552_string = "ook5MladVlad1"; // 0x1261 MovS
	func_4236(var_551_int, var_552_string); // 0x1262 NEW_2
	var_553_int = 0; // 0x1264 PushI
	var_554_bool = var_551_int == var_553_int; // 0x1265 Eq
	if(var_554_bool == 0) goto Label_4713; // 0x1266 JumpB
	var_549_bool = 1; // 0x1267 MovB
	return 0; // 0x1268 Return
	
Label_4713:
	var_549_bool = 0; // 0x1269 MovB
	return 0; // 0x126a Return
}


func_4447()
{
	var_201_string = "ook2MladVlad2"; // 0x1160 PushS
	var_202_int = 1; // 0x1161 PushI
	SetVariable(var_201_string, var_202_int); // 0x1162 Func
	return 0; // 0x1164 Return
}


func_2400(var_0_bool, var_1_object, var_2_object, var_3_object, var_526_object, var_527_object)
{
	var_0_bool = var_527_object; // 0x961 TMov
	var_1_object = var_526_object; // 0x962 TMov
	var_3_object = 0; // 0x963 TMovB
	var_532_int = 1; // 0x964 PushI
	if(var_532_int == 0) goto Label_2457; // 0x965 JumpB
	var_533_string = ""; // 0x966 PushV
	var_533_string = "Neutral"; // 0x967 MovS
	func_2487(var_527_object, var_533_string); // 0x968 NEW_2
	var_541_int = 525841; // 0x96a PushI
	SetMessage(var_541_int); // 0x96b TObjFunc
	ClearReplies(); // 0x96d TObjFunc
	var_542_bool = 0; // 0x96f PushV
	var_542_bool = 0; // 0x970 MovB
	var_543_bool = 0; var_544_object = Obj(); // 0x971 PushV
	var_544_object = var_1_object; // 0x972 MovT
	func_4691(var_544_object); // 0x973 NEW_2
	if(var_543_bool == 0) goto Label_2428; // 0x975 JumpB
	var_549_bool = 0; var_550_object = Obj(); // 0x976 PushV
	var_550_object = var_1_object; // 0x977 MovT
	func_4703(var_550_object); // 0x978 NEW_2
	if(var_549_bool == 0) goto Label_2428; // 0x97a JumpB
	var_542_bool = 1; // 0x97b MovB
	
Label_2428:
	if(var_542_bool == 0) goto Label_2434; // 0x97c JumpB
	var_555_int = 525842; // 0x97d PushI
	var_556_int = 30544; // 0x97e PushI
	var_557_int = 27141; // 0x97f PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x980 TObjFunc
	
Label_2434:
	var_558_bool = 0; var_559_object = Obj(); // 0x982 PushV
	var_559_object = var_1_object; // 0x983 MovT
	func_4739(var_559_object); // 0x984 NEW_2
	if(var_558_bool == 0) goto Label_2444; // 0x986 JumpB
	var_564_int = 525845; // 0x987 PushI
	var_565_int = 30542; // 0x988 PushI
	var_566_int = 27144; // 0x989 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x98a TObjFunc
	
Label_2444:
	var_567_int = 529095; // 0x98c PushI
	var_568_int = -1; // 0x98d PushI
	var_569_int = 30540; // 0x98e PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x98f TObjFunc
	var_570_int = 529096; // 0x991 PushI
	var_571_int = -1; // 0x992 PushI
	var_572_int = 30541; // 0x993 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x994 TObjFunc
	goto Label_2457; // 0x996 Jump
	
Label_2457:
	var_573_bool = 0; // 0x999 PushV
	func_4383(var_573_bool); // 0x99a NEW_2
	if(var_573_bool == 0) goto Label_2472; // 0x99c JumpB
	
Label_2461:
	lshWaitForAnimEnd(); // 0x99d Func
	var_574_object = var_3_object; // 0x99f PushT
	if(var_574_object == 0) goto Label_2466; // 0x9a0 JumpB
	goto Label_2471; // 0x9a1 Jump
	
Label_2471:
	goto Label_2486; // 0x9a7 Jump
	
Label_2486:
	return 0; // 0x9b6 Return
	
Label_2466:
	var_575_string = ""; // 0x9a2 PushV
	var_575_string = var_2_object; // 0x9a3 MovT
	func_4138(var_575_string); // 0x9a4 NEW_2
	goto Label_2461; // 0x9a6 Jump
	
Label_2472:
	var_576_string = "all"; // 0x9a8 PushS
	var_577_string = "idle"; // 0x9a9 PushS
	PlayAnimation(var_576_string, var_577_string); // 0x9aa Func
	
Label_2476:
	WaitForAnimEnd(); // 0x9ac Func
	var_578_object = var_3_object; // 0x9ae PushT
	if(var_578_object == 0) goto Label_2481; // 0x9af JumpB
	goto Label_2486; // 0x9b0 Jump
	
Label_2481:
	var_579_string = "all"; // 0x9b1 PushS
	var_580_string = "idle"; // 0x9b2 PushS
	PlayAnimation(var_579_string, var_580_string); // 0x9b3 Func
	goto Label_2476; // 0x9b5 Jump
}


func_3683(var_0_bool, var_1_object, var_2_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_cvector = CVector(0,0,0); // 0xe63 PushV
	var_62_bool = 1; // 0xe64 PushB
	SensePlayerOnly(var_62_bool); // 0xe65 Func
	func_3771(); // 0xe68 NEW_2
	GetScene(var_51_object); // 0xe6a Func
	var_2_object = 0; // 0xe6c TMovI
	
Label_3693:
	var_67_string = ""; var_68_int = 0; // 0xe6d PushV
	var_68_int = var_2_object; // 0xe6e MovT
	func_4361(var_67_string, var_68_int); // 0xe6f NEW_2
	GetLocator(var_67_string, var_52_bool); // 0xe71 ObjFunc
	var_76_bool = var_52_bool == 0; // 0xe73 Not
	if(var_76_bool == 0) goto Label_3702; // 0xe74 JumpB
	goto Label_3705; // 0xe75 Jump
	
Label_3705:
	var_77_bool = 0; // 0xe79 PushV
	func_3910(var_77_bool); // 0xe7a NEW_2
	var_80_bool = var_77_bool == 0; // 0xe7c Not
	if(var_80_bool == 0) goto Label_3715; // 0xe7d JumpB
	TaskCall(0); // 0xe7f TaskCall
	func_0(); // 0xe80 NEW_2
	TaskReturn(); // 0xe81 TaskReturn
	
Label_3715:
	func_3779(var_60_bool, var_61_cvector); // 0xe84 NEW_2
	
Label_3718:
	irand(var_53_int, var_60_bool); // 0xe86 Func
	var_101_string = ""; var_102_int = 0; // 0xe88 PushV
	var_102_int = var_53_int; // 0xe89 Mov
	func_4361(var_101_string, var_102_int); // 0xe8a NEW_2
	GetLocator(var_101_string, var_54_bool, var_55_cvector, var_56_cvector); // 0xe8c ObjFunc
	var_103_cvector = CVector(0,0,0); // 0xe8e PushV
	func_3826(var_103_cvector); // 0xe8f NEW_2
	var_57_cvector = var_55_cvector - var_103_cvector; // 0xe91 Sub2
	var_106_float = 0; var_107_cvector = CVector(0,0,0); // 0xe92 PushV
	var_107_cvector = var_57_cvector; // 0xe93 Mov
	func_4226(var_106_float, var_107_cvector); // 0xe94 NEW_2
	var_115_bool = var_106_float > var_1_object; // 0xe96 GT
	if(var_115_bool == 0) goto Label_3765; // 0xe97 JumpB
	GetHeight(var_58_float); // 0xe98 Func
	var_59_cvector = var_55_cvector; // 0xe9a Mov
	var_116_float = GetByIndex(var_59_cvector, 1); // 0xe9b PushE
	var_116_float = var_116_float + var_58_float; // 0xe9c Add2
	SetByIndex(var_59_cvector, 1) = var_116_float; // 0xe9d PopE
	CanReachByPF(var_60_bool, var_59_cvector); // 0xe9e Func
	var_117_bool = var_60_bool; // 0xea0 Push
	if(var_117_bool == 0) goto Label_3765; // 0xea1 JumpB
	var_118_int = var_57_cvector | var_57_cvector; // 0xea2 Or
	var_119_float = sqrt(var_118_int); // 0xea3 Sqrt
	var_120_float = var_0_bool / var_119_float; // 0xea4 Div
	var_121_float = var_57_cvector * var_120_float; // 0xea5 Mult
	var_61_cvector = var_55_cvector - var_121_float; // 0xea6 Sub2
	var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); // 0xea7 PushV
	var_123_cvector = var_61_cvector; // 0xea8 Mov
	var_124_cvector = var_56_cvector; // 0xea9 Mov
	TaskCall(1); // 0xeaa TaskCall
	func_13(var_125_bool, var_122_bool, var_123_cvector, var_124_cvector); // 0xeab NEW_2
	TaskReturn(); // 0xeac TaskReturn
	if(var_125_bool == 0) goto Label_3765; // 0xeae JumpB
	var_149_int = 0; // 0xeaf PushV
	var_149_int = var_53_int; // 0xeb0 Mov
	TaskCall(3); // 0xeb1 TaskCall
	func_198(var_149_int); // 0xeb2 NEW_2
	TaskReturn(); // 0xeb3 TaskReturn
	
Label_3765:
	var_202_int = 1; // 0xeb5 PushI
	Sleep(var_202_int); // 0xeb6 Func
	goto Label_3718; // 0xeb8 Jump
	
Label_3702:
	var_203_int = 1; // 0xe76 PushI
	var_2_object = var_2_object + var_203_int; // 0xe77 Add2
	goto Label_3693; // 0xe78 Jump
}


func_4197(var_98_cvector, var_99_cvector)
{
	var_101_float = 0; var_102_float = 0; // 0x1065 PushV
	var_103_int = var_99_cvector | var_99_cvector; // 0x1066 Or
	var_102_float = sqrt(var_103_int); // 0x1067 Sqrt2
	var_104_float = 0.0; // 0x1068 PushF
	var_105_bool = var_102_float < var_104_float; // 0x1069 LT
	if(var_105_bool == 0) goto Label_4205; // 0x106a JumpB
	var_98_cvector = CVector(0.0, 0.0, 0.0); // 0x106b MovV
	return 2; // 0x106c Return
	
Label_4205:
	var_98_cvector = var_99_cvector / var_99_cvector; // 0x106d Div2
	return 2; // 0x106e Return
}


func_4453()
{
	var_207_int = 0; var_208_int = 0; // 0x1165 PushV
	var_209_string = "k2q04"; // 0x1166 PushS
	var_210_int = 1000; // 0x1167 PushI
	SetVariable(var_209_string, var_210_int); // 0x1168 Func
	func_4796(); // 0x116b NEW_2
	var_219_string = "alpha_pills"; // 0x116d PushS
	var_220_int = 4; // 0x116e PushI
	RemoveItemByType(var_208_int, var_219_string, var_220_int); // 0x116f ObjFunc
	var_221_string = "beta_pills"; // 0x1171 PushS
	var_222_int = 4; // 0x1172 PushI
	RemoveItemByType(var_208_int, var_221_string, var_222_int); // 0x1173 ObjFunc
	return 2; // 0x1175 Return
}


func_4715(var_634_bool)
{
	var_636_int = 0; var_637_string = ""; // 0x126c PushV
	var_637_string = "k6q01"; // 0x126d MovS
	func_4236(var_636_int, var_637_string); // 0x126e NEW_2
	var_638_int = 1; // 0x1270 PushI
	var_639_bool = var_636_int == var_638_int; // 0x1271 Eq
	if(var_639_bool == 0) goto Label_4725; // 0x1272 JumpB
	var_634_bool = 1; // 0x1273 MovB
	return 0; // 0x1274 Return
	
Label_4725:
	var_634_bool = 0; // 0x1275 MovB
	return 0; // 0x1276 Return
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_311_object, var_312_object)
{
	var_0_bool = var_312_object; // 0x16c TMov
	var_1_object = var_311_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_317_int = 1; // 0x16f PushI
	if(var_317_int == 0) goto Label_504; // 0x170 JumpB
	var_318_bool = 0; // 0x171 PushV
	var_318_bool = 0; // 0x172 MovB
	var_319_bool = 0; var_320_object = Obj(); // 0x173 PushV
	var_320_object = var_1_object; // 0x174 MovT
	func_4597(var_320_object); // 0x175 NEW_2
	if(var_319_bool == 0) goto Label_383; // 0x177 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x178 PushV
	var_328_object = var_1_object; // 0x179 MovT
	func_4585(var_328_object); // 0x17a NEW_2
	var_333_bool = var_327_bool == 0; // 0x17c Not
	if(var_333_bool == 0) goto Label_383; // 0x17d JumpB
	var_318_bool = 1; // 0x17e MovB
	
Label_383:
	if(var_318_bool == 0) goto Label_404; // 0x17f JumpB
	var_334_object = Obj(); var_335_object = Obj(); // 0x180 PushV
	var_334_object = var_1_object; // 0x181 MovT
	var_335_object = var_0_bool; // 0x182 MovT
	func_4415(); // 0x183 NEW_2
	var_338_string = ""; // 0x185 PushV
	var_338_string = "Neutral"; // 0x186 MovS
	func_534(var_312_object, var_338_string); // 0x187 NEW_2
	var_346_int = 525337; // 0x189 PushI
	SetMessage(var_346_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_347_int = 525338; // 0x18e PushI
	var_348_int = 44250; // 0x18f PushI
	var_349_int = 26706; // 0x190 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x191 TObjFunc
	goto Label_504; // 0x193 Jump
	
Label_504:
	var_350_bool = 0; // 0x1f8 PushV
	func_4383(var_350_bool); // 0x1f9 NEW_2
	if(var_350_bool == 0) goto Label_519; // 0x1fb JumpB
	
Label_508:
	lshWaitForAnimEnd(); // 0x1fc Func
	var_351_object = var_3_object; // 0x1fe PushT
	if(var_351_object == 0) goto Label_513; // 0x1ff JumpB
	goto Label_518; // 0x200 Jump
	
Label_518:
	goto Label_533; // 0x206 Jump
	
Label_533:
	return 0; // 0x215 Return
	
Label_513:
	var_352_string = ""; // 0x201 PushV
	var_352_string = var_2_object; // 0x202 MovT
	func_4138(var_352_string); // 0x203 NEW_2
	goto Label_508; // 0x205 Jump
	
Label_519:
	var_353_string = "all"; // 0x207 PushS
	var_354_string = "idle"; // 0x208 PushS
	PlayAnimation(var_353_string, var_354_string); // 0x209 Func
	
Label_523:
	WaitForAnimEnd(); // 0x20b Func
	var_355_object = var_3_object; // 0x20d PushT
	if(var_355_object == 0) goto Label_528; // 0x20e JumpB
	goto Label_533; // 0x20f Jump
	
Label_528:
	var_356_string = "all"; // 0x210 PushS
	var_357_string = "idle"; // 0x211 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x212 Func
	goto Label_523; // 0x214 Jump
	
Label_404:
	var_358_string = ""; // 0x194 PushV
	var_358_string = "Neutral"; // 0x195 MovS
	func_534(var_312_object, var_358_string); // 0x196 NEW_2
	var_359_int = 525237; // 0x198 PushI
	SetMessage(var_359_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_360_bool = 0; var_361_object = Obj(); // 0x19d PushV
	var_361_object = var_1_object; // 0x19e MovT
	func_4585(var_361_object); // 0x19f NEW_2
	if(var_360_bool == 0) goto Label_423; // 0x1a1 JumpB
	var_362_int = 525238; // 0x1a2 PushI
	var_363_int = 26607; // 0x1a3 PushI
	var_364_int = 26606; // 0x1a4 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x1a5 TObjFunc
	
Label_423:
	var_365_bool = 0; // 0x1a7 PushV
	var_365_bool = 0; // 0x1a8 MovB
	var_366_bool = 0; var_367_object = Obj(); // 0x1a9 PushV
	var_367_object = var_1_object; // 0x1aa MovT
	func_4609(var_367_object); // 0x1ab NEW_2
	if(var_366_bool == 0) goto Label_436; // 0x1ad JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x1ae PushV
	var_373_object = var_1_object; // 0x1af MovT
	func_4643(var_373_object); // 0x1b0 NEW_2
	if(var_372_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_365_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_365_bool == 0) goto Label_442; // 0x1b4 JumpB
	var_378_int = 525372; // 0x1b5 PushI
	var_379_int = 26741; // 0x1b6 PushI
	var_380_int = 26740; // 0x1b7 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x1b8 TObjFunc
	
Label_442:
	var_381_bool = 0; // 0x1ba PushV
	var_381_bool = 0; // 0x1bb MovB
	var_382_bool = 0; var_383_object = Obj(); // 0x1bc PushV
	var_383_object = var_1_object; // 0x1bd MovT
	func_4633(var_382_bool, var_383_object); // 0x1be NEW_2
	if(var_382_bool == 0) goto Label_455; // 0x1c0 JumpB
	var_394_bool = 0; var_395_object = Obj(); // 0x1c1 PushV
	var_395_object = var_1_object; // 0x1c2 MovT
	func_4655(var_395_object); // 0x1c3 NEW_2
	if(var_394_bool == 0) goto Label_455; // 0x1c5 JumpB
	var_381_bool = 1; // 0x1c6 MovB
	
Label_455:
	if(var_381_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_400_int = 525369; // 0x1c8 PushI
	var_401_int = 44309; // 0x1c9 PushI
	var_402_int = 26737; // 0x1ca PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x1cb TObjFunc
	
Label_461:
	var_403_bool = 0; // 0x1cd PushV
	var_403_bool = 0; // 0x1ce MovB
	var_404_bool = 0; var_405_object = Obj(); // 0x1cf PushV
	var_405_object = var_1_object; // 0x1d0 MovT
	func_4633(var_404_bool, var_405_object); // 0x1d1 NEW_2
	var_406_bool = var_404_bool == 0; // 0x1d3 Not
	if(var_406_bool == 0) goto Label_475; // 0x1d4 JumpB
	var_407_bool = 0; var_408_object = Obj(); // 0x1d5 PushV
	var_408_object = var_1_object; // 0x1d6 MovT
	func_4655(var_408_object); // 0x1d7 NEW_2
	if(var_407_bool == 0) goto Label_475; // 0x1d9 JumpB
	var_403_bool = 1; // 0x1da MovB
	
Label_475:
	if(var_403_bool == 0) goto Label_481; // 0x1db JumpB
	var_409_int = 525381; // 0x1dc PushI
	var_410_int = 26750; // 0x1dd PushI
	var_411_int = 26749; // 0x1de PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x1df TObjFunc
	
Label_481:
	var_412_bool = 0; var_413_object = Obj(); // 0x1e1 PushV
	var_413_object = var_1_object; // 0x1e2 MovT
	func_4621(var_413_object); // 0x1e3 NEW_2
	if(var_412_bool == 0) goto Label_491; // 0x1e5 JumpB
	var_418_int = 525375; // 0x1e6 PushI
	var_419_int = 26744; // 0x1e7 PushI
	var_420_int = 26743; // 0x1e8 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x1e9 TObjFunc
	
Label_491:
	var_421_int = 525243; // 0x1eb PushI
	var_422_int = -1; // 0x1ec PushI
	var_423_int = 26611; // 0x1ed PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1ee TObjFunc
	var_424_int = 529207; // 0x1f0 PushI
	var_425_int = -1; // 0x1f1 PushI
	var_426_int = 30658; // 0x1f2 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x1f3 TObjFunc
	goto Label_504; // 0x1f5 Jump
}


func_4207(var_95_float, var_96_float)
{
	var_98_int = 0; // 0x1070 PushI
	var_99_bool = var_96_float < var_98_int; // 0x1071 LT
	if(var_99_bool == 0) goto Label_4213; // 0x1072 JumpB
	var_95_float = -var_96_float; // 0x1073 Neg2
	goto Label_4214; // 0x1074 Jump
	
Label_4214:
	return 0; // 0x1076 Return
	
Label_4213:
	var_95_float = var_96_float; // 0x1075 Mov
}


func_4978(var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0x1372 PushV
	var_125_string = "branch"; // 0x1373 PushS
	GetVariable(var_125_string, var_124_int); // 0x1374 Func
	var_126_int = 0; // 0x1376 PushI
	var_127_bool = var_124_int == var_126_int; // 0x1377 Eq
	if(var_127_bool == 0) goto Label_4988; // 0x1378 JumpB
	var_122_int = 1; // 0x1379 MovI
	return 2; // 0x137a Return
	
Label_4988:
	var_128_int = 1; // 0x137c PushI
	var_129_bool = var_124_int == var_128_int; // 0x137d Eq
	if(var_129_bool == 0) goto Label_4993; // 0x137e JumpB
	var_122_int = 2; // 0x137f MovI
	return 2; // 0x1380 Return
	
Label_4993:
	var_122_int = 3; // 0x1381 MovI
	return 2; // 0x1382 Return
}


func_4470()
{
	var_252_string = "k2q04"; // 0x1177 PushS
	var_253_int = 1000; // 0x1178 PushI
	SetVariable(var_252_string, var_253_int); // 0x1179 Func
	func_4809(); // 0x117c NEW_2
	return 0; // 0x117e Return
}


func_4215(var_155_float, var_156_float, var_157_float, var_158_float)
{
	var_159_bool = var_156_float < var_157_float; // 0x1078 LT
	if(var_159_bool == 0) goto Label_4220; // 0x1079 JumpB
	var_155_float = var_157_float; // 0x107a Mov
	return 0; // 0x107b Return
	
Label_4220:
	var_160_bool = var_156_float > var_158_float; // 0x107c GT
	if(var_160_bool == 0) goto Label_4224; // 0x107d JumpB
	var_155_float = var_158_float; // 0x107e Mov
	return 0; // 0x107f Return
	
Label_4224:
	var_155_float = var_156_float; // 0x1080 Mov
	return 0; // 0x1081 Return
}


func_4727(var_625_bool)
{
	var_627_int = 0; var_628_string = ""; // 0x1278 PushV
	var_628_string = "k6q02"; // 0x1279 MovS
	func_4236(var_627_int, var_628_string); // 0x127a NEW_2
	var_629_int = 2; // 0x127c PushI
	var_630_bool = var_627_int == var_629_int; // 0x127d Eq
	if(var_630_bool == 0) goto Label_4737; // 0x127e JumpB
	var_625_bool = 1; // 0x127f MovB
	return 0; // 0x1280 Return
	
Label_4737:
	var_625_bool = 0; // 0x1281 MovB
	return 0; // 0x1282 Return
}


func_4095(var_173_bool)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; // 0xfff PushV
	var_185_string = "d"; // 0x1000 PushS
	var_186_int = 0; // 0x1001 PushV
	func_4322(var_186_int); // 0x1002 NEW_2
	var_192_int = var_185_string + var_186_int; // 0x1004 Add
	var_193_string = "m"; // 0x1005 PushS
	var_180_string = var_192_int + var_193_string; // 0x1006 Add2
	var_181_int = 0; // 0x1007 MovI
	
Label_4104:
	var_194_int = 1; // 0x1008 PushI
	if(var_194_int == 0) goto Label_4117; // 0x1009 JumpB
	var_195_int = 1; // 0x100a PushI
	var_196_int = var_181_int + var_195_int; // 0x100b Add
	var_197_int = var_180_string + var_196_int; // 0x100c Add
	HasProperty(var_197_int, var_182_bool); // 0x100d ObjFunc
	var_198_bool = var_182_bool == 0; // 0x100f Not
	if(var_198_bool == 0) goto Label_4114; // 0x1010 JumpB
	goto Label_4117; // 0x1011 Jump
	
Label_4117:
	var_199_bool = var_181_int == 0; // 0x1015 Not
	if(var_199_bool == 0) goto Label_4121; // 0x1016 JumpB
	var_173_bool = 0; // 0x1017 MovB
	return 10; // 0x1018 Return
	
Label_4121:
	var_183_int = 0; // 0x1019 MovI
	var_200_int = 1; // 0x101a PushI
	var_201_bool = var_181_int > var_200_int; // 0x101b GT
	if(var_201_bool == 0) goto Label_4127; // 0x101c JumpB
	irand(var_183_int, var_181_int); // 0x101d Func
	
Label_4127:
	var_202_int = 1; // 0x101f PushI
	var_203_int = var_183_int + var_202_int; // 0x1020 Add
	var_204_int = var_180_string + var_203_int; // 0x1021 Add
	GetProperty(var_204_int, var_184_string); // 0x1022 ObjFunc
	var_205_bool = 0; var_206_string = ""; // 0x1024 PushV
	var_206_string = var_184_string; // 0x1025 Mov
	func_4169(var_205_bool, var_206_string); // 0x1026 NEW_2
	var_173_bool = var_205_bool; // 0x1027 Mov
	return 10; // 0x1029 Return
	
Label_4114:
	var_207_int = 1; // 0x1012 PushI
	var_181_int = var_181_int + var_207_int; // 0x1013 Add2
	goto Label_4104; // 0x1014 Jump
}


func_2174(var_0_bool, var_1_object, var_2_object, var_3_object, var_226_object, var_227_object)
{
	var_0_bool = var_227_object; // 0x87f TMov
	var_1_object = var_226_object; // 0x880 TMov
	var_3_object = 0; // 0x881 TMovB
	var_232_int = 1; // 0x882 PushI
	if(var_232_int == 0) goto Label_2202; // 0x883 JumpB
	var_233_string = ""; // 0x884 PushV
	var_233_string = "Neutral"; // 0x885 MovS
	func_2232(var_227_object, var_233_string); // 0x886 NEW_2
	var_250_int = 525513; // 0x888 PushI
	SetMessage(var_250_int); // 0x889 TObjFunc
	ClearReplies(); // 0x88b TObjFunc
	var_251_int = 525514; // 0x88d PushI
	var_252_int = 30738; // 0x88e PushI
	var_253_int = 26870; // 0x88f PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x890 TObjFunc
	var_254_int = 529284; // 0x892 PushI
	var_255_int = 30738; // 0x893 PushI
	var_256_int = 30737; // 0x894 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x895 TObjFunc
	goto Label_2202; // 0x897 Jump
	
Label_2202:
	var_257_bool = 0; // 0x89a PushV
	func_4383(var_257_bool); // 0x89b NEW_2
	if(var_257_bool == 0) goto Label_2217; // 0x89d JumpB
	
Label_2206:
	lshWaitForAnimEnd(); // 0x89e Func
	var_258_object = var_3_object; // 0x8a0 PushT
	if(var_258_object == 0) goto Label_2211; // 0x8a1 JumpB
	goto Label_2216; // 0x8a2 Jump
	
Label_2216:
	goto Label_2231; // 0x8a8 Jump
	
Label_2231:
	return 0; // 0x8b7 Return
	
Label_2211:
	var_259_string = ""; // 0x8a3 PushV
	var_259_string = var_2_object; // 0x8a4 MovT
	func_4138(var_259_string); // 0x8a5 NEW_2
	goto Label_2206; // 0x8a7 Jump
	
Label_2217:
	var_270_string = "all"; // 0x8a9 PushS
	var_271_string = "idle"; // 0x8aa PushS
	PlayAnimation(var_270_string, var_271_string); // 0x8ab Func
	
Label_2221:
	WaitForAnimEnd(); // 0x8ad Func
	var_272_object = var_3_object; // 0x8af PushT
	if(var_272_object == 0) goto Label_2226; // 0x8b0 JumpB
	goto Label_2231; // 0x8b1 Jump
	
Label_2226:
	var_273_string = "all"; // 0x8b2 PushS
	var_274_string = "idle"; // 0x8b3 PushS
	PlayAnimation(var_273_string, var_274_string); // 0x8b4 Func
	goto Label_2221; // 0x8b6 Jump
}


func_4479()
{
	var_268_string = "k2q04"; // 0x1180 PushS
	var_269_int = 1000; // 0x1181 PushI
	SetVariable(var_268_string, var_269_int); // 0x1182 Func
	func_4822(); // 0x1185 NEW_2
	return 0; // 0x1187 Return
}


func_4226(var_106_float, var_107_cvector)
{
	var_108_float = GetByIndex(var_107_cvector, 0); // 0x1083 PushE
	var_109_float = GetByIndex(var_107_cvector, 0); // 0x1084 PushE
	var_110_float = var_108_float * var_109_float; // 0x1085 Mult
	var_111_float = GetByIndex(var_107_cvector, 2); // 0x1086 PushE
	var_112_float = GetByIndex(var_107_cvector, 2); // 0x1087 PushE
	var_113_float = var_111_float * var_112_float; // 0x1088 Mult
	var_114_int = var_110_float + var_113_float; // 0x1089 Add
	var_106_float = sqrt(var_114_int); // 0x108a Sqrt2
	return 0; // 0x108b Return
}


func_4739(var_558_bool)
{
	var_560_int = 0; var_561_string = ""; // 0x1284 PushV
	var_561_string = "ook5MladVlad2"; // 0x1285 MovS
	func_4236(var_560_int, var_561_string); // 0x1286 NEW_2
	var_562_int = 0; // 0x1288 PushI
	var_563_bool = var_560_int == var_562_int; // 0x1289 Eq
	if(var_563_bool == 0) goto Label_4749; // 0x128a JumpB
	var_558_bool = 1; // 0x128b MovB
	return 0; // 0x128c Return
	
Label_4749:
	var_558_bool = 0; // 0x128d MovB
	return 0; // 0x128e Return
}


func_4995(var_57_object)
{
	var_58_bool = GlobalVars[2]; // 0x1384 PushGE
	var_59_bool = var_58_bool == 0; // 0x1385 Not
	if(var_59_bool == 0) goto Label_5008; // 0x1386 JumpB
	var_60_int = 0; var_61_object = Obj(); // 0x1387 PushV
	var_61_object = var_57_object; // 0x1388 Mov
	TaskCall(8); // 0x1389 TaskCall
	func_2093(var_62_object, var_60_int, var_61_object); // 0x138a NEW_2
	TaskReturn(); // 0x138b TaskReturn
	var_283_bool = GlobalVars[2]; // 0x138d PushGE
	var_283_bool = 1; // 0x138e MovB
	GlobalVars[2] = var_283_bool; // 0x138f PopGE
	
Label_5008:
	var_284_bool = 0; var_285_int = 0; // 0x1390 PushV
	var_285_int = 2; // 0x1391 MovI
	func_4331(var_284_bool, var_285_int); // 0x1392 NEW_2
	if(var_284_bool == 0) goto Label_5020; // 0x1394 JumpB
	var_287_int = 0; var_288_object = Obj(); // 0x1395 PushV
	var_288_object = var_57_object; // 0x1396 Mov
	TaskCall(4); // 0x1397 TaskCall
	func_282(var_289_object, var_287_int, var_288_object); // 0x1398 NEW_2
	TaskReturn(); // 0x1399 TaskReturn
	return 0; // 0x139b Return
	
Label_5020:
	var_429_bool = 0; var_430_int = 0; // 0x139c PushV
	var_430_int = 3; // 0x139d MovI
	func_4331(var_429_bool, var_430_int); // 0x139e NEW_2
	if(var_429_bool == 0) goto Label_5032; // 0x13a0 JumpB
	var_431_int = 0; var_432_object = Obj(); // 0x13a1 PushV
	var_432_object = var_57_object; // 0x13a2 Mov
	TaskCall(6); // 0x13a3 TaskCall
	func_1603(var_433_object, var_431_int, var_432_object); // 0x13a4 NEW_2
	TaskReturn(); // 0x13a5 TaskReturn
	return 0; // 0x13a7 Return
	
Label_5032:
	var_500_bool = 0; var_501_int = 0; // 0x13a8 PushV
	var_501_int = 5; // 0x13a9 MovI
	func_4331(var_500_bool, var_501_int); // 0x13aa NEW_2
	if(var_500_bool == 0) goto Label_5044; // 0x13ac JumpB
	var_502_int = 0; var_503_object = Obj(); // 0x13ad PushV
	var_503_object = var_57_object; // 0x13ae Mov
	TaskCall(10); // 0x13af TaskCall
	func_2319(var_504_object, var_502_int, var_503_object); // 0x13b0 NEW_2
	TaskReturn(); // 0x13b1 TaskReturn
	return 0; // 0x13b3 Return
	
Label_5044:
	var_583_bool = 0; var_584_int = 0; // 0x13b4 PushV
	var_584_int = 6; // 0x13b5 MovI
	func_4331(var_583_bool, var_584_int); // 0x13b6 NEW_2
	if(var_583_bool == 0) goto Label_5056; // 0x13b8 JumpB
	var_585_int = 0; var_586_object = Obj(); // 0x13b9 PushV
	var_586_object = var_57_object; // 0x13ba Mov
	TaskCall(12); // 0x13bb TaskCall
	func_2740(var_587_object, var_585_int, var_586_object); // 0x13bc NEW_2
	TaskReturn(); // 0x13bd TaskReturn
	return 0; // 0x13bf Return
	
Label_5056:
	var_659_bool = 0; var_660_int = 0; // 0x13c0 PushV
	var_660_int = 12; // 0x13c1 MovI
	func_4331(var_659_bool, var_660_int); // 0x13c2 NEW_2
	if(var_659_bool == 0) goto Label_5068; // 0x13c4 JumpB
	var_661_int = 0; var_662_object = Obj(); // 0x13c5 PushV
	var_662_object = var_57_object; // 0x13c6 Mov
	TaskCall(14); // 0x13c7 TaskCall
	func_3214(var_663_object, var_661_int, var_662_object); // 0x13c8 NEW_2
	TaskReturn(); // 0x13c9 TaskReturn
	return 0; // 0x13cb Return
	
Label_5068:
	var_720_int = 0; var_721_object = Obj(); // 0x13cc PushV
	var_721_object = var_57_object; // 0x13cd Mov
	TaskCall(16); // 0x13ce TaskCall
	func_3473(var_722_object, var_720_int, var_721_object); // 0x13cf NEW_2
	TaskReturn(); // 0x13d0 TaskReturn
	return 0; // 0x13d2 Return
}


func_4488()
{
	var_289_string = "k2q04"; // 0x1189 PushS
	var_290_int = 1000; // 0x118a PushI
	SetVariable(var_289_string, var_290_int); // 0x118b Func
	func_4835(); // 0x118e NEW_2
	return 0; // 0x1190 Return
}


func_4236(var_321_int, var_322_string)
{
	var_323_int = 0; var_324_int = 0; // 0x108c PushV
	GetVariable(var_322_string, var_324_int); // 0x108d Func
	var_321_int = var_324_int; // 0x108f Mov
	return 2; // 0x1090 Return
}


func_3214(var_0_bool, var_661_int, var_662_object)
{
	var_664_object = Obj(); var_665_bool = 0; var_666_int = 0; var_667_bool = 0; var_668_object = Obj(); var_669_bool = 0; var_670_int = 0; var_671_bool = 0; // 0xc8e PushV
	var_0_bool = var_662_object; // 0xc8f TMov
	var_672_bool = 0; var_673_object = Obj(); var_674_float = 0; // 0xc90 PushV
	var_673_object = var_662_object; // 0xc91 Mov
	var_674_float = 70.0; // 0xc92 MovF
	func_3915(var_673_object, var_674_float); // 0xc93 NEW_2
	var_675_bool = var_672_bool == 0; // 0xc95 Not
	if(var_675_bool == 0) goto Label_3225; // 0xc96 JumpB
	var_661_int = -2; // 0xc97 MovI
	return 8; // 0xc98 Return
	
Label_3225:
	CreateDialog(var_668_object); // 0xc99 Func
	var_676_int = 0; // 0xc9b PushV
	func_4377(var_676_int); // 0xc9c NEW_2
	SetNPCName(var_676_int); // 0xc9e ObjFunc
	var_677_int = 0; // 0xca0 PushV
	func_4375(var_677_int); // 0xca1 NEW_2
	SetNPCDescription(var_677_int); // 0xca3 ObjFunc
	var_678_string = ""; // 0xca5 PushV
	func_4379(var_678_string); // 0xca6 NEW_2
	SetPhoto(var_678_string); // 0xca8 ObjFunc
	var_679_string = ""; // 0xcaa PushV
	func_4381(var_679_string); // 0xcab NEW_2
	SetPhoto2(var_679_string); // 0xcad ObjFunc
	var_680_int = 0; // 0xcaf PushV
	func_4978(var_680_int); // 0xcb0 NEW_2
	SetPlayerName(var_680_int); // 0xcb2 ObjFunc
	var_670_int = -1; // 0xcb4 MovI
	IsOverrideActive(var_669_bool); // 0xcb5 Func
	var_681_bool = var_669_bool; // 0xcb7 Push
	if(var_681_bool == 0) goto Label_3259; // 0xcb8 JumpB
	var_661_int = -2; // 0xcb9 MovI
	return 8; // 0xcba Return
	
Label_3259:
	DoDialog(var_668_object); // 0xcbb Func
	var_682_bool = 0; var_683_object = Obj(); // 0xcbd PushV
	var_684_object = Obj(); // 0xcbe PushV
	func_4191(var_684_object); // 0xcbf NEW_2
	var_683_object = var_684_object; // 0xcc0 Mov
	func_4000(var_682_bool, var_683_object); // 0xcc2 NEW_2
	var_685_object = Obj(); var_686_object = Obj(); // 0xcc4 PushV
	var_685_object = var_662_object; // 0xcc5 Mov
	var_686_object = var_668_object; // 0xcc6 Mov
	TaskCall(15); // 0xcc7 TaskCall
	func_3295(var_687_object, var_688_object, var_689_string, var_690_bool, var_685_object, var_686_object); // 0xcc8 NEW_2
	TaskReturn(); // 0xcc9 TaskReturn
	IsDialogEnd(var_671_bool); // 0xccb ObjFunc
	
Label_3277:
	var_718_bool = var_671_bool == 0; // 0xccd Not
	if(var_718_bool == 0) goto Label_3284; // 0xcce JumpB
	sync(); // 0xccf Func
	IsDialogEnd(var_671_bool); // 0xcd1 ObjFunc
	goto Label_3277; // 0xcd3 Jump
	
Label_3284:
	var_719_object = Obj(); // 0xcd4 PushV
	var_719_object = var_662_object; // 0xcd5 Mov
	func_3983(); // 0xcd6 NEW_2
	StopDialog(var_668_object); // 0xcd8 Func
	GetReturnValue(var_670_int); // 0xcda ObjFunc
	var_661_int = var_670_int; // 0xcdc Mov
	return 8; // 0xcdd Return
}


func_4751(var_384_bool)
{
	var_386_int = 0; var_387_int = 0; // 0x128f PushV
	var_388_string = "alpha_pills"; // 0x1290 PushS
	GetItemCountOfType(var_387_int, var_388_string); // 0x1291 ObjFunc
	var_389_int = 4; // 0x1293 PushI
	var_390_bool = var_387_int < var_389_int; // 0x1294 LT
	if(var_390_bool == 0) goto Label_4760; // 0x1295 JumpB
	var_384_bool = 0; // 0x1296 MovB
	return 2; // 0x1297 Return
	
Label_4760:
	var_391_string = "beta_pills"; // 0x1298 PushS
	GetItemCountOfType(var_387_int, var_391_string); // 0x1299 ObjFunc
	var_392_int = 4; // 0x129b PushI
	var_393_bool = var_387_int < var_392_int; // 0x129c LT
	if(var_393_bool == 0) goto Label_4768; // 0x129d JumpB
	var_384_bool = 0; // 0x129e MovB
	return 2; // 0x129f Return
	
Label_4768:
	var_384_bool = 1; // 0x12a0 MovB
	return 2; // 0x12a1 Return
}


func_3983()
{
	var_277_bool = 0; var_278_bool = 0; // 0xf8f PushV
	CameraSwitchToNormal(); // 0xf90 Func
	var_279_bool = 0; // 0xf92 PushV
	func_4383(var_279_bool); // 0xf93 NEW_2
	if(var_279_bool == 0) goto Label_3991; // 0xf95 JumpB
	goto Label_3999; // 0xf96 Jump
	
Label_3999:
	return 2; // 0xf9f Return
	
Label_3991:
	var_280_string = "head"; // 0xf97 PushS
	HasAnimationTrack(var_278_bool, var_280_string); // 0xf98 Func
	var_281_bool = var_278_bool; // 0xf9a Push
	if(var_281_bool == 0) goto Label_3999; // 0xf9b JumpB
	var_282_string = "head"; // 0xf9c PushS
	UnlookAsync(var_282_string); // 0xf9d Func
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_4241(var_239_int, var_240_int)
{
	var_241_object = Obj(); var_242_object = Obj(); // 0x1091 PushV
	CreateIntVector(var_242_object); // 0x1092 Func
	add(var_239_int); // 0x1094 ObjFunc
	add(var_240_int); // 0x1096 ObjFunc
	var_243_int = 3; // 0x1098 PushI
	SendWorldWndMessage(var_243_int, var_242_object); // 0x1099 Func
	return 2; // 0x109b Return
}


func_4497()
{
	var_47_string = "ook3MladVlad1"; // 0x1192 PushS
	var_48_int = 1; // 0x1193 PushI
	SetVariable(var_47_string, var_48_int); // 0x1194 Func
	return 0; // 0x1196 Return
}


func_148(var_65_object)
{
	var_66_bool = 0; var_67_bool = 0; // 0x94 PushV
	WaitForAnimEnd(var_67_bool); // 0x95 Func
	var_68_bool = var_67_bool == 0; // 0x97 Not
	if(var_68_bool == 0) goto Label_154; // 0x98 JumpB
	return 2; // 0x99 Return
	
Label_154:
	var_69_object = Obj(); // 0x9a PushV
	var_69_object = var_65_object; // 0x9b Mov
	func_3899(); // 0x9c NEW_2
	var_78_int = 6; // 0x9e PushI
	Sleep(var_78_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_1684(var_0_bool, var_1_object, var_2_object, var_3_object, var_455_object, var_456_object)
{
	var_0_bool = var_456_object; // 0x695 TMov
	var_1_object = var_455_object; // 0x696 TMov
	var_3_object = 0; // 0x697 TMovB
	var_461_int = 1; // 0x698 PushI
	if(var_461_int == 0) goto Label_1726; // 0x699 JumpB
	var_462_string = ""; // 0x69a PushV
	var_462_string = "Neutral"; // 0x69b MovS
	func_1756(var_456_object, var_462_string); // 0x69c NEW_2
	var_470_int = 525414; // 0x69e PushI
	SetMessage(var_470_int); // 0x69f TObjFunc
	ClearReplies(); // 0x6a1 TObjFunc
	var_471_bool = 0; // 0x6a3 PushV
	var_471_bool = 0; // 0x6a4 MovB
	var_472_bool = 0; var_473_object = Obj(); // 0x6a5 PushV
	var_473_object = var_1_object; // 0x6a6 MovT
	func_4667(var_473_object); // 0x6a7 NEW_2
	if(var_472_bool == 0) goto Label_1712; // 0x6a9 JumpB
	var_478_bool = 0; var_479_object = Obj(); // 0x6aa PushV
	var_479_object = var_1_object; // 0x6ab MovT
	func_4679(var_479_object); // 0x6ac NEW_2
	if(var_478_bool == 0) goto Label_1712; // 0x6ae JumpB
	var_471_bool = 1; // 0x6af MovB
	
Label_1712:
	if(var_471_bool == 0) goto Label_1718; // 0x6b0 JumpB
	var_484_int = 525415; // 0x6b1 PushI
	var_485_int = 42567; // 0x6b2 PushI
	var_486_int = 26783; // 0x6b3 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x6b4 TObjFunc
	
Label_1718:
	var_487_int = 525418; // 0x6b6 PushI
	var_488_int = -1; // 0x6b7 PushI
	var_489_int = 26786; // 0x6b8 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x6b9 TObjFunc
	goto Label_1726; // 0x6bb Jump
	
Label_1726:
	var_490_bool = 0; // 0x6be PushV
	func_4383(var_490_bool); // 0x6bf NEW_2
	if(var_490_bool == 0) goto Label_1741; // 0x6c1 JumpB
	
Label_1730:
	lshWaitForAnimEnd(); // 0x6c2 Func
	var_491_object = var_3_object; // 0x6c4 PushT
	if(var_491_object == 0) goto Label_1735; // 0x6c5 JumpB
	goto Label_1740; // 0x6c6 Jump
	
Label_1740:
	goto Label_1755; // 0x6cc Jump
	
Label_1755:
	return 0; // 0x6db Return
	
Label_1735:
	var_492_string = ""; // 0x6c7 PushV
	var_492_string = var_2_object; // 0x6c8 MovT
	func_4138(var_492_string); // 0x6c9 NEW_2
	goto Label_1730; // 0x6cb Jump
	
Label_1741:
	var_493_string = "all"; // 0x6cd PushS
	var_494_string = "idle"; // 0x6ce PushS
	PlayAnimation(var_493_string, var_494_string); // 0x6cf Func
	
Label_1745:
	WaitForAnimEnd(); // 0x6d1 Func
	var_495_object = var_3_object; // 0x6d3 PushT
	if(var_495_object == 0) goto Label_1750; // 0x6d4 JumpB
	goto Label_1755; // 0x6d5 Jump
	
Label_1750:
	var_496_string = "all"; // 0x6d6 PushS
	var_497_string = "idle"; // 0x6d7 PushS
	PlayAnimation(var_496_string, var_497_string); // 0x6d8 Func
	goto Label_1745; // 0x6da Jump
}


func_3473(var_0_bool, var_720_int, var_721_object)
{
	var_723_object = Obj(); var_724_bool = 0; var_725_int = 0; var_726_bool = 0; var_727_object = Obj(); var_728_bool = 0; var_729_int = 0; var_730_bool = 0; // 0xd91 PushV
	var_0_bool = var_721_object; // 0xd92 TMov
	var_731_bool = 0; var_732_object = Obj(); var_733_float = 0; // 0xd93 PushV
	var_732_object = var_721_object; // 0xd94 Mov
	var_733_float = 70.0; // 0xd95 MovF
	func_3915(var_732_object, var_733_float); // 0xd96 NEW_2
	var_734_bool = var_731_bool == 0; // 0xd98 Not
	if(var_734_bool == 0) goto Label_3484; // 0xd99 JumpB
	var_720_int = -2; // 0xd9a MovI
	return 8; // 0xd9b Return
	
Label_3484:
	CreateDialog(var_727_object); // 0xd9c Func
	var_735_int = 0; // 0xd9e PushV
	func_4377(var_735_int); // 0xd9f NEW_2
	SetNPCName(var_735_int); // 0xda1 ObjFunc
	var_736_int = 0; // 0xda3 PushV
	func_4375(var_736_int); // 0xda4 NEW_2
	SetNPCDescription(var_736_int); // 0xda6 ObjFunc
	var_737_string = ""; // 0xda8 PushV
	func_4379(var_737_string); // 0xda9 NEW_2
	SetPhoto(var_737_string); // 0xdab ObjFunc
	var_738_string = ""; // 0xdad PushV
	func_4381(var_738_string); // 0xdae NEW_2
	SetPhoto2(var_738_string); // 0xdb0 ObjFunc
	var_739_int = 0; // 0xdb2 PushV
	func_4978(var_739_int); // 0xdb3 NEW_2
	SetPlayerName(var_739_int); // 0xdb5 ObjFunc
	var_729_int = -1; // 0xdb7 MovI
	IsOverrideActive(var_728_bool); // 0xdb8 Func
	var_740_bool = var_728_bool; // 0xdba Push
	if(var_740_bool == 0) goto Label_3518; // 0xdbb JumpB
	var_720_int = -2; // 0xdbc MovI
	return 8; // 0xdbd Return
	
Label_3518:
	DoDialog(var_727_object); // 0xdbe Func
	var_741_bool = 0; var_742_object = Obj(); // 0xdc0 PushV
	var_743_object = Obj(); // 0xdc1 PushV
	func_4191(var_743_object); // 0xdc2 NEW_2
	var_742_object = var_743_object; // 0xdc3 Mov
	func_4000(var_741_bool, var_742_object); // 0xdc5 NEW_2
	var_744_object = Obj(); var_745_object = Obj(); // 0xdc7 PushV
	var_744_object = var_721_object; // 0xdc8 Mov
	var_745_object = var_727_object; // 0xdc9 Mov
	TaskCall(17); // 0xdca TaskCall
	func_3554(var_746_object, var_747_object, var_748_string, var_749_bool, var_744_object, var_745_object); // 0xdcb NEW_2
	TaskReturn(); // 0xdcc TaskReturn
	IsDialogEnd(var_730_bool); // 0xdce ObjFunc
	
Label_3536:
	var_774_bool = var_730_bool == 0; // 0xdd0 Not
	if(var_774_bool == 0) goto Label_3543; // 0xdd1 JumpB
	sync(); // 0xdd2 Func
	IsDialogEnd(var_730_bool); // 0xdd4 ObjFunc
	goto Label_3536; // 0xdd6 Jump
	
Label_3543:
	var_775_object = Obj(); // 0xdd7 PushV
	var_775_object = var_721_object; // 0xdd8 Mov
	func_3983(); // 0xdd9 NEW_2
	StopDialog(var_727_object); // 0xddb Func
	GetReturnValue(var_729_int); // 0xddd ObjFunc
	var_720_int = var_729_int; // 0xddf Mov
	return 8; // 0xde0 Return
}


func_4503()
{
	var_47_string = "ook5MladVlad1"; // 0x1198 PushS
	var_48_int = 1; // 0x1199 PushI
	SetVariable(var_47_string, var_48_int); // 0x119a Func
	return 0; // 0x119c Return
}


func_4253(var_226_object, var_227_int)
{
	var_228_int = 0; var_229_int = 0; // 0x109d PushV
	var_230_object = Obj(); var_231_string = ""; var_232_int = 0; // 0x109e PushV
	var_230_object = var_226_object; // 0x109f Mov
	var_231_string = "money"; // 0x10a0 MovS
	var_232_int = var_227_int; // 0x10a1 Mov
	func_3873(var_231_string, var_232_int); // 0x10a2 NEW_2
	var_236_int = 0; // 0x10a4 PushI
	var_237_bool = var_227_int > var_236_int; // 0x10a5 GT
	if(var_237_bool == 0) goto Label_4271; // 0x10a6 JumpB
	var_238_string = "Money"; // 0x10a7 PushS
	GetInvItemByName(var_229_int, var_238_string); // 0x10a8 Func
	var_239_int = 0; var_240_int = 0; // 0x10aa PushV
	var_239_int = var_229_int; // 0x10ab Mov
	var_240_int = var_227_int; // 0x10ac Mov
	func_4241(var_239_int, var_240_int); // 0x10ad NEW_2
	
Label_4271:
	return 2; // 0x10af Return
}


func_4509()
{
	func_4861(); // 0x119f NEW_2
	return 0; // 0x11a1 Return
}


func_4000(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; // 0xfa0 PushV
	var_140_string = "voice_common"; // 0xfa1 PushS
	GetVariable(var_140_string, var_138_int); // 0xfa2 Func
	var_141_int = var_138_int; // 0xfa4 Push
	if(var_141_int == 0) goto Label_4038; // 0xfa5 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0xfa6 PushV
	var_143_object = var_132_object; // 0xfa7 Mov
	func_4058(var_143_object); // 0xfa8 NEW_2
	var_172_bool = var_142_bool == 0; // 0xfaa Not
	if(var_172_bool == 0) goto Label_4020; // 0xfab JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xfac PushV
	var_174_object = var_132_object; // 0xfad Mov
	func_4095(var_174_object); // 0xfae NEW_2
	var_208_bool = var_173_bool == 0; // 0xfb0 Not
	if(var_208_bool == 0) goto Label_4020; // 0xfb1 JumpB
	var_131_bool = 0; // 0xfb2 MovB
	return 4; // 0xfb3 Return
	
Label_4020:
	var_209_int = 2; // 0xfb4 PushI
	irand(var_139_int, var_209_int); // 0xfb5 Func
	var_210_int = var_139_int; // 0xfb7 Push
	if(var_210_int == 0) goto Label_4033; // 0xfb8 JumpB
	var_211_string = "voice_common"; // 0xfb9 PushS
	var_212_int = 1; // 0xfba PushI
	var_213_int = var_138_int + var_212_int; // 0xfbb Add
	var_214_int = 3; // 0xfbc PushI
	var_215_int = var_213_int / var_214_int; // 0xfbd Mod
	SetVariable(var_211_string, var_215_int); // 0xfbe Func
	goto Label_4037; // 0xfc0 Jump
	
Label_4037:
	goto Label_4056; // 0xfc5 Jump
	
Label_4056:
	var_131_bool = 1; // 0xfd8 MovB
	return 4; // 0xfd9 Return
	
Label_4033:
	var_216_string = "voice_common"; // 0xfc1 PushS
	var_217_int = 0; // 0xfc2 PushI
	SetVariable(var_216_string, var_217_int); // 0xfc3 Func
	
Label_4038:
	var_218_bool = 0; var_219_object = Obj(); // 0xfc6 PushV
	var_219_object = var_132_object; // 0xfc7 Mov
	func_4095(var_219_object); // 0xfc8 NEW_2
	var_220_bool = var_218_bool == 0; // 0xfca Not
	if(var_220_bool == 0) goto Label_4052; // 0xfcb JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xfcc PushV
	var_222_object = var_132_object; // 0xfcd Mov
	func_4058(var_222_object); // 0xfce NEW_2
	var_223_bool = var_221_bool == 0; // 0xfd0 Not
	if(var_223_bool == 0) goto Label_4052; // 0xfd1 JumpB
	var_131_bool = 0; // 0xfd2 MovB
	return 4; // 0xfd3 Return
	
Label_4052:
	var_224_string = "voice_common"; // 0xfd4 PushS
	var_225_int = 1; // 0xfd5 PushI
	SetVariable(var_224_string, var_225_int); // 0xfd6 Func
}


func_4770()
{
	var_185_object = Obj(); var_186_object = Obj(); // 0x12a2 PushV
	var_187_int = 463; // 0x12a3 PushI
	var_188_int = 1; // 0x12a4 PushI
	var_189_int = 527779; // 0x12a5 PushI
	CreateDiaryEntry(var_186_object, var_187_int, var_188_int, var_189_int); // 0x12a6 Func
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0; // 0x12a8 PushV
	var_191_object = var_186_object; // 0x12a9 Mov
	var_192_int = 461; // 0x12aa MovI
	func_4900(var_190_bool, var_191_object, var_192_int); // 0x12ab NEW_2
	return 2; // 0x12ad Return
}


func_4514()
{
	var_47_string = "k6q02"; // 0x11a3 PushS
	var_48_int = 3; // 0x11a4 PushI
	SetVariable(var_47_string, var_48_int); // 0x11a5 Func
	func_4874(); // 0x11a8 NEW_2
	return 0; // 0x11aa Return
}


func_4523(var_278_object)
{
	var_280_string = "money1000 is given"; // 0x11ac PushS
	Trace(var_280_string); // 0x11ad Func
	var_281_object = Obj(); var_282_int = 0; // 0x11af PushV
	var_281_object = var_278_object; // 0x11b0 Mov
	var_282_int = 1000; // 0x11b1 MovI
	func_4253(var_281_object, var_282_int); // 0x11b2 NEW_2
	return 0; // 0x11b4 Return
}


func_4783()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x12af PushV
	var_67_int = 507; // 0x12b0 PushI
	var_68_int = 2; // 0x12b1 PushI
	var_69_int = 529706; // 0x12b2 PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x12b3 Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x12b5 PushV
	var_71_object = var_66_object; // 0x12b6 Mov
	var_72_int = -1; // 0x12b7 MovI
	func_4900(var_70_bool, var_71_object, var_72_int); // 0x12b8 NEW_2
	return 2; // 0x12ba Return
}


func_4272(var_126_bool, var_127_object, var_128_float)
{
	var_129_bool = var_127_object == 0; // 0x10b1 Not
	if(var_129_bool == 0) goto Label_4277; // 0x10b2 JumpB
	var_126_bool = 0; // 0x10b3 MovB
	return 0; // 0x10b4 Return
	
Label_4277:
	var_130_int = 0; // 0x10b5 PushI
	var_131_bool = var_128_float > var_130_int; // 0x10b6 GT
	if(var_131_bool == 0) goto Label_4284; // 0x10b7 JumpB
	var_132_int = 8; // 0x10b8 PushI
	SendWorldWndMessage(var_132_int); // 0x10b9 Func
	goto Label_4293; // 0x10bb Jump
	
Label_4293:
	var_133_float = 0; // 0x10c5 PushV
	var_133_float = var_128_float; // 0x10c6 Mov
	func_4307(var_133_float); // 0x10c7 NEW_2
	var_137_bool = 0; var_138_object = Obj(); var_139_string = ""; var_140_float = 0; var_141_float = 0; var_142_float = 0; // 0x10c9 PushV
	var_138_object = var_127_object; // 0x10ca Mov
	var_139_string = "reputation"; // 0x10cb MovS
	var_140_float = var_128_float; // 0x10cc Mov
	var_141_float = 0; // 0x10cd MovI
	var_142_float = 1; // 0x10ce MovI
	func_3851(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float); // 0x10cf NEW_2
	var_126_bool = 1; // 0x10d1 MovB
	return 0; // 0x10d2 Return
	
Label_4284:
	var_161_int = 0; // 0x10bc PushI
	var_162_bool = var_128_float < var_161_int; // 0x10bd LT
	if(var_162_bool == 0) goto Label_4291; // 0x10be JumpB
	var_163_int = 9; // 0x10bf PushI
	SendWorldWndMessage(var_163_int); // 0x10c0 Func
	goto Label_4293; // 0x10c2 Jump
	
Label_4291:
	var_126_bool = 0; // 0x10c3 MovB
	return 0; // 0x10c4 Return
}


func_2740(var_0_bool, var_585_int, var_586_object)
{
	var_588_object = Obj(); var_589_bool = 0; var_590_int = 0; var_591_bool = 0; var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; // 0xab4 PushV
	var_0_bool = var_586_object; // 0xab5 TMov
	var_596_bool = 0; var_597_object = Obj(); var_598_float = 0; // 0xab6 PushV
	var_597_object = var_586_object; // 0xab7 Mov
	var_598_float = 70.0; // 0xab8 MovF
	func_3915(var_597_object, var_598_float); // 0xab9 NEW_2
	var_599_bool = var_596_bool == 0; // 0xabb Not
	if(var_599_bool == 0) goto Label_2751; // 0xabc JumpB
	var_585_int = -2; // 0xabd MovI
	return 8; // 0xabe Return
	
Label_2751:
	CreateDialog(var_592_object); // 0xabf Func
	var_600_int = 0; // 0xac1 PushV
	func_4377(var_600_int); // 0xac2 NEW_2
	SetNPCName(var_600_int); // 0xac4 ObjFunc
	var_601_int = 0; // 0xac6 PushV
	func_4375(var_601_int); // 0xac7 NEW_2
	SetNPCDescription(var_601_int); // 0xac9 ObjFunc
	var_602_string = ""; // 0xacb PushV
	func_4379(var_602_string); // 0xacc NEW_2
	SetPhoto(var_602_string); // 0xace ObjFunc
	var_603_string = ""; // 0xad0 PushV
	func_4381(var_603_string); // 0xad1 NEW_2
	SetPhoto2(var_603_string); // 0xad3 ObjFunc
	var_604_int = 0; // 0xad5 PushV
	func_4978(var_604_int); // 0xad6 NEW_2
	SetPlayerName(var_604_int); // 0xad8 ObjFunc
	var_594_int = -1; // 0xada MovI
	IsOverrideActive(var_593_bool); // 0xadb Func
	var_605_bool = var_593_bool; // 0xadd Push
	if(var_605_bool == 0) goto Label_2785; // 0xade JumpB
	var_585_int = -2; // 0xadf MovI
	return 8; // 0xae0 Return
	
Label_2785:
	DoDialog(var_592_object); // 0xae1 Func
	var_606_bool = 0; var_607_object = Obj(); // 0xae3 PushV
	var_608_object = Obj(); // 0xae4 PushV
	func_4191(var_608_object); // 0xae5 NEW_2
	var_607_object = var_608_object; // 0xae6 Mov
	func_4000(var_606_bool, var_607_object); // 0xae8 NEW_2
	var_609_object = Obj(); var_610_object = Obj(); // 0xaea PushV
	var_609_object = var_586_object; // 0xaeb Mov
	var_610_object = var_592_object; // 0xaec Mov
	TaskCall(13); // 0xaed TaskCall
	func_2821(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object); // 0xaee NEW_2
	TaskReturn(); // 0xaef TaskReturn
	IsDialogEnd(var_595_bool); // 0xaf1 ObjFunc
	
Label_2803:
	var_657_bool = var_595_bool == 0; // 0xaf3 Not
	if(var_657_bool == 0) goto Label_2810; // 0xaf4 JumpB
	sync(); // 0xaf5 Func
	IsDialogEnd(var_595_bool); // 0xaf7 ObjFunc
	goto Label_2803; // 0xaf9 Jump
	
Label_2810:
	var_658_object = Obj(); // 0xafa PushV
	var_658_object = var_586_object; // 0xafb Mov
	func_3983(); // 0xafc NEW_2
	StopDialog(var_592_object); // 0xafe Func
	GetReturnValue(var_594_int); // 0xb00 ObjFunc
	var_585_int = var_594_int; // 0xb02 Mov
	return 8; // 0xb03 Return
}


func_4533(var_223_object)
{
	var_225_string = "money500 is given"; // 0x11b6 PushS
	Trace(var_225_string); // 0x11b7 Func
	var_226_object = Obj(); var_227_int = 0; // 0x11b9 PushV
	var_226_object = var_223_object; // 0x11ba Mov
	var_227_int = 500; // 0x11bb MovI
	func_4253(var_226_object, var_227_int); // 0x11bc NEW_2
	return 0; // 0x11be Return
}


func_2487(var_2_object, var_533_string)
{
	var_534_bool = 0; // 0x9b8 PushV
	func_4383(var_534_bool); // 0x9b9 NEW_2
	var_535_bool = var_534_bool == 0; // 0x9bb Not
	if(var_535_bool == 0) goto Label_2494; // 0x9bc JumpB
	return 0; // 0x9bd Return
	
Label_2494:
	var_536_bool = var_533_string == var_2_object; // 0x9be Eq
	if(var_536_bool == 0) goto Label_2497; // 0x9bf JumpB
	return 0; // 0x9c0 Return
	
Label_2497:
	var_537_string = ""; var_538_bool = 0; // 0x9c1 PushV
	var_537_string = var_533_string; // 0x9c2 Mov
	var_539_string = ""; // 0x9c3 PushS
	var_540_bool = var_533_string == var_539_string; // 0x9c4 Eq
	if(var_540_bool == 0) goto Label_2504; // 0x9c5 JumpB
	var_538_bool = 0; // 0x9c6 MovB
	goto Label_2505; // 0x9c7 Jump
	
Label_2505:
	func_4154(var_537_string, var_538_bool); // 0x9c9 NEW_2
	var_2_object = var_533_string; // 0x9cb TMov
	return 0; // 0x9cc Return
	
Label_2504:
	var_538_bool = 1; // 0x9c8 MovB
}


func_2232(var_2_object, var_233_string)
{
	var_234_bool = 0; // 0x8b9 PushV
	func_4383(var_234_bool); // 0x8ba NEW_2
	var_235_bool = var_234_bool == 0; // 0x8bc Not
	if(var_235_bool == 0) goto Label_2239; // 0x8bd JumpB
	return 0; // 0x8be Return
	
Label_2239:
	var_236_bool = var_233_string == var_2_object; // 0x8bf Eq
	if(var_236_bool == 0) goto Label_2242; // 0x8c0 JumpB
	return 0; // 0x8c1 Return
	
Label_2242:
	var_237_string = ""; var_238_bool = 0; // 0x8c2 PushV
	var_237_string = var_233_string; // 0x8c3 Mov
	var_239_string = ""; // 0x8c4 PushS
	var_240_bool = var_233_string == var_239_string; // 0x8c5 Eq
	if(var_240_bool == 0) goto Label_2249; // 0x8c6 JumpB
	var_238_bool = 0; // 0x8c7 MovB
	goto Label_2250; // 0x8c8 Jump
	
Label_2250:
	func_4154(var_237_string, var_238_bool); // 0x8ca NEW_2
	var_2_object = var_233_string; // 0x8cc TMov
	return 0; // 0x8cd Return
	
Label_2249:
	var_238_bool = 1; // 0x8c9 MovB
}


func_3771()
{
	var_63_string = ""; var_64_string = ""; // 0xebb PushV
	var_65_string = "loc"; // 0xebc PushS
	GetProperty(var_65_string, var_64_string); // 0xebd Func
	var_66_string = GlobalVars[0]; // 0xebf PushGE
	var_66_string = var_64_string; // 0xec0 Mov
	GlobalVars[0] = var_66_string; // 0xec1 PopGE
	return 2; // 0xec2 Return
}


func_4796()
{
	var_211_object = Obj(); var_212_object = Obj(); // 0x12bc PushV
	var_213_int = 513; // 0x12bd PushI
	var_214_int = 2; // 0x12be PushI
	var_215_int = 529712; // 0x12bf PushI
	CreateDiaryEntry(var_212_object, var_213_int, var_214_int, var_215_int); // 0x12c0 Func
	var_216_bool = 0; var_217_object = Obj(); var_218_int = 0; // 0x12c2 PushV
	var_217_object = var_212_object; // 0x12c3 Mov
	var_218_int = 507; // 0x12c4 MovI
	func_4900(var_216_bool, var_217_object, var_218_int); // 0x12c5 NEW_2
	return 2; // 0x12c7 Return
}


func_4543()
{
	var_246_string = "playsound"; // 0x11c0 PushS
	var_247_string = "givemoney"; // 0x11c1 PushS
	TriggerWorld(var_246_string, var_247_string); // 0x11c2 Func
	return 0; // 0x11c4 Return
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_3779(var_0_bool, var_1_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xec3 PushV
	var_87_string = "all"; // 0xec4 PushS
	var_88_string = "walk_stopl"; // 0xec5 PushS
	GetAnimationOffset(var_85_cvector, var_87_string, var_88_string); // 0xec6 Func
	var_89_string = "all"; // 0xec8 PushS
	var_90_string = "walk_stopr"; // 0xec9 PushS
	GetAnimationOffset(var_86_cvector, var_89_string, var_90_string); // 0xeca Func
	var_91_float = GetByIndex(var_85_cvector, 2); // 0xecc PushE
	var_92_float = GetByIndex(var_86_cvector, 2); // 0xecd PushE
	var_93_int = var_91_float + var_92_float; // 0xece Add
	var_94_float = 2.0; // 0xecf PushF
	var_0_bool = var_93_int / var_93_int; // 0xed0 Div2
	var_95_float = 0; var_96_float = 0; // 0xed1 PushV
	var_97_float = GetByIndex(var_85_cvector, 2); // 0xed2 PushE
	var_96_float = var_97_float - var_0_bool; // 0xed3 Sub2
	func_4207(var_95_float, var_96_float); // 0xed4 NEW_2
	var_100_int = 40; // 0xed6 PushI
	var_1_object = var_95_float + var_100_int; // 0xed7 Add2
	return 4; // 0xed8 Return
}


func_4549(var_166_object)
{
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0; // 0x11c6 PushV
	var_169_object = var_166_object; // 0x11c7 Mov
	var_170_float = -0.02; // 0x11c8 MovF
	func_4272(var_168_bool, var_169_object, var_170_float); // 0x11c9 NEW_2
	return 0; // 0x11cb Return
}


func_198(var_149_int)
{
	var_150_string = ""; var_151_bool = 0; var_152_string = ""; var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_string = ""; var_158_bool = 0; var_159_string = ""; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_int = 0; // 0xc6 PushV
	var_164_int = var_149_int; // 0xc7 Push
	if(var_164_int == 0) goto Label_204; // 0xc8 JumpB
	var_165_string = "ptidle"; // 0xc9 PushS
	var_157_string = var_165_string + var_149_int; // 0xca Add2
	goto Label_205; // 0xcb Jump
	
Label_205:
	HasProperty(var_157_string, var_158_bool); // 0xcd Func
	var_166_bool = var_158_bool; // 0xcf Push
	if(var_166_bool == 0) goto Label_229; // 0xd0 JumpB
	GetProperty(var_157_string, var_159_string); // 0xd1 Func
	var_167_int = 0; var_168_string = ""; // 0xd3 PushV
	var_168_string = var_159_string; // 0xd4 Mov
	func_264(var_167_int, var_168_string); // 0xd5 NEW_2
	var_160_int = var_167_int; // 0xd6 Mov
	irand(var_161_int, var_160_int); // 0xd8 Func
	var_181_string = "all"; // 0xda PushS
	var_182_string = ""; var_183_string = ""; var_184_int = 0; // 0xdb PushV
	var_183_string = var_159_string; // 0xdc Mov
	var_184_int = var_161_int; // 0xdd Mov
	func_256(var_182_string, var_183_string, var_184_int); // 0xde NEW_2
	PlayAnimation(var_181_string, var_182_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	goto Label_246; // 0xe4 Jump
	
Label_246:
	return 14; // 0xf6 Return
	
Label_229:
	var_185_int = 0; // 0xe5 PushV
	func_4344(var_185_int); // 0xe6 NEW_2
	var_162_int = var_185_int; // 0xe7 Mov
	var_198_int = var_162_int; // 0xe9 Push
	if(var_198_int == 0) goto Label_246; // 0xea JumpB
	irand(var_163_int, var_162_int); // 0xeb Func
	var_199_string = "all"; // 0xed PushS
	var_200_string = ""; var_201_int = 0; // 0xee PushV
	var_201_int = var_163_int; // 0xef Mov
	func_4337(var_200_string, var_201_int); // 0xf0 NEW_2
	PlayAnimation(var_199_string, var_200_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_157_string = "ptidle"; // 0xcc MovS
}


func_4809()
{
	var_254_object = Obj(); var_255_object = Obj(); // 0x12c9 PushV
	var_256_int = 514; // 0x12ca PushI
	var_257_int = 2; // 0x12cb PushI
	var_258_int = 529713; // 0x12cc PushI
	CreateDiaryEntry(var_255_object, var_256_int, var_257_int, var_258_int); // 0x12cd Func
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0; // 0x12cf PushV
	var_260_object = var_255_object; // 0x12d0 Mov
	var_261_int = 507; // 0x12d1 MovI
	func_4900(var_259_bool, var_260_object, var_261_int); // 0x12d2 NEW_2
	return 2; // 0x12d4 Return
}


func_4556(var_299_object)
{
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0; // 0x11cd PushV
	var_302_object = var_299_object; // 0x11ce Mov
	var_303_float = 0.02; // 0x11cf MovF
	func_4272(var_301_bool, var_302_object, var_303_float); // 0x11d0 NEW_2
	return 0; // 0x11d2 Return
}


func_4307(var_133_float)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x10d3 PushV
	CreateFloatVector(var_135_object); // 0x10d4 Func
	add(var_133_float); // 0x10d6 ObjFunc
	var_136_int = 16; // 0x10d8 PushI
	SendWorldWndMessage(var_136_int, var_135_object); // 0x10d9 Func
	return 2; // 0x10db Return
}


func_4563()
{
	var_80_string = "ook5MladVlad2"; // 0x11d4 PushS
	var_81_int = 1; // 0x11d5 PushI
	SetVariable(var_80_string, var_81_int); // 0x11d6 Func
	return 0; // 0x11d8 Return
}


func_4822()
{
	var_270_object = Obj(); var_271_object = Obj(); // 0x12d6 PushV
	var_272_int = 515; // 0x12d7 PushI
	var_273_int = 2; // 0x12d8 PushI
	var_274_int = 529714; // 0x12d9 PushI
	CreateDiaryEntry(var_271_object, var_272_int, var_273_int, var_274_int); // 0x12da Func
	var_275_bool = 0; var_276_object = Obj(); var_277_int = 0; // 0x12dc PushV
	var_276_object = var_271_object; // 0x12dd Mov
	var_277_int = 507; // 0x12de MovI
	func_4900(var_275_bool, var_276_object, var_277_int); // 0x12df NEW_2
	return 2; // 0x12e1 Return
}


func_4569()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x11da PushV
	var_101_object = Obj(); // 0x11db PushV
	func_4928(var_101_object); // 0x11dc NEW_2
	var_98_object = var_101_object; // 0x11dd Mov
	var_99_string = "pt_map_anna"; // 0x11df MovS
	var_100_float = 2; // 0x11e0 MovI
	func_4945(var_98_object, var_99_string, var_100_float); // 0x11e1 NEW_2
	var_121_object = Obj(); // 0x11e3 PushV
	func_4928(var_121_object); // 0x11e4 NEW_2
	ShowMap(var_121_object); // 0x11e6 ObjFunc
	return 0; // 0x11e8 Return
}


func_4058(var_142_bool)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; // 0xfda PushV
	var_149_string = "c"; // 0xfdb MovS
	var_150_int = 0; // 0xfdc MovI
	
Label_4061:
	var_154_int = 1; // 0xfdd PushI
	if(var_154_int == 0) goto Label_4074; // 0xfde JumpB
	var_155_int = 1; // 0xfdf PushI
	var_156_int = var_150_int + var_155_int; // 0xfe0 Add
	var_157_int = var_149_string + var_156_int; // 0xfe1 Add
	HasProperty(var_157_int, var_151_bool); // 0xfe2 ObjFunc
	var_158_bool = var_151_bool == 0; // 0xfe4 Not
	if(var_158_bool == 0) goto Label_4071; // 0xfe5 JumpB
	goto Label_4074; // 0xfe6 Jump
	
Label_4074:
	var_159_bool = var_150_int == 0; // 0xfea Not
	if(var_159_bool == 0) goto Label_4078; // 0xfeb JumpB
	var_142_bool = 0; // 0xfec MovB
	return 10; // 0xfed Return
	
Label_4078:
	var_152_int = 0; // 0xfee MovI
	var_160_int = 1; // 0xfef PushI
	var_161_bool = var_150_int > var_160_int; // 0xff0 GT
	if(var_161_bool == 0) goto Label_4084; // 0xff1 JumpB
	irand(var_152_int, var_150_int); // 0xff2 Func
	
Label_4084:
	var_162_int = 1; // 0xff4 PushI
	var_163_int = var_152_int + var_162_int; // 0xff5 Add
	var_164_int = var_149_string + var_163_int; // 0xff6 Add
	GetProperty(var_164_int, var_153_string); // 0xff7 ObjFunc
	var_165_bool = 0; var_166_string = ""; // 0xff9 PushV
	var_166_string = var_153_string; // 0xffa Mov
	func_4169(var_165_bool, var_166_string); // 0xffb NEW_2
	var_142_bool = var_165_bool; // 0xffc Mov
	return 10; // 0xffe Return
	
Label_4071:
	var_171_int = 1; // 0xfe7 PushI
	var_150_int = var_150_int + var_171_int; // 0xfe8 Add2
	goto Label_4061; // 0xfe9 Jump
}


func_1756(var_2_object, var_462_string)
{
	var_463_bool = 0; // 0x6dd PushV
	func_4383(var_463_bool); // 0x6de NEW_2
	var_464_bool = var_463_bool == 0; // 0x6e0 Not
	if(var_464_bool == 0) goto Label_1763; // 0x6e1 JumpB
	return 0; // 0x6e2 Return
	
Label_1763:
	var_465_bool = var_462_string == var_2_object; // 0x6e3 Eq
	if(var_465_bool == 0) goto Label_1766; // 0x6e4 JumpB
	return 0; // 0x6e5 Return
	
Label_1766:
	var_466_string = ""; var_467_bool = 0; // 0x6e6 PushV
	var_466_string = var_462_string; // 0x6e7 Mov
	var_468_string = ""; // 0x6e8 PushS
	var_469_bool = var_462_string == var_468_string; // 0x6e9 Eq
	if(var_469_bool == 0) goto Label_1773; // 0x6ea JumpB
	var_467_bool = 0; // 0x6eb MovB
	goto Label_1774; // 0x6ec Jump
	
Label_1774:
	func_4154(var_466_string, var_467_bool); // 0x6ee NEW_2
	var_2_object = var_462_string; // 0x6f0 TMov
	return 0; // 0x6f1 Return
	
Label_1773:
	var_467_bool = 1; // 0x6ed MovB
}


func_4317(var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x10dd PushV
	GetGameTime(var_64_float); // 0x10de Func
	var_62_float = var_64_float; // 0x10e0 Mov
	return 2; // 0x10e1 Return
}


func_3295(var_0_bool, var_1_object, var_2_object, var_3_object, var_685_object, var_686_object)
{
	var_0_bool = var_686_object; // 0xce0 TMov
	var_1_object = var_685_object; // 0xce1 TMov
	var_3_object = 0; // 0xce2 TMovB
	var_691_int = 1; // 0xce3 PushI
	if(var_691_int == 0) goto Label_3328; // 0xce4 JumpB
	var_692_string = ""; // 0xce5 PushV
	var_692_string = "Neutral"; // 0xce6 MovS
	func_3358(var_686_object, var_692_string); // 0xce7 NEW_2
	var_700_int = 535231; // 0xce9 PushI
	SetMessage(var_700_int); // 0xcea TObjFunc
	ClearReplies(); // 0xcec TObjFunc
	var_701_int = 535232; // 0xcee PushI
	var_702_int = 36953; // 0xcef PushI
	var_703_int = 36907; // 0xcf0 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0xcf1 TObjFunc
	var_704_int = 535233; // 0xcf3 PushI
	var_705_int = -1; // 0xcf4 PushI
	var_706_int = 36908; // 0xcf5 PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0xcf6 TObjFunc
	var_707_int = 535280; // 0xcf8 PushI
	var_708_int = -1; // 0xcf9 PushI
	var_709_int = 36956; // 0xcfa PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0xcfb TObjFunc
	goto Label_3328; // 0xcfd Jump
	
Label_3328:
	var_710_bool = 0; // 0xd00 PushV
	func_4383(var_710_bool); // 0xd01 NEW_2
	if(var_710_bool == 0) goto Label_3343; // 0xd03 JumpB
	
Label_3332:
	lshWaitForAnimEnd(); // 0xd04 Func
	var_711_object = var_3_object; // 0xd06 PushT
	if(var_711_object == 0) goto Label_3337; // 0xd07 JumpB
	goto Label_3342; // 0xd08 Jump
	
Label_3342:
	goto Label_3357; // 0xd0e Jump
	
Label_3357:
	return 0; // 0xd1d Return
	
Label_3337:
	var_712_string = ""; // 0xd09 PushV
	var_712_string = var_2_object; // 0xd0a MovT
	func_4138(var_712_string); // 0xd0b NEW_2
	goto Label_3332; // 0xd0d Jump
	
Label_3343:
	var_713_string = "all"; // 0xd0f PushS
	var_714_string = "idle"; // 0xd10 PushS
	PlayAnimation(var_713_string, var_714_string); // 0xd11 Func
	
Label_3347:
	WaitForAnimEnd(); // 0xd13 Func
	var_715_object = var_3_object; // 0xd15 PushT
	if(var_715_object == 0) goto Label_3352; // 0xd16 JumpB
	goto Label_3357; // 0xd17 Jump
	
Label_3352:
	var_716_string = "all"; // 0xd18 PushS
	var_717_string = "idle"; // 0xd19 PushS
	PlayAnimation(var_716_string, var_717_string); // 0xd1a Func
	goto Label_3347; // 0xd1c Jump
}


func_4322(var_186_int)
{
	var_187_float = 0; var_188_float = 0; // 0x10e2 PushV
	GetGameTime(var_188_float); // 0x10e3 Func
	var_189_int = 1; // 0x10e5 PushI
	var_190_int = 0; // 0x10e6 PushV
	var_191_int = 24; // 0x10e7 PushI
	var_190_int = var_188_float / var_188_float; // 0x10e8 Div2
	var_186_int = var_189_int + var_190_int; // 0x10e9 Add2
	return 2; // 0x10ea Return
}


func_4835()
{
	var_291_object = Obj(); var_292_object = Obj(); // 0x12e3 PushV
	var_293_int = 516; // 0x12e4 PushI
	var_294_int = 2; // 0x12e5 PushI
	var_295_int = 529715; // 0x12e6 PushI
	CreateDiaryEntry(var_292_object, var_293_int, var_294_int, var_295_int); // 0x12e7 Func
	var_296_bool = 0; var_297_object = Obj(); var_298_int = 0; // 0x12e9 PushV
	var_297_object = var_292_object; // 0x12ea Mov
	var_298_int = 507; // 0x12eb MovI
	func_4900(var_296_bool, var_297_object, var_298_int); // 0x12ec NEW_2
	return 2; // 0x12ee Return
}


func_3554(var_0_bool, var_1_object, var_2_object, var_3_object, var_744_object, var_745_object)
{
	var_0_bool = var_745_object; // 0xde3 TMov
	var_1_object = var_744_object; // 0xde4 TMov
	var_3_object = 0; // 0xde5 TMovB
	var_750_int = 1; // 0xde6 PushI
	if(var_750_int == 0) goto Label_3582; // 0xde7 JumpB
	var_751_string = ""; // 0xde8 PushV
	var_751_string = "Neutral"; // 0xde9 MovS
	func_3612(var_745_object, var_751_string); // 0xdea NEW_2
	var_759_int = 540545; // 0xdec PushI
	SetMessage(var_759_int); // 0xded TObjFunc
	ClearReplies(); // 0xdef TObjFunc
	var_760_int = 540546; // 0xdf1 PushI
	var_761_int = -1; // 0xdf2 PushI
	var_762_int = 42555; // 0xdf3 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0xdf4 TObjFunc
	var_763_int = 540798; // 0xdf6 PushI
	var_764_int = -1; // 0xdf7 PushI
	var_765_int = 42847; // 0xdf8 PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0xdf9 TObjFunc
	goto Label_3582; // 0xdfb Jump
	
Label_3582:
	var_766_bool = 0; // 0xdfe PushV
	func_4383(var_766_bool); // 0xdff NEW_2
	if(var_766_bool == 0) goto Label_3597; // 0xe01 JumpB
	
Label_3586:
	lshWaitForAnimEnd(); // 0xe02 Func
	var_767_object = var_3_object; // 0xe04 PushT
	if(var_767_object == 0) goto Label_3591; // 0xe05 JumpB
	goto Label_3596; // 0xe06 Jump
	
Label_3596:
	goto Label_3611; // 0xe0c Jump
	
Label_3611:
	return 0; // 0xe1b Return
	
Label_3591:
	var_768_string = ""; // 0xe07 PushV
	var_768_string = var_2_object; // 0xe08 MovT
	func_4138(var_768_string); // 0xe09 NEW_2
	goto Label_3586; // 0xe0b Jump
	
Label_3597:
	var_769_string = "all"; // 0xe0d PushS
	var_770_string = "idle"; // 0xe0e PushS
	PlayAnimation(var_769_string, var_770_string); // 0xe0f Func
	
Label_3601:
	WaitForAnimEnd(); // 0xe11 Func
	var_771_object = var_3_object; // 0xe13 PushT
	if(var_771_object == 0) goto Label_3606; // 0xe14 JumpB
	goto Label_3611; // 0xe15 Jump
	
Label_3606:
	var_772_string = "all"; // 0xe16 PushS
	var_773_string = "idle"; // 0xe17 PushS
	PlayAnimation(var_772_string, var_773_string); // 0xe18 Func
	goto Label_3601; // 0xe1a Jump
}


func_4585(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0x11ea PushV
	var_330_string = "k2q01"; // 0x11eb MovS
	func_4236(var_329_int, var_330_string); // 0x11ec NEW_2
	var_331_int = 1; // 0x11ee PushI
	var_332_bool = var_329_int == var_331_int; // 0x11ef Eq
	if(var_332_bool == 0) goto Label_4595; // 0x11f0 JumpB
	var_327_bool = 1; // 0x11f1 MovB
	return 0; // 0x11f2 Return
	
Label_4595:
	var_327_bool = 0; // 0x11f3 MovB
	return 0; // 0x11f4 Return
}


func_4331(var_284_bool, var_285_int)
{
	var_286_int = 0; // 0x10ec PushV
	func_4322(var_286_int); // 0x10ed NEW_2
	var_284_bool = var_286_int == var_285_int; // 0x10ef Eq2
	return 0; // 0x10f0 Return
}


func_4848()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x12f0 PushV
	var_90_int = 508; // 0x12f1 PushI
	var_91_int = 2; // 0x12f2 PushI
	var_92_int = 529707; // 0x12f3 PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x12f4 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x12f6 PushV
	var_94_object = var_89_object; // 0x12f7 Mov
	var_95_int = 507; // 0x12f8 MovI
	func_4900(var_93_bool, var_94_object, var_95_int); // 0x12f9 NEW_2
	return 2; // 0x12fb Return
}


func_4337(var_191_string, var_192_int)
{
	var_193_string = ""; var_194_string = ""; // 0x10f1 PushV
	var_194_string = "idle"; // 0x10f2 MovS
	var_195_int = var_192_int; // 0x10f3 Push
	if(var_195_int == 0) goto Label_4342; // 0x10f4 JumpB
	var_194_string = var_194_string + var_192_int; // 0x10f5 Add2
	
Label_4342:
	var_191_string = var_194_string; // 0x10f6 Mov
	return 2; // 0x10f7 Return
}


func_3826(var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0xef2 PushV
	GetPosition(var_105_cvector); // 0xef3 Func
	var_103_cvector = var_105_cvector; // 0xef5 Mov
	return 2; // 0xef6 Return
}


func_4597(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0x11f6 PushV
	var_322_string = "ook2MladVlad1"; // 0x11f7 MovS
	func_4236(var_321_int, var_322_string); // 0x11f8 NEW_2
	var_325_int = 0; // 0x11fa PushI
	var_326_bool = var_321_int == var_325_int; // 0x11fb Eq
	if(var_326_bool == 0) goto Label_4607; // 0x11fc JumpB
	var_319_bool = 1; // 0x11fd MovB
	return 0; // 0x11fe Return
	
Label_4607:
	var_319_bool = 0; // 0x11ff MovB
	return 0; // 0x1200 Return
}


func_3831(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xef7 PushV
	GetPosition(var_56_cvector); // 0xef8 Func
	GetPosition(var_57_cvector); // 0xefa ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xefc Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xefd Or2
	return 6; // 0xefe Return
}


func_4344(var_185_int)
{
	var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_bool = 0; // 0x10f8 PushV
	var_188_int = 0; // 0x10f9 MovI
	
Label_4346:
	var_190_string = "all"; // 0x10fa PushS
	var_191_string = ""; var_192_int = 0; // 0x10fb PushV
	var_192_int = var_188_int; // 0x10fc Mov
	func_4337(var_191_string, var_192_int); // 0x10fd NEW_2
	HasAnimation(var_189_bool, var_190_string, var_191_string); // 0x10ff Func
	var_196_bool = var_189_bool == 0; // 0x1101 Not
	if(var_196_bool == 0) goto Label_4356; // 0x1102 JumpB
	goto Label_4359; // 0x1103 Jump
	
Label_4359:
	var_185_int = var_188_int; // 0x1107 Mov
	return 4; // 0x1108 Return
	
Label_4356:
	var_197_int = 1; // 0x1104 PushI
	var_188_int = var_188_int + var_197_int; // 0x1105 Add2
	goto Label_4346; // 0x1106 Jump
}


func_4861()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x12fd PushV
	var_55_int = 392; // 0x12fe PushI
	var_56_int = 1; // 0x12ff PushI
	var_57_int = 525885; // 0x1300 PushI
	CreateDiaryEntry(var_54_object, var_55_int, var_56_int, var_57_int); // 0x1301 Func
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; // 0x1303 PushV
	var_59_object = var_54_object; // 0x1304 Mov
	var_60_int = 390; // 0x1305 MovI
	func_4900(var_58_bool, var_59_object, var_60_int); // 0x1306 NEW_2
	return 2; // 0x1308 Return
}


func_3839(var_145_bool, var_146_object, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0; // 0xeff PushV
	var_150_string = "HasProperty"; // 0xf00 PushS
	var_151_int = 2; // 0xf01 PushI
	var_152_bool = IsFuncExist(var_146_object, var_150_string, var_151_int); // 0xf02 FuncExist
	var_153_bool = var_152_bool == 0; // 0xf03 Not
	if(var_153_bool == 0) goto Label_3847; // 0xf04 JumpB
	var_145_bool = 0; // 0xf05 MovB
	return 2; // 0xf06 Return
	
Label_3847:
	HasProperty(var_147_string, var_149_bool); // 0xf07 ObjFunc
	var_145_bool = var_149_bool; // 0xf09 Mov
	return 2; // 0xf0a Return
}


