task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbc PushI
	if(var_8_int == 0) goto Label_503; // 0xbd JumpB
	func_831(); // 0xbf NEW_2
	var_10_int = 24335; // 0xc1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc2 Eq
	if(var_11_bool == 0) goto Label_201; // 0xc3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc4 PushV
	var_12_object = var_1_object; // 0xc5 MovT
	var_13_object = var_0_object; // 0xc6 MovT
	func_868(); // 0xc7 NEW_2
	
Label_201:
	var_16_int = 23347; // 0xc9 PushI
	var_17_bool = var_6_int == var_16_int; // 0xca Eq
	if(var_17_bool == 0) goto Label_250; // 0xcb JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xcc PushV
	var_19_object = var_1_object; // 0xcd MovT
	func_874(var_19_object); // 0xce NEW_2
	var_26_bool = var_18_bool == 0; // 0xd0 Not
	if(var_26_bool == 0) goto Label_235; // 0xd1 JumpB
	var_27_string = ""; // 0xd2 PushV
	var_27_string = "Neutral"; // 0xd3 MovS
	func_165(var_7_bool, var_27_string); // 0xd4 NEW_2
	var_44_int = 522180; // 0xd6 PushI
	SetMessage(var_44_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_45_bool = 0; var_46_object = Obj(); // 0xdb PushV
	var_46_object = var_1_object; // 0xdc MovT
	func_886(var_46_object); // 0xdd NEW_2
	if(var_45_bool == 0) goto Label_229; // 0xdf JumpB
	var_51_int = 523135; // 0xe0 PushI
	var_52_int = 24336; // 0xe1 PushI
	var_53_int = 24335; // 0xe2 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xe3 TObjFunc
	
Label_229:
	var_54_int = 522181; // 0xe5 PushI
	var_55_int = -1; // 0xe6 PushI
	var_56_int = 23348; // 0xe7 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_57_string = ""; // 0xeb PushV
	var_57_string = "Neutral"; // 0xec MovS
	func_165(var_7_bool, var_57_string); // 0xed NEW_2
	var_58_int = 523165; // 0xef PushI
	SetMessage(var_58_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_59_int = 523166; // 0xf4 PushI
	var_60_int = -1; // 0xf5 PushI
	var_61_int = 24368; // 0xf6 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_62_int = 24336; // 0xfa PushI
	var_63_bool = var_6_int == var_62_int; // 0xfb Eq
	if(var_63_bool == 0) goto Label_273; // 0xfc JumpB
	var_64_string = ""; // 0xfd PushV
	var_64_string = "Strength"; // 0xfe MovS
	func_165(var_7_bool, var_64_string); // 0xff NEW_2
	var_65_int = 523136; // 0x101 PushI
	SetMessage(var_65_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_66_int = 523137; // 0x106 PushI
	var_67_int = 24338; // 0x107 PushI
	var_68_int = 24337; // 0x108 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x109 TObjFunc
	var_69_int = 540123; // 0x10b PushI
	var_70_int = 42093; // 0x10c PushI
	var_71_int = 42092; // 0x10d PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_72_int = 42093; // 0x111 PushI
	var_73_bool = var_6_int == var_72_int; // 0x112 Eq
	if(var_73_bool == 0) goto Label_296; // 0x113 JumpB
	var_74_string = ""; // 0x114 PushV
	var_74_string = "Strength"; // 0x115 MovS
	func_165(var_7_bool, var_74_string); // 0x116 NEW_2
	var_75_int = 540124; // 0x118 PushI
	SetMessage(var_75_int); // 0x119 TObjFunc
	ClearReplies(); // 0x11b TObjFunc
	var_76_int = 540125; // 0x11d PushI
	var_77_int = 42095; // 0x11e PushI
	var_78_int = 42094; // 0x11f PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x120 TObjFunc
	var_79_int = 540128; // 0x122 PushI
	var_80_int = 42095; // 0x123 PushI
	var_81_int = 42097; // 0x124 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_82_int = 42095; // 0x128 PushI
	var_83_bool = var_6_int == var_82_int; // 0x129 Eq
	if(var_83_bool == 0) goto Label_314; // 0x12a JumpB
	var_84_string = ""; // 0x12b PushV
	var_84_string = "Strength"; // 0x12c MovS
	func_165(var_7_bool, var_84_string); // 0x12d NEW_2
	var_85_int = 540126; // 0x12f PushI
	SetMessage(var_85_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_86_int = 540127; // 0x134 PushI
	var_87_int = 24338; // 0x135 PushI
	var_88_int = 42096; // 0x136 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_89_int = 24338; // 0x13a PushI
	var_90_bool = var_6_int == var_89_int; // 0x13b Eq
	if(var_90_bool == 0) goto Label_337; // 0x13c JumpB
	var_91_string = ""; // 0x13d PushV
	var_91_string = "Sympathy"; // 0x13e MovS
	func_165(var_7_bool, var_91_string); // 0x13f NEW_2
	var_92_int = 523138; // 0x141 PushI
	SetMessage(var_92_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_93_int = 523139; // 0x146 PushI
	var_94_int = 24340; // 0x147 PushI
	var_95_int = 24339; // 0x148 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x149 TObjFunc
	var_96_int = 523149; // 0x14b PushI
	var_97_int = 24350; // 0x14c PushI
	var_98_int = 24349; // 0x14d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_99_int = 24350; // 0x151 PushI
	var_100_bool = var_6_int == var_99_int; // 0x152 Eq
	if(var_100_bool == 0) goto Label_360; // 0x153 JumpB
	var_101_string = ""; // 0x154 PushV
	var_101_string = "Neutral"; // 0x155 MovS
	func_165(var_7_bool, var_101_string); // 0x156 NEW_2
	var_102_int = 523150; // 0x158 PushI
	SetMessage(var_102_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_103_int = 523151; // 0x15d PushI
	var_104_int = -1; // 0x15e PushI
	var_105_int = 24351; // 0x15f PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x160 TObjFunc
	var_106_int = 523152; // 0x162 PushI
	var_107_int = 24340; // 0x163 PushI
	var_108_int = 24352; // 0x164 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_109_int = 24340; // 0x168 PushI
	var_110_bool = var_6_int == var_109_int; // 0x169 Eq
	if(var_110_bool == 0) goto Label_383; // 0x16a JumpB
	var_111_string = ""; // 0x16b PushV
	var_111_string = "Sympathy"; // 0x16c MovS
	func_165(var_7_bool, var_111_string); // 0x16d NEW_2
	var_112_int = 523140; // 0x16f PushI
	SetMessage(var_112_int); // 0x170 TObjFunc
	ClearReplies(); // 0x172 TObjFunc
	var_113_int = 523141; // 0x174 PushI
	var_114_int = 24342; // 0x175 PushI
	var_115_int = 24341; // 0x176 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x177 TObjFunc
	var_116_int = 523153; // 0x179 PushI
	var_117_int = 24355; // 0x17a PushI
	var_118_int = 24354; // 0x17b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_119_int = 24355; // 0x17f PushI
	var_120_bool = var_6_int == var_119_int; // 0x180 Eq
	if(var_120_bool == 0) goto Label_401; // 0x181 JumpB
	var_121_string = ""; // 0x182 PushV
	var_121_string = "Sympathy"; // 0x183 MovS
	func_165(var_7_bool, var_121_string); // 0x184 NEW_2
	var_122_int = 523154; // 0x186 PushI
	SetMessage(var_122_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_123_int = 523155; // 0x18b PushI
	var_124_int = 24357; // 0x18c PushI
	var_125_int = 24356; // 0x18d PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_126_int = 24357; // 0x191 PushI
	var_127_bool = var_6_int == var_126_int; // 0x192 Eq
	if(var_127_bool == 0) goto Label_419; // 0x193 JumpB
	var_128_string = ""; // 0x194 PushV
	var_128_string = "Strength"; // 0x195 MovS
	func_165(var_7_bool, var_128_string); // 0x196 NEW_2
	var_129_int = 523156; // 0x198 PushI
	SetMessage(var_129_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_130_int = 523157; // 0x19d PushI
	var_131_int = 24342; // 0x19e PushI
	var_132_int = 24358; // 0x19f PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_133_int = 24342; // 0x1a3 PushI
	var_134_bool = var_6_int == var_133_int; // 0x1a4 Eq
	if(var_134_bool == 0) goto Label_437; // 0x1a5 JumpB
	var_135_string = ""; // 0x1a6 PushV
	var_135_string = "Sympathy"; // 0x1a7 MovS
	func_165(var_7_bool, var_135_string); // 0x1a8 NEW_2
	var_136_int = 523142; // 0x1aa PushI
	SetMessage(var_136_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_137_int = 523143; // 0x1af PushI
	var_138_int = 24344; // 0x1b0 PushI
	var_139_int = 24343; // 0x1b1 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_140_int = 24344; // 0x1b5 PushI
	var_141_bool = var_6_int == var_140_int; // 0x1b6 Eq
	if(var_141_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_142_string = ""; // 0x1b8 PushV
	var_142_string = "Sympathy"; // 0x1b9 MovS
	func_165(var_7_bool, var_142_string); // 0x1ba NEW_2
	var_143_int = 523144; // 0x1bc PushI
	SetMessage(var_143_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_144_int = 523145; // 0x1c1 PushI
	var_145_int = 24346; // 0x1c2 PushI
	var_146_int = 24345; // 0x1c3 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_147_int = 24346; // 0x1c7 PushI
	var_148_bool = var_6_int == var_147_int; // 0x1c8 Eq
	if(var_148_bool == 0) goto Label_473; // 0x1c9 JumpB
	var_149_string = ""; // 0x1ca PushV
	var_149_string = "Sympathy"; // 0x1cb MovS
	func_165(var_7_bool, var_149_string); // 0x1cc NEW_2
	var_150_int = 523146; // 0x1ce PushI
	SetMessage(var_150_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_151_int = 523147; // 0x1d3 PushI
	var_152_int = 24348; // 0x1d4 PushI
	var_153_int = 24347; // 0x1d5 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_154_int = 24348; // 0x1d9 PushI
	var_155_bool = var_6_int == var_154_int; // 0x1da Eq
	if(var_155_bool == 0) goto Label_491; // 0x1db JumpB
	var_156_string = ""; // 0x1dc PushV
	var_156_string = "Fear"; // 0x1dd MovS
	func_165(var_7_bool, var_156_string); // 0x1de NEW_2
	var_157_int = 523148; // 0x1e0 PushI
	SetMessage(var_157_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_158_int = 523158; // 0x1e5 PushI
	var_159_int = -1; // 0x1e6 PushI
	var_160_int = 24360; // 0x1e7 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_3_string = 1; // 0x1eb TMovB
	var_161_bool = 0; // 0x1ec PushV
	func_923(var_161_bool); // 0x1ed NEW_2
	if(var_161_bool == 0) goto Label_499; // 0x1ef JumpB
	lshStopAnimation(); // 0x1f0 Func
	goto Label_501; // 0x1f2 Jump
	
Label_501:
	return 0; // 0x1f5 Return
	
Label_499:
	StopAnimation(); // 0x1f3 Func
	
Label_503:
	return 0; // 0x1f7 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1fd PushV
	var_8_object = var_6_object; // 0x1fe Mov
	TaskCall(0); // 0x1ff TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x200 NEW_2
	TaskReturn(); // 0x201 TaskReturn
	return 0; // 0x203 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x204 PushV
	var_9_string = "cleanup"; // 0x205 PushS
	var_10_bool = var_6_string == var_9_string; // 0x206 Eq
	if(var_10_bool == 0) goto Label_539; // 0x207 JumpB
	var_0_object = 1; // 0x208 TMovB
	IsLoaded(var_8_bool); // 0x209 Func
	var_11_bool = 0; // 0x20b PushV
	var_11_bool = 0; // 0x20c MovB
	var_12_bool = var_8_bool == 0; // 0x20d Not
	if(var_12_bool == 0) goto Label_532; // 0x20e JumpB
	var_13_bool = 0; // 0x20f PushV
	func_560(var_13_bool); // 0x210 NEW_2
	if(var_13_bool == 0) goto Label_532; // 0x212 JumpB
	var_11_bool = 1; // 0x213 MovB
	
Label_532:
	if(var_11_bool == 0) goto Label_538; // 0x214 JumpB
	var_14_object = Obj(); // 0x215 PushV
	func_838(var_14_object); // 0x216 NEW_2
	RemoveActor(var_14_object); // 0x218 Func
	
Label_538:
	goto Label_543; // 0x21a Jump
	
Label_543:
	return 2; // 0x21f Return
	
Label_539:
	var_17_string = "restore"; // 0x21b PushS
	var_18_bool = var_6_string == var_17_string; // 0x21c Eq
	if(var_18_bool == 0) goto Label_543; // 0x21d JumpB
	var_0_object = 0; // 0x21e TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x220 PushV
	var_6_bool = 0; // 0x221 MovB
	var_7_object = var_0_object; // 0x222 PushT
	if(var_7_object == 0) goto Label_553; // 0x223 JumpB
	var_8_bool = 0; // 0x224 PushV
	func_560(var_8_bool); // 0x225 NEW_2
	if(var_8_bool == 0) goto Label_553; // 0x227 JumpB
	var_6_bool = 1; // 0x228 MovB
	
Label_553:
	if(var_6_bool == 0) goto Label_559; // 0x229 JumpB
	var_9_object = Obj(); // 0x22a PushV
	func_838(var_9_object); // 0x22b NEW_2
	RemoveActor(var_9_object); // 0x22d Func
	
Label_559:
	return 0; // 0x22f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_504:
	Hold(); // 0x1f8 Func
	goto Label_504; // 0x1fa Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_562(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_917(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_915(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_919(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_921(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_898(var_69_int); // 0x22 NEW_2
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
	func_838(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_647(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_242_bool = var_17_bool == 0; // 0x3f Not
	if(var_242_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_243_object = Obj(); // 0x46 PushV
	var_243_object = var_8_object; // 0x47 Mov
	func_630(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_705(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2c1 PushV
	var_96_string = "c"; // 0x2c2 MovS
	var_97_int = 0; // 0x2c3 MovI
	
Label_708:
	var_101_int = 1; // 0x2c4 PushI
	if(var_101_int == 0) goto Label_721; // 0x2c5 JumpB
	var_102_int = 1; // 0x2c6 PushI
	var_103_int = var_97_int + var_102_int; // 0x2c7 Add
	var_104_int = var_96_string + var_103_int; // 0x2c8 Add
	HasProperty(var_104_int, var_98_bool); // 0x2c9 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2cb Not
	if(var_105_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_721; // 0x2cd Jump
	
Label_721:
	var_106_bool = var_97_int == 0; // 0x2d1 Not
	if(var_106_bool == 0) goto Label_725; // 0x2d2 JumpB
	var_89_bool = 0; // 0x2d3 MovB
	return 10; // 0x2d4 Return
	
Label_725:
	var_99_int = 0; // 0x2d5 MovI
	var_107_int = 1; // 0x2d6 PushI
	var_108_bool = var_97_int > var_107_int; // 0x2d7 GT
	if(var_108_bool == 0) goto Label_731; // 0x2d8 JumpB
	irand(var_99_int, var_97_int); // 0x2d9 Func
	
Label_731:
	var_109_int = 1; // 0x2db PushI
	var_110_int = var_99_int + var_109_int; // 0x2dc Add
	var_111_int = var_96_string + var_110_int; // 0x2dd Add
	GetProperty(var_111_int, var_100_string); // 0x2de ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x2e0 PushV
	var_113_string = var_100_string; // 0x2e1 Mov
	func_816(var_112_bool, var_113_string); // 0x2e2 NEW_2
	var_89_bool = var_112_bool; // 0x2e3 Mov
	return 10; // 0x2e5 Return
	
Label_718:
	var_118_int = 1; // 0x2ce PushI
	var_97_int = var_97_int + var_118_int; // 0x2cf Add2
	goto Label_708; // 0x2d0 Jump
}


func_898(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x382 PushV
	var_72_string = "branch"; // 0x383 PushS
	GetVariable(var_72_string, var_71_int); // 0x384 Func
	var_73_int = 0; // 0x386 PushI
	var_74_bool = var_71_int == var_73_int; // 0x387 Eq
	if(var_74_bool == 0) goto Label_908; // 0x388 JumpB
	var_69_int = 1; // 0x389 MovI
	return 2; // 0x38a Return
	
Label_908:
	var_75_int = 1; // 0x38c PushI
	var_76_bool = var_71_int == var_75_int; // 0x38d Eq
	if(var_76_bool == 0) goto Label_913; // 0x38e JumpB
	var_69_int = 2; // 0x38f MovI
	return 2; // 0x390 Return
	
Label_913:
	var_69_int = 3; // 0x391 MovI
	return 2; // 0x392 Return
}


func_838(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x346 PushV
	self(var_11_object); // 0x347 Func
	var_9_object = var_11_object; // 0x349 Mov
	return 2; // 0x34a Return
}


func_647(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x287 PushV
	var_87_string = "voice_common"; // 0x288 PushS
	GetVariable(var_87_string, var_85_int); // 0x289 Func
	var_88_int = var_85_int; // 0x28b Push
	if(var_88_int == 0) goto Label_685; // 0x28c JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x28d PushV
	var_90_object = var_79_object; // 0x28e Mov
	func_705(var_90_object); // 0x28f NEW_2
	var_119_bool = var_89_bool == 0; // 0x291 Not
	if(var_119_bool == 0) goto Label_667; // 0x292 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x293 PushV
	var_121_object = var_79_object; // 0x294 Mov
	func_742(var_121_object); // 0x295 NEW_2
	var_155_bool = var_120_bool == 0; // 0x297 Not
	if(var_155_bool == 0) goto Label_667; // 0x298 JumpB
	var_78_bool = 0; // 0x299 MovB
	return 4; // 0x29a Return
	
Label_667:
	var_156_int = 2; // 0x29b PushI
	irand(var_86_int, var_156_int); // 0x29c Func
	var_157_int = var_86_int; // 0x29e Push
	if(var_157_int == 0) goto Label_680; // 0x29f JumpB
	var_158_string = "voice_common"; // 0x2a0 PushS
	var_159_int = 1; // 0x2a1 PushI
	var_160_int = var_85_int + var_159_int; // 0x2a2 Add
	var_161_int = 3; // 0x2a3 PushI
	var_162_int = var_160_int / var_161_int; // 0x2a4 Mod
	SetVariable(var_158_string, var_162_int); // 0x2a5 Func
	goto Label_684; // 0x2a7 Jump
	
Label_684:
	goto Label_703; // 0x2ac Jump
	
Label_703:
	var_78_bool = 1; // 0x2bf MovB
	return 4; // 0x2c0 Return
	
Label_680:
	var_163_string = "voice_common"; // 0x2a8 PushS
	var_164_int = 0; // 0x2a9 PushI
	SetVariable(var_163_string, var_164_int); // 0x2aa Func
	
Label_685:
	var_165_bool = 0; var_166_object = Obj(); // 0x2ad PushV
	var_166_object = var_79_object; // 0x2ae Mov
	func_742(var_166_object); // 0x2af NEW_2
	var_167_bool = var_165_bool == 0; // 0x2b1 Not
	if(var_167_bool == 0) goto Label_699; // 0x2b2 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2b3 PushV
	var_169_object = var_79_object; // 0x2b4 Mov
	func_705(var_169_object); // 0x2b5 NEW_2
	var_170_bool = var_168_bool == 0; // 0x2b7 Not
	if(var_170_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_78_bool = 0; // 0x2b9 MovB
	return 4; // 0x2ba Return
	
Label_699:
	var_171_string = "voice_common"; // 0x2bb PushS
	var_172_int = 1; // 0x2bc PushI
	SetVariable(var_171_string, var_172_int); // 0x2bd Func
}


func_844(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x34c PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x34d Or
	var_49_float = sqrt(var_50_int); // 0x34e Sqrt2
	var_51_float = 0.0; // 0x34f PushF
	var_52_bool = var_49_float < var_51_float; // 0x350 LT
	if(var_52_bool == 0) goto Label_852; // 0x351 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x352 MovV
	return 2; // 0x353 Return
	
Label_852:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x354 Div2
	return 2; // 0x355 Return
}


func_785(var_221_string)
{
	var_222_bool = 0; var_223_float = 0; var_224_float = 0; var_225_bool = 0; var_226_float = 0; var_227_float = 0; // 0x311 PushV
	lshHasAnimation(var_225_bool, var_221_string); // 0x312 Func
	var_228_bool = var_225_bool; // 0x314 Push
	if(var_228_bool == 0) goto Label_796; // 0x315 JumpB
	lshGetAnimTimes(var_221_string, var_226_float, var_227_float); // 0x316 Func
	var_229_bool = 0; // 0x318 PushB
	lshPlayAnimation(var_226_float, var_227_float, var_229_bool); // 0x319 Func
	goto Label_800; // 0x31b Jump
	
Label_800:
	return 6; // 0x320 Return
	
Label_796:
	var_230_string = "Can't find lsh animation : "; // 0x31c PushS
	var_231_int = var_230_string + var_221_string; // 0x31d Add
	Trace(var_231_int); // 0x31e Func
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
	func_874(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_118; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_165(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 522180; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_886(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 523135; // 0x6b PushI
	var_214_int = 24336; // 0x6c PushI
	var_215_int = 24335; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_int = 522181; // 0x70 PushI
	var_217_int = -1; // 0x71 PushI
	var_218_int = 23348; // 0x72 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x73 TObjFunc
	goto Label_135; // 0x75 Jump
	
Label_135:
	var_219_bool = 0; // 0x87 PushV
	func_923(var_219_bool); // 0x88 NEW_2
	if(var_219_bool == 0) goto Label_150; // 0x8a JumpB
	
Label_139:
	lshWaitForAnimEnd(); // 0x8b Func
	var_220_string = var_3_string; // 0x8d PushT
	if(var_220_string == 0) goto Label_144; // 0x8e JumpB
	goto Label_149; // 0x8f Jump
	
Label_149:
	goto Label_164; // 0x95 Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_144:
	var_221_string = ""; // 0x90 PushV
	var_221_string = var_2_object; // 0x91 MovT
	func_785(var_221_string); // 0x92 NEW_2
	goto Label_139; // 0x94 Jump
	
Label_150:
	var_232_string = "all"; // 0x96 PushS
	var_233_string = "idle"; // 0x97 PushS
	PlayAnimation(var_232_string, var_233_string); // 0x98 Func
	
Label_154:
	WaitForAnimEnd(); // 0x9a Func
	var_234_string = var_3_string; // 0x9c PushT
	if(var_234_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_159:
	var_235_string = "all"; // 0x9f PushS
	var_236_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_235_string, var_236_string); // 0xa1 Func
	goto Label_154; // 0xa3 Jump
	
Label_118:
	var_237_string = ""; // 0x76 PushV
	var_237_string = "Neutral"; // 0x77 MovS
	func_165(var_174_object, var_237_string); // 0x78 NEW_2
	var_238_int = 523165; // 0x7a PushI
	SetMessage(var_238_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_239_int = 523166; // 0x7f PushI
	var_240_int = -1; // 0x80 PushI
	var_241_int = 24368; // 0x81 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x82 TObjFunc
	goto Label_135; // 0x84 Jump
}


func_915(var_66_int)
{
	var_66_int = 515538; // 0x393 MovI
	return 0; // 0x394 Return
}


func_917(var_65_int)
{
	var_65_int = 502863; // 0x395 MovI
	return 0; // 0x396 Return
}


func_854(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x356 PushV
	GetVariable(var_183_string, var_185_int); // 0x357 Func
	var_182_int = var_185_int; // 0x359 Mov
	return 2; // 0x35a Return
}


func_919(var_67_string)
{
	var_67_string = "ui/NPC_Kapella.png"; // 0x397 MovS
	return 0; // 0x398 Return
}


func_921(var_68_string)
{
	var_68_string = "ui/NPC_Kapella_b.png"; // 0x399 MovS
	return 0; // 0x39a Return
}


func_923(var_60_bool)
{
	var_60_bool = 1; // 0x39b MovB
	return 0; // 0x39c Return
}


func_859(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x35b PushV
	GetGameTime(var_135_float); // 0x35c Func
	var_136_int = 1; // 0x35e PushI
	var_137_int = 0; // 0x35f PushV
	var_138_int = 24; // 0x360 PushI
	var_137_int = var_135_float / var_135_float; // 0x361 Div2
	var_133_int = var_136_int + var_137_int; // 0x362 Add2
	return 2; // 0x363 Return
}


func_801(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x321 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x322 Func
	var_203_bool = var_200_bool; // 0x324 Push
	if(var_203_bool == 0) goto Label_811; // 0x325 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x326 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x328 Func
	goto Label_815; // 0x32a Jump
	
Label_815:
	return 6; // 0x32f Return
	
Label_811:
	var_204_string = "Can't find lsh animation : "; // 0x32b PushS
	var_205_int = var_204_string + var_193_string; // 0x32c Add
	Trace(var_205_int); // 0x32d Func
}


func_868()
{
	var_14_string = "oob12KapellaSobor1"; // 0x365 PushS
	var_15_int = 1; // 0x366 PushI
	SetVariable(var_14_string, var_15_int); // 0x367 Func
	return 0; // 0x369 Return
}


func_165(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xa6 PushV
	func_923(var_190_bool); // 0xa7 NEW_2
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
	func_801(var_193_string, var_194_bool); // 0xb7 NEW_2
	var_2_object = var_189_string; // 0xb9 TMov
	return 0; // 0xba Return
	
Label_182:
	var_194_bool = 1; // 0xb6 MovB
}


func_742(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x2e6 PushV
	var_132_string = "d"; // 0x2e7 PushS
	var_133_int = 0; // 0x2e8 PushV
	func_859(var_133_int); // 0x2e9 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2eb Add
	var_140_string = "m"; // 0x2ec PushS
	var_127_string = var_139_int + var_140_string; // 0x2ed Add2
	var_128_int = 0; // 0x2ee MovI
	
Label_751:
	var_141_int = 1; // 0x2ef PushI
	if(var_141_int == 0) goto Label_764; // 0x2f0 JumpB
	var_142_int = 1; // 0x2f1 PushI
	var_143_int = var_128_int + var_142_int; // 0x2f2 Add
	var_144_int = var_127_string + var_143_int; // 0x2f3 Add
	HasProperty(var_144_int, var_129_bool); // 0x2f4 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2f6 Not
	if(var_145_bool == 0) goto Label_761; // 0x2f7 JumpB
	goto Label_764; // 0x2f8 Jump
	
Label_764:
	var_146_bool = var_128_int == 0; // 0x2fc Not
	if(var_146_bool == 0) goto Label_768; // 0x2fd JumpB
	var_120_bool = 0; // 0x2fe MovB
	return 10; // 0x2ff Return
	
Label_768:
	var_130_int = 0; // 0x300 MovI
	var_147_int = 1; // 0x301 PushI
	var_148_bool = var_128_int > var_147_int; // 0x302 GT
	if(var_148_bool == 0) goto Label_774; // 0x303 JumpB
	irand(var_130_int, var_128_int); // 0x304 Func
	
Label_774:
	var_149_int = 1; // 0x306 PushI
	var_150_int = var_130_int + var_149_int; // 0x307 Add
	var_151_int = var_127_string + var_150_int; // 0x308 Add
	GetProperty(var_151_int, var_131_string); // 0x309 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x30b PushV
	var_153_string = var_131_string; // 0x30c Mov
	func_816(var_152_bool, var_153_string); // 0x30d NEW_2
	var_120_bool = var_152_bool; // 0x30e Mov
	return 10; // 0x310 Return
	
Label_761:
	var_154_int = 1; // 0x2f9 PushI
	var_128_int = var_128_int + var_154_int; // 0x2fa Add2
	goto Label_751; // 0x2fb Jump
}


func_874(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x36b PushV
	var_183_string = "game_final"; // 0x36c MovS
	func_854(var_182_int, var_183_string); // 0x36d NEW_2
	var_186_int = 0; // 0x36f PushI
	var_187_bool = var_182_int != var_186_int; // 0x370 Neq
	if(var_187_bool == 0) goto Label_884; // 0x371 JumpB
	var_180_bool = 1; // 0x372 MovB
	return 0; // 0x373 Return
	
Label_884:
	var_180_bool = 0; // 0x374 MovB
	return 0; // 0x375 Return
}


func_560(var_8_bool)
{
	var_8_bool = 1; // 0x230 MovB
	return 0; // 0x231 Return
}


func_816(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x330 PushV
	var_116_bool = 0; // 0x331 PushV
	func_923(var_116_bool); // 0x332 NEW_2
	if(var_116_bool == 0) goto Label_829; // 0x334 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x335 Func
	var_117_bool = var_115_bool; // 0x337 Push
	if(var_117_bool == 0) goto Label_829; // 0x338 JumpB
	lshPlaySpeech(var_113_string); // 0x339 Func
	var_112_bool = 1; // 0x33b MovB
	return 2; // 0x33c Return
	
Label_829:
	var_112_bool = 0; // 0x33d MovB
	return 2; // 0x33e Return
}


func_562(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x232 PushV
	GetPosition(var_31_cvector); // 0x233 ObjFunc
	GetEyesHeight(var_30_float); // 0x235 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x237 PushE
	var_39_float = var_39_float + var_30_float; // 0x238 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x239 PopE
	GetPosition(var_32_cvector); // 0x23a Func
	GetEyesHeight(var_30_float); // 0x23c Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x23e PushE
	var_40_float = var_40_float + var_30_float; // 0x23f Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x240 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x241 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x242 PushE
	var_41_float = 0; // 0x243 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x244 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x245 Or
	var_43_float = sqrt(var_42_int); // 0x246 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x247 Div2
	var_34_cvector = -var_33_cvector; // 0x248 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x249 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x24a PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x24b PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x24c Xor2
	func_844(var_45_cvector, var_46_cvector); // 0x24d NEW_2
	var_53_int = 25; // 0x24f PushI
	var_54_float = var_45_cvector * var_53_int; // 0x250 Mult
	var_55_int = var_44_float + var_54_float; // 0x251 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x252 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x253 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x254 Add2
	IsOverrideActive(var_37_bool); // 0x255 Func
	var_57_bool = var_37_bool; // 0x257 Push
	if(var_57_bool == 0) goto Label_603; // 0x258 JumpB
	var_18_bool = 0; // 0x259 MovB
	return 18; // 0x25a Return
	
Label_603:
	StopWorld(); // 0x25b Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x25d Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x25f PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x260 PushE
	Rotate(var_58_float, var_59_float); // 0x261 Func
	var_60_bool = 0; // 0x263 PushV
	func_923(var_60_bool); // 0x264 NEW_2
	if(var_60_bool == 0) goto Label_616; // 0x266 JumpB
	goto Label_624; // 0x267 Jump
	
Label_624:
	CameraWaitForPlayFinish(); // 0x270 Func
	ResumeWorld(); // 0x272 Func
	var_18_bool = 1; // 0x274 MovB
	return 18; // 0x275 Return
	
Label_616:
	var_61_string = "head"; // 0x268 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x269 Func
	var_62_bool = var_38_bool; // 0x26b Push
	if(var_62_bool == 0) goto Label_624; // 0x26c JumpB
	var_63_string = "head"; // 0x26d PushS
	LookAsyncCamera(var_63_string); // 0x26e Func
}


func_630()
{
	var_244_bool = 0; var_245_bool = 0; // 0x276 PushV
	CameraSwitchToNormal(); // 0x277 Func
	var_246_bool = 0; // 0x279 PushV
	func_923(var_246_bool); // 0x27a NEW_2
	if(var_246_bool == 0) goto Label_638; // 0x27c JumpB
	goto Label_646; // 0x27d Jump
	
Label_646:
	return 2; // 0x286 Return
	
Label_638:
	var_247_string = "head"; // 0x27e PushS
	HasAnimationTrack(var_245_bool, var_247_string); // 0x27f Func
	var_248_bool = var_245_bool; // 0x281 Push
	if(var_248_bool == 0) goto Label_646; // 0x282 JumpB
	var_249_string = "head"; // 0x283 PushS
	UnlookAsync(var_249_string); // 0x284 Func
}


func_886(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x377 PushV
	var_210_string = "oob12KapellaSobor1"; // 0x378 MovS
	func_854(var_209_int, var_210_string); // 0x379 NEW_2
	var_211_int = 0; // 0x37b PushI
	var_212_bool = var_209_int == var_211_int; // 0x37c Eq
	if(var_212_bool == 0) goto Label_896; // 0x37d JumpB
	var_207_bool = 1; // 0x37e MovB
	return 0; // 0x37f Return
	
Label_896:
	var_207_bool = 0; // 0x380 MovB
	return 0; // 0x381 Return
}


func_831()
{
	var_9_bool = 0; // 0x33f PushV
	func_923(var_9_bool); // 0x340 NEW_2
	if(var_9_bool == 0) goto Label_837; // 0x342 JumpB
	lshStopSpeech(); // 0x343 Func
	
Label_837:
	return 0; // 0x345 Return
}


