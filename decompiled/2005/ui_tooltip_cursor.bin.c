task_0_event_16(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float, var_5_object, var_6_object)
{
	var_7_object = var_5_object; // 0xa Push
	if(var_7_object == 0) goto Label_27; // 0xb JumpB
	var_1_object = var_5_object; // 0xc TMov
	var_4_float = 0; // 0xd TMovI
	GetTooltipType(var_4_float); // 0xe TObjFunc
	GetTooltipText(var_5_object); // 0x10 TObjFunc
	GetTooltipObject(var_0_object); // 0x12 TObjFunc
	var_8_int = 0; var_9_string = ""; var_10_object = Obj(); // 0x14 PushV
	var_8_int = var_3_int; // 0x15 MovT
	var_9_string = var_2_string; // 0x16 MovT
	var_10_object = var_0_object; // 0x17 MovT
	func_280(var_10_object); // 0x18 NEW_2
	goto Label_28; // 0x1a Jump
	
Label_28:
	return 0; // 0x1c Return
	
Label_27:
	var_1_object = 0; // 0x1b SetNullT
}


task_0_event_1(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float, var_5_float)
{
	var_6_int = 0; var_7_string = ""; var_8_object = Obj(); var_9_int = 0; var_10_string = ""; var_11_object = Obj(); // 0x1d PushV
	var_12_bool = var_1_object == 0; // 0x1e Not
	if(var_12_bool == 0) goto Label_33; // 0x1f JumpB
	return 6; // 0x20 Return
	
Label_33:
	GetTooltipType(var_9_int); // 0x21 TObjFunc
	GetTooltipText(var_10_string); // 0x23 TObjFunc
	GetTooltipObject(var_11_object); // 0x25 TObjFunc
	var_13_bool = 0; // 0x27 PushV
	var_13_bool = 1; // 0x28 MovB
	var_14_bool = 0; // 0x29 PushV
	var_14_bool = 1; // 0x2a MovB
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); // 0x2b PushV
	var_16_object = var_11_object; // 0x2c Mov
	var_17_object = var_0_object; // 0x2d MovT
	func_1116(var_15_bool, var_16_object, var_17_object); // 0x2e NEW_2
	var_39_bool = var_15_bool == 0; // 0x30 Not
	if(var_39_bool == 0) goto Label_53; // 0x31 JumpB
	var_40_bool = var_9_int != var_3_int; // 0x32 Neq
	if(var_40_bool == 0) goto Label_53; // 0x33 JumpB
	var_14_bool = 0; // 0x34 MovB
	
Label_53:
	if(var_14_bool == 0) goto Label_57; // 0x35 JumpB
	var_41_bool = var_10_string != var_2_string; // 0x36 Neq
	if(var_41_bool == 0) goto Label_57; // 0x37 JumpB
	var_13_bool = 0; // 0x38 MovB
	
Label_57:
	if(var_13_bool == 0) goto Label_69; // 0x39 JumpB
	var_3_int = var_9_int; // 0x3a TMov
	var_2_string = var_10_string; // 0x3b TMov
	var_0_object = var_11_object; // 0x3c TMov
	var_42_int = 0; var_43_string = ""; var_44_object = Obj(); // 0x3d PushV
	var_42_int = var_3_int; // 0x3e MovT
	var_43_string = var_2_string; // 0x3f MovT
	var_44_object = var_0_object; // 0x40 MovT
	func_280(var_44_object); // 0x41 NEW_2
	var_4_float = 0; // 0x43 TMovI
	goto Label_70; // 0x44 Jump
	
Label_70:
	return 6; // 0x46 Return
	
Label_69:
	var_4_float = var_4_float + var_5_float; // 0x45 Add2
}


task_0_event_0(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float)
{
	var_5_float = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; // 0x48 PushV
	var_11_bool = var_1_object == 0; // 0x49 Not
	if(var_11_bool == 0) goto Label_76; // 0x4a JumpB
	return 6; // 0x4b Return
	
Label_76:
	var_12_float = 0.5; // 0x4c PushF
	var_13_bool = var_4_float < var_12_float; // 0x4d LT
	if(var_13_bool == 0) goto Label_81; // 0x4e JumpB
	var_8_float = 0; // 0x4f MovI
	goto Label_90; // 0x50 Jump
	
Label_90:
	var_9_int = 0; // 0x5a MovI
	var_10_int = 0; // 0x5b MovI
	ClientToScreen(var_9_int, var_10_int); // 0x5c Func
	var_14_int = 0; var_15_string = ""; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_float = 0; // 0x5e PushV
	var_14_int = var_3_int; // 0x5f MovT
	var_15_string = var_2_string; // 0x60 MovT
	var_16_object = var_0_object; // 0x61 MovT
	var_17_int = var_9_int; // 0x62 Mov
	var_18_int = var_10_int; // 0x63 Mov
	var_19_float = var_8_float; // 0x64 Mov
	func_293(var_14_int, var_15_string, var_16_object, var_17_int, var_18_int, var_19_float); // 0x65 NEW_2
	var_714_string = "default"; // 0x67 PushS
	var_715_int = 0; // 0x68 PushI
	var_716_int = 0; // 0x69 PushI
	Blit(var_714_string, var_715_int, var_716_int); // 0x6a Func
	return 6; // 0x6c Return
	
Label_81:
	var_717_float = 0.65; // 0x51 PushF
	var_718_bool = var_4_float < var_717_float; // 0x52 LT
	if(var_718_bool == 0) goto Label_89; // 0x53 JumpB
	var_719_float = 0.5; // 0x54 PushF
	var_720_int = var_4_float - var_719_float; // 0x55 Sub
	var_721_float = 0.15; // 0x56 PushF
	var_8_float = var_720_int / var_720_int; // 0x57 Div2
	goto Label_90; // 0x58 Jump
	
Label_89:
	var_8_float = 1; // 0x59 MovI
}


