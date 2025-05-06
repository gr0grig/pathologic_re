	task_0_event_32(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_7_int, var_8_int, var_9_int)
	{
	var_18_string = ""; var_19_int = 0; // 0x56 PushV
	var_18_string = "armor"; // 0x57 MovS
	var_20_int = GlobalVars[3]; // 0x58 PushGE
	var_19_int = -var_20_int; // 0x59 Neg2
	func_200(var_18_string, var_19_int); // 0x5a Call
	var_24_string = ""; var_25_int = 0; // 0x5c PushV
	var_24_string = "armor_fire"; // 0x5d MovS
	var_26_int = GlobalVars[4]; // 0x5e PushGE
	var_25_int = -var_26_int; // 0x5f Neg2
	func_200(var_24_string, var_25_int); // 0x60 Call
	var_27_string = ""; var_28_int = 0; // 0x62 PushV
	var_27_string = "armor_phys"; // 0x63 MovS
	var_29_int = GlobalVars[5]; // 0x64 PushGE
	var_28_int = -var_29_int; // 0x65 Neg2
	func_200(var_27_string, var_28_int); // 0x66 Call
	var_30_string = ""; var_31_int = 0; // 0x68 PushV
	var_30_string = "armor_disease"; // 0x69 MovS
	var_32_int = GlobalVars[6]; // 0x6a PushGE
	var_31_int = -var_32_int; // 0x6b Neg2
	func_200(var_30_string, var_31_int); // 0x6c Call
	var_33_string = ""; var_34_int = 0; // 0x6e PushV
	var_33_string = "visibility"; // 0x6f MovS
	var_35_int = GlobalVars[7]; // 0x70 PushGE
	var_34_int = -var_35_int; // 0x71 Neg2
	func_200(var_33_string, var_34_int); // 0x72 Call
	var_36_string = ""; var_37_int = 0; // 0x74 PushV
	var_36_string = "audibility"; // 0x75 MovS
	var_38_int = GlobalVars[8]; // 0x76 PushGE
	var_37_int = -var_38_int; // 0x77 Neg2
	func_200(var_36_string, var_37_int); // 0x78 Call
	var_0_bool = 1; // 0x7a TMovB
	return 0; // 0x7b Return
	}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; // 0xa1 PushV
	var_5_int = var_2_int; // 0xa2 Mov
	var_6_int = var_3_int; // 0xa3 Mov
	var_7_int = var_4_int; // 0xa4 Mov
	func_178(var_5_int, var_6_int, var_7_int); // 0xa5 Call
	return 0; // 0xa7 Return
}


