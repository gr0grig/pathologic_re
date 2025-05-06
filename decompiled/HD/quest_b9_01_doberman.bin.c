task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa9 PushI
	if(var_8_int == 0) goto Label_344; // 0xaa JumpB
	func_629(); // 0xac NEW_2
	var_10_int = 22720; // 0xae PushI
	var_11_bool = var_7_bool == var_10_int; // 0xaf Eq
	if(var_11_bool == 0) goto Label_182; // 0xb0 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb1 PushV
	var_12_object = var_1_object; // 0xb2 MovT
	var_13_object = var_0_object; // 0xb3 MovT
	func_698(); // 0xb4 NEW_2
	
Label_182:
	var_16_int = 22722; // 0xb6 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xb7 Eq
	if(var_17_bool == 0) goto Label_195; // 0xb8 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb9 PushV
	var_18_object = var_1_object; // 0xba MovT
	var_19_object = var_0_object; // 0xbb MovT
	func_704(); // 0xbc NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xbe PushV
	var_71_object = var_1_object; // 0xbf MovT
	var_72_object = var_0_object; // 0xc0 MovT
	func_735(); // 0xc1 NEW_2
	
Label_195:
	var_97_int = 22719; // 0xc3 PushI
	var_98_bool = var_6_int == var_97_int; // 0xc4 Eq
	if(var_98_bool == 0) goto Label_232; // 0xc5 JumpB
	var_99_string = ""; // 0xc6 PushV
	var_99_string = "Neutral"; // 0xc7 MovS
	func_146(var_7_bool, var_99_string); // 0xc8 NEW_2
	var_116_int = 521558; // 0xca PushI
	SetMessage(var_116_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_117_bool = 0; // 0xcf PushV
	var_117_bool = 0; // 0xd0 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0xd1 PushV
	var_119_object = var_1_object; // 0xd2 MovT
	func_751(var_119_object); // 0xd3 NEW_2
	if(var_118_bool == 0) goto Label_220; // 0xd5 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0xd6 PushV
	var_125_object = var_1_object; // 0xd7 MovT
	func_763(var_125_object); // 0xd8 NEW_2
	if(var_124_bool == 0) goto Label_220; // 0xda JumpB
	var_117_bool = 1; // 0xdb MovB
	
Label_220:
	if(var_117_bool == 0) goto Label_226; // 0xdc JumpB
	var_130_int = 521559; // 0xdd PushI
	var_131_int = 22721; // 0xde PushI
	var_132_int = 22720; // 0xdf PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xe0 TObjFunc
	
Label_226:
	var_133_int = 521562; // 0xe2 PushI
	var_134_int = -1; // 0xe3 PushI
	var_135_int = 22723; // 0xe4 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_136_int = 22721; // 0xe8 PushI
	var_137_bool = var_6_int == var_136_int; // 0xe9 Eq
	if(var_137_bool == 0) goto Label_255; // 0xea JumpB
	var_138_string = ""; // 0xeb PushV
	var_138_string = "Neutral"; // 0xec MovS
	func_146(var_7_bool, var_138_string); // 0xed NEW_2
	var_139_int = 521560; // 0xef PushI
	SetMessage(var_139_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_140_int = 522279; // 0xf4 PushI
	var_141_int = 23434; // 0xf5 PushI
	var_142_int = 23433; // 0xf6 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xf7 TObjFunc
	var_143_int = 522272; // 0xf9 PushI
	var_144_int = 23426; // 0xfa PushI
	var_145_int = 23425; // 0xfb PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_146_int = 23426; // 0xff PushI
	var_147_bool = var_6_int == var_146_int; // 0x100 Eq
	if(var_147_bool == 0) goto Label_278; // 0x101 JumpB
	var_148_string = ""; // 0x102 PushV
	var_148_string = "Neutral"; // 0x103 MovS
	func_146(var_7_bool, var_148_string); // 0x104 NEW_2
	var_149_int = 522273; // 0x106 PushI
	SetMessage(var_149_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_150_int = 522274; // 0x10b PushI
	var_151_int = 23431; // 0x10c PushI
	var_152_int = 23427; // 0x10d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x10e TObjFunc
	var_153_int = 522275; // 0x110 PushI
	var_154_int = 23429; // 0x111 PushI
	var_155_int = 23428; // 0x112 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_156_int = 23429; // 0x116 PushI
	var_157_bool = var_6_int == var_156_int; // 0x117 Eq
	if(var_157_bool == 0) goto Label_296; // 0x118 JumpB
	var_158_string = ""; // 0x119 PushV
	var_158_string = "Neutral"; // 0x11a MovS
	func_146(var_7_bool, var_158_string); // 0x11b NEW_2
	var_159_int = 522276; // 0x11d PushI
	SetMessage(var_159_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_160_int = 522277; // 0x122 PushI
	var_161_int = 23431; // 0x123 PushI
	var_162_int = 23430; // 0x124 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_163_int = 23431; // 0x128 PushI
	var_164_bool = var_6_int == var_163_int; // 0x129 Eq
	if(var_164_bool == 0) goto Label_314; // 0x12a JumpB
	var_165_string = ""; // 0x12b PushV
	var_165_string = "Neutral"; // 0x12c MovS
	func_146(var_7_bool, var_165_string); // 0x12d NEW_2
	var_166_int = 522278; // 0x12f PushI
	SetMessage(var_166_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_167_int = 522281; // 0x134 PushI
	var_168_int = 23434; // 0x135 PushI
	var_169_int = 23435; // 0x136 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_170_int = 23434; // 0x13a PushI
	var_171_bool = var_6_int == var_170_int; // 0x13b Eq
	if(var_171_bool == 0) goto Label_332; // 0x13c JumpB
	var_172_string = ""; // 0x13d PushV
	var_172_string = "Neutral"; // 0x13e MovS
	func_146(var_7_bool, var_172_string); // 0x13f NEW_2
	var_173_int = 522280; // 0x141 PushI
	SetMessage(var_173_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_174_int = 521561; // 0x146 PushI
	var_175_int = -1; // 0x147 PushI
	var_176_int = 22722; // 0x148 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_3_string = 1; // 0x14c TMovB
	var_177_bool = 0; // 0x14d PushV
	func_904(var_177_bool); // 0x14e NEW_2
	if(var_177_bool == 0) goto Label_340; // 0x150 JumpB
	lshStopAnimation(); // 0x151 Func
	goto Label_342; // 0x153 Jump
	
Label_342:
	return 0; // 0x156 Return
	
Label_340:
	StopAnimation(); // 0x154 Func
	
Label_344:
	return 0; // 0x158 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x15a PushV
	var_8_object = var_6_object; // 0x15b Mov
	TaskCall(0); // 0x15c TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x15d NEW_2
	TaskReturn(); // 0x15e TaskReturn
	return 0; // 0x160 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x18b PushS
	var_8_bool = var_6_string == var_7_string; // 0x18c Eq
	if(var_8_bool == 0) goto Label_401; // 0x18d JumpB
	func_374(var_6_string); // 0x18f NEW_2
	
Label_401:
	return 0; // 0x191 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x192 Func
	sync(); // 0x194 Func
	return 0; // 0x196 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x197 PushV
	var_6_bool = 0; // 0x198 MovB
	var_7_object = var_0_object; // 0x199 PushT
	if(var_7_object == 0) goto Label_416; // 0x19a JumpB
	var_8_bool = 0; // 0x19b PushV
	func_423(var_8_bool); // 0x19c NEW_2
	if(var_8_bool == 0) goto Label_416; // 0x19e JumpB
	var_6_bool = 1; // 0x19f MovB
	
Label_416:
	if(var_6_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_9_object = Obj(); // 0x1a1 PushV
	func_636(var_9_object); // 0x1a2 NEW_2
	RemoveActor(var_9_object); // 0x1a4 Func
	
Label_422:
	return 0; // 0x1a6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x161 PushV
	
Label_354:
	var_8_bool = 0; // 0x162 PushV
	func_506(var_8_bool); // 0x163 NEW_2
	var_11_bool = var_8_bool == 0; // 0x165 Not
	if(var_11_bool == 0) goto Label_362; // 0x166 JumpB
	Hold(); // 0x167 Func
	goto Label_354; // 0x169 Jump
	
Label_362:
	var_12_int = 3; // 0x16a PushI
	rand(var_7_float, var_12_int); // 0x16b Func
	var_13_int = 3; // 0x16d PushI
	var_14_int = var_7_float + var_13_int; // 0x16e Add
	Sleep(var_14_int); // 0x16f Func
	func_425(); // 0x172 NEW_2
	goto Label_354; // 0x174 Jump
}


func_896(var_67_int)
{
	var_67_int = 518097; // 0x380 MovI
	return 0; // 0x381 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_511(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_898(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_896(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_900(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_902(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_879(var_70_int); // 0x22 NEW_2
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
	var_143_bool = var_17_bool == 0; // 0x38 Not
	if(var_143_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_144_object = Obj(); // 0x3f PushV
	var_144_object = var_8_object; // 0x40 Mov
	func_580(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_898(var_66_int)
{
	var_66_int = 518096; // 0x382 MovI
	return 0; // 0x383 Return
}


func_642(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x282 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x283 Or
	var_49_float = sqrt(var_50_int); // 0x284 Sqrt2
	var_51_float = 0.0; // 0x285 PushF
	var_52_bool = var_49_float < var_51_float; // 0x286 LT
	if(var_52_bool == 0) goto Label_650; // 0x287 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x288 MovV
	return 2; // 0x289 Return
	
Label_650:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x28a Div2
	return 2; // 0x28b Return
}


func_900(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png"; // 0x384 MovS
	return 0; // 0x385 Return
}


func_902(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png"; // 0x386 MovS
	return 0; // 0x387 Return
}


func_775()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x307 PushV
	var_44_int = 300; // 0x308 PushI
	var_45_int = 1; // 0x309 PushI
	var_46_int = 521615; // 0x30a PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0x30b Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0x30d PushV
	var_48_object = var_43_object; // 0x30e Mov
	var_49_int = 297; // 0x30f MovI
	func_801(var_47_bool, var_48_object, var_49_int); // 0x310 NEW_2
	return 2; // 0x312 Return
}


func_904(var_61_bool)
{
	var_61_bool = 0; // 0x388 MovB
	return 0; // 0x389 Return
}


func_652(var_107_int, var_108_string)
{
	var_109_int = 0; var_110_int = 0; // 0x28c PushV
	GetVariable(var_108_string, var_110_int); // 0x28d Func
	var_107_int = var_110_int; // 0x28f Mov
	return 2; // 0x290 Return
}


func_657(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x291 PushV
	FindActor(var_69_object, var_66_string); // 0x292 Func
	var_70_bool = var_69_object == 0; // 0x294 NullEq
	if(var_70_bool == 0) goto Label_664; // 0x295 JumpB
	var_65_bool = 0; // 0x296 MovB
	return 2; // 0x297 Return
	
Label_664:
	Trigger(var_69_object, var_67_string); // 0x298 Func
	var_65_bool = 1; // 0x29a MovB
	return 2; // 0x29b Return
}


func_146(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x93 PushV
	func_904(var_87_bool); // 0x94 NEW_2
	var_88_bool = var_87_bool == 0; // 0x96 Not
	if(var_88_bool == 0) goto Label_153; // 0x97 JumpB
	return 0; // 0x98 Return
	
Label_153:
	var_89_bool = var_86_string == var_2_object; // 0x99 Eq
	if(var_89_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_90_string = ""; var_91_bool = 0; // 0x9c PushV
	var_90_string = var_86_string; // 0x9d Mov
	var_92_string = ""; // 0x9e PushS
	var_93_bool = var_86_string == var_92_string; // 0x9f Eq
	if(var_93_bool == 0) goto Label_163; // 0xa0 JumpB
	var_91_bool = 0; // 0xa1 MovB
	goto Label_164; // 0xa2 Jump
	
Label_164:
	func_614(var_90_string, var_91_bool); // 0xa4 NEW_2
	var_2_object = var_86_string; // 0xa6 TMov
	return 0; // 0xa7 Return
	
Label_163:
	var_91_bool = 1; // 0xa3 MovB
}


func_788(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x314 PushV
	GetDiaryRoot(var_58_object); // 0x315 Func
	var_59_bool = var_58_object == 0; // 0x317 Not
	if(var_59_bool == 0) goto Label_798; // 0x318 JumpB
	var_60_string = "Can't retrieve diary root"; // 0x319 PushS
	Trace(var_60_string); // 0x31a Func
	var_56_object = 0; // 0x31c MovB
	return 2; // 0x31d Return
	
Label_798:
	var_56_object = var_58_object; // 0x31e Mov
	return 2; // 0x31f Return
}


func_669(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x29d PushV
	GetGameTime(var_41_float); // 0x29e Func
	var_39_float = var_41_float; // 0x2a0 Mov
	return 2; // 0x2a1 Return
}


func_801(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0x321 PushV
	var_56_object = Obj(); // 0x322 PushV
	func_788(var_56_object); // 0x323 NEW_2
	var_53_object = var_56_object; // 0x324 Mov
	Find(var_49_int, var_54_object); // 0x326 ObjFunc
	var_61_bool = var_54_object == 0; // 0x328 Not
	if(var_61_bool == 0) goto Label_816; // 0x329 JumpB
	var_62_string = "Can't find diary parent with id: "; // 0x32a PushS
	var_63_int = var_62_string + var_49_int; // 0x32b Add
	Trace(var_63_int); // 0x32c Func
	var_47_bool = 0; // 0x32e MovB
	return 6; // 0x32f Return
	
Label_816:
	AddChild(var_48_object); // 0x330 ObjFunc
	var_64_int = 7; // 0x332 PushI
	SendWorldWndMessage(var_64_int); // 0x333 Func
	GetCategory(var_55_int); // 0x335 ObjFunc
	SetDiarySection(var_55_int); // 0x337 Func
	var_47_bool = 0; // 0x339 MovB
	return 6; // 0x33a Return
}


func_674(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2a2 PushV
	var_40_string = "idle"; // 0x2a3 MovS
	var_41_int = var_38_int; // 0x2a4 Push
	if(var_41_int == 0) goto Label_679; // 0x2a5 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2a6 Add2
	
Label_679:
	var_37_string = var_40_string; // 0x2a7 Mov
	return 2; // 0x2a8 Return
}


func_423(var_8_bool)
{
	var_8_bool = 1; // 0x1a7 MovB
	return 0; // 0x1a8 Return
}


func_425()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1a9 PushV
	WaitForAnimEnd(); // 0x1aa Func
	var_29_bool = 0; // 0x1ac PushV
	func_506(var_29_bool); // 0x1ad NEW_2
	var_30_bool = var_29_bool == 0; // 0x1af Not
	if(var_30_bool == 0) goto Label_434; // 0x1b0 JumpB
	return 14; // 0x1b1 Return
	
Label_434:
	var_31_int = 0; // 0x1b2 PushV
	func_681(var_31_int); // 0x1b3 NEW_2
	var_22_int = var_31_int; // 0x1b4 Mov
	var_23_int = 0; // 0x1b6 MovI
	
Label_439:
	var_44_bool = 0; // 0x1b7 PushV
	var_44_bool = 0; // 0x1b8 MovB
	var_45_int = 5; // 0x1b9 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1ba LT
	if(var_46_bool == 0) goto Label_449; // 0x1bb JumpB
	var_47_bool = 0; // 0x1bc PushV
	func_506(var_47_bool); // 0x1bd NEW_2
	if(var_47_bool == 0) goto Label_449; // 0x1bf JumpB
	var_44_bool = 1; // 0x1c0 MovB
	
Label_449:
	if(var_44_bool == 0) goto Label_501; // 0x1c1 JumpB
	var_48_int = 3; // 0x1c2 PushI
	irand(var_24_int, var_48_int); // 0x1c3 Func
	var_49_int = 0; // 0x1c5 PushI
	var_50_bool = var_24_int == var_49_int; // 0x1c6 Eq
	if(var_50_bool == 0) goto Label_473; // 0x1c7 JumpB
	var_51_int = var_22_int; // 0x1c8 Push
	if(var_51_int == 0) goto Label_472; // 0x1c9 JumpB
	irand(var_25_int, var_22_int); // 0x1ca Func
	var_52_string = "all"; // 0x1cc PushS
	var_53_string = ""; var_54_int = 0; // 0x1cd PushV
	var_54_int = var_25_int; // 0x1ce Mov
	func_674(var_53_string, var_54_int); // 0x1cf NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1d1 Func
	WaitForAnimEnd(var_26_bool); // 0x1d3 Func
	var_55_bool = var_26_bool == 0; // 0x1d5 Not
	if(var_55_bool == 0) goto Label_472; // 0x1d6 JumpB
	goto Label_501; // 0x1d7 Jump
	
Label_501:
	ResetAAS(); // 0x1f5 Func
	return 14; // 0x1f7 Return
	
Label_472:
	goto Label_490; // 0x1d8 Jump
	
Label_490:
	var_56_bool = 0; // 0x1ea PushV
	func_504(var_56_bool); // 0x1eb NEW_2
	var_57_bool = var_56_bool == 0; // 0x1ed Not
	if(var_57_bool == 0) goto Label_496; // 0x1ee JumpB
	goto Label_501; // 0x1ef Jump
	
Label_496:
	ResetAAS(); // 0x1f0 Func
	var_58_int = 1; // 0x1f2 PushI
	var_23_int = var_23_int + var_58_int; // 0x1f3 Add2
	goto Label_439; // 0x1f4 Jump
	
Label_473:
	var_59_int = 1; // 0x1d9 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1da Eq
	if(var_60_bool == 0) goto Label_487; // 0x1db JumpB
	var_61_int = 4; // 0x1dc PushI
	rand(var_27_float, var_61_int); // 0x1dd Func
	var_62_int = 1; // 0x1df PushI
	var_63_int = var_27_float + var_62_int; // 0x1e0 Add
	Sleep(var_63_int, var_28_bool); // 0x1e1 Func
	var_64_bool = var_28_bool == 0; // 0x1e3 Not
	if(var_64_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_501; // 0x1e5 Jump
	
Label_486:
	goto Label_490; // 0x1e6 Jump
	
Label_487:
	var_65_int = var_23_int; // 0x1e7 Push
	if(var_65_int == 0) goto Label_490; // 0x1e8 JumpB
	goto Label_501; // 0x1e9 Jump
}


func_681(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2a9 PushV
	var_34_int = 0; // 0x2aa MovI
	
Label_683:
	var_36_string = "all"; // 0x2ab PushS
	var_37_string = ""; var_38_int = 0; // 0x2ac PushV
	var_38_int = var_34_int; // 0x2ad Mov
	func_674(var_37_string, var_38_int); // 0x2ae NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2b0 Func
	var_42_bool = var_35_bool == 0; // 0x2b2 Not
	if(var_42_bool == 0) goto Label_693; // 0x2b3 JumpB
	goto Label_696; // 0x2b4 Jump
	
Label_696:
	var_31_int = var_34_int; // 0x2b8 Mov
	return 4; // 0x2b9 Return
	
Label_693:
	var_43_int = 1; // 0x2b5 PushI
	var_34_int = var_34_int + var_43_int; // 0x2b6 Add2
	goto Label_683; // 0x2b7 Jump
}


func_698()
{
	var_14_string = "oob9MDoberman1"; // 0x2bb PushS
	var_15_int = 1; // 0x2bc PushI
	SetVariable(var_14_string, var_15_int); // 0x2bd Func
	return 0; // 0x2bf Return
}


func_829(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x33d PushV
	GetMainOutdoorScene(var_31_object); // 0x33e Func
	var_33_bool = var_31_object == 0; // 0x340 NullEq
	if(var_33_bool == 0) goto Label_840; // 0x341 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x342 PushS
	Trace(var_34_string); // 0x343 Func
	var_32_object = 0; // 0x345 SetNull
	var_28_object = var_32_object; // 0x346 Mov
	return 4; // 0x347 Return
	
Label_840:
	GetMap(var_32_object); // 0x348 ObjFunc
	var_28_object = var_32_object; // 0x34a Mov
	return 4; // 0x34b Return
}


func_704()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2c0 PushV
	var_22_int = 0; var_23_string = ""; // 0x2c1 PushV
	var_23_string = "b9q01"; // 0x2c2 MovS
	func_652(var_22_int, var_23_string); // 0x2c3 NEW_2
	var_26_int = 2; // 0x2c5 PushI
	var_27_bool = var_22_int == var_26_int; // 0x2c6 Eq
	if(var_27_bool == 0) goto Label_734; // 0x2c7 JumpB
	var_28_object = Obj(); // 0x2c8 PushV
	func_829(var_28_object); // 0x2c9 NEW_2
	var_21_object = var_28_object; // 0x2ca Mov
	var_35_string = "b9q01MDobermanGotoFactory"; // 0x2cc PushS
	var_36_string = "pt_gmap_factory"; // 0x2cd PushS
	var_37_int = 1; // 0x2ce PushI
	var_38_int = 530198; // 0x2cf PushI
	var_39_float = 0; // 0x2d0 PushV
	func_669(var_39_float); // 0x2d1 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x2d3 ObjFunc
	func_775(); // 0x2d6 NEW_2
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x2d8 PushV
	var_66_string = "quest_b9_01"; // 0x2d9 MovS
	var_67_string = "remove_mdoberman"; // 0x2da MovS
	func_657(var_65_bool, var_66_string, var_67_string); // 0x2db NEW_2
	var_21_object = 0; // 0x2dd SetNull
	
Label_734:
	return 2; // 0x2de Return
}


func_580()
{
	var_145_bool = 0; var_146_bool = 0; // 0x244 PushV
	var_147_bool = 1; // 0x245 PushB
	CameraSwitchToNormal(var_147_bool); // 0x246 Func
	var_148_bool = 0; // 0x248 PushV
	func_904(var_148_bool); // 0x249 NEW_2
	if(var_148_bool == 0) goto Label_589; // 0x24b JumpB
	goto Label_597; // 0x24c Jump
	
Label_597:
	return 2; // 0x255 Return
	
Label_589:
	var_149_string = "head"; // 0x24d PushS
	HasAnimationTrack(var_146_bool, var_149_string); // 0x24e Func
	var_150_bool = var_146_bool; // 0x250 Push
	if(var_150_bool == 0) goto Label_597; // 0x251 JumpB
	var_151_string = "head"; // 0x252 PushS
	UnlookAsync(var_151_string); // 0x253 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_116; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_146(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 521558; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_bool = 0; // 0x59 PushV
	var_104_bool = 0; // 0x5a MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x5b PushV
	var_106_object = var_1_object; // 0x5c MovT
	func_751(var_106_object); // 0x5d NEW_2
	if(var_105_bool == 0) goto Label_102; // 0x5f JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x60 PushV
	var_114_object = var_1_object; // 0x61 MovT
	func_763(var_114_object); // 0x62 NEW_2
	if(var_113_bool == 0) goto Label_102; // 0x64 JumpB
	var_104_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_104_bool == 0) goto Label_108; // 0x66 JumpB
	var_119_int = 521559; // 0x67 PushI
	var_120_int = 22721; // 0x68 PushI
	var_121_int = 22720; // 0x69 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x6a TObjFunc
	
Label_108:
	var_122_int = 521562; // 0x6c PushI
	var_123_int = -1; // 0x6d PushI
	var_124_int = 22723; // 0x6e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x6f TObjFunc
	goto Label_116; // 0x71 Jump
	
Label_116:
	var_125_bool = 0; // 0x74 PushV
	func_904(var_125_bool); // 0x75 NEW_2
	if(var_125_bool == 0) goto Label_131; // 0x77 JumpB
	
Label_120:
	lshWaitForAnimEnd(); // 0x78 Func
	var_126_string = var_3_string; // 0x7a PushT
	if(var_126_string == 0) goto Label_125; // 0x7b JumpB
	goto Label_130; // 0x7c Jump
	
Label_130:
	goto Label_145; // 0x82 Jump
	
Label_145:
	return 0; // 0x91 Return
	
Label_125:
	var_127_string = ""; // 0x7d PushV
	var_127_string = var_2_object; // 0x7e MovT
	func_598(var_127_string); // 0x7f NEW_2
	goto Label_120; // 0x81 Jump
	
Label_131:
	var_138_string = "all"; // 0x83 PushS
	var_139_string = "idle"; // 0x84 PushS
	PlayAnimation(var_138_string, var_139_string); // 0x85 Func
	
Label_135:
	WaitForAnimEnd(); // 0x87 Func
	var_140_string = var_3_string; // 0x89 PushT
	if(var_140_string == 0) goto Label_140; // 0x8a JumpB
	goto Label_145; // 0x8b Jump
	
Label_140:
	var_141_string = "all"; // 0x8c PushS
	var_142_string = "idle"; // 0x8d PushS
	PlayAnimation(var_141_string, var_142_string); // 0x8e Func
	goto Label_135; // 0x90 Jump
}


func_846(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; // 0x34e PushV
	GetMainOutdoorScene(var_83_object); // 0x34f Func
	var_85_bool = var_83_object == 0; // 0x351 NullEq
	if(var_85_bool == 0) goto Label_855; // 0x352 JumpB
	var_86_string = "Can't find main outdoor scene"; // 0x353 PushS
	Trace(var_86_string); // 0x354 Func
	return 8; // 0x356 Return
	
Label_855:
	GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector); // 0x357 ObjFunc
	var_87_bool = var_84_bool == 0; // 0x359 Not
	if(var_87_bool == 0) goto Label_865; // 0x35a JumpB
	var_88_string = "Warning: outdoor scene locator "; // 0x35b PushS
	var_89_int = var_88_string + var_74_string; // 0x35c Add
	var_90_string = " doesnt exist"; // 0x35d PushS
	var_91_int = var_89_int + var_90_string; // 0x35e Add
	Trace(var_91_int); // 0x35f Func
	
Label_865:
	GetMap(var_73_object); // 0x361 ObjFunc
	var_92_bool = var_73_object == 0; // 0x363 NullEq
	if(var_92_bool == 0) goto Label_873; // 0x364 JumpB
	var_93_string = "Can't find map"; // 0x365 PushS
	Trace(var_93_string); // 0x366 Func
	return 8; // 0x368 Return
	
Label_873:
	var_94_float = GetByIndex(var_81_cvector, 0); // 0x369 PushE
	var_95_float = GetByIndex(var_81_cvector, 2); // 0x36a PushE
	SetMapParams(var_94_float, var_95_float, var_75_float); // 0x36b ObjFunc
	return 8; // 0x36d Return
}


func_598(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x256 PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x257 Func
	var_134_bool = var_131_bool; // 0x259 Push
	if(var_134_bool == 0) goto Label_609; // 0x25a JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x25b Func
	var_135_bool = 0; // 0x25d PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x25e Func
	goto Label_613; // 0x260 Jump
	
Label_613:
	return 6; // 0x265 Return
	
Label_609:
	var_136_string = "Can't find lsh animation : "; // 0x261 PushS
	var_137_int = var_136_string + var_127_string; // 0x262 Add
	Trace(var_137_int); // 0x263 Func
}


func_735()
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x2e0 PushV
	var_76_object = Obj(); // 0x2e1 PushV
	func_829(var_76_object); // 0x2e2 NEW_2
	var_73_object = var_76_object; // 0x2e3 Mov
	var_74_string = "pt_gmap_factory"; // 0x2e5 MovS
	var_75_float = 2; // 0x2e6 MovI
	func_846(var_73_object, var_74_string, var_75_float); // 0x2e7 NEW_2
	var_96_object = Obj(); // 0x2e9 PushV
	func_829(var_96_object); // 0x2ea NEW_2
	ShowMap(var_96_object); // 0x2ec ObjFunc
	return 0; // 0x2ee Return
}


func_614(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x266 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x267 Func
	var_100_bool = var_97_bool; // 0x269 Push
	if(var_100_bool == 0) goto Label_624; // 0x26a JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x26b Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x26d Func
	goto Label_628; // 0x26f Jump
	
Label_628:
	return 6; // 0x274 Return
	
Label_624:
	var_101_string = "Can't find lsh animation : "; // 0x270 PushS
	var_102_int = var_101_string + var_90_string; // 0x271 Add
	Trace(var_102_int); // 0x272 Func
}


func_879(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x36f PushV
	var_73_string = "branch"; // 0x370 PushS
	GetVariable(var_73_string, var_72_int); // 0x371 Func
	var_74_int = 0; // 0x373 PushI
	var_75_bool = var_72_int == var_74_int; // 0x374 Eq
	if(var_75_bool == 0) goto Label_889; // 0x375 JumpB
	var_70_int = 1; // 0x376 MovI
	return 2; // 0x377 Return
	
Label_889:
	var_76_int = 1; // 0x379 PushI
	var_77_bool = var_72_int == var_76_int; // 0x37a Eq
	if(var_77_bool == 0) goto Label_894; // 0x37b JumpB
	var_70_int = 2; // 0x37c MovI
	return 2; // 0x37d Return
	
Label_894:
	var_70_int = 3; // 0x37e MovI
	return 2; // 0x37f Return
}


func_751(var_105_bool)
{
	var_107_int = 0; var_108_string = ""; // 0x2f0 PushV
	var_108_string = "b9q01"; // 0x2f1 MovS
	func_652(var_107_int, var_108_string); // 0x2f2 NEW_2
	var_111_int = 2; // 0x2f4 PushI
	var_112_bool = var_107_int == var_111_int; // 0x2f5 Eq
	if(var_112_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_105_bool = 1; // 0x2f7 MovB
	return 0; // 0x2f8 Return
	
Label_761:
	var_105_bool = 0; // 0x2f9 MovB
	return 0; // 0x2fa Return
}


func_629()
{
	var_9_bool = 0; // 0x275 PushV
	func_904(var_9_bool); // 0x276 NEW_2
	if(var_9_bool == 0) goto Label_635; // 0x278 JumpB
	lshStopSpeech(); // 0x279 Func
	
Label_635:
	return 0; // 0x27b Return
}


func_374(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x176 PushV
	var_0_object = 1; // 0x177 TMovB
	IsLoaded(var_10_bool); // 0x178 Func
	var_11_bool = 0; // 0x17a PushV
	var_11_bool = 0; // 0x17b MovB
	var_12_bool = var_10_bool == 0; // 0x17c Not
	if(var_12_bool == 0) goto Label_387; // 0x17d JumpB
	var_13_bool = 0; // 0x17e PushV
	func_423(var_13_bool); // 0x17f NEW_2
	if(var_13_bool == 0) goto Label_387; // 0x181 JumpB
	var_11_bool = 1; // 0x182 MovB
	
Label_387:
	if(var_11_bool == 0) goto Label_393; // 0x183 JumpB
	var_14_object = Obj(); // 0x184 PushV
	func_636(var_14_object); // 0x185 NEW_2
	RemoveActor(var_14_object); // 0x187 Func
	
Label_393:
	return 2; // 0x189 Return
}


func_504(var_56_bool)
{
	var_56_bool = 1; // 0x1f8 MovB
	return 0; // 0x1f9 Return
}


func_506(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1fa PushV
	IsLoaded(var_10_bool); // 0x1fb Func
	var_8_bool = var_10_bool; // 0x1fd Mov
	return 2; // 0x1fe Return
}


func_763(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x2fc PushV
	var_116_string = "oob9MDoberman1"; // 0x2fd MovS
	func_652(var_115_int, var_116_string); // 0x2fe NEW_2
	var_117_int = 0; // 0x300 PushI
	var_118_bool = var_115_int == var_117_int; // 0x301 Eq
	if(var_118_bool == 0) goto Label_773; // 0x302 JumpB
	var_113_bool = 1; // 0x303 MovB
	return 0; // 0x304 Return
	
Label_773:
	var_113_bool = 0; // 0x305 MovB
	return 0; // 0x306 Return
}


func_636(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x27c PushV
	self(var_11_object); // 0x27d Func
	var_9_object = var_11_object; // 0x27f Mov
	return 2; // 0x280 Return
}


func_511(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1ff PushV
	GetPosition(var_31_cvector); // 0x200 ObjFunc
	GetEyesHeight(var_30_float); // 0x202 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x204 PushE
	var_39_float = var_39_float + var_30_float; // 0x205 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x206 PopE
	GetPosition(var_32_cvector); // 0x207 Func
	GetEyesHeight(var_30_float); // 0x209 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x20b PushE
	var_40_float = var_40_float + var_30_float; // 0x20c Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x20d PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x20e Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x20f PushE
	var_41_float = 0; // 0x210 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x211 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x212 Or
	var_43_float = sqrt(var_42_int); // 0x213 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x214 Div2
	var_34_cvector = -var_33_cvector; // 0x215 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x216 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x217 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x218 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x219 Xor2
	func_642(var_45_cvector, var_46_cvector); // 0x21a NEW_2
	var_53_int = 25; // 0x21c PushI
	var_54_float = var_45_cvector * var_53_int; // 0x21d Mult
	var_55_int = var_44_float + var_54_float; // 0x21e Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x21f PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x220 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x221 Add2
	IsOverrideActive(var_37_bool); // 0x222 Func
	var_57_bool = var_37_bool; // 0x224 Push
	if(var_57_bool == 0) goto Label_552; // 0x225 JumpB
	var_18_bool = 0; // 0x226 MovB
	return 18; // 0x227 Return
	
Label_552:
	StopWorld(); // 0x228 Func
	var_58_bool = 1; // 0x22a PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x22b Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x22d PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x22e PushE
	Rotate(var_59_float, var_60_float); // 0x22f Func
	var_61_bool = 0; // 0x231 PushV
	func_904(var_61_bool); // 0x232 NEW_2
	if(var_61_bool == 0) goto Label_566; // 0x234 JumpB
	goto Label_574; // 0x235 Jump
	
Label_574:
	CameraWaitForPlayFinish(); // 0x23e Func
	ResumeWorld(); // 0x240 Func
	var_18_bool = 1; // 0x242 MovB
	return 18; // 0x243 Return
	
Label_566:
	var_62_string = "head"; // 0x236 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x237 Func
	var_63_bool = var_38_bool; // 0x239 Push
	if(var_63_bool == 0) goto Label_574; // 0x23a JumpB
	var_64_string = "head"; // 0x23b PushS
	LookAsyncCamera(var_64_string); // 0x23c Func
}


