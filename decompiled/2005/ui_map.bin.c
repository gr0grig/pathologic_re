task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_float)
{
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_object = Obj(); var_40_string = ""; var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0; var_46_string = ""; var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_object = Obj(); var_59_string = ""; var_60_cvector = CVector(0,0,0); var_61_int = 0; var_62_int = 0; var_63_float = 0; var_64_float = 0; var_65_string = ""; // 0x132 PushV
	var_66_float = var_3_int / var_14_float; // 0x133 Div
	var_67_int = 2; // 0x134 PushI
	var_68_float = var_66_float / var_67_int; // 0x135 Div
	var_47_float = var_12_float - var_68_float; // 0x136 Sub2
	var_69_float = var_3_int / var_14_float; // 0x137 Div
	var_70_int = 2; // 0x138 PushI
	var_71_float = var_69_float / var_70_int; // 0x139 Div
	var_48_float = var_12_float + var_71_float; // 0x13a Add2
	var_72_float = var_4_int / var_14_float; // 0x13b Div
	var_73_int = 2; // 0x13c PushI
	var_74_float = var_72_float / var_73_int; // 0x13d Div
	var_49_float = var_13_float - var_74_float; // 0x13e Sub2
	var_75_float = var_4_int / var_14_float; // 0x13f Div
	var_76_int = 2; // 0x140 PushI
	var_77_float = var_75_float / var_76_int; // 0x141 Div
	var_50_float = var_13_float + var_77_float; // 0x142 Add2
	var_51_float = 0; // 0x143 MovI
	var_52_float = 0; // 0x144 MovI
	var_78_int = 0; // 0x145 PushI
	var_79_bool = var_47_float < var_78_int; // 0x146 LT
	if(var_79_bool == 0) goto Label_330; // 0x147 JumpB
	var_51_float = -var_47_float; // 0x148 Neg2
	goto Label_335; // 0x149 Jump
	
Label_335:
	var_80_int = 0; // 0x14f PushI
	var_81_bool = var_49_float < var_80_int; // 0x150 LT
	if(var_81_bool == 0) goto Label_340; // 0x151 JumpB
	var_52_float = -var_49_float; // 0x152 Neg2
	goto Label_345; // 0x153 Jump
	
Label_345:
	var_12_float = var_12_float + var_51_float; // 0x159 Add2
	var_13_float = var_13_float + var_52_float; // 0x15a Add2
	var_82_bool = 0; // 0x15b PushV
	var_82_bool = 0; // 0x15c MovB
	var_83_bool = 0; // 0x15d PushV
	func_0(var_82_bool, var_83_bool); // 0x15e NEW_2
	var_95_bool = var_83_bool == 0; // 0x160 Not
	if(var_95_bool == 0) goto Label_357; // 0x161 JumpB
	var_96_bool = var_18_bool == 0; // 0x162 Not
	if(var_96_bool == 0) goto Label_357; // 0x163 JumpB
	var_82_bool = 1; // 0x164 MovB
	
Label_357:
	if(var_82_bool == 0) goto Label_457; // 0x165 JumpB
	clear(); // 0x166 TObjFunc
	var_56_int = 0; // 0x168 MovI
	GetMarkCount(var_55_int); // 0x169 TObjFunc
	var_57_int = 0; // 0x16b MovI
	
Label_364:
	var_97_bool = var_57_int < var_55_int; // 0x16c LT
	if(var_97_bool == 0) goto Label_411; // 0x16d JumpB
	GetMark(var_57_int, var_58_object); // 0x16e TObjFunc
	GetLocator(var_59_string); // 0x170 ObjFunc
	var_98_cvector = CVector(0,0,0); var_99_string = ""; // 0x172 PushV
	var_99_string = var_59_string; // 0x173 Mov
	func_899(var_98_cvector, var_99_string); // 0x174 NEW_2
	var_60_cvector = var_98_cvector; // 0x175 Mov
	var_112_float = GetByIndex(var_60_cvector, 0); // 0x177 PushE
	var_53_float = var_112_float; // 0x178 Mov
	var_113_float = GetByIndex(var_60_cvector, 2); // 0x17a PushE
	var_54_float = var_113_float; // 0x17b Mov
	ConvertToMapCoordinates(var_53_float, var_54_float); // 0x17d TObjFunc
	var_114_int = 0; var_115_float = 0; // 0x17f PushV
	var_115_float = var_53_float; // 0x180 Mov
	func_292(var_63_float, var_64_float, var_65_string, var_114_int, var_115_float); // 0x181 NEW_2
	var_53_float = var_114_int; // 0x182 Mov
	var_120_int = 0; var_121_float = 0; // 0x184 PushV
	var_121_float = var_54_float; // 0x185 Mov
	func_299(var_63_float, var_64_float, var_65_string, var_120_int, var_121_float); // 0x186 NEW_2
	var_54_float = var_120_int; // 0x187 Mov
	var_126_int = var_53_float - var_5_int; // 0x189 Sub
	var_127_int = var_53_float - var_5_int; // 0x18a Sub
	var_128_float = var_126_int * var_127_int; // 0x18b Mult
	var_129_int = var_54_float - var_6_int; // 0x18c Sub
	var_130_int = var_54_float - var_6_int; // 0x18d Sub
	var_131_float = var_129_int * var_130_int; // 0x18e Mult
	var_132_int = var_128_float + var_131_float; // 0x18f Add
	var_133_int = 900; // 0x190 PushI
	var_134_bool = var_132_int < var_133_int; // 0x191 LT
	if(var_134_bool == 0) goto Label_407; // 0x192 JumpB
	add(var_58_object); // 0x193 TObjFunc
	var_135_int = 1; // 0x195 PushI
	var_56_int = var_56_int + var_135_int; // 0x196 Add2
	
Label_407:
	var_58_object = 0; // 0x197 SetNull
	var_136_int = 1; // 0x198 PushI
	var_57_int = var_57_int + var_136_int; // 0x199 Add2
	goto Label_364; // 0x19a Jump
	
Label_411:
	var_137_bool = var_56_int == 0; // 0x19b Not
	if(var_137_bool == 0) goto Label_450; // 0x19c JumpB
	var_138_float = 0; var_139_int = 0; // 0x19d PushV
	var_139_int = var_5_int; // 0x19e MovT
	func_278(var_63_float, var_64_float, var_65_string, var_138_float, var_139_int); // 0x19f NEW_2
	var_63_float = var_138_float; // 0x1a0 Mov
	var_144_float = 0; var_145_int = 0; // 0x1a2 PushV
	var_145_int = var_6_int; // 0x1a3 MovT
	func_285(var_63_float, var_64_float, var_65_string, var_144_float, var_145_int); // 0x1a4 NEW_2
	var_64_float = var_144_float; // 0x1a5 Mov
	GetObjectFromPoint(var_61_int, var_63_float, var_64_float); // 0x1a7 TObjFunc
	var_150_int = 0; // 0x1a9 PushI
	var_151_bool = var_61_int >= var_150_int; // 0x1aa GE
	if(var_151_bool == 0) goto Label_443; // 0x1ab JumpB
	GetObjectID(var_62_int, var_61_int); // 0x1ac TObjFunc
	var_152_int = 100000; // 0x1ae PushI
	var_153_int = var_62_int + var_152_int; // 0x1af Add
	GetStringByID(var_65_string, var_153_int); // 0x1b0 Func
	var_154_int = 5; // 0x1b2 PushI
	SetTooltip(var_154_int, var_65_string); // 0x1b3 Func
	var_155_bool = var_11_int != var_61_int; // 0x1b5 Neq
	if(var_155_bool == 0) goto Label_442; // 0x1b6 JumpB
	CreateObjectHighlight(var_43_int, var_61_int); // 0x1b7 TObjFunc
	var_11_int = var_61_int; // 0x1b9 TMov
	
Label_442:
	goto Label_449; // 0x1ba Jump
	
Label_449:
	goto Label_456; // 0x1c1 Jump
	
Label_456:
	goto Label_463; // 0x1c8 Jump
	
Label_463:
	return 38; // 0x1cf Return
	
Label_443:
	var_156_int = -1; // 0x1bb PushI
	var_157_string = ""; // 0x1bc PushS
	SetTooltip(var_156_int, var_157_string); // 0x1bd Func
	var_23_object = 0; // 0x1bf SetNullT
	var_11_int = -1; // 0x1c0 TMovI
	
Label_450:
	var_158_int = 2; // 0x1c2 PushI
	var_159_string = ""; // 0x1c3 PushS
	SetTooltip(var_158_int, var_159_string, var_48_float); // 0x1c4 Func
	var_23_object = 0; // 0x1c6 SetNullT
	var_11_int = -1; // 0x1c7 TMovI
	
Label_457:
	var_160_int = -1; // 0x1c9 PushI
	var_161_string = ""; // 0x1ca PushS
	SetTooltip(var_160_int, var_161_string); // 0x1cb Func
	var_11_int = -1; // 0x1cd TMovI
	var_23_object = 0; // 0x1ce SetNullT
	
Label_340:
	var_162_int = 2048; // 0x154 PushI
	var_163_bool = var_50_float > var_162_int; // 0x155 GT
	if(var_163_bool == 0) goto Label_345; // 0x156 JumpB
	var_164_int = 2048; // 0x157 PushI
	var_52_float = var_164_int - var_50_float; // 0x158 Sub2
	
Label_330:
	var_165_int = 2048; // 0x14a PushI
	var_166_bool = var_48_float > var_165_int; // 0x14b GT
	if(var_166_bool == 0) goto Label_335; // 0x14c JumpB
	var_167_int = 2048; // 0x14d PushI
	var_51_float = var_167_int - var_48_float; // 0x14e Sub2
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string)
{
	var_27_bool = var_18_bool; // 0x26d PushT
	if(var_27_bool == 0) goto Label_627; // 0x26e JumpB
	func_606(var_26_string); // 0x270 NEW_2
	goto Label_630; // 0x272 Jump
	
Label_630:
	return 0; // 0x276 Return
	
Label_627:
	func_536(var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string); // 0x274 NEW_2
}


