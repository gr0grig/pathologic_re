task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_float)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_string = ""; var_47_cvector = CVector(0,0,0); var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_float = 0; var_60_float = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_string = ""; var_66_cvector = CVector(0,0,0); var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_string = ""; // 0x13e PushV
	var_72_bool = var_30_bool; // 0x13f PushT
	if(var_72_bool == 0) goto Label_324; // 0x140 JumpB
	var_73_int = 500; // 0x141 PushI
	var_74_float = var_73_int * var_33_float; // 0x142 Mult
	var_12_float = var_12_float + var_74_float; // 0x143 Add2
	
Label_324:
	var_75_bool = var_29_bool; // 0x144 PushT
	if(var_75_bool == 0) goto Label_329; // 0x145 JumpB
	var_76_int = 500; // 0x146 PushI
	var_77_float = var_76_int * var_33_float; // 0x147 Mult
	var_12_float = var_12_float - var_77_float; // 0x148 Sub2
	
Label_329:
	var_78_bool = var_27_bool; // 0x149 PushT
	if(var_78_bool == 0) goto Label_334; // 0x14a JumpB
	var_79_int = 500; // 0x14b PushI
	var_80_float = var_79_int * var_33_float; // 0x14c Mult
	var_13_float = var_13_float - var_80_float; // 0x14d Sub2
	
Label_334:
	var_81_bool = var_28_bool; // 0x14e PushT
	if(var_81_bool == 0) goto Label_339; // 0x14f JumpB
	var_82_int = 500; // 0x150 PushI
	var_83_float = var_82_int * var_33_float; // 0x151 Mult
	var_13_float = var_13_float + var_83_float; // 0x152 Add2
	
Label_339:
	var_84_bool = var_31_bool; // 0x153 PushT
	if(var_84_bool == 0) goto Label_356; // 0x154 JumpB
	var_85_bool = var_18_bool == 0; // 0x155 Not
	if(var_85_bool == 0) goto Label_356; // 0x156 JumpB
	var_86_float = 1.1; // 0x157 PushF
	var_87_float = var_86_float * var_33_float; // 0x158 Mult
	var_14_float = var_14_float + var_87_float; // 0x159 Add2
	var_88_float = 2.0; // 0x15a PushF
	var_89_bool = var_14_float > var_88_float; // 0x15b GT
	if(var_89_bool == 0) goto Label_350; // 0x15c JumpB
	var_14_float = 2.0; // 0x15d TMovF
	
Label_350:
	var_90_int = -1; // 0x15e PushI
	var_0_int = var_0_int + var_90_int; // 0x15f Add2
	var_91_int = 0; // 0x160 PushI
	var_92_bool = var_0_int < var_91_int; // 0x161 LT
	if(var_92_bool == 0) goto Label_356; // 0x162 JumpB
	var_0_int = 0; // 0x163 TMovI
	
Label_356:
	var_93_bool = var_32_bool; // 0x164 PushT
	if(var_93_bool == 0) goto Label_375; // 0x165 JumpB
	var_94_bool = var_18_bool == 0; // 0x166 Not
	if(var_94_bool == 0) goto Label_375; // 0x167 JumpB
	var_95_float = 1.1; // 0x168 PushF
	var_96_float = var_95_float * var_33_float; // 0x169 Mult
	var_14_float = var_14_float - var_96_float; // 0x16a Sub2
	var_97_float = GlobalVars[0]; // 0x16b PushGE
	var_98_bool = var_14_float < var_97_float; // 0x16c LT
	if(var_98_bool == 0) goto Label_375; // 0x16d JumpB
	var_99_float = GlobalVars[0]; // 0x16e PushGE
	var_14_float = var_99_float; // 0x16f TMov
	var_100_int = 1; // 0x171 PushI
	var_0_int = var_0_int + var_100_int; // 0x172 Add2
	var_101_int = 2; // 0x173 PushI
	var_102_bool = var_0_int > var_101_int; // 0x174 GT
	if(var_102_bool == 0) goto Label_375; // 0x175 JumpB
	var_0_int = 2; // 0x176 TMovI
	
Label_375:
	var_103_float = var_3_int / var_14_float; // 0x177 Div
	var_104_int = 2; // 0x178 PushI
	var_105_float = var_103_float / var_104_int; // 0x179 Div
	var_53_int = var_12_float - var_105_float; // 0x17a Sub2
	var_106_float = var_3_int / var_14_float; // 0x17b Div
	var_107_int = 2; // 0x17c PushI
	var_108_float = var_106_float / var_107_int; // 0x17d Div
	var_54_int = var_12_float + var_108_float; // 0x17e Add2
	var_109_float = var_4_int / var_14_float; // 0x17f Div
	var_110_int = 2; // 0x180 PushI
	var_111_float = var_109_float / var_110_int; // 0x181 Div
	var_55_int = var_13_float - var_111_float; // 0x182 Sub2
	var_112_float = var_4_int / var_14_float; // 0x183 Div
	var_113_int = 2; // 0x184 PushI
	var_114_float = var_112_float / var_113_int; // 0x185 Div
	var_56_int = var_13_float + var_114_float; // 0x186 Add2
	var_57_int = 0; // 0x187 MovI
	var_58_int = 0; // 0x188 MovI
	var_115_int = 0; // 0x189 PushI
	var_116_bool = var_53_int < var_115_int; // 0x18a LT
	if(var_116_bool == 0) goto Label_398; // 0x18b JumpB
	var_57_int = -var_53_int; // 0x18c Neg2
	goto Label_403; // 0x18d Jump
	
Label_403:
	var_117_int = 0; // 0x193 PushI
	var_118_bool = var_55_int < var_117_int; // 0x194 LT
	if(var_118_bool == 0) goto Label_408; // 0x195 JumpB
	var_58_int = -var_55_int; // 0x196 Neg2
	goto Label_413; // 0x197 Jump
	
Label_413:
	var_12_float = var_12_float + var_57_int; // 0x19d Add2
	var_13_float = var_13_float + var_58_int; // 0x19e Add2
	var_119_bool = 0; // 0x19f PushV
	var_119_bool = 0; // 0x1a0 MovB
	var_120_bool = 0; // 0x1a1 PushV
	func_0(var_119_bool, var_120_bool); // 0x1a2 NEW_2
	var_132_bool = var_120_bool == 0; // 0x1a4 Not
	if(var_132_bool == 0) goto Label_425; // 0x1a5 JumpB
	var_133_bool = var_18_bool == 0; // 0x1a6 Not
	if(var_133_bool == 0) goto Label_425; // 0x1a7 JumpB
	var_119_bool = 1; // 0x1a8 MovB
	
Label_425:
	if(var_119_bool == 0) goto Label_525; // 0x1a9 JumpB
	clear(); // 0x1aa TObjFunc
	var_62_int = 0; // 0x1ac MovI
	GetMarkCount(var_61_int); // 0x1ad TObjFunc
	var_63_int = 0; // 0x1af MovI
	
