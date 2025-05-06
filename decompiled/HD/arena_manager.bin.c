task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_29_object, var_30_object, var_31_object)
{
	var_32_int = 1; // 0xb9 PushI
	if(var_32_int == 0) goto Label_335; // 0xba JumpB
	func_1423(); // 0xbc NEW_2
	var_34_int = 21720; // 0xbe PushI
	var_35_bool = var_31_object == var_34_int; // 0xbf Eq
	if(var_35_bool == 0) goto Label_198; // 0xc0 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xc1 PushV
	var_36_object = var_1_object; // 0xc2 MovT
	var_37_object = var_0_object; // 0xc3 MovT
	func_1590(); // 0xc4 NEW_2
	
Label_198:
	var_39_int = 21723; // 0xc6 PushI
	var_40_bool = var_31_object == var_39_int; // 0xc7 Eq
	if(var_40_bool == 0) goto Label_206; // 0xc8 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xc9 PushV
	var_41_object = var_1_object; // 0xca MovT
	var_42_object = var_0_object; // 0xcb MovT
	func_1590(); // 0xcc NEW_2
	
Label_206:
	var_43_int = 21715; // 0xce PushI
	var_44_bool = var_30_object == var_43_int; // 0xcf Eq
	if(var_44_bool == 0) goto Label_259; // 0xd0 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xd1 PushV
	var_46_object = var_1_object; // 0xd2 MovT
	func_1612(var_46_object); // 0xd3 NEW_2
	if(var_45_bool == 0) goto Label_239; // 0xd5 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xd6 PushV
	var_53_object = var_1_object; // 0xd7 MovT
	var_54_object = var_0_object; // 0xd8 MovT
	func_1584(); // 0xd9 NEW_2
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
	func_1582(var_116_bool); // 0x145 NEW_2
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
	func_1423(); // 0x1ee NEW_2
	var_34_int = 21727; // 0x1f0 PushI
	var_35_bool = var_31_object == var_34_int; // 0x1f1 Eq
	if(var_35_bool == 0) goto Label_509; // 0x1f2 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x1f3 PushV
	var_36_object = var_1_object; // 0x1f4 MovT
	var_37_object = var_0_object; // 0x1f5 MovT
	func_1595(var_37_object); // 0x1f6 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1f8 PushV
	var_60_object = var_1_object; // 0x1f9 MovT
	var_61_object = var_0_object; // 0x1fa MovT
	func_1606(); // 0x1fb NEW_2
	
Label_509:
	var_64_int = 31334; // 0x1fd PushI
	var_65_bool = var_31_object == var_64_int; // 0x1fe Eq
	if(var_65_bool == 0) goto Label_522; // 0x1ff JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x200 PushV
	var_66_object = var_1_object; // 0x201 MovT
	var_67_object = var_0_object; // 0x202 MovT
	func_1595(var_67_object); // 0x203 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x205 PushV
	var_68_object = var_1_object; // 0x206 MovT
	var_69_object = var_0_object; // 0x207 MovT
	func_1606(); // 0x208 NEW_2
	
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
	func_1582(var_96_bool); // 0x223 NEW_2
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
	var_163_int = 1; // 0x255 PushI
	var_164_int = 0; var_165_object = Obj(); // 0x256 PushV
	var_165_object = var_30_object; // 0x257 Mov
	TaskCall(0); // 0x258 TaskCall
	func_0(var_166_object, var_164_int, var_165_object); // 0x259 NEW_2
	TaskReturn(); // 0x25a TaskReturn
	var_237_bool = var_163_int != var_166_object; // 0x25c Neq
	if(var_237_bool == 0) goto Label_607; // 0x25d JumpB
	return 0; // 0x25e Return
	
Label_607:
	var_238_int = 10; // 0x25f PushI
	KillTimer(var_238_int); // 0x260 Func
	var_239_object = Obj(); // 0x262 PushV
	var_239_object = var_30_object; // 0x263 Mov
	TaskCall(5); // 0x264 TaskCall
	func_775(var_240_object, var_241_object, var_242_object, var_243_object, var_244_object, var_245_object, var_246_object, var_247_object, var_248_object, var_249_object, var_250_object, var_251_object, var_252_object, var_253_object, var_254_object, var_255_object, var_239_object); // 0x265 NEW_2
	TaskReturn(); // 0x266 TaskReturn
	var_3_string = 1; // 0x268 TMovB
	var_558_int = 10; // 0x269 PushI
	var_559_float = 0.75; // 0x26a PushF
	SetTimer(var_558_int, var_559_float); // 0x26b Func
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
	func_1641(var_36_bool, var_37_object); // 0x277 NEW_2
	if(var_36_bool == 0) goto Label_645; // 0x279 JumpB
	var_52_bool = GlobalVars[1]; // 0x27a PushGE
	var_53_bool = var_52_bool == 0; // 0x27b Not
	if(var_53_bool == 0) goto Label_644; // 0x27c JumpB
	var_54_object = Obj(); // 0x27d PushV
	var_54_object = var_32_object; // 0x27e Mov
	func_1412(var_54_object); // 0x27f NEW_2
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


func_0(var_0_object, var_164_int, var_165_object)
{
	var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_bool = 0; var_173_int = 0; var_174_bool = 0; // 0x0 PushV
	var_0_object = var_165_object; // 0x1 TMov
	var_175_bool = 0; var_176_object = Obj(); var_177_float = 0; // 0x2 PushV
	var_176_object = var_165_object; // 0x3 Mov
	var_177_float = 110.0; // 0x4 MovF
	func_1174(var_176_object, var_177_float); // 0x5 NEW_2
	var_178_bool = var_175_bool == 0; // 0x7 Not
	if(var_178_bool == 0) goto Label_11; // 0x8 JumpB
	var_164_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_171_object); // 0xb Func
	var_179_int = 0; // 0xd PushV
	func_1576(var_179_int); // 0xe NEW_2
	SetNPCName(var_179_int); // 0x10 ObjFunc
	var_180_int = 0; // 0x12 PushV
	func_1574(var_180_int); // 0x13 NEW_2
	SetNPCDescription(var_180_int); // 0x15 ObjFunc
	var_181_string = ""; // 0x17 PushV
	func_1578(var_181_string); // 0x18 NEW_2
	SetPhoto(var_181_string); // 0x1a ObjFunc
	var_182_string = ""; // 0x1c PushV
	func_1580(var_182_string); // 0x1d NEW_2
	SetPhoto2(var_182_string); // 0x1f ObjFunc
	var_183_int = 0; // 0x21 PushV
	func_1624(var_183_int); // 0x22 NEW_2
	SetPlayerName(var_183_int); // 0x24 ObjFunc
	var_173_int = -1; // 0x26 MovI
	IsOverrideActive(var_172_bool); // 0x27 Func
	var_184_bool = var_172_bool; // 0x29 Push
	if(var_184_bool == 0) goto Label_45; // 0x2a JumpB
	var_164_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_171_object); // 0x2d Func
	var_185_object = Obj(); var_186_object = Obj(); // 0x2f PushV
	var_185_object = var_165_object; // 0x30 Mov
	var_186_object = var_171_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_187_object, var_188_object, var_189_string, var_190_bool, var_185_object, var_186_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_174_bool); // 0x36 ObjFunc
	
Label_56:
	var_235_bool = var_174_bool == 0; // 0x38 Not
	if(var_235_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_174_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_236_object = Obj(); // 0x3f PushV
	var_236_object = var_165_object; // 0x40 Mov
	func_1243(); // 0x41 NEW_2
	StopDialog(var_171_object); // 0x43 Func
	GetReturnValue(var_173_int); // 0x45 ObjFunc
	var_164_int = var_173_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_769()
{
	StopGroup0(); // 0x301 Func
	Stop(); // 0x303 Func
	return 0; // 0x305 Return
}


func_1412(var_54_object)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); // 0x584 PushV
	GetEyesHeight(var_57_float); // 0x585 ObjFunc
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x587 MovV
	var_59_float = GetByIndex(var_58_cvector, 1); // 0x588 PushE
	var_59_float = var_57_float; // 0x589 Mov
	SetByIndex(var_58_cvector, 1) = var_59_float; // 0x58a PopE
	var_60_string = "head"; // 0x58b PushS
	LookAsync(var_54_object, var_60_string, var_58_cvector); // 0x58c Func
	return 4; // 0x58e Return
}