task_0_event_11(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int, var_28_int)
{
	var_29_bool = 0; // 0x2a3 PushV
	var_29_bool = 1; // 0x2a4 MovB
	var_30_bool = 0; // 0x2a5 PushV
	func_0(var_29_bool, var_30_bool); // 0x2a6 NEW_2
	if(var_30_bool == 0) goto Label_684; // 0x2a8 JumpB
	var_42_bool = var_18_bool; // 0x2a9 PushT
	if(var_42_bool == 0) goto Label_684; // 0x2aa JumpB
	var_29_bool = 0; // 0x2ab MovB
	
Label_684:
	if(var_29_bool == 0) goto Label_686; // 0x2ac JumpB
	return 0; // 0x2ad Return
	
Label_686:
	var_15_bool = 1; // 0x2ae TMovB
	var_7_int = var_27_int; // 0x2af TMov
	var_8_int = var_28_int; // 0x2b0 TMov
	var_9_float = var_12_float; // 0x2b1 TMovT
	var_10_float = var_13_float; // 0x2b2 TMovT
	var_43_string = "drag"; // 0x2b3 PushS
	SetCursor(var_43_string); // 0x2b4 Func
	return 0; // 0x2b6 Return
}


task_0_event_12(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int, var_28_int, var_29_bool)
{
	var_15_bool = 0; // 0x2b8 TMovB
	var_30_string = "default"; // 0x2b9 PushS
	SetCursor(var_30_string); // 0x2ba Func
	return 0; // 0x2bc Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int, var_28_int)
{
	var_5_int = var_27_int; // 0x2be TMov
	var_6_int = var_28_int; // 0x2bf TMov
	var_16_bool = 0; // 0x2c0 TMovB
	var_29_bool = var_15_bool; // 0x2c1 PushT
	if(var_29_bool == 0) goto Label_713; // 0x2c2 JumpB
	var_30_int = var_7_int - var_27_int; // 0x2c3 Sub
	var_31_float = var_30_int / var_14_float; // 0x2c4 Div
	var_12_float = var_9_float + var_31_float; // 0x2c5 Add2
	var_32_int = var_8_int - var_28_int; // 0x2c6 Sub
	var_33_float = var_32_int / var_14_float; // 0x2c7 Div
	var_13_float = var_10_float + var_33_float; // 0x2c8 Add2
	
Label_713:
	return 0; // 0x2c9 Return
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string)
{
	var_16_bool = 1; // 0x2ca TMovB
	return 0; // 0x2cb Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int, var_28_int, var_29_float)
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; // 0x2cc PushV
	var_34_bool = var_18_bool; // 0x2cd PushT
	if(var_34_bool == 0) goto Label_720; // 0x2ce JumpB
	return 4; // 0x2cf Return
	
Label_720:
	var_35_int = 0; // 0x2d0 PushI
	var_36_bool = var_29_float > var_35_int; // 0x2d1 GT
	if(var_36_bool == 0) goto Label_734; // 0x2d2 JumpB
	var_32_int = 0; // 0x2d3 MovI
	
Label_724:
	var_37_bool = var_32_int < var_29_float; // 0x2d4 LT
	if(var_37_bool == 0) goto Label_733; // 0x2d5 JumpB
	var_38_float = 0; // 0x2d6 PushV
	var_38_float = 1.1; // 0x2d7 MovF
	func_746(var_32_int, var_33_int, var_38_float); // 0x2d8 NEW_2
	var_45_int = 1; // 0x2da PushI
	var_32_int = var_32_int + var_45_int; // 0x2db Add2
	goto Label_724; // 0x2dc Jump
	
Label_733:
	goto Label_745; // 0x2dd Jump
	
Label_745:
	return 4; // 0x2e9 Return
	
Label_734:
	var_33_int = 0; // 0x2de MovI
	
Label_735:
	var_46_int = -var_29_float; // 0x2df Neg
	var_47_bool = var_33_int < var_46_int; // 0x2e0 LT
	if(var_47_bool == 0) goto Label_745; // 0x2e1 JumpB
	var_48_float = 0; // 0x2e2 PushV
	var_48_float = 1.1; // 0x2e3 MovF
	func_762(var_32_int, var_33_int, var_48_float); // 0x2e4 NEW_2
	var_56_int = 1; // 0x2e6 PushI
	var_33_int = var_33_int + var_56_int; // 0x2e7 Add2
	goto Label_735; // 0x2e8 Jump
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int, var_28_string, var_29_object)
{
	var_30_string = "button_plus"; // 0x30d PushS
	var_31_bool = var_28_string == var_30_string; // 0x30e Eq
	if(var_31_bool == 0) goto Label_789; // 0x30f JumpB
	var_32_float = 0; // 0x310 PushV
	var_32_float = 1.4; // 0x311 MovF
	func_746(var_28_string, var_29_object, var_32_float); // 0x312 NEW_2
	goto Label_815; // 0x314 Jump
	
Label_815:
	return 0; // 0x32f Return
	
Label_789:
	var_39_string = "button_minus"; // 0x315 PushS
	var_40_bool = var_28_string == var_39_string; // 0x316 Eq
	if(var_40_bool == 0) goto Label_797; // 0x317 JumpB
	var_41_float = 0; // 0x318 PushV
	var_41_float = 1.4; // 0x319 MovF
	func_762(var_28_string, var_29_object, var_41_float); // 0x31a NEW_2
	goto Label_815; // 0x31c Jump
	
Label_797:
	var_49_string = "tavro"; // 0x31d PushS
	var_50_bool = var_28_string == var_49_string; // 0x31e Eq
	if(var_50_bool == 0) goto Label_815; // 0x31f JumpB
	var_51_int = 0; // 0x320 PushI
	var_18_bool = var_27_int == var_51_int; // 0x321 Eq2
	var_52_bool = var_18_bool; // 0x322 PushT
	if(var_52_bool == 0) goto Label_806; // 0x323 JumpB
	var_53_int = 1; // 0x324 PushI
	goto Label_807; // 0x325 Jump
	
Label_807:
	var_54_string = "tavro"; // 0x327 PushS
	SendMessage(var_53_int, var_54_string); // 0x328 Func
	var_55_bool = var_18_bool; // 0x32a PushT
	if(var_55_bool == 0) goto Label_815; // 0x32b JumpB
	func_164(var_27_int, var_28_string, var_29_object); // 0x32d NEW_2
	
Label_806:
	var_93_int = 0; // 0x326 PushI
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string, var_27_int)
{
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x330 PushV
	var_32_int = 107; // 0x331 PushI
	var_33_bool = var_27_int == var_32_int; // 0x332 Eq
	if(var_33_bool == 0) goto Label_825; // 0x333 JumpB
	var_34_float = 0; // 0x334 PushV
	var_34_float = 1.4; // 0x335 MovF
	func_746(var_30_float, var_31_float, var_34_float); // 0x336 NEW_2
	return 4; // 0x338 Return
	
Label_825:
	var_41_int = 109; // 0x339 PushI
	var_42_bool = var_27_int == var_41_int; // 0x33a Eq
	if(var_42_bool == 0) goto Label_833; // 0x33b JumpB
	var_43_float = 0; // 0x33c PushV
	var_43_float = 1.4; // 0x33d MovF
	func_762(var_30_float, var_31_float, var_43_float); // 0x33e NEW_2
	return 4; // 0x340 Return
	
Label_833:
	var_30_float = var_12_float; // 0x341 MovT
	var_31_float = var_13_float; // 0x342 MovT
	ConvertToWorldCoordinates(var_30_float, var_31_float); // 0x343 TObjFunc
	SetMapParams(var_30_float, var_31_float, var_18_bool); // 0x345 TObjFunc
	DestroyWindow(); // 0x347 Func
	return 4; // 0x349 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float, var_10_float, var_11_int, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string)
{
	var_27_float = 0; var_28_float = 0; var_29_int = 0; var_30_object = Obj(); var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_int = 0; var_39_object = Obj(); var_40_string = ""; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x11 PushV
	GetMap(var_23_object); // 0x12 Func
	var_45_bool = var_22_object == 0; // 0x14 NullEq
	if(var_45_bool == 0) goto Label_26; // 0x15 JumpB
	var_46_string = "Map not found"; // 0x16 PushS
	Trace(var_46_string); // 0x17 Func
	return 18; // 0x19 Return
	
Label_26:
	var_47_int = 16; // 0x1a PushI
	var_48_int = 16; // 0x1b PushI
	var_49_string = "ui/ui_player.png"; // 0x1c PushS
	CreatePolyImage(var_24_object, var_47_int, var_48_int, var_49_string); // 0x1d Func
	GetSize(var_44_float, var_43_float); // 0x1f TObjFunc
	GetMapParams(var_36_float, var_37_float, var_31_string); // 0x21 TObjFunc
	ConvertToMapCoordinates(var_36_float, var_37_float); // 0x23 TObjFunc
	var_12_float = var_36_float; // 0x25 TMov
	var_13_float = var_37_float; // 0x26 TMov
	var_16_bool = 1; // 0x27 TMovB
	GetWindowSize(var_42_float, var_41_float); // 0x28 Func
	var_50_float = GlobalVars[0]; // 0x2a PushGE
	var_51_float = 2048.0; // 0x2b PushF
	var_50_float = var_3_int / var_44_float; // 0x2c Div2
	GlobalVars[0] = var_50_float; // 0x2d PopGE
	var_52_float = GlobalVars[1]; // 0x2e PushGE
	var_53_float = GlobalVars[0]; // 0x2f PushGE
	var_52_float = var_53_float; // 0x30 Mov
	GlobalVars[1] = var_52_float; // 0x32 PopGE
	var_19_bool = 0; // 0x33 TMovB
	var_54_int = 0; // 0x34 PushI
	var_55_bool = var_14_float < var_54_int; // 0x35 LT
	if(var_55_bool == 0) goto Label_60; // 0x36 JumpB
	var_18_bool = 1; // 0x37 TMovB
	func_164(var_42_float, var_43_float, var_44_float); // 0x39 NEW_2
	var_14_float = 2; // 0x3b TMovI
	
Label_60:
	var_93_string = "map_chertez_force"; // 0x3c PushS
	GetVariable(var_93_string, var_38_int); // 0x3d Func
	var_94_int = var_38_int; // 0x3f Push
	if(var_94_int == 0) goto Label_73; // 0x40 JumpB
	var_18_bool = 1; // 0x41 TMovB
	func_164(var_42_float, var_43_float, var_44_float); // 0x43 NEW_2
	var_95_string = "map_chertez_force"; // 0x45 PushS
	var_96_int = 0; // 0x46 PushI
	SetVariable(var_95_string, var_96_int); // 0x47 Func
	
Label_73:
	var_97_bool = var_18_bool; // 0x49 PushT
	if(var_97_bool == 0) goto Label_77; // 0x4a JumpB
	var_98_int = 1; // 0x4b PushI
	goto Label_78; // 0x4c Jump
	
Label_78:
	var_99_string = "tavro"; // 0x4e PushS
	SendMessage(var_98_int, var_99_string); // 0x4f Func
	var_0_int = 0; // 0x51 TMovI
	var_5_int = -1; // 0x52 TMovI
	var_6_int = -1; // 0x53 TMovI
	var_15_bool = 0; // 0x54 TMovB
	var_23_object = 0; // 0x55 SetNullT
	var_11_int = -1; // 0x56 TMovI
	CreateObjectVector(var_25_cvector); // 0x57 Func
	GetMainOutdoorScene(var_39_object); // 0x59 Func
	GetActiveScene(var_24_object); // 0x5b Func
	var_100_bool = var_39_object != var_21_object; // 0x5d Neq
	if(var_100_bool == 0) goto Label_123; // 0x5e JumpB
	var_17_bool = 1; // 0x5f TMovB
	GetName(var_40_string); // 0x60 TObjFunc
	var_101_cvector = CVector(0,0,0); var_102_string = ""; // 0x62 PushV
	var_103_string = "pt_gmap_"; // 0x63 PushS
	var_102_string = var_103_string + var_40_string; // 0x64 Add2
	func_899(var_101_cvector, var_102_string); // 0x65 NEW_2
	var_25_cvector = var_101_cvector; // 0x66 TMov
	var_116_float = GetByIndex(var_20_object, 0); // 0x68 PushE
	var_41_float = var_116_float; // 0x69 Mov
	var_117_float = GetByIndex(var_20_object, 2); // 0x6b PushE
	var_42_float = var_117_float; // 0x6c Mov
	ConvertToMapCoordinates(var_41_float, var_42_float); // 0x6e TObjFunc
	var_118_float = GetByIndex(var_20_object, 0); // 0x70 PushE
	var_118_float = var_41_float; // 0x71 Mov
	SetByIndex(var_25_cvector, 0) = var_118_float; // 0x72 PopE
	var_119_float = GetByIndex(var_20_object, 2); // 0x73 PushE
	var_119_float = var_42_float; // 0x74 Mov
	SetByIndex(var_25_cvector, 2) = var_119_float; // 0x75 PopE
	var_120_string = "indoor map: pt_gmap_"; // 0x76 PushS
	var_121_int = var_120_string + var_40_string; // 0x77 Add
	Trace(var_121_int); // 0x78 Func
	goto Label_135; // 0x7a Jump
	
Label_135:
	func_234(); // 0x88 NEW_2
	ShowCursor(); // 0x8a Func
	var_169_string = "default"; // 0x8c PushS
	SetCursor(var_169_string); // 0x8d Func
	var_170_bool = 1; // 0x8f PushB
	SetOwnerDraw(var_170_bool); // 0x90 Func
	var_171_bool = 1; // 0x92 PushB
	SetNeedUpdate(var_171_bool); // 0x93 Func
	var_172_string = "default"; // 0x95 PushS
	SetBackground(var_172_string); // 0x96 Func
	var_173_bool = 1; // 0x98 PushB
	EnableClipping(var_173_bool); // 0x99 Func
	CaptureKeyboard(); // 0x9b Func
	var_174_string = "map_open"; // 0x9d PushS
	PlaySound(var_174_string); // 0x9e Func
	ProcessEvents(); // 0xa0 Func
	return 18; // 0xa2 Return
	
Label_123:
	var_175_string = "outdoor map"; // 0x7b PushS
	Trace(var_175_string); // 0x7c Func
	var_17_bool = 0; // 0x7e TMovB
	GetPlayerMapPos(var_43_float, var_44_float); // 0x7f Func
	var_176_float = GetByIndex(var_20_object, 0); // 0x81 PushE
	var_176_float = var_43_float; // 0x82 Mov
	SetByIndex(var_25_cvector, 0) = var_176_float; // 0x83 PopE
	var_177_float = GetByIndex(var_20_object, 2); // 0x84 PushE
	var_177_float = var_44_float; // 0x85 Mov
	SetByIndex(var_25_cvector, 2) = var_177_float; // 0x86 PopE
	
Label_77:
	var_178_int = 0; // 0x4d PushI
}


func_0(var_0_int, var_30_bool)
{
	var_31_bool = 0; // 0x0 PushV
	var_31_bool = 0; // 0x1 MovB
	var_32_int = 2; // 0x2 PushI
	var_33_bool = var_0_int == var_32_int; // 0x3 Eq
	if(var_33_bool == 0) goto Label_12; // 0x4 JumpB
	var_34_int = 0; // 0x5 PushV
	func_848(var_34_int); // 0x6 NEW_2
	var_40_int = 8; // 0x8 PushI
	var_41_bool = var_34_int >= var_40_int; // 0x9 GE
	if(var_41_bool == 0) goto Label_12; // 0xa JumpB
	var_31_bool = 1; // 0xb MovB
	
Label_12:
	if(var_31_bool == 0) goto Label_15; // 0xc JumpB
	var_30_bool = 1; // 0xd MovB
	return 0; // 0xe Return
	
Label_15:
	var_30_bool = 0; // 0xf MovB
	return 0; // 0x10 Return
}


func_899(var_101_cvector, var_102_string)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_object = Obj(); var_108_bool = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_object = Obj(); var_112_object = Obj(); var_113_bool = 0; // 0x383 PushV
	GetMainOutdoorScene(var_111_object); // 0x384 Func
	var_114_bool = var_111_object == 0; // 0x386 NullEq
	if(var_114_bool == 0) goto Label_910; // 0x387 JumpB
	var_115_string = "Can't find main outdoor scene"; // 0x388 PushS
	Trace(var_115_string); // 0x389 Func
	var_109_cvector = CVector(0.0, 0.0, 0.0); // 0x38b MovV
	var_101_cvector = var_109_cvector; // 0x38c Mov
	return 10; // 0x38d Return
	
Label_910:
	GetLocator(var_102_string, var_113_bool, var_109_cvector, var_110_cvector); // 0x38e ObjFunc
	var_101_cvector = var_109_cvector; // 0x390 Mov
	return 10; // 0x391 Return
}


func_916(var_85_bool)
{
	var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; // 0x394 PushV
	var_90_int = 0; // 0x395 PushV
	func_848(var_90_int); // 0x396 NEW_2
	var_88_int = var_90_int; // 0x397 Mov
	var_91_string = "RMap"; // 0x399 PushS
	var_92_int = var_91_string + var_88_int; // 0x39a Add
	GetVariable(var_92_int, var_89_int); // 0x39b Func
	var_93_int = 0; // 0x39d PushI
	var_85_bool = var_89_int != var_93_int; // 0x39e Neq2
	return 4; // 0x39f Return
}


func_278(var_3_int, var_12_float, var_14_float, var_138_float, var_139_int)
{
	var_140_int = 2; // 0x117 PushI
	var_141_float = var_3_int / var_140_int; // 0x118 Div
	var_142_int = var_139_int - var_141_float; // 0x119 Sub
	var_143_float = var_142_int / var_14_float; // 0x11a Div
	var_138_float = var_12_float + var_143_float; // 0x11b Add2
	return 0; // 0x11c Return
}


func_536(var_3_int, var_4_int, var_12_float, var_13_float, var_14_float, var_22_object)
{
	var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_int = 0; var_48_int = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_int = 0; var_55_int = 0; // 0x218 PushV
	var_56_bool = 0; // 0x219 PushV
	func_0(var_55_int, var_56_bool); // 0x21a NEW_2
	if(var_56_bool == 0) goto Label_542; // 0x21c JumpB
	return 14; // 0x21d Return
	
Label_542:
	var_49_float = var_14_float; // 0x21e MovT
	var_68_float = GlobalVars[0]; // 0x21f PushGE
	var_69_bool = var_49_float < var_68_float; // 0x220 LT
	if(var_69_bool == 0) goto Label_549; // 0x221 JumpB
	var_70_float = GlobalVars[0]; // 0x222 PushGE
	var_49_float = var_70_float; // 0x223 Mov
	
Label_549:
	var_71_float = var_3_int / var_49_float; // 0x225 Div
	var_72_int = 2; // 0x226 PushI
	var_73_float = var_71_float / var_72_int; // 0x227 Div
	var_50_float = var_12_float - var_73_float; // 0x228 Sub2
	var_74_float = var_3_int / var_49_float; // 0x229 Div
	var_75_int = 2; // 0x22a PushI
	var_76_float = var_74_float / var_75_int; // 0x22b Div
	var_51_float = var_12_float + var_76_float; // 0x22c Add2
	var_77_float = var_4_int / var_49_float; // 0x22d Div
	var_78_int = 2; // 0x22e PushI
	var_79_float = var_77_float / var_78_int; // 0x22f Div
	var_52_float = var_13_float - var_79_float; // 0x230 Sub2
	var_80_float = var_4_int / var_49_float; // 0x231 Div
	var_81_int = 2; // 0x232 PushI
	var_82_float = var_80_float / var_81_int; // 0x233 Div
	var_53_float = var_13_float + var_82_float; // 0x234 Add2
	var_54_int = 0; // 0x235 MovI
	var_55_int = 0; // 0x236 MovI
	ClientToScreen(var_54_int, var_55_int); // 0x237 Func
	var_83_int = var_3_int + var_54_int; // 0x239 Add
	var_84_int = var_4_int + var_55_int; // 0x23a Add
	RenderMap(var_54_int, var_55_int, var_83_int, var_84_int, var_50_float, var_52_float, var_51_float, var_53_float); // 0x23b Func
	var_85_bool = 0; // 0x23d PushV
	func_916(var_85_bool); // 0x23e NEW_2
	if(var_85_bool == 0) goto Label_581; // 0x240 JumpB
	var_94_int = var_3_int + var_54_int; // 0x241 Add
	var_95_int = var_4_int + var_55_int; // 0x242 Add
	RenderRegions(var_54_int, var_55_int, var_94_int, var_95_int, var_50_float, var_52_float, var_51_float, var_53_float); // 0x243 Func
	
Label_581:
	var_96_object = var_23_object; // 0x245 PushT
	if(var_96_object == 0) goto Label_587; // 0x246 JumpB
	var_97_int = var_3_int + var_54_int; // 0x247 Add
	var_98_int = var_4_int + var_55_int; // 0x248 Add
	Render(var_54_int, var_55_int, var_97_int, var_98_int, var_50_float, var_52_float, var_51_float, var_53_float); // 0x249 TObjFunc
	
Label_587:
	var_99_object = Obj(); var_100_int = 0; // 0x24b PushV
	var_99_object = var_22_object; // 0x24c MovT
	var_100_int = 3; // 0x24d MovI
	func_464(var_100_int); // 0x24e NEW_2
	var_169_object = Obj(); var_170_int = 0; // 0x250 PushV
	var_169_object = var_22_object; // 0x251 MovT
	var_170_int = 0; // 0x252 MovI
	func_464(var_170_int); // 0x253 NEW_2
	var_171_object = Obj(); var_172_int = 0; // 0x255 PushV
	var_171_object = var_22_object; // 0x256 MovT
	var_172_int = 1; // 0x257 MovI
	func_464(var_172_int); // 0x258 NEW_2
	func_631(var_54_int, var_55_int); // 0x25b NEW_2
	return 14; // 0x25d Return
}


func_285(var_4_int, var_13_float, var_14_float, var_144_float, var_145_int)
{
	var_146_int = 2; // 0x11e PushI
	var_147_float = var_4_int / var_146_int; // 0x11f Div
	var_148_int = var_145_int - var_147_float; // 0x120 Sub
	var_149_float = var_148_int / var_14_float; // 0x121 Div
	var_144_float = var_13_float + var_149_float; // 0x122 Add2
	return 0; // 0x123 Return
}


func_164(var_19_bool, var_21_object, var_26_string)
{
	var_56_int = 0; var_57_int = 0; // 0xa4 PushV
	var_58_bool = var_19_bool; // 0xa5 PushT
	if(var_58_bool == 0) goto Label_168; // 0xa6 JumpB
	return 2; // 0xa7 Return
	
Label_168:
	var_59_string = "map_chertez_state"; // 0xa8 PushS
	GetVariable(var_59_string, var_57_int); // 0xa9 Func
	var_60_int = 0; // 0xab PushV
	func_842(var_60_int); // 0xac NEW_2
	var_64_int = 0; // 0xae PushI
	var_65_bool = var_60_int == var_64_int; // 0xaf Eq
	if(var_65_bool == 0) goto Label_193; // 0xb0 JumpB
	var_26_string = "ui\ui_chertez_danko_bg.tex"; // 0xb1 TMovS
	var_66_bool = 0; // 0xb2 PushV
	var_66_bool = 0; // 0xb3 MovB
	var_67_int = 1; // 0xb4 PushI
	var_68_bool = var_57_int >= var_67_int; // 0xb5 GE
	if(var_68_bool == 0) goto Label_187; // 0xb6 JumpB
	var_69_int = 6; // 0xb7 PushI
	var_70_bool = var_57_int <= var_69_int; // 0xb8 LE
	if(var_70_bool == 0) goto Label_187; // 0xb9 JumpB
	var_66_bool = 1; // 0xba MovB
	
Label_187:
	if(var_66_bool == 0) goto Label_192; // 0xbb JumpB
	var_71_string = "ui\ui_chertez_danko_"; // 0xbc PushS
	var_72_int = var_71_string + var_57_int; // 0xbd Add
	var_73_string = ".tex"; // 0xbe PushS
	var_26_string = var_72_int + var_73_string; // 0xbf Add2
	
Label_192:
	goto Label_230; // 0xc0 Jump
	
Label_230:
	LoadImage(var_21_object); // 0xe6 Func
	var_19_bool = 1; // 0xe8 TMovB
	return 2; // 0xe9 Return
	
Label_193:
	var_74_int = 0; // 0xc1 PushV
	func_842(var_74_int); // 0xc2 NEW_2
	var_75_int = 1; // 0xc4 PushI
	var_76_bool = var_74_int == var_75_int; // 0xc5 Eq
	if(var_76_bool == 0) goto Label_215; // 0xc6 JumpB
	var_26_string = "ui\ui_chertez_burah_bg.tex"; // 0xc7 TMovS
	var_77_bool = 0; // 0xc8 PushV
	var_77_bool = 0; // 0xc9 MovB
	var_78_int = 1; // 0xca PushI
	var_79_bool = var_57_int >= var_78_int; // 0xcb GE
	if(var_79_bool == 0) goto Label_209; // 0xcc JumpB
	var_80_int = 6; // 0xcd PushI
	var_81_bool = var_57_int <= var_80_int; // 0xce LE
	if(var_81_bool == 0) goto Label_209; // 0xcf JumpB
	var_77_bool = 1; // 0xd0 MovB
	
Label_209:
	if(var_77_bool == 0) goto Label_214; // 0xd1 JumpB
	var_82_string = "ui\ui_chertez_burah_"; // 0xd2 PushS
	var_83_int = var_82_string + var_57_int; // 0xd3 Add
	var_84_string = ".tex"; // 0xd4 PushS
	var_26_string = var_83_int + var_84_string; // 0xd5 Add2
	
Label_214:
	goto Label_230; // 0xd6 Jump
	
Label_215:
	var_26_string = "ui\ui_chertez_klara_bg.tex"; // 0xd7 TMovS
	var_85_bool = 0; // 0xd8 PushV
	var_85_bool = 0; // 0xd9 MovB
	var_86_int = 1; // 0xda PushI
	var_87_bool = var_57_int >= var_86_int; // 0xdb GE
	if(var_87_bool == 0) goto Label_225; // 0xdc JumpB
	var_88_int = 6; // 0xdd PushI
	var_89_bool = var_57_int <= var_88_int; // 0xde LE
	if(var_89_bool == 0) goto Label_225; // 0xdf JumpB
	var_85_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_85_bool == 0) goto Label_230; // 0xe1 JumpB
	var_90_string = "ui\ui_chertez_klara_"; // 0xe2 PushS
	var_91_int = var_90_string + var_57_int; // 0xe3 Add
	var_92_string = ".tex"; // 0xe4 PushS
	var_26_string = var_91_int + var_92_string; // 0xe5 Add2
}


