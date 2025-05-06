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
	func_1689(); // 0x3d NEW_2
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
	func_2020(var_27_object); // 0x55 NEW_2
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
	func_1689(); // 0xa6 NEW_2
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
	func_2020(var_27_object); // 0xbe NEW_2
	
Label_192:
	return 2; // 0xc0 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_1689(); // 0xf8 NEW_2
	TaskCall(0); // 0xfb TaskCall
	func_0(); // 0xfc NEW_2
	TaskReturn(); // 0xfd TaskReturn
	return 0; // 0xff Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_float, var_9_float, var_10_int)
{
	var_11_int = 1; // 0x211 PushI
	if(var_11_int == 0) goto Label_1219; // 0x212 JumpB
	func_1534(); // 0x214 NEW_2
	var_13_int = 13144; // 0x216 PushI
	var_14_bool = var_10_int == var_13_int; // 0x217 Eq
	if(var_14_bool == 0) goto Label_552; // 0x218 JumpB
	var_15_object = Obj(); var_16_object = Obj(); // 0x219 PushV
	var_15_object = var_1_object; // 0x21a MovT
	var_16_object = var_0_bool; // 0x21b MovT
	func_1722(); // 0x21c NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x21e PushV
	var_58_object = var_1_object; // 0x21f MovT
	var_59_object = var_0_bool; // 0x220 MovT
	func_1697(var_59_object); // 0x221 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x223 PushV
	var_79_object = var_1_object; // 0x224 MovT
	var_80_object = var_0_bool; // 0x225 MovT
	func_1707(); // 0x226 NEW_2
	
Label_552:
	var_83_int = 16800; // 0x228 PushI
	var_84_bool = var_10_int == var_83_int; // 0x229 Eq
	if(var_84_bool == 0) goto Label_560; // 0x22a JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x22b PushV
	var_85_object = var_1_object; // 0x22c MovT
	var_86_object = var_0_bool; // 0x22d MovT
	func_1713(); // 0x22e NEW_2
	
Label_560:
	var_97_int = 13151; // 0x230 PushI
	var_98_bool = var_10_int == var_97_int; // 0x231 Eq
	if(var_98_bool == 0) goto Label_568; // 0x232 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x233 PushV
	var_99_object = var_1_object; // 0x234 MovT
	var_100_object = var_0_bool; // 0x235 MovT
	func_1713(); // 0x236 NEW_2
	
Label_568:
	var_101_int = 16809; // 0x238 PushI
	var_102_bool = var_10_int == var_101_int; // 0x239 Eq
	if(var_102_bool == 0) goto Label_576; // 0x23a JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x23b PushV
	var_103_object = var_1_object; // 0x23c MovT
	var_104_object = var_0_bool; // 0x23d MovT
	func_1713(); // 0x23e NEW_2
	
Label_576:
	var_105_int = 13661; // 0x240 PushI
	var_106_bool = var_10_int == var_105_int; // 0x241 Eq
	if(var_106_bool == 0) goto Label_594; // 0x242 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x243 PushV
	var_107_object = var_1_object; // 0x244 MovT
	var_108_object = var_0_bool; // 0x245 MovT
	func_1722(); // 0x246 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x248 PushV
	var_109_object = var_1_object; // 0x249 MovT
	var_110_object = var_0_bool; // 0x24a MovT
	func_1697(var_110_object); // 0x24b NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0x24d PushV
	var_111_object = var_1_object; // 0x24e MovT
	var_112_object = var_0_bool; // 0x24f MovT
	func_1707(); // 0x250 NEW_2
	
Label_594:
	var_113_int = 13170; // 0x252 PushI
	var_114_bool = var_10_int == var_113_int; // 0x253 Eq
	if(var_114_bool == 0) goto Label_612; // 0x254 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x255 PushV
	var_115_object = var_1_object; // 0x256 MovT
	var_116_object = var_0_bool; // 0x257 MovT
	func_1808(); // 0x258 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x25a PushV
	var_119_object = var_1_object; // 0x25b MovT
	var_120_object = var_0_bool; // 0x25c MovT
	func_1814(var_120_object); // 0x25d NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x25f PushV
	var_124_object = var_1_object; // 0x260 MovT
	var_125_object = var_0_bool; // 0x261 MovT
	func_1707(); // 0x262 NEW_2
	
Label_612:
	var_126_int = 13154; // 0x264 PushI
	var_127_bool = var_10_int == var_126_int; // 0x265 Eq
	if(var_127_bool == 0) goto Label_620; // 0x266 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x267 PushV
	var_128_object = var_1_object; // 0x268 MovT
	var_129_object = var_0_bool; // 0x269 MovT
	func_1802(); // 0x26a NEW_2
	
Label_620:
	var_132_int = 13172; // 0x26c PushI
	var_133_bool = var_10_int == var_132_int; // 0x26d Eq
	if(var_133_bool == 0) goto Label_628; // 0x26e JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x26f PushV
	var_134_object = var_1_object; // 0x270 MovT
	var_135_object = var_0_bool; // 0x271 MovT
	func_1751(); // 0x272 NEW_2
	
Label_628:
	var_165_int = 16820; // 0x274 PushI
	var_166_bool = var_10_int == var_165_int; // 0x275 Eq
	if(var_166_bool == 0) goto Label_636; // 0x276 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x277 PushV
	var_167_object = var_1_object; // 0x278 MovT
	var_168_object = var_0_bool; // 0x279 MovT
	func_1751(); // 0x27a NEW_2
	
Label_636:
	var_169_int = 13133; // 0x27c PushI
	var_170_bool = var_9_float == var_169_int; // 0x27d Eq
	if(var_170_bool == 0) goto Label_751; // 0x27e JumpB
	var_171_bool = 0; // 0x27f PushV
	var_171_bool = 0; // 0x280 MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x281 PushV
	var_173_object = var_1_object; // 0x282 MovT
	func_1824(var_173_object); // 0x283 NEW_2
	if(var_172_bool == 0) goto Label_652; // 0x285 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x286 PushV
	var_181_object = var_1_object; // 0x287 MovT
	func_1836(var_181_object); // 0x288 NEW_2
	if(var_180_bool == 0) goto Label_652; // 0x28a JumpB
	var_171_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_171_bool == 0) goto Label_678; // 0x28c JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x28d PushV
	var_186_object = var_1_object; // 0x28e MovT
	var_187_object = var_0_bool; // 0x28f MovT
	func_1745(); // 0x290 NEW_2
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
	func_1824(var_217_object); // 0x2b1 NEW_2
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
	func_1848(var_224_object); // 0x2bf NEW_2
	if(var_223_bool == 0) goto Label_713; // 0x2c1 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x2c2 PushV
	var_230_object = var_1_object; // 0x2c3 MovT
	func_1860(var_230_object); // 0x2c4 NEW_2
	var_235_bool = var_229_bool == 0; // 0x2c6 Not
	if(var_235_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_222_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_222_bool == 0) goto Label_720; // 0x2c9 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x2ca PushV
	var_237_object = var_1_object; // 0x2cb MovT
	func_1884(var_237_object); // 0x2cc NEW_2
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
	func_1860(var_247_object); // 0x2da NEW_2
	if(var_246_bool == 0) goto Label_739; // 0x2dc JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x2dd PushV
	var_249_object = var_1_object; // 0x2de MovT
	func_1872(var_249_object); // 0x2df NEW_2
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
	func_2018(var_450_bool); // 0x4b9 NEW_2
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
	func_1689(); // 0x53b NEW_2
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
	func_2020(var_27_object); // 0x550 NEW_2
	
