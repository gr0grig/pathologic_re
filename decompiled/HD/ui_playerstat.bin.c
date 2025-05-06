task_0_event_201(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_int, var_21_object)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_string = ""; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = ""; // 0x15c PushV
	var_34_int = 1000; // 0x15d PushI
	var_35_bool = var_20_int == var_34_int; // 0x15e Eq
	if(var_35_bool == 0) goto Label_355; // 0x15f JumpB
	var_10_int = 109; // 0x160 TMovI
	var_11_float = 1.0; // 0x161 TMovF
	goto Label_551; // 0x162 Jump
	
Label_551:
	return 12; // 0x227 Return
	
Label_355:
	var_36_int = 200; // 0x163 PushI
	var_37_bool = var_20_int == var_36_int; // 0x164 Eq
	if(var_37_bool == 0) goto Label_370; // 0x165 JumpB
	var_38_object = var_21_object; // 0x166 Push
	if(var_38_object == 0) goto Label_369; // 0x167 JumpB
	size(var_28_int); // 0x168 ObjFunc
	var_39_int = 1; // 0x16a PushI
	var_40_bool = var_28_int == var_39_int; // 0x16b Eq
	if(var_40_bool == 0) goto Label_369; // 0x16c JumpB
	var_41_int = 0; // 0x16d PushI
	get(var_25_int, var_41_int); // 0x16e ObjFunc
	var_11_float = 1.0; // 0x170 TMovF
	
Label_369:
	goto Label_551; // 0x171 Jump
	
Label_370:
	var_42_int = 1; // 0x172 PushI
	var_43_bool = var_20_int == var_42_int; // 0x173 Eq
	if(var_43_bool == 0) goto Label_389; // 0x174 JumpB
	var_44_bool = var_0_object == 0; // 0x175 Not
	if(var_44_bool == 0) goto Label_379; // 0x176 JumpB
	var_45_string = "visir.xml"; // 0x177 PushS
	var_46_bool = 0; // 0x178 PushB
	CreateWindow(var_45_string, var_46_bool, var_0_object); // 0x179 Func
	
Label_379:
	var_47_int = 0; // 0x17b PushV
	func_1064(var_47_int); // 0x17c NEW_2
	var_55_string = "charge"; // 0x17e PushS
	SendMessage(var_47_int, var_55_string); // 0x17f Func
	func_577(); // 0x182 NEW_2
	goto Label_551; // 0x184 Jump
	
Label_389:
	var_80_int = 2; // 0x185 PushI
	var_81_bool = var_20_int == var_80_int; // 0x186 Eq
	if(var_81_bool == 0) goto Label_397; // 0x187 JumpB
	var_82_object = var_0_object; // 0x188 PushT
	if(var_82_object == 0) goto Label_396; // 0x189 JumpB
	DestroyWindow(); // 0x18a TObjFunc
	
Label_396:
	goto Label_551; // 0x18c Jump
	
Label_397:
	var_83_int = 3; // 0x18d PushI
	var_84_bool = var_20_int == var_83_int; // 0x18e Eq
	if(var_84_bool == 0) goto Label_412; // 0x18f JumpB
	var_85_int = 0; // 0x190 PushI
	get(var_29_int, var_85_int); // 0x191 ObjFunc
	var_86_int = 1; // 0x193 PushI
	get(var_30_int, var_86_int); // 0x194 ObjFunc
	var_87_int = 0; var_88_int = 0; // 0x196 PushV
	var_87_int = var_29_int; // 0x197 Mov
	var_88_int = var_30_int; // 0x198 Mov
	func_217(var_87_int, var_88_int); // 0x199 NEW_2
	goto Label_551; // 0x19b Jump
	
Label_412:
	var_92_int = 4; // 0x19c PushI
	var_93_bool = var_20_int == var_92_int; // 0x19d Eq
	if(var_93_bool == 0) goto Label_422; // 0x19e JumpB
	var_94_int = 0; // 0x19f PushI
	get(var_31_int, var_94_int); // 0x1a0 ObjFunc
	var_95_int = 1; // 0x1a2 PushI
	get(var_32_int, var_95_int); // 0x1a3 ObjFunc
	goto Label_551; // 0x1a5 Jump
	
Label_422:
	var_96_int = 100; // 0x1a6 PushI
	var_97_bool = var_20_int == var_96_int; // 0x1a7 Eq
	if(var_97_bool == 0) goto Label_430; // 0x1a8 JumpB
	var_98_int = 0; // 0x1a9 PushV
	var_98_int = 100; // 0x1aa MovI
	func_65(var_98_int); // 0x1ab NEW_2
	goto Label_551; // 0x1ad Jump
	
