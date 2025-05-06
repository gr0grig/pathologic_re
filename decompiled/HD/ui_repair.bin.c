task_0_event_101(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x55 PushV
	var_14_int = 267; // 0x56 PushI
	var_15_bool = var_7_int == var_14_int; // 0x57 Eq
	if(var_15_bool == 0) goto Label_123; // 0x58 JumpB
	var_16_int = 0; // 0x59 PushI
	var_17_bool = var_6_int == var_16_int; // 0x5a Eq
	if(var_17_bool == 0) goto Label_98; // 0x5b JumpB
	var_6_int = 1; // 0x5c TMovI
	var_18_int = -4; // 0x5d PushI
	var_19_string = "cancel"; // 0x5e PushS
	SendMessage(var_18_int, var_19_string); // 0x5f Func
	goto Label_123; // 0x61 Jump
	
Label_123:
	var_20_int = 268; // 0x7b PushI
	var_21_bool = var_7_int == var_20_int; // 0x7c Eq
	if(var_21_bool == 0) goto Label_150; // 0x7d JumpB
	var_22_bool = 0; // 0x7e PushV
	var_22_bool = 1; // 0x7f MovB
	var_23_int = 1; // 0x80 PushI
	var_24_bool = var_6_int == var_23_int; // 0x81 Eq
	if(var_24_bool == 0) goto Label_135; // 0x82 JumpB
	var_25_int = 0; // 0x83 PushI
	var_26_bool = var_6_int == var_25_int; // 0x84 Eq
	if(var_26_bool == 0) goto Label_135; // 0x85 JumpB
	var_22_bool = 0; // 0x86 MovB
	
Label_135:
	if(var_22_bool == 0) goto Label_142; // 0x87 JumpB
	var_6_int = 0; // 0x88 TMovI
	var_27_int = -4; // 0x89 PushI
	var_28_string = "ok"; // 0x8a PushS
	SendMessage(var_27_int, var_28_string); // 0x8b Func
	goto Label_150; // 0x8d Jump
	
Label_150:
	var_29_int = 269; // 0x96 PushI
	var_30_bool = var_7_int == var_29_int; // 0x97 Eq
	if(var_30_bool == 0) goto Label_170; // 0x98 JumpB
	var_12_int = 0; // 0x99 MovI
	
Label_154:
	var_31_int = 4; // 0x9a PushI
	var_32_bool = var_12_int < var_31_int; // 0x9b LT
	if(var_32_bool == 0) goto Label_170; // 0x9c JumpB
	var_33_int = 2; // 0x9d PushI
	var_34_bool = var_6_int == var_33_int; // 0x9e Eq
	if(var_34_bool == 0) goto Label_167; // 0x9f JumpB
	var_35_int = -2; // 0xa0 PushI
	var_36_string = ""; var_37_int = 0; // 0xa1 PushV
	var_37_int = var_12_int; // 0xa2 Mov
	func_614(var_36_string, var_37_int); // 0xa3 NEW_2
	SendMessage(var_35_int, var_36_string); // 0xa5 Func
	
Label_167:
	var_48_int = 1; // 0xa7 PushI
	var_12_int = var_12_int + var_48_int; // 0xa8 Add2
	goto Label_154; // 0xa9 Jump
	
Label_170:
	var_49_int = 270; // 0xaa PushI
	var_50_bool = var_7_int == var_49_int; // 0xab Eq
	if(var_50_bool == 0) goto Label_190; // 0xac JumpB
	var_13_int = 0; // 0xad MovI
	
Label_174:
	var_51_int = 4; // 0xae PushI
	var_52_bool = var_13_int < var_51_int; // 0xaf LT
	if(var_52_bool == 0) goto Label_190; // 0xb0 JumpB
	var_53_int = 2; // 0xb1 PushI
	var_54_bool = var_6_int == var_53_int; // 0xb2 Eq
	if(var_54_bool == 0) goto Label_187; // 0xb3 JumpB
	var_55_int = -3; // 0xb4 PushI
	var_56_string = ""; var_57_int = 0; // 0xb5 PushV
	var_57_int = var_13_int; // 0xb6 Mov
	func_614(var_56_string, var_57_int); // 0xb7 NEW_2
	SendMessage(var_55_int, var_56_string); // 0xb9 Func
	
Label_187:
	var_58_int = 1; // 0xbb PushI
	var_13_int = var_13_int + var_58_int; // 0xbc Add2
	goto Label_174; // 0xbd Jump
	
Label_190:
	return 6; // 0xbe Return
	
Label_142:
	var_59_int = 2; // 0x8e PushI
	var_60_bool = var_6_int == var_59_int; // 0x8f Eq
	if(var_60_bool == 0) goto Label_150; // 0x90 JumpB
	var_6_int = 1; // 0x91 TMovI
	var_61_int = -4; // 0x92 PushI
	var_62_string = "cancel"; // 0x93 PushS
	SendMessage(var_61_int, var_62_string); // 0x94 Func
	
Label_98:
	var_63_bool = 0; // 0x62 PushV
	var_63_bool = 1; // 0x63 MovB
	var_64_int = 1; // 0x64 PushI
	var_65_bool = var_6_int == var_64_int; // 0x65 Eq
	if(var_65_bool == 0) goto Label_107; // 0x66 JumpB
	var_66_int = 2; // 0x67 PushI
	var_67_bool = var_6_int == var_66_int; // 0x68 Eq
	if(var_67_bool == 0) goto Label_107; // 0x69 JumpB
	var_63_bool = 0; // 0x6a MovB
	
Label_107:
	if(var_63_bool == 0) goto Label_123; // 0x6b JumpB
	var_6_int = 2; // 0x6c TMovI
	var_11_int = 0; // 0x6d MovI
	
Label_110:
	var_68_int = 4; // 0x6e PushI
	var_69_bool = var_11_int < var_68_int; // 0x6f LT
	if(var_69_bool == 0) goto Label_123; // 0x70 JumpB
	var_70_int = -7; // 0x71 PushI
	var_71_string = ""; var_72_int = 0; // 0x72 PushV
	var_72_int = var_11_int; // 0x73 Mov
	func_614(var_71_string, var_72_int); // 0x74 NEW_2
	SendMessage(var_70_int, var_71_string); // 0x76 Func
	var_73_int = 1; // 0x78 PushI
	var_11_int = var_11_int + var_73_int; // 0x79 Add2
	goto Label_110; // 0x7a Jump
}


