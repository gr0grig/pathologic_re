task_0_event_101(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int)
{
	var_15_int = 40; // 0x85 PushI
	var_16_bool = var_14_int == var_15_int; // 0x86 Eq
	if(var_16_bool == 0) goto Label_138; // 0x87 JumpB
	var_11_bool = 1; // 0x88 TMovB
	goto Label_146; // 0x89 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_138:
	var_17_int = 38; // 0x8a PushI
	var_18_bool = var_14_int == var_17_int; // 0x8b Eq
	if(var_18_bool == 0) goto Label_143; // 0x8c JumpB
	var_12_bool = 1; // 0x8d TMovB
	goto Label_146; // 0x8e Jump
	
Label_143:
	func_158(var_13_object, var_14_int); // 0x90 NEW_2
}


task_0_event_102(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int)
{
	var_15_int = 40; // 0x94 PushI
	var_16_bool = var_14_int == var_15_int; // 0x95 Eq
	if(var_16_bool == 0) goto Label_153; // 0x96 JumpB
	var_11_bool = 0; // 0x97 TMovB
	goto Label_157; // 0x98 Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_153:
	var_17_int = 38; // 0x99 PushI
	var_18_bool = var_14_int == var_17_int; // 0x9a Eq
	if(var_18_bool == 0) goto Label_157; // 0x9b JumpB
	var_12_bool = 0; // 0x9c TMovB
}


task_0_event_1(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_float)
{
	var_15_float = 0; var_16_float = 0; // 0xc1 PushV
	var_17_bool = var_10_bool == 0; // 0xc2 Not
	if(var_17_bool == 0) goto Label_197; // 0xc3 JumpB
	return 2; // 0xc4 Return
	
Label_197:
	var_0_float = var_0_float + var_14_float; // 0xc5 Add2
	var_16_float = 16.0; // 0xc6 MovF
	var_18_int = 1; // 0xc7 PushI
	var_19_bool = var_18_int == var_6_int; // 0xc8 Eq
	if(var_19_bool == 0) goto Label_204; // 0xc9 JumpB
	var_16_float = 16.0; // 0xca MovF
	goto Label_213; // 0xcb Jump
	
Label_213:
	var_20_bool = var_12_bool; // 0xd5 PushT
	if(var_20_bool == 0) goto Label_217; // 0xd6 JumpB
	var_21_float = 4.0; // 0xd7 PushF
	var_16_float = var_16_float * var_21_float; // 0xd8 Mult2
	
Label_217:
	var_22_bool = var_11_bool; // 0xd9 PushT
	if(var_22_bool == 0) goto Label_221; // 0xda JumpB
	var_23_float = 4.0; // 0xdb PushF
	var_16_float = var_16_float / var_16_float; // 0xdc Div2
	
Label_221:
	var_24_float = var_14_float * var_16_float; // 0xdd Mult
	var_1_float = var_1_float + var_24_float; // 0xde Add2
	var_25_bool = 0; // 0xdf PushV
	var_25_bool = 0; // 0xe0 MovB
	var_26_int = var_3_int + var_4_int; // 0xe1 Add
	var_27_bool = var_1_float > var_26_int; // 0xe2 GT
	if(var_27_bool == 0) goto Label_234; // 0xe3 JumpB
	var_28_bool = 0; // 0xe4 PushV
	func_31(var_25_bool, var_28_bool); // 0xe5 NEW_2
	var_45_bool = var_28_bool == 0; // 0xe7 Not
	if(var_45_bool == 0) goto Label_234; // 0xe8 JumpB
	var_25_bool = 1; // 0xe9 MovB
	
Label_234:
	if(var_25_bool == 0) goto Label_238; // 0xea JumpB
	func_158(var_15_float, var_16_float); // 0xec NEW_2
	
Label_238:
	return 2; // 0xee Return
	
Label_204:
	var_59_int = 2; // 0xcc PushI
	var_60_bool = var_59_int == var_6_int; // 0xcd Eq
	if(var_60_bool == 0) goto Label_209; // 0xce JumpB
	var_16_float = 16.0; // 0xcf MovF
	goto Label_213; // 0xd0 Jump
	
Label_209:
	var_61_int = 3; // 0xd1 PushI
	var_62_bool = var_61_int == var_6_int; // 0xd2 Eq
	if(var_62_bool == 0) goto Label_213; // 0xd3 JumpB
	var_16_float = 11.0; // 0xd4 MovF
}


