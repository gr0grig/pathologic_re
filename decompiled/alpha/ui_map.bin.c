task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_float)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_float = 0; var_30_float = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_string = ""; var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_float = 0; var_49_float = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_string = ""; var_55_cvector = CVector(0,0,0); var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_string = ""; // 0x8e PushV
	var_61_float = var_2_int / var_13_float; // 0x8f Div
	var_62_int = 2; // 0x90 PushI
	var_63_float = var_61_float / var_62_int; // 0x91 Div
	var_42_int = var_11_float - var_63_float; // 0x92 Sub2
	var_64_float = var_2_int / var_13_float; // 0x93 Div
	var_65_int = 2; // 0x94 PushI
	var_66_float = var_64_float / var_65_int; // 0x95 Div
	var_43_int = var_11_float + var_66_float; // 0x96 Add2
	var_67_float = var_3_int / var_13_float; // 0x97 Div
	var_68_int = 2; // 0x98 PushI
	var_69_float = var_67_float / var_68_int; // 0x99 Div
	var_44_int = var_12_float - var_69_float; // 0x9a Sub2
	var_70_float = var_3_int / var_13_float; // 0x9b Div
	var_71_int = 2; // 0x9c PushI
	var_72_float = var_70_float / var_71_int; // 0x9d Div
	var_45_int = var_12_float + var_72_float; // 0x9e Add2
	var_46_int = 0; // 0x9f MovI
	var_47_int = 0; // 0xa0 MovI
	var_73_int = 0; // 0xa1 PushI
	var_74_bool = var_42_int < var_73_int; // 0xa2 LT
	if(var_74_bool == 0) goto Label_166; // 0xa3 JumpB
	var_46_int = -var_42_int; // 0xa4 Neg2
	goto Label_171; // 0xa5 Jump
	
Label_171:
	var_75_int = 0; // 0xab PushI
	var_76_bool = var_44_int < var_75_int; // 0xac LT
	if(var_76_bool == 0) goto Label_176; // 0xad JumpB
	var_47_int = -var_44_int; // 0xae Neg2
	goto Label_181; // 0xaf Jump
	
Label_181:
	var_11_float = var_11_float + var_46_int; // 0xb5 Add2
	var_12_float = var_12_float + var_47_int; // 0xb6 Add2
	clear(); // 0xb7 TObjFunc
	var_51_int = 0; // 0xb9 MovI
	GetMarkCount(var_50_int); // 0xba TObjFunc
	var_52_int = 0; // 0xbc MovI
	
Label_189:
	var_77_bool = var_52_int < var_50_int; // 0xbd LT
	if(var_77_bool == 0) goto Label_236; // 0xbe JumpB
	GetMark(var_52_int, var_53_object); // 0xbf TObjFunc
	GetLocator(var_54_string); // 0xc1 ObjFunc
	var_78_cvector = CVector(0,0,0); var_79_string = ""; // 0xc3 PushV
	var_79_string = var_54_string; // 0xc4 Mov
	func_529(var_78_cvector, var_79_string); // 0xc5 Call
	var_55_cvector = var_78_cvector; // 0xc6 Mov
	var_92_float = GetByIndex(var_55_cvector, 0); // 0xc8 PushE
	var_48_float = var_92_float; // 0xc9 Mov
	var_93_float = GetByIndex(var_55_cvector, 2); // 0xcb PushE
	var_49_float = var_93_float; // 0xcc Mov
	ConvertToMapCoordinates(var_48_float, var_49_float); // 0xce TObjFunc
	var_94_int = 0; var_95_int = 0; // 0xd0 PushV
	var_95_int = var_48_float; // 0xd1 Mov
	func_128(var_58_int, var_59_int, var_60_string, var_94_int, var_95_int); // 0xd2 Call
	var_48_float = var_94_int; // 0xd3 Mov
	var_100_int = 0; var_101_int = 0; // 0xd5 PushV
	var_101_int = var_49_float; // 0xd6 Mov
	func_135(var_58_int, var_59_int, var_60_string, var_100_int, var_101_int); // 0xd7 Call
	var_49_float = var_100_int; // 0xd8 Mov
	var_106_int = var_48_float - var_4_int; // 0xda Sub
	var_107_int = var_48_float - var_4_int; // 0xdb Sub
	var_108_float = var_106_int * var_107_int; // 0xdc Mult
	var_109_int = var_49_float - var_5_int; // 0xdd Sub
	var_110_int = var_49_float - var_5_int; // 0xde Sub
	var_111_float = var_109_int * var_110_int; // 0xdf Mult
	var_112_int = var_108_float + var_111_float; // 0xe0 Add
	var_113_int = 900; // 0xe1 PushI
	var_114_bool = var_112_int < var_113_int; // 0xe2 LT
	if(var_114_bool == 0) goto Label_232; // 0xe3 JumpB
	add(var_53_object); // 0xe4 TObjFunc
	var_115_int = 1; // 0xe6 PushI
	var_51_int = var_51_int + var_115_int; // 0xe7 Add2
	
