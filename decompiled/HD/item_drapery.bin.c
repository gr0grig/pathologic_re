	task_0_event_32(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_7_int, var_8_int, var_9_int)
	{
	var_18_string = ""; var_19_int = 0; // 0x56 PushV
	var_18_string = "armor"; // 0x57 MovS
	var_20_int = GlobalVars[3]; // 0x58 PushGE
	var_19_int = -var_20_int; // 0x59 Neg2
	func_194(var_18_string, var_19_int); // 0x5a NEW_2
	var_24_string = ""; var_25_int = 0; // 0x5c PushV
	var_24_string = "armor_fire"; // 0x5d MovS
	var_26_int = GlobalVars[4]; // 0x5e PushGE
	var_25_int = -var_26_int; // 0x5f Neg2
	func_194(var_24_string, var_25_int); // 0x60 NEW_2
	var_27_string = ""; var_28_int = 0; // 0x62 PushV
	var_27_string = "armor_phys"; // 0x63 MovS
	var_29_int = GlobalVars[5]; // 0x64 PushGE
	var_28_int = -var_29_int; // 0x65 Neg2
	func_194(var_27_string, var_28_int); // 0x66 NEW_2
	var_30_string = ""; var_31_int = 0; // 0x68 PushV
	var_30_string = "armor_bullet"; // 0x69 MovS
	var_32_int = GlobalVars[6]; // 0x6a PushGE
	var_31_int = -var_32_int; // 0x6b Neg2
	func_194(var_30_string, var_31_int); // 0x6c NEW_2
	var_33_string = ""; var_34_int = 0; // 0x6e PushV
	var_33_string = "armor_disease"; // 0x6f MovS
	var_35_int = GlobalVars[7]; // 0x70 PushGE
	var_34_int = -var_35_int; // 0x71 Neg2
	func_194(var_33_string, var_34_int); // 0x72 NEW_2
	var_0_bool = 1; // 0x74 TMovB
	return 0; // 0x75 Return
	}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; // 0x9b PushV
	var_5_int = var_2_int; // 0x9c Mov
	var_6_int = var_3_int; // 0x9d Mov
	var_7_int = var_4_int; // 0x9e Mov
	func_172(var_5_int, var_6_int, var_7_int); // 0x9f NEW_2
	return 0; // 0xa1 Return
}


