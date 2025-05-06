task_0_event_101(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0xaf PushV
	var_16_int = 267; // 0xb0 PushI
	var_17_bool = var_9_int == var_16_int; // 0xb1 Eq
	if(var_17_bool == 0) goto Label_194; // 0xb2 JumpB
	var_8_int = 1; // 0xb3 TMovI
	var_13_int = 0; // 0xb4 MovI
	
Label_181:
	var_18_int = 4; // 0xb5 PushI
	var_19_bool = var_13_int < var_18_int; // 0xb6 LT
	if(var_19_bool == 0) goto Label_194; // 0xb7 JumpB
	var_20_int = -7; // 0xb8 PushI
	var_21_string = ""; var_22_int = 0; // 0xb9 PushV
	var_22_int = var_13_int; // 0xba Mov
	func_779(var_21_string, var_22_int); // 0xbb NEW_2
	SendMessage(var_20_int, var_21_string); // 0xbd Func
	var_33_int = 1; // 0xbf PushI
	var_13_int = var_13_int + var_33_int; // 0xc0 Add2
	goto Label_181; // 0xc1 Jump
	
Label_194:
	var_34_int = 268; // 0xc2 PushI
	var_35_bool = var_9_int == var_34_int; // 0xc3 Eq
	if(var_35_bool == 0) goto Label_202; // 0xc4 JumpB
	var_8_int = 0; // 0xc5 TMovI
	var_36_int = -4; // 0xc6 PushI
	var_37_string = "ok"; // 0xc7 PushS
	SendMessage(var_36_int, var_37_string); // 0xc8 Func
	
Label_202:
	var_38_int = 269; // 0xca PushI
	var_39_bool = var_9_int == var_38_int; // 0xcb Eq
	if(var_39_bool == 0) goto Label_227; // 0xcc JumpB
	var_40_int = 1; // 0xcd PushI
	var_41_bool = var_8_int == var_40_int; // 0xce Eq
	if(var_41_bool == 0) goto Label_223; // 0xcf JumpB
	var_14_int = 0; // 0xd0 MovI
	
Label_209:
	var_42_int = 4; // 0xd1 PushI
	var_43_bool = var_14_int < var_42_int; // 0xd2 LT
	if(var_43_bool == 0) goto Label_222; // 0xd3 JumpB
	var_44_int = -2; // 0xd4 PushI
	var_45_string = ""; var_46_int = 0; // 0xd5 PushV
	var_46_int = var_14_int; // 0xd6 Mov
	func_779(var_45_string, var_46_int); // 0xd7 NEW_2
	SendMessage(var_44_int, var_45_string); // 0xd9 Func
	var_47_int = 1; // 0xdb PushI
	var_14_int = var_14_int + var_47_int; // 0xdc Add2
	goto Label_209; // 0xdd Jump
	
Label_222:
	goto Label_227; // 0xde Jump
	
Label_227:
	var_48_int = 270; // 0xe3 PushI
	var_49_bool = var_9_int == var_48_int; // 0xe4 Eq
	if(var_49_bool == 0) goto Label_252; // 0xe5 JumpB
	var_50_int = 1; // 0xe6 PushI
	var_51_bool = var_8_int == var_50_int; // 0xe7 Eq
	if(var_51_bool == 0) goto Label_248; // 0xe8 JumpB
	var_15_int = 0; // 0xe9 MovI
	
Label_234:
	var_52_int = 4; // 0xea PushI
	var_53_bool = var_15_int < var_52_int; // 0xeb LT
	if(var_53_bool == 0) goto Label_247; // 0xec JumpB
	var_54_int = -3; // 0xed PushI
	var_55_string = ""; var_56_int = 0; // 0xee PushV
	var_56_int = var_15_int; // 0xef Mov
	func_779(var_55_string, var_56_int); // 0xf0 NEW_2
	SendMessage(var_54_int, var_55_string); // 0xf2 Func
	var_57_int = 1; // 0xf4 PushI
	var_15_int = var_15_int + var_57_int; // 0xf5 Add2
	goto Label_234; // 0xf6 Jump
	
Label_247:
	goto Label_252; // 0xf7 Jump
	
Label_252:
	return 6; // 0xfc Return
	
Label_248:
	var_58_int = -4; // 0xf8 PushI
	var_59_string = "cancel"; // 0xf9 PushS
	SendMessage(var_58_int, var_59_string); // 0xfa Func
	
Label_223:
	var_60_int = -4; // 0xdf PushI
	var_61_string = "ok"; // 0xe0 PushS
	SendMessage(var_60_int, var_61_string); // 0xe1 Func
}


