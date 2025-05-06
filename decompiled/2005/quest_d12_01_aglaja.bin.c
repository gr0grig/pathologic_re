task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_468; // 0xad JumpB
	func_800(); // 0xaf NEW_2
	var_10_int = 40335; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_185; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_837(); // 0xb7 NEW_2
	
Label_185:
	var_16_int = 40334; // 0xb9 PushI
	var_17_bool = var_6_int == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_218; // 0xbb JumpB
	var_18_string = ""; // 0xbc PushV
	var_18_string = "Neutral"; // 0xbd MovS
	func_149(var_7_bool, var_18_string); // 0xbe NEW_2
	var_35_int = 538452; // 0xc0 PushI
	SetMessage(var_35_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_36_bool = 0; var_37_object = Obj(); // 0xc5 PushV
	var_37_object = var_1_object; // 0xc6 MovT
	func_843(var_37_object); // 0xc7 NEW_2
	if(var_36_bool == 0) goto Label_207; // 0xc9 JumpB
	var_44_int = 538453; // 0xca PushI
	var_45_int = 40350; // 0xcb PushI
	var_46_int = 40335; // 0xcc PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xcd TObjFunc
	
Label_207:
	var_47_int = 538470; // 0xcf PushI
	var_48_int = -1; // 0xd0 PushI
	var_49_int = 40352; // 0xd1 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xd2 TObjFunc
	var_50_int = 538472; // 0xd4 PushI
	var_51_int = -1; // 0xd5 PushI
	var_52_int = 40354; // 0xd6 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_53_int = 40350; // 0xda PushI
	var_54_bool = var_6_int == var_53_int; // 0xdb Eq
	if(var_54_bool == 0) goto Label_241; // 0xdc JumpB
	var_55_string = ""; // 0xdd PushV
	var_55_string = "Isee"; // 0xde MovS
	func_149(var_7_bool, var_55_string); // 0xdf NEW_2
	var_56_int = 538468; // 0xe1 PushI
	SetMessage(var_56_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_57_int = 539946; // 0xe6 PushI
	var_58_int = 41911; // 0xe7 PushI
	var_59_int = 41910; // 0xe8 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe9 TObjFunc
	var_60_int = 539948; // 0xeb PushI
	var_61_int = -1; // 0xec PushI
	var_62_int = 41912; // 0xed PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_63_int = 41911; // 0xf1 PushI
	var_64_bool = var_6_int == var_63_int; // 0xf2 Eq
	if(var_64_bool == 0) goto Label_264; // 0xf3 JumpB
	var_65_string = ""; // 0xf4 PushV
	var_65_string = "Isee"; // 0xf5 MovS
	func_149(var_7_bool, var_65_string); // 0xf6 NEW_2
	var_66_int = 539947; // 0xf8 PushI
	SetMessage(var_66_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_67_int = 539949; // 0xfd PushI
	var_68_int = 41914; // 0xfe PushI
	var_69_int = 41913; // 0xff PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x100 TObjFunc
	var_70_int = 539951; // 0x102 PushI
	var_71_int = -1; // 0x103 PushI
	var_72_int = 41915; // 0x104 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_73_int = 41914; // 0x108 PushI
	var_74_bool = var_6_int == var_73_int; // 0x109 Eq
	if(var_74_bool == 0) goto Label_287; // 0x10a JumpB
	var_75_string = ""; // 0x10b PushV
	var_75_string = "Neutral"; // 0x10c MovS
	func_149(var_7_bool, var_75_string); // 0x10d NEW_2
	var_76_int = 539950; // 0x10f PushI
	SetMessage(var_76_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_77_int = 538469; // 0x114 PushI
	var_78_int = 40336; // 0x115 PushI
	var_79_int = 40351; // 0x116 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x117 TObjFunc
	var_80_int = 539952; // 0x119 PushI
	var_81_int = 40338; // 0x11a PushI
	var_82_int = 41916; // 0x11b PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_83_int = 40336; // 0x11f PushI
	var_84_bool = var_6_int == var_83_int; // 0x120 Eq
	if(var_84_bool == 0) goto Label_310; // 0x121 JumpB
	var_85_string = ""; // 0x122 PushV
	var_85_string = "Neutral"; // 0x123 MovS
	func_149(var_7_bool, var_85_string); // 0x124 NEW_2
	var_86_int = 538454; // 0x126 PushI
	SetMessage(var_86_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_87_int = 538455; // 0x12b PushI
	var_88_int = 40338; // 0x12c PushI
	var_89_int = 40337; // 0x12d PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x12e TObjFunc
	var_90_int = 539953; // 0x130 PushI
	var_91_int = 40342; // 0x131 PushI
	var_92_int = 41918; // 0x132 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_93_int = 40338; // 0x136 PushI
	var_94_bool = var_6_int == var_93_int; // 0x137 Eq
	if(var_94_bool == 0) goto Label_328; // 0x138 JumpB
	var_95_string = ""; // 0x139 PushV
	var_95_string = "Neutral"; // 0x13a MovS
	func_149(var_7_bool, var_95_string); // 0x13b NEW_2
	var_96_int = 538456; // 0x13d PushI
	SetMessage(var_96_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_97_int = 538457; // 0x142 PushI
	var_98_int = 40340; // 0x143 PushI
	var_99_int = 40339; // 0x144 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_100_int = 40340; // 0x148 PushI
	var_101_bool = var_6_int == var_100_int; // 0x149 Eq
	if(var_101_bool == 0) goto Label_346; // 0x14a JumpB
	var_102_string = ""; // 0x14b PushV
	var_102_string = "Neutral"; // 0x14c MovS
	func_149(var_7_bool, var_102_string); // 0x14d NEW_2
	var_103_int = 538458; // 0x14f PushI
	SetMessage(var_103_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_104_int = 538459; // 0x154 PushI
	var_105_int = 40342; // 0x155 PushI
	var_106_int = 40341; // 0x156 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_107_int = 40342; // 0x15a PushI
	var_108_bool = var_6_int == var_107_int; // 0x15b Eq
	if(var_108_bool == 0) goto Label_369; // 0x15c JumpB
	var_109_string = ""; // 0x15d PushV
	var_109_string = "Threat"; // 0x15e MovS
	func_149(var_7_bool, var_109_string); // 0x15f NEW_2
	var_110_int = 538460; // 0x161 PushI
	SetMessage(var_110_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_111_int = 538461; // 0x166 PushI
	var_112_int = 40344; // 0x167 PushI
	var_113_int = 40343; // 0x168 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x169 TObjFunc
	var_114_int = 538475; // 0x16b PushI
	var_115_int = 40344; // 0x16c PushI
	var_116_int = 40358; // 0x16d PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_117_int = 40344; // 0x171 PushI
	var_118_bool = var_6_int == var_117_int; // 0x172 Eq
	if(var_118_bool == 0) goto Label_387; // 0x173 JumpB
	var_119_string = ""; // 0x174 PushV
	var_119_string = "Threat"; // 0x175 MovS
	func_149(var_7_bool, var_119_string); // 0x176 NEW_2
	var_120_int = 538462; // 0x178 PushI
	SetMessage(var_120_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_121_int = 538463; // 0x17d PushI
	var_122_int = 40346; // 0x17e PushI
	var_123_int = 40345; // 0x17f PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_124_int = 40346; // 0x183 PushI
	var_125_bool = var_6_int == var_124_int; // 0x184 Eq
	if(var_125_bool == 0) goto Label_410; // 0x185 JumpB
	var_126_string = ""; // 0x186 PushV
	var_126_string = "Neutral"; // 0x187 MovS
	func_149(var_7_bool, var_126_string); // 0x188 NEW_2
	var_127_int = 538464; // 0x18a PushI
	SetMessage(var_127_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_128_int = 538465; // 0x18f PushI
	var_129_int = 40348; // 0x190 PushI
	var_130_int = 40347; // 0x191 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x192 TObjFunc
	var_131_int = 538474; // 0x194 PushI
	var_132_int = 40348; // 0x195 PushI
	var_133_int = 40356; // 0x196 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_134_int = 40348; // 0x19a PushI
	var_135_bool = var_6_int == var_134_int; // 0x19b Eq
	if(var_135_bool == 0) goto Label_433; // 0x19c JumpB
	var_136_string = ""; // 0x19d PushV
	var_136_string = "Neutral"; // 0x19e MovS
	func_149(var_7_bool, var_136_string); // 0x19f NEW_2
	var_137_int = 538466; // 0x1a1 PushI
	SetMessage(var_137_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_138_int = 538467; // 0x1a6 PushI
	var_139_int = 16089; // 0x1a7 PushI
	var_140_int = 40349; // 0x1a8 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1a9 TObjFunc
	var_141_int = 538473; // 0x1ab PushI
	var_142_int = 16089; // 0x1ac PushI
	var_143_int = 40355; // 0x1ad PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_144_int = 16089; // 0x1b1 PushI
	var_145_bool = var_6_int == var_144_int; // 0x1b2 Eq
	if(var_145_bool == 0) goto Label_456; // 0x1b3 JumpB
	var_146_string = ""; // 0x1b4 PushV
	var_146_string = "Arrogance"; // 0x1b5 MovS
	func_149(var_7_bool, var_146_string); // 0x1b6 NEW_2
	var_147_int = 514843; // 0x1b8 PushI
	SetMessage(var_147_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_148_int = 514844; // 0x1bd PushI
	var_149_int = -1; // 0x1be PushI
	var_150_int = 16090; // 0x1bf PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x1c0 TObjFunc
	var_151_int = 514845; // 0x1c2 PushI
	var_152_int = -1; // 0x1c3 PushI
	var_153_int = 16091; // 0x1c4 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_3_string = 1; // 0x1c8 TMovB
	var_154_bool = 0; // 0x1c9 PushV
	func_880(var_154_bool); // 0x1ca NEW_2
	if(var_154_bool == 0) goto Label_464; // 0x1cc JumpB
	lshStopAnimation(); // 0x1cd Func
	goto Label_466; // 0x1cf Jump
	
Label_466:
	return 0; // 0x1d2 Return
	
Label_464:
	StopAnimation(); // 0x1d0 Func
	
Label_468:
	return 0; // 0x1d4 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1da PushV
	var_8_object = var_6_object; // 0x1db Mov
	TaskCall(0); // 0x1dc TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1dd NEW_2
	TaskReturn(); // 0x1de TaskReturn
	return 0; // 0x1e0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1e5 PushV
	var_9_string = "cleanup"; // 0x1e6 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1e7 Eq
	if(var_10_bool == 0) goto Label_508; // 0x1e8 JumpB
	var_0_object = 1; // 0x1e9 TMovB
	IsLoaded(var_8_bool); // 0x1ea Func
	var_11_bool = 0; // 0x1ec PushV
	var_11_bool = 0; // 0x1ed MovB
	var_12_bool = var_8_bool == 0; // 0x1ee Not
	if(var_12_bool == 0) goto Label_501; // 0x1ef JumpB
	var_13_bool = 0; // 0x1f0 PushV
	func_529(var_13_bool); // 0x1f1 NEW_2
	if(var_13_bool == 0) goto Label_501; // 0x1f3 JumpB
	var_11_bool = 1; // 0x1f4 MovB
	
Label_501:
	if(var_11_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_14_object = Obj(); // 0x1f6 PushV
	func_807(var_14_object); // 0x1f7 NEW_2
	RemoveActor(var_14_object); // 0x1f9 Func
	
Label_507:
	goto Label_512; // 0x1fb Jump
	
Label_512:
	return 2; // 0x200 Return
	
Label_508:
	var_17_string = "restore"; // 0x1fc PushS
	var_18_bool = var_6_string == var_17_string; // 0x1fd Eq
	if(var_18_bool == 0) goto Label_512; // 0x1fe JumpB
	var_0_object = 0; // 0x1ff TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x201 PushV
	var_6_bool = 0; // 0x202 MovB
	var_7_object = var_0_object; // 0x203 PushT
	if(var_7_object == 0) goto Label_522; // 0x204 JumpB
	var_8_bool = 0; // 0x205 PushV
	func_529(var_8_bool); // 0x206 NEW_2
	if(var_8_bool == 0) goto Label_522; // 0x208 JumpB
	var_6_bool = 1; // 0x209 MovB
	
Label_522:
	if(var_6_bool == 0) goto Label_528; // 0x20a JumpB
	var_9_object = Obj(); // 0x20b PushV
	func_807(var_9_object); // 0x20c NEW_2
	RemoveActor(var_9_object); // 0x20e Func
	
Label_528:
	return 0; // 0x210 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_481(); // 0x1d6 NEW_2
	return 0; // 0x1d8 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_531(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_874(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_872(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_876(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_878(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_855(var_69_int); // 0x22 NEW_2
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
	func_807(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_616(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_233_bool = var_17_bool == 0; // 0x3f Not
	if(var_233_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_234_object = Obj(); // 0x46 PushV
	var_234_object = var_8_object; // 0x47 Mov
	func_599(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_770(var_184_string, var_185_bool)
{
	var_188_bool = 0; var_189_float = 0; var_190_float = 0; var_191_bool = 0; var_192_float = 0; var_193_float = 0; // 0x302 PushV
	lshHasAnimation(var_191_bool, var_184_string); // 0x303 Func
	var_194_bool = var_191_bool; // 0x305 Push
	if(var_194_bool == 0) goto Label_780; // 0x306 JumpB
	lshGetAnimTimes(var_184_string, var_192_float, var_193_float); // 0x307 Func
	lshPlayAnimation(var_192_float, var_193_float, var_185_bool); // 0x309 Func
	goto Label_784; // 0x30b Jump
	
Label_784:
	return 6; // 0x310 Return
	
Label_780:
	var_195_string = "Can't find lsh animation : "; // 0x30c PushS
	var_196_int = var_195_string + var_184_string; // 0x30d Add
	Trace(var_196_int); // 0x30e Func
}


func_837()
{
	var_14_string = "ood12AglajaSobor1"; // 0x346 PushS
	var_15_int = 1; // 0x347 PushI
	SetVariable(var_14_string, var_15_int); // 0x348 Func
	return 0; // 0x34a Return
}


func_711(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x2c7 PushV
	var_132_string = "d"; // 0x2c8 PushS
	var_133_int = 0; // 0x2c9 PushV
	func_828(var_133_int); // 0x2ca NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2cc Add
	var_140_string = "m"; // 0x2cd PushS
	var_127_string = var_139_int + var_140_string; // 0x2ce Add2
	var_128_int = 0; // 0x2cf MovI
	
Label_720:
	var_141_int = 1; // 0x2d0 PushI
	if(var_141_int == 0) goto Label_733; // 0x2d1 JumpB
	var_142_int = 1; // 0x2d2 PushI
	var_143_int = var_128_int + var_142_int; // 0x2d3 Add
	var_144_int = var_127_string + var_143_int; // 0x2d4 Add
	HasProperty(var_144_int, var_129_bool); // 0x2d5 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2d7 Not
	if(var_145_bool == 0) goto Label_730; // 0x2d8 JumpB
	goto Label_733; // 0x2d9 Jump
	
Label_733:
	var_146_bool = var_128_int == 0; // 0x2dd Not
	if(var_146_bool == 0) goto Label_737; // 0x2de JumpB
	var_120_bool = 0; // 0x2df MovB
	return 10; // 0x2e0 Return
	
Label_737:
	var_130_int = 0; // 0x2e1 MovI
	var_147_int = 1; // 0x2e2 PushI
	var_148_bool = var_128_int > var_147_int; // 0x2e3 GT
	if(var_148_bool == 0) goto Label_743; // 0x2e4 JumpB
	irand(var_130_int, var_128_int); // 0x2e5 Func
	
Label_743:
	var_149_int = 1; // 0x2e7 PushI
	var_150_int = var_130_int + var_149_int; // 0x2e8 Add
	var_151_int = var_127_string + var_150_int; // 0x2e9 Add
	GetProperty(var_151_int, var_131_string); // 0x2ea ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x2ec PushV
	var_153_string = var_131_string; // 0x2ed Mov
	func_785(var_152_bool, var_153_string); // 0x2ee NEW_2
	var_120_bool = var_152_bool; // 0x2ef Mov
	return 10; // 0x2f1 Return
	
Label_730:
	var_154_int = 1; // 0x2da PushI
	var_128_int = var_128_int + var_154_int; // 0x2db Add2
	goto Label_720; // 0x2dc Jump
}


func_843(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x34c PushV
	var_201_string = "ood12AglajaSobor1"; // 0x34d MovS
	func_823(var_200_int, var_201_string); // 0x34e NEW_2
	var_204_int = 0; // 0x350 PushI
	var_205_bool = var_200_int == var_204_int; // 0x351 Eq
	if(var_205_bool == 0) goto Label_853; // 0x352 JumpB
	var_198_bool = 1; // 0x353 MovB
	return 0; // 0x354 Return
	
Label_853:
	var_198_bool = 0; // 0x355 MovB
	return 0; // 0x356 Return
}


func_529(var_8_bool)
{
	var_8_bool = 1; // 0x211 MovB
	return 0; // 0x212 Return
}


func_785(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x311 PushV
	var_116_bool = 0; // 0x312 PushV
	func_880(var_116_bool); // 0x313 NEW_2
	if(var_116_bool == 0) goto Label_798; // 0x315 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x316 Func
	var_117_bool = var_115_bool; // 0x318 Push
	if(var_117_bool == 0) goto Label_798; // 0x319 JumpB
	lshPlaySpeech(var_113_string); // 0x31a Func
	var_112_bool = 1; // 0x31c MovB
	return 2; // 0x31d Return
	
Label_798:
	var_112_bool = 0; // 0x31e MovB
	return 2; // 0x31f Return
}


func_531(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x213 PushV
	GetPosition(var_31_cvector); // 0x214 ObjFunc
	GetEyesHeight(var_30_float); // 0x216 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x218 PushE
	var_39_float = var_39_float + var_30_float; // 0x219 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x21a PopE
	GetPosition(var_32_cvector); // 0x21b Func
	GetEyesHeight(var_30_float); // 0x21d Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x21f PushE
	var_40_float = var_40_float + var_30_float; // 0x220 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x221 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x222 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x223 PushE
	var_41_float = 0; // 0x224 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x225 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x226 Or
	var_43_float = sqrt(var_42_int); // 0x227 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x228 Div2
	var_34_cvector = -var_33_cvector; // 0x229 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x22a Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x22b PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x22c PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x22d Xor2
	func_813(var_45_cvector, var_46_cvector); // 0x22e NEW_2
	var_53_int = 25; // 0x230 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x231 Mult
	var_55_int = var_44_float + var_54_float; // 0x232 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x233 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x234 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x235 Add2
	IsOverrideActive(var_37_bool); // 0x236 Func
	var_57_bool = var_37_bool; // 0x238 Push
	if(var_57_bool == 0) goto Label_572; // 0x239 JumpB
	var_18_bool = 0; // 0x23a MovB
	return 18; // 0x23b Return
	
Label_572:
	StopWorld(); // 0x23c Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x23e Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x240 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x241 PushE
	Rotate(var_58_float, var_59_float); // 0x242 Func
	var_60_bool = 0; // 0x244 PushV
	func_880(var_60_bool); // 0x245 NEW_2
	if(var_60_bool == 0) goto Label_585; // 0x247 JumpB
	goto Label_593; // 0x248 Jump
	
Label_593:
	CameraWaitForPlayFinish(); // 0x251 Func
	ResumeWorld(); // 0x253 Func
	var_18_bool = 1; // 0x255 MovB
	return 18; // 0x256 Return
	
Label_585:
	var_61_string = "head"; // 0x249 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x24a Func
	var_62_bool = var_38_bool; // 0x24c Push
	if(var_62_bool == 0) goto Label_593; // 0x24d JumpB
	var_63_string = "head"; // 0x24e PushS
	LookAsyncCamera(var_63_string); // 0x24f Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_119; // 0x56 JumpB
	var_180_string = ""; // 0x57 PushV
	var_180_string = "Neutral"; // 0x58 MovS
	func_149(var_174_object, var_180_string); // 0x59 NEW_2
	var_197_int = 538452; // 0x5b PushI
	SetMessage(var_197_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_198_bool = 0; var_199_object = Obj(); // 0x60 PushV
	var_199_object = var_1_object; // 0x61 MovT
	func_843(var_199_object); // 0x62 NEW_2
	if(var_198_bool == 0) goto Label_106; // 0x64 JumpB
	var_206_int = 538453; // 0x65 PushI
	var_207_int = 40350; // 0x66 PushI
	var_208_int = 40335; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	
Label_106:
	var_209_int = 538470; // 0x6a PushI
	var_210_int = -1; // 0x6b PushI
	var_211_int = 40352; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	var_212_int = 538472; // 0x6f PushI
	var_213_int = -1; // 0x70 PushI
	var_214_int = 40354; // 0x71 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_215_bool = 0; // 0x77 PushV
	func_880(var_215_bool); // 0x78 NEW_2
	if(var_215_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_216_string = var_3_string; // 0x7d PushT
	if(var_216_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_217_string = ""; // 0x80 PushV
	var_217_string = var_2_object; // 0x81 MovT
	func_754(var_217_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_228_string = "all"; // 0x86 PushS
	var_229_string = "idle"; // 0x87 PushS
	PlayAnimation(var_228_string, var_229_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_230_string = var_3_string; // 0x8c PushT
	if(var_230_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_231_string = "all"; // 0x8f PushS
	var_232_string = "idle"; // 0x90 PushS
	PlayAnimation(var_231_string, var_232_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_149(var_2_object, var_180_string)
{
	var_181_bool = 0; // 0x96 PushV
	func_880(var_181_bool); // 0x97 NEW_2
	var_182_bool = var_181_bool == 0; // 0x99 Not
	if(var_182_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_183_bool = var_180_string == var_2_object; // 0x9c Eq
	if(var_183_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_184_string = ""; var_185_bool = 0; // 0x9f PushV
	var_184_string = var_180_string; // 0xa0 Mov
	var_186_string = ""; // 0xa1 PushS
	var_187_bool = var_180_string == var_186_string; // 0xa2 Eq
	if(var_187_bool == 0) goto Label_166; // 0xa3 JumpB
	var_185_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_770(var_184_string, var_185_bool); // 0xa7 NEW_2
	var_2_object = var_180_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_185_bool = 1; // 0xa6 MovB
}


func_599()
{
	var_235_bool = 0; var_236_bool = 0; // 0x257 PushV
	CameraSwitchToNormal(); // 0x258 Func
	var_237_bool = 0; // 0x25a PushV
	func_880(var_237_bool); // 0x25b NEW_2
	if(var_237_bool == 0) goto Label_607; // 0x25d JumpB
	goto Label_615; // 0x25e Jump
	
Label_615:
	return 2; // 0x267 Return
	
Label_607:
	var_238_string = "head"; // 0x25f PushS
	HasAnimationTrack(var_236_bool, var_238_string); // 0x260 Func
	var_239_bool = var_236_bool; // 0x262 Push
	if(var_239_bool == 0) goto Label_615; // 0x263 JumpB
	var_240_string = "head"; // 0x264 PushS
	UnlookAsync(var_240_string); // 0x265 Func
}


func_855(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x357 PushV
	var_72_string = "branch"; // 0x358 PushS
	GetVariable(var_72_string, var_71_int); // 0x359 Func
	var_73_int = 0; // 0x35b PushI
	var_74_bool = var_71_int == var_73_int; // 0x35c Eq
	if(var_74_bool == 0) goto Label_865; // 0x35d JumpB
	var_69_int = 1; // 0x35e MovI
	return 2; // 0x35f Return
	
Label_865:
	var_75_int = 1; // 0x361 PushI
	var_76_bool = var_71_int == var_75_int; // 0x362 Eq
	if(var_76_bool == 0) goto Label_870; // 0x363 JumpB
	var_69_int = 2; // 0x364 MovI
	return 2; // 0x365 Return
	
Label_870:
	var_69_int = 3; // 0x366 MovI
	return 2; // 0x367 Return
}


func_800()
{
	var_9_bool = 0; // 0x320 PushV
	func_880(var_9_bool); // 0x321 NEW_2
	if(var_9_bool == 0) goto Label_806; // 0x323 JumpB
	lshStopSpeech(); // 0x324 Func
	
Label_806:
	return 0; // 0x326 Return
}


func_481()
{
	
Label_481:
	Hold(); // 0x1e1 Func
	goto Label_481; // 0x1e3 Jump
}


func_674(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2a2 PushV
	var_96_string = "c"; // 0x2a3 MovS
	var_97_int = 0; // 0x2a4 MovI
	
Label_677:
	var_101_int = 1; // 0x2a5 PushI
	if(var_101_int == 0) goto Label_690; // 0x2a6 JumpB
	var_102_int = 1; // 0x2a7 PushI
	var_103_int = var_97_int + var_102_int; // 0x2a8 Add
	var_104_int = var_96_string + var_103_int; // 0x2a9 Add
	HasProperty(var_104_int, var_98_bool); // 0x2aa ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2ac Not
	if(var_105_bool == 0) goto Label_687; // 0x2ad JumpB
	goto Label_690; // 0x2ae Jump
	
Label_690:
	var_106_bool = var_97_int == 0; // 0x2b2 Not
	if(var_106_bool == 0) goto Label_694; // 0x2b3 JumpB
	var_89_bool = 0; // 0x2b4 MovB
	return 10; // 0x2b5 Return
	
Label_694:
	var_99_int = 0; // 0x2b6 MovI
	var_107_int = 1; // 0x2b7 PushI
	var_108_bool = var_97_int > var_107_int; // 0x2b8 GT
	if(var_108_bool == 0) goto Label_700; // 0x2b9 JumpB
	irand(var_99_int, var_97_int); // 0x2ba Func
	
Label_700:
	var_109_int = 1; // 0x2bc PushI
	var_110_int = var_99_int + var_109_int; // 0x2bd Add
	var_111_int = var_96_string + var_110_int; // 0x2be Add
	GetProperty(var_111_int, var_100_string); // 0x2bf ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x2c1 PushV
	var_113_string = var_100_string; // 0x2c2 Mov
	func_785(var_112_bool, var_113_string); // 0x2c3 NEW_2
	var_89_bool = var_112_bool; // 0x2c4 Mov
	return 10; // 0x2c6 Return
	
Label_687:
	var_118_int = 1; // 0x2af PushI
	var_97_int = var_97_int + var_118_int; // 0x2b0 Add2
	goto Label_677; // 0x2b1 Jump
}


func_807(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x327 PushV
	self(var_11_object); // 0x328 Func
	var_9_object = var_11_object; // 0x32a Mov
	return 2; // 0x32b Return
}


func_872(var_66_int)
{
	var_66_int = 515527; // 0x368 MovI
	return 0; // 0x369 Return
}


func_616(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x268 PushV
	var_87_string = "voice_common"; // 0x269 PushS
	GetVariable(var_87_string, var_85_int); // 0x26a Func
	var_88_int = var_85_int; // 0x26c Push
	if(var_88_int == 0) goto Label_654; // 0x26d JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x26e PushV
	var_90_object = var_79_object; // 0x26f Mov
	func_674(var_90_object); // 0x270 NEW_2
	var_119_bool = var_89_bool == 0; // 0x272 Not
	if(var_119_bool == 0) goto Label_636; // 0x273 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x274 PushV
	var_121_object = var_79_object; // 0x275 Mov
	func_711(var_121_object); // 0x276 NEW_2
	var_155_bool = var_120_bool == 0; // 0x278 Not
	if(var_155_bool == 0) goto Label_636; // 0x279 JumpB
	var_78_bool = 0; // 0x27a MovB
	return 4; // 0x27b Return
	
Label_636:
	var_156_int = 2; // 0x27c PushI
	irand(var_86_int, var_156_int); // 0x27d Func
	var_157_int = var_86_int; // 0x27f Push
	if(var_157_int == 0) goto Label_649; // 0x280 JumpB
	var_158_string = "voice_common"; // 0x281 PushS
	var_159_int = 1; // 0x282 PushI
	var_160_int = var_85_int + var_159_int; // 0x283 Add
	var_161_int = 3; // 0x284 PushI
	var_162_int = var_160_int / var_161_int; // 0x285 Mod
	SetVariable(var_158_string, var_162_int); // 0x286 Func
	goto Label_653; // 0x288 Jump
	
Label_653:
	goto Label_672; // 0x28d Jump
	
Label_672:
	var_78_bool = 1; // 0x2a0 MovB
	return 4; // 0x2a1 Return
	
Label_649:
	var_163_string = "voice_common"; // 0x289 PushS
	var_164_int = 0; // 0x28a PushI
	SetVariable(var_163_string, var_164_int); // 0x28b Func
	
Label_654:
	var_165_bool = 0; var_166_object = Obj(); // 0x28e PushV
	var_166_object = var_79_object; // 0x28f Mov
	func_711(var_166_object); // 0x290 NEW_2
	var_167_bool = var_165_bool == 0; // 0x292 Not
	if(var_167_bool == 0) goto Label_668; // 0x293 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x294 PushV
	var_169_object = var_79_object; // 0x295 Mov
	func_674(var_169_object); // 0x296 NEW_2
	var_170_bool = var_168_bool == 0; // 0x298 Not
	if(var_170_bool == 0) goto Label_668; // 0x299 JumpB
	var_78_bool = 0; // 0x29a MovB
	return 4; // 0x29b Return
	
Label_668:
	var_171_string = "voice_common"; // 0x29c PushS
	var_172_int = 1; // 0x29d PushI
	SetVariable(var_171_string, var_172_int); // 0x29e Func
}


func_874(var_65_int)
{
	var_65_int = 513334; // 0x36a MovI
	return 0; // 0x36b Return
}


func_876(var_67_string)
{
	var_67_string = "ui/NPC_Aglaja.png"; // 0x36c MovS
	return 0; // 0x36d Return
}


func_813(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x32d PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x32e Or
	var_49_float = sqrt(var_50_int); // 0x32f Sqrt2
	var_51_float = 0.0; // 0x330 PushF
	var_52_bool = var_49_float < var_51_float; // 0x331 LT
	if(var_52_bool == 0) goto Label_821; // 0x332 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x333 MovV
	return 2; // 0x334 Return
	
Label_821:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x335 Div2
	return 2; // 0x336 Return
}


func_878(var_68_string)
{
	var_68_string = "ui/NPC_Aglaja_b.png"; // 0x36e MovS
	return 0; // 0x36f Return
}


func_880(var_60_bool)
{
	var_60_bool = 1; // 0x370 MovB
	return 0; // 0x371 Return
}


func_754(var_217_string)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x2f2 PushV
	lshHasAnimation(var_221_bool, var_217_string); // 0x2f3 Func
	var_224_bool = var_221_bool; // 0x2f5 Push
	if(var_224_bool == 0) goto Label_765; // 0x2f6 JumpB
	lshGetAnimTimes(var_217_string, var_222_float, var_223_float); // 0x2f7 Func
	var_225_bool = 0; // 0x2f9 PushB
	lshPlayAnimation(var_222_float, var_223_float, var_225_bool); // 0x2fa Func
	goto Label_769; // 0x2fc Jump
	
Label_769:
	return 6; // 0x301 Return
	
Label_765:
	var_226_string = "Can't find lsh animation : "; // 0x2fd PushS
	var_227_int = var_226_string + var_217_string; // 0x2fe Add
	Trace(var_227_int); // 0x2ff Func
}


func_823(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x337 PushV
	GetVariable(var_201_string, var_203_int); // 0x338 Func
	var_200_int = var_203_int; // 0x33a Mov
	return 2; // 0x33b Return
}


func_828(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x33c PushV
	GetGameTime(var_135_float); // 0x33d Func
	var_136_int = 1; // 0x33f PushI
	var_137_int = 0; // 0x340 PushV
	var_138_int = 24; // 0x341 PushI
	var_137_int = var_135_float / var_135_float; // 0x342 Div2
	var_133_int = var_136_int + var_137_int; // 0x343 Add2
	return 2; // 0x344 Return
}