task_0_event_102(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xbf PushV
	var_14_int = 272; // 0xc0 PushI
	var_15_bool = var_7_int == var_14_int; // 0xc1 Eq
	if(var_15_bool == 0) goto Label_229; // 0xc2 JumpB
	var_16_int = 0; // 0xc3 PushI
	var_17_bool = var_6_int == var_16_int; // 0xc4 Eq
	if(var_17_bool == 0) goto Label_204; // 0xc5 JumpB
	var_6_int = 1; // 0xc6 TMovI
	var_18_int = -4; // 0xc7 PushI
	var_19_string = "cancel"; // 0xc8 PushS
	SendMessage(var_18_int, var_19_string); // 0xc9 Func
	goto Label_229; // 0xcb Jump
	
Label_229:
	var_20_int = 274; // 0xe5 PushI
	var_21_bool = var_7_int == var_20_int; // 0xe6 Eq
	if(var_21_bool == 0) goto Label_256; // 0xe7 JumpB
	var_22_bool = 0; // 0xe8 PushV
	var_22_bool = 1; // 0xe9 MovB
	var_23_int = 1; // 0xea PushI
	var_24_bool = var_6_int == var_23_int; // 0xeb Eq
	if(var_24_bool == 0) goto Label_241; // 0xec JumpB
	var_25_int = 0; // 0xed PushI
	var_26_bool = var_6_int == var_25_int; // 0xee Eq
	if(var_26_bool == 0) goto Label_241; // 0xef JumpB
	var_22_bool = 0; // 0xf0 MovB
	
Label_241:
	if(var_22_bool == 0) goto Label_248; // 0xf1 JumpB
	var_6_int = 0; // 0xf2 TMovI
	var_27_int = -4; // 0xf3 PushI
	var_28_string = "ok"; // 0xf4 PushS
	SendMessage(var_27_int, var_28_string); // 0xf5 Func
	goto Label_256; // 0xf7 Jump
	
Label_256:
	var_29_int = 273; // 0x100 PushI
	var_30_bool = var_7_int == var_29_int; // 0x101 Eq
	if(var_30_bool == 0) goto Label_276; // 0x102 JumpB
	var_12_int = 0; // 0x103 MovI
	
Label_260:
	var_31_int = 4; // 0x104 PushI
	var_32_bool = var_12_int < var_31_int; // 0x105 LT
	if(var_32_bool == 0) goto Label_276; // 0x106 JumpB
	var_33_int = 2; // 0x107 PushI
	var_34_bool = var_6_int == var_33_int; // 0x108 Eq
	if(var_34_bool == 0) goto Label_273; // 0x109 JumpB
	var_35_int = -2; // 0x10a PushI
	var_36_string = ""; var_37_int = 0; // 0x10b PushV
	var_37_int = var_12_int; // 0x10c Mov
	func_614(var_36_string, var_37_int); // 0x10d NEW_2
	SendMessage(var_35_int, var_36_string); // 0x10f Func
	
Label_273:
	var_48_int = 1; // 0x111 PushI
	var_12_int = var_12_int + var_48_int; // 0x112 Add2
	goto Label_260; // 0x113 Jump
	
Label_276:
	var_49_int = 271; // 0x114 PushI
	var_50_bool = var_7_int == var_49_int; // 0x115 Eq
	if(var_50_bool == 0) goto Label_296; // 0x116 JumpB
	var_13_int = 0; // 0x117 MovI
	
Label_280:
	var_51_int = 4; // 0x118 PushI
	var_52_bool = var_13_int < var_51_int; // 0x119 LT
	if(var_52_bool == 0) goto Label_296; // 0x11a JumpB
	var_53_int = 2; // 0x11b PushI
	var_54_bool = var_6_int == var_53_int; // 0x11c Eq
	if(var_54_bool == 0) goto Label_293; // 0x11d JumpB
	var_55_int = -3; // 0x11e PushI
	var_56_string = ""; var_57_int = 0; // 0x11f PushV
	var_57_int = var_13_int; // 0x120 Mov
	func_614(var_56_string, var_57_int); // 0x121 NEW_2
	SendMessage(var_55_int, var_56_string); // 0x123 Func
	
Label_293:
	var_58_int = 1; // 0x125 PushI
	var_13_int = var_13_int + var_58_int; // 0x126 Add2
	goto Label_280; // 0x127 Jump
	
Label_296:
	return 6; // 0x128 Return
	
Label_248:
	var_59_int = 2; // 0xf8 PushI
	var_60_bool = var_6_int == var_59_int; // 0xf9 Eq
	if(var_60_bool == 0) goto Label_256; // 0xfa JumpB
	var_6_int = 1; // 0xfb TMovI
	var_61_int = -4; // 0xfc PushI
	var_62_string = "cancel"; // 0xfd PushS
	SendMessage(var_61_int, var_62_string); // 0xfe Func
	
Label_204:
	var_63_bool = 0; // 0xcc PushV
	var_63_bool = 1; // 0xcd MovB
	var_64_int = 1; // 0xce PushI
	var_65_bool = var_6_int == var_64_int; // 0xcf Eq
	if(var_65_bool == 0) goto Label_213; // 0xd0 JumpB
	var_66_int = 2; // 0xd1 PushI
	var_67_bool = var_6_int == var_66_int; // 0xd2 Eq
	if(var_67_bool == 0) goto Label_213; // 0xd3 JumpB
	var_63_bool = 0; // 0xd4 MovB
	
Label_213:
	if(var_63_bool == 0) goto Label_229; // 0xd5 JumpB
	var_6_int = 2; // 0xd6 TMovI
	var_11_int = 0; // 0xd7 MovI
	
Label_216:
	var_68_int = 4; // 0xd8 PushI
	var_69_bool = var_11_int < var_68_int; // 0xd9 LT
	if(var_69_bool == 0) goto Label_229; // 0xda JumpB
	var_70_int = -7; // 0xdb PushI
	var_71_string = ""; var_72_int = 0; // 0xdc PushV
	var_72_int = var_11_int; // 0xdd Mov
	func_614(var_71_string, var_72_int); // 0xde NEW_2
	SendMessage(var_70_int, var_71_string); // 0xe0 Func
	var_73_int = 1; // 0xe2 PushI
	var_11_int = var_11_int + var_73_int; // 0xe3 Add2
	goto Label_216; // 0xe4 Jump
}