func_292(var_3_int, var_12_float, var_14_float, var_134_int, var_135_float)
{
	var_136_int = var_135_float - var_12_float; // 0x125 Sub
	var_137_float = var_136_int * var_14_float; // 0x126 Mult
	var_138_int = 2; // 0x127 PushI
	var_139_float = var_3_int / var_138_int; // 0x128 Div
	var_134_int = var_137_float + var_139_float; // 0x129 Add2
	return 0; // 0x12a Return
}


func_299(var_4_int, var_13_float, var_14_float, var_140_int, var_141_float)
{
	var_142_int = var_141_float - var_13_float; // 0x12c Sub
	var_143_float = var_142_int * var_14_float; // 0x12d Mult
	var_144_int = 2; // 0x12e PushI
	var_145_float = var_4_int / var_144_int; // 0x12f Div
	var_140_int = var_143_float + var_145_float; // 0x130 Add2
	return 0; // 0x131 Return
}


func_842(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x34a PushV
	var_63_string = "branch"; // 0x34b PushS
	GetVariable(var_63_string, var_62_int); // 0x34c Func
	var_60_int = var_62_int; // 0x34e Mov
	return 2; // 0x34f Return
}


func_848(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x350 PushV
	GetGameTime(var_36_float); // 0x351 Func
	var_37_int = 1; // 0x353 PushI
	var_38_int = 0; // 0x354 PushV
	var_39_int = 24; // 0x355 PushI
	var_38_int = var_36_float / var_36_float; // 0x356 Div2
	var_34_int = var_37_int + var_38_int; // 0x357 Add2
	return 2; // 0x358 Return
}


