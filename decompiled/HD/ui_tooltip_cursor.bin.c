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
	func_1218(var_15_bool, var_16_object, var_17_object); // 0x2e NEW_2
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
	var_782_string = "default"; // 0x67 PushS
	var_783_int = 0; // 0x68 PushI
	var_784_int = 0; // 0x69 PushI
	Blit(var_782_string, var_783_int, var_784_int); // 0x6a Func
	return 6; // 0x6c Return
	
Label_81:
	var_785_float = 0.65; // 0x51 PushF
	var_786_bool = var_4_float < var_785_float; // 0x52 LT
	if(var_786_bool == 0) goto Label_89; // 0x53 JumpB
	var_787_float = 0.5; // 0x54 PushF
	var_788_int = var_4_float - var_787_float; // 0x55 Sub
	var_789_float = 0.15; // 0x56 PushF
	var_8_float = var_788_int / var_788_int; // 0x57 Div2
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


func_193(var_140_string, var_141_object)
{
	var_142_int = 0; var_143_string = ""; var_144_int = 0; var_145_string = ""; // 0xc1 PushV
	var_146_int = 0; var_147_object = Obj(); // 0xc2 PushV
	var_147_object = var_141_object; // 0xc3 Mov
	func_109(var_147_object); // 0xc4 NEW_2
	var_144_int = var_146_int; // 0xc5 Mov
	GetInvItemName(var_145_string, var_144_int); // 0xc7 Func
	var_140_string = var_145_string; // 0xc9 Mov
	return 4; // 0xca Return
}


