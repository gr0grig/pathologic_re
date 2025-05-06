task_0_event_201(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_int, var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x13c PushV
	var_24_int = 200; // 0x13d PushI
	var_25_bool = var_12_int == var_24_int; // 0x13e Eq
	if(var_25_bool == 0) goto Label_332; // 0x13f JumpB
	var_26_object = var_13_object; // 0x140 Push
	if(var_26_object == 0) goto Label_331; // 0x141 JumpB
	size(var_19_int); // 0x142 ObjFunc
	var_27_int = 1; // 0x144 PushI
	var_28_bool = var_19_int == var_27_int; // 0x145 Eq
	if(var_28_bool == 0) goto Label_331; // 0x146 JumpB
	var_29_int = 0; // 0x147 PushI
	get(var_15_int, var_29_int); // 0x148 ObjFunc
	var_11_float = 1.0; // 0x14a TMovF
	
Label_331:
	goto Label_449; // 0x14b Jump
	
Label_449:
	return 10; // 0x1c1 Return
	
Label_332:
	var_30_int = 1; // 0x14c PushI
	var_31_bool = var_12_int == var_30_int; // 0x14d Eq
	if(var_31_bool == 0) goto Label_351; // 0x14e JumpB
	var_32_bool = var_0_object == 0; // 0x14f Not
	if(var_32_bool == 0) goto Label_341; // 0x150 JumpB
	var_33_string = "visir.xml"; // 0x151 PushS
	var_34_bool = 0; // 0x152 PushB
	CreateWindow(var_33_string, var_34_bool, var_0_object); // 0x153 Func
	
Label_341:
	var_35_int = 0; // 0x155 PushV
	func_579(var_35_int); // 0x156 NEW_2
	var_43_string = "charge"; // 0x158 PushS
	SendMessage(var_35_int, var_43_string); // 0x159 Func
	func_471(); // 0x15c NEW_2
	goto Label_449; // 0x15e Jump
	
Label_351:
	var_66_int = 2; // 0x15f PushI
	var_67_bool = var_12_int == var_66_int; // 0x160 Eq
	if(var_67_bool == 0) goto Label_359; // 0x161 JumpB
	var_68_object = var_0_object; // 0x162 PushT
	if(var_68_object == 0) goto Label_358; // 0x163 JumpB
	DestroyWindow(); // 0x164 TObjFunc
	
Label_358:
	goto Label_449; // 0x166 Jump
	
Label_359:
	var_69_int = 3; // 0x167 PushI
	var_70_bool = var_12_int == var_69_int; // 0x168 Eq
	if(var_70_bool == 0) goto Label_374; // 0x169 JumpB
	var_71_int = 0; // 0x16a PushI
	get(var_20_int, var_71_int); // 0x16b ObjFunc
	var_72_int = 1; // 0x16d PushI
	get(var_21_int, var_72_int); // 0x16e ObjFunc
	var_73_int = 0; var_74_int = 0; // 0x170 PushV
	var_73_int = var_20_int; // 0x171 Mov
	var_74_int = var_21_int; // 0x172 Mov
	func_189(var_73_int, var_74_int); // 0x173 NEW_2
	goto Label_449; // 0x175 Jump
	
Label_374:
	var_78_int = 4; // 0x176 PushI
	var_79_bool = var_12_int == var_78_int; // 0x177 Eq
	if(var_79_bool == 0) goto Label_384; // 0x178 JumpB
	var_80_int = 0; // 0x179 PushI
	get(var_22_int, var_80_int); // 0x17a ObjFunc
	var_81_int = 1; // 0x17c PushI
	get(var_23_int, var_81_int); // 0x17d ObjFunc
	goto Label_449; // 0x17f Jump
	
Label_384:
	var_82_int = 100; // 0x180 PushI
	var_83_bool = var_12_int == var_82_int; // 0x181 Eq
	if(var_83_bool == 0) goto Label_392; // 0x182 JumpB
	var_84_int = 0; // 0x183 PushV
	var_84_int = 100; // 0x184 MovI
	func_41(var_84_int); // 0x185 NEW_2
	goto Label_449; // 0x187 Jump
	
Label_392:
	var_96_int = 101; // 0x188 PushI
	var_97_bool = var_12_int == var_96_int; // 0x189 Eq
	if(var_97_bool == 0) goto Label_400; // 0x18a JumpB
	var_98_int = 0; // 0x18b PushV
	var_98_int = 101; // 0x18c MovI
	func_41(var_98_int); // 0x18d NEW_2
	goto Label_449; // 0x18f Jump
	
Label_400:
	var_99_int = 6; // 0x190 PushI
	var_100_bool = var_12_int == var_99_int; // 0x191 Eq
	if(var_100_bool == 0) goto Label_414; // 0x192 JumpB
	var_101_int = 0; // 0x193 PushV
	var_101_int = 2; // 0x194 MovI
	func_66(var_101_int); // 0x195 NEW_2
	var_113_string = "mail"; // 0x197 PushS
	PlaySound(var_113_string); // 0x198 Func
	var_114_string = "HasMail"; // 0x19a PushS
	Trace(var_114_string); // 0x19b Func
	goto Label_449; // 0x19d Jump
	
Label_414:
	var_115_int = 7; // 0x19e PushI
	var_116_bool = var_12_int == var_115_int; // 0x19f Eq
	if(var_116_bool == 0) goto Label_428; // 0x1a0 JumpB
	var_117_int = 0; // 0x1a1 PushV
	var_117_int = 3; // 0x1a2 MovI
	func_66(var_117_int); // 0x1a3 NEW_2
	var_118_string = "diary"; // 0x1a5 PushS
	PlaySound(var_118_string); // 0x1a6 Func
	var_119_string = "HasDiary"; // 0x1a8 PushS
	Trace(var_119_string); // 0x1a9 Func
	goto Label_449; // 0x1ab Jump
	
Label_428:
	var_120_int = 8; // 0x1ac PushI
	var_121_bool = var_12_int == var_120_int; // 0x1ad Eq
	if(var_121_bool == 0) goto Label_439; // 0x1ae JumpB
	var_122_int = 0; // 0x1af PushV
	var_122_int = 4; // 0x1b0 MovI
	func_66(var_122_int); // 0x1b1 NEW_2
	var_123_string = "ReputationUP"; // 0x1b3 PushS
	Trace(var_123_string); // 0x1b4 Func
	goto Label_449; // 0x1b6 Jump
	
Label_439:
	var_124_int = 9; // 0x1b7 PushI
	var_125_bool = var_12_int == var_124_int; // 0x1b8 Eq
	if(var_125_bool == 0) goto Label_449; // 0x1b9 JumpB
	var_126_int = 0; // 0x1ba PushV
	var_126_int = 5; // 0x1bb MovI
	func_66(var_126_int); // 0x1bc NEW_2
	var_127_string = "ReputationDown"; // 0x1be PushS
	Trace(var_127_string); // 0x1bf Func
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_float = 0; // 0x1c3 PushV
	var_13_float = var_12_float; // 0x1c4 Mov
	func_96(var_13_float); // 0x1c5 NEW_2
	var_25_float = 0; // 0x1c7 PushV
	var_25_float = var_12_float; // 0x1c8 Mov
	func_212(var_25_float); // 0x1c9 NEW_2
	var_50_float = 0; // 0x1cb PushV
	var_50_float = var_12_float; // 0x1cc Mov
	func_259(); // 0x1cd NEW_2
	func_471(); // 0x1d0 NEW_2
	var_87_float = 0; // 0x1d2 PushV
	var_87_float = var_12_float; // 0x1d3 Mov
	func_549(var_11_float, var_12_float, var_87_float); // 0x1d4 NEW_2
	return 0; // 0x1d6 Return
}


