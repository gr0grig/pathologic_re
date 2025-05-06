task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int)
{
	DestroyWindow(); // 0x78 Func
	return 0; // 0x7a Return
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_int, var_10_float)
{
	var_7_int = var_7_int + var_10_float; // 0x7c Add2
	var_11_int = 0; // 0x7d PushI
	var_12_bool = var_7_int < var_11_int; // 0x7e LT
	if(var_12_bool == 0) goto Label_129; // 0x7f JumpB
	var_7_int = 0; // 0x80 TMovI
	
Label_129:
	func_166(var_10_float); // 0x82 NEW_2
	func_195(var_10_float); // 0x85 NEW_2
	return 0; // 0x87 Return
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0xf9 PushV
	var_15_string = "ok"; // 0xfa PushS
	var_16_bool = var_9_string == var_15_string; // 0xfb Eq
	if(var_16_bool == 0) goto Label_257; // 0xfc JumpB
	func_405(); // 0xfe NEW_2
	goto Label_311; // 0x100 Jump
	
Label_311:
	return 4; // 0x137 Return
	
Label_257:
	var_99_string = "cancel"; // 0x101 PushS
	var_100_bool = var_9_string == var_99_string; // 0x102 Eq
	if(var_100_bool == 0) goto Label_264; // 0x103 JumpB
	func_427(); // 0x105 NEW_2
	goto Label_311; // 0x107 Jump
	
Label_264:
	var_151_string = "scrollbar"; // 0x108 PushS
	var_152_bool = var_9_string == var_151_string; // 0x109 Eq
	if(var_152_bool == 0) goto Label_287; // 0x10a JumpB
	size(var_13_int); // 0x10b TObjFunc
	var_153_float = 0.01; // 0x10d PushF
	var_154_int = 4; // 0x10e PushI
	var_155_int = var_13_int - var_154_int; // 0x10f Sub
	var_156_float = var_153_float * var_155_int; // 0x110 Mult
	var_157_float = var_156_float * var_8_int; // 0x111 Mult
	var_158_float = 0.5; // 0x112 PushF
	var_7_int = var_157_float + var_158_float; // 0x113 Add2
	var_159_int = 0; // 0x114 PushI
	var_160_bool = var_7_int < var_159_int; // 0x115 LT
	if(var_160_bool == 0) goto Label_280; // 0x116 JumpB
	var_7_int = 0; // 0x117 TMovI
	
Label_280:
	func_166(var_14_int); // 0x119 NEW_2
	func_195(var_14_int); // 0x11c NEW_2
	goto Label_311; // 0x11e Jump
	
Label_287:
	var_180_int = 0; var_181_int = 0; var_182_string = ""; // 0x11f PushV
	var_181_int = var_8_int; // 0x120 Mov
	var_182_string = var_9_string; // 0x121 Mov
	func_520(var_181_int, var_182_string); // 0x122 NEW_2
	var_14_int = var_180_int; // 0x123 Mov
	var_191_int = -1; // 0x125 PushI
	var_192_bool = var_14_int != var_191_int; // 0x126 Neq
	if(var_192_bool == 0) goto Label_311; // 0x127 JumpB
	var_193_int = 0; // 0x128 PushI
	var_194_bool = var_8_int == var_193_int; // 0x129 Eq
	if(var_194_bool == 0) goto Label_304; // 0x12a JumpB
	var_195_int = 0; // 0x12b PushV
	var_195_int = var_14_int + var_7_int; // 0x12c Add2
	func_446(var_195_int); // 0x12d NEW_2
	goto Label_311; // 0x12f Jump
	
Label_304:
	var_207_int = 1; // 0x130 PushI
	var_208_bool = var_8_int == var_207_int; // 0x131 Eq
	if(var_208_bool == 0) goto Label_311; // 0x132 JumpB
	var_209_int = 0; // 0x133 PushV
	var_209_int = var_14_int + var_7_int; // 0x134 Add2
	func_473(var_209_int); // 0x135 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int)
{
	var_8_string = "default"; // 0x0 PushS
	SetCursor(var_8_string); // 0x1 Func
	ShowCursor(); // 0x3 Func
	CaptureKeyboard(); // 0x5 Func
	var_9_bool = 0; // 0x7 PushB
	SetOwnerDraw(var_9_bool); // 0x8 Func
	GetWindowData(var_3_object); // 0xa Func
	var_10_bool = var_5_object == 0; // 0xc Not
	if(var_10_bool == 0) goto Label_17; // 0xd JumpB
	DestroyWindow(); // 0xe Func
	return 0; // 0x10 Return
	
Label_17:
	var_11_string = "agony"; // 0x11 PushS
	GetProperty(var_11_string, var_3_object); // 0x12 TObjFunc
	func_57(var_6_float, var_7_int); // 0x15 NEW_2
	func_166(var_7_int); // 0x18 NEW_2
	func_195(var_7_int); // 0x1b NEW_2
	func_157(); // 0x1e NEW_2
	ProcessEvents(); // 0x20 Func
	return 0; // 0x22 Return
}


func_515(var_31_int)
{
	var_33_int = 0; var_34_int = 0; // 0x203 PushV
	GetItemID(var_34_int); // 0x204 ObjFunc
	var_31_int = var_34_int; // 0x206 Mov
	return 2; // 0x207 Return
}


func_35(var_38_bool, var_39_int)
{
	var_40_int = 0; var_41_int = 0; var_42_object = Obj(); var_43_int = 0; var_44_int = 0; var_45_object = Obj(); // 0x23 PushV
	size(var_43_int); // 0x24 TObjFunc
	var_44_int = 0; // 0x26 MovI
	
Label_39:
	var_46_bool = var_44_int < var_43_int; // 0x27 LT
	if(var_46_bool == 0) goto Label_55; // 0x28 JumpB
	get(var_45_object, var_44_int); // 0x29 TObjFunc
	var_47_int = 0; var_48_object = Obj(); // 0x2b PushV
	var_48_object = var_45_object; // 0x2c Mov
	func_515(var_48_object); // 0x2d NEW_2
	var_49_bool = var_47_int == var_39_int; // 0x2f Eq
	if(var_49_bool == 0) goto Label_51; // 0x30 JumpB
	var_38_bool = 1; // 0x31 MovB
	return 6; // 0x32 Return
	
Label_51:
	var_45_object = 0; // 0x33 SetNull
	var_50_int = 1; // 0x34 PushI
	var_44_int = var_44_int + var_50_int; // 0x35 Add2
	goto Label_39; // 0x36 Jump
	
Label_55:
	var_38_bool = 0; // 0x37 MovB
	return 6; // 0x38 Return
}


func_195(var_7_int)
{
	var_72_int = 0; var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; // 0xc3 PushV
	size(var_77_int); // 0xc4 TObjFunc
	var_78_int = var_7_int; // 0xc6 MovT
	
Label_199:
	var_82_int = 4; // 0xc7 PushI
	var_83_int = var_82_int + var_7_int; // 0xc8 Add
	var_84_bool = var_78_int < var_83_int; // 0xc9 LT
	if(var_84_bool == 0) goto Label_248; // 0xca JumpB
	var_85_bool = var_78_int < var_77_int; // 0xcb LT
	if(var_85_bool == 0) goto Label_238; // 0xcc JumpB
	get(var_79_object, var_78_int); // 0xcd TObjFunc
	get(var_80_int, var_78_int); // 0xcf TObjFunc
	get(var_81_int, var_78_int); // 0xd1 TObjFunc
	var_86_int = var_80_int; // 0xd3 Push
	if(var_86_int == 0) goto Label_221; // 0xd4 JumpB
	var_87_int = 16384; // 0xd5 PushI
	var_88_string = ""; var_89_int = 0; // 0xd6 PushV
	var_89_int = var_78_int - var_7_int; // 0xd7 Sub2
	func_499(var_88_string, var_89_int); // 0xd8 NEW_2
	SendMessage(var_87_int, var_88_string, var_79_object); // 0xda Func
	goto Label_228; // 0xdc Jump
	
Label_228:
	var_100_int = 65536; // 0xe4 PushI
	var_101_int = var_80_int | var_100_int; // 0xe5 Or
	var_102_string = ""; var_103_int = 0; // 0xe6 PushV
	var_103_int = var_78_int - var_7_int; // 0xe7 Sub2
	func_499(var_102_string, var_103_int); // 0xe8 NEW_2
	SendMessage(var_101_int, var_102_string); // 0xea Func
	var_79_object = 0; // 0xec SetNull
	goto Label_245; // 0xed Jump
	
Label_245:
	var_104_int = 1; // 0xf5 PushI
	var_78_int = var_78_int + var_104_int; // 0xf6 Add2
	goto Label_199; // 0xf7 Jump
	
Label_221:
	var_105_int = 0; // 0xdd PushI
	var_106_string = ""; var_107_int = 0; // 0xde PushV
	var_107_int = var_78_int - var_7_int; // 0xdf Sub2
	func_499(var_106_string, var_107_int); // 0xe0 NEW_2
	SendMessage(var_105_int, var_106_string, var_79_object); // 0xe2 Func
	
Label_238:
	var_108_int = 32768; // 0xee PushI
	var_109_string = ""; var_110_int = 0; // 0xef PushV
	var_110_int = var_78_int - var_7_int; // 0xf0 Sub2
	func_499(var_109_string, var_110_int); // 0xf1 NEW_2
	SendMessage(var_108_int, var_109_string); // 0xf3 Func
	
Label_248:
	return 10; // 0xf8 Return
}


func_166(var_7_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0xa6 PushV
	size(var_55_int); // 0xa7 TObjFunc
	var_57_int = 4; // 0xa9 PushI
	var_58_bool = var_55_int <= var_57_int; // 0xaa LE
	if(var_58_bool == 0) goto Label_178; // 0xab JumpB
	var_59_int = 16384; // 0xac PushI
	var_60_string = "scrollbar"; // 0xad PushS
	SendMessage(var_59_int, var_60_string); // 0xae Func
	var_7_int = 0; // 0xb0 TMovI
	goto Label_194; // 0xb1 Jump
	
Label_194:
	return 4; // 0xc2 Return
	
Label_178:
	var_61_int = 4; // 0xb2 PushI
	var_62_int = var_7_int + var_61_int; // 0xb3 Add
	var_63_bool = var_62_int > var_55_int; // 0xb4 GT
	if(var_63_bool == 0) goto Label_194; // 0xb5 JumpB
	var_64_int = 4; // 0xb6 PushI
	var_65_int = var_7_int + var_64_int; // 0xb7 Add
	var_66_int = var_65_int - var_55_int; // 0xb8 Sub
	var_7_int = var_7_int - var_66_int; // 0xb9 Sub2
	var_67_int = 100; // 0xba PushI
	var_68_float = var_7_int * var_67_int; // 0xbb Mult
	var_69_int = 4; // 0xbc PushI
	var_70_int = var_55_int - var_69_int; // 0xbd Sub
	var_56_int = var_68_float / var_68_float; // 0xbe Div2
	var_71_string = "scrollbar"; // 0xbf PushS
	SendMessage(var_56_int, var_71_string); // 0xc0 Func
}


func_136(var_6_float, var_112_float)
{
	var_113_float = 0; var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_float = 0; var_118_int = 0; var_119_float = 0; var_120_int = 0; var_121_int = 0; var_122_object = Obj(); var_123_float = 0; var_124_int = 0; // 0x88 PushV
	var_119_float = var_6_float; // 0x89 MovT
	size(var_120_int); // 0x8a TObjFunc
	var_121_int = 0; // 0x8c MovI
	
Label_141:
	var_125_bool = var_121_int < var_120_int; // 0x8d LT
	if(var_125_bool == 0) goto Label_155; // 0x8e JumpB
	get(var_122_object, var_121_int); // 0x8f TObjFunc
	get(var_123_float, var_121_int); // 0x91 TObjFunc
	get(var_124_int, var_121_int); // 0x93 TObjFunc
	var_126_float = var_124_int * var_123_float; // 0x95 Mult
	var_119_float = var_119_float - var_126_float; // 0x96 Sub2
	var_122_object = 0; // 0x97 SetNull
	var_127_int = 1; // 0x98 PushI
	var_121_int = var_121_int + var_127_int; // 0x99 Add2
	goto Label_141; // 0x9a Jump
	
Label_155:
	var_112_float = var_119_float; // 0x9b Mov
	return 12; // 0x9c Return
}


func_520(var_180_int, var_182_string)
{
	var_183_int = 0; var_184_int = 0; // 0x208 PushV
	var_184_int = 0; // 0x209 MovI
	
Label_522:
	var_185_int = 4; // 0x20a PushI
	var_186_bool = var_184_int < var_185_int; // 0x20b LT
	if(var_186_bool == 0) goto Label_536; // 0x20c JumpB
	var_187_string = ""; var_188_int = 0; // 0x20d PushV
	var_188_int = var_184_int; // 0x20e Mov
	func_499(var_187_string, var_188_int); // 0x20f NEW_2
	var_189_bool = var_182_string == var_187_string; // 0x211 Eq
	if(var_189_bool == 0) goto Label_533; // 0x212 JumpB
	var_180_int = var_184_int; // 0x213 Mov
	return 2; // 0x214 Return
	
Label_533:
	var_190_int = 1; // 0x215 PushI
	var_184_int = var_184_int + var_190_int; // 0x216 Add2
	goto Label_522; // 0x217 Jump
	
Label_536:
	var_180_int = -1; // 0x218 MovI
	return 2; // 0x219 Return
}


func_427()
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x1ab PushV
	size(var_103_int); // 0x1ac TObjFunc
	var_104_int = 0; // 0x1ae MovI
	
Label_431:
	var_105_bool = var_104_int < var_103_int; // 0x1af LT
	if(var_105_bool == 0) goto Label_439; // 0x1b0 JumpB
	var_106_int = 0; // 0x1b1 PushI
	set(var_104_int, var_106_int); // 0x1b2 TObjFunc
	var_107_int = 1; // 0x1b4 PushI
	var_104_int = var_104_int + var_107_int; // 0x1b5 Add2
	goto Label_431; // 0x1b6 Jump
	
Label_439:
	func_195(var_104_int); // 0x1b8 NEW_2
	func_157(); // 0x1bb NEW_2
	return 4; // 0x1bd Return
}