task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	clear(); // 0x160 TObjFunc
	DestroyWindow(); // 0x162 Func
	return 0; // 0x164 Return
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_5_int = var_5_int + var_9_float; // 0x166 Add2
	var_10_int = 0; // 0x167 PushI
	var_11_bool = var_5_int < var_10_int; // 0x168 LT
	if(var_11_bool == 0) goto Label_363; // 0x169 JumpB
	var_5_int = 0; // 0x16a TMovI
	
Label_363:
	func_370(var_9_float); // 0x16c NEW_2
	func_399(var_9_float); // 0x16f NEW_2
	return 0; // 0x171 Return
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x1c7 PushV
	var_16_int = -4; // 0x1c8 PushI
	var_17_bool = var_7_int == var_16_int; // 0x1c9 Eq
	if(var_17_bool == 0) goto Label_501; // 0x1ca JumpB
	var_18_string = ""; var_19_int = 0; // 0x1cb PushV
	var_19_int = 0; // 0x1cc MovI
	func_614(var_18_string, var_19_int); // 0x1cd NEW_2
	var_30_bool = var_8_string == var_18_string; // 0x1cf Eq
	if(var_30_bool == 0) goto Label_477; // 0x1d0 JumpB
	var_31_int = 0; // 0x1d1 PushI
	var_32_bool = var_5_int > var_31_int; // 0x1d2 GT
	if(var_32_bool == 0) goto Label_476; // 0x1d3 JumpB
	var_33_int = -1; // 0x1d4 PushI
	var_5_int = var_5_int + var_33_int; // 0x1d5 Add2
	func_399(var_15_int); // 0x1d7 NEW_2
	func_370(var_15_int); // 0x1da NEW_2
	