Label_430:
	var_110_int = 101; // 0x1ae PushI
	var_111_bool = var_20_int == var_110_int; // 0x1af Eq
	if(var_111_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_112_int = 0; // 0x1b1 PushV
	var_112_int = 101; // 0x1b2 MovI
	func_65(var_112_int); // 0x1b3 NEW_2
	goto Label_551; // 0x1b5 Jump
	
Label_438:
	var_113_int = 6; // 0x1b6 PushI
	var_114_bool = var_20_int == var_113_int; // 0x1b7 Eq
	if(var_114_bool == 0) goto Label_452; // 0x1b8 JumpB
	var_115_int = 0; // 0x1b9 PushV
	var_115_int = 2; // 0x1ba MovI
	func_90(var_115_int); // 0x1bb NEW_2
	var_127_string = "mail"; // 0x1bd PushS
	PlaySound(var_127_string); // 0x1be Func
	var_128_string = "HasMail"; // 0x1c0 PushS
	Trace(var_128_string); // 0x1c1 Func
	goto Label_551; // 0x1c3 Jump
	
Label_452:
	var_129_int = 7; // 0x1c4 PushI
	var_130_bool = var_20_int == var_129_int; // 0x1c5 Eq
	if(var_130_bool == 0) goto Label_466; // 0x1c6 JumpB
	var_131_int = 0; // 0x1c7 PushV
	var_131_int = 3; // 0x1c8 MovI
	func_90(var_131_int); // 0x1c9 NEW_2
	var_132_string = "diary"; // 0x1cb PushS
	PlaySound(var_132_string); // 0x1cc Func
	var_133_string = "HasDiary"; // 0x1ce PushS
	Trace(var_133_string); // 0x1cf Func
	goto Label_551; // 0x1d1 Jump
	
Label_466:
	var_134_int = 8; // 0x1d2 PushI
	var_135_bool = var_20_int == var_134_int; // 0x1d3 Eq
	if(var_135_bool == 0) goto Label_476; // 0x1d4 JumpB
	var_136_string = "rep_up"; // 0x1d5 PushS
	PlaySound(var_136_string); // 0x1d6 Func
	var_137_string = "ReputationUP"; // 0x1d8 PushS
	Trace(var_137_string); // 0x1d9 Func
	goto Label_551; // 0x1db Jump
	
Label_476:
	var_138_int = 9; // 0x1dc PushI
	var_139_bool = var_20_int == var_138_int; // 0x1dd Eq
	if(var_139_bool == 0) goto Label_486; // 0x1de JumpB
	var_140_string = "rep_down"; // 0x1df PushS
	PlaySound(var_140_string); // 0x1e0 Func
	var_141_string = "ReputationDown"; // 0x1e2 PushS
	Trace(var_141_string); // 0x1e3 Func
	goto Label_551; // 0x1e5 Jump
	
Label_486:
	var_142_int = 11; // 0x1e6 PushI
	var_143_bool = var_20_int == var_142_int; // 0x1e7 Eq
	if(var_143_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_144_string = ""; var_145_bool = 0; // 0x1e9 PushV
	var_144_string = "tiredness"; // 0x1ea MovS
	var_145_bool = 1; // 0x1eb MovB
	func_754(var_144_string, var_145_bool); // 0x1ec NEW_2
	goto Label_551; // 0x1ee Jump
	
Label_495:
	var_179_int = 12; // 0x1ef PushI
	var_180_bool = var_20_int == var_179_int; // 0x1f0 Eq
	if(var_180_bool == 0) goto Label_504; // 0x1f1 JumpB
	var_181_string = ""; var_182_bool = 0; // 0x1f2 PushV
	var_181_string = "hunger"; // 0x1f3 MovS
	var_182_bool = 1; // 0x1f4 MovB
	func_754(var_181_string, var_182_bool); // 0x1f5 NEW_2
	goto Label_551; // 0x1f7 Jump
	
Label_504:
	var_183_int = 13; // 0x1f8 PushI
	var_184_bool = var_20_int == var_183_int; // 0x1f9 Eq
	if(var_184_bool == 0) goto Label_513; // 0x1fa JumpB
	var_185_string = ""; var_186_bool = 0; // 0x1fb PushV
	var_185_string = "immunity"; // 0x1fc MovS
	var_186_bool = 1; // 0x1fd MovB
	func_754(var_185_string, var_186_bool); // 0x1fe NEW_2
	goto Label_551; // 0x200 Jump
	
Label_513:
	var_187_int = 14; // 0x201 PushI
	var_188_bool = var_20_int == var_187_int; // 0x202 Eq
	if(var_188_bool == 0) goto Label_522; // 0x203 JumpB
	var_189_string = ""; var_190_bool = 0; // 0x204 PushV
	var_189_string = "disease"; // 0x205 MovS
	var_190_bool = 1; // 0x206 MovB
	func_754(var_189_string, var_190_bool); // 0x207 NEW_2
	goto Label_551; // 0x209 Jump
	
Label_522:
	var_191_int = 15; // 0x20a PushI
	var_192_bool = var_20_int == var_191_int; // 0x20b Eq
	if(var_192_bool == 0) goto Label_531; // 0x20c JumpB
	var_193_string = ""; var_194_bool = 0; // 0x20d PushV
	var_193_string = "health"; // 0x20e MovS
	var_194_bool = 1; // 0x20f MovB
	func_754(var_193_string, var_194_bool); // 0x210 NEW_2
	goto Label_551; // 0x212 Jump
	
Label_531:
	var_195_int = 16; // 0x213 PushI
	var_196_bool = var_20_int == var_195_int; // 0x214 Eq
	if(var_196_bool == 0) goto Label_540; // 0x215 JumpB
	var_197_string = ""; var_198_bool = 0; // 0x216 PushV
	var_197_string = "repuatation"; // 0x217 MovS
	var_198_bool = 1; // 0x218 MovB
	func_754(var_197_string, var_198_bool); // 0x219 NEW_2
	goto Label_551; // 0x21b Jump
	
Label_540:
	var_199_int = 10; // 0x21c PushI
	var_200_bool = var_20_int == var_199_int; // 0x21d Eq
	if(var_200_bool == 0) goto Label_551; // 0x21e JumpB
	var_201_int = 0; // 0x21f PushI
	get(var_33_string, var_201_int); // 0x220 ObjFunc
	var_202_string = ""; var_203_bool = 0; // 0x222 PushV
	var_202_string = var_33_string; // 0x223 Mov
	var_203_bool = 0; // 0x224 MovB
	func_754(var_202_string, var_203_bool); // 0x225 NEW_2
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_float)
{
	var_21_float = 0; // 0x229 PushV
	var_21_float = var_20_float; // 0x22a Mov
	func_120(var_21_float); // 0x22b NEW_2
	var_33_float = 0; // 0x22d PushV
	var_33_float = var_20_float; // 0x22e Mov
	func_240(var_33_float); // 0x22f NEW_2
	var_58_float = 0; // 0x231 PushV
	var_58_float = var_20_float; // 0x232 Mov
	func_287(); // 0x233 NEW_2
	func_577(); // 0x236 NEW_2
	var_104_float = 0; // 0x238 PushV
	var_104_float = var_20_float; // 0x239 Mov
	func_811(var_104_float); // 0x23a NEW_2
	var_117_float = 0; // 0x23c PushV
	var_117_float = var_20_float; // 0x23d Mov
	func_661(var_19_object, var_20_float, var_117_float); // 0x23e NEW_2
	return 0; // 0x240 Return
}


task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_20_bool = 0; // 0x403 PushV
	var_20_bool = 0; // 0x404 MovB
	var_21_bool = 0; // 0x405 PushV
	func_1105(var_21_bool); // 0x406 NEW_2
	if(var_21_bool == 0) goto Label_1036; // 0x408 JumpB
	var_28_bool = var_1_object == 0; // 0x409 Not
	if(var_28_bool == 0) goto Label_1036; // 0x40a JumpB
	var_20_bool = 1; // 0x40b MovB
	
Label_1036:
	if(var_20_bool == 0) goto Label_1048; // 0x40c JumpB
	var_29_string = "cross"; // 0x40d PushS
	var_30_int = 2; // 0x40e PushI
	var_31_float = var_12_int / var_30_int; // 0x40f Div
	var_32_int = 1; // 0x410 PushI
	var_33_int = var_31_float - var_32_int; // 0x411 Sub
	var_34_int = 2; // 0x412 PushI
	var_35_float = var_13_int / var_34_int; // 0x413 Div
	var_36_int = 1; // 0x414 PushI
	var_37_int = var_35_float - var_36_int; // 0x415 Sub
	Blit(var_29_string, var_33_int, var_37_int); // 0x416 Func
	
Label_1048:
	func_141(var_19_object); // 0x419 NEW_2
	func_315(var_19_object); // 0x41c NEW_2
	func_872(var_19_object); // 0x41f NEW_2
	func_833(); // 0x422 NEW_2
	func_638(var_17_object, var_18_object, var_19_object); // 0x425 NEW_2
	return 0; // 0x427 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x0 PushV
	EventDisable(201); // 0x1 EventDisable
	GetWindowSize(var_10_int, var_9_object); // 0x2 Func
	var_10_int = -1; // 0x4 TMovI
	var_22_bool = 0; // 0x5 PushV
	func_1078(var_22_bool); // 0x6 NEW_2
	if(var_22_bool == 0) goto Label_22; // 0x8 JumpB
	var_29_string = "visir.xml"; // 0x9 PushS
	var_30_bool = 0; // 0xa PushB
	CreateWindow(var_29_string, var_30_bool, var_0_object); // 0xb Func
	var_31_int = 0; // 0xd PushV
	func_1064(var_31_int); // 0xe NEW_2
	var_39_string = "charge"; // 0x10 PushS
	SendMessage(var_31_int, var_39_string); // 0x11 Func
	func_577(); // 0x14 NEW_2
	
Label_22:
	CreateIntVector(var_17_object); // 0x16 Func
	CreateStringVector(var_20_object); // 0x18 Func
	CreateIntVector(var_19_object); // 0x1a Func
	CreateFloatVector(var_18_object); // 0x1c Func
	CreateIntVector(var_16_object); // 0x1e Func
	CreateIntVector(var_15_object); // 0x20 Func
	CreateFloatVector(var_14_object); // 0x22 Func
	EventDisable(1); // 0x24 EventDisable
	EventDisable(0); // 0x25 EventDisable
	
Label_38:
	var_64_bool = 1; // 0x26 PushB
	if(var_64_bool == 0) goto Label_50; // 0x27 JumpB
	var_65_string = "player"; // 0x28 PushS
	FindActor(var_21_object, var_65_string); // 0x29 Func
	var_66_object = var_21_object; // 0x2b Push
	if(var_66_object == 0) goto Label_46; // 0x2c JumpB
	goto Label_50; // 0x2d Jump
	
Label_50:
	EventEnable(1); // 0x32 EventEnable
	EventEnable(0); // 0x33 EventEnable
	func_672(var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object); // 0x35 NEW_2
	EventEnable(201); // 0x37 EventEnable
	var_96_bool = 1; // 0x38 PushB
	SetOwnerDraw(var_96_bool); // 0x39 Func
	var_97_bool = 1; // 0x3b PushB
	SetNeedUpdate(var_97_bool); // 0x3c Func
	ProcessEvents(); // 0x3e Func
	return 2; // 0x40 Return
	
Label_46:
	UISync(); // 0x2e Func
	var_21_object = 0; // 0x30 SetNull
	goto Label_38; // 0x31 Jump
}