task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float)
{
	var_12_bool = 0; // 0x230 PushV
	func_620(var_12_bool); // 0x231 NEW_2
	if(var_12_bool == 0) goto Label_569; // 0x233 JumpB
	var_19_string = "cross"; // 0x234 PushS
	var_20_int = 399; // 0x235 PushI
	var_21_int = 299; // 0x236 PushI
	Blit(var_19_string, var_20_int, var_21_int); // 0x237 Func
	
Label_569:
	func_117(); // 0x23a NEW_2
	func_287(); // 0x23d NEW_2
	func_526(var_9_object, var_10_int, var_11_float); // 0x240 NEW_2
	return 0; // 0x242 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_float)
{
	var_10_int = -1; // 0x0 TMovI
	var_12_bool = 0; // 0x1 PushV
	func_593(var_12_bool); // 0x2 NEW_2
	if(var_12_bool == 0) goto Label_18; // 0x4 JumpB
	var_19_string = "visir.xml"; // 0x5 PushS
	var_20_bool = 0; // 0x6 PushB
	CreateWindow(var_19_string, var_20_bool, var_0_object); // 0x7 Func
	var_21_int = 0; // 0x9 PushV
	func_579(var_21_int); // 0xa NEW_2
	var_29_string = "charge"; // 0xc PushS
	SendMessage(var_21_int, var_29_string); // 0xd Func
	func_471(); // 0x10 NEW_2
	
Label_18:
	CreateIntVector(var_7_object); // 0x12 Func
	CreateStringVector(var_10_int); // 0x14 Func
	CreateIntVector(var_9_object); // 0x16 Func
	CreateFloatVector(var_8_object); // 0x18 Func
	CreateIntVector(var_6_object); // 0x1a Func
	CreateIntVector(var_5_object); // 0x1c Func
	CreateFloatVector(var_4_object); // 0x1e Func
	var_52_bool = 1; // 0x20 PushB
	SetOwnerDraw(var_52_bool); // 0x21 Func
	var_53_bool = 1; // 0x23 PushB
	SetNeedUpdate(var_53_bool); // 0x24 Func
	ProcessEvents(); // 0x26 Func
	return 0; // 0x28 Return
}


func_259()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0x103 PushV
	size(var_53_int); // 0x104 TObjFunc
	var_55_bool = var_53_int == 0; // 0x106 Not
	if(var_55_bool == 0) goto Label_265; // 0x107 JumpB
	return 4; // 0x108 Return
	
Label_265:
	var_56_object = var_1_object; // 0x109 PushT
	if(var_56_object == 0) goto Label_268; // 0x10a JumpB
	return 4; // 0x10b Return
	
Label_268:
	var_57_int = 0; // 0x10c PushI
	get(var_54_int, var_57_int); // 0x10d TObjFunc
	var_58_int = 100; // 0x10f PushI
	var_59_bool = var_54_int == var_58_int; // 0x110 Eq
	if(var_59_bool == 0) goto Label_279; // 0x111 JumpB
	var_60_string = "daychange.xml"; // 0x112 PushS
	var_61_bool = 0; // 0x113 PushB
	CreateWindow(var_60_string, var_61_bool, var_61_bool); // 0x114 Func
	goto Label_283; // 0x116 Jump
	
Label_283:
	func_62(); // 0x11c NEW_2
	return 4; // 0x11e Return
	
Label_279:
	var_63_string = "daychangereal.xml"; // 0x117 PushS
	var_64_bool = 0; // 0x118 PushB
	CreateWindow(var_63_string, var_64_bool, var_64_bool); // 0x119 Func
}