task_0_event_102(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0xfd PushV
	var_16_int = 272; // 0xfe PushI
	var_17_bool = var_9_int == var_16_int; // 0xff Eq
	if(var_17_bool == 0) goto Label_272; // 0x100 JumpB
	var_8_int = 1; // 0x101 TMovI
	var_13_int = 0; // 0x102 MovI
	
Label_259:
	var_18_int = 4; // 0x103 PushI
	var_19_bool = var_13_int < var_18_int; // 0x104 LT
	if(var_19_bool == 0) goto Label_272; // 0x105 JumpB
	var_20_int = -7; // 0x106 PushI
	var_21_string = ""; var_22_int = 0; // 0x107 PushV
	var_22_int = var_13_int; // 0x108 Mov
	func_779(var_21_string, var_22_int); // 0x109 NEW_2
	SendMessage(var_20_int, var_21_string); // 0x10b Func
	var_33_int = 1; // 0x10d PushI
	var_13_int = var_13_int + var_33_int; // 0x10e Add2
	goto Label_259; // 0x10f Jump
	
Label_272:
	var_34_int = 274; // 0x110 PushI
	var_35_bool = var_9_int == var_34_int; // 0x111 Eq
	if(var_35_bool == 0) goto Label_280; // 0x112 JumpB
	var_8_int = 0; // 0x113 TMovI
	var_36_int = -4; // 0x114 PushI
	var_37_string = "ok"; // 0x115 PushS
	SendMessage(var_36_int, var_37_string); // 0x116 Func
	
Label_280:
	var_38_int = 273; // 0x118 PushI
	var_39_bool = var_9_int == var_38_int; // 0x119 Eq
	if(var_39_bool == 0) goto Label_305; // 0x11a JumpB
	var_40_int = 1; // 0x11b PushI
	var_41_bool = var_8_int == var_40_int; // 0x11c Eq
	if(var_41_bool == 0) goto Label_301; // 0x11d JumpB
	var_14_int = 0; // 0x11e MovI
	
Label_287:
	var_42_int = 4; // 0x11f PushI
	var_43_bool = var_14_int < var_42_int; // 0x120 LT
	if(var_43_bool == 0) goto Label_300; // 0x121 JumpB
	var_44_int = -2; // 0x122 PushI
	var_45_string = ""; var_46_int = 0; // 0x123 PushV
	var_46_int = var_14_int; // 0x124 Mov
	func_779(var_45_string, var_46_int); // 0x125 NEW_2
	SendMessage(var_44_int, var_45_string); // 0x127 Func
	var_47_int = 1; // 0x129 PushI
	var_14_int = var_14_int + var_47_int; // 0x12a Add2
	goto Label_287; // 0x12b Jump
	
Label_300:
	goto Label_305; // 0x12c Jump
	
Label_305:
	var_48_int = 271; // 0x131 PushI
	var_49_bool = var_9_int == var_48_int; // 0x132 Eq
	if(var_49_bool == 0) goto Label_330; // 0x133 JumpB
	var_50_int = 1; // 0x134 PushI
	var_51_bool = var_8_int == var_50_int; // 0x135 Eq
	if(var_51_bool == 0) goto Label_326; // 0x136 JumpB
	var_15_int = 0; // 0x137 MovI
	
Label_312:
	var_52_int = 4; // 0x138 PushI
	var_53_bool = var_15_int < var_52_int; // 0x139 LT
	if(var_53_bool == 0) goto Label_325; // 0x13a JumpB
	var_54_int = -3; // 0x13b PushI
	var_55_string = ""; var_56_int = 0; // 0x13c PushV
	var_56_int = var_15_int; // 0x13d Mov
	func_779(var_55_string, var_56_int); // 0x13e NEW_2
	SendMessage(var_54_int, var_55_string); // 0x140 Func
	var_57_int = 1; // 0x142 PushI
	var_15_int = var_15_int + var_57_int; // 0x143 Add2
	goto Label_312; // 0x144 Jump
	
Label_325:
	goto Label_330; // 0x145 Jump
	
Label_330:
	return 6; // 0x14a Return
	
Label_326:
	var_58_int = -4; // 0x146 PushI
	var_59_string = "cancel"; // 0x147 PushS
	SendMessage(var_58_int, var_59_string); // 0x148 Func
	
Label_301:
	var_60_int = -4; // 0x12d PushI
	var_61_string = "ok"; // 0x12e PushS
	SendMessage(var_60_int, var_61_string); // 0x12f Func
}


task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int)
{
	DestroyWindow(); // 0x14c Func
	return 0; // 0x14e Return
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float)
{
	var_12_int = 0; // 0x150 PushI
	var_13_bool = var_11_float > var_12_int; // 0x151 GT
	if(var_13_bool == 0) goto Label_341; // 0x152 JumpB
	var_11_float = 1; // 0x153 MovI
	goto Label_345; // 0x154 Jump
	
Label_345:
	var_7_int = var_7_int + var_11_float; // 0x159 Add2
	var_14_int = 0; // 0x15a PushI
	var_15_bool = var_7_int < var_14_int; // 0x15b LT
	if(var_15_bool == 0) goto Label_350; // 0x15c JumpB
	var_7_int = 0; // 0x15d TMovI
	
Label_350:
	func_387(var_11_float); // 0x15f NEW_2
	func_416(var_11_float); // 0x162 NEW_2
	return 0; // 0x164 Return
	
Label_341:
	var_74_int = 0; // 0x155 PushI
	var_75_bool = var_11_float < var_74_int; // 0x156 LT
	if(var_75_bool == 0) goto Label_345; // 0x157 JumpB
	var_11_float = -1; // 0x158 MovI
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int, var_10_string, var_11_object)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; // 0x1d6 PushV
	var_18_int = -4; // 0x1d7 PushI
	var_19_bool = var_9_int == var_18_int; // 0x1d8 Eq
	if(var_19_bool == 0) goto Label_516; // 0x1d9 JumpB
	var_20_string = ""; var_21_int = 0; // 0x1da PushV
	var_21_int = 0; // 0x1db MovI
	func_779(var_20_string, var_21_int); // 0x1dc NEW_2
	var_32_bool = var_10_string == var_20_string; // 0x1de Eq
	if(var_32_bool == 0) goto Label_492; // 0x1df JumpB
	var_33_int = 0; // 0x1e0 PushI
	var_34_bool = var_7_int > var_33_int; // 0x1e1 GT
	if(var_34_bool == 0) goto Label_491; // 0x1e2 JumpB
	var_35_int = -1; // 0x1e3 PushI
	var_7_int = var_7_int + var_35_int; // 0x1e4 Add2
	func_416(var_17_int); // 0x1e6 NEW_2
	func_387(var_17_int); // 0x1e9 NEW_2
	
