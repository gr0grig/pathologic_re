task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb6 PushI
	if(var_9_int == 0) goto Label_409; // 0xb7 JumpB
	func_1012(); // 0xb9 NEW_2
	var_11_int = 28294; // 0xbb PushI
	var_12_bool = var_8_bool == var_11_int; // 0xbc Eq
	if(var_12_bool == 0) goto Label_200; // 0xbd JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xbe PushV
	var_13_object = var_1_object; // 0xbf MovT
	var_14_object = var_0_object; // 0xc0 MovT
	func_1085(); // 0xc1 NEW_2
	var_44_object = Obj(); var_45_object = Obj(); // 0xc3 PushV
	var_44_object = var_1_object; // 0xc4 MovT
	var_45_object = var_0_object; // 0xc5 MovT
	func_1095(); // 0xc6 NEW_2
	
Label_200:
	var_74_int = 28291; // 0xc8 PushI
	var_75_bool = var_7_cvector == var_74_int; // 0xc9 Eq
	if(var_75_bool == 0) goto Label_243; // 0xca JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0xcb PushV
	var_77_object = var_1_object; // 0xcc MovT
	func_1123(var_77_object); // 0xcd NEW_2
	if(var_76_bool == 0) goto Label_228; // 0xcf JumpB
	var_82_string = ""; // 0xd0 PushV
	var_82_string = "Neutral"; // 0xd1 MovS
	func_159(var_8_bool, var_82_string); // 0xd2 NEW_2
	var_99_int = 526999; // 0xd4 PushI
	SetMessage(var_99_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_100_int = 527000; // 0xd9 PushI
	var_101_int = 29484; // 0xda PushI
	var_102_int = 28292; // 0xdb PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xdc TObjFunc
	var_103_int = 528140; // 0xde PushI
	var_104_int = 29484; // 0xdf PushI
	var_105_int = 29490; // 0xe0 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xe1 TObjFunc
	return 0; // 0xe3 Return
	
Label_228:
	var_106_string = ""; // 0xe4 PushV
	var_106_string = "Neutral"; // 0xe5 MovS
	func_159(var_8_bool, var_106_string); // 0xe6 NEW_2
	var_107_int = 527003; // 0xe8 PushI
	SetMessage(var_107_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_108_int = 527004; // 0xed PushI
	var_109_int = -1; // 0xee PushI
	var_110_int = 28296; // 0xef PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_111_int = 29484; // 0xf3 PushI
	var_112_bool = var_7_cvector == var_111_int; // 0xf4 Eq
	if(var_112_bool == 0) goto Label_266; // 0xf5 JumpB
	var_113_string = ""; // 0xf6 PushV
	var_113_string = "Confusion"; // 0xf7 MovS
	func_159(var_8_bool, var_113_string); // 0xf8 NEW_2
	var_114_int = 528134; // 0xfa PushI
	SetMessage(var_114_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_115_int = 528135; // 0xff PushI
	var_116_int = 29486; // 0x100 PushI
	var_117_int = 29485; // 0x101 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x102 TObjFunc
	var_118_int = 528141; // 0x104 PushI
	var_119_int = 29486; // 0x105 PushI
	var_120_int = 29492; // 0x106 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_121_int = 29486; // 0x10a PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x10b Eq
	if(var_122_bool == 0) goto Label_284; // 0x10c JumpB
	var_123_string = ""; // 0x10d PushV
	var_123_string = "Confusion"; // 0x10e MovS
	func_159(var_8_bool, var_123_string); // 0x10f NEW_2
	var_124_int = 528136; // 0x111 PushI
	SetMessage(var_124_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_125_int = 528137; // 0x116 PushI
	var_126_int = 29494; // 0x117 PushI
	var_127_int = 29487; // 0x118 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_128_int = 29494; // 0x11c PushI
	var_129_bool = var_7_cvector == var_128_int; // 0x11d Eq
	if(var_129_bool == 0) goto Label_302; // 0x11e JumpB
	var_130_string = ""; // 0x11f PushV
	var_130_string = "Neutral"; // 0x120 MovS
	func_159(var_8_bool, var_130_string); // 0x121 NEW_2
	var_131_int = 528142; // 0x123 PushI
	SetMessage(var_131_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_132_int = 528143; // 0x128 PushI
	var_133_int = 29496; // 0x129 PushI
	var_134_int = 29495; // 0x12a PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_135_int = 29496; // 0x12e PushI
	var_136_bool = var_7_cvector == var_135_int; // 0x12f Eq
	if(var_136_bool == 0) goto Label_320; // 0x130 JumpB
	var_137_string = ""; // 0x131 PushV
	var_137_string = "Neutral"; // 0x132 MovS
	func_159(var_8_bool, var_137_string); // 0x133 NEW_2
	var_138_int = 528144; // 0x135 PushI
	SetMessage(var_138_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_139_int = 528145; // 0x13a PushI
	var_140_int = 29488; // 0x13b PushI
	var_141_int = 29497; // 0x13c PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_142_int = 29488; // 0x140 PushI
	var_143_bool = var_7_cvector == var_142_int; // 0x141 Eq
	if(var_143_bool == 0) goto Label_343; // 0x142 JumpB
	var_144_string = ""; // 0x143 PushV
	var_144_string = "Warning"; // 0x144 MovS
	func_159(var_8_bool, var_144_string); // 0x145 NEW_2
	var_145_int = 528138; // 0x147 PushI
	SetMessage(var_145_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_146_int = 528146; // 0x14c PushI
	var_147_int = 29499; // 0x14d PushI
	var_148_int = 29498; // 0x14e PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x14f TObjFunc
	var_149_int = 541107; // 0x151 PushI
	var_150_int = 43221; // 0x152 PushI
	var_151_int = 43220; // 0x153 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_152_int = 43221; // 0x157 PushI
	var_153_bool = var_7_cvector == var_152_int; // 0x158 Eq
	if(var_153_bool == 0) goto Label_361; // 0x159 JumpB
	var_154_string = ""; // 0x15a PushV
	var_154_string = "Confusion"; // 0x15b MovS
	func_159(var_8_bool, var_154_string); // 0x15c NEW_2
	var_155_int = 541108; // 0x15e PushI
	SetMessage(var_155_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_156_int = 541109; // 0x163 PushI
	var_157_int = 29499; // 0x164 PushI
	var_158_int = 43222; // 0x165 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_159_int = 29499; // 0x169 PushI
	var_160_bool = var_7_cvector == var_159_int; // 0x16a Eq
	if(var_160_bool == 0) goto Label_379; // 0x16b JumpB
	var_161_string = ""; // 0x16c PushV
	var_161_string = "Warning"; // 0x16d MovS
	func_159(var_8_bool, var_161_string); // 0x16e NEW_2
	var_162_int = 528147; // 0x170 PushI
	SetMessage(var_162_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_163_int = 528139; // 0x175 PushI
	var_164_int = 28293; // 0x176 PushI
	var_165_int = 29489; // 0x177 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_166_int = 28293; // 0x17b PushI
	var_167_bool = var_7_cvector == var_166_int; // 0x17c Eq
	if(var_167_bool == 0) goto Label_397; // 0x17d JumpB
	var_168_string = ""; // 0x17e PushV
	var_168_string = "Warning"; // 0x17f MovS
	func_159(var_8_bool, var_168_string); // 0x180 NEW_2
	var_169_int = 527001; // 0x182 PushI
	SetMessage(var_169_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_170_int = 527002; // 0x187 PushI
	var_171_int = -1; // 0x188 PushI
	var_172_int = 28294; // 0x189 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_3_string = 1; // 0x18d TMovB
	var_173_bool = 0; // 0x18e PushV
	func_1244(var_173_bool); // 0x18f NEW_2
	if(var_173_bool == 0) goto Label_405; // 0x191 JumpB
	lshStopAnimation(); // 0x192 Func
	goto Label_407; // 0x194 Jump
	
Label_407:
	return 0; // 0x197 Return
	
Label_405:
	StopAnimation(); // 0x195 Func
	
Label_409:
	return 0; // 0x199 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1a6 PushV
	var_10_string = "cleanup"; // 0x1a7 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1a8 Eq
	if(var_11_bool == 0) goto Label_437; // 0x1a9 JumpB
	var_1_object = 1; // 0x1aa TMovB
	IsLoaded(var_9_bool); // 0x1ab Func
	var_12_bool = var_9_bool == 0; // 0x1ad Not
	if(var_12_bool == 0) goto Label_436; // 0x1ae JumpB
	var_13_object = Obj(); // 0x1af PushV
	func_1019(var_13_object); // 0x1b0 NEW_2
	RemoveActor(var_13_object); // 0x1b2 Func
	
Label_436:
	goto Label_441; // 0x1b4 Jump
	
Label_441:
	return 2; // 0x1b9 Return
	
Label_437:
	var_16_string = "restore"; // 0x1b5 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1b6 Eq
	if(var_17_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_1_object = 0; // 0x1b8 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1ba PushT
	if(var_7_object == 0) goto Label_451; // 0x1bb JumpB
	var_8_object = Obj(); // 0x1bc PushV
	func_1019(var_8_object); // 0x1bd NEW_2
	RemoveActor(var_8_object); // 0x1bf Func
	Hold(); // 0x1c1 Func
	
Label_451:
	func_566(); // 0x1c4 NEW_2
	return 0; // 0x1c6 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_581(); // 0x1c8 NEW_2
	return 0; // 0x1ca Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x211 PushI
	var_9_bool = var_7_int == var_8_int; // 0x212 Eq
	if(var_9_bool == 0) goto Label_565; // 0x213 JumpB
	func_524(); // 0x215 NEW_2
	var_11_bool = 0; // 0x217 PushV
	var_11_bool = 0; // 0x218 MovB
	var_12_bool = 0; // 0x219 PushV
	func_738(var_12_bool); // 0x21a NEW_2
	if(var_12_bool == 0) goto Label_546; // 0x21c JumpB
	var_15_bool = 0; // 0x21d PushV
	func_493(var_15_bool); // 0x21e NEW_2
	if(var_15_bool == 0) goto Label_546; // 0x220 JumpB
	var_11_bool = 1; // 0x221 MovB
	
Label_546:
	if(var_11_bool == 0) goto Label_559; // 0x222 JumpB
	var_32_bool = 0; // 0x223 PushV
	func_473(var_32_bool); // 0x224 NEW_2
	if(var_32_bool == 0) goto Label_558; // 0x226 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x227 PushV
	var_53_object = Obj(); // 0x228 PushV
	func_1019(var_53_object); // 0x229 NEW_2
	var_52_object = var_53_object; // 0x22a Mov
	func_886(var_52_object); // 0x22c NEW_2
	
Label_558:
	goto Label_565; // 0x22e Jump
	
Label_565:
	return 0; // 0x235 Return
	
Label_559:
	func_488(var_7_int); // 0x230 NEW_2
	func_515(); // 0x233 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x253 Push
	if(var_8_bool == 0) goto Label_601; // 0x254 JumpB
	func_515(); // 0x256 NEW_2
	goto Label_605; // 0x258 Jump
	
Label_605:
	return 0; // 0x25d Return
	
Label_601:
	var_14_string = ""; // 0x259 PushV
	var_14_string = "Neutral"; // 0x25a MovS
	func_966(var_14_string); // 0x25b NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x25e PushV
	IsOverrideActive(var_9_bool); // 0x25f Func
	var_10_bool = var_9_bool == 0; // 0x261 Not
	if(var_10_bool == 0) goto Label_634; // 0x262 JumpB
	EventDisable(0); // 0x263 EventDisable
	func_706(); // 0x265 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x267 PushV
	var_12_object = var_7_object; // 0x268 Mov
	func_729(var_12_object); // 0x269 NEW_2
	EventEnable(0); // 0x26b EventEnable
	var_25_object = Obj(); // 0x26c PushV
	var_25_object = var_7_object; // 0x26d Mov
	func_410(var_25_object); // 0x26e NEW_2
	var_262_string = ""; // 0x270 PushV
	var_262_string = "Neutral"; // 0x271 MovS
	func_966(var_262_string); // 0x272 NEW_2
	func_524(); // 0x275 NEW_2
	func_515(); // 0x278 NEW_2
	
Label_634:
	return 2; // 0x27a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_459(var_6_bool); // 0x1a3 NEW_2
	return 0; // 0x1a5 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_743(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1238(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1236(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1240(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1242(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1219(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1019(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_828(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_254_bool = var_36_bool == 0; // 0x3f Not
	if(var_254_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_255_object = Obj(); // 0x46 PushV
	var_255_object = var_27_object; // 0x47 Mov
	func_811(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x401 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x402 Or
	var_68_float = sqrt(var_69_int); // 0x403 Sqrt2
	var_70_float = 0.0; // 0x404 PushF
	var_71_bool = var_68_float < var_70_float; // 0x405 LT
	if(var_71_bool == 0) goto Label_1033; // 0x406 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x407 MovV
	return 2; // 0x408 Return
	
Label_1033:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x409 Div2
	return 2; // 0x40a Return
}


func_515()
{
	var_264_float = 0; var_265_float = 0; // 0x203 PushV
	var_266_int = 8; // 0x204 PushI
	var_267_int = 16; // 0x205 PushI
	rand(var_265_float, var_266_int, var_267_int); // 0x206 Func
	var_268_int = 10; // 0x208 PushI
	SetTimer(var_268_int, var_265_float); // 0x209 Func
	return 2; // 0x20b Return
}


func_1019(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3fb PushV
	self(var_101_object); // 0x3fc Func
	var_99_object = var_101_object; // 0x3fe Mov
	return 2; // 0x3ff Return
}


func_1161(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x489 PushV
	GetDiaryRoot(var_31_object); // 0x48a Func
	var_32_bool = var_31_object == 0; // 0x48c Not
	if(var_32_bool == 0) goto Label_1171; // 0x48d JumpB
	var_33_string = "Can't retrieve diary root"; // 0x48e PushS
	Trace(var_33_string); // 0x48f Func
	var_29_object = 0; // 0x491 MovB
	return 2; // 0x492 Return
	
Label_1171:
	var_29_object = var_31_object; // 0x493 Mov
	return 2; // 0x494 Return
}


func_1035(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x40b PushV
	GetVariable(var_202_string, var_204_int); // 0x40c Func
	var_201_int = var_204_int; // 0x40e Mov
	return 2; // 0x40f Return
}


func_524()
{
	var_263_int = 10; // 0x20c PushI
	KillTimer(var_263_int); // 0x20d Func
	return 0; // 0x20f Return
}


func_1040(var_38_bool, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x410 PushV
	FindActor(var_42_object, var_39_string); // 0x411 Func
	var_43_bool = var_42_object == 0; // 0x413 NullEq
	if(var_43_bool == 0) goto Label_1047; // 0x414 JumpB
	var_38_bool = 0; // 0x415 MovB
	return 2; // 0x416 Return
	
Label_1047:
	Trigger(var_42_object, var_40_string); // 0x417 Func
	var_38_bool = 1; // 0x419 MovB
	return 2; // 0x41a Return
}


func_1174(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x496 PushV
	var_29_object = Obj(); // 0x497 PushV
	func_1161(var_29_object); // 0x498 NEW_2
	var_26_object = var_29_object; // 0x499 Mov
	Find(var_22_int, var_27_object); // 0x49b ObjFunc
	var_34_bool = var_27_object == 0; // 0x49d Not
	if(var_34_bool == 0) goto Label_1189; // 0x49e JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x49f PushS
	var_36_int = var_35_string + var_22_int; // 0x4a0 Add
	Trace(var_36_int); // 0x4a1 Func
	var_20_bool = 0; // 0x4a3 MovB
	return 6; // 0x4a4 Return
	
Label_1189:
	AddChild(var_21_object); // 0x4a5 ObjFunc
	var_37_int = 7; // 0x4a7 PushI
	SendWorldWndMessage(var_37_int); // 0x4a8 Func
	GetCategory(var_28_int); // 0x4aa ObjFunc
	SetDiarySection(var_28_int); // 0x4ac Func
	var_20_bool = 0; // 0x4ae MovB
	return 6; // 0x4af Return
}


func_410(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x19b PushV
	var_27_object = var_25_object; // 0x19c Mov
	TaskCall(0); // 0x19d TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x19e NEW_2
	TaskReturn(); // 0x19f TaskReturn
	return 0; // 0x1a1 Return
}


func_923(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x39b PushV
	var_151_string = "d"; // 0x39c PushS
	var_152_int = 0; // 0x39d PushV
	func_1052(var_152_int); // 0x39e NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3a0 Add
	var_159_string = "m"; // 0x3a1 PushS
	var_146_string = var_158_int + var_159_string; // 0x3a2 Add2
	var_147_int = 0; // 0x3a3 MovI
	
Label_932:
	var_160_int = 1; // 0x3a4 PushI
	if(var_160_int == 0) goto Label_945; // 0x3a5 JumpB
	var_161_int = 1; // 0x3a6 PushI
	var_162_int = var_147_int + var_161_int; // 0x3a7 Add
	var_163_int = var_146_string + var_162_int; // 0x3a8 Add
	HasProperty(var_163_int, var_148_bool); // 0x3a9 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3ab Not
	if(var_164_bool == 0) goto Label_942; // 0x3ac JumpB
	goto Label_945; // 0x3ad Jump
	
Label_945:
	var_165_bool = var_147_int == 0; // 0x3b1 Not
	if(var_165_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_139_bool = 0; // 0x3b3 MovB
	return 10; // 0x3b4 Return
	
Label_949:
	var_149_int = 0; // 0x3b5 MovI
	var_166_int = 1; // 0x3b6 PushI
	var_167_bool = var_147_int > var_166_int; // 0x3b7 GT
	if(var_167_bool == 0) goto Label_955; // 0x3b8 JumpB
	irand(var_149_int, var_147_int); // 0x3b9 Func
	
Label_955:
	var_168_int = 1; // 0x3bb PushI
	var_169_int = var_149_int + var_168_int; // 0x3bc Add
	var_170_int = var_146_string + var_169_int; // 0x3bd Add
	GetProperty(var_170_int, var_150_string); // 0x3be ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3c0 PushV
	var_172_string = var_150_string; // 0x3c1 Mov
	func_997(var_171_bool, var_172_string); // 0x3c2 NEW_2
	var_139_bool = var_171_bool; // 0x3c3 Mov
	return 10; // 0x3c5 Return
	
Label_942:
	var_173_int = 1; // 0x3ae PushI
	var_147_int = var_147_int + var_173_int; // 0x3af Add2
	goto Label_932; // 0x3b0 Jump
}


func_1052(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x41c PushV
	GetGameTime(var_154_float); // 0x41d Func
	var_155_int = 1; // 0x41f PushI
	var_156_int = 0; // 0x420 PushV
	var_157_int = 24; // 0x421 PushI
	var_156_int = var_154_float / var_154_float; // 0x422 Div2
	var_152_int = var_155_int + var_156_int; // 0x423 Add2
	return 2; // 0x424 Return
}


func_159(var_2_object, var_207_string)
{
	var_208_bool = 0; // 0xa0 PushV
	func_1244(var_208_bool); // 0xa1 NEW_2
	var_209_bool = var_208_bool == 0; // 0xa3 Not
	if(var_209_bool == 0) goto Label_166; // 0xa4 JumpB
	return 0; // 0xa5 Return
	
Label_166:
	var_210_bool = var_207_string == var_2_object; // 0xa6 Eq
	if(var_210_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_211_string = ""; var_212_bool = 0; // 0xa9 PushV
	var_211_string = var_207_string; // 0xaa Mov
	var_213_string = ""; // 0xab PushS
	var_214_bool = var_207_string == var_213_string; // 0xac Eq
	if(var_214_bool == 0) goto Label_176; // 0xad JumpB
	var_212_bool = 0; // 0xae MovB
	goto Label_177; // 0xaf Jump
	
Label_177:
	func_982(var_211_string, var_212_bool); // 0xb1 NEW_2
	var_2_object = var_207_string; // 0xb3 TMov
	return 0; // 0xb4 Return
	
Label_176:
	var_212_bool = 1; // 0xb0 MovB
}


func_1061(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x425 PushV
	var_34_string = "idle"; // 0x426 MovS
	var_35_int = var_32_int; // 0x427 Push
	if(var_35_int == 0) goto Label_1066; // 0x428 JumpB
	var_34_string = var_34_string + var_32_int; // 0x429 Add2
	
Label_1066:
	var_31_string = var_34_string; // 0x42a Mov
	return 2; // 0x42b Return
}


func_811()
{
	var_256_bool = 0; var_257_bool = 0; // 0x32b PushV
	CameraSwitchToNormal(); // 0x32c Func
	var_258_bool = 0; // 0x32e PushV
	func_1244(var_258_bool); // 0x32f NEW_2
	if(var_258_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_827; // 0x332 Jump
	
Label_827:
	return 2; // 0x33b Return
	
Label_819:
	var_259_string = "head"; // 0x333 PushS
	HasAnimationTrack(var_257_bool, var_259_string); // 0x334 Func
	var_260_bool = var_257_bool; // 0x336 Push
	if(var_260_bool == 0) goto Label_827; // 0x337 JumpB
	var_261_string = "head"; // 0x338 PushS
	UnlookAsync(var_261_string); // 0x339 Func
}


func_1068(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x42c PushV
	var_28_int = 0; // 0x42d MovI
	
Label_1070:
	var_30_string = "all"; // 0x42e PushS
	var_31_string = ""; var_32_int = 0; // 0x42f PushV
	var_32_int = var_28_int; // 0x430 Mov
	func_1061(var_31_string, var_32_int); // 0x431 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x433 Func
	var_36_bool = var_29_bool == 0; // 0x435 Not
	if(var_36_bool == 0) goto Label_1080; // 0x436 JumpB
	goto Label_1083; // 0x437 Jump
	
Label_1083:
	var_25_int = var_28_int; // 0x43b Mov
	return 4; // 0x43c Return
	
Label_1080:
	var_37_int = 1; // 0x438 PushI
	var_28_int = var_28_int + var_37_int; // 0x439 Add2
	goto Label_1070; // 0x43a Jump
}


func_1202(var_62_bool, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x4b2 PushV
	var_68_object = Obj(); // 0x4b3 PushV
	func_1161(var_68_object); // 0x4b4 NEW_2
	var_66_object = var_68_object; // 0x4b5 Mov
	Find(var_63_int, var_67_object); // 0x4b7 ObjFunc
	var_69_bool = var_67_object == 0; // 0x4b9 Not
	if(var_69_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_62_bool = 0; // 0x4bb MovB
	return 4; // 0x4bc Return
	
Label_1213:
	Remove(); // 0x4bd ObjFunc
	var_62_bool = 1; // 0x4bf MovB
	return 4; // 0x4c0 Return
}


func_566()
{
	func_706(); // 0x237 NEW_2
	func_524(); // 0x23a NEW_2
	lshStopSpeech(); // 0x23c Func
	lshStopAnimation(); // 0x23e Func
	StopAsync(); // 0x240 Func
	Hold(); // 0x242 Func
	return 0; // 0x244 Return
}


func_828(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x33c PushV
	var_106_string = "voice_common"; // 0x33d PushS
	GetVariable(var_106_string, var_104_int); // 0x33e Func
	var_107_int = var_104_int; // 0x340 Push
	if(var_107_int == 0) goto Label_866; // 0x341 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x342 PushV
	var_109_object = var_98_object; // 0x343 Mov
	func_886(var_109_object); // 0x344 NEW_2
	var_138_bool = var_108_bool == 0; // 0x346 Not
	if(var_138_bool == 0) goto Label_848; // 0x347 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x348 PushV
	var_140_object = var_98_object; // 0x349 Mov
	func_923(var_140_object); // 0x34a NEW_2
	var_174_bool = var_139_bool == 0; // 0x34c Not
	if(var_174_bool == 0) goto Label_848; // 0x34d JumpB
	var_97_bool = 0; // 0x34e MovB
	return 4; // 0x34f Return
	
Label_848:
	var_175_int = 2; // 0x350 PushI
	irand(var_105_int, var_175_int); // 0x351 Func
	var_176_int = var_105_int; // 0x353 Push
	if(var_176_int == 0) goto Label_861; // 0x354 JumpB
	var_177_string = "voice_common"; // 0x355 PushS
	var_178_int = 1; // 0x356 PushI
	var_179_int = var_104_int + var_178_int; // 0x357 Add
	var_180_int = 3; // 0x358 PushI
	var_181_int = var_179_int / var_180_int; // 0x359 Mod
	SetVariable(var_177_string, var_181_int); // 0x35a Func
	goto Label_865; // 0x35c Jump
	
Label_865:
	goto Label_884; // 0x361 Jump
	
Label_884:
	var_97_bool = 1; // 0x374 MovB
	return 4; // 0x375 Return
	
Label_861:
	var_182_string = "voice_common"; // 0x35d PushS
	var_183_int = 0; // 0x35e PushI
	SetVariable(var_182_string, var_183_int); // 0x35f Func
	
Label_866:
	var_184_bool = 0; var_185_object = Obj(); // 0x362 PushV
	var_185_object = var_98_object; // 0x363 Mov
	func_923(var_185_object); // 0x364 NEW_2
	var_186_bool = var_184_bool == 0; // 0x366 Not
	if(var_186_bool == 0) goto Label_880; // 0x367 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x368 PushV
	var_188_object = var_98_object; // 0x369 Mov
	func_886(var_188_object); // 0x36a NEW_2
	var_189_bool = var_187_bool == 0; // 0x36c Not
	if(var_189_bool == 0) goto Label_880; // 0x36d JumpB
	var_97_bool = 0; // 0x36e MovB
	return 4; // 0x36f Return
	
Label_880:
	var_190_string = "voice_common"; // 0x370 PushS
	var_191_int = 1; // 0x371 PushI
	SetVariable(var_190_string, var_191_int); // 0x372 Func
}


func_1085()
{
	func_1148(); // 0x43f NEW_2
	var_38_bool = 0; var_39_string = ""; var_40_string = ""; // 0x441 PushV
	var_39_string = "quest_k10_01"; // 0x442 MovS
	var_40_string = "completed"; // 0x443 MovS
	func_1040(var_38_bool, var_39_string, var_40_string); // 0x444 NEW_2
	return 0; // 0x446 Return
}


func_704(var_45_bool)
{
	var_45_bool = 1; // 0x2c0 MovB
	return 0; // 0x2c1 Return
}


func_706()
{
	StopAnimation(); // 0x2c2 Func
	StopGroup0(); // 0x2c4 Func
	return 0; // 0x2c6 Return
}


func_1219(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4c3 PushV
	var_91_string = "branch"; // 0x4c4 PushS
	GetVariable(var_91_string, var_90_int); // 0x4c5 Func
	var_92_int = 0; // 0x4c7 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4c8 Eq
	if(var_93_bool == 0) goto Label_1229; // 0x4c9 JumpB
	var_88_int = 1; // 0x4ca MovI
	return 2; // 0x4cb Return
	
Label_1229:
	var_94_int = 1; // 0x4cd PushI
	var_95_bool = var_90_int == var_94_int; // 0x4ce Eq
	if(var_95_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_88_int = 2; // 0x4d0 MovI
	return 2; // 0x4d1 Return
	
Label_1234:
	var_88_int = 3; // 0x4d2 MovI
	return 2; // 0x4d3 Return
}


func_581()
{
	StopGroup0(); // 0x245 Func
	func_524(); // 0x248 NEW_2
	var_8_string = ""; // 0x24a PushV
	var_8_string = "Neutral"; // 0x24b MovS
	func_966(var_8_string); // 0x24c NEW_2
	func_515(); // 0x24f NEW_2
	return 0; // 0x251 Return
}


func_966(var_233_string)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x3c6 PushV
	lshHasAnimation(var_237_bool, var_233_string); // 0x3c7 Func
	var_240_bool = var_237_bool; // 0x3c9 Push
	if(var_240_bool == 0) goto Label_977; // 0x3ca JumpB
	lshGetAnimTimes(var_233_string, var_238_float, var_239_float); // 0x3cb Func
	var_241_bool = 0; // 0x3cd PushB
	lshPlayAnimation(var_238_float, var_239_float, var_241_bool); // 0x3ce Func
	goto Label_981; // 0x3d0 Jump
	
Label_981:
	return 6; // 0x3d5 Return
	
Label_977:
	var_242_string = "Can't find lsh animation : "; // 0x3d1 PushS
	var_243_int = var_242_string + var_233_string; // 0x3d2 Add
	Trace(var_243_int); // 0x3d3 Func
}


func_1095()
{
	var_46_int = 0; var_47_string = ""; // 0x448 PushV
	var_47_string = "K_Mission4"; // 0x449 MovS
	func_1035(var_46_int, var_47_string); // 0x44a NEW_2
	var_50_int = 0; // 0x44c PushI
	var_51_bool = var_46_int == var_50_int; // 0x44d Eq
	if(var_51_bool == 0) goto Label_1122; // 0x44e JumpB
	var_52_string = "K_Mission4"; // 0x44f PushS
	var_53_int = 1; // 0x450 PushI
	SetVariable(var_52_string, var_53_int); // 0x451 Func
	func_1135(); // 0x454 NEW_2
	var_62_bool = 0; var_63_int = 0; // 0x456 PushV
	var_63_int = 567; // 0x457 MovI
	func_1202(var_62_bool, var_63_int); // 0x458 NEW_2
	var_70_bool = 0; var_71_int = 0; // 0x45a PushV
	var_71_int = 568; // 0x45b MovI
	func_1202(var_70_bool, var_71_int); // 0x45c NEW_2
	var_72_bool = 0; var_73_int = 0; // 0x45e PushV
	var_73_int = 569; // 0x45f MovI
	func_1202(var_72_bool, var_73_int); // 0x460 NEW_2
	
Label_1122:
	return 0; // 0x462 Return
}


func_711(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2c7 PushV
	GetPosition(var_27_cvector); // 0x2c8 Func
	GetPosition(var_28_cvector); // 0x2ca ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2cc Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2cd Or2
	return 6; // 0x2ce Return
}


func_459(var_0_object)
{
	var_7_bool = 0; // 0x1cb PushV
	func_738(var_7_bool); // 0x1cc NEW_2
	var_10_bool = var_7_bool == 0; // 0x1ce Not
	if(var_10_bool == 0) goto Label_466; // 0x1cf JumpB
	Hold(); // 0x1d0 Func
	
Label_466:
	GetDirection(var_0_object); // 0x1d2 Func
	
Label_468:
	func_635(); // 0x1d5 NEW_2
	goto Label_468; // 0x1d7 Jump
}


func_719(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2cf PushV
	GetPosition(var_20_cvector); // 0x2d0 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2d2 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2d3 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2d4 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2d5 Func
	var_15_bool = var_22_bool; // 0x2d7 Mov
	return 6; // 0x2d8 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_129; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1123(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_string = ""; // 0x5c PushV
	var_207_string = "Neutral"; // 0x5d MovS
	func_159(var_193_object, var_207_string); // 0x5e NEW_2
	var_224_int = 526999; // 0x60 PushI
	SetMessage(var_224_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_225_int = 527000; // 0x65 PushI
	var_226_int = 29484; // 0x66 PushI
	var_227_int = 28292; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	var_228_int = 528140; // 0x6a PushI
	var_229_int = 29484; // 0x6b PushI
	var_230_int = 29490; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	goto Label_129; // 0x6f Jump
	
Label_129:
	var_231_bool = 0; // 0x81 PushV
	func_1244(var_231_bool); // 0x82 NEW_2
	if(var_231_bool == 0) goto Label_144; // 0x84 JumpB
	
Label_133:
	lshWaitForAnimEnd(); // 0x85 Func
	var_232_string = var_3_string; // 0x87 PushT
	if(var_232_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_143:
	goto Label_158; // 0x8f Jump
	
Label_158:
	return 0; // 0x9e Return
	
Label_138:
	var_233_string = ""; // 0x8a PushV
	var_233_string = var_2_object; // 0x8b MovT
	func_966(var_233_string); // 0x8c NEW_2
	goto Label_133; // 0x8e Jump
	
Label_144:
	var_244_string = "all"; // 0x90 PushS
	var_245_string = "idle"; // 0x91 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x92 Func
	
Label_148:
	WaitForAnimEnd(); // 0x94 Func
	var_246_string = var_3_string; // 0x96 PushT
	if(var_246_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_153:
	var_247_string = "all"; // 0x99 PushS
	var_248_string = "idle"; // 0x9a PushS
	PlayAnimation(var_247_string, var_248_string); // 0x9b Func
	goto Label_148; // 0x9d Jump
	
Label_112:
	var_249_string = ""; // 0x70 PushV
	var_249_string = "Neutral"; // 0x71 MovS
	func_159(var_193_object, var_249_string); // 0x72 NEW_2
	var_250_int = 527003; // 0x74 PushI
	SetMessage(var_250_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_251_int = 527004; // 0x79 PushI
	var_252_int = -1; // 0x7a PushI
	var_253_int = 28296; // 0x7b PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x7c TObjFunc
	goto Label_129; // 0x7e Jump
}


func_1236(var_85_int)
{
	var_85_int = 515551; // 0x4d4 MovI
	return 0; // 0x4d5 Return
}


func_1238(var_84_int)
{
	var_84_int = 502876; // 0x4d6 MovI
	return 0; // 0x4d7 Return
}


func_982(var_211_string, var_212_bool)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x3d6 PushV
	lshHasAnimation(var_218_bool, var_211_string); // 0x3d7 Func
	var_221_bool = var_218_bool; // 0x3d9 Push
	if(var_221_bool == 0) goto Label_992; // 0x3da JumpB
	lshGetAnimTimes(var_211_string, var_219_float, var_220_float); // 0x3db Func
	lshPlayAnimation(var_219_float, var_220_float, var_212_bool); // 0x3dd Func
	goto Label_996; // 0x3df Jump
	
Label_996:
	return 6; // 0x3e4 Return
	
Label_992:
	var_222_string = "Can't find lsh animation : "; // 0x3e0 PushS
	var_223_int = var_222_string + var_211_string; // 0x3e1 Add
	Trace(var_223_int); // 0x3e2 Func
}


func_1240(var_86_string)
{
	var_86_string = "ui/NPC_Rubin.png"; // 0x4d8 MovS
	return 0; // 0x4d9 Return
}


func_729(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2d9 PushV
	GetPosition(var_14_cvector); // 0x2da ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2dc PushV
	var_16_cvector = var_14_cvector; // 0x2dd Mov
	func_719(var_15_bool, var_16_cvector); // 0x2de NEW_2
	var_11_bool = var_15_bool; // 0x2df Mov
	return 2; // 0x2e1 Return
}


func_1242(var_87_string)
{
	var_87_string = "ui/NPC_Rubin_b.png"; // 0x4da MovS
	return 0; // 0x4db Return
}


func_473(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1d9 PushV
	var_35_string = "player"; // 0x1da PushS
	FindActor(var_34_object, var_35_string); // 0x1db Func
	var_36_bool = var_34_object == 0; // 0x1dd Not
	if(var_36_bool == 0) goto Label_481; // 0x1de JumpB
	var_32_bool = 0; // 0x1df MovB
	return 2; // 0x1e0 Return
	
Label_481:
	var_37_bool = 0; var_38_object = Obj(); // 0x1e1 PushV
	var_38_object = var_34_object; // 0x1e2 Mov
	func_729(var_38_object); // 0x1e3 NEW_2
	var_32_bool = var_37_bool; // 0x1e4 Mov
	return 2; // 0x1e6 Return
}


func_1244(var_79_bool)
{
	var_79_bool = 1; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_738(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2e2 PushV
	IsLoaded(var_9_bool); // 0x2e3 Func
	var_7_bool = var_9_bool; // 0x2e5 Mov
	return 2; // 0x2e6 Return
}


func_1123(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x464 PushV
	var_202_string = "k10q01"; // 0x465 MovS
	func_1035(var_201_int, var_202_string); // 0x466 NEW_2
	var_205_int = 7; // 0x468 PushI
	var_206_bool = var_201_int == var_205_int; // 0x469 Eq
	if(var_206_bool == 0) goto Label_1133; // 0x46a JumpB
	var_199_bool = 1; // 0x46b MovB
	return 0; // 0x46c Return
	
Label_1133:
	var_199_bool = 0; // 0x46d MovB
	return 0; // 0x46e Return
}


func_997(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3e5 PushV
	var_135_bool = 0; // 0x3e6 PushV
	func_1244(var_135_bool); // 0x3e7 NEW_2
	if(var_135_bool == 0) goto Label_1010; // 0x3e9 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3ea Func
	var_136_bool = var_134_bool; // 0x3ec Push
	if(var_136_bool == 0) goto Label_1010; // 0x3ed JumpB
	lshPlaySpeech(var_132_string); // 0x3ee Func
	var_131_bool = 1; // 0x3f0 MovB
	return 2; // 0x3f1 Return
	
Label_1010:
	var_131_bool = 0; // 0x3f2 MovB
	return 2; // 0x3f3 Return
}


func_743(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2e7 PushV
	GetPosition(var_50_cvector); // 0x2e8 ObjFunc
	GetEyesHeight(var_49_float); // 0x2ea ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ec PushE
	var_58_float = var_58_float + var_49_float; // 0x2ed Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2ee PopE
	GetPosition(var_51_cvector); // 0x2ef Func
	GetEyesHeight(var_49_float); // 0x2f1 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2f3 PushE
	var_59_float = var_59_float + var_49_float; // 0x2f4 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2f5 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2f6 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2f7 PushE
	var_60_float = 0; // 0x2f8 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2f9 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2fa Or
	var_62_float = sqrt(var_61_int); // 0x2fb Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2fc Div2
	var_53_cvector = -var_52_cvector; // 0x2fd Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2fe Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2ff PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x300 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x301 Xor2
	func_1025(var_64_cvector, var_65_cvector); // 0x302 NEW_2
	var_72_int = 25; // 0x304 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x305 Mult
	var_74_int = var_63_float + var_73_float; // 0x306 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x307 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x308 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x309 Add2
	IsOverrideActive(var_56_bool); // 0x30a Func
	var_76_bool = var_56_bool; // 0x30c Push
	if(var_76_bool == 0) goto Label_784; // 0x30d JumpB
	var_37_bool = 0; // 0x30e MovB
	return 18; // 0x30f Return
	
Label_784:
	StopWorld(); // 0x310 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x312 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x314 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x315 PushE
	Rotate(var_77_float, var_78_float); // 0x316 Func
	var_79_bool = 0; // 0x318 PushV
	func_1244(var_79_bool); // 0x319 NEW_2
	if(var_79_bool == 0) goto Label_797; // 0x31b JumpB
	goto Label_805; // 0x31c Jump
	
Label_805:
	CameraWaitForPlayFinish(); // 0x325 Func
	ResumeWorld(); // 0x327 Func
	var_37_bool = 1; // 0x329 MovB
	return 18; // 0x32a Return
	
Label_797:
	var_80_string = "head"; // 0x31d PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x31e Func
	var_81_bool = var_57_bool; // 0x320 Push
	if(var_81_bool == 0) goto Label_805; // 0x321 JumpB
	var_82_string = "head"; // 0x322 PushS
	LookAsyncCamera(var_82_string); // 0x323 Func
}


func_488(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1e8 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1e9 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1ea Func
	return 0; // 0x1ec Return
}


func_493(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1ed PushV
	var_20_string = "player"; // 0x1ee PushS
	FindActor(var_18_object, var_20_string); // 0x1ef Func
	var_21_bool = var_18_object == 0; // 0x1f1 Not
	if(var_21_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_15_bool = 0; // 0x1f3 MovB
	return 4; // 0x1f4 Return
	
Label_501:
	var_22_float = 0; var_23_object = Obj(); // 0x1f5 PushV
	var_23_object = var_18_object; // 0x1f6 Mov
	func_711(var_23_object); // 0x1f7 NEW_2
	var_30_float = 90000.0; // 0x1f9 PushF
	var_31_bool = var_22_float > var_30_float; // 0x1fa GT
	if(var_31_bool == 0) goto Label_510; // 0x1fb JumpB
	var_15_bool = 0; // 0x1fc MovB
	return 4; // 0x1fd Return
	
Label_510:
	CanSee(var_19_bool, var_18_object); // 0x1fe Func
	var_15_bool = var_19_bool; // 0x200 Mov
	return 4; // 0x201 Return
}


func_1135()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x46f PushV
	var_56_int = 570; // 0x470 PushI
	var_57_int = 0; // 0x471 PushI
	var_58_int = 530584; // 0x472 PushI
	CreateDiaryEntry(var_55_object, var_56_int, var_57_int, var_58_int); // 0x473 Func
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; // 0x475 PushV
	var_60_object = var_55_object; // 0x476 Mov
	var_61_int = -1; // 0x477 MovI
	func_1174(var_59_bool, var_60_object, var_61_int); // 0x478 NEW_2
	return 2; // 0x47a Return
}


func_1012()
{
	var_10_bool = 0; // 0x3f4 PushV
	func_1244(var_10_bool); // 0x3f5 NEW_2
	if(var_10_bool == 0) goto Label_1018; // 0x3f7 JumpB
	lshStopSpeech(); // 0x3f8 Func
	
Label_1018:
	return 0; // 0x3fa Return
}


func_886(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x376 PushV
	var_115_string = "c"; // 0x377 MovS
	var_116_int = 0; // 0x378 MovI
	
Label_889:
	var_120_int = 1; // 0x379 PushI
	if(var_120_int == 0) goto Label_902; // 0x37a JumpB
	var_121_int = 1; // 0x37b PushI
	var_122_int = var_116_int + var_121_int; // 0x37c Add
	var_123_int = var_115_string + var_122_int; // 0x37d Add
	HasProperty(var_123_int, var_117_bool); // 0x37e ObjFunc
	var_124_bool = var_117_bool == 0; // 0x380 Not
	if(var_124_bool == 0) goto Label_899; // 0x381 JumpB
	goto Label_902; // 0x382 Jump
	
Label_902:
	var_125_bool = var_116_int == 0; // 0x386 Not
	if(var_125_bool == 0) goto Label_906; // 0x387 JumpB
	var_108_bool = 0; // 0x388 MovB
	return 10; // 0x389 Return
	
Label_906:
	var_118_int = 0; // 0x38a MovI
	var_126_int = 1; // 0x38b PushI
	var_127_bool = var_116_int > var_126_int; // 0x38c GT
	if(var_127_bool == 0) goto Label_912; // 0x38d JumpB
	irand(var_118_int, var_116_int); // 0x38e Func
	
Label_912:
	var_128_int = 1; // 0x390 PushI
	var_129_int = var_118_int + var_128_int; // 0x391 Add
	var_130_int = var_115_string + var_129_int; // 0x392 Add
	GetProperty(var_130_int, var_119_string); // 0x393 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x395 PushV
	var_132_string = var_119_string; // 0x396 Mov
	func_997(var_131_bool, var_132_string); // 0x397 NEW_2
	var_108_bool = var_131_bool; // 0x398 Mov
	return 10; // 0x39a Return
	
Label_899:
	var_137_int = 1; // 0x383 PushI
	var_116_int = var_116_int + var_137_int; // 0x384 Add2
	goto Label_889; // 0x385 Jump
}


func_635()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x27b PushV
	WaitForAnimEnd(); // 0x27c Func
	var_23_bool = 0; // 0x27e PushV
	func_738(var_23_bool); // 0x27f NEW_2
	var_24_bool = var_23_bool == 0; // 0x281 Not
	if(var_24_bool == 0) goto Label_644; // 0x282 JumpB
	return 12; // 0x283 Return
	
Label_644:
	var_25_int = 0; // 0x284 PushV
	func_1068(var_25_int); // 0x285 NEW_2
	var_17_int = var_25_int; // 0x286 Mov
	var_18_int = 0; // 0x288 MovI
	
Label_649:
	var_38_bool = 0; // 0x289 PushV
	var_38_bool = 0; // 0x28a MovB
	var_39_int = 5; // 0x28b PushI
	var_40_bool = var_18_int < var_39_int; // 0x28c LT
	if(var_40_bool == 0) goto Label_659; // 0x28d JumpB
	var_41_bool = 0; // 0x28e PushV
	func_738(var_41_bool); // 0x28f NEW_2
	if(var_41_bool == 0) goto Label_659; // 0x291 JumpB
	var_38_bool = 1; // 0x292 MovB
	
Label_659:
	if(var_38_bool == 0) goto Label_701; // 0x293 JumpB
	var_42_bool = var_17_int == 0; // 0x294 Not
	if(var_42_bool == 0) goto Label_669; // 0x295 JumpB
	var_43_int = 3; // 0x296 PushI
	Sleep(var_43_int, var_19_bool); // 0x297 Func
	var_44_bool = var_19_bool == 0; // 0x299 Not
	if(var_44_bool == 0) goto Label_668; // 0x29a JumpB
	goto Label_701; // 0x29b Jump
	
Label_701:
	ResetAAS(); // 0x2bd Func
	return 12; // 0x2bf Return
	
Label_668:
	goto Label_690; // 0x29c Jump
	
Label_690:
	var_45_bool = 0; // 0x2b2 PushV
	func_704(var_45_bool); // 0x2b3 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2b5 Not
	if(var_46_bool == 0) goto Label_696; // 0x2b6 JumpB
	goto Label_701; // 0x2b7 Jump
	
Label_696:
	ResetAAS(); // 0x2b8 Func
	var_47_int = 1; // 0x2ba PushI
	var_18_int = var_18_int + var_47_int; // 0x2bb Add2
	goto Label_649; // 0x2bc Jump
	
Label_669:
	irand(var_20_int, var_17_int); // 0x29d Func
	var_48_int = 5; // 0x29f PushI
	irand(var_21_int, var_48_int); // 0x2a0 Func
	var_49_int = 0; // 0x2a2 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2a3 Neq
	if(var_50_bool == 0) goto Label_678; // 0x2a4 JumpB
	var_20_int = 0; // 0x2a5 MovI
	
Label_678:
	var_51_string = "all"; // 0x2a6 PushS
	var_52_string = ""; var_53_int = 0; // 0x2a7 PushV
	var_53_int = var_20_int; // 0x2a8 Mov
	func_1061(var_52_string, var_53_int); // 0x2a9 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2ab Func
	WaitForAnimEnd(var_22_bool); // 0x2ad Func
	var_54_bool = var_22_bool == 0; // 0x2af Not
	if(var_54_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_701; // 0x2b1 Jump
}


func_1148()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x47c PushV
	var_17_int = 455; // 0x47d PushI
	var_18_int = 1; // 0x47e PushI
	var_19_int = 527013; // 0x47f PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x480 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x482 PushV
	var_21_object = var_16_object; // 0x483 Mov
	var_22_int = 447; // 0x484 MovI
	func_1174(var_20_bool, var_21_object, var_22_int); // 0x485 NEW_2
	return 2; // 0x487 Return
}