Label_232:
	var_53_object = 0; // 0xe8 SetNull
	var_116_int = 1; // 0xe9 PushI
	var_52_int = var_52_int + var_116_int; // 0xea Add2
	goto Label_189; // 0xeb Jump
	
Label_236:
	var_117_bool = var_51_int == 0; // 0xec Not
	if(var_117_bool == 0) goto Label_275; // 0xed JumpB
	var_118_int = 0; var_119_int = 0; // 0xee PushV
	var_119_int = var_4_int; // 0xef MovT
	func_114(var_58_int, var_59_int, var_60_string, var_118_int, var_119_int); // 0xf0 Call
	var_58_int = var_118_int; // 0xf1 Mov
	var_124_int = 0; var_125_int = 0; // 0xf3 PushV
	var_125_int = var_5_int; // 0xf4 MovT
	func_121(var_58_int, var_59_int, var_60_string, var_124_int, var_125_int); // 0xf5 Call
	var_59_int = var_124_int; // 0xf6 Mov
	GetObjectFromPoint(var_56_int, var_58_int, var_59_int); // 0xf8 TObjFunc
	var_130_int = 0; // 0xfa PushI
	var_131_bool = var_56_int >= var_130_int; // 0xfb GE
	if(var_131_bool == 0) goto Label_268; // 0xfc JumpB
	GetObjectID(var_57_int, var_56_int); // 0xfd TObjFunc
	var_132_int = 100000; // 0xff PushI
	var_133_int = var_57_int + var_132_int; // 0x100 Add
	GetStringByID(var_60_string, var_133_int); // 0x101 Func
	var_134_int = 5; // 0x103 PushI
	SetTooltip(var_134_int, var_60_string); // 0x104 Func
	var_135_bool = var_10_int != var_56_int; // 0x106 Neq
	if(var_135_bool == 0) goto Label_267; // 0x107 JumpB
	CreateObjectHighlight(var_41_string, var_56_int); // 0x108 TObjFunc
	var_10_int = var_56_int; // 0x10a TMov
	
Label_267:
	goto Label_274; // 0x10b Jump
	
Label_274:
	goto Label_281; // 0x112 Jump
	
Label_281:
	return 38; // 0x119 Return
	
Label_268:
	var_136_int = -1; // 0x10c PushI
	var_137_string = ""; // 0x10d PushS
	SetTooltip(var_136_int, var_137_string); // 0x10e Func
	var_20_object = 0; // 0x110 SetNullT
	var_10_int = -1; // 0x111 TMovI
	
Label_275:
	var_138_int = 2; // 0x113 PushI
	var_139_string = ""; // 0x114 PushS
	SetTooltip(var_138_int, var_139_string, var_46_int); // 0x115 Func
	var_20_object = 0; // 0x117 SetNullT
	var_10_int = -1; // 0x118 TMovI
	
