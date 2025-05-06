task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xbc PushI
	if(var_7_int == 0) goto Label_350; // 0xbd JumpB
	func_527(); // 0xbf Call
	var_9_int = 13059; // 0xc1 PushI
	var_10_bool = var_6_int == var_9_int; // 0xc2 Eq
	if(var_10_bool == 0) goto Label_206; // 0xc3 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xc4 PushV
	var_11_object = var_1_object; // 0xc5 MovT
	var_12_object = var_0_object; // 0xc6 MovT
	func_628(); // 0xc7 Call
	var_15_object = Obj(); var_16_object = Obj(); // 0xc9 PushV
	var_15_object = var_1_object; // 0xca MovT
	var_16_object = var_0_object; // 0xcb MovT
	func_691(); // 0xcc Call
	
Label_206:
	var_48_int = 13065; // 0xce PushI
	var_49_bool = var_6_int == var_48_int; // 0xcf Eq
	if(var_49_bool == 0) goto Label_229; // 0xd0 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xd1 PushV
	var_50_object = var_1_object; // 0xd2 MovT
	var_51_object = var_0_object; // 0xd3 MovT
	func_634(); // 0xd4 Call
	var_54_object = Obj(); var_55_object = Obj(); // 0xd6 PushV
	var_54_object = var_1_object; // 0xd7 MovT
	var_55_object = var_0_object; // 0xd8 MovT
	func_617(var_55_object); // 0xd9 Call
	var_73_object = Obj(); var_74_object = Obj(); // 0xdb PushV
	var_73_object = var_1_object; // 0xdc MovT
	var_74_object = var_0_object; // 0xdd MovT
	func_611(); // 0xde Call
	var_77_object = Obj(); var_78_object = Obj(); // 0xe0 PushV
	var_77_object = var_1_object; // 0xe1 MovT
	var_78_object = var_0_object; // 0xe2 MovT
	func_640(); // 0xe3 Call
	
