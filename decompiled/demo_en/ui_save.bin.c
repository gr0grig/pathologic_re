task_0_event_100(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 1; // 0x23 PushI
	SendMessageToParent(var_12_int); // 0x24 Func
	return 0; // 0x26 Return
}


task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x61 PushV
	var_12_int = 0; var_13_int = 0; // 0x62 PushV
	var_13_int = var_1_int; // 0x63 MovT
	func_106(var_12_int, var_13_int); // 0x64 NEW_2
	var_11_int = var_12_int; // 0x65 Mov
	func_109(var_9_object, var_10_object, var_11_int); // 0x67 NEW_2
	return 0; // 0x69 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_string, var_13_object)
{
	var_14_string = "scrollbar"; // 0x138 PushS
	var_15_bool = var_12_string == var_14_string; // 0x139 Eq
	if(var_15_bool == 0) goto Label_326; // 0x13a JumpB
	var_16_int = -var_11_int; // 0x13b Neg
	var_17_int = 0; // 0x13c PushV
	func_482(var_17_int); // 0x13d NEW_2
	var_21_int = var_17_int - var_5_int; // 0x13f Sub
	var_22_float = var_16_int * var_21_int; // 0x140 Mult
	var_23_int = 100; // 0x141 PushI
	var_1_int = var_22_float / var_22_float; // 0x142 Div2
	func_490(var_12_string, var_13_object); // 0x144 NEW_2
	
Label_326:
	return 0; // 0x146 Return
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; // 0x147 PushV
	var_16_int = 0; // 0x148 PushV
	func_480(var_16_int); // 0x149 NEW_2
	var_17_float = var_13_float * var_16_int; // 0x14b Mult
	var_18_int = 2; // 0x14c PushI
	var_15_int = var_17_float / var_17_float; // 0x14d Div2
	var_1_int = var_1_int + var_15_int; // 0x14e Add2
	func_490(var_14_int, var_15_int); // 0x150 NEW_2
	return 2; // 0x152 Return
}


task_0_event_2(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x154 PushV
	var_14_int = var_11_int; // 0x155 Mov
	var_15_int = var_12_int; // 0x156 Mov
	func_402(var_12_int, var_13_int, var_14_int, var_15_int); // 0x157 NEW_2
	var_2_int = var_13_int; // 0x158 TMov
	var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x15a PushV
	var_37_int = var_11_int; // 0x15b Mov
	var_38_int = var_12_int; // 0x15c Mov
	func_441(var_12_int, var_36_int, var_37_int, var_38_int); // 0x15d NEW_2
	var_3_int = var_36_int; // 0x15e TMov
	return 0; // 0x160 Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x161 PushV
	var_17_int = -1; // 0x162 PushI
	var_18_bool = var_2_int != var_17_int; // 0x163 Neq
	if(var_18_bool == 0) goto Label_374; // 0x164 JumpB
	var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x165 PushV
	var_20_int = var_11_int; // 0x166 Mov
	var_21_int = var_12_int; // 0x167 Mov
	func_402(var_16_object, var_19_int, var_20_int, var_21_int); // 0x168 NEW_2
	var_2_int = var_19_int; // 0x169 TMov
	var_42_int = -1; // 0x16b PushI
	var_43_bool = var_2_int != var_42_int; // 0x16c Neq
	if(var_43_bool == 0) goto Label_373; // 0x16d JumpB
	get(var_15_object, var_15_object); // 0x16e TObjFunc
	var_44_object = Obj(); // 0x170 PushV
	var_44_object = var_15_object; // 0x171 Mov
	func_21(var_44_object); // 0x172 NEW_2
	var_15_object = 0; // 0x174 SetNull
	
Label_373:
	goto Label_401; // 0x175 Jump
	
Label_401:
	return 4; // 0x191 Return
	
Label_374:
	var_46_bool = 0; // 0x176 PushV
	var_46_bool = 0; // 0x177 MovB
	var_47_bool = var_0_bool; // 0x178 PushT
	if(var_47_bool == 0) goto Label_382; // 0x179 JumpB
	var_48_int = -1; // 0x17a PushI
	var_49_bool = var_3_int != var_48_int; // 0x17b Neq
	if(var_49_bool == 0) goto Label_382; // 0x17c JumpB
	var_46_bool = 1; // 0x17d MovB
	
Label_382:
	if(var_46_bool == 0) goto Label_401; // 0x17e JumpB
	var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x17f PushV
	var_51_int = var_11_int; // 0x180 Mov
	var_52_int = var_12_int; // 0x181 Mov
	func_441(var_16_object, var_50_int, var_51_int, var_52_int); // 0x182 NEW_2
	var_3_int = var_50_int; // 0x183 TMov
	var_73_int = -1; // 0x185 PushI
	var_74_bool = var_3_int != var_73_int; // 0x186 Neq
	if(var_74_bool == 0) goto Label_401; // 0x187 JumpB
	get(var_16_object, var_14_object); // 0x188 TObjFunc
	var_75_object = var_16_object; // 0x18a Push
	if(var_75_object == 0) goto Label_400; // 0x18b JumpB
	var_76_object = Obj(); // 0x18c PushV
	var_76_object = var_16_object; // 0x18d Mov
	func_26(); // 0x18e NEW_2
	
Label_400:
	var_16_object = 0; // 0x190 SetNull
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	CaptureKeyboard(); // 0x0 Func
	
Label_2:
	var_11_bool = 1; // 0x2 PushB
	if(var_11_bool == 0) goto Label_9; // 0x3 JumpB
	var_12_bool = 0; // 0x4 PushV
	var_12_bool = 1; // 0x5 MovB
	func_39(var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool); // 0x6 NEW_2
	goto Label_2; // 0x8 Jump
	
Label_9:
	return 0; // 0x9 Return
}