Label_176:
	var_140_int = 2048; // 0xb0 PushI
	var_141_bool = var_45_int > var_140_int; // 0xb1 GT
	if(var_141_bool == 0) goto Label_181; // 0xb2 JumpB
	var_142_int = 2048; // 0xb3 PushI
	var_47_int = var_142_int - var_45_int; // 0xb4 Sub2
	
Label_166:
	var_143_int = 2048; // 0xa6 PushI
	var_144_bool = var_43_int > var_143_int; // 0xa7 GT
	if(var_144_bool == 0) goto Label_171; // 0xa8 JumpB
	var_145_int = 2048; // 0xa9 PushI
	var_46_int = var_145_int - var_43_int; // 0xaa Sub2
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_int = 0; var_31_int = 0; var_32_object = Obj(); var_33_string = ""; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_float = 0; var_45_float = 0; var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_string = ""; var_50_int = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_int = 0; // 0x11a PushV
	var_54_bool = 0; // 0x11b PushV
	func_0(var_53_int, var_54_bool); // 0x11c Call
	if(var_54_bool == 0) goto Label_288; // 0x11e JumpB
	return 32; // 0x11f Return
	
Label_288:
	var_59_float = var_2_int / var_13_float; // 0x120 Div
	var_60_int = 2; // 0x121 PushI
	var_61_float = var_59_float / var_60_int; // 0x122 Div
	var_38_int = var_11_float - var_61_float; // 0x123 Sub2
	var_62_float = var_2_int / var_13_float; // 0x124 Div
	var_63_int = 2; // 0x125 PushI
	var_64_float = var_62_float / var_63_int; // 0x126 Div
	var_39_int = var_11_float + var_64_float; // 0x127 Add2
	var_65_float = var_3_int / var_13_float; // 0x128 Div
	var_66_int = 2; // 0x129 PushI
	var_67_float = var_65_float / var_66_int; // 0x12a Div
	var_40_int = var_12_float - var_67_float; // 0x12b Sub2
	var_68_float = var_3_int / var_13_float; // 0x12c Div
	var_69_int = 2; // 0x12d PushI
	var_70_float = var_68_float / var_69_int; // 0x12e Div
	var_41_int = var_12_float + var_70_float; // 0x12f Add2
	var_42_int = 0; // 0x130 MovI
	var_43_int = 0; // 0x131 MovI
	ClientToScreen(var_42_int, var_43_int); // 0x132 Func
	var_71_int = var_2_int + var_42_int; // 0x134 Add
	var_72_int = var_3_int + var_43_int; // 0x135 Add
	RenderMap(var_42_int, var_43_int, var_71_int, var_72_int, var_38_int, var_40_int, var_39_int, var_41_int); // 0x136 Func
	var_73_object = var_20_object; // 0x138 PushT
	if(var_73_object == 0) goto Label_318; // 0x139 JumpB
	var_74_int = var_2_int + var_42_int; // 0x13a Add
	var_75_int = var_3_int + var_43_int; // 0x13b Add
	Render(var_42_int, var_43_int, var_74_int, var_75_int, var_38_int, var_40_int, var_39_int, var_41_int); // 0x13c TObjFunc
	
Label_318:
	GetMarkCount(var_46_int); // 0x13e TObjFunc
	var_47_int = 0; // 0x140 MovI
	
