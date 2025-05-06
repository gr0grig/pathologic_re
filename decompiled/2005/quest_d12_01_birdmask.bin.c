task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xcd PushI
	if(var_7_int == 0) goto Label_572; // 0xce JumpB
	func_683(); // 0xd0 NEW_2
	var_9_int = 16592; // 0xd2 PushI
	var_10_bool = var_6_int == var_9_int; // 0xd3 Eq
	if(var_10_bool == 0) goto Label_223; // 0xd4 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xd5 PushV
	var_11_object = var_1_object; // 0xd6 MovT
	var_12_object = var_0_object; // 0xd7 MovT
	func_737(); // 0xd8 NEW_2
	var_23_object = Obj(); var_24_object = Obj(); // 0xda PushV
	var_23_object = var_1_object; // 0xdb MovT
	var_24_object = var_0_object; // 0xdc MovT
	func_744(); // 0xdd NEW_2
	
Label_223:
	var_31_int = 16093; // 0xdf PushI
	var_32_bool = var_5_int == var_31_int; // 0xe0 Eq
	if(var_32_bool == 0) goto Label_296; // 0xe1 JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0xe2 PushV
	var_34_object = var_1_object; // 0xe3 MovT
	func_761(var_33_bool, var_34_object); // 0xe4 NEW_2
	if(var_33_bool == 0) goto Label_246; // 0xe6 JumpB
	var_44_string = ""; // 0xe7 PushV
	var_44_string = "Neutral"; // 0xe8 MovS
	func_182(var_6_int, var_44_string); // 0xe9 NEW_2
	var_56_int = 514847; // 0xeb PushI
	SetMessage(var_56_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_57_int = 514848; // 0xf0 PushI
	var_58_int = -1; // 0xf1 PushI
	var_59_int = 16094; // 0xf2 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_60_string = ""; // 0xf6 PushV
	var_60_string = "Neutral"; // 0xf7 MovS
	func_182(var_6_int, var_60_string); // 0xf8 NEW_2
	var_61_int = 514849; // 0xfa PushI
	SetMessage(var_61_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_62_bool = 0; var_63_object = Obj(); // 0xff PushV
	var_63_object = var_1_object; // 0x100 MovT
	func_751(var_62_bool, var_63_object); // 0x101 NEW_2
	if(var_62_bool == 0) goto Label_265; // 0x103 JumpB
	var_66_int = 514850; // 0x104 PushI
	var_67_int = 16097; // 0x105 PushI
	var_68_int = 16096; // 0x106 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x107 TObjFunc
	
Label_265:
	var_69_bool = 0; var_70_object = Obj(); // 0x109 PushV
	var_70_object = var_1_object; // 0x10a MovT
	func_751(var_69_bool, var_70_object); // 0x10b NEW_2
	if(var_69_bool == 0) goto Label_275; // 0x10d JumpB
	var_71_int = 514852; // 0x10e PushI
	var_72_int = 16099; // 0x10f PushI
	var_73_int = 16098; // 0x110 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x111 TObjFunc
	
Label_275:
	var_74_int = 515494; // 0x113 PushI
	var_75_int = 16591; // 0x114 PushI
	var_76_int = 16590; // 0x115 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_296:
	var_77_int = 16103; // 0x128 PushI
	var_78_bool = var_5_int == var_77_int; // 0x129 Eq
	if(var_78_bool == 0) goto Label_319; // 0x12a JumpB
	var_79_string = ""; // 0x12b PushV
	var_79_string = "Neutral"; // 0x12c MovS
	func_182(var_6_int, var_79_string); // 0x12d NEW_2
	var_80_int = 514857; // 0x12f PushI
	SetMessage(var_80_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_81_int = 514858; // 0x134 PushI
	var_82_int = 16105; // 0x135 PushI
	var_83_int = 16104; // 0x136 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x137 TObjFunc
	var_84_int = 514880; // 0x139 PushI
	var_85_int = 16127; // 0x13a PushI
	var_86_int = 16126; // 0x13b PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_87_int = 16127; // 0x13f PushI
	var_88_bool = var_5_int == var_87_int; // 0x140 Eq
	if(var_88_bool == 0) goto Label_337; // 0x141 JumpB
	var_89_string = ""; // 0x142 PushV
	var_89_string = "Neutral"; // 0x143 MovS
	func_182(var_6_int, var_89_string); // 0x144 NEW_2
	var_90_int = 514881; // 0x146 PushI
	SetMessage(var_90_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_91_int = 514882; // 0x14b PushI
	var_92_int = -1; // 0x14c PushI
	var_93_int = 16128; // 0x14d PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_94_int = 16105; // 0x151 PushI
	var_95_bool = var_5_int == var_94_int; // 0x152 Eq
	if(var_95_bool == 0) goto Label_360; // 0x153 JumpB
	var_96_string = ""; // 0x154 PushV
	var_96_string = "Neutral"; // 0x155 MovS
	func_182(var_6_int, var_96_string); // 0x156 NEW_2
	var_97_int = 514859; // 0x158 PushI
	SetMessage(var_97_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_98_int = 514860; // 0x15d PushI
	var_99_int = 16107; // 0x15e PushI
	var_100_int = 16106; // 0x15f PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x160 TObjFunc
	var_101_int = 514879; // 0x162 PushI
	var_102_int = -1; // 0x163 PushI
	var_103_int = 16125; // 0x164 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_104_int = 16107; // 0x168 PushI
	var_105_bool = var_5_int == var_104_int; // 0x169 Eq
	if(var_105_bool == 0) goto Label_378; // 0x16a JumpB
	var_106_string = ""; // 0x16b PushV
	var_106_string = "Neutral"; // 0x16c MovS
	func_182(var_6_int, var_106_string); // 0x16d NEW_2
	var_107_int = 514861; // 0x16f PushI
	SetMessage(var_107_int); // 0x170 TObjFunc
	ClearReplies(); // 0x172 TObjFunc
	var_108_int = 514862; // 0x174 PushI
	var_109_int = 16109; // 0x175 PushI
	var_110_int = 16108; // 0x176 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_111_int = 16109; // 0x17a PushI
	var_112_bool = var_5_int == var_111_int; // 0x17b Eq
	if(var_112_bool == 0) goto Label_401; // 0x17c JumpB
	var_113_string = ""; // 0x17d PushV
	var_113_string = "Neutral"; // 0x17e MovS
	func_182(var_6_int, var_113_string); // 0x17f NEW_2
	var_114_int = 514863; // 0x181 PushI
	SetMessage(var_114_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_115_int = 514864; // 0x186 PushI
	var_116_int = 16111; // 0x187 PushI
	var_117_int = 16110; // 0x188 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x189 TObjFunc
	var_118_int = 514870; // 0x18b PushI
	var_119_int = 16117; // 0x18c PushI
	var_120_int = 16116; // 0x18d PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_121_int = 16117; // 0x191 PushI
	var_122_bool = var_5_int == var_121_int; // 0x192 Eq
	if(var_122_bool == 0) goto Label_424; // 0x193 JumpB
	var_123_string = ""; // 0x194 PushV
	var_123_string = "Neutral"; // 0x195 MovS
	func_182(var_6_int, var_123_string); // 0x196 NEW_2
	var_124_int = 514871; // 0x198 PushI
	SetMessage(var_124_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_125_int = 514872; // 0x19d PushI
	var_126_int = -1; // 0x19e PushI
	var_127_int = 16118; // 0x19f PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x1a0 TObjFunc
	var_128_int = 514873; // 0x1a2 PushI
	var_129_int = 16120; // 0x1a3 PushI
	var_130_int = 16119; // 0x1a4 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_131_int = 16120; // 0x1a8 PushI
	var_132_bool = var_5_int == var_131_int; // 0x1a9 Eq
	if(var_132_bool == 0) goto Label_447; // 0x1aa JumpB
	var_133_string = ""; // 0x1ab PushV
	var_133_string = "Neutral"; // 0x1ac MovS
	func_182(var_6_int, var_133_string); // 0x1ad NEW_2
	var_134_int = 514874; // 0x1af PushI
	SetMessage(var_134_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_135_int = 514875; // 0x1b4 PushI
	var_136_int = -1; // 0x1b5 PushI
	var_137_int = 16121; // 0x1b6 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1b7 TObjFunc
	var_138_int = 514876; // 0x1b9 PushI
	var_139_int = 16123; // 0x1ba PushI
	var_140_int = 16122; // 0x1bb PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_141_int = 16123; // 0x1bf PushI
	var_142_bool = var_5_int == var_141_int; // 0x1c0 Eq
	if(var_142_bool == 0) goto Label_465; // 0x1c1 JumpB
	var_143_string = ""; // 0x1c2 PushV
	var_143_string = "Neutral"; // 0x1c3 MovS
	func_182(var_6_int, var_143_string); // 0x1c4 NEW_2
	var_144_int = 514877; // 0x1c6 PushI
	SetMessage(var_144_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_145_int = 514878; // 0x1cb PushI
	var_146_int = -1; // 0x1cc PushI
	var_147_int = 16124; // 0x1cd PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_148_int = 16111; // 0x1d1 PushI
	var_149_bool = var_5_int == var_148_int; // 0x1d2 Eq
	if(var_149_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_150_string = ""; // 0x1d4 PushV
	var_150_string = "Neutral"; // 0x1d5 MovS
	func_182(var_6_int, var_150_string); // 0x1d6 NEW_2
	var_151_int = 514865; // 0x1d8 PushI
	SetMessage(var_151_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_152_int = 514866; // 0x1dd PushI
	var_153_int = 16113; // 0x1de PushI
	var_154_int = 16112; // 0x1df PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1e0 TObjFunc
	var_155_int = 514869; // 0x1e2 PushI
	var_156_int = -1; // 0x1e3 PushI
	var_157_int = 16115; // 0x1e4 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_158_int = 16113; // 0x1e8 PushI
	var_159_bool = var_5_int == var_158_int; // 0x1e9 Eq
	if(var_159_bool == 0) goto Label_506; // 0x1ea JumpB
	var_160_string = ""; // 0x1eb PushV
	var_160_string = "Neutral"; // 0x1ec MovS
	func_182(var_6_int, var_160_string); // 0x1ed NEW_2
	var_161_int = 514867; // 0x1ef PushI
	SetMessage(var_161_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_162_int = 514868; // 0x1f4 PushI
	var_163_int = -1; // 0x1f5 PushI
	var_164_int = 16114; // 0x1f6 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_165_int = 16591; // 0x1fa PushI
	var_166_bool = var_5_int == var_165_int; // 0x1fb Eq
	if(var_166_bool == 0) goto Label_524; // 0x1fc JumpB
	var_167_string = ""; // 0x1fd PushV
	var_167_string = "Neutral"; // 0x1fe MovS
	func_182(var_6_int, var_167_string); // 0x1ff NEW_2
	var_168_int = 515495; // 0x201 PushI
	SetMessage(var_168_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_169_int = 515496; // 0x206 PushI
	var_170_int = -1; // 0x207 PushI
	var_171_int = 16592; // 0x208 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_172_int = 16099; // 0x20c PushI
	var_173_bool = var_5_int == var_172_int; // 0x20d Eq
	if(var_173_bool == 0) goto Label_542; // 0x20e JumpB
	var_174_string = ""; // 0x20f PushV
	var_174_string = "Neutral"; // 0x210 MovS
	func_182(var_6_int, var_174_string); // 0x211 NEW_2
	var_175_int = 514853; // 0x213 PushI
	SetMessage(var_175_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_176_int = 514854; // 0x218 PushI
	var_177_int = -1; // 0x219 PushI
	var_178_int = 16100; // 0x21a PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_179_int = 16097; // 0x21e PushI
	var_180_bool = var_5_int == var_179_int; // 0x21f Eq
	if(var_180_bool == 0) goto Label_560; // 0x220 JumpB
	var_181_string = ""; // 0x221 PushV
	var_181_string = "Neutral"; // 0x222 MovS
	func_182(var_6_int, var_181_string); // 0x223 NEW_2
	var_182_int = 514851; // 0x225 PushI
	SetMessage(var_182_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_183_int = 515337; // 0x22a PushI
	var_184_int = -1; // 0x22b PushI
	var_185_int = 16560; // 0x22c PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x22d TObjFunc
	return 0; // 0x22f Return
	
Label_560:
	var_3_string = 1; // 0x230 TMovB
	var_186_bool = 0; // 0x231 PushV
	func_810(var_186_bool); // 0x232 NEW_2
	if(var_186_bool == 0) goto Label_568; // 0x234 JumpB
	lshStopAnimation(); // 0x235 Func
	goto Label_570; // 0x237 Jump
	
Label_570:
	return 0; // 0x23a Return
	
Label_568:
	StopAnimation(); // 0x238 Func
	
Label_572:
	return 0; // 0x23c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x242 PushV
	var_7_object = var_5_object; // 0x243 Mov
	TaskCall(0); // 0x244 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x245 NEW_2
	TaskReturn(); // 0x246 TaskReturn
	return 0; // 0x248 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_573:
	Hold(); // 0x23d Func
	goto Label_573; // 0x23f Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	var_19_float = 130.0; // 0x4 MovF
	func_585(var_18_object, var_19_float); // 0x5 NEW_2
	var_63_bool = var_17_bool == 0; // 0x7 Not
	if(var_63_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_64_int = 0; // 0xd PushV
	func_804(var_64_int); // 0xe NEW_2
	SetNPCName(var_64_int); // 0x10 ObjFunc
	var_65_int = 0; // 0x12 PushV
	func_802(var_65_int); // 0x13 NEW_2
	SetNPCDescription(var_65_int); // 0x15 ObjFunc
	var_66_string = ""; // 0x17 PushV
	func_806(var_66_string); // 0x18 NEW_2
	SetPhoto(var_66_string); // 0x1a ObjFunc
	var_67_string = ""; // 0x1c PushV
	func_808(var_67_string); // 0x1d NEW_2
	SetPhoto2(var_67_string); // 0x1f ObjFunc
	var_68_int = 0; // 0x21 PushV
	func_785(var_68_int); // 0x22 NEW_2
	SetPlayerName(var_68_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_76_bool = var_14_bool; // 0x29 Push
	if(var_76_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x2f PushV
	var_77_object = var_7_object; // 0x30 Mov
	var_78_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_141_bool = var_16_bool == 0; // 0x38 Not
	if(var_141_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_142_object = Obj(); // 0x3f PushV
	var_142_object = var_7_object; // 0x40 Mov
	func_653(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_128_bool)
{
	var_128_bool = 0; // 0x304 MovB
	return 0; // 0x305 Return
}


func_774(var_86_bool)
{
	var_88_int = 0; // 0x307 PushV
	func_729(var_88_int); // 0x308 NEW_2
	var_93_int = 19; // 0x30a PushI
	var_94_bool = var_88_int < var_93_int; // 0x30b LT
	if(var_94_bool == 0) goto Label_783; // 0x30c JumpB
	var_86_bool = 1; // 0x30d MovB
	return 0; // 0x30e Return
	
Label_783:
	var_86_bool = 0; // 0x30f MovB
	return 0; // 0x310 Return
}


func_585(var_17_bool, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; // 0x249 PushV
	GetPosition(var_30_cvector); // 0x24a ObjFunc
	GetEyesHeight(var_29_float); // 0x24c ObjFunc
	var_38_float = GetByIndex(var_30_cvector, 1); // 0x24e PushE
	var_38_float = var_38_float + var_29_float; // 0x24f Add2
	SetByIndex(var_30_cvector, 1) = var_38_float; // 0x250 PopE
	GetPosition(var_31_cvector); // 0x251 Func
	GetEyesHeight(var_29_float); // 0x253 Func
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x255 PushE
	var_39_float = var_39_float + var_29_float; // 0x256 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x257 PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x258 Sub2
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x259 PushE
	var_40_float = 0; // 0x25a MovI
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x25b PopE
	var_41_int = var_32_cvector | var_32_cvector; // 0x25c Or
	var_42_float = sqrt(var_41_int); // 0x25d Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x25e Div2
	var_33_cvector = -var_32_cvector; // 0x25f Neg2
	var_43_float = var_32_cvector * var_19_float; // 0x260 Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x261 PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x262 PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x263 Xor2
	func_690(var_44_cvector, var_45_cvector); // 0x264 NEW_2
	var_52_int = 25; // 0x266 PushI
	var_53_float = var_44_cvector * var_52_int; // 0x267 Mult
	var_54_int = var_43_float + var_53_float; // 0x268 Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x269 PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x26a Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x26b Add2
	IsOverrideActive(var_36_bool); // 0x26c Func
	var_56_bool = var_36_bool; // 0x26e Push
	if(var_56_bool == 0) goto Label_626; // 0x26f JumpB
	var_17_bool = 0; // 0x270 MovB
	return 18; // 0x271 Return
	
Label_626:
	StopWorld(); // 0x272 Func
	CameraTransit(var_35_cvector, var_33_cvector); // 0x274 Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x276 PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x277 PushE
	Rotate(var_57_float, var_58_float); // 0x278 Func
	var_59_bool = 0; // 0x27a PushV
	func_810(var_59_bool); // 0x27b NEW_2
	if(var_59_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_647; // 0x27e Jump
	
Label_647:
	CameraWaitForPlayFinish(); // 0x287 Func
	ResumeWorld(); // 0x289 Func
	var_17_bool = 1; // 0x28b MovB
	return 18; // 0x28c Return
	
Label_639:
	var_60_string = "head"; // 0x27f PushS
	HasAnimationTrack(var_37_bool, var_60_string); // 0x280 Func
	var_61_bool = var_37_bool; // 0x282 Push
	if(var_61_bool == 0) goto Label_647; // 0x283 JumpB
	var_62_string = "head"; // 0x284 PushS
	LookAsyncCamera(var_62_string); // 0x285 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x4b TMov
	var_1_object = var_77_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_83_int = 1; // 0x4e PushI
	if(var_83_int == 0) goto Label_152; // 0x4f JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x50 PushV
	var_85_object = var_1_object; // 0x51 MovT
	func_761(var_84_bool, var_85_object); // 0x52 NEW_2
	if(var_84_bool == 0) goto Label_100; // 0x54 JumpB
	var_95_string = ""; // 0x55 PushV
	var_95_string = "Neutral"; // 0x56 MovS
	func_182(var_78_object, var_95_string); // 0x57 NEW_2
	var_107_int = 514847; // 0x59 PushI
	SetMessage(var_107_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_108_int = 514848; // 0x5e PushI
	var_109_int = -1; // 0x5f PushI
	var_110_int = 16094; // 0x60 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x61 TObjFunc
	goto Label_152; // 0x63 Jump
	
Label_152:
	var_111_bool = 0; // 0x98 PushV
	func_810(var_111_bool); // 0x99 NEW_2
	if(var_111_bool == 0) goto Label_167; // 0x9b JumpB
	
Label_156:
	lshWaitForAnimEnd(); // 0x9c Func
	var_112_string = var_3_string; // 0x9e PushT
	if(var_112_string == 0) goto Label_161; // 0x9f JumpB
	goto Label_166; // 0xa0 Jump
	
Label_166:
	goto Label_181; // 0xa6 Jump
	
Label_181:
	return 0; // 0xb5 Return
	
Label_161:
	var_113_string = ""; // 0xa1 PushV
	var_113_string = var_2_object; // 0xa2 MovT
	func_670(var_113_string); // 0xa3 NEW_2
	goto Label_156; // 0xa5 Jump
	
Label_167:
	var_119_string = "all"; // 0xa7 PushS
	var_120_string = "idle"; // 0xa8 PushS
	PlayAnimation(var_119_string, var_120_string); // 0xa9 Func
	
Label_171:
	WaitForAnimEnd(); // 0xab Func
	var_121_string = var_3_string; // 0xad PushT
	if(var_121_string == 0) goto Label_176; // 0xae JumpB
	goto Label_181; // 0xaf Jump
	
Label_176:
	var_122_string = "all"; // 0xb0 PushS
	var_123_string = "idle"; // 0xb1 PushS
	PlayAnimation(var_122_string, var_123_string); // 0xb2 Func
	goto Label_171; // 0xb4 Jump
	
Label_100:
	var_124_string = ""; // 0x64 PushV
	var_124_string = "Neutral"; // 0x65 MovS
	func_182(var_78_object, var_124_string); // 0x66 NEW_2
	var_125_int = 514849; // 0x68 PushI
	SetMessage(var_125_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_126_bool = 0; var_127_object = Obj(); // 0x6d PushV
	var_127_object = var_1_object; // 0x6e MovT
	func_751(var_126_bool, var_127_object); // 0x6f NEW_2
	if(var_126_bool == 0) goto Label_119; // 0x71 JumpB
	var_130_int = 514850; // 0x72 PushI
	var_131_int = 16097; // 0x73 PushI
	var_132_int = 16096; // 0x74 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x75 TObjFunc
	
Label_119:
	var_133_bool = 0; var_134_object = Obj(); // 0x77 PushV
	var_134_object = var_1_object; // 0x78 MovT
	func_751(var_133_bool, var_134_object); // 0x79 NEW_2
	if(var_133_bool == 0) goto Label_129; // 0x7b JumpB
	var_135_int = 514852; // 0x7c PushI
	var_136_int = 16099; // 0x7d PushI
	var_137_int = 16098; // 0x7e PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x7f TObjFunc
	
Label_129:
	var_138_int = 515494; // 0x81 PushI
	var_139_int = 16591; // 0x82 PushI
	var_140_int = 16590; // 0x83 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x84 TObjFunc
	goto Label_152; // 0x86 Jump
}


func_653()
{
	var_143_bool = 0; var_144_bool = 0; // 0x28d PushV
	CameraSwitchToNormal(); // 0x28e Func
	var_145_bool = 0; // 0x290 PushV
	func_810(var_145_bool); // 0x291 NEW_2
	if(var_145_bool == 0) goto Label_661; // 0x293 JumpB
	goto Label_669; // 0x294 Jump
	
Label_669:
	return 2; // 0x29d Return
	
Label_661:
	var_146_string = "head"; // 0x295 PushS
	HasAnimationTrack(var_144_bool, var_146_string); // 0x296 Func
	var_147_bool = var_144_bool; // 0x298 Push
	if(var_147_bool == 0) goto Label_669; // 0x299 JumpB
	var_148_string = "head"; // 0x29a PushS
	UnlookAsync(var_148_string); // 0x29b Func
}


func_717(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x2cd PushV
	FindActor(var_29_object, var_26_string); // 0x2ce Func
	var_30_bool = var_29_object == 0; // 0x2d0 NullEq
	if(var_30_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_25_bool = 0; // 0x2d2 MovB
	return 2; // 0x2d3 Return
	
Label_724:
	Trigger(var_29_object, var_27_string); // 0x2d4 Func
	var_25_bool = 1; // 0x2d6 MovB
	return 2; // 0x2d7 Return
}


func_785(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x311 PushV
	var_71_string = "branch"; // 0x312 PushS
	GetVariable(var_71_string, var_70_int); // 0x313 Func
	var_72_int = 0; // 0x315 PushI
	var_73_bool = var_70_int == var_72_int; // 0x316 Eq
	if(var_73_bool == 0) goto Label_795; // 0x317 JumpB
	var_68_int = 1; // 0x318 MovI
	return 2; // 0x319 Return
	
Label_795:
	var_74_int = 1; // 0x31b PushI
	var_75_bool = var_70_int == var_74_int; // 0x31c Eq
	if(var_75_bool == 0) goto Label_800; // 0x31d JumpB
	var_68_int = 2; // 0x31e MovI
	return 2; // 0x31f Return
	
Label_800:
	var_68_int = 3; // 0x320 MovI
	return 2; // 0x321 Return
}


func_729(var_88_int)
{
	var_89_float = 0; var_90_float = 0; // 0x2d9 PushV
	GetGameTime(var_90_float); // 0x2da Func
	var_91_int = 0; // 0x2dc PushV
	var_91_int = var_90_float; // 0x2dd Mov
	var_92_int = 24; // 0x2de PushI
	var_88_int = var_91_int % var_92_int; // 0x2df Mod2
	return 2; // 0x2e0 Return
}


func_670(var_113_string)
{
	var_114_float = 0; var_115_float = 0; var_116_float = 0; var_117_float = 0; // 0x29e PushV
	lshGetAnimTimes(var_113_string, var_116_float, var_117_float); // 0x29f Func
	var_118_bool = 0; // 0x2a1 PushB
	lshPlayAnimation(var_116_float, var_117_float, var_118_bool); // 0x2a2 Func
	return 4; // 0x2a4 Return
}


func_737()
{
	var_13_string = ""; var_14_bool = 0; // 0x2e2 PushV
	var_13_string = "sobor@door1"; // 0x2e3 MovS
	var_14_bool = 0; // 0x2e4 MovB
	func_700(var_13_string, var_14_bool); // 0x2e5 NEW_2
	return 0; // 0x2e7 Return
}


func_802(var_65_int)
{
	var_65_int = 515571; // 0x322 MovI
	return 0; // 0x323 Return
}


func_804(var_64_int)
{
	var_64_int = 504029; // 0x324 MovI
	return 0; // 0x325 Return
}


func_677(var_99_string, var_100_bool)
{
	var_103_float = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0; // 0x2a5 PushV
	lshGetAnimTimes(var_99_string, var_105_float, var_106_float); // 0x2a6 Func
	lshPlayAnimation(var_105_float, var_106_float, var_100_bool); // 0x2a8 Func
	return 4; // 0x2aa Return
}


func_806(var_66_string)
{
	var_66_string = "ui/NPC_Black.png"; // 0x326 MovS
	return 0; // 0x327 Return
}


func_808(var_67_string)
{
	var_67_string = "ui/NPC_Black_b.png"; // 0x328 MovS
	return 0; // 0x329 Return
}


func_744()
{
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x2e9 PushV
	var_26_string = "quest_d12_01"; // 0x2ea MovS
	var_27_string = "init_sobor"; // 0x2eb MovS
	func_717(var_25_bool, var_26_string, var_27_string); // 0x2ec NEW_2
	return 0; // 0x2ee Return
}


func_810(var_59_bool)
{
	var_59_bool = 0; // 0x32a MovB
	return 0; // 0x32b Return
}


func_683()
{
	var_8_bool = 0; // 0x2ab PushV
	func_810(var_8_bool); // 0x2ac NEW_2
	if(var_8_bool == 0) goto Label_689; // 0x2ae JumpB
	lshStopSpeech(); // 0x2af Func
	
Label_689:
	return 0; // 0x2b1 Return
}


func_751(var_126_bool, var_127_object)
{
	var_128_bool = 0; var_129_object = Obj(); // 0x2f0 PushV
	var_129_object = var_127_object; // 0x2f1 Mov
	func_771(var_129_object); // 0x2f2 NEW_2
	if(var_128_bool == 0) goto Label_759; // 0x2f4 JumpB
	var_126_bool = 1; // 0x2f5 MovB
	return 0; // 0x2f6 Return
	
Label_759:
	var_126_bool = 0; // 0x2f7 MovB
	return 0; // 0x2f8 Return
}


func_690(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x2b2 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x2b3 Or
	var_48_float = sqrt(var_49_int); // 0x2b4 Sqrt2
	var_50_float = 0.0; // 0x2b5 PushF
	var_51_bool = var_48_float < var_50_float; // 0x2b6 LT
	if(var_51_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x2b8 MovV
	return 2; // 0x2b9 Return
	
Label_698:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x2ba Div2
	return 2; // 0x2bb Return
}


func_182(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0xb7 PushV
	func_810(var_96_bool); // 0xb8 NEW_2
	var_97_bool = var_96_bool == 0; // 0xba Not
	if(var_97_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_98_bool = var_95_string == var_2_object; // 0xbd Eq
	if(var_98_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_99_string = ""; var_100_bool = 0; // 0xc0 PushV
	var_99_string = var_95_string; // 0xc1 Mov
	var_101_string = ""; // 0xc2 PushS
	var_102_bool = var_95_string == var_101_string; // 0xc3 Eq
	if(var_102_bool == 0) goto Label_199; // 0xc4 JumpB
	var_100_bool = 0; // 0xc5 MovB
	goto Label_200; // 0xc6 Jump
	
Label_200:
	func_677(var_99_string, var_100_bool); // 0xc8 NEW_2
	var_2_object = var_95_string; // 0xca TMov
	return 0; // 0xcb Return
	
Label_199:
	var_100_bool = 1; // 0xc7 MovB
}


func_761(var_84_bool, var_85_object)
{
	var_86_bool = 0; var_87_object = Obj(); // 0x2fa PushV
	var_87_object = var_85_object; // 0x2fb Mov
	func_774(var_87_object); // 0x2fc NEW_2
	if(var_86_bool == 0) goto Label_769; // 0x2fe JumpB
	var_84_bool = 1; // 0x2ff MovB
	return 0; // 0x300 Return
	
Label_769:
	var_84_bool = 0; // 0x301 MovB
	return 0; // 0x302 Return
}


func_700(var_13_string, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x2bc PushV
	FindActor(var_16_object, var_13_string); // 0x2bd Func
	var_17_bool = var_16_object == 0; // 0x2bf Not
	if(var_17_bool == 0) goto Label_712; // 0x2c0 JumpB
	var_18_string = "Door "; // 0x2c1 PushS
	var_19_int = var_18_string + var_13_string; // 0x2c2 Add
	var_20_string = " not found"; // 0x2c3 PushS
	var_21_int = var_19_int + var_20_string; // 0x2c4 Add
	Trace(var_21_int); // 0x2c5 Func
	goto Label_715; // 0x2c7 Jump
	
Label_715:
	return 2; // 0x2cb Return
	
Label_712:
	var_22_string = "locked"; // 0x2c8 PushS
	SetProperty(var_22_string, var_14_bool); // 0x2c9 ObjFunc
}


