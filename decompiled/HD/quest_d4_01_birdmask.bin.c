task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa0 PushI
	if(var_8_int == 0) goto Label_323; // 0xa1 JumpB
	func_561(); // 0xa3 NEW_2
	var_10_int = 10626; // 0xa5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa6 Eq
	if(var_11_bool == 0) goto Label_178; // 0xa7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xa8 PushV
	var_12_object = var_1_object; // 0xa9 MovT
	var_13_object = var_0_object; // 0xaa MovT
	func_619(); // 0xab NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xad PushV
	var_30_object = var_1_object; // 0xae MovT
	var_31_object = var_0_object; // 0xaf MovT
	func_635(); // 0xb0 NEW_2
	
Label_178:
	var_56_int = 10627; // 0xb2 PushI
	var_57_bool = var_7_bool == var_56_int; // 0xb3 Eq
	if(var_57_bool == 0) goto Label_191; // 0xb4 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xb5 PushV
	var_58_object = var_1_object; // 0xb6 MovT
	var_59_object = var_0_object; // 0xb7 MovT
	func_619(); // 0xb8 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0xba PushV
	var_60_object = var_1_object; // 0xbb MovT
	var_61_object = var_0_object; // 0xbc MovT
	func_635(); // 0xbd NEW_2
	
Label_191:
	var_62_int = 10619; // 0xbf PushI
	var_63_bool = var_6_int == var_62_int; // 0xc0 Eq
	if(var_63_bool == 0) goto Label_219; // 0xc1 JumpB
	var_64_string = ""; // 0xc2 PushV
	var_64_string = "Neutral"; // 0xc3 MovS
	func_137(var_7_bool, var_64_string); // 0xc4 NEW_2
	var_81_int = 509650; // 0xc6 PushI
	SetMessage(var_81_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_82_int = 509651; // 0xcb PushI
	var_83_int = 10621; // 0xcc PushI
	var_84_int = 10620; // 0xcd PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xce TObjFunc
	var_85_int = 509661; // 0xd0 PushI
	var_86_int = 10633; // 0xd1 PushI
	var_87_int = 10632; // 0xd2 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xd3 TObjFunc
	var_88_int = 509665; // 0xd5 PushI
	var_89_int = 10625; // 0xd6 PushI
	var_90_int = 10638; // 0xd7 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_91_int = 10633; // 0xdb PushI
	var_92_bool = var_6_int == var_91_int; // 0xdc Eq
	if(var_92_bool == 0) goto Label_242; // 0xdd JumpB
	var_93_string = ""; // 0xde PushV
	var_93_string = "Neutral"; // 0xdf MovS
	func_137(var_7_bool, var_93_string); // 0xe0 NEW_2
	var_94_int = 509662; // 0xe2 PushI
	SetMessage(var_94_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_95_int = 509663; // 0xe7 PushI
	var_96_int = 10625; // 0xe8 PushI
	var_97_int = 10634; // 0xe9 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xea TObjFunc
	var_98_int = 509664; // 0xec PushI
	var_99_int = 10621; // 0xed PushI
	var_100_int = 10636; // 0xee PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_101_int = 10621; // 0xf2 PushI
	var_102_bool = var_6_int == var_101_int; // 0xf3 Eq
	if(var_102_bool == 0) goto Label_265; // 0xf4 JumpB
	var_103_string = ""; // 0xf5 PushV
	var_103_string = "Neutral"; // 0xf6 MovS
	func_137(var_7_bool, var_103_string); // 0xf7 NEW_2
	var_104_int = 509652; // 0xf9 PushI
	SetMessage(var_104_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_105_int = 509653; // 0xfe PushI
	var_106_int = 10623; // 0xff PushI
	var_107_int = 10622; // 0x100 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x101 TObjFunc
	var_108_int = 509660; // 0x103 PushI
	var_109_int = 10625; // 0x104 PushI
	var_110_int = 10630; // 0x105 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_111_int = 10623; // 0x109 PushI
	var_112_bool = var_6_int == var_111_int; // 0x10a Eq
	if(var_112_bool == 0) goto Label_288; // 0x10b JumpB
	var_113_string = ""; // 0x10c PushV
	var_113_string = "Neutral"; // 0x10d MovS
	func_137(var_7_bool, var_113_string); // 0x10e NEW_2
	var_114_int = 509654; // 0x110 PushI
	SetMessage(var_114_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_115_int = 509655; // 0x115 PushI
	var_116_int = 10625; // 0x116 PushI
	var_117_int = 10624; // 0x117 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x118 TObjFunc
	var_118_int = 509659; // 0x11a PushI
	var_119_int = 10625; // 0x11b PushI
	var_120_int = 10628; // 0x11c PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_121_int = 10625; // 0x120 PushI
	var_122_bool = var_6_int == var_121_int; // 0x121 Eq
	if(var_122_bool == 0) goto Label_311; // 0x122 JumpB
	var_123_string = ""; // 0x123 PushV
	var_123_string = "Neutral"; // 0x124 MovS
	func_137(var_7_bool, var_123_string); // 0x125 NEW_2
	var_124_int = 509656; // 0x127 PushI
	SetMessage(var_124_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_125_int = 509657; // 0x12c PushI
	var_126_int = -1; // 0x12d PushI
	var_127_int = 10626; // 0x12e PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x12f TObjFunc
	var_128_int = 509658; // 0x131 PushI
	var_129_int = -1; // 0x132 PushI
	var_130_int = 10627; // 0x133 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_3_string = 1; // 0x137 TMovB
	var_131_bool = 0; // 0x138 PushV
	func_726(var_131_bool); // 0x139 NEW_2
	if(var_131_bool == 0) goto Label_319; // 0x13b JumpB
	lshStopAnimation(); // 0x13c Func
	goto Label_321; // 0x13e Jump
	
Label_321:
	return 0; // 0x141 Return
	
Label_319:
	StopAnimation(); // 0x13f Func
	
Label_323:
	return 0; // 0x143 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; // 0x14e Not
	if(var_7_bool == 0) goto Label_351; // 0x14f JumpB
	var_0_object = 1; // 0x150 TMovB
	func_433(); // 0x152 NEW_2
	var_8_int = 0; var_9_object = Obj(); // 0x154 PushV
	var_9_object = var_6_object; // 0x155 Mov
	TaskCall(0); // 0x156 TaskCall
	func_0(var_10_object, var_8_int, var_9_object); // 0x157 NEW_2
	TaskReturn(); // 0x158 TaskReturn
	var_141_bool = 0; var_142_string = ""; var_143_string = ""; // 0x15a PushV
	var_142_string = "quest_d4_01"; // 0x15b MovS
	var_143_string = "birdmask_done"; // 0x15c MovS
	func_578(var_141_bool, var_142_string, var_143_string); // 0x15d NEW_2
	
Label_351:
	return 0; // 0x15f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x144 TMovB
	
Label_325:
	var_6_int = 3; // 0x145 PushI
	Sleep(var_6_int); // 0x146 Func
	func_352(); // 0x149 NEW_2
	goto Label_325; // 0x14b Jump
}


func_512()
{
	var_134_bool = 0; var_135_bool = 0; // 0x200 PushV
	var_136_bool = 1; // 0x201 PushB
	CameraSwitchToNormal(var_136_bool); // 0x202 Func
	var_137_bool = 0; // 0x204 PushV
	func_726(var_137_bool); // 0x205 NEW_2
	if(var_137_bool == 0) goto Label_521; // 0x207 JumpB
	goto Label_529; // 0x208 Jump
	
Label_529:
	return 2; // 0x211 Return
	
Label_521:
	var_138_string = "head"; // 0x209 PushS
	HasAnimationTrack(var_135_bool, var_138_string); // 0x20a Func
	var_139_bool = var_135_bool; // 0x20c Push
	if(var_139_bool == 0) goto Label_529; // 0x20d JumpB
	var_140_string = "head"; // 0x20e PushS
	UnlookAsync(var_140_string); // 0x20f Func
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x0 PushV
	var_0_object = var_9_object; // 0x1 TMov
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x2 PushV
	var_20_object = var_9_object; // 0x3 Mov
	var_21_float = 130.0; // 0x4 MovF
	func_443(var_20_object, var_21_float); // 0x5 NEW_2
	var_66_bool = var_19_bool == 0; // 0x7 Not
	if(var_66_bool == 0) goto Label_11; // 0x8 JumpB
	var_8_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_15_object); // 0xb Func
	var_67_int = 0; // 0xd PushV
	func_720(var_67_int); // 0xe NEW_2
	SetNPCName(var_67_int); // 0x10 ObjFunc
	var_68_int = 0; // 0x12 PushV
	func_718(var_68_int); // 0x13 NEW_2
	SetNPCDescription(var_68_int); // 0x15 ObjFunc
	var_69_string = ""; // 0x17 PushV
	func_722(var_69_string); // 0x18 NEW_2
	SetPhoto(var_69_string); // 0x1a ObjFunc
	var_70_string = ""; // 0x1c PushV
	func_724(var_70_string); // 0x1d NEW_2
	SetPhoto2(var_70_string); // 0x1f ObjFunc
	var_71_int = 0; // 0x21 PushV
	func_701(var_71_int); // 0x22 NEW_2
	SetPlayerName(var_71_int); // 0x24 ObjFunc
	var_17_int = -1; // 0x26 MovI
	IsOverrideActive(var_16_bool); // 0x27 Func
	var_79_bool = var_16_bool; // 0x29 Push
	if(var_79_bool == 0) goto Label_45; // 0x2a JumpB
	var_8_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_15_object); // 0x2d Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x2f PushV
	var_80_object = var_9_object; // 0x30 Mov
	var_81_object = var_15_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_18_bool); // 0x36 ObjFunc
	
Label_56:
	var_132_bool = var_18_bool == 0; // 0x38 Not
	if(var_132_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_18_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_133_object = Obj(); // 0x3f PushV
	var_133_object = var_9_object; // 0x40 Mov
	func_512(); // 0x41 NEW_2
	StopDialog(var_15_object); // 0x43 Func
	GetReturnValue(var_17_int); // 0x45 ObjFunc
	var_8_int = var_17_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_578(var_141_bool, var_142_string, var_143_string)
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x242 PushV
	FindActor(var_145_object, var_142_string); // 0x243 Func
	var_146_bool = var_145_object == 0; // 0x245 NullEq
	if(var_146_bool == 0) goto Label_585; // 0x246 JumpB
	var_141_bool = 0; // 0x247 MovB
	return 2; // 0x248 Return
	
Label_585:
	Trigger(var_145_object, var_143_string); // 0x249 Func
	var_141_bool = 1; // 0x24b MovB
	return 2; // 0x24c Return
}


func_137(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0x8a PushV
	func_726(var_88_bool); // 0x8b NEW_2
	var_89_bool = var_88_bool == 0; // 0x8d Not
	if(var_89_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_90_bool = var_87_string == var_2_object; // 0x90 Eq
	if(var_90_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_91_string = ""; var_92_bool = 0; // 0x93 PushV
	var_91_string = var_87_string; // 0x94 Mov
	var_93_string = ""; // 0x95 PushS
	var_94_bool = var_87_string == var_93_string; // 0x96 Eq
	if(var_94_bool == 0) goto Label_154; // 0x97 JumpB
	var_92_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_546(var_91_string, var_92_bool); // 0x9b NEW_2
	var_2_object = var_87_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_92_bool = 1; // 0x9a MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x4b TMov
	var_1_object = var_80_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_86_int = 1; // 0x4e PushI
	if(var_86_int == 0) goto Label_107; // 0x4f JumpB
	var_87_string = ""; // 0x50 PushV
	var_87_string = "Neutral"; // 0x51 MovS
	func_137(var_81_object, var_87_string); // 0x52 NEW_2
	var_104_int = 509650; // 0x54 PushI
	SetMessage(var_104_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_105_int = 509651; // 0x59 PushI
	var_106_int = 10621; // 0x5a PushI
	var_107_int = 10620; // 0x5b PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x5c TObjFunc
	var_108_int = 509661; // 0x5e PushI
	var_109_int = 10633; // 0x5f PushI
	var_110_int = 10632; // 0x60 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x61 TObjFunc
	var_111_int = 509665; // 0x63 PushI
	var_112_int = 10625; // 0x64 PushI
	var_113_int = 10638; // 0x65 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_114_bool = 0; // 0x6b PushV
	func_726(var_114_bool); // 0x6c NEW_2
	if(var_114_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_115_string = var_3_string; // 0x71 PushT
	if(var_115_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_116_string = ""; // 0x74 PushV
	var_116_string = var_2_object; // 0x75 MovT
	func_530(var_116_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_127_string = "all"; // 0x7a PushS
	var_128_string = "idle"; // 0x7b PushS
	PlayAnimation(var_127_string, var_128_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_129_string = var_3_string; // 0x80 PushT
	if(var_129_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_130_string = "all"; // 0x83 PushS
	var_131_string = "idle"; // 0x84 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_651(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x28b PushV
	GetMainOutdoorScene(var_19_object); // 0x28c Func
	var_21_bool = var_19_object == 0; // 0x28e NullEq
	if(var_21_bool == 0) goto Label_662; // 0x28f JumpB
	var_22_string = "Can't find main outdoor scene"; // 0x290 PushS
	Trace(var_22_string); // 0x291 Func
	var_20_object = 0; // 0x293 SetNull
	var_16_object = var_20_object; // 0x294 Mov
	return 4; // 0x295 Return
	
Label_662:
	GetMap(var_20_object); // 0x296 ObjFunc
	var_16_object = var_20_object; // 0x298 Mov
	return 4; // 0x299 Return
}


func_718(var_68_int)
{
	var_68_int = 515571; // 0x2ce MovI
	return 0; // 0x2cf Return
}


func_590(var_27_float)
{
	var_28_float = 0; var_29_float = 0; // 0x24e PushV
	GetGameTime(var_29_float); // 0x24f Func
	var_27_float = var_29_float; // 0x251 Mov
	return 2; // 0x252 Return
}


func_720(var_67_int)
{
	var_67_int = 504029; // 0x2d0 MovI
	return 0; // 0x2d1 Return
}


func_530(var_116_string)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; // 0x212 PushV
	lshHasAnimation(var_120_bool, var_116_string); // 0x213 Func
	var_123_bool = var_120_bool; // 0x215 Push
	if(var_123_bool == 0) goto Label_541; // 0x216 JumpB
	lshGetAnimTimes(var_116_string, var_121_float, var_122_float); // 0x217 Func
	var_124_bool = 0; // 0x219 PushB
	lshPlayAnimation(var_121_float, var_122_float, var_124_bool); // 0x21a Func
	goto Label_545; // 0x21c Jump
	
Label_545:
	return 6; // 0x221 Return
	
Label_541:
	var_125_string = "Can't find lsh animation : "; // 0x21d PushS
	var_126_int = var_125_string + var_116_string; // 0x21e Add
	Trace(var_126_int); // 0x21f Func
}


func_722(var_69_string)
{
	var_69_string = "ui/NPC_bmask.png"; // 0x2d2 MovS
	return 0; // 0x2d3 Return
}


func_595(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x253 PushV
	var_34_string = "idle"; // 0x254 MovS
	var_35_int = var_32_int; // 0x255 Push
	if(var_35_int == 0) goto Label_600; // 0x256 JumpB
	var_34_string = var_34_string + var_32_int; // 0x257 Add2
	
Label_600:
	var_31_string = var_34_string; // 0x258 Mov
	return 2; // 0x259 Return
}


func_724(var_70_string)
{
	var_70_string = "ui/NPC_bmask_b.png"; // 0x2d4 MovS
	return 0; // 0x2d5 Return
}


func_726(var_62_bool)
{
	var_62_bool = 0; // 0x2d6 MovB
	return 0; // 0x2d7 Return
}


func_602(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x25a PushV
	var_28_int = 0; // 0x25b MovI
	
Label_604:
	var_30_string = "all"; // 0x25c PushS
	var_31_string = ""; var_32_int = 0; // 0x25d PushV
	var_32_int = var_28_int; // 0x25e Mov
	func_595(var_31_string, var_32_int); // 0x25f NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x261 Func
	var_36_bool = var_29_bool == 0; // 0x263 Not
	if(var_36_bool == 0) goto Label_614; // 0x264 JumpB
	goto Label_617; // 0x265 Jump
	
Label_617:
	var_25_int = var_28_int; // 0x269 Mov
	return 4; // 0x26a Return
	
Label_614:
	var_37_int = 1; // 0x266 PushI
	var_28_int = var_28_int + var_37_int; // 0x267 Add2
	goto Label_604; // 0x268 Jump
}


func_668(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; // 0x29c PushV
	GetMainOutdoorScene(var_42_object); // 0x29d Func
	var_44_bool = var_42_object == 0; // 0x29f NullEq
	if(var_44_bool == 0) goto Label_677; // 0x2a0 JumpB
	var_45_string = "Can't find main outdoor scene"; // 0x2a1 PushS
	Trace(var_45_string); // 0x2a2 Func
	return 8; // 0x2a4 Return
	
Label_677:
	GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector); // 0x2a5 ObjFunc
	var_46_bool = var_43_bool == 0; // 0x2a7 Not
	if(var_46_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_47_string = "Warning: outdoor scene locator "; // 0x2a9 PushS
	var_48_int = var_47_string + var_33_string; // 0x2aa Add
	var_49_string = " doesnt exist"; // 0x2ab PushS
	var_50_int = var_48_int + var_49_string; // 0x2ac Add
	Trace(var_50_int); // 0x2ad Func
	
Label_687:
	GetMap(var_32_object); // 0x2af ObjFunc
	var_51_bool = var_32_object == 0; // 0x2b1 NullEq
	if(var_51_bool == 0) goto Label_695; // 0x2b2 JumpB
	var_52_string = "Can't find map"; // 0x2b3 PushS
	Trace(var_52_string); // 0x2b4 Func
	return 8; // 0x2b6 Return
	
Label_695:
	var_53_float = GetByIndex(var_40_cvector, 0); // 0x2b7 PushE
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x2b8 PushE
	SetMapParams(var_53_float, var_54_float, var_34_float); // 0x2b9 ObjFunc
	return 8; // 0x2bb Return
}


func_352()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x160 PushV
	WaitForAnimEnd(); // 0x161 Func
	var_21_bool = 0; // 0x163 PushV
	func_438(var_21_bool); // 0x164 NEW_2
	var_24_bool = var_21_bool == 0; // 0x166 Not
	if(var_24_bool == 0) goto Label_361; // 0x167 JumpB
	return 14; // 0x168 Return
	
Label_361:
	var_25_int = 0; // 0x169 PushV
	func_602(var_25_int); // 0x16a NEW_2
	var_14_int = var_25_int; // 0x16b Mov
	var_15_int = 0; // 0x16d MovI
	
Label_366:
	var_38_bool = 0; // 0x16e PushV
	var_38_bool = 0; // 0x16f MovB
	var_39_int = 5; // 0x170 PushI
	var_40_bool = var_15_int < var_39_int; // 0x171 LT
	if(var_40_bool == 0) goto Label_376; // 0x172 JumpB
	var_41_bool = 0; // 0x173 PushV
	func_438(var_41_bool); // 0x174 NEW_2
	if(var_41_bool == 0) goto Label_376; // 0x176 JumpB
	var_38_bool = 1; // 0x177 MovB
	
Label_376:
	if(var_38_bool == 0) goto Label_428; // 0x178 JumpB
	var_42_int = 3; // 0x179 PushI
	irand(var_16_int, var_42_int); // 0x17a Func
	var_43_int = 0; // 0x17c PushI
	var_44_bool = var_16_int == var_43_int; // 0x17d Eq
	if(var_44_bool == 0) goto Label_400; // 0x17e JumpB
	var_45_int = var_14_int; // 0x17f Push
	if(var_45_int == 0) goto Label_399; // 0x180 JumpB
	irand(var_17_int, var_14_int); // 0x181 Func
	var_46_string = "all"; // 0x183 PushS
	var_47_string = ""; var_48_int = 0; // 0x184 PushV
	var_48_int = var_17_int; // 0x185 Mov
	func_595(var_47_string, var_48_int); // 0x186 NEW_2
	PlayAnimation(var_46_string, var_47_string); // 0x188 Func
	WaitForAnimEnd(var_18_bool); // 0x18a Func
	var_49_bool = var_18_bool == 0; // 0x18c Not
	if(var_49_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_428; // 0x18e Jump
	
Label_428:
	ResetAAS(); // 0x1ac Func
	return 14; // 0x1ae Return
	
Label_399:
	goto Label_417; // 0x18f Jump
	
Label_417:
	var_50_bool = 0; // 0x1a1 PushV
	func_431(var_50_bool); // 0x1a2 NEW_2
	var_51_bool = var_50_bool == 0; // 0x1a4 Not
	if(var_51_bool == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_428; // 0x1a6 Jump
	
Label_423:
	ResetAAS(); // 0x1a7 Func
	var_52_int = 1; // 0x1a9 PushI
	var_15_int = var_15_int + var_52_int; // 0x1aa Add2
	goto Label_366; // 0x1ab Jump
	
Label_400:
	var_53_int = 1; // 0x190 PushI
	var_54_bool = var_16_int == var_53_int; // 0x191 Eq
	if(var_54_bool == 0) goto Label_414; // 0x192 JumpB
	var_55_int = 4; // 0x193 PushI
	rand(var_19_float, var_55_int); // 0x194 Func
	var_56_int = 1; // 0x196 PushI
	var_57_int = var_19_float + var_56_int; // 0x197 Add
	Sleep(var_57_int, var_20_bool); // 0x198 Func
	var_58_bool = var_20_bool == 0; // 0x19a Not
	if(var_58_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_428; // 0x19c Jump
	
Label_413:
	goto Label_417; // 0x19d Jump
	
Label_414:
	var_59_int = var_15_int; // 0x19e Push
	if(var_59_int == 0) goto Label_417; // 0x19f JumpB
	goto Label_428; // 0x1a0 Jump
}


func_546(var_91_string, var_92_bool)
{
	var_95_bool = 0; var_96_float = 0; var_97_float = 0; var_98_bool = 0; var_99_float = 0; var_100_float = 0; // 0x222 PushV
	lshHasAnimation(var_98_bool, var_91_string); // 0x223 Func
	var_101_bool = var_98_bool; // 0x225 Push
	if(var_101_bool == 0) goto Label_556; // 0x226 JumpB
	lshGetAnimTimes(var_91_string, var_99_float, var_100_float); // 0x227 Func
	lshPlayAnimation(var_99_float, var_100_float, var_92_bool); // 0x229 Func
	goto Label_560; // 0x22b Jump
	
Label_560:
	return 6; // 0x230 Return
	
Label_556:
	var_102_string = "Can't find lsh animation : "; // 0x22c PushS
	var_103_int = var_102_string + var_91_string; // 0x22d Add
	Trace(var_103_int); // 0x22e Func
}


func_635()
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0; // 0x27c PushV
	var_35_object = Obj(); // 0x27d PushV
	func_651(var_35_object); // 0x27e NEW_2
	var_32_object = var_35_object; // 0x27f Mov
	var_33_string = "pt_d4q01_key1_region"; // 0x281 MovS
	var_34_float = 2; // 0x282 MovI
	func_668(var_32_object, var_33_string, var_34_float); // 0x283 NEW_2
	var_55_object = Obj(); // 0x285 PushV
	func_651(var_55_object); // 0x286 NEW_2
	ShowMap(var_55_object); // 0x288 ObjFunc
	return 0; // 0x28a Return
}


func_619()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x26b PushV
	var_16_object = Obj(); // 0x26c PushV
	func_651(var_16_object); // 0x26d NEW_2
	var_15_object = var_16_object; // 0x26e Mov
	var_23_string = "d4q01Whitemask"; // 0x270 PushS
	var_24_string = "pt_d4q01_key1_region"; // 0x271 PushS
	var_25_int = 1; // 0x272 PushI
	var_26_int = 511523; // 0x273 PushI
	var_27_float = 0; // 0x274 PushV
	func_590(var_27_float); // 0x275 NEW_2
	AddMark(var_23_string, var_24_string, var_25_int, var_26_int, var_27_float); // 0x277 ObjFunc
	return 2; // 0x279 Return
}


func_431(var_50_bool)
{
	var_50_bool = 1; // 0x1af MovB
	return 0; // 0x1b0 Return
}


func_561()
{
	var_9_bool = 0; // 0x231 PushV
	func_726(var_9_bool); // 0x232 NEW_2
	if(var_9_bool == 0) goto Label_567; // 0x234 JumpB
	lshStopSpeech(); // 0x235 Func
	
Label_567:
	return 0; // 0x237 Return
}


func_433()
{
	StopAnimation(); // 0x1b1 Func
	StopGroup0(); // 0x1b3 Func
	return 0; // 0x1b5 Return
}


func_438(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1b6 PushV
	IsLoaded(var_23_bool); // 0x1b7 Func
	var_21_bool = var_23_bool; // 0x1b9 Mov
	return 2; // 0x1ba Return
}


func_568(var_46_cvector, var_47_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x238 PushV
	var_51_int = var_47_cvector | var_47_cvector; // 0x239 Or
	var_50_float = sqrt(var_51_int); // 0x23a Sqrt2
	var_52_float = 0.0; // 0x23b PushF
	var_53_bool = var_50_float < var_52_float; // 0x23c LT
	if(var_53_bool == 0) goto Label_576; // 0x23d JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x23e MovV
	return 2; // 0x23f Return
	
Label_576:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x240 Div2
	return 2; // 0x241 Return
}


func_443(var_19_bool, var_21_float)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; // 0x1bb PushV
	GetPosition(var_32_cvector); // 0x1bc ObjFunc
	GetEyesHeight(var_31_float); // 0x1be ObjFunc
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1c0 PushE
	var_40_float = var_40_float + var_31_float; // 0x1c1 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1c2 PopE
	GetPosition(var_33_cvector); // 0x1c3 Func
	GetEyesHeight(var_31_float); // 0x1c5 Func
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1c7 PushE
	var_41_float = var_41_float + var_31_float; // 0x1c8 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1c9 PopE
	var_34_cvector = var_32_cvector - var_33_cvector; // 0x1ca Sub2
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1cb PushE
	var_42_float = 0; // 0x1cc MovI
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1cd PopE
	var_43_int = var_34_cvector | var_34_cvector; // 0x1ce Or
	var_44_float = sqrt(var_43_int); // 0x1cf Sqrt
	var_34_cvector = var_34_cvector / var_34_cvector; // 0x1d0 Div2
	var_35_cvector = -var_34_cvector; // 0x1d1 Neg2
	var_45_float = var_34_cvector * var_21_float; // 0x1d2 Mult
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x1d3 PushV
	var_48_cvector = CVector(0.0, 1.0, 0.0); // 0x1d4 PushVec
	var_47_cvector = var_35_cvector ^ var_48_cvector; // 0x1d5 Xor2
	func_568(var_46_cvector, var_47_cvector); // 0x1d6 NEW_2
	var_54_int = 25; // 0x1d8 PushI
	var_55_float = var_46_cvector * var_54_int; // 0x1d9 Mult
	var_56_int = var_45_float + var_55_float; // 0x1da Add
	var_57_cvector = CVector(0.0, 10.0, 0.0); // 0x1db PushVec
	var_36_cvector = var_56_int - var_57_cvector; // 0x1dc Sub2
	var_37_cvector = var_33_cvector + var_36_cvector; // 0x1dd Add2
	IsOverrideActive(var_38_bool); // 0x1de Func
	var_58_bool = var_38_bool; // 0x1e0 Push
	if(var_58_bool == 0) goto Label_484; // 0x1e1 JumpB
	var_19_bool = 0; // 0x1e2 MovB
	return 18; // 0x1e3 Return
	
Label_484:
	StopWorld(); // 0x1e4 Func
	var_59_bool = 1; // 0x1e6 PushB
	CameraTransit(var_37_cvector, var_35_cvector, var_59_bool); // 0x1e7 Func
	var_60_float = GetByIndex(var_36_cvector, 0); // 0x1e9 PushE
	var_61_float = GetByIndex(var_36_cvector, 2); // 0x1ea PushE
	Rotate(var_60_float, var_61_float); // 0x1eb Func
	var_62_bool = 0; // 0x1ed PushV
	func_726(var_62_bool); // 0x1ee NEW_2
	if(var_62_bool == 0) goto Label_498; // 0x1f0 JumpB
	goto Label_506; // 0x1f1 Jump
	
Label_506:
	CameraWaitForPlayFinish(); // 0x1fa Func
	ResumeWorld(); // 0x1fc Func
	var_19_bool = 1; // 0x1fe MovB
	return 18; // 0x1ff Return
	
Label_498:
	var_63_string = "head"; // 0x1f2 PushS
	HasAnimationTrack(var_39_bool, var_63_string); // 0x1f3 Func
	var_64_bool = var_39_bool; // 0x1f5 Push
	if(var_64_bool == 0) goto Label_506; // 0x1f6 JumpB
	var_65_string = "head"; // 0x1f7 PushS
	LookAsyncCamera(var_65_string); // 0x1f8 Func
}


func_701(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x2bd PushV
	var_74_string = "branch"; // 0x2be PushS
	GetVariable(var_74_string, var_73_int); // 0x2bf Func
	var_75_int = 0; // 0x2c1 PushI
	var_76_bool = var_73_int == var_75_int; // 0x2c2 Eq
	if(var_76_bool == 0) goto Label_711; // 0x2c3 JumpB
	var_71_int = 1; // 0x2c4 MovI
	return 2; // 0x2c5 Return
	
Label_711:
	var_77_int = 1; // 0x2c7 PushI
	var_78_bool = var_73_int == var_77_int; // 0x2c8 Eq
	if(var_78_bool == 0) goto Label_716; // 0x2c9 JumpB
	var_71_int = 2; // 0x2ca MovI
	return 2; // 0x2cb Return
	
Label_716:
	var_71_int = 3; // 0x2cc MovI
	return 2; // 0x2cd Return
}


