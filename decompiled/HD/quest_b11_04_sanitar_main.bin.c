task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_322; // 0xb5 JumpB
	func_716(); // 0xb7 NEW_2
	var_16_int = 31870; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_198; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_795(); // 0xbf NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xc1 PushV
	var_67_object = var_1_object; // 0xc2 MovT
	var_68_object = var_0_object; // 0xc3 MovT
	func_823(); // 0xc4 NEW_2
	
Label_198:
	var_93_int = 31863; // 0xc6 PushI
	var_94_bool = var_12_bool == var_93_int; // 0xc7 Eq
	if(var_94_bool == 0) goto Label_246; // 0xc8 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0xc9 PushV
	var_96_object = var_1_object; // 0xca MovT
	func_839(var_96_object); // 0xcb NEW_2
	if(var_95_bool == 0) goto Label_226; // 0xcd JumpB
	var_103_string = ""; // 0xce PushV
	var_103_string = "Neutral"; // 0xcf MovS
	func_157(var_13_bool, var_103_string); // 0xd0 NEW_2
	var_120_int = 530504; // 0xd2 PushI
	SetMessage(var_120_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_121_int = 530505; // 0xd7 PushI
	var_122_int = 31865; // 0xd8 PushI
	var_123_int = 31864; // 0xd9 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xda TObjFunc
	var_124_int = 531423; // 0xdc PushI
	var_125_int = -1; // 0xdd PushI
	var_126_int = 32766; // 0xde PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_127_string = ""; // 0xe2 PushV
	var_127_string = "Neutral"; // 0xe3 MovS
	func_157(var_13_bool, var_127_string); // 0xe4 NEW_2
	var_128_int = 530512; // 0xe6 PushI
	SetMessage(var_128_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_129_int = 530513; // 0xeb PushI
	var_130_int = -1; // 0xec PushI
	var_131_int = 31872; // 0xed PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xee TObjFunc
	var_132_int = 531422; // 0xf0 PushI
	var_133_int = -1; // 0xf1 PushI
	var_134_int = 32765; // 0xf2 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_135_int = 31865; // 0xf6 PushI
	var_136_bool = var_12_bool == var_135_int; // 0xf7 Eq
	if(var_136_bool == 0) goto Label_269; // 0xf8 JumpB
	var_137_string = ""; // 0xf9 PushV
	var_137_string = "Neutral"; // 0xfa MovS
	func_157(var_13_bool, var_137_string); // 0xfb NEW_2
	var_138_int = 530506; // 0xfd PushI
	SetMessage(var_138_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_139_int = 530507; // 0x102 PushI
	var_140_int = 31867; // 0x103 PushI
	var_141_int = 31866; // 0x104 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x105 TObjFunc
	var_142_int = 531424; // 0x107 PushI
	var_143_int = 31869; // 0x108 PushI
	var_144_int = 32767; // 0x109 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_145_int = 31867; // 0x10d PushI
	var_146_bool = var_12_bool == var_145_int; // 0x10e Eq
	if(var_146_bool == 0) goto Label_292; // 0x10f JumpB
	var_147_string = ""; // 0x110 PushV
	var_147_string = "Neutral"; // 0x111 MovS
	func_157(var_13_bool, var_147_string); // 0x112 NEW_2
	var_148_int = 530508; // 0x114 PushI
	SetMessage(var_148_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_149_int = 530509; // 0x119 PushI
	var_150_int = 31869; // 0x11a PushI
	var_151_int = 31868; // 0x11b PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x11c TObjFunc
	var_152_int = 531425; // 0x11e PushI
	var_153_int = -1; // 0x11f PushI
	var_154_int = 32769; // 0x120 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_155_int = 31869; // 0x124 PushI
	var_156_bool = var_12_bool == var_155_int; // 0x125 Eq
	if(var_156_bool == 0) goto Label_310; // 0x126 JumpB
	var_157_string = ""; // 0x127 PushV
	var_157_string = "Neutral"; // 0x128 MovS
	func_157(var_13_bool, var_157_string); // 0x129 NEW_2
	var_158_int = 530510; // 0x12b PushI
	SetMessage(var_158_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_159_int = 530511; // 0x130 PushI
	var_160_int = -1; // 0x131 PushI
	var_161_int = 31870; // 0x132 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_3_string = 1; // 0x136 TMovB
	var_162_bool = 0; // 0x137 PushV
	func_793(var_162_bool); // 0x138 NEW_2
	if(var_162_bool == 0) goto Label_318; // 0x13a JumpB
	lshStopAnimation(); // 0x13b Func
	goto Label_320; // 0x13d Jump
	
Label_320:
	return 0; // 0x140 Return
	
Label_318:
	StopAnimation(); // 0x13e Func
	
Label_322:
	return 0; // 0x142 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_474(var_11_bool, var_12_object); // 0x14b NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x14d PushV
	var_17_object = var_12_object; // 0x14e Mov
	TaskCall(0); // 0x14f TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x150 NEW_2
	TaskReturn(); // 0x151 TaskReturn
	return 0; // 0x153 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x17b PushS
	var_14_bool = var_12_string == var_13_string; // 0x17c Eq
	if(var_14_bool == 0) goto Label_385; // 0x17d JumpB
	func_358(var_12_string); // 0x17f NEW_2
	
Label_385:
	return 0; // 0x181 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x182 PushT
	if(var_12_int == 0) goto Label_391; // 0x183 JumpB
	func_474(var_10_bool, var_11_bool); // 0x185 NEW_2
	
Label_391:
	var_16_bool = 0; // 0x187 PushV
	var_16_bool = 0; // 0x188 MovB
	var_17_int = var_5_int; // 0x189 PushT
	if(var_17_int == 0) goto Label_400; // 0x18a JumpB
	var_18_bool = 0; // 0x18b PushV
	func_407(var_18_bool); // 0x18c NEW_2
	if(var_18_bool == 0) goto Label_400; // 0x18e JumpB
	var_16_bool = 1; // 0x18f MovB
	
Label_400:
	if(var_16_bool == 0) goto Label_406; // 0x190 JumpB
	var_19_object = Obj(); // 0x191 PushV
	func_723(var_19_object); // 0x192 NEW_2
	RemoveActor(var_19_object); // 0x194 Func
	
Label_406:
	return 0; // 0x196 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1c4 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1c5 Eq
	if(var_14_bool == 0) goto Label_473; // 0x1c6 JumpB
	var_15_bool = 0; // 0x1c7 PushV
	func_436(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1c8 NEW_2
	if(var_15_bool == 0) goto Label_467; // 0x1ca JumpB
	var_28_bool = var_2_object == 0; // 0x1cb Not
	if(var_28_bool == 0) goto Label_466; // 0x1cc JumpB
	var_29_object = Obj(); // 0x1cd PushV
	var_29_object = var_4_bool; // 0x1ce MovT
	func_705(var_29_object); // 0x1cf NEW_2
	var_2_object = 1; // 0x1d1 TMovB
	
Label_466:
	goto Label_473; // 0x1d2 Jump
	
Label_473:
	return 0; // 0x1d9 Return
	
Label_467:
	var_36_object = var_2_object; // 0x1d3 PushT
	if(var_36_object == 0) goto Label_473; // 0x1d4 JumpB
	var_37_string = "head"; // 0x1d5 PushS
	UnlookAsync(var_37_string); // 0x1d6 Func
	var_2_object = 0; // 0x1d8 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x143 PushV
	var_12_float = 300; // 0x144 MovI
	var_13_float = 100; // 0x145 MovI
	func_340(var_11_bool, var_12_float, var_13_float); // 0x146 NEW_2
	return 0; // 0x148 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_587(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_787(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_785(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_789(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_791(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_955(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_153_bool = var_26_bool == 0; // 0x38 Not
	if(var_153_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_154_object = Obj(); // 0x3f PushV
	var_154_object = var_17_object; // 0x40 Mov
	func_656(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_768(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x300 PushV
	var_49_int = 0; // 0x301 MovI
	
Label_770:
	var_51_string = "all"; // 0x302 PushS
	var_52_string = ""; var_53_int = 0; // 0x303 PushV
	var_53_int = var_49_int; // 0x304 Mov
	func_761(var_52_string, var_53_int); // 0x305 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x307 Func
	var_57_bool = var_50_bool == 0; // 0x309 Not
	if(var_57_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_783; // 0x30b Jump
	
Label_783:
	var_46_int = var_49_int; // 0x30f Mov
	return 4; // 0x310 Return
	
Label_780:
	var_58_int = 1; // 0x30c PushI
	var_49_int = var_49_int + var_58_int; // 0x30d Add2
	goto Label_770; // 0x30e Jump
}


func_905(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x389 PushV
	GetMainOutdoorScene(var_27_object); // 0x38a Func
	var_29_bool = var_27_object == 0; // 0x38c NullEq
	if(var_29_bool == 0) goto Label_916; // 0x38d JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x38e PushS
	Trace(var_30_string); // 0x38f Func
	var_28_object = 0; // 0x391 SetNull
	var_24_object = var_28_object; // 0x392 Mov
	return 4; // 0x393 Return
	
Label_916:
	GetMap(var_28_object); // 0x394 ObjFunc
	var_24_object = var_28_object; // 0x396 Mov
	return 4; // 0x397 Return
}


func_656()
{
	var_155_bool = 0; var_156_bool = 0; // 0x290 PushV
	var_157_bool = 1; // 0x291 PushB
	CameraSwitchToNormal(var_157_bool); // 0x292 Func
	var_158_bool = 0; // 0x294 PushV
	func_793(var_158_bool); // 0x295 NEW_2
	if(var_158_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_673; // 0x298 Jump
	
Label_673:
	return 2; // 0x2a1 Return
	
Label_665:
	var_159_string = "head"; // 0x299 PushS
	HasAnimationTrack(var_156_bool, var_159_string); // 0x29a Func
	var_160_bool = var_156_bool; // 0x29c Push
	if(var_160_bool == 0) goto Label_673; // 0x29d JumpB
	var_161_string = "head"; // 0x29e PushS
	UnlookAsync(var_161_string); // 0x29f Func
}


func_785(var_76_int)
{
	var_76_int = 530494; // 0x311 MovI
	return 0; // 0x312 Return
}


func_787(var_75_int)
{
	var_75_int = 530493; // 0x313 MovI
	return 0; // 0x314 Return
}


func_789(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x315 MovS
	return 0; // 0x316 Return
}


func_407(var_18_bool)
{
	var_18_bool = 1; // 0x197 MovB
	return 0; // 0x198 Return
}


func_791(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x317 MovS
	return 0; // 0x318 Return
}


func_409(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x19a PushV
	func_582(var_23_bool); // 0x19b NEW_2
	var_26_bool = var_23_bool == 0; // 0x19d Not
	if(var_26_bool == 0) goto Label_416; // 0x19e JumpB
	return 0; // 0x19f Return
	
Label_416:
	var_27_string = "player"; // 0x1a0 PushS
	FindActor(var_17_bool, var_27_string); // 0x1a1 Func
	var_2_object = 0; // 0x1a3 TMovB
	var_3_string = 0; // 0x1a4 TMovB
	var_0_object = var_21_float; // 0x1a5 TMov
	var_1_object = var_22_float; // 0x1a6 TMov
	var_28_int = 10; // 0x1a7 PushI
	var_29_float = 1.0; // 0x1a8 PushF
	SetTimer(var_28_int, var_29_float); // 0x1a9 Func
	func_488(); // 0x1ac NEW_2
	var_81_bool = var_3_string == 0; // 0x1ae Not
	if(var_81_bool == 0) goto Label_435; // 0x1af JumpB
	var_82_int = 10; // 0x1b0 PushI
	KillTimer(var_82_int); // 0x1b1 Func
	
Label_435:
	return 0; // 0x1b3 Return
}


func_793(var_70_bool)
{
	var_70_bool = 0; // 0x319 MovB
	return 0; // 0x31a Return
}


func_922(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; // 0x39a PushV
	GetMainOutdoorScene(var_79_object); // 0x39b Func
	var_81_bool = var_79_object == 0; // 0x39d NullEq
	if(var_81_bool == 0) goto Label_931; // 0x39e JumpB
	var_82_string = "Can't find main outdoor scene"; // 0x39f PushS
	Trace(var_82_string); // 0x3a0 Func
	return 8; // 0x3a2 Return
	
Label_931:
	GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector); // 0x3a3 ObjFunc
	var_83_bool = var_80_bool == 0; // 0x3a5 Not
	if(var_83_bool == 0) goto Label_941; // 0x3a6 JumpB
	var_84_string = "Warning: outdoor scene locator "; // 0x3a7 PushS
	var_85_int = var_84_string + var_70_string; // 0x3a8 Add
	var_86_string = " doesnt exist"; // 0x3a9 PushS
	var_87_int = var_85_int + var_86_string; // 0x3aa Add
	Trace(var_87_int); // 0x3ab Func
	
Label_941:
	GetMap(var_69_object); // 0x3ad ObjFunc
	var_88_bool = var_69_object == 0; // 0x3af NullEq
	if(var_88_bool == 0) goto Label_949; // 0x3b0 JumpB
	var_89_string = "Can't find map"; // 0x3b1 PushS
	Trace(var_89_string); // 0x3b2 Func
	return 8; // 0x3b4 Return
	
Label_949:
	var_90_float = GetByIndex(var_77_cvector, 0); // 0x3b5 PushE
	var_91_float = GetByIndex(var_77_cvector, 2); // 0x3b6 PushE
	SetMapParams(var_90_float, var_91_float, var_71_float); // 0x3b7 ObjFunc
	return 8; // 0x3b9 Return
}


func_795()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x31b PushV
	var_22_string = "b11q04"; // 0x31c PushS
	var_23_int = 2; // 0x31d PushI
	SetVariable(var_22_string, var_23_int); // 0x31e Func
	var_24_object = Obj(); // 0x320 PushV
	func_905(var_24_object); // 0x321 NEW_2
	var_21_object = var_24_object; // 0x322 Mov
	var_31_string = "b11q04SanitarGotoOfficer"; // 0x324 PushS
	var_32_string = "pt_gmap_vagon_army"; // 0x325 PushS
	var_33_int = 0; // 0x326 PushI
	var_34_int = 530531; // 0x327 PushI
	var_35_float = 0; // 0x328 PushV
	func_756(var_35_float); // 0x329 NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x32b ObjFunc
	func_851(); // 0x32e NEW_2
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x330 PushV
	var_62_string = "quest_b11_04"; // 0x331 MovS
	var_63_string = "place_officer"; // 0x332 MovS
	func_744(var_61_bool, var_62_string, var_63_string); // 0x333 NEW_2
	return 2; // 0x335 Return
}


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x9e PushV
	func_793(var_104_bool); // 0x9f NEW_2
	var_105_bool = var_104_bool == 0; // 0xa1 Not
	if(var_105_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_106_bool = var_103_string == var_2_object; // 0xa4 Eq
	if(var_106_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_107_string = ""; var_108_bool = 0; // 0xa7 PushV
	var_107_string = var_103_string; // 0xa8 Mov
	var_109_string = ""; // 0xa9 PushS
	var_110_bool = var_103_string == var_109_string; // 0xaa Eq
	if(var_110_bool == 0) goto Label_174; // 0xab JumpB
	var_108_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_690(var_107_string, var_108_bool); // 0xaf NEW_2
	var_2_object = var_103_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_108_bool = 1; // 0xae MovB
}


func_674(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x2a2 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x2a3 Func
	var_136_bool = var_133_bool; // 0x2a5 Push
	if(var_136_bool == 0) goto Label_685; // 0x2a6 JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x2a7 Func
	var_137_bool = 0; // 0x2a9 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x2aa Func
	goto Label_689; // 0x2ac Jump
	
Label_689:
	return 6; // 0x2b1 Return
	
Label_685:
	var_138_string = "Can't find lsh animation : "; // 0x2ad PushS
	var_139_int = var_138_string + var_129_string; // 0x2ae Add
	Trace(var_139_int); // 0x2af Func
}


func_690(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x2b2 PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x2b3 Func
	var_117_bool = var_114_bool; // 0x2b5 Push
	if(var_117_bool == 0) goto Label_700; // 0x2b6 JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x2b7 Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x2b9 Func
	goto Label_704; // 0x2bb Jump
	
Label_704:
	return 6; // 0x2c0 Return
	
Label_700:
	var_118_string = "Can't find lsh animation : "; // 0x2bc PushS
	var_119_int = var_118_string + var_107_string; // 0x2bd Add
	Trace(var_119_int); // 0x2be Func
}


func_436(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1b4 PushV
	var_18_bool = var_4_bool == 0; // 0x1b5 NullEq
	if(var_18_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_15_bool = 0; // 0x1b7 MovB
	return 2; // 0x1b8 Return
	
Label_441:
	var_19_float = 0; var_20_object = Obj(); // 0x1b9 PushV
	var_20_object = var_4_bool; // 0x1ba MovT
	func_574(var_20_object); // 0x1bb NEW_2
	var_17_float = sqrt(var_19_float); // 0x1bd Sqrt2
	var_27_object = var_2_object; // 0x1be PushT
	if(var_27_object == 0) goto Label_449; // 0x1bf JumpB
	var_17_float = var_17_float - var_1_object; // 0x1c0 Sub2
	
Label_449:
	var_15_bool = var_17_float < var_0_object; // 0x1c1 LT2
	return 2; // 0x1c2 Return
}


func_567(var_71_bool)
{
	var_71_bool = 1; // 0x237 MovB
	return 0; // 0x238 Return
}


func_823()
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0; // 0x338 PushV
	var_72_object = Obj(); // 0x339 PushV
	func_905(var_72_object); // 0x33a NEW_2
	var_69_object = var_72_object; // 0x33b Mov
	var_70_string = "pt_gmap_vagon_army"; // 0x33d MovS
	var_71_float = 2; // 0x33e MovI
	func_922(var_69_object, var_70_string, var_71_float); // 0x33f NEW_2
	var_92_object = Obj(); // 0x341 PushV
	func_905(var_92_object); // 0x342 NEW_2
	ShowMap(var_92_object); // 0x344 ObjFunc
	return 0; // 0x346 Return
}


func_569()
{
	StopAnimation(); // 0x239 Func
	StopGroup0(); // 0x23b Func
	return 0; // 0x23d Return
}


func_955(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3bb PushV
	var_82_string = "branch"; // 0x3bc PushS
	GetVariable(var_82_string, var_81_int); // 0x3bd Func
	var_83_int = 0; // 0x3bf PushI
	var_84_bool = var_81_int == var_83_int; // 0x3c0 Eq
	if(var_84_bool == 0) goto Label_965; // 0x3c1 JumpB
	var_79_int = 1; // 0x3c2 MovI
	return 2; // 0x3c3 Return
	
Label_965:
	var_85_int = 1; // 0x3c5 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3c6 Eq
	if(var_86_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_79_int = 2; // 0x3c8 MovI
	return 2; // 0x3c9 Return
	
Label_970:
	var_79_int = 3; // 0x3ca MovI
	return 2; // 0x3cb Return
}


func_574(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x23e PushV
	GetPosition(var_24_cvector); // 0x23f Func
	GetPosition(var_25_cvector); // 0x241 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x243 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x244 Or2
	return 6; // 0x245 Return
}


func_705(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2c1 PushV
	GetEyesHeight(var_32_float); // 0x2c2 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2c4 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2c5 PushE
	var_34_float = var_32_float; // 0x2c6 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2c7 PopE
	var_35_string = "head"; // 0x2c8 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2c9 Func
	return 4; // 0x2cb Return
}


func_582(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x246 PushV
	IsLoaded(var_25_bool); // 0x247 Func
	var_23_bool = var_25_bool; // 0x249 Mov
	return 2; // 0x24a Return
}


func_839(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x348 PushV
	var_98_string = "b11q04"; // 0x349 MovS
	func_739(var_97_int, var_98_string); // 0x34a NEW_2
	var_101_int = 1; // 0x34c PushI
	var_102_bool = var_97_int == var_101_int; // 0x34d Eq
	if(var_102_bool == 0) goto Label_849; // 0x34e JumpB
	var_95_bool = 1; // 0x34f MovB
	return 0; // 0x350 Return
	
Label_849:
	var_95_bool = 0; // 0x351 MovB
	return 0; // 0x352 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_127; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_839(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_105; // 0x54 JumpB
	var_103_string = ""; // 0x55 PushV
	var_103_string = "Neutral"; // 0x56 MovS
	func_157(var_89_object, var_103_string); // 0x57 NEW_2
	var_120_int = 530504; // 0x59 PushI
	SetMessage(var_120_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_121_int = 530505; // 0x5e PushI
	var_122_int = 31865; // 0x5f PushI
	var_123_int = 31864; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	var_124_int = 531423; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 32766; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_127_bool = 0; // 0x7f PushV
	func_793(var_127_bool); // 0x80 NEW_2
	if(var_127_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_128_string = var_3_string; // 0x85 PushT
	if(var_128_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_129_string = ""; // 0x88 PushV
	var_129_string = var_2_object; // 0x89 MovT
	func_674(var_129_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_140_string = "all"; // 0x8e PushS
	var_141_string = "idle"; // 0x8f PushS
	PlayAnimation(var_140_string, var_141_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_142_string = var_3_string; // 0x94 PushT
	if(var_142_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_143_string = "all"; // 0x97 PushS
	var_144_string = "idle"; // 0x98 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_145_string = ""; // 0x69 PushV
	var_145_string = "Neutral"; // 0x6a MovS
	func_157(var_89_object, var_145_string); // 0x6b NEW_2
	var_146_int = 530512; // 0x6d PushI
	SetMessage(var_146_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_147_int = 530513; // 0x72 PushI
	var_148_int = -1; // 0x73 PushI
	var_149_int = 31872; // 0x74 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x75 TObjFunc
	var_150_int = 531422; // 0x77 PushI
	var_151_int = -1; // 0x78 PushI
	var_152_int = 32765; // 0x79 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_587(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x24b PushV
	GetPosition(var_40_cvector); // 0x24c ObjFunc
	GetEyesHeight(var_39_float); // 0x24e ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x250 PushE
	var_48_float = var_48_float + var_39_float; // 0x251 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x252 PopE
	GetPosition(var_41_cvector); // 0x253 Func
	GetEyesHeight(var_39_float); // 0x255 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x257 PushE
	var_49_float = var_49_float + var_39_float; // 0x258 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x259 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x25a Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x25b PushE
	var_50_float = 0; // 0x25c MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x25d PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x25e Or
	var_52_float = sqrt(var_51_int); // 0x25f Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x260 Div2
	var_43_cvector = -var_42_cvector; // 0x261 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x262 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x263 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x264 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x265 Xor2
	func_729(var_54_cvector, var_55_cvector); // 0x266 NEW_2
	var_62_int = 25; // 0x268 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x269 Mult
	var_64_int = var_53_float + var_63_float; // 0x26a Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x26b PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x26c Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x26d Add2
	IsOverrideActive(var_46_bool); // 0x26e Func
	var_66_bool = var_46_bool; // 0x270 Push
	if(var_66_bool == 0) goto Label_628; // 0x271 JumpB
	var_27_bool = 0; // 0x272 MovB
	return 18; // 0x273 Return
	
Label_628:
	StopWorld(); // 0x274 Func
	var_67_bool = 1; // 0x276 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x277 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x279 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x27a PushE
	Rotate(var_68_float, var_69_float); // 0x27b Func
	var_70_bool = 0; // 0x27d PushV
	func_793(var_70_bool); // 0x27e NEW_2
	if(var_70_bool == 0) goto Label_642; // 0x280 JumpB
	goto Label_650; // 0x281 Jump
	
Label_650:
	CameraWaitForPlayFinish(); // 0x28a Func
	ResumeWorld(); // 0x28c Func
	var_27_bool = 1; // 0x28e MovB
	return 18; // 0x28f Return
	
Label_642:
	var_71_string = "head"; // 0x282 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x283 Func
	var_72_bool = var_47_bool; // 0x285 Push
	if(var_72_bool == 0) goto Label_650; // 0x286 JumpB
	var_73_string = "head"; // 0x287 PushS
	LookAsyncCamera(var_73_string); // 0x288 Func
}


func_716()
{
	var_15_bool = 0; // 0x2cc PushV
	func_793(var_15_bool); // 0x2cd NEW_2
	if(var_15_bool == 0) goto Label_722; // 0x2cf JumpB
	lshStopSpeech(); // 0x2d0 Func
	
Label_722:
	return 0; // 0x2d2 Return
}


func_723(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2d3 PushV
	self(var_21_object); // 0x2d4 Func
	var_19_object = var_21_object; // 0x2d6 Mov
	return 2; // 0x2d7 Return
}


func_340(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x154 PushV
	var_6_int = 0; // 0x155 TMovB
	
Label_342:
	var_18_int = 3; // 0x156 PushI
	rand(var_16_float, var_18_int); // 0x157 Func
	var_19_int = 3; // 0x159 PushI
	var_20_int = var_16_float + var_19_int; // 0x15a Add
	Sleep(var_20_int, var_17_bool); // 0x15b Func
	var_6_int = 1; // 0x15d TMovB
	var_21_float = 0; var_22_float = 0; // 0x15e PushV
	var_21_float = var_12_float; // 0x15f Mov
	var_22_float = var_13_float; // 0x160 Mov
	func_409(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x161 NEW_2
	var_6_int = 0; // 0x163 TMovB
	goto Label_342; // 0x164 Jump
}


func_851()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x353 PushV
	var_40_int = 553; // 0x354 PushI
	var_41_int = 2; // 0x355 PushI
	var_42_int = 530528; // 0x356 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x357 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x359 PushV
	var_44_object = var_39_object; // 0x35a Mov
	var_45_int = 551; // 0x35b MovI
	func_877(var_43_bool, var_44_object, var_45_int); // 0x35c NEW_2
	return 2; // 0x35e Return
}


func_729(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2d9 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2da Or
	var_58_float = sqrt(var_59_int); // 0x2db Sqrt2
	var_60_float = 0.0; // 0x2dc PushF
	var_61_bool = var_58_float < var_60_float; // 0x2dd LT
	if(var_61_bool == 0) goto Label_737; // 0x2de JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2df MovV
	return 2; // 0x2e0 Return
	
Label_737:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2e1 Div2
	return 2; // 0x2e2 Return
}


func_474(var_2_object, var_3_string)
{
	func_569(); // 0x1db NEW_2
	var_13_int = 10; // 0x1dd PushI
	KillTimer(var_13_int); // 0x1de Func
	var_14_object = var_2_object; // 0x1e0 PushT
	if(var_14_object == 0) goto Label_486; // 0x1e1 JumpB
	var_15_string = "head"; // 0x1e2 PushS
	UnlookAsync(var_15_string); // 0x1e3 Func
	var_2_object = 0; // 0x1e5 TMovB
	
Label_486:
	var_3_string = 1; // 0x1e6 TMovB
	return 0; // 0x1e7 Return
}


func_864(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x360 PushV
	GetDiaryRoot(var_54_object); // 0x361 Func
	var_55_bool = var_54_object == 0; // 0x363 Not
	if(var_55_bool == 0) goto Label_874; // 0x364 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x365 PushS
	Trace(var_56_string); // 0x366 Func
	var_52_object = 0; // 0x368 MovB
	return 2; // 0x369 Return
	
Label_874:
	var_52_object = var_54_object; // 0x36a Mov
	return 2; // 0x36b Return
}


func_739(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x2e3 PushV
	GetVariable(var_98_string, var_100_int); // 0x2e4 Func
	var_97_int = var_100_int; // 0x2e6 Mov
	return 2; // 0x2e7 Return
}


func_358(var_5_int)
{
	var_5_int = 1; // 0x166 TMovB
	var_15_bool = 0; // 0x167 PushV
	var_15_bool = 0; // 0x168 MovB
	var_16_bool = 0; // 0x169 PushV
	func_582(var_16_bool); // 0x16a NEW_2
	var_19_bool = var_16_bool == 0; // 0x16c Not
	if(var_19_bool == 0) goto Label_371; // 0x16d JumpB
	var_20_bool = 0; // 0x16e PushV
	func_407(var_20_bool); // 0x16f NEW_2
	if(var_20_bool == 0) goto Label_371; // 0x171 JumpB
	var_15_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_15_bool == 0) goto Label_377; // 0x173 JumpB
	var_21_object = Obj(); // 0x174 PushV
	func_723(var_21_object); // 0x175 NEW_2
	RemoveActor(var_21_object); // 0x177 Func
	
Label_377:
	return 0; // 0x179 Return
}


func_488()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1e8 PushV
	WaitForAnimEnd(); // 0x1e9 Func
	var_44_bool = 0; // 0x1eb PushV
	func_582(var_44_bool); // 0x1ec NEW_2
	var_45_bool = var_44_bool == 0; // 0x1ee Not
	if(var_45_bool == 0) goto Label_497; // 0x1ef JumpB
	return 14; // 0x1f0 Return
	
Label_497:
	var_46_int = 0; // 0x1f1 PushV
	func_768(var_46_int); // 0x1f2 NEW_2
	var_37_int = var_46_int; // 0x1f3 Mov
	var_38_int = 0; // 0x1f5 MovI
	
Label_502:
	var_59_bool = 0; // 0x1f6 PushV
	var_59_bool = 0; // 0x1f7 MovB
	var_60_int = 5; // 0x1f8 PushI
	var_61_bool = var_38_int < var_60_int; // 0x1f9 LT
	if(var_61_bool == 0) goto Label_512; // 0x1fa JumpB
	var_62_bool = 0; // 0x1fb PushV
	func_582(var_62_bool); // 0x1fc NEW_2
	if(var_62_bool == 0) goto Label_512; // 0x1fe JumpB
	var_59_bool = 1; // 0x1ff MovB
	
Label_512:
	if(var_59_bool == 0) goto Label_564; // 0x200 JumpB
	var_63_int = 3; // 0x201 PushI
	irand(var_39_int, var_63_int); // 0x202 Func
	var_64_int = 0; // 0x204 PushI
	var_65_bool = var_39_int == var_64_int; // 0x205 Eq
	if(var_65_bool == 0) goto Label_536; // 0x206 JumpB
	var_66_int = var_37_int; // 0x207 Push
	if(var_66_int == 0) goto Label_535; // 0x208 JumpB
	irand(var_40_int, var_37_int); // 0x209 Func
	var_67_string = "all"; // 0x20b PushS
	var_68_string = ""; var_69_int = 0; // 0x20c PushV
	var_69_int = var_40_int; // 0x20d Mov
	func_761(var_68_string, var_69_int); // 0x20e NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x210 Func
	WaitForAnimEnd(var_41_bool); // 0x212 Func
	var_70_bool = var_41_bool == 0; // 0x214 Not
	if(var_70_bool == 0) goto Label_535; // 0x215 JumpB
	goto Label_564; // 0x216 Jump
	
Label_564:
	ResetAAS(); // 0x234 Func
	return 14; // 0x236 Return
	
Label_535:
	goto Label_553; // 0x217 Jump
	
Label_553:
	var_71_bool = 0; // 0x229 PushV
	func_567(var_71_bool); // 0x22a NEW_2
	var_72_bool = var_71_bool == 0; // 0x22c Not
	if(var_72_bool == 0) goto Label_559; // 0x22d JumpB
	goto Label_564; // 0x22e Jump
	
Label_559:
	ResetAAS(); // 0x22f Func
	var_73_int = 1; // 0x231 PushI
	var_38_int = var_38_int + var_73_int; // 0x232 Add2
	goto Label_502; // 0x233 Jump
	
Label_536:
	var_74_int = 1; // 0x218 PushI
	var_75_bool = var_39_int == var_74_int; // 0x219 Eq
	if(var_75_bool == 0) goto Label_550; // 0x21a JumpB
	var_76_int = 4; // 0x21b PushI
	rand(var_42_float, var_76_int); // 0x21c Func
	var_77_int = 1; // 0x21e PushI
	var_78_int = var_42_float + var_77_int; // 0x21f Add
	Sleep(var_78_int, var_43_bool); // 0x220 Func
	var_79_bool = var_43_bool == 0; // 0x222 Not
	if(var_79_bool == 0) goto Label_549; // 0x223 JumpB
	goto Label_564; // 0x224 Jump
	
Label_549:
	goto Label_553; // 0x225 Jump
	
Label_550:
	var_80_int = var_38_int; // 0x226 Push
	if(var_80_int == 0) goto Label_553; // 0x227 JumpB
	goto Label_564; // 0x228 Jump
}


func_744(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x2e8 PushV
	FindActor(var_65_object, var_62_string); // 0x2e9 Func
	var_66_bool = var_65_object == 0; // 0x2eb NullEq
	if(var_66_bool == 0) goto Label_751; // 0x2ec JumpB
	var_61_bool = 0; // 0x2ed MovB
	return 2; // 0x2ee Return
	
Label_751:
	Trigger(var_65_object, var_63_string); // 0x2ef Func
	var_61_bool = 1; // 0x2f1 MovB
	return 2; // 0x2f2 Return
}


func_877(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x36d PushV
	var_52_object = Obj(); // 0x36e PushV
	func_864(var_52_object); // 0x36f NEW_2
	var_49_object = var_52_object; // 0x370 Mov
	Find(var_45_int, var_50_object); // 0x372 ObjFunc
	var_57_bool = var_50_object == 0; // 0x374 Not
	if(var_57_bool == 0) goto Label_892; // 0x375 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x376 PushS
	var_59_int = var_58_string + var_45_int; // 0x377 Add
	Trace(var_59_int); // 0x378 Func
	var_43_bool = 0; // 0x37a MovB
	return 6; // 0x37b Return
	
Label_892:
	AddChild(var_44_object); // 0x37c ObjFunc
	var_60_int = 7; // 0x37e PushI
	SendWorldWndMessage(var_60_int); // 0x37f Func
	GetCategory(var_51_int); // 0x381 ObjFunc
	SetDiarySection(var_51_int); // 0x383 Func
	var_43_bool = 0; // 0x385 MovB
	return 6; // 0x386 Return
}


func_756(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x2f4 PushV
	GetGameTime(var_37_float); // 0x2f5 Func
	var_35_float = var_37_float; // 0x2f7 Mov
	return 2; // 0x2f8 Return
}


func_761(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2f9 PushV
	var_55_string = "idle"; // 0x2fa MovS
	var_56_int = var_53_int; // 0x2fb Push
	if(var_56_int == 0) goto Label_766; // 0x2fc JumpB
	var_55_string = var_55_string + var_53_int; // 0x2fd Add2
	
Label_766:
	var_52_string = var_55_string; // 0x2fe Mov
	return 2; // 0x2ff Return
}