func_499(var_88_string, var_89_int)
{
	var_90_int = 1; // 0x1f4 PushI
	var_91_int = var_89_int + var_90_int; // 0x1f5 Add
	var_92_int = 10; // 0x1f6 PushI
	var_93_bool = var_91_int < var_92_int; // 0x1f7 LT
	if(var_93_bool == 0) goto Label_510; // 0x1f8 JumpB
	var_94_string = "slot0"; // 0x1f9 PushS
	var_95_int = 1; // 0x1fa PushI
	var_96_int = var_89_int + var_95_int; // 0x1fb Add
	var_88_string = var_94_string + var_96_int; // 0x1fc Add2
	return 0; // 0x1fd Return
	
Label_510:
	var_97_string = "slot"; // 0x1fe PushS
	var_98_int = 1; // 0x1ff PushI
	var_99_int = var_89_int + var_98_int; // 0x200 Add
	var_88_string = var_97_string + var_99_int; // 0x201 Add2
	return 0; // 0x202 Return
}


func_405()
{
	var_17_float = 0; var_18_float = 0; // 0x195 PushV
	var_19_float = 0; // 0x196 PushV
	func_136(var_18_float, var_19_float); // 0x197 NEW_2
	var_18_float = var_19_float; // 0x198 Mov
	var_35_float = 0.001; // 0x19a PushF
	var_36_bool = var_18_float < var_35_float; // 0x19b LT
	if(var_36_bool == 0) goto Label_414; // 0x19c JumpB
	var_18_float = 0; // 0x19d MovI
	
Label_414:
	var_37_string = "Do "; // 0x19e PushS
	var_38_int = var_37_string + var_18_float; // 0x19f Add
	Trace(var_38_int); // 0x1a0 Func
	var_39_string = "agony"; // 0x1a2 PushS
	SetProperty(var_39_string, var_18_float); // 0x1a3 TObjFunc
	func_374(); // 0x1a6 NEW_2
	DestroyWindow(); // 0x1a8 Func
	return 2; // 0x1aa Return
}