func_526(var_6_object, var_10_int, var_11_float)
{
	var_121_string = ""; var_122_float = 0; var_123_string = ""; var_124_float = 0; // 0x20e PushV
	var_125_int = -1; // 0x20f PushI
	var_126_bool = var_10_int == var_125_int; // 0x210 Eq
	if(var_126_bool == 0) goto Label_531; // 0x211 JumpB
	return 4; // 0x212 Return
	
Label_531:
	GetStringByID(var_123_string, var_6_object); // 0x213 Func
	var_127_float = 3.14; // 0x215 PushF
	var_128_float = var_127_float * var_11_float; // 0x216 Mult
	var_129_float = 1.0; // 0x217 PushF
	var_130_float = var_128_float / var_129_float; // 0x218 Div
	var_131_float = 2.0; // 0x219 PushF
	var_132_float = var_130_float / var_131_float; // 0x21a Div
	var_124_float = sin(var_132_float); // 0x21b Sin2
	var_133_string = "help"; // 0x21c PushS
	var_134_int = 40; // 0x21d PushI
	var_135_int = 80; // 0x21e PushI
	var_136_float = 1.0; // 0x21f PushF
	var_137_float = 1.0; // 0x220 PushF
	var_138_float = 1.0; // 0x221 PushF
	Print(var_133_string, var_134_int, var_135_int, var_123_string, var_136_float, var_137_float, var_138_float, var_124_float); // 0x222 Func
	return 4; // 0x224 Return
}


