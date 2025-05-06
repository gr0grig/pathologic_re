task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = ""; // 0x114 PushV
	var_18_bool = var_1_object == 0; // 0x115 Not
	if(var_18_bool == 0) goto Label_283; // 0x116 JumpB
	var_19_object = Obj(); // 0x117 PushV
	func_408(var_19_object); // 0x118 Call
	var_1_object = var_19_object; // 0x119 TMov
	
Label_283:
	var_22_bool = var_0_object == 0; // 0x11b Not
	if(var_22_bool == 0) goto Label_287; // 0x11c JumpB
	CreateIntVector(var_0_object); // 0x11d Func
	
Label_287:
	var_23_object = Obj(); // 0x11f PushV
	var_23_object = var_1_object; // 0x120 MovT
	func_432(); // 0x121 Call
	size(var_10_int); // 0x123 TObjFunc
	var_11_int = 0; // 0x125 MovI
	
Label_294:
	var_33_bool = var_11_int < var_10_int; // 0x126 LT
	if(var_33_bool == 0) goto Label_339; // 0x127 JumpB
	get(var_12_int, var_11_int); // 0x128 TObjFunc
	var_34_int = 1; // 0x12a PushI
	var_35_int = var_11_int + var_34_int; // 0x12b Add
	get(var_13_int, var_35_int); // 0x12c TObjFunc
	var_36_int = 2; // 0x12e PushI
	var_37_int = var_11_int + var_36_int; // 0x12f Add
	get(var_14_int, var_37_int); // 0x130 TObjFunc
	var_38_string = ""; var_39_int = 0; var_40_int = 0; // 0x132 PushV
	var_39_int = var_12_int; // 0x133 Mov
	var_40_int = var_13_int; // 0x134 Mov
	func_2(var_40_int); // 0x135 Call
	var_15_string = var_38_string; // 0x136 Mov
	var_41_string = ""; var_42_int = 0; var_43_int = 0; // 0x138 PushV
	var_42_int = var_12_int; // 0x139 Mov
	var_43_int = var_14_int; // 0x13a Mov
	func_5(var_43_int); // 0x13b Call
	var_16_string = var_41_string; // 0x13c Mov
	var_44_string = ""; var_45_int = 0; var_46_int = 0; // 0x13e PushV
	var_45_int = var_12_int; // 0x13f Mov
	var_46_int = var_14_int; // 0x140 Mov
	func_8(var_46_int); // 0x141 Call
	var_17_string = var_44_string; // 0x142 Mov
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = ""; // 0x144 PushV
	var_52_object = Obj(); // 0x145 PushV
	func_397(var_52_object); // 0x146 Call
	var_48_object = var_52_object; // 0x147 Mov
	var_49_string = var_15_string; // 0x149 Mov
	var_50_string = var_16_string; // 0x14a Mov
	var_51_string = var_17_string; // 0x14b Mov
	func_414(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string); // 0x14c Call
	add(var_47_object); // 0x14e TObjFunc
	var_68_int = 3; // 0x150 PushI
	var_11_int = var_11_int + var_68_int; // 0x151 Add2
	goto Label_294; // 0x152 Jump
	
Label_339:
	return 16; // 0x153 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; // 0x154 PushV
	size(var_6_int); // 0x155 TObjFunc
	var_7_int = 0; // 0x157 MovI
	
Label_344:
	var_10_bool = var_7_int < var_6_int; // 0x158 LT
	if(var_10_bool == 0) goto Label_380; // 0x159 JumpB
	get(var_8_object, var_7_int); // 0x15a TObjFunc
	var_11_bool = var_8_object != 0; // 0x15c NullNeq
	if(var_11_bool == 0) goto Label_366; // 0x15d JumpB
	IsDead(var_9_bool); // 0x15e ObjFunc
	var_12_bool = var_9_bool == 0; // 0x160 Not
	if(var_12_bool == 0) goto Label_364; // 0x161 JumpB
	var_13_bool = 0; var_14_object = Obj(); var_15_string = ""; // 0x162 PushV
	var_14_object = var_8_object; // 0x163 Mov
	var_15_string = "ToDie"; // 0x164 MovS
	func_385(var_13_bool, var_14_object, var_15_string); // 0x165 Call
	var_22_bool = var_13_bool == 0; // 0x167 Not
	if(var_22_bool == 0) goto Label_364; // 0x168 JumpB
	var_23_int = 1; // 0x169 PushI
	var_7_int = var_7_int + var_23_int; // 0x16a Add2
	goto Label_379; // 0x16b Jump
	