func_480(var_32_int)
{
	var_32_int = 121; // 0x1e0 MovI
	return 0; // 0x1e1 Return
}


func_482(var_29_int)
{
	var_30_int = 0; var_31_int = 0; // 0x1e2 PushV
	size(var_31_int); // 0x1e3 TObjFunc
	var_32_int = 0; // 0x1e5 PushV
	func_480(var_32_int); // 0x1e6 NEW_2
	var_29_int = var_31_int * var_32_int; // 0x1e8 Mult2
	return 2; // 0x1e9 Return
}


func_39(var_0_bool, var_1_int, var_2_int, var_3_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x27 PushV
	var_2_int = -1; // 0x28 TMovI
	var_3_int = -1; // 0x29 TMovI
	var_0_bool = var_12_bool; // 0x2a TMov
	CreateSaveEnumerator(var_10_object); // 0x2b Func
	var_19_bool = var_8_object == 0; // 0x2d Not
	if(var_19_bool == 0) goto Label_48; // 0x2e JumpB
	return 6; // 0x2f Return
	
Label_48:
	CreateObjectVector(var_9_object); // 0x30 Func
	var_20_bool = var_12_bool; // 0x32 Push
	if(var_20_bool == 0) goto Label_56; // 0x33 JumpB
	var_16_object = 0; // 0x34 SetNull
	add(var_16_object); // 0x35 TObjFunc
	var_16_object = 0; // 0x37 SetNull
	
Label_56:
	var_21_int = 1; // 0x38 PushI
	if(var_21_int == 0) goto Label_74; // 0x39 JumpB
	Next(var_17_object); // 0x3a TObjFunc
	var_22_bool = var_17_object == 0; // 0x3c Not
	if(var_22_bool == 0) goto Label_63; // 0x3d JumpB
	goto Label_74; // 0x3e Jump
	
Label_74:
	GetWindowSize(var_15_bool, var_14_object); // 0x4a Func
	var_6_int = 0; // 0x4c TMovI
	var_7_int = 0; // 0x4d TMovI
	ClientToScreen(var_13_object, var_12_bool); // 0x4e Func
	var_1_int = 0; // 0x50 TMovI
	var_23_bool = 1; // 0x51 PushB
	EnableClipping(var_23_bool); // 0x52 Func
	var_24_bool = 1; // 0x54 PushB
	SetOwnerDraw(var_24_bool); // 0x55 Func
	var_25_string = "sys_border.xml"; // 0x57 PushS
	var_26_bool = 0; // 0x58 PushB
	CreateWindow(var_25_string, var_26_bool, var_10_object); // 0x59 Func
	func_490(var_17_object, var_18_bool); // 0x5c NEW_2
	ProcessEvents(); // 0x5e Func
	return 6; // 0x60 Return
	
Label_63:
	var_48_bool = var_12_bool; // 0x3f Push
	if(var_48_bool == 0) goto Label_70; // 0x40 JumpB
	IsQuickSave(var_18_bool); // 0x41 ObjFunc
	var_49_bool = var_18_bool; // 0x43 Push
	if(var_49_bool == 0) goto Label_70; // 0x44 JumpB
	goto Label_56; // 0x45 Jump
	
Label_70:
	add(var_17_object); // 0x46 TObjFunc
	var_17_object = 0; // 0x48 SetNull
	goto Label_56; // 0x49 Jump
}


