task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_0_bool = 1; // 0x38 TMovB
	func_145(); // 0x3a NEW_2
	func_1691(); // 0x3d NEW_2
	TaskCall(0); // 0x40 TaskCall
	func_0(); // 0x41 NEW_2
	TaskReturn(); // 0x42 TaskReturn
	return 0; // 0x44 Return
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0; // 0x45 PushV
	IsOverrideActive(var_11_bool); // 0x46 Func
	var_12_bool = var_11_bool == 0; // 0x48 Not
	if(var_12_bool == 0) goto Label_88; // 0x49 JumpB
	func_145(); // 0x4b NEW_2
	EventDisable(0); // 0x4d EventDisable
	var_13_bool = 0; var_14_object = Obj(); // 0x4e PushV
	var_14_object = var_9_int; // 0x4f Mov
	func_1393(var_14_object); // 0x50 NEW_2
	EventEnable(0); // 0x52 EventEnable
	var_27_object = Obj(); // 0x53 PushV
	var_27_object = var_9_int; // 0x54 Mov
	func_2022(var_27_object); // 0x55 NEW_2
	var_0_bool = 0; // 0x57 TMovB
	
Label_88:
	return 2; // 0x58 Return
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int, var_10_object, var_11_object, var_31_object)
	{
	var_32_bool = 0; var_33_bool = 0; // 0x59 PushV
	IsPlayerActor(var_31_object, var_33_bool); // 0x5a Func
	var_34_bool = var_33_bool; // 0x5c Push
	if(var_34_bool == 0) goto Label_108; // 0x5d JumpB
	func_145(); // 0x5f NEW_2
	var_35_object = Obj(); // 0x61 PushV
	var_35_object = var_31_object; // 0x62 Mov
	TaskCall(2); // 0x63 TaskCall
	func_148(var_35_object); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_0_bool = 0; // 0x67 TMovB
	var_49_int = 20; // 0x68 PushI
	var_50_float = 10.0; // 0x69 PushF
	SetTimer(var_49_int, var_50_float); // 0x6a Func
	
Label_108:
	return 2; // 0x6c Return
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x6d PushV
	var_12_int = 20; // 0x6e PushI
	var_13_bool = var_9_int == var_12_int; // 0x6f Eq
	if(var_13_bool == 0) goto Label_118; // 0x70 JumpB
	var_0_bool = 1; // 0x71 TMovB
	var_14_int = 20; // 0x72 PushI
	KillTimer(var_14_int); // 0x73 Func
	goto Label_144; // 0x75 Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_118:
	var_15_int = 21; // 0x76 PushI
	var_16_bool = var_9_int == var_15_int; // 0x77 Eq
	if(var_16_bool == 0) goto Label_144; // 0x78 JumpB
	var_17_bool = var_0_bool; // 0x79 PushT
	if(var_17_bool == 0) goto Label_144; // 0x7a JumpB
	var_18_string = "player"; // 0x7b PushS
	FindActor(var_11_object, var_18_string); // 0x7c Func
	var_19_bool = 0; // 0x7e PushV
	var_19_bool = 0; // 0x7f MovB
	var_20_object = var_11_object; // 0x80 Push
	if(var_20_object == 0) goto Label_138; // 0x81 JumpB
	var_21_float = 0; var_22_object = Obj(); // 0x82 PushV
	var_22_object = var_11_object; // 0x83 Mov
	func_1368(var_22_object); // 0x84 NEW_2
	var_29_float = 62500.0; // 0x86 PushF
	var_30_bool = var_21_float <= var_29_float; // 0x87 LE
	if(var_30_bool == 0) goto Label_138; // 0x88 JumpB
	var_19_bool = 1; // 0x89 MovB
	
Label_138:
	if(var_19_bool == 0) goto Label_143; // 0x8a JumpB
	var_31_object = Obj(); // 0x8b PushV
	var_31_object = var_11_object; // 0x8c Mov
	func_89(); // 0x8d NEW_2
	
Label_143:
	var_11_object = 0; // 0x8f SetNull
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_193(); // 0xa3 NEW_2
	func_1691(); // 0xa6 NEW_2
	TaskCall(0); // 0xa9 TaskCall
	func_0(); // 0xaa NEW_2
	TaskReturn(); // 0xab TaskReturn
	return 0; // 0xad Return
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0; // 0xae PushV
	IsOverrideActive(var_11_bool); // 0xaf Func
	var_12_bool = var_11_bool == 0; // 0xb1 Not
	if(var_12_bool == 0) goto Label_192; // 0xb2 JumpB
	func_193(); // 0xb4 NEW_2
	EventDisable(0); // 0xb6 EventDisable
	var_13_bool = 0; var_14_object = Obj(); // 0xb7 PushV
	var_14_object = var_9_int; // 0xb8 Mov
	func_1393(var_14_object); // 0xb9 NEW_2
	EventEnable(0); // 0xbb EventEnable
	var_27_object = Obj(); // 0xbc PushV
	var_27_object = var_9_int; // 0xbd Mov
	func_2022(var_27_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_1691(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_float, var_9_float, var_10_int)
{
	var_11_int = 1; // 0x211 PushI
	if(var_11_int == 0) goto Label_1219; // 0x212 JumpB
	func_1536(); // 0x214 NEW_2
	var_13_int = 13144; // 0x216 PushI
	var_14_bool = var_10_int == var_13_int; // 0x217 Eq
	if(var_14_bool == 0) goto Label_552; // 0x218 JumpB
	var_15_object = Obj(); var_16_object = Obj(); // 0x219 PushV
	var_15_object = var_1_object; // 0x21a MovT
	var_16_object = var_0_bool; // 0x21b MovT
	func_1724(); // 0x21c NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x21e PushV
	var_58_object = var_1_object; // 0x21f MovT
	var_59_object = var_0_bool; // 0x220 MovT
	func_1699(var_59_object); // 0x221 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x223 PushV
	var_79_object = var_1_object; // 0x224 MovT
	var_80_object = var_0_bool; // 0x225 MovT
	func_1709(); // 0x226 NEW_2
	
Label_552:
	var_83_int = 16800; // 0x228 PushI
	var_84_bool = var_10_int == var_83_int; // 0x229 Eq
	if(var_84_bool == 0) goto Label_560; // 0x22a JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x22b PushV
	var_85_object = var_1_object; // 0x22c MovT
	var_86_object = var_0_bool; // 0x22d MovT
	func_1715(); // 0x22e NEW_2
	
Label_560:
	var_97_int = 13151; // 0x230 PushI
	var_98_bool = var_10_int == var_97_int; // 0x231 Eq
	if(var_98_bool == 0) goto Label_568; // 0x232 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x233 PushV
	var_99_object = var_1_object; // 0x234 MovT
	var_100_object = var_0_bool; // 0x235 MovT
	func_1715(); // 0x236 NEW_2
	
Label_568:
	var_101_int = 16809; // 0x238 PushI
	var_102_bool = var_10_int == var_101_int; // 0x239 Eq
	if(var_102_bool == 0) goto Label_576; // 0x23a JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x23b PushV
	var_103_object = var_1_object; // 0x23c MovT
	var_104_object = var_0_bool; // 0x23d MovT
	func_1715(); // 0x23e NEW_2
	
Label_576:
	var_105_int = 13661; // 0x240 PushI
	var_106_bool = var_10_int == var_105_int; // 0x241 Eq
	if(var_106_bool == 0) goto Label_594; // 0x242 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x243 PushV
	var_107_object = var_1_object; // 0x244 MovT
	var_108_object = var_0_bool; // 0x245 MovT
	func_1724(); // 0x246 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x248 PushV
	var_109_object = var_1_object; // 0x249 MovT
	var_110_object = var_0_bool; // 0x24a MovT
	func_1699(var_110_object); // 0x24b NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0x24d PushV
	var_111_object = var_1_object; // 0x24e MovT
	var_112_object = var_0_bool; // 0x24f MovT
	func_1709(); // 0x250 NEW_2
	
Label_594:
	var_113_int = 13170; // 0x252 PushI
	var_114_bool = var_10_int == var_113_int; // 0x253 Eq
	if(var_114_bool == 0) goto Label_612; // 0x254 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x255 PushV
	var_115_object = var_1_object; // 0x256 MovT
	var_116_object = var_0_bool; // 0x257 MovT
	func_1810(); // 0x258 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x25a PushV
	var_119_object = var_1_object; // 0x25b MovT
	var_120_object = var_0_bool; // 0x25c MovT
	func_1816(var_120_object); // 0x25d NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x25f PushV
	var_124_object = var_1_object; // 0x260 MovT
	var_125_object = var_0_bool; // 0x261 MovT
	func_1709(); // 0x262 NEW_2
	
Label_612:
	var_126_int = 13154; // 0x264 PushI
	var_127_bool = var_10_int == var_126_int; // 0x265 Eq
	if(var_127_bool == 0) goto Label_620; // 0x266 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x267 PushV
	var_128_object = var_1_object; // 0x268 MovT
	var_129_object = var_0_bool; // 0x269 MovT
	func_1804(); // 0x26a NEW_2
	
Label_620:
	var_132_int = 13172; // 0x26c PushI
	var_133_bool = var_10_int == var_132_int; // 0x26d Eq
	if(var_133_bool == 0) goto Label_628; // 0x26e JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x26f PushV
	var_134_object = var_1_object; // 0x270 MovT
	var_135_object = var_0_bool; // 0x271 MovT
	func_1753(); // 0x272 NEW_2
	
Label_628:
	var_165_int = 16820; // 0x274 PushI
	var_166_bool = var_10_int == var_165_int; // 0x275 Eq
	if(var_166_bool == 0) goto Label_636; // 0x276 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x277 PushV
	var_167_object = var_1_object; // 0x278 MovT
	var_168_object = var_0_bool; // 0x279 MovT
	func_1753(); // 0x27a NEW_2
	
Label_636:
	var_169_int = 13133; // 0x27c PushI
	var_170_bool = var_9_float == var_169_int; // 0x27d Eq
	if(var_170_bool == 0) goto Label_751; // 0x27e JumpB
	var_171_bool = 0; // 0x27f PushV
	var_171_bool = 0; // 0x280 MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x281 PushV
	var_173_object = var_1_object; // 0x282 MovT
	func_1826(var_173_object); // 0x283 NEW_2
	if(var_172_bool == 0) goto Label_652; // 0x285 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x286 PushV
	var_181_object = var_1_object; // 0x287 MovT
	func_1838(var_181_object); // 0x288 NEW_2
	if(var_180_bool == 0) goto Label_652; // 0x28a JumpB
	var_171_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_171_bool == 0) goto Label_678; // 0x28c JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x28d PushV
	var_186_object = var_1_object; // 0x28e MovT
	var_187_object = var_0_bool; // 0x28f MovT
	func_1747(); // 0x290 NEW_2
	var_190_string = ""; // 0x292 PushV
	var_190_string = "Neutral"; // 0x293 MovS
	func_506(var_10_int, var_190_string); // 0x294 NEW_2
	var_207_int = 511917; // 0x296 PushI
	SetMessage(var_207_int); // 0x297 TObjFunc
	ClearReplies(); // 0x299 TObjFunc
	var_208_int = 515734; // 0x29b PushI
	var_209_int = 16793; // 0x29c PushI
	var_210_int = 16792; // 0x29d PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x29e TObjFunc
	var_211_int = 515732; // 0x2a0 PushI
	var_212_int = 16791; // 0x2a1 PushI
	var_213_int = 16790; // 0x2a2 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_214_string = ""; // 0x2a6 PushV
	var_214_string = "Neutral"; // 0x2a7 MovS
	func_506(var_10_int, var_214_string); // 0x2a8 NEW_2
	var_215_int = 511935; // 0x2aa PushI
	SetMessage(var_215_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_216_bool = 0; var_217_object = Obj(); // 0x2af PushV
	var_217_object = var_1_object; // 0x2b0 MovT
	func_1826(var_217_object); // 0x2b1 NEW_2
	if(var_216_bool == 0) goto Label_697; // 0x2b3 JumpB
	var_218_int = 512489; // 0x2b4 PushI
	var_219_int = 13660; // 0x2b5 PushI
	var_220_int = 13658; // 0x2b6 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x2b7 TObjFunc
	
Label_697:
	var_221_bool = 0; // 0x2b9 PushV
	var_221_bool = 0; // 0x2ba MovB
	var_222_bool = 0; // 0x2bb PushV
	var_222_bool = 0; // 0x2bc MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x2bd PushV
	var_224_object = var_1_object; // 0x2be MovT
	func_1850(var_224_object); // 0x2bf NEW_2
	if(var_223_bool == 0) goto Label_713; // 0x2c1 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x2c2 PushV
	var_230_object = var_1_object; // 0x2c3 MovT
	func_1862(var_230_object); // 0x2c4 NEW_2
	var_235_bool = var_229_bool == 0; // 0x2c6 Not
	if(var_235_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_222_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_222_bool == 0) goto Label_720; // 0x2c9 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x2ca PushV
	var_237_object = var_1_object; // 0x2cb MovT
	func_1886(var_237_object); // 0x2cc NEW_2
	if(var_236_bool == 0) goto Label_720; // 0x2ce JumpB
	var_221_bool = 1; // 0x2cf MovB
	
Label_720:
	if(var_221_bool == 0) goto Label_726; // 0x2d0 JumpB
	var_242_int = 511936; // 0x2d1 PushI
	var_243_int = 13155; // 0x2d2 PushI
	var_244_int = 13153; // 0x2d3 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x2d4 TObjFunc
	
Label_726:
	var_245_bool = 0; // 0x2d6 PushV
	var_245_bool = 0; // 0x2d7 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x2d8 PushV
	var_247_object = var_1_object; // 0x2d9 MovT
	func_1862(var_247_object); // 0x2da NEW_2
	if(var_246_bool == 0) goto Label_739; // 0x2dc JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x2dd PushV
	var_249_object = var_1_object; // 0x2de MovT
	func_1874(var_249_object); // 0x2df NEW_2
	if(var_248_bool == 0) goto Label_739; // 0x2e1 JumpB
	var_245_bool = 1; // 0x2e2 MovB
	
Label_739:
	if(var_245_bool == 0) goto Label_745; // 0x2e3 JumpB
	var_254_int = 511937; // 0x2e4 PushI
	var_255_int = 13156; // 0x2e5 PushI
	var_256_int = 13154; // 0x2e6 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x2e7 TObjFunc
	
Label_745:
	var_257_int = 512490; // 0x2e9 PushI
	var_258_int = -1; // 0x2ea PushI
	var_259_int = 13659; // 0x2eb PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x2ec TObjFunc
	return 0; // 0x2ee Return
	
Label_751:
	var_260_int = 13156; // 0x2ef PushI
	var_261_bool = var_9_float == var_260_int; // 0x2f0 Eq
	if(var_261_bool == 0) goto Label_769; // 0x2f1 JumpB
	var_262_string = ""; // 0x2f2 PushV
	var_262_string = "Neutral"; // 0x2f3 MovS
	func_506(var_10_int, var_262_string); // 0x2f4 NEW_2
	var_263_int = 511939; // 0x2f6 PushI
	SetMessage(var_263_int); // 0x2f7 TObjFunc
	ClearReplies(); // 0x2f9 TObjFunc
	var_264_int = 511947; // 0x2fb PushI
	var_265_int = 13165; // 0x2fc PushI
	var_266_int = 13164; // 0x2fd PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x2fe TObjFunc
	return 0; // 0x300 Return
	
Label_769:
	var_267_int = 13165; // 0x301 PushI
	var_268_bool = var_9_float == var_267_int; // 0x302 Eq
	if(var_268_bool == 0) goto Label_792; // 0x303 JumpB
	var_269_string = ""; // 0x304 PushV
	var_269_string = "Neutral"; // 0x305 MovS
	func_506(var_10_int, var_269_string); // 0x306 NEW_2
	var_270_int = 511948; // 0x308 PushI
	SetMessage(var_270_int); // 0x309 TObjFunc
	ClearReplies(); // 0x30b TObjFunc
	var_271_int = 511949; // 0x30d PushI
	var_272_int = 13167; // 0x30e PushI
	var_273_int = 13166; // 0x30f PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x310 TObjFunc
	var_274_int = 515752; // 0x312 PushI
	var_275_int = 13167; // 0x313 PushI
	var_276_int = 16816; // 0x314 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x315 TObjFunc
	return 0; // 0x317 Return
	
Label_792:
	var_277_int = 13167; // 0x318 PushI
	var_278_bool = var_9_float == var_277_int; // 0x319 Eq
	if(var_278_bool == 0) goto Label_810; // 0x31a JumpB
	var_279_string = ""; // 0x31b PushV
	var_279_string = "Neutral"; // 0x31c MovS
	func_506(var_10_int, var_279_string); // 0x31d NEW_2
	var_280_int = 511950; // 0x31f PushI
	SetMessage(var_280_int); // 0x320 TObjFunc
	ClearReplies(); // 0x322 TObjFunc
	var_281_int = 511951; // 0x324 PushI
	var_282_int = 13171; // 0x325 PushI
	var_283_int = 13168; // 0x326 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x327 TObjFunc
	return 0; // 0x329 Return
	
Label_810:
	var_284_int = 13171; // 0x32a PushI
	var_285_bool = var_9_float == var_284_int; // 0x32b Eq
	if(var_285_bool == 0) goto Label_833; // 0x32c JumpB
	var_286_string = ""; // 0x32d PushV
	var_286_string = "Neutral"; // 0x32e MovS
	func_506(var_10_int, var_286_string); // 0x32f NEW_2
	var_287_int = 511954; // 0x331 PushI
	SetMessage(var_287_int); // 0x332 TObjFunc
	ClearReplies(); // 0x334 TObjFunc
	var_288_int = 511955; // 0x336 PushI
	var_289_int = -1; // 0x337 PushI
	var_290_int = 13172; // 0x338 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x339 TObjFunc
	var_291_int = 515754; // 0x33b PushI
	var_292_int = -1; // 0x33c PushI
	var_293_int = 16820; // 0x33d PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x33e TObjFunc
	return 0; // 0x340 Return
	
Label_833:
	var_294_int = 13155; // 0x341 PushI
	var_295_bool = var_9_float == var_294_int; // 0x342 Eq
	if(var_295_bool == 0) goto Label_856; // 0x343 JumpB
	var_296_string = ""; // 0x344 PushV
	var_296_string = "Neutral"; // 0x345 MovS
	func_506(var_10_int, var_296_string); // 0x346 NEW_2
	var_297_int = 511938; // 0x348 PushI
	SetMessage(var_297_int); // 0x349 TObjFunc
	ClearReplies(); // 0x34b TObjFunc
	var_298_int = 511940; // 0x34d PushI
	var_299_int = 13158; // 0x34e PushI
	var_300_int = 13157; // 0x34f PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x350 TObjFunc
	var_301_int = 515753; // 0x352 PushI
	var_302_int = 13160; // 0x353 PushI
	var_303_int = 16818; // 0x354 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x355 TObjFunc
	return 0; // 0x357 Return
	
Label_856:
	var_304_int = 13158; // 0x358 PushI
	var_305_bool = var_9_float == var_304_int; // 0x359 Eq
	if(var_305_bool == 0) goto Label_879; // 0x35a JumpB
	var_306_string = ""; // 0x35b PushV
	var_306_string = "Neutral"; // 0x35c MovS
	func_506(var_10_int, var_306_string); // 0x35d NEW_2
	var_307_int = 511941; // 0x35f PushI
	SetMessage(var_307_int); // 0x360 TObjFunc
	ClearReplies(); // 0x362 TObjFunc
	var_308_int = 511942; // 0x364 PushI
	var_309_int = 13160; // 0x365 PushI
	var_310_int = 13159; // 0x366 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x367 TObjFunc
	var_311_int = 515749; // 0x369 PushI
	var_312_int = 13160; // 0x36a PushI
	var_313_int = 16811; // 0x36b PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x36c TObjFunc
	return 0; // 0x36e Return
	
Label_879:
	var_314_int = 13160; // 0x36f PushI
	var_315_bool = var_9_float == var_314_int; // 0x370 Eq
	if(var_315_bool == 0) goto Label_897; // 0x371 JumpB
	var_316_string = ""; // 0x372 PushV
	var_316_string = "Neutral"; // 0x373 MovS
	func_506(var_10_int, var_316_string); // 0x374 NEW_2
	var_317_int = 511943; // 0x376 PushI
	SetMessage(var_317_int); // 0x377 TObjFunc
	ClearReplies(); // 0x379 TObjFunc
	var_318_int = 511944; // 0x37b PushI
	var_319_int = 13162; // 0x37c PushI
	var_320_int = 13161; // 0x37d PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x37e TObjFunc
	return 0; // 0x380 Return
	
Label_897:
	var_321_int = 13162; // 0x381 PushI
	var_322_bool = var_9_float == var_321_int; // 0x382 Eq
	if(var_322_bool == 0) goto Label_915; // 0x383 JumpB
	var_323_string = ""; // 0x384 PushV
	var_323_string = "Neutral"; // 0x385 MovS
	func_506(var_10_int, var_323_string); // 0x386 NEW_2
	var_324_int = 511945; // 0x388 PushI
	SetMessage(var_324_int); // 0x389 TObjFunc
	ClearReplies(); // 0x38b TObjFunc
	var_325_int = 511946; // 0x38d PushI
	var_326_int = 13169; // 0x38e PushI
	var_327_int = 13163; // 0x38f PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x390 TObjFunc
	return 0; // 0x392 Return
	
Label_915:
	var_328_int = 13169; // 0x393 PushI
	var_329_bool = var_9_float == var_328_int; // 0x394 Eq
	if(var_329_bool == 0) goto Label_933; // 0x395 JumpB
	var_330_string = ""; // 0x396 PushV
	var_330_string = "Neutral"; // 0x397 MovS
	func_506(var_10_int, var_330_string); // 0x398 NEW_2
	var_331_int = 511952; // 0x39a PushI
	SetMessage(var_331_int); // 0x39b TObjFunc
	ClearReplies(); // 0x39d TObjFunc
	var_332_int = 511953; // 0x39f PushI
	var_333_int = -1; // 0x3a0 PushI
	var_334_int = 13170; // 0x3a1 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x3a2 TObjFunc
	return 0; // 0x3a4 Return
	
Label_933:
	var_335_int = 13660; // 0x3a5 PushI
	var_336_bool = var_9_float == var_335_int; // 0x3a6 Eq
	if(var_336_bool == 0) goto Label_951; // 0x3a7 JumpB
	var_337_string = ""; // 0x3a8 PushV
	var_337_string = "Neutral"; // 0x3a9 MovS
	func_506(var_10_int, var_337_string); // 0x3aa NEW_2
	var_338_int = 512491; // 0x3ac PushI
	SetMessage(var_338_int); // 0x3ad TObjFunc
	ClearReplies(); // 0x3af TObjFunc
	var_339_int = 512492; // 0x3b1 PushI
	var_340_int = -1; // 0x3b2 PushI
	var_341_int = 13661; // 0x3b3 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x3b4 TObjFunc
	return 0; // 0x3b6 Return
	
Label_951:
	var_342_int = 16791; // 0x3b7 PushI
	var_343_bool = var_9_float == var_342_int; // 0x3b8 Eq
	if(var_343_bool == 0) goto Label_969; // 0x3b9 JumpB
	var_344_string = ""; // 0x3ba PushV
	var_344_string = "Neutral"; // 0x3bb MovS
	func_506(var_10_int, var_344_string); // 0x3bc NEW_2
	var_345_int = 515733; // 0x3be PushI
	SetMessage(var_345_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_346_int = 515737; // 0x3c3 PushI
	var_347_int = 16793; // 0x3c4 PushI
	var_348_int = 16795; // 0x3c5 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x3c6 TObjFunc
	return 0; // 0x3c8 Return
	
Label_969:
	var_349_int = 16793; // 0x3c9 PushI
	var_350_bool = var_9_float == var_349_int; // 0x3ca Eq
	if(var_350_bool == 0) goto Label_992; // 0x3cb JumpB
	var_351_string = ""; // 0x3cc PushV
	var_351_string = "Neutral"; // 0x3cd MovS
	func_506(var_10_int, var_351_string); // 0x3ce NEW_2
	var_352_int = 515735; // 0x3d0 PushI
	SetMessage(var_352_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_353_int = 511918; // 0x3d5 PushI
	var_354_int = 13135; // 0x3d6 PushI
	var_355_int = 13134; // 0x3d7 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x3d8 TObjFunc
	var_356_int = 515736; // 0x3da PushI
	var_357_int = 16797; // 0x3db PushI
	var_358_int = 16794; // 0x3dc PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x3dd TObjFunc
	return 0; // 0x3df Return
	
Label_992:
	var_359_int = 16797; // 0x3e0 PushI
	var_360_bool = var_9_float == var_359_int; // 0x3e1 Eq
	if(var_360_bool == 0) goto Label_1010; // 0x3e2 JumpB
	var_361_string = ""; // 0x3e3 PushV
	var_361_string = "Neutral"; // 0x3e4 MovS
	func_506(var_10_int, var_361_string); // 0x3e5 NEW_2
	var_362_int = 515738; // 0x3e7 PushI
	SetMessage(var_362_int); // 0x3e8 TObjFunc
	ClearReplies(); // 0x3ea TObjFunc
	var_363_int = 515739; // 0x3ec PushI
	var_364_int = 13137; // 0x3ed PushI
	var_365_int = 16798; // 0x3ee PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x3ef TObjFunc
	return 0; // 0x3f1 Return
	
Label_1010:
	var_366_int = 13135; // 0x3f2 PushI
	var_367_bool = var_9_float == var_366_int; // 0x3f3 Eq
	if(var_367_bool == 0) goto Label_1033; // 0x3f4 JumpB
	var_368_string = ""; // 0x3f5 PushV
	var_368_string = "Neutral"; // 0x3f6 MovS
	func_506(var_10_int, var_368_string); // 0x3f7 NEW_2
	var_369_int = 511919; // 0x3f9 PushI
	SetMessage(var_369_int); // 0x3fa TObjFunc
	ClearReplies(); // 0x3fc TObjFunc
	var_370_int = 511920; // 0x3fe PushI
	var_371_int = 13137; // 0x3ff PushI
	var_372_int = 13136; // 0x400 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x401 TObjFunc
	var_373_int = 515743; // 0x403 PushI
	var_374_int = 16805; // 0x404 PushI
	var_375_int = 16804; // 0x405 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x406 TObjFunc
	return 0; // 0x408 Return
	
Label_1033:
	var_376_int = 16805; // 0x409 PushI
	var_377_bool = var_9_float == var_376_int; // 0x40a Eq
	if(var_377_bool == 0) goto Label_1051; // 0x40b JumpB
	var_378_string = ""; // 0x40c PushV
	var_378_string = "Neutral"; // 0x40d MovS
	func_506(var_10_int, var_378_string); // 0x40e NEW_2
	var_379_int = 515744; // 0x410 PushI
	SetMessage(var_379_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_380_int = 515745; // 0x415 PushI
	var_381_int = 16807; // 0x416 PushI
	var_382_int = 16806; // 0x417 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_383_int = 16807; // 0x41b PushI
	var_384_bool = var_9_float == var_383_int; // 0x41c Eq
	if(var_384_bool == 0) goto Label_1074; // 0x41d JumpB
	var_385_string = ""; // 0x41e PushV
	var_385_string = "Neutral"; // 0x41f MovS
	func_506(var_10_int, var_385_string); // 0x420 NEW_2
	var_386_int = 515746; // 0x422 PushI
	SetMessage(var_386_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_387_int = 515747; // 0x427 PushI
	var_388_int = 13137; // 0x428 PushI
	var_389_int = 16808; // 0x429 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x42a TObjFunc
	var_390_int = 515748; // 0x42c PushI
	var_391_int = -1; // 0x42d PushI
	var_392_int = 16809; // 0x42e PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_393_int = 13137; // 0x432 PushI
	var_394_bool = var_9_float == var_393_int; // 0x433 Eq
	if(var_394_bool == 0) goto Label_1097; // 0x434 JumpB
	var_395_string = ""; // 0x435 PushV
	var_395_string = "Neutral"; // 0x436 MovS
	func_506(var_10_int, var_395_string); // 0x437 NEW_2
	var_396_int = 511921; // 0x439 PushI
	SetMessage(var_396_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_397_int = 511924; // 0x43e PushI
	var_398_int = 13141; // 0x43f PushI
	var_399_int = 13140; // 0x440 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x441 TObjFunc
	var_400_int = 511922; // 0x443 PushI
	var_401_int = 13139; // 0x444 PushI
	var_402_int = 13138; // 0x445 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_403_int = 13139; // 0x449 PushI
	var_404_bool = var_9_float == var_403_int; // 0x44a Eq
	if(var_404_bool == 0) goto Label_1115; // 0x44b JumpB
	var_405_string = ""; // 0x44c PushV
	var_405_string = "Neutral"; // 0x44d MovS
	func_506(var_10_int, var_405_string); // 0x44e NEW_2
	var_406_int = 511923; // 0x450 PushI
	SetMessage(var_406_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_407_int = 511929; // 0x455 PushI
	var_408_int = 13141; // 0x456 PushI
	var_409_int = 13145; // 0x457 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_410_int = 13141; // 0x45b PushI
	var_411_bool = var_9_float == var_410_int; // 0x45c Eq
	if(var_411_bool == 0) goto Label_1138; // 0x45d JumpB
	var_412_string = ""; // 0x45e PushV
	var_412_string = "Neutral"; // 0x45f MovS
	func_506(var_10_int, var_412_string); // 0x460 NEW_2
	var_413_int = 511925; // 0x462 PushI
	SetMessage(var_413_int); // 0x463 TObjFunc
	ClearReplies(); // 0x465 TObjFunc
	var_414_int = 511926; // 0x467 PushI
	var_415_int = 13143; // 0x468 PushI
	var_416_int = 13142; // 0x469 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x46a TObjFunc
	var_417_int = 511930; // 0x46c PushI
	var_418_int = 13148; // 0x46d PushI
	var_419_int = 13147; // 0x46e PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x46f TObjFunc
	return 0; // 0x471 Return
	
Label_1138:
	var_420_int = 13148; // 0x472 PushI
	var_421_bool = var_9_float == var_420_int; // 0x473 Eq
	if(var_421_bool == 0) goto Label_1161; // 0x474 JumpB
	var_422_string = ""; // 0x475 PushV
	var_422_string = "Neutral"; // 0x476 MovS
	func_506(var_10_int, var_422_string); // 0x477 NEW_2
	var_423_int = 511931; // 0x479 PushI
	SetMessage(var_423_int); // 0x47a TObjFunc
	ClearReplies(); // 0x47c TObjFunc
	var_424_int = 511932; // 0x47e PushI
	var_425_int = 13150; // 0x47f PushI
	var_426_int = 13149; // 0x480 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x481 TObjFunc
	var_427_int = 515741; // 0x483 PushI
	var_428_int = 13150; // 0x484 PushI
	var_429_int = 16801; // 0x485 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x486 TObjFunc
	return 0; // 0x488 Return
	
Label_1161:
	var_430_int = 13150; // 0x489 PushI
	var_431_bool = var_9_float == var_430_int; // 0x48a Eq
	if(var_431_bool == 0) goto Label_1184; // 0x48b JumpB
	var_432_string = ""; // 0x48c PushV
	var_432_string = "Neutral"; // 0x48d MovS
	func_506(var_10_int, var_432_string); // 0x48e NEW_2
	var_433_int = 511933; // 0x490 PushI
	SetMessage(var_433_int); // 0x491 TObjFunc
	ClearReplies(); // 0x493 TObjFunc
	var_434_int = 511934; // 0x495 PushI
	var_435_int = -1; // 0x496 PushI
	var_436_int = 13151; // 0x497 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x498 TObjFunc
	var_437_int = 515742; // 0x49a PushI
	var_438_int = 13143; // 0x49b PushI
	var_439_int = 16803; // 0x49c PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x49d TObjFunc
	return 0; // 0x49f Return
	
Label_1184:
	var_440_int = 13143; // 0x4a0 PushI
	var_441_bool = var_9_float == var_440_int; // 0x4a1 Eq
	if(var_441_bool == 0) goto Label_1207; // 0x4a2 JumpB
	var_442_string = ""; // 0x4a3 PushV
	var_442_string = "Neutral"; // 0x4a4 MovS
	func_506(var_10_int, var_442_string); // 0x4a5 NEW_2
	var_443_int = 511927; // 0x4a7 PushI
	SetMessage(var_443_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_444_int = 511928; // 0x4ac PushI
	var_445_int = -1; // 0x4ad PushI
	var_446_int = 13144; // 0x4ae PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x4af TObjFunc
	var_447_int = 515740; // 0x4b1 PushI
	var_448_int = -1; // 0x4b2 PushI
	var_449_int = 16800; // 0x4b3 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x4b4 TObjFunc
	return 0; // 0x4b6 Return
	
Label_1207:
	var_3_object = 1; // 0x4b7 TMovB
	var_450_bool = 0; // 0x4b8 PushV
	func_2020(var_450_bool); // 0x4b9 NEW_2
	if(var_450_bool == 0) goto Label_1215; // 0x4bb JumpB
	lshStopAnimation(); // 0x4bc Func
	goto Label_1217; // 0x4be Jump
	
Label_1217:
	return 0; // 0x4c1 Return
	
Label_1215:
	StopAnimation(); // 0x4bf Func
	
Label_1219:
	return 0; // 0x4c3 Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_1691(); // 0x53b NEW_2
	TaskCall(0); // 0x53e TaskCall
	func_0(); // 0x53f NEW_2
	TaskReturn(); // 0x540 TaskReturn
	return 0; // 0x542 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x543 PushV
	IsOverrideActive(var_11_bool); // 0x544 Func
	var_12_bool = var_11_bool == 0; // 0x546 Not
	if(var_12_bool == 0) goto Label_1362; // 0x547 JumpB
	EventDisable(0); // 0x548 EventDisable
	var_13_bool = 0; var_14_object = Obj(); // 0x549 PushV
	var_14_object = var_9_object; // 0x54a Mov
	func_1393(var_14_object); // 0x54b NEW_2
	EventEnable(0); // 0x54d EventEnable
	var_27_object = Obj(); // 0x54e PushV
	var_27_object = var_9_object; // 0x54f Mov
	func_2022(var_27_object); // 0x550 NEW_2
	
Label_1362:
	return 2; // 0x552 Return
}


event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int, var_9_string)
{
	var_10_bool = 0; var_11_bool = 0; // 0x683 PushV
	var_12_string = "cleanup"; // 0x684 PushS
	var_13_bool = var_9_string == var_12_string; // 0x685 Eq
	if(var_13_bool == 0) goto Label_1684; // 0x686 JumpB
	var_14_bool = GlobalVars[1]; // 0x687 PushGE
	var_14_bool = 1; // 0x688 MovB
	GlobalVars[1] = var_14_bool; // 0x689 PopGE
	IsLoaded(var_11_bool); // 0x68a Func
	var_15_bool = var_11_bool == 0; // 0x68c Not
	if(var_15_bool == 0) goto Label_1683; // 0x68d JumpB
	var_16_object = Obj(); // 0x68e PushV
	func_1543(var_16_object); // 0x68f NEW_2
	RemoveActor(var_16_object); // 0x691 Func
	
Label_1683:
	goto Label_1690; // 0x693 Jump
	
Label_1690:
	return 2; // 0x69a Return
	
Label_1684:
	var_19_string = "restore"; // 0x694 PushS
	var_20_bool = var_9_string == var_19_string; // 0x695 Eq
	if(var_20_bool == 0) goto Label_1690; // 0x696 JumpB
	var_21_bool = GlobalVars[1]; // 0x697 PushGE
	var_21_bool = 0; // 0x698 MovB
	GlobalVars[1] = var_21_bool; // 0x699 PopGE
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_9_bool = GlobalVars[1]; // 0x69b PushGE
	if(var_9_bool == 0) goto Label_1698; // 0x69c JumpB
	var_10_object = Obj(); // 0x69d PushV
	func_1543(var_10_object); // 0x69e NEW_2
	RemoveActor(var_10_object); // 0x6a0 Func
	
Label_1698:
	return 0; // 0x6a2 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x4c4 PushV
	var_31_bool = 1; // 0x4c5 PushB
	SensePlayerOnly(var_31_bool); // 0x4c6 Func
	func_1308(); // 0x4c9 NEW_2
	GetScene(var_20_object); // 0x4cb Func
	var_2_object = 0; // 0x4cd TMovI
	
Label_1230:
	var_36_string = ""; var_37_int = 0; // 0x4ce PushV
	var_37_int = var_2_object; // 0x4cf MovT
	func_1654(var_36_string, var_37_int); // 0x4d0 NEW_2
	GetLocator(var_36_string, var_21_bool); // 0x4d2 ObjFunc
	var_45_bool = var_21_bool == 0; // 0x4d4 Not
	if(var_45_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1242; // 0x4d6 Jump
	
Label_1242:
	var_46_bool = 0; // 0x4da PushV
	func_1413(var_46_bool); // 0x4db NEW_2
	var_49_bool = var_46_bool == 0; // 0x4dd Not
	if(var_49_bool == 0) goto Label_1252; // 0x4de JumpB
	TaskCall(0); // 0x4e0 TaskCall
	func_0(); // 0x4e1 NEW_2
	TaskReturn(); // 0x4e2 TaskReturn
	
Label_1252:
	func_1316(var_29_bool, var_30_cvector); // 0x4e5 NEW_2
	
Label_1255:
	irand(var_22_int, var_29_bool); // 0x4e7 Func
	var_70_string = ""; var_71_int = 0; // 0x4e9 PushV
	var_71_int = var_22_int; // 0x4ea Mov
	func_1654(var_70_string, var_71_int); // 0x4eb NEW_2
	GetLocator(var_70_string, var_23_bool, var_24_cvector, var_25_cvector); // 0x4ed ObjFunc
	var_72_cvector = CVector(0,0,0); // 0x4ef PushV
	func_1363(var_72_cvector); // 0x4f0 NEW_2
	var_26_cvector = var_24_cvector - var_72_cvector; // 0x4f2 Sub2
	var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0x4f3 PushV
	var_76_cvector = var_26_cvector; // 0x4f4 Mov
	func_1567(var_75_float, var_76_cvector); // 0x4f5 NEW_2
	var_84_bool = var_75_float > var_1_object; // 0x4f7 GT
	if(var_84_bool == 0) goto Label_1302; // 0x4f8 JumpB
	GetHeight(var_27_float); // 0x4f9 Func
	var_28_cvector = var_24_cvector; // 0x4fb Mov
	var_85_float = GetByIndex(var_28_cvector, 1); // 0x4fc PushE
	var_85_float = var_85_float + var_27_float; // 0x4fd Add2
	SetByIndex(var_28_cvector, 1) = var_85_float; // 0x4fe PopE
	CanReachByPF(var_29_bool, var_28_cvector); // 0x4ff Func
	var_86_bool = var_29_bool; // 0x501 Push
	if(var_86_bool == 0) goto Label_1302; // 0x502 JumpB
	var_87_int = var_26_cvector | var_26_cvector; // 0x503 Or
	var_88_float = sqrt(var_87_int); // 0x504 Sqrt
	var_89_float = var_0_bool / var_88_float; // 0x505 Div
	var_90_float = var_26_cvector * var_89_float; // 0x506 Mult
	var_30_cvector = var_24_cvector - var_90_float; // 0x507 Sub2
	var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0x508 PushV
	var_92_cvector = var_30_cvector; // 0x509 Mov
	var_93_cvector = var_25_cvector; // 0x50a Mov
	TaskCall(1); // 0x50b TaskCall
	func_13(var_94_bool, var_91_bool, var_92_cvector, var_93_cvector); // 0x50c NEW_2
	TaskReturn(); // 0x50d TaskReturn
	if(var_94_bool == 0) goto Label_1302; // 0x50f JumpB
	var_118_int = 0; // 0x510 PushV
	var_118_int = var_22_int; // 0x511 Mov
	TaskCall(3); // 0x512 TaskCall
	func_198(var_118_int); // 0x513 NEW_2
	TaskReturn(); // 0x514 TaskReturn
	
Label_1302:
	var_171_int = 1; // 0x516 PushI
	Sleep(var_171_int); // 0x517 Func
	goto Label_1255; // 0x519 Jump
	
Label_1239:
	var_172_int = 1; // 0x4d7 PushI
	var_2_object = var_2_object + var_172_int; // 0x4d8 Add2
	goto Label_1230; // 0x4d9 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_50_bool = 0; // 0x2 PushV
	func_1413(var_50_bool); // 0x3 NEW_2
	var_51_bool = var_50_bool == 0; // 0x5 Not
	if(var_51_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_256(var_143_string, var_144_string, var_145_int)
{
	var_146_int = 0; // 0x101 PushI
	var_147_bool = var_145_int == var_146_int; // 0x102 Eq
	if(var_147_bool == 0) goto Label_262; // 0x103 JumpB
	var_143_string = var_144_string; // 0x104 Mov
	goto Label_263; // 0x105 Jump
	
Label_263:
	return 0; // 0x107 Return
	
Label_262:
	var_143_string = var_144_string + var_145_int; // 0x106 Add2
}


func_1536()
{
	var_12_bool = 0; // 0x600 PushV
	func_2020(var_12_bool); // 0x601 NEW_2
	if(var_12_bool == 0) goto Label_1542; // 0x603 JumpB
	lshStopSpeech(); // 0x604 Func
	
Label_1542:
	return 0; // 0x606 Return
}


func_1543(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x607 PushV
	self(var_12_object); // 0x608 Func
	var_10_object = var_12_object; // 0x60a Mov
	return 2; // 0x60b Return
}


func_264(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_bool = 0; // 0x108 PushV
	var_140_int = 0; // 0x109 MovI
	
Label_266:
	var_142_string = "all"; // 0x10a PushS
	var_143_string = ""; var_144_string = ""; var_145_int = 0; // 0x10b PushV
	var_144_string = var_137_string; // 0x10c Mov
	var_145_int = var_140_int; // 0x10d Mov
	func_256(var_143_string, var_144_string, var_145_int); // 0x10e NEW_2
	HasAnimation(var_141_bool, var_142_string, var_143_string); // 0x110 Func
	var_148_bool = var_141_bool == 0; // 0x112 Not
	if(var_148_bool == 0) goto Label_277; // 0x113 JumpB
	goto Label_280; // 0x114 Jump
	
Label_280:
	var_136_int = var_140_int; // 0x118 Mov
	return 4; // 0x119 Return
	
Label_277:
	var_149_int = 1; // 0x115 PushI
	var_140_int = var_140_int + var_149_int; // 0x116 Add2
	goto Label_266; // 0x117 Jump
}


func_1804()
{
	var_130_string = "ood5Gorbun2"; // 0x70d PushS
	var_131_int = 1; // 0x70e PushI
	SetVariable(var_130_string, var_131_int); // 0x70f Func
	return 0; // 0x711 Return
}


func_13(var_0_bool, var_91_bool, var_92_cvector, var_93_cvector)
{
	var_95_bool = 0; var_96_bool = 0; // 0xd PushV
	var_0_bool = 1; // 0xe TMovB
	var_97_int = 21; // 0xf PushI
	var_98_float = 0.5; // 0x10 PushF
	SetTimer(var_97_int, var_98_float); // 0x11 Func
	
Label_19:
	var_99_bool = 0; var_100_cvector = CVector(0,0,0); // 0x13 PushV
	var_100_cvector = var_92_cvector; // 0x14 Mov
	func_1383(var_99_bool, var_100_cvector); // 0x15 NEW_2
	var_109_bool = var_99_bool == 0; // 0x17 Not
	if(var_109_bool == 0) goto Label_26; // 0x18 JumpB
	goto Label_19; // 0x19 Jump
	
Label_26:
	var_110_bool = 0; // 0x1a PushB
	MovePoint(var_92_cvector, var_110_bool, var_96_bool); // 0x1b Func
	var_111_bool = var_96_bool; // 0x1d Push
	if(var_111_bool == 0) goto Label_32; // 0x1e JumpB
	goto Label_33; // 0x1f Jump
	
Label_33:
	var_112_int = 20; // 0x21 PushI
	KillTimer(var_112_int); // 0x22 Func
	var_113_int = 21; // 0x24 PushI
	KillTimer(var_113_int); // 0x25 Func
	var_0_bool = 0; // 0x27 TMovB
	WaitForAnimEnd(var_96_bool); // 0x28 Func
	var_114_bool = var_96_bool == 0; // 0x2a Not
	if(var_114_bool == 0) goto Label_46; // 0x2b JumpB
	var_91_bool = 0; // 0x2c MovB
	return 2; // 0x2d Return
	
Label_46:
	var_115_float = GetByIndex(var_93_cvector, 0); // 0x2e PushE
	var_116_float = GetByIndex(var_93_cvector, 2); // 0x2f PushE
	Rotate(var_115_float, var_116_float, var_96_bool); // 0x30 Func
	var_117_bool = var_96_bool == 0; // 0x32 Not
	if(var_117_bool == 0) goto Label_54; // 0x33 JumpB
	var_91_bool = 0; // 0x34 MovB
	return 2; // 0x35 Return
	
Label_54:
	var_91_bool = 1; // 0x36 MovB
	return 2; // 0x37 Return
	
Label_32:
	goto Label_19; // 0x20 Jump
}


func_1549(var_66_cvector, var_67_cvector)
{
	var_69_float = 0; var_70_float = 0; // 0x60d PushV
	var_71_int = var_67_cvector | var_67_cvector; // 0x60e Or
	var_70_float = sqrt(var_71_int); // 0x60f Sqrt2
	var_72_float = 0.0; // 0x610 PushF
	var_73_bool = var_70_float < var_72_float; // 0x611 LT
	if(var_73_bool == 0) goto Label_1557; // 0x612 JumpB
	var_66_cvector = CVector(0.0, 0.0, 0.0); // 0x613 MovV
	return 2; // 0x614 Return
	
Label_1557:
	var_66_cvector = var_67_cvector / var_67_cvector; // 0x615 Div2
	return 2; // 0x616 Return
}


func_1810()
{
	var_117_string = "ood5Gorbun3"; // 0x713 PushS
	var_118_int = 1; // 0x714 PushI
	SetVariable(var_117_string, var_118_int); // 0x715 Func
	return 0; // 0x717 Return
}


func_1559(var_64_float, var_65_float)
{
	var_67_int = 0; // 0x618 PushI
	var_68_bool = var_65_float < var_67_int; // 0x619 LT
	if(var_68_bool == 0) goto Label_1565; // 0x61a JumpB
	var_64_float = -var_65_float; // 0x61b Neg2
	goto Label_1566; // 0x61c Jump
	
Label_1566:
	return 0; // 0x61e Return
	
Label_1565:
	var_64_float = var_65_float; // 0x61d Mov
}


func_1816(var_119_object)
{
	var_121_string = "money 50000 is given"; // 0x719 PushS
	Trace(var_121_string); // 0x71a Func
	var_122_object = Obj(); var_123_int = 0; // 0x71c PushV
	var_122_object = var_119_object; // 0x71d Mov
	var_123_int = 50000; // 0x71e MovI
	func_1594(var_122_object, var_123_int); // 0x71f NEW_2
	return 0; // 0x721 Return
}


func_282(var_0_bool, var_28_int, var_29_object)
{
	var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; var_37_int = 0; var_38_bool = 0; // 0x11a PushV
	var_0_bool = var_29_object; // 0x11b TMov
	var_39_bool = 0; var_40_object = Obj(); var_41_float = 0; // 0x11c PushV
	var_40_object = var_29_object; // 0x11d Mov
	var_41_float = 100.0; // 0x11e MovF
	func_1418(var_40_object, var_41_float); // 0x11f NEW_2
	var_86_bool = var_39_bool == 0; // 0x121 Not
	if(var_86_bool == 0) goto Label_293; // 0x122 JumpB
	var_28_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_35_object); // 0x125 Func
	var_87_int = 0; // 0x127 PushV
	func_2014(var_87_int); // 0x128 NEW_2
	SetNPCName(var_87_int); // 0x12a ObjFunc
	var_88_int = 0; // 0x12c PushV
	func_2012(var_88_int); // 0x12d NEW_2
	SetNPCDescription(var_88_int); // 0x12f ObjFunc
	var_89_string = ""; // 0x131 PushV
	func_2016(var_89_string); // 0x132 NEW_2
	SetPhoto(var_89_string); // 0x134 ObjFunc
	var_90_string = ""; // 0x136 PushV
	func_2018(var_90_string); // 0x137 NEW_2
	SetPhoto2(var_90_string); // 0x139 ObjFunc
	var_91_int = 0; // 0x13b PushV
	func_1995(var_91_int); // 0x13c NEW_2
	SetPlayerName(var_91_int); // 0x13e ObjFunc
	var_37_int = -1; // 0x140 MovI
	IsOverrideActive(var_36_bool); // 0x141 Func
	var_99_bool = var_36_bool; // 0x143 Push
	if(var_99_bool == 0) goto Label_327; // 0x144 JumpB
	var_28_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_35_object); // 0x147 Func
	var_100_object = Obj(); var_101_object = Obj(); // 0x149 PushV
	var_100_object = var_29_object; // 0x14a Mov
	var_101_object = var_35_object; // 0x14b Mov
	TaskCall(5); // 0x14c TaskCall
	func_356(var_102_object, var_103_object, var_104_string, var_105_bool, var_100_object, var_101_object); // 0x14d NEW_2
	TaskReturn(); // 0x14e TaskReturn
	IsDialogEnd(var_38_bool); // 0x150 ObjFunc
	
Label_338:
	var_214_bool = var_38_bool == 0; // 0x152 Not
	if(var_214_bool == 0) goto Label_345; // 0x153 JumpB
	sync(); // 0x154 Func
	IsDialogEnd(var_38_bool); // 0x156 ObjFunc
	goto Label_338; // 0x158 Jump
	
Label_345:
	var_215_object = Obj(); // 0x159 PushV
	var_215_object = var_29_object; // 0x15a Mov
	func_1487(); // 0x15b NEW_2
	StopDialog(var_35_object); // 0x15d Func
	GetReturnValue(var_37_int); // 0x15f ObjFunc
	var_28_int = var_37_int; // 0x161 Mov
	return 8; // 0x162 Return
}


func_1308()
{
	var_32_string = ""; var_33_string = ""; // 0x51c PushV
	var_34_string = "loc"; // 0x51d PushS
	GetProperty(var_34_string, var_33_string); // 0x51e Func
	var_35_string = GlobalVars[0]; // 0x520 PushGE
	var_35_string = var_33_string; // 0x521 Mov
	GlobalVars[0] = var_35_string; // 0x522 PopGE
	return 2; // 0x523 Return
}


func_1567(var_75_float, var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0); // 0x620 PushE
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x621 PushE
	var_79_float = var_77_float * var_78_float; // 0x622 Mult
	var_80_float = GetByIndex(var_76_cvector, 2); // 0x623 PushE
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x624 PushE
	var_82_float = var_80_float * var_81_float; // 0x625 Mult
	var_83_int = var_79_float + var_82_float; // 0x626 Add
	var_75_float = sqrt(var_83_int); // 0x627 Sqrt2
	return 0; // 0x628 Return
}


func_1826(var_108_bool)
{
	var_110_int = 0; var_111_string = ""; // 0x723 PushV
	var_111_string = "d5q02"; // 0x724 MovS
	func_1577(var_110_int, var_111_string); // 0x725 NEW_2
	var_114_int = 1; // 0x727 PushI
	var_115_bool = var_110_int == var_114_int; // 0x728 Eq
	if(var_115_bool == 0) goto Label_1836; // 0x729 JumpB
	var_108_bool = 1; // 0x72a MovB
	return 0; // 0x72b Return
	
Label_1836:
	var_108_bool = 0; // 0x72c MovB
	return 0; // 0x72d Return
}


func_1316(var_0_bool, var_1_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x524 PushV
	var_56_string = "all"; // 0x525 PushS
	var_57_string = "walk_stopl"; // 0x526 PushS
	GetAnimationOffset(var_54_cvector, var_56_string, var_57_string); // 0x527 Func
	var_58_string = "all"; // 0x529 PushS
	var_59_string = "walk_stopr"; // 0x52a PushS
	GetAnimationOffset(var_55_cvector, var_58_string, var_59_string); // 0x52b Func
	var_60_float = GetByIndex(var_54_cvector, 2); // 0x52d PushE
	var_61_float = GetByIndex(var_55_cvector, 2); // 0x52e PushE
	var_62_int = var_60_float + var_61_float; // 0x52f Add
	var_63_float = 2.0; // 0x530 PushF
	var_0_bool = var_62_int / var_62_int; // 0x531 Div2
	var_64_float = 0; var_65_float = 0; // 0x532 PushV
	var_66_float = GetByIndex(var_54_cvector, 2); // 0x533 PushE
	var_65_float = var_66_float - var_0_bool; // 0x534 Sub2
	func_1559(var_64_float, var_65_float); // 0x535 NEW_2
	var_69_int = 40; // 0x537 PushI
	var_1_object = var_64_float + var_69_int; // 0x538 Add2
	return 4; // 0x539 Return
}


func_1577(var_110_int, var_111_string)
{
	var_112_int = 0; var_113_int = 0; // 0x629 PushV
	GetVariable(var_111_string, var_113_int); // 0x62a Func
	var_110_int = var_113_int; // 0x62c Mov
	return 2; // 0x62d Return
}


func_1838(var_116_bool)
{
	var_118_int = 0; var_119_string = ""; // 0x72f PushV
	var_119_string = "ood5Gorbun1"; // 0x730 MovS
	func_1577(var_118_int, var_119_string); // 0x731 NEW_2
	var_120_int = 0; // 0x733 PushI
	var_121_bool = var_118_int == var_120_int; // 0x734 Eq
	if(var_121_bool == 0) goto Label_1848; // 0x735 JumpB
	var_116_bool = 1; // 0x736 MovB
	return 0; // 0x737 Return
	
Label_1848:
	var_116_bool = 0; // 0x738 MovB
	return 0; // 0x739 Return
}


func_1582(var_74_int, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x62e PushV
	CreateIntVector(var_77_object); // 0x62f Func
	add(var_74_int); // 0x631 ObjFunc
	add(var_75_int); // 0x633 ObjFunc
	var_78_int = 3; // 0x635 PushI
	SendWorldWndMessage(var_78_int, var_77_object); // 0x636 Func
	return 2; // 0x638 Return
}


func_1850(var_177_bool)
{
	var_179_int = 0; var_180_string = ""; // 0x73b PushV
	var_180_string = "d5q02"; // 0x73c MovS
	func_1577(var_179_int, var_180_string); // 0x73d NEW_2
	var_181_int = 4; // 0x73f PushI
	var_182_bool = var_179_int == var_181_int; // 0x740 Eq
	if(var_182_bool == 0) goto Label_1860; // 0x741 JumpB
	var_177_bool = 1; // 0x742 MovB
	return 0; // 0x743 Return
	
Label_1860:
	var_177_bool = 0; // 0x744 MovB
	return 0; // 0x745 Return
}


func_1594(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x63a PushV
	var_65_object = Obj(); var_66_string = ""; var_67_int = 0; // 0x63b PushV
	var_65_object = var_61_object; // 0x63c Mov
	var_66_string = "money"; // 0x63d MovS
	var_67_int = var_62_int; // 0x63e Mov
	func_1376(var_66_string, var_67_int); // 0x63f NEW_2
	var_71_int = 0; // 0x641 PushI
	var_72_bool = var_62_int > var_71_int; // 0x642 GT
	if(var_72_bool == 0) goto Label_1612; // 0x643 JumpB
	var_73_string = "Money"; // 0x644 PushS
	GetInvItemByName(var_64_int, var_73_string); // 0x645 Func
	var_74_int = 0; var_75_int = 0; // 0x647 PushV
	var_74_int = var_64_int; // 0x648 Mov
	var_75_int = var_62_int; // 0x649 Mov
	func_1582(var_74_int, var_75_int); // 0x64a NEW_2
	
Label_1612:
	return 2; // 0x64c Return
}


func_1862(var_183_bool)
{
	var_185_int = 0; var_186_string = ""; // 0x747 PushV
	var_186_string = "d5q02KnowNudeIsDead"; // 0x748 MovS
	func_1577(var_185_int, var_186_string); // 0x749 NEW_2
	var_187_int = 1; // 0x74b PushI
	var_188_bool = var_185_int == var_187_int; // 0x74c Eq
	if(var_188_bool == 0) goto Label_1872; // 0x74d JumpB
	var_183_bool = 1; // 0x74e MovB
	return 0; // 0x74f Return
	
Label_1872:
	var_183_bool = 0; // 0x750 MovB
	return 0; // 0x751 Return
}


func_1613(var_159_bool, var_160_string, var_161_string)
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x64d PushV
	FindActor(var_163_object, var_160_string); // 0x64e Func
	var_164_bool = var_163_object == 0; // 0x650 NullEq
	if(var_164_bool == 0) goto Label_1620; // 0x651 JumpB
	var_159_bool = 0; // 0x652 MovB
	return 2; // 0x653 Return
	
Label_1620:
	Trigger(var_163_object, var_161_string); // 0x654 Func
	var_159_bool = 1; // 0x656 MovB
	return 2; // 0x657 Return
}


func_1874(var_202_bool)
{
	var_204_int = 0; var_205_string = ""; // 0x753 PushV
	var_205_string = "ood5Gorbun2"; // 0x754 MovS
	func_1577(var_204_int, var_205_string); // 0x755 NEW_2
	var_206_int = 0; // 0x757 PushI
	var_207_bool = var_204_int == var_206_int; // 0x758 Eq
	if(var_207_bool == 0) goto Label_1884; // 0x759 JumpB
	var_202_bool = 1; // 0x75a MovB
	return 0; // 0x75b Return
	
Label_1884:
	var_202_bool = 0; // 0x75c MovB
	return 0; // 0x75d Return
}


func_1363(var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x553 PushV
	GetPosition(var_74_cvector); // 0x554 Func
	var_72_cvector = var_74_cvector; // 0x556 Mov
	return 2; // 0x557 Return
}


func_1368(var_21_float)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x558 PushV
	GetPosition(var_26_cvector); // 0x559 Func
	GetPosition(var_27_cvector); // 0x55b ObjFunc
	var_28_cvector = var_27_cvector - var_26_cvector; // 0x55d Sub2
	var_21_float = var_28_cvector | var_28_cvector; // 0x55e Or2
	return 6; // 0x55f Return
}


func_1625(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x659 PushV
	GetGameTime(var_34_float); // 0x65a Func
	var_32_float = var_34_float; // 0x65c Mov
	return 2; // 0x65d Return
}


func_1630(var_160_string, var_161_int)
{
	var_162_string = ""; var_163_string = ""; // 0x65e PushV
	var_163_string = "idle"; // 0x65f MovS
	var_164_int = var_161_int; // 0x660 Push
	if(var_164_int == 0) goto Label_1635; // 0x661 JumpB
	var_163_string = var_163_string + var_161_int; // 0x662 Add2
	
Label_1635:
	var_160_string = var_163_string; // 0x663 Mov
	return 2; // 0x664 Return
}


func_1886(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x75f PushV
	var_193_string = "ood5Gorbun3"; // 0x760 MovS
	func_1577(var_192_int, var_193_string); // 0x761 NEW_2
	var_194_int = 0; // 0x763 PushI
	var_195_bool = var_192_int == var_194_int; // 0x764 Eq
	if(var_195_bool == 0) goto Label_1896; // 0x765 JumpB
	var_190_bool = 1; // 0x766 MovB
	return 0; // 0x767 Return
	
Label_1896:
	var_190_bool = 0; // 0x768 MovB
	return 0; // 0x769 Return
}


func_1376(var_66_string, var_67_int)
{
	var_68_int = 0; var_69_int = 0; // 0x560 PushV
	GetProperty(var_66_string, var_69_int); // 0x561 ObjFunc
	var_70_int = var_69_int + var_67_int; // 0x563 Add
	SetProperty(var_66_string, var_70_int); // 0x564 ObjFunc
	return 2; // 0x566 Return
}


func_356(var_0_bool, var_1_object, var_2_object, var_3_object, var_100_object, var_101_object)
{
	var_0_bool = var_101_object; // 0x165 TMov
	var_1_object = var_100_object; // 0x166 TMov
	var_3_object = 0; // 0x167 TMovB
	var_106_int = 1; // 0x168 PushI
	if(var_106_int == 0) goto Label_476; // 0x169 JumpB
	var_107_bool = 0; // 0x16a PushV
	var_107_bool = 0; // 0x16b MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x16c PushV
	var_109_object = var_1_object; // 0x16d MovT
	func_1826(var_109_object); // 0x16e NEW_2
	if(var_108_bool == 0) goto Label_375; // 0x170 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x171 PushV
	var_117_object = var_1_object; // 0x172 MovT
	func_1838(var_117_object); // 0x173 NEW_2
	if(var_116_bool == 0) goto Label_375; // 0x175 JumpB
	var_107_bool = 1; // 0x176 MovB
	
Label_375:
	if(var_107_bool == 0) goto Label_401; // 0x177 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x178 PushV
	var_122_object = var_1_object; // 0x179 MovT
	var_123_object = var_0_bool; // 0x17a MovT
	func_1747(); // 0x17b NEW_2
	var_126_string = ""; // 0x17d PushV
	var_126_string = "Neutral"; // 0x17e MovS
	func_506(var_101_object, var_126_string); // 0x17f NEW_2
	var_143_int = 511917; // 0x181 PushI
	SetMessage(var_143_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_144_int = 515734; // 0x186 PushI
	var_145_int = 16793; // 0x187 PushI
	var_146_int = 16792; // 0x188 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x189 TObjFunc
	var_147_int = 515732; // 0x18b PushI
	var_148_int = 16791; // 0x18c PushI
	var_149_int = 16790; // 0x18d PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x18e TObjFunc
	goto Label_476; // 0x190 Jump
	
Label_476:
	var_150_bool = 0; // 0x1dc PushV
	func_2020(var_150_bool); // 0x1dd NEW_2
	if(var_150_bool == 0) goto Label_491; // 0x1df JumpB
	
Label_480:
	lshWaitForAnimEnd(); // 0x1e0 Func
	var_151_object = var_3_object; // 0x1e2 PushT
	if(var_151_object == 0) goto Label_485; // 0x1e3 JumpB
	goto Label_490; // 0x1e4 Jump
	
Label_490:
	goto Label_505; // 0x1ea Jump
	
Label_505:
	return 0; // 0x1f9 Return
	
Label_485:
	var_152_string = ""; // 0x1e5 PushV
	var_152_string = var_2_object; // 0x1e6 MovT
	func_1505(var_152_string); // 0x1e7 NEW_2
	goto Label_480; // 0x1e9 Jump
	
Label_491:
	var_163_string = "all"; // 0x1eb PushS
	var_164_string = "idle"; // 0x1ec PushS
	PlayAnimation(var_163_string, var_164_string); // 0x1ed Func
	
Label_495:
	WaitForAnimEnd(); // 0x1ef Func
	var_165_object = var_3_object; // 0x1f1 PushT
	if(var_165_object == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_505; // 0x1f3 Jump
	
Label_500:
	var_166_string = "all"; // 0x1f4 PushS
	var_167_string = "idle"; // 0x1f5 PushS
	PlayAnimation(var_166_string, var_167_string); // 0x1f6 Func
	goto Label_495; // 0x1f8 Jump
	
Label_401:
	var_168_string = ""; // 0x191 PushV
	var_168_string = "Neutral"; // 0x192 MovS
	func_506(var_101_object, var_168_string); // 0x193 NEW_2
	var_169_int = 511935; // 0x195 PushI
	SetMessage(var_169_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_170_bool = 0; var_171_object = Obj(); // 0x19a PushV
	var_171_object = var_1_object; // 0x19b MovT
	func_1826(var_171_object); // 0x19c NEW_2
	if(var_170_bool == 0) goto Label_420; // 0x19e JumpB
	var_172_int = 512489; // 0x19f PushI
	var_173_int = 13660; // 0x1a0 PushI
	var_174_int = 13658; // 0x1a1 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1a2 TObjFunc
	
Label_420:
	var_175_bool = 0; // 0x1a4 PushV
	var_175_bool = 0; // 0x1a5 MovB
	var_176_bool = 0; // 0x1a6 PushV
	var_176_bool = 0; // 0x1a7 MovB
	var_177_bool = 0; var_178_object = Obj(); // 0x1a8 PushV
	var_178_object = var_1_object; // 0x1a9 MovT
	func_1850(var_178_object); // 0x1aa NEW_2
	if(var_177_bool == 0) goto Label_436; // 0x1ac JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x1ad PushV
	var_184_object = var_1_object; // 0x1ae MovT
	func_1862(var_184_object); // 0x1af NEW_2
	var_189_bool = var_183_bool == 0; // 0x1b1 Not
	if(var_189_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_176_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_176_bool == 0) goto Label_443; // 0x1b4 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x1b5 PushV
	var_191_object = var_1_object; // 0x1b6 MovT
	func_1886(var_191_object); // 0x1b7 NEW_2
	if(var_190_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_175_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_175_bool == 0) goto Label_449; // 0x1bb JumpB
	var_196_int = 511936; // 0x1bc PushI
	var_197_int = 13155; // 0x1bd PushI
	var_198_int = 13153; // 0x1be PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1bf TObjFunc
	
Label_449:
	var_199_bool = 0; // 0x1c1 PushV
	var_199_bool = 0; // 0x1c2 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x1c3 PushV
	var_201_object = var_1_object; // 0x1c4 MovT
	func_1862(var_201_object); // 0x1c5 NEW_2
	if(var_200_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x1c8 PushV
	var_203_object = var_1_object; // 0x1c9 MovT
	func_1874(var_203_object); // 0x1ca NEW_2
	if(var_202_bool == 0) goto Label_462; // 0x1cc JumpB
	var_199_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_199_bool == 0) goto Label_468; // 0x1ce JumpB
	var_208_int = 511937; // 0x1cf PushI
	var_209_int = 13156; // 0x1d0 PushI
	var_210_int = 13154; // 0x1d1 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1d2 TObjFunc
	
Label_468:
	var_211_int = 512490; // 0x1d4 PushI
	var_212_int = -1; // 0x1d5 PushI
	var_213_int = 13659; // 0x1d6 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1d7 TObjFunc
	goto Label_476; // 0x1d9 Jump
}


func_1637(var_154_int)
{
	var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_bool = 0; // 0x665 PushV
	var_157_int = 0; // 0x666 MovI
	
Label_1639:
	var_159_string = "all"; // 0x667 PushS
	var_160_string = ""; var_161_int = 0; // 0x668 PushV
	var_161_int = var_157_int; // 0x669 Mov
	func_1630(var_160_string, var_161_int); // 0x66a NEW_2
	HasAnimation(var_158_bool, var_159_string, var_160_string); // 0x66c Func
	var_165_bool = var_158_bool == 0; // 0x66e Not
	if(var_165_bool == 0) goto Label_1649; // 0x66f JumpB
	goto Label_1652; // 0x670 Jump
	
Label_1652:
	var_154_int = var_157_int; // 0x674 Mov
	return 4; // 0x675 Return
	
Label_1649:
	var_166_int = 1; // 0x671 PushI
	var_157_int = var_157_int + var_166_int; // 0x672 Add2
	goto Label_1639; // 0x673 Jump
}


func_1383(var_99_bool, var_100_cvector)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; // 0x567 PushV
	GetPosition(var_104_cvector); // 0x568 Func
	var_105_cvector = var_100_cvector - var_104_cvector; // 0x56a Sub2
	var_107_float = GetByIndex(var_105_cvector, 0); // 0x56b PushE
	var_108_float = GetByIndex(var_105_cvector, 2); // 0x56c PushE
	Rotate(var_107_float, var_108_float, var_106_bool); // 0x56d Func
	var_99_bool = var_106_bool; // 0x56f Mov
	return 6; // 0x570 Return
}


func_1898()
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x76a PushV
	var_91_int = 715; // 0x76b PushI
	var_92_int = 2; // 0x76c PushI
	var_93_int = 536323; // 0x76d PushI
	CreateDiaryEntry(var_90_object, var_91_int, var_92_int, var_93_int); // 0x76e Func
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; // 0x770 PushV
	var_95_object = var_90_object; // 0x771 Mov
	var_96_int = 148; // 0x772 MovI
	func_1950(var_94_bool, var_95_object, var_96_int); // 0x773 NEW_2
	return 2; // 0x775 Return
}


func_1393(var_13_bool)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); // 0x571 PushV
	GetPosition(var_16_cvector); // 0x572 ObjFunc
	var_17_bool = 0; var_18_cvector = CVector(0,0,0); // 0x574 PushV
	var_18_cvector = var_16_cvector; // 0x575 Mov
	func_1383(var_17_bool, var_18_cvector); // 0x576 NEW_2
	var_13_bool = var_17_bool; // 0x577 Mov
	return 2; // 0x579 Return
}


func_1654(var_36_string, var_37_int)
{
	var_38_int = 0; // 0x677 PushI
	var_39_bool = var_37_int == var_38_int; // 0x678 Eq
	if(var_39_bool == 0) goto Label_1662; // 0x679 JumpB
	var_40_string = "pt_"; // 0x67a PushS
	var_41_string = GlobalVars[0]; // 0x67b PushGE
	var_36_string = var_40_string + var_41_string; // 0x67c Add2
	goto Label_1666; // 0x67d Jump
	
Label_1666:
	return 0; // 0x682 Return
	
Label_1662:
	var_42_string = "pt_"; // 0x67e PushS
	var_43_string = GlobalVars[0]; // 0x67f PushGE
	var_44_int = var_42_string + var_43_string; // 0x680 Add
	var_36_string = var_44_int + var_37_int; // 0x681 Add2
}


func_1911()
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x777 PushV
	var_37_int = 150; // 0x778 PushI
	var_38_int = 2; // 0x779 PushI
	var_39_int = 515356; // 0x77a PushI
	CreateDiaryEntry(var_36_object, var_37_int, var_38_int, var_39_int); // 0x77b Func
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0; // 0x77d PushV
	var_41_object = var_36_object; // 0x77e Mov
	var_42_int = 148; // 0x77f MovI
	func_1950(var_40_bool, var_41_object, var_42_int); // 0x780 NEW_2
	return 2; // 0x782 Return
}


func_1402()
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x57a PushV
	GetPosition(var_43_cvector); // 0x57b ObjFunc
	GetPosition(var_44_cvector); // 0x57d Func
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x57f Sub2
	var_46_float = GetByIndex(var_45_cvector, 0); // 0x580 PushE
	var_47_float = GetByIndex(var_45_cvector, 2); // 0x581 PushE
	RotateAsync(var_46_float, var_47_float); // 0x582 Func
	return 6; // 0x584 Return
}


func_1924()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x784 PushV
	var_153_int = 153; // 0x785 PushI
	var_154_int = 2; // 0x786 PushI
	var_155_int = 515359; // 0x787 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0x788 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0x78a PushV
	var_157_object = var_152_object; // 0x78b Mov
	var_158_int = 148; // 0x78c MovI
	func_1950(var_156_bool, var_157_object, var_158_int); // 0x78d NEW_2
	return 2; // 0x78f Return
}


func_1413(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x585 PushV
	IsLoaded(var_48_bool); // 0x586 Func
	var_46_bool = var_48_bool; // 0x588 Mov
	return 2; // 0x589 Return
}


func_1418(var_39_bool, var_41_float)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0; // 0x58a PushV
	GetPosition(var_52_cvector); // 0x58b ObjFunc
	GetEyesHeight(var_51_float); // 0x58d ObjFunc
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x58f PushE
	var_60_float = var_60_float + var_51_float; // 0x590 Add2
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x591 PopE
	GetPosition(var_53_cvector); // 0x592 Func
	GetEyesHeight(var_51_float); // 0x594 Func
	var_61_float = GetByIndex(var_53_cvector, 1); // 0x596 PushE
	var_61_float = var_61_float + var_51_float; // 0x597 Add2
	SetByIndex(var_53_cvector, 1) = var_61_float; // 0x598 PopE
	var_54_cvector = var_52_cvector - var_53_cvector; // 0x599 Sub2
	var_62_float = GetByIndex(var_54_cvector, 1); // 0x59a PushE
	var_62_float = 0; // 0x59b MovI
	SetByIndex(var_54_cvector, 1) = var_62_float; // 0x59c PopE
	var_63_int = var_54_cvector | var_54_cvector; // 0x59d Or
	var_64_float = sqrt(var_63_int); // 0x59e Sqrt
	var_54_cvector = var_54_cvector / var_54_cvector; // 0x59f Div2
	var_55_cvector = -var_54_cvector; // 0x5a0 Neg2
	var_65_float = var_54_cvector * var_41_float; // 0x5a1 Mult
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x5a2 PushV
	var_68_cvector = CVector(0.0, 1.0, 0.0); // 0x5a3 PushVec
	var_67_cvector = var_55_cvector ^ var_68_cvector; // 0x5a4 Xor2
	func_1549(var_66_cvector, var_67_cvector); // 0x5a5 NEW_2
	var_74_int = 25; // 0x5a7 PushI
	var_75_float = var_66_cvector * var_74_int; // 0x5a8 Mult
	var_76_int = var_65_float + var_75_float; // 0x5a9 Add
	var_77_cvector = CVector(0.0, 10.0, 0.0); // 0x5aa PushVec
	var_56_cvector = var_76_int - var_77_cvector; // 0x5ab Sub2
	var_57_cvector = var_53_cvector + var_56_cvector; // 0x5ac Add2
	IsOverrideActive(var_58_bool); // 0x5ad Func
	var_78_bool = var_58_bool; // 0x5af Push
	if(var_78_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_39_bool = 0; // 0x5b1 MovB
	return 18; // 0x5b2 Return
	
Label_1459:
	StopWorld(); // 0x5b3 Func
	var_79_bool = 1; // 0x5b5 PushB
	CameraTransit(var_57_cvector, var_55_cvector, var_79_bool); // 0x5b6 Func
	var_80_float = GetByIndex(var_56_cvector, 0); // 0x5b8 PushE
	var_81_float = GetByIndex(var_56_cvector, 2); // 0x5b9 PushE
	Rotate(var_80_float, var_81_float); // 0x5ba Func
	var_82_bool = 0; // 0x5bc PushV
	func_2020(var_82_bool); // 0x5bd NEW_2
	if(var_82_bool == 0) goto Label_1473; // 0x5bf JumpB
	goto Label_1481; // 0x5c0 Jump
	
Label_1481:
	CameraWaitForPlayFinish(); // 0x5c9 Func
	ResumeWorld(); // 0x5cb Func
	var_39_bool = 1; // 0x5cd MovB
	return 18; // 0x5ce Return
	
Label_1473:
	var_83_string = "head"; // 0x5c1 PushS
	HasAnimationTrack(var_59_bool, var_83_string); // 0x5c2 Func
	var_84_bool = var_59_bool; // 0x5c4 Push
	if(var_84_bool == 0) goto Label_1481; // 0x5c5 JumpB
	var_85_string = "head"; // 0x5c6 PushS
	LookAsyncCamera(var_85_string); // 0x5c7 Func
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
}


func_1937(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x791 PushV
	GetDiaryRoot(var_51_object); // 0x792 Func
	var_52_bool = var_51_object == 0; // 0x794 Not
	if(var_52_bool == 0) goto Label_1947; // 0x795 JumpB
	var_53_string = "Can't retrieve diary root"; // 0x796 PushS
	Trace(var_53_string); // 0x797 Func
	var_49_object = 0; // 0x799 MovB
	return 2; // 0x79a Return
	
Label_1947:
	var_49_object = var_51_object; // 0x79b Mov
	return 2; // 0x79c Return
}


func_148(var_35_object)
{
	var_36_bool = 0; var_37_bool = 0; // 0x94 PushV
	WaitForAnimEnd(var_37_bool); // 0x95 Func
	var_38_bool = var_37_bool == 0; // 0x97 Not
	if(var_38_bool == 0) goto Label_154; // 0x98 JumpB
	return 2; // 0x99 Return
	
Label_154:
	var_39_object = Obj(); // 0x9a PushV
	var_39_object = var_35_object; // 0x9b Mov
	func_1402(); // 0x9c NEW_2
	var_48_int = 6; // 0x9e PushI
	Sleep(var_48_int); // 0x9f Func
	return 2; // 0xa1 Return
}


func_1950(var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; // 0x79e PushV
	var_49_object = Obj(); // 0x79f PushV
	func_1937(var_49_object); // 0x7a0 NEW_2
	var_46_object = var_49_object; // 0x7a1 Mov
	Find(var_42_int, var_47_object); // 0x7a3 ObjFunc
	var_54_bool = var_47_object == 0; // 0x7a5 Not
	if(var_54_bool == 0) goto Label_1965; // 0x7a6 JumpB
	var_55_string = "Can't find diary parent with id: "; // 0x7a7 PushS
	var_56_int = var_55_string + var_42_int; // 0x7a8 Add
	Trace(var_56_int); // 0x7a9 Func
	var_40_bool = 0; // 0x7ab MovB
	return 6; // 0x7ac Return
	
Label_1965:
	AddChild(var_41_object); // 0x7ad ObjFunc
	var_57_int = 7; // 0x7af PushI
	SendWorldWndMessage(var_57_int); // 0x7b0 Func
	GetCategory(var_48_int); // 0x7b2 ObjFunc
	SetDiarySection(var_48_int); // 0x7b4 Func
	var_40_bool = 0; // 0x7b6 MovB
	return 6; // 0x7b7 Return
}


func_1699(var_58_object)
{
	var_60_string = "money10000 is given"; // 0x6a4 PushS
	Trace(var_60_string); // 0x6a5 Func
	var_61_object = Obj(); var_62_int = 0; // 0x6a7 PushV
	var_61_object = var_58_object; // 0x6a8 Mov
	var_62_int = 10000; // 0x6a9 MovI
	func_1594(var_61_object, var_62_int); // 0x6aa NEW_2
	return 0; // 0x6ac Return
}


func_1709()
{
	var_81_string = "playsound"; // 0x6ae PushS
	var_82_string = "givemoney"; // 0x6af PushS
	TriggerWorld(var_81_string, var_82_string); // 0x6b0 Func
	return 0; // 0x6b2 Return
}


func_1715()
{
	var_87_string = "d5q02"; // 0x6b4 PushS
	var_88_int = -1; // 0x6b5 PushI
	SetVariable(var_87_string, var_88_int); // 0x6b6 Func
	func_1898(); // 0x6b9 NEW_2
	return 0; // 0x6bb Return
}


func_1978(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x7ba PushV
	GetMainOutdoorScene(var_24_object); // 0x7bb Func
	var_26_bool = var_24_object == 0; // 0x7bd NullEq
	if(var_26_bool == 0) goto Label_1989; // 0x7be JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x7bf PushS
	Trace(var_27_string); // 0x7c0 Func
	var_25_object = 0; // 0x7c2 SetNull
	var_21_object = var_25_object; // 0x7c3 Mov
	return 4; // 0x7c4 Return
	
Label_1989:
	GetMap(var_25_object); // 0x7c5 ObjFunc
	var_21_object = var_25_object; // 0x7c7 Mov
	return 4; // 0x7c8 Return
}


func_1724()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x6bc PushV
	var_19_string = "d5q02"; // 0x6bd PushS
	var_20_int = 2; // 0x6be PushI
	SetVariable(var_19_string, var_20_int); // 0x6bf Func
	var_21_object = Obj(); // 0x6c1 PushV
	func_1978(var_21_object); // 0x6c2 NEW_2
	var_18_object = var_21_object; // 0x6c3 Mov
	var_28_string = "d5q02GorbunFindTheDaughter"; // 0x6c5 PushS
	var_29_string = "pt_map_gorbun"; // 0x6c6 PushS
	var_30_int = 0; // 0x6c7 PushI
	var_31_int = 515362; // 0x6c8 PushI
	var_32_float = 0; // 0x6c9 PushV
	func_1625(var_32_float); // 0x6ca NEW_2
	AddMark(var_28_string, var_29_string, var_30_int, var_31_int, var_32_float); // 0x6cc ObjFunc
	func_1911(); // 0x6cf NEW_2
	return 2; // 0x6d1 Return
}


func_193()
{
	StopGroup0(); // 0xc1 Func
	StopAnimation(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_198(var_118_int)
{
	var_119_string = ""; var_120_bool = 0; var_121_string = ""; var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_string = ""; var_127_bool = 0; var_128_string = ""; var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0xc6 PushV
	var_133_int = var_118_int; // 0xc7 Push
	if(var_133_int == 0) goto Label_204; // 0xc8 JumpB
	var_134_string = "ptidle"; // 0xc9 PushS
	var_126_string = var_134_string + var_118_int; // 0xca Add2
	goto Label_205; // 0xcb Jump
	
Label_205:
	HasProperty(var_126_string, var_127_bool); // 0xcd Func
	var_135_bool = var_127_bool; // 0xcf Push
	if(var_135_bool == 0) goto Label_229; // 0xd0 JumpB
	GetProperty(var_126_string, var_128_string); // 0xd1 Func
	var_136_int = 0; var_137_string = ""; // 0xd3 PushV
	var_137_string = var_128_string; // 0xd4 Mov
	func_264(var_136_int, var_137_string); // 0xd5 NEW_2
	var_129_int = var_136_int; // 0xd6 Mov
	irand(var_130_int, var_129_int); // 0xd8 Func
	var_150_string = "all"; // 0xda PushS
	var_151_string = ""; var_152_string = ""; var_153_int = 0; // 0xdb PushV
	var_152_string = var_128_string; // 0xdc Mov
	var_153_int = var_130_int; // 0xdd Mov
	func_256(var_151_string, var_152_string, var_153_int); // 0xde NEW_2
	PlayAnimation(var_150_string, var_151_string); // 0xe0 Func
	WaitForAnimEnd(); // 0xe2 Func
	goto Label_246; // 0xe4 Jump
	
Label_246:
	return 14; // 0xf6 Return
	
Label_229:
	var_154_int = 0; // 0xe5 PushV
	func_1637(var_154_int); // 0xe6 NEW_2
	var_131_int = var_154_int; // 0xe7 Mov
	var_167_int = var_131_int; // 0xe9 Push
	if(var_167_int == 0) goto Label_246; // 0xea JumpB
	irand(var_132_int, var_131_int); // 0xeb Func
	var_168_string = "all"; // 0xed PushS
	var_169_string = ""; var_170_int = 0; // 0xee PushV
	var_170_int = var_132_int; // 0xef Mov
	func_1630(var_169_string, var_170_int); // 0xf0 NEW_2
	PlayAnimation(var_168_string, var_169_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_126_string = "ptidle"; // 0xcc MovS
}


func_1995(var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x7cb PushV
	var_94_string = "branch"; // 0x7cc PushS
	GetVariable(var_94_string, var_93_int); // 0x7cd Func
	var_95_int = 0; // 0x7cf PushI
	var_96_bool = var_93_int == var_95_int; // 0x7d0 Eq
	if(var_96_bool == 0) goto Label_2005; // 0x7d1 JumpB
	var_91_int = 1; // 0x7d2 MovI
	return 2; // 0x7d3 Return
	
Label_2005:
	var_97_int = 1; // 0x7d5 PushI
	var_98_bool = var_93_int == var_97_int; // 0x7d6 Eq
	if(var_98_bool == 0) goto Label_2010; // 0x7d7 JumpB
	var_91_int = 2; // 0x7d8 MovI
	return 2; // 0x7d9 Return
	
Label_2010:
	var_91_int = 3; // 0x7da MovI
	return 2; // 0x7db Return
}


func_1487()
{
	var_216_bool = 0; var_217_bool = 0; // 0x5cf PushV
	var_218_bool = 1; // 0x5d0 PushB
	CameraSwitchToNormal(var_218_bool); // 0x5d1 Func
	var_219_bool = 0; // 0x5d3 PushV
	func_2020(var_219_bool); // 0x5d4 NEW_2
	if(var_219_bool == 0) goto Label_1496; // 0x5d6 JumpB
	goto Label_1504; // 0x5d7 Jump
	
Label_1504:
	return 2; // 0x5e0 Return
	
Label_1496:
	var_220_string = "head"; // 0x5d8 PushS
	HasAnimationTrack(var_217_bool, var_220_string); // 0x5d9 Func
	var_221_bool = var_217_bool; // 0x5db Push
	if(var_221_bool == 0) goto Label_1504; // 0x5dc JumpB
	var_222_string = "head"; // 0x5dd PushS
	UnlookAsync(var_222_string); // 0x5de Func
}


func_1747()
{
	var_124_string = "ood5Gorbun1"; // 0x6d4 PushS
	var_125_int = 1; // 0x6d5 PushI
	SetVariable(var_124_string, var_125_int); // 0x6d6 Func
	return 0; // 0x6d8 Return
}


func_1753()
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_object = Obj(); // 0x6d9 PushV
	var_140_object = Obj(); // 0x6da PushV
	func_1978(var_140_object); // 0x6db NEW_2
	var_138_object = var_140_object; // 0x6dc Mov
	var_141_string = "d5q02AnnaGotoGorbun"; // 0x6de PushS
	FindMark(var_139_object, var_141_string); // 0x6df ObjFunc
	var_142_object = var_139_object; // 0x6e1 Push
	if(var_142_object == 0) goto Label_1765; // 0x6e2 JumpB
	Remove(); // 0x6e3 ObjFunc
	
Label_1765:
	var_143_string = "d5q02AnnaGotoGorbunSelf"; // 0x6e5 PushS
	FindMark(var_139_object, var_143_string); // 0x6e6 ObjFunc
	var_144_object = var_139_object; // 0x6e8 Push
	if(var_144_object == 0) goto Label_1772; // 0x6e9 JumpB
	Remove(); // 0x6ea ObjFunc
	
Label_1772:
	var_145_string = "d5q02AnnaGotoKabak"; // 0x6ec PushS
	FindMark(var_139_object, var_145_string); // 0x6ed ObjFunc
	var_146_object = var_139_object; // 0x6ef Push
	if(var_146_object == 0) goto Label_1779; // 0x6f0 JumpB
	Remove(); // 0x6f1 ObjFunc
	
Label_1779:
	var_147_string = "d5q02GorbunFindTheDaughter"; // 0x6f3 PushS
	FindMark(var_139_object, var_147_string); // 0x6f4 ObjFunc
	var_148_object = var_139_object; // 0x6f6 Push
	if(var_148_object == 0) goto Label_1786; // 0x6f7 JumpB
	Remove(); // 0x6f8 ObjFunc
	
Label_1786:
	var_149_string = "d5q02NudeMeeting"; // 0x6fa PushS
	FindMark(var_139_object, var_149_string); // 0x6fb ObjFunc
	var_150_object = var_139_object; // 0x6fd Push
	if(var_150_object == 0) goto Label_1793; // 0x6fe JumpB
	Remove(); // 0x6ff ObjFunc
	
Label_1793:
	func_1924(); // 0x702 NEW_2
	var_159_bool = 0; var_160_string = ""; var_161_string = ""; // 0x704 PushV
	var_160_string = "quest_d5_02"; // 0x705 MovS
	var_161_string = "completed"; // 0x706 MovS
	func_1613(var_159_bool, var_160_string, var_161_string); // 0x707 NEW_2
	return 4; // 0x709 Return
}


func_2012(var_88_int)
{
	var_88_int = 515594; // 0x7dc MovI
	return 0; // 0x7dd Return
}


func_2014(var_87_int)
{
	var_87_int = 512583; // 0x7de MovI
	return 0; // 0x7df Return
}


func_2016(var_89_string)
{
	var_89_string = "ui/NPC_Citizen3.png"; // 0x7e0 MovS
	return 0; // 0x7e1 Return
}


func_1505(var_152_string)
{
	var_153_bool = 0; var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_float = 0; var_158_float = 0; // 0x5e1 PushV
	lshHasAnimation(var_156_bool, var_152_string); // 0x5e2 Func
	var_159_bool = var_156_bool; // 0x5e4 Push
	if(var_159_bool == 0) goto Label_1516; // 0x5e5 JumpB
	lshGetAnimTimes(var_152_string, var_157_float, var_158_float); // 0x5e6 Func
	var_160_bool = 0; // 0x5e8 PushB
	lshPlayAnimation(var_157_float, var_158_float, var_160_bool); // 0x5e9 Func
	goto Label_1520; // 0x5eb Jump
	
Label_1520:
	return 6; // 0x5f0 Return
	
Label_1516:
	var_161_string = "Can't find lsh animation : "; // 0x5ec PushS
	var_162_int = var_161_string + var_152_string; // 0x5ed Add
	Trace(var_162_int); // 0x5ee Func
}


func_2018(var_90_string)
{
	var_90_string = "ui/NPC_Citizen3_b.png"; // 0x7e2 MovS
	return 0; // 0x7e3 Return
}


func_2020(var_82_bool)
{
	var_82_bool = 0; // 0x7e4 MovB
	return 0; // 0x7e5 Return
}


func_2022(var_27_object)
{
	var_28_int = 0; var_29_object = Obj(); // 0x7e7 PushV
	var_29_object = var_27_object; // 0x7e8 Mov
	TaskCall(4); // 0x7e9 TaskCall
	func_282(var_30_object, var_28_int, var_29_object); // 0x7ea NEW_2
	TaskReturn(); // 0x7eb TaskReturn
	return 0; // 0x7ed Return
}


func_1521(var_130_string, var_131_bool)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x5f1 PushV
	lshHasAnimation(var_137_bool, var_130_string); // 0x5f2 Func
	var_140_bool = var_137_bool; // 0x5f4 Push
	if(var_140_bool == 0) goto Label_1531; // 0x5f5 JumpB
	lshGetAnimTimes(var_130_string, var_138_float, var_139_float); // 0x5f6 Func
	lshPlayAnimation(var_138_float, var_139_float, var_131_bool); // 0x5f8 Func
	goto Label_1535; // 0x5fa Jump
	
Label_1535:
	return 6; // 0x5ff Return
	
Label_1531:
	var_141_string = "Can't find lsh animation : "; // 0x5fb PushS
	var_142_int = var_141_string + var_130_string; // 0x5fc Add
	Trace(var_142_int); // 0x5fd Func
}


func_506(var_2_object, var_126_string)
{
	var_127_bool = 0; // 0x1fb PushV
	func_2020(var_127_bool); // 0x1fc NEW_2
	var_128_bool = var_127_bool == 0; // 0x1fe Not
	if(var_128_bool == 0) goto Label_513; // 0x1ff JumpB
	return 0; // 0x200 Return
	
Label_513:
	var_129_bool = var_126_string == var_2_object; // 0x201 Eq
	if(var_129_bool == 0) goto Label_516; // 0x202 JumpB
	return 0; // 0x203 Return
	
Label_516:
	var_130_string = ""; var_131_bool = 0; // 0x204 PushV
	var_130_string = var_126_string; // 0x205 Mov
	var_132_string = ""; // 0x206 PushS
	var_133_bool = var_126_string == var_132_string; // 0x207 Eq
	if(var_133_bool == 0) goto Label_523; // 0x208 JumpB
	var_131_bool = 0; // 0x209 MovB
	goto Label_524; // 0x20a Jump
	
Label_524:
	func_1521(var_130_string, var_131_bool); // 0x20c NEW_2
	var_2_object = var_126_string; // 0x20e TMov
	return 0; // 0x20f Return
	
Label_523:
	var_131_bool = 1; // 0x20b MovB
}


