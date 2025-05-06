task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x154 PushV
	var_39_int = 269; // 0x155 PushI
	var_40_bool = var_30_int == var_39_int; // 0x156 Eq
	if(var_40_bool == 0) goto Label_367; // 0x157 JumpB
	var_41_string = ""; // 0x158 PushS
	var_42_bool = var_22_string == var_41_string; // 0x159 Eq
	if(var_42_bool == 0) goto Label_367; // 0x15a JumpB
	var_35_int = 0; // 0x15b MovI
	
Label_348:
	var_43_bool = var_35_int < var_0_int; // 0x15c LT
	if(var_43_bool == 0) goto Label_367; // 0x15d JumpB
	var_44_int = -13; // 0x15e PushI
	var_45_string = ""; var_46_int = 0; // 0x15f PushV
	var_46_int = var_35_int; // 0x160 Mov
	func_2086(var_45_string, var_46_int); // 0x161 NEW_2
	SendMessage(var_44_int, var_45_string); // 0x163 Func
	var_57_int = -13; // 0x165 PushI
	var_58_string = ""; var_59_int = 0; // 0x166 PushV
	var_59_int = var_35_int; // 0x167 Mov
	func_2070(var_58_string, var_59_int); // 0x168 NEW_2
	SendMessage(var_57_int, var_58_string); // 0x16a Func
	var_70_int = 1; // 0x16c PushI
	var_35_int = var_35_int + var_70_int; // 0x16d Add2
	goto Label_348; // 0x16e Jump
	
Label_367:
	var_71_int = 270; // 0x16f PushI
	var_72_bool = var_30_int == var_71_int; // 0x170 Eq
	if(var_72_bool == 0) goto Label_393; // 0x171 JumpB
	var_73_string = ""; // 0x172 PushS
	var_74_bool = var_22_string == var_73_string; // 0x173 Eq
	if(var_74_bool == 0) goto Label_393; // 0x174 JumpB
	var_36_int = 0; // 0x175 MovI
	
Label_374:
	var_75_bool = var_36_int < var_0_int; // 0x176 LT
	if(var_75_bool == 0) goto Label_393; // 0x177 JumpB
	var_76_int = -14; // 0x178 PushI
	var_77_string = ""; var_78_int = 0; // 0x179 PushV
	var_78_int = var_36_int; // 0x17a Mov
	func_2086(var_77_string, var_78_int); // 0x17b NEW_2
	SendMessage(var_76_int, var_77_string); // 0x17d Func
	var_79_int = -14; // 0x17f PushI
	var_80_string = ""; var_81_int = 0; // 0x180 PushV
	var_81_int = var_36_int; // 0x181 Mov
	func_2070(var_80_string, var_81_int); // 0x182 NEW_2
	SendMessage(var_79_int, var_80_string); // 0x184 Func
	var_82_int = 1; // 0x186 PushI
	var_36_int = var_36_int + var_82_int; // 0x187 Add2
	goto Label_374; // 0x188 Jump
	
Label_393:
	var_83_int = 267; // 0x189 PushI
	var_84_bool = var_30_int == var_83_int; // 0x18a Eq
	if(var_84_bool == 0) goto Label_425; // 0x18b JumpB
	var_85_string = "cancel_button"; // 0x18c PushS
	var_86_bool = var_22_string == var_85_string; // 0x18d Eq
	if(var_86_bool == 0) goto Label_405; // 0x18e JumpB
	var_87_int = -4; // 0x18f PushI
	var_88_string = "ok_button"; // 0x190 PushS
	SendMessage(var_87_int, var_88_string); // 0x191 Func
	var_22_string = "ok_button"; // 0x193 TMovS
	goto Label_425; // 0x194 Jump
	
Label_425:
	var_89_int = 268; // 0x1a9 PushI
	var_90_bool = var_30_int == var_89_int; // 0x1aa Eq
	if(var_90_bool == 0) goto Label_469; // 0x1ab JumpB
	var_91_string = "cancel_button"; // 0x1ac PushS
	var_92_bool = var_22_string == var_91_string; // 0x1ad Eq
	if(var_92_bool == 0) goto Label_440; // 0x1ae JumpB
	var_93_int = -4; // 0x1af PushI
	var_94_string = ""; var_95_int = 0; // 0x1b0 PushV
	var_95_int = 1; // 0x1b1 MovI
	func_2086(var_94_string, var_95_int); // 0x1b2 NEW_2
	SendMessage(var_93_int, var_94_string); // 0x1b4 Func
	var_22_string = ""; // 0x1b6 TMovS
	goto Label_469; // 0x1b7 Jump
	
Label_469:
	return 8; // 0x1d5 Return
	
Label_440:
	var_96_string = "ok_button"; // 0x1b8 PushS
	var_97_bool = var_22_string == var_96_string; // 0x1b9 Eq
	if(var_97_bool == 0) goto Label_449; // 0x1ba JumpB
	var_98_int = -4; // 0x1bb PushI
	var_99_string = "cancel_button"; // 0x1bc PushS
	SendMessage(var_98_int, var_99_string); // 0x1bd Func
	var_22_string = "cancel_button"; // 0x1bf TMovS
	goto Label_469; // 0x1c0 Jump
	
Label_449:
	var_38_int = 0; // 0x1c1 MovI
	
Label_450:
	var_100_bool = var_38_int < var_0_int; // 0x1c2 LT
	if(var_100_bool == 0) goto Label_469; // 0x1c3 JumpB
	var_101_int = -16; // 0x1c4 PushI
	var_102_string = ""; var_103_int = 0; // 0x1c5 PushV
	var_103_int = var_38_int; // 0x1c6 Mov
	func_2086(var_102_string, var_103_int); // 0x1c7 NEW_2
	SendMessage(var_101_int, var_102_string); // 0x1c9 Func
	var_104_int = -16; // 0x1cb PushI
	var_105_string = ""; var_106_int = 0; // 0x1cc PushV
	var_106_int = var_38_int; // 0x1cd Mov
	func_2070(var_105_string, var_106_int); // 0x1ce NEW_2
	SendMessage(var_104_int, var_105_string); // 0x1d0 Func
	var_107_int = 1; // 0x1d2 PushI
	var_38_int = var_38_int + var_107_int; // 0x1d3 Add2
	goto Label_450; // 0x1d4 Jump
	
Label_405:
	var_37_int = 0; // 0x195 MovI
	
Label_406:
	var_108_bool = var_37_int < var_0_int; // 0x196 LT
	if(var_108_bool == 0) goto Label_425; // 0x197 JumpB
	var_109_int = -15; // 0x198 PushI
	var_110_string = ""; var_111_int = 0; // 0x199 PushV
	var_111_int = var_37_int; // 0x19a Mov
	func_2086(var_110_string, var_111_int); // 0x19b NEW_2
	SendMessage(var_109_int, var_110_string); // 0x19d Func
	var_112_int = -15; // 0x19f PushI
	var_113_string = ""; var_114_int = 0; // 0x1a0 PushV
	var_114_int = var_37_int; // 0x1a1 Mov
	func_2070(var_113_string, var_114_int); // 0x1a2 NEW_2
	SendMessage(var_112_int, var_113_string); // 0x1a4 Func
	var_115_int = 1; // 0x1a6 PushI
	var_37_int = var_37_int + var_115_int; // 0x1a7 Add2
	goto Label_406; // 0x1a8 Jump
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x1d6 PushV
	var_39_int = 273; // 0x1d7 PushI
	var_40_bool = var_30_int == var_39_int; // 0x1d8 Eq
	if(var_40_bool == 0) goto Label_497; // 0x1d9 JumpB
	var_41_string = ""; // 0x1da PushS
	var_42_bool = var_22_string == var_41_string; // 0x1db Eq
	if(var_42_bool == 0) goto Label_497; // 0x1dc JumpB
	var_35_int = 0; // 0x1dd MovI
	
Label_478:
	var_43_bool = var_35_int < var_0_int; // 0x1de LT
	if(var_43_bool == 0) goto Label_497; // 0x1df JumpB
	var_44_int = -13; // 0x1e0 PushI
	var_45_string = ""; var_46_int = 0; // 0x1e1 PushV
	var_46_int = var_35_int; // 0x1e2 Mov
	func_2086(var_45_string, var_46_int); // 0x1e3 NEW_2
	SendMessage(var_44_int, var_45_string); // 0x1e5 Func
	var_57_int = -13; // 0x1e7 PushI
	var_58_string = ""; var_59_int = 0; // 0x1e8 PushV
	var_59_int = var_35_int; // 0x1e9 Mov
	func_2070(var_58_string, var_59_int); // 0x1ea NEW_2
	SendMessage(var_57_int, var_58_string); // 0x1ec Func
	var_70_int = 1; // 0x1ee PushI
	var_35_int = var_35_int + var_70_int; // 0x1ef Add2
	goto Label_478; // 0x1f0 Jump
	
Label_497:
	var_71_int = 271; // 0x1f1 PushI
	var_72_bool = var_30_int == var_71_int; // 0x1f2 Eq
	if(var_72_bool == 0) goto Label_523; // 0x1f3 JumpB
	var_73_string = ""; // 0x1f4 PushS
	var_74_bool = var_22_string == var_73_string; // 0x1f5 Eq
	if(var_74_bool == 0) goto Label_523; // 0x1f6 JumpB
	var_36_int = 0; // 0x1f7 MovI
	
Label_504:
	var_75_bool = var_36_int < var_0_int; // 0x1f8 LT
	if(var_75_bool == 0) goto Label_523; // 0x1f9 JumpB
	var_76_int = -14; // 0x1fa PushI
	var_77_string = ""; var_78_int = 0; // 0x1fb PushV
	var_78_int = var_36_int; // 0x1fc Mov
	func_2086(var_77_string, var_78_int); // 0x1fd NEW_2
	SendMessage(var_76_int, var_77_string); // 0x1ff Func
	var_79_int = -14; // 0x201 PushI
	var_80_string = ""; var_81_int = 0; // 0x202 PushV
	var_81_int = var_36_int; // 0x203 Mov
	func_2070(var_80_string, var_81_int); // 0x204 NEW_2
	SendMessage(var_79_int, var_80_string); // 0x206 Func
	var_82_int = 1; // 0x208 PushI
	var_36_int = var_36_int + var_82_int; // 0x209 Add2
	goto Label_504; // 0x20a Jump
	
Label_523:
	var_83_int = 272; // 0x20b PushI
	var_84_bool = var_30_int == var_83_int; // 0x20c Eq
	if(var_84_bool == 0) goto Label_555; // 0x20d JumpB
	var_85_string = "cancel_button"; // 0x20e PushS
	var_86_bool = var_22_string == var_85_string; // 0x20f Eq
	if(var_86_bool == 0) goto Label_535; // 0x210 JumpB
	var_87_int = -4; // 0x211 PushI
	var_88_string = "ok_button"; // 0x212 PushS
	SendMessage(var_87_int, var_88_string); // 0x213 Func
	var_22_string = "ok_button"; // 0x215 TMovS
	goto Label_555; // 0x216 Jump
	
Label_555:
	var_89_int = 274; // 0x22b PushI
	var_90_bool = var_30_int == var_89_int; // 0x22c Eq
	if(var_90_bool == 0) goto Label_599; // 0x22d JumpB
	var_91_string = "cancel_button"; // 0x22e PushS
	var_92_bool = var_22_string == var_91_string; // 0x22f Eq
	if(var_92_bool == 0) goto Label_570; // 0x230 JumpB
	var_93_int = -4; // 0x231 PushI
	var_94_string = ""; var_95_int = 0; // 0x232 PushV
	var_95_int = 1; // 0x233 MovI
	func_2086(var_94_string, var_95_int); // 0x234 NEW_2
	SendMessage(var_93_int, var_94_string); // 0x236 Func
	var_22_string = ""; // 0x238 TMovS
	goto Label_599; // 0x239 Jump
	
Label_599:
	return 8; // 0x257 Return
	
Label_570:
	var_96_string = "ok_button"; // 0x23a PushS
	var_97_bool = var_22_string == var_96_string; // 0x23b Eq
	if(var_97_bool == 0) goto Label_579; // 0x23c JumpB
	var_98_int = -4; // 0x23d PushI
	var_99_string = "cancel_button"; // 0x23e PushS
	SendMessage(var_98_int, var_99_string); // 0x23f Func
	var_22_string = "cancel_button"; // 0x241 TMovS
	goto Label_599; // 0x242 Jump
	
Label_579:
	var_38_int = 0; // 0x243 MovI
	
Label_580:
	var_100_bool = var_38_int < var_0_int; // 0x244 LT
	if(var_100_bool == 0) goto Label_599; // 0x245 JumpB
	var_101_int = -16; // 0x246 PushI
	var_102_string = ""; var_103_int = 0; // 0x247 PushV
	var_103_int = var_38_int; // 0x248 Mov
	func_2086(var_102_string, var_103_int); // 0x249 NEW_2
	SendMessage(var_101_int, var_102_string); // 0x24b Func
	var_104_int = -16; // 0x24d PushI
	var_105_string = ""; var_106_int = 0; // 0x24e PushV
	var_106_int = var_38_int; // 0x24f Mov
	func_2070(var_105_string, var_106_int); // 0x250 NEW_2
	SendMessage(var_104_int, var_105_string); // 0x252 Func
	var_107_int = 1; // 0x254 PushI
	var_38_int = var_38_int + var_107_int; // 0x255 Add2
	goto Label_580; // 0x256 Jump
	
Label_535:
	var_37_int = 0; // 0x217 MovI
	
Label_536:
	var_108_bool = var_37_int < var_0_int; // 0x218 LT
	if(var_108_bool == 0) goto Label_555; // 0x219 JumpB
	var_109_int = -15; // 0x21a PushI
	var_110_string = ""; var_111_int = 0; // 0x21b PushV
	var_111_int = var_37_int; // 0x21c Mov
	func_2086(var_110_string, var_111_int); // 0x21d NEW_2
	SendMessage(var_109_int, var_110_string); // 0x21f Func
	var_112_int = -15; // 0x221 PushI
	var_113_string = ""; var_114_int = 0; // 0x222 PushV
	var_114_int = var_37_int; // 0x223 Mov
	func_2070(var_113_string, var_114_int); // 0x224 NEW_2
	SendMessage(var_112_int, var_113_string); // 0x226 Func
	var_115_int = 1; // 0x228 PushI
	var_37_int = var_37_int + var_115_int; // 0x229 Add2
	goto Label_536; // 0x22a Jump
}