task_0_event_35(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int)
{
	var_6_bool = var_4_bool == 0; // 0xa3 Not
	if(var_6_bool == 0) goto Label_171; // 0xa4 JumpB
	var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0xa5 PushV
	var_7_int = var_2_int; // 0xa6 Mov
	var_8_int = var_3_int; // 0xa7 Mov
	var_9_int = var_5_int; // 0xa8 Mov
	func_172(var_7_int, var_8_int, var_9_int); // 0xa9 NEW_2
	
Label_171:
	return 0; // 0xab Return
}


	event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_float, var_10_float)
	{
	var_11_int = 0; var_12_int = 0; var_13_float = 0; var_14_int = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_float = 0; var_22_int = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_int = 0; // 0x11f PushV
	var_27_int = 5; // 0x120 PushI
	var_28_bool = var_8_int == var_27_int; // 0x121 Eq
	if(var_28_bool == 0) goto Label_292; // 0x122 JumpB
	goto Label_368; // 0x123 Jump
	
Label_368:
	return 16; // 0x170 Return
	
Label_292:
	var_29_int = GlobalVars[3]; // 0x124 PushGE
	var_19_int = var_29_int; // 0x125 Mov
	var_30_int = 4; // 0x127 PushI
	var_31_bool = var_8_int == var_30_int; // 0x128 Eq
	if(var_31_bool == 0) goto Label_301; // 0x129 JumpB
	var_32_int = GlobalVars[4]; // 0x12a PushGE
	var_19_int = var_19_int + var_32_int; // 0x12b Add2
	goto Label_309; // 0x12c Jump
	
Label_309:
	var_33_string = "armor"; // 0x135 PushS
	GetProperty(var_33_string, var_20_int); // 0x136 Func
	var_34_bool = var_20_int == 0; // 0x138 Not
	if(var_34_bool == 0) goto Label_316; // 0x139 JumpB
	var_21_float = 1; // 0x13a MovI
	goto Label_319; // 0x13b Jump
	
Label_319:
	var_35_float = 0.75; // 0x13f PushF
	var_21_float = var_21_float * var_35_float; // 0x140 Mult2
	var_36_int = 0; // 0x141 PushI
	var_37_bool = var_21_float > var_36_int; // 0x142 GT
	if(var_37_bool == 0) goto Label_368; // 0x143 JumpB
	var_38_int = GlobalVars[0]; // 0x144 PushGE
	var_39_int = GlobalVars[1]; // 0x145 PushGE
	var_40_int = GlobalVars[2]; // 0x146 PushGE
	GetItemPosByID(var_22_int, var_38_int, var_39_int, var_40_int); // 0x147 Func
	var_41_int = -1; // 0x149 PushI
	var_42_bool = var_22_int != var_41_int; // 0x14a Neq
	if(var_42_bool == 0) goto Label_368; // 0x14b JumpB
	var_43_int = GlobalVars[2]; // 0x14c PushGE
	GetItem(var_23_object, var_22_int, var_43_int); // 0x14d Func
	var_44_string = "durability"; // 0x14f PushS
	HasProperty(var_24_bool, var_44_string); // 0x150 ObjFunc
	var_45_bool = var_24_bool; // 0x152 Push
	if(var_45_bool == 0) goto Label_367; // 0x153 JumpB
	var_46_int = 0; // 0x154 PushV
	var_47_float = var_21_float * var_10_float; // 0x155 Mult
	var_48_float = 100.0; // 0x156 PushF
	var_46_int = var_47_float * var_48_float; // 0x157 Mult2
	var_25_int = var_46_int; // 0x158 Mov
	var_49_string = "durability"; // 0x15a PushS
	GetProperty(var_26_int, var_49_string); // 0x15b ObjFunc
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0x15d PushV
	var_51_int = var_26_int - var_25_int; // 0x15e Sub2
	var_52_int = 0; // 0x15f MovI
	var_53_int = 100; // 0x160 MovI
	func_201(var_50_int, var_51_int, var_52_int, var_53_int); // 0x161 NEW_2
	var_26_int = var_50_int; // 0x162 Mov
	var_56_string = "durability"; // 0x164 PushS
	SetProperty(var_56_string, var_26_int); // 0x165 ObjFunc
	var_57_int = 1; // 0x167 PushI
	var_58_int = GlobalVars[2]; // 0x168 PushGE
	SetItem(var_23_object, var_57_int, var_22_int, var_58_int); // 0x169 Func
	var_59_int = 0; // 0x16b PushV
	var_59_int = var_26_int; // 0x16c Mov
	func_212(var_59_int); // 0x16d NEW_2
	
Label_367:
	var_23_object = 0; // 0x16f SetNull
	
Label_316:
	var_105_float = 0; // 0x13c PushV
	var_105_float = var_19_int; // 0x13d Mov
	var_21_float = var_105_float / var_105_float; // 0x13e Div2
	
Label_301:
	var_106_int = 2; // 0x12d PushI
	var_107_bool = var_8_int == var_106_int; // 0x12e Eq
	if(var_107_bool == 0) goto Label_307; // 0x12f JumpB
	var_108_int = GlobalVars[6]; // 0x130 PushGE
	var_19_int = var_19_int + var_108_int; // 0x131 Add2
	goto Label_309; // 0x132 Jump
	
Label_307:
	var_109_int = GlobalVars[5]; // 0x133 PushGE
	var_19_int = var_19_int + var_109_int; // 0x134 Add2
	}


event_43(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_float = 0; // 0x172 PushV
	var_7_object = var_1_object; // 0x173 Mov
	var_8_int = var_2_int; // 0x174 Mov
	var_9_float = var_3_float; // 0x175 Mov
	var_10_float = var_4_float; // 0x176 Mov
	func_287(); // 0x177 NEW_2
	return 0; // 0x179 Return
}


