task_0_event_100(var_0_int, var_1_object, var_2_int)
{
	DestroyWindow(); // 0xbe Func
	return 0; // 0xc0 Return
}


task_0_event_1(var_0_int, var_1_object, var_2_float)
{
	var_3_int = 0; // 0xd6 PushV
	var_3_int = var_0_int; // 0xd7 MovT
	func_484(var_3_int); // 0xd8 NEW_2
	func_365(); // 0xdb NEW_2
	func_18(); // 0xde NEW_2
	return 0; // 0xe0 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_string, var_4_object)
{
	var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); // 0xe1 PushV
	var_11_bool = 0; // 0xe2 MovB
	var_17_string = "button_weapon"; // 0xe3 PushS
	var_18_bool = var_3_string == var_17_string; // 0xe4 Eq
	if(var_18_bool == 0) goto Label_236; // 0xe5 JumpB
	var_19_int = 0; // 0xe6 PushV
	var_19_int = 0; // 0xe7 MovI
	func_340(var_16_object, var_19_int); // 0xe8 NEW_2
	var_11_bool = 1; // 0xea MovB
	goto Label_328; // 0xeb Jump
	
Label_328:
	var_54_bool = var_11_bool == 0; // 0x148 Not
	if(var_54_bool == 0) goto Label_337; // 0x149 JumpB
	var_55_bool = 0; var_56_int = 0; var_57_string = ""; var_58_object = Obj(); // 0x14a PushV
	var_56_int = var_2_int; // 0x14b Mov
	var_57_string = var_3_string; // 0x14c Mov
	var_58_object = var_4_object; // 0x14d Mov
	func_15(var_58_object); // 0x14e NEW_2
	var_11_bool = var_55_bool; // 0x14f Mov
	
Label_337:
	var_59_bool = var_11_bool; // 0x151 Push
	if(var_59_bool == 0) goto Label_339; // 0x152 JumpB
	
Label_339:
	return 12; // 0x153 Return
	
Label_236:
	var_60_string = "button_clothes"; // 0xec PushS
	var_61_bool = var_3_string == var_60_string; // 0xed Eq
	if(var_61_bool == 0) goto Label_245; // 0xee JumpB
	var_62_int = 0; // 0xef PushV
	var_62_int = 1; // 0xf0 MovI
	func_340(var_16_object, var_62_int); // 0xf1 NEW_2
	var_11_bool = 1; // 0xf3 MovB
	goto Label_328; // 0xf4 Jump
	
Label_245:
	var_63_string = "button_medcine"; // 0xf5 PushS
	var_64_bool = var_3_string == var_63_string; // 0xf6 Eq
	if(var_64_bool == 0) goto Label_254; // 0xf7 JumpB
	var_65_int = 0; // 0xf8 PushV
	var_65_int = 2; // 0xf9 MovI
	func_340(var_16_object, var_65_int); // 0xfa NEW_2
	var_11_bool = 1; // 0xfc MovB
	goto Label_328; // 0xfd Jump
	
Label_254:
	var_66_string = "button_food"; // 0xfe PushS
	var_67_bool = var_3_string == var_66_string; // 0xff Eq
	if(var_67_bool == 0) goto Label_263; // 0x100 JumpB
	var_68_int = 0; // 0x101 PushV
	var_68_int = 3; // 0x102 MovI
	func_340(var_16_object, var_68_int); // 0x103 NEW_2
	var_11_bool = 1; // 0x105 MovB
	goto Label_328; // 0x106 Jump
	
Label_263:
	var_69_string = "button_other"; // 0x107 PushS
	var_70_bool = var_3_string == var_69_string; // 0x108 Eq
	if(var_70_bool == 0) goto Label_272; // 0x109 JumpB
	var_71_int = 0; // 0x10a PushV
	var_71_int = 4; // 0x10b MovI
	func_340(var_16_object, var_71_int); // 0x10c NEW_2
	var_11_bool = 1; // 0x10e MovB
	goto Label_328; // 0x10f Jump
	
Label_272:
	var_72_string = "button_detector"; // 0x110 PushS
	var_73_bool = var_3_string == var_72_string; // 0x111 Eq
	if(var_73_bool == 0) goto Label_276; // 0x112 JumpB
	goto Label_328; // 0x113 Jump
	
Label_276:
	var_74_string = "button_anticeptic"; // 0x114 PushS
	var_75_bool = var_3_string == var_74_string; // 0x115 Eq
	if(var_75_bool == 0) goto Label_280; // 0x116 JumpB
	goto Label_328; // 0x117 Jump
	
Label_280:
	var_76_int = 0; // 0x118 PushI
	var_77_bool = var_2_int != var_76_int; // 0x119 Neq
	if(var_77_bool == 0) goto Label_289; // 0x11a JumpB
	var_78_string = "noinv_drop"; // 0x11b PushS
	GetVariable(var_78_string, var_12_int); // 0x11c Func
	var_79_int = var_12_int; // 0x11e Push
	if(var_79_int == 0) goto Label_289; // 0x11f JumpB
	return 12; // 0x120 Return
	
Label_289:
	var_13_int = 0; // 0x121 MovI
	
Label_290:
	var_80_int = 12; // 0x122 PushI
	var_81_bool = var_13_int < var_80_int; // 0x123 LT
	if(var_81_bool == 0) goto Label_328; // 0x124 JumpB
	var_82_string = ""; var_83_int = 0; // 0x125 PushV
	var_83_int = var_13_int; // 0x126 Mov
	func_571(var_82_string, var_83_int); // 0x127 NEW_2
	var_94_bool = var_3_string == var_82_string; // 0x129 Eq
	if(var_94_bool == 0) goto Label_325; // 0x12a JumpB
	var_95_object = Obj(); // 0x12b PushV
	func_9(var_95_object); // 0x12c NEW_2
	var_14_object = var_95_object; // 0x12d Mov
	GetItemCount(var_15_int, var_0_int); // 0x12f ObjFunc
	var_98_bool = var_15_int > var_13_int; // 0x131 GT
	if(var_98_bool == 0) goto Label_323; // 0x132 JumpB
	GetItem(var_16_object, var_13_int, var_0_int); // 0x133 ObjFunc
	var_99_bool = 0; var_100_object = Obj(); // 0x135 PushV
	var_100_object = var_16_object; // 0x136 Mov
	func_193(var_100_object); // 0x137 NEW_2
	var_101_bool = var_99_bool == 0; // 0x139 Not
	if(var_101_bool == 0) goto Label_322; // 0x13a JumpB
	var_102_bool = 0; var_103_int = 0; var_104_bool = 0; // 0x13b PushV
	var_103_int = var_13_int; // 0x13c Mov
	var_105_int = 0; // 0x13d PushI
	var_104_bool = var_2_int == var_105_int; // 0x13e Eq2
	func_20(var_16_object, var_102_bool, var_103_int, var_104_bool); // 0x13f NEW_2
	var_11_bool = var_102_bool; // 0x140 Mov
	
Label_322:
	var_16_object = 0; // 0x142 SetNull
	
Label_323:
	goto Label_328; // 0x143 Jump
	
Label_325:
	var_211_int = 1; // 0x145 PushI
	var_13_int = var_13_int + var_211_int; // 0x146 Add2
	goto Label_290; // 0x147 Jump
}


