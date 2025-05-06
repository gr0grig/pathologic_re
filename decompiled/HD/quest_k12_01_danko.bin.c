task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xcb PushI
	if(var_8_int == 0) goto Label_428; // 0xcc JumpB
	func_762(); // 0xce NEW_2
	var_10_int = 41148; // 0xd0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd1 Eq
	if(var_11_bool == 0) goto Label_216; // 0xd2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd3 PushV
	var_12_object = var_1_object; // 0xd4 MovT
	var_13_object = var_0_object; // 0xd5 MovT
	func_799(); // 0xd6 NEW_2
	
Label_216:
	var_16_int = 43668; // 0xd8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xd9 Eq
	if(var_17_bool == 0) goto Label_224; // 0xda JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdb PushV
	var_18_object = var_1_object; // 0xdc MovT
	var_19_object = var_0_object; // 0xdd MovT
	func_799(); // 0xde NEW_2
	
Label_224:
	var_20_int = 41147; // 0xe0 PushI
	var_21_bool = var_6_int == var_20_int; // 0xe1 Eq
	if(var_21_bool == 0) goto Label_288; // 0xe2 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xe3 PushV
	var_23_object = var_1_object; // 0xe4 MovT
	func_805(var_23_object); // 0xe5 NEW_2
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
	func_817(var_50_object); // 0xf4 NEW_2
	if(var_49_bool == 0) goto Label_252; // 0xf6 JumpB
	var_55_int = 539205; // 0xf7 PushI
	var_56_int = 43669; // 0xf8 PushI
	var_57_int = 41148; // 0xf9 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xfa TObjFunc
	
Label_252:
	var_58_bool = 0; var_59_object = Obj(); // 0xfc PushV
	var_59_object = var_1_object; // 0xfd MovT
	func_817(var_59_object); // 0xfe NEW_2
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
	func_854(var_128_bool); // 0x1a2 NEW_2
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
	func_769(var_14_object); // 0x1cf NEW_2
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
	func_769(var_9_object); // 0x1e4 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_848(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_846(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_850(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_852(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_829(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_769(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_578(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_251_bool = var_17_bool == 0; // 0x3f Not
	if(var_251_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_252_object = Obj(); // 0x46 PushV
	var_252_object = var_8_object; // 0x47 Mov
	func_560(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x301 PushV
	self(var_11_object); // 0x302 Func
	var_9_object = var_11_object; // 0x304 Mov
	return 2; // 0x305 Return
}


func_578(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x242 PushV
	var_88_string = "voice_common"; // 0x243 PushS
	GetVariable(var_88_string, var_86_int); // 0x244 Func
	var_89_int = var_86_int; // 0x246 Push
	if(var_89_int == 0) goto Label_616; // 0x247 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x248 PushV
	var_91_object = var_80_object; // 0x249 Mov
	func_636(var_91_object); // 0x24a NEW_2
	var_120_bool = var_90_bool == 0; // 0x24c Not
	if(var_120_bool == 0) goto Label_598; // 0x24d JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x24e PushV
	var_122_object = var_80_object; // 0x24f Mov
	func_673(var_122_object); // 0x250 NEW_2
	var_156_bool = var_121_bool == 0; // 0x252 Not
	if(var_156_bool == 0) goto Label_598; // 0x253 JumpB
	var_79_bool = 0; // 0x254 MovB
	return 4; // 0x255 Return
	
Label_598:
	var_157_int = 2; // 0x256 PushI
	irand(var_87_int, var_157_int); // 0x257 Func
	var_158_int = var_87_int; // 0x259 Push
	if(var_158_int == 0) goto Label_611; // 0x25a JumpB
	var_159_string = "voice_common"; // 0x25b PushS
	var_160_int = 1; // 0x25c PushI
	var_161_int = var_86_int + var_160_int; // 0x25d Add
	var_162_int = 3; // 0x25e PushI
	var_163_int = var_161_int / var_162_int; // 0x25f Mod
	SetVariable(var_159_string, var_163_int); // 0x260 Func
	goto Label_615; // 0x262 Jump
	
Label_615:
	goto Label_634; // 0x267 Jump
	
Label_634:
	var_79_bool = 1; // 0x27a MovB
	return 4; // 0x27b Return
	
Label_611:
	var_164_string = "voice_common"; // 0x263 PushS
	var_165_int = 0; // 0x264 PushI
	SetVariable(var_164_string, var_165_int); // 0x265 Func
	
Label_616:
	var_166_bool = 0; var_167_object = Obj(); // 0x268 PushV
	var_167_object = var_80_object; // 0x269 Mov
	func_673(var_167_object); // 0x26a NEW_2
	var_168_bool = var_166_bool == 0; // 0x26c Not
	if(var_168_bool == 0) goto Label_630; // 0x26d JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x26e PushV
	var_170_object = var_80_object; // 0x26f Mov
	func_636(var_170_object); // 0x270 NEW_2
	var_171_bool = var_169_bool == 0; // 0x272 Not
	if(var_171_bool == 0) goto Label_630; // 0x273 JumpB
	var_79_bool = 0; // 0x274 MovB
	return 4; // 0x275 Return
	
Label_630:
	var_172_string = "voice_common"; // 0x276 PushS
	var_173_int = 1; // 0x277 PushI
	SetVariable(var_172_string, var_173_int); // 0x278 Func
}


func_775(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x307 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x308 Or
	var_49_float = sqrt(var_50_int); // 0x309 Sqrt2
	var_51_float = 0.0; // 0x30a PushF
	var_52_bool = var_49_float < var_51_float; // 0x30b LT
	if(var_52_bool == 0) goto Label_783; // 0x30c JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x30d MovV
	return 2; // 0x30e Return
	
Label_783:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x30f Div2
	return 2; // 0x310 Return
}


func_716(var_227_string)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x2cc PushV
	lshHasAnimation(var_231_bool, var_227_string); // 0x2cd Func
	var_234_bool = var_231_bool; // 0x2cf Push
	if(var_234_bool == 0) goto Label_727; // 0x2d0 JumpB
	lshGetAnimTimes(var_227_string, var_232_float, var_233_float); // 0x2d1 Func
	var_235_bool = 0; // 0x2d3 PushB
	lshPlayAnimation(var_232_float, var_233_float, var_235_bool); // 0x2d4 Func
	goto Label_731; // 0x2d6 Jump
	
Label_731:
	return 6; // 0x2db Return
	
Label_727:
	var_236_string = "Can't find lsh animation : "; // 0x2d7 PushS
	var_237_int = var_236_string + var_227_string; // 0x2d8 Add
	Trace(var_237_int); // 0x2d9 Func
}