func_287()
{
	var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_float = 0; var_81_float = 0; var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_float = 0; var_87_float = 0; // 0x11f PushV
	size(var_82_int); // 0x120 TObjFunc
	var_88_bool = var_82_int == 0; // 0x122 Not
	if(var_88_bool == 0) goto Label_293; // 0x123 JumpB
	return 12; // 0x124 Return
	
Label_293:
	var_83_int = 0; // 0x125 MovI
	
Label_294:
	var_89_bool = var_83_int < var_82_int; // 0x126 LT
	if(var_89_bool == 0) goto Label_315; // 0x127 JumpB
	get(var_84_int, var_83_int); // 0x128 TObjFunc
	get(var_85_int, var_83_int); // 0x12a TObjFunc
	get(var_86_float, var_83_int); // 0x12c TObjFunc
	var_90_float = 4.0; // 0x12e PushF
	var_91_float = var_86_float / var_90_float; // 0x12f Div
	var_87_float = sqrt(var_91_float); // 0x130 Sqrt2
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_float = 0; // 0x131 PushV
	var_92_int = var_84_int; // 0x132 Mov
	var_93_int = var_85_int; // 0x133 Mov
	var_94_int = var_83_int; // 0x134 Mov
	var_95_float = var_87_float; // 0x135 Mov
	func_495(var_92_int, var_93_int, var_94_int, var_95_float); // 0x136 NEW_2
	var_120_int = 1; // 0x138 PushI
	var_83_int = var_83_int + var_120_int; // 0x139 Add2
	goto Label_294; // 0x13a Jump
	
Label_315:
	return 12; // 0x13b Return
}


func_549(var_10_int, var_11_float, var_87_float)
{
	var_88_int = -1; // 0x226 PushI
	var_89_bool = var_10_int == var_88_int; // 0x227 Eq
	if(var_89_bool == 0) goto Label_554; // 0x228 JumpB
	return 0; // 0x229 Return
	
Label_554:
	var_11_float = var_11_float - var_87_float; // 0x22a Sub2
	var_90_int = 0; // 0x22b PushI
	var_91_bool = var_11_float <= var_90_int; // 0x22c LE
	if(var_91_bool == 0) goto Label_559; // 0x22d JumpB
	var_10_int = -1; // 0x22e TMovI
	
Label_559:
	return 0; // 0x22f Return
}


func_41(var_84_int)
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; var_90_int = 0; // 0x29 PushV
	add(var_84_int); // 0x2a TObjFunc
	size(var_88_int); // 0x2c TObjFunc
	var_89_int = 0; // 0x2e MovI
	
Label_47:
	var_91_int = 1; // 0x2f PushI
	var_92_int = var_88_int - var_91_int; // 0x30 Sub
	var_93_bool = var_89_int < var_92_int; // 0x31 LT
	if(var_93_bool == 0) goto Label_61; // 0x32 JumpB
	get(var_90_int, var_89_int); // 0x33 TObjFunc
	var_94_bool = var_90_int == var_84_int; // 0x35 Eq
	if(var_94_bool == 0) goto Label_58; // 0x36 JumpB
	remove(var_89_int); // 0x37 TObjFunc
	return 6; // 0x39 Return
	
Label_58:
	var_95_int = 1; // 0x3a PushI
	var_89_int = var_89_int + var_95_int; // 0x3b Add2
	goto Label_47; // 0x3c Jump
	
Label_61:
	return 6; // 0x3d Return
}


func_189(var_73_int, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0xbd PushV
	add(var_73_int); // 0xbe TObjFunc
	add(var_74_int); // 0xc0 TObjFunc
	var_77_float = 4.0; // 0xc2 PushF
	add(var_77_float); // 0xc3 TObjFunc
	GetInvItemSprite(var_76_string, var_73_int); // 0xc5 Func
	LoadImage(var_76_string); // 0xc7 Func
	add(var_76_string); // 0xc9 TObjFunc
	return 2; // 0xcb Return
}


