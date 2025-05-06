task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb4 PushI
	if(var_8_int == 0) goto Label_353; // 0xb5 JumpB
	func_646(); // 0xb7 NEW_2
	var_10_int = 22187; // 0xb9 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xba Eq
	if(var_11_bool == 0) goto Label_198; // 0xbb JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xbc PushV
	var_12_object = var_1_object; // 0xbd MovT
	var_13_object = var_0_object; // 0xbe MovT
	func_703(); // 0xbf NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xc1 PushV
	var_55_object = var_1_object; // 0xc2 MovT
	var_56_object = var_0_object; // 0xc3 MovT
	func_726(); // 0xc4 NEW_2
	
Label_198:
	var_81_int = 22184; // 0xc6 PushI
	var_82_bool = var_6_int == var_81_int; // 0xc7 Eq
	if(var_82_bool == 0) goto Label_246; // 0xc8 JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0xc9 PushV
	var_84_object = var_1_object; // 0xca MovT
	func_742(var_84_object); // 0xcb NEW_2
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
	func_883(var_161_bool); // 0x157 NEW_2
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
	func_653(var_9_object); // 0x1ae NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_877(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_875(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_879(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_881(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_858(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_144_bool = var_17_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_8_object; // 0x40 Mov
	func_597(); // 0x41 NEW_2
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
	func_653(var_14_object); // 0x191 NEW_2
	RemoveActor(var_14_object); // 0x193 Func
	
Label_405:
	return 2; // 0x195 Return
}


func_516(var_56_bool)
{
	var_56_bool = 1; // 0x204 MovB
	return 0; // 0x205 Return
}


func_646()
{
	var_9_bool = 0; // 0x286 PushV
	func_883(var_9_bool); // 0x287 NEW_2
	if(var_9_bool == 0) goto Label_652; // 0x289 JumpB
	lshStopSpeech(); // 0x28a Func
	
Label_652:
	return 0; // 0x28c Return
}


func_518()
{
	StopAnimation(); // 0x206 Func
	StopGroup0(); // 0x208 Func
	return 0; // 0x20a Return
}


func_523(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x20b PushV
	IsLoaded(var_10_bool); // 0x20c Func
	var_8_bool = var_10_bool; // 0x20e Mov
	return 2; // 0x20f Return
}


func_780(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x30c PushV
	var_46_object = Obj(); // 0x30d PushV
	func_767(var_46_object); // 0x30e NEW_2
	var_43_object = var_46_object; // 0x30f Mov
	Find(var_39_int, var_44_object); // 0x311 ObjFunc
	var_51_bool = var_44_object == 0; // 0x313 Not
	if(var_51_bool == 0) goto Label_795; // 0x314 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x315 PushS
	var_53_int = var_52_string + var_39_int; // 0x316 Add
	Trace(var_53_int); // 0x317 Func
	var_37_bool = 0; // 0x319 MovB
	return 6; // 0x31a Return
	
Label_795:
	AddChild(var_38_object); // 0x31b ObjFunc
	var_54_int = 7; // 0x31d PushI
	SendWorldWndMessage(var_54_int); // 0x31e Func
	GetCategory(var_45_int); // 0x320 ObjFunc
	SetDiarySection(var_45_int); // 0x322 Func
	var_37_bool = 0; // 0x324 MovB
	return 6; // 0x325 Return
}