func_846(var_67_int)
{
	var_67_int = 515573; // 0x34e MovI
	return 0; // 0x34f Return
}


func_848(var_66_int)
{
	var_66_int = 504032; // 0x350 MovI
	return 0; // 0x351 Return
}


func_785(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x311 PushV
	GetVariable(var_184_string, var_186_int); // 0x312 Func
	var_183_int = var_186_int; // 0x314 Mov
	return 2; // 0x315 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_150; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_805(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_128; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_180(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 539204; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_817(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 539205; // 0x6b PushI
	var_215_int = 43669; // 0x6c PushI
	var_216_int = 41148; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_bool = 0; var_218_object = Obj(); // 0x70 PushV
	var_218_object = var_1_object; // 0x71 MovT
	func_817(var_218_object); // 0x72 NEW_2
	if(var_217_bool == 0) goto Label_122; // 0x74 JumpB
	var_219_int = 541506; // 0x75 PushI
	var_220_int = 45318; // 0x76 PushI
	var_221_int = 43668; // 0x77 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x78 TObjFunc
	
Label_122:
	var_222_int = 543011; // 0x7a PushI
	var_223_int = -1; // 0x7b PushI
	var_224_int = 45463; // 0x7c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x7d TObjFunc
	goto Label_150; // 0x7f Jump
	
Label_150:
	var_225_bool = 0; // 0x96 PushV
	func_854(var_225_bool); // 0x97 NEW_2
	if(var_225_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_226_string = var_3_string; // 0x9c PushT
	if(var_226_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_227_string = ""; // 0x9f PushV
	var_227_string = var_2_object; // 0xa0 MovT
	func_716(var_227_string); // 0xa1 NEW_2
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_238_string = "all"; // 0xa5 PushS
	var_239_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_238_string, var_239_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_240_string = var_3_string; // 0xab PushT
	if(var_240_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_241_string = "all"; // 0xae PushS
	var_242_string = "idle"; // 0xaf PushS
	PlayAnimation(var_241_string, var_242_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
	
Label_128:
	var_243_string = ""; // 0x80 PushV
	var_243_string = "Neutral"; // 0x81 MovS
	func_180(var_175_object, var_243_string); // 0x82 NEW_2
	var_244_int = 539206; // 0x84 PushI
	SetMessage(var_244_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_245_int = 539207; // 0x89 PushI
	var_246_int = -1; // 0x8a PushI
	var_247_int = 41150; // 0x8b PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x8c TObjFunc
	var_248_int = 541505; // 0x8e PushI
	var_249_int = -1; // 0x8f PushI
	var_250_int = 43667; // 0x90 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
}


func_850(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png"; // 0x352 MovS
	return 0; // 0x353 Return
}


func_852(var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png"; // 0x354 MovS
	return 0; // 0x355 Return
}


func_790(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x316 PushV
	GetGameTime(var_136_float); // 0x317 Func
	var_137_int = 1; // 0x319 PushI
	var_138_int = 0; // 0x31a PushV
	var_139_int = 24; // 0x31b PushI
	var_138_int = var_136_float / var_136_float; // 0x31c Div2
	var_134_int = var_137_int + var_138_int; // 0x31d Add2
	return 2; // 0x31e Return
}


func_854(var_61_bool)
{
	var_61_bool = 1; // 0x356 MovB
	return 0; // 0x357 Return
}


func_732(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x2dc PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x2dd Func
	var_204_bool = var_201_bool; // 0x2df Push
	if(var_204_bool == 0) goto Label_742; // 0x2e0 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x2e1 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x2e3 Func
	goto Label_746; // 0x2e5 Jump
	
Label_746:
	return 6; // 0x2ea Return
	
Label_742:
	var_205_string = "Can't find lsh animation : "; // 0x2e6 PushS
	var_206_int = var_205_string + var_194_string; // 0x2e7 Add
	Trace(var_206_int); // 0x2e8 Func
}


func_799()
{
	var_14_string = "ook12DankoSobor1"; // 0x320 PushS
	var_15_int = 1; // 0x321 PushI
	SetVariable(var_14_string, var_15_int); // 0x322 Func
	return 0; // 0x324 Return
}


func_673(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x2a1 PushV
	var_133_string = "d"; // 0x2a2 PushS
	var_134_int = 0; // 0x2a3 PushV
	func_790(var_134_int); // 0x2a4 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x2a6 Add
	var_141_string = "m"; // 0x2a7 PushS
	var_128_string = var_140_int + var_141_string; // 0x2a8 Add2
	var_129_int = 0; // 0x2a9 MovI
	
Label_682:
	var_142_int = 1; // 0x2aa PushI
	if(var_142_int == 0) goto Label_695; // 0x2ab JumpB
	var_143_int = 1; // 0x2ac PushI
	var_144_int = var_129_int + var_143_int; // 0x2ad Add
	var_145_int = var_128_string + var_144_int; // 0x2ae Add
	HasProperty(var_145_int, var_130_bool); // 0x2af ObjFunc
	var_146_bool = var_130_bool == 0; // 0x2b1 Not
	if(var_146_bool == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_695; // 0x2b3 Jump
	
Label_695:
	var_147_bool = var_129_int == 0; // 0x2b7 Not
	if(var_147_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_121_bool = 0; // 0x2b9 MovB
	return 10; // 0x2ba Return
	
Label_699:
	var_131_int = 0; // 0x2bb MovI
	var_148_int = 1; // 0x2bc PushI
	var_149_bool = var_129_int > var_148_int; // 0x2bd GT
	if(var_149_bool == 0) goto Label_705; // 0x2be JumpB
	irand(var_131_int, var_129_int); // 0x2bf Func
	
Label_705:
	var_150_int = 1; // 0x2c1 PushI
	var_151_int = var_131_int + var_150_int; // 0x2c2 Add
	var_152_int = var_128_string + var_151_int; // 0x2c3 Add
	GetProperty(var_152_int, var_132_string); // 0x2c4 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x2c6 PushV
	var_154_string = var_132_string; // 0x2c7 Mov
	func_747(var_153_bool, var_154_string); // 0x2c8 NEW_2
	var_121_bool = var_153_bool; // 0x2c9 Mov
	return 10; // 0x2cb Return
	
Label_692:
	var_155_int = 1; // 0x2b4 PushI
	var_129_int = var_129_int + var_155_int; // 0x2b5 Add2
	goto Label_682; // 0x2b6 Jump
}


func_805(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x326 PushV
	var_184_string = "game_final"; // 0x327 MovS
	func_785(var_183_int, var_184_string); // 0x328 NEW_2
	var_187_int = 0; // 0x32a PushI
	var_188_bool = var_183_int != var_187_int; // 0x32b Neq
	if(var_188_bool == 0) goto Label_815; // 0x32c JumpB
	var_181_bool = 1; // 0x32d MovB
	return 0; // 0x32e Return
	
Label_815:
	var_181_bool = 0; // 0x32f MovB
	return 0; // 0x330 Return
}


func_489(var_8_bool)
{
	var_8_bool = 1; // 0x1e9 MovB
	return 0; // 0x1ea Return
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
	func_775(var_45_cvector, var_46_cvector); // 0x206 NEW_2
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
	var_58_bool = 1; // 0x216 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x217 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x219 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x21a PushE
	Rotate(var_59_float, var_60_float); // 0x21b Func
	var_61_bool = 0; // 0x21d PushV
	func_854(var_61_bool); // 0x21e NEW_2
	if(var_61_bool == 0) goto Label_546; // 0x220 JumpB
	goto Label_554; // 0x221 Jump
	
Label_554:
	CameraWaitForPlayFinish(); // 0x22a Func
	ResumeWorld(); // 0x22c Func
	var_18_bool = 1; // 0x22e MovB
	return 18; // 0x22f Return
	
Label_546:
	var_62_string = "head"; // 0x222 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x223 Func
	var_63_bool = var_38_bool; // 0x225 Push
	if(var_63_bool == 0) goto Label_554; // 0x226 JumpB
	var_64_string = "head"; // 0x227 PushS
	LookAsyncCamera(var_64_string); // 0x228 Func
}


func_747(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x2eb PushV
	var_117_bool = 0; // 0x2ec PushV
	func_854(var_117_bool); // 0x2ed NEW_2
	if(var_117_bool == 0) goto Label_760; // 0x2ef JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x2f0 Func
	var_118_bool = var_116_bool; // 0x2f2 Push
	if(var_118_bool == 0) goto Label_760; // 0x2f3 JumpB
	lshPlaySpeech(var_114_string); // 0x2f4 Func
	var_113_bool = 1; // 0x2f6 MovB
	return 2; // 0x2f7 Return
	
Label_760:
	var_113_bool = 0; // 0x2f8 MovB
	return 2; // 0x2f9 Return
}


func_560()
{
	var_253_bool = 0; var_254_bool = 0; // 0x230 PushV
	var_255_bool = 1; // 0x231 PushB
	CameraSwitchToNormal(var_255_bool); // 0x232 Func
	var_256_bool = 0; // 0x234 PushV
	func_854(var_256_bool); // 0x235 NEW_2
	if(var_256_bool == 0) goto Label_569; // 0x237 JumpB
	goto Label_577; // 0x238 Jump
	
Label_577:
	return 2; // 0x241 Return
	
Label_569:
	var_257_string = "head"; // 0x239 PushS
	HasAnimationTrack(var_254_bool, var_257_string); // 0x23a Func
	var_258_bool = var_254_bool; // 0x23c Push
	if(var_258_bool == 0) goto Label_577; // 0x23d JumpB
	var_259_string = "head"; // 0x23e PushS
	UnlookAsync(var_259_string); // 0x23f Func
}


func_817(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x332 PushV
	var_211_string = "ook12DankoSobor1"; // 0x333 MovS
	func_785(var_210_int, var_211_string); // 0x334 NEW_2
	var_212_int = 0; // 0x336 PushI
	var_213_bool = var_210_int == var_212_int; // 0x337 Eq
	if(var_213_bool == 0) goto Label_827; // 0x338 JumpB
	var_208_bool = 1; // 0x339 MovB
	return 0; // 0x33a Return
	
Label_827:
	var_208_bool = 0; // 0x33b MovB
	return 0; // 0x33c Return
}


func_180(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xb5 PushV
	func_854(var_191_bool); // 0xb6 NEW_2
	var_192_bool = var_191_bool == 0; // 0xb8 Not
	if(var_192_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_193_bool = var_190_string == var_2_object; // 0xbb Eq
	if(var_193_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_194_string = ""; var_195_bool = 0; // 0xbe PushV
	var_194_string = var_190_string; // 0xbf Mov
	var_196_string = ""; // 0xc0 PushS
	var_197_bool = var_190_string == var_196_string; // 0xc1 Eq
	if(var_197_bool == 0) goto Label_197; // 0xc2 JumpB
	var_195_bool = 0; // 0xc3 MovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	func_732(var_194_string, var_195_bool); // 0xc6 NEW_2
	var_2_object = var_190_string; // 0xc8 TMov
	return 0; // 0xc9 Return
	
Label_197:
	var_195_bool = 1; // 0xc5 MovB
}


func_441()
{
	
Label_441:
	Hold(); // 0x1b9 Func
	goto Label_441; // 0x1bb Jump
}


func_762()
{
	var_9_bool = 0; // 0x2fa PushV
	func_854(var_9_bool); // 0x2fb NEW_2
	if(var_9_bool == 0) goto Label_768; // 0x2fd JumpB
	lshStopSpeech(); // 0x2fe Func
	
Label_768:
	return 0; // 0x300 Return
}


func_636(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x27c PushV
	var_97_string = "c"; // 0x27d MovS
	var_98_int = 0; // 0x27e MovI
	
Label_639:
	var_102_int = 1; // 0x27f PushI
	if(var_102_int == 0) goto Label_652; // 0x280 JumpB
	var_103_int = 1; // 0x281 PushI
	var_104_int = var_98_int + var_103_int; // 0x282 Add
	var_105_int = var_97_string + var_104_int; // 0x283 Add
	HasProperty(var_105_int, var_99_bool); // 0x284 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x286 Not
	if(var_106_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_652; // 0x288 Jump
	
Label_652:
	var_107_bool = var_98_int == 0; // 0x28c Not
	if(var_107_bool == 0) goto Label_656; // 0x28d JumpB
	var_90_bool = 0; // 0x28e MovB
	return 10; // 0x28f Return
	
Label_656:
	var_100_int = 0; // 0x290 MovI
	var_108_int = 1; // 0x291 PushI
	var_109_bool = var_98_int > var_108_int; // 0x292 GT
	if(var_109_bool == 0) goto Label_662; // 0x293 JumpB
	irand(var_100_int, var_98_int); // 0x294 Func
	
Label_662:
	var_110_int = 1; // 0x296 PushI
	var_111_int = var_100_int + var_110_int; // 0x297 Add
	var_112_int = var_97_string + var_111_int; // 0x298 Add
	GetProperty(var_112_int, var_101_string); // 0x299 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x29b PushV
	var_114_string = var_101_string; // 0x29c Mov
	func_747(var_113_bool, var_114_string); // 0x29d NEW_2
	var_90_bool = var_113_bool; // 0x29e Mov
	return 10; // 0x2a0 Return
	
Label_649:
	var_119_int = 1; // 0x289 PushI
	var_98_int = var_98_int + var_119_int; // 0x28a Add2
	goto Label_639; // 0x28b Jump
}


func_829(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x33d PushV
	var_73_string = "branch"; // 0x33e PushS
	GetVariable(var_73_string, var_72_int); // 0x33f Func
	var_74_int = 0; // 0x341 PushI
	var_75_bool = var_72_int == var_74_int; // 0x342 Eq
	if(var_75_bool == 0) goto Label_839; // 0x343 JumpB
	var_70_int = 1; // 0x344 MovI
	return 2; // 0x345 Return
	
Label_839:
	var_76_int = 1; // 0x347 PushI
	var_77_bool = var_72_int == var_76_int; // 0x348 Eq
	if(var_77_bool == 0) goto Label_844; // 0x349 JumpB
	var_70_int = 2; // 0x34a MovI
	return 2; // 0x34b Return
	
Label_844:
	var_70_int = 3; // 0x34c MovI
	return 2; // 0x34d Return
}