Label_1362:
	return 2; // 0x552 Return
}


event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int, var_9_string)
{
	var_10_bool = 0; var_11_bool = 0; // 0x681 PushV
	var_12_string = "cleanup"; // 0x682 PushS
	var_13_bool = var_9_string == var_12_string; // 0x683 Eq
	if(var_13_bool == 0) goto Label_1682; // 0x684 JumpB
	var_14_bool = GlobalVars[1]; // 0x685 PushGE
	var_14_bool = 1; // 0x686 MovB
	GlobalVars[1] = var_14_bool; // 0x687 PopGE
	IsLoaded(var_11_bool); // 0x688 Func
	var_15_bool = var_11_bool == 0; // 0x68a Not
	if(var_15_bool == 0) goto Label_1681; // 0x68b JumpB
	var_16_object = Obj(); // 0x68c PushV
	func_1541(var_16_object); // 0x68d NEW_2
	RemoveActor(var_16_object); // 0x68f Func
	
Label_1681:
	goto Label_1688; // 0x691 Jump
	
Label_1688:
	return 2; // 0x698 Return
	
Label_1682:
	var_19_string = "restore"; // 0x692 PushS
	var_20_bool = var_9_string == var_19_string; // 0x693 Eq
	if(var_20_bool == 0) goto Label_1688; // 0x694 JumpB
	var_21_bool = GlobalVars[1]; // 0x695 PushGE
	var_21_bool = 0; // 0x696 MovB
	GlobalVars[1] = var_21_bool; // 0x697 PopGE
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_9_bool = GlobalVars[1]; // 0x699 PushGE
	if(var_9_bool == 0) goto Label_1696; // 0x69a JumpB
	var_10_object = Obj(); // 0x69b PushV
	func_1541(var_10_object); // 0x69c NEW_2
	RemoveActor(var_10_object); // 0x69e Func
	
Label_1696:
	return 0; // 0x6a0 Return
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
	func_1652(var_36_string, var_37_int); // 0x4d0 NEW_2
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
	func_1652(var_70_string, var_71_int); // 0x4eb NEW_2
	GetLocator(var_70_string, var_23_bool, var_24_cvector, var_25_cvector); // 0x4ed ObjFunc
	var_72_cvector = CVector(0,0,0); // 0x4ef PushV
	func_1363(var_72_cvector); // 0x4f0 NEW_2
	var_26_cvector = var_24_cvector - var_72_cvector; // 0x4f2 Sub2
	var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0x4f3 PushV
	var_76_cvector = var_26_cvector; // 0x4f4 Mov
	func_1565(var_75_float, var_76_cvector); // 0x4f5 NEW_2
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


func_1541(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x605 PushV
	self(var_12_object); // 0x606 Func
	var_10_object = var_12_object; // 0x608 Mov
	return 2; // 0x609 Return
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


func_1802()
{
	var_130_string = "ood5Gorbun2"; // 0x70b PushS
	var_131_int = 1; // 0x70c PushI
	SetVariable(var_130_string, var_131_int); // 0x70d Func
	return 0; // 0x70f Return
}


func_1547(var_66_cvector, var_67_cvector)
{
	var_69_float = 0; var_70_float = 0; // 0x60b PushV
	var_71_int = var_67_cvector | var_67_cvector; // 0x60c Or
	var_70_float = sqrt(var_71_int); // 0x60d Sqrt2
	var_72_float = 0.0; // 0x60e PushF
	var_73_bool = var_70_float < var_72_float; // 0x60f LT
	if(var_73_bool == 0) goto Label_1555; // 0x610 JumpB
	var_66_cvector = CVector(0.0, 0.0, 0.0); // 0x611 MovV
	return 2; // 0x612 Return
	
Label_1555:
	var_66_cvector = var_67_cvector / var_67_cvector; // 0x613 Div2
	return 2; // 0x614 Return
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


func_1808()
{
	var_117_string = "ood5Gorbun3"; // 0x711 PushS
	var_118_int = 1; // 0x712 PushI
	SetVariable(var_117_string, var_118_int); // 0x713 Func
	return 0; // 0x715 Return
}


func_1557(var_64_float, var_65_float)
{
	var_67_int = 0; // 0x616 PushI
	var_68_bool = var_65_float < var_67_int; // 0x617 LT
	if(var_68_bool == 0) goto Label_1563; // 0x618 JumpB
	var_64_float = -var_65_float; // 0x619 Neg2
	goto Label_1564; // 0x61a Jump
	
Label_1564:
	return 0; // 0x61c Return
	
Label_1563:
	var_64_float = var_65_float; // 0x61b Mov
}


func_1814(var_119_object)
{
	var_121_string = "money 50000 is given"; // 0x717 PushS
	Trace(var_121_string); // 0x718 Func
	var_122_object = Obj(); var_123_int = 0; // 0x71a PushV
	var_122_object = var_119_object; // 0x71b Mov
	var_123_int = 50000; // 0x71c MovI
	func_1592(var_122_object, var_123_int); // 0x71d NEW_2
	return 0; // 0x71f Return
}


func_282(var_0_bool, var_28_int, var_29_object)
{
	var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; var_37_int = 0; var_38_bool = 0; // 0x11a PushV
	var_0_bool = var_29_object; // 0x11b TMov
	var_39_bool = 0; var_40_object = Obj(); var_41_float = 0; // 0x11c PushV
	var_40_object = var_29_object; // 0x11d Mov
	var_41_float = 100.0; // 0x11e MovF
	func_1418(var_40_object, var_41_float); // 0x11f NEW_2
	var_85_bool = var_39_bool == 0; // 0x121 Not
	if(var_85_bool == 0) goto Label_293; // 0x122 JumpB
	var_28_int = -2; // 0x123 MovI
	return 8; // 0x124 Return
	
Label_293:
	CreateDialog(var_35_object); // 0x125 Func
	var_86_int = 0; // 0x127 PushV
	func_2012(var_86_int); // 0x128 NEW_2
	SetNPCName(var_86_int); // 0x12a ObjFunc
	var_87_int = 0; // 0x12c PushV
	func_2010(var_87_int); // 0x12d NEW_2
	SetNPCDescription(var_87_int); // 0x12f ObjFunc
	var_88_string = ""; // 0x131 PushV
	func_2014(var_88_string); // 0x132 NEW_2
	SetPhoto(var_88_string); // 0x134 ObjFunc
	var_89_string = ""; // 0x136 PushV
	func_2016(var_89_string); // 0x137 NEW_2
	SetPhoto2(var_89_string); // 0x139 ObjFunc
	var_90_int = 0; // 0x13b PushV
	func_1993(var_90_int); // 0x13c NEW_2
	SetPlayerName(var_90_int); // 0x13e ObjFunc
	var_37_int = -1; // 0x140 MovI
	IsOverrideActive(var_36_bool); // 0x141 Func
	var_98_bool = var_36_bool; // 0x143 Push
	if(var_98_bool == 0) goto Label_327; // 0x144 JumpB
	var_28_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	DoDialog(var_35_object); // 0x147 Func
	var_99_object = Obj(); var_100_object = Obj(); // 0x149 PushV
	var_99_object = var_29_object; // 0x14a Mov
	var_100_object = var_35_object; // 0x14b Mov
	TaskCall(5); // 0x14c TaskCall
	func_356(var_101_object, var_102_object, var_103_string, var_104_bool, var_99_object, var_100_object); // 0x14d NEW_2
	TaskReturn(); // 0x14e TaskReturn
	IsDialogEnd(var_38_bool); // 0x150 ObjFunc
	
Label_338:
	var_213_bool = var_38_bool == 0; // 0x152 Not
	if(var_213_bool == 0) goto Label_345; // 0x153 JumpB
	sync(); // 0x154 Func
	IsDialogEnd(var_38_bool); // 0x156 ObjFunc
	goto Label_338; // 0x158 Jump
	
Label_345:
	var_214_object = Obj(); // 0x159 PushV
	var_214_object = var_29_object; // 0x15a Mov
	func_1486(); // 0x15b NEW_2
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


func_1565(var_75_float, var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0); // 0x61e PushE
	var_78_float = GetByIndex(var_76_cvector, 0); // 0x61f PushE
	var_79_float = var_77_float * var_78_float; // 0x620 Mult
	var_80_float = GetByIndex(var_76_cvector, 2); // 0x621 PushE
	var_81_float = GetByIndex(var_76_cvector, 2); // 0x622 PushE
	var_82_float = var_80_float * var_81_float; // 0x623 Mult
	var_83_int = var_79_float + var_82_float; // 0x624 Add
	var_75_float = sqrt(var_83_int); // 0x625 Sqrt2
	return 0; // 0x626 Return
}


func_1824(var_107_bool)
{
	var_109_int = 0; var_110_string = ""; // 0x721 PushV
	var_110_string = "d5q02"; // 0x722 MovS
	func_1575(var_109_int, var_110_string); // 0x723 NEW_2
	var_113_int = 1; // 0x725 PushI
	var_114_bool = var_109_int == var_113_int; // 0x726 Eq
	if(var_114_bool == 0) goto Label_1834; // 0x727 JumpB
	var_107_bool = 1; // 0x728 MovB
	return 0; // 0x729 Return
	
Label_1834:
	var_107_bool = 0; // 0x72a MovB
	return 0; // 0x72b Return
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
	func_1557(var_64_float, var_65_float); // 0x535 NEW_2
	var_69_int = 40; // 0x537 PushI
	var_1_object = var_64_float + var_69_int; // 0x538 Add2
	return 4; // 0x539 Return
}


func_1575(var_109_int, var_110_string)
{
	var_111_int = 0; var_112_int = 0; // 0x627 PushV
	GetVariable(var_110_string, var_112_int); // 0x628 Func
	var_109_int = var_112_int; // 0x62a Mov
	return 2; // 0x62b Return
}


func_1836(var_115_bool)
{
	var_117_int = 0; var_118_string = ""; // 0x72d PushV
	var_118_string = "ood5Gorbun1"; // 0x72e MovS
	func_1575(var_117_int, var_118_string); // 0x72f NEW_2
	var_119_int = 0; // 0x731 PushI
	var_120_bool = var_117_int == var_119_int; // 0x732 Eq
	if(var_120_bool == 0) goto Label_1846; // 0x733 JumpB
	var_115_bool = 1; // 0x734 MovB
	return 0; // 0x735 Return
	
Label_1846:
	var_115_bool = 0; // 0x736 MovB
	return 0; // 0x737 Return
}


func_1580(var_74_int, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x62c PushV
	CreateIntVector(var_77_object); // 0x62d Func
	add(var_74_int); // 0x62f ObjFunc
	add(var_75_int); // 0x631 ObjFunc
	var_78_int = 3; // 0x633 PushI
	SendWorldWndMessage(var_78_int, var_77_object); // 0x634 Func
	return 2; // 0x636 Return
}


func_1848(var_176_bool)
{
	var_178_int = 0; var_179_string = ""; // 0x739 PushV
	var_179_string = "d5q02"; // 0x73a MovS
	func_1575(var_178_int, var_179_string); // 0x73b NEW_2
	var_180_int = 4; // 0x73d PushI
	var_181_bool = var_178_int == var_180_int; // 0x73e Eq
	if(var_181_bool == 0) goto Label_1858; // 0x73f JumpB
	var_176_bool = 1; // 0x740 MovB
	return 0; // 0x741 Return
	
Label_1858:
	var_176_bool = 0; // 0x742 MovB
	return 0; // 0x743 Return
}


func_1592(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x638 PushV
	var_65_object = Obj(); var_66_string = ""; var_67_int = 0; // 0x639 PushV
	var_65_object = var_61_object; // 0x63a Mov
	var_66_string = "money"; // 0x63b MovS
	var_67_int = var_62_int; // 0x63c Mov
	func_1376(var_66_string, var_67_int); // 0x63d NEW_2
	var_71_int = 0; // 0x63f PushI
	var_72_bool = var_62_int > var_71_int; // 0x640 GT
	if(var_72_bool == 0) goto Label_1610; // 0x641 JumpB
	var_73_string = "Money"; // 0x642 PushS
	GetInvItemByName(var_64_int, var_73_string); // 0x643 Func
	var_74_int = 0; var_75_int = 0; // 0x645 PushV
	var_74_int = var_64_int; // 0x646 Mov
	var_75_int = var_62_int; // 0x647 Mov
	func_1580(var_74_int, var_75_int); // 0x648 NEW_2
	
Label_1610:
	return 2; // 0x64a Return
}


func_1860(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x745 PushV
	var_185_string = "d5q02KnowNudeIsDead"; // 0x746 MovS
	func_1575(var_184_int, var_185_string); // 0x747 NEW_2
	var_186_int = 1; // 0x749 PushI
	var_187_bool = var_184_int == var_186_int; // 0x74a Eq
	if(var_187_bool == 0) goto Label_1870; // 0x74b JumpB
	var_182_bool = 1; // 0x74c MovB
	return 0; // 0x74d Return
	
Label_1870:
	var_182_bool = 0; // 0x74e MovB
	return 0; // 0x74f Return
}


func_1611(var_159_bool, var_160_string, var_161_string)
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x64b PushV
	FindActor(var_163_object, var_160_string); // 0x64c Func
	var_164_bool = var_163_object == 0; // 0x64e NullEq
	if(var_164_bool == 0) goto Label_1618; // 0x64f JumpB
	var_159_bool = 0; // 0x650 MovB
	return 2; // 0x651 Return
	
Label_1618:
	Trigger(var_163_object, var_161_string); // 0x652 Func
	var_159_bool = 1; // 0x654 MovB
	return 2; // 0x655 Return
}


func_1872(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x751 PushV
	var_204_string = "ood5Gorbun2"; // 0x752 MovS
	func_1575(var_203_int, var_204_string); // 0x753 NEW_2
	var_205_int = 0; // 0x755 PushI
	var_206_bool = var_203_int == var_205_int; // 0x756 Eq
	if(var_206_bool == 0) goto Label_1882; // 0x757 JumpB
	var_201_bool = 1; // 0x758 MovB
	return 0; // 0x759 Return
	
Label_1882:
	var_201_bool = 0; // 0x75a MovB
	return 0; // 0x75b Return
}


func_1363(var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x553 PushV
	GetPosition(var_74_cvector); // 0x554 Func
	var_72_cvector = var_74_cvector; // 0x556 Mov
	return 2; // 0x557 Return
}


func_1623(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x657 PushV
	GetGameTime(var_34_float); // 0x658 Func
	var_32_float = var_34_float; // 0x65a Mov
	return 2; // 0x65b Return
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


func_1628(var_160_string, var_161_int)
{
	var_162_string = ""; var_163_string = ""; // 0x65c PushV
	var_163_string = "idle"; // 0x65d MovS
	var_164_int = var_161_int; // 0x65e Push
	if(var_164_int == 0) goto Label_1633; // 0x65f JumpB
	var_163_string = var_163_string + var_161_int; // 0x660 Add2
	
Label_1633:
	var_160_string = var_163_string; // 0x661 Mov
	return 2; // 0x662 Return
}


func_1884(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x75d PushV
	var_192_string = "ood5Gorbun3"; // 0x75e MovS
	func_1575(var_191_int, var_192_string); // 0x75f NEW_2
	var_193_int = 0; // 0x761 PushI
	var_194_bool = var_191_int == var_193_int; // 0x762 Eq
	if(var_194_bool == 0) goto Label_1894; // 0x763 JumpB
	var_189_bool = 1; // 0x764 MovB
	return 0; // 0x765 Return
	
Label_1894:
	var_189_bool = 0; // 0x766 MovB
	return 0; // 0x767 Return
}


func_1376(var_66_string, var_67_int)
{
	var_68_int = 0; var_69_int = 0; // 0x560 PushV
	GetProperty(var_66_string, var_69_int); // 0x561 ObjFunc
	var_70_int = var_69_int + var_67_int; // 0x563 Add
	SetProperty(var_66_string, var_70_int); // 0x564 ObjFunc
	return 2; // 0x566 Return
}


func_1635(var_154_int)
{
	var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_bool = 0; // 0x663 PushV
	var_157_int = 0; // 0x664 MovI
	
Label_1637:
	var_159_string = "all"; // 0x665 PushS
	var_160_string = ""; var_161_int = 0; // 0x666 PushV
	var_161_int = var_157_int; // 0x667 Mov
	func_1628(var_160_string, var_161_int); // 0x668 NEW_2
	HasAnimation(var_158_bool, var_159_string, var_160_string); // 0x66a Func
	var_165_bool = var_158_bool == 0; // 0x66c Not
	if(var_165_bool == 0) goto Label_1647; // 0x66d JumpB
	goto Label_1650; // 0x66e Jump
	
Label_1650:
	var_154_int = var_157_int; // 0x672 Mov
	return 4; // 0x673 Return
	
Label_1647:
	var_166_int = 1; // 0x66f PushI
	var_157_int = var_157_int + var_166_int; // 0x670 Add2
	goto Label_1637; // 0x671 Jump
}


func_356(var_0_bool, var_1_object, var_2_object, var_3_object, var_99_object, var_100_object)
{
	var_0_bool = var_100_object; // 0x165 TMov
	var_1_object = var_99_object; // 0x166 TMov
	var_3_object = 0; // 0x167 TMovB
	var_105_int = 1; // 0x168 PushI
	if(var_105_int == 0) goto Label_476; // 0x169 JumpB
	var_106_bool = 0; // 0x16a PushV
	var_106_bool = 0; // 0x16b MovB
	var_107_bool = 0; var_108_object = Obj(); // 0x16c PushV
	var_108_object = var_1_object; // 0x16d MovT
	func_1824(var_108_object); // 0x16e NEW_2
	if(var_107_bool == 0) goto Label_375; // 0x170 JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x171 PushV
	var_116_object = var_1_object; // 0x172 MovT
	func_1836(var_116_object); // 0x173 NEW_2
	if(var_115_bool == 0) goto Label_375; // 0x175 JumpB
	var_106_bool = 1; // 0x176 MovB
	
Label_375:
	if(var_106_bool == 0) goto Label_401; // 0x177 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x178 PushV
	var_121_object = var_1_object; // 0x179 MovT
	var_122_object = var_0_bool; // 0x17a MovT
	func_1745(); // 0x17b NEW_2
	var_125_string = ""; // 0x17d PushV
	var_125_string = "Neutral"; // 0x17e MovS
	func_506(var_100_object, var_125_string); // 0x17f NEW_2
	var_142_int = 511917; // 0x181 PushI
	SetMessage(var_142_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_143_int = 515734; // 0x186 PushI
	var_144_int = 16793; // 0x187 PushI
	var_145_int = 16792; // 0x188 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x189 TObjFunc
	var_146_int = 515732; // 0x18b PushI
	var_147_int = 16791; // 0x18c PushI
	var_148_int = 16790; // 0x18d PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x18e TObjFunc
	goto Label_476; // 0x190 Jump
	
Label_476:
	var_149_bool = 0; // 0x1dc PushV
	func_2018(var_149_bool); // 0x1dd NEW_2
	if(var_149_bool == 0) goto Label_491; // 0x1df JumpB
	
Label_480:
	lshWaitForAnimEnd(); // 0x1e0 Func
	var_150_object = var_3_object; // 0x1e2 PushT
	if(var_150_object == 0) goto Label_485; // 0x1e3 JumpB
	goto Label_490; // 0x1e4 Jump
	
Label_490:
	goto Label_505; // 0x1ea Jump
	
Label_505:
	return 0; // 0x1f9 Return
	
Label_485:
	var_151_string = ""; // 0x1e5 PushV
	var_151_string = var_2_object; // 0x1e6 MovT
	func_1503(var_151_string); // 0x1e7 NEW_2
	goto Label_480; // 0x1e9 Jump
	
Label_491:
	var_162_string = "all"; // 0x1eb PushS
	var_163_string = "idle"; // 0x1ec PushS
	PlayAnimation(var_162_string, var_163_string); // 0x1ed Func
	
Label_495:
	WaitForAnimEnd(); // 0x1ef Func
	var_164_object = var_3_object; // 0x1f1 PushT
	if(var_164_object == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_505; // 0x1f3 Jump
	
Label_500:
	var_165_string = "all"; // 0x1f4 PushS
	var_166_string = "idle"; // 0x1f5 PushS
	PlayAnimation(var_165_string, var_166_string); // 0x1f6 Func
	goto Label_495; // 0x1f8 Jump
	
Label_401:
	var_167_string = ""; // 0x191 PushV
	var_167_string = "Neutral"; // 0x192 MovS
	func_506(var_100_object, var_167_string); // 0x193 NEW_2
	var_168_int = 511935; // 0x195 PushI
	SetMessage(var_168_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_169_bool = 0; var_170_object = Obj(); // 0x19a PushV
	var_170_object = var_1_object; // 0x19b MovT
	func_1824(var_170_object); // 0x19c NEW_2
	if(var_169_bool == 0) goto Label_420; // 0x19e JumpB
	var_171_int = 512489; // 0x19f PushI
	var_172_int = 13660; // 0x1a0 PushI
	var_173_int = 13658; // 0x1a1 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1a2 TObjFunc
	
Label_420:
	var_174_bool = 0; // 0x1a4 PushV
	var_174_bool = 0; // 0x1a5 MovB
	var_175_bool = 0; // 0x1a6 PushV
	var_175_bool = 0; // 0x1a7 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0x1a8 PushV
	var_177_object = var_1_object; // 0x1a9 MovT
	func_1848(var_177_object); // 0x1aa NEW_2
	if(var_176_bool == 0) goto Label_436; // 0x1ac JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x1ad PushV
	var_183_object = var_1_object; // 0x1ae MovT
	func_1860(var_183_object); // 0x1af NEW_2
	var_188_bool = var_182_bool == 0; // 0x1b1 Not
	if(var_188_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_175_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_175_bool == 0) goto Label_443; // 0x1b4 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x1b5 PushV
	var_190_object = var_1_object; // 0x1b6 MovT
	func_1884(var_190_object); // 0x1b7 NEW_2
	if(var_189_bool == 0) goto Label_443; // 0x1b9 JumpB
	var_174_bool = 1; // 0x1ba MovB
	
Label_443:
	if(var_174_bool == 0) goto Label_449; // 0x1bb JumpB
	var_195_int = 511936; // 0x1bc PushI
	var_196_int = 13155; // 0x1bd PushI
	var_197_int = 13153; // 0x1be PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1bf TObjFunc
	
Label_449:
	var_198_bool = 0; // 0x1c1 PushV
	var_198_bool = 0; // 0x1c2 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x1c3 PushV
	var_200_object = var_1_object; // 0x1c4 MovT
	func_1860(var_200_object); // 0x1c5 NEW_2
	if(var_199_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x1c8 PushV
	var_202_object = var_1_object; // 0x1c9 MovT
	func_1872(var_202_object); // 0x1ca NEW_2
	if(var_201_bool == 0) goto Label_462; // 0x1cc JumpB
	var_198_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_198_bool == 0) goto Label_468; // 0x1ce JumpB
	var_207_int = 511937; // 0x1cf PushI
	var_208_int = 13156; // 0x1d0 PushI
	var_209_int = 13154; // 0x1d1 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1d2 TObjFunc
	
Label_468:
	var_210_int = 512490; // 0x1d4 PushI
	var_211_int = -1; // 0x1d5 PushI
	var_212_int = 13659; // 0x1d6 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1d7 TObjFunc
	goto Label_476; // 0x1d9 Jump
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


func_1896()
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x768 PushV
	var_91_int = 715; // 0x769 PushI
	var_92_int = 2; // 0x76a PushI
	var_93_int = 536323; // 0x76b PushI
	CreateDiaryEntry(var_90_object, var_91_int, var_92_int, var_93_int); // 0x76c Func
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; // 0x76e PushV
	var_95_object = var_90_object; // 0x76f Mov
	var_96_int = 148; // 0x770 MovI
	func_1948(var_94_bool, var_95_object, var_96_int); // 0x771 NEW_2
	return 2; // 0x773 Return
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


func_1652(var_36_string, var_37_int)
{
	var_38_int = 0; // 0x675 PushI
	var_39_bool = var_37_int == var_38_int; // 0x676 Eq
	if(var_39_bool == 0) goto Label_1660; // 0x677 JumpB
	var_40_string = "pt_"; // 0x678 PushS
	var_41_string = GlobalVars[0]; // 0x679 PushGE
	var_36_string = var_40_string + var_41_string; // 0x67a Add2
	goto Label_1664; // 0x67b Jump
	
Label_1664:
	return 0; // 0x680 Return
	
Label_1660:
	var_42_string = "pt_"; // 0x67c PushS
	var_43_string = GlobalVars[0]; // 0x67d PushGE
	var_44_int = var_42_string + var_43_string; // 0x67e Add
	var_36_string = var_44_int + var_37_int; // 0x67f Add2
}


func_1909()
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x775 PushV
	var_37_int = 150; // 0x776 PushI
	var_38_int = 2; // 0x777 PushI
	var_39_int = 515356; // 0x778 PushI
	CreateDiaryEntry(var_36_object, var_37_int, var_38_int, var_39_int); // 0x779 Func
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0; // 0x77b PushV
	var_41_object = var_36_object; // 0x77c Mov
	var_42_int = 148; // 0x77d MovI
	func_1948(var_40_bool, var_41_object, var_42_int); // 0x77e NEW_2
	return 2; // 0x780 Return
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


func_1922()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x782 PushV
	var_153_int = 153; // 0x783 PushI
	var_154_int = 2; // 0x784 PushI
	var_155_int = 515359; // 0x785 PushI
	CreateDiaryEntry(var_152_object, var_153_int, var_154_int, var_155_int); // 0x786 Func
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0; // 0x788 PushV
	var_157_object = var_152_object; // 0x789 Mov
	var_158_int = 148; // 0x78a MovI
	func_1948(var_156_bool, var_157_object, var_158_int); // 0x78b NEW_2
	return 2; // 0x78d Return
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
	func_1547(var_66_cvector, var_67_cvector); // 0x5a5 NEW_2
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
	CameraTransit(var_57_cvector, var_55_cvector); // 0x5b5 Func
	var_79_float = GetByIndex(var_56_cvector, 0); // 0x5b7 PushE
	var_80_float = GetByIndex(var_56_cvector, 2); // 0x5b8 PushE
	Rotate(var_79_float, var_80_float); // 0x5b9 Func
	var_81_bool = 0; // 0x5bb PushV
	func_2018(var_81_bool); // 0x5bc NEW_2
	if(var_81_bool == 0) goto Label_1472; // 0x5be JumpB
	goto Label_1480; // 0x5bf Jump
	
Label_1480:
	CameraWaitForPlayFinish(); // 0x5c8 Func
	ResumeWorld(); // 0x5ca Func
	var_39_bool = 1; // 0x5cc MovB
	return 18; // 0x5cd Return
	
Label_1472:
	var_82_string = "head"; // 0x5c0 PushS
	HasAnimationTrack(var_59_bool, var_82_string); // 0x5c1 Func
	var_83_bool = var_59_bool; // 0x5c3 Push
	if(var_83_bool == 0) goto Label_1480; // 0x5c4 JumpB
	var_84_string = "head"; // 0x5c5 PushS
	LookAsyncCamera(var_84_string); // 0x5c6 Func
}


func_1935(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x78f PushV
	GetDiaryRoot(var_51_object); // 0x790 Func
	var_52_bool = var_51_object == 0; // 0x792 Not
	if(var_52_bool == 0) goto Label_1945; // 0x793 JumpB
	var_53_string = "Can't retrieve diary root"; // 0x794 PushS
	Trace(var_53_string); // 0x795 Func
	var_49_object = 0; // 0x797 MovB
	return 2; // 0x798 Return
	
Label_1945:
	var_49_object = var_51_object; // 0x799 Mov
	return 2; // 0x79a Return
}


func_145()
{
	Stop(); // 0x91 Func
	return 0; // 0x93 Return
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


func_1948(var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; // 0x79c PushV
	var_49_object = Obj(); // 0x79d PushV
	func_1935(var_49_object); // 0x79e NEW_2
	var_46_object = var_49_object; // 0x79f Mov
	Find(var_42_int, var_47_object); // 0x7a1 ObjFunc
	var_54_bool = var_47_object == 0; // 0x7a3 Not
	if(var_54_bool == 0) goto Label_1963; // 0x7a4 JumpB
	var_55_string = "Can't find diary parent with id: "; // 0x7a5 PushS
	var_56_int = var_55_string + var_42_int; // 0x7a6 Add
	Trace(var_56_int); // 0x7a7 Func
	var_40_bool = 0; // 0x7a9 MovB
	return 6; // 0x7aa Return
	
Label_1963:
	AddChild(var_41_object); // 0x7ab ObjFunc
	var_57_int = 7; // 0x7ad PushI
	SendWorldWndMessage(var_57_int); // 0x7ae Func
	GetCategory(var_48_int); // 0x7b0 ObjFunc
	SetDiarySection(var_48_int); // 0x7b2 Func
	var_40_bool = 0; // 0x7b4 MovB
	return 6; // 0x7b5 Return
}


func_1697(var_58_object)
{
	var_60_string = "money10000 is given"; // 0x6a2 PushS
	Trace(var_60_string); // 0x6a3 Func
	var_61_object = Obj(); var_62_int = 0; // 0x6a5 PushV
	var_61_object = var_58_object; // 0x6a6 Mov
	var_62_int = 10000; // 0x6a7 MovI
	func_1592(var_61_object, var_62_int); // 0x6a8 NEW_2
	return 0; // 0x6aa Return
}


func_1707()
{
	var_81_string = "playsound"; // 0x6ac PushS
	var_82_string = "givemoney"; // 0x6ad PushS
	TriggerWorld(var_81_string, var_82_string); // 0x6ae Func
	return 0; // 0x6b0 Return
}


func_1713()
{
	var_87_string = "d5q02"; // 0x6b2 PushS
	var_88_int = -1; // 0x6b3 PushI
	SetVariable(var_87_string, var_88_int); // 0x6b4 Func
	func_1896(); // 0x6b7 NEW_2
	return 0; // 0x6b9 Return
}


func_1976(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x7b8 PushV
	GetMainOutdoorScene(var_24_object); // 0x7b9 Func
	var_26_bool = var_24_object == 0; // 0x7bb NullEq
	if(var_26_bool == 0) goto Label_1987; // 0x7bc JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x7bd PushS
	Trace(var_27_string); // 0x7be Func
	var_25_object = 0; // 0x7c0 SetNull
	var_21_object = var_25_object; // 0x7c1 Mov
	return 4; // 0x7c2 Return
	
Label_1987:
	GetMap(var_25_object); // 0x7c3 ObjFunc
	var_21_object = var_25_object; // 0x7c5 Mov
	return 4; // 0x7c6 Return
}


func_1722()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x6ba PushV
	var_19_string = "d5q02"; // 0x6bb PushS
	var_20_int = 2; // 0x6bc PushI
	SetVariable(var_19_string, var_20_int); // 0x6bd Func
	var_21_object = Obj(); // 0x6bf PushV
	func_1976(var_21_object); // 0x6c0 NEW_2
	var_18_object = var_21_object; // 0x6c1 Mov
	var_28_string = "d5q02GorbunFindTheDaughter"; // 0x6c3 PushS
	var_29_string = "pt_map_gorbun"; // 0x6c4 PushS
	var_30_int = 0; // 0x6c5 PushI
	var_31_int = 515362; // 0x6c6 PushI
	var_32_float = 0; // 0x6c7 PushV
	func_1623(var_32_float); // 0x6c8 NEW_2
	AddMark(var_28_string, var_29_string, var_30_int, var_31_int, var_32_float); // 0x6ca ObjFunc
	func_1909(); // 0x6cd NEW_2
	return 2; // 0x6cf Return
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
	func_1635(var_154_int); // 0xe6 NEW_2
	var_131_int = var_154_int; // 0xe7 Mov
	var_167_int = var_131_int; // 0xe9 Push
	if(var_167_int == 0) goto Label_246; // 0xea JumpB
	irand(var_132_int, var_131_int); // 0xeb Func
	var_168_string = "all"; // 0xed PushS
	var_169_string = ""; var_170_int = 0; // 0xee PushV
	var_170_int = var_132_int; // 0xef Mov
	func_1628(var_169_string, var_170_int); // 0xf0 NEW_2
	PlayAnimation(var_168_string, var_169_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	
Label_204:
	var_126_string = "ptidle"; // 0xcc MovS
}


func_1993(var_90_int)
{
	var_91_int = 0; var_92_int = 0; // 0x7c9 PushV
	var_93_string = "branch"; // 0x7ca PushS
	GetVariable(var_93_string, var_92_int); // 0x7cb Func
	var_94_int = 0; // 0x7cd PushI
	var_95_bool = var_92_int == var_94_int; // 0x7ce Eq
	if(var_95_bool == 0) goto Label_2003; // 0x7cf JumpB
	var_90_int = 1; // 0x7d0 MovI
	return 2; // 0x7d1 Return
	
Label_2003:
	var_96_int = 1; // 0x7d3 PushI
	var_97_bool = var_92_int == var_96_int; // 0x7d4 Eq
	if(var_97_bool == 0) goto Label_2008; // 0x7d5 JumpB
	var_90_int = 2; // 0x7d6 MovI
	return 2; // 0x7d7 Return
	
Label_2008:
	var_90_int = 3; // 0x7d8 MovI
	return 2; // 0x7d9 Return
}


func_1486()
{
	var_215_bool = 0; var_216_bool = 0; // 0x5ce PushV
	CameraSwitchToNormal(); // 0x5cf Func
	var_217_bool = 0; // 0x5d1 PushV
	func_2018(var_217_bool); // 0x5d2 NEW_2
	if(var_217_bool == 0) goto Label_1494; // 0x5d4 JumpB
	goto Label_1502; // 0x5d5 Jump
	
Label_1502:
	return 2; // 0x5de Return
	
Label_1494:
	var_218_string = "head"; // 0x5d6 PushS
	HasAnimationTrack(var_216_bool, var_218_string); // 0x5d7 Func
	var_219_bool = var_216_bool; // 0x5d9 Push
	if(var_219_bool == 0) goto Label_1502; // 0x5da JumpB
	var_220_string = "head"; // 0x5db PushS
	UnlookAsync(var_220_string); // 0x5dc Func
}


func_1745()
{
	var_123_string = "ood5Gorbun1"; // 0x6d2 PushS
	var_124_int = 1; // 0x6d3 PushI
	SetVariable(var_123_string, var_124_int); // 0x6d4 Func
	return 0; // 0x6d6 Return
}


func_1751()
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_object = Obj(); // 0x6d7 PushV
	var_140_object = Obj(); // 0x6d8 PushV
	func_1976(var_140_object); // 0x6d9 NEW_2
	var_138_object = var_140_object; // 0x6da Mov
	var_141_string = "d5q02AnnaGotoGorbun"; // 0x6dc PushS
	FindMark(var_139_object, var_141_string); // 0x6dd ObjFunc
	var_142_object = var_139_object; // 0x6df Push
	if(var_142_object == 0) goto Label_1763; // 0x6e0 JumpB
	Remove(); // 0x6e1 ObjFunc
	
Label_1763:
	var_143_string = "d5q02AnnaGotoGorbunSelf"; // 0x6e3 PushS
	FindMark(var_139_object, var_143_string); // 0x6e4 ObjFunc
	var_144_object = var_139_object; // 0x6e6 Push
	if(var_144_object == 0) goto Label_1770; // 0x6e7 JumpB
	Remove(); // 0x6e8 ObjFunc
	
Label_1770:
	var_145_string = "d5q02AnnaGotoKabak"; // 0x6ea PushS
	FindMark(var_139_object, var_145_string); // 0x6eb ObjFunc
	var_146_object = var_139_object; // 0x6ed Push
	if(var_146_object == 0) goto Label_1777; // 0x6ee JumpB
	Remove(); // 0x6ef ObjFunc
	
Label_1777:
	var_147_string = "d5q02GorbunFindTheDaughter"; // 0x6f1 PushS
	FindMark(var_139_object, var_147_string); // 0x6f2 ObjFunc
	var_148_object = var_139_object; // 0x6f4 Push
	if(var_148_object == 0) goto Label_1784; // 0x6f5 JumpB
	Remove(); // 0x6f6 ObjFunc
	
Label_1784:
	var_149_string = "d5q02NudeMeeting"; // 0x6f8 PushS
	FindMark(var_139_object, var_149_string); // 0x6f9 ObjFunc
	var_150_object = var_139_object; // 0x6fb Push
	if(var_150_object == 0) goto Label_1791; // 0x6fc JumpB
	Remove(); // 0x6fd ObjFunc
	
Label_1791:
	func_1922(); // 0x700 NEW_2
	var_159_bool = 0; var_160_string = ""; var_161_string = ""; // 0x702 PushV
	var_160_string = "quest_d5_02"; // 0x703 MovS
	var_161_string = "completed"; // 0x704 MovS
	func_1611(var_159_bool, var_160_string, var_161_string); // 0x705 NEW_2
	return 4; // 0x707 Return
}


func_2010(var_87_int)
{
	var_87_int = 515594; // 0x7da MovI
	return 0; // 0x7db Return
}


func_2012(var_86_int)
{
	var_86_int = 512583; // 0x7dc MovI
	return 0; // 0x7dd Return
}


func_2014(var_88_string)
{
	var_88_string = "ui/NPC_Citizen3.png"; // 0x7de MovS
	return 0; // 0x7df Return
}


func_1503(var_151_string)
{
	var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_float = 0; var_157_float = 0; // 0x5df PushV
	lshHasAnimation(var_155_bool, var_151_string); // 0x5e0 Func
	var_158_bool = var_155_bool; // 0x5e2 Push
	if(var_158_bool == 0) goto Label_1514; // 0x5e3 JumpB
	lshGetAnimTimes(var_151_string, var_156_float, var_157_float); // 0x5e4 Func
	var_159_bool = 0; // 0x5e6 PushB
	lshPlayAnimation(var_156_float, var_157_float, var_159_bool); // 0x5e7 Func
	goto Label_1518; // 0x5e9 Jump
	
Label_1518:
	return 6; // 0x5ee Return
	
Label_1514:
	var_160_string = "Can't find lsh animation : "; // 0x5ea PushS
	var_161_int = var_160_string + var_151_string; // 0x5eb Add
	Trace(var_161_int); // 0x5ec Func
}


func_2016(var_89_string)
{
	var_89_string = "ui/NPC_Citizen3_b.png"; // 0x7e0 MovS
	return 0; // 0x7e1 Return
}


func_2018(var_81_bool)
{
	var_81_bool = 0; // 0x7e2 MovB
	return 0; // 0x7e3 Return
}


func_2020(var_27_object)
{
	var_28_int = 0; var_29_object = Obj(); // 0x7e5 PushV
	var_29_object = var_27_object; // 0x7e6 Mov
	TaskCall(4); // 0x7e7 TaskCall
	func_282(var_30_object, var_28_int, var_29_object); // 0x7e8 NEW_2
	TaskReturn(); // 0x7e9 TaskReturn
	return 0; // 0x7eb Return
}


func_1519(var_129_string, var_130_bool)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x5ef PushV
	lshHasAnimation(var_136_bool, var_129_string); // 0x5f0 Func
	var_139_bool = var_136_bool; // 0x5f2 Push
	if(var_139_bool == 0) goto Label_1529; // 0x5f3 JumpB
	lshGetAnimTimes(var_129_string, var_137_float, var_138_float); // 0x5f4 Func
	lshPlayAnimation(var_137_float, var_138_float, var_130_bool); // 0x5f6 Func
	goto Label_1533; // 0x5f8 Jump
	
Label_1533:
	return 6; // 0x5fd Return
	
Label_1529:
	var_140_string = "Can't find lsh animation : "; // 0x5f9 PushS
	var_141_int = var_140_string + var_129_string; // 0x5fa Add
	Trace(var_141_int); // 0x5fb Func
}


func_506(var_2_object, var_125_string)
{
	var_126_bool = 0; // 0x1fb PushV
	func_2018(var_126_bool); // 0x1fc NEW_2
	var_127_bool = var_126_bool == 0; // 0x1fe Not
	if(var_127_bool == 0) goto Label_513; // 0x1ff JumpB
	return 0; // 0x200 Return
	
Label_513:
	var_128_bool = var_125_string == var_2_object; // 0x201 Eq
	if(var_128_bool == 0) goto Label_516; // 0x202 JumpB
	return 0; // 0x203 Return
	
Label_516:
	var_129_string = ""; var_130_bool = 0; // 0x204 PushV
	var_129_string = var_125_string; // 0x205 Mov
	var_131_string = ""; // 0x206 PushS
	var_132_bool = var_125_string == var_131_string; // 0x207 Eq
	if(var_132_bool == 0) goto Label_523; // 0x208 JumpB
	var_130_bool = 0; // 0x209 MovB
	goto Label_524; // 0x20a Jump
	
Label_524:
	func_1519(var_129_string, var_130_bool); // 0x20c NEW_2
	var_2_object = var_125_string; // 0x20e TMov
	return 0; // 0x20f Return
	
Label_523:
	var_130_bool = 1; // 0x20b MovB
}


func_1534()
{
	var_12_bool = 0; // 0x5fe PushV
	func_2018(var_12_bool); // 0x5ff NEW_2
	if(var_12_bool == 0) goto Label_1540; // 0x601 JumpB
	lshStopSpeech(); // 0x602 Func
	
Label_1540:
	return 0; // 0x604 Return
}


