task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbc PushI
	if(var_8_int == 0) goto Label_369; // 0xbd JumpB
	func_697(); // 0xbf NEW_2
	var_10_int = 41142; // 0xc1 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc2 Eq
	if(var_11_bool == 0) goto Label_242; // 0xc3 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc4 PushV
	var_13_object = var_1_object; // 0xc5 MovT
	func_734(var_13_object); // 0xc6 NEW_2
	var_20_bool = var_12_bool == 0; // 0xc8 Not
	if(var_20_bool == 0) goto Label_222; // 0xc9 JumpB
	var_21_string = ""; // 0xca PushV
	var_21_string = "Neutral"; // 0xcb MovS
	func_165(var_7_bool, var_21_string); // 0xcc NEW_2
	var_38_int = 539199; // 0xce PushI
	SetMessage(var_38_int); // 0xcf TObjFunc
	ClearReplies(); // 0xd1 TObjFunc
	var_39_int = 540975; // 0xd3 PushI
	var_40_int = 43646; // 0xd4 PushI
	var_41_int = 43065; // 0xd5 PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0xd6 TObjFunc
	var_42_int = 539200; // 0xd8 PushI
	var_43_int = 43646; // 0xd9 PushI
	var_44_int = 41143; // 0xda PushI
	AddReply(var_42_int, var_43_int, var_44_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_45_string = ""; // 0xde PushV
	var_45_string = "Neutral"; // 0xdf MovS
	func_165(var_7_bool, var_45_string); // 0xe0 NEW_2
	var_46_int = 539201; // 0xe2 PushI
	SetMessage(var_46_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_47_int = 539202; // 0xe7 PushI
	var_48_int = -1; // 0xe8 PushI
	var_49_int = 41145; // 0xe9 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xea TObjFunc
	var_50_int = 540976; // 0xec PushI
	var_51_int = -1; // 0xed PushI
	var_52_int = 43066; // 0xee PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_53_int = 43646; // 0xf2 PushI
	var_54_bool = var_6_int == var_53_int; // 0xf3 Eq
	if(var_54_bool == 0) goto Label_265; // 0xf4 JumpB
	var_55_string = ""; // 0xf5 PushV
	var_55_string = "Neutral"; // 0xf6 MovS
	func_165(var_7_bool, var_55_string); // 0xf7 NEW_2
	var_56_int = 541486; // 0xf9 PushI
	SetMessage(var_56_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_57_int = 541487; // 0xfe PushI
	var_58_int = 43653; // 0xff PushI
	var_59_int = 43647; // 0x100 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x101 TObjFunc
	var_60_int = 541488; // 0x103 PushI
	var_61_int = 43649; // 0x104 PushI
	var_62_int = 43648; // 0x105 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_63_int = 43649; // 0x109 PushI
	var_64_bool = var_6_int == var_63_int; // 0x10a Eq
	if(var_64_bool == 0) goto Label_288; // 0x10b JumpB
	var_65_string = ""; // 0x10c PushV
	var_65_string = "Isee"; // 0x10d MovS
	func_165(var_7_bool, var_65_string); // 0x10e NEW_2
	var_66_int = 541489; // 0x110 PushI
	SetMessage(var_66_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_67_int = 541490; // 0x115 PushI
	var_68_int = 45215; // 0x116 PushI
	var_69_int = 43650; // 0x117 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x118 TObjFunc
	var_70_int = 541491; // 0x11a PushI
	var_71_int = 43653; // 0x11b PushI
	var_72_int = 43651; // 0x11c PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_73_int = 43653; // 0x120 PushI
	var_74_bool = var_6_int == var_73_int; // 0x121 Eq
	if(var_74_bool == 0) goto Label_311; // 0x122 JumpB
	var_75_string = ""; // 0x123 PushV
	var_75_string = "Confusion"; // 0x124 MovS
	func_165(var_7_bool, var_75_string); // 0x125 NEW_2
	var_76_int = 541492; // 0x127 PushI
	SetMessage(var_76_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_77_int = 541493; // 0x12c PushI
	var_78_int = 43657; // 0x12d PushI
	var_79_int = 43655; // 0x12e PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x12f TObjFunc
	var_80_int = 541494; // 0x131 PushI
	var_81_int = 45215; // 0x132 PushI
	var_82_int = 43656; // 0x133 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_83_int = 43657; // 0x137 PushI
	var_84_bool = var_6_int == var_83_int; // 0x138 Eq
	if(var_84_bool == 0) goto Label_334; // 0x139 JumpB
	var_85_string = ""; // 0x13a PushV
	var_85_string = "Confusion"; // 0x13b MovS
	func_165(var_7_bool, var_85_string); // 0x13c NEW_2
	var_86_int = 541495; // 0x13e PushI
	SetMessage(var_86_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_87_int = 541496; // 0x143 PushI
	var_88_int = 45215; // 0x144 PushI
	var_89_int = 43658; // 0x145 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x146 TObjFunc
	var_90_int = 541497; // 0x148 PushI
	var_91_int = 45215; // 0x149 PushI
	var_92_int = 43659; // 0x14a PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_93_int = 45215; // 0x14e PushI
	var_94_bool = var_6_int == var_93_int; // 0x14f Eq
	if(var_94_bool == 0) goto Label_357; // 0x150 JumpB
	var_95_string = ""; // 0x151 PushV
	var_95_string = "Neutral"; // 0x152 MovS
	func_165(var_7_bool, var_95_string); // 0x153 NEW_2
	var_96_int = 542795; // 0x155 PushI
	SetMessage(var_96_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_97_int = 542797; // 0x15a PushI
	var_98_int = -1; // 0x15b PushI
	var_99_int = 45220; // 0x15c PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x15d TObjFunc
	var_100_int = 542796; // 0x15f PushI
	var_101_int = -1; // 0x160 PushI
	var_102_int = 45219; // 0x161 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_3_string = 1; // 0x165 TMovB
	var_103_bool = 0; // 0x166 PushV
	func_771(var_103_bool); // 0x167 NEW_2
	if(var_103_bool == 0) goto Label_365; // 0x169 JumpB
	lshStopAnimation(); // 0x16a Func
	goto Label_367; // 0x16c Jump
	
Label_367:
	return 0; // 0x16f Return
	
Label_365:
	StopAnimation(); // 0x16d Func
	
Label_369:
	return 0; // 0x171 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x177 PushV
	var_8_object = var_6_object; // 0x178 Mov
	TaskCall(0); // 0x179 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x17a NEW_2
	TaskReturn(); // 0x17b TaskReturn
	return 0; // 0x17d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x17e PushV
	var_9_string = "cleanup"; // 0x17f PushS
	var_10_bool = var_6_string == var_9_string; // 0x180 Eq
	if(var_10_bool == 0) goto Label_405; // 0x181 JumpB
	var_0_object = 1; // 0x182 TMovB
	IsLoaded(var_8_bool); // 0x183 Func
	var_11_bool = 0; // 0x185 PushV
	var_11_bool = 0; // 0x186 MovB
	var_12_bool = var_8_bool == 0; // 0x187 Not
	if(var_12_bool == 0) goto Label_398; // 0x188 JumpB
	var_13_bool = 0; // 0x189 PushV
	func_426(var_13_bool); // 0x18a NEW_2
	if(var_13_bool == 0) goto Label_398; // 0x18c JumpB
	var_11_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_11_bool == 0) goto Label_404; // 0x18e JumpB
	var_14_object = Obj(); // 0x18f PushV
	func_704(var_14_object); // 0x190 NEW_2
	RemoveActor(var_14_object); // 0x192 Func
	
Label_404:
	goto Label_409; // 0x194 Jump
	
Label_409:
	return 2; // 0x199 Return
	
Label_405:
	var_17_string = "restore"; // 0x195 PushS
	var_18_bool = var_6_string == var_17_string; // 0x196 Eq
	if(var_18_bool == 0) goto Label_409; // 0x197 JumpB
	var_0_object = 0; // 0x198 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x19a PushV
	var_6_bool = 0; // 0x19b MovB
	var_7_object = var_0_object; // 0x19c PushT
	if(var_7_object == 0) goto Label_419; // 0x19d JumpB
	var_8_bool = 0; // 0x19e PushV
	func_426(var_8_bool); // 0x19f NEW_2
	if(var_8_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_6_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_6_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_9_object = Obj(); // 0x1a4 PushV
	func_704(var_9_object); // 0x1a5 NEW_2
	RemoveActor(var_9_object); // 0x1a7 Func
	
Label_425:
	return 0; // 0x1a9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_370:
	Hold(); // 0x172 Func
	goto Label_370; // 0x174 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_428(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_765(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_763(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_767(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_769(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_746(var_69_int); // 0x22 NEW_2
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
	func_704(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_513(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_239_bool = var_17_bool == 0; // 0x3f Not
	if(var_239_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_240_object = Obj(); // 0x46 PushV
	var_240_object = var_8_object; // 0x47 Mov
	func_496(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_68_string)
{
	var_68_string = "ui/NPC_Aglaja_b.png"; // 0x301 MovS
	return 0; // 0x302 Return
}


func_513(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x201 PushV
	var_87_string = "voice_common"; // 0x202 PushS
	GetVariable(var_87_string, var_85_int); // 0x203 Func
	var_88_int = var_85_int; // 0x205 Push
	if(var_88_int == 0) goto Label_551; // 0x206 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x207 PushV
	var_90_object = var_79_object; // 0x208 Mov
	func_571(var_90_object); // 0x209 NEW_2
	var_119_bool = var_89_bool == 0; // 0x20b Not
	if(var_119_bool == 0) goto Label_533; // 0x20c JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x20d PushV
	var_121_object = var_79_object; // 0x20e Mov
	func_608(var_121_object); // 0x20f NEW_2
	var_155_bool = var_120_bool == 0; // 0x211 Not
	if(var_155_bool == 0) goto Label_533; // 0x212 JumpB
	var_78_bool = 0; // 0x213 MovB
	return 4; // 0x214 Return
	
Label_533:
	var_156_int = 2; // 0x215 PushI
	irand(var_86_int, var_156_int); // 0x216 Func
	var_157_int = var_86_int; // 0x218 Push
	if(var_157_int == 0) goto Label_546; // 0x219 JumpB
	var_158_string = "voice_common"; // 0x21a PushS
	var_159_int = 1; // 0x21b PushI
	var_160_int = var_85_int + var_159_int; // 0x21c Add
	var_161_int = 3; // 0x21d PushI
	var_162_int = var_160_int / var_161_int; // 0x21e Mod
	SetVariable(var_158_string, var_162_int); // 0x21f Func
	goto Label_550; // 0x221 Jump
	
Label_550:
	goto Label_569; // 0x226 Jump
	
Label_569:
	var_78_bool = 1; // 0x239 MovB
	return 4; // 0x23a Return
	
Label_546:
	var_163_string = "voice_common"; // 0x222 PushS
	var_164_int = 0; // 0x223 PushI
	SetVariable(var_163_string, var_164_int); // 0x224 Func
	
Label_551:
	var_165_bool = 0; var_166_object = Obj(); // 0x227 PushV
	var_166_object = var_79_object; // 0x228 Mov
	func_608(var_166_object); // 0x229 NEW_2
	var_167_bool = var_165_bool == 0; // 0x22b Not
	if(var_167_bool == 0) goto Label_565; // 0x22c JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x22d PushV
	var_169_object = var_79_object; // 0x22e Mov
	func_571(var_169_object); // 0x22f NEW_2
	var_170_bool = var_168_bool == 0; // 0x231 Not
	if(var_170_bool == 0) goto Label_565; // 0x232 JumpB
	var_78_bool = 0; // 0x233 MovB
	return 4; // 0x234 Return
	
Label_565:
	var_171_string = "voice_common"; // 0x235 PushS
	var_172_int = 1; // 0x236 PushI
	SetVariable(var_171_string, var_172_int); // 0x237 Func
}


func_771(var_60_bool)
{
	var_60_bool = 1; // 0x303 MovB
	return 0; // 0x304 Return
}


func_704(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2c0 PushV
	self(var_11_object); // 0x2c1 Func
	var_9_object = var_11_object; // 0x2c3 Mov
	return 2; // 0x2c4 Return
}


func_710(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2c6 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2c7 Or
	var_49_float = sqrt(var_50_int); // 0x2c8 Sqrt2
	var_51_float = 0.0; // 0x2c9 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2ca LT
	if(var_52_bool == 0) goto Label_718; // 0x2cb JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2cc MovV
	return 2; // 0x2cd Return
	
Label_718:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2ce Div2
	return 2; // 0x2cf Return
}


func_651(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x28b PushV
	lshHasAnimation(var_219_bool, var_215_string); // 0x28c Func
	var_222_bool = var_219_bool; // 0x28e Push
	if(var_222_bool == 0) goto Label_662; // 0x28f JumpB
	lshGetAnimTimes(var_215_string, var_220_float, var_221_float); // 0x290 Func
	var_223_bool = 0; // 0x292 PushB
	lshPlayAnimation(var_220_float, var_221_float, var_223_bool); // 0x293 Func
	goto Label_666; // 0x295 Jump
	
Label_666:
	return 6; // 0x29a Return
	
Label_662:
	var_224_string = "Can't find lsh animation : "; // 0x296 PushS
	var_225_int = var_224_string + var_215_string; // 0x297 Add
	Trace(var_225_int); // 0x298 Func
}


func_720(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x2d0 PushV
	GetVariable(var_183_string, var_185_int); // 0x2d1 Func
	var_182_int = var_185_int; // 0x2d3 Mov
	return 2; // 0x2d4 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_135; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_734(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_113; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_165(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 539199; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_int = 540975; // 0x66 PushI
	var_208_int = 43646; // 0x67 PushI
	var_209_int = 43065; // 0x68 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x69 TObjFunc
	var_210_int = 539200; // 0x6b PushI
	var_211_int = 43646; // 0x6c PushI
	var_212_int = 41143; // 0x6d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6e TObjFunc
	goto Label_135; // 0x70 Jump
	
Label_135:
	var_213_bool = 0; // 0x87 PushV
	func_771(var_213_bool); // 0x88 NEW_2
	if(var_213_bool == 0) goto Label_150; // 0x8a JumpB
	
Label_139:
	lshWaitForAnimEnd(); // 0x8b Func
	var_214_string = var_3_string; // 0x8d PushT
	if(var_214_string == 0) goto Label_144; // 0x8e JumpB
	goto Label_149; // 0x8f Jump
	
Label_149:
	goto Label_164; // 0x95 Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_144:
	var_215_string = ""; // 0x90 PushV
	var_215_string = var_2_object; // 0x91 MovT
	func_651(var_215_string); // 0x92 NEW_2
	goto Label_139; // 0x94 Jump
	
Label_150:
	var_226_string = "all"; // 0x96 PushS
	var_227_string = "idle"; // 0x97 PushS
	PlayAnimation(var_226_string, var_227_string); // 0x98 Func
	
Label_154:
	WaitForAnimEnd(); // 0x9a Func
	var_228_string = var_3_string; // 0x9c PushT
	if(var_228_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_159:
	var_229_string = "all"; // 0x9f PushS
	var_230_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_229_string, var_230_string); // 0xa1 Func
	goto Label_154; // 0xa3 Jump
	
Label_113:
	var_231_string = ""; // 0x71 PushV
	var_231_string = "Neutral"; // 0x72 MovS
	func_165(var_174_object, var_231_string); // 0x73 NEW_2
	var_232_int = 539201; // 0x75 PushI
	SetMessage(var_232_int); // 0x76 TObjFunc
	ClearReplies(); // 0x78 TObjFunc
	var_233_int = 539202; // 0x7a PushI
	var_234_int = -1; // 0x7b PushI
	var_235_int = 41145; // 0x7c PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x7d TObjFunc
	var_236_int = 540976; // 0x7f PushI
	var_237_int = -1; // 0x80 PushI
	var_238_int = 43066; // 0x81 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x82 TObjFunc
	goto Label_135; // 0x84 Jump
}


func_767(var_67_string)
{
	var_67_string = "ui/NPC_Aglaja.png"; // 0x2ff MovS
	return 0; // 0x300 Return
}


func_725(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x2d5 PushV
	GetGameTime(var_135_float); // 0x2d6 Func
	var_136_int = 1; // 0x2d8 PushI
	var_137_int = 0; // 0x2d9 PushV
	var_138_int = 24; // 0x2da PushI
	var_137_int = var_135_float / var_135_float; // 0x2db Div2
	var_133_int = var_136_int + var_137_int; // 0x2dc Add2
	return 2; // 0x2dd Return
}


func_667(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x29b PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x29c Func
	var_203_bool = var_200_bool; // 0x29e Push
	if(var_203_bool == 0) goto Label_677; // 0x29f JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x2a0 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x2a2 Func
	goto Label_681; // 0x2a4 Jump
	
Label_681:
	return 6; // 0x2a9 Return
	
Label_677:
	var_204_string = "Can't find lsh animation : "; // 0x2a5 PushS
	var_205_int = var_204_string + var_193_string; // 0x2a6 Add
	Trace(var_205_int); // 0x2a7 Func
}


func_734(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x2df PushV
	var_183_string = "game_final"; // 0x2e0 MovS
	func_720(var_182_int, var_183_string); // 0x2e1 NEW_2
	var_186_int = 0; // 0x2e3 PushI
	var_187_bool = var_182_int != var_186_int; // 0x2e4 Neq
	if(var_187_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_180_bool = 1; // 0x2e6 MovB
	return 0; // 0x2e7 Return
	
Label_744:
	var_180_bool = 0; // 0x2e8 MovB
	return 0; // 0x2e9 Return
}


func_608(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x260 PushV
	var_132_string = "d"; // 0x261 PushS
	var_133_int = 0; // 0x262 PushV
	func_725(var_133_int); // 0x263 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x265 Add
	var_140_string = "m"; // 0x266 PushS
	var_127_string = var_139_int + var_140_string; // 0x267 Add2
	var_128_int = 0; // 0x268 MovI
	
Label_617:
	var_141_int = 1; // 0x269 PushI
	if(var_141_int == 0) goto Label_630; // 0x26a JumpB
	var_142_int = 1; // 0x26b PushI
	var_143_int = var_128_int + var_142_int; // 0x26c Add
	var_144_int = var_127_string + var_143_int; // 0x26d Add
	HasProperty(var_144_int, var_129_bool); // 0x26e ObjFunc
	var_145_bool = var_129_bool == 0; // 0x270 Not
	if(var_145_bool == 0) goto Label_627; // 0x271 JumpB
	goto Label_630; // 0x272 Jump
	
Label_630:
	var_146_bool = var_128_int == 0; // 0x276 Not
	if(var_146_bool == 0) goto Label_634; // 0x277 JumpB
	var_120_bool = 0; // 0x278 MovB
	return 10; // 0x279 Return
	
Label_634:
	var_130_int = 0; // 0x27a MovI
	var_147_int = 1; // 0x27b PushI
	var_148_bool = var_128_int > var_147_int; // 0x27c GT
	if(var_148_bool == 0) goto Label_640; // 0x27d JumpB
	irand(var_130_int, var_128_int); // 0x27e Func
	
Label_640:
	var_149_int = 1; // 0x280 PushI
	var_150_int = var_130_int + var_149_int; // 0x281 Add
	var_151_int = var_127_string + var_150_int; // 0x282 Add
	GetProperty(var_151_int, var_131_string); // 0x283 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x285 PushV
	var_153_string = var_131_string; // 0x286 Mov
	func_682(var_152_bool, var_153_string); // 0x287 NEW_2
	var_120_bool = var_152_bool; // 0x288 Mov
	return 10; // 0x28a Return
	
Label_627:
	var_154_int = 1; // 0x273 PushI
	var_128_int = var_128_int + var_154_int; // 0x274 Add2
	goto Label_617; // 0x275 Jump
}


func_165(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xa6 PushV
	func_771(var_190_bool); // 0xa7 NEW_2
	var_191_bool = var_190_bool == 0; // 0xa9 Not
	if(var_191_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_192_bool = var_189_string == var_2_object; // 0xac Eq
	if(var_192_bool == 0) goto Label_175; // 0xad JumpB
	return 0; // 0xae Return
	
Label_175:
	var_193_string = ""; var_194_bool = 0; // 0xaf PushV
	var_193_string = var_189_string; // 0xb0 Mov
	var_195_string = ""; // 0xb1 PushS
	var_196_bool = var_189_string == var_195_string; // 0xb2 Eq
	if(var_196_bool == 0) goto Label_182; // 0xb3 JumpB
	var_194_bool = 0; // 0xb4 MovB
	goto Label_183; // 0xb5 Jump
	
Label_183:
	func_667(var_193_string, var_194_bool); // 0xb7 NEW_2
	var_2_object = var_189_string; // 0xb9 TMov
	return 0; // 0xba Return
	
Label_182:
	var_194_bool = 1; // 0xb6 MovB
}


func_426(var_8_bool)
{
	var_8_bool = 1; // 0x1aa MovB
	return 0; // 0x1ab Return
}


func_682(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x2aa PushV
	var_116_bool = 0; // 0x2ab PushV
	func_771(var_116_bool); // 0x2ac NEW_2
	if(var_116_bool == 0) goto Label_695; // 0x2ae JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x2af Func
	var_117_bool = var_115_bool; // 0x2b1 Push
	if(var_117_bool == 0) goto Label_695; // 0x2b2 JumpB
	lshPlaySpeech(var_113_string); // 0x2b3 Func
	var_112_bool = 1; // 0x2b5 MovB
	return 2; // 0x2b6 Return
	
Label_695:
	var_112_bool = 0; // 0x2b7 MovB
	return 2; // 0x2b8 Return
}


func_428(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1ac PushV
	GetPosition(var_31_cvector); // 0x1ad ObjFunc
	GetEyesHeight(var_30_float); // 0x1af ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1b1 PushE
	var_39_float = var_39_float + var_30_float; // 0x1b2 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1b3 PopE
	GetPosition(var_32_cvector); // 0x1b4 Func
	GetEyesHeight(var_30_float); // 0x1b6 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1b8 PushE
	var_40_float = var_40_float + var_30_float; // 0x1b9 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1ba PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1bb Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1bc PushE
	var_41_float = 0; // 0x1bd MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1be PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1bf Or
	var_43_float = sqrt(var_42_int); // 0x1c0 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1c1 Div2
	var_34_cvector = -var_33_cvector; // 0x1c2 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1c3 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1c4 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1c5 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1c6 Xor2
	func_710(var_45_cvector, var_46_cvector); // 0x1c7 NEW_2
	var_53_int = 25; // 0x1c9 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1ca Mult
	var_55_int = var_44_float + var_54_float; // 0x1cb Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1cc PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1cd Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1ce Add2
	IsOverrideActive(var_37_bool); // 0x1cf Func
	var_57_bool = var_37_bool; // 0x1d1 Push
	if(var_57_bool == 0) goto Label_469; // 0x1d2 JumpB
	var_18_bool = 0; // 0x1d3 MovB
	return 18; // 0x1d4 Return
	
Label_469:
	StopWorld(); // 0x1d5 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x1d7 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x1d9 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x1da PushE
	Rotate(var_58_float, var_59_float); // 0x1db Func
	var_60_bool = 0; // 0x1dd PushV
	func_771(var_60_bool); // 0x1de NEW_2
	if(var_60_bool == 0) goto Label_482; // 0x1e0 JumpB
	goto Label_490; // 0x1e1 Jump
	
Label_490:
	CameraWaitForPlayFinish(); // 0x1ea Func
	ResumeWorld(); // 0x1ec Func
	var_18_bool = 1; // 0x1ee MovB
	return 18; // 0x1ef Return
	
Label_482:
	var_61_string = "head"; // 0x1e2 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x1e3 Func
	var_62_bool = var_38_bool; // 0x1e5 Push
	if(var_62_bool == 0) goto Label_490; // 0x1e6 JumpB
	var_63_string = "head"; // 0x1e7 PushS
	LookAsyncCamera(var_63_string); // 0x1e8 Func
}


func_746(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x2ea PushV
	var_72_string = "branch"; // 0x2eb PushS
	GetVariable(var_72_string, var_71_int); // 0x2ec Func
	var_73_int = 0; // 0x2ee PushI
	var_74_bool = var_71_int == var_73_int; // 0x2ef Eq
	if(var_74_bool == 0) goto Label_756; // 0x2f0 JumpB
	var_69_int = 1; // 0x2f1 MovI
	return 2; // 0x2f2 Return
	
Label_756:
	var_75_int = 1; // 0x2f4 PushI
	var_76_bool = var_71_int == var_75_int; // 0x2f5 Eq
	if(var_76_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_69_int = 2; // 0x2f7 MovI
	return 2; // 0x2f8 Return
	
Label_761:
	var_69_int = 3; // 0x2f9 MovI
	return 2; // 0x2fa Return
}


func_496()
{
	var_241_bool = 0; var_242_bool = 0; // 0x1f0 PushV
	CameraSwitchToNormal(); // 0x1f1 Func
	var_243_bool = 0; // 0x1f3 PushV
	func_771(var_243_bool); // 0x1f4 NEW_2
	if(var_243_bool == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_512; // 0x1f7 Jump
	
Label_512:
	return 2; // 0x200 Return
	
Label_504:
	var_244_string = "head"; // 0x1f8 PushS
	HasAnimationTrack(var_242_bool, var_244_string); // 0x1f9 Func
	var_245_bool = var_242_bool; // 0x1fb Push
	if(var_245_bool == 0) goto Label_512; // 0x1fc JumpB
	var_246_string = "head"; // 0x1fd PushS
	UnlookAsync(var_246_string); // 0x1fe Func
}


func_697()
{
	var_9_bool = 0; // 0x2b9 PushV
	func_771(var_9_bool); // 0x2ba NEW_2
	if(var_9_bool == 0) goto Label_703; // 0x2bc JumpB
	lshStopSpeech(); // 0x2bd Func
	
Label_703:
	return 0; // 0x2bf Return
}


func_571(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x23b PushV
	var_96_string = "c"; // 0x23c MovS
	var_97_int = 0; // 0x23d MovI
	
Label_574:
	var_101_int = 1; // 0x23e PushI
	if(var_101_int == 0) goto Label_587; // 0x23f JumpB
	var_102_int = 1; // 0x240 PushI
	var_103_int = var_97_int + var_102_int; // 0x241 Add
	var_104_int = var_96_string + var_103_int; // 0x242 Add
	HasProperty(var_104_int, var_98_bool); // 0x243 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x245 Not
	if(var_105_bool == 0) goto Label_584; // 0x246 JumpB
	goto Label_587; // 0x247 Jump
	
Label_587:
	var_106_bool = var_97_int == 0; // 0x24b Not
	if(var_106_bool == 0) goto Label_591; // 0x24c JumpB
	var_89_bool = 0; // 0x24d MovB
	return 10; // 0x24e Return
	
Label_591:
	var_99_int = 0; // 0x24f MovI
	var_107_int = 1; // 0x250 PushI
	var_108_bool = var_97_int > var_107_int; // 0x251 GT
	if(var_108_bool == 0) goto Label_597; // 0x252 JumpB
	irand(var_99_int, var_97_int); // 0x253 Func
	
Label_597:
	var_109_int = 1; // 0x255 PushI
	var_110_int = var_99_int + var_109_int; // 0x256 Add
	var_111_int = var_96_string + var_110_int; // 0x257 Add
	GetProperty(var_111_int, var_100_string); // 0x258 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x25a PushV
	var_113_string = var_100_string; // 0x25b Mov
	func_682(var_112_bool, var_113_string); // 0x25c NEW_2
	var_89_bool = var_112_bool; // 0x25d Mov
	return 10; // 0x25f Return
	
Label_584:
	var_118_int = 1; // 0x248 PushI
	var_97_int = var_97_int + var_118_int; // 0x249 Add2
	goto Label_574; // 0x24a Jump
}


func_765(var_65_int)
{
	var_65_int = 513334; // 0x2fd MovI
	return 0; // 0x2fe Return
}


func_763(var_66_int)
{
	var_66_int = 515527; // 0x2fb MovI
	return 0; // 0x2fc Return
}