Label_476:
	goto Label_497; // 0x1dc Jump
	
Label_497:
	var_95_int = -4; // 0x1f1 PushI
	SendMessage(var_95_int, var_8_string); // 0x1f2 Func
	return 6; // 0x1f4 Return
	
Label_477:
	var_96_string = ""; var_97_int = 0; // 0x1dd PushV
	var_97_int = 3; // 0x1de MovI
	func_614(var_96_string, var_97_int); // 0x1df NEW_2
	var_98_bool = var_8_string == var_96_string; // 0x1e1 Eq
	if(var_98_bool == 0) goto Label_497; // 0x1e2 JumpB
	size(var_13_int); // 0x1e3 TObjFunc
	var_99_int = 4; // 0x1e5 PushI
	var_100_int = var_5_int + var_99_int; // 0x1e6 Add
	var_101_bool = var_100_int <= var_13_int; // 0x1e7 LE
	if(var_101_bool == 0) goto Label_497; // 0x1e8 JumpB
	var_102_int = 1; // 0x1e9 PushI
	var_5_int = var_5_int + var_102_int; // 0x1ea Add2
	func_399(var_15_int); // 0x1ec NEW_2
	func_370(var_15_int); // 0x1ef NEW_2
	
Label_501:
	var_103_int = -11; // 0x1f5 PushI
	var_104_bool = var_7_int == var_103_int; // 0x1f6 Eq
	if(var_104_bool == 0) goto Label_506; // 0x1f7 JumpB
	var_6_int = 0; // 0x1f8 TMovI
	return 6; // 0x1f9 Return
	
Label_506:
	var_105_int = -12; // 0x1fa PushI
	var_106_bool = var_7_int == var_105_int; // 0x1fb Eq
	if(var_106_bool == 0) goto Label_511; // 0x1fc JumpB
	var_6_int = 1; // 0x1fd TMovI
	return 6; // 0x1fe Return
	
Label_511:
	var_107_int = -9; // 0x1ff PushI
	var_108_bool = var_7_int == var_107_int; // 0x200 Eq
	if(var_108_bool == 0) goto Label_516; // 0x201 JumpB
	var_6_int = 2; // 0x202 TMovI
	return 6; // 0x203 Return
	
Label_516:
	var_109_int = 0; // 0x204 PushI
	var_110_bool = var_7_int < var_109_int; // 0x205 LT
	if(var_110_bool == 0) goto Label_520; // 0x206 JumpB
	return 6; // 0x207 Return
	
Label_520:
	var_111_string = "ok"; // 0x208 PushS
	var_112_bool = var_8_string == var_111_string; // 0x209 Eq
	if(var_112_bool == 0) goto Label_527; // 0x20a JumpB
	func_582(); // 0x20c NEW_2
	goto Label_581; // 0x20e Jump
	
Label_581:
	return 6; // 0x245 Return
	
Label_527:
	var_113_string = "cancel"; // 0x20f PushS
	var_114_bool = var_8_string == var_113_string; // 0x210 Eq
	if(var_114_bool == 0) goto Label_534; // 0x211 JumpB
	func_585(var_14_int, var_15_int); // 0x213 NEW_2
	goto Label_581; // 0x215 Jump
	
