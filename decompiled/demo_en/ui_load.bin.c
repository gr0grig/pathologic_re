task_0_event_100(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 1; // 0x1d PushI
	SendMessageToParent(var_12_int); // 0x1e Func
	return 0; // 0x20 Return
}


task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x5b PushV
	var_12_int = 0; var_13_int = 0; // 0x5c PushV
	var_13_int = var_1_int; // 0x5d MovT
	func_100(var_12_int, var_13_int); // 0x5e NEW_2
	var_11_int = var_12_int; // 0x5f Mov
	func_103(var_9_object, var_10_object, var_11_int); // 0x61 NEW_2
	return 0; // 0x63 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_string, var_13_object)
{
	var_14_string = "scrollbar"; // 0x132 PushS
	var_15_bool = var_12_string == var_14_string; // 0x133 Eq
	if(var_15_bool == 0) goto Label_320; // 0x134 JumpB
	var_16_int = -var_11_int; // 0x135 Neg
	var_17_int = 0; // 0x136 PushV
	func_476(var_17_int); // 0x137 NEW_2
	var_21_int = var_17_int - var_5_int; // 0x139 Sub
	var_22_float = var_16_int * var_21_int; // 0x13a Mult
	var_23_int = 100; // 0x13b PushI
	var_1_int = var_22_float / var_22_float; // 0x13c Div2
	func_484(var_12_string, var_13_object); // 0x13e NEW_2
	
Label_320:
	return 0; // 0x140 Return
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; // 0x141 PushV
	var_16_int = 0; // 0x142 PushV
	func_474(var_16_int); // 0x143 NEW_2
	var_17_float = var_13_float * var_16_int; // 0x145 Mult
	var_18_int = 2; // 0x146 PushI
	var_15_int = var_17_float / var_17_float; // 0x147 Div2
	var_1_int = var_1_int + var_15_int; // 0x148 Add2
	func_484(var_14_int, var_15_int); // 0x14a NEW_2
	return 2; // 0x14c Return
}


task_0_event_2(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x14e PushV
	var_14_int = var_11_int; // 0x14f Mov
	var_15_int = var_12_int; // 0x150 Mov
	func_396(var_12_int, var_13_int, var_14_int, var_15_int); // 0x151 NEW_2
	var_2_int = var_13_int; // 0x152 TMov
	var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x154 PushV
	var_37_int = var_11_int; // 0x155 Mov
	var_38_int = var_12_int; // 0x156 Mov
	func_435(var_12_int, var_36_int, var_37_int, var_38_int); // 0x157 NEW_2
	var_3_int = var_36_int; // 0x158 TMov
	return 0; // 0x15a Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x15b PushV
	var_17_int = -1; // 0x15c PushI
	var_18_bool = var_2_int != var_17_int; // 0x15d Neq
	if(var_18_bool == 0) goto Label_368; // 0x15e JumpB
	var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x15f PushV
	var_20_int = var_11_int; // 0x160 Mov
	var_21_int = var_12_int; // 0x161 Mov
	func_396(var_16_object, var_19_int, var_20_int, var_21_int); // 0x162 NEW_2
	var_2_int = var_19_int; // 0x163 TMov
	var_42_int = -1; // 0x165 PushI
	var_43_bool = var_2_int != var_42_int; // 0x166 Neq
	if(var_43_bool == 0) goto Label_367; // 0x167 JumpB
	get(var_15_object, var_15_object); // 0x168 TObjFunc
	var_44_object = Obj(); // 0x16a PushV
	var_44_object = var_15_object; // 0x16b Mov
	func_15(var_44_object); // 0x16c NEW_2
	var_15_object = 0; // 0x16e SetNull
	
Label_367:
	goto Label_395; // 0x16f Jump
	
Label_395:
	return 4; // 0x18b Return
	
Label_368:
	var_46_bool = 0; // 0x170 PushV
	var_46_bool = 0; // 0x171 MovB
	var_47_bool = var_0_bool; // 0x172 PushT
	if(var_47_bool == 0) goto Label_376; // 0x173 JumpB
	var_48_int = -1; // 0x174 PushI
	var_49_bool = var_3_int != var_48_int; // 0x175 Neq
	if(var_49_bool == 0) goto Label_376; // 0x176 JumpB
	var_46_bool = 1; // 0x177 MovB
	
Label_376:
	if(var_46_bool == 0) goto Label_395; // 0x178 JumpB
	var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x179 PushV
	var_51_int = var_11_int; // 0x17a Mov
	var_52_int = var_12_int; // 0x17b Mov
	func_435(var_16_object, var_50_int, var_51_int, var_52_int); // 0x17c NEW_2
	var_3_int = var_50_int; // 0x17d TMov
	var_73_int = -1; // 0x17f PushI
	var_74_bool = var_3_int != var_73_int; // 0x180 Neq
	if(var_74_bool == 0) goto Label_395; // 0x181 JumpB
	get(var_16_object, var_14_object); // 0x182 TObjFunc
	var_75_object = var_16_object; // 0x184 Push
	if(var_75_object == 0) goto Label_394; // 0x185 JumpB
	var_76_object = Obj(); // 0x186 PushV
	var_76_object = var_16_object; // 0x187 Mov
	func_20(); // 0x188 NEW_2
	
Label_394:
	var_16_object = 0; // 0x18a SetNull
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	CaptureKeyboard(); // 0x0 Func
	
Label_2:
	var_11_bool = 1; // 0x2 PushB
	if(var_11_bool == 0) goto Label_9; // 0x3 JumpB
	var_12_bool = 0; // 0x4 PushV
	var_12_bool = 0; // 0x5 MovB
	func_33(var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool); // 0x6 NEW_2
	goto Label_2; // 0x8 Jump
	
Label_9:
	return 0; // 0x9 Return
}