main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_bool = 0; var_8_int = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; // 0x0 PushV
	var_0_bool = 0; // 0x1 TMovB
	var_17_int = GlobalVars[3]; // 0x2 PushGE
	var_17_int = 0; // 0x3 MovI
	GlobalVars[3] = var_17_int; // 0x4 PopGE
	var_18_int = GlobalVars[4]; // 0x5 PushGE
	var_18_int = 0; // 0x6 MovI
	GlobalVars[4] = var_18_int; // 0x7 PopGE
	var_19_int = GlobalVars[5]; // 0x8 PushGE
	var_19_int = 0; // 0x9 MovI
	GlobalVars[5] = var_19_int; // 0xa PopGE
	var_20_int = GlobalVars[6]; // 0xb PushGE
	var_20_int = 0; // 0xc MovI
	GlobalVars[6] = var_20_int; // 0xd PopGE
	var_21_int = GlobalVars[7]; // 0xe PushGE
	var_21_int = 0; // 0xf MovI
	GlobalVars[7] = var_21_int; // 0x10 PopGE
	var_22_int = GlobalVars[8]; // 0x11 PushGE
	var_22_int = 0; // 0x12 MovI
	GlobalVars[8] = var_22_int; // 0x13 PopGE
	func_153(); // 0x15 NEW_2
	func_118(); // 0x18 NEW_2
	GetGameTime(var_9_float); // 0x1a Func
	
Label_28:
	GetGameTime(var_10_float); // 0x1c Func
	var_11_float = var_10_float - var_9_float; // 0x1e Sub2
	var_89_float = 0.24; // 0x1f PushF
	var_12_int = var_11_float / var_11_float; // 0x20 Div2
	var_90_int = 0; // 0x21 PushI
	var_91_bool = var_12_int > var_90_int; // 0x22 GT
	if(var_91_bool == 0) goto Label_79; // 0x23 JumpB
	var_92_float = 0.24; // 0x24 PushF
	var_93_int = var_11_float / var_92_float; // 0x25 Mod
	var_9_float = var_10_float - var_93_int; // 0x26 Sub2
	var_94_int = GlobalVars[0]; // 0x27 PushGE
	var_95_int = GlobalVars[1]; // 0x28 PushGE
	var_96_int = GlobalVars[2]; // 0x29 PushGE
	GetItemPosByID(var_13_int, var_94_int, var_95_int, var_96_int); // 0x2a Func
	var_97_int = -1; // 0x2c PushI
	var_98_bool = var_13_int != var_97_int; // 0x2d Neq
	if(var_98_bool == 0) goto Label_79; // 0x2e JumpB
	var_99_int = GlobalVars[2]; // 0x2f PushGE
	GetItem(var_14_object, var_13_int, var_99_int); // 0x30 Func
	var_100_string = "durability"; // 0x32 PushS
	HasProperty(var_15_bool, var_100_string); // 0x33 ObjFunc
	var_101_bool = var_15_bool; // 0x35 Push
	if(var_101_bool == 0) goto Label_66; // 0x36 JumpB
	var_102_string = "durability"; // 0x37 PushS
	GetProperty(var_16_int, var_102_string); // 0x38 ObjFunc
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x3a PushV
	var_104_int = var_16_int - var_12_int; // 0x3b Sub2
	var_105_int = 0; // 0x3c MovI
	var_106_int = 100; // 0x3d MovI
	func_201(var_103_int, var_104_int, var_105_int, var_106_int); // 0x3e NEW_2
	var_16_int = var_103_int; // 0x3f Mov
	goto Label_67; // 0x41 Jump
	
Label_67:
	var_109_string = "durability"; // 0x43 PushS
	SetProperty(var_109_string, var_16_int); // 0x44 ObjFunc
	var_110_int = 1; // 0x46 PushI
	var_111_int = GlobalVars[2]; // 0x47 PushGE
	SetItem(var_14_object, var_110_int, var_13_int, var_111_int); // 0x48 Func
	var_112_int = 0; // 0x4a PushV
	var_112_int = var_16_int; // 0x4b Mov
	func_212(var_112_int); // 0x4c NEW_2
	var_14_object = 0; // 0x4e SetNull
	
Label_79:
	sync(); // 0x4f Func
	var_113_bool = var_0_bool; // 0x51 PushT
	if(var_113_bool == 0) goto Label_84; // 0x52 JumpB
	goto Label_85; // 0x53 Jump
	
Label_85:
	return 16; // 0x55 Return
	
Label_84:
	goto Label_28; // 0x54 Jump
	
Label_66:
	var_16_int = 100; // 0x42 MovI
}