Label_321:
	var_76_bool = var_47_int < var_46_int; // 0x141 LT
	if(var_76_bool == 0) goto Label_386; // 0x142 JumpB
	GetMark(var_47_int, var_48_object); // 0x143 TObjFunc
	GetLocator(var_49_string); // 0x145 ObjFunc
	GetType(var_50_int); // 0x147 ObjFunc
	var_77_cvector = CVector(0,0,0); var_78_string = ""; // 0x149 PushV
	var_78_string = var_49_string; // 0x14a Mov
	func_529(var_77_cvector, var_78_string); // 0x14b Call
	var_51_cvector = var_77_cvector; // 0x14c Mov
	var_91_float = GetByIndex(var_51_cvector, 0); // 0x14e PushE
	var_44_float = var_91_float; // 0x14f Mov
	var_92_float = GetByIndex(var_51_cvector, 2); // 0x151 PushE
	var_45_float = var_92_float; // 0x152 Mov
	ConvertToMapCoordinates(var_44_float, var_45_float); // 0x154 TObjFunc
	var_93_int = 0; var_94_int = 0; // 0x156 PushV
	var_94_int = var_44_float; // 0x157 Mov
	func_128(var_51_cvector, var_52_float, var_53_int, var_93_int, var_94_int); // 0x158 Call
	var_44_float = var_93_int; // 0x159 Mov
	var_99_int = 0; var_100_int = 0; // 0x15b PushV
	var_100_int = var_45_float; // 0x15c Mov
	func_135(var_51_cvector, var_52_float, var_53_int, var_99_int, var_100_int); // 0x15d Call
	var_45_float = var_99_int; // 0x15e Mov
	var_105_int = 0; // 0x160 PushI
	var_106_bool = var_50_int == var_105_int; // 0x161 Eq
	if(var_106_bool == 0) goto Label_362; // 0x162 JumpB
	var_107_string = "quest_mark"; // 0x163 PushS
	var_108_int = 16; // 0x164 PushI
	var_109_int = var_44_float - var_108_int; // 0x165 Sub
	var_110_int = 16; // 0x166 PushI
	var_111_int = var_45_float - var_110_int; // 0x167 Sub
	Blit(var_107_string, var_109_int, var_111_int); // 0x168 Func
	
Label_362:
	var_112_int = 1; // 0x16a PushI
	var_113_bool = var_50_int == var_112_int; // 0x16b Eq
	if(var_113_bool == 0) goto Label_372; // 0x16c JumpB
	var_114_string = "mainquest_mark"; // 0x16d PushS
	var_115_int = 16; // 0x16e PushI
	var_116_int = var_44_float - var_115_int; // 0x16f Sub
	var_117_int = 16; // 0x170 PushI
	var_118_int = var_45_float - var_117_int; // 0x171 Sub
	Blit(var_114_string, var_116_int, var_118_int); // 0x172 Func
	
Label_372:
	var_119_int = 3; // 0x174 PushI
	var_120_bool = var_50_int == var_119_int; // 0x175 Eq
	if(var_120_bool == 0) goto Label_382; // 0x176 JumpB
	var_121_string = "info_mark"; // 0x177 PushS
	var_122_int = 16; // 0x178 PushI
	var_123_int = var_44_float - var_122_int; // 0x179 Sub
	var_124_int = 16; // 0x17a PushI
	var_125_int = var_45_float - var_124_int; // 0x17b Sub
	Blit(var_121_string, var_123_int, var_125_int); // 0x17c Func
	
Label_382:
	var_48_object = 0; // 0x17e SetNull
	var_126_int = 1; // 0x17f PushI
	var_47_int = var_47_int + var_126_int; // 0x180 Add2
	goto Label_321; // 0x181 Jump
	