func_464(var_100_int)
{
	var_101_float = 0; var_102_float = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); var_106_string = ""; var_107_int = 0; var_108_cvector = CVector(0,0,0); var_109_float = 0; var_110_float = 0; var_111_int = 0; var_112_int = 0; var_113_object = Obj(); var_114_string = ""; var_115_int = 0; var_116_cvector = CVector(0,0,0); // 0x1d0 PushV
	GetMarkCount(var_111_int); // 0x1d1 ObjFunc
	var_112_int = 0; // 0x1d3 MovI
	
Label_468:
	var_117_bool = var_112_int < var_111_int; // 0x1d4 LT
	if(var_117_bool == 0) goto Label_535; // 0x1d5 JumpB
	GetMark(var_112_int, var_113_object); // 0x1d6 ObjFunc
	GetLocator(var_114_string); // 0x1d8 ObjFunc
	GetType(var_115_int); // 0x1da ObjFunc
	var_118_cvector = CVector(0,0,0); var_119_string = ""; // 0x1dc PushV
	var_119_string = var_114_string; // 0x1dd Mov
	func_899(var_118_cvector, var_119_string); // 0x1de NEW_2
	var_116_cvector = var_118_cvector; // 0x1df Mov
	var_132_float = GetByIndex(var_116_cvector, 0); // 0x1e1 PushE
	var_109_float = var_132_float; // 0x1e2 Mov
	var_133_float = GetByIndex(var_116_cvector, 2); // 0x1e4 PushE
	var_110_float = var_133_float; // 0x1e5 Mov
	ConvertToMapCoordinates(var_109_float, var_110_float); // 0x1e7 ObjFunc
	var_134_int = 0; var_135_float = 0; // 0x1e9 PushV
	var_135_float = var_109_float; // 0x1ea Mov
	func_292(var_114_string, var_115_int, var_116_cvector, var_134_int, var_135_float); // 0x1eb NEW_2
	var_109_float = var_134_int; // 0x1ec Mov
	var_140_int = 0; var_141_float = 0; // 0x1ee PushV
	var_141_float = var_110_float; // 0x1ef Mov
	func_299(var_114_string, var_115_int, var_116_cvector, var_140_int, var_141_float); // 0x1f0 NEW_2
	var_110_float = var_140_int; // 0x1f1 Mov
	var_146_bool = var_115_int == var_100_int; // 0x1f3 Eq
	if(var_146_bool == 0) goto Label_531; // 0x1f4 JumpB
	var_147_int = 0; // 0x1f5 PushI
	var_148_bool = var_115_int == var_147_int; // 0x1f6 Eq
	if(var_148_bool == 0) goto Label_511; // 0x1f7 JumpB
	var_149_string = "quest_mark"; // 0x1f8 PushS
	var_150_int = 16; // 0x1f9 PushI
	var_151_int = var_109_float - var_150_int; // 0x1fa Sub
	var_152_int = 16; // 0x1fb PushI
	var_153_int = var_110_float - var_152_int; // 0x1fc Sub
	Blit(var_149_string, var_151_int, var_153_int); // 0x1fd Func
	
