task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow(); // 0xc1 Func
	return 0; // 0xc3 Return
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_5_int = 0; // 0xc5 PushV
	var_5_int = var_4_int; // 0xc6 Mov
	func_329(var_5_int); // 0xc7 NEW_2
	return 0; // 0xc9 Return
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	var_5_int = 266; // 0xcb PushI
	var_6_bool = var_4_int == var_5_int; // 0xcc Eq
	if(var_6_bool == 0) goto Label_246; // 0xcd JumpB
	var_7_int = 0; // 0xce PushI
	var_8_bool = var_0_int == var_7_int; // 0xcf Eq
	if(var_8_bool == 0) goto Label_214; // 0xd0 JumpB
	var_9_int = 0; // 0xd1 PushV
	var_9_int = 1; // 0xd2 MovI
	func_503(var_4_int, var_9_int); // 0xd3 NEW_2
	goto Label_245; // 0xd5 Jump
	
Label_245:
	goto Label_288; // 0xf5 Jump
	
Label_288:
	var_44_int = 0; // 0x120 PushV
	var_44_int = var_4_int; // 0x121 Mov
	func_293(var_44_int); // 0x122 NEW_2
	return 0; // 0x124 Return
	
Label_214:
	var_75_int = 1; // 0xd6 PushI
	var_76_bool = var_0_int == var_75_int; // 0xd7 Eq
	if(var_76_bool == 0) goto Label_222; // 0xd8 JumpB
	var_77_int = 0; // 0xd9 PushV
	var_77_int = 2; // 0xda MovI
	func_503(var_4_int, var_77_int); // 0xdb NEW_2
	goto Label_245; // 0xdd Jump
	
Label_222:
	var_78_int = 2; // 0xde PushI
	var_79_bool = var_0_int == var_78_int; // 0xdf Eq
	if(var_79_bool == 0) goto Label_230; // 0xe0 JumpB
	var_80_int = 0; // 0xe1 PushV
	var_80_int = 3; // 0xe2 MovI
	func_503(var_4_int, var_80_int); // 0xe3 NEW_2
	goto Label_245; // 0xe5 Jump
	
Label_230:
	var_81_int = 3; // 0xe6 PushI
	var_82_bool = var_0_int == var_81_int; // 0xe7 Eq
	if(var_82_bool == 0) goto Label_238; // 0xe8 JumpB
	var_83_int = 0; // 0xe9 PushV
	var_83_int = 4; // 0xea MovI
	func_503(var_4_int, var_83_int); // 0xeb NEW_2
	goto Label_245; // 0xed Jump
	
Label_238:
	var_84_int = 4; // 0xee PushI
	var_85_bool = var_0_int == var_84_int; // 0xef Eq
	if(var_85_bool == 0) goto Label_245; // 0xf0 JumpB
	var_86_int = 0; // 0xf1 PushV
	var_86_int = 0; // 0xf2 MovI
	func_503(var_4_int, var_86_int); // 0xf3 NEW_2
	
Label_246:
	var_87_int = 265; // 0xf6 PushI
	var_88_bool = var_4_int == var_87_int; // 0xf7 Eq
	if(var_88_bool == 0) goto Label_288; // 0xf8 JumpB
	var_89_int = 0; // 0xf9 PushI
	var_90_bool = var_0_int == var_89_int; // 0xfa Eq
	if(var_90_bool == 0) goto Label_257; // 0xfb JumpB
	var_91_int = 0; // 0xfc PushV
	var_91_int = 4; // 0xfd MovI
	func_503(var_4_int, var_91_int); // 0xfe NEW_2
	goto Label_288; // 0x100 Jump
	
Label_257:
	var_92_int = 1; // 0x101 PushI
	var_93_bool = var_0_int == var_92_int; // 0x102 Eq
	if(var_93_bool == 0) goto Label_265; // 0x103 JumpB
	var_94_int = 0; // 0x104 PushV
	var_94_int = 0; // 0x105 MovI
	func_503(var_4_int, var_94_int); // 0x106 NEW_2
	goto Label_288; // 0x108 Jump
	
Label_265:
	var_95_int = 2; // 0x109 PushI
	var_96_bool = var_0_int == var_95_int; // 0x10a Eq
	if(var_96_bool == 0) goto Label_273; // 0x10b JumpB
	var_97_int = 0; // 0x10c PushV
	var_97_int = 1; // 0x10d MovI
	func_503(var_4_int, var_97_int); // 0x10e NEW_2
	goto Label_288; // 0x110 Jump
	
Label_273:
	var_98_int = 3; // 0x111 PushI
	var_99_bool = var_0_int == var_98_int; // 0x112 Eq
	if(var_99_bool == 0) goto Label_281; // 0x113 JumpB
	var_100_int = 0; // 0x114 PushV
	var_100_int = 2; // 0x115 MovI
	func_503(var_4_int, var_100_int); // 0x116 NEW_2
	goto Label_288; // 0x118 Jump
	
