task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb4 PushI
	if(var_8_int == 0) goto Label_353; // 0xb5 JumpB
	func_644(); // 0xb7 NEW_2
	var_10_int = 22187; // 0xb9 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xba Eq
	if(var_11_bool == 0) goto Label_198; // 0xbb JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xbc PushV
	var_12_object = var_1_object; // 0xbd MovT
	var_13_object = var_0_object; // 0xbe MovT
	func_701(); // 0xbf NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xc1 PushV
	var_55_object = var_1_object; // 0xc2 MovT
	var_56_object = var_0_object; // 0xc3 MovT
	func_724(); // 0xc4 NEW_2
	
Label_198:
	var_81_int = 22184; // 0xc6 PushI
	var_82_bool = var_6_int == var_81_int; // 0xc7 Eq
	if(var_82_bool == 0) goto Label_246; // 0xc8 JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0xc9 PushV
	var_84_object = var_1_object; // 0xca MovT
	func_740(var_84_object); // 0xcb NEW_2
	if(var_83_bool == 0) goto Label_231; // 0xcd JumpB
	var_91_string = ""; // 0xce PushV
	var_91_string = "Neutral"; // 0xcf MovS
	func_157(var_7_bool, var_91_string); // 0xd0 NEW_2
	var_108_int = 520971; // 0xd2 PushI
	SetMessage(var_108_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_109_int = 520972; // 0xd7 PushI
	var_110_int = 22186; // 0xd8 PushI
	var_111_int = 22185; // 0xd9 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xda TObjFunc
	var_112_int = 524081; // 0xdc PushI
	var_113_int = 25382; // 0xdd PushI
	var_114_int = 25381; // 0xde PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xdf TObjFunc
	var_115_int = 524088; // 0xe1 PushI
	var_116_int = 25386; // 0xe2 PushI
	var_117_int = 25388; // 0xe3 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_118_string = ""; // 0xe7 PushV
	var_118_string = "Neutral"; // 0xe8 MovS
	func_157(var_7_bool, var_118_string); // 0xe9 NEW_2
	var_119_int = 520975; // 0xeb PushI
	SetMessage(var_119_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_120_int = 520976; // 0xf0 PushI
	var_121_int = -1; // 0xf1 PushI
	var_122_int = 22189; // 0xf2 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_123_int = 25382; // 0xf6 PushI
	var_124_bool = var_6_int == var_123_int; // 0xf7 Eq
	if(var_124_bool == 0) goto Label_269; // 0xf8 JumpB
	var_125_string = ""; // 0xf9 PushV
	var_125_string = "Neutral"; // 0xfa MovS
	func_157(var_7_bool, var_125_string); // 0xfb NEW_2
	var_126_int = 524082; // 0xfd PushI
	SetMessage(var_126_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_127_int = 524083; // 0x102 PushI
	var_128_int = 25384; // 0x103 PushI
	var_129_int = 25383; // 0x104 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x105 TObjFunc
	var_130_int = 524089; // 0x107 PushI
	var_131_int = 25392; // 0x108 PushI
	var_132_int = 25391; // 0x109 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_133_int = 25392; // 0x10d PushI
	var_134_bool = var_6_int == var_133_int; // 0x10e Eq
	if(var_134_bool == 0) goto Label_287; // 0x10f JumpB
	var_135_string = ""; // 0x110 PushV
	var_135_string = "Neutral"; // 0x111 MovS
	func_157(var_7_bool, var_135_string); // 0x112 NEW_2
	var_136_int = 524090; // 0x114 PushI
	SetMessage(var_136_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_137_int = 524091; // 0x119 PushI
	var_138_int = 22186; // 0x11a PushI
	var_139_int = 25393; // 0x11b PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_140_int = 25384; // 0x11f PushI
	var_141_bool = var_6_int == var_140_int; // 0x120 Eq
	if(var_141_bool == 0) goto Label_305; // 0x121 JumpB
	var_142_string = ""; // 0x122 PushV
	var_142_string = "Neutral"; // 0x123 MovS
	func_157(var_7_bool, var_142_string); // 0x124 NEW_2
	var_143_int = 524084; // 0x126 PushI
	SetMessage(var_143_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_144_int = 524085; // 0x12b PushI
	var_145_int = 25386; // 0x12c PushI
	var_146_int = 25385; // 0x12d PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_147_int = 25386; // 0x131 PushI
	var_148_bool = var_6_int == var_147_int; // 0x132 Eq
	if(var_148_bool == 0) goto Label_323; // 0x133 JumpB
	var_149_string = ""; // 0x134 PushV
	var_149_string = "Neutral"; // 0x135 MovS
	func_157(var_7_bool, var_149_string); // 0x136 NEW_2
	var_150_int = 524086; // 0x138 PushI
	SetMessage(var_150_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_151_int = 524087; // 0x13d PushI
	var_152_int = 22186; // 0x13e PushI
	var_153_int = 25387; // 0x13f PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_154_int = 22186; // 0x143 PushI
	var_155_bool = var_6_int == var_154_int; // 0x144 Eq
	if(var_155_bool == 0) goto Label_341; // 0x145 JumpB
	var_156_string = ""; // 0x146 PushV
	var_156_string = "Neutral"; // 0x147 MovS
	func_157(var_7_bool, var_156_string); // 0x148 NEW_2
	var_157_int = 520973; // 0x14a PushI
	SetMessage(var_157_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_158_int = 520974; // 0x14f PushI
	var_159_int = -1; // 0x150 PushI
	var_160_int = 22187; // 0x151 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_3_string = 1; // 0x155 TMovB
	var_161_bool = 0; // 0x156 PushV
	func_881(var_161_bool); // 0x157 NEW_2
	if(var_161_bool == 0) goto Label_349; // 0x159 JumpB
	lshStopAnimation(); // 0x15a Func
	goto Label_351; // 0x15c Jump
	
Label_351:
	return 0; // 0x15f Return
	
Label_349:
	StopAnimation(); // 0x15d Func
	
Label_353:
	return 0; // 0x161 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_518(); // 0x164 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x166 PushV
	var_8_object = var_6_object; // 0x167 Mov
	TaskCall(0); // 0x168 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x169 NEW_2
	TaskReturn(); // 0x16a TaskReturn
	return 0; // 0x16c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x197 PushS
	var_8_bool = var_6_string == var_7_string; // 0x198 Eq
	if(var_8_bool == 0) goto Label_413; // 0x199 JumpB
	func_386(var_6_string); // 0x19b NEW_2
	
Label_413:
	return 0; // 0x19d Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x19e Func
	sync(); // 0x1a0 Func
	return 0; // 0x1a2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1a3 PushV
	var_6_bool = 0; // 0x1a4 MovB
	var_7_object = var_0_object; // 0x1a5 PushT
	if(var_7_object == 0) goto Label_428; // 0x1a6 JumpB
	var_8_bool = 0; // 0x1a7 PushV
	func_435(var_8_bool); // 0x1a8 NEW_2
	if(var_8_bool == 0) goto Label_428; // 0x1aa JumpB
	var_6_bool = 1; // 0x1ab MovB
	
Label_428:
	if(var_6_bool == 0) goto Label_434; // 0x1ac JumpB
	var_9_object = Obj(); // 0x1ad PushV
	func_651(var_9_object); // 0x1ae NEW_2
	RemoveActor(var_9_object); // 0x1b0 Func
	
Label_434:
	return 0; // 0x1b2 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x16d PushV
	
Label_366:
	var_8_bool = 0; // 0x16e PushV
	func_523(var_8_bool); // 0x16f NEW_2
	var_11_bool = var_8_bool == 0; // 0x171 Not
	if(var_11_bool == 0) goto Label_374; // 0x172 JumpB
	Hold(); // 0x173 Func
	goto Label_366; // 0x175 Jump
	
Label_374:
	var_12_int = 3; // 0x176 PushI
	rand(var_7_float, var_12_int); // 0x177 Func
	var_13_int = 3; // 0x179 PushI
	var_14_int = var_7_float + var_13_int; // 0x17a Add
	Sleep(var_14_int); // 0x17b Func
	func_437(); // 0x17e NEW_2
	goto Label_366; // 0x180 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 130.0; // 0x4 MovF
	func_528(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_875(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_873(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_877(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_879(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_856(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_143_bool = var_17_bool == 0; // 0x38 Not
	if(var_143_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_144_object = Obj(); // 0x3f PushV
	var_144_object = var_8_object; // 0x40 Mov
	func_596(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_386(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x182 PushV
	var_0_object = 1; // 0x183 TMovB
	IsLoaded(var_10_bool); // 0x184 Func
	var_11_bool = 0; // 0x186 PushV
	var_11_bool = 0; // 0x187 MovB
	var_12_bool = var_10_bool == 0; // 0x188 Not
	if(var_12_bool == 0) goto Label_399; // 0x189 JumpB
	var_13_bool = 0; // 0x18a PushV
	func_435(var_13_bool); // 0x18b NEW_2
	if(var_13_bool == 0) goto Label_399; // 0x18d JumpB
	var_11_bool = 1; // 0x18e MovB
	
Label_399:
	if(var_11_bool == 0) goto Label_405; // 0x18f JumpB
	var_14_object = Obj(); // 0x190 PushV
	func_651(var_14_object); // 0x191 NEW_2
	RemoveActor(var_14_object); // 0x193 Func
	
Label_405:
	return 2; // 0x195 Return
}


func_644()
{
	var_9_bool = 0; // 0x284 PushV
	func_881(var_9_bool); // 0x285 NEW_2
	if(var_9_bool == 0) goto Label_650; // 0x287 JumpB
	lshStopSpeech(); // 0x288 Func
	
Label_650:
	return 0; // 0x28a Return
}


func_516(var_56_bool)
{
	var_56_bool = 1; // 0x204 MovB
	return 0; // 0x205 Return
}


func_518()
{
	StopAnimation(); // 0x206 Func
	StopGroup0(); // 0x208 Func
	return 0; // 0x20a Return
}


func_778(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x30a PushV
	var_46_object = Obj(); // 0x30b PushV
	func_765(var_46_object); // 0x30c NEW_2
	var_43_object = var_46_object; // 0x30d Mov
	Find(var_39_int, var_44_object); // 0x30f ObjFunc
	var_51_bool = var_44_object == 0; // 0x311 Not
	if(var_51_bool == 0) goto Label_793; // 0x312 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x313 PushS
	var_53_int = var_52_string + var_39_int; // 0x314 Add
	Trace(var_53_int); // 0x315 Func
	var_37_bool = 0; // 0x317 MovB
	return 6; // 0x318 Return
	
Label_793:
	AddChild(var_38_object); // 0x319 ObjFunc
	var_54_int = 7; // 0x31b PushI
	SendWorldWndMessage(var_54_int); // 0x31c Func
	GetCategory(var_45_int); // 0x31e ObjFunc
	SetDiarySection(var_45_int); // 0x320 Func
	var_37_bool = 0; // 0x322 MovB
	return 6; // 0x323 Return
}


func_523(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x20b PushV
	IsLoaded(var_10_bool); // 0x20c Func
	var_8_bool = var_10_bool; // 0x20e Mov
	return 2; // 0x20f Return
}


func_651(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x28b PushV
	self(var_11_object); // 0x28c Func
	var_9_object = var_11_object; // 0x28e Mov
	return 2; // 0x28f Return
}


func_528(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x210 PushV
	GetPosition(var_31_cvector); // 0x211 ObjFunc
	GetEyesHeight(var_30_float); // 0x213 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x215 PushE
	var_39_float = var_39_float + var_30_float; // 0x216 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x217 PopE
	GetPosition(var_32_cvector); // 0x218 Func
	GetEyesHeight(var_30_float); // 0x21a Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x21c PushE
	var_40_float = var_40_float + var_30_float; // 0x21d Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x21e PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x21f Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x220 PushE
	var_41_float = 0; // 0x221 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x222 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x223 Or
	var_43_float = sqrt(var_42_int); // 0x224 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x225 Div2
	var_34_cvector = -var_33_cvector; // 0x226 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x227 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x228 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x229 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x22a Xor2
	func_657(var_45_cvector, var_46_cvector); // 0x22b NEW_2
	var_53_int = 25; // 0x22d PushI
	var_54_float = var_45_cvector * var_53_int; // 0x22e Mult
	var_55_int = var_44_float + var_54_float; // 0x22f Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x230 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x231 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x232 Add2
	IsOverrideActive(var_37_bool); // 0x233 Func
	var_57_bool = var_37_bool; // 0x235 Push
	if(var_57_bool == 0) goto Label_569; // 0x236 JumpB
	var_18_bool = 0; // 0x237 MovB
	return 18; // 0x238 Return
	
Label_569:
	StopWorld(); // 0x239 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x23b Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x23d PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x23e PushE
	Rotate(var_58_float, var_59_float); // 0x23f Func
	var_60_bool = 0; // 0x241 PushV
	func_881(var_60_bool); // 0x242 NEW_2
	if(var_60_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_590; // 0x245 Jump
	
Label_590:
	CameraWaitForPlayFinish(); // 0x24e Func
	ResumeWorld(); // 0x250 Func
	var_18_bool = 1; // 0x252 MovB
	return 18; // 0x253 Return
	
Label_582:
	var_61_string = "head"; // 0x246 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x247 Func
	var_62_bool = var_38_bool; // 0x249 Push
	if(var_62_bool == 0) goto Label_590; // 0x24a JumpB
	var_63_string = "head"; // 0x24b PushS
	LookAsyncCamera(var_63_string); // 0x24c Func
}


func_657(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x291 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x292 Or
	var_49_float = sqrt(var_50_int); // 0x293 Sqrt2
	var_51_float = 0.0; // 0x294 PushF
	var_52_bool = var_49_float < var_51_float; // 0x295 LT
	if(var_52_bool == 0) goto Label_665; // 0x296 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x297 MovV
	return 2; // 0x298 Return
	
Label_665:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x299 Div2
	return 2; // 0x29a Return
}


func_667(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x29b PushV
	GetVariable(var_88_string, var_90_int); // 0x29c Func
	var_87_int = var_90_int; // 0x29e Mov
	return 2; // 0x29f Return
}


func_157(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x9e PushV
	func_881(var_94_bool); // 0x9f NEW_2
	var_95_bool = var_94_bool == 0; // 0xa1 Not
	if(var_95_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_96_bool = var_93_string == var_2_object; // 0xa4 Eq
	if(var_96_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_97_string = ""; var_98_bool = 0; // 0xa7 PushV
	var_97_string = var_93_string; // 0xa8 Mov
	var_99_string = ""; // 0xa9 PushS
	var_100_bool = var_93_string == var_99_string; // 0xaa Eq
	if(var_100_bool == 0) goto Label_174; // 0xab JumpB
	var_98_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_629(var_97_string, var_98_bool); // 0xaf NEW_2
	var_2_object = var_93_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_98_bool = 1; // 0xae MovB
}


func_672(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x2a0 PushV
	GetGameTime(var_31_float); // 0x2a1 Func
	var_29_float = var_31_float; // 0x2a3 Mov
	return 2; // 0x2a4 Return
}


func_677(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2a5 PushV
	var_40_string = "idle"; // 0x2a6 MovS
	var_41_int = var_38_int; // 0x2a7 Push
	if(var_41_int == 0) goto Label_682; // 0x2a8 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2a9 Add2
	
Label_682:
	var_37_string = var_40_string; // 0x2aa Mov
	return 2; // 0x2ab Return
}


func_806(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x326 PushV
	GetMainOutdoorScene(var_21_object); // 0x327 Func
	var_23_bool = var_21_object == 0; // 0x329 NullEq
	if(var_23_bool == 0) goto Label_817; // 0x32a JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x32b PushS
	Trace(var_24_string); // 0x32c Func
	var_22_object = 0; // 0x32e SetNull
	var_18_object = var_22_object; // 0x32f Mov
	return 4; // 0x330 Return
	
Label_817:
	GetMap(var_22_object); // 0x331 ObjFunc
	var_18_object = var_22_object; // 0x333 Mov
	return 4; // 0x334 Return
}


func_684(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2ac PushV
	var_34_int = 0; // 0x2ad MovI
	
Label_686:
	var_36_string = "all"; // 0x2ae PushS
	var_37_string = ""; var_38_int = 0; // 0x2af PushV
	var_38_int = var_34_int; // 0x2b0 Mov
	func_677(var_37_string, var_38_int); // 0x2b1 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2b3 Func
	var_42_bool = var_35_bool == 0; // 0x2b5 Not
	if(var_42_bool == 0) goto Label_696; // 0x2b6 JumpB
	goto Label_699; // 0x2b7 Jump
	
Label_699:
	var_31_int = var_34_int; // 0x2bb Mov
	return 4; // 0x2bc Return
	
Label_696:
	var_43_int = 1; // 0x2b8 PushI
	var_34_int = var_34_int + var_43_int; // 0x2b9 Add2
	goto Label_686; // 0x2ba Jump
}


func_435(var_8_bool)
{
	var_8_bool = 1; // 0x1b3 MovB
	return 0; // 0x1b4 Return
}


func_437()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1b5 PushV
	WaitForAnimEnd(); // 0x1b6 Func
	var_29_bool = 0; // 0x1b8 PushV
	func_523(var_29_bool); // 0x1b9 NEW_2
	var_30_bool = var_29_bool == 0; // 0x1bb Not
	if(var_30_bool == 0) goto Label_446; // 0x1bc JumpB
	return 14; // 0x1bd Return
	
Label_446:
	var_31_int = 0; // 0x1be PushV
	func_684(var_31_int); // 0x1bf NEW_2
	var_22_int = var_31_int; // 0x1c0 Mov
	var_23_int = 0; // 0x1c2 MovI
	
Label_451:
	var_44_bool = 0; // 0x1c3 PushV
	var_44_bool = 0; // 0x1c4 MovB
	var_45_int = 5; // 0x1c5 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1c6 LT
	if(var_46_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_47_bool = 0; // 0x1c8 PushV
	func_523(var_47_bool); // 0x1c9 NEW_2
	if(var_47_bool == 0) goto Label_461; // 0x1cb JumpB
	var_44_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_44_bool == 0) goto Label_513; // 0x1cd JumpB
	var_48_int = 3; // 0x1ce PushI
	irand(var_24_int, var_48_int); // 0x1cf Func
	var_49_int = 0; // 0x1d1 PushI
	var_50_bool = var_24_int == var_49_int; // 0x1d2 Eq
	if(var_50_bool == 0) goto Label_485; // 0x1d3 JumpB
	var_51_int = var_22_int; // 0x1d4 Push
	if(var_51_int == 0) goto Label_484; // 0x1d5 JumpB
	irand(var_25_int, var_22_int); // 0x1d6 Func
	var_52_string = "all"; // 0x1d8 PushS
	var_53_string = ""; var_54_int = 0; // 0x1d9 PushV
	var_54_int = var_25_int; // 0x1da Mov
	func_677(var_53_string, var_54_int); // 0x1db NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1dd Func
	WaitForAnimEnd(var_26_bool); // 0x1df Func
	var_55_bool = var_26_bool == 0; // 0x1e1 Not
	if(var_55_bool == 0) goto Label_484; // 0x1e2 JumpB
	goto Label_513; // 0x1e3 Jump
	
Label_513:
	ResetAAS(); // 0x201 Func
	return 14; // 0x203 Return
	
Label_484:
	goto Label_502; // 0x1e4 Jump
	
Label_502:
	var_56_bool = 0; // 0x1f6 PushV
	func_516(var_56_bool); // 0x1f7 NEW_2
	var_57_bool = var_56_bool == 0; // 0x1f9 Not
	if(var_57_bool == 0) goto Label_508; // 0x1fa JumpB
	goto Label_513; // 0x1fb Jump
	
Label_508:
	ResetAAS(); // 0x1fc Func
	var_58_int = 1; // 0x1fe PushI
	var_23_int = var_23_int + var_58_int; // 0x1ff Add2
	goto Label_451; // 0x200 Jump
	
Label_485:
	var_59_int = 1; // 0x1e5 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1e6 Eq
	if(var_60_bool == 0) goto Label_499; // 0x1e7 JumpB
	var_61_int = 4; // 0x1e8 PushI
	rand(var_27_float, var_61_int); // 0x1e9 Func
	var_62_int = 1; // 0x1eb PushI
	var_63_int = var_27_float + var_62_int; // 0x1ec Add
	Sleep(var_63_int, var_28_bool); // 0x1ed Func
	var_64_bool = var_28_bool == 0; // 0x1ef Not
	if(var_64_bool == 0) goto Label_498; // 0x1f0 JumpB
	goto Label_513; // 0x1f1 Jump
	
Label_498:
	goto Label_502; // 0x1f2 Jump
	
Label_499:
	var_65_int = var_23_int; // 0x1f3 Push
	if(var_65_int == 0) goto Label_502; // 0x1f4 JumpB
	goto Label_513; // 0x1f5 Jump
}


func_823(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x337 PushV
	GetMainOutdoorScene(var_67_object); // 0x338 Func
	var_69_bool = var_67_object == 0; // 0x33a NullEq
	if(var_69_bool == 0) goto Label_832; // 0x33b JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x33c PushS
	Trace(var_70_string); // 0x33d Func
	return 8; // 0x33f Return
	
Label_832:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x340 ObjFunc
	var_71_bool = var_68_bool == 0; // 0x342 Not
	if(var_71_bool == 0) goto Label_842; // 0x343 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x344 PushS
	var_73_int = var_72_string + var_58_string; // 0x345 Add
	var_74_string = " doesnt exist"; // 0x346 PushS
	var_75_int = var_73_int + var_74_string; // 0x347 Add
	Trace(var_75_int); // 0x348 Func
	
Label_842:
	GetMap(var_57_object); // 0x34a ObjFunc
	var_76_bool = var_57_object == 0; // 0x34c NullEq
	if(var_76_bool == 0) goto Label_850; // 0x34d JumpB
	var_77_string = "Can't find map"; // 0x34e PushS
	Trace(var_77_string); // 0x34f Func
	return 8; // 0x351 Return
	
Label_850:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x352 PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x353 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x354 ObjFunc
	return 8; // 0x356 Return
}


func_701()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2bd PushV
	var_16_string = "b7q01"; // 0x2be PushS
	var_17_int = 2; // 0x2bf PushI
	SetVariable(var_16_string, var_17_int); // 0x2c0 Func
	var_18_object = Obj(); // 0x2c2 PushV
	func_806(var_18_object); // 0x2c3 NEW_2
	var_15_object = var_18_object; // 0x2c4 Mov
	var_25_string = "b7q01BirdmaskGotoMat"; // 0x2c6 PushS
	var_26_string = "pt_map_mat"; // 0x2c7 PushS
	var_27_int = 1; // 0x2c8 PushI
	var_28_int = 521022; // 0x2c9 PushI
	var_29_float = 0; // 0x2ca PushV
	func_672(var_29_float); // 0x2cb NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x2cd ObjFunc
	func_752(); // 0x2d0 NEW_2
	return 2; // 0x2d2 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_127; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_740(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_110; // 0x54 JumpB
	var_93_string = ""; // 0x55 PushV
	var_93_string = "Neutral"; // 0x56 MovS
	func_157(var_79_object, var_93_string); // 0x57 NEW_2
	var_110_int = 520971; // 0x59 PushI
	SetMessage(var_110_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_111_int = 520972; // 0x5e PushI
	var_112_int = 22186; // 0x5f PushI
	var_113_int = 22185; // 0x60 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x61 TObjFunc
	var_114_int = 524081; // 0x63 PushI
	var_115_int = 25382; // 0x64 PushI
	var_116_int = 25381; // 0x65 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x66 TObjFunc
	var_117_int = 524088; // 0x68 PushI
	var_118_int = 25386; // 0x69 PushI
	var_119_int = 25388; // 0x6a PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_120_bool = 0; // 0x7f PushV
	func_881(var_120_bool); // 0x80 NEW_2
	if(var_120_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_121_string = var_3_string; // 0x85 PushT
	if(var_121_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_122_string = ""; // 0x88 PushV
	var_122_string = var_2_object; // 0x89 MovT
	func_613(var_122_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_133_string = "all"; // 0x8e PushS
	var_134_string = "idle"; // 0x8f PushS
	PlayAnimation(var_133_string, var_134_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_135_string = var_3_string; // 0x94 PushT
	if(var_135_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_136_string = "all"; // 0x97 PushS
	var_137_string = "idle"; // 0x98 PushS
	PlayAnimation(var_136_string, var_137_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_138_string = ""; // 0x6e PushV
	var_138_string = "Neutral"; // 0x6f MovS
	func_157(var_79_object, var_138_string); // 0x70 NEW_2
	var_139_int = 520975; // 0x72 PushI
	SetMessage(var_139_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_140_int = 520976; // 0x77 PushI
	var_141_int = -1; // 0x78 PushI
	var_142_int = 22189; // 0x79 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_596()
{
	var_145_bool = 0; var_146_bool = 0; // 0x254 PushV
	CameraSwitchToNormal(); // 0x255 Func
	var_147_bool = 0; // 0x257 PushV
	func_881(var_147_bool); // 0x258 NEW_2
	if(var_147_bool == 0) goto Label_604; // 0x25a JumpB
	goto Label_612; // 0x25b Jump
	
Label_612:
	return 2; // 0x264 Return
	
Label_604:
	var_148_string = "head"; // 0x25c PushS
	HasAnimationTrack(var_146_bool, var_148_string); // 0x25d Func
	var_149_bool = var_146_bool; // 0x25f Push
	if(var_149_bool == 0) goto Label_612; // 0x260 JumpB
	var_150_string = "head"; // 0x261 PushS
	UnlookAsync(var_150_string); // 0x262 Func
}


func_724()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x2d5 PushV
	var_60_object = Obj(); // 0x2d6 PushV
	func_806(var_60_object); // 0x2d7 NEW_2
	var_57_object = var_60_object; // 0x2d8 Mov
	var_58_string = "pt_map_mat"; // 0x2da MovS
	var_59_float = 2; // 0x2db MovI
	func_823(var_57_object, var_58_string, var_59_float); // 0x2dc NEW_2
	var_80_object = Obj(); // 0x2de PushV
	func_806(var_80_object); // 0x2df NEW_2
	ShowMap(var_80_object); // 0x2e1 ObjFunc
	return 0; // 0x2e3 Return
}


func_856(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x358 PushV
	var_72_string = "branch"; // 0x359 PushS
	GetVariable(var_72_string, var_71_int); // 0x35a Func
	var_73_int = 0; // 0x35c PushI
	var_74_bool = var_71_int == var_73_int; // 0x35d Eq
	if(var_74_bool == 0) goto Label_866; // 0x35e JumpB
	var_69_int = 1; // 0x35f MovI
	return 2; // 0x360 Return
	
Label_866:
	var_75_int = 1; // 0x362 PushI
	var_76_bool = var_71_int == var_75_int; // 0x363 Eq
	if(var_76_bool == 0) goto Label_871; // 0x364 JumpB
	var_69_int = 2; // 0x365 MovI
	return 2; // 0x366 Return
	
Label_871:
	var_69_int = 3; // 0x367 MovI
	return 2; // 0x368 Return
}


func_740(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x2e5 PushV
	var_88_string = "b7q01"; // 0x2e6 MovS
	func_667(var_87_int, var_88_string); // 0x2e7 NEW_2
	var_91_int = 1; // 0x2e9 PushI
	var_92_bool = var_87_int == var_91_int; // 0x2ea Eq
	if(var_92_bool == 0) goto Label_750; // 0x2eb JumpB
	var_85_bool = 1; // 0x2ec MovB
	return 0; // 0x2ed Return
	
Label_750:
	var_85_bool = 0; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_613(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x265 PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x266 Func
	var_129_bool = var_126_bool; // 0x268 Push
	if(var_129_bool == 0) goto Label_624; // 0x269 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x26a Func
	var_130_bool = 0; // 0x26c PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x26d Func
	goto Label_628; // 0x26f Jump
	
Label_628:
	return 6; // 0x274 Return
	
Label_624:
	var_131_string = "Can't find lsh animation : "; // 0x270 PushS
	var_132_int = var_131_string + var_122_string; // 0x271 Add
	Trace(var_132_int); // 0x272 Func
}


func_873(var_66_int)
{
	var_66_int = 515571; // 0x369 MovI
	return 0; // 0x36a Return
}


func_875(var_65_int)
{
	var_65_int = 504029; // 0x36b MovI
	return 0; // 0x36c Return
}


func_877(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png"; // 0x36d MovS
	return 0; // 0x36e Return
}


func_879(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png"; // 0x36f MovS
	return 0; // 0x370 Return
}


func_752()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x2f0 PushV
	var_34_int = 255; // 0x2f1 PushI
	var_35_int = 1; // 0x2f2 PushI
	var_36_int = 521023; // 0x2f3 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x2f4 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x2f6 PushV
	var_38_object = var_33_object; // 0x2f7 Mov
	var_39_int = 253; // 0x2f8 MovI
	func_778(var_37_bool, var_38_object, var_39_int); // 0x2f9 NEW_2
	return 2; // 0x2fb Return
}


func_881(var_60_bool)
{
	var_60_bool = 0; // 0x371 MovB
	return 0; // 0x372 Return
}


func_629(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x275 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x276 Func
	var_107_bool = var_104_bool; // 0x278 Push
	if(var_107_bool == 0) goto Label_639; // 0x279 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x27a Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x27c Func
	goto Label_643; // 0x27e Jump
	
Label_643:
	return 6; // 0x283 Return
	
Label_639:
	var_108_string = "Can't find lsh animation : "; // 0x27f PushS
	var_109_int = var_108_string + var_97_string; // 0x280 Add
	Trace(var_109_int); // 0x281 Func
}


func_765(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x2fd PushV
	GetDiaryRoot(var_48_object); // 0x2fe Func
	var_49_bool = var_48_object == 0; // 0x300 Not
	if(var_49_bool == 0) goto Label_775; // 0x301 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x302 PushS
	Trace(var_50_string); // 0x303 Func
	var_46_object = 0; // 0x305 MovB
	return 2; // 0x306 Return
	
Label_775:
	var_46_object = var_48_object; // 0x307 Mov
	return 2; // 0x308 Return
}