task_0_event_200(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0xf0 PushV
	var_17_bool = 1; // 0xf1 MovB
	var_18_bool = 0; // 0xf2 PushV
	var_18_bool = 1; // 0xf3 MovB
	var_19_bool = 0; // 0xf4 PushV
	var_19_bool = 1; // 0xf5 MovB
	var_20_string = "ul"; // 0xf6 PushS
	var_21_bool = var_15_string == var_20_string; // 0xf7 Eq
	if(var_21_bool == 0) goto Label_253; // 0xf8 JumpB
	var_22_string = "bl"; // 0xf9 PushS
	var_23_bool = var_15_string == var_22_string; // 0xfa Eq
	if(var_23_bool == 0) goto Label_253; // 0xfb JumpB
	var_19_bool = 0; // 0xfc MovB
	
Label_253:
	if(var_19_bool == 0) goto Label_258; // 0xfd JumpB
	var_24_string = "br"; // 0xfe PushS
	var_25_bool = var_15_string == var_24_string; // 0xff Eq
	if(var_25_bool == 0) goto Label_258; // 0x100 JumpB
	var_18_bool = 0; // 0x101 MovB
	
Label_258:
	if(var_18_bool == 0) goto Label_263; // 0x102 JumpB
	var_26_string = "ur"; // 0x103 PushS
	var_27_bool = var_15_string == var_26_string; // 0x104 Eq
	if(var_27_bool == 0) goto Label_263; // 0x105 JumpB
	var_17_bool = 0; // 0x106 MovB
	
Label_263:
	if(var_17_bool == 0) goto Label_268; // 0x107 JumpB
	func_342(var_15_string, var_16_object); // 0x109 NEW_2
	return 0; // 0x10b Return
	
Label_268:
	var_35_bool = var_10_bool == 0; // 0x10c Not
	if(var_35_bool == 0) goto Label_274; // 0x10d JumpB
	var_36_int = 0; // 0x10e PushV
	var_36_int = var_14_int; // 0x10f Mov
	func_65(var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int, var_15_string, var_16_object, var_36_int); // 0x110 NEW_2
	
Label_274:
	return 0; // 0x112 Return
}


task_0_event_0(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_float = 0; var_16_int = 0; var_17_int = 0; var_18_float = 0; var_19_int = 0; // 0x113 PushV
	var_20_bool = var_10_bool == 0; // 0x114 Not
	if(var_20_bool == 0) goto Label_279; // 0x115 JumpB
	return 6; // 0x116 Return
	
Label_279:
	var_17_int = var_1_float; // 0x117 MovT
	var_18_float = var_1_float - var_17_int; // 0x118 Sub2
	var_21_string = "intro_font"; // 0x119 PushS
	var_22_int = 4; // 0x11a PushI
	var_23_int = var_5_int + var_22_int; // 0x11b Add
	var_24_int = var_3_int - var_17_int; // 0x11c Sub
	var_25_int = 2; // 0x11d PushI
	var_26_float = var_5_int * var_25_int; // 0x11e Mult
	var_27_int = var_2_int - var_26_float; // 0x11f Sub
	var_28_int = 8; // 0x120 PushI
	var_29_int = var_27_int - var_28_int; // 0x121 Sub
	var_30_float = 0.24314; // 0x122 PushF
	var_31_float = 0.12157; // 0x123 PushF
	var_32_float = 0.11765; // 0x124 PushF
	var_33_int = 1; // 0x125 PushI
	var_34_int = var_33_int - var_18_float; // 0x126 Sub
	PrintInWidth(var_19_int, var_21_string, var_23_int, var_24_int, var_29_int, var_19_int, var_30_float, var_31_float, var_32_float, var_34_int); // 0x127 Func
	var_35_string = "intro_font"; // 0x129 PushS
	var_36_int = 4; // 0x12a PushI
	var_37_int = var_5_int + var_36_int; // 0x12b Add
	var_38_int = var_3_int - var_17_int; // 0x12c Sub
	var_39_int = 1; // 0x12d PushI
	var_40_int = var_38_int - var_39_int; // 0x12e Sub
	var_41_int = 2; // 0x12f PushI
	var_42_float = var_5_int * var_41_int; // 0x130 Mult
	var_43_int = var_2_int - var_42_float; // 0x131 Sub
	var_44_int = 8; // 0x132 PushI
	var_45_int = var_43_int - var_44_int; // 0x133 Sub
	var_46_float = 0.24314; // 0x134 PushF
	var_47_float = 0.12157; // 0x135 PushF
	var_48_float = 0.11765; // 0x136 PushF
	PrintInWidth(var_19_int, var_35_string, var_37_int, var_40_int, var_45_int, var_18_float, var_46_float, var_47_float, var_48_float, var_18_float); // 0x137 Func
	return 6; // 0x139 Return
}