Label_281:
	var_101_int = 4; // 0x119 PushI
	var_102_bool = var_0_int == var_101_int; // 0x11a Eq
	if(var_102_bool == 0) goto Label_288; // 0x11b JumpB
	var_103_int = 0; // 0x11c PushV
	var_103_int = 3; // 0x11d MovI
	func_503(var_4_int, var_103_int); // 0x11e NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_float)
{
	var_5_int = 0; // 0x16e PushV
	var_5_int = var_0_int; // 0x16f MovT
	func_597(var_5_int); // 0x170 NEW_2
	func_528(); // 0x173 NEW_2
	func_22(); // 0x176 NEW_2
	return 0; // 0x178 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); // 0x179 PushV
	var_13_bool = 0; // 0x17a MovB
	var_19_int = 0; // 0x17b PushI
	var_20_bool = var_4_int < var_19_int; // 0x17c LT
	if(var_20_bool == 0) goto Label_390; // 0x17d JumpB
	var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_object = Obj(); // 0x17e PushV
	var_22_int = var_4_int; // 0x17f Mov
	var_23_string = var_5_string; // 0x180 Mov
	var_24_object = var_6_object; // 0x181 Mov
	func_19(var_24_object); // 0x182 NEW_2
	var_13_bool = var_21_bool; // 0x183 Mov
	return 12; // 0x185 Return
	
Label_390:
	var_25_string = "button_weapon"; // 0x186 PushS
	var_26_bool = var_5_string == var_25_string; // 0x187 Eq
	if(var_26_bool == 0) goto Label_399; // 0x188 JumpB
	var_27_int = 0; // 0x189 PushV
	var_27_int = 0; // 0x18a MovI
	func_503(var_18_object, var_27_int); // 0x18b NEW_2
	var_13_bool = 1; // 0x18d MovB
	goto Label_491; // 0x18e Jump
	
Label_491:
	var_62_bool = var_13_bool == 0; // 0x1eb Not
	if(var_62_bool == 0) goto Label_500; // 0x1ec JumpB
	var_63_bool = 0; var_64_int = 0; var_65_string = ""; var_66_object = Obj(); // 0x1ed PushV
	var_64_int = var_4_int; // 0x1ee Mov
	var_65_string = var_5_string; // 0x1ef Mov
	var_66_object = var_6_object; // 0x1f0 Mov
	func_19(var_66_object); // 0x1f1 NEW_2
	var_13_bool = var_63_bool; // 0x1f2 Mov
	
Label_500:
	var_67_bool = var_13_bool; // 0x1f4 Push
	if(var_67_bool == 0) goto Label_502; // 0x1f5 JumpB
	
Label_502:
	return 12; // 0x1f6 Return
	
Label_399:
	var_68_string = "button_clothes"; // 0x18f PushS
	var_69_bool = var_5_string == var_68_string; // 0x190 Eq
	if(var_69_bool == 0) goto Label_408; // 0x191 JumpB
	var_70_int = 0; // 0x192 PushV
	var_70_int = 1; // 0x193 MovI
	func_503(var_18_object, var_70_int); // 0x194 NEW_2
	var_13_bool = 1; // 0x196 MovB
	goto Label_491; // 0x197 Jump
	
Label_408:
	var_71_string = "button_medcine"; // 0x198 PushS
	var_72_bool = var_5_string == var_71_string; // 0x199 Eq
	if(var_72_bool == 0) goto Label_417; // 0x19a JumpB
	var_73_int = 0; // 0x19b PushV
	var_73_int = 2; // 0x19c MovI
	func_503(var_18_object, var_73_int); // 0x19d NEW_2
	var_13_bool = 1; // 0x19f MovB
	goto Label_491; // 0x1a0 Jump
	
Label_417:
	var_74_string = "button_food"; // 0x1a1 PushS
	var_75_bool = var_5_string == var_74_string; // 0x1a2 Eq
	if(var_75_bool == 0) goto Label_426; // 0x1a3 JumpB
	var_76_int = 0; // 0x1a4 PushV
	var_76_int = 3; // 0x1a5 MovI
	func_503(var_18_object, var_76_int); // 0x1a6 NEW_2
	var_13_bool = 1; // 0x1a8 MovB
	goto Label_491; // 0x1a9 Jump
	
Label_426:
	var_77_string = "button_other"; // 0x1aa PushS
	var_78_bool = var_5_string == var_77_string; // 0x1ab Eq
	if(var_78_bool == 0) goto Label_435; // 0x1ac JumpB
	var_79_int = 0; // 0x1ad PushV
	var_79_int = 4; // 0x1ae MovI
	func_503(var_18_object, var_79_int); // 0x1af NEW_2
	var_13_bool = 1; // 0x1b1 MovB
	goto Label_491; // 0x1b2 Jump
	
Label_435:
	var_80_string = "button_detector"; // 0x1b3 PushS
	var_81_bool = var_5_string == var_80_string; // 0x1b4 Eq
	if(var_81_bool == 0) goto Label_439; // 0x1b5 JumpB
	goto Label_491; // 0x1b6 Jump
	
Label_439:
	var_82_string = "button_anticeptic"; // 0x1b7 PushS
	var_83_bool = var_5_string == var_82_string; // 0x1b8 Eq
	if(var_83_bool == 0) goto Label_443; // 0x1b9 JumpB
	goto Label_491; // 0x1ba Jump
	
Label_443:
	var_84_int = 0; // 0x1bb PushI
	var_85_bool = var_4_int != var_84_int; // 0x1bc Neq
	if(var_85_bool == 0) goto Label_452; // 0x1bd JumpB
	var_86_string = "noinv_drop"; // 0x1be PushS
	GetVariable(var_86_string, var_14_int); // 0x1bf Func
	var_87_int = var_14_int; // 0x1c1 Push
	if(var_87_int == 0) goto Label_452; // 0x1c2 JumpB
	return 12; // 0x1c3 Return
	
Label_452:
	var_15_int = 0; // 0x1c4 MovI
	
Label_453:
	var_88_int = 12; // 0x1c5 PushI
	var_89_bool = var_15_int < var_88_int; // 0x1c6 LT
	if(var_89_bool == 0) goto Label_491; // 0x1c7 JumpB
	var_90_string = ""; var_91_int = 0; // 0x1c8 PushV
	var_91_int = var_15_int; // 0x1c9 Mov
	func_684(var_90_string, var_91_int); // 0x1ca NEW_2
	var_102_bool = var_5_string == var_90_string; // 0x1cc Eq
	if(var_102_bool == 0) goto Label_488; // 0x1cd JumpB
	var_103_object = Obj(); // 0x1ce PushV
	func_17(var_18_object, var_103_object); // 0x1cf NEW_2
	var_16_object = var_103_object; // 0x1d0 Mov
	GetItemCount(var_17_int, var_0_int); // 0x1d2 ObjFunc
	var_104_bool = var_17_int > var_15_int; // 0x1d4 GT
	if(var_104_bool == 0) goto Label_486; // 0x1d5 JumpB
	GetItem(var_18_object, var_15_int, var_0_int); // 0x1d6 ObjFunc
	var_105_bool = 0; var_106_object = Obj(); // 0x1d8 PushV
	var_106_object = var_18_object; // 0x1d9 Mov
	func_23(var_106_object); // 0x1da NEW_2
	var_112_bool = var_105_bool == 0; // 0x1dc Not
	if(var_112_bool == 0) goto Label_485; // 0x1dd JumpB
	var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0x1de PushV
	var_114_int = var_15_int; // 0x1df Mov
	var_116_int = 0; // 0x1e0 PushI
	var_115_bool = var_4_int == var_116_int; // 0x1e1 Eq2
	func_55(var_113_bool, var_114_int, var_115_bool); // 0x1e2 NEW_2
	var_13_bool = var_113_bool; // 0x1e3 Mov
	
Label_485:
	var_18_object = 0; // 0x1e5 SetNull
	
Label_486:
	goto Label_491; // 0x1e6 Jump
	
Label_488:
	var_156_int = 1; // 0x1e8 PushI
	var_15_int = var_15_int + var_156_int; // 0x1e9 Add2
	goto Label_453; // 0x1ea Jump
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	var_4_string = "player"; // 0x0 PushS
	FindActor(var_2_object, var_4_string); // 0x1 Func
	var_5_bool = var_3_object == 0; // 0x3 Not
	if(var_5_bool == 0) goto Label_8; // 0x4 JumpB
	DestroyWindow(); // 0x5 Func
	return 0; // 0x7 Return
	
Label_8:
	var_6_string = "inventory_base.xml"; // 0x8 PushS
	var_7_bool = 0; // 0x9 PushB
	CreateWindow(var_6_string, var_7_bool, var_7_bool); // 0xa Func
	var_8_int = 0; // 0xc PushV
	var_8_int = 4; // 0xd MovI
	func_110(var_3_object, var_8_int); // 0xe NEW_2
	return 0; // 0x10 Return
}