Label_379:
	goto Label_344; // 0x17b Jump
	
Label_364:
	RemoveActor(var_8_object); // 0x16c Func
	
Label_366:
	remove(var_7_int); // 0x16e TObjFunc
	var_24_int = 3; // 0x170 PushI
	var_25_float = var_7_int * var_24_int; // 0x171 Mult
	var_26_int = 1; // 0x172 PushI
	var_27_int = var_7_int + var_26_int; // 0x173 Add
	var_28_int = 3; // 0x174 PushI
	var_29_float = var_27_int * var_28_int; // 0x175 Mult
	remove(var_25_float, var_29_float); // 0x176 TObjFunc
	var_30_int = -1; // 0x178 PushI
	var_6_int = var_6_int + var_30_int; // 0x179 Add2
	var_8_object = 0; // 0x17a SetNull
	
Label_380:
	var_31_object = Obj(); // 0x17c PushV
	var_31_object = var_1_object; // 0x17d MovT
	func_432(); // 0x17e Call
	return 8; // 0x180 Return
}


main(var_0_object, var_1_object)
{
	var_2_bool = var_1_object == 0; // 0xb Not
	if(var_2_bool == 0) goto Label_17; // 0xc JumpB
	var_3_object = Obj(); // 0xd PushV
	func_408(var_3_object); // 0xe Call
	var_1_object = var_3_object; // 0xf TMov
	
Label_17:
	var_6_bool = var_0_object == 0; // 0x11 Not
	if(var_6_bool == 0) goto Label_21; // 0x12 JumpB
	CreateIntVector(var_0_object); // 0x13 Func
	
Label_21:
	func_32(); // 0x16 Call
	var_175_object = Obj(); // 0x18 PushV
	var_175_object = var_0_object; // 0x19 MovT
	func_0(); // 0x1a Call
	
Label_28:
	Hold(); // 0x1c Func
	goto Label_28; // 0x1e Jump
}


func_0()
{
	return 0; // 0x1 Return
}


func_129(var_22_cvector, var_23_cvector, var_24_bool)
{
	var_25_string = ""; var_26_object = Obj(); var_27_string = ""; var_28_object = Obj(); // 0x81 PushV
	var_29_bool = 0; var_30_float = 0; // 0x82 PushV
	var_31_bool = var_24_bool; // 0x83 Push
	if(var_31_bool == 0) goto Label_135; // 0x84 JumpB
	var_30_float = 0.1; // 0x85 MovF
	goto Label_136; // 0x86 Jump
	
Label_136:
	func_403(var_29_bool, var_30_float); // 0x88 Call
	if(var_29_bool == 0) goto Label_162; // 0x8a JumpB
	var_34_int = 5; // 0x8b PushI
	var_35_int = 5; // 0x8c PushI
	var_36_int = 3; // 0x8d PushI
	var_37_int = 2; // 0x8e PushI
	var_38_int = 3; // 0x8f PushI
	var_39_string = "bread"; // 0x90 PushS
	var_40_string = "bottle_water"; // 0x91 PushS
	var_41_string = "milk"; // 0x92 PushS
	var_42_string = "vegetables"; // 0x93 PushS
	var_43_string = "lemon"; // 0x94 PushS
	RandOneOf(var_27_string, var_34_int, var_35_int, var_36_int, var_37_int, var_38_int, var_39_string, var_40_string, var_41_string, var_42_string, var_43_string); // 0x95 Func
	var_44_string = "scripted_container"; // 0x97 PushS
	var_45_object = Obj(); // 0x98 PushV
	func_397(var_45_object); // 0x99 Call
	var_48_string = "item_"; // 0x9b PushS
	var_49_int = var_48_string + var_27_string; // 0x9c Add
	var_50_string = "_steal.xml"; // 0x9d PushS
	var_51_int = var_49_int + var_50_string; // 0x9e Add
	AddActorByType(var_28_object, var_44_string, var_45_object, var_22_cvector, var_23_cvector, var_51_int); // 0x9f Func
	var_28_object = 0; // 0xa1 SetNull
	
Label_162:
	return 4; // 0xa2 Return
	
Label_135:
	var_30_float = 0.2; // 0x87 MovF
}