main(var_0_float, var_1_float, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_bool, var_11_bool, var_12_bool, var_13_object)
{
	var_10_bool = 0; // 0x0 TMovB
	var_11_bool = 0; // 0x1 TMovB
	var_12_bool = 0; // 0x2 TMovB
	var_1_float = 0; // 0x3 TMovI
	var_5_int = 0; // 0x4 TMovI
	var_0_float = 0; // 0x5 TMovI
	GetWindowSize(var_12_bool, var_11_bool); // 0x6 Func
	var_14_bool = 1; // 0x8 PushB
	EnableClipping(var_14_bool); // 0x9 Func
	var_15_bool = 1; // 0xb PushB
	SetOwnerDraw(var_15_bool); // 0xc Func
	var_16_bool = 0; // 0xe PushB
	ShowCursor(var_16_bool); // 0xf Func
	CaptureKeyboard(); // 0x11 Func
	var_17_bool = 1; // 0x13 PushB
	SetNeedUpdate(var_17_bool); // 0x14 Func
	func_314(var_12_bool, var_13_object); // 0x17 NEW_2
	func_342(var_12_bool, var_13_object); // 0x1a NEW_2
	ProcessEvents(); // 0x1c Func
	return 0; // 0x1e Return
}


func_65(var_2_int, var_5_int, var_6_int, var_10_bool, var_11_bool, var_12_bool, var_16_object, var_36_int)
{
	var_6_int = var_36_int; // 0x42 TMov
	var_37_int = 1; // 0x43 PushI
	var_38_bool = var_6_int == var_37_int; // 0x44 Eq
	if(var_38_bool == 0) goto Label_77; // 0x45 JumpB
	var_39_int = 204; // 0x46 PushI
	GetStringByID(var_10_bool, var_39_int); // 0x47 Func
	var_40_string = "intro_danko"; // 0x49 PushS
	PlaySound(var_40_string); // 0x4a Func
	goto Label_122; // 0x4c Jump
	
Label_122:
	var_41_string = "intro_font"; // 0x7a PushS
	var_42_int = 2; // 0x7b PushI
	var_43_float = var_5_int * var_42_int; // 0x7c Mult
	var_44_int = var_2_int - var_43_float; // 0x7d Sub
	var_45_int = 8; // 0x7e PushI
	var_46_int = var_44_int - var_45_int; // 0x7f Sub
	GetTextHeightInWidth(var_16_object, var_41_string, var_46_int, var_11_bool); // 0x80 Func
	var_10_bool = 1; // 0x82 TMovB
	return 0; // 0x83 Return
	
Label_77:
	var_47_int = 2; // 0x4d PushI
	var_48_bool = var_6_int == var_47_int; // 0x4e Eq
	if(var_48_bool == 0) goto Label_87; // 0x4f JumpB
	var_49_int = 207; // 0x50 PushI
	GetStringByID(var_10_bool, var_49_int); // 0x51 Func
	var_50_string = "intro_burah"; // 0x53 PushS
	PlaySound(var_50_string); // 0x54 Func
	goto Label_122; // 0x56 Jump
	
Label_87:
	var_51_int = 3; // 0x57 PushI
	var_52_bool = var_6_int == var_51_int; // 0x58 Eq
	if(var_52_bool == 0) goto Label_97; // 0x59 JumpB
	var_53_int = 210; // 0x5a PushI
	GetStringByID(var_10_bool, var_53_int); // 0x5b Func
	var_54_string = "intro_klara"; // 0x5d PushS
	PlaySound(var_54_string); // 0x5e Func
	goto Label_122; // 0x60 Jump
	
Label_97:
	var_55_int = 0; // 0x61 PushI
	var_56_bool = var_6_int == var_55_int; // 0x62 Eq
	if(var_56_bool == 0) goto Label_119; // 0x63 JumpB
	var_57_int = 2; // 0x64 PushI
	irand(var_12_bool, var_57_int); // 0x65 Func
	var_58_int = var_7_int; // 0x67 PushT
	if(var_58_int == 0) goto Label_112; // 0x68 JumpB
	var_59_int = 211; // 0x69 PushI
	GetStringByID(var_10_bool, var_59_int); // 0x6a Func
	var_60_string = "intro1"; // 0x6c PushS
	PlaySound(var_60_string); // 0x6d Func
	goto Label_118; // 0x6f Jump
	
Label_118:
	goto Label_122; // 0x76 Jump
	
Label_112:
	var_61_int = 212; // 0x70 PushI
	GetStringByID(var_10_bool, var_61_int); // 0x71 Func
	var_62_string = "intro2"; // 0x73 PushS
	PlaySound(var_62_string); // 0x74 Func
	
Label_119:
	var_63_int = 600; // 0x77 PushI
	GetStringByID(var_10_bool, var_63_int); // 0x78 Func
}