Label_432:
	var_134_bool = var_63_int < var_61_int; // 0x1b0 LT
	if(var_134_bool == 0) goto Label_479; // 0x1b1 JumpB
	GetMark(var_63_int, var_64_object); // 0x1b2 TObjFunc
	GetLocator(var_65_string); // 0x1b4 ObjFunc
	var_135_cvector = CVector(0,0,0); var_136_string = ""; // 0x1b6 PushV
	var_136_string = var_65_string; // 0x1b7 Mov
	func_1067(var_135_cvector, var_136_string); // 0x1b8 NEW_2
	var_66_cvector = var_135_cvector; // 0x1b9 Mov
	var_149_float = GetByIndex(var_66_cvector, 0); // 0x1bb PushE
	var_59_float = var_149_float; // 0x1bc Mov
	var_150_float = GetByIndex(var_66_cvector, 2); // 0x1be PushE
	var_60_float = var_150_float; // 0x1bf Mov
	ConvertToMapCoordinates(var_59_float, var_60_float); // 0x1c1 TObjFunc
	var_151_int = 0; var_152_int = 0; // 0x1c3 PushV
	var_152_int = var_59_float; // 0x1c4 Mov
	func_304(var_69_int, var_70_int, var_71_string, var_151_int, var_152_int); // 0x1c5 NEW_2
	var_59_float = var_151_int; // 0x1c6 Mov
	var_157_int = 0; var_158_int = 0; // 0x1c8 PushV
	var_158_int = var_60_float; // 0x1c9 Mov
	func_311(var_69_int, var_70_int, var_71_string, var_157_int, var_158_int); // 0x1ca NEW_2
	var_60_float = var_157_int; // 0x1cb Mov
	var_163_int = var_59_float - var_5_int; // 0x1cd Sub
	var_164_int = var_59_float - var_5_int; // 0x1ce Sub
	var_165_float = var_163_int * var_164_int; // 0x1cf Mult
	var_166_int = var_60_float - var_6_int; // 0x1d0 Sub
	var_167_int = var_60_float - var_6_int; // 0x1d1 Sub
	var_168_float = var_166_int * var_167_int; // 0x1d2 Mult
	var_169_int = var_165_float + var_168_float; // 0x1d3 Add
	var_170_int = 900; // 0x1d4 PushI
	var_171_bool = var_169_int < var_170_int; // 0x1d5 LT
	if(var_171_bool == 0) goto Label_475; // 0x1d6 JumpB
	add(var_64_object); // 0x1d7 TObjFunc
	var_172_int = 1; // 0x1d9 PushI
	var_62_int = var_62_int + var_172_int; // 0x1da Add2
	
Label_475:
	var_64_object = 0; // 0x1db SetNull
	var_173_int = 1; // 0x1dc PushI
	var_63_int = var_63_int + var_173_int; // 0x1dd Add2
	goto Label_432; // 0x1de Jump
	
Label_479:
	var_174_bool = var_62_int == 0; // 0x1df Not
	if(var_174_bool == 0) goto Label_518; // 0x1e0 JumpB
	var_175_int = 0; var_176_int = 0; // 0x1e1 PushV
	var_176_int = var_5_int; // 0x1e2 MovT
	func_290(var_69_int, var_70_int, var_71_string, var_175_int, var_176_int); // 0x1e3 NEW_2
	var_69_int = var_175_int; // 0x1e4 Mov
	var_181_int = 0; var_182_int = 0; // 0x1e6 PushV
	var_182_int = var_6_int; // 0x1e7 MovT
	func_297(var_69_int, var_70_int, var_71_string, var_181_int, var_182_int); // 0x1e8 NEW_2
	var_70_int = var_181_int; // 0x1e9 Mov
	GetObjectFromPoint(var_67_int, var_69_int, var_70_int); // 0x1eb TObjFunc
	var_187_int = 0; // 0x1ed PushI
	var_188_bool = var_67_int >= var_187_int; // 0x1ee GE
	if(var_188_bool == 0) goto Label_511; // 0x1ef JumpB
	GetObjectID(var_68_int, var_67_int); // 0x1f0 TObjFunc
	var_189_int = 100000; // 0x1f2 PushI
	var_190_int = var_68_int + var_189_int; // 0x1f3 Add
	GetStringByID(var_71_string, var_190_int); // 0x1f4 Func
	var_191_int = 5; // 0x1f6 PushI
	SetTooltip(var_191_int, var_71_string); // 0x1f7 Func
	var_192_bool = var_11_int != var_67_int; // 0x1f9 Neq
	if(var_192_bool == 0) goto Label_510; // 0x1fa JumpB
	CreateObjectHighlight(var_49_int, var_67_int); // 0x1fb TObjFunc
	var_11_int = var_67_int; // 0x1fd TMov
	
Label_510:
	goto Label_517; // 0x1fe Jump
	
Label_517:
	goto Label_524; // 0x205 Jump
	
Label_524:
	goto Label_531; // 0x20c Jump
	
Label_531:
	return 38; // 0x213 Return
	
Label_511:
	var_193_int = -1; // 0x1ff PushI
	var_194_string = ""; // 0x200 PushS
	SetTooltip(var_193_int, var_194_string); // 0x201 Func
	var_23_object = 0; // 0x203 SetNullT
	var_11_int = -1; // 0x204 TMovI
	
Label_518:
	var_195_int = 2; // 0x206 PushI
	var_196_string = ""; // 0x207 PushS
	SetTooltip(var_195_int, var_196_string, var_54_int); // 0x208 Func
	var_23_object = 0; // 0x20a SetNullT
	var_11_int = -1; // 0x20b TMovI
	
Label_525:
	var_197_int = -1; // 0x20d PushI
	var_198_string = ""; // 0x20e PushS
	SetTooltip(var_197_int, var_198_string); // 0x20f Func
	var_11_int = -1; // 0x211 TMovI
	var_23_object = 0; // 0x212 SetNullT
	
Label_408:
	var_199_int = 2048; // 0x198 PushI
	var_200_bool = var_56_int > var_199_int; // 0x199 GT
	if(var_200_bool == 0) goto Label_413; // 0x19a JumpB
	var_201_int = 2048; // 0x19b PushI
	var_58_int = var_201_int - var_56_int; // 0x19c Sub2
	
Label_398:
	var_202_int = 2048; // 0x18e PushI
	var_203_bool = var_54_int > var_202_int; // 0x18f GT
	if(var_203_bool == 0) goto Label_403; // 0x190 JumpB
	var_204_int = 2048; // 0x191 PushI
	var_57_int = var_204_int - var_54_int; // 0x192 Sub2
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_33_bool = var_18_bool; // 0x2b1 PushT
	if(var_33_bool == 0) goto Label_695; // 0x2b2 JumpB
	func_674(var_32_bool); // 0x2b4 NEW_2
	goto Label_698; // 0x2b6 Jump
	
Label_698:
	return 0; // 0x2ba Return
	
Label_695:
	func_604(var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool); // 0x2b8 NEW_2
}


task_0_event_11(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int)
{
	var_35_bool = 0; // 0x2e7 PushV
	var_35_bool = 1; // 0x2e8 MovB
	var_36_bool = 0; // 0x2e9 PushV
	func_0(var_35_bool, var_36_bool); // 0x2ea NEW_2
	if(var_36_bool == 0) goto Label_752; // 0x2ec JumpB
	var_48_bool = var_18_bool; // 0x2ed PushT
	if(var_48_bool == 0) goto Label_752; // 0x2ee JumpB
	var_35_bool = 0; // 0x2ef MovB
	
Label_752:
	if(var_35_bool == 0) goto Label_754; // 0x2f0 JumpB
	return 0; // 0x2f1 Return
	
Label_754:
	var_15_bool = 1; // 0x2f2 TMovB
	var_7_int = var_33_int; // 0x2f3 TMov
	var_8_int = var_34_int; // 0x2f4 TMov
	var_9_int = var_12_float; // 0x2f5 TMovT
	var_10_int = var_13_float; // 0x2f6 TMovT
	var_49_string = "drag"; // 0x2f7 PushS
	SetCursor(var_49_string); // 0x2f8 Func
	return 0; // 0x2fa Return
}