func_33(var_0_bool, var_1_int, var_2_int, var_3_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x21 PushV
	var_2_int = -1; // 0x22 TMovI
	var_3_int = -1; // 0x23 TMovI
	var_0_bool = var_12_bool; // 0x24 TMov
	CreateSaveEnumerator(var_10_object); // 0x25 Func
	var_19_bool = var_8_object == 0; // 0x27 Not
	if(var_19_bool == 0) goto Label_42; // 0x28 JumpB
	return 6; // 0x29 Return
	
Label_42:
	CreateObjectVector(var_9_object); // 0x2a Func
	var_20_bool = var_12_bool; // 0x2c Push
	if(var_20_bool == 0) goto Label_50; // 0x2d JumpB
	var_16_object = 0; // 0x2e SetNull
	add(var_16_object); // 0x2f TObjFunc
	var_16_object = 0; // 0x31 SetNull
	
Label_50:
	var_21_int = 1; // 0x32 PushI
	if(var_21_int == 0) goto Label_68; // 0x33 JumpB
	Next(var_17_object); // 0x34 TObjFunc
	var_22_bool = var_17_object == 0; // 0x36 Not
	if(var_22_bool == 0) goto Label_57; // 0x37 JumpB
	goto Label_68; // 0x38 Jump
	
Label_68:
	GetWindowSize(var_15_bool, var_14_object); // 0x44 Func
	var_6_int = 0; // 0x46 TMovI
	var_7_int = 0; // 0x47 TMovI
	ClientToScreen(var_13_object, var_12_bool); // 0x48 Func
	var_1_int = 0; // 0x4a TMovI
	var_23_bool = 1; // 0x4b PushB
	EnableClipping(var_23_bool); // 0x4c Func
	var_24_bool = 1; // 0x4e PushB
	SetOwnerDraw(var_24_bool); // 0x4f Func
	var_25_string = "sys_border.xml"; // 0x51 PushS
	var_26_bool = 0; // 0x52 PushB
	CreateWindow(var_25_string, var_26_bool, var_10_object); // 0x53 Func
	func_484(var_17_object, var_18_bool); // 0x56 NEW_2
	ProcessEvents(); // 0x58 Func
	return 6; // 0x5a Return
	
Label_57:
	var_48_bool = var_12_bool; // 0x39 Push
	if(var_48_bool == 0) goto Label_64; // 0x3a JumpB
	IsQuickSave(var_18_bool); // 0x3b ObjFunc
	var_49_bool = var_18_bool; // 0x3d Push
	if(var_49_bool == 0) goto Label_64; // 0x3e JumpB
	goto Label_50; // 0x3f Jump
	
Label_64:
	add(var_17_object); // 0x40 TObjFunc
	var_17_object = 0; // 0x42 SetNull
	goto Label_50; // 0x43 Jump
}


