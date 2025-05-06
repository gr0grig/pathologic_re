task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int)
{
	DestroyWindow(); // 0x8f Func
	return 0; // 0x91 Return
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_float)
{
	var_5_int = 0; // 0x93 PushV
	var_5_int = var_0_int; // 0x94 MovT
	func_367(var_5_int); // 0x95 NEW_2
	func_298(); // 0x98 NEW_2
	func_22(); // 0x9b NEW_2
	return 0; // 0x9d Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); // 0x9e PushV
	var_13_bool = 0; // 0x9f MovB
	var_19_string = "button_weapon"; // 0xa0 PushS
	var_20_bool = var_5_string == var_19_string; // 0xa1 Eq
	if(var_20_bool == 0) goto Label_169; // 0xa2 JumpB
	var_21_int = 0; // 0xa3 PushV
	var_21_int = 0; // 0xa4 MovI
	func_273(var_18_object, var_21_int); // 0xa5 NEW_2
	var_13_bool = 1; // 0xa7 MovB
	goto Label_261; // 0xa8 Jump
	
Label_261:
	var_56_bool = var_13_bool == 0; // 0x105 Not
	if(var_56_bool == 0) goto Label_270; // 0x106 JumpB
	var_57_bool = 0; var_58_int = 0; var_59_string = ""; var_60_object = Obj(); // 0x107 PushV
	var_58_int = var_4_int; // 0x108 Mov
	var_59_string = var_5_string; // 0x109 Mov
	var_60_object = var_6_object; // 0x10a Mov
	func_19(var_60_object); // 0x10b NEW_2
	var_13_bool = var_57_bool; // 0x10c Mov
	
Label_270:
	var_61_bool = var_13_bool; // 0x10e Push
	if(var_61_bool == 0) goto Label_272; // 0x10f JumpB
	
Label_272:
	return 12; // 0x110 Return
	
Label_169:
	var_62_string = "button_clothes"; // 0xa9 PushS
	var_63_bool = var_5_string == var_62_string; // 0xaa Eq
	if(var_63_bool == 0) goto Label_178; // 0xab JumpB
	var_64_int = 0; // 0xac PushV
	var_64_int = 1; // 0xad MovI
	func_273(var_18_object, var_64_int); // 0xae NEW_2
	var_13_bool = 1; // 0xb0 MovB
	goto Label_261; // 0xb1 Jump
	
Label_178:
	var_65_string = "button_medcine"; // 0xb2 PushS
	var_66_bool = var_5_string == var_65_string; // 0xb3 Eq
	if(var_66_bool == 0) goto Label_187; // 0xb4 JumpB
	var_67_int = 0; // 0xb5 PushV
	var_67_int = 2; // 0xb6 MovI
	func_273(var_18_object, var_67_int); // 0xb7 NEW_2
	var_13_bool = 1; // 0xb9 MovB
	goto Label_261; // 0xba Jump
	
Label_187:
	var_68_string = "button_food"; // 0xbb PushS
	var_69_bool = var_5_string == var_68_string; // 0xbc Eq
	if(var_69_bool == 0) goto Label_196; // 0xbd JumpB
	var_70_int = 0; // 0xbe PushV
	var_70_int = 3; // 0xbf MovI
	func_273(var_18_object, var_70_int); // 0xc0 NEW_2
	var_13_bool = 1; // 0xc2 MovB
	goto Label_261; // 0xc3 Jump
	
Label_196:
	var_71_string = "button_other"; // 0xc4 PushS
	var_72_bool = var_5_string == var_71_string; // 0xc5 Eq
	if(var_72_bool == 0) goto Label_205; // 0xc6 JumpB
	var_73_int = 0; // 0xc7 PushV
	var_73_int = 4; // 0xc8 MovI
	func_273(var_18_object, var_73_int); // 0xc9 NEW_2
	var_13_bool = 1; // 0xcb MovB
	goto Label_261; // 0xcc Jump
	
Label_205:
	var_74_string = "button_detector"; // 0xcd PushS
	var_75_bool = var_5_string == var_74_string; // 0xce Eq
	if(var_75_bool == 0) goto Label_209; // 0xcf JumpB
	goto Label_261; // 0xd0 Jump
	
Label_209:
	var_76_string = "button_anticeptic"; // 0xd1 PushS
	var_77_bool = var_5_string == var_76_string; // 0xd2 Eq
	if(var_77_bool == 0) goto Label_213; // 0xd3 JumpB
	goto Label_261; // 0xd4 Jump
	
Label_213:
	var_78_int = 0; // 0xd5 PushI
	var_79_bool = var_4_int != var_78_int; // 0xd6 Neq
	if(var_79_bool == 0) goto Label_222; // 0xd7 JumpB
	var_80_string = "noinv_drop"; // 0xd8 PushS
	GetVariable(var_80_string, var_14_int); // 0xd9 Func
	var_81_int = var_14_int; // 0xdb Push
	if(var_81_int == 0) goto Label_222; // 0xdc JumpB
	return 12; // 0xdd Return
	
Label_222:
	var_15_int = 0; // 0xde MovI
	
Label_223:
	var_82_int = 12; // 0xdf PushI
	var_83_bool = var_15_int < var_82_int; // 0xe0 LT
	if(var_83_bool == 0) goto Label_261; // 0xe1 JumpB
	var_84_string = ""; var_85_int = 0; // 0xe2 PushV
	var_85_int = var_15_int; // 0xe3 Mov
	func_454(var_84_string, var_85_int); // 0xe4 NEW_2
	var_96_bool = var_5_string == var_84_string; // 0xe6 Eq
	if(var_96_bool == 0) goto Label_258; // 0xe7 JumpB
	var_97_object = Obj(); // 0xe8 PushV
	func_17(var_18_object, var_97_object); // 0xe9 NEW_2
	var_16_object = var_97_object; // 0xea Mov
	GetItemCount(var_17_int, var_0_int); // 0xec ObjFunc
	var_98_bool = var_17_int > var_15_int; // 0xee GT
	if(var_98_bool == 0) goto Label_256; // 0xef JumpB
	GetItem(var_18_object, var_15_int, var_0_int); // 0xf0 ObjFunc
	var_99_bool = 0; var_100_object = Obj(); // 0xf2 PushV
	var_100_object = var_18_object; // 0xf3 Mov
	func_23(var_100_object); // 0xf4 NEW_2
	var_106_bool = var_99_bool == 0; // 0xf6 Not
	if(var_106_bool == 0) goto Label_255; // 0xf7 JumpB
	var_107_bool = 0; var_108_int = 0; var_109_bool = 0; // 0xf8 PushV
	var_108_int = var_15_int; // 0xf9 Mov
	var_110_int = 0; // 0xfa PushI
	var_109_bool = var_4_int == var_110_int; // 0xfb Eq2
	func_55(var_107_bool, var_108_int, var_109_bool); // 0xfc NEW_2
	var_13_bool = var_107_bool; // 0xfd Mov
	
Label_255:
	var_18_object = 0; // 0xff SetNull
	
Label_256:
	goto Label_261; // 0x100 Jump
	
Label_258:
	var_150_int = 1; // 0x102 PushI
	var_15_int = var_15_int + var_150_int; // 0x103 Add2
	goto Label_223; // 0x104 Jump
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


func_66(var_0_int, var_2_object, var_112_int)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_bool = 0; var_116_int = 0; var_117_object = Obj(); var_118_object = Obj(); var_119_bool = 0; var_120_int = 0; // 0x42 PushV
	var_121_object = Obj(); // 0x43 PushV
	func_17(var_120_int, var_121_object); // 0x44 NEW_2
	var_117_object = var_121_object; // 0x45 Mov
	GetItem(var_118_object, var_112_int, var_0_int); // 0x47 ObjFunc
	var_122_bool = 0; var_123_object = Obj(); var_124_object = Obj(); // 0x49 PushV
	var_123_object = var_2_object; // 0x4a MovT
	var_124_object = var_118_object; // 0x4b Mov
	func_485(var_122_bool, var_123_object, var_124_object); // 0x4c NEW_2
	var_119_bool = var_122_bool; // 0x4d Mov
	var_130_bool = var_119_bool; // 0x4f Push
	if(var_130_bool == 0) goto Label_87; // 0x50 JumpB
	var_2_object = 0; // 0x51 SetNullT
	var_131_int = 0; // 0x52 PushI
	var_132_string = "video"; // 0x53 PushS
	SendMessage(var_131_int, var_132_string); // 0x54 Func
	goto Label_107; // 0x56 Jump
	
Label_107:
	return 8; // 0x6b Return
	
Label_87:
	var_133_int = 0; var_134_object = Obj(); // 0x57 PushV
	var_134_object = var_118_object; // 0x58 Mov
	func_470(var_134_object); // 0x59 NEW_2
	var_137_string = "Microscope"; // 0x5b PushS
	GetInvItemProperty(var_120_int, var_133_int, var_137_string); // 0x5c Func
	var_138_string = "video"; // 0x5e PushS
	SendMessage(var_120_int, var_138_string); // 0x5f Func
	var_139_string = "microscope_"; // 0x61 PushS
	var_140_string = ""; var_141_object = Obj(); // 0x62 PushV
	var_141_object = var_118_object; // 0x63 Mov
	func_475(var_140_string, var_141_object); // 0x64 NEW_2
	var_148_int = var_139_string + var_140_string; // 0x66 Add
	var_149_int = 1; // 0x67 PushI
	SetVariable(var_148_int, var_149_int); // 0x68 Func
	var_2_object = var_118_object; // 0x6a TMov
}


