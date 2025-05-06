task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int)
{
	clear(); // 0x54 TObjFunc
	DestroyWindow(); // 0x56 Func
	return 0; // 0x58 Return
}


task_0_event_15(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_float)
{
	var_5_int = var_5_int + var_8_float; // 0x5a Add2
	var_9_int = 0; // 0x5b PushI
	var_10_bool = var_5_int < var_9_int; // 0x5c LT
	if(var_10_bool == 0) goto Label_95; // 0x5d JumpB
	var_5_int = 0; // 0x5e TMovI
	
Label_95:
	func_102(var_8_float); // 0x60 NEW_2
	func_131(var_8_float); // 0x63 NEW_2
	return 0; // 0x65 Return
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int, var_6_int, var_7_string, var_8_object)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; // 0xbb PushV
	var_13_string = "ok"; // 0xbc PushS
	var_14_bool = var_7_string == var_13_string; // 0xbd Eq
	if(var_14_bool == 0) goto Label_195; // 0xbe JumpB
	func_250(); // 0xc0 NEW_2
	goto Label_249; // 0xc2 Jump
	
Label_249:
	return 4; // 0xf9 Return
	
Label_195:
	var_15_string = "cancel"; // 0xc3 PushS
	var_16_bool = var_7_string == var_15_string; // 0xc4 Eq
	if(var_16_bool == 0) goto Label_202; // 0xc5 JumpB
	func_253(var_11_int, var_12_int); // 0xc7 NEW_2
	goto Label_249; // 0xc9 Jump
	
Label_202:
	var_70_string = "scrollbar"; // 0xca PushS
	var_71_bool = var_7_string == var_70_string; // 0xcb Eq
	if(var_71_bool == 0) goto Label_225; // 0xcc JumpB
	size(var_11_int); // 0xcd TObjFunc
	var_72_float = 0.01; // 0xcf PushF
	var_73_int = 4; // 0xd0 PushI
	var_74_int = var_11_int - var_73_int; // 0xd1 Sub
	var_75_float = var_72_float * var_74_int; // 0xd2 Mult
	var_76_float = var_75_float * var_6_int; // 0xd3 Mult
	var_77_float = 0.5; // 0xd4 PushF
	var_5_int = var_76_float + var_77_float; // 0xd5 Add2
	var_78_int = 0; // 0xd6 PushI
	var_79_bool = var_5_int < var_78_int; // 0xd7 LT
	if(var_79_bool == 0) goto Label_218; // 0xd8 JumpB
	var_5_int = 0; // 0xd9 TMovI
	
Label_218:
	func_102(var_12_int); // 0xdb NEW_2
	func_131(var_12_int); // 0xde NEW_2
	goto Label_249; // 0xe0 Jump
	
Label_225:
	var_99_int = 0; var_100_int = 0; var_101_string = ""; // 0xe1 PushV
	var_100_int = var_6_int; // 0xe2 Mov
	var_101_string = var_7_string; // 0xe3 Mov
	func_298(var_100_int, var_101_string); // 0xe4 NEW_2
	var_12_int = var_99_int; // 0xe5 Mov
	var_110_int = -1; // 0xe7 PushI
	var_111_bool = var_12_int != var_110_int; // 0xe8 Neq
	if(var_111_bool == 0) goto Label_249; // 0xe9 JumpB
	var_112_int = 0; // 0xea PushI
	var_113_bool = var_6_int == var_112_int; // 0xeb Eq
	if(var_113_bool == 0) goto Label_242; // 0xec JumpB
	var_114_int = 0; // 0xed PushV
	var_114_int = var_12_int + var_5_int; // 0xee Add2
	func_264(var_114_int); // 0xef NEW_2
	goto Label_249; // 0xf1 Jump
	