func_2(var_38_string)
{
	var_38_string = ""; // 0x3 MovS
	return 0; // 0x4 Return
}


func_385(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0; // 0x181 PushV
	var_18_string = "HasProperty"; // 0x182 PushS
	var_19_int = 2; // 0x183 PushI
	var_20_bool = IsFuncExist(var_14_object, var_18_string, var_19_int); // 0x184 FuncExist
	var_21_bool = var_20_bool == 0; // 0x185 Not
	if(var_21_bool == 0) goto Label_393; // 0x186 JumpB
	var_13_bool = 0; // 0x187 MovB
	return 2; // 0x188 Return
	
Label_393:
	HasProperty(var_15_string, var_17_bool); // 0x189 ObjFunc
	var_13_bool = var_17_bool; // 0x18b Mov
	return 2; // 0x18c Return
}


func_5(var_41_string)
{
	var_41_string = ""; // 0x6 MovS
	return 0; // 0x7 Return
}


func_8(var_44_string)
{
	var_44_string = ""; // 0x9 MovS
	return 0; // 0xa Return
}


func_72(var_53_bool)
{
	var_54_int = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_int = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x48 PushV
	var_58_int = 1; // 0x49 MovI
	
Label_74:
	var_62_string = "pt_item_pfood"; // 0x4a PushS
	var_63_int = var_62_string + var_58_int; // 0x4b Add
	GetLocator(var_63_int, var_59_bool, var_60_cvector, var_61_cvector); // 0x4c Func
	var_64_bool = var_59_bool == 0; // 0x4e Not
	if(var_64_bool == 0) goto Label_81; // 0x4f JumpB
	goto Label_90; // 0x50 Jump
	
Label_90:
	return 8; // 0x5a Return
	
Label_81:
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x51 PushV
	var_65_cvector = var_60_cvector; // 0x52 Mov
	var_66_cvector = var_61_cvector; // 0x53 Mov
	var_67_bool = var_53_bool; // 0x54 Mov
	func_163(var_65_cvector, var_66_cvector, var_67_bool); // 0x55 Call
	var_109_int = 1; // 0x57 PushI
	var_58_int = var_58_int + var_109_int; // 0x58 Add2
	goto Label_74; // 0x59 Jump
}


func_397(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x18d PushV
	self(var_47_object); // 0x18e Func
	var_45_object = var_47_object; // 0x190 Mov
	return 2; // 0x191 Return
}


func_403(var_29_bool, var_30_float)
{
	var_32_float = 0; var_33_float = 0; // 0x193 PushV
	rand(var_33_float); // 0x194 Func
	var_29_bool = var_33_float < var_30_float; // 0x196 LT2
	return 2; // 0x197 Return
}


func_408(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x198 PushV
	CreateObjectVector(var_5_object); // 0x199 Func
	var_3_object = var_5_object; // 0x19b Mov
	return 2; // 0x19c Return
}


func_91(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_int = 0; var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); // 0x5b PushV
	var_115_int = 1; // 0x5c MovI
	
Label_93:
	var_119_string = "pt_item_knife"; // 0x5d PushS
	var_120_int = var_119_string + var_115_int; // 0x5e Add
	GetLocator(var_120_int, var_116_bool, var_117_cvector, var_118_cvector); // 0x5f Func
	var_121_bool = var_116_bool == 0; // 0x61 Not
	if(var_121_bool == 0) goto Label_100; // 0x62 JumpB
	goto Label_109; // 0x63 Jump
	
Label_109:
	return 8; // 0x6d Return
	
Label_100:
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_bool = 0; // 0x64 PushV
	var_122_cvector = var_117_cvector; // 0x65 Mov
	var_123_cvector = var_118_cvector; // 0x66 Mov
	var_124_bool = var_110_bool; // 0x67 Mov
	func_221(var_122_cvector, var_123_cvector, var_124_bool); // 0x68 Call
	var_133_int = 1; // 0x6a PushI
	var_115_int = var_115_int + var_133_int; // 0x6b Add2
	goto Label_93; // 0x6c Jump
}