func_485(var_72_bool, var_73_object, var_74_object)
{
	var_75_bool = 0; var_76_bool = 0; // 0x1e5 PushV
	var_77_bool = 0; // 0x1e6 PushV
	var_77_bool = 1; // 0x1e7 MovB
	var_78_bool = var_73_object == 0; // 0x1e8 Not
	if(var_78_bool == 0) goto Label_493; // 0x1e9 JumpB
	var_79_bool = var_74_object == 0; // 0x1ea Not
	if(var_79_bool == 0) goto Label_493; // 0x1eb JumpB
	var_77_bool = 0; // 0x1ec MovB
	
Label_493:
	if(var_77_bool == 0) goto Label_496; // 0x1ed JumpB
	var_72_bool = 0; // 0x1ee MovB
	return 2; // 0x1ef Return
	
Label_496:
	Compare(var_76_bool, var_74_object); // 0x1f0 ObjFunc
	var_72_bool = var_76_bool; // 0x1f2 Mov
	return 2; // 0x1f3 Return
}


func_454(var_90_string, var_91_int)
{
	var_92_int = 1; // 0x1c7 PushI
	var_93_int = var_91_int + var_92_int; // 0x1c8 Add
	var_94_int = 10; // 0x1c9 PushI
	var_95_bool = var_93_int < var_94_int; // 0x1ca LT
	if(var_95_bool == 0) goto Label_465; // 0x1cb JumpB
	var_96_string = "slot0"; // 0x1cc PushS
	var_97_int = 1; // 0x1cd PushI
	var_98_int = var_91_int + var_97_int; // 0x1ce Add
	var_90_string = var_96_string + var_98_int; // 0x1cf Add2
	return 0; // 0x1d0 Return
	
Label_465:
	var_99_string = "slot"; // 0x1d1 PushS
	var_100_int = 1; // 0x1d2 PushI
	var_101_int = var_91_int + var_100_int; // 0x1d3 Add
	var_90_string = var_99_string + var_101_int; // 0x1d4 Add2
	return 0; // 0x1d5 Return
}