Label_491:
	goto Label_512; // 0x1eb Jump
	
Label_512:
	var_84_int = -4; // 0x200 PushI
	SendMessage(var_84_int, var_10_string); // 0x201 Func
	return 6; // 0x203 Return
	
Label_492:
	var_85_string = ""; var_86_int = 0; // 0x1ec PushV
	var_86_int = 3; // 0x1ed MovI
	func_779(var_85_string, var_86_int); // 0x1ee NEW_2
	var_87_bool = var_10_string == var_85_string; // 0x1f0 Eq
	if(var_87_bool == 0) goto Label_512; // 0x1f1 JumpB
	size(var_15_int); // 0x1f2 TObjFunc
	var_88_int = 4; // 0x1f4 PushI
	var_89_int = var_7_int + var_88_int; // 0x1f5 Add
	var_90_bool = var_89_int <= var_15_int; // 0x1f6 LE
	if(var_90_bool == 0) goto Label_512; // 0x1f7 JumpB
	var_91_int = 1; // 0x1f8 PushI
	var_7_int = var_7_int + var_91_int; // 0x1f9 Add2
	func_416(var_17_int); // 0x1fb NEW_2
	func_387(var_17_int); // 0x1fe NEW_2
	
Label_516:
	var_92_int = -12; // 0x204 PushI
	var_93_bool = var_9_int == var_92_int; // 0x205 Eq
	if(var_93_bool == 0) goto Label_521; // 0x206 JumpB
	var_8_int = 0; // 0x207 TMovI
	return 6; // 0x208 Return
	
Label_521:
	var_94_int = -8; // 0x209 PushI
	var_95_bool = var_9_int == var_94_int; // 0x20a Eq
	if(var_95_bool == 0) goto Label_526; // 0x20b JumpB
	var_8_int = 1; // 0x20c TMovI
	return 6; // 0x20d Return
	
Label_526:
	var_96_int = 0; // 0x20e PushI
	var_97_bool = var_9_int < var_96_int; // 0x20f LT
	if(var_97_bool == 0) goto Label_530; // 0x210 JumpB
	return 6; // 0x211 Return
	
Label_530:
	var_98_string = "ok"; // 0x212 PushS
	var_99_bool = var_10_string == var_98_string; // 0x213 Eq
	if(var_99_bool == 0) goto Label_537; // 0x214 JumpB
	func_685(); // 0x216 NEW_2
	goto Label_591; // 0x218 Jump
	
Label_591:
	return 6; // 0x24f Return
	
Label_537:
	var_182_string = "cancel"; // 0x219 PushS
	var_183_bool = var_10_string == var_182_string; // 0x21a Eq
	if(var_183_bool == 0) goto Label_544; // 0x21b JumpB
	func_707(); // 0x21d NEW_2
	goto Label_591; // 0x21f Jump
	
Label_544:
	var_195_string = "scrollbar"; // 0x220 PushS
	var_196_bool = var_10_string == var_195_string; // 0x221 Eq
	if(var_196_bool == 0) goto Label_567; // 0x222 JumpB
	size(var_16_int); // 0x223 TObjFunc
	var_197_float = 0.01; // 0x225 PushF
	var_198_int = 4; // 0x226 PushI
	var_199_int = var_16_int - var_198_int; // 0x227 Sub
	var_200_float = var_197_float * var_199_int; // 0x228 Mult
	var_201_float = var_200_float * var_9_int; // 0x229 Mult
	var_202_float = 0.5; // 0x22a PushF
	var_7_int = var_201_float + var_202_float; // 0x22b Add2
	var_203_int = 0; // 0x22c PushI
	var_204_bool = var_7_int < var_203_int; // 0x22d LT
	if(var_204_bool == 0) goto Label_560; // 0x22e JumpB
	var_7_int = 0; // 0x22f TMovI
	
Label_560:
	func_387(var_17_int); // 0x231 NEW_2
	func_416(var_17_int); // 0x234 NEW_2
	goto Label_591; // 0x236 Jump
	
Label_567:
	var_205_int = 0; var_206_int = 0; var_207_string = ""; // 0x237 PushV
	var_206_int = var_9_int; // 0x238 Mov
	var_207_string = var_10_string; // 0x239 Mov
	func_800(var_206_int, var_207_string); // 0x23a NEW_2
	var_17_int = var_205_int; // 0x23b Mov
	var_216_int = -1; // 0x23d PushI
	var_217_bool = var_17_int != var_216_int; // 0x23e Neq
	if(var_217_bool == 0) goto Label_591; // 0x23f JumpB
	var_218_int = 0; // 0x240 PushI
	var_219_bool = var_9_int == var_218_int; // 0x241 Eq
	if(var_219_bool == 0) goto Label_584; // 0x242 JumpB
	var_220_int = 0; // 0x243 PushV
	var_220_int = var_17_int + var_7_int; // 0x244 Add2
	func_726(var_220_int); // 0x245 NEW_2
	goto Label_591; // 0x247 Jump
	