func_1284(var_547_object)
{
	var_548_int = 0; var_549_int = 0; // 0x504 PushV
	var_550_bool = var_547_object == 0; // 0x505 Not
	if(var_550_bool == 0) goto Label_1288; // 0x506 JumpB
	return 2; // 0x507 Return
	
Label_1288:
	var_551_string = "noaccess"; // 0x508 PushS
	GetProperty(var_551_string, var_549_int); // 0x509 ObjFunc
	var_552_int = 1; // 0x50b PushI
	var_553_bool = var_549_int > var_552_int; // 0x50c GT
	if(var_553_bool == 0) goto Label_1300; // 0x50d JumpB
	var_554_string = "noaccess"; // 0x50e PushS
	var_555_int = 1; // 0x50f PushI
	var_556_int = var_549_int - var_555_int; // 0x510 Sub
	SetProperty(var_554_string, var_556_int); // 0x511 ObjFunc
	goto Label_1303; // 0x513 Jump
	
Label_1303:
	return 2; // 0x517 Return
	
Label_1300:
	var_557_string = "noaccess"; // 0x514 PushS
	RemoveProperty(var_557_string); // 0x515 ObjFunc
}


func_774()
{
	return 0; // 0x306 Return
}


func_775(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_object, var_239_object)
{
	var_256_cvector = CVector(0,0,0); var_257_int = 0; var_258_object = Obj(); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_bool = 0; var_264_object = Obj(); var_265_bool = 0; var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_int = 0; var_270_object = Obj(); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); // 0x307 PushV
	var_280_object = Obj(); // 0x308 PushV
	func_1444(var_280_object); // 0x309 NEW_2
	var_15_object = var_280_object; // 0x30a TMov
	var_283_object = Obj(); // 0x30c PushV
	var_283_object = var_239_object; // 0x30d Mov
	func_1261(var_283_object); // 0x30e NEW_2
	func_1468(); // 0x311 NEW_2
	func_1480(); // 0x314 NEW_2
	var_304_cvector = GlobalVars[0]; // 0x316 PushGE
	var_268_cvector = var_304_cvector; // 0x317 Mov
	LockCamera(); // 0x319 Func
	var_305_float = GetByIndex(var_268_cvector, 0); // 0x31b PushE
	var_306_int = -var_305_float; // 0x31c Neg
	var_307_float = GetByIndex(var_268_cvector, 2); // 0x31d PushE
	var_308_int = -var_307_float; // 0x31e Neg
	RotateAsync(var_306_int, var_308_int); // 0x31f Func
	var_309_float = 0; var_310_float = 0; var_311_float = 0; // 0x321 PushV
	var_309_float = 0; // 0x322 MovI
	var_310_float = 1; // 0x323 MovI
	var_311_float = 0.75; // 0x324 MovF
	func_1530(var_310_float, var_311_float); // 0x325 NEW_2
	CreateIntVector(var_279_cvector); // 0x327 Func
	CreateIntVector(var_277_bool); // 0x329 Func
	CreateIntVector(var_275_bool); // 0x32b Func
	CreateIntVector(var_273_cvector); // 0x32d Func
	CreateIntVector(var_271_cvector); // 0x32f Func
	var_323_object = Obj(); var_324_object = Obj(); var_325_int = 0; var_326_object = Obj(); // 0x331 PushV
	var_324_object = var_239_object; // 0x332 Mov
	var_325_int = 0; // 0x333 MovI
	var_326_object = var_1_object; // 0x334 MovT
	func_1335(var_325_int, var_326_object); // 0x335 NEW_2
	var_0_object = var_323_object; // 0x336 TMov
	var_340_object = Obj(); var_341_object = Obj(); var_342_int = 0; var_343_object = Obj(); // 0x338 PushV
	var_341_object = var_239_object; // 0x339 Mov
	var_342_int = 1; // 0x33a MovI
	var_343_object = var_3_string; // 0x33b MovT
	func_1335(var_342_int, var_343_object); // 0x33c NEW_2
	var_2_object = var_340_object; // 0x33d TMov
	var_344_object = Obj(); var_345_object = Obj(); var_346_int = 0; var_347_object = Obj(); // 0x33f PushV
	var_345_object = var_239_object; // 0x340 Mov
	var_346_int = 2; // 0x341 MovI
	var_347_object = var_5_object; // 0x342 MovT
	func_1335(var_346_int, var_347_object); // 0x343 NEW_2
	var_4_bool = var_344_object; // 0x344 TMov
	var_348_object = Obj(); var_349_object = Obj(); var_350_int = 0; var_351_object = Obj(); // 0x346 PushV
	var_349_object = var_239_object; // 0x347 Mov
	var_350_int = 3; // 0x348 MovI
	var_351_object = var_7_object; // 0x349 MovT
	func_1335(var_350_int, var_351_object); // 0x34a NEW_2
	var_6_object = var_348_object; // 0x34b TMov
	var_352_object = Obj(); var_353_object = Obj(); var_354_int = 0; var_355_object = Obj(); // 0x34d PushV
	var_353_object = var_239_object; // 0x34e Mov
	var_354_int = 4; // 0x34f MovI
	var_355_object = var_9_bool; // 0x350 MovT
	func_1335(var_354_int, var_355_object); // 0x351 NEW_2
	var_8_string = var_352_object; // 0x352 TMov
	var_356_object = Obj(); var_357_object = Obj(); var_358_int = 0; // 0x354 PushV
	var_357_object = var_239_object; // 0x355 Mov
	var_358_int = 0; // 0x356 MovI
	func_1360(var_357_object, var_358_int); // 0x357 NEW_2
	var_10_cvector = var_356_object; // 0x358 TMov
	var_370_object = Obj(); var_371_object = Obj(); var_372_int = 0; // 0x35a PushV
	var_371_object = var_239_object; // 0x35b Mov
	var_372_int = 1; // 0x35c MovI
	func_1360(var_371_object, var_372_int); // 0x35d NEW_2
	var_11_cvector = var_370_object; // 0x35e TMov
	var_373_object = Obj(); var_374_object = Obj(); var_375_int = 0; // 0x360 PushV
	var_374_object = var_239_object; // 0x361 Mov
	var_375_int = 2; // 0x362 MovI
	func_1360(var_374_object, var_375_int); // 0x363 NEW_2
	var_12_bool = var_373_object; // 0x364 TMov
	var_376_object = Obj(); var_377_object = Obj(); var_378_int = 0; // 0x366 PushV
	var_377_object = var_239_object; // 0x367 Mov
	var_378_int = 3; // 0x368 MovI
	func_1360(var_377_object, var_378_int); // 0x369 NEW_2
	var_13_bool = var_376_object; // 0x36a TMov
	var_379_object = Obj(); var_380_object = Obj(); var_381_int = 0; // 0x36c PushV
	var_380_object = var_239_object; // 0x36d Mov
	var_381_int = 4; // 0x36e MovI
	func_1360(var_380_object, var_381_int); // 0x36f NEW_2
	var_14_object = var_379_object; // 0x370 TMov
	var_382_object = Obj(); // 0x372 PushV
	var_382_object = var_239_object; // 0x373 Mov
	func_1080(); // 0x374 NEW_2
	var_269_int = 1; // 0x376 MovI
	
Label_887:
	var_413_int = 5; // 0x377 PushI
	var_414_bool = var_269_int < var_413_int; // 0x378 LT
	if(var_414_bool == 0) goto Label_895; // 0x379 JumpB
	RemoveAllItems(var_269_int); // 0x37a ObjFunc
	var_415_int = 1; // 0x37c PushI
	var_269_int = var_269_int + var_415_int; // 0x37d Add2
	goto Label_887; // 0x37e Jump
	