func_62()
{
	var_62_int = 0; // 0x3e PushI
	remove(var_62_int); // 0x3f TObjFunc
	return 0; // 0x41 Return
}


func_66(var_101_int)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_int = 0; // 0x42 PushV
	size(var_105_int); // 0x43 TObjFunc
	var_106_int = 0; // 0x45 MovI
	
Label_70:
	var_108_bool = var_106_int < var_105_int; // 0x46 LT
	if(var_108_bool == 0) goto Label_83; // 0x47 JumpB
	get(var_107_int, var_106_int); // 0x48 TObjFunc
	var_109_bool = var_101_int == var_107_int; // 0x4a Eq
	if(var_109_bool == 0) goto Label_80; // 0x4b JumpB
	var_110_float = 4.0; // 0x4c PushF
	set(var_106_int, var_110_float); // 0x4d TObjFunc
	return 6; // 0x4f Return
	
Label_80:
	var_111_int = 1; // 0x50 PushI
	var_106_int = var_106_int + var_111_int; // 0x51 Add2
	goto Label_70; // 0x52 Jump
	
Label_83:
	add(var_101_int); // 0x53 TObjFunc
	var_112_float = 4.0; // 0x55 PushF
	add(var_112_float); // 0x56 TObjFunc
	return 6; // 0x58 Return
}


func_579(var_21_int)
{
	var_22_object = Obj(); var_23_int = 0; var_24_object = Obj(); var_25_int = 0; // 0x243 PushV
	var_26_string = "player"; // 0x244 PushS
	FindActor(var_24_object, var_26_string); // 0x245 Func
	var_27_bool = var_24_object == 0; // 0x247 Not
	if(var_27_bool == 0) goto Label_587; // 0x248 JumpB
	var_21_int = 0; // 0x249 MovI
	return 4; // 0x24a Return
	
Label_587:
	var_28_string = "vcharge"; // 0x24b PushS
	GetProperty(var_28_string, var_25_int); // 0x24c ObjFunc
	var_21_int = var_25_int; // 0x24e Mov
	return 4; // 0x24f Return
}


func_204(var_43_int)
{
	remove(var_43_int); // 0xcd TObjFunc
	remove(var_43_int); // 0xcf TObjFunc
	remove(var_43_int); // 0xd1 TObjFunc
	return 0; // 0xd3 Return
}


func_593(var_12_bool)
{
	var_13_object = Obj(); var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; // 0x251 PushV
	var_17_string = "player"; // 0x252 PushS
	FindActor(var_15_object, var_17_string); // 0x253 Func
	var_18_bool = var_15_object == 0; // 0x255 Not
	if(var_18_bool == 0) goto Label_601; // 0x256 JumpB
	var_12_bool = 0; // 0x257 MovB
	return 4; // 0x258 Return
	
Label_601:
	IsVisirOn(var_16_bool); // 0x259 ObjFunc
	var_12_bool = var_16_bool; // 0x25b Mov
	return 4; // 0x25c Return
}