func_577()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; // 0x241 PushV
	var_44_int = 0; // 0x242 PushV
	func_1091(var_44_int); // 0x243 NEW_2
	var_42_int = var_44_int; // 0x244 Mov
	var_43_int = 0; // 0x246 MovI
	
Label_583:
	var_52_int = 4; // 0x247 PushI
	var_53_bool = var_43_int < var_52_int; // 0x248 LT
	if(var_53_bool == 0) goto Label_600; // 0x249 JumpB
	var_54_bool = var_43_int < var_42_int; // 0x24a LT
	if(var_54_bool == 0) goto Label_590; // 0x24b JumpB
	var_55_int = 1; // 0x24c PushI
	goto Label_591; // 0x24d Jump
	
Label_591:
	var_56_string = "vlevel"; // 0x24f PushS
	var_57_int = 1; // 0x250 PushI
	var_58_int = var_43_int + var_57_int; // 0x251 Add
	var_59_int = var_56_string + var_58_int; // 0x252 Add
	SendMessage(var_55_int, var_59_int); // 0x253 Func
	var_60_int = 1; // 0x255 PushI
	var_43_int = var_43_int + var_60_int; // 0x256 Add2
	goto Label_583; // 0x257 Jump
	
Label_590:
	var_61_int = 0; // 0x24e PushI
	
Label_600:
	var_62_int = 0; // 0x258 PushV
	func_1064(var_62_int); // 0x259 NEW_2
	var_63_string = "charge"; // 0x25b PushS
	SendMessage(var_62_int, var_63_string); // 0x25c Func
	return 4; // 0x25e Return
}


func_65(var_98_int)
{
	var_99_int = 0; var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x41 PushV
	add(var_98_int); // 0x42 TObjFunc
	size(var_102_int); // 0x44 TObjFunc
	var_103_int = 0; // 0x46 MovI
	
Label_71:
	var_105_int = 1; // 0x47 PushI
	var_106_int = var_102_int - var_105_int; // 0x48 Sub
	var_107_bool = var_103_int < var_106_int; // 0x49 LT
	if(var_107_bool == 0) goto Label_85; // 0x4a JumpB
	get(var_104_int, var_103_int); // 0x4b TObjFunc
	var_108_bool = var_104_int == var_98_int; // 0x4d Eq
	if(var_108_bool == 0) goto Label_82; // 0x4e JumpB
	remove(var_103_int); // 0x4f TObjFunc
	return 6; // 0x51 Return
	
Label_82:
	var_109_int = 1; // 0x52 PushI
	var_103_int = var_103_int + var_109_int; // 0x53 Add2
	goto Label_71; // 0x54 Jump
	
Label_85:
	return 6; // 0x55 Return
}


func_1091(var_44_int)
{
	var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_int = 0; // 0x443 PushV
	var_49_string = "player"; // 0x444 PushS
	FindActor(var_47_object, var_49_string); // 0x445 Func
	var_50_bool = var_47_object == 0; // 0x447 Not
	if(var_50_bool == 0) goto Label_1099; // 0x448 JumpB
	var_44_int = 0; // 0x449 MovI
	return 4; // 0x44a Return
	
Label_1099:
	var_51_string = "visir"; // 0x44b PushS
	GetProperty(var_51_string, var_48_int); // 0x44c ObjFunc
	var_44_int = var_48_int; // 0x44e Mov
	return 4; // 0x44f Return
}


func_833()
{
	var_241_float = 0; var_242_float = 0; var_243_float = 0; var_244_int = 0; var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; var_249_int = 0; var_250_float = 0; // 0x341 PushV
	return 10; // 0x342 Return
}