Label_386:
	var_127_bool = var_16_bool == 0; // 0x182 Not
	if(var_127_bool == 0) goto Label_417; // 0x183 JumpB
	GetPlayerMapAngle(var_52_float); // 0x184 Func
	var_128_float = 6.28; // 0x186 PushF
	var_129_float = var_52_float / var_128_float; // 0x187 Div
	var_130_int = 16; // 0x188 PushI
	var_53_int = var_129_float * var_130_int; // 0x189 Mult2
	var_131_int = 0; var_132_int = 0; // 0x18a PushV
	var_133_float = GetByIndex(var_35_cvector, 0); // 0x18b PushE
	var_132_int = var_133_float; // 0x18c Mov
	func_128(var_51_cvector, var_52_float, var_53_int, var_131_int, var_132_int); // 0x18e Call
	var_44_float = var_131_int; // 0x18f Mov
	var_134_int = 0; var_135_int = 0; // 0x191 PushV
	var_136_float = GetByIndex(var_35_cvector, 2); // 0x192 PushE
	var_135_int = var_136_float; // 0x193 Mov
	func_135(var_51_cvector, var_52_float, var_53_int, var_134_int, var_135_int); // 0x195 Call
	var_45_float = var_134_int; // 0x196 Mov
	var_137_string = "player"; // 0x198 PushS
	var_138_int = var_137_string + var_53_int; // 0x199 Add
	var_139_int = 8; // 0x19a PushI
	var_140_int = var_44_float - var_139_int; // 0x19b Sub
	var_141_int = 8; // 0x19c PushI
	var_142_int = var_45_float - var_141_int; // 0x19d Sub
	Blit(var_138_int, var_140_int, var_142_int); // 0x19e Func
	goto Label_438; // 0x1a0 Jump
	
Label_438:
	return 32; // 0x1b6 Return
	
Label_417:
	var_143_int = 0; var_144_int = 0; // 0x1a1 PushV
	var_145_float = GetByIndex(var_35_cvector, 0); // 0x1a2 PushE
	var_144_int = var_145_float; // 0x1a3 Mov
	func_128(var_51_cvector, var_52_float, var_53_int, var_143_int, var_144_int); // 0x1a5 Call
	var_44_float = var_143_int; // 0x1a6 Mov
	var_146_int = 0; var_147_int = 0; // 0x1a8 PushV
	var_148_float = GetByIndex(var_35_cvector, 2); // 0x1a9 PushE
	var_147_int = var_148_float; // 0x1aa Mov
	func_135(var_51_cvector, var_52_float, var_53_int, var_146_int, var_147_int); // 0x1ac Call
	var_45_float = var_146_int; // 0x1ad Mov
	var_149_string = "player0"; // 0x1af PushS
	var_150_int = 8; // 0x1b0 PushI
	var_151_int = var_44_float - var_150_int; // 0x1b1 Sub
	var_152_int = 8; // 0x1b2 PushI
	var_153_int = var_45_float - var_152_int; // 0x1b3 Sub
	Blit(var_149_string, var_151_int, var_153_int); // 0x1b4 Func
}