func_212(var_25_float)
{
	var_26_int = 0; var_27_int = 0; var_28_float = 0; var_29_int = 0; var_30_int = 0; var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_float = 0; var_35_int = 0; var_36_int = 0; var_37_string = ""; // 0xd4 PushV
	size(var_32_int); // 0xd5 TObjFunc
	var_38_bool = var_32_int == 0; // 0xd7 Not
	if(var_38_bool == 0) goto Label_218; // 0xd8 JumpB
	return 12; // 0xd9 Return
	
Label_218:
	var_33_int = 0; // 0xda MovI
	
Label_219:
	var_39_bool = var_33_int < var_32_int; // 0xdb LT
	if(var_39_bool == 0) goto Label_241; // 0xdc JumpB
	get(var_34_float, var_33_int); // 0xdd TObjFunc
	var_34_float = var_34_float - var_25_float; // 0xdf Sub2
	var_40_int = 0; // 0xe0 PushI
	var_41_bool = var_34_float > var_40_int; // 0xe1 GT
	if(var_41_bool == 0) goto Label_230; // 0xe2 JumpB
	set(var_33_int, var_34_float); // 0xe3 TObjFunc
	goto Label_238; // 0xe5 Jump
	
Label_238:
	var_42_int = 1; // 0xee PushI
	var_33_int = var_33_int + var_42_int; // 0xef Add2
	goto Label_219; // 0xf0 Jump
	
Label_230:
	var_43_int = 0; // 0xe6 PushV
	var_43_int = var_33_int; // 0xe7 Mov
	func_204(var_43_int); // 0xe8 NEW_2
	var_44_int = -1; // 0xea PushI
	var_32_int = var_32_int + var_44_int; // 0xeb Add2
	var_45_int = -1; // 0xec PushI
	var_33_int = var_33_int + var_45_int; // 0xed Add2
	
Label_241:
	var_46_int = 0; // 0xf1 PushI
	var_47_bool = var_32_int == var_46_int; // 0xf2 Eq
	if(var_47_bool == 0) goto Label_258; // 0xf3 JumpB
	size(var_35_int); // 0xf4 TObjFunc
	var_36_int = 0; // 0xf6 MovI
	
Label_247:
	var_48_bool = var_36_int < var_35_int; // 0xf7 LT
	if(var_48_bool == 0) goto Label_256; // 0xf8 JumpB
	get(var_37_string, var_36_int); // 0xf9 TObjFunc
	ReleaseImage(var_37_string); // 0xfb Func
	var_49_int = 1; // 0xfd PushI
	var_36_int = var_36_int + var_49_int; // 0xfe Add2
	goto Label_247; // 0xff Jump
	
Label_256:
	clear(); // 0x100 TObjFunc
	
Label_258:
	return 12; // 0x102 Return
}


func_471()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; // 0x1d7 PushV
	var_34_int = 0; // 0x1d8 PushV
	func_606(var_34_int); // 0x1d9 NEW_2
	var_32_int = var_34_int; // 0x1da Mov
	var_33_int = 0; // 0x1dc MovI
	
Label_477:
	var_42_int = 4; // 0x1dd PushI
	var_43_bool = var_33_int < var_42_int; // 0x1de LT
	if(var_43_bool == 0) goto Label_494; // 0x1df JumpB
	var_44_bool = var_33_int < var_32_int; // 0x1e0 LT
	if(var_44_bool == 0) goto Label_484; // 0x1e1 JumpB
	var_45_int = 1; // 0x1e2 PushI
	goto Label_485; // 0x1e3 Jump
	
Label_485:
	var_46_string = "vlevel"; // 0x1e5 PushS
	var_47_int = 1; // 0x1e6 PushI
	var_48_int = var_33_int + var_47_int; // 0x1e7 Add
	var_49_int = var_46_string + var_48_int; // 0x1e8 Add
	SendMessage(var_45_int, var_49_int); // 0x1e9 Func
	var_50_int = 1; // 0x1eb PushI
	var_33_int = var_33_int + var_50_int; // 0x1ec Add2
	goto Label_477; // 0x1ed Jump
	
Label_484:
	var_51_int = 0; // 0x1e4 PushI
	
Label_494:
	return 4; // 0x1ee Return
}


func_89()
{
	var_23_int = 0; // 0x59 PushI
	remove(var_23_int); // 0x5a TObjFunc
	var_24_int = 0; // 0x5c PushI
	remove(var_24_int); // 0x5d TObjFunc
	return 0; // 0x5f Return
}


func_606(var_34_int)
{
	var_35_object = Obj(); var_36_int = 0; var_37_object = Obj(); var_38_int = 0; // 0x25e PushV
	var_39_string = "player"; // 0x25f PushS
	FindActor(var_37_object, var_39_string); // 0x260 Func
	var_40_bool = var_37_object == 0; // 0x262 Not
	if(var_40_bool == 0) goto Label_614; // 0x263 JumpB
	var_34_int = 0; // 0x264 MovI
	return 4; // 0x265 Return
	
Label_614:
	var_41_string = "visir"; // 0x266 PushS
	GetProperty(var_41_string, var_38_int); // 0x267 ObjFunc
	var_34_int = var_38_int; // 0x269 Mov
	return 4; // 0x26a Return
}