task_0_event_12(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int, var_35_bool)
{
	var_15_bool = 0; // 0x2fc TMovB
	var_36_string = "default"; // 0x2fd PushS
	SetCursor(var_36_string); // 0x2fe Func
	return 0; // 0x300 Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int)
{
	var_5_int = var_33_int; // 0x302 TMov
	var_6_int = var_34_int; // 0x303 TMov
	var_16_bool = 0; // 0x304 TMovB
	var_35_bool = var_15_bool; // 0x305 PushT
	if(var_35_bool == 0) goto Label_781; // 0x306 JumpB
	var_36_int = var_7_int - var_33_int; // 0x307 Sub
	var_37_float = var_36_int / var_14_float; // 0x308 Div
	var_12_float = var_9_int + var_37_float; // 0x309 Add2
	var_38_int = var_8_int - var_34_int; // 0x30a Sub
	var_39_float = var_38_int / var_14_float; // 0x30b Div
	var_13_float = var_10_int + var_39_float; // 0x30c Add2
	
Label_781:
	return 0; // 0x30d Return
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_16_bool = 1; // 0x30e TMovB
	return 0; // 0x30f Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_int, var_35_float)
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x310 PushV
	var_40_bool = var_18_bool; // 0x311 PushT
	if(var_40_bool == 0) goto Label_788; // 0x312 JumpB
	return 4; // 0x313 Return
	
Label_788:
	var_41_float = 0.2; // 0x314 PushF
	var_42_bool = var_35_float == var_41_float; // 0x315 Eq
	if(var_42_bool == 0) goto Label_792; // 0x316 JumpB
	goto Label_821; // 0x317 Jump
	
Label_821:
	return 4; // 0x335 Return
	
Label_792:
	var_43_float = -0.2; // 0x318 PushF
	var_44_bool = var_35_float == var_43_float; // 0x319 Eq
	if(var_44_bool == 0) goto Label_796; // 0x31a JumpB
	goto Label_821; // 0x31b Jump
	
Label_796:
	var_45_int = 0; // 0x31c PushI
	var_46_bool = var_35_float > var_45_int; // 0x31d GT
	if(var_46_bool == 0) goto Label_810; // 0x31e JumpB
	var_38_int = 0; // 0x31f MovI
	
Label_800:
	var_47_bool = var_38_int < var_35_float; // 0x320 LT
	if(var_47_bool == 0) goto Label_809; // 0x321 JumpB
	var_48_float = 0; // 0x322 PushV
	var_48_float = 1.1; // 0x323 MovF
	func_822(var_38_int, var_39_int, var_48_float); // 0x324 NEW_2
	var_55_int = 1; // 0x326 PushI
	var_38_int = var_38_int + var_55_int; // 0x327 Add2
	goto Label_800; // 0x328 Jump
	
Label_809:
	goto Label_821; // 0x329 Jump
	
Label_810:
	var_39_int = 0; // 0x32a MovI
	
Label_811:
	var_56_int = -var_35_float; // 0x32b Neg
	var_57_bool = var_39_int < var_56_int; // 0x32c LT
	if(var_57_bool == 0) goto Label_821; // 0x32d JumpB
	var_58_float = 0; // 0x32e PushV
	var_58_float = 1.1; // 0x32f MovF
	func_838(var_38_int, var_39_int, var_58_float); // 0x330 NEW_2
	var_66_int = 1; // 0x332 PushI
	var_39_int = var_39_int + var_66_int; // 0x333 Add2
	goto Label_811; // 0x334 Jump
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int, var_34_string, var_35_object)
{
	var_36_string = "button_plus"; // 0x359 PushS
	var_37_bool = var_34_string == var_36_string; // 0x35a Eq
	if(var_37_bool == 0) goto Label_865; // 0x35b JumpB
	var_38_float = 0; // 0x35c PushV
	var_38_float = 1.4; // 0x35d MovF
	func_822(var_34_string, var_35_object, var_38_float); // 0x35e NEW_2
	goto Label_891; // 0x360 Jump
	
Label_891:
	return 0; // 0x37b Return
	
Label_865:
	var_45_string = "button_minus"; // 0x361 PushS
	var_46_bool = var_34_string == var_45_string; // 0x362 Eq
	if(var_46_bool == 0) goto Label_873; // 0x363 JumpB
	var_47_float = 0; // 0x364 PushV
	var_47_float = 1.4; // 0x365 MovF
	func_838(var_34_string, var_35_object, var_47_float); // 0x366 NEW_2
	goto Label_891; // 0x368 Jump
	
Label_873:
	var_55_string = "tavro"; // 0x369 PushS
	var_56_bool = var_34_string == var_55_string; // 0x36a Eq
	if(var_56_bool == 0) goto Label_891; // 0x36b JumpB
	var_57_int = 0; // 0x36c PushI
	var_18_bool = var_33_int == var_57_int; // 0x36d Eq2
	var_58_bool = var_18_bool; // 0x36e PushT
	if(var_58_bool == 0) goto Label_882; // 0x36f JumpB
	var_59_int = 1; // 0x370 PushI
	goto Label_883; // 0x371 Jump
	
Label_883:
	var_60_string = "tavro"; // 0x373 PushS
	SendMessage(var_59_int, var_60_string); // 0x374 Func
	var_61_bool = var_18_bool; // 0x376 PushT
	if(var_61_bool == 0) goto Label_891; // 0x377 JumpB
	func_176(var_33_int, var_34_string, var_35_object); // 0x379 NEW_2
	
Label_882:
	var_99_int = 0; // 0x372 PushI
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_bool = 0; // 0x37d PushV
	var_34_bool = 1; // 0x37e MovB
	var_35_int = 270; // 0x37f PushI
	var_36_bool = var_33_int == var_35_int; // 0x380 Eq
	if(var_36_bool == 0) goto Label_902; // 0x381 JumpB
	var_37_int = 271; // 0x382 PushI
	var_38_bool = var_33_int == var_37_int; // 0x383 Eq
	if(var_38_bool == 0) goto Label_902; // 0x384 JumpB
	var_34_bool = 0; // 0x385 MovB
	
Label_902:
	if(var_34_bool == 0) goto Label_904; // 0x386 JumpB
	var_30_bool = 0; // 0x387 TMovB
	
Label_904:
	var_39_bool = 0; // 0x388 PushV
	var_39_bool = 1; // 0x389 MovB
	var_40_int = 269; // 0x38a PushI
	var_41_bool = var_33_int == var_40_int; // 0x38b Eq
	if(var_41_bool == 0) goto Label_913; // 0x38c JumpB
	var_42_int = 273; // 0x38d PushI
	var_43_bool = var_33_int == var_42_int; // 0x38e Eq
	if(var_43_bool == 0) goto Label_913; // 0x38f JumpB
	var_39_bool = 0; // 0x390 MovB
	
Label_913:
	if(var_39_bool == 0) goto Label_915; // 0x391 JumpB
	var_29_bool = 0; // 0x392 TMovB
	
Label_915:
	var_44_bool = 0; // 0x393 PushV
	var_44_bool = 1; // 0x394 MovB
	var_45_int = 267; // 0x395 PushI
	var_46_bool = var_33_int == var_45_int; // 0x396 Eq
	if(var_46_bool == 0) goto Label_924; // 0x397 JumpB
	var_47_int = 272; // 0x398 PushI
	var_48_bool = var_33_int == var_47_int; // 0x399 Eq
	if(var_48_bool == 0) goto Label_924; // 0x39a JumpB
	var_44_bool = 0; // 0x39b MovB
	
Label_924:
	if(var_44_bool == 0) goto Label_926; // 0x39c JumpB
	var_27_bool = 0; // 0x39d TMovB
	
Label_926:
	var_49_bool = 0; // 0x39e PushV
	var_49_bool = 1; // 0x39f MovB
	var_50_int = 268; // 0x3a0 PushI
	var_51_bool = var_33_int == var_50_int; // 0x3a1 Eq
	if(var_51_bool == 0) goto Label_935; // 0x3a2 JumpB
	var_52_int = 274; // 0x3a3 PushI
	var_53_bool = var_33_int == var_52_int; // 0x3a4 Eq
	if(var_53_bool == 0) goto Label_935; // 0x3a5 JumpB
	var_49_bool = 0; // 0x3a6 MovB
	
Label_935:
	if(var_49_bool == 0) goto Label_937; // 0x3a7 JumpB
	var_28_bool = 0; // 0x3a8 TMovB
	
Label_937:
	var_54_int = 275; // 0x3a9 PushI
	var_55_bool = var_33_int == var_54_int; // 0x3aa Eq
	if(var_55_bool == 0) goto Label_941; // 0x3ab JumpB
	var_31_bool = 0; // 0x3ac TMovB
	
Label_941:
	var_56_int = 276; // 0x3ad PushI
	var_57_bool = var_33_int == var_56_int; // 0x3ae Eq
	if(var_57_bool == 0) goto Label_945; // 0x3af JumpB
	var_32_bool = 0; // 0x3b0 TMovB
	
Label_945:
	return 0; // 0x3b1 Return
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_bool = 0; // 0x3b3 PushV
	var_34_bool = 1; // 0x3b4 MovB
	var_35_int = 270; // 0x3b5 PushI
	var_36_bool = var_33_int == var_35_int; // 0x3b6 Eq
	if(var_36_bool == 0) goto Label_956; // 0x3b7 JumpB
	var_37_int = 271; // 0x3b8 PushI
	var_38_bool = var_33_int == var_37_int; // 0x3b9 Eq
	if(var_38_bool == 0) goto Label_956; // 0x3ba JumpB
	var_34_bool = 0; // 0x3bb MovB
	
Label_956:
	if(var_34_bool == 0) goto Label_958; // 0x3bc JumpB
	var_30_bool = 1; // 0x3bd TMovB
	
Label_958:
	var_39_bool = 0; // 0x3be PushV
	var_39_bool = 1; // 0x3bf MovB
	var_40_int = 269; // 0x3c0 PushI
	var_41_bool = var_33_int == var_40_int; // 0x3c1 Eq
	if(var_41_bool == 0) goto Label_967; // 0x3c2 JumpB
	var_42_int = 273; // 0x3c3 PushI
	var_43_bool = var_33_int == var_42_int; // 0x3c4 Eq
	if(var_43_bool == 0) goto Label_967; // 0x3c5 JumpB
	var_39_bool = 0; // 0x3c6 MovB
	
Label_967:
	if(var_39_bool == 0) goto Label_969; // 0x3c7 JumpB
	var_29_bool = 1; // 0x3c8 TMovB
	
Label_969:
	var_44_bool = 0; // 0x3c9 PushV
	var_44_bool = 1; // 0x3ca MovB
	var_45_int = 267; // 0x3cb PushI
	var_46_bool = var_33_int == var_45_int; // 0x3cc Eq
	if(var_46_bool == 0) goto Label_978; // 0x3cd JumpB
	var_47_int = 272; // 0x3ce PushI
	var_48_bool = var_33_int == var_47_int; // 0x3cf Eq
	if(var_48_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_44_bool = 0; // 0x3d1 MovB
	
Label_978:
	if(var_44_bool == 0) goto Label_980; // 0x3d2 JumpB
	var_27_bool = 1; // 0x3d3 TMovB
	
Label_980:
	var_49_bool = 0; // 0x3d4 PushV
	var_49_bool = 1; // 0x3d5 MovB
	var_50_int = 268; // 0x3d6 PushI
	var_51_bool = var_33_int == var_50_int; // 0x3d7 Eq
	if(var_51_bool == 0) goto Label_989; // 0x3d8 JumpB
	var_52_int = 274; // 0x3d9 PushI
	var_53_bool = var_33_int == var_52_int; // 0x3da Eq
	if(var_53_bool == 0) goto Label_989; // 0x3db JumpB
	var_49_bool = 0; // 0x3dc MovB
	
Label_989:
	if(var_49_bool == 0) goto Label_991; // 0x3dd JumpB
	var_28_bool = 1; // 0x3de TMovB
	
Label_991:
	var_54_int = 275; // 0x3df PushI
	var_55_bool = var_33_int == var_54_int; // 0x3e0 Eq
	if(var_55_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_31_bool = 1; // 0x3e2 TMovB
	
Label_995:
	var_56_int = 276; // 0x3e3 PushI
	var_57_bool = var_33_int == var_56_int; // 0x3e4 Eq
	if(var_57_bool == 0) goto Label_999; // 0x3e5 JumpB
	var_32_bool = 1; // 0x3e6 TMovB
	
Label_999:
	return 0; // 0x3e7 Return
}


task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_int)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0x3e8 PushV
	var_36_int = var_12_float; // 0x3e9 MovT
	var_37_int = var_13_float; // 0x3ea MovT
	ConvertToWorldCoordinates(var_36_int, var_37_int); // 0x3eb TObjFunc
	SetMapParams(var_36_int, var_37_int, var_24_object); // 0x3ed TObjFunc
	DestroyWindow(); // 0x3ef Func
	return 4; // 0x3f1 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool)
{
	var_33_float = 0; var_34_float = 0; var_35_int = 0; var_36_object = Obj(); var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_object = Obj(); var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; // 0x11 PushV
	GetMap(var_29_bool); // 0x12 Func
	var_51_bool = var_22_object == 0; // 0x14 NullEq
	if(var_51_bool == 0) goto Label_26; // 0x15 JumpB
	var_52_string = "Map not found"; // 0x16 PushS
	Trace(var_52_string); // 0x17 Func
	return 18; // 0x19 Return
	
Label_26:
	var_53_int = 16; // 0x1a PushI
	var_54_int = 16; // 0x1b PushI
	var_55_string = "ui/ui_player.png"; // 0x1c PushS
	CreatePolyImage(var_30_bool, var_53_int, var_54_int, var_55_string); // 0x1d Func
	GetSize(var_50_int, var_49_int); // 0x1f TObjFunc
	GetMapParams(var_42_float, var_43_float, var_37_string); // 0x21 TObjFunc
	ConvertToMapCoordinates(var_42_float, var_43_float); // 0x23 TObjFunc
	var_12_float = var_42_float; // 0x25 TMov
	var_13_float = var_43_float; // 0x26 TMov
	var_27_bool = 0; // 0x27 TMovB
	var_28_bool = 0; // 0x28 TMovB
	var_29_bool = 0; // 0x29 TMovB
	var_30_bool = 0; // 0x2a TMovB
	var_31_bool = 0; // 0x2b TMovB
	var_32_bool = 0; // 0x2c TMovB
	var_16_bool = 1; // 0x2d TMovB
	GetWindowSize(var_48_int, var_47_int); // 0x2e Func
	var_56_float = GlobalVars[0]; // 0x30 PushGE
	var_57_float = 2048.0; // 0x31 PushF
	var_56_float = var_3_int / var_50_int; // 0x32 Div2
	GlobalVars[0] = var_56_float; // 0x33 PopGE
	var_58_float = GlobalVars[1]; // 0x34 PushGE
	var_59_float = GlobalVars[0]; // 0x35 PushGE
	var_58_float = var_59_float; // 0x36 Mov
	GlobalVars[1] = var_58_float; // 0x38 PopGE
	var_19_bool = 0; // 0x39 TMovB
	var_60_int = 0; // 0x3a PushI
	var_61_bool = var_14_float < var_60_int; // 0x3b LT
	if(var_61_bool == 0) goto Label_66; // 0x3c JumpB
	var_18_bool = 1; // 0x3d TMovB
	func_176(var_48_int, var_49_int, var_50_int); // 0x3f NEW_2
	var_14_float = 2; // 0x41 TMovI
	
Label_66:
	var_99_float = GlobalVars[0]; // 0x42 PushGE
	var_100_bool = var_14_float < var_99_float; // 0x43 LT
	if(var_100_bool == 0) goto Label_72; // 0x44 JumpB
	var_101_float = GlobalVars[0]; // 0x45 PushGE
	var_14_float = var_101_float; // 0x46 TMov
	
Label_72:
	var_102_string = "map_chertez_force"; // 0x48 PushS
	GetVariable(var_102_string, var_44_int); // 0x49 Func
	var_103_int = var_44_int; // 0x4b Push
	if(var_103_int == 0) goto Label_85; // 0x4c JumpB
	var_18_bool = 1; // 0x4d TMovB
	func_176(var_48_int, var_49_int, var_50_int); // 0x4f NEW_2
	var_104_string = "map_chertez_force"; // 0x51 PushS
	var_105_int = 0; // 0x52 PushI
	SetVariable(var_104_string, var_105_int); // 0x53 Func
	
Label_85:
	var_106_bool = var_18_bool; // 0x55 PushT
	if(var_106_bool == 0) goto Label_89; // 0x56 JumpB
	var_107_int = 1; // 0x57 PushI
	goto Label_90; // 0x58 Jump
	
Label_90:
	var_108_string = "tavro"; // 0x5a PushS
	SendMessage(var_107_int, var_108_string); // 0x5b Func
	var_0_int = 0; // 0x5d TMovI
	var_5_int = -1; // 0x5e TMovI
	var_6_int = -1; // 0x5f TMovI
	var_15_bool = 0; // 0x60 TMovB
	var_23_object = 0; // 0x61 SetNullT
	var_11_int = -1; // 0x62 TMovI
	CreateObjectVector(var_31_bool); // 0x63 Func
	GetMainOutdoorScene(var_45_object); // 0x65 Func
	GetActiveScene(var_30_bool); // 0x67 Func
	var_109_bool = var_45_object != var_21_object; // 0x69 Neq
	if(var_109_bool == 0) goto Label_135; // 0x6a JumpB
	var_17_bool = 1; // 0x6b TMovB
	GetName(var_46_string); // 0x6c TObjFunc
	var_110_cvector = CVector(0,0,0); var_111_string = ""; // 0x6e PushV
	var_112_string = "pt_gmap_"; // 0x6f PushS
	var_111_string = var_112_string + var_46_string; // 0x70 Add2
	func_1067(var_110_cvector, var_111_string); // 0x71 NEW_2
	var_25_cvector = var_110_cvector; // 0x72 TMov
	var_125_float = GetByIndex(var_26_string, 0); // 0x74 PushE
	var_47_int = var_125_float; // 0x75 Mov
	var_126_float = GetByIndex(var_26_string, 2); // 0x77 PushE
	var_48_int = var_126_float; // 0x78 Mov
	ConvertToMapCoordinates(var_47_int, var_48_int); // 0x7a TObjFunc
	var_127_float = GetByIndex(var_26_string, 0); // 0x7c PushE
	var_127_float = var_47_int; // 0x7d Mov
	SetByIndex(var_25_cvector, 0) = var_127_float; // 0x7e PopE
	var_128_float = GetByIndex(var_26_string, 2); // 0x7f PushE
	var_128_float = var_48_int; // 0x80 Mov
	SetByIndex(var_25_cvector, 2) = var_128_float; // 0x81 PopE
	var_129_string = "indoor map: pt_gmap_"; // 0x82 PushS
	var_130_int = var_129_string + var_46_string; // 0x83 Add
	Trace(var_130_int); // 0x84 Func
	goto Label_147; // 0x86 Jump
	
Label_147:
	func_246(); // 0x94 NEW_2
	ShowCursor(); // 0x96 Func
	var_178_string = "default"; // 0x98 PushS
	SetCursor(var_178_string); // 0x99 Func
	var_179_bool = 1; // 0x9b PushB
	SetOwnerDraw(var_179_bool); // 0x9c Func
	var_180_bool = 1; // 0x9e PushB
	SetNeedUpdate(var_180_bool); // 0x9f Func
	var_181_string = "default"; // 0xa1 PushS
	SetBackground(var_181_string); // 0xa2 Func
	var_182_bool = 1; // 0xa4 PushB
	EnableClipping(var_182_bool); // 0xa5 Func
	CaptureKeyboard(); // 0xa7 Func
	var_183_string = "map_open"; // 0xa9 PushS
	PlaySound(var_183_string); // 0xaa Func
	ProcessEvents(); // 0xac Func
	return 18; // 0xae Return
	
Label_135:
	var_184_string = "outdoor map"; // 0x87 PushS
	Trace(var_184_string); // 0x88 Func
	var_17_bool = 0; // 0x8a TMovB
	GetPlayerMapPos(var_49_int, var_50_int); // 0x8b Func
	var_185_float = GetByIndex(var_26_string, 0); // 0x8d PushE
	var_185_float = var_49_int; // 0x8e Mov
	SetByIndex(var_25_cvector, 0) = var_185_float; // 0x8f PopE
	var_186_float = GetByIndex(var_26_string, 2); // 0x90 PushE
	var_186_float = var_50_int; // 0x91 Mov
	SetByIndex(var_25_cvector, 2) = var_186_float; // 0x92 PopE
	
Label_89:
	var_187_int = 0; // 0x59 PushI
}


func_0(var_0_int, var_36_bool)
{
	var_37_bool = 0; // 0x0 PushV
	var_37_bool = 0; // 0x1 MovB
	var_38_int = 2; // 0x2 PushI
	var_39_bool = var_0_int == var_38_int; // 0x3 Eq
	if(var_39_bool == 0) goto Label_12; // 0x4 JumpB
	var_40_int = 0; // 0x5 PushV
	func_1016(var_40_int); // 0x6 NEW_2
	var_46_int = 8; // 0x8 PushI
	var_47_bool = var_40_int >= var_46_int; // 0x9 GE
	if(var_47_bool == 0) goto Label_12; // 0xa JumpB
	var_37_bool = 1; // 0xb MovB
	
Label_12:
	if(var_37_bool == 0) goto Label_15; // 0xc JumpB
	var_36_bool = 1; // 0xd MovB
	return 0; // 0xe Return
	
Label_15:
	var_36_bool = 0; // 0xf MovB
	return 0; // 0x10 Return
}


func_1025(var_139_string, var_140_int)
{
	var_141_string = "Region"; // 0x402 PushS
	var_142_int = var_141_string + var_140_int; // 0x403 Add
	var_143_string = "State"; // 0x404 PushS
	var_139_string = var_142_int + var_143_string; // 0x405 Add2
	return 0; // 0x406 Return
}


func_1031(var_135_bool, var_136_int)
{
	var_137_int = 0; var_138_int = 0; // 0x407 PushV
	var_139_string = ""; var_140_int = 0; // 0x408 PushV
	var_140_int = var_136_int; // 0x409 Mov
	func_1025(var_139_string, var_140_int); // 0x40a NEW_2
	GetVariable(var_139_string, var_138_int); // 0x40c Func
	var_144_int = 3; // 0x40e PushI
	var_145_int = var_138_int & var_144_int; // 0x40f And
	var_146_int = 0; // 0x410 PushI
	var_135_bool = var_145_int == var_146_int; // 0x411 Eq2
	return 2; // 0x412 Return
}


func_1043(var_152_bool, var_153_int)
{
	var_154_int = 0; var_155_int = 0; // 0x413 PushV
	var_156_string = ""; var_157_int = 0; // 0x414 PushV
	var_157_int = var_153_int; // 0x415 Mov
	func_1025(var_156_string, var_157_int); // 0x416 NEW_2
	GetVariable(var_156_string, var_155_int); // 0x418 Func
	var_158_int = 3; // 0x41a PushI
	var_159_int = var_155_int & var_158_int; // 0x41b And
	var_160_int = 1; // 0x41c PushI
	var_152_bool = var_159_int == var_160_int; // 0x41d Eq2
	return 2; // 0x41e Return
}


func_532(var_106_int)
{
	var_107_float = 0; var_108_float = 0; var_109_int = 0; var_110_int = 0; var_111_object = Obj(); var_112_string = ""; var_113_int = 0; var_114_cvector = CVector(0,0,0); var_115_float = 0; var_116_float = 0; var_117_int = 0; var_118_int = 0; var_119_object = Obj(); var_120_string = ""; var_121_int = 0; var_122_cvector = CVector(0,0,0); // 0x214 PushV
	GetMarkCount(var_117_int); // 0x215 ObjFunc
	var_118_int = 0; // 0x217 MovI
	
Label_536:
	var_123_bool = var_118_int < var_117_int; // 0x218 LT
	if(var_123_bool == 0) goto Label_603; // 0x219 JumpB
	GetMark(var_118_int, var_119_object); // 0x21a ObjFunc
	GetLocator(var_120_string); // 0x21c ObjFunc
	GetType(var_121_int); // 0x21e ObjFunc
	var_124_cvector = CVector(0,0,0); var_125_string = ""; // 0x220 PushV
	var_125_string = var_120_string; // 0x221 Mov
	func_1067(var_124_cvector, var_125_string); // 0x222 NEW_2
	var_122_cvector = var_124_cvector; // 0x223 Mov
	var_138_float = GetByIndex(var_122_cvector, 0); // 0x225 PushE
	var_115_float = var_138_float; // 0x226 Mov
	var_139_float = GetByIndex(var_122_cvector, 2); // 0x228 PushE
	var_116_float = var_139_float; // 0x229 Mov
	ConvertToMapCoordinates(var_115_float, var_116_float); // 0x22b ObjFunc
	var_140_int = 0; var_141_int = 0; // 0x22d PushV
	var_141_int = var_115_float; // 0x22e Mov
	func_304(var_120_string, var_121_int, var_122_cvector, var_140_int, var_141_int); // 0x22f NEW_2
	var_115_float = var_140_int; // 0x230 Mov
	var_146_int = 0; var_147_int = 0; // 0x232 PushV
	var_147_int = var_116_float; // 0x233 Mov
	func_311(var_120_string, var_121_int, var_122_cvector, var_146_int, var_147_int); // 0x234 NEW_2
	var_116_float = var_146_int; // 0x235 Mov
	var_152_bool = var_121_int == var_106_int; // 0x237 Eq
	if(var_152_bool == 0) goto Label_599; // 0x238 JumpB
	var_153_int = 0; // 0x239 PushI
	var_154_bool = var_121_int == var_153_int; // 0x23a Eq
	if(var_154_bool == 0) goto Label_579; // 0x23b JumpB
	var_155_string = "quest_mark"; // 0x23c PushS
	var_156_int = 16; // 0x23d PushI
	var_157_int = var_115_float - var_156_int; // 0x23e Sub
	var_158_int = 16; // 0x23f PushI
	var_159_int = var_116_float - var_158_int; // 0x240 Sub
	Blit(var_155_string, var_157_int, var_159_int); // 0x241 Func
	
Label_579:
	var_160_int = 1; // 0x243 PushI
	var_161_bool = var_121_int == var_160_int; // 0x244 Eq
	if(var_161_bool == 0) goto Label_589; // 0x245 JumpB
	var_162_string = "mainquest_mark"; // 0x246 PushS
	var_163_int = 16; // 0x247 PushI
	var_164_int = var_115_float - var_163_int; // 0x248 Sub
	var_165_int = 16; // 0x249 PushI
	var_166_int = var_116_float - var_165_int; // 0x24a Sub
	Blit(var_162_string, var_164_int, var_166_int); // 0x24b Func
	
Label_589:
	var_167_int = 3; // 0x24d PushI
	var_168_bool = var_121_int == var_167_int; // 0x24e Eq
	if(var_168_bool == 0) goto Label_599; // 0x24f JumpB
	var_169_string = "info_mark"; // 0x250 PushS
	var_170_int = 16; // 0x251 PushI
	var_171_int = var_115_float - var_170_int; // 0x252 Sub
	var_172_int = 16; // 0x253 PushI
	var_173_int = var_116_float - var_172_int; // 0x254 Sub
	Blit(var_169_string, var_171_int, var_173_int); // 0x255 Func
	
Label_599:
	var_119_object = 0; // 0x257 SetNull
	var_174_int = 1; // 0x258 PushI
	var_118_int = var_118_int + var_174_int; // 0x259 Add2
	goto Label_536; // 0x25a Jump
	
Label_603:
	return 16; // 0x25b Return
}


func_1055(var_165_bool, var_166_int)
{
	var_167_int = 0; var_168_int = 0; // 0x41f PushV
	var_169_string = ""; var_170_int = 0; // 0x420 PushV
	var_170_int = var_166_int; // 0x421 Mov
	func_1025(var_169_string, var_170_int); // 0x422 NEW_2
	GetVariable(var_169_string, var_168_int); // 0x424 Func
	var_171_int = 3; // 0x426 PushI
	var_172_int = var_168_int & var_171_int; // 0x427 And
	var_173_int = 2; // 0x428 PushI
	var_165_bool = var_172_int == var_173_int; // 0x429 Eq2
	return 2; // 0x42a Return
}


func_290(var_3_int, var_12_float, var_14_float, var_175_int, var_176_int)
{
	var_177_int = 2; // 0x123 PushI
	var_178_float = var_3_int / var_177_int; // 0x124 Div
	var_179_int = var_176_int - var_178_float; // 0x125 Sub
	var_180_float = var_179_int / var_14_float; // 0x126 Div
	var_175_int = var_12_float + var_180_float; // 0x127 Add2
	return 0; // 0x128 Return
}


func_674(var_19_bool)
{
	var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_float = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_float = 0; // 0x2a2 PushV
	var_39_int = 0; // 0x2a3 MovI
	var_40_int = 0; // 0x2a4 MovI
	ScreenToClient(var_39_int, var_40_int); // 0x2a5 Func
	GetScreenSize(var_41_int, var_42_int); // 0x2a7 Func
	var_44_float = 768.0; // 0x2a9 PushF
	var_43_float = var_42_int / var_42_int; // 0x2aa Div2
	var_45_int = 1024; // 0x2ab PushI
	var_46_float = var_43_float * var_45_int; // 0x2ac Mult
	var_47_int = 1; // 0x2ad PushI
	StretchBlit(var_19_bool, var_39_int, var_40_int, var_41_int, var_46_float, var_47_int); // 0x2ae Func
	return 10; // 0x2b0 Return
}


func_297(var_4_int, var_13_float, var_14_float, var_181_int, var_182_int)
{
	var_183_int = 2; // 0x12a PushI
	var_184_float = var_4_int / var_183_int; // 0x12b Div
	var_185_int = var_182_int - var_184_float; // 0x12c Sub
	var_186_float = var_185_int / var_14_float; // 0x12d Div
	var_181_int = var_13_float + var_186_float; // 0x12e Add2
	return 0; // 0x12f Return
}


func_1067(var_110_cvector, var_111_string)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_object = Obj(); var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_object = Obj(); var_121_object = Obj(); var_122_bool = 0; // 0x42b PushV
	GetMainOutdoorScene(var_120_object); // 0x42c Func
	var_123_bool = var_120_object == 0; // 0x42e NullEq
	if(var_123_bool == 0) goto Label_1078; // 0x42f JumpB
	var_124_string = "Can't find main outdoor scene"; // 0x430 PushS
	Trace(var_124_string); // 0x431 Func
	var_118_cvector = CVector(0.0, 0.0, 0.0); // 0x433 MovV
	var_110_cvector = var_118_cvector; // 0x434 Mov
	return 10; // 0x435 Return
	
Label_1078:
	GetLocator(var_111_string, var_122_bool, var_118_cvector, var_119_cvector); // 0x436 ObjFunc
	var_110_cvector = var_118_cvector; // 0x438 Mov
	return 10; // 0x439 Return
}


func_176(var_19_bool, var_26_string, var_27_bool)
{
	var_62_int = 0; var_63_int = 0; // 0xb0 PushV
	var_64_bool = var_19_bool; // 0xb1 PushT
	if(var_64_bool == 0) goto Label_180; // 0xb2 JumpB
	return 2; // 0xb3 Return
	
Label_180:
	var_65_string = "map_chertez_state"; // 0xb4 PushS
	GetVariable(var_65_string, var_63_int); // 0xb5 Func
	var_66_int = 0; // 0xb7 PushV
	func_1010(var_66_int); // 0xb8 NEW_2
	var_70_int = 0; // 0xba PushI
	var_71_bool = var_66_int == var_70_int; // 0xbb Eq
	if(var_71_bool == 0) goto Label_205; // 0xbc JumpB
	var_26_string = "ui\ui_chertez_danko_bg.tex"; // 0xbd TMovS
	var_72_bool = 0; // 0xbe PushV
	var_72_bool = 0; // 0xbf MovB
	var_73_int = 1; // 0xc0 PushI
	var_74_bool = var_63_int >= var_73_int; // 0xc1 GE
	if(var_74_bool == 0) goto Label_199; // 0xc2 JumpB
	var_75_int = 6; // 0xc3 PushI
	var_76_bool = var_63_int <= var_75_int; // 0xc4 LE
	if(var_76_bool == 0) goto Label_199; // 0xc5 JumpB
	var_72_bool = 1; // 0xc6 MovB
	
Label_199:
	if(var_72_bool == 0) goto Label_204; // 0xc7 JumpB
	var_77_string = "ui\ui_chertez_danko_"; // 0xc8 PushS
	var_78_int = var_77_string + var_63_int; // 0xc9 Add
	var_79_string = ".tex"; // 0xca PushS
	var_26_string = var_78_int + var_79_string; // 0xcb Add2
	
Label_204:
	goto Label_242; // 0xcc Jump
	
Label_242:
	LoadImage(var_27_bool); // 0xf2 Func
	var_19_bool = 1; // 0xf4 TMovB
	return 2; // 0xf5 Return
	
Label_205:
	var_80_int = 0; // 0xcd PushV
	func_1010(var_80_int); // 0xce NEW_2
	var_81_int = 1; // 0xd0 PushI
	var_82_bool = var_80_int == var_81_int; // 0xd1 Eq
	if(var_82_bool == 0) goto Label_227; // 0xd2 JumpB
	var_26_string = "ui\ui_chertez_burah_bg.tex"; // 0xd3 TMovS
	var_83_bool = 0; // 0xd4 PushV
	var_83_bool = 0; // 0xd5 MovB
	var_84_int = 1; // 0xd6 PushI
	var_85_bool = var_63_int >= var_84_int; // 0xd7 GE
	if(var_85_bool == 0) goto Label_221; // 0xd8 JumpB
	var_86_int = 6; // 0xd9 PushI
	var_87_bool = var_63_int <= var_86_int; // 0xda LE
	if(var_87_bool == 0) goto Label_221; // 0xdb JumpB
	var_83_bool = 1; // 0xdc MovB
	
Label_221:
	if(var_83_bool == 0) goto Label_226; // 0xdd JumpB
	var_88_string = "ui\ui_chertez_burah_"; // 0xde PushS
	var_89_int = var_88_string + var_63_int; // 0xdf Add
	var_90_string = ".tex"; // 0xe0 PushS
	var_26_string = var_89_int + var_90_string; // 0xe1 Add2
	
Label_226:
	goto Label_242; // 0xe2 Jump
	
Label_227:
	var_26_string = "ui\ui_chertez_klara_bg.tex"; // 0xe3 TMovS
	var_91_bool = 0; // 0xe4 PushV
	var_91_bool = 0; // 0xe5 MovB
	var_92_int = 1; // 0xe6 PushI
	var_93_bool = var_63_int >= var_92_int; // 0xe7 GE
	if(var_93_bool == 0) goto Label_237; // 0xe8 JumpB
	var_94_int = 6; // 0xe9 PushI
	var_95_bool = var_63_int <= var_94_int; // 0xea LE
	if(var_95_bool == 0) goto Label_237; // 0xeb JumpB
	var_91_bool = 1; // 0xec MovB
	
Label_237:
	if(var_91_bool == 0) goto Label_242; // 0xed JumpB
	var_96_string = "ui\ui_chertez_klara_"; // 0xee PushS
	var_97_int = var_96_string + var_63_int; // 0xef Add
	var_98_string = ".tex"; // 0xf0 PushS
	var_26_string = var_97_int + var_98_string; // 0xf1 Add2
}


func_304(var_3_int, var_12_float, var_14_float, var_140_int, var_141_int)
{
	var_142_int = var_141_int - var_12_float; // 0x131 Sub
	var_143_float = var_142_int * var_14_float; // 0x132 Mult
	var_144_int = 2; // 0x133 PushI
	var_145_float = var_3_int / var_144_int; // 0x134 Div
	var_140_int = var_143_float + var_145_float; // 0x135 Add2
	return 0; // 0x136 Return
}


func_822(var_0_int, var_14_float, var_38_float)
{
	var_39_bool = var_18_bool; // 0x337 PushT
	if(var_39_bool == 0) goto Label_826; // 0x338 JumpB
	return 0; // 0x339 Return
	
Label_826:
	var_14_float = var_14_float * var_38_float; // 0x33a Mult2
	var_40_float = 2.0; // 0x33b PushF
	var_41_bool = var_14_float > var_40_float; // 0x33c GT
	if(var_41_bool == 0) goto Label_831; // 0x33d JumpB
	var_14_float = 2.0; // 0x33e TMovF
	
Label_831:
	var_42_int = -1; // 0x33f PushI
	var_0_int = var_0_int + var_42_int; // 0x340 Add2
	var_43_int = 0; // 0x341 PushI
	var_44_bool = var_0_int < var_43_int; // 0x342 LT
	if(var_44_bool == 0) goto Label_837; // 0x343 JumpB
	var_0_int = 0; // 0x344 TMovI
	
Label_837:
	return 0; // 0x345 Return
}


func_311(var_4_int, var_13_float, var_14_float, var_146_int, var_147_int)
{
	var_148_int = var_147_int - var_13_float; // 0x138 Sub
	var_149_float = var_148_int * var_14_float; // 0x139 Mult
	var_150_int = 2; // 0x13a PushI
	var_151_float = var_4_int / var_150_int; // 0x13b Div
	var_146_int = var_149_float + var_151_float; // 0x13c Add2
	return 0; // 0x13d Return
}


func_699(var_17_bool, var_30_bool)
{
	var_179_int = 0; var_180_int = 0; var_181_float = 0; var_182_int = 0; var_183_int = 0; var_184_float = 0; // 0x2bb PushV
	var_185_bool = var_17_bool == 0; // 0x2bc Not
	if(var_185_bool == 0) goto Label_723; // 0x2bd JumpB
	GetPlayerMapAngle(var_184_float); // 0x2be Func
	var_186_int = 0; var_187_int = 0; // 0x2c0 PushV
	var_188_float = GetByIndex(var_30_bool, 0); // 0x2c1 PushE
	var_187_int = var_188_float; // 0x2c2 Mov
	func_304(var_182_int, var_183_int, var_184_float, var_186_int, var_187_int); // 0x2c4 NEW_2
	var_182_int = var_186_int; // 0x2c5 Mov
	var_189_int = 0; var_190_int = 0; // 0x2c7 PushV
	var_191_float = GetByIndex(var_30_bool, 2); // 0x2c8 PushE
	var_190_int = var_191_float; // 0x2c9 Mov
	func_311(var_182_int, var_183_int, var_184_float, var_189_int, var_190_int); // 0x2cb NEW_2
	var_183_int = var_189_int; // 0x2cc Mov
	ClientToScreen(var_182_int, var_183_int); // 0x2ce Func
	Blit(var_182_int, var_183_int, var_184_float); // 0x2d0 TObjFunc
	goto Label_741; // 0x2d2 Jump
	
Label_741:
	return 6; // 0x2e5 Return
	
Label_723:
	var_192_int = 0; var_193_int = 0; // 0x2d3 PushV
	var_194_float = GetByIndex(var_30_bool, 0); // 0x2d4 PushE
	var_193_int = var_194_float; // 0x2d5 Mov
	func_304(var_182_int, var_183_int, var_184_float, var_192_int, var_193_int); // 0x2d7 NEW_2
	var_182_int = var_192_int; // 0x2d8 Mov
	var_195_int = 0; var_196_int = 0; // 0x2da PushV
	var_197_float = GetByIndex(var_30_bool, 2); // 0x2db PushE
	var_196_int = var_197_float; // 0x2dc Mov
	func_311(var_182_int, var_183_int, var_184_float, var_195_int, var_196_int); // 0x2de NEW_2
	var_183_int = var_195_int; // 0x2df Mov
	ClientToScreen(var_182_int, var_183_int); // 0x2e1 Func
	Blit(var_182_int, var_183_int); // 0x2e3 TObjFunc
}


func_1084(var_91_bool)
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; // 0x43c PushV
	var_96_int = 0; // 0x43d PushV
	func_1016(var_96_int); // 0x43e NEW_2
	var_94_int = var_96_int; // 0x43f Mov
	var_97_string = "RMap"; // 0x441 PushS
	var_98_int = var_97_string + var_94_int; // 0x442 Add
	GetVariable(var_98_int, var_95_int); // 0x443 Func
	var_99_int = 0; // 0x445 PushI
	var_91_bool = var_95_int != var_99_int; // 0x446 Neq2
	return 4; // 0x447 Return
}