task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int)
{
	DestroyWindow(); // 0x259 Func
	return 0; // 0x25b Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object, var_30_int, var_31_string, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0x25c PushV
	var_35_int = -20; // 0x25d PushI
	var_36_bool = var_30_int == var_35_int; // 0x25e Eq
	if(var_36_bool == 0) goto Label_613; // 0x25f JumpB
	var_22_string = ""; // 0x260 TMovS
	var_37_string = "iSlotResetButtons"; // 0x261 PushS
	Trace(var_37_string); // 0x262 Func
	return 2; // 0x264 Return
	
Label_613:
	var_38_int = -4; // 0x265 PushI
	var_39_bool = var_30_int == var_38_int; // 0x266 Eq
	if(var_39_bool == 0) goto Label_717; // 0x267 JumpB
	var_40_bool = 0; // 0x268 PushV
	var_40_bool = 1; // 0x269 MovB
	var_41_string = ""; var_42_int = 0; // 0x26a PushV
	var_42_int = 0; // 0x26b MovI
	func_2086(var_41_string, var_42_int); // 0x26c NEW_2
	var_53_bool = var_31_string == var_41_string; // 0x26e Eq
	if(var_53_bool == 0) goto Label_631; // 0x26f JumpB
	var_54_string = ""; var_55_int = 0; // 0x270 PushV
	var_55_int = 1; // 0x271 MovI
	func_2086(var_54_string, var_55_int); // 0x272 NEW_2
	var_56_bool = var_31_string == var_54_string; // 0x274 Eq
	if(var_56_bool == 0) goto Label_631; // 0x275 JumpB
	var_40_bool = 0; // 0x276 MovB
	
Label_631:
	if(var_40_bool == 0) goto Label_646; // 0x277 JumpB
	var_57_int = 2; // 0x278 PushI
	var_58_bool = var_2_int < var_57_int; // 0x279 LT
	if(var_58_bool == 0) goto Label_641; // 0x27a JumpB
	var_22_string = "cancel_button"; // 0x27b TMovS
	var_59_int = -4; // 0x27c PushI
	SendMessage(var_59_int, var_14_object); // 0x27d Func
	return 2; // 0x27f Return
	
Label_641:
	var_60_int = 2; // 0x281 PushI
	var_2_int = var_2_int - var_60_int; // 0x282 Sub2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x284 NEW_2
	
Label_646:
	var_148_bool = 0; // 0x286 PushV
	var_148_bool = 1; // 0x287 MovB
	var_149_string = ""; var_150_int = 0; // 0x288 PushV
	var_151_int = 1; // 0x289 PushI
	var_150_int = var_0_int - var_151_int; // 0x28a Sub2
	func_2086(var_149_string, var_150_int); // 0x28b NEW_2
	var_152_bool = var_31_string == var_149_string; // 0x28d Eq
	if(var_152_bool == 0) goto Label_663; // 0x28e JumpB
	var_153_string = ""; var_154_int = 0; // 0x28f PushV
	var_155_int = 2; // 0x290 PushI
	var_154_int = var_0_int - var_155_int; // 0x291 Sub2
	func_2086(var_153_string, var_154_int); // 0x292 NEW_2
	var_156_bool = var_31_string == var_153_string; // 0x294 Eq
	if(var_156_bool == 0) goto Label_663; // 0x295 JumpB
	var_148_bool = 0; // 0x296 MovB
	
Label_663:
	if(var_148_bool == 0) goto Label_669; // 0x297 JumpB
	var_157_int = 2; // 0x298 PushI
	var_2_int = var_2_int + var_157_int; // 0x299 Add2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x29b NEW_2
	
Label_669:
	var_158_bool = 0; // 0x29d PushV
	var_158_bool = 1; // 0x29e MovB
	var_159_string = ""; var_160_int = 0; // 0x29f PushV
	var_160_int = 0; // 0x2a0 MovI
	func_2070(var_159_string, var_160_int); // 0x2a1 NEW_2
	var_171_bool = var_31_string == var_159_string; // 0x2a3 Eq
	if(var_171_bool == 0) goto Label_684; // 0x2a4 JumpB
	var_172_string = ""; var_173_int = 0; // 0x2a5 PushV
	var_173_int = 1; // 0x2a6 MovI
	func_2070(var_172_string, var_173_int); // 0x2a7 NEW_2
	var_174_bool = var_31_string == var_172_string; // 0x2a9 Eq
	if(var_174_bool == 0) goto Label_684; // 0x2aa JumpB
	var_158_bool = 0; // 0x2ab MovB
	
Label_684:
	if(var_158_bool == 0) goto Label_690; // 0x2ac JumpB
	var_175_int = 2; // 0x2ad PushI
	var_1_int = var_1_int - var_175_int; // 0x2ae Sub2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x2b0 NEW_2
	
Label_690:
	var_233_bool = 0; // 0x2b2 PushV
	var_233_bool = 1; // 0x2b3 MovB
	var_234_string = ""; var_235_int = 0; // 0x2b4 PushV
	var_236_int = 1; // 0x2b5 PushI
	var_235_int = var_0_int - var_236_int; // 0x2b6 Sub2
	func_2070(var_234_string, var_235_int); // 0x2b7 NEW_2
	var_237_bool = var_31_string == var_234_string; // 0x2b9 Eq
	if(var_237_bool == 0) goto Label_707; // 0x2ba JumpB
	var_238_string = ""; var_239_int = 0; // 0x2bb PushV
	var_240_int = 2; // 0x2bc PushI
	var_239_int = var_0_int - var_240_int; // 0x2bd Sub2
	func_2070(var_238_string, var_239_int); // 0x2be NEW_2
	var_241_bool = var_31_string == var_238_string; // 0x2c0 Eq
	if(var_241_bool == 0) goto Label_707; // 0x2c1 JumpB
	var_233_bool = 0; // 0x2c2 MovB
	
Label_707:
	if(var_233_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_242_int = 2; // 0x2c4 PushI
	var_1_int = var_1_int + var_242_int; // 0x2c5 Add2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x2c7 NEW_2
	
Label_713:
	var_243_int = -4; // 0x2c9 PushI
	SendMessage(var_243_int, var_31_string); // 0x2ca Func
	return 2; // 0x2cc Return
	
Label_717:
	var_244_int = 0; var_245_int = 0; var_246_string = ""; // 0x2cd PushV
	var_245_int = var_30_int; // 0x2ce Mov
	var_246_string = var_31_string; // 0x2cf Mov
	func_2299(var_245_int, var_246_string); // 0x2d0 NEW_2
	var_34_int = var_244_int; // 0x2d1 Mov
	var_343_int = -1; // 0x2d3 PushI
	var_344_bool = var_34_int != var_343_int; // 0x2d4 Neq
	if(var_344_bool == 0) goto Label_739; // 0x2d5 JumpB
	var_345_int = 0; // 0x2d6 PushI
	var_346_bool = var_30_int == var_345_int; // 0x2d7 Eq
	if(var_346_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_347_int = 0; // 0x2d9 PushV
	var_347_int = var_34_int; // 0x2da Mov
	func_1749(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_347_int); // 0x2db NEW_2
	goto Label_738; // 0x2dd Jump
	
Label_738:
	return 2; // 0x2e2 Return
	
Label_734:
	var_537_int = 0; // 0x2de PushV
	var_537_int = var_34_int; // 0x2df Mov
	func_1815(var_31_string, var_32_object, var_33_int, var_34_int, var_537_int); // 0x2e0 NEW_2
	
Label_739:
	var_631_int = 0; var_632_int = 0; var_633_string = ""; // 0x2e3 PushV
	var_632_int = var_30_int; // 0x2e4 Mov
	var_633_string = var_31_string; // 0x2e5 Mov
	func_2320(var_632_int, var_633_string); // 0x2e6 NEW_2
	var_34_int = var_631_int; // 0x2e7 Mov
	var_644_int = -1; // 0x2e9 PushI
	var_645_bool = var_34_int != var_644_int; // 0x2ea Neq
	if(var_645_bool == 0) goto Label_761; // 0x2eb JumpB
	var_646_int = 0; // 0x2ec PushI
	var_647_bool = var_30_int == var_646_int; // 0x2ed Eq
	if(var_647_bool == 0) goto Label_756; // 0x2ee JumpB
	var_648_int = 0; // 0x2ef PushV
	var_648_int = var_34_int; // 0x2f0 Mov
	func_1879(var_31_string, var_32_object, var_33_int, var_34_int, var_648_int); // 0x2f1 NEW_2
	goto Label_760; // 0x2f3 Jump
	
Label_760:
	return 2; // 0x2f8 Return
	
Label_756:
	var_703_int = 0; // 0x2f4 PushV
	var_703_int = var_34_int; // 0x2f5 Mov
	func_1949(var_30_int, var_31_string, var_32_object, var_33_int, var_34_int, var_703_int); // 0x2f6 NEW_2
	
Label_761:
	var_752_string = "cancel_button"; // 0x2f9 PushS
	var_753_bool = var_31_string == var_752_string; // 0x2fa Eq
	if(var_753_bool == 0) goto Label_768; // 0x2fb JumpB
	func_872(var_28_int, var_29_object, var_30_int, var_31_string, var_32_object, var_33_int, var_34_int); // 0x2fd NEW_2
	return 2; // 0x2ff Return
	
Label_768:
	var_912_string = "background_left"; // 0x300 PushS
	var_913_bool = var_31_string == var_912_string; // 0x301 Eq
	if(var_913_bool == 0) goto Label_781; // 0x302 JumpB
	var_914_string = "background_left"; // 0x303 PushS
	var_915_int = var_914_string + var_30_int; // 0x304 Add
	Trace(var_915_int); // 0x305 Func
	var_916_int = 2; // 0x307 PushI
	var_917_float = var_916_int * var_30_int; // 0x308 Mult
	var_1_int = var_1_int - var_917_float; // 0x309 Sub2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x30b NEW_2
	
Label_781:
	var_918_string = "background_right"; // 0x30d PushS
	var_919_bool = var_31_string == var_918_string; // 0x30e Eq
	if(var_919_bool == 0) goto Label_794; // 0x30f JumpB
	var_920_string = "background_right"; // 0x310 PushS
	var_921_int = var_920_string + var_30_int; // 0x311 Add
	Trace(var_921_int); // 0x312 Func
	var_922_int = 2; // 0x314 PushI
	var_923_float = var_922_int * var_30_int; // 0x315 Mult
	var_2_int = var_2_int - var_923_float; // 0x316 Sub2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x318 NEW_2
	
Label_794:
	var_924_string = "l_scroll_button_top"; // 0x31a PushS
	var_925_bool = var_31_string == var_924_string; // 0x31b Eq
	if(var_925_bool == 0) goto Label_803; // 0x31c JumpB
	var_926_int = 2; // 0x31d PushI
	var_1_int = var_1_int - var_926_int; // 0x31e Sub2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x320 NEW_2
	return 2; // 0x322 Return
	
Label_803:
	var_927_string = "l_scroll_button_bottom"; // 0x323 PushS
	var_928_bool = var_31_string == var_927_string; // 0x324 Eq
	if(var_928_bool == 0) goto Label_812; // 0x325 JumpB
	var_929_int = 2; // 0x326 PushI
	var_1_int = var_1_int + var_929_int; // 0x327 Add2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x329 NEW_2
	return 2; // 0x32b Return
	
Label_812:
	var_930_string = "r_scroll_button_top"; // 0x32c PushS
	var_931_bool = var_31_string == var_930_string; // 0x32d Eq
	if(var_931_bool == 0) goto Label_821; // 0x32e JumpB
	var_932_int = 2; // 0x32f PushI
	var_2_int = var_2_int - var_932_int; // 0x330 Sub2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x332 NEW_2
	return 2; // 0x334 Return
	
Label_821:
	var_933_string = "r_scroll_button_bottom"; // 0x335 PushS
	var_934_bool = var_31_string == var_933_string; // 0x336 Eq
	if(var_934_bool == 0) goto Label_830; // 0x337 JumpB
	var_935_int = 2; // 0x338 PushI
	var_2_int = var_2_int + var_935_int; // 0x339 Add2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x33b NEW_2
	return 2; // 0x33d Return
	
Label_830:
	var_936_string = "l_scrollbar"; // 0x33e PushS
	var_937_bool = var_31_string == var_936_string; // 0x33f Eq
	if(var_937_bool == 0) goto Label_847; // 0x340 JumpB
	var_938_int = 0; // 0x341 PushV
	func_1207(var_34_int, var_938_int); // 0x342 NEW_2
	var_953_float = var_938_int * var_30_int; // 0x344 Mult
	var_954_float = 100.0; // 0x345 PushF
	var_955_float = var_953_float / var_954_float; // 0x346 Div
	var_956_float = 0.5; // 0x347 PushF
	var_1_int = var_955_float + var_956_float; // 0x348 Add2
	var_957_int = 2; // 0x349 PushI
	var_1_int = var_1_int * var_957_int; // 0x34a Mult2
	func_1245(var_32_object, var_33_int, var_34_int); // 0x34c NEW_2
	return 2; // 0x34e Return
	
Label_847:
	var_958_string = "r_scrollbar"; // 0x34f PushS
	var_959_bool = var_31_string == var_958_string; // 0x350 Eq
	if(var_959_bool == 0) goto Label_864; // 0x351 JumpB
	var_960_int = 0; // 0x352 PushV
	func_1226(var_34_int, var_960_int); // 0x353 NEW_2
	var_975_float = var_960_int * var_30_int; // 0x355 Mult
	var_976_float = 100.0; // 0x356 PushF
	var_977_float = var_975_float / var_976_float; // 0x357 Div
	var_978_float = 0.5; // 0x358 PushF
	var_2_int = var_977_float + var_978_float; // 0x359 Add2
	var_979_int = 2; // 0x35a PushI
	var_2_int = var_2_int * var_979_int; // 0x35b Mult2
	func_1332(var_32_object, var_33_int, var_34_int); // 0x35d NEW_2
	return 2; // 0x35f Return
	
Label_864:
	var_980_string = "ok_button"; // 0x360 PushS
	var_981_bool = var_31_string == var_980_string; // 0x361 Eq
	if(var_981_bool == 0) goto Label_871; // 0x362 JumpB
	func_1436(var_33_int, var_34_int); // 0x364 NEW_2
	return 2; // 0x366 Return
	
Label_871:
	return 2; // 0x367 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_string, var_23_object, var_24_object, var_25_object, var_26_object, var_27_int, var_28_int, var_29_object)
{
	var_30_int = 0; var_31_string = ""; var_32_string = ""; var_33_string = ""; var_34_string = ""; var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; var_42_object = Obj(); var_43_object = Obj(); var_44_float = 0; var_45_int = 0; var_46_string = ""; var_47_string = ""; var_48_string = ""; var_49_string = ""; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_string = ""; var_54_string = ""; var_55_string = ""; var_56_string = ""; var_57_object = Obj(); var_58_object = Obj(); var_59_float = 0; // 0x62 PushV
	var_60_int = 0; // 0x63 PushV
	func_2102(var_60_int); // 0x64 NEW_2
	var_0_int = var_60_int; // 0x65 TMov
	GetContainer(var_31_string); // 0x67 Func
	CreateObjectVector(var_37_int); // 0x69 Func
	CreateObjectVector(var_36_object); // 0x6b Func
	CreateObjectVector(var_55_string); // 0x6d Func
	CreateIntVector(var_54_string); // 0x6f Func
	CreateIntVector(var_53_string); // 0x71 Func
	CreateIntVector(var_52_int); // 0x73 Func
	CreateObjectVector(var_51_object); // 0x75 Func
	CreateIntVector(var_50_object); // 0x77 Func
	CreateIntVector(var_49_string); // 0x79 Func
	CreateObjectVector(var_48_string); // 0x7b Func
	CreateIntVector(var_47_string); // 0x7d Func
	CreateObjectVector(var_46_string); // 0x7f Func
	CreateIntVector(var_45_int); // 0x81 Func
	CreateObjectVector(var_44_float); // 0x83 Func
	CreateIntVector(var_43_object); // 0x85 Func
	CreateObjectVector(var_42_object); // 0x87 Func
	CreateIntVector(var_41_string); // 0x89 Func
	CreateObjectVector(var_40_string); // 0x8b Func
	CreateIntVector(var_39_string); // 0x8d Func
	var_147_int = 0; // 0x8f PushV
	func_2393(var_147_int); // 0x90 NEW_2
	var_28_int = var_147_int; // 0x91 TMov
	var_22_string = ""; // 0x93 TMovS
	var_45_int = 0; // 0x94 MovI
	
Label_149:
	var_157_bool = var_45_int < var_0_int; // 0x95 LT
	if(var_157_bool == 0) goto Label_231; // 0x96 JumpB
	var_46_string = ""; // 0x97 MovS
	var_47_string = ""; // 0x98 MovS
	var_48_string = "$parent"; // 0x99 MovS
	var_49_string = "$parent"; // 0x9a MovS
	var_158_int = 2; // 0x9b PushI
	var_159_int = var_45_int / var_158_int; // 0x9c Mod
	var_160_int = 0; // 0x9d PushI
	var_161_bool = var_159_int == var_160_int; // 0x9e Eq
	if(var_161_bool == 0) goto Label_173; // 0x9f JumpB
	var_162_string = ""; var_163_int = 0; // 0xa0 PushV
	var_164_int = 1; // 0xa1 PushI
	var_163_int = var_45_int + var_164_int; // 0xa2 Add2
	func_2086(var_162_string, var_163_int); // 0xa3 NEW_2
	var_47_string = var_162_string; // 0xa4 Mov
	var_175_string = ""; var_176_int = 0; // 0xa6 PushV
	var_177_int = 1; // 0xa7 PushI
	var_176_int = var_45_int + var_177_int; // 0xa8 Add2
	func_2070(var_175_string, var_176_int); // 0xa9 NEW_2
	var_46_string = var_175_string; // 0xaa Mov
	goto Label_179; // 0xac Jump
	
Label_179:
	var_188_int = 1; // 0xb3 PushI
	var_189_bool = var_45_int > var_188_int; // 0xb4 GT
	if(var_189_bool == 0) goto Label_188; // 0xb5 JumpB
	var_190_string = ""; var_191_int = 0; // 0xb6 PushV
	var_192_int = 2; // 0xb7 PushI
	var_191_int = var_45_int - var_192_int; // 0xb8 Sub2
	func_2086(var_190_string, var_191_int); // 0xb9 NEW_2
	var_48_string = var_190_string; // 0xba Mov
	
Label_188:
	var_193_int = 2; // 0xbc PushI
	var_194_int = var_0_int - var_193_int; // 0xbd Sub
	var_195_bool = var_45_int < var_194_int; // 0xbe LT
	if(var_195_bool == 0) goto Label_198; // 0xbf JumpB
	var_196_string = ""; var_197_int = 0; // 0xc0 PushV
	var_198_int = 2; // 0xc1 PushI
	var_197_int = var_45_int + var_198_int; // 0xc2 Add2
	func_2086(var_196_string, var_197_int); // 0xc3 NEW_2
	var_49_string = var_196_string; // 0xc4 Mov
	
Label_198:
	CreateStringVector(var_50_object); // 0xc6 Func
	add(var_46_string); // 0xc8 ObjFunc
	add(var_47_string); // 0xca ObjFunc
	add(var_48_string); // 0xcc ObjFunc
	add(var_49_string); // 0xce ObjFunc
	var_199_int = -1; // 0xd0 PushI
	var_200_string = ""; var_201_int = 0; // 0xd1 PushV
	var_201_int = var_45_int; // 0xd2 Mov
	func_2086(var_200_string, var_201_int); // 0xd3 NEW_2
	SendMessage(var_199_int, var_200_string, var_50_object); // 0xd5 Func
	CreateIntVector(var_51_object); // 0xd7 Func
	add(var_0_int); // 0xd9 ObjFunc
	var_202_int = -19; // 0xdb PushI
	var_203_string = ""; var_204_int = 0; // 0xdc PushV
	var_204_int = var_45_int; // 0xdd Mov
	func_2086(var_203_string, var_204_int); // 0xde NEW_2
	SendMessage(var_202_int, var_203_string, var_51_object); // 0xe0 Func
	var_51_object = 0; // 0xe2 SetNull
	var_50_object = 0; // 0xe3 SetNull
	var_205_int = 1; // 0xe4 PushI
	var_45_int = var_45_int + var_205_int; // 0xe5 Add2
	goto Label_149; // 0xe6 Jump
	
Label_173:
	var_206_string = ""; var_207_int = 0; // 0xad PushV
	var_208_int = 1; // 0xae PushI
	var_207_int = var_45_int - var_208_int; // 0xaf Sub2
	func_2086(var_206_string, var_207_int); // 0xb0 NEW_2
	var_46_string = var_206_string; // 0xb1 Mov
	
Label_231:
	var_52_int = 0; // 0xe7 MovI
	
Label_232:
	var_209_bool = var_52_int < var_0_int; // 0xe8 LT
	if(var_209_bool == 0) goto Label_314; // 0xe9 JumpB
	var_53_string = ""; // 0xea MovS
	var_54_string = ""; // 0xeb MovS
	var_55_string = "$parent"; // 0xec MovS
	var_56_string = "$parent"; // 0xed MovS
	var_210_int = 2; // 0xee PushI
	var_211_int = var_52_int / var_210_int; // 0xef Mod
	var_212_int = 0; // 0xf0 PushI
	var_213_bool = var_211_int == var_212_int; // 0xf1 Eq
	if(var_213_bool == 0) goto Label_250; // 0xf2 JumpB
	var_214_string = ""; var_215_int = 0; // 0xf3 PushV
	var_216_int = 1; // 0xf4 PushI
	var_215_int = var_52_int + var_216_int; // 0xf5 Add2
	func_2070(var_214_string, var_215_int); // 0xf6 NEW_2
	var_54_string = var_214_string; // 0xf7 Mov
	goto Label_262; // 0xf9 Jump
	
Label_262:
	var_217_int = 1; // 0x106 PushI
	var_218_bool = var_52_int > var_217_int; // 0x107 GT
	if(var_218_bool == 0) goto Label_271; // 0x108 JumpB
	var_219_string = ""; var_220_int = 0; // 0x109 PushV
	var_221_int = 2; // 0x10a PushI
	var_220_int = var_52_int - var_221_int; // 0x10b Sub2
	func_2070(var_219_string, var_220_int); // 0x10c NEW_2
	var_55_string = var_219_string; // 0x10d Mov
	
Label_271:
	var_222_int = 2; // 0x10f PushI
	var_223_int = var_0_int - var_222_int; // 0x110 Sub
	var_224_bool = var_52_int < var_223_int; // 0x111 LT
	if(var_224_bool == 0) goto Label_281; // 0x112 JumpB
	var_225_string = ""; var_226_int = 0; // 0x113 PushV
	var_227_int = 2; // 0x114 PushI
	var_226_int = var_52_int + var_227_int; // 0x115 Add2
	func_2070(var_225_string, var_226_int); // 0x116 NEW_2
	var_56_string = var_225_string; // 0x117 Mov
	
Label_281:
	CreateStringVector(var_57_object); // 0x119 Func
	add(var_53_string); // 0x11b ObjFunc
	add(var_54_string); // 0x11d ObjFunc
	add(var_55_string); // 0x11f ObjFunc
	add(var_56_string); // 0x121 ObjFunc
	var_228_int = -1; // 0x123 PushI
	var_229_string = ""; var_230_int = 0; // 0x124 PushV
	var_230_int = var_52_int; // 0x125 Mov
	func_2070(var_229_string, var_230_int); // 0x126 NEW_2
	SendMessage(var_228_int, var_229_string, var_57_object); // 0x128 Func
	CreateIntVector(var_58_object); // 0x12a Func
	add(var_0_int); // 0x12c ObjFunc
	var_231_int = -19; // 0x12e PushI
	var_232_string = ""; var_233_int = 0; // 0x12f PushV
	var_233_int = var_52_int; // 0x130 Mov
	func_2070(var_232_string, var_233_int); // 0x131 NEW_2
	SendMessage(var_231_int, var_232_string, var_58_object); // 0x133 Func
	var_58_object = 0; // 0x135 SetNull
	var_57_object = 0; // 0x136 SetNull
	var_234_int = 1; // 0x137 PushI
	var_52_int = var_52_int + var_234_int; // 0x138 Add2
	goto Label_232; // 0x139 Jump
	
Label_250:
	var_235_string = ""; var_236_int = 0; // 0xfa PushV
	var_237_int = 1; // 0xfb PushI
	var_236_int = var_52_int - var_237_int; // 0xfc Sub2
	func_2070(var_235_string, var_236_int); // 0xfd NEW_2
	var_53_string = var_235_string; // 0xfe Mov
	var_238_string = ""; var_239_int = 0; // 0x100 PushV
	var_240_int = 1; // 0x101 PushI
	var_239_int = var_52_int - var_240_int; // 0x102 Sub2
	func_2086(var_238_string, var_239_int); // 0x103 NEW_2
	var_54_string = var_238_string; // 0x104 Mov
	
Label_314:
	var_241_int = -6; // 0x13a PushI
	var_242_string = ""; var_243_int = 0; // 0x13b PushV
	var_243_int = 0; // 0x13c MovI
	func_2086(var_242_string, var_243_int); // 0x13d NEW_2
	SendMessage(var_241_int, var_242_string); // 0x13f Func
	func_872(var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float); // 0x142 NEW_2
	GetGameTime(var_59_float); // 0x144 Func
	var_548_int = 1; // 0x146 PushI
	var_549_int = 24; // 0x147 PushI
	var_550_float = var_59_float / var_549_int; // 0x148 Div
	var_27_int = var_548_int + var_550_float; // 0x149 Add2
	ShowCursor(); // 0x14a Func
	var_551_string = "default"; // 0x14c PushS
	SetCursor(var_551_string); // 0x14d Func
	CaptureKeyboard(); // 0x14f Func
	ProcessEvents(); // 0x151 Func
	return 30; // 0x153 Return
}


func_0(var_325_bool, var_326_object, var_327_int, var_328_bool)
{
	var_329_bool = 0; var_330_int = 0; var_331_bool = 0; var_332_int = 0; // 0x0 PushV
	var_333_int = 0; // 0x1 PushI
	var_334_bool = var_327_int == var_333_int; // 0x2 Eq
	if(var_334_bool == 0) goto Label_6; // 0x3 JumpB
	var_325_bool = 0; // 0x4 MovB
	return 4; // 0x5 Return
	
Label_6:
	var_335_int = 0; var_336_object = Obj(); // 0x6 PushV
	var_336_object = var_326_object; // 0x7 Mov
	func_2409(var_336_object); // 0x8 NEW_2
	var_339_string = "BarterPrice"; // 0xa PushS
	var_340_int = var_339_string + var_327_int; // 0xb Add
	HasInvItemProperty(var_331_bool, var_335_int, var_340_int); // 0xc Func
	var_341_bool = var_331_bool == 0; // 0xe Not
	if(var_341_bool == 0) goto Label_18; // 0xf JumpB
	var_325_bool = 1; // 0x10 MovB
	return 4; // 0x11 Return
	
Label_18:
	var_342_int = 0; var_343_object = Obj(); // 0x12 PushV
	var_343_object = var_326_object; // 0x13 Mov
	func_2409(var_343_object); // 0x14 NEW_2
	var_344_string = "BarterPrice"; // 0x16 PushS
	var_345_int = var_344_string + var_327_int; // 0x17 Add
	GetInvItemProperty(var_332_int, var_342_int, var_345_int); // 0x18 Func
	var_346_bool = 0; // 0x1a PushV
	var_346_bool = 0; // 0x1b MovB
	var_347_bool = var_328_bool; // 0x1c Push
	if(var_347_bool == 0) goto Label_34; // 0x1d JumpB
	var_348_int = 0; // 0x1e PushI
	var_349_bool = var_332_int > var_348_int; // 0x1f GT
	if(var_349_bool == 0) goto Label_34; // 0x20 JumpB
	var_346_bool = 1; // 0x21 MovB
	
Label_34:
	if(var_346_bool == 0) goto Label_37; // 0x22 JumpB
	var_325_bool = 0; // 0x23 MovB
	return 4; // 0x24 Return
	
Label_37:
	var_350_bool = 0; // 0x25 PushV
	var_350_bool = 0; // 0x26 MovB
	var_351_bool = var_328_bool == 0; // 0x27 Not
	if(var_351_bool == 0) goto Label_45; // 0x28 JumpB
	var_352_int = 0; // 0x29 PushI
	var_353_bool = var_332_int < var_352_int; // 0x2a LT
	if(var_353_bool == 0) goto Label_45; // 0x2b JumpB
	var_350_bool = 1; // 0x2c MovB
	
Label_45:
	if(var_350_bool == 0) goto Label_48; // 0x2d JumpB
	var_325_bool = 0; // 0x2e MovB
	return 4; // 0x2f Return
	
Label_48:
	var_325_bool = 1; // 0x30 MovB
	return 4; // 0x31 Return
}


func_2048(var_2_int, var_504_int, var_505_int)
{
	var_506_int = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0; // 0x800 PushV
	size(var_508_int); // 0x801 TObjFunc
	var_510_int = var_505_int + var_2_int; // 0x803 Add
	var_511_bool = var_510_int >= var_508_int; // 0x804 GE
	if(var_511_bool == 0) goto Label_2056; // 0x805 JumpB
	var_504_int = 0; // 0x806 MovI
	return 4; // 0x807 Return
	
Label_2056:
	var_512_int = var_505_int + var_2_int; // 0x808 Add
	get(var_509_int, var_512_int); // 0x809 TObjFunc
	var_504_int = var_509_int; // 0x80b Mov
	return 4; // 0x80c Return
}


func_2562(var_264_int, var_265_int)
{
	var_266_object = Obj(); var_267_int = 0; var_268_object = Obj(); var_269_int = 0; // 0xa02 PushV
	GetContainer(var_268_object); // 0xa03 Func
	GetItemAmount(var_269_int, var_265_int); // 0xa05 ObjFunc
	var_264_int = var_269_int; // 0xa07 Mov
	return 4; // 0xa08 Return
}


func_1146(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object)
{
	var_384_int = 0; var_385_object = Obj(); var_386_object = Obj(); // 0x47a PushV
	var_384_int = 0; // 0x47b MovI
	var_385_object = var_12_object; // 0x47c MovT
	var_386_object = var_13_object; // 0x47d MovT
	func_1177(var_386_object); // 0x47e NEW_2
	var_405_int = 0; var_406_object = Obj(); var_407_object = Obj(); // 0x480 PushV
	var_405_int = 1; // 0x481 MovI
	var_406_object = var_14_object; // 0x482 MovT
	var_407_object = var_15_object; // 0x483 MovT
	func_1177(var_407_object); // 0x484 NEW_2
	var_408_int = 0; var_409_object = Obj(); var_410_object = Obj(); // 0x486 PushV
	var_408_int = 2; // 0x487 MovI
	var_409_object = var_16_object; // 0x488 MovT
	var_410_object = var_17_object; // 0x489 MovT
	func_1177(var_410_object); // 0x48a NEW_2
	var_411_int = 0; var_412_object = Obj(); var_413_object = Obj(); // 0x48c PushV
	var_411_int = 3; // 0x48d MovI
	var_412_object = var_18_object; // 0x48e MovT
	var_413_object = var_19_object; // 0x48f MovT
	func_1177(var_413_object); // 0x490 NEW_2
	var_414_int = 0; var_415_object = Obj(); var_416_object = Obj(); // 0x492 PushV
	var_414_int = 4; // 0x493 MovI
	var_415_object = var_20_object; // 0x494 MovT
	var_416_object = var_21_object; // 0x495 MovT
	func_1177(var_416_object); // 0x496 NEW_2
	return 0; // 0x498 Return
}


func_2570(var_484_bool, var_486_object)
{
	var_487_bool = 0; var_488_bool = 0; // 0xa0a PushV
	Compare(var_488_bool, var_486_object); // 0xa0b ObjFunc
	var_484_bool = var_488_bool; // 0xa0d Mov
	return 2; // 0xa0e Return
}


func_2061(var_391_int)
{
	var_392_float = 0; var_393_float = 0; // 0x80d PushV
	GetGameTime(var_393_float); // 0x80e Func
	var_394_int = 1; // 0x810 PushI
	var_395_int = 0; // 0x811 PushV
	var_396_int = 24; // 0x812 PushI
	var_395_int = var_393_float / var_393_float; // 0x813 Div2
	var_391_int = var_394_int + var_395_int; // 0x814 Add2
	return 2; // 0x815 Return
}


func_2575(var_481_bool, var_482_object, var_483_object)
{
	var_484_bool = 0; var_485_object = Obj(); var_486_object = Obj(); // 0xa10 PushV
	var_485_object = var_482_object; // 0xa11 Mov
	var_486_object = var_483_object; // 0xa12 Mov
	func_2570(var_485_object, var_486_object); // 0xa13 NEW_2
	var_481_bool = var_484_bool; // 0xa14 Mov
	return 0; // 0xa16 Return
}


func_2320(var_631_int, var_633_string)
{
	var_634_int = 0; var_635_int = 0; var_636_int = 0; var_637_int = 0; // 0x910 PushV
	var_638_int = 0; // 0x911 PushV
	func_2102(var_638_int); // 0x912 NEW_2
	var_636_int = var_638_int; // 0x913 Mov
	var_637_int = 0; // 0x915 MovI
	
Label_2326:
	var_639_bool = var_637_int < var_636_int; // 0x916 LT
	if(var_639_bool == 0) goto Label_2339; // 0x917 JumpB
	var_640_string = ""; var_641_int = 0; // 0x918 PushV
	var_641_int = var_637_int; // 0x919 Mov
	func_2086(var_640_string, var_641_int); // 0x91a NEW_2
	var_642_bool = var_633_string == var_640_string; // 0x91c Eq
	if(var_642_bool == 0) goto Label_2336; // 0x91d JumpB
	var_631_int = var_637_int; // 0x91e Mov
	return 4; // 0x91f Return
	
Label_2336:
	var_643_int = 1; // 0x920 PushI
	var_637_int = var_637_int + var_643_int; // 0x921 Add2
	goto Label_2326; // 0x922 Jump
	
Label_2339:
	var_631_int = -1; // 0x923 MovI
	return 4; // 0x924 Return
}


func_1428(var_244_int)
{
	var_537_string = "r_money_slot"; // 0x594 PushS
	SendMessage(var_244_int, var_537_string); // 0x595 Func
	return 0; // 0x597 Return
}


func_2070(var_175_string, var_176_int)
{
	var_178_int = 1; // 0x817 PushI
	var_179_int = var_176_int + var_178_int; // 0x818 Add
	var_180_int = 10; // 0x819 PushI
	var_181_bool = var_179_int < var_180_int; // 0x81a LT
	if(var_181_bool == 0) goto Label_2081; // 0x81b JumpB
	var_182_string = "l_slot0"; // 0x81c PushS
	var_183_int = 1; // 0x81d PushI
	var_184_int = var_176_int + var_183_int; // 0x81e Add
	var_175_string = var_182_string + var_184_int; // 0x81f Add2
	return 0; // 0x820 Return
	
Label_2081:
	var_185_string = "l_slot"; // 0x821 PushS
	var_186_int = 1; // 0x822 PushI
	var_187_int = var_176_int + var_186_int; // 0x823 Add
	var_175_string = var_185_string + var_187_int; // 0x824 Add2
	return 0; // 0x825 Return
}


func_2583(var_997_bool, var_999_object, var_1000_int)
{
	var_1003_int = 0; var_1004_object = Obj(); var_1005_int = 0; var_1006_int = 0; var_1007_object = Obj(); var_1008_int = 0; // 0xa17 PushV
	GetItemCount(var_1006_int, var_1000_int); // 0xa18 ObjFunc
	var_1008_int = 0; // 0xa1a MovI
	
Label_2587:
	var_1009_bool = var_1008_int < var_1006_int; // 0xa1b LT
	if(var_1009_bool == 0) goto Label_2605; // 0xa1c JumpB
	GetItem(var_1007_object, var_1008_int, var_1000_int); // 0xa1d ObjFunc
	var_1010_bool = 0; var_1011_object = Obj(); var_1012_object = Obj(); // 0xa1f PushV
	var_1011_object = var_999_object; // 0xa20 Mov
	var_1012_object = var_1007_object; // 0xa21 Mov
	func_2570(var_1011_object, var_1012_object); // 0xa22 NEW_2
	if(var_1010_bool == 0) goto Label_2602; // 0xa24 JumpB
	var_1013_int = 1; // 0xa25 PushI
	RemoveItem(var_1008_int, var_1013_int, var_1000_int); // 0xa26 ObjFunc
	var_997_bool = 1; // 0xa28 MovB
	return 6; // 0xa29 Return
	
Label_2602:
	var_1014_int = 1; // 0xa2a PushI
	var_1008_int = var_1008_int + var_1014_int; // 0xa2b Add2
	goto Label_2587; // 0xa2c Jump
	
Label_2605:
	var_997_bool = 0; // 0xa2d MovB
	return 6; // 0xa2e Return
}


func_1815(var_1_int, var_27_int, var_28_int, var_29_object, var_537_int)
{
	var_538_int = 0; var_539_object = Obj(); var_540_int = 0; var_541_int = 0; var_542_int = 0; var_543_int = 0; var_544_object = Obj(); var_545_int = 0; var_546_int = 0; var_547_int = 0; // 0x717 PushV
	size(var_543_int); // 0x718 TObjFunc
	var_548_int = var_537_int + var_1_int; // 0x71a Add
	var_549_bool = var_548_int >= var_543_int; // 0x71b GE
	if(var_549_bool == 0) goto Label_1822; // 0x71c JumpB
	return 10; // 0x71d Return
	
Label_1822:
	var_550_int = var_537_int + var_1_int; // 0x71e Add
	get(var_544_object, var_550_int); // 0x71f TObjFunc
	var_551_bool = 0; var_552_object = Obj(); var_553_int = 0; var_554_bool = 0; // 0x721 PushV
	var_552_object = var_544_object; // 0x722 Mov
	var_553_int = var_28_int; // 0x723 MovT
	var_554_bool = 0; // 0x724 MovB
	func_0(var_551_bool, var_552_object, var_553_int, var_554_bool); // 0x725 NEW_2
	if(var_551_bool == 0) goto Label_1833; // 0x727 JumpB
	return 10; // 0x728 Return
	
Label_1833:
	var_555_int = var_537_int + var_1_int; // 0x729 Add
	get(var_545_int, var_555_int); // 0x72a TObjFunc
	var_556_int = var_537_int + var_1_int; // 0x72c Add
	get(var_546_int, var_556_int); // 0x72d TObjFunc
	var_557_int = 0; // 0x72f PushI
	var_558_bool = var_545_int > var_557_int; // 0x730 GT
	if(var_558_bool == 0) goto Label_1871; // 0x731 JumpB
	var_559_bool = 0; var_560_object = Obj(); // 0x732 PushV
	var_560_object = var_544_object; // 0x733 Mov
	func_1591(var_538_int, var_539_object, var_540_int, var_541_int, var_542_int, var_543_int, var_544_object, var_545_int, var_546_int, var_547_int, var_559_bool, var_560_object); // 0x734 NEW_2
	var_609_object = Obj(); // 0x736 PushV
	var_609_object = var_544_object; // 0x737 Mov
	func_74(var_609_object); // 0x738 NEW_2
	var_621_int = -1; // 0x73a PushI
	var_545_int = var_545_int + var_621_int; // 0x73b Add2
	var_622_int = var_537_int + var_1_int; // 0x73c Add
	set(var_622_int, var_545_int); // 0x73d TObjFunc
	var_623_int = 0; var_624_object = Obj(); var_625_int = 0; // 0x73f PushV
	var_624_object = var_544_object; // 0x740 Mov
	var_625_int = var_28_int; // 0x741 MovT
	func_2414(var_623_int, var_624_object, var_625_int); // 0x742 NEW_2
	var_626_float = 0; var_627_object = Obj(); var_628_int = 0; var_629_int = 0; // 0x744 PushV
	var_627_object = var_29_object; // 0x745 MovT
	var_628_int = var_27_int; // 0x746 MovT
	var_629_int = var_28_int; // 0x747 MovT
	func_2367(var_627_object, var_628_int, var_629_int); // 0x748 NEW_2
	var_547_int = var_623_int * var_626_float; // 0x74a Mult2
	var_630_int = 0; // 0x74b PushV
	var_630_int = var_547_int; // 0x74c Mov
	func_1739(var_546_int, var_547_int, var_630_int); // 0x74d NEW_2
	
Label_1871:
	func_1245(var_545_int, var_546_int, var_547_int); // 0x750 NEW_2
	func_1332(var_545_int, var_546_int, var_547_int); // 0x753 NEW_2
	return 10; // 0x755 Return
}


func_1432(var_59_float)
{
	var_474_string = "l_money_slot"; // 0x598 PushS
	SendMessage(var_59_float, var_474_string); // 0x599 Func
	return 0; // 0x59b Return
}


func_1177(var_384_int)
{
	var_387_object = Obj(); var_388_int = 0; var_389_int = 0; var_390_int = 0; var_391_object = Obj(); var_392_int = 0; var_393_int = 0; var_394_int = 0; // 0x499 PushV
	var_395_int = 0; var_396_int = 0; // 0x49a PushV
	var_396_int = var_384_int; // 0x49b Mov
	func_2520(var_395_int, var_396_int); // 0x49c NEW_2
	var_392_int = var_395_int; // 0x49d Mov
	var_394_int = 0; // 0x49f MovI
	
Label_1184:
	var_397_bool = var_394_int < var_392_int; // 0x4a0 LT
	if(var_397_bool == 0) goto Label_1205; // 0x4a1 JumpB
	var_398_int = 0; var_399_int = 0; var_400_int = 0; // 0x4a2 PushV
	var_399_int = var_384_int; // 0x4a3 Mov
	var_400_int = var_394_int; // 0x4a4 Mov
	func_2537(var_398_int, var_399_int, var_400_int); // 0x4a5 NEW_2
	var_393_int = var_398_int; // 0x4a6 Mov
	var_401_object = Obj(); var_402_int = 0; var_403_int = 0; // 0x4a8 PushV
	var_402_int = var_384_int; // 0x4a9 Mov
	var_403_int = var_394_int; // 0x4aa Mov
	func_2528(var_401_object, var_402_int, var_403_int); // 0x4ab NEW_2
	var_391_object = var_401_object; // 0x4ac Mov
	add(var_391_object); // 0x4ae ObjFunc
	add(var_393_int); // 0x4b0 ObjFunc
	var_404_int = 1; // 0x4b2 PushI
	var_394_int = var_394_int + var_404_int; // 0x4b3 Add2
	goto Label_1184; // 0x4b4 Jump
	
Label_1205:
	return 8; // 0x4b5 Return
}


func_1436(var_4_int, var_28_int)
{
	var_982_int = 0; var_983_bool = 0; var_984_object = Obj(); var_985_object = Obj(); var_986_object = Obj(); var_987_int = 0; var_988_int = 0; var_989_int = 0; var_990_bool = 0; var_991_object = Obj(); var_992_object = Obj(); var_993_object = Obj(); var_994_int = 0; var_995_int = 0; // 0x59c PushV
	GetContainer(var_992_object); // 0x59d Func
	GetPlayerContainer(var_993_object); // 0x59f Func
	size(var_989_int); // 0x5a1 TObjFunc
	var_994_int = 0; // 0x5a3 MovI
	
Label_1444:
	var_996_bool = var_994_int < var_989_int; // 0x5a4 LT
	if(var_996_bool == 0) goto Label_1479; // 0x5a5 JumpB
	get(var_991_object, var_994_int); // 0x5a6 TObjFunc
	var_997_bool = 0; var_998_object = Obj(); var_999_object = Obj(); var_1000_int = 0; // 0x5a8 PushV
	var_998_object = var_993_object; // 0x5a9 Mov
	var_999_object = var_991_object; // 0x5aa Mov
	var_1001_int = 0; var_1002_object = Obj(); // 0x5ab PushV
	var_1002_object = var_991_object; // 0x5ac Mov
	func_2493(var_1001_int, var_1002_object); // 0x5ad NEW_2
	var_1000_int = var_1001_int; // 0x5ae Mov
	func_2583(var_998_object, var_999_object, var_1000_int); // 0x5b0 NEW_2
	var_990_bool = var_997_bool; // 0x5b1 Mov
	var_1015_bool = var_990_bool == 0; // 0x5b3 Not
	if(var_1015_bool == 0) goto Label_1464; // 0x5b4 JumpB
	var_1016_string = "Error: failed to remove item"; // 0x5b5 PushS
	Trace(var_1016_string); // 0x5b6 Func
	
Label_1464:
	var_1017_bool = 0; var_1018_object = Obj(); var_1019_object = Obj(); var_1020_int = 0; // 0x5b8 PushV
	var_1018_object = var_992_object; // 0x5b9 Mov
	var_1019_object = var_991_object; // 0x5ba Mov
	var_1020_int = 0; // 0x5bb MovI
	func_2608(var_1018_object, var_1019_object, var_1020_int); // 0x5bc NEW_2
	var_990_bool = var_1017_bool; // 0x5bd Mov
	var_1024_bool = var_990_bool == 0; // 0x5bf Not
	if(var_1024_bool == 0) goto Label_1476; // 0x5c0 JumpB
	var_1025_string = "Error: failed to add item"; // 0x5c1 PushS
	Trace(var_1025_string); // 0x5c2 Func
	
Label_1476:
	var_1026_int = 1; // 0x5c4 PushI
	var_994_int = var_994_int + var_1026_int; // 0x5c5 Add2
	goto Label_1444; // 0x5c6 Jump
	
Label_1479:
	size(var_989_int); // 0x5c7 TObjFunc
	var_995_int = 0; // 0x5c9 MovI
	
Label_1482:
	var_1027_bool = var_995_int < var_989_int; // 0x5ca LT
	if(var_1027_bool == 0) goto Label_1517; // 0x5cb JumpB
	get(var_991_object, var_995_int); // 0x5cc TObjFunc
	var_1028_bool = 0; var_1029_object = Obj(); var_1030_object = Obj(); var_1031_int = 0; // 0x5ce PushV
	var_1029_object = var_992_object; // 0x5cf Mov
	var_1030_object = var_991_object; // 0x5d0 Mov
	var_1031_int = 0; // 0x5d1 MovI
	func_2583(var_1029_object, var_1030_object, var_1031_int); // 0x5d2 NEW_2
	var_990_bool = var_1028_bool; // 0x5d3 Mov
	var_1032_bool = var_990_bool == 0; // 0x5d5 Not
	if(var_1032_bool == 0) goto Label_1498; // 0x5d6 JumpB
	var_1033_string = "Error: failed to remove item"; // 0x5d7 PushS
	Trace(var_1033_string); // 0x5d8 Func
	
Label_1498:
	var_1034_bool = 0; var_1035_object = Obj(); var_1036_object = Obj(); var_1037_int = 0; // 0x5da PushV
	var_1035_object = var_993_object; // 0x5db Mov
	var_1036_object = var_991_object; // 0x5dc Mov
	var_1038_int = 0; var_1039_object = Obj(); // 0x5dd PushV
	var_1039_object = var_991_object; // 0x5de Mov
	func_2493(var_1038_int, var_1039_object); // 0x5df NEW_2
	var_1037_int = var_1038_int; // 0x5e0 Mov
	func_2608(var_1035_object, var_1036_object, var_1037_int); // 0x5e2 NEW_2
	var_990_bool = var_1034_bool; // 0x5e3 Mov
	var_1040_bool = var_990_bool == 0; // 0x5e5 Not
	if(var_1040_bool == 0) goto Label_1514; // 0x5e6 JumpB
	var_1041_string = "Error: failed to add item"; // 0x5e7 PushS
	Trace(var_1041_string); // 0x5e8 Func
	
Label_1514:
	var_1042_int = 1; // 0x5ea PushI
	var_995_int = var_995_int + var_1042_int; // 0x5eb Add2
	goto Label_1482; // 0x5ec Jump
	
Label_1517:
	var_1043_int = 0; // 0x5ed PushI
	var_1044_bool = var_28_int == var_1043_int; // 0x5ee Eq
	if(var_1044_bool == 0) goto Label_1522; // 0x5ef JumpB
	SetPlayerMoneyCount(var_993_object); // 0x5f0 Func
	
Label_1522:
	var_4_int = 0; // 0x5f2 TMovI
	func_872(var_989_int, var_990_bool, var_991_object, var_992_object, var_993_object, var_994_int, var_995_int); // 0x5f4 NEW_2
	return 14; // 0x5f6 Return
}


func_1949(var_2_int, var_3_int, var_27_int, var_28_int, var_29_object, var_703_int)
{
	var_704_int = 0; var_705_object = Obj(); var_706_int = 0; var_707_int = 0; var_708_int = 0; var_709_int = 0; var_710_int = 0; var_711_object = Obj(); var_712_int = 0; var_713_int = 0; var_714_int = 0; var_715_int = 0; // 0x79d PushV
	size(var_710_int); // 0x79e TObjFunc
	var_716_int = var_703_int + var_2_int; // 0x7a0 Add
	var_717_bool = var_716_int >= var_710_int; // 0x7a1 GE
	if(var_717_bool == 0) goto Label_1956; // 0x7a2 JumpB
	return 12; // 0x7a3 Return
	
Label_1956:
	var_718_int = var_703_int + var_2_int; // 0x7a4 Add
	get(var_711_object, var_718_int); // 0x7a5 TObjFunc
	var_719_bool = 0; var_720_object = Obj(); var_721_int = 0; var_722_bool = 0; // 0x7a7 PushV
	var_720_object = var_711_object; // 0x7a8 Mov
	var_721_int = var_28_int; // 0x7a9 MovT
	var_722_bool = 1; // 0x7aa MovB
	func_0(var_719_bool, var_720_object, var_721_int, var_722_bool); // 0x7ab NEW_2
	if(var_719_bool == 0) goto Label_1967; // 0x7ad JumpB
	return 12; // 0x7ae Return
	
Label_1967:
	var_723_int = var_703_int + var_2_int; // 0x7af Add
	get(var_712_int, var_723_int); // 0x7b0 TObjFunc
	var_724_int = 0; // 0x7b2 PushI
	var_725_bool = var_712_int > var_724_int; // 0x7b3 GT
	if(var_725_bool == 0) goto Label_1974; // 0x7b4 JumpB
	return 12; // 0x7b5 Return
	
Label_1974:
	var_726_int = var_703_int + var_2_int; // 0x7b6 Add
	get(var_713_int, var_726_int); // 0x7b7 TObjFunc
	var_727_int = var_703_int + var_2_int; // 0x7b9 Add
	get(var_714_int, var_727_int); // 0x7ba TObjFunc
	var_728_int = 0; // 0x7bc PushI
	var_729_bool = var_713_int > var_728_int; // 0x7bd GT
	if(var_729_bool == 0) goto Label_2027; // 0x7be JumpB
	var_730_int = 0; var_731_object = Obj(); var_732_int = 0; // 0x7bf PushV
	var_731_object = var_711_object; // 0x7c0 Mov
	var_732_int = var_28_int; // 0x7c1 MovT
	func_2414(var_730_int, var_731_object, var_732_int); // 0x7c2 NEW_2
	var_733_float = 0; var_734_object = Obj(); var_735_int = 0; var_736_int = 0; // 0x7c4 PushV
	var_734_object = var_29_object; // 0x7c5 MovT
	var_735_int = var_27_int; // 0x7c6 MovT
	var_736_int = var_28_int; // 0x7c7 MovT
	func_2341(var_734_object, var_735_int, var_736_int); // 0x7c8 NEW_2
	var_715_int = var_730_int * var_733_float; // 0x7ca Mult2
	var_737_bool = var_715_int <= var_3_int; // 0x7cb LE
	if(var_737_bool == 0) goto Label_2027; // 0x7cc JumpB
	var_738_bool = 0; var_739_object = Obj(); // 0x7cd PushV
	var_739_object = var_711_object; // 0x7ce Mov
	func_1530(var_706_int, var_707_int, var_708_int, var_709_int, var_710_int, var_711_object, var_712_int, var_713_int, var_714_int, var_715_int, var_738_bool, var_739_object); // 0x7cf NEW_2
	if(var_738_bool == 0) goto Label_2027; // 0x7d1 JumpB
	var_740_int = -1; // 0x7d2 PushI
	var_713_int = var_713_int + var_740_int; // 0x7d3 Add2
	var_741_object = Obj(); // 0x7d4 PushV
	var_741_object = var_711_object; // 0x7d5 Mov
	func_50(var_741_object); // 0x7d6 NEW_2
	var_742_int = var_703_int + var_2_int; // 0x7d8 Add
	set(var_742_int, var_713_int); // 0x7d9 TObjFunc
	var_743_int = 0; // 0x7db PushV
	var_744_int = 0; var_745_object = Obj(); var_746_int = 0; // 0x7dc PushV
	var_745_object = var_711_object; // 0x7dd Mov
	var_746_int = var_28_int; // 0x7de MovT
	func_2414(var_744_int, var_745_object, var_746_int); // 0x7df NEW_2
	var_747_int = -var_744_int; // 0x7e1 Neg
	var_748_float = 0; var_749_object = Obj(); var_750_int = 0; var_751_int = 0; // 0x7e2 PushV
	var_749_object = var_29_object; // 0x7e3 MovT
	var_750_int = var_27_int; // 0x7e4 MovT
	var_751_int = var_28_int; // 0x7e5 MovT
	func_2341(var_749_object, var_750_int, var_751_int); // 0x7e6 NEW_2
	var_743_int = var_747_int * var_748_float; // 0x7e8 Mult2
	func_1739(var_714_int, var_715_int, var_743_int); // 0x7e9 NEW_2
	
Label_2027:
	func_1245(var_713_int, var_714_int, var_715_int); // 0x7ec NEW_2
	func_1332(var_713_int, var_714_int, var_715_int); // 0x7ef NEW_2
	return 12; // 0x7f1 Return
}


func_2341(var_682_float, var_684_int, var_685_int)
{
	var_686_float = 0; var_687_int = 0; var_688_bool = 0; var_689_float = 0; var_690_int = 0; var_691_bool = 0; // 0x925 PushV
	var_692_int = 0; // 0x926 PushI
	var_693_bool = var_685_int != var_692_int; // 0x927 Neq
	if(var_693_bool == 0) goto Label_2347; // 0x928 JumpB
	var_682_float = 1; // 0x929 MovI
	return 6; // 0x92a Return
	
Label_2347:
	var_689_float = 1; // 0x92b MovI
	var_690_int = 1; // 0x92c MovI
	
Label_2349:
	var_694_bool = var_690_int <= var_684_int; // 0x92d LE
	if(var_694_bool == 0) goto Label_2364; // 0x92e JumpB
	var_695_string = "sellf"; // 0x92f PushS
	var_696_int = var_695_string + var_690_int; // 0x930 Add
	HasProperty(var_696_int, var_691_bool); // 0x931 ObjFunc
	var_697_bool = var_691_bool; // 0x933 Push
	if(var_697_bool == 0) goto Label_2361; // 0x934 JumpB
	var_698_string = "sellf"; // 0x935 PushS
	var_699_int = var_698_string + var_690_int; // 0x936 Add
	GetProperty(var_699_int, var_689_float); // 0x937 ObjFunc
	
Label_2361:
	var_700_int = 1; // 0x939 PushI
	var_690_int = var_690_int + var_700_int; // 0x93a Add2
	goto Label_2349; // 0x93b Jump
	
Label_2364:
	var_701_int = 100; // 0x93c PushI
	var_682_float = var_689_float / var_689_float; // 0x93d Div2
	return 6; // 0x93e Return
}


func_2086(var_162_string, var_163_int)
{
	var_165_int = 1; // 0x827 PushI
	var_166_int = var_163_int + var_165_int; // 0x828 Add
	var_167_int = 10; // 0x829 PushI
	var_168_bool = var_166_int < var_167_int; // 0x82a LT
	if(var_168_bool == 0) goto Label_2097; // 0x82b JumpB
	var_169_string = "r_slot0"; // 0x82c PushS
	var_170_int = 1; // 0x82d PushI
	var_171_int = var_163_int + var_170_int; // 0x82e Add
	var_162_string = var_169_string + var_171_int; // 0x82f Add2
	return 0; // 0x830 Return
	
Label_2097:
	var_172_string = "r_slot"; // 0x831 PushS
	var_173_int = 1; // 0x832 PushI
	var_174_int = var_163_int + var_173_int; // 0x833 Add
	var_162_string = var_172_string + var_174_int; // 0x834 Add2
	return 0; // 0x835 Return
}


func_1703(var_567_bool, var_568_object)
{
	var_571_int = 0; var_572_object = Obj(); var_573_int = 0; var_574_int = 0; var_575_int = 0; var_576_object = Obj(); var_577_int = 0; var_578_int = 0; // 0x6a7 PushV
	size(var_575_int); // 0x6a8 ObjFunc
	var_577_int = 0; // 0x6aa MovI
	
Label_1707:
	var_579_bool = var_577_int < var_575_int; // 0x6ab LT
	if(var_579_bool == 0) goto Label_1736; // 0x6ac JumpB
	get(var_576_object, var_577_int); // 0x6ad ObjFunc
	get(var_578_int, var_577_int); // 0x6af ObjFunc
	var_580_bool = 0; var_581_object = Obj(); var_582_object = Obj(); // 0x6b1 PushV
	var_581_object = var_568_object; // 0x6b2 Mov
	var_582_object = var_576_object; // 0x6b3 Mov
	func_2575(var_580_bool, var_581_object, var_582_object); // 0x6b4 NEW_2
	if(var_580_bool == 0) goto Label_1733; // 0x6b6 JumpB
	var_583_int = -1; // 0x6b7 PushI
	var_578_int = var_578_int + var_583_int; // 0x6b8 Add2
	var_584_int = 0; // 0x6b9 PushI
	var_585_bool = var_578_int == var_584_int; // 0x6ba Eq
	if(var_585_bool == 0) goto Label_1729; // 0x6bb JumpB
	remove(var_577_int); // 0x6bc ObjFunc
	remove(var_577_int); // 0x6be ObjFunc
	goto Label_1731; // 0x6c0 Jump
	
Label_1731:
	var_567_bool = 1; // 0x6c3 MovB
	return 8; // 0x6c4 Return
	
Label_1729:
	set(var_577_int, var_578_int); // 0x6c1 ObjFunc
	
Label_1733:
	var_586_int = 1; // 0x6c5 PushI
	var_577_int = var_577_int + var_586_int; // 0x6c6 Add2
	goto Label_1707; // 0x6c7 Jump
	
Label_1736:
	var_567_bool = 0; // 0x6c8 MovB
	return 8; // 0x6c9 Return
}


func_2608(var_1017_bool, var_1019_object, var_1020_int)
{
	var_1021_bool = 0; var_1022_bool = 0; // 0xa30 PushV
	var_1023_int = 1; // 0xa31 PushI
	AddItem(var_1022_bool, var_1019_object, var_1020_int, var_1023_int); // 0xa32 ObjFunc
	var_1017_bool = var_1022_bool; // 0xa34 Mov
	return 2; // 0xa35 Return
}


func_50(var_522_object)
{
	var_523_int = 0; var_524_object = Obj(); var_525_int = 0; var_526_int = 0; var_527_object = Obj(); var_528_int = 0; // 0x32 PushV
	size(var_526_int); // 0x33 TObjFunc
	var_528_int = 0; // 0x35 MovI
	
Label_54:
	var_529_bool = var_528_int < var_526_int; // 0x36 LT
	if(var_529_bool == 0) goto Label_70; // 0x37 JumpB
	get(var_527_object, var_528_int); // 0x38 TObjFunc
	var_530_bool = 0; var_531_object = Obj(); var_532_object = Obj(); // 0x3a PushV
	var_531_object = var_527_object; // 0x3b Mov
	var_532_object = var_522_object; // 0x3c Mov
	func_2570(var_531_object, var_532_object); // 0x3d NEW_2
	if(var_530_bool == 0) goto Label_67; // 0x3f JumpB
	remove(var_528_int); // 0x40 TObjFunc
	return 6; // 0x42 Return
	
Label_67:
	var_533_int = 1; // 0x43 PushI
	var_528_int = var_528_int + var_533_int; // 0x44 Add2
	goto Label_54; // 0x45 Jump
	
Label_70:
	add(var_522_object); // 0x46 TObjFunc
	return 6; // 0x48 Return
}


func_1332(var_0_int, var_2_int, var_28_int)
{
	var_475_int = 0; var_476_object = Obj(); var_477_int = 0; var_478_int = 0; var_479_int = 0; var_480_int = 0; var_481_int = 0; var_482_object = Obj(); var_483_int = 0; var_484_object = Obj(); var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_object = Obj(); // 0x534 PushV
	size(var_483_int); // 0x535 TObjFunc
	var_491_int = var_2_int + var_0_int; // 0x537 Add
	var_492_bool = var_491_int > var_483_int; // 0x538 GT
	if(var_492_bool == 0) goto Label_1352; // 0x539 JumpB
	var_493_int = 2; // 0x53a PushI
	var_494_int = var_483_int / var_493_int; // 0x53b Mod
	var_495_int = 0; // 0x53c PushI
	var_496_bool = var_494_int == var_495_int; // 0x53d Eq
	if(var_496_bool == 0) goto Label_1347; // 0x53e JumpB
	var_497_int = var_2_int + var_0_int; // 0x53f Add
	var_498_int = var_497_int - var_483_int; // 0x540 Sub
	var_2_int = var_2_int - var_498_int; // 0x541 Sub2
	goto Label_1352; // 0x542 Jump
	
Label_1352:
	var_499_int = 0; // 0x548 PushI
	var_500_bool = var_2_int < var_499_int; // 0x549 LT
	if(var_500_bool == 0) goto Label_1356; // 0x54a JumpB
	var_2_int = 0; // 0x54b TMovI
	
Label_1356:
	var_487_int = var_2_int; // 0x54c MovT
	
Label_1357:
	var_501_int = var_2_int + var_0_int; // 0x54d Add
	var_502_bool = var_487_int < var_501_int; // 0x54e LT
	if(var_502_bool == 0) goto Label_1426; // 0x54f JumpB
	var_503_bool = var_487_int < var_483_int; // 0x550 LT
	if(var_503_bool == 0) goto Label_1416; // 0x551 JumpB
	get(var_484_object, var_487_int); // 0x552 TObjFunc
	get(var_486_int, var_487_int); // 0x554 TObjFunc
	var_485_int = 0; // 0x556 MovI
	var_504_int = 0; var_505_int = 0; // 0x557 PushV
	var_505_int = var_487_int - var_2_int; // 0x558 Sub2
	func_2048(var_490_object, var_504_int, var_505_int); // 0x559 NEW_2
	var_488_int = var_504_int; // 0x55a Mov
	var_513_int = 0; // 0x55c PushI
	var_514_bool = var_488_int > var_513_int; // 0x55d GT
	if(var_514_bool == 0) goto Label_1377; // 0x55e JumpB
	var_515_int = 16384; // 0x55f PushI
	var_485_int = var_485_int | var_515_int; // 0x560 Or2
	
Label_1377:
	get(var_489_int, var_487_int); // 0x561 TObjFunc
	var_516_bool = 0; // 0x563 PushV
	var_516_bool = 1; // 0x564 MovB
	var_517_bool = 0; var_518_object = Obj(); var_519_int = 0; var_520_bool = 0; // 0x565 PushV
	var_518_object = var_484_object; // 0x566 Mov
	var_519_int = var_28_int; // 0x567 MovT
	var_520_bool = 1; // 0x568 MovB
	func_0(var_517_bool, var_518_object, var_519_int, var_520_bool); // 0x569 NEW_2
	if(var_517_bool == 0) goto Label_1392; // 0x56b JumpB
	var_521_int = 0; // 0x56c PushI
	var_522_bool = var_489_int > var_521_int; // 0x56d GT
	if(var_522_bool == 0) goto Label_1392; // 0x56e JumpB
	var_516_bool = 0; // 0x56f MovB
	
Label_1392:
	if(var_516_bool == 0) goto Label_1395; // 0x570 JumpB
	var_523_int = 131072; // 0x571 PushI
	var_485_int = var_485_int | var_523_int; // 0x572 Or2
	
Label_1395:
	CreateIntVector(var_490_object); // 0x573 Func
	add(var_488_int); // 0x575 ObjFunc
	add(var_486_int); // 0x577 ObjFunc
	var_524_int = 65536; // 0x579 PushI
	var_525_string = ""; var_526_int = 0; // 0x57a PushV
	var_526_int = var_487_int - var_2_int; // 0x57b Sub2
	func_2086(var_525_string, var_526_int); // 0x57c NEW_2
	SendMessage(var_524_int, var_525_string, var_490_object); // 0x57e Func
	var_527_string = ""; var_528_int = 0; // 0x580 PushV
	var_528_int = var_487_int - var_2_int; // 0x581 Sub2
	func_2086(var_527_string, var_528_int); // 0x582 NEW_2
	SendMessage(var_485_int, var_527_string, var_484_object); // 0x584 Func
	var_490_object = 0; // 0x586 SetNull
	goto Label_1423; // 0x587 Jump
	
Label_1423:
	var_529_int = 1; // 0x58f PushI
	var_487_int = var_487_int + var_529_int; // 0x590 Add2
	goto Label_1357; // 0x591 Jump
	
Label_1416:
	var_530_int = 32768; // 0x588 PushI
	var_531_string = ""; var_532_int = 0; // 0x589 PushV
	var_532_int = var_487_int - var_2_int; // 0x58a Sub2
	func_2086(var_531_string, var_532_int); // 0x58b NEW_2
	SendMessage(var_530_int, var_531_string); // 0x58d Func
	
Label_1426:
	return 16; // 0x592 Return
	
Label_1347:
	var_533_int = var_2_int + var_0_int; // 0x543 Add
	var_534_int = var_533_int - var_483_int; // 0x544 Sub
	var_535_int = 1; // 0x545 PushI
	var_536_int = var_534_int - var_535_int; // 0x546 Sub
	var_2_int = var_2_int - var_536_int; // 0x547 Sub2
}


func_2102(var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0; // 0x836 PushV
	GetWindowSize(var_65_int, var_66_int); // 0x837 Func
	var_64_int = 18; // 0x839 MovI
	var_67_bool = 0; // 0x83a PushV
	var_67_bool = 0; // 0x83b MovB
	var_68_int = 1024; // 0x83c PushI
	var_69_bool = var_65_int == var_68_int; // 0x83d Eq
	if(var_69_bool == 0) goto Label_2115; // 0x83e JumpB
	var_70_int = 768; // 0x83f PushI
	var_71_bool = var_66_int == var_70_int; // 0x840 Eq
	if(var_71_bool == 0) goto Label_2115; // 0x841 JumpB
	var_67_bool = 1; // 0x842 MovB
	
Label_2115:
	if(var_67_bool == 0) goto Label_2118; // 0x843 JumpB
	var_64_int = 24; // 0x844 MovI
	goto Label_2297; // 0x845 Jump
	
Label_2297:
	var_60_int = var_64_int; // 0x8f9 Mov
	return 6; // 0x8fa Return
	
Label_2118:
	var_72_bool = 0; // 0x846 PushV
	var_72_bool = 0; // 0x847 MovB
	var_73_int = 1280; // 0x848 PushI
	var_74_bool = var_65_int == var_73_int; // 0x849 Eq
	if(var_74_bool == 0) goto Label_2127; // 0x84a JumpB
	var_75_int = 1024; // 0x84b PushI
	var_76_bool = var_66_int == var_75_int; // 0x84c Eq
	if(var_76_bool == 0) goto Label_2127; // 0x84d JumpB
	var_72_bool = 1; // 0x84e MovB
	
Label_2127:
	if(var_72_bool == 0) goto Label_2130; // 0x84f JumpB
	var_64_int = 32; // 0x850 MovI
	goto Label_2297; // 0x851 Jump
	
Label_2130:
	var_77_bool = 0; // 0x852 PushV
	var_77_bool = 0; // 0x853 MovB
	var_78_int = 1280; // 0x854 PushI
	var_79_bool = var_65_int == var_78_int; // 0x855 Eq
	if(var_79_bool == 0) goto Label_2139; // 0x856 JumpB
	var_80_int = 720; // 0x857 PushI
	var_81_bool = var_66_int == var_80_int; // 0x858 Eq
	if(var_81_bool == 0) goto Label_2139; // 0x859 JumpB
	var_77_bool = 1; // 0x85a MovB
	
Label_2139:
	if(var_77_bool == 0) goto Label_2142; // 0x85b JumpB
	var_64_int = 22; // 0x85c MovI
	goto Label_2297; // 0x85d Jump
	
Label_2142:
	var_82_bool = 0; // 0x85e PushV
	var_82_bool = 0; // 0x85f MovB
	var_83_int = 1280; // 0x860 PushI
	var_84_bool = var_65_int == var_83_int; // 0x861 Eq
	if(var_84_bool == 0) goto Label_2151; // 0x862 JumpB
	var_85_int = 768; // 0x863 PushI
	var_86_bool = var_66_int == var_85_int; // 0x864 Eq
	if(var_86_bool == 0) goto Label_2151; // 0x865 JumpB
	var_82_bool = 1; // 0x866 MovB
	
Label_2151:
	if(var_82_bool == 0) goto Label_2154; // 0x867 JumpB
	var_64_int = 24; // 0x868 MovI
	goto Label_2297; // 0x869 Jump
	
Label_2154:
	var_87_bool = 0; // 0x86a PushV
	var_87_bool = 0; // 0x86b MovB
	var_88_int = 1280; // 0x86c PushI
	var_89_bool = var_65_int == var_88_int; // 0x86d Eq
	if(var_89_bool == 0) goto Label_2163; // 0x86e JumpB
	var_90_int = 800; // 0x86f PushI
	var_91_bool = var_66_int == var_90_int; // 0x870 Eq
	if(var_91_bool == 0) goto Label_2163; // 0x871 JumpB
	var_87_bool = 1; // 0x872 MovB
	
Label_2163:
	if(var_87_bool == 0) goto Label_2166; // 0x873 JumpB
	var_64_int = 24; // 0x874 MovI
	goto Label_2297; // 0x875 Jump
	
Label_2166:
	var_92_bool = 0; // 0x876 PushV
	var_92_bool = 0; // 0x877 MovB
	var_93_int = 1360; // 0x878 PushI
	var_94_bool = var_65_int == var_93_int; // 0x879 Eq
	if(var_94_bool == 0) goto Label_2175; // 0x87a JumpB
	var_95_int = 768; // 0x87b PushI
	var_96_bool = var_66_int == var_95_int; // 0x87c Eq
	if(var_96_bool == 0) goto Label_2175; // 0x87d JumpB
	var_92_bool = 1; // 0x87e MovB
	
Label_2175:
	if(var_92_bool == 0) goto Label_2178; // 0x87f JumpB
	var_64_int = 24; // 0x880 MovI
	goto Label_2297; // 0x881 Jump
	
Label_2178:
	var_97_bool = 0; // 0x882 PushV
	var_97_bool = 0; // 0x883 MovB
	var_98_int = 1366; // 0x884 PushI
	var_99_bool = var_65_int == var_98_int; // 0x885 Eq
	if(var_99_bool == 0) goto Label_2187; // 0x886 JumpB
	var_100_int = 768; // 0x887 PushI
	var_101_bool = var_66_int == var_100_int; // 0x888 Eq
	if(var_101_bool == 0) goto Label_2187; // 0x889 JumpB
	var_97_bool = 1; // 0x88a MovB
	
Label_2187:
	if(var_97_bool == 0) goto Label_2190; // 0x88b JumpB
	var_64_int = 24; // 0x88c MovI
	goto Label_2297; // 0x88d Jump
	
Label_2190:
	var_102_bool = 0; // 0x88e PushV
	var_102_bool = 0; // 0x88f MovB
	var_103_int = 1440; // 0x890 PushI
	var_104_bool = var_65_int == var_103_int; // 0x891 Eq
	if(var_104_bool == 0) goto Label_2199; // 0x892 JumpB
	var_105_int = 900; // 0x893 PushI
	var_106_bool = var_66_int == var_105_int; // 0x894 Eq
	if(var_106_bool == 0) goto Label_2199; // 0x895 JumpB
	var_102_bool = 1; // 0x896 MovB
	
Label_2199:
	if(var_102_bool == 0) goto Label_2202; // 0x897 JumpB
	var_64_int = 28; // 0x898 MovI
	goto Label_2297; // 0x899 Jump
	
Label_2202:
	var_107_bool = 0; // 0x89a PushV
	var_107_bool = 0; // 0x89b MovB
	var_108_int = 1536; // 0x89c PushI
	var_109_bool = var_65_int == var_108_int; // 0x89d Eq
	if(var_109_bool == 0) goto Label_2211; // 0x89e JumpB
	var_110_int = 864; // 0x89f PushI
	var_111_bool = var_66_int == var_110_int; // 0x8a0 Eq
	if(var_111_bool == 0) goto Label_2211; // 0x8a1 JumpB
	var_107_bool = 1; // 0x8a2 MovB
	
Label_2211:
	if(var_107_bool == 0) goto Label_2214; // 0x8a3 JumpB
	var_64_int = 26; // 0x8a4 MovI
	goto Label_2297; // 0x8a5 Jump
	
Label_2214:
	var_112_bool = 0; // 0x8a6 PushV
	var_112_bool = 0; // 0x8a7 MovB
	var_113_int = 1600; // 0x8a8 PushI
	var_114_bool = var_65_int == var_113_int; // 0x8a9 Eq
	if(var_114_bool == 0) goto Label_2223; // 0x8aa JumpB
	var_115_int = 1200; // 0x8ab PushI
	var_116_bool = var_66_int == var_115_int; // 0x8ac Eq
	if(var_116_bool == 0) goto Label_2223; // 0x8ad JumpB
	var_112_bool = 1; // 0x8ae MovB
	
Label_2223:
	if(var_112_bool == 0) goto Label_2226; // 0x8af JumpB
	var_64_int = 38; // 0x8b0 MovI
	goto Label_2297; // 0x8b1 Jump
	
Label_2226:
	var_117_bool = 0; // 0x8b2 PushV
	var_117_bool = 0; // 0x8b3 MovB
	var_118_int = 1600; // 0x8b4 PushI
	var_119_bool = var_65_int == var_118_int; // 0x8b5 Eq
	if(var_119_bool == 0) goto Label_2235; // 0x8b6 JumpB
	var_120_int = 1200; // 0x8b7 PushI
	var_121_bool = var_66_int == var_120_int; // 0x8b8 Eq
	if(var_121_bool == 0) goto Label_2235; // 0x8b9 JumpB
	var_117_bool = 1; // 0x8ba MovB
	
Label_2235:
	if(var_117_bool == 0) goto Label_2238; // 0x8bb JumpB
	var_64_int = 38; // 0x8bc MovI
	goto Label_2297; // 0x8bd Jump
	
Label_2238:
	var_122_bool = 0; // 0x8be PushV
	var_122_bool = 0; // 0x8bf MovB
	var_123_int = 1600; // 0x8c0 PushI
	var_124_bool = var_65_int == var_123_int; // 0x8c1 Eq
	if(var_124_bool == 0) goto Label_2247; // 0x8c2 JumpB
	var_125_int = 900; // 0x8c3 PushI
	var_126_bool = var_66_int == var_125_int; // 0x8c4 Eq
	if(var_126_bool == 0) goto Label_2247; // 0x8c5 JumpB
	var_122_bool = 1; // 0x8c6 MovB
	
Label_2247:
	if(var_122_bool == 0) goto Label_2250; // 0x8c7 JumpB
	var_64_int = 28; // 0x8c8 MovI
	goto Label_2297; // 0x8c9 Jump
	
Label_2250:
	var_127_bool = 0; // 0x8ca PushV
	var_127_bool = 0; // 0x8cb MovB
	var_128_int = 1600; // 0x8cc PushI
	var_129_bool = var_65_int == var_128_int; // 0x8cd Eq
	if(var_129_bool == 0) goto Label_2259; // 0x8ce JumpB
	var_130_int = 1050; // 0x8cf PushI
	var_131_bool = var_66_int == var_130_int; // 0x8d0 Eq
	if(var_131_bool == 0) goto Label_2259; // 0x8d1 JumpB
	var_127_bool = 1; // 0x8d2 MovB
	
Label_2259:
	if(var_127_bool == 0) goto Label_2262; // 0x8d3 JumpB
	var_64_int = 32; // 0x8d4 MovI
	goto Label_2297; // 0x8d5 Jump
	
Label_2262:
	var_132_bool = 0; // 0x8d6 PushV
	var_132_bool = 0; // 0x8d7 MovB
	var_133_int = 1600; // 0x8d8 PushI
	var_134_bool = var_65_int == var_133_int; // 0x8d9 Eq
	if(var_134_bool == 0) goto Label_2271; // 0x8da JumpB
	var_135_int = 1050; // 0x8db PushI
	var_136_bool = var_66_int == var_135_int; // 0x8dc Eq
	if(var_136_bool == 0) goto Label_2271; // 0x8dd JumpB
	var_132_bool = 1; // 0x8de MovB
	
Label_2271:
	if(var_132_bool == 0) goto Label_2274; // 0x8df JumpB
	var_64_int = 32; // 0x8e0 MovI
	goto Label_2297; // 0x8e1 Jump
	
Label_2274:
	var_137_bool = 0; // 0x8e2 PushV
	var_137_bool = 0; // 0x8e3 MovB
	var_138_int = 1920; // 0x8e4 PushI
	var_139_bool = var_65_int == var_138_int; // 0x8e5 Eq
	if(var_139_bool == 0) goto Label_2283; // 0x8e6 JumpB
	var_140_int = 1080; // 0x8e7 PushI
	var_141_bool = var_66_int == var_140_int; // 0x8e8 Eq
	if(var_141_bool == 0) goto Label_2283; // 0x8e9 JumpB
	var_137_bool = 1; // 0x8ea MovB
	
Label_2283:
	if(var_137_bool == 0) goto Label_2286; // 0x8eb JumpB
	var_64_int = 34; // 0x8ec MovI
	goto Label_2297; // 0x8ed Jump
	
Label_2286:
	var_142_bool = 0; // 0x8ee PushV
	var_142_bool = 0; // 0x8ef MovB
	var_143_int = 1920; // 0x8f0 PushI
	var_144_bool = var_65_int == var_143_int; // 0x8f1 Eq
	if(var_144_bool == 0) goto Label_2295; // 0x8f2 JumpB
	var_145_int = 1200; // 0x8f3 PushI
	var_146_bool = var_66_int == var_145_int; // 0x8f4 Eq
	if(var_146_bool == 0) goto Label_2295; // 0x8f5 JumpB
	var_142_bool = 1; // 0x8f6 MovB
	
Label_2295:
	if(var_142_bool == 0) goto Label_2297; // 0x8f7 JumpB
	var_64_int = 38; // 0x8f8 MovI
}


func_1207(var_0_int, var_938_int)
{
	var_939_int = 0; var_940_int = 0; var_941_int = 0; var_942_int = 0; // 0x4b7 PushV
	size(var_941_int); // 0x4b8 TObjFunc
	var_943_int = 2; // 0x4ba PushI
	var_944_int = var_941_int + var_943_int; // 0x4bb Add
	var_945_int = 1; // 0x4bc PushI
	var_946_int = var_944_int - var_945_int; // 0x4bd Sub
	var_947_int = 2; // 0x4be PushI
	var_948_float = var_946_int / var_947_int; // 0x4bf Div
	var_949_int = 2; // 0x4c0 PushI
	var_950_float = var_0_int / var_949_int; // 0x4c1 Div
	var_942_int = var_948_float - var_950_float; // 0x4c2 Sub2
	var_951_int = 0; // 0x4c3 PushI
	var_952_bool = var_942_int < var_951_int; // 0x4c4 LT
	if(var_952_bool == 0) goto Label_1224; // 0x4c5 JumpB
	var_938_int = 0; // 0x4c6 MovI
	return 4; // 0x4c7 Return
	
Label_1224:
	var_938_int = var_942_int; // 0x4c8 Mov
	return 4; // 0x4c9 Return
}


func_1591(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_559_bool, var_560_object)
{
	var_561_int = 0; var_562_int = 0; // 0x637 PushV
	var_563_int = 0; var_564_object = Obj(); // 0x638 PushV
	var_564_object = var_560_object; // 0x639 Mov
	func_2493(var_563_int, var_564_object); // 0x63a NEW_2
	var_562_int = var_563_int; // 0x63b Mov
	var_565_int = 0; // 0x63d PushI
	var_566_bool = var_562_int == var_565_int; // 0x63e Eq
	if(var_566_bool == 0) goto Label_1609; // 0x63f JumpB
	var_567_bool = 0; var_568_object = Obj(); var_569_object = Obj(); var_570_object = Obj(); // 0x640 PushV
	var_568_object = var_560_object; // 0x641 Mov
	var_569_object = var_12_object; // 0x642 MovT
	var_570_object = var_13_object; // 0x643 MovT
	func_1703(var_569_object, var_570_object); // 0x644 NEW_2
	var_559_bool = var_567_bool; // 0x645 Mov
	return 2; // 0x647 Return
	
Label_1609:
	var_587_int = 1; // 0x649 PushI
	var_588_bool = var_562_int == var_587_int; // 0x64a Eq
	if(var_588_bool == 0) goto Label_1621; // 0x64b JumpB
	var_589_bool = 0; var_590_object = Obj(); var_591_object = Obj(); var_592_object = Obj(); // 0x64c PushV
	var_590_object = var_560_object; // 0x64d Mov
	var_591_object = var_14_object; // 0x64e MovT
	var_592_object = var_15_object; // 0x64f MovT
	func_1703(var_591_object, var_592_object); // 0x650 NEW_2
	var_559_bool = var_589_bool; // 0x651 Mov
	return 2; // 0x653 Return
	
Label_1621:
	var_593_int = 2; // 0x655 PushI
	var_594_bool = var_562_int == var_593_int; // 0x656 Eq
	if(var_594_bool == 0) goto Label_1633; // 0x657 JumpB
	var_595_bool = 0; var_596_object = Obj(); var_597_object = Obj(); var_598_object = Obj(); // 0x658 PushV
	var_596_object = var_560_object; // 0x659 Mov
	var_597_object = var_16_object; // 0x65a MovT
	var_598_object = var_17_object; // 0x65b MovT
	func_1703(var_597_object, var_598_object); // 0x65c NEW_2
	var_559_bool = var_595_bool; // 0x65d Mov
	return 2; // 0x65f Return
	
Label_1633:
	var_599_int = 3; // 0x661 PushI
	var_600_bool = var_562_int == var_599_int; // 0x662 Eq
	if(var_600_bool == 0) goto Label_1644; // 0x663 JumpB
	var_601_bool = 0; var_602_object = Obj(); var_603_object = Obj(); var_604_object = Obj(); // 0x664 PushV
	var_602_object = var_560_object; // 0x665 Mov
	var_603_object = var_18_object; // 0x666 MovT
	var_604_object = var_19_object; // 0x667 MovT
	func_1703(var_603_object, var_604_object); // 0x668 NEW_2
	var_559_bool = var_601_bool; // 0x669 Mov
	return 2; // 0x66b Return
	
Label_1644:
	var_605_bool = 0; var_606_object = Obj(); var_607_object = Obj(); var_608_object = Obj(); // 0x66c PushV
	var_606_object = var_560_object; // 0x66d Mov
	var_607_object = var_20_object; // 0x66e MovT
	var_608_object = var_21_object; // 0x66f MovT
	func_1703(var_607_object, var_608_object); // 0x670 NEW_2
	var_559_bool = var_605_bool; // 0x671 Mov
	return 2; // 0x673 Return
}


func_2493(var_451_int, var_452_object)
{
	var_453_int = 0; var_454_int = 0; // 0x9bd PushV
	var_455_int = 0; var_456_object = Obj(); // 0x9be PushV
	var_456_object = var_452_object; // 0x9bf Mov
	func_2409(var_456_object); // 0x9c0 NEW_2
	var_457_string = "Category"; // 0x9c2 PushS
	GetInvItemProperty(var_454_int, var_455_int, var_457_string); // 0x9c3 Func
	var_451_int = var_454_int; // 0x9c5 Mov
	return 2; // 0x9c6 Return
}


func_2367(var_426_float, var_428_int, var_429_int)
{
	var_430_float = 0; var_431_int = 0; var_432_bool = 0; var_433_float = 0; var_434_int = 0; var_435_bool = 0; // 0x93f PushV
	var_436_int = 0; // 0x940 PushI
	var_437_bool = var_429_int != var_436_int; // 0x941 Neq
	if(var_437_bool == 0) goto Label_2373; // 0x942 JumpB
	var_426_float = 1; // 0x943 MovI
	return 6; // 0x944 Return
	
Label_2373:
	var_433_float = 1; // 0x945 MovI
	var_434_int = 1; // 0x946 MovI
	
Label_2375:
	var_438_bool = var_434_int <= var_428_int; // 0x947 LE
	if(var_438_bool == 0) goto Label_2390; // 0x948 JumpB
	var_439_string = "buyf"; // 0x949 PushS
	var_440_int = var_439_string + var_434_int; // 0x94a Add
	HasProperty(var_440_int, var_435_bool); // 0x94b ObjFunc
	var_441_bool = var_435_bool; // 0x94d Push
	if(var_441_bool == 0) goto Label_2387; // 0x94e JumpB
	var_442_string = "buyf"; // 0x94f PushS
	var_443_int = var_442_string + var_434_int; // 0x950 Add
	GetProperty(var_443_int, var_433_float); // 0x951 ObjFunc
	
Label_2387:
	var_444_int = 1; // 0x953 PushI
	var_434_int = var_434_int + var_444_int; // 0x954 Add2
	goto Label_2375; // 0x955 Jump
	
Label_2390:
	var_445_int = 100; // 0x956 PushI
	var_426_float = var_433_float / var_433_float; // 0x957 Div2
	return 6; // 0x958 Return
}


func_2503(var_472_int, var_473_object)
{
	var_474_int = 0; var_475_int = 0; // 0x9c7 PushV
	var_476_int = 0; var_477_object = Obj(); // 0x9c8 PushV
	var_477_object = var_473_object; // 0x9c9 Mov
	func_2409(var_477_object); // 0x9ca NEW_2
	GetItemMaxStackSize(var_476_int, var_475_int); // 0x9cc Func
	var_472_int = var_475_int; // 0x9ce Mov
	return 2; // 0x9cf Return
}


func_969()
{
	var_278_int = 0; var_279_bool = 0; // 0x3c9 PushV
	var_278_int = 0; // 0x3ca MovI
	var_279_bool = 0; // 0x3cb MovB
	func_1020(var_245_int, var_278_int, var_279_bool); // 0x3cc NEW_2
	var_366_int = 0; var_367_bool = 0; // 0x3ce PushV
	var_366_int = 1; // 0x3cf MovI
	var_367_bool = 0; // 0x3d0 MovB
	func_1020(var_245_int, var_366_int, var_367_bool); // 0x3d1 NEW_2
	var_368_int = 0; var_369_bool = 0; // 0x3d3 PushV
	var_368_int = 2; // 0x3d4 MovI
	var_369_bool = 0; // 0x3d5 MovB
	func_1020(var_245_int, var_368_int, var_369_bool); // 0x3d6 NEW_2
	var_370_int = 0; var_371_bool = 0; // 0x3d8 PushV
	var_370_int = 3; // 0x3d9 MovI
	var_371_bool = 0; // 0x3da MovB
	func_1020(var_245_int, var_370_int, var_371_bool); // 0x3db NEW_2
	var_372_int = 0; var_373_bool = 0; // 0x3dd PushV
	var_372_int = 4; // 0x3de MovI
	var_373_bool = 0; // 0x3df MovB
	func_1020(var_245_int, var_372_int, var_373_bool); // 0x3e0 NEW_2
	var_374_int = 0; var_375_bool = 0; // 0x3e2 PushV
	var_374_int = 0; // 0x3e3 MovI
	var_375_bool = 1; // 0x3e4 MovB
	func_1020(var_245_int, var_374_int, var_375_bool); // 0x3e5 NEW_2
	var_376_int = 0; var_377_bool = 0; // 0x3e7 PushV
	var_376_int = 1; // 0x3e8 MovI
	var_377_bool = 1; // 0x3e9 MovB
	func_1020(var_245_int, var_376_int, var_377_bool); // 0x3ea NEW_2
	var_378_int = 0; var_379_bool = 0; // 0x3ec PushV
	var_378_int = 2; // 0x3ed MovI
	var_379_bool = 1; // 0x3ee MovB
	func_1020(var_245_int, var_378_int, var_379_bool); // 0x3ef NEW_2
	var_380_int = 0; var_381_bool = 0; // 0x3f1 PushV
	var_380_int = 3; // 0x3f2 MovI
	var_381_bool = 1; // 0x3f3 MovB
	func_1020(var_245_int, var_380_int, var_381_bool); // 0x3f4 NEW_2
	var_382_int = 0; var_383_bool = 0; // 0x3f6 PushV
	var_382_int = 4; // 0x3f7 MovI
	var_383_bool = 1; // 0x3f8 MovB
	func_1020(var_245_int, var_382_int, var_383_bool); // 0x3f9 NEW_2
	return 0; // 0x3fb Return
}


func_1226(var_0_int, var_960_int)
{
	var_961_int = 0; var_962_int = 0; var_963_int = 0; var_964_int = 0; // 0x4ca PushV
	size(var_963_int); // 0x4cb TObjFunc
	var_965_int = 2; // 0x4cd PushI
	var_966_int = var_963_int + var_965_int; // 0x4ce Add
	var_967_int = 1; // 0x4cf PushI
	var_968_int = var_966_int - var_967_int; // 0x4d0 Sub
	var_969_int = 2; // 0x4d1 PushI
	var_970_float = var_968_int / var_969_int; // 0x4d2 Div
	var_971_int = 2; // 0x4d3 PushI
	var_972_float = var_0_int / var_971_int; // 0x4d4 Div
	var_964_int = var_970_float - var_972_float; // 0x4d5 Sub2
	var_973_int = 0; // 0x4d6 PushI
	var_974_bool = var_964_int < var_973_int; // 0x4d7 LT
	if(var_974_bool == 0) goto Label_1243; // 0x4d8 JumpB
	var_960_int = 0; // 0x4d9 MovI
	return 4; // 0x4da Return
	
Label_1243:
	var_960_int = var_964_int; // 0x4db Mov
	return 4; // 0x4dc Return
}


func_1739(var_3_int, var_4_int, var_534_int)
{
	var_3_int = var_3_int + var_534_int; // 0x6cc Add2
	var_4_int = var_4_int - var_534_int; // 0x6cd Sub2
	func_1428(var_534_int); // 0x6cf NEW_2
	func_1432(var_534_int); // 0x6d2 NEW_2
	return 0; // 0x6d4 Return
}


func_74(var_609_object)
{
	var_610_int = 0; var_611_object = Obj(); var_612_int = 0; var_613_int = 0; var_614_object = Obj(); var_615_int = 0; // 0x4a PushV
	size(var_613_int); // 0x4b TObjFunc
	var_615_int = 0; // 0x4d MovI
	
Label_78:
	var_616_bool = var_615_int < var_613_int; // 0x4e LT
	if(var_616_bool == 0) goto Label_94; // 0x4f JumpB
	get(var_614_object, var_615_int); // 0x50 TObjFunc
	var_617_bool = 0; var_618_object = Obj(); var_619_object = Obj(); // 0x52 PushV
	var_618_object = var_614_object; // 0x53 Mov
	var_619_object = var_609_object; // 0x54 Mov
	func_2570(var_618_object, var_619_object); // 0x55 NEW_2
	if(var_617_bool == 0) goto Label_91; // 0x57 JumpB
	remove(var_615_int); // 0x58 TObjFunc
	return 6; // 0x5a Return
	
Label_91:
	var_620_int = 1; // 0x5b PushI
	var_615_int = var_615_int + var_620_int; // 0x5c Add2
	goto Label_78; // 0x5d Jump
	
Label_94:
	add(var_609_object); // 0x5e TObjFunc
	return 6; // 0x60 Return
}


func_2512(var_258_int)
{
	var_259_int = 0; var_260_object = Obj(); var_261_int = 0; var_262_object = Obj(); // 0x9d0 PushV
	GetContainer(var_262_object); // 0x9d1 Func
	GetItemCount(var_261_int); // 0x9d3 ObjFunc
	var_258_int = var_261_int; // 0x9d5 Mov
	return 4; // 0x9d6 Return
}


func_1749(var_1_int, var_3_int, var_27_int, var_28_int, var_29_object, var_347_int)
{
	var_348_int = 0; var_349_object = Obj(); var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_int = 0; var_354_object = Obj(); var_355_int = 0; var_356_int = 0; var_357_int = 0; // 0x6d5 PushV
	size(var_353_int); // 0x6d6 TObjFunc
	var_358_int = var_347_int + var_1_int; // 0x6d8 Add
	var_359_bool = var_358_int >= var_353_int; // 0x6d9 GE
	if(var_359_bool == 0) goto Label_1756; // 0x6da JumpB
	return 10; // 0x6db Return
	
Label_1756:
	var_360_int = var_347_int + var_1_int; // 0x6dc Add
	get(var_354_object, var_360_int); // 0x6dd TObjFunc
	var_361_bool = 0; var_362_object = Obj(); var_363_int = 0; var_364_bool = 0; // 0x6df PushV
	var_362_object = var_354_object; // 0x6e0 Mov
	var_363_int = var_28_int; // 0x6e1 MovT
	var_364_bool = 0; // 0x6e2 MovB
	func_0(var_361_bool, var_362_object, var_363_int, var_364_bool); // 0x6e3 NEW_2
	if(var_361_bool == 0) goto Label_1767; // 0x6e5 JumpB
	return 10; // 0x6e6 Return
	
Label_1767:
	var_365_int = var_347_int + var_1_int; // 0x6e7 Add
	get(var_355_int, var_365_int); // 0x6e8 TObjFunc
	var_366_int = var_347_int + var_1_int; // 0x6ea Add
	get(var_356_int, var_366_int); // 0x6eb TObjFunc
	var_367_bool = var_355_int < var_356_int; // 0x6ed LT
	if(var_367_bool == 0) goto Label_1807; // 0x6ee JumpB
	var_368_int = 0; var_369_object = Obj(); var_370_int = 0; // 0x6ef PushV
	var_369_object = var_354_object; // 0x6f0 Mov
	var_370_int = var_28_int; // 0x6f1 MovT
	func_2414(var_368_int, var_369_object, var_370_int); // 0x6f2 NEW_2
	var_426_float = 0; var_427_object = Obj(); var_428_int = 0; var_429_int = 0; // 0x6f4 PushV
	var_427_object = var_29_object; // 0x6f5 MovT
	var_428_int = var_27_int; // 0x6f6 MovT
	var_429_int = var_28_int; // 0x6f7 MovT
	func_2367(var_427_object, var_428_int, var_429_int); // 0x6f8 NEW_2
	var_357_int = var_368_int * var_426_float; // 0x6fa Mult2
	var_446_bool = var_357_int <= var_3_int; // 0x6fb LE
	if(var_446_bool == 0) goto Label_1807; // 0x6fc JumpB
	var_447_bool = 0; var_448_object = Obj(); // 0x6fd PushV
	var_448_object = var_354_object; // 0x6fe Mov
	func_1530(var_348_int, var_349_object, var_350_int, var_351_int, var_352_int, var_353_int, var_354_object, var_355_int, var_356_int, var_357_int, var_447_bool, var_448_object); // 0x6ff NEW_2
	if(var_447_bool == 0) goto Label_1807; // 0x701 JumpB
	var_520_int = 1; // 0x702 PushI
	var_355_int = var_355_int + var_520_int; // 0x703 Add2
	var_521_int = var_347_int + var_1_int; // 0x704 Add
	set(var_521_int, var_355_int); // 0x705 TObjFunc
	var_522_object = Obj(); // 0x707 PushV
	var_522_object = var_354_object; // 0x708 Mov
	func_50(var_522_object); // 0x709 NEW_2
	var_534_int = 0; // 0x70b PushV
	var_534_int = -var_357_int; // 0x70c Neg2
	func_1739(var_356_int, var_357_int, var_534_int); // 0x70d NEW_2
	
Label_1807:
	func_1245(var_355_int, var_356_int, var_357_int); // 0x710 NEW_2
	func_1332(var_355_int, var_356_int, var_357_int); // 0x713 NEW_2
	return 10; // 0x715 Return
}


func_1879(var_2_int, var_27_int, var_28_int, var_29_object, var_648_int)
{
	var_649_int = 0; var_650_object = Obj(); var_651_int = 0; var_652_int = 0; var_653_int = 0; var_654_int = 0; var_655_int = 0; var_656_object = Obj(); var_657_int = 0; var_658_int = 0; var_659_int = 0; var_660_int = 0; // 0x757 PushV
	size(var_655_int); // 0x758 TObjFunc
	var_661_int = var_648_int + var_2_int; // 0x75a Add
	var_662_bool = var_661_int >= var_655_int; // 0x75b GE
	if(var_662_bool == 0) goto Label_1886; // 0x75c JumpB
	return 12; // 0x75d Return
	
Label_1886:
	var_663_int = var_648_int + var_2_int; // 0x75e Add
	get(var_656_object, var_663_int); // 0x75f TObjFunc
	var_664_bool = 0; var_665_object = Obj(); var_666_int = 0; var_667_bool = 0; // 0x761 PushV
	var_665_object = var_656_object; // 0x762 Mov
	var_666_int = var_28_int; // 0x763 MovT
	var_667_bool = 1; // 0x764 MovB
	func_0(var_664_bool, var_665_object, var_666_int, var_667_bool); // 0x765 NEW_2
	if(var_664_bool == 0) goto Label_1897; // 0x767 JumpB
	return 12; // 0x768 Return
	
Label_1897:
	var_668_int = var_648_int + var_2_int; // 0x769 Add
	get(var_657_int, var_668_int); // 0x76a TObjFunc
	var_669_int = 0; // 0x76c PushI
	var_670_bool = var_657_int > var_669_int; // 0x76d GT
	if(var_670_bool == 0) goto Label_1904; // 0x76e JumpB
	return 12; // 0x76f Return
	
Label_1904:
	var_671_int = var_648_int + var_2_int; // 0x770 Add
	get(var_658_int, var_671_int); // 0x771 TObjFunc
	var_672_int = var_648_int + var_2_int; // 0x773 Add
	get(var_659_int, var_672_int); // 0x774 TObjFunc
	var_673_bool = var_658_int < var_659_int; // 0x776 LT
	if(var_673_bool == 0) goto Label_1941; // 0x777 JumpB
	var_674_bool = 0; var_675_object = Obj(); // 0x778 PushV
	var_675_object = var_656_object; // 0x779 Mov
	func_1591(var_651_int, var_652_int, var_653_int, var_654_int, var_655_int, var_656_object, var_657_int, var_658_int, var_659_int, var_660_int, var_674_bool, var_675_object); // 0x77a NEW_2
	var_676_object = Obj(); // 0x77c PushV
	var_676_object = var_656_object; // 0x77d Mov
	func_74(var_676_object); // 0x77e NEW_2
	var_677_int = 1; // 0x780 PushI
	var_658_int = var_658_int + var_677_int; // 0x781 Add2
	var_678_int = var_648_int + var_2_int; // 0x782 Add
	set(var_678_int, var_658_int); // 0x783 TObjFunc
	var_679_int = 0; var_680_object = Obj(); var_681_int = 0; // 0x785 PushV
	var_680_object = var_656_object; // 0x786 Mov
	var_681_int = var_28_int; // 0x787 MovT
	func_2414(var_679_int, var_680_object, var_681_int); // 0x788 NEW_2
	var_682_float = 0; var_683_object = Obj(); var_684_int = 0; var_685_int = 0; // 0x78a PushV
	var_683_object = var_29_object; // 0x78b MovT
	var_684_int = var_27_int; // 0x78c MovT
	var_685_int = var_28_int; // 0x78d MovT
	func_2341(var_683_object, var_684_int, var_685_int); // 0x78e NEW_2
	var_660_int = var_679_int * var_682_float; // 0x790 Mult2
	var_702_int = 0; // 0x791 PushV
	var_702_int = var_660_int; // 0x792 Mov
	func_1739(var_659_int, var_660_int, var_702_int); // 0x793 NEW_2
	
Label_1941:
	func_1245(var_658_int, var_659_int, var_660_int); // 0x796 NEW_2
	func_1332(var_658_int, var_659_int, var_660_int); // 0x799 NEW_2
	return 12; // 0x79b Return
}


func_2520(var_290_int, var_291_int)
{
	var_292_int = 0; var_293_object = Obj(); var_294_int = 0; var_295_object = Obj(); // 0x9d8 PushV
	GetPlayerContainer(var_295_object); // 0x9d9 Func
	GetItemCount(var_294_int, var_291_int); // 0x9db ObjFunc
	var_290_int = var_294_int; // 0x9dd Mov
	return 4; // 0x9de Return
}


func_2393(var_147_int)
{
	var_148_object = Obj(); var_149_bool = 0; var_150_int = 0; var_151_object = Obj(); var_152_bool = 0; var_153_int = 0; // 0x959 PushV
	GetContainer(var_151_object); // 0x95a Func
	var_154_string = "barter"; // 0x95c PushS
	HasProperty(var_154_string, var_152_bool); // 0x95d ObjFunc
	var_155_bool = var_152_bool == 0; // 0x95f Not
	if(var_155_bool == 0) goto Label_2403; // 0x960 JumpB
	var_147_int = 0; // 0x961 MovI
	return 6; // 0x962 Return
	
Label_2403:
	var_156_string = "barter"; // 0x963 PushS
	GetProperty(var_156_string, var_153_int); // 0x964 ObjFunc
	var_147_int = var_153_int; // 0x966 Mov
	return 6; // 0x967 Return
}


func_1115()
{
	var_248_int = 0; var_249_int = 0; var_250_object = Obj(); var_251_object = Obj(); var_252_int = 0; var_253_int = 0; var_254_int = 0; var_255_object = Obj(); var_256_object = Obj(); var_257_int = 0; // 0x45b PushV
	var_258_int = 0; // 0x45c PushV
	func_2512(var_258_int); // 0x45d NEW_2
	var_253_int = var_258_int; // 0x45e Mov
	var_257_int = 0; // 0x460 MovI
	
Label_1121:
	var_263_bool = var_257_int < var_253_int; // 0x461 LT
	if(var_263_bool == 0) goto Label_1143; // 0x462 JumpB
	var_264_int = 0; var_265_int = 0; // 0x463 PushV
	var_265_int = var_257_int; // 0x464 Mov
	func_2562(var_264_int, var_265_int); // 0x465 NEW_2
	var_254_int = var_264_int; // 0x466 Mov
	var_270_object = Obj(); var_271_int = 0; // 0x468 PushV
	var_271_int = var_257_int; // 0x469 Mov
	func_2553(var_270_object, var_271_int); // 0x46a NEW_2
	var_256_object = var_270_object; // 0x46b Mov
	add(var_256_object); // 0x46d TObjFunc
	add(var_254_int); // 0x46f TObjFunc
	var_276_int = 0; // 0x471 PushI
	add(var_276_int); // 0x472 TObjFunc
	var_277_int = 1; // 0x474 PushI
	var_257_int = var_257_int + var_277_int; // 0x475 Add2
	goto Label_1121; // 0x476 Jump
	
Label_1143:
	return 10; // 0x477 Return
}


func_1245(var_0_int, var_1_int, var_28_int)
{
	var_417_int = 0; var_418_int = 0; var_419_int = 0; var_420_object = Obj(); var_421_int = 0; var_422_int = 0; var_423_object = Obj(); var_424_int = 0; var_425_int = 0; var_426_int = 0; var_427_object = Obj(); var_428_int = 0; var_429_int = 0; var_430_object = Obj(); // 0x4dd PushV
	size(var_424_int); // 0x4de TObjFunc
	var_431_int = var_1_int + var_0_int; // 0x4e0 Add
	var_432_bool = var_431_int > var_424_int; // 0x4e1 GT
	if(var_432_bool == 0) goto Label_1265; // 0x4e2 JumpB
	var_433_int = 2; // 0x4e3 PushI
	var_434_int = var_424_int / var_433_int; // 0x4e4 Mod
	var_435_int = 0; // 0x4e5 PushI
	var_436_bool = var_434_int == var_435_int; // 0x4e6 Eq
	if(var_436_bool == 0) goto Label_1260; // 0x4e7 JumpB
	var_437_int = var_1_int + var_0_int; // 0x4e8 Add
	var_438_int = var_437_int - var_424_int; // 0x4e9 Sub
	var_1_int = var_1_int - var_438_int; // 0x4ea Sub2
	goto Label_1265; // 0x4eb Jump
	
Label_1265:
	var_439_int = 0; // 0x4f1 PushI
	var_440_bool = var_1_int < var_439_int; // 0x4f2 LT
	if(var_440_bool == 0) goto Label_1269; // 0x4f3 JumpB
	var_1_int = 0; // 0x4f4 TMovI
	
Label_1269:
	var_426_int = var_1_int; // 0x4f5 MovT
	
Label_1270:
	var_441_int = var_1_int + var_0_int; // 0x4f6 Add
	var_442_bool = var_426_int < var_441_int; // 0x4f7 LT
	if(var_442_bool == 0) goto Label_1331; // 0x4f8 JumpB
	var_443_bool = var_426_int < var_424_int; // 0x4f9 LT
	if(var_443_bool == 0) goto Label_1321; // 0x4fa JumpB
	get(var_427_object, var_426_int); // 0x4fb TObjFunc
	get(var_428_int, var_426_int); // 0x4fd TObjFunc
	var_425_int = 0; // 0x4ff MovI
	var_444_int = 0; var_445_int = 0; // 0x500 PushV
	var_445_int = var_426_int - var_1_int; // 0x501 Sub2
	func_2035(var_430_object, var_444_int, var_445_int); // 0x502 NEW_2
	var_429_int = var_444_int; // 0x503 Mov
	var_453_int = 0; // 0x505 PushI
	var_454_bool = var_429_int > var_453_int; // 0x506 GT
	if(var_454_bool == 0) goto Label_1290; // 0x507 JumpB
	var_455_int = 16384; // 0x508 PushI
	var_425_int = var_425_int | var_455_int; // 0x509 Or2
	
Label_1290:
	var_456_bool = 0; var_457_object = Obj(); var_458_int = 0; var_459_bool = 0; // 0x50a PushV
	var_457_object = var_427_object; // 0x50b Mov
	var_458_int = var_28_int; // 0x50c MovT
	var_459_bool = 0; // 0x50d MovB
	func_0(var_456_bool, var_457_object, var_458_int, var_459_bool); // 0x50e NEW_2
	if(var_456_bool == 0) goto Label_1299; // 0x510 JumpB
	var_460_int = 131072; // 0x511 PushI
	var_425_int = var_425_int | var_460_int; // 0x512 Or2
	
Label_1299:
	CreateIntVector(var_430_object); // 0x513 Func
	add(var_429_int); // 0x515 ObjFunc
	add(var_428_int); // 0x517 ObjFunc
	var_461_int = 65536; // 0x519 PushI
	var_462_string = ""; var_463_int = 0; // 0x51a PushV
	var_463_int = var_426_int - var_1_int; // 0x51b Sub2
	func_2070(var_462_string, var_463_int); // 0x51c NEW_2
	SendMessage(var_461_int, var_462_string, var_430_object); // 0x51e Func
	var_464_string = ""; var_465_int = 0; // 0x520 PushV
	var_465_int = var_426_int - var_1_int; // 0x521 Sub2
	func_2070(var_464_string, var_465_int); // 0x522 NEW_2
	SendMessage(var_425_int, var_464_string, var_427_object); // 0x524 Func
	var_430_object = 0; // 0x526 SetNull
	var_427_object = 0; // 0x527 SetNull
	goto Label_1328; // 0x528 Jump
	
Label_1328:
	var_466_int = 1; // 0x530 PushI
	var_426_int = var_426_int + var_466_int; // 0x531 Add2
	goto Label_1270; // 0x532 Jump
	
Label_1321:
	var_467_int = 32768; // 0x529 PushI
	var_468_string = ""; var_469_int = 0; // 0x52a PushV
	var_469_int = var_426_int - var_1_int; // 0x52b Sub2
	func_2070(var_468_string, var_469_int); // 0x52c NEW_2
	SendMessage(var_467_int, var_468_string); // 0x52e Func
	
Label_1331:
	return 14; // 0x533 Return
	
Label_1260:
	var_470_int = var_1_int + var_0_int; // 0x4ec Add
	var_471_int = var_470_int - var_424_int; // 0x4ed Sub
	var_472_int = 1; // 0x4ee PushI
	var_473_int = var_471_int - var_472_int; // 0x4ef Sub
	var_1_int = var_1_int - var_473_int; // 0x4f0 Sub2
}


func_2528(var_315_object, var_316_int, var_317_int)
{
	var_318_object = Obj(); var_319_object = Obj(); var_320_object = Obj(); var_321_object = Obj(); // 0x9e0 PushV
	GetPlayerContainer(var_320_object); // 0x9e1 Func
	GetItem(var_321_object, var_317_int, var_316_int); // 0x9e3 ObjFunc
	var_315_object = var_321_object; // 0x9e5 Mov
	return 4; // 0x9e6 Return
}


func_872(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_28_int, var_59_float)
{
	var_244_int = 0; var_245_int = 0; // 0x368 PushV
	var_1_int = 0; // 0x369 TMovI
	var_2_int = 0; // 0x36a TMovI
	var_4_int = 0; // 0x36b TMovI
	var_246_int = 0; // 0x36c PushI
	var_247_bool = var_28_int == var_246_int; // 0x36d Eq
	if(var_247_bool == 0) goto Label_882; // 0x36e JumpB
	GetPlayerMoneyCount(var_59_float); // 0x36f Func
	goto Label_883; // 0x371 Jump
	
Label_883:
	clear(); // 0x373 TObjFunc
	clear(); // 0x375 TObjFunc
	clear(); // 0x377 TObjFunc
	clear(); // 0x379 TObjFunc
	clear(); // 0x37b TObjFunc
	clear(); // 0x37d TObjFunc
	clear(); // 0x37f TObjFunc
	clear(); // 0x381 TObjFunc
	clear(); // 0x383 TObjFunc
	clear(); // 0x385 TObjFunc
	clear(); // 0x387 TObjFunc
	clear(); // 0x389 TObjFunc
	clear(); // 0x38b TObjFunc
	clear(); // 0x38d TObjFunc
	clear(); // 0x38f TObjFunc
	clear(); // 0x391 TObjFunc
	clear(); // 0x393 TObjFunc
	clear(); // 0x395 TObjFunc
	clear(); // 0x397 TObjFunc
	func_1115(); // 0x39a NEW_2
	func_969(); // 0x39d NEW_2
	func_1146(var_52_int, var_53_string, var_54_string, var_55_string, var_56_string, var_57_object, var_58_object, var_59_float, var_244_int, var_245_int); // 0x3a0 NEW_2
	func_1245(var_59_float, var_244_int, var_245_int); // 0x3a3 NEW_2
	func_1432(var_245_int); // 0x3a6 NEW_2
	func_1332(var_59_float, var_244_int, var_245_int); // 0x3a9 NEW_2
	func_1428(var_245_int); // 0x3ac NEW_2
	size(var_245_int); // 0x3ae TObjFunc
	var_538_bool = var_245_int <= var_0_int; // 0x3b0 LE
	if(var_538_bool == 0) goto Label_951; // 0x3b1 JumpB
	var_539_int = 16384; // 0x3b2 PushI
	var_540_string = "l_scrollbar"; // 0x3b3 PushS
	SendMessage(var_539_int, var_540_string); // 0x3b4 Func
	goto Label_955; // 0x3b6 Jump
	
Label_955:
	size(var_245_int); // 0x3bb TObjFunc
	var_541_bool = var_245_int <= var_0_int; // 0x3bd LE
	if(var_541_bool == 0) goto Label_964; // 0x3be JumpB
	var_542_int = 16384; // 0x3bf PushI
	var_543_string = "r_scrollbar"; // 0x3c0 PushS
	SendMessage(var_542_int, var_543_string); // 0x3c1 Func
	goto Label_968; // 0x3c3 Jump
	
Label_968:
	return 2; // 0x3c8 Return
	
Label_964:
	var_544_int = 0; // 0x3c4 PushI
	var_545_string = "r_scrollbar"; // 0x3c5 PushS
	SendMessage(var_544_int, var_545_string); // 0x3c6 Func
	
Label_951:
	var_546_int = 0; // 0x3b7 PushI
	var_547_string = "l_scrollbar"; // 0x3b8 PushS
	SendMessage(var_546_int, var_547_string); // 0x3b9 Func
	
Label_882:
	var_3_int = 0; // 0x372 TMovI
}


func_2409(var_335_int)
{
	var_337_int = 0; var_338_int = 0; // 0x969 PushV
	GetItemID(var_338_int); // 0x96a ObjFunc
	var_335_int = var_338_int; // 0x96c Mov
	return 2; // 0x96d Return
}


func_2537(var_308_int, var_309_int, var_310_int)
{
	var_311_object = Obj(); var_312_int = 0; var_313_object = Obj(); var_314_int = 0; // 0x9e9 PushV
	GetPlayerContainer(var_313_object); // 0x9ea Func
	GetItemAmount(var_314_int, var_310_int, var_309_int); // 0x9ec ObjFunc
	var_308_int = var_314_int; // 0x9ee Mov
	return 4; // 0x9ef Return
}


func_2414(var_368_int, var_369_object, var_370_int)
{
	var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_string = ""; var_375_bool = 0; var_376_bool = 0; var_377_int = 0; var_378_bool = 0; var_379_int = 0; var_380_int = 0; var_381_int = 0; var_382_int = 0; var_383_string = ""; var_384_bool = 0; var_385_bool = 0; var_386_int = 0; var_387_bool = 0; var_388_int = 0; // 0x96e PushV
	var_389_int = 0; // 0x96f PushI
	var_390_bool = var_370_int == var_389_int; // 0x970 Eq
	if(var_390_bool == 0) goto Label_2466; // 0x971 JumpB
	var_391_int = 0; // 0x972 PushV
	func_2061(var_391_int); // 0x973 NEW_2
	var_380_int = var_391_int; // 0x974 Mov
	var_381_int = 0; // 0x976 MovI
	var_382_int = 1; // 0x977 MovI
	
Label_2424:
	var_397_bool = var_382_int <= var_380_int; // 0x978 LE
	if(var_397_bool == 0) goto Label_2449; // 0x979 JumpB
	var_383_string = "Price"; // 0x97a MovS
	var_398_int = 1; // 0x97b PushI
	var_399_bool = var_382_int != var_398_int; // 0x97c Neq
	if(var_399_bool == 0) goto Label_2431; // 0x97d JumpB
	var_383_string = var_383_string + var_382_int; // 0x97e Add2
	
Label_2431:
	var_400_int = 0; var_401_object = Obj(); // 0x97f PushV
	var_401_object = var_369_object; // 0x980 Mov
	func_2409(var_401_object); // 0x981 NEW_2
	HasInvItemProperty(var_384_bool, var_400_int, var_383_string); // 0x983 Func
	var_402_bool = var_384_bool == 0; // 0x985 Not
	if(var_402_bool == 0) goto Label_2440; // 0x986 JumpB
	goto Label_2446; // 0x987 Jump
	
Label_2446:
	var_403_int = 1; // 0x98e PushI
	var_382_int = var_382_int + var_403_int; // 0x98f Add2
	goto Label_2424; // 0x990 Jump
	
Label_2440:
	var_404_int = 0; var_405_object = Obj(); // 0x988 PushV
	var_405_object = var_369_object; // 0x989 Mov
	func_2409(var_405_object); // 0x98a NEW_2
	GetInvItemProperty(var_381_int, var_404_int, var_383_string); // 0x98c Func
	
Label_2449:
	var_406_string = "durability"; // 0x991 PushS
	HasProperty(var_385_bool, var_406_string); // 0x992 ObjFunc
	var_407_bool = var_385_bool; // 0x994 Push
	if(var_407_bool == 0) goto Label_2464; // 0x995 JumpB
	var_408_string = "durability"; // 0x996 PushS
	GetProperty(var_386_int, var_408_string); // 0x997 ObjFunc
	var_409_float = 0.5; // 0x999 PushF
	var_410_float = 1.0; // 0x99a PushF
	var_411_float = 100.0; // 0x99b PushF
	var_412_float = var_386_int / var_411_float; // 0x99c Div
	var_413_int = var_410_float + var_412_float; // 0x99d Add
	var_414_float = var_409_float * var_413_int; // 0x99e Mult
	var_381_int = var_381_int * var_414_float; // 0x99f Mult2
	
Label_2464:
	var_368_int = var_381_int; // 0x9a0 Mov
	return 18; // 0x9a1 Return
	
Label_2466:
	var_415_int = 0; var_416_object = Obj(); // 0x9a2 PushV
	var_416_object = var_369_object; // 0x9a3 Mov
	func_2409(var_416_object); // 0x9a4 NEW_2
	var_417_string = "BarterPrice"; // 0x9a6 PushS
	var_418_int = var_417_string + var_370_int; // 0x9a7 Add
	HasInvItemProperty(var_387_bool, var_415_int, var_418_int); // 0x9a8 Func
	var_419_bool = var_387_bool == 0; // 0x9aa Not
	if(var_419_bool == 0) goto Label_2478; // 0x9ab JumpB
	var_368_int = 0; // 0x9ac MovI
	return 18; // 0x9ad Return
	
Label_2478:
	var_420_int = 0; var_421_object = Obj(); // 0x9ae PushV
	var_421_object = var_369_object; // 0x9af Mov
	func_2409(var_421_object); // 0x9b0 NEW_2
	var_422_string = "BarterPrice"; // 0x9b2 PushS
	var_423_int = var_422_string + var_370_int; // 0x9b3 Add
	GetInvItemProperty(var_388_int, var_420_int, var_423_int); // 0x9b4 Func
	var_424_int = 0; // 0x9b6 PushI
	var_425_bool = var_388_int > var_424_int; // 0x9b7 GT
	if(var_425_bool == 0) goto Label_2491; // 0x9b8 JumpB
	var_368_int = var_388_int; // 0x9b9 Mov
	return 18; // 0x9ba Return
	
Label_2491:
	var_368_int = -var_388_int; // 0x9bb Neg2
	return 18; // 0x9bc Return
}


func_2545(var_297_bool, var_298_int, var_299_int)
{
	var_300_object = Obj(); var_301_bool = 0; var_302_object = Obj(); var_303_bool = 0; // 0x9f1 PushV
	GetPlayerContainer(var_302_object); // 0x9f2 Func
	IsItemSelected(var_303_bool, var_299_int, var_298_int); // 0x9f4 ObjFunc
	var_297_bool = var_303_bool; // 0x9f6 Mov
	return 4; // 0x9f7 Return
}


func_2035(var_1_int, var_444_int, var_445_int)
{
	var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_int = 0; // 0x7f3 PushV
	size(var_448_int); // 0x7f4 TObjFunc
	var_450_int = var_445_int + var_1_int; // 0x7f6 Add
	var_451_bool = var_450_int >= var_448_int; // 0x7f7 GE
	if(var_451_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_444_int = 0; // 0x7f9 MovI
	return 4; // 0x7fa Return
	
Label_2043:
	var_452_int = var_445_int + var_1_int; // 0x7fb Add
	get(var_449_int, var_452_int); // 0x7fc TObjFunc
	var_444_int = var_449_int; // 0x7fe Mov
	return 4; // 0x7ff Return
}


func_1652(var_460_bool, var_461_object)
{
	var_464_int = 0; var_465_object = Obj(); var_466_int = 0; var_467_int = 0; var_468_int = 0; var_469_object = Obj(); var_470_int = 0; var_471_int = 0; // 0x674 PushV
	size(var_468_int); // 0x675 ObjFunc
	var_472_int = 0; var_473_object = Obj(); // 0x677 PushV
	var_473_object = var_461_object; // 0x678 Mov
	func_2503(var_472_int, var_473_object); // 0x679 NEW_2
	var_478_int = 1; // 0x67b PushI
	var_479_bool = var_472_int > var_478_int; // 0x67c GT
	if(var_479_bool == 0) goto Label_1690; // 0x67d JumpB
	var_470_int = 0; // 0x67e MovI
	
Label_1663:
	var_480_bool = var_470_int < var_468_int; // 0x67f LT
	if(var_480_bool == 0) goto Label_1690; // 0x680 JumpB
	get(var_469_object, var_470_int); // 0x681 ObjFunc
	get(var_471_int, var_470_int); // 0x683 ObjFunc
	var_481_bool = 0; var_482_object = Obj(); var_483_object = Obj(); // 0x685 PushV
	var_482_object = var_461_object; // 0x686 Mov
	var_483_object = var_469_object; // 0x687 Mov
	func_2575(var_481_bool, var_482_object, var_483_object); // 0x688 NEW_2
	if(var_481_bool == 0) goto Label_1687; // 0x68a JumpB
	var_489_int = 0; var_490_object = Obj(); // 0x68b PushV
	var_490_object = var_461_object; // 0x68c Mov
	func_2503(var_489_int, var_490_object); // 0x68d NEW_2
	var_491_bool = var_471_int < var_489_int; // 0x68f LT
	if(var_491_bool == 0) goto Label_1685; // 0x690 JumpB
	var_492_int = 1; // 0x691 PushI
	var_493_int = var_471_int + var_492_int; // 0x692 Add
	set(var_470_int, var_493_int); // 0x693 ObjFunc
	
Label_1685:
	var_460_bool = 1; // 0x695 MovB
	return 8; // 0x696 Return
	
Label_1687:
	var_494_int = 1; // 0x697 PushI
	var_470_int = var_470_int + var_494_int; // 0x698 Add2
	goto Label_1663; // 0x699 Jump
	
Label_1690:
	var_495_int = 12; // 0x69a PushI
	var_496_bool = var_468_int < var_495_int; // 0x69b LT
	if(var_496_bool == 0) goto Label_1700; // 0x69c JumpB
	add(var_461_object); // 0x69d ObjFunc
	var_497_int = 1; // 0x69f PushI
	add(var_497_int); // 0x6a0 ObjFunc
	var_460_bool = 1; // 0x6a2 MovB
	return 8; // 0x6a3 Return
	
Label_1700:
	var_460_bool = 0; // 0x6a4 MovB
	return 8; // 0x6a5 Return
}


func_2553(var_270_object, var_271_int)
{
	var_272_object = Obj(); var_273_object = Obj(); var_274_object = Obj(); var_275_object = Obj(); // 0x9f9 PushV
	GetContainer(var_274_object); // 0x9fa Func
	GetItem(var_275_object, var_271_int); // 0x9fc ObjFunc
	var_270_object = var_275_object; // 0x9fe Mov
	return 4; // 0x9ff Return
}


func_1530(var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_447_bool, var_448_object)
{
	var_449_int = 0; var_450_int = 0; // 0x5fa PushV
	var_451_int = 0; var_452_object = Obj(); // 0x5fb PushV
	var_452_object = var_448_object; // 0x5fc Mov
	func_2493(var_451_int, var_452_object); // 0x5fd NEW_2
	var_450_int = var_451_int; // 0x5fe Mov
	var_458_int = 0; // 0x600 PushI
	var_459_bool = var_450_int == var_458_int; // 0x601 Eq
	if(var_459_bool == 0) goto Label_1548; // 0x602 JumpB
	var_460_bool = 0; var_461_object = Obj(); var_462_object = Obj(); var_463_object = Obj(); // 0x603 PushV
	var_461_object = var_448_object; // 0x604 Mov
	var_462_object = var_12_object; // 0x605 MovT
	var_463_object = var_13_object; // 0x606 MovT
	func_1652(var_462_object, var_463_object); // 0x607 NEW_2
	var_447_bool = var_460_bool; // 0x608 Mov
	return 2; // 0x60a Return
	
Label_1548:
	var_498_int = 1; // 0x60c PushI
	var_499_bool = var_450_int == var_498_int; // 0x60d Eq
	if(var_499_bool == 0) goto Label_1560; // 0x60e JumpB
	var_500_bool = 0; var_501_object = Obj(); var_502_object = Obj(); var_503_object = Obj(); // 0x60f PushV
	var_501_object = var_448_object; // 0x610 Mov
	var_502_object = var_14_object; // 0x611 MovT
	var_503_object = var_15_object; // 0x612 MovT
	func_1652(var_502_object, var_503_object); // 0x613 NEW_2
	var_447_bool = var_500_bool; // 0x614 Mov
	return 2; // 0x616 Return
	
Label_1560:
	var_504_int = 2; // 0x618 PushI
	var_505_bool = var_450_int == var_504_int; // 0x619 Eq
	if(var_505_bool == 0) goto Label_1572; // 0x61a JumpB
	var_506_bool = 0; var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); // 0x61b PushV
	var_507_object = var_448_object; // 0x61c Mov
	var_508_object = var_16_object; // 0x61d MovT
	var_509_object = var_17_object; // 0x61e MovT
	func_1652(var_508_object, var_509_object); // 0x61f NEW_2
	var_447_bool = var_506_bool; // 0x620 Mov
	return 2; // 0x622 Return
	
Label_1572:
	var_510_int = 3; // 0x624 PushI
	var_511_bool = var_450_int == var_510_int; // 0x625 Eq
	if(var_511_bool == 0) goto Label_1583; // 0x626 JumpB
	var_512_bool = 0; var_513_object = Obj(); var_514_object = Obj(); var_515_object = Obj(); // 0x627 PushV
	var_513_object = var_448_object; // 0x628 Mov
	var_514_object = var_18_object; // 0x629 MovT
	var_515_object = var_19_object; // 0x62a MovT
	func_1652(var_514_object, var_515_object); // 0x62b NEW_2
	var_447_bool = var_512_bool; // 0x62c Mov
	return 2; // 0x62e Return
	
Label_1583:
	var_516_bool = 0; var_517_object = Obj(); var_518_object = Obj(); var_519_object = Obj(); // 0x62f PushV
	var_517_object = var_448_object; // 0x630 Mov
	var_518_object = var_20_object; // 0x631 MovT
	var_519_object = var_21_object; // 0x632 MovT
	func_1652(var_518_object, var_519_object); // 0x633 NEW_2
	var_447_bool = var_516_bool; // 0x634 Mov
	return 2; // 0x636 Return
}


func_2299(var_244_int, var_246_string)
{
	var_247_int = 0; var_248_int = 0; var_249_int = 0; var_250_int = 0; // 0x8fb PushV
	var_251_int = 0; // 0x8fc PushV
	func_2102(var_251_int); // 0x8fd NEW_2
	var_249_int = var_251_int; // 0x8fe Mov
	var_250_int = 0; // 0x900 MovI
	
Label_2305:
	var_338_bool = var_250_int < var_249_int; // 0x901 LT
	if(var_338_bool == 0) goto Label_2318; // 0x902 JumpB
	var_339_string = ""; var_340_int = 0; // 0x903 PushV
	var_340_int = var_250_int; // 0x904 Mov
	func_2070(var_339_string, var_340_int); // 0x905 NEW_2
	var_341_bool = var_246_string == var_339_string; // 0x907 Eq
	if(var_341_bool == 0) goto Label_2315; // 0x908 JumpB
	var_244_int = var_250_int; // 0x909 Mov
	return 4; // 0x90a Return
	
Label_2315:
	var_342_int = 1; // 0x90b PushI
	var_250_int = var_250_int + var_342_int; // 0x90c Add2
	goto Label_2305; // 0x90d Jump
	
Label_2318:
	var_244_int = -1; // 0x90e MovI
	return 4; // 0x90f Return
}


func_1020(var_28_int, var_278_int, var_279_bool)
{
	var_280_object = Obj(); var_281_int = 0; var_282_int = 0; var_283_int = 0; var_284_bool = 0; var_285_object = Obj(); var_286_int = 0; var_287_int = 0; var_288_int = 0; var_289_bool = 0; // 0x3fc PushV
	var_290_int = 0; var_291_int = 0; // 0x3fd PushV
	var_291_int = var_278_int; // 0x3fe Mov
	func_2520(var_290_int, var_291_int); // 0x3ff NEW_2
	var_286_int = var_290_int; // 0x400 Mov
	var_288_int = 0; // 0x402 MovI
	
Label_1027:
	var_296_bool = var_288_int < var_286_int; // 0x403 LT
	if(var_296_bool == 0) goto Label_1113; // 0x404 JumpB
	var_297_bool = 0; var_298_int = 0; var_299_int = 0; // 0x405 PushV
	var_298_int = var_278_int; // 0x406 Mov
	var_299_int = var_288_int; // 0x407 Mov
	func_2545(var_297_bool, var_298_int, var_299_int); // 0x408 NEW_2
	var_289_bool = var_297_bool; // 0x409 Mov
	var_304_bool = 0; // 0x40b PushV
	var_304_bool = 0; // 0x40c MovB
	var_305_bool = var_279_bool == 0; // 0x40d Not
	if(var_305_bool == 0) goto Label_1042; // 0x40e JumpB
	var_306_bool = var_289_bool; // 0x40f Push
	if(var_306_bool == 0) goto Label_1042; // 0x410 JumpB
	var_304_bool = 1; // 0x411 MovB
	
Label_1042:
	if(var_304_bool == 0) goto Label_1044; // 0x412 JumpB
	goto Label_1110; // 0x413 Jump
	
Label_1110:
	var_307_int = 1; // 0x456 PushI
	var_288_int = var_288_int + var_307_int; // 0x457 Add2
	goto Label_1027; // 0x458 Jump
	
Label_1044:
	var_308_int = 0; var_309_int = 0; var_310_int = 0; // 0x414 PushV
	var_309_int = var_278_int; // 0x415 Mov
	var_310_int = var_288_int; // 0x416 Mov
	func_2537(var_308_int, var_309_int, var_310_int); // 0x417 NEW_2
	var_287_int = var_308_int; // 0x418 Mov
	var_315_object = Obj(); var_316_int = 0; var_317_int = 0; // 0x41a PushV
	var_316_int = var_278_int; // 0x41b Mov
	var_317_int = var_288_int; // 0x41c Mov
	func_2528(var_315_object, var_316_int, var_317_int); // 0x41d NEW_2
	var_285_object = var_315_object; // 0x41e Mov
	var_322_bool = 0; // 0x420 PushV
	var_322_bool = 0; // 0x421 MovB
	var_323_bool = var_279_bool; // 0x422 Push
	if(var_323_bool == 0) goto Label_1074; // 0x423 JumpB
	var_324_bool = 0; // 0x424 PushV
	var_324_bool = 1; // 0x425 MovB
	var_325_bool = 0; var_326_object = Obj(); var_327_int = 0; var_328_bool = 0; // 0x426 PushV
	var_326_object = var_285_object; // 0x427 Mov
	var_327_int = var_28_int; // 0x428 MovT
	var_328_bool = 1; // 0x429 MovB
	func_0(var_325_bool, var_326_object, var_327_int, var_328_bool); // 0x42a NEW_2
	if(var_325_bool == 0) goto Label_1072; // 0x42c JumpB
	var_354_bool = var_289_bool; // 0x42d Push
	if(var_354_bool == 0) goto Label_1072; // 0x42e JumpB
	var_324_bool = 0; // 0x42f MovB
	
Label_1072:
	if(var_324_bool == 0) goto Label_1074; // 0x430 JumpB
	var_322_bool = 1; // 0x431 MovB
	
Label_1074:
	if(var_322_bool == 0) goto Label_1086; // 0x432 JumpB
	add(var_285_object); // 0x433 TObjFunc
	add(var_287_int); // 0x435 TObjFunc
	var_355_int = 0; // 0x437 PushI
	add(var_355_int); // 0x438 TObjFunc
	var_356_int = 1; // 0x43a PushI
	add(var_356_int); // 0x43b TObjFunc
	goto Label_1110; // 0x43d Jump
	
Label_1086:
	var_357_bool = 0; // 0x43e PushV
	var_357_bool = 0; // 0x43f MovB
	var_358_bool = var_279_bool == 0; // 0x440 Not
	if(var_358_bool == 0) goto Label_1099; // 0x441 JumpB
	var_359_bool = 0; var_360_object = Obj(); var_361_int = 0; var_362_bool = 0; // 0x442 PushV
	var_360_object = var_285_object; // 0x443 Mov
	var_361_int = var_28_int; // 0x444 MovT
	var_362_bool = 1; // 0x445 MovB
	func_0(var_359_bool, var_360_object, var_361_int, var_362_bool); // 0x446 NEW_2
	var_363_bool = var_359_bool == 0; // 0x448 Not
	if(var_363_bool == 0) goto Label_1099; // 0x449 JumpB
	var_357_bool = 1; // 0x44a MovB
	
Label_1099:
	if(var_357_bool == 0) goto Label_1110; // 0x44b JumpB
	add(var_285_object); // 0x44c TObjFunc
	add(var_287_int); // 0x44e TObjFunc
	var_364_int = 0; // 0x450 PushI
	add(var_364_int); // 0x451 TObjFunc
	var_365_int = 0; // 0x453 PushI
	add(var_365_int); // 0x454 TObjFunc
	
Label_1113:
	return 10; // 0x459 Return
}