func_96(var_13_float)
{
	var_14_int = 0; var_15_float = 0; var_16_int = 0; var_17_float = 0; // 0x60 PushV
	size(var_16_int); // 0x61 TObjFunc
	var_18_bool = var_16_int == 0; // 0x63 Not
	if(var_18_bool == 0) goto Label_102; // 0x64 JumpB
	return 4; // 0x65 Return
	
Label_102:
	var_19_int = 0; // 0x66 PushI
	get(var_17_float, var_19_int); // 0x67 TObjFunc
	var_17_float = var_17_float - var_13_float; // 0x69 Sub2
	var_20_int = 0; // 0x6a PushI
	var_21_bool = var_17_float > var_20_int; // 0x6b GT
	if(var_21_bool == 0) goto Label_113; // 0x6c JumpB
	var_22_int = 0; // 0x6d PushI
	set(var_22_int, var_17_float); // 0x6e TObjFunc
	goto Label_116; // 0x70 Jump
	
Label_116:
	return 4; // 0x74 Return
	
Label_113:
	func_89(); // 0x72 NEW_2
}


func_620(var_12_bool)
{
	var_13_object = Obj(); var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; // 0x26c PushV
	var_17_string = "player"; // 0x26d PushS
	FindActor(var_15_object, var_17_string); // 0x26e Func
	var_18_bool = var_15_object == 0; // 0x270 Not
	if(var_18_bool == 0) goto Label_628; // 0x271 JumpB
	var_12_bool = 0; // 0x272 MovB
	return 4; // 0x273 Return
	
Label_628:
	IsWeaponHolstered(var_16_bool); // 0x274 ObjFunc
	var_12_bool = !var_16_bool; // 0x276 Not2
	return 4; // 0x277 Return
}


func_495(var_92_int, var_93_int, var_94_int, var_95_float)
{
	var_96_string = ""; var_97_int = 0; var_98_int = 0; var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0x1ef PushV
	GetInvItemSprite(var_99_string, var_92_int); // 0x1f0 Func
	var_102_int = 40; // 0x1f2 PushI
	var_103_int = 60; // 0x1f3 PushI
	var_104_float = var_94_int * var_103_int; // 0x1f4 Mult
	var_100_int = var_102_int + var_104_float; // 0x1f5 Add2
	var_101_int = 40; // 0x1f6 MovI
	var_105_string = "slot"; // 0x1f7 PushS
	Blit(var_105_string, var_100_int, var_101_int, var_95_float); // 0x1f8 Func
	var_106_int = 1; // 0x1fa PushI
	var_107_int = var_100_int + var_106_int; // 0x1fb Add
	var_108_int = 1; // 0x1fc PushI
	var_109_int = var_101_int + var_108_int; // 0x1fd Add
	Blit(var_99_string, var_107_int, var_109_int, var_95_float); // 0x1fe Func
	var_110_int = 1; // 0x200 PushI
	var_111_bool = var_93_int > var_110_int; // 0x201 GT
	if(var_111_bool == 0) goto Label_525; // 0x202 JumpB
	var_112_string = "default"; // 0x203 PushS
	var_113_int = 2; // 0x204 PushI
	var_114_int = var_100_int + var_113_int; // 0x205 Add
	var_115_int = 35; // 0x206 PushI
	var_116_int = var_101_int + var_115_int; // 0x207 Add
	var_117_float = 1.0; // 0x208 PushF
	var_118_float = 1.0; // 0x209 PushF
	var_119_float = 1.0; // 0x20a PushF
	Print(var_112_string, var_114_int, var_116_int, var_93_int, var_117_float, var_118_float, var_119_float, var_95_float); // 0x20b Func
	
Label_525:
	return 6; // 0x20d Return
}