Label_584:
	var_232_int = 1; // 0x248 PushI
	var_233_bool = var_9_int == var_232_int; // 0x249 Eq
	if(var_233_bool == 0) goto Label_591; // 0x24a JumpB
	var_234_int = 0; // 0x24b PushV
	var_234_int = var_17_int + var_7_int; // 0x24c Add2
	func_753(var_234_int); // 0x24d NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_int = 0; var_14_object = Obj(); var_15_string = ""; var_16_string = ""; // 0x0 PushV
	var_17_string = "default"; // 0x1 PushS
	SetCursor(var_17_string); // 0x2 Func
	ShowCursor(); // 0x4 Func
	CaptureKeyboard(); // 0x6 Func
	var_18_bool = 0; // 0x8 PushB
	SetOwnerDraw(var_18_bool); // 0x9 Func
	GetWindowData(var_12_string); // 0xb Func
	var_19_bool = var_5_object == 0; // 0xd Not
	if(var_19_bool == 0) goto Label_18; // 0xe JumpB
	DestroyWindow(); // 0xf Func
	return 8; // 0x11 Return
	
Label_18:
	var_20_string = "agony"; // 0x12 PushS
	GetProperty(var_20_string, var_12_string); // 0x13 TObjFunc
	func_113(var_15_string, var_16_string); // 0x16 NEW_2
	var_8_int = 1; // 0x18 TMovI
	var_13_int = 0; // 0x19 MovI
	
Label_26:
	var_62_int = 4; // 0x1a PushI
	var_63_bool = var_13_int < var_62_int; // 0x1b LT
	if(var_63_bool == 0) goto Label_72; // 0x1c JumpB
	CreateStringVector(var_14_object); // 0x1d Func
	var_64_int = 1; // 0x1f PushI
	var_65_int = var_13_int - var_64_int; // 0x20 Sub
	var_66_int = 0; // 0x21 PushI
	var_67_bool = var_65_int >= var_66_int; // 0x22 GE
	if(var_67_bool == 0) goto Label_43; // 0x23 JumpB
	var_68_string = ""; var_69_int = 0; // 0x24 PushV
	var_70_int = 1; // 0x25 PushI
	var_69_int = var_13_int - var_70_int; // 0x26 Sub2
	func_779(var_68_string, var_69_int); // 0x27 NEW_2
	var_15_string = var_68_string; // 0x28 Mov
	goto Label_44; // 0x2a Jump
	
Label_44:
	var_81_int = 1; // 0x2c PushI
	var_82_int = var_13_int + var_81_int; // 0x2d Add
	var_83_int = 4; // 0x2e PushI
	var_84_bool = var_82_int < var_83_int; // 0x2f LT
	if(var_84_bool == 0) goto Label_56; // 0x30 JumpB
	var_85_string = ""; var_86_int = 0; // 0x31 PushV
	var_87_int = 1; // 0x32 PushI
	var_86_int = var_13_int + var_87_int; // 0x33 Add2
	func_779(var_85_string, var_86_int); // 0x34 NEW_2
	var_16_string = var_85_string; // 0x35 Mov
	goto Label_57; // 0x37 Jump
	
Label_57:
	add(var_15_string); // 0x39 ObjFunc
	add(var_16_string); // 0x3b ObjFunc
	var_88_int = -1; // 0x3d PushI
	var_89_string = ""; var_90_int = 0; // 0x3e PushV
	var_90_int = var_13_int; // 0x3f Mov
	func_779(var_89_string, var_90_int); // 0x40 NEW_2
	SendMessage(var_88_int, var_89_string, var_14_object); // 0x42 Func
	var_14_object = 0; // 0x44 SetNull
	var_91_int = 1; // 0x45 PushI
	var_13_int = var_13_int + var_91_int; // 0x46 Add2
	goto Label_26; // 0x47 Jump
	
Label_56:
	var_16_string = "$parent"; // 0x38 MovS
	
Label_43:
	var_15_string = "$parent"; // 0x2b MovS
	
Label_72:
	var_92_int = -6; // 0x48 PushI
	var_93_string = ""; var_94_int = 0; // 0x49 PushV
	var_94_int = 0; // 0x4a MovI
	func_779(var_93_string, var_94_int); // 0x4b NEW_2
	SendMessage(var_92_int, var_93_string); // 0x4d Func
	func_387(var_16_string); // 0x50 NEW_2
	func_416(var_16_string); // 0x53 NEW_2
	func_378(); // 0x56 NEW_2
	ProcessEvents(); // 0x58 Func
	return 8; // 0x5a Return
}


func_416(var_7_int)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_object = Obj(); var_122_int = 0; var_123_int = 0; // 0x1a0 PushV
	size(var_119_int); // 0x1a1 TObjFunc
	var_120_int = var_7_int; // 0x1a3 MovT
	
Label_420:
	var_124_int = 4; // 0x1a4 PushI
	var_125_int = var_124_int + var_7_int; // 0x1a5 Add
	var_126_bool = var_120_int < var_125_int; // 0x1a6 LT
	if(var_126_bool == 0) goto Label_469; // 0x1a7 JumpB
	var_127_bool = var_120_int < var_119_int; // 0x1a8 LT
	if(var_127_bool == 0) goto Label_459; // 0x1a9 JumpB
	get(var_121_object, var_120_int); // 0x1aa TObjFunc
	get(var_122_int, var_120_int); // 0x1ac TObjFunc
	get(var_123_int, var_120_int); // 0x1ae TObjFunc
	var_128_int = var_122_int; // 0x1b0 Push
	if(var_128_int == 0) goto Label_442; // 0x1b1 JumpB
	var_129_int = 16384; // 0x1b2 PushI
	var_130_string = ""; var_131_int = 0; // 0x1b3 PushV
	var_131_int = var_120_int - var_7_int; // 0x1b4 Sub2
	func_779(var_130_string, var_131_int); // 0x1b5 NEW_2
	SendMessage(var_129_int, var_130_string, var_121_object); // 0x1b7 Func
	goto Label_449; // 0x1b9 Jump
	
