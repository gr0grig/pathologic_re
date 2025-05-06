task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb9 PushI
	if(var_8_int == 0) goto Label_440; // 0xba JumpB
	func_733(); // 0xbc NEW_2
	var_10_int = 22211; // 0xbe PushI
	var_11_bool = var_7_bool == var_10_int; // 0xbf Eq
	if(var_11_bool == 0) goto Label_203; // 0xc0 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc1 PushV
	var_12_object = var_1_object; // 0xc2 MovT
	var_13_object = var_0_object; // 0xc3 MovT
	func_790(); // 0xc4 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xc6 PushV
	var_55_object = var_1_object; // 0xc7 MovT
	var_56_object = var_0_object; // 0xc8 MovT
	func_819(); // 0xc9 NEW_2
	
Label_203:
	var_81_int = 22213; // 0xcb PushI
	var_82_bool = var_7_bool == var_81_int; // 0xcc Eq
	if(var_82_bool == 0) goto Label_211; // 0xcd JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0xce PushV
	var_83_object = var_1_object; // 0xcf MovT
	var_84_object = var_0_object; // 0xd0 MovT
	func_813(); // 0xd1 NEW_2
	
Label_211:
	var_87_int = 22210; // 0xd3 PushI
	var_88_bool = var_6_int == var_87_int; // 0xd4 Eq
	if(var_88_bool == 0) goto Label_264; // 0xd5 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0xd6 PushV
	var_90_object = var_1_object; // 0xd7 MovT
	func_847(var_90_object); // 0xd8 NEW_2
	if(var_89_bool == 0) goto Label_239; // 0xda JumpB
	var_97_string = ""; // 0xdb PushV
	var_97_string = "Neutral"; // 0xdc MovS
	func_162(var_7_bool, var_97_string); // 0xdd NEW_2
	var_114_int = 520997; // 0xdf PushI
	SetMessage(var_114_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_115_int = 524092; // 0xe4 PushI
	var_116_int = 25396; // 0xe5 PushI
	var_117_int = 25395; // 0xe6 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xe7 TObjFunc
	var_118_int = 524096; // 0xe9 PushI
	var_119_int = 25405; // 0xea PushI
	var_120_int = 25399; // 0xeb PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_121_string = ""; // 0xef PushV
	var_121_string = "Neutral"; // 0xf0 MovS
	func_162(var_7_bool, var_121_string); // 0xf1 NEW_2
	var_122_int = 520999; // 0xf3 PushI
	SetMessage(var_122_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0xf8 PushV
	var_124_object = var_1_object; // 0xf9 MovT
	func_835(var_124_object); // 0xfa NEW_2
	if(var_123_bool == 0) goto Label_258; // 0xfc JumpB
	var_129_int = 521000; // 0xfd PushI
	var_130_int = 29872; // 0xfe PushI
	var_131_int = 22213; // 0xff PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x100 TObjFunc
	
Label_258:
	var_132_int = 528488; // 0x102 PushI
	var_133_int = -1; // 0x103 PushI
	var_134_int = 29877; // 0x104 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_135_int = 29872; // 0x108 PushI
	var_136_bool = var_6_int == var_135_int; // 0x109 Eq
	if(var_136_bool == 0) goto Label_282; // 0x10a JumpB
	var_137_string = ""; // 0x10b PushV
	var_137_string = "Neutral"; // 0x10c MovS
	func_162(var_7_bool, var_137_string); // 0x10d NEW_2
	var_138_int = 528483; // 0x10f PushI
	SetMessage(var_138_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_139_int = 528484; // 0x114 PushI
	var_140_int = 29874; // 0x115 PushI
	var_141_int = 29873; // 0x116 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_142_int = 29874; // 0x11a PushI
	var_143_bool = var_6_int == var_142_int; // 0x11b Eq
	if(var_143_bool == 0) goto Label_305; // 0x11c JumpB
	var_144_string = ""; // 0x11d PushV
	var_144_string = "Neutral"; // 0x11e MovS
	func_162(var_7_bool, var_144_string); // 0x11f NEW_2
	var_145_int = 528485; // 0x121 PushI
	SetMessage(var_145_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_146_int = 528486; // 0x126 PushI
	var_147_int = -1; // 0x127 PushI
	var_148_int = 29875; // 0x128 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x129 TObjFunc
	var_149_int = 528487; // 0x12b PushI
	var_150_int = -1; // 0x12c PushI
	var_151_int = 29876; // 0x12d PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_152_int = 25405; // 0x131 PushI
	var_153_bool = var_6_int == var_152_int; // 0x132 Eq
	if(var_153_bool == 0) goto Label_323; // 0x133 JumpB
	var_154_string = ""; // 0x134 PushV
	var_154_string = "Neutral"; // 0x135 MovS
	func_162(var_7_bool, var_154_string); // 0x136 NEW_2
	var_155_int = 524102; // 0x138 PushI
	SetMessage(var_155_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_156_int = 524103; // 0x13d PushI
	var_157_int = 25401; // 0x13e PushI
	var_158_int = 25406; // 0x13f PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_159_int = 25396; // 0x143 PushI
	var_160_bool = var_6_int == var_159_int; // 0x144 Eq
	if(var_160_bool == 0) goto Label_346; // 0x145 JumpB
	var_161_string = ""; // 0x146 PushV
	var_161_string = "Neutral"; // 0x147 MovS
	func_162(var_7_bool, var_161_string); // 0x148 NEW_2
	var_162_int = 524093; // 0x14a PushI
	SetMessage(var_162_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_163_int = 524094; // 0x14f PushI
	var_164_int = 25398; // 0x150 PushI
	var_165_int = 25397; // 0x151 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x152 TObjFunc
	var_166_int = 524101; // 0x154 PushI
	var_167_int = 25401; // 0x155 PushI
	var_168_int = 25404; // 0x156 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_169_int = 25398; // 0x15a PushI
	var_170_bool = var_6_int == var_169_int; // 0x15b Eq
	if(var_170_bool == 0) goto Label_369; // 0x15c JumpB
	var_171_string = ""; // 0x15d PushV
	var_171_string = "Neutral"; // 0x15e MovS
	func_162(var_7_bool, var_171_string); // 0x15f NEW_2
	var_172_int = 524095; // 0x161 PushI
	SetMessage(var_172_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_173_int = 524097; // 0x166 PushI
	var_174_int = 25401; // 0x167 PushI
	var_175_int = 25400; // 0x168 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x169 TObjFunc
	var_176_int = 524104; // 0x16b PushI
	var_177_int = 25408; // 0x16c PushI
	var_178_int = 25407; // 0x16d PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_179_int = 25408; // 0x171 PushI
	var_180_bool = var_6_int == var_179_int; // 0x172 Eq
	if(var_180_bool == 0) goto Label_392; // 0x173 JumpB
	var_181_string = ""; // 0x174 PushV
	var_181_string = "Neutral"; // 0x175 MovS
	func_162(var_7_bool, var_181_string); // 0x176 NEW_2
	var_182_int = 524105; // 0x178 PushI
	SetMessage(var_182_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_183_int = 524106; // 0x17d PushI
	var_184_int = 25403; // 0x17e PushI
	var_185_int = 25411; // 0x17f PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x180 TObjFunc
	var_186_int = 524107; // 0x182 PushI
	var_187_int = 25401; // 0x183 PushI
	var_188_int = 25412; // 0x184 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_189_int = 25401; // 0x188 PushI
	var_190_bool = var_6_int == var_189_int; // 0x189 Eq
	if(var_190_bool == 0) goto Label_410; // 0x18a JumpB
	var_191_string = ""; // 0x18b PushV
	var_191_string = "Neutral"; // 0x18c MovS
	func_162(var_7_bool, var_191_string); // 0x18d NEW_2
	var_192_int = 524098; // 0x18f PushI
	SetMessage(var_192_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_193_int = 524099; // 0x194 PushI
	var_194_int = 25403; // 0x195 PushI
	var_195_int = 25402; // 0x196 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_196_int = 25403; // 0x19a PushI
	var_197_bool = var_6_int == var_196_int; // 0x19b Eq
	if(var_197_bool == 0) goto Label_428; // 0x19c JumpB
	var_198_string = ""; // 0x19d PushV
	var_198_string = "Neutral"; // 0x19e MovS
	func_162(var_7_bool, var_198_string); // 0x19f NEW_2
	var_199_int = 524100; // 0x1a1 PushI
	SetMessage(var_199_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_200_int = 520998; // 0x1a6 PushI
	var_201_int = -1; // 0x1a7 PushI
	var_202_int = 22211; // 0x1a8 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_3_string = 1; // 0x1ac TMovB
	var_203_bool = 0; // 0x1ad PushV
	func_988(var_203_bool); // 0x1ae NEW_2
	if(var_203_bool == 0) goto Label_436; // 0x1b0 JumpB
	lshStopAnimation(); // 0x1b1 Func
	goto Label_438; // 0x1b3 Jump
	
Label_438:
	return 0; // 0x1b6 Return
	
Label_436:
	StopAnimation(); // 0x1b4 Func
	
Label_440:
	return 0; // 0x1b8 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_605(); // 0x1bb NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x1bd PushV
	var_8_object = var_6_object; // 0x1be Mov
	TaskCall(0); // 0x1bf TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1c0 NEW_2
	TaskReturn(); // 0x1c1 TaskReturn
	return 0; // 0x1c3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x1ee PushS
	var_8_bool = var_6_string == var_7_string; // 0x1ef Eq
	if(var_8_bool == 0) goto Label_500; // 0x1f0 JumpB
	func_473(var_6_string); // 0x1f2 NEW_2
	
Label_500:
	return 0; // 0x1f4 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1f5 Func
	sync(); // 0x1f7 Func
	return 0; // 0x1f9 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1fa PushV
	var_6_bool = 0; // 0x1fb MovB
	var_7_object = var_0_object; // 0x1fc PushT
	if(var_7_object == 0) goto Label_515; // 0x1fd JumpB
	var_8_bool = 0; // 0x1fe PushV
	func_522(var_8_bool); // 0x1ff NEW_2
	if(var_8_bool == 0) goto Label_515; // 0x201 JumpB
	var_6_bool = 1; // 0x202 MovB
	
Label_515:
	if(var_6_bool == 0) goto Label_521; // 0x203 JumpB
	var_9_object = Obj(); // 0x204 PushV
	func_740(var_9_object); // 0x205 NEW_2
	RemoveActor(var_9_object); // 0x207 Func
	
Label_521:
	return 0; // 0x209 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x1c4 PushV
	
Label_453:
	var_8_bool = 0; // 0x1c5 PushV
	func_610(var_8_bool); // 0x1c6 NEW_2
	var_11_bool = var_8_bool == 0; // 0x1c8 Not
	if(var_11_bool == 0) goto Label_461; // 0x1c9 JumpB
	Hold(); // 0x1ca Func
	goto Label_453; // 0x1cc Jump
	
Label_461:
	var_12_int = 3; // 0x1cd PushI
	rand(var_7_float, var_12_int); // 0x1ce Func
	var_13_int = 3; // 0x1d0 PushI
	var_14_int = var_7_float + var_13_int; // 0x1d1 Add
	Sleep(var_14_int); // 0x1d2 Func
	func_524(); // 0x1d5 NEW_2
	goto Label_453; // 0x1d7 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_615(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_982(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_980(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_984(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_986(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_963(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
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
	func_684(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_773(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x305 PushV
	var_34_int = 0; // 0x306 MovI
	
Label_775:
	var_36_string = "all"; // 0x307 PushS
	var_37_string = ""; var_38_int = 0; // 0x308 PushV
	var_38_int = var_34_int; // 0x309 Mov
	func_766(var_37_string, var_38_int); // 0x30a NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x30c Func
	var_42_bool = var_35_bool == 0; // 0x30e Not
	if(var_42_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_788; // 0x310 Jump
	
Label_788:
	var_31_int = var_34_int; // 0x314 Mov
	return 4; // 0x315 Return
	
Label_785:
	var_43_int = 1; // 0x311 PushI
	var_34_int = var_34_int + var_43_int; // 0x312 Add2
	goto Label_775; // 0x313 Jump
}


func_522(var_8_bool)
{
	var_8_bool = 1; // 0x20a MovB
	return 0; // 0x20b Return
}


func_524()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x20c PushV
	WaitForAnimEnd(); // 0x20d Func
	var_29_bool = 0; // 0x20f PushV
	func_610(var_29_bool); // 0x210 NEW_2
	var_30_bool = var_29_bool == 0; // 0x212 Not
	if(var_30_bool == 0) goto Label_533; // 0x213 JumpB
	return 14; // 0x214 Return
	
Label_533:
	var_31_int = 0; // 0x215 PushV
	func_773(var_31_int); // 0x216 NEW_2
	var_22_int = var_31_int; // 0x217 Mov
	var_23_int = 0; // 0x219 MovI
	
Label_538:
	var_44_bool = 0; // 0x21a PushV
	var_44_bool = 0; // 0x21b MovB
	var_45_int = 5; // 0x21c PushI
	var_46_bool = var_23_int < var_45_int; // 0x21d LT
	if(var_46_bool == 0) goto Label_548; // 0x21e JumpB
	var_47_bool = 0; // 0x21f PushV
	func_610(var_47_bool); // 0x220 NEW_2
	if(var_47_bool == 0) goto Label_548; // 0x222 JumpB
	var_44_bool = 1; // 0x223 MovB
	
Label_548:
	if(var_44_bool == 0) goto Label_600; // 0x224 JumpB
	var_48_int = 3; // 0x225 PushI
	irand(var_24_int, var_48_int); // 0x226 Func
	var_49_int = 0; // 0x228 PushI
	var_50_bool = var_24_int == var_49_int; // 0x229 Eq
	if(var_50_bool == 0) goto Label_572; // 0x22a JumpB
	var_51_int = var_22_int; // 0x22b Push
	if(var_51_int == 0) goto Label_571; // 0x22c JumpB
	irand(var_25_int, var_22_int); // 0x22d Func
	var_52_string = "all"; // 0x22f PushS
	var_53_string = ""; var_54_int = 0; // 0x230 PushV
	var_54_int = var_25_int; // 0x231 Mov
	func_766(var_53_string, var_54_int); // 0x232 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x234 Func
	WaitForAnimEnd(var_26_bool); // 0x236 Func
	var_55_bool = var_26_bool == 0; // 0x238 Not
	if(var_55_bool == 0) goto Label_571; // 0x239 JumpB
	goto Label_600; // 0x23a Jump
	
Label_600:
	ResetAAS(); // 0x258 Func
	return 14; // 0x25a Return
	
Label_571:
	goto Label_589; // 0x23b Jump
	
Label_589:
	var_56_bool = 0; // 0x24d PushV
	func_603(var_56_bool); // 0x24e NEW_2
	var_57_bool = var_56_bool == 0; // 0x250 Not
	if(var_57_bool == 0) goto Label_595; // 0x251 JumpB
	goto Label_600; // 0x252 Jump
	
Label_595:
	ResetAAS(); // 0x253 Func
	var_58_int = 1; // 0x255 PushI
	var_23_int = var_23_int + var_58_int; // 0x256 Add2
	goto Label_538; // 0x257 Jump
	
Label_572:
	var_59_int = 1; // 0x23c PushI
	var_60_bool = var_24_int == var_59_int; // 0x23d Eq
	if(var_60_bool == 0) goto Label_586; // 0x23e JumpB
	var_61_int = 4; // 0x23f PushI
	rand(var_27_float, var_61_int); // 0x240 Func
	var_62_int = 1; // 0x242 PushI
	var_63_int = var_27_float + var_62_int; // 0x243 Add
	Sleep(var_63_int, var_28_bool); // 0x244 Func
	var_64_bool = var_28_bool == 0; // 0x246 Not
	if(var_64_bool == 0) goto Label_585; // 0x247 JumpB
	goto Label_600; // 0x248 Jump
	
Label_585:
	goto Label_589; // 0x249 Jump
	
Label_586:
	var_65_int = var_23_int; // 0x24a Push
	if(var_65_int == 0) goto Label_589; // 0x24b JumpB
	goto Label_600; // 0x24c Jump
}


func_913(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x391 PushV
	GetMainOutdoorScene(var_21_object); // 0x392 Func
	var_23_bool = var_21_object == 0; // 0x394 NullEq
	if(var_23_bool == 0) goto Label_924; // 0x395 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x396 PushS
	Trace(var_24_string); // 0x397 Func
	var_22_object = 0; // 0x399 SetNull
	var_18_object = var_22_object; // 0x39a Mov
	return 4; // 0x39b Return
	
Label_924:
	GetMap(var_22_object); // 0x39c ObjFunc
	var_18_object = var_22_object; // 0x39e Mov
	return 4; // 0x39f Return
}


func_790()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x316 PushV
	var_16_string = "b7q01"; // 0x317 PushS
	var_17_int = 5; // 0x318 PushI
	SetVariable(var_16_string, var_17_int); // 0x319 Func
	var_18_object = Obj(); // 0x31b PushV
	func_913(var_18_object); // 0x31c NEW_2
	var_15_object = var_18_object; // 0x31d Mov
	var_25_string = "b7q01WastedGotoViktor"; // 0x31f PushS
	var_26_string = "pt_map_viktor"; // 0x320 PushS
	var_27_int = 1; // 0x321 PushI
	var_28_int = 521026; // 0x322 PushI
	var_29_float = 0; // 0x323 PushV
	func_761(var_29_float); // 0x324 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x326 ObjFunc
	func_859(); // 0x329 NEW_2
	return 2; // 0x32b Return
}


func_162(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0xa3 PushV
	func_988(var_95_bool); // 0xa4 NEW_2
	var_96_bool = var_95_bool == 0; // 0xa6 Not
	if(var_96_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_97_bool = var_94_string == var_2_object; // 0xa9 Eq
	if(var_97_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_98_string = ""; var_99_bool = 0; // 0xac PushV
	var_98_string = var_94_string; // 0xad Mov
	var_100_string = ""; // 0xae PushS
	var_101_bool = var_94_string == var_100_string; // 0xaf Eq
	if(var_101_bool == 0) goto Label_179; // 0xb0 JumpB
	var_99_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_718(var_98_string, var_99_bool); // 0xb4 NEW_2
	var_2_object = var_94_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_99_bool = 1; // 0xb3 MovB
}


func_930(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x3a2 PushV
	GetMainOutdoorScene(var_67_object); // 0x3a3 Func
	var_69_bool = var_67_object == 0; // 0x3a5 NullEq
	if(var_69_bool == 0) goto Label_939; // 0x3a6 JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x3a7 PushS
	Trace(var_70_string); // 0x3a8 Func
	return 8; // 0x3aa Return
	
Label_939:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x3ab ObjFunc
	var_71_bool = var_68_bool == 0; // 0x3ad Not
	if(var_71_bool == 0) goto Label_949; // 0x3ae JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x3af PushS
	var_73_int = var_72_string + var_58_string; // 0x3b0 Add
	var_74_string = " doesnt exist"; // 0x3b1 PushS
	var_75_int = var_73_int + var_74_string; // 0x3b2 Add
	Trace(var_75_int); // 0x3b3 Func
	
Label_949:
	GetMap(var_57_object); // 0x3b5 ObjFunc
	var_76_bool = var_57_object == 0; // 0x3b7 NullEq
	if(var_76_bool == 0) goto Label_957; // 0x3b8 JumpB
	var_77_string = "Can't find map"; // 0x3b9 PushS
	Trace(var_77_string); // 0x3ba Func
	return 8; // 0x3bc Return
	
Label_957:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x3bd PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x3be PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x3bf ObjFunc
	return 8; // 0x3c1 Return
}


func_684()
{
	var_152_bool = 0; var_153_bool = 0; // 0x2ac PushV
	var_154_bool = 1; // 0x2ad PushB
	CameraSwitchToNormal(var_154_bool); // 0x2ae Func
	var_155_bool = 0; // 0x2b0 PushV
	func_988(var_155_bool); // 0x2b1 NEW_2
	if(var_155_bool == 0) goto Label_693; // 0x2b3 JumpB
	goto Label_701; // 0x2b4 Jump
	
Label_701:
	return 2; // 0x2bd Return
	
Label_693:
	var_156_string = "head"; // 0x2b5 PushS
	HasAnimationTrack(var_153_bool, var_156_string); // 0x2b6 Func
	var_157_bool = var_153_bool; // 0x2b8 Push
	if(var_157_bool == 0) goto Label_701; // 0x2b9 JumpB
	var_158_string = "head"; // 0x2ba PushS
	UnlookAsync(var_158_string); // 0x2bb Func
}


func_813()
{
	var_85_string = "oob7WastedMaleM1"; // 0x32e PushS
	var_86_int = 1; // 0x32f PushI
	SetVariable(var_85_string, var_86_int); // 0x330 Func
	return 0; // 0x332 Return
}


func_819()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x334 PushV
	var_60_object = Obj(); // 0x335 PushV
	func_913(var_60_object); // 0x336 NEW_2
	var_57_object = var_60_object; // 0x337 Mov
	var_58_string = "pt_map_viktor"; // 0x339 MovS
	var_59_float = 2; // 0x33a MovI
	func_930(var_57_object, var_58_string, var_59_float); // 0x33b NEW_2
	var_80_object = Obj(); // 0x33d PushV
	func_913(var_80_object); // 0x33e NEW_2
	ShowMap(var_80_object); // 0x340 ObjFunc
	return 0; // 0x342 Return
}


func_702(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x2be PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x2bf Func
	var_127_bool = var_124_bool; // 0x2c1 Push
	if(var_127_bool == 0) goto Label_713; // 0x2c2 JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x2c3 Func
	var_128_bool = 0; // 0x2c5 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x2c6 Func
	goto Label_717; // 0x2c8 Jump
	
Label_717:
	return 6; // 0x2cd Return
	
Label_713:
	var_129_string = "Can't find lsh animation : "; // 0x2c9 PushS
	var_130_int = var_129_string + var_120_string; // 0x2ca Add
	Trace(var_130_int); // 0x2cb Func
}


func_963(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3c3 PushV
	var_73_string = "branch"; // 0x3c4 PushS
	GetVariable(var_73_string, var_72_int); // 0x3c5 Func
	var_74_int = 0; // 0x3c7 PushI
	var_75_bool = var_72_int == var_74_int; // 0x3c8 Eq
	if(var_75_bool == 0) goto Label_973; // 0x3c9 JumpB
	var_70_int = 1; // 0x3ca MovI
	return 2; // 0x3cb Return
	
Label_973:
	var_76_int = 1; // 0x3cd PushI
	var_77_bool = var_72_int == var_76_int; // 0x3ce Eq
	if(var_77_bool == 0) goto Label_978; // 0x3cf JumpB
	var_70_int = 2; // 0x3d0 MovI
	return 2; // 0x3d1 Return
	
Label_978:
	var_70_int = 3; // 0x3d2 MovI
	return 2; // 0x3d3 Return
}


func_835(var_138_bool)
{
	var_140_int = 0; var_141_string = ""; // 0x344 PushV
	var_141_string = "oob7WastedMaleM1"; // 0x345 MovS
	func_756(var_140_int, var_141_string); // 0x346 NEW_2
	var_142_int = 0; // 0x348 PushI
	var_143_bool = var_140_int == var_142_int; // 0x349 Eq
	if(var_143_bool == 0) goto Label_845; // 0x34a JumpB
	var_138_bool = 1; // 0x34b MovB
	return 0; // 0x34c Return
	
Label_845:
	var_138_bool = 0; // 0x34d MovB
	return 0; // 0x34e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_132; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_847(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_105; // 0x54 JumpB
	var_94_string = ""; // 0x55 PushV
	var_94_string = "Neutral"; // 0x56 MovS
	func_162(var_80_object, var_94_string); // 0x57 NEW_2
	var_111_int = 520997; // 0x59 PushI
	SetMessage(var_111_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_112_int = 524092; // 0x5e PushI
	var_113_int = 25396; // 0x5f PushI
	var_114_int = 25395; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	var_115_int = 524096; // 0x63 PushI
	var_116_int = 25405; // 0x64 PushI
	var_117_int = 25399; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	goto Label_132; // 0x68 Jump
	
Label_132:
	var_118_bool = 0; // 0x84 PushV
	func_988(var_118_bool); // 0x85 NEW_2
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
	func_702(var_120_string); // 0x8f NEW_2
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
	func_162(var_80_object, var_136_string); // 0x6b NEW_2
	var_137_int = 520999; // 0x6d PushI
	SetMessage(var_137_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_138_bool = 0; var_139_object = Obj(); // 0x72 PushV
	var_139_object = var_1_object; // 0x73 MovT
	func_835(var_139_object); // 0x74 NEW_2
	if(var_138_bool == 0) goto Label_124; // 0x76 JumpB
	var_144_int = 521000; // 0x77 PushI
	var_145_int = 29872; // 0x78 PushI
	var_146_int = 22213; // 0x79 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7a TObjFunc
	
Label_124:
	var_147_int = 528488; // 0x7c PushI
	var_148_int = -1; // 0x7d PushI
	var_149_int = 29877; // 0x7e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_718(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x2ce PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x2cf Func
	var_108_bool = var_105_bool; // 0x2d1 Push
	if(var_108_bool == 0) goto Label_728; // 0x2d2 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x2d3 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x2d5 Func
	goto Label_732; // 0x2d7 Jump
	
Label_732:
	return 6; // 0x2dc Return
	
Label_728:
	var_109_string = "Can't find lsh animation : "; // 0x2d8 PushS
	var_110_int = var_109_string + var_98_string; // 0x2d9 Add
	Trace(var_110_int); // 0x2da Func
}


func_847(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x350 PushV
	var_89_string = "b7q01"; // 0x351 MovS
	func_756(var_88_int, var_89_string); // 0x352 NEW_2
	var_92_int = 4; // 0x354 PushI
	var_93_bool = var_88_int == var_92_int; // 0x355 Eq
	if(var_93_bool == 0) goto Label_857; // 0x356 JumpB
	var_86_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_86_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_980(var_67_int)
{
	var_67_int = 515556; // 0x3d4 MovI
	return 0; // 0x3d5 Return
}


func_982(var_66_int)
{
	var_66_int = 503341; // 0x3d6 MovI
	return 0; // 0x3d7 Return
}


func_984(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png"; // 0x3d8 MovS
	return 0; // 0x3d9 Return
}


func_473(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1d9 PushV
	var_0_object = 1; // 0x1da TMovB
	IsLoaded(var_10_bool); // 0x1db Func
	var_11_bool = 0; // 0x1dd PushV
	var_11_bool = 0; // 0x1de MovB
	var_12_bool = var_10_bool == 0; // 0x1df Not
	if(var_12_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_13_bool = 0; // 0x1e1 PushV
	func_522(var_13_bool); // 0x1e2 NEW_2
	if(var_13_bool == 0) goto Label_486; // 0x1e4 JumpB
	var_11_bool = 1; // 0x1e5 MovB
	
Label_486:
	if(var_11_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_14_object = Obj(); // 0x1e7 PushV
	func_740(var_14_object); // 0x1e8 NEW_2
	RemoveActor(var_14_object); // 0x1ea Func
	
Label_492:
	return 2; // 0x1ec Return
}


func_986(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png"; // 0x3da MovS
	return 0; // 0x3db Return
}


func_603(var_56_bool)
{
	var_56_bool = 1; // 0x25b MovB
	return 0; // 0x25c Return
}


func_988(var_61_bool)
{
	var_61_bool = 0; // 0x3dc MovB
	return 0; // 0x3dd Return
}


func_605()
{
	StopAnimation(); // 0x25d Func
	StopGroup0(); // 0x25f Func
	return 0; // 0x261 Return
}


func_733()
{
	var_9_bool = 0; // 0x2dd PushV
	func_988(var_9_bool); // 0x2de NEW_2
	if(var_9_bool == 0) goto Label_739; // 0x2e0 JumpB
	lshStopSpeech(); // 0x2e1 Func
	
Label_739:
	return 0; // 0x2e3 Return
}


func_859()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x35b PushV
	var_34_int = 258; // 0x35c PushI
	var_35_int = 1; // 0x35d PushI
	var_36_int = 521030; // 0x35e PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x35f Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x361 PushV
	var_38_object = var_33_object; // 0x362 Mov
	var_39_int = 253; // 0x363 MovI
	func_885(var_37_bool, var_38_object, var_39_int); // 0x364 NEW_2
	return 2; // 0x366 Return
}


func_610(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x262 PushV
	IsLoaded(var_10_bool); // 0x263 Func
	var_8_bool = var_10_bool; // 0x265 Mov
	return 2; // 0x266 Return
}


func_740(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2e4 PushV
	self(var_11_object); // 0x2e5 Func
	var_9_object = var_11_object; // 0x2e7 Mov
	return 2; // 0x2e8 Return
}


func_615(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x267 PushV
	GetPosition(var_31_cvector); // 0x268 ObjFunc
	GetEyesHeight(var_30_float); // 0x26a ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x26c PushE
	var_39_float = var_39_float + var_30_float; // 0x26d Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x26e PopE
	GetPosition(var_32_cvector); // 0x26f Func
	GetEyesHeight(var_30_float); // 0x271 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x273 PushE
	var_40_float = var_40_float + var_30_float; // 0x274 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x275 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x276 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x277 PushE
	var_41_float = 0; // 0x278 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x279 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x27a Or
	var_43_float = sqrt(var_42_int); // 0x27b Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x27c Div2
	var_34_cvector = -var_33_cvector; // 0x27d Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x27e Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x27f PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x280 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x281 Xor2
	func_746(var_45_cvector, var_46_cvector); // 0x282 NEW_2
	var_53_int = 25; // 0x284 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x285 Mult
	var_55_int = var_44_float + var_54_float; // 0x286 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x287 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x288 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x289 Add2
	IsOverrideActive(var_37_bool); // 0x28a Func
	var_57_bool = var_37_bool; // 0x28c Push
	if(var_57_bool == 0) goto Label_656; // 0x28d JumpB
	var_18_bool = 0; // 0x28e MovB
	return 18; // 0x28f Return
	
Label_656:
	StopWorld(); // 0x290 Func
	var_58_bool = 1; // 0x292 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x293 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x295 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x296 PushE
	Rotate(var_59_float, var_60_float); // 0x297 Func
	var_61_bool = 0; // 0x299 PushV
	func_988(var_61_bool); // 0x29a NEW_2
	if(var_61_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_678; // 0x29d Jump
	
Label_678:
	CameraWaitForPlayFinish(); // 0x2a6 Func
	ResumeWorld(); // 0x2a8 Func
	var_18_bool = 1; // 0x2aa MovB
	return 18; // 0x2ab Return
	
Label_670:
	var_62_string = "head"; // 0x29e PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x29f Func
	var_63_bool = var_38_bool; // 0x2a1 Push
	if(var_63_bool == 0) goto Label_678; // 0x2a2 JumpB
	var_64_string = "head"; // 0x2a3 PushS
	LookAsyncCamera(var_64_string); // 0x2a4 Func
}


func_872(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x368 PushV
	GetDiaryRoot(var_48_object); // 0x369 Func
	var_49_bool = var_48_object == 0; // 0x36b Not
	if(var_49_bool == 0) goto Label_882; // 0x36c JumpB
	var_50_string = "Can't retrieve diary root"; // 0x36d PushS
	Trace(var_50_string); // 0x36e Func
	var_46_object = 0; // 0x370 MovB
	return 2; // 0x371 Return
	
Label_882:
	var_46_object = var_48_object; // 0x372 Mov
	return 2; // 0x373 Return
}


func_746(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2ea PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2eb Or
	var_49_float = sqrt(var_50_int); // 0x2ec Sqrt2
	var_51_float = 0.0; // 0x2ed PushF
	var_52_bool = var_49_float < var_51_float; // 0x2ee LT
	if(var_52_bool == 0) goto Label_754; // 0x2ef JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2f0 MovV
	return 2; // 0x2f1 Return
	
Label_754:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2f2 Div2
	return 2; // 0x2f3 Return
}


func_756(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x2f4 PushV
	GetVariable(var_89_string, var_91_int); // 0x2f5 Func
	var_88_int = var_91_int; // 0x2f7 Mov
	return 2; // 0x2f8 Return
}


func_885(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x375 PushV
	var_46_object = Obj(); // 0x376 PushV
	func_872(var_46_object); // 0x377 NEW_2
	var_43_object = var_46_object; // 0x378 Mov
	Find(var_39_int, var_44_object); // 0x37a ObjFunc
	var_51_bool = var_44_object == 0; // 0x37c Not
	if(var_51_bool == 0) goto Label_900; // 0x37d JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x37e PushS
	var_53_int = var_52_string + var_39_int; // 0x37f Add
	Trace(var_53_int); // 0x380 Func
	var_37_bool = 0; // 0x382 MovB
	return 6; // 0x383 Return
	
Label_900:
	AddChild(var_38_object); // 0x384 ObjFunc
	var_54_int = 7; // 0x386 PushI
	SendWorldWndMessage(var_54_int); // 0x387 Func
	GetCategory(var_45_int); // 0x389 ObjFunc
	SetDiarySection(var_45_int); // 0x38b Func
	var_37_bool = 0; // 0x38d MovB
	return 6; // 0x38e Return
}


func_761(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x2f9 PushV
	GetGameTime(var_31_float); // 0x2fa Func
	var_29_float = var_31_float; // 0x2fc Mov
	return 2; // 0x2fd Return
}


func_766(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2fe PushV
	var_40_string = "idle"; // 0x2ff MovS
	var_41_int = var_38_int; // 0x300 Push
	if(var_41_int == 0) goto Label_771; // 0x301 JumpB
	var_40_string = var_40_string + var_38_int; // 0x302 Add2
	
Label_771:
	var_37_string = var_40_string; // 0x303 Mov
	return 2; // 0x304 Return
}


