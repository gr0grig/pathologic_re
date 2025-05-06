task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb9 PushI
	if(var_8_int == 0) goto Label_382; // 0xba JumpB
	func_698(); // 0xbc NEW_2
	var_10_int = 19069; // 0xbe PushI
	var_11_bool = var_7_bool == var_10_int; // 0xbf Eq
	if(var_11_bool == 0) goto Label_203; // 0xc0 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc1 PushV
	var_12_object = var_1_object; // 0xc2 MovT
	var_13_object = var_0_object; // 0xc3 MovT
	func_791(); // 0xc4 NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xc6 PushV
	var_16_object = var_1_object; // 0xc7 MovT
	var_17_object = var_0_object; // 0xc8 MovT
	func_803(var_17_object); // 0xc9 NEW_2
	
Label_203:
	var_40_int = 20869; // 0xcb PushI
	var_41_bool = var_7_bool == var_40_int; // 0xcc Eq
	if(var_41_bool == 0) goto Label_211; // 0xcd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xce PushV
	var_42_object = var_1_object; // 0xcf MovT
	var_43_object = var_0_object; // 0xd0 MovT
	func_797(); // 0xd1 NEW_2
	
Label_211:
	var_46_int = 19068; // 0xd3 PushI
	var_47_bool = var_6_int == var_46_int; // 0xd4 Eq
	if(var_47_bool == 0) goto Label_264; // 0xd5 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xd6 PushV
	var_49_object = var_1_object; // 0xd7 MovT
	func_842(var_49_object); // 0xd8 NEW_2
	if(var_48_bool == 0) goto Label_239; // 0xda JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xdb PushV
	var_56_object = var_1_object; // 0xdc MovT
	var_57_object = var_0_object; // 0xdd MovT
	func_824(); // 0xde NEW_2
	var_60_string = ""; // 0xe0 PushV
	var_60_string = "Neutral"; // 0xe1 MovS
	func_162(var_7_bool, var_60_string); // 0xe2 NEW_2
	var_77_int = 517930; // 0xe4 PushI
	SetMessage(var_77_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_78_int = 519691; // 0xe9 PushI
	var_79_int = 20850; // 0xea PushI
	var_80_int = 20849; // 0xeb PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_81_string = ""; // 0xef PushV
	var_81_string = "Neutral"; // 0xf0 MovS
	func_162(var_7_bool, var_81_string); // 0xf1 NEW_2
	var_82_int = 517932; // 0xf3 PushI
	SetMessage(var_82_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_83_bool = 0; var_84_object = Obj(); // 0xf8 PushV
	var_84_object = var_1_object; // 0xf9 MovT
	func_830(var_84_object); // 0xfa NEW_2
	if(var_83_bool == 0) goto Label_258; // 0xfc JumpB
	var_89_int = 519710; // 0xfd PushI
	var_90_int = 20870; // 0xfe PushI
	var_91_int = 20869; // 0xff PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x100 TObjFunc
	
Label_258:
	var_92_int = 519709; // 0x102 PushI
	var_93_int = -1; // 0x103 PushI
	var_94_int = 20868; // 0x104 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_95_int = 20870; // 0x108 PushI
	var_96_bool = var_6_int == var_95_int; // 0x109 Eq
	if(var_96_bool == 0) goto Label_282; // 0x10a JumpB
	var_97_string = ""; // 0x10b PushV
	var_97_string = "Neutral"; // 0x10c MovS
	func_162(var_7_bool, var_97_string); // 0x10d NEW_2
	var_98_int = 519711; // 0x10f PushI
	SetMessage(var_98_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_99_int = 519712; // 0x114 PushI
	var_100_int = -1; // 0x115 PushI
	var_101_int = 20871; // 0x116 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_102_int = 20861; // 0x11a PushI
	var_103_bool = var_6_int == var_102_int; // 0x11b Eq
	if(var_103_bool == 0) goto Label_285; // 0x11c JumpB
	
Label_285:
	var_104_int = 20865; // 0x11d PushI
	var_105_bool = var_6_int == var_104_int; // 0x11e Eq
	if(var_105_bool == 0) goto Label_303; // 0x11f JumpB
	var_106_string = ""; // 0x120 PushV
	var_106_string = "Neutral"; // 0x121 MovS
	func_162(var_7_bool, var_106_string); // 0x122 NEW_2
	var_107_int = 519707; // 0x124 PushI
	SetMessage(var_107_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_108_int = 519708; // 0x129 PushI
	var_109_int = -1; // 0x12a PushI
	var_110_int = 20866; // 0x12b PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_111_int = 20850; // 0x12f PushI
	var_112_bool = var_6_int == var_111_int; // 0x130 Eq
	if(var_112_bool == 0) goto Label_326; // 0x131 JumpB
	var_113_string = ""; // 0x132 PushV
	var_113_string = "Neutral"; // 0x133 MovS
	func_162(var_7_bool, var_113_string); // 0x134 NEW_2
	var_114_int = 519692; // 0x136 PushI
	SetMessage(var_114_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_115_int = 519693; // 0x13b PushI
	var_116_int = 20852; // 0x13c PushI
	var_117_int = 20851; // 0x13d PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x13e TObjFunc
	var_118_int = 517931; // 0x140 PushI
	var_119_int = -1; // 0x141 PushI
	var_120_int = 19069; // 0x142 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_121_int = 20852; // 0x146 PushI
	var_122_bool = var_6_int == var_121_int; // 0x147 Eq
	if(var_122_bool == 0) goto Label_344; // 0x148 JumpB
	var_123_string = ""; // 0x149 PushV
	var_123_string = "Neutral"; // 0x14a MovS
	func_162(var_7_bool, var_123_string); // 0x14b NEW_2
	var_124_int = 519694; // 0x14d PushI
	SetMessage(var_124_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_125_int = 519695; // 0x152 PushI
	var_126_int = 20854; // 0x153 PushI
	var_127_int = 20853; // 0x154 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_128_int = 20856; // 0x158 PushI
	var_129_bool = var_6_int == var_128_int; // 0x159 Eq
	if(var_129_bool == 0) goto Label_347; // 0x15a JumpB
	
Label_347:
	var_130_int = 20854; // 0x15b PushI
	var_131_bool = var_6_int == var_130_int; // 0x15c Eq
	if(var_131_bool == 0) goto Label_370; // 0x15d JumpB
	var_132_string = ""; // 0x15e PushV
	var_132_string = "Neutral"; // 0x15f MovS
	func_162(var_7_bool, var_132_string); // 0x160 NEW_2
	var_133_int = 519696; // 0x162 PushI
	SetMessage(var_133_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_134_int = 519700; // 0x167 PushI
	var_135_int = -1; // 0x168 PushI
	var_136_int = 20858; // 0x169 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x16a TObjFunc
	var_137_int = 519701; // 0x16c PushI
	var_138_int = -1; // 0x16d PushI
	var_139_int = 20859; // 0x16e PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_3_string = 1; // 0x172 TMovB
	var_140_bool = 0; // 0x173 PushV
	func_789(var_140_bool); // 0x174 NEW_2
	if(var_140_bool == 0) goto Label_378; // 0x176 JumpB
	lshStopAnimation(); // 0x177 Func
	goto Label_380; // 0x179 Jump
	
Label_380:
	return 0; // 0x17c Return
	
Label_378:
	StopAnimation(); // 0x17a Func
	
Label_382:
	return 0; // 0x17e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_572(); // 0x194 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x196 PushV
	var_8_object = var_6_object; // 0x197 Mov
	TaskCall(0); // 0x198 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x199 NEW_2
	TaskReturn(); // 0x19a TaskReturn
	return 0; // 0x19c Return
}


task_2_event_9(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_int, var_7_float)
{
	var_8_string = ""; // 0x19e PushV
	var_8_string = "cleanup"; // 0x19f MovS
	func_460(); // 0x1a0 NEW_2
	return 0; // 0x1a2 Return
}


	task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_float, var_7_float, var_10_string)
	{
	var_11_string = "cleanup"; // 0x1cd PushS
	var_12_bool = var_10_string == var_11_string; // 0x1ce Eq
	if(var_12_bool == 0) goto Label_467; // 0x1cf JumpB
	func_440(var_10_string); // 0x1d1 NEW_2
	
Label_467:
	return 0; // 0x1d3 Return
	}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1d4 Func
	sync(); // 0x1d6 Func
	return 0; // 0x1d8 Return
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
	func_705(var_9_object); // 0x1e4 NEW_2
	RemoveActor(var_9_object); // 0x1e6 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x17f PushV
	GetGameTime(var_7_float); // 0x180 Func
	var_8_int = 24; // 0x182 PushI
	var_9_bool = var_7_float >= var_8_int; // 0x183 GE
	if(var_9_bool == 0) goto Label_394; // 0x184 JumpB
	var_10_string = ""; // 0x185 PushV
	var_10_string = "cleanup"; // 0x186 MovS
	func_460(); // 0x187 NEW_2
	goto Label_398; // 0x189 Jump
	
Label_398:
	func_419(); // 0x18f NEW_2
	return 2; // 0x191 Return
	
Label_394:
	var_81_int = 0; // 0x18a PushI
	var_82_int = 24; // 0x18b PushI
	SetTimeEvent(var_81_int, var_82_int); // 0x18c Func
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_582(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_783(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_781(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_785(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_787(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_854(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_150_bool = var_17_bool == 0; // 0x38 Not
	if(var_150_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_151_object = Obj(); // 0x3f PushV
	var_151_object = var_8_object; // 0x40 Mov
	func_650(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_650()
{
	var_152_bool = 0; var_153_bool = 0; // 0x28a PushV
	CameraSwitchToNormal(); // 0x28b Func
	var_154_bool = 0; // 0x28d PushV
	func_789(var_154_bool); // 0x28e NEW_2
	if(var_154_bool == 0) goto Label_658; // 0x290 JumpB
	goto Label_666; // 0x291 Jump
	
Label_666:
	return 2; // 0x29a Return
	
Label_658:
	var_155_string = "head"; // 0x292 PushS
	HasAnimationTrack(var_153_bool, var_155_string); // 0x293 Func
	var_156_bool = var_153_bool; // 0x295 Push
	if(var_156_bool == 0) goto Label_666; // 0x296 JumpB
	var_157_string = "head"; // 0x297 PushS
	UnlookAsync(var_157_string); // 0x298 Func
}


func_781(var_66_int)
{
	var_66_int = 515568; // 0x30d MovI
	return 0; // 0x30e Return
}


func_783(var_65_int)
{
	var_65_int = 503353; // 0x30f MovI
	return 0; // 0x310 Return
}


func_785(var_67_string)
{
	var_67_string = "ui/NPC_Citizen1.png"; // 0x311 MovS
	return 0; // 0x312 Return
}


func_787(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1_b.png"; // 0x313 MovS
	return 0; // 0x314 Return
}


func_789(var_60_bool)
{
	var_60_bool = 0; // 0x315 MovB
	return 0; // 0x316 Return
}


func_791()
{
	var_14_string = "playsound"; // 0x318 PushS
	var_15_string = "giveitem"; // 0x319 PushS
	TriggerWorld(var_14_string, var_15_string); // 0x31a Func
	return 0; // 0x31c Return
}


func_667(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x29b PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x29c Func
	var_127_bool = var_124_bool; // 0x29e Push
	if(var_127_bool == 0) goto Label_678; // 0x29f JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x2a0 Func
	var_128_bool = 0; // 0x2a2 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x2a3 Func
	goto Label_682; // 0x2a5 Jump
	
Label_682:
	return 6; // 0x2aa Return
	
Label_678:
	var_129_string = "Can't find lsh animation : "; // 0x2a6 PushS
	var_130_int = var_129_string + var_120_string; // 0x2a7 Add
	Trace(var_130_int); // 0x2a8 Func
}


func_797()
{
	var_44_string = "oob1Worker3"; // 0x31e PushS
	var_45_int = 1; // 0x31f PushI
	SetVariable(var_44_string, var_45_int); // 0x320 Func
	return 0; // 0x322 Return
}


func_162(var_2_object, var_97_string)
{
	var_98_bool = 0; // 0xa3 PushV
	func_789(var_98_bool); // 0xa4 NEW_2
	var_99_bool = var_98_bool == 0; // 0xa6 Not
	if(var_99_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_100_bool = var_97_string == var_2_object; // 0xa9 Eq
	if(var_100_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_101_string = ""; var_102_bool = 0; // 0xac PushV
	var_101_string = var_97_string; // 0xad Mov
	var_103_string = ""; // 0xae PushS
	var_104_bool = var_97_string == var_103_string; // 0xaf Eq
	if(var_104_bool == 0) goto Label_179; // 0xb0 JumpB
	var_102_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_683(var_101_string, var_102_bool); // 0xb4 NEW_2
	var_2_object = var_97_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_102_bool = 1; // 0xb3 MovB
}


func_803(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x323 PushV
	var_20_string = "Knife is given"; // 0x324 PushS
	Trace(var_20_string); // 0x325 Func
	CreateInvItem(var_19_object); // 0x327 Func
	var_21_string = "Knife"; // 0x329 PushS
	SetItemName(var_21_string); // 0x32a ObjFunc
	var_22_string = "durability"; // 0x32c PushS
	var_23_int = 70; // 0x32d PushI
	SetProperty(var_22_string, var_23_int); // 0x32e ObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; // 0x330 PushV
	var_24_object = var_16_object; // 0x331 Mov
	var_25_object = var_19_object; // 0x332 Mov
	var_26_int = 1; // 0x333 MovI
	func_738(var_25_object, var_26_int); // 0x334 NEW_2
	return 2; // 0x336 Return
}


func_419()
{
	var_21_float = 0; var_22_float = 0; // 0x1a3 PushV
	
Label_420:
	var_23_bool = 0; // 0x1a4 PushV
	func_577(var_23_bool); // 0x1a5 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1a7 Not
	if(var_26_bool == 0) goto Label_428; // 0x1a8 JumpB
	Hold(); // 0x1a9 Func
	goto Label_420; // 0x1ab Jump
	
Label_428:
	var_27_int = 3; // 0x1ac PushI
	rand(var_22_float, var_27_int); // 0x1ad Func
	var_28_int = 3; // 0x1af PushI
	var_29_int = var_22_float + var_28_int; // 0x1b0 Add
	Sleep(var_29_int); // 0x1b1 Func
	func_491(); // 0x1b4 NEW_2
	goto Label_420; // 0x1b6 Jump
}


func_683(var_101_string, var_102_bool)
{
	var_105_bool = 0; var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_float = 0; var_110_float = 0; // 0x2ab PushV
	lshHasAnimation(var_108_bool, var_101_string); // 0x2ac Func
	var_111_bool = var_108_bool; // 0x2ae Push
	if(var_111_bool == 0) goto Label_693; // 0x2af JumpB
	lshGetAnimTimes(var_101_string, var_109_float, var_110_float); // 0x2b0 Func
	lshPlayAnimation(var_109_float, var_110_float, var_102_bool); // 0x2b2 Func
	goto Label_697; // 0x2b4 Jump
	
Label_697:
	return 6; // 0x2b9 Return
	
Label_693:
	var_112_string = "Can't find lsh animation : "; // 0x2b5 PushS
	var_113_int = var_112_string + var_101_string; // 0x2b6 Add
	Trace(var_113_int); // 0x2b7 Func
}


func_440(var_0_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1b8 PushV
	var_0_object = 1; // 0x1b9 TMovB
	IsLoaded(var_14_bool); // 0x1ba Func
	var_15_bool = 0; // 0x1bc PushV
	var_15_bool = 0; // 0x1bd MovB
	var_16_bool = var_14_bool == 0; // 0x1be Not
	if(var_16_bool == 0) goto Label_453; // 0x1bf JumpB
	var_17_bool = 0; // 0x1c0 PushV
	func_489(var_17_bool); // 0x1c1 NEW_2
	if(var_17_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_15_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_15_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_18_object = Obj(); // 0x1c6 PushV
	func_705(var_18_object); // 0x1c7 NEW_2
	RemoveActor(var_18_object); // 0x1c9 Func
	
Label_459:
	return 2; // 0x1cb Return
}


func_824()
{
	var_95_string = "oob1Worker1"; // 0x339 PushS
	var_96_int = 1; // 0x33a PushI
	SetVariable(var_95_string, var_96_int); // 0x33b Func
	return 0; // 0x33d Return
}


func_570(var_71_bool)
{
	var_71_bool = 1; // 0x23a MovB
	return 0; // 0x23b Return
}


func_698()
{
	var_9_bool = 0; // 0x2ba PushV
	func_789(var_9_bool); // 0x2bb NEW_2
	if(var_9_bool == 0) goto Label_704; // 0x2bd JumpB
	lshStopSpeech(); // 0x2be Func
	
Label_704:
	return 0; // 0x2c0 Return
}


func_572()
{
	StopAnimation(); // 0x23c Func
	StopGroup0(); // 0x23e Func
	return 0; // 0x240 Return
}


func_830(var_138_bool)
{
	var_140_int = 0; var_141_string = ""; // 0x33f PushV
	var_141_string = "oob1Worker3"; // 0x340 MovS
	func_721(var_140_int, var_141_string); // 0x341 NEW_2
	var_142_int = 0; // 0x343 PushI
	var_143_bool = var_140_int == var_142_int; // 0x344 Eq
	if(var_143_bool == 0) goto Label_840; // 0x345 JumpB
	var_138_bool = 1; // 0x346 MovB
	return 0; // 0x347 Return
	
Label_840:
	var_138_bool = 0; // 0x348 MovB
	return 0; // 0x349 Return
}


func_577(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x241 PushV
	IsLoaded(var_25_bool); // 0x242 Func
	var_23_bool = var_25_bool; // 0x244 Mov
	return 2; // 0x245 Return
}


func_705(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x2c1 PushV
	self(var_20_object); // 0x2c2 Func
	var_18_object = var_20_object; // 0x2c4 Mov
	return 2; // 0x2c5 Return
}


func_582(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x246 PushV
	GetPosition(var_31_cvector); // 0x247 ObjFunc
	GetEyesHeight(var_30_float); // 0x249 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x24b PushE
	var_39_float = var_39_float + var_30_float; // 0x24c Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x24d PopE
	GetPosition(var_32_cvector); // 0x24e Func
	GetEyesHeight(var_30_float); // 0x250 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x252 PushE
	var_40_float = var_40_float + var_30_float; // 0x253 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x254 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x255 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x256 PushE
	var_41_float = 0; // 0x257 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x258 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x259 Or
	var_43_float = sqrt(var_42_int); // 0x25a Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x25b Div2
	var_34_cvector = -var_33_cvector; // 0x25c Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x25d Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x25e PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x25f PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x260 Xor2
	func_711(var_45_cvector, var_46_cvector); // 0x261 NEW_2
	var_53_int = 25; // 0x263 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x264 Mult
	var_55_int = var_44_float + var_54_float; // 0x265 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x266 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x267 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x268 Add2
	IsOverrideActive(var_37_bool); // 0x269 Func
	var_57_bool = var_37_bool; // 0x26b Push
	if(var_57_bool == 0) goto Label_623; // 0x26c JumpB
	var_18_bool = 0; // 0x26d MovB
	return 18; // 0x26e Return
	
Label_623:
	StopWorld(); // 0x26f Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x271 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x273 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x274 PushE
	Rotate(var_58_float, var_59_float); // 0x275 Func
	var_60_bool = 0; // 0x277 PushV
	func_789(var_60_bool); // 0x278 NEW_2
	if(var_60_bool == 0) goto Label_636; // 0x27a JumpB
	goto Label_644; // 0x27b Jump
	
Label_644:
	CameraWaitForPlayFinish(); // 0x284 Func
	ResumeWorld(); // 0x286 Func
	var_18_bool = 1; // 0x288 MovB
	return 18; // 0x289 Return
	
Label_636:
	var_61_string = "head"; // 0x27c PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x27d Func
	var_62_bool = var_38_bool; // 0x27f Push
	if(var_62_bool == 0) goto Label_644; // 0x280 JumpB
	var_63_string = "head"; // 0x281 PushS
	LookAsyncCamera(var_63_string); // 0x282 Func
}


func_711(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2c7 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2c8 Or
	var_49_float = sqrt(var_50_int); // 0x2c9 Sqrt2
	var_51_float = 0.0; // 0x2ca PushF
	var_52_bool = var_49_float < var_51_float; // 0x2cb LT
	if(var_52_bool == 0) goto Label_719; // 0x2cc JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2cd MovV
	return 2; // 0x2ce Return
	
Label_719:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2cf Div2
	return 2; // 0x2d0 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_132; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_842(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_105; // 0x54 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x55 PushV
	var_93_object = var_1_object; // 0x56 MovT
	var_94_object = var_0_object; // 0x57 MovT
	func_824(); // 0x58 NEW_2
	var_97_string = ""; // 0x5a PushV
	var_97_string = "Neutral"; // 0x5b MovS
	func_162(var_79_object, var_97_string); // 0x5c NEW_2
	var_114_int = 517930; // 0x5e PushI
	SetMessage(var_114_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_115_int = 519691; // 0x63 PushI
	var_116_int = 20850; // 0x64 PushI
	var_117_int = 20849; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	goto Label_132; // 0x68 Jump
	
Label_132:
	var_118_bool = 0; // 0x84 PushV
	func_789(var_118_bool); // 0x85 NEW_2
	if(var_118_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_119_string = var_3_string; // 0x8a PushT
	if(var_119_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_120_string = ""; // 0x8d PushV
	var_120_string = var_2_object; // 0x8e MovT
	func_667(var_120_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_131_string = "all"; // 0x93 PushS
	var_132_string = "idle"; // 0x94 PushS
	PlayAnimation(var_131_string, var_132_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_133_string = var_3_string; // 0x99 PushT
	if(var_133_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_134_string = "all"; // 0x9c PushS
	var_135_string = "idle"; // 0x9d PushS
	PlayAnimation(var_134_string, var_135_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_105:
	var_136_string = ""; // 0x69 PushV
	var_136_string = "Neutral"; // 0x6a MovS
	func_162(var_79_object, var_136_string); // 0x6b NEW_2
	var_137_int = 517932; // 0x6d PushI
	SetMessage(var_137_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_138_bool = 0; var_139_object = Obj(); // 0x72 PushV
	var_139_object = var_1_object; // 0x73 MovT
	func_830(var_139_object); // 0x74 NEW_2
	if(var_138_bool == 0) goto Label_124; // 0x76 JumpB
	var_144_int = 519710; // 0x77 PushI
	var_145_int = 20870; // 0x78 PushI
	var_146_int = 20869; // 0x79 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7a TObjFunc
	
Label_124:
	var_147_int = 519709; // 0x7c PushI
	var_148_int = -1; // 0x7d PushI
	var_149_int = 20868; // 0x7e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_842(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x34b PushV
	var_88_string = "oob1Worker1"; // 0x34c MovS
	func_721(var_87_int, var_88_string); // 0x34d NEW_2
	var_91_int = 0; // 0x34f PushI
	var_92_bool = var_87_int == var_91_int; // 0x350 Eq
	if(var_92_bool == 0) goto Label_852; // 0x351 JumpB
	var_85_bool = 1; // 0x352 MovB
	return 0; // 0x353 Return
	
Label_852:
	var_85_bool = 0; // 0x354 MovB
	return 0; // 0x355 Return
}


func_721(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x2d1 PushV
	GetVariable(var_88_string, var_90_int); // 0x2d2 Func
	var_87_int = var_90_int; // 0x2d4 Mov
	return 2; // 0x2d5 Return
}


func_854(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x356 PushV
	var_72_string = "branch"; // 0x357 PushS
	GetVariable(var_72_string, var_71_int); // 0x358 Func
	var_73_int = 0; // 0x35a PushI
	var_74_bool = var_71_int == var_73_int; // 0x35b Eq
	if(var_74_bool == 0) goto Label_864; // 0x35c JumpB
	var_69_int = 1; // 0x35d MovI
	return 2; // 0x35e Return
	
Label_864:
	var_75_int = 1; // 0x360 PushI
	var_76_bool = var_71_int == var_75_int; // 0x361 Eq
	if(var_76_bool == 0) goto Label_869; // 0x362 JumpB
	var_69_int = 2; // 0x363 MovI
	return 2; // 0x364 Return
	
Label_869:
	var_69_int = 3; // 0x365 MovI
	return 2; // 0x366 Return
}


func_726(var_35_int, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x2d6 PushV
	CreateIntVector(var_38_object); // 0x2d7 Func
	add(var_35_int); // 0x2d9 ObjFunc
	add(var_36_int); // 0x2db ObjFunc
	var_39_int = 3; // 0x2dd PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x2de Func
	return 2; // 0x2e0 Return
}


func_738(var_25_object, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x2e2 PushV
	GetItemID(var_30_int); // 0x2e3 ObjFunc
	var_33_string = "Category"; // 0x2e5 PushS
	GetInvItemProperty(var_31_int, var_30_int, var_33_string); // 0x2e6 Func
	AddItem(var_32_bool, var_25_object, var_31_int, var_26_int); // 0x2e8 ObjFunc
	var_34_bool = var_32_bool == 0; // 0x2ea Not
	if(var_34_bool == 0) goto Label_751; // 0x2eb JumpB
	DropItems(var_25_object, var_26_int); // 0x2ec ObjFunc
	goto Label_756; // 0x2ee Jump
	
Label_756:
	return 6; // 0x2f4 Return
	
Label_751:
	var_35_int = 0; var_36_int = 0; // 0x2ef PushV
	var_35_int = var_30_int; // 0x2f0 Mov
	var_36_int = var_26_int; // 0x2f1 Mov
	func_726(var_35_int, var_36_int); // 0x2f2 NEW_2
}


func_489(var_17_bool)
{
	var_17_bool = 1; // 0x1e9 MovB
	return 0; // 0x1ea Return
}


func_491()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1eb PushV
	WaitForAnimEnd(); // 0x1ec Func
	var_44_bool = 0; // 0x1ee PushV
	func_577(var_44_bool); // 0x1ef NEW_2
	var_45_bool = var_44_bool == 0; // 0x1f1 Not
	if(var_45_bool == 0) goto Label_500; // 0x1f2 JumpB
	return 14; // 0x1f3 Return
	
Label_500:
	var_46_int = 0; // 0x1f4 PushV
	func_764(var_46_int); // 0x1f5 NEW_2
	var_37_int = var_46_int; // 0x1f6 Mov
	var_38_int = 0; // 0x1f8 MovI
	
Label_505:
	var_59_bool = 0; // 0x1f9 PushV
	var_59_bool = 0; // 0x1fa MovB
	var_60_int = 5; // 0x1fb PushI
	var_61_bool = var_38_int < var_60_int; // 0x1fc LT
	if(var_61_bool == 0) goto Label_515; // 0x1fd JumpB
	var_62_bool = 0; // 0x1fe PushV
	func_577(var_62_bool); // 0x1ff NEW_2
	if(var_62_bool == 0) goto Label_515; // 0x201 JumpB
	var_59_bool = 1; // 0x202 MovB
	
Label_515:
	if(var_59_bool == 0) goto Label_567; // 0x203 JumpB
	var_63_int = 3; // 0x204 PushI
	irand(var_39_int, var_63_int); // 0x205 Func
	var_64_int = 0; // 0x207 PushI
	var_65_bool = var_39_int == var_64_int; // 0x208 Eq
	if(var_65_bool == 0) goto Label_539; // 0x209 JumpB
	var_66_int = var_37_int; // 0x20a Push
	if(var_66_int == 0) goto Label_538; // 0x20b JumpB
	irand(var_40_int, var_37_int); // 0x20c Func
	var_67_string = "all"; // 0x20e PushS
	var_68_string = ""; var_69_int = 0; // 0x20f PushV
	var_69_int = var_40_int; // 0x210 Mov
	func_757(var_68_string, var_69_int); // 0x211 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x213 Func
	WaitForAnimEnd(var_41_bool); // 0x215 Func
	var_70_bool = var_41_bool == 0; // 0x217 Not
	if(var_70_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_567; // 0x219 Jump
	
Label_567:
	ResetAAS(); // 0x237 Func
	return 14; // 0x239 Return
	
Label_538:
	goto Label_556; // 0x21a Jump
	
Label_556:
	var_71_bool = 0; // 0x22c PushV
	func_570(var_71_bool); // 0x22d NEW_2
	var_72_bool = var_71_bool == 0; // 0x22f Not
	if(var_72_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_567; // 0x231 Jump
	
Label_562:
	ResetAAS(); // 0x232 Func
	var_73_int = 1; // 0x234 PushI
	var_38_int = var_38_int + var_73_int; // 0x235 Add2
	goto Label_505; // 0x236 Jump
	
Label_539:
	var_74_int = 1; // 0x21b PushI
	var_75_bool = var_39_int == var_74_int; // 0x21c Eq
	if(var_75_bool == 0) goto Label_553; // 0x21d JumpB
	var_76_int = 4; // 0x21e PushI
	rand(var_42_float, var_76_int); // 0x21f Func
	var_77_int = 1; // 0x221 PushI
	var_78_int = var_42_float + var_77_int; // 0x222 Add
	Sleep(var_78_int, var_43_bool); // 0x223 Func
	var_79_bool = var_43_bool == 0; // 0x225 Not
	if(var_79_bool == 0) goto Label_552; // 0x226 JumpB
	goto Label_567; // 0x227 Jump
	
Label_552:
	goto Label_556; // 0x228 Jump
	
Label_553:
	var_80_int = var_38_int; // 0x229 Push
	if(var_80_int == 0) goto Label_556; // 0x22a JumpB
	goto Label_567; // 0x22b Jump
}


func_757(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2f5 PushV
	var_55_string = "idle"; // 0x2f6 MovS
	var_56_int = var_53_int; // 0x2f7 Push
	if(var_56_int == 0) goto Label_762; // 0x2f8 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2f9 Add2
	
Label_762:
	var_52_string = var_55_string; // 0x2fa Mov
	return 2; // 0x2fb Return
}


func_764(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2fc PushV
	var_49_int = 0; // 0x2fd MovI
	
Label_766:
	var_51_string = "all"; // 0x2fe PushS
	var_52_string = ""; var_53_int = 0; // 0x2ff PushV
	var_53_int = var_49_int; // 0x300 Mov
	func_757(var_52_string, var_53_int); // 0x301 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x303 Func
	var_57_bool = var_50_bool == 0; // 0x305 Not
	if(var_57_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_779; // 0x307 Jump
	
Label_779:
	var_46_int = var_49_int; // 0x30b Mov
	return 4; // 0x30c Return
	
Label_776:
	var_58_int = 1; // 0x308 PushI
	var_49_int = var_49_int + var_58_int; // 0x309 Add2
	goto Label_766; // 0x30a Jump
}


