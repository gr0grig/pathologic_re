task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbc PushI
	if(var_8_int == 0) goto Label_369; // 0xbd JumpB
	func_699(); // 0xbf NEW_2
	var_10_int = 41142; // 0xc1 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc2 Eq
	if(var_11_bool == 0) goto Label_242; // 0xc3 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc4 PushV
	var_13_object = var_1_object; // 0xc5 MovT
	func_736(var_13_object); // 0xc6 NEW_2
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
	func_773(var_103_bool); // 0x167 NEW_2
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
	func_706(var_14_object); // 0x190 NEW_2
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
	func_706(var_9_object); // 0x1a5 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_767(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_765(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_769(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_771(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_748(var_70_int); // 0x22 NEW_2
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
	func_706(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_515(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_240_bool = var_17_bool == 0; // 0x3f Not
	if(var_240_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_241_object = Obj(); // 0x46 PushV
	var_241_object = var_8_object; // 0x47 Mov
	func_497(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_68_string)
{
	var_68_string = "ui/NPC_Aglaja.png"; // 0x301 MovS
	return 0; // 0x302 Return
}


func_706(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2c2 PushV
	self(var_11_object); // 0x2c3 Func
	var_9_object = var_11_object; // 0x2c5 Mov
	return 2; // 0x2c6 Return
}


func_771(var_69_string)
{
	var_69_string = "ui/NPC_Aglaja_b.png"; // 0x303 MovS
	return 0; // 0x304 Return
}


func_515(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x203 PushV
	var_88_string = "voice_common"; // 0x204 PushS
	GetVariable(var_88_string, var_86_int); // 0x205 Func
	var_89_int = var_86_int; // 0x207 Push
	if(var_89_int == 0) goto Label_553; // 0x208 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x209 PushV
	var_91_object = var_80_object; // 0x20a Mov
	func_573(var_91_object); // 0x20b NEW_2
	var_120_bool = var_90_bool == 0; // 0x20d Not
	if(var_120_bool == 0) goto Label_535; // 0x20e JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x20f PushV
	var_122_object = var_80_object; // 0x210 Mov
	func_610(var_122_object); // 0x211 NEW_2
	var_156_bool = var_121_bool == 0; // 0x213 Not
	if(var_156_bool == 0) goto Label_535; // 0x214 JumpB
	var_79_bool = 0; // 0x215 MovB
	return 4; // 0x216 Return
	
Label_535:
	var_157_int = 2; // 0x217 PushI
	irand(var_87_int, var_157_int); // 0x218 Func
	var_158_int = var_87_int; // 0x21a Push
	if(var_158_int == 0) goto Label_548; // 0x21b JumpB
	var_159_string = "voice_common"; // 0x21c PushS
	var_160_int = 1; // 0x21d PushI
	var_161_int = var_86_int + var_160_int; // 0x21e Add
	var_162_int = 3; // 0x21f PushI
	var_163_int = var_161_int / var_162_int; // 0x220 Mod
	SetVariable(var_159_string, var_163_int); // 0x221 Func
	goto Label_552; // 0x223 Jump
	
Label_552:
	goto Label_571; // 0x228 Jump
	
Label_571:
	var_79_bool = 1; // 0x23b MovB
	return 4; // 0x23c Return
	
Label_548:
	var_164_string = "voice_common"; // 0x224 PushS
	var_165_int = 0; // 0x225 PushI
	SetVariable(var_164_string, var_165_int); // 0x226 Func
	
Label_553:
	var_166_bool = 0; var_167_object = Obj(); // 0x229 PushV
	var_167_object = var_80_object; // 0x22a Mov
	func_610(var_167_object); // 0x22b NEW_2
	var_168_bool = var_166_bool == 0; // 0x22d Not
	if(var_168_bool == 0) goto Label_567; // 0x22e JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x22f PushV
	var_170_object = var_80_object; // 0x230 Mov
	func_573(var_170_object); // 0x231 NEW_2
	var_171_bool = var_169_bool == 0; // 0x233 Not
	if(var_171_bool == 0) goto Label_567; // 0x234 JumpB
	var_79_bool = 0; // 0x235 MovB
	return 4; // 0x236 Return
	
Label_567:
	var_172_string = "voice_common"; // 0x237 PushS
	var_173_int = 1; // 0x238 PushI
	SetVariable(var_172_string, var_173_int); // 0x239 Func
}


func_773(var_61_bool)
{
	var_61_bool = 1; // 0x305 MovB
	return 0; // 0x306 Return
}


func_712(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2c8 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2c9 Or
	var_49_float = sqrt(var_50_int); // 0x2ca Sqrt2
	var_51_float = 0.0; // 0x2cb PushF
	var_52_bool = var_49_float < var_51_float; // 0x2cc LT
	if(var_52_bool == 0) goto Label_720; // 0x2cd JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2ce MovV
	return 2; // 0x2cf Return
	
Label_720:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2d0 Div2
	return 2; // 0x2d1 Return
}


func_765(var_67_int)
{
	var_67_int = 515527; // 0x2fd MovI
	return 0; // 0x2fe Return
}


func_653(var_216_string)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x28d PushV
	lshHasAnimation(var_220_bool, var_216_string); // 0x28e Func
	var_223_bool = var_220_bool; // 0x290 Push
	if(var_223_bool == 0) goto Label_664; // 0x291 JumpB
	lshGetAnimTimes(var_216_string, var_221_float, var_222_float); // 0x292 Func
	var_224_bool = 0; // 0x294 PushB
	lshPlayAnimation(var_221_float, var_222_float, var_224_bool); // 0x295 Func
	goto Label_668; // 0x297 Jump
	
Label_668:
	return 6; // 0x29c Return
	
Label_664:
	var_225_string = "Can't find lsh animation : "; // 0x298 PushS
	var_226_int = var_225_string + var_216_string; // 0x299 Add
	Trace(var_226_int); // 0x29a Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_135; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_736(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_113; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_165(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 539199; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_int = 540975; // 0x66 PushI
	var_209_int = 43646; // 0x67 PushI
	var_210_int = 43065; // 0x68 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x69 TObjFunc
	var_211_int = 539200; // 0x6b PushI
	var_212_int = 43646; // 0x6c PushI
	var_213_int = 41143; // 0x6d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6e TObjFunc
	goto Label_135; // 0x70 Jump
	
Label_135:
	var_214_bool = 0; // 0x87 PushV
	func_773(var_214_bool); // 0x88 NEW_2
	if(var_214_bool == 0) goto Label_150; // 0x8a JumpB
	
Label_139:
	lshWaitForAnimEnd(); // 0x8b Func
	var_215_string = var_3_string; // 0x8d PushT
	if(var_215_string == 0) goto Label_144; // 0x8e JumpB
	goto Label_149; // 0x8f Jump
	
Label_149:
	goto Label_164; // 0x95 Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_144:
	var_216_string = ""; // 0x90 PushV
	var_216_string = var_2_object; // 0x91 MovT
	func_653(var_216_string); // 0x92 NEW_2
	goto Label_139; // 0x94 Jump
	
Label_150:
	var_227_string = "all"; // 0x96 PushS
	var_228_string = "idle"; // 0x97 PushS
	PlayAnimation(var_227_string, var_228_string); // 0x98 Func
	
Label_154:
	WaitForAnimEnd(); // 0x9a Func
	var_229_string = var_3_string; // 0x9c PushT
	if(var_229_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_159:
	var_230_string = "all"; // 0x9f PushS
	var_231_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_230_string, var_231_string); // 0xa1 Func
	goto Label_154; // 0xa3 Jump
	
Label_113:
	var_232_string = ""; // 0x71 PushV
	var_232_string = "Neutral"; // 0x72 MovS
	func_165(var_175_object, var_232_string); // 0x73 NEW_2
	var_233_int = 539201; // 0x75 PushI
	SetMessage(var_233_int); // 0x76 TObjFunc
	ClearReplies(); // 0x78 TObjFunc
	var_234_int = 539202; // 0x7a PushI
	var_235_int = -1; // 0x7b PushI
	var_236_int = 41145; // 0x7c PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x7d TObjFunc
	var_237_int = 540976; // 0x7f PushI
	var_238_int = -1; // 0x80 PushI
	var_239_int = 43066; // 0x81 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x82 TObjFunc
	goto Label_135; // 0x84 Jump
}


func_722(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x2d2 PushV
	GetVariable(var_184_string, var_186_int); // 0x2d3 Func
	var_183_int = var_186_int; // 0x2d5 Mov
	return 2; // 0x2d6 Return
}


func_727(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x2d7 PushV
	GetGameTime(var_136_float); // 0x2d8 Func
	var_137_int = 1; // 0x2da PushI
	var_138_int = 0; // 0x2db PushV
	var_139_int = 24; // 0x2dc PushI
	var_138_int = var_136_float / var_136_float; // 0x2dd Div2
	var_134_int = var_137_int + var_138_int; // 0x2de Add2
	return 2; // 0x2df Return
}


func_669(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x29d PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x29e Func
	var_204_bool = var_201_bool; // 0x2a0 Push
	if(var_204_bool == 0) goto Label_679; // 0x2a1 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x2a2 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x2a4 Func
	goto Label_683; // 0x2a6 Jump
	
Label_683:
	return 6; // 0x2ab Return
	
Label_679:
	var_205_string = "Can't find lsh animation : "; // 0x2a7 PushS
	var_206_int = var_205_string + var_194_string; // 0x2a8 Add
	Trace(var_206_int); // 0x2a9 Func
}


func_736(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x2e1 PushV
	var_184_string = "game_final"; // 0x2e2 MovS
	func_722(var_183_int, var_184_string); // 0x2e3 NEW_2
	var_187_int = 0; // 0x2e5 PushI
	var_188_bool = var_183_int != var_187_int; // 0x2e6 Neq
	if(var_188_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_181_bool = 1; // 0x2e8 MovB
	return 0; // 0x2e9 Return
	
Label_746:
	var_181_bool = 0; // 0x2ea MovB
	return 0; // 0x2eb Return
}


func_610(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x262 PushV
	var_133_string = "d"; // 0x263 PushS
	var_134_int = 0; // 0x264 PushV
	func_727(var_134_int); // 0x265 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x267 Add
	var_141_string = "m"; // 0x268 PushS
	var_128_string = var_140_int + var_141_string; // 0x269 Add2
	var_129_int = 0; // 0x26a MovI
	
Label_619:
	var_142_int = 1; // 0x26b PushI
	if(var_142_int == 0) goto Label_632; // 0x26c JumpB
	var_143_int = 1; // 0x26d PushI
	var_144_int = var_129_int + var_143_int; // 0x26e Add
	var_145_int = var_128_string + var_144_int; // 0x26f Add
	HasProperty(var_145_int, var_130_bool); // 0x270 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x272 Not
	if(var_146_bool == 0) goto Label_629; // 0x273 JumpB
	goto Label_632; // 0x274 Jump
	
Label_632:
	var_147_bool = var_129_int == 0; // 0x278 Not
	if(var_147_bool == 0) goto Label_636; // 0x279 JumpB
	var_121_bool = 0; // 0x27a MovB
	return 10; // 0x27b Return
	
Label_636:
	var_131_int = 0; // 0x27c MovI
	var_148_int = 1; // 0x27d PushI
	var_149_bool = var_129_int > var_148_int; // 0x27e GT
	if(var_149_bool == 0) goto Label_642; // 0x27f JumpB
	irand(var_131_int, var_129_int); // 0x280 Func
	
Label_642:
	var_150_int = 1; // 0x282 PushI
	var_151_int = var_131_int + var_150_int; // 0x283 Add
	var_152_int = var_128_string + var_151_int; // 0x284 Add
	GetProperty(var_152_int, var_132_string); // 0x285 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x287 PushV
	var_154_string = var_132_string; // 0x288 Mov
	func_684(var_153_bool, var_154_string); // 0x289 NEW_2
	var_121_bool = var_153_bool; // 0x28a Mov
	return 10; // 0x28c Return
	
Label_629:
	var_155_int = 1; // 0x275 PushI
	var_129_int = var_129_int + var_155_int; // 0x276 Add2
	goto Label_619; // 0x277 Jump
}


func_165(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xa6 PushV
	func_773(var_191_bool); // 0xa7 NEW_2
	var_192_bool = var_191_bool == 0; // 0xa9 Not
	if(var_192_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_193_bool = var_190_string == var_2_object; // 0xac Eq
	if(var_193_bool == 0) goto Label_175; // 0xad JumpB
	return 0; // 0xae Return
	
Label_175:
	var_194_string = ""; var_195_bool = 0; // 0xaf PushV
	var_194_string = var_190_string; // 0xb0 Mov
	var_196_string = ""; // 0xb1 PushS
	var_197_bool = var_190_string == var_196_string; // 0xb2 Eq
	if(var_197_bool == 0) goto Label_182; // 0xb3 JumpB
	var_195_bool = 0; // 0xb4 MovB
	goto Label_183; // 0xb5 Jump
	
Label_183:
	func_669(var_194_string, var_195_bool); // 0xb7 NEW_2
	var_2_object = var_190_string; // 0xb9 TMov
	return 0; // 0xba Return
	
Label_182:
	var_195_bool = 1; // 0xb6 MovB
}


func_426(var_8_bool)
{
	var_8_bool = 1; // 0x1aa MovB
	return 0; // 0x1ab Return
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
	func_712(var_45_cvector, var_46_cvector); // 0x1c7 NEW_2
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
	var_58_bool = 1; // 0x1d7 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1d8 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1da PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1db PushE
	Rotate(var_59_float, var_60_float); // 0x1dc Func
	var_61_bool = 0; // 0x1de PushV
	func_773(var_61_bool); // 0x1df NEW_2
	if(var_61_bool == 0) goto Label_483; // 0x1e1 JumpB
	goto Label_491; // 0x1e2 Jump
	
Label_491:
	CameraWaitForPlayFinish(); // 0x1eb Func
	ResumeWorld(); // 0x1ed Func
	var_18_bool = 1; // 0x1ef MovB
	return 18; // 0x1f0 Return
	
Label_483:
	var_62_string = "head"; // 0x1e3 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1e4 Func
	var_63_bool = var_38_bool; // 0x1e6 Push
	if(var_63_bool == 0) goto Label_491; // 0x1e7 JumpB
	var_64_string = "head"; // 0x1e8 PushS
	LookAsyncCamera(var_64_string); // 0x1e9 Func
}


func_684(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x2ac PushV
	var_117_bool = 0; // 0x2ad PushV
	func_773(var_117_bool); // 0x2ae NEW_2
	if(var_117_bool == 0) goto Label_697; // 0x2b0 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x2b1 Func
	var_118_bool = var_116_bool; // 0x2b3 Push
	if(var_118_bool == 0) goto Label_697; // 0x2b4 JumpB
	lshPlaySpeech(var_114_string); // 0x2b5 Func
	var_113_bool = 1; // 0x2b7 MovB
	return 2; // 0x2b8 Return
	
Label_697:
	var_113_bool = 0; // 0x2b9 MovB
	return 2; // 0x2ba Return
}


func_748(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x2ec PushV
	var_73_string = "branch"; // 0x2ed PushS
	GetVariable(var_73_string, var_72_int); // 0x2ee Func
	var_74_int = 0; // 0x2f0 PushI
	var_75_bool = var_72_int == var_74_int; // 0x2f1 Eq
	if(var_75_bool == 0) goto Label_758; // 0x2f2 JumpB
	var_70_int = 1; // 0x2f3 MovI
	return 2; // 0x2f4 Return
	
Label_758:
	var_76_int = 1; // 0x2f6 PushI
	var_77_bool = var_72_int == var_76_int; // 0x2f7 Eq
	if(var_77_bool == 0) goto Label_763; // 0x2f8 JumpB
	var_70_int = 2; // 0x2f9 MovI
	return 2; // 0x2fa Return
	
Label_763:
	var_70_int = 3; // 0x2fb MovI
	return 2; // 0x2fc Return
}


func_497()
{
	var_242_bool = 0; var_243_bool = 0; // 0x1f1 PushV
	var_244_bool = 1; // 0x1f2 PushB
	CameraSwitchToNormal(var_244_bool); // 0x1f3 Func
	var_245_bool = 0; // 0x1f5 PushV
	func_773(var_245_bool); // 0x1f6 NEW_2
	if(var_245_bool == 0) goto Label_506; // 0x1f8 JumpB
	goto Label_514; // 0x1f9 Jump
	
Label_514:
	return 2; // 0x202 Return
	
Label_506:
	var_246_string = "head"; // 0x1fa PushS
	HasAnimationTrack(var_243_bool, var_246_string); // 0x1fb Func
	var_247_bool = var_243_bool; // 0x1fd Push
	if(var_247_bool == 0) goto Label_514; // 0x1fe JumpB
	var_248_string = "head"; // 0x1ff PushS
	UnlookAsync(var_248_string); // 0x200 Func
}


func_699()
{
	var_9_bool = 0; // 0x2bb PushV
	func_773(var_9_bool); // 0x2bc NEW_2
	if(var_9_bool == 0) goto Label_705; // 0x2be JumpB
	lshStopSpeech(); // 0x2bf Func
	
Label_705:
	return 0; // 0x2c1 Return
}


func_573(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x23d PushV
	var_97_string = "c"; // 0x23e MovS
	var_98_int = 0; // 0x23f MovI
	
Label_576:
	var_102_int = 1; // 0x240 PushI
	if(var_102_int == 0) goto Label_589; // 0x241 JumpB
	var_103_int = 1; // 0x242 PushI
	var_104_int = var_98_int + var_103_int; // 0x243 Add
	var_105_int = var_97_string + var_104_int; // 0x244 Add
	HasProperty(var_105_int, var_99_bool); // 0x245 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x247 Not
	if(var_106_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_589; // 0x249 Jump
	
Label_589:
	var_107_bool = var_98_int == 0; // 0x24d Not
	if(var_107_bool == 0) goto Label_593; // 0x24e JumpB
	var_90_bool = 0; // 0x24f MovB
	return 10; // 0x250 Return
	
Label_593:
	var_100_int = 0; // 0x251 MovI
	var_108_int = 1; // 0x252 PushI
	var_109_bool = var_98_int > var_108_int; // 0x253 GT
	if(var_109_bool == 0) goto Label_599; // 0x254 JumpB
	irand(var_100_int, var_98_int); // 0x255 Func
	
Label_599:
	var_110_int = 1; // 0x257 PushI
	var_111_int = var_100_int + var_110_int; // 0x258 Add
	var_112_int = var_97_string + var_111_int; // 0x259 Add
	GetProperty(var_112_int, var_101_string); // 0x25a ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x25c PushV
	var_114_string = var_101_string; // 0x25d Mov
	func_684(var_113_bool, var_114_string); // 0x25e NEW_2
	var_90_bool = var_113_bool; // 0x25f Mov
	return 10; // 0x261 Return
	
Label_586:
	var_119_int = 1; // 0x24a PushI
	var_98_int = var_98_int + var_119_int; // 0x24b Add2
	goto Label_576; // 0x24c Jump
}


func_767(var_66_int)
{
	var_66_int = 513334; // 0x2ff MovI
	return 0; // 0x300 Return
}