Label_229:
	var_112_int = 13056; // 0xe5 PushI
	var_113_bool = var_5_int == var_112_int; // 0xe6 Eq
	if(var_113_bool == 0) goto Label_302; // 0xe7 JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0xe8 PushV
	var_115_object = var_1_object; // 0xe9 MovT
	func_701(var_115_object); // 0xea Call
	if(var_114_bool == 0) goto Label_252; // 0xec JumpB
	var_122_string = ""; // 0xed PushV
	var_122_string = "Neutral"; // 0xee MovS
	func_171(var_6_int, var_122_string); // 0xef Call
	var_137_int = 11843; // 0xf1 PushI
	SetMessage(var_137_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_138_int = 11844; // 0xf6 PushI
	var_139_int = 13058; // 0xf7 PushI
	var_140_int = 13057; // 0xf8 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_141_bool = 0; var_142_object = Obj(); // 0xfc PushV
	var_142_object = var_1_object; // 0xfd MovT
	func_725(var_142_object); // 0xfe Call
	var_147_bool = var_141_bool == 0; // 0x100 Not
	if(var_147_bool == 0) goto Label_273; // 0x101 JumpB
	var_148_string = ""; // 0x102 PushV
	var_148_string = "Neutral"; // 0x103 MovS
	func_171(var_6_int, var_148_string); // 0x104 Call
	var_149_int = 11847; // 0x106 PushI
	SetMessage(var_149_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_150_int = 11848; // 0x10b PushI
	var_151_int = -1; // 0x10c PushI
	var_152_int = 13061; // 0x10d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_153_bool = 0; // 0x111 PushV
	var_153_bool = 0; // 0x112 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x113 PushV
	var_155_object = var_1_object; // 0x114 MovT
	func_713(var_155_object); // 0x115 Call
	if(var_154_bool == 0) goto Label_286; // 0x117 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x118 PushV
	var_161_object = var_1_object; // 0x119 MovT
	func_725(var_161_object); // 0x11a Call
	if(var_160_bool == 0) goto Label_286; // 0x11c JumpB
	var_153_bool = 1; // 0x11d MovB
	
Label_286:
	if(var_153_bool == 0) goto Label_302; // 0x11e JumpB
	var_162_string = ""; // 0x11f PushV
	var_162_string = "Neutral"; // 0x120 MovS
	func_171(var_6_int, var_162_string); // 0x121 Call
	var_163_int = 11849; // 0x123 PushI
	SetMessage(var_163_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_164_int = 11850; // 0x128 PushI
	var_165_int = 13064; // 0x129 PushI
	var_166_int = 13063; // 0x12a PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_167_int = 13064; // 0x12e PushI
	var_168_bool = var_5_int == var_167_int; // 0x12f Eq
	if(var_168_bool == 0) goto Label_320; // 0x130 JumpB
	var_169_string = ""; // 0x131 PushV
	var_169_string = "Neutral"; // 0x132 MovS
	func_171(var_6_int, var_169_string); // 0x133 Call
	var_170_int = 11851; // 0x135 PushI
	SetMessage(var_170_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_171_int = 11852; // 0x13a PushI
	var_172_int = -1; // 0x13b PushI
	var_173_int = 13065; // 0x13c PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_174_int = 13058; // 0x140 PushI
	var_175_bool = var_5_int == var_174_int; // 0x141 Eq
	if(var_175_bool == 0) goto Label_338; // 0x142 JumpB
	var_176_string = ""; // 0x143 PushV
	var_176_string = "Neutral"; // 0x144 MovS
	func_171(var_6_int, var_176_string); // 0x145 Call
	var_177_int = 11845; // 0x147 PushI
	SetMessage(var_177_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_178_int = 11846; // 0x14c PushI
	var_179_int = -1; // 0x14d PushI
	var_180_int = 13059; // 0x14e PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_3_string = 1; // 0x152 TMovB
	var_181_bool = 0; // 0x153 PushV
	func_849(var_181_bool); // 0x154 Call
	if(var_181_bool == 0) goto Label_346; // 0x156 JumpB
	lshStopAnimation(); // 0x157 Func
	goto Label_348; // 0x159 Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_346:
	StopAnimation(); // 0x15a Func
	
Label_350:
	return 0; // 0x15e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	func_439(); // 0x169 Call
	var_6_int = 0; var_7_object = Obj(); // 0x16b PushV
	var_7_object = var_5_object; // 0x16c Mov
	TaskCall(0); // 0x16d TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x16e Call
	TaskReturn(); // 0x16f TaskReturn
	return 0; // 0x171 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_351:
	var_5_int = 3; // 0x15f PushI
	Sleep(var_5_int); // 0x160 Func
	func_370(); // 0x163 Call
	goto Label_351; // 0x165 Jump
}


func_640()
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); // 0x280 PushV
	var_83_object = Obj(); // 0x281 PushV
	func_779(var_83_object); // 0x282 Call
	var_81_object = var_83_object; // 0x283 Mov
	var_90_string = "d4q02BirdmaskNearHome"; // 0x285 PushS
	FindMark(var_82_object, var_90_string); // 0x286 ObjFunc
	var_91_object = var_82_object; // 0x288 Push
	if(var_91_object == 0) goto Label_652; // 0x289 JumpB
	Remove(); // 0x28a ObjFunc
	
Label_652:
	var_92_string = "d4q02MladVladGotoAJLSelf"; // 0x28c PushS
	FindMark(var_82_object, var_92_string); // 0x28d ObjFunc
	var_93_object = var_82_object; // 0x28f Push
	if(var_93_object == 0) goto Label_659; // 0x290 JumpB
	Remove(); // 0x291 ObjFunc
	
Label_659:
	var_94_string = "d4q02MladVladGotoAnna"; // 0x293 PushS
	FindMark(var_82_object, var_94_string); // 0x294 ObjFunc
	var_95_object = var_82_object; // 0x296 Push
	if(var_95_object == 0) goto Label_666; // 0x297 JumpB
	Remove(); // 0x298 ObjFunc
	
Label_666:
	var_96_string = "d4q02MladVladGotoJulia"; // 0x29a PushS
	FindMark(var_82_object, var_96_string); // 0x29b ObjFunc
	var_97_object = var_82_object; // 0x29d Push
	if(var_97_object == 0) goto Label_673; // 0x29e JumpB
	Remove(); // 0x29f ObjFunc
	
Label_673:
	var_98_string = "d4q02MladVladGotoLara"; // 0x2a1 PushS
	FindMark(var_82_object, var_98_string); // 0x2a2 ObjFunc
	var_99_object = var_82_object; // 0x2a4 Push
	if(var_99_object == 0) goto Label_680; // 0x2a5 JumpB
	Remove(); // 0x2a6 ObjFunc
	
Label_680:
	func_829(); // 0x2a9 Call
	var_109_bool = 0; var_110_string = ""; var_111_string = ""; // 0x2ab PushV
	var_110_string = "quest_d4_02"; // 0x2ac MovS
	var_111_string = "completed"; // 0x2ad MovS
	func_575(var_109_bool, var_110_string, var_111_string); // 0x2ae Call
	return 4; // 0x2b0 Return
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_449(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_845(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_847(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_796(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_137_bool = var_16_bool == 0; // 0x2d Not
	if(var_137_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_138_object = Obj(); // 0x34 PushV
	var_138_object = var_7_object; // 0x35 Mov
	func_505(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_779(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); // 0x30b PushV
	GetMainOutdoorScene(var_86_object); // 0x30c Func
	var_88_bool = var_86_object == 0; // 0x30e NullEq
	if(var_88_bool == 0) goto Label_790; // 0x30f JumpB
	var_89_string = "Can't find main outdoor scene"; // 0x310 PushS
	Trace(var_89_string); // 0x311 Func
	var_87_object = 0; // 0x313 SetNull
	var_83_object = var_87_object; // 0x314 Mov
	return 4; // 0x315 Return
	
Label_790:
	GetMap(var_87_object); // 0x316 ObjFunc
	var_83_object = var_87_object; // 0x318 Mov
	return 4; // 0x319 Return
}


func_527()
{
	var_8_bool = 0; // 0x20f PushV
	func_849(var_8_bool); // 0x210 Call
	if(var_8_bool == 0) goto Label_533; // 0x212 JumpB
	lshStopSpeech(); // 0x213 Func
	
Label_533:
	return 0; // 0x215 Return
}


func_534(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x216 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x217 Or
	var_46_float = sqrt(var_47_int); // 0x218 Sqrt2
	var_48_float = 0.0; // 0x219 PushF
	var_49_bool = var_46_float < var_48_float; // 0x21a LT
	if(var_49_bool == 0) goto Label_542; // 0x21b JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x21c MovV
	return 2; // 0x21d Return
	
Label_542:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x21e Div2
	return 2; // 0x21f Return
}


func_796(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x31c PushV
	var_63_string = "player"; // 0x31d PushS
	GetVariable(var_63_string, var_62_int); // 0x31e Func
	var_64_int = 0; // 0x320 PushI
	var_65_bool = var_62_int == var_64_int; // 0x321 Eq
	if(var_65_bool == 0) goto Label_806; // 0x322 JumpB
	var_60_int = 200001; // 0x323 MovI
	return 2; // 0x324 Return
	
Label_806:
	var_66_int = 1; // 0x326 PushI
	var_67_bool = var_62_int == var_66_int; // 0x327 Eq
	if(var_67_bool == 0) goto Label_811; // 0x328 JumpB
	var_60_int = 200002; // 0x329 MovI
	return 2; // 0x32a Return
	
Label_811:
	var_60_int = 200003; // 0x32b MovI
	return 2; // 0x32c Return
}


func_544(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0; // 0x220 PushV
	GetVariable(var_79_string, var_81_int); // 0x221 Func
	var_78_int = var_81_int; // 0x223 Mov
	return 2; // 0x224 Return
}


func_549(var_63_object, var_64_int)
{
	var_65_int = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_bool = 0; // 0x225 PushV
	GetItemID(var_68_int); // 0x226 ObjFunc
	var_71_string = "Category"; // 0x228 PushS
	GetInvItemProperty(var_69_int, var_68_int, var_71_string); // 0x229 Func
	AddItem(var_70_bool, var_63_object, var_69_int, var_64_int); // 0x22b ObjFunc
	var_72_bool = var_70_bool == 0; // 0x22d Not
	if(var_72_bool == 0) goto Label_561; // 0x22e JumpB
	DropItems(var_63_object, var_64_int); // 0x22f ObjFunc
	
Label_561:
	return 6; // 0x231 Return
}


func_171(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0xac PushV
	func_849(var_85_bool); // 0xad Call
	var_86_bool = var_85_bool == 0; // 0xaf Not
	if(var_86_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_87_bool = var_84_string == var_2_object; // 0xb2 Eq
	if(var_87_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_88_string = ""; // 0xb5 PushV
	var_88_string = var_84_string; // 0xb6 Mov
	func_509(var_88_string); // 0xb7 Call
	var_2_object = var_84_string; // 0xb9 TMov
	return 0; // 0xba Return
}


func_813()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x32d PushV
	var_19_string = "Adding diary entry"; // 0x32e PushS
	Trace(var_19_string); // 0x32f Func
	var_20_int = 138; // 0x331 PushI
	var_21_int = 2; // 0x332 PushI
	var_22_int = 15329; // 0x333 PushI
	CreateDiaryEntry(var_18_object, var_20_int, var_21_int, var_22_int); // 0x334 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x336 PushV
	var_24_object = var_18_object; // 0x337 Mov
	var_25_int = 21; // 0x338 MovI
	func_750(var_23_bool, var_24_object, var_25_int); // 0x339 Call
	return 2; // 0x33b Return
}


func_562(var_57_object, var_58_string, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x232 PushV
	CreateInvItem(var_61_object); // 0x233 Func
	SetItemName(var_58_string); // 0x235 ObjFunc
	var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; // 0x237 PushV
	var_62_object = var_57_object; // 0x238 Mov
	var_63_object = var_61_object; // 0x239 Mov
	var_64_int = var_59_int; // 0x23a Mov
	func_549(var_63_object, var_64_int); // 0x23b Call
	return 2; // 0x23d Return
}


func_691()
{
	func_813(); // 0x2b5 Call
	var_42_bool = 0; var_43_string = ""; var_44_string = ""; // 0x2b7 PushV
	var_43_string = "quest_d4_02"; // 0x2b8 MovS
	var_44_string = "birdmask_talk"; // 0x2b9 MovS
	func_575(var_42_bool, var_43_string, var_44_string); // 0x2ba Call
	return 0; // 0x2bc Return
}


func_439()
{
	StopAnimation(); // 0x1b7 Func
	StopGroup0(); // 0x1b9 Func
	return 0; // 0x1bb Return
}


func_444(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1bc PushV
	IsLoaded(var_22_bool); // 0x1bd Func
	var_20_bool = var_22_bool; // 0x1bf Mov
	return 2; // 0x1c0 Return
}


func_829()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x33d PushV
	var_102_string = "Adding diary entry"; // 0x33e PushS
	Trace(var_102_string); // 0x33f Func
	var_103_int = 94; // 0x341 PushI
	var_104_int = 2; // 0x342 PushI
	var_105_int = 12176; // 0x343 PushI
	CreateDiaryEntry(var_101_object, var_103_int, var_104_int, var_105_int); // 0x344 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x346 PushV
	var_107_object = var_101_object; // 0x347 Mov
	var_108_int = 21; // 0x348 MovI
	func_750(var_106_bool, var_107_object, var_108_int); // 0x349 Call
	return 2; // 0x34b Return
}


func_701(var_76_bool)
{
	var_78_int = 0; var_79_string = ""; // 0x2be PushV
	var_79_string = "ood4BirdmaskHome1"; // 0x2bf MovS
	func_544(var_78_int, var_79_string); // 0x2c0 Call
	var_82_int = 0; // 0x2c2 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2c3 Eq
	if(var_83_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_76_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
	
Label_711:
	var_76_bool = 0; // 0x2c7 MovB
	return 0; // 0x2c8 Return
}


func_575(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x23f PushV
	FindActor(var_46_object, var_43_string); // 0x240 Func
	var_47_bool = var_46_object == 0; // 0x242 NullEq
	if(var_47_bool == 0) goto Label_582; // 0x243 JumpB
	var_42_bool = 0; // 0x244 MovB
	return 2; // 0x245 Return
	
Label_582:
	Trigger(var_46_object, var_44_string); // 0x246 Func
	var_42_bool = 1; // 0x248 MovB
	return 2; // 0x249 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_141; // 0x44 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x45 PushV
	var_77_object = var_1_object; // 0x46 MovT
	func_701(var_77_object); // 0x47 Call
	if(var_76_bool == 0) goto Label_89; // 0x49 JumpB
	var_84_string = ""; // 0x4a PushV
	var_84_string = "Neutral"; // 0x4b MovS
	func_171(var_70_object, var_84_string); // 0x4c Call
	var_99_int = 11843; // 0x4e PushI
	SetMessage(var_99_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_100_int = 11844; // 0x53 PushI
	var_101_int = 13058; // 0x54 PushI
	var_102_int = 13057; // 0x55 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x56 TObjFunc
	goto Label_141; // 0x58 Jump
	
Label_141:
	var_103_bool = 0; // 0x8d PushV
	func_849(var_103_bool); // 0x8e Call
	if(var_103_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_104_string = var_3_string; // 0x93 PushT
	if(var_104_string == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_105_string = ""; // 0x96 PushV
	var_105_string = var_2_object; // 0x97 MovT
	func_509(var_105_string); // 0x98 Call
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_106_string = "all"; // 0x9c PushS
	var_107_string = "idle"; // 0x9d PushS
	PlayAnimation(var_106_string, var_107_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_108_string = var_3_string; // 0xa2 PushT
	if(var_108_string == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_109_string = "all"; // 0xa5 PushS
	var_110_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_109_string, var_110_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
	
Label_89:
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_725(var_112_object); // 0x5b Call
	var_117_bool = var_111_bool == 0; // 0x5d Not
	if(var_117_bool == 0) goto Label_110; // 0x5e JumpB
	var_118_string = ""; // 0x5f PushV
	var_118_string = "Neutral"; // 0x60 MovS
	func_171(var_70_object, var_118_string); // 0x61 Call
	var_119_int = 11847; // 0x63 PushI
	SetMessage(var_119_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_120_int = 11848; // 0x68 PushI
	var_121_int = -1; // 0x69 PushI
	var_122_int = 13061; // 0x6a PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x6b TObjFunc
	goto Label_141; // 0x6d Jump
	
Label_110:
	var_123_bool = 0; // 0x6e PushV
	var_123_bool = 0; // 0x6f MovB
	var_124_bool = 0; var_125_object = Obj(); // 0x70 PushV
	var_125_object = var_1_object; // 0x71 MovT
	func_713(var_125_object); // 0x72 Call
	if(var_124_bool == 0) goto Label_123; // 0x74 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x75 PushV
	var_131_object = var_1_object; // 0x76 MovT
	func_725(var_131_object); // 0x77 Call
	if(var_130_bool == 0) goto Label_123; // 0x79 JumpB
	var_123_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_123_bool == 0) goto Label_139; // 0x7b JumpB
	var_132_string = ""; // 0x7c PushV
	var_132_string = "Neutral"; // 0x7d MovS
	func_171(var_70_object, var_132_string); // 0x7e Call
	var_133_int = 11849; // 0x80 PushI
	SetMessage(var_133_int); // 0x81 TObjFunc
	ClearReplies(); // 0x83 TObjFunc
	var_134_int = 11850; // 0x85 PushI
	var_135_int = 13064; // 0x86 PushI
	var_136_int = 13063; // 0x87 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
	
Label_139:
	return 0; // 0x8b Return
}


func_449(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x1c1 PushV
	GetPosition(var_28_cvector); // 0x1c2 ObjFunc
	GetEyesHeight(var_27_float); // 0x1c4 ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x1c6 PushE
	var_35_float = var_35_float + var_27_float; // 0x1c7 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x1c8 PopE
	GetPosition(var_29_cvector); // 0x1c9 Func
	GetEyesHeight(var_27_float); // 0x1cb Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1cd PushE
	var_36_float = var_36_float + var_27_float; // 0x1ce Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1cf PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x1d0 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1d1 PushE
	var_37_float = 0; // 0x1d2 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1d3 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x1d4 Or
	var_39_float = sqrt(var_38_int); // 0x1d5 Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x1d6 Div2
	var_31_cvector = -var_30_cvector; // 0x1d7 Neg2
	var_40_int = 70; // 0x1d8 PushI
	var_41_float = var_30_cvector * var_40_int; // 0x1d9 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x1da PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x1db PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x1dc Xor2
	func_534(var_42_cvector, var_43_cvector); // 0x1dd Call
	var_50_int = 25; // 0x1df PushI
	var_51_float = var_42_cvector * var_50_int; // 0x1e0 Mult
	var_52_int = var_41_float + var_51_float; // 0x1e1 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x1e2 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x1e3 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x1e4 Add2
	IsOverrideActive(var_34_bool); // 0x1e5 Func
	var_54_bool = var_34_bool; // 0x1e7 Push
	if(var_54_bool == 0) goto Label_491; // 0x1e8 JumpB
	var_17_bool = 0; // 0x1e9 MovB
	return 16; // 0x1ea Return
	
Label_491:
	StopWorld(); // 0x1eb Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x1ed Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x1ef PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x1f0 PushE
	Rotate(var_55_float, var_56_float); // 0x1f1 Func
	CameraWaitForPlayFinish(); // 0x1f3 Func
	ResumeWorld(); // 0x1f5 Func
	var_17_bool = 1; // 0x1f7 MovB
	return 16; // 0x1f8 Return
}


func_713(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x2ca PushV
	var_127_string = "ood4BirdmaskHome2"; // 0x2cb MovS
	func_544(var_126_int, var_127_string); // 0x2cc Call
	var_128_int = 0; // 0x2ce PushI
	var_129_bool = var_126_int == var_128_int; // 0x2cf Eq
	if(var_129_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_124_bool = 1; // 0x2d1 MovB
	return 0; // 0x2d2 Return
	
Label_723:
	var_124_bool = 0; // 0x2d3 MovB
	return 0; // 0x2d4 Return
}


func_587(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = ""; // 0x24b PushV
	var_33_string = "idle"; // 0x24c MovS
	var_34_int = var_31_int; // 0x24d Push
	if(var_34_int == 0) goto Label_592; // 0x24e JumpB
	var_33_string = var_33_string + var_31_int; // 0x24f Add2
	
Label_592:
	var_30_string = var_33_string; // 0x250 Mov
	return 2; // 0x251 Return
}


func_845(var_58_int)
{
	var_58_int = 4029; // 0x34d MovI
	return 0; // 0x34e Return
}


func_847(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x34f MovS
	return 0; // 0x350 Return
}


func_849(var_85_bool)
{
	var_85_bool = 0; // 0x351 MovB
	return 0; // 0x352 Return
}


func_594(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x252 PushV
	var_27_int = 0; // 0x253 MovI
	
Label_596:
	var_29_string = "all"; // 0x254 PushS
	var_30_string = ""; var_31_int = 0; // 0x255 PushV
	var_31_int = var_27_int; // 0x256 Mov
	func_587(var_30_string, var_31_int); // 0x257 Call
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0x259 Func
	var_35_bool = var_28_bool == 0; // 0x25b Not
	if(var_35_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_609; // 0x25d Jump
	
Label_609:
	var_24_int = var_27_int; // 0x261 Mov
	return 4; // 0x262 Return
	
Label_606:
	var_36_int = 1; // 0x25e PushI
	var_27_int = var_27_int + var_36_int; // 0x25f Add2
	goto Label_596; // 0x260 Jump
}


func_725(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2d6 PushV
	var_114_string = "d4q02_survived"; // 0x2d7 MovS
	func_544(var_113_int, var_114_string); // 0x2d8 Call
	var_115_int = 1; // 0x2da PushI
	var_116_bool = var_113_int == var_115_int; // 0x2db Eq
	if(var_116_bool == 0) goto Label_735; // 0x2dc JumpB
	var_111_bool = 1; // 0x2dd MovB
	return 0; // 0x2de Return
	
Label_735:
	var_111_bool = 0; // 0x2df MovB
	return 0; // 0x2e0 Return
}


func_737(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x2e1 PushV
	GetDiaryRoot(var_34_object); // 0x2e2 Func
	var_35_bool = var_34_object == 0; // 0x2e4 Not
	if(var_35_bool == 0) goto Label_747; // 0x2e5 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x2e6 PushS
	Trace(var_36_string); // 0x2e7 Func
	var_32_object = 0; // 0x2e9 MovB
	return 2; // 0x2ea Return
	
Label_747:
	var_32_object = var_34_object; // 0x2eb Mov
	return 2; // 0x2ec Return
}


func_611()
{
	var_75_string = "playsound"; // 0x264 PushS
	var_76_string = "giveitem"; // 0x265 PushS
	TriggerWorld(var_75_string, var_76_string); // 0x266 Func
	return 0; // 0x268 Return
}


func_617(var_54_object)
{
	var_56_string = "powder is given"; // 0x26a PushS
	Trace(var_56_string); // 0x26b Func
	var_57_object = Obj(); var_58_string = ""; var_59_int = 0; // 0x26d PushV
	var_57_object = var_54_object; // 0x26e Mov
	var_58_string = "powder"; // 0x26f MovS
	var_59_int = 1; // 0x270 MovI
	func_562(var_57_object, var_58_string, var_59_int); // 0x271 Call
	return 0; // 0x273 Return
}


func_750(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x2ee PushV
	var_32_object = Obj(); // 0x2ef PushV
	func_737(var_32_object); // 0x2f0 Call
	var_29_object = var_32_object; // 0x2f1 Mov
	Find(var_25_int, var_30_object); // 0x2f3 ObjFunc
	var_37_bool = var_30_object == 0; // 0x2f5 Not
	if(var_37_bool == 0) goto Label_765; // 0x2f6 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x2f7 PushS
	var_39_int = var_38_string + var_25_int; // 0x2f8 Add
	Trace(var_39_int); // 0x2f9 Func
	var_23_bool = 0; // 0x2fb MovB
	return 6; // 0x2fc Return
	
Label_765:
	AddChild(var_24_object); // 0x2fd ObjFunc
	var_40_string = "player_diary"; // 0x2ff PushS
	var_41_int = 1; // 0x300 PushI
	SetVariable(var_40_string, var_41_int); // 0x301 Func
	GetCategory(var_31_int); // 0x303 ObjFunc
	SetDiarySection(var_31_int); // 0x305 Func
	var_23_bool = 0; // 0x307 MovB
	return 6; // 0x308 Return
}


func_370()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x172 PushV
	WaitForAnimEnd(); // 0x173 Func
	var_20_bool = 0; // 0x175 PushV
	func_444(var_20_bool); // 0x176 Call
	var_23_bool = var_20_bool == 0; // 0x178 Not
	if(var_23_bool == 0) goto Label_379; // 0x179 JumpB
	return 14; // 0x17a Return
	
Label_379:
	var_24_int = 0; // 0x17b PushV
	func_594(var_24_int); // 0x17c Call
	var_13_int = var_24_int; // 0x17d Mov
	var_14_int = 0; // 0x17f MovI
	
Label_384:
	var_37_bool = 0; // 0x180 PushV
	var_37_bool = 0; // 0x181 MovB
	var_38_int = 5; // 0x182 PushI
	var_39_bool = var_14_int < var_38_int; // 0x183 LT
	if(var_39_bool == 0) goto Label_394; // 0x184 JumpB
	var_40_bool = 0; // 0x185 PushV
	func_444(var_40_bool); // 0x186 Call
	if(var_40_bool == 0) goto Label_394; // 0x188 JumpB
	var_37_bool = 1; // 0x189 MovB
	
Label_394:
	if(var_37_bool == 0) goto Label_438; // 0x18a JumpB
	var_41_int = 3; // 0x18b PushI
	irand(var_15_int, var_41_int); // 0x18c Func
	var_42_int = 0; // 0x18e PushI
	var_43_bool = var_15_int == var_42_int; // 0x18f Eq
	if(var_43_bool == 0) goto Label_418; // 0x190 JumpB
	var_44_int = var_13_int; // 0x191 Push
	if(var_44_int == 0) goto Label_417; // 0x192 JumpB
	irand(var_16_int, var_13_int); // 0x193 Func
	var_45_string = "all"; // 0x195 PushS
	var_46_string = ""; var_47_int = 0; // 0x196 PushV
	var_47_int = var_16_int; // 0x197 Mov
	func_587(var_46_string, var_47_int); // 0x198 Call
	PlayAnimation(var_45_string, var_46_string); // 0x19a Func
	WaitForAnimEnd(var_17_bool); // 0x19c Func
	var_48_bool = var_17_bool == 0; // 0x19e Not
	if(var_48_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_438; // 0x1a0 Jump
	
Label_438:
	return 14; // 0x1b6 Return
	
Label_417:
	goto Label_435; // 0x1a1 Jump
	
Label_435:
	var_49_int = 1; // 0x1b3 PushI
	var_14_int = var_14_int + var_49_int; // 0x1b4 Add2
	goto Label_384; // 0x1b5 Jump
	
Label_418:
	var_50_int = 1; // 0x1a2 PushI
	var_51_bool = var_15_int == var_50_int; // 0x1a3 Eq
	if(var_51_bool == 0) goto Label_432; // 0x1a4 JumpB
	var_52_int = 4; // 0x1a5 PushI
	rand(var_18_float, var_52_int); // 0x1a6 Func
	var_53_int = 1; // 0x1a8 PushI
	var_54_int = var_18_float + var_53_int; // 0x1a9 Add
	Sleep(var_54_int, var_19_bool); // 0x1aa Func
	var_55_bool = var_19_bool == 0; // 0x1ac Not
	if(var_55_bool == 0) goto Label_431; // 0x1ad JumpB
	goto Label_438; // 0x1ae Jump
	
Label_431:
	goto Label_435; // 0x1af Jump
	
Label_432:
	var_56_int = var_14_int; // 0x1b0 Push
	if(var_56_int == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_438; // 0x1b2 Jump
}


func_628()
{
	var_13_string = "ood4BirdmaskHome1"; // 0x275 PushS
	var_14_int = 1; // 0x276 PushI
	SetVariable(var_13_string, var_14_int); // 0x277 Func
	return 0; // 0x279 Return
}


func_505()
{
	CameraSwitchToNormal(); // 0x1fa Func
	return 0; // 0x1fc Return
}


func_634()
{
	var_52_string = "ood4BirdmaskHome2"; // 0x27b PushS
	var_53_int = 1; // 0x27c PushI
	SetVariable(var_52_string, var_53_int); // 0x27d Func
	return 0; // 0x27f Return
}


func_509(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x1fd PushV
	var_93_string = "playing "; // 0x1fe PushS
	var_94_int = var_93_string + var_88_string; // 0x1ff Add
	Trace(var_94_int); // 0x200 Func
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float); // 0x202 Func
	lshPlayAnimation(var_91_float, var_92_float); // 0x204 Func
	var_95_string = "start: "; // 0x206 PushS
	var_96_int = var_95_string + var_91_float; // 0x207 Add
	Trace(var_96_int); // 0x208 Func
	var_97_string = "end: "; // 0x20a PushS
	var_98_int = var_97_string + var_92_float; // 0x20b Add
	Trace(var_98_int); // 0x20c Func
	return 4; // 0x20e Return
}