func_221(var_122_cvector, var_123_cvector, var_124_bool)
{
	var_125_object = Obj(); var_126_object = Obj(); // 0xdd PushV
	var_127_bool = 0; var_128_float = 0; // 0xde PushV
	var_129_bool = var_124_bool; // 0xdf Push
	if(var_129_bool == 0) goto Label_227; // 0xe0 JumpB
	var_128_float = 0.1; // 0xe1 MovF
	goto Label_228; // 0xe2 Jump
	
Label_228:
	func_403(var_127_bool, var_128_float); // 0xe4 Call
	if(var_127_bool == 0) goto Label_239; // 0xe6 JumpB
	var_130_string = "scripted_container"; // 0xe7 PushS
	var_131_object = Obj(); // 0xe8 PushV
	func_397(var_131_object); // 0xe9 Call
	var_132_string = "item_knife_steal.xml"; // 0xeb PushS
	AddActorByType(var_126_object, var_130_string, var_131_object, var_122_cvector, var_123_cvector, var_132_string); // 0xec Func
	var_126_object = 0; // 0xee SetNull
	
Label_239:
	return 2; // 0xef Return
	
Label_227:
	var_128_float = 0.1; // 0xe3 MovF
}


func_414(var_47_object, var_48_object, var_49_string, var_50_string, var_51_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x19e PushV
	GetLocator(var_49_string, var_59_bool, var_60_cvector, var_61_cvector); // 0x19f ObjFunc
	var_63_bool = var_59_bool == 0; // 0x1a1 Not
	if(var_63_bool == 0) goto Label_427; // 0x1a2 JumpB
	var_64_string = "Locator "; // 0x1a3 PushS
	var_65_int = var_64_string + var_49_string; // 0x1a4 Add
	var_66_string = " doesn't exist"; // 0x1a5 PushS
	var_67_int = var_65_int + var_66_string; // 0x1a6 Add
	Trace(var_67_int); // 0x1a7 Func
	var_62_object = 0; // 0x1a9 SetNull
	goto Label_429; // 0x1aa Jump
	
Label_429:
	var_47_object = var_62_object; // 0x1ad Mov
	return 8; // 0x1ae Return
	
Label_427:
	AddActor(var_62_object, var_50_string, var_48_object, var_60_cvector, var_61_cvector, var_51_string); // 0x1ab Func
}


func_32()
{
	var_7_bool = 0; var_8_bool = 0; // 0x20 PushV
	var_9_string = "nailed"; // 0x21 PushS
	GetProperty(var_9_string, var_8_bool); // 0x22 Func
	var_10_bool = 0; // 0x24 PushV
	var_10_bool = var_8_bool; // 0x25 Mov
	func_53(var_10_bool); // 0x26 Call
	var_53_bool = 0; // 0x28 PushV
	var_53_bool = var_8_bool; // 0x29 Mov
	func_72(var_53_bool); // 0x2a Call
	var_110_bool = 0; // 0x2c PushV
	var_110_bool = var_8_bool; // 0x2d Mov
	func_91(var_110_bool); // 0x2e Call
	var_134_bool = 0; // 0x30 PushV
	var_134_bool = var_8_bool; // 0x31 Mov
	func_110(var_134_bool); // 0x32 Call
	return 2; // 0x34 Return
}


