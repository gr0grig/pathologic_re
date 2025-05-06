task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_428; // 0xa6 JumpB
	func_820(); // 0xa8 NEW_2
	var_16_int = 16595; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_178; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_896(); // 0xb0 NEW_2
	
Label_178:
	var_22_int = 16594; // 0xb2 PushI
	var_23_bool = var_12_bool == var_22_int; // 0xb3 Eq
	if(var_23_bool == 0) goto Label_211; // 0xb4 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb5 PushV
	var_24_object = var_1_object; // 0xb6 MovT
	var_25_object = var_0_object; // 0xb7 MovT
	func_889(); // 0xb8 NEW_2
	var_36_string = ""; // 0xba PushV
	var_36_string = "Neutral"; // 0xbb MovS
	func_142(var_13_bool, var_36_string); // 0xbc NEW_2
	var_53_int = 515498; // 0xbe PushI
	SetMessage(var_53_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_54_bool = 0; var_55_object = Obj(); // 0xc3 PushV
	var_55_object = var_1_object; // 0xc4 MovT
	func_902(var_55_object); // 0xc5 NEW_2
	if(var_54_bool == 0) goto Label_205; // 0xc7 JumpB
	var_62_int = 515499; // 0xc8 PushI
	var_63_int = 16596; // 0xc9 PushI
	var_64_int = 16595; // 0xca PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xcb TObjFunc
	
Label_205:
	var_65_int = 535660; // 0xcd PushI
	var_66_int = -1; // 0xce PushI
	var_67_int = 37346; // 0xcf PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_68_int = 16596; // 0xd3 PushI
	var_69_bool = var_12_bool == var_68_int; // 0xd4 Eq
	if(var_69_bool == 0) goto Label_234; // 0xd5 JumpB
	var_70_string = ""; // 0xd6 PushV
	var_70_string = "Neutral"; // 0xd7 MovS
	func_142(var_13_bool, var_70_string); // 0xd8 NEW_2
	var_71_int = 515500; // 0xda PushI
	SetMessage(var_71_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_72_int = 515501; // 0xdf PushI
	var_73_int = 16598; // 0xe0 PushI
	var_74_int = 16597; // 0xe1 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xe2 TObjFunc
	var_75_int = 515523; // 0xe4 PushI
	var_76_int = 16620; // 0xe5 PushI
	var_77_int = 16619; // 0xe6 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_78_int = 16620; // 0xea PushI
	var_79_bool = var_12_bool == var_78_int; // 0xeb Eq
	if(var_79_bool == 0) goto Label_252; // 0xec JumpB
	var_80_string = ""; // 0xed PushV
	var_80_string = "Neutral"; // 0xee MovS
	func_142(var_13_bool, var_80_string); // 0xef NEW_2
	var_81_int = 515524; // 0xf1 PushI
	SetMessage(var_81_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_82_int = 515525; // 0xf6 PushI
	var_83_int = -1; // 0xf7 PushI
	var_84_int = 16621; // 0xf8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_85_int = 16598; // 0xfc PushI
	var_86_bool = var_12_bool == var_85_int; // 0xfd Eq
	if(var_86_bool == 0) goto Label_275; // 0xfe JumpB
	var_87_string = ""; // 0xff PushV
	var_87_string = "Neutral"; // 0x100 MovS
	func_142(var_13_bool, var_87_string); // 0x101 NEW_2
	var_88_int = 515502; // 0x103 PushI
	SetMessage(var_88_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_89_int = 515503; // 0x108 PushI
	var_90_int = 16600; // 0x109 PushI
	var_91_int = 16599; // 0x10a PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x10b TObjFunc
	var_92_int = 515522; // 0x10d PushI
	var_93_int = 16600; // 0x10e PushI
	var_94_int = 16618; // 0x10f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_95_int = 16600; // 0x113 PushI
	var_96_bool = var_12_bool == var_95_int; // 0x114 Eq
	if(var_96_bool == 0) goto Label_293; // 0x115 JumpB
	var_97_string = ""; // 0x116 PushV
	var_97_string = "Neutral"; // 0x117 MovS
	func_142(var_13_bool, var_97_string); // 0x118 NEW_2
	var_98_int = 515504; // 0x11a PushI
	SetMessage(var_98_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_99_int = 515505; // 0x11f PushI
	var_100_int = 16602; // 0x120 PushI
	var_101_int = 16601; // 0x121 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_102_int = 16602; // 0x125 PushI
	var_103_bool = var_12_bool == var_102_int; // 0x126 Eq
	if(var_103_bool == 0) goto Label_316; // 0x127 JumpB
	var_104_string = ""; // 0x128 PushV
	var_104_string = "Neutral"; // 0x129 MovS
	func_142(var_13_bool, var_104_string); // 0x12a NEW_2
	var_105_int = 515506; // 0x12c PushI
	SetMessage(var_105_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_106_int = 515507; // 0x131 PushI
	var_107_int = 16604; // 0x132 PushI
	var_108_int = 16603; // 0x133 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x134 TObjFunc
	var_109_int = 515513; // 0x136 PushI
	var_110_int = 16610; // 0x137 PushI
	var_111_int = 16609; // 0x138 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_112_int = 16610; // 0x13c PushI
	var_113_bool = var_12_bool == var_112_int; // 0x13d Eq
	if(var_113_bool == 0) goto Label_334; // 0x13e JumpB
	var_114_string = ""; // 0x13f PushV
	var_114_string = "Neutral"; // 0x140 MovS
	func_142(var_13_bool, var_114_string); // 0x141 NEW_2
	var_115_int = 515514; // 0x143 PushI
	SetMessage(var_115_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_116_int = 515516; // 0x148 PushI
	var_117_int = 16613; // 0x149 PushI
	var_118_int = 16612; // 0x14a PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_119_int = 16613; // 0x14e PushI
	var_120_bool = var_12_bool == var_119_int; // 0x14f Eq
	if(var_120_bool == 0) goto Label_357; // 0x150 JumpB
	var_121_string = ""; // 0x151 PushV
	var_121_string = "Neutral"; // 0x152 MovS
	func_142(var_13_bool, var_121_string); // 0x153 NEW_2
	var_122_int = 515517; // 0x155 PushI
	SetMessage(var_122_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_123_int = 515518; // 0x15a PushI
	var_124_int = -1; // 0x15b PushI
	var_125_int = 16614; // 0x15c PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x15d TObjFunc
	var_126_int = 515519; // 0x15f PushI
	var_127_int = 16616; // 0x160 PushI
	var_128_int = 16615; // 0x161 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_129_int = 16616; // 0x165 PushI
	var_130_bool = var_12_bool == var_129_int; // 0x166 Eq
	if(var_130_bool == 0) goto Label_375; // 0x167 JumpB
	var_131_string = ""; // 0x168 PushV
	var_131_string = "Neutral"; // 0x169 MovS
	func_142(var_13_bool, var_131_string); // 0x16a NEW_2
	var_132_int = 515520; // 0x16c PushI
	SetMessage(var_132_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_133_int = 515521; // 0x171 PushI
	var_134_int = -1; // 0x172 PushI
	var_135_int = 16617; // 0x173 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_136_int = 16604; // 0x177 PushI
	var_137_bool = var_12_bool == var_136_int; // 0x178 Eq
	if(var_137_bool == 0) goto Label_398; // 0x179 JumpB
	var_138_string = ""; // 0x17a PushV
	var_138_string = "Neutral"; // 0x17b MovS
	func_142(var_13_bool, var_138_string); // 0x17c NEW_2
	var_139_int = 515508; // 0x17e PushI
	SetMessage(var_139_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_140_int = 515509; // 0x183 PushI
	var_141_int = 16606; // 0x184 PushI
	var_142_int = 16605; // 0x185 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x186 TObjFunc
	var_143_int = 515512; // 0x188 PushI
	var_144_int = -1; // 0x189 PushI
	var_145_int = 16608; // 0x18a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_146_int = 16606; // 0x18e PushI
	var_147_bool = var_12_bool == var_146_int; // 0x18f Eq
	if(var_147_bool == 0) goto Label_416; // 0x190 JumpB
	var_148_string = ""; // 0x191 PushV
	var_148_string = "Neutral"; // 0x192 MovS
	func_142(var_13_bool, var_148_string); // 0x193 NEW_2
	var_149_int = 515510; // 0x195 PushI
	SetMessage(var_149_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_150_int = 515511; // 0x19a PushI
	var_151_int = -1; // 0x19b PushI
	var_152_int = 16607; // 0x19c PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_3_string = 1; // 0x1a0 TMovB
	var_153_bool = 0; // 0x1a1 PushV
	func_939(var_153_bool); // 0x1a2 NEW_2
	if(var_153_bool == 0) goto Label_424; // 0x1a4 JumpB
	lshStopAnimation(); // 0x1a5 Func
	goto Label_426; // 0x1a7 Jump
	
Label_426:
	return 0; // 0x1aa Return
	
Label_424:
	StopAnimation(); // 0x1a8 Func
	
Label_428:
	return 0; // 0x1ac Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_580(var_11_bool, var_12_object); // 0x1b5 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1b7 PushV
	var_17_object = var_12_object; // 0x1b8 Mov
	TaskCall(0); // 0x1b9 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1ba NEW_2
	TaskReturn(); // 0x1bb TaskReturn
	return 0; // 0x1bd Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1e5 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1e6 Eq
	if(var_14_bool == 0) goto Label_491; // 0x1e7 JumpB
	func_464(var_12_string); // 0x1e9 NEW_2
	
Label_491:
	return 0; // 0x1eb Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1ec PushT
	if(var_12_int == 0) goto Label_497; // 0x1ed JumpB
	func_580(var_10_bool, var_11_bool); // 0x1ef NEW_2
	
Label_497:
	var_16_bool = 0; // 0x1f1 PushV
	var_16_bool = 0; // 0x1f2 MovB
	var_17_int = var_5_int; // 0x1f3 PushT
	if(var_17_int == 0) goto Label_506; // 0x1f4 JumpB
	var_18_bool = 0; // 0x1f5 PushV
	func_513(var_18_bool); // 0x1f6 NEW_2
	if(var_18_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_16_bool = 1; // 0x1f9 MovB
	
Label_506:
	if(var_16_bool == 0) goto Label_512; // 0x1fa JumpB
	var_19_object = Obj(); // 0x1fb PushV
	func_827(var_19_object); // 0x1fc NEW_2
	RemoveActor(var_19_object); // 0x1fe Func
	
Label_512:
	return 0; // 0x200 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x22e PushI
	var_14_bool = var_12_int == var_13_int; // 0x22f Eq
	if(var_14_bool == 0) goto Label_579; // 0x230 JumpB
	var_15_bool = 0; // 0x231 PushV
	func_542(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x232 NEW_2
	if(var_15_bool == 0) goto Label_573; // 0x234 JumpB
	var_28_bool = var_2_object == 0; // 0x235 Not
	if(var_28_bool == 0) goto Label_572; // 0x236 JumpB
	var_29_object = Obj(); // 0x237 PushV
	var_29_object = var_4_bool; // 0x238 MovT
	func_809(var_29_object); // 0x239 NEW_2
	var_2_object = 1; // 0x23b TMovB
	
Label_572:
	goto Label_579; // 0x23c Jump
	
Label_579:
	return 0; // 0x243 Return
	
Label_573:
	var_36_object = var_2_object; // 0x23d PushT
	if(var_36_object == 0) goto Label_579; // 0x23e JumpB
	var_37_string = "head"; // 0x23f PushS
	UnlookAsync(var_37_string); // 0x240 Func
	var_2_object = 0; // 0x242 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1ad PushV
	var_12_float = 300; // 0x1ae MovI
	var_13_float = 100; // 0x1af MovI
	func_446(var_11_bool, var_12_float, var_13_float); // 0x1b0 NEW_2
	return 0; // 0x1b2 Return
}


func_896()
{
	var_20_string = "ood12TBirdmask1"; // 0x381 PushS
	var_21_int = 1; // 0x382 PushI
	SetVariable(var_20_string, var_21_int); // 0x383 Func
	return 0; // 0x385 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 130.0; // 0x4 MovF
	func_693(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_933(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_931(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_935(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_937(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_914(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_156_bool = var_26_bool == 0; // 0x38 Not
	if(var_156_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_157_object = Obj(); // 0x3f PushV
	var_157_object = var_17_object; // 0x40 Mov
	func_761(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_513(var_18_bool)
{
	var_18_bool = 1; // 0x201 MovB
	return 0; // 0x202 Return
}


func_515(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x204 PushV
	func_688(var_23_bool); // 0x205 NEW_2
	var_26_bool = var_23_bool == 0; // 0x207 Not
	if(var_26_bool == 0) goto Label_522; // 0x208 JumpB
	return 0; // 0x209 Return
	
Label_522:
	var_27_string = "player"; // 0x20a PushS
	FindActor(var_17_bool, var_27_string); // 0x20b Func
	var_2_object = 0; // 0x20d TMovB
	var_3_string = 0; // 0x20e TMovB
	var_0_object = var_21_float; // 0x20f TMov
	var_1_object = var_22_float; // 0x210 TMov
	var_28_int = 10; // 0x211 PushI
	var_29_float = 1.0; // 0x212 PushF
	SetTimer(var_28_int, var_29_float); // 0x213 Func
	func_594(); // 0x216 NEW_2
	var_81_bool = var_3_string == 0; // 0x218 Not
	if(var_81_bool == 0) goto Label_541; // 0x219 JumpB
	var_82_int = 10; // 0x21a PushI
	KillTimer(var_82_int); // 0x21b Func
	
Label_541:
	return 0; // 0x21d Return
}


func_902(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x387 PushV
	var_127_string = "ood12TBirdmask1"; // 0x388 MovS
	func_843(var_126_int, var_127_string); // 0x389 NEW_2
	var_130_int = 0; // 0x38b PushI
	var_131_bool = var_126_int == var_130_int; // 0x38c Eq
	if(var_131_bool == 0) goto Label_912; // 0x38d JumpB
	var_124_bool = 1; // 0x38e MovB
	return 0; // 0x38f Return
	
Label_912:
	var_124_bool = 0; // 0x390 MovB
	return 0; // 0x391 Return
}


func_778(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0x30a PushV
	lshHasAnimation(var_144_bool, var_140_string); // 0x30b Func
	var_147_bool = var_144_bool; // 0x30d Push
	if(var_147_bool == 0) goto Label_789; // 0x30e JumpB
	lshGetAnimTimes(var_140_string, var_145_float, var_146_float); // 0x30f Func
	var_148_bool = 0; // 0x311 PushB
	lshPlayAnimation(var_145_float, var_146_float, var_148_bool); // 0x312 Func
	goto Label_793; // 0x314 Jump
	
Label_793:
	return 6; // 0x319 Return
	
Label_789:
	var_149_string = "Can't find lsh animation : "; // 0x315 PushS
	var_150_int = var_149_string + var_140_string; // 0x316 Add
	Trace(var_150_int); // 0x317 Func
}


func_142(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0x8f PushV
	func_939(var_107_bool); // 0x90 NEW_2
	var_108_bool = var_107_bool == 0; // 0x92 Not
	if(var_108_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_109_bool = var_106_string == var_2_object; // 0x95 Eq
	if(var_109_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_110_string = ""; var_111_bool = 0; // 0x98 PushV
	var_110_string = var_106_string; // 0x99 Mov
	var_112_string = ""; // 0x9a PushS
	var_113_bool = var_106_string == var_112_string; // 0x9b Eq
	if(var_113_bool == 0) goto Label_159; // 0x9c JumpB
	var_111_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_794(var_110_string, var_111_bool); // 0xa0 NEW_2
	var_2_object = var_106_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_111_bool = 1; // 0x9f MovB
}


func_914(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x392 PushV
	var_81_string = "branch"; // 0x393 PushS
	GetVariable(var_81_string, var_80_int); // 0x394 Func
	var_82_int = 0; // 0x396 PushI
	var_83_bool = var_80_int == var_82_int; // 0x397 Eq
	if(var_83_bool == 0) goto Label_924; // 0x398 JumpB
	var_78_int = 1; // 0x399 MovI
	return 2; // 0x39a Return
	
Label_924:
	var_84_int = 1; // 0x39c PushI
	var_85_bool = var_80_int == var_84_int; // 0x39d Eq
	if(var_85_bool == 0) goto Label_929; // 0x39e JumpB
	var_78_int = 2; // 0x39f MovI
	return 2; // 0x3a0 Return
	
Label_929:
	var_78_int = 3; // 0x3a1 MovI
	return 2; // 0x3a2 Return
}


func_794(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x31a PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x31b Func
	var_120_bool = var_117_bool; // 0x31d Push
	if(var_120_bool == 0) goto Label_804; // 0x31e JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x31f Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x321 Func
	goto Label_808; // 0x323 Jump
	
Label_808:
	return 6; // 0x328 Return
	
Label_804:
	var_121_string = "Can't find lsh animation : "; // 0x324 PushS
	var_122_int = var_121_string + var_110_string; // 0x325 Add
	Trace(var_122_int); // 0x326 Func
}


func_542(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x21e PushV
	var_18_bool = var_4_bool == 0; // 0x21f NullEq
	if(var_18_bool == 0) goto Label_547; // 0x220 JumpB
	var_15_bool = 0; // 0x221 MovB
	return 2; // 0x222 Return
	
Label_547:
	var_19_float = 0; var_20_object = Obj(); // 0x223 PushV
	var_20_object = var_4_bool; // 0x224 MovT
	func_680(var_20_object); // 0x225 NEW_2
	var_17_float = sqrt(var_19_float); // 0x227 Sqrt2
	var_27_object = var_2_object; // 0x228 PushT
	if(var_27_object == 0) goto Label_555; // 0x229 JumpB
	var_17_float = var_17_float - var_1_object; // 0x22a Sub2
	
Label_555:
	var_15_bool = var_17_float < var_0_object; // 0x22b LT2
	return 2; // 0x22c Return
}


func_673(var_71_bool)
{
	var_71_bool = 1; // 0x2a1 MovB
	return 0; // 0x2a2 Return
}


func_931(var_75_int)
{
	var_75_int = 515571; // 0x3a3 MovI
	return 0; // 0x3a4 Return
}


func_675()
{
	StopAnimation(); // 0x2a3 Func
	StopGroup0(); // 0x2a5 Func
	return 0; // 0x2a7 Return
}


func_933(var_74_int)
{
	var_74_int = 504029; // 0x3a5 MovI
	return 0; // 0x3a6 Return
}


func_935(var_76_string)
{
	var_76_string = "ui/NPC_bmask.png"; // 0x3a7 MovS
	return 0; // 0x3a8 Return
}


func_680(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2a8 PushV
	GetPosition(var_24_cvector); // 0x2a9 Func
	GetPosition(var_25_cvector); // 0x2ab ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2ad Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2ae Or2
	return 6; // 0x2af Return
}


func_937(var_77_string)
{
	var_77_string = "ui/NPC_bmask_b.png"; // 0x3a9 MovS
	return 0; // 0x3aa Return
}


func_809(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x329 PushV
	GetEyesHeight(var_32_float); // 0x32a ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x32c MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x32d PushE
	var_34_float = var_32_float; // 0x32e Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x32f PopE
	var_35_string = "head"; // 0x330 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x331 Func
	return 4; // 0x333 Return
}


func_939(var_69_bool)
{
	var_69_bool = 0; // 0x3ab MovB
	return 0; // 0x3ac Return
}


func_688(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2b0 PushV
	IsLoaded(var_25_bool); // 0x2b1 Func
	var_23_bool = var_25_bool; // 0x2b3 Mov
	return 2; // 0x2b4 Return
}


func_820()
{
	var_15_bool = 0; // 0x334 PushV
	func_939(var_15_bool); // 0x335 NEW_2
	if(var_15_bool == 0) goto Label_826; // 0x337 JumpB
	lshStopSpeech(); // 0x338 Func
	
Label_826:
	return 0; // 0x33a Return
}


func_693(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2b5 PushV
	GetPosition(var_40_cvector); // 0x2b6 ObjFunc
	GetEyesHeight(var_39_float); // 0x2b8 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2ba PushE
	var_48_float = var_48_float + var_39_float; // 0x2bb Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2bc PopE
	GetPosition(var_41_cvector); // 0x2bd Func
	GetEyesHeight(var_39_float); // 0x2bf Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2c1 PushE
	var_49_float = var_49_float + var_39_float; // 0x2c2 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2c3 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2c4 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2c5 PushE
	var_50_float = 0; // 0x2c6 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2c7 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2c8 Or
	var_52_float = sqrt(var_51_int); // 0x2c9 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2ca Div2
	var_43_cvector = -var_42_cvector; // 0x2cb Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2cc Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2cd PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2ce PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2cf Xor2
	func_833(var_54_cvector, var_55_cvector); // 0x2d0 NEW_2
	var_62_int = 25; // 0x2d2 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2d3 Mult
	var_64_int = var_53_float + var_63_float; // 0x2d4 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2d5 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2d6 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2d7 Add2
	IsOverrideActive(var_46_bool); // 0x2d8 Func
	var_66_bool = var_46_bool; // 0x2da Push
	if(var_66_bool == 0) goto Label_734; // 0x2db JumpB
	var_27_bool = 0; // 0x2dc MovB
	return 18; // 0x2dd Return
	
Label_734:
	StopWorld(); // 0x2de Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2e0 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2e2 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2e3 PushE
	Rotate(var_67_float, var_68_float); // 0x2e4 Func
	var_69_bool = 0; // 0x2e6 PushV
	func_939(var_69_bool); // 0x2e7 NEW_2
	if(var_69_bool == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_755; // 0x2ea Jump
	
Label_755:
	CameraWaitForPlayFinish(); // 0x2f3 Func
	ResumeWorld(); // 0x2f5 Func
	var_27_bool = 1; // 0x2f7 MovB
	return 18; // 0x2f8 Return
	
Label_747:
	var_70_string = "head"; // 0x2eb PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2ec Func
	var_71_bool = var_47_bool; // 0x2ee Push
	if(var_71_bool == 0) goto Label_755; // 0x2ef JumpB
	var_72_string = "head"; // 0x2f0 PushS
	LookAsyncCamera(var_72_string); // 0x2f1 Func
}


func_827(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x33b PushV
	self(var_21_object); // 0x33c Func
	var_19_object = var_21_object; // 0x33e Mov
	return 2; // 0x33f Return
}


func_446(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1be PushV
	var_6_int = 0; // 0x1bf TMovB
	
Label_448:
	var_18_int = 3; // 0x1c0 PushI
	rand(var_16_float, var_18_int); // 0x1c1 Func
	var_19_int = 3; // 0x1c3 PushI
	var_20_int = var_16_float + var_19_int; // 0x1c4 Add
	Sleep(var_20_int, var_17_bool); // 0x1c5 Func
	var_6_int = 1; // 0x1c7 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1c8 PushV
	var_21_float = var_12_float; // 0x1c9 Mov
	var_22_float = var_13_float; // 0x1ca Mov
	func_515(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1cb NEW_2
	var_6_int = 0; // 0x1cd TMovB
	goto Label_448; // 0x1ce Jump
}


func_833(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x341 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x342 Or
	var_58_float = sqrt(var_59_int); // 0x343 Sqrt2
	var_60_float = 0.0; // 0x344 PushF
	var_61_bool = var_58_float < var_60_float; // 0x345 LT
	if(var_61_bool == 0) goto Label_841; // 0x346 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x347 MovV
	return 2; // 0x348 Return
	
Label_841:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x349 Div2
	return 2; // 0x34a Return
}


func_580(var_2_object, var_3_string)
{
	func_675(); // 0x245 NEW_2
	var_13_int = 10; // 0x247 PushI
	KillTimer(var_13_int); // 0x248 Func
	var_14_object = var_2_object; // 0x24a PushT
	if(var_14_object == 0) goto Label_592; // 0x24b JumpB
	var_15_string = "head"; // 0x24c PushS
	UnlookAsync(var_15_string); // 0x24d Func
	var_2_object = 0; // 0x24f TMovB
	
Label_592:
	var_3_string = 1; // 0x250 TMovB
	return 0; // 0x251 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_112; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_889(); // 0x53 NEW_2
	var_106_string = ""; // 0x55 PushV
	var_106_string = "Neutral"; // 0x56 MovS
	func_142(var_88_object, var_106_string); // 0x57 NEW_2
	var_123_int = 515498; // 0x59 PushI
	SetMessage(var_123_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x5e PushV
	var_125_object = var_1_object; // 0x5f MovT
	func_902(var_125_object); // 0x60 NEW_2
	if(var_124_bool == 0) goto Label_104; // 0x62 JumpB
	var_132_int = 515499; // 0x63 PushI
	var_133_int = 16596; // 0x64 PushI
	var_134_int = 16595; // 0x65 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x66 TObjFunc
	
Label_104:
	var_135_int = 535660; // 0x68 PushI
	var_136_int = -1; // 0x69 PushI
	var_137_int = 37346; // 0x6a PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_138_bool = 0; // 0x70 PushV
	func_939(var_138_bool); // 0x71 NEW_2
	if(var_138_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_139_string = var_3_string; // 0x76 PushT
	if(var_139_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_140_string = ""; // 0x79 PushV
	var_140_string = var_2_object; // 0x7a MovT
	func_778(var_140_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_151_string = "all"; // 0x7f PushS
	var_152_string = "idle"; // 0x80 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_153_string = var_3_string; // 0x85 PushT
	if(var_153_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_154_string = "all"; // 0x88 PushS
	var_155_string = "idle"; // 0x89 PushS
	PlayAnimation(var_154_string, var_155_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_843(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0; // 0x34b PushV
	GetVariable(var_127_string, var_129_int); // 0x34c Func
	var_126_int = var_129_int; // 0x34e Mov
	return 2; // 0x34f Return
}


func_464(var_5_int)
{
	var_5_int = 1; // 0x1d0 TMovB
	var_15_bool = 0; // 0x1d1 PushV
	var_15_bool = 0; // 0x1d2 MovB
	var_16_bool = 0; // 0x1d3 PushV
	func_688(var_16_bool); // 0x1d4 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1d6 Not
	if(var_19_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_20_bool = 0; // 0x1d8 PushV
	func_513(var_20_bool); // 0x1d9 NEW_2
	if(var_20_bool == 0) goto Label_477; // 0x1db JumpB
	var_15_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_15_bool == 0) goto Label_483; // 0x1dd JumpB
	var_21_object = Obj(); // 0x1de PushV
	func_827(var_21_object); // 0x1df NEW_2
	RemoveActor(var_21_object); // 0x1e1 Func
	
Label_483:
	return 0; // 0x1e3 Return
}


func_848(var_96_string, var_97_bool)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x350 PushV
	FindActor(var_99_object, var_96_string); // 0x351 Func
	var_100_bool = var_99_object == 0; // 0x353 Not
	if(var_100_bool == 0) goto Label_860; // 0x354 JumpB
	var_101_string = "Door "; // 0x355 PushS
	var_102_int = var_101_string + var_96_string; // 0x356 Add
	var_103_string = " not found"; // 0x357 PushS
	var_104_int = var_102_int + var_103_string; // 0x358 Add
	Trace(var_104_int); // 0x359 Func
	goto Label_863; // 0x35b Jump
	
Label_863:
	return 2; // 0x35f Return
	
Label_860:
	var_105_string = "locked"; // 0x35c PushS
	SetProperty(var_105_string, var_97_bool); // 0x35d ObjFunc
}


func_594()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x252 PushV
	WaitForAnimEnd(); // 0x253 Func
	var_44_bool = 0; // 0x255 PushV
	func_688(var_44_bool); // 0x256 NEW_2
	var_45_bool = var_44_bool == 0; // 0x258 Not
	if(var_45_bool == 0) goto Label_603; // 0x259 JumpB
	return 14; // 0x25a Return
	
Label_603:
	var_46_int = 0; // 0x25b PushV
	func_872(var_46_int); // 0x25c NEW_2
	var_37_int = var_46_int; // 0x25d Mov
	var_38_int = 0; // 0x25f MovI
	
Label_608:
	var_59_bool = 0; // 0x260 PushV
	var_59_bool = 0; // 0x261 MovB
	var_60_int = 5; // 0x262 PushI
	var_61_bool = var_38_int < var_60_int; // 0x263 LT
	if(var_61_bool == 0) goto Label_618; // 0x264 JumpB
	var_62_bool = 0; // 0x265 PushV
	func_688(var_62_bool); // 0x266 NEW_2
	if(var_62_bool == 0) goto Label_618; // 0x268 JumpB
	var_59_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_59_bool == 0) goto Label_670; // 0x26a JumpB
	var_63_int = 3; // 0x26b PushI
	irand(var_39_int, var_63_int); // 0x26c Func
	var_64_int = 0; // 0x26e PushI
	var_65_bool = var_39_int == var_64_int; // 0x26f Eq
	if(var_65_bool == 0) goto Label_642; // 0x270 JumpB
	var_66_int = var_37_int; // 0x271 Push
	if(var_66_int == 0) goto Label_641; // 0x272 JumpB
	irand(var_40_int, var_37_int); // 0x273 Func
	var_67_string = "all"; // 0x275 PushS
	var_68_string = ""; var_69_int = 0; // 0x276 PushV
	var_69_int = var_40_int; // 0x277 Mov
	func_865(var_68_string, var_69_int); // 0x278 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x27a Func
	WaitForAnimEnd(var_41_bool); // 0x27c Func
	var_70_bool = var_41_bool == 0; // 0x27e Not
	if(var_70_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_670; // 0x280 Jump
	
Label_670:
	ResetAAS(); // 0x29e Func
	return 14; // 0x2a0 Return
	
Label_641:
	goto Label_659; // 0x281 Jump
	
Label_659:
	var_71_bool = 0; // 0x293 PushV
	func_673(var_71_bool); // 0x294 NEW_2
	var_72_bool = var_71_bool == 0; // 0x296 Not
	if(var_72_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_670; // 0x298 Jump
	
Label_665:
	ResetAAS(); // 0x299 Func
	var_73_int = 1; // 0x29b PushI
	var_38_int = var_38_int + var_73_int; // 0x29c Add2
	goto Label_608; // 0x29d Jump
	
Label_642:
	var_74_int = 1; // 0x282 PushI
	var_75_bool = var_39_int == var_74_int; // 0x283 Eq
	if(var_75_bool == 0) goto Label_656; // 0x284 JumpB
	var_76_int = 4; // 0x285 PushI
	rand(var_42_float, var_76_int); // 0x286 Func
	var_77_int = 1; // 0x288 PushI
	var_78_int = var_42_float + var_77_int; // 0x289 Add
	Sleep(var_78_int, var_43_bool); // 0x28a Func
	var_79_bool = var_43_bool == 0; // 0x28c Not
	if(var_79_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_670; // 0x28e Jump
	
Label_655:
	goto Label_659; // 0x28f Jump
	
Label_656:
	var_80_int = var_38_int; // 0x290 Push
	if(var_80_int == 0) goto Label_659; // 0x291 JumpB
	goto Label_670; // 0x292 Jump
}


func_865(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x361 PushV
	var_55_string = "idle"; // 0x362 MovS
	var_56_int = var_53_int; // 0x363 Push
	if(var_56_int == 0) goto Label_870; // 0x364 JumpB
	var_55_string = var_55_string + var_53_int; // 0x365 Add2
	
Label_870:
	var_52_string = var_55_string; // 0x366 Mov
	return 2; // 0x367 Return
}


func_872(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x368 PushV
	var_49_int = 0; // 0x369 MovI
	
Label_874:
	var_51_string = "all"; // 0x36a PushS
	var_52_string = ""; var_53_int = 0; // 0x36b PushV
	var_53_int = var_49_int; // 0x36c Mov
	func_865(var_52_string, var_53_int); // 0x36d NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x36f Func
	var_57_bool = var_50_bool == 0; // 0x371 Not
	if(var_57_bool == 0) goto Label_884; // 0x372 JumpB
	goto Label_887; // 0x373 Jump
	
Label_887:
	var_46_int = var_49_int; // 0x377 Mov
	return 4; // 0x378 Return
	
Label_884:
	var_58_int = 1; // 0x374 PushI
	var_49_int = var_49_int + var_58_int; // 0x375 Add2
	goto Label_874; // 0x376 Jump
}


func_761()
{
	var_158_bool = 0; var_159_bool = 0; // 0x2f9 PushV
	CameraSwitchToNormal(); // 0x2fa Func
	var_160_bool = 0; // 0x2fc PushV
	func_939(var_160_bool); // 0x2fd NEW_2
	if(var_160_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_777; // 0x300 Jump
	
Label_777:
	return 2; // 0x309 Return
	
Label_769:
	var_161_string = "head"; // 0x301 PushS
	HasAnimationTrack(var_159_bool, var_161_string); // 0x302 Func
	var_162_bool = var_159_bool; // 0x304 Push
	if(var_162_bool == 0) goto Label_777; // 0x305 JumpB
	var_163_string = "head"; // 0x306 PushS
	UnlookAsync(var_163_string); // 0x307 Func
}


func_889()
{
	var_96_string = ""; var_97_bool = 0; // 0x37a PushV
	var_96_string = "itheater@door1"; // 0x37b MovS
	var_97_bool = 0; // 0x37c MovB
	func_848(var_96_string, var_97_bool); // 0x37d NEW_2
	return 0; // 0x37f Return
}


