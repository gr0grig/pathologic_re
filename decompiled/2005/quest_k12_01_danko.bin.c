task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xcb PushI
	if(var_8_int == 0) goto Label_428; // 0xcc JumpB
	func_760(); // 0xce NEW_2
	var_10_int = 41148; // 0xd0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd1 Eq
	if(var_11_bool == 0) goto Label_216; // 0xd2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd3 PushV
	var_12_object = var_1_object; // 0xd4 MovT
	var_13_object = var_0_object; // 0xd5 MovT
	func_797(); // 0xd6 NEW_2
	
Label_216:
	var_16_int = 43668; // 0xd8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xd9 Eq
	if(var_17_bool == 0) goto Label_224; // 0xda JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdb PushV
	var_18_object = var_1_object; // 0xdc MovT
	var_19_object = var_0_object; // 0xdd MovT
	func_797(); // 0xde NEW_2
	
Label_224:
	var_20_int = 41147; // 0xe0 PushI
	var_21_bool = var_6_int == var_20_int; // 0xe1 Eq
	if(var_21_bool == 0) goto Label_288; // 0xe2 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xe3 PushV
	var_23_object = var_1_object; // 0xe4 MovT
	func_803(var_23_object); // 0xe5 NEW_2
	var_30_bool = var_22_bool == 0; // 0xe7 Not
	if(var_30_bool == 0) goto Label_268; // 0xe8 JumpB
	var_31_string = ""; // 0xe9 PushV
	var_31_string = "Neutral"; // 0xea MovS
	func_180(var_7_bool, var_31_string); // 0xeb NEW_2
	var_48_int = 539204; // 0xed PushI
	SetMessage(var_48_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_49_bool = 0; var_50_object = Obj(); // 0xf2 PushV
	var_50_object = var_1_object; // 0xf3 MovT
	func_815(var_50_object); // 0xf4 NEW_2
	if(var_49_bool == 0) goto Label_252; // 0xf6 JumpB
	var_55_int = 539205; // 0xf7 PushI
	var_56_int = 43669; // 0xf8 PushI
	var_57_int = 41148; // 0xf9 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xfa TObjFunc
	
Label_252:
	var_58_bool = 0; var_59_object = Obj(); // 0xfc PushV
	var_59_object = var_1_object; // 0xfd MovT
	func_815(var_59_object); // 0xfe NEW_2
	if(var_58_bool == 0) goto Label_262; // 0x100 JumpB
	var_60_int = 541506; // 0x101 PushI
	var_61_int = 45318; // 0x102 PushI
	var_62_int = 43668; // 0x103 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x104 TObjFunc
	
Label_262:
	var_63_int = 543011; // 0x106 PushI
	var_64_int = -1; // 0x107 PushI
	var_65_int = 45463; // 0x108 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_66_string = ""; // 0x10c PushV
	var_66_string = "Neutral"; // 0x10d MovS
	func_180(var_7_bool, var_66_string); // 0x10e NEW_2
	var_67_int = 539206; // 0x110 PushI
	SetMessage(var_67_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_68_int = 539207; // 0x115 PushI
	var_69_int = -1; // 0x116 PushI
	var_70_int = 41150; // 0x117 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x118 TObjFunc
	var_71_int = 541505; // 0x11a PushI
	var_72_int = -1; // 0x11b PushI
	var_73_int = 43667; // 0x11c PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_74_int = 43669; // 0x120 PushI
	var_75_bool = var_6_int == var_74_int; // 0x121 Eq
	if(var_75_bool == 0) goto Label_311; // 0x122 JumpB
	var_76_string = ""; // 0x123 PushV
	var_76_string = "Neutral"; // 0x124 MovS
	func_180(var_7_bool, var_76_string); // 0x125 NEW_2
	var_77_int = 541507; // 0x127 PushI
	SetMessage(var_77_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_78_int = 541508; // 0x12c PushI
	var_79_int = 43671; // 0x12d PushI
	var_80_int = 43670; // 0x12e PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x12f TObjFunc
	var_81_int = 541510; // 0x131 PushI
	var_82_int = 43673; // 0x132 PushI
	var_83_int = 43672; // 0x133 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_84_int = 43671; // 0x137 PushI
	var_85_bool = var_6_int == var_84_int; // 0x138 Eq
	if(var_85_bool == 0) goto Label_329; // 0x139 JumpB
	var_86_string = ""; // 0x13a PushV
	var_86_string = "Sorrow"; // 0x13b MovS
	func_180(var_7_bool, var_86_string); // 0x13c NEW_2
	var_87_int = 541509; // 0x13e PushI
	SetMessage(var_87_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_88_int = 541513; // 0x143 PushI
	var_89_int = 43673; // 0x144 PushI
	var_90_int = 43675; // 0x145 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_91_int = 43673; // 0x149 PushI
	var_92_bool = var_6_int == var_91_int; // 0x14a Eq
	if(var_92_bool == 0) goto Label_352; // 0x14b JumpB
	var_93_string = ""; // 0x14c PushV
	var_93_string = "Sorrow"; // 0x14d MovS
	func_180(var_7_bool, var_93_string); // 0x14e NEW_2
	var_94_int = 541511; // 0x150 PushI
	SetMessage(var_94_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_95_int = 541512; // 0x155 PushI
	var_96_int = 45318; // 0x156 PushI
	var_97_int = 43674; // 0x157 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x158 TObjFunc
	var_98_int = 541514; // 0x15a PushI
	var_99_int = 45318; // 0x15b PushI
	var_100_int = 43677; // 0x15c PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_101_int = 45318; // 0x160 PushI
	var_102_bool = var_6_int == var_101_int; // 0x161 Eq
	if(var_102_bool == 0) goto Label_375; // 0x162 JumpB
	var_103_string = ""; // 0x163 PushV
	var_103_string = "Neutral"; // 0x164 MovS
	func_180(var_7_bool, var_103_string); // 0x165 NEW_2
	var_104_int = 542892; // 0x167 PushI
	SetMessage(var_104_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_105_int = 542893; // 0x16c PushI
	var_106_int = -1; // 0x16d PushI
	var_107_int = 45319; // 0x16e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x16f TObjFunc
	var_108_int = 542894; // 0x171 PushI
	var_109_int = 45323; // 0x172 PushI
	var_110_int = 45320; // 0x173 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_111_int = 45323; // 0x177 PushI
	var_112_bool = var_6_int == var_111_int; // 0x178 Eq
	if(var_112_bool == 0) goto Label_393; // 0x179 JumpB
	var_113_string = ""; // 0x17a PushV
	var_113_string = "Neutral"; // 0x17b MovS
	func_180(var_7_bool, var_113_string); // 0x17c NEW_2
	var_114_int = 542895; // 0x17e PushI
	SetMessage(var_114_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_115_int = 542896; // 0x183 PushI
	var_116_int = 45325; // 0x184 PushI
	var_117_int = 45324; // 0x185 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_118_int = 45325; // 0x189 PushI
	var_119_bool = var_6_int == var_118_int; // 0x18a Eq
	if(var_119_bool == 0) goto Label_416; // 0x18b JumpB
	var_120_string = ""; // 0x18c PushV
	var_120_string = "Neutral"; // 0x18d MovS
	func_180(var_7_bool, var_120_string); // 0x18e NEW_2
	var_121_int = 542897; // 0x190 PushI
	SetMessage(var_121_int); // 0x191 TObjFunc
	ClearReplies(); // 0x193 TObjFunc
	var_122_int = 542899; // 0x195 PushI
	var_123_int = -1; // 0x196 PushI
	var_124_int = 45328; // 0x197 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x198 TObjFunc
	var_125_int = 542900; // 0x19a PushI
	var_126_int = -1; // 0x19b PushI
	var_127_int = 45329; // 0x19c PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_3_string = 1; // 0x1a0 TMovB
	var_128_bool = 0; // 0x1a1 PushV
	func_852(var_128_bool); // 0x1a2 NEW_2
	if(var_128_bool == 0) goto Label_424; // 0x1a4 JumpB
	lshStopAnimation(); // 0x1a5 Func
	goto Label_426; // 0x1a7 Jump
	
Label_426:
	return 0; // 0x1aa Return
	
Label_424:
	StopAnimation(); // 0x1a8 Func
	
Label_428:
	return 0; // 0x1ac Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1b2 PushV
	var_8_object = var_6_object; // 0x1b3 Mov
	TaskCall(0); // 0x1b4 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1b5 NEW_2
	TaskReturn(); // 0x1b6 TaskReturn
	return 0; // 0x1b8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1bd PushV
	var_9_string = "cleanup"; // 0x1be PushS
	var_10_bool = var_6_string == var_9_string; // 0x1bf Eq
	if(var_10_bool == 0) goto Label_468; // 0x1c0 JumpB
	var_0_object = 1; // 0x1c1 TMovB
	IsLoaded(var_8_bool); // 0x1c2 Func
	var_11_bool = 0; // 0x1c4 PushV
	var_11_bool = 0; // 0x1c5 MovB
	var_12_bool = var_8_bool == 0; // 0x1c6 Not
	if(var_12_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_13_bool = 0; // 0x1c8 PushV
	func_489(var_13_bool); // 0x1c9 NEW_2
	if(var_13_bool == 0) goto Label_461; // 0x1cb JumpB
	var_11_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_11_bool == 0) goto Label_467; // 0x1cd JumpB
	var_14_object = Obj(); // 0x1ce PushV
	func_767(var_14_object); // 0x1cf NEW_2
	RemoveActor(var_14_object); // 0x1d1 Func
	
Label_467:
	goto Label_472; // 0x1d3 Jump
	
Label_472:
	return 2; // 0x1d8 Return
	
Label_468:
	var_17_string = "restore"; // 0x1d4 PushS
	var_18_bool = var_6_string == var_17_string; // 0x1d5 Eq
	if(var_18_bool == 0) goto Label_472; // 0x1d6 JumpB
	var_0_object = 0; // 0x1d7 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1d9 PushV
	var_6_bool = 0; // 0x1da MovB
	var_7_object = var_0_object; // 0x1db PushT
	if(var_7_object == 0) goto Label_482; // 0x1dc JumpB
	var_8_bool = 0; // 0x1dd PushV
	func_489(var_8_bool); // 0x1de NEW_2
	if(var_8_bool == 0) goto Label_482; // 0x1e0 JumpB
	var_6_bool = 1; // 0x1e1 MovB
	
Label_482:
	if(var_6_bool == 0) goto Label_488; // 0x1e2 JumpB
	var_9_object = Obj(); // 0x1e3 PushV
	func_767(var_9_object); // 0x1e4 NEW_2
	RemoveActor(var_9_object); // 0x1e6 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_441(); // 0x1ae NEW_2
	return 0; // 0x1b0 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_491(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_846(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_844(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_848(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_850(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_827(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_767(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_576(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_250_bool = var_17_bool == 0; // 0x3f Not
	if(var_250_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_251_object = Obj(); // 0x46 PushV
	var_251_object = var_8_object; // 0x47 Mov
	func_559(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_576(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x240 PushV
	var_87_string = "voice_common"; // 0x241 PushS
	GetVariable(var_87_string, var_85_int); // 0x242 Func
	var_88_int = var_85_int; // 0x244 Push
	if(var_88_int == 0) goto Label_614; // 0x245 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x246 PushV
	var_90_object = var_79_object; // 0x247 Mov
	func_634(var_90_object); // 0x248 NEW_2
	var_119_bool = var_89_bool == 0; // 0x24a Not
	if(var_119_bool == 0) goto Label_596; // 0x24b JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x24c PushV
	var_121_object = var_79_object; // 0x24d Mov
	func_671(var_121_object); // 0x24e NEW_2
	var_155_bool = var_120_bool == 0; // 0x250 Not
	if(var_155_bool == 0) goto Label_596; // 0x251 JumpB
	var_78_bool = 0; // 0x252 MovB
	return 4; // 0x253 Return
	
Label_596:
	var_156_int = 2; // 0x254 PushI
	irand(var_86_int, var_156_int); // 0x255 Func
	var_157_int = var_86_int; // 0x257 Push
	if(var_157_int == 0) goto Label_609; // 0x258 JumpB
	var_158_string = "voice_common"; // 0x259 PushS
	var_159_int = 1; // 0x25a PushI
	var_160_int = var_85_int + var_159_int; // 0x25b Add
	var_161_int = 3; // 0x25c PushI
	var_162_int = var_160_int / var_161_int; // 0x25d Mod
	SetVariable(var_158_string, var_162_int); // 0x25e Func
	goto Label_613; // 0x260 Jump
	
Label_613:
	goto Label_632; // 0x265 Jump
	
Label_632:
	var_78_bool = 1; // 0x278 MovB
	return 4; // 0x279 Return
	
Label_609:
	var_163_string = "voice_common"; // 0x261 PushS
	var_164_int = 0; // 0x262 PushI
	SetVariable(var_163_string, var_164_int); // 0x263 Func
	
Label_614:
	var_165_bool = 0; var_166_object = Obj(); // 0x266 PushV
	var_166_object = var_79_object; // 0x267 Mov
	func_671(var_166_object); // 0x268 NEW_2
	var_167_bool = var_165_bool == 0; // 0x26a Not
	if(var_167_bool == 0) goto Label_628; // 0x26b JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x26c PushV
	var_169_object = var_79_object; // 0x26d Mov
	func_634(var_169_object); // 0x26e NEW_2
	var_170_bool = var_168_bool == 0; // 0x270 Not
	if(var_170_bool == 0) goto Label_628; // 0x271 JumpB
	var_78_bool = 0; // 0x272 MovB
	return 4; // 0x273 Return
	
Label_628:
	var_171_string = "voice_common"; // 0x274 PushS
	var_172_int = 1; // 0x275 PushI
	SetVariable(var_171_string, var_172_int); // 0x276 Func
}


func_773(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x305 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x306 Or
	var_49_float = sqrt(var_50_int); // 0x307 Sqrt2
	var_51_float = 0.0; // 0x308 PushF
	var_52_bool = var_49_float < var_51_float; // 0x309 LT
	if(var_52_bool == 0) goto Label_781; // 0x30a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x30b MovV
	return 2; // 0x30c Return
	
Label_781:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x30d Div2
	return 2; // 0x30e Return
}


func_714(var_226_string)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x2ca PushV
	lshHasAnimation(var_230_bool, var_226_string); // 0x2cb Func
	var_233_bool = var_230_bool; // 0x2cd Push
	if(var_233_bool == 0) goto Label_725; // 0x2ce JumpB
	lshGetAnimTimes(var_226_string, var_231_float, var_232_float); // 0x2cf Func
	var_234_bool = 0; // 0x2d1 PushB
	lshPlayAnimation(var_231_float, var_232_float, var_234_bool); // 0x2d2 Func
	goto Label_729; // 0x2d4 Jump
	
Label_729:
	return 6; // 0x2d9 Return
	
Label_725:
	var_235_string = "Can't find lsh animation : "; // 0x2d5 PushS
	var_236_int = var_235_string + var_226_string; // 0x2d6 Add
	Trace(var_236_int); // 0x2d7 Func
}


func_844(var_66_int)
{
	var_66_int = 515573; // 0x34c MovI
	return 0; // 0x34d Return
}


func_846(var_65_int)
{
	var_65_int = 504032; // 0x34e MovI
	return 0; // 0x34f Return
}


func_783(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x30f PushV
	GetVariable(var_183_string, var_185_int); // 0x310 Func
	var_182_int = var_185_int; // 0x312 Mov
	return 2; // 0x313 Return
}


func_848(var_67_string)
{
	var_67_string = "ui/NPC_Bakalavr.png"; // 0x350 MovS
	return 0; // 0x351 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_150; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_803(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_128; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_180(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 539204; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_815(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 539205; // 0x6b PushI
	var_214_int = 43669; // 0x6c PushI
	var_215_int = 41148; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_bool = 0; var_217_object = Obj(); // 0x70 PushV
	var_217_object = var_1_object; // 0x71 MovT
	func_815(var_217_object); // 0x72 NEW_2
	if(var_216_bool == 0) goto Label_122; // 0x74 JumpB
	var_218_int = 541506; // 0x75 PushI
	var_219_int = 45318; // 0x76 PushI
	var_220_int = 43668; // 0x77 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x78 TObjFunc
	
Label_122:
	var_221_int = 543011; // 0x7a PushI
	var_222_int = -1; // 0x7b PushI
	var_223_int = 45463; // 0x7c PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x7d TObjFunc
	goto Label_150; // 0x7f Jump
	
Label_150:
	var_224_bool = 0; // 0x96 PushV
	func_852(var_224_bool); // 0x97 NEW_2
	if(var_224_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_225_string = var_3_string; // 0x9c PushT
	if(var_225_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_226_string = ""; // 0x9f PushV
	var_226_string = var_2_object; // 0xa0 MovT
	func_714(var_226_string); // 0xa1 NEW_2
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_237_string = "all"; // 0xa5 PushS
	var_238_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_237_string, var_238_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_239_string = var_3_string; // 0xab PushT
	if(var_239_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_240_string = "all"; // 0xae PushS
	var_241_string = "idle"; // 0xaf PushS
	PlayAnimation(var_240_string, var_241_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
	
Label_128:
	var_242_string = ""; // 0x80 PushV
	var_242_string = "Neutral"; // 0x81 MovS
	func_180(var_174_object, var_242_string); // 0x82 NEW_2
	var_243_int = 539206; // 0x84 PushI
	SetMessage(var_243_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_244_int = 539207; // 0x89 PushI
	var_245_int = -1; // 0x8a PushI
	var_246_int = 41150; // 0x8b PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x8c TObjFunc
	var_247_int = 541505; // 0x8e PushI
	var_248_int = -1; // 0x8f PushI
	var_249_int = 43667; // 0x90 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
}


func_850(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr_b.png"; // 0x352 MovS
	return 0; // 0x353 Return
}


func_788(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x314 PushV
	GetGameTime(var_135_float); // 0x315 Func
	var_136_int = 1; // 0x317 PushI
	var_137_int = 0; // 0x318 PushV
	var_138_int = 24; // 0x319 PushI
	var_137_int = var_135_float / var_135_float; // 0x31a Div2
	var_133_int = var_136_int + var_137_int; // 0x31b Add2
	return 2; // 0x31c Return
}


func_852(var_60_bool)
{
	var_60_bool = 1; // 0x354 MovB
	return 0; // 0x355 Return
}


func_730(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x2da PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x2db Func
	var_203_bool = var_200_bool; // 0x2dd Push
	if(var_203_bool == 0) goto Label_740; // 0x2de JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x2df Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x2e1 Func
	goto Label_744; // 0x2e3 Jump
	
Label_744:
	return 6; // 0x2e8 Return
	
Label_740:
	var_204_string = "Can't find lsh animation : "; // 0x2e4 PushS
	var_205_int = var_204_string + var_193_string; // 0x2e5 Add
	Trace(var_205_int); // 0x2e6 Func
}


func_797()
{
	var_14_string = "ook12DankoSobor1"; // 0x31e PushS
	var_15_int = 1; // 0x31f PushI
	SetVariable(var_14_string, var_15_int); // 0x320 Func
	return 0; // 0x322 Return
}


func_671(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x29f PushV
	var_132_string = "d"; // 0x2a0 PushS
	var_133_int = 0; // 0x2a1 PushV
	func_788(var_133_int); // 0x2a2 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2a4 Add
	var_140_string = "m"; // 0x2a5 PushS
	var_127_string = var_139_int + var_140_string; // 0x2a6 Add2
	var_128_int = 0; // 0x2a7 MovI
	
Label_680:
	var_141_int = 1; // 0x2a8 PushI
	if(var_141_int == 0) goto Label_693; // 0x2a9 JumpB
	var_142_int = 1; // 0x2aa PushI
	var_143_int = var_128_int + var_142_int; // 0x2ab Add
	var_144_int = var_127_string + var_143_int; // 0x2ac Add
	HasProperty(var_144_int, var_129_bool); // 0x2ad ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2af Not
	if(var_145_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_693; // 0x2b1 Jump
	
Label_693:
	var_146_bool = var_128_int == 0; // 0x2b5 Not
	if(var_146_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_120_bool = 0; // 0x2b7 MovB
	return 10; // 0x2b8 Return
	
Label_697:
	var_130_int = 0; // 0x2b9 MovI
	var_147_int = 1; // 0x2ba PushI
	var_148_bool = var_128_int > var_147_int; // 0x2bb GT
	if(var_148_bool == 0) goto Label_703; // 0x2bc JumpB
	irand(var_130_int, var_128_int); // 0x2bd Func
	
Label_703:
	var_149_int = 1; // 0x2bf PushI
	var_150_int = var_130_int + var_149_int; // 0x2c0 Add
	var_151_int = var_127_string + var_150_int; // 0x2c1 Add
	GetProperty(var_151_int, var_131_string); // 0x2c2 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x2c4 PushV
	var_153_string = var_131_string; // 0x2c5 Mov
	func_745(var_152_bool, var_153_string); // 0x2c6 NEW_2
	var_120_bool = var_152_bool; // 0x2c7 Mov
	return 10; // 0x2c9 Return
	
Label_690:
	var_154_int = 1; // 0x2b2 PushI
	var_128_int = var_128_int + var_154_int; // 0x2b3 Add2
	goto Label_680; // 0x2b4 Jump
}


func_803(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x324 PushV
	var_183_string = "game_final"; // 0x325 MovS
	func_783(var_182_int, var_183_string); // 0x326 NEW_2
	var_186_int = 0; // 0x328 PushI
	var_187_bool = var_182_int != var_186_int; // 0x329 Neq
	if(var_187_bool == 0) goto Label_813; // 0x32a JumpB
	var_180_bool = 1; // 0x32b MovB
	return 0; // 0x32c Return
	
Label_813:
	var_180_bool = 0; // 0x32d MovB
	return 0; // 0x32e Return
}


func_489(var_8_bool)
{
	var_8_bool = 1; // 0x1e9 MovB
	return 0; // 0x1ea Return
}


func_745(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x2e9 PushV
	var_116_bool = 0; // 0x2ea PushV
	func_852(var_116_bool); // 0x2eb NEW_2
	if(var_116_bool == 0) goto Label_758; // 0x2ed JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x2ee Func
	var_117_bool = var_115_bool; // 0x2f0 Push
	if(var_117_bool == 0) goto Label_758; // 0x2f1 JumpB
	lshPlaySpeech(var_113_string); // 0x2f2 Func
	var_112_bool = 1; // 0x2f4 MovB
	return 2; // 0x2f5 Return
	
Label_758:
	var_112_bool = 0; // 0x2f6 MovB
	return 2; // 0x2f7 Return
}


func_491(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1eb PushV
	GetPosition(var_31_cvector); // 0x1ec ObjFunc
	GetEyesHeight(var_30_float); // 0x1ee ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1f0 PushE
	var_39_float = var_39_float + var_30_float; // 0x1f1 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1f2 PopE
	GetPosition(var_32_cvector); // 0x1f3 Func
	GetEyesHeight(var_30_float); // 0x1f5 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1f7 PushE
	var_40_float = var_40_float + var_30_float; // 0x1f8 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1f9 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1fa Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1fb PushE
	var_41_float = 0; // 0x1fc MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1fd PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1fe Or
	var_43_float = sqrt(var_42_int); // 0x1ff Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x200 Div2
	var_34_cvector = -var_33_cvector; // 0x201 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x202 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x203 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x204 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x205 Xor2
	func_773(var_45_cvector, var_46_cvector); // 0x206 NEW_2
	var_53_int = 25; // 0x208 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x209 Mult
	var_55_int = var_44_float + var_54_float; // 0x20a Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x20b PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x20c Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x20d Add2
	IsOverrideActive(var_37_bool); // 0x20e Func
	var_57_bool = var_37_bool; // 0x210 Push
	if(var_57_bool == 0) goto Label_532; // 0x211 JumpB
	var_18_bool = 0; // 0x212 MovB
	return 18; // 0x213 Return
	
Label_532:
	StopWorld(); // 0x214 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x216 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x218 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x219 PushE
	Rotate(var_58_float, var_59_float); // 0x21a Func
	var_60_bool = 0; // 0x21c PushV
	func_852(var_60_bool); // 0x21d NEW_2
	if(var_60_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_553; // 0x220 Jump
	
Label_553:
	CameraWaitForPlayFinish(); // 0x229 Func
	ResumeWorld(); // 0x22b Func
	var_18_bool = 1; // 0x22d MovB
	return 18; // 0x22e Return
	
Label_545:
	var_61_string = "head"; // 0x221 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x222 Func
	var_62_bool = var_38_bool; // 0x224 Push
	if(var_62_bool == 0) goto Label_553; // 0x225 JumpB
	var_63_string = "head"; // 0x226 PushS
	LookAsyncCamera(var_63_string); // 0x227 Func
}


func_559()
{
	var_252_bool = 0; var_253_bool = 0; // 0x22f PushV
	CameraSwitchToNormal(); // 0x230 Func
	var_254_bool = 0; // 0x232 PushV
	func_852(var_254_bool); // 0x233 NEW_2
	if(var_254_bool == 0) goto Label_567; // 0x235 JumpB
	goto Label_575; // 0x236 Jump
	
Label_575:
	return 2; // 0x23f Return
	
Label_567:
	var_255_string = "head"; // 0x237 PushS
	HasAnimationTrack(var_253_bool, var_255_string); // 0x238 Func
	var_256_bool = var_253_bool; // 0x23a Push
	if(var_256_bool == 0) goto Label_575; // 0x23b JumpB
	var_257_string = "head"; // 0x23c PushS
	UnlookAsync(var_257_string); // 0x23d Func
}


func_815(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x330 PushV
	var_210_string = "ook12DankoSobor1"; // 0x331 MovS
	func_783(var_209_int, var_210_string); // 0x332 NEW_2
	var_211_int = 0; // 0x334 PushI
	var_212_bool = var_209_int == var_211_int; // 0x335 Eq
	if(var_212_bool == 0) goto Label_825; // 0x336 JumpB
	var_207_bool = 1; // 0x337 MovB
	return 0; // 0x338 Return
	
Label_825:
	var_207_bool = 0; // 0x339 MovB
	return 0; // 0x33a Return
}


func_180(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xb5 PushV
	func_852(var_190_bool); // 0xb6 NEW_2
	var_191_bool = var_190_bool == 0; // 0xb8 Not
	if(var_191_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_192_bool = var_189_string == var_2_object; // 0xbb Eq
	if(var_192_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_193_string = ""; var_194_bool = 0; // 0xbe PushV
	var_193_string = var_189_string; // 0xbf Mov
	var_195_string = ""; // 0xc0 PushS
	var_196_bool = var_189_string == var_195_string; // 0xc1 Eq
	if(var_196_bool == 0) goto Label_197; // 0xc2 JumpB
	var_194_bool = 0; // 0xc3 MovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	func_730(var_193_string, var_194_bool); // 0xc6 NEW_2
	var_2_object = var_189_string; // 0xc8 TMov
	return 0; // 0xc9 Return
	
Label_197:
	var_194_bool = 1; // 0xc5 MovB
}


func_760()
{
	var_9_bool = 0; // 0x2f8 PushV
	func_852(var_9_bool); // 0x2f9 NEW_2
	if(var_9_bool == 0) goto Label_766; // 0x2fb JumpB
	lshStopSpeech(); // 0x2fc Func
	
Label_766:
	return 0; // 0x2fe Return
}


func_441()
{
	
Label_441:
	Hold(); // 0x1b9 Func
	goto Label_441; // 0x1bb Jump
}


func_634(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x27a PushV
	var_96_string = "c"; // 0x27b MovS
	var_97_int = 0; // 0x27c MovI
	
Label_637:
	var_101_int = 1; // 0x27d PushI
	if(var_101_int == 0) goto Label_650; // 0x27e JumpB
	var_102_int = 1; // 0x27f PushI
	var_103_int = var_97_int + var_102_int; // 0x280 Add
	var_104_int = var_96_string + var_103_int; // 0x281 Add
	HasProperty(var_104_int, var_98_bool); // 0x282 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x284 Not
	if(var_105_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_650; // 0x286 Jump
	
Label_650:
	var_106_bool = var_97_int == 0; // 0x28a Not
	if(var_106_bool == 0) goto Label_654; // 0x28b JumpB
	var_89_bool = 0; // 0x28c MovB
	return 10; // 0x28d Return
	
Label_654:
	var_99_int = 0; // 0x28e MovI
	var_107_int = 1; // 0x28f PushI
	var_108_bool = var_97_int > var_107_int; // 0x290 GT
	if(var_108_bool == 0) goto Label_660; // 0x291 JumpB
	irand(var_99_int, var_97_int); // 0x292 Func
	
Label_660:
	var_109_int = 1; // 0x294 PushI
	var_110_int = var_99_int + var_109_int; // 0x295 Add
	var_111_int = var_96_string + var_110_int; // 0x296 Add
	GetProperty(var_111_int, var_100_string); // 0x297 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x299 PushV
	var_113_string = var_100_string; // 0x29a Mov
	func_745(var_112_bool, var_113_string); // 0x29b NEW_2
	var_89_bool = var_112_bool; // 0x29c Mov
	return 10; // 0x29e Return
	
Label_647:
	var_118_int = 1; // 0x287 PushI
	var_97_int = var_97_int + var_118_int; // 0x288 Add2
	goto Label_637; // 0x289 Jump
}


func_827(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x33b PushV
	var_72_string = "branch"; // 0x33c PushS
	GetVariable(var_72_string, var_71_int); // 0x33d Func
	var_73_int = 0; // 0x33f PushI
	var_74_bool = var_71_int == var_73_int; // 0x340 Eq
	if(var_74_bool == 0) goto Label_837; // 0x341 JumpB
	var_69_int = 1; // 0x342 MovI
	return 2; // 0x343 Return
	
Label_837:
	var_75_int = 1; // 0x345 PushI
	var_76_bool = var_71_int == var_75_int; // 0x346 Eq
	if(var_76_bool == 0) goto Label_842; // 0x347 JumpB
	var_69_int = 2; // 0x348 MovI
	return 2; // 0x349 Return
	
Label_842:
	var_69_int = 3; // 0x34a MovI
	return 2; // 0x34b Return
}


func_767(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2ff PushV
	self(var_11_object); // 0x300 Func
	var_9_object = var_11_object; // 0x302 Mov
	return 2; // 0x303 Return
}