func_553(var_106_string)
{
	var_108_string = ""; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; // 0x229 PushV
	GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int); // 0x22a ObjFunc
	var_120_string = ""; var_121_int = 0; // 0x22c PushV
	var_121_int = 19; // 0x22d MovI
	func_524(var_120_string, var_121_int); // 0x22e NEW_2
	var_122_string = ""; var_123_int = 0; // 0x230 PushV
	var_124_int = 20; // 0x231 PushI
	var_123_int = var_124_int + var_119_int; // 0x232 Add2
	func_524(var_122_string, var_123_int); // 0x233 NEW_2
	format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int); // 0x235 Func
	var_106_string = var_114_string; // 0x237 Mov
	return 12; // 0x238 Return
}


func_490(var_1_int, var_5_int)
{
	var_27_int = 0; var_28_int = 0; // 0x1ea PushV
	var_29_int = 0; // 0x1eb PushV
	func_482(var_29_int); // 0x1ec NEW_2
	var_28_int = var_29_int - var_5_int; // 0x1ee Sub2
	var_33_int = 0; // 0x1ef PushI
	var_34_bool = var_28_int < var_33_int; // 0x1f0 LT
	if(var_34_bool == 0) goto Label_499; // 0x1f1 JumpB
	var_28_int = 0; // 0x1f2 MovI
	
Label_499:
	var_35_int = -var_1_int; // 0x1f3 Neg
	var_36_bool = var_35_int > var_28_int; // 0x1f4 GT
	if(var_36_bool == 0) goto Label_504; // 0x1f5 JumpB
	var_1_int = -var_28_int; // 0x1f6 Neg2
	goto Label_508; // 0x1f7 Jump
	
Label_508:
	var_37_int = 0; // 0x1fc PushI
	var_38_bool = var_28_int == var_37_int; // 0x1fd Eq
	if(var_38_bool == 0) goto Label_516; // 0x1fe JumpB
	var_39_int = 16384; // 0x1ff PushI
	var_40_string = "scrollbar"; // 0x200 PushS
	SendMessage(var_39_int, var_40_string); // 0x201 Func
	goto Label_523; // 0x203 Jump
	
Label_523:
	return 2; // 0x20b Return
	
Label_516:
	var_41_int = -var_1_int; // 0x204 Neg
	var_42_int = 100; // 0x205 PushI
	var_43_float = var_41_int * var_42_int; // 0x206 Mult
	var_44_float = var_43_float / var_28_int; // 0x207 Div
	var_45_string = "scrollbar"; // 0x208 PushS
	SendMessage(var_44_float, var_45_string); // 0x209 Func
	
Label_504:
	var_46_int = 0; // 0x1f8 PushI
	var_47_bool = var_1_int > var_46_int; // 0x1f9 GT
	if(var_47_bool == 0) goto Label_508; // 0x1fa JumpB
	var_1_int = 0; // 0x1fb TMovI
}


