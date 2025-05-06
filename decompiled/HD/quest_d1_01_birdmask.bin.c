task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_331; // 0x9c JumpB
	func_582(); // 0x9e NEW_2
	var_10_int = 26207; // 0xa0 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_183; // 0xa2 JumpB
	var_12_string = ""; // 0xa3 PushV
	var_12_string = "Neutral"; // 0xa4 MovS
	func_132(var_7_bool, var_12_string); // 0xa5 NEW_2
	var_29_int = 524883; // 0xa7 PushI
	SetMessage(var_29_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_30_int = 524884; // 0xac PushI
	var_31_int = 26209; // 0xad PushI
	var_32_int = 26208; // 0xae PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xaf TObjFunc
	var_33_int = 524898; // 0xb1 PushI
	var_34_int = 26224; // 0xb2 PushI
	var_35_int = 26223; // 0xb3 PushI
	AddReply(var_33_int, var_34_int, var_35_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_36_int = 26224; // 0xb7 PushI
	var_37_bool = var_6_int == var_36_int; // 0xb8 Eq
	if(var_37_bool == 0) goto Label_201; // 0xb9 JumpB
	var_38_string = ""; // 0xba PushV
	var_38_string = "Neutral"; // 0xbb MovS
	func_132(var_7_bool, var_38_string); // 0xbc NEW_2
	var_39_int = 524899; // 0xbe PushI
	SetMessage(var_39_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_40_int = 524900; // 0xc3 PushI
	var_41_int = 26226; // 0xc4 PushI
	var_42_int = 26225; // 0xc5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_43_int = 26226; // 0xc9 PushI
	var_44_bool = var_6_int == var_43_int; // 0xca Eq
	if(var_44_bool == 0) goto Label_219; // 0xcb JumpB
	var_45_string = ""; // 0xcc PushV
	var_45_string = "Neutral"; // 0xcd MovS
	func_132(var_7_bool, var_45_string); // 0xce NEW_2
	var_46_int = 524901; // 0xd0 PushI
	SetMessage(var_46_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_47_int = 524902; // 0xd5 PushI
	var_48_int = 26209; // 0xd6 PushI
	var_49_int = 26227; // 0xd7 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_50_int = 26209; // 0xdb PushI
	var_51_bool = var_6_int == var_50_int; // 0xdc Eq
	if(var_51_bool == 0) goto Label_242; // 0xdd JumpB
	var_52_string = ""; // 0xde PushV
	var_52_string = "Neutral"; // 0xdf MovS
	func_132(var_7_bool, var_52_string); // 0xe0 NEW_2
	var_53_int = 524885; // 0xe2 PushI
	SetMessage(var_53_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_54_int = 524886; // 0xe7 PushI
	var_55_int = 26211; // 0xe8 PushI
	var_56_int = 26210; // 0xe9 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xea TObjFunc
	var_57_int = 524893; // 0xec PushI
	var_58_int = 26218; // 0xed PushI
	var_59_int = 26217; // 0xee PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_60_int = 26218; // 0xf2 PushI
	var_61_bool = var_6_int == var_60_int; // 0xf3 Eq
	if(var_61_bool == 0) goto Label_260; // 0xf4 JumpB
	var_62_string = ""; // 0xf5 PushV
	var_62_string = "Neutral"; // 0xf6 MovS
	func_132(var_7_bool, var_62_string); // 0xf7 NEW_2
	var_63_int = 524894; // 0xf9 PushI
	SetMessage(var_63_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_64_int = 524895; // 0xfe PushI
	var_65_int = 26211; // 0xff PushI
	var_66_int = 26219; // 0x100 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_67_int = 26211; // 0x104 PushI
	var_68_bool = var_6_int == var_67_int; // 0x105 Eq
	if(var_68_bool == 0) goto Label_278; // 0x106 JumpB
	var_69_string = ""; // 0x107 PushV
	var_69_string = "Neutral"; // 0x108 MovS
	func_132(var_7_bool, var_69_string); // 0x109 NEW_2
	var_70_int = 524887; // 0x10b PushI
	SetMessage(var_70_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_71_int = 524888; // 0x110 PushI
	var_72_int = 26213; // 0x111 PushI
	var_73_int = 26212; // 0x112 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_74_int = 26213; // 0x116 PushI
	var_75_bool = var_6_int == var_74_int; // 0x117 Eq
	if(var_75_bool == 0) goto Label_296; // 0x118 JumpB
	var_76_string = ""; // 0x119 PushV
	var_76_string = "Neutral"; // 0x11a MovS
	func_132(var_7_bool, var_76_string); // 0x11b NEW_2
	var_77_int = 524889; // 0x11d PushI
	SetMessage(var_77_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_78_int = 524890; // 0x122 PushI
	var_79_int = 26215; // 0x123 PushI
	var_80_int = 26214; // 0x124 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_81_int = 26215; // 0x128 PushI
	var_82_bool = var_6_int == var_81_int; // 0x129 Eq
	if(var_82_bool == 0) goto Label_319; // 0x12a JumpB
	var_83_string = ""; // 0x12b PushV
	var_83_string = "Neutral"; // 0x12c MovS
	func_132(var_7_bool, var_83_string); // 0x12d NEW_2
	var_84_int = 524891; // 0x12f PushI
	SetMessage(var_84_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_85_int = 524892; // 0x134 PushI
	var_86_int = -1; // 0x135 PushI
	var_87_int = 26216; // 0x136 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x137 TObjFunc
	var_88_int = 524897; // 0x139 PushI
	var_89_int = -1; // 0x13a PushI
	var_90_int = 26222; // 0x13b PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_3_string = 1; // 0x13f TMovB
	var_91_bool = 0; // 0x140 PushV
	func_643(var_91_bool); // 0x141 NEW_2
	if(var_91_bool == 0) goto Label_327; // 0x143 JumpB
	lshStopAnimation(); // 0x144 Func
	goto Label_329; // 0x146 Jump
	
Label_329:
	return 0; // 0x149 Return
	
Label_327:
	StopAnimation(); // 0x147 Func
	
Label_331:
	return 0; // 0x14b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0; // 0x151 PushV
	var_9_bool = var_0_object == 0; // 0x152 Not
	if(var_9_bool == 0) goto Label_364; // 0x153 JumpB
	func_454(); // 0x155 NEW_2
	var_10_int = 0; var_11_object = Obj(); // 0x157 PushV
	var_11_object = var_6_object; // 0x158 Mov
	TaskCall(0); // 0x159 TaskCall
	func_0(var_12_object, var_10_int, var_11_object); // 0x15a NEW_2
	TaskReturn(); // 0x15b TaskReturn
	var_0_object = 1; // 0x15d TMovB
	var_140_string = "d1q01wmask"; // 0x15e PushS
	GetVariable(var_140_string, var_8_int); // 0x15f Func
	var_141_string = "d1q01bmask"; // 0x161 PushS
	var_142_int = 1; // 0x162 PushI
	SetVariable(var_141_string, var_142_int); // 0x163 Func
	var_143_int = var_8_int; // 0x165 Push
	if(var_143_int == 0) goto Label_364; // 0x166 JumpB
	var_144_bool = 0; var_145_string = ""; var_146_string = ""; // 0x167 PushV
	var_145_string = "quest_d1_01"; // 0x168 MovS
	var_146_string = "remove_masks"; // 0x169 MovS
	func_599(var_144_bool, var_145_string, var_146_string); // 0x16a NEW_2
	
Label_364:
	return 2; // 0x16c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x14c TMovB
	func_365(); // 0x14e NEW_2
	return 0; // 0x150 Return
}


func_0(var_0_object, var_10_int, var_11_object)
{
	var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; // 0x0 PushV
	var_0_object = var_11_object; // 0x1 TMov
	var_21_bool = 0; var_22_object = Obj(); var_23_float = 0; // 0x2 PushV
	var_22_object = var_11_object; // 0x3 Mov
	var_23_float = 130.0; // 0x4 MovF
	func_464(var_22_object, var_23_float); // 0x5 NEW_2
	var_68_bool = var_21_bool == 0; // 0x7 Not
	if(var_68_bool == 0) goto Label_11; // 0x8 JumpB
	var_10_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_17_object); // 0xb Func
	var_69_int = 0; // 0xd PushV
	func_637(var_69_int); // 0xe NEW_2
	SetNPCName(var_69_int); // 0x10 ObjFunc
	var_70_int = 0; // 0x12 PushV
	func_635(var_70_int); // 0x13 NEW_2
	SetNPCDescription(var_70_int); // 0x15 ObjFunc
	var_71_string = ""; // 0x17 PushV
	func_639(var_71_string); // 0x18 NEW_2
	SetPhoto(var_71_string); // 0x1a ObjFunc
	var_72_string = ""; // 0x1c PushV
	func_641(var_72_string); // 0x1d NEW_2
	SetPhoto2(var_72_string); // 0x1f ObjFunc
	var_73_int = 0; // 0x21 PushV
	func_645(var_73_int); // 0x22 NEW_2
	SetPlayerName(var_73_int); // 0x24 ObjFunc
	var_19_int = -1; // 0x26 MovI
	IsOverrideActive(var_18_bool); // 0x27 Func
	var_81_bool = var_18_bool; // 0x29 Push
	if(var_81_bool == 0) goto Label_45; // 0x2a JumpB
	var_10_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_17_object); // 0x2d Func
	var_82_object = Obj(); var_83_object = Obj(); // 0x2f PushV
	var_82_object = var_11_object; // 0x30 Mov
	var_83_object = var_17_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_84_object, var_85_object, var_86_string, var_87_bool, var_82_object, var_83_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_20_bool); // 0x36 ObjFunc
	
Label_56:
	var_131_bool = var_20_bool == 0; // 0x38 Not
	if(var_131_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_20_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_132_object = Obj(); // 0x3f PushV
	var_132_object = var_11_object; // 0x40 Mov
	func_533(); // 0x41 NEW_2
	StopDialog(var_17_object); // 0x43 Func
	GetReturnValue(var_19_int); // 0x45 ObjFunc
	var_10_int = var_19_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_72_string)
{
	var_72_string = "ui/NPC_bmask_b.png"; // 0x281 MovS
	return 0; // 0x282 Return
}


func_643(var_64_bool)
{
	var_64_bool = 0; // 0x283 MovB
	return 0; // 0x284 Return
}


func_132(var_2_object, var_89_string)
{
	var_90_bool = 0; // 0x85 PushV
	func_643(var_90_bool); // 0x86 NEW_2
	var_91_bool = var_90_bool == 0; // 0x88 Not
	if(var_91_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_92_bool = var_89_string == var_2_object; // 0x8b Eq
	if(var_92_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_93_string = ""; var_94_bool = 0; // 0x8e PushV
	var_93_string = var_89_string; // 0x8f Mov
	var_95_string = ""; // 0x90 PushS
	var_96_bool = var_89_string == var_95_string; // 0x91 Eq
	if(var_96_bool == 0) goto Label_149; // 0x92 JumpB
	var_94_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_567(var_93_string, var_94_bool); // 0x96 NEW_2
	var_2_object = var_89_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_94_bool = 1; // 0x95 MovB
}


func_645(var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x285 PushV
	var_76_string = "branch"; // 0x286 PushS
	GetVariable(var_76_string, var_75_int); // 0x287 Func
	var_77_int = 0; // 0x289 PushI
	var_78_bool = var_75_int == var_77_int; // 0x28a Eq
	if(var_78_bool == 0) goto Label_655; // 0x28b JumpB
	var_73_int = 1; // 0x28c MovI
	return 2; // 0x28d Return
	
Label_655:
	var_79_int = 1; // 0x28f PushI
	var_80_bool = var_75_int == var_79_int; // 0x290 Eq
	if(var_80_bool == 0) goto Label_660; // 0x291 JumpB
	var_73_int = 2; // 0x292 MovI
	return 2; // 0x293 Return
	
Label_660:
	var_73_int = 3; // 0x294 MovI
	return 2; // 0x295 Return
}


func_452(var_49_bool)
{
	var_49_bool = 1; // 0x1c4 MovB
	return 0; // 0x1c5 Return
}


func_582()
{
	var_9_bool = 0; // 0x246 PushV
	func_643(var_9_bool); // 0x247 NEW_2
	if(var_9_bool == 0) goto Label_588; // 0x249 JumpB
	lshStopSpeech(); // 0x24a Func
	
Label_588:
	return 0; // 0x24c Return
}


func_454()
{
	StopAnimation(); // 0x1c6 Func
	StopGroup0(); // 0x1c8 Func
	return 0; // 0x1ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_82_object, var_83_object)
{
	var_0_object = var_83_object; // 0x4b TMov
	var_1_object = var_82_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_88_int = 1; // 0x4e PushI
	if(var_88_int == 0) goto Label_102; // 0x4f JumpB
	var_89_string = ""; // 0x50 PushV
	var_89_string = "Neutral"; // 0x51 MovS
	func_132(var_83_object, var_89_string); // 0x52 NEW_2
	var_106_int = 524883; // 0x54 PushI
	SetMessage(var_106_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_107_int = 524884; // 0x59 PushI
	var_108_int = 26209; // 0x5a PushI
	var_109_int = 26208; // 0x5b PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x5c TObjFunc
	var_110_int = 524898; // 0x5e PushI
	var_111_int = 26224; // 0x5f PushI
	var_112_int = 26223; // 0x60 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_113_bool = 0; // 0x66 PushV
	func_643(var_113_bool); // 0x67 NEW_2
	if(var_113_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_114_string = var_3_string; // 0x6c PushT
	if(var_114_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_115_string = ""; // 0x6f PushV
	var_115_string = var_2_object; // 0x70 MovT
	func_551(var_115_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_126_string = "all"; // 0x75 PushS
	var_127_string = "idle"; // 0x76 PushS
	PlayAnimation(var_126_string, var_127_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_128_string = var_3_string; // 0x7b PushT
	if(var_128_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_129_string = "all"; // 0x7e PushS
	var_130_string = "idle"; // 0x7f PushS
	PlayAnimation(var_129_string, var_130_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_459(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1cb PushV
	IsLoaded(var_22_bool); // 0x1cc Func
	var_20_bool = var_22_bool; // 0x1ce Mov
	return 2; // 0x1cf Return
}


func_589(var_48_cvector, var_49_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x24d PushV
	var_53_int = var_49_cvector | var_49_cvector; // 0x24e Or
	var_52_float = sqrt(var_53_int); // 0x24f Sqrt2
	var_54_float = 0.0; // 0x250 PushF
	var_55_bool = var_52_float < var_54_float; // 0x251 LT
	if(var_55_bool == 0) goto Label_597; // 0x252 JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x253 MovV
	return 2; // 0x254 Return
	
Label_597:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x255 Div2
	return 2; // 0x256 Return
}


func_464(var_21_bool, var_23_float)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; // 0x1d0 PushV
	GetPosition(var_34_cvector); // 0x1d1 ObjFunc
	GetEyesHeight(var_33_float); // 0x1d3 ObjFunc
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1d5 PushE
	var_42_float = var_42_float + var_33_float; // 0x1d6 Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1d7 PopE
	GetPosition(var_35_cvector); // 0x1d8 Func
	GetEyesHeight(var_33_float); // 0x1da Func
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x1dc PushE
	var_43_float = var_43_float + var_33_float; // 0x1dd Add2
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x1de PopE
	var_36_cvector = var_34_cvector - var_35_cvector; // 0x1df Sub2
	var_44_float = GetByIndex(var_36_cvector, 1); // 0x1e0 PushE
	var_44_float = 0; // 0x1e1 MovI
	SetByIndex(var_36_cvector, 1) = var_44_float; // 0x1e2 PopE
	var_45_int = var_36_cvector | var_36_cvector; // 0x1e3 Or
	var_46_float = sqrt(var_45_int); // 0x1e4 Sqrt
	var_36_cvector = var_36_cvector / var_36_cvector; // 0x1e5 Div2
	var_37_cvector = -var_36_cvector; // 0x1e6 Neg2
	var_47_float = var_36_cvector * var_23_float; // 0x1e7 Mult
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x1e8 PushV
	var_50_cvector = CVector(0.0, 1.0, 0.0); // 0x1e9 PushVec
	var_49_cvector = var_37_cvector ^ var_50_cvector; // 0x1ea Xor2
	func_589(var_48_cvector, var_49_cvector); // 0x1eb NEW_2
	var_56_int = 25; // 0x1ed PushI
	var_57_float = var_48_cvector * var_56_int; // 0x1ee Mult
	var_58_int = var_47_float + var_57_float; // 0x1ef Add
	var_59_cvector = CVector(0.0, 10.0, 0.0); // 0x1f0 PushVec
	var_38_cvector = var_58_int - var_59_cvector; // 0x1f1 Sub2
	var_39_cvector = var_35_cvector + var_38_cvector; // 0x1f2 Add2
	IsOverrideActive(var_40_bool); // 0x1f3 Func
	var_60_bool = var_40_bool; // 0x1f5 Push
	if(var_60_bool == 0) goto Label_505; // 0x1f6 JumpB
	var_21_bool = 0; // 0x1f7 MovB
	return 18; // 0x1f8 Return
	
Label_505:
	StopWorld(); // 0x1f9 Func
	var_61_bool = 1; // 0x1fb PushB
	CameraTransit(var_39_cvector, var_37_cvector, var_61_bool); // 0x1fc Func
	var_62_float = GetByIndex(var_38_cvector, 0); // 0x1fe PushE
	var_63_float = GetByIndex(var_38_cvector, 2); // 0x1ff PushE
	Rotate(var_62_float, var_63_float); // 0x200 Func
	var_64_bool = 0; // 0x202 PushV
	func_643(var_64_bool); // 0x203 NEW_2
	if(var_64_bool == 0) goto Label_519; // 0x205 JumpB
	goto Label_527; // 0x206 Jump
	
Label_527:
	CameraWaitForPlayFinish(); // 0x20f Func
	ResumeWorld(); // 0x211 Func
	var_21_bool = 1; // 0x213 MovB
	return 18; // 0x214 Return
	
Label_519:
	var_65_string = "head"; // 0x207 PushS
	HasAnimationTrack(var_41_bool, var_65_string); // 0x208 Func
	var_66_bool = var_41_bool; // 0x20a Push
	if(var_66_bool == 0) goto Label_527; // 0x20b JumpB
	var_67_string = "head"; // 0x20c PushS
	LookAsyncCamera(var_67_string); // 0x20d Func
}


func_533()
{
	var_133_bool = 0; var_134_bool = 0; // 0x215 PushV
	var_135_bool = 1; // 0x216 PushB
	CameraSwitchToNormal(var_135_bool); // 0x217 Func
	var_136_bool = 0; // 0x219 PushV
	func_643(var_136_bool); // 0x21a NEW_2
	if(var_136_bool == 0) goto Label_542; // 0x21c JumpB
	goto Label_550; // 0x21d Jump
	
Label_550:
	return 2; // 0x226 Return
	
Label_542:
	var_137_string = "head"; // 0x21e PushS
	HasAnimationTrack(var_134_bool, var_137_string); // 0x21f Func
	var_138_bool = var_134_bool; // 0x221 Push
	if(var_138_bool == 0) goto Label_550; // 0x222 JumpB
	var_139_string = "head"; // 0x223 PushS
	UnlookAsync(var_139_string); // 0x224 Func
}


func_599(var_144_bool, var_145_string, var_146_string)
{
	var_147_object = Obj(); var_148_object = Obj(); // 0x257 PushV
	FindActor(var_148_object, var_145_string); // 0x258 Func
	var_149_bool = var_148_object == 0; // 0x25a NullEq
	if(var_149_bool == 0) goto Label_606; // 0x25b JumpB
	var_144_bool = 0; // 0x25c MovB
	return 2; // 0x25d Return
	
Label_606:
	Trigger(var_148_object, var_146_string); // 0x25e Func
	var_144_bool = 1; // 0x260 MovB
	return 2; // 0x261 Return
}


func_611(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = ""; // 0x263 PushV
	var_33_string = "idle"; // 0x264 MovS
	var_34_int = var_31_int; // 0x265 Push
	if(var_34_int == 0) goto Label_616; // 0x266 JumpB
	var_33_string = var_33_string + var_31_int; // 0x267 Add2
	
Label_616:
	var_30_string = var_33_string; // 0x268 Mov
	return 2; // 0x269 Return
}


func_551(var_115_string)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x227 PushV
	lshHasAnimation(var_119_bool, var_115_string); // 0x228 Func
	var_122_bool = var_119_bool; // 0x22a Push
	if(var_122_bool == 0) goto Label_562; // 0x22b JumpB
	lshGetAnimTimes(var_115_string, var_120_float, var_121_float); // 0x22c Func
	var_123_bool = 0; // 0x22e PushB
	lshPlayAnimation(var_120_float, var_121_float, var_123_bool); // 0x22f Func
	goto Label_566; // 0x231 Jump
	
Label_566:
	return 6; // 0x236 Return
	
Label_562:
	var_124_string = "Can't find lsh animation : "; // 0x232 PushS
	var_125_int = var_124_string + var_115_string; // 0x233 Add
	Trace(var_125_int); // 0x234 Func
}


func_618(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x26a PushV
	var_27_int = 0; // 0x26b MovI
	
Label_620:
	var_29_string = "all"; // 0x26c PushS
	var_30_string = ""; var_31_int = 0; // 0x26d PushV
	var_31_int = var_27_int; // 0x26e Mov
	func_611(var_30_string, var_31_int); // 0x26f NEW_2
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0x271 Func
	var_35_bool = var_28_bool == 0; // 0x273 Not
	if(var_35_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_633; // 0x275 Jump
	
Label_633:
	var_24_int = var_27_int; // 0x279 Mov
	return 4; // 0x27a Return
	
Label_630:
	var_36_int = 1; // 0x276 PushI
	var_27_int = var_27_int + var_36_int; // 0x277 Add2
	goto Label_620; // 0x278 Jump
}


func_365()
{
	
Label_365:
	func_373(); // 0x16e NEW_2
	var_59_int = 3; // 0x170 PushI
	Sleep(var_59_int); // 0x171 Func
	goto Label_365; // 0x173 Jump
}


func_373()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x175 PushV
	WaitForAnimEnd(); // 0x176 Func
	var_20_bool = 0; // 0x178 PushV
	func_459(var_20_bool); // 0x179 NEW_2
	var_23_bool = var_20_bool == 0; // 0x17b Not
	if(var_23_bool == 0) goto Label_382; // 0x17c JumpB
	return 14; // 0x17d Return
	
Label_382:
	var_24_int = 0; // 0x17e PushV
	func_618(var_24_int); // 0x17f NEW_2
	var_13_int = var_24_int; // 0x180 Mov
	var_14_int = 0; // 0x182 MovI
	
Label_387:
	var_37_bool = 0; // 0x183 PushV
	var_37_bool = 0; // 0x184 MovB
	var_38_int = 5; // 0x185 PushI
	var_39_bool = var_14_int < var_38_int; // 0x186 LT
	if(var_39_bool == 0) goto Label_397; // 0x187 JumpB
	var_40_bool = 0; // 0x188 PushV
	func_459(var_40_bool); // 0x189 NEW_2
	if(var_40_bool == 0) goto Label_397; // 0x18b JumpB
	var_37_bool = 1; // 0x18c MovB
	
Label_397:
	if(var_37_bool == 0) goto Label_449; // 0x18d JumpB
	var_41_int = 3; // 0x18e PushI
	irand(var_15_int, var_41_int); // 0x18f Func
	var_42_int = 0; // 0x191 PushI
	var_43_bool = var_15_int == var_42_int; // 0x192 Eq
	if(var_43_bool == 0) goto Label_421; // 0x193 JumpB
	var_44_int = var_13_int; // 0x194 Push
	if(var_44_int == 0) goto Label_420; // 0x195 JumpB
	irand(var_16_int, var_13_int); // 0x196 Func
	var_45_string = "all"; // 0x198 PushS
	var_46_string = ""; var_47_int = 0; // 0x199 PushV
	var_47_int = var_16_int; // 0x19a Mov
	func_611(var_46_string, var_47_int); // 0x19b NEW_2
	PlayAnimation(var_45_string, var_46_string); // 0x19d Func
	WaitForAnimEnd(var_17_bool); // 0x19f Func
	var_48_bool = var_17_bool == 0; // 0x1a1 Not
	if(var_48_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_449; // 0x1a3 Jump
	
Label_449:
	ResetAAS(); // 0x1c1 Func
	return 14; // 0x1c3 Return
	
Label_420:
	goto Label_438; // 0x1a4 Jump
	
Label_438:
	var_49_bool = 0; // 0x1b6 PushV
	func_452(var_49_bool); // 0x1b7 NEW_2
	var_50_bool = var_49_bool == 0; // 0x1b9 Not
	if(var_50_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_449; // 0x1bb Jump
	
Label_444:
	ResetAAS(); // 0x1bc Func
	var_51_int = 1; // 0x1be PushI
	var_14_int = var_14_int + var_51_int; // 0x1bf Add2
	goto Label_387; // 0x1c0 Jump
	
Label_421:
	var_52_int = 1; // 0x1a5 PushI
	var_53_bool = var_15_int == var_52_int; // 0x1a6 Eq
	if(var_53_bool == 0) goto Label_435; // 0x1a7 JumpB
	var_54_int = 4; // 0x1a8 PushI
	rand(var_18_float, var_54_int); // 0x1a9 Func
	var_55_int = 1; // 0x1ab PushI
	var_56_int = var_18_float + var_55_int; // 0x1ac Add
	Sleep(var_56_int, var_19_bool); // 0x1ad Func
	var_57_bool = var_19_bool == 0; // 0x1af Not
	if(var_57_bool == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_449; // 0x1b1 Jump
	
Label_434:
	goto Label_438; // 0x1b2 Jump
	
Label_435:
	var_58_int = var_14_int; // 0x1b3 Push
	if(var_58_int == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_449; // 0x1b5 Jump
}


func_567(var_93_string, var_94_bool)
{
	var_97_bool = 0; var_98_float = 0; var_99_float = 0; var_100_bool = 0; var_101_float = 0; var_102_float = 0; // 0x237 PushV
	lshHasAnimation(var_100_bool, var_93_string); // 0x238 Func
	var_103_bool = var_100_bool; // 0x23a Push
	if(var_103_bool == 0) goto Label_577; // 0x23b JumpB
	lshGetAnimTimes(var_93_string, var_101_float, var_102_float); // 0x23c Func
	lshPlayAnimation(var_101_float, var_102_float, var_94_bool); // 0x23e Func
	goto Label_581; // 0x240 Jump
	
Label_581:
	return 6; // 0x245 Return
	
Label_577:
	var_104_string = "Can't find lsh animation : "; // 0x241 PushS
	var_105_int = var_104_string + var_93_string; // 0x242 Add
	Trace(var_105_int); // 0x243 Func
}


func_635(var_70_int)
{
	var_70_int = 515571; // 0x27b MovI
	return 0; // 0x27c Return
}


func_637(var_69_int)
{
	var_69_int = 504029; // 0x27d MovI
	return 0; // 0x27e Return
}


func_639(var_71_string)
{
	var_71_string = "ui/NPC_bmask.png"; // 0x27f MovS
	return 0; // 0x280 Return
}