func_517(var_124_int)
{
	var_125_object = Obj(); var_126_int = 0; var_127_object = Obj(); var_128_int = 0; // 0x205 PushV
	var_129_object = Obj(); // 0x206 PushV
	func_17(var_128_int, var_129_object); // 0x207 NEW_2
	var_127_object = var_129_object; // 0x208 Mov
	var_130_string = "money"; // 0x20a PushS
	GetProperty(var_130_string, var_128_int); // 0x20b ObjFunc
	var_124_int = var_128_int; // 0x20d Mov
	return 4; // 0x20e Return
}


func_528()
{
	var_124_int = 0; // 0x210 PushV
	func_517(var_124_int); // 0x211 NEW_2
	var_131_string = "money"; // 0x213 PushS
	SendMessage(var_124_int, var_131_string); // 0x214 Func
	return 0; // 0x216 Return
}


func_17(var_3_object, var_63_object)
{
	var_63_object = var_3_object; // 0x11 MovT
	return 0; // 0x12 Return
}


func_19(var_21_bool)
{
	var_21_bool = 0; // 0x14 MovB
	return 0; // 0x15 Return
}


func_22()
{
	return 0; // 0x16 Return
}


func_535(var_17_int)
{
	var_18_int = 0; // 0x218 PushI
	var_19_bool = var_17_int != var_18_int; // 0x219 Neq
	if(var_19_bool == 0) goto Label_544; // 0x21a JumpB
	var_20_int = 0; // 0x21b PushI
	var_21_string = "button_weapon"; // 0x21c PushS
	SendMessage(var_20_int, var_21_string); // 0x21d Func
	goto Label_548; // 0x21f Jump
	
Label_548:
	var_22_int = 1; // 0x224 PushI
	var_23_bool = var_17_int != var_22_int; // 0x225 Neq
	if(var_23_bool == 0) goto Label_556; // 0x226 JumpB
	var_24_int = 0; // 0x227 PushI
	var_25_string = "button_clothes"; // 0x228 PushS
	SendMessage(var_24_int, var_25_string); // 0x229 Func
	goto Label_560; // 0x22b Jump
	
Label_560:
	var_26_int = 2; // 0x230 PushI
	var_27_bool = var_17_int != var_26_int; // 0x231 Neq
	if(var_27_bool == 0) goto Label_568; // 0x232 JumpB
	var_28_int = 0; // 0x233 PushI
	var_29_string = "button_medcine"; // 0x234 PushS
	SendMessage(var_28_int, var_29_string); // 0x235 Func
	goto Label_572; // 0x237 Jump
	
Label_572:
	var_30_int = 3; // 0x23c PushI
	var_31_bool = var_17_int != var_30_int; // 0x23d Neq
	if(var_31_bool == 0) goto Label_580; // 0x23e JumpB
	var_32_int = 0; // 0x23f PushI
	var_33_string = "button_food"; // 0x240 PushS
	SendMessage(var_32_int, var_33_string); // 0x241 Func
	goto Label_584; // 0x243 Jump
	
Label_584:
	var_34_int = 4; // 0x248 PushI
	var_35_bool = var_17_int != var_34_int; // 0x249 Neq
	if(var_35_bool == 0) goto Label_592; // 0x24a JumpB
	var_36_int = 0; // 0x24b PushI
	var_37_string = "button_other"; // 0x24c PushS
	SendMessage(var_36_int, var_37_string); // 0x24d Func
	goto Label_596; // 0x24f Jump
	
Label_596:
	return 0; // 0x254 Return
	
Label_592:
	var_38_int = 1; // 0x250 PushI
	var_39_string = "button_other"; // 0x251 PushS
	SendMessage(var_38_int, var_39_string); // 0x252 Func
	
Label_580:
	var_40_int = 1; // 0x244 PushI
	var_41_string = "button_food"; // 0x245 PushS
	SendMessage(var_40_int, var_41_string); // 0x246 Func
	
Label_568:
	var_42_int = 1; // 0x238 PushI
	var_43_string = "button_medcine"; // 0x239 PushS
	SendMessage(var_42_int, var_43_string); // 0x23a Func
	
Label_556:
	var_44_int = 1; // 0x22c PushI
	var_45_string = "button_clothes"; // 0x22d PushS
	SendMessage(var_44_int, var_45_string); // 0x22e Func
	
Label_544:
	var_46_int = 1; // 0x220 PushI
	var_47_string = "button_weapon"; // 0x221 PushS
	SendMessage(var_46_int, var_47_string); // 0x222 Func
}