func_163(var_65_cvector, var_66_cvector, var_67_bool)
{
	var_68_string = ""; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); // 0xa3 PushV
	var_78_bool = 0; var_79_float = 0; // 0xa4 PushV
	var_80_bool = var_67_bool; // 0xa5 Push
	if(var_80_bool == 0) goto Label_169; // 0xa6 JumpB
	var_79_float = 0.1; // 0xa7 MovF
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_403(var_78_bool, var_79_float); // 0xaa Call
	if(var_78_bool == 0) goto Label_220; // 0xac JumpB
	var_81_int = 8; // 0xad PushI
	var_82_int = 3; // 0xae PushI
	var_83_int = 3; // 0xaf PushI
	var_84_int = 3; // 0xb0 PushI
	var_85_int = 2; // 0xb1 PushI
	var_86_int = 2; // 0xb2 PushI
	var_87_int = 1; // 0xb3 PushI
	var_88_string = "rusk"; // 0xb4 PushS
	var_89_string = "dried_fish"; // 0xb5 PushS
	var_90_string = "dried_meat"; // 0xb6 PushS
	var_91_string = "smoked_meat"; // 0xb7 PushS
	var_92_string = "fresh_fish"; // 0xb8 PushS
	var_93_string = "fresh_meat"; // 0xb9 PushS
	var_94_string = "tvirin"; // 0xba PushS
	RandOneOf(var_73_string, var_81_int, var_82_int, var_83_int, var_84_int, var_85_int, var_86_int, var_87_int, var_88_string, var_89_string, var_90_string, var_91_string, var_92_string, var_93_string, var_94_string); // 0xbb Func
	RandVec2D(var_75_float, var_76_float); // 0xbd Func
	var_95_float = GetByIndex(var_77_cvector, 0); // 0xbf PushE
	var_95_float = var_75_float; // 0xc0 Mov
	SetByIndex(var_77_cvector, 0) = var_95_float; // 0xc1 PopE
	var_96_float = GetByIndex(var_77_cvector, 1); // 0xc2 PushE
	var_96_float = 0; // 0xc3 MovI
	SetByIndex(var_77_cvector, 1) = var_96_float; // 0xc4 PopE
	var_97_float = GetByIndex(var_77_cvector, 2); // 0xc5 PushE
	var_97_float = var_76_float; // 0xc6 Mov
	SetByIndex(var_77_cvector, 2) = var_97_float; // 0xc7 PopE
	var_98_string = "scripted_container"; // 0xc8 PushS
	var_99_object = Obj(); // 0xc9 PushV
	func_397(var_99_object); // 0xca Call
	var_100_string = "item_plate.xml"; // 0xcc PushS
	AddActorByType(var_74_object, var_98_string, var_99_object, var_65_cvector, var_77_cvector, var_100_string); // 0xcd Func
	var_101_string = "scripted_container"; // 0xcf PushS
	var_102_object = Obj(); // 0xd0 PushV
	func_397(var_102_object); // 0xd1 Call
	var_103_cvector = CVector(0.0, 5.0, 0.0); // 0xd3 PushVec
	var_104_int = var_65_cvector + var_103_cvector; // 0xd4 Add
	var_105_string = "item_"; // 0xd5 PushS
	var_106_int = var_105_string + var_73_string; // 0xd6 Add
	var_107_string = "_steal.xml"; // 0xd7 PushS
	var_108_int = var_106_int + var_107_string; // 0xd8 Add
	AddActorByType(var_74_object, var_101_string, var_102_object, var_104_int, var_66_cvector, var_108_int); // 0xd9 Func
	var_74_object = 0; // 0xdb SetNull
	
Label_220:
	return 10; // 0xdc Return
	
Label_169:
	var_79_float = 0.2; // 0xa9 MovF
}


func_110(var_134_bool)
{
	var_135_int = 0; var_136_bool = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_int = 0; var_140_bool = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); // 0x6e PushV
	var_139_int = 1; // 0x6f MovI
	
Label_112:
	var_143_string = "pt_item_bottle"; // 0x70 PushS
	var_144_int = var_143_string + var_139_int; // 0x71 Add
	GetLocator(var_144_int, var_140_bool, var_141_cvector, var_142_cvector); // 0x72 Func
	var_145_bool = var_140_bool == 0; // 0x74 Not
	if(var_145_bool == 0) goto Label_119; // 0x75 JumpB
	goto Label_128; // 0x76 Jump
	
Label_128:
	return 8; // 0x80 Return
	
Label_119:
	var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_bool = 0; // 0x77 PushV
	var_146_cvector = var_141_cvector; // 0x78 Mov
	var_147_cvector = var_142_cvector; // 0x79 Mov
	var_148_bool = var_134_bool; // 0x7a Mov
	func_240(var_146_cvector, var_147_cvector, var_148_bool); // 0x7b Call
	var_174_int = 1; // 0x7d PushI
	var_139_int = var_139_int + var_174_int; // 0x7e Add2
	goto Label_112; // 0x7f Jump
}


func_432()
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj(); // 0x1b0 PushV
	size(var_35_int); // 0x1b1 ObjFunc
	var_36_int = 0; // 0x1b3 MovI
	
