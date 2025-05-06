task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xb9 PushI
	if(var_12_int == 0) goto Label_376; // 0xba JumpB
	func_703(); // 0xbc NEW_2
	var_14_int = 29394; // 0xbe PushI
	var_15_bool = var_11_object == var_14_int; // 0xbf Eq
	if(var_15_bool == 0) goto Label_198; // 0xc0 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xc1 PushV
	var_16_object = var_1_object; // 0xc2 MovT
	var_17_object = var_0_object; // 0xc3 MovT
	func_777(); // 0xc4 NEW_2
	
Label_198:
	var_49_int = 29393; // 0xc6 PushI
	var_50_bool = var_10_bool == var_49_int; // 0xc7 Eq
	if(var_50_bool == 0) goto Label_251; // 0xc8 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xc9 PushV
	var_52_object = var_1_object; // 0xca MovT
	func_791(var_52_object); // 0xcb NEW_2
	if(var_51_bool == 0) goto Label_231; // 0xcd JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xce PushV
	var_59_object = var_1_object; // 0xcf MovT
	var_60_object = var_0_object; // 0xd0 MovT
	func_771(); // 0xd1 NEW_2
	var_63_string = ""; // 0xd3 PushV
	var_63_string = "Neutral"; // 0xd4 MovS
	func_162(var_11_object, var_63_string); // 0xd5 NEW_2
	var_80_int = 528031; // 0xd7 PushI
	SetMessage(var_80_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_81_int = 530252; // 0xdc PushI
	var_82_int = 31642; // 0xdd PushI
	var_83_int = 31641; // 0xde PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xdf TObjFunc
	var_84_int = 530261; // 0xe1 PushI
	var_85_int = 31655; // 0xe2 PushI
	var_86_int = 31650; // 0xe3 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_87_string = ""; // 0xe7 PushV
	var_87_string = "Neutral"; // 0xe8 MovS
	func_162(var_11_object, var_87_string); // 0xe9 NEW_2
	var_88_int = 528033; // 0xeb PushI
	SetMessage(var_88_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_89_int = 528034; // 0xf0 PushI
	var_90_int = -1; // 0xf1 PushI
	var_91_int = 29396; // 0xf2 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf3 TObjFunc
	var_92_int = 530257; // 0xf5 PushI
	var_93_int = -1; // 0xf6 PushI
	var_94_int = 31646; // 0xf7 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_95_int = 31655; // 0xfb PushI
	var_96_bool = var_10_bool == var_95_int; // 0xfc Eq
	if(var_96_bool == 0) goto Label_269; // 0xfd JumpB
	var_97_string = ""; // 0xfe PushV
	var_97_string = "Neutral"; // 0xff MovS
	func_162(var_11_object, var_97_string); // 0x100 NEW_2
	var_98_int = 530267; // 0x102 PushI
	SetMessage(var_98_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_99_int = 530268; // 0x107 PushI
	var_100_int = 31644; // 0x108 PushI
	var_101_int = 31656; // 0x109 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_102_int = 31642; // 0x10d PushI
	var_103_bool = var_10_bool == var_102_int; // 0x10e Eq
	if(var_103_bool == 0) goto Label_287; // 0x10f JumpB
	var_104_string = ""; // 0x110 PushV
	var_104_string = "Neutral"; // 0x111 MovS
	func_162(var_11_object, var_104_string); // 0x112 NEW_2
	var_105_int = 530253; // 0x114 PushI
	SetMessage(var_105_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_106_int = 530254; // 0x119 PushI
	var_107_int = 31644; // 0x11a PushI
	var_108_int = 31643; // 0x11b PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_109_int = 31644; // 0x11f PushI
	var_110_bool = var_10_bool == var_109_int; // 0x120 Eq
	if(var_110_bool == 0) goto Label_310; // 0x121 JumpB
	var_111_string = ""; // 0x122 PushV
	var_111_string = "Neutral"; // 0x123 MovS
	func_162(var_11_object, var_111_string); // 0x124 NEW_2
	var_112_int = 530255; // 0x126 PushI
	SetMessage(var_112_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_113_int = 530256; // 0x12b PushI
	var_114_int = 31647; // 0x12c PushI
	var_115_int = 31645; // 0x12d PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x12e TObjFunc
	var_116_int = 530262; // 0x130 PushI
	var_117_int = 31652; // 0x131 PushI
	var_118_int = 31651; // 0x132 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_119_int = 31652; // 0x136 PushI
	var_120_bool = var_10_bool == var_119_int; // 0x137 Eq
	if(var_120_bool == 0) goto Label_328; // 0x138 JumpB
	var_121_string = ""; // 0x139 PushV
	var_121_string = "Neutral"; // 0x13a MovS
	func_162(var_11_object, var_121_string); // 0x13b NEW_2
	var_122_int = 530263; // 0x13d PushI
	SetMessage(var_122_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_123_int = 530264; // 0x142 PushI
	var_124_int = 31647; // 0x143 PushI
	var_125_int = 31653; // 0x144 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_126_int = 31647; // 0x148 PushI
	var_127_bool = var_10_bool == var_126_int; // 0x149 Eq
	if(var_127_bool == 0) goto Label_346; // 0x14a JumpB
	var_128_string = ""; // 0x14b PushV
	var_128_string = "Neutral"; // 0x14c MovS
	func_162(var_11_object, var_128_string); // 0x14d NEW_2
	var_129_int = 530258; // 0x14f PushI
	SetMessage(var_129_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_130_int = 530259; // 0x154 PushI
	var_131_int = 31649; // 0x155 PushI
	var_132_int = 31648; // 0x156 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_133_int = 31649; // 0x15a PushI
	var_134_bool = var_10_bool == var_133_int; // 0x15b Eq
	if(var_134_bool == 0) goto Label_364; // 0x15c JumpB
	var_135_string = ""; // 0x15d PushV
	var_135_string = "Neutral"; // 0x15e MovS
	func_162(var_11_object, var_135_string); // 0x15f NEW_2
	var_136_int = 530260; // 0x161 PushI
	SetMessage(var_136_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_137_int = 528032; // 0x166 PushI
	var_138_int = -1; // 0x167 PushI
	var_139_int = 29394; // 0x168 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_3_string = 1; // 0x16c TMovB
	var_140_bool = 0; // 0x16d PushV
	func_745(var_140_bool); // 0x16e NEW_2
	if(var_140_bool == 0) goto Label_372; // 0x170 JumpB
	lshStopAnimation(); // 0x171 Func
	goto Label_374; // 0x173 Jump
	
Label_374:
	return 0; // 0x176 Return
	
Label_372:
	StopAnimation(); // 0x174 Func
	
Label_376:
	return 0; // 0x178 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_463(var_9_object, var_10_object); // 0x185 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x187 PushV
	var_15_object = var_10_object; // 0x188 Mov
	TaskCall(0); // 0x189 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x18a NEW_2
	TaskReturn(); // 0x18b TaskReturn
	return 0; // 0x18d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1b9 PushI
	var_12_bool = var_10_int == var_11_int; // 0x1ba Eq
	if(var_12_bool == 0) goto Label_462; // 0x1bb JumpB
	var_13_bool = 0; // 0x1bc PushV
	func_425(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1bd NEW_2
	if(var_13_bool == 0) goto Label_456; // 0x1bf JumpB
	var_26_bool = var_2_object == 0; // 0x1c0 Not
	if(var_26_bool == 0) goto Label_455; // 0x1c1 JumpB
	var_27_object = Obj(); // 0x1c2 PushV
	var_27_object = var_4_bool; // 0x1c3 MovT
	func_692(var_27_object); // 0x1c4 NEW_2
	var_2_object = 1; // 0x1c6 TMovB
	
Label_455:
	goto Label_462; // 0x1c7 Jump
	
Label_462:
	return 0; // 0x1ce Return
	
Label_456:
	var_34_object = var_2_object; // 0x1c8 PushT
	if(var_34_object == 0) goto Label_462; // 0x1c9 JumpB
	var_35_string = "head"; // 0x1ca PushS
	UnlookAsync(var_35_string); // 0x1cb Func
	var_2_object = 0; // 0x1cd TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_377:
	var_10_float = 0; var_11_float = 0; // 0x179 PushV
	var_10_float = 300; // 0x17a MovI
	var_11_float = 100; // 0x17b MovI
	func_398(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x17c NEW_2
	var_72_int = 3; // 0x17e PushI
	Sleep(var_72_int); // 0x17f Func
	goto Label_377; // 0x181 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_576(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_739(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_737(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_741(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_743(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_857(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_154_bool = var_24_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_15_object; // 0x40 Mov
	func_644(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771()
{
	var_102_string = "ook11Officer1"; // 0x304 PushS
	var_103_int = 1; // 0x305 PushI
	SetVariable(var_102_string, var_103_int); // 0x306 Func
	return 0; // 0x308 Return
}


func_644()
{
	var_156_bool = 0; var_157_bool = 0; // 0x284 PushV
	CameraSwitchToNormal(); // 0x285 Func
	var_158_bool = 0; // 0x287 PushV
	func_745(var_158_bool); // 0x288 NEW_2
	if(var_158_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_660; // 0x28b Jump
	
Label_660:
	return 2; // 0x294 Return
	
Label_652:
	var_159_string = "head"; // 0x28c PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x28d Func
	var_160_bool = var_157_bool; // 0x28f Push
	if(var_160_bool == 0) goto Label_660; // 0x290 JumpB
	var_161_string = "head"; // 0x291 PushS
	UnlookAsync(var_161_string); // 0x292 Func
}


func_777()
{
	var_18_string = "k11q01"; // 0x30a PushS
	var_19_int = 3; // 0x30b PushI
	SetVariable(var_18_string, var_19_int); // 0x30c Func
	func_803(); // 0x30f NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x311 PushV
	var_44_string = "quest_k11_01"; // 0x312 MovS
	var_45_string = "init_house_petr"; // 0x313 MovS
	func_725(var_43_bool, var_44_string, var_45_string); // 0x314 NEW_2
	return 0; // 0x316 Return
}


func_398(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x18f PushV
	func_571(var_12_bool); // 0x190 NEW_2
	var_15_bool = var_12_bool == 0; // 0x192 Not
	if(var_15_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_16_string = "player"; // 0x195 PushS
	FindActor(var_9_object, var_16_string); // 0x196 Func
	var_2_object = 0; // 0x198 TMovB
	var_3_string = 0; // 0x199 TMovB
	var_0_object = var_10_float; // 0x19a TMov
	var_1_object = var_11_float; // 0x19b TMov
	var_17_int = 10; // 0x19c PushI
	var_18_float = 1.0; // 0x19d PushF
	SetTimer(var_17_int, var_18_float); // 0x19e Func
	func_477(); // 0x1a1 NEW_2
	var_70_bool = var_3_string == 0; // 0x1a3 Not
	if(var_70_bool == 0) goto Label_424; // 0x1a4 JumpB
	var_71_int = 10; // 0x1a5 PushI
	KillTimer(var_71_int); // 0x1a6 Func
	
Label_424:
	return 0; // 0x1a8 Return
}


func_661(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x295 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x296 Func
	var_137_bool = var_134_bool; // 0x298 Push
	if(var_137_bool == 0) goto Label_672; // 0x299 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x29a Func
	var_138_bool = 0; // 0x29c PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x29d Func
	goto Label_676; // 0x29f Jump
	
Label_676:
	return 6; // 0x2a4 Return
	
Label_672:
	var_139_string = "Can't find lsh animation : "; // 0x2a0 PushS
	var_140_int = var_139_string + var_130_string; // 0x2a1 Add
	Trace(var_140_int); // 0x2a2 Func
}


func_791(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x318 PushV
	var_95_string = "ook11Officer1"; // 0x319 MovS
	func_720(var_94_int, var_95_string); // 0x31a NEW_2
	var_98_int = 0; // 0x31c PushI
	var_99_bool = var_94_int == var_98_int; // 0x31d Eq
	if(var_99_bool == 0) goto Label_801; // 0x31e JumpB
	var_92_bool = 1; // 0x31f MovB
	return 0; // 0x320 Return
	
Label_801:
	var_92_bool = 0; // 0x321 MovB
	return 0; // 0x322 Return
}


func_162(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0xa3 PushV
	func_745(var_105_bool); // 0xa4 NEW_2
	var_106_bool = var_105_bool == 0; // 0xa6 Not
	if(var_106_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_107_bool = var_104_string == var_2_object; // 0xa9 Eq
	if(var_107_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_108_string = ""; var_109_bool = 0; // 0xac PushV
	var_108_string = var_104_string; // 0xad Mov
	var_110_string = ""; // 0xae PushS
	var_111_bool = var_104_string == var_110_string; // 0xaf Eq
	if(var_111_bool == 0) goto Label_179; // 0xb0 JumpB
	var_109_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_677(var_108_string, var_109_bool); // 0xb4 NEW_2
	var_2_object = var_104_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_109_bool = 1; // 0xb3 MovB
}


func_803()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x323 PushV
	var_22_int = 486; // 0x324 PushI
	var_23_int = 1; // 0x325 PushI
	var_24_int = 528053; // 0x326 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x327 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x329 PushV
	var_26_object = var_21_object; // 0x32a Mov
	var_27_int = 480; // 0x32b MovI
	func_829(var_25_bool, var_26_object, var_27_int); // 0x32c NEW_2
	return 2; // 0x32e Return
}


func_677(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x2a5 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x2a6 Func
	var_118_bool = var_115_bool; // 0x2a8 Push
	if(var_118_bool == 0) goto Label_687; // 0x2a9 JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x2aa Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x2ac Func
	goto Label_691; // 0x2ae Jump
	
Label_691:
	return 6; // 0x2b3 Return
	
Label_687:
	var_119_string = "Can't find lsh animation : "; // 0x2af PushS
	var_120_int = var_119_string + var_108_string; // 0x2b0 Add
	Trace(var_120_int); // 0x2b1 Func
}


func_425(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1a9 PushV
	var_16_bool = var_4_bool == 0; // 0x1aa NullEq
	if(var_16_bool == 0) goto Label_430; // 0x1ab JumpB
	var_13_bool = 0; // 0x1ac MovB
	return 2; // 0x1ad Return
	
Label_430:
	var_17_float = 0; var_18_object = Obj(); // 0x1ae PushV
	var_18_object = var_4_bool; // 0x1af MovT
	func_563(var_18_object); // 0x1b0 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1b2 Sqrt2
	var_25_object = var_2_object; // 0x1b3 PushT
	if(var_25_object == 0) goto Label_438; // 0x1b4 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1b5 Sub2
	
Label_438:
	var_13_bool = var_15_float < var_0_object; // 0x1b6 LT2
	return 2; // 0x1b7 Return
}


func_556(var_60_bool)
{
	var_60_bool = 1; // 0x22c MovB
	return 0; // 0x22d Return
}


func_558()
{
	StopAnimation(); // 0x22e Func
	StopGroup0(); // 0x230 Func
	return 0; // 0x232 Return
}


func_816(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x330 PushV
	GetDiaryRoot(var_36_object); // 0x331 Func
	var_37_bool = var_36_object == 0; // 0x333 Not
	if(var_37_bool == 0) goto Label_826; // 0x334 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x335 PushS
	Trace(var_38_string); // 0x336 Func
	var_34_object = 0; // 0x338 MovB
	return 2; // 0x339 Return
	
Label_826:
	var_34_object = var_36_object; // 0x33a Mov
	return 2; // 0x33b Return
}


func_563(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x233 PushV
	GetPosition(var_22_cvector); // 0x234 Func
	GetPosition(var_23_cvector); // 0x236 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x238 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x239 Or2
	return 6; // 0x23a Return
}


func_692(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2b4 PushV
	GetEyesHeight(var_30_float); // 0x2b5 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2b7 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2b8 PushE
	var_32_float = var_30_float; // 0x2b9 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2ba PopE
	var_33_string = "head"; // 0x2bb PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2bc Func
	return 4; // 0x2be Return
}


func_571(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x23b PushV
	IsLoaded(var_14_bool); // 0x23c Func
	var_12_bool = var_14_bool; // 0x23e Mov
	return 2; // 0x23f Return
}


func_829(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x33d PushV
	var_34_object = Obj(); // 0x33e PushV
	func_816(var_34_object); // 0x33f NEW_2
	var_31_object = var_34_object; // 0x340 Mov
	Find(var_27_int, var_32_object); // 0x342 ObjFunc
	var_39_bool = var_32_object == 0; // 0x344 Not
	if(var_39_bool == 0) goto Label_844; // 0x345 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x346 PushS
	var_41_int = var_40_string + var_27_int; // 0x347 Add
	Trace(var_41_int); // 0x348 Func
	var_25_bool = 0; // 0x34a MovB
	return 6; // 0x34b Return
	
Label_844:
	AddChild(var_26_object); // 0x34c ObjFunc
	var_42_int = 7; // 0x34e PushI
	SendWorldWndMessage(var_42_int); // 0x34f Func
	GetCategory(var_33_int); // 0x351 ObjFunc
	SetDiarySection(var_33_int); // 0x353 Func
	var_25_bool = 0; // 0x355 MovB
	return 6; // 0x356 Return
}


func_703()
{
	var_13_bool = 0; // 0x2bf PushV
	func_745(var_13_bool); // 0x2c0 NEW_2
	if(var_13_bool == 0) goto Label_709; // 0x2c2 JumpB
	lshStopSpeech(); // 0x2c3 Func
	
Label_709:
	return 0; // 0x2c5 Return
}


func_576(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x240 PushV
	GetPosition(var_38_cvector); // 0x241 ObjFunc
	GetEyesHeight(var_37_float); // 0x243 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x245 PushE
	var_46_float = var_46_float + var_37_float; // 0x246 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x247 PopE
	GetPosition(var_39_cvector); // 0x248 Func
	GetEyesHeight(var_37_float); // 0x24a Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x24c PushE
	var_47_float = var_47_float + var_37_float; // 0x24d Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x24e PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x24f Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x250 PushE
	var_48_float = 0; // 0x251 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x252 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x253 Or
	var_50_float = sqrt(var_49_int); // 0x254 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x255 Div2
	var_41_cvector = -var_40_cvector; // 0x256 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x257 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x258 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x259 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x25a Xor2
	func_710(var_52_cvector, var_53_cvector); // 0x25b NEW_2
	var_60_int = 25; // 0x25d PushI
	var_61_float = var_52_cvector * var_60_int; // 0x25e Mult
	var_62_int = var_51_float + var_61_float; // 0x25f Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x260 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x261 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x262 Add2
	IsOverrideActive(var_44_bool); // 0x263 Func
	var_64_bool = var_44_bool; // 0x265 Push
	if(var_64_bool == 0) goto Label_617; // 0x266 JumpB
	var_25_bool = 0; // 0x267 MovB
	return 18; // 0x268 Return
	
Label_617:
	StopWorld(); // 0x269 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x26b Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x26d PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x26e PushE
	Rotate(var_65_float, var_66_float); // 0x26f Func
	var_67_bool = 0; // 0x271 PushV
	func_745(var_67_bool); // 0x272 NEW_2
	if(var_67_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_638; // 0x275 Jump
	
Label_638:
	CameraWaitForPlayFinish(); // 0x27e Func
	ResumeWorld(); // 0x280 Func
	var_25_bool = 1; // 0x282 MovB
	return 18; // 0x283 Return
	
Label_630:
	var_68_string = "head"; // 0x276 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x277 Func
	var_69_bool = var_45_bool; // 0x279 Push
	if(var_69_bool == 0) goto Label_638; // 0x27a JumpB
	var_70_string = "head"; // 0x27b PushS
	LookAsyncCamera(var_70_string); // 0x27c Func
}


func_710(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2c6 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2c7 Or
	var_56_float = sqrt(var_57_int); // 0x2c8 Sqrt2
	var_58_float = 0.0; // 0x2c9 PushF
	var_59_bool = var_56_float < var_58_float; // 0x2ca LT
	if(var_59_bool == 0) goto Label_718; // 0x2cb JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2cc MovV
	return 2; // 0x2cd Return
	
Label_718:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2ce Div2
	return 2; // 0x2cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_132; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_791(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_110; // 0x54 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x55 PushV
	var_100_object = var_1_object; // 0x56 MovT
	var_101_object = var_0_object; // 0x57 MovT
	func_771(); // 0x58 NEW_2
	var_104_string = ""; // 0x5a PushV
	var_104_string = "Neutral"; // 0x5b MovS
	func_162(var_86_object, var_104_string); // 0x5c NEW_2
	var_121_int = 528031; // 0x5e PushI
	SetMessage(var_121_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_122_int = 530252; // 0x63 PushI
	var_123_int = 31642; // 0x64 PushI
	var_124_int = 31641; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	var_125_int = 530261; // 0x68 PushI
	var_126_int = 31655; // 0x69 PushI
	var_127_int = 31650; // 0x6a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_128_bool = 0; // 0x84 PushV
	func_745(var_128_bool); // 0x85 NEW_2
	if(var_128_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_129_string = var_3_string; // 0x8a PushT
	if(var_129_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_130_string = ""; // 0x8d PushV
	var_130_string = var_2_object; // 0x8e MovT
	func_661(var_130_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_141_string = "all"; // 0x93 PushS
	var_142_string = "idle"; // 0x94 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_143_string = var_3_string; // 0x99 PushT
	if(var_143_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_144_string = "all"; // 0x9c PushS
	var_145_string = "idle"; // 0x9d PushS
	PlayAnimation(var_144_string, var_145_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_146_string = ""; // 0x6e PushV
	var_146_string = "Neutral"; // 0x6f MovS
	func_162(var_86_object, var_146_string); // 0x70 NEW_2
	var_147_int = 528033; // 0x72 PushI
	SetMessage(var_147_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_148_int = 528034; // 0x77 PushI
	var_149_int = -1; // 0x78 PushI
	var_150_int = 29396; // 0x79 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x7a TObjFunc
	var_151_int = 530257; // 0x7c PushI
	var_152_int = -1; // 0x7d PushI
	var_153_int = 31646; // 0x7e PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_463(var_2_object, var_3_string)
{
	func_558(); // 0x1d0 NEW_2
	var_11_int = 10; // 0x1d2 PushI
	KillTimer(var_11_int); // 0x1d3 Func
	var_12_object = var_2_object; // 0x1d5 PushT
	if(var_12_object == 0) goto Label_475; // 0x1d6 JumpB
	var_13_string = "head"; // 0x1d7 PushS
	UnlookAsync(var_13_string); // 0x1d8 Func
	var_2_object = 0; // 0x1da TMovB
	
Label_475:
	var_3_string = 1; // 0x1db TMovB
	return 0; // 0x1dc Return
}


func_720(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x2d0 PushV
	GetVariable(var_95_string, var_97_int); // 0x2d1 Func
	var_94_int = var_97_int; // 0x2d3 Mov
	return 2; // 0x2d4 Return
}


func_725(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x2d5 PushV
	FindActor(var_47_object, var_44_string); // 0x2d6 Func
	var_48_bool = var_47_object == 0; // 0x2d8 NullEq
	if(var_48_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_43_bool = 0; // 0x2da MovB
	return 2; // 0x2db Return
	
Label_732:
	Trigger(var_47_object, var_45_string); // 0x2dc Func
	var_43_bool = 1; // 0x2de MovB
	return 2; // 0x2df Return
}


func_857(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x359 PushV
	var_79_string = "branch"; // 0x35a PushS
	GetVariable(var_79_string, var_78_int); // 0x35b Func
	var_80_int = 0; // 0x35d PushI
	var_81_bool = var_78_int == var_80_int; // 0x35e Eq
	if(var_81_bool == 0) goto Label_867; // 0x35f JumpB
	var_76_int = 1; // 0x360 MovI
	return 2; // 0x361 Return
	
Label_867:
	var_82_int = 1; // 0x363 PushI
	var_83_bool = var_78_int == var_82_int; // 0x364 Eq
	if(var_83_bool == 0) goto Label_872; // 0x365 JumpB
	var_76_int = 2; // 0x366 MovI
	return 2; // 0x367 Return
	
Label_872:
	var_76_int = 3; // 0x368 MovI
	return 2; // 0x369 Return
}


func_477()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x1dd PushV
	WaitForAnimEnd(); // 0x1de Func
	var_33_bool = 0; // 0x1e0 PushV
	func_571(var_33_bool); // 0x1e1 NEW_2
	var_34_bool = var_33_bool == 0; // 0x1e3 Not
	if(var_34_bool == 0) goto Label_486; // 0x1e4 JumpB
	return 14; // 0x1e5 Return
	
Label_486:
	var_35_int = 0; // 0x1e6 PushV
	func_754(var_35_int); // 0x1e7 NEW_2
	var_26_int = var_35_int; // 0x1e8 Mov
	var_27_int = 0; // 0x1ea MovI
	
Label_491:
	var_48_bool = 0; // 0x1eb PushV
	var_48_bool = 0; // 0x1ec MovB
	var_49_int = 5; // 0x1ed PushI
	var_50_bool = var_27_int < var_49_int; // 0x1ee LT
	if(var_50_bool == 0) goto Label_501; // 0x1ef JumpB
	var_51_bool = 0; // 0x1f0 PushV
	func_571(var_51_bool); // 0x1f1 NEW_2
	if(var_51_bool == 0) goto Label_501; // 0x1f3 JumpB
	var_48_bool = 1; // 0x1f4 MovB
	
Label_501:
	if(var_48_bool == 0) goto Label_553; // 0x1f5 JumpB
	var_52_int = 3; // 0x1f6 PushI
	irand(var_28_int, var_52_int); // 0x1f7 Func
	var_53_int = 0; // 0x1f9 PushI
	var_54_bool = var_28_int == var_53_int; // 0x1fa Eq
	if(var_54_bool == 0) goto Label_525; // 0x1fb JumpB
	var_55_int = var_26_int; // 0x1fc Push
	if(var_55_int == 0) goto Label_524; // 0x1fd JumpB
	irand(var_29_int, var_26_int); // 0x1fe Func
	var_56_string = "all"; // 0x200 PushS
	var_57_string = ""; var_58_int = 0; // 0x201 PushV
	var_58_int = var_29_int; // 0x202 Mov
	func_747(var_57_string, var_58_int); // 0x203 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x205 Func
	WaitForAnimEnd(var_30_bool); // 0x207 Func
	var_59_bool = var_30_bool == 0; // 0x209 Not
	if(var_59_bool == 0) goto Label_524; // 0x20a JumpB
	goto Label_553; // 0x20b Jump
	
Label_553:
	ResetAAS(); // 0x229 Func
	return 14; // 0x22b Return
	
Label_524:
	goto Label_542; // 0x20c Jump
	
Label_542:
	var_60_bool = 0; // 0x21e PushV
	func_556(var_60_bool); // 0x21f NEW_2
	var_61_bool = var_60_bool == 0; // 0x221 Not
	if(var_61_bool == 0) goto Label_548; // 0x222 JumpB
	goto Label_553; // 0x223 Jump
	
Label_548:
	ResetAAS(); // 0x224 Func
	var_62_int = 1; // 0x226 PushI
	var_27_int = var_27_int + var_62_int; // 0x227 Add2
	goto Label_491; // 0x228 Jump
	
Label_525:
	var_63_int = 1; // 0x20d PushI
	var_64_bool = var_28_int == var_63_int; // 0x20e Eq
	if(var_64_bool == 0) goto Label_539; // 0x20f JumpB
	var_65_int = 4; // 0x210 PushI
	rand(var_31_float, var_65_int); // 0x211 Func
	var_66_int = 1; // 0x213 PushI
	var_67_int = var_31_float + var_66_int; // 0x214 Add
	Sleep(var_67_int, var_32_bool); // 0x215 Func
	var_68_bool = var_32_bool == 0; // 0x217 Not
	if(var_68_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_553; // 0x219 Jump
	
Label_538:
	goto Label_542; // 0x21a Jump
	
Label_539:
	var_69_int = var_27_int; // 0x21b Push
	if(var_69_int == 0) goto Label_542; // 0x21c JumpB
	goto Label_553; // 0x21d Jump
}


func_737(var_73_int)
{
	var_73_int = 515597; // 0x2e1 MovI
	return 0; // 0x2e2 Return
}


func_739(var_72_int)
{
	var_72_int = 514841; // 0x2e3 MovI
	return 0; // 0x2e4 Return
}


func_741(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x2e5 MovS
	return 0; // 0x2e6 Return
}


func_743(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x2e7 MovS
	return 0; // 0x2e8 Return
}


func_745(var_67_bool)
{
	var_67_bool = 0; // 0x2e9 MovB
	return 0; // 0x2ea Return
}


func_747(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x2eb PushV
	var_44_string = "idle"; // 0x2ec MovS
	var_45_int = var_42_int; // 0x2ed Push
	if(var_45_int == 0) goto Label_752; // 0x2ee JumpB
	var_44_string = var_44_string + var_42_int; // 0x2ef Add2
	
Label_752:
	var_41_string = var_44_string; // 0x2f0 Mov
	return 2; // 0x2f1 Return
}


func_754(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x2f2 PushV
	var_38_int = 0; // 0x2f3 MovI
	
Label_756:
	var_40_string = "all"; // 0x2f4 PushS
	var_41_string = ""; var_42_int = 0; // 0x2f5 PushV
	var_42_int = var_38_int; // 0x2f6 Mov
	func_747(var_41_string, var_42_int); // 0x2f7 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2f9 Func
	var_46_bool = var_39_bool == 0; // 0x2fb Not
	if(var_46_bool == 0) goto Label_766; // 0x2fc JumpB
	goto Label_769; // 0x2fd Jump
	
Label_769:
	var_35_int = var_38_int; // 0x301 Mov
	return 4; // 0x302 Return
	
Label_766:
	var_47_int = 1; // 0x2fe PushI
	var_38_int = var_38_int + var_47_int; // 0x2ff Add2
	goto Label_756; // 0x300 Jump
}


