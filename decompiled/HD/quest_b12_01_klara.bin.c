task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xcb PushI
	if(var_8_int == 0) goto Label_464; // 0xcc JumpB
	func_798(); // 0xce NEW_2
	var_10_int = 24314; // 0xd0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd1 Eq
	if(var_11_bool == 0) goto Label_216; // 0xd2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd3 PushV
	var_12_object = var_1_object; // 0xd4 MovT
	var_13_object = var_0_object; // 0xd5 MovT
	func_835(); // 0xd6 NEW_2
	
Label_216:
	var_16_int = 24326; // 0xd8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xd9 Eq
	if(var_17_bool == 0) goto Label_224; // 0xda JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdb PushV
	var_18_object = var_1_object; // 0xdc MovT
	var_19_object = var_0_object; // 0xdd MovT
	func_841(); // 0xde NEW_2
	
Label_224:
	var_22_int = 23350; // 0xe0 PushI
	var_23_bool = var_6_int == var_22_int; // 0xe1 Eq
	if(var_23_bool == 0) goto Label_288; // 0xe2 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xe3 PushV
	var_25_object = var_1_object; // 0xe4 MovT
	func_847(var_25_object); // 0xe5 NEW_2
	var_32_bool = var_24_bool == 0; // 0xe7 Not
	if(var_32_bool == 0) goto Label_268; // 0xe8 JumpB
	var_33_string = ""; // 0xe9 PushV
	var_33_string = "Saveyouall"; // 0xea MovS
	func_180(var_7_bool, var_33_string); // 0xeb NEW_2
	var_50_int = 522183; // 0xed PushI
	SetMessage(var_50_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0xf2 PushV
	var_52_object = var_1_object; // 0xf3 MovT
	func_859(var_52_object); // 0xf4 NEW_2
	if(var_51_bool == 0) goto Label_252; // 0xf6 JumpB
	var_57_int = 523114; // 0xf7 PushI
	var_58_int = 24315; // 0xf8 PushI
	var_59_int = 24314; // 0xf9 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xfa TObjFunc
	
Label_252:
	var_60_bool = 0; var_61_object = Obj(); // 0xfc PushV
	var_61_object = var_1_object; // 0xfd MovT
	func_871(var_61_object); // 0xfe NEW_2
	if(var_60_bool == 0) goto Label_262; // 0x100 JumpB
	var_66_int = 523126; // 0x101 PushI
	var_67_int = 24327; // 0x102 PushI
	var_68_int = 24326; // 0x103 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x104 TObjFunc
	
Label_262:
	var_69_int = 523113; // 0x106 PushI
	var_70_int = -1; // 0x107 PushI
	var_71_int = 24313; // 0x108 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_72_string = ""; // 0x10c PushV
	var_72_string = "Neutral"; // 0x10d MovS
	func_180(var_7_bool, var_72_string); // 0x10e NEW_2
	var_73_int = 523167; // 0x110 PushI
	SetMessage(var_73_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_74_int = 522184; // 0x115 PushI
	var_75_int = -1; // 0x116 PushI
	var_76_int = 23351; // 0x117 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x118 TObjFunc
	var_77_int = 523175; // 0x11a PushI
	var_78_int = -1; // 0x11b PushI
	var_79_int = 24377; // 0x11c PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_80_int = 24327; // 0x120 PushI
	var_81_bool = var_6_int == var_80_int; // 0x121 Eq
	if(var_81_bool == 0) goto Label_306; // 0x122 JumpB
	var_82_string = ""; // 0x123 PushV
	var_82_string = "Fear"; // 0x124 MovS
	func_180(var_7_bool, var_82_string); // 0x125 NEW_2
	var_83_int = 523127; // 0x127 PushI
	SetMessage(var_83_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_84_int = 523128; // 0x12c PushI
	var_85_int = 24329; // 0x12d PushI
	var_86_int = 24328; // 0x12e PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_87_int = 24329; // 0x132 PushI
	var_88_bool = var_6_int == var_87_int; // 0x133 Eq
	if(var_88_bool == 0) goto Label_329; // 0x134 JumpB
	var_89_string = ""; // 0x135 PushV
	var_89_string = "Fear"; // 0x136 MovS
	func_180(var_7_bool, var_89_string); // 0x137 NEW_2
	var_90_int = 523129; // 0x139 PushI
	SetMessage(var_90_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_91_int = 523130; // 0x13e PushI
	var_92_int = -1; // 0x13f PushI
	var_93_int = 24330; // 0x140 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x141 TObjFunc
	var_94_int = 523131; // 0x143 PushI
	var_95_int = 24332; // 0x144 PushI
	var_96_int = 24331; // 0x145 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_97_int = 24332; // 0x149 PushI
	var_98_bool = var_6_int == var_97_int; // 0x14a Eq
	if(var_98_bool == 0) goto Label_352; // 0x14b JumpB
	var_99_string = ""; // 0x14c PushV
	var_99_string = "Neutral"; // 0x14d MovS
	func_180(var_7_bool, var_99_string); // 0x14e NEW_2
	var_100_int = 523132; // 0x150 PushI
	SetMessage(var_100_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_101_int = 523133; // 0x155 PushI
	var_102_int = -1; // 0x156 PushI
	var_103_int = 24333; // 0x157 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x158 TObjFunc
	var_104_int = 523134; // 0x15a PushI
	var_105_int = -1; // 0x15b PushI
	var_106_int = 24334; // 0x15c PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_107_int = 24315; // 0x160 PushI
	var_108_bool = var_6_int == var_107_int; // 0x161 Eq
	if(var_108_bool == 0) goto Label_370; // 0x162 JumpB
	var_109_string = ""; // 0x163 PushV
	var_109_string = "Saveyouall"; // 0x164 MovS
	func_180(var_7_bool, var_109_string); // 0x165 NEW_2
	var_110_int = 523115; // 0x167 PushI
	SetMessage(var_110_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_111_int = 523116; // 0x16c PushI
	var_112_int = 24317; // 0x16d PushI
	var_113_int = 24316; // 0x16e PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_114_int = 24317; // 0x172 PushI
	var_115_bool = var_6_int == var_114_int; // 0x173 Eq
	if(var_115_bool == 0) goto Label_393; // 0x174 JumpB
	var_116_string = ""; // 0x175 PushV
	var_116_string = "Smile"; // 0x176 MovS
	func_180(var_7_bool, var_116_string); // 0x177 NEW_2
	var_117_int = 523117; // 0x179 PushI
	SetMessage(var_117_int); // 0x17a TObjFunc
	ClearReplies(); // 0x17c TObjFunc
	var_118_int = 523118; // 0x17e PushI
	var_119_int = 24319; // 0x17f PushI
	var_120_int = 24318; // 0x180 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x181 TObjFunc
	var_121_int = 540129; // 0x183 PushI
	var_122_int = 24321; // 0x184 PushI
	var_123_int = 42100; // 0x185 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_124_int = 24319; // 0x189 PushI
	var_125_bool = var_6_int == var_124_int; // 0x18a Eq
	if(var_125_bool == 0) goto Label_411; // 0x18b JumpB
	var_126_string = ""; // 0x18c PushV
	var_126_string = "Smile"; // 0x18d MovS
	func_180(var_7_bool, var_126_string); // 0x18e NEW_2
	var_127_int = 523119; // 0x190 PushI
	SetMessage(var_127_int); // 0x191 TObjFunc
	ClearReplies(); // 0x193 TObjFunc
	var_128_int = 523120; // 0x195 PushI
	var_129_int = 24321; // 0x196 PushI
	var_130_int = 24320; // 0x197 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x198 TObjFunc
	return 0; // 0x19a Return
	
Label_411:
	var_131_int = 24321; // 0x19b PushI
	var_132_bool = var_6_int == var_131_int; // 0x19c Eq
	if(var_132_bool == 0) goto Label_429; // 0x19d JumpB
	var_133_string = ""; // 0x19e PushV
	var_133_string = "Smile"; // 0x19f MovS
	func_180(var_7_bool, var_133_string); // 0x1a0 NEW_2
	var_134_int = 523121; // 0x1a2 PushI
	SetMessage(var_134_int); // 0x1a3 TObjFunc
	ClearReplies(); // 0x1a5 TObjFunc
	var_135_int = 523122; // 0x1a7 PushI
	var_136_int = 24323; // 0x1a8 PushI
	var_137_int = 24322; // 0x1a9 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1aa TObjFunc
	return 0; // 0x1ac Return
	
Label_429:
	var_138_int = 24323; // 0x1ad PushI
	var_139_bool = var_6_int == var_138_int; // 0x1ae Eq
	if(var_139_bool == 0) goto Label_452; // 0x1af JumpB
	var_140_string = ""; // 0x1b0 PushV
	var_140_string = "Smile"; // 0x1b1 MovS
	func_180(var_7_bool, var_140_string); // 0x1b2 NEW_2
	var_141_int = 523123; // 0x1b4 PushI
	SetMessage(var_141_int); // 0x1b5 TObjFunc
	ClearReplies(); // 0x1b7 TObjFunc
	var_142_int = 523124; // 0x1b9 PushI
	var_143_int = -1; // 0x1ba PushI
	var_144_int = 24324; // 0x1bb PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1bc TObjFunc
	var_145_int = 523125; // 0x1be PushI
	var_146_int = -1; // 0x1bf PushI
	var_147_int = 24325; // 0x1c0 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1c1 TObjFunc
	return 0; // 0x1c3 Return
	
Label_452:
	var_3_string = 1; // 0x1c4 TMovB
	var_148_bool = 0; // 0x1c5 PushV
	func_908(var_148_bool); // 0x1c6 NEW_2
	if(var_148_bool == 0) goto Label_460; // 0x1c8 JumpB
	lshStopAnimation(); // 0x1c9 Func
	goto Label_462; // 0x1cb Jump
	
Label_462:
	return 0; // 0x1ce Return
	
Label_460:
	StopAnimation(); // 0x1cc Func
	
Label_464:
	return 0; // 0x1d0 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1d6 PushV
	var_8_object = var_6_object; // 0x1d7 Mov
	TaskCall(0); // 0x1d8 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1d9 NEW_2
	TaskReturn(); // 0x1da TaskReturn
	return 0; // 0x1dc Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1e1 PushV
	var_9_string = "cleanup"; // 0x1e2 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1e3 Eq
	if(var_10_bool == 0) goto Label_504; // 0x1e4 JumpB
	var_0_object = 1; // 0x1e5 TMovB
	IsLoaded(var_8_bool); // 0x1e6 Func
	var_11_bool = 0; // 0x1e8 PushV
	var_11_bool = 0; // 0x1e9 MovB
	var_12_bool = var_8_bool == 0; // 0x1ea Not
	if(var_12_bool == 0) goto Label_497; // 0x1eb JumpB
	var_13_bool = 0; // 0x1ec PushV
	func_525(var_13_bool); // 0x1ed NEW_2
	if(var_13_bool == 0) goto Label_497; // 0x1ef JumpB
	var_11_bool = 1; // 0x1f0 MovB
	
Label_497:
	if(var_11_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_14_object = Obj(); // 0x1f2 PushV
	func_805(var_14_object); // 0x1f3 NEW_2
	RemoveActor(var_14_object); // 0x1f5 Func
	
Label_503:
	goto Label_508; // 0x1f7 Jump
	
Label_508:
	return 2; // 0x1fc Return
	
Label_504:
	var_17_string = "restore"; // 0x1f8 PushS
	var_18_bool = var_6_string == var_17_string; // 0x1f9 Eq
	if(var_18_bool == 0) goto Label_508; // 0x1fa JumpB
	var_0_object = 0; // 0x1fb TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1fd PushV
	var_6_bool = 0; // 0x1fe MovB
	var_7_object = var_0_object; // 0x1ff PushT
	if(var_7_object == 0) goto Label_518; // 0x200 JumpB
	var_8_bool = 0; // 0x201 PushV
	func_525(var_8_bool); // 0x202 NEW_2
	if(var_8_bool == 0) goto Label_518; // 0x204 JumpB
	var_6_bool = 1; // 0x205 MovB
	
Label_518:
	if(var_6_bool == 0) goto Label_524; // 0x206 JumpB
	var_9_object = Obj(); // 0x207 PushV
	func_805(var_9_object); // 0x208 NEW_2
	RemoveActor(var_9_object); // 0x20a Func
	
Label_524:
	return 0; // 0x20c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_477(); // 0x1d2 NEW_2
	return 0; // 0x1d4 Return
}


func_768(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x300 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x301 Func
	var_204_bool = var_201_bool; // 0x303 Push
	if(var_204_bool == 0) goto Label_778; // 0x304 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x305 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x307 Func
	goto Label_782; // 0x309 Jump
	
Label_782:
	return 6; // 0x30e Return
	
Label_778:
	var_205_string = "Can't find lsh animation : "; // 0x30a PushS
	var_206_int = var_205_string + var_194_string; // 0x30b Add
	Trace(var_206_int); // 0x30c Func
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_527(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_902(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_900(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_904(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_906(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_883(var_70_int); // 0x22 NEW_2
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
	func_805(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_614(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_255_bool = var_17_bool == 0; // 0x3f Not
	if(var_255_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_256_object = Obj(); // 0x46 PushV
	var_256_object = var_8_object; // 0x47 Mov
	func_596(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_835()
{
	var_14_string = "oob12KlaraSobor1"; // 0x344 PushS
	var_15_int = 1; // 0x345 PushI
	SetVariable(var_14_string, var_15_int); // 0x346 Func
	return 0; // 0x348 Return
}


func_900(var_67_int)
{
	var_67_int = 515540; // 0x384 MovI
	return 0; // 0x385 Return
}


func_709(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x2c5 PushV
	var_133_string = "d"; // 0x2c6 PushS
	var_134_int = 0; // 0x2c7 PushV
	func_826(var_134_int); // 0x2c8 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x2ca Add
	var_141_string = "m"; // 0x2cb PushS
	var_128_string = var_140_int + var_141_string; // 0x2cc Add2
	var_129_int = 0; // 0x2cd MovI
	
Label_718:
	var_142_int = 1; // 0x2ce PushI
	if(var_142_int == 0) goto Label_731; // 0x2cf JumpB
	var_143_int = 1; // 0x2d0 PushI
	var_144_int = var_129_int + var_143_int; // 0x2d1 Add
	var_145_int = var_128_string + var_144_int; // 0x2d2 Add
	HasProperty(var_145_int, var_130_bool); // 0x2d3 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x2d5 Not
	if(var_146_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_731:
	var_147_bool = var_129_int == 0; // 0x2db Not
	if(var_147_bool == 0) goto Label_735; // 0x2dc JumpB
	var_121_bool = 0; // 0x2dd MovB
	return 10; // 0x2de Return
	
Label_735:
	var_131_int = 0; // 0x2df MovI
	var_148_int = 1; // 0x2e0 PushI
	var_149_bool = var_129_int > var_148_int; // 0x2e1 GT
	if(var_149_bool == 0) goto Label_741; // 0x2e2 JumpB
	irand(var_131_int, var_129_int); // 0x2e3 Func
	
Label_741:
	var_150_int = 1; // 0x2e5 PushI
	var_151_int = var_131_int + var_150_int; // 0x2e6 Add
	var_152_int = var_128_string + var_151_int; // 0x2e7 Add
	GetProperty(var_152_int, var_132_string); // 0x2e8 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x2ea PushV
	var_154_string = var_132_string; // 0x2eb Mov
	func_783(var_153_bool, var_154_string); // 0x2ec NEW_2
	var_121_bool = var_153_bool; // 0x2ed Mov
	return 10; // 0x2ef Return
	
Label_728:
	var_155_int = 1; // 0x2d8 PushI
	var_129_int = var_129_int + var_155_int; // 0x2d9 Add2
	goto Label_718; // 0x2da Jump
}


func_902(var_66_int)
{
	var_66_int = 502865; // 0x386 MovI
	return 0; // 0x387 Return
}


func_904(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png"; // 0x388 MovS
	return 0; // 0x389 Return
}


func_841()
{
	var_20_string = "oob12KlaraSobor2"; // 0x34a PushS
	var_21_int = 1; // 0x34b PushI
	SetVariable(var_20_string, var_21_int); // 0x34c Func
	return 0; // 0x34e Return
}


func_906(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png"; // 0x38a MovS
	return 0; // 0x38b Return
}


func_908(var_61_bool)
{
	var_61_bool = 1; // 0x38c MovB
	return 0; // 0x38d Return
}


func_525(var_8_bool)
{
	var_8_bool = 1; // 0x20d MovB
	return 0; // 0x20e Return
}


func_527(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x20f PushV
	GetPosition(var_31_cvector); // 0x210 ObjFunc
	GetEyesHeight(var_30_float); // 0x212 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x214 PushE
	var_39_float = var_39_float + var_30_float; // 0x215 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x216 PopE
	GetPosition(var_32_cvector); // 0x217 Func
	GetEyesHeight(var_30_float); // 0x219 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x21b PushE
	var_40_float = var_40_float + var_30_float; // 0x21c Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x21d PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x21e Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x21f PushE
	var_41_float = 0; // 0x220 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x221 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x222 Or
	var_43_float = sqrt(var_42_int); // 0x223 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x224 Div2
	var_34_cvector = -var_33_cvector; // 0x225 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x226 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x227 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x228 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x229 Xor2
	func_811(var_45_cvector, var_46_cvector); // 0x22a NEW_2
	var_53_int = 25; // 0x22c PushI
	var_54_float = var_45_cvector * var_53_int; // 0x22d Mult
	var_55_int = var_44_float + var_54_float; // 0x22e Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x22f PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x230 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x231 Add2
	IsOverrideActive(var_37_bool); // 0x232 Func
	var_57_bool = var_37_bool; // 0x234 Push
	if(var_57_bool == 0) goto Label_568; // 0x235 JumpB
	var_18_bool = 0; // 0x236 MovB
	return 18; // 0x237 Return
	
Label_568:
	StopWorld(); // 0x238 Func
	var_58_bool = 1; // 0x23a PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x23b Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x23d PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x23e PushE
	Rotate(var_59_float, var_60_float); // 0x23f Func
	var_61_bool = 0; // 0x241 PushV
	func_908(var_61_bool); // 0x242 NEW_2
	if(var_61_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_590; // 0x245 Jump
	
Label_590:
	CameraWaitForPlayFinish(); // 0x24e Func
	ResumeWorld(); // 0x250 Func
	var_18_bool = 1; // 0x252 MovB
	return 18; // 0x253 Return
	
Label_582:
	var_62_string = "head"; // 0x246 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x247 Func
	var_63_bool = var_38_bool; // 0x249 Push
	if(var_63_bool == 0) goto Label_590; // 0x24a JumpB
	var_64_string = "head"; // 0x24b PushS
	LookAsyncCamera(var_64_string); // 0x24c Func
}


func_783(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x30f PushV
	var_117_bool = 0; // 0x310 PushV
	func_908(var_117_bool); // 0x311 NEW_2
	if(var_117_bool == 0) goto Label_796; // 0x313 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x314 Func
	var_118_bool = var_116_bool; // 0x316 Push
	if(var_118_bool == 0) goto Label_796; // 0x317 JumpB
	lshPlaySpeech(var_114_string); // 0x318 Func
	var_113_bool = 1; // 0x31a MovB
	return 2; // 0x31b Return
	
Label_796:
	var_113_bool = 0; // 0x31c MovB
	return 2; // 0x31d Return
}


func_847(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x350 PushV
	var_184_string = "game_final"; // 0x351 MovS
	func_821(var_183_int, var_184_string); // 0x352 NEW_2
	var_187_int = 0; // 0x354 PushI
	var_188_bool = var_183_int != var_187_int; // 0x355 Neq
	if(var_188_bool == 0) goto Label_857; // 0x356 JumpB
	var_181_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_181_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_150; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_847(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_128; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Saveyouall"; // 0x5e MovS
	func_180(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 522183; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_859(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 523114; // 0x6b PushI
	var_215_int = 24315; // 0x6c PushI
	var_216_int = 24314; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_bool = 0; var_218_object = Obj(); // 0x70 PushV
	var_218_object = var_1_object; // 0x71 MovT
	func_871(var_218_object); // 0x72 NEW_2
	if(var_217_bool == 0) goto Label_122; // 0x74 JumpB
	var_223_int = 523126; // 0x75 PushI
	var_224_int = 24327; // 0x76 PushI
	var_225_int = 24326; // 0x77 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x78 TObjFunc
	
Label_122:
	var_226_int = 523113; // 0x7a PushI
	var_227_int = -1; // 0x7b PushI
	var_228_int = 24313; // 0x7c PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x7d TObjFunc
	goto Label_150; // 0x7f Jump
	
Label_150:
	var_229_bool = 0; // 0x96 PushV
	func_908(var_229_bool); // 0x97 NEW_2
	if(var_229_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_230_string = var_3_string; // 0x9c PushT
	if(var_230_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_231_string = ""; // 0x9f PushV
	var_231_string = var_2_object; // 0xa0 MovT
	func_752(var_231_string); // 0xa1 NEW_2
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_242_string = "all"; // 0xa5 PushS
	var_243_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_242_string, var_243_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_244_string = var_3_string; // 0xab PushT
	if(var_244_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_245_string = "all"; // 0xae PushS
	var_246_string = "idle"; // 0xaf PushS
	PlayAnimation(var_245_string, var_246_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
	
Label_128:
	var_247_string = ""; // 0x80 PushV
	var_247_string = "Neutral"; // 0x81 MovS
	func_180(var_175_object, var_247_string); // 0x82 NEW_2
	var_248_int = 523167; // 0x84 PushI
	SetMessage(var_248_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_249_int = 522184; // 0x89 PushI
	var_250_int = -1; // 0x8a PushI
	var_251_int = 23351; // 0x8b PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x8c TObjFunc
	var_252_int = 523175; // 0x8e PushI
	var_253_int = -1; // 0x8f PushI
	var_254_int = 24377; // 0x90 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
}


func_596()
{
	var_257_bool = 0; var_258_bool = 0; // 0x254 PushV
	var_259_bool = 1; // 0x255 PushB
	CameraSwitchToNormal(var_259_bool); // 0x256 Func
	var_260_bool = 0; // 0x258 PushV
	func_908(var_260_bool); // 0x259 NEW_2
	if(var_260_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_613; // 0x25c Jump
	
Label_613:
	return 2; // 0x265 Return
	
Label_605:
	var_261_string = "head"; // 0x25d PushS
	HasAnimationTrack(var_258_bool, var_261_string); // 0x25e Func
	var_262_bool = var_258_bool; // 0x260 Push
	if(var_262_bool == 0) goto Label_613; // 0x261 JumpB
	var_263_string = "head"; // 0x262 PushS
	UnlookAsync(var_263_string); // 0x263 Func
}


func_859(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x35c PushV
	var_211_string = "oob12KlaraSobor1"; // 0x35d MovS
	func_821(var_210_int, var_211_string); // 0x35e NEW_2
	var_212_int = 0; // 0x360 PushI
	var_213_bool = var_210_int == var_212_int; // 0x361 Eq
	if(var_213_bool == 0) goto Label_869; // 0x362 JumpB
	var_208_bool = 1; // 0x363 MovB
	return 0; // 0x364 Return
	
Label_869:
	var_208_bool = 0; // 0x365 MovB
	return 0; // 0x366 Return
}


func_477()
{
	
Label_477:
	Hold(); // 0x1dd Func
	goto Label_477; // 0x1df Jump
}


func_798()
{
	var_9_bool = 0; // 0x31e PushV
	func_908(var_9_bool); // 0x31f NEW_2
	if(var_9_bool == 0) goto Label_804; // 0x321 JumpB
	lshStopSpeech(); // 0x322 Func
	
Label_804:
	return 0; // 0x324 Return
}


func_672(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2a0 PushV
	var_97_string = "c"; // 0x2a1 MovS
	var_98_int = 0; // 0x2a2 MovI
	
Label_675:
	var_102_int = 1; // 0x2a3 PushI
	if(var_102_int == 0) goto Label_688; // 0x2a4 JumpB
	var_103_int = 1; // 0x2a5 PushI
	var_104_int = var_98_int + var_103_int; // 0x2a6 Add
	var_105_int = var_97_string + var_104_int; // 0x2a7 Add
	HasProperty(var_105_int, var_99_bool); // 0x2a8 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x2aa Not
	if(var_106_bool == 0) goto Label_685; // 0x2ab JumpB
	goto Label_688; // 0x2ac Jump
	
Label_688:
	var_107_bool = var_98_int == 0; // 0x2b0 Not
	if(var_107_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_90_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
	
Label_692:
	var_100_int = 0; // 0x2b4 MovI
	var_108_int = 1; // 0x2b5 PushI
	var_109_bool = var_98_int > var_108_int; // 0x2b6 GT
	if(var_109_bool == 0) goto Label_698; // 0x2b7 JumpB
	irand(var_100_int, var_98_int); // 0x2b8 Func
	
Label_698:
	var_110_int = 1; // 0x2ba PushI
	var_111_int = var_100_int + var_110_int; // 0x2bb Add
	var_112_int = var_97_string + var_111_int; // 0x2bc Add
	GetProperty(var_112_int, var_101_string); // 0x2bd ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x2bf PushV
	var_114_string = var_101_string; // 0x2c0 Mov
	func_783(var_113_bool, var_114_string); // 0x2c1 NEW_2
	var_90_bool = var_113_bool; // 0x2c2 Mov
	return 10; // 0x2c4 Return
	
Label_685:
	var_119_int = 1; // 0x2ad PushI
	var_98_int = var_98_int + var_119_int; // 0x2ae Add2
	goto Label_675; // 0x2af Jump
}


func_805(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x325 PushV
	self(var_11_object); // 0x326 Func
	var_9_object = var_11_object; // 0x328 Mov
	return 2; // 0x329 Return
}


func_614(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x266 PushV
	var_88_string = "voice_common"; // 0x267 PushS
	GetVariable(var_88_string, var_86_int); // 0x268 Func
	var_89_int = var_86_int; // 0x26a Push
	if(var_89_int == 0) goto Label_652; // 0x26b JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x26c PushV
	var_91_object = var_80_object; // 0x26d Mov
	func_672(var_91_object); // 0x26e NEW_2
	var_120_bool = var_90_bool == 0; // 0x270 Not
	if(var_120_bool == 0) goto Label_634; // 0x271 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x272 PushV
	var_122_object = var_80_object; // 0x273 Mov
	func_709(var_122_object); // 0x274 NEW_2
	var_156_bool = var_121_bool == 0; // 0x276 Not
	if(var_156_bool == 0) goto Label_634; // 0x277 JumpB
	var_79_bool = 0; // 0x278 MovB
	return 4; // 0x279 Return
	
Label_634:
	var_157_int = 2; // 0x27a PushI
	irand(var_87_int, var_157_int); // 0x27b Func
	var_158_int = var_87_int; // 0x27d Push
	if(var_158_int == 0) goto Label_647; // 0x27e JumpB
	var_159_string = "voice_common"; // 0x27f PushS
	var_160_int = 1; // 0x280 PushI
	var_161_int = var_86_int + var_160_int; // 0x281 Add
	var_162_int = 3; // 0x282 PushI
	var_163_int = var_161_int / var_162_int; // 0x283 Mod
	SetVariable(var_159_string, var_163_int); // 0x284 Func
	goto Label_651; // 0x286 Jump
	
Label_651:
	goto Label_670; // 0x28b Jump
	
Label_670:
	var_79_bool = 1; // 0x29e MovB
	return 4; // 0x29f Return
	
Label_647:
	var_164_string = "voice_common"; // 0x287 PushS
	var_165_int = 0; // 0x288 PushI
	SetVariable(var_164_string, var_165_int); // 0x289 Func
	
Label_652:
	var_166_bool = 0; var_167_object = Obj(); // 0x28c PushV
	var_167_object = var_80_object; // 0x28d Mov
	func_709(var_167_object); // 0x28e NEW_2
	var_168_bool = var_166_bool == 0; // 0x290 Not
	if(var_168_bool == 0) goto Label_666; // 0x291 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x292 PushV
	var_170_object = var_80_object; // 0x293 Mov
	func_672(var_170_object); // 0x294 NEW_2
	var_171_bool = var_169_bool == 0; // 0x296 Not
	if(var_171_bool == 0) goto Label_666; // 0x297 JumpB
	var_79_bool = 0; // 0x298 MovB
	return 4; // 0x299 Return
	
Label_666:
	var_172_string = "voice_common"; // 0x29a PushS
	var_173_int = 1; // 0x29b PushI
	SetVariable(var_172_string, var_173_int); // 0x29c Func
}


func_871(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x368 PushV
	var_220_string = "oob12KlaraSobor2"; // 0x369 MovS
	func_821(var_219_int, var_220_string); // 0x36a NEW_2
	var_221_int = 0; // 0x36c PushI
	var_222_bool = var_219_int == var_221_int; // 0x36d Eq
	if(var_222_bool == 0) goto Label_881; // 0x36e JumpB
	var_217_bool = 1; // 0x36f MovB
	return 0; // 0x370 Return
	
Label_881:
	var_217_bool = 0; // 0x371 MovB
	return 0; // 0x372 Return
}


func_811(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x32b PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x32c Or
	var_49_float = sqrt(var_50_int); // 0x32d Sqrt2
	var_51_float = 0.0; // 0x32e PushF
	var_52_bool = var_49_float < var_51_float; // 0x32f LT
	if(var_52_bool == 0) goto Label_819; // 0x330 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x331 MovV
	return 2; // 0x332 Return
	
Label_819:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x333 Div2
	return 2; // 0x334 Return
}


func_752(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x2f0 PushV
	lshHasAnimation(var_235_bool, var_231_string); // 0x2f1 Func
	var_238_bool = var_235_bool; // 0x2f3 Push
	if(var_238_bool == 0) goto Label_763; // 0x2f4 JumpB
	lshGetAnimTimes(var_231_string, var_236_float, var_237_float); // 0x2f5 Func
	var_239_bool = 0; // 0x2f7 PushB
	lshPlayAnimation(var_236_float, var_237_float, var_239_bool); // 0x2f8 Func
	goto Label_767; // 0x2fa Jump
	
Label_767:
	return 6; // 0x2ff Return
	
Label_763:
	var_240_string = "Can't find lsh animation : "; // 0x2fb PushS
	var_241_int = var_240_string + var_231_string; // 0x2fc Add
	Trace(var_241_int); // 0x2fd Func
}


func_883(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x373 PushV
	var_73_string = "branch"; // 0x374 PushS
	GetVariable(var_73_string, var_72_int); // 0x375 Func
	var_74_int = 0; // 0x377 PushI
	var_75_bool = var_72_int == var_74_int; // 0x378 Eq
	if(var_75_bool == 0) goto Label_893; // 0x379 JumpB
	var_70_int = 1; // 0x37a MovI
	return 2; // 0x37b Return
	
Label_893:
	var_76_int = 1; // 0x37d PushI
	var_77_bool = var_72_int == var_76_int; // 0x37e Eq
	if(var_77_bool == 0) goto Label_898; // 0x37f JumpB
	var_70_int = 2; // 0x380 MovI
	return 2; // 0x381 Return
	
Label_898:
	var_70_int = 3; // 0x382 MovI
	return 2; // 0x383 Return
}


func_180(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xb5 PushV
	func_908(var_191_bool); // 0xb6 NEW_2
	var_192_bool = var_191_bool == 0; // 0xb8 Not
	if(var_192_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_193_bool = var_190_string == var_2_object; // 0xbb Eq
	if(var_193_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_194_string = ""; var_195_bool = 0; // 0xbe PushV
	var_194_string = var_190_string; // 0xbf Mov
	var_196_string = ""; // 0xc0 PushS
	var_197_bool = var_190_string == var_196_string; // 0xc1 Eq
	if(var_197_bool == 0) goto Label_197; // 0xc2 JumpB
	var_195_bool = 0; // 0xc3 MovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	func_768(var_194_string, var_195_bool); // 0xc6 NEW_2
	var_2_object = var_190_string; // 0xc8 TMov
	return 0; // 0xc9 Return
	
Label_197:
	var_195_bool = 1; // 0xc5 MovB
}


func_821(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x335 PushV
	GetVariable(var_184_string, var_186_int); // 0x336 Func
	var_183_int = var_186_int; // 0x338 Mov
	return 2; // 0x339 Return
}


func_826(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x33a PushV
	GetGameTime(var_136_float); // 0x33b Func
	var_137_int = 1; // 0x33d PushI
	var_138_int = 0; // 0x33e PushV
	var_139_int = 24; // 0x33f PushI
	var_138_int = var_136_float / var_136_float; // 0x340 Div2
	var_134_int = var_137_int + var_138_int; // 0x341 Add2
	return 2; // 0x342 Return
}


