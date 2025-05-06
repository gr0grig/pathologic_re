task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xcc PushI
	if(var_12_int == 0) goto Label_463; // 0xcd JumpB
	func_833(); // 0xcf NEW_2
	var_14_int = 27064; // 0xd1 PushI
	var_15_bool = var_11_object == var_14_int; // 0xd2 Eq
	if(var_15_bool == 0) goto Label_227; // 0xd3 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xd4 PushV
	var_16_object = var_1_object; // 0xd5 MovT
	var_17_object = var_0_object; // 0xd6 MovT
	func_994(); // 0xd7 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xd9 PushV
	var_43_object = var_1_object; // 0xda MovT
	var_44_object = var_0_object; // 0xdb MovT
	func_1020(var_44_object); // 0xdc NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0xde PushV
	var_83_object = var_1_object; // 0xdf MovT
	var_84_object = var_0_object; // 0xe0 MovT
	func_1010(var_84_object); // 0xe1 NEW_2
	
Label_227:
	var_104_int = 43039; // 0xe3 PushI
	var_105_bool = var_11_object == var_104_int; // 0xe4 Eq
	if(var_105_bool == 0) goto Label_235; // 0xe5 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xe6 PushV
	var_106_object = var_1_object; // 0xe7 MovT
	var_107_object = var_0_object; // 0xe8 MovT
	func_994(); // 0xe9 NEW_2
	
Label_235:
	var_108_int = 27080; // 0xeb PushI
	var_109_bool = var_11_object == var_108_int; // 0xec Eq
	if(var_109_bool == 0) goto Label_243; // 0xed JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0xee PushV
	var_110_object = var_1_object; // 0xef MovT
	var_111_object = var_0_object; // 0xf0 MovT
	func_988(); // 0xf1 NEW_2
	
Label_243:
	var_114_int = 27082; // 0xf3 PushI
	var_115_bool = var_11_object == var_114_int; // 0xf4 Eq
	if(var_115_bool == 0) goto Label_251; // 0xf5 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xf6 PushV
	var_116_object = var_1_object; // 0xf7 MovT
	var_117_object = var_0_object; // 0xf8 MovT
	func_1003(); // 0xf9 NEW_2
	
Label_251:
	var_124_int = 27061; // 0xfb PushI
	var_125_bool = var_10_bool == var_124_int; // 0xfc Eq
	if(var_125_bool == 0) goto Label_323; // 0xfd JumpB
	var_126_bool = 0; // 0xfe PushV
	var_126_bool = 0; // 0xff MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x100 PushV
	var_128_object = var_1_object; // 0x101 MovT
	func_1027(var_128_object); // 0x102 NEW_2
	if(var_127_bool == 0) goto Label_268; // 0x104 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x105 PushV
	var_136_object = var_1_object; // 0x106 MovT
	func_1063(var_136_object); // 0x107 NEW_2
	var_141_bool = var_135_bool == 0; // 0x109 Not
	if(var_141_bool == 0) goto Label_268; // 0x10a JumpB
	var_126_bool = 1; // 0x10b MovB
	