Label_242:
	var_121_int = 1; // 0xf2 PushI
	var_122_bool = var_6_int == var_121_int; // 0xf3 Eq
	if(var_122_bool == 0) goto Label_249; // 0xf4 JumpB
	var_123_int = 0; // 0xf5 PushV
	var_123_int = var_12_int + var_5_int; // 0xf6 Add2
	func_273(var_123_int); // 0xf7 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_int, var_4_int, var_5_int)
{
	var_6_string = "default"; // 0x0 PushS
	SetCursor(var_6_string); // 0x1 Func
	ShowCursor(); // 0x3 Func
	CaptureKeyboard(); // 0x5 Func
	var_7_bool = 0; // 0x7 PushB
	SetOwnerDraw(var_7_bool); // 0x8 Func
	var_8_int = 0; // 0xa PushV
	func_316(var_8_int); // 0xb NEW_2
	var_3_int = var_8_int; // 0xc TMov
	GetChooseItems(var_0_object); // 0xe Func
	GetAdditionalData(var_5_int); // 0x10 Func
	GetReturnValue(var_4_int); // 0x12 Func
	func_102(var_5_int); // 0x15 NEW_2
	func_131(var_5_int); // 0x18 NEW_2
	ProcessEvents(); // 0x1a Func
	return 0; // 0x1c Return
}


func_131(var_5_int)
{
	var_34_int = 0; var_35_int = 0; var_36_object = Obj(); var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_object = Obj(); var_41_int = 0; // 0x83 PushV
	var_42_int = 0; // 0x84 PushV
	func_316(var_42_int); // 0x85 NEW_2
	var_43_string = "money_slot"; // 0x87 PushS
	SendMessage(var_42_int, var_43_string); // 0x88 Func
	var_44_string = "sel_money_slot"; // 0x8a PushS
	SendMessage(var_39_int, var_44_string); // 0x8b Func
	size(var_38_int); // 0x8d TObjFunc
	var_39_int = var_5_int; // 0x8f MovT
	
Label_144:
	var_45_int = 4; // 0x90 PushI
	var_46_int = var_5_int + var_45_int; // 0x91 Add
	var_47_bool = var_39_int < var_46_int; // 0x92 LT
	if(var_47_bool == 0) goto Label_186; // 0x93 JumpB
	var_48_bool = var_39_int < var_38_int; // 0x94 LT
	if(var_48_bool == 0) goto Label_176; // 0x95 JumpB
	get(var_40_object, var_39_int); // 0x96 TObjFunc
	get(var_41_int, var_39_int); // 0x98 TObjFunc
	var_49_bool = 0; var_50_int = 0; // 0x9a PushV
	var_50_int = var_39_int; // 0x9b Mov
	func_29(var_49_bool, var_50_int); // 0x9c NEW_2
	if(var_49_bool == 0) goto Label_168; // 0x9e JumpB
	var_60_int = 16384; // 0x9f PushI
	var_61_int = var_60_int | var_41_int; // 0xa0 Or
	var_62_string = ""; var_63_int = 0; // 0xa1 PushV
	var_63_int = var_39_int - var_5_int; // 0xa2 Sub2
	func_282(var_62_string, var_63_int); // 0xa3 NEW_2
	SendMessage(var_61_int, var_62_string, var_40_object); // 0xa5 Func
	goto Label_174; // 0xa7 Jump
	
Label_174:
	var_40_object = 0; // 0xae SetNull
	goto Label_183; // 0xaf Jump
	
Label_183:
	var_74_int = 1; // 0xb7 PushI
	var_39_int = var_39_int + var_74_int; // 0xb8 Add2
	goto Label_144; // 0xb9 Jump
	
Label_168:
	var_75_string = ""; var_76_int = 0; // 0xa8 PushV
	var_76_int = var_39_int - var_5_int; // 0xa9 Sub2
	func_282(var_75_string, var_76_int); // 0xaa NEW_2
	SendMessage(var_41_int, var_75_string, var_40_object); // 0xac Func
	
Label_176:
	var_77_int = 32768; // 0xb0 PushI
	var_78_string = ""; var_79_int = 0; // 0xb1 PushV
	var_79_int = var_39_int - var_5_int; // 0xb2 Sub2
	func_282(var_78_string, var_79_int); // 0xb3 NEW_2
	SendMessage(var_77_int, var_78_string); // 0xb5 Func
	
Label_186:
	return 8; // 0xba Return
}