func_23(var_84_bool)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0; // 0x17 PushV
	GetItemID(var_88_int); // 0x18 ObjFunc
	var_90_string = "Microscope"; // 0x1a PushS
	HasInvItemProperty(var_89_bool, var_88_int, var_90_string); // 0x1b Func
	var_84_bool = !var_89_bool; // 0x1d Not2
	return 4; // 0x1e Return
}


func_31(var_2_object, var_67_bool, var_68_int, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x1f PushV
	var_72_object = Obj(); // 0x20 PushV
	func_17(var_71_object, var_72_object); // 0x21 NEW_2
	var_73_object = Obj(); // 0x23 PushV
	func_17(var_72_object, var_73_object); // 0x24 NEW_2
	var_74_object = Obj(); // 0x26 PushV
	func_17(var_72_object, var_74_object); // 0x27 NEW_2
	var_75_object = Obj(); // 0x29 PushV
	func_17(var_72_object, var_75_object); // 0x2a NEW_2
	GetItem(var_71_object, var_68_int, var_69_int); // 0x2c ObjFunc
	var_76_bool = 0; var_77_object = Obj(); var_78_object = Obj(); // 0x2e PushV
	var_77_object = var_2_object; // 0x2f MovT
	var_78_object = var_71_object; // 0x30 Mov
	func_715(var_76_bool, var_77_object, var_78_object); // 0x31 NEW_2
	var_67_bool = var_76_bool; // 0x32 Mov
	return 2; // 0x34 Return
}