Label_436:
	var_38_bool = var_36_int < var_35_int; // 0x1b4 LT
	if(var_38_bool == 0) goto Label_448; // 0x1b5 JumpB
	get(var_37_object, var_36_int); // 0x1b6 ObjFunc
	var_39_object = var_37_object; // 0x1b8 Push
	if(var_39_object == 0) goto Label_444; // 0x1b9 JumpB
	RemoveActor(var_37_object); // 0x1ba Func
	
Label_444:
	var_37_object = 0; // 0x1bc SetNull
	var_40_int = 1; // 0x1bd PushI
	var_36_int = var_36_int + var_40_int; // 0x1be Add2
	goto Label_436; // 0x1bf Jump
	
Label_448:
	clear(); // 0x1c0 ObjFunc
	return 6; // 0x1c2 Return
}


func_240(var_146_cvector, var_147_cvector, var_148_bool)
{
	var_149_string = ""; var_150_object = Obj(); var_151_string = ""; var_152_object = Obj(); // 0xf0 PushV
	var_153_bool = 0; var_154_float = 0; // 0xf1 PushV
	var_155_bool = var_148_bool; // 0xf2 Push
	if(var_155_bool == 0) goto Label_246; // 0xf3 JumpB
	var_154_float = 0.2; // 0xf4 MovF
	goto Label_247; // 0xf5 Jump
	
Label_247:
	func_403(var_153_bool, var_154_float); // 0xf7 Call
	if(var_153_bool == 0) goto Label_275; // 0xf9 JumpB
	var_156_int = 10; // 0xfa PushI
	var_157_int = 15; // 0xfb PushI
	var_158_int = 3; // 0xfc PushI
	var_159_int = 3; // 0xfd PushI
	var_160_int = 3; // 0xfe PushI
	var_161_int = 1; // 0xff PushI
	var_162_string = "bottle_water"; // 0x100 PushS
	var_163_string = "bottle_empty"; // 0x101 PushS
	var_164_string = "vegetables"; // 0x102 PushS
	var_165_string = "milk"; // 0x103 PushS
	var_166_string = "egg"; // 0x104 PushS
	var_167_string = "tvirin"; // 0x105 PushS
	RandOneOf(var_151_string, var_156_int, var_157_int, var_158_int, var_159_int, var_160_int, var_161_int, var_162_string, var_163_string, var_164_string, var_165_string, var_166_string, var_167_string); // 0x106 Func
	var_168_string = "scripted_container"; // 0x108 PushS
	var_169_object = Obj(); // 0x109 PushV
	func_397(var_169_object); // 0x10a Call
	var_170_string = "item_"; // 0x10c PushS
	var_171_int = var_170_string + var_151_string; // 0x10d Add
	var_172_string = "_steal.xml"; // 0x10e PushS
	var_173_int = var_171_int + var_172_string; // 0x10f Add
	AddActorByType(var_152_object, var_168_string, var_169_object, var_146_cvector, var_147_cvector, var_173_int); // 0x110 Func
	var_152_object = 0; // 0x112 SetNull
	
Label_275:
	return 4; // 0x113 Return
	
Label_246:
	var_154_float = 0.4; // 0xf6 MovF
}


func_53(var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x35 PushV
	var_15_int = 1; // 0x36 MovI
	
Label_55:
	var_19_string = "pt_item_food"; // 0x37 PushS
	var_20_int = var_19_string + var_15_int; // 0x38 Add
	GetLocator(var_20_int, var_16_bool, var_17_cvector, var_18_cvector); // 0x39 Func
	var_21_bool = var_16_bool == 0; // 0x3b Not
	if(var_21_bool == 0) goto Label_62; // 0x3c JumpB
	goto Label_71; // 0x3d Jump
	
Label_71:
	return 8; // 0x47 Return
	
Label_62:
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; // 0x3e PushV
	var_22_cvector = var_17_cvector; // 0x3f Mov
	var_23_cvector = var_18_cvector; // 0x40 Mov
	var_24_bool = var_10_bool; // 0x41 Mov
	func_129(var_22_cvector, var_23_cvector, var_24_bool); // 0x42 Call
	var_52_int = 1; // 0x44 PushI
	var_15_int = var_15_int + var_52_int; // 0x45 Add2
	goto Label_55; // 0x46 Jump
}