Label_534:
	var_116_string = "scrollbar"; // 0x216 PushS
	var_117_bool = var_8_string == var_116_string; // 0x217 Eq
	if(var_117_bool == 0) goto Label_557; // 0x218 JumpB
	size(var_14_int); // 0x219 TObjFunc
	var_118_float = 0.01; // 0x21b PushF
	var_119_int = 4; // 0x21c PushI
	var_120_int = var_14_int - var_119_int; // 0x21d Sub
	var_121_float = var_118_float * var_120_int; // 0x21e Mult
	var_122_float = var_121_float * var_7_int; // 0x21f Mult
	var_123_float = 0.5; // 0x220 PushF
	var_5_int = var_122_float + var_123_float; // 0x221 Add2
	var_124_int = 0; // 0x222 PushI
	var_125_bool = var_5_int < var_124_int; // 0x223 LT
	if(var_125_bool == 0) goto Label_550; // 0x224 JumpB
	var_5_int = 0; // 0x225 TMovI
	
Label_550:
	func_370(var_15_int); // 0x227 NEW_2
	func_399(var_15_int); // 0x22a NEW_2
	goto Label_581; // 0x22c Jump
	
Label_557:
	var_126_int = 0; var_127_int = 0; var_128_string = ""; // 0x22d PushV
	var_127_int = var_7_int; // 0x22e Mov
	var_128_string = var_8_string; // 0x22f Mov
	func_630(var_127_int, var_128_string); // 0x230 NEW_2
	var_15_int = var_126_int; // 0x231 Mov
	var_137_int = -1; // 0x233 PushI
	var_138_bool = var_15_int != var_137_int; // 0x234 Neq
	if(var_138_bool == 0) goto Label_581; // 0x235 JumpB
	var_139_int = 0; // 0x236 PushI
	var_140_bool = var_7_int == var_139_int; // 0x237 Eq
	if(var_140_bool == 0) goto Label_574; // 0x238 JumpB
	var_141_int = 0; // 0x239 PushV
	var_141_int = var_15_int + var_5_int; // 0x23a Add2
	func_596(var_141_int); // 0x23b NEW_2
	goto Label_581; // 0x23d Jump
	
Label_574:
	var_148_int = 1; // 0x23e PushI
	var_149_bool = var_7_int == var_148_int; // 0x23f Eq
	if(var_149_bool == 0) goto Label_581; // 0x240 JumpB
	var_150_int = 0; // 0x241 PushV
	var_150_int = var_15_int + var_5_int; // 0x242 Add2
	func_605(var_150_int); // 0x243 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_int = 0; var_12_object = Obj(); var_13_string = ""; var_14_string = ""; // 0x0 PushV
	var_15_string = "default"; // 0x1 PushS
	SetCursor(var_15_string); // 0x2 Func
	ShowCursor(); // 0x4 Func
	CaptureKeyboard(); // 0x6 Func
	var_16_bool = 0; // 0x8 PushB
	SetOwnerDraw(var_16_bool); // 0x9 Func
	var_17_int = 0; // 0xb PushV
	func_648(var_17_int); // 0xc NEW_2
	var_3_int = var_17_int; // 0xd TMov
	GetChooseItems(var_0_object); // 0xf Func
	GetAdditionalData(var_14_string); // 0x11 Func
	GetReturnValue(var_13_string); // 0x13 Func
	var_6_int = 2; // 0x15 TMovI
	var_11_int = 0; // 0x16 MovI
	
Label_23:
	var_24_int = 4; // 0x17 PushI
	var_25_bool = var_11_int < var_24_int; // 0x18 LT
	if(var_25_bool == 0) goto Label_69; // 0x19 JumpB
	CreateStringVector(var_12_object); // 0x1a Func
	var_26_int = 1; // 0x1c PushI
	var_27_int = var_11_int - var_26_int; // 0x1d Sub
	var_28_int = 0; // 0x1e PushI
	var_29_bool = var_27_int >= var_28_int; // 0x1f GE
	if(var_29_bool == 0) goto Label_40; // 0x20 JumpB
	var_30_string = ""; var_31_int = 0; // 0x21 PushV
	var_32_int = 1; // 0x22 PushI
	var_31_int = var_11_int - var_32_int; // 0x23 Sub2
	func_614(var_30_string, var_31_int); // 0x24 NEW_2
	var_13_string = var_30_string; // 0x25 Mov
	goto Label_41; // 0x27 Jump
	