func_293(var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x125 PushV
	var_49_int = 269; // 0x126 PushI
	var_50_bool = var_44_int == var_49_int; // 0x127 Eq
	if(var_50_bool == 0) goto Label_311; // 0x128 JumpB
	var_47_int = 0; // 0x129 MovI
	
Label_298:
	var_51_int = 12; // 0x12a PushI
	var_52_bool = var_47_int < var_51_int; // 0x12b LT
	if(var_52_bool == 0) goto Label_311; // 0x12c JumpB
	var_53_int = -2; // 0x12d PushI
	var_54_string = ""; var_55_int = 0; // 0x12e PushV
	var_55_int = var_47_int; // 0x12f Mov
	func_684(var_54_string, var_55_int); // 0x130 NEW_2
	SendMessage(var_53_int, var_54_string); // 0x132 Func
	var_66_int = 1; // 0x134 PushI
	var_47_int = var_47_int + var_66_int; // 0x135 Add2
	goto Label_298; // 0x136 Jump
	
Label_311:
	var_67_int = 270; // 0x137 PushI
	var_68_bool = var_44_int == var_67_int; // 0x138 Eq
	if(var_68_bool == 0) goto Label_328; // 0x139 JumpB
	var_48_int = 0; // 0x13a MovI
	
Label_315:
	var_69_int = 12; // 0x13b PushI
	var_70_bool = var_48_int < var_69_int; // 0x13c LT
	if(var_70_bool == 0) goto Label_328; // 0x13d JumpB
	var_71_int = -3; // 0x13e PushI
	var_72_string = ""; var_73_int = 0; // 0x13f PushV
	var_73_int = var_48_int; // 0x140 Mov
	func_684(var_72_string, var_73_int); // 0x141 NEW_2
	SendMessage(var_71_int, var_72_string); // 0x143 Func
	var_74_int = 1; // 0x145 PushI
	var_48_int = var_48_int + var_74_int; // 0x146 Add2
	goto Label_315; // 0x147 Jump
	
Label_328:
	return 4; // 0x148 Return
}


func_684(var_94_string, var_95_int)
{
	var_96_int = 1; // 0x2ad PushI
	var_97_int = var_95_int + var_96_int; // 0x2ae Add
	var_98_int = 10; // 0x2af PushI
	var_99_bool = var_97_int < var_98_int; // 0x2b0 LT
	if(var_99_bool == 0) goto Label_695; // 0x2b1 JumpB
	var_100_string = "slot0"; // 0x2b2 PushS
	var_101_int = 1; // 0x2b3 PushI
	var_102_int = var_95_int + var_101_int; // 0x2b4 Add
	var_94_string = var_100_string + var_102_int; // 0x2b5 Add2
	return 0; // 0x2b6 Return
	
Label_695:
	var_103_string = "slot"; // 0x2b7 PushS
	var_104_int = 1; // 0x2b8 PushI
	var_105_int = var_95_int + var_104_int; // 0x2b9 Add
	var_94_string = var_103_string + var_105_int; // 0x2ba Add2
	return 0; // 0x2bb Return
}


func_54()
{
	return 0; // 0x36 Return
}


func_55(var_113_bool, var_114_int, var_115_bool)
{
	var_117_bool = var_115_bool; // 0x38 Push
	if(var_117_bool == 0) goto Label_64; // 0x39 JumpB
	var_118_int = 0; // 0x3a PushV
	var_118_int = var_114_int; // 0x3b Mov
	func_66(var_114_int, var_115_bool, var_118_int); // 0x3c NEW_2
	var_113_bool = 1; // 0x3e MovB
	return 0; // 0x3f Return
	
Label_64:
	var_113_bool = 0; // 0x40 MovB
	return 0; // 0x41 Return
}


func_184()
{
	var_152_int = -6; // 0xb8 PushI
	var_153_string = ""; var_154_int = 0; // 0xb9 PushV
	var_154_int = 0; // 0xba MovI
	func_684(var_153_string, var_154_int); // 0xbb NEW_2
	SendMessage(var_152_int, var_153_string); // 0xbd Func
	return 0; // 0xbf Return
}


func_700(var_139_int)
{
	var_141_int = 0; var_142_int = 0; // 0x2bc PushV
	GetItemID(var_142_int); // 0x2bd ObjFunc
	var_139_int = var_142_int; // 0x2bf Mov
	return 2; // 0x2c0 Return
}