func_374()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_int = 0; // 0x176 PushV
	size(var_45_int); // 0x177 TObjFunc
	var_46_int = 0; // 0x179 MovI
	
Label_378:
	var_50_bool = var_46_int < var_45_int; // 0x17a LT
	if(var_50_bool == 0) goto Label_404; // 0x17b JumpB
	get(var_47_int, var_46_int); // 0x17c TObjFunc
	var_51_int = var_47_int; // 0x17e Push
	if(var_51_int == 0) goto Label_401; // 0x17f JumpB
	get(var_48_object, var_46_int); // 0x180 TObjFunc
	var_49_int = 0; // 0x182 MovI
	
Label_387:
	var_52_bool = var_49_int < var_47_int; // 0x183 LT
	if(var_52_bool == 0) goto Label_400; // 0x184 JumpB
	var_53_int = 0; // 0x185 PushV
	var_54_int = 0; var_55_object = Obj(); // 0x186 PushV
	var_55_object = var_48_object; // 0x187 Mov
	func_515(var_55_object); // 0x188 NEW_2
	var_53_int = var_54_int; // 0x189 Mov
	func_312(var_53_int); // 0x18b NEW_2
	var_97_int = 1; // 0x18d PushI
	var_49_int = var_49_int + var_97_int; // 0x18e Add2
	goto Label_387; // 0x18f Jump
	