func_298()
{
	var_120_int = 0; // 0x12a PushV
	func_287(var_120_int); // 0x12b NEW_2
	var_127_string = "money"; // 0x12d PushS
	SendMessage(var_120_int, var_127_string); // 0x12e Func
	return 0; // 0x130 Return
}


func_110(var_0_int, var_8_int)
{
	var_0_int = -1; // 0x6f TMovI
	var_9_int = 0; // 0x70 PushV
	var_9_int = var_8_int; // 0x71 Mov
	func_273(var_8_int, var_9_int); // 0x72 NEW_2
	var_44_int = 0; // 0x74 PushV
	var_44_int = var_0_int; // 0x75 MovT
	func_367(var_44_int); // 0x76 NEW_2
	func_298(); // 0x79 NEW_2
	var_128_string = "default"; // 0x7b PushS
	SetCursor(var_128_string); // 0x7c Func
	ShowCursor(); // 0x7e Func
	CaptureKeyboard(); // 0x80 Func
	var_129_bool = 0; // 0x82 PushB
	SetOwnerDraw(var_129_bool); // 0x83 Func
	var_130_bool = 1; // 0x85 PushB
	SetNeedUpdate(var_130_bool); // 0x86 Func
	func_54(); // 0x89 NEW_2
	ProcessEvents(); // 0x8b Func
	return 0; // 0x8d Return
}