Label_268:
	if(var_126_bool == 0) goto Label_289; // 0x10c JumpB
	var_142_string = ""; // 0x10d PushV
	var_142_string = "Neutral"; // 0x10e MovS
	func_181(var_11_object, var_142_string); // 0x10f NEW_2
	var_159_int = 525749; // 0x111 PushI
	SetMessage(var_159_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_160_int = 525750; // 0x116 PushI
	var_161_int = 27063; // 0x117 PushI
	var_162_int = 27062; // 0x118 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x119 TObjFunc
	var_163_int = 540951; // 0x11b PushI
	var_164_int = 43036; // 0x11c PushI
	var_165_int = 43035; // 0x11d PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_166_string = ""; // 0x121 PushV
	var_166_string = "Neutral"; // 0x122 MovS
	func_181(var_11_object, var_166_string); // 0x123 NEW_2
	var_167_int = 525753; // 0x125 PushI
	SetMessage(var_167_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_168_bool = 0; // 0x12a PushV
	var_168_bool = 0; // 0x12b MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x12c PushV
	var_170_object = var_1_object; // 0x12d MovT
	func_1039(var_170_object); // 0x12e NEW_2
	if(var_169_bool == 0) goto Label_311; // 0x130 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x131 PushV
	var_176_object = var_1_object; // 0x132 MovT
	func_1051(var_176_object); // 0x133 NEW_2
	if(var_175_bool == 0) goto Label_311; // 0x135 JumpB
	var_168_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_168_bool == 0) goto Label_317; // 0x137 JumpB
	var_181_int = 525768; // 0x138 PushI
	var_182_int = 27081; // 0x139 PushI
	var_183_int = 27080; // 0x13a PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x13b TObjFunc
	
Label_317:
	var_184_int = 525754; // 0x13d PushI
	var_185_int = -1; // 0x13e PushI
	var_186_int = 27066; // 0x13f PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_187_int = 27081; // 0x143 PushI
	var_188_bool = var_10_bool == var_187_int; // 0x144 Eq
	if(var_188_bool == 0) goto Label_341; // 0x145 JumpB
	var_189_string = ""; // 0x146 PushV
	var_189_string = "Neutral"; // 0x147 MovS
	func_181(var_11_object, var_189_string); // 0x148 NEW_2
	var_190_int = 525769; // 0x14a PushI
	SetMessage(var_190_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_191_int = 525770; // 0x14f PushI
	var_192_int = -1; // 0x150 PushI
	var_193_int = 27082; // 0x151 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_194_int = 43036; // 0x155 PushI
	var_195_bool = var_10_bool == var_194_int; // 0x156 Eq
	if(var_195_bool == 0) goto Label_364; // 0x157 JumpB
	var_196_string = ""; // 0x158 PushV
	var_196_string = "Neutral"; // 0x159 MovS
	func_181(var_11_object, var_196_string); // 0x15a NEW_2
	var_197_int = 540952; // 0x15c PushI
	SetMessage(var_197_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_198_int = 540953; // 0x161 PushI
	var_199_int = 27063; // 0x162 PushI
	var_200_int = 43037; // 0x163 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x164 TObjFunc
	var_201_int = 542080; // 0x166 PushI
	var_202_int = 44374; // 0x167 PushI
	var_203_int = 44373; // 0x168 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_204_int = 44374; // 0x16c PushI
	var_205_bool = var_10_bool == var_204_int; // 0x16d Eq
	if(var_205_bool == 0) goto Label_387; // 0x16e JumpB
	var_206_string = ""; // 0x16f PushV
	var_206_string = "Neutral"; // 0x170 MovS
	func_181(var_11_object, var_206_string); // 0x171 NEW_2
	var_207_int = 542081; // 0x173 PushI
	SetMessage(var_207_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_208_int = 542082; // 0x178 PushI
	var_209_int = 44377; // 0x179 PushI
	var_210_int = 44375; // 0x17a PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x17b TObjFunc
	var_211_int = 542083; // 0x17d PushI
	var_212_int = 44377; // 0x17e PushI
	var_213_int = 44376; // 0x17f PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_214_int = 44377; // 0x183 PushI
	var_215_bool = var_10_bool == var_214_int; // 0x184 Eq
	if(var_215_bool == 0) goto Label_405; // 0x185 JumpB
	var_216_string = ""; // 0x186 PushV
	var_216_string = "Neutral"; // 0x187 MovS
	func_181(var_11_object, var_216_string); // 0x188 NEW_2
	var_217_int = 542084; // 0x18a PushI
	SetMessage(var_217_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_218_int = 542085; // 0x18f PushI
	var_219_int = 27063; // 0x190 PushI
	var_220_int = 44379; // 0x191 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_221_int = 27063; // 0x195 PushI
	var_222_bool = var_10_bool == var_221_int; // 0x196 Eq
	if(var_222_bool == 0) goto Label_423; // 0x197 JumpB
	var_223_string = ""; // 0x198 PushV
	var_223_string = "Neutral"; // 0x199 MovS
	func_181(var_11_object, var_223_string); // 0x19a NEW_2
	var_224_int = 525751; // 0x19c PushI
	SetMessage(var_224_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_225_int = 529230; // 0x1a1 PushI
	var_226_int = 30685; // 0x1a2 PushI
	var_227_int = 30684; // 0x1a3 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_228_int = 30685; // 0x1a7 PushI
	var_229_bool = var_10_bool == var_228_int; // 0x1a8 Eq
	if(var_229_bool == 0) goto Label_451; // 0x1a9 JumpB
	var_230_string = ""; // 0x1aa PushV
	var_230_string = "Neutral"; // 0x1ab MovS
	func_181(var_11_object, var_230_string); // 0x1ac NEW_2
	var_231_int = 529231; // 0x1ae PushI
	SetMessage(var_231_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_232_bool = 0; var_233_object = Obj(); // 0x1b3 PushV
	var_233_object = var_1_object; // 0x1b4 MovT
	func_1075(var_232_bool, var_233_object); // 0x1b5 NEW_2
	if(var_232_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_241_int = 525752; // 0x1b8 PushI
	var_242_int = -1; // 0x1b9 PushI
	var_243_int = 27064; // 0x1ba PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1bb TObjFunc
	
Label_445:
	var_244_int = 540954; // 0x1bd PushI
	var_245_int = -1; // 0x1be PushI
	var_246_int = 43039; // 0x1bf PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x1c0 TObjFunc
	return 0; // 0x1c2 Return
	
Label_451:
	var_3_string = 1; // 0x1c3 TMovB
	var_247_bool = 0; // 0x1c4 PushV
	func_962(var_247_bool); // 0x1c5 NEW_2
	if(var_247_bool == 0) goto Label_459; // 0x1c7 JumpB
	lshStopAnimation(); // 0x1c8 Func
	goto Label_461; // 0x1ca Jump
	
Label_461:
	return 0; // 0x1cd Return
	
Label_459:
	StopAnimation(); // 0x1cb Func
	
Label_463:
	return 0; // 0x1cf Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_550(var_9_object, var_10_object); // 0x1dc NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x1de PushV
	var_15_object = var_10_object; // 0x1df Mov
	TaskCall(0); // 0x1e0 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	return 0; // 0x1e4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x210 PushI
	var_12_bool = var_10_int == var_11_int; // 0x211 Eq
	if(var_12_bool == 0) goto Label_549; // 0x212 JumpB
	var_13_bool = 0; // 0x213 PushV
	func_512(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x214 NEW_2
	if(var_13_bool == 0) goto Label_543; // 0x216 JumpB
	var_26_bool = var_2_object == 0; // 0x217 Not
	if(var_26_bool == 0) goto Label_542; // 0x218 JumpB
	var_27_object = Obj(); // 0x219 PushV
	var_27_object = var_4_bool; // 0x21a MovT
	func_822(var_27_object); // 0x21b NEW_2
	var_2_object = 1; // 0x21d TMovB
	
Label_542:
	goto Label_549; // 0x21e Jump
	
Label_549:
	return 0; // 0x225 Return
	
Label_543:
	var_34_object = var_2_object; // 0x21f PushT
	if(var_34_object == 0) goto Label_549; // 0x220 JumpB
	var_35_string = "head"; // 0x221 PushS
	UnlookAsync(var_35_string); // 0x222 Func
	var_2_object = 0; // 0x224 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_464:
	var_10_float = 0; var_11_float = 0; // 0x1d0 PushV
	var_10_float = 300; // 0x1d1 MovI
	var_11_float = 100; // 0x1d2 MovI
	func_485(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x1d3 NEW_2
	var_72_int = 3; // 0x1d5 PushI
	Sleep(var_72_int); // 0x1d6 Func
	goto Label_464; // 0x1d8 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_704(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_956(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_954(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_958(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_960(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1150(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_172_bool = var_24_bool == 0; // 0x38 Not
	if(var_172_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_173_object = Obj(); // 0x3f PushV
	var_173_object = var_15_object; // 0x40 Mov
	func_773(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_512(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x200 PushV
	var_16_bool = var_4_bool == 0; // 0x201 NullEq
	if(var_16_bool == 0) goto Label_517; // 0x202 JumpB
	var_13_bool = 0; // 0x203 MovB
	return 2; // 0x204 Return
	
Label_517:
	var_17_float = 0; var_18_object = Obj(); // 0x205 PushV
	var_18_object = var_4_bool; // 0x206 MovT
	func_650(var_18_object); // 0x207 NEW_2
	var_15_float = sqrt(var_17_float); // 0x209 Sqrt2
	var_25_object = var_2_object; // 0x20a PushT
	if(var_25_object == 0) goto Label_525; // 0x20b JumpB
	var_15_float = var_15_float - var_1_object; // 0x20c Sub2
	
Label_525:
	var_13_bool = var_15_float < var_0_object; // 0x20d LT2
	return 2; // 0x20e Return
}


func_897(var_45_bool, var_46_object, var_47_float)
{
	var_48_bool = var_46_object == 0; // 0x382 Not
	if(var_48_bool == 0) goto Label_902; // 0x383 JumpB
	var_45_bool = 0; // 0x384 MovB
	return 0; // 0x385 Return
	
Label_902:
	var_49_int = 0; // 0x386 PushI
	var_50_bool = var_47_float > var_49_int; // 0x387 GT
	if(var_50_bool == 0) goto Label_909; // 0x388 JumpB
	var_51_int = 8; // 0x389 PushI
	SendWorldWndMessage(var_51_int); // 0x38a Func
	goto Label_918; // 0x38c Jump
	
Label_918:
	var_52_float = 0; // 0x396 PushV
	var_52_float = var_47_float; // 0x397 Mov
	func_932(var_52_float); // 0x398 NEW_2
	var_56_bool = 0; var_57_object = Obj(); var_58_string = ""; var_59_float = 0; var_60_float = 0; var_61_float = 0; // 0x39a PushV
	var_57_object = var_46_object; // 0x39b Mov
	var_58_string = "reputation"; // 0x39c MovS
	var_59_float = var_47_float; // 0x39d Mov
	var_60_float = 0; // 0x39e MovI
	var_61_float = 1; // 0x39f MovI
	func_670(var_56_bool, var_57_object, var_58_string, var_59_float, var_60_float, var_61_float); // 0x3a0 NEW_2
	var_45_bool = 1; // 0x3a2 MovB
	return 0; // 0x3a3 Return
	
Label_909:
	var_80_int = 0; // 0x38d PushI
	var_81_bool = var_47_float < var_80_int; // 0x38e LT
	if(var_81_bool == 0) goto Label_916; // 0x38f JumpB
	var_82_int = 9; // 0x390 PushI
	SendWorldWndMessage(var_82_int); // 0x391 Func
	goto Label_918; // 0x393 Jump
	
Label_916:
	var_45_bool = 0; // 0x394 MovB
	return 0; // 0x395 Return
}


func_1027(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x404 PushV
	var_97_string = "k4q02"; // 0x405 MovS
	func_861(var_96_int, var_97_string); // 0x406 NEW_2
	var_100_int = 1; // 0x408 PushI
	var_101_bool = var_96_int == var_100_int; // 0x409 Eq
	if(var_101_bool == 0) goto Label_1037; // 0x40a JumpB
	var_94_bool = 1; // 0x40b MovB
	return 0; // 0x40c Return
	
Label_1037:
	var_94_bool = 0; // 0x40d MovB
	return 0; // 0x40e Return
}


func_643(var_60_bool)
{
	var_60_bool = 1; // 0x283 MovB
	return 0; // 0x284 Return
}


func_773()
{
	var_174_bool = 0; var_175_bool = 0; // 0x305 PushV
	var_176_bool = 1; // 0x306 PushB
	CameraSwitchToNormal(var_176_bool); // 0x307 Func
	var_177_bool = 0; // 0x309 PushV
	func_962(var_177_bool); // 0x30a NEW_2
	if(var_177_bool == 0) goto Label_782; // 0x30c JumpB
	goto Label_790; // 0x30d Jump
	
Label_790:
	return 2; // 0x316 Return
	
Label_782:
	var_178_string = "head"; // 0x30e PushS
	HasAnimationTrack(var_175_bool, var_178_string); // 0x30f Func
	var_179_bool = var_175_bool; // 0x311 Push
	if(var_179_bool == 0) goto Label_790; // 0x312 JumpB
	var_180_string = "head"; // 0x313 PushS
	UnlookAsync(var_180_string); // 0x314 Func
}


func_645()
{
	StopAnimation(); // 0x285 Func
	StopGroup0(); // 0x287 Func
	return 0; // 0x289 Return
}


func_650(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x28a PushV
	GetPosition(var_22_cvector); // 0x28b Func
	GetPosition(var_23_cvector); // 0x28d ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x28f Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x290 Or2
	return 6; // 0x291 Return
}


func_1039(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x410 PushV
	var_157_string = "k4q02"; // 0x411 MovS
	func_861(var_156_int, var_157_string); // 0x412 NEW_2
	var_158_int = 2; // 0x414 PushI
	var_159_bool = var_156_int == var_158_int; // 0x415 Eq
	if(var_159_bool == 0) goto Label_1049; // 0x416 JumpB
	var_154_bool = 1; // 0x417 MovB
	return 0; // 0x418 Return
	
Label_1049:
	var_154_bool = 0; // 0x419 MovB
	return 0; // 0x41a Return
}


func_658(var_64_bool, var_65_object, var_66_string)
{
	var_67_bool = 0; var_68_bool = 0; // 0x292 PushV
	var_69_string = "HasProperty"; // 0x293 PushS
	var_70_int = 2; // 0x294 PushI
	var_71_bool = IsFuncExist(var_65_object, var_69_string, var_70_int); // 0x295 FuncExist
	var_72_bool = var_71_bool == 0; // 0x296 Not
	if(var_72_bool == 0) goto Label_666; // 0x297 JumpB
	var_64_bool = 0; // 0x298 MovB
	return 2; // 0x299 Return
	
Label_666:
	HasProperty(var_66_string, var_68_bool); // 0x29a ObjFunc
	var_64_bool = var_68_bool; // 0x29c Mov
	return 2; // 0x29d Return
}


func_791(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0x317 PushV
	lshHasAnimation(var_139_bool, var_135_string); // 0x318 Func
	var_142_bool = var_139_bool; // 0x31a Push
	if(var_142_bool == 0) goto Label_802; // 0x31b JumpB
	lshGetAnimTimes(var_135_string, var_140_float, var_141_float); // 0x31c Func
	var_143_bool = 0; // 0x31e PushB
	lshPlayAnimation(var_140_float, var_141_float, var_143_bool); // 0x31f Func
	goto Label_806; // 0x321 Jump
	
Label_806:
	return 6; // 0x326 Return
	
Label_802:
	var_144_string = "Can't find lsh animation : "; // 0x322 PushS
	var_145_int = var_144_string + var_135_string; // 0x323 Add
	Trace(var_145_int); // 0x324 Func
}


func_1051(var_160_bool)
{
	var_162_int = 0; var_163_string = ""; // 0x41c PushV
	var_163_string = "ook4BirdmaskTheater1"; // 0x41d MovS
	func_861(var_162_int, var_163_string); // 0x41e NEW_2
	var_164_int = 0; // 0x420 PushI
	var_165_bool = var_162_int == var_164_int; // 0x421 Eq
	if(var_165_bool == 0) goto Label_1061; // 0x422 JumpB
	var_160_bool = 1; // 0x423 MovB
	return 0; // 0x424 Return
	
Label_1061:
	var_160_bool = 0; // 0x425 MovB
	return 0; // 0x426 Return
}


func_670(var_56_bool, var_57_object, var_58_string, var_59_float, var_60_float, var_61_float)
{
	var_62_float = 0; var_63_float = 0; // 0x29e PushV
	var_64_bool = 0; var_65_object = Obj(); var_66_string = ""; // 0x29f PushV
	var_65_object = var_57_object; // 0x2a0 Mov
	var_66_string = var_58_string; // 0x2a1 Mov
	func_658(var_64_bool, var_65_object, var_66_string); // 0x2a2 NEW_2
	var_73_bool = var_64_bool == 0; // 0x2a4 Not
	if(var_73_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_56_bool = 0; // 0x2a6 MovB
	return 2; // 0x2a7 Return
	
Label_680:
	GetProperty(var_58_string, var_63_float); // 0x2a8 ObjFunc
	var_74_float = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x2aa PushV
	var_75_float = var_63_float + var_59_float; // 0x2ab Add2
	var_76_float = var_60_float; // 0x2ac Mov
	var_77_float = var_61_float; // 0x2ad Mov
	func_850(var_74_float, var_75_float, var_76_float, var_77_float); // 0x2ae NEW_2
	SetProperty(var_58_string, var_74_float); // 0x2b0 ObjFunc
	var_56_bool = 1; // 0x2b2 MovB
	return 2; // 0x2b3 Return
}


func_932(var_52_float)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x3a4 PushV
	CreateFloatVector(var_54_object); // 0x3a5 Func
	add(var_52_float); // 0x3a7 ObjFunc
	var_55_int = 16; // 0x3a9 PushI
	SendWorldWndMessage(var_55_int, var_54_object); // 0x3aa Func
	return 2; // 0x3ac Return
}


func_550(var_2_object, var_3_string)
{
	func_645(); // 0x227 NEW_2
	var_11_int = 10; // 0x229 PushI
	KillTimer(var_11_int); // 0x22a Func
	var_12_object = var_2_object; // 0x22c PushT
	if(var_12_object == 0) goto Label_562; // 0x22d JumpB
	var_13_string = "head"; // 0x22e PushS
	UnlookAsync(var_13_string); // 0x22f Func
	var_2_object = 0; // 0x231 TMovB
	
Label_562:
	var_3_string = 1; // 0x232 TMovB
	return 0; // 0x233 Return
}


func_1063(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x428 PushV
	var_105_string = "k4q02BirdmaskGotoMaria"; // 0x429 MovS
	func_861(var_104_int, var_105_string); // 0x42a NEW_2
	var_106_int = 0; // 0x42c PushI
	var_107_bool = var_104_int != var_106_int; // 0x42d Neq
	if(var_107_bool == 0) goto Label_1073; // 0x42e JumpB
	var_102_bool = 1; // 0x42f MovB
	return 0; // 0x430 Return
	
Label_1073:
	var_102_bool = 0; // 0x431 MovB
	return 0; // 0x432 Return
}


func_807(var_113_string, var_114_bool)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; // 0x327 PushV
	lshHasAnimation(var_120_bool, var_113_string); // 0x328 Func
	var_123_bool = var_120_bool; // 0x32a Push
	if(var_123_bool == 0) goto Label_817; // 0x32b JumpB
	lshGetAnimTimes(var_113_string, var_121_float, var_122_float); // 0x32c Func
	lshPlayAnimation(var_121_float, var_122_float, var_114_bool); // 0x32e Func
	goto Label_821; // 0x330 Jump
	
Label_821:
	return 6; // 0x335 Return
	
Label_817:
	var_124_string = "Can't find lsh animation : "; // 0x331 PushS
	var_125_int = var_124_string + var_113_string; // 0x332 Add
	Trace(var_125_int); // 0x333 Func
}


func_942(var_118_bool, var_119_string, var_120_string)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x3ae PushV
	FindActor(var_122_object, var_119_string); // 0x3af Func
	var_123_bool = var_122_object == 0; // 0x3b1 NullEq
	if(var_123_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_118_bool = 0; // 0x3b3 MovB
	return 2; // 0x3b4 Return
	
Label_949:
	Trigger(var_122_object, var_120_string); // 0x3b5 Func
	var_118_bool = 1; // 0x3b7 MovB
	return 2; // 0x3b8 Return
}


func_1075(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj(); // 0x434 PushV
	var_235_object = var_233_object; // 0x435 Mov
	func_1085(var_235_object); // 0x436 NEW_2
	if(var_234_bool == 0) goto Label_1083; // 0x438 JumpB
	var_232_bool = 1; // 0x439 MovB
	return 0; // 0x43a Return
	
Label_1083:
	var_232_bool = 0; // 0x43b MovB
	return 0; // 0x43c Return
}


func_564()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x234 PushV
	WaitForAnimEnd(); // 0x235 Func
	var_33_bool = 0; // 0x237 PushV
	func_699(var_33_bool); // 0x238 NEW_2
	var_34_bool = var_33_bool == 0; // 0x23a Not
	if(var_34_bool == 0) goto Label_573; // 0x23b JumpB
	return 14; // 0x23c Return
	
Label_573:
	var_35_int = 0; // 0x23d PushV
	func_971(var_35_int); // 0x23e NEW_2
	var_26_int = var_35_int; // 0x23f Mov
	var_27_int = 0; // 0x241 MovI
	
Label_578:
	var_48_bool = 0; // 0x242 PushV
	var_48_bool = 0; // 0x243 MovB
	var_49_int = 5; // 0x244 PushI
	var_50_bool = var_27_int < var_49_int; // 0x245 LT
	if(var_50_bool == 0) goto Label_588; // 0x246 JumpB
	var_51_bool = 0; // 0x247 PushV
	func_699(var_51_bool); // 0x248 NEW_2
	if(var_51_bool == 0) goto Label_588; // 0x24a JumpB
	var_48_bool = 1; // 0x24b MovB
	
Label_588:
	if(var_48_bool == 0) goto Label_640; // 0x24c JumpB
	var_52_int = 3; // 0x24d PushI
	irand(var_28_int, var_52_int); // 0x24e Func
	var_53_int = 0; // 0x250 PushI
	var_54_bool = var_28_int == var_53_int; // 0x251 Eq
	if(var_54_bool == 0) goto Label_612; // 0x252 JumpB
	var_55_int = var_26_int; // 0x253 Push
	if(var_55_int == 0) goto Label_611; // 0x254 JumpB
	irand(var_29_int, var_26_int); // 0x255 Func
	var_56_string = "all"; // 0x257 PushS
	var_57_string = ""; var_58_int = 0; // 0x258 PushV
	var_58_int = var_29_int; // 0x259 Mov
	func_964(var_57_string, var_58_int); // 0x25a NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x25c Func
	WaitForAnimEnd(var_30_bool); // 0x25e Func
	var_59_bool = var_30_bool == 0; // 0x260 Not
	if(var_59_bool == 0) goto Label_611; // 0x261 JumpB
	goto Label_640; // 0x262 Jump
	
Label_640:
	ResetAAS(); // 0x280 Func
	return 14; // 0x282 Return
	
Label_611:
	goto Label_629; // 0x263 Jump
	
Label_629:
	var_60_bool = 0; // 0x275 PushV
	func_643(var_60_bool); // 0x276 NEW_2
	var_61_bool = var_60_bool == 0; // 0x278 Not
	if(var_61_bool == 0) goto Label_635; // 0x279 JumpB
	goto Label_640; // 0x27a Jump
	
Label_635:
	ResetAAS(); // 0x27b Func
	var_62_int = 1; // 0x27d PushI
	var_27_int = var_27_int + var_62_int; // 0x27e Add2
	goto Label_578; // 0x27f Jump
	
Label_612:
	var_63_int = 1; // 0x264 PushI
	var_64_bool = var_28_int == var_63_int; // 0x265 Eq
	if(var_64_bool == 0) goto Label_626; // 0x266 JumpB
	var_65_int = 4; // 0x267 PushI
	rand(var_31_float, var_65_int); // 0x268 Func
	var_66_int = 1; // 0x26a PushI
	var_67_int = var_31_float + var_66_int; // 0x26b Add
	Sleep(var_67_int, var_32_bool); // 0x26c Func
	var_68_bool = var_32_bool == 0; // 0x26e Not
	if(var_68_bool == 0) goto Label_625; // 0x26f JumpB
	goto Label_640; // 0x270 Jump
	
Label_625:
	goto Label_629; // 0x271 Jump
	
Label_626:
	var_69_int = var_27_int; // 0x272 Push
	if(var_69_int == 0) goto Label_629; // 0x273 JumpB
	goto Label_640; // 0x274 Jump
}


func_181(var_2_object, var_109_string)
{
	var_110_bool = 0; // 0xb6 PushV
	func_962(var_110_bool); // 0xb7 NEW_2
	var_111_bool = var_110_bool == 0; // 0xb9 Not
	if(var_111_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_112_bool = var_109_string == var_2_object; // 0xbc Eq
	if(var_112_bool == 0) goto Label_191; // 0xbd JumpB
	return 0; // 0xbe Return
	
Label_191:
	var_113_string = ""; var_114_bool = 0; // 0xbf PushV
	var_113_string = var_109_string; // 0xc0 Mov
	var_115_string = ""; // 0xc1 PushS
	var_116_bool = var_109_string == var_115_string; // 0xc2 Eq
	if(var_116_bool == 0) goto Label_198; // 0xc3 JumpB
	var_114_bool = 0; // 0xc4 MovB
	goto Label_199; // 0xc5 Jump
	
Label_199:
	func_807(var_113_string, var_114_bool); // 0xc7 NEW_2
	var_2_object = var_109_string; // 0xc9 TMov
	return 0; // 0xca Return
	
Label_198:
	var_114_bool = 1; // 0xc6 MovB
}


func_822(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x336 PushV
	GetEyesHeight(var_30_float); // 0x337 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x339 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x33a PushE
	var_32_float = var_30_float; // 0x33b Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x33c PopE
	var_33_string = "head"; // 0x33d PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x33e Func
	return 4; // 0x340 Return
}


func_692(var_91_string, var_92_int)
{
	var_93_int = 0; var_94_int = 0; // 0x2b4 PushV
	GetProperty(var_91_string, var_94_int); // 0x2b5 ObjFunc
	var_95_int = var_94_int + var_92_int; // 0x2b7 Add
	SetProperty(var_91_string, var_95_int); // 0x2b8 ObjFunc
	return 2; // 0x2ba Return
}


func_954(var_74_int)
{
	var_74_int = 515571; // 0x3ba MovI
	return 0; // 0x3bb Return
}


func_699(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x2bb PushV
	IsLoaded(var_14_bool); // 0x2bc Func
	var_12_bool = var_14_bool; // 0x2be Mov
	return 2; // 0x2bf Return
}


func_956(var_73_int)
{
	var_73_int = 504029; // 0x3bc MovI
	return 0; // 0x3bd Return
}


func_1085(var_234_bool)
{
	var_236_float = 0; var_237_float = 0; // 0x43d PushV
	var_238_string = "money"; // 0x43e PushS
	GetProperty(var_238_string, var_237_float); // 0x43f ObjFunc
	var_239_int = 500; // 0x441 PushI
	var_240_bool = var_237_float >= var_239_int; // 0x442 GE
	if(var_240_bool == 0) goto Label_1094; // 0x443 JumpB
	var_234_bool = 1; // 0x444 MovB
	return 2; // 0x445 Return
	
Label_1094:
	var_234_bool = 0; // 0x446 MovB
	return 2; // 0x447 Return
}


func_958(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png"; // 0x3be MovS
	return 0; // 0x3bf Return
}


func_704(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x2c0 PushV
	GetPosition(var_38_cvector); // 0x2c1 ObjFunc
	GetEyesHeight(var_37_float); // 0x2c3 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2c5 PushE
	var_46_float = var_46_float + var_37_float; // 0x2c6 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2c7 PopE
	GetPosition(var_39_cvector); // 0x2c8 Func
	GetEyesHeight(var_37_float); // 0x2ca Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2cc PushE
	var_47_float = var_47_float + var_37_float; // 0x2cd Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x2ce PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x2cf Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2d0 PushE
	var_48_float = 0; // 0x2d1 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2d2 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x2d3 Or
	var_50_float = sqrt(var_49_int); // 0x2d4 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x2d5 Div2
	var_41_cvector = -var_40_cvector; // 0x2d6 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x2d7 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x2d8 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x2d9 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x2da Xor2
	func_840(var_52_cvector, var_53_cvector); // 0x2db NEW_2
	var_60_int = 25; // 0x2dd PushI
	var_61_float = var_52_cvector * var_60_int; // 0x2de Mult
	var_62_int = var_51_float + var_61_float; // 0x2df Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x2e0 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x2e1 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x2e2 Add2
	IsOverrideActive(var_44_bool); // 0x2e3 Func
	var_64_bool = var_44_bool; // 0x2e5 Push
	if(var_64_bool == 0) goto Label_745; // 0x2e6 JumpB
	var_25_bool = 0; // 0x2e7 MovB
	return 18; // 0x2e8 Return
	
Label_745:
	StopWorld(); // 0x2e9 Func
	var_65_bool = 1; // 0x2eb PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x2ec Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x2ee PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x2ef PushE
	Rotate(var_66_float, var_67_float); // 0x2f0 Func
	var_68_bool = 0; // 0x2f2 PushV
	func_962(var_68_bool); // 0x2f3 NEW_2
	if(var_68_bool == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_767; // 0x2f6 Jump
	
Label_767:
	CameraWaitForPlayFinish(); // 0x2ff Func
	ResumeWorld(); // 0x301 Func
	var_25_bool = 1; // 0x303 MovB
	return 18; // 0x304 Return
	
Label_759:
	var_69_string = "head"; // 0x2f7 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x2f8 Func
	var_70_bool = var_45_bool; // 0x2fa Push
	if(var_70_bool == 0) goto Label_767; // 0x2fb JumpB
	var_71_string = "head"; // 0x2fc PushS
	LookAsyncCamera(var_71_string); // 0x2fd Func
}


func_960(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png"; // 0x3c0 MovS
	return 0; // 0x3c1 Return
}


func_962(var_68_bool)
{
	var_68_bool = 0; // 0x3c2 MovB
	return 0; // 0x3c3 Return
}


func_833()
{
	var_13_bool = 0; // 0x341 PushV
	func_962(var_13_bool); // 0x342 NEW_2
	if(var_13_bool == 0) goto Label_839; // 0x344 JumpB
	lshStopSpeech(); // 0x345 Func
	
Label_839:
	return 0; // 0x347 Return
}


func_964(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x3c4 PushV
	var_44_string = "idle"; // 0x3c5 MovS
	var_45_int = var_42_int; // 0x3c6 Push
	if(var_45_int == 0) goto Label_969; // 0x3c7 JumpB
	var_44_string = var_44_string + var_42_int; // 0x3c8 Add2
	
Label_969:
	var_41_string = var_44_string; // 0x3c9 Mov
	return 2; // 0x3ca Return
}


func_840(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x348 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x349 Or
	var_56_float = sqrt(var_57_int); // 0x34a Sqrt2
	var_58_float = 0.0; // 0x34b PushF
	var_59_bool = var_56_float < var_58_float; // 0x34c LT
	if(var_59_bool == 0) goto Label_848; // 0x34d JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x34e MovV
	return 2; // 0x34f Return
	
Label_848:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x350 Div2
	return 2; // 0x351 Return
}


func_1096()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x448 PushV
	var_22_int = 380; // 0x449 PushI
	var_23_int = 2; // 0x44a PushI
	var_24_int = 525786; // 0x44b PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x44c Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x44e PushV
	var_26_object = var_21_object; // 0x44f Mov
	var_27_int = 378; // 0x450 MovI
	func_1122(var_25_bool, var_26_object, var_27_int); // 0x451 NEW_2
	return 2; // 0x453 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_151; // 0x4f JumpB
	var_93_bool = 0; // 0x50 PushV
	var_93_bool = 0; // 0x51 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x52 PushV
	var_95_object = var_1_object; // 0x53 MovT
	func_1027(var_95_object); // 0x54 NEW_2
	if(var_94_bool == 0) goto Label_94; // 0x56 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x57 PushV
	var_103_object = var_1_object; // 0x58 MovT
	func_1063(var_103_object); // 0x59 NEW_2
	var_108_bool = var_102_bool == 0; // 0x5b Not
	if(var_108_bool == 0) goto Label_94; // 0x5c JumpB
	var_93_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_93_bool == 0) goto Label_115; // 0x5e JumpB
	var_109_string = ""; // 0x5f PushV
	var_109_string = "Neutral"; // 0x60 MovS
	func_181(var_87_object, var_109_string); // 0x61 NEW_2
	var_126_int = 525749; // 0x63 PushI
	SetMessage(var_126_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_127_int = 525750; // 0x68 PushI
	var_128_int = 27063; // 0x69 PushI
	var_129_int = 27062; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	var_130_int = 540951; // 0x6d PushI
	var_131_int = 43036; // 0x6e PushI
	var_132_int = 43035; // 0x6f PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x70 TObjFunc
	goto Label_151; // 0x72 Jump
	
Label_151:
	var_133_bool = 0; // 0x97 PushV
	func_962(var_133_bool); // 0x98 NEW_2
	if(var_133_bool == 0) goto Label_166; // 0x9a JumpB
	
Label_155:
	lshWaitForAnimEnd(); // 0x9b Func
	var_134_string = var_3_string; // 0x9d PushT
	if(var_134_string == 0) goto Label_160; // 0x9e JumpB
	goto Label_165; // 0x9f Jump
	
Label_165:
	goto Label_180; // 0xa5 Jump
	
Label_180:
	return 0; // 0xb4 Return
	
Label_160:
	var_135_string = ""; // 0xa0 PushV
	var_135_string = var_2_object; // 0xa1 MovT
	func_791(var_135_string); // 0xa2 NEW_2
	goto Label_155; // 0xa4 Jump
	
Label_166:
	var_146_string = "all"; // 0xa6 PushS
	var_147_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_146_string, var_147_string); // 0xa8 Func
	
Label_170:
	WaitForAnimEnd(); // 0xaa Func
	var_148_string = var_3_string; // 0xac PushT
	if(var_148_string == 0) goto Label_175; // 0xad JumpB
	goto Label_180; // 0xae Jump
	
Label_175:
	var_149_string = "all"; // 0xaf PushS
	var_150_string = "idle"; // 0xb0 PushS
	PlayAnimation(var_149_string, var_150_string); // 0xb1 Func
	goto Label_170; // 0xb3 Jump
	
Label_115:
	var_151_string = ""; // 0x73 PushV
	var_151_string = "Neutral"; // 0x74 MovS
	func_181(var_87_object, var_151_string); // 0x75 NEW_2
	var_152_int = 525753; // 0x77 PushI
	SetMessage(var_152_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_153_bool = 0; // 0x7c PushV
	var_153_bool = 0; // 0x7d MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x7e PushV
	var_155_object = var_1_object; // 0x7f MovT
	func_1039(var_155_object); // 0x80 NEW_2
	if(var_154_bool == 0) goto Label_137; // 0x82 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x83 PushV
	var_161_object = var_1_object; // 0x84 MovT
	func_1051(var_161_object); // 0x85 NEW_2
	if(var_160_bool == 0) goto Label_137; // 0x87 JumpB
	var_153_bool = 1; // 0x88 MovB
	
Label_137:
	if(var_153_bool == 0) goto Label_143; // 0x89 JumpB
	var_166_int = 525768; // 0x8a PushI
	var_167_int = 27081; // 0x8b PushI
	var_168_int = 27080; // 0x8c PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x8d TObjFunc
	
Label_143:
	var_169_int = 525754; // 0x8f PushI
	var_170_int = -1; // 0x90 PushI
	var_171_int = 27066; // 0x91 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x92 TObjFunc
	goto Label_151; // 0x94 Jump
}


func_971(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x3cb PushV
	var_38_int = 0; // 0x3cc MovI
	
Label_973:
	var_40_string = "all"; // 0x3cd PushS
	var_41_string = ""; var_42_int = 0; // 0x3ce PushV
	var_42_int = var_38_int; // 0x3cf Mov
	func_964(var_41_string, var_42_int); // 0x3d0 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x3d2 Func
	var_46_bool = var_39_bool == 0; // 0x3d4 Not
	if(var_46_bool == 0) goto Label_983; // 0x3d5 JumpB
	goto Label_986; // 0x3d6 Jump
	
Label_986:
	var_35_int = var_38_int; // 0x3da Mov
	return 4; // 0x3db Return
	
Label_983:
	var_47_int = 1; // 0x3d7 PushI
	var_38_int = var_38_int + var_47_int; // 0x3d8 Add2
	goto Label_973; // 0x3d9 Jump
}


func_850(var_74_float, var_75_float, var_76_float, var_77_float)
{
	var_78_bool = var_75_float < var_76_float; // 0x353 LT
	if(var_78_bool == 0) goto Label_855; // 0x354 JumpB
	var_74_float = var_76_float; // 0x355 Mov
	return 0; // 0x356 Return
	
Label_855:
	var_79_bool = var_75_float > var_77_float; // 0x357 GT
	if(var_79_bool == 0) goto Label_859; // 0x358 JumpB
	var_74_float = var_77_float; // 0x359 Mov
	return 0; // 0x35a Return
	
Label_859:
	var_74_float = var_75_float; // 0x35b Mov
	return 0; // 0x35c Return
}


func_1109(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x455 PushV
	GetDiaryRoot(var_36_object); // 0x456 Func
	var_37_bool = var_36_object == 0; // 0x458 Not
	if(var_37_bool == 0) goto Label_1119; // 0x459 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x45a PushS
	Trace(var_38_string); // 0x45b Func
	var_34_object = 0; // 0x45d MovB
	return 2; // 0x45e Return
	
Label_1119:
	var_34_object = var_36_object; // 0x45f Mov
	return 2; // 0x460 Return
}


func_988()
{
	var_112_string = "ook4BirdmaskTheater1"; // 0x3dd PushS
	var_113_int = 1; // 0x3de PushI
	SetVariable(var_112_string, var_113_int); // 0x3df Func
	return 0; // 0x3e1 Return
}


func_861(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x35d PushV
	GetVariable(var_97_string, var_99_int); // 0x35e Func
	var_96_int = var_99_int; // 0x360 Mov
	return 2; // 0x361 Return
}


func_994()
{
	var_18_string = "k4q02BirdmaskGotoMaria"; // 0x3e3 PushS
	var_19_int = 1; // 0x3e4 PushI
	SetVariable(var_18_string, var_19_int); // 0x3e5 Func
	func_1096(); // 0x3e8 NEW_2
	return 0; // 0x3ea Return
}


func_866(var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x362 PushV
	CreateIntVector(var_102_object); // 0x363 Func
	add(var_99_int); // 0x365 ObjFunc
	add(var_100_int); // 0x367 ObjFunc
	var_103_int = 3; // 0x369 PushI
	SendWorldWndMessage(var_103_int, var_102_object); // 0x36a Func
	return 2; // 0x36c Return
}


func_1122(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x462 PushV
	var_34_object = Obj(); // 0x463 PushV
	func_1109(var_34_object); // 0x464 NEW_2
	var_31_object = var_34_object; // 0x465 Mov
	Find(var_27_int, var_32_object); // 0x467 ObjFunc
	var_39_bool = var_32_object == 0; // 0x469 Not
	if(var_39_bool == 0) goto Label_1137; // 0x46a JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x46b PushS
	var_41_int = var_40_string + var_27_int; // 0x46c Add
	Trace(var_41_int); // 0x46d Func
	var_25_bool = 0; // 0x46f MovB
	return 6; // 0x470 Return
	
Label_1137:
	AddChild(var_26_object); // 0x471 ObjFunc
	var_42_int = 7; // 0x473 PushI
	SendWorldWndMessage(var_42_int); // 0x474 Func
	GetCategory(var_33_int); // 0x476 ObjFunc
	SetDiarySection(var_33_int); // 0x478 Func
	var_25_bool = 0; // 0x47a MovB
	return 6; // 0x47b Return
}


func_485(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x1e6 PushV
	func_699(var_12_bool); // 0x1e7 NEW_2
	var_15_bool = var_12_bool == 0; // 0x1e9 Not
	if(var_15_bool == 0) goto Label_492; // 0x1ea JumpB
	return 0; // 0x1eb Return
	
Label_492:
	var_16_string = "player"; // 0x1ec PushS
	FindActor(var_9_object, var_16_string); // 0x1ed Func
	var_2_object = 0; // 0x1ef TMovB
	var_3_string = 0; // 0x1f0 TMovB
	var_0_object = var_10_float; // 0x1f1 TMov
	var_1_object = var_11_float; // 0x1f2 TMov
	var_17_int = 10; // 0x1f3 PushI
	var_18_float = 1.0; // 0x1f4 PushF
	SetTimer(var_17_int, var_18_float); // 0x1f5 Func
	func_564(); // 0x1f8 NEW_2
	var_70_bool = var_3_string == 0; // 0x1fa Not
	if(var_70_bool == 0) goto Label_511; // 0x1fb JumpB
	var_71_int = 10; // 0x1fc PushI
	KillTimer(var_71_int); // 0x1fd Func
	
Label_511:
	return 0; // 0x1ff Return
}


func_1003()
{
	var_118_bool = 0; var_119_string = ""; var_120_string = ""; // 0x3ec PushV
	var_119_string = "quest_k4_02"; // 0x3ed MovS
	var_120_string = "init_theater"; // 0x3ee MovS
	func_942(var_118_bool, var_119_string, var_120_string); // 0x3ef NEW_2
	return 0; // 0x3f1 Return
}


func_878(var_86_object, var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x36e PushV
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0; // 0x36f PushV
	var_90_object = var_86_object; // 0x370 Mov
	var_91_string = "money"; // 0x371 MovS
	var_92_int = var_87_int; // 0x372 Mov
	func_692(var_91_string, var_92_int); // 0x373 NEW_2
	var_96_int = 0; // 0x375 PushI
	var_97_bool = var_87_int > var_96_int; // 0x376 GT
	if(var_97_bool == 0) goto Label_896; // 0x377 JumpB
	var_98_string = "Money"; // 0x378 PushS
	GetInvItemByName(var_89_int, var_98_string); // 0x379 Func
	var_99_int = 0; var_100_int = 0; // 0x37b PushV
	var_99_int = var_89_int; // 0x37c Mov
	var_100_int = var_87_int; // 0x37d Mov
	func_866(var_99_int, var_100_int); // 0x37e NEW_2
	
Label_896:
	return 2; // 0x380 Return
}


func_1010(var_83_object)
{
	var_85_string = "money 500 removed"; // 0x3f3 PushS
	Trace(var_85_string); // 0x3f4 Func
	var_86_object = Obj(); var_87_int = 0; // 0x3f6 PushV
	var_86_object = var_83_object; // 0x3f7 Mov
	var_87_int = -500; // 0x3f8 MovI
	func_878(var_86_object, var_87_int); // 0x3f9 NEW_2
	return 0; // 0x3fb Return
}


func_1020(var_43_object)
{
	var_45_bool = 0; var_46_object = Obj(); var_47_float = 0; // 0x3fd PushV
	var_46_object = var_43_object; // 0x3fe Mov
	var_47_float = 0.1; // 0x3ff MovF
	func_897(var_45_bool, var_46_object, var_47_float); // 0x400 NEW_2
	return 0; // 0x402 Return
}


func_1150(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x47e PushV
	var_80_string = "branch"; // 0x47f PushS
	GetVariable(var_80_string, var_79_int); // 0x480 Func
	var_81_int = 0; // 0x482 PushI
	var_82_bool = var_79_int == var_81_int; // 0x483 Eq
	if(var_82_bool == 0) goto Label_1160; // 0x484 JumpB
	var_77_int = 1; // 0x485 MovI
	return 2; // 0x486 Return
	
Label_1160:
	var_83_int = 1; // 0x488 PushI
	var_84_bool = var_79_int == var_83_int; // 0x489 Eq
	if(var_84_bool == 0) goto Label_1165; // 0x48a JumpB
	var_77_int = 2; // 0x48b MovI
	return 2; // 0x48c Return
	
Label_1165:
	var_77_int = 3; // 0x48d MovI
	return 2; // 0x48e Return
}