func_194(var_55_string, var_56_int)
{
	var_57_int = 0; var_58_int = 0; // 0xc2 PushV
	GetProperty(var_55_string, var_58_int); // 0xc3 Func
	var_59_int = var_58_int + var_56_int; // 0xc5 Add
	SetProperty(var_55_string, var_59_int); // 0xc6 Func
	return 2; // 0xc8 Return
}


func_201(var_103_int, var_104_int, var_105_int, var_106_int)
{
	var_107_bool = var_104_int < var_105_int; // 0xca LT
	if(var_107_bool == 0) goto Label_206; // 0xcb JumpB
	var_103_int = var_105_int; // 0xcc Mov
	return 0; // 0xcd Return
	
Label_206:
	var_108_bool = var_104_int > var_106_int; // 0xce GT
	if(var_108_bool == 0) goto Label_210; // 0xcf JumpB
	var_103_int = var_106_int; // 0xd0 Mov
	return 0; // 0xd1 Return
	
Label_210:
	var_103_int = var_104_int; // 0xd2 Mov
	return 0; // 0xd3 Return
}


func_172(var_7_int, var_8_int, var_9_int)
{
	var_10_bool = 0; // 0xad PushV
	var_10_bool = 0; // 0xae MovB
	var_11_bool = 0; // 0xaf PushV
	var_11_bool = 0; // 0xb0 MovB
	var_12_int = GlobalVars[0]; // 0xb1 PushGE
	var_13_bool = var_7_int == var_12_int; // 0xb2 Eq
	if(var_13_bool == 0) goto Label_184; // 0xb3 JumpB
	var_14_int = GlobalVars[1]; // 0xb4 PushGE
	var_15_bool = var_8_int == var_14_int; // 0xb5 Eq
	if(var_15_bool == 0) goto Label_184; // 0xb6 JumpB
	var_11_bool = 1; // 0xb7 MovB
	
Label_184:
	if(var_11_bool == 0) goto Label_189; // 0xb8 JumpB
	var_16_int = GlobalVars[2]; // 0xb9 PushGE
	var_17_bool = var_16_int == var_9_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_189; // 0xbb JumpB
	var_10_bool = 1; // 0xbc MovB
	
Label_189:
	if(var_10_bool == 0) goto Label_193; // 0xbd JumpB
	func_86(); // 0xbf NEW_2
	
Label_193:
	return 0; // 0xc1 Return
}


func_274(var_44_int, var_45_string, var_46_int, var_47_int, var_48_int)
{
	var_50_int = 0; var_51_int = 0; // 0x112 PushV
	var_52_float = 100.0; // 0x113 PushF
	var_53_float = var_47_int / var_52_float; // 0x114 Div
	var_51_int = var_48_int * var_53_float; // 0x115 Mult2
	var_54_bool = var_51_int != var_46_int; // 0x116 Neq
	if(var_54_bool == 0) goto Label_285; // 0x117 JumpB
	var_55_string = ""; var_56_int = 0; // 0x118 PushV
	var_55_string = var_45_string; // 0x119 Mov
	var_56_int = var_51_int - var_46_int; // 0x11a Sub2
	func_194(var_55_string, var_56_int); // 0x11b NEW_2
	
Label_285:
	var_44_int = var_51_int; // 0x11d Mov
	return 2; // 0x11e Return
}