func_547(var_106_string)
{
	var_108_string = ""; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; // 0x223 PushV
	GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int); // 0x224 ObjFunc
	var_120_string = ""; var_121_int = 0; // 0x226 PushV
	var_121_int = 19; // 0x227 MovI
	func_518(var_120_string, var_121_int); // 0x228 NEW_2
	var_122_string = ""; var_123_int = 0; // 0x22a PushV
	var_124_int = 20; // 0x22b PushI
	var_123_int = var_124_int + var_119_int; // 0x22c Add2
	func_518(var_122_string, var_123_int); // 0x22d NEW_2
	format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int); // 0x22f Func
	var_106_string = var_114_string; // 0x231 Mov
	return 12; // 0x232 Return
}


func_100(var_12_int, var_13_int)
{
	var_12_int = var_13_int; // 0x65 Mov
	return 0; // 0x66 Return
}


func_484(var_1_int, var_5_int)
{
	var_27_int = 0; var_28_int = 0; // 0x1e4 PushV
	var_29_int = 0; // 0x1e5 PushV
	func_476(var_29_int); // 0x1e6 NEW_2
	var_28_int = var_29_int - var_5_int; // 0x1e8 Sub2
	var_33_int = 0; // 0x1e9 PushI
	var_34_bool = var_28_int < var_33_int; // 0x1ea LT
	if(var_34_bool == 0) goto Label_493; // 0x1eb JumpB
	var_28_int = 0; // 0x1ec MovI
	
Label_493:
	var_35_int = -var_1_int; // 0x1ed Neg
	var_36_bool = var_35_int > var_28_int; // 0x1ee GT
	if(var_36_bool == 0) goto Label_498; // 0x1ef JumpB
	var_1_int = -var_28_int; // 0x1f0 Neg2
	goto Label_502; // 0x1f1 Jump
	
Label_502:
	var_37_int = 0; // 0x1f6 PushI
	var_38_bool = var_28_int == var_37_int; // 0x1f7 Eq
	if(var_38_bool == 0) goto Label_510; // 0x1f8 JumpB
	var_39_int = 16384; // 0x1f9 PushI
	var_40_string = "scrollbar"; // 0x1fa PushS
	SendMessage(var_39_int, var_40_string); // 0x1fb Func
	goto Label_517; // 0x1fd Jump
	
Label_517:
	return 2; // 0x205 Return
	
Label_510:
	var_41_int = -var_1_int; // 0x1fe Neg
	var_42_int = 100; // 0x1ff PushI
	var_43_float = var_41_int * var_42_int; // 0x200 Mult
	var_44_float = var_43_float / var_28_int; // 0x201 Div
	var_45_string = "scrollbar"; // 0x202 PushS
	SendMessage(var_44_float, var_45_string); // 0x203 Func
	
Label_498:
	var_46_int = 0; // 0x1f2 PushI
	var_47_bool = var_1_int > var_46_int; // 0x1f3 GT
	if(var_47_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_1_int = 0; // 0x1f5 TMovI
}


func_518(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x206 PushV
	GetStringByID(var_71_string, var_69_int); // 0x207 Func
	var_68_string = var_71_string; // 0x209 Mov
	return 2; // 0x20a Return
}


func_103(var_2_int, var_3_int, var_11_int)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; // 0x67 PushV
	size(var_24_int); // 0x68 TObjFunc
	var_25_int = 0; // 0x6a MovI
	
Label_107:
	var_34_bool = var_25_int < var_24_int; // 0x6b LT
	if(var_34_bool == 0) goto Label_267; // 0x6c JumpB
	get(var_26_object, var_25_int); // 0x6d TObjFunc
	var_27_int = 0; // 0x6f MovI
	var_28_int = var_11_int; // 0x70 Mov
	ClientToScreen(var_27_int, var_28_int); // 0x71 Func
	var_35_object = var_26_object; // 0x73 Push
	if(var_35_object == 0) goto Label_211; // 0x74 JumpB
	BlitClipped(var_27_int, var_28_int, var_28_int, var_27_int, var_30_string, var_29_bool); // 0x75 ObjFunc
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x77 PushV
	var_36_int = 0; // 0x78 MovI
	var_37_int = var_11_int; // 0x79 Mov
	var_38_bool = 0; // 0x7a MovB
	func_268(var_36_int, var_37_int, var_38_bool); // 0x7b NEW_2
	IsQuickSave(var_29_bool); // 0x7d ObjFunc
	var_63_bool = var_29_bool; // 0x7f Push
	if(var_63_bool == 0) goto Label_143; // 0x80 JumpB
	var_64_string = "default"; // 0x81 PushS
	var_65_int = 129; // 0x82 PushI
	var_66_int = 7; // 0x83 PushI
	var_67_int = var_66_int + var_11_int; // 0x84 Add
	var_68_string = ""; var_69_int = 0; // 0x85 PushV
	var_69_int = 17; // 0x86 MovI
	func_518(var_68_string, var_69_int); // 0x87 NEW_2
	var_72_float = 0.55686; // 0x89 PushF
	var_73_float = 0.55686; // 0x8a PushF
	var_74_float = 0.55686; // 0x8b PushF
	Print(var_64_string, var_65_int, var_67_int, var_68_string, var_72_float, var_73_float, var_74_float); // 0x8c Func
	goto Label_165; // 0x8e Jump
	
Label_165:
	var_75_string = ""; var_76_object = Obj(); // 0xa5 PushV
	var_76_object = var_26_object; // 0xa6 Mov
	func_523(var_76_object); // 0xa7 NEW_2
	var_33_string = var_75_string; // 0xa8 Mov
	var_99_string = "big"; // 0xaa PushS
	var_100_int = 129; // 0xab PushI
	var_101_int = 28; // 0xac PushI
	var_102_int = var_101_int + var_11_int; // 0xad Add
	var_103_float = 1.0; // 0xae PushF
	var_104_float = 1.0; // 0xaf PushF
	var_105_float = 1.0; // 0xb0 PushF
	Print(var_99_string, var_100_int, var_102_int, var_33_string, var_103_float, var_104_float, var_105_float); // 0xb1 Func
	var_106_string = ""; var_107_object = Obj(); // 0xb3 PushV
	var_107_object = var_26_object; // 0xb4 Mov
	func_547(var_107_object); // 0xb5 NEW_2
	var_33_string = var_106_string; // 0xb6 Mov
	var_125_string = "default"; // 0xb8 PushS
	var_126_int = 129; // 0xb9 PushI
	var_127_int = 47; // 0xba PushI
	var_128_int = var_127_int + var_11_int; // 0xbb Add
	var_129_float = 0.55686; // 0xbc PushF
	var_130_float = 0.55686; // 0xbd PushF
	var_131_float = 0.55686; // 0xbe PushF
	Print(var_125_string, var_126_int, var_128_int, var_33_string, var_129_float, var_130_float, var_131_float); // 0xbf Func
	var_132_bool = var_0_bool; // 0xc1 PushT
	if(var_132_bool == 0) goto Label_210; // 0xc2 JumpB
	var_133_bool = var_3_int == var_25_int; // 0xc3 Eq
	if(var_133_bool == 0) goto Label_204; // 0xc4 JumpB
	var_134_string = "button_x_pressed"; // 0xc5 PushS
	var_135_int = 248; // 0xc6 PushI
	var_136_int = 68; // 0xc7 PushI
	var_137_int = var_136_int + var_11_int; // 0xc8 Add
	Blit(var_134_string, var_135_int, var_137_int); // 0xc9 Func
	goto Label_210; // 0xcb Jump
	
Label_210:
	goto Label_230; // 0xd2 Jump
	
Label_230:
	var_138_bool = var_2_int == var_25_int; // 0xe6 Eq
	if(var_138_bool == 0) goto Label_239; // 0xe7 JumpB
	var_139_string = "button_pressed"; // 0xe8 PushS
	var_140_int = 129; // 0xe9 PushI
	var_141_int = 67; // 0xea PushI
	var_142_int = var_141_int + var_11_int; // 0xeb Add
	Blit(var_139_string, var_140_int, var_142_int); // 0xec Func
	goto Label_245; // 0xee Jump
	
Label_245:
	var_143_object = Obj(); var_144_int = 0; var_145_int = 0; // 0xf5 PushV
	var_143_object = var_26_object; // 0xf6 Mov
	var_144_int = 129; // 0xf7 MovI
	var_146_int = 67; // 0xf8 PushI
	var_145_int = var_146_int + var_11_int; // 0xf9 Add2
	func_10(var_144_int, var_145_int); // 0xfa NEW_2
	var_148_int = 90; // 0xfc PushI
	var_11_int = var_11_int + var_148_int; // 0xfd Add2
	var_149_string = "separator"; // 0xfe PushS
	var_150_int = 0; // 0xff PushI
	var_151_int = 15; // 0x100 PushI
	var_152_int = var_11_int + var_151_int; // 0x101 Add
	var_153_int = 1; // 0x102 PushI
	StretchBlit(var_149_string, var_150_int, var_152_int, var_149_string, var_153_int); // 0x103 Func
	var_154_int = 31; // 0x105 PushI
	var_11_int = var_11_int + var_154_int; // 0x106 Add2
	var_26_object = 0; // 0x107 SetNull
	var_155_int = 1; // 0x108 PushI
	var_25_int = var_25_int + var_155_int; // 0x109 Add2
	goto Label_107; // 0x10a Jump
	
Label_239:
	var_156_string = "button"; // 0xef PushS
	var_157_int = 129; // 0xf0 PushI
	var_158_int = 67; // 0xf1 PushI
	var_159_int = var_158_int + var_11_int; // 0xf2 Add
	Blit(var_156_string, var_157_int, var_159_int); // 0xf3 Func
	
Label_204:
	var_160_string = "button_x"; // 0xcc PushS
	var_161_int = 248; // 0xcd PushI
	var_162_int = 68; // 0xce PushI
	var_163_int = var_162_int + var_11_int; // 0xcf Add
	Blit(var_160_string, var_161_int, var_163_int); // 0xd0 Func
	
Label_143:
	var_164_int = 0; // 0x8f PushI
	GetProperty(var_164_int, var_31_bool, var_32_int); // 0x90 ObjFunc
	var_165_bool = var_31_bool; // 0x92 Push
	if(var_165_bool == 0) goto Label_155; // 0x93 JumpB
	var_166_string = ""; var_167_int = 0; // 0x94 PushV
	var_168_int = 500; // 0x95 PushI
	var_167_int = var_168_int + var_32_int; // 0x96 Add2
	func_518(var_166_string, var_167_int); // 0x97 NEW_2
	var_30_string = var_166_string; // 0x98 Mov
	goto Label_156; // 0x9a Jump
	
Label_156:
	var_169_string = "default"; // 0x9c PushS
	var_170_int = 129; // 0x9d PushI
	var_171_int = 7; // 0x9e PushI
	var_172_int = var_171_int + var_11_int; // 0x9f Add
	var_173_float = 0.55686; // 0xa0 PushF
	var_174_float = 0.55686; // 0xa1 PushF
	var_175_float = 0.55686; // 0xa2 PushF
	Print(var_169_string, var_170_int, var_172_int, var_30_string, var_173_float, var_174_float, var_175_float); // 0xa3 Func
	
Label_155:
	var_30_string = "????"; // 0x9b MovS
	
Label_211:
	var_176_int = 0; var_177_int = 0; var_178_bool = 0; // 0xd3 PushV
	var_176_int = 0; // 0xd4 MovI
	var_177_int = var_11_int; // 0xd5 Mov
	var_178_bool = 1; // 0xd6 MovB
	func_268(var_176_int, var_177_int, var_178_bool); // 0xd7 NEW_2
	var_179_string = "default"; // 0xd9 PushS
	var_180_int = 129; // 0xda PushI
	var_181_int = 47; // 0xdb PushI
	var_182_int = var_181_int + var_11_int; // 0xdc Add
	var_183_string = ""; var_184_int = 0; // 0xdd PushV
	var_184_int = 32; // 0xde MovI
	func_518(var_183_string, var_184_int); // 0xdf NEW_2
	var_185_float = 0.55686; // 0xe1 PushF
	var_186_float = 0.55686; // 0xe2 PushF
	var_187_float = 0.55686; // 0xe3 PushF
	Print(var_179_string, var_180_int, var_182_int, var_183_string, var_185_float, var_186_float, var_187_float); // 0xe4 Func
	
Label_267:
	return 20; // 0x10b Return
}