func_367(var_44_int)
{
	var_45_object = Obj(); var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_int = 0; var_50_bool = 0; var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_bool = 0; var_58_bool = 0; // 0x16f PushV
	var_59_object = Obj(); // 0x170 PushV
	func_17(var_58_bool, var_59_object); // 0x171 NEW_2
	var_52_object = var_59_object; // 0x172 Mov
	GetItemCount(var_53_int, var_44_int); // 0x174 ObjFunc
	var_54_int = 0; // 0x176 MovI
	
Label_375:
	var_60_int = 12; // 0x177 PushI
	var_61_bool = var_54_int < var_60_int; // 0x178 LT
	if(var_61_bool == 0) goto Label_452; // 0x179 JumpB
	var_62_bool = var_54_int < var_53_int; // 0x17a LT
	if(var_62_bool == 0) goto Label_442; // 0x17b JumpB
	GetItem(var_55_object, var_54_int, var_44_int); // 0x17c ObjFunc
	GetItemAmount(var_56_int, var_54_int, var_44_int); // 0x17e ObjFunc
	var_63_bool = 0; var_64_int = 0; var_65_int = 0; // 0x180 PushV
	var_64_int = var_54_int; // 0x181 Mov
	var_65_int = var_44_int; // 0x182 Mov
	func_31(var_58_bool, var_63_bool, var_64_int, var_65_int); // 0x183 NEW_2
	var_57_bool = var_63_bool; // 0x184 Mov
	var_80_bool = 0; var_81_object = Obj(); // 0x186 PushV
	var_81_object = var_55_object; // 0x187 Mov
	func_23(var_81_object); // 0x188 NEW_2
	var_58_bool = var_80_bool; // 0x189 Mov
	var_87_bool = var_57_bool; // 0x18b Push
	if(var_87_bool == 0) goto Label_415; // 0x18c JumpB
	var_88_bool = var_58_bool; // 0x18d Push
	if(var_88_bool == 0) goto Label_407; // 0x18e JumpB
	var_89_int = 0; // 0x18f PushI
	var_90_string = ""; var_91_int = 0; // 0x190 PushV
	var_91_int = var_54_int; // 0x191 Mov
	func_454(var_90_string, var_91_int); // 0x192 NEW_2
	SendMessage(var_89_int, var_90_string, var_55_object); // 0x194 Func
	goto Label_414; // 0x196 Jump
	
Label_414:
	goto Label_432; // 0x19e Jump
	
Label_432:
	var_102_int = 65536; // 0x1b0 PushI
	var_103_int = var_56_int | var_102_int; // 0x1b1 Or
	var_104_string = ""; var_105_int = 0; // 0x1b2 PushV
	var_105_int = var_54_int; // 0x1b3 Mov
	func_454(var_104_string, var_105_int); // 0x1b4 NEW_2
	SendMessage(var_103_int, var_104_string); // 0x1b6 Func
	var_55_object = 0; // 0x1b8 SetNull
	goto Label_449; // 0x1b9 Jump
	
Label_449:
	var_106_int = 1; // 0x1c1 PushI
	var_54_int = var_54_int + var_106_int; // 0x1c2 Add2
	goto Label_375; // 0x1c3 Jump
	
Label_407:
	var_107_int = 16384; // 0x197 PushI
	var_108_string = ""; var_109_int = 0; // 0x198 PushV
	var_109_int = var_54_int; // 0x199 Mov
	func_454(var_108_string, var_109_int); // 0x19a NEW_2
	SendMessage(var_107_int, var_108_string, var_55_object); // 0x19c Func
	
Label_415:
	var_110_bool = var_58_bool; // 0x19f Push
	if(var_110_bool == 0) goto Label_425; // 0x1a0 JumpB
	var_111_int = 131072; // 0x1a1 PushI
	var_112_string = ""; var_113_int = 0; // 0x1a2 PushV
	var_113_int = var_54_int; // 0x1a3 Mov
	func_454(var_112_string, var_113_int); // 0x1a4 NEW_2
	SendMessage(var_111_int, var_112_string, var_55_object); // 0x1a6 Func
	goto Label_432; // 0x1a8 Jump
	
Label_425:
	var_114_int = 0; // 0x1a9 PushI
	var_115_string = ""; var_116_int = 0; // 0x1aa PushV
	var_116_int = var_54_int; // 0x1ab Mov
	func_454(var_115_string, var_116_int); // 0x1ac NEW_2
	SendMessage(var_114_int, var_115_string, var_55_object); // 0x1ae Func
	
Label_442:
	var_117_int = 32768; // 0x1ba PushI
	var_118_string = ""; var_119_int = 0; // 0x1bb PushV
	var_119_int = var_54_int; // 0x1bc Mov
	func_454(var_118_string, var_119_int); // 0x1bd NEW_2
	SendMessage(var_117_int, var_118_string); // 0x1bf Func
	
Label_452:
	return 14; // 0x1c4 Return
}