Label_511:
	var_154_int = 1; // 0x1ff PushI
	var_155_bool = var_115_int == var_154_int; // 0x200 Eq
	if(var_155_bool == 0) goto Label_521; // 0x201 JumpB
	var_156_string = "mainquest_mark"; // 0x202 PushS
	var_157_int = 16; // 0x203 PushI
	var_158_int = var_109_float - var_157_int; // 0x204 Sub
	var_159_int = 16; // 0x205 PushI
	var_160_int = var_110_float - var_159_int; // 0x206 Sub
	Blit(var_156_string, var_158_int, var_160_int); // 0x207 Func
	
Label_521:
	var_161_int = 3; // 0x209 PushI
	var_162_bool = var_115_int == var_161_int; // 0x20a Eq
	if(var_162_bool == 0) goto Label_531; // 0x20b JumpB
	var_163_string = "info_mark"; // 0x20c PushS
	var_164_int = 16; // 0x20d PushI
	var_165_int = var_109_float - var_164_int; // 0x20e Sub
	var_166_int = 16; // 0x20f PushI
	var_167_int = var_110_float - var_166_int; // 0x210 Sub
	Blit(var_163_string, var_165_int, var_167_int); // 0x211 Func
	
Label_531:
	var_113_object = 0; // 0x213 SetNull
	var_168_int = 1; // 0x214 PushI
	var_112_int = var_112_int + var_168_int; // 0x215 Add2
	goto Label_468; // 0x216 Jump
	