Label_41:
	var_43_int = 1; // 0x29 PushI
	var_44_int = var_11_int + var_43_int; // 0x2a Add
	var_45_int = 4; // 0x2b PushI
	var_46_bool = var_44_int < var_45_int; // 0x2c LT
	if(var_46_bool == 0) goto Label_53; // 0x2d JumpB
	var_47_string = ""; var_48_int = 0; // 0x2e PushV
	var_49_int = 1; // 0x2f PushI
	var_48_int = var_11_int + var_49_int; // 0x30 Add2
	func_614(var_47_string, var_48_int); // 0x31 NEW_2
	var_14_string = var_47_string; // 0x32 Mov
	goto Label_54; // 0x34 Jump
	
Label_54:
	add(var_13_string); // 0x36 ObjFunc
	add(var_14_string); // 0x38 ObjFunc
	var_50_int = -1; // 0x3a PushI
	var_51_string = ""; var_52_int = 0; // 0x3b PushV
	var_52_int = var_11_int; // 0x3c Mov
	func_614(var_51_string, var_52_int); // 0x3d NEW_2
	SendMessage(var_50_int, var_51_string, var_12_object); // 0x3f Func
	var_12_object = 0; // 0x41 SetNull
	var_53_int = 1; // 0x42 PushI
	var_11_int = var_11_int + var_53_int; // 0x43 Add2
	goto Label_23; // 0x44 Jump
	
Label_53:
	var_14_string = "$parent"; // 0x35 MovS
	
Label_40:
	var_13_string = "$parent"; // 0x28 MovS
	
Label_69:
	var_54_int = -6; // 0x45 PushI
	var_55_string = ""; var_56_int = 0; // 0x46 PushV
	var_56_int = 0; // 0x47 MovI
	func_614(var_55_string, var_56_int); // 0x48 NEW_2
	SendMessage(var_54_int, var_55_string); // 0x4a Func
	func_370(var_14_string); // 0x4d NEW_2
	func_399(var_14_string); // 0x50 NEW_2
	ProcessEvents(); // 0x52 Func
	return 8; // 0x54 Return
}


func_614(var_30_string, var_31_int)
{
	var_33_int = 1; // 0x267 PushI
	var_34_int = var_31_int + var_33_int; // 0x268 Add
	var_35_int = 10; // 0x269 PushI
	var_36_bool = var_34_int < var_35_int; // 0x26a LT
	if(var_36_bool == 0) goto Label_625; // 0x26b JumpB
	var_37_string = "slot0"; // 0x26c PushS
	var_38_int = 1; // 0x26d PushI
	var_39_int = var_31_int + var_38_int; // 0x26e Add
	var_30_string = var_37_string + var_39_int; // 0x26f Add2
	return 0; // 0x270 Return
	
Label_625:
	var_40_string = "slot"; // 0x271 PushS
	var_41_int = 1; // 0x272 PushI
	var_42_int = var_31_int + var_41_int; // 0x273 Add
	var_30_string = var_40_string + var_42_int; // 0x274 Add2
	return 0; // 0x275 Return
}


func_582()
{
	DestroyWindow(); // 0x246 Func
	return 0; // 0x248 Return
}


func_648(var_17_int)
{
	var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_int = 0; // 0x288 PushV
	var_22_string = "player"; // 0x289 PushS
	FindActor(var_20_object, var_22_string); // 0x28a Func
	var_23_string = "money"; // 0x28c PushS
	GetProperty(var_23_string, var_21_int); // 0x28d ObjFunc
	var_17_int = var_21_int; // 0x28f Mov
	return 4; // 0x290 Return
}


func_585(var_3_int, var_4_int)
{
	clear(); // 0x249 TObjFunc
	var_115_int = 0; // 0x24b PushV
	func_648(var_115_int); // 0x24c NEW_2
	var_3_int = var_115_int; // 0x24d TMov
	var_4_int = 0; // 0x24f TMovI
	func_399(var_15_int); // 0x251 NEW_2
	return 0; // 0x253 Return
}


func_297(var_91_bool, var_92_int)
{
	var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x129 PushV
	size(var_96_int); // 0x12a TObjFunc
	var_97_int = 0; // 0x12c MovI
	
Label_301:
	var_99_bool = var_97_int < var_96_int; // 0x12d LT
	if(var_99_bool == 0) goto Label_312; // 0x12e JumpB
	get(var_98_int, var_97_int); // 0x12f TObjFunc
	var_100_bool = var_98_int == var_92_int; // 0x131 Eq
	if(var_100_bool == 0) goto Label_309; // 0x132 JumpB
	var_91_bool = 1; // 0x133 MovB
	return 6; // 0x134 Return
	
Label_309:
	var_101_int = 1; // 0x135 PushI
	var_97_int = var_97_int + var_101_int; // 0x136 Add2
	goto Label_301; // 0x137 Jump
	
Label_312:
	var_91_bool = 0; // 0x138 MovB
	return 6; // 0x139 Return
}