task_0_event_11(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int)
{
	var_24_bool = 0; // 0x1b8 PushV
	func_0(var_23_int, var_24_bool); // 0x1b9 Call
	if(var_24_bool == 0) goto Label_445; // 0x1bb JumpB
	return 0; // 0x1bc Return
	
Label_445:
	var_14_bool = 1; // 0x1bd TMovB
	var_6_int = var_22_int; // 0x1be TMov
	var_7_int = var_23_int; // 0x1bf TMov
	var_8_int = var_11_float; // 0x1c0 TMovT
	var_9_int = var_12_float; // 0x1c1 TMovT
	var_29_string = "drag"; // 0x1c2 PushS
	SetCursor(var_29_string); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


task_0_event_12(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int, var_24_bool)
{
	var_14_bool = 0; // 0x1c7 TMovB
	var_25_string = "default"; // 0x1c8 PushS
	SetCursor(var_25_string); // 0x1c9 Func
	return 0; // 0x1cb Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_int)
{
	var_4_int = var_22_int; // 0x1cd TMov
	var_5_int = var_23_int; // 0x1ce TMov
	var_15_bool = 0; // 0x1cf TMovB
	var_24_bool = var_14_bool; // 0x1d0 PushT
	if(var_24_bool == 0) goto Label_472; // 0x1d1 JumpB
	var_25_int = var_6_int - var_22_int; // 0x1d2 Sub
	var_26_float = var_25_int / var_13_float; // 0x1d3 Div
	var_11_float = var_8_int + var_26_float; // 0x1d4 Add2
	var_27_int = var_7_int - var_23_int; // 0x1d5 Sub
	var_28_float = var_27_int / var_13_float; // 0x1d6 Div
	var_12_float = var_9_int + var_28_float; // 0x1d7 Add2
	
Label_472:
	return 0; // 0x1d8 Return
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_15_bool = 1; // 0x1d9 TMovB
	return 0; // 0x1da Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int, var_23_string, var_24_object)
{
	var_25_string = "button_plus"; // 0x1ec PushS
	var_26_bool = var_23_string == var_25_string; // 0x1ed Eq
	if(var_26_bool == 0) goto Label_498; // 0x1ee JumpB
	func_475(var_24_object); // 0x1f0 Call
	
Label_498:
	var_30_string = "button_minus"; // 0x1f2 PushS
	var_31_bool = var_23_string == var_30_string; // 0x1f3 Eq
	if(var_31_bool == 0) goto Label_504; // 0x1f4 JumpB
	func_482(var_23_string, var_24_object); // 0x1f6 Call
	
Label_504:
	return 0; // 0x1f8 Return
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector, var_22_int)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0x1f9 PushV
	var_27_int = 107; // 0x1fa PushI
	var_28_bool = var_22_int == var_27_int; // 0x1fb Eq
	if(var_28_bool == 0) goto Label_513; // 0x1fc JumpB
	func_475(var_26_int); // 0x1fe Call
	return 4; // 0x200 Return
	
Label_513:
	var_32_int = 109; // 0x201 PushI
	var_33_bool = var_22_int == var_32_int; // 0x202 Eq
	if(var_33_bool == 0) goto Label_520; // 0x203 JumpB
	func_482(var_25_int, var_26_int); // 0x205 Call
	return 4; // 0x207 Return
	
Label_520:
	var_25_int = var_11_float; // 0x208 MovT
	var_26_int = var_12_float; // 0x209 MovT
	ConvertToWorldCoordinates(var_25_int, var_26_int); // 0x20a TObjFunc
	SetMapParams(var_25_int, var_26_int, var_14_bool); // 0x20c TObjFunc
	DestroyWindow(); // 0x20e Func
	return 4; // 0x210 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_int, var_10_int, var_11_float, var_12_float, var_13_float, var_14_bool, var_15_bool, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_object, var_21_cvector)
{
	var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_float = 0; var_31_float = 0; var_32_object = Obj(); var_33_string = ""; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0x9 PushV
	GetMap(var_19_object); // 0xa Func
	var_38_bool = var_19_object == 0; // 0xc NullEq
	if(var_38_bool == 0) goto Label_18; // 0xd JumpB
	var_39_string = "Map not found"; // 0xe PushS
	Trace(var_39_string); // 0xf Func
	return 16; // 0x11 Return
	
Label_18:
	GetSize(var_0_int, var_37_int); // 0x12 TObjFunc
	GetMapParams(var_30_float, var_31_float, var_25_string); // 0x14 TObjFunc
	ConvertToMapCoordinates(var_30_float, var_31_float); // 0x16 TObjFunc
	var_11_float = var_30_float; // 0x18 TMov
	var_12_float = var_31_float; // 0x19 TMov
	var_15_bool = 1; // 0x1a TMovB
	GetWindowSize(var_36_int, var_35_int); // 0x1b Func
	var_40_float = GlobalVars[0]; // 0x1d PushGE
	var_41_float = 2048.0; // 0x1e PushF
	var_40_float = var_2_int / var_40_float; // 0x1f Div2
	GlobalVars[0] = var_40_float; // 0x20 PopGE
	var_42_float = GlobalVars[1]; // 0x21 PushGE
	var_43_float = GlobalVars[0]; // 0x22 PushGE
	var_42_float = var_43_float; // 0x23 Mov
	GlobalVars[1] = var_42_float; // 0x25 PopGE
	var_4_int = -1; // 0x26 TMovI
	var_5_int = -1; // 0x27 TMovI
	var_14_bool = 0; // 0x28 TMovB
	var_20_object = 0; // 0x29 SetNullT
	var_10_int = -1; // 0x2a TMovI
	CreateObjectVector(var_21_cvector); // 0x2b Func
	GetMainOutdoorScene(var_32_object); // 0x2d Func
	GetActiveScene(var_20_object); // 0x2f Func
	var_44_bool = var_32_object != var_18_object; // 0x31 Neq
	if(var_44_bool == 0) goto Label_79; // 0x32 JumpB
	var_16_bool = 1; // 0x33 TMovB
	GetName(var_33_string); // 0x34 TObjFunc
	var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x36 PushV
	var_47_string = "pt_gmap_"; // 0x37 PushS
	var_46_string = var_47_string + var_33_string; // 0x38 Add2
	func_529(var_45_cvector, var_46_string); // 0x39 Call
	var_21_cvector = var_45_cvector; // 0x3a TMov
	var_60_float = GetByIndex(var_17_object, 0); // 0x3c PushE
	var_34_int = var_60_float; // 0x3d Mov
	var_61_float = GetByIndex(var_17_object, 2); // 0x3f PushE
	var_35_int = var_61_float; // 0x40 Mov
	ConvertToMapCoordinates(var_34_int, var_35_int); // 0x42 TObjFunc
	var_62_float = GetByIndex(var_17_object, 0); // 0x44 PushE
	var_62_float = var_34_int; // 0x45 Mov
	SetByIndex(var_21_cvector, 0) = var_62_float; // 0x46 PopE
	var_63_float = GetByIndex(var_17_object, 2); // 0x47 PushE
	var_63_float = var_35_int; // 0x48 Mov
	SetByIndex(var_21_cvector, 2) = var_63_float; // 0x49 PopE
	var_64_string = "indoor map: pt_gmap_"; // 0x4a PushS
	var_65_int = var_64_string + var_33_string; // 0x4b Add
	Trace(var_65_int); // 0x4c Func
	goto Label_91; // 0x4e Jump
	
Label_91:
	ShowCursor(); // 0x5b Func
	var_66_string = "default"; // 0x5d PushS
	SetCursor(var_66_string); // 0x5e Func
	var_67_bool = 1; // 0x60 PushB
	SetOwnerDraw(var_67_bool); // 0x61 Func
	var_68_bool = 1; // 0x63 PushB
	SetNeedUpdate(var_68_bool); // 0x64 Func
	var_69_string = "default"; // 0x66 PushS
	SetBackground(var_69_string); // 0x67 Func
	CaptureKeyboard(); // 0x69 Func
	var_70_string = "map_open"; // 0x6b PushS
	PlaySound(var_70_string); // 0x6c Func
	ProcessEvents(); // 0x6e Func
	return 16; // 0x70 Return
	
Label_79:
	var_71_string = "outdoor map"; // 0x4f PushS
	Trace(var_71_string); // 0x50 Func
	var_16_bool = 0; // 0x52 TMovB
	GetPlayerMapPos(var_36_int, var_37_int); // 0x53 Func
	var_72_float = GetByIndex(var_17_object, 0); // 0x55 PushE
	var_72_float = var_36_int; // 0x56 Mov
	SetByIndex(var_21_cvector, 0) = var_72_float; // 0x57 PopE
	var_73_float = GetByIndex(var_17_object, 2); // 0x58 PushE
	var_73_float = var_37_int; // 0x59 Mov
	SetByIndex(var_21_cvector, 2) = var_73_float; // 0x5a PopE
}


func_128(var_2_int, var_11_float, var_13_float, var_93_int, var_94_int)
{
	var_95_int = var_94_int - var_11_float; // 0x81 Sub
	var_96_float = var_95_int * var_13_float; // 0x82 Mult
	var_97_int = 2; // 0x83 PushI
	var_98_float = var_2_int / var_97_int; // 0x84 Div
	var_93_int = var_96_float + var_98_float; // 0x85 Add2
	return 0; // 0x86 Return
}


func_0(var_13_float, var_24_bool)
{
	var_25_float = GlobalVars[0]; // 0x0 PushGE
	var_26_float = 0.01; // 0x1 PushF
	var_27_int = var_25_float + var_26_float; // 0x2 Add
	var_28_bool = var_13_float < var_27_int; // 0x3 LT
	if(var_28_bool == 0) goto Label_7; // 0x4 JumpB
	var_24_bool = 1; // 0x5 MovB
	return 0; // 0x6 Return
	
Label_7:
	var_24_bool = 0; // 0x7 MovB
	return 0; // 0x8 Return
}


func_482(var_13_float, var_15_bool)
{
	var_34_float = 1.4; // 0x1e2 PushF
	var_13_float = var_13_float / var_15_bool; // 0x1e3 Div2
	var_35_float = GlobalVars[0]; // 0x1e4 PushGE
	var_36_bool = var_13_float < var_35_float; // 0x1e5 LT
	if(var_36_bool == 0) goto Label_490; // 0x1e6 JumpB
	var_37_float = GlobalVars[0]; // 0x1e7 PushGE
	var_13_float = var_37_float; // 0x1e8 TMov
	
Label_490:
	return 0; // 0x1ea Return
}


func_135(var_3_int, var_12_float, var_13_float, var_99_int, var_100_int)
{
	var_101_int = var_100_int - var_12_float; // 0x88 Sub
	var_102_float = var_101_int * var_13_float; // 0x89 Mult
	var_103_int = 2; // 0x8a PushI
	var_104_float = var_3_int / var_103_int; // 0x8b Div
	var_99_int = var_102_float + var_104_float; // 0x8c Add2
	return 0; // 0x8d Return
}


func_529(var_45_cvector, var_46_string)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_object = Obj(); var_57_bool = 0; // 0x211 PushV
	GetMainOutdoorScene(var_55_object); // 0x212 Func
	var_58_bool = var_55_object == 0; // 0x214 NullEq
	if(var_58_bool == 0) goto Label_540; // 0x215 JumpB
	var_59_string = "Can't find main outdoor scene"; // 0x216 PushS
	Trace(var_59_string); // 0x217 Func
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x219 MovV
	var_45_cvector = var_53_cvector; // 0x21a Mov
	return 10; // 0x21b Return
	
Label_540:
	GetLocator(var_46_string, var_57_bool, var_53_cvector, var_54_cvector); // 0x21c ObjFunc
	var_45_cvector = var_53_cvector; // 0x21e Mov
	return 10; // 0x21f Return
}


func_114(var_2_int, var_11_float, var_13_float, var_118_int, var_119_int)
{
	var_120_int = 2; // 0x73 PushI
	var_121_float = var_2_int / var_120_int; // 0x74 Div
	var_122_int = var_119_int - var_121_float; // 0x75 Sub
	var_123_float = var_122_int / var_13_float; // 0x76 Div
	var_118_int = var_11_float + var_123_float; // 0x77 Add2
	return 0; // 0x78 Return
}


func_121(var_3_int, var_12_float, var_13_float, var_124_int, var_125_int)
{
	var_126_int = 2; // 0x7a PushI
	var_127_float = var_3_int / var_126_int; // 0x7b Div
	var_128_int = var_125_int - var_127_float; // 0x7c Sub
	var_129_float = var_128_int / var_13_float; // 0x7d Div
	var_124_int = var_12_float + var_129_float; // 0x7e Add2
	return 0; // 0x7f Return
}


func_475(var_13_float)
{
	var_29_float = 1.4; // 0x1db PushF
	var_13_float = var_13_float * var_29_float; // 0x1dc Mult2
	var_30_float = 2.0; // 0x1dd PushF
	var_31_bool = var_13_float > var_30_float; // 0x1de GT
	if(var_31_bool == 0) goto Label_481; // 0x1df JumpB
	var_13_float = 2.0; // 0x1e0 TMovF
	
Label_481:
	return 0; // 0x1e1 Return
}