Label_449:
	var_132_int = 65536; // 0x1c1 PushI
	var_133_int = var_122_int | var_132_int; // 0x1c2 Or
	var_134_string = ""; var_135_int = 0; // 0x1c3 PushV
	var_135_int = var_120_int - var_7_int; // 0x1c4 Sub2
	func_779(var_134_string, var_135_int); // 0x1c5 NEW_2
	SendMessage(var_133_int, var_134_string); // 0x1c7 Func
	var_121_object = 0; // 0x1c9 SetNull
	goto Label_466; // 0x1ca Jump
	
Label_466:
	var_136_int = 1; // 0x1d2 PushI
	var_120_int = var_120_int + var_136_int; // 0x1d3 Add2
	goto Label_420; // 0x1d4 Jump
	
Label_442:
	var_137_int = 0; // 0x1ba PushI
	var_138_string = ""; var_139_int = 0; // 0x1bb PushV
	var_139_int = var_120_int - var_7_int; // 0x1bc Sub2
	func_779(var_138_string, var_139_int); // 0x1bd NEW_2
	SendMessage(var_137_int, var_138_string, var_121_object); // 0x1bf Func
	
Label_459:
	var_140_int = 32768; // 0x1cb PushI
	var_141_string = ""; var_142_int = 0; // 0x1cc PushV
	var_142_int = var_120_int - var_7_int; // 0x1cd Sub2
	func_779(var_141_string, var_142_int); // 0x1ce NEW_2
	SendMessage(var_140_int, var_141_string); // 0x1d0 Func
	
Label_469:
	return 10; // 0x1d5 Return
}


func_800(var_205_int, var_207_string)
{
	var_208_int = 0; var_209_int = 0; // 0x320 PushV
	var_209_int = 0; // 0x321 MovI
	
Label_802:
	var_210_int = 4; // 0x322 PushI
	var_211_bool = var_209_int < var_210_int; // 0x323 LT
	if(var_211_bool == 0) goto Label_816; // 0x324 JumpB
	var_212_string = ""; var_213_int = 0; // 0x325 PushV
	var_213_int = var_209_int; // 0x326 Mov
	func_779(var_212_string, var_213_int); // 0x327 NEW_2
	var_214_bool = var_207_string == var_212_string; // 0x329 Eq
	if(var_214_bool == 0) goto Label_813; // 0x32a JumpB
	var_205_int = var_209_int; // 0x32b Mov
	return 2; // 0x32c Return
	
Label_813:
	var_215_int = 1; // 0x32d PushI
	var_209_int = var_209_int + var_215_int; // 0x32e Add2
	goto Label_802; // 0x32f Jump
	
Label_816:
	var_205_int = -1; // 0x330 MovI
	return 2; // 0x331 Return
}


func_387(var_7_int)
{
	var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x183 PushV
	size(var_97_int); // 0x184 TObjFunc
	var_99_int = 4; // 0x186 PushI
	var_100_bool = var_97_int <= var_99_int; // 0x187 LE
	if(var_100_bool == 0) goto Label_399; // 0x188 JumpB
	var_101_int = 16384; // 0x189 PushI
	var_102_string = "scrollbar"; // 0x18a PushS
	SendMessage(var_101_int, var_102_string); // 0x18b Func
	var_7_int = 0; // 0x18d TMovI
	goto Label_415; // 0x18e Jump
	
Label_415:
	return 4; // 0x19f Return
	
Label_399:
	var_103_int = 4; // 0x18f PushI
	var_104_int = var_7_int + var_103_int; // 0x190 Add
	var_105_bool = var_104_int > var_97_int; // 0x191 GT
	if(var_105_bool == 0) goto Label_415; // 0x192 JumpB
	var_106_int = 4; // 0x193 PushI
	var_107_int = var_7_int + var_106_int; // 0x194 Add
	var_108_int = var_107_int - var_97_int; // 0x195 Sub
	var_7_int = var_7_int - var_108_int; // 0x196 Sub2
	var_109_int = 100; // 0x197 PushI
	var_110_float = var_7_int * var_109_int; // 0x198 Mult
	var_111_int = 4; // 0x199 PushI
	var_112_int = var_97_int - var_111_int; // 0x19a Sub
	var_98_int = var_110_float / var_110_float; // 0x19b Div2
	var_113_string = "scrollbar"; // 0x19c PushS
	SendMessage(var_98_int, var_113_string); // 0x19d Func
}


func_707()
{
	var_184_int = 0; var_185_int = 0; var_186_int = 0; var_187_int = 0; // 0x2c3 PushV
	size(var_186_int); // 0x2c4 TObjFunc
	var_187_int = 0; // 0x2c6 MovI
	
Label_711:
	var_188_bool = var_187_int < var_186_int; // 0x2c7 LT
	if(var_188_bool == 0) goto Label_719; // 0x2c8 JumpB
	var_189_int = 0; // 0x2c9 PushI
	set(var_187_int, var_189_int); // 0x2ca TObjFunc
	var_190_int = 1; // 0x2cc PushI
	var_187_int = var_187_int + var_190_int; // 0x2cd Add2
	goto Label_711; // 0x2ce Jump
	
Label_719:
	func_416(var_187_int); // 0x2d0 NEW_2
	func_378(); // 0x2d3 NEW_2
	return 4; // 0x2d5 Return
}