func_653(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x28d PushV
	self(var_11_object); // 0x28e Func
	var_9_object = var_11_object; // 0x290 Mov
	return 2; // 0x291 Return
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
	func_659(var_45_cvector, var_46_cvector); // 0x22b NEW_2
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
	var_58_bool = 1; // 0x23b PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x23c Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x23e PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x23f PushE
	Rotate(var_59_float, var_60_float); // 0x240 Func
	var_61_bool = 0; // 0x242 PushV
	func_883(var_61_bool); // 0x243 NEW_2
	if(var_61_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_591; // 0x246 Jump
	
Label_591:
	CameraWaitForPlayFinish(); // 0x24f Func
	ResumeWorld(); // 0x251 Func
	var_18_bool = 1; // 0x253 MovB
	return 18; // 0x254 Return
	
Label_583:
	var_62_string = "head"; // 0x247 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x248 Func
	var_63_bool = var_38_bool; // 0x24a Push
	if(var_63_bool == 0) goto Label_591; // 0x24b JumpB
	var_64_string = "head"; // 0x24c PushS
	LookAsyncCamera(var_64_string); // 0x24d Func
}


func_659(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x293 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x294 Or
	var_49_float = sqrt(var_50_int); // 0x295 Sqrt2
	var_51_float = 0.0; // 0x296 PushF
	var_52_bool = var_49_float < var_51_float; // 0x297 LT
	if(var_52_bool == 0) goto Label_667; // 0x298 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x299 MovV
	return 2; // 0x29a Return
	
Label_667:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x29b Div2
	return 2; // 0x29c Return
}


func_669(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x29d PushV
	GetVariable(var_89_string, var_91_int); // 0x29e Func
	var_88_int = var_91_int; // 0x2a0 Mov
	return 2; // 0x2a1 Return
}


func_157(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x9e PushV
	func_883(var_95_bool); // 0x9f NEW_2
	var_96_bool = var_95_bool == 0; // 0xa1 Not
	if(var_96_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_97_bool = var_94_string == var_2_object; // 0xa4 Eq
	if(var_97_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_98_string = ""; var_99_bool = 0; // 0xa7 PushV
	var_98_string = var_94_string; // 0xa8 Mov
	var_100_string = ""; // 0xa9 PushS
	var_101_bool = var_94_string == var_100_string; // 0xaa Eq
	if(var_101_bool == 0) goto Label_174; // 0xab JumpB
	var_99_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_631(var_98_string, var_99_bool); // 0xaf NEW_2
	var_2_object = var_94_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_99_bool = 1; // 0xae MovB
}


func_674(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x2a2 PushV
	GetGameTime(var_31_float); // 0x2a3 Func
	var_29_float = var_31_float; // 0x2a5 Mov
	return 2; // 0x2a6 Return
}


func_679(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2a7 PushV
	var_40_string = "idle"; // 0x2a8 MovS
	var_41_int = var_38_int; // 0x2a9 Push
	if(var_41_int == 0) goto Label_684; // 0x2aa JumpB
	var_40_string = var_40_string + var_38_int; // 0x2ab Add2
	
Label_684:
	var_37_string = var_40_string; // 0x2ac Mov
	return 2; // 0x2ad Return
}


func_808(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x328 PushV
	GetMainOutdoorScene(var_21_object); // 0x329 Func
	var_23_bool = var_21_object == 0; // 0x32b NullEq
	if(var_23_bool == 0) goto Label_819; // 0x32c JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x32d PushS
	Trace(var_24_string); // 0x32e Func
	var_22_object = 0; // 0x330 SetNull
	var_18_object = var_22_object; // 0x331 Mov
	return 4; // 0x332 Return
	
Label_819:
	GetMap(var_22_object); // 0x333 ObjFunc
	var_18_object = var_22_object; // 0x335 Mov
	return 4; // 0x336 Return
}


func_686(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2ae PushV
	var_34_int = 0; // 0x2af MovI
	
Label_688:
	var_36_string = "all"; // 0x2b0 PushS
	var_37_string = ""; var_38_int = 0; // 0x2b1 PushV
	var_38_int = var_34_int; // 0x2b2 Mov
	func_679(var_37_string, var_38_int); // 0x2b3 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2b5 Func
	var_42_bool = var_35_bool == 0; // 0x2b7 Not
	if(var_42_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_701; // 0x2b9 Jump
	
Label_701:
	var_31_int = var_34_int; // 0x2bd Mov
	return 4; // 0x2be Return
	
Label_698:
	var_43_int = 1; // 0x2ba PushI
	var_34_int = var_34_int + var_43_int; // 0x2bb Add2
	goto Label_688; // 0x2bc Jump
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
	func_686(var_31_int); // 0x1bf NEW_2
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
	func_679(var_53_string, var_54_int); // 0x1db NEW_2
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


func_825(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x339 PushV
	GetMainOutdoorScene(var_67_object); // 0x33a Func
	var_69_bool = var_67_object == 0; // 0x33c NullEq
	if(var_69_bool == 0) goto Label_834; // 0x33d JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x33e PushS
	Trace(var_70_string); // 0x33f Func
	return 8; // 0x341 Return
	
Label_834:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x342 ObjFunc
	var_71_bool = var_68_bool == 0; // 0x344 Not
	if(var_71_bool == 0) goto Label_844; // 0x345 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x346 PushS
	var_73_int = var_72_string + var_58_string; // 0x347 Add
	var_74_string = " doesnt exist"; // 0x348 PushS
	var_75_int = var_73_int + var_74_string; // 0x349 Add
	Trace(var_75_int); // 0x34a Func
	
Label_844:
	GetMap(var_57_object); // 0x34c ObjFunc
	var_76_bool = var_57_object == 0; // 0x34e NullEq
	if(var_76_bool == 0) goto Label_852; // 0x34f JumpB
	var_77_string = "Can't find map"; // 0x350 PushS
	Trace(var_77_string); // 0x351 Func
	return 8; // 0x353 Return
	
Label_852:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x354 PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x355 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x356 ObjFunc
	return 8; // 0x358 Return
}


func_703()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2bf PushV
	var_16_string = "b7q01"; // 0x2c0 PushS
	var_17_int = 2; // 0x2c1 PushI
	SetVariable(var_16_string, var_17_int); // 0x2c2 Func
	var_18_object = Obj(); // 0x2c4 PushV
	func_808(var_18_object); // 0x2c5 NEW_2
	var_15_object = var_18_object; // 0x2c6 Mov
	var_25_string = "b7q01BirdmaskGotoMat"; // 0x2c8 PushS
	var_26_string = "pt_map_mat"; // 0x2c9 PushS
	var_27_int = 1; // 0x2ca PushI
	var_28_int = 521022; // 0x2cb PushI
	var_29_float = 0; // 0x2cc PushV
	func_674(var_29_float); // 0x2cd NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x2cf ObjFunc
	func_754(); // 0x2d2 NEW_2
	return 2; // 0x2d4 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_127; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_742(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_110; // 0x54 JumpB
	var_94_string = ""; // 0x55 PushV
	var_94_string = "Neutral"; // 0x56 MovS
	func_157(var_80_object, var_94_string); // 0x57 NEW_2
	var_111_int = 520971; // 0x59 PushI
	SetMessage(var_111_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_112_int = 520972; // 0x5e PushI
	var_113_int = 22186; // 0x5f PushI
	var_114_int = 22185; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	var_115_int = 524081; // 0x63 PushI
	var_116_int = 25382; // 0x64 PushI
	var_117_int = 25381; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	var_118_int = 524088; // 0x68 PushI
	var_119_int = 25386; // 0x69 PushI
	var_120_int = 25388; // 0x6a PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_121_bool = 0; // 0x7f PushV
	func_883(var_121_bool); // 0x80 NEW_2
	if(var_121_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_122_string = var_3_string; // 0x85 PushT
	if(var_122_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_123_string = ""; // 0x88 PushV
	var_123_string = var_2_object; // 0x89 MovT
	func_615(var_123_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_134_string = "all"; // 0x8e PushS
	var_135_string = "idle"; // 0x8f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_136_string = var_3_string; // 0x94 PushT
	if(var_136_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_137_string = "all"; // 0x97 PushS
	var_138_string = "idle"; // 0x98 PushS
	PlayAnimation(var_137_string, var_138_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_139_string = ""; // 0x6e PushV
	var_139_string = "Neutral"; // 0x6f MovS
	func_157(var_80_object, var_139_string); // 0x70 NEW_2
	var_140_int = 520975; // 0x72 PushI
	SetMessage(var_140_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_141_int = 520976; // 0x77 PushI
	var_142_int = -1; // 0x78 PushI
	var_143_int = 22189; // 0x79 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_597()
{
	var_146_bool = 0; var_147_bool = 0; // 0x255 PushV
	var_148_bool = 1; // 0x256 PushB
	CameraSwitchToNormal(var_148_bool); // 0x257 Func
	var_149_bool = 0; // 0x259 PushV
	func_883(var_149_bool); // 0x25a NEW_2
	if(var_149_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_614; // 0x25d Jump
	
Label_614:
	return 2; // 0x266 Return
	
Label_606:
	var_150_string = "head"; // 0x25e PushS
	HasAnimationTrack(var_147_bool, var_150_string); // 0x25f Func
	var_151_bool = var_147_bool; // 0x261 Push
	if(var_151_bool == 0) goto Label_614; // 0x262 JumpB
	var_152_string = "head"; // 0x263 PushS
	UnlookAsync(var_152_string); // 0x264 Func
}


func_726()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x2d7 PushV
	var_60_object = Obj(); // 0x2d8 PushV
	func_808(var_60_object); // 0x2d9 NEW_2
	var_57_object = var_60_object; // 0x2da Mov
	var_58_string = "pt_map_mat"; // 0x2dc MovS
	var_59_float = 2; // 0x2dd MovI
	func_825(var_57_object, var_58_string, var_59_float); // 0x2de NEW_2
	var_80_object = Obj(); // 0x2e0 PushV
	func_808(var_80_object); // 0x2e1 NEW_2
	ShowMap(var_80_object); // 0x2e3 ObjFunc
	return 0; // 0x2e5 Return
}


func_858(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x35a PushV
	var_73_string = "branch"; // 0x35b PushS
	GetVariable(var_73_string, var_72_int); // 0x35c Func
	var_74_int = 0; // 0x35e PushI
	var_75_bool = var_72_int == var_74_int; // 0x35f Eq
	if(var_75_bool == 0) goto Label_868; // 0x360 JumpB
	var_70_int = 1; // 0x361 MovI
	return 2; // 0x362 Return
	
Label_868:
	var_76_int = 1; // 0x364 PushI
	var_77_bool = var_72_int == var_76_int; // 0x365 Eq
	if(var_77_bool == 0) goto Label_873; // 0x366 JumpB
	var_70_int = 2; // 0x367 MovI
	return 2; // 0x368 Return
	
Label_873:
	var_70_int = 3; // 0x369 MovI
	return 2; // 0x36a Return
}


func_742(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2e7 PushV
	var_89_string = "b7q01"; // 0x2e8 MovS
	func_669(var_88_int, var_89_string); // 0x2e9 NEW_2
	var_92_int = 1; // 0x2eb PushI
	var_93_bool = var_88_int == var_92_int; // 0x2ec Eq
	if(var_93_bool == 0) goto Label_752; // 0x2ed JumpB
	var_86_bool = 1; // 0x2ee MovB
	return 0; // 0x2ef Return
	
Label_752:
	var_86_bool = 0; // 0x2f0 MovB
	return 0; // 0x2f1 Return
}


func_615(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0; // 0x267 PushV
	lshHasAnimation(var_127_bool, var_123_string); // 0x268 Func
	var_130_bool = var_127_bool; // 0x26a Push
	if(var_130_bool == 0) goto Label_626; // 0x26b JumpB
	lshGetAnimTimes(var_123_string, var_128_float, var_129_float); // 0x26c Func
	var_131_bool = 0; // 0x26e PushB
	lshPlayAnimation(var_128_float, var_129_float, var_131_bool); // 0x26f Func
	goto Label_630; // 0x271 Jump
	
Label_630:
	return 6; // 0x276 Return
	
Label_626:
	var_132_string = "Can't find lsh animation : "; // 0x272 PushS
	var_133_int = var_132_string + var_123_string; // 0x273 Add
	Trace(var_133_int); // 0x274 Func
}


func_875(var_67_int)
{
	var_67_int = 515571; // 0x36b MovI
	return 0; // 0x36c Return
}


func_877(var_66_int)
{
	var_66_int = 504029; // 0x36d MovI
	return 0; // 0x36e Return
}


func_879(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png"; // 0x36f MovS
	return 0; // 0x370 Return
}


func_881(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png"; // 0x371 MovS
	return 0; // 0x372 Return
}


func_754()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x2f2 PushV
	var_34_int = 255; // 0x2f3 PushI
	var_35_int = 1; // 0x2f4 PushI
	var_36_int = 521023; // 0x2f5 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x2f6 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x2f8 PushV
	var_38_object = var_33_object; // 0x2f9 Mov
	var_39_int = 253; // 0x2fa MovI
	func_780(var_37_bool, var_38_object, var_39_int); // 0x2fb NEW_2
	return 2; // 0x2fd Return
}


func_883(var_61_bool)
{
	var_61_bool = 0; // 0x373 MovB
	return 0; // 0x374 Return
}


func_631(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x277 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x278 Func
	var_108_bool = var_105_bool; // 0x27a Push
	if(var_108_bool == 0) goto Label_641; // 0x27b JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x27c Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x27e Func
	goto Label_645; // 0x280 Jump
	
Label_645:
	return 6; // 0x285 Return
	
Label_641:
	var_109_string = "Can't find lsh animation : "; // 0x281 PushS
	var_110_int = var_109_string + var_98_string; // 0x282 Add
	Trace(var_110_int); // 0x283 Func
}


func_767(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x2ff PushV
	GetDiaryRoot(var_48_object); // 0x300 Func
	var_49_bool = var_48_object == 0; // 0x302 Not
	if(var_49_bool == 0) goto Label_777; // 0x303 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x304 PushS
	Trace(var_50_string); // 0x305 Func
	var_46_object = 0; // 0x307 MovB
	return 2; // 0x308 Return
	
Label_777:
	var_46_object = var_48_object; // 0x309 Mov
	return 2; // 0x30a Return
}