func_10(var_144_int, var_145_int)
{
	var_147_string = "button_text"; // 0xb PushS
	Blit(var_147_string, var_144_int, var_145_int); // 0xc Func
	return 0; // 0xe Return
}


func_523(var_75_string)
{
	var_77_string = ""; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_string = ""; var_83_float = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x20b PushV
	GetGameTime(var_83_float); // 0x20c ObjFunc
	var_87_int = 24; // 0x20e PushI
	var_84_int = var_83_float / var_83_float; // 0x20f Div2
	var_88_int = 24; // 0x210 PushI
	var_89_float = var_84_int * var_88_int; // 0x211 Mult
	var_85_int = var_83_float - var_89_float; // 0x212 Sub2
	var_90_int = 24; // 0x213 PushI
	var_91_float = var_84_int * var_90_int; // 0x214 Mult
	var_92_int = var_83_float - var_91_float; // 0x215 Sub
	var_93_int = var_92_int - var_85_int; // 0x216 Sub
	var_94_int = 60; // 0x217 PushI
	var_86_int = var_93_int * var_94_int; // 0x218 Mult2
	var_95_string = ""; var_96_int = 0; // 0x219 PushV
	var_96_int = 18; // 0x21a MovI
	func_518(var_95_string, var_96_int); // 0x21b NEW_2
	var_97_int = 1; // 0x21d PushI
	var_98_int = var_84_int + var_97_int; // 0x21e Add
	format(var_82_string, var_95_string, var_98_int, var_85_int, var_86_int); // 0x21f Func
	var_75_string = var_82_string; // 0x221 Mov
	return 10; // 0x222 Return
}