func_102(var_5_int)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0x66 PushV
	size(var_17_int); // 0x67 TObjFunc
	var_19_int = 4; // 0x69 PushI
	var_20_bool = var_17_int <= var_19_int; // 0x6a LE
	if(var_20_bool == 0) goto Label_114; // 0x6b JumpB
	var_21_int = 16384; // 0x6c PushI
	var_22_string = "scrollbar"; // 0x6d PushS
	SendMessage(var_21_int, var_22_string); // 0x6e Func
	var_5_int = 0; // 0x70 TMovI
	goto Label_130; // 0x71 Jump
	
Label_130:
	return 4; // 0x82 Return
	
Label_114:
	var_23_int = 4; // 0x72 PushI
	var_24_int = var_5_int + var_23_int; // 0x73 Add
	var_25_bool = var_24_int > var_17_int; // 0x74 GT
	if(var_25_bool == 0) goto Label_130; // 0x75 JumpB
	var_26_int = 4; // 0x76 PushI
	var_27_int = var_5_int + var_26_int; // 0x77 Add
	var_28_int = var_27_int - var_17_int; // 0x78 Sub
	var_5_int = var_5_int - var_28_int; // 0x79 Sub2
	var_29_int = 100; // 0x7a PushI
	var_30_float = var_5_int * var_29_int; // 0x7b Mult
	var_31_int = 4; // 0x7c PushI
	var_32_int = var_17_int - var_31_int; // 0x7d Sub
	var_18_int = var_30_float / var_30_float; // 0x7e Div2
	var_33_string = "scrollbar"; // 0x7f PushS
	SendMessage(var_18_int, var_33_string); // 0x80 Func
}


func_264(var_114_int)
{
	var_115_int = 0; // 0x109 PushV
	var_115_int = var_114_int; // 0x10a Mov
	func_46(var_12_int, var_114_int, var_115_int); // 0x10b NEW_2
	func_131(var_114_int); // 0x10e NEW_2
	return 0; // 0x110 Return
}


func_298(var_99_int, var_101_string)
{
	var_102_int = 0; var_103_int = 0; // 0x12a PushV
	var_103_int = 0; // 0x12b MovI
	
Label_300:
	var_104_int = 4; // 0x12c PushI
	var_105_bool = var_103_int < var_104_int; // 0x12d LT
	if(var_105_bool == 0) goto Label_314; // 0x12e JumpB
	var_106_string = ""; var_107_int = 0; // 0x12f PushV
	var_107_int = var_103_int; // 0x130 Mov
	func_282(var_106_string, var_107_int); // 0x131 NEW_2
	var_108_bool = var_101_string == var_106_string; // 0x133 Eq
	if(var_108_bool == 0) goto Label_311; // 0x134 JumpB
	var_99_int = var_103_int; // 0x135 Mov
	return 2; // 0x136 Return
	
Label_311:
	var_109_int = 1; // 0x137 PushI
	var_103_int = var_103_int + var_109_int; // 0x138 Add2
	goto Label_300; // 0x139 Jump
	
Label_314:
	var_99_int = -1; // 0x13a MovI
	return 2; // 0x13b Return
}


func_250()
{
	DestroyWindow(); // 0xfa Func
	return 0; // 0xfc Return
}


func_46(var_3_int, var_4_int, var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0x2e PushV
	var_118_bool = 0; var_119_int = 0; // 0x2f PushV
	var_119_int = var_115_int; // 0x30 Mov
	func_29(var_118_bool, var_119_int); // 0x31 NEW_2
	if(var_118_bool == 0) goto Label_53; // 0x33 JumpB
	return 2; // 0x34 Return
	
Label_53:
	get(var_117_int, var_115_int); // 0x35 TObjFunc
	var_120_bool = var_3_int >= var_117_int; // 0x37 GE
	if(var_120_bool == 0) goto Label_61; // 0x38 JumpB
	var_3_int = var_3_int - var_117_int; // 0x39 Sub2
	var_4_int = var_4_int + var_117_int; // 0x3a Add2
	add(var_115_int); // 0x3b TObjFunc
	
Label_61:
	return 2; // 0x3d Return
}