func_357(var_6_float, var_144_float)
{
	var_145_float = 0; var_146_int = 0; var_147_int = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_int = 0; var_154_object = Obj(); var_155_float = 0; var_156_int = 0; // 0x165 PushV
	var_151_float = var_6_float; // 0x166 MovT
	size(var_152_int); // 0x167 TObjFunc
	var_153_int = 0; // 0x169 MovI
	
Label_362:
	var_157_bool = var_153_int < var_152_int; // 0x16a LT
	if(var_157_bool == 0) goto Label_376; // 0x16b JumpB
	get(var_154_object, var_153_int); // 0x16c TObjFunc
	get(var_155_float, var_153_int); // 0x16e TObjFunc
	get(var_156_int, var_153_int); // 0x170 TObjFunc
	var_158_float = var_156_int * var_155_float; // 0x172 Mult
	var_151_float = var_151_float - var_158_float; // 0x173 Sub2
	var_154_object = 0; // 0x174 SetNull
	var_159_int = 1; // 0x175 PushI
	var_153_int = var_153_int + var_159_int; // 0x176 Add2
	goto Label_362; // 0x177 Jump
	
Label_376:
	var_144_float = var_151_float; // 0x178 Mov
	return 12; // 0x179 Return
}


func_91(var_47_bool, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_int = 0; var_54_object = Obj(); // 0x5b PushV
	size(var_52_int); // 0x5c TObjFunc
	var_53_int = 0; // 0x5e MovI
	
Label_95:
	var_55_bool = var_53_int < var_52_int; // 0x5f LT
	if(var_55_bool == 0) goto Label_111; // 0x60 JumpB
	get(var_54_object, var_53_int); // 0x61 TObjFunc
	var_56_int = 0; var_57_object = Obj(); // 0x63 PushV
	var_57_object = var_54_object; // 0x64 Mov
	func_795(var_57_object); // 0x65 NEW_2
	var_58_bool = var_56_int == var_48_int; // 0x67 Eq
	if(var_58_bool == 0) goto Label_107; // 0x68 JumpB
	var_47_bool = 1; // 0x69 MovB
	return 6; // 0x6a Return
	
Label_107:
	var_54_object = 0; // 0x6b SetNull
	var_59_int = 1; // 0x6c PushI
	var_53_int = var_53_int + var_59_int; // 0x6d Add2
	goto Label_95; // 0x6e Jump
	
Label_111:
	var_47_bool = 0; // 0x6f MovB
	return 6; // 0x70 Return
}


func_779(var_68_string, var_69_int)
{
	var_71_int = 1; // 0x30c PushI
	var_72_int = var_69_int + var_71_int; // 0x30d Add
	var_73_int = 10; // 0x30e PushI
	var_74_bool = var_72_int < var_73_int; // 0x30f LT
	if(var_74_bool == 0) goto Label_790; // 0x310 JumpB
	var_75_string = "slot0"; // 0x311 PushS
	var_76_int = 1; // 0x312 PushI
	var_77_int = var_69_int + var_76_int; // 0x313 Add
	var_68_string = var_75_string + var_77_int; // 0x314 Add2
	return 0; // 0x315 Return
	
Label_790:
	var_78_string = "slot"; // 0x316 PushS
	var_79_int = 1; // 0x317 PushI
	var_80_int = var_69_int + var_79_int; // 0x318 Add
	var_68_string = var_78_string + var_80_int; // 0x319 Add2
	return 0; // 0x31a Return
}


func_685()
{
	var_100_float = 0; var_101_float = 0; // 0x2ad PushV
	var_102_float = 0; // 0x2ae PushV
	func_357(var_101_float, var_102_float); // 0x2af NEW_2
	var_101_float = var_102_float; // 0x2b0 Mov
	var_118_float = 0.001; // 0x2b2 PushF
	var_119_bool = var_101_float < var_118_float; // 0x2b3 LT
	if(var_119_bool == 0) goto Label_694; // 0x2b4 JumpB
	var_101_float = 0; // 0x2b5 MovI
	
Label_694:
	var_120_string = "Do "; // 0x2b6 PushS
	var_121_int = var_120_string + var_101_float; // 0x2b7 Add
	Trace(var_121_int); // 0x2b8 Func
	var_122_string = "agony"; // 0x2ba PushS
	SetProperty(var_122_string, var_101_float); // 0x2bb TObjFunc
	func_654(); // 0x2be NEW_2
	DestroyWindow(); // 0x2c0 Func
	return 2; // 0x2c2 Return
}


func_654()
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_object = Obj(); var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0; // 0x28e PushV
	size(var_128_int); // 0x28f TObjFunc
	var_129_int = 0; // 0x291 MovI
	
Label_658:
	var_133_bool = var_129_int < var_128_int; // 0x292 LT
	if(var_133_bool == 0) goto Label_684; // 0x293 JumpB
	get(var_130_int, var_129_int); // 0x294 TObjFunc
	var_134_int = var_130_int; // 0x296 Push
	if(var_134_int == 0) goto Label_681; // 0x297 JumpB
	get(var_131_object, var_129_int); // 0x298 TObjFunc
	var_132_int = 0; // 0x29a MovI
	