func_106(var_12_int, var_13_int)
{
	var_12_int = var_13_int; // 0x6b Mov
	return 0; // 0x6c Return
}


func_524(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x20c PushV
	GetStringByID(var_71_string, var_69_int); // 0x20d Func
	var_68_string = var_71_string; // 0x20f Mov
	return 2; // 0x210 Return
}


func_109(var_2_int, var_3_int, var_11_int)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; // 0x6d PushV
	size(var_24_int); // 0x6e TObjFunc
	var_25_int = 0; // 0x70 MovI
	
Label_113:
	var_34_bool = var_25_int < var_24_int; // 0x71 LT
	if(var_34_bool == 0) goto Label_273; // 0x72 JumpB
	get(var_26_object, var_25_int); // 0x73 TObjFunc
	var_27_int = 0; // 0x75 MovI
	var_28_int = var_11_int; // 0x76 Mov
	ClientToScreen(var_27_int, var_28_int); // 0x77 Func
	var_35_object = var_26_object; // 0x79 Push
	if(var_35_object == 0) goto Label_217; // 0x7a JumpB
	BlitClipped(var_27_int, var_28_int, var_28_int, var_27_int, var_30_string, var_29_bool); // 0x7b ObjFunc
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x7d PushV
	var_36_int = 0; // 0x7e MovI
	var_37_int = var_11_int; // 0x7f Mov
	var_38_bool = 0; // 0x80 MovB
	func_274(var_36_int, var_37_int, var_38_bool); // 0x81 NEW_2
	IsQuickSave(var_29_bool); // 0x83 ObjFunc
	var_63_bool = var_29_bool; // 0x85 Push
	if(var_63_bool == 0) goto Label_149; // 0x86 JumpB
	var_64_string = "default"; // 0x87 PushS
	var_65_int = 129; // 0x88 PushI
	var_66_int = 7; // 0x89 PushI
	var_67_int = var_66_int + var_11_int; // 0x8a Add
	var_68_string = ""; var_69_int = 0; // 0x8b PushV
	var_69_int = 17; // 0x8c MovI
	func_524(var_68_string, var_69_int); // 0x8d NEW_2
	var_72_float = 0.55686; // 0x8f PushF
	var_73_float = 0.55686; // 0x90 PushF
	var_74_float = 0.55686; // 0x91 PushF
	Print(var_64_string, var_65_int, var_67_int, var_68_string, var_72_float, var_73_float, var_74_float); // 0x92 Func
	goto Label_171; // 0x94 Jump
	
