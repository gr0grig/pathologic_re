task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object, var_31_object)
{
	var_32_int = 1; // 0xb9 PushI
	if(var_32_int == 0) goto Label_335; // 0xba JumpB
	func_1421(); // 0xbc NEW_2
	var_34_int = 21720; // 0xbe PushI
	var_35_bool = var_31_object == var_34_int; // 0xbf Eq
	if(var_35_bool == 0) goto Label_198; // 0xc0 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xc1 PushV
	var_36_object = var_1_object; // 0xc2 MovT
	var_37_object = var_0_object; // 0xc3 MovT
	func_1588(); // 0xc4 NEW_2
	
Label_198:
	var_39_int = 21723; // 0xc6 PushI
	var_40_bool = var_31_object == var_39_int; // 0xc7 Eq
	if(var_40_bool == 0) goto Label_206; // 0xc8 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xc9 PushV
	var_41_object = var_1_object; // 0xca MovT
	var_42_object = var_0_object; // 0xcb MovT
	func_1588(); // 0xcc NEW_2
	
Label_206:
	var_43_int = 21715; // 0xce PushI
	var_44_bool = var_30_object == var_43_int; // 0xcf Eq
	if(var_44_bool == 0) goto Label_259; // 0xd0 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xd1 PushV
	var_46_object = var_1_object; // 0xd2 MovT
	func_1610(var_46_object); // 0xd3 NEW_2
	if(var_45_bool == 0) goto Label_239; // 0xd5 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xd6 PushV
	var_53_object = var_1_object; // 0xd7 MovT
	var_54_object = var_0_object; // 0xd8 MovT
	func_1582(); // 0xd9 NEW_2
	var_57_string = ""; // 0xdb PushV
	var_57_string = "Neutral"; // 0xdc MovS
	func_162(var_31_object, var_57_string); // 0xdd NEW_2
	var_74_int = 520512; // 0xdf PushI
	SetMessage(var_74_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_75_int = 520513; // 0xe4 PushI
	var_76_int = 21717; // 0xe5 PushI
	var_77_int = 21716; // 0xe6 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xe7 TObjFunc
	var_78_int = 529946; // 0xe9 PushI
	var_79_int = 31329; // 0xea PushI
	var_80_int = 31328; // 0xeb PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_81_string = ""; // 0xef PushV
	var_81_string = "Neutral"; // 0xf0 MovS
	func_162(var_31_object, var_81_string); // 0xf1 NEW_2
	var_82_int = 520519; // 0xf3 PushI
	SetMessage(var_82_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_83_int = 520520; // 0xf8 PushI
	var_84_int = -1; // 0xf9 PushI
	var_85_int = 21723; // 0xfa PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xfb TObjFunc
	var_86_int = 520521; // 0xfd PushI
	var_87_int = -1; // 0xfe PushI
	var_88_int = 21724; // 0xff PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_89_int = 31329; // 0x103 PushI
	var_90_bool = var_30_object == var_89_int; // 0x104 Eq
	if(var_90_bool == 0) goto Label_277; // 0x105 JumpB
	var_91_string = ""; // 0x106 PushV
	var_91_string = "Neutral"; // 0x107 MovS
	func_162(var_31_object, var_91_string); // 0x108 NEW_2
	var_92_int = 529947; // 0x10a PushI
	SetMessage(var_92_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_93_int = 529948; // 0x10f PushI
	var_94_int = 21717; // 0x110 PushI
	var_95_int = 31330; // 0x111 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_96_int = 21717; // 0x115 PushI
	var_97_bool = var_30_object == var_96_int; // 0x116 Eq
	if(var_97_bool == 0) goto Label_300; // 0x117 JumpB
	var_98_string = ""; // 0x118 PushV
	var_98_string = "Neutral"; // 0x119 MovS
	func_162(var_31_object, var_98_string); // 0x11a NEW_2
	var_99_int = 520514; // 0x11c PushI
	SetMessage(var_99_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_100_int = 520515; // 0x121 PushI
	var_101_int = 21719; // 0x122 PushI
	var_102_int = 21718; // 0x123 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x124 TObjFunc
	var_103_int = 529949; // 0x126 PushI
	var_104_int = 21719; // 0x127 PushI
	var_105_int = 31332; // 0x128 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_106_int = 21719; // 0x12c PushI
	var_107_bool = var_30_object == var_106_int; // 0x12d Eq
	if(var_107_bool == 0) goto Label_323; // 0x12e JumpB
	var_108_string = ""; // 0x12f PushV
	var_108_string = "Neutral"; // 0x130 MovS
	func_162(var_31_object, var_108_string); // 0x131 NEW_2
	var_109_int = 520516; // 0x133 PushI
	SetMessage(var_109_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_110_int = 520517; // 0x138 PushI
	var_111_int = -1; // 0x139 PushI
	var_112_int = 21720; // 0x13a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13b TObjFunc
	var_113_int = 520518; // 0x13d PushI
	var_114_int = -1; // 0x13e PushI
	var_115_int = 21721; // 0x13f PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_3_string = 1; // 0x143 TMovB
	var_116_bool = 0; // 0x144 PushV
	func_1580(var_116_bool); // 0x145 NEW_2
	if(var_116_bool == 0) goto Label_331; // 0x147 JumpB
	lshStopAnimation(); // 0x148 Func
	goto Label_333; // 0x14a Jump
	
Label_333:
	return 0; // 0x14d Return
	
Label_331:
	StopAnimation(); // 0x14b Func
	
Label_335:
	return 0; // 0x14f Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object, var_31_object)
{
	var_32_int = 1; // 0x1eb PushI
	if(var_32_int == 0) goto Label_557; // 0x1ec JumpB
	func_1421(); // 0x1ee NEW_2
	var_34_int = 21727; // 0x1f0 PushI
	var_35_bool = var_31_object == var_34_int; // 0x1f1 Eq
	if(var_35_bool == 0) goto Label_509; // 0x1f2 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x1f3 PushV
	var_36_object = var_1_object; // 0x1f4 MovT
	var_37_object = var_0_object; // 0x1f5 MovT
	func_1593(var_37_object); // 0x1f6 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1f8 PushV
	var_60_object = var_1_object; // 0x1f9 MovT
	var_61_object = var_0_object; // 0x1fa MovT
	func_1604(); // 0x1fb NEW_2
	
Label_509:
	var_64_int = 31334; // 0x1fd PushI
	var_65_bool = var_31_object == var_64_int; // 0x1fe Eq
	if(var_65_bool == 0) goto Label_522; // 0x1ff JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x200 PushV
	var_66_object = var_1_object; // 0x201 MovT
	var_67_object = var_0_object; // 0x202 MovT
	func_1593(var_67_object); // 0x203 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x205 PushV
	var_68_object = var_1_object; // 0x206 MovT
	var_69_object = var_0_object; // 0x207 MovT
	func_1604(); // 0x208 NEW_2
	
Label_522:
	var_70_int = 21726; // 0x20a PushI
	var_71_bool = var_30_object == var_70_int; // 0x20b Eq
	if(var_71_bool == 0) goto Label_545; // 0x20c JumpB
	var_72_string = ""; // 0x20d PushV
	var_72_string = "Neutral"; // 0x20e MovS
	func_468(var_31_object, var_72_string); // 0x20f NEW_2
	var_89_int = 520523; // 0x211 PushI
	SetMessage(var_89_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_90_int = 520524; // 0x216 PushI
	var_91_int = -1; // 0x217 PushI
	var_92_int = 21727; // 0x218 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x219 TObjFunc
	var_93_int = 529950; // 0x21b PushI
	var_94_int = -1; // 0x21c PushI
	var_95_int = 31334; // 0x21d PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_3_string = 1; // 0x221 TMovB
	var_96_bool = 0; // 0x222 PushV
	func_1580(var_96_bool); // 0x223 NEW_2
	if(var_96_bool == 0) goto Label_553; // 0x225 JumpB
	lshStopAnimation(); // 0x226 Func
	goto Label_555; // 0x228 Jump
	
Label_555:
	return 0; // 0x22b Return
	
Label_553:
	StopAnimation(); // 0x229 Func
	
Label_557:
	return 0; // 0x22d Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object)
{
	func_655(); // 0x248 NEW_2
	var_32_string = var_3_string; // 0x24a PushT
	if(var_32_string == 0) goto Label_597; // 0x24b JumpB
	var_33_int = 0; var_34_object = Obj(); // 0x24c PushV
	var_34_object = var_30_object; // 0x24d Mov
	TaskCall(2); // 0x24e TaskCall
	func_336(var_35_object, var_33_int, var_34_object); // 0x24f NEW_2
	TaskReturn(); // 0x250 TaskReturn
	var_3_string = 0; // 0x252 TMovB
	return 0; // 0x253 Return
	
Label_597:
	var_161_int = 1; // 0x255 PushI
	var_162_int = 0; var_163_object = Obj(); // 0x256 PushV
	var_163_object = var_30_object; // 0x257 Mov
	TaskCall(0); // 0x258 TaskCall
	func_0(var_164_object, var_162_int, var_163_object); // 0x259 NEW_2
	TaskReturn(); // 0x25a TaskReturn
	var_235_bool = var_161_int != var_164_object; // 0x25c Neq
	if(var_235_bool == 0) goto Label_607; // 0x25d JumpB
	return 0; // 0x25e Return
	
Label_607:
	var_236_int = 10; // 0x25f PushI
	KillTimer(var_236_int); // 0x260 Func
	var_237_object = Obj(); // 0x262 PushV
	var_237_object = var_30_object; // 0x263 Mov
	TaskCall(5); // 0x264 TaskCall
	func_775(var_238_object, var_239_object, var_240_object, var_241_object, var_242_object, var_243_object, var_244_object, var_245_object, var_246_object, var_247_object, var_248_object, var_249_object, var_250_object, var_251_object, var_252_object, var_253_object, var_237_object); // 0x265 NEW_2
	TaskReturn(); // 0x266 TaskReturn
	var_3_string = 1; // 0x268 TMovB
	var_556_int = 10; // 0x269 PushI
	var_557_float = 0.75; // 0x26a PushF
	SetTimer(var_556_int, var_557_float); // 0x26b Func
	return 0; // 0x26d Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_int, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x26e PushV
	var_33_int = 10; // 0x26f PushI
	var_34_bool = var_30_object == var_33_int; // 0x270 Eq
	if(var_34_bool == 0) goto Label_654; // 0x271 JumpB
	var_35_string = "player"; // 0x272 PushS
	FindActor(var_32_object, var_35_string); // 0x273 Func
	var_36_bool = 0; var_37_object = Obj(); // 0x275 PushV
	var_37_object = var_32_object; // 0x276 Mov
	func_1639(var_36_bool, var_37_object); // 0x277 NEW_2
	if(var_36_bool == 0) goto Label_645; // 0x279 JumpB
	var_52_bool = GlobalVars[1]; // 0x27a PushGE
	var_53_bool = var_52_bool == 0; // 0x27b Not
	if(var_53_bool == 0) goto Label_644; // 0x27c JumpB
	var_54_object = Obj(); // 0x27d PushV
	var_54_object = var_32_object; // 0x27e Mov
	func_1410(var_54_object); // 0x27f NEW_2
	var_61_bool = GlobalVars[1]; // 0x281 PushGE
	var_61_bool = 1; // 0x282 MovB
	GlobalVars[1] = var_61_bool; // 0x283 PopGE
	
Label_644:
	goto Label_653; // 0x284 Jump
	
Label_653:
	var_32_object = 0; // 0x28d SetNull
	
Label_654:
	return 2; // 0x28e Return
	
Label_645:
	var_62_bool = GlobalVars[1]; // 0x285 PushGE
	if(var_62_bool == 0) goto Label_653; // 0x286 JumpB
	var_63_string = "head"; // 0x287 PushS
	UnlookAsync(var_63_string); // 0x288 Func
	var_64_bool = GlobalVars[1]; // 0x28a PushGE
	var_64_bool = 0; // 0x28b MovB
	GlobalVars[1] = var_64_bool; // 0x28c PopGE
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object)
{
	var_2_object = 0; // 0x22e TMovB
	var_30_bool = GlobalVars[1]; // 0x22f PushGE
	var_30_bool = 0; // 0x230 MovB
	GlobalVars[1] = var_30_bool; // 0x231 PopGE
	var_3_string = 0; // 0x232 TMovB
	var_31_cvector = GlobalVars[0]; // 0x233 PushGE
	var_32_cvector = CVector(0,0,0); // 0x234 PushV
	func_577(var_32_cvector); // 0x235 NEW_2
	var_31_cvector = var_32_cvector; // 0x236 Mov
	GlobalVars[0] = var_31_cvector; // 0x238 PopGE
	var_35_int = 10; // 0x239 PushI
	var_36_float = 0.75; // 0x23a PushF
	SetTimer(var_35_int, var_36_float); // 0x23b Func
	func_685(var_28_object, var_29_object); // 0x23e NEW_2
	return 0; // 0x240 Return
}


func_0(var_0_object, var_162_int, var_163_object)
{
	var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_object = Obj(); var_170_bool = 0; var_171_int = 0; var_172_bool = 0; // 0x0 PushV
	var_0_object = var_163_object; // 0x1 TMov
	var_173_bool = 0; var_174_object = Obj(); var_175_float = 0; // 0x2 PushV
	var_174_object = var_163_object; // 0x3 Mov
	var_175_float = 110.0; // 0x4 MovF
	func_1174(var_174_object, var_175_float); // 0x5 NEW_2
	var_176_bool = var_173_bool == 0; // 0x7 Not
	if(var_176_bool == 0) goto Label_11; // 0x8 JumpB
	var_162_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_169_object); // 0xb Func
	var_177_int = 0; // 0xd PushV
	func_1574(var_177_int); // 0xe NEW_2
	SetNPCName(var_177_int); // 0x10 ObjFunc
	var_178_int = 0; // 0x12 PushV
	func_1572(var_178_int); // 0x13 NEW_2
	SetNPCDescription(var_178_int); // 0x15 ObjFunc
	var_179_string = ""; // 0x17 PushV
	func_1576(var_179_string); // 0x18 NEW_2
	SetPhoto(var_179_string); // 0x1a ObjFunc
	var_180_string = ""; // 0x1c PushV
	func_1578(var_180_string); // 0x1d NEW_2
	SetPhoto2(var_180_string); // 0x1f ObjFunc
	var_181_int = 0; // 0x21 PushV
	func_1622(var_181_int); // 0x22 NEW_2
	SetPlayerName(var_181_int); // 0x24 ObjFunc
	var_171_int = -1; // 0x26 MovI
	IsOverrideActive(var_170_bool); // 0x27 Func
	var_182_bool = var_170_bool; // 0x29 Push
	if(var_182_bool == 0) goto Label_45; // 0x2a JumpB
	var_162_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_169_object); // 0x2d Func
	var_183_object = Obj(); var_184_object = Obj(); // 0x2f PushV
	var_183_object = var_163_object; // 0x30 Mov
	var_184_object = var_169_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_185_object, var_186_object, var_187_string, var_188_bool, var_183_object, var_184_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_172_bool); // 0x36 ObjFunc
	
Label_56:
	var_233_bool = var_172_bool == 0; // 0x38 Not
	if(var_233_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_172_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_234_object = Obj(); // 0x3f PushV
	var_234_object = var_163_object; // 0x40 Mov
	func_1242(); // 0x41 NEW_2
	StopDialog(var_169_object); // 0x43 Func
	GetReturnValue(var_171_int); // 0x45 ObjFunc
	var_162_int = var_171_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_769()
{
	StopGroup0(); // 0x301 Func
	Stop(); // 0x303 Func
	return 0; // 0x305 Return
}


func_1410(var_54_object)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); // 0x582 PushV
	GetEyesHeight(var_57_float); // 0x583 ObjFunc
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x585 MovV
	var_59_float = GetByIndex(var_58_cvector, 1); // 0x586 PushE
	var_59_float = var_57_float; // 0x587 Mov
	SetByIndex(var_58_cvector, 1) = var_59_float; // 0x588 PopE
	var_60_string = "head"; // 0x589 PushS
	LookAsync(var_54_object, var_60_string, var_58_cvector); // 0x58a Func
	return 4; // 0x58c Return
}


func_1282(var_545_object)
{
	var_546_int = 0; var_547_int = 0; // 0x502 PushV
	var_548_bool = var_545_object == 0; // 0x503 Not
	if(var_548_bool == 0) goto Label_1286; // 0x504 JumpB
	return 2; // 0x505 Return
	
Label_1286:
	var_549_string = "noaccess"; // 0x506 PushS
	GetProperty(var_549_string, var_547_int); // 0x507 ObjFunc
	var_550_int = 1; // 0x509 PushI
	var_551_bool = var_547_int > var_550_int; // 0x50a GT
	if(var_551_bool == 0) goto Label_1298; // 0x50b JumpB
	var_552_string = "noaccess"; // 0x50c PushS
	var_553_int = 1; // 0x50d PushI
	var_554_int = var_547_int - var_553_int; // 0x50e Sub
	SetProperty(var_552_string, var_554_int); // 0x50f ObjFunc
	goto Label_1301; // 0x511 Jump
	
Label_1301:
	return 2; // 0x515 Return
	
Label_1298:
	var_555_string = "noaccess"; // 0x512 PushS
	RemoveProperty(var_555_string); // 0x513 ObjFunc
}


func_774()
{
	return 0; // 0x306 Return
}


func_775(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_237_object)
{
	var_254_cvector = CVector(0,0,0); var_255_int = 0; var_256_object = Obj(); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_bool = 0; var_262_object = Obj(); var_263_bool = 0; var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_int = 0; var_268_object = Obj(); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_bool = 0; var_274_object = Obj(); var_275_bool = 0; var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); // 0x307 PushV
	var_278_object = Obj(); // 0x308 PushV
	func_1442(var_278_object); // 0x309 NEW_2
	var_15_object = var_278_object; // 0x30a TMov
	var_281_object = Obj(); // 0x30c PushV
	var_281_object = var_237_object; // 0x30d Mov
	func_1259(var_281_object); // 0x30e NEW_2
	func_1466(); // 0x311 NEW_2
	func_1478(); // 0x314 NEW_2
	var_302_cvector = GlobalVars[0]; // 0x316 PushGE
	var_266_cvector = var_302_cvector; // 0x317 Mov
	LockCamera(); // 0x319 Func
	var_303_float = GetByIndex(var_266_cvector, 0); // 0x31b PushE
	var_304_int = -var_303_float; // 0x31c Neg
	var_305_float = GetByIndex(var_266_cvector, 2); // 0x31d PushE
	var_306_int = -var_305_float; // 0x31e Neg
	RotateAsync(var_304_int, var_306_int); // 0x31f Func
	var_307_float = 0; var_308_float = 0; var_309_float = 0; // 0x321 PushV
	var_307_float = 0; // 0x322 MovI
	var_308_float = 1; // 0x323 MovI
	var_309_float = 0.75; // 0x324 MovF
	func_1528(var_308_float, var_309_float); // 0x325 NEW_2
	CreateIntVector(var_277_cvector); // 0x327 Func
	CreateIntVector(var_275_bool); // 0x329 Func
	CreateIntVector(var_273_bool); // 0x32b Func
	CreateIntVector(var_271_cvector); // 0x32d Func
	CreateIntVector(var_269_cvector); // 0x32f Func
	var_321_object = Obj(); var_322_object = Obj(); var_323_int = 0; var_324_object = Obj(); // 0x331 PushV
	var_322_object = var_237_object; // 0x332 Mov
	var_323_int = 0; // 0x333 MovI
	var_324_object = var_1_object; // 0x334 MovT
	func_1333(var_323_int, var_324_object); // 0x335 NEW_2
	var_0_object = var_321_object; // 0x336 TMov
	var_338_object = Obj(); var_339_object = Obj(); var_340_int = 0; var_341_object = Obj(); // 0x338 PushV
	var_339_object = var_237_object; // 0x339 Mov
	var_340_int = 1; // 0x33a MovI
	var_341_object = var_3_string; // 0x33b MovT
	func_1333(var_340_int, var_341_object); // 0x33c NEW_2
	var_2_object = var_338_object; // 0x33d TMov
	var_342_object = Obj(); var_343_object = Obj(); var_344_int = 0; var_345_object = Obj(); // 0x33f PushV
	var_343_object = var_237_object; // 0x340 Mov
	var_344_int = 2; // 0x341 MovI
	var_345_object = var_5_object; // 0x342 MovT
	func_1333(var_344_int, var_345_object); // 0x343 NEW_2
	var_4_bool = var_342_object; // 0x344 TMov
	var_346_object = Obj(); var_347_object = Obj(); var_348_int = 0; var_349_object = Obj(); // 0x346 PushV
	var_347_object = var_237_object; // 0x347 Mov
	var_348_int = 3; // 0x348 MovI
	var_349_object = var_7_object; // 0x349 MovT
	func_1333(var_348_int, var_349_object); // 0x34a NEW_2
	var_6_object = var_346_object; // 0x34b TMov
	var_350_object = Obj(); var_351_object = Obj(); var_352_int = 0; var_353_object = Obj(); // 0x34d PushV
	var_351_object = var_237_object; // 0x34e Mov
	var_352_int = 4; // 0x34f MovI
	var_353_object = var_9_bool; // 0x350 MovT
	func_1333(var_352_int, var_353_object); // 0x351 NEW_2
	var_8_string = var_350_object; // 0x352 TMov
	var_354_object = Obj(); var_355_object = Obj(); var_356_int = 0; // 0x354 PushV
	var_355_object = var_237_object; // 0x355 Mov
	var_356_int = 0; // 0x356 MovI
	func_1358(var_355_object, var_356_int); // 0x357 NEW_2
	var_10_cvector = var_354_object; // 0x358 TMov
	var_368_object = Obj(); var_369_object = Obj(); var_370_int = 0; // 0x35a PushV
	var_369_object = var_237_object; // 0x35b Mov
	var_370_int = 1; // 0x35c MovI
	func_1358(var_369_object, var_370_int); // 0x35d NEW_2
	var_11_cvector = var_368_object; // 0x35e TMov
	var_371_object = Obj(); var_372_object = Obj(); var_373_int = 0; // 0x360 PushV
	var_372_object = var_237_object; // 0x361 Mov
	var_373_int = 2; // 0x362 MovI
	func_1358(var_372_object, var_373_int); // 0x363 NEW_2
	var_12_bool = var_371_object; // 0x364 TMov
	var_374_object = Obj(); var_375_object = Obj(); var_376_int = 0; // 0x366 PushV
	var_375_object = var_237_object; // 0x367 Mov
	var_376_int = 3; // 0x368 MovI
	func_1358(var_375_object, var_376_int); // 0x369 NEW_2
	var_13_bool = var_374_object; // 0x36a TMov
	var_377_object = Obj(); var_378_object = Obj(); var_379_int = 0; // 0x36c PushV
	var_378_object = var_237_object; // 0x36d Mov
	var_379_int = 4; // 0x36e MovI
	func_1358(var_378_object, var_379_int); // 0x36f NEW_2
	var_14_object = var_377_object; // 0x370 TMov
	var_380_object = Obj(); // 0x372 PushV
	var_380_object = var_237_object; // 0x373 Mov
	func_1080(); // 0x374 NEW_2
	var_267_int = 1; // 0x376 MovI
	
Label_887:
	var_411_int = 5; // 0x377 PushI
	var_412_bool = var_267_int < var_411_int; // 0x378 LT
	if(var_412_bool == 0) goto Label_895; // 0x379 JumpB
	RemoveAllItems(var_267_int); // 0x37a ObjFunc
	var_413_int = 1; // 0x37c PushI
	var_267_int = var_267_int + var_413_int; // 0x37d Add2
	goto Label_887; // 0x37e Jump
	
Label_895:
	SelectWeapon(); // 0x37f ObjFunc
	GetScene(var_268_object); // 0x381 Func
	var_414_string = "pt_arena_player"; // 0x383 PushS
	GetLocator(var_414_string, var_273_bool, var_269_cvector, var_270_cvector); // 0x384 ObjFunc
	var_415_string = "pt_arena_enemy"; // 0x386 PushS
	GetLocator(var_415_string, var_273_bool, var_271_cvector, var_272_cvector); // 0x387 ObjFunc
	Teleport(var_237_object, var_268_object, var_269_cvector, var_270_cvector); // 0x389 Func
	var_416_string = "pers_butcher"; // 0x38b PushS
	var_417_string = "arena_fighter.xml"; // 0x38c PushS
	AddActor(var_274_object, var_416_string, var_268_object, var_271_cvector, var_272_cvector, var_417_string); // 0x38d Func
	var_418_object = Obj(); var_419_string = ""; var_420_string = ""; var_421_string = ""; // 0x38f PushV
	var_418_object = var_268_object; // 0x390 Mov
	var_419_string = "pers_worker"; // 0x391 MovS
	var_420_string = "arena_spectator_worker.xml"; // 0x392 MovS
	var_421_string = "pt_arena_spectator1"; // 0x393 MovS
	func_1125(var_419_string, var_420_string, var_421_string); // 0x394 NEW_2
	var_434_object = Obj(); var_435_string = ""; var_436_string = ""; var_437_string = ""; // 0x396 PushV
	var_434_object = var_268_object; // 0x397 Mov
	var_435_string = "pers_worker"; // 0x398 MovS
	var_436_string = "arena_spectator_worker.xml"; // 0x399 MovS
	var_437_string = "pt_arena_spectator2"; // 0x39a MovS
	func_1125(var_435_string, var_436_string, var_437_string); // 0x39b NEW_2
	var_438_object = Obj(); var_439_string = ""; var_440_string = ""; var_441_string = ""; // 0x39d PushV
	var_438_object = var_268_object; // 0x39e Mov
	var_439_string = "pers_unosha"; // 0x39f MovS
	var_440_string = "arena_spectator_unosha.xml"; // 0x3a0 MovS
	var_441_string = "pt_arena_spectator3"; // 0x3a1 MovS
	func_1125(var_439_string, var_440_string, var_441_string); // 0x3a2 NEW_2
	var_442_object = Obj(); var_443_string = ""; var_444_string = ""; var_445_string = ""; // 0x3a4 PushV
	var_442_object = var_268_object; // 0x3a5 Mov
	var_443_string = "pers_unosha"; // 0x3a6 MovS
	var_444_string = "arena_spectator_unosha.xml"; // 0x3a7 MovS
	var_445_string = "pt_arena_spectator4"; // 0x3a8 MovS
	func_1125(var_443_string, var_444_string, var_445_string); // 0x3a9 NEW_2
	var_446_object = Obj(); var_447_string = ""; var_448_string = ""; var_449_string = ""; // 0x3ab PushV
	var_446_object = var_268_object; // 0x3ac Mov
	var_447_string = "pers_unosha"; // 0x3ad MovS
	var_448_string = "arena_spectator_unosha2.xml"; // 0x3ae MovS
	var_449_string = "pt_arena_spectator5"; // 0x3af MovS
	func_1125(var_447_string, var_448_string, var_449_string); // 0x3b0 NEW_2
	var_450_object = Obj(); var_451_string = ""; var_452_string = ""; var_453_string = ""; // 0x3b2 PushV
	var_450_object = var_268_object; // 0x3b3 Mov
	var_451_string = "pers_dohodyaga"; // 0x3b4 MovS
	var_452_string = "arena_spectator_dohodyaga.xml"; // 0x3b5 MovS
	var_453_string = "pt_arena_spectator6"; // 0x3b6 MovS
	func_1125(var_451_string, var_452_string, var_453_string); // 0x3b7 NEW_2
	var_454_object = Obj(); var_455_string = ""; var_456_string = ""; var_457_string = ""; // 0x3b9 PushV
	var_454_object = var_268_object; // 0x3ba Mov
	var_455_string = "pers_boy"; // 0x3bb MovS
	var_456_string = "arena_spectator_boy.xml"; // 0x3bc MovS
	var_457_string = "pt_arena_spectator7"; // 0x3bd MovS
	func_1125(var_455_string, var_456_string, var_457_string); // 0x3be NEW_2
	var_458_float = GetByIndex(var_266_cvector, 0); // 0x3c0 PushE
	var_459_int = -var_458_float; // 0x3c1 Neg
	var_460_float = GetByIndex(var_266_cvector, 2); // 0x3c2 PushE
	var_461_int = -var_460_float; // 0x3c3 Neg
	Rotate(var_459_int, var_461_int); // 0x3c4 Func
	var_462_object = Obj(); // 0x3c6 PushV
	var_462_object = var_237_object; // 0x3c7 Mov
	func_1410(var_462_object); // 0x3c8 NEW_2
	var_469_float = 0; var_470_float = 0; var_471_float = 0; // 0x3ca PushV
	var_469_float = 1; // 0x3cb MovI
	var_470_float = 0; // 0x3cc MovI
	var_471_float = 0.75; // 0x3cd MovF
	func_1528(var_470_float, var_471_float); // 0x3ce NEW_2
	UnlockCamera(); // 0x3d0 Func
	
Label_978:
	var_472_int = 1; // 0x3d2 PushI
	Sleep(var_472_int); // 0x3d3 Func
	var_473_bool = var_237_object != 0; // 0x3d5 NullNeq
	if(var_473_bool == 0) goto Label_988; // 0x3d6 JumpB
	IsDead(var_275_bool); // 0x3d7 ObjFunc
	var_474_bool = var_275_bool; // 0x3d9 Push
	if(var_474_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_989; // 0x3db Jump
	
Label_989:
	LockCamera(); // 0x3dd Func
	var_475_float = GetByIndex(var_266_cvector, 0); // 0x3df PushE
	var_476_float = GetByIndex(var_266_cvector, 2); // 0x3e0 PushE
	RotateAsync(var_475_float, var_476_float); // 0x3e1 Func
	var_477_float = 0; var_478_float = 0; var_479_float = 0; // 0x3e3 PushV
	var_477_float = 0; // 0x3e4 MovI
	var_478_float = 1; // 0x3e5 MovI
	var_479_float = 0.75; // 0x3e6 MovF
	func_1528(var_478_float, var_479_float); // 0x3e7 NEW_2
	RemoveActor(var_274_object); // 0x3e9 Func
	func_1142(); // 0x3ec NEW_2
	var_491_object = Obj(); var_492_int = 0; var_493_object = Obj(); var_494_object = Obj(); var_495_object = Obj(); // 0x3ee PushV
	var_491_object = var_237_object; // 0x3ef Mov
	var_492_int = 0; // 0x3f0 MovI
	var_493_object = var_0_object; // 0x3f1 MovT
	var_494_object = var_1_object; // 0x3f2 MovT
	var_495_object = var_10_cvector; // 0x3f3 MovT
	func_1378(var_495_object); // 0x3f4 NEW_2
	var_515_object = Obj(); var_516_int = 0; var_517_object = Obj(); var_518_object = Obj(); var_519_object = Obj(); // 0x3f6 PushV
	var_515_object = var_237_object; // 0x3f7 Mov
	var_516_int = 1; // 0x3f8 MovI
	var_517_object = var_2_object; // 0x3f9 MovT
	var_518_object = var_3_string; // 0x3fa MovT
	var_519_object = var_11_cvector; // 0x3fb MovT
	func_1378(var_519_object); // 0x3fc NEW_2
	var_520_object = Obj(); var_521_int = 0; var_522_object = Obj(); var_523_object = Obj(); var_524_object = Obj(); // 0x3fe PushV
	var_520_object = var_237_object; // 0x3ff Mov
	var_521_int = 2; // 0x400 MovI
	var_522_object = var_4_bool; // 0x401 MovT
	var_523_object = var_5_object; // 0x402 MovT
	var_524_object = var_12_bool; // 0x403 MovT
	func_1378(var_524_object); // 0x404 NEW_2
	var_525_object = Obj(); var_526_int = 0; var_527_object = Obj(); var_528_object = Obj(); var_529_object = Obj(); // 0x406 PushV
	var_525_object = var_237_object; // 0x407 Mov
	var_526_int = 3; // 0x408 MovI
	var_527_object = var_6_object; // 0x409 MovT
	var_528_object = var_7_object; // 0x40a MovT
	var_529_object = var_13_bool; // 0x40b MovT
	func_1378(var_529_object); // 0x40c NEW_2
	var_530_object = Obj(); var_531_int = 0; var_532_object = Obj(); var_533_object = Obj(); var_534_object = Obj(); // 0x40e PushV
	var_530_object = var_237_object; // 0x40f Mov
	var_531_int = 4; // 0x410 MovI
	var_532_object = var_8_string; // 0x411 MovT
	var_533_object = var_9_bool; // 0x412 MovT
	var_534_object = var_14_object; // 0x413 MovT
	func_1378(var_534_object); // 0x414 NEW_2
	SelectWeapon(); // 0x416 ObjFunc
	var_535_string = "pt_arena_return"; // 0x418 PushS
	GetLocator(var_535_string, var_273_bool, var_276_cvector, var_277_cvector); // 0x419 ObjFunc
	Teleport(var_237_object, var_268_object, var_276_cvector, var_277_cvector); // 0x41b Func
	StopAsync(); // 0x41d Func
	var_536_float = GetByIndex(var_266_cvector, 0); // 0x41f PushE
	var_537_float = GetByIndex(var_266_cvector, 2); // 0x420 PushE
	Rotate(var_536_float, var_537_float); // 0x421 Func
	var_538_float = 0; var_539_float = 0; var_540_float = 0; // 0x423 PushV
	var_538_float = 1; // 0x424 MovI
	var_539_float = 0; // 0x425 MovI
	var_540_float = 0.75; // 0x426 MovF
	func_1528(var_539_float, var_540_float); // 0x427 NEW_2
	UnlockCamera(); // 0x429 Func
	func_1472(); // 0x42c NEW_2
	func_1460(); // 0x42f NEW_2
	var_545_object = Obj(); // 0x431 PushV
	var_545_object = var_237_object; // 0x432 Mov
	func_1282(var_545_object); // 0x433 NEW_2
	return 24; // 0x435 Return
	
Label_988:
	goto Label_978; // 0x3dc Jump
}


func_1548(var_59_string, var_60_int)
{
	var_61_string = ""; var_62_string = ""; // 0x60c PushV
	var_62_string = "idle"; // 0x60d MovS
	var_63_int = var_60_int; // 0x60e Push
	if(var_63_int == 0) goto Label_1553; // 0x60f JumpB
	var_62_string = var_62_string + var_60_int; // 0x610 Add2
	
Label_1553:
	var_59_string = var_62_string; // 0x611 Mov
	return 2; // 0x612 Return
}


func_1421()
{
	var_33_bool = 0; // 0x58d PushV
	func_1580(var_33_bool); // 0x58e NEW_2
	if(var_33_bool == 0) goto Label_1427; // 0x590 JumpB
	lshStopSpeech(); // 0x591 Func
	
Label_1427:
	return 0; // 0x593 Return
}


func_1166(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x48e PushV
	GetPosition(var_46_cvector); // 0x48f Func
	GetPosition(var_47_cvector); // 0x491 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x493 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x494 Or2
	return 6; // 0x495 Return
}


func_655()
{
	var_31_object = var_2_object; // 0x28f PushT
	if(var_31_object == 0) goto Label_660; // 0x290 JumpB
	StopAnimation(); // 0x291 Func
	goto Label_663; // 0x293 Jump
	
Label_663:
	return 0; // 0x297 Return
	
Label_660:
	func_769(); // 0x295 NEW_2
}


func_1555(var_53_int)
{
	var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x613 PushV
	var_56_int = 0; // 0x614 MovI
	
Label_1557:
	var_58_string = "all"; // 0x615 PushS
	var_59_string = ""; var_60_int = 0; // 0x616 PushV
	var_60_int = var_56_int; // 0x617 Mov
	func_1548(var_59_string, var_60_int); // 0x618 NEW_2
	HasAnimation(var_57_bool, var_58_string, var_59_string); // 0x61a Func
	var_64_bool = var_57_bool == 0; // 0x61c Not
	if(var_64_bool == 0) goto Label_1567; // 0x61d JumpB
	goto Label_1570; // 0x61e Jump
	
Label_1570:
	var_53_int = var_56_int; // 0x622 Mov
	return 4; // 0x623 Return
	
Label_1567:
	var_65_int = 1; // 0x61f PushI
	var_56_int = var_56_int + var_65_int; // 0x620 Add2
	goto Label_1557; // 0x621 Jump
}


func_1428(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x594 PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x595 Or
	var_75_float = sqrt(var_76_int); // 0x596 Sqrt2
	var_77_float = 0.0; // 0x597 PushF
	var_78_bool = var_75_float < var_77_float; // 0x598 LT
	if(var_78_bool == 0) goto Label_1436; // 0x599 JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x59a MovV
	return 2; // 0x59b Return
	
Label_1436:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x59c Div2
	return 2; // 0x59d Return
}


func_1174(var_44_bool, var_46_float)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; // 0x496 PushV
	GetPosition(var_57_cvector); // 0x497 ObjFunc
	GetEyesHeight(var_56_float); // 0x499 ObjFunc
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x49b PushE
	var_65_float = var_65_float + var_56_float; // 0x49c Add2
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x49d PopE
	GetPosition(var_58_cvector); // 0x49e Func
	GetEyesHeight(var_56_float); // 0x4a0 Func
	var_66_float = GetByIndex(var_58_cvector, 1); // 0x4a2 PushE
	var_66_float = var_66_float + var_56_float; // 0x4a3 Add2
	SetByIndex(var_58_cvector, 1) = var_66_float; // 0x4a4 PopE
	var_59_cvector = var_57_cvector - var_58_cvector; // 0x4a5 Sub2
	var_67_float = GetByIndex(var_59_cvector, 1); // 0x4a6 PushE
	var_67_float = 0; // 0x4a7 MovI
	SetByIndex(var_59_cvector, 1) = var_67_float; // 0x4a8 PopE
	var_68_int = var_59_cvector | var_59_cvector; // 0x4a9 Or
	var_69_float = sqrt(var_68_int); // 0x4aa Sqrt
	var_59_cvector = var_59_cvector / var_59_cvector; // 0x4ab Div2
	var_60_cvector = -var_59_cvector; // 0x4ac Neg2
	var_70_float = var_59_cvector * var_46_float; // 0x4ad Mult
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x4ae PushV
	var_73_cvector = CVector(0.0, 1.0, 0.0); // 0x4af PushVec
	var_72_cvector = var_60_cvector ^ var_73_cvector; // 0x4b0 Xor2
	func_1428(var_71_cvector, var_72_cvector); // 0x4b1 NEW_2
	var_79_int = 25; // 0x4b3 PushI
	var_80_float = var_71_cvector * var_79_int; // 0x4b4 Mult
	var_81_int = var_70_float + var_80_float; // 0x4b5 Add
	var_82_cvector = CVector(0.0, 10.0, 0.0); // 0x4b6 PushVec
	var_61_cvector = var_81_int - var_82_cvector; // 0x4b7 Sub2
	var_62_cvector = var_58_cvector + var_61_cvector; // 0x4b8 Add2
	IsOverrideActive(var_63_bool); // 0x4b9 Func
	var_83_bool = var_63_bool; // 0x4bb Push
	if(var_83_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_44_bool = 0; // 0x4bd MovB
	return 18; // 0x4be Return
	
Label_1215:
	StopWorld(); // 0x4bf Func
	CameraTransit(var_62_cvector, var_60_cvector); // 0x4c1 Func
	var_84_float = GetByIndex(var_61_cvector, 0); // 0x4c3 PushE
	var_85_float = GetByIndex(var_61_cvector, 2); // 0x4c4 PushE
	Rotate(var_84_float, var_85_float); // 0x4c5 Func
	var_86_bool = 0; // 0x4c7 PushV
	func_1580(var_86_bool); // 0x4c8 NEW_2
	if(var_86_bool == 0) goto Label_1228; // 0x4ca JumpB
	goto Label_1236; // 0x4cb Jump
	
Label_1236:
	CameraWaitForPlayFinish(); // 0x4d4 Func
	ResumeWorld(); // 0x4d6 Func
	var_44_bool = 1; // 0x4d8 MovB
	return 18; // 0x4d9 Return
	
Label_1228:
	var_87_string = "head"; // 0x4cc PushS
	HasAnimationTrack(var_64_bool, var_87_string); // 0x4cd Func
	var_88_bool = var_64_bool; // 0x4cf Push
	if(var_88_bool == 0) goto Label_1236; // 0x4d0 JumpB
	var_89_string = "head"; // 0x4d1 PushS
	LookAsyncCamera(var_89_string); // 0x4d2 Func
}


func_1302(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x516 PushV
	lshHasAnimation(var_141_bool, var_137_string); // 0x517 Func
	var_144_bool = var_141_bool; // 0x519 Push
	if(var_144_bool == 0) goto Label_1313; // 0x51a JumpB
	lshGetAnimTimes(var_137_string, var_142_float, var_143_float); // 0x51b Func
	var_145_bool = 0; // 0x51d PushB
	lshPlayAnimation(var_142_float, var_143_float, var_145_bool); // 0x51e Func
	goto Label_1317; // 0x520 Jump
	
Label_1317:
	return 6; // 0x525 Return
	
Label_1313:
	var_146_string = "Can't find lsh animation : "; // 0x521 PushS
	var_147_int = var_146_string + var_137_string; // 0x522 Add
	Trace(var_147_int); // 0x523 Func
}


func_664(var_2_object)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x298 PushV
	var_2_object = 1; // 0x299 TMovB
	var_53_int = 0; // 0x29a PushV
	func_1555(var_53_int); // 0x29b NEW_2
	var_51_int = var_53_int; // 0x29c Mov
	var_66_int = var_51_int; // 0x29e Push
	if(var_66_int == 0) goto Label_683; // 0x29f JumpB
	irand(var_52_int, var_51_int); // 0x2a0 Func
	var_67_string = "all"; // 0x2a2 PushS
	var_68_string = ""; var_69_int = 0; // 0x2a3 PushV
	var_69_int = var_52_int; // 0x2a4 Mov
	func_1548(var_68_string, var_69_int); // 0x2a5 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x2a7 Func
	WaitForAnimEnd(); // 0x2a9 Func
	
Label_683:
	var_2_object = 0; // 0x2ab TMovB
	return 4; // 0x2ac Return
}


func_410(var_0_object, var_1_object, var_2_object, var_3_string, var_104_object, var_105_object)
{
	var_0_object = var_105_object; // 0x19b TMov
	var_1_object = var_104_object; // 0x19c TMov
	var_3_string = 0; // 0x19d TMovB
	var_110_int = 1; // 0x19e PushI
	if(var_110_int == 0) goto Label_438; // 0x19f JumpB
	var_111_string = ""; // 0x1a0 PushV
	var_111_string = "Neutral"; // 0x1a1 MovS
	func_468(var_105_object, var_111_string); // 0x1a2 NEW_2
	var_128_int = 520523; // 0x1a4 PushI
	SetMessage(var_128_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_129_int = 520524; // 0x1a9 PushI
	var_130_int = -1; // 0x1aa PushI
	var_131_int = 21727; // 0x1ab PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1ac TObjFunc
	var_132_int = 529950; // 0x1ae PushI
	var_133_int = -1; // 0x1af PushI
	var_134_int = 31334; // 0x1b0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x1b1 TObjFunc
	goto Label_438; // 0x1b3 Jump
	
Label_438:
	var_135_bool = 0; // 0x1b6 PushV
	func_1580(var_135_bool); // 0x1b7 NEW_2
	if(var_135_bool == 0) goto Label_453; // 0x1b9 JumpB
	
Label_442:
	lshWaitForAnimEnd(); // 0x1ba Func
	var_136_string = var_3_string; // 0x1bc PushT
	if(var_136_string == 0) goto Label_447; // 0x1bd JumpB
	goto Label_452; // 0x1be Jump
	
Label_452:
	goto Label_467; // 0x1c4 Jump
	
Label_467:
	return 0; // 0x1d3 Return
	
Label_447:
	var_137_string = ""; // 0x1bf PushV
	var_137_string = var_2_object; // 0x1c0 MovT
	func_1302(var_137_string); // 0x1c1 NEW_2
	goto Label_442; // 0x1c3 Jump
	
Label_453:
	var_148_string = "all"; // 0x1c5 PushS
	var_149_string = "idle"; // 0x1c6 PushS
	PlayAnimation(var_148_string, var_149_string); // 0x1c7 Func
	
Label_457:
	WaitForAnimEnd(); // 0x1c9 Func
	var_150_string = var_3_string; // 0x1cb PushT
	if(var_150_string == 0) goto Label_462; // 0x1cc JumpB
	goto Label_467; // 0x1cd Jump
	
Label_462:
	var_151_string = "all"; // 0x1ce PushS
	var_152_string = "idle"; // 0x1cf PushS
	PlayAnimation(var_151_string, var_152_string); // 0x1d0 Func
	goto Label_457; // 0x1d2 Jump
}


func_1438(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x59e PushV
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x59f Sub2
	var_70_float = var_74_cvector | var_74_cvector; // 0x5a0 Or2
	return 2; // 0x5a1 Return
}


func_162(var_2_object, var_202_string)
{
	var_203_bool = 0; // 0xa3 PushV
	func_1580(var_203_bool); // 0xa4 NEW_2
	var_204_bool = var_203_bool == 0; // 0xa6 Not
	if(var_204_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_205_bool = var_202_string == var_2_object; // 0xa9 Eq
	if(var_205_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_206_string = ""; var_207_bool = 0; // 0xac PushV
	var_206_string = var_202_string; // 0xad Mov
	var_208_string = ""; // 0xae PushS
	var_209_bool = var_202_string == var_208_string; // 0xaf Eq
	if(var_209_bool == 0) goto Label_179; // 0xb0 JumpB
	var_207_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_1318(var_206_string, var_207_bool); // 0xb4 NEW_2
	var_2_object = var_202_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_207_bool = 1; // 0xb3 MovB
}


func_1442(var_278_object)
{
	var_279_object = Obj(); var_280_object = Obj(); // 0x5a2 PushV
	CreateObjectVector(var_280_object); // 0x5a3 Func
	var_278_object = var_280_object; // 0x5a5 Mov
	return 2; // 0x5a6 Return
}


func_1572(var_92_int)
{
	var_92_int = 521048; // 0x624 MovI
	return 0; // 0x625 Return
}


func_1574(var_91_int)
{
	var_91_int = 521047; // 0x626 MovI
	return 0; // 0x627 Return
}


func_1318(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x526 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x527 Func
	var_125_bool = var_122_bool; // 0x529 Push
	if(var_125_bool == 0) goto Label_1328; // 0x52a JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x52b Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x52d Func
	goto Label_1332; // 0x52f Jump
	
Label_1332:
	return 6; // 0x534 Return
	
Label_1328:
	var_126_string = "Can't find lsh animation : "; // 0x530 PushS
	var_127_int = var_126_string + var_115_string; // 0x531 Add
	Trace(var_127_int); // 0x532 Func
}


func_1576(var_93_string)
{
	var_93_string = "ui/NPC_Citizen2.png"; // 0x628 MovS
	return 0; // 0x629 Return
}


func_1448(var_192_int, var_193_string)
{
	var_194_int = 0; var_195_int = 0; // 0x5a8 PushV
	GetVariable(var_193_string, var_195_int); // 0x5a9 Func
	var_192_int = var_195_int; // 0x5ab Mov
	return 2; // 0x5ac Return
}


func_1578(var_94_string)
{
	var_94_string = "ui/NPC_Citizen2_b.png"; // 0x62a MovS
	return 0; // 0x62b Return
}


func_1580(var_86_bool)
{
	var_86_bool = 0; // 0x62c MovB
	return 0; // 0x62d Return
}


func_685(var_0_object, var_1_object)
{
	var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_object = Obj(); var_41_int = 0; var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x2ad PushV
	GetPFPosition(var_44_object); // 0x2ae Func
	GetDirection(var_0_object); // 0x2b0 Func
	
Label_690:
	func_774(); // 0x2b3 NEW_2
	var_45_int = 10; // 0x2b5 PushI
	irand(var_41_int, var_45_int); // 0x2b6 Func
	var_46_int = 5; // 0x2b8 PushI
	var_47_int = var_41_int + var_46_int; // 0x2b9 Add
	Sleep(var_47_int, var_42_bool); // 0x2ba Func
	var_48_bool = var_42_bool; // 0x2bc Push
	if(var_48_bool == 0) goto Label_706; // 0x2bd JumpB
	func_664(var_44_object); // 0x2bf NEW_2
	goto Label_767; // 0x2c1 Jump
	
Label_767:
	goto Label_690; // 0x2ff Jump
	
Label_706:
	func_774(); // 0x2c3 NEW_2
	GetPFPosition(var_43_cvector); // 0x2c5 Func
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x2c7 PushV
	var_71_cvector = var_1_object; // 0x2c8 MovT
	var_72_cvector = var_43_cvector; // 0x2c9 Mov
	func_1438(var_70_float, var_71_cvector, var_72_cvector); // 0x2ca NEW_2
	var_75_int = 40000; // 0x2cc PushI
	var_76_bool = var_70_float > var_75_int; // 0x2cd GT
	if(var_76_bool == 0) goto Label_753; // 0x2ce JumpB
	FindPathTo(var_44_object, var_44_object); // 0x2cf Func
	var_77_bool = var_44_object != 0; // 0x2d1 NullNeq
	if(var_77_bool == 0) goto Label_748; // 0x2d2 JumpB
	RotatePath(var_44_object, var_42_bool); // 0x2d3 Func
	var_78_bool = var_42_bool == 0; // 0x2d5 Not
	if(var_78_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_766; // 0x2d7 Jump
	
Label_766:
	goto Label_706; // 0x2fe Jump
	
Label_728:
	var_79_bool = 0; // 0x2d8 PushB
	FollowPath(var_44_object, var_79_bool, var_42_bool); // 0x2d9 Func
	var_80_bool = var_42_bool == 0; // 0x2db Not
	if(var_80_bool == 0) goto Label_734; // 0x2dc JumpB
	goto Label_766; // 0x2dd Jump
	
Label_734:
	var_81_float = GetByIndex(var_0_object, 0); // 0x2de PushE
	var_82_float = GetByIndex(var_0_object, 2); // 0x2df PushE
	Rotate(var_81_float, var_82_float, var_42_bool); // 0x2e0 Func
	var_83_bool = var_42_bool == 0; // 0x2e2 Not
	if(var_83_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_766; // 0x2e4 Jump
	
Label_741:
	WaitForAnimEnd(var_42_bool); // 0x2e5 Func
	var_84_bool = var_42_bool == 0; // 0x2e7 Not
	if(var_84_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_766; // 0x2e9 Jump
	
Label_746:
	goto Label_767; // 0x2ea Jump
	
Label_748:
	var_85_int = 1; // 0x2ec PushI
	Sleep(var_85_int); // 0x2ed Func
	var_44_object = 0; // 0x2ef SetNull
	goto Label_766; // 0x2f0 Jump
	
Label_753:
	var_86_float = GetByIndex(var_0_object, 0); // 0x2f1 PushE
	var_87_float = GetByIndex(var_0_object, 2); // 0x2f2 PushE
	Rotate(var_86_float, var_87_float, var_42_bool); // 0x2f3 Func
	var_88_bool = var_42_bool == 0; // 0x2f5 Not
	if(var_88_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_766; // 0x2f7 Jump
	
Label_760:
	WaitForAnimEnd(var_42_bool); // 0x2f8 Func
	var_89_bool = var_42_bool == 0; // 0x2fa Not
	if(var_89_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_766; // 0x2fc Jump
	
Label_765:
	goto Label_767; // 0x2fd Jump
}


func_1582()
{
	var_200_string = "ooArenaManager1"; // 0x62f PushS
	var_201_int = 1; // 0x630 PushI
	SetVariable(var_200_string, var_201_int); // 0x631 Func
	return 0; // 0x633 Return
}


func_1453(var_295_string, var_296_int)
{
	var_297_int = 0; var_298_int = 0; // 0x5ad PushV
	GetVariable(var_295_string, var_298_int); // 0x5ae Func
	var_299_int = var_298_int + var_296_int; // 0x5b0 Add
	SetVariable(var_295_string, var_299_int); // 0x5b1 Func
	return 2; // 0x5b3 Return
}


func_1588()
{
	var_38_int = 1; // 0x635 PushI
	SetReturnValue(var_38_int); // 0x636 ObjFunc
	return 0; // 0x638 Return
}


func_1333(var_321_object, var_323_int)
{
	var_325_object = Obj(); var_326_int = 0; var_327_int = 0; var_328_object = Obj(); var_329_int = 0; var_330_object = Obj(); var_331_int = 0; var_332_int = 0; var_333_object = Obj(); var_334_int = 0; // 0x535 PushV
	var_335_object = Obj(); // 0x536 PushV
	func_1442(var_335_object); // 0x537 NEW_2
	var_330_object = var_335_object; // 0x538 Mov
	GetItemCount(var_331_int, var_323_int); // 0x53a ObjFunc
	var_332_int = 0; // 0x53c MovI
	
Label_1341:
	var_336_bool = var_332_int < var_331_int; // 0x53d LT
	if(var_336_bool == 0) goto Label_1355; // 0x53e JumpB
	GetItem(var_333_object, var_332_int, var_323_int); // 0x53f ObjFunc
	add(var_333_object); // 0x541 ObjFunc
	GetItemAmount(var_334_int, var_332_int, var_323_int); // 0x543 ObjFunc
	add(var_334_int); // 0x545 ObjFunc
	var_333_object = 0; // 0x547 SetNull
	var_337_int = 1; // 0x548 PushI
	var_332_int = var_332_int + var_337_int; // 0x549 Add2
	goto Label_1341; // 0x54a Jump
	
Label_1355:
	var_321_object = var_330_object; // 0x54b Mov
	return 10; // 0x54c Return
}


func_1460()
{
	var_543_string = ""; var_544_int = 0; // 0x5b4 PushV
	var_543_string = "noinv_drop"; // 0x5b5 MovS
	var_544_int = -1; // 0x5b6 MovI
	func_1453(var_543_string, var_544_int); // 0x5b7 NEW_2
	return 0; // 0x5b9 Return
}


func_1080()
{
	var_381_int = 0; var_382_int = 0; var_383_object = Obj(); var_384_int = 0; var_385_bool = 0; var_386_int = 0; var_387_bool = 0; var_388_int = 0; var_389_int = 0; var_390_int = 0; var_391_object = Obj(); var_392_int = 0; var_393_bool = 0; var_394_int = 0; var_395_bool = 0; var_396_int = 0; // 0x438 PushV
	var_397_int = 0; // 0x439 PushI
	GetItemCount(var_389_int, var_397_int); // 0x43a ObjFunc
	var_390_int = 0; // 0x43c MovI
	
Label_1085:
	var_398_bool = var_390_int < var_389_int; // 0x43d LT
	if(var_398_bool == 0) goto Label_1124; // 0x43e JumpB
	GetItem(var_391_object, var_390_int); // 0x43f ObjFunc
	GetItemID(var_392_int); // 0x441 ObjFunc
	var_399_string = "Group"; // 0x443 PushS
	HasInvItemProperty(var_393_bool, var_392_int, var_399_string); // 0x444 Func
	var_400_bool = var_393_bool; // 0x446 Push
	if(var_400_bool == 0) goto Label_1110; // 0x447 JumpB
	var_401_string = "Group"; // 0x448 PushS
	GetInvItemProperty(var_394_int, var_392_int, var_401_string); // 0x449 Func
	var_402_int = 0; // 0x44b PushI
	var_403_bool = var_394_int != var_402_int; // 0x44c Neq
	if(var_403_bool == 0) goto Label_1104; // 0x44d JumpB
	goto Label_1121; // 0x44e Jump
	
Label_1121:
	var_404_int = 1; // 0x461 PushI
	var_390_int = var_390_int + var_404_int; // 0x462 Add2
	goto Label_1085; // 0x463 Jump
	
Label_1104:
	var_405_int = 0; // 0x450 PushI
	IsItemSelected(var_395_bool, var_390_int, var_405_int); // 0x451 ObjFunc
	var_406_bool = var_395_bool; // 0x453 Push
	if(var_406_bool == 0) goto Label_1110; // 0x454 JumpB
	goto Label_1121; // 0x455 Jump
	
Label_1110:
	var_407_int = 0; // 0x456 PushI
	GetItemAmount(var_396_int, var_390_int, var_407_int); // 0x457 ObjFunc
	var_408_int = 0; // 0x459 PushI
	RemoveItem(var_390_int, var_396_int, var_408_int); // 0x45a ObjFunc
	var_409_int = -1; // 0x45c PushI
	var_390_int = var_390_int + var_409_int; // 0x45d Add2
	var_410_int = -1; // 0x45e PushI
	var_389_int = var_389_int + var_410_int; // 0x45f Add2
	var_391_object = 0; // 0x460 SetNull
	
Label_1124:
	return 16; // 0x464 Return
}


func_1593(var_36_object)
{
	var_38_string = "blood is given"; // 0x63a PushS
	Trace(var_38_string); // 0x63b Func
	var_39_object = Obj(); var_40_string = ""; var_41_int = 0; // 0x63d PushV
	var_39_object = var_36_object; // 0x63e Mov
	var_40_string = "blood"; // 0x63f MovS
	var_41_int = 1; // 0x640 MovI
	func_1515(var_39_object, var_40_string, var_41_int); // 0x641 NEW_2
	return 0; // 0x643 Return
}


func_1466()
{
	var_295_string = ""; var_296_int = 0; // 0x5ba PushV
	var_295_string = "noinv_drop"; // 0x5bb MovS
	var_296_int = 1; // 0x5bc MovI
	func_1453(var_295_string, var_296_int); // 0x5bd NEW_2
	return 0; // 0x5bf Return
}


func_1472()
{
	var_541_string = ""; var_542_int = 0; // 0x5c0 PushV
	var_541_string = "nouse_container"; // 0x5c1 MovS
	var_542_int = -1; // 0x5c2 MovI
	func_1453(var_541_string, var_542_int); // 0x5c3 NEW_2
	return 0; // 0x5c5 Return
}


func_577(var_32_cvector)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x241 PushV
	GetDirection(var_34_cvector); // 0x242 Func
	var_32_cvector = var_34_cvector; // 0x244 Mov
	return 2; // 0x245 Return
}


func_1604()
{
	var_62_string = "playsound"; // 0x645 PushS
	var_63_string = "giveitem"; // 0x646 PushS
	TriggerWorld(var_62_string, var_63_string); // 0x647 Func
	return 0; // 0x649 Return
}


func_1478()
{
	var_300_string = ""; var_301_int = 0; // 0x5c6 PushV
	var_300_string = "nouse_container"; // 0x5c7 MovS
	var_301_int = 1; // 0x5c8 MovI
	func_1453(var_300_string, var_301_int); // 0x5c9 NEW_2
	return 0; // 0x5cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_183_object, var_184_object)
{
	var_0_object = var_184_object; // 0x4b TMov
	var_1_object = var_183_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_189_int = 1; // 0x4e PushI
	if(var_189_int == 0) goto Label_132; // 0x4f JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x50 PushV
	var_191_object = var_1_object; // 0x51 MovT
	func_1610(var_191_object); // 0x52 NEW_2
	if(var_190_bool == 0) goto Label_110; // 0x54 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x55 PushV
	var_198_object = var_1_object; // 0x56 MovT
	var_199_object = var_0_object; // 0x57 MovT
	func_1582(); // 0x58 NEW_2
	var_202_string = ""; // 0x5a PushV
	var_202_string = "Neutral"; // 0x5b MovS
	func_162(var_184_object, var_202_string); // 0x5c NEW_2
	var_210_int = 520512; // 0x5e PushI
	SetMessage(var_210_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_211_int = 520513; // 0x63 PushI
	var_212_int = 21717; // 0x64 PushI
	var_213_int = 21716; // 0x65 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x66 TObjFunc
	var_214_int = 529946; // 0x68 PushI
	var_215_int = 31329; // 0x69 PushI
	var_216_int = 31328; // 0x6a PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_217_bool = 0; // 0x84 PushV
	func_1580(var_217_bool); // 0x85 NEW_2
	if(var_217_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_218_string = var_3_string; // 0x8a PushT
	if(var_218_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_219_string = ""; // 0x8d PushV
	var_219_string = var_2_object; // 0x8e MovT
	func_1302(var_219_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_220_string = "all"; // 0x93 PushS
	var_221_string = "idle"; // 0x94 PushS
	PlayAnimation(var_220_string, var_221_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_222_string = var_3_string; // 0x99 PushT
	if(var_222_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_223_string = "all"; // 0x9c PushS
	var_224_string = "idle"; // 0x9d PushS
	PlayAnimation(var_223_string, var_224_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_225_string = ""; // 0x6e PushV
	var_225_string = "Neutral"; // 0x6f MovS
	func_162(var_184_object, var_225_string); // 0x70 NEW_2
	var_226_int = 520519; // 0x72 PushI
	SetMessage(var_226_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_227_int = 520520; // 0x77 PushI
	var_228_int = -1; // 0x78 PushI
	var_229_int = 21723; // 0x79 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x7a TObjFunc
	var_230_int = 520521; // 0x7c PushI
	var_231_int = -1; // 0x7d PushI
	var_232_int = 21724; // 0x7e PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_1610(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x64b PushV
	var_193_string = "ooArenaManager1"; // 0x64c MovS
	func_1448(var_192_int, var_193_string); // 0x64d NEW_2
	var_196_int = 0; // 0x64f PushI
	var_197_bool = var_192_int == var_196_int; // 0x650 Eq
	if(var_197_bool == 0) goto Label_1620; // 0x651 JumpB
	var_190_bool = 1; // 0x652 MovB
	return 0; // 0x653 Return
	
Label_1620:
	var_190_bool = 0; // 0x654 MovB
	return 0; // 0x655 Return
}


func_1484(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5cc PushV
	CreateIntVector(var_58_object); // 0x5cd Func
	add(var_55_int); // 0x5cf ObjFunc
	add(var_56_int); // 0x5d1 ObjFunc
	var_59_int = 3; // 0x5d3 PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0x5d4 Func
	return 2; // 0x5d6 Return
}


func_1358(var_354_object, var_356_int)
{
	var_357_object = Obj(); var_358_int = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_int = 0; var_363_int = 0; var_364_bool = 0; // 0x54e PushV
	CreateIntVector(var_361_object); // 0x54f Func
	GetItemCount(var_362_int, var_356_int); // 0x551 ObjFunc
	var_363_int = 0; // 0x553 MovI
	
Label_1364:
	var_365_bool = var_363_int < var_362_int; // 0x554 LT
	if(var_365_bool == 0) goto Label_1375; // 0x555 JumpB
	IsItemSelected(var_364_bool, var_363_int, var_356_int); // 0x556 ObjFunc
	var_366_bool = var_364_bool; // 0x558 Push
	if(var_366_bool == 0) goto Label_1372; // 0x559 JumpB
	add(var_363_int); // 0x55a ObjFunc
	
Label_1372:
	var_367_int = 1; // 0x55c PushI
	var_363_int = var_363_int + var_367_int; // 0x55d Add2
	goto Label_1364; // 0x55e Jump
	
Label_1375:
	var_354_object = var_361_object; // 0x55f Mov
	return 8; // 0x560 Return
}


func_336(var_0_object, var_33_int, var_34_object)
{
	var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x150 PushV
	var_0_object = var_34_object; // 0x151 TMov
	var_44_bool = 0; var_45_object = Obj(); var_46_float = 0; // 0x152 PushV
	var_45_object = var_34_object; // 0x153 Mov
	var_46_float = 110.0; // 0x154 MovF
	func_1174(var_45_object, var_46_float); // 0x155 NEW_2
	var_90_bool = var_44_bool == 0; // 0x157 Not
	if(var_90_bool == 0) goto Label_347; // 0x158 JumpB
	var_33_int = -2; // 0x159 MovI
	return 8; // 0x15a Return
	
Label_347:
	CreateDialog(var_40_object); // 0x15b Func
	var_91_int = 0; // 0x15d PushV
	func_1574(var_91_int); // 0x15e NEW_2
	SetNPCName(var_91_int); // 0x160 ObjFunc
	var_92_int = 0; // 0x162 PushV
	func_1572(var_92_int); // 0x163 NEW_2
	SetNPCDescription(var_92_int); // 0x165 ObjFunc
	var_93_string = ""; // 0x167 PushV
	func_1576(var_93_string); // 0x168 NEW_2
	SetPhoto(var_93_string); // 0x16a ObjFunc
	var_94_string = ""; // 0x16c PushV
	func_1578(var_94_string); // 0x16d NEW_2
	SetPhoto2(var_94_string); // 0x16f ObjFunc
	var_95_int = 0; // 0x171 PushV
	func_1622(var_95_int); // 0x172 NEW_2
	SetPlayerName(var_95_int); // 0x174 ObjFunc
	var_42_int = -1; // 0x176 MovI
	IsOverrideActive(var_41_bool); // 0x177 Func
	var_103_bool = var_41_bool; // 0x179 Push
	if(var_103_bool == 0) goto Label_381; // 0x17a JumpB
	var_33_int = -2; // 0x17b MovI
	return 8; // 0x17c Return
	
Label_381:
	DoDialog(var_40_object); // 0x17d Func
	var_104_object = Obj(); var_105_object = Obj(); // 0x17f PushV
	var_104_object = var_34_object; // 0x180 Mov
	var_105_object = var_40_object; // 0x181 Mov
	TaskCall(3); // 0x182 TaskCall
	func_410(var_106_object, var_107_object, var_108_string, var_109_bool, var_104_object, var_105_object); // 0x183 NEW_2
	TaskReturn(); // 0x184 TaskReturn
	IsDialogEnd(var_43_bool); // 0x186 ObjFunc
	
Label_392:
	var_153_bool = var_43_bool == 0; // 0x188 Not
	if(var_153_bool == 0) goto Label_399; // 0x189 JumpB
	sync(); // 0x18a Func
	IsDialogEnd(var_43_bool); // 0x18c ObjFunc
	goto Label_392; // 0x18e Jump
	
Label_399:
	var_154_object = Obj(); // 0x18f PushV
	var_154_object = var_34_object; // 0x190 Mov
	func_1242(); // 0x191 NEW_2
	StopDialog(var_40_object); // 0x193 Func
	GetReturnValue(var_42_int); // 0x195 ObjFunc
	var_33_int = var_42_int; // 0x197 Mov
	return 8; // 0x198 Return
}


func_468(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0x1d5 PushV
	func_1580(var_112_bool); // 0x1d6 NEW_2
	var_113_bool = var_112_bool == 0; // 0x1d8 Not
	if(var_113_bool == 0) goto Label_475; // 0x1d9 JumpB
	return 0; // 0x1da Return
	
Label_475:
	var_114_bool = var_111_string == var_2_object; // 0x1db Eq
	if(var_114_bool == 0) goto Label_478; // 0x1dc JumpB
	return 0; // 0x1dd Return
	
Label_478:
	var_115_string = ""; var_116_bool = 0; // 0x1de PushV
	var_115_string = var_111_string; // 0x1df Mov
	var_117_string = ""; // 0x1e0 PushS
	var_118_bool = var_111_string == var_117_string; // 0x1e1 Eq
	if(var_118_bool == 0) goto Label_485; // 0x1e2 JumpB
	var_116_bool = 0; // 0x1e3 MovB
	goto Label_486; // 0x1e4 Jump
	
Label_486:
	func_1318(var_115_string, var_116_bool); // 0x1e6 NEW_2
	var_2_object = var_111_string; // 0x1e8 TMov
	return 0; // 0x1e9 Return
	
Label_485:
	var_116_bool = 1; // 0x1e5 MovB
}


func_1622(var_95_int)
{
	var_96_int = 0; var_97_int = 0; // 0x656 PushV
	var_98_string = "branch"; // 0x657 PushS
	GetVariable(var_98_string, var_97_int); // 0x658 Func
	var_99_int = 0; // 0x65a PushI
	var_100_bool = var_97_int == var_99_int; // 0x65b Eq
	if(var_100_bool == 0) goto Label_1632; // 0x65c JumpB
	var_95_int = 1; // 0x65d MovI
	return 2; // 0x65e Return
	
Label_1632:
	var_101_int = 1; // 0x660 PushI
	var_102_bool = var_97_int == var_101_int; // 0x661 Eq
	if(var_102_bool == 0) goto Label_1637; // 0x662 JumpB
	var_95_int = 2; // 0x663 MovI
	return 2; // 0x664 Return
	
Label_1637:
	var_95_int = 3; // 0x665 MovI
	return 2; // 0x666 Return
}


func_1496(var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0x5d8 PushV
	GetItemID(var_50_int); // 0x5d9 ObjFunc
	var_53_string = "Category"; // 0x5db PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0x5dc Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0x5de ObjFunc
	var_54_bool = var_52_bool == 0; // 0x5e0 Not
	if(var_54_bool == 0) goto Label_1509; // 0x5e1 JumpB
	DropItems(var_45_object, var_46_int); // 0x5e2 ObjFunc
	goto Label_1514; // 0x5e4 Jump
	
Label_1514:
	return 6; // 0x5ea Return
	
Label_1509:
	var_55_int = 0; var_56_int = 0; // 0x5e5 PushV
	var_55_int = var_50_int; // 0x5e6 Mov
	var_56_int = var_46_int; // 0x5e7 Mov
	func_1484(var_55_int, var_56_int); // 0x5e8 NEW_2
}


func_1242()
{
	var_155_bool = 0; var_156_bool = 0; // 0x4da PushV
	CameraSwitchToNormal(); // 0x4db Func
	var_157_bool = 0; // 0x4dd PushV
	func_1580(var_157_bool); // 0x4de NEW_2
	if(var_157_bool == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1258; // 0x4e1 Jump
	
Label_1258:
	return 2; // 0x4ea Return
	
Label_1250:
	var_158_string = "head"; // 0x4e2 PushS
	HasAnimationTrack(var_156_bool, var_158_string); // 0x4e3 Func
	var_159_bool = var_156_bool; // 0x4e5 Push
	if(var_159_bool == 0) goto Label_1258; // 0x4e6 JumpB
	var_160_string = "head"; // 0x4e7 PushS
	UnlookAsync(var_160_string); // 0x4e8 Func
}


func_1378(var_492_int)
{
	var_496_int = 0; var_497_int = 0; var_498_object = Obj(); var_499_int = 0; var_500_bool = 0; var_501_int = 0; var_502_int = 0; var_503_int = 0; var_504_int = 0; var_505_object = Obj(); var_506_int = 0; var_507_bool = 0; var_508_int = 0; var_509_int = 0; // 0x562 PushV
	RemoveAllItems(var_492_int); // 0x563 ObjFunc
	size(var_503_int); // 0x565 ObjFunc
	var_504_int = 0; // 0x567 MovI
	
Label_1384:
	var_510_bool = var_504_int < var_503_int; // 0x568 LT
	if(var_510_bool == 0) goto Label_1396; // 0x569 JumpB
	get(var_505_object, var_504_int); // 0x56a ObjFunc
	get(var_506_int, var_504_int); // 0x56c ObjFunc
	AddItem(var_507_bool, var_505_object, var_492_int, var_506_int); // 0x56e ObjFunc
	var_505_object = 0; // 0x570 SetNull
	var_511_int = 1; // 0x571 PushI
	var_504_int = var_504_int + var_511_int; // 0x572 Add2
	goto Label_1384; // 0x573 Jump
	
Label_1396:
	size(var_503_int); // 0x574 ObjFunc
	var_508_int = 0; // 0x576 MovI
	
Label_1399:
	var_512_bool = var_508_int < var_503_int; // 0x577 LT
	if(var_512_bool == 0) goto Label_1409; // 0x578 JumpB
	get(var_509_int, var_508_int); // 0x579 ObjFunc
	var_513_bool = 1; // 0x57b PushB
	SelectItem(var_509_int, var_513_bool, var_492_int); // 0x57c ObjFunc
	var_514_int = 1; // 0x57e PushI
	var_508_int = var_508_int + var_514_int; // 0x57f Add2
	goto Label_1399; // 0x580 Jump
	
Label_1409:
	return 14; // 0x581 Return
}


func_1125(var_419_string, var_420_string, var_421_string)
{
	var_422_cvector = CVector(0,0,0); var_423_cvector = CVector(0,0,0); var_424_bool = 0; var_425_object = Obj(); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_bool = 0; var_429_object = Obj(); // 0x465 PushV
	GetLocator(var_421_string, var_428_bool, var_426_cvector, var_427_cvector); // 0x466 ObjFunc
	var_430_bool = var_428_bool == 0; // 0x468 Not
	if(var_430_bool == 0) goto Label_1135; // 0x469 JumpB
	var_431_string = "Locator doesn't exist for arena spectator "; // 0x46a PushS
	var_432_int = var_431_string + var_421_string; // 0x46b Add
	Trace(var_432_int); // 0x46c Func
	return 8; // 0x46e Return
	
Label_1135:
	var_433_bool = 1; // 0x46f PushB
	AddStationaryActor(var_429_object, var_426_cvector, var_427_cvector, var_419_string, var_420_string, var_433_bool); // 0x470 ObjFunc
	add(var_429_object); // 0x472 TObjFunc
	return 8; // 0x474 Return
}


func_1639(var_36_bool, var_37_object)
{
	var_38_float = 0; var_39_float = 0; // 0x667 PushV
	var_40_bool = var_37_object == 0; // 0x668 NullEq
	if(var_40_bool == 0) goto Label_1644; // 0x669 JumpB
	var_36_bool = 0; // 0x66a MovB
	return 2; // 0x66b Return
	
Label_1644:
	var_41_float = 0; var_42_object = Obj(); // 0x66c PushV
	var_42_object = var_37_object; // 0x66d Mov
	func_1166(var_42_object); // 0x66e NEW_2
	var_39_float = sqrt(var_41_float); // 0x670 Sqrt2
	var_49_bool = GlobalVars[1]; // 0x671 PushGE
	if(var_49_bool == 0) goto Label_1653; // 0x672 JumpB
	var_50_int = 100; // 0x673 PushI
	var_39_float = var_39_float - var_50_int; // 0x674 Sub2
	
Label_1653:
	var_51_int = 300; // 0x675 PushI
	var_36_bool = var_39_float < var_51_int; // 0x676 LT2
	return 2; // 0x677 Return
}


func_1259(var_281_object)
{
	var_282_bool = 0; var_283_int = 0; var_284_bool = 0; var_285_int = 0; // 0x4eb PushV
	var_286_bool = var_281_object == 0; // 0x4ec Not
	if(var_286_bool == 0) goto Label_1263; // 0x4ed JumpB
	return 4; // 0x4ee Return
	
Label_1263:
	var_287_string = "noaccess"; // 0x4ef PushS
	HasProperty(var_287_string, var_284_bool); // 0x4f0 ObjFunc
	var_288_bool = var_284_bool; // 0x4f2 Push
	if(var_288_bool == 0) goto Label_1277; // 0x4f3 JumpB
	var_289_string = "noaccess"; // 0x4f4 PushS
	GetProperty(var_289_string, var_285_int); // 0x4f5 ObjFunc
	var_290_string = "noaccess"; // 0x4f7 PushS
	var_291_int = 1; // 0x4f8 PushI
	var_292_int = var_285_int + var_291_int; // 0x4f9 Add
	SetProperty(var_290_string, var_292_int); // 0x4fa ObjFunc
	goto Label_1281; // 0x4fc Jump
	
Label_1281:
	return 4; // 0x501 Return
	
Label_1277:
	var_293_string = "noaccess"; // 0x4fd PushS
	var_294_int = 1; // 0x4fe PushI
	SetProperty(var_293_string, var_294_int); // 0x4ff ObjFunc
}


func_1515(var_39_object, var_40_string, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x5eb PushV
	CreateInvItem(var_43_object); // 0x5ec Func
	SetItemName(var_40_string); // 0x5ee ObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x5f0 PushV
	var_44_object = var_39_object; // 0x5f1 Mov
	var_45_object = var_43_object; // 0x5f2 Mov
	var_46_int = var_41_int; // 0x5f3 Mov
	func_1496(var_45_object, var_46_int); // 0x5f4 NEW_2
	return 2; // 0x5f6 Return
}


func_1142()
{
	var_480_int = 0; var_481_int = 0; var_482_object = Obj(); var_483_object = Obj(); var_484_int = 0; var_485_int = 0; var_486_object = Obj(); var_487_object = Obj(); // 0x476 PushV
	size(var_484_int); // 0x477 TObjFunc
	var_485_int = 0; // 0x479 MovI
	
Label_1146:
	var_488_bool = var_485_int < var_484_int; // 0x47a LT
	if(var_488_bool == 0) goto Label_1163; // 0x47b JumpB
	get(var_486_object, var_485_int); // 0x47c TObjFunc
	GetActor(var_487_object); // 0x47e ObjFunc
	var_489_bool = var_487_object != 0; // 0x480 NullNeq
	if(var_489_bool == 0) goto Label_1156; // 0x481 JumpB
	RemoveActor(var_487_object); // 0x482 Func
	
Label_1156:
	Remove(); // 0x484 ObjFunc
	var_487_object = 0; // 0x486 SetNull
	var_486_object = 0; // 0x487 SetNull
	var_490_int = 1; // 0x488 PushI
	var_485_int = var_485_int + var_490_int; // 0x489 Add2
	goto Label_1146; // 0x48a Jump
	
Label_1163:
	clear(); // 0x48b TObjFunc
	return 8; // 0x48d Return
}


func_1528(var_307_float, var_308_float)
{
	var_310_bool = 0; var_311_float = 0; var_312_float = 0; var_313_bool = 0; var_314_float = 0; var_315_float = 0; // 0x5f8 PushV
	var_313_bool = var_308_float > var_307_float; // 0x5f9 GT2
	var_316_int = var_308_float - var_307_float; // 0x5fa Sub
	var_314_float = var_316_int / var_316_int; // 0x5fb Div2
	
Label_1532:
	var_317_bool = var_313_bool; // 0x5fc Push
	if(var_317_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_318_bool = var_307_float < var_308_float; // 0x5fe LT
	goto Label_1537; // 0x5ff Jump
	
Label_1537:
	if(var_318_bool == 0) goto Label_1545; // 0x601 JumpB
	ModDarkenLevel(var_307_float); // 0x602 Func
	sync(var_315_float); // 0x604 Func
	var_319_float = var_315_float * var_314_float; // 0x606 Mult
	var_307_float = var_307_float + var_319_float; // 0x607 Add2
	goto Label_1532; // 0x608 Jump
	
Label_1545:
	ModDarkenLevel(var_308_float); // 0x609 Func
	return 6; // 0x60b Return
	
Label_1536:
	var_320_bool = var_308_float < var_307_float; // 0x600 LT
}


