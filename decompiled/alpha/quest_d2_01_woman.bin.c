task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa3 PushI
	if(var_8_int == 0) goto Label_369; // 0xa4 JumpB
	func_506(); // 0xa6 Call
	var_10_int = 8110; // 0xa8 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa9 Eq
	if(var_11_bool == 0) goto Label_186; // 0xaa JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xab PushV
	var_12_object = var_1_object; // 0xac MovT
	var_13_object = var_0_object; // 0xad MovT
	func_583(); // 0xae Call
	var_16_object = Obj(); var_17_object = Obj(); // 0xb0 PushV
	var_16_object = var_1_object; // 0xb1 MovT
	var_17_object = var_0_object; // 0xb2 MovT
	func_589(var_17_object); // 0xb3 Call
	var_84_object = Obj(); var_85_object = Obj(); // 0xb5 PushV
	var_84_object = var_1_object; // 0xb6 MovT
	var_85_object = var_0_object; // 0xb7 MovT
	func_577(); // 0xb8 Call
	
Label_186:
	var_88_int = 7438; // 0xba PushI
	var_89_bool = var_6_int == var_88_int; // 0xbb Eq
	if(var_89_bool == 0) goto Label_234; // 0xbc JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0xbd PushV
	var_91_object = var_1_object; // 0xbe MovT
	func_626(var_91_object); // 0xbf Call
	if(var_90_bool == 0) goto Label_219; // 0xc1 JumpB
	var_98_string = ""; // 0xc2 PushV
	var_98_string = "Neutral"; // 0xc3 MovS
	func_146(var_7_bool, var_98_string); // 0xc4 Call
	var_113_int = 6748; // 0xc6 PushI
	SetMessage(var_113_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_114_int = 6749; // 0xcb PushI
	var_115_int = 7440; // 0xcc PushI
	var_116_int = 7439; // 0xcd PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xce TObjFunc
	var_117_int = 7345; // 0xd0 PushI
	var_118_int = 7440; // 0xd1 PushI
	var_119_int = 8098; // 0xd2 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xd3 TObjFunc
	var_120_int = 7350; // 0xd5 PushI
	var_121_int = 7440; // 0xd6 PushI
	var_122_int = 8104; // 0xd7 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_123_string = ""; // 0xdb PushV
	var_123_string = "Neutral"; // 0xdc MovS
	func_146(var_7_bool, var_123_string); // 0xdd Call
	var_124_int = 6753; // 0xdf PushI
	SetMessage(var_124_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_125_int = 6754; // 0xe4 PushI
	var_126_int = 8102; // 0xe5 PushI
	var_127_int = 7444; // 0xe6 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_128_int = 8102; // 0xea PushI
	var_129_bool = var_6_int == var_128_int; // 0xeb Eq
	if(var_129_bool == 0) goto Label_252; // 0xec JumpB
	var_130_string = ""; // 0xed PushV
	var_130_string = "Neutral"; // 0xee MovS
	func_146(var_7_bool, var_130_string); // 0xef Call
	var_131_int = 7348; // 0xf1 PushI
	SetMessage(var_131_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_132_int = 7349; // 0xf6 PushI
	var_133_int = -1; // 0xf7 PushI
	var_134_int = 8103; // 0xf8 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_135_int = 7440; // 0xfc PushI
	var_136_bool = var_6_int == var_135_int; // 0xfd Eq
	if(var_136_bool == 0) goto Label_275; // 0xfe JumpB
	var_137_string = ""; // 0xff PushV
	var_137_string = "Neutral"; // 0x100 MovS
	func_146(var_7_bool, var_137_string); // 0x101 Call
	var_138_int = 6750; // 0x103 PushI
	SetMessage(var_138_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_139_int = 6751; // 0x108 PushI
	var_140_int = 8099; // 0x109 PushI
	var_141_int = 7441; // 0x10a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x10b TObjFunc
	var_142_int = 7356; // 0x10d PushI
	var_143_int = 8106; // 0x10e PushI
	var_144_int = 8111; // 0x10f PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_145_int = 8099; // 0x113 PushI
	var_146_bool = var_6_int == var_145_int; // 0x114 Eq
	if(var_146_bool == 0) goto Label_293; // 0x115 JumpB
	var_147_string = ""; // 0x116 PushV
	var_147_string = "Neutral"; // 0x117 MovS
	func_146(var_7_bool, var_147_string); // 0x118 Call
	var_148_int = 7346; // 0x11a PushI
	SetMessage(var_148_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_149_int = 7347; // 0x11f PushI
	var_150_int = 8106; // 0x120 PushI
	var_151_int = 8100; // 0x121 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_152_int = 8106; // 0x125 PushI
	var_153_bool = var_6_int == var_152_int; // 0x126 Eq
	if(var_153_bool == 0) goto Label_316; // 0x127 JumpB
	var_154_string = ""; // 0x128 PushV
	var_154_string = "Neutral"; // 0x129 MovS
	func_146(var_7_bool, var_154_string); // 0x12a Call
	var_155_int = 7351; // 0x12c PushI
	SetMessage(var_155_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_156_int = 7352; // 0x131 PushI
	var_157_int = 7442; // 0x132 PushI
	var_158_int = 8107; // 0x133 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x134 TObjFunc
	var_159_int = 7357; // 0x136 PushI
	var_160_int = 7442; // 0x137 PushI
	var_161_int = 8113; // 0x138 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_162_int = 7442; // 0x13c PushI
	var_163_bool = var_6_int == var_162_int; // 0x13d Eq
	if(var_163_bool == 0) goto Label_339; // 0x13e JumpB
	var_164_string = ""; // 0x13f PushV
	var_164_string = "Neutral"; // 0x140 MovS
	func_146(var_7_bool, var_164_string); // 0x141 Call
	var_165_int = 6752; // 0x143 PushI
	SetMessage(var_165_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_166_int = 7353; // 0x148 PushI
	var_167_int = 8109; // 0x149 PushI
	var_168_int = 8108; // 0x14a PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x14b TObjFunc
	var_169_int = 7358; // 0x14d PushI
	var_170_int = 8109; // 0x14e PushI
	var_171_int = 8115; // 0x14f PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_172_int = 8109; // 0x153 PushI
	var_173_bool = var_6_int == var_172_int; // 0x154 Eq
	if(var_173_bool == 0) goto Label_357; // 0x155 JumpB
	var_174_string = ""; // 0x156 PushV
	var_174_string = "Neutral"; // 0x157 MovS
	func_146(var_7_bool, var_174_string); // 0x158 Call
	var_175_int = 7354; // 0x15a PushI
	SetMessage(var_175_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_176_int = 7355; // 0x15f PushI
	var_177_int = -1; // 0x160 PushI
	var_178_int = 8110; // 0x161 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_3_string = 1; // 0x165 TMovB
	var_179_bool = 0; // 0x166 PushV
	func_734(var_179_bool); // 0x167 Call
	if(var_179_bool == 0) goto Label_365; // 0x169 JumpB
	lshStopAnimation(); // 0x16a Func
	goto Label_367; // 0x16c Jump
	
Label_367:
	return 0; // 0x16f Return
	
Label_365:
	StopAnimation(); // 0x16d Func
	
Label_369:
	return 0; // 0x171 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x173 PushV
	var_8_object = var_6_object; // 0x174 Mov
	TaskCall(0); // 0x175 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x176 Call
	TaskReturn(); // 0x177 TaskReturn
	return 0; // 0x179 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x17e PushV
	var_9_string = "cleanup"; // 0x17f PushS
	var_10_bool = var_6_string == var_9_string; // 0x180 Eq
	if(var_10_bool == 0) goto Label_405; // 0x181 JumpB
	var_0_object = 1; // 0x182 TMovB
	IsLoaded(var_8_bool); // 0x183 Func
	var_11_bool = 0; // 0x185 PushV
	var_11_bool = 0; // 0x186 MovB
	var_12_bool = var_8_bool == 0; // 0x187 Not
	if(var_12_bool == 0) goto Label_398; // 0x188 JumpB
	var_13_bool = 0; // 0x189 PushV
	func_426(var_13_bool); // 0x18a Call
	if(var_13_bool == 0) goto Label_398; // 0x18c JumpB
	var_11_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_11_bool == 0) goto Label_404; // 0x18e JumpB
	var_14_object = Obj(); // 0x18f PushV
	func_513(var_14_object); // 0x190 Call
	RemoveActor(var_14_object); // 0x192 Func
	
Label_404:
	goto Label_409; // 0x194 Jump
	
Label_409:
	return 2; // 0x199 Return
	
Label_405:
	var_17_string = "restore"; // 0x195 PushS
	var_18_bool = var_6_string == var_17_string; // 0x196 Eq
	if(var_18_bool == 0) goto Label_409; // 0x197 JumpB
	var_0_object = 0; // 0x198 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x19a PushV
	var_6_bool = 0; // 0x19b MovB
	var_7_object = var_0_object; // 0x19c PushT
	if(var_7_object == 0) goto Label_419; // 0x19d JumpB
	var_8_bool = 0; // 0x19e PushV
	func_426(var_8_bool); // 0x19f Call
	if(var_8_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_6_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_6_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_9_object = Obj(); // 0x1a4 PushV
	func_513(var_9_object); // 0x1a5 Call
	RemoveActor(var_9_object); // 0x1a7 Func
	
Label_425:
	return 0; // 0x1a9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_378:
	Hold(); // 0x17a Func
	goto Label_378; // 0x17c Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_428(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_730(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_732(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_697(var_61_int); // 0x17 Call
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
	var_123_bool = var_17_bool == 0; // 0x2d Not
	if(var_123_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_124_object = Obj(); // 0x34 PushV
	var_124_object = var_8_object; // 0x35 Mov
	func_484(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_513(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x201 PushV
	self(var_11_object); // 0x202 Func
	var_9_object = var_11_object; // 0x204 Mov
	return 2; // 0x205 Return
}


func_577()
{
	var_86_string = "playsound"; // 0x242 PushS
	var_87_string = "giveitem"; // 0x243 PushS
	TriggerWorld(var_86_string, var_87_string); // 0x244 Func
	return 0; // 0x246 Return
}


func_519(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x207 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x208 Or
	var_47_float = sqrt(var_48_int); // 0x209 Sqrt2
	var_49_float = 0.0; // 0x20a PushF
	var_50_bool = var_47_float < var_49_float; // 0x20b LT
	if(var_50_bool == 0) goto Label_527; // 0x20c JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x20d MovV
	return 2; // 0x20e Return
	
Label_527:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x20f Div2
	return 2; // 0x210 Return
}


func_583()
{
	var_14_string = "ood2WomanD1"; // 0x248 PushS
	var_15_int = 1; // 0x249 PushI
	SetVariable(var_14_string, var_15_int); // 0x24a Func
	return 0; // 0x24c Return
}


func_714()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x2ca PushV
	var_38_string = "Adding diary entry"; // 0x2cb PushS
	Trace(var_38_string); // 0x2cc Func
	var_39_int = 54; // 0x2ce PushI
	var_40_int = 1; // 0x2cf PushI
	var_41_int = 12136; // 0x2d0 PushI
	CreateDiaryEntry(var_37_object, var_39_int, var_40_int, var_41_int); // 0x2d1 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0x2d3 PushV
	var_43_object = var_37_object; // 0x2d4 Mov
	var_44_int = 10; // 0x2d5 MovI
	func_651(var_42_bool, var_43_object, var_44_int); // 0x2d6 Call
	return 2; // 0x2d8 Return
}


func_651(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x28b PushV
	var_51_object = Obj(); // 0x28c PushV
	func_638(var_51_object); // 0x28d Call
	var_48_object = var_51_object; // 0x28e Mov
	Find(var_44_int, var_49_object); // 0x290 ObjFunc
	var_56_bool = var_49_object == 0; // 0x292 Not
	if(var_56_bool == 0) goto Label_666; // 0x293 JumpB
	var_57_string = "Can't find diary parent with id: "; // 0x294 PushS
	var_58_int = var_57_string + var_44_int; // 0x295 Add
	Trace(var_58_int); // 0x296 Func
	var_42_bool = 0; // 0x298 MovB
	return 6; // 0x299 Return
	
Label_666:
	AddChild(var_43_object); // 0x29a ObjFunc
	var_59_string = "player_diary"; // 0x29c PushS
	var_60_int = 1; // 0x29d PushI
	SetVariable(var_59_string, var_60_int); // 0x29e Func
	GetCategory(var_50_int); // 0x2a0 ObjFunc
	SetDiarySection(var_50_int); // 0x2a2 Func
	var_42_bool = 0; // 0x2a4 MovB
	return 6; // 0x2a5 Return
}


func_589(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x24d PushV
	var_20_string = "d2q01"; // 0x24e PushS
	var_21_int = 5; // 0x24f PushI
	SetVariable(var_20_string, var_21_int); // 0x250 Func
	var_22_object = Obj(); // 0x252 PushV
	func_680(var_22_object); // 0x253 Call
	var_19_object = var_22_object; // 0x254 Mov
	var_29_string = "d2q01WomanDGotoAlexandr"; // 0x256 PushS
	var_30_string = "pt_map_alexandr"; // 0x257 PushS
	var_31_int = 1; // 0x258 PushI
	var_32_int = 15271; // 0x259 PushI
	var_33_float = 0; // 0x25a PushV
	func_572(var_33_float); // 0x25b Call
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x25d ObjFunc
	func_714(); // 0x260 Call
	var_61_string = "key is given"; // 0x262 PushS
	Trace(var_61_string); // 0x263 Func
	var_62_object = Obj(); var_63_string = ""; var_64_int = 0; // 0x265 PushV
	var_62_object = var_16_object; // 0x266 Mov
	var_63_string = "d2q01_key"; // 0x267 MovS
	var_64_int = 1; // 0x268 MovI
	func_547(var_62_object, var_63_string, var_64_int); // 0x269 Call
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x26b PushV
	var_79_string = "quest_d2_01"; // 0x26c MovS
	var_80_string = "cursed_women"; // 0x26d MovS
	func_560(var_78_bool, var_79_string, var_80_string); // 0x26e Call
	return 2; // 0x270 Return
}


func_529(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x211 PushV
	GetVariable(var_80_string, var_82_int); // 0x212 Func
	var_79_int = var_82_int; // 0x214 Mov
	return 2; // 0x215 Return
}


func_146(var_2_object, var_85_string)
{
	var_86_bool = 0; // 0x93 PushV
	func_734(var_86_bool); // 0x94 Call
	var_87_bool = var_86_bool == 0; // 0x96 Not
	if(var_87_bool == 0) goto Label_153; // 0x97 JumpB
	return 0; // 0x98 Return
	
Label_153:
	var_88_bool = var_85_string == var_2_object; // 0x99 Eq
	if(var_88_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_89_string = ""; // 0x9c PushV
	var_89_string = var_85_string; // 0x9d Mov
	func_488(var_89_string); // 0x9e Call
	var_2_object = var_85_string; // 0xa0 TMov
	return 0; // 0xa1 Return
}


func_534(var_68_object, var_69_int)
{
	var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; // 0x216 PushV
	GetItemID(var_73_int); // 0x217 ObjFunc
	var_76_string = "Category"; // 0x219 PushS
	GetInvItemProperty(var_74_int, var_73_int, var_76_string); // 0x21a Func
	AddItem(var_75_bool, var_68_object, var_74_int, var_69_int); // 0x21c ObjFunc
	var_77_bool = var_75_bool == 0; // 0x21e Not
	if(var_77_bool == 0) goto Label_546; // 0x21f JumpB
	DropItems(var_68_object, var_69_int); // 0x220 ObjFunc
	
Label_546:
	return 6; // 0x222 Return
}


func_730(var_59_int)
{
	var_59_int = 3352; // 0x2da MovI
	return 0; // 0x2db Return
}


func_732(var_60_string)
{
	var_60_string = "ui/NPC_None.png"; // 0x2dc MovS
	return 0; // 0x2dd Return
}


func_734(var_86_bool)
{
	var_86_bool = 0; // 0x2de MovB
	return 0; // 0x2df Return
}


func_547(var_62_object, var_63_string, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x223 PushV
	CreateInvItem(var_66_object); // 0x224 Func
	SetItemName(var_63_string); // 0x226 ObjFunc
	var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x228 PushV
	var_67_object = var_62_object; // 0x229 Mov
	var_68_object = var_66_object; // 0x22a Mov
	var_69_int = var_64_int; // 0x22b Mov
	func_534(var_68_object, var_69_int); // 0x22c Call
	return 2; // 0x22e Return
}


func_484()
{
	CameraSwitchToNormal(); // 0x1e5 Func
	return 0; // 0x1e7 Return
}


func_680(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x2a8 PushV
	GetMainOutdoorScene(var_25_object); // 0x2a9 Func
	var_27_bool = var_25_object == 0; // 0x2ab NullEq
	if(var_27_bool == 0) goto Label_691; // 0x2ac JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x2ad PushS
	Trace(var_28_string); // 0x2ae Func
	var_26_object = 0; // 0x2b0 SetNull
	var_22_object = var_26_object; // 0x2b1 Mov
	return 4; // 0x2b2 Return
	
Label_691:
	GetMap(var_26_object); // 0x2b3 ObjFunc
	var_22_object = var_26_object; // 0x2b5 Mov
	return 4; // 0x2b6 Return
}


func_488(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; // 0x1e8 PushV
	var_94_string = "playing "; // 0x1e9 PushS
	var_95_int = var_94_string + var_89_string; // 0x1ea Add
	Trace(var_95_int); // 0x1eb Func
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float); // 0x1ed Func
	lshPlayAnimation(var_92_float, var_93_float); // 0x1ef Func
	var_96_string = "start: "; // 0x1f1 PushS
	var_97_int = var_96_string + var_92_float; // 0x1f2 Add
	Trace(var_97_int); // 0x1f3 Func
	var_98_string = "end: "; // 0x1f5 PushS
	var_99_int = var_98_string + var_93_float; // 0x1f6 Add
	Trace(var_99_int); // 0x1f7 Func
	return 4; // 0x1f9 Return
}


func_426(var_8_bool)
{
	var_8_bool = 1; // 0x1aa MovB
	return 0; // 0x1ab Return
}


func_428(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1ac PushV
	GetPosition(var_29_cvector); // 0x1ad ObjFunc
	GetEyesHeight(var_28_float); // 0x1af ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1b1 PushE
	var_36_float = var_36_float + var_28_float; // 0x1b2 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1b3 PopE
	GetPosition(var_30_cvector); // 0x1b4 Func
	GetEyesHeight(var_28_float); // 0x1b6 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1b8 PushE
	var_37_float = var_37_float + var_28_float; // 0x1b9 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1ba PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x1bb Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1bc PushE
	var_38_float = 0; // 0x1bd MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1be PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x1bf Or
	var_40_float = sqrt(var_39_int); // 0x1c0 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x1c1 Div2
	var_32_cvector = -var_31_cvector; // 0x1c2 Neg2
	var_41_int = 70; // 0x1c3 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1c4 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1c5 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1c6 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x1c7 Xor2
	func_519(var_43_cvector, var_44_cvector); // 0x1c8 Call
	var_51_int = 25; // 0x1ca PushI
	var_52_float = var_43_cvector * var_51_int; // 0x1cb Mult
	var_53_int = var_42_float + var_52_float; // 0x1cc Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x1cd PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x1ce Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x1cf Add2
	IsOverrideActive(var_35_bool); // 0x1d0 Func
	var_55_bool = var_35_bool; // 0x1d2 Push
	if(var_55_bool == 0) goto Label_470; // 0x1d3 JumpB
	var_18_bool = 0; // 0x1d4 MovB
	return 16; // 0x1d5 Return
	
Label_470:
	StopWorld(); // 0x1d6 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x1d8 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x1da PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x1db PushE
	Rotate(var_56_float, var_57_float); // 0x1dc Func
	CameraWaitForPlayFinish(); // 0x1de Func
	ResumeWorld(); // 0x1e0 Func
	var_18_bool = 1; // 0x1e2 MovB
	return 16; // 0x1e3 Return
}


func_560(var_78_bool, var_79_string, var_80_string)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x230 PushV
	FindActor(var_82_object, var_79_string); // 0x231 Func
	var_83_bool = var_82_object == 0; // 0x233 NullEq
	if(var_83_bool == 0) goto Label_567; // 0x234 JumpB
	var_78_bool = 0; // 0x235 MovB
	return 2; // 0x236 Return
	
Label_567:
	Trigger(var_82_object, var_80_string); // 0x237 Func
	var_78_bool = 1; // 0x239 MovB
	return 2; // 0x23a Return
}


func_626(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x273 PushV
	var_80_string = "ood2WomanD1"; // 0x274 MovS
	func_529(var_79_int, var_80_string); // 0x275 Call
	var_83_int = 0; // 0x277 PushI
	var_84_bool = var_79_int == var_83_int; // 0x278 Eq
	if(var_84_bool == 0) goto Label_636; // 0x279 JumpB
	var_77_bool = 1; // 0x27a MovB
	return 0; // 0x27b Return
	
Label_636:
	var_77_bool = 0; // 0x27c MovB
	return 0; // 0x27d Return
}


func_697(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x2b9 PushV
	var_64_string = "player"; // 0x2ba PushS
	GetVariable(var_64_string, var_63_int); // 0x2bb Func
	var_65_int = 0; // 0x2bd PushI
	var_66_bool = var_63_int == var_65_int; // 0x2be Eq
	if(var_66_bool == 0) goto Label_707; // 0x2bf JumpB
	var_61_int = 200001; // 0x2c0 MovI
	return 2; // 0x2c1 Return
	
Label_707:
	var_67_int = 1; // 0x2c3 PushI
	var_68_bool = var_63_int == var_67_int; // 0x2c4 Eq
	if(var_68_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_61_int = 200002; // 0x2c6 MovI
	return 2; // 0x2c7 Return
	
Label_712:
	var_61_int = 200003; // 0x2c8 MovI
	return 2; // 0x2c9 Return
}


func_506()
{
	var_9_bool = 0; // 0x1fa PushV
	func_734(var_9_bool); // 0x1fb Call
	if(var_9_bool == 0) goto Label_512; // 0x1fd JumpB
	lshStopSpeech(); // 0x1fe Func
	
Label_512:
	return 0; // 0x200 Return
}


func_572(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x23c PushV
	GetGameTime(var_35_float); // 0x23d Func
	var_33_float = var_35_float; // 0x23f Mov
	return 2; // 0x240 Return
}


func_638(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x27e PushV
	GetDiaryRoot(var_53_object); // 0x27f Func
	var_54_bool = var_53_object == 0; // 0x281 Not
	if(var_54_bool == 0) goto Label_648; // 0x282 JumpB
	var_55_string = "Can't retrieve diary root"; // 0x283 PushS
	Trace(var_55_string); // 0x284 Func
	var_51_object = 0; // 0x286 MovB
	return 2; // 0x287 Return
	
Label_648:
	var_51_object = var_53_object; // 0x288 Mov
	return 2; // 0x289 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_116; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_626(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_99; // 0x49 JumpB
	var_85_string = ""; // 0x4a PushV
	var_85_string = "Neutral"; // 0x4b MovS
	func_146(var_71_object, var_85_string); // 0x4c Call
	var_100_int = 6748; // 0x4e PushI
	SetMessage(var_100_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_101_int = 6749; // 0x53 PushI
	var_102_int = 7440; // 0x54 PushI
	var_103_int = 7439; // 0x55 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x56 TObjFunc
	var_104_int = 7345; // 0x58 PushI
	var_105_int = 7440; // 0x59 PushI
	var_106_int = 8098; // 0x5a PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5b TObjFunc
	var_107_int = 7350; // 0x5d PushI
	var_108_int = 7440; // 0x5e PushI
	var_109_int = 8104; // 0x5f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x60 TObjFunc
	goto Label_116; // 0x62 Jump
	
Label_116:
	var_110_bool = 0; // 0x74 PushV
	func_734(var_110_bool); // 0x75 Call
	if(var_110_bool == 0) goto Label_131; // 0x77 JumpB
	
Label_120:
	lshWaitForAnimEnd(); // 0x78 Func
	var_111_string = var_3_string; // 0x7a PushT
	if(var_111_string == 0) goto Label_125; // 0x7b JumpB
	goto Label_130; // 0x7c Jump
	
Label_130:
	goto Label_145; // 0x82 Jump
	
Label_145:
	return 0; // 0x91 Return
	
Label_125:
	var_112_string = ""; // 0x7d PushV
	var_112_string = var_2_object; // 0x7e MovT
	func_488(var_112_string); // 0x7f Call
	goto Label_120; // 0x81 Jump
	
Label_131:
	var_113_string = "all"; // 0x83 PushS
	var_114_string = "idle"; // 0x84 PushS
	PlayAnimation(var_113_string, var_114_string); // 0x85 Func
	
Label_135:
	WaitForAnimEnd(); // 0x87 Func
	var_115_string = var_3_string; // 0x89 PushT
	if(var_115_string == 0) goto Label_140; // 0x8a JumpB
	goto Label_145; // 0x8b Jump
	
Label_140:
	var_116_string = "all"; // 0x8c PushS
	var_117_string = "idle"; // 0x8d PushS
	PlayAnimation(var_116_string, var_117_string); // 0x8e Func
	goto Label_135; // 0x90 Jump
	
Label_99:
	var_118_string = ""; // 0x63 PushV
	var_118_string = "Neutral"; // 0x64 MovS
	func_146(var_71_object, var_118_string); // 0x65 Call
	var_119_int = 6753; // 0x67 PushI
	SetMessage(var_119_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_120_int = 6754; // 0x6c PushI
	var_121_int = 8102; // 0x6d PushI
	var_122_int = 7444; // 0x6e PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x6f TObjFunc
	goto Label_116; // 0x71 Jump
}