Label_171:
	var_75_string = ""; var_76_object = Obj(); // 0xab PushV
	var_76_object = var_26_object; // 0xac Mov
	func_529(var_76_object); // 0xad NEW_2
	var_33_string = var_75_string; // 0xae Mov
	var_99_string = "big"; // 0xb0 PushS
	var_100_int = 129; // 0xb1 PushI
	var_101_int = 28; // 0xb2 PushI
	var_102_int = var_101_int + var_11_int; // 0xb3 Add
	var_103_float = 1.0; // 0xb4 PushF
	var_104_float = 1.0; // 0xb5 PushF
	var_105_float = 1.0; // 0xb6 PushF
	Print(var_99_string, var_100_int, var_102_int, var_33_string, var_103_float, var_104_float, var_105_float); // 0xb7 Func
	var_106_string = ""; var_107_object = Obj(); // 0xb9 PushV
	var_107_object = var_26_object; // 0xba Mov
	func_553(var_107_object); // 0xbb NEW_2
	var_33_string = var_106_string; // 0xbc Mov
	var_125_string = "default"; // 0xbe PushS
	var_126_int = 129; // 0xbf PushI
	var_127_int = 47; // 0xc0 PushI
	var_128_int = var_127_int + var_11_int; // 0xc1 Add
	var_129_float = 0.55686; // 0xc2 PushF
	var_130_float = 0.55686; // 0xc3 PushF
	var_131_float = 0.55686; // 0xc4 PushF
	Print(var_125_string, var_126_int, var_128_int, var_33_string, var_129_float, var_130_float, var_131_float); // 0xc5 Func
	var_132_bool = var_0_bool; // 0xc7 PushT
	if(var_132_bool == 0) goto Label_216; // 0xc8 JumpB
	var_133_bool = var_3_int == var_25_int; // 0xc9 Eq
	if(var_133_bool == 0) goto Label_210; // 0xca JumpB
	var_134_string = "button_x_pressed"; // 0xcb PushS
	var_135_int = 248; // 0xcc PushI
	var_136_int = 68; // 0xcd PushI
	var_137_int = var_136_int + var_11_int; // 0xce Add
	Blit(var_134_string, var_135_int, var_137_int); // 0xcf Func
	goto Label_216; // 0xd1 Jump
	
Label_216:
	goto Label_236; // 0xd8 Jump
	
Label_236:
	var_138_bool = var_2_int == var_25_int; // 0xec Eq
	if(var_138_bool == 0) goto Label_245; // 0xed JumpB
	var_139_string = "button_pressed"; // 0xee PushS
	var_140_int = 129; // 0xef PushI
	var_141_int = 67; // 0xf0 PushI
	var_142_int = var_141_int + var_11_int; // 0xf1 Add
	Blit(var_139_string, var_140_int, var_142_int); // 0xf2 Func
	goto Label_251; // 0xf4 Jump
	
Label_251:
	var_143_object = Obj(); var_144_int = 0; var_145_int = 0; // 0xfb PushV
	var_143_object = var_26_object; // 0xfc Mov
	var_144_int = 129; // 0xfd MovI
	var_146_int = 67; // 0xfe PushI
	var_145_int = var_146_int + var_11_int; // 0xff Add2
	func_10(var_143_object, var_144_int, var_145_int); // 0x100 NEW_2
	var_150_int = 90; // 0x102 PushI
	var_11_int = var_11_int + var_150_int; // 0x103 Add2
	var_151_string = "separator"; // 0x104 PushS
	var_152_int = 0; // 0x105 PushI
	var_153_int = 15; // 0x106 PushI
	var_154_int = var_11_int + var_153_int; // 0x107 Add
	var_155_int = 1; // 0x108 PushI
	StretchBlit(var_151_string, var_152_int, var_154_int, var_151_string, var_155_int); // 0x109 Func
	var_156_int = 31; // 0x10b PushI
	var_11_int = var_11_int + var_156_int; // 0x10c Add2
	var_26_object = 0; // 0x10d SetNull
	var_157_int = 1; // 0x10e PushI
	var_25_int = var_25_int + var_157_int; // 0x10f Add2
	goto Label_113; // 0x110 Jump
	
Label_245:
	var_158_string = "button"; // 0xf5 PushS
	var_159_int = 129; // 0xf6 PushI
	var_160_int = 67; // 0xf7 PushI
	var_161_int = var_160_int + var_11_int; // 0xf8 Add
	Blit(var_158_string, var_159_int, var_161_int); // 0xf9 Func
	
Label_210:
	var_162_string = "button_x"; // 0xd2 PushS
	var_163_int = 248; // 0xd3 PushI
	var_164_int = 68; // 0xd4 PushI
	var_165_int = var_164_int + var_11_int; // 0xd5 Add
	Blit(var_162_string, var_163_int, var_165_int); // 0xd6 Func
	