func_705(var_146_string, var_147_object)
{
	var_148_int = 0; var_149_string = ""; var_150_int = 0; var_151_string = ""; // 0x2c1 PushV
	var_152_int = 0; var_153_object = Obj(); // 0x2c2 PushV
	var_153_object = var_147_object; // 0x2c3 Mov
	func_700(var_153_object); // 0x2c4 NEW_2
	var_150_int = var_152_int; // 0x2c5 Mov
	GetInvItemName(var_151_string, var_150_int); // 0x2c7 Func
	var_146_string = var_151_string; // 0x2c9 Mov
	return 4; // 0x2ca Return
}


func_66(var_0_int, var_2_object, var_118_int)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_bool = 0; var_122_int = 0; var_123_object = Obj(); var_124_object = Obj(); var_125_bool = 0; var_126_int = 0; // 0x42 PushV
	var_127_object = Obj(); // 0x43 PushV
	func_17(var_126_int, var_127_object); // 0x44 NEW_2
	var_123_object = var_127_object; // 0x45 Mov
	GetItem(var_124_object, var_118_int, var_0_int); // 0x47 ObjFunc
	var_128_bool = 0; var_129_object = Obj(); var_130_object = Obj(); // 0x49 PushV
	var_129_object = var_2_object; // 0x4a MovT
	var_130_object = var_124_object; // 0x4b Mov
	func_715(var_128_bool, var_129_object, var_130_object); // 0x4c NEW_2
	var_125_bool = var_128_bool; // 0x4d Mov
	var_136_bool = var_125_bool; // 0x4f Push
	if(var_136_bool == 0) goto Label_87; // 0x50 JumpB
	var_2_object = 0; // 0x51 SetNullT
	var_137_int = 0; // 0x52 PushI
	var_138_string = "video"; // 0x53 PushS
	SendMessage(var_137_int, var_138_string); // 0x54 Func
	goto Label_107; // 0x56 Jump
	
Label_107:
	return 8; // 0x6b Return
	
Label_87:
	var_139_int = 0; var_140_object = Obj(); // 0x57 PushV
	var_140_object = var_124_object; // 0x58 Mov
	func_700(var_140_object); // 0x59 NEW_2
	var_143_string = "Microscope"; // 0x5b PushS
	GetInvItemProperty(var_126_int, var_139_int, var_143_string); // 0x5c Func
	var_144_string = "video"; // 0x5e PushS
	SendMessage(var_126_int, var_144_string); // 0x5f Func
	var_145_string = "microscope_"; // 0x61 PushS
	var_146_string = ""; var_147_object = Obj(); // 0x62 PushV
	var_147_object = var_124_object; // 0x63 Mov
	func_705(var_146_string, var_147_object); // 0x64 NEW_2
	var_154_int = var_145_string + var_146_string; // 0x66 Add
	var_155_int = 1; // 0x67 PushI
	SetVariable(var_154_int, var_155_int); // 0x68 Func
	var_2_object = var_124_object; // 0x6a TMov
}


func_329(var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0x149 PushV
	var_10_int = 273; // 0x14a PushI
	var_11_bool = var_5_int == var_10_int; // 0x14b Eq
	if(var_11_bool == 0) goto Label_347; // 0x14c JumpB
	var_8_int = 0; // 0x14d MovI
	
Label_334:
	var_12_int = 12; // 0x14e PushI
	var_13_bool = var_8_int < var_12_int; // 0x14f LT
	if(var_13_bool == 0) goto Label_347; // 0x150 JumpB
	var_14_int = -2; // 0x151 PushI
	var_15_string = ""; var_16_int = 0; // 0x152 PushV
	var_16_int = var_8_int; // 0x153 Mov
	func_684(var_15_string, var_16_int); // 0x154 NEW_2
	SendMessage(var_14_int, var_15_string); // 0x156 Func
	var_27_int = 1; // 0x158 PushI
	var_8_int = var_8_int + var_27_int; // 0x159 Add2
	goto Label_334; // 0x15a Jump
	
Label_347:
	var_28_int = 271; // 0x15b PushI
	var_29_bool = var_5_int == var_28_int; // 0x15c Eq
	if(var_29_bool == 0) goto Label_364; // 0x15d JumpB
	var_9_int = 0; // 0x15e MovI
	
Label_351:
	var_30_int = 12; // 0x15f PushI
	var_31_bool = var_9_int < var_30_int; // 0x160 LT
	if(var_31_bool == 0) goto Label_364; // 0x161 JumpB
	var_32_int = -3; // 0x162 PushI
	var_33_string = ""; var_34_int = 0; // 0x163 PushV
	var_34_int = var_9_int; // 0x164 Mov
	func_684(var_33_string, var_34_int); // 0x165 NEW_2
	SendMessage(var_32_int, var_33_string); // 0x167 Func
	var_35_int = 1; // 0x169 PushI
	var_9_int = var_9_int + var_35_int; // 0x16a Add2
	goto Label_351; // 0x16b Jump
	
Label_364:
	return 4; // 0x16c Return
}


