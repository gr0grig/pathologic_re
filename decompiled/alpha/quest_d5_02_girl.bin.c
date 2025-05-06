task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x8a PushI
	if(var_8_int == 0) goto Label_335; // 0x8b JumpB
	func_472(); // 0x8d Call
	var_10_int = 13218; // 0x8f PushI
	var_11_bool = var_7_bool == var_10_int; // 0x90 Eq
	if(var_11_bool == 0) goto Label_151; // 0x91 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x92 PushV
	var_12_object = var_1_object; // 0x93 MovT
	var_13_object = var_0_object; // 0x94 MovT
	func_517(); // 0x95 Call
	
Label_151:
	var_63_int = 13214; // 0x97 PushI
	var_64_bool = var_7_bool == var_63_int; // 0x98 Eq
	if(var_64_bool == 0) goto Label_159; // 0x99 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x9a PushV
	var_65_object = var_1_object; // 0x9b MovT
	var_66_object = var_0_object; // 0x9c MovT
	func_517(); // 0x9d Call
	
Label_159:
	var_67_int = 13215; // 0x9f PushI
	var_68_bool = var_7_bool == var_67_int; // 0xa0 Eq
	if(var_68_bool == 0) goto Label_167; // 0xa1 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0xa2 PushV
	var_69_object = var_1_object; // 0xa3 MovT
	var_70_object = var_0_object; // 0xa4 MovT
	func_517(); // 0xa5 Call
	