Label_149:
	var_166_int = 0; // 0x95 PushI
	GetProperty(var_166_int, var_31_bool, var_32_int); // 0x96 ObjFunc
	var_167_bool = var_31_bool; // 0x98 Push
	if(var_167_bool == 0) goto Label_161; // 0x99 JumpB
	var_168_string = ""; var_169_int = 0; // 0x9a PushV
	var_170_int = 500; // 0x9b PushI
	var_169_int = var_170_int + var_32_int; // 0x9c Add2
	func_524(var_168_string, var_169_int); // 0x9d NEW_2
	var_30_string = var_168_string; // 0x9e Mov
	goto Label_162; // 0xa0 Jump
	
Label_162:
	var_171_string = "default"; // 0xa2 PushS
	var_172_int = 129; // 0xa3 PushI
	var_173_int = 7; // 0xa4 PushI
	var_174_int = var_173_int + var_11_int; // 0xa5 Add
	var_175_float = 0.55686; // 0xa6 PushF
	var_176_float = 0.55686; // 0xa7 PushF
	var_177_float = 0.55686; // 0xa8 PushF
	Print(var_171_string, var_172_int, var_174_int, var_30_string, var_175_float, var_176_float, var_177_float); // 0xa9 Func
	
Label_161:
	var_30_string = "????"; // 0xa1 MovS
	
Label_217:
	var_178_int = 0; var_179_int = 0; var_180_bool = 0; // 0xd9 PushV
	var_178_int = 0; // 0xda MovI
	var_179_int = var_11_int; // 0xdb Mov
	var_180_bool = 1; // 0xdc MovB
	func_274(var_178_int, var_179_int, var_180_bool); // 0xdd NEW_2
	var_181_string = "default"; // 0xdf PushS
	var_182_int = 129; // 0xe0 PushI
	var_183_int = 47; // 0xe1 PushI
	var_184_int = var_183_int + var_11_int; // 0xe2 Add
	var_185_string = ""; var_186_int = 0; // 0xe3 PushV
	var_186_int = 32; // 0xe4 MovI
	func_524(var_185_string, var_186_int); // 0xe5 NEW_2
	var_187_float = 0.55686; // 0xe7 PushF
	var_188_float = 0.55686; // 0xe8 PushF
	var_189_float = 0.55686; // 0xe9 PushF
	Print(var_181_string, var_182_int, var_184_int, var_185_string, var_187_float, var_188_float, var_189_float); // 0xea Func
	
Label_273:
	return 20; // 0x111 Return
}


func_10(var_143_object, var_144_int, var_145_int)
{
	var_147_bool = var_143_object == 0; // 0xb NullEq
	if(var_147_bool == 0) goto Label_17; // 0xc JumpB
	var_148_string = "button_save"; // 0xd PushS
	Blit(var_148_string, var_144_int, var_145_int); // 0xe Func
	goto Label_20; // 0x10 Jump
	
Label_20:
	return 0; // 0x14 Return
	
Label_17:
	var_149_string = "button_overwrite"; // 0x11 PushS
	Blit(var_149_string, var_144_int, var_145_int); // 0x12 Func
}


func_529(var_75_string)
{
	var_77_string = ""; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_string = ""; var_83_float = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x211 PushV
	GetGameTime(var_83_float); // 0x212 ObjFunc
	var_87_int = 24; // 0x214 PushI
	var_84_int = var_83_float / var_83_float; // 0x215 Div2
	var_88_int = 24; // 0x216 PushI
	var_89_float = var_84_int * var_88_int; // 0x217 Mult
	var_85_int = var_83_float - var_89_float; // 0x218 Sub2
	var_90_int = 24; // 0x219 PushI
	var_91_float = var_84_int * var_90_int; // 0x21a Mult
	var_92_int = var_83_float - var_91_float; // 0x21b Sub
	var_93_int = var_92_int - var_85_int; // 0x21c Sub
	var_94_int = 60; // 0x21d PushI
	var_86_int = var_93_int * var_94_int; // 0x21e Mult2
	var_95_string = ""; var_96_int = 0; // 0x21f PushV
	var_96_int = 18; // 0x220 MovI
	func_524(var_95_string, var_96_int); // 0x221 NEW_2
	var_97_int = 1; // 0x223 PushI
	var_98_int = var_84_int + var_97_int; // 0x224 Add
	format(var_82_string, var_95_string, var_98_int, var_85_int, var_86_int); // 0x225 Func
	var_75_string = var_82_string; // 0x227 Mov
	return 10; // 0x228 Return
}