func_838(var_0_int, var_14_float, var_23_object)
{
	var_48_bool = var_18_bool; // 0x347 PushT
	if(var_48_bool == 0) goto Label_842; // 0x348 JumpB
	return 0; // 0x349 Return
	
Label_842:
	var_14_float = var_14_float / var_23_object; // 0x34a Div2
	var_49_float = GlobalVars[0]; // 0x34b PushGE
	var_50_bool = var_14_float < var_49_float; // 0x34c LT
	if(var_50_bool == 0) goto Label_855; // 0x34d JumpB
	var_51_float = GlobalVars[0]; // 0x34e PushGE
	var_14_float = var_51_float; // 0x34f TMov
	var_52_int = 1; // 0x351 PushI
	var_0_int = var_0_int + var_52_int; // 0x352 Add2
	var_53_int = 2; // 0x353 PushI
	var_54_bool = var_0_int > var_53_int; // 0x354 GT
	if(var_54_bool == 0) goto Label_855; // 0x355 JumpB
	var_0_int = 2; // 0x356 TMovI
	
Label_855:
	return 0; // 0x357 Return
}


func_604(var_3_int, var_4_int, var_12_float, var_13_float, var_14_float, var_22_object)
{
	var_48_float = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_float = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0x25c PushV
	var_62_bool = 0; // 0x25d PushV
	func_0(var_61_int, var_62_bool); // 0x25e NEW_2
	if(var_62_bool == 0) goto Label_610; // 0x260 JumpB
	return 14; // 0x261 Return
	
Label_610:
	var_55_float = var_14_float; // 0x262 MovT
	var_74_float = GlobalVars[0]; // 0x263 PushGE
	var_75_bool = var_55_float < var_74_float; // 0x264 LT
	if(var_75_bool == 0) goto Label_617; // 0x265 JumpB
	var_76_float = GlobalVars[0]; // 0x266 PushGE
	var_55_float = var_76_float; // 0x267 Mov
	
Label_617:
	var_77_float = var_3_int / var_55_float; // 0x269 Div
	var_78_int = 2; // 0x26a PushI
	var_79_float = var_77_float / var_78_int; // 0x26b Div
	var_56_int = var_12_float - var_79_float; // 0x26c Sub2
	var_80_float = var_3_int / var_55_float; // 0x26d Div
	var_81_int = 2; // 0x26e PushI
	var_82_float = var_80_float / var_81_int; // 0x26f Div
	var_57_int = var_12_float + var_82_float; // 0x270 Add2
	var_83_float = var_4_int / var_55_float; // 0x271 Div
	var_84_int = 2; // 0x272 PushI
	var_85_float = var_83_float / var_84_int; // 0x273 Div
	var_58_int = var_13_float - var_85_float; // 0x274 Sub2
	var_86_float = var_4_int / var_55_float; // 0x275 Div
	var_87_int = 2; // 0x276 PushI
	var_88_float = var_86_float / var_87_int; // 0x277 Div
	var_59_int = var_13_float + var_88_float; // 0x278 Add2
	var_60_int = 0; // 0x279 MovI
	var_61_int = 0; // 0x27a MovI
	ClientToScreen(var_60_int, var_61_int); // 0x27b Func
	var_89_int = var_3_int + var_60_int; // 0x27d Add
	var_90_int = var_4_int + var_61_int; // 0x27e Add
	RenderMap(var_60_int, var_61_int, var_89_int, var_90_int, var_56_int, var_58_int, var_57_int, var_59_int); // 0x27f Func
	var_91_bool = 0; // 0x281 PushV
	func_1084(var_91_bool); // 0x282 NEW_2
	if(var_91_bool == 0) goto Label_649; // 0x284 JumpB
	var_100_int = var_3_int + var_60_int; // 0x285 Add
	var_101_int = var_4_int + var_61_int; // 0x286 Add
	RenderRegions(var_60_int, var_61_int, var_100_int, var_101_int, var_56_int, var_58_int, var_57_int, var_59_int); // 0x287 Func
	
Label_649:
	var_102_object = var_23_object; // 0x289 PushT
	if(var_102_object == 0) goto Label_655; // 0x28a JumpB
	var_103_int = var_3_int + var_60_int; // 0x28b Add
	var_104_int = var_4_int + var_61_int; // 0x28c Add
	Render(var_60_int, var_61_int, var_103_int, var_104_int, var_56_int, var_58_int, var_57_int, var_59_int); // 0x28d TObjFunc
	
Label_655:
	var_105_object = Obj(); var_106_int = 0; // 0x28f PushV
	var_105_object = var_22_object; // 0x290 MovT
	var_106_int = 3; // 0x291 MovI
	func_532(var_106_int); // 0x292 NEW_2
	var_175_object = Obj(); var_176_int = 0; // 0x294 PushV
	var_175_object = var_22_object; // 0x295 MovT
	var_176_int = 0; // 0x296 MovI
	func_532(var_176_int); // 0x297 NEW_2
	var_177_object = Obj(); var_178_int = 0; // 0x299 PushV
	var_177_object = var_22_object; // 0x29a MovT
	var_178_int = 1; // 0x29b MovI
	func_532(var_178_int); // 0x29c NEW_2
	func_699(var_60_int, var_61_int); // 0x29f NEW_2
	return 14; // 0x2a1 Return
}