func_117()
{
	var_22_int = 0; var_23_int = 0; var_24_float = 0; var_25_float = 0; var_26_int = 0; var_27_int = 0; var_28_float = 0; var_29_float = 0; // 0x75 PushV
	size(var_26_int); // 0x76 TObjFunc
	var_30_bool = var_26_int == 0; // 0x78 Not
	if(var_30_bool == 0) goto Label_123; // 0x79 JumpB
	return 8; // 0x7a Return
	
Label_123:
	var_31_int = 0; // 0x7b PushI
	get(var_27_int, var_31_int); // 0x7c TObjFunc
	var_32_int = 0; // 0x7e PushI
	get(var_28_float, var_32_int); // 0x7f TObjFunc
	var_33_float = 6.283; // 0x81 PushF
	var_34_float = var_33_float * var_28_float; // 0x82 Mult
	var_35_float = 4.0; // 0x83 PushF
	var_29_float = var_34_float / var_34_float; // 0x84 Div2
	var_36_int = 2; // 0x85 PushI
	var_37_bool = var_27_int == var_36_int; // 0x86 Eq
	if(var_37_bool == 0) goto Label_147; // 0x87 JumpB
	var_38_string = "mail"; // 0x88 PushS
	var_39_int = 20; // 0x89 PushI
	var_40_int = 500; // 0x8a PushI
	var_41_float = 0.5; // 0x8b PushF
	var_42_float = 0.5; // 0x8c PushF
	var_43_float = cos(var_29_float); // 0x8d Cos
	var_44_float = var_42_float * var_43_float; // 0x8e Mult
	var_45_int = var_41_float - var_44_float; // 0x8f Sub
	Blit(var_38_string, var_39_int, var_40_int, var_45_int); // 0x90 Func
	goto Label_188; // 0x92 Jump
	
Label_188:
	return 8; // 0xbc Return
	
Label_147:
	var_46_int = 3; // 0x93 PushI
	var_47_bool = var_27_int == var_46_int; // 0x94 Eq
	if(var_47_bool == 0) goto Label_161; // 0x95 JumpB
	var_48_string = "diary"; // 0x96 PushS
	var_49_int = 20; // 0x97 PushI
	var_50_int = 470; // 0x98 PushI
	var_51_float = 0.5; // 0x99 PushF
	var_52_float = 0.5; // 0x9a PushF
	var_53_float = cos(var_29_float); // 0x9b Cos
	var_54_float = var_52_float * var_53_float; // 0x9c Mult
	var_55_int = var_51_float - var_54_float; // 0x9d Sub
	Blit(var_48_string, var_49_int, var_50_int, var_55_int); // 0x9e Func
	goto Label_188; // 0xa0 Jump
	
Label_161:
	var_56_int = 4; // 0xa1 PushI
	var_57_bool = var_27_int == var_56_int; // 0xa2 Eq
	if(var_57_bool == 0) goto Label_175; // 0xa3 JumpB
	var_58_string = "rep_up"; // 0xa4 PushS
	var_59_int = 20; // 0xa5 PushI
	var_60_int = 500; // 0xa6 PushI
	var_61_float = 0.5; // 0xa7 PushF
	var_62_float = 0.5; // 0xa8 PushF
	var_63_float = cos(var_29_float); // 0xa9 Cos
	var_64_float = var_62_float * var_63_float; // 0xaa Mult
	var_65_int = var_61_float - var_64_float; // 0xab Sub
	Blit(var_58_string, var_59_int, var_60_int, var_65_int); // 0xac Func
	goto Label_188; // 0xae Jump
	
Label_175:
	var_66_int = 5; // 0xaf PushI
	var_67_bool = var_27_int == var_66_int; // 0xb0 Eq
	if(var_67_bool == 0) goto Label_188; // 0xb1 JumpB
	var_68_string = "rep_down"; // 0xb2 PushS
	var_69_int = 20; // 0xb3 PushI
	var_70_int = 500; // 0xb4 PushI
	var_71_float = 0.5; // 0xb5 PushF
	var_72_float = 0.5; // 0xb6 PushF
	var_73_float = cos(var_29_float); // 0xb7 Cos
	var_74_float = var_72_float * var_73_float; // 0xb8 Mult
	var_75_int = var_71_float - var_74_float; // 0xb9 Sub
	Blit(var_68_string, var_69_int, var_70_int, var_75_int); // 0xba Func
}