func_141(var_13_int)
{
	var_38_int = 0; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_int = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0; // 0x8d PushV
	size(var_42_int); // 0x8e TObjFunc
	var_46_bool = var_42_int == 0; // 0x90 Not
	if(var_46_bool == 0) goto Label_147; // 0x91 JumpB
	return 8; // 0x92 Return
	
Label_147:
	var_47_int = 0; // 0x93 PushI
	get(var_43_int, var_47_int); // 0x94 TObjFunc
	var_48_int = 0; // 0x96 PushI
	get(var_44_float, var_48_int); // 0x97 TObjFunc
	var_49_float = 6.283; // 0x99 PushF
	var_50_float = var_49_float * var_44_float; // 0x9a Mult
	var_51_float = 4.0; // 0x9b PushF
	var_45_float = var_50_float / var_50_float; // 0x9c Div2
	var_52_int = 2; // 0x9d PushI
	var_53_bool = var_43_int == var_52_int; // 0x9e Eq
	if(var_53_bool == 0) goto Label_172; // 0x9f JumpB
	var_54_string = "mail"; // 0xa0 PushS
	var_55_int = 20; // 0xa1 PushI
	var_56_int = 130; // 0xa2 PushI
	var_57_int = var_13_int - var_56_int; // 0xa3 Sub
	var_58_float = 0.5; // 0xa4 PushF
	var_59_float = 0.5; // 0xa5 PushF
	var_60_float = cos(var_45_float); // 0xa6 Cos
	var_61_float = var_59_float * var_60_float; // 0xa7 Mult
	var_62_int = var_58_float - var_61_float; // 0xa8 Sub
	Blit(var_54_string, var_55_int, var_57_int, var_62_int); // 0xa9 Func
	goto Label_216; // 0xab Jump
	
Label_216:
	return 8; // 0xd8 Return
	
Label_172:
	var_63_int = 3; // 0xac PushI
	var_64_bool = var_43_int == var_63_int; // 0xad Eq
	if(var_64_bool == 0) goto Label_187; // 0xae JumpB
	var_65_string = "diary"; // 0xaf PushS
	var_66_int = 20; // 0xb0 PushI
	var_67_int = 130; // 0xb1 PushI
	var_68_int = var_13_int - var_67_int; // 0xb2 Sub
	var_69_float = 0.5; // 0xb3 PushF
	var_70_float = 0.5; // 0xb4 PushF
	var_71_float = cos(var_45_float); // 0xb5 Cos
	var_72_float = var_70_float * var_71_float; // 0xb6 Mult
	var_73_int = var_69_float - var_72_float; // 0xb7 Sub
	Blit(var_65_string, var_66_int, var_68_int, var_73_int); // 0xb8 Func
	goto Label_216; // 0xba Jump
	
Label_187:
	var_74_int = 4; // 0xbb PushI
	var_75_bool = var_43_int == var_74_int; // 0xbc Eq
	if(var_75_bool == 0) goto Label_202; // 0xbd JumpB
	var_76_string = "rep_up"; // 0xbe PushS
	var_77_int = 20; // 0xbf PushI
	var_78_int = 100; // 0xc0 PushI
	var_79_int = var_13_int - var_78_int; // 0xc1 Sub
	var_80_float = 0.5; // 0xc2 PushF
	var_81_float = 0.5; // 0xc3 PushF
	var_82_float = cos(var_45_float); // 0xc4 Cos
	var_83_float = var_81_float * var_82_float; // 0xc5 Mult
	var_84_int = var_80_float - var_83_float; // 0xc6 Sub
	Blit(var_76_string, var_77_int, var_79_int, var_84_int); // 0xc7 Func
	goto Label_216; // 0xc9 Jump
	
Label_202:
	var_85_int = 5; // 0xca PushI
	var_86_bool = var_43_int == var_85_int; // 0xcb Eq
	if(var_86_bool == 0) goto Label_216; // 0xcc JumpB
	var_87_string = "rep_down"; // 0xcd PushS
	var_88_int = 20; // 0xce PushI
	var_89_int = 100; // 0xcf PushI
	var_90_int = var_13_int - var_89_int; // 0xd0 Sub
	var_91_float = 0.5; // 0xd1 PushF
	var_92_float = 0.5; // 0xd2 PushF
	var_93_float = cos(var_45_float); // 0xd3 Cos
	var_94_float = var_92_float * var_93_float; // 0xd4 Mult
	var_95_int = var_91_float - var_94_float; // 0xd5 Sub
	Blit(var_87_string, var_88_int, var_90_int, var_95_int); // 0xd6 Func
}


func_1105(var_21_bool)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; // 0x451 PushV
	var_26_string = "player"; // 0x452 PushS
	FindActor(var_24_object, var_26_string); // 0x453 Func
	var_27_bool = var_24_object == 0; // 0x455 Not
	if(var_27_bool == 0) goto Label_1113; // 0x456 JumpB
	var_21_bool = 0; // 0x457 MovB
	return 4; // 0x458 Return
	
Label_1113:
	IsWeaponHolstered(var_25_bool); // 0x459 ObjFunc
	var_21_bool = !var_25_bool; // 0x45b Not2
	return 4; // 0x45c Return
}


func_661(var_10_int, var_11_float, var_117_float)
{
	var_118_int = -1; // 0x296 PushI
	var_119_bool = var_10_int == var_118_int; // 0x297 Eq
	if(var_119_bool == 0) goto Label_666; // 0x298 JumpB
	return 0; // 0x299 Return
	
Label_666:
	var_11_float = var_11_float - var_117_float; // 0x29a Sub2
	var_120_int = 0; // 0x29b PushI
	var_121_bool = var_11_float <= var_120_int; // 0x29c LE
	if(var_121_bool == 0) goto Label_671; // 0x29d JumpB
	var_10_int = -1; // 0x29e TMovI
	
Label_671:
	return 0; // 0x29f Return
}


func_86()
{
	var_70_int = 0; // 0x56 PushI
	remove(var_70_int); // 0x57 TObjFunc
	return 0; // 0x59 Return
}


func_217(var_87_int, var_88_int)
{
	var_89_string = ""; var_90_string = ""; // 0xd9 PushV
	add(var_87_int); // 0xda TObjFunc
	add(var_88_int); // 0xdc TObjFunc
	var_91_float = 4.0; // 0xde PushF
	add(var_91_float); // 0xdf TObjFunc
	GetInvItemSprite(var_90_string, var_87_int); // 0xe1 Func
	LoadImage(var_90_string); // 0xe3 Func
	add(var_90_string); // 0xe5 TObjFunc
	return 2; // 0xe7 Return
}


func_90(var_115_int)
{
	var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x5a PushV
	size(var_119_int); // 0x5b TObjFunc
	var_120_int = 0; // 0x5d MovI
	
Label_94:
	var_122_bool = var_120_int < var_119_int; // 0x5e LT
	if(var_122_bool == 0) goto Label_107; // 0x5f JumpB
	get(var_121_int, var_120_int); // 0x60 TObjFunc
	var_123_bool = var_115_int == var_121_int; // 0x62 Eq
	if(var_123_bool == 0) goto Label_104; // 0x63 JumpB
	var_124_float = 4.0; // 0x64 PushF
	set(var_120_int, var_124_float); // 0x65 TObjFunc
	return 6; // 0x67 Return
	
Label_104:
	var_125_int = 1; // 0x68 PushI
	var_120_int = var_120_int + var_125_int; // 0x69 Add2
	goto Label_94; // 0x6a Jump
	
Label_107:
	add(var_115_int); // 0x6b TObjFunc
	var_126_float = 4.0; // 0x6d PushF
	add(var_126_float); // 0x6e TObjFunc
	return 6; // 0x70 Return
}


func_1118()
{
0x45e: PushEmpty(object, bool, int, object, bool, int) // 0x45e PushV
0x45f: Push("player") // 0x45f PushS
0x460: @ FindActor(Stack[-4], Stack[-1]) // 0x460 Func
0x461: Pop(1) // 0x461 Pop
0x462: Pop(0); Push((bool) Stack[-3] == 0) // 0x462 Not
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1) // 0x463 JumpB
}


func_287()
{
	var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; // 0x11f PushV
	size(var_61_int); // 0x120 TObjFunc
	var_63_bool = var_61_int == 0; // 0x122 Not
	if(var_63_bool == 0) goto Label_293; // 0x123 JumpB
	return 4; // 0x124 Return
	
Label_293:
	var_64_object = var_1_object; // 0x125 PushT
	if(var_64_object == 0) goto Label_296; // 0x126 JumpB
	return 4; // 0x127 Return
	
Label_296:
	var_65_int = 0; // 0x128 PushI
	get(var_62_int, var_65_int); // 0x129 TObjFunc
	var_66_int = 100; // 0x12b PushI
	var_67_bool = var_62_int == var_66_int; // 0x12c Eq
	if(var_67_bool == 0) goto Label_307; // 0x12d JumpB
	var_68_string = "daychange.xml"; // 0x12e PushS
	var_69_bool = 0; // 0x12f PushB
	CreateWindow(var_68_string, var_69_bool, var_69_bool); // 0x130 Func
	goto Label_311; // 0x132 Jump
	
Label_311:
	func_86(); // 0x138 NEW_2
	return 4; // 0x13a Return
	
Label_307:
	var_71_string = "daychangereal.xml"; // 0x133 PushS
	var_72_bool = 0; // 0x134 PushB
	CreateWindow(var_71_string, var_72_bool, var_72_bool); // 0x135 Func
}