main(var_0_object, var_1_object, var_2_string, var_3_int, var_4_float)
{
	var_5_bool = 1; // 0x0 PushB
	SetOwnerDraw(var_5_bool); // 0x1 Func
	var_6_bool = 1; // 0x3 PushB
	SetNeedUpdate(var_6_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


func_193(var_116_string, var_117_object)
{
	var_118_int = 0; var_119_string = ""; var_120_int = 0; var_121_string = ""; // 0xc1 PushV
	var_122_int = 0; var_123_object = Obj(); // 0xc2 PushV
	var_123_object = var_117_object; // 0xc3 Mov
	func_109(var_123_object); // 0xc4 NEW_2
	var_120_int = var_122_int; // 0xc5 Mov
	GetInvItemName(var_121_string, var_120_int); // 0xc7 Func
	var_116_string = var_121_string; // 0xc9 Mov
	return 4; // 0xca Return
}


func_353(var_148_int, var_149_int, var_150_int, var_151_int, var_152_float)
{
	var_153_string = "bg"; // 0x162 PushS
	BlitClipped(var_153_string, var_148_int, var_149_int, var_148_int, var_149_int, var_150_int, var_151_int, var_152_float); // 0x163 Func
	var_154_string = "border"; // 0x165 PushS
	var_155_int = 1; // 0x166 PushI
	StretchBlit(var_154_string, var_148_int, var_149_int, var_150_int, var_155_int, var_152_float); // 0x167 Func
	var_156_string = "border"; // 0x169 PushS
	var_157_int = var_149_int + var_151_int; // 0x16a Add
	var_158_int = 1; // 0x16b PushI
	var_159_int = var_157_int - var_158_int; // 0x16c Sub
	var_160_int = 1; // 0x16d PushI
	StretchBlit(var_156_string, var_148_int, var_159_int, var_150_int, var_160_int, var_152_float); // 0x16e Func
	var_161_string = "border"; // 0x170 PushS
	var_162_int = 1; // 0x171 PushI
	StretchBlit(var_161_string, var_148_int, var_149_int, var_162_int, var_151_int, var_152_float); // 0x172 Func
	var_163_string = "border"; // 0x174 PushS
	var_164_int = var_148_int + var_150_int; // 0x175 Add
	var_165_int = 1; // 0x176 PushI
	var_166_int = var_164_int - var_165_int; // 0x177 Sub
	var_167_int = 1; // 0x178 PushI
	StretchBlit(var_163_string, var_166_int, var_149_int, var_167_int, var_151_int, var_152_float); // 0x179 Func
	return 0; // 0x17b Return
}


func_293(var_14_int, var_15_string, var_16_object, var_17_int, var_18_int, var_19_float)
{
	var_20_int = 1; // 0x126 PushI
	var_21_bool = var_14_int == var_20_int; // 0x127 Eq
	if(var_21_bool == 0) goto Label_306; // 0x128 JumpB
	var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_string = ""; var_26_float = 0; // 0x129 PushV
	var_22_int = var_17_int; // 0x12a Mov
	var_23_int = var_18_int; // 0x12b Mov
	var_24_object = var_16_object; // 0x12c Mov
	var_25_string = var_15_string; // 0x12d Mov
	var_26_float = var_19_float; // 0x12e Mov
	func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float); // 0x12f NEW_2
	goto Label_352; // 0x131 Jump
	
Label_352:
	return 0; // 0x160 Return
	
Label_306:
	var_263_int = 2; // 0x132 PushI
	var_264_bool = var_14_int == var_263_int; // 0x133 Eq
	if(var_264_bool == 0) goto Label_317; // 0x134 JumpB
	var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_float = 0; // 0x135 PushV
	var_265_int = var_17_int; // 0x136 Mov
	var_266_int = var_18_int; // 0x137 Mov
	var_267_object = var_16_object; // 0x138 Mov
	var_268_float = var_19_float; // 0x139 Mov
	func_942(var_265_int, var_266_int, var_267_object, var_268_float); // 0x13a NEW_2
	goto Label_352; // 0x13c Jump
	
Label_317:
	var_357_int = 3; // 0x13d PushI
	var_358_bool = var_14_int == var_357_int; // 0x13e Eq
	if(var_358_bool == 0) goto Label_329; // 0x13f JumpB
	var_359_int = 0; var_360_int = 0; var_361_object = Obj(); var_362_bool = 0; var_363_float = 0; // 0x140 PushV
	var_359_int = var_17_int; // 0x141 Mov
	var_360_int = var_18_int; // 0x142 Mov
	var_361_object = var_16_object; // 0x143 Mov
	var_362_bool = 1; // 0x144 MovB
	var_363_float = var_19_float; // 0x145 Mov
	func_665(var_359_int, var_360_int, var_361_object, var_362_bool, var_363_float); // 0x146 NEW_2
	goto Label_352; // 0x148 Jump
	
Label_329:
	var_664_int = 4; // 0x149 PushI
	var_665_bool = var_14_int == var_664_int; // 0x14a Eq
	if(var_665_bool == 0) goto Label_341; // 0x14b JumpB
	var_666_int = 0; var_667_int = 0; var_668_object = Obj(); var_669_bool = 0; var_670_float = 0; // 0x14c PushV
	var_666_int = var_17_int; // 0x14d Mov
	var_667_int = var_18_int; // 0x14e Mov
	var_668_object = var_16_object; // 0x14f Mov
	var_669_bool = 0; // 0x150 MovB
	var_670_float = var_19_float; // 0x151 Mov
	func_665(var_666_int, var_667_int, var_668_object, var_669_bool, var_670_float); // 0x152 NEW_2
	goto Label_352; // 0x154 Jump
	
Label_341:
	var_671_int = 5; // 0x155 PushI
	var_672_bool = var_14_int == var_671_int; // 0x156 Eq
	if(var_672_bool == 0) goto Label_352; // 0x157 JumpB
	var_673_int = 0; var_674_int = 0; var_675_string = ""; var_676_object = Obj(); var_677_float = 0; // 0x158 PushV
	var_673_int = var_17_int; // 0x159 Mov
	var_674_int = var_18_int; // 0x15a Mov
	var_675_string = var_15_string; // 0x15b Mov
	var_676_object = var_16_object; // 0x15c Mov
	var_677_float = var_19_float; // 0x15d Mov
	func_1065(var_674_int, var_675_string, var_676_object, var_677_float); // 0x15e NEW_2
}


func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float)
{
	var_27_int = 0; var_28_string = ""; var_29_string = ""; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_bool = 0; var_41_float = 0; var_42_float = 0; var_43_string = ""; var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_string = ""; var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_string = ""; var_61_string = ""; var_62_string = ""; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_string = ""; var_72_bool = 0; var_73_float = 0; var_74_float = 0; var_75_string = ""; var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_float = 0; var_83_string = ""; var_84_string = ""; var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_int = 0; // 0x1a8 PushV
	var_91_bool = var_24_object == 0; // 0x1a9 Not
	if(var_91_bool == 0) goto Label_428; // 0x1aa JumpB
	return 64; // 0x1ab Return
	
Label_428:
	var_92_int = 0; var_93_object = Obj(); // 0x1ac PushV
	var_93_object = var_24_object; // 0x1ad Mov
	func_109(var_93_object); // 0x1ae NEW_2
	var_59_int = var_92_int; // 0x1af Mov
	var_96_string = "Description"; // 0x1b1 PushS
	HasInvItemProperty(var_63_bool, var_59_int, var_96_string); // 0x1b2 Func
	var_97_bool = var_63_bool; // 0x1b4 Push
	if(var_97_bool == 0) goto Label_444; // 0x1b5 JumpB
	var_98_string = "Description"; // 0x1b6 PushS
	GetInvItemProperty(var_64_int, var_59_int, var_98_string); // 0x1b7 Func
	GetStringByID(var_60_string, var_64_int); // 0x1b9 Func
	goto Label_445; // 0x1bb Jump
	
Label_445:
	var_99_string = "default"; // 0x1bd PushS
	var_100_int = 218; // 0x1be PushI
	GetTextHeightInWidth(var_65_int, var_99_string, var_100_int, var_60_string); // 0x1bf Func
	var_101_string = "default"; // 0x1c1 PushS
	GetFontHeight(var_66_int, var_101_string); // 0x1c2 Func
	var_65_int = var_65_int + var_66_int; // 0x1c4 Add2
	var_102_string = "HasDurability"; // 0x1c5 PushS
	HasInvItemProperty(var_67_bool, var_59_int, var_102_string); // 0x1c6 Func
	var_103_string = "durability"; // 0x1c8 PushS
	HasProperty(var_68_bool, var_103_string); // 0x1c9 ObjFunc
	var_104_bool = 0; // 0x1cb PushV
	var_104_bool = 1; // 0x1cc MovB
	var_105_bool = var_68_bool; // 0x1cd Push
	if(var_105_bool == 0) goto Label_466; // 0x1ce JumpB
	var_106_bool = var_67_bool; // 0x1cf Push
	if(var_106_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_104_bool = 0; // 0x1d1 MovB
	
Label_466:
	if(var_104_bool == 0) goto Label_487; // 0x1d2 JumpB
	var_107_bool = var_68_bool; // 0x1d3 Push
	if(var_107_bool == 0) goto Label_473; // 0x1d4 JumpB
	var_108_string = "durability"; // 0x1d5 PushS
	GetProperty(var_69_int, var_108_string); // 0x1d6 ObjFunc
	goto Label_474; // 0x1d8 Jump
	
Label_474:
	var_109_int = 7; // 0x1da PushI
	GetStringByID(var_61_string, var_109_int); // 0x1db Func
	var_110_string = " "; // 0x1dd PushS
	var_111_int = var_110_string + var_69_int; // 0x1de Add
	var_112_string = "%"; // 0x1df PushS
	var_113_int = var_111_int + var_112_string; // 0x1e0 Add
	var_61_string = var_61_string + var_113_int; // 0x1e1 Add2
	var_114_string = "default"; // 0x1e2 PushS
	var_115_int = 218; // 0x1e3 PushI
	GetTextHeightInWidth(var_70_int, var_114_string, var_115_int, var_61_string); // 0x1e4 Func
	var_65_int = var_65_int + var_70_int; // 0x1e6 Add2
	
Label_487:
	var_72_bool = 0; // 0x1e7 MovB
	var_116_string = ""; var_117_object = Obj(); // 0x1e8 PushV
	var_117_object = var_24_object; // 0x1e9 Mov
	func_193(var_116_string, var_117_object); // 0x1ea NEW_2
	var_124_string = "grass_combination"; // 0x1ec PushS
	var_125_bool = var_116_string == var_124_string; // 0x1ed Eq
	if(var_125_bool == 0) goto Label_529; // 0x1ee JumpB
	var_72_bool = 1; // 0x1ef MovB
	var_126_string = "im_inc"; // 0x1f0 PushS
	GetProperty(var_73_float, var_126_string); // 0x1f1 ObjFunc
	var_127_string = "hl_inc"; // 0x1f3 PushS
	GetProperty(var_74_float, var_127_string); // 0x1f4 ObjFunc
	var_128_int = 8; // 0x1f6 PushI
	GetStringByID(var_75_string, var_128_int); // 0x1f7 Func
	var_129_int = 9; // 0x1f9 PushI
	GetStringByID(var_76_string, var_129_int); // 0x1fa Func
	var_130_int = 100; // 0x1fc PushI
	var_77_int = var_73_float * var_130_int; // 0x1fd Mult2
	var_131_string = " "; // 0x1fe PushS
	var_132_int = var_75_string + var_131_string; // 0x1ff Add
	var_133_int = var_132_int + var_77_int; // 0x200 Add
	var_134_string = "%
"; // 0x201 PushS
	var_71_string = var_133_int + var_134_string; // 0x202 Add2
	var_135_int = 100; // 0x203 PushI
	var_77_int = var_74_float * var_135_int; // 0x204 Mult2
	var_136_string = " "; // 0x205 PushS
	var_137_int = var_76_string + var_136_string; // 0x206 Add
	var_138_int = var_137_int + var_77_int; // 0x207 Add
	var_139_string = "%
"; // 0x208 PushS
	var_140_int = var_138_int + var_139_string; // 0x209 Add
	var_71_string = var_71_string + var_140_int; // 0x20a Add2
	var_141_string = "default"; // 0x20b PushS
	var_142_int = 218; // 0x20c PushI
	GetTextHeightInWidth(var_78_int, var_141_string, var_142_int, var_71_string); // 0x20d Func
	var_65_int = var_65_int + var_78_int; // 0x20f Add2
	goto Label_569; // 0x210 Jump
	
Label_569:
	GetScreenSize(var_87_int, var_88_int); // 0x239 Func
	var_143_int = 266; // 0x23b PushI
	var_65_int = var_65_int + var_143_int; // 0x23c Add2
	var_144_int = var_87_int - var_22_int; // 0x23d Sub
	var_145_int = 250; // 0x23e PushI
	var_146_bool = var_144_int > var_145_int; // 0x23f GT
	if(var_146_bool == 0) goto Label_579; // 0x240 JumpB
	var_89_int = var_22_int; // 0x241 Mov
	goto Label_581; // 0x242 Jump
	
Label_581:
	var_147_bool = var_23_int > var_65_int; // 0x245 GT
	if(var_147_bool == 0) goto Label_585; // 0x246 JumpB
	var_90_int = var_23_int - var_65_int; // 0x247 Sub2
	goto Label_592; // 0x248 Jump
	
Label_592:
	ScreenToClient(var_89_int, var_90_int); // 0x250 Func
	var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_float = 0; // 0x252 PushV
	var_148_int = var_89_int; // 0x253 Mov
	var_149_int = var_90_int; // 0x254 Mov
	var_150_int = 250; // 0x255 MovI
	var_151_int = var_65_int; // 0x256 Mov
	var_152_float = var_26_float; // 0x257 Mov
	func_353(var_148_int, var_149_int, var_150_int, var_151_int, var_152_float); // 0x258 NEW_2
	var_168_int = 0; var_169_int = 0; var_170_object = Obj(); var_171_float = 0; // 0x25a PushV
	var_172_int = 16; // 0x25b PushI
	var_168_int = var_89_int + var_172_int; // 0x25c Add2
	var_173_int = 16; // 0x25d PushI
	var_169_int = var_90_int + var_173_int; // 0x25e Add2
	var_170_object = var_24_object; // 0x25f Mov
	var_171_float = var_26_float; // 0x260 Mov
	func_380(var_168_int, var_169_int, var_170_object, var_171_float); // 0x261 NEW_2
	var_203_int = 250; // 0x263 PushI
	var_90_int = var_90_int + var_203_int; // 0x264 Add2
	var_204_string = "default"; // 0x265 PushS
	var_205_int = 16; // 0x266 PushI
	var_206_int = var_89_int + var_205_int; // 0x267 Add
	var_207_int = 218; // 0x268 PushI
	var_208_float = 0.64706; // 0x269 PushF
	var_209_float = 0.64706; // 0x26a PushF
	var_210_float = 0.64706; // 0x26b PushF
	PrintInWidth(var_65_int, var_204_string, var_206_int, var_90_int, var_207_int, var_60_string, var_208_float, var_209_float, var_210_float, var_26_float); // 0x26c Func
	var_211_int = var_65_int + var_66_int; // 0x26e Add
	var_90_int = var_90_int + var_211_int; // 0x26f Add2
	var_212_bool = 0; // 0x270 PushV
	var_212_bool = 1; // 0x271 MovB
	var_213_bool = var_68_bool; // 0x272 Push
	if(var_213_bool == 0) goto Label_631; // 0x273 JumpB
	var_214_bool = var_67_bool; // 0x274 Push
	if(var_214_bool == 0) goto Label_631; // 0x275 JumpB
	var_212_bool = 0; // 0x276 MovB
	
Label_631:
	if(var_212_bool == 0) goto Label_642; // 0x277 JumpB
	var_215_string = "default"; // 0x278 PushS
	var_216_int = 16; // 0x279 PushI
	var_217_int = var_89_int + var_216_int; // 0x27a Add
	var_218_int = 218; // 0x27b PushI
	var_219_float = 0.64706; // 0x27c PushF
	var_220_float = 0.64706; // 0x27d PushF
	var_221_float = 0.64706; // 0x27e PushF
	PrintInWidth(var_65_int, var_215_string, var_217_int, var_90_int, var_218_int, var_61_string, var_219_float, var_220_float, var_221_float, var_26_float); // 0x27f Func
	var_90_int = var_90_int + var_65_int; // 0x281 Add2
	
Label_642:
	var_222_bool = var_72_bool; // 0x282 Push
	if(var_222_bool == 0) goto Label_654; // 0x283 JumpB
	var_223_string = "default"; // 0x284 PushS
	var_224_int = 16; // 0x285 PushI
	var_225_int = var_89_int + var_224_int; // 0x286 Add
	var_226_int = 218; // 0x287 PushI
	var_227_float = 0.64706; // 0x288 PushF
	var_228_float = 0.64706; // 0x289 PushF
	var_229_float = 0.64706; // 0x28a PushF
	PrintInWidth(var_65_int, var_223_string, var_225_int, var_90_int, var_226_int, var_71_string, var_227_float, var_228_float, var_229_float, var_26_float); // 0x28b Func
	var_90_int = var_90_int + var_65_int; // 0x28d Add2
	
Label_654:
	var_230_string = "default"; // 0x28e PushS
	var_231_int = 16; // 0x28f PushI
	var_232_int = var_89_int + var_231_int; // 0x290 Add
	var_233_int = 218; // 0x291 PushI
	var_234_float = 0.64706; // 0x292 PushF
	var_235_float = 0.64706; // 0x293 PushF
	var_236_float = 0.64706; // 0x294 PushF
	PrintInWidth(var_65_int, var_230_string, var_232_int, var_90_int, var_233_int, var_25_string, var_234_float, var_235_float, var_236_float, var_26_float); // 0x295 Func
	var_90_int = var_90_int + var_65_int; // 0x297 Add2
	return 64; // 0x298 Return
	
Label_585:
	var_90_int = var_23_int; // 0x249 Mov
	var_237_int = var_90_int + var_65_int; // 0x24a Add
	var_238_int = 600; // 0x24b PushI
	var_239_bool = var_237_int > var_238_int; // 0x24c GT
	if(var_239_bool == 0) goto Label_592; // 0x24d JumpB
	var_240_int = 600; // 0x24e PushI
	var_90_int = var_240_int - var_65_int; // 0x24f Sub2
	
Label_579:
	var_241_int = 250; // 0x243 PushI
	var_89_int = var_22_int - var_241_int; // 0x244 Sub2
	
Label_529:
	var_242_string = ""; var_243_object = Obj(); // 0x211 PushV
	var_243_object = var_24_object; // 0x212 Mov
	func_193(var_242_string, var_243_object); // 0x213 NEW_2
	var_244_string = "organ_combination"; // 0x215 PushS
	var_245_bool = var_242_string == var_244_string; // 0x216 Eq
	if(var_245_bool == 0) goto Label_569; // 0x217 JumpB
	var_72_bool = 1; // 0x218 MovB
	var_246_string = "DiseaseRate"; // 0x219 PushS
	GetProperty(var_79_float, var_246_string); // 0x21a ObjFunc
	var_247_string = "HealthIncrease"; // 0x21c PushS
	GetProperty(var_81_float, var_247_string); // 0x21d ObjFunc
	var_248_int = 11; // 0x21f PushI
	GetStringByID(var_83_string, var_248_int); // 0x220 Func
	var_249_int = 13; // 0x222 PushI
	GetStringByID(var_84_string, var_249_int); // 0x223 Func
	var_250_int = 100; // 0x225 PushI
	var_85_int = var_79_float * var_250_int; // 0x226 Mult2
	var_251_string = " "; // 0x227 PushS
	var_252_int = var_83_string + var_251_string; // 0x228 Add
	var_253_int = var_252_int + var_85_int; // 0x229 Add
	var_254_string = "%
"; // 0x22a PushS
	var_71_string = var_253_int + var_254_string; // 0x22b Add2
	var_255_int = 100; // 0x22c PushI
	var_85_int = var_81_float * var_255_int; // 0x22d Mult2
	var_256_string = " "; // 0x22e PushS
	var_257_int = var_84_string + var_256_string; // 0x22f Add
	var_258_int = var_257_int + var_85_int; // 0x230 Add
	var_259_string = "%
"; // 0x231 PushS
	var_260_int = var_258_int + var_259_string; // 0x232 Add
	var_71_string = var_71_string + var_260_int; // 0x233 Add2
	var_261_string = "default"; // 0x234 PushS
	var_262_int = 218; // 0x235 PushI
	GetTextHeightInWidth(var_86_int, var_261_string, var_262_int, var_71_string); // 0x236 Func
	var_65_int = var_65_int + var_86_int; // 0x238 Add2
	
Label_473:
	var_69_int = 100; // 0x1d9 MovI
	
Label_444:
	var_60_string = "Error: Item doesnt have description (FIXME!)"; // 0x1bc MovS
}


func_1065(var_673_int, var_674_int, var_675_string, var_677_float)
{
	var_678_int = 0; var_679_int = 0; var_680_int = 0; var_681_int = 0; var_682_int = 0; var_683_int = 0; var_684_int = 0; var_685_int = 0; var_686_int = 0; var_687_int = 0; // 0x429 PushV
	var_677_float = 1; // 0x42a MovI
	var_688_string = "default"; // 0x42b PushS
	var_689_int = 218; // 0x42c PushI
	GetTextHeightInWidth(var_683_int, var_688_string, var_689_int, var_675_string); // 0x42d Func
	var_690_int = 32; // 0x42f PushI
	var_683_int = var_683_int + var_690_int; // 0x430 Add2
	GetScreenSize(var_684_int, var_685_int); // 0x431 Func
	var_691_int = var_684_int - var_673_int; // 0x433 Sub
	var_692_int = 250; // 0x434 PushI
	var_693_bool = var_691_int > var_692_int; // 0x435 GT
	if(var_693_bool == 0) goto Label_1081; // 0x436 JumpB
	var_686_int = var_673_int; // 0x437 Mov
	goto Label_1083; // 0x438 Jump
	
Label_1083:
	var_694_bool = var_674_int > var_683_int; // 0x43b GT
	if(var_694_bool == 0) goto Label_1087; // 0x43c JumpB
	var_687_int = var_674_int - var_683_int; // 0x43d Sub2
	goto Label_1094; // 0x43e Jump
	
Label_1094:
	ScreenToClient(var_686_int, var_687_int); // 0x446 Func
	var_695_int = 0; var_696_int = 0; var_697_int = 0; var_698_int = 0; var_699_float = 0; // 0x448 PushV
	var_695_int = var_686_int; // 0x449 Mov
	var_696_int = var_687_int; // 0x44a Mov
	var_697_int = 250; // 0x44b MovI
	var_698_int = var_683_int; // 0x44c Mov
	var_699_float = var_677_float; // 0x44d Mov
	func_353(var_695_int, var_696_int, var_697_int, var_698_int, var_699_float); // 0x44e NEW_2
	var_700_string = "default"; // 0x450 PushS
	var_701_int = 16; // 0x451 PushI
	var_702_int = var_686_int + var_701_int; // 0x452 Add
	var_703_int = 16; // 0x453 PushI
	var_704_int = var_687_int + var_703_int; // 0x454 Add
	var_705_int = 218; // 0x455 PushI
	var_706_float = 0.64706; // 0x456 PushF
	var_707_float = 0.64706; // 0x457 PushF
	var_708_float = 0.64706; // 0x458 PushF
	PrintInWidth(var_683_int, var_700_string, var_702_int, var_704_int, var_705_int, var_675_string, var_706_float, var_707_float, var_708_float, var_677_float); // 0x459 Func
	return 10; // 0x45b Return
	
Label_1087:
	var_687_int = var_674_int; // 0x43f Mov
	var_709_int = var_687_int + var_683_int; // 0x440 Add
	var_710_int = 600; // 0x441 PushI
	var_711_bool = var_709_int > var_710_int; // 0x442 GT
	if(var_711_bool == 0) goto Label_1094; // 0x443 JumpB
	var_712_int = 600; // 0x444 PushI
	var_687_int = var_712_int - var_683_int; // 0x445 Sub2
	
Label_1081:
	var_713_int = 250; // 0x439 PushI
	var_686_int = var_673_int - var_713_int; // 0x43a Sub2
}


func_264(var_443_int)
{
	var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; // 0x108 PushV
	GetContainer(var_447_object); // 0x109 Func
	var_450_string = "barter"; // 0x10b PushS
	HasProperty(var_450_string, var_448_bool); // 0x10c ObjFunc
	var_451_bool = var_448_bool == 0; // 0x10e Not
	if(var_451_bool == 0) goto Label_274; // 0x10f JumpB
	var_443_int = 0; // 0x110 MovI
	return 6; // 0x111 Return
	
Label_274:
	var_452_string = "barter"; // 0x112 PushS
	GetProperty(var_452_string, var_449_int); // 0x113 ObjFunc
	var_443_int = var_449_int; // 0x115 Mov
	return 6; // 0x116 Return
}


func_203(var_473_int)
{
	var_474_float = 0; var_475_float = 0; // 0xcb PushV
	GetGameTime(var_475_float); // 0xcc Func
	var_476_int = 1; // 0xce PushI
	var_477_int = 0; // 0xcf PushV
	var_478_int = 24; // 0xd0 PushI
	var_477_int = var_475_float / var_475_float; // 0xd1 Div2
	var_473_int = var_476_int + var_477_int; // 0xd2 Add2
	return 2; // 0xd3 Return
}


func_109(var_92_int)
{
	var_94_int = 0; var_95_int = 0; // 0x6d PushV
	GetItemID(var_95_int); // 0x6e ObjFunc
	var_92_int = var_95_int; // 0x70 Mov
	return 2; // 0x71 Return
}


func_942(var_265_int, var_266_int, var_267_object, var_268_float)
{
	var_269_int = 0; var_270_object = Obj(); var_271_string = ""; var_272_string = ""; var_273_int = 0; var_274_int = 0; var_275_float = 0; var_276_int = 0; var_277_float = 0; var_278_float = 0; var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0; var_283_int = 0; var_284_int = 0; var_285_int = 0; var_286_int = 0; var_287_object = Obj(); var_288_string = ""; var_289_string = ""; var_290_int = 0; var_291_int = 0; var_292_float = 0; var_293_int = 0; var_294_float = 0; var_295_float = 0; var_296_int = 0; var_297_int = 0; var_298_int = 0; var_299_int = 0; var_300_int = 0; var_301_int = 0; var_302_int = 0; // 0x3ae PushV
	var_303_bool = var_267_object == 0; // 0x3af Not
	if(var_303_bool == 0) goto Label_946; // 0x3b0 JumpB
	return 34; // 0x3b1 Return
	
Label_946:
	var_268_float = 1; // 0x3b2 MovI
	size(var_286_int); // 0x3b3 ObjFunc
	var_304_bool = var_286_int == 0; // 0x3b5 Not
	if(var_304_bool == 0) goto Label_952; // 0x3b6 JumpB
	return 34; // 0x3b7 Return
	
Label_952:
	var_305_int = var_286_int; // 0x3b8 Push
	if(var_305_int == 0) goto Label_1015; // 0x3b9 JumpB
	var_291_int = 0; // 0x3ba MovI
	var_292_float = 0; // 0x3bb MovI
	var_293_int = 0; // 0x3bc MovI
	
Label_957:
	var_306_bool = var_293_int < var_286_int; // 0x3bd LT
	if(var_306_bool == 0) goto Label_970; // 0x3be JumpB
	get(var_287_object, var_293_int); // 0x3bf ObjFunc
	GetTime(var_294_float); // 0x3c1 ObjFunc
	var_307_bool = var_294_float > var_292_float; // 0x3c3 GT
	if(var_307_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_292_float = var_294_float; // 0x3c5 Mov
	var_291_int = var_293_int; // 0x3c6 Mov
	
Label_967:
	var_308_int = 1; // 0x3c7 PushI
	var_293_int = var_293_int + var_308_int; // 0x3c8 Add2
	goto Label_957; // 0x3c9 Jump
	
Label_970:
	get(var_287_object, var_291_int); // 0x3ca ObjFunc
	GetTextID(var_290_int); // 0x3cc ObjFunc
	GetStringByID(var_289_string, var_290_int); // 0x3ce Func
	GetTime(var_295_float); // 0x3d0 ObjFunc
	var_309_int = 0; // 0x3d2 PushV
	var_309_int = var_295_float; // 0x3d3 Mov
	var_296_int = var_309_int; // 0x3d4 Mov
	var_310_int = 60; // 0x3d6 PushI
	var_311_int = var_295_float - var_296_int; // 0x3d7 Sub
	var_297_int = var_310_int * var_311_int; // 0x3d8 Mult2
	var_312_int = 10; // 0x3d9 PushI
	var_313_bool = var_297_int < var_312_int; // 0x3da LT
	if(var_313_bool == 0) goto Label_997; // 0x3db JumpB
	var_314_int = 24; // 0x3dc PushI
	var_315_int = var_296_int / var_314_int; // 0x3dd Mod
	var_316_string = ":0"; // 0x3de PushS
	var_317_int = var_315_int + var_316_string; // 0x3df Add
	var_318_int = var_317_int + var_297_int; // 0x3e0 Add
	var_319_string = " "; // 0x3e1 PushS
	var_320_int = var_318_int + var_319_string; // 0x3e2 Add
	var_288_string = var_288_string + var_320_int; // 0x3e3 Add2
	goto Label_1005; // 0x3e4 Jump
	
Label_1005:
	var_288_string = var_288_string + var_289_string; // 0x3ed Add2
	remove(var_291_int); // 0x3ee ObjFunc
	var_321_int = -1; // 0x3f0 PushI
	var_286_int = var_286_int + var_321_int; // 0x3f1 Add2
	var_322_int = var_286_int; // 0x3f2 Push
	if(var_322_int == 0) goto Label_1014; // 0x3f3 JumpB
	var_323_string = "

"; // 0x3f4 PushS
	var_288_string = var_288_string + var_323_string; // 0x3f5 Add2
	
Label_1014:
	goto Label_952; // 0x3f6 Jump
	
Label_997:
	var_324_int = 24; // 0x3e5 PushI
	var_325_int = var_296_int / var_324_int; // 0x3e6 Mod
	var_326_string = ":"; // 0x3e7 PushS
	var_327_int = var_325_int + var_326_string; // 0x3e8 Add
	var_328_int = var_327_int + var_297_int; // 0x3e9 Add
	var_329_string = " "; // 0x3ea PushS
	var_330_int = var_328_int + var_329_string; // 0x3eb Add
	var_288_string = var_288_string + var_330_int; // 0x3ec Add2
	
Label_1015:
	var_331_string = "default"; // 0x3f7 PushS
	var_332_int = 218; // 0x3f8 PushI
	GetTextHeightInWidth(var_298_int, var_331_string, var_332_int, var_288_string); // 0x3f9 Func
	var_333_int = 32; // 0x3fb PushI
	var_298_int = var_298_int + var_333_int; // 0x3fc Add2
	GetScreenSize(var_299_int, var_300_int); // 0x3fd Func
	var_334_int = var_299_int - var_265_int; // 0x3ff Sub
	var_335_int = 250; // 0x400 PushI
	var_336_bool = var_334_int > var_335_int; // 0x401 GT
	if(var_336_bool == 0) goto Label_1029; // 0x402 JumpB
	var_301_int = var_265_int; // 0x403 Mov
	goto Label_1031; // 0x404 Jump
	
Label_1031:
	var_337_bool = var_266_int > var_298_int; // 0x407 GT
	if(var_337_bool == 0) goto Label_1035; // 0x408 JumpB
	var_302_int = var_266_int - var_298_int; // 0x409 Sub2
	goto Label_1042; // 0x40a Jump
	
Label_1042:
	ScreenToClient(var_301_int, var_302_int); // 0x412 Func
	var_338_int = 0; var_339_int = 0; var_340_int = 0; var_341_int = 0; var_342_float = 0; // 0x414 PushV
	var_338_int = var_301_int; // 0x415 Mov
	var_339_int = var_302_int; // 0x416 Mov
	var_340_int = 250; // 0x417 MovI
	var_341_int = var_298_int; // 0x418 Mov
	var_342_float = var_268_float; // 0x419 Mov
	func_353(var_338_int, var_339_int, var_340_int, var_341_int, var_342_float); // 0x41a NEW_2
	var_343_string = "default"; // 0x41c PushS
	var_344_int = 16; // 0x41d PushI
	var_345_int = var_301_int + var_344_int; // 0x41e Add
	var_346_int = 16; // 0x41f PushI
	var_347_int = var_302_int + var_346_int; // 0x420 Add
	var_348_int = 218; // 0x421 PushI
	var_349_float = 0.64706; // 0x422 PushF
	var_350_float = 0.64706; // 0x423 PushF
	var_351_float = 0.64706; // 0x424 PushF
	PrintInWidth(var_298_int, var_343_string, var_345_int, var_347_int, var_348_int, var_288_string, var_349_float, var_350_float, var_351_float, var_268_float); // 0x425 Func
	return 34; // 0x427 Return
	
Label_1035:
	var_302_int = var_266_int; // 0x40b Mov
	var_352_int = var_302_int + var_298_int; // 0x40c Add
	var_353_int = 600; // 0x40d PushI
	var_354_bool = var_352_int > var_353_int; // 0x40e GT
	if(var_354_bool == 0) goto Label_1042; // 0x40f JumpB
	var_355_int = 600; // 0x410 PushI
	var_302_int = var_355_int - var_298_int; // 0x411 Sub2
	
Label_1029:
	var_356_int = 250; // 0x405 PushI
	var_301_int = var_265_int - var_356_int; // 0x406 Sub2
}


func_238(var_643_float, var_645_int, var_646_int)
{
	var_648_float = 0; var_649_int = 0; var_650_bool = 0; var_651_float = 0; var_652_int = 0; var_653_bool = 0; // 0xee PushV
	var_654_int = 0; // 0xef PushI
	var_655_bool = var_646_int != var_654_int; // 0xf0 Neq
	if(var_655_bool == 0) goto Label_244; // 0xf1 JumpB
	var_643_float = 1; // 0xf2 MovI
	return 6; // 0xf3 Return
	
Label_244:
	var_651_float = 1; // 0xf4 MovI
	var_652_int = 1; // 0xf5 MovI
	
Label_246:
	var_656_bool = var_652_int <= var_645_int; // 0xf6 LE
	if(var_656_bool == 0) goto Label_261; // 0xf7 JumpB
	var_657_string = "buyf"; // 0xf8 PushS
	var_658_int = var_657_string + var_652_int; // 0xf9 Add
	HasProperty(var_658_int, var_653_bool); // 0xfa ObjFunc
	var_659_bool = var_653_bool; // 0xfc Push
	if(var_659_bool == 0) goto Label_258; // 0xfd JumpB
	var_660_string = "buyf"; // 0xfe PushS
	var_661_int = var_660_string + var_652_int; // 0xff Add
	GetProperty(var_661_int, var_651_float); // 0x100 ObjFunc
	
Label_258:
	var_662_int = 1; // 0x102 PushI
	var_652_int = var_652_int + var_662_int; // 0x103 Add2
	goto Label_246; // 0x104 Jump
	
Label_261:
	var_663_int = 100; // 0x105 PushI
	var_643_float = var_651_float / var_651_float; // 0x106 Div2
	return 6; // 0x107 Return
}


func_114(var_440_int, var_441_object, var_442_int)
{
	var_453_int = 0; var_454_int = 0; var_455_int = 0; var_456_string = ""; var_457_bool = 0; var_458_bool = 0; var_459_int = 0; var_460_bool = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_string = ""; var_466_bool = 0; var_467_bool = 0; var_468_int = 0; var_469_bool = 0; var_470_int = 0; // 0x72 PushV
	var_471_int = 0; // 0x73 PushI
	var_472_bool = var_442_int == var_471_int; // 0x74 Eq
	if(var_472_bool == 0) goto Label_166; // 0x75 JumpB
	var_473_int = 0; // 0x76 PushV
	func_203(var_473_int); // 0x77 NEW_2
	var_462_int = var_473_int; // 0x78 Mov
	var_463_int = 0; // 0x7a MovI
	var_464_int = 1; // 0x7b MovI
	
Label_124:
	var_479_bool = var_464_int <= var_462_int; // 0x7c LE
	if(var_479_bool == 0) goto Label_149; // 0x7d JumpB
	var_465_string = "Price"; // 0x7e MovS
	var_480_int = 1; // 0x7f PushI
	var_481_bool = var_464_int != var_480_int; // 0x80 Neq
	if(var_481_bool == 0) goto Label_131; // 0x81 JumpB
	var_465_string = var_465_string + var_464_int; // 0x82 Add2
	
Label_131:
	var_482_int = 0; var_483_object = Obj(); // 0x83 PushV
	var_483_object = var_441_object; // 0x84 Mov
	func_109(var_483_object); // 0x85 NEW_2
	HasInvItemProperty(var_466_bool, var_482_int, var_465_string); // 0x87 Func
	var_484_bool = var_466_bool == 0; // 0x89 Not
	if(var_484_bool == 0) goto Label_140; // 0x8a JumpB
	goto Label_146; // 0x8b Jump
	
Label_146:
	var_485_int = 1; // 0x92 PushI
	var_464_int = var_464_int + var_485_int; // 0x93 Add2
	goto Label_124; // 0x94 Jump
	
Label_140:
	var_486_int = 0; var_487_object = Obj(); // 0x8c PushV
	var_487_object = var_441_object; // 0x8d Mov
	func_109(var_487_object); // 0x8e NEW_2
	GetInvItemProperty(var_463_int, var_486_int, var_465_string); // 0x90 Func
	
Label_149:
	var_488_string = "durability"; // 0x95 PushS
	HasProperty(var_467_bool, var_488_string); // 0x96 ObjFunc
	var_489_bool = var_467_bool; // 0x98 Push
	if(var_489_bool == 0) goto Label_164; // 0x99 JumpB
	var_490_string = "durability"; // 0x9a PushS
	GetProperty(var_468_int, var_490_string); // 0x9b ObjFunc
	var_491_float = 0.5; // 0x9d PushF
	var_492_float = 1.0; // 0x9e PushF
	var_493_float = 100.0; // 0x9f PushF
	var_494_float = var_468_int / var_493_float; // 0xa0 Div
	var_495_int = var_492_float + var_494_float; // 0xa1 Add
	var_496_float = var_491_float * var_495_int; // 0xa2 Mult
	var_463_int = var_463_int * var_496_float; // 0xa3 Mult2
	
Label_164:
	var_440_int = var_463_int; // 0xa4 Mov
	return 18; // 0xa5 Return
	
Label_166:
	var_497_int = 0; var_498_object = Obj(); // 0xa6 PushV
	var_498_object = var_441_object; // 0xa7 Mov
	func_109(var_498_object); // 0xa8 NEW_2
	var_499_string = "BarterPrice"; // 0xaa PushS
	var_500_int = var_499_string + var_442_int; // 0xab Add
	HasInvItemProperty(var_469_bool, var_497_int, var_500_int); // 0xac Func
	var_501_bool = var_469_bool == 0; // 0xae Not
	if(var_501_bool == 0) goto Label_178; // 0xaf JumpB
	var_440_int = 0; // 0xb0 MovI
	return 18; // 0xb1 Return
	
Label_178:
	var_502_int = 0; var_503_object = Obj(); // 0xb2 PushV
	var_503_object = var_441_object; // 0xb3 Mov
	func_109(var_503_object); // 0xb4 NEW_2
	var_504_string = "BarterPrice"; // 0xb6 PushS
	var_505_int = var_504_string + var_442_int; // 0xb7 Add
	GetInvItemProperty(var_470_int, var_502_int, var_505_int); // 0xb8 Func
	var_506_int = 0; // 0xba PushI
	var_507_bool = var_470_int > var_506_int; // 0xbb GT
	if(var_507_bool == 0) goto Label_191; // 0xbc JumpB
	var_440_int = var_470_int; // 0xbd Mov
	return 18; // 0xbe Return
	
Label_191:
	var_440_int = -var_470_int; // 0xbf Neg2
	return 18; // 0xc0 Return
}


func_212(var_509_float, var_511_int, var_512_int)
{
	var_514_float = 0; var_515_int = 0; var_516_bool = 0; var_517_float = 0; var_518_int = 0; var_519_bool = 0; // 0xd4 PushV
	var_520_int = 0; // 0xd5 PushI
	var_521_bool = var_512_int != var_520_int; // 0xd6 Neq
	if(var_521_bool == 0) goto Label_218; // 0xd7 JumpB
	var_509_float = 1; // 0xd8 MovI
	return 6; // 0xd9 Return
	
Label_218:
	var_517_float = 1; // 0xda MovI
	var_518_int = 1; // 0xdb MovI
	
Label_220:
	var_522_bool = var_518_int <= var_511_int; // 0xdc LE
	if(var_522_bool == 0) goto Label_235; // 0xdd JumpB
	var_523_string = "sellf"; // 0xde PushS
	var_524_int = var_523_string + var_518_int; // 0xdf Add
	HasProperty(var_524_int, var_519_bool); // 0xe0 ObjFunc
	var_525_bool = var_519_bool; // 0xe2 Push
	if(var_525_bool == 0) goto Label_232; // 0xe3 JumpB
	var_526_string = "sellf"; // 0xe4 PushS
	var_527_int = var_526_string + var_518_int; // 0xe5 Add
	GetProperty(var_527_int, var_517_float); // 0xe6 ObjFunc
	
Label_232:
	var_528_int = 1; // 0xe8 PushI
	var_518_int = var_518_int + var_528_int; // 0xe9 Add2
	goto Label_220; // 0xea Jump
	
Label_235:
	var_529_int = 100; // 0xeb PushI
	var_509_float = var_517_float / var_517_float; // 0xec Div2
	return 6; // 0xed Return
}


func_280(var_44_object)
{
	var_45_int = 0; var_46_string = ""; var_47_int = 0; var_48_string = ""; // 0x118 PushV
	var_49_object = var_44_object; // 0x119 Push
	if(var_49_object == 0) goto Label_292; // 0x11a JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x11b PushV
	var_51_object = var_44_object; // 0x11c Mov
	func_109(var_51_object); // 0x11d NEW_2
	var_47_int = var_50_int; // 0x11e Mov
	GetInvItemSprite2(var_48_string, var_47_int); // 0x120 Func
	LoadImage(var_48_string); // 0x122 Func
	
Label_292:
	return 4; // 0x124 Return
}


func_665(var_359_int, var_360_int, var_361_object, var_362_bool, var_363_float)
{
	var_364_object = Obj(); var_365_float = 0; var_366_int = 0; var_367_int = 0; var_368_int = 0; var_369_float = 0; var_370_string = ""; var_371_bool = 0; var_372_int = 0; var_373_string = ""; var_374_int = 0; var_375_string = ""; var_376_bool = 0; var_377_bool = 0; var_378_int = 0; var_379_int = 0; var_380_string = ""; var_381_bool = 0; var_382_float = 0; var_383_float = 0; var_384_float = 0; var_385_string = ""; var_386_string = ""; var_387_int = 0; var_388_int = 0; var_389_float = 0; var_390_float = 0; var_391_string = ""; var_392_string = ""; var_393_int = 0; var_394_int = 0; var_395_int = 0; var_396_int = 0; var_397_int = 0; var_398_int = 0; var_399_object = Obj(); var_400_float = 0; var_401_int = 0; var_402_int = 0; var_403_int = 0; var_404_float = 0; var_405_string = ""; var_406_bool = 0; var_407_int = 0; var_408_string = ""; var_409_int = 0; var_410_string = ""; var_411_bool = 0; var_412_bool = 0; var_413_int = 0; var_414_int = 0; var_415_string = ""; var_416_bool = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_string = ""; var_421_string = ""; var_422_int = 0; var_423_int = 0; var_424_float = 0; var_425_float = 0; var_426_string = ""; var_427_string = ""; var_428_int = 0; var_429_int = 0; var_430_int = 0; var_431_int = 0; var_432_int = 0; var_433_int = 0; // 0x299 PushV
	var_434_bool = var_361_object == 0; // 0x29a Not
	if(var_434_bool == 0) goto Label_669; // 0x29b JumpB
	return 70; // 0x29c Return
	
Label_669:
	GetContainer(var_399_object); // 0x29d Func
	GetGameTime(var_400_float); // 0x29f Func
	var_435_int = 1; // 0x2a1 PushI
	var_436_int = 24; // 0x2a2 PushI
	var_437_float = var_400_float / var_436_int; // 0x2a3 Div
	var_401_int = var_435_int + var_437_float; // 0x2a4 Add2
	var_438_int = 0; var_439_object = Obj(); // 0x2a5 PushV
	var_439_object = var_361_object; // 0x2a6 Mov
	func_109(var_439_object); // 0x2a7 NEW_2
	var_402_int = var_438_int; // 0x2a8 Mov
	var_440_int = 0; var_441_object = Obj(); var_442_int = 0; // 0x2aa PushV
	var_441_object = var_361_object; // 0x2ab Mov
	var_443_int = 0; // 0x2ac PushV
	func_264(var_443_int); // 0x2ad NEW_2
	var_442_int = var_443_int; // 0x2ae Mov
	func_114(var_440_int, var_441_object, var_442_int); // 0x2b0 NEW_2
	var_403_int = var_440_int; // 0x2b1 Mov
	var_508_bool = var_362_bool; // 0x2b3 Push
	if(var_508_bool == 0) goto Label_704; // 0x2b4 JumpB
	var_509_float = 0; var_510_object = Obj(); var_511_int = 0; var_512_int = 0; // 0x2b5 PushV
	var_510_object = var_399_object; // 0x2b6 Mov
	var_511_int = var_401_int; // 0x2b7 Mov
	var_513_int = 0; // 0x2b8 PushV
	func_264(var_513_int); // 0x2b9 NEW_2
	var_512_int = var_513_int; // 0x2ba Mov
	func_212(var_510_object, var_511_int, var_512_int); // 0x2bc NEW_2
	var_404_float = var_509_float; // 0x2bd Mov
	goto Label_714; // 0x2bf Jump
	
Label_714:
	var_403_int = var_403_int * var_404_float; // 0x2ca Mult2
	var_530_string = "Description"; // 0x2cb PushS
	HasInvItemProperty(var_406_bool, var_402_int, var_530_string); // 0x2cc Func
	var_531_bool = var_406_bool; // 0x2ce Push
	if(var_531_bool == 0) goto Label_726; // 0x2cf JumpB
	var_532_string = "Description"; // 0x2d0 PushS
	GetInvItemProperty(var_407_int, var_402_int, var_532_string); // 0x2d1 Func
	GetStringByID(var_405_string, var_407_int); // 0x2d3 Func
	goto Label_727; // 0x2d5 Jump
	
Label_727:
	var_533_string = "
"; // 0x2d7 PushS
	var_405_string = var_405_string + var_533_string; // 0x2d8 Add2
	var_534_int = 5; // 0x2d9 PushI
	GetStringByID(var_408_string, var_534_int); // 0x2da Func
	var_535_string = ": "; // 0x2dc PushS
	var_536_int = var_408_string + var_535_string; // 0x2dd Add
	var_537_int = var_536_int + var_403_int; // 0x2de Add
	var_405_string = var_405_string + var_537_int; // 0x2df Add2
	var_538_string = "default"; // 0x2e0 PushS
	var_539_int = 218; // 0x2e1 PushI
	GetTextHeightInWidth(var_409_int, var_538_string, var_539_int, var_405_string); // 0x2e2 Func
	var_540_int = 266; // 0x2e4 PushI
	var_409_int = var_409_int + var_540_int; // 0x2e5 Add2
	var_541_string = "HasDurability"; // 0x2e6 PushS
	HasInvItemProperty(var_411_bool, var_402_int, var_541_string); // 0x2e7 Func
	var_542_string = "durability"; // 0x2e9 PushS
	HasProperty(var_412_bool, var_542_string); // 0x2ea ObjFunc
	var_543_bool = 0; // 0x2ec PushV
	var_543_bool = 1; // 0x2ed MovB
	var_544_bool = var_412_bool; // 0x2ee Push
	if(var_544_bool == 0) goto Label_755; // 0x2ef JumpB
	var_545_bool = var_411_bool; // 0x2f0 Push
	if(var_545_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_543_bool = 0; // 0x2f2 MovB
	
Label_755:
	if(var_543_bool == 0) goto Label_776; // 0x2f3 JumpB
	var_546_bool = var_412_bool; // 0x2f4 Push
	if(var_546_bool == 0) goto Label_762; // 0x2f5 JumpB
	var_547_string = "durability"; // 0x2f6 PushS
	GetProperty(var_413_int, var_547_string); // 0x2f7 ObjFunc
	goto Label_763; // 0x2f9 Jump
	
Label_763:
	var_548_int = 7; // 0x2fb PushI
	GetStringByID(var_410_string, var_548_int); // 0x2fc Func
	var_549_string = " "; // 0x2fe PushS
	var_550_int = var_549_string + var_413_int; // 0x2ff Add
	var_551_string = "%"; // 0x300 PushS
	var_552_int = var_550_int + var_551_string; // 0x301 Add
	var_410_string = var_410_string + var_552_int; // 0x302 Add2
	var_553_string = "default"; // 0x303 PushS
	var_554_int = 218; // 0x304 PushI
	GetTextHeightInWidth(var_414_int, var_553_string, var_554_int, var_410_string); // 0x305 Func
	var_409_int = var_409_int + var_414_int; // 0x307 Add2
	
Label_776:
	var_416_bool = 0; // 0x308 MovB
	var_555_string = ""; var_556_object = Obj(); // 0x309 PushV
	var_556_object = var_361_object; // 0x30a Mov
	func_193(var_555_string, var_556_object); // 0x30b NEW_2
	var_557_string = "grass_combination"; // 0x30d PushS
	var_558_bool = var_555_string == var_557_string; // 0x30e Eq
	if(var_558_bool == 0) goto Label_818; // 0x30f JumpB
	var_416_bool = 1; // 0x310 MovB
	var_559_string = "im_inc"; // 0x311 PushS
	GetProperty(var_417_float, var_559_string); // 0x312 ObjFunc
	var_560_string = "hl_inc"; // 0x314 PushS
	GetProperty(var_418_float, var_560_string); // 0x315 ObjFunc
	var_561_int = 8; // 0x317 PushI
	GetStringByID(var_420_string, var_561_int); // 0x318 Func
	var_562_int = 9; // 0x31a PushI
	GetStringByID(var_421_string, var_562_int); // 0x31b Func
	var_563_int = 100; // 0x31d PushI
	var_422_int = var_417_float * var_563_int; // 0x31e Mult2
	var_564_string = " "; // 0x31f PushS
	var_565_int = var_420_string + var_564_string; // 0x320 Add
	var_566_int = var_565_int + var_422_int; // 0x321 Add
	var_567_string = "%
"; // 0x322 PushS
	var_415_string = var_566_int + var_567_string; // 0x323 Add2
	var_568_int = 100; // 0x324 PushI
	var_422_int = var_418_float * var_568_int; // 0x325 Mult2
	var_569_string = " "; // 0x326 PushS
	var_570_int = var_421_string + var_569_string; // 0x327 Add
	var_571_int = var_570_int + var_422_int; // 0x328 Add
	var_572_string = "%
"; // 0x329 PushS
	var_573_int = var_571_int + var_572_string; // 0x32a Add
	var_415_string = var_415_string + var_573_int; // 0x32b Add2
	var_574_string = "default"; // 0x32c PushS
	var_575_int = 218; // 0x32d PushI
	GetTextHeightInWidth(var_423_int, var_574_string, var_575_int, var_415_string); // 0x32e Func
	var_409_int = var_409_int + var_423_int; // 0x330 Add2
	goto Label_858; // 0x331 Jump
	
Label_858:
	GetScreenSize(var_430_int, var_431_int); // 0x35a Func
	var_576_int = var_430_int - var_359_int; // 0x35c Sub
	var_577_int = 250; // 0x35d PushI
	var_578_bool = var_576_int > var_577_int; // 0x35e GT
	if(var_578_bool == 0) goto Label_866; // 0x35f JumpB
	var_432_int = var_359_int; // 0x360 Mov
	goto Label_868; // 0x361 Jump
	
Label_868:
	var_579_bool = var_360_int > var_409_int; // 0x364 GT
	if(var_579_bool == 0) goto Label_872; // 0x365 JumpB
	var_433_int = var_360_int - var_409_int; // 0x366 Sub2
	goto Label_879; // 0x367 Jump
	
Label_879:
	ScreenToClient(var_432_int, var_433_int); // 0x36f Func
	var_580_int = 0; var_581_int = 0; var_582_int = 0; var_583_int = 0; var_584_float = 0; // 0x371 PushV
	var_580_int = var_432_int; // 0x372 Mov
	var_581_int = var_433_int; // 0x373 Mov
	var_582_int = 250; // 0x374 MovI
	var_583_int = var_409_int; // 0x375 Mov
	var_584_float = var_363_float; // 0x376 Mov
	func_353(var_580_int, var_581_int, var_582_int, var_583_int, var_584_float); // 0x377 NEW_2
	var_585_int = 0; var_586_int = 0; var_587_object = Obj(); var_588_float = 0; // 0x379 PushV
	var_589_int = 16; // 0x37a PushI
	var_585_int = var_432_int + var_589_int; // 0x37b Add2
	var_590_int = 16; // 0x37c PushI
	var_586_int = var_433_int + var_590_int; // 0x37d Add2
	var_587_object = var_361_object; // 0x37e Mov
	var_588_float = var_363_float; // 0x37f Mov
	func_380(var_585_int, var_586_int, var_587_object, var_588_float); // 0x380 NEW_2
	var_591_int = 250; // 0x382 PushI
	var_433_int = var_433_int + var_591_int; // 0x383 Add2
	var_592_string = "default"; // 0x384 PushS
	var_593_int = 16; // 0x385 PushI
	var_594_int = var_432_int + var_593_int; // 0x386 Add
	var_595_int = 218; // 0x387 PushI
	var_596_float = 0.64706; // 0x388 PushF
	var_597_float = 0.64706; // 0x389 PushF
	var_598_float = 0.64706; // 0x38a PushF
	PrintInWidth(var_409_int, var_592_string, var_594_int, var_433_int, var_595_int, var_405_string, var_596_float, var_597_float, var_598_float, var_363_float); // 0x38b Func
	var_433_int = var_433_int + var_409_int; // 0x38d Add2
	var_599_bool = 0; // 0x38e PushV
	var_599_bool = 1; // 0x38f MovB
	var_600_bool = var_412_bool; // 0x390 Push
	if(var_600_bool == 0) goto Label_917; // 0x391 JumpB
	var_601_bool = var_411_bool; // 0x392 Push
	if(var_601_bool == 0) goto Label_917; // 0x393 JumpB
	var_599_bool = 0; // 0x394 MovB
	
Label_917:
	if(var_599_bool == 0) goto Label_928; // 0x395 JumpB
	var_602_string = "default"; // 0x396 PushS
	var_603_int = 16; // 0x397 PushI
	var_604_int = var_432_int + var_603_int; // 0x398 Add
	var_605_int = 218; // 0x399 PushI
	var_606_float = 0.64706; // 0x39a PushF
	var_607_float = 0.64706; // 0x39b PushF
	var_608_float = 0.64706; // 0x39c PushF
	PrintInWidth(var_409_int, var_602_string, var_604_int, var_433_int, var_605_int, var_410_string, var_606_float, var_607_float, var_608_float, var_363_float); // 0x39d Func
	var_433_int = var_433_int + var_409_int; // 0x39f Add2
	
Label_928:
	var_609_bool = var_416_bool; // 0x3a0 Push
	if(var_609_bool == 0) goto Label_940; // 0x3a1 JumpB
	var_610_string = "default"; // 0x3a2 PushS
	var_611_int = 16; // 0x3a3 PushI
	var_612_int = var_432_int + var_611_int; // 0x3a4 Add
	var_613_int = 218; // 0x3a5 PushI
	var_614_float = 0.64706; // 0x3a6 PushF
	var_615_float = 0.64706; // 0x3a7 PushF
	var_616_float = 0.64706; // 0x3a8 PushF
	PrintInWidth(var_409_int, var_610_string, var_612_int, var_433_int, var_613_int, var_415_string, var_614_float, var_615_float, var_616_float, var_363_float); // 0x3a9 Func
	var_433_int = var_433_int + var_409_int; // 0x3ab Add2
	
Label_940:
	return 70; // 0x3ac Return
	
Label_872:
	var_433_int = var_360_int; // 0x368 Mov
	var_617_int = var_433_int + var_409_int; // 0x369 Add
	var_618_int = 600; // 0x36a PushI
	var_619_bool = var_617_int > var_618_int; // 0x36b GT
	if(var_619_bool == 0) goto Label_879; // 0x36c JumpB
	var_620_int = 600; // 0x36d PushI
	var_433_int = var_620_int - var_409_int; // 0x36e Sub2
	
Label_866:
	var_621_int = 250; // 0x362 PushI
	var_432_int = var_359_int - var_621_int; // 0x363 Sub2
	
Label_818:
	var_622_string = ""; var_623_object = Obj(); // 0x332 PushV
	var_623_object = var_361_object; // 0x333 Mov
	func_193(var_622_string, var_623_object); // 0x334 NEW_2
	var_624_string = "organ_combination"; // 0x336 PushS
	var_625_bool = var_622_string == var_624_string; // 0x337 Eq
	if(var_625_bool == 0) goto Label_858; // 0x338 JumpB
	var_416_bool = 1; // 0x339 MovB
	var_626_string = "DiseaseRate"; // 0x33a PushS
	GetProperty(var_424_float, var_626_string); // 0x33b ObjFunc
	var_627_string = "HealthIncrease"; // 0x33d PushS
	GetProperty(var_425_float, var_627_string); // 0x33e ObjFunc
	var_628_int = 11; // 0x340 PushI
	GetStringByID(var_426_string, var_628_int); // 0x341 Func
	var_629_int = 13; // 0x343 PushI
	GetStringByID(var_427_string, var_629_int); // 0x344 Func
	var_630_int = 100; // 0x346 PushI
	var_428_int = var_424_float * var_630_int; // 0x347 Mult2
	var_631_string = " "; // 0x348 PushS
	var_632_int = var_426_string + var_631_string; // 0x349 Add
	var_633_int = var_632_int + var_428_int; // 0x34a Add
	var_634_string = "%
"; // 0x34b PushS
	var_415_string = var_633_int + var_634_string; // 0x34c Add2
	var_635_int = 100; // 0x34d PushI
	var_428_int = var_425_float * var_635_int; // 0x34e Mult2
	var_636_string = " "; // 0x34f PushS
	var_637_int = var_427_string + var_636_string; // 0x350 Add
	var_638_int = var_637_int + var_428_int; // 0x351 Add
	var_639_string = "%
"; // 0x352 PushS
	var_640_int = var_638_int + var_639_string; // 0x353 Add
	var_415_string = var_415_string + var_640_int; // 0x354 Add2
	var_641_string = "default"; // 0x355 PushS
	var_642_int = 218; // 0x356 PushI
	GetTextHeightInWidth(var_429_int, var_641_string, var_642_int, var_415_string); // 0x357 Func
	var_409_int = var_409_int + var_429_int; // 0x359 Add2
	
Label_762:
	var_413_int = 100; // 0x2fa MovI
	
Label_726:
	var_405_string = "Error: Item doesnt have description (FIXME!)"; // 0x2d6 MovS
	
Label_704:
	var_643_float = 0; var_644_object = Obj(); var_645_int = 0; var_646_int = 0; // 0x2c0 PushV
	var_644_object = var_399_object; // 0x2c1 Mov
	var_645_int = var_401_int; // 0x2c2 Mov
	var_647_int = 0; // 0x2c3 PushV
	func_264(var_647_int); // 0x2c4 NEW_2
	var_646_int = var_647_int; // 0x2c5 Mov
	func_238(var_644_object, var_645_int, var_646_int); // 0x2c7 NEW_2
	var_404_float = var_643_float; // 0x2c8 Mov
}


func_1116(var_15_bool, var_16_object, var_17_object)
{
	var_18_int = 0; var_19_string = ""; var_20_string = ""; var_21_int = 0; var_22_string = ""; var_23_string = ""; // 0x45c PushV
	var_24_bool = 0; // 0x45d PushV
	var_24_bool = 0; // 0x45e MovB
	var_25_bool = var_16_object == 0; // 0x45f NullEq
	if(var_25_bool == 0) goto Label_1124; // 0x460 JumpB
	var_26_bool = var_17_object != 0; // 0x461 NullNeq
	if(var_26_bool == 0) goto Label_1124; // 0x462 JumpB
	var_24_bool = 1; // 0x463 MovB
	
Label_1124:
	if(var_24_bool == 0) goto Label_1127; // 0x464 JumpB
	var_15_bool = 0; // 0x465 MovB
	return 6; // 0x466 Return
	
Label_1127:
	var_27_bool = 0; // 0x467 PushV
	var_27_bool = 0; // 0x468 MovB
	var_28_bool = var_17_object == 0; // 0x469 NullEq
	if(var_28_bool == 0) goto Label_1134; // 0x46a JumpB
	var_29_bool = var_16_object != 0; // 0x46b NullNeq
	if(var_29_bool == 0) goto Label_1134; // 0x46c JumpB
	var_27_bool = 1; // 0x46d MovB
	
Label_1134:
	if(var_27_bool == 0) goto Label_1137; // 0x46e JumpB
	var_15_bool = 0; // 0x46f MovB
	return 6; // 0x470 Return
	
Label_1137:
	var_30_bool = 0; // 0x471 PushV
	var_30_bool = 0; // 0x472 MovB
	var_31_bool = var_16_object == 0; // 0x473 NullEq
	if(var_31_bool == 0) goto Label_1144; // 0x474 JumpB
	var_32_bool = var_17_object == 0; // 0x475 NullEq
	if(var_32_bool == 0) goto Label_1144; // 0x476 JumpB
	var_30_bool = 1; // 0x477 MovB
	
Label_1144:
	if(var_30_bool == 0) goto Label_1147; // 0x478 JumpB
	var_15_bool = 1; // 0x479 MovB
	return 6; // 0x47a Return
	
Label_1147:
	var_33_int = 0; var_34_object = Obj(); // 0x47b PushV
	var_34_object = var_16_object; // 0x47c Mov
	func_109(var_34_object); // 0x47d NEW_2
	var_21_int = var_33_int; // 0x47e Mov
	GetInvItemSprite2(var_22_string, var_21_int); // 0x480 Func
	var_37_int = 0; var_38_object = Obj(); // 0x482 PushV
	var_38_object = var_17_object; // 0x483 Mov
	func_109(var_38_object); // 0x484 NEW_2
	var_21_int = var_37_int; // 0x485 Mov
	GetInvItemSprite2(var_23_string, var_21_int); // 0x487 Func
	var_15_bool = var_22_string == var_23_string; // 0x489 Eq2
	return 6; // 0x48a Return
}


func_380(var_168_int, var_169_int, var_170_object, var_171_float)
{
	var_174_int = 0; var_175_string = ""; var_176_int = 0; var_177_string = ""; // 0x17c PushV
	var_178_bool = var_170_object == 0; // 0x17d Not
	if(var_178_bool == 0) goto Label_384; // 0x17e JumpB
	return 4; // 0x17f Return
	
Label_384:
	var_179_int = 0; var_180_object = Obj(); // 0x180 PushV
	var_180_object = var_170_object; // 0x181 Mov
	func_109(var_180_object); // 0x182 NEW_2
	var_176_int = var_179_int; // 0x183 Mov
	GetInvItemSprite2(var_177_string, var_176_int); // 0x185 Func
	var_181_int = 218; // 0x187 PushI
	var_182_int = 218; // 0x188 PushI
	StretchBlit(var_177_string, var_168_int, var_169_int, var_181_int, var_182_int, var_171_float); // 0x189 Func
	var_183_string = "border"; // 0x18b PushS
	var_184_int = 218; // 0x18c PushI
	var_185_int = 1; // 0x18d PushI
	StretchBlit(var_183_string, var_168_int, var_169_int, var_184_int, var_185_int, var_171_float); // 0x18e Func
	var_186_string = "border"; // 0x190 PushS
	var_187_int = 218; // 0x191 PushI
	var_188_int = var_169_int + var_187_int; // 0x192 Add
	var_189_int = 1; // 0x193 PushI
	var_190_int = var_188_int - var_189_int; // 0x194 Sub
	var_191_int = 218; // 0x195 PushI
	var_192_int = 1; // 0x196 PushI
	StretchBlit(var_186_string, var_168_int, var_190_int, var_191_int, var_192_int, var_171_float); // 0x197 Func
	var_193_string = "border"; // 0x199 PushS
	var_194_int = 1; // 0x19a PushI
	var_195_int = 218; // 0x19b PushI
	StretchBlit(var_193_string, var_168_int, var_169_int, var_194_int, var_195_int, var_171_float); // 0x19c Func
	var_196_string = "border"; // 0x19e PushS
	var_197_int = 218; // 0x19f PushI
	var_198_int = var_168_int + var_197_int; // 0x1a0 Add
	var_199_int = 1; // 0x1a1 PushI
	var_200_int = var_198_int - var_199_int; // 0x1a2 Sub
	var_201_int = 1; // 0x1a3 PushI
	var_202_int = 218; // 0x1a4 PushI
	StretchBlit(var_196_string, var_200_int, var_169_int, var_201_int, var_202_int, var_171_float); // 0x1a5 Func
	return 4; // 0x1a7 Return
}