Label_400:
	var_48_object = 0; // 0x190 SetNull
	
Label_401:
	var_98_int = 1; // 0x191 PushI
	var_46_int = var_46_int + var_98_int; // 0x192 Add2
	goto Label_378; // 0x193 Jump
	
Label_404:
	return 10; // 0x194 Return
}


func_312(var_53_int)
{
	var_58_int = 0; var_59_int = 0; var_60_float = 0; var_61_int = 0; var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_float = 0; var_66_int = 0; var_67_int = 0; var_68_float = 0; var_69_int = 0; var_70_object = Obj(); var_71_int = 0; var_72_bool = 0; var_73_float = 0; // 0x138 PushV
	var_74_int = 2; // 0x139 PushI
	GetItemCount(var_66_int, var_74_int); // 0x13a TObjFunc
	var_67_int = -1; // 0x13c MovI
	var_69_int = 0; // 0x13d MovI
	
Label_318:
	var_75_bool = var_69_int < var_66_int; // 0x13e LT
	if(var_75_bool == 0) goto Label_366; // 0x13f JumpB
	var_76_int = 2; // 0x140 PushI
	GetItem(var_70_object, var_69_int, var_76_int); // 0x141 TObjFunc
	var_77_int = 0; var_78_object = Obj(); // 0x143 PushV
	var_78_object = var_70_object; // 0x144 Mov
	func_515(var_78_object); // 0x145 NEW_2
	var_71_int = var_77_int; // 0x146 Mov
	var_79_bool = var_71_int == var_53_int; // 0x148 Eq
	if(var_79_bool == 0) goto Label_362; // 0x149 JumpB
	var_80_string = "disease"; // 0x14a PushS
	HasProperty(var_72_bool, var_80_string); // 0x14b ObjFunc
	var_81_bool = var_72_bool == 0; // 0x14d Not
	if(var_81_bool == 0) goto Label_348; // 0x14e JumpB
	var_82_bool = 0; // 0x14f PushV
	var_82_bool = 1; // 0x150 MovB
	var_83_int = -1; // 0x151 PushI
	var_84_bool = var_67_int == var_83_int; // 0x152 Eq
	if(var_84_bool == 0) goto Label_344; // 0x153 JumpB
	var_85_int = 0; // 0x154 PushI
	var_86_bool = var_68_float > var_85_int; // 0x155 GT
	if(var_86_bool == 0) goto Label_344; // 0x156 JumpB
	var_82_bool = 0; // 0x157 MovB
	
Label_344:
	if(var_82_bool == 0) goto Label_347; // 0x158 JumpB
	var_67_int = var_69_int; // 0x159 Mov
	var_68_float = 0; // 0x15a MovI
	
Label_347:
	goto Label_362; // 0x15b Jump
	
Label_362:
	var_70_object = 0; // 0x16a SetNull
	var_87_int = 1; // 0x16b PushI
	var_69_int = var_69_int + var_87_int; // 0x16c Add2
	goto Label_318; // 0x16d Jump
	
Label_348:
	var_88_string = "disease"; // 0x15c PushS
	GetProperty(var_73_float, var_88_string); // 0x15d ObjFunc
	var_89_bool = 0; // 0x15f PushV
	var_89_bool = 1; // 0x160 MovB
	var_90_int = -1; // 0x161 PushI
	var_91_bool = var_67_int == var_90_int; // 0x162 Eq
	if(var_91_bool == 0) goto Label_359; // 0x163 JumpB
	var_92_bool = var_73_float < var_68_float; // 0x164 LT
	if(var_92_bool == 0) goto Label_359; // 0x165 JumpB
	var_89_bool = 0; // 0x166 MovB
	
Label_359:
	if(var_89_bool == 0) goto Label_362; // 0x167 JumpB
	var_67_int = var_69_int; // 0x168 Mov
	var_68_float = var_73_float; // 0x169 Mov
	
Label_366:
	var_93_int = -1; // 0x16e PushI
	var_94_bool = var_67_int != var_93_int; // 0x16f Neq
	if(var_94_bool == 0) goto Label_373; // 0x170 JumpB
	var_95_int = 1; // 0x171 PushI
	var_96_int = 2; // 0x172 PushI
	RemoveItem(var_67_int, var_95_int, var_96_int); // 0x173 TObjFunc
	
Label_373:
	return 16; // 0x175 Return
}