func_212(var_42_int)
{
	var_43_int = GlobalVars[3]; // 0xd5 PushGE
	var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0xd6 PushV
	var_45_string = "armor"; // 0xd7 MovS
	var_49_int = GlobalVars[3]; // 0xd8 PushGE
	var_46_int = var_49_int; // 0xd9 Mov
	var_47_int = var_42_int; // 0xdb Mov
	var_48_int = 0; // 0xdc MovI
	func_274(var_44_int, var_45_string, var_46_int, var_47_int, var_48_int); // 0xdd NEW_2
	var_43_int = var_44_int; // 0xde Mov
	GlobalVars[3] = var_43_int; // 0xe0 PopGE
	var_60_int = GlobalVars[4]; // 0xe1 PushGE
	var_61_int = 0; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0xe2 PushV
	var_62_string = "armor_fire"; // 0xe3 MovS
	var_66_int = GlobalVars[4]; // 0xe4 PushGE
	var_63_int = var_66_int; // 0xe5 Mov
	var_64_int = var_42_int; // 0xe7 Mov
	var_65_int = 0; // 0xe8 MovI
	func_274(var_61_int, var_62_string, var_63_int, var_64_int, var_65_int); // 0xe9 NEW_2
	var_60_int = var_61_int; // 0xea Mov
	GlobalVars[4] = var_60_int; // 0xec PopGE
	var_67_int = GlobalVars[5]; // 0xed PushGE
	var_68_int = 0; var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0xee PushV
	var_69_string = "armor_phys"; // 0xef MovS
	var_73_int = GlobalVars[5]; // 0xf0 PushGE
	var_70_int = var_73_int; // 0xf1 Mov
	var_71_int = var_42_int; // 0xf3 Mov
	var_72_int = 0; // 0xf4 MovI
	func_274(var_68_int, var_69_string, var_70_int, var_71_int, var_72_int); // 0xf5 NEW_2
	var_67_int = var_68_int; // 0xf6 Mov
	GlobalVars[5] = var_67_int; // 0xf8 PopGE
	var_74_int = GlobalVars[6]; // 0xf9 PushGE
	var_75_int = 0; var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_int = 0; // 0xfa PushV
	var_76_string = "armor_bullet"; // 0xfb MovS
	var_80_int = GlobalVars[6]; // 0xfc PushGE
	var_77_int = var_80_int; // 0xfd Mov
	var_78_int = var_42_int; // 0xff Mov
	var_79_int = 0; // 0x100 MovI
	func_274(var_75_int, var_76_string, var_77_int, var_78_int, var_79_int); // 0x101 NEW_2
	var_74_int = var_75_int; // 0x102 Mov
	GlobalVars[6] = var_74_int; // 0x104 PopGE
	var_81_int = GlobalVars[7]; // 0x105 PushGE
	var_82_int = 0; var_83_string = ""; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x106 PushV
	var_83_string = "armor_disease"; // 0x107 MovS
	var_87_int = GlobalVars[7]; // 0x108 PushGE
	var_84_int = var_87_int; // 0x109 Mov
	var_85_int = var_42_int; // 0x10b Mov
	var_86_int = 10; // 0x10c MovI
	func_274(var_82_int, var_83_string, var_84_int, var_85_int, var_86_int); // 0x10d NEW_2
	var_81_int = var_82_int; // 0x10e Mov
	GlobalVars[7] = var_81_int; // 0x110 PopGE
	return 0; // 0x111 Return
}


func_118()
{
	var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; // 0x76 PushV
	var_31_int = GlobalVars[0]; // 0x77 PushGE
	var_32_int = GlobalVars[1]; // 0x78 PushGE
	var_33_int = GlobalVars[2]; // 0x79 PushGE
	GetItemPosByID(var_27_int, var_31_int, var_32_int, var_33_int); // 0x7a Func
	var_34_int = -1; // 0x7c PushI
	var_35_bool = var_27_int != var_34_int; // 0x7d Neq
	if(var_35_bool == 0) goto Label_152; // 0x7e JumpB
	var_36_int = GlobalVars[2]; // 0x7f PushGE
	GetItem(var_28_object, var_27_int, var_36_int); // 0x80 Func
	var_37_string = "durability"; // 0x82 PushS
	HasProperty(var_29_bool, var_37_string); // 0x83 ObjFunc
	var_38_bool = var_29_bool == 0; // 0x85 Not
	if(var_38_bool == 0) goto Label_144; // 0x86 JumpB
	var_30_int = 100; // 0x87 MovI
	var_39_string = "durability"; // 0x88 PushS
	SetProperty(var_39_string, var_30_int); // 0x89 ObjFunc
	var_40_int = 1; // 0x8b PushI
	var_41_int = GlobalVars[2]; // 0x8c PushGE
	SetItem(var_28_object, var_40_int, var_27_int, var_41_int); // 0x8d Func
	goto Label_147; // 0x8f Jump
	
Label_147:
	var_42_int = 0; // 0x93 PushV
	var_42_int = var_30_int; // 0x94 Mov
	func_212(var_42_int); // 0x95 NEW_2
	var_28_object = 0; // 0x97 SetNull
	
Label_152:
	return 8; // 0x98 Return
	
Label_144:
	var_88_string = "durability"; // 0x90 PushS
	GetProperty(var_30_int, var_88_string); // 0x91 ObjFunc
}


func_153()
{
	return 0; // 0x99 Return
}