task_0_event_35(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int)
{
	var_6_bool = var_4_bool == 0; // 0xa9 Not
	if(var_6_bool == 0) goto Label_177; // 0xaa JumpB
	var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0xab PushV
	var_7_int = var_2_int; // 0xac Mov
	var_8_int = var_3_int; // 0xad Mov
	var_9_int = var_5_int; // 0xae Mov
	func_178(var_7_int, var_8_int, var_9_int); // 0xaf Call
	
Label_177:
	return 0; // 0xb1 Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_float, var_4_float)
{
	var_5_int = 0; var_6_int = 0; var_7_float = 0; var_8_int = 0; var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_float = 0; var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_int = 0; // 0x131 PushV
	var_21_int = 5; // 0x132 PushI
	var_22_bool = var_2_int == var_21_int; // 0x133 Eq
	if(var_22_bool == 0) goto Label_310; // 0x134 JumpB
	goto Label_380; // 0x135 Jump
	
Label_380:
	return 16; // 0x17c Return
	
Label_310:
	var_23_int = GlobalVars[3]; // 0x136 PushGE
	var_13_int = var_23_int; // 0x137 Mov
	var_24_int = 4; // 0x139 PushI
	var_25_bool = var_2_int == var_24_int; // 0x13a Eq
	if(var_25_bool == 0) goto Label_319; // 0x13b JumpB
	var_26_int = GlobalVars[4]; // 0x13c PushGE
	var_13_int = var_13_int + var_26_int; // 0x13d Add2
	goto Label_321; // 0x13e Jump
	
Label_321:
	var_27_string = "armor"; // 0x141 PushS
	GetProperty(var_27_string, var_14_int); // 0x142 Func
	var_28_bool = var_14_int == 0; // 0x144 Not
	if(var_28_bool == 0) goto Label_328; // 0x145 JumpB
	var_15_float = 1; // 0x146 MovI
	goto Label_331; // 0x147 Jump
	
Label_331:
	var_29_float = 0.75; // 0x14b PushF
	var_15_float = var_15_float * var_29_float; // 0x14c Mult2
	var_30_int = 0; // 0x14d PushI
	var_31_bool = var_15_float > var_30_int; // 0x14e GT
	if(var_31_bool == 0) goto Label_380; // 0x14f JumpB
	var_32_int = GlobalVars[0]; // 0x150 PushGE
	var_33_int = GlobalVars[1]; // 0x151 PushGE
	var_34_int = GlobalVars[2]; // 0x152 PushGE
	GetItemPosByID(var_16_int, var_32_int, var_33_int, var_34_int); // 0x153 Func
	var_35_int = -1; // 0x155 PushI
	var_36_bool = var_16_int != var_35_int; // 0x156 Neq
	if(var_36_bool == 0) goto Label_380; // 0x157 JumpB
	var_37_int = GlobalVars[2]; // 0x158 PushGE
	GetItem(var_17_object, var_16_int, var_37_int); // 0x159 Func
	var_38_string = "durability"; // 0x15b PushS
	HasProperty(var_18_bool, var_38_string); // 0x15c ObjFunc
	var_39_bool = var_18_bool; // 0x15e Push
	if(var_39_bool == 0) goto Label_379; // 0x15f JumpB
	var_40_int = 0; // 0x160 PushV
	var_41_float = var_15_float * var_4_float; // 0x161 Mult
	var_42_float = 100.0; // 0x162 PushF
	var_40_int = var_41_float * var_42_float; // 0x163 Mult2
	var_19_int = var_40_int; // 0x164 Mov
	var_43_string = "durability"; // 0x166 PushS
	GetProperty(var_20_int, var_43_string); // 0x167 ObjFunc
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0x169 PushV
	var_45_int = var_20_int - var_19_int; // 0x16a Sub2
	var_46_int = 0; // 0x16b MovI
	var_47_int = 100; // 0x16c MovI
	func_207(var_44_int, var_45_int, var_46_int, var_47_int); // 0x16d Call
	var_20_int = var_44_int; // 0x16e Mov
	var_50_string = "durability"; // 0x170 PushS
	SetProperty(var_50_string, var_20_int); // 0x171 ObjFunc
	var_51_int = 1; // 0x173 PushI
	var_52_int = GlobalVars[2]; // 0x174 PushGE
	SetItem(var_17_object, var_51_int, var_16_int, var_52_int); // 0x175 Func
	var_53_int = 0; // 0x177 PushV
	var_53_int = var_20_int; // 0x178 Mov
	func_218(var_53_int); // 0x179 Call
	
Label_379:
	var_17_object = 0; // 0x17b SetNull
	
Label_328:
	var_106_float = 0; // 0x148 PushV
	var_106_float = var_13_int; // 0x149 Mov
	var_15_float = var_106_float / var_106_float; // 0x14a Div2
	
Label_319:
	var_107_int = GlobalVars[5]; // 0x13f PushGE
	var_13_int = var_13_int + var_107_int; // 0x140 Add2
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
	func_159(); // 0x15 Call
	func_124(); // 0x18 Call
	GetGameTime(var_9_float); // 0x1a Func
	
Label_28:
	GetGameTime(var_10_float); // 0x1c Func
	var_11_float = var_10_float - var_9_float; // 0x1e Sub2
	var_96_float = 1.2; // 0x1f PushF
	var_12_int = var_11_float / var_11_float; // 0x20 Div2
	var_97_int = 0; // 0x21 PushI
	var_98_bool = var_12_int > var_97_int; // 0x22 GT
	if(var_98_bool == 0) goto Label_79; // 0x23 JumpB
	var_99_float = 1.2; // 0x24 PushF
	var_100_int = var_11_float / var_99_float; // 0x25 Mod
	var_9_float = var_10_float - var_100_int; // 0x26 Sub2
	var_101_int = GlobalVars[0]; // 0x27 PushGE
	var_102_int = GlobalVars[1]; // 0x28 PushGE
	var_103_int = GlobalVars[2]; // 0x29 PushGE
	GetItemPosByID(var_13_int, var_101_int, var_102_int, var_103_int); // 0x2a Func
	var_104_int = -1; // 0x2c PushI
	var_105_bool = var_13_int != var_104_int; // 0x2d Neq
	if(var_105_bool == 0) goto Label_79; // 0x2e JumpB
	var_106_int = GlobalVars[2]; // 0x2f PushGE
	GetItem(var_14_object, var_13_int, var_106_int); // 0x30 Func
	var_107_string = "durability"; // 0x32 PushS
	HasProperty(var_15_bool, var_107_string); // 0x33 ObjFunc
	var_108_bool = var_15_bool; // 0x35 Push
	if(var_108_bool == 0) goto Label_66; // 0x36 JumpB
	var_109_string = "durability"; // 0x37 PushS
	GetProperty(var_16_int, var_109_string); // 0x38 ObjFunc
	var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; // 0x3a PushV
	var_111_int = var_16_int - var_12_int; // 0x3b Sub2
	var_112_int = 0; // 0x3c MovI
	var_113_int = 100; // 0x3d MovI
	func_207(var_110_int, var_111_int, var_112_int, var_113_int); // 0x3e Call
	var_16_int = var_110_int; // 0x3f Mov
	goto Label_67; // 0x41 Jump
	
Label_67:
	var_116_string = "durability"; // 0x43 PushS
	SetProperty(var_116_string, var_16_int); // 0x44 ObjFunc
	var_117_int = 1; // 0x46 PushI
	var_118_int = GlobalVars[2]; // 0x47 PushGE
	SetItem(var_14_object, var_117_int, var_13_int, var_118_int); // 0x48 Func
	var_119_int = 0; // 0x4a PushV
	var_119_int = var_16_int; // 0x4b Mov
	func_218(var_119_int); // 0x4c Call
	var_14_object = 0; // 0x4e SetNull
	
Label_79:
	sync(); // 0x4f Func
	var_120_bool = var_0_bool; // 0x51 PushT
	if(var_120_bool == 0) goto Label_84; // 0x52 JumpB
	goto Label_85; // 0x53 Jump
	
Label_85:
	return 16; // 0x55 Return
	
Label_84:
	goto Label_28; // 0x54 Jump
	
Label_66:
	var_16_int = 100; // 0x42 MovI
}


func_292(var_44_int, var_45_string, var_46_int, var_47_int, var_48_int)
{
	var_50_int = 0; var_51_int = 0; // 0x124 PushV
	var_52_float = 100.0; // 0x125 PushF
	var_53_float = var_47_int / var_52_float; // 0x126 Div
	var_51_int = var_48_int * var_53_float; // 0x127 Mult2
	var_54_bool = var_51_int != var_46_int; // 0x128 Neq
	if(var_54_bool == 0) goto Label_303; // 0x129 JumpB
	var_55_string = ""; var_56_int = 0; // 0x12a PushV
	var_55_string = var_45_string; // 0x12b Mov
	var_56_int = var_51_int - var_46_int; // 0x12c Sub2
	func_200(var_55_string, var_56_int); // 0x12d Call
	
Label_303:
	var_44_int = var_51_int; // 0x12f Mov
	return 2; // 0x130 Return
}


func_200(var_55_string, var_56_int)
{
	var_57_int = 0; var_58_int = 0; // 0xc8 PushV
	GetProperty(var_55_string, var_58_int); // 0xc9 Func
	var_59_int = var_58_int + var_56_int; // 0xcb Add
	SetProperty(var_55_string, var_59_int); // 0xcc Func
	return 2; // 0xce Return
}


func_207(var_110_int, var_111_int, var_112_int, var_113_int)
{
	var_114_bool = var_111_int < var_112_int; // 0xd0 LT
	if(var_114_bool == 0) goto Label_212; // 0xd1 JumpB
	var_110_int = var_112_int; // 0xd2 Mov
	return 0; // 0xd3 Return
	
Label_212:
	var_115_bool = var_111_int > var_113_int; // 0xd4 GT
	if(var_115_bool == 0) goto Label_216; // 0xd5 JumpB
	var_110_int = var_113_int; // 0xd6 Mov
	return 0; // 0xd7 Return
	
Label_216:
	var_110_int = var_111_int; // 0xd8 Mov
	return 0; // 0xd9 Return
}


func_178(var_7_int, var_8_int, var_9_int)
{
	var_10_bool = 0; // 0xb3 PushV
	var_10_bool = 0; // 0xb4 MovB
	var_11_bool = 0; // 0xb5 PushV
	var_11_bool = 0; // 0xb6 MovB
	var_12_int = GlobalVars[0]; // 0xb7 PushGE
	var_13_bool = var_7_int == var_12_int; // 0xb8 Eq
	if(var_13_bool == 0) goto Label_190; // 0xb9 JumpB
	var_14_int = GlobalVars[1]; // 0xba PushGE
	var_15_bool = var_8_int == var_14_int; // 0xbb Eq
	if(var_15_bool == 0) goto Label_190; // 0xbc JumpB
	var_11_bool = 1; // 0xbd MovB
	
Label_190:
	if(var_11_bool == 0) goto Label_195; // 0xbe JumpB
	var_16_int = GlobalVars[2]; // 0xbf PushGE
	var_17_bool = var_16_int == var_9_int; // 0xc0 Eq
	if(var_17_bool == 0) goto Label_195; // 0xc1 JumpB
	var_10_bool = 1; // 0xc2 MovB
	
Label_195:
	if(var_10_bool == 0) goto Label_199; // 0xc3 JumpB
	func_86(); // 0xc5 Call
	
Label_199:
	return 0; // 0xc7 Return
}


func_218(var_42_int)
{
	var_43_int = GlobalVars[3]; // 0xdb PushGE
	var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0xdc PushV
	var_45_string = "armor"; // 0xdd MovS
	var_49_int = GlobalVars[3]; // 0xde PushGE
	var_46_int = var_49_int; // 0xdf Mov
	var_47_int = var_42_int; // 0xe1 Mov
	var_48_int = 10; // 0xe2 MovI
	func_292(var_44_int, var_45_string, var_46_int, var_47_int, var_48_int); // 0xe3 Call
	var_43_int = var_44_int; // 0xe4 Mov
	GlobalVars[3] = var_43_int; // 0xe6 PopGE
	var_60_int = GlobalVars[4]; // 0xe7 PushGE
	var_61_int = 0; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0xe8 PushV
	var_62_string = "armor_fire"; // 0xe9 MovS
	var_66_int = GlobalVars[4]; // 0xea PushGE
	var_63_int = var_66_int; // 0xeb Mov
	var_64_int = var_42_int; // 0xed Mov
	var_65_int = 10; // 0xee MovI
	func_292(var_61_int, var_62_string, var_63_int, var_64_int, var_65_int); // 0xef Call
	var_60_int = var_61_int; // 0xf0 Mov
	GlobalVars[4] = var_60_int; // 0xf2 PopGE
	var_67_int = GlobalVars[5]; // 0xf3 PushGE
	var_68_int = 0; var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0xf4 PushV
	var_69_string = "armor_phys"; // 0xf5 MovS
	var_73_int = GlobalVars[5]; // 0xf6 PushGE
	var_70_int = var_73_int; // 0xf7 Mov
	var_71_int = var_42_int; // 0xf9 Mov
	var_72_int = 0; // 0xfa MovI
	func_292(var_68_int, var_69_string, var_70_int, var_71_int, var_72_int); // 0xfb Call
	var_67_int = var_68_int; // 0xfc Mov
	GlobalVars[5] = var_67_int; // 0xfe PopGE
	var_74_int = GlobalVars[6]; // 0xff PushGE
	var_75_int = 0; var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_int = 0; // 0x100 PushV
	var_76_string = "armor_disease"; // 0x101 MovS
	var_80_int = GlobalVars[6]; // 0x102 PushGE
	var_77_int = var_80_int; // 0x103 Mov
	var_78_int = var_42_int; // 0x105 Mov
	var_79_int = 40; // 0x106 MovI
	func_292(var_75_int, var_76_string, var_77_int, var_78_int, var_79_int); // 0x107 Call
	var_74_int = var_75_int; // 0x108 Mov
	GlobalVars[6] = var_74_int; // 0x10a PopGE
	var_81_int = GlobalVars[7]; // 0x10b PushGE
	var_82_int = 0; var_83_string = ""; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x10c PushV
	var_83_string = "visibility"; // 0x10d MovS
	var_87_int = GlobalVars[7]; // 0x10e PushGE
	var_84_int = var_87_int; // 0x10f Mov
	var_85_int = var_42_int; // 0x111 Mov
	var_86_int = 0; // 0x112 MovI
	func_292(var_82_int, var_83_string, var_84_int, var_85_int, var_86_int); // 0x113 Call
	var_81_int = var_82_int; // 0x114 Mov
	GlobalVars[7] = var_81_int; // 0x116 PopGE
	var_88_int = GlobalVars[8]; // 0x117 PushGE
	var_89_int = 0; var_90_string = ""; var_91_int = 0; var_92_int = 0; var_93_int = 0; // 0x118 PushV
	var_90_string = "audibility"; // 0x119 MovS
	var_94_int = GlobalVars[8]; // 0x11a PushGE
	var_91_int = var_94_int; // 0x11b Mov
	var_92_int = var_42_int; // 0x11d Mov
	var_93_int = -10; // 0x11e MovI
	func_292(var_89_int, var_90_string, var_91_int, var_92_int, var_93_int); // 0x11f Call
	var_88_int = var_89_int; // 0x120 Mov
	GlobalVars[8] = var_88_int; // 0x122 PopGE
	return 0; // 0x123 Return
}


func_124()
{
	var_23_int = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; // 0x7c PushV
	var_31_int = GlobalVars[0]; // 0x7d PushGE
	var_32_int = GlobalVars[1]; // 0x7e PushGE
	var_33_int = GlobalVars[2]; // 0x7f PushGE
	GetItemPosByID(var_27_int, var_31_int, var_32_int, var_33_int); // 0x80 Func
	var_34_int = -1; // 0x82 PushI
	var_35_bool = var_27_int != var_34_int; // 0x83 Neq
	if(var_35_bool == 0) goto Label_158; // 0x84 JumpB
	var_36_int = GlobalVars[2]; // 0x85 PushGE
	GetItem(var_28_object, var_27_int, var_36_int); // 0x86 Func
	var_37_string = "durability"; // 0x88 PushS
	HasProperty(var_29_bool, var_37_string); // 0x89 ObjFunc
	var_38_bool = var_29_bool == 0; // 0x8b Not
	if(var_38_bool == 0) goto Label_150; // 0x8c JumpB
	var_30_int = 100; // 0x8d MovI
	var_39_string = "durability"; // 0x8e PushS
	SetProperty(var_39_string, var_30_int); // 0x8f ObjFunc
	var_40_int = 1; // 0x91 PushI
	var_41_int = GlobalVars[2]; // 0x92 PushGE
	SetItem(var_28_object, var_40_int, var_27_int, var_41_int); // 0x93 Func
	goto Label_153; // 0x95 Jump
	
Label_153:
	var_42_int = 0; // 0x99 PushV
	var_42_int = var_30_int; // 0x9a Mov
	func_218(var_42_int); // 0x9b Call
	var_28_object = 0; // 0x9d SetNull
	
Label_158:
	return 8; // 0x9e Return
	
Label_150:
	var_95_string = "durability"; // 0x96 PushS
	GetProperty(var_30_int, var_95_string); // 0x97 ObjFunc
}


func_159()
{
	return 0; // 0x9f Return
}