func_273(var_123_int)
{
	var_124_int = 0; // 0x112 PushV
	var_124_int = var_123_int; // 0x113 Mov
	func_62(var_12_int, var_123_int, var_124_int); // 0x114 NEW_2
	func_131(var_123_int); // 0x117 NEW_2
	return 0; // 0x119 Return
}


func_253(var_3_int, var_4_int)
{
	clear(); // 0xfd TObjFunc
	var_17_int = 0; // 0xff PushV
	func_316(var_17_int); // 0x100 NEW_2
	var_3_int = var_17_int; // 0x101 TMov
	var_4_int = 0; // 0x103 TMovI
	func_131(var_12_int); // 0x105 NEW_2
	return 0; // 0x107 Return
}


func_282(var_62_string, var_63_int)
{
	var_64_int = 1; // 0x11b PushI
	var_65_int = var_63_int + var_64_int; // 0x11c Add
	var_66_int = 10; // 0x11d PushI
	var_67_bool = var_65_int < var_66_int; // 0x11e LT
	if(var_67_bool == 0) goto Label_293; // 0x11f JumpB
	var_68_string = "slot0"; // 0x120 PushS
	var_69_int = 1; // 0x121 PushI
	var_70_int = var_63_int + var_69_int; // 0x122 Add
	var_62_string = var_68_string + var_70_int; // 0x123 Add2
	return 0; // 0x124 Return
	
Label_293:
	var_71_string = "slot"; // 0x125 PushS
	var_72_int = 1; // 0x126 PushI
	var_73_int = var_63_int + var_72_int; // 0x127 Add
	var_62_string = var_71_string + var_73_int; // 0x128 Add2
	return 0; // 0x129 Return
}


func_316(var_8_int)
{
	var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0; // 0x13c PushV
	var_13_string = "player"; // 0x13d PushS
	FindActor(var_11_object, var_13_string); // 0x13e Func
	var_14_string = "money"; // 0x140 PushS
	GetProperty(var_14_string, var_12_int); // 0x141 ObjFunc
	var_8_int = var_12_int; // 0x143 Mov
	return 4; // 0x144 Return
}


func_29(var_49_bool, var_50_int)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x1d PushV
	size(var_54_int); // 0x1e TObjFunc
	var_55_int = 0; // 0x20 MovI
	
Label_33:
	var_57_bool = var_55_int < var_54_int; // 0x21 LT
	if(var_57_bool == 0) goto Label_44; // 0x22 JumpB
	get(var_56_int, var_55_int); // 0x23 TObjFunc
	var_58_bool = var_56_int == var_50_int; // 0x25 Eq
	if(var_58_bool == 0) goto Label_41; // 0x26 JumpB
	var_49_bool = 1; // 0x27 MovB
	return 6; // 0x28 Return
	
Label_41:
	var_59_int = 1; // 0x29 PushI
	var_55_int = var_55_int + var_59_int; // 0x2a Add2
	goto Label_33; // 0x2b Jump
	
Label_44:
	var_49_bool = 0; // 0x2c MovB
	return 6; // 0x2d Return
}


func_62(var_3_int, var_4_int, var_124_int)
{
	var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x3e PushV
	size(var_129_int); // 0x3f TObjFunc
	var_130_int = 0; // 0x41 MovI
	
Label_66:
	var_133_bool = var_130_int < var_129_int; // 0x42 LT
	if(var_133_bool == 0) goto Label_82; // 0x43 JumpB
	get(var_131_int, var_130_int); // 0x44 TObjFunc
	var_134_bool = var_131_int == var_124_int; // 0x46 Eq
	if(var_134_bool == 0) goto Label_79; // 0x47 JumpB
	remove(var_130_int); // 0x48 TObjFunc
	get(var_132_int, var_124_int); // 0x4a TObjFunc
	var_3_int = var_3_int + var_132_int; // 0x4c Add2
	var_4_int = var_4_int - var_132_int; // 0x4d Sub2
	goto Label_82; // 0x4e Jump
	
Label_82:
	return 8; // 0x52 Return
	
Label_79:
	var_135_int = 1; // 0x4f PushI
	var_130_int = var_130_int + var_135_int; // 0x50 Add2
	goto Label_66; // 0x51 Jump
}


