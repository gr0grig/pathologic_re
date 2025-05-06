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
	func_4406(); // 0x3d NEW_2
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
	func_3920(var_44_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_57_object = Obj(); // 0x53 PushV
	var_57_object = var_39_int; // 0x54 Mov
	func_5027(var_57_object); // 0x55 NEW_2
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
	func_3861(var_52_object); // 0x84 NEW_2
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
	func_4406(); // 0xa6 NEW_2
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
	func_3920(var_44_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_57_object = Obj(); // 0xbc PushV
	var_57_object = var_39_int; // 0xbd Mov
	func_5027(var_57_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4406(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x232 PushI
	if(var_41_int == 0) goto Label_1632; // 0x233 JumpB
	func_4216(); // 0x235 NEW_2
	var_43_int = 26708; // 0x237 PushI
	var_44_bool = var_40_int == var_43_int; // 0x238 Eq
	if(var_44_bool == 0) goto Label_580; // 0x239 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x23a PushV
	var_45_object = var_1_object; // 0x23b MovT
	var_46_object = var_0_bool; // 0x23c MovT
	func_4453(); // 0x23d NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0x23f PushV
	var_96_object = var_1_object; // 0x240 MovT
	var_97_object = var_0_bool; // 0x241 MovT
	func_4601(); // 0x242 NEW_2
	
Label_580:
	var_122_int = 44290; // 0x244 PushI
	var_123_bool = var_40_int == var_122_int; // 0x245 Eq
	if(var_123_bool == 0) goto Label_588; // 0x246 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x247 PushV
	var_124_object = var_1_object; // 0x248 MovT
	var_125_object = var_0_bool; // 0x249 MovT
	func_4417(var_125_object); // 0x24a NEW_2
	
Label_588:
	var_164_int = 44277; // 0x24c PushI
	var_165_bool = var_40_int == var_164_int; // 0x24d Eq
	if(var_165_bool == 0) goto Label_596; // 0x24e JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x24f PushV
	var_166_object = var_1_object; // 0x250 MovT
	var_167_object = var_0_bool; // 0x251 MovT
	func_4581(var_167_object); // 0x252 NEW_2
	
Label_596:
	var_171_int = 26610; // 0x254 PushI
	var_172_bool = var_40_int == var_171_int; // 0x255 Eq
	if(var_172_bool == 0) goto Label_604; // 0x256 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x257 PushV
	var_173_object = var_1_object; // 0x258 MovT
	var_174_object = var_0_bool; // 0x259 MovT
	func_4424(); // 0x25a NEW_2
	
Label_604:
	var_193_int = 44473; // 0x25c PushI
	var_194_bool = var_40_int == var_193_int; // 0x25d Eq
	if(var_194_bool == 0) goto Label_612; // 0x25e JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x25f PushV
	var_195_object = var_1_object; // 0x260 MovT
	var_196_object = var_0_bool; // 0x261 MovT
	func_4424(); // 0x262 NEW_2
	
Label_612:
	var_197_int = 26740; // 0x264 PushI
	var_198_bool = var_40_int == var_197_int; // 0x265 Eq
	if(var_198_bool == 0) goto Label_620; // 0x266 JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x267 PushV
	var_199_object = var_1_object; // 0x268 MovT
	var_200_object = var_0_bool; // 0x269 MovT
	func_4479(); // 0x26a NEW_2
	
Label_620:
	var_203_int = 26739; // 0x26c PushI
	var_204_bool = var_40_int == var_203_int; // 0x26d Eq
	if(var_204_bool == 0) goto Label_638; // 0x26e JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x26f PushV
	var_205_object = var_1_object; // 0x270 MovT
	var_206_object = var_0_bool; // 0x271 MovT
	func_4485(); // 0x272 NEW_2
	var_223_object = Obj(); var_224_object = Obj(); // 0x274 PushV
	var_223_object = var_1_object; // 0x275 MovT
	var_224_object = var_0_bool; // 0x276 MovT
	func_4565(var_224_object); // 0x277 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x279 PushV
	var_244_object = var_1_object; // 0x27a MovT
	var_245_object = var_0_bool; // 0x27b MovT
	func_4575(); // 0x27c NEW_2
	
Label_638:
	var_248_int = 26751; // 0x27e PushI
	var_249_bool = var_40_int == var_248_int; // 0x27f Eq
	if(var_249_bool == 0) goto Label_651; // 0x280 JumpB
	var_250_object = Obj(); var_251_object = Obj(); // 0x281 PushV
	var_250_object = var_1_object; // 0x282 MovT
	var_251_object = var_0_bool; // 0x283 MovT
	func_4502(); // 0x284 NEW_2
	var_262_object = Obj(); var_263_object = Obj(); // 0x286 PushV
	var_262_object = var_1_object; // 0x287 MovT
	var_263_object = var_0_bool; // 0x288 MovT
	func_4417(var_263_object); // 0x289 NEW_2
	
Label_651:
	var_264_int = 26748; // 0x28b PushI
	var_265_bool = var_40_int == var_264_int; // 0x28c Eq
	if(var_265_bool == 0) goto Label_669; // 0x28d JumpB
	var_266_object = Obj(); var_267_object = Obj(); // 0x28e PushV
	var_266_object = var_1_object; // 0x28f MovT
	var_267_object = var_0_bool; // 0x290 MovT
	func_4511(); // 0x291 NEW_2
	var_278_object = Obj(); var_279_object = Obj(); // 0x293 PushV
	var_278_object = var_1_object; // 0x294 MovT
	var_279_object = var_0_bool; // 0x295 MovT
	func_4555(var_279_object); // 0x296 NEW_2
	var_283_object = Obj(); var_284_object = Obj(); // 0x298 PushV
	var_283_object = var_1_object; // 0x299 MovT
	var_284_object = var_0_bool; // 0x29a MovT
	func_4575(); // 0x29b NEW_2
	
Label_669:
	var_285_int = 26746; // 0x29d PushI
	var_286_bool = var_40_int == var_285_int; // 0x29e Eq
	if(var_286_bool == 0) goto Label_682; // 0x29f JumpB
	var_287_object = Obj(); var_288_object = Obj(); // 0x2a0 PushV
	var_287_object = var_1_object; // 0x2a1 MovT
	var_288_object = var_0_bool; // 0x2a2 MovT
	func_4520(); // 0x2a3 NEW_2
	var_299_object = Obj(); var_300_object = Obj(); // 0x2a5 PushV
	var_299_object = var_1_object; // 0x2a6 MovT
	var_300_object = var_0_bool; // 0x2a7 MovT
	func_4588(var_300_object); // 0x2a8 NEW_2
	
Label_682:
	var_304_int = 26705; // 0x2aa PushI
	var_305_bool = var_39_float == var_304_int; // 0x2ab Eq
	if(var_305_bool == 0) goto Label_823; // 0x2ac JumpB
	var_306_bool = 0; // 0x2ad PushV
	var_306_bool = 0; // 0x2ae MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x2af PushV
	var_308_object = var_1_object; // 0x2b0 MovT
	func_4629(var_308_object); // 0x2b1 NEW_2
	if(var_307_bool == 0) goto Label_699; // 0x2b3 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x2b4 PushV
	var_316_object = var_1_object; // 0x2b5 MovT
	func_4617(var_316_object); // 0x2b6 NEW_2
	var_321_bool = var_315_bool == 0; // 0x2b8 Not
	if(var_321_bool == 0) goto Label_699; // 0x2b9 JumpB
	var_306_bool = 1; // 0x2ba MovB
	
Label_699:
	if(var_306_bool == 0) goto Label_725; // 0x2bb JumpB
	var_322_object = Obj(); var_323_object = Obj(); // 0x2bc PushV
	var_322_object = var_1_object; // 0x2bd MovT
	var_323_object = var_0_bool; // 0x2be MovT
	func_4447(); // 0x2bf NEW_2
	var_326_string = ""; // 0x2c1 PushV
	var_326_string = "Neutral"; // 0x2c2 MovS
	func_539(var_40_int, var_326_string); // 0x2c3 NEW_2
	var_343_int = 525337; // 0x2c5 PushI
	SetMessage(var_343_int); // 0x2c6 TObjFunc
	ClearReplies(); // 0x2c8 TObjFunc
	var_344_int = 525338; // 0x2ca PushI
	var_345_int = 44250; // 0x2cb PushI
	var_346_int = 26706; // 0x2cc PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x2cd TObjFunc
	var_347_int = 539465; // 0x2cf PushI
	var_348_int = 44260; // 0x2d0 PushI
	var_349_int = 41388; // 0x2d1 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x2d2 TObjFunc
	return 0; // 0x2d4 Return
	
Label_725:
	var_350_string = ""; // 0x2d5 PushV
	var_350_string = "Neutral"; // 0x2d6 MovS
	func_539(var_40_int, var_350_string); // 0x2d7 NEW_2
	var_351_int = 525237; // 0x2d9 PushI
	SetMessage(var_351_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_352_bool = 0; var_353_object = Obj(); // 0x2de PushV
	var_353_object = var_1_object; // 0x2df MovT
	func_4617(var_353_object); // 0x2e0 NEW_2
	if(var_352_bool == 0) goto Label_744; // 0x2e2 JumpB
	var_354_int = 525238; // 0x2e3 PushI
	var_355_int = 26607; // 0x2e4 PushI
	var_356_int = 26606; // 0x2e5 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x2e6 TObjFunc
	
Label_744:
	var_357_bool = 0; // 0x2e8 PushV
	var_357_bool = 0; // 0x2e9 MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x2ea PushV
	var_359_object = var_1_object; // 0x2eb MovT
	func_4641(var_359_object); // 0x2ec NEW_2
	if(var_358_bool == 0) goto Label_757; // 0x2ee JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x2ef PushV
	var_365_object = var_1_object; // 0x2f0 MovT
	func_4675(var_365_object); // 0x2f1 NEW_2
	if(var_364_bool == 0) goto Label_757; // 0x2f3 JumpB
	var_357_bool = 1; // 0x2f4 MovB
	
Label_757:
	if(var_357_bool == 0) goto Label_763; // 0x2f5 JumpB
	var_370_int = 525372; // 0x2f6 PushI
	var_371_int = 26741; // 0x2f7 PushI
	var_372_int = 26740; // 0x2f8 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x2f9 TObjFunc
	
Label_763:
	var_373_bool = 0; // 0x2fb PushV
	var_373_bool = 0; // 0x2fc MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x2fd PushV
	var_375_object = var_1_object; // 0x2fe MovT
	func_4665(var_374_bool, var_375_object); // 0x2ff NEW_2
	if(var_374_bool == 0) goto Label_776; // 0x301 JumpB
	var_386_bool = 0; var_387_object = Obj(); // 0x302 PushV
	var_387_object = var_1_object; // 0x303 MovT
	func_4687(var_387_object); // 0x304 NEW_2
	if(var_386_bool == 0) goto Label_776; // 0x306 JumpB
	var_373_bool = 1; // 0x307 MovB
	
Label_776:
	if(var_373_bool == 0) goto Label_782; // 0x308 JumpB
	var_392_int = 525369; // 0x309 PushI
	var_393_int = 44309; // 0x30a PushI
	var_394_int = 26737; // 0x30b PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x30c TObjFunc
	
Label_782:
	var_395_bool = 0; // 0x30e PushV
	var_395_bool = 0; // 0x30f MovB
	var_396_bool = 0; var_397_object = Obj(); // 0x310 PushV
	var_397_object = var_1_object; // 0x311 MovT
	func_4665(var_396_bool, var_397_object); // 0x312 NEW_2
	var_398_bool = var_396_bool == 0; // 0x314 Not
	if(var_398_bool == 0) goto Label_796; // 0x315 JumpB
	var_399_bool = 0; var_400_object = Obj(); // 0x316 PushV
	var_400_object = var_1_object; // 0x317 MovT
	func_4687(var_400_object); // 0x318 NEW_2
	if(var_399_bool == 0) goto Label_796; // 0x31a JumpB
	var_395_bool = 1; // 0x31b MovB
	
Label_796:
	if(var_395_bool == 0) goto Label_802; // 0x31c JumpB
	var_401_int = 525381; // 0x31d PushI
	var_402_int = 26750; // 0x31e PushI
	var_403_int = 26749; // 0x31f PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x320 TObjFunc
	
Label_802:
	var_404_bool = 0; var_405_object = Obj(); // 0x322 PushV
	var_405_object = var_1_object; // 0x323 MovT
	func_4653(var_405_object); // 0x324 NEW_2
	if(var_404_bool == 0) goto Label_812; // 0x326 JumpB
	var_410_int = 525375; // 0x327 PushI
	var_411_int = 26744; // 0x328 PushI
	var_412_int = 26743; // 0x329 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x32a TObjFunc
	
Label_812:
	var_413_int = 525243; // 0x32c PushI
	var_414_int = -1; // 0x32d PushI
	var_415_int = 26611; // 0x32e PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x32f TObjFunc
	var_416_int = 529207; // 0x331 PushI
	var_417_int = -1; // 0x332 PushI
	var_418_int = 30658; // 0x333 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x334 TObjFunc
	return 0; // 0x336 Return
	
Label_823:
	var_419_int = 26744; // 0x337 PushI
	var_420_bool = var_39_float == var_419_int; // 0x338 Eq
	if(var_420_bool == 0) goto Label_841; // 0x339 JumpB
	var_421_string = ""; // 0x33a PushV
	var_421_string = "Untrust"; // 0x33b MovS
	func_539(var_40_int, var_421_string); // 0x33c NEW_2
	var_422_int = 525376; // 0x33e PushI
	SetMessage(var_422_int); // 0x33f TObjFunc
	ClearReplies(); // 0x341 TObjFunc
	var_423_int = 542113; // 0x343 PushI
	var_424_int = 44419; // 0x344 PushI
	var_425_int = 44418; // 0x345 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_426_int = 44419; // 0x349 PushI
	var_427_bool = var_39_float == var_426_int; // 0x34a Eq
	if(var_427_bool == 0) goto Label_859; // 0x34b JumpB
	var_428_string = ""; // 0x34c PushV
	var_428_string = "Untrust"; // 0x34d MovS
	func_539(var_40_int, var_428_string); // 0x34e NEW_2
	var_429_int = 542114; // 0x350 PushI
	SetMessage(var_429_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_430_int = 542115; // 0x355 PushI
	var_431_int = 44421; // 0x356 PushI
	var_432_int = 44420; // 0x357 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x358 TObjFunc
	return 0; // 0x35a Return
	
Label_859:
	var_433_int = 44421; // 0x35b PushI
	var_434_bool = var_39_float == var_433_int; // 0x35c Eq
	if(var_434_bool == 0) goto Label_882; // 0x35d JumpB
	var_435_string = ""; // 0x35e PushV
	var_435_string = "Untrust"; // 0x35f MovS
	func_539(var_40_int, var_435_string); // 0x360 NEW_2
	var_436_int = 542116; // 0x362 PushI
	SetMessage(var_436_int); // 0x363 TObjFunc
	ClearReplies(); // 0x365 TObjFunc
	var_437_int = 525377; // 0x367 PushI
	var_438_int = 26747; // 0x368 PushI
	var_439_int = 26745; // 0x369 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x36a TObjFunc
	var_440_int = 542117; // 0x36c PushI
	var_441_int = 44423; // 0x36d PushI
	var_442_int = 44422; // 0x36e PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_443_int = 44423; // 0x372 PushI
	var_444_bool = var_39_float == var_443_int; // 0x373 Eq
	if(var_444_bool == 0) goto Label_900; // 0x374 JumpB
	var_445_string = ""; // 0x375 PushV
	var_445_string = "Neutral"; // 0x376 MovS
	func_539(var_40_int, var_445_string); // 0x377 NEW_2
	var_446_int = 542118; // 0x379 PushI
	SetMessage(var_446_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_447_int = 525378; // 0x37e PushI
	var_448_int = -1; // 0x37f PushI
	var_449_int = 26746; // 0x380 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x381 TObjFunc
	return 0; // 0x383 Return
	
Label_900:
	var_450_int = 26747; // 0x384 PushI
	var_451_bool = var_39_float == var_450_int; // 0x385 Eq
	if(var_451_bool == 0) goto Label_918; // 0x386 JumpB
	var_452_string = ""; // 0x387 PushV
	var_452_string = "Sly"; // 0x388 MovS
	func_539(var_40_int, var_452_string); // 0x389 NEW_2
	var_453_int = 525379; // 0x38b PushI
	SetMessage(var_453_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_454_int = 525380; // 0x390 PushI
	var_455_int = -1; // 0x391 PushI
	var_456_int = 26748; // 0x392 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_457_int = 26750; // 0x396 PushI
	var_458_bool = var_39_float == var_457_int; // 0x397 Eq
	if(var_458_bool == 0) goto Label_936; // 0x398 JumpB
	var_459_string = ""; // 0x399 PushV
	var_459_string = "Fear"; // 0x39a MovS
	func_539(var_40_int, var_459_string); // 0x39b NEW_2
	var_460_int = 525382; // 0x39d PushI
	SetMessage(var_460_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_461_int = 525383; // 0x3a2 PushI
	var_462_int = -1; // 0x3a3 PushI
	var_463_int = 26751; // 0x3a4 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_464_int = 44309; // 0x3a8 PushI
	var_465_bool = var_39_float == var_464_int; // 0x3a9 Eq
	if(var_465_bool == 0) goto Label_954; // 0x3aa JumpB
	var_466_string = ""; // 0x3ab PushV
	var_466_string = "Sly"; // 0x3ac MovS
	func_539(var_40_int, var_466_string); // 0x3ad NEW_2
	var_467_int = 542032; // 0x3af PushI
	SetMessage(var_467_int); // 0x3b0 TObjFunc
	ClearReplies(); // 0x3b2 TObjFunc
	var_468_int = 542033; // 0x3b4 PushI
	var_469_int = 44311; // 0x3b5 PushI
	var_470_int = 44310; // 0x3b6 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_471_int = 44311; // 0x3ba PushI
	var_472_bool = var_39_float == var_471_int; // 0x3bb Eq
	if(var_472_bool == 0) goto Label_977; // 0x3bc JumpB
	var_473_string = ""; // 0x3bd PushV
	var_473_string = "Untrust"; // 0x3be MovS
	func_539(var_40_int, var_473_string); // 0x3bf NEW_2
	var_474_int = 542034; // 0x3c1 PushI
	SetMessage(var_474_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_475_int = 542035; // 0x3c6 PushI
	var_476_int = 44428; // 0x3c7 PushI
	var_477_int = 44312; // 0x3c8 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x3c9 TObjFunc
	var_478_int = 542120; // 0x3cb PushI
	var_479_int = 26738; // 0x3cc PushI
	var_480_int = 44425; // 0x3cd PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x3ce TObjFunc
	return 0; // 0x3d0 Return
	
Label_977:
	var_481_int = 44428; // 0x3d1 PushI
	var_482_bool = var_39_float == var_481_int; // 0x3d2 Eq
	if(var_482_bool == 0) goto Label_1000; // 0x3d3 JumpB
	var_483_string = ""; // 0x3d4 PushV
	var_483_string = "Neutral"; // 0x3d5 MovS
	func_539(var_40_int, var_483_string); // 0x3d6 NEW_2
	var_484_int = 542122; // 0x3d8 PushI
	SetMessage(var_484_int); // 0x3d9 TObjFunc
	ClearReplies(); // 0x3db TObjFunc
	var_485_int = 542123; // 0x3dd PushI
	var_486_int = 44430; // 0x3de PushI
	var_487_int = 44429; // 0x3df PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x3e0 TObjFunc
	var_488_int = 542126; // 0x3e2 PushI
	var_489_int = 26738; // 0x3e3 PushI
	var_490_int = 44432; // 0x3e4 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x3e5 TObjFunc
	return 0; // 0x3e7 Return
	
Label_1000:
	var_491_int = 44430; // 0x3e8 PushI
	var_492_bool = var_39_float == var_491_int; // 0x3e9 Eq
	if(var_492_bool == 0) goto Label_1018; // 0x3ea JumpB
	var_493_string = ""; // 0x3eb PushV
	var_493_string = "Neutral"; // 0x3ec MovS
	func_539(var_40_int, var_493_string); // 0x3ed NEW_2
	var_494_int = 542124; // 0x3ef PushI
	SetMessage(var_494_int); // 0x3f0 TObjFunc
	ClearReplies(); // 0x3f2 TObjFunc
	var_495_int = 542125; // 0x3f4 PushI
	var_496_int = 26738; // 0x3f5 PushI
	var_497_int = 44431; // 0x3f6 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x3f7 TObjFunc
	return 0; // 0x3f9 Return
	
Label_1018:
	var_498_int = 26738; // 0x3fa PushI
	var_499_bool = var_39_float == var_498_int; // 0x3fb Eq
	if(var_499_bool == 0) goto Label_1036; // 0x3fc JumpB
	var_500_string = ""; // 0x3fd PushV
	var_500_string = "Neutral"; // 0x3fe MovS
	func_539(var_40_int, var_500_string); // 0x3ff NEW_2
	var_501_int = 525370; // 0x401 PushI
	SetMessage(var_501_int); // 0x402 TObjFunc
	ClearReplies(); // 0x404 TObjFunc
	var_502_int = 525371; // 0x406 PushI
	var_503_int = -1; // 0x407 PushI
	var_504_int = 26739; // 0x408 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x409 TObjFunc
	return 0; // 0x40b Return
	
Label_1036:
	var_505_int = 26741; // 0x40c PushI
	var_506_bool = var_39_float == var_505_int; // 0x40d Eq
	if(var_506_bool == 0) goto Label_1054; // 0x40e JumpB
	var_507_string = ""; // 0x40f PushV
	var_507_string = "Fear"; // 0x410 MovS
	func_539(var_40_int, var_507_string); // 0x411 NEW_2
	var_508_int = 525373; // 0x413 PushI
	SetMessage(var_508_int); // 0x414 TObjFunc
	ClearReplies(); // 0x416 TObjFunc
	var_509_int = 525374; // 0x418 PushI
	var_510_int = 44313; // 0x419 PushI
	var_511_int = 26742; // 0x41a PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x41b TObjFunc
	return 0; // 0x41d Return
	
Label_1054:
	var_512_int = 44313; // 0x41e PushI
	var_513_bool = var_39_float == var_512_int; // 0x41f Eq
	if(var_513_bool == 0) goto Label_1072; // 0x420 JumpB
	var_514_string = ""; // 0x421 PushV
	var_514_string = "Untrust"; // 0x422 MovS
	func_539(var_40_int, var_514_string); // 0x423 NEW_2
	var_515_int = 542036; // 0x425 PushI
	SetMessage(var_515_int); // 0x426 TObjFunc
	ClearReplies(); // 0x428 TObjFunc
	var_516_int = 542119; // 0x42a PushI
	var_517_int = -1; // 0x42b PushI
	var_518_int = 44424; // 0x42c PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x42d TObjFunc
	return 0; // 0x42f Return
	
Label_1072:
	var_519_int = 26607; // 0x430 PushI
	var_520_bool = var_39_float == var_519_int; // 0x431 Eq
	if(var_520_bool == 0) goto Label_1095; // 0x432 JumpB
	var_521_string = ""; // 0x433 PushV
	var_521_string = "Neutral"; // 0x434 MovS
	func_539(var_40_int, var_521_string); // 0x435 NEW_2
	var_522_int = 525239; // 0x437 PushI
	SetMessage(var_522_int); // 0x438 TObjFunc
	ClearReplies(); // 0x43a TObjFunc
	var_523_int = 529208; // 0x43c PushI
	var_524_int = 44301; // 0x43d PushI
	var_525_int = 30659; // 0x43e PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x43f TObjFunc
	var_526_int = 529212; // 0x441 PushI
	var_527_int = 44453; // 0x442 PushI
	var_528_int = 30663; // 0x443 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x444 TObjFunc
	return 0; // 0x446 Return
	
Label_1095:
	var_529_int = 44453; // 0x447 PushI
	var_530_bool = var_39_float == var_529_int; // 0x448 Eq
	if(var_530_bool == 0) goto Label_1113; // 0x449 JumpB
	var_531_string = ""; // 0x44a PushV
	var_531_string = "Rage"; // 0x44b MovS
	func_539(var_40_int, var_531_string); // 0x44c NEW_2
	var_532_int = 542140; // 0x44e PushI
	SetMessage(var_532_int); // 0x44f TObjFunc
	ClearReplies(); // 0x451 TObjFunc
	var_533_int = 542141; // 0x453 PushI
	var_534_int = 44458; // 0x454 PushI
	var_535_int = 44454; // 0x455 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x456 TObjFunc
	return 0; // 0x458 Return
	
Label_1113:
	var_536_int = 44458; // 0x459 PushI
	var_537_bool = var_39_float == var_536_int; // 0x45a Eq
	if(var_537_bool == 0) goto Label_1131; // 0x45b JumpB
	var_538_string = ""; // 0x45c PushV
	var_538_string = "Rage"; // 0x45d MovS
	func_539(var_40_int, var_538_string); // 0x45e NEW_2
	var_539_int = 542145; // 0x460 PushI
	SetMessage(var_539_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_540_int = 542146; // 0x465 PushI
	var_541_int = 30660; // 0x466 PushI
	var_542_int = 44459; // 0x467 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x468 TObjFunc
	return 0; // 0x46a Return
	
Label_1131:
	var_543_int = 44301; // 0x46b PushI
	var_544_bool = var_39_float == var_543_int; // 0x46c Eq
	if(var_544_bool == 0) goto Label_1154; // 0x46d JumpB
	var_545_string = ""; // 0x46e PushV
	var_545_string = "Untrust"; // 0x46f MovS
	func_539(var_40_int, var_545_string); // 0x470 NEW_2
	var_546_int = 542024; // 0x472 PushI
	SetMessage(var_546_int); // 0x473 TObjFunc
	ClearReplies(); // 0x475 TObjFunc
	var_547_int = 542025; // 0x477 PushI
	var_548_int = 30660; // 0x478 PushI
	var_549_int = 44302; // 0x479 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x47a TObjFunc
	var_550_int = 542143; // 0x47c PushI
	var_551_int = 44457; // 0x47d PushI
	var_552_int = 44456; // 0x47e PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x47f TObjFunc
	return 0; // 0x481 Return
	
Label_1154:
	var_553_int = 44457; // 0x482 PushI
	var_554_bool = var_39_float == var_553_int; // 0x483 Eq
	if(var_554_bool == 0) goto Label_1172; // 0x484 JumpB
	var_555_string = ""; // 0x485 PushV
	var_555_string = "Neutral"; // 0x486 MovS
	func_539(var_40_int, var_555_string); // 0x487 NEW_2
	var_556_int = 542144; // 0x489 PushI
	SetMessage(var_556_int); // 0x48a TObjFunc
	ClearReplies(); // 0x48c TObjFunc
	var_557_int = 542147; // 0x48e PushI
	var_558_int = 30660; // 0x48f PushI
	var_559_int = 44462; // 0x490 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x491 TObjFunc
	return 0; // 0x493 Return
	
Label_1172:
	var_560_int = 30660; // 0x494 PushI
	var_561_bool = var_39_float == var_560_int; // 0x495 Eq
	if(var_561_bool == 0) goto Label_1190; // 0x496 JumpB
	var_562_string = ""; // 0x497 PushV
	var_562_string = "Fear"; // 0x498 MovS
	func_539(var_40_int, var_562_string); // 0x499 NEW_2
	var_563_int = 529209; // 0x49b PushI
	SetMessage(var_563_int); // 0x49c TObjFunc
	ClearReplies(); // 0x49e TObjFunc
	var_564_int = 529210; // 0x4a0 PushI
	var_565_int = 30662; // 0x4a1 PushI
	var_566_int = 30661; // 0x4a2 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x4a3 TObjFunc
	return 0; // 0x4a5 Return
	
Label_1190:
	var_567_int = 30662; // 0x4a6 PushI
	var_568_bool = var_39_float == var_567_int; // 0x4a7 Eq
	if(var_568_bool == 0) goto Label_1213; // 0x4a8 JumpB
	var_569_string = ""; // 0x4a9 PushV
	var_569_string = "Sly"; // 0x4aa MovS
	func_539(var_40_int, var_569_string); // 0x4ab NEW_2
	var_570_int = 529211; // 0x4ad PushI
	SetMessage(var_570_int); // 0x4ae TObjFunc
	ClearReplies(); // 0x4b0 TObjFunc
	var_571_int = 525240; // 0x4b2 PushI
	var_572_int = 26609; // 0x4b3 PushI
	var_573_int = 26608; // 0x4b4 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x4b5 TObjFunc
	var_574_int = 542150; // 0x4b7 PushI
	var_575_int = 44466; // 0x4b8 PushI
	var_576_int = 44465; // 0x4b9 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x4ba TObjFunc
	return 0; // 0x4bc Return
	
Label_1213:
	var_577_int = 44466; // 0x4bd PushI
	var_578_bool = var_39_float == var_577_int; // 0x4be Eq
	if(var_578_bool == 0) goto Label_1231; // 0x4bf JumpB
	var_579_string = ""; // 0x4c0 PushV
	var_579_string = "Neutral"; // 0x4c1 MovS
	func_539(var_40_int, var_579_string); // 0x4c2 NEW_2
	var_580_int = 542151; // 0x4c4 PushI
	SetMessage(var_580_int); // 0x4c5 TObjFunc
	ClearReplies(); // 0x4c7 TObjFunc
	var_581_int = 542152; // 0x4c9 PushI
	var_582_int = 44468; // 0x4ca PushI
	var_583_int = 44467; // 0x4cb PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x4cc TObjFunc
	return 0; // 0x4ce Return
	
Label_1231:
	var_584_int = 44468; // 0x4cf PushI
	var_585_bool = var_39_float == var_584_int; // 0x4d0 Eq
	if(var_585_bool == 0) goto Label_1249; // 0x4d1 JumpB
	var_586_string = ""; // 0x4d2 PushV
	var_586_string = "Neutral"; // 0x4d3 MovS
	func_539(var_40_int, var_586_string); // 0x4d4 NEW_2
	var_587_int = 542153; // 0x4d6 PushI
	SetMessage(var_587_int); // 0x4d7 TObjFunc
	ClearReplies(); // 0x4d9 TObjFunc
	var_588_int = 542154; // 0x4db PushI
	var_589_int = 26609; // 0x4dc PushI
	var_590_int = 44469; // 0x4dd PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x4de TObjFunc
	return 0; // 0x4e0 Return
	
Label_1249:
	var_591_int = 26609; // 0x4e1 PushI
	var_592_bool = var_39_float == var_591_int; // 0x4e2 Eq
	if(var_592_bool == 0) goto Label_1267; // 0x4e3 JumpB
	var_593_string = ""; // 0x4e4 PushV
	var_593_string = "Sly"; // 0x4e5 MovS
	func_539(var_40_int, var_593_string); // 0x4e6 NEW_2
	var_594_int = 525241; // 0x4e8 PushI
	SetMessage(var_594_int); // 0x4e9 TObjFunc
	ClearReplies(); // 0x4eb TObjFunc
	var_595_int = 542022; // 0x4ed PushI
	var_596_int = 44300; // 0x4ee PushI
	var_597_int = 44299; // 0x4ef PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x4f0 TObjFunc
	return 0; // 0x4f2 Return
	
Label_1267:
	var_598_int = 44300; // 0x4f3 PushI
	var_599_bool = var_39_float == var_598_int; // 0x4f4 Eq
	if(var_599_bool == 0) goto Label_1285; // 0x4f5 JumpB
	var_600_string = ""; // 0x4f6 PushV
	var_600_string = "Untrust"; // 0x4f7 MovS
	func_539(var_40_int, var_600_string); // 0x4f8 NEW_2
	var_601_int = 542023; // 0x4fa PushI
	SetMessage(var_601_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_602_int = 542155; // 0x4ff PushI
	var_603_int = 44472; // 0x500 PushI
	var_604_int = 44471; // 0x501 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x502 TObjFunc
	return 0; // 0x504 Return
	
Label_1285:
	var_605_int = 44472; // 0x505 PushI
	var_606_bool = var_39_float == var_605_int; // 0x506 Eq
	if(var_606_bool == 0) goto Label_1308; // 0x507 JumpB
	var_607_string = ""; // 0x508 PushV
	var_607_string = "Neutral"; // 0x509 MovS
	func_539(var_40_int, var_607_string); // 0x50a NEW_2
	var_608_int = 542156; // 0x50c PushI
	SetMessage(var_608_int); // 0x50d TObjFunc
	ClearReplies(); // 0x50f TObjFunc
	var_609_int = 525242; // 0x511 PushI
	var_610_int = -1; // 0x512 PushI
	var_611_int = 26610; // 0x513 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x514 TObjFunc
	var_612_int = 542157; // 0x516 PushI
	var_613_int = -1; // 0x517 PushI
	var_614_int = 44473; // 0x518 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x519 TObjFunc
	return 0; // 0x51b Return
	
Label_1308:
	var_615_int = 44260; // 0x51c PushI
	var_616_bool = var_39_float == var_615_int; // 0x51d Eq
	if(var_616_bool == 0) goto Label_1331; // 0x51e JumpB
	var_617_string = ""; // 0x51f PushV
	var_617_string = "Sly"; // 0x520 MovS
	func_539(var_40_int, var_617_string); // 0x521 NEW_2
	var_618_int = 541993; // 0x523 PushI
	SetMessage(var_618_int); // 0x524 TObjFunc
	ClearReplies(); // 0x526 TObjFunc
	var_619_int = 541994; // 0x528 PushI
	var_620_int = 44250; // 0x529 PushI
	var_621_int = 44261; // 0x52a PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x52b TObjFunc
	var_622_int = 541995; // 0x52d PushI
	var_623_int = 44263; // 0x52e PushI
	var_624_int = 44262; // 0x52f PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x530 TObjFunc
	return 0; // 0x532 Return
	
Label_1331:
	var_625_int = 44263; // 0x533 PushI
	var_626_bool = var_39_float == var_625_int; // 0x534 Eq
	if(var_626_bool == 0) goto Label_1349; // 0x535 JumpB
	var_627_string = ""; // 0x536 PushV
	var_627_string = "Sly"; // 0x537 MovS
	func_539(var_40_int, var_627_string); // 0x538 NEW_2
	var_628_int = 541996; // 0x53a PushI
	SetMessage(var_628_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_629_int = 541997; // 0x53f PushI
	var_630_int = 44250; // 0x540 PushI
	var_631_int = 44264; // 0x541 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x542 TObjFunc
	return 0; // 0x544 Return
	
Label_1349:
	var_632_int = 44250; // 0x545 PushI
	var_633_bool = var_39_float == var_632_int; // 0x546 Eq
	if(var_633_bool == 0) goto Label_1372; // 0x547 JumpB
	var_634_string = ""; // 0x548 PushV
	var_634_string = "Untrust"; // 0x549 MovS
	func_539(var_40_int, var_634_string); // 0x54a NEW_2
	var_635_int = 541985; // 0x54c PushI
	SetMessage(var_635_int); // 0x54d TObjFunc
	ClearReplies(); // 0x54f TObjFunc
	var_636_int = 541986; // 0x551 PushI
	var_637_int = 26707; // 0x552 PushI
	var_638_int = 44251; // 0x553 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x554 TObjFunc
	var_639_int = 541998; // 0x556 PushI
	var_640_int = 44252; // 0x557 PushI
	var_641_int = 44266; // 0x558 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x559 TObjFunc
	return 0; // 0x55b Return
	
Label_1372:
	var_642_int = 44252; // 0x55c PushI
	var_643_bool = var_39_float == var_642_int; // 0x55d Eq
	if(var_643_bool == 0) goto Label_1395; // 0x55e JumpB
	var_644_string = ""; // 0x55f PushV
	var_644_string = "Neutral"; // 0x560 MovS
	func_539(var_40_int, var_644_string); // 0x561 NEW_2
	var_645_int = 541987; // 0x563 PushI
	SetMessage(var_645_int); // 0x564 TObjFunc
	ClearReplies(); // 0x566 TObjFunc
	var_646_int = 541988; // 0x568 PushI
	var_647_int = 44268; // 0x569 PushI
	var_648_int = 44253; // 0x56a PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x56b TObjFunc
	var_649_int = 542001; // 0x56d PushI
	var_650_int = 26707; // 0x56e PushI
	var_651_int = 44270; // 0x56f PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x570 TObjFunc
	return 0; // 0x572 Return
	
Label_1395:
	var_652_int = 26707; // 0x573 PushI
	var_653_bool = var_39_float == var_652_int; // 0x574 Eq
	if(var_653_bool == 0) goto Label_1418; // 0x575 JumpB
	var_654_string = ""; // 0x576 PushV
	var_654_string = "Untrust"; // 0x577 MovS
	func_539(var_40_int, var_654_string); // 0x578 NEW_2
	var_655_int = 525339; // 0x57a PushI
	SetMessage(var_655_int); // 0x57b TObjFunc
	ClearReplies(); // 0x57d TObjFunc
	var_656_int = 541989; // 0x57f PushI
	var_657_int = 44268; // 0x580 PushI
	var_658_int = 44254; // 0x581 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x582 TObjFunc
	var_659_int = 542002; // 0x584 PushI
	var_660_int = 44273; // 0x585 PushI
	var_661_int = 44272; // 0x586 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x587 TObjFunc
	return 0; // 0x589 Return
	
Label_1418:
	var_662_int = 44273; // 0x58a PushI
	var_663_bool = var_39_float == var_662_int; // 0x58b Eq
	if(var_663_bool == 0) goto Label_1441; // 0x58c JumpB
	var_664_string = ""; // 0x58d PushV
	var_664_string = "Neutral"; // 0x58e MovS
	func_539(var_40_int, var_664_string); // 0x58f NEW_2
	var_665_int = 542003; // 0x591 PushI
	SetMessage(var_665_int); // 0x592 TObjFunc
	ClearReplies(); // 0x594 TObjFunc
	var_666_int = 542004; // 0x596 PushI
	var_667_int = 44268; // 0x597 PushI
	var_668_int = 44274; // 0x598 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x599 TObjFunc
	var_669_int = 542005; // 0x59b PushI
	var_670_int = 44276; // 0x59c PushI
	var_671_int = 44275; // 0x59d PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x59e TObjFunc
	return 0; // 0x5a0 Return
	
Label_1441:
	var_672_int = 44276; // 0x5a1 PushI
	var_673_bool = var_39_float == var_672_int; // 0x5a2 Eq
	if(var_673_bool == 0) goto Label_1464; // 0x5a3 JumpB
	var_674_string = ""; // 0x5a4 PushV
	var_674_string = "Untrust"; // 0x5a5 MovS
	func_539(var_40_int, var_674_string); // 0x5a6 NEW_2
	var_675_int = 542006; // 0x5a8 PushI
	SetMessage(var_675_int); // 0x5a9 TObjFunc
	ClearReplies(); // 0x5ab TObjFunc
	var_676_int = 542007; // 0x5ad PushI
	var_677_int = -1; // 0x5ae PushI
	var_678_int = 44277; // 0x5af PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x5b0 TObjFunc
	var_679_int = 542008; // 0x5b2 PushI
	var_680_int = 44255; // 0x5b3 PushI
	var_681_int = 44278; // 0x5b4 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x5b5 TObjFunc
	return 0; // 0x5b7 Return
	
Label_1464:
	var_682_int = 44268; // 0x5b8 PushI
	var_683_bool = var_39_float == var_682_int; // 0x5b9 Eq
	if(var_683_bool == 0) goto Label_1487; // 0x5ba JumpB
	var_684_string = ""; // 0x5bb PushV
	var_684_string = "Sly"; // 0x5bc MovS
	func_539(var_40_int, var_684_string); // 0x5bd NEW_2
	var_685_int = 541999; // 0x5bf PushI
	SetMessage(var_685_int); // 0x5c0 TObjFunc
	ClearReplies(); // 0x5c2 TObjFunc
	var_686_int = 542000; // 0x5c4 PushI
	var_687_int = 44255; // 0x5c5 PushI
	var_688_int = 44269; // 0x5c6 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x5c7 TObjFunc
	var_689_int = 542009; // 0x5c9 PushI
	var_690_int = 44286; // 0x5ca PushI
	var_691_int = 44281; // 0x5cb PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x5cc TObjFunc
	return 0; // 0x5ce Return
	
Label_1487:
	var_692_int = 44255; // 0x5cf PushI
	var_693_bool = var_39_float == var_692_int; // 0x5d0 Eq
	if(var_693_bool == 0) goto Label_1510; // 0x5d1 JumpB
	var_694_string = ""; // 0x5d2 PushV
	var_694_string = "Sly"; // 0x5d3 MovS
	func_539(var_40_int, var_694_string); // 0x5d4 NEW_2
	var_695_int = 541990; // 0x5d6 PushI
	SetMessage(var_695_int); // 0x5d7 TObjFunc
	ClearReplies(); // 0x5d9 TObjFunc
	var_696_int = 542010; // 0x5db PushI
	var_697_int = 44284; // 0x5dc PushI
	var_698_int = 44283; // 0x5dd PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x5de TObjFunc
	var_699_int = 542012; // 0x5e0 PushI
	var_700_int = 44286; // 0x5e1 PushI
	var_701_int = 44285; // 0x5e2 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x5e3 TObjFunc
	return 0; // 0x5e5 Return
	
Label_1510:
	var_702_int = 44286; // 0x5e6 PushI
	var_703_bool = var_39_float == var_702_int; // 0x5e7 Eq
	if(var_703_bool == 0) goto Label_1533; // 0x5e8 JumpB
	var_704_string = ""; // 0x5e9 PushV
	var_704_string = "Rage"; // 0x5ea MovS
	func_539(var_40_int, var_704_string); // 0x5eb NEW_2
	var_705_int = 542013; // 0x5ed PushI
	SetMessage(var_705_int); // 0x5ee TObjFunc
	ClearReplies(); // 0x5f0 TObjFunc
	var_706_int = 542015; // 0x5f2 PushI
	var_707_int = -1; // 0x5f3 PushI
	var_708_int = 44290; // 0x5f4 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x5f5 TObjFunc
	var_709_int = 542014; // 0x5f7 PushI
	var_710_int = 44284; // 0x5f8 PushI
	var_711_int = 44289; // 0x5f9 PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x5fa TObjFunc
	return 0; // 0x5fc Return
	
Label_1533:
	var_712_int = 44284; // 0x5fd PushI
	var_713_bool = var_39_float == var_712_int; // 0x5fe Eq
	if(var_713_bool == 0) goto Label_1556; // 0x5ff JumpB
	var_714_string = ""; // 0x600 PushV
	var_714_string = "Sly"; // 0x601 MovS
	func_539(var_40_int, var_714_string); // 0x602 NEW_2
	var_715_int = 542011; // 0x604 PushI
	SetMessage(var_715_int); // 0x605 TObjFunc
	ClearReplies(); // 0x607 TObjFunc
	var_716_int = 541991; // 0x609 PushI
	var_717_int = 44257; // 0x60a PushI
	var_718_int = 44256; // 0x60b PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x60c TObjFunc
	var_719_int = 542016; // 0x60e PushI
	var_720_int = 44293; // 0x60f PushI
	var_721_int = 44292; // 0x610 PushI
	AddReply(var_719_int, var_720_int, var_721_int); // 0x611 TObjFunc
	return 0; // 0x613 Return
	
Label_1556:
	var_722_int = 44293; // 0x614 PushI
	var_723_bool = var_39_float == var_722_int; // 0x615 Eq
	if(var_723_bool == 0) goto Label_1579; // 0x616 JumpB
	var_724_string = ""; // 0x617 PushV
	var_724_string = "Rage"; // 0x618 MovS
	func_539(var_40_int, var_724_string); // 0x619 NEW_2
	var_725_int = 542017; // 0x61b PushI
	SetMessage(var_725_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_726_int = 542018; // 0x620 PushI
	var_727_int = 44297; // 0x621 PushI
	var_728_int = 44294; // 0x622 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x623 TObjFunc
	var_729_int = 542019; // 0x625 PushI
	var_730_int = 44257; // 0x626 PushI
	var_731_int = 44295; // 0x627 PushI
	AddReply(var_729_int, var_730_int, var_731_int); // 0x628 TObjFunc
	return 0; // 0x62a Return
	
Label_1579:
	var_732_int = 44297; // 0x62b PushI
	var_733_bool = var_39_float == var_732_int; // 0x62c Eq
	if(var_733_bool == 0) goto Label_1597; // 0x62d JumpB
	var_734_string = ""; // 0x62e PushV
	var_734_string = "Sly"; // 0x62f MovS
	func_539(var_40_int, var_734_string); // 0x630 NEW_2
	var_735_int = 542020; // 0x632 PushI
	SetMessage(var_735_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_736_int = 542021; // 0x637 PushI
	var_737_int = 44257; // 0x638 PushI
	var_738_int = 44298; // 0x639 PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x63a TObjFunc
	return 0; // 0x63c Return
	
Label_1597:
	var_739_int = 44257; // 0x63d PushI
	var_740_bool = var_39_float == var_739_int; // 0x63e Eq
	if(var_740_bool == 0) goto Label_1620; // 0x63f JumpB
	var_741_string = ""; // 0x640 PushV
	var_741_string = "Neutral"; // 0x641 MovS
	func_539(var_40_int, var_741_string); // 0x642 NEW_2
	var_742_int = 541992; // 0x644 PushI
	SetMessage(var_742_int); // 0x645 TObjFunc
	ClearReplies(); // 0x647 TObjFunc
	var_743_int = 525340; // 0x649 PushI
	var_744_int = -1; // 0x64a PushI
	var_745_int = 26708; // 0x64b PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x64c TObjFunc
	var_746_int = 525341; // 0x64e PushI
	var_747_int = -1; // 0x64f PushI
	var_748_int = 26709; // 0x650 PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0x651 TObjFunc
	return 0; // 0x653 Return
	
Label_1620:
	var_3_object = 1; // 0x654 TMovB
	var_749_bool = 0; // 0x655 PushV
	func_4415(var_749_bool); // 0x656 NEW_2
	if(var_749_bool == 0) goto Label_1628; // 0x658 JumpB
	lshStopAnimation(); // 0x659 Func
	goto Label_1630; // 0x65b Jump
	
Label_1630:
	return 0; // 0x65e Return
	
Label_1628:
	StopAnimation(); // 0x65c Func
	
Label_1632:
	return 0; // 0x660 Return
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x711 PushI
	if(var_41_int == 0) goto Label_2122; // 0x712 JumpB
	func_4216(); // 0x714 NEW_2
	var_43_int = 26783; // 0x716 PushI
	var_44_bool = var_40_int == var_43_int; // 0x717 Eq
	if(var_44_bool == 0) goto Label_1822; // 0x718 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x719 PushV
	var_45_object = var_1_object; // 0x71a MovT
	var_46_object = var_0_bool; // 0x71b MovT
	func_4529(); // 0x71c NEW_2
	
Label_1822:
	var_49_int = 26782; // 0x71e PushI
	var_50_bool = var_39_float == var_49_int; // 0x71f Eq
	if(var_50_bool == 0) goto Label_1859; // 0x720 JumpB
	var_51_string = ""; // 0x721 PushV
	var_51_string = "Neutral"; // 0x722 MovS
	func_1786(var_40_int, var_51_string); // 0x723 NEW_2
	var_68_int = 525414; // 0x725 PushI
	SetMessage(var_68_int); // 0x726 TObjFunc
	ClearReplies(); // 0x728 TObjFunc
	var_69_bool = 0; // 0x72a PushV
	var_69_bool = 0; // 0x72b MovB
	var_70_bool = 0; var_71_object = Obj(); // 0x72c PushV
	var_71_object = var_1_object; // 0x72d MovT
	func_4699(var_71_object); // 0x72e NEW_2
	if(var_70_bool == 0) goto Label_1847; // 0x730 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x731 PushV
	var_79_object = var_1_object; // 0x732 MovT
	func_4711(var_79_object); // 0x733 NEW_2
	if(var_78_bool == 0) goto Label_1847; // 0x735 JumpB
	var_69_bool = 1; // 0x736 MovB
	
Label_1847:
	if(var_69_bool == 0) goto Label_1853; // 0x737 JumpB
	var_84_int = 525415; // 0x738 PushI
	var_85_int = 42567; // 0x739 PushI
	var_86_int = 26783; // 0x73a PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x73b TObjFunc
	
Label_1853:
	var_87_int = 525418; // 0x73d PushI
	var_88_int = -1; // 0x73e PushI
	var_89_int = 26786; // 0x73f PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x740 TObjFunc
	return 0; // 0x742 Return
	
Label_1859:
	var_90_int = 42567; // 0x743 PushI
	var_91_bool = var_39_float == var_90_int; // 0x744 Eq
	if(var_91_bool == 0) goto Label_1882; // 0x745 JumpB
	var_92_string = ""; // 0x746 PushV
	var_92_string = "Untrust"; // 0x747 MovS
	func_1786(var_40_int, var_92_string); // 0x748 NEW_2
	var_93_int = 540558; // 0x74a PushI
	SetMessage(var_93_int); // 0x74b TObjFunc
	ClearReplies(); // 0x74d TObjFunc
	var_94_int = 540559; // 0x74f PushI
	var_95_int = 26784; // 0x750 PushI
	var_96_int = 42568; // 0x751 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x752 TObjFunc
	var_97_int = 540560; // 0x754 PushI
	var_98_int = 40922; // 0x755 PushI
	var_99_int = 42569; // 0x756 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x757 TObjFunc
	return 0; // 0x759 Return
	
Label_1882:
	var_100_int = 26784; // 0x75a PushI
	var_101_bool = var_39_float == var_100_int; // 0x75b Eq
	if(var_101_bool == 0) goto Label_1905; // 0x75c JumpB
	var_102_string = ""; // 0x75d PushV
	var_102_string = "Untrust"; // 0x75e MovS
	func_1786(var_40_int, var_102_string); // 0x75f NEW_2
	var_103_int = 525416; // 0x761 PushI
	SetMessage(var_103_int); // 0x762 TObjFunc
	ClearReplies(); // 0x764 TObjFunc
	var_104_int = 525417; // 0x766 PushI
	var_105_int = 40922; // 0x767 PushI
	var_106_int = 26785; // 0x768 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x769 TObjFunc
	var_107_int = 540561; // 0x76b PushI
	var_108_int = 40924; // 0x76c PushI
	var_109_int = 42571; // 0x76d PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x76e TObjFunc
	return 0; // 0x770 Return
	
Label_1905:
	var_110_int = 40922; // 0x771 PushI
	var_111_bool = var_39_float == var_110_int; // 0x772 Eq
	if(var_111_bool == 0) goto Label_1923; // 0x773 JumpB
	var_112_string = ""; // 0x774 PushV
	var_112_string = "Fear"; // 0x775 MovS
	func_1786(var_40_int, var_112_string); // 0x776 NEW_2
	var_113_int = 538982; // 0x778 PushI
	SetMessage(var_113_int); // 0x779 TObjFunc
	ClearReplies(); // 0x77b TObjFunc
	var_114_int = 538983; // 0x77d PushI
	var_115_int = 40924; // 0x77e PushI
	var_116_int = 40923; // 0x77f PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x780 TObjFunc
	return 0; // 0x782 Return
	
Label_1923:
	var_117_int = 40924; // 0x783 PushI
	var_118_bool = var_39_float == var_117_int; // 0x784 Eq
	if(var_118_bool == 0) goto Label_1946; // 0x785 JumpB
	var_119_string = ""; // 0x786 PushV
	var_119_string = "Neutral"; // 0x787 MovS
	func_1786(var_40_int, var_119_string); // 0x788 NEW_2
	var_120_int = 538984; // 0x78a PushI
	SetMessage(var_120_int); // 0x78b TObjFunc
	ClearReplies(); // 0x78d TObjFunc
	var_121_int = 538985; // 0x78f PushI
	var_122_int = 40926; // 0x790 PushI
	var_123_int = 40925; // 0x791 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x792 TObjFunc
	var_124_int = 538988; // 0x794 PushI
	var_125_int = 40929; // 0x795 PushI
	var_126_int = 40928; // 0x796 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x797 TObjFunc
	return 0; // 0x799 Return
	
Label_1946:
	var_127_int = 40929; // 0x79a PushI
	var_128_bool = var_39_float == var_127_int; // 0x79b Eq
	if(var_128_bool == 0) goto Label_1969; // 0x79c JumpB
	var_129_string = ""; // 0x79d PushV
	var_129_string = "Untrust"; // 0x79e MovS
	func_1786(var_40_int, var_129_string); // 0x79f NEW_2
	var_130_int = 538989; // 0x7a1 PushI
	SetMessage(var_130_int); // 0x7a2 TObjFunc
	ClearReplies(); // 0x7a4 TObjFunc
	var_131_int = 540565; // 0x7a6 PushI
	var_132_int = 42578; // 0x7a7 PushI
	var_133_int = 42577; // 0x7a8 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x7a9 TObjFunc
	var_134_int = 538990; // 0x7ab PushI
	var_135_int = 40931; // 0x7ac PushI
	var_136_int = 40930; // 0x7ad PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x7ae TObjFunc
	return 0; // 0x7b0 Return
	
Label_1969:
	var_137_int = 40931; // 0x7b1 PushI
	var_138_bool = var_39_float == var_137_int; // 0x7b2 Eq
	if(var_138_bool == 0) goto Label_1992; // 0x7b3 JumpB
	var_139_string = ""; // 0x7b4 PushV
	var_139_string = "Fear"; // 0x7b5 MovS
	func_1786(var_40_int, var_139_string); // 0x7b6 NEW_2
	var_140_int = 538991; // 0x7b8 PushI
	SetMessage(var_140_int); // 0x7b9 TObjFunc
	ClearReplies(); // 0x7bb TObjFunc
	var_141_int = 538992; // 0x7bd PushI
	var_142_int = -1; // 0x7be PushI
	var_143_int = 40932; // 0x7bf PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7c0 TObjFunc
	var_144_int = 540575; // 0x7c2 PushI
	var_145_int = -1; // 0x7c3 PushI
	var_146_int = 42589; // 0x7c4 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7c5 TObjFunc
	return 0; // 0x7c7 Return
	
Label_1992:
	var_147_int = 40926; // 0x7c8 PushI
	var_148_bool = var_39_float == var_147_int; // 0x7c9 Eq
	if(var_148_bool == 0) goto Label_2010; // 0x7ca JumpB
	var_149_string = ""; // 0x7cb PushV
	var_149_string = "Untrust"; // 0x7cc MovS
	func_1786(var_40_int, var_149_string); // 0x7cd NEW_2
	var_150_int = 538986; // 0x7cf PushI
	SetMessage(var_150_int); // 0x7d0 TObjFunc
	ClearReplies(); // 0x7d2 TObjFunc
	var_151_int = 538987; // 0x7d4 PushI
	var_152_int = 42573; // 0x7d5 PushI
	var_153_int = 40927; // 0x7d6 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7d7 TObjFunc
	return 0; // 0x7d9 Return
	
Label_2010:
	var_154_int = 42573; // 0x7da PushI
	var_155_bool = var_39_float == var_154_int; // 0x7db Eq
	if(var_155_bool == 0) goto Label_2033; // 0x7dc JumpB
	var_156_string = ""; // 0x7dd PushV
	var_156_string = "Rage"; // 0x7de MovS
	func_1786(var_40_int, var_156_string); // 0x7df NEW_2
	var_157_int = 540562; // 0x7e1 PushI
	SetMessage(var_157_int); // 0x7e2 TObjFunc
	ClearReplies(); // 0x7e4 TObjFunc
	var_158_int = 540563; // 0x7e6 PushI
	var_159_int = 40929; // 0x7e7 PushI
	var_160_int = 42574; // 0x7e8 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x7e9 TObjFunc
	var_161_int = 540564; // 0x7eb PushI
	var_162_int = 42578; // 0x7ec PushI
	var_163_int = 42576; // 0x7ed PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x7ee TObjFunc
	return 0; // 0x7f0 Return
	
Label_2033:
	var_164_int = 42578; // 0x7f1 PushI
	var_165_bool = var_39_float == var_164_int; // 0x7f2 Eq
	if(var_165_bool == 0) goto Label_2051; // 0x7f3 JumpB
	var_166_string = ""; // 0x7f4 PushV
	var_166_string = "Rage"; // 0x7f5 MovS
	func_1786(var_40_int, var_166_string); // 0x7f6 NEW_2
	var_167_int = 540566; // 0x7f8 PushI
	SetMessage(var_167_int); // 0x7f9 TObjFunc
	ClearReplies(); // 0x7fb TObjFunc
	var_168_int = 540592; // 0x7fd PushI
	var_169_int = 42607; // 0x7fe PushI
	var_170_int = 42606; // 0x7ff PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x800 TObjFunc
	return 0; // 0x802 Return
	
Label_2051:
	var_171_int = 42607; // 0x803 PushI
	var_172_bool = var_39_float == var_171_int; // 0x804 Eq
	if(var_172_bool == 0) goto Label_2074; // 0x805 JumpB
	var_173_string = ""; // 0x806 PushV
	var_173_string = "Rage"; // 0x807 MovS
	func_1786(var_40_int, var_173_string); // 0x808 NEW_2
	var_174_int = 540593; // 0x80a PushI
	SetMessage(var_174_int); // 0x80b TObjFunc
	ClearReplies(); // 0x80d TObjFunc
	var_175_int = 540594; // 0x80f PushI
	var_176_int = 42609; // 0x810 PushI
	var_177_int = 42608; // 0x811 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x812 TObjFunc
	var_178_int = 540601; // 0x814 PushI
	var_179_int = -1; // 0x815 PushI
	var_180_int = 42615; // 0x816 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x817 TObjFunc
	return 0; // 0x819 Return
	
Label_2074:
	var_181_int = 42609; // 0x81a PushI
	var_182_bool = var_39_float == var_181_int; // 0x81b Eq
	if(var_182_bool == 0) goto Label_2092; // 0x81c JumpB
	var_183_string = ""; // 0x81d PushV
	var_183_string = "Neutral"; // 0x81e MovS
	func_1786(var_40_int, var_183_string); // 0x81f NEW_2
	var_184_int = 540595; // 0x821 PushI
	SetMessage(var_184_int); // 0x822 TObjFunc
	ClearReplies(); // 0x824 TObjFunc
	var_185_int = 540596; // 0x826 PushI
	var_186_int = 42611; // 0x827 PushI
	var_187_int = 42610; // 0x828 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x829 TObjFunc
	return 0; // 0x82b Return
	
Label_2092:
	var_188_int = 42611; // 0x82c PushI
	var_189_bool = var_39_float == var_188_int; // 0x82d Eq
	if(var_189_bool == 0) goto Label_2110; // 0x82e JumpB
	var_190_string = ""; // 0x82f PushV
	var_190_string = "Neutral"; // 0x830 MovS
	func_1786(var_40_int, var_190_string); // 0x831 NEW_2
	var_191_int = 540597; // 0x833 PushI
	SetMessage(var_191_int); // 0x834 TObjFunc
	ClearReplies(); // 0x836 TObjFunc
	var_192_int = 540600; // 0x838 PushI
	var_193_int = -1; // 0x839 PushI
	var_194_int = 42614; // 0x83a PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x83b TObjFunc
	return 0; // 0x83d Return
	
Label_2110:
	var_3_object = 1; // 0x83e TMovB
	var_195_bool = 0; // 0x83f PushV
	func_4415(var_195_bool); // 0x840 NEW_2
	if(var_195_bool == 0) goto Label_2118; // 0x842 JumpB
	lshStopAnimation(); // 0x843 Func
	goto Label_2120; // 0x845 Jump
	
Label_2120:
	return 0; // 0x848 Return
	
Label_2118:
	StopAnimation(); // 0x846 Func
	
Label_2122:
	return 0; // 0x84a Return
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x8ed PushI
	if(var_41_int == 0) goto Label_2348; // 0x8ee JumpB
	func_4216(); // 0x8f0 NEW_2
	var_43_int = 26869; // 0x8f2 PushI
	var_44_bool = var_39_float == var_43_int; // 0x8f3 Eq
	if(var_44_bool == 0) goto Label_2313; // 0x8f4 JumpB
	var_45_string = ""; // 0x8f5 PushV
	var_45_string = "Neutral"; // 0x8f6 MovS
	func_2262(var_40_int, var_45_string); // 0x8f7 NEW_2
	var_62_int = 525513; // 0x8f9 PushI
	SetMessage(var_62_int); // 0x8fa TObjFunc
	ClearReplies(); // 0x8fc TObjFunc
	var_63_int = 525514; // 0x8fe PushI
	var_64_int = 30738; // 0x8ff PushI
	var_65_int = 26870; // 0x900 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x901 TObjFunc
	var_66_int = 529284; // 0x903 PushI
	var_67_int = 30738; // 0x904 PushI
	var_68_int = 30737; // 0x905 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x906 TObjFunc
	return 0; // 0x908 Return
	
Label_2313:
	var_69_int = 30738; // 0x909 PushI
	var_70_bool = var_39_float == var_69_int; // 0x90a Eq
	if(var_70_bool == 0) goto Label_2336; // 0x90b JumpB
	var_71_string = ""; // 0x90c PushV
	var_71_string = "Neutral"; // 0x90d MovS
	func_2262(var_40_int, var_71_string); // 0x90e NEW_2
	var_72_int = 529285; // 0x910 PushI
	SetMessage(var_72_int); // 0x911 TObjFunc
	ClearReplies(); // 0x913 TObjFunc
	var_73_int = 529286; // 0x915 PushI
	var_74_int = -1; // 0x916 PushI
	var_75_int = 30740; // 0x917 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x918 TObjFunc
	var_76_int = 529287; // 0x91a PushI
	var_77_int = -1; // 0x91b PushI
	var_78_int = 30741; // 0x91c PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x91d TObjFunc
	return 0; // 0x91f Return
	
Label_2336:
	var_3_object = 1; // 0x920 TMovB
	var_79_bool = 0; // 0x921 PushV
	func_4415(var_79_bool); // 0x922 NEW_2
	if(var_79_bool == 0) goto Label_2344; // 0x924 JumpB
	lshStopAnimation(); // 0x925 Func
	goto Label_2346; // 0x927 Jump
	
Label_2346:
	return 0; // 0x92a Return
	
Label_2344:
	StopAnimation(); // 0x928 Func
	
Label_2348:
	return 0; // 0x92c Return
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0x9ec PushI
	if(var_41_int == 0) goto Label_2769; // 0x9ed JumpB
	func_4216(); // 0x9ef NEW_2
	var_43_int = 27141; // 0x9f1 PushI
	var_44_bool = var_40_int == var_43_int; // 0x9f2 Eq
	if(var_44_bool == 0) goto Label_2553; // 0x9f3 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x9f4 PushV
	var_45_object = var_1_object; // 0x9f5 MovT
	var_46_object = var_0_bool; // 0x9f6 MovT
	func_4535(); // 0x9f7 NEW_2
	
Label_2553:
	var_49_int = 27143; // 0x9f9 PushI
	var_50_bool = var_40_int == var_49_int; // 0x9fa Eq
	if(var_50_bool == 0) goto Label_2561; // 0x9fb JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x9fc PushV
	var_51_object = var_1_object; // 0x9fd MovT
	var_52_object = var_0_bool; // 0x9fe MovT
	func_4541(); // 0x9ff NEW_2
	
Label_2561:
	var_76_int = 27144; // 0xa01 PushI
	var_77_bool = var_40_int == var_76_int; // 0xa02 Eq
	if(var_77_bool == 0) goto Label_2569; // 0xa03 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0xa04 PushV
	var_78_object = var_1_object; // 0xa05 MovT
	var_79_object = var_0_bool; // 0xa06 MovT
	func_4595(); // 0xa07 NEW_2
	
Label_2569:
	var_82_int = 27140; // 0xa09 PushI
	var_83_bool = var_39_float == var_82_int; // 0xa0a Eq
	if(var_83_bool == 0) goto Label_2621; // 0xa0b JumpB
	var_84_string = ""; // 0xa0c PushV
	var_84_string = "Neutral"; // 0xa0d MovS
	func_2517(var_40_int, var_84_string); // 0xa0e NEW_2
	var_101_int = 525841; // 0xa10 PushI
	SetMessage(var_101_int); // 0xa11 TObjFunc
	ClearReplies(); // 0xa13 TObjFunc
	var_102_bool = 0; // 0xa15 PushV
	var_102_bool = 0; // 0xa16 MovB
	var_103_bool = 0; var_104_object = Obj(); // 0xa17 PushV
	var_104_object = var_1_object; // 0xa18 MovT
	func_4723(var_104_object); // 0xa19 NEW_2
	if(var_103_bool == 0) goto Label_2594; // 0xa1b JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0xa1c PushV
	var_112_object = var_1_object; // 0xa1d MovT
	func_4735(var_112_object); // 0xa1e NEW_2
	if(var_111_bool == 0) goto Label_2594; // 0xa20 JumpB
	var_102_bool = 1; // 0xa21 MovB
	
Label_2594:
	if(var_102_bool == 0) goto Label_2600; // 0xa22 JumpB
	var_117_int = 525842; // 0xa23 PushI
	var_118_int = 30544; // 0xa24 PushI
	var_119_int = 27141; // 0xa25 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xa26 TObjFunc
	
Label_2600:
	var_120_bool = 0; var_121_object = Obj(); // 0xa28 PushV
	var_121_object = var_1_object; // 0xa29 MovT
	func_4771(var_121_object); // 0xa2a NEW_2
	if(var_120_bool == 0) goto Label_2610; // 0xa2c JumpB
	var_126_int = 525845; // 0xa2d PushI
	var_127_int = 30542; // 0xa2e PushI
	var_128_int = 27144; // 0xa2f PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xa30 TObjFunc
	
Label_2610:
	var_129_int = 529095; // 0xa32 PushI
	var_130_int = -1; // 0xa33 PushI
	var_131_int = 30540; // 0xa34 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xa35 TObjFunc
	var_132_int = 529096; // 0xa37 PushI
	var_133_int = -1; // 0xa38 PushI
	var_134_int = 30541; // 0xa39 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xa3a TObjFunc
	return 0; // 0xa3c Return
	
Label_2621:
	var_135_int = 30542; // 0xa3d PushI
	var_136_bool = var_39_float == var_135_int; // 0xa3e Eq
	if(var_136_bool == 0) goto Label_2644; // 0xa3f JumpB
	var_137_string = ""; // 0xa40 PushV
	var_137_string = "Untrust"; // 0xa41 MovS
	func_2517(var_40_int, var_137_string); // 0xa42 NEW_2
	var_138_int = 529097; // 0xa44 PushI
	SetMessage(var_138_int); // 0xa45 TObjFunc
	ClearReplies(); // 0xa47 TObjFunc
	var_139_int = 529098; // 0xa49 PushI
	var_140_int = -1; // 0xa4a PushI
	var_141_int = 30543; // 0xa4b PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xa4c TObjFunc
	var_142_int = 541643; // 0xa4e PushI
	var_143_int = -1; // 0xa4f PushI
	var_144_int = 43815; // 0xa50 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xa51 TObjFunc
	return 0; // 0xa53 Return
	
Label_2644:
	var_145_int = 30544; // 0xa54 PushI
	var_146_bool = var_39_float == var_145_int; // 0xa55 Eq
	if(var_146_bool == 0) goto Label_2662; // 0xa56 JumpB
	var_147_string = ""; // 0xa57 PushV
	var_147_string = "Sly"; // 0xa58 MovS
	func_2517(var_40_int, var_147_string); // 0xa59 NEW_2
	var_148_int = 529099; // 0xa5b PushI
	SetMessage(var_148_int); // 0xa5c TObjFunc
	ClearReplies(); // 0xa5e TObjFunc
	var_149_int = 529100; // 0xa60 PushI
	var_150_int = 30546; // 0xa61 PushI
	var_151_int = 30545; // 0xa62 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xa63 TObjFunc
	return 0; // 0xa65 Return
	
Label_2662:
	var_152_int = 30546; // 0xa66 PushI
	var_153_bool = var_39_float == var_152_int; // 0xa67 Eq
	if(var_153_bool == 0) goto Label_2680; // 0xa68 JumpB
	var_154_string = ""; // 0xa69 PushV
	var_154_string = "Sly"; // 0xa6a MovS
	func_2517(var_40_int, var_154_string); // 0xa6b NEW_2
	var_155_int = 529101; // 0xa6d PushI
	SetMessage(var_155_int); // 0xa6e TObjFunc
	ClearReplies(); // 0xa70 TObjFunc
	var_156_int = 529102; // 0xa72 PushI
	var_157_int = 27142; // 0xa73 PushI
	var_158_int = 30547; // 0xa74 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xa75 TObjFunc
	return 0; // 0xa77 Return
	
Label_2680:
	var_159_int = 27142; // 0xa78 PushI
	var_160_bool = var_39_float == var_159_int; // 0xa79 Eq
	if(var_160_bool == 0) goto Label_2698; // 0xa7a JumpB
	var_161_string = ""; // 0xa7b PushV
	var_161_string = "Sly"; // 0xa7c MovS
	func_2517(var_40_int, var_161_string); // 0xa7d NEW_2
	var_162_int = 525843; // 0xa7f PushI
	SetMessage(var_162_int); // 0xa80 TObjFunc
	ClearReplies(); // 0xa82 TObjFunc
	var_163_int = 529103; // 0xa84 PushI
	var_164_int = 30549; // 0xa85 PushI
	var_165_int = 30548; // 0xa86 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xa87 TObjFunc
	return 0; // 0xa89 Return
	
Label_2698:
	var_166_int = 30549; // 0xa8a PushI
	var_167_bool = var_39_float == var_166_int; // 0xa8b Eq
	if(var_167_bool == 0) goto Label_2721; // 0xa8c JumpB
	var_168_string = ""; // 0xa8d PushV
	var_168_string = "Rage"; // 0xa8e MovS
	func_2517(var_40_int, var_168_string); // 0xa8f NEW_2
	var_169_int = 529104; // 0xa91 PushI
	SetMessage(var_169_int); // 0xa92 TObjFunc
	ClearReplies(); // 0xa94 TObjFunc
	var_170_int = 529105; // 0xa96 PushI
	var_171_int = 30551; // 0xa97 PushI
	var_172_int = 30550; // 0xa98 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xa99 TObjFunc
	var_173_int = 539587; // 0xa9b PushI
	var_174_int = 41533; // 0xa9c PushI
	var_175_int = 41532; // 0xa9d PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xa9e TObjFunc
	return 0; // 0xaa0 Return
	
Label_2721:
	var_176_int = 41533; // 0xaa1 PushI
	var_177_bool = var_39_float == var_176_int; // 0xaa2 Eq
	if(var_177_bool == 0) goto Label_2739; // 0xaa3 JumpB
	var_178_string = ""; // 0xaa4 PushV
	var_178_string = "Neutral"; // 0xaa5 MovS
	func_2517(var_40_int, var_178_string); // 0xaa6 NEW_2
	var_179_int = 539588; // 0xaa8 PushI
	SetMessage(var_179_int); // 0xaa9 TObjFunc
	ClearReplies(); // 0xaab TObjFunc
	var_180_int = 539589; // 0xaad PushI
	var_181_int = 30551; // 0xaae PushI
	var_182_int = 41534; // 0xaaf PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xab0 TObjFunc
	return 0; // 0xab2 Return
	
Label_2739:
	var_183_int = 30551; // 0xab3 PushI
	var_184_bool = var_39_float == var_183_int; // 0xab4 Eq
	if(var_184_bool == 0) goto Label_2757; // 0xab5 JumpB
	var_185_string = ""; // 0xab6 PushV
	var_185_string = "Untrust"; // 0xab7 MovS
	func_2517(var_40_int, var_185_string); // 0xab8 NEW_2
	var_186_int = 529106; // 0xaba PushI
	SetMessage(var_186_int); // 0xabb TObjFunc
	ClearReplies(); // 0xabd TObjFunc
	var_187_int = 525844; // 0xabf PushI
	var_188_int = -1; // 0xac0 PushI
	var_189_int = 27143; // 0xac1 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xac2 TObjFunc
	return 0; // 0xac4 Return
	
Label_2757:
	var_3_object = 1; // 0xac5 TMovB
	var_190_bool = 0; // 0xac6 PushV
	func_4415(var_190_bool); // 0xac7 NEW_2
	if(var_190_bool == 0) goto Label_2765; // 0xac9 JumpB
	lshStopAnimation(); // 0xaca Func
	goto Label_2767; // 0xacc Jump
	
Label_2767:
	return 0; // 0xacf Return
	
Label_2765:
	StopAnimation(); // 0xacd Func
	
Label_2769:
	return 0; // 0xad1 Return
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xb88 PushI
	if(var_41_int == 0) goto Label_3243; // 0xb89 JumpB
	func_4216(); // 0xb8b NEW_2
	var_43_int = 28018; // 0xb8d PushI
	var_44_bool = var_40_int == var_43_int; // 0xb8e Eq
	if(var_44_bool == 0) goto Label_2965; // 0xb8f JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xb90 PushV
	var_45_object = var_1_object; // 0xb91 MovT
	var_46_object = var_0_bool; // 0xb92 MovT
	func_4546(); // 0xb93 NEW_2
	
Label_2965:
	var_72_int = 45451; // 0xb95 PushI
	var_73_bool = var_40_int == var_72_int; // 0xb96 Eq
	if(var_73_bool == 0) goto Label_2973; // 0xb97 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xb98 PushV
	var_74_object = var_1_object; // 0xb99 MovT
	var_75_object = var_0_bool; // 0xb9a MovT
	func_4546(); // 0xb9b NEW_2
	
Label_2973:
	var_76_int = 28015; // 0xb9d PushI
	var_77_bool = var_39_float == var_76_int; // 0xb9e Eq
	if(var_77_bool == 0) goto Label_3016; // 0xb9f JumpB
	var_78_string = ""; // 0xba0 PushV
	var_78_string = "Rage"; // 0xba1 MovS
	func_2929(var_40_int, var_78_string); // 0xba2 NEW_2
	var_95_int = 526738; // 0xba4 PushI
	SetMessage(var_95_int); // 0xba5 TObjFunc
	ClearReplies(); // 0xba7 TObjFunc
	var_96_bool = 0; var_97_object = Obj(); // 0xba9 PushV
	var_97_object = var_1_object; // 0xbaa MovT
	func_4759(var_97_object); // 0xbab NEW_2
	if(var_96_bool == 0) goto Label_2995; // 0xbad JumpB
	var_104_int = 526739; // 0xbae PushI
	var_105_int = 28017; // 0xbaf PushI
	var_106_int = 28016; // 0xbb0 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xbb1 TObjFunc
	
Label_2995:
	var_107_bool = 0; var_108_object = Obj(); // 0xbb3 PushV
	var_108_object = var_1_object; // 0xbb4 MovT
	func_4747(var_108_object); // 0xbb5 NEW_2
	if(var_107_bool == 0) goto Label_3005; // 0xbb7 JumpB
	var_113_int = 528763; // 0xbb8 PushI
	var_114_int = 30180; // 0xbb9 PushI
	var_115_int = 30179; // 0xbba PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xbbb TObjFunc
	
Label_3005:
	var_116_int = 526742; // 0xbbd PushI
	var_117_int = -1; // 0xbbe PushI
	var_118_int = 28019; // 0xbbf PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xbc0 TObjFunc
	var_119_int = 528847; // 0xbc2 PushI
	var_120_int = -1; // 0xbc3 PushI
	var_121_int = 30265; // 0xbc4 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xbc5 TObjFunc
	return 0; // 0xbc7 Return
	
Label_3016:
	var_122_int = 30180; // 0xbc8 PushI
	var_123_bool = var_39_float == var_122_int; // 0xbc9 Eq
	if(var_123_bool == 0) goto Label_3044; // 0xbca JumpB
	var_124_string = ""; // 0xbcb PushV
	var_124_string = "Rage"; // 0xbcc MovS
	func_2929(var_40_int, var_124_string); // 0xbcd NEW_2
	var_125_int = 528764; // 0xbcf PushI
	SetMessage(var_125_int); // 0xbd0 TObjFunc
	ClearReplies(); // 0xbd2 TObjFunc
	var_126_int = 542466; // 0xbd4 PushI
	var_127_int = 44860; // 0xbd5 PushI
	var_128_int = 44859; // 0xbd6 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xbd7 TObjFunc
	var_129_int = 542463; // 0xbd9 PushI
	var_130_int = 44857; // 0xbda PushI
	var_131_int = 44856; // 0xbdb PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xbdc TObjFunc
	var_132_int = 528765; // 0xbde PushI
	var_133_int = -1; // 0xbdf PushI
	var_134_int = 30181; // 0xbe0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xbe1 TObjFunc
	return 0; // 0xbe3 Return
	
Label_3044:
	var_135_int = 44857; // 0xbe4 PushI
	var_136_bool = var_39_float == var_135_int; // 0xbe5 Eq
	if(var_136_bool == 0) goto Label_3062; // 0xbe6 JumpB
	var_137_string = ""; // 0xbe7 PushV
	var_137_string = "Neutral"; // 0xbe8 MovS
	func_2929(var_40_int, var_137_string); // 0xbe9 NEW_2
	var_138_int = 542464; // 0xbeb PushI
	SetMessage(var_138_int); // 0xbec TObjFunc
	ClearReplies(); // 0xbee TObjFunc
	var_139_int = 542465; // 0xbf0 PushI
	var_140_int = -1; // 0xbf1 PushI
	var_141_int = 44858; // 0xbf2 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xbf3 TObjFunc
	return 0; // 0xbf5 Return
	
Label_3062:
	var_142_int = 44860; // 0xbf6 PushI
	var_143_bool = var_39_float == var_142_int; // 0xbf7 Eq
	if(var_143_bool == 0) goto Label_3085; // 0xbf8 JumpB
	var_144_string = ""; // 0xbf9 PushV
	var_144_string = "Neutral"; // 0xbfa MovS
	func_2929(var_40_int, var_144_string); // 0xbfb NEW_2
	var_145_int = 542467; // 0xbfd PushI
	SetMessage(var_145_int); // 0xbfe TObjFunc
	ClearReplies(); // 0xc00 TObjFunc
	var_146_int = 542468; // 0xc02 PushI
	var_147_int = -1; // 0xc03 PushI
	var_148_int = 44861; // 0xc04 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xc05 TObjFunc
	var_149_int = 543008; // 0xc07 PushI
	var_150_int = -1; // 0xc08 PushI
	var_151_int = 45460; // 0xc09 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xc0a TObjFunc
	return 0; // 0xc0c Return
	
Label_3085:
	var_152_int = 28017; // 0xc0d PushI
	var_153_bool = var_39_float == var_152_int; // 0xc0e Eq
	if(var_153_bool == 0) goto Label_3108; // 0xc0f JumpB
	var_154_string = ""; // 0xc10 PushV
	var_154_string = "Rage"; // 0xc11 MovS
	func_2929(var_40_int, var_154_string); // 0xc12 NEW_2
	var_155_int = 526740; // 0xc14 PushI
	SetMessage(var_155_int); // 0xc15 TObjFunc
	ClearReplies(); // 0xc17 TObjFunc
	var_156_int = 528841; // 0xc19 PushI
	var_157_int = 30260; // 0xc1a PushI
	var_158_int = 30259; // 0xc1b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xc1c TObjFunc
	var_159_int = 528848; // 0xc1e PushI
	var_160_int = 30267; // 0xc1f PushI
	var_161_int = 30266; // 0xc20 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xc21 TObjFunc
	return 0; // 0xc23 Return
	
Label_3108:
	var_162_int = 30267; // 0xc24 PushI
	var_163_bool = var_39_float == var_162_int; // 0xc25 Eq
	if(var_163_bool == 0) goto Label_3131; // 0xc26 JumpB
	var_164_string = ""; // 0xc27 PushV
	var_164_string = "Neutral"; // 0xc28 MovS
	func_2929(var_40_int, var_164_string); // 0xc29 NEW_2
	var_165_int = 528849; // 0xc2b PushI
	SetMessage(var_165_int); // 0xc2c TObjFunc
	ClearReplies(); // 0xc2e TObjFunc
	var_166_int = 528850; // 0xc30 PushI
	var_167_int = 45452; // 0xc31 PushI
	var_168_int = 30268; // 0xc32 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xc33 TObjFunc
	var_169_int = 528851; // 0xc35 PushI
	var_170_int = 45452; // 0xc36 PushI
	var_171_int = 30269; // 0xc37 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xc38 TObjFunc
	return 0; // 0xc3a Return
	
Label_3131:
	var_172_int = 45452; // 0xc3b PushI
	var_173_bool = var_39_float == var_172_int; // 0xc3c Eq
	if(var_173_bool == 0) goto Label_3149; // 0xc3d JumpB
	var_174_string = ""; // 0xc3e PushV
	var_174_string = "Neutral"; // 0xc3f MovS
	func_2929(var_40_int, var_174_string); // 0xc40 NEW_2
	var_175_int = 543003; // 0xc42 PushI
	SetMessage(var_175_int); // 0xc43 TObjFunc
	ClearReplies(); // 0xc45 TObjFunc
	var_176_int = 543005; // 0xc47 PushI
	var_177_int = 45457; // 0xc48 PushI
	var_178_int = 45456; // 0xc49 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xc4a TObjFunc
	return 0; // 0xc4c Return
	
Label_3149:
	var_179_int = 45457; // 0xc4d PushI
	var_180_bool = var_39_float == var_179_int; // 0xc4e Eq
	if(var_180_bool == 0) goto Label_3167; // 0xc4f JumpB
	var_181_string = ""; // 0xc50 PushV
	var_181_string = "Sly"; // 0xc51 MovS
	func_2929(var_40_int, var_181_string); // 0xc52 NEW_2
	var_182_int = 543006; // 0xc54 PushI
	SetMessage(var_182_int); // 0xc55 TObjFunc
	ClearReplies(); // 0xc57 TObjFunc
	var_183_int = 543007; // 0xc59 PushI
	var_184_int = 30264; // 0xc5a PushI
	var_185_int = 45458; // 0xc5b PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xc5c TObjFunc
	return 0; // 0xc5e Return
	
Label_3167:
	var_186_int = 30260; // 0xc5f PushI
	var_187_bool = var_39_float == var_186_int; // 0xc60 Eq
	if(var_187_bool == 0) goto Label_3185; // 0xc61 JumpB
	var_188_string = ""; // 0xc62 PushV
	var_188_string = "Sly"; // 0xc63 MovS
	func_2929(var_40_int, var_188_string); // 0xc64 NEW_2
	var_189_int = 528842; // 0xc66 PushI
	SetMessage(var_189_int); // 0xc67 TObjFunc
	ClearReplies(); // 0xc69 TObjFunc
	var_190_int = 528843; // 0xc6b PushI
	var_191_int = 30262; // 0xc6c PushI
	var_192_int = 30261; // 0xc6d PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xc6e TObjFunc
	return 0; // 0xc70 Return
	
Label_3185:
	var_193_int = 30262; // 0xc71 PushI
	var_194_bool = var_39_float == var_193_int; // 0xc72 Eq
	if(var_194_bool == 0) goto Label_3208; // 0xc73 JumpB
	var_195_string = ""; // 0xc74 PushV
	var_195_string = "Rage"; // 0xc75 MovS
	func_2929(var_40_int, var_195_string); // 0xc76 NEW_2
	var_196_int = 528844; // 0xc78 PushI
	SetMessage(var_196_int); // 0xc79 TObjFunc
	ClearReplies(); // 0xc7b TObjFunc
	var_197_int = 528845; // 0xc7d PushI
	var_198_int = 30264; // 0xc7e PushI
	var_199_int = 30263; // 0xc7f PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xc80 TObjFunc
	var_200_int = 543004; // 0xc82 PushI
	var_201_int = 30264; // 0xc83 PushI
	var_202_int = 45454; // 0xc84 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xc85 TObjFunc
	return 0; // 0xc87 Return
	
Label_3208:
	var_203_int = 30264; // 0xc88 PushI
	var_204_bool = var_39_float == var_203_int; // 0xc89 Eq
	if(var_204_bool == 0) goto Label_3231; // 0xc8a JumpB
	var_205_string = ""; // 0xc8b PushV
	var_205_string = "Neutral"; // 0xc8c MovS
	func_2929(var_40_int, var_205_string); // 0xc8d NEW_2
	var_206_int = 528846; // 0xc8f PushI
	SetMessage(var_206_int); // 0xc90 TObjFunc
	ClearReplies(); // 0xc92 TObjFunc
	var_207_int = 526741; // 0xc94 PushI
	var_208_int = -1; // 0xc95 PushI
	var_209_int = 28018; // 0xc96 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xc97 TObjFunc
	var_210_int = 543002; // 0xc99 PushI
	var_211_int = -1; // 0xc9a PushI
	var_212_int = 45451; // 0xc9b PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xc9c TObjFunc
	return 0; // 0xc9e Return
	
Label_3231:
	var_3_object = 1; // 0xc9f TMovB
	var_213_bool = 0; // 0xca0 PushV
	func_4415(var_213_bool); // 0xca1 NEW_2
	if(var_213_bool == 0) goto Label_3239; // 0xca3 JumpB
	lshStopAnimation(); // 0xca4 Func
	goto Label_3241; // 0xca6 Jump
	
Label_3241:
	return 0; // 0xca9 Return
	
Label_3239:
	StopAnimation(); // 0xca7 Func
	
Label_3243:
	return 0; // 0xcab Return
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xd53 PushI
	if(var_41_int == 0) goto Label_3502; // 0xd54 JumpB
	func_4216(); // 0xd56 NEW_2
	var_43_int = 36906; // 0xd58 PushI
	var_44_bool = var_39_float == var_43_int; // 0xd59 Eq
	if(var_44_bool == 0) goto Label_3444; // 0xd5a JumpB
	var_45_string = ""; // 0xd5b PushV
	var_45_string = "Neutral"; // 0xd5c MovS
	func_3388(var_40_int, var_45_string); // 0xd5d NEW_2
	var_62_int = 535231; // 0xd5f PushI
	SetMessage(var_62_int); // 0xd60 TObjFunc
	ClearReplies(); // 0xd62 TObjFunc
	var_63_int = 535232; // 0xd64 PushI
	var_64_int = 36953; // 0xd65 PushI
	var_65_int = 36907; // 0xd66 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd67 TObjFunc
	var_66_int = 535233; // 0xd69 PushI
	var_67_int = -1; // 0xd6a PushI
	var_68_int = 36908; // 0xd6b PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xd6c TObjFunc
	var_69_int = 535280; // 0xd6e PushI
	var_70_int = -1; // 0xd6f PushI
	var_71_int = 36956; // 0xd70 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xd71 TObjFunc
	return 0; // 0xd73 Return
	
Label_3444:
	var_72_int = 36953; // 0xd74 PushI
	var_73_bool = var_39_float == var_72_int; // 0xd75 Eq
	if(var_73_bool == 0) goto Label_3467; // 0xd76 JumpB
	var_74_string = ""; // 0xd77 PushV
	var_74_string = "Neutral"; // 0xd78 MovS
	func_3388(var_40_int, var_74_string); // 0xd79 NEW_2
	var_75_int = 535277; // 0xd7b PushI
	SetMessage(var_75_int); // 0xd7c TObjFunc
	ClearReplies(); // 0xd7e TObjFunc
	var_76_int = 535278; // 0xd80 PushI
	var_77_int = 36957; // 0xd81 PushI
	var_78_int = 36954; // 0xd82 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xd83 TObjFunc
	var_79_int = 535279; // 0xd85 PushI
	var_80_int = 36957; // 0xd86 PushI
	var_81_int = 36955; // 0xd87 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xd88 TObjFunc
	return 0; // 0xd8a Return
	
Label_3467:
	var_82_int = 36957; // 0xd8b PushI
	var_83_bool = var_39_float == var_82_int; // 0xd8c Eq
	if(var_83_bool == 0) goto Label_3490; // 0xd8d JumpB
	var_84_string = ""; // 0xd8e PushV
	var_84_string = "Neutral"; // 0xd8f MovS
	func_3388(var_40_int, var_84_string); // 0xd90 NEW_2
	var_85_int = 535281; // 0xd92 PushI
	SetMessage(var_85_int); // 0xd93 TObjFunc
	ClearReplies(); // 0xd95 TObjFunc
	var_86_int = 535282; // 0xd97 PushI
	var_87_int = -1; // 0xd98 PushI
	var_88_int = 36958; // 0xd99 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xd9a TObjFunc
	var_89_int = 535283; // 0xd9c PushI
	var_90_int = -1; // 0xd9d PushI
	var_91_int = 36959; // 0xd9e PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xd9f TObjFunc
	return 0; // 0xda1 Return
	
Label_3490:
	var_3_object = 1; // 0xda2 TMovB
	var_92_bool = 0; // 0xda3 PushV
	func_4415(var_92_bool); // 0xda4 NEW_2
	if(var_92_bool == 0) goto Label_3498; // 0xda6 JumpB
	lshStopAnimation(); // 0xda7 Func
	goto Label_3500; // 0xda9 Jump
	
Label_3500:
	return 0; // 0xdac Return
	
Label_3498:
	StopAnimation(); // 0xdaa Func
	
Label_3502:
	return 0; // 0xdae Return
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_float, var_39_float, var_40_int)
{
	var_41_int = 1; // 0xe51 PushI
	if(var_41_int == 0) goto Label_3705; // 0xe52 JumpB
	func_4216(); // 0xe54 NEW_2
	var_43_int = 42554; // 0xe56 PushI
	var_44_bool = var_39_float == var_43_int; // 0xe57 Eq
	if(var_44_bool == 0) goto Label_3693; // 0xe58 JumpB
	var_45_string = ""; // 0xe59 PushV
	var_45_string = "Neutral"; // 0xe5a MovS
	func_3642(var_40_int, var_45_string); // 0xe5b NEW_2
	var_62_int = 540545; // 0xe5d PushI
	SetMessage(var_62_int); // 0xe5e TObjFunc
	ClearReplies(); // 0xe60 TObjFunc
	var_63_int = 540546; // 0xe62 PushI
	var_64_int = -1; // 0xe63 PushI
	var_65_int = 42555; // 0xe64 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe65 TObjFunc
	var_66_int = 540798; // 0xe67 PushI
	var_67_int = -1; // 0xe68 PushI
	var_68_int = 42847; // 0xe69 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe6a TObjFunc
	return 0; // 0xe6c Return
	
Label_3693:
	var_3_object = 1; // 0xe6d TMovB
	var_69_bool = 0; // 0xe6e PushV
	func_4415(var_69_bool); // 0xe6f NEW_2
	if(var_69_bool == 0) goto Label_3701; // 0xe71 JumpB
	lshStopAnimation(); // 0xe72 Func
	goto Label_3703; // 0xe74 Jump
	
Label_3703:
	return 0; // 0xe77 Return
	
Label_3701:
	StopAnimation(); // 0xe75 Func
	
Label_3705:
	return 0; // 0xe79 Return
}


task_18_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4406(); // 0xef8 NEW_2
	TaskCall(0); // 0xefb TaskCall
	func_0(); // 0xefc NEW_2
	TaskReturn(); // 0xefd TaskReturn
	return 0; // 0xeff Return
}


task_18_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0; // 0xf00 PushV
	IsOverrideActive(var_41_bool); // 0xf01 Func
	var_42_bool = var_41_bool == 0; // 0xf03 Not
	if(var_42_bool == 0) goto Label_3855; // 0xf04 JumpB
	EventDisable(0); // 0xf05 EventDisable
	var_43_bool = 0; var_44_object = Obj(); // 0xf06 PushV
	var_44_object = var_39_object; // 0xf07 Mov
	func_3920(var_44_object); // 0xf08 NEW_2
	EventEnable(0); // 0xf0a EventEnable
	var_57_object = Obj(); // 0xf0b PushV
	var_57_object = var_39_object; // 0xf0c Mov
	func_5027(var_57_object); // 0xf0d NEW_2
	
Label_3855:
	return 2; // 0xf0f Return
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	return 0; // 0x1136 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	var_39_bool = GlobalVars[2]; // 0xe7a PushGE
	var_39_bool = 0; // 0xe7b MovB
	GlobalVars[2] = var_39_bool; // 0xe7c PopGE
	func_3713(var_36_float, var_37_float, var_38_int); // 0xe7e NEW_2
	return 0; // 0xe80 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_81_bool = 0; // 0x2 PushV
	func_3940(var_81_bool); // 0x3 NEW_2
	var_82_bool = var_81_bool == 0; // 0x5 Not
	if(var_82_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_3584(var_0_bool, var_1_object, var_2_object, var_3_object, var_749_object, var_750_object)
{
	var_0_bool = var_750_object; // 0xe01 TMov
	var_1_object = var_749_object; // 0xe02 TMov
	var_3_object = 0; // 0xe03 TMovB
	var_755_int = 1; // 0xe04 PushI
	if(var_755_int == 0) goto Label_3612; // 0xe05 JumpB
	var_756_string = ""; // 0xe06 PushV
	var_756_string = "Neutral"; // 0xe07 MovS
	func_3642(var_750_object, var_756_string); // 0xe08 NEW_2
	var_764_int = 540545; // 0xe0a PushI
	SetMessage(var_764_int); // 0xe0b TObjFunc
	ClearReplies(); // 0xe0d TObjFunc
	var_765_int = 540546; // 0xe0f PushI
	var_766_int = -1; // 0xe10 PushI
	var_767_int = 42555; // 0xe11 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xe12 TObjFunc
	var_768_int = 540798; // 0xe14 PushI
	var_769_int = -1; // 0xe15 PushI
	var_770_int = 42847; // 0xe16 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xe17 TObjFunc
	goto Label_3612; // 0xe19 Jump
	
Label_3612:
	var_771_bool = 0; // 0xe1c PushV
	func_4415(var_771_bool); // 0xe1d NEW_2
	if(var_771_bool == 0) goto Label_3627; // 0xe1f JumpB
	
Label_3616:
	lshWaitForAnimEnd(); // 0xe20 Func
	var_772_object = var_3_object; // 0xe22 PushT
	if(var_772_object == 0) goto Label_3621; // 0xe23 JumpB
	goto Label_3626; // 0xe24 Jump
	
Label_3626:
	goto Label_3641; // 0xe2a Jump
	
Label_3641:
	return 0; // 0xe39 Return
	
Label_3621:
	var_773_string = ""; // 0xe25 PushV
	var_773_string = var_2_object; // 0xe26 MovT
	func_4170(var_773_string); // 0xe27 NEW_2
	goto Label_3616; // 0xe29 Jump
	
Label_3627:
	var_774_string = "all"; // 0xe2b PushS
	var_775_string = "idle"; // 0xe2c PushS
	PlayAnimation(var_774_string, var_775_string); // 0xe2d Func
	
Label_3631:
	WaitForAnimEnd(); // 0xe2f Func
	var_776_object = var_3_object; // 0xe31 PushT
	if(var_776_object == 0) goto Label_3636; // 0xe32 JumpB
	goto Label_3641; // 0xe33 Jump
	
Label_3636:
	var_777_string = "all"; // 0xe34 PushS
	var_778_string = "idle"; // 0xe35 PushS
	PlayAnimation(var_777_string, var_778_string); // 0xe36 Func
	goto Label_3631; // 0xe38 Jump
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


func_4354(var_187_int)
{
	var_188_float = 0; var_189_float = 0; // 0x1102 PushV
	GetGameTime(var_189_float); // 0x1103 Func
	var_190_int = 1; // 0x1105 PushI
	var_191_int = 0; // 0x1106 PushV
	var_192_int = 24; // 0x1107 PushI
	var_191_int = var_189_float / var_189_float; // 0x1108 Div2
	var_187_int = var_190_int + var_191_int; // 0x1109 Add2
	return 2; // 0x110a Return
}


func_4867()
{
	var_291_object = Obj(); var_292_object = Obj(); // 0x1303 PushV
	var_293_int = 516; // 0x1304 PushI
	var_294_int = 2; // 0x1305 PushI
	var_295_int = 529715; // 0x1306 PushI
	CreateDiaryEntry(var_292_object, var_293_int, var_294_int, var_295_int); // 0x1307 Func
	var_296_bool = 0; var_297_object = Obj(); var_298_int = 0; // 0x1309 PushV
	var_297_object = var_292_object; // 0x130a Mov
	var_298_int = 507; // 0x130b MovI
	func_4932(var_296_bool, var_297_object, var_298_int); // 0x130c NEW_2
	return 2; // 0x130e Return
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


func_4617(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0x120a PushV
	var_332_string = "k2q01"; // 0x120b MovS
	func_4268(var_331_int, var_332_string); // 0x120c NEW_2
	var_333_int = 1; // 0x120e PushI
	var_334_bool = var_331_int == var_333_int; // 0x120f Eq
	if(var_334_bool == 0) goto Label_4627; // 0x1210 JumpB
	var_329_bool = 1; // 0x1211 MovB
	return 0; // 0x1212 Return
	
Label_4627:
	var_329_bool = 0; // 0x1213 MovB
	return 0; // 0x1214 Return
}


func_4363(var_286_bool, var_287_int)
{
	var_288_int = 0; // 0x110c PushV
	func_4354(var_288_int); // 0x110d NEW_2
	var_286_bool = var_288_int == var_287_int; // 0x110f Eq2
	return 0; // 0x1110 Return
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
	func_3910(var_130_bool, var_131_cvector); // 0x15 NEW_2
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


func_3856(var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0xf10 PushV
	GetPosition(var_105_cvector); // 0xf11 Func
	var_103_cvector = var_105_cvector; // 0xf13 Mov
	return 2; // 0xf14 Return
}


func_4369(var_191_string, var_192_int)
{
	var_193_string = ""; var_194_string = ""; // 0x1111 PushV
	var_194_string = "idle"; // 0x1112 MovS
	var_195_int = var_192_int; // 0x1113 Push
	if(var_195_int == 0) goto Label_4374; // 0x1114 JumpB
	var_194_string = var_194_string + var_192_int; // 0x1115 Add2
	
Label_4374:
	var_191_string = var_194_string; // 0x1116 Mov
	return 2; // 0x1117 Return
}


func_4880()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x1310 PushV
	var_90_int = 508; // 0x1311 PushI
	var_91_int = 2; // 0x1312 PushI
	var_92_int = 529707; // 0x1313 PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x1314 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x1316 PushV
	var_94_object = var_89_object; // 0x1317 Mov
	var_95_int = 507; // 0x1318 MovI
	func_4932(var_93_bool, var_94_object, var_95_int); // 0x1319 NEW_2
	return 2; // 0x131b Return
}


func_4629(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0x1216 PushV
	var_324_string = "ook2MladVlad1"; // 0x1217 MovS
	func_4268(var_323_int, var_324_string); // 0x1218 NEW_2
	var_327_int = 0; // 0x121a PushI
	var_328_bool = var_323_int == var_327_int; // 0x121b Eq
	if(var_328_bool == 0) goto Label_4639; // 0x121c JumpB
	var_321_bool = 1; // 0x121d MovB
	return 0; // 0x121e Return
	
Label_4639:
	var_321_bool = 0; // 0x121f MovB
	return 0; // 0x1220 Return
}


func_3861(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xf15 PushV
	GetPosition(var_56_cvector); // 0xf16 Func
	GetPosition(var_57_cvector); // 0xf18 ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xf1a Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xf1b Or2
	return 6; // 0xf1c Return
}


func_4376(var_185_int)
{
	var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_bool = 0; // 0x1118 PushV
	var_188_int = 0; // 0x1119 MovI
	
Label_4378:
	var_190_string = "all"; // 0x111a PushS
	var_191_string = ""; var_192_int = 0; // 0x111b PushV
	var_192_int = var_188_int; // 0x111c Mov
	func_4369(var_191_string, var_192_int); // 0x111d NEW_2
	HasAnimation(var_189_bool, var_190_string, var_191_string); // 0x111f Func
	var_196_bool = var_189_bool == 0; // 0x1121 Not
	if(var_196_bool == 0) goto Label_4388; // 0x1122 JumpB
	goto Label_4391; // 0x1123 Jump
	
Label_4391:
	var_185_int = var_188_int; // 0x1127 Mov
	return 4; // 0x1128 Return
	
Label_4388:
	var_197_int = 1; // 0x1124 PushI
	var_188_int = var_188_int + var_197_int; // 0x1125 Add2
	goto Label_4378; // 0x1126 Jump
}


func_282(var_0_bool, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; // 0x11a PushV
	var_0_bool = var_290_object; // 0x11b TMov
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0; // 0x11c PushV
	var_301_object = var_290_object; // 0x11d Mov
	var_302_float = 70.0; // 0x11e MovF
	func_3945(var_301_object, var_302_float); // 0x11f NEW_2
	var_303_bool = var_300_bool == 0; // 0x121 Not
	if(var_303_bool == 0) goto Label_293; // 0x122 JumpB
	var_289_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_296_object); // 0x125 Func
	var_304_int = 0; // 0x127 PushV
	func_4409(var_304_int); // 0x128 NEW_2
	SetNPCName(var_304_int); // 0x12a ObjFunc
	var_305_int = 0; // 0x12c PushV
	func_4407(var_305_int); // 0x12d NEW_2
	SetNPCDescription(var_305_int); // 0x12f ObjFunc
	var_306_string = ""; // 0x131 PushV
	func_4411(var_306_string); // 0x132 NEW_2
	SetPhoto(var_306_string); // 0x134 ObjFunc
	var_307_string = ""; // 0x136 PushV
	func_4413(var_307_string); // 0x137 NEW_2
	SetPhoto2(var_307_string); // 0x139 ObjFunc
	var_308_int = 0; // 0x13b PushV
	func_5010(var_308_int); // 0x13c NEW_2
	SetPlayerName(var_308_int); // 0x13e ObjFunc
	var_298_int = -1; // 0x140 MovI
	IsOverrideActive(var_297_bool); // 0x141 Func
	var_309_bool = var_297_bool; // 0x143 Push
	if(var_309_bool == 0) goto Label_327; // 0x144 JumpB
	var_289_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_296_object); // 0x147 Func
	var_310_bool = 0; var_311_object = Obj(); // 0x149 PushV
	var_312_object = Obj(); // 0x14a PushV
	func_4223(var_312_object); // 0x14b NEW_2
	var_311_object = var_312_object; // 0x14c Mov
	func_4032(var_310_bool, var_311_object); // 0x14e NEW_2
	var_313_object = Obj(); var_314_object = Obj(); // 0x150 PushV
	var_313_object = var_290_object; // 0x151 Mov
	var_314_object = var_296_object; // 0x152 Mov
	TaskCall(5); // 0x153 TaskCall
	func_363(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	IsDialogEnd(var_299_bool); // 0x157 ObjFunc
	
Label_345:
	var_432_bool = var_299_bool == 0; // 0x159 Not
	if(var_432_bool == 0) goto Label_352; // 0x15a JumpB
	sync(); // 0x15b Func
	IsDialogEnd(var_299_bool); // 0x15d ObjFunc
	goto Label_345; // 0x15f Jump
	
Label_352:
	var_433_object = Obj(); // 0x160 PushV
	var_433_object = var_290_object; // 0x161 Mov
	func_4014(); // 0x162 NEW_2
	StopDialog(var_296_object); // 0x164 Func
	GetReturnValue(var_298_int); // 0x166 ObjFunc
	var_289_int = var_298_int; // 0x168 Mov
	return 8; // 0x169 Return
}


func_539(var_2_object, var_340_string)
{
	var_341_bool = 0; // 0x21c PushV
	func_4415(var_341_bool); // 0x21d NEW_2
	var_342_bool = var_341_bool == 0; // 0x21f Not
	if(var_342_bool == 0) goto Label_546; // 0x220 JumpB
	return 0; // 0x221 Return
	
Label_546:
	var_343_bool = var_340_string == var_2_object; // 0x222 Eq
	if(var_343_bool == 0) goto Label_549; // 0x223 JumpB
	return 0; // 0x224 Return
	
Label_549:
	var_344_string = ""; var_345_bool = 0; // 0x225 PushV
	var_344_string = var_340_string; // 0x226 Mov
	var_346_string = ""; // 0x227 PushS
	var_347_bool = var_340_string == var_346_string; // 0x228 Eq
	if(var_347_bool == 0) goto Label_556; // 0x229 JumpB
	var_345_bool = 0; // 0x22a MovB
	goto Label_557; // 0x22b Jump
	
Label_557:
	func_4186(var_344_string, var_345_bool); // 0x22d NEW_2
	var_2_object = var_340_string; // 0x22f TMov
	return 0; // 0x230 Return
	
Label_556:
	var_345_bool = 1; // 0x22c MovB
}


func_3869(var_145_bool, var_146_object, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0; // 0xf1d PushV
	var_150_string = "HasProperty"; // 0xf1e PushS
	var_151_int = 2; // 0xf1f PushI
	var_152_bool = IsFuncExist(var_146_object, var_150_string, var_151_int); // 0xf20 FuncExist
	var_153_bool = var_152_bool == 0; // 0xf21 Not
	if(var_153_bool == 0) goto Label_3877; // 0xf22 JumpB
	var_145_bool = 0; // 0xf23 MovB
	return 2; // 0xf24 Return
	
Label_3877:
	HasProperty(var_147_string, var_149_bool); // 0xf25 ObjFunc
	var_145_bool = var_149_bool; // 0xf27 Mov
	return 2; // 0xf28 Return
}


func_4893()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x131d PushV
	var_55_int = 392; // 0x131e PushI
	var_56_int = 1; // 0x131f PushI
	var_57_int = 525885; // 0x1320 PushI
	CreateDiaryEntry(var_54_object, var_55_int, var_56_int, var_57_int); // 0x1321 Func
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; // 0x1323 PushV
	var_59_object = var_54_object; // 0x1324 Mov
	var_60_int = 390; // 0x1325 MovI
	func_4932(var_58_bool, var_59_object, var_60_int); // 0x1326 NEW_2
	return 2; // 0x1328 Return
}


func_4127(var_174_bool)
{
	var_176_string = ""; var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_string = ""; var_181_string = ""; var_182_int = 0; var_183_bool = 0; var_184_int = 0; var_185_string = ""; // 0x101f PushV
	var_186_string = "d"; // 0x1020 PushS
	var_187_int = 0; // 0x1021 PushV
	func_4354(var_187_int); // 0x1022 NEW_2
	var_193_int = var_186_string + var_187_int; // 0x1024 Add
	var_194_string = "m"; // 0x1025 PushS
	var_181_string = var_193_int + var_194_string; // 0x1026 Add2
	var_182_int = 0; // 0x1027 MovI
	
Label_4136:
	var_195_int = 1; // 0x1028 PushI
	if(var_195_int == 0) goto Label_4149; // 0x1029 JumpB
	var_196_int = 1; // 0x102a PushI
	var_197_int = var_182_int + var_196_int; // 0x102b Add
	var_198_int = var_181_string + var_197_int; // 0x102c Add
	HasProperty(var_198_int, var_183_bool); // 0x102d ObjFunc
	var_199_bool = var_183_bool == 0; // 0x102f Not
	if(var_199_bool == 0) goto Label_4146; // 0x1030 JumpB
	goto Label_4149; // 0x1031 Jump
	
Label_4149:
	var_200_bool = var_182_int == 0; // 0x1035 Not
	if(var_200_bool == 0) goto Label_4153; // 0x1036 JumpB
	var_174_bool = 0; // 0x1037 MovB
	return 10; // 0x1038 Return
	
Label_4153:
	var_184_int = 0; // 0x1039 MovI
	var_201_int = 1; // 0x103a PushI
	var_202_bool = var_182_int > var_201_int; // 0x103b GT
	if(var_202_bool == 0) goto Label_4159; // 0x103c JumpB
	irand(var_184_int, var_182_int); // 0x103d Func
	
Label_4159:
	var_203_int = 1; // 0x103f PushI
	var_204_int = var_184_int + var_203_int; // 0x1040 Add
	var_205_int = var_181_string + var_204_int; // 0x1041 Add
	GetProperty(var_205_int, var_185_string); // 0x1042 ObjFunc
	var_206_bool = 0; var_207_string = ""; // 0x1044 PushV
	var_207_string = var_185_string; // 0x1045 Mov
	func_4201(var_206_bool, var_207_string); // 0x1046 NEW_2
	var_174_bool = var_206_bool; // 0x1047 Mov
	return 10; // 0x1049 Return
	
Label_4146:
	var_208_int = 1; // 0x1032 PushI
	var_182_int = var_182_int + var_208_int; // 0x1033 Add2
	goto Label_4136; // 0x1034 Jump
}


func_4641(var_371_bool)
{
	var_373_int = 0; var_374_string = ""; // 0x1222 PushV
	var_374_string = "k2q04"; // 0x1223 MovS
	func_4268(var_373_int, var_374_string); // 0x1224 NEW_2
	var_375_int = 2; // 0x1226 PushI
	var_376_bool = var_373_int == var_375_int; // 0x1227 Eq
	if(var_376_bool == 0) goto Label_4651; // 0x1228 JumpB
	var_371_bool = 1; // 0x1229 MovB
	return 0; // 0x122a Return
	
Label_4651:
	var_371_bool = 0; // 0x122b MovB
	return 0; // 0x122c Return
}


func_2851(var_0_bool, var_1_object, var_2_object, var_3_object, var_614_object, var_615_object)
{
	var_0_bool = var_615_object; // 0xb24 TMov
	var_1_object = var_614_object; // 0xb25 TMov
	var_3_object = 0; // 0xb26 TMovB
	var_620_int = 1; // 0xb27 PushI
	if(var_620_int == 0) goto Label_2899; // 0xb28 JumpB
	var_621_string = ""; // 0xb29 PushV
	var_621_string = "Rage"; // 0xb2a MovS
	func_2929(var_615_object, var_621_string); // 0xb2b NEW_2
	var_629_int = 526738; // 0xb2d PushI
	SetMessage(var_629_int); // 0xb2e TObjFunc
	ClearReplies(); // 0xb30 TObjFunc
	var_630_bool = 0; var_631_object = Obj(); // 0xb32 PushV
	var_631_object = var_1_object; // 0xb33 MovT
	func_4759(var_631_object); // 0xb34 NEW_2
	if(var_630_bool == 0) goto Label_2876; // 0xb36 JumpB
	var_636_int = 526739; // 0xb37 PushI
	var_637_int = 28017; // 0xb38 PushI
	var_638_int = 28016; // 0xb39 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0xb3a TObjFunc
	
Label_2876:
	var_639_bool = 0; var_640_object = Obj(); // 0xb3c PushV
	var_640_object = var_1_object; // 0xb3d MovT
	func_4747(var_640_object); // 0xb3e NEW_2
	if(var_639_bool == 0) goto Label_2886; // 0xb40 JumpB
	var_645_int = 528763; // 0xb41 PushI
	var_646_int = 30180; // 0xb42 PushI
	var_647_int = 30179; // 0xb43 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0xb44 TObjFunc
	
Label_2886:
	var_648_int = 526742; // 0xb46 PushI
	var_649_int = -1; // 0xb47 PushI
	var_650_int = 28019; // 0xb48 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0xb49 TObjFunc
	var_651_int = 528847; // 0xb4b PushI
	var_652_int = -1; // 0xb4c PushI
	var_653_int = 30265; // 0xb4d PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0xb4e TObjFunc
	goto Label_2899; // 0xb50 Jump
	
Label_2899:
	var_654_bool = 0; // 0xb53 PushV
	func_4415(var_654_bool); // 0xb54 NEW_2
	if(var_654_bool == 0) goto Label_2914; // 0xb56 JumpB
	
Label_2903:
	lshWaitForAnimEnd(); // 0xb57 Func
	var_655_object = var_3_object; // 0xb59 PushT
	if(var_655_object == 0) goto Label_2908; // 0xb5a JumpB
	goto Label_2913; // 0xb5b Jump
	
Label_2913:
	goto Label_2928; // 0xb61 Jump
	
Label_2928:
	return 0; // 0xb70 Return
	
Label_2908:
	var_656_string = ""; // 0xb5c PushV
	var_656_string = var_2_object; // 0xb5d MovT
	func_4170(var_656_string); // 0xb5e NEW_2
	goto Label_2903; // 0xb60 Jump
	
Label_2914:
	var_657_string = "all"; // 0xb62 PushS
	var_658_string = "idle"; // 0xb63 PushS
	PlayAnimation(var_657_string, var_658_string); // 0xb64 Func
	
Label_2918:
	WaitForAnimEnd(); // 0xb66 Func
	var_659_object = var_3_object; // 0xb68 PushT
	if(var_659_object == 0) goto Label_2923; // 0xb69 JumpB
	goto Label_2928; // 0xb6a Jump
	
Label_2923:
	var_660_string = "all"; // 0xb6b PushS
	var_661_string = "idle"; // 0xb6c PushS
	PlayAnimation(var_660_string, var_661_string); // 0xb6d Func
	goto Label_2918; // 0xb6f Jump
}


func_4393(var_67_string, var_68_int)
{
	var_69_int = 0; // 0x112a PushI
	var_70_bool = var_68_int == var_69_int; // 0x112b Eq
	if(var_70_bool == 0) goto Label_4401; // 0x112c JumpB
	var_71_string = "pt_"; // 0x112d PushS
	var_72_string = GlobalVars[0]; // 0x112e PushGE
	var_67_string = var_71_string + var_72_string; // 0x112f Add2
	goto Label_4405; // 0x1130 Jump
	
Label_4405:
	return 0; // 0x1135 Return
	
Label_4401:
	var_73_string = "pt_"; // 0x1131 PushS
	var_74_string = GlobalVars[0]; // 0x1132 PushGE
	var_75_int = var_73_string + var_74_string; // 0x1133 Add
	var_67_string = var_75_int + var_68_int; // 0x1134 Add2
}


func_3881(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float)
{
	var_143_float = 0; var_144_float = 0; // 0xf29 PushV
	var_145_bool = 0; var_146_object = Obj(); var_147_string = ""; // 0xf2a PushV
	var_146_object = var_138_object; // 0xf2b Mov
	var_147_string = var_139_string; // 0xf2c Mov
	func_3869(var_145_bool, var_146_object, var_147_string); // 0xf2d NEW_2
	var_154_bool = var_145_bool == 0; // 0xf2f Not
	if(var_154_bool == 0) goto Label_3891; // 0xf30 JumpB
	var_137_bool = 0; // 0xf31 MovB
	return 2; // 0xf32 Return
	
Label_3891:
	GetProperty(var_139_string, var_144_float); // 0xf33 ObjFunc
	var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; // 0xf35 PushV
	var_156_float = var_144_float + var_140_float; // 0xf36 Add2
	var_157_float = var_141_float; // 0xf37 Mov
	var_158_float = var_142_float; // 0xf38 Mov
	func_4247(var_155_float, var_156_float, var_157_float, var_158_float); // 0xf39 NEW_2
	SetProperty(var_139_string, var_155_float); // 0xf3b ObjFunc
	var_137_bool = 1; // 0xf3d MovB
	return 2; // 0xf3e Return
}


func_4906()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x132a PushV
	var_51_int = 503; // 0x132b PushI
	var_52_int = 2; // 0x132c PushI
	var_53_int = 528769; // 0x132d PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x132e Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x1330 PushV
	var_55_object = var_50_object; // 0x1331 Mov
	var_56_int = 500; // 0x1332 MovI
	func_4932(var_54_bool, var_55_object, var_56_int); // 0x1333 NEW_2
	return 2; // 0x1335 Return
}


func_4653(var_417_bool)
{
	var_419_int = 0; var_420_string = ""; // 0x122e PushV
	var_420_string = "k2q04"; // 0x122f MovS
	func_4268(var_419_int, var_420_string); // 0x1230 NEW_2
	var_421_int = 3; // 0x1232 PushI
	var_422_bool = var_419_int == var_421_int; // 0x1233 Eq
	if(var_422_bool == 0) goto Label_4663; // 0x1234 JumpB
	var_417_bool = 1; // 0x1235 MovB
	return 0; // 0x1236 Return
	
Label_4663:
	var_417_bool = 0; // 0x1237 MovB
	return 0; // 0x1238 Return
}


func_2349(var_0_bool, var_507_int, var_508_object)
{
	var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0; var_514_object = Obj(); var_515_bool = 0; var_516_int = 0; var_517_bool = 0; // 0x92d PushV
	var_0_bool = var_508_object; // 0x92e TMov
	var_518_bool = 0; var_519_object = Obj(); var_520_float = 0; // 0x92f PushV
	var_519_object = var_508_object; // 0x930 Mov
	var_520_float = 70.0; // 0x931 MovF
	func_3945(var_519_object, var_520_float); // 0x932 NEW_2
	var_521_bool = var_518_bool == 0; // 0x934 Not
	if(var_521_bool == 0) goto Label_2360; // 0x935 JumpB
	var_507_int = -2; // 0x936 MovI
	return 8; // 0x937 Return
	
Label_2360:
	CreateDialog(var_514_object); // 0x938 Func
	var_522_int = 0; // 0x93a PushV
	func_4409(var_522_int); // 0x93b NEW_2
	SetNPCName(var_522_int); // 0x93d ObjFunc
	var_523_int = 0; // 0x93f PushV
	func_4407(var_523_int); // 0x940 NEW_2
	SetNPCDescription(var_523_int); // 0x942 ObjFunc
	var_524_string = ""; // 0x944 PushV
	func_4411(var_524_string); // 0x945 NEW_2
	SetPhoto(var_524_string); // 0x947 ObjFunc
	var_525_string = ""; // 0x949 PushV
	func_4413(var_525_string); // 0x94a NEW_2
	SetPhoto2(var_525_string); // 0x94c ObjFunc
	var_526_int = 0; // 0x94e PushV
	func_5010(var_526_int); // 0x94f NEW_2
	SetPlayerName(var_526_int); // 0x951 ObjFunc
	var_516_int = -1; // 0x953 MovI
	IsOverrideActive(var_515_bool); // 0x954 Func
	var_527_bool = var_515_bool; // 0x956 Push
	if(var_527_bool == 0) goto Label_2394; // 0x957 JumpB
	var_507_int = -2; // 0x958 MovI
	return 8; // 0x959 Return
	
Label_2394:
	DoDialog(var_514_object); // 0x95a Func
	var_528_bool = 0; var_529_object = Obj(); // 0x95c PushV
	var_530_object = Obj(); // 0x95d PushV
	func_4223(var_530_object); // 0x95e NEW_2
	var_529_object = var_530_object; // 0x95f Mov
	func_4032(var_528_bool, var_529_object); // 0x961 NEW_2
	var_531_object = Obj(); var_532_object = Obj(); // 0x963 PushV
	var_531_object = var_508_object; // 0x964 Mov
	var_532_object = var_514_object; // 0x965 Mov
	TaskCall(11); // 0x966 TaskCall
	func_2430(var_533_object, var_534_object, var_535_string, var_536_bool, var_531_object, var_532_object); // 0x967 NEW_2
	TaskReturn(); // 0x968 TaskReturn
	IsDialogEnd(var_517_bool); // 0x96a ObjFunc
	
Label_2412:
	var_586_bool = var_517_bool == 0; // 0x96c Not
	if(var_586_bool == 0) goto Label_2419; // 0x96d JumpB
	sync(); // 0x96e Func
	IsDialogEnd(var_517_bool); // 0x970 ObjFunc
	goto Label_2412; // 0x972 Jump
	
Label_2419:
	var_587_object = Obj(); // 0x973 PushV
	var_587_object = var_508_object; // 0x974 Mov
	func_4014(); // 0x975 NEW_2
	StopDialog(var_514_object); // 0x977 Func
	GetReturnValue(var_516_int); // 0x979 ObjFunc
	var_507_int = var_516_int; // 0x97b Mov
	return 8; // 0x97c Return
}


func_4407(var_120_int)
{
	var_120_int = 515547; // 0x1137 MovI
	return 0; // 0x1138 Return
}


func_4919(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x1337 PushV
	GetDiaryRoot(var_65_object); // 0x1338 Func
	var_66_bool = var_65_object == 0; // 0x133a Not
	if(var_66_bool == 0) goto Label_4929; // 0x133b JumpB
	var_67_string = "Can't retrieve diary root"; // 0x133c PushS
	Trace(var_67_string); // 0x133d Func
	var_63_object = 0; // 0x133f MovB
	return 2; // 0x1340 Return
	
Label_4929:
	var_63_object = var_65_object; // 0x1341 Mov
	return 2; // 0x1342 Return
}


func_4665(var_387_bool, var_388_object)
{
	var_389_bool = 0; var_390_object = Obj(); // 0x123a PushV
	var_390_object = var_388_object; // 0x123b Mov
	func_4783(var_390_object); // 0x123c NEW_2
	if(var_389_bool == 0) goto Label_4673; // 0x123e JumpB
	var_387_bool = 1; // 0x123f MovB
	return 0; // 0x1240 Return
	
Label_4673:
	var_387_bool = 0; // 0x1241 MovB
	return 0; // 0x1242 Return
}


func_3642(var_2_object, var_756_string)
{
	var_757_bool = 0; // 0xe3b PushV
	func_4415(var_757_bool); // 0xe3c NEW_2
	var_758_bool = var_757_bool == 0; // 0xe3e Not
	if(var_758_bool == 0) goto Label_3649; // 0xe3f JumpB
	return 0; // 0xe40 Return
	
Label_3649:
	var_759_bool = var_756_string == var_2_object; // 0xe41 Eq
	if(var_759_bool == 0) goto Label_3652; // 0xe42 JumpB
	return 0; // 0xe43 Return
	
Label_3652:
	var_760_string = ""; var_761_bool = 0; // 0xe44 PushV
	var_760_string = var_756_string; // 0xe45 Mov
	var_762_string = ""; // 0xe46 PushS
	var_763_bool = var_756_string == var_762_string; // 0xe47 Eq
	if(var_763_bool == 0) goto Label_3659; // 0xe48 JumpB
	var_761_bool = 0; // 0xe49 MovB
	goto Label_3660; // 0xe4a Jump
	
Label_3660:
	func_4186(var_760_string, var_761_bool); // 0xe4c NEW_2
	var_2_object = var_756_string; // 0xe4e TMov
	return 0; // 0xe4f Return
	
Label_3659:
	var_761_bool = 1; // 0xe4b MovB
}


func_4409(var_119_int)
{
	var_119_int = 502872; // 0x1139 MovI
	return 0; // 0x113a Return
}


func_4411(var_121_string)
{
	var_121_string = "ui/NPC_MladVlad.png"; // 0x113b MovS
	return 0; // 0x113c Return
}


func_3388(var_2_object, var_697_string)
{
	var_698_bool = 0; // 0xd3d PushV
	func_4415(var_698_bool); // 0xd3e NEW_2
	var_699_bool = var_698_bool == 0; // 0xd40 Not
	if(var_699_bool == 0) goto Label_3395; // 0xd41 JumpB
	return 0; // 0xd42 Return
	
Label_3395:
	var_700_bool = var_697_string == var_2_object; // 0xd43 Eq
	if(var_700_bool == 0) goto Label_3398; // 0xd44 JumpB
	return 0; // 0xd45 Return
	
Label_3398:
	var_701_string = ""; var_702_bool = 0; // 0xd46 PushV
	var_701_string = var_697_string; // 0xd47 Mov
	var_703_string = ""; // 0xd48 PushS
	var_704_bool = var_697_string == var_703_string; // 0xd49 Eq
	if(var_704_bool == 0) goto Label_3405; // 0xd4a JumpB
	var_702_bool = 0; // 0xd4b MovB
	goto Label_3406; // 0xd4c Jump
	
Label_3406:
	func_4186(var_701_string, var_702_bool); // 0xd4e NEW_2
	var_2_object = var_697_string; // 0xd50 TMov
	return 0; // 0xd51 Return
	
Label_3405:
	var_702_bool = 1; // 0xd4d MovB
}


func_4413(var_122_string)
{
	var_122_string = "ui/NPC_MladVlad_b.png"; // 0x113d MovS
	return 0; // 0x113e Return
}


func_4415(var_114_bool)
{
	var_114_bool = 1; // 0x113f MovB
	return 0; // 0x1140 Return
}


func_3903(var_231_string, var_232_int)
{
	var_233_int = 0; var_234_int = 0; // 0xf3f PushV
	GetProperty(var_231_string, var_234_int); // 0xf40 ObjFunc
	var_235_int = var_234_int + var_232_int; // 0xf42 Add
	SetProperty(var_231_string, var_235_int); // 0xf43 ObjFunc
	return 2; // 0xf45 Return
}


func_4417(var_124_object)
{
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; // 0x1142 PushV
	var_127_object = var_124_object; // 0x1143 Mov
	var_128_float = -0.05; // 0x1144 MovF
	func_4304(var_126_bool, var_127_object, var_128_float); // 0x1145 NEW_2
	return 0; // 0x1147 Return
}


func_4675(var_377_bool)
{
	var_379_int = 0; var_380_string = ""; // 0x1244 PushV
	var_380_string = "ook2MladVlad2"; // 0x1245 MovS
	func_4268(var_379_int, var_380_string); // 0x1246 NEW_2
	var_381_int = 0; // 0x1248 PushI
	var_382_bool = var_379_int == var_381_int; // 0x1249 Eq
	if(var_382_bool == 0) goto Label_4685; // 0x124a JumpB
	var_377_bool = 1; // 0x124b MovB
	return 0; // 0x124c Return
	
Label_4685:
	var_377_bool = 0; // 0x124d MovB
	return 0; // 0x124e Return
}


func_4932(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x1344 PushV
	var_63_object = Obj(); // 0x1345 PushV
	func_4919(var_63_object); // 0x1346 NEW_2
	var_60_object = var_63_object; // 0x1347 Mov
	Find(var_56_int, var_61_object); // 0x1349 ObjFunc
	var_68_bool = var_61_object == 0; // 0x134b Not
	if(var_68_bool == 0) goto Label_4947; // 0x134c JumpB
	var_69_string = "Can't find diary parent with id: "; // 0x134d PushS
	var_70_int = var_69_string + var_56_int; // 0x134e Add
	Trace(var_70_int); // 0x134f Func
	var_54_bool = 0; // 0x1351 MovB
	return 6; // 0x1352 Return
	
Label_4947:
	AddChild(var_55_object); // 0x1353 ObjFunc
	var_71_int = 7; // 0x1355 PushI
	SendWorldWndMessage(var_71_int); // 0x1356 Func
	GetCategory(var_62_int); // 0x1358 ObjFunc
	SetDiarySection(var_62_int); // 0x135a Func
	var_54_bool = 0; // 0x135c MovB
	return 6; // 0x135d Return
}


func_3910(var_130_bool, var_131_cvector)
{
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0; // 0xf46 PushV
	GetPosition(var_135_cvector); // 0xf47 Func
	var_136_cvector = var_131_cvector - var_135_cvector; // 0xf49 Sub2
	var_138_float = GetByIndex(var_136_cvector, 0); // 0xf4a PushE
	var_139_float = GetByIndex(var_136_cvector, 2); // 0xf4b PushE
	Rotate(var_138_float, var_139_float, var_137_bool); // 0xf4c Func
	var_130_bool = var_137_bool; // 0xf4e Mov
	return 6; // 0xf4f Return
}


func_4424()
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x1148 PushV
	var_177_string = "k2q01"; // 0x1149 PushS
	var_178_int = 2; // 0x114a PushI
	SetVariable(var_177_string, var_178_int); // 0x114b Func
	var_179_object = Obj(); // 0x114d PushV
	func_4960(var_179_object); // 0x114e NEW_2
	var_176_object = var_179_object; // 0x114f Mov
	var_180_string = "k2q01MladVladGotoOspina"; // 0x1151 PushS
	var_181_string = "pt_map_ospina"; // 0x1152 PushS
	var_182_int = 1; // 0x1153 PushI
	var_183_int = 539374; // 0x1154 PushI
	var_184_float = 0; // 0x1155 PushV
	func_4349(var_184_float); // 0x1156 NEW_2
	AddMark(var_180_string, var_181_string, var_182_int, var_183_int, var_184_float); // 0x1158 ObjFunc
	func_4802(); // 0x115b NEW_2
	return 2; // 0x115d Return
}


func_4170(var_260_string)
{
	var_261_bool = 0; var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_float = 0; var_266_float = 0; // 0x104a PushV
	lshHasAnimation(var_264_bool, var_260_string); // 0x104b Func
	var_267_bool = var_264_bool; // 0x104d Push
	if(var_267_bool == 0) goto Label_4181; // 0x104e JumpB
	lshGetAnimTimes(var_260_string, var_265_float, var_266_float); // 0x104f Func
	var_268_bool = 0; // 0x1051 PushB
	lshPlayAnimation(var_265_float, var_266_float, var_268_bool); // 0x1052 Func
	goto Label_4185; // 0x1054 Jump
	
Label_4185:
	return 6; // 0x1059 Return
	
Label_4181:
	var_269_string = "Can't find lsh animation : "; // 0x1055 PushS
	var_270_int = var_269_string + var_260_string; // 0x1056 Add
	Trace(var_270_int); // 0x1057 Func
}


func_2123(var_0_bool, var_60_int, var_61_object)
{
	var_63_object = Obj(); var_64_bool = 0; var_65_int = 0; var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x84b PushV
	var_0_bool = var_61_object; // 0x84c TMov
	var_71_bool = 0; var_72_object = Obj(); var_73_float = 0; // 0x84d PushV
	var_72_object = var_61_object; // 0x84e Mov
	var_73_float = 70.0; // 0x84f MovF
	func_3945(var_72_object, var_73_float); // 0x850 NEW_2
	var_118_bool = var_71_bool == 0; // 0x852 Not
	if(var_118_bool == 0) goto Label_2134; // 0x853 JumpB
	var_60_int = -2; // 0x854 MovI
	return 8; // 0x855 Return
	
Label_2134:
	CreateDialog(var_67_object); // 0x856 Func
	var_119_int = 0; // 0x858 PushV
	func_4409(var_119_int); // 0x859 NEW_2
	SetNPCName(var_119_int); // 0x85b ObjFunc
	var_120_int = 0; // 0x85d PushV
	func_4407(var_120_int); // 0x85e NEW_2
	SetNPCDescription(var_120_int); // 0x860 ObjFunc
	var_121_string = ""; // 0x862 PushV
	func_4411(var_121_string); // 0x863 NEW_2
	SetPhoto(var_121_string); // 0x865 ObjFunc
	var_122_string = ""; // 0x867 PushV
	func_4413(var_122_string); // 0x868 NEW_2
	SetPhoto2(var_122_string); // 0x86a ObjFunc
	var_123_int = 0; // 0x86c PushV
	func_5010(var_123_int); // 0x86d NEW_2
	SetPlayerName(var_123_int); // 0x86f ObjFunc
	var_69_int = -1; // 0x871 MovI
	IsOverrideActive(var_68_bool); // 0x872 Func
	var_131_bool = var_68_bool; // 0x874 Push
	if(var_131_bool == 0) goto Label_2168; // 0x875 JumpB
	var_60_int = -2; // 0x876 MovI
	return 8; // 0x877 Return
	
Label_2168:
	DoDialog(var_67_object); // 0x878 Func
	var_132_bool = 0; var_133_object = Obj(); // 0x87a PushV
	var_134_object = Obj(); // 0x87b PushV
	func_4223(var_134_object); // 0x87c NEW_2
	var_133_object = var_134_object; // 0x87d Mov
	func_4032(var_132_bool, var_133_object); // 0x87f NEW_2
	var_227_object = Obj(); var_228_object = Obj(); // 0x881 PushV
	var_227_object = var_61_object; // 0x882 Mov
	var_228_object = var_67_object; // 0x883 Mov
	TaskCall(9); // 0x884 TaskCall
	func_2204(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object); // 0x885 NEW_2
	TaskReturn(); // 0x886 TaskReturn
	IsDialogEnd(var_70_bool); // 0x888 ObjFunc
	
Label_2186:
	var_276_bool = var_70_bool == 0; // 0x88a Not
	if(var_276_bool == 0) goto Label_2193; // 0x88b JumpB
	sync(); // 0x88c Func
	IsDialogEnd(var_70_bool); // 0x88e ObjFunc
	goto Label_2186; // 0x890 Jump
	
Label_2193:
	var_277_object = Obj(); // 0x891 PushV
	var_277_object = var_61_object; // 0x892 Mov
	func_4014(); // 0x893 NEW_2
	StopDialog(var_67_object); // 0x895 Func
	GetReturnValue(var_69_int); // 0x897 ObjFunc
	var_60_int = var_69_int; // 0x899 Mov
	return 8; // 0x89a Return
}


func_4687(var_399_bool)
{
	var_401_int = 0; var_402_string = ""; // 0x1250 PushV
	var_402_string = "k2q04"; // 0x1251 MovS
	func_4268(var_401_int, var_402_string); // 0x1252 NEW_2
	var_403_int = 9; // 0x1254 PushI
	var_404_bool = var_401_int == var_403_int; // 0x1255 Eq
	if(var_404_bool == 0) goto Label_4697; // 0x1256 JumpB
	var_399_bool = 1; // 0x1257 MovB
	return 0; // 0x1258 Return
	
Label_4697:
	var_399_bool = 0; // 0x1259 MovB
	return 0; // 0x125a Return
}


func_3920(var_43_bool)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0xf50 PushV
	GetPosition(var_46_cvector); // 0xf51 ObjFunc
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); // 0xf53 PushV
	var_48_cvector = var_46_cvector; // 0xf54 Mov
	func_3910(var_47_bool, var_48_cvector); // 0xf55 NEW_2
	var_43_bool = var_47_bool; // 0xf56 Mov
	return 2; // 0xf58 Return
}


func_4186(var_238_string, var_239_bool)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x105a PushV
	lshHasAnimation(var_245_bool, var_238_string); // 0x105b Func
	var_248_bool = var_245_bool; // 0x105d Push
	if(var_248_bool == 0) goto Label_4196; // 0x105e JumpB
	lshGetAnimTimes(var_238_string, var_246_float, var_247_float); // 0x105f Func
	lshPlayAnimation(var_246_float, var_247_float, var_239_bool); // 0x1061 Func
	goto Label_4200; // 0x1063 Jump
	
Label_4200:
	return 6; // 0x1068 Return
	
Label_4196:
	var_249_string = "Can't find lsh animation : "; // 0x1064 PushS
	var_250_int = var_249_string + var_238_string; // 0x1065 Add
	Trace(var_250_int); // 0x1066 Func
}


func_4699(var_477_bool)
{
	var_479_int = 0; var_480_string = ""; // 0x125c PushV
	var_480_string = "k3q01"; // 0x125d MovS
	func_4268(var_479_int, var_480_string); // 0x125e NEW_2
	var_481_int = 2; // 0x1260 PushI
	var_482_bool = var_479_int == var_481_int; // 0x1261 Eq
	if(var_482_bool == 0) goto Label_4709; // 0x1262 JumpB
	var_477_bool = 1; // 0x1263 MovB
	return 0; // 0x1264 Return
	
Label_4709:
	var_477_bool = 0; // 0x1265 MovB
	return 0; // 0x1266 Return
}


func_3325(var_0_bool, var_1_object, var_2_object, var_3_object, var_690_object, var_691_object)
{
	var_0_bool = var_691_object; // 0xcfe TMov
	var_1_object = var_690_object; // 0xcff TMov
	var_3_object = 0; // 0xd00 TMovB
	var_696_int = 1; // 0xd01 PushI
	if(var_696_int == 0) goto Label_3358; // 0xd02 JumpB
	var_697_string = ""; // 0xd03 PushV
	var_697_string = "Neutral"; // 0xd04 MovS
	func_3388(var_691_object, var_697_string); // 0xd05 NEW_2
	var_705_int = 535231; // 0xd07 PushI
	SetMessage(var_705_int); // 0xd08 TObjFunc
	ClearReplies(); // 0xd0a TObjFunc
	var_706_int = 535232; // 0xd0c PushI
	var_707_int = 36953; // 0xd0d PushI
	var_708_int = 36907; // 0xd0e PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0xd0f TObjFunc
	var_709_int = 535233; // 0xd11 PushI
	var_710_int = -1; // 0xd12 PushI
	var_711_int = 36908; // 0xd13 PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0xd14 TObjFunc
	var_712_int = 535280; // 0xd16 PushI
	var_713_int = -1; // 0xd17 PushI
	var_714_int = 36956; // 0xd18 PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0xd19 TObjFunc
	goto Label_3358; // 0xd1b Jump
	
Label_3358:
	var_715_bool = 0; // 0xd1e PushV
	func_4415(var_715_bool); // 0xd1f NEW_2
	if(var_715_bool == 0) goto Label_3373; // 0xd21 JumpB
	
Label_3362:
	lshWaitForAnimEnd(); // 0xd22 Func
	var_716_object = var_3_object; // 0xd24 PushT
	if(var_716_object == 0) goto Label_3367; // 0xd25 JumpB
	goto Label_3372; // 0xd26 Jump
	
Label_3372:
	goto Label_3387; // 0xd2c Jump
	
Label_3387:
	return 0; // 0xd3b Return
	
Label_3367:
	var_717_string = ""; // 0xd27 PushV
	var_717_string = var_2_object; // 0xd28 MovT
	func_4170(var_717_string); // 0xd29 NEW_2
	goto Label_3362; // 0xd2b Jump
	
Label_3373:
	var_718_string = "all"; // 0xd2d PushS
	var_719_string = "idle"; // 0xd2e PushS
	PlayAnimation(var_718_string, var_719_string); // 0xd2f Func
	
Label_3377:
	WaitForAnimEnd(); // 0xd31 Func
	var_720_object = var_3_object; // 0xd33 PushT
	if(var_720_object == 0) goto Label_3382; // 0xd34 JumpB
	goto Label_3387; // 0xd35 Jump
	
Label_3382:
	var_721_string = "all"; // 0xd36 PushS
	var_722_string = "idle"; // 0xd37 PushS
	PlayAnimation(var_721_string, var_722_string); // 0xd38 Func
	goto Label_3377; // 0xd3a Jump
}


func_3929()
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xf59 PushV
	GetPosition(var_73_cvector); // 0xf5a ObjFunc
	GetPosition(var_74_cvector); // 0xf5c Func
	var_75_cvector = var_73_cvector - var_74_cvector; // 0xf5e Sub2
	var_76_float = GetByIndex(var_75_cvector, 0); // 0xf5f PushE
	var_77_float = GetByIndex(var_75_cvector, 2); // 0xf60 PushE
	RotateAsync(var_76_float, var_77_float); // 0xf61 Func
	return 6; // 0xf63 Return
}


func_4447()
{
	var_338_string = "ook2MladVlad1"; // 0x1160 PushS
	var_339_int = 1; // 0x1161 PushI
	SetVariable(var_338_string, var_339_int); // 0x1162 Func
	return 0; // 0x1164 Return
}


func_4960(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); // 0x1360 PushV
	GetMainOutdoorScene(var_54_object); // 0x1361 Func
	var_56_bool = var_54_object == 0; // 0x1363 NullEq
	if(var_56_bool == 0) goto Label_4971; // 0x1364 JumpB
	var_57_string = "Can't find main outdoor scene"; // 0x1365 PushS
	Trace(var_57_string); // 0x1366 Func
	var_55_object = 0; // 0x1368 SetNull
	var_51_object = var_55_object; // 0x1369 Mov
	return 4; // 0x136a Return
	
Label_4971:
	GetMap(var_55_object); // 0x136b ObjFunc
	var_51_object = var_55_object; // 0x136d Mov
	return 4; // 0x136e Return
}


func_1633(var_0_bool, var_436_int, var_437_object)
{
	var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0; var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0; // 0x661 PushV
	var_0_bool = var_437_object; // 0x662 TMov
	var_447_bool = 0; var_448_object = Obj(); var_449_float = 0; // 0x663 PushV
	var_448_object = var_437_object; // 0x664 Mov
	var_449_float = 70.0; // 0x665 MovF
	func_3945(var_448_object, var_449_float); // 0x666 NEW_2
	var_450_bool = var_447_bool == 0; // 0x668 Not
	if(var_450_bool == 0) goto Label_1644; // 0x669 JumpB
	var_436_int = -2; // 0x66a MovI
	return 8; // 0x66b Return
	
Label_1644:
	CreateDialog(var_443_object); // 0x66c Func
	var_451_int = 0; // 0x66e PushV
	func_4409(var_451_int); // 0x66f NEW_2
	SetNPCName(var_451_int); // 0x671 ObjFunc
	var_452_int = 0; // 0x673 PushV
	func_4407(var_452_int); // 0x674 NEW_2
	SetNPCDescription(var_452_int); // 0x676 ObjFunc
	var_453_string = ""; // 0x678 PushV
	func_4411(var_453_string); // 0x679 NEW_2
	SetPhoto(var_453_string); // 0x67b ObjFunc
	var_454_string = ""; // 0x67d PushV
	func_4413(var_454_string); // 0x67e NEW_2
	SetPhoto2(var_454_string); // 0x680 ObjFunc
	var_455_int = 0; // 0x682 PushV
	func_5010(var_455_int); // 0x683 NEW_2
	SetPlayerName(var_455_int); // 0x685 ObjFunc
	var_445_int = -1; // 0x687 MovI
	IsOverrideActive(var_444_bool); // 0x688 Func
	var_456_bool = var_444_bool; // 0x68a Push
	if(var_456_bool == 0) goto Label_1678; // 0x68b JumpB
	var_436_int = -2; // 0x68c MovI
	return 8; // 0x68d Return
	
Label_1678:
	DoDialog(var_443_object); // 0x68e Func
	var_457_bool = 0; var_458_object = Obj(); // 0x690 PushV
	var_459_object = Obj(); // 0x691 PushV
	func_4223(var_459_object); // 0x692 NEW_2
	var_458_object = var_459_object; // 0x693 Mov
	func_4032(var_457_bool, var_458_object); // 0x695 NEW_2
	var_460_object = Obj(); var_461_object = Obj(); // 0x697 PushV
	var_460_object = var_437_object; // 0x698 Mov
	var_461_object = var_443_object; // 0x699 Mov
	TaskCall(7); // 0x69a TaskCall
	func_1714(var_462_object, var_463_object, var_464_string, var_465_bool, var_460_object, var_461_object); // 0x69b NEW_2
	TaskReturn(); // 0x69c TaskReturn
	IsDialogEnd(var_446_bool); // 0x69e ObjFunc
	
Label_1696:
	var_503_bool = var_446_bool == 0; // 0x6a0 Not
	if(var_503_bool == 0) goto Label_1703; // 0x6a1 JumpB
	sync(); // 0x6a2 Func
	IsDialogEnd(var_446_bool); // 0x6a4 ObjFunc
	goto Label_1696; // 0x6a6 Jump
	
Label_1703:
	var_504_object = Obj(); // 0x6a7 PushV
	var_504_object = var_437_object; // 0x6a8 Mov
	func_4014(); // 0x6a9 NEW_2
	StopDialog(var_443_object); // 0x6ab Func
	GetReturnValue(var_445_int); // 0x6ad ObjFunc
	var_436_int = var_445_int; // 0x6af Mov
	return 8; // 0x6b0 Return
}


func_4090(var_143_bool)
{
	var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; var_150_string = ""; var_151_int = 0; var_152_bool = 0; var_153_int = 0; var_154_string = ""; // 0xffa PushV
	var_150_string = "c"; // 0xffb MovS
	var_151_int = 0; // 0xffc MovI
	
Label_4093:
	var_155_int = 1; // 0xffd PushI
	if(var_155_int == 0) goto Label_4106; // 0xffe JumpB
	var_156_int = 1; // 0xfff PushI
	var_157_int = var_151_int + var_156_int; // 0x1000 Add
	var_158_int = var_150_string + var_157_int; // 0x1001 Add
	HasProperty(var_158_int, var_152_bool); // 0x1002 ObjFunc
	var_159_bool = var_152_bool == 0; // 0x1004 Not
	if(var_159_bool == 0) goto Label_4103; // 0x1005 JumpB
	goto Label_4106; // 0x1006 Jump
	
Label_4106:
	var_160_bool = var_151_int == 0; // 0x100a Not
	if(var_160_bool == 0) goto Label_4110; // 0x100b JumpB
	var_143_bool = 0; // 0x100c MovB
	return 10; // 0x100d Return
	
Label_4110:
	var_153_int = 0; // 0x100e MovI
	var_161_int = 1; // 0x100f PushI
	var_162_bool = var_151_int > var_161_int; // 0x1010 GT
	if(var_162_bool == 0) goto Label_4116; // 0x1011 JumpB
	irand(var_153_int, var_151_int); // 0x1012 Func
	
Label_4116:
	var_163_int = 1; // 0x1014 PushI
	var_164_int = var_153_int + var_163_int; // 0x1015 Add
	var_165_int = var_150_string + var_164_int; // 0x1016 Add
	GetProperty(var_165_int, var_154_string); // 0x1017 ObjFunc
	var_166_bool = 0; var_167_string = ""; // 0x1019 PushV
	var_167_string = var_154_string; // 0x101a Mov
	func_4201(var_166_bool, var_167_string); // 0x101b NEW_2
	var_143_bool = var_166_bool; // 0x101c Mov
	return 10; // 0x101e Return
	
Label_4103:
	var_172_int = 1; // 0x1007 PushI
	var_151_int = var_151_int + var_172_int; // 0x1008 Add2
	goto Label_4093; // 0x1009 Jump
}


func_3940(var_77_bool)
{
	var_78_bool = 0; var_79_bool = 0; // 0xf64 PushV
	IsLoaded(var_79_bool); // 0xf65 Func
	var_77_bool = var_79_bool; // 0xf67 Mov
	return 2; // 0xf68 Return
}


func_4453()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1165 PushV
	var_49_string = "k2q04"; // 0x1166 PushS
	var_50_int = 1; // 0x1167 PushI
	SetVariable(var_49_string, var_50_int); // 0x1168 Func
	var_51_object = Obj(); // 0x116a PushV
	func_4960(var_51_object); // 0x116b NEW_2
	var_48_object = var_51_object; // 0x116c Mov
	var_58_string = "k2q04MladVladGotoAnna"; // 0x116e PushS
	var_59_string = "pt_map_anna"; // 0x116f PushS
	var_60_int = 0; // 0x1170 PushI
	var_61_int = 508645; // 0x1171 PushI
	var_62_float = 0; // 0x1172 PushV
	func_4349(var_62_float); // 0x1173 NEW_2
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x1175 ObjFunc
	func_4815(); // 0x1178 NEW_2
	func_4880(); // 0x117b NEW_2
	return 2; // 0x117d Return
}


func_4711(var_483_bool)
{
	var_485_int = 0; var_486_string = ""; // 0x1268 PushV
	var_486_string = "ook3MladVlad1"; // 0x1269 MovS
	func_4268(var_485_int, var_486_string); // 0x126a NEW_2
	var_487_int = 0; // 0x126c PushI
	var_488_bool = var_485_int == var_487_int; // 0x126d Eq
	if(var_488_bool == 0) goto Label_4721; // 0x126e JumpB
	var_483_bool = 1; // 0x126f MovB
	return 0; // 0x1270 Return
	
Label_4721:
	var_483_bool = 0; // 0x1271 MovB
	return 0; // 0x1272 Return
}


func_4201(var_166_bool, var_167_string)
{
	var_168_bool = 0; var_169_bool = 0; // 0x1069 PushV
	var_170_bool = 0; // 0x106a PushV
	func_4415(var_170_bool); // 0x106b NEW_2
	if(var_170_bool == 0) goto Label_4214; // 0x106d JumpB
	lshHasSpeech(var_169_bool, var_167_string); // 0x106e Func
	var_171_bool = var_169_bool; // 0x1070 Push
	if(var_171_bool == 0) goto Label_4214; // 0x1071 JumpB
	lshPlaySpeech(var_167_string); // 0x1072 Func
	var_166_bool = 1; // 0x1074 MovB
	return 2; // 0x1075 Return
	
Label_4214:
	var_166_bool = 0; // 0x1076 MovB
	return 2; // 0x1077 Return
}


func_3945(var_71_bool, var_73_float)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_bool = 0; // 0xf69 PushV
	GetPosition(var_84_cvector); // 0xf6a ObjFunc
	GetEyesHeight(var_83_float); // 0xf6c ObjFunc
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xf6e PushE
	var_92_float = var_92_float + var_83_float; // 0xf6f Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xf70 PopE
	GetPosition(var_85_cvector); // 0xf71 Func
	GetEyesHeight(var_83_float); // 0xf73 Func
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xf75 PushE
	var_93_float = var_93_float + var_83_float; // 0xf76 Add2
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xf77 PopE
	var_86_cvector = var_84_cvector - var_85_cvector; // 0xf78 Sub2
	var_94_float = GetByIndex(var_86_cvector, 1); // 0xf79 PushE
	var_94_float = 0; // 0xf7a MovI
	SetByIndex(var_86_cvector, 1) = var_94_float; // 0xf7b PopE
	var_95_int = var_86_cvector | var_86_cvector; // 0xf7c Or
	var_96_float = sqrt(var_95_int); // 0xf7d Sqrt
	var_86_cvector = var_86_cvector / var_86_cvector; // 0xf7e Div2
	var_87_cvector = -var_86_cvector; // 0xf7f Neg2
	var_97_float = var_86_cvector * var_73_float; // 0xf80 Mult
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0xf81 PushV
	var_100_cvector = CVector(0.0, 1.0, 0.0); // 0xf82 PushVec
	var_99_cvector = var_87_cvector ^ var_100_cvector; // 0xf83 Xor2
	func_4229(var_98_cvector, var_99_cvector); // 0xf84 NEW_2
	var_106_int = 25; // 0xf86 PushI
	var_107_float = var_98_cvector * var_106_int; // 0xf87 Mult
	var_108_int = var_97_float + var_107_float; // 0xf88 Add
	var_109_cvector = CVector(0.0, 10.0, 0.0); // 0xf89 PushVec
	var_88_cvector = var_108_int - var_109_cvector; // 0xf8a Sub2
	var_89_cvector = var_85_cvector + var_88_cvector; // 0xf8b Add2
	IsOverrideActive(var_90_bool); // 0xf8c Func
	var_110_bool = var_90_bool; // 0xf8e Push
	if(var_110_bool == 0) goto Label_3986; // 0xf8f JumpB
	var_71_bool = 0; // 0xf90 MovB
	return 18; // 0xf91 Return
	
Label_3986:
	StopWorld(); // 0xf92 Func
	var_111_bool = 1; // 0xf94 PushB
	CameraTransit(var_89_cvector, var_87_cvector, var_111_bool); // 0xf95 Func
	var_112_float = GetByIndex(var_88_cvector, 0); // 0xf97 PushE
	var_113_float = GetByIndex(var_88_cvector, 2); // 0xf98 PushE
	Rotate(var_112_float, var_113_float); // 0xf99 Func
	var_114_bool = 0; // 0xf9b PushV
	func_4415(var_114_bool); // 0xf9c NEW_2
	if(var_114_bool == 0) goto Label_4000; // 0xf9e JumpB
	goto Label_4008; // 0xf9f Jump
	
Label_4008:
	CameraWaitForPlayFinish(); // 0xfa8 Func
	ResumeWorld(); // 0xfaa Func
	var_71_bool = 1; // 0xfac MovB
	return 18; // 0xfad Return
	
Label_4000:
	var_115_string = "head"; // 0xfa0 PushS
	HasAnimationTrack(var_91_bool, var_115_string); // 0xfa1 Func
	var_116_bool = var_91_bool; // 0xfa3 Push
	if(var_116_bool == 0) goto Label_4008; // 0xfa4 JumpB
	var_117_string = "head"; // 0xfa5 PushS
	LookAsyncCamera(var_117_string); // 0xfa6 Func
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_313_object, var_314_object)
{
	var_0_bool = var_314_object; // 0x16c TMov
	var_1_object = var_313_object; // 0x16d TMov
	var_3_object = 0; // 0x16e TMovB
	var_319_int = 1; // 0x16f PushI
	if(var_319_int == 0) goto Label_509; // 0x170 JumpB
	var_320_bool = 0; // 0x171 PushV
	var_320_bool = 0; // 0x172 MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x173 PushV
	var_322_object = var_1_object; // 0x174 MovT
	func_4629(var_322_object); // 0x175 NEW_2
	if(var_321_bool == 0) goto Label_383; // 0x177 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x178 PushV
	var_330_object = var_1_object; // 0x179 MovT
	func_4617(var_330_object); // 0x17a NEW_2
	var_335_bool = var_329_bool == 0; // 0x17c Not
	if(var_335_bool == 0) goto Label_383; // 0x17d JumpB
	var_320_bool = 1; // 0x17e MovB
	
Label_383:
	if(var_320_bool == 0) goto Label_409; // 0x17f JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x180 PushV
	var_336_object = var_1_object; // 0x181 MovT
	var_337_object = var_0_bool; // 0x182 MovT
	func_4447(); // 0x183 NEW_2
	var_340_string = ""; // 0x185 PushV
	var_340_string = "Neutral"; // 0x186 MovS
	func_539(var_314_object, var_340_string); // 0x187 NEW_2
	var_348_int = 525337; // 0x189 PushI
	SetMessage(var_348_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_349_int = 525338; // 0x18e PushI
	var_350_int = 44250; // 0x18f PushI
	var_351_int = 26706; // 0x190 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x191 TObjFunc
	var_352_int = 539465; // 0x193 PushI
	var_353_int = 44260; // 0x194 PushI
	var_354_int = 41388; // 0x195 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x196 TObjFunc
	goto Label_509; // 0x198 Jump
	
Label_509:
	var_355_bool = 0; // 0x1fd PushV
	func_4415(var_355_bool); // 0x1fe NEW_2
	if(var_355_bool == 0) goto Label_524; // 0x200 JumpB
	
Label_513:
	lshWaitForAnimEnd(); // 0x201 Func
	var_356_object = var_3_object; // 0x203 PushT
	if(var_356_object == 0) goto Label_518; // 0x204 JumpB
	goto Label_523; // 0x205 Jump
	
Label_523:
	goto Label_538; // 0x20b Jump
	
Label_538:
	return 0; // 0x21a Return
	
Label_518:
	var_357_string = ""; // 0x206 PushV
	var_357_string = var_2_object; // 0x207 MovT
	func_4170(var_357_string); // 0x208 NEW_2
	goto Label_513; // 0x20a Jump
	
Label_524:
	var_358_string = "all"; // 0x20c PushS
	var_359_string = "idle"; // 0x20d PushS
	PlayAnimation(var_358_string, var_359_string); // 0x20e Func
	
Label_528:
	WaitForAnimEnd(); // 0x210 Func
	var_360_object = var_3_object; // 0x212 PushT
	if(var_360_object == 0) goto Label_533; // 0x213 JumpB
	goto Label_538; // 0x214 Jump
	
Label_533:
	var_361_string = "all"; // 0x215 PushS
	var_362_string = "idle"; // 0x216 PushS
	PlayAnimation(var_361_string, var_362_string); // 0x217 Func
	goto Label_528; // 0x219 Jump
	
Label_409:
	var_363_string = ""; // 0x199 PushV
	var_363_string = "Neutral"; // 0x19a MovS
	func_539(var_314_object, var_363_string); // 0x19b NEW_2
	var_364_int = 525237; // 0x19d PushI
	SetMessage(var_364_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_365_bool = 0; var_366_object = Obj(); // 0x1a2 PushV
	var_366_object = var_1_object; // 0x1a3 MovT
	func_4617(var_366_object); // 0x1a4 NEW_2
	if(var_365_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_367_int = 525238; // 0x1a7 PushI
	var_368_int = 26607; // 0x1a8 PushI
	var_369_int = 26606; // 0x1a9 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1aa TObjFunc
	
Label_428:
	var_370_bool = 0; // 0x1ac PushV
	var_370_bool = 0; // 0x1ad MovB
	var_371_bool = 0; var_372_object = Obj(); // 0x1ae PushV
	var_372_object = var_1_object; // 0x1af MovT
	func_4641(var_372_object); // 0x1b0 NEW_2
	if(var_371_bool == 0) goto Label_441; // 0x1b2 JumpB
	var_377_bool = 0; var_378_object = Obj(); // 0x1b3 PushV
	var_378_object = var_1_object; // 0x1b4 MovT
	func_4675(var_378_object); // 0x1b5 NEW_2
	if(var_377_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_370_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_370_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_383_int = 525372; // 0x1ba PushI
	var_384_int = 26741; // 0x1bb PushI
	var_385_int = 26740; // 0x1bc PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x1bd TObjFunc
	
Label_447:
	var_386_bool = 0; // 0x1bf PushV
	var_386_bool = 0; // 0x1c0 MovB
	var_387_bool = 0; var_388_object = Obj(); // 0x1c1 PushV
	var_388_object = var_1_object; // 0x1c2 MovT
	func_4665(var_387_bool, var_388_object); // 0x1c3 NEW_2
	if(var_387_bool == 0) goto Label_460; // 0x1c5 JumpB
	var_399_bool = 0; var_400_object = Obj(); // 0x1c6 PushV
	var_400_object = var_1_object; // 0x1c7 MovT
	func_4687(var_400_object); // 0x1c8 NEW_2
	if(var_399_bool == 0) goto Label_460; // 0x1ca JumpB
	var_386_bool = 1; // 0x1cb MovB
	
Label_460:
	if(var_386_bool == 0) goto Label_466; // 0x1cc JumpB
	var_405_int = 525369; // 0x1cd PushI
	var_406_int = 44309; // 0x1ce PushI
	var_407_int = 26737; // 0x1cf PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x1d0 TObjFunc
	
Label_466:
	var_408_bool = 0; // 0x1d2 PushV
	var_408_bool = 0; // 0x1d3 MovB
	var_409_bool = 0; var_410_object = Obj(); // 0x1d4 PushV
	var_410_object = var_1_object; // 0x1d5 MovT
	func_4665(var_409_bool, var_410_object); // 0x1d6 NEW_2
	var_411_bool = var_409_bool == 0; // 0x1d8 Not
	if(var_411_bool == 0) goto Label_480; // 0x1d9 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x1da PushV
	var_413_object = var_1_object; // 0x1db MovT
	func_4687(var_413_object); // 0x1dc NEW_2
	if(var_412_bool == 0) goto Label_480; // 0x1de JumpB
	var_408_bool = 1; // 0x1df MovB
	
Label_480:
	if(var_408_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_414_int = 525381; // 0x1e1 PushI
	var_415_int = 26750; // 0x1e2 PushI
	var_416_int = 26749; // 0x1e3 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x1e4 TObjFunc
	
Label_486:
	var_417_bool = 0; var_418_object = Obj(); // 0x1e6 PushV
	var_418_object = var_1_object; // 0x1e7 MovT
	func_4653(var_418_object); // 0x1e8 NEW_2
	if(var_417_bool == 0) goto Label_496; // 0x1ea JumpB
	var_423_int = 525375; // 0x1eb PushI
	var_424_int = 26744; // 0x1ec PushI
	var_425_int = 26743; // 0x1ed PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x1ee TObjFunc
	
Label_496:
	var_426_int = 525243; // 0x1f0 PushI
	var_427_int = -1; // 0x1f1 PushI
	var_428_int = 26611; // 0x1f2 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x1f3 TObjFunc
	var_429_int = 529207; // 0x1f5 PushI
	var_430_int = -1; // 0x1f6 PushI
	var_431_int = 30658; // 0x1f7 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x1f8 TObjFunc
	goto Label_509; // 0x1fa Jump
}


func_2929(var_2_object, var_621_string)
{
	var_622_bool = 0; // 0xb72 PushV
	func_4415(var_622_bool); // 0xb73 NEW_2
	var_623_bool = var_622_bool == 0; // 0xb75 Not
	if(var_623_bool == 0) goto Label_2936; // 0xb76 JumpB
	return 0; // 0xb77 Return
	
Label_2936:
	var_624_bool = var_621_string == var_2_object; // 0xb78 Eq
	if(var_624_bool == 0) goto Label_2939; // 0xb79 JumpB
	return 0; // 0xb7a Return
	
Label_2939:
	var_625_string = ""; var_626_bool = 0; // 0xb7b PushV
	var_625_string = var_621_string; // 0xb7c Mov
	var_627_string = ""; // 0xb7d PushS
	var_628_bool = var_621_string == var_627_string; // 0xb7e Eq
	if(var_628_bool == 0) goto Label_2946; // 0xb7f JumpB
	var_626_bool = 0; // 0xb80 MovB
	goto Label_2947; // 0xb81 Jump
	
Label_2947:
	func_4186(var_625_string, var_626_bool); // 0xb83 NEW_2
	var_2_object = var_621_string; // 0xb85 TMov
	return 0; // 0xb86 Return
	
Label_2946:
	var_626_bool = 1; // 0xb82 MovB
}


func_4977(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x1371 PushV
	GetMainOutdoorScene(var_108_object); // 0x1372 Func
	var_110_bool = var_108_object == 0; // 0x1374 NullEq
	if(var_110_bool == 0) goto Label_4986; // 0x1375 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1376 PushS
	Trace(var_111_string); // 0x1377 Func
	return 8; // 0x1379 Return
	
Label_4986:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x137a ObjFunc
	var_112_bool = var_109_bool == 0; // 0x137c Not
	if(var_112_bool == 0) goto Label_4996; // 0x137d JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x137e PushS
	var_114_int = var_113_string + var_99_string; // 0x137f Add
	var_115_string = " doesnt exist"; // 0x1380 PushS
	var_116_int = var_114_int + var_115_string; // 0x1381 Add
	Trace(var_116_int); // 0x1382 Func
	
Label_4996:
	GetMap(var_98_object); // 0x1384 ObjFunc
	var_117_bool = var_98_object == 0; // 0x1386 NullEq
	if(var_117_bool == 0) goto Label_5004; // 0x1387 JumpB
	var_118_string = "Can't find map"; // 0x1388 PushS
	Trace(var_118_string); // 0x1389 Func
	return 8; // 0x138b Return
	
Label_5004:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x138c PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x138d PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x138e ObjFunc
	return 8; // 0x1390 Return
}


func_4723(var_548_bool)
{
	var_550_int = 0; var_551_string = ""; // 0x1274 PushV
	var_551_string = "k5q01"; // 0x1275 MovS
	func_4268(var_550_int, var_551_string); // 0x1276 NEW_2
	var_552_int = 1; // 0x1278 PushI
	var_553_bool = var_550_int == var_552_int; // 0x1279 Eq
	if(var_553_bool == 0) goto Label_4733; // 0x127a JumpB
	var_548_bool = 1; // 0x127b MovB
	return 0; // 0x127c Return
	
Label_4733:
	var_548_bool = 0; // 0x127d MovB
	return 0; // 0x127e Return
}


func_4216()
{
	var_42_bool = 0; // 0x1078 PushV
	func_4415(var_42_bool); // 0x1079 NEW_2
	if(var_42_bool == 0) goto Label_4222; // 0x107b JumpB
	lshStopSpeech(); // 0x107c Func
	
Label_4222:
	return 0; // 0x107e Return
}


func_2430(var_0_bool, var_1_object, var_2_object, var_3_object, var_531_object, var_532_object)
{
	var_0_bool = var_532_object; // 0x97f TMov
	var_1_object = var_531_object; // 0x980 TMov
	var_3_object = 0; // 0x981 TMovB
	var_537_int = 1; // 0x982 PushI
	if(var_537_int == 0) goto Label_2487; // 0x983 JumpB
	var_538_string = ""; // 0x984 PushV
	var_538_string = "Neutral"; // 0x985 MovS
	func_2517(var_532_object, var_538_string); // 0x986 NEW_2
	var_546_int = 525841; // 0x988 PushI
	SetMessage(var_546_int); // 0x989 TObjFunc
	ClearReplies(); // 0x98b TObjFunc
	var_547_bool = 0; // 0x98d PushV
	var_547_bool = 0; // 0x98e MovB
	var_548_bool = 0; var_549_object = Obj(); // 0x98f PushV
	var_549_object = var_1_object; // 0x990 MovT
	func_4723(var_549_object); // 0x991 NEW_2
	if(var_548_bool == 0) goto Label_2458; // 0x993 JumpB
	var_554_bool = 0; var_555_object = Obj(); // 0x994 PushV
	var_555_object = var_1_object; // 0x995 MovT
	func_4735(var_555_object); // 0x996 NEW_2
	if(var_554_bool == 0) goto Label_2458; // 0x998 JumpB
	var_547_bool = 1; // 0x999 MovB
	
Label_2458:
	if(var_547_bool == 0) goto Label_2464; // 0x99a JumpB
	var_560_int = 525842; // 0x99b PushI
	var_561_int = 30544; // 0x99c PushI
	var_562_int = 27141; // 0x99d PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x99e TObjFunc
	
Label_2464:
	var_563_bool = 0; var_564_object = Obj(); // 0x9a0 PushV
	var_564_object = var_1_object; // 0x9a1 MovT
	func_4771(var_564_object); // 0x9a2 NEW_2
	if(var_563_bool == 0) goto Label_2474; // 0x9a4 JumpB
	var_569_int = 525845; // 0x9a5 PushI
	var_570_int = 30542; // 0x9a6 PushI
	var_571_int = 27144; // 0x9a7 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x9a8 TObjFunc
	
Label_2474:
	var_572_int = 529095; // 0x9aa PushI
	var_573_int = -1; // 0x9ab PushI
	var_574_int = 30540; // 0x9ac PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x9ad TObjFunc
	var_575_int = 529096; // 0x9af PushI
	var_576_int = -1; // 0x9b0 PushI
	var_577_int = 30541; // 0x9b1 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x9b2 TObjFunc
	goto Label_2487; // 0x9b4 Jump
	
Label_2487:
	var_578_bool = 0; // 0x9b7 PushV
	func_4415(var_578_bool); // 0x9b8 NEW_2
	if(var_578_bool == 0) goto Label_2502; // 0x9ba JumpB
	
Label_2491:
	lshWaitForAnimEnd(); // 0x9bb Func
	var_579_object = var_3_object; // 0x9bd PushT
	if(var_579_object == 0) goto Label_2496; // 0x9be JumpB
	goto Label_2501; // 0x9bf Jump
	
Label_2501:
	goto Label_2516; // 0x9c5 Jump
	
Label_2516:
	return 0; // 0x9d4 Return
	
Label_2496:
	var_580_string = ""; // 0x9c0 PushV
	var_580_string = var_2_object; // 0x9c1 MovT
	func_4170(var_580_string); // 0x9c2 NEW_2
	goto Label_2491; // 0x9c4 Jump
	
Label_2502:
	var_581_string = "all"; // 0x9c6 PushS
	var_582_string = "idle"; // 0x9c7 PushS
	PlayAnimation(var_581_string, var_582_string); // 0x9c8 Func
	
Label_2506:
	WaitForAnimEnd(); // 0x9ca Func
	var_583_object = var_3_object; // 0x9cc PushT
	if(var_583_object == 0) goto Label_2511; // 0x9cd JumpB
	goto Label_2516; // 0x9ce Jump
	
Label_2511:
	var_584_string = "all"; // 0x9cf PushS
	var_585_string = "idle"; // 0x9d0 PushS
	PlayAnimation(var_584_string, var_585_string); // 0x9d1 Func
	goto Label_2506; // 0x9d3 Jump
}


func_4223(var_134_object)
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x107f PushV
	self(var_136_object); // 0x1080 Func
	var_134_object = var_136_object; // 0x1082 Mov
	return 2; // 0x1083 Return
}


func_4735(var_554_bool)
{
	var_556_int = 0; var_557_string = ""; // 0x1280 PushV
	var_557_string = "ook5MladVlad1"; // 0x1281 MovS
	func_4268(var_556_int, var_557_string); // 0x1282 NEW_2
	var_558_int = 0; // 0x1284 PushI
	var_559_bool = var_556_int == var_558_int; // 0x1285 Eq
	if(var_559_bool == 0) goto Label_4745; // 0x1286 JumpB
	var_554_bool = 1; // 0x1287 MovB
	return 0; // 0x1288 Return
	
Label_4745:
	var_554_bool = 0; // 0x1289 MovB
	return 0; // 0x128a Return
}


func_3713(var_0_bool, var_1_object, var_2_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_cvector = CVector(0,0,0); // 0xe81 PushV
	var_62_bool = 1; // 0xe82 PushB
	SensePlayerOnly(var_62_bool); // 0xe83 Func
	func_3801(); // 0xe86 NEW_2
	GetScene(var_51_object); // 0xe88 Func
	var_2_object = 0; // 0xe8a TMovI
	
Label_3723:
	var_67_string = ""; var_68_int = 0; // 0xe8b PushV
	var_68_int = var_2_object; // 0xe8c MovT
	func_4393(var_67_string, var_68_int); // 0xe8d NEW_2
	GetLocator(var_67_string, var_52_bool); // 0xe8f ObjFunc
	var_76_bool = var_52_bool == 0; // 0xe91 Not
	if(var_76_bool == 0) goto Label_3732; // 0xe92 JumpB
	goto Label_3735; // 0xe93 Jump
	
Label_3735:
	var_77_bool = 0; // 0xe97 PushV
	func_3940(var_77_bool); // 0xe98 NEW_2
	var_80_bool = var_77_bool == 0; // 0xe9a Not
	if(var_80_bool == 0) goto Label_3745; // 0xe9b JumpB
	TaskCall(0); // 0xe9d TaskCall
	func_0(); // 0xe9e NEW_2
	TaskReturn(); // 0xe9f TaskReturn
	
Label_3745:
	func_3809(var_60_bool, var_61_cvector); // 0xea2 NEW_2
	
Label_3748:
	irand(var_53_int, var_60_bool); // 0xea4 Func
	var_101_string = ""; var_102_int = 0; // 0xea6 PushV
	var_102_int = var_53_int; // 0xea7 Mov
	func_4393(var_101_string, var_102_int); // 0xea8 NEW_2
	GetLocator(var_101_string, var_54_bool, var_55_cvector, var_56_cvector); // 0xeaa ObjFunc
	var_103_cvector = CVector(0,0,0); // 0xeac PushV
	func_3856(var_103_cvector); // 0xead NEW_2
	var_57_cvector = var_55_cvector - var_103_cvector; // 0xeaf Sub2
	var_106_float = 0; var_107_cvector = CVector(0,0,0); // 0xeb0 PushV
	var_107_cvector = var_57_cvector; // 0xeb1 Mov
	func_4258(var_106_float, var_107_cvector); // 0xeb2 NEW_2
	var_115_bool = var_106_float > var_1_object; // 0xeb4 GT
	if(var_115_bool == 0) goto Label_3795; // 0xeb5 JumpB
	GetHeight(var_58_float); // 0xeb6 Func
	var_59_cvector = var_55_cvector; // 0xeb8 Mov
	var_116_float = GetByIndex(var_59_cvector, 1); // 0xeb9 PushE
	var_116_float = var_116_float + var_58_float; // 0xeba Add2
	SetByIndex(var_59_cvector, 1) = var_116_float; // 0xebb PopE
	CanReachByPF(var_60_bool, var_59_cvector); // 0xebc Func
	var_117_bool = var_60_bool; // 0xebe Push
	if(var_117_bool == 0) goto Label_3795; // 0xebf JumpB
	var_118_int = var_57_cvector | var_57_cvector; // 0xec0 Or
	var_119_float = sqrt(var_118_int); // 0xec1 Sqrt
	var_120_float = var_0_bool / var_119_float; // 0xec2 Div
	var_121_float = var_57_cvector * var_120_float; // 0xec3 Mult
	var_61_cvector = var_55_cvector - var_121_float; // 0xec4 Sub2
	var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); // 0xec5 PushV
	var_123_cvector = var_61_cvector; // 0xec6 Mov
	var_124_cvector = var_56_cvector; // 0xec7 Mov
	TaskCall(1); // 0xec8 TaskCall
	func_13(var_125_bool, var_122_bool, var_123_cvector, var_124_cvector); // 0xec9 NEW_2
	TaskReturn(); // 0xeca TaskReturn
	if(var_125_bool == 0) goto Label_3795; // 0xecc JumpB
	var_149_int = 0; // 0xecd PushV
	var_149_int = var_53_int; // 0xece Mov
	TaskCall(3); // 0xecf TaskCall
	func_198(var_149_int); // 0xed0 NEW_2
	TaskReturn(); // 0xed1 TaskReturn
	
Label_3795:
	var_202_int = 1; // 0xed3 PushI
	Sleep(var_202_int); // 0xed4 Func
	goto Label_3748; // 0xed6 Jump
	
Label_3732:
	var_203_int = 1; // 0xe94 PushI
	var_2_object = var_2_object + var_203_int; // 0xe95 Add2
	goto Label_3723; // 0xe96 Jump
}


func_4479()
{
	var_201_string = "ook2MladVlad2"; // 0x1180 PushS
	var_202_int = 1; // 0x1181 PushI
	SetVariable(var_201_string, var_202_int); // 0x1182 Func
	return 0; // 0x1184 Return
}


func_4229(var_98_cvector, var_99_cvector)
{
	var_101_float = 0; var_102_float = 0; // 0x1085 PushV
	var_103_int = var_99_cvector | var_99_cvector; // 0x1086 Or
	var_102_float = sqrt(var_103_int); // 0x1087 Sqrt2
	var_104_float = 0.0; // 0x1088 PushF
	var_105_bool = var_102_float < var_104_float; // 0x1089 LT
	if(var_105_bool == 0) goto Label_4237; // 0x108a JumpB
	var_98_cvector = CVector(0.0, 0.0, 0.0); // 0x108b MovV
	return 2; // 0x108c Return
	
Label_4237:
	var_98_cvector = var_99_cvector / var_99_cvector; // 0x108d Div2
	return 2; // 0x108e Return
}


func_4485()
{
	var_207_int = 0; var_208_int = 0; // 0x1185 PushV
	var_209_string = "k2q04"; // 0x1186 PushS
	var_210_int = 1000; // 0x1187 PushI
	SetVariable(var_209_string, var_210_int); // 0x1188 Func
	func_4828(); // 0x118b NEW_2
	var_219_string = "alpha_pills"; // 0x118d PushS
	var_220_int = 4; // 0x118e PushI
	RemoveItemByType(var_208_int, var_219_string, var_220_int); // 0x118f ObjFunc
	var_221_string = "beta_pills"; // 0x1191 PushS
	var_222_int = 4; // 0x1192 PushI
	RemoveItemByType(var_208_int, var_221_string, var_222_int); // 0x1193 ObjFunc
	return 2; // 0x1195 Return
}


func_4747(var_639_bool)
{
	var_641_int = 0; var_642_string = ""; // 0x128c PushV
	var_642_string = "k6q01"; // 0x128d MovS
	func_4268(var_641_int, var_642_string); // 0x128e NEW_2
	var_643_int = 1; // 0x1290 PushI
	var_644_bool = var_641_int == var_643_int; // 0x1291 Eq
	if(var_644_bool == 0) goto Label_4757; // 0x1292 JumpB
	var_639_bool = 1; // 0x1293 MovB
	return 0; // 0x1294 Return
	
Label_4757:
	var_639_bool = 0; // 0x1295 MovB
	return 0; // 0x1296 Return
}


func_4239(var_95_float, var_96_float)
{
	var_98_int = 0; // 0x1090 PushI
	var_99_bool = var_96_float < var_98_int; // 0x1091 LT
	if(var_99_bool == 0) goto Label_4245; // 0x1092 JumpB
	var_95_float = -var_96_float; // 0x1093 Neg2
	goto Label_4246; // 0x1094 Jump
	
Label_4246:
	return 0; // 0x1096 Return
	
Label_4245:
	var_95_float = var_96_float; // 0x1095 Mov
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_5010(var_123_int)
{
	var_124_int = 0; var_125_int = 0; // 0x1392 PushV
	var_126_string = "branch"; // 0x1393 PushS
	GetVariable(var_126_string, var_125_int); // 0x1394 Func
	var_127_int = 0; // 0x1396 PushI
	var_128_bool = var_125_int == var_127_int; // 0x1397 Eq
	if(var_128_bool == 0) goto Label_5020; // 0x1398 JumpB
	var_123_int = 1; // 0x1399 MovI
	return 2; // 0x139a Return
	
Label_5020:
	var_129_int = 1; // 0x139c PushI
	var_130_bool = var_125_int == var_129_int; // 0x139d Eq
	if(var_130_bool == 0) goto Label_5025; // 0x139e JumpB
	var_123_int = 2; // 0x139f MovI
	return 2; // 0x13a0 Return
	
Label_5025:
	var_123_int = 3; // 0x13a1 MovI
	return 2; // 0x13a2 Return
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
	func_3929(); // 0x9c NEW_2
	var_78_int = 6; // 0x9e PushI
	Sleep(var_78_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_4502()
{
	var_252_string = "k2q04"; // 0x1197 PushS
	var_253_int = 1000; // 0x1198 PushI
	SetVariable(var_252_string, var_253_int); // 0x1199 Func
	func_4841(); // 0x119c NEW_2
	return 0; // 0x119e Return
}


func_4759(var_630_bool)
{
	var_632_int = 0; var_633_string = ""; // 0x1298 PushV
	var_633_string = "k6q02"; // 0x1299 MovS
	func_4268(var_632_int, var_633_string); // 0x129a NEW_2
	var_634_int = 2; // 0x129c PushI
	var_635_bool = var_632_int == var_634_int; // 0x129d Eq
	if(var_635_bool == 0) goto Label_4769; // 0x129e JumpB
	var_630_bool = 1; // 0x129f MovB
	return 0; // 0x12a0 Return
	
Label_4769:
	var_630_bool = 0; // 0x12a1 MovB
	return 0; // 0x12a2 Return
}


func_4247(var_155_float, var_156_float, var_157_float, var_158_float)
{
	var_159_bool = var_156_float < var_157_float; // 0x1098 LT
	if(var_159_bool == 0) goto Label_4252; // 0x1099 JumpB
	var_155_float = var_157_float; // 0x109a Mov
	return 0; // 0x109b Return
	
Label_4252:
	var_160_bool = var_156_float > var_158_float; // 0x109c GT
	if(var_160_bool == 0) goto Label_4256; // 0x109d JumpB
	var_155_float = var_158_float; // 0x109e Mov
	return 0; // 0x109f Return
	
Label_4256:
	var_155_float = var_156_float; // 0x10a0 Mov
	return 0; // 0x10a1 Return
}


func_2204(var_0_bool, var_1_object, var_2_object, var_3_object, var_227_object, var_228_object)
{
	var_0_bool = var_228_object; // 0x89d TMov
	var_1_object = var_227_object; // 0x89e TMov
	var_3_object = 0; // 0x89f TMovB
	var_233_int = 1; // 0x8a0 PushI
	if(var_233_int == 0) goto Label_2232; // 0x8a1 JumpB
	var_234_string = ""; // 0x8a2 PushV
	var_234_string = "Neutral"; // 0x8a3 MovS
	func_2262(var_228_object, var_234_string); // 0x8a4 NEW_2
	var_251_int = 525513; // 0x8a6 PushI
	SetMessage(var_251_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_252_int = 525514; // 0x8ab PushI
	var_253_int = 30738; // 0x8ac PushI
	var_254_int = 26870; // 0x8ad PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x8ae TObjFunc
	var_255_int = 529284; // 0x8b0 PushI
	var_256_int = 30738; // 0x8b1 PushI
	var_257_int = 30737; // 0x8b2 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x8b3 TObjFunc
	goto Label_2232; // 0x8b5 Jump
	
Label_2232:
	var_258_bool = 0; // 0x8b8 PushV
	func_4415(var_258_bool); // 0x8b9 NEW_2
	if(var_258_bool == 0) goto Label_2247; // 0x8bb JumpB
	
Label_2236:
	lshWaitForAnimEnd(); // 0x8bc Func
	var_259_object = var_3_object; // 0x8be PushT
	if(var_259_object == 0) goto Label_2241; // 0x8bf JumpB
	goto Label_2246; // 0x8c0 Jump
	
Label_2246:
	goto Label_2261; // 0x8c6 Jump
	
Label_2261:
	return 0; // 0x8d5 Return
	
Label_2241:
	var_260_string = ""; // 0x8c1 PushV
	var_260_string = var_2_object; // 0x8c2 MovT
	func_4170(var_260_string); // 0x8c3 NEW_2
	goto Label_2236; // 0x8c5 Jump
	
Label_2247:
	var_271_string = "all"; // 0x8c7 PushS
	var_272_string = "idle"; // 0x8c8 PushS
	PlayAnimation(var_271_string, var_272_string); // 0x8c9 Func
	
Label_2251:
	WaitForAnimEnd(); // 0x8cb Func
	var_273_object = var_3_object; // 0x8cd PushT
	if(var_273_object == 0) goto Label_2256; // 0x8ce JumpB
	goto Label_2261; // 0x8cf Jump
	
Label_2256:
	var_274_string = "all"; // 0x8d0 PushS
	var_275_string = "idle"; // 0x8d1 PushS
	PlayAnimation(var_274_string, var_275_string); // 0x8d2 Func
	goto Label_2251; // 0x8d4 Jump
}


func_4511()
{
	var_268_string = "k2q04"; // 0x11a0 PushS
	var_269_int = 1000; // 0x11a1 PushI
	SetVariable(var_268_string, var_269_int); // 0x11a2 Func
	func_4854(); // 0x11a5 NEW_2
	return 0; // 0x11a7 Return
}


func_4258(var_106_float, var_107_cvector)
{
	var_108_float = GetByIndex(var_107_cvector, 0); // 0x10a3 PushE
	var_109_float = GetByIndex(var_107_cvector, 0); // 0x10a4 PushE
	var_110_float = var_108_float * var_109_float; // 0x10a5 Mult
	var_111_float = GetByIndex(var_107_cvector, 2); // 0x10a6 PushE
	var_112_float = GetByIndex(var_107_cvector, 2); // 0x10a7 PushE
	var_113_float = var_111_float * var_112_float; // 0x10a8 Mult
	var_114_int = var_110_float + var_113_float; // 0x10a9 Add
	var_106_float = sqrt(var_114_int); // 0x10aa Sqrt2
	return 0; // 0x10ab Return
}


func_4771(var_563_bool)
{
	var_565_int = 0; var_566_string = ""; // 0x12a4 PushV
	var_566_string = "ook5MladVlad2"; // 0x12a5 MovS
	func_4268(var_565_int, var_566_string); // 0x12a6 NEW_2
	var_567_int = 0; // 0x12a8 PushI
	var_568_bool = var_565_int == var_567_int; // 0x12a9 Eq
	if(var_568_bool == 0) goto Label_4781; // 0x12aa JumpB
	var_563_bool = 1; // 0x12ab MovB
	return 0; // 0x12ac Return
	
Label_4781:
	var_563_bool = 0; // 0x12ad MovB
	return 0; // 0x12ae Return
}


func_5027(var_57_object)
{
	var_58_bool = GlobalVars[2]; // 0x13a4 PushGE
	var_59_bool = var_58_bool == 0; // 0x13a5 Not
	if(var_59_bool == 0) goto Label_5040; // 0x13a6 JumpB
	var_60_int = 0; var_61_object = Obj(); // 0x13a7 PushV
	var_61_object = var_57_object; // 0x13a8 Mov
	TaskCall(8); // 0x13a9 TaskCall
	func_2123(var_62_object, var_60_int, var_61_object); // 0x13aa NEW_2
	TaskReturn(); // 0x13ab TaskReturn
	var_285_bool = GlobalVars[2]; // 0x13ad PushGE
	var_285_bool = 1; // 0x13ae MovB
	GlobalVars[2] = var_285_bool; // 0x13af PopGE
	
Label_5040:
	var_286_bool = 0; var_287_int = 0; // 0x13b0 PushV
	var_287_int = 2; // 0x13b1 MovI
	func_4363(var_286_bool, var_287_int); // 0x13b2 NEW_2
	if(var_286_bool == 0) goto Label_5052; // 0x13b4 JumpB
	var_289_int = 0; var_290_object = Obj(); // 0x13b5 PushV
	var_290_object = var_57_object; // 0x13b6 Mov
	TaskCall(4); // 0x13b7 TaskCall
	func_282(var_291_object, var_289_int, var_290_object); // 0x13b8 NEW_2
	TaskReturn(); // 0x13b9 TaskReturn
	return 0; // 0x13bb Return
	
Label_5052:
	var_434_bool = 0; var_435_int = 0; // 0x13bc PushV
	var_435_int = 3; // 0x13bd MovI
	func_4363(var_434_bool, var_435_int); // 0x13be NEW_2
	if(var_434_bool == 0) goto Label_5064; // 0x13c0 JumpB
	var_436_int = 0; var_437_object = Obj(); // 0x13c1 PushV
	var_437_object = var_57_object; // 0x13c2 Mov
	TaskCall(6); // 0x13c3 TaskCall
	func_1633(var_438_object, var_436_int, var_437_object); // 0x13c4 NEW_2
	TaskReturn(); // 0x13c5 TaskReturn
	return 0; // 0x13c7 Return
	
Label_5064:
	var_505_bool = 0; var_506_int = 0; // 0x13c8 PushV
	var_506_int = 5; // 0x13c9 MovI
	func_4363(var_505_bool, var_506_int); // 0x13ca NEW_2
	if(var_505_bool == 0) goto Label_5076; // 0x13cc JumpB
	var_507_int = 0; var_508_object = Obj(); // 0x13cd PushV
	var_508_object = var_57_object; // 0x13ce Mov
	TaskCall(10); // 0x13cf TaskCall
	func_2349(var_509_object, var_507_int, var_508_object); // 0x13d0 NEW_2
	TaskReturn(); // 0x13d1 TaskReturn
	return 0; // 0x13d3 Return
	
Label_5076:
	var_588_bool = 0; var_589_int = 0; // 0x13d4 PushV
	var_589_int = 6; // 0x13d5 MovI
	func_4363(var_588_bool, var_589_int); // 0x13d6 NEW_2
	if(var_588_bool == 0) goto Label_5088; // 0x13d8 JumpB
	var_590_int = 0; var_591_object = Obj(); // 0x13d9 PushV
	var_591_object = var_57_object; // 0x13da Mov
	TaskCall(12); // 0x13db TaskCall
	func_2770(var_592_object, var_590_int, var_591_object); // 0x13dc NEW_2
	TaskReturn(); // 0x13dd TaskReturn
	return 0; // 0x13df Return
	
Label_5088:
	var_664_bool = 0; var_665_int = 0; // 0x13e0 PushV
	var_665_int = 12; // 0x13e1 MovI
	func_4363(var_664_bool, var_665_int); // 0x13e2 NEW_2
	if(var_664_bool == 0) goto Label_5100; // 0x13e4 JumpB
	var_666_int = 0; var_667_object = Obj(); // 0x13e5 PushV
	var_667_object = var_57_object; // 0x13e6 Mov
	TaskCall(14); // 0x13e7 TaskCall
	func_3244(var_668_object, var_666_int, var_667_object); // 0x13e8 NEW_2
	TaskReturn(); // 0x13e9 TaskReturn
	return 0; // 0x13eb Return
	
Label_5100:
	var_725_int = 0; var_726_object = Obj(); // 0x13ec PushV
	var_726_object = var_57_object; // 0x13ed Mov
	TaskCall(16); // 0x13ee TaskCall
	func_3503(var_727_object, var_725_int, var_726_object); // 0x13ef NEW_2
	TaskReturn(); // 0x13f0 TaskReturn
	return 0; // 0x13f2 Return
}


func_4520()
{
	var_289_string = "k2q04"; // 0x11a9 PushS
	var_290_int = 1000; // 0x11aa PushI
	SetVariable(var_289_string, var_290_int); // 0x11ab Func
	func_4867(); // 0x11ae NEW_2
	return 0; // 0x11b0 Return
}


func_4268(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0; // 0x10ac PushV
	GetVariable(var_324_string, var_326_int); // 0x10ad Func
	var_323_int = var_326_int; // 0x10af Mov
	return 2; // 0x10b0 Return
}


func_3244(var_0_bool, var_666_int, var_667_object)
{
	var_669_object = Obj(); var_670_bool = 0; var_671_int = 0; var_672_bool = 0; var_673_object = Obj(); var_674_bool = 0; var_675_int = 0; var_676_bool = 0; // 0xcac PushV
	var_0_bool = var_667_object; // 0xcad TMov
	var_677_bool = 0; var_678_object = Obj(); var_679_float = 0; // 0xcae PushV
	var_678_object = var_667_object; // 0xcaf Mov
	var_679_float = 70.0; // 0xcb0 MovF
	func_3945(var_678_object, var_679_float); // 0xcb1 NEW_2
	var_680_bool = var_677_bool == 0; // 0xcb3 Not
	if(var_680_bool == 0) goto Label_3255; // 0xcb4 JumpB
	var_666_int = -2; // 0xcb5 MovI
	return 8; // 0xcb6 Return
	
Label_3255:
	CreateDialog(var_673_object); // 0xcb7 Func
	var_681_int = 0; // 0xcb9 PushV
	func_4409(var_681_int); // 0xcba NEW_2
	SetNPCName(var_681_int); // 0xcbc ObjFunc
	var_682_int = 0; // 0xcbe PushV
	func_4407(var_682_int); // 0xcbf NEW_2
	SetNPCDescription(var_682_int); // 0xcc1 ObjFunc
	var_683_string = ""; // 0xcc3 PushV
	func_4411(var_683_string); // 0xcc4 NEW_2
	SetPhoto(var_683_string); // 0xcc6 ObjFunc
	var_684_string = ""; // 0xcc8 PushV
	func_4413(var_684_string); // 0xcc9 NEW_2
	SetPhoto2(var_684_string); // 0xccb ObjFunc
	var_685_int = 0; // 0xccd PushV
	func_5010(var_685_int); // 0xcce NEW_2
	SetPlayerName(var_685_int); // 0xcd0 ObjFunc
	var_675_int = -1; // 0xcd2 MovI
	IsOverrideActive(var_674_bool); // 0xcd3 Func
	var_686_bool = var_674_bool; // 0xcd5 Push
	if(var_686_bool == 0) goto Label_3289; // 0xcd6 JumpB
	var_666_int = -2; // 0xcd7 MovI
	return 8; // 0xcd8 Return
	
Label_3289:
	DoDialog(var_673_object); // 0xcd9 Func
	var_687_bool = 0; var_688_object = Obj(); // 0xcdb PushV
	var_689_object = Obj(); // 0xcdc PushV
	func_4223(var_689_object); // 0xcdd NEW_2
	var_688_object = var_689_object; // 0xcde Mov
	func_4032(var_687_bool, var_688_object); // 0xce0 NEW_2
	var_690_object = Obj(); var_691_object = Obj(); // 0xce2 PushV
	var_690_object = var_667_object; // 0xce3 Mov
	var_691_object = var_673_object; // 0xce4 Mov
	TaskCall(15); // 0xce5 TaskCall
	func_3325(var_692_object, var_693_object, var_694_string, var_695_bool, var_690_object, var_691_object); // 0xce6 NEW_2
	TaskReturn(); // 0xce7 TaskReturn
	IsDialogEnd(var_676_bool); // 0xce9 ObjFunc
	
Label_3307:
	var_723_bool = var_676_bool == 0; // 0xceb Not
	if(var_723_bool == 0) goto Label_3314; // 0xcec JumpB
	sync(); // 0xced Func
	IsDialogEnd(var_676_bool); // 0xcef ObjFunc
	goto Label_3307; // 0xcf1 Jump
	
Label_3314:
	var_724_object = Obj(); // 0xcf2 PushV
	var_724_object = var_667_object; // 0xcf3 Mov
	func_4014(); // 0xcf4 NEW_2
	StopDialog(var_673_object); // 0xcf6 Func
	GetReturnValue(var_675_int); // 0xcf8 ObjFunc
	var_666_int = var_675_int; // 0xcfa Mov
	return 8; // 0xcfb Return
}


func_4014()
{
	var_278_bool = 0; var_279_bool = 0; // 0xfae PushV
	var_280_bool = 1; // 0xfaf PushB
	CameraSwitchToNormal(var_280_bool); // 0xfb0 Func
	var_281_bool = 0; // 0xfb2 PushV
	func_4415(var_281_bool); // 0xfb3 NEW_2
	if(var_281_bool == 0) goto Label_4023; // 0xfb5 JumpB
	goto Label_4031; // 0xfb6 Jump
	
Label_4031:
	return 2; // 0xfbf Return
	
Label_4023:
	var_282_string = "head"; // 0xfb7 PushS
	HasAnimationTrack(var_279_bool, var_282_string); // 0xfb8 Func
	var_283_bool = var_279_bool; // 0xfba Push
	if(var_283_bool == 0) goto Label_4031; // 0xfbb JumpB
	var_284_string = "head"; // 0xfbc PushS
	UnlookAsync(var_284_string); // 0xfbd Func
}


func_4783(var_389_bool)
{
	var_391_int = 0; var_392_int = 0; // 0x12af PushV
	var_393_string = "alpha_pills"; // 0x12b0 PushS
	GetItemCountOfType(var_392_int, var_393_string); // 0x12b1 ObjFunc
	var_394_int = 4; // 0x12b3 PushI
	var_395_bool = var_392_int < var_394_int; // 0x12b4 LT
	if(var_395_bool == 0) goto Label_4792; // 0x12b5 JumpB
	var_389_bool = 0; // 0x12b6 MovB
	return 2; // 0x12b7 Return
	
Label_4792:
	var_396_string = "beta_pills"; // 0x12b8 PushS
	GetItemCountOfType(var_392_int, var_396_string); // 0x12b9 ObjFunc
	var_397_int = 4; // 0x12bb PushI
	var_398_bool = var_392_int < var_397_int; // 0x12bc LT
	if(var_398_bool == 0) goto Label_4800; // 0x12bd JumpB
	var_389_bool = 0; // 0x12be MovB
	return 2; // 0x12bf Return
	
Label_4800:
	var_389_bool = 1; // 0x12c0 MovB
	return 2; // 0x12c1 Return
}


func_3503(var_0_bool, var_725_int, var_726_object)
{
	var_728_object = Obj(); var_729_bool = 0; var_730_int = 0; var_731_bool = 0; var_732_object = Obj(); var_733_bool = 0; var_734_int = 0; var_735_bool = 0; // 0xdaf PushV
	var_0_bool = var_726_object; // 0xdb0 TMov
	var_736_bool = 0; var_737_object = Obj(); var_738_float = 0; // 0xdb1 PushV
	var_737_object = var_726_object; // 0xdb2 Mov
	var_738_float = 70.0; // 0xdb3 MovF
	func_3945(var_737_object, var_738_float); // 0xdb4 NEW_2
	var_739_bool = var_736_bool == 0; // 0xdb6 Not
	if(var_739_bool == 0) goto Label_3514; // 0xdb7 JumpB
	var_725_int = -2; // 0xdb8 MovI
	return 8; // 0xdb9 Return
	
Label_3514:
	CreateDialog(var_732_object); // 0xdba Func
	var_740_int = 0; // 0xdbc PushV
	func_4409(var_740_int); // 0xdbd NEW_2
	SetNPCName(var_740_int); // 0xdbf ObjFunc
	var_741_int = 0; // 0xdc1 PushV
	func_4407(var_741_int); // 0xdc2 NEW_2
	SetNPCDescription(var_741_int); // 0xdc4 ObjFunc
	var_742_string = ""; // 0xdc6 PushV
	func_4411(var_742_string); // 0xdc7 NEW_2
	SetPhoto(var_742_string); // 0xdc9 ObjFunc
	var_743_string = ""; // 0xdcb PushV
	func_4413(var_743_string); // 0xdcc NEW_2
	SetPhoto2(var_743_string); // 0xdce ObjFunc
	var_744_int = 0; // 0xdd0 PushV
	func_5010(var_744_int); // 0xdd1 NEW_2
	SetPlayerName(var_744_int); // 0xdd3 ObjFunc
	var_734_int = -1; // 0xdd5 MovI
	IsOverrideActive(var_733_bool); // 0xdd6 Func
	var_745_bool = var_733_bool; // 0xdd8 Push
	if(var_745_bool == 0) goto Label_3548; // 0xdd9 JumpB
	var_725_int = -2; // 0xdda MovI
	return 8; // 0xddb Return
	
Label_3548:
	DoDialog(var_732_object); // 0xddc Func
	var_746_bool = 0; var_747_object = Obj(); // 0xdde PushV
	var_748_object = Obj(); // 0xddf PushV
	func_4223(var_748_object); // 0xde0 NEW_2
	var_747_object = var_748_object; // 0xde1 Mov
	func_4032(var_746_bool, var_747_object); // 0xde3 NEW_2
	var_749_object = Obj(); var_750_object = Obj(); // 0xde5 PushV
	var_749_object = var_726_object; // 0xde6 Mov
	var_750_object = var_732_object; // 0xde7 Mov
	TaskCall(17); // 0xde8 TaskCall
	func_3584(var_751_object, var_752_object, var_753_string, var_754_bool, var_749_object, var_750_object); // 0xde9 NEW_2
	TaskReturn(); // 0xdea TaskReturn
	IsDialogEnd(var_735_bool); // 0xdec ObjFunc
	
Label_3566:
	var_779_bool = var_735_bool == 0; // 0xdee Not
	if(var_779_bool == 0) goto Label_3573; // 0xdef JumpB
	sync(); // 0xdf0 Func
	IsDialogEnd(var_735_bool); // 0xdf2 ObjFunc
	goto Label_3566; // 0xdf4 Jump
	
Label_3573:
	var_780_object = Obj(); // 0xdf5 PushV
	var_780_object = var_726_object; // 0xdf6 Mov
	func_4014(); // 0xdf7 NEW_2
	StopDialog(var_732_object); // 0xdf9 Func
	GetReturnValue(var_734_int); // 0xdfb ObjFunc
	var_725_int = var_734_int; // 0xdfd Mov
	return 8; // 0xdfe Return
}


func_4273(var_239_int, var_240_int)
{
	var_241_object = Obj(); var_242_object = Obj(); // 0x10b1 PushV
	CreateIntVector(var_242_object); // 0x10b2 Func
	add(var_239_int); // 0x10b4 ObjFunc
	add(var_240_int); // 0x10b6 ObjFunc
	var_243_int = 3; // 0x10b8 PushI
	SendWorldWndMessage(var_243_int, var_242_object); // 0x10b9 Func
	return 2; // 0x10bb Return
}


func_1714(var_0_bool, var_1_object, var_2_object, var_3_object, var_460_object, var_461_object)
{
	var_0_bool = var_461_object; // 0x6b3 TMov
	var_1_object = var_460_object; // 0x6b4 TMov
	var_3_object = 0; // 0x6b5 TMovB
	var_466_int = 1; // 0x6b6 PushI
	if(var_466_int == 0) goto Label_1756; // 0x6b7 JumpB
	var_467_string = ""; // 0x6b8 PushV
	var_467_string = "Neutral"; // 0x6b9 MovS
	func_1786(var_461_object, var_467_string); // 0x6ba NEW_2
	var_475_int = 525414; // 0x6bc PushI
	SetMessage(var_475_int); // 0x6bd TObjFunc
	ClearReplies(); // 0x6bf TObjFunc
	var_476_bool = 0; // 0x6c1 PushV
	var_476_bool = 0; // 0x6c2 MovB
	var_477_bool = 0; var_478_object = Obj(); // 0x6c3 PushV
	var_478_object = var_1_object; // 0x6c4 MovT
	func_4699(var_478_object); // 0x6c5 NEW_2
	if(var_477_bool == 0) goto Label_1742; // 0x6c7 JumpB
	var_483_bool = 0; var_484_object = Obj(); // 0x6c8 PushV
	var_484_object = var_1_object; // 0x6c9 MovT
	func_4711(var_484_object); // 0x6ca NEW_2
	if(var_483_bool == 0) goto Label_1742; // 0x6cc JumpB
	var_476_bool = 1; // 0x6cd MovB
	
Label_1742:
	if(var_476_bool == 0) goto Label_1748; // 0x6ce JumpB
	var_489_int = 525415; // 0x6cf PushI
	var_490_int = 42567; // 0x6d0 PushI
	var_491_int = 26783; // 0x6d1 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x6d2 TObjFunc
	
Label_1748:
	var_492_int = 525418; // 0x6d4 PushI
	var_493_int = -1; // 0x6d5 PushI
	var_494_int = 26786; // 0x6d6 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x6d7 TObjFunc
	goto Label_1756; // 0x6d9 Jump
	
Label_1756:
	var_495_bool = 0; // 0x6dc PushV
	func_4415(var_495_bool); // 0x6dd NEW_2
	if(var_495_bool == 0) goto Label_1771; // 0x6df JumpB
	
Label_1760:
	lshWaitForAnimEnd(); // 0x6e0 Func
	var_496_object = var_3_object; // 0x6e2 PushT
	if(var_496_object == 0) goto Label_1765; // 0x6e3 JumpB
	goto Label_1770; // 0x6e4 Jump
	
Label_1770:
	goto Label_1785; // 0x6ea Jump
	
Label_1785:
	return 0; // 0x6f9 Return
	
Label_1765:
	var_497_string = ""; // 0x6e5 PushV
	var_497_string = var_2_object; // 0x6e6 MovT
	func_4170(var_497_string); // 0x6e7 NEW_2
	goto Label_1760; // 0x6e9 Jump
	
Label_1771:
	var_498_string = "all"; // 0x6eb PushS
	var_499_string = "idle"; // 0x6ec PushS
	PlayAnimation(var_498_string, var_499_string); // 0x6ed Func
	
Label_1775:
	WaitForAnimEnd(); // 0x6ef Func
	var_500_object = var_3_object; // 0x6f1 PushT
	if(var_500_object == 0) goto Label_1780; // 0x6f2 JumpB
	goto Label_1785; // 0x6f3 Jump
	
Label_1780:
	var_501_string = "all"; // 0x6f4 PushS
	var_502_string = "idle"; // 0x6f5 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x6f6 Func
	goto Label_1775; // 0x6f8 Jump
}


func_4529()
{
	var_47_string = "ook3MladVlad1"; // 0x11b2 PushS
	var_48_int = 1; // 0x11b3 PushI
	SetVariable(var_47_string, var_48_int); // 0x11b4 Func
	return 0; // 0x11b6 Return
}


func_4535()
{
	var_47_string = "ook5MladVlad1"; // 0x11b8 PushS
	var_48_int = 1; // 0x11b9 PushI
	SetVariable(var_47_string, var_48_int); // 0x11ba Func
	return 0; // 0x11bc Return
}


func_4285(var_226_object, var_227_int)
{
	var_228_int = 0; var_229_int = 0; // 0x10bd PushV
	var_230_object = Obj(); var_231_string = ""; var_232_int = 0; // 0x10be PushV
	var_230_object = var_226_object; // 0x10bf Mov
	var_231_string = "money"; // 0x10c0 MovS
	var_232_int = var_227_int; // 0x10c1 Mov
	func_3903(var_231_string, var_232_int); // 0x10c2 NEW_2
	var_236_int = 0; // 0x10c4 PushI
	var_237_bool = var_227_int > var_236_int; // 0x10c5 GT
	if(var_237_bool == 0) goto Label_4303; // 0x10c6 JumpB
	var_238_string = "Money"; // 0x10c7 PushS
	GetInvItemByName(var_229_int, var_238_string); // 0x10c8 Func
	var_239_int = 0; var_240_int = 0; // 0x10ca PushV
	var_239_int = var_229_int; // 0x10cb Mov
	var_240_int = var_227_int; // 0x10cc Mov
	func_4273(var_239_int, var_240_int); // 0x10cd NEW_2
	
Label_4303:
	return 2; // 0x10cf Return
}


func_4541()
{
	func_4893(); // 0x11bf NEW_2
	return 0; // 0x11c1 Return
}


func_4032(var_132_bool, var_133_object)
{
	var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0; // 0xfc0 PushV
	var_141_string = "voice_common"; // 0xfc1 PushS
	GetVariable(var_141_string, var_139_int); // 0xfc2 Func
	var_142_int = var_139_int; // 0xfc4 Push
	if(var_142_int == 0) goto Label_4070; // 0xfc5 JumpB
	var_143_bool = 0; var_144_object = Obj(); // 0xfc6 PushV
	var_144_object = var_133_object; // 0xfc7 Mov
	func_4090(var_144_object); // 0xfc8 NEW_2
	var_173_bool = var_143_bool == 0; // 0xfca Not
	if(var_173_bool == 0) goto Label_4052; // 0xfcb JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0xfcc PushV
	var_175_object = var_133_object; // 0xfcd Mov
	func_4127(var_175_object); // 0xfce NEW_2
	var_209_bool = var_174_bool == 0; // 0xfd0 Not
	if(var_209_bool == 0) goto Label_4052; // 0xfd1 JumpB
	var_132_bool = 0; // 0xfd2 MovB
	return 4; // 0xfd3 Return
	
Label_4052:
	var_210_int = 2; // 0xfd4 PushI
	irand(var_140_int, var_210_int); // 0xfd5 Func
	var_211_int = var_140_int; // 0xfd7 Push
	if(var_211_int == 0) goto Label_4065; // 0xfd8 JumpB
	var_212_string = "voice_common"; // 0xfd9 PushS
	var_213_int = 1; // 0xfda PushI
	var_214_int = var_139_int + var_213_int; // 0xfdb Add
	var_215_int = 3; // 0xfdc PushI
	var_216_int = var_214_int / var_215_int; // 0xfdd Mod
	SetVariable(var_212_string, var_216_int); // 0xfde Func
	goto Label_4069; // 0xfe0 Jump
	
Label_4069:
	goto Label_4088; // 0xfe5 Jump
	
Label_4088:
	var_132_bool = 1; // 0xff8 MovB
	return 4; // 0xff9 Return
	
Label_4065:
	var_217_string = "voice_common"; // 0xfe1 PushS
	var_218_int = 0; // 0xfe2 PushI
	SetVariable(var_217_string, var_218_int); // 0xfe3 Func
	
Label_4070:
	var_219_bool = 0; var_220_object = Obj(); // 0xfe6 PushV
	var_220_object = var_133_object; // 0xfe7 Mov
	func_4127(var_220_object); // 0xfe8 NEW_2
	var_221_bool = var_219_bool == 0; // 0xfea Not
	if(var_221_bool == 0) goto Label_4084; // 0xfeb JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0xfec PushV
	var_223_object = var_133_object; // 0xfed Mov
	func_4090(var_223_object); // 0xfee NEW_2
	var_224_bool = var_222_bool == 0; // 0xff0 Not
	if(var_224_bool == 0) goto Label_4084; // 0xff1 JumpB
	var_132_bool = 0; // 0xff2 MovB
	return 4; // 0xff3 Return
	
Label_4084:
	var_225_string = "voice_common"; // 0xff4 PushS
	var_226_int = 1; // 0xff5 PushI
	SetVariable(var_225_string, var_226_int); // 0xff6 Func
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_4802()
{
	var_185_object = Obj(); var_186_object = Obj(); // 0x12c2 PushV
	var_187_int = 463; // 0x12c3 PushI
	var_188_int = 1; // 0x12c4 PushI
	var_189_int = 527779; // 0x12c5 PushI
	CreateDiaryEntry(var_186_object, var_187_int, var_188_int, var_189_int); // 0x12c6 Func
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0; // 0x12c8 PushV
	var_191_object = var_186_object; // 0x12c9 Mov
	var_192_int = 461; // 0x12ca MovI
	func_4932(var_190_bool, var_191_object, var_192_int); // 0x12cb NEW_2
	return 2; // 0x12cd Return
}


func_4546()
{
	var_47_string = "k6q02"; // 0x11c3 PushS
	var_48_int = 3; // 0x11c4 PushI
	SetVariable(var_47_string, var_48_int); // 0x11c5 Func
	func_4906(); // 0x11c8 NEW_2
	return 0; // 0x11ca Return
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
	func_4376(var_185_int); // 0xe6 NEW_2
	var_162_int = var_185_int; // 0xe7 Mov
	var_198_int = var_162_int; // 0xe9 Push
	if(var_198_int == 0) goto Label_246; // 0xea JumpB
	irand(var_163_int, var_162_int); // 0xeb Func
	var_199_string = "all"; // 0xed PushS
	var_200_string = ""; var_201_int = 0; // 0xee PushV
	var_201_int = var_163_int; // 0xef Mov
	func_4369(var_200_string, var_201_int); // 0xf0 NEW_2
	PlayAnimation(var_199_string, var_200_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_157_string = "ptidle"; // 0xcc MovS
}


func_4555(var_278_object)
{
	var_280_string = "money1000 is given"; // 0x11cc PushS
	Trace(var_280_string); // 0x11cd Func
	var_281_object = Obj(); var_282_int = 0; // 0x11cf PushV
	var_281_object = var_278_object; // 0x11d0 Mov
	var_282_int = 1000; // 0x11d1 MovI
	func_4285(var_281_object, var_282_int); // 0x11d2 NEW_2
	return 0; // 0x11d4 Return
}


func_4815()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x12cf PushV
	var_67_int = 507; // 0x12d0 PushI
	var_68_int = 2; // 0x12d1 PushI
	var_69_int = 529706; // 0x12d2 PushI
	CreateDiaryEntry(var_66_object, var_67_int, var_68_int, var_69_int); // 0x12d3 Func
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; // 0x12d5 PushV
	var_71_object = var_66_object; // 0x12d6 Mov
	var_72_int = -1; // 0x12d7 MovI
	func_4932(var_70_bool, var_71_object, var_72_int); // 0x12d8 NEW_2
	return 2; // 0x12da Return
}


func_4304(var_126_bool, var_127_object, var_128_float)
{
	var_129_bool = var_127_object == 0; // 0x10d1 Not
	if(var_129_bool == 0) goto Label_4309; // 0x10d2 JumpB
	var_126_bool = 0; // 0x10d3 MovB
	return 0; // 0x10d4 Return
	
Label_4309:
	var_130_int = 0; // 0x10d5 PushI
	var_131_bool = var_128_float > var_130_int; // 0x10d6 GT
	if(var_131_bool == 0) goto Label_4316; // 0x10d7 JumpB
	var_132_int = 8; // 0x10d8 PushI
	SendWorldWndMessage(var_132_int); // 0x10d9 Func
	goto Label_4325; // 0x10db Jump
	
Label_4325:
	var_133_float = 0; // 0x10e5 PushV
	var_133_float = var_128_float; // 0x10e6 Mov
	func_4339(var_133_float); // 0x10e7 NEW_2
	var_137_bool = 0; var_138_object = Obj(); var_139_string = ""; var_140_float = 0; var_141_float = 0; var_142_float = 0; // 0x10e9 PushV
	var_138_object = var_127_object; // 0x10ea Mov
	var_139_string = "reputation"; // 0x10eb MovS
	var_140_float = var_128_float; // 0x10ec Mov
	var_141_float = 0; // 0x10ed MovI
	var_142_float = 1; // 0x10ee MovI
	func_3881(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float); // 0x10ef NEW_2
	var_126_bool = 1; // 0x10f1 MovB
	return 0; // 0x10f2 Return
	
Label_4316:
	var_161_int = 0; // 0x10dc PushI
	var_162_bool = var_128_float < var_161_int; // 0x10dd LT
	if(var_162_bool == 0) goto Label_4323; // 0x10de JumpB
	var_163_int = 9; // 0x10df PushI
	SendWorldWndMessage(var_163_int); // 0x10e0 Func
	goto Label_4325; // 0x10e2 Jump
	
Label_4323:
	var_126_bool = 0; // 0x10e3 MovB
	return 0; // 0x10e4 Return
}


func_2770(var_0_bool, var_590_int, var_591_object)
{
	var_593_object = Obj(); var_594_bool = 0; var_595_int = 0; var_596_bool = 0; var_597_object = Obj(); var_598_bool = 0; var_599_int = 0; var_600_bool = 0; // 0xad2 PushV
	var_0_bool = var_591_object; // 0xad3 TMov
	var_601_bool = 0; var_602_object = Obj(); var_603_float = 0; // 0xad4 PushV
	var_602_object = var_591_object; // 0xad5 Mov
	var_603_float = 70.0; // 0xad6 MovF
	func_3945(var_602_object, var_603_float); // 0xad7 NEW_2
	var_604_bool = var_601_bool == 0; // 0xad9 Not
	if(var_604_bool == 0) goto Label_2781; // 0xada JumpB
	var_590_int = -2; // 0xadb MovI
	return 8; // 0xadc Return
	
Label_2781:
	CreateDialog(var_597_object); // 0xadd Func
	var_605_int = 0; // 0xadf PushV
	func_4409(var_605_int); // 0xae0 NEW_2
	SetNPCName(var_605_int); // 0xae2 ObjFunc
	var_606_int = 0; // 0xae4 PushV
	func_4407(var_606_int); // 0xae5 NEW_2
	SetNPCDescription(var_606_int); // 0xae7 ObjFunc
	var_607_string = ""; // 0xae9 PushV
	func_4411(var_607_string); // 0xaea NEW_2
	SetPhoto(var_607_string); // 0xaec ObjFunc
	var_608_string = ""; // 0xaee PushV
	func_4413(var_608_string); // 0xaef NEW_2
	SetPhoto2(var_608_string); // 0xaf1 ObjFunc
	var_609_int = 0; // 0xaf3 PushV
	func_5010(var_609_int); // 0xaf4 NEW_2
	SetPlayerName(var_609_int); // 0xaf6 ObjFunc
	var_599_int = -1; // 0xaf8 MovI
	IsOverrideActive(var_598_bool); // 0xaf9 Func
	var_610_bool = var_598_bool; // 0xafb Push
	if(var_610_bool == 0) goto Label_2815; // 0xafc JumpB
	var_590_int = -2; // 0xafd MovI
	return 8; // 0xafe Return
	
Label_2815:
	DoDialog(var_597_object); // 0xaff Func
	var_611_bool = 0; var_612_object = Obj(); // 0xb01 PushV
	var_613_object = Obj(); // 0xb02 PushV
	func_4223(var_613_object); // 0xb03 NEW_2
	var_612_object = var_613_object; // 0xb04 Mov
	func_4032(var_611_bool, var_612_object); // 0xb06 NEW_2
	var_614_object = Obj(); var_615_object = Obj(); // 0xb08 PushV
	var_614_object = var_591_object; // 0xb09 Mov
	var_615_object = var_597_object; // 0xb0a Mov
	TaskCall(13); // 0xb0b TaskCall
	func_2851(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object); // 0xb0c NEW_2
	TaskReturn(); // 0xb0d TaskReturn
	IsDialogEnd(var_600_bool); // 0xb0f ObjFunc
	
Label_2833:
	var_662_bool = var_600_bool == 0; // 0xb11 Not
	if(var_662_bool == 0) goto Label_2840; // 0xb12 JumpB
	sync(); // 0xb13 Func
	IsDialogEnd(var_600_bool); // 0xb15 ObjFunc
	goto Label_2833; // 0xb17 Jump
	
Label_2840:
	var_663_object = Obj(); // 0xb18 PushV
	var_663_object = var_591_object; // 0xb19 Mov
	func_4014(); // 0xb1a NEW_2
	StopDialog(var_597_object); // 0xb1c Func
	GetReturnValue(var_599_int); // 0xb1e ObjFunc
	var_590_int = var_599_int; // 0xb20 Mov
	return 8; // 0xb21 Return
}


func_4565(var_223_object)
{
	var_225_string = "money500 is given"; // 0x11d6 PushS
	Trace(var_225_string); // 0x11d7 Func
	var_226_object = Obj(); var_227_int = 0; // 0x11d9 PushV
	var_226_object = var_223_object; // 0x11da Mov
	var_227_int = 500; // 0x11db MovI
	func_4285(var_226_object, var_227_int); // 0x11dc NEW_2
	return 0; // 0x11de Return
}


func_2262(var_2_object, var_234_string)
{
	var_235_bool = 0; // 0x8d7 PushV
	func_4415(var_235_bool); // 0x8d8 NEW_2
	var_236_bool = var_235_bool == 0; // 0x8da Not
	if(var_236_bool == 0) goto Label_2269; // 0x8db JumpB
	return 0; // 0x8dc Return
	
Label_2269:
	var_237_bool = var_234_string == var_2_object; // 0x8dd Eq
	if(var_237_bool == 0) goto Label_2272; // 0x8de JumpB
	return 0; // 0x8df Return
	
Label_2272:
	var_238_string = ""; var_239_bool = 0; // 0x8e0 PushV
	var_238_string = var_234_string; // 0x8e1 Mov
	var_240_string = ""; // 0x8e2 PushS
	var_241_bool = var_234_string == var_240_string; // 0x8e3 Eq
	if(var_241_bool == 0) goto Label_2279; // 0x8e4 JumpB
	var_239_bool = 0; // 0x8e5 MovB
	goto Label_2280; // 0x8e6 Jump
	
Label_2280:
	func_4186(var_238_string, var_239_bool); // 0x8e8 NEW_2
	var_2_object = var_234_string; // 0x8ea TMov
	return 0; // 0x8eb Return
	
Label_2279:
	var_239_bool = 1; // 0x8e7 MovB
}


func_2517(var_2_object, var_538_string)
{
	var_539_bool = 0; // 0x9d6 PushV
	func_4415(var_539_bool); // 0x9d7 NEW_2
	var_540_bool = var_539_bool == 0; // 0x9d9 Not
	if(var_540_bool == 0) goto Label_2524; // 0x9da JumpB
	return 0; // 0x9db Return
	
Label_2524:
	var_541_bool = var_538_string == var_2_object; // 0x9dc Eq
	if(var_541_bool == 0) goto Label_2527; // 0x9dd JumpB
	return 0; // 0x9de Return
	
Label_2527:
	var_542_string = ""; var_543_bool = 0; // 0x9df PushV
	var_542_string = var_538_string; // 0x9e0 Mov
	var_544_string = ""; // 0x9e1 PushS
	var_545_bool = var_538_string == var_544_string; // 0x9e2 Eq
	if(var_545_bool == 0) goto Label_2534; // 0x9e3 JumpB
	var_543_bool = 0; // 0x9e4 MovB
	goto Label_2535; // 0x9e5 Jump
	
Label_2535:
	func_4186(var_542_string, var_543_bool); // 0x9e7 NEW_2
	var_2_object = var_538_string; // 0x9e9 TMov
	return 0; // 0x9ea Return
	
Label_2534:
	var_543_bool = 1; // 0x9e6 MovB
}


func_3801()
{
	var_63_string = ""; var_64_string = ""; // 0xed9 PushV
	var_65_string = "loc"; // 0xeda PushS
	GetProperty(var_65_string, var_64_string); // 0xedb Func
	var_66_string = GlobalVars[0]; // 0xedd PushGE
	var_66_string = var_64_string; // 0xede Mov
	GlobalVars[0] = var_66_string; // 0xedf PopGE
	return 2; // 0xee0 Return
}


func_4828()
{
	var_211_object = Obj(); var_212_object = Obj(); // 0x12dc PushV
	var_213_int = 513; // 0x12dd PushI
	var_214_int = 2; // 0x12de PushI
	var_215_int = 529712; // 0x12df PushI
	CreateDiaryEntry(var_212_object, var_213_int, var_214_int, var_215_int); // 0x12e0 Func
	var_216_bool = 0; var_217_object = Obj(); var_218_int = 0; // 0x12e2 PushV
	var_217_object = var_212_object; // 0x12e3 Mov
	var_218_int = 507; // 0x12e4 MovI
	func_4932(var_216_bool, var_217_object, var_218_int); // 0x12e5 NEW_2
	return 2; // 0x12e7 Return
}


func_4575()
{
	var_246_string = "playsound"; // 0x11e0 PushS
	var_247_string = "givemoney"; // 0x11e1 PushS
	TriggerWorld(var_246_string, var_247_string); // 0x11e2 Func
	return 0; // 0x11e4 Return
}


func_3809(var_0_bool, var_1_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xee1 PushV
	var_87_string = "all"; // 0xee2 PushS
	var_88_string = "walk_stopl"; // 0xee3 PushS
	GetAnimationOffset(var_85_cvector, var_87_string, var_88_string); // 0xee4 Func
	var_89_string = "all"; // 0xee6 PushS
	var_90_string = "walk_stopr"; // 0xee7 PushS
	GetAnimationOffset(var_86_cvector, var_89_string, var_90_string); // 0xee8 Func
	var_91_float = GetByIndex(var_85_cvector, 2); // 0xeea PushE
	var_92_float = GetByIndex(var_86_cvector, 2); // 0xeeb PushE
	var_93_int = var_91_float + var_92_float; // 0xeec Add
	var_94_float = 2.0; // 0xeed PushF
	var_0_bool = var_93_int / var_93_int; // 0xeee Div2
	var_95_float = 0; var_96_float = 0; // 0xeef PushV
	var_97_float = GetByIndex(var_85_cvector, 2); // 0xef0 PushE
	var_96_float = var_97_float - var_0_bool; // 0xef1 Sub2
	func_4239(var_95_float, var_96_float); // 0xef2 NEW_2
	var_100_int = 40; // 0xef4 PushI
	var_1_object = var_95_float + var_100_int; // 0xef5 Add2
	return 4; // 0xef6 Return
}


func_4581(var_166_object)
{
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0; // 0x11e6 PushV
	var_169_object = var_166_object; // 0x11e7 Mov
	var_170_float = -0.02; // 0x11e8 MovF
	func_4304(var_168_bool, var_169_object, var_170_float); // 0x11e9 NEW_2
	return 0; // 0x11eb Return
}


func_4841()
{
	var_254_object = Obj(); var_255_object = Obj(); // 0x12e9 PushV
	var_256_int = 514; // 0x12ea PushI
	var_257_int = 2; // 0x12eb PushI
	var_258_int = 529713; // 0x12ec PushI
	CreateDiaryEntry(var_255_object, var_256_int, var_257_int, var_258_int); // 0x12ed Func
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0; // 0x12ef PushV
	var_260_object = var_255_object; // 0x12f0 Mov
	var_261_int = 507; // 0x12f1 MovI
	func_4932(var_259_bool, var_260_object, var_261_int); // 0x12f2 NEW_2
	return 2; // 0x12f4 Return
}


func_4588(var_299_object)
{
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0; // 0x11ed PushV
	var_302_object = var_299_object; // 0x11ee Mov
	var_303_float = 0.02; // 0x11ef MovF
	func_4304(var_301_bool, var_302_object, var_303_float); // 0x11f0 NEW_2
	return 0; // 0x11f2 Return
}


func_4339(var_133_float)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x10f3 PushV
	CreateFloatVector(var_135_object); // 0x10f4 Func
	add(var_133_float); // 0x10f6 ObjFunc
	var_136_int = 16; // 0x10f8 PushI
	SendWorldWndMessage(var_136_int, var_135_object); // 0x10f9 Func
	return 2; // 0x10fb Return
}


func_4595()
{
	var_80_string = "ook5MladVlad2"; // 0x11f4 PushS
	var_81_int = 1; // 0x11f5 PushI
	SetVariable(var_80_string, var_81_int); // 0x11f6 Func
	return 0; // 0x11f8 Return
}


func_4854()
{
	var_270_object = Obj(); var_271_object = Obj(); // 0x12f6 PushV
	var_272_int = 515; // 0x12f7 PushI
	var_273_int = 2; // 0x12f8 PushI
	var_274_int = 529714; // 0x12f9 PushI
	CreateDiaryEntry(var_271_object, var_272_int, var_273_int, var_274_int); // 0x12fa Func
	var_275_bool = 0; var_276_object = Obj(); var_277_int = 0; // 0x12fc PushV
	var_276_object = var_271_object; // 0x12fd Mov
	var_277_int = 507; // 0x12fe MovI
	func_4932(var_275_bool, var_276_object, var_277_int); // 0x12ff NEW_2
	return 2; // 0x1301 Return
}


func_4601()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x11fa PushV
	var_101_object = Obj(); // 0x11fb PushV
	func_4960(var_101_object); // 0x11fc NEW_2
	var_98_object = var_101_object; // 0x11fd Mov
	var_99_string = "pt_map_anna"; // 0x11ff MovS
	var_100_float = 2; // 0x1200 MovI
	func_4977(var_98_object, var_99_string, var_100_float); // 0x1201 NEW_2
	var_121_object = Obj(); // 0x1203 PushV
	func_4960(var_121_object); // 0x1204 NEW_2
	ShowMap(var_121_object); // 0x1206 ObjFunc
	return 0; // 0x1208 Return
}


func_1786(var_2_object, var_467_string)
{
	var_468_bool = 0; // 0x6fb PushV
	func_4415(var_468_bool); // 0x6fc NEW_2
	var_469_bool = var_468_bool == 0; // 0x6fe Not
	if(var_469_bool == 0) goto Label_1793; // 0x6ff JumpB
	return 0; // 0x700 Return
	
Label_1793:
	var_470_bool = var_467_string == var_2_object; // 0x701 Eq
	if(var_470_bool == 0) goto Label_1796; // 0x702 JumpB
	return 0; // 0x703 Return
	
Label_1796:
	var_471_string = ""; var_472_bool = 0; // 0x704 PushV
	var_471_string = var_467_string; // 0x705 Mov
	var_473_string = ""; // 0x706 PushS
	var_474_bool = var_467_string == var_473_string; // 0x707 Eq
	if(var_474_bool == 0) goto Label_1803; // 0x708 JumpB
	var_472_bool = 0; // 0x709 MovB
	goto Label_1804; // 0x70a Jump
	
Label_1804:
	func_4186(var_471_string, var_472_bool); // 0x70c NEW_2
	var_2_object = var_467_string; // 0x70e TMov
	return 0; // 0x70f Return
	
Label_1803:
	var_472_bool = 1; // 0x70b MovB
}


func_4349(var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x10fd PushV
	GetGameTime(var_64_float); // 0x10fe Func
	var_62_float = var_64_float; // 0x1100 Mov
	return 2; // 0x1101 Return
}