Label_895:
	SelectWeapon(); // 0x37f ObjFunc
	GetScene(var_270_object); // 0x381 Func
	var_416_string = "pt_arena_player"; // 0x383 PushS
	GetLocator(var_416_string, var_275_bool, var_271_cvector, var_272_cvector); // 0x384 ObjFunc
	var_417_string = "pt_arena_enemy"; // 0x386 PushS
	GetLocator(var_417_string, var_275_bool, var_273_cvector, var_274_cvector); // 0x387 ObjFunc
	Teleport(var_239_object, var_270_object, var_271_cvector, var_272_cvector); // 0x389 Func
	var_418_string = "pers_butcher"; // 0x38b PushS
	var_419_string = "arena_fighter.xml"; // 0x38c PushS
	AddActor(var_276_object, var_418_string, var_270_object, var_273_cvector, var_274_cvector, var_419_string); // 0x38d Func
	var_420_object = Obj(); var_421_string = ""; var_422_string = ""; var_423_string = ""; // 0x38f PushV
	var_420_object = var_270_object; // 0x390 Mov
	var_421_string = "pers_worker"; // 0x391 MovS
	var_422_string = "arena_spectator_worker.xml"; // 0x392 MovS
	var_423_string = "pt_arena_spectator1"; // 0x393 MovS
	func_1125(var_421_string, var_422_string, var_423_string); // 0x394 NEW_2
	var_436_object = Obj(); var_437_string = ""; var_438_string = ""; var_439_string = ""; // 0x396 PushV
	var_436_object = var_270_object; // 0x397 Mov
	var_437_string = "pers_worker"; // 0x398 MovS
	var_438_string = "arena_spectator_worker.xml"; // 0x399 MovS
	var_439_string = "pt_arena_spectator2"; // 0x39a MovS
	func_1125(var_437_string, var_438_string, var_439_string); // 0x39b NEW_2
	var_440_object = Obj(); var_441_string = ""; var_442_string = ""; var_443_string = ""; // 0x39d PushV
	var_440_object = var_270_object; // 0x39e Mov
	var_441_string = "pers_unosha"; // 0x39f MovS
	var_442_string = "arena_spectator_unosha.xml"; // 0x3a0 MovS
	var_443_string = "pt_arena_spectator3"; // 0x3a1 MovS
	func_1125(var_441_string, var_442_string, var_443_string); // 0x3a2 NEW_2
	var_444_object = Obj(); var_445_string = ""; var_446_string = ""; var_447_string = ""; // 0x3a4 PushV
	var_444_object = var_270_object; // 0x3a5 Mov
	var_445_string = "pers_unosha"; // 0x3a6 MovS
	var_446_string = "arena_spectator_unosha.xml"; // 0x3a7 MovS
	var_447_string = "pt_arena_spectator4"; // 0x3a8 MovS
	func_1125(var_445_string, var_446_string, var_447_string); // 0x3a9 NEW_2
	var_448_object = Obj(); var_449_string = ""; var_450_string = ""; var_451_string = ""; // 0x3ab PushV
	var_448_object = var_270_object; // 0x3ac Mov
	var_449_string = "pers_unosha"; // 0x3ad MovS
	var_450_string = "arena_spectator_unosha2.xml"; // 0x3ae MovS
	var_451_string = "pt_arena_spectator5"; // 0x3af MovS
	func_1125(var_449_string, var_450_string, var_451_string); // 0x3b0 NEW_2
	var_452_object = Obj(); var_453_string = ""; var_454_string = ""; var_455_string = ""; // 0x3b2 PushV
	var_452_object = var_270_object; // 0x3b3 Mov
	var_453_string = "pers_dohodyaga"; // 0x3b4 MovS
	var_454_string = "arena_spectator_dohodyaga.xml"; // 0x3b5 MovS
	var_455_string = "pt_arena_spectator6"; // 0x3b6 MovS
	func_1125(var_453_string, var_454_string, var_455_string); // 0x3b7 NEW_2
	var_456_object = Obj(); var_457_string = ""; var_458_string = ""; var_459_string = ""; // 0x3b9 PushV
	var_456_object = var_270_object; // 0x3ba Mov
	var_457_string = "pers_boy"; // 0x3bb MovS
	var_458_string = "arena_spectator_boy.xml"; // 0x3bc MovS
	var_459_string = "pt_arena_spectator7"; // 0x3bd MovS
	func_1125(var_457_string, var_458_string, var_459_string); // 0x3be NEW_2
	var_460_float = GetByIndex(var_268_cvector, 0); // 0x3c0 PushE
	var_461_int = -var_460_float; // 0x3c1 Neg
	var_462_float = GetByIndex(var_268_cvector, 2); // 0x3c2 PushE
	var_463_int = -var_462_float; // 0x3c3 Neg
	Rotate(var_461_int, var_463_int); // 0x3c4 Func
	var_464_object = Obj(); // 0x3c6 PushV
	var_464_object = var_239_object; // 0x3c7 Mov
	func_1412(var_464_object); // 0x3c8 NEW_2
	var_471_float = 0; var_472_float = 0; var_473_float = 0; // 0x3ca PushV
	var_471_float = 1; // 0x3cb MovI
	var_472_float = 0; // 0x3cc MovI
	var_473_float = 0.75; // 0x3cd MovF
	func_1530(var_472_float, var_473_float); // 0x3ce NEW_2
	UnlockCamera(); // 0x3d0 Func
	
Label_978:
	var_474_int = 1; // 0x3d2 PushI
	Sleep(var_474_int); // 0x3d3 Func
	var_475_bool = var_239_object != 0; // 0x3d5 NullNeq
	if(var_475_bool == 0) goto Label_988; // 0x3d6 JumpB
	IsDead(var_277_bool); // 0x3d7 ObjFunc
	var_476_bool = var_277_bool; // 0x3d9 Push
	if(var_476_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_989; // 0x3db Jump
	
Label_989:
	LockCamera(); // 0x3dd Func
	var_477_float = GetByIndex(var_268_cvector, 0); // 0x3df PushE
	var_478_float = GetByIndex(var_268_cvector, 2); // 0x3e0 PushE
	RotateAsync(var_477_float, var_478_float); // 0x3e1 Func
	var_479_float = 0; var_480_float = 0; var_481_float = 0; // 0x3e3 PushV
	var_479_float = 0; // 0x3e4 MovI
	var_480_float = 1; // 0x3e5 MovI
	var_481_float = 0.75; // 0x3e6 MovF
	func_1530(var_480_float, var_481_float); // 0x3e7 NEW_2
	RemoveActor(var_276_object); // 0x3e9 Func
	func_1142(); // 0x3ec NEW_2
	var_493_object = Obj(); var_494_int = 0; var_495_object = Obj(); var_496_object = Obj(); var_497_object = Obj(); // 0x3ee PushV
	var_493_object = var_239_object; // 0x3ef Mov
	var_494_int = 0; // 0x3f0 MovI
	var_495_object = var_0_object; // 0x3f1 MovT
	var_496_object = var_1_object; // 0x3f2 MovT
	var_497_object = var_10_cvector; // 0x3f3 MovT
	func_1380(var_497_object); // 0x3f4 NEW_2
	var_517_object = Obj(); var_518_int = 0; var_519_object = Obj(); var_520_object = Obj(); var_521_object = Obj(); // 0x3f6 PushV
	var_517_object = var_239_object; // 0x3f7 Mov
	var_518_int = 1; // 0x3f8 MovI
	var_519_object = var_2_object; // 0x3f9 MovT
	var_520_object = var_3_string; // 0x3fa MovT
	var_521_object = var_11_cvector; // 0x3fb MovT
	func_1380(var_521_object); // 0x3fc NEW_2
	var_522_object = Obj(); var_523_int = 0; var_524_object = Obj(); var_525_object = Obj(); var_526_object = Obj(); // 0x3fe PushV
	var_522_object = var_239_object; // 0x3ff Mov
	var_523_int = 2; // 0x400 MovI
	var_524_object = var_4_bool; // 0x401 MovT
	var_525_object = var_5_object; // 0x402 MovT
	var_526_object = var_12_bool; // 0x403 MovT
	func_1380(var_526_object); // 0x404 NEW_2
	var_527_object = Obj(); var_528_int = 0; var_529_object = Obj(); var_530_object = Obj(); var_531_object = Obj(); // 0x406 PushV
	var_527_object = var_239_object; // 0x407 Mov
	var_528_int = 3; // 0x408 MovI
	var_529_object = var_6_object; // 0x409 MovT
	var_530_object = var_7_object; // 0x40a MovT
	var_531_object = var_13_bool; // 0x40b MovT
	func_1380(var_531_object); // 0x40c NEW_2
	var_532_object = Obj(); var_533_int = 0; var_534_object = Obj(); var_535_object = Obj(); var_536_object = Obj(); // 0x40e PushV
	var_532_object = var_239_object; // 0x40f Mov
	var_533_int = 4; // 0x410 MovI
	var_534_object = var_8_string; // 0x411 MovT
	var_535_object = var_9_bool; // 0x412 MovT
	var_536_object = var_14_object; // 0x413 MovT
	func_1380(var_536_object); // 0x414 NEW_2
	SelectWeapon(); // 0x416 ObjFunc
	var_537_string = "pt_arena_return"; // 0x418 PushS
	GetLocator(var_537_string, var_275_bool, var_278_cvector, var_279_cvector); // 0x419 ObjFunc
	Teleport(var_239_object, var_270_object, var_278_cvector, var_279_cvector); // 0x41b Func
	StopAsync(); // 0x41d Func
	var_538_float = GetByIndex(var_268_cvector, 0); // 0x41f PushE
	var_539_float = GetByIndex(var_268_cvector, 2); // 0x420 PushE
	Rotate(var_538_float, var_539_float); // 0x421 Func
	var_540_float = 0; var_541_float = 0; var_542_float = 0; // 0x423 PushV
	var_540_float = 1; // 0x424 MovI
	var_541_float = 0; // 0x425 MovI
	var_542_float = 0.75; // 0x426 MovF
	func_1530(var_541_float, var_542_float); // 0x427 NEW_2
	UnlockCamera(); // 0x429 Func
	func_1474(); // 0x42c NEW_2
	func_1462(); // 0x42f NEW_2
	var_547_object = Obj(); // 0x431 PushV
	var_547_object = var_239_object; // 0x432 Mov
	func_1284(var_547_object); // 0x433 NEW_2
	return 24; // 0x435 Return
	
Label_988:
	goto Label_978; // 0x3dc Jump
}