Label_667:
	var_135_bool = var_132_int < var_130_int; // 0x29b LT
	if(var_135_bool == 0) goto Label_680; // 0x29c JumpB
	var_136_int = 0; // 0x29d PushV
	var_137_int = 0; var_138_object = Obj(); // 0x29e PushV
	var_138_object = var_131_object; // 0x29f Mov
	func_795(var_138_object); // 0x2a0 NEW_2
	var_136_int = var_137_int; // 0x2a1 Mov
	func_592(var_136_int); // 0x2a3 NEW_2
	var_180_int = 1; // 0x2a5 PushI
	var_132_int = var_132_int + var_180_int; // 0x2a6 Add2
	goto Label_667; // 0x2a7 Jump
	
Label_680:
	var_131_object = 0; // 0x2a8 SetNull
	
Label_681:
	var_181_int = 1; // 0x2a9 PushI
	var_129_int = var_129_int + var_181_int; // 0x2aa Add2
	goto Label_658; // 0x2ab Jump
	
Label_684:
	return 10; // 0x2ac Return
}


func_592(var_136_int)
{
	var_141_int = 0; var_142_int = 0; var_143_float = 0; var_144_int = 0; var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_float = 0; var_149_int = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_object = Obj(); var_154_int = 0; var_155_bool = 0; var_156_float = 0; // 0x250 PushV
	var_157_int = 2; // 0x251 PushI
	GetItemCount(var_149_int, var_157_int); // 0x252 TObjFunc
	var_150_int = -1; // 0x254 MovI
	var_152_int = 0; // 0x255 MovI
	
Label_598:
	var_158_bool = var_152_int < var_149_int; // 0x256 LT
	if(var_158_bool == 0) goto Label_646; // 0x257 JumpB
	var_159_int = 2; // 0x258 PushI
	GetItem(var_153_object, var_152_int, var_159_int); // 0x259 TObjFunc
	var_160_int = 0; var_161_object = Obj(); // 0x25b PushV
	var_161_object = var_153_object; // 0x25c Mov
	func_795(var_161_object); // 0x25d NEW_2
	var_154_int = var_160_int; // 0x25e Mov
	var_162_bool = var_154_int == var_136_int; // 0x260 Eq
	if(var_162_bool == 0) goto Label_642; // 0x261 JumpB
	var_163_string = "disease"; // 0x262 PushS
	HasProperty(var_155_bool, var_163_string); // 0x263 ObjFunc
	var_164_bool = var_155_bool == 0; // 0x265 Not
	if(var_164_bool == 0) goto Label_628; // 0x266 JumpB
	var_165_bool = 0; // 0x267 PushV
	var_165_bool = 1; // 0x268 MovB
	var_166_int = -1; // 0x269 PushI
	var_167_bool = var_150_int == var_166_int; // 0x26a Eq
	if(var_167_bool == 0) goto Label_624; // 0x26b JumpB
	var_168_int = 0; // 0x26c PushI
	var_169_bool = var_151_float > var_168_int; // 0x26d GT
	if(var_169_bool == 0) goto Label_624; // 0x26e JumpB
	var_165_bool = 0; // 0x26f MovB
	
Label_624:
	if(var_165_bool == 0) goto Label_627; // 0x270 JumpB
	var_150_int = var_152_int; // 0x271 Mov
	var_151_float = 0; // 0x272 MovI
	
Label_627:
	goto Label_642; // 0x273 Jump
	
Label_642:
	var_153_object = 0; // 0x282 SetNull
	var_170_int = 1; // 0x283 PushI
	var_152_int = var_152_int + var_170_int; // 0x284 Add2
	goto Label_598; // 0x285 Jump
	
Label_628:
	var_171_string = "disease"; // 0x274 PushS
	GetProperty(var_156_float, var_171_string); // 0x275 ObjFunc
	var_172_bool = 0; // 0x277 PushV
	var_172_bool = 1; // 0x278 MovB
	var_173_int = -1; // 0x279 PushI
	var_174_bool = var_150_int == var_173_int; // 0x27a Eq
	if(var_174_bool == 0) goto Label_639; // 0x27b JumpB
	var_175_bool = var_156_float < var_151_float; // 0x27c LT
	if(var_175_bool == 0) goto Label_639; // 0x27d JumpB
	var_172_bool = 0; // 0x27e MovB
	
Label_639:
	if(var_172_bool == 0) goto Label_642; // 0x27f JumpB
	var_150_int = var_152_int; // 0x280 Mov
	var_151_float = var_156_float; // 0x281 Mov
	
Label_646:
	var_176_int = -1; // 0x286 PushI
	var_177_bool = var_150_int != var_176_int; // 0x287 Neq
	if(var_177_bool == 0) goto Label_653; // 0x288 JumpB
	var_178_int = 1; // 0x289 PushI
	var_179_int = 2; // 0x28a PushI
	RemoveItem(var_150_int, var_178_int, var_179_int); // 0x28b TObjFunc
	
Label_653:
	return 16; // 0x28d Return
}