func_715(var_76_bool, var_77_object, var_78_object)
{
	var_79_bool = 0; var_80_bool = 0; // 0x2cb PushV
	var_81_bool = 0; // 0x2cc PushV
	var_81_bool = 1; // 0x2cd MovB
	var_82_bool = var_77_object == 0; // 0x2ce Not
	if(var_82_bool == 0) goto Label_723; // 0x2cf JumpB
	var_83_bool = var_78_object == 0; // 0x2d0 Not
	if(var_83_bool == 0) goto Label_723; // 0x2d1 JumpB
	var_81_bool = 0; // 0x2d2 MovB
	
Label_723:
	if(var_81_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_76_bool = 0; // 0x2d4 MovB
	return 2; // 0x2d5 Return
	
Label_726:
	Compare(var_80_bool, var_78_object); // 0x2d6 ObjFunc
	var_76_bool = var_80_bool; // 0x2d8 Mov
	return 2; // 0x2d9 Return
}


func_597(var_48_int)
{
	var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_object = Obj(); var_53_int = 0; var_54_bool = 0; var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_bool = 0; // 0x255 PushV
	var_63_object = Obj(); // 0x256 PushV
	func_17(var_62_bool, var_63_object); // 0x257 NEW_2
	var_56_object = var_63_object; // 0x258 Mov
	GetItemCount(var_57_int, var_48_int); // 0x25a ObjFunc
	var_58_int = 0; // 0x25c MovI
	
Label_605:
	var_64_int = 12; // 0x25d PushI
	var_65_bool = var_58_int < var_64_int; // 0x25e LT
	if(var_65_bool == 0) goto Label_682; // 0x25f JumpB
	var_66_bool = var_58_int < var_57_int; // 0x260 LT
	if(var_66_bool == 0) goto Label_672; // 0x261 JumpB
	GetItem(var_59_object, var_58_int, var_48_int); // 0x262 ObjFunc
	GetItemAmount(var_60_int, var_58_int, var_48_int); // 0x264 ObjFunc
	var_67_bool = 0; var_68_int = 0; var_69_int = 0; // 0x266 PushV
	var_68_int = var_58_int; // 0x267 Mov
	var_69_int = var_48_int; // 0x268 Mov
	func_31(var_62_bool, var_67_bool, var_68_int, var_69_int); // 0x269 NEW_2
	var_61_bool = var_67_bool; // 0x26a Mov
	var_84_bool = 0; var_85_object = Obj(); // 0x26c PushV
	var_85_object = var_59_object; // 0x26d Mov
	func_23(var_85_object); // 0x26e NEW_2
	var_62_bool = var_84_bool; // 0x26f Mov
	var_91_bool = var_61_bool; // 0x271 Push
	if(var_91_bool == 0) goto Label_645; // 0x272 JumpB
	var_92_bool = var_62_bool; // 0x273 Push
	if(var_92_bool == 0) goto Label_637; // 0x274 JumpB
	var_93_int = 0; // 0x275 PushI
	var_94_string = ""; var_95_int = 0; // 0x276 PushV
	var_95_int = var_58_int; // 0x277 Mov
	func_684(var_94_string, var_95_int); // 0x278 NEW_2
	SendMessage(var_93_int, var_94_string, var_59_object); // 0x27a Func
	goto Label_644; // 0x27c Jump
	
Label_644:
	goto Label_662; // 0x284 Jump
	
Label_662:
	var_106_int = 65536; // 0x296 PushI
	var_107_int = var_60_int | var_106_int; // 0x297 Or
	var_108_string = ""; var_109_int = 0; // 0x298 PushV
	var_109_int = var_58_int; // 0x299 Mov
	func_684(var_108_string, var_109_int); // 0x29a NEW_2
	SendMessage(var_107_int, var_108_string); // 0x29c Func
	var_59_object = 0; // 0x29e SetNull
	goto Label_679; // 0x29f Jump
	
Label_679:
	var_110_int = 1; // 0x2a7 PushI
	var_58_int = var_58_int + var_110_int; // 0x2a8 Add2
	goto Label_605; // 0x2a9 Jump
	
Label_637:
	var_111_int = 16384; // 0x27d PushI
	var_112_string = ""; var_113_int = 0; // 0x27e PushV
	var_113_int = var_58_int; // 0x27f Mov
	func_684(var_112_string, var_113_int); // 0x280 NEW_2
	SendMessage(var_111_int, var_112_string, var_59_object); // 0x282 Func
	
Label_645:
	var_114_bool = var_62_bool; // 0x285 Push
	if(var_114_bool == 0) goto Label_655; // 0x286 JumpB
	var_115_int = 131072; // 0x287 PushI
	var_116_string = ""; var_117_int = 0; // 0x288 PushV
	var_117_int = var_58_int; // 0x289 Mov
	func_684(var_116_string, var_117_int); // 0x28a NEW_2
	SendMessage(var_115_int, var_116_string, var_59_object); // 0x28c Func
	goto Label_662; // 0x28e Jump
	
Label_655:
	var_118_int = 0; // 0x28f PushI
	var_119_string = ""; var_120_int = 0; // 0x290 PushV
	var_120_int = var_58_int; // 0x291 Mov
	func_684(var_119_string, var_120_int); // 0x292 NEW_2
	SendMessage(var_118_int, var_119_string, var_59_object); // 0x294 Func
	
Label_672:
	var_121_int = 32768; // 0x2a0 PushI
	var_122_string = ""; var_123_int = 0; // 0x2a1 PushV
	var_123_int = var_58_int; // 0x2a2 Mov
	func_684(var_122_string, var_123_int); // 0x2a3 NEW_2
	SendMessage(var_121_int, var_122_string); // 0x2a5 Func
	
Label_682:
	return 14; // 0x2aa Return
}


func_110(var_0_int, var_8_int)
{
	var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); // 0x6e PushV
	var_0_int = -1; // 0x6f TMovI
	var_13_int = 0; // 0x70 PushV
	var_13_int = var_8_int; // 0x71 Mov
	func_503(var_12_object, var_13_int); // 0x72 NEW_2
	var_48_int = 0; // 0x74 PushV
	var_48_int = var_0_int; // 0x75 MovT
	func_597(var_48_int); // 0x76 NEW_2
	func_528(); // 0x79 NEW_2
	var_11_int = 0; // 0x7b MovI
	
Label_124:
	var_132_int = 12; // 0x7c PushI
	var_133_bool = var_11_int < var_132_int; // 0x7d LT
	if(var_133_bool == 0) goto Label_162; // 0x7e JumpB
	CreateStringVector(var_12_object); // 0x7f Func
	var_134_string = ""; var_135_int = 0; // 0x81 PushV
	var_136_int = 12; // 0x82 PushI
	var_137_int = var_11_int + var_136_int; // 0x83 Add
	var_138_int = 1; // 0x84 PushI
	var_139_int = var_137_int - var_138_int; // 0x85 Sub
	var_140_int = 12; // 0x86 PushI
	var_135_int = var_139_int % var_140_int; // 0x87 Mod2
	func_684(var_134_string, var_135_int); // 0x88 NEW_2
	add(var_134_string); // 0x8a ObjFunc
	var_141_string = ""; var_142_int = 0; // 0x8c PushV
	var_143_int = 12; // 0x8d PushI
	var_144_int = var_11_int + var_143_int; // 0x8e Add
	var_145_int = 1; // 0x8f PushI
	var_146_int = var_144_int + var_145_int; // 0x90 Add
	var_147_int = 12; // 0x91 PushI
	var_142_int = var_146_int % var_147_int; // 0x92 Mod2
	func_684(var_141_string, var_142_int); // 0x93 NEW_2
	add(var_141_string); // 0x95 ObjFunc
	var_148_int = -1; // 0x97 PushI
	var_149_string = ""; var_150_int = 0; // 0x98 PushV
	var_150_int = var_11_int; // 0x99 Mov
	func_684(var_149_string, var_150_int); // 0x9a NEW_2
	SendMessage(var_148_int, var_149_string, var_12_object); // 0x9c Func
	var_12_object = 0; // 0x9e SetNull
	var_151_int = 1; // 0x9f PushI
	var_11_int = var_11_int + var_151_int; // 0xa0 Add2
	goto Label_124; // 0xa1 Jump
	
Label_162:
	func_184(); // 0xa3 NEW_2
	var_155_string = "default"; // 0xa5 PushS
	SetCursor(var_155_string); // 0xa6 Func
	ShowCursor(); // 0xa8 Func
	CaptureKeyboard(); // 0xaa Func
	var_156_bool = 0; // 0xac PushB
	SetOwnerDraw(var_156_bool); // 0xad Func
	var_157_bool = 1; // 0xaf PushB
	SetNeedUpdate(var_157_bool); // 0xb0 Func
	func_54(); // 0xb3 NEW_2
	ProcessEvents(); // 0xb5 Func
	return 4; // 0xb7 Return
}


func_503(var_0_int, var_13_int)
{
	var_14_int = -1; // 0x1f8 PushI
	var_15_bool = var_13_int == var_14_int; // 0x1f9 Eq
	if(var_15_bool == 0) goto Label_508; // 0x1fa JumpB
	return 0; // 0x1fb Return
	
Label_508:
	var_16_bool = var_0_int == var_13_int; // 0x1fc Eq
	if(var_16_bool == 0) goto Label_511; // 0x1fd JumpB
	return 0; // 0x1fe Return
	
Label_511:
	var_0_int = var_13_int; // 0x1ff TMov
	var_17_int = 0; // 0x200 PushV
	var_17_int = var_0_int; // 0x201 MovT
	func_535(var_17_int); // 0x202 NEW_2
	return 0; // 0x204 Return
}