func_473(var_209_int)
{
	var_210_int = 0; var_211_object = Obj(); var_212_int = 0; var_213_int = 0; var_214_object = Obj(); var_215_int = 0; // 0x1d9 PushV
	size(var_213_int); // 0x1da TObjFunc
	var_216_bool = var_209_int >= var_213_int; // 0x1dc GE
	if(var_216_bool == 0) goto Label_479; // 0x1dd JumpB
	return 6; // 0x1de Return
	
Label_479:
	get(var_214_object, var_209_int); // 0x1df TObjFunc
	get(var_215_int, var_209_int); // 0x1e1 TObjFunc
	var_217_int = 0; // 0x1e3 PushI
	var_218_bool = var_215_int == var_217_int; // 0x1e4 Eq
	if(var_218_bool == 0) goto Label_487; // 0x1e5 JumpB
	return 6; // 0x1e6 Return
	
Label_487:
	var_219_int = 1; // 0x1e7 PushI
	var_215_int = var_215_int - var_219_int; // 0x1e8 Sub2
	set(var_209_int, var_215_int); // 0x1e9 TObjFunc
	func_195(var_215_int); // 0x1ec NEW_2
	func_157(); // 0x1ef NEW_2
	return 6; // 0x1f1 Return
}


func_157()
{
	var_111_int = 100; // 0x9d PushI
	var_112_float = 0; // 0x9e PushV
	func_136(var_111_int, var_112_float); // 0x9f NEW_2
	var_128_float = var_111_int * var_112_float; // 0xa1 Mult
	var_129_string = "level"; // 0xa2 PushS
	SendMessage(var_128_float, var_129_string); // 0xa3 Func
	return 0; // 0xa5 Return
}


