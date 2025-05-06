task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa2 PushI
	if(var_23_int == 0) goto Label_225; // 0xa3 JumpB
	func_2160(); // 0xa5 NEW_2
	var_25_int = 19190; // 0xa7 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa8 Eq
	if(var_26_bool == 0) goto Label_190; // 0xa9 JumpB
	var_27_string = ""; // 0xaa PushV
	var_27_string = "Neutral"; // 0xab MovS
	func_139(var_22_cvector, var_27_string); // 0xac NEW_2
	var_44_int = 518057; // 0xae PushI
	SetMessage(var_44_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_45_int = 518058; // 0xb3 PushI
	var_46_int = 32643; // 0xb4 PushI
	var_47_int = 19191; // 0xb5 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb6 TObjFunc
	var_48_int = 531316; // 0xb8 PushI
	var_49_int = 32643; // 0xb9 PushI
	var_50_int = 32642; // 0xba PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_51_int = 32643; // 0xbe PushI
	var_52_bool = var_21_bool == var_51_int; // 0xbf Eq
	if(var_52_bool == 0) goto Label_213; // 0xc0 JumpB
	var_53_string = ""; // 0xc1 PushV
	var_53_string = "Neutral"; // 0xc2 MovS
	func_139(var_22_cvector, var_53_string); // 0xc3 NEW_2
	var_54_int = 531317; // 0xc5 PushI
	SetMessage(var_54_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_55_int = 531318; // 0xca PushI
	var_56_int = -1; // 0xcb PushI
	var_57_int = 32644; // 0xcc PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xcd TObjFunc
	var_58_int = 531319; // 0xcf PushI
	var_59_int = -1; // 0xd0 PushI
	var_60_int = 32645; // 0xd1 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_61_bool = 0; // 0xd6 PushV
	func_2271(var_61_bool); // 0xd7 NEW_2
	if(var_61_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x1d2 PushI
	if(var_23_int == 0) goto Label_1128; // 0x1d3 JumpB
	func_2160(); // 0x1d5 NEW_2
	var_25_int = 22664; // 0x1d7 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x1d8 Eq
	if(var_26_bool == 0) goto Label_479; // 0x1d9 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x1da PushV
	var_27_object = var_1_object; // 0x1db MovT
	var_28_object = var_0_object; // 0x1dc MovT
	func_2273(); // 0x1dd NEW_2
	
Label_479:
	var_78_int = 22669; // 0x1df PushI
	var_79_bool = var_22_cvector == var_78_int; // 0x1e0 Eq
	if(var_79_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x1e2 PushV
	var_80_object = var_1_object; // 0x1e3 MovT
	var_81_object = var_0_object; // 0x1e4 MovT
	func_2273(); // 0x1e5 NEW_2
	
Label_487:
	var_82_int = 22684; // 0x1e7 PushI
	var_83_bool = var_22_cvector == var_82_int; // 0x1e8 Eq
	if(var_83_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x1ea PushV
	var_84_object = var_1_object; // 0x1eb MovT
	var_85_object = var_0_object; // 0x1ec MovT
	func_2305(); // 0x1ed NEW_2
	
Label_495:
	var_88_int = 25222; // 0x1ef PushI
	var_89_bool = var_22_cvector == var_88_int; // 0x1f0 Eq
	if(var_89_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x1f2 PushV
	var_90_object = var_1_object; // 0x1f3 MovT
	var_91_object = var_0_object; // 0x1f4 MovT
	func_2323(); // 0x1f5 NEW_2
	
Label_503:
	var_102_int = 25223; // 0x1f7 PushI
	var_103_bool = var_22_cvector == var_102_int; // 0x1f8 Eq
	if(var_103_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x1fa PushV
	var_104_object = var_1_object; // 0x1fb MovT
	var_105_object = var_0_object; // 0x1fc MovT
	func_2323(); // 0x1fd NEW_2
	
Label_511:
	var_106_int = 25224; // 0x1ff PushI
	var_107_bool = var_22_cvector == var_106_int; // 0x200 Eq
	if(var_107_bool == 0) goto Label_519; // 0x201 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x202 PushV
	var_108_object = var_1_object; // 0x203 MovT
	var_109_object = var_0_object; // 0x204 MovT
	func_2323(); // 0x205 NEW_2
	
Label_519:
	var_110_int = 25219; // 0x207 PushI
	var_111_bool = var_22_cvector == var_110_int; // 0x208 Eq
	if(var_111_bool == 0) goto Label_527; // 0x209 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x20a PushV
	var_112_object = var_1_object; // 0x20b MovT
	var_113_object = var_0_object; // 0x20c MovT
	func_2323(); // 0x20d NEW_2
	
Label_527:
	var_114_int = 25220; // 0x20f PushI
	var_115_bool = var_22_cvector == var_114_int; // 0x210 Eq
	if(var_115_bool == 0) goto Label_535; // 0x211 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x212 PushV
	var_116_object = var_1_object; // 0x213 MovT
	var_117_object = var_0_object; // 0x214 MovT
	func_2323(); // 0x215 NEW_2
	
Label_535:
	var_118_int = 22687; // 0x217 PushI
	var_119_bool = var_22_cvector == var_118_int; // 0x218 Eq
	if(var_119_bool == 0) goto Label_543; // 0x219 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x21a PushV
	var_120_object = var_1_object; // 0x21b MovT
	var_121_object = var_0_object; // 0x21c MovT
	func_2305(); // 0x21d NEW_2
	
Label_543:
	var_122_int = 22689; // 0x21f PushI
	var_123_bool = var_22_cvector == var_122_int; // 0x220 Eq
	if(var_123_bool == 0) goto Label_561; // 0x221 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x222 PushV
	var_124_object = var_1_object; // 0x223 MovT
	var_125_object = var_0_object; // 0x224 MovT
	func_2311(); // 0x225 NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0x227 PushV
	var_128_object = var_1_object; // 0x228 MovT
	var_129_object = var_0_object; // 0x229 MovT
	func_2341(var_129_object); // 0x22a NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0x22c PushV
	var_149_object = var_1_object; // 0x22d MovT
	var_150_object = var_0_object; // 0x22e MovT
	func_2332(); // 0x22f NEW_2
	
Label_561:
	var_161_int = 25228; // 0x231 PushI
	var_162_bool = var_22_cvector == var_161_int; // 0x232 Eq
	if(var_162_bool == 0) goto Label_579; // 0x233 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x234 PushV
	var_163_object = var_1_object; // 0x235 MovT
	var_164_object = var_0_object; // 0x236 MovT
	func_2341(var_164_object); // 0x237 NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x239 PushV
	var_165_object = var_1_object; // 0x23a MovT
	var_166_object = var_0_object; // 0x23b MovT
	func_2311(); // 0x23c NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x23e PushV
	var_167_object = var_1_object; // 0x23f MovT
	var_168_object = var_0_object; // 0x240 MovT
	func_2332(); // 0x241 NEW_2
	
Label_579:
	var_169_int = 25229; // 0x243 PushI
	var_170_bool = var_22_cvector == var_169_int; // 0x244 Eq
	if(var_170_bool == 0) goto Label_587; // 0x245 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x246 PushV
	var_171_object = var_1_object; // 0x247 MovT
	var_172_object = var_0_object; // 0x248 MovT
	func_2332(); // 0x249 NEW_2
	
Label_587:
	var_173_int = 25231; // 0x24b PushI
	var_174_bool = var_22_cvector == var_173_int; // 0x24c Eq
	if(var_174_bool == 0) goto Label_595; // 0x24d JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x24e PushV
	var_175_object = var_1_object; // 0x24f MovT
	var_176_object = var_0_object; // 0x250 MovT
	func_2332(); // 0x251 NEW_2
	
Label_595:
	var_177_int = 22663; // 0x253 PushI
	var_178_bool = var_21_bool == var_177_int; // 0x254 Eq
	if(var_178_bool == 0) goto Label_696; // 0x255 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x256 PushV
	var_180_object = var_1_object; // 0x257 MovT
	func_2351(var_180_object); // 0x258 NEW_2
	if(var_179_bool == 0) goto Label_633; // 0x25a JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x25b PushV
	var_187_object = var_1_object; // 0x25c MovT
	var_188_object = var_0_object; // 0x25d MovT
	func_2299(); // 0x25e NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x260 PushV
	var_191_object = var_1_object; // 0x261 MovT
	var_192_object = var_0_object; // 0x262 MovT
	func_2317(); // 0x263 NEW_2
	var_195_string = ""; // 0x265 PushV
	var_195_string = "Neutral"; // 0x266 MovS
	func_443(var_22_cvector, var_195_string); // 0x267 NEW_2
	var_212_int = 521502; // 0x269 PushI
	SetMessage(var_212_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_213_int = 523951; // 0x26e PushI
	var_214_int = 25235; // 0x26f PushI
	var_215_int = 25234; // 0x270 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x271 TObjFunc
	var_216_int = 523957; // 0x273 PushI
	var_217_int = 25241; // 0x274 PushI
	var_218_int = 25240; // 0x275 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x276 TObjFunc
	return 0; // 0x278 Return
	
Label_633:
	var_219_string = ""; // 0x279 PushV
	var_219_string = "Neutral"; // 0x27a MovS
	func_443(var_22_cvector, var_219_string); // 0x27b NEW_2
	var_220_int = 521505; // 0x27d PushI
	SetMessage(var_220_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_221_bool = 0; var_222_object = Obj(); // 0x282 PushV
	var_222_object = var_1_object; // 0x283 MovT
	func_2363(var_222_object); // 0x284 NEW_2
	if(var_221_bool == 0) goto Label_652; // 0x286 JumpB
	var_227_int = 521506; // 0x287 PushI
	var_228_int = 22668; // 0x288 PushI
	var_229_int = 22667; // 0x289 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x28a TObjFunc
	
Label_652:
	var_230_bool = 0; // 0x28c PushV
	var_230_bool = 0; // 0x28d MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x28e PushV
	var_232_object = var_1_object; // 0x28f MovT
	func_2398(var_232_object); // 0x290 NEW_2
	if(var_231_bool == 0) goto Label_665; // 0x292 JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x293 PushV
	var_243_object = var_1_object; // 0x294 MovT
	func_2421(var_243_object); // 0x295 NEW_2
	if(var_242_bool == 0) goto Label_665; // 0x297 JumpB
	var_230_bool = 1; // 0x298 MovB
	
Label_665:
	if(var_230_bool == 0) goto Label_671; // 0x299 JumpB
	var_248_int = 521523; // 0x29a PushI
	var_249_int = 25213; // 0x29b PushI
	var_250_int = 22684; // 0x29c PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x29d TObjFunc
	
Label_671:
	var_251_bool = 0; // 0x29f PushV
	var_251_bool = 0; // 0x2a0 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x2a1 PushV
	var_253_object = var_1_object; // 0x2a2 MovT
	func_2375(var_253_object); // 0x2a3 NEW_2
	if(var_252_bool == 0) goto Label_684; // 0x2a5 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x2a6 PushV
	var_264_object = var_1_object; // 0x2a7 MovT
	func_2421(var_264_object); // 0x2a8 NEW_2
	if(var_263_bool == 0) goto Label_684; // 0x2aa JumpB
	var_251_bool = 1; // 0x2ab MovB
	
Label_684:
	if(var_251_bool == 0) goto Label_690; // 0x2ac JumpB
	var_265_int = 521526; // 0x2ad PushI
	var_266_int = 22688; // 0x2ae PushI
	var_267_int = 22687; // 0x2af PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x2b0 TObjFunc
	
Label_690:
	var_268_int = 521509; // 0x2b2 PushI
	var_269_int = -1; // 0x2b3 PushI
	var_270_int = 22670; // 0x2b4 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_271_int = 22688; // 0x2b8 PushI
	var_272_bool = var_21_bool == var_271_int; // 0x2b9 Eq
	if(var_272_bool == 0) goto Label_724; // 0x2ba JumpB
	var_273_string = ""; // 0x2bb PushV
	var_273_string = "Grin"; // 0x2bc MovS
	func_443(var_22_cvector, var_273_string); // 0x2bd NEW_2
	var_274_int = 521527; // 0x2bf PushI
	SetMessage(var_274_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_275_int = 521528; // 0x2c4 PushI
	var_276_int = -1; // 0x2c5 PushI
	var_277_int = 22689; // 0x2c6 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x2c7 TObjFunc
	var_278_int = 523942; // 0x2c9 PushI
	var_279_int = 25227; // 0x2ca PushI
	var_280_int = 25225; // 0x2cb PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x2cc TObjFunc
	var_281_int = 523943; // 0x2ce PushI
	var_282_int = 25230; // 0x2cf PushI
	var_283_int = 25226; // 0x2d0 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x2d1 TObjFunc
	return 0; // 0x2d3 Return
	
Label_724:
	var_284_int = 25230; // 0x2d4 PushI
	var_285_bool = var_21_bool == var_284_int; // 0x2d5 Eq
	if(var_285_bool == 0) goto Label_742; // 0x2d6 JumpB
	var_286_string = ""; // 0x2d7 PushV
	var_286_string = "Grin"; // 0x2d8 MovS
	func_443(var_22_cvector, var_286_string); // 0x2d9 NEW_2
	var_287_int = 523947; // 0x2db PushI
	SetMessage(var_287_int); // 0x2dc TObjFunc
	ClearReplies(); // 0x2de TObjFunc
	var_288_int = 523948; // 0x2e0 PushI
	var_289_int = -1; // 0x2e1 PushI
	var_290_int = 25231; // 0x2e2 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_291_int = 25227; // 0x2e6 PushI
	var_292_bool = var_21_bool == var_291_int; // 0x2e7 Eq
	if(var_292_bool == 0) goto Label_765; // 0x2e8 JumpB
	var_293_string = ""; // 0x2e9 PushV
	var_293_string = "Grin"; // 0x2ea MovS
	func_443(var_22_cvector, var_293_string); // 0x2eb NEW_2
	var_294_int = 523944; // 0x2ed PushI
	SetMessage(var_294_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_295_int = 523945; // 0x2f2 PushI
	var_296_int = -1; // 0x2f3 PushI
	var_297_int = 25228; // 0x2f4 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x2f5 TObjFunc
	var_298_int = 523946; // 0x2f7 PushI
	var_299_int = -1; // 0x2f8 PushI
	var_300_int = 25229; // 0x2f9 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x2fa TObjFunc
	return 0; // 0x2fc Return
	
Label_765:
	var_301_int = 25213; // 0x2fd PushI
	var_302_bool = var_21_bool == var_301_int; // 0x2fe Eq
	if(var_302_bool == 0) goto Label_788; // 0x2ff JumpB
	var_303_string = ""; // 0x300 PushV
	var_303_string = "Neutral"; // 0x301 MovS
	func_443(var_22_cvector, var_303_string); // 0x302 NEW_2
	var_304_int = 523930; // 0x304 PushI
	SetMessage(var_304_int); // 0x305 TObjFunc
	ClearReplies(); // 0x307 TObjFunc
	var_305_int = 523931; // 0x309 PushI
	var_306_int = 22685; // 0x30a PushI
	var_307_int = 25214; // 0x30b PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x30c TObjFunc
	var_308_int = 523932; // 0x30e PushI
	var_309_int = 25216; // 0x30f PushI
	var_310_int = 25215; // 0x310 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x311 TObjFunc
	return 0; // 0x313 Return
	
Label_788:
	var_311_int = 25216; // 0x314 PushI
	var_312_bool = var_21_bool == var_311_int; // 0x315 Eq
	if(var_312_bool == 0) goto Label_806; // 0x316 JumpB
	var_313_string = ""; // 0x317 PushV
	var_313_string = "Grin"; // 0x318 MovS
	func_443(var_22_cvector, var_313_string); // 0x319 NEW_2
	var_314_int = 523933; // 0x31b PushI
	SetMessage(var_314_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_315_int = 530662; // 0x320 PushI
	var_316_int = 22685; // 0x321 PushI
	var_317_int = 31958; // 0x322 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_318_int = 22685; // 0x326 PushI
	var_319_bool = var_21_bool == var_318_int; // 0x327 Eq
	if(var_319_bool == 0) goto Label_829; // 0x328 JumpB
	var_320_string = ""; // 0x329 PushV
	var_320_string = "Grin"; // 0x32a MovS
	func_443(var_22_cvector, var_320_string); // 0x32b NEW_2
	var_321_int = 521524; // 0x32d PushI
	SetMessage(var_321_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_322_int = 521525; // 0x332 PushI
	var_323_int = 25221; // 0x333 PushI
	var_324_int = 22686; // 0x334 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x335 TObjFunc
	var_325_int = 523934; // 0x337 PushI
	var_326_int = 25218; // 0x338 PushI
	var_327_int = 25217; // 0x339 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_328_int = 25218; // 0x33d PushI
	var_329_bool = var_21_bool == var_328_int; // 0x33e Eq
	if(var_329_bool == 0) goto Label_852; // 0x33f JumpB
	var_330_string = ""; // 0x340 PushV
	var_330_string = "Grin"; // 0x341 MovS
	func_443(var_22_cvector, var_330_string); // 0x342 NEW_2
	var_331_int = 523935; // 0x344 PushI
	SetMessage(var_331_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_332_int = 523936; // 0x349 PushI
	var_333_int = -1; // 0x34a PushI
	var_334_int = 25219; // 0x34b PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x34c TObjFunc
	var_335_int = 523937; // 0x34e PushI
	var_336_int = -1; // 0x34f PushI
	var_337_int = 25220; // 0x350 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x351 TObjFunc
	return 0; // 0x353 Return
	
Label_852:
	var_338_int = 25221; // 0x354 PushI
	var_339_bool = var_21_bool == var_338_int; // 0x355 Eq
	if(var_339_bool == 0) goto Label_880; // 0x356 JumpB
	var_340_string = ""; // 0x357 PushV
	var_340_string = "Grin"; // 0x358 MovS
	func_443(var_22_cvector, var_340_string); // 0x359 NEW_2
	var_341_int = 523938; // 0x35b PushI
	SetMessage(var_341_int); // 0x35c TObjFunc
	ClearReplies(); // 0x35e TObjFunc
	var_342_int = 523939; // 0x360 PushI
	var_343_int = -1; // 0x361 PushI
	var_344_int = 25222; // 0x362 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x363 TObjFunc
	var_345_int = 523940; // 0x365 PushI
	var_346_int = -1; // 0x366 PushI
	var_347_int = 25223; // 0x367 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x368 TObjFunc
	var_348_int = 523941; // 0x36a PushI
	var_349_int = -1; // 0x36b PushI
	var_350_int = 25224; // 0x36c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x36d TObjFunc
	return 0; // 0x36f Return
	
Label_880:
	var_351_int = 22668; // 0x370 PushI
	var_352_bool = var_21_bool == var_351_int; // 0x371 Eq
	if(var_352_bool == 0) goto Label_898; // 0x372 JumpB
	var_353_string = ""; // 0x373 PushV
	var_353_string = "Neutral"; // 0x374 MovS
	func_443(var_22_cvector, var_353_string); // 0x375 NEW_2
	var_354_int = 521507; // 0x377 PushI
	SetMessage(var_354_int); // 0x378 TObjFunc
	ClearReplies(); // 0x37a TObjFunc
	var_355_int = 523949; // 0x37c PushI
	var_356_int = 25233; // 0x37d PushI
	var_357_int = 25232; // 0x37e PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_358_int = 25233; // 0x382 PushI
	var_359_bool = var_21_bool == var_358_int; // 0x383 Eq
	if(var_359_bool == 0) goto Label_916; // 0x384 JumpB
	var_360_string = ""; // 0x385 PushV
	var_360_string = "Neutral"; // 0x386 MovS
	func_443(var_22_cvector, var_360_string); // 0x387 NEW_2
	var_361_int = 523950; // 0x389 PushI
	SetMessage(var_361_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_362_int = 521508; // 0x38e PushI
	var_363_int = -1; // 0x38f PushI
	var_364_int = 22669; // 0x390 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x391 TObjFunc
	return 0; // 0x393 Return
	
Label_916:
	var_365_int = 25241; // 0x394 PushI
	var_366_bool = var_21_bool == var_365_int; // 0x395 Eq
	if(var_366_bool == 0) goto Label_934; // 0x396 JumpB
	var_367_string = ""; // 0x397 PushV
	var_367_string = "Neutral"; // 0x398 MovS
	func_443(var_22_cvector, var_367_string); // 0x399 NEW_2
	var_368_int = 523958; // 0x39b PushI
	SetMessage(var_368_int); // 0x39c TObjFunc
	ClearReplies(); // 0x39e TObjFunc
	var_369_int = 523959; // 0x3a0 PushI
	var_370_int = 25235; // 0x3a1 PushI
	var_371_int = 25242; // 0x3a2 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x3a3 TObjFunc
	return 0; // 0x3a5 Return
	
Label_934:
	var_372_int = 25235; // 0x3a6 PushI
	var_373_bool = var_21_bool == var_372_int; // 0x3a7 Eq
	if(var_373_bool == 0) goto Label_957; // 0x3a8 JumpB
	var_374_string = ""; // 0x3a9 PushV
	var_374_string = "Anger"; // 0x3aa MovS
	func_443(var_22_cvector, var_374_string); // 0x3ab NEW_2
	var_375_int = 523952; // 0x3ad PushI
	SetMessage(var_375_int); // 0x3ae TObjFunc
	ClearReplies(); // 0x3b0 TObjFunc
	var_376_int = 523953; // 0x3b2 PushI
	var_377_int = 25237; // 0x3b3 PushI
	var_378_int = 25236; // 0x3b4 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x3b5 TObjFunc
	var_379_int = 523960; // 0x3b7 PushI
	var_380_int = 25245; // 0x3b8 PushI
	var_381_int = 25244; // 0x3b9 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x3ba TObjFunc
	return 0; // 0x3bc Return
	
Label_957:
	var_382_int = 25245; // 0x3bd PushI
	var_383_bool = var_21_bool == var_382_int; // 0x3be Eq
	if(var_383_bool == 0) goto Label_975; // 0x3bf JumpB
	var_384_string = ""; // 0x3c0 PushV
	var_384_string = "Neutral"; // 0x3c1 MovS
	func_443(var_22_cvector, var_384_string); // 0x3c2 NEW_2
	var_385_int = 523961; // 0x3c4 PushI
	SetMessage(var_385_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_386_int = 523962; // 0x3c9 PushI
	var_387_int = 25247; // 0x3ca PushI
	var_388_int = 25246; // 0x3cb PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x3cc TObjFunc
	return 0; // 0x3ce Return
	
Label_975:
	var_389_int = 25247; // 0x3cf PushI
	var_390_bool = var_21_bool == var_389_int; // 0x3d0 Eq
	if(var_390_bool == 0) goto Label_993; // 0x3d1 JumpB
	var_391_string = ""; // 0x3d2 PushV
	var_391_string = "Neutral"; // 0x3d3 MovS
	func_443(var_22_cvector, var_391_string); // 0x3d4 NEW_2
	var_392_int = 523963; // 0x3d6 PushI
	SetMessage(var_392_int); // 0x3d7 TObjFunc
	ClearReplies(); // 0x3d9 TObjFunc
	var_393_int = 523964; // 0x3db PushI
	var_394_int = 25237; // 0x3dc PushI
	var_395_int = 25248; // 0x3dd PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x3de TObjFunc
	return 0; // 0x3e0 Return
	
Label_993:
	var_396_int = 25237; // 0x3e1 PushI
	var_397_bool = var_21_bool == var_396_int; // 0x3e2 Eq
	if(var_397_bool == 0) goto Label_1011; // 0x3e3 JumpB
	var_398_string = ""; // 0x3e4 PushV
	var_398_string = "Anger"; // 0x3e5 MovS
	func_443(var_22_cvector, var_398_string); // 0x3e6 NEW_2
	var_399_int = 523954; // 0x3e8 PushI
	SetMessage(var_399_int); // 0x3e9 TObjFunc
	ClearReplies(); // 0x3eb TObjFunc
	var_400_int = 523955; // 0x3ed PushI
	var_401_int = 25239; // 0x3ee PushI
	var_402_int = 25238; // 0x3ef PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x3f0 TObjFunc
	return 0; // 0x3f2 Return
	
Label_1011:
	var_403_int = 25239; // 0x3f3 PushI
	var_404_bool = var_21_bool == var_403_int; // 0x3f4 Eq
	if(var_404_bool == 0) goto Label_1034; // 0x3f5 JumpB
	var_405_string = ""; // 0x3f6 PushV
	var_405_string = "Jeer"; // 0x3f7 MovS
	func_443(var_22_cvector, var_405_string); // 0x3f8 NEW_2
	var_406_int = 523956; // 0x3fa PushI
	SetMessage(var_406_int); // 0x3fb TObjFunc
	ClearReplies(); // 0x3fd TObjFunc
	var_407_int = 523965; // 0x3ff PushI
	var_408_int = 25250; // 0x400 PushI
	var_409_int = 25249; // 0x401 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x402 TObjFunc
	var_410_int = 523970; // 0x404 PushI
	var_411_int = 25261; // 0x405 PushI
	var_412_int = 25254; // 0x406 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x407 TObjFunc
	return 0; // 0x409 Return
	
Label_1034:
	var_413_int = 25261; // 0x40a PushI
	var_414_bool = var_21_bool == var_413_int; // 0x40b Eq
	if(var_414_bool == 0) goto Label_1052; // 0x40c JumpB
	var_415_string = ""; // 0x40d PushV
	var_415_string = "Jeer"; // 0x40e MovS
	func_443(var_22_cvector, var_415_string); // 0x40f NEW_2
	var_416_int = 523974; // 0x411 PushI
	SetMessage(var_416_int); // 0x412 TObjFunc
	ClearReplies(); // 0x414 TObjFunc
	var_417_int = 523975; // 0x416 PushI
	var_418_int = 25250; // 0x417 PushI
	var_419_int = 25262; // 0x418 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x419 TObjFunc
	return 0; // 0x41b Return
	
Label_1052:
	var_420_int = 25250; // 0x41c PushI
	var_421_bool = var_21_bool == var_420_int; // 0x41d Eq
	if(var_421_bool == 0) goto Label_1070; // 0x41e JumpB
	var_422_string = ""; // 0x41f PushV
	var_422_string = "Grin"; // 0x420 MovS
	func_443(var_22_cvector, var_422_string); // 0x421 NEW_2
	var_423_int = 523966; // 0x423 PushI
	SetMessage(var_423_int); // 0x424 TObjFunc
	ClearReplies(); // 0x426 TObjFunc
	var_424_int = 523967; // 0x428 PushI
	var_425_int = 25252; // 0x429 PushI
	var_426_int = 25251; // 0x42a PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x42b TObjFunc
	return 0; // 0x42d Return
	
Label_1070:
	var_427_int = 25252; // 0x42e PushI
	var_428_bool = var_21_bool == var_427_int; // 0x42f Eq
	if(var_428_bool == 0) goto Label_1093; // 0x430 JumpB
	var_429_string = ""; // 0x431 PushV
	var_429_string = "Grin"; // 0x432 MovS
	func_443(var_22_cvector, var_429_string); // 0x433 NEW_2
	var_430_int = 523968; // 0x435 PushI
	SetMessage(var_430_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_431_int = 523971; // 0x43a PushI
	var_432_int = 25256; // 0x43b PushI
	var_433_int = 25255; // 0x43c PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x43d TObjFunc
	var_434_int = 523973; // 0x43f PushI
	var_435_int = 25256; // 0x440 PushI
	var_436_int = 25257; // 0x441 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x442 TObjFunc
	return 0; // 0x444 Return
	
Label_1093:
	var_437_int = 25256; // 0x445 PushI
	var_438_bool = var_21_bool == var_437_int; // 0x446 Eq
	if(var_438_bool == 0) goto Label_1116; // 0x447 JumpB
	var_439_string = ""; // 0x448 PushV
	var_439_string = "Grin"; // 0x449 MovS
	func_443(var_22_cvector, var_439_string); // 0x44a NEW_2
	var_440_int = 523972; // 0x44c PushI
	SetMessage(var_440_int); // 0x44d TObjFunc
	ClearReplies(); // 0x44f TObjFunc
	var_441_int = 521503; // 0x451 PushI
	var_442_int = -1; // 0x452 PushI
	var_443_int = 22664; // 0x453 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x454 TObjFunc
	var_444_int = 521504; // 0x456 PushI
	var_445_int = -1; // 0x457 PushI
	var_446_int = 22665; // 0x458 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x459 TObjFunc
	return 0; // 0x45b Return
	
Label_1116:
	var_3_string = 1; // 0x45c TMovB
	var_447_bool = 0; // 0x45d PushV
	func_2271(var_447_bool); // 0x45e NEW_2
	if(var_447_bool == 0) goto Label_1124; // 0x460 JumpB
	lshStopAnimation(); // 0x461 Func
	goto Label_1126; // 0x463 Jump
	
Label_1126:
	return 0; // 0x466 Return
	
Label_1124:
	StopAnimation(); // 0x464 Func
	
Label_1128:
	return 0; // 0x468 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x510 PushI
	if(var_23_int == 0) goto Label_1387; // 0x511 JumpB
	func_2160(); // 0x513 NEW_2
	var_25_int = 36906; // 0x515 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x516 Eq
	if(var_26_bool == 0) goto Label_1329; // 0x517 JumpB
	var_27_string = ""; // 0x518 PushV
	var_27_string = "Neutral"; // 0x519 MovS
	func_1273(var_22_cvector, var_27_string); // 0x51a NEW_2
	var_44_int = 535231; // 0x51c PushI
	SetMessage(var_44_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_45_int = 535232; // 0x521 PushI
	var_46_int = 36953; // 0x522 PushI
	var_47_int = 36907; // 0x523 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x524 TObjFunc
	var_48_int = 535233; // 0x526 PushI
	var_49_int = -1; // 0x527 PushI
	var_50_int = 36908; // 0x528 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x529 TObjFunc
	var_51_int = 535280; // 0x52b PushI
	var_52_int = -1; // 0x52c PushI
	var_53_int = 36956; // 0x52d PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x52e TObjFunc
	return 0; // 0x530 Return
	
Label_1329:
	var_54_int = 36953; // 0x531 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x532 Eq
	if(var_55_bool == 0) goto Label_1352; // 0x533 JumpB
	var_56_string = ""; // 0x534 PushV
	var_56_string = "Neutral"; // 0x535 MovS
	func_1273(var_22_cvector, var_56_string); // 0x536 NEW_2
	var_57_int = 535277; // 0x538 PushI
	SetMessage(var_57_int); // 0x539 TObjFunc
	ClearReplies(); // 0x53b TObjFunc
	var_58_int = 535278; // 0x53d PushI
	var_59_int = 36957; // 0x53e PushI
	var_60_int = 36954; // 0x53f PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x540 TObjFunc
	var_61_int = 535279; // 0x542 PushI
	var_62_int = 36957; // 0x543 PushI
	var_63_int = 36955; // 0x544 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x545 TObjFunc
	return 0; // 0x547 Return
	
Label_1352:
	var_64_int = 36957; // 0x548 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x549 Eq
	if(var_65_bool == 0) goto Label_1375; // 0x54a JumpB
	var_66_string = ""; // 0x54b PushV
	var_66_string = "Neutral"; // 0x54c MovS
	func_1273(var_22_cvector, var_66_string); // 0x54d NEW_2
	var_67_int = 535281; // 0x54f PushI
	SetMessage(var_67_int); // 0x550 TObjFunc
	ClearReplies(); // 0x552 TObjFunc
	var_68_int = 535282; // 0x554 PushI
	var_69_int = -1; // 0x555 PushI
	var_70_int = 36958; // 0x556 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x557 TObjFunc
	var_71_int = 535283; // 0x559 PushI
	var_72_int = -1; // 0x55a PushI
	var_73_int = 36959; // 0x55b PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x55c TObjFunc
	return 0; // 0x55e Return
	
Label_1375:
	var_3_string = 1; // 0x55f TMovB
	var_74_bool = 0; // 0x560 PushV
	func_2271(var_74_bool); // 0x561 NEW_2
	if(var_74_bool == 0) goto Label_1383; // 0x563 JumpB
	lshStopAnimation(); // 0x564 Func
	goto Label_1385; // 0x566 Jump
	
Label_1385:
	return 0; // 0x569 Return
	
Label_1383:
	StopAnimation(); // 0x567 Func
	
Label_1387:
	return 0; // 0x56b Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x60e PushI
	if(var_23_int == 0) goto Label_1590; // 0x60f JumpB
	func_2160(); // 0x611 NEW_2
	var_25_int = 42563; // 0x613 PushI
	var_26_bool = var_21_int == var_25_int; // 0x614 Eq
	if(var_26_bool == 0) goto Label_1578; // 0x615 JumpB
	var_27_string = ""; // 0x616 PushV
	var_27_string = "Neutral"; // 0x617 MovS
	func_1527(var_22_cvector, var_27_string); // 0x618 NEW_2
	var_44_int = 540554; // 0x61a PushI
	SetMessage(var_44_int); // 0x61b TObjFunc
	ClearReplies(); // 0x61d TObjFunc
	var_45_int = 540555; // 0x61f PushI
	var_46_int = -1; // 0x620 PushI
	var_47_int = 42564; // 0x621 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x622 TObjFunc
	var_48_int = 540794; // 0x624 PushI
	var_49_int = -1; // 0x625 PushI
	var_50_int = 42843; // 0x626 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x627 TObjFunc
	return 0; // 0x629 Return
	
Label_1578:
	var_3_string = 1; // 0x62a TMovB
	var_51_bool = 0; // 0x62b PushV
	func_2271(var_51_bool); // 0x62c NEW_2
	if(var_51_bool == 0) goto Label_1586; // 0x62e JumpB
	lshStopAnimation(); // 0x62f Func
	goto Label_1588; // 0x631 Jump
	
Label_1588:
	return 0; // 0x634 Return
	
Label_1586:
	StopAnimation(); // 0x632 Func
	
Label_1590:
	return 0; // 0x636 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x684 PushI
	var_23_bool = var_21_int == var_22_int; // 0x685 Eq
	if(var_23_bool == 0) goto Label_1704; // 0x686 JumpB
	func_1663(); // 0x688 NEW_2
	var_25_bool = 0; // 0x68a PushV
	var_25_bool = 0; // 0x68b MovB
	var_26_bool = 0; // 0x68c PushV
	func_1884(var_26_bool); // 0x68d NEW_2
	if(var_26_bool == 0) goto Label_1685; // 0x68f JumpB
	var_29_bool = 0; // 0x690 PushV
	func_1632(var_29_bool); // 0x691 NEW_2
	if(var_29_bool == 0) goto Label_1685; // 0x693 JumpB
	var_25_bool = 1; // 0x694 MovB
	
Label_1685:
	if(var_25_bool == 0) goto Label_1698; // 0x695 JumpB
	var_46_bool = 0; // 0x696 PushV
	func_1612(var_46_bool); // 0x697 NEW_2
	if(var_46_bool == 0) goto Label_1697; // 0x699 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x69a PushV
	var_67_object = Obj(); // 0x69b PushV
	func_2167(var_67_object); // 0x69c NEW_2
	var_66_object = var_67_object; // 0x69d Mov
	func_2034(var_66_object); // 0x69f NEW_2
	
Label_1697:
	goto Label_1704; // 0x6a1 Jump
	
Label_1704:
	return 0; // 0x6a8 Return
	
Label_1698:
	func_1627(var_21_int); // 0x6a3 NEW_2
	func_1654(); // 0x6a6 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1845(); // 0x6aa NEW_2
	func_1663(); // 0x6ad NEW_2
	lshStopSpeech(); // 0x6af Func
	lshStopAnimation(); // 0x6b1 Func
	StopAsync(); // 0x6b3 Func
	Hold(); // 0x6b5 Func
	return 0; // 0x6b7 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x6b8 Func
	func_1663(); // 0x6bb NEW_2
	var_22_string = ""; // 0x6bd PushV
	var_22_string = "Neutral"; // 0x6be MovS
	func_2114(var_22_string); // 0x6bf NEW_2
	func_1654(); // 0x6c2 NEW_2
	return 0; // 0x6c4 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x6c6 Push
	if(var_22_bool == 0) goto Label_1740; // 0x6c7 JumpB
	func_1654(); // 0x6c9 NEW_2
	goto Label_1744; // 0x6cb Jump
	
Label_1744:
	return 0; // 0x6d0 Return
	
Label_1740:
	var_28_string = ""; // 0x6cc PushV
	var_28_string = "Neutral"; // 0x6cd MovS
	func_2114(var_28_string); // 0x6ce NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x6d1 PushV
	IsOverrideActive(var_23_bool); // 0x6d2 Func
	var_24_bool = var_23_bool == 0; // 0x6d4 Not
	if(var_24_bool == 0) goto Label_1773; // 0x6d5 JumpB
	EventDisable(0); // 0x6d6 EventDisable
	func_1845(); // 0x6d8 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x6da PushV
	var_26_object = var_21_object; // 0x6db Mov
	func_1875(var_26_object); // 0x6dc NEW_2
	EventEnable(0); // 0x6de EventEnable
	var_39_object = Obj(); // 0x6df PushV
	var_39_object = var_21_object; // 0x6e0 Mov
	func_2560(var_39_object); // 0x6e1 NEW_2
	var_516_string = ""; // 0x6e3 PushV
	var_516_string = "Neutral"; // 0x6e4 MovS
	func_2114(var_516_string); // 0x6e5 NEW_2
	func_1663(); // 0x6e8 NEW_2
	func_1654(); // 0x6eb NEW_2
	
Label_1773:
	return 2; // 0x6ed Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x637 PushGE
	var_21_bool = 0; // 0x638 MovB
	GlobalVars[1] = var_21_bool; // 0x639 PopGE
	func_1598(var_20_cvector); // 0x63b NEW_2
	return 0; // 0x63d Return
}


func_2560(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0xa01 PushGE
	var_41_bool = var_40_bool == 0; // 0xa02 Not
	if(var_41_bool == 0) goto Label_2573; // 0xa03 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0xa04 PushV
	var_43_object = var_39_object; // 0xa05 Mov
	TaskCall(0); // 0xa06 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0xa07 NEW_2
	TaskReturn(); // 0xa08 TaskReturn
	var_267_bool = GlobalVars[1]; // 0xa0a PushGE
	var_267_bool = 1; // 0xa0b MovB
	GlobalVars[1] = var_267_bool; // 0xa0c PopGE
	
Label_2573:
	var_268_bool = 0; var_269_int = 0; // 0xa0d PushV
	var_269_int = 8; // 0xa0e MovI
	func_2233(var_268_bool, var_269_int); // 0xa0f NEW_2
	if(var_268_bool == 0) goto Label_2585; // 0xa11 JumpB
	var_271_int = 0; var_272_object = Obj(); // 0xa12 PushV
	var_272_object = var_39_object; // 0xa13 Mov
	TaskCall(2); // 0xa14 TaskCall
	func_226(var_273_object, var_271_int, var_272_object); // 0xa15 NEW_2
	TaskReturn(); // 0xa16 TaskReturn
	return 0; // 0xa18 Return
	
Label_2585:
	var_395_bool = 0; // 0xa19 PushV
	var_395_bool = 0; // 0xa1a MovB
	var_396_bool = 0; var_397_int = 0; // 0xa1b PushV
	var_397_int = 12; // 0xa1c MovI
	func_2233(var_396_bool, var_397_int); // 0xa1d NEW_2
	if(var_396_bool == 0) goto Label_2596; // 0xa1f JumpB
	var_398_bool = GlobalVars[2]; // 0xa20 PushGE
	var_399_bool = var_398_bool == 0; // 0xa21 Not
	if(var_399_bool == 0) goto Label_2596; // 0xa22 JumpB
	var_395_bool = 1; // 0xa23 MovB
	
Label_2596:
	if(var_395_bool == 0) goto Label_2607; // 0xa24 JumpB
	var_400_int = 0; var_401_object = Obj(); // 0xa25 PushV
	var_401_object = var_39_object; // 0xa26 Mov
	TaskCall(4); // 0xa27 TaskCall
	func_1129(var_402_object, var_400_int, var_401_object); // 0xa28 NEW_2
	TaskReturn(); // 0xa29 TaskReturn
	var_459_bool = GlobalVars[2]; // 0xa2b PushGE
	var_459_bool = 1; // 0xa2c MovB
	GlobalVars[2] = var_459_bool; // 0xa2d PopGE
	return 0; // 0xa2e Return
	
Label_2607:
	var_460_int = 0; var_461_object = Obj(); // 0xa2f PushV
	var_461_object = var_39_object; // 0xa30 Mov
	TaskCall(6); // 0xa31 TaskCall
	func_1388(var_462_object, var_460_int, var_461_object); // 0xa32 NEW_2
	TaskReturn(); // 0xa33 TaskReturn
	return 0; // 0xa35 Return
}


func_2305()
{
	var_86_string = "oob8Georg2"; // 0x902 PushS
	var_87_int = 1; // 0x903 PushI
	SetVariable(var_86_string, var_87_int); // 0x904 Func
	return 0; // 0x906 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_1889(var_54_object, var_55_float); // 0x5 NEW_2
	var_100_bool = var_53_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_2265(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_2263(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_2267(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_2269(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_2543(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_113_bool = var_50_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_114_bool = 0; var_115_object = Obj(); // 0x2f PushV
	var_116_object = Obj(); // 0x30 PushV
	func_2167(var_116_object); // 0x31 NEW_2
	var_115_object = var_116_object; // 0x32 Mov
	func_1976(var_114_bool, var_115_object); // 0x34 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x36 PushV
	var_209_object = var_43_object; // 0x37 Mov
	var_210_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_52_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_43_object; // 0x47 Mov
	func_1958(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2311()
{
	var_126_string = "playsound"; // 0x908 PushS
	var_127_string = "givemoney"; // 0x909 PushS
	TriggerWorld(var_126_string, var_127_string); // 0x90a Func
	return 0; // 0x90c Return
}


func_2317()
{
	var_316_string = "b8GeorgVisit"; // 0x90e PushS
	var_317_int = 1; // 0x90f PushI
	SetVariable(var_316_string, var_317_int); // 0x910 Func
	return 0; // 0x912 Return
}


func_2323()
{
	var_92_string = "b8q03"; // 0x914 PushS
	var_93_int = 1000; // 0x915 PushI
	SetVariable(var_92_string, var_93_int); // 0x916 Func
	func_2459(); // 0x919 NEW_2
	return 0; // 0x91b Return
}


func_2071(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x817 PushV
	var_168_string = "d"; // 0x818 PushS
	var_169_int = 0; // 0x819 PushV
	func_2224(var_169_int); // 0x81a NEW_2
	var_175_int = var_168_string + var_169_int; // 0x81c Add
	var_176_string = "m"; // 0x81d PushS
	var_163_string = var_175_int + var_176_string; // 0x81e Add2
	var_164_int = 0; // 0x81f MovI
	
Label_2080:
	var_177_int = 1; // 0x820 PushI
	if(var_177_int == 0) goto Label_2093; // 0x821 JumpB
	var_178_int = 1; // 0x822 PushI
	var_179_int = var_164_int + var_178_int; // 0x823 Add
	var_180_int = var_163_string + var_179_int; // 0x824 Add
	HasProperty(var_180_int, var_165_bool); // 0x825 ObjFunc
	var_181_bool = var_165_bool == 0; // 0x827 Not
	if(var_181_bool == 0) goto Label_2090; // 0x828 JumpB
	goto Label_2093; // 0x829 Jump
	
Label_2093:
	var_182_bool = var_164_int == 0; // 0x82d Not
	if(var_182_bool == 0) goto Label_2097; // 0x82e JumpB
	var_156_bool = 0; // 0x82f MovB
	return 10; // 0x830 Return
	
Label_2097:
	var_166_int = 0; // 0x831 MovI
	var_183_int = 1; // 0x832 PushI
	var_184_bool = var_164_int > var_183_int; // 0x833 GT
	if(var_184_bool == 0) goto Label_2103; // 0x834 JumpB
	irand(var_166_int, var_164_int); // 0x835 Func
	
Label_2103:
	var_185_int = 1; // 0x837 PushI
	var_186_int = var_166_int + var_185_int; // 0x838 Add
	var_187_int = var_163_string + var_186_int; // 0x839 Add
	GetProperty(var_187_int, var_167_string); // 0x83a ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x83c PushV
	var_189_string = var_167_string; // 0x83d Mov
	func_2145(var_188_bool, var_189_string); // 0x83e NEW_2
	var_156_bool = var_188_bool; // 0x83f Mov
	return 10; // 0x841 Return
	
Label_2090:
	var_190_int = 1; // 0x82a PushI
	var_164_int = var_164_int + var_190_int; // 0x82b Add2
	goto Label_2080; // 0x82c Jump
}


func_2332()
{
	var_151_string = "b8q03"; // 0x91d PushS
	var_152_int = 1000; // 0x91e PushI
	SetVariable(var_151_string, var_152_int); // 0x91f Func
	func_2472(); // 0x922 NEW_2
	return 0; // 0x924 Return
}


func_2341(var_128_object)
{
	var_130_string = "money3000 is given"; // 0x926 PushS
	Trace(var_130_string); // 0x927 Func
	var_131_object = Obj(); var_132_int = 0; // 0x929 PushV
	var_131_object = var_128_object; // 0x92a Mov
	var_132_int = 3000; // 0x92b MovI
	func_2200(var_131_object, var_132_int); // 0x92c NEW_2
	return 0; // 0x92e Return
}


func_2351(var_302_bool)
{
	var_304_int = 0; var_305_string = ""; // 0x930 PushV
	var_305_string = "oob8Georg1"; // 0x931 MovS
	func_2183(var_304_int, var_305_string); // 0x932 NEW_2
	var_308_int = 0; // 0x934 PushI
	var_309_bool = var_304_int == var_308_int; // 0x935 Eq
	if(var_309_bool == 0) goto Label_2361; // 0x936 JumpB
	var_302_bool = 1; // 0x937 MovB
	return 0; // 0x938 Return
	
Label_2361:
	var_302_bool = 0; // 0x939 MovB
	return 0; // 0x93a Return
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object; // 0x134 TMov
	var_1_object = var_295_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_301_int = 1; // 0x137 PushI
	if(var_301_int == 0) goto Label_413; // 0x138 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x139 PushV
	var_303_object = var_1_object; // 0x13a MovT
	func_2351(var_303_object); // 0x13b NEW_2
	if(var_302_bool == 0) goto Label_348; // 0x13d JumpB
	var_310_object = Obj(); var_311_object = Obj(); // 0x13e PushV
	var_310_object = var_1_object; // 0x13f MovT
	var_311_object = var_0_object; // 0x140 MovT
	func_2299(); // 0x141 NEW_2
	var_314_object = Obj(); var_315_object = Obj(); // 0x143 PushV
	var_314_object = var_1_object; // 0x144 MovT
	var_315_object = var_0_object; // 0x145 MovT
	func_2317(); // 0x146 NEW_2
	var_318_string = ""; // 0x148 PushV
	var_318_string = "Neutral"; // 0x149 MovS
	func_443(var_296_object, var_318_string); // 0x14a NEW_2
	var_326_int = 521502; // 0x14c PushI
	SetMessage(var_326_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_327_int = 523951; // 0x151 PushI
	var_328_int = 25235; // 0x152 PushI
	var_329_int = 25234; // 0x153 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x154 TObjFunc
	var_330_int = 523957; // 0x156 PushI
	var_331_int = 25241; // 0x157 PushI
	var_332_int = 25240; // 0x158 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x159 TObjFunc
	goto Label_413; // 0x15b Jump
	
Label_413:
	var_333_bool = 0; // 0x19d PushV
	func_2271(var_333_bool); // 0x19e NEW_2
	if(var_333_bool == 0) goto Label_428; // 0x1a0 JumpB
	
Label_417:
	lshWaitForAnimEnd(); // 0x1a1 Func
	var_334_string = var_3_string; // 0x1a3 PushT
	if(var_334_string == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_427; // 0x1a5 Jump
	
Label_427:
	goto Label_442; // 0x1ab Jump
	
Label_442:
	return 0; // 0x1ba Return
	
Label_422:
	var_335_string = ""; // 0x1a6 PushV
	var_335_string = var_2_object; // 0x1a7 MovT
	func_2114(var_335_string); // 0x1a8 NEW_2
	goto Label_417; // 0x1aa Jump
	
Label_428:
	var_336_string = "all"; // 0x1ac PushS
	var_337_string = "idle"; // 0x1ad PushS
	PlayAnimation(var_336_string, var_337_string); // 0x1ae Func
	
Label_432:
	WaitForAnimEnd(); // 0x1b0 Func
	var_338_string = var_3_string; // 0x1b2 PushT
	if(var_338_string == 0) goto Label_437; // 0x1b3 JumpB
	goto Label_442; // 0x1b4 Jump
	
Label_437:
	var_339_string = "all"; // 0x1b5 PushS
	var_340_string = "idle"; // 0x1b6 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x1b7 Func
	goto Label_432; // 0x1b9 Jump
	
Label_348:
	var_341_string = ""; // 0x15c PushV
	var_341_string = "Neutral"; // 0x15d MovS
	func_443(var_296_object, var_341_string); // 0x15e NEW_2
	var_342_int = 521505; // 0x160 PushI
	SetMessage(var_342_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_343_bool = 0; var_344_object = Obj(); // 0x165 PushV
	var_344_object = var_1_object; // 0x166 MovT
	func_2363(var_344_object); // 0x167 NEW_2
	if(var_343_bool == 0) goto Label_367; // 0x169 JumpB
	var_349_int = 521506; // 0x16a PushI
	var_350_int = 22668; // 0x16b PushI
	var_351_int = 22667; // 0x16c PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x16d TObjFunc
	
Label_367:
	var_352_bool = 0; // 0x16f PushV
	var_352_bool = 0; // 0x170 MovB
	var_353_bool = 0; var_354_object = Obj(); // 0x171 PushV
	var_354_object = var_1_object; // 0x172 MovT
	func_2398(var_354_object); // 0x173 NEW_2
	if(var_353_bool == 0) goto Label_380; // 0x175 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x176 PushV
	var_365_object = var_1_object; // 0x177 MovT
	func_2421(var_365_object); // 0x178 NEW_2
	if(var_364_bool == 0) goto Label_380; // 0x17a JumpB
	var_352_bool = 1; // 0x17b MovB
	
Label_380:
	if(var_352_bool == 0) goto Label_386; // 0x17c JumpB
	var_370_int = 521523; // 0x17d PushI
	var_371_int = 25213; // 0x17e PushI
	var_372_int = 22684; // 0x17f PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x180 TObjFunc
	
Label_386:
	var_373_bool = 0; // 0x182 PushV
	var_373_bool = 0; // 0x183 MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x184 PushV
	var_375_object = var_1_object; // 0x185 MovT
	func_2375(var_375_object); // 0x186 NEW_2
	if(var_374_bool == 0) goto Label_399; // 0x188 JumpB
	var_385_bool = 0; var_386_object = Obj(); // 0x189 PushV
	var_386_object = var_1_object; // 0x18a MovT
	func_2421(var_386_object); // 0x18b NEW_2
	if(var_385_bool == 0) goto Label_399; // 0x18d JumpB
	var_373_bool = 1; // 0x18e MovB
	
Label_399:
	if(var_373_bool == 0) goto Label_405; // 0x18f JumpB
	var_387_int = 521526; // 0x190 PushI
	var_388_int = 22688; // 0x191 PushI
	var_389_int = 22687; // 0x192 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x193 TObjFunc
	
Label_405:
	var_390_int = 521509; // 0x195 PushI
	var_391_int = -1; // 0x196 PushI
	var_392_int = 22670; // 0x197 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x198 TObjFunc
	goto Label_413; // 0x19a Jump
}


func_1843(var_60_bool)
{
	var_60_bool = 1; // 0x733 MovB
	return 0; // 0x734 Return
}


func_1845()
{
	StopAnimation(); // 0x735 Func
	StopGroup0(); // 0x737 Func
	return 0; // 0x739 Return
}


func_1850(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x73a PushV
	GetPosition(var_41_cvector); // 0x73b Func
	GetPosition(var_42_cvector); // 0x73d ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x73f Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x740 Or2
	return 6; // 0x741 Return
}


func_2363(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x93c PushV
	var_346_string = "b8q03"; // 0x93d MovS
	func_2183(var_345_int, var_346_string); // 0x93e NEW_2
	var_347_int = 0; // 0x940 PushI
	var_348_bool = var_345_int == var_347_int; // 0x941 Eq
	if(var_348_bool == 0) goto Label_2373; // 0x942 JumpB
	var_343_bool = 1; // 0x943 MovB
	return 0; // 0x944 Return
	
Label_2373:
	var_343_bool = 0; // 0x945 MovB
	return 0; // 0x946 Return
}


func_1598(var_0_object)
{
	var_22_bool = 0; // 0x63e PushV
	func_1884(var_22_bool); // 0x63f NEW_2
	var_25_bool = var_22_bool == 0; // 0x641 Not
	if(var_25_bool == 0) goto Label_1605; // 0x642 JumpB
	Hold(); // 0x643 Func
	
Label_1605:
	GetDirection(var_0_object); // 0x645 Func
	
Label_1607:
	func_1774(); // 0x648 NEW_2
	goto Label_1607; // 0x64a Jump
}


func_2114(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x842 PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x843 Func
	var_249_bool = var_246_bool; // 0x845 Push
	if(var_249_bool == 0) goto Label_2125; // 0x846 JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x847 Func
	var_250_bool = 0; // 0x849 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x84a Func
	goto Label_2129; // 0x84c Jump
	
Label_2129:
	return 6; // 0x851 Return
	
Label_2125:
	var_251_string = "Can't find lsh animation : "; // 0x84d PushS
	var_252_int = var_251_string + var_242_string; // 0x84e Add
	Trace(var_252_int); // 0x84f Func
}


func_1858(var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x742 PushV
	GetProperty(var_136_string, var_139_int); // 0x743 ObjFunc
	var_140_int = var_139_int + var_137_int; // 0x745 Add
	SetProperty(var_136_string, var_140_int); // 0x746 ObjFunc
	return 2; // 0x748 Return
}


func_2375(var_374_bool)
{
	var_376_bool = 0; // 0x948 PushV
	var_376_bool = 0; // 0x949 MovB
	var_377_int = 0; var_378_string = ""; // 0x94a PushV
	var_378_string = "b8q03"; // 0x94b MovS
	func_2183(var_377_int, var_378_string); // 0x94c NEW_2
	var_379_int = 3; // 0x94e PushI
	var_380_bool = var_377_int == var_379_int; // 0x94f Eq
	if(var_380_bool == 0) goto Label_2393; // 0x950 JumpB
	var_381_int = 0; var_382_string = ""; // 0x951 PushV
	var_382_string = "b8q03MladVladIsVictim"; // 0x952 MovS
	func_2183(var_381_int, var_382_string); // 0x953 NEW_2
	var_383_int = 0; // 0x955 PushI
	var_384_bool = var_381_int != var_383_int; // 0x956 Neq
	if(var_384_bool == 0) goto Label_2393; // 0x957 JumpB
	var_376_bool = 1; // 0x958 MovB
	
Label_2393:
	if(var_376_bool == 0) goto Label_2396; // 0x959 JumpB
	var_374_bool = 1; // 0x95a MovB
	return 0; // 0x95b Return
	
Label_2396:
	var_374_bool = 0; // 0x95c MovB
	return 0; // 0x95d Return
}


func_1865(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x749 PushV
	GetPosition(var_34_cvector); // 0x74a Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x74c Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x74d PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x74e PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x74f Func
	var_29_bool = var_36_bool; // 0x751 Mov
	return 6; // 0x752 Return
}


func_1612(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x64c PushV
	var_49_string = "player"; // 0x64d PushS
	FindActor(var_48_object, var_49_string); // 0x64e Func
	var_50_bool = var_48_object == 0; // 0x650 Not
	if(var_50_bool == 0) goto Label_1620; // 0x651 JumpB
	var_46_bool = 0; // 0x652 MovB
	return 2; // 0x653 Return
	
Label_1620:
	var_51_bool = 0; var_52_object = Obj(); // 0x654 PushV
	var_52_object = var_48_object; // 0x655 Mov
	func_1875(var_52_object); // 0x656 NEW_2
	var_46_bool = var_51_bool; // 0x657 Mov
	return 2; // 0x659 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object; // 0x52 TMov
	var_1_object = var_209_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_215_int = 1; // 0x55 PushI
	if(var_215_int == 0) goto Label_109; // 0x56 JumpB
	var_216_string = ""; // 0x57 PushV
	var_216_string = "Neutral"; // 0x58 MovS
	func_139(var_210_object, var_216_string); // 0x59 NEW_2
	var_233_int = 518057; // 0x5b PushI
	SetMessage(var_233_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_234_int = 518058; // 0x60 PushI
	var_235_int = 32643; // 0x61 PushI
	var_236_int = 19191; // 0x62 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x63 TObjFunc
	var_237_int = 531316; // 0x65 PushI
	var_238_int = 32643; // 0x66 PushI
	var_239_int = 32642; // 0x67 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_240_bool = 0; // 0x6d PushV
	func_2271(var_240_bool); // 0x6e NEW_2
	if(var_240_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_241_string = var_3_string; // 0x73 PushT
	if(var_241_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_242_string = ""; // 0x76 PushV
	var_242_string = var_2_object; // 0x77 MovT
	func_2114(var_242_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_253_string = "all"; // 0x7c PushS
	var_254_string = "idle"; // 0x7d PushS
	PlayAnimation(var_253_string, var_254_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_255_string = var_3_string; // 0x82 PushT
	if(var_255_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_256_string = "all"; // 0x85 PushS
	var_257_string = "idle"; // 0x86 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2130(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x852 PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x853 Func
	var_230_bool = var_227_bool; // 0x855 Push
	if(var_230_bool == 0) goto Label_2140; // 0x856 JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x857 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x859 Func
	goto Label_2144; // 0x85b Jump
	
Label_2144:
	return 6; // 0x860 Return
	
Label_2140:
	var_231_string = "Can't find lsh animation : "; // 0x85c PushS
	var_232_int = var_231_string + var_220_string; // 0x85d Add
	Trace(var_232_int); // 0x85e Func
}


func_1875(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x753 PushV
	GetPosition(var_28_cvector); // 0x754 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x756 PushV
	var_30_cvector = var_28_cvector; // 0x757 Mov
	func_1865(var_29_bool, var_30_cvector); // 0x758 NEW_2
	var_25_bool = var_29_bool; // 0x759 Mov
	return 2; // 0x75b Return
}


func_1627(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x65b PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x65c PushE
	RotateAsync(var_98_float, var_99_float); // 0x65d Func
	return 0; // 0x65f Return
}


func_1884(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x75c PushV
	IsLoaded(var_24_bool); // 0x75d Func
	var_22_bool = var_24_bool; // 0x75f Mov
	return 2; // 0x760 Return
}


func_2398(var_353_bool)
{
	var_355_bool = 0; // 0x95f PushV
	var_355_bool = 0; // 0x960 MovB
	var_356_int = 0; var_357_string = ""; // 0x961 PushV
	var_357_string = "b8q03"; // 0x962 MovS
	func_2183(var_356_int, var_357_string); // 0x963 NEW_2
	var_358_int = 3; // 0x965 PushI
	var_359_bool = var_356_int == var_358_int; // 0x966 Eq
	if(var_359_bool == 0) goto Label_2416; // 0x967 JumpB
	var_360_int = 0; var_361_string = ""; // 0x968 PushV
	var_361_string = "b8q03MladVladIsVictim"; // 0x969 MovS
	func_2183(var_360_int, var_361_string); // 0x96a NEW_2
	var_362_int = 0; // 0x96c PushI
	var_363_bool = var_360_int == var_362_int; // 0x96d Eq
	if(var_363_bool == 0) goto Label_2416; // 0x96e JumpB
	var_355_bool = 1; // 0x96f MovB
	
Label_2416:
	if(var_355_bool == 0) goto Label_2419; // 0x970 JumpB
	var_353_bool = 1; // 0x971 MovB
	return 0; // 0x972 Return
	
Label_2419:
	var_353_bool = 0; // 0x973 MovB
	return 0; // 0x974 Return
}


func_1632(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x660 PushV
	var_34_string = "player"; // 0x661 PushS
	FindActor(var_32_object, var_34_string); // 0x662 Func
	var_35_bool = var_32_object == 0; // 0x664 Not
	if(var_35_bool == 0) goto Label_1640; // 0x665 JumpB
	var_29_bool = 0; // 0x666 MovB
	return 4; // 0x667 Return
	
Label_1640:
	var_36_float = 0; var_37_object = Obj(); // 0x668 PushV
	var_37_object = var_32_object; // 0x669 Mov
	func_1850(var_37_object); // 0x66a NEW_2
	var_44_float = 90000.0; // 0x66c PushF
	var_45_bool = var_36_float > var_44_float; // 0x66d GT
	if(var_45_bool == 0) goto Label_1649; // 0x66e JumpB
	var_29_bool = 0; // 0x66f MovB
	return 4; // 0x670 Return
	
Label_1649:
	CanSee(var_33_bool, var_32_object); // 0x671 Func
	var_29_bool = var_33_bool; // 0x673 Mov
	return 4; // 0x674 Return
}


func_1889(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x761 PushV
	GetPosition(var_66_cvector); // 0x762 ObjFunc
	GetEyesHeight(var_65_float); // 0x764 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x766 PushE
	var_74_float = var_74_float + var_65_float; // 0x767 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x768 PopE
	GetPosition(var_67_cvector); // 0x769 Func
	GetEyesHeight(var_65_float); // 0x76b Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x76d PushE
	var_75_float = var_75_float + var_65_float; // 0x76e Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x76f PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x770 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x771 PushE
	var_76_float = 0; // 0x772 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x773 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x774 Or
	var_78_float = sqrt(var_77_int); // 0x775 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x776 Div2
	var_69_cvector = -var_68_cvector; // 0x777 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x778 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x779 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x77a PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x77b Xor2
	func_2173(var_80_cvector, var_81_cvector); // 0x77c NEW_2
	var_88_int = 25; // 0x77e PushI
	var_89_float = var_80_cvector * var_88_int; // 0x77f Mult
	var_90_int = var_79_float + var_89_float; // 0x780 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x781 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x782 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x783 Add2
	IsOverrideActive(var_72_bool); // 0x784 Func
	var_92_bool = var_72_bool; // 0x786 Push
	if(var_92_bool == 0) goto Label_1930; // 0x787 JumpB
	var_53_bool = 0; // 0x788 MovB
	return 18; // 0x789 Return
	
Label_1930:
	StopWorld(); // 0x78a Func
	var_93_bool = 1; // 0x78c PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x78d Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x78f PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x790 PushE
	Rotate(var_94_float, var_95_float); // 0x791 Func
	var_96_bool = 0; // 0x793 PushV
	func_2271(var_96_bool); // 0x794 NEW_2
	if(var_96_bool == 0) goto Label_1944; // 0x796 JumpB
	goto Label_1952; // 0x797 Jump
	
Label_1952:
	CameraWaitForPlayFinish(); // 0x7a0 Func
	ResumeWorld(); // 0x7a2 Func
	var_53_bool = 1; // 0x7a4 MovB
	return 18; // 0x7a5 Return
	
Label_1944:
	var_97_string = "head"; // 0x798 PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x799 Func
	var_98_bool = var_73_bool; // 0x79b Push
	if(var_98_bool == 0) goto Label_1952; // 0x79c JumpB
	var_99_string = "head"; // 0x79d PushS
	LookAsyncCamera(var_99_string); // 0x79e Func
}


func_2145(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x861 PushV
	var_152_bool = 0; // 0x862 PushV
	func_2271(var_152_bool); // 0x863 NEW_2
	if(var_152_bool == 0) goto Label_2158; // 0x865 JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x866 Func
	var_153_bool = var_151_bool; // 0x868 Push
	if(var_153_bool == 0) goto Label_2158; // 0x869 JumpB
	lshPlaySpeech(var_149_string); // 0x86a Func
	var_148_bool = 1; // 0x86c MovB
	return 2; // 0x86d Return
	
Label_2158:
	var_148_bool = 0; // 0x86e MovB
	return 2; // 0x86f Return
}


func_1129(var_0_object, var_400_int, var_401_object)
{
	var_403_object = Obj(); var_404_bool = 0; var_405_int = 0; var_406_bool = 0; var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; // 0x469 PushV
	var_0_object = var_401_object; // 0x46a TMov
	var_411_bool = 0; var_412_object = Obj(); var_413_float = 0; // 0x46b PushV
	var_412_object = var_401_object; // 0x46c Mov
	var_413_float = 70.0; // 0x46d MovF
	func_1889(var_412_object, var_413_float); // 0x46e NEW_2
	var_414_bool = var_411_bool == 0; // 0x470 Not
	if(var_414_bool == 0) goto Label_1140; // 0x471 JumpB
	var_400_int = -2; // 0x472 MovI
	return 8; // 0x473 Return
	
Label_1140:
	CreateDialog(var_407_object); // 0x474 Func
	var_415_int = 0; // 0x476 PushV
	func_2265(var_415_int); // 0x477 NEW_2
	SetNPCName(var_415_int); // 0x479 ObjFunc
	var_416_int = 0; // 0x47b PushV
	func_2263(var_416_int); // 0x47c NEW_2
	SetNPCDescription(var_416_int); // 0x47e ObjFunc
	var_417_string = ""; // 0x480 PushV
	func_2267(var_417_string); // 0x481 NEW_2
	SetPhoto(var_417_string); // 0x483 ObjFunc
	var_418_string = ""; // 0x485 PushV
	func_2269(var_418_string); // 0x486 NEW_2
	SetPhoto2(var_418_string); // 0x488 ObjFunc
	var_419_int = 0; // 0x48a PushV
	func_2543(var_419_int); // 0x48b NEW_2
	SetPlayerName(var_419_int); // 0x48d ObjFunc
	var_409_int = -1; // 0x48f MovI
	IsOverrideActive(var_408_bool); // 0x490 Func
	var_420_bool = var_408_bool; // 0x492 Push
	if(var_420_bool == 0) goto Label_1174; // 0x493 JumpB
	var_400_int = -2; // 0x494 MovI
	return 8; // 0x495 Return
	
Label_1174:
	DoDialog(var_407_object); // 0x496 Func
	var_421_bool = 0; var_422_object = Obj(); // 0x498 PushV
	var_423_object = Obj(); // 0x499 PushV
	func_2167(var_423_object); // 0x49a NEW_2
	var_422_object = var_423_object; // 0x49b Mov
	func_1976(var_421_bool, var_422_object); // 0x49d NEW_2
	var_424_object = Obj(); var_425_object = Obj(); // 0x49f PushV
	var_424_object = var_401_object; // 0x4a0 Mov
	var_425_object = var_407_object; // 0x4a1 Mov
	TaskCall(5); // 0x4a2 TaskCall
	func_1210(var_426_object, var_427_object, var_428_string, var_429_bool, var_424_object, var_425_object); // 0x4a3 NEW_2
	TaskReturn(); // 0x4a4 TaskReturn
	IsDialogEnd(var_410_bool); // 0x4a6 ObjFunc
	
Label_1192:
	var_457_bool = var_410_bool == 0; // 0x4a8 Not
	if(var_457_bool == 0) goto Label_1199; // 0x4a9 JumpB
	sync(); // 0x4aa Func
	IsDialogEnd(var_410_bool); // 0x4ac ObjFunc
	goto Label_1192; // 0x4ae Jump
	
Label_1199:
	var_458_object = Obj(); // 0x4af PushV
	var_458_object = var_401_object; // 0x4b0 Mov
	func_1958(); // 0x4b1 NEW_2
	StopDialog(var_407_object); // 0x4b3 Func
	GetReturnValue(var_409_int); // 0x4b5 ObjFunc
	var_400_int = var_409_int; // 0x4b7 Mov
	return 8; // 0x4b8 Return
}


func_1388(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0; // 0x56c PushV
	var_0_object = var_461_object; // 0x56d TMov
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0; // 0x56e PushV
	var_472_object = var_461_object; // 0x56f Mov
	var_473_float = 70.0; // 0x570 MovF
	func_1889(var_472_object, var_473_float); // 0x571 NEW_2
	var_474_bool = var_471_bool == 0; // 0x573 Not
	if(var_474_bool == 0) goto Label_1399; // 0x574 JumpB
	var_460_int = -2; // 0x575 MovI
	return 8; // 0x576 Return
	
Label_1399:
	CreateDialog(var_467_object); // 0x577 Func
	var_475_int = 0; // 0x579 PushV
	func_2265(var_475_int); // 0x57a NEW_2
	SetNPCName(var_475_int); // 0x57c ObjFunc
	var_476_int = 0; // 0x57e PushV
	func_2263(var_476_int); // 0x57f NEW_2
	SetNPCDescription(var_476_int); // 0x581 ObjFunc
	var_477_string = ""; // 0x583 PushV
	func_2267(var_477_string); // 0x584 NEW_2
	SetPhoto(var_477_string); // 0x586 ObjFunc
	var_478_string = ""; // 0x588 PushV
	func_2269(var_478_string); // 0x589 NEW_2
	SetPhoto2(var_478_string); // 0x58b ObjFunc
	var_479_int = 0; // 0x58d PushV
	func_2543(var_479_int); // 0x58e NEW_2
	SetPlayerName(var_479_int); // 0x590 ObjFunc
	var_469_int = -1; // 0x592 MovI
	IsOverrideActive(var_468_bool); // 0x593 Func
	var_480_bool = var_468_bool; // 0x595 Push
	if(var_480_bool == 0) goto Label_1433; // 0x596 JumpB
	var_460_int = -2; // 0x597 MovI
	return 8; // 0x598 Return
	
Label_1433:
	DoDialog(var_467_object); // 0x599 Func
	var_481_bool = 0; var_482_object = Obj(); // 0x59b PushV
	var_483_object = Obj(); // 0x59c PushV
	func_2167(var_483_object); // 0x59d NEW_2
	var_482_object = var_483_object; // 0x59e Mov
	func_1976(var_481_bool, var_482_object); // 0x5a0 NEW_2
	var_484_object = Obj(); var_485_object = Obj(); // 0x5a2 PushV
	var_484_object = var_461_object; // 0x5a3 Mov
	var_485_object = var_467_object; // 0x5a4 Mov
	TaskCall(7); // 0x5a5 TaskCall
	func_1469(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object); // 0x5a6 NEW_2
	TaskReturn(); // 0x5a7 TaskReturn
	IsDialogEnd(var_470_bool); // 0x5a9 ObjFunc
	
Label_1451:
	var_514_bool = var_470_bool == 0; // 0x5ab Not
	if(var_514_bool == 0) goto Label_1458; // 0x5ac JumpB
	sync(); // 0x5ad Func
	IsDialogEnd(var_470_bool); // 0x5af ObjFunc
	goto Label_1451; // 0x5b1 Jump
	
Label_1458:
	var_515_object = Obj(); // 0x5b2 PushV
	var_515_object = var_461_object; // 0x5b3 Mov
	func_1958(); // 0x5b4 NEW_2
	StopDialog(var_467_object); // 0x5b6 Func
	GetReturnValue(var_469_int); // 0x5b8 ObjFunc
	var_460_int = var_469_int; // 0x5ba Mov
	return 8; // 0x5bb Return
}


func_2160()
{
	var_24_bool = 0; // 0x870 PushV
	func_2271(var_24_bool); // 0x871 NEW_2
	if(var_24_bool == 0) goto Label_2166; // 0x873 JumpB
	lshStopSpeech(); // 0x874 Func
	
Label_2166:
	return 0; // 0x876 Return
}


func_2421(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0x976 PushV
	var_367_string = "oob8Georg2"; // 0x977 MovS
	func_2183(var_366_int, var_367_string); // 0x978 NEW_2
	var_368_int = 0; // 0x97a PushI
	var_369_bool = var_366_int == var_368_int; // 0x97b Eq
	if(var_369_bool == 0) goto Label_2431; // 0x97c JumpB
	var_364_bool = 1; // 0x97d MovB
	return 0; // 0x97e Return
	
Label_2431:
	var_364_bool = 0; // 0x97f MovB
	return 0; // 0x980 Return
}


func_1654()
{
	var_518_float = 0; var_519_float = 0; // 0x676 PushV
	var_520_int = 8; // 0x677 PushI
	var_521_int = 16; // 0x678 PushI
	rand(var_519_float, var_520_int, var_521_int); // 0x679 Func
	var_522_int = 10; // 0x67b PushI
	SetTimer(var_522_int, var_519_float); // 0x67c Func
	return 2; // 0x67e Return
}


func_2167(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x877 PushV
	self(var_118_object); // 0x878 Func
	var_116_object = var_118_object; // 0x87a Mov
	return 2; // 0x87b Return
}


func_2173(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x87d PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x87e Or
	var_84_float = sqrt(var_85_int); // 0x87f Sqrt2
	var_86_float = 0.0; // 0x880 PushF
	var_87_bool = var_84_float < var_86_float; // 0x881 LT
	if(var_87_bool == 0) goto Label_2181; // 0x882 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x883 MovV
	return 2; // 0x884 Return
	
Label_2181:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x885 Div2
	return 2; // 0x886 Return
}


func_1663()
{
	var_517_int = 10; // 0x67f PushI
	KillTimer(var_517_int); // 0x680 Func
	return 0; // 0x682 Return
}


func_2433()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x981 PushV
	var_49_int = 575; // 0x982 PushI
	var_50_int = 2; // 0x983 PushI
	var_51_int = 530655; // 0x984 PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0x985 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0x987 PushV
	var_53_object = var_48_object; // 0x988 Mov
	var_54_int = -1; // 0x989 MovI
	func_2498(var_52_bool, var_53_object, var_54_int); // 0x98a NEW_2
	return 2; // 0x98c Return
}


func_2183(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0; // 0x887 PushV
	GetVariable(var_305_string, var_307_int); // 0x888 Func
	var_304_int = var_307_int; // 0x88a Mov
	return 2; // 0x88b Return
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x8c PushV
	func_2271(var_217_bool); // 0x8d NEW_2
	var_218_bool = var_217_bool == 0; // 0x8f Not
	if(var_218_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_219_bool = var_216_string == var_2_object; // 0x92 Eq
	if(var_219_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_220_string = ""; var_221_bool = 0; // 0x95 PushV
	var_220_string = var_216_string; // 0x96 Mov
	var_222_string = ""; // 0x97 PushS
	var_223_bool = var_216_string == var_222_string; // 0x98 Eq
	if(var_223_bool == 0) goto Label_156; // 0x99 JumpB
	var_221_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2130(var_220_string, var_221_bool); // 0x9d NEW_2
	var_2_object = var_216_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_221_bool = 1; // 0x9c MovB
}


func_2188(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x88c PushV
	CreateIntVector(var_147_object); // 0x88d Func
	add(var_144_int); // 0x88f ObjFunc
	add(var_145_int); // 0x891 ObjFunc
	var_148_int = 3; // 0x893 PushI
	SendWorldWndMessage(var_148_int, var_147_object); // 0x894 Func
	return 2; // 0x896 Return
}


func_2446()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x98e PushV
	var_72_int = 576; // 0x98f PushI
	var_73_int = 2; // 0x990 PushI
	var_74_int = 530656; // 0x991 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x992 Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x994 PushV
	var_76_object = var_71_object; // 0x995 Mov
	var_77_int = 575; // 0x996 MovI
	func_2498(var_75_bool, var_76_object, var_77_int); // 0x997 NEW_2
	return 2; // 0x999 Return
}


func_2200(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; // 0x898 PushV
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0; // 0x899 PushV
	var_135_object = var_131_object; // 0x89a Mov
	var_136_string = "money"; // 0x89b MovS
	var_137_int = var_132_int; // 0x89c Mov
	func_1858(var_136_string, var_137_int); // 0x89d NEW_2
	var_141_int = 0; // 0x89f PushI
	var_142_bool = var_132_int > var_141_int; // 0x8a0 GT
	if(var_142_bool == 0) goto Label_2218; // 0x8a1 JumpB
	var_143_string = "Money"; // 0x8a2 PushS
	GetInvItemByName(var_134_int, var_143_string); // 0x8a3 Func
	var_144_int = 0; var_145_int = 0; // 0x8a5 PushV
	var_144_int = var_134_int; // 0x8a6 Mov
	var_145_int = var_132_int; // 0x8a7 Mov
	func_2188(var_144_int, var_145_int); // 0x8a8 NEW_2
	
Label_2218:
	return 2; // 0x8aa Return
}


func_2459()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x99b PushV
	var_96_int = 580; // 0x99c PushI
	var_97_int = 2; // 0x99d PushI
	var_98_int = 530660; // 0x99e PushI
	CreateDiaryEntry(var_95_object, var_96_int, var_97_int, var_98_int); // 0x99f Func
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0; // 0x9a1 PushV
	var_100_object = var_95_object; // 0x9a2 Mov
	var_101_int = 575; // 0x9a3 MovI
	func_2498(var_99_bool, var_100_object, var_101_int); // 0x9a4 NEW_2
	return 2; // 0x9a6 Return
}


func_1958()
{
	var_260_bool = 0; var_261_bool = 0; // 0x7a6 PushV
	var_262_bool = 1; // 0x7a7 PushB
	CameraSwitchToNormal(var_262_bool); // 0x7a8 Func
	var_263_bool = 0; // 0x7aa PushV
	func_2271(var_263_bool); // 0x7ab NEW_2
	if(var_263_bool == 0) goto Label_1967; // 0x7ad JumpB
	goto Label_1975; // 0x7ae Jump
	
Label_1975:
	return 2; // 0x7b7 Return
	
Label_1967:
	var_264_string = "head"; // 0x7af PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x7b0 Func
	var_265_bool = var_261_bool; // 0x7b2 Push
	if(var_265_bool == 0) goto Label_1975; // 0x7b3 JumpB
	var_266_string = "head"; // 0x7b4 PushS
	UnlookAsync(var_266_string); // 0x7b5 Func
}


func_2472()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x9a8 PushV
	var_155_int = 581; // 0x9a9 PushI
	var_156_int = 2; // 0x9aa PushI
	var_157_int = 530661; // 0x9ab PushI
	CreateDiaryEntry(var_154_object, var_155_int, var_156_int, var_157_int); // 0x9ac Func
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0; // 0x9ae PushV
	var_159_object = var_154_object; // 0x9af Mov
	var_160_int = 575; // 0x9b0 MovI
	func_2498(var_158_bool, var_159_object, var_160_int); // 0x9b1 NEW_2
	return 2; // 0x9b3 Return
}


func_2219(var_44_float)
{
	var_45_float = 0; var_46_float = 0; // 0x8ab PushV
	GetGameTime(var_46_float); // 0x8ac Func
	var_44_float = var_46_float; // 0x8ae Mov
	return 2; // 0x8af Return
}


func_2224(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x8b0 PushV
	GetGameTime(var_171_float); // 0x8b1 Func
	var_172_int = 1; // 0x8b3 PushI
	var_173_int = 0; // 0x8b4 PushV
	var_174_int = 24; // 0x8b5 PushI
	var_173_int = var_171_float / var_171_float; // 0x8b6 Div2
	var_169_int = var_172_int + var_173_int; // 0x8b7 Add2
	return 2; // 0x8b8 Return
}


func_2485(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x9b5 PushV
	GetDiaryRoot(var_63_object); // 0x9b6 Func
	var_64_bool = var_63_object == 0; // 0x9b8 Not
	if(var_64_bool == 0) goto Label_2495; // 0x9b9 JumpB
	var_65_string = "Can't retrieve diary root"; // 0x9ba PushS
	Trace(var_65_string); // 0x9bb Func
	var_61_object = 0; // 0x9bd MovB
	return 2; // 0x9be Return
	
Label_2495:
	var_61_object = var_63_object; // 0x9bf Mov
	return 2; // 0x9c0 Return
}


func_1976(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x7b8 PushV
	var_123_string = "voice_common"; // 0x7b9 PushS
	GetVariable(var_123_string, var_121_int); // 0x7ba Func
	var_124_int = var_121_int; // 0x7bc Push
	if(var_124_int == 0) goto Label_2014; // 0x7bd JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x7be PushV
	var_126_object = var_115_object; // 0x7bf Mov
	func_2034(var_126_object); // 0x7c0 NEW_2
	var_155_bool = var_125_bool == 0; // 0x7c2 Not
	if(var_155_bool == 0) goto Label_1996; // 0x7c3 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x7c4 PushV
	var_157_object = var_115_object; // 0x7c5 Mov
	func_2071(var_157_object); // 0x7c6 NEW_2
	var_191_bool = var_156_bool == 0; // 0x7c8 Not
	if(var_191_bool == 0) goto Label_1996; // 0x7c9 JumpB
	var_114_bool = 0; // 0x7ca MovB
	return 4; // 0x7cb Return
	
Label_1996:
	var_192_int = 2; // 0x7cc PushI
	irand(var_122_int, var_192_int); // 0x7cd Func
	var_193_int = var_122_int; // 0x7cf Push
	if(var_193_int == 0) goto Label_2009; // 0x7d0 JumpB
	var_194_string = "voice_common"; // 0x7d1 PushS
	var_195_int = 1; // 0x7d2 PushI
	var_196_int = var_121_int + var_195_int; // 0x7d3 Add
	var_197_int = 3; // 0x7d4 PushI
	var_198_int = var_196_int / var_197_int; // 0x7d5 Mod
	SetVariable(var_194_string, var_198_int); // 0x7d6 Func
	goto Label_2013; // 0x7d8 Jump
	
Label_2013:
	goto Label_2032; // 0x7dd Jump
	
Label_2032:
	var_114_bool = 1; // 0x7f0 MovB
	return 4; // 0x7f1 Return
	
Label_2009:
	var_199_string = "voice_common"; // 0x7d9 PushS
	var_200_int = 0; // 0x7da PushI
	SetVariable(var_199_string, var_200_int); // 0x7db Func
	
Label_2014:
	var_201_bool = 0; var_202_object = Obj(); // 0x7de PushV
	var_202_object = var_115_object; // 0x7df Mov
	func_2071(var_202_object); // 0x7e0 NEW_2
	var_203_bool = var_201_bool == 0; // 0x7e2 Not
	if(var_203_bool == 0) goto Label_2028; // 0x7e3 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x7e4 PushV
	var_205_object = var_115_object; // 0x7e5 Mov
	func_2034(var_205_object); // 0x7e6 NEW_2
	var_206_bool = var_204_bool == 0; // 0x7e8 Not
	if(var_206_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_114_bool = 0; // 0x7ea MovB
	return 4; // 0x7eb Return
	
Label_2028:
	var_207_string = "voice_common"; // 0x7ec PushS
	var_208_int = 1; // 0x7ed PushI
	SetVariable(var_207_string, var_208_int); // 0x7ee Func
}


func_2233(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x8ba PushV
	func_2224(var_270_int); // 0x8bb NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x8bd Eq2
	return 0; // 0x8be Return
}


func_1210(var_0_object, var_1_object, var_2_object, var_3_string, var_424_object, var_425_object)
{
	var_0_object = var_425_object; // 0x4bb TMov
	var_1_object = var_424_object; // 0x4bc TMov
	var_3_string = 0; // 0x4bd TMovB
	var_430_int = 1; // 0x4be PushI
	if(var_430_int == 0) goto Label_1243; // 0x4bf JumpB
	var_431_string = ""; // 0x4c0 PushV
	var_431_string = "Neutral"; // 0x4c1 MovS
	func_1273(var_425_object, var_431_string); // 0x4c2 NEW_2
	var_439_int = 535231; // 0x4c4 PushI
	SetMessage(var_439_int); // 0x4c5 TObjFunc
	ClearReplies(); // 0x4c7 TObjFunc
	var_440_int = 535232; // 0x4c9 PushI
	var_441_int = 36953; // 0x4ca PushI
	var_442_int = 36907; // 0x4cb PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x4cc TObjFunc
	var_443_int = 535233; // 0x4ce PushI
	var_444_int = -1; // 0x4cf PushI
	var_445_int = 36908; // 0x4d0 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x4d1 TObjFunc
	var_446_int = 535280; // 0x4d3 PushI
	var_447_int = -1; // 0x4d4 PushI
	var_448_int = 36956; // 0x4d5 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x4d6 TObjFunc
	goto Label_1243; // 0x4d8 Jump
	
Label_1243:
	var_449_bool = 0; // 0x4db PushV
	func_2271(var_449_bool); // 0x4dc NEW_2
	if(var_449_bool == 0) goto Label_1258; // 0x4de JumpB
	
Label_1247:
	lshWaitForAnimEnd(); // 0x4df Func
	var_450_string = var_3_string; // 0x4e1 PushT
	if(var_450_string == 0) goto Label_1252; // 0x4e2 JumpB
	goto Label_1257; // 0x4e3 Jump
	
Label_1257:
	goto Label_1272; // 0x4e9 Jump
	
Label_1272:
	return 0; // 0x4f8 Return
	
Label_1252:
	var_451_string = ""; // 0x4e4 PushV
	var_451_string = var_2_object; // 0x4e5 MovT
	func_2114(var_451_string); // 0x4e6 NEW_2
	goto Label_1247; // 0x4e8 Jump
	
Label_1258:
	var_452_string = "all"; // 0x4ea PushS
	var_453_string = "idle"; // 0x4eb PushS
	PlayAnimation(var_452_string, var_453_string); // 0x4ec Func
	
Label_1262:
	WaitForAnimEnd(); // 0x4ee Func
	var_454_string = var_3_string; // 0x4f0 PushT
	if(var_454_string == 0) goto Label_1267; // 0x4f1 JumpB
	goto Label_1272; // 0x4f2 Jump
	
Label_1267:
	var_455_string = "all"; // 0x4f3 PushS
	var_456_string = "idle"; // 0x4f4 PushS
	PlayAnimation(var_455_string, var_456_string); // 0x4f5 Func
	goto Label_1262; // 0x4f7 Jump
}


func_443(var_2_object, var_318_string)
{
	var_319_bool = 0; // 0x1bc PushV
	func_2271(var_319_bool); // 0x1bd NEW_2
	var_320_bool = var_319_bool == 0; // 0x1bf Not
	if(var_320_bool == 0) goto Label_450; // 0x1c0 JumpB
	return 0; // 0x1c1 Return
	
Label_450:
	var_321_bool = var_318_string == var_2_object; // 0x1c2 Eq
	if(var_321_bool == 0) goto Label_453; // 0x1c3 JumpB
	return 0; // 0x1c4 Return
	
Label_453:
	var_322_string = ""; var_323_bool = 0; // 0x1c5 PushV
	var_322_string = var_318_string; // 0x1c6 Mov
	var_324_string = ""; // 0x1c7 PushS
	var_325_bool = var_318_string == var_324_string; // 0x1c8 Eq
	if(var_325_bool == 0) goto Label_460; // 0x1c9 JumpB
	var_323_bool = 0; // 0x1ca MovB
	goto Label_461; // 0x1cb Jump
	
Label_461:
	func_2130(var_322_string, var_323_bool); // 0x1cd NEW_2
	var_2_object = var_318_string; // 0x1cf TMov
	return 0; // 0x1d0 Return
	
Label_460:
	var_323_bool = 1; // 0x1cc MovB
}


func_1469(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object; // 0x5be TMov
	var_1_object = var_484_object; // 0x5bf TMov
	var_3_string = 0; // 0x5c0 TMovB
	var_490_int = 1; // 0x5c1 PushI
	if(var_490_int == 0) goto Label_1497; // 0x5c2 JumpB
	var_491_string = ""; // 0x5c3 PushV
	var_491_string = "Neutral"; // 0x5c4 MovS
	func_1527(var_485_object, var_491_string); // 0x5c5 NEW_2
	var_499_int = 540554; // 0x5c7 PushI
	SetMessage(var_499_int); // 0x5c8 TObjFunc
	ClearReplies(); // 0x5ca TObjFunc
	var_500_int = 540555; // 0x5cc PushI
	var_501_int = -1; // 0x5cd PushI
	var_502_int = 42564; // 0x5ce PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x5cf TObjFunc
	var_503_int = 540794; // 0x5d1 PushI
	var_504_int = -1; // 0x5d2 PushI
	var_505_int = 42843; // 0x5d3 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x5d4 TObjFunc
	goto Label_1497; // 0x5d6 Jump
	
Label_1497:
	var_506_bool = 0; // 0x5d9 PushV
	func_2271(var_506_bool); // 0x5da NEW_2
	if(var_506_bool == 0) goto Label_1512; // 0x5dc JumpB
	
Label_1501:
	lshWaitForAnimEnd(); // 0x5dd Func
	var_507_string = var_3_string; // 0x5df PushT
	if(var_507_string == 0) goto Label_1506; // 0x5e0 JumpB
	goto Label_1511; // 0x5e1 Jump
	
Label_1511:
	goto Label_1526; // 0x5e7 Jump
	
Label_1526:
	return 0; // 0x5f6 Return
	
Label_1506:
	var_508_string = ""; // 0x5e2 PushV
	var_508_string = var_2_object; // 0x5e3 MovT
	func_2114(var_508_string); // 0x5e4 NEW_2
	goto Label_1501; // 0x5e6 Jump
	
Label_1512:
	var_509_string = "all"; // 0x5e8 PushS
	var_510_string = "idle"; // 0x5e9 PushS
	PlayAnimation(var_509_string, var_510_string); // 0x5ea Func
	
Label_1516:
	WaitForAnimEnd(); // 0x5ec Func
	var_511_string = var_3_string; // 0x5ee PushT
	if(var_511_string == 0) goto Label_1521; // 0x5ef JumpB
	goto Label_1526; // 0x5f0 Jump
	
Label_1521:
	var_512_string = "all"; // 0x5f1 PushS
	var_513_string = "idle"; // 0x5f2 PushS
	PlayAnimation(var_512_string, var_513_string); // 0x5f3 Func
	goto Label_1516; // 0x5f5 Jump
}


func_2239(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x8bf PushV
	var_49_string = "idle"; // 0x8c0 MovS
	var_50_int = var_47_int; // 0x8c1 Push
	if(var_50_int == 0) goto Label_2244; // 0x8c2 JumpB
	var_49_string = var_49_string + var_47_int; // 0x8c3 Add2
	
Label_2244:
	var_46_string = var_49_string; // 0x8c4 Mov
	return 2; // 0x8c5 Return
}


func_2498(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x9c2 PushV
	var_61_object = Obj(); // 0x9c3 PushV
	func_2485(var_61_object); // 0x9c4 NEW_2
	var_58_object = var_61_object; // 0x9c5 Mov
	Find(var_54_int, var_59_object); // 0x9c7 ObjFunc
	var_66_bool = var_59_object == 0; // 0x9c9 Not
	if(var_66_bool == 0) goto Label_2513; // 0x9ca JumpB
	var_67_string = "Can't find diary parent with id: "; // 0x9cb PushS
	var_68_int = var_67_string + var_54_int; // 0x9cc Add
	Trace(var_68_int); // 0x9cd Func
	var_52_bool = 0; // 0x9cf MovB
	return 6; // 0x9d0 Return
	
Label_2513:
	AddChild(var_53_object); // 0x9d1 ObjFunc
	var_69_int = 7; // 0x9d3 PushI
	SendWorldWndMessage(var_69_int); // 0x9d4 Func
	GetCategory(var_60_int); // 0x9d6 ObjFunc
	SetDiarySection(var_60_int); // 0x9d8 Func
	var_52_bool = 0; // 0x9da MovB
	return 6; // 0x9db Return
}


func_2246(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x8c6 PushV
	var_43_int = 0; // 0x8c7 MovI
	
Label_2248:
	var_45_string = "all"; // 0x8c8 PushS
	var_46_string = ""; var_47_int = 0; // 0x8c9 PushV
	var_47_int = var_43_int; // 0x8ca Mov
	func_2239(var_46_string, var_47_int); // 0x8cb NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x8cd Func
	var_51_bool = var_44_bool == 0; // 0x8cf Not
	if(var_51_bool == 0) goto Label_2258; // 0x8d0 JumpB
	goto Label_2261; // 0x8d1 Jump
	
Label_2261:
	var_40_int = var_43_int; // 0x8d5 Mov
	return 4; // 0x8d6 Return
	
Label_2258:
	var_52_int = 1; // 0x8d2 PushI
	var_43_int = var_43_int + var_52_int; // 0x8d3 Add2
	goto Label_2248; // 0x8d4 Jump
}


func_2263(var_102_int)
{
	var_102_int = 515534; // 0x8d7 MovI
	return 0; // 0x8d8 Return
}


func_2265(var_101_int)
{
	var_101_int = 502859; // 0x8d9 MovI
	return 0; // 0x8da Return
}


func_2267(var_103_string)
{
	var_103_string = "ui/NPC_Georg.png"; // 0x8db MovS
	return 0; // 0x8dc Return
}


func_2269(var_104_string)
{
	var_104_string = "ui/NPC_Georg_b.png"; // 0x8dd MovS
	return 0; // 0x8de Return
}


func_2526(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x9de PushV
	GetMainOutdoorScene(var_36_object); // 0x9df Func
	var_38_bool = var_36_object == 0; // 0x9e1 NullEq
	if(var_38_bool == 0) goto Label_2537; // 0x9e2 JumpB
	var_39_string = "Can't find main outdoor scene"; // 0x9e3 PushS
	Trace(var_39_string); // 0x9e4 Func
	var_37_object = 0; // 0x9e6 SetNull
	var_33_object = var_37_object; // 0x9e7 Mov
	return 4; // 0x9e8 Return
	
Label_2537:
	GetMap(var_37_object); // 0x9e9 ObjFunc
	var_33_object = var_37_object; // 0x9eb Mov
	return 4; // 0x9ec Return
}


func_2271(var_96_bool)
{
	var_96_bool = 1; // 0x8df MovB
	return 0; // 0x8e0 Return
}


func_2273()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x8e1 PushV
	var_31_string = "b8q03"; // 0x8e2 PushS
	var_32_int = 1; // 0x8e3 PushI
	SetVariable(var_31_string, var_32_int); // 0x8e4 Func
	var_33_object = Obj(); // 0x8e6 PushV
	func_2526(var_33_object); // 0x8e7 NEW_2
	var_30_object = var_33_object; // 0x8e8 Mov
	var_40_string = "b8q03GeorgGotoKaterina"; // 0x8ea PushS
	var_41_string = "pt_map_katerina"; // 0x8eb PushS
	var_42_int = 0; // 0x8ec PushI
	var_43_int = 530663; // 0x8ed PushI
	var_44_float = 0; // 0x8ee PushV
	func_2219(var_44_float); // 0x8ef NEW_2
	AddMark(var_40_string, var_41_string, var_42_int, var_43_int, var_44_float); // 0x8f1 ObjFunc
	func_2433(); // 0x8f4 NEW_2
	func_2446(); // 0x8f7 NEW_2
	return 2; // 0x8f9 Return
}


func_226(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0xe2 PushV
	var_0_object = var_272_object; // 0xe3 TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0xe4 PushV
	var_283_object = var_272_object; // 0xe5 Mov
	var_284_float = 70.0; // 0xe6 MovF
	func_1889(var_283_object, var_284_float); // 0xe7 NEW_2
	var_285_bool = var_282_bool == 0; // 0xe9 Not
	if(var_285_bool == 0) goto Label_237; // 0xea JumpB
	var_271_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_278_object); // 0xed Func
	var_286_int = 0; // 0xef PushV
	func_2265(var_286_int); // 0xf0 NEW_2
	SetNPCName(var_286_int); // 0xf2 ObjFunc
	var_287_int = 0; // 0xf4 PushV
	func_2263(var_287_int); // 0xf5 NEW_2
	SetNPCDescription(var_287_int); // 0xf7 ObjFunc
	var_288_string = ""; // 0xf9 PushV
	func_2267(var_288_string); // 0xfa NEW_2
	SetPhoto(var_288_string); // 0xfc ObjFunc
	var_289_string = ""; // 0xfe PushV
	func_2269(var_289_string); // 0xff NEW_2
	SetPhoto2(var_289_string); // 0x101 ObjFunc
	var_290_int = 0; // 0x103 PushV
	func_2543(var_290_int); // 0x104 NEW_2
	SetPlayerName(var_290_int); // 0x106 ObjFunc
	var_280_int = -1; // 0x108 MovI
	IsOverrideActive(var_279_bool); // 0x109 Func
	var_291_bool = var_279_bool; // 0x10b Push
	if(var_291_bool == 0) goto Label_271; // 0x10c JumpB
	var_271_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_278_object); // 0x10f Func
	var_292_bool = 0; var_293_object = Obj(); // 0x111 PushV
	var_294_object = Obj(); // 0x112 PushV
	func_2167(var_294_object); // 0x113 NEW_2
	var_293_object = var_294_object; // 0x114 Mov
	func_1976(var_292_bool, var_293_object); // 0x116 NEW_2
	var_295_object = Obj(); var_296_object = Obj(); // 0x118 PushV
	var_295_object = var_272_object; // 0x119 Mov
	var_296_object = var_278_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_281_bool); // 0x11f ObjFunc
	
Label_289:
	var_393_bool = var_281_bool == 0; // 0x121 Not
	if(var_393_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_281_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_394_object = Obj(); // 0x128 PushV
	var_394_object = var_272_object; // 0x129 Mov
	func_1958(); // 0x12a NEW_2
	StopDialog(var_278_object); // 0x12c Func
	GetReturnValue(var_280_int); // 0x12e ObjFunc
	var_271_int = var_280_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_1774()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x6ee PushV
	WaitForAnimEnd(); // 0x6ef Func
	var_38_bool = 0; // 0x6f1 PushV
	func_1884(var_38_bool); // 0x6f2 NEW_2
	var_39_bool = var_38_bool == 0; // 0x6f4 Not
	if(var_39_bool == 0) goto Label_1783; // 0x6f5 JumpB
	return 12; // 0x6f6 Return
	
Label_1783:
	var_40_int = 0; // 0x6f7 PushV
	func_2246(var_40_int); // 0x6f8 NEW_2
	var_32_int = var_40_int; // 0x6f9 Mov
	var_33_int = 0; // 0x6fb MovI
	
Label_1788:
	var_53_bool = 0; // 0x6fc PushV
	var_53_bool = 0; // 0x6fd MovB
	var_54_int = 5; // 0x6fe PushI
	var_55_bool = var_33_int < var_54_int; // 0x6ff LT
	if(var_55_bool == 0) goto Label_1798; // 0x700 JumpB
	var_56_bool = 0; // 0x701 PushV
	func_1884(var_56_bool); // 0x702 NEW_2
	if(var_56_bool == 0) goto Label_1798; // 0x704 JumpB
	var_53_bool = 1; // 0x705 MovB
	
Label_1798:
	if(var_53_bool == 0) goto Label_1840; // 0x706 JumpB
	var_57_bool = var_32_int == 0; // 0x707 Not
	if(var_57_bool == 0) goto Label_1808; // 0x708 JumpB
	var_58_int = 3; // 0x709 PushI
	Sleep(var_58_int, var_34_bool); // 0x70a Func
	var_59_bool = var_34_bool == 0; // 0x70c Not
	if(var_59_bool == 0) goto Label_1807; // 0x70d JumpB
	goto Label_1840; // 0x70e Jump
	
Label_1840:
	ResetAAS(); // 0x730 Func
	return 12; // 0x732 Return
	
Label_1807:
	goto Label_1829; // 0x70f Jump
	
Label_1829:
	var_60_bool = 0; // 0x725 PushV
	func_1843(var_60_bool); // 0x726 NEW_2
	var_61_bool = var_60_bool == 0; // 0x728 Not
	if(var_61_bool == 0) goto Label_1835; // 0x729 JumpB
	goto Label_1840; // 0x72a Jump
	
Label_1835:
	ResetAAS(); // 0x72b Func
	var_62_int = 1; // 0x72d PushI
	var_33_int = var_33_int + var_62_int; // 0x72e Add2
	goto Label_1788; // 0x72f Jump
	
Label_1808:
	irand(var_35_int, var_32_int); // 0x710 Func
	var_63_int = 5; // 0x712 PushI
	irand(var_36_int, var_63_int); // 0x713 Func
	var_64_int = 0; // 0x715 PushI
	var_65_bool = var_36_int != var_64_int; // 0x716 Neq
	if(var_65_bool == 0) goto Label_1817; // 0x717 JumpB
	var_35_int = 0; // 0x718 MovI
	
Label_1817:
	var_66_string = "all"; // 0x719 PushS
	var_67_string = ""; var_68_int = 0; // 0x71a PushV
	var_68_int = var_35_int; // 0x71b Mov
	func_2239(var_67_string, var_68_int); // 0x71c NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x71e Func
	WaitForAnimEnd(var_37_bool); // 0x720 Func
	var_69_bool = var_37_bool == 0; // 0x722 Not
	if(var_69_bool == 0) goto Label_1829; // 0x723 JumpB
	goto Label_1840; // 0x724 Jump
}


func_2543(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x9ef PushV
	var_108_string = "branch"; // 0x9f0 PushS
	GetVariable(var_108_string, var_107_int); // 0x9f1 Func
	var_109_int = 0; // 0x9f3 PushI
	var_110_bool = var_107_int == var_109_int; // 0x9f4 Eq
	if(var_110_bool == 0) goto Label_2553; // 0x9f5 JumpB
	var_105_int = 1; // 0x9f6 MovI
	return 2; // 0x9f7 Return
	
Label_2553:
	var_111_int = 1; // 0x9f9 PushI
	var_112_bool = var_107_int == var_111_int; // 0x9fa Eq
	if(var_112_bool == 0) goto Label_2558; // 0x9fb JumpB
	var_105_int = 2; // 0x9fc MovI
	return 2; // 0x9fd Return
	
Label_2558:
	var_105_int = 3; // 0x9fe MovI
	return 2; // 0x9ff Return
}


func_2034(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x7f2 PushV
	var_132_string = "c"; // 0x7f3 MovS
	var_133_int = 0; // 0x7f4 MovI
	
Label_2037:
	var_137_int = 1; // 0x7f5 PushI
	if(var_137_int == 0) goto Label_2050; // 0x7f6 JumpB
	var_138_int = 1; // 0x7f7 PushI
	var_139_int = var_133_int + var_138_int; // 0x7f8 Add
	var_140_int = var_132_string + var_139_int; // 0x7f9 Add
	HasProperty(var_140_int, var_134_bool); // 0x7fa ObjFunc
	var_141_bool = var_134_bool == 0; // 0x7fc Not
	if(var_141_bool == 0) goto Label_2047; // 0x7fd JumpB
	goto Label_2050; // 0x7fe Jump
	
Label_2050:
	var_142_bool = var_133_int == 0; // 0x802 Not
	if(var_142_bool == 0) goto Label_2054; // 0x803 JumpB
	var_125_bool = 0; // 0x804 MovB
	return 10; // 0x805 Return
	
Label_2054:
	var_135_int = 0; // 0x806 MovI
	var_143_int = 1; // 0x807 PushI
	var_144_bool = var_133_int > var_143_int; // 0x808 GT
	if(var_144_bool == 0) goto Label_2060; // 0x809 JumpB
	irand(var_135_int, var_133_int); // 0x80a Func
	
Label_2060:
	var_145_int = 1; // 0x80c PushI
	var_146_int = var_135_int + var_145_int; // 0x80d Add
	var_147_int = var_132_string + var_146_int; // 0x80e Add
	GetProperty(var_147_int, var_136_string); // 0x80f ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x811 PushV
	var_149_string = var_136_string; // 0x812 Mov
	func_2145(var_148_bool, var_149_string); // 0x813 NEW_2
	var_125_bool = var_148_bool; // 0x814 Mov
	return 10; // 0x816 Return
	
Label_2047:
	var_154_int = 1; // 0x7ff PushI
	var_133_int = var_133_int + var_154_int; // 0x800 Add2
	goto Label_2037; // 0x801 Jump
}


func_1527(var_2_object, var_491_string)
{
	var_492_bool = 0; // 0x5f8 PushV
	func_2271(var_492_bool); // 0x5f9 NEW_2
	var_493_bool = var_492_bool == 0; // 0x5fb Not
	if(var_493_bool == 0) goto Label_1534; // 0x5fc JumpB
	return 0; // 0x5fd Return
	
Label_1534:
	var_494_bool = var_491_string == var_2_object; // 0x5fe Eq
	if(var_494_bool == 0) goto Label_1537; // 0x5ff JumpB
	return 0; // 0x600 Return
	
Label_1537:
	var_495_string = ""; var_496_bool = 0; // 0x601 PushV
	var_495_string = var_491_string; // 0x602 Mov
	var_497_string = ""; // 0x603 PushS
	var_498_bool = var_491_string == var_497_string; // 0x604 Eq
	if(var_498_bool == 0) goto Label_1544; // 0x605 JumpB
	var_496_bool = 0; // 0x606 MovB
	goto Label_1545; // 0x607 Jump
	
Label_1545:
	func_2130(var_495_string, var_496_bool); // 0x609 NEW_2
	var_2_object = var_491_string; // 0x60b TMov
	return 0; // 0x60c Return
	
Label_1544:
	var_496_bool = 1; // 0x608 MovB
}


func_1273(var_2_object, var_431_string)
{
	var_432_bool = 0; // 0x4fa PushV
	func_2271(var_432_bool); // 0x4fb NEW_2
	var_433_bool = var_432_bool == 0; // 0x4fd Not
	if(var_433_bool == 0) goto Label_1280; // 0x4fe JumpB
	return 0; // 0x4ff Return
	
Label_1280:
	var_434_bool = var_431_string == var_2_object; // 0x500 Eq
	if(var_434_bool == 0) goto Label_1283; // 0x501 JumpB
	return 0; // 0x502 Return
	
Label_1283:
	var_435_string = ""; var_436_bool = 0; // 0x503 PushV
	var_435_string = var_431_string; // 0x504 Mov
	var_437_string = ""; // 0x505 PushS
	var_438_bool = var_431_string == var_437_string; // 0x506 Eq
	if(var_438_bool == 0) goto Label_1290; // 0x507 JumpB
	var_436_bool = 0; // 0x508 MovB
	goto Label_1291; // 0x509 Jump
	
Label_1291:
	func_2130(var_435_string, var_436_bool); // 0x50b NEW_2
	var_2_object = var_431_string; // 0x50d TMov
	return 0; // 0x50e Return
	
Label_1290:
	var_436_bool = 1; // 0x50a MovB
}


func_2299()
{
	var_312_string = "oob8Georg1"; // 0x8fc PushS
	var_313_int = 1; // 0x8fd PushI
	SetVariable(var_312_string, var_313_int); // 0x8fe Func
	return 0; // 0x900 Return
}