Label_535:
	return 16; // 0x217 Return
}


func_857(var_130_string, var_131_int)
{
	var_132_string = "Region"; // 0x35a PushS
	var_133_int = var_132_string + var_131_int; // 0x35b Add
	var_134_string = "State"; // 0x35c PushS
	var_130_string = var_133_int + var_134_string; // 0x35d Add2
	return 0; // 0x35e Return
}


func_606(var_13_float)
{
	var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_float = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_float = 0; // 0x25e PushV
	var_33_int = 0; // 0x25f MovI
	var_34_int = 0; // 0x260 MovI
	ScreenToClient(var_33_int, var_34_int); // 0x261 Func
	GetScreenSize(var_35_int, var_36_int); // 0x263 Func
	var_38_float = 768.0; // 0x265 PushF
	var_37_float = var_36_int / var_36_int; // 0x266 Div2
	var_39_int = 1024; // 0x267 PushI
	var_40_float = var_37_float * var_39_int; // 0x268 Mult
	var_41_int = 1; // 0x269 PushI
	StretchBlit(var_13_float, var_33_int, var_34_int, var_35_int, var_40_float, var_41_int); // 0x26a Func
	return 10; // 0x26c Return
}


func_863(var_126_bool, var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x35f PushV
	var_130_string = ""; var_131_int = 0; // 0x360 PushV
	var_131_int = var_127_int; // 0x361 Mov
	func_857(var_130_string, var_131_int); // 0x362 NEW_2
	GetVariable(var_130_string, var_129_int); // 0x364 Func
	var_135_int = 3; // 0x366 PushI
	var_136_int = var_129_int & var_135_int; // 0x367 And
	var_137_int = 0; // 0x368 PushI
	var_126_bool = var_136_int == var_137_int; // 0x369 Eq2
	return 2; // 0x36a Return
}


