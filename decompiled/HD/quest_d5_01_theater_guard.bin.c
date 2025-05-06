task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xaa PushI
	if(var_12_int == 0) goto Label_443; // 0xab JumpB
	func_772(); // 0xad NEW_2
	var_14_int = 3243; // 0xaf PushI
	var_15_bool = var_11_object == var_14_int; // 0xb0 Eq
	if(var_15_bool == 0) goto Label_183; // 0xb1 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb2 PushV
	var_16_object = var_1_object; // 0xb3 MovT
	var_17_object = var_0_object; // 0xb4 MovT
	func_818(); // 0xb5 NEW_2
	
Label_183:
	var_20_int = 3244; // 0xb7 PushI
	var_21_bool = var_11_object == var_20_int; // 0xb8 Eq
	if(var_21_bool == 0) goto Label_191; // 0xb9 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xba PushV
	var_22_object = var_1_object; // 0xbb MovT
	var_23_object = var_0_object; // 0xbc MovT
	func_824(); // 0xbd NEW_2
	
Label_191:
	var_26_int = 3242; // 0xbf PushI
	var_27_bool = var_10_bool == var_26_int; // 0xc0 Eq
	if(var_27_bool == 0) goto Label_229; // 0xc1 JumpB
	var_28_string = ""; // 0xc2 PushV
	var_28_string = "Neutral"; // 0xc3 MovS
	func_147(var_11_object, var_28_string); // 0xc4 NEW_2
	var_45_int = 502916; // 0xc6 PushI
	SetMessage(var_45_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_46_bool = 0; var_47_object = Obj(); // 0xcb PushV
	var_47_object = var_1_object; // 0xcc MovT
	func_830(var_47_object); // 0xcd NEW_2
	if(var_46_bool == 0) goto Label_213; // 0xcf JumpB
	var_54_int = 502917; // 0xd0 PushI
	var_55_int = 3252; // 0xd1 PushI
	var_56_int = 3243; // 0xd2 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd3 TObjFunc
	
Label_213:
	var_57_bool = 0; var_58_object = Obj(); // 0xd5 PushV
	var_58_object = var_1_object; // 0xd6 MovT
	func_842(var_58_object); // 0xd7 NEW_2
	if(var_57_bool == 0) goto Label_223; // 0xd9 JumpB
	var_63_int = 502918; // 0xda PushI
	var_64_int = 3245; // 0xdb PushI
	var_65_int = 3244; // 0xdc PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xdd TObjFunc
	
Label_223:
	var_66_int = 536324; // 0xdf PushI
	var_67_int = -1; // 0xe0 PushI
	var_68_int = 38104; // 0xe1 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_69_int = 3245; // 0xe5 PushI
	var_70_bool = var_10_bool == var_69_int; // 0xe6 Eq
	if(var_70_bool == 0) goto Label_252; // 0xe7 JumpB
	var_71_string = ""; // 0xe8 PushV
	var_71_string = "Neutral"; // 0xe9 MovS
	func_147(var_11_object, var_71_string); // 0xea NEW_2
	var_72_int = 502919; // 0xec PushI
	SetMessage(var_72_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_73_int = 502920; // 0xf1 PushI
	var_74_int = 3247; // 0xf2 PushI
	var_75_int = 3246; // 0xf3 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf4 TObjFunc
	var_76_int = 502922; // 0xf6 PushI
	var_77_int = 3249; // 0xf7 PushI
	var_78_int = 3248; // 0xf8 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_79_int = 3249; // 0xfc PushI
	var_80_bool = var_10_bool == var_79_int; // 0xfd Eq
	if(var_80_bool == 0) goto Label_275; // 0xfe JumpB
	var_81_string = ""; // 0xff PushV
	var_81_string = "Neutral"; // 0x100 MovS
	func_147(var_11_object, var_81_string); // 0x101 NEW_2
	var_82_int = 502923; // 0x103 PushI
	SetMessage(var_82_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_83_int = 502924; // 0x108 PushI
	var_84_int = -1; // 0x109 PushI
	var_85_int = 3250; // 0x10a PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x10b TObjFunc
	var_86_int = 502925; // 0x10d PushI
	var_87_int = -1; // 0x10e PushI
	var_88_int = 3251; // 0x10f PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_89_int = 3247; // 0x113 PushI
	var_90_bool = var_10_bool == var_89_int; // 0x114 Eq
	if(var_90_bool == 0) goto Label_293; // 0x115 JumpB
	var_91_string = ""; // 0x116 PushV
	var_91_string = "Neutral"; // 0x117 MovS
	func_147(var_11_object, var_91_string); // 0x118 NEW_2
	var_92_int = 502921; // 0x11a PushI
	SetMessage(var_92_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_93_int = 515526; // 0x11f PushI
	var_94_int = -1; // 0x120 PushI
	var_95_int = 16622; // 0x121 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_96_int = 3252; // 0x125 PushI
	var_97_bool = var_10_bool == var_96_int; // 0x126 Eq
	if(var_97_bool == 0) goto Label_316; // 0x127 JumpB
	var_98_string = ""; // 0x128 PushV
	var_98_string = "Neutral"; // 0x129 MovS
	func_147(var_11_object, var_98_string); // 0x12a NEW_2
	var_99_int = 502926; // 0x12c PushI
	SetMessage(var_99_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_100_int = 502927; // 0x131 PushI
	var_101_int = 3258; // 0x132 PushI
	var_102_int = 3253; // 0x133 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x134 TObjFunc
	var_103_int = 502928; // 0x136 PushI
	var_104_int = 3255; // 0x137 PushI
	var_105_int = 3254; // 0x138 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_106_int = 3255; // 0x13c PushI
	var_107_bool = var_10_bool == var_106_int; // 0x13d Eq
	if(var_107_bool == 0) goto Label_339; // 0x13e JumpB
	var_108_string = ""; // 0x13f PushV
	var_108_string = "Neutral"; // 0x140 MovS
	func_147(var_11_object, var_108_string); // 0x141 NEW_2
	var_109_int = 502929; // 0x143 PushI
	SetMessage(var_109_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_110_int = 502931; // 0x148 PushI
	var_111_int = 3258; // 0x149 PushI
	var_112_int = 3257; // 0x14a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x14b TObjFunc
	var_113_int = 502930; // 0x14d PushI
	var_114_int = -1; // 0x14e PushI
	var_115_int = 3256; // 0x14f PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_116_int = 3258; // 0x153 PushI
	var_117_bool = var_10_bool == var_116_int; // 0x154 Eq
	if(var_117_bool == 0) goto Label_367; // 0x155 JumpB
	var_118_string = ""; // 0x156 PushV
	var_118_string = "Neutral"; // 0x157 MovS
	func_147(var_11_object, var_118_string); // 0x158 NEW_2
	var_119_int = 502932; // 0x15a PushI
	SetMessage(var_119_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_120_int = 502938; // 0x15f PushI
	var_121_int = 3265; // 0x160 PushI
	var_122_int = 3264; // 0x161 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x162 TObjFunc
	var_123_int = 502934; // 0x164 PushI
	var_124_int = 3261; // 0x165 PushI
	var_125_int = 3260; // 0x166 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x167 TObjFunc
	var_126_int = 502933; // 0x169 PushI
	var_127_int = -1; // 0x16a PushI
	var_128_int = 3259; // 0x16b PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_129_int = 3261; // 0x16f PushI
	var_130_bool = var_10_bool == var_129_int; // 0x170 Eq
	if(var_130_bool == 0) goto Label_390; // 0x171 JumpB
	var_131_string = ""; // 0x172 PushV
	var_131_string = "Neutral"; // 0x173 MovS
	func_147(var_11_object, var_131_string); // 0x174 NEW_2
	var_132_int = 502935; // 0x176 PushI
	SetMessage(var_132_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_133_int = 502936; // 0x17b PushI
	var_134_int = -1; // 0x17c PushI
	var_135_int = 3262; // 0x17d PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x17e TObjFunc
	var_136_int = 502937; // 0x180 PushI
	var_137_int = -1; // 0x181 PushI
	var_138_int = 3263; // 0x182 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_139_int = 3265; // 0x186 PushI
	var_140_bool = var_10_bool == var_139_int; // 0x187 Eq
	if(var_140_bool == 0) goto Label_413; // 0x188 JumpB
	var_141_string = ""; // 0x189 PushV
	var_141_string = "Neutral"; // 0x18a MovS
	func_147(var_11_object, var_141_string); // 0x18b NEW_2
	var_142_int = 502939; // 0x18d PushI
	SetMessage(var_142_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_143_int = 502940; // 0x192 PushI
	var_144_int = 3261; // 0x193 PushI
	var_145_int = 3266; // 0x194 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x195 TObjFunc
	var_146_int = 502941; // 0x197 PushI
	var_147_int = 3269; // 0x198 PushI
	var_148_int = 3267; // 0x199 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_149_int = 3269; // 0x19d PushI
	var_150_bool = var_10_bool == var_149_int; // 0x19e Eq
	if(var_150_bool == 0) goto Label_431; // 0x19f JumpB
	var_151_string = ""; // 0x1a0 PushV
	var_151_string = "Neutral"; // 0x1a1 MovS
	func_147(var_11_object, var_151_string); // 0x1a2 NEW_2
	var_152_int = 502942; // 0x1a4 PushI
	SetMessage(var_152_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_153_int = 502943; // 0x1a9 PushI
	var_154_int = -1; // 0x1aa PushI
	var_155_int = 3270; // 0x1ab PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_3_string = 1; // 0x1af TMovB
	var_156_bool = 0; // 0x1b0 PushV
	func_879(var_156_bool); // 0x1b1 NEW_2
	if(var_156_bool == 0) goto Label_439; // 0x1b3 JumpB
	lshStopAnimation(); // 0x1b4 Func
	goto Label_441; // 0x1b6 Jump
	
Label_441:
	return 0; // 0x1b9 Return
	
Label_439:
	StopAnimation(); // 0x1b7 Func
	
Label_443:
	return 0; // 0x1bb Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_530(var_9_object, var_10_object); // 0x1c8 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x1ca PushV
	var_15_object = var_10_object; // 0x1cb Mov
	TaskCall(0); // 0x1cc TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1cd NEW_2
	TaskReturn(); // 0x1ce TaskReturn
	return 0; // 0x1d0 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1fc PushI
	var_12_bool = var_10_int == var_11_int; // 0x1fd Eq
	if(var_12_bool == 0) goto Label_529; // 0x1fe JumpB
	var_13_bool = 0; // 0x1ff PushV
	func_492(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x200 NEW_2
	if(var_13_bool == 0) goto Label_523; // 0x202 JumpB
	var_26_bool = var_2_object == 0; // 0x203 Not
	if(var_26_bool == 0) goto Label_522; // 0x204 JumpB
	var_27_object = Obj(); // 0x205 PushV
	var_27_object = var_4_bool; // 0x206 MovT
	func_761(var_27_object); // 0x207 NEW_2
	var_2_object = 1; // 0x209 TMovB
	
Label_522:
	goto Label_529; // 0x20a Jump
	
Label_529:
	return 0; // 0x211 Return
	
Label_523:
	var_34_object = var_2_object; // 0x20b PushT
	if(var_34_object == 0) goto Label_529; // 0x20c JumpB
	var_35_string = "head"; // 0x20d PushS
	UnlookAsync(var_35_string); // 0x20e Func
	var_2_object = 0; // 0x210 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_444:
	var_10_int = 1; // 0x1bc PushI
	Sleep(var_10_int); // 0x1bd Func
	var_11_float = 0; var_12_float = 0; // 0x1bf PushV
	var_11_float = 300; // 0x1c0 MovI
	var_12_float = 100; // 0x1c1 MovI
	func_465(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x1c2 NEW_2
	goto Label_444; // 0x1c4 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_643(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_873(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_871(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_875(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_877(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_854(var_77_int); // 0x22 NEW_2
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
	var_152_bool = var_24_bool == 0; // 0x38 Not
	if(var_152_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_153_object = Obj(); // 0x3f PushV
	var_153_object = var_15_object; // 0x40 Mov
	func_712(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_643(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x283 PushV
	GetPosition(var_38_cvector); // 0x284 ObjFunc
	GetEyesHeight(var_37_float); // 0x286 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x288 PushE
	var_46_float = var_46_float + var_37_float; // 0x289 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x28a PopE
	GetPosition(var_39_cvector); // 0x28b Func
	GetEyesHeight(var_37_float); // 0x28d Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x28f PushE
	var_47_float = var_47_float + var_37_float; // 0x290 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x291 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x292 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x293 PushE
	var_48_float = 0; // 0x294 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x295 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x296 Or
	var_50_float = sqrt(var_49_int); // 0x297 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x298 Div2
	var_41_cvector = -var_40_cvector; // 0x299 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x29a Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x29b PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x29c PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x29d Xor2
	func_779(var_52_cvector, var_53_cvector); // 0x29e NEW_2
	var_60_int = 25; // 0x2a0 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x2a1 Mult
	var_62_int = var_51_float + var_61_float; // 0x2a2 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x2a3 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x2a4 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x2a5 Add2
	IsOverrideActive(var_44_bool); // 0x2a6 Func
	var_64_bool = var_44_bool; // 0x2a8 Push
	if(var_64_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_25_bool = 0; // 0x2aa MovB
	return 18; // 0x2ab Return
	
Label_684:
	StopWorld(); // 0x2ac Func
	var_65_bool = 1; // 0x2ae PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x2af Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x2b1 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x2b2 PushE
	Rotate(var_66_float, var_67_float); // 0x2b3 Func
	var_68_bool = 0; // 0x2b5 PushV
	func_879(var_68_bool); // 0x2b6 NEW_2
	if(var_68_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_706; // 0x2b9 Jump
	
Label_706:
	CameraWaitForPlayFinish(); // 0x2c2 Func
	ResumeWorld(); // 0x2c4 Func
	var_25_bool = 1; // 0x2c6 MovB
	return 18; // 0x2c7 Return
	
Label_698:
	var_69_string = "head"; // 0x2ba PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x2bb Func
	var_70_bool = var_45_bool; // 0x2bd Push
	if(var_70_bool == 0) goto Label_706; // 0x2be JumpB
	var_71_string = "head"; // 0x2bf PushS
	LookAsyncCamera(var_71_string); // 0x2c0 Func
}


func_772()
{
	var_13_bool = 0; // 0x304 PushV
	func_879(var_13_bool); // 0x305 NEW_2
	if(var_13_bool == 0) goto Label_778; // 0x307 JumpB
	lshStopSpeech(); // 0x308 Func
	
Label_778:
	return 0; // 0x30a Return
}


func_712()
{
	var_154_bool = 0; var_155_bool = 0; // 0x2c8 PushV
	var_156_bool = 1; // 0x2c9 PushB
	CameraSwitchToNormal(var_156_bool); // 0x2ca Func
	var_157_bool = 0; // 0x2cc PushV
	func_879(var_157_bool); // 0x2cd NEW_2
	if(var_157_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_729; // 0x2d0 Jump
	
Label_729:
	return 2; // 0x2d9 Return
	
Label_721:
	var_158_string = "head"; // 0x2d1 PushS
	HasAnimationTrack(var_155_bool, var_158_string); // 0x2d2 Func
	var_159_bool = var_155_bool; // 0x2d4 Push
	if(var_159_bool == 0) goto Label_729; // 0x2d5 JumpB
	var_160_string = "head"; // 0x2d6 PushS
	UnlookAsync(var_160_string); // 0x2d7 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_117; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_147(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 502916; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_830(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 502917; // 0x5e PushI
	var_120_int = 3252; // 0x5f PushI
	var_121_int = 3243; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_bool = 0; var_123_object = Obj(); // 0x63 PushV
	var_123_object = var_1_object; // 0x64 MovT
	func_842(var_123_object); // 0x65 NEW_2
	if(var_122_bool == 0) goto Label_109; // 0x67 JumpB
	var_128_int = 502918; // 0x68 PushI
	var_129_int = 3245; // 0x69 PushI
	var_130_int = 3244; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	
Label_109:
	var_131_int = 536324; // 0x6d PushI
	var_132_int = -1; // 0x6e PushI
	var_133_int = 38104; // 0x6f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_134_bool = 0; // 0x75 PushV
	func_879(var_134_bool); // 0x76 NEW_2
	if(var_134_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_136_string = ""; // 0x7e PushV
	var_136_string = var_2_object; // 0x7f MovT
	func_730(var_136_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_147_string = "all"; // 0x84 PushS
	var_148_string = "idle"; // 0x85 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_149_string = var_3_string; // 0x8a PushT
	if(var_149_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_150_string = "all"; // 0x8d PushS
	var_151_string = "idle"; // 0x8e PushS
	PlayAnimation(var_150_string, var_151_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
}


func_779(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x30b PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x30c Or
	var_56_float = sqrt(var_57_int); // 0x30d Sqrt2
	var_58_float = 0.0; // 0x30e PushF
	var_59_bool = var_56_float < var_58_float; // 0x30f LT
	if(var_59_bool == 0) goto Label_787; // 0x310 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x311 MovV
	return 2; // 0x312 Return
	
Label_787:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x313 Div2
	return 2; // 0x314 Return
}


func_842(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x34b PushV
	var_125_string = "ood5Whitemask2"; // 0x34c MovS
	func_789(var_124_int, var_125_string); // 0x34d NEW_2
	var_126_int = 0; // 0x34f PushI
	var_127_bool = var_124_int == var_126_int; // 0x350 Eq
	if(var_127_bool == 0) goto Label_852; // 0x351 JumpB
	var_122_bool = 1; // 0x352 MovB
	return 0; // 0x353 Return
	
Label_852:
	var_122_bool = 0; // 0x354 MovB
	return 0; // 0x355 Return
}


func_638(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x27e PushV
	IsLoaded(var_15_bool); // 0x27f Func
	var_13_bool = var_15_bool; // 0x281 Mov
	return 2; // 0x282 Return
}


func_465(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1d2 PushV
	func_638(var_13_bool); // 0x1d3 NEW_2
	var_16_bool = var_13_bool == 0; // 0x1d5 Not
	if(var_16_bool == 0) goto Label_472; // 0x1d6 JumpB
	return 0; // 0x1d7 Return
	
Label_472:
	var_17_string = "player"; // 0x1d8 PushS
	FindActor(var_9_object, var_17_string); // 0x1d9 Func
	var_2_object = 0; // 0x1db TMovB
	var_3_string = 0; // 0x1dc TMovB
	var_0_object = var_11_float; // 0x1dd TMov
	var_1_object = var_12_float; // 0x1de TMov
	var_18_int = 10; // 0x1df PushI
	var_19_float = 1.0; // 0x1e0 PushF
	SetTimer(var_18_int, var_19_float); // 0x1e1 Func
	func_544(); // 0x1e4 NEW_2
	var_71_bool = var_3_string == 0; // 0x1e6 Not
	if(var_71_bool == 0) goto Label_491; // 0x1e7 JumpB
	var_72_int = 10; // 0x1e8 PushI
	KillTimer(var_72_int); // 0x1e9 Func
	
Label_491:
	return 0; // 0x1eb Return
}


func_530(var_2_object, var_3_string)
{
	func_625(); // 0x213 NEW_2
	var_11_int = 10; // 0x215 PushI
	KillTimer(var_11_int); // 0x216 Func
	var_12_object = var_2_object; // 0x218 PushT
	if(var_12_object == 0) goto Label_542; // 0x219 JumpB
	var_13_string = "head"; // 0x21a PushS
	UnlookAsync(var_13_string); // 0x21b Func
	var_2_object = 0; // 0x21d TMovB
	
Label_542:
	var_3_string = 1; // 0x21e TMovB
	return 0; // 0x21f Return
}


func_147(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x94 PushV
	func_879(var_94_bool); // 0x95 NEW_2
	var_95_bool = var_94_bool == 0; // 0x97 Not
	if(var_95_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_96_bool = var_93_string == var_2_object; // 0x9a Eq
	if(var_96_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_97_string = ""; var_98_bool = 0; // 0x9d PushV
	var_97_string = var_93_string; // 0x9e Mov
	var_99_string = ""; // 0x9f PushS
	var_100_bool = var_93_string == var_99_string; // 0xa0 Eq
	if(var_100_bool == 0) goto Label_164; // 0xa1 JumpB
	var_98_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_746(var_97_string, var_98_bool); // 0xa5 NEW_2
	var_2_object = var_93_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_98_bool = 1; // 0xa4 MovB
}


func_789(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x315 PushV
	GetVariable(var_114_string, var_116_int); // 0x316 Func
	var_113_int = var_116_int; // 0x318 Mov
	return 2; // 0x319 Return
}


func_854(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x356 PushV
	var_80_string = "branch"; // 0x357 PushS
	GetVariable(var_80_string, var_79_int); // 0x358 Func
	var_81_int = 0; // 0x35a PushI
	var_82_bool = var_79_int == var_81_int; // 0x35b Eq
	if(var_82_bool == 0) goto Label_864; // 0x35c JumpB
	var_77_int = 1; // 0x35d MovI
	return 2; // 0x35e Return
	
Label_864:
	var_83_int = 1; // 0x360 PushI
	var_84_bool = var_79_int == var_83_int; // 0x361 Eq
	if(var_84_bool == 0) goto Label_869; // 0x362 JumpB
	var_77_int = 2; // 0x363 MovI
	return 2; // 0x364 Return
	
Label_869:
	var_77_int = 3; // 0x365 MovI
	return 2; // 0x366 Return
}


func_794(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x31a PushV
	var_45_string = "idle"; // 0x31b MovS
	var_46_int = var_43_int; // 0x31c Push
	if(var_46_int == 0) goto Label_799; // 0x31d JumpB
	var_45_string = var_45_string + var_43_int; // 0x31e Add2
	
Label_799:
	var_42_string = var_45_string; // 0x31f Mov
	return 2; // 0x320 Return
}


func_730(var_136_string)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0; // 0x2da PushV
	lshHasAnimation(var_140_bool, var_136_string); // 0x2db Func
	var_143_bool = var_140_bool; // 0x2dd Push
	if(var_143_bool == 0) goto Label_741; // 0x2de JumpB
	lshGetAnimTimes(var_136_string, var_141_float, var_142_float); // 0x2df Func
	var_144_bool = 0; // 0x2e1 PushB
	lshPlayAnimation(var_141_float, var_142_float, var_144_bool); // 0x2e2 Func
	goto Label_745; // 0x2e4 Jump
	
Label_745:
	return 6; // 0x2e9 Return
	
Label_741:
	var_145_string = "Can't find lsh animation : "; // 0x2e5 PushS
	var_146_int = var_145_string + var_136_string; // 0x2e6 Add
	Trace(var_146_int); // 0x2e7 Func
}


func_544()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x220 PushV
	WaitForAnimEnd(); // 0x221 Func
	var_34_bool = 0; // 0x223 PushV
	func_638(var_34_bool); // 0x224 NEW_2
	var_35_bool = var_34_bool == 0; // 0x226 Not
	if(var_35_bool == 0) goto Label_553; // 0x227 JumpB
	return 14; // 0x228 Return
	
Label_553:
	var_36_int = 0; // 0x229 PushV
	func_801(var_36_int); // 0x22a NEW_2
	var_27_int = var_36_int; // 0x22b Mov
	var_28_int = 0; // 0x22d MovI
	
Label_558:
	var_49_bool = 0; // 0x22e PushV
	var_49_bool = 0; // 0x22f MovB
	var_50_int = 5; // 0x230 PushI
	var_51_bool = var_28_int < var_50_int; // 0x231 LT
	if(var_51_bool == 0) goto Label_568; // 0x232 JumpB
	var_52_bool = 0; // 0x233 PushV
	func_638(var_52_bool); // 0x234 NEW_2
	if(var_52_bool == 0) goto Label_568; // 0x236 JumpB
	var_49_bool = 1; // 0x237 MovB
	
Label_568:
	if(var_49_bool == 0) goto Label_620; // 0x238 JumpB
	var_53_int = 3; // 0x239 PushI
	irand(var_29_int, var_53_int); // 0x23a Func
	var_54_int = 0; // 0x23c PushI
	var_55_bool = var_29_int == var_54_int; // 0x23d Eq
	if(var_55_bool == 0) goto Label_592; // 0x23e JumpB
	var_56_int = var_27_int; // 0x23f Push
	if(var_56_int == 0) goto Label_591; // 0x240 JumpB
	irand(var_30_int, var_27_int); // 0x241 Func
	var_57_string = "all"; // 0x243 PushS
	var_58_string = ""; var_59_int = 0; // 0x244 PushV
	var_59_int = var_30_int; // 0x245 Mov
	func_794(var_58_string, var_59_int); // 0x246 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x248 Func
	WaitForAnimEnd(var_31_bool); // 0x24a Func
	var_60_bool = var_31_bool == 0; // 0x24c Not
	if(var_60_bool == 0) goto Label_591; // 0x24d JumpB
	goto Label_620; // 0x24e Jump
	
Label_620:
	ResetAAS(); // 0x26c Func
	return 14; // 0x26e Return
	
Label_591:
	goto Label_609; // 0x24f Jump
	
Label_609:
	var_61_bool = 0; // 0x261 PushV
	func_623(var_61_bool); // 0x262 NEW_2
	var_62_bool = var_61_bool == 0; // 0x264 Not
	if(var_62_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_620; // 0x266 Jump
	
Label_615:
	ResetAAS(); // 0x267 Func
	var_63_int = 1; // 0x269 PushI
	var_28_int = var_28_int + var_63_int; // 0x26a Add2
	goto Label_558; // 0x26b Jump
	
Label_592:
	var_64_int = 1; // 0x250 PushI
	var_65_bool = var_29_int == var_64_int; // 0x251 Eq
	if(var_65_bool == 0) goto Label_606; // 0x252 JumpB
	var_66_int = 4; // 0x253 PushI
	rand(var_32_float, var_66_int); // 0x254 Func
	var_67_int = 1; // 0x256 PushI
	var_68_int = var_32_float + var_67_int; // 0x257 Add
	Sleep(var_68_int, var_33_bool); // 0x258 Func
	var_69_bool = var_33_bool == 0; // 0x25a Not
	if(var_69_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_620; // 0x25c Jump
	
Label_605:
	goto Label_609; // 0x25d Jump
	
Label_606:
	var_70_int = var_28_int; // 0x25e Push
	if(var_70_int == 0) goto Label_609; // 0x25f JumpB
	goto Label_620; // 0x260 Jump
}


func_801(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x321 PushV
	var_39_int = 0; // 0x322 MovI
	
Label_803:
	var_41_string = "all"; // 0x323 PushS
	var_42_string = ""; var_43_int = 0; // 0x324 PushV
	var_43_int = var_39_int; // 0x325 Mov
	func_794(var_42_string, var_43_int); // 0x326 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x328 Func
	var_47_bool = var_40_bool == 0; // 0x32a Not
	if(var_47_bool == 0) goto Label_813; // 0x32b JumpB
	goto Label_816; // 0x32c Jump
	
Label_816:
	var_36_int = var_39_int; // 0x330 Mov
	return 4; // 0x331 Return
	
Label_813:
	var_48_int = 1; // 0x32d PushI
	var_39_int = var_39_int + var_48_int; // 0x32e Add2
	goto Label_803; // 0x32f Jump
}


func_871(var_74_int)
{
	var_74_int = 515569; // 0x367 MovI
	return 0; // 0x368 Return
}


func_873(var_73_int)
{
	var_73_int = 503354; // 0x369 MovI
	return 0; // 0x36a Return
}


func_746(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x2ea PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x2eb Func
	var_107_bool = var_104_bool; // 0x2ed Push
	if(var_107_bool == 0) goto Label_756; // 0x2ee JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x2ef Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x2f1 Func
	goto Label_760; // 0x2f3 Jump
	
Label_760:
	return 6; // 0x2f8 Return
	
Label_756:
	var_108_string = "Can't find lsh animation : "; // 0x2f4 PushS
	var_109_int = var_108_string + var_97_string; // 0x2f5 Add
	Trace(var_109_int); // 0x2f6 Func
}


func_875(var_75_string)
{
	var_75_string = "ui/NPC_wmask.png"; // 0x36b MovS
	return 0; // 0x36c Return
}


func_492(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1ec PushV
	var_16_bool = var_4_bool == 0; // 0x1ed NullEq
	if(var_16_bool == 0) goto Label_497; // 0x1ee JumpB
	var_13_bool = 0; // 0x1ef MovB
	return 2; // 0x1f0 Return
	
Label_497:
	var_17_float = 0; var_18_object = Obj(); // 0x1f1 PushV
	var_18_object = var_4_bool; // 0x1f2 MovT
	func_630(var_18_object); // 0x1f3 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1f5 Sqrt2
	var_25_object = var_2_object; // 0x1f6 PushT
	if(var_25_object == 0) goto Label_505; // 0x1f7 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1f8 Sub2
	
Label_505:
	var_13_bool = var_15_float < var_0_object; // 0x1f9 LT2
	return 2; // 0x1fa Return
}


func_877(var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png"; // 0x36d MovS
	return 0; // 0x36e Return
}


func_879(var_68_bool)
{
	var_68_bool = 0; // 0x36f MovB
	return 0; // 0x370 Return
}


func_623(var_61_bool)
{
	var_61_bool = 1; // 0x26f MovB
	return 0; // 0x270 Return
}


func_625()
{
	StopAnimation(); // 0x271 Func
	StopGroup0(); // 0x273 Func
	return 0; // 0x275 Return
}


func_818()
{
	var_18_string = "ood5Whitemask1"; // 0x333 PushS
	var_19_int = 1; // 0x334 PushI
	SetVariable(var_18_string, var_19_int); // 0x335 Func
	return 0; // 0x337 Return
}


func_630(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x276 PushV
	GetPosition(var_22_cvector); // 0x277 Func
	GetPosition(var_23_cvector); // 0x279 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x27b Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x27c Or2
	return 6; // 0x27d Return
}


func_824()
{
	var_24_string = "ood5Whitemask2"; // 0x339 PushS
	var_25_int = 1; // 0x33a PushI
	SetVariable(var_24_string, var_25_int); // 0x33b Func
	return 0; // 0x33d Return
}


func_761(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2f9 PushV
	GetEyesHeight(var_30_float); // 0x2fa ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2fc MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2fd PushE
	var_32_float = var_30_float; // 0x2fe Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2ff PopE
	var_33_string = "head"; // 0x300 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x301 Func
	return 4; // 0x303 Return
}


func_830(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x33f PushV
	var_114_string = "ood5Whitemask1"; // 0x340 MovS
	func_789(var_113_int, var_114_string); // 0x341 NEW_2
	var_117_int = 0; // 0x343 PushI
	var_118_bool = var_113_int == var_117_int; // 0x344 Eq
	if(var_118_bool == 0) goto Label_840; // 0x345 JumpB
	var_111_bool = 1; // 0x346 MovB
	return 0; // 0x347 Return
	
Label_840:
	var_111_bool = 0; // 0x348 MovB
	return 0; // 0x349 Return
}