func_17(var_3_object, var_59_object)
{
	var_59_object = var_3_object; // 0x11 MovT
	return 0; // 0x12 Return
}


func_273(var_0_int, var_9_int)
{
	var_10_int = -1; // 0x112 PushI
	var_11_bool = var_9_int == var_10_int; // 0x113 Eq
	if(var_11_bool == 0) goto Label_278; // 0x114 JumpB
	return 0; // 0x115 Return
	
Label_278:
	var_12_bool = var_0_int == var_9_int; // 0x116 Eq
	if(var_12_bool == 0) goto Label_281; // 0x117 JumpB
	return 0; // 0x118 Return
	
Label_281:
	var_0_int = var_9_int; // 0x119 TMov
	var_13_int = 0; // 0x11a PushV
	var_13_int = var_0_int; // 0x11b MovT
	func_305(var_13_int); // 0x11c NEW_2
	return 0; // 0x11e Return
}


func_19(var_57_bool)
{
	var_57_bool = 0; // 0x14 MovB
	return 0; // 0x15 Return
}


func_305(var_13_int)
{
	var_14_int = 0; // 0x132 PushI
	var_15_bool = var_13_int != var_14_int; // 0x133 Neq
	if(var_15_bool == 0) goto Label_314; // 0x134 JumpB
	var_16_int = 0; // 0x135 PushI
	var_17_string = "button_weapon"; // 0x136 PushS
	SendMessage(var_16_int, var_17_string); // 0x137 Func
	goto Label_318; // 0x139 Jump
	
Label_318:
	var_18_int = 1; // 0x13e PushI
	var_19_bool = var_13_int != var_18_int; // 0x13f Neq
	if(var_19_bool == 0) goto Label_326; // 0x140 JumpB
	var_20_int = 0; // 0x141 PushI
	var_21_string = "button_clothes"; // 0x142 PushS
	SendMessage(var_20_int, var_21_string); // 0x143 Func
	goto Label_330; // 0x145 Jump
	
Label_330:
	var_22_int = 2; // 0x14a PushI
	var_23_bool = var_13_int != var_22_int; // 0x14b Neq
	if(var_23_bool == 0) goto Label_338; // 0x14c JumpB
	var_24_int = 0; // 0x14d PushI
	var_25_string = "button_medcine"; // 0x14e PushS
	SendMessage(var_24_int, var_25_string); // 0x14f Func
	goto Label_342; // 0x151 Jump
	
Label_342:
	var_26_int = 3; // 0x156 PushI
	var_27_bool = var_13_int != var_26_int; // 0x157 Neq
	if(var_27_bool == 0) goto Label_350; // 0x158 JumpB
	var_28_int = 0; // 0x159 PushI
	var_29_string = "button_food"; // 0x15a PushS
	SendMessage(var_28_int, var_29_string); // 0x15b Func
	goto Label_354; // 0x15d Jump
	
Label_354:
	var_30_int = 4; // 0x162 PushI
	var_31_bool = var_13_int != var_30_int; // 0x163 Neq
	if(var_31_bool == 0) goto Label_362; // 0x164 JumpB
	var_32_int = 0; // 0x165 PushI
	var_33_string = "button_other"; // 0x166 PushS
	SendMessage(var_32_int, var_33_string); // 0x167 Func
	goto Label_366; // 0x169 Jump
	
Label_366:
	return 0; // 0x16e Return
	
Label_362:
	var_34_int = 1; // 0x16a PushI
	var_35_string = "button_other"; // 0x16b PushS
	SendMessage(var_34_int, var_35_string); // 0x16c Func
	
Label_350:
	var_36_int = 1; // 0x15e PushI
	var_37_string = "button_food"; // 0x15f PushS
	SendMessage(var_36_int, var_37_string); // 0x160 Func
	
Label_338:
	var_38_int = 1; // 0x152 PushI
	var_39_string = "button_medcine"; // 0x153 PushS
	SendMessage(var_38_int, var_39_string); // 0x154 Func
	
Label_326:
	var_40_int = 1; // 0x146 PushI
	var_41_string = "button_clothes"; // 0x147 PushS
	SendMessage(var_40_int, var_41_string); // 0x148 Func
	
Label_314:
	var_42_int = 1; // 0x13a PushI
	var_43_string = "button_weapon"; // 0x13b PushS
	SendMessage(var_42_int, var_43_string); // 0x13c Func
}


