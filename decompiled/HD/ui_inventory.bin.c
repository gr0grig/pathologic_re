task_0_event_100(var_0_int, var_1_object, var_2_int)
{
	DestroyWindow(); // 0xf0 Func
	return 0; // 0xf2 Return
}


task_0_event_102(var_0_int, var_1_object, var_2_int)
{
	var_3_int = 0; // 0xf4 PushV
	var_3_int = var_2_int; // 0xf5 Mov
	func_376(var_3_int); // 0xf6 NEW_2
	return 0; // 0xf8 Return
}


task_0_event_101(var_0_int, var_1_object, var_2_int)
{
	var_3_int = 266; // 0xfa PushI
	var_4_bool = var_2_int == var_3_int; // 0xfb Eq
	if(var_4_bool == 0) goto Label_293; // 0xfc JumpB
	var_5_int = 0; // 0xfd PushI
	var_6_bool = var_0_int == var_5_int; // 0xfe Eq
	if(var_6_bool == 0) goto Label_261; // 0xff JumpB
	var_7_int = 0; // 0x100 PushV
	var_7_int = 1; // 0x101 MovI
	func_570(var_2_int, var_7_int); // 0x102 NEW_2
	goto Label_292; // 0x104 Jump
	
Label_292:
	goto Label_335; // 0x124 Jump
	
Label_335:
	var_42_int = 0; // 0x14f PushV
	var_42_int = var_2_int; // 0x150 Mov
	func_340(var_42_int); // 0x151 NEW_2
	return 0; // 0x153 Return
	
Label_261:
	var_73_int = 1; // 0x105 PushI
	var_74_bool = var_0_int == var_73_int; // 0x106 Eq
	if(var_74_bool == 0) goto Label_269; // 0x107 JumpB
	var_75_int = 0; // 0x108 PushV
	var_75_int = 2; // 0x109 MovI
	func_570(var_2_int, var_75_int); // 0x10a NEW_2
	goto Label_292; // 0x10c Jump
	
Label_269:
	var_76_int = 2; // 0x10d PushI
	var_77_bool = var_0_int == var_76_int; // 0x10e Eq
	if(var_77_bool == 0) goto Label_277; // 0x10f JumpB
	var_78_int = 0; // 0x110 PushV
	var_78_int = 3; // 0x111 MovI
	func_570(var_2_int, var_78_int); // 0x112 NEW_2
	goto Label_292; // 0x114 Jump
	
Label_277:
	var_79_int = 3; // 0x115 PushI
	var_80_bool = var_0_int == var_79_int; // 0x116 Eq
	if(var_80_bool == 0) goto Label_285; // 0x117 JumpB
	var_81_int = 0; // 0x118 PushV
	var_81_int = 4; // 0x119 MovI
	func_570(var_2_int, var_81_int); // 0x11a NEW_2
	goto Label_292; // 0x11c Jump
	
Label_285:
	var_82_int = 4; // 0x11d PushI
	var_83_bool = var_0_int == var_82_int; // 0x11e Eq
	if(var_83_bool == 0) goto Label_292; // 0x11f JumpB
	var_84_int = 0; // 0x120 PushV
	var_84_int = 0; // 0x121 MovI
	func_570(var_2_int, var_84_int); // 0x122 NEW_2
	
Label_293:
	var_85_int = 265; // 0x125 PushI
	var_86_bool = var_2_int == var_85_int; // 0x126 Eq
	if(var_86_bool == 0) goto Label_335; // 0x127 JumpB
	var_87_int = 0; // 0x128 PushI
	var_88_bool = var_0_int == var_87_int; // 0x129 Eq
	if(var_88_bool == 0) goto Label_304; // 0x12a JumpB
	var_89_int = 0; // 0x12b PushV
	var_89_int = 4; // 0x12c MovI
	func_570(var_2_int, var_89_int); // 0x12d NEW_2
	goto Label_335; // 0x12f Jump
	
Label_304:
	var_90_int = 1; // 0x130 PushI
	var_91_bool = var_0_int == var_90_int; // 0x131 Eq
	if(var_91_bool == 0) goto Label_312; // 0x132 JumpB
	var_92_int = 0; // 0x133 PushV
	var_92_int = 0; // 0x134 MovI
	func_570(var_2_int, var_92_int); // 0x135 NEW_2
	goto Label_335; // 0x137 Jump
	
Label_312:
	var_93_int = 2; // 0x138 PushI
	var_94_bool = var_0_int == var_93_int; // 0x139 Eq
	if(var_94_bool == 0) goto Label_320; // 0x13a JumpB
	var_95_int = 0; // 0x13b PushV
	var_95_int = 1; // 0x13c MovI
	func_570(var_2_int, var_95_int); // 0x13d NEW_2
	goto Label_335; // 0x13f Jump
	
Label_320:
	var_96_int = 3; // 0x140 PushI
	var_97_bool = var_0_int == var_96_int; // 0x141 Eq
	if(var_97_bool == 0) goto Label_328; // 0x142 JumpB
	var_98_int = 0; // 0x143 PushV
	var_98_int = 2; // 0x144 MovI
	func_570(var_2_int, var_98_int); // 0x145 NEW_2
	goto Label_335; // 0x147 Jump
	
Label_328:
	var_99_int = 4; // 0x148 PushI
	var_100_bool = var_0_int == var_99_int; // 0x149 Eq
	if(var_100_bool == 0) goto Label_335; // 0x14a JumpB
	var_101_int = 0; // 0x14b PushV
	var_101_int = 3; // 0x14c MovI
	func_570(var_2_int, var_101_int); // 0x14d NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_float)
{
	var_3_int = 0; // 0x1b1 PushV
	var_3_int = var_0_int; // 0x1b2 MovT
	func_714(var_3_int); // 0x1b3 NEW_2
	func_595(); // 0x1b6 NEW_2
	func_18(); // 0x1b9 NEW_2
	return 0; // 0x1bb Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_string, var_4_object)
{
	var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); // 0x1bc PushV
	var_11_bool = 0; // 0x1bd MovB
	var_17_int = 0; // 0x1be PushI
	var_18_bool = var_2_int < var_17_int; // 0x1bf LT
	if(var_18_bool == 0) goto Label_457; // 0x1c0 JumpB
	var_19_bool = 0; var_20_int = 0; var_21_string = ""; var_22_object = Obj(); // 0x1c1 PushV
	var_20_int = var_2_int; // 0x1c2 Mov
	var_21_string = var_3_string; // 0x1c3 Mov
	var_22_object = var_4_object; // 0x1c4 Mov
	func_15(var_22_object); // 0x1c5 NEW_2
	var_11_bool = var_19_bool; // 0x1c6 Mov
	return 12; // 0x1c8 Return
	
Label_457:
	var_23_string = "button_weapon"; // 0x1c9 PushS
	var_24_bool = var_3_string == var_23_string; // 0x1ca Eq
	if(var_24_bool == 0) goto Label_466; // 0x1cb JumpB
	var_25_int = 0; // 0x1cc PushV
	var_25_int = 0; // 0x1cd MovI
	func_570(var_16_object, var_25_int); // 0x1ce NEW_2
	var_11_bool = 1; // 0x1d0 MovB
	goto Label_558; // 0x1d1 Jump
	
Label_558:
	var_60_bool = var_11_bool == 0; // 0x22e Not
	if(var_60_bool == 0) goto Label_567; // 0x22f JumpB
	var_61_bool = 0; var_62_int = 0; var_63_string = ""; var_64_object = Obj(); // 0x230 PushV
	var_62_int = var_2_int; // 0x231 Mov
	var_63_string = var_3_string; // 0x232 Mov
	var_64_object = var_4_object; // 0x233 Mov
	func_15(var_64_object); // 0x234 NEW_2
	var_11_bool = var_61_bool; // 0x235 Mov
	
Label_567:
	var_65_bool = var_11_bool; // 0x237 Push
	if(var_65_bool == 0) goto Label_569; // 0x238 JumpB
	
Label_569:
	return 12; // 0x239 Return
	
Label_466:
	var_66_string = "button_clothes"; // 0x1d2 PushS
	var_67_bool = var_3_string == var_66_string; // 0x1d3 Eq
	if(var_67_bool == 0) goto Label_475; // 0x1d4 JumpB
	var_68_int = 0; // 0x1d5 PushV
	var_68_int = 1; // 0x1d6 MovI
	func_570(var_16_object, var_68_int); // 0x1d7 NEW_2
	var_11_bool = 1; // 0x1d9 MovB
	goto Label_558; // 0x1da Jump
	
Label_475:
	var_69_string = "button_medcine"; // 0x1db PushS
	var_70_bool = var_3_string == var_69_string; // 0x1dc Eq
	if(var_70_bool == 0) goto Label_484; // 0x1dd JumpB
	var_71_int = 0; // 0x1de PushV
	var_71_int = 2; // 0x1df MovI
	func_570(var_16_object, var_71_int); // 0x1e0 NEW_2
	var_11_bool = 1; // 0x1e2 MovB
	goto Label_558; // 0x1e3 Jump
	
Label_484:
	var_72_string = "button_food"; // 0x1e4 PushS
	var_73_bool = var_3_string == var_72_string; // 0x1e5 Eq
	if(var_73_bool == 0) goto Label_493; // 0x1e6 JumpB
	var_74_int = 0; // 0x1e7 PushV
	var_74_int = 3; // 0x1e8 MovI
	func_570(var_16_object, var_74_int); // 0x1e9 NEW_2
	var_11_bool = 1; // 0x1eb MovB
	goto Label_558; // 0x1ec Jump
	
Label_493:
	var_75_string = "button_other"; // 0x1ed PushS
	var_76_bool = var_3_string == var_75_string; // 0x1ee Eq
	if(var_76_bool == 0) goto Label_502; // 0x1ef JumpB
	var_77_int = 0; // 0x1f0 PushV
	var_77_int = 4; // 0x1f1 MovI
	func_570(var_16_object, var_77_int); // 0x1f2 NEW_2
	var_11_bool = 1; // 0x1f4 MovB
	goto Label_558; // 0x1f5 Jump
	
Label_502:
	var_78_string = "button_detector"; // 0x1f6 PushS
	var_79_bool = var_3_string == var_78_string; // 0x1f7 Eq
	if(var_79_bool == 0) goto Label_506; // 0x1f8 JumpB
	goto Label_558; // 0x1f9 Jump
	
Label_506:
	var_80_string = "button_anticeptic"; // 0x1fa PushS
	var_81_bool = var_3_string == var_80_string; // 0x1fb Eq
	if(var_81_bool == 0) goto Label_510; // 0x1fc JumpB
	goto Label_558; // 0x1fd Jump
	
Label_510:
	var_82_int = 0; // 0x1fe PushI
	var_83_bool = var_2_int != var_82_int; // 0x1ff Neq
	if(var_83_bool == 0) goto Label_519; // 0x200 JumpB
	var_84_string = "noinv_drop"; // 0x201 PushS
	GetVariable(var_84_string, var_12_int); // 0x202 Func
	var_85_int = var_12_int; // 0x204 Push
	if(var_85_int == 0) goto Label_519; // 0x205 JumpB
	return 12; // 0x206 Return
	
Label_519:
	var_13_int = 0; // 0x207 MovI
	
Label_520:
	var_86_int = 12; // 0x208 PushI
	var_87_bool = var_13_int < var_86_int; // 0x209 LT
	if(var_87_bool == 0) goto Label_558; // 0x20a JumpB
	var_88_string = ""; var_89_int = 0; // 0x20b PushV
	var_89_int = var_13_int; // 0x20c Mov
	func_801(var_88_string, var_89_int); // 0x20d NEW_2
	var_100_bool = var_3_string == var_88_string; // 0x20f Eq
	if(var_100_bool == 0) goto Label_555; // 0x210 JumpB
	var_101_object = Obj(); // 0x211 PushV
	func_9(var_101_object); // 0x212 NEW_2
	var_14_object = var_101_object; // 0x213 Mov
	GetItemCount(var_15_int, var_0_int); // 0x215 ObjFunc
	var_104_bool = var_15_int > var_13_int; // 0x217 GT
	if(var_104_bool == 0) goto Label_553; // 0x218 JumpB
	GetItem(var_16_object, var_13_int, var_0_int); // 0x219 ObjFunc
	var_105_bool = 0; var_106_object = Obj(); // 0x21b PushV
	var_106_object = var_16_object; // 0x21c Mov
	func_412(var_106_object); // 0x21d NEW_2
	var_107_bool = var_105_bool == 0; // 0x21f Not
	if(var_107_bool == 0) goto Label_552; // 0x220 JumpB
	var_108_bool = 0; var_109_int = 0; var_110_bool = 0; // 0x221 PushV
	var_109_int = var_13_int; // 0x222 Mov
	var_111_int = 0; // 0x223 PushI
	var_110_bool = var_2_int == var_111_int; // 0x224 Eq2
	func_20(var_16_object, var_108_bool, var_109_int, var_110_bool); // 0x225 NEW_2
	var_11_bool = var_108_bool; // 0x226 Mov
	
Label_552:
	var_16_object = 0; // 0x228 SetNull
	
Label_553:
	goto Label_558; // 0x229 Jump
	
Label_555:
	var_217_int = 1; // 0x22b PushI
	var_13_int = var_13_int + var_217_int; // 0x22c Add2
	goto Label_520; // 0x22d Jump
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


func_9(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x9 PushV
	GetPlayerContainer(var_61_object); // 0xa Func
	var_59_object = var_61_object; // 0xc Mov
	return 2; // 0xd Return
}


func_15(var_19_bool)
{
	var_19_bool = 0; // 0x10 MovB
	return 0; // 0x11 Return
}


func_18()
{
	return 0; // 0x12 Return
}


func_19()
{
	return 0; // 0x13 Return
}


func_20(var_0_int, var_108_bool, var_109_int, var_110_bool)
{
	var_112_bool = var_110_bool; // 0x15 Push
	if(var_112_bool == 0) goto Label_28; // 0x16 JumpB
	var_113_int = 0; // 0x17 PushV
	var_113_int = var_109_int; // 0x18 Mov
	func_35(var_110_bool, var_113_int); // 0x19 NEW_2
	goto Label_33; // 0x1b Jump
	
Label_33:
	var_108_bool = 1; // 0x21 MovB
	return 0; // 0x22 Return
	
Label_28:
	var_184_bool = 0; var_185_int = 0; var_186_int = 0; // 0x1c PushV
	var_185_int = var_0_int; // 0x1d MovT
	var_186_int = var_109_int; // 0x1e Mov
	func_664(var_110_bool, var_184_bool, var_185_int, var_186_int); // 0x1f NEW_2
}


func_664(var_0_int, var_184_bool, var_185_int, var_186_int)
{
	var_187_object = Obj(); var_188_object = Obj(); var_189_object = Obj(); var_190_int = 0; var_191_int = 0; var_192_bool = 0; var_193_int = 0; var_194_bool = 0; var_195_bool = 0; var_196_object = Obj(); var_197_object = Obj(); var_198_object = Obj(); var_199_int = 0; var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_bool = 0; var_204_bool = 0; // 0x298 PushV
	var_205_object = Obj(); // 0x299 PushV
	func_9(var_205_object); // 0x29a NEW_2
	var_197_object = var_205_object; // 0x29b Mov
	GetContainer(var_196_object); // 0x29d Func
	GetItemCount(var_199_int, var_185_int); // 0x29f ObjFunc
	var_206_bool = var_199_int <= var_186_int; // 0x2a1 LE
	if(var_206_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_184_bool = 0; // 0x2a3 MovB
	return 18; // 0x2a4 Return
	
Label_677:
	GetItemAmount(var_200_int, var_186_int, var_185_int); // 0x2a5 ObjFunc
	GetItem(var_198_object, var_186_int, var_185_int); // 0x2a7 ObjFunc
	var_207_int = 0; // 0x2a9 PushI
	var_208_int = 1; // 0x2aa PushI
	AddItem(var_201_bool, var_198_object, var_207_int, var_208_int); // 0x2ab ObjFunc
	var_209_bool = var_201_bool == 0; // 0x2ad Not
	if(var_209_bool == 0) goto Label_689; // 0x2ae JumpB
	var_184_bool = 0; // 0x2af MovB
	return 18; // 0x2b0 Return
	
Label_689:
	var_210_int = 0; // 0x2b1 PushI
	var_211_bool = var_0_int == var_210_int; // 0x2b2 Eq
	if(var_211_bool == 0) goto Label_706; // 0x2b3 JumpB
	GetItemID(var_202_int); // 0x2b4 ObjFunc
	var_212_string = "Weapon"; // 0x2b6 PushS
	HasInvItemProperty(var_203_bool, var_202_int, var_212_string); // 0x2b7 Func
	var_213_bool = var_203_bool; // 0x2b9 Push
	if(var_213_bool == 0) goto Label_706; // 0x2ba JumpB
	IsItemSelected(var_204_bool, var_186_int, var_0_int); // 0x2bb ObjFunc
	var_214_bool = var_204_bool; // 0x2bd Push
	if(var_214_bool == 0) goto Label_706; // 0x2be JumpB
	var_215_int = -1; // 0x2bf PushI
	SetPlayerHandsItem(var_215_int); // 0x2c0 Func
	
Label_706:
	var_216_int = 1; // 0x2c2 PushI
	RemoveItem(var_186_int, var_216_int, var_185_int); // 0x2c3 ObjFunc
	var_184_bool = 1; // 0x2c5 MovB
	return 18; // 0x2c6 Return
}


func_412(var_74_bool)
{
	var_74_bool = 0; // 0x19d MovB
	return 0; // 0x19e Return
}


func_157(var_0_int, var_4_int)
{
	var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_object = Obj(); // 0x9d PushV
	var_0_int = -1; // 0x9e TMovI
	var_9_int = 0; // 0x9f PushV
	var_9_int = var_4_int; // 0xa0 Mov
	func_570(var_8_object, var_9_int); // 0xa1 NEW_2
	var_44_int = 0; // 0xa3 PushV
	var_44_int = var_0_int; // 0xa4 MovT
	func_714(var_44_int); // 0xa5 NEW_2
	func_595(); // 0xa8 NEW_2
	var_7_int = 0; // 0xaa MovI
	
Label_171:
	var_117_int = 12; // 0xab PushI
	var_118_bool = var_7_int < var_117_int; // 0xac LT
	if(var_118_bool == 0) goto Label_209; // 0xad JumpB
	CreateStringVector(var_8_object); // 0xae Func
	var_119_string = ""; var_120_int = 0; // 0xb0 PushV
	var_121_int = 12; // 0xb1 PushI
	var_122_int = var_7_int + var_121_int; // 0xb2 Add
	var_123_int = 1; // 0xb3 PushI
	var_124_int = var_122_int - var_123_int; // 0xb4 Sub
	var_125_int = 12; // 0xb5 PushI
	var_120_int = var_124_int % var_125_int; // 0xb6 Mod2
	func_801(var_119_string, var_120_int); // 0xb7 NEW_2
	add(var_119_string); // 0xb9 ObjFunc
	var_126_string = ""; var_127_int = 0; // 0xbb PushV
	var_128_int = 12; // 0xbc PushI
	var_129_int = var_7_int + var_128_int; // 0xbd Add
	var_130_int = 1; // 0xbe PushI
	var_131_int = var_129_int + var_130_int; // 0xbf Add
	var_132_int = 12; // 0xc0 PushI
	var_127_int = var_131_int % var_132_int; // 0xc1 Mod2
	func_801(var_126_string, var_127_int); // 0xc2 NEW_2
	add(var_126_string); // 0xc4 ObjFunc
	var_133_int = -1; // 0xc6 PushI
	var_134_string = ""; var_135_int = 0; // 0xc7 PushV
	var_135_int = var_7_int; // 0xc8 Mov
	func_801(var_134_string, var_135_int); // 0xc9 NEW_2
	SendMessage(var_133_int, var_134_string, var_8_object); // 0xcb Func
	var_8_object = 0; // 0xcd SetNull
	var_136_int = 1; // 0xce PushI
	var_7_int = var_7_int + var_136_int; // 0xcf Add2
	goto Label_171; // 0xd0 Jump
	
Label_209:
	func_231(); // 0xd2 NEW_2
	var_140_string = "default"; // 0xd4 PushS
	SetCursor(var_140_string); // 0xd5 Func
	ShowCursor(); // 0xd7 Func
	CaptureKeyboard(); // 0xd9 Func
	var_141_bool = 0; // 0xdb PushB
	SetOwnerDraw(var_141_bool); // 0xdc Func
	var_142_bool = 1; // 0xde PushB
	SetNeedUpdate(var_142_bool); // 0xdf Func
	func_19(); // 0xe2 NEW_2
	ProcessEvents(); // 0xe4 Func
	return 4; // 0xe6 Return
}


func_415(var_65_bool, var_66_int, var_67_int)
{
	var_68_bool = 0; var_69_bool = 0; // 0x19f PushV
	var_70_object = Obj(); // 0x1a0 PushV
	func_9(var_70_object); // 0x1a1 NEW_2
	var_71_object = Obj(); // 0x1a3 PushV
	func_9(var_71_object); // 0x1a4 NEW_2
	var_72_object = Obj(); // 0x1a6 PushV
	func_9(var_72_object); // 0x1a7 NEW_2
	var_73_object = Obj(); // 0x1a9 PushV
	func_9(var_73_object); // 0x1aa NEW_2
	IsItemSelected(var_69_bool, var_66_int, var_67_int); // 0x1ac ObjFunc
	var_65_bool = var_69_bool; // 0x1ae Mov
	return 2; // 0x1af Return
}


func_801(var_79_string, var_80_int)
{
	var_81_int = 1; // 0x322 PushI
	var_82_int = var_80_int + var_81_int; // 0x323 Add
	var_83_int = 10; // 0x324 PushI
	var_84_bool = var_82_int < var_83_int; // 0x325 LT
	if(var_84_bool == 0) goto Label_812; // 0x326 JumpB
	var_85_string = "slot0"; // 0x327 PushS
	var_86_int = 1; // 0x328 PushI
	var_87_int = var_80_int + var_86_int; // 0x329 Add
	var_79_string = var_85_string + var_87_int; // 0x32a Add2
	return 0; // 0x32b Return
	
Label_812:
	var_88_string = "slot"; // 0x32c PushS
	var_89_int = 1; // 0x32d PushI
	var_90_int = var_80_int + var_89_int; // 0x32e Add
	var_79_string = var_88_string + var_90_int; // 0x32f Add2
	return 0; // 0x330 Return
}


func_35(var_0_int, var_113_int)
{
	var_114_object = Obj(); var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_bool = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; var_134_object = Obj(); var_135_int = 0; var_136_int = 0; var_137_bool = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_object = Obj(); var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_bool = 0; // 0x23 PushV
	var_150_object = Obj(); // 0x24 PushV
	func_9(var_150_object); // 0x25 NEW_2
	var_132_object = var_150_object; // 0x26 Mov
	GetItemCount(var_133_int, var_0_int); // 0x28 ObjFunc
	var_151_bool = var_113_int >= var_133_int; // 0x2a GE
	if(var_151_bool == 0) goto Label_45; // 0x2b JumpB
	return 36; // 0x2c Return
	
Label_45:
	GetItem(var_134_object, var_113_int, var_0_int); // 0x2d ObjFunc
	GetItemID(var_135_int); // 0x2f ObjFunc
	GetItemAmount(var_136_int, var_113_int, var_0_int); // 0x31 ObjFunc
	IsItemSelected(var_137_bool, var_113_int, var_0_int); // 0x33 ObjFunc
	var_152_int = 0; // 0x35 PushI
	var_153_bool = var_0_int == var_152_int; // 0x36 Eq
	if(var_153_bool == 0) goto Label_86; // 0x37 JumpB
	var_154_string = "Weapon"; // 0x38 PushS
	HasInvItemProperty(var_138_bool, var_135_int, var_154_string); // 0x39 Func
	var_155_bool = var_138_bool == 0; // 0x3b Not
	if(var_155_bool == 0) goto Label_62; // 0x3c JumpB
	return 36; // 0x3d Return
	
Label_62:
	var_156_bool = var_137_bool; // 0x3e Push
	if(var_156_bool == 0) goto Label_71; // 0x3f JumpB
	var_157_bool = 0; // 0x40 PushB
	SelectItem(var_113_int, var_157_bool, var_0_int); // 0x41 ObjFunc
	var_158_int = -1; // 0x43 PushI
	SetPlayerHandsItem(var_158_int); // 0x44 Func
	goto Label_85; // 0x46 Jump
	
Label_85:
	goto Label_154; // 0x55 Jump
	
Label_154:
	return 36; // 0x9a Return
	
Label_71:
	SetPlayerHandsItem(var_135_int); // 0x47 Func
	var_139_int = 0; // 0x49 MovI
	
Label_74:
	var_159_bool = var_139_int < var_133_int; // 0x4a LT
	if(var_159_bool == 0) goto Label_82; // 0x4b JumpB
	var_160_bool = 0; // 0x4c PushB
	SelectItem(var_139_int, var_160_bool, var_0_int); // 0x4d ObjFunc
	var_161_int = 1; // 0x4f PushI
	var_139_int = var_139_int + var_161_int; // 0x50 Add2
	goto Label_74; // 0x51 Jump
	
Label_82:
	var_162_bool = 1; // 0x52 PushB
	SelectItem(var_113_int, var_162_bool, var_0_int); // 0x53 ObjFunc
	
Label_86:
	var_163_int = 1; // 0x56 PushI
	var_164_bool = var_0_int == var_163_int; // 0x57 Eq
	if(var_164_bool == 0) goto Label_139; // 0x58 JumpB
	var_165_string = "Group"; // 0x59 PushS
	HasInvItemProperty(var_140_bool, var_135_int, var_165_string); // 0x5a Func
	var_166_bool = var_140_bool == 0; // 0x5c Not
	if(var_166_bool == 0) goto Label_95; // 0x5d JumpB
	return 36; // 0x5e Return
	
Label_95:
	var_167_string = "Group"; // 0x5f PushS
	GetInvItemProperty(var_141_int, var_135_int, var_167_string); // 0x60 Func
	var_168_bool = var_137_bool; // 0x62 Push
	if(var_168_bool == 0) goto Label_104; // 0x63 JumpB
	var_169_bool = 0; // 0x64 PushB
	SelectItem(var_113_int, var_169_bool, var_0_int); // 0x65 ObjFunc
	goto Label_138; // 0x67 Jump
	
Label_138:
	goto Label_154; // 0x8a Jump
	
Label_104:
	var_142_int = 0; // 0x68 MovI
	
Label_105:
	var_170_bool = var_142_int < var_133_int; // 0x69 LT
	if(var_170_bool == 0) goto Label_135; // 0x6a JumpB
	IsItemSelected(var_143_bool, var_142_int, var_0_int); // 0x6b ObjFunc
	var_171_bool = var_143_bool == 0; // 0x6d Not
	if(var_171_bool == 0) goto Label_112; // 0x6e JumpB
	goto Label_132; // 0x6f Jump
	
Label_132:
	var_172_int = 1; // 0x84 PushI
	var_142_int = var_142_int + var_172_int; // 0x85 Add2
	goto Label_105; // 0x86 Jump
	
Label_112:
	GetItem(var_144_object, var_142_int, var_0_int); // 0x70 ObjFunc
	GetItemID(var_145_int); // 0x72 ObjFunc
	var_173_string = "Group"; // 0x74 PushS
	HasInvItemProperty(var_146_bool, var_145_int, var_173_string); // 0x75 Func
	var_174_bool = var_146_bool == 0; // 0x77 Not
	if(var_174_bool == 0) goto Label_122; // 0x78 JumpB
	goto Label_132; // 0x79 Jump
	
Label_122:
	var_175_string = "Group"; // 0x7a PushS
	GetInvItemProperty(var_147_int, var_145_int, var_175_string); // 0x7b Func
	var_176_bool = var_147_int == var_141_int; // 0x7d Eq
	if(var_176_bool == 0) goto Label_131; // 0x7e JumpB
	var_177_bool = 0; // 0x7f PushB
	SelectItem(var_142_int, var_177_bool, var_0_int); // 0x80 ObjFunc
	goto Label_135; // 0x82 Jump
	
Label_135:
	var_178_bool = 1; // 0x87 PushB
	SelectItem(var_113_int, var_178_bool, var_0_int); // 0x88 ObjFunc
	
Label_131:
	var_144_object = 0; // 0x83 SetNull
	
Label_139:
	UseItem(var_113_int, var_0_int, var_148_bool); // 0x8b Func
	var_179_bool = var_148_bool; // 0x8d Push
	if(var_179_bool == 0) goto Label_154; // 0x8e JumpB
	var_180_int = -1; // 0x8f PushI
	var_136_int = var_136_int + var_180_int; // 0x90 Add2
	var_181_int = 0; // 0x91 PushI
	var_182_bool = var_136_int == var_181_int; // 0x92 Eq
	if(var_182_bool == 0) goto Label_152; // 0x93 JumpB
	var_183_int = 1; // 0x94 PushI
	RemoveItem(var_113_int, var_183_int, var_0_int); // 0x95 ObjFunc
	goto Label_154; // 0x97 Jump
	
Label_152:
	SetItemAmount(var_136_int, var_113_int, var_0_int); // 0x98 ObjFunc
}


func_570(var_0_int, var_9_int)
{
	var_10_int = -1; // 0x23b PushI
	var_11_bool = var_9_int == var_10_int; // 0x23c Eq
	if(var_11_bool == 0) goto Label_575; // 0x23d JumpB
	return 0; // 0x23e Return
	
Label_575:
	var_12_bool = var_0_int == var_9_int; // 0x23f Eq
	if(var_12_bool == 0) goto Label_578; // 0x240 JumpB
	return 0; // 0x241 Return
	
Label_578:
	var_0_int = var_9_int; // 0x242 TMov
	var_13_int = 0; // 0x243 PushV
	var_13_int = var_0_int; // 0x244 MovT
	func_602(var_13_int); // 0x245 NEW_2
	return 0; // 0x247 Return
}


func_584(var_109_int)
{
	var_110_object = Obj(); var_111_int = 0; var_112_object = Obj(); var_113_int = 0; // 0x248 PushV
	var_114_object = Obj(); // 0x249 PushV
	func_9(var_114_object); // 0x24a NEW_2
	var_112_object = var_114_object; // 0x24b Mov
	var_115_string = "money"; // 0x24d PushS
	GetProperty(var_115_string, var_113_int); // 0x24e ObjFunc
	var_109_int = var_113_int; // 0x250 Mov
	return 4; // 0x251 Return
}


func_714(var_44_int)
{
	var_45_object = Obj(); var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_int = 0; var_50_bool = 0; var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_bool = 0; var_58_bool = 0; // 0x2ca PushV
	var_59_object = Obj(); // 0x2cb PushV
	func_9(var_59_object); // 0x2cc NEW_2
	var_52_object = var_59_object; // 0x2cd Mov
	GetItemCount(var_53_int, var_44_int); // 0x2cf ObjFunc
	var_54_int = 0; // 0x2d1 MovI
	
Label_722:
	var_62_int = 12; // 0x2d2 PushI
	var_63_bool = var_54_int < var_62_int; // 0x2d3 LT
	if(var_63_bool == 0) goto Label_799; // 0x2d4 JumpB
	var_64_bool = var_54_int < var_53_int; // 0x2d5 LT
	if(var_64_bool == 0) goto Label_789; // 0x2d6 JumpB
	GetItem(var_55_object, var_54_int, var_44_int); // 0x2d7 ObjFunc
	GetItemAmount(var_56_int, var_54_int, var_44_int); // 0x2d9 ObjFunc
	var_65_bool = 0; var_66_int = 0; var_67_int = 0; // 0x2db PushV
	var_66_int = var_54_int; // 0x2dc Mov
	var_67_int = var_44_int; // 0x2dd Mov
	func_415(var_65_bool, var_66_int, var_67_int); // 0x2de NEW_2
	var_57_bool = var_65_bool; // 0x2df Mov
	var_74_bool = 0; var_75_object = Obj(); // 0x2e1 PushV
	var_75_object = var_55_object; // 0x2e2 Mov
	func_412(var_75_object); // 0x2e3 NEW_2
	var_58_bool = var_74_bool; // 0x2e4 Mov
	var_76_bool = var_57_bool; // 0x2e6 Push
	if(var_76_bool == 0) goto Label_762; // 0x2e7 JumpB
	var_77_bool = var_58_bool; // 0x2e8 Push
	if(var_77_bool == 0) goto Label_754; // 0x2e9 JumpB
	var_78_int = 0; // 0x2ea PushI
	var_79_string = ""; var_80_int = 0; // 0x2eb PushV
	var_80_int = var_54_int; // 0x2ec Mov
	func_801(var_79_string, var_80_int); // 0x2ed NEW_2
	SendMessage(var_78_int, var_79_string, var_55_object); // 0x2ef Func
	goto Label_761; // 0x2f1 Jump
	
Label_761:
	goto Label_779; // 0x2f9 Jump
	
Label_779:
	var_91_int = 65536; // 0x30b PushI
	var_92_int = var_56_int | var_91_int; // 0x30c Or
	var_93_string = ""; var_94_int = 0; // 0x30d PushV
	var_94_int = var_54_int; // 0x30e Mov
	func_801(var_93_string, var_94_int); // 0x30f NEW_2
	SendMessage(var_92_int, var_93_string); // 0x311 Func
	var_55_object = 0; // 0x313 SetNull
	goto Label_796; // 0x314 Jump
	
Label_796:
	var_95_int = 1; // 0x31c PushI
	var_54_int = var_54_int + var_95_int; // 0x31d Add2
	goto Label_722; // 0x31e Jump
	
Label_754:
	var_96_int = 16384; // 0x2f2 PushI
	var_97_string = ""; var_98_int = 0; // 0x2f3 PushV
	var_98_int = var_54_int; // 0x2f4 Mov
	func_801(var_97_string, var_98_int); // 0x2f5 NEW_2
	SendMessage(var_96_int, var_97_string, var_55_object); // 0x2f7 Func
	
Label_762:
	var_99_bool = var_58_bool; // 0x2fa Push
	if(var_99_bool == 0) goto Label_772; // 0x2fb JumpB
	var_100_int = 131072; // 0x2fc PushI
	var_101_string = ""; var_102_int = 0; // 0x2fd PushV
	var_102_int = var_54_int; // 0x2fe Mov
	func_801(var_101_string, var_102_int); // 0x2ff NEW_2
	SendMessage(var_100_int, var_101_string, var_55_object); // 0x301 Func
	goto Label_779; // 0x303 Jump
	
Label_772:
	var_103_int = 0; // 0x304 PushI
	var_104_string = ""; var_105_int = 0; // 0x305 PushV
	var_105_int = var_54_int; // 0x306 Mov
	func_801(var_104_string, var_105_int); // 0x307 NEW_2
	SendMessage(var_103_int, var_104_string, var_55_object); // 0x309 Func
	
Label_789:
	var_106_int = 32768; // 0x315 PushI
	var_107_string = ""; var_108_int = 0; // 0x316 PushV
	var_108_int = var_54_int; // 0x317 Mov
	func_801(var_107_string, var_108_int); // 0x318 NEW_2
	SendMessage(var_106_int, var_107_string); // 0x31a Func
	
Label_799:
	return 14; // 0x31f Return
}


func_595()
{
	var_109_int = 0; // 0x253 PushV
	func_584(var_109_int); // 0x254 NEW_2
	var_116_string = "money"; // 0x256 PushS
	SendMessage(var_109_int, var_116_string); // 0x257 Func
	return 0; // 0x259 Return
}


func_340(var_42_int)
{
	var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; // 0x154 PushV
	var_47_int = 269; // 0x155 PushI
	var_48_bool = var_42_int == var_47_int; // 0x156 Eq
	if(var_48_bool == 0) goto Label_358; // 0x157 JumpB
	var_45_int = 0; // 0x158 MovI
	
Label_345:
	var_49_int = 12; // 0x159 PushI
	var_50_bool = var_45_int < var_49_int; // 0x15a LT
	if(var_50_bool == 0) goto Label_358; // 0x15b JumpB
	var_51_int = -2; // 0x15c PushI
	var_52_string = ""; var_53_int = 0; // 0x15d PushV
	var_53_int = var_45_int; // 0x15e Mov
	func_801(var_52_string, var_53_int); // 0x15f NEW_2
	SendMessage(var_51_int, var_52_string); // 0x161 Func
	var_64_int = 1; // 0x163 PushI
	var_45_int = var_45_int + var_64_int; // 0x164 Add2
	goto Label_345; // 0x165 Jump
	
Label_358:
	var_65_int = 270; // 0x166 PushI
	var_66_bool = var_42_int == var_65_int; // 0x167 Eq
	if(var_66_bool == 0) goto Label_375; // 0x168 JumpB
	var_46_int = 0; // 0x169 MovI
	
Label_362:
	var_67_int = 12; // 0x16a PushI
	var_68_bool = var_46_int < var_67_int; // 0x16b LT
	if(var_68_bool == 0) goto Label_375; // 0x16c JumpB
	var_69_int = -3; // 0x16d PushI
	var_70_string = ""; var_71_int = 0; // 0x16e PushV
	var_71_int = var_46_int; // 0x16f Mov
	func_801(var_70_string, var_71_int); // 0x170 NEW_2
	SendMessage(var_69_int, var_70_string); // 0x172 Func
	var_72_int = 1; // 0x174 PushI
	var_46_int = var_46_int + var_72_int; // 0x175 Add2
	goto Label_362; // 0x176 Jump
	
Label_375:
	return 4; // 0x177 Return
}


func_602(var_13_int)
{
	var_14_int = 0; // 0x25b PushI
	var_15_bool = var_13_int != var_14_int; // 0x25c Neq
	if(var_15_bool == 0) goto Label_611; // 0x25d JumpB
	var_16_int = 0; // 0x25e PushI
	var_17_string = "button_weapon"; // 0x25f PushS
	SendMessage(var_16_int, var_17_string); // 0x260 Func
	goto Label_615; // 0x262 Jump
	
Label_615:
	var_18_int = 1; // 0x267 PushI
	var_19_bool = var_13_int != var_18_int; // 0x268 Neq
	if(var_19_bool == 0) goto Label_623; // 0x269 JumpB
	var_20_int = 0; // 0x26a PushI
	var_21_string = "button_clothes"; // 0x26b PushS
	SendMessage(var_20_int, var_21_string); // 0x26c Func
	goto Label_627; // 0x26e Jump
	
Label_627:
	var_22_int = 2; // 0x273 PushI
	var_23_bool = var_13_int != var_22_int; // 0x274 Neq
	if(var_23_bool == 0) goto Label_635; // 0x275 JumpB
	var_24_int = 0; // 0x276 PushI
	var_25_string = "button_medcine"; // 0x277 PushS
	SendMessage(var_24_int, var_25_string); // 0x278 Func
	goto Label_639; // 0x27a Jump
	
Label_639:
	var_26_int = 3; // 0x27f PushI
	var_27_bool = var_13_int != var_26_int; // 0x280 Neq
	if(var_27_bool == 0) goto Label_647; // 0x281 JumpB
	var_28_int = 0; // 0x282 PushI
	var_29_string = "button_food"; // 0x283 PushS
	SendMessage(var_28_int, var_29_string); // 0x284 Func
	goto Label_651; // 0x286 Jump
	
Label_651:
	var_30_int = 4; // 0x28b PushI
	var_31_bool = var_13_int != var_30_int; // 0x28c Neq
	if(var_31_bool == 0) goto Label_659; // 0x28d JumpB
	var_32_int = 0; // 0x28e PushI
	var_33_string = "button_other"; // 0x28f PushS
	SendMessage(var_32_int, var_33_string); // 0x290 Func
	goto Label_663; // 0x292 Jump
	
Label_663:
	return 0; // 0x297 Return
	
Label_659:
	var_34_int = 1; // 0x293 PushI
	var_35_string = "button_other"; // 0x294 PushS
	SendMessage(var_34_int, var_35_string); // 0x295 Func
	
Label_647:
	var_36_int = 1; // 0x287 PushI
	var_37_string = "button_food"; // 0x288 PushS
	SendMessage(var_36_int, var_37_string); // 0x289 Func
	
Label_635:
	var_38_int = 1; // 0x27b PushI
	var_39_string = "button_medcine"; // 0x27c PushS
	SendMessage(var_38_int, var_39_string); // 0x27d Func
	
Label_623:
	var_40_int = 1; // 0x26f PushI
	var_41_string = "button_clothes"; // 0x270 PushS
	SendMessage(var_40_int, var_41_string); // 0x271 Func
	
Label_611:
	var_42_int = 1; // 0x263 PushI
	var_43_string = "button_weapon"; // 0x264 PushS
	SendMessage(var_42_int, var_43_string); // 0x265 Func
}


func_231()
{
	var_137_int = -6; // 0xe7 PushI
	var_138_string = ""; var_139_int = 0; // 0xe8 PushV
	var_139_int = 0; // 0xe9 MovI
	func_801(var_138_string, var_139_int); // 0xea NEW_2
	SendMessage(var_137_int, var_138_string); // 0xec Func
	return 0; // 0xee Return
}


func_376(var_3_int)
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; // 0x178 PushV
	var_8_int = 273; // 0x179 PushI
	var_9_bool = var_3_int == var_8_int; // 0x17a Eq
	if(var_9_bool == 0) goto Label_394; // 0x17b JumpB
	var_6_int = 0; // 0x17c MovI
	
Label_381:
	var_10_int = 12; // 0x17d PushI
	var_11_bool = var_6_int < var_10_int; // 0x17e LT
	if(var_11_bool == 0) goto Label_394; // 0x17f JumpB
	var_12_int = -2; // 0x180 PushI
	var_13_string = ""; var_14_int = 0; // 0x181 PushV
	var_14_int = var_6_int; // 0x182 Mov
	func_801(var_13_string, var_14_int); // 0x183 NEW_2
	SendMessage(var_12_int, var_13_string); // 0x185 Func
	var_25_int = 1; // 0x187 PushI
	var_6_int = var_6_int + var_25_int; // 0x188 Add2
	goto Label_381; // 0x189 Jump
	
Label_394:
	var_26_int = 271; // 0x18a PushI
	var_27_bool = var_3_int == var_26_int; // 0x18b Eq
	if(var_27_bool == 0) goto Label_411; // 0x18c JumpB
	var_7_int = 0; // 0x18d MovI
	
Label_398:
	var_28_int = 12; // 0x18e PushI
	var_29_bool = var_7_int < var_28_int; // 0x18f LT
	if(var_29_bool == 0) goto Label_411; // 0x190 JumpB
	var_30_int = -3; // 0x191 PushI
	var_31_string = ""; var_32_int = 0; // 0x192 PushV
	var_32_int = var_7_int; // 0x193 Mov
	func_801(var_31_string, var_32_int); // 0x194 NEW_2
	SendMessage(var_30_int, var_31_string); // 0x196 Func
	var_33_int = 1; // 0x198 PushI
	var_7_int = var_7_int + var_33_int; // 0x199 Add2
	goto Label_398; // 0x19a Jump
	
Label_411:
	return 4; // 0x19b Return
}