func_1550(var_59_string, var_60_int)
{
	var_61_string = ""; var_62_string = ""; // 0x60e PushV
	var_62_string = "idle"; // 0x60f MovS
	var_63_int = var_60_int; // 0x610 Push
	if(var_63_int == 0) goto Label_1555; // 0x611 JumpB
	var_62_string = var_62_string + var_60_int; // 0x612 Add2
	
Label_1555:
	var_59_string = var_62_string; // 0x613 Mov
	return 2; // 0x614 Return
}


func_1423()
{
	var_33_bool = 0; // 0x58f PushV
	func_1582(var_33_bool); // 0x590 NEW_2
	if(var_33_bool == 0) goto Label_1429; // 0x592 JumpB
	lshStopSpeech(); // 0x593 Func
	
Label_1429:
	return 0; // 0x595 Return
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


func_1166(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x48e PushV
	GetPosition(var_46_cvector); // 0x48f Func
	GetPosition(var_47_cvector); // 0x491 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x493 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x494 Or2
	return 6; // 0x495 Return
}


func_1557(var_53_int)
{
	var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x615 PushV
	var_56_int = 0; // 0x616 MovI
	
Label_1559:
	var_58_string = "all"; // 0x617 PushS
	var_59_string = ""; var_60_int = 0; // 0x618 PushV
	var_60_int = var_56_int; // 0x619 Mov
	func_1550(var_59_string, var_60_int); // 0x61a NEW_2
	HasAnimation(var_57_bool, var_58_string, var_59_string); // 0x61c Func
	var_64_bool = var_57_bool == 0; // 0x61e Not
	if(var_64_bool == 0) goto Label_1569; // 0x61f JumpB
	goto Label_1572; // 0x620 Jump
	
Label_1572:
	var_53_int = var_56_int; // 0x624 Mov
	return 4; // 0x625 Return
	
Label_1569:
	var_65_int = 1; // 0x621 PushI
	var_56_int = var_56_int + var_65_int; // 0x622 Add2
	goto Label_1559; // 0x623 Jump
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
	func_1430(var_71_cvector, var_72_cvector); // 0x4b1 NEW_2
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
	var_84_bool = 1; // 0x4c1 PushB
	CameraTransit(var_62_cvector, var_60_cvector, var_84_bool); // 0x4c2 Func
	var_85_float = GetByIndex(var_61_cvector, 0); // 0x4c4 PushE
	var_86_float = GetByIndex(var_61_cvector, 2); // 0x4c5 PushE
	Rotate(var_85_float, var_86_float); // 0x4c6 Func
	var_87_bool = 0; // 0x4c8 PushV
	func_1582(var_87_bool); // 0x4c9 NEW_2
	if(var_87_bool == 0) goto Label_1229; // 0x4cb JumpB
	goto Label_1237; // 0x4cc Jump
	
Label_1237:
	CameraWaitForPlayFinish(); // 0x4d5 Func
	ResumeWorld(); // 0x4d7 Func
	var_44_bool = 1; // 0x4d9 MovB
	return 18; // 0x4da Return
	
Label_1229:
	var_88_string = "head"; // 0x4cd PushS
	HasAnimationTrack(var_64_bool, var_88_string); // 0x4ce Func
	var_89_bool = var_64_bool; // 0x4d0 Push
	if(var_89_bool == 0) goto Label_1237; // 0x4d1 JumpB
	var_90_string = "head"; // 0x4d2 PushS
	LookAsyncCamera(var_90_string); // 0x4d3 Func
}


func_1430(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0; // 0x596 PushV
	var_76_int = var_72_cvector | var_72_cvector; // 0x597 Or
	var_75_float = sqrt(var_76_int); // 0x598 Sqrt2
	var_77_float = 0.0; // 0x599 PushF
	var_78_bool = var_75_float < var_77_float; // 0x59a LT
	if(var_78_bool == 0) goto Label_1438; // 0x59b JumpB
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x59c MovV
	return 2; // 0x59d Return
	
Label_1438:
	var_71_cvector = var_72_cvector / var_72_cvector; // 0x59e Div2
	return 2; // 0x59f Return
}


func_664(var_2_object)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x298 PushV
	var_2_object = 1; // 0x299 TMovB
	var_53_int = 0; // 0x29a PushV
	func_1557(var_53_int); // 0x29b NEW_2
	var_51_int = var_53_int; // 0x29c Mov
	var_66_int = var_51_int; // 0x29e Push
	if(var_66_int == 0) goto Label_683; // 0x29f JumpB
	irand(var_52_int, var_51_int); // 0x2a0 Func
	var_67_string = "all"; // 0x2a2 PushS
	var_68_string = ""; var_69_int = 0; // 0x2a3 PushV
	var_69_int = var_52_int; // 0x2a4 Mov
	func_1550(var_68_string, var_69_int); // 0x2a5 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x2a7 Func
	WaitForAnimEnd(); // 0x2a9 Func
	
Label_683:
	var_2_object = 0; // 0x2ab TMovB
	return 4; // 0x2ac Return
}


func_1304(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x518 PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x519 Func
	var_145_bool = var_142_bool; // 0x51b Push
	if(var_145_bool == 0) goto Label_1315; // 0x51c JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x51d Func
	var_146_bool = 0; // 0x51f PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x520 Func
	goto Label_1319; // 0x522 Jump
	
Label_1319:
	return 6; // 0x527 Return
	
Label_1315:
	var_147_string = "Can't find lsh animation : "; // 0x523 PushS
	var_148_int = var_147_string + var_138_string; // 0x524 Add
	Trace(var_148_int); // 0x525 Func
}