func_268(var_36_int, var_37_int, var_38_bool)
{
	var_39_bool = var_38_bool; // 0x10d Push
	if(var_39_bool == 0) goto Label_276; // 0x10e JumpB
	var_40_string = "shot_black"; // 0x10f PushS
	var_41_int = 120; // 0x110 PushI
	var_42_int = 90; // 0x111 PushI
	StretchBlit(var_40_string, var_36_int, var_37_int, var_41_int, var_42_int); // 0x112 Func
	
Label_276:
	var_43_string = "shot_border"; // 0x114 PushS
	var_44_int = 120; // 0x115 PushI
	var_45_int = 1; // 0x116 PushI
	StretchBlit(var_43_string, var_36_int, var_37_int, var_44_int, var_45_int); // 0x117 Func
	var_46_string = "shot_border"; // 0x119 PushS
	var_47_int = 90; // 0x11a PushI
	var_48_int = var_37_int + var_47_int; // 0x11b Add
	var_49_int = 1; // 0x11c PushI
	var_50_int = var_48_int - var_49_int; // 0x11d Sub
	var_51_int = 120; // 0x11e PushI
	var_52_int = 1; // 0x11f PushI
	StretchBlit(var_46_string, var_36_int, var_50_int, var_51_int, var_52_int); // 0x120 Func
	var_53_string = "shot_border"; // 0x122 PushS
	var_54_int = 1; // 0x123 PushI
	var_55_int = 90; // 0x124 PushI
	StretchBlit(var_53_string, var_36_int, var_37_int, var_54_int, var_55_int); // 0x125 Func
	var_56_string = "shot_border"; // 0x127 PushS
	var_57_int = 120; // 0x128 PushI
	var_58_int = var_36_int + var_57_int; // 0x129 Add
	var_59_int = 1; // 0x12a PushI
	var_60_int = var_58_int - var_59_int; // 0x12b Sub
	var_61_int = 1; // 0x12c PushI
	var_62_int = 90; // 0x12d PushI
	StretchBlit(var_56_string, var_60_int, var_37_int, var_61_int, var_62_int); // 0x12e Func
	return 0; // 0x130 Return
}