func_672(var_13_int, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object)
{
	var_67_object = Obj(); var_68_int = 0; var_69_int = 0; var_70_string = ""; var_71_float = 0; var_72_object = Obj(); var_73_int = 0; var_74_int = 0; var_75_string = ""; var_76_float = 0; // 0x2a0 PushV
	CreateStringVector(var_18_object); // 0x2a1 Func
	CreateFloatVector(var_17_object); // 0x2a3 Func
	CreateFloatVector(var_16_object); // 0x2a5 Func
	CreateFloatVector(var_15_object); // 0x2a7 Func
	CreateFloatVector(var_14_object); // 0x2a9 Func
	CreateBoolVector(var_13_int); // 0x2ab Func
	var_77_string = "player"; // 0x2ad PushS
	FindActor(var_72_object, var_77_string); // 0x2ae Func
	var_78_object = var_72_object; // 0x2b0 Push
	if(var_78_object == 0) goto Label_749; // 0x2b1 JumpB
	var_79_string = "health"; // 0x2b2 PushS
	add(var_79_string); // 0x2b3 TObjFunc
	var_80_bool = 0; // 0x2b5 PushB
	add(var_80_bool); // 0x2b6 TObjFunc
	var_81_string = "hunger"; // 0x2b8 PushS
	add(var_81_string); // 0x2b9 TObjFunc
	var_82_bool = 1; // 0x2bb PushB
	add(var_82_bool); // 0x2bc TObjFunc
	var_83_string = "tiredness"; // 0x2be PushS
	add(var_83_string); // 0x2bf TObjFunc
	var_84_bool = 1; // 0x2c1 PushB
	add(var_84_bool); // 0x2c2 TObjFunc
	var_85_string = "immunity"; // 0x2c4 PushS
	add(var_85_string); // 0x2c5 TObjFunc
	var_86_bool = 0; // 0x2c7 PushB
	add(var_86_bool); // 0x2c8 TObjFunc
	var_87_string = "disease"; // 0x2ca PushS
	add(var_87_string); // 0x2cb TObjFunc
	var_88_bool = 1; // 0x2cd PushB
	add(var_88_bool); // 0x2ce TObjFunc
	var_89_string = "reputation"; // 0x2d0 PushS
	add(var_89_string); // 0x2d1 TObjFunc
	var_90_bool = 0; // 0x2d3 PushB
	add(var_90_bool); // 0x2d4 TObjFunc
	size(var_73_int); // 0x2d6 TObjFunc
	var_74_int = 0; // 0x2d8 MovI
	
Label_729:
	var_91_bool = var_74_int < var_73_int; // 0x2d9 LT
	if(var_91_bool == 0) goto Label_748; // 0x2da JumpB
	get(var_75_string, var_74_int); // 0x2db TObjFunc
	GetProperty(var_75_string, var_76_float); // 0x2dd ObjFunc
	add(var_76_float); // 0x2df TObjFunc
	add(var_76_float); // 0x2e1 TObjFunc
	var_92_int = 0; // 0x2e3 PushI
	add(var_92_int); // 0x2e4 TObjFunc
	var_93_int = 0; // 0x2e6 PushI
	add(var_93_int); // 0x2e7 TObjFunc
	var_94_int = 1; // 0x2e9 PushI
	var_74_int = var_74_int + var_94_int; // 0x2ea Add2
	goto Label_729; // 0x2eb Jump
	
Label_748:
	goto Label_752; // 0x2ec Jump
	
Label_752:
	return 10; // 0x2f0 Return
	
Label_749:
	var_95_string = "BAD PLAYER!"; // 0x2ed PushS
	Trace(var_95_string); // 0x2ee Func
}


func_607(var_114_int, var_115_int, var_116_int, var_117_float)
{
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_string = ""; var_122_int = 0; var_123_int = 0; // 0x25f PushV
	GetInvItemSprite(var_121_string, var_114_int); // 0x260 Func
	var_124_int = 40; // 0x262 PushI
	var_125_int = 60; // 0x263 PushI
	var_126_float = var_116_int * var_125_int; // 0x264 Mult
	var_122_int = var_124_int + var_126_float; // 0x265 Add2
	var_123_int = 40; // 0x266 MovI
	var_127_string = "slot"; // 0x267 PushS
	Blit(var_127_string, var_122_int, var_123_int, var_117_float); // 0x268 Func
	var_128_int = 1; // 0x26a PushI
	var_129_int = var_122_int + var_128_int; // 0x26b Add
	var_130_int = 1; // 0x26c PushI
	var_131_int = var_123_int + var_130_int; // 0x26d Add
	Blit(var_121_string, var_129_int, var_131_int, var_117_float); // 0x26e Func
	var_132_int = 1; // 0x270 PushI
	var_133_bool = var_115_int > var_132_int; // 0x271 GT
	if(var_133_bool == 0) goto Label_637; // 0x272 JumpB
	var_134_string = "default"; // 0x273 PushS
	var_135_int = 2; // 0x274 PushI
	var_136_int = var_122_int + var_135_int; // 0x275 Add
	var_137_int = 35; // 0x276 PushI
	var_138_int = var_123_int + var_137_int; // 0x277 Add
	var_139_float = 1.0; // 0x278 PushF
	var_140_float = 1.0; // 0x279 PushF
	var_141_float = 1.0; // 0x27a PushF
	Print(var_134_string, var_136_int, var_138_int, var_115_int, var_139_float, var_140_float, var_141_float, var_117_float); // 0x27b Func
	
Label_637:
	return 6; // 0x27d Return
}


func_1064(var_31_int)
{
	var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_int = 0; // 0x428 PushV
	var_36_string = "player"; // 0x429 PushS
	FindActor(var_34_object, var_36_string); // 0x42a Func
	var_37_bool = var_34_object == 0; // 0x42c Not
	if(var_37_bool == 0) goto Label_1072; // 0x42d JumpB
	var_31_int = 0; // 0x42e MovI
	return 4; // 0x42f Return
	
Label_1072:
	var_38_string = "vcharge"; // 0x430 PushS
	GetProperty(var_38_string, var_35_int); // 0x431 ObjFunc
	var_31_int = var_35_int; // 0x433 Mov
	return 4; // 0x434 Return
}


func_232(var_51_int)
{
	remove(var_51_int); // 0xe9 TObjFunc
	remove(var_51_int); // 0xeb TObjFunc
	remove(var_51_int); // 0xed TObjFunc
	return 0; // 0xef Return
}