func_1218(var_15_bool, var_16_object, var_17_object)
{
	var_18_int = 0; var_19_string = ""; var_20_string = ""; var_21_int = 0; var_22_string = ""; var_23_string = ""; // 0x4c2 PushV
	var_24_bool = 0; // 0x4c3 PushV
	var_24_bool = 0; // 0x4c4 MovB
	var_25_bool = var_16_object == 0; // 0x4c5 NullEq
	if(var_25_bool == 0) goto Label_1226; // 0x4c6 JumpB
	var_26_bool = var_17_object != 0; // 0x4c7 NullNeq
	if(var_26_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_24_bool = 1; // 0x4c9 MovB
	
Label_1226:
	if(var_24_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_15_bool = 0; // 0x4cb MovB
	return 6; // 0x4cc Return
	
Label_1229:
	var_27_bool = 0; // 0x4cd PushV
	var_27_bool = 0; // 0x4ce MovB
	var_28_bool = var_17_object == 0; // 0x4cf NullEq
	if(var_28_bool == 0) goto Label_1236; // 0x4d0 JumpB
	var_29_bool = var_16_object != 0; // 0x4d1 NullNeq
	if(var_29_bool == 0) goto Label_1236; // 0x4d2 JumpB
	var_27_bool = 1; // 0x4d3 MovB
	
Label_1236:
	if(var_27_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_15_bool = 0; // 0x4d5 MovB
	return 6; // 0x4d6 Return
	
Label_1239:
	var_30_bool = 0; // 0x4d7 PushV
	var_30_bool = 0; // 0x4d8 MovB
	var_31_bool = var_16_object == 0; // 0x4d9 NullEq
	if(var_31_bool == 0) goto Label_1246; // 0x4da JumpB
	var_32_bool = var_17_object == 0; // 0x4db NullEq
	if(var_32_bool == 0) goto Label_1246; // 0x4dc JumpB
	var_30_bool = 1; // 0x4dd MovB
	
Label_1246:
	if(var_30_bool == 0) goto Label_1249; // 0x4de JumpB
	var_15_bool = 1; // 0x4df MovB
	return 6; // 0x4e0 Return
	
Label_1249:
	var_33_int = 0; var_34_object = Obj(); // 0x4e1 PushV
	var_34_object = var_16_object; // 0x4e2 Mov
	func_109(var_34_object); // 0x4e3 NEW_2
	var_21_int = var_33_int; // 0x4e4 Mov
	GetInvItemSprite2(var_22_string, var_21_int); // 0x4e6 Func
	var_37_int = 0; var_38_object = Obj(); // 0x4e8 PushV
	var_38_object = var_17_object; // 0x4e9 Mov
	func_109(var_38_object); // 0x4ea NEW_2
	var_21_int = var_37_int; // 0x4eb Mov
	GetInvItemSprite2(var_23_string, var_21_int); // 0x4ed Func
	var_15_bool = var_22_string == var_23_string; // 0x4ef Eq2
	return 6; // 0x4f0 Return
}


func_353(var_172_int, var_173_int, var_174_int, var_175_int, var_176_float)
{
	var_177_string = "bg"; // 0x162 PushS
	BlitClipped(var_177_string, var_172_int, var_173_int, var_172_int, var_173_int, var_174_int, var_175_int, var_176_float); // 0x163 Func
	var_178_string = "border"; // 0x165 PushS
	var_179_int = 1; // 0x166 PushI
	StretchBlit(var_178_string, var_172_int, var_173_int, var_174_int, var_179_int, var_176_float); // 0x167 Func
	var_180_string = "border"; // 0x169 PushS
	var_181_int = var_173_int + var_175_int; // 0x16a Add
	var_182_int = 1; // 0x16b PushI
	var_183_int = var_181_int - var_182_int; // 0x16c Sub
	var_184_int = 1; // 0x16d PushI
	StretchBlit(var_180_string, var_172_int, var_183_int, var_174_int, var_184_int, var_176_float); // 0x16e Func
	var_185_string = "border"; // 0x170 PushS
	var_186_int = 1; // 0x171 PushI
	StretchBlit(var_185_string, var_172_int, var_173_int, var_186_int, var_175_int, var_176_float); // 0x172 Func
	var_187_string = "border"; // 0x174 PushS
	var_188_int = var_172_int + var_174_int; // 0x175 Add
	var_189_int = 1; // 0x176 PushI
	var_190_int = var_188_int - var_189_int; // 0x177 Sub
	var_191_int = 1; // 0x178 PushI
	StretchBlit(var_187_string, var_190_int, var_173_int, var_191_int, var_175_int, var_176_float); // 0x179 Func
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
	var_297_int = 2; // 0x132 PushI
	var_298_bool = var_14_int == var_297_int; // 0x133 Eq
	if(var_298_bool == 0) goto Label_317; // 0x134 JumpB
	var_299_int = 0; var_300_int = 0; var_301_object = Obj(); var_302_float = 0; // 0x135 PushV
	var_299_int = var_17_int; // 0x136 Mov
	var_300_int = var_18_int; // 0x137 Mov
	var_301_object = var_16_object; // 0x138 Mov
	var_302_float = var_19_float; // 0x139 Mov
	func_1044(var_299_int, var_300_int, var_301_object, var_302_float); // 0x13a NEW_2
	goto Label_352; // 0x13c Jump
	
Label_317:
	var_391_int = 3; // 0x13d PushI
	var_392_bool = var_14_int == var_391_int; // 0x13e Eq
	if(var_392_bool == 0) goto Label_329; // 0x13f JumpB
	var_393_int = 0; var_394_int = 0; var_395_object = Obj(); var_396_bool = 0; var_397_float = 0; // 0x140 PushV
	var_393_int = var_17_int; // 0x141 Mov
	var_394_int = var_18_int; // 0x142 Mov
	var_395_object = var_16_object; // 0x143 Mov
	var_396_bool = 1; // 0x144 MovB
	var_397_float = var_19_float; // 0x145 Mov
	func_717(var_393_int, var_394_int, var_395_object, var_396_bool, var_397_float); // 0x146 NEW_2
	goto Label_352; // 0x148 Jump
	
Label_329:
	var_732_int = 4; // 0x149 PushI
	var_733_bool = var_14_int == var_732_int; // 0x14a Eq
	if(var_733_bool == 0) goto Label_341; // 0x14b JumpB
	var_734_int = 0; var_735_int = 0; var_736_object = Obj(); var_737_bool = 0; var_738_float = 0; // 0x14c PushV
	var_734_int = var_17_int; // 0x14d Mov
	var_735_int = var_18_int; // 0x14e Mov
	var_736_object = var_16_object; // 0x14f Mov
	var_737_bool = 0; // 0x150 MovB
	var_738_float = var_19_float; // 0x151 Mov
	func_717(var_734_int, var_735_int, var_736_object, var_737_bool, var_738_float); // 0x152 NEW_2
	goto Label_352; // 0x154 Jump
	
Label_341:
	var_739_int = 5; // 0x155 PushI
	var_740_bool = var_14_int == var_739_int; // 0x156 Eq
	if(var_740_bool == 0) goto Label_352; // 0x157 JumpB
	var_741_int = 0; var_742_int = 0; var_743_string = ""; var_744_object = Obj(); var_745_float = 0; // 0x158 PushV
	var_741_int = var_17_int; // 0x159 Mov
	var_742_int = var_18_int; // 0x15a Mov
	var_743_string = var_15_string; // 0x15b Mov
	var_744_object = var_16_object; // 0x15c Mov
	var_745_float = var_19_float; // 0x15d Mov
	func_1167(var_742_int, var_743_string, var_744_object, var_745_float); // 0x15e NEW_2
}


func_424(var_22_int, var_23_int, var_24_object, var_25_string, var_26_float)
{
	var_27_int = 0; var_28_string = ""; var_29_string = ""; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_string = ""; var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_string = ""; var_48_string = ""; var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_string = ""; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_string = ""; var_66_string = ""; var_67_string = ""; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_string = ""; var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_string = ""; var_85_string = ""; var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_string = ""; var_94_string = ""; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; // 0x1a8 PushV
	var_101_bool = var_24_object == 0; // 0x1a9 Not
	if(var_101_bool == 0) goto Label_428; // 0x1aa JumpB
	return 74; // 0x1ab Return
	
Label_428:
	var_102_int = 0; var_103_object = Obj(); // 0x1ac PushV
	var_103_object = var_24_object; // 0x1ad Mov
	func_109(var_103_object); // 0x1ae NEW_2
	var_64_int = var_102_int; // 0x1af Mov
	var_106_string = "Description"; // 0x1b1 PushS
	HasInvItemProperty(var_68_bool, var_64_int, var_106_string); // 0x1b2 Func
	var_107_bool = var_68_bool; // 0x1b4 Push
	if(var_107_bool == 0) goto Label_444; // 0x1b5 JumpB
	var_108_string = "Description"; // 0x1b6 PushS
	GetInvItemProperty(var_69_int, var_64_int, var_108_string); // 0x1b7 Func
	GetStringByID(var_65_string, var_69_int); // 0x1b9 Func
	goto Label_445; // 0x1bb Jump
	
Label_445:
	var_109_string = "default"; // 0x1bd PushS
	var_110_int = 268; // 0x1be PushI
	GetTextHeightInWidth(var_70_int, var_109_string, var_110_int, var_65_string); // 0x1bf Func
	var_111_string = "default"; // 0x1c1 PushS
	GetFontHeight(var_71_int, var_111_string); // 0x1c2 Func
	var_70_int = var_70_int + var_71_int; // 0x1c4 Add2
	var_112_string = "HasDurability"; // 0x1c5 PushS
	HasInvItemProperty(var_72_bool, var_64_int, var_112_string); // 0x1c6 Func
	var_113_string = "durability"; // 0x1c8 PushS
	HasProperty(var_73_bool, var_113_string); // 0x1c9 ObjFunc
	var_114_bool = 0; // 0x1cb PushV
	var_114_bool = 1; // 0x1cc MovB
	var_115_bool = var_73_bool; // 0x1cd Push
	if(var_115_bool == 0) goto Label_466; // 0x1ce JumpB
	var_116_bool = var_72_bool; // 0x1cf Push
	if(var_116_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_114_bool = 0; // 0x1d1 MovB
	
Label_466:
	if(var_114_bool == 0) goto Label_489; // 0x1d2 JumpB
	var_117_bool = var_73_bool; // 0x1d3 Push
	if(var_117_bool == 0) goto Label_473; // 0x1d4 JumpB
	var_118_string = "durability"; // 0x1d5 PushS
	GetProperty(var_74_int, var_118_string); // 0x1d6 ObjFunc
	goto Label_474; // 0x1d8 Jump
	
Label_474:
	var_119_int = 7; // 0x1da PushI
	GetStringByID(var_66_string, var_119_int); // 0x1db Func
	var_120_string = " "; // 0x1dd PushS
	var_121_int = var_120_string + var_74_int; // 0x1de Add
	var_122_string = "%"; // 0x1df PushS
	var_123_int = var_121_int + var_122_string; // 0x1e0 Add
	var_66_string = var_66_string + var_123_int; // 0x1e1 Add2
	var_124_string = "default"; // 0x1e2 PushS
	var_125_int = 268; // 0x1e3 PushI
	GetTextHeightInWidth(var_75_int, var_124_string, var_125_int, var_66_string); // 0x1e4 Func
	var_126_int = 2; // 0x1e6 PushI
	var_127_float = var_75_int * var_126_int; // 0x1e7 Mult
	var_70_int = var_70_int + var_127_float; // 0x1e8 Add2
	
Label_489:
	var_128_string = "HasUses"; // 0x1e9 PushS
	HasInvItemProperty(var_76_bool, var_64_int, var_128_string); // 0x1ea Func
	var_129_string = "uses"; // 0x1ec PushS
	HasProperty(var_77_bool, var_129_string); // 0x1ed ObjFunc
	var_130_bool = 0; // 0x1ef PushV
	var_130_bool = 1; // 0x1f0 MovB
	var_131_bool = var_77_bool; // 0x1f1 Push
	if(var_131_bool == 0) goto Label_502; // 0x1f2 JumpB
	var_132_bool = var_76_bool; // 0x1f3 Push
	if(var_132_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_130_bool = 0; // 0x1f5 MovB
	
Label_502:
	if(var_130_bool == 0) goto Label_521; // 0x1f6 JumpB
	var_133_bool = var_77_bool; // 0x1f7 Push
	if(var_133_bool == 0) goto Label_509; // 0x1f8 JumpB
	var_134_string = "uses"; // 0x1f9 PushS
	GetProperty(var_78_int, var_134_string); // 0x1fa ObjFunc
	goto Label_510; // 0x1fc Jump
	
Label_510:
	var_135_int = 1006; // 0x1fe PushI
	GetStringByID(var_67_string, var_135_int); // 0x1ff Func
	var_136_string = " "; // 0x201 PushS
	var_137_int = var_136_string + var_78_int; // 0x202 Add
	var_67_string = var_67_string + var_137_int; // 0x203 Add2
	var_138_string = "default"; // 0x204 PushS
	var_139_int = 268; // 0x205 PushI
	GetTextHeightInWidth(var_79_int, var_138_string, var_139_int, var_67_string); // 0x206 Func
	var_70_int = var_70_int + var_79_int; // 0x208 Add2
	
Label_521:
	var_81_bool = 0; // 0x209 MovB
	var_140_string = ""; var_141_object = Obj(); // 0x20a PushV
	var_141_object = var_24_object; // 0x20b Mov
	func_193(var_140_string, var_141_object); // 0x20c NEW_2
	var_148_string = "grass_combination"; // 0x20e PushS
	var_149_bool = var_140_string == var_148_string; // 0x20f Eq
	if(var_149_bool == 0) goto Label_563; // 0x210 JumpB
	var_81_bool = 1; // 0x211 MovB
	var_150_string = "im_inc"; // 0x212 PushS
	GetProperty(var_82_float, var_150_string); // 0x213 ObjFunc
	var_151_string = "hl_inc"; // 0x215 PushS
	GetProperty(var_83_float, var_151_string); // 0x216 ObjFunc
	var_152_int = 8; // 0x218 PushI
	GetStringByID(var_84_string, var_152_int); // 0x219 Func
	var_153_int = 9; // 0x21b PushI
	GetStringByID(var_86_string, var_153_int); // 0x21c Func
	var_154_int = 100; // 0x21e PushI
	var_87_int = var_82_float * var_154_int; // 0x21f Mult2
	var_155_string = " "; // 0x220 PushS
	var_156_int = var_84_string + var_155_string; // 0x221 Add
	var_157_int = var_156_int + var_87_int; // 0x222 Add
	var_158_string = "%
"; // 0x223 PushS
	var_80_string = var_157_int + var_158_string; // 0x224 Add2
	var_159_int = 100; // 0x225 PushI
	var_87_int = var_83_float * var_159_int; // 0x226 Mult2
	var_160_string = " "; // 0x227 PushS
	var_161_int = var_86_string + var_160_string; // 0x228 Add
	var_162_int = var_161_int + var_87_int; // 0x229 Add
	var_163_string = "%
"; // 0x22a PushS
	var_164_int = var_162_int + var_163_string; // 0x22b Add
	var_80_string = var_80_string + var_164_int; // 0x22c Add2
	var_165_string = "default"; // 0x22d PushS
	var_166_int = 268; // 0x22e PushI
	GetTextHeightInWidth(var_88_int, var_165_string, var_166_int, var_80_string); // 0x22f Func
	var_70_int = var_70_int + var_88_int; // 0x231 Add2
	goto Label_603; // 0x232 Jump
	
Label_603:
	GetScreenSize(var_97_int, var_98_int); // 0x25b Func
	var_167_int = 266; // 0x25d PushI
	var_70_int = var_70_int + var_167_int; // 0x25e Add2
	var_168_int = var_97_int - var_22_int; // 0x25f Sub
	var_169_int = 300; // 0x260 PushI
	var_170_bool = var_168_int > var_169_int; // 0x261 GT
	if(var_170_bool == 0) goto Label_613; // 0x262 JumpB
	var_99_int = var_22_int; // 0x263 Mov
	goto Label_615; // 0x264 Jump
	
Label_615:
	var_171_bool = var_23_int > var_70_int; // 0x267 GT
	if(var_171_bool == 0) goto Label_619; // 0x268 JumpB
	var_100_int = var_23_int - var_70_int; // 0x269 Sub2
	goto Label_626; // 0x26a Jump
	
Label_626:
	ScreenToClient(var_99_int, var_100_int); // 0x272 Func
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0; var_176_float = 0; // 0x274 PushV
	var_172_int = var_99_int; // 0x275 Mov
	var_173_int = var_100_int; // 0x276 Mov
	var_174_int = 300; // 0x277 MovI
	var_175_int = var_70_int; // 0x278 Mov
	var_176_float = var_26_float; // 0x279 Mov
	func_353(var_172_int, var_173_int, var_174_int, var_175_int, var_176_float); // 0x27a NEW_2
	var_192_int = 0; var_193_int = 0; var_194_object = Obj(); var_195_float = 0; // 0x27c PushV
	var_196_int = 41; // 0x27d PushI
	var_192_int = var_99_int + var_196_int; // 0x27e Add2
	var_197_int = 16; // 0x27f PushI
	var_193_int = var_100_int + var_197_int; // 0x280 Add2
	var_194_object = var_24_object; // 0x281 Mov
	var_195_float = var_26_float; // 0x282 Mov
	func_380(var_192_int, var_193_int, var_194_object, var_195_float); // 0x283 NEW_2
	var_227_int = 250; // 0x285 PushI
	var_100_int = var_100_int + var_227_int; // 0x286 Add2
	var_228_string = "default"; // 0x287 PushS
	var_229_int = 16; // 0x288 PushI
	var_230_int = var_99_int + var_229_int; // 0x289 Add
	var_231_int = 268; // 0x28a PushI
	var_232_float = 0.64706; // 0x28b PushF
	var_233_float = 0.64706; // 0x28c PushF
	var_234_float = 0.64706; // 0x28d PushF
	PrintInWidth(var_70_int, var_228_string, var_230_int, var_100_int, var_231_int, var_65_string, var_232_float, var_233_float, var_234_float, var_26_float); // 0x28e Func
	var_235_int = var_70_int + var_71_int; // 0x290 Add
	var_100_int = var_100_int + var_235_int; // 0x291 Add2
	var_236_bool = 0; // 0x292 PushV
	var_236_bool = 1; // 0x293 MovB
	var_237_bool = var_73_bool; // 0x294 Push
	if(var_237_bool == 0) goto Label_665; // 0x295 JumpB
	var_238_bool = var_72_bool; // 0x296 Push
	if(var_238_bool == 0) goto Label_665; // 0x297 JumpB
	var_236_bool = 0; // 0x298 MovB
	
Label_665:
	if(var_236_bool == 0) goto Label_676; // 0x299 JumpB
	var_239_string = "default"; // 0x29a PushS
	var_240_int = 16; // 0x29b PushI
	var_241_int = var_99_int + var_240_int; // 0x29c Add
	var_242_int = 268; // 0x29d PushI
	var_243_float = 0.64706; // 0x29e PushF
	var_244_float = 0.64706; // 0x29f PushF
	var_245_float = 0.64706; // 0x2a0 PushF
	PrintInWidth(var_70_int, var_239_string, var_241_int, var_100_int, var_242_int, var_66_string, var_243_float, var_244_float, var_245_float, var_26_float); // 0x2a1 Func
	var_100_int = var_100_int + var_70_int; // 0x2a3 Add2
	
Label_676:
	var_246_bool = 0; // 0x2a4 PushV
	var_246_bool = 1; // 0x2a5 MovB
	var_247_bool = var_77_bool; // 0x2a6 Push
	if(var_247_bool == 0) goto Label_683; // 0x2a7 JumpB
	var_248_bool = var_76_bool; // 0x2a8 Push
	if(var_248_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_246_bool = 0; // 0x2aa MovB
	
Label_683:
	if(var_246_bool == 0) goto Label_694; // 0x2ab JumpB
	var_249_string = "default"; // 0x2ac PushS
	var_250_int = 16; // 0x2ad PushI
	var_251_int = var_99_int + var_250_int; // 0x2ae Add
	var_252_int = 268; // 0x2af PushI
	var_253_float = 0.64706; // 0x2b0 PushF
	var_254_float = 0.64706; // 0x2b1 PushF
	var_255_float = 0.64706; // 0x2b2 PushF
	PrintInWidth(var_70_int, var_249_string, var_251_int, var_100_int, var_252_int, var_67_string, var_253_float, var_254_float, var_255_float, var_26_float); // 0x2b3 Func
	var_100_int = var_100_int + var_70_int; // 0x2b5 Add2
	
Label_694:
	var_256_bool = var_81_bool; // 0x2b6 Push
	if(var_256_bool == 0) goto Label_706; // 0x2b7 JumpB
	var_257_string = "default"; // 0x2b8 PushS
	var_258_int = 16; // 0x2b9 PushI
	var_259_int = var_99_int + var_258_int; // 0x2ba Add
	var_260_int = 268; // 0x2bb PushI
	var_261_float = 0.64706; // 0x2bc PushF
	var_262_float = 0.64706; // 0x2bd PushF
	var_263_float = 0.64706; // 0x2be PushF
	PrintInWidth(var_70_int, var_257_string, var_259_int, var_100_int, var_260_int, var_80_string, var_261_float, var_262_float, var_263_float, var_26_float); // 0x2bf Func
	var_100_int = var_100_int + var_70_int; // 0x2c1 Add2
	
Label_706:
	var_264_string = "default"; // 0x2c2 PushS
	var_265_int = 16; // 0x2c3 PushI
	var_266_int = var_99_int + var_265_int; // 0x2c4 Add
	var_267_int = 268; // 0x2c5 PushI
	var_268_float = 0.64706; // 0x2c6 PushF
	var_269_float = 0.64706; // 0x2c7 PushF
	var_270_float = 0.64706; // 0x2c8 PushF
	PrintInWidth(var_70_int, var_264_string, var_266_int, var_100_int, var_267_int, var_25_string, var_268_float, var_269_float, var_270_float, var_26_float); // 0x2c9 Func
	var_100_int = var_100_int + var_70_int; // 0x2cb Add2
	return 74; // 0x2cc Return
	
Label_619:
	var_100_int = var_23_int; // 0x26b Mov
	var_271_int = var_100_int + var_70_int; // 0x26c Add
	var_272_int = 600; // 0x26d PushI
	var_273_bool = var_271_int > var_272_int; // 0x26e GT
	if(var_273_bool == 0) goto Label_626; // 0x26f JumpB
	var_274_int = 600; // 0x270 PushI
	var_100_int = var_274_int - var_70_int; // 0x271 Sub2
	
Label_613:
	var_275_int = 300; // 0x265 PushI
	var_99_int = var_22_int - var_275_int; // 0x266 Sub2
	
Label_563:
	var_276_string = ""; var_277_object = Obj(); // 0x233 PushV
	var_277_object = var_24_object; // 0x234 Mov
	func_193(var_276_string, var_277_object); // 0x235 NEW_2
	var_278_string = "organ_combination"; // 0x237 PushS
	var_279_bool = var_276_string == var_278_string; // 0x238 Eq
	if(var_279_bool == 0) goto Label_603; // 0x239 JumpB
	var_81_bool = 1; // 0x23a MovB
	var_280_string = "DiseaseRate"; // 0x23b PushS
	GetProperty(var_89_float, var_280_string); // 0x23c ObjFunc
	var_281_string = "HealthIncrease"; // 0x23e PushS
	GetProperty(var_91_float, var_281_string); // 0x23f ObjFunc
	var_282_int = 11; // 0x241 PushI
	GetStringByID(var_93_string, var_282_int); // 0x242 Func
	var_283_int = 13; // 0x244 PushI
	GetStringByID(var_94_string, var_283_int); // 0x245 Func
	var_284_int = 100; // 0x247 PushI
	var_95_int = var_89_float * var_284_int; // 0x248 Mult2
	var_285_string = " "; // 0x249 PushS
	var_286_int = var_93_string + var_285_string; // 0x24a Add
	var_287_int = var_286_int + var_95_int; // 0x24b Add
	var_288_string = "%
"; // 0x24c PushS
	var_80_string = var_287_int + var_288_string; // 0x24d Add2
	var_289_int = 100; // 0x24e PushI
	var_95_int = var_91_float * var_289_int; // 0x24f Mult2
	var_290_string = " "; // 0x250 PushS
	var_291_int = var_94_string + var_290_string; // 0x251 Add
	var_292_int = var_291_int + var_95_int; // 0x252 Add
	var_293_string = "%
"; // 0x253 PushS
	var_294_int = var_292_int + var_293_string; // 0x254 Add
	var_80_string = var_80_string + var_294_int; // 0x255 Add2
	var_295_string = "default"; // 0x256 PushS
	var_296_int = 268; // 0x257 PushI
	GetTextHeightInWidth(var_96_int, var_295_string, var_296_int, var_80_string); // 0x258 Func
	var_70_int = var_70_int + var_96_int; // 0x25a Add2
	
Label_509:
	var_78_int = 1; // 0x1fd MovI
	
Label_473:
	var_74_int = 100; // 0x1d9 MovI
	
Label_444:
	var_65_string = "Error: Item doesnt have description (FIXME!)"; // 0x1bc MovS
}


func_264(var_489_int)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_object = Obj(); var_494_bool = 0; var_495_int = 0; // 0x108 PushV
	GetContainer(var_493_object); // 0x109 Func
	var_496_string = "barter"; // 0x10b PushS
	HasProperty(var_496_string, var_494_bool); // 0x10c ObjFunc
	var_497_bool = var_494_bool == 0; // 0x10e Not
	if(var_497_bool == 0) goto Label_274; // 0x10f JumpB
	var_489_int = 0; // 0x110 MovI
	return 6; // 0x111 Return
	
Label_274:
	var_498_string = "barter"; // 0x112 PushS
	GetProperty(var_498_string, var_495_int); // 0x113 ObjFunc
	var_489_int = var_495_int; // 0x115 Mov
	return 6; // 0x116 Return
}


func_203(var_519_int)
{
	var_520_float = 0; var_521_float = 0; // 0xcb PushV
	GetGameTime(var_521_float); // 0xcc Func
	var_522_int = 1; // 0xce PushI
	var_523_int = 0; // 0xcf PushV
	var_524_int = 24; // 0xd0 PushI
	var_523_int = var_521_float / var_521_float; // 0xd1 Div2
	var_519_int = var_522_int + var_523_int; // 0xd2 Add2
	return 2; // 0xd3 Return
}


func_109(var_102_int)
{
	var_104_int = 0; var_105_int = 0; // 0x6d PushV
	GetItemID(var_105_int); // 0x6e ObjFunc
	var_102_int = var_105_int; // 0x70 Mov
	return 2; // 0x71 Return
}


func_717(var_393_int, var_394_int, var_395_object, var_396_bool, var_397_float)
{
	var_398_object = Obj(); var_399_float = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; var_403_float = 0; var_404_string = ""; var_405_bool = 0; var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_string = ""; var_410_bool = 0; var_411_bool = 0; var_412_int = 0; var_413_int = 0; var_414_string = ""; var_415_bool = 0; var_416_bool = 0; var_417_int = 0; var_418_int = 0; var_419_string = ""; var_420_bool = 0; var_421_float = 0; var_422_float = 0; var_423_float = 0; var_424_string = ""; var_425_string = ""; var_426_string = ""; var_427_int = 0; var_428_int = 0; var_429_float = 0; var_430_float = 0; var_431_string = ""; var_432_string = ""; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0; var_437_int = 0; var_438_int = 0; var_439_object = Obj(); var_440_float = 0; var_441_int = 0; var_442_int = 0; var_443_int = 0; var_444_float = 0; var_445_string = ""; var_446_bool = 0; var_447_int = 0; var_448_string = ""; var_449_int = 0; var_450_string = ""; var_451_bool = 0; var_452_bool = 0; var_453_int = 0; var_454_int = 0; var_455_string = ""; var_456_bool = 0; var_457_bool = 0; var_458_int = 0; var_459_int = 0; var_460_string = ""; var_461_bool = 0; var_462_float = 0; var_463_float = 0; var_464_float = 0; var_465_string = ""; var_466_string = ""; var_467_string = ""; var_468_int = 0; var_469_int = 0; var_470_float = 0; var_471_float = 0; var_472_string = ""; var_473_string = ""; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_int = 0; var_479_int = 0; // 0x2cd PushV
	var_480_bool = var_395_object == 0; // 0x2ce Not
	if(var_480_bool == 0) goto Label_721; // 0x2cf JumpB
	return 82; // 0x2d0 Return
	
Label_721:
	GetContainer(var_439_object); // 0x2d1 Func
	GetGameTime(var_440_float); // 0x2d3 Func
	var_481_int = 1; // 0x2d5 PushI
	var_482_int = 24; // 0x2d6 PushI
	var_483_float = var_440_float / var_482_int; // 0x2d7 Div
	var_441_int = var_481_int + var_483_float; // 0x2d8 Add2
	var_484_int = 0; var_485_object = Obj(); // 0x2d9 PushV
	var_485_object = var_395_object; // 0x2da Mov
	func_109(var_485_object); // 0x2db NEW_2
	var_442_int = var_484_int; // 0x2dc Mov
	var_486_int = 0; var_487_object = Obj(); var_488_int = 0; // 0x2de PushV
	var_487_object = var_395_object; // 0x2df Mov
	var_489_int = 0; // 0x2e0 PushV
	func_264(var_489_int); // 0x2e1 NEW_2
	var_488_int = var_489_int; // 0x2e2 Mov
	func_114(var_486_int, var_487_object, var_488_int); // 0x2e4 NEW_2
	var_443_int = var_486_int; // 0x2e5 Mov
	var_554_bool = var_396_bool; // 0x2e7 Push
	if(var_554_bool == 0) goto Label_756; // 0x2e8 JumpB
	var_555_float = 0; var_556_object = Obj(); var_557_int = 0; var_558_int = 0; // 0x2e9 PushV
	var_556_object = var_439_object; // 0x2ea Mov
	var_557_int = var_441_int; // 0x2eb Mov
	var_559_int = 0; // 0x2ec PushV
	func_264(var_559_int); // 0x2ed NEW_2
	var_558_int = var_559_int; // 0x2ee Mov
	func_212(var_556_object, var_557_int, var_558_int); // 0x2f0 NEW_2
	var_444_float = var_555_float; // 0x2f1 Mov
	goto Label_766; // 0x2f3 Jump
	
Label_766:
	var_443_int = var_443_int * var_444_float; // 0x2fe Mult2
	var_576_string = "Description"; // 0x2ff PushS
	HasInvItemProperty(var_446_bool, var_442_int, var_576_string); // 0x300 Func
	var_577_bool = var_446_bool; // 0x302 Push
	if(var_577_bool == 0) goto Label_778; // 0x303 JumpB
	var_578_string = "Description"; // 0x304 PushS
	GetInvItemProperty(var_447_int, var_442_int, var_578_string); // 0x305 Func
	GetStringByID(var_445_string, var_447_int); // 0x307 Func
	goto Label_779; // 0x309 Jump
	
Label_779:
	var_579_string = "
"; // 0x30b PushS
	var_445_string = var_445_string + var_579_string; // 0x30c Add2
	var_580_int = 5; // 0x30d PushI
	GetStringByID(var_448_string, var_580_int); // 0x30e Func
	var_581_string = ": "; // 0x310 PushS
	var_582_int = var_448_string + var_581_string; // 0x311 Add
	var_583_int = var_582_int + var_443_int; // 0x312 Add
	var_445_string = var_445_string + var_583_int; // 0x313 Add2
	var_584_string = "default"; // 0x314 PushS
	var_585_int = 268; // 0x315 PushI
	GetTextHeightInWidth(var_449_int, var_584_string, var_585_int, var_445_string); // 0x316 Func
	var_586_int = 266; // 0x318 PushI
	var_449_int = var_449_int + var_586_int; // 0x319 Add2
	var_587_string = "HasDurability"; // 0x31a PushS
	HasInvItemProperty(var_451_bool, var_442_int, var_587_string); // 0x31b Func
	var_588_string = "durability"; // 0x31d PushS
	HasProperty(var_452_bool, var_588_string); // 0x31e ObjFunc
	var_589_bool = 0; // 0x320 PushV
	var_589_bool = 1; // 0x321 MovB
	var_590_bool = var_452_bool; // 0x322 Push
	if(var_590_bool == 0) goto Label_807; // 0x323 JumpB
	var_591_bool = var_451_bool; // 0x324 Push
	if(var_591_bool == 0) goto Label_807; // 0x325 JumpB
	var_589_bool = 0; // 0x326 MovB
	
Label_807:
	if(var_589_bool == 0) goto Label_828; // 0x327 JumpB
	var_592_bool = var_452_bool; // 0x328 Push
	if(var_592_bool == 0) goto Label_814; // 0x329 JumpB
	var_593_string = "durability"; // 0x32a PushS
	GetProperty(var_453_int, var_593_string); // 0x32b ObjFunc
	goto Label_815; // 0x32d Jump
	
Label_815:
	var_594_int = 7; // 0x32f PushI
	GetStringByID(var_450_string, var_594_int); // 0x330 Func
	var_595_string = " "; // 0x332 PushS
	var_596_int = var_595_string + var_453_int; // 0x333 Add
	var_597_string = "%"; // 0x334 PushS
	var_598_int = var_596_int + var_597_string; // 0x335 Add
	var_450_string = var_450_string + var_598_int; // 0x336 Add2
	var_599_string = "default"; // 0x337 PushS
	var_600_int = 268; // 0x338 PushI
	GetTextHeightInWidth(var_454_int, var_599_string, var_600_int, var_450_string); // 0x339 Func
	var_449_int = var_449_int + var_454_int; // 0x33b Add2
	
Label_828:
	var_601_string = "HasUses"; // 0x33c PushS
	HasInvItemProperty(var_456_bool, var_442_int, var_601_string); // 0x33d Func
	var_602_string = "uses"; // 0x33f PushS
	HasProperty(var_457_bool, var_602_string); // 0x340 ObjFunc
	var_603_bool = 0; // 0x342 PushV
	var_603_bool = 1; // 0x343 MovB
	var_604_bool = var_457_bool; // 0x344 Push
	if(var_604_bool == 0) goto Label_841; // 0x345 JumpB
	var_605_bool = var_456_bool; // 0x346 Push
	if(var_605_bool == 0) goto Label_841; // 0x347 JumpB
	var_603_bool = 0; // 0x348 MovB
	
Label_841:
	if(var_603_bool == 0) goto Label_860; // 0x349 JumpB
	var_606_bool = var_457_bool; // 0x34a Push
	if(var_606_bool == 0) goto Label_848; // 0x34b JumpB
	var_607_string = "uses"; // 0x34c PushS
	GetProperty(var_458_int, var_607_string); // 0x34d ObjFunc
	goto Label_849; // 0x34f Jump
	
Label_849:
	var_608_int = 1006; // 0x351 PushI
	GetStringByID(var_455_string, var_608_int); // 0x352 Func
	var_609_string = " "; // 0x354 PushS
	var_610_int = var_609_string + var_458_int; // 0x355 Add
	var_455_string = var_455_string + var_610_int; // 0x356 Add2
	var_611_string = "default"; // 0x357 PushS
	var_612_int = 268; // 0x358 PushI
	GetTextHeightInWidth(var_459_int, var_611_string, var_612_int, var_455_string); // 0x359 Func
	var_449_int = var_449_int + var_459_int; // 0x35b Add2
	
Label_860:
	var_461_bool = 0; // 0x35c MovB
	var_613_string = ""; var_614_object = Obj(); // 0x35d PushV
	var_614_object = var_395_object; // 0x35e Mov
	func_193(var_613_string, var_614_object); // 0x35f NEW_2
	var_615_string = "grass_combination"; // 0x361 PushS
	var_616_bool = var_613_string == var_615_string; // 0x362 Eq
	if(var_616_bool == 0) goto Label_902; // 0x363 JumpB
	var_461_bool = 1; // 0x364 MovB
	var_617_string = "im_inc"; // 0x365 PushS
	GetProperty(var_462_float, var_617_string); // 0x366 ObjFunc
	var_618_string = "hl_inc"; // 0x368 PushS
	GetProperty(var_463_float, var_618_string); // 0x369 ObjFunc
	var_619_int = 8; // 0x36b PushI
	GetStringByID(var_465_string, var_619_int); // 0x36c Func
	var_620_int = 9; // 0x36e PushI
	GetStringByID(var_467_string, var_620_int); // 0x36f Func
	var_621_int = 100; // 0x371 PushI
	var_468_int = var_462_float * var_621_int; // 0x372 Mult2
	var_622_string = " "; // 0x373 PushS
	var_623_int = var_465_string + var_622_string; // 0x374 Add
	var_624_int = var_623_int + var_468_int; // 0x375 Add
	var_625_string = "%
"; // 0x376 PushS
	var_460_string = var_624_int + var_625_string; // 0x377 Add2
	var_626_int = 100; // 0x378 PushI
	var_468_int = var_463_float * var_626_int; // 0x379 Mult2
	var_627_string = " "; // 0x37a PushS
	var_628_int = var_467_string + var_627_string; // 0x37b Add
	var_629_int = var_628_int + var_468_int; // 0x37c Add
	var_630_string = "%
"; // 0x37d PushS
	var_631_int = var_629_int + var_630_string; // 0x37e Add
	var_460_string = var_460_string + var_631_int; // 0x37f Add2
	var_632_string = "default"; // 0x380 PushS
	var_633_int = 268; // 0x381 PushI
	GetTextHeightInWidth(var_469_int, var_632_string, var_633_int, var_460_string); // 0x382 Func
	var_449_int = var_449_int + var_469_int; // 0x384 Add2
	goto Label_942; // 0x385 Jump
	
Label_942:
	GetScreenSize(var_476_int, var_477_int); // 0x3ae Func
	var_634_int = var_476_int - var_393_int; // 0x3b0 Sub
	var_635_int = 300; // 0x3b1 PushI
	var_636_bool = var_634_int > var_635_int; // 0x3b2 GT
	if(var_636_bool == 0) goto Label_950; // 0x3b3 JumpB
	var_478_int = var_393_int; // 0x3b4 Mov
	goto Label_952; // 0x3b5 Jump
	
Label_952:
	var_637_bool = var_394_int > var_449_int; // 0x3b8 GT
	if(var_637_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_479_int = var_394_int - var_449_int; // 0x3ba Sub2
	goto Label_963; // 0x3bb Jump
	
Label_963:
	ScreenToClient(var_478_int, var_479_int); // 0x3c3 Func
	var_638_int = 0; var_639_int = 0; var_640_int = 0; var_641_int = 0; var_642_float = 0; // 0x3c5 PushV
	var_638_int = var_478_int; // 0x3c6 Mov
	var_639_int = var_479_int; // 0x3c7 Mov
	var_640_int = 300; // 0x3c8 MovI
	var_641_int = var_449_int; // 0x3c9 Mov
	var_642_float = var_397_float; // 0x3ca Mov
	func_353(var_638_int, var_639_int, var_640_int, var_641_int, var_642_float); // 0x3cb NEW_2
	var_643_int = 0; var_644_int = 0; var_645_object = Obj(); var_646_float = 0; // 0x3cd PushV
	var_647_int = 16; // 0x3ce PushI
	var_643_int = var_478_int + var_647_int; // 0x3cf Add2
	var_648_int = 16; // 0x3d0 PushI
	var_644_int = var_479_int + var_648_int; // 0x3d1 Add2
	var_645_object = var_395_object; // 0x3d2 Mov
	var_646_float = var_397_float; // 0x3d3 Mov
	func_380(var_643_int, var_644_int, var_645_object, var_646_float); // 0x3d4 NEW_2
	var_649_int = 250; // 0x3d6 PushI
	var_479_int = var_479_int + var_649_int; // 0x3d7 Add2
	var_650_string = "default"; // 0x3d8 PushS
	var_651_int = 16; // 0x3d9 PushI
	var_652_int = var_478_int + var_651_int; // 0x3da Add
	var_653_int = 268; // 0x3db PushI
	var_654_float = 0.64706; // 0x3dc PushF
	var_655_float = 0.64706; // 0x3dd PushF
	var_656_float = 0.64706; // 0x3de PushF
	PrintInWidth(var_449_int, var_650_string, var_652_int, var_479_int, var_653_int, var_445_string, var_654_float, var_655_float, var_656_float, var_397_float); // 0x3df Func
	var_479_int = var_479_int + var_449_int; // 0x3e1 Add2
	var_657_bool = 0; // 0x3e2 PushV
	var_657_bool = 1; // 0x3e3 MovB
	var_658_bool = var_452_bool; // 0x3e4 Push
	if(var_658_bool == 0) goto Label_1001; // 0x3e5 JumpB
	var_659_bool = var_451_bool; // 0x3e6 Push
	if(var_659_bool == 0) goto Label_1001; // 0x3e7 JumpB
	var_657_bool = 0; // 0x3e8 MovB
	
Label_1001:
	if(var_657_bool == 0) goto Label_1012; // 0x3e9 JumpB
	var_660_string = "default"; // 0x3ea PushS
	var_661_int = 16; // 0x3eb PushI
	var_662_int = var_478_int + var_661_int; // 0x3ec Add
	var_663_int = 268; // 0x3ed PushI
	var_664_float = 0.64706; // 0x3ee PushF
	var_665_float = 0.64706; // 0x3ef PushF
	var_666_float = 0.64706; // 0x3f0 PushF
	PrintInWidth(var_449_int, var_660_string, var_662_int, var_479_int, var_663_int, var_450_string, var_664_float, var_665_float, var_666_float, var_397_float); // 0x3f1 Func
	var_479_int = var_479_int + var_449_int; // 0x3f3 Add2
	
Label_1012:
	var_667_bool = 0; // 0x3f4 PushV
	var_667_bool = 1; // 0x3f5 MovB
	var_668_bool = var_457_bool; // 0x3f6 Push
	if(var_668_bool == 0) goto Label_1019; // 0x3f7 JumpB
	var_669_bool = var_456_bool; // 0x3f8 Push
	if(var_669_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_667_bool = 0; // 0x3fa MovB
	
Label_1019:
	if(var_667_bool == 0) goto Label_1030; // 0x3fb JumpB
	var_670_string = "default"; // 0x3fc PushS
	var_671_int = 16; // 0x3fd PushI
	var_672_int = var_478_int + var_671_int; // 0x3fe Add
	var_673_int = 268; // 0x3ff PushI
	var_674_float = 0.64706; // 0x400 PushF
	var_675_float = 0.64706; // 0x401 PushF
	var_676_float = 0.64706; // 0x402 PushF
	PrintInWidth(var_449_int, var_670_string, var_672_int, var_479_int, var_673_int, var_455_string, var_674_float, var_675_float, var_676_float, var_397_float); // 0x403 Func
	var_479_int = var_479_int + var_449_int; // 0x405 Add2
	
Label_1030:
	var_677_bool = var_461_bool; // 0x406 Push
	if(var_677_bool == 0) goto Label_1042; // 0x407 JumpB
	var_678_string = "default"; // 0x408 PushS
	var_679_int = 16; // 0x409 PushI
	var_680_int = var_478_int + var_679_int; // 0x40a Add
	var_681_int = 268; // 0x40b PushI
	var_682_float = 0.64706; // 0x40c PushF
	var_683_float = 0.64706; // 0x40d PushF
	var_684_float = 0.64706; // 0x40e PushF
	PrintInWidth(var_449_int, var_678_string, var_680_int, var_479_int, var_681_int, var_460_string, var_682_float, var_683_float, var_684_float, var_397_float); // 0x40f Func
	var_479_int = var_479_int + var_449_int; // 0x411 Add2
	
Label_1042:
	return 82; // 0x412 Return
	
Label_956:
	var_479_int = var_394_int; // 0x3bc Mov
	var_685_int = var_479_int + var_449_int; // 0x3bd Add
	var_686_int = 600; // 0x3be PushI
	var_687_bool = var_685_int > var_686_int; // 0x3bf GT
	if(var_687_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_688_int = 600; // 0x3c1 PushI
	var_479_int = var_688_int - var_449_int; // 0x3c2 Sub2
	
Label_950:
	var_689_int = 300; // 0x3b6 PushI
	var_478_int = var_393_int - var_689_int; // 0x3b7 Sub2
	
Label_902:
	var_690_string = ""; var_691_object = Obj(); // 0x386 PushV
	var_691_object = var_395_object; // 0x387 Mov
	func_193(var_690_string, var_691_object); // 0x388 NEW_2
	var_692_string = "organ_combination"; // 0x38a PushS
	var_693_bool = var_690_string == var_692_string; // 0x38b Eq
	if(var_693_bool == 0) goto Label_942; // 0x38c JumpB
	var_461_bool = 1; // 0x38d MovB
	var_694_string = "DiseaseRate"; // 0x38e PushS
	GetProperty(var_470_float, var_694_string); // 0x38f ObjFunc
	var_695_string = "HealthIncrease"; // 0x391 PushS
	GetProperty(var_471_float, var_695_string); // 0x392 ObjFunc
	var_696_int = 11; // 0x394 PushI
	GetStringByID(var_472_string, var_696_int); // 0x395 Func
	var_697_int = 13; // 0x397 PushI
	GetStringByID(var_473_string, var_697_int); // 0x398 Func
	var_698_int = 100; // 0x39a PushI
	var_474_int = var_470_float * var_698_int; // 0x39b Mult2
	var_699_string = " "; // 0x39c PushS
	var_700_int = var_472_string + var_699_string; // 0x39d Add
	var_701_int = var_700_int + var_474_int; // 0x39e Add
	var_702_string = "%
"; // 0x39f PushS
	var_460_string = var_701_int + var_702_string; // 0x3a0 Add2
	var_703_int = 100; // 0x3a1 PushI
	var_474_int = var_471_float * var_703_int; // 0x3a2 Mult2
	var_704_string = " "; // 0x3a3 PushS
	var_705_int = var_473_string + var_704_string; // 0x3a4 Add
	var_706_int = var_705_int + var_474_int; // 0x3a5 Add
	var_707_string = "%
"; // 0x3a6 PushS
	var_708_int = var_706_int + var_707_string; // 0x3a7 Add
	var_460_string = var_460_string + var_708_int; // 0x3a8 Add2
	var_709_string = "default"; // 0x3a9 PushS
	var_710_int = 268; // 0x3aa PushI
	GetTextHeightInWidth(var_475_int, var_709_string, var_710_int, var_460_string); // 0x3ab Func
	var_449_int = var_449_int + var_475_int; // 0x3ad Add2
	
Label_848:
	var_458_int = 1; // 0x350 MovI
	
Label_814:
	var_453_int = 100; // 0x32e MovI
	
Label_778:
	var_445_string = "Error: Item doesnt have description (FIXME!)"; // 0x30a MovS
	
Label_756:
	var_711_float = 0; var_712_object = Obj(); var_713_int = 0; var_714_int = 0; // 0x2f4 PushV
	var_712_object = var_439_object; // 0x2f5 Mov
	var_713_int = var_441_int; // 0x2f6 Mov
	var_715_int = 0; // 0x2f7 PushV
	func_264(var_715_int); // 0x2f8 NEW_2
	var_714_int = var_715_int; // 0x2f9 Mov
	func_238(var_712_object, var_713_int, var_714_int); // 0x2fb NEW_2
	var_444_float = var_711_float; // 0x2fc Mov
}


func_1167(var_741_int, var_742_int, var_743_string, var_745_float)
{
	var_746_int = 0; var_747_int = 0; var_748_int = 0; var_749_int = 0; var_750_int = 0; var_751_int = 0; var_752_int = 0; var_753_int = 0; var_754_int = 0; var_755_int = 0; // 0x48f PushV
	var_745_float = 1; // 0x490 MovI
	var_756_string = "default"; // 0x491 PushS
	var_757_int = 268; // 0x492 PushI
	GetTextHeightInWidth(var_751_int, var_756_string, var_757_int, var_743_string); // 0x493 Func
	var_758_int = 32; // 0x495 PushI
	var_751_int = var_751_int + var_758_int; // 0x496 Add2
	GetScreenSize(var_752_int, var_753_int); // 0x497 Func
	var_759_int = var_752_int - var_741_int; // 0x499 Sub
	var_760_int = 300; // 0x49a PushI
	var_761_bool = var_759_int > var_760_int; // 0x49b GT
	if(var_761_bool == 0) goto Label_1183; // 0x49c JumpB
	var_754_int = var_741_int; // 0x49d Mov
	goto Label_1185; // 0x49e Jump
	
Label_1185:
	var_762_bool = var_742_int > var_751_int; // 0x4a1 GT
	if(var_762_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_755_int = var_742_int - var_751_int; // 0x4a3 Sub2
	goto Label_1196; // 0x4a4 Jump
	
Label_1196:
	ScreenToClient(var_754_int, var_755_int); // 0x4ac Func
	var_763_int = 0; var_764_int = 0; var_765_int = 0; var_766_int = 0; var_767_float = 0; // 0x4ae PushV
	var_763_int = var_754_int; // 0x4af Mov
	var_764_int = var_755_int; // 0x4b0 Mov
	var_765_int = 300; // 0x4b1 MovI
	var_766_int = var_751_int; // 0x4b2 Mov
	var_767_float = var_745_float; // 0x4b3 Mov
	func_353(var_763_int, var_764_int, var_765_int, var_766_int, var_767_float); // 0x4b4 NEW_2
	var_768_string = "default"; // 0x4b6 PushS
	var_769_int = 16; // 0x4b7 PushI
	var_770_int = var_754_int + var_769_int; // 0x4b8 Add
	var_771_int = 16; // 0x4b9 PushI
	var_772_int = var_755_int + var_771_int; // 0x4ba Add
	var_773_int = 268; // 0x4bb PushI
	var_774_float = 0.64706; // 0x4bc PushF
	var_775_float = 0.64706; // 0x4bd PushF
	var_776_float = 0.64706; // 0x4be PushF
	PrintInWidth(var_751_int, var_768_string, var_770_int, var_772_int, var_773_int, var_743_string, var_774_float, var_775_float, var_776_float, var_745_float); // 0x4bf Func
	return 10; // 0x4c1 Return
	
Label_1189:
	var_755_int = var_742_int; // 0x4a5 Mov
	var_777_int = var_755_int + var_751_int; // 0x4a6 Add
	var_778_int = 600; // 0x4a7 PushI
	var_779_bool = var_777_int > var_778_int; // 0x4a8 GT
	if(var_779_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_780_int = 600; // 0x4aa PushI
	var_755_int = var_780_int - var_751_int; // 0x4ab Sub2
	
Label_1183:
	var_781_int = 300; // 0x49f PushI
	var_754_int = var_741_int - var_781_int; // 0x4a0 Sub2
}


func_238(var_711_float, var_713_int, var_714_int)
{
	var_716_float = 0; var_717_int = 0; var_718_bool = 0; var_719_float = 0; var_720_int = 0; var_721_bool = 0; // 0xee PushV
	var_722_int = 0; // 0xef PushI
	var_723_bool = var_714_int != var_722_int; // 0xf0 Neq
	if(var_723_bool == 0) goto Label_244; // 0xf1 JumpB
	var_711_float = 1; // 0xf2 MovI
	return 6; // 0xf3 Return
	
Label_244:
	var_719_float = 1; // 0xf4 MovI
	var_720_int = 1; // 0xf5 MovI
	
Label_246:
	var_724_bool = var_720_int <= var_713_int; // 0xf6 LE
	if(var_724_bool == 0) goto Label_261; // 0xf7 JumpB
	var_725_string = "buyf"; // 0xf8 PushS
	var_726_int = var_725_string + var_720_int; // 0xf9 Add
	HasProperty(var_726_int, var_721_bool); // 0xfa ObjFunc
	var_727_bool = var_721_bool; // 0xfc Push
	if(var_727_bool == 0) goto Label_258; // 0xfd JumpB
	var_728_string = "buyf"; // 0xfe PushS
	var_729_int = var_728_string + var_720_int; // 0xff Add
	GetProperty(var_729_int, var_719_float); // 0x100 ObjFunc
	
Label_258:
	var_730_int = 1; // 0x102 PushI
	var_720_int = var_720_int + var_730_int; // 0x103 Add2
	goto Label_246; // 0x104 Jump
	
Label_261:
	var_731_int = 100; // 0x105 PushI
	var_711_float = var_719_float / var_719_float; // 0x106 Div2
	return 6; // 0x107 Return
}


func_114(var_486_int, var_487_object, var_488_int)
{
	var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_string = ""; var_503_bool = 0; var_504_bool = 0; var_505_int = 0; var_506_bool = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0; var_510_int = 0; var_511_string = ""; var_512_bool = 0; var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_int = 0; // 0x72 PushV
	var_517_int = 0; // 0x73 PushI
	var_518_bool = var_488_int == var_517_int; // 0x74 Eq
	if(var_518_bool == 0) goto Label_166; // 0x75 JumpB
	var_519_int = 0; // 0x76 PushV
	func_203(var_519_int); // 0x77 NEW_2
	var_508_int = var_519_int; // 0x78 Mov
	var_509_int = 0; // 0x7a MovI
	var_510_int = 1; // 0x7b MovI
	
Label_124:
	var_525_bool = var_510_int <= var_508_int; // 0x7c LE
	if(var_525_bool == 0) goto Label_149; // 0x7d JumpB
	var_511_string = "Price"; // 0x7e MovS
	var_526_int = 1; // 0x7f PushI
	var_527_bool = var_510_int != var_526_int; // 0x80 Neq
	if(var_527_bool == 0) goto Label_131; // 0x81 JumpB
	var_511_string = var_511_string + var_510_int; // 0x82 Add2
	
Label_131:
	var_528_int = 0; var_529_object = Obj(); // 0x83 PushV
	var_529_object = var_487_object; // 0x84 Mov
	func_109(var_529_object); // 0x85 NEW_2
	HasInvItemProperty(var_512_bool, var_528_int, var_511_string); // 0x87 Func
	var_530_bool = var_512_bool == 0; // 0x89 Not
	if(var_530_bool == 0) goto Label_140; // 0x8a JumpB
	goto Label_146; // 0x8b Jump
	
Label_146:
	var_531_int = 1; // 0x92 PushI
	var_510_int = var_510_int + var_531_int; // 0x93 Add2
	goto Label_124; // 0x94 Jump
	
Label_140:
	var_532_int = 0; var_533_object = Obj(); // 0x8c PushV
	var_533_object = var_487_object; // 0x8d Mov
	func_109(var_533_object); // 0x8e NEW_2
	GetInvItemProperty(var_509_int, var_532_int, var_511_string); // 0x90 Func
	
Label_149:
	var_534_string = "durability"; // 0x95 PushS
	HasProperty(var_513_bool, var_534_string); // 0x96 ObjFunc
	var_535_bool = var_513_bool; // 0x98 Push
	if(var_535_bool == 0) goto Label_164; // 0x99 JumpB
	var_536_string = "durability"; // 0x9a PushS
	GetProperty(var_514_int, var_536_string); // 0x9b ObjFunc
	var_537_float = 0.5; // 0x9d PushF
	var_538_float = 1.0; // 0x9e PushF
	var_539_float = 100.0; // 0x9f PushF
	var_540_float = var_514_int / var_539_float; // 0xa0 Div
	var_541_int = var_538_float + var_540_float; // 0xa1 Add
	var_542_float = var_537_float * var_541_int; // 0xa2 Mult
	var_509_int = var_509_int * var_542_float; // 0xa3 Mult2
	
Label_164:
	var_486_int = var_509_int; // 0xa4 Mov
	return 18; // 0xa5 Return
	
Label_166:
	var_543_int = 0; var_544_object = Obj(); // 0xa6 PushV
	var_544_object = var_487_object; // 0xa7 Mov
	func_109(var_544_object); // 0xa8 NEW_2
	var_545_string = "BarterPrice"; // 0xaa PushS
	var_546_int = var_545_string + var_488_int; // 0xab Add
	HasInvItemProperty(var_515_bool, var_543_int, var_546_int); // 0xac Func
	var_547_bool = var_515_bool == 0; // 0xae Not
	if(var_547_bool == 0) goto Label_178; // 0xaf JumpB
	var_486_int = 0; // 0xb0 MovI
	return 18; // 0xb1 Return
	
Label_178:
	var_548_int = 0; var_549_object = Obj(); // 0xb2 PushV
	var_549_object = var_487_object; // 0xb3 Mov
	func_109(var_549_object); // 0xb4 NEW_2
	var_550_string = "BarterPrice"; // 0xb6 PushS
	var_551_int = var_550_string + var_488_int; // 0xb7 Add
	GetInvItemProperty(var_516_int, var_548_int, var_551_int); // 0xb8 Func
	var_552_int = 0; // 0xba PushI
	var_553_bool = var_516_int > var_552_int; // 0xbb GT
	if(var_553_bool == 0) goto Label_191; // 0xbc JumpB
	var_486_int = var_516_int; // 0xbd Mov
	return 18; // 0xbe Return
	
Label_191:
	var_486_int = -var_516_int; // 0xbf Neg2
	return 18; // 0xc0 Return
}


func_1044(var_299_int, var_300_int, var_301_object, var_302_float)
{
	var_303_int = 0; var_304_object = Obj(); var_305_string = ""; var_306_string = ""; var_307_int = 0; var_308_int = 0; var_309_float = 0; var_310_int = 0; var_311_float = 0; var_312_float = 0; var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_object = Obj(); var_322_string = ""; var_323_string = ""; var_324_int = 0; var_325_int = 0; var_326_float = 0; var_327_int = 0; var_328_float = 0; var_329_float = 0; var_330_int = 0; var_331_int = 0; var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0; var_336_int = 0; // 0x414 PushV
	var_337_bool = var_301_object == 0; // 0x415 Not
	if(var_337_bool == 0) goto Label_1048; // 0x416 JumpB
	return 34; // 0x417 Return
	
Label_1048:
	var_302_float = 1; // 0x418 MovI
	size(var_320_int); // 0x419 ObjFunc
	var_338_bool = var_320_int == 0; // 0x41b Not
	if(var_338_bool == 0) goto Label_1054; // 0x41c JumpB
	return 34; // 0x41d Return
	
Label_1054:
	var_339_int = var_320_int; // 0x41e Push
	if(var_339_int == 0) goto Label_1117; // 0x41f JumpB
	var_325_int = 0; // 0x420 MovI
	var_326_float = 0; // 0x421 MovI
	var_327_int = 0; // 0x422 MovI
	
Label_1059:
	var_340_bool = var_327_int < var_320_int; // 0x423 LT
	if(var_340_bool == 0) goto Label_1072; // 0x424 JumpB
	get(var_321_object, var_327_int); // 0x425 ObjFunc
	GetTime(var_328_float); // 0x427 ObjFunc
	var_341_bool = var_328_float > var_326_float; // 0x429 GT
	if(var_341_bool == 0) goto Label_1069; // 0x42a JumpB
	var_326_float = var_328_float; // 0x42b Mov
	var_325_int = var_327_int; // 0x42c Mov
	
Label_1069:
	var_342_int = 1; // 0x42d PushI
	var_327_int = var_327_int + var_342_int; // 0x42e Add2
	goto Label_1059; // 0x42f Jump
	
Label_1072:
	get(var_321_object, var_325_int); // 0x430 ObjFunc
	GetTextID(var_324_int); // 0x432 ObjFunc
	GetStringByID(var_323_string, var_324_int); // 0x434 Func
	GetTime(var_329_float); // 0x436 ObjFunc
	var_343_int = 0; // 0x438 PushV
	var_343_int = var_329_float; // 0x439 Mov
	var_330_int = var_343_int; // 0x43a Mov
	var_344_int = 60; // 0x43c PushI
	var_345_int = var_329_float - var_330_int; // 0x43d Sub
	var_331_int = var_344_int * var_345_int; // 0x43e Mult2
	var_346_int = 10; // 0x43f PushI
	var_347_bool = var_331_int < var_346_int; // 0x440 LT
	if(var_347_bool == 0) goto Label_1099; // 0x441 JumpB
	var_348_int = 24; // 0x442 PushI
	var_349_int = var_330_int / var_348_int; // 0x443 Mod
	var_350_string = ":0"; // 0x444 PushS
	var_351_int = var_349_int + var_350_string; // 0x445 Add
	var_352_int = var_351_int + var_331_int; // 0x446 Add
	var_353_string = " "; // 0x447 PushS
	var_354_int = var_352_int + var_353_string; // 0x448 Add
	var_322_string = var_322_string + var_354_int; // 0x449 Add2
	goto Label_1107; // 0x44a Jump
	
Label_1107:
	var_322_string = var_322_string + var_323_string; // 0x453 Add2
	remove(var_325_int); // 0x454 ObjFunc
	var_355_int = -1; // 0x456 PushI
	var_320_int = var_320_int + var_355_int; // 0x457 Add2
	var_356_int = var_320_int; // 0x458 Push
	if(var_356_int == 0) goto Label_1116; // 0x459 JumpB
	var_357_string = "

"; // 0x45a PushS
	var_322_string = var_322_string + var_357_string; // 0x45b Add2
	
Label_1116:
	goto Label_1054; // 0x45c Jump
	
Label_1099:
	var_358_int = 24; // 0x44b PushI
	var_359_int = var_330_int / var_358_int; // 0x44c Mod
	var_360_string = ":"; // 0x44d PushS
	var_361_int = var_359_int + var_360_string; // 0x44e Add
	var_362_int = var_361_int + var_331_int; // 0x44f Add
	var_363_string = " "; // 0x450 PushS
	var_364_int = var_362_int + var_363_string; // 0x451 Add
	var_322_string = var_322_string + var_364_int; // 0x452 Add2
	
Label_1117:
	var_365_string = "default"; // 0x45d PushS
	var_366_int = 268; // 0x45e PushI
	GetTextHeightInWidth(var_332_int, var_365_string, var_366_int, var_322_string); // 0x45f Func
	var_367_int = 32; // 0x461 PushI
	var_332_int = var_332_int + var_367_int; // 0x462 Add2
	GetScreenSize(var_333_int, var_334_int); // 0x463 Func
	var_368_int = var_333_int - var_299_int; // 0x465 Sub
	var_369_int = 300; // 0x466 PushI
	var_370_bool = var_368_int > var_369_int; // 0x467 GT
	if(var_370_bool == 0) goto Label_1131; // 0x468 JumpB
	var_335_int = var_299_int; // 0x469 Mov
	goto Label_1133; // 0x46a Jump
	
Label_1133:
	var_371_bool = var_300_int > var_332_int; // 0x46d GT
	if(var_371_bool == 0) goto Label_1137; // 0x46e JumpB
	var_336_int = var_300_int - var_332_int; // 0x46f Sub2
	goto Label_1144; // 0x470 Jump
	
Label_1144:
	ScreenToClient(var_335_int, var_336_int); // 0x478 Func
	var_372_int = 0; var_373_int = 0; var_374_int = 0; var_375_int = 0; var_376_float = 0; // 0x47a PushV
	var_372_int = var_335_int; // 0x47b Mov
	var_373_int = var_336_int; // 0x47c Mov
	var_374_int = 300; // 0x47d MovI
	var_375_int = var_332_int; // 0x47e Mov
	var_376_float = var_302_float; // 0x47f Mov
	func_353(var_372_int, var_373_int, var_374_int, var_375_int, var_376_float); // 0x480 NEW_2
	var_377_string = "default"; // 0x482 PushS
	var_378_int = 16; // 0x483 PushI
	var_379_int = var_335_int + var_378_int; // 0x484 Add
	var_380_int = 16; // 0x485 PushI
	var_381_int = var_336_int + var_380_int; // 0x486 Add
	var_382_int = 268; // 0x487 PushI
	var_383_float = 0.64706; // 0x488 PushF
	var_384_float = 0.64706; // 0x489 PushF
	var_385_float = 0.64706; // 0x48a PushF
	PrintInWidth(var_332_int, var_377_string, var_379_int, var_381_int, var_382_int, var_322_string, var_383_float, var_384_float, var_385_float, var_302_float); // 0x48b Func
	return 34; // 0x48d Return
	
Label_1137:
	var_336_int = var_300_int; // 0x471 Mov
	var_386_int = var_336_int + var_332_int; // 0x472 Add
	var_387_int = 600; // 0x473 PushI
	var_388_bool = var_386_int > var_387_int; // 0x474 GT
	if(var_388_bool == 0) goto Label_1144; // 0x475 JumpB
	var_389_int = 600; // 0x476 PushI
	var_336_int = var_389_int - var_332_int; // 0x477 Sub2
	
Label_1131:
	var_390_int = 300; // 0x46b PushI
	var_335_int = var_299_int - var_390_int; // 0x46c Sub2
}


func_212(var_555_float, var_557_int, var_558_int)
{
	var_560_float = 0; var_561_int = 0; var_562_bool = 0; var_563_float = 0; var_564_int = 0; var_565_bool = 0; // 0xd4 PushV
	var_566_int = 0; // 0xd5 PushI
	var_567_bool = var_558_int != var_566_int; // 0xd6 Neq
	if(var_567_bool == 0) goto Label_218; // 0xd7 JumpB
	var_555_float = 1; // 0xd8 MovI
	return 6; // 0xd9 Return
	
Label_218:
	var_563_float = 1; // 0xda MovI
	var_564_int = 1; // 0xdb MovI
	
Label_220:
	var_568_bool = var_564_int <= var_557_int; // 0xdc LE
	if(var_568_bool == 0) goto Label_235; // 0xdd JumpB
	var_569_string = "sellf"; // 0xde PushS
	var_570_int = var_569_string + var_564_int; // 0xdf Add
	HasProperty(var_570_int, var_565_bool); // 0xe0 ObjFunc
	var_571_bool = var_565_bool; // 0xe2 Push
	if(var_571_bool == 0) goto Label_232; // 0xe3 JumpB
	var_572_string = "sellf"; // 0xe4 PushS
	var_573_int = var_572_string + var_564_int; // 0xe5 Add
	GetProperty(var_573_int, var_563_float); // 0xe6 ObjFunc
	
Label_232:
	var_574_int = 1; // 0xe8 PushI
	var_564_int = var_564_int + var_574_int; // 0xe9 Add2
	goto Label_220; // 0xea Jump
	
Label_235:
	var_575_int = 100; // 0xeb PushI
	var_555_float = var_563_float / var_563_float; // 0xec Div2
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


func_380(var_192_int, var_193_int, var_194_object, var_195_float)
{
	var_198_int = 0; var_199_string = ""; var_200_int = 0; var_201_string = ""; // 0x17c PushV
	var_202_bool = var_194_object == 0; // 0x17d Not
	if(var_202_bool == 0) goto Label_384; // 0x17e JumpB
	return 4; // 0x17f Return
	
Label_384:
	var_203_int = 0; var_204_object = Obj(); // 0x180 PushV
	var_204_object = var_194_object; // 0x181 Mov
	func_109(var_204_object); // 0x182 NEW_2
	var_200_int = var_203_int; // 0x183 Mov
	GetInvItemSprite2(var_201_string, var_200_int); // 0x185 Func
	var_205_int = 218; // 0x187 PushI
	var_206_int = 218; // 0x188 PushI
	StretchBlit(var_201_string, var_192_int, var_193_int, var_205_int, var_206_int, var_195_float); // 0x189 Func
	var_207_string = "border"; // 0x18b PushS
	var_208_int = 218; // 0x18c PushI
	var_209_int = 1; // 0x18d PushI
	StretchBlit(var_207_string, var_192_int, var_193_int, var_208_int, var_209_int, var_195_float); // 0x18e Func
	var_210_string = "border"; // 0x190 PushS
	var_211_int = 218; // 0x191 PushI
	var_212_int = var_193_int + var_211_int; // 0x192 Add
	var_213_int = 1; // 0x193 PushI
	var_214_int = var_212_int - var_213_int; // 0x194 Sub
	var_215_int = 218; // 0x195 PushI
	var_216_int = 1; // 0x196 PushI
	StretchBlit(var_210_string, var_192_int, var_214_int, var_215_int, var_216_int, var_195_float); // 0x197 Func
	var_217_string = "border"; // 0x199 PushS
	var_218_int = 1; // 0x19a PushI
	var_219_int = 218; // 0x19b PushI
	StretchBlit(var_217_string, var_192_int, var_193_int, var_218_int, var_219_int, var_195_float); // 0x19c Func
	var_220_string = "border"; // 0x19e PushS
	var_221_int = 218; // 0x19f PushI
	var_222_int = var_192_int + var_221_int; // 0x1a0 Add
	var_223_int = 1; // 0x1a1 PushI
	var_224_int = var_222_int - var_223_int; // 0x1a2 Sub
	var_225_int = 1; // 0x1a3 PushI
	var_226_int = 218; // 0x1a4 PushI
	StretchBlit(var_220_string, var_224_int, var_193_int, var_225_int, var_226_int, var_195_float); // 0x1a5 Func
	return 4; // 0x1a7 Return
}