func_330(var_3_int, var_4_int, var_151_int)
{
	var_152_int = 0; var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_int = 0; // 0x14a PushV
	size(var_156_int); // 0x14b TObjFunc
	var_157_int = 0; // 0x14d MovI
	
Label_334:
	var_160_bool = var_157_int < var_156_int; // 0x14e LT
	if(var_160_bool == 0) goto Label_350; // 0x14f JumpB
	get(var_158_int, var_157_int); // 0x150 TObjFunc
	var_161_bool = var_158_int == var_151_int; // 0x152 Eq
	if(var_161_bool == 0) goto Label_347; // 0x153 JumpB
	remove(var_157_int); // 0x154 TObjFunc
	get(var_159_int, var_151_int); // 0x156 TObjFunc
	var_3_int = var_3_int + var_159_int; // 0x158 Add2
	var_4_int = var_4_int - var_159_int; // 0x159 Sub2
	goto Label_350; // 0x15a Jump
	
Label_350:
	return 8; // 0x15e Return
	
Label_347:
	var_162_int = 1; // 0x15b PushI
	var_157_int = var_157_int + var_162_int; // 0x15c Add2
	goto Label_334; // 0x15d Jump
}


func_399(var_5_int)
{
	var_76_int = 0; var_77_int = 0; var_78_object = Obj(); var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_object = Obj(); var_83_int = 0; // 0x18f PushV
	var_84_int = 0; // 0x190 PushV
	func_648(var_84_int); // 0x191 NEW_2
	var_85_string = "money_slot"; // 0x193 PushS
	SendMessage(var_84_int, var_85_string); // 0x194 Func
	var_86_string = "sel_money_slot"; // 0x196 PushS
	SendMessage(var_81_int, var_86_string); // 0x197 Func
	size(var_80_int); // 0x199 TObjFunc
	var_81_int = var_5_int; // 0x19b MovT
	
Label_412:
	var_87_int = 4; // 0x19c PushI
	var_88_int = var_5_int + var_87_int; // 0x19d Add
	var_89_bool = var_81_int < var_88_int; // 0x19e LT
	if(var_89_bool == 0) goto Label_454; // 0x19f JumpB
	var_90_bool = var_81_int < var_80_int; // 0x1a0 LT
	if(var_90_bool == 0) goto Label_444; // 0x1a1 JumpB
	get(var_82_object, var_81_int); // 0x1a2 TObjFunc
	get(var_83_int, var_81_int); // 0x1a4 TObjFunc
	var_91_bool = 0; var_92_int = 0; // 0x1a6 PushV
	var_92_int = var_81_int; // 0x1a7 Mov
	func_297(var_91_bool, var_92_int); // 0x1a8 NEW_2
	if(var_91_bool == 0) goto Label_436; // 0x1aa JumpB
	var_102_int = 16384; // 0x1ab PushI
	var_103_int = var_102_int | var_83_int; // 0x1ac Or
	var_104_string = ""; var_105_int = 0; // 0x1ad PushV
	var_105_int = var_81_int - var_5_int; // 0x1ae Sub2
	func_614(var_104_string, var_105_int); // 0x1af NEW_2
	SendMessage(var_103_int, var_104_string, var_82_object); // 0x1b1 Func
	goto Label_442; // 0x1b3 Jump
	
Label_442:
	var_82_object = 0; // 0x1ba SetNull
	goto Label_451; // 0x1bb Jump
	
Label_451:
	var_106_int = 1; // 0x1c3 PushI
	var_81_int = var_81_int + var_106_int; // 0x1c4 Add2
	goto Label_412; // 0x1c5 Jump
	
Label_436:
	var_107_string = ""; var_108_int = 0; // 0x1b4 PushV
	var_108_int = var_81_int - var_5_int; // 0x1b5 Sub2
	func_614(var_107_string, var_108_int); // 0x1b6 NEW_2
	SendMessage(var_83_int, var_107_string, var_82_object); // 0x1b8 Func
	
Label_444:
	var_109_int = 32768; // 0x1bc PushI
	var_110_string = ""; var_111_int = 0; // 0x1bd PushV
	var_111_int = var_81_int - var_5_int; // 0x1be Sub2
	func_614(var_110_string, var_111_int); // 0x1bf NEW_2
	SendMessage(var_109_int, var_110_string); // 0x1c1 Func
	
Label_454:
	return 8; // 0x1c6 Return
}