func_446(var_195_int)
{
	var_196_int = 0; var_197_object = Obj(); var_198_int = 0; var_199_int = 0; var_200_int = 0; var_201_object = Obj(); var_202_int = 0; var_203_int = 0; // 0x1be PushV
	size(var_200_int); // 0x1bf TObjFunc
	var_204_bool = var_195_int >= var_200_int; // 0x1c1 GE
	if(var_204_bool == 0) goto Label_452; // 0x1c2 JumpB
	return 8; // 0x1c3 Return
	
Label_452:
	get(var_201_object, var_195_int); // 0x1c4 TObjFunc
	get(var_202_int, var_195_int); // 0x1c6 TObjFunc
	get(var_203_int, var_195_int); // 0x1c8 TObjFunc
	var_205_bool = var_202_int <= var_203_int; // 0x1ca LE
	if(var_205_bool == 0) goto Label_461; // 0x1cb JumpB
	return 8; // 0x1cc Return
	
Label_461:
	var_206_int = 1; // 0x1cd PushI
	var_203_int = var_203_int + var_206_int; // 0x1ce Add2
	set(var_195_int, var_203_int); // 0x1cf TObjFunc
	func_195(var_203_int); // 0x1d2 NEW_2
	func_157(); // 0x1d5 NEW_2
	return 8; // 0x1d7 Return
}