func_410(var_0_object, var_1_object, var_2_object, var_3_string, var_105_object, var_106_object)
{
	var_0_object = var_106_object; // 0x19b TMov
	var_1_object = var_105_object; // 0x19c TMov
	var_3_string = 0; // 0x19d TMovB
	var_111_int = 1; // 0x19e PushI
	if(var_111_int == 0) goto Label_438; // 0x19f JumpB
	var_112_string = ""; // 0x1a0 PushV
	var_112_string = "Neutral"; // 0x1a1 MovS
	func_468(var_106_object, var_112_string); // 0x1a2 NEW_2
	var_129_int = 520523; // 0x1a4 PushI
	SetMessage(var_129_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_130_int = 520524; // 0x1a9 PushI
	var_131_int = -1; // 0x1aa PushI
	var_132_int = 21727; // 0x1ab PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1ac TObjFunc
	var_133_int = 529950; // 0x1ae PushI
	var_134_int = -1; // 0x1af PushI
	var_135_int = 31334; // 0x1b0 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x1b1 TObjFunc
	goto Label_438; // 0x1b3 Jump
	
Label_438:
	var_136_bool = 0; // 0x1b6 PushV
	func_1582(var_136_bool); // 0x1b7 NEW_2
	if(var_136_bool == 0) goto Label_453; // 0x1b9 JumpB
	
Label_442:
	lshWaitForAnimEnd(); // 0x1ba Func
	var_137_string = var_3_string; // 0x1bc PushT
	if(var_137_string == 0) goto Label_447; // 0x1bd JumpB
	goto Label_452; // 0x1be Jump
	
Label_452:
	goto Label_467; // 0x1c4 Jump
	
Label_467:
	return 0; // 0x1d3 Return
	
Label_447:
	var_138_string = ""; // 0x1bf PushV
	var_138_string = var_2_object; // 0x1c0 MovT
	func_1304(var_138_string); // 0x1c1 NEW_2
	goto Label_442; // 0x1c3 Jump
	
Label_453:
	var_149_string = "all"; // 0x1c5 PushS
	var_150_string = "idle"; // 0x1c6 PushS
	PlayAnimation(var_149_string, var_150_string); // 0x1c7 Func
	
Label_457:
	WaitForAnimEnd(); // 0x1c9 Func
	var_151_string = var_3_string; // 0x1cb PushT
	if(var_151_string == 0) goto Label_462; // 0x1cc JumpB
	goto Label_467; // 0x1cd Jump
	
Label_462:
	var_152_string = "all"; // 0x1ce PushS
	var_153_string = "idle"; // 0x1cf PushS
	PlayAnimation(var_152_string, var_153_string); // 0x1d0 Func
	goto Label_457; // 0x1d2 Jump
}


func_1440(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x5a0 PushV
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x5a1 Sub2
	var_70_float = var_74_cvector | var_74_cvector; // 0x5a2 Or2
	return 2; // 0x5a3 Return
}


func_162(var_2_object, var_204_string)
{
	var_205_bool = 0; // 0xa3 PushV
	func_1582(var_205_bool); // 0xa4 NEW_2
	var_206_bool = var_205_bool == 0; // 0xa6 Not
	if(var_206_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_207_bool = var_204_string == var_2_object; // 0xa9 Eq
	if(var_207_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_208_string = ""; var_209_bool = 0; // 0xac PushV
	var_208_string = var_204_string; // 0xad Mov
	var_210_string = ""; // 0xae PushS
	var_211_bool = var_204_string == var_210_string; // 0xaf Eq
	if(var_211_bool == 0) goto Label_179; // 0xb0 JumpB
	var_209_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_1320(var_208_string, var_209_bool); // 0xb4 NEW_2
	var_2_object = var_204_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_209_bool = 1; // 0xb3 MovB
}


func_1444(var_280_object)
{
	var_281_object = Obj(); var_282_object = Obj(); // 0x5a4 PushV
	CreateObjectVector(var_282_object); // 0x5a5 Func
	var_280_object = var_282_object; // 0x5a7 Mov
	return 2; // 0x5a8 Return
}


func_1574(var_93_int)
{
	var_93_int = 521048; // 0x626 MovI
	return 0; // 0x627 Return
}


func_1576(var_92_int)
{
	var_92_int = 521047; // 0x628 MovI
	return 0; // 0x629 Return
}


func_1320(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x528 PushV
	lshHasAnimation(var_123_bool, var_116_string); // 0x529 Func
	var_126_bool = var_123_bool; // 0x52b Push
	if(var_126_bool == 0) goto Label_1330; // 0x52c JumpB
	lshGetAnimTimes(var_116_string, var_124_float, var_125_float); // 0x52d Func
	lshPlayAnimation(var_124_float, var_125_float, var_117_bool); // 0x52f Func
	goto Label_1334; // 0x531 Jump
	
Label_1334:
	return 6; // 0x536 Return
	
Label_1330:
	var_127_string = "Can't find lsh animation : "; // 0x532 PushS
	var_128_int = var_127_string + var_116_string; // 0x533 Add
	Trace(var_128_int); // 0x534 Func
}


func_1578(var_94_string)
{
	var_94_string = "ui/NPC_Morlok.png"; // 0x62a MovS
	return 0; // 0x62b Return
}


func_1450(var_194_int, var_195_string)
{
	var_196_int = 0; var_197_int = 0; // 0x5aa PushV
	GetVariable(var_195_string, var_197_int); // 0x5ab Func
	var_194_int = var_197_int; // 0x5ad Mov
	return 2; // 0x5ae Return
}


func_1580(var_95_string)
{
	var_95_string = "ui/NPC_Morlok_b.png"; // 0x62c MovS
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
	func_1440(var_70_float, var_71_cvector, var_72_cvector); // 0x2ca NEW_2
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


func_1582(var_87_bool)
{
	var_87_bool = 0; // 0x62e MovB
	return 0; // 0x62f Return
}


func_1455(var_297_string, var_298_int)
{
	var_299_int = 0; var_300_int = 0; // 0x5af PushV
	GetVariable(var_297_string, var_300_int); // 0x5b0 Func
	var_301_int = var_300_int + var_298_int; // 0x5b2 Add
	SetVariable(var_297_string, var_301_int); // 0x5b3 Func
	return 2; // 0x5b5 Return
}


func_1584()
{
	var_202_string = "ooArenaManager1"; // 0x631 PushS
	var_203_int = 1; // 0x632 PushI
	SetVariable(var_202_string, var_203_int); // 0x633 Func
	return 0; // 0x635 Return
}


func_1590()
{
	var_38_int = 1; // 0x637 PushI
	SetReturnValue(var_38_int); // 0x638 ObjFunc
	return 0; // 0x63a Return
}


func_1335(var_323_object, var_325_int)
{
	var_327_object = Obj(); var_328_int = 0; var_329_int = 0; var_330_object = Obj(); var_331_int = 0; var_332_object = Obj(); var_333_int = 0; var_334_int = 0; var_335_object = Obj(); var_336_int = 0; // 0x537 PushV
	var_337_object = Obj(); // 0x538 PushV
	func_1444(var_337_object); // 0x539 NEW_2
	var_332_object = var_337_object; // 0x53a Mov
	GetItemCount(var_333_int, var_325_int); // 0x53c ObjFunc
	var_334_int = 0; // 0x53e MovI
	
Label_1343:
	var_338_bool = var_334_int < var_333_int; // 0x53f LT
	if(var_338_bool == 0) goto Label_1357; // 0x540 JumpB
	GetItem(var_335_object, var_334_int, var_325_int); // 0x541 ObjFunc
	add(var_335_object); // 0x543 ObjFunc
	GetItemAmount(var_336_int, var_334_int, var_325_int); // 0x545 ObjFunc
	add(var_336_int); // 0x547 ObjFunc
	var_335_object = 0; // 0x549 SetNull
	var_339_int = 1; // 0x54a PushI
	var_334_int = var_334_int + var_339_int; // 0x54b Add2
	goto Label_1343; // 0x54c Jump
	
Label_1357:
	var_323_object = var_332_object; // 0x54d Mov
	return 10; // 0x54e Return
}


func_1080()
{
	var_383_int = 0; var_384_int = 0; var_385_object = Obj(); var_386_int = 0; var_387_bool = 0; var_388_int = 0; var_389_bool = 0; var_390_int = 0; var_391_int = 0; var_392_int = 0; var_393_object = Obj(); var_394_int = 0; var_395_bool = 0; var_396_int = 0; var_397_bool = 0; var_398_int = 0; // 0x438 PushV
	var_399_int = 0; // 0x439 PushI
	GetItemCount(var_391_int, var_399_int); // 0x43a ObjFunc
	var_392_int = 0; // 0x43c MovI
	
Label_1085:
	var_400_bool = var_392_int < var_391_int; // 0x43d LT
	if(var_400_bool == 0) goto Label_1124; // 0x43e JumpB
	GetItem(var_393_object, var_392_int); // 0x43f ObjFunc
	GetItemID(var_394_int); // 0x441 ObjFunc
	var_401_string = "Group"; // 0x443 PushS
	HasInvItemProperty(var_395_bool, var_394_int, var_401_string); // 0x444 Func
	var_402_bool = var_395_bool; // 0x446 Push
	if(var_402_bool == 0) goto Label_1110; // 0x447 JumpB
	var_403_string = "Group"; // 0x448 PushS
	GetInvItemProperty(var_396_int, var_394_int, var_403_string); // 0x449 Func
	var_404_int = 0; // 0x44b PushI
	var_405_bool = var_396_int != var_404_int; // 0x44c Neq
	if(var_405_bool == 0) goto Label_1104; // 0x44d JumpB
	goto Label_1121; // 0x44e Jump
	
Label_1121:
	var_406_int = 1; // 0x461 PushI
	var_392_int = var_392_int + var_406_int; // 0x462 Add2
	goto Label_1085; // 0x463 Jump
	
Label_1104:
	var_407_int = 0; // 0x450 PushI
	IsItemSelected(var_397_bool, var_392_int, var_407_int); // 0x451 ObjFunc
	var_408_bool = var_397_bool; // 0x453 Push
	if(var_408_bool == 0) goto Label_1110; // 0x454 JumpB
	goto Label_1121; // 0x455 Jump
	
Label_1110:
	var_409_int = 0; // 0x456 PushI
	GetItemAmount(var_398_int, var_392_int, var_409_int); // 0x457 ObjFunc
	var_410_int = 0; // 0x459 PushI
	RemoveItem(var_392_int, var_398_int, var_410_int); // 0x45a ObjFunc
	var_411_int = -1; // 0x45c PushI
	var_392_int = var_392_int + var_411_int; // 0x45d Add2
	var_412_int = -1; // 0x45e PushI
	var_391_int = var_391_int + var_412_int; // 0x45f Add2
	var_393_object = 0; // 0x460 SetNull
	
Label_1124:
	return 16; // 0x464 Return
}


func_1462()
{
	var_545_string = ""; var_546_int = 0; // 0x5b6 PushV
	var_545_string = "noinv_drop"; // 0x5b7 MovS
	var_546_int = -1; // 0x5b8 MovI
	func_1455(var_545_string, var_546_int); // 0x5b9 NEW_2
	return 0; // 0x5bb Return
}


func_1595(var_36_object)
{
	var_38_string = "blood is given"; // 0x63c PushS
	Trace(var_38_string); // 0x63d Func
	var_39_object = Obj(); var_40_string = ""; var_41_int = 0; // 0x63f PushV
	var_39_object = var_36_object; // 0x640 Mov
	var_40_string = "blood"; // 0x641 MovS
	var_41_int = 1; // 0x642 MovI
	func_1517(var_39_object, var_40_string, var_41_int); // 0x643 NEW_2
	return 0; // 0x645 Return
}


func_1468()
{
	var_297_string = ""; var_298_int = 0; // 0x5bc PushV
	var_297_string = "noinv_drop"; // 0x5bd MovS
	var_298_int = 1; // 0x5be MovI
	func_1455(var_297_string, var_298_int); // 0x5bf NEW_2
	return 0; // 0x5c1 Return
}


func_577(var_32_cvector)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x241 PushV
	GetDirection(var_34_cvector); // 0x242 Func
	var_32_cvector = var_34_cvector; // 0x244 Mov
	return 2; // 0x245 Return
}


func_1474()
{
	var_543_string = ""; var_544_int = 0; // 0x5c2 PushV
	var_543_string = "nouse_container"; // 0x5c3 MovS
	var_544_int = -1; // 0x5c4 MovI
	func_1455(var_543_string, var_544_int); // 0x5c5 NEW_2
	return 0; // 0x5c7 Return
}


func_1606()
{
	var_62_string = "playsound"; // 0x647 PushS
	var_63_string = "giveitem"; // 0x648 PushS
	TriggerWorld(var_62_string, var_63_string); // 0x649 Func
	return 0; // 0x64b Return
}


func_1480()
{
	var_302_string = ""; var_303_int = 0; // 0x5c8 PushV
	var_302_string = "nouse_container"; // 0x5c9 MovS
	var_303_int = 1; // 0x5ca MovI
	func_1455(var_302_string, var_303_int); // 0x5cb NEW_2
	return 0; // 0x5cd Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_185_object, var_186_object)
{
	var_0_object = var_186_object; // 0x4b TMov
	var_1_object = var_185_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_191_int = 1; // 0x4e PushI
	if(var_191_int == 0) goto Label_132; // 0x4f JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x50 PushV
	var_193_object = var_1_object; // 0x51 MovT
	func_1612(var_193_object); // 0x52 NEW_2
	if(var_192_bool == 0) goto Label_110; // 0x54 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x55 PushV
	var_200_object = var_1_object; // 0x56 MovT
	var_201_object = var_0_object; // 0x57 MovT
	func_1584(); // 0x58 NEW_2
	var_204_string = ""; // 0x5a PushV
	var_204_string = "Neutral"; // 0x5b MovS
	func_162(var_186_object, var_204_string); // 0x5c NEW_2
	var_212_int = 520512; // 0x5e PushI
	SetMessage(var_212_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_213_int = 520513; // 0x63 PushI
	var_214_int = 21717; // 0x64 PushI
	var_215_int = 21716; // 0x65 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x66 TObjFunc
	var_216_int = 529946; // 0x68 PushI
	var_217_int = 31329; // 0x69 PushI
	var_218_int = 31328; // 0x6a PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_219_bool = 0; // 0x84 PushV
	func_1582(var_219_bool); // 0x85 NEW_2
	if(var_219_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_220_string = var_3_string; // 0x8a PushT
	if(var_220_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_221_string = ""; // 0x8d PushV
	var_221_string = var_2_object; // 0x8e MovT
	func_1304(var_221_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_222_string = "all"; // 0x93 PushS
	var_223_string = "idle"; // 0x94 PushS
	PlayAnimation(var_222_string, var_223_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_224_string = var_3_string; // 0x99 PushT
	if(var_224_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_225_string = "all"; // 0x9c PushS
	var_226_string = "idle"; // 0x9d PushS
	PlayAnimation(var_225_string, var_226_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_227_string = ""; // 0x6e PushV
	var_227_string = "Neutral"; // 0x6f MovS
	func_162(var_186_object, var_227_string); // 0x70 NEW_2
	var_228_int = 520519; // 0x72 PushI
	SetMessage(var_228_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_229_int = 520520; // 0x77 PushI
	var_230_int = -1; // 0x78 PushI
	var_231_int = 21723; // 0x79 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x7a TObjFunc
	var_232_int = 520521; // 0x7c PushI
	var_233_int = -1; // 0x7d PushI
	var_234_int = 21724; // 0x7e PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_1612(var_192_bool)
{
	var_194_int = 0; var_195_string = ""; // 0x64d PushV
	var_195_string = "ooArenaManager1"; // 0x64e MovS
	func_1450(var_194_int, var_195_string); // 0x64f NEW_2
	var_198_int = 0; // 0x651 PushI
	var_199_bool = var_194_int == var_198_int; // 0x652 Eq
	if(var_199_bool == 0) goto Label_1622; // 0x653 JumpB
	var_192_bool = 1; // 0x654 MovB
	return 0; // 0x655 Return
	
Label_1622:
	var_192_bool = 0; // 0x656 MovB
	return 0; // 0x657 Return
}


func_1486(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5ce PushV
	CreateIntVector(var_58_object); // 0x5cf Func
	add(var_55_int); // 0x5d1 ObjFunc
	add(var_56_int); // 0x5d3 ObjFunc
	var_59_int = 3; // 0x5d5 PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0x5d6 Func
	return 2; // 0x5d8 Return
}


func_336(var_0_object, var_33_int, var_34_object)
{
	var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x150 PushV
	var_0_object = var_34_object; // 0x151 TMov
	var_44_bool = 0; var_45_object = Obj(); var_46_float = 0; // 0x152 PushV
	var_45_object = var_34_object; // 0x153 Mov
	var_46_float = 110.0; // 0x154 MovF
	func_1174(var_45_object, var_46_float); // 0x155 NEW_2
	var_91_bool = var_44_bool == 0; // 0x157 Not
	if(var_91_bool == 0) goto Label_347; // 0x158 JumpB
	var_33_int = -2; // 0x159 MovI
	return 8; // 0x15a Return
	
Label_347:
	CreateDialog(var_40_object); // 0x15b Func
	var_92_int = 0; // 0x15d PushV
	func_1576(var_92_int); // 0x15e NEW_2
	SetNPCName(var_92_int); // 0x160 ObjFunc
	var_93_int = 0; // 0x162 PushV
	func_1574(var_93_int); // 0x163 NEW_2
	SetNPCDescription(var_93_int); // 0x165 ObjFunc
	var_94_string = ""; // 0x167 PushV
	func_1578(var_94_string); // 0x168 NEW_2
	SetPhoto(var_94_string); // 0x16a ObjFunc
	var_95_string = ""; // 0x16c PushV
	func_1580(var_95_string); // 0x16d NEW_2
	SetPhoto2(var_95_string); // 0x16f ObjFunc
	var_96_int = 0; // 0x171 PushV
	func_1624(var_96_int); // 0x172 NEW_2
	SetPlayerName(var_96_int); // 0x174 ObjFunc
	var_42_int = -1; // 0x176 MovI
	IsOverrideActive(var_41_bool); // 0x177 Func
	var_104_bool = var_41_bool; // 0x179 Push
	if(var_104_bool == 0) goto Label_381; // 0x17a JumpB
	var_33_int = -2; // 0x17b MovI
	return 8; // 0x17c Return
	
Label_381:
	DoDialog(var_40_object); // 0x17d Func
	var_105_object = Obj(); var_106_object = Obj(); // 0x17f PushV
	var_105_object = var_34_object; // 0x180 Mov
	var_106_object = var_40_object; // 0x181 Mov
	TaskCall(3); // 0x182 TaskCall
	func_410(var_107_object, var_108_object, var_109_string, var_110_bool, var_105_object, var_106_object); // 0x183 NEW_2
	TaskReturn(); // 0x184 TaskReturn
	IsDialogEnd(var_43_bool); // 0x186 ObjFunc
	
Label_392:
	var_154_bool = var_43_bool == 0; // 0x188 Not
	if(var_154_bool == 0) goto Label_399; // 0x189 JumpB
	sync(); // 0x18a Func
	IsDialogEnd(var_43_bool); // 0x18c ObjFunc
	goto Label_392; // 0x18e Jump
	
Label_399:
	var_155_object = Obj(); // 0x18f PushV
	var_155_object = var_34_object; // 0x190 Mov
	func_1243(); // 0x191 NEW_2
	StopDialog(var_40_object); // 0x193 Func
	GetReturnValue(var_42_int); // 0x195 ObjFunc
	var_33_int = var_42_int; // 0x197 Mov
	return 8; // 0x198 Return
}


func_1360(var_356_object, var_358_int)
{
	var_359_object = Obj(); var_360_int = 0; var_361_int = 0; var_362_bool = 0; var_363_object = Obj(); var_364_int = 0; var_365_int = 0; var_366_bool = 0; // 0x550 PushV
	CreateIntVector(var_363_object); // 0x551 Func
	GetItemCount(var_364_int, var_358_int); // 0x553 ObjFunc
	var_365_int = 0; // 0x555 MovI
	
Label_1366:
	var_367_bool = var_365_int < var_364_int; // 0x556 LT
	if(var_367_bool == 0) goto Label_1377; // 0x557 JumpB
	IsItemSelected(var_366_bool, var_365_int, var_358_int); // 0x558 ObjFunc
	var_368_bool = var_366_bool; // 0x55a Push
	if(var_368_bool == 0) goto Label_1374; // 0x55b JumpB
	add(var_365_int); // 0x55c ObjFunc
	
Label_1374:
	var_369_int = 1; // 0x55e PushI
	var_365_int = var_365_int + var_369_int; // 0x55f Add2
	goto Label_1366; // 0x560 Jump
	
Label_1377:
	var_356_object = var_363_object; // 0x561 Mov
	return 8; // 0x562 Return
}


func_468(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0x1d5 PushV
	func_1582(var_113_bool); // 0x1d6 NEW_2
	var_114_bool = var_113_bool == 0; // 0x1d8 Not
	if(var_114_bool == 0) goto Label_475; // 0x1d9 JumpB
	return 0; // 0x1da Return
	
Label_475:
	var_115_bool = var_112_string == var_2_object; // 0x1db Eq
	if(var_115_bool == 0) goto Label_478; // 0x1dc JumpB
	return 0; // 0x1dd Return
	
Label_478:
	var_116_string = ""; var_117_bool = 0; // 0x1de PushV
	var_116_string = var_112_string; // 0x1df Mov
	var_118_string = ""; // 0x1e0 PushS
	var_119_bool = var_112_string == var_118_string; // 0x1e1 Eq
	if(var_119_bool == 0) goto Label_485; // 0x1e2 JumpB
	var_117_bool = 0; // 0x1e3 MovB
	goto Label_486; // 0x1e4 Jump
	
Label_486:
	func_1320(var_116_string, var_117_bool); // 0x1e6 NEW_2
	var_2_object = var_112_string; // 0x1e8 TMov
	return 0; // 0x1e9 Return
	
Label_485:
	var_117_bool = 1; // 0x1e5 MovB
}


func_1624(var_96_int)
{
	var_97_int = 0; var_98_int = 0; // 0x658 PushV
	var_99_string = "branch"; // 0x659 PushS
	GetVariable(var_99_string, var_98_int); // 0x65a Func
	var_100_int = 0; // 0x65c PushI
	var_101_bool = var_98_int == var_100_int; // 0x65d Eq
	if(var_101_bool == 0) goto Label_1634; // 0x65e JumpB
	var_96_int = 1; // 0x65f MovI
	return 2; // 0x660 Return
	
Label_1634:
	var_102_int = 1; // 0x662 PushI
	var_103_bool = var_98_int == var_102_int; // 0x663 Eq
	if(var_103_bool == 0) goto Label_1639; // 0x664 JumpB
	var_96_int = 2; // 0x665 MovI
	return 2; // 0x666 Return
	
Label_1639:
	var_96_int = 3; // 0x667 MovI
	return 2; // 0x668 Return
}


func_1498(var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; // 0x5da PushV
	GetItemID(var_50_int); // 0x5db ObjFunc
	var_53_string = "Category"; // 0x5dd PushS
	GetInvItemProperty(var_51_int, var_50_int, var_53_string); // 0x5de Func
	AddItem(var_52_bool, var_45_object, var_51_int, var_46_int); // 0x5e0 ObjFunc
	var_54_bool = var_52_bool == 0; // 0x5e2 Not
	if(var_54_bool == 0) goto Label_1511; // 0x5e3 JumpB
	DropItems(var_45_object, var_46_int); // 0x5e4 ObjFunc
	goto Label_1516; // 0x5e6 Jump
	
Label_1516:
	return 6; // 0x5ec Return
	
Label_1511:
	var_55_int = 0; var_56_int = 0; // 0x5e7 PushV
	var_55_int = var_50_int; // 0x5e8 Mov
	var_56_int = var_46_int; // 0x5e9 Mov
	func_1486(var_55_int, var_56_int); // 0x5ea NEW_2
}


func_1243()
{
	var_156_bool = 0; var_157_bool = 0; // 0x4db PushV
	var_158_bool = 1; // 0x4dc PushB
	CameraSwitchToNormal(var_158_bool); // 0x4dd Func
	var_159_bool = 0; // 0x4df PushV
	func_1582(var_159_bool); // 0x4e0 NEW_2
	if(var_159_bool == 0) goto Label_1252; // 0x4e2 JumpB
	goto Label_1260; // 0x4e3 Jump
	
Label_1260:
	return 2; // 0x4ec Return
	
Label_1252:
	var_160_string = "head"; // 0x4e4 PushS
	HasAnimationTrack(var_157_bool, var_160_string); // 0x4e5 Func
	var_161_bool = var_157_bool; // 0x4e7 Push
	if(var_161_bool == 0) goto Label_1260; // 0x4e8 JumpB
	var_162_string = "head"; // 0x4e9 PushS
	UnlookAsync(var_162_string); // 0x4ea Func
}


func_1380(var_494_int)
{
	var_498_int = 0; var_499_int = 0; var_500_object = Obj(); var_501_int = 0; var_502_bool = 0; var_503_int = 0; var_504_int = 0; var_505_int = 0; var_506_int = 0; var_507_object = Obj(); var_508_int = 0; var_509_bool = 0; var_510_int = 0; var_511_int = 0; // 0x564 PushV
	RemoveAllItems(var_494_int); // 0x565 ObjFunc
	size(var_505_int); // 0x567 ObjFunc
	var_506_int = 0; // 0x569 MovI
	
Label_1386:
	var_512_bool = var_506_int < var_505_int; // 0x56a LT
	if(var_512_bool == 0) goto Label_1398; // 0x56b JumpB
	get(var_507_object, var_506_int); // 0x56c ObjFunc
	get(var_508_int, var_506_int); // 0x56e ObjFunc
	AddItem(var_509_bool, var_507_object, var_494_int, var_508_int); // 0x570 ObjFunc
	var_507_object = 0; // 0x572 SetNull
	var_513_int = 1; // 0x573 PushI
	var_506_int = var_506_int + var_513_int; // 0x574 Add2
	goto Label_1386; // 0x575 Jump
	
Label_1398:
	size(var_505_int); // 0x576 ObjFunc
	var_510_int = 0; // 0x578 MovI
	
Label_1401:
	var_514_bool = var_510_int < var_505_int; // 0x579 LT
	if(var_514_bool == 0) goto Label_1411; // 0x57a JumpB
	get(var_511_int, var_510_int); // 0x57b ObjFunc
	var_515_bool = 1; // 0x57d PushB
	SelectItem(var_511_int, var_515_bool, var_494_int); // 0x57e ObjFunc
	var_516_int = 1; // 0x580 PushI
	var_510_int = var_510_int + var_516_int; // 0x581 Add2
	goto Label_1401; // 0x582 Jump
	
Label_1411:
	return 14; // 0x583 Return
}


func_1125(var_421_string, var_422_string, var_423_string)
{
	var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_bool = 0; var_427_object = Obj(); var_428_cvector = CVector(0,0,0); var_429_cvector = CVector(0,0,0); var_430_bool = 0; var_431_object = Obj(); // 0x465 PushV
	GetLocator(var_423_string, var_430_bool, var_428_cvector, var_429_cvector); // 0x466 ObjFunc
	var_432_bool = var_430_bool == 0; // 0x468 Not
	if(var_432_bool == 0) goto Label_1135; // 0x469 JumpB
	var_433_string = "Locator doesn't exist for arena spectator "; // 0x46a PushS
	var_434_int = var_433_string + var_423_string; // 0x46b Add
	Trace(var_434_int); // 0x46c Func
	return 8; // 0x46e Return
	
Label_1135:
	var_435_bool = 1; // 0x46f PushB
	AddStationaryActor(var_431_object, var_428_cvector, var_429_cvector, var_421_string, var_422_string, var_435_bool); // 0x470 ObjFunc
	add(var_431_object); // 0x472 TObjFunc
	return 8; // 0x474 Return
}


func_1641(var_36_bool, var_37_object)
{
	var_38_float = 0; var_39_float = 0; // 0x669 PushV
	var_40_bool = var_37_object == 0; // 0x66a NullEq
	if(var_40_bool == 0) goto Label_1646; // 0x66b JumpB
	var_36_bool = 0; // 0x66c MovB
	return 2; // 0x66d Return
	
Label_1646:
	var_41_float = 0; var_42_object = Obj(); // 0x66e PushV
	var_42_object = var_37_object; // 0x66f Mov
	func_1166(var_42_object); // 0x670 NEW_2
	var_39_float = sqrt(var_41_float); // 0x672 Sqrt2
	var_49_bool = GlobalVars[1]; // 0x673 PushGE
	if(var_49_bool == 0) goto Label_1655; // 0x674 JumpB
	var_50_int = 100; // 0x675 PushI
	var_39_float = var_39_float - var_50_int; // 0x676 Sub2
	
Label_1655:
	var_51_int = 300; // 0x677 PushI
	var_36_bool = var_39_float < var_51_int; // 0x678 LT2
	return 2; // 0x679 Return
}


func_1261(var_283_object)
{
	var_284_bool = 0; var_285_int = 0; var_286_bool = 0; var_287_int = 0; // 0x4ed PushV
	var_288_bool = var_283_object == 0; // 0x4ee Not
	if(var_288_bool == 0) goto Label_1265; // 0x4ef JumpB
	return 4; // 0x4f0 Return
	
Label_1265:
	var_289_string = "noaccess"; // 0x4f1 PushS
	HasProperty(var_289_string, var_286_bool); // 0x4f2 ObjFunc
	var_290_bool = var_286_bool; // 0x4f4 Push
	if(var_290_bool == 0) goto Label_1279; // 0x4f5 JumpB
	var_291_string = "noaccess"; // 0x4f6 PushS
	GetProperty(var_291_string, var_287_int); // 0x4f7 ObjFunc
	var_292_string = "noaccess"; // 0x4f9 PushS
	var_293_int = 1; // 0x4fa PushI
	var_294_int = var_287_int + var_293_int; // 0x4fb Add
	SetProperty(var_292_string, var_294_int); // 0x4fc ObjFunc
	goto Label_1283; // 0x4fe Jump
	
Label_1283:
	return 4; // 0x503 Return
	
Label_1279:
	var_295_string = "noaccess"; // 0x4ff PushS
	var_296_int = 1; // 0x500 PushI
	SetProperty(var_295_string, var_296_int); // 0x501 ObjFunc
}


func_1517(var_39_object, var_40_string, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x5ed PushV
	CreateInvItem(var_43_object); // 0x5ee Func
	SetItemName(var_40_string); // 0x5f0 ObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x5f2 PushV
	var_44_object = var_39_object; // 0x5f3 Mov
	var_45_object = var_43_object; // 0x5f4 Mov
	var_46_int = var_41_int; // 0x5f5 Mov
	func_1498(var_45_object, var_46_int); // 0x5f6 NEW_2
	return 2; // 0x5f8 Return
}


func_1142()
{
	var_482_int = 0; var_483_int = 0; var_484_object = Obj(); var_485_object = Obj(); var_486_int = 0; var_487_int = 0; var_488_object = Obj(); var_489_object = Obj(); // 0x476 PushV
	size(var_486_int); // 0x477 TObjFunc
	var_487_int = 0; // 0x479 MovI
	
Label_1146:
	var_490_bool = var_487_int < var_486_int; // 0x47a LT
	if(var_490_bool == 0) goto Label_1163; // 0x47b JumpB
	get(var_488_object, var_487_int); // 0x47c TObjFunc
	GetActor(var_489_object); // 0x47e ObjFunc
	var_491_bool = var_489_object != 0; // 0x480 NullNeq
	if(var_491_bool == 0) goto Label_1156; // 0x481 JumpB
	RemoveActor(var_489_object); // 0x482 Func
	
Label_1156:
	Remove(); // 0x484 ObjFunc
	var_489_object = 0; // 0x486 SetNull
	var_488_object = 0; // 0x487 SetNull
	var_492_int = 1; // 0x488 PushI
	var_487_int = var_487_int + var_492_int; // 0x489 Add2
	goto Label_1146; // 0x48a Jump
	
Label_1163:
	clear(); // 0x48b TObjFunc
	return 8; // 0x48d Return
}


func_1530(var_309_float, var_310_float)
{
	var_312_bool = 0; var_313_float = 0; var_314_float = 0; var_315_bool = 0; var_316_float = 0; var_317_float = 0; // 0x5fa PushV
	var_315_bool = var_310_float > var_309_float; // 0x5fb GT2
	var_318_int = var_310_float - var_309_float; // 0x5fc Sub
	var_316_float = var_318_int / var_318_int; // 0x5fd Div2
	
Label_1534:
	var_319_bool = var_315_bool; // 0x5fe Push
	if(var_319_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_320_bool = var_309_float < var_310_float; // 0x600 LT
	goto Label_1539; // 0x601 Jump
	
Label_1539:
	if(var_320_bool == 0) goto Label_1547; // 0x603 JumpB
	ModDarkenLevel(var_309_float); // 0x604 Func
	sync(var_317_float); // 0x606 Func
	var_321_float = var_317_float * var_316_float; // 0x608 Mult
	var_309_float = var_309_float + var_321_float; // 0x609 Add2
	goto Label_1534; // 0x60a Jump
	
Label_1547:
	ModDarkenLevel(var_310_float); // 0x60b Func
	return 6; // 0x60d Return
	
Label_1538:
	var_322_bool = var_310_float < var_309_float; // 0x602 LT
}