func_370(var_5_int)
{
	var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x172 PushV
	size(var_59_int); // 0x173 TObjFunc
	var_61_int = 4; // 0x175 PushI
	var_62_bool = var_59_int <= var_61_int; // 0x176 LE
	if(var_62_bool == 0) goto Label_382; // 0x177 JumpB
	var_63_int = 16384; // 0x178 PushI
	var_64_string = "scrollbar"; // 0x179 PushS
	SendMessage(var_63_int, var_64_string); // 0x17a Func
	var_5_int = 0; // 0x17c TMovI
	goto Label_398; // 0x17d Jump
	
Label_398:
	return 4; // 0x18e Return
	
Label_382:
	var_65_int = 4; // 0x17e PushI
	var_66_int = var_5_int + var_65_int; // 0x17f Add
	var_67_bool = var_66_int > var_59_int; // 0x180 GT
	if(var_67_bool == 0) goto Label_398; // 0x181 JumpB
	var_68_int = 4; // 0x182 PushI
	var_69_int = var_5_int + var_68_int; // 0x183 Add
	var_70_int = var_69_int - var_59_int; // 0x184 Sub
	var_5_int = var_5_int - var_70_int; // 0x185 Sub2
	var_71_int = 100; // 0x186 PushI
	var_72_float = var_5_int * var_71_int; // 0x187 Mult
	var_73_int = 4; // 0x188 PushI
	var_74_int = var_59_int - var_73_int; // 0x189 Sub
	var_60_int = var_72_float / var_72_float; // 0x18a Div2
	var_75_string = "scrollbar"; // 0x18b PushS
	SendMessage(var_60_int, var_75_string); // 0x18c Func
}


func_596(var_141_int)
{
	var_142_int = 0; // 0x255 PushV
	var_142_int = var_141_int; // 0x256 Mov
	func_314(var_15_int, var_141_int, var_142_int); // 0x257 NEW_2
	func_399(var_141_int); // 0x25a NEW_2
	return 0; // 0x25c Return
}


func_630(var_126_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0; // 0x276 PushV
	var_130_int = 0; // 0x277 MovI
	
Label_632:
	var_131_int = 4; // 0x278 PushI
	var_132_bool = var_130_int < var_131_int; // 0x279 LT
	if(var_132_bool == 0) goto Label_646; // 0x27a JumpB
	var_133_string = ""; var_134_int = 0; // 0x27b PushV
	var_134_int = var_130_int; // 0x27c Mov
	func_614(var_133_string, var_134_int); // 0x27d NEW_2
	var_135_bool = var_128_string == var_133_string; // 0x27f Eq
	if(var_135_bool == 0) goto Label_643; // 0x280 JumpB
	var_126_int = var_130_int; // 0x281 Mov
	return 2; // 0x282 Return
	
Label_643:
	var_136_int = 1; // 0x283 PushI
	var_130_int = var_130_int + var_136_int; // 0x284 Add2
	goto Label_632; // 0x285 Jump
	
Label_646:
	var_126_int = -1; // 0x286 MovI
	return 2; // 0x287 Return
}


func_314(var_3_int, var_4_int, var_142_int)
{
	var_143_int = 0; var_144_int = 0; // 0x13a PushV
	var_145_bool = 0; var_146_int = 0; // 0x13b PushV
	var_146_int = var_142_int; // 0x13c Mov
	func_297(var_145_bool, var_146_int); // 0x13d NEW_2
	if(var_145_bool == 0) goto Label_321; // 0x13f JumpB
	return 2; // 0x140 Return
	
Label_321:
	get(var_144_int, var_142_int); // 0x141 TObjFunc
	var_147_bool = var_3_int >= var_144_int; // 0x143 GE
	if(var_147_bool == 0) goto Label_329; // 0x144 JumpB
	var_3_int = var_3_int - var_144_int; // 0x145 Sub2
	var_4_int = var_4_int + var_144_int; // 0x146 Add2
	add(var_142_int); // 0x147 TObjFunc
	
Label_329:
	return 2; // 0x149 Return
}


func_605(var_150_int)
{
	var_151_int = 0; // 0x25e PushV
	var_151_int = var_150_int; // 0x25f Mov
	func_330(var_15_int, var_150_int, var_151_int); // 0x260 NEW_2
	func_399(var_150_int); // 0x263 NEW_2
	return 0; // 0x265 Return
}