func_342(var_8_int, var_10_bool)
{
	var_26_string = ""; var_27_int = 0; var_28_string = ""; var_29_int = 0; // 0x156 PushV
	get(var_28_string, var_10_bool); // 0x157 TObjFunc
	var_30_int = 0; // 0x159 PushI
	SendMessage(var_30_int, var_28_string); // 0x15a Func
	var_31_int = 1; // 0x15c PushI
	var_8_int = var_8_int + var_31_int; // 0x15d Add2
	size(var_29_int); // 0x15e TObjFunc
	var_32_bool = var_8_int >= var_29_int; // 0x160 GE
	if(var_32_bool == 0) goto Label_355; // 0x161 JumpB
	var_8_int = var_8_int - var_29_int; // 0x162 Sub2
	
Label_355:
	return 4; // 0x163 Return
}


func_314(var_1_float, var_8_int)
{
	var_8_int = 0; // 0x13a TMovI
	CreateStringVector(var_1_float); // 0x13b Func
	var_18_string = "ul"; // 0x13d PushS
	add(var_18_string); // 0x13e TObjFunc
	var_19_string = "ur"; // 0x140 PushS
	add(var_19_string); // 0x141 TObjFunc
	var_20_string = "br"; // 0x143 PushS
	add(var_20_string); // 0x144 TObjFunc
	var_21_string = "ul"; // 0x146 PushS
	add(var_21_string); // 0x147 TObjFunc
	var_22_string = "br"; // 0x149 PushS
	add(var_22_string); // 0x14a TObjFunc
	var_23_string = "ul"; // 0x14c PushS
	add(var_23_string); // 0x14d TObjFunc
	var_24_string = "bl"; // 0x14f PushS
	add(var_24_string); // 0x150 TObjFunc
	var_25_string = "ul"; // 0x152 PushS
	add(var_25_string); // 0x153 TObjFunc
	return 0; // 0x155 Return
}