main(var_0_int, var_1_object)
{
	var_2_string = "inventory_base.xml"; // 0x0 PushS
	var_3_bool = 0; // 0x1 PushB
	CreateWindow(var_2_string, var_3_bool, var_3_bool); // 0x2 Func
	var_4_int = 0; // 0x4 PushV
	var_4_int = 0; // 0x5 MovI
	func_157(var_1_object, var_4_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_193(var_70_bool)
{
	var_70_bool = 0; // 0xc2 MovB
	return 0; // 0xc3 Return
}


func_354(var_105_int)
{
	var_106_object = Obj(); var_107_int = 0; var_108_object = Obj(); var_109_int = 0; // 0x162 PushV
	var_110_object = Obj(); // 0x163 PushV
	func_9(var_110_object); // 0x164 NEW_2
	var_108_object = var_110_object; // 0x165 Mov
	var_111_string = "money"; // 0x167 PushS
	GetProperty(var_111_string, var_109_int); // 0x168 ObjFunc
	var_105_int = var_109_int; // 0x16a Mov
	return 4; // 0x16b Return
}


func_35(var_0_int, var_107_int)
{
	var_108_object = Obj(); var_109_int = 0; var_110_object = Obj(); var_111_int = 0; var_112_int = 0; var_113_bool = 0; var_114_bool = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_bool = 0; var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_bool = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_object = Obj(); var_129_int = 0; var_130_int = 0; var_131_bool = 0; var_132_bool = 0; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_int = 0; var_137_bool = 0; var_138_object = Obj(); var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_bool = 0; var_143_bool = 0; // 0x23 PushV
	var_144_object = Obj(); // 0x24 PushV
	func_9(var_144_object); // 0x25 NEW_2
	var_126_object = var_144_object; // 0x26 Mov
	GetItemCount(var_127_int, var_0_int); // 0x28 ObjFunc
	var_145_bool = var_107_int >= var_127_int; // 0x2a GE
	if(var_145_bool == 0) goto Label_45; // 0x2b JumpB
	return 36; // 0x2c Return
	
Label_45:
	GetItem(var_128_object, var_107_int, var_0_int); // 0x2d ObjFunc
	GetItemID(var_129_int); // 0x2f ObjFunc
	GetItemAmount(var_130_int, var_107_int, var_0_int); // 0x31 ObjFunc
	IsItemSelected(var_131_bool, var_107_int, var_0_int); // 0x33 ObjFunc
	var_146_int = 0; // 0x35 PushI
	var_147_bool = var_0_int == var_146_int; // 0x36 Eq
	if(var_147_bool == 0) goto Label_86; // 0x37 JumpB
	var_148_string = "Weapon"; // 0x38 PushS
	HasInvItemProperty(var_132_bool, var_129_int, var_148_string); // 0x39 Func
	var_149_bool = var_132_bool == 0; // 0x3b Not
	if(var_149_bool == 0) goto Label_62; // 0x3c JumpB
	return 36; // 0x3d Return
	
Label_62:
	var_150_bool = var_131_bool; // 0x3e Push
	if(var_150_bool == 0) goto Label_71; // 0x3f JumpB
	var_151_bool = 0; // 0x40 PushB
	SelectItem(var_107_int, var_151_bool, var_0_int); // 0x41 ObjFunc
	var_152_int = -1; // 0x43 PushI
	SetPlayerHandsItem(var_152_int); // 0x44 Func
	goto Label_85; // 0x46 Jump
	
Label_85:
	goto Label_154; // 0x55 Jump
	
Label_154:
	return 36; // 0x9a Return
	
Label_71:
	SetPlayerHandsItem(var_129_int); // 0x47 Func
	var_133_int = 0; // 0x49 MovI
	
Label_74:
	var_153_bool = var_133_int < var_127_int; // 0x4a LT
	if(var_153_bool == 0) goto Label_82; // 0x4b JumpB
	var_154_bool = 0; // 0x4c PushB
	SelectItem(var_133_int, var_154_bool, var_0_int); // 0x4d ObjFunc
	var_155_int = 1; // 0x4f PushI
	var_133_int = var_133_int + var_155_int; // 0x50 Add2
	goto Label_74; // 0x51 Jump
	
Label_82:
	var_156_bool = 1; // 0x52 PushB
	SelectItem(var_107_int, var_156_bool, var_0_int); // 0x53 ObjFunc
	
Label_86:
	var_157_int = 1; // 0x56 PushI
	var_158_bool = var_0_int == var_157_int; // 0x57 Eq
	if(var_158_bool == 0) goto Label_139; // 0x58 JumpB
	var_159_string = "Group"; // 0x59 PushS
	HasInvItemProperty(var_134_bool, var_129_int, var_159_string); // 0x5a Func
	var_160_bool = var_134_bool == 0; // 0x5c Not
	if(var_160_bool == 0) goto Label_95; // 0x5d JumpB
	return 36; // 0x5e Return
	
Label_95:
	var_161_string = "Group"; // 0x5f PushS
	GetInvItemProperty(var_135_int, var_129_int, var_161_string); // 0x60 Func
	var_162_bool = var_131_bool; // 0x62 Push
	if(var_162_bool == 0) goto Label_104; // 0x63 JumpB
	var_163_bool = 0; // 0x64 PushB
	SelectItem(var_107_int, var_163_bool, var_0_int); // 0x65 ObjFunc
	goto Label_138; // 0x67 Jump
	
Label_138:
	goto Label_154; // 0x8a Jump
	
Label_104:
	var_136_int = 0; // 0x68 MovI
	
Label_105:
	var_164_bool = var_136_int < var_127_int; // 0x69 LT
	if(var_164_bool == 0) goto Label_135; // 0x6a JumpB
	IsItemSelected(var_137_bool, var_136_int, var_0_int); // 0x6b ObjFunc
	var_165_bool = var_137_bool == 0; // 0x6d Not
	if(var_165_bool == 0) goto Label_112; // 0x6e JumpB
	goto Label_132; // 0x6f Jump
	
Label_132:
	var_166_int = 1; // 0x84 PushI
	var_136_int = var_136_int + var_166_int; // 0x85 Add2
	goto Label_105; // 0x86 Jump
	
Label_112:
	GetItem(var_138_object, var_136_int, var_0_int); // 0x70 ObjFunc
	GetItemID(var_139_int); // 0x72 ObjFunc
	var_167_string = "Group"; // 0x74 PushS
	HasInvItemProperty(var_140_bool, var_139_int, var_167_string); // 0x75 Func
	var_168_bool = var_140_bool == 0; // 0x77 Not
	if(var_168_bool == 0) goto Label_122; // 0x78 JumpB
	goto Label_132; // 0x79 Jump
	
Label_122:
	var_169_string = "Group"; // 0x7a PushS
	GetInvItemProperty(var_141_int, var_139_int, var_169_string); // 0x7b Func
	var_170_bool = var_141_int == var_135_int; // 0x7d Eq
	if(var_170_bool == 0) goto Label_131; // 0x7e JumpB
	var_171_bool = 0; // 0x7f PushB
	SelectItem(var_136_int, var_171_bool, var_0_int); // 0x80 ObjFunc
	goto Label_135; // 0x82 Jump
	
Label_135:
	var_172_bool = 1; // 0x87 PushB
	SelectItem(var_107_int, var_172_bool, var_0_int); // 0x88 ObjFunc
	
Label_131:
	var_138_object = 0; // 0x83 SetNull
	
Label_139:
	UseItem(var_107_int, var_0_int, var_142_bool); // 0x8b Func
	var_173_bool = var_142_bool; // 0x8d Push
	if(var_173_bool == 0) goto Label_154; // 0x8e JumpB
	var_174_int = -1; // 0x8f PushI
	var_130_int = var_130_int + var_174_int; // 0x90 Add2
	var_175_int = 0; // 0x91 PushI
	var_176_bool = var_130_int == var_175_int; // 0x92 Eq
	if(var_176_bool == 0) goto Label_152; // 0x93 JumpB
	var_177_int = 1; // 0x94 PushI
	RemoveItem(var_107_int, var_177_int, var_0_int); // 0x95 ObjFunc
	goto Label_154; // 0x97 Jump
	
Label_152:
	SetItemAmount(var_130_int, var_107_int, var_0_int); // 0x98 ObjFunc
}


func_196(var_61_bool, var_62_int, var_63_int)
{
	var_64_bool = 0; var_65_bool = 0; // 0xc4 PushV
	var_66_object = Obj(); // 0xc5 PushV
	func_9(var_66_object); // 0xc6 NEW_2
	var_67_object = Obj(); // 0xc8 PushV
	func_9(var_67_object); // 0xc9 NEW_2
	var_68_object = Obj(); // 0xcb PushV
	func_9(var_68_object); // 0xcc NEW_2
	var_69_object = Obj(); // 0xce PushV
	func_9(var_69_object); // 0xcf NEW_2
	IsItemSelected(var_65_bool, var_62_int, var_63_int); // 0xd1 ObjFunc
	var_61_bool = var_65_bool; // 0xd3 Mov
	return 2; // 0xd4 Return
}


func_484(var_40_int)
{
	var_41_object = Obj(); var_42_int = 0; var_43_int = 0; var_44_object = Obj(); var_45_int = 0; var_46_bool = 0; var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_bool = 0; var_54_bool = 0; // 0x1e4 PushV
	var_55_object = Obj(); // 0x1e5 PushV
	func_9(var_55_object); // 0x1e6 NEW_2
	var_48_object = var_55_object; // 0x1e7 Mov
	GetItemCount(var_49_int, var_40_int); // 0x1e9 ObjFunc
	var_50_int = 0; // 0x1eb MovI
	
Label_492:
	var_58_int = 12; // 0x1ec PushI
	var_59_bool = var_50_int < var_58_int; // 0x1ed LT
	if(var_59_bool == 0) goto Label_569; // 0x1ee JumpB
	var_60_bool = var_50_int < var_49_int; // 0x1ef LT
	if(var_60_bool == 0) goto Label_559; // 0x1f0 JumpB
	GetItem(var_51_object, var_50_int, var_40_int); // 0x1f1 ObjFunc
	GetItemAmount(var_52_int, var_50_int, var_40_int); // 0x1f3 ObjFunc
	var_61_bool = 0; var_62_int = 0; var_63_int = 0; // 0x1f5 PushV
	var_62_int = var_50_int; // 0x1f6 Mov
	var_63_int = var_40_int; // 0x1f7 Mov
	func_196(var_61_bool, var_62_int, var_63_int); // 0x1f8 NEW_2
	var_53_bool = var_61_bool; // 0x1f9 Mov
	var_70_bool = 0; var_71_object = Obj(); // 0x1fb PushV
	var_71_object = var_51_object; // 0x1fc Mov
	func_193(var_71_object); // 0x1fd NEW_2
	var_54_bool = var_70_bool; // 0x1fe Mov
	var_72_bool = var_53_bool; // 0x200 Push
	if(var_72_bool == 0) goto Label_532; // 0x201 JumpB
	var_73_bool = var_54_bool; // 0x202 Push
	if(var_73_bool == 0) goto Label_524; // 0x203 JumpB
	var_74_int = 0; // 0x204 PushI
	var_75_string = ""; var_76_int = 0; // 0x205 PushV
	var_76_int = var_50_int; // 0x206 Mov
	func_571(var_75_string, var_76_int); // 0x207 NEW_2
	SendMessage(var_74_int, var_75_string, var_51_object); // 0x209 Func
	goto Label_531; // 0x20b Jump
	
Label_531:
	goto Label_549; // 0x213 Jump
	
Label_549:
	var_87_int = 65536; // 0x225 PushI
	var_88_int = var_52_int | var_87_int; // 0x226 Or
	var_89_string = ""; var_90_int = 0; // 0x227 PushV
	var_90_int = var_50_int; // 0x228 Mov
	func_571(var_89_string, var_90_int); // 0x229 NEW_2
	SendMessage(var_88_int, var_89_string); // 0x22b Func
	var_51_object = 0; // 0x22d SetNull
	goto Label_566; // 0x22e Jump
	
Label_566:
	var_91_int = 1; // 0x236 PushI
	var_50_int = var_50_int + var_91_int; // 0x237 Add2
	goto Label_492; // 0x238 Jump
	
Label_524:
	var_92_int = 16384; // 0x20c PushI
	var_93_string = ""; var_94_int = 0; // 0x20d PushV
	var_94_int = var_50_int; // 0x20e Mov
	func_571(var_93_string, var_94_int); // 0x20f NEW_2
	SendMessage(var_92_int, var_93_string, var_51_object); // 0x211 Func
	
Label_532:
	var_95_bool = var_54_bool; // 0x214 Push
	if(var_95_bool == 0) goto Label_542; // 0x215 JumpB
	var_96_int = 131072; // 0x216 PushI
	var_97_string = ""; var_98_int = 0; // 0x217 PushV
	var_98_int = var_50_int; // 0x218 Mov
	func_571(var_97_string, var_98_int); // 0x219 NEW_2
	SendMessage(var_96_int, var_97_string, var_51_object); // 0x21b Func
	goto Label_549; // 0x21d Jump
	
Label_542:
	var_99_int = 0; // 0x21e PushI
	var_100_string = ""; var_101_int = 0; // 0x21f PushV
	var_101_int = var_50_int; // 0x220 Mov
	func_571(var_100_string, var_101_int); // 0x221 NEW_2
	SendMessage(var_99_int, var_100_string, var_51_object); // 0x223 Func
	
Label_559:
	var_102_int = 32768; // 0x22f PushI
	var_103_string = ""; var_104_int = 0; // 0x230 PushV
	var_104_int = var_50_int; // 0x231 Mov
	func_571(var_103_string, var_104_int); // 0x232 NEW_2
	SendMessage(var_102_int, var_103_string); // 0x234 Func
	
Label_569:
	return 14; // 0x239 Return
}


func_9(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x9 PushV
	GetPlayerContainer(var_57_object); // 0xa Func
	var_55_object = var_57_object; // 0xc Mov
	return 2; // 0xd Return
}


func_365()
{
	var_105_int = 0; // 0x16d PushV
	func_354(var_105_int); // 0x16e NEW_2
	var_112_string = "money"; // 0x170 PushS
	SendMessage(var_105_int, var_112_string); // 0x171 Func
	return 0; // 0x173 Return
}


func_15(var_55_bool)
{
	var_55_bool = 0; // 0x10 MovB
	return 0; // 0x11 Return
}


func_434(var_0_int, var_178_bool, var_179_int, var_180_int)
{
	var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj(); var_184_int = 0; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_bool = 0; var_189_bool = 0; var_190_object = Obj(); var_191_object = Obj(); var_192_object = Obj(); var_193_int = 0; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_bool = 0; var_198_bool = 0; // 0x1b2 PushV
	var_199_object = Obj(); // 0x1b3 PushV
	func_9(var_199_object); // 0x1b4 NEW_2
	var_191_object = var_199_object; // 0x1b5 Mov
	GetContainer(var_190_object); // 0x1b7 Func
	GetItemCount(var_193_int, var_179_int); // 0x1b9 ObjFunc
	var_200_bool = var_193_int <= var_180_int; // 0x1bb LE
	if(var_200_bool == 0) goto Label_447; // 0x1bc JumpB
	var_178_bool = 0; // 0x1bd MovB
	return 18; // 0x1be Return
	
Label_447:
	GetItemAmount(var_194_int, var_180_int, var_179_int); // 0x1bf ObjFunc
	GetItem(var_192_object, var_180_int, var_179_int); // 0x1c1 ObjFunc
	var_201_int = 0; // 0x1c3 PushI
	var_202_int = 1; // 0x1c4 PushI
	AddItem(var_195_bool, var_192_object, var_201_int, var_202_int); // 0x1c5 ObjFunc
	var_203_bool = var_195_bool == 0; // 0x1c7 Not
	if(var_203_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_178_bool = 0; // 0x1c9 MovB
	return 18; // 0x1ca Return
	
Label_459:
	var_204_int = 0; // 0x1cb PushI
	var_205_bool = var_0_int == var_204_int; // 0x1cc Eq
	if(var_205_bool == 0) goto Label_476; // 0x1cd JumpB
	GetItemID(var_196_int); // 0x1ce ObjFunc
	var_206_string = "Weapon"; // 0x1d0 PushS
	HasInvItemProperty(var_197_bool, var_196_int, var_206_string); // 0x1d1 Func
	var_207_bool = var_197_bool; // 0x1d3 Push
	if(var_207_bool == 0) goto Label_476; // 0x1d4 JumpB
	IsItemSelected(var_198_bool, var_180_int, var_0_int); // 0x1d5 ObjFunc
	var_208_bool = var_198_bool; // 0x1d7 Push
	if(var_208_bool == 0) goto Label_476; // 0x1d8 JumpB
	var_209_int = -1; // 0x1d9 PushI
	SetPlayerHandsItem(var_209_int); // 0x1da Func
	
Label_476:
	var_210_int = 1; // 0x1dc PushI
	RemoveItem(var_180_int, var_210_int, var_179_int); // 0x1dd ObjFunc
	var_178_bool = 1; // 0x1df MovB
	return 18; // 0x1e0 Return
}


func_19()
{
	return 0; // 0x13 Return
}


func_340(var_0_int, var_5_int)
{
	var_6_int = -1; // 0x155 PushI
	var_7_bool = var_5_int == var_6_int; // 0x156 Eq
	if(var_7_bool == 0) goto Label_345; // 0x157 JumpB
	return 0; // 0x158 Return
	
Label_345:
	var_8_bool = var_0_int == var_5_int; // 0x159 Eq
	if(var_8_bool == 0) goto Label_348; // 0x15a JumpB
	return 0; // 0x15b Return
	
Label_348:
	var_0_int = var_5_int; // 0x15c TMov
	var_9_int = 0; // 0x15d PushV
	var_9_int = var_0_int; // 0x15e MovT
	func_372(var_9_int); // 0x15f NEW_2
	return 0; // 0x161 Return
}


func_18()
{
	return 0; // 0x12 Return
}


func_20(var_0_int, var_102_bool, var_103_int, var_104_bool)
{
	var_106_bool = var_104_bool; // 0x15 Push
	if(var_106_bool == 0) goto Label_28; // 0x16 JumpB
	var_107_int = 0; // 0x17 PushV
	var_107_int = var_103_int; // 0x18 Mov
	func_35(var_104_bool, var_107_int); // 0x19 NEW_2
	goto Label_33; // 0x1b Jump
	
Label_33:
	var_102_bool = 1; // 0x21 MovB
	return 0; // 0x22 Return
	
Label_28:
	var_178_bool = 0; var_179_int = 0; var_180_int = 0; // 0x1c PushV
	var_179_int = var_0_int; // 0x1d MovT
	var_180_int = var_103_int; // 0x1e Mov
	func_434(var_104_bool, var_178_bool, var_179_int, var_180_int); // 0x1f NEW_2
}


func_372(var_9_int)
{
	var_10_int = 0; // 0x175 PushI
	var_11_bool = var_9_int != var_10_int; // 0x176 Neq
	if(var_11_bool == 0) goto Label_381; // 0x177 JumpB
	var_12_int = 0; // 0x178 PushI
	var_13_string = "button_weapon"; // 0x179 PushS
	SendMessage(var_12_int, var_13_string); // 0x17a Func
	goto Label_385; // 0x17c Jump
	
Label_385:
	var_14_int = 1; // 0x181 PushI
	var_15_bool = var_9_int != var_14_int; // 0x182 Neq
	if(var_15_bool == 0) goto Label_393; // 0x183 JumpB
	var_16_int = 0; // 0x184 PushI
	var_17_string = "button_clothes"; // 0x185 PushS
	SendMessage(var_16_int, var_17_string); // 0x186 Func
	goto Label_397; // 0x188 Jump
	
Label_397:
	var_18_int = 2; // 0x18d PushI
	var_19_bool = var_9_int != var_18_int; // 0x18e Neq
	if(var_19_bool == 0) goto Label_405; // 0x18f JumpB
	var_20_int = 0; // 0x190 PushI
	var_21_string = "button_medcine"; // 0x191 PushS
	SendMessage(var_20_int, var_21_string); // 0x192 Func
	goto Label_409; // 0x194 Jump
	
Label_409:
	var_22_int = 3; // 0x199 PushI
	var_23_bool = var_9_int != var_22_int; // 0x19a Neq
	if(var_23_bool == 0) goto Label_417; // 0x19b JumpB
	var_24_int = 0; // 0x19c PushI
	var_25_string = "button_food"; // 0x19d PushS
	SendMessage(var_24_int, var_25_string); // 0x19e Func
	goto Label_421; // 0x1a0 Jump
	
Label_421:
	var_26_int = 4; // 0x1a5 PushI
	var_27_bool = var_9_int != var_26_int; // 0x1a6 Neq
	if(var_27_bool == 0) goto Label_429; // 0x1a7 JumpB
	var_28_int = 0; // 0x1a8 PushI
	var_29_string = "button_other"; // 0x1a9 PushS
	SendMessage(var_28_int, var_29_string); // 0x1aa Func
	goto Label_433; // 0x1ac Jump
	
Label_433:
	return 0; // 0x1b1 Return
	
Label_429:
	var_30_int = 1; // 0x1ad PushI
	var_31_string = "button_other"; // 0x1ae PushS
	SendMessage(var_30_int, var_31_string); // 0x1af Func
	
Label_417:
	var_32_int = 1; // 0x1a1 PushI
	var_33_string = "button_food"; // 0x1a2 PushS
	SendMessage(var_32_int, var_33_string); // 0x1a3 Func
	
Label_405:
	var_34_int = 1; // 0x195 PushI
	var_35_string = "button_medcine"; // 0x196 PushS
	SendMessage(var_34_int, var_35_string); // 0x197 Func
	
Label_393:
	var_36_int = 1; // 0x189 PushI
	var_37_string = "button_clothes"; // 0x18a PushS
	SendMessage(var_36_int, var_37_string); // 0x18b Func
	
Label_381:
	var_38_int = 1; // 0x17d PushI
	var_39_string = "button_weapon"; // 0x17e PushS
	SendMessage(var_38_int, var_39_string); // 0x17f Func
}


func_571(var_75_string, var_76_int)
{
	var_77_int = 1; // 0x23c PushI
	var_78_int = var_76_int + var_77_int; // 0x23d Add
	var_79_int = 10; // 0x23e PushI
	var_80_bool = var_78_int < var_79_int; // 0x23f LT
	if(var_80_bool == 0) goto Label_582; // 0x240 JumpB
	var_81_string = "slot0"; // 0x241 PushS
	var_82_int = 1; // 0x242 PushI
	var_83_int = var_76_int + var_82_int; // 0x243 Add
	var_75_string = var_81_string + var_83_int; // 0x244 Add2
	return 0; // 0x245 Return
	
Label_582:
	var_84_string = "slot"; // 0x246 PushS
	var_85_int = 1; // 0x247 PushI
	var_86_int = var_76_int + var_85_int; // 0x248 Add
	var_75_string = var_84_string + var_86_int; // 0x249 Add2
	return 0; // 0x24a Return
}


func_157(var_0_int, var_4_int)
{
	var_0_int = -1; // 0x9e TMovI
	var_5_int = 0; // 0x9f PushV
	var_5_int = var_4_int; // 0xa0 Mov
	func_340(var_4_int, var_5_int); // 0xa1 NEW_2
	var_40_int = 0; // 0xa3 PushV
	var_40_int = var_0_int; // 0xa4 MovT
	func_484(var_40_int); // 0xa5 NEW_2
	func_365(); // 0xa8 NEW_2
	var_113_string = "default"; // 0xaa PushS
	SetCursor(var_113_string); // 0xab Func
	ShowCursor(); // 0xad Func
	CaptureKeyboard(); // 0xaf Func
	var_114_bool = 0; // 0xb1 PushB
	SetOwnerDraw(var_114_bool); // 0xb2 Func
	var_115_bool = 1; // 0xb4 PushB
	SetNeedUpdate(var_115_bool); // 0xb5 Func
	func_19(); // 0xb8 NEW_2
	ProcessEvents(); // 0xba Func
	return 0; // 0xbc Return
}