func_23(var_80_bool)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0; // 0x17 PushV
	GetItemID(var_84_int); // 0x18 ObjFunc
	var_86_string = "Microscope"; // 0x1a PushS
	HasInvItemProperty(var_85_bool, var_84_int, var_86_string); // 0x1b Func
	var_80_bool = !var_85_bool; // 0x1d Not2
	return 4; // 0x1e Return
}


func_470(var_133_int)
{
	var_135_int = 0; var_136_int = 0; // 0x1d6 PushV
	GetItemID(var_136_int); // 0x1d7 ObjFunc
	var_133_int = var_136_int; // 0x1d9 Mov
	return 2; // 0x1da Return
}


func_55(var_107_bool, var_108_int, var_109_bool)
{
	var_111_bool = var_109_bool; // 0x38 Push
	if(var_111_bool == 0) goto Label_64; // 0x39 JumpB
	var_112_int = 0; // 0x3a PushV
	var_112_int = var_108_int; // 0x3b Mov
	func_66(var_108_int, var_109_bool, var_112_int); // 0x3c NEW_2
	var_107_bool = 1; // 0x3e MovB
	return 0; // 0x3f Return
	
Label_64:
	var_107_bool = 0; // 0x40 MovB
	return 0; // 0x41 Return
}


func_54()
{
	return 0; // 0x36 Return
}


func_22()
{
	return 0; // 0x16 Return
}


func_475(var_140_string, var_141_object)
{
	var_142_int = 0; var_143_string = ""; var_144_int = 0; var_145_string = ""; // 0x1db PushV
	var_146_int = 0; var_147_object = Obj(); // 0x1dc PushV
	var_147_object = var_141_object; // 0x1dd Mov
	func_470(var_147_object); // 0x1de NEW_2
	var_144_int = var_146_int; // 0x1df Mov
	GetInvItemName(var_145_string, var_144_int); // 0x1e1 Func
	var_140_string = var_145_string; // 0x1e3 Mov
	return 4; // 0x1e4 Return
}


func_31(var_2_object, var_63_bool, var_64_int, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1f PushV
	var_68_object = Obj(); // 0x20 PushV
	func_17(var_67_object, var_68_object); // 0x21 NEW_2
	var_69_object = Obj(); // 0x23 PushV
	func_17(var_68_object, var_69_object); // 0x24 NEW_2
	var_70_object = Obj(); // 0x26 PushV
	func_17(var_68_object, var_70_object); // 0x27 NEW_2
	var_71_object = Obj(); // 0x29 PushV
	func_17(var_68_object, var_71_object); // 0x2a NEW_2
	GetItem(var_67_object, var_64_int, var_65_int); // 0x2c ObjFunc
	var_72_bool = 0; var_73_object = Obj(); var_74_object = Obj(); // 0x2e PushV
	var_73_object = var_2_object; // 0x2f MovT
	var_74_object = var_67_object; // 0x30 Mov
	func_485(var_72_bool, var_73_object, var_74_object); // 0x31 NEW_2
	var_63_bool = var_72_bool; // 0x32 Mov
	return 2; // 0x34 Return
}


func_287(var_120_int)
{
	var_121_object = Obj(); var_122_int = 0; var_123_object = Obj(); var_124_int = 0; // 0x11f PushV
	var_125_object = Obj(); // 0x120 PushV
	func_17(var_124_int, var_125_object); // 0x121 NEW_2
	var_123_object = var_125_object; // 0x122 Mov
	var_126_string = "money"; // 0x124 PushS
	GetProperty(var_126_string, var_124_int); // 0x125 ObjFunc
	var_120_int = var_124_int; // 0x127 Mov
	return 4; // 0x128 Return
}