func_396(var_1_int, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x18c PushV
	var_30_int = 129; // 0x18d PushI
	var_31_bool = var_20_int < var_30_int; // 0x18e LT
	if(var_31_bool == 0) goto Label_402; // 0x18f JumpB
	var_19_int = -1; // 0x190 MovI
	return 8; // 0x191 Return
	
Label_402:
	var_32_int = 233; // 0x192 PushI
	var_33_bool = var_20_int > var_32_int; // 0x193 GT
	if(var_33_bool == 0) goto Label_407; // 0x194 JumpB
	var_19_int = -1; // 0x195 MovI
	return 8; // 0x196 Return
	
Label_407:
	var_26_int = var_21_int - var_1_int; // 0x197 Sub2
	var_34_int = 0; // 0x198 PushV
	func_474(var_34_int); // 0x199 NEW_2
	var_27_int = var_34_int; // 0x19a Mov
	var_28_int = var_26_int / var_26_int; // 0x19c Div2
	var_35_float = var_28_int * var_27_int; // 0x19d Mult
	var_26_int = var_26_int - var_35_float; // 0x19e Sub2
	size(var_29_int); // 0x19f TObjFunc
	var_36_bool = var_29_int <= var_28_int; // 0x1a1 LE
	if(var_36_bool == 0) goto Label_421; // 0x1a2 JumpB
	var_19_int = -1; // 0x1a3 MovI
	return 8; // 0x1a4 Return
	
Label_421:
	var_37_bool = 0; // 0x1a5 PushV
	var_37_bool = 0; // 0x1a6 MovB
	var_38_int = 67; // 0x1a7 PushI
	var_39_bool = var_26_int >= var_38_int; // 0x1a8 GE
	if(var_39_bool == 0) goto Label_430; // 0x1a9 JumpB
	var_40_int = 91; // 0x1aa PushI
	var_41_bool = var_26_int <= var_40_int; // 0x1ab LE
	if(var_41_bool == 0) goto Label_430; // 0x1ac JumpB
	var_37_bool = 1; // 0x1ad MovB
	
Label_430:
	if(var_37_bool == 0) goto Label_433; // 0x1ae JumpB
	var_19_int = var_28_int; // 0x1af Mov
	return 8; // 0x1b0 Return
	
Label_433:
	var_19_int = -1; // 0x1b1 MovI
	return 8; // 0x1b2 Return
}