func_158(var_6_int, var_10_bool)
{
	var_46_int = 0; // 0x9e PushI
	SendMessageToParent(var_46_int); // 0x9f Func
	var_10_bool = 0; // 0xa1 TMovB
	var_47_int = 1; // 0xa2 PushI
	var_48_bool = var_6_int == var_47_int; // 0xa3 Eq
	if(var_48_bool == 0) goto Label_169; // 0xa4 JumpB
	var_49_string = "intro_danko"; // 0xa5 PushS
	PauseSound(var_49_string); // 0xa6 Func
	goto Label_192; // 0xa8 Jump
	
Label_192:
	return 0; // 0xc0 Return
	
Label_169:
	var_50_int = 2; // 0xa9 PushI
	var_51_bool = var_6_int == var_50_int; // 0xaa Eq
	if(var_51_bool == 0) goto Label_176; // 0xab JumpB
	var_52_string = "intro_burah"; // 0xac PushS
	PauseSound(var_52_string); // 0xad Func
	goto Label_192; // 0xaf Jump
	
Label_176:
	var_53_int = 3; // 0xb0 PushI
	var_54_bool = var_6_int == var_53_int; // 0xb1 Eq
	if(var_54_bool == 0) goto Label_183; // 0xb2 JumpB
	var_55_string = "intro_klara"; // 0xb3 PushS
	PauseSound(var_55_string); // 0xb4 Func
	goto Label_192; // 0xb6 Jump
	
Label_183:
	var_56_int = var_7_int; // 0xb7 PushT
	if(var_56_int == 0) goto Label_189; // 0xb8 JumpB
	var_57_string = "intro1"; // 0xb9 PushS
	PauseSound(var_57_string); // 0xba Func
	goto Label_192; // 0xbc Jump
	
Label_189:
	var_58_string = "intro2"; // 0xbd PushS
	PauseSound(var_58_string); // 0xbe Func
}


func_31(var_6_int, var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x1f PushV
	var_31_int = 1; // 0x20 PushI
	var_32_bool = var_6_int == var_31_int; // 0x21 Eq
	if(var_32_bool == 0) goto Label_39; // 0x22 JumpB
	var_33_string = "intro_danko"; // 0x23 PushS
	IsSoundPlaying(var_30_bool, var_33_string); // 0x24 Func
	goto Label_45; // 0x26 Jump
	
Label_45:
	var_34_int = 3; // 0x2d PushI
	var_35_bool = var_6_int == var_34_int; // 0x2e Eq
	if(var_35_bool == 0) goto Label_51; // 0x2f JumpB
	var_36_string = "intro_klara"; // 0x30 PushS
	IsSoundPlaying(var_30_bool, var_36_string); // 0x31 Func
	
Label_51:
	var_37_int = 0; // 0x33 PushI
	var_38_bool = var_6_int == var_37_int; // 0x34 Eq
	if(var_38_bool == 0) goto Label_63; // 0x35 JumpB
	var_39_int = var_7_int; // 0x36 PushT
	if(var_39_int == 0) goto Label_60; // 0x37 JumpB
	var_40_string = "intro1"; // 0x38 PushS
	IsSoundPlaying(var_30_bool, var_40_string); // 0x39 Func
	goto Label_63; // 0x3b Jump
	
Label_63:
	var_28_bool = var_30_bool; // 0x3f Mov
	return 2; // 0x40 Return
	
Label_60:
	var_41_string = "intro2"; // 0x3c PushS
	IsSoundPlaying(var_30_bool, var_41_string); // 0x3d Func
	
Label_39:
	var_42_int = 2; // 0x27 PushI
	var_43_bool = var_6_int == var_42_int; // 0x28 Eq
	if(var_43_bool == 0) goto Label_45; // 0x29 JumpB
	var_44_string = "intro_burah"; // 0x2a PushS
	IsSoundPlaying(var_30_bool, var_44_string); // 0x2b Func
}