func_234()
{
	var_122_int = 0; var_123_int = 0; // 0xea PushV
	var_123_int = 0; // 0xeb MovI
	
Label_236:
	var_124_int = 16; // 0xec PushI
	var_125_bool = var_123_int < var_124_int; // 0xed LT
	if(var_125_bool == 0) goto Label_277; // 0xee JumpB
	var_126_bool = 0; var_127_int = 0; // 0xef PushV
	var_127_int = var_123_int; // 0xf0 Mov
	func_863(var_126_bool, var_127_int); // 0xf1 NEW_2
	if(var_126_bool == 0) goto Label_251; // 0xf3 JumpB
	var_138_float = 0.5; // 0xf4 PushF
	var_139_float = 0.5; // 0xf5 PushF
	var_140_float = 0.5; // 0xf6 PushF
	var_141_float = 0.0; // 0xf7 PushF
	SetRegionColor(var_123_int, var_138_float, var_139_float, var_140_float, var_141_float); // 0xf8 Func
	goto Label_274; // 0xfa Jump
	
Label_274:
	var_142_int = 1; // 0x112 PushI
	var_123_int = var_123_int + var_142_int; // 0x113 Add2
	goto Label_236; // 0x114 Jump
	
Label_251:
	var_143_bool = 0; var_144_int = 0; // 0xfb PushV
	var_144_int = var_123_int; // 0xfc Mov
	func_875(var_143_bool, var_144_int); // 0xfd NEW_2
	if(var_143_bool == 0) goto Label_263; // 0xff JumpB
	var_152_float = 0.5; // 0x100 PushF
	var_153_float = 0.0; // 0x101 PushF
	var_154_float = 0.0; // 0x102 PushF
	var_155_float = 0.5; // 0x103 PushF
	SetRegionColor(var_123_int, var_152_float, var_153_float, var_154_float, var_155_float); // 0x104 Func
	goto Label_274; // 0x106 Jump
	
Label_263:
	var_156_bool = 0; var_157_int = 0; // 0x107 PushV
	var_157_int = var_123_int; // 0x108 Mov
	func_887(var_156_bool, var_157_int); // 0x109 NEW_2
	if(var_156_bool == 0) goto Label_274; // 0x10b JumpB
	var_165_float = 0.0; // 0x10c PushF
	var_166_float = 0.0; // 0x10d PushF
	var_167_float = 0.0; // 0x10e PushF
	var_168_float = 0.5; // 0x10f PushF
	SetRegionColor(var_123_int, var_165_float, var_166_float, var_167_float, var_168_float); // 0x110 Func
	
Label_277:
	return 2; // 0x115 Return
}