func_113(var_0_object, var_2_object)
{
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_int = 0; // 0x71 PushV
	CreateObjectVector(var_0_object); // 0x72 Func
	CreateFloatVector(var_34_int); // 0x74 Func
	CreateIntVector(var_32_bool); // 0x76 Func
	CreateIntVector(var_31_int); // 0x78 Func
	var_35_string = "player"; // 0x7a PushS
	FindActor(var_34_int, var_35_string); // 0x7b Func
	var_36_bool = var_2_object == 0; // 0x7d Not
	if(var_36_bool == 0) goto Label_130; // 0x7e JumpB
	DestroyWindow(); // 0x7f Func
	return 14; // 0x81 Return
	
Label_130:
	var_37_int = 2; // 0x82 PushI
	GetItemCount(var_28_int, var_37_int); // 0x83 TObjFunc
	var_29_int = 0; // 0x85 MovI
	
Label_134:
	var_38_bool = var_29_int < var_28_int; // 0x86 LT
	if(var_38_bool == 0) goto Label_174; // 0x87 JumpB
	var_39_int = 2; // 0x88 PushI
	GetItem(var_30_object, var_29_int, var_39_int); // 0x89 TObjFunc
	var_40_int = 0; var_41_object = Obj(); // 0x8b PushV
	var_41_object = var_30_object; // 0x8c Mov
	func_795(var_41_object); // 0x8d NEW_2
	var_31_int = var_40_int; // 0x8e Mov
	var_44_string = "Agony"; // 0x90 PushS
	HasInvItemProperty(var_32_bool, var_31_int, var_44_string); // 0x91 Func
	var_45_bool = var_32_bool == 0; // 0x93 Not
	if(var_45_bool == 0) goto Label_150; // 0x94 JumpB
	goto Label_171; // 0x95 Jump
	
Label_171:
	var_46_int = 1; // 0xab PushI
	var_29_int = var_29_int + var_46_int; // 0xac Add2
	goto Label_134; // 0xad Jump
	
Label_150:
	var_47_bool = 0; var_48_int = 0; // 0x96 PushV
	var_48_int = var_31_int; // 0x97 Mov
	func_91(var_47_bool, var_48_int); // 0x98 NEW_2
	if(var_47_bool == 0) goto Label_156; // 0x9a JumpB
	goto Label_171; // 0x9b Jump
	
Label_156:
	var_60_string = "Agony"; // 0x9c PushS
	GetInvItemProperty(var_33_float, var_31_int, var_60_string); // 0x9d Func
	GetItemCountOfType(var_34_int, var_31_int); // 0x9f TObjFunc
	add(var_30_object); // 0xa1 TObjFunc
	add(var_33_float); // 0xa3 TObjFunc
	add(var_34_int); // 0xa5 TObjFunc
	var_61_int = 0; // 0xa7 PushI
	add(var_61_int); // 0xa8 TObjFunc
	var_30_object = 0; // 0xaa SetNull
	
Label_174:
	return 14; // 0xae Return
}


func_753(var_234_int)
{
	var_235_int = 0; var_236_object = Obj(); var_237_int = 0; var_238_int = 0; var_239_object = Obj(); var_240_int = 0; // 0x2f1 PushV
	size(var_238_int); // 0x2f2 TObjFunc
	var_241_bool = var_234_int >= var_238_int; // 0x2f4 GE
	if(var_241_bool == 0) goto Label_759; // 0x2f5 JumpB
	return 6; // 0x2f6 Return
	
Label_759:
	get(var_239_object, var_234_int); // 0x2f7 TObjFunc
	get(var_240_int, var_234_int); // 0x2f9 TObjFunc
	var_242_int = 0; // 0x2fb PushI
	var_243_bool = var_240_int == var_242_int; // 0x2fc Eq
	if(var_243_bool == 0) goto Label_767; // 0x2fd JumpB
	return 6; // 0x2fe Return
	
Label_767:
	var_244_int = 1; // 0x2ff PushI
	var_240_int = var_240_int - var_244_int; // 0x300 Sub2
	set(var_234_int, var_240_int); // 0x301 TObjFunc
	func_416(var_240_int); // 0x304 NEW_2
	func_378(); // 0x307 NEW_2
	return 6; // 0x309 Return
}


func_726(var_220_int)
{
	var_221_int = 0; var_222_object = Obj(); var_223_int = 0; var_224_int = 0; var_225_int = 0; var_226_object = Obj(); var_227_int = 0; var_228_int = 0; // 0x2d6 PushV
	size(var_225_int); // 0x2d7 TObjFunc
	var_229_bool = var_220_int >= var_225_int; // 0x2d9 GE
	if(var_229_bool == 0) goto Label_732; // 0x2da JumpB
	return 8; // 0x2db Return
	
Label_732:
	get(var_226_object, var_220_int); // 0x2dc TObjFunc
	get(var_227_int, var_220_int); // 0x2de TObjFunc
	get(var_228_int, var_220_int); // 0x2e0 TObjFunc
	var_230_bool = var_227_int <= var_228_int; // 0x2e2 LE
	if(var_230_bool == 0) goto Label_741; // 0x2e3 JumpB
	return 8; // 0x2e4 Return
	
Label_741:
	var_231_int = 1; // 0x2e5 PushI
	var_228_int = var_228_int + var_231_int; // 0x2e6 Add2
	set(var_220_int, var_228_int); // 0x2e7 TObjFunc
	func_416(var_228_int); // 0x2ea NEW_2
	func_378(); // 0x2ed NEW_2
	return 8; // 0x2ef Return
}


func_378()
{
	var_143_int = 100; // 0x17a PushI
	var_144_float = 0; // 0x17b PushV
	func_357(var_143_int, var_144_float); // 0x17c NEW_2
	var_160_float = var_143_int * var_144_float; // 0x17e Mult
	var_161_string = "level"; // 0x17f PushS
	SendMessage(var_160_float, var_161_string); // 0x180 Func
	return 0; // 0x182 Return
}


func_795(var_40_int)
{
	var_42_int = 0; var_43_int = 0; // 0x31b PushV
	GetItemID(var_43_int); // 0x31c ObjFunc
	var_40_int = var_43_int; // 0x31e Mov
	return 2; // 0x31f Return
}


