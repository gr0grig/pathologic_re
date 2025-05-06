task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc1 PushI
	if(var_8_int == 0) goto Label_466; // 0xc2 JumpB
	func_840(); // 0xc4 NEW_2
	var_10_int = 31666; // 0xc6 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc7 Eq
	if(var_11_bool == 0) goto Label_252; // 0xc8 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc9 PushV
	var_13_object = var_1_object; // 0xca MovT
	func_893(var_13_object); // 0xcb NEW_2
	var_20_bool = var_12_bool == 0; // 0xcd Not
	if(var_20_bool == 0) goto Label_232; // 0xce JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xcf PushV
	var_21_object = var_1_object; // 0xd0 MovT
	var_22_object = var_0_object; // 0xd1 MovT
	func_887(); // 0xd2 NEW_2
	var_25_string = ""; // 0xd4 PushV
	var_25_string = "Isee"; // 0xd5 MovS
	func_170(var_7_bool, var_25_string); // 0xd6 NEW_2
	var_42_int = 530278; // 0xd8 PushI
	SetMessage(var_42_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_43_int = 530919; // 0xdd PushI
	var_44_int = 32247; // 0xde PushI
	var_45_int = 32246; // 0xdf PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xe0 TObjFunc
	var_46_int = 530923; // 0xe2 PushI
	var_47_int = 32251; // 0xe3 PushI
	var_48_int = 32250; // 0xe4 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_49_string = ""; // 0xe8 PushV
	var_49_string = "Neutral"; // 0xe9 MovS
	func_170(var_7_bool, var_49_string); // 0xea NEW_2
	var_50_int = 530288; // 0xec PushI
	SetMessage(var_50_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_51_int = 530289; // 0xf1 PushI
	var_52_int = -1; // 0xf2 PushI
	var_53_int = 31677; // 0xf3 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xf4 TObjFunc
	var_54_int = 530918; // 0xf6 PushI
	var_55_int = -1; // 0xf7 PushI
	var_56_int = 32245; // 0xf8 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_57_int = 32251; // 0xfc PushI
	var_58_bool = var_6_int == var_57_int; // 0xfd Eq
	if(var_58_bool == 0) goto Label_275; // 0xfe JumpB
	var_59_string = ""; // 0xff PushV
	var_59_string = "Neutral"; // 0x100 MovS
	func_170(var_7_bool, var_59_string); // 0x101 NEW_2
	var_60_int = 530924; // 0x103 PushI
	SetMessage(var_60_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_61_int = 530926; // 0x108 PushI
	var_62_int = 32247; // 0x109 PushI
	var_63_int = 32253; // 0x10a PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x10b TObjFunc
	var_64_int = 530925; // 0x10d PushI
	var_65_int = 32247; // 0x10e PushI
	var_66_int = 32252; // 0x10f PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_67_int = 32247; // 0x113 PushI
	var_68_bool = var_6_int == var_67_int; // 0x114 Eq
	if(var_68_bool == 0) goto Label_298; // 0x115 JumpB
	var_69_string = ""; // 0x116 PushV
	var_69_string = "Isee"; // 0x117 MovS
	func_170(var_7_bool, var_69_string); // 0x118 NEW_2
	var_70_int = 530920; // 0x11a PushI
	SetMessage(var_70_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_71_int = 530921; // 0x11f PushI
	var_72_int = 32249; // 0x120 PushI
	var_73_int = 32248; // 0x121 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x122 TObjFunc
	var_74_int = 531006; // 0x124 PushI
	var_75_int = -1; // 0x125 PushI
	var_76_int = 32333; // 0x126 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_77_int = 32249; // 0x12a PushI
	var_78_bool = var_6_int == var_77_int; // 0x12b Eq
	if(var_78_bool == 0) goto Label_321; // 0x12c JumpB
	var_79_string = ""; // 0x12d PushV
	var_79_string = "Neutral"; // 0x12e MovS
	func_170(var_7_bool, var_79_string); // 0x12f NEW_2
	var_80_int = 530922; // 0x131 PushI
	SetMessage(var_80_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_81_int = 530279; // 0x136 PushI
	var_82_int = 31668; // 0x137 PushI
	var_83_int = 31667; // 0x138 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x139 TObjFunc
	var_84_int = 531005; // 0x13b PushI
	var_85_int = 32334; // 0x13c PushI
	var_86_int = 32332; // 0x13d PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_87_int = 32334; // 0x141 PushI
	var_88_bool = var_6_int == var_87_int; // 0x142 Eq
	if(var_88_bool == 0) goto Label_339; // 0x143 JumpB
	var_89_string = ""; // 0x144 PushV
	var_89_string = "Neutral"; // 0x145 MovS
	func_170(var_7_bool, var_89_string); // 0x146 NEW_2
	var_90_int = 531007; // 0x148 PushI
	SetMessage(var_90_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_91_int = 531008; // 0x14d PushI
	var_92_int = 31668; // 0x14e PushI
	var_93_int = 32335; // 0x14f PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_94_int = 31668; // 0x153 PushI
	var_95_bool = var_6_int == var_94_int; // 0x154 Eq
	if(var_95_bool == 0) goto Label_362; // 0x155 JumpB
	var_96_string = ""; // 0x156 PushV
	var_96_string = "Neutral"; // 0x157 MovS
	func_170(var_7_bool, var_96_string); // 0x158 NEW_2
	var_97_int = 530280; // 0x15a PushI
	SetMessage(var_97_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_98_int = 531011; // 0x15f PushI
	var_99_int = 32340; // 0x160 PushI
	var_100_int = 32339; // 0x161 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x162 TObjFunc
	var_101_int = 531009; // 0x164 PushI
	var_102_int = 32338; // 0x165 PushI
	var_103_int = 32337; // 0x166 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_104_int = 32338; // 0x16a PushI
	var_105_bool = var_6_int == var_104_int; // 0x16b Eq
	if(var_105_bool == 0) goto Label_385; // 0x16c JumpB
	var_106_string = ""; // 0x16d PushV
	var_106_string = "Neutral"; // 0x16e MovS
	func_170(var_7_bool, var_106_string); // 0x16f NEW_2
	var_107_int = 531010; // 0x171 PushI
	SetMessage(var_107_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_108_int = 531013; // 0x176 PushI
	var_109_int = 32340; // 0x177 PushI
	var_110_int = 32341; // 0x178 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x179 TObjFunc
	var_111_int = 531014; // 0x17b PushI
	var_112_int = -1; // 0x17c PushI
	var_113_int = 32342; // 0x17d PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_114_int = 32340; // 0x181 PushI
	var_115_bool = var_6_int == var_114_int; // 0x182 Eq
	if(var_115_bool == 0) goto Label_408; // 0x183 JumpB
	var_116_string = ""; // 0x184 PushV
	var_116_string = "Threat"; // 0x185 MovS
	func_170(var_7_bool, var_116_string); // 0x186 NEW_2
	var_117_int = 531012; // 0x188 PushI
	SetMessage(var_117_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_118_int = 530281; // 0x18d PushI
	var_119_int = 31670; // 0x18e PushI
	var_120_int = 31669; // 0x18f PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x190 TObjFunc
	var_121_int = 531016; // 0x192 PushI
	var_122_int = -1; // 0x193 PushI
	var_123_int = 32345; // 0x194 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_124_int = 31670; // 0x198 PushI
	var_125_bool = var_6_int == var_124_int; // 0x199 Eq
	if(var_125_bool == 0) goto Label_431; // 0x19a JumpB
	var_126_string = ""; // 0x19b PushV
	var_126_string = "Neutral"; // 0x19c MovS
	func_170(var_7_bool, var_126_string); // 0x19d NEW_2
	var_127_int = 530282; // 0x19f PushI
	SetMessage(var_127_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_128_int = 530283; // 0x1a4 PushI
	var_129_int = -1; // 0x1a5 PushI
	var_130_int = 31671; // 0x1a6 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1a7 TObjFunc
	var_131_int = 531015; // 0x1a9 PushI
	var_132_int = 32346; // 0x1aa PushI
	var_133_int = 32344; // 0x1ab PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_134_int = 32346; // 0x1af PushI
	var_135_bool = var_6_int == var_134_int; // 0x1b0 Eq
	if(var_135_bool == 0) goto Label_454; // 0x1b1 JumpB
	var_136_string = ""; // 0x1b2 PushV
	var_136_string = "Neutral"; // 0x1b3 MovS
	func_170(var_7_bool, var_136_string); // 0x1b4 NEW_2
	var_137_int = 531017; // 0x1b6 PushI
	SetMessage(var_137_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_138_int = 531018; // 0x1bb PushI
	var_139_int = -1; // 0x1bc PushI
	var_140_int = 32347; // 0x1bd PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1be TObjFunc
	var_141_int = 531019; // 0x1c0 PushI
	var_142_int = -1; // 0x1c1 PushI
	var_143_int = 32348; // 0x1c2 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1c3 TObjFunc
	return 0; // 0x1c5 Return
	
Label_454:
	var_3_string = 1; // 0x1c6 TMovB
	var_144_bool = 0; // 0x1c7 PushV
	func_885(var_144_bool); // 0x1c8 NEW_2
	if(var_144_bool == 0) goto Label_462; // 0x1ca JumpB
	lshStopAnimation(); // 0x1cb Func
	goto Label_464; // 0x1cd Jump
	
Label_464:
	return 0; // 0x1d0 Return
	
Label_462:
	StopAnimation(); // 0x1ce Func
	
Label_466:
	return 0; // 0x1d2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1ec PushV
	var_9_string = "cleanup"; // 0x1ed PushS
	var_10_bool = var_6_string == var_9_string; // 0x1ee Eq
	if(var_10_bool == 0) goto Label_507; // 0x1ef JumpB
	var_0_object = 1; // 0x1f0 TMovB
	IsLoaded(var_8_bool); // 0x1f1 Func
	var_11_bool = var_8_bool == 0; // 0x1f3 Not
	if(var_11_bool == 0) goto Label_506; // 0x1f4 JumpB
	var_12_object = Obj(); // 0x1f5 PushV
	func_847(var_12_object); // 0x1f6 NEW_2
	RemoveActor(var_12_object); // 0x1f8 Func
	
Label_506:
	goto Label_511; // 0x1fa Jump
	
Label_511:
	return 2; // 0x1ff Return
	
Label_507:
	var_15_string = "restore"; // 0x1fb PushS
	var_16_bool = var_6_string == var_15_string; // 0x1fc Eq
	if(var_16_bool == 0) goto Label_511; // 0x1fd JumpB
	var_0_object = 0; // 0x1fe TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_object = var_0_object; // 0x200 PushT
	if(var_6_object == 0) goto Label_521; // 0x201 JumpB
	var_7_object = Obj(); // 0x202 PushV
	func_847(var_7_object); // 0x203 NEW_2
	RemoveActor(var_7_object); // 0x205 Func
	Hold(); // 0x207 Func
	
Label_521:
	Hold(); // 0x209 Func
	return 0; // 0x20b Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x20c Func
	sync(); // 0x20e Func
	return 0; // 0x210 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x211 PushV
	IsOverrideActive(var_8_bool); // 0x212 Func
	var_9_bool = var_8_bool == 0; // 0x214 Not
	if(var_9_bool == 0) goto Label_544; // 0x215 JumpB
	EventDisable(0); // 0x216 EventDisable
	var_10_bool = 0; var_11_object = Obj(); // 0x217 PushV
	var_11_object = var_6_object; // 0x218 Mov
	func_555(var_11_object); // 0x219 NEW_2
	EventEnable(0); // 0x21b EventEnable
	var_24_object = Obj(); // 0x21c PushV
	var_24_object = var_6_object; // 0x21d Mov
	func_467(var_24_object); // 0x21e NEW_2
	
Label_544:
	return 2; // 0x220 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1db PushV
	func_564(var_6_bool); // 0x1dc NEW_2
	var_9_bool = var_6_bool == 0; // 0x1de Not
	if(var_9_bool == 0) goto Label_482; // 0x1df JumpB
	Hold(); // 0x1e0 Func
	
Label_482:
	var_10_string = ""; // 0x1e2 PushV
	var_10_string = "Neutral"; // 0x1e3 MovS
	func_794(var_10_string); // 0x1e4 NEW_2
	lshWaitForAnimEnd(); // 0x1e6 Func
	goto Label_482; // 0x1e8 Jump
}


func_0(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x0 PushV
	var_0_object = var_26_object; // 0x1 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x2 PushV
	var_37_object = var_26_object; // 0x3 Mov
	var_38_float = 70.0; // 0x4 MovF
	func_569(var_37_object, var_38_float); // 0x5 NEW_2
	var_83_bool = var_36_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_25_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_32_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_879(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_877(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_881(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_883(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_905(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_34_int = -1; // 0x26 MovI
	IsOverrideActive(var_33_bool); // 0x27 Func
	var_96_bool = var_33_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_25_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_32_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_847(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_656(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_26_object; // 0x37 Mov
	var_193_object = var_32_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_35_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_35_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_35_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_26_object; // 0x47 Mov
	func_638(); // 0x48 NEW_2
	StopDialog(var_32_object); // 0x4a Func
	GetReturnValue(var_34_int); // 0x4c ObjFunc
	var_25_int = var_34_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_840()
{
	var_9_bool = 0; // 0x348 PushV
	func_885(var_9_bool); // 0x349 NEW_2
	if(var_9_bool == 0) goto Label_846; // 0x34b JumpB
	lshStopSpeech(); // 0x34c Func
	
Label_846:
	return 0; // 0x34e Return
}


func_905(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x389 PushV
	var_91_string = "branch"; // 0x38a PushS
	GetVariable(var_91_string, var_90_int); // 0x38b Func
	var_92_int = 0; // 0x38d PushI
	var_93_bool = var_90_int == var_92_int; // 0x38e Eq
	if(var_93_bool == 0) goto Label_915; // 0x38f JumpB
	var_88_int = 1; // 0x390 MovI
	return 2; // 0x391 Return
	
Label_915:
	var_94_int = 1; // 0x393 PushI
	var_95_bool = var_90_int == var_94_int; // 0x394 Eq
	if(var_95_bool == 0) goto Label_920; // 0x395 JumpB
	var_88_int = 2; // 0x396 MovI
	return 2; // 0x397 Return
	
Label_920:
	var_88_int = 3; // 0x398 MovI
	return 2; // 0x399 Return
}


func_714(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x2ca PushV
	var_115_string = "c"; // 0x2cb MovS
	var_116_int = 0; // 0x2cc MovI
	
Label_717:
	var_120_int = 1; // 0x2cd PushI
	if(var_120_int == 0) goto Label_730; // 0x2ce JumpB
	var_121_int = 1; // 0x2cf PushI
	var_122_int = var_116_int + var_121_int; // 0x2d0 Add
	var_123_int = var_115_string + var_122_int; // 0x2d1 Add
	HasProperty(var_123_int, var_117_bool); // 0x2d2 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x2d4 Not
	if(var_124_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_730; // 0x2d6 Jump
	
Label_730:
	var_125_bool = var_116_int == 0; // 0x2da Not
	if(var_125_bool == 0) goto Label_734; // 0x2db JumpB
	var_108_bool = 0; // 0x2dc MovB
	return 10; // 0x2dd Return
	
Label_734:
	var_118_int = 0; // 0x2de MovI
	var_126_int = 1; // 0x2df PushI
	var_127_bool = var_116_int > var_126_int; // 0x2e0 GT
	if(var_127_bool == 0) goto Label_740; // 0x2e1 JumpB
	irand(var_118_int, var_116_int); // 0x2e2 Func
	
Label_740:
	var_128_int = 1; // 0x2e4 PushI
	var_129_int = var_118_int + var_128_int; // 0x2e5 Add
	var_130_int = var_115_string + var_129_int; // 0x2e6 Add
	GetProperty(var_130_int, var_119_string); // 0x2e7 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x2e9 PushV
	var_132_string = var_119_string; // 0x2ea Mov
	func_825(var_131_bool, var_132_string); // 0x2eb NEW_2
	var_108_bool = var_131_bool; // 0x2ec Mov
	return 10; // 0x2ee Return
	
Label_727:
	var_137_int = 1; // 0x2d7 PushI
	var_116_int = var_116_int + var_137_int; // 0x2d8 Add2
	goto Label_717; // 0x2d9 Jump
}


func_847(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x34f PushV
	self(var_101_object); // 0x350 Func
	var_99_object = var_101_object; // 0x352 Mov
	return 2; // 0x353 Return
}


func_656(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x290 PushV
	var_106_string = "voice_common"; // 0x291 PushS
	GetVariable(var_106_string, var_104_int); // 0x292 Func
	var_107_int = var_104_int; // 0x294 Push
	if(var_107_int == 0) goto Label_694; // 0x295 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x296 PushV
	var_109_object = var_98_object; // 0x297 Mov
	func_714(var_109_object); // 0x298 NEW_2
	var_138_bool = var_108_bool == 0; // 0x29a Not
	if(var_138_bool == 0) goto Label_676; // 0x29b JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x29c PushV
	var_140_object = var_98_object; // 0x29d Mov
	func_751(var_140_object); // 0x29e NEW_2
	var_174_bool = var_139_bool == 0; // 0x2a0 Not
	if(var_174_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_97_bool = 0; // 0x2a2 MovB
	return 4; // 0x2a3 Return
	
Label_676:
	var_175_int = 2; // 0x2a4 PushI
	irand(var_105_int, var_175_int); // 0x2a5 Func
	var_176_int = var_105_int; // 0x2a7 Push
	if(var_176_int == 0) goto Label_689; // 0x2a8 JumpB
	var_177_string = "voice_common"; // 0x2a9 PushS
	var_178_int = 1; // 0x2aa PushI
	var_179_int = var_104_int + var_178_int; // 0x2ab Add
	var_180_int = 3; // 0x2ac PushI
	var_181_int = var_179_int / var_180_int; // 0x2ad Mod
	SetVariable(var_177_string, var_181_int); // 0x2ae Func
	goto Label_693; // 0x2b0 Jump
	
Label_693:
	goto Label_712; // 0x2b5 Jump
	
Label_712:
	var_97_bool = 1; // 0x2c8 MovB
	return 4; // 0x2c9 Return
	
Label_689:
	var_182_string = "voice_common"; // 0x2b1 PushS
	var_183_int = 0; // 0x2b2 PushI
	SetVariable(var_182_string, var_183_int); // 0x2b3 Func
	
Label_694:
	var_184_bool = 0; var_185_object = Obj(); // 0x2b6 PushV
	var_185_object = var_98_object; // 0x2b7 Mov
	func_751(var_185_object); // 0x2b8 NEW_2
	var_186_bool = var_184_bool == 0; // 0x2ba Not
	if(var_186_bool == 0) goto Label_708; // 0x2bb JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x2bc PushV
	var_188_object = var_98_object; // 0x2bd Mov
	func_714(var_188_object); // 0x2be NEW_2
	var_189_bool = var_187_bool == 0; // 0x2c0 Not
	if(var_189_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_97_bool = 0; // 0x2c2 MovB
	return 4; // 0x2c3 Return
	
Label_708:
	var_190_string = "voice_common"; // 0x2c4 PushS
	var_191_int = 1; // 0x2c5 PushI
	SetVariable(var_190_string, var_191_int); // 0x2c6 Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_140; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_893(var_200_object); // 0x59 NEW_2
	var_207_bool = var_199_bool == 0; // 0x5b Not
	if(var_207_bool == 0) goto Label_118; // 0x5c JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5d PushV
	var_208_object = var_1_object; // 0x5e MovT
	var_209_object = var_0_object; // 0x5f MovT
	func_887(); // 0x60 NEW_2
	var_212_string = ""; // 0x62 PushV
	var_212_string = "Isee"; // 0x63 MovS
	func_170(var_193_object, var_212_string); // 0x64 NEW_2
	var_229_int = 530278; // 0x66 PushI
	SetMessage(var_229_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_230_int = 530919; // 0x6b PushI
	var_231_int = 32247; // 0x6c PushI
	var_232_int = 32246; // 0x6d PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6e TObjFunc
	var_233_int = 530923; // 0x70 PushI
	var_234_int = 32251; // 0x71 PushI
	var_235_int = 32250; // 0x72 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_236_bool = 0; // 0x8c PushV
	func_885(var_236_bool); // 0x8d NEW_2
	if(var_236_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_237_string = var_3_string; // 0x92 PushT
	if(var_237_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_238_string = ""; // 0x95 PushV
	var_238_string = var_2_object; // 0x96 MovT
	func_794(var_238_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_249_string = "all"; // 0x9b PushS
	var_250_string = "idle"; // 0x9c PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_251_string = var_3_string; // 0xa1 PushT
	if(var_251_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_252_string = "all"; // 0xa4 PushS
	var_253_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_254_string = ""; // 0x76 PushV
	var_254_string = "Neutral"; // 0x77 MovS
	func_170(var_193_object, var_254_string); // 0x78 NEW_2
	var_255_int = 530288; // 0x7a PushI
	SetMessage(var_255_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_256_int = 530289; // 0x7f PushI
	var_257_int = -1; // 0x80 PushI
	var_258_int = 31677; // 0x81 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x82 TObjFunc
	var_259_int = 530918; // 0x84 PushI
	var_260_int = -1; // 0x85 PushI
	var_261_int = 32245; // 0x86 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_467(var_24_object)
{
	var_25_int = 0; var_26_object = Obj(); // 0x1d4 PushV
	var_26_object = var_24_object; // 0x1d5 Mov
	TaskCall(0); // 0x1d6 TaskCall
	func_0(var_27_object, var_25_int, var_26_object); // 0x1d7 NEW_2
	TaskReturn(); // 0x1d8 TaskReturn
	return 0; // 0x1da Return
}


func_853(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x355 PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x356 Or
	var_67_float = sqrt(var_68_int); // 0x357 Sqrt2
	var_69_float = 0.0; // 0x358 PushF
	var_70_bool = var_67_float < var_69_float; // 0x359 LT
	if(var_70_bool == 0) goto Label_861; // 0x35a JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x35b MovV
	return 2; // 0x35c Return
	
Label_861:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x35d Div2
	return 2; // 0x35e Return
}


func_794(var_10_string)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_float = 0; // 0x31a PushV
	lshHasAnimation(var_14_bool, var_10_string); // 0x31b Func
	var_17_bool = var_14_bool; // 0x31d Push
	if(var_17_bool == 0) goto Label_805; // 0x31e JumpB
	lshGetAnimTimes(var_10_string, var_15_float, var_16_float); // 0x31f Func
	var_18_bool = 0; // 0x321 PushB
	lshPlayAnimation(var_15_float, var_16_float, var_18_bool); // 0x322 Func
	goto Label_809; // 0x324 Jump
	
Label_809:
	return 6; // 0x329 Return
	
Label_805:
	var_19_string = "Can't find lsh animation : "; // 0x325 PushS
	var_20_int = var_19_string + var_10_string; // 0x326 Add
	Trace(var_20_int); // 0x327 Func
}


func_863(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x35f PushV
	GetVariable(var_202_string, var_204_int); // 0x360 Func
	var_201_int = var_204_int; // 0x362 Mov
	return 2; // 0x363 Return
}


func_545(var_14_bool, var_15_cvector)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; // 0x221 PushV
	GetPosition(var_19_cvector); // 0x222 Func
	var_20_cvector = var_15_cvector - var_19_cvector; // 0x224 Sub2
	var_22_float = GetByIndex(var_20_cvector, 0); // 0x225 PushE
	var_23_float = GetByIndex(var_20_cvector, 2); // 0x226 PushE
	Rotate(var_22_float, var_23_float, var_21_bool); // 0x227 Func
	var_14_bool = var_21_bool; // 0x229 Mov
	return 6; // 0x22a Return
}


func_868(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x364 PushV
	GetGameTime(var_154_float); // 0x365 Func
	var_155_int = 1; // 0x367 PushI
	var_156_int = 0; // 0x368 PushV
	var_157_int = 24; // 0x369 PushI
	var_156_int = var_154_float / var_154_float; // 0x36a Div2
	var_152_int = var_155_int + var_156_int; // 0x36b Add2
	return 2; // 0x36c Return
}


func_170(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xab PushV
	func_885(var_213_bool); // 0xac NEW_2
	var_214_bool = var_213_bool == 0; // 0xae Not
	if(var_214_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_215_bool = var_212_string == var_2_object; // 0xb1 Eq
	if(var_215_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_216_string = ""; var_217_bool = 0; // 0xb4 PushV
	var_216_string = var_212_string; // 0xb5 Mov
	var_218_string = ""; // 0xb6 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb7 Eq
	if(var_219_bool == 0) goto Label_187; // 0xb8 JumpB
	var_217_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_810(var_216_string, var_217_bool); // 0xbc NEW_2
	var_2_object = var_212_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_217_bool = 1; // 0xbb MovB
}


func_810(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x32a PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x32b Func
	var_226_bool = var_223_bool; // 0x32d Push
	if(var_226_bool == 0) goto Label_820; // 0x32e JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x32f Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x331 Func
	goto Label_824; // 0x333 Jump
	
Label_824:
	return 6; // 0x338 Return
	
Label_820:
	var_227_string = "Can't find lsh animation : "; // 0x334 PushS
	var_228_int = var_227_string + var_216_string; // 0x335 Add
	Trace(var_228_int); // 0x336 Func
}


func_555(var_10_bool)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x22b PushV
	GetPosition(var_13_cvector); // 0x22c ObjFunc
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); // 0x22e PushV
	var_15_cvector = var_13_cvector; // 0x22f Mov
	func_545(var_14_bool, var_15_cvector); // 0x230 NEW_2
	var_10_bool = var_14_bool; // 0x231 Mov
	return 2; // 0x233 Return
}


func_877(var_85_int)
{
	var_85_int = 515527; // 0x36d MovI
	return 0; // 0x36e Return
}


func_569(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x239 PushV
	GetPosition(var_49_cvector); // 0x23a ObjFunc
	GetEyesHeight(var_48_float); // 0x23c ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x23e PushE
	var_57_float = var_57_float + var_48_float; // 0x23f Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x240 PopE
	GetPosition(var_50_cvector); // 0x241 Func
	GetEyesHeight(var_48_float); // 0x243 Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x245 PushE
	var_58_float = var_58_float + var_48_float; // 0x246 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x247 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x248 Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x249 PushE
	var_59_float = 0; // 0x24a MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x24b PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x24c Or
	var_61_float = sqrt(var_60_int); // 0x24d Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x24e Div2
	var_52_cvector = -var_51_cvector; // 0x24f Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x250 Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x251 PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x252 PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x253 Xor2
	func_853(var_63_cvector, var_64_cvector); // 0x254 NEW_2
	var_71_int = 25; // 0x256 PushI
	var_72_float = var_63_cvector * var_71_int; // 0x257 Mult
	var_73_int = var_62_float + var_72_float; // 0x258 Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x259 PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x25a Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x25b Add2
	IsOverrideActive(var_55_bool); // 0x25c Func
	var_75_bool = var_55_bool; // 0x25e Push
	if(var_75_bool == 0) goto Label_610; // 0x25f JumpB
	var_36_bool = 0; // 0x260 MovB
	return 18; // 0x261 Return
	
Label_610:
	StopWorld(); // 0x262 Func
	var_76_bool = 1; // 0x264 PushB
	CameraTransit(var_54_cvector, var_52_cvector, var_76_bool); // 0x265 Func
	var_77_float = GetByIndex(var_53_cvector, 0); // 0x267 PushE
	var_78_float = GetByIndex(var_53_cvector, 2); // 0x268 PushE
	Rotate(var_77_float, var_78_float); // 0x269 Func
	var_79_bool = 0; // 0x26b PushV
	func_885(var_79_bool); // 0x26c NEW_2
	if(var_79_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_632; // 0x26f Jump
	
Label_632:
	CameraWaitForPlayFinish(); // 0x278 Func
	ResumeWorld(); // 0x27a Func
	var_36_bool = 1; // 0x27c MovB
	return 18; // 0x27d Return
	
Label_624:
	var_80_string = "head"; // 0x270 PushS
	HasAnimationTrack(var_56_bool, var_80_string); // 0x271 Func
	var_81_bool = var_56_bool; // 0x273 Push
	if(var_81_bool == 0) goto Label_632; // 0x274 JumpB
	var_82_string = "head"; // 0x275 PushS
	LookAsyncCamera(var_82_string); // 0x276 Func
}


func_879(var_84_int)
{
	var_84_int = 513334; // 0x36f MovI
	return 0; // 0x370 Return
}


func_751(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x2ef PushV
	var_151_string = "d"; // 0x2f0 PushS
	var_152_int = 0; // 0x2f1 PushV
	func_868(var_152_int); // 0x2f2 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x2f4 Add
	var_159_string = "m"; // 0x2f5 PushS
	var_146_string = var_158_int + var_159_string; // 0x2f6 Add2
	var_147_int = 0; // 0x2f7 MovI
	
Label_760:
	var_160_int = 1; // 0x2f8 PushI
	if(var_160_int == 0) goto Label_773; // 0x2f9 JumpB
	var_161_int = 1; // 0x2fa PushI
	var_162_int = var_147_int + var_161_int; // 0x2fb Add
	var_163_int = var_146_string + var_162_int; // 0x2fc Add
	HasProperty(var_163_int, var_148_bool); // 0x2fd ObjFunc
	var_164_bool = var_148_bool == 0; // 0x2ff Not
	if(var_164_bool == 0) goto Label_770; // 0x300 JumpB
	goto Label_773; // 0x301 Jump
	
Label_773:
	var_165_bool = var_147_int == 0; // 0x305 Not
	if(var_165_bool == 0) goto Label_777; // 0x306 JumpB
	var_139_bool = 0; // 0x307 MovB
	return 10; // 0x308 Return
	
Label_777:
	var_149_int = 0; // 0x309 MovI
	var_166_int = 1; // 0x30a PushI
	var_167_bool = var_147_int > var_166_int; // 0x30b GT
	if(var_167_bool == 0) goto Label_783; // 0x30c JumpB
	irand(var_149_int, var_147_int); // 0x30d Func
	
Label_783:
	var_168_int = 1; // 0x30f PushI
	var_169_int = var_149_int + var_168_int; // 0x310 Add
	var_170_int = var_146_string + var_169_int; // 0x311 Add
	GetProperty(var_170_int, var_150_string); // 0x312 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x314 PushV
	var_172_string = var_150_string; // 0x315 Mov
	func_825(var_171_bool, var_172_string); // 0x316 NEW_2
	var_139_bool = var_171_bool; // 0x317 Mov
	return 10; // 0x319 Return
	
Label_770:
	var_173_int = 1; // 0x302 PushI
	var_147_int = var_147_int + var_173_int; // 0x303 Add2
	goto Label_760; // 0x304 Jump
}


func_881(var_86_string)
{
	var_86_string = "ui/NPC_Aglaja.png"; // 0x371 MovS
	return 0; // 0x372 Return
}


func_883(var_87_string)
{
	var_87_string = "ui/NPC_Aglaja_b.png"; // 0x373 MovS
	return 0; // 0x374 Return
}


func_564(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x234 PushV
	IsLoaded(var_8_bool); // 0x235 Func
	var_6_bool = var_8_bool; // 0x237 Mov
	return 2; // 0x238 Return
}


func_885(var_79_bool)
{
	var_79_bool = 1; // 0x375 MovB
	return 0; // 0x376 Return
}


func_887()
{
	var_210_string = "b9q03AglajaTalk"; // 0x378 PushS
	var_211_int = 1; // 0x379 PushI
	SetVariable(var_210_string, var_211_int); // 0x37a Func
	return 0; // 0x37c Return
}


func_825(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x339 PushV
	var_135_bool = 0; // 0x33a PushV
	func_885(var_135_bool); // 0x33b NEW_2
	if(var_135_bool == 0) goto Label_838; // 0x33d JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x33e Func
	var_136_bool = var_134_bool; // 0x340 Push
	if(var_136_bool == 0) goto Label_838; // 0x341 JumpB
	lshPlaySpeech(var_132_string); // 0x342 Func
	var_131_bool = 1; // 0x344 MovB
	return 2; // 0x345 Return
	
Label_838:
	var_131_bool = 0; // 0x346 MovB
	return 2; // 0x347 Return
}


func_893(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x37e PushV
	var_202_string = "b9q03AglajaTalk"; // 0x37f MovS
	func_863(var_201_int, var_202_string); // 0x380 NEW_2
	var_205_int = 0; // 0x382 PushI
	var_206_bool = var_201_int != var_205_int; // 0x383 Neq
	if(var_206_bool == 0) goto Label_903; // 0x384 JumpB
	var_199_bool = 1; // 0x385 MovB
	return 0; // 0x386 Return
	
Label_903:
	var_199_bool = 0; // 0x387 MovB
	return 0; // 0x388 Return
}


func_638()
{
	var_264_bool = 0; var_265_bool = 0; // 0x27e PushV
	var_266_bool = 1; // 0x27f PushB
	CameraSwitchToNormal(var_266_bool); // 0x280 Func
	var_267_bool = 0; // 0x282 PushV
	func_885(var_267_bool); // 0x283 NEW_2
	if(var_267_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_655; // 0x286 Jump
	
Label_655:
	return 2; // 0x28f Return
	
Label_647:
	var_268_string = "head"; // 0x287 PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x288 Func
	var_269_bool = var_265_bool; // 0x28a Push
	if(var_269_bool == 0) goto Label_655; // 0x28b JumpB
	var_270_string = "head"; // 0x28c PushS
	UnlookAsync(var_270_string); // 0x28d Func
}


