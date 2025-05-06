task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector)
{
	var_13_int = 1; // 0xa7 PushI
	if(var_13_int == 0) goto Label_258; // 0xa8 JumpB
	func_1021(); // 0xaa NEW_2
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
	func_1091(var_64_bool); // 0xf8 NEW_2
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
	func_1021(); // 0x1a8 NEW_2
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
	func_1091(var_41_bool); // 0x1c3 NEW_2
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
	func_1028(var_57_object); // 0x230 NEW_2
	var_56_object = var_57_object; // 0x231 Mov
	func_895(var_56_object); // 0x233 NEW_2
	
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
	func_975(var_12_string); // 0x253 NEW_2
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
	func_975(var_18_string); // 0x262 NEW_2
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
	func_1110(var_29_object); // 0x275 NEW_2
	var_324_string = ""; // 0x277 PushV
	var_324_string = "Neutral"; // 0x278 MovS
	func_975(var_324_string); // 0x279 NEW_2
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
	var_101_bool = var_54_bool == 0; // 0x7 Not
	if(var_101_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_102_int = 0; // 0xd PushV
	func_1085(var_102_int); // 0xe NEW_2
	SetNPCName(var_102_int); // 0x10 ObjFunc
	var_103_int = 0; // 0x12 PushV
	func_1083(var_103_int); // 0x13 NEW_2
	SetNPCDescription(var_103_int); // 0x15 ObjFunc
	var_104_string = ""; // 0x17 PushV
	func_1087(var_104_string); // 0x18 NEW_2
	SetPhoto(var_104_string); // 0x1a ObjFunc
	var_105_string = ""; // 0x1c PushV
	func_1089(var_105_string); // 0x1d NEW_2
	SetPhoto2(var_105_string); // 0x1f ObjFunc
	var_106_int = 0; // 0x21 PushV
	func_1093(var_106_int); // 0x22 NEW_2
	SetPlayerName(var_106_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_114_bool = var_51_bool; // 0x29 Push
	if(var_114_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_115_bool = 0; var_116_object = Obj(); // 0x2f PushV
	var_117_object = Obj(); // 0x30 PushV
	func_1028(var_117_object); // 0x31 NEW_2
	var_116_object = var_117_object; // 0x32 Mov
	func_837(var_115_bool, var_116_object); // 0x34 NEW_2
	var_205_object = Obj(); var_206_object = Obj(); // 0x36 PushV
	var_205_object = var_44_object; // 0x37 Mov
	var_206_object = var_50_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_53_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_53_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_53_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_44_object; // 0x47 Mov
	func_819(); // 0x48 NEW_2
	StopDialog(var_50_object); // 0x4a Func
	GetReturnValue(var_52_int); // 0x4c ObjFunc
	var_43_int = var_52_int; // 0x4e Mov
	return 8; // 0x4f Return
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
	func_1066(var_29_int); // 0x28c NEW_2
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
	func_1059(var_56_string, var_57_int); // 0x2b0 NEW_2
	PlayAnimation(var_55_string, var_56_string); // 0x2b2 Func
	WaitForAnimEnd(var_26_bool); // 0x2b4 Func
	var_58_bool = var_26_bool == 0; // 0x2b6 Not
	if(var_58_bool == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_708; // 0x2b8 Jump
}


func_259(var_0_object, var_268_int, var_269_object)
{
	var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; var_274_bool = 0; var_275_object = Obj(); var_276_bool = 0; var_277_int = 0; var_278_bool = 0; // 0x103 PushV
	var_0_object = var_269_object; // 0x104 TMov
	var_279_bool = 0; var_280_object = Obj(); var_281_float = 0; // 0x105 PushV
	var_280_object = var_269_object; // 0x106 Mov
	var_281_float = 70.0; // 0x107 MovF
	func_750(var_280_object, var_281_float); // 0x108 NEW_2
	var_282_bool = var_279_bool == 0; // 0x10a Not
	if(var_282_bool == 0) goto Label_270; // 0x10b JumpB
	var_268_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_275_object); // 0x10e Func
	var_283_int = 0; // 0x110 PushV
	func_1085(var_283_int); // 0x111 NEW_2
	SetNPCName(var_283_int); // 0x113 ObjFunc
	var_284_int = 0; // 0x115 PushV
	func_1083(var_284_int); // 0x116 NEW_2
	SetNPCDescription(var_284_int); // 0x118 ObjFunc
	var_285_string = ""; // 0x11a PushV
	func_1087(var_285_string); // 0x11b NEW_2
	SetPhoto(var_285_string); // 0x11d ObjFunc
	var_286_string = ""; // 0x11f PushV
	func_1089(var_286_string); // 0x120 NEW_2
	SetPhoto2(var_286_string); // 0x122 ObjFunc
	var_287_int = 0; // 0x124 PushV
	func_1093(var_287_int); // 0x125 NEW_2
	SetPlayerName(var_287_int); // 0x127 ObjFunc
	var_277_int = -1; // 0x129 MovI
	IsOverrideActive(var_276_bool); // 0x12a Func
	var_288_bool = var_276_bool; // 0x12c Push
	if(var_288_bool == 0) goto Label_304; // 0x12d JumpB
	var_268_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_275_object); // 0x130 Func
	var_289_bool = 0; var_290_object = Obj(); // 0x132 PushV
	var_291_object = Obj(); // 0x133 PushV
	func_1028(var_291_object); // 0x134 NEW_2
	var_290_object = var_291_object; // 0x135 Mov
	func_837(var_289_bool, var_290_object); // 0x137 NEW_2
	var_292_object = Obj(); var_293_object = Obj(); // 0x139 PushV
	var_292_object = var_269_object; // 0x13a Mov
	var_293_object = var_275_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_278_bool); // 0x140 ObjFunc
	
Label_322:
	var_322_bool = var_278_bool == 0; // 0x142 Not
	if(var_322_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_278_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_323_object = Obj(); // 0x149 PushV
	var_323_object = var_269_object; // 0x14a Mov
	func_819(); // 0x14b NEW_2
	StopDialog(var_275_object); // 0x14d Func
	GetReturnValue(var_277_int); // 0x14f ObjFunc
	var_268_int = var_277_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1028(var_117_object)
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x404 PushV
	self(var_119_object); // 0x405 Func
	var_117_object = var_119_object; // 0x407 Mov
	return 2; // 0x408 Return
}


func_522()
{
	var_326_float = 0; var_327_float = 0; // 0x20a PushV
	var_328_int = 8; // 0x20b PushI
	var_329_int = 16; // 0x20c PushI
	rand(var_327_float, var_328_int, var_329_int); // 0x20d Func
	var_330_int = 10; // 0x20f PushI
	SetTimer(var_330_int, var_327_float); // 0x210 Func
	return 2; // 0x212 Return
}


func_1034(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0; // 0x40a PushV
	var_86_int = var_82_cvector | var_82_cvector; // 0x40b Or
	var_85_float = sqrt(var_86_int); // 0x40c Sqrt2
	var_87_float = 0.0; // 0x40d PushF
	var_88_bool = var_85_float < var_87_float; // 0x40e LT
	if(var_88_bool == 0) goto Label_1042; // 0x40f JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x410 MovV
	return 2; // 0x411 Return
	
Label_1042:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0x412 Div2
	return 2; // 0x413 Return
}


func_398(var_2_object, var_299_string)
{
	var_300_bool = 0; // 0x18f PushV
	func_1091(var_300_bool); // 0x190 NEW_2
	var_301_bool = var_300_bool == 0; // 0x192 Not
	if(var_301_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_302_bool = var_299_string == var_2_object; // 0x195 Eq
	if(var_302_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_303_string = ""; var_304_bool = 0; // 0x198 PushV
	var_303_string = var_299_string; // 0x199 Mov
	var_305_string = ""; // 0x19a PushS
	var_306_bool = var_299_string == var_305_string; // 0x19b Eq
	if(var_306_bool == 0) goto Label_415; // 0x19c JumpB
	var_304_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_991(var_303_string, var_304_bool); // 0x1a0 NEW_2
	var_2_object = var_299_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_304_bool = 1; // 0x19f MovB
}


func_144(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0x91 PushV
	func_1091(var_213_bool); // 0x92 NEW_2
	var_214_bool = var_213_bool == 0; // 0x94 Not
	if(var_214_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_215_bool = var_212_string == var_2_object; // 0x97 Eq
	if(var_215_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_216_string = ""; var_217_bool = 0; // 0x9a PushV
	var_216_string = var_212_string; // 0x9b Mov
	var_218_string = ""; // 0x9c PushS
	var_219_bool = var_212_string == var_218_string; // 0x9d Eq
	if(var_219_bool == 0) goto Label_161; // 0x9e JumpB
	var_217_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_991(var_216_string, var_217_bool); // 0xa2 NEW_2
	var_2_object = var_212_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_217_bool = 1; // 0xa1 MovB
}


func_531()
{
	var_325_int = 10; // 0x213 PushI
	KillTimer(var_325_int); // 0x214 Func
	return 0; // 0x216 Return
}


func_1044(var_36_int)
{
	var_37_float = 0; var_38_float = 0; // 0x414 PushV
	GetGameTime(var_38_float); // 0x415 Func
	var_39_int = 1; // 0x417 PushI
	var_40_int = 0; // 0x418 PushV
	var_41_int = 24; // 0x419 PushI
	var_40_int = var_38_float / var_38_float; // 0x41a Div2
	var_36_int = var_39_int + var_40_int; // 0x41b Add2
	return 2; // 0x41c Return
}


func_1053(var_34_bool, var_35_int)
{
	var_36_int = 0; // 0x41e PushV
	func_1044(var_36_int); // 0x41f NEW_2
	var_34_bool = var_36_int == var_35_int; // 0x421 Eq2
	return 0; // 0x422 Return
}


func_1059(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x423 PushV
	var_38_string = "idle"; // 0x424 MovS
	var_39_int = var_36_int; // 0x425 Push
	if(var_39_int == 0) goto Label_1064; // 0x426 JumpB
	var_38_string = var_38_string + var_36_int; // 0x427 Add2
	
Label_1064:
	var_35_string = var_38_string; // 0x428 Mov
	return 2; // 0x429 Return
}


func_932(var_157_bool)
{
	var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = ""; var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = ""; // 0x3a4 PushV
	var_169_string = "d"; // 0x3a5 PushS
	var_170_int = 0; // 0x3a6 PushV
	func_1044(var_170_int); // 0x3a7 NEW_2
	var_171_int = var_169_string + var_170_int; // 0x3a9 Add
	var_172_string = "m"; // 0x3aa PushS
	var_164_string = var_171_int + var_172_string; // 0x3ab Add2
	var_165_int = 0; // 0x3ac MovI
	
Label_941:
	var_173_int = 1; // 0x3ad PushI
	if(var_173_int == 0) goto Label_954; // 0x3ae JumpB
	var_174_int = 1; // 0x3af PushI
	var_175_int = var_165_int + var_174_int; // 0x3b0 Add
	var_176_int = var_164_string + var_175_int; // 0x3b1 Add
	HasProperty(var_176_int, var_166_bool); // 0x3b2 ObjFunc
	var_177_bool = var_166_bool == 0; // 0x3b4 Not
	if(var_177_bool == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_954; // 0x3b6 Jump
	
Label_954:
	var_178_bool = var_165_int == 0; // 0x3ba Not
	if(var_178_bool == 0) goto Label_958; // 0x3bb JumpB
	var_157_bool = 0; // 0x3bc MovB
	return 10; // 0x3bd Return
	
Label_958:
	var_167_int = 0; // 0x3be MovI
	var_179_int = 1; // 0x3bf PushI
	var_180_bool = var_165_int > var_179_int; // 0x3c0 GT
	if(var_180_bool == 0) goto Label_964; // 0x3c1 JumpB
	irand(var_167_int, var_165_int); // 0x3c2 Func
	
Label_964:
	var_181_int = 1; // 0x3c4 PushI
	var_182_int = var_167_int + var_181_int; // 0x3c5 Add
	var_183_int = var_164_string + var_182_int; // 0x3c6 Add
	GetProperty(var_183_int, var_168_string); // 0x3c7 ObjFunc
	var_184_bool = 0; var_185_string = ""; // 0x3c9 PushV
	var_185_string = var_168_string; // 0x3ca Mov
	func_1006(var_184_bool, var_185_string); // 0x3cb NEW_2
	var_157_bool = var_184_bool; // 0x3cc Mov
	return 10; // 0x3ce Return
	
Label_951:
	var_186_int = 1; // 0x3b7 PushI
	var_165_int = var_165_int + var_186_int; // 0x3b8 Add2
	goto Label_941; // 0x3b9 Jump
}


func_1066(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x42a PushV
	var_32_int = 0; // 0x42b MovI
	
Label_1068:
	var_34_string = "all"; // 0x42c PushS
	var_35_string = ""; var_36_int = 0; // 0x42d PushV
	var_36_int = var_32_int; // 0x42e Mov
	func_1059(var_35_string, var_36_int); // 0x42f NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x431 Func
	var_40_bool = var_33_bool == 0; // 0x433 Not
	if(var_40_bool == 0) goto Label_1078; // 0x434 JumpB
	goto Label_1081; // 0x435 Jump
	
Label_1081:
	var_29_int = var_32_int; // 0x439 Mov
	return 4; // 0x43a Return
	
Label_1078:
	var_41_int = 1; // 0x436 PushI
	var_32_int = var_32_int + var_41_int; // 0x437 Add2
	goto Label_1068; // 0x438 Jump
}


func_819()
{
	var_259_bool = 0; var_260_bool = 0; // 0x333 PushV
	var_261_bool = 1; // 0x334 PushB
	CameraSwitchToNormal(var_261_bool); // 0x335 Func
	var_262_bool = 0; // 0x337 PushV
	func_1091(var_262_bool); // 0x338 NEW_2
	if(var_262_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_836; // 0x33b Jump
	
Label_836:
	return 2; // 0x344 Return
	
Label_828:
	var_263_string = "head"; // 0x33c PushS
	HasAnimationTrack(var_260_bool, var_263_string); // 0x33d Func
	var_264_bool = var_260_bool; // 0x33f Push
	if(var_264_bool == 0) goto Label_836; // 0x340 JumpB
	var_265_string = "head"; // 0x341 PushS
	UnlookAsync(var_265_string); // 0x342 Func
}


func_1083(var_103_int)
{
	var_103_int = 515551; // 0x43b MovI
	return 0; // 0x43c Return
}


func_1085(var_102_int)
{
	var_102_int = 502876; // 0x43d MovI
	return 0; // 0x43e Return
}


func_1087(var_104_string)
{
	var_104_string = "ui/NPC_Rubin.png"; // 0x43f MovS
	return 0; // 0x440 Return
}


func_1089(var_105_string)
{
	var_105_string = "ui/NPC_Rubin_b.png"; // 0x441 MovS
	return 0; // 0x442 Return
}


func_1091(var_97_bool)
{
	var_97_bool = 1; // 0x443 MovB
	return 0; // 0x444 Return
}


func_1093(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x445 PushV
	var_109_string = "branch"; // 0x446 PushS
	GetVariable(var_109_string, var_108_int); // 0x447 Func
	var_110_int = 0; // 0x449 PushI
	var_111_bool = var_108_int == var_110_int; // 0x44a Eq
	if(var_111_bool == 0) goto Label_1103; // 0x44b JumpB
	var_106_int = 1; // 0x44c MovI
	return 2; // 0x44d Return
	
Label_1103:
	var_112_int = 1; // 0x44f PushI
	var_113_bool = var_108_int == var_112_int; // 0x450 Eq
	if(var_113_bool == 0) goto Label_1108; // 0x451 JumpB
	var_106_int = 2; // 0x452 MovI
	return 2; // 0x453 Return
	
Label_1108:
	var_106_int = 3; // 0x454 MovI
	return 2; // 0x455 Return
}


func_837(var_115_bool, var_116_object)
{
	var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_int = 0; // 0x345 PushV
	var_124_string = "voice_common"; // 0x346 PushS
	GetVariable(var_124_string, var_122_int); // 0x347 Func
	var_125_int = var_122_int; // 0x349 Push
	if(var_125_int == 0) goto Label_875; // 0x34a JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x34b PushV
	var_127_object = var_116_object; // 0x34c Mov
	func_895(var_127_object); // 0x34d NEW_2
	var_156_bool = var_126_bool == 0; // 0x34f Not
	if(var_156_bool == 0) goto Label_857; // 0x350 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x351 PushV
	var_158_object = var_116_object; // 0x352 Mov
	func_932(var_158_object); // 0x353 NEW_2
	var_187_bool = var_157_bool == 0; // 0x355 Not
	if(var_187_bool == 0) goto Label_857; // 0x356 JumpB
	var_115_bool = 0; // 0x357 MovB
	return 4; // 0x358 Return
	
Label_857:
	var_188_int = 2; // 0x359 PushI
	irand(var_123_int, var_188_int); // 0x35a Func
	var_189_int = var_123_int; // 0x35c Push
	if(var_189_int == 0) goto Label_870; // 0x35d JumpB
	var_190_string = "voice_common"; // 0x35e PushS
	var_191_int = 1; // 0x35f PushI
	var_192_int = var_122_int + var_191_int; // 0x360 Add
	var_193_int = 3; // 0x361 PushI
	var_194_int = var_192_int / var_193_int; // 0x362 Mod
	SetVariable(var_190_string, var_194_int); // 0x363 Func
	goto Label_874; // 0x365 Jump
	
Label_874:
	goto Label_893; // 0x36a Jump
	
Label_893:
	var_115_bool = 1; // 0x37d MovB
	return 4; // 0x37e Return
	
Label_870:
	var_195_string = "voice_common"; // 0x366 PushS
	var_196_int = 0; // 0x367 PushI
	SetVariable(var_195_string, var_196_int); // 0x368 Func
	
Label_875:
	var_197_bool = 0; var_198_object = Obj(); // 0x36b PushV
	var_198_object = var_116_object; // 0x36c Mov
	func_932(var_198_object); // 0x36d NEW_2
	var_199_bool = var_197_bool == 0; // 0x36f Not
	if(var_199_bool == 0) goto Label_889; // 0x370 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x371 PushV
	var_201_object = var_116_object; // 0x372 Mov
	func_895(var_201_object); // 0x373 NEW_2
	var_202_bool = var_200_bool == 0; // 0x375 Not
	if(var_202_bool == 0) goto Label_889; // 0x376 JumpB
	var_115_bool = 0; // 0x377 MovB
	return 4; // 0x378 Return
	
Label_889:
	var_203_string = "voice_common"; // 0x379 PushS
	var_204_int = 1; // 0x37a PushI
	SetVariable(var_203_string, var_204_int); // 0x37b Func
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


func_718(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x2ce PushV
	GetPosition(var_31_cvector); // 0x2cf Func
	GetPosition(var_32_cvector); // 0x2d1 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x2d3 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x2d4 Or2
	return 6; // 0x2d5 Return
}


func_975(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x3cf PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x3d0 Func
	var_248_bool = var_245_bool; // 0x3d2 Push
	if(var_248_bool == 0) goto Label_986; // 0x3d3 JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x3d4 Func
	var_249_bool = 0; // 0x3d6 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x3d7 Func
	goto Label_990; // 0x3d9 Jump
	
Label_990:
	return 6; // 0x3de Return
	
Label_986:
	var_250_string = "Can't find lsh animation : "; // 0x3da PushS
	var_251_int = var_250_string + var_241_string; // 0x3db Add
	Trace(var_251_int); // 0x3dc Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_205_object, var_206_object)
{
	var_0_object = var_206_object; // 0x52 TMov
	var_1_object = var_205_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_211_int = 1; // 0x55 PushI
	if(var_211_int == 0) goto Label_114; // 0x56 JumpB
	var_212_string = ""; // 0x57 PushV
	var_212_string = "Neutral"; // 0x58 MovS
	func_144(var_206_object, var_212_string); // 0x59 NEW_2
	var_229_int = 535294; // 0x5b PushI
	SetMessage(var_229_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_230_int = 535295; // 0x60 PushI
	var_231_int = 36973; // 0x61 PushI
	var_232_int = 36972; // 0x62 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x63 TObjFunc
	var_233_int = 535302; // 0x65 PushI
	var_234_int = -1; // 0x66 PushI
	var_235_int = 36980; // 0x67 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x68 TObjFunc
	var_236_int = 535303; // 0x6a PushI
	var_237_int = -1; // 0x6b PushI
	var_238_int = 36981; // 0x6c PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_239_bool = 0; // 0x72 PushV
	func_1091(var_239_bool); // 0x73 NEW_2
	if(var_239_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_240_string = var_3_string; // 0x78 PushT
	if(var_240_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_241_string = ""; // 0x7b PushV
	var_241_string = var_2_object; // 0x7c MovT
	func_975(var_241_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_252_string = "all"; // 0x81 PushS
	var_253_string = "idle"; // 0x82 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_254_string = var_3_string; // 0x87 PushT
	if(var_254_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_255_string = "all"; // 0x8a PushS
	var_256_string = "idle"; // 0x8b PushS
	PlayAnimation(var_255_string, var_256_string); // 0x8c Func
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


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_292_object, var_293_object)
{
	var_0_object = var_293_object; // 0x155 TMov
	var_1_object = var_292_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_298_int = 1; // 0x158 PushI
	if(var_298_int == 0) goto Label_368; // 0x159 JumpB
	var_299_string = ""; // 0x15a PushV
	var_299_string = "Neutral"; // 0x15b MovS
	func_398(var_293_object, var_299_string); // 0x15c NEW_2
	var_307_int = 540554; // 0x15e PushI
	SetMessage(var_307_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_308_int = 540555; // 0x163 PushI
	var_309_int = -1; // 0x164 PushI
	var_310_int = 42564; // 0x165 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x166 TObjFunc
	var_311_int = 540794; // 0x168 PushI
	var_312_int = -1; // 0x169 PushI
	var_313_int = 42843; // 0x16a PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_314_bool = 0; // 0x170 PushV
	func_1091(var_314_bool); // 0x171 NEW_2
	if(var_314_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_315_string = var_3_string; // 0x176 PushT
	if(var_315_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_316_string = ""; // 0x179 PushV
	var_316_string = var_2_object; // 0x17a MovT
	func_975(var_316_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_317_string = "all"; // 0x17f PushS
	var_318_string = "idle"; // 0x180 PushS
	PlayAnimation(var_317_string, var_318_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_319_string = var_3_string; // 0x185 PushT
	if(var_319_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_320_string = "all"; // 0x188 PushS
	var_321_string = "idle"; // 0x189 PushS
	PlayAnimation(var_320_string, var_321_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_1110(var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x456 PushV
	var_32_string = "d12_rubin"; // 0x457 PushS
	GetVariable(var_32_string, var_31_int); // 0x458 Func
	var_33_bool = 0; // 0x45a PushV
	var_33_bool = 0; // 0x45b MovB
	var_34_bool = 0; var_35_int = 0; // 0x45c PushV
	var_35_int = 12; // 0x45d MovI
	func_1053(var_34_bool, var_35_int); // 0x45e NEW_2
	if(var_34_bool == 0) goto Label_1124; // 0x460 JumpB
	var_42_bool = var_31_int == 0; // 0x461 Not
	if(var_42_bool == 0) goto Label_1124; // 0x462 JumpB
	var_33_bool = 1; // 0x463 MovB
	
Label_1124:
	if(var_33_bool == 0) goto Label_1136; // 0x464 JumpB
	var_43_int = 0; var_44_object = Obj(); // 0x465 PushV
	var_44_object = var_29_object; // 0x466 Mov
	TaskCall(0); // 0x467 TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0x468 NEW_2
	TaskReturn(); // 0x469 TaskReturn
	var_266_string = "d12_rubin"; // 0x46b PushS
	var_267_int = 1; // 0x46c PushI
	SetVariable(var_266_string, var_267_int); // 0x46d Func
	return 2; // 0x46f Return
	
Label_1136:
	var_268_int = 0; var_269_object = Obj(); // 0x470 PushV
	var_269_object = var_29_object; // 0x471 Mov
	TaskCall(2); // 0x472 TaskCall
	func_259(var_270_object, var_268_int, var_269_object); // 0x473 NEW_2
	TaskReturn(); // 0x474 TaskReturn
	return 2; // 0x476 Return
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


func_991(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x3df PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x3e0 Func
	var_226_bool = var_223_bool; // 0x3e2 Push
	if(var_226_bool == 0) goto Label_1001; // 0x3e3 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x3e4 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x3e6 Func
	goto Label_1005; // 0x3e8 Jump
	
Label_1005:
	return 6; // 0x3ed Return
	
Label_1001:
	var_227_string = "Can't find lsh animation : "; // 0x3e9 PushS
	var_228_int = var_227_string + var_216_string; // 0x3ea Add
	Trace(var_228_int); // 0x3eb Func
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
	func_1034(var_81_cvector, var_82_cvector); // 0x309 NEW_2
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
	var_94_bool = 1; // 0x319 PushB
	CameraTransit(var_72_cvector, var_70_cvector, var_94_bool); // 0x31a Func
	var_95_float = GetByIndex(var_71_cvector, 0); // 0x31c PushE
	var_96_float = GetByIndex(var_71_cvector, 2); // 0x31d PushE
	Rotate(var_95_float, var_96_float); // 0x31e Func
	var_97_bool = 0; // 0x320 PushV
	func_1091(var_97_bool); // 0x321 NEW_2
	if(var_97_bool == 0) goto Label_805; // 0x323 JumpB
	goto Label_813; // 0x324 Jump
	
Label_813:
	CameraWaitForPlayFinish(); // 0x32d Func
	ResumeWorld(); // 0x32f Func
	var_54_bool = 1; // 0x331 MovB
	return 18; // 0x332 Return
	
Label_805:
	var_98_string = "head"; // 0x325 PushS
	HasAnimationTrack(var_74_bool, var_98_string); // 0x326 Func
	var_99_bool = var_74_bool; // 0x328 Push
	if(var_99_bool == 0) goto Label_813; // 0x329 JumpB
	var_100_string = "head"; // 0x32a PushS
	LookAsyncCamera(var_100_string); // 0x32b Func
}


func_495(var_0_object)
{
	var_88_float = GetByIndex(var_0_object, 0); // 0x1ef PushE
	var_89_float = GetByIndex(var_0_object, 2); // 0x1f0 PushE
	RotateAsync(var_88_float, var_89_float); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


func_1006(var_149_bool, var_150_string)
{
	var_151_bool = 0; var_152_bool = 0; // 0x3ee PushV
	var_153_bool = 0; // 0x3ef PushV
	func_1091(var_153_bool); // 0x3f0 NEW_2
	if(var_153_bool == 0) goto Label_1019; // 0x3f2 JumpB
	lshHasSpeech(var_152_bool, var_150_string); // 0x3f3 Func
	var_154_bool = var_152_bool; // 0x3f5 Push
	if(var_154_bool == 0) goto Label_1019; // 0x3f6 JumpB
	lshPlaySpeech(var_150_string); // 0x3f7 Func
	var_149_bool = 1; // 0x3f9 MovB
	return 2; // 0x3fa Return
	
Label_1019:
	var_149_bool = 0; // 0x3fb MovB
	return 2; // 0x3fc Return
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


func_1021()
{
	var_14_bool = 0; // 0x3fd PushV
	func_1091(var_14_bool); // 0x3fe NEW_2
	if(var_14_bool == 0) goto Label_1027; // 0x400 JumpB
	lshStopSpeech(); // 0x401 Func
	
Label_1027:
	return 0; // 0x403 Return
}


func_895(var_126_bool)
{
	var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; // 0x37f PushV
	var_133_string = "c"; // 0x380 MovS
	var_134_int = 0; // 0x381 MovI
	
Label_898:
	var_138_int = 1; // 0x382 PushI
	if(var_138_int == 0) goto Label_911; // 0x383 JumpB
	var_139_int = 1; // 0x384 PushI
	var_140_int = var_134_int + var_139_int; // 0x385 Add
	var_141_int = var_133_string + var_140_int; // 0x386 Add
	HasProperty(var_141_int, var_135_bool); // 0x387 ObjFunc
	var_142_bool = var_135_bool == 0; // 0x389 Not
	if(var_142_bool == 0) goto Label_908; // 0x38a JumpB
	goto Label_911; // 0x38b Jump
	
Label_911:
	var_143_bool = var_134_int == 0; // 0x38f Not
	if(var_143_bool == 0) goto Label_915; // 0x390 JumpB
	var_126_bool = 0; // 0x391 MovB
	return 10; // 0x392 Return
	
Label_915:
	var_136_int = 0; // 0x393 MovI
	var_144_int = 1; // 0x394 PushI
	var_145_bool = var_134_int > var_144_int; // 0x395 GT
	if(var_145_bool == 0) goto Label_921; // 0x396 JumpB
	irand(var_136_int, var_134_int); // 0x397 Func
	
Label_921:
	var_146_int = 1; // 0x399 PushI
	var_147_int = var_136_int + var_146_int; // 0x39a Add
	var_148_int = var_133_string + var_147_int; // 0x39b Add
	GetProperty(var_148_int, var_137_string); // 0x39c ObjFunc
	var_149_bool = 0; var_150_string = ""; // 0x39e PushV
	var_150_string = var_137_string; // 0x39f Mov
	func_1006(var_149_bool, var_150_string); // 0x3a0 NEW_2
	var_126_bool = var_149_bool; // 0x3a1 Mov
	return 10; // 0x3a3 Return
	
Label_908:
	var_155_int = 1; // 0x38c PushI
	var_134_int = var_134_int + var_155_int; // 0x38d Add2
	goto Label_898; // 0x38e Jump
}