func_57(var_0_object, var_2_object)
{
	var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_float = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_int = 0; // 0x39 PushV
	CreateObjectVector(var_0_object); // 0x3a Func
	CreateFloatVector(var_25_int); // 0x3c Func
	CreateIntVector(var_23_bool); // 0x3e Func
	CreateIntVector(var_22_int); // 0x40 Func
	var_26_string = "player"; // 0x42 PushS
	FindActor(var_25_int, var_26_string); // 0x43 Func
	var_27_bool = var_2_object == 0; // 0x45 Not
	if(var_27_bool == 0) goto Label_74; // 0x46 JumpB
	DestroyWindow(); // 0x47 Func
	return 14; // 0x49 Return
	
Label_74:
	var_28_int = 2; // 0x4a PushI
	GetItemCount(var_19_int, var_28_int); // 0x4b TObjFunc
	var_20_int = 0; // 0x4d MovI
	
Label_78:
	var_29_bool = var_20_int < var_19_int; // 0x4e LT
	if(var_29_bool == 0) goto Label_118; // 0x4f JumpB
	var_30_int = 2; // 0x50 PushI
	GetItem(var_21_object, var_20_int, var_30_int); // 0x51 TObjFunc
	var_31_int = 0; var_32_object = Obj(); // 0x53 PushV
	var_32_object = var_21_object; // 0x54 Mov
	func_515(var_32_object); // 0x55 NEW_2
	var_22_int = var_31_int; // 0x56 Mov
	var_35_string = "Agony"; // 0x58 PushS
	HasInvItemProperty(var_23_bool, var_22_int, var_35_string); // 0x59 Func
	var_36_bool = var_23_bool == 0; // 0x5b Not
	if(var_36_bool == 0) goto Label_94; // 0x5c JumpB
	goto Label_115; // 0x5d Jump
	
Label_115:
	var_37_int = 1; // 0x73 PushI
	var_20_int = var_20_int + var_37_int; // 0x74 Add2
	goto Label_78; // 0x75 Jump
	
Label_94:
	var_38_bool = 0; var_39_int = 0; // 0x5e PushV
	var_39_int = var_22_int; // 0x5f Mov
	func_35(var_38_bool, var_39_int); // 0x60 NEW_2
	if(var_38_bool == 0) goto Label_100; // 0x62 JumpB
	goto Label_115; // 0x63 Jump
	
Label_100:
	var_51_string = "Agony"; // 0x64 PushS
	GetInvItemProperty(var_24_float, var_22_int, var_51_string); // 0x65 Func
	GetItemCountOfType(var_25_int, var_22_int); // 0x67 TObjFunc
	add(var_21_object); // 0x69 TObjFunc
	add(var_24_float); // 0x6b TObjFunc
	add(var_25_int); // 0x6d TObjFunc
	var_52_int = 0; // 0x6f PushI
	add(var_52_int); // 0x70 TObjFunc
	var_21_object = 0; // 0x72 SetNull
	
Label_118:
	return 14; // 0x76 Return
}