func_15(var_44_object)
{
	var_45_int = 0; // 0x10 PushI
	SendMessageToParent(var_45_int, var_44_object); // 0x11 Func
	return 0; // 0x13 Return
}


func_435(var_1_int, var_50_int, var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x1b3 PushV
	var_61_int = 248; // 0x1b4 PushI
	var_62_bool = var_51_int < var_61_int; // 0x1b5 LT
	if(var_62_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_50_int = -1; // 0x1b7 MovI
	return 8; // 0x1b8 Return
	
Label_441:
	var_63_int = 268; // 0x1b9 PushI
	var_64_bool = var_51_int > var_63_int; // 0x1ba GT
	if(var_64_bool == 0) goto Label_446; // 0x1bb JumpB
	var_50_int = -1; // 0x1bc MovI
	return 8; // 0x1bd Return
	
Label_446:
	var_57_int = var_52_int - var_1_int; // 0x1be Sub2
	var_65_int = 0; // 0x1bf PushV
	func_474(var_65_int); // 0x1c0 NEW_2
	var_58_int = var_65_int; // 0x1c1 Mov
	var_59_int = var_57_int / var_57_int; // 0x1c3 Div2
	var_66_float = var_59_int * var_58_int; // 0x1c4 Mult
	var_57_int = var_57_int - var_66_float; // 0x1c5 Sub2
	size(var_60_int); // 0x1c6 TObjFunc
	var_67_bool = var_60_int <= var_59_int; // 0x1c8 LE
	if(var_67_bool == 0) goto Label_460; // 0x1c9 JumpB
	var_50_int = -1; // 0x1ca MovI
	return 8; // 0x1cb Return
	
Label_460:
	var_68_bool = 0; // 0x1cc PushV
	var_68_bool = 0; // 0x1cd MovB
	var_69_int = 68; // 0x1ce PushI
	var_70_bool = var_57_int >= var_69_int; // 0x1cf GE
	if(var_70_bool == 0) goto Label_469; // 0x1d0 JumpB
	var_71_int = 91; // 0x1d1 PushI
	var_72_bool = var_57_int <= var_71_int; // 0x1d2 LE
	if(var_72_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_68_bool = 1; // 0x1d4 MovB
	
Label_469:
	if(var_68_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_50_int = var_59_int; // 0x1d6 Mov
	return 8; // 0x1d7 Return
	
Label_472:
	var_50_int = -1; // 0x1d8 MovI
	return 8; // 0x1d9 Return
}


func_20()
{
	var_77_string = ""; var_78_string = ""; // 0x14 PushV
	GetFileName(var_78_string); // 0x15 ObjFunc
	DeleteGame(var_78_string); // 0x17 Func
	StopEventProcessing(); // 0x19 Func
	return 2; // 0x1b Return
}


func_474(var_32_int)
{
	var_32_int = 121; // 0x1da MovI
	return 0; // 0x1db Return
}


func_476(var_29_int)
{
	var_30_int = 0; var_31_int = 0; // 0x1dc PushV
	size(var_31_int); // 0x1dd TObjFunc
	var_32_int = 0; // 0x1df PushV
	func_474(var_32_int); // 0x1e0 NEW_2
	var_29_int = var_31_int * var_32_int; // 0x1e2 Mult2
	return 2; // 0x1e3 Return
}