Label_167:
	var_71_int = 13203; // 0xa7 PushI
	var_72_bool = var_6_int == var_71_int; // 0xa8 Eq
	if(var_72_bool == 0) goto Label_190; // 0xa9 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0xaa PushV
	var_74_object = var_1_object; // 0xab MovT
	func_545(var_74_object); // 0xac Call
	if(var_73_bool == 0) goto Label_190; // 0xae JumpB
	var_81_string = ""; // 0xaf PushV
	var_81_string = "Neutral"; // 0xb0 MovS
	func_121(var_7_bool, var_81_string); // 0xb1 Call
	var_96_int = 11988; // 0xb3 PushI
	SetMessage(var_96_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_97_int = 11989; // 0xb8 PushI
	var_98_int = 13205; // 0xb9 PushI
	var_99_int = 13204; // 0xba PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_100_int = 13205; // 0xbe PushI
	var_101_bool = var_6_int == var_100_int; // 0xbf Eq
	if(var_101_bool == 0) goto Label_213; // 0xc0 JumpB
	var_102_string = ""; // 0xc1 PushV
	var_102_string = "Neutral"; // 0xc2 MovS
	func_121(var_7_bool, var_102_string); // 0xc3 Call
	var_103_int = 11990; // 0xc5 PushI
	SetMessage(var_103_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_104_int = 11991; // 0xca PushI
	var_105_int = 13207; // 0xcb PushI
	var_106_int = 13206; // 0xcc PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xcd TObjFunc
	var_107_int = 12004; // 0xcf PushI
	var_108_int = 13207; // 0xd0 PushI
	var_109_int = 13219; // 0xd1 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_110_int = 13207; // 0xd5 PushI
	var_111_bool = var_6_int == var_110_int; // 0xd6 Eq
	if(var_111_bool == 0) goto Label_236; // 0xd7 JumpB
	var_112_string = ""; // 0xd8 PushV
	var_112_string = "Neutral"; // 0xd9 MovS
	func_121(var_7_bool, var_112_string); // 0xda Call
	var_113_int = 11992; // 0xdc PushI
	SetMessage(var_113_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_114_int = 11993; // 0xe1 PushI
	var_115_int = 13209; // 0xe2 PushI
	var_116_int = 13208; // 0xe3 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xe4 TObjFunc
	var_117_int = 12005; // 0xe6 PushI
	var_118_int = 13209; // 0xe7 PushI
	var_119_int = 13221; // 0xe8 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_120_int = 13209; // 0xec PushI
	var_121_bool = var_6_int == var_120_int; // 0xed Eq
	if(var_121_bool == 0) goto Label_259; // 0xee JumpB
	var_122_string = ""; // 0xef PushV
	var_122_string = "Neutral"; // 0xf0 MovS
	func_121(var_7_bool, var_122_string); // 0xf1 Call
	var_123_int = 11994; // 0xf3 PushI
	SetMessage(var_123_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_124_int = 11995; // 0xf8 PushI
	var_125_int = 13211; // 0xf9 PushI
	var_126_int = 13210; // 0xfa PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xfb TObjFunc
	var_127_int = 12006; // 0xfd PushI
	var_128_int = 13213; // 0xfe PushI
	var_129_int = 13223; // 0xff PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_130_int = 13211; // 0x103 PushI
	var_131_bool = var_6_int == var_130_int; // 0x104 Eq
	if(var_131_bool == 0) goto Label_277; // 0x105 JumpB
	var_132_string = ""; // 0x106 PushV
	var_132_string = "Neutral"; // 0x107 MovS
	func_121(var_7_bool, var_132_string); // 0x108 Call
	var_133_int = 11996; // 0x10a PushI
	SetMessage(var_133_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_134_int = 11997; // 0x10f PushI
	var_135_int = 13213; // 0x110 PushI
	var_136_int = 13212; // 0x111 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_137_int = 13213; // 0x115 PushI
	var_138_bool = var_6_int == var_137_int; // 0x116 Eq
	if(var_138_bool == 0) goto Label_305; // 0x117 JumpB
	var_139_string = ""; // 0x118 PushV
	var_139_string = "Neutral"; // 0x119 MovS
	func_121(var_7_bool, var_139_string); // 0x11a Call
	var_140_int = 11998; // 0x11c PushI
	SetMessage(var_140_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_141_int = 12001; // 0x121 PushI
	var_142_int = 13217; // 0x122 PushI
	var_143_int = 13216; // 0x123 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x124 TObjFunc
	var_144_int = 11999; // 0x126 PushI
	var_145_int = -1; // 0x127 PushI
	var_146_int = 13214; // 0x128 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x129 TObjFunc
	var_147_int = 12000; // 0x12b PushI
	var_148_int = -1; // 0x12c PushI
	var_149_int = 13215; // 0x12d PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_150_int = 13217; // 0x131 PushI
	var_151_bool = var_6_int == var_150_int; // 0x132 Eq
	if(var_151_bool == 0) goto Label_323; // 0x133 JumpB
	var_152_string = ""; // 0x134 PushV
	var_152_string = "Neutral"; // 0x135 MovS
	func_121(var_7_bool, var_152_string); // 0x136 Call
	var_153_int = 12002; // 0x138 PushI
	SetMessage(var_153_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_154_int = 12003; // 0x13d PushI
	var_155_int = -1; // 0x13e PushI
	var_156_int = 13218; // 0x13f PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_3_string = 1; // 0x143 TMovB
	var_157_bool = 0; // 0x144 PushV
	func_653(var_157_bool); // 0x145 Call
	if(var_157_bool == 0) goto Label_331; // 0x147 JumpB
	lshStopAnimation(); // 0x148 Func
	goto Label_333; // 0x14a Jump
	
Label_333:
	return 0; // 0x14d Return
	
Label_331:
	StopAnimation(); // 0x14b Func
	
Label_335:
	return 0; // 0x14f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x151 PushV
	var_8_object = var_6_object; // 0x152 Mov
	TaskCall(0); // 0x153 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x154 Call
	TaskReturn(); // 0x155 TaskReturn
	return 0; // 0x157 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x15c PushV
	var_9_string = "cleanup"; // 0x15d PushS
	var_10_bool = var_6_string == var_9_string; // 0x15e Eq
	if(var_10_bool == 0) goto Label_371; // 0x15f JumpB
	var_0_object = 1; // 0x160 TMovB
	IsLoaded(var_8_bool); // 0x161 Func
	var_11_bool = 0; // 0x163 PushV
	var_11_bool = 0; // 0x164 MovB
	var_12_bool = var_8_bool == 0; // 0x165 Not
	if(var_12_bool == 0) goto Label_364; // 0x166 JumpB
	var_13_bool = 0; // 0x167 PushV
	func_392(var_13_bool); // 0x168 Call
	if(var_13_bool == 0) goto Label_364; // 0x16a JumpB
	var_11_bool = 1; // 0x16b MovB
	
Label_364:
	if(var_11_bool == 0) goto Label_370; // 0x16c JumpB
	var_14_object = Obj(); // 0x16d PushV
	func_479(var_14_object); // 0x16e Call
	RemoveActor(var_14_object); // 0x170 Func
	
Label_370:
	goto Label_375; // 0x172 Jump
	
Label_375:
	return 2; // 0x177 Return
	
Label_371:
	var_17_string = "restore"; // 0x173 PushS
	var_18_bool = var_6_string == var_17_string; // 0x174 Eq
	if(var_18_bool == 0) goto Label_375; // 0x175 JumpB
	var_0_object = 0; // 0x176 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x178 PushV
	var_6_bool = 0; // 0x179 MovB
	var_7_object = var_0_object; // 0x17a PushT
	if(var_7_object == 0) goto Label_385; // 0x17b JumpB
	var_8_bool = 0; // 0x17c PushV
	func_392(var_8_bool); // 0x17d Call
	if(var_8_bool == 0) goto Label_385; // 0x17f JumpB
	var_6_bool = 1; // 0x180 MovB
	
Label_385:
	if(var_6_bool == 0) goto Label_391; // 0x181 JumpB
	var_9_object = Obj(); // 0x182 PushV
	func_479(var_9_object); // 0x183 Call
	RemoveActor(var_9_object); // 0x185 Func
	
Label_391:
	return 0; // 0x187 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_344:
	Hold(); // 0x158 Func
	goto Label_344; // 0x15a Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_394(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_649(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_651(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_616(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_112_bool = var_17_bool == 0; // 0x2d Not
	if(var_112_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_113_object = Obj(); // 0x34 PushV
	var_113_object = var_8_object; // 0x35 Mov
	func_450(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_512(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x200 PushV
	GetGameTime(var_31_float); // 0x201 Func
	var_29_float = var_31_float; // 0x203 Mov
	return 2; // 0x204 Return
}


func_517()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x205 PushV
	var_16_string = "d5q02"; // 0x206 PushS
	var_17_int = 4; // 0x207 PushI
	SetVariable(var_16_string, var_17_int); // 0x208 Func
	var_18_object = Obj(); // 0x20a PushV
	func_599(var_18_object); // 0x20b Call
	var_15_object = var_18_object; // 0x20c Mov
	var_25_string = "d5q02NudeMeeting"; // 0x20e PushS
	var_26_string = "pt_d5q01_girl_corpse1"; // 0x20f PushS
	var_27_int = 0; // 0x210 PushI
	var_28_int = 15364; // 0x211 PushI
	var_29_float = 0; // 0x212 PushV
	func_512(var_29_float); // 0x213 Call
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x215 ObjFunc
	func_633(); // 0x218 Call
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; // 0x21a PushV
	var_58_string = "quest_d5_02"; // 0x21b MovS
	var_59_string = "remove_girl"; // 0x21c MovS
	func_500(var_57_bool, var_58_string, var_59_string); // 0x21d Call
	return 2; // 0x21f Return
}


func_392(var_8_bool)
{
	var_8_bool = 1; // 0x188 MovB
	return 0; // 0x189 Return
}


func_649(var_59_int)
{
	var_59_int = 12582; // 0x289 MovI
	return 0; // 0x28a Return
}


func_394(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x18a PushV
	GetPosition(var_29_cvector); // 0x18b ObjFunc
	GetEyesHeight(var_28_float); // 0x18d ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x18f PushE
	var_36_float = var_36_float + var_28_float; // 0x190 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x191 PopE
	GetPosition(var_30_cvector); // 0x192 Func
	GetEyesHeight(var_28_float); // 0x194 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x196 PushE
	var_37_float = var_37_float + var_28_float; // 0x197 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x198 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x199 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x19a PushE
	var_38_float = 0; // 0x19b MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x19c PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x19d Or
	var_40_float = sqrt(var_39_int); // 0x19e Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x19f Div2
	var_32_cvector = -var_31_cvector; // 0x1a0 Neg2
	var_41_int = 70; // 0x1a1 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1a2 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1a3 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1a4 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x1a5 Xor2
	func_485(var_43_cvector, var_44_cvector); // 0x1a6 Call
	var_51_int = 25; // 0x1a8 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x1a9 Mult
	var_53_int = var_42_float + var_52_float; // 0x1aa Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x1ab PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x1ac Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x1ad Add2
	IsOverrideActive(var_35_bool); // 0x1ae Func
	var_55_bool = var_35_bool; // 0x1b0 Push
	if(var_55_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_18_bool = 0; // 0x1b2 MovB
	return 16; // 0x1b3 Return
	
Label_436:
	StopWorld(); // 0x1b4 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x1b6 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x1b8 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x1b9 PushE
	Rotate(var_56_float, var_57_float); // 0x1ba Func
	CameraWaitForPlayFinish(); // 0x1bc Func
	ResumeWorld(); // 0x1be Func
	var_18_bool = 1; // 0x1c0 MovB
	return 16; // 0x1c1 Return
}


func_651(var_60_string)
{
	var_60_string = "ui/NPC_Black.png"; // 0x28b MovS
	return 0; // 0x28c Return
}


func_653(var_86_bool)
{
	var_86_bool = 0; // 0x28d MovB
	return 0; // 0x28e Return
}


func_545(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x222 PushV
	var_80_string = "d5q02"; // 0x223 MovS
	func_495(var_79_int, var_80_string); // 0x224 Call
	var_83_int = 3; // 0x226 PushI
	var_84_bool = var_79_int == var_83_int; // 0x227 Eq
	if(var_84_bool == 0) goto Label_555; // 0x228 JumpB
	var_77_bool = 1; // 0x229 MovB
	return 0; // 0x22a Return
	
Label_555:
	var_77_bool = 0; // 0x22b MovB
	return 0; // 0x22c Return
}


func_557(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x22d PushV
	GetDiaryRoot(var_49_object); // 0x22e Func
	var_50_bool = var_49_object == 0; // 0x230 Not
	if(var_50_bool == 0) goto Label_567; // 0x231 JumpB
	var_51_string = "Can't retrieve diary root"; // 0x232 PushS
	Trace(var_51_string); // 0x233 Func
	var_47_object = 0; // 0x235 MovB
	return 2; // 0x236 Return
	
Label_567:
	var_47_object = var_49_object; // 0x237 Mov
	return 2; // 0x238 Return
}


func_570(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x23a PushV
	var_47_object = Obj(); // 0x23b PushV
	func_557(var_47_object); // 0x23c Call
	var_44_object = var_47_object; // 0x23d Mov
	Find(var_40_int, var_45_object); // 0x23f ObjFunc
	var_52_bool = var_45_object == 0; // 0x241 Not
	if(var_52_bool == 0) goto Label_585; // 0x242 JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x243 PushS
	var_54_int = var_53_string + var_40_int; // 0x244 Add
	Trace(var_54_int); // 0x245 Func
	var_38_bool = 0; // 0x247 MovB
	return 6; // 0x248 Return
	
Label_585:
	AddChild(var_39_object); // 0x249 ObjFunc
	var_55_string = "player_diary"; // 0x24b PushS
	var_56_int = 1; // 0x24c PushI
	SetVariable(var_55_string, var_56_int); // 0x24d Func
	GetCategory(var_46_int); // 0x24f ObjFunc
	SetDiarySection(var_46_int); // 0x251 Func
	var_38_bool = 0; // 0x253 MovB
	return 6; // 0x254 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_91; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_545(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_89; // 0x49 JumpB
	var_85_string = ""; // 0x4a PushV
	var_85_string = "Neutral"; // 0x4b MovS
	func_121(var_71_object, var_85_string); // 0x4c Call
	var_100_int = 11988; // 0x4e PushI
	SetMessage(var_100_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_101_int = 11989; // 0x53 PushI
	var_102_int = 13205; // 0x54 PushI
	var_103_int = 13204; // 0x55 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x56 TObjFunc
	goto Label_91; // 0x58 Jump
	
Label_91:
	var_104_bool = 0; // 0x5b PushV
	func_653(var_104_bool); // 0x5c Call
	if(var_104_bool == 0) goto Label_106; // 0x5e JumpB
	
Label_95:
	lshWaitForAnimEnd(); // 0x5f Func
	var_105_string = var_3_string; // 0x61 PushT
	if(var_105_string == 0) goto Label_100; // 0x62 JumpB
	goto Label_105; // 0x63 Jump
	
Label_105:
	goto Label_120; // 0x69 Jump
	
Label_120:
	return 0; // 0x78 Return
	
Label_100:
	var_106_string = ""; // 0x64 PushV
	var_106_string = var_2_object; // 0x65 MovT
	func_454(var_106_string); // 0x66 Call
	goto Label_95; // 0x68 Jump
	
Label_106:
	var_107_string = "all"; // 0x6a PushS
	var_108_string = "idle"; // 0x6b PushS
	PlayAnimation(var_107_string, var_108_string); // 0x6c Func
	
Label_110:
	WaitForAnimEnd(); // 0x6e Func
	var_109_string = var_3_string; // 0x70 PushT
	if(var_109_string == 0) goto Label_115; // 0x71 JumpB
	goto Label_120; // 0x72 Jump
	
Label_115:
	var_110_string = "all"; // 0x73 PushS
	var_111_string = "idle"; // 0x74 PushS
	PlayAnimation(var_110_string, var_111_string); // 0x75 Func
	goto Label_110; // 0x77 Jump
	
Label_89:
	return 0; // 0x59 Return
}


func_450()
{
	CameraSwitchToNormal(); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_454(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; // 0x1c6 PushV
	var_94_string = "playing "; // 0x1c7 PushS
	var_95_int = var_94_string + var_89_string; // 0x1c8 Add
	Trace(var_95_int); // 0x1c9 Func
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float); // 0x1cb Func
	lshPlayAnimation(var_92_float, var_93_float); // 0x1cd Func
	var_96_string = "start: "; // 0x1cf PushS
	var_97_int = var_96_string + var_92_float; // 0x1d0 Add
	Trace(var_97_int); // 0x1d1 Func
	var_98_string = "end: "; // 0x1d3 PushS
	var_99_int = var_98_string + var_93_float; // 0x1d4 Add
	Trace(var_99_int); // 0x1d5 Func
	return 4; // 0x1d7 Return
}


func_599(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x257 PushV
	GetMainOutdoorScene(var_21_object); // 0x258 Func
	var_23_bool = var_21_object == 0; // 0x25a NullEq
	if(var_23_bool == 0) goto Label_610; // 0x25b JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x25c PushS
	Trace(var_24_string); // 0x25d Func
	var_22_object = 0; // 0x25f SetNull
	var_18_object = var_22_object; // 0x260 Mov
	return 4; // 0x261 Return
	
Label_610:
	GetMap(var_22_object); // 0x262 ObjFunc
	var_18_object = var_22_object; // 0x264 Mov
	return 4; // 0x265 Return
}


func_472()
{
	var_9_bool = 0; // 0x1d8 PushV
	func_653(var_9_bool); // 0x1d9 Call
	if(var_9_bool == 0) goto Label_478; // 0x1db JumpB
	lshStopSpeech(); // 0x1dc Func
	
Label_478:
	return 0; // 0x1de Return
}


func_479(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1df PushV
	self(var_11_object); // 0x1e0 Func
	var_9_object = var_11_object; // 0x1e2 Mov
	return 2; // 0x1e3 Return
}


func_121(var_2_object, var_85_string)
{
	var_86_bool = 0; // 0x7a PushV
	func_653(var_86_bool); // 0x7b Call
	var_87_bool = var_86_bool == 0; // 0x7d Not
	if(var_87_bool == 0) goto Label_128; // 0x7e JumpB
	return 0; // 0x7f Return
	
Label_128:
	var_88_bool = var_85_string == var_2_object; // 0x80 Eq
	if(var_88_bool == 0) goto Label_131; // 0x81 JumpB
	return 0; // 0x82 Return
	
Label_131:
	var_89_string = ""; // 0x83 PushV
	var_89_string = var_85_string; // 0x84 Mov
	func_454(var_89_string); // 0x85 Call
	var_2_object = var_85_string; // 0x87 TMov
	return 0; // 0x88 Return
}


func_485(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x1e5 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x1e6 Or
	var_47_float = sqrt(var_48_int); // 0x1e7 Sqrt2
	var_49_float = 0.0; // 0x1e8 PushF
	var_50_bool = var_47_float < var_49_float; // 0x1e9 LT
	if(var_50_bool == 0) goto Label_493; // 0x1ea JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x1eb MovV
	return 2; // 0x1ec Return
	
Label_493:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x1ed Div2
	return 2; // 0x1ee Return
}


func_616(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x268 PushV
	var_64_string = "player"; // 0x269 PushS
	GetVariable(var_64_string, var_63_int); // 0x26a Func
	var_65_int = 0; // 0x26c PushI
	var_66_bool = var_63_int == var_65_int; // 0x26d Eq
	if(var_66_bool == 0) goto Label_626; // 0x26e JumpB
	var_61_int = 200001; // 0x26f MovI
	return 2; // 0x270 Return
	
Label_626:
	var_67_int = 1; // 0x272 PushI
	var_68_bool = var_63_int == var_67_int; // 0x273 Eq
	if(var_68_bool == 0) goto Label_631; // 0x274 JumpB
	var_61_int = 200002; // 0x275 MovI
	return 2; // 0x276 Return
	
Label_631:
	var_61_int = 200003; // 0x277 MovI
	return 2; // 0x278 Return
}


func_495(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x1ef PushV
	GetVariable(var_80_string, var_82_int); // 0x1f0 Func
	var_79_int = var_82_int; // 0x1f2 Mov
	return 2; // 0x1f3 Return
}


func_500(var_57_bool, var_58_string, var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1f4 PushV
	FindActor(var_61_object, var_58_string); // 0x1f5 Func
	var_62_bool = var_61_object == 0; // 0x1f7 NullEq
	if(var_62_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_57_bool = 0; // 0x1f9 MovB
	return 2; // 0x1fa Return
	
Label_507:
	Trigger(var_61_object, var_59_string); // 0x1fb Func
	var_57_bool = 1; // 0x1fd MovB
	return 2; // 0x1fe Return
}


func_633()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x279 PushV
	var_34_string = "Adding diary entry"; // 0x27a PushS
	Trace(var_34_string); // 0x27b Func
	var_35_int = 152; // 0x27d PushI
	var_36_int = 2; // 0x27e PushI
	var_37_int = 15358; // 0x27f PushI
	CreateDiaryEntry(var_33_object, var_35_int, var_36_int, var_37_int); // 0x280 Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x282 PushV
	var_39_object = var_33_object; // 0x283 Mov
	var_40_int = 148; // 0x284 MovI
	func_570(var_38_bool, var_39_object, var_40_int); // 0x285 Call
	return 2; // 0x287 Return
}


