task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector)
{
	var_13_int = 1; // 0xa7 PushI
	if(var_13_int == 0) goto Label_258; // 0xa8 JumpB
	func_1019(); // 0xaa NEW_2
	var_15_int = 36971; // 0xac PushI
	var_16_bool = var_11_bool == var_15_int; // 0xad Eq
	if(var_16_bool == 0) goto Label_200; // 0xae JumpB
	var_17_string = ""; // 0xaf PushV
	var_17_string = "Neutral"; // 0xb0 MovS
	func_144(var_12_cvector, var_17_string); // 0xb1 NEW_2
	var_34_int = 535294; // 0xb3 PushI
	SetMessage(var_34_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_35_int = 535295; // 0xb8 PushI
	var_36_int = 36973; // 0xb9 PushI
	var_37_int = 36972; // 0xba PushI
	AddReply(var_35_int, var_36_int, var_37_int); // 0xbb TObjFunc
	var_38_int = 535302; // 0xbd PushI
	var_39_int = -1; // 0xbe PushI
	var_40_int = 36980; // 0xbf PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0xc0 TObjFunc
	var_41_int = 535303; // 0xc2 PushI
	var_42_int = -1; // 0xc3 PushI
	var_43_int = 36981; // 0xc4 PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_44_int = 36973; // 0xc8 PushI
	var_45_bool = var_11_bool == var_44_int; // 0xc9 Eq
	if(var_45_bool == 0) goto Label_223; // 0xca JumpB
	var_46_string = ""; // 0xcb PushV
	var_46_string = "Neutral"; // 0xcc MovS
	func_144(var_12_cvector, var_46_string); // 0xcd NEW_2
	var_47_int = 535296; // 0xcf PushI
	SetMessage(var_47_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_48_int = 535297; // 0xd4 PushI
	var_49_int = 36975; // 0xd5 PushI
	var_50_int = 36974; // 0xd6 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd7 TObjFunc
	var_51_int = 535301; // 0xd9 PushI
	var_52_int = 36975; // 0xda PushI
	var_53_int = 36978; // 0xdb PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_54_int = 36975; // 0xdf PushI
	var_55_bool = var_11_bool == var_54_int; // 0xe0 Eq
	if(var_55_bool == 0) goto Label_246; // 0xe1 JumpB
	var_56_string = ""; // 0xe2 PushV
	var_56_string = "Neutral"; // 0xe3 MovS
	func_144(var_12_cvector, var_56_string); // 0xe4 NEW_2
	var_57_int = 535298; // 0xe6 PushI
	SetMessage(var_57_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_58_int = 535299; // 0xeb PushI
	var_59_int = -1; // 0xec PushI
	var_60_int = 36976; // 0xed PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xee TObjFunc
	var_61_int = 535300; // 0xf0 PushI
	var_62_int = -1; // 0xf1 PushI
	var_63_int = 36977; // 0xf2 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_64_bool = 0; // 0xf7 PushV
	func_1089(var_64_bool); // 0xf8 NEW_2
	if(var_64_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector)
{
	var_13_int = 1; // 0x1a5 PushI
	if(var_13_int == 0) goto Label_461; // 0x1a6 JumpB
	func_1019(); // 0x1a8 NEW_2
	var_15_int = 42563; // 0x1aa PushI
	var_16_bool = var_11_int == var_15_int; // 0x1ab Eq
	if(var_16_bool == 0) goto Label_449; // 0x1ac JumpB
	var_17_string = ""; // 0x1ad PushV
	var_17_string = "Neutral"; // 0x1ae MovS
	func_398(var_12_cvector, var_17_string); // 0x1af NEW_2
	var_34_int = 540554; // 0x1b1 PushI
	SetMessage(var_34_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_35_int = 540555; // 0x1b6 PushI
	var_36_int = -1; // 0x1b7 PushI
	var_37_int = 42564; // 0x1b8 PushI
	AddReply(var_35_int, var_36_int, var_37_int); // 0x1b9 TObjFunc
	var_38_int = 540794; // 0x1bb PushI
	var_39_int = -1; // 0x1bc PushI
	var_40_int = 42843; // 0x1bd PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_3_string = 1; // 0x1c1 TMovB
	var_41_bool = 0; // 0x1c2 PushV
	func_1089(var_41_bool); // 0x1c3 NEW_2
	if(var_41_bool == 0) goto Label_457; // 0x1c5 JumpB
	lshStopAnimation(); // 0x1c6 Func
	goto Label_459; // 0x1c8 Jump
	
Label_459:
	return 0; // 0x1cb Return
	
Label_457:
	StopAnimation(); // 0x1c9 Func
	
Label_461:
	return 0; // 0x1cd Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_int)
{
	var_12_int = 10; // 0x218 PushI
	var_13_bool = var_11_int == var_12_int; // 0x219 Eq
	if(var_13_bool == 0) goto Label_572; // 0x21a JumpB
	func_531(); // 0x21c NEW_2
	var_15_bool = 0; // 0x21e PushV
	var_15_bool = 0; // 0x21f MovB
	var_16_bool = 0; // 0x220 PushV
	func_745(var_16_bool); // 0x221 NEW_2
	if(var_16_bool == 0) goto Label_553; // 0x223 JumpB
	var_19_bool = 0; // 0x224 PushV
	func_500(var_19_bool); // 0x225 NEW_2
	if(var_19_bool == 0) goto Label_553; // 0x227 JumpB
	var_15_bool = 1; // 0x228 MovB
	
Label_553:
	if(var_15_bool == 0) goto Label_566; // 0x229 JumpB
	var_36_bool = 0; // 0x22a PushV
	func_480(var_36_bool); // 0x22b NEW_2
	if(var_36_bool == 0) goto Label_565; // 0x22d JumpB
	var_55_bool = 0; var_56_object = Obj(); // 0x22e PushV
	var_57_object = Obj(); // 0x22f PushV
	func_1026(var_57_object); // 0x230 NEW_2
	var_56_object = var_57_object; // 0x231 Mov
	func_893(var_56_object); // 0x233 NEW_2
	
Label_565:
	goto Label_572; // 0x235 Jump
	
Label_572:
	return 0; // 0x23c Return
	
Label_566:
	func_495(var_11_int); // 0x237 NEW_2
	func_522(); // 0x23a NEW_2
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	func_713(); // 0x23e NEW_2
	func_531(); // 0x241 NEW_2
	lshStopSpeech(); // 0x243 Func
	lshStopAnimation(); // 0x245 Func
	StopAsync(); // 0x247 Func
	Hold(); // 0x249 Func
	return 0; // 0x24b Return
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	StopGroup0(); // 0x24c Func
	func_531(); // 0x24f NEW_2
	var_12_string = ""; // 0x251 PushV
	var_12_string = "Neutral"; // 0x252 MovS
	func_973(var_12_string); // 0x253 NEW_2
	func_522(); // 0x256 NEW_2
	return 0; // 0x258 Return
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_bool = var_11_bool; // 0x25a Push
	if(var_12_bool == 0) goto Label_608; // 0x25b JumpB
	func_522(); // 0x25d NEW_2
	goto Label_612; // 0x25f Jump
	
Label_612:
	return 0; // 0x264 Return
	
Label_608:
	var_18_string = ""; // 0x260 PushV
	var_18_string = "Neutral"; // 0x261 MovS
	func_973(var_18_string); // 0x262 NEW_2
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x265 PushV
	IsOverrideActive(var_13_bool); // 0x266 Func
	var_14_bool = var_13_bool == 0; // 0x268 Not
	if(var_14_bool == 0) goto Label_641; // 0x269 JumpB
	EventDisable(0); // 0x26a EventDisable
	func_713(); // 0x26c NEW_2
	var_15_bool = 0; var_16_object = Obj(); // 0x26e PushV
	var_16_object = var_11_object; // 0x26f Mov
	func_736(var_16_object); // 0x270 NEW_2
	EventEnable(0); // 0x272 EventEnable
	var_29_object = Obj(); // 0x273 PushV
	var_29_object = var_11_object; // 0x274 Mov
	func_1108(var_29_object); // 0x275 NEW_2
	var_322_string = ""; // 0x277 PushV
	var_322_string = "Neutral"; // 0x278 MovS
	func_973(var_322_string); // 0x279 NEW_2
	func_531(); // 0x27c NEW_2
	func_522(); // 0x27f NEW_2
	
Label_641:
	return 2; // 0x281 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector)
{
	func_466(var_10_cvector); // 0x1cf NEW_2
	return 0; // 0x1d1 Return
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_750(var_55_object, var_56_float); // 0x5 NEW_2
	var_100_bool = var_54_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_1083(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_1081(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_1085(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_1087(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_1091(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_113_bool = var_51_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_114_bool = 0; var_115_object = Obj(); // 0x2f PushV
	var_116_object = Obj(); // 0x30 PushV
	func_1026(var_116_object); // 0x31 NEW_2
	var_115_object = var_116_object; // 0x32 Mov
	func_835(var_114_bool, var_115_object); // 0x34 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x36 PushV
	var_204_object = var_44_object; // 0x37 Mov
	var_205_object = var_50_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_53_bool); // 0x3d ObjFunc
	
Label_63:
	var_256_bool = var_53_bool == 0; // 0x3f Not
	if(var_256_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_53_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_257_object = Obj(); // 0x46 PushV
	var_257_object = var_44_object; // 0x47 Mov
	func_818(); // 0x48 NEW_2
	StopDialog(var_50_object); // 0x4a Func
	GetReturnValue(var_52_int); // 0x4c ObjFunc
	var_43_int = var_52_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1026(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x402 PushV
	self(var_118_object); // 0x403 Func
	var_116_object = var_118_object; // 0x405 Mov
	return 2; // 0x406 Return
}


func_259(var_0_object, var_266_int, var_267_object)
{
	var_269_object = Obj(); var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; var_276_bool = 0; // 0x103 PushV
	var_0_object = var_267_object; // 0x104 TMov
	var_277_bool = 0; var_278_object = Obj(); var_279_float = 0; // 0x105 PushV
	var_278_object = var_267_object; // 0x106 Mov
	var_279_float = 70.0; // 0x107 MovF
	func_750(var_278_object, var_279_float); // 0x108 NEW_2
	var_280_bool = var_277_bool == 0; // 0x10a Not
	if(var_280_bool == 0) goto Label_270; // 0x10b JumpB
	var_266_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_273_object); // 0x10e Func
	var_281_int = 0; // 0x110 PushV
	func_1083(var_281_int); // 0x111 NEW_2
	SetNPCName(var_281_int); // 0x113 ObjFunc
	var_282_int = 0; // 0x115 PushV
	func_1081(var_282_int); // 0x116 NEW_2
	SetNPCDescription(var_282_int); // 0x118 ObjFunc
	var_283_string = ""; // 0x11a PushV
	func_1085(var_283_string); // 0x11b NEW_2
	SetPhoto(var_283_string); // 0x11d ObjFunc
	var_284_string = ""; // 0x11f PushV
	func_1087(var_284_string); // 0x120 NEW_2
	SetPhoto2(var_284_string); // 0x122 ObjFunc
	var_285_int = 0; // 0x124 PushV
	func_1091(var_285_int); // 0x125 NEW_2
	SetPlayerName(var_285_int); // 0x127 ObjFunc
	var_275_int = -1; // 0x129 MovI
	IsOverrideActive(var_274_bool); // 0x12a Func
	var_286_bool = var_274_bool; // 0x12c Push
	if(var_286_bool == 0) goto Label_304; // 0x12d JumpB
	var_266_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_273_object); // 0x130 Func
	var_287_bool = 0; var_288_object = Obj(); // 0x132 PushV
	var_289_object = Obj(); // 0x133 PushV
	func_1026(var_289_object); // 0x134 NEW_2
	var_288_object = var_289_object; // 0x135 Mov
	func_835(var_287_bool, var_288_object); // 0x137 NEW_2
	var_290_object = Obj(); var_291_object = Obj(); // 0x139 PushV
	var_290_object = var_267_object; // 0x13a Mov
	var_291_object = var_273_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_276_bool); // 0x140 ObjFunc
	
Label_322:
	var_320_bool = var_276_bool == 0; // 0x142 Not
	if(var_320_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_276_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_321_object = Obj(); // 0x149 PushV
	var_321_object = var_267_object; // 0x14a Mov
	func_818(); // 0x14b NEW_2
	StopDialog(var_273_object); // 0x14d Func
	GetReturnValue(var_275_int); // 0x14f ObjFunc
	var_266_int = var_275_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_642()
{
	var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; // 0x282 PushV
	WaitForAnimEnd(); // 0x283 Func
	var_27_bool = 0; // 0x285 PushV
	func_745(var_27_bool); // 0x286 NEW_2
	var_28_bool = var_27_bool == 0; // 0x288 Not
	if(var_28_bool == 0) goto Label_651; // 0x289 JumpB
	return 12; // 0x28a Return
	
Label_651:
	var_29_int = 0; // 0x28b PushV
	func_1064(var_29_int); // 0x28c NEW_2
	var_21_int = var_29_int; // 0x28d Mov
	var_22_int = 0; // 0x28f MovI
	
Label_656:
	var_42_bool = 0; // 0x290 PushV
	var_42_bool = 0; // 0x291 MovB
	var_43_int = 5; // 0x292 PushI
	var_44_bool = var_22_int < var_43_int; // 0x293 LT
	if(var_44_bool == 0) goto Label_666; // 0x294 JumpB
	var_45_bool = 0; // 0x295 PushV
	func_745(var_45_bool); // 0x296 NEW_2
	if(var_45_bool == 0) goto Label_666; // 0x298 JumpB
	var_42_bool = 1; // 0x299 MovB
	
Label_666:
	if(var_42_bool == 0) goto Label_708; // 0x29a JumpB
	var_46_bool = var_21_int == 0; // 0x29b Not
	if(var_46_bool == 0) goto Label_676; // 0x29c JumpB
	var_47_int = 3; // 0x29d PushI
	Sleep(var_47_int, var_23_bool); // 0x29e Func
	var_48_bool = var_23_bool == 0; // 0x2a0 Not
	if(var_48_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_708; // 0x2a2 Jump
	
Label_708:
	ResetAAS(); // 0x2c4 Func
	return 12; // 0x2c6 Return
	
Label_675:
	goto Label_697; // 0x2a3 Jump
	
Label_697:
	var_49_bool = 0; // 0x2b9 PushV
	func_711(var_49_bool); // 0x2ba NEW_2
	var_50_bool = var_49_bool == 0; // 0x2bc Not
	if(var_50_bool == 0) goto Label_703; // 0x2bd JumpB
	goto Label_708; // 0x2be Jump
	
Label_703:
	ResetAAS(); // 0x2bf Func
	var_51_int = 1; // 0x2c1 PushI
	var_22_int = var_22_int + var_51_int; // 0x2c2 Add2
	goto Label_656; // 0x2c3 Jump
	
Label_676:
	irand(var_24_int, var_21_int); // 0x2a4 Func
	var_52_int = 5; // 0x2a6 PushI
	irand(var_25_int, var_52_int); // 0x2a7 Func
	var_53_int = 0; // 0x2a9 PushI
	var_54_bool = var_25_int != var_53_int; // 0x2aa Neq
	if(var_54_bool == 0) goto Label_685; // 0x2ab JumpB
	var_24_int = 0; // 0x2ac MovI
	
Label_685:
	var_55_string = "all"; // 0x2ad PushS
	var_56_string = ""; var_57_int = 0; // 0x2ae PushV
	var_57_int = var_24_int; // 0x2af Mov
	func_1057(var_56_string, var_57_int); // 0x2b0 NEW_2
	PlayAnimation(var_55_string, var_56_string); // 0x2b2 Func
	WaitForAnimEnd(var_26_bool); // 0x2b4 Func
	var_58_bool = var_26_bool == 0; // 0x2b6 Not
	if(var_58_bool == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_708; // 0x2b8 Jump
}


func_1032(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0; // 0x408 PushV
	var_86_int = var_82_cvector | var_82_cvector; // 0x409 Or
	var_85_float = sqrt(var_86_int); // 0x40a Sqrt2
	var_87_float = 0.0; // 0x40b PushF
	var_88_bool = var_85_float < var_87_float; // 0x40c LT
	if(var_88_bool == 0) goto Label_1040; // 0x40d JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x40e MovV
	return 2; // 0x40f Return
	
Label_1040:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0x410 Div2
	return 2; // 0x411 Return
}


func_522()
{
	var_324_float = 0; var_325_float = 0; // 0x20a PushV
	var_326_int = 8; // 0x20b PushI
	var_327_int = 16; // 0x20c PushI
	rand(var_325_float, var_326_int, var_327_int); // 0x20d Func
	var_328_int = 10; // 0x20f PushI
	SetTimer(var_328_int, var_325_float); // 0x210 Func
	return 2; // 0x212 Return
}


func_398(var_2_object, var_297_string)
{
	var_298_bool = 0; // 0x18f PushV
	func_1089(var_298_bool); // 0x190 NEW_2
	var_299_bool = var_298_bool == 0; // 0x192 Not
	if(var_299_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_300_bool = var_297_string == var_2_object; // 0x195 Eq
	if(var_300_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_301_string = ""; var_302_bool = 0; // 0x198 PushV
	var_301_string = var_297_string; // 0x199 Mov
	var_303_string = ""; // 0x19a PushS
	var_304_bool = var_297_string == var_303_string; // 0x19b Eq
	if(var_304_bool == 0) goto Label_415; // 0x19c JumpB
	var_302_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_989(var_301_string, var_302_bool); // 0x1a0 NEW_2
	var_2_object = var_297_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_302_bool = 1; // 0x19f MovB
}


func_144(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0x91 PushV
	func_1089(var_212_bool); // 0x92 NEW_2
	var_213_bool = var_212_bool == 0; // 0x94 Not
	if(var_213_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_214_bool = var_211_string == var_2_object; // 0x97 Eq
	if(var_214_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_215_string = ""; var_216_bool = 0; // 0x9a PushV
	var_215_string = var_211_string; // 0x9b Mov
	var_217_string = ""; // 0x9c PushS
	var_218_bool = var_211_string == var_217_string; // 0x9d Eq
	if(var_218_bool == 0) goto Label_161; // 0x9e JumpB
	var_216_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_989(var_215_string, var_216_bool); // 0xa2 NEW_2
	var_2_object = var_211_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_216_bool = 1; // 0xa1 MovB
}


func_1042(var_36_int)
{
	var_37_float = 0; var_38_float = 0; // 0x412 PushV
	GetGameTime(var_38_float); // 0x413 Func
	var_39_int = 1; // 0x415 PushI
	var_40_int = 0; // 0x416 PushV
	var_41_int = 24; // 0x417 PushI
	var_40_int = var_38_float / var_38_float; // 0x418 Div2
	var_36_int = var_39_int + var_40_int; // 0x419 Add2
	return 2; // 0x41a Return
}


func_531()
{
	var_323_int = 10; // 0x213 PushI
	KillTimer(var_323_int); // 0x214 Func
	return 0; // 0x216 Return
}


func_1051(var_34_bool, var_35_int)
{
	var_36_int = 0; // 0x41c PushV
	func_1042(var_36_int); // 0x41d NEW_2
	var_34_bool = var_36_int == var_35_int; // 0x41f Eq2
	return 0; // 0x420 Return
}


func_1057(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x421 PushV
	var_38_string = "idle"; // 0x422 MovS
	var_39_int = var_36_int; // 0x423 Push
	if(var_39_int == 0) goto Label_1062; // 0x424 JumpB
	var_38_string = var_38_string + var_36_int; // 0x425 Add2
	
Label_1062:
	var_35_string = var_38_string; // 0x426 Mov
	return 2; // 0x427 Return
}


func_930(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x3a2 PushV
	var_168_string = "d"; // 0x3a3 PushS
	var_169_int = 0; // 0x3a4 PushV
	func_1042(var_169_int); // 0x3a5 NEW_2
	var_170_int = var_168_string + var_169_int; // 0x3a7 Add
	var_171_string = "m"; // 0x3a8 PushS
	var_163_string = var_170_int + var_171_string; // 0x3a9 Add2
	var_164_int = 0; // 0x3aa MovI
	
Label_939:
	var_172_int = 1; // 0x3ab PushI
	if(var_172_int == 0) goto Label_952; // 0x3ac JumpB
	var_173_int = 1; // 0x3ad PushI
	var_174_int = var_164_int + var_173_int; // 0x3ae Add
	var_175_int = var_163_string + var_174_int; // 0x3af Add
	HasProperty(var_175_int, var_165_bool); // 0x3b0 ObjFunc
	var_176_bool = var_165_bool == 0; // 0x3b2 Not
	if(var_176_bool == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_952; // 0x3b4 Jump
	
Label_952:
	var_177_bool = var_164_int == 0; // 0x3b8 Not
	if(var_177_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_156_bool = 0; // 0x3ba MovB
	return 10; // 0x3bb Return
	
Label_956:
	var_166_int = 0; // 0x3bc MovI
	var_178_int = 1; // 0x3bd PushI
	var_179_bool = var_164_int > var_178_int; // 0x3be GT
	if(var_179_bool == 0) goto Label_962; // 0x3bf JumpB
	irand(var_166_int, var_164_int); // 0x3c0 Func
	
Label_962:
	var_180_int = 1; // 0x3c2 PushI
	var_181_int = var_166_int + var_180_int; // 0x3c3 Add
	var_182_int = var_163_string + var_181_int; // 0x3c4 Add
	GetProperty(var_182_int, var_167_string); // 0x3c5 ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x3c7 PushV
	var_184_string = var_167_string; // 0x3c8 Mov
	func_1004(var_183_bool, var_184_string); // 0x3c9 NEW_2
	var_156_bool = var_183_bool; // 0x3ca Mov
	return 10; // 0x3cc Return
	
Label_949:
	var_185_int = 1; // 0x3b5 PushI
	var_164_int = var_164_int + var_185_int; // 0x3b6 Add2
	goto Label_939; // 0x3b7 Jump
}


func_1064(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x428 PushV
	var_32_int = 0; // 0x429 MovI
	
Label_1066:
	var_34_string = "all"; // 0x42a PushS
	var_35_string = ""; var_36_int = 0; // 0x42b PushV
	var_36_int = var_32_int; // 0x42c Mov
	func_1057(var_35_string, var_36_int); // 0x42d NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x42f Func
	var_40_bool = var_33_bool == 0; // 0x431 Not
	if(var_40_bool == 0) goto Label_1076; // 0x432 JumpB
	goto Label_1079; // 0x433 Jump
	
Label_1079:
	var_29_int = var_32_int; // 0x437 Mov
	return 4; // 0x438 Return
	
Label_1076:
	var_41_int = 1; // 0x434 PushI
	var_32_int = var_32_int + var_41_int; // 0x435 Add2
	goto Label_1066; // 0x436 Jump
}


func_818()
{
	var_258_bool = 0; var_259_bool = 0; // 0x332 PushV
	CameraSwitchToNormal(); // 0x333 Func
	var_260_bool = 0; // 0x335 PushV
	func_1089(var_260_bool); // 0x336 NEW_2
	if(var_260_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_834; // 0x339 Jump
	
Label_834:
	return 2; // 0x342 Return
	
Label_826:
	var_261_string = "head"; // 0x33a PushS
	HasAnimationTrack(var_259_bool, var_261_string); // 0x33b Func
	var_262_bool = var_259_bool; // 0x33d Push
	if(var_262_bool == 0) goto Label_834; // 0x33e JumpB
	var_263_string = "head"; // 0x33f PushS
	UnlookAsync(var_263_string); // 0x340 Func
}


func_1081(var_102_int)
{
	var_102_int = 515551; // 0x439 MovI
	return 0; // 0x43a Return
}


func_1083(var_101_int)
{
	var_101_int = 502876; // 0x43b MovI
	return 0; // 0x43c Return
}


func_1085(var_103_string)
{
	var_103_string = "ui/NPC_Rubin.png"; // 0x43d MovS
	return 0; // 0x43e Return
}


func_1087(var_104_string)
{
	var_104_string = "ui/NPC_Rubin_b.png"; // 0x43f MovS
	return 0; // 0x440 Return
}


func_1089(var_96_bool)
{
	var_96_bool = 1; // 0x441 MovB
	return 0; // 0x442 Return
}


func_1091(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x443 PushV
	var_108_string = "branch"; // 0x444 PushS
	GetVariable(var_108_string, var_107_int); // 0x445 Func
	var_109_int = 0; // 0x447 PushI
	var_110_bool = var_107_int == var_109_int; // 0x448 Eq
	if(var_110_bool == 0) goto Label_1101; // 0x449 JumpB
	var_105_int = 1; // 0x44a MovI
	return 2; // 0x44b Return
	
Label_1101:
	var_111_int = 1; // 0x44d PushI
	var_112_bool = var_107_int == var_111_int; // 0x44e Eq
	if(var_112_bool == 0) goto Label_1106; // 0x44f JumpB
	var_105_int = 2; // 0x450 MovI
	return 2; // 0x451 Return
	
Label_1106:
	var_105_int = 3; // 0x452 MovI
	return 2; // 0x453 Return
}


func_835(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x343 PushV
	var_123_string = "voice_common"; // 0x344 PushS
	GetVariable(var_123_string, var_121_int); // 0x345 Func
	var_124_int = var_121_int; // 0x347 Push
	if(var_124_int == 0) goto Label_873; // 0x348 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x349 PushV
	var_126_object = var_115_object; // 0x34a Mov
	func_893(var_126_object); // 0x34b NEW_2
	var_155_bool = var_125_bool == 0; // 0x34d Not
	if(var_155_bool == 0) goto Label_855; // 0x34e JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x34f PushV
	var_157_object = var_115_object; // 0x350 Mov
	func_930(var_157_object); // 0x351 NEW_2
	var_186_bool = var_156_bool == 0; // 0x353 Not
	if(var_186_bool == 0) goto Label_855; // 0x354 JumpB
	var_114_bool = 0; // 0x355 MovB
	return 4; // 0x356 Return
	
Label_855:
	var_187_int = 2; // 0x357 PushI
	irand(var_122_int, var_187_int); // 0x358 Func
	var_188_int = var_122_int; // 0x35a Push
	if(var_188_int == 0) goto Label_868; // 0x35b JumpB
	var_189_string = "voice_common"; // 0x35c PushS
	var_190_int = 1; // 0x35d PushI
	var_191_int = var_121_int + var_190_int; // 0x35e Add
	var_192_int = 3; // 0x35f PushI
	var_193_int = var_191_int / var_192_int; // 0x360 Mod
	SetVariable(var_189_string, var_193_int); // 0x361 Func
	goto Label_872; // 0x363 Jump
	
Label_872:
	goto Label_891; // 0x368 Jump
	
Label_891:
	var_114_bool = 1; // 0x37b MovB
	return 4; // 0x37c Return
	
Label_868:
	var_194_string = "voice_common"; // 0x364 PushS
	var_195_int = 0; // 0x365 PushI
	SetVariable(var_194_string, var_195_int); // 0x366 Func
	
Label_873:
	var_196_bool = 0; var_197_object = Obj(); // 0x369 PushV
	var_197_object = var_115_object; // 0x36a Mov
	func_930(var_197_object); // 0x36b NEW_2
	var_198_bool = var_196_bool == 0; // 0x36d Not
	if(var_198_bool == 0) goto Label_887; // 0x36e JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x36f PushV
	var_200_object = var_115_object; // 0x370 Mov
	func_893(var_200_object); // 0x371 NEW_2
	var_201_bool = var_199_bool == 0; // 0x373 Not
	if(var_201_bool == 0) goto Label_887; // 0x374 JumpB
	var_114_bool = 0; // 0x375 MovB
	return 4; // 0x376 Return
	
Label_887:
	var_202_string = "voice_common"; // 0x377 PushS
	var_203_int = 1; // 0x378 PushI
	SetVariable(var_202_string, var_203_int); // 0x379 Func
}


func_711(var_49_bool)
{
	var_49_bool = 1; // 0x2c7 MovB
	return 0; // 0x2c8 Return
}


func_713()
{
	StopAnimation(); // 0x2c9 Func
	StopGroup0(); // 0x2cb Func
	return 0; // 0x2cd Return
}


func_973(var_240_string)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0x3cd PushV
	lshHasAnimation(var_244_bool, var_240_string); // 0x3ce Func
	var_247_bool = var_244_bool; // 0x3d0 Push
	if(var_247_bool == 0) goto Label_984; // 0x3d1 JumpB
	lshGetAnimTimes(var_240_string, var_245_float, var_246_float); // 0x3d2 Func
	var_248_bool = 0; // 0x3d4 PushB
	lshPlayAnimation(var_245_float, var_246_float, var_248_bool); // 0x3d5 Func
	goto Label_988; // 0x3d7 Jump
	
Label_988:
	return 6; // 0x3dc Return
	
Label_984:
	var_249_string = "Can't find lsh animation : "; // 0x3d8 PushS
	var_250_int = var_249_string + var_240_string; // 0x3d9 Add
	Trace(var_250_int); // 0x3da Func
}


func_718(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x2ce PushV
	GetPosition(var_31_cvector); // 0x2cf Func
	GetPosition(var_32_cvector); // 0x2d1 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x2d3 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x2d4 Or2
	return 6; // 0x2d5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object; // 0x52 TMov
	var_1_object = var_204_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_210_int = 1; // 0x55 PushI
	if(var_210_int == 0) goto Label_114; // 0x56 JumpB
	var_211_string = ""; // 0x57 PushV
	var_211_string = "Neutral"; // 0x58 MovS
	func_144(var_205_object, var_211_string); // 0x59 NEW_2
	var_228_int = 535294; // 0x5b PushI
	SetMessage(var_228_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_229_int = 535295; // 0x60 PushI
	var_230_int = 36973; // 0x61 PushI
	var_231_int = 36972; // 0x62 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x63 TObjFunc
	var_232_int = 535302; // 0x65 PushI
	var_233_int = -1; // 0x66 PushI
	var_234_int = 36980; // 0x67 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x68 TObjFunc
	var_235_int = 535303; // 0x6a PushI
	var_236_int = -1; // 0x6b PushI
	var_237_int = 36981; // 0x6c PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_238_bool = 0; // 0x72 PushV
	func_1089(var_238_bool); // 0x73 NEW_2
	if(var_238_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_239_string = var_3_string; // 0x78 PushT
	if(var_239_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_240_string = ""; // 0x7b PushV
	var_240_string = var_2_object; // 0x7c MovT
	func_973(var_240_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_251_string = "all"; // 0x81 PushS
	var_252_string = "idle"; // 0x82 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_253_string = var_3_string; // 0x87 PushT
	if(var_253_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_254_string = "all"; // 0x8a PushS
	var_255_string = "idle"; // 0x8b PushS
	PlayAnimation(var_254_string, var_255_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_466(var_0_object)
{
	var_11_bool = 0; // 0x1d2 PushV
	func_745(var_11_bool); // 0x1d3 NEW_2
	var_14_bool = var_11_bool == 0; // 0x1d5 Not
	if(var_14_bool == 0) goto Label_473; // 0x1d6 JumpB
	Hold(); // 0x1d7 Func
	
Label_473:
	GetDirection(var_0_object); // 0x1d9 Func
	
Label_475:
	func_642(); // 0x1dc NEW_2
	goto Label_475; // 0x1de Jump
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_290_object, var_291_object)
{
	var_0_object = var_291_object; // 0x155 TMov
	var_1_object = var_290_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_296_int = 1; // 0x158 PushI
	if(var_296_int == 0) goto Label_368; // 0x159 JumpB
	var_297_string = ""; // 0x15a PushV
	var_297_string = "Neutral"; // 0x15b MovS
	func_398(var_291_object, var_297_string); // 0x15c NEW_2
	var_305_int = 540554; // 0x15e PushI
	SetMessage(var_305_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_306_int = 540555; // 0x163 PushI
	var_307_int = -1; // 0x164 PushI
	var_308_int = 42564; // 0x165 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x166 TObjFunc
	var_309_int = 540794; // 0x168 PushI
	var_310_int = -1; // 0x169 PushI
	var_311_int = 42843; // 0x16a PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_312_bool = 0; // 0x170 PushV
	func_1089(var_312_bool); // 0x171 NEW_2
	if(var_312_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_313_string = var_3_string; // 0x176 PushT
	if(var_313_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_314_string = ""; // 0x179 PushV
	var_314_string = var_2_object; // 0x17a MovT
	func_973(var_314_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_315_string = "all"; // 0x17f PushS
	var_316_string = "idle"; // 0x180 PushS
	PlayAnimation(var_315_string, var_316_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_317_string = var_3_string; // 0x185 PushT
	if(var_317_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_318_string = "all"; // 0x188 PushS
	var_319_string = "idle"; // 0x189 PushS
	PlayAnimation(var_318_string, var_319_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_1108(var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x454 PushV
	var_32_string = "d12_rubin"; // 0x455 PushS
	GetVariable(var_32_string, var_31_int); // 0x456 Func
	var_33_bool = 0; // 0x458 PushV
	var_33_bool = 0; // 0x459 MovB
	var_34_bool = 0; var_35_int = 0; // 0x45a PushV
	var_35_int = 12; // 0x45b MovI
	func_1051(var_34_bool, var_35_int); // 0x45c NEW_2
	if(var_34_bool == 0) goto Label_1122; // 0x45e JumpB
	var_42_bool = var_31_int == 0; // 0x45f Not
	if(var_42_bool == 0) goto Label_1122; // 0x460 JumpB
	var_33_bool = 1; // 0x461 MovB
	
Label_1122:
	if(var_33_bool == 0) goto Label_1134; // 0x462 JumpB
	var_43_int = 0; var_44_object = Obj(); // 0x463 PushV
	var_44_object = var_29_object; // 0x464 Mov
	TaskCall(0); // 0x465 TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0x466 NEW_2
	TaskReturn(); // 0x467 TaskReturn
	var_264_string = "d12_rubin"; // 0x469 PushS
	var_265_int = 1; // 0x46a PushI
	SetVariable(var_264_string, var_265_int); // 0x46b Func
	return 2; // 0x46d Return
	
Label_1134:
	var_266_int = 0; var_267_object = Obj(); // 0x46e PushV
	var_267_object = var_29_object; // 0x46f Mov
	TaskCall(2); // 0x470 TaskCall
	func_259(var_268_object, var_266_int, var_267_object); // 0x471 NEW_2
	TaskReturn(); // 0x472 TaskReturn
	return 2; // 0x474 Return
}


func_726(var_19_bool, var_20_cvector)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; // 0x2d6 PushV
	GetPosition(var_24_cvector); // 0x2d7 Func
	var_25_cvector = var_20_cvector - var_24_cvector; // 0x2d9 Sub2
	var_27_float = GetByIndex(var_25_cvector, 0); // 0x2da PushE
	var_28_float = GetByIndex(var_25_cvector, 2); // 0x2db PushE
	Rotate(var_27_float, var_28_float, var_26_bool); // 0x2dc Func
	var_19_bool = var_26_bool; // 0x2de Mov
	return 6; // 0x2df Return
}


func_989(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x3dd PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x3de Func
	var_225_bool = var_222_bool; // 0x3e0 Push
	if(var_225_bool == 0) goto Label_999; // 0x3e1 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x3e2 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x3e4 Func
	goto Label_1003; // 0x3e6 Jump
	
Label_1003:
	return 6; // 0x3eb Return
	
Label_999:
	var_226_string = "Can't find lsh animation : "; // 0x3e7 PushS
	var_227_int = var_226_string + var_215_string; // 0x3e8 Add
	Trace(var_227_int); // 0x3e9 Func
}


func_736(var_15_bool)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x2e0 PushV
	GetPosition(var_18_cvector); // 0x2e1 ObjFunc
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); // 0x2e3 PushV
	var_20_cvector = var_18_cvector; // 0x2e4 Mov
	func_726(var_19_bool, var_20_cvector); // 0x2e5 NEW_2
	var_15_bool = var_19_bool; // 0x2e6 Mov
	return 2; // 0x2e8 Return
}


func_480(var_36_bool)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x1e0 PushV
	var_39_string = "player"; // 0x1e1 PushS
	FindActor(var_38_object, var_39_string); // 0x1e2 Func
	var_40_bool = var_38_object == 0; // 0x1e4 Not
	if(var_40_bool == 0) goto Label_488; // 0x1e5 JumpB
	var_36_bool = 0; // 0x1e6 MovB
	return 2; // 0x1e7 Return
	
Label_488:
	var_41_bool = 0; var_42_object = Obj(); // 0x1e8 PushV
	var_42_object = var_38_object; // 0x1e9 Mov
	func_736(var_42_object); // 0x1ea NEW_2
	var_36_bool = var_41_bool; // 0x1eb Mov
	return 2; // 0x1ed Return
}


func_745(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x2e9 PushV
	IsLoaded(var_13_bool); // 0x2ea Func
	var_11_bool = var_13_bool; // 0x2ec Mov
	return 2; // 0x2ed Return
}


func_1004(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x3ec PushV
	var_152_bool = 0; // 0x3ed PushV
	func_1089(var_152_bool); // 0x3ee NEW_2
	if(var_152_bool == 0) goto Label_1017; // 0x3f0 JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x3f1 Func
	var_153_bool = var_151_bool; // 0x3f3 Push
	if(var_153_bool == 0) goto Label_1017; // 0x3f4 JumpB
	lshPlaySpeech(var_149_string); // 0x3f5 Func
	var_148_bool = 1; // 0x3f7 MovB
	return 2; // 0x3f8 Return
	
Label_1017:
	var_148_bool = 0; // 0x3f9 MovB
	return 2; // 0x3fa Return
}


func_750(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x2ee PushV
	GetPosition(var_67_cvector); // 0x2ef ObjFunc
	GetEyesHeight(var_66_float); // 0x2f1 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x2f3 PushE
	var_75_float = var_75_float + var_66_float; // 0x2f4 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x2f5 PopE
	GetPosition(var_68_cvector); // 0x2f6 Func
	GetEyesHeight(var_66_float); // 0x2f8 Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x2fa PushE
	var_76_float = var_76_float + var_66_float; // 0x2fb Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x2fc PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x2fd Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x2fe PushE
	var_77_float = 0; // 0x2ff MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x300 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x301 Or
	var_79_float = sqrt(var_78_int); // 0x302 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x303 Div2
	var_70_cvector = -var_69_cvector; // 0x304 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x305 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x306 PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x307 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x308 Xor2
	func_1032(var_81_cvector, var_82_cvector); // 0x309 NEW_2
	var_89_int = 25; // 0x30b PushI
	var_90_float = var_81_cvector * var_89_int; // 0x30c Mult
	var_91_int = var_80_float + var_90_float; // 0x30d Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x30e PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x30f Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x310 Add2
	IsOverrideActive(var_73_bool); // 0x311 Func
	var_93_bool = var_73_bool; // 0x313 Push
	if(var_93_bool == 0) goto Label_791; // 0x314 JumpB
	var_54_bool = 0; // 0x315 MovB
	return 18; // 0x316 Return
	
Label_791:
	StopWorld(); // 0x317 Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0x319 Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0x31b PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0x31c PushE
	Rotate(var_94_float, var_95_float); // 0x31d Func
	var_96_bool = 0; // 0x31f PushV
	func_1089(var_96_bool); // 0x320 NEW_2
	if(var_96_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_812; // 0x323 Jump
	
Label_812:
	CameraWaitForPlayFinish(); // 0x32c Func
	ResumeWorld(); // 0x32e Func
	var_54_bool = 1; // 0x330 MovB
	return 18; // 0x331 Return
	
Label_804:
	var_97_string = "head"; // 0x324 PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0x325 Func
	var_98_bool = var_74_bool; // 0x327 Push
	if(var_98_bool == 0) goto Label_812; // 0x328 JumpB
	var_99_string = "head"; // 0x329 PushS
	LookAsyncCamera(var_99_string); // 0x32a Func
}


func_495(var_0_object)
{
	var_88_float = GetByIndex(var_0_object, 0); // 0x1ef PushE
	var_89_float = GetByIndex(var_0_object, 2); // 0x1f0 PushE
	RotateAsync(var_88_float, var_89_float); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


func_500(var_19_bool)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; // 0x1f4 PushV
	var_24_string = "player"; // 0x1f5 PushS
	FindActor(var_22_object, var_24_string); // 0x1f6 Func
	var_25_bool = var_22_object == 0; // 0x1f8 Not
	if(var_25_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_19_bool = 0; // 0x1fa MovB
	return 4; // 0x1fb Return
	
Label_508:
	var_26_float = 0; var_27_object = Obj(); // 0x1fc PushV
	var_27_object = var_22_object; // 0x1fd Mov
	func_718(var_27_object); // 0x1fe NEW_2
	var_34_float = 90000.0; // 0x200 PushF
	var_35_bool = var_26_float > var_34_float; // 0x201 GT
	if(var_35_bool == 0) goto Label_517; // 0x202 JumpB
	var_19_bool = 0; // 0x203 MovB
	return 4; // 0x204 Return
	
Label_517:
	CanSee(var_23_bool, var_22_object); // 0x205 Func
	var_19_bool = var_23_bool; // 0x207 Mov
	return 4; // 0x208 Return
}


func_1019()
{
	var_14_bool = 0; // 0x3fb PushV
	func_1089(var_14_bool); // 0x3fc NEW_2
	if(var_14_bool == 0) goto Label_1025; // 0x3fe JumpB
	lshStopSpeech(); // 0x3ff Func
	
Label_1025:
	return 0; // 0x401 Return
}


func_893(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x37d PushV
	var_132_string = "c"; // 0x37e MovS
	var_133_int = 0; // 0x37f MovI
	
Label_896:
	var_137_int = 1; // 0x380 PushI
	if(var_137_int == 0) goto Label_909; // 0x381 JumpB
	var_138_int = 1; // 0x382 PushI
	var_139_int = var_133_int + var_138_int; // 0x383 Add
	var_140_int = var_132_string + var_139_int; // 0x384 Add
	HasProperty(var_140_int, var_134_bool); // 0x385 ObjFunc
	var_141_bool = var_134_bool == 0; // 0x387 Not
	if(var_141_bool == 0) goto Label_906; // 0x388 JumpB
	goto Label_909; // 0x389 Jump
	
Label_909:
	var_142_bool = var_133_int == 0; // 0x38d Not
	if(var_142_bool == 0) goto Label_913; // 0x38e JumpB
	var_125_bool = 0; // 0x38f MovB
	return 10; // 0x390 Return
	
Label_913:
	var_135_int = 0; // 0x391 MovI
	var_143_int = 1; // 0x392 PushI
	var_144_bool = var_133_int > var_143_int; // 0x393 GT
	if(var_144_bool == 0) goto Label_919; // 0x394 JumpB
	irand(var_135_int, var_133_int); // 0x395 Func
	
Label_919:
	var_145_int = 1; // 0x397 PushI
	var_146_int = var_135_int + var_145_int; // 0x398 Add
	var_147_int = var_132_string + var_146_int; // 0x399 Add
	GetProperty(var_147_int, var_136_string); // 0x39a ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x39c PushV
	var_149_string = var_136_string; // 0x39d Mov
	func_1004(var_148_bool, var_149_string); // 0x39e NEW_2
	var_125_bool = var_148_bool; // 0x39f Mov
	return 10; // 0x3a1 Return
	
Label_906:
	var_154_int = 1; // 0x38a PushI
	var_133_int = var_133_int + var_154_int; // 0x38b Add2
	goto Label_896; // 0x38c Jump
}