func_274(var_36_int, var_37_int, var_38_bool)
{
	var_39_bool = var_38_bool; // 0x113 Push
	if(var_39_bool == 0) goto Label_282; // 0x114 JumpB
	var_40_string = "shot_black"; // 0x115 PushS
	var_41_int = 120; // 0x116 PushI
	var_42_int = 90; // 0x117 PushI
	StretchBlit(var_40_string, var_36_int, var_37_int, var_41_int, var_42_int); // 0x118 Func
	
Label_282:
	var_43_string = "shot_border"; // 0x11a PushS
	var_44_int = 120; // 0x11b PushI
	var_45_int = 1; // 0x11c PushI
	StretchBlit(var_43_string, var_36_int, var_37_int, var_44_int, var_45_int); // 0x11d Func
	var_46_string = "shot_border"; // 0x11f PushS
	var_47_int = 90; // 0x120 PushI
	var_48_int = var_37_int + var_47_int; // 0x121 Add
	var_49_int = 1; // 0x122 PushI
	var_50_int = var_48_int - var_49_int; // 0x123 Sub
	var_51_int = 120; // 0x124 PushI
	var_52_int = 1; // 0x125 PushI
	StretchBlit(var_46_string, var_36_int, var_50_int, var_51_int, var_52_int); // 0x126 Func
	var_53_string = "shot_border"; // 0x128 PushS
	var_54_int = 1; // 0x129 PushI
	var_55_int = 90; // 0x12a PushI
	StretchBlit(var_53_string, var_36_int, var_37_int, var_54_int, var_55_int); // 0x12b Func
	var_56_string = "shot_border"; // 0x12d PushS
	var_57_int = 120; // 0x12e PushI
	var_58_int = var_36_int + var_57_int; // 0x12f Add
	var_59_int = 1; // 0x130 PushI
	var_60_int = var_58_int - var_59_int; // 0x131 Sub
	var_61_int = 1; // 0x132 PushI
	var_62_int = 90; // 0x133 PushI
	StretchBlit(var_56_string, var_60_int, var_37_int, var_61_int, var_62_int); // 0x134 Func
	return 0; // 0x136 Return
}


func_402(var_1_int, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x192 PushV
	var_30_int = 129; // 0x193 PushI
	var_31_bool = var_20_int < var_30_int; // 0x194 LT
	if(var_31_bool == 0) goto Label_408; // 0x195 JumpB
	var_19_int = -1; // 0x196 MovI
	return 8; // 0x197 Return
	
Label_408:
	var_32_int = 233; // 0x198 PushI
	var_33_bool = var_20_int > var_32_int; // 0x199 GT
	if(var_33_bool == 0) goto Label_413; // 0x19a JumpB
	var_19_int = -1; // 0x19b MovI
	return 8; // 0x19c Return
	
Label_413:
	var_26_int = var_21_int - var_1_int; // 0x19d Sub2
	var_34_int = 0; // 0x19e PushV
	func_480(var_34_int); // 0x19f NEW_2
	var_27_int = var_34_int; // 0x1a0 Mov
	var_28_int = var_26_int / var_26_int; // 0x1a2 Div2
	var_35_float = var_28_int * var_27_int; // 0x1a3 Mult
	var_26_int = var_26_int - var_35_float; // 0x1a4 Sub2
	size(var_29_int); // 0x1a5 TObjFunc
	var_36_bool = var_29_int <= var_28_int; // 0x1a7 LE
	if(var_36_bool == 0) goto Label_427; // 0x1a8 JumpB
	var_19_int = -1; // 0x1a9 MovI
	return 8; // 0x1aa Return
	
Label_427:
	var_37_bool = 0; // 0x1ab PushV
	var_37_bool = 0; // 0x1ac MovB
	var_38_int = 67; // 0x1ad PushI
	var_39_bool = var_26_int >= var_38_int; // 0x1ae GE
	if(var_39_bool == 0) goto Label_436; // 0x1af JumpB
	var_40_int = 91; // 0x1b0 PushI
	var_41_bool = var_26_int <= var_40_int; // 0x1b1 LE
	if(var_41_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_37_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_37_bool == 0) goto Label_439; // 0x1b4 JumpB
	var_19_int = var_28_int; // 0x1b5 Mov
	return 8; // 0x1b6 Return
	
Label_439:
	var_19_int = -1; // 0x1b7 MovI
	return 8; // 0x1b8 Return
}