func_875(var_143_bool, var_144_int)
{
	var_145_int = 0; var_146_int = 0; // 0x36b PushV
	var_147_string = ""; var_148_int = 0; // 0x36c PushV
	var_148_int = var_144_int; // 0x36d Mov
	func_857(var_147_string, var_148_int); // 0x36e NEW_2
	GetVariable(var_147_string, var_146_int); // 0x370 Func
	var_149_int = 3; // 0x372 PushI
	var_150_int = var_146_int & var_149_int; // 0x373 And
	var_151_int = 1; // 0x374 PushI
	var_143_bool = var_150_int == var_151_int; // 0x375 Eq2
	return 2; // 0x376 Return
}


func_746(var_0_int, var_14_float, var_34_float)
{
	var_35_bool = var_18_bool; // 0x2eb PushT
	if(var_35_bool == 0) goto Label_750; // 0x2ec JumpB
	return 0; // 0x2ed Return
	
Label_750:
	var_14_float = var_14_float * var_34_float; // 0x2ee Mult2
	var_36_float = 2.0; // 0x2ef PushF
	var_37_bool = var_14_float > var_36_float; // 0x2f0 GT
	if(var_37_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_14_float = 2.0; // 0x2f2 TMovF
	
Label_755:
	var_38_int = -1; // 0x2f3 PushI
	var_0_int = var_0_int + var_38_int; // 0x2f4 Add2
	var_39_int = 0; // 0x2f5 PushI
	var_40_bool = var_0_int < var_39_int; // 0x2f6 LT
	if(var_40_bool == 0) goto Label_761; // 0x2f7 JumpB
	var_0_int = 0; // 0x2f8 TMovI
	
Label_761:
	return 0; // 0x2f9 Return
}


func_887(var_156_bool, var_157_int)
{
	var_158_int = 0; var_159_int = 0; // 0x377 PushV
	var_160_string = ""; var_161_int = 0; // 0x378 PushV
	var_161_int = var_157_int; // 0x379 Mov
	func_857(var_160_string, var_161_int); // 0x37a NEW_2
	GetVariable(var_160_string, var_159_int); // 0x37c Func
	var_162_int = 3; // 0x37e PushI
	var_163_int = var_159_int & var_162_int; // 0x37f And
	var_164_int = 2; // 0x380 PushI
	var_156_bool = var_163_int == var_164_int; // 0x381 Eq2
	return 2; // 0x382 Return
}


func_631(var_17_bool, var_24_object)
{
	var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x277 PushV
	var_179_bool = var_17_bool == 0; // 0x278 Not
	if(var_179_bool == 0) goto Label_655; // 0x279 JumpB
	GetPlayerMapAngle(var_178_float); // 0x27a Func
	var_180_int = 0; var_181_float = 0; // 0x27c PushV
	var_182_float = GetByIndex(var_24_object, 0); // 0x27d PushE
	var_181_float = var_182_float; // 0x27e Mov
	func_292(var_176_float, var_177_float, var_178_float, var_180_int, var_181_float); // 0x280 NEW_2
	var_176_float = var_180_int; // 0x281 Mov
	var_183_int = 0; var_184_float = 0; // 0x283 PushV
	var_185_float = GetByIndex(var_24_object, 2); // 0x284 PushE
	var_184_float = var_185_float; // 0x285 Mov
	func_299(var_176_float, var_177_float, var_178_float, var_183_int, var_184_float); // 0x287 NEW_2
	var_177_float = var_183_int; // 0x288 Mov
	ClientToScreen(var_176_float, var_177_float); // 0x28a Func
	Blit(var_176_float, var_177_float, var_178_float); // 0x28c TObjFunc
	goto Label_673; // 0x28e Jump
	
Label_673:
	return 6; // 0x2a1 Return
	
Label_655:
	var_186_int = 0; var_187_float = 0; // 0x28f PushV
	var_188_float = GetByIndex(var_24_object, 0); // 0x290 PushE
	var_187_float = var_188_float; // 0x291 Mov
	func_292(var_176_float, var_177_float, var_178_float, var_186_int, var_187_float); // 0x293 NEW_2
	var_176_float = var_186_int; // 0x294 Mov
	var_189_int = 0; var_190_float = 0; // 0x296 PushV
	var_191_float = GetByIndex(var_24_object, 2); // 0x297 PushE
	var_190_float = var_191_float; // 0x298 Mov
	func_299(var_176_float, var_177_float, var_178_float, var_189_int, var_190_float); // 0x29a NEW_2
	var_177_float = var_189_int; // 0x29b Mov
	ClientToScreen(var_176_float, var_177_float); // 0x29d Func
	Blit(var_176_float, var_177_float); // 0x29f TObjFunc
}


func_762(var_0_int, var_14_float, var_19_bool)
{
	var_44_bool = var_18_bool; // 0x2fb PushT
	if(var_44_bool == 0) goto Label_766; // 0x2fc JumpB
	return 0; // 0x2fd Return
	
Label_766:
	var_14_float = var_14_float / var_19_bool; // 0x2fe Div2
	var_45_float = GlobalVars[0]; // 0x2ff PushGE
	var_46_bool = var_14_float < var_45_float; // 0x300 LT
	if(var_46_bool == 0) goto Label_779; // 0x301 JumpB
	var_47_float = GlobalVars[0]; // 0x302 PushGE
	var_14_float = var_47_float; // 0x303 TMov
	var_48_int = 1; // 0x305 PushI
	var_0_int = var_0_int + var_48_int; // 0x306 Add2
	var_49_int = 2; // 0x307 PushI
	var_50_bool = var_0_int > var_49_int; // 0x308 GT
	if(var_50_bool == 0) goto Label_779; // 0x309 JumpB
	var_0_int = 2; // 0x30a TMovI
	
Label_779:
	return 0; // 0x30b Return
}