func_872(var_12_int)
{
	var_143_float = 0; var_144_float = 0; var_145_int = 0; var_146_int = 0; var_147_string = ""; var_148_float = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_int = 0; var_160_int = 0; var_161_string = ""; var_162_float = 0; var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0; var_169_float = 0; var_170_float = 0; // 0x368 PushV
	var_157_float = 20; // 0x369 MovI
	var_158_float = 20; // 0x36a MovI
	size(var_159_int); // 0x36b TObjFunc
	var_160_int = 0; // 0x36d MovI
	
Label_878:
	var_171_bool = var_160_int < var_159_int; // 0x36e LT
	if(var_171_bool == 0) goto Label_1026; // 0x36f JumpB
	get(var_161_string, var_160_int); // 0x370 TObjFunc
	get(var_162_float, var_160_int); // 0x372 TObjFunc
	get(var_163_float, var_160_int); // 0x374 TObjFunc
	get(var_164_float, var_160_int); // 0x376 TObjFunc
	get(var_165_bool, var_160_int); // 0x378 TObjFunc
	var_172_string = "health"; // 0x37a PushS
	var_173_bool = var_161_string == var_172_string; // 0x37b Eq
	if(var_173_bool == 0) goto Label_904; // 0x37c JumpB
	var_174_float = 0.33; // 0x37d PushF
	var_175_bool = var_162_float <= var_174_float; // 0x37e LE
	if(var_175_bool == 0) goto Label_898; // 0x37f JumpB
	var_166_float = 1; // 0x380 MovI
	goto Label_903; // 0x381 Jump
	
Label_903:
	goto Label_973; // 0x387 Jump
	
Label_973:
	var_176_int = 0; // 0x3cd PushI
	var_177_bool = var_164_float > var_176_int; // 0x3ce GT
	if(var_177_bool == 0) goto Label_984; // 0x3cf JumpB
	var_178_float = 2.0; // 0x3d0 PushF
	var_179_float = var_164_float / var_178_float; // 0x3d1 Div
	var_180_float = 3.1415; // 0x3d2 PushF
	var_181_float = var_179_float * var_180_float; // 0x3d3 Mult
	var_182_int = 2; // 0x3d4 PushI
	var_183_float = var_181_float / var_182_int; // 0x3d5 Div
	var_167_float = sin(var_183_float); // 0x3d6 Sin2
	goto Label_985; // 0x3d7 Jump
	
Label_985:
	var_184_int = 1; // 0x3d9 PushI
	var_185_bool = var_167_float > var_184_int; // 0x3da GT
	if(var_185_bool == 0) goto Label_989; // 0x3db JumpB
	var_167_float = 1; // 0x3dc MovI
	
Label_989:
	var_186_int = 0; // 0x3dd PushI
	var_187_bool = var_167_float < var_186_int; // 0x3de LT
	if(var_187_bool == 0) goto Label_993; // 0x3df JumpB
	var_167_float = 0; // 0x3e0 MovI
	
Label_993:
	var_168_float = 256; // 0x3e1 MovI
	var_169_float = 64; // 0x3e2 MovI
	var_188_string = "nerv_b"; // 0x3e3 PushS
	var_189_int = var_12_int - var_168_float; // 0x3e4 Sub
	var_190_int = var_189_int - var_158_float; // 0x3e5 Sub
	var_191_int = var_12_int - var_168_float; // 0x3e6 Sub
	var_192_int = var_191_int - var_158_float; // 0x3e7 Sub
	var_193_int = 43; // 0x3e8 PushI
	BlitClipped(var_188_string, var_190_int, var_157_float, var_192_int, var_157_float, var_168_float, var_193_int, var_167_float); // 0x3e9 Func
	var_194_int = var_168_float - var_169_float; // 0x3eb Sub
	var_195_float = var_194_int * var_162_float; // 0x3ec Mult
	var_170_float = var_195_float + var_169_float; // 0x3ed Add2
	var_196_string = "nerv_r"; // 0x3ee PushS
	var_197_int = var_12_int - var_168_float; // 0x3ef Sub
	var_198_int = var_197_int - var_158_float; // 0x3f0 Sub
	var_199_int = var_12_int - var_168_float; // 0x3f1 Sub
	var_200_int = var_199_int - var_158_float; // 0x3f2 Sub
	var_201_int = 43; // 0x3f3 PushI
	BlitClipped(var_196_string, var_198_int, var_157_float, var_200_int, var_157_float, var_170_float, var_201_int, var_167_float); // 0x3f4 Func
	var_202_int = var_12_int - var_168_float; // 0x3f6 Sub
	var_203_int = var_202_int - var_158_float; // 0x3f7 Sub
	var_204_int = var_12_int - var_168_float; // 0x3f8 Sub
	var_205_int = var_204_int - var_158_float; // 0x3f9 Sub
	var_206_int = 43; // 0x3fa PushI
	BlitClipped(var_161_string, var_203_int, var_157_float, var_205_int, var_157_float, var_168_float, var_206_int, var_167_float); // 0x3fb Func
	var_207_int = 25; // 0x3fd PushI
	var_157_float = var_157_float + var_207_int; // 0x3fe Add2
	
Label_1023:
	var_208_int = 1; // 0x3ff PushI
	var_160_int = var_160_int + var_208_int; // 0x400 Add2
	goto Label_878; // 0x401 Jump
	
Label_984:
	var_167_float = var_166_float; // 0x3d8 Mov
	
Label_898:
	var_209_int = 0; // 0x382 PushI
	var_210_bool = var_164_float == var_209_int; // 0x383 Eq
	if(var_210_bool == 0) goto Label_902; // 0x384 JumpB
	goto Label_1023; // 0x385 Jump
	
Label_902:
	var_166_float = 0.2; // 0x386 MovF
	
Label_904:
	var_211_string = "immunity"; // 0x388 PushS
	var_212_bool = var_161_string == var_211_string; // 0x389 Eq
	if(var_212_bool == 0) goto Label_918; // 0x38a JumpB
	var_213_float = 0.5; // 0x38b PushF
	var_214_bool = var_162_float < var_213_float; // 0x38c LT
	if(var_214_bool == 0) goto Label_912; // 0x38d JumpB
	var_166_float = 1; // 0x38e MovI
	goto Label_917; // 0x38f Jump
	
Label_917:
	goto Label_973; // 0x395 Jump
	
Label_912:
	var_215_int = 0; // 0x390 PushI
	var_216_bool = var_164_float == var_215_int; // 0x391 Eq
	if(var_216_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_1023; // 0x393 Jump
	
Label_916:
	var_166_float = 0.2; // 0x394 MovF
	
Label_918:
	var_217_string = "tiredness"; // 0x396 PushS
	var_218_bool = var_161_string == var_217_string; // 0x397 Eq
	if(var_218_bool == 0) goto Label_932; // 0x398 JumpB
	var_219_float = 0.66; // 0x399 PushF
	var_220_bool = var_162_float >= var_219_float; // 0x39a GE
	if(var_220_bool == 0) goto Label_926; // 0x39b JumpB
	var_166_float = 1; // 0x39c MovI
	goto Label_931; // 0x39d Jump
	
Label_931:
	goto Label_973; // 0x3a3 Jump
	
Label_926:
	var_221_int = 0; // 0x39e PushI
	var_222_bool = var_164_float == var_221_int; // 0x39f Eq
	if(var_222_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_1023; // 0x3a1 Jump
	
Label_930:
	var_166_float = 0.2; // 0x3a2 MovF
	
Label_932:
	var_223_string = "hunger"; // 0x3a4 PushS
	var_224_bool = var_161_string == var_223_string; // 0x3a5 Eq
	if(var_224_bool == 0) goto Label_946; // 0x3a6 JumpB
	var_225_float = 0.66; // 0x3a7 PushF
	var_226_bool = var_162_float >= var_225_float; // 0x3a8 GE
	if(var_226_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_166_float = 1; // 0x3aa MovI
	goto Label_945; // 0x3ab Jump
	
Label_945:
	goto Label_973; // 0x3b1 Jump
	
Label_940:
	var_227_int = 0; // 0x3ac PushI
	var_228_bool = var_164_float == var_227_int; // 0x3ad Eq
	if(var_228_bool == 0) goto Label_944; // 0x3ae JumpB
	goto Label_1023; // 0x3af Jump
	
Label_944:
	var_166_float = 0.2; // 0x3b0 MovF
	
Label_946:
	var_229_string = "reputation"; // 0x3b2 PushS
	var_230_bool = var_161_string == var_229_string; // 0x3b3 Eq
	if(var_230_bool == 0) goto Label_960; // 0x3b4 JumpB
	var_231_float = 0.66; // 0x3b5 PushF
	var_232_bool = var_162_float <= var_231_float; // 0x3b6 LE
	if(var_232_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_166_float = 1; // 0x3b8 MovI
	goto Label_959; // 0x3b9 Jump
	
Label_959:
	goto Label_973; // 0x3bf Jump
	
Label_954:
	var_233_int = 0; // 0x3ba PushI
	var_234_bool = var_164_float == var_233_int; // 0x3bb Eq
	if(var_234_bool == 0) goto Label_958; // 0x3bc JumpB
	goto Label_1023; // 0x3bd Jump
	
Label_958:
	var_166_float = 0.2; // 0x3be MovF
	
Label_960:
	var_235_string = "disease"; // 0x3c0 PushS
	var_236_bool = var_161_string == var_235_string; // 0x3c1 Eq
	if(var_236_bool == 0) goto Label_973; // 0x3c2 JumpB
	var_237_float = 0.33; // 0x3c3 PushF
	var_238_bool = var_162_float >= var_237_float; // 0x3c4 GE
	if(var_238_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_166_float = 1; // 0x3c6 MovI
	goto Label_973; // 0x3c7 Jump
	
Label_968:
	var_239_int = 0; // 0x3c8 PushI
	var_240_bool = var_164_float == var_239_int; // 0x3c9 Eq
	if(var_240_bool == 0) goto Label_972; // 0x3ca JumpB
	goto Label_1023; // 0x3cb Jump
	
Label_972:
	var_166_float = 0.2; // 0x3cc MovF
	
Label_1026:
	return 28; // 0x402 Return
}


func_811(var_104_float)
{
	var_105_int = 0; var_106_int = 0; var_107_float = 0; var_108_int = 0; var_109_int = 0; var_110_float = 0; // 0x32b PushV
	size(var_108_int); // 0x32c TObjFunc
	var_109_int = 0; // 0x32e MovI
	
Label_815:
	var_111_bool = var_109_int < var_108_int; // 0x32f LT
	if(var_111_bool == 0) goto Label_832; // 0x330 JumpB
	get(var_110_float, var_109_int); // 0x331 TObjFunc
	var_112_int = 0; // 0x333 PushI
	var_113_bool = var_110_float > var_112_int; // 0x334 GT
	if(var_113_bool == 0) goto Label_823; // 0x335 JumpB
	var_110_float = var_110_float - var_104_float; // 0x336 Sub2
	
Label_823:
	var_114_int = 0; // 0x337 PushI
	var_115_bool = var_110_float < var_114_int; // 0x338 LT
	if(var_115_bool == 0) goto Label_827; // 0x339 JumpB
	var_110_float = 0; // 0x33a MovI
	
Label_827:
	set(var_109_int, var_110_float); // 0x33b TObjFunc
	var_116_int = 1; // 0x33d PushI
	var_109_int = var_109_int + var_116_int; // 0x33e Add2
	goto Label_815; // 0x33f Jump
	
Label_832:
	return 6; // 0x340 Return
}


func_240(var_33_float)
{
	var_34_int = 0; var_35_int = 0; var_36_float = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_float = 0; var_43_int = 0; var_44_int = 0; var_45_string = ""; // 0xf0 PushV
	size(var_40_int); // 0xf1 TObjFunc
	var_46_bool = var_40_int == 0; // 0xf3 Not
	if(var_46_bool == 0) goto Label_246; // 0xf4 JumpB
	return 12; // 0xf5 Return
	
Label_246:
	var_41_int = 0; // 0xf6 MovI
	
Label_247:
	var_47_bool = var_41_int < var_40_int; // 0xf7 LT
	if(var_47_bool == 0) goto Label_269; // 0xf8 JumpB
	get(var_42_float, var_41_int); // 0xf9 TObjFunc
	var_42_float = var_42_float - var_33_float; // 0xfb Sub2
	var_48_int = 0; // 0xfc PushI
	var_49_bool = var_42_float > var_48_int; // 0xfd GT
	if(var_49_bool == 0) goto Label_258; // 0xfe JumpB
	set(var_41_int, var_42_float); // 0xff TObjFunc
	goto Label_266; // 0x101 Jump
	
Label_266:
	var_50_int = 1; // 0x10a PushI
	var_41_int = var_41_int + var_50_int; // 0x10b Add2
	goto Label_247; // 0x10c Jump
	
Label_258:
	var_51_int = 0; // 0x102 PushV
	var_51_int = var_41_int; // 0x103 Mov
	func_232(var_51_int); // 0x104 NEW_2
	var_52_int = -1; // 0x106 PushI
	var_40_int = var_40_int + var_52_int; // 0x107 Add2
	var_53_int = -1; // 0x108 PushI
	var_41_int = var_41_int + var_53_int; // 0x109 Add2
	
Label_269:
	var_54_int = 0; // 0x10d PushI
	var_55_bool = var_40_int == var_54_int; // 0x10e Eq
	if(var_55_bool == 0) goto Label_286; // 0x10f JumpB
	size(var_43_int); // 0x110 TObjFunc
	var_44_int = 0; // 0x112 MovI
	
Label_275:
	var_56_bool = var_44_int < var_43_int; // 0x113 LT
	if(var_56_bool == 0) goto Label_284; // 0x114 JumpB
	get(var_45_string, var_44_int); // 0x115 TObjFunc
	ReleaseImage(var_45_string); // 0x117 Func
	var_57_int = 1; // 0x119 PushI
	var_44_int = var_44_int + var_57_int; // 0x11a Add2
	goto Label_275; // 0x11b Jump
	
Label_284:
	clear(); // 0x11c TObjFunc
	
Label_286:
	return 12; // 0x11e Return
}


func_113()
{
	var_31_int = 0; // 0x71 PushI
	remove(var_31_int); // 0x72 TObjFunc
	var_32_int = 0; // 0x74 PushI
	remove(var_32_int); // 0x75 TObjFunc
	return 0; // 0x77 Return
}


func_754(var_144_string, var_145_bool)
{
	var_146_object = Obj(); var_147_int = 0; var_148_int = 0; var_149_string = ""; var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_object = Obj(); var_155_int = 0; var_156_int = 0; var_157_string = ""; var_158_float = 0; var_159_float = 0; var_160_float = 0; var_161_float = 0; // 0x2f2 PushV
	var_162_string = "player"; // 0x2f3 PushS
	FindActor(var_154_object, var_162_string); // 0x2f4 Func
	var_163_bool = var_154_object == 0; // 0x2f6 Not
	if(var_163_bool == 0) goto Label_761; // 0x2f7 JumpB
	return 16; // 0x2f8 Return
	
Label_761:
	size(var_155_int); // 0x2f9 TObjFunc
	var_156_int = 0; // 0x2fb MovI
	
Label_764:
	var_164_bool = var_156_int < var_155_int; // 0x2fc LT
	if(var_164_bool == 0) goto Label_809; // 0x2fd JumpB
	get(var_157_string, var_156_int); // 0x2fe TObjFunc
	var_165_bool = var_157_string == var_144_string; // 0x300 Eq
	if(var_165_bool == 0) goto Label_806; // 0x301 JumpB
	get(var_158_float, var_156_int); // 0x302 TObjFunc
	GetProperty(var_157_string, var_159_float); // 0x304 ObjFunc
	var_166_bool = var_158_float == var_159_float; // 0x306 Eq
	if(var_166_bool == 0) goto Label_777; // 0x307 JumpB
	return 16; // 0x308 Return
	
Label_777:
	set(var_156_int, var_159_float); // 0x309 TObjFunc
	var_167_bool = var_145_bool; // 0x30b Push
	if(var_167_bool == 0) goto Label_805; // 0x30c JumpB
	get(var_160_float, var_156_int); // 0x30d TObjFunc
	var_168_float = 2.0; // 0x30f PushF
	set(var_156_int, var_168_float); // 0x310 TObjFunc
	var_169_float = 10.0; // 0x312 PushF
	var_170_int = var_160_float - var_159_float; // 0x313 Sub
	var_161_float = var_169_float * var_170_int; // 0x314 Mult2
	var_171_int = 0; // 0x315 PushI
	var_172_bool = var_161_float < var_171_int; // 0x316 LT
	if(var_172_bool == 0) goto Label_794; // 0x317 JumpB
	var_173_float = -1.0; // 0x318 PushF
	var_161_float = var_161_float * var_173_float; // 0x319 Mult2
	
Label_794:
	var_174_float = 0.2; // 0x31a PushF
	var_175_bool = var_161_float < var_174_float; // 0x31b LT
	if(var_175_bool == 0) goto Label_799; // 0x31c JumpB
	var_161_float = 0.2; // 0x31d MovF
	goto Label_803; // 0x31e Jump
	
Label_803:
	set(var_156_int, var_161_float); // 0x323 TObjFunc
	
Label_805:
	goto Label_809; // 0x325 Jump
	
Label_809:
	return 16; // 0x329 Return
	
Label_799:
	var_176_float = 1.0; // 0x31f PushF
	var_177_bool = var_161_float > var_176_float; // 0x320 GT
	if(var_177_bool == 0) goto Label_803; // 0x321 JumpB
	var_161_float = 1.0; // 0x322 MovF
	
Label_806:
	var_178_int = 1; // 0x326 PushI
	var_156_int = var_156_int + var_178_int; // 0x327 Add2
	goto Label_764; // 0x328 Jump
}


func_1078(var_22_bool)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; // 0x436 PushV
	var_27_string = "player"; // 0x437 PushS
	FindActor(var_25_object, var_27_string); // 0x438 Func
	var_28_bool = var_25_object == 0; // 0x43a Not
	if(var_28_bool == 0) goto Label_1086; // 0x43b JumpB
	var_22_bool = 0; // 0x43c MovB
	return 4; // 0x43d Return
	
Label_1086:
	IsVisirOn(var_26_bool); // 0x43e ObjFunc
	var_22_bool = var_26_bool; // 0x440 Mov
	return 4; // 0x441 Return
}


func_120(var_21_float)
{
	var_22_int = 0; var_23_float = 0; var_24_int = 0; var_25_float = 0; // 0x78 PushV
	size(var_24_int); // 0x79 TObjFunc
	var_26_bool = var_24_int == 0; // 0x7b Not
	if(var_26_bool == 0) goto Label_126; // 0x7c JumpB
	return 4; // 0x7d Return
	
Label_126:
	var_27_int = 0; // 0x7e PushI
	get(var_25_float, var_27_int); // 0x7f TObjFunc
	var_25_float = var_25_float - var_21_float; // 0x81 Sub2
	var_28_int = 0; // 0x82 PushI
	var_29_bool = var_25_float > var_28_int; // 0x83 GT
	if(var_29_bool == 0) goto Label_137; // 0x84 JumpB
	var_30_int = 0; // 0x85 PushI
	set(var_30_int, var_25_float); // 0x86 TObjFunc
	goto Label_140; // 0x88 Jump
	
Label_140:
	return 4; // 0x8c Return
	
Label_137:
	func_113(); // 0x8a NEW_2
}


func_315(var_10_int)
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_float = 0; var_101_float = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_float = 0; var_107_float = 0; // 0x13b PushV
	var_108_int = -1; // 0x13c PushI
	var_109_bool = var_10_int != var_108_int; // 0x13d Neq
	if(var_109_bool == 0) goto Label_320; // 0x13e JumpB
	return 12; // 0x13f Return
	
Label_320:
	size(var_102_int); // 0x140 TObjFunc
	var_110_bool = var_102_int == 0; // 0x142 Not
	if(var_110_bool == 0) goto Label_325; // 0x143 JumpB
	return 12; // 0x144 Return
	
Label_325:
	var_103_int = 0; // 0x145 MovI
	
Label_326:
	var_111_bool = var_103_int < var_102_int; // 0x146 LT
	if(var_111_bool == 0) goto Label_347; // 0x147 JumpB
	get(var_104_int, var_103_int); // 0x148 TObjFunc
	get(var_105_int, var_103_int); // 0x14a TObjFunc
	get(var_106_float, var_103_int); // 0x14c TObjFunc
	var_112_float = 4.0; // 0x14e PushF
	var_113_float = var_106_float / var_112_float; // 0x14f Div
	var_107_float = sqrt(var_113_float); // 0x150 Sqrt2
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_float = 0; // 0x151 PushV
	var_114_int = var_104_int; // 0x152 Mov
	var_115_int = var_105_int; // 0x153 Mov
	var_116_int = var_103_int; // 0x154 Mov
	var_117_float = var_107_float; // 0x155 Mov
	func_607(var_114_int, var_115_int, var_116_int, var_117_float); // 0x156 NEW_2
	var_142_int = 1; // 0x158 PushI
	var_103_int = var_103_int + var_142_int; // 0x159 Add2
	goto Label_326; // 0x15a Jump
	
Label_347:
	return 12; // 0x15b Return
}


func_638(var_10_int, var_11_float, var_14_object)
{
	var_251_string = ""; var_252_float = 0; var_253_string = ""; var_254_float = 0; // 0x27e PushV
	var_255_int = -1; // 0x27f PushI
	var_256_bool = var_10_int == var_255_int; // 0x280 Eq
	if(var_256_bool == 0) goto Label_643; // 0x281 JumpB
	return 4; // 0x282 Return
	
Label_643:
	GetStringByID(var_253_string, var_14_object); // 0x283 Func
	var_257_float = 3.14; // 0x285 PushF
	var_258_float = var_257_float * var_11_float; // 0x286 Mult
	var_259_float = 1.0; // 0x287 PushF
	var_260_float = var_258_float / var_259_float; // 0x288 Div
	var_261_float = 2.0; // 0x289 PushF
	var_262_float = var_260_float / var_261_float; // 0x28a Div
	var_254_float = sin(var_262_float); // 0x28b Sin2
	var_263_string = "help"; // 0x28c PushS
	var_264_int = 10; // 0x28d PushI
	var_265_int = 10; // 0x28e PushI
	var_266_float = 1.0; // 0x28f PushF
	var_267_float = 1.0; // 0x290 PushF
	var_268_float = 1.0; // 0x291 PushF
	Print(var_263_string, var_264_int, var_265_int, var_253_string, var_266_float, var_267_float, var_268_float, var_254_float); // 0x292 Func
	return 4; // 0x294 Return
}