func_21(var_44_object)
{
	var_45_int = 0; // 0x16 PushI
	SendMessageToParent(var_45_int, var_44_object); // 0x17 Func
	return 0; // 0x19 Return
}


func_441(var_1_int, var_50_int, var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x1b9 PushV
	var_61_int = 248; // 0x1ba PushI
	var_62_bool = var_51_int < var_61_int; // 0x1bb LT
	if(var_62_bool == 0) goto Label_447; // 0x1bc JumpB
	var_50_int = -1; // 0x1bd MovI
	return 8; // 0x1be Return
	
Label_447:
	var_63_int = 268; // 0x1bf PushI
	var_64_bool = var_51_int > var_63_int; // 0x1c0 GT
	if(var_64_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_50_int = -1; // 0x1c2 MovI
	return 8; // 0x1c3 Return
	
Label_452:
	var_57_int = var_52_int - var_1_int; // 0x1c4 Sub2
	var_65_int = 0; // 0x1c5 PushV
	func_480(var_65_int); // 0x1c6 NEW_2
	var_58_int = var_65_int; // 0x1c7 Mov
	var_59_int = var_57_int / var_57_int; // 0x1c9 Div2
	var_66_float = var_59_int * var_58_int; // 0x1ca Mult
	var_57_int = var_57_int - var_66_float; // 0x1cb Sub2
	size(var_60_int); // 0x1cc TObjFunc
	var_67_bool = var_60_int <= var_59_int; // 0x1ce LE
	if(var_67_bool == 0) goto Label_466; // 0x1cf JumpB
	var_50_int = -1; // 0x1d0 MovI
	return 8; // 0x1d1 Return
	
Label_466:
	var_68_bool = 0; // 0x1d2 PushV
	var_68_bool = 0; // 0x1d3 MovB
	var_69_int = 68; // 0x1d4 PushI
	var_70_bool = var_57_int >= var_69_int; // 0x1d5 GE
	if(var_70_bool == 0) goto Label_475; // 0x1d6 JumpB
	var_71_int = 91; // 0x1d7 PushI
	var_72_bool = var_57_int <= var_71_int; // 0x1d8 LE
	if(var_72_bool == 0) goto Label_475; // 0x1d9 JumpB
	var_68_bool = 1; // 0x1da MovB
	
Label_475:
	if(var_68_bool == 0) goto Label_478; // 0x1db JumpB
	var_50_int = var_59_int; // 0x1dc Mov
	return 8; // 0x1dd Return
	
Label_478:
	var_50_int = -1; // 0x1de MovI
	return 8; // 0x1df Return
}


func_26()
{
	var_77_string = ""; var_78_string = ""; // 0x1a PushV
	GetFileName(var_78_string); // 0x1b ObjFunc
	DeleteGame(var_78_string); // 0x1d Func
	StopEventProcessing(); // 0x1f Func
	return 2; // 0x21 Return
}