func_1010(var_66_int)
{
	var_67_int = 0; var_68_int = 0; // 0x3f2 PushV
	var_69_string = "branch"; // 0x3f3 PushS
	GetVariable(var_69_string, var_68_int); // 0x3f4 Func
	var_66_int = var_68_int; // 0x3f6 Mov
	return 2; // 0x3f7 Return
}


func_246()
{
	var_131_int = 0; var_132_int = 0; // 0xf6 PushV
	var_132_int = 0; // 0xf7 MovI
	
Label_248:
	var_133_int = 16; // 0xf8 PushI
	var_134_bool = var_132_int < var_133_int; // 0xf9 LT
	if(var_134_bool == 0) goto Label_289; // 0xfa JumpB
	var_135_bool = 0; var_136_int = 0; // 0xfb PushV
	var_136_int = var_132_int; // 0xfc Mov
	func_1031(var_135_bool, var_136_int); // 0xfd NEW_2
	if(var_135_bool == 0) goto Label_263; // 0xff JumpB
	var_147_float = 0.5; // 0x100 PushF
	var_148_float = 0.5; // 0x101 PushF
	var_149_float = 0.5; // 0x102 PushF
	var_150_float = 0.0; // 0x103 PushF
	SetRegionColor(var_132_int, var_147_float, var_148_float, var_149_float, var_150_float); // 0x104 Func
	goto Label_286; // 0x106 Jump
	
Label_286:
	var_151_int = 1; // 0x11e PushI
	var_132_int = var_132_int + var_151_int; // 0x11f Add2
	goto Label_248; // 0x120 Jump
	
Label_263:
	var_152_bool = 0; var_153_int = 0; // 0x107 PushV
	var_153_int = var_132_int; // 0x108 Mov
	func_1043(var_152_bool, var_153_int); // 0x109 NEW_2
	if(var_152_bool == 0) goto Label_275; // 0x10b JumpB
	var_161_float = 0.5; // 0x10c PushF
	var_162_float = 0.0; // 0x10d PushF
	var_163_float = 0.0; // 0x10e PushF
	var_164_float = 0.5; // 0x10f PushF
	SetRegionColor(var_132_int, var_161_float, var_162_float, var_163_float, var_164_float); // 0x110 Func
	goto Label_286; // 0x112 Jump
	
Label_275:
	var_165_bool = 0; var_166_int = 0; // 0x113 PushV
	var_166_int = var_132_int; // 0x114 Mov
	func_1055(var_165_bool, var_166_int); // 0x115 NEW_2
	if(var_165_bool == 0) goto Label_286; // 0x117 JumpB
	var_174_float = 0.0; // 0x118 PushF
	var_175_float = 0.0; // 0x119 PushF
	var_176_float = 0.0; // 0x11a PushF
	var_177_float = 0.5; // 0x11b PushF
	SetRegionColor(var_132_int, var_174_float, var_175_float, var_176_float, var_177_float); // 0x11c Func
	
Label_289:
	return 2; // 0x121 Return
}


func_1016(var_40_int)
{
	var_41_float = 0; var_42_float = 0; // 0x3f8 PushV
	GetGameTime(var_42_float); // 0x3f9 Func
	var_43_int = 1; // 0x3fb PushI
	var_44_int = 0; // 0x3fc PushV
	var_45_int = 24; // 0x3fd PushI
	var_44_int = var_42_float / var_42_float; // 0x3fe Div2
	var_40_int = var_43_int + var_44_int; // 0x3ff Add2
	return 2; // 0x400 Return
}


