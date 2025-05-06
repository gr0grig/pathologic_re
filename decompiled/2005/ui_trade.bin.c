task_0_event_100(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int)
{
	DestroyWindow(); // 0x6f Func
	return 0; // 0x71 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_int, var_28_string, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x72 PushV
	var_32_int = 0; var_33_int = 0; var_34_string = ""; // 0x73 PushV
	var_33_int = var_27_int; // 0x74 Mov
	var_34_string = var_28_string; // 0x75 Mov
	func_1462(var_33_int, var_34_string); // 0x76 NEW_2
	var_31_int = var_32_int; // 0x77 Mov
	var_53_int = -1; // 0x79 PushI
	var_54_bool = var_31_int != var_53_int; // 0x7a Neq
	if(var_54_bool == 0) goto Label_137; // 0x7b JumpB
	var_55_int = 0; // 0x7c PushI
	var_56_bool = var_27_int == var_55_int; // 0x7d Eq
	if(var_56_bool == 0) goto Label_132; // 0x7e JumpB
	var_57_int = 0; // 0x7f PushV
	var_57_int = var_31_int; // 0x80 Mov
	func_1123(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_57_int); // 0x81 NEW_2
	goto Label_136; // 0x83 Jump
	
Label_136:
	return 2; // 0x88 Return
	
Label_132:
	var_401_int = 0; // 0x84 PushV
	var_401_int = var_31_int; // 0x85 Mov
	func_1189(var_28_string, var_29_object, var_30_int, var_31_int, var_401_int); // 0x86 NEW_2
	
Label_137:
	var_493_int = 0; var_494_int = 0; var_495_string = ""; // 0x89 PushV
	var_494_int = var_27_int; // 0x8a Mov
	var_495_string = var_28_string; // 0x8b Mov
	func_1480(var_494_int, var_495_string); // 0x8c NEW_2
	var_31_int = var_493_int; // 0x8d Mov
	var_504_int = -1; // 0x8f PushI
	var_505_bool = var_31_int != var_504_int; // 0x90 Neq
	if(var_505_bool == 0) goto Label_159; // 0x91 JumpB
	var_506_int = 0; // 0x92 PushI
	var_507_bool = var_27_int == var_506_int; // 0x93 Eq
	if(var_507_bool == 0) goto Label_154; // 0x94 JumpB
	var_508_int = 0; // 0x95 PushV
	var_508_int = var_31_int; // 0x96 Mov
	func_1253(var_28_string, var_29_object, var_30_int, var_31_int, var_508_int); // 0x97 NEW_2
	goto Label_158; // 0x99 Jump
	
Label_158:
	return 2; // 0x9e Return
	
Label_154:
	var_558_int = 0; // 0x9a PushV
	var_558_int = var_31_int; // 0x9b Mov
	func_1316(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_558_int); // 0x9c NEW_2
	
Label_159:
	var_602_string = "cancel_button"; // 0x9f PushS
	var_603_bool = var_28_string == var_602_string; // 0xa0 Eq
	if(var_603_bool == 0) goto Label_166; // 0xa1 JumpB
	func_270(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int); // 0xa3 NEW_2
	return 2; // 0xa5 Return
	
Label_166:
	var_758_string = "background_left"; // 0xa6 PushS
	var_759_bool = var_28_string == var_758_string; // 0xa7 Eq
	if(var_759_bool == 0) goto Label_179; // 0xa8 JumpB
	var_760_string = "background_left"; // 0xa9 PushS
	var_761_int = var_760_string + var_27_int; // 0xaa Add
	Trace(var_761_int); // 0xab Func
	var_762_int = 2; // 0xad PushI
	var_763_float = var_762_int * var_27_int; // 0xae Mult
	var_0_int = var_0_int + var_763_float; // 0xaf Add2
	func_628(var_30_int, var_31_int); // 0xb1 NEW_2
	
Label_179:
	var_764_string = "background_right"; // 0xb3 PushS
	var_765_bool = var_28_string == var_764_string; // 0xb4 Eq
	if(var_765_bool == 0) goto Label_192; // 0xb5 JumpB
	var_766_string = "background_right"; // 0xb6 PushS
	var_767_int = var_766_string + var_27_int; // 0xb7 Add
	Trace(var_767_int); // 0xb8 Func
	var_768_int = 2; // 0xba PushI
	var_769_float = var_768_int * var_27_int; // 0xbb Mult
	var_1_int = var_1_int + var_769_float; // 0xbc Add2
	func_719(var_30_int, var_31_int); // 0xbe NEW_2
	
Label_192:
	var_770_string = "l_scroll_button_top"; // 0xc0 PushS
	var_771_bool = var_28_string == var_770_string; // 0xc1 Eq
	if(var_771_bool == 0) goto Label_201; // 0xc2 JumpB
	var_772_int = 2; // 0xc3 PushI
	var_0_int = var_0_int - var_772_int; // 0xc4 Sub2
	func_628(var_30_int, var_31_int); // 0xc6 NEW_2
	return 2; // 0xc8 Return
	
Label_201:
	var_773_string = "l_scroll_button_bottom"; // 0xc9 PushS
	var_774_bool = var_28_string == var_773_string; // 0xca Eq
	if(var_774_bool == 0) goto Label_210; // 0xcb JumpB
	var_775_int = 2; // 0xcc PushI
	var_0_int = var_0_int + var_775_int; // 0xcd Add2
	func_628(var_30_int, var_31_int); // 0xcf NEW_2
	return 2; // 0xd1 Return
	
Label_210:
	var_776_string = "r_scroll_button_top"; // 0xd2 PushS
	var_777_bool = var_28_string == var_776_string; // 0xd3 Eq
	if(var_777_bool == 0) goto Label_219; // 0xd4 JumpB
	var_778_int = 2; // 0xd5 PushI
	var_1_int = var_1_int - var_778_int; // 0xd6 Sub2
	func_719(var_30_int, var_31_int); // 0xd8 NEW_2
	return 2; // 0xda Return
	
Label_219:
	var_779_string = "r_scroll_button_bottom"; // 0xdb PushS
	var_780_bool = var_28_string == var_779_string; // 0xdc Eq
	if(var_780_bool == 0) goto Label_228; // 0xdd JumpB
	var_781_int = 2; // 0xde PushI
	var_1_int = var_1_int + var_781_int; // 0xdf Add2
	func_719(var_30_int, var_31_int); // 0xe1 NEW_2
	return 2; // 0xe3 Return
	
Label_228:
	var_782_string = "l_scrollbar"; // 0xe4 PushS
	var_783_bool = var_28_string == var_782_string; // 0xe5 Eq
	if(var_783_bool == 0) goto Label_245; // 0xe6 JumpB
	var_784_int = 0; // 0xe7 PushV
	func_592(var_784_int); // 0xe8 NEW_2
	var_798_float = var_784_int * var_27_int; // 0xea Mult
	var_799_float = 100.0; // 0xeb PushF
	var_800_float = var_798_float / var_799_float; // 0xec Div
	var_801_float = 0.5; // 0xed PushF
	var_0_int = var_800_float + var_801_float; // 0xee Add2
	var_802_int = 2; // 0xef PushI
	var_0_int = var_0_int * var_802_int; // 0xf0 Mult2
	func_628(var_30_int, var_31_int); // 0xf2 NEW_2
	return 2; // 0xf4 Return
	
Label_245:
	var_803_string = "r_scrollbar"; // 0xf5 PushS
	var_804_bool = var_28_string == var_803_string; // 0xf6 Eq
	if(var_804_bool == 0) goto Label_262; // 0xf7 JumpB
	var_805_int = 0; // 0xf8 PushV
	func_610(var_805_int); // 0xf9 NEW_2
	var_819_float = var_805_int * var_27_int; // 0xfb Mult
	var_820_float = 100.0; // 0xfc PushF
	var_821_float = var_819_float / var_820_float; // 0xfd Div
	var_822_float = 0.5; // 0xfe PushF
	var_1_int = var_821_float + var_822_float; // 0xff Add2
	var_823_int = 2; // 0x100 PushI
	var_1_int = var_1_int * var_823_int; // 0x101 Mult2
	func_719(var_30_int, var_31_int); // 0x103 NEW_2
	return 2; // 0x105 Return
	
Label_262:
	var_824_string = "ok_button"; // 0x106 PushS
	var_825_bool = var_28_string == var_824_string; // 0x107 Eq
	if(var_825_bool == 0) goto Label_269; // 0x108 JumpB
	func_818(var_30_int, var_31_int); // 0x10a NEW_2
	return 2; // 0x10c Return
	
Label_269:
	return 2; // 0x10d Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object)
{
	var_27_float = 0; var_28_float = 0; // 0x30 PushV
	GetContainer(var_3_int); // 0x31 Func
	CreateObjectVector(var_9_object); // 0x33 Func
	CreateObjectVector(var_8_object); // 0x35 Func
	CreateObjectVector(var_25_int); // 0x37 Func
	CreateIntVector(var_24_int); // 0x39 Func
	CreateIntVector(var_23_object); // 0x3b Func
	CreateObjectVector(var_22_object); // 0x3d Func
	CreateIntVector(var_21_object); // 0x3f Func
	CreateIntVector(var_20_object); // 0x41 Func
	CreateObjectVector(var_19_object); // 0x43 Func
	CreateIntVector(var_18_object); // 0x45 Func
	CreateObjectVector(var_17_object); // 0x47 Func
	CreateIntVector(var_16_object); // 0x49 Func
	CreateObjectVector(var_15_object); // 0x4b Func
	CreateIntVector(var_14_object); // 0x4d Func
	CreateObjectVector(var_13_object); // 0x4f Func
	CreateIntVector(var_12_object); // 0x51 Func
	CreateObjectVector(var_11_object); // 0x53 Func
	CreateIntVector(var_10_object); // 0x55 Func
	var_29_int = 0; // 0x57 PushV
	func_1550(var_29_int); // 0x58 NEW_2
	var_25_int = var_29_int; // 0x59 TMov
	func_270(var_24_int, var_25_int, var_26_object, var_27_float, var_28_float); // 0x5c NEW_2
	GetGameTime(var_28_float); // 0x5e Func
	var_362_int = 1; // 0x60 PushI
	var_363_int = 24; // 0x61 PushI
	var_364_float = var_28_float / var_363_int; // 0x62 Div
	var_24_int = var_362_int + var_364_float; // 0x63 Add2
	ShowCursor(); // 0x64 Func
	var_365_string = "default"; // 0x66 PushS
	SetCursor(var_365_string); // 0x67 Func
	CaptureKeyboard(); // 0x69 Func
	ProcessEvents(); // 0x6b Func
	return 2; // 0x6d Return
}


func_1408(var_1_int, var_308_int, var_309_int)
{
	var_310_int = 0; var_311_int = 0; var_312_int = 0; var_313_int = 0; // 0x580 PushV
	size(var_312_int); // 0x581 TObjFunc
	var_314_int = var_309_int + var_1_int; // 0x583 Add
	var_315_bool = var_314_int >= var_312_int; // 0x584 GE
	if(var_315_bool == 0) goto Label_1416; // 0x585 JumpB
	var_308_int = 0; // 0x586 MovI
	return 4; // 0x587 Return
	
Label_1416:
	var_316_int = var_309_int + var_1_int; // 0x588 Add
	get(var_313_int, var_316_int); // 0x589 TObjFunc
	var_308_int = var_313_int; // 0x58b Mov
	return 4; // 0x58c Return
}


func_0(var_250_object)
{
	var_251_int = 0; var_252_object = Obj(); var_253_int = 0; var_254_int = 0; var_255_object = Obj(); var_256_int = 0; // 0x0 PushV
	size(var_254_int); // 0x1 TObjFunc
	var_256_int = 0; // 0x3 MovI
	
Label_4:
	var_257_bool = var_256_int < var_254_int; // 0x4 LT
	if(var_257_bool == 0) goto Label_20; // 0x5 JumpB
	get(var_255_object, var_256_int); // 0x6 TObjFunc
	var_258_bool = 0; var_259_object = Obj(); var_260_object = Obj(); // 0x8 PushV
	var_259_object = var_255_object; // 0x9 Mov
	var_260_object = var_250_object; // 0xa Mov
	func_1727(var_258_bool, var_259_object, var_260_object); // 0xb NEW_2
	if(var_258_bool == 0) goto Label_17; // 0xd JumpB
	remove(var_256_int); // 0xe TObjFunc
	return 6; // 0x10 Return
	
Label_17:
	var_265_int = 1; // 0x11 PushI
	var_256_int = var_256_int + var_265_int; // 0x12 Add2
	goto Label_4; // 0x13 Jump
	
Label_20:
	add(var_250_object); // 0x14 TObjFunc
	return 6; // 0x16 Return
}


func_1669(var_53_int)
{
	var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); // 0x685 PushV
	GetContainer(var_57_object); // 0x686 Func
	GetItemCount(var_56_int); // 0x688 ObjFunc
	var_53_int = var_56_int; // 0x68a Mov
	return 4; // 0x68b Return
}


func_1034(var_195_bool, var_196_object)
{
	var_199_int = 0; var_200_object = Obj(); var_201_int = 0; var_202_int = 0; var_203_int = 0; var_204_object = Obj(); var_205_int = 0; var_206_int = 0; // 0x40a PushV
	size(var_203_int); // 0x40b ObjFunc
	var_207_int = 0; var_208_object = Obj(); // 0x40d PushV
	var_208_object = var_196_object; // 0x40e Mov
	func_1660(var_207_int, var_208_object); // 0x40f NEW_2
	var_213_int = 1; // 0x411 PushI
	var_214_bool = var_207_int > var_213_int; // 0x412 GT
	if(var_214_bool == 0) goto Label_1068; // 0x413 JumpB
	var_205_int = 0; // 0x414 MovI
	
Label_1045:
	var_215_bool = var_205_int < var_203_int; // 0x415 LT
	if(var_215_bool == 0) goto Label_1068; // 0x416 JumpB
	get(var_204_object, var_205_int); // 0x417 ObjFunc
	get(var_206_int, var_205_int); // 0x419 ObjFunc
	var_216_bool = var_196_object == var_204_object; // 0x41b Eq
	if(var_216_bool == 0) goto Label_1065; // 0x41c JumpB
	var_217_int = 0; var_218_object = Obj(); // 0x41d PushV
	var_218_object = var_196_object; // 0x41e Mov
	func_1660(var_217_int, var_218_object); // 0x41f NEW_2
	var_219_bool = var_206_int < var_217_int; // 0x421 LT
	if(var_219_bool == 0) goto Label_1063; // 0x422 JumpB
	var_220_int = 1; // 0x423 PushI
	var_221_int = var_206_int + var_220_int; // 0x424 Add
	set(var_205_int, var_221_int); // 0x425 ObjFunc
	
Label_1063:
	var_195_bool = 1; // 0x427 MovB
	return 8; // 0x428 Return
	
Label_1065:
	var_222_int = 1; // 0x429 PushI
	var_205_int = var_205_int + var_222_int; // 0x42a Add2
	goto Label_1045; // 0x42b Jump
	
Label_1068:
	var_223_int = 12; // 0x42c PushI
	var_224_bool = var_203_int < var_223_int; // 0x42d LT
	if(var_224_bool == 0) goto Label_1078; // 0x42e JumpB
	add(var_196_object); // 0x42f ObjFunc
	var_225_int = 1; // 0x431 PushI
	add(var_225_int); // 0x432 ObjFunc
	var_195_bool = 1; // 0x434 MovB
	return 8; // 0x435 Return
	
Label_1078:
	var_195_bool = 0; // 0x436 MovB
	return 8; // 0x437 Return
}


func_524(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object)
{
	var_170_int = 0; var_171_object = Obj(); var_172_object = Obj(); // 0x20c PushV
	var_170_int = 0; // 0x20d MovI
	var_171_object = var_10_object; // 0x20e MovT
	var_172_object = var_11_object; // 0x20f MovT
	func_555(var_172_object); // 0x210 NEW_2
	var_194_int = 0; var_195_object = Obj(); var_196_object = Obj(); // 0x212 PushV
	var_194_int = 1; // 0x213 MovI
	var_195_object = var_12_object; // 0x214 MovT
	var_196_object = var_13_object; // 0x215 MovT
	func_555(var_196_object); // 0x216 NEW_2
	var_197_int = 0; var_198_object = Obj(); var_199_object = Obj(); // 0x218 PushV
	var_197_int = 2; // 0x219 MovI
	var_198_object = var_14_object; // 0x21a MovT
	var_199_object = var_15_object; // 0x21b MovT
	func_555(var_199_object); // 0x21c NEW_2
	var_200_int = 0; var_201_object = Obj(); var_202_object = Obj(); // 0x21e PushV
	var_200_int = 3; // 0x21f MovI
	var_201_object = var_16_object; // 0x220 MovT
	var_202_object = var_17_object; // 0x221 MovT
	func_555(var_202_object); // 0x222 NEW_2
	var_203_int = 0; var_204_object = Obj(); var_205_object = Obj(); // 0x224 PushV
	var_203_int = 4; // 0x225 MovI
	var_204_object = var_18_object; // 0x226 MovT
	var_205_object = var_19_object; // 0x227 MovT
	func_555(var_205_object); // 0x228 NEW_2
	return 0; // 0x22a Return
}


func_1677(var_83_int, var_84_int)
{
	var_85_int = 0; var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); // 0x68d PushV
	GetPlayerContainer(var_88_object); // 0x68e Func
	GetItemCount(var_87_int, var_84_int); // 0x690 ObjFunc
	var_83_int = var_87_int; // 0x692 Mov
	return 4; // 0x693 Return
}


func_270(var_0_int, var_1_int, var_2_int, var_3_int, var_25_int)
{
	var_39_int = 0; var_40_int = 0; // 0x10e PushV
	var_0_int = 0; // 0x10f TMovI
	var_1_int = 0; // 0x110 TMovI
	var_3_int = 0; // 0x111 TMovI
	var_41_int = 0; // 0x112 PushI
	var_42_bool = var_25_int == var_41_int; // 0x113 Eq
	if(var_42_bool == 0) goto Label_280; // 0x114 JumpB
	GetPlayerMoneyCount(var_39_int); // 0x115 Func
	goto Label_281; // 0x117 Jump
	
Label_281:
	clear(); // 0x119 TObjFunc
	clear(); // 0x11b TObjFunc
	clear(); // 0x11d TObjFunc
	clear(); // 0x11f TObjFunc
	clear(); // 0x121 TObjFunc
	clear(); // 0x123 TObjFunc
	clear(); // 0x125 TObjFunc
	clear(); // 0x127 TObjFunc
	clear(); // 0x129 TObjFunc
	clear(); // 0x12b TObjFunc
	clear(); // 0x12d TObjFunc
	clear(); // 0x12f TObjFunc
	clear(); // 0x131 TObjFunc
	clear(); // 0x133 TObjFunc
	clear(); // 0x135 TObjFunc
	clear(); // 0x137 TObjFunc
	clear(); // 0x139 TObjFunc
	clear(); // 0x13b TObjFunc
	func_493(); // 0x13e NEW_2
	func_367(); // 0x141 NEW_2
	func_524(var_21_object, var_22_object, var_23_object, var_24_int, var_25_int, var_26_object, var_27_float, var_28_float, var_39_int, var_40_int); // 0x144 NEW_2
	func_628(var_39_int, var_40_int); // 0x147 NEW_2
	func_814(var_40_int); // 0x14a NEW_2
	func_719(var_39_int, var_40_int); // 0x14d NEW_2
	func_810(var_40_int); // 0x150 NEW_2
	size(var_40_int); // 0x152 TObjFunc
	var_350_int = 18; // 0x154 PushI
	var_351_bool = var_40_int <= var_350_int; // 0x155 LE
	if(var_351_bool == 0) goto Label_348; // 0x156 JumpB
	var_352_int = 16384; // 0x157 PushI
	var_353_string = "l_scrollbar"; // 0x158 PushS
	SendMessage(var_352_int, var_353_string); // 0x159 Func
	goto Label_352; // 0x15b Jump
	
Label_352:
	size(var_40_int); // 0x160 TObjFunc
	var_354_int = 18; // 0x162 PushI
	var_355_bool = var_40_int <= var_354_int; // 0x163 LE
	if(var_355_bool == 0) goto Label_362; // 0x164 JumpB
	var_356_int = 16384; // 0x165 PushI
	var_357_string = "r_scrollbar"; // 0x166 PushS
	SendMessage(var_356_int, var_357_string); // 0x167 Func
	goto Label_366; // 0x169 Jump
	
Label_366:
	return 2; // 0x16e Return
	
Label_362:
	var_358_int = 0; // 0x16a PushI
	var_359_string = "r_scrollbar"; // 0x16b PushS
	SendMessage(var_358_int, var_359_string); // 0x16c Func
	
Label_348:
	var_360_int = 0; // 0x15c PushI
	var_361_string = "l_scrollbar"; // 0x15d PushS
	SendMessage(var_360_int, var_361_string); // 0x15e Func
	
Label_280:
	var_2_int = 0; // 0x118 TMovI
}


func_1550(var_29_int)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; // 0x60e PushV
	GetContainer(var_33_object); // 0x60f Func
	var_36_string = "barter"; // 0x611 PushS
	HasProperty(var_36_string, var_34_bool); // 0x612 ObjFunc
	var_37_bool = var_34_bool == 0; // 0x614 Not
	if(var_37_bool == 0) goto Label_1560; // 0x615 JumpB
	var_29_int = 0; // 0x616 MovI
	return 6; // 0x617 Return
	
Label_1560:
	var_38_string = "barter"; // 0x618 PushS
	GetProperty(var_38_string, var_35_int); // 0x619 ObjFunc
	var_29_int = var_35_int; // 0x61b Mov
	return 6; // 0x61c Return
}


func_912(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_182_bool, var_183_object)
{
	var_184_int = 0; var_185_int = 0; // 0x390 PushV
	var_186_int = 0; var_187_object = Obj(); // 0x391 PushV
	var_187_object = var_183_object; // 0x392 Mov
	func_1650(var_186_int, var_187_object); // 0x393 NEW_2
	var_185_int = var_186_int; // 0x394 Mov
	var_193_int = 0; // 0x396 PushI
	var_194_bool = var_185_int == var_193_int; // 0x397 Eq
	if(var_194_bool == 0) goto Label_930; // 0x398 JumpB
	var_195_bool = 0; var_196_object = Obj(); var_197_object = Obj(); var_198_object = Obj(); // 0x399 PushV
	var_196_object = var_183_object; // 0x39a Mov
	var_197_object = var_10_object; // 0x39b MovT
	var_198_object = var_11_object; // 0x39c MovT
	func_1034(var_197_object, var_198_object); // 0x39d NEW_2
	var_182_bool = var_195_bool; // 0x39e Mov
	return 2; // 0x3a0 Return
	
Label_930:
	var_226_int = 1; // 0x3a2 PushI
	var_227_bool = var_185_int == var_226_int; // 0x3a3 Eq
	if(var_227_bool == 0) goto Label_942; // 0x3a4 JumpB
	var_228_bool = 0; var_229_object = Obj(); var_230_object = Obj(); var_231_object = Obj(); // 0x3a5 PushV
	var_229_object = var_183_object; // 0x3a6 Mov
	var_230_object = var_12_object; // 0x3a7 MovT
	var_231_object = var_13_object; // 0x3a8 MovT
	func_1034(var_230_object, var_231_object); // 0x3a9 NEW_2
	var_182_bool = var_228_bool; // 0x3aa Mov
	return 2; // 0x3ac Return
	
Label_942:
	var_232_int = 2; // 0x3ae PushI
	var_233_bool = var_185_int == var_232_int; // 0x3af Eq
	if(var_233_bool == 0) goto Label_954; // 0x3b0 JumpB
	var_234_bool = 0; var_235_object = Obj(); var_236_object = Obj(); var_237_object = Obj(); // 0x3b1 PushV
	var_235_object = var_183_object; // 0x3b2 Mov
	var_236_object = var_14_object; // 0x3b3 MovT
	var_237_object = var_15_object; // 0x3b4 MovT
	func_1034(var_236_object, var_237_object); // 0x3b5 NEW_2
	var_182_bool = var_234_bool; // 0x3b6 Mov
	return 2; // 0x3b8 Return
	
Label_954:
	var_238_int = 3; // 0x3ba PushI
	var_239_bool = var_185_int == var_238_int; // 0x3bb Eq
	if(var_239_bool == 0) goto Label_965; // 0x3bc JumpB
	var_240_bool = 0; var_241_object = Obj(); var_242_object = Obj(); var_243_object = Obj(); // 0x3bd PushV
	var_241_object = var_183_object; // 0x3be Mov
	var_242_object = var_16_object; // 0x3bf MovT
	var_243_object = var_17_object; // 0x3c0 MovT
	func_1034(var_242_object, var_243_object); // 0x3c1 NEW_2
	var_182_bool = var_240_bool; // 0x3c2 Mov
	return 2; // 0x3c4 Return
	
Label_965:
	var_244_bool = 0; var_245_object = Obj(); var_246_object = Obj(); var_247_object = Obj(); // 0x3c5 PushV
	var_245_object = var_183_object; // 0x3c6 Mov
	var_246_object = var_18_object; // 0x3c7 MovT
	var_247_object = var_19_object; // 0x3c8 MovT
	func_1034(var_246_object, var_247_object); // 0x3c9 NEW_2
	var_182_bool = var_244_bool; // 0x3ca Mov
	return 2; // 0x3cc Return
}


func_1421(var_126_int)
{
	var_127_float = 0; var_128_float = 0; // 0x58d PushV
	GetGameTime(var_128_float); // 0x58e Func
	var_129_int = 1; // 0x590 PushI
	var_130_int = 0; // 0x591 PushV
	var_131_int = 24; // 0x592 PushI
	var_130_int = var_128_float / var_128_float; // 0x593 Div2
	var_126_int = var_129_int + var_130_int; // 0x594 Add2
	return 2; // 0x595 Return
}


func_1685(var_105_object, var_106_int, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); // 0x695 PushV
	GetPlayerContainer(var_110_object); // 0x696 Func
	GetItem(var_111_object, var_107_int, var_106_int); // 0x698 ObjFunc
	var_105_object = var_111_object; // 0x69a Mov
	return 4; // 0x69b Return
}


func_1430(var_254_string, var_255_int)
{
	var_256_int = 1; // 0x597 PushI
	var_257_int = var_255_int + var_256_int; // 0x598 Add
	var_258_int = 10; // 0x599 PushI
	var_259_bool = var_257_int < var_258_int; // 0x59a LT
	if(var_259_bool == 0) goto Label_1441; // 0x59b JumpB
	var_260_string = "l_slot0"; // 0x59c PushS
	var_261_int = 1; // 0x59d PushI
	var_262_int = var_255_int + var_261_int; // 0x59e Add
	var_254_string = var_260_string + var_262_int; // 0x59f Add2
	return 0; // 0x5a0 Return
	
Label_1441:
	var_263_string = "l_slot"; // 0x5a1 PushS
	var_264_int = 1; // 0x5a2 PushI
	var_265_int = var_255_int + var_264_int; // 0x5a3 Add
	var_254_string = var_263_string + var_265_int; // 0x5a4 Add2
	return 0; // 0x5a5 Return
}


func_1813(var_861_bool, var_863_object, var_864_int)
{
	var_865_bool = 0; var_866_bool = 0; // 0x715 PushV
	var_867_int = 1; // 0x716 PushI
	AddItem(var_866_bool, var_863_object, var_864_int, var_867_int); // 0x717 ObjFunc
	var_861_bool = var_866_bool; // 0x719 Mov
	return 2; // 0x71a Return
}


func_24(var_471_object)
{
	var_472_int = 0; var_473_object = Obj(); var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_int = 0; // 0x18 PushV
	size(var_475_int); // 0x19 TObjFunc
	var_477_int = 0; // 0x1b MovI
	
Label_28:
	var_478_bool = var_477_int < var_475_int; // 0x1c LT
	if(var_478_bool == 0) goto Label_44; // 0x1d JumpB
	get(var_476_object, var_477_int); // 0x1e TObjFunc
	var_479_bool = 0; var_480_object = Obj(); var_481_object = Obj(); // 0x20 PushV
	var_480_object = var_476_object; // 0x21 Mov
	var_481_object = var_471_object; // 0x22 Mov
	func_1727(var_479_bool, var_480_object, var_481_object); // 0x23 NEW_2
	if(var_479_bool == 0) goto Label_41; // 0x25 JumpB
	remove(var_477_int); // 0x26 TObjFunc
	return 6; // 0x28 Return
	
Label_41:
	var_482_int = 1; // 0x29 PushI
	var_477_int = var_477_int + var_482_int; // 0x2a Add2
	goto Label_28; // 0x2b Jump
	
Label_44:
	add(var_471_object); // 0x2c TObjFunc
	return 6; // 0x2e Return
}


func_1566(var_124_int)
{
	var_126_int = 0; var_127_int = 0; // 0x61e PushV
	GetItemID(var_127_int); // 0x61f ObjFunc
	var_124_int = var_127_int; // 0x621 Mov
	return 2; // 0x622 Return
}


func_1694(var_98_int, var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_int = 0; // 0x69e PushV
	GetPlayerContainer(var_103_object); // 0x69f Func
	GetItemAmount(var_104_int, var_100_int, var_99_int); // 0x6a1 ObjFunc
	var_98_int = var_104_int; // 0x6a3 Mov
	return 4; // 0x6a4 Return
}


func_418(var_25_int, var_73_int, var_74_bool)
{
	var_75_object = Obj(); var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; var_82_int = 0; // 0x1a2 PushV
	var_83_int = 0; var_84_int = 0; // 0x1a3 PushV
	var_84_int = var_73_int; // 0x1a4 Mov
	func_1677(var_83_int, var_84_int); // 0x1a5 NEW_2
	var_80_int = var_83_int; // 0x1a6 Mov
	var_82_int = 0; // 0x1a8 MovI
	
Label_425:
	var_89_bool = var_82_int < var_80_int; // 0x1a9 LT
	if(var_89_bool == 0) goto Label_491; // 0x1aa JumpB
	var_90_bool = 0; var_91_int = 0; var_92_int = 0; // 0x1ab PushV
	var_91_int = var_73_int; // 0x1ac Mov
	var_92_int = var_82_int; // 0x1ad Mov
	func_1702(var_90_bool, var_91_int, var_92_int); // 0x1ae NEW_2
	if(var_90_bool == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_488; // 0x1b1 Jump
	
Label_488:
	var_97_int = 1; // 0x1e8 PushI
	var_82_int = var_82_int + var_97_int; // 0x1e9 Add2
	goto Label_425; // 0x1ea Jump
	
Label_434:
	var_98_int = 0; var_99_int = 0; var_100_int = 0; // 0x1b2 PushV
	var_99_int = var_73_int; // 0x1b3 Mov
	var_100_int = var_82_int; // 0x1b4 Mov
	func_1694(var_98_int, var_99_int, var_100_int); // 0x1b5 NEW_2
	var_81_int = var_98_int; // 0x1b6 Mov
	var_105_object = Obj(); var_106_int = 0; var_107_int = 0; // 0x1b8 PushV
	var_106_int = var_73_int; // 0x1b9 Mov
	var_107_int = var_82_int; // 0x1ba Mov
	func_1685(var_105_object, var_106_int, var_107_int); // 0x1bb NEW_2
	var_79_object = var_105_object; // 0x1bc Mov
	var_112_bool = 0; // 0x1be PushV
	var_112_bool = 0; // 0x1bf MovB
	var_113_bool = var_74_bool; // 0x1c0 Push
	if(var_113_bool == 0) goto Label_458; // 0x1c1 JumpB
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; var_117_bool = 0; // 0x1c2 PushV
	var_115_object = var_79_object; // 0x1c3 Mov
	var_116_int = var_25_int; // 0x1c4 MovT
	var_117_bool = 1; // 0x1c5 MovB
	func_1738(var_114_bool, var_115_object, var_116_int, var_117_bool); // 0x1c6 NEW_2
	if(var_114_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_112_bool = 1; // 0x1c9 MovB
	
Label_458:
	if(var_112_bool == 0) goto Label_467; // 0x1ca JumpB
	add(var_79_object); // 0x1cb TObjFunc
	add(var_81_int); // 0x1cd TObjFunc
	var_143_int = 0; // 0x1cf PushI
	add(var_143_int); // 0x1d0 TObjFunc
	goto Label_488; // 0x1d2 Jump
	
Label_467:
	var_144_bool = 0; // 0x1d3 PushV
	var_144_bool = 0; // 0x1d4 MovB
	var_145_bool = var_74_bool == 0; // 0x1d5 Not
	if(var_145_bool == 0) goto Label_480; // 0x1d6 JumpB
	var_146_bool = 0; var_147_object = Obj(); var_148_int = 0; var_149_bool = 0; // 0x1d7 PushV
	var_147_object = var_79_object; // 0x1d8 Mov
	var_148_int = var_25_int; // 0x1d9 MovT
	var_149_bool = 1; // 0x1da MovB
	func_1738(var_146_bool, var_147_object, var_148_int, var_149_bool); // 0x1db NEW_2
	var_150_bool = var_146_bool == 0; // 0x1dd Not
	if(var_150_bool == 0) goto Label_480; // 0x1de JumpB
	var_144_bool = 1; // 0x1df MovB
	
Label_480:
	if(var_144_bool == 0) goto Label_488; // 0x1e0 JumpB
	add(var_79_object); // 0x1e1 TObjFunc
	add(var_81_int); // 0x1e3 TObjFunc
	var_151_int = 0; // 0x1e5 PushI
	add(var_151_int); // 0x1e6 TObjFunc
	
Label_491:
	return 8; // 0x1eb Return
}


func_1571(var_103_int, var_104_object, var_105_int)
{
	var_106_int = 0; var_107_int = 0; var_108_int = 0; var_109_string = ""; var_110_bool = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_string = ""; var_119_bool = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; // 0x623 PushV
	var_124_int = 0; // 0x624 PushI
	var_125_bool = var_105_int == var_124_int; // 0x625 Eq
	if(var_125_bool == 0) goto Label_1623; // 0x626 JumpB
	var_126_int = 0; // 0x627 PushV
	func_1421(var_126_int); // 0x628 NEW_2
	var_115_int = var_126_int; // 0x629 Mov
	var_116_int = 0; // 0x62b MovI
	var_117_int = 1; // 0x62c MovI
	
Label_1581:
	var_132_bool = var_117_int <= var_115_int; // 0x62d LE
	if(var_132_bool == 0) goto Label_1606; // 0x62e JumpB
	var_118_string = "Price"; // 0x62f MovS
	var_133_int = 1; // 0x630 PushI
	var_134_bool = var_117_int != var_133_int; // 0x631 Neq
	if(var_134_bool == 0) goto Label_1588; // 0x632 JumpB
	var_118_string = var_118_string + var_117_int; // 0x633 Add2
	
Label_1588:
	var_135_int = 0; var_136_object = Obj(); // 0x634 PushV
	var_136_object = var_104_object; // 0x635 Mov
	func_1566(var_136_object); // 0x636 NEW_2
	HasInvItemProperty(var_119_bool, var_135_int, var_118_string); // 0x638 Func
	var_137_bool = var_119_bool == 0; // 0x63a Not
	if(var_137_bool == 0) goto Label_1597; // 0x63b JumpB
	goto Label_1603; // 0x63c Jump
	
Label_1603:
	var_138_int = 1; // 0x643 PushI
	var_117_int = var_117_int + var_138_int; // 0x644 Add2
	goto Label_1581; // 0x645 Jump
	
Label_1597:
	var_139_int = 0; var_140_object = Obj(); // 0x63d PushV
	var_140_object = var_104_object; // 0x63e Mov
	func_1566(var_140_object); // 0x63f NEW_2
	GetInvItemProperty(var_116_int, var_139_int, var_118_string); // 0x641 Func
	
Label_1606:
	var_141_string = "durability"; // 0x646 PushS
	HasProperty(var_120_bool, var_141_string); // 0x647 ObjFunc
	var_142_bool = var_120_bool; // 0x649 Push
	if(var_142_bool == 0) goto Label_1621; // 0x64a JumpB
	var_143_string = "durability"; // 0x64b PushS
	GetProperty(var_121_int, var_143_string); // 0x64c ObjFunc
	var_144_float = 0.5; // 0x64e PushF
	var_145_float = 1.0; // 0x64f PushF
	var_146_float = 100.0; // 0x650 PushF
	var_147_float = var_121_int / var_146_float; // 0x651 Div
	var_148_int = var_145_float + var_147_float; // 0x652 Add
	var_149_float = var_144_float * var_148_int; // 0x653 Mult
	var_116_int = var_116_int * var_149_float; // 0x654 Mult2
	
Label_1621:
	var_103_int = var_116_int; // 0x655 Mov
	return 18; // 0x656 Return
	
Label_1623:
	var_150_int = 0; var_151_object = Obj(); // 0x657 PushV
	var_151_object = var_104_object; // 0x658 Mov
	func_1566(var_151_object); // 0x659 NEW_2
	var_152_string = "BarterPrice"; // 0x65b PushS
	var_153_int = var_152_string + var_105_int; // 0x65c Add
	HasInvItemProperty(var_122_bool, var_150_int, var_153_int); // 0x65d Func
	var_154_bool = var_122_bool == 0; // 0x65f Not
	if(var_154_bool == 0) goto Label_1635; // 0x660 JumpB
	var_103_int = 0; // 0x661 MovI
	return 18; // 0x662 Return
	
Label_1635:
	var_155_int = 0; var_156_object = Obj(); // 0x663 PushV
	var_156_object = var_104_object; // 0x664 Mov
	func_1566(var_156_object); // 0x665 NEW_2
	var_157_string = "BarterPrice"; // 0x667 PushS
	var_158_int = var_157_string + var_105_int; // 0x668 Add
	GetInvItemProperty(var_123_int, var_155_int, var_158_int); // 0x669 Func
	var_159_int = 0; // 0x66b PushI
	var_160_bool = var_123_int > var_159_int; // 0x66c GT
	if(var_160_bool == 0) goto Label_1648; // 0x66d JumpB
	var_103_int = var_123_int; // 0x66e Mov
	return 18; // 0x66f Return
	
Label_1648:
	var_103_int = -var_123_int; // 0x670 Neg2
	return 18; // 0x671 Return
}


func_1316(var_1_int, var_2_int, var_24_int, var_25_int, var_26_object, var_558_int)
{
	var_559_int = 0; var_560_object = Obj(); var_561_int = 0; var_562_int = 0; var_563_int = 0; var_564_int = 0; var_565_object = Obj(); var_566_int = 0; var_567_int = 0; var_568_int = 0; // 0x524 PushV
	size(var_564_int); // 0x525 TObjFunc
	var_569_int = var_558_int + var_1_int; // 0x527 Add
	var_570_bool = var_569_int >= var_564_int; // 0x528 GE
	if(var_570_bool == 0) goto Label_1323; // 0x529 JumpB
	return 10; // 0x52a Return
	
Label_1323:
	var_571_int = var_558_int + var_1_int; // 0x52b Add
	get(var_565_object, var_571_int); // 0x52c TObjFunc
	var_572_bool = 0; var_573_object = Obj(); var_574_int = 0; var_575_bool = 0; // 0x52e PushV
	var_573_object = var_565_object; // 0x52f Mov
	var_574_int = var_25_int; // 0x530 MovT
	var_575_bool = 1; // 0x531 MovB
	func_1738(var_572_bool, var_573_object, var_574_int, var_575_bool); // 0x532 NEW_2
	if(var_572_bool == 0) goto Label_1334; // 0x534 JumpB
	return 10; // 0x535 Return
	
Label_1334:
	var_576_int = var_558_int + var_1_int; // 0x536 Add
	get(var_566_int, var_576_int); // 0x537 TObjFunc
	var_577_int = var_558_int + var_1_int; // 0x539 Add
	get(var_567_int, var_577_int); // 0x53a TObjFunc
	var_578_int = 0; // 0x53c PushI
	var_579_bool = var_566_int > var_578_int; // 0x53d GT
	if(var_579_bool == 0) goto Label_1387; // 0x53e JumpB
	var_580_int = 0; var_581_object = Obj(); var_582_int = 0; // 0x53f PushV
	var_581_object = var_565_object; // 0x540 Mov
	var_582_int = var_25_int; // 0x541 MovT
	func_1571(var_580_int, var_581_object, var_582_int); // 0x542 NEW_2
	var_583_float = 0; var_584_object = Obj(); var_585_int = 0; var_586_int = 0; // 0x544 PushV
	var_584_object = var_26_object; // 0x545 MovT
	var_585_int = var_24_int; // 0x546 MovT
	var_586_int = var_25_int; // 0x547 MovT
	func_1498(var_584_object, var_585_int, var_586_int); // 0x548 NEW_2
	var_568_int = var_580_int * var_583_float; // 0x54a Mult2
	var_587_bool = var_568_int <= var_2_int; // 0x54b LE
	if(var_587_bool == 0) goto Label_1387; // 0x54c JumpB
	var_588_bool = 0; var_589_object = Obj(); // 0x54d PushV
	var_589_object = var_565_object; // 0x54e Mov
	func_912(var_559_int, var_560_object, var_561_int, var_562_int, var_563_int, var_564_int, var_565_object, var_566_int, var_567_int, var_568_int, var_588_bool, var_589_object); // 0x54f NEW_2
	if(var_588_bool == 0) goto Label_1387; // 0x551 JumpB
	var_590_int = -1; // 0x552 PushI
	var_566_int = var_566_int + var_590_int; // 0x553 Add2
	var_591_object = Obj(); // 0x554 PushV
	var_591_object = var_565_object; // 0x555 Mov
	func_0(var_591_object); // 0x556 NEW_2
	var_592_int = var_558_int + var_1_int; // 0x558 Add
	set(var_592_int, var_566_int); // 0x559 TObjFunc
	var_593_int = 0; // 0x55b PushV
	var_594_int = 0; var_595_object = Obj(); var_596_int = 0; // 0x55c PushV
	var_595_object = var_565_object; // 0x55d Mov
	var_596_int = var_25_int; // 0x55e MovT
	func_1571(var_594_int, var_595_object, var_596_int); // 0x55f NEW_2
	var_597_int = -var_594_int; // 0x561 Neg
	var_598_float = 0; var_599_object = Obj(); var_600_int = 0; var_601_int = 0; // 0x562 PushV
	var_599_object = var_26_object; // 0x563 MovT
	var_600_int = var_24_int; // 0x564 MovT
	var_601_int = var_25_int; // 0x565 MovT
	func_1498(var_599_object, var_600_int, var_601_int); // 0x566 NEW_2
	var_593_int = var_597_int * var_598_float; // 0x568 Mult2
	func_1113(var_567_int, var_568_int, var_593_int); // 0x569 NEW_2
	
Label_1387:
	func_628(var_567_int, var_568_int); // 0x56c NEW_2
	func_719(var_567_int, var_568_int); // 0x56f NEW_2
	return 10; // 0x571 Return
}


func_1189(var_0_int, var_24_int, var_25_int, var_26_object, var_401_int)
{
	var_402_int = 0; var_403_object = Obj(); var_404_int = 0; var_405_int = 0; var_406_int = 0; var_407_int = 0; var_408_object = Obj(); var_409_int = 0; var_410_int = 0; var_411_int = 0; // 0x4a5 PushV
	size(var_407_int); // 0x4a6 TObjFunc
	var_412_int = var_401_int + var_0_int; // 0x4a8 Add
	var_413_bool = var_412_int >= var_407_int; // 0x4a9 GE
	if(var_413_bool == 0) goto Label_1196; // 0x4aa JumpB
	return 10; // 0x4ab Return
	
Label_1196:
	var_414_int = var_401_int + var_0_int; // 0x4ac Add
	get(var_408_object, var_414_int); // 0x4ad TObjFunc
	var_415_bool = 0; var_416_object = Obj(); var_417_int = 0; var_418_bool = 0; // 0x4af PushV
	var_416_object = var_408_object; // 0x4b0 Mov
	var_417_int = var_25_int; // 0x4b1 MovT
	var_418_bool = 0; // 0x4b2 MovB
	func_1738(var_415_bool, var_416_object, var_417_int, var_418_bool); // 0x4b3 NEW_2
	if(var_415_bool == 0) goto Label_1207; // 0x4b5 JumpB
	return 10; // 0x4b6 Return
	
Label_1207:
	var_419_int = var_401_int + var_0_int; // 0x4b7 Add
	get(var_409_int, var_419_int); // 0x4b8 TObjFunc
	var_420_int = var_401_int + var_0_int; // 0x4ba Add
	get(var_410_int, var_420_int); // 0x4bb TObjFunc
	var_421_int = 0; // 0x4bd PushI
	var_422_bool = var_409_int > var_421_int; // 0x4be GT
	if(var_422_bool == 0) goto Label_1245; // 0x4bf JumpB
	var_423_bool = 0; var_424_object = Obj(); // 0x4c0 PushV
	var_424_object = var_408_object; // 0x4c1 Mov
	func_973(var_402_int, var_403_object, var_404_int, var_405_int, var_406_int, var_407_int, var_408_object, var_409_int, var_410_int, var_411_int, var_423_bool, var_424_object); // 0x4c2 NEW_2
	var_471_object = Obj(); // 0x4c4 PushV
	var_471_object = var_408_object; // 0x4c5 Mov
	func_24(var_471_object); // 0x4c6 NEW_2
	var_483_int = -1; // 0x4c8 PushI
	var_409_int = var_409_int + var_483_int; // 0x4c9 Add2
	var_484_int = var_401_int + var_0_int; // 0x4ca Add
	set(var_484_int, var_409_int); // 0x4cb TObjFunc
	var_485_int = 0; var_486_object = Obj(); var_487_int = 0; // 0x4cd PushV
	var_486_object = var_408_object; // 0x4ce Mov
	var_487_int = var_25_int; // 0x4cf MovT
	func_1571(var_485_int, var_486_object, var_487_int); // 0x4d0 NEW_2
	var_488_float = 0; var_489_object = Obj(); var_490_int = 0; var_491_int = 0; // 0x4d2 PushV
	var_489_object = var_26_object; // 0x4d3 MovT
	var_490_int = var_24_int; // 0x4d4 MovT
	var_491_int = var_25_int; // 0x4d5 MovT
	func_1524(var_489_object, var_490_int, var_491_int); // 0x4d6 NEW_2
	var_411_int = var_485_int * var_488_float; // 0x4d8 Mult2
	var_492_int = 0; // 0x4d9 PushV
	var_492_int = var_411_int; // 0x4da Mov
	func_1113(var_410_int, var_411_int, var_492_int); // 0x4db NEW_2
	
Label_1245:
	func_628(var_410_int, var_411_int); // 0x4de NEW_2
	func_719(var_410_int, var_411_int); // 0x4e1 NEW_2
	return 10; // 0x4e3 Return
}


func_1702(var_90_bool, var_91_int, var_92_int)
{
	var_93_object = Obj(); var_94_bool = 0; var_95_object = Obj(); var_96_bool = 0; // 0x6a6 PushV
	GetPlayerContainer(var_95_object); // 0x6a7 Func
	IsItemSelected(var_96_bool, var_92_int, var_91_int); // 0x6a9 ObjFunc
	var_90_bool = var_96_bool; // 0x6ab Mov
	return 4; // 0x6ac Return
}


func_1446(var_326_string, var_327_int)
{
	var_328_int = 1; // 0x5a7 PushI
	var_329_int = var_327_int + var_328_int; // 0x5a8 Add
	var_330_int = 10; // 0x5a9 PushI
	var_331_bool = var_329_int < var_330_int; // 0x5aa LT
	if(var_331_bool == 0) goto Label_1457; // 0x5ab JumpB
	var_332_string = "r_slot0"; // 0x5ac PushS
	var_333_int = 1; // 0x5ad PushI
	var_334_int = var_327_int + var_333_int; // 0x5ae Add
	var_326_string = var_332_string + var_334_int; // 0x5af Add2
	return 0; // 0x5b0 Return
	
Label_1457:
	var_335_string = "r_slot"; // 0x5b1 PushS
	var_336_int = 1; // 0x5b2 PushI
	var_337_int = var_327_int + var_336_int; // 0x5b3 Add
	var_326_string = var_335_string + var_337_int; // 0x5b4 Add2
	return 0; // 0x5b5 Return
}


func_1788(var_841_bool, var_843_object, var_844_int)
{
	var_847_int = 0; var_848_object = Obj(); var_849_int = 0; var_850_int = 0; var_851_object = Obj(); var_852_int = 0; // 0x6fc PushV
	GetItemCount(var_850_int, var_844_int); // 0x6fd ObjFunc
	var_852_int = 0; // 0x6ff MovI
	
Label_1792:
	var_853_bool = var_852_int < var_850_int; // 0x700 LT
	if(var_853_bool == 0) goto Label_1810; // 0x701 JumpB
	GetItem(var_851_object, var_852_int, var_844_int); // 0x702 ObjFunc
	var_854_bool = 0; var_855_object = Obj(); var_856_object = Obj(); // 0x704 PushV
	var_855_object = var_843_object; // 0x705 Mov
	var_856_object = var_851_object; // 0x706 Mov
	func_1727(var_854_bool, var_855_object, var_856_object); // 0x707 NEW_2
	if(var_854_bool == 0) goto Label_1807; // 0x709 JumpB
	var_857_int = 1; // 0x70a PushI
	RemoveItem(var_852_int, var_857_int, var_844_int); // 0x70b ObjFunc
	var_841_bool = 1; // 0x70d MovB
	return 6; // 0x70e Return
	
Label_1807:
	var_858_int = 1; // 0x70f PushI
	var_852_int = var_852_int + var_858_int; // 0x710 Add2
	goto Label_1792; // 0x711 Jump
	
Label_1810:
	var_841_bool = 0; // 0x712 MovB
	return 6; // 0x713 Return
}


func_810(var_40_int)
{
	var_349_string = "r_money_slot"; // 0x32a PushS
	SendMessage(var_40_int, var_349_string); // 0x32b Func
	return 0; // 0x32d Return
}


func_555(var_170_int)
{
	var_173_object = Obj(); var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_object = Obj(); var_178_int = 0; var_179_int = 0; var_180_int = 0; // 0x22b PushV
	var_181_int = 0; var_182_int = 0; // 0x22c PushV
	var_182_int = var_170_int; // 0x22d Mov
	func_1677(var_181_int, var_182_int); // 0x22e NEW_2
	var_178_int = var_181_int; // 0x22f Mov
	var_180_int = 0; // 0x231 MovI
	
Label_562:
	var_183_bool = var_180_int < var_178_int; // 0x232 LT
	if(var_183_bool == 0) goto Label_590; // 0x233 JumpB
	var_184_bool = 0; var_185_int = 0; var_186_int = 0; // 0x234 PushV
	var_185_int = var_170_int; // 0x235 Mov
	var_186_int = var_180_int; // 0x236 Mov
	func_1702(var_184_bool, var_185_int, var_186_int); // 0x237 NEW_2
	if(var_184_bool == 0) goto Label_571; // 0x239 JumpB
	goto Label_587; // 0x23a Jump
	
Label_587:
	var_187_int = 1; // 0x24b PushI
	var_180_int = var_180_int + var_187_int; // 0x24c Add2
	goto Label_562; // 0x24d Jump
	
Label_571:
	var_188_int = 0; var_189_int = 0; var_190_int = 0; // 0x23b PushV
	var_189_int = var_170_int; // 0x23c Mov
	var_190_int = var_180_int; // 0x23d Mov
	func_1694(var_188_int, var_189_int, var_190_int); // 0x23e NEW_2
	var_179_int = var_188_int; // 0x23f Mov
	var_191_object = Obj(); var_192_int = 0; var_193_int = 0; // 0x241 PushV
	var_192_int = var_170_int; // 0x242 Mov
	var_193_int = var_180_int; // 0x243 Mov
	func_1685(var_191_object, var_192_int, var_193_int); // 0x244 NEW_2
	var_177_object = var_191_object; // 0x245 Mov
	add(var_177_object); // 0x247 ObjFunc
	add(var_179_int); // 0x249 ObjFunc
	
Label_590:
	return 8; // 0x24e Return
}


func_814(var_39_int)
{
	var_277_string = "l_money_slot"; // 0x32e PushS
	SendMessage(var_39_int, var_277_string); // 0x32f Func
	return 0; // 0x331 Return
}


func_1710(var_65_object, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x6ae PushV
	GetContainer(var_69_object); // 0x6af Func
	GetItem(var_70_object, var_66_int); // 0x6b1 ObjFunc
	var_65_object = var_70_object; // 0x6b3 Mov
	return 4; // 0x6b4 Return
}


func_818(var_3_int, var_25_int)
{
	var_826_int = 0; var_827_bool = 0; var_828_object = Obj(); var_829_object = Obj(); var_830_object = Obj(); var_831_int = 0; var_832_int = 0; var_833_int = 0; var_834_bool = 0; var_835_object = Obj(); var_836_object = Obj(); var_837_object = Obj(); var_838_int = 0; var_839_int = 0; // 0x332 PushV
	GetContainer(var_836_object); // 0x333 Func
	GetPlayerContainer(var_837_object); // 0x335 Func
	size(var_833_int); // 0x337 TObjFunc
	var_838_int = 0; // 0x339 MovI
	
Label_826:
	var_840_bool = var_838_int < var_833_int; // 0x33a LT
	if(var_840_bool == 0) goto Label_861; // 0x33b JumpB
	get(var_835_object, var_838_int); // 0x33c TObjFunc
	var_841_bool = 0; var_842_object = Obj(); var_843_object = Obj(); var_844_int = 0; // 0x33e PushV
	var_842_object = var_837_object; // 0x33f Mov
	var_843_object = var_835_object; // 0x340 Mov
	var_845_int = 0; var_846_object = Obj(); // 0x341 PushV
	var_846_object = var_835_object; // 0x342 Mov
	func_1650(var_845_int, var_846_object); // 0x343 NEW_2
	var_844_int = var_845_int; // 0x344 Mov
	func_1788(var_842_object, var_843_object, var_844_int); // 0x346 NEW_2
	var_834_bool = var_841_bool; // 0x347 Mov
	var_859_bool = var_834_bool == 0; // 0x349 Not
	if(var_859_bool == 0) goto Label_846; // 0x34a JumpB
	var_860_string = "Error: failed to remove item"; // 0x34b PushS
	Trace(var_860_string); // 0x34c Func
	
Label_846:
	var_861_bool = 0; var_862_object = Obj(); var_863_object = Obj(); var_864_int = 0; // 0x34e PushV
	var_862_object = var_836_object; // 0x34f Mov
	var_863_object = var_835_object; // 0x350 Mov
	var_864_int = 0; // 0x351 MovI
	func_1813(var_862_object, var_863_object, var_864_int); // 0x352 NEW_2
	var_834_bool = var_861_bool; // 0x353 Mov
	var_868_bool = var_834_bool == 0; // 0x355 Not
	if(var_868_bool == 0) goto Label_858; // 0x356 JumpB
	var_869_string = "Error: failed to add item"; // 0x357 PushS
	Trace(var_869_string); // 0x358 Func
	
Label_858:
	var_870_int = 1; // 0x35a PushI
	var_838_int = var_838_int + var_870_int; // 0x35b Add2
	goto Label_826; // 0x35c Jump
	
Label_861:
	size(var_833_int); // 0x35d TObjFunc
	var_839_int = 0; // 0x35f MovI
	
Label_864:
	var_871_bool = var_839_int < var_833_int; // 0x360 LT
	if(var_871_bool == 0) goto Label_899; // 0x361 JumpB
	get(var_835_object, var_839_int); // 0x362 TObjFunc
	var_872_bool = 0; var_873_object = Obj(); var_874_object = Obj(); var_875_int = 0; // 0x364 PushV
	var_873_object = var_836_object; // 0x365 Mov
	var_874_object = var_835_object; // 0x366 Mov
	var_875_int = 0; // 0x367 MovI
	func_1788(var_873_object, var_874_object, var_875_int); // 0x368 NEW_2
	var_834_bool = var_872_bool; // 0x369 Mov
	var_876_bool = var_834_bool == 0; // 0x36b Not
	if(var_876_bool == 0) goto Label_880; // 0x36c JumpB
	var_877_string = "Error: failed to remove item"; // 0x36d PushS
	Trace(var_877_string); // 0x36e Func
	
Label_880:
	var_878_bool = 0; var_879_object = Obj(); var_880_object = Obj(); var_881_int = 0; // 0x370 PushV
	var_879_object = var_837_object; // 0x371 Mov
	var_880_object = var_835_object; // 0x372 Mov
	var_882_int = 0; var_883_object = Obj(); // 0x373 PushV
	var_883_object = var_835_object; // 0x374 Mov
	func_1650(var_882_int, var_883_object); // 0x375 NEW_2
	var_881_int = var_882_int; // 0x376 Mov
	func_1813(var_879_object, var_880_object, var_881_int); // 0x378 NEW_2
	var_834_bool = var_878_bool; // 0x379 Mov
	var_884_bool = var_834_bool == 0; // 0x37b Not
	if(var_884_bool == 0) goto Label_896; // 0x37c JumpB
	var_885_string = "Error: failed to add item"; // 0x37d PushS
	Trace(var_885_string); // 0x37e Func
	
Label_896:
	var_886_int = 1; // 0x380 PushI
	var_839_int = var_839_int + var_886_int; // 0x381 Add2
	goto Label_864; // 0x382 Jump
	
Label_899:
	var_887_int = 0; // 0x383 PushI
	var_888_bool = var_25_int == var_887_int; // 0x384 Eq
	if(var_888_bool == 0) goto Label_904; // 0x385 JumpB
	SetPlayerMoneyCount(var_838_int); // 0x386 Func
	
Label_904:
	var_3_int = 0; // 0x388 TMovI
	func_270(var_835_object, var_836_object, var_837_object, var_838_int, var_839_int); // 0x38a NEW_2
	return 14; // 0x38c Return
}


func_1462(var_32_int, var_34_string)
{
	var_35_int = 0; var_36_int = 0; // 0x5b6 PushV
	var_36_int = 0; // 0x5b7 MovI
	
Label_1464:
	var_37_int = 18; // 0x5b8 PushI
	var_38_bool = var_36_int < var_37_int; // 0x5b9 LT
	if(var_38_bool == 0) goto Label_1478; // 0x5ba JumpB
	var_39_string = ""; var_40_int = 0; // 0x5bb PushV
	var_40_int = var_36_int; // 0x5bc Mov
	func_1430(var_39_string, var_40_int); // 0x5bd NEW_2
	var_51_bool = var_34_string == var_39_string; // 0x5bf Eq
	if(var_51_bool == 0) goto Label_1475; // 0x5c0 JumpB
	var_32_int = var_36_int; // 0x5c1 Mov
	return 2; // 0x5c2 Return
	
Label_1475:
	var_52_int = 1; // 0x5c3 PushI
	var_36_int = var_36_int + var_52_int; // 0x5c4 Add2
	goto Label_1464; // 0x5c5 Jump
	
Label_1478:
	var_32_int = -1; // 0x5c6 MovI
	return 2; // 0x5c7 Return
}


func_1719(var_59_int, var_60_int)
{
	var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_int = 0; // 0x6b7 PushV
	GetContainer(var_63_object); // 0x6b8 Func
	GetItemAmount(var_64_int, var_60_int); // 0x6ba ObjFunc
	var_59_int = var_64_int; // 0x6bc Mov
	return 4; // 0x6bd Return
}


func_1081(var_431_bool, var_432_object)
{
	var_435_int = 0; var_436_object = Obj(); var_437_int = 0; var_438_int = 0; var_439_int = 0; var_440_object = Obj(); var_441_int = 0; var_442_int = 0; // 0x439 PushV
	size(var_439_int); // 0x43a ObjFunc
	var_441_int = 0; // 0x43c MovI
	
Label_1085:
	var_443_bool = var_441_int < var_439_int; // 0x43d LT
	if(var_443_bool == 0) goto Label_1110; // 0x43e JumpB
	get(var_440_object, var_441_int); // 0x43f ObjFunc
	get(var_442_int, var_441_int); // 0x441 ObjFunc
	var_444_bool = var_432_object == var_440_object; // 0x443 Eq
	if(var_444_bool == 0) goto Label_1107; // 0x444 JumpB
	var_445_int = -1; // 0x445 PushI
	var_442_int = var_442_int + var_445_int; // 0x446 Add2
	var_446_int = 0; // 0x447 PushI
	var_447_bool = var_442_int == var_446_int; // 0x448 Eq
	if(var_447_bool == 0) goto Label_1103; // 0x449 JumpB
	remove(var_441_int); // 0x44a ObjFunc
	remove(var_441_int); // 0x44c ObjFunc
	goto Label_1105; // 0x44e Jump
	
Label_1105:
	var_431_bool = 1; // 0x451 MovB
	return 8; // 0x452 Return
	
Label_1103:
	set(var_441_int, var_442_int); // 0x44f ObjFunc
	
Label_1107:
	var_448_int = 1; // 0x453 PushI
	var_441_int = var_441_int + var_448_int; // 0x454 Add2
	goto Label_1085; // 0x455 Jump
	
Label_1110:
	var_431_bool = 0; // 0x456 MovB
	return 8; // 0x457 Return
}


func_1727(var_258_bool, var_259_object, var_260_object)
{
	var_261_int = 0; var_262_object = Obj(); // 0x6c0 PushV
	var_262_object = var_259_object; // 0x6c1 Mov
	func_1566(var_262_object); // 0x6c2 NEW_2
	var_263_int = 0; var_264_object = Obj(); // 0x6c4 PushV
	var_264_object = var_260_object; // 0x6c5 Mov
	func_1566(var_264_object); // 0x6c6 NEW_2
	var_258_bool = var_261_int == var_263_int; // 0x6c8 Eq2
	return 0; // 0x6c9 Return
}


func_1480(var_493_int, var_495_string)
{
	var_496_int = 0; var_497_int = 0; // 0x5c8 PushV
	var_497_int = 0; // 0x5c9 MovI
	
Label_1482:
	var_498_int = 18; // 0x5ca PushI
	var_499_bool = var_497_int < var_498_int; // 0x5cb LT
	if(var_499_bool == 0) goto Label_1496; // 0x5cc JumpB
	var_500_string = ""; var_501_int = 0; // 0x5cd PushV
	var_501_int = var_497_int; // 0x5ce Mov
	func_1446(var_500_string, var_501_int); // 0x5cf NEW_2
	var_502_bool = var_495_string == var_500_string; // 0x5d1 Eq
	if(var_502_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_493_int = var_497_int; // 0x5d3 Mov
	return 2; // 0x5d4 Return
	
Label_1493:
	var_503_int = 1; // 0x5d5 PushI
	var_497_int = var_497_int + var_503_int; // 0x5d6 Add2
	goto Label_1482; // 0x5d7 Jump
	
Label_1496:
	var_493_int = -1; // 0x5d8 MovI
	return 2; // 0x5d9 Return
}


func_1738(var_114_bool, var_115_object, var_116_int, var_117_bool)
{
	var_118_bool = 0; var_119_int = 0; var_120_bool = 0; var_121_int = 0; // 0x6ca PushV
	var_122_int = 0; // 0x6cb PushI
	var_123_bool = var_116_int == var_122_int; // 0x6cc Eq
	if(var_123_bool == 0) goto Label_1744; // 0x6cd JumpB
	var_114_bool = 0; // 0x6ce MovB
	return 4; // 0x6cf Return
	
Label_1744:
	var_124_int = 0; var_125_object = Obj(); // 0x6d0 PushV
	var_125_object = var_115_object; // 0x6d1 Mov
	func_1566(var_125_object); // 0x6d2 NEW_2
	var_128_string = "BarterPrice"; // 0x6d4 PushS
	var_129_int = var_128_string + var_116_int; // 0x6d5 Add
	HasInvItemProperty(var_120_bool, var_124_int, var_129_int); // 0x6d6 Func
	var_130_bool = var_120_bool == 0; // 0x6d8 Not
	if(var_130_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_114_bool = 1; // 0x6da MovB
	return 4; // 0x6db Return
	
Label_1756:
	var_131_int = 0; var_132_object = Obj(); // 0x6dc PushV
	var_132_object = var_115_object; // 0x6dd Mov
	func_1566(var_132_object); // 0x6de NEW_2
	var_133_string = "BarterPrice"; // 0x6e0 PushS
	var_134_int = var_133_string + var_116_int; // 0x6e1 Add
	GetInvItemProperty(var_121_int, var_131_int, var_134_int); // 0x6e2 Func
	var_135_bool = 0; // 0x6e4 PushV
	var_135_bool = 0; // 0x6e5 MovB
	var_136_bool = var_117_bool; // 0x6e6 Push
	if(var_136_bool == 0) goto Label_1772; // 0x6e7 JumpB
	var_137_int = 0; // 0x6e8 PushI
	var_138_bool = var_121_int > var_137_int; // 0x6e9 GT
	if(var_138_bool == 0) goto Label_1772; // 0x6ea JumpB
	var_135_bool = 1; // 0x6eb MovB
	
Label_1772:
	if(var_135_bool == 0) goto Label_1775; // 0x6ec JumpB
	var_114_bool = 0; // 0x6ed MovB
	return 4; // 0x6ee Return
	
Label_1775:
	var_139_bool = 0; // 0x6ef PushV
	var_139_bool = 0; // 0x6f0 MovB
	var_140_bool = var_117_bool == 0; // 0x6f1 Not
	if(var_140_bool == 0) goto Label_1783; // 0x6f2 JumpB
	var_141_int = 0; // 0x6f3 PushI
	var_142_bool = var_121_int < var_141_int; // 0x6f4 LT
	if(var_142_bool == 0) goto Label_1783; // 0x6f5 JumpB
	var_139_bool = 1; // 0x6f6 MovB
	
Label_1783:
	if(var_139_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_114_bool = 0; // 0x6f8 MovB
	return 4; // 0x6f9 Return
	
Label_1786:
	var_114_bool = 1; // 0x6fa MovB
	return 4; // 0x6fb Return
}


func_973(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_423_bool, var_424_object)
{
	var_425_int = 0; var_426_int = 0; // 0x3cd PushV
	var_427_int = 0; var_428_object = Obj(); // 0x3ce PushV
	var_428_object = var_424_object; // 0x3cf Mov
	func_1650(var_427_int, var_428_object); // 0x3d0 NEW_2
	var_426_int = var_427_int; // 0x3d1 Mov
	var_429_int = 0; // 0x3d3 PushI
	var_430_bool = var_426_int == var_429_int; // 0x3d4 Eq
	if(var_430_bool == 0) goto Label_991; // 0x3d5 JumpB
	var_431_bool = 0; var_432_object = Obj(); var_433_object = Obj(); var_434_object = Obj(); // 0x3d6 PushV
	var_432_object = var_424_object; // 0x3d7 Mov
	var_433_object = var_10_object; // 0x3d8 MovT
	var_434_object = var_11_object; // 0x3d9 MovT
	func_1081(var_433_object, var_434_object); // 0x3da NEW_2
	var_423_bool = var_431_bool; // 0x3db Mov
	return 2; // 0x3dd Return
	
Label_991:
	var_449_int = 1; // 0x3df PushI
	var_450_bool = var_426_int == var_449_int; // 0x3e0 Eq
	if(var_450_bool == 0) goto Label_1003; // 0x3e1 JumpB
	var_451_bool = 0; var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj(); // 0x3e2 PushV
	var_452_object = var_424_object; // 0x3e3 Mov
	var_453_object = var_12_object; // 0x3e4 MovT
	var_454_object = var_13_object; // 0x3e5 MovT
	func_1081(var_453_object, var_454_object); // 0x3e6 NEW_2
	var_423_bool = var_451_bool; // 0x3e7 Mov
	return 2; // 0x3e9 Return
	
Label_1003:
	var_455_int = 2; // 0x3eb PushI
	var_456_bool = var_426_int == var_455_int; // 0x3ec Eq
	if(var_456_bool == 0) goto Label_1015; // 0x3ed JumpB
	var_457_bool = 0; var_458_object = Obj(); var_459_object = Obj(); var_460_object = Obj(); // 0x3ee PushV
	var_458_object = var_424_object; // 0x3ef Mov
	var_459_object = var_14_object; // 0x3f0 MovT
	var_460_object = var_15_object; // 0x3f1 MovT
	func_1081(var_459_object, var_460_object); // 0x3f2 NEW_2
	var_423_bool = var_457_bool; // 0x3f3 Mov
	return 2; // 0x3f5 Return
	
Label_1015:
	var_461_int = 3; // 0x3f7 PushI
	var_462_bool = var_426_int == var_461_int; // 0x3f8 Eq
	if(var_462_bool == 0) goto Label_1026; // 0x3f9 JumpB
	var_463_bool = 0; var_464_object = Obj(); var_465_object = Obj(); var_466_object = Obj(); // 0x3fa PushV
	var_464_object = var_424_object; // 0x3fb Mov
	var_465_object = var_16_object; // 0x3fc MovT
	var_466_object = var_17_object; // 0x3fd MovT
	func_1081(var_465_object, var_466_object); // 0x3fe NEW_2
	var_423_bool = var_463_bool; // 0x3ff Mov
	return 2; // 0x401 Return
	
Label_1026:
	var_467_bool = 0; var_468_object = Obj(); var_469_object = Obj(); var_470_object = Obj(); // 0x402 PushV
	var_468_object = var_424_object; // 0x403 Mov
	var_469_object = var_18_object; // 0x404 MovT
	var_470_object = var_19_object; // 0x405 MovT
	func_1081(var_469_object, var_470_object); // 0x406 NEW_2
	var_423_bool = var_467_bool; // 0x407 Mov
	return 2; // 0x409 Return
}


func_719(var_1_int, var_25_int)
{
	var_278_int = 0; var_279_object = Obj(); var_280_int = 0; var_281_int = 0; var_282_int = 0; var_283_int = 0; var_284_object = Obj(); var_285_int = 0; var_286_object = Obj(); var_287_int = 0; var_288_int = 0; var_289_int = 0; var_290_int = 0; var_291_object = Obj(); // 0x2cf PushV
	size(var_285_int); // 0x2d0 TObjFunc
	var_292_int = 18; // 0x2d2 PushI
	var_293_int = var_1_int + var_292_int; // 0x2d3 Add
	var_294_bool = var_293_int > var_285_int; // 0x2d4 GT
	if(var_294_bool == 0) goto Label_742; // 0x2d5 JumpB
	var_295_int = 2; // 0x2d6 PushI
	var_296_int = var_285_int / var_295_int; // 0x2d7 Mod
	var_297_int = 0; // 0x2d8 PushI
	var_298_bool = var_296_int == var_297_int; // 0x2d9 Eq
	if(var_298_bool == 0) goto Label_736; // 0x2da JumpB
	var_299_int = 18; // 0x2db PushI
	var_300_int = var_1_int + var_299_int; // 0x2dc Add
	var_301_int = var_300_int - var_285_int; // 0x2dd Sub
	var_1_int = var_1_int - var_301_int; // 0x2de Sub2
	goto Label_742; // 0x2df Jump
	
Label_742:
	var_302_int = 0; // 0x2e6 PushI
	var_303_bool = var_1_int < var_302_int; // 0x2e7 LT
	if(var_303_bool == 0) goto Label_746; // 0x2e8 JumpB
	var_1_int = 0; // 0x2e9 TMovI
	
Label_746:
	var_289_int = var_1_int; // 0x2ea MovT
	
Label_747:
	var_304_int = 18; // 0x2eb PushI
	var_305_int = var_1_int + var_304_int; // 0x2ec Add
	var_306_bool = var_289_int < var_305_int; // 0x2ed LT
	if(var_306_bool == 0) goto Label_808; // 0x2ee JumpB
	var_307_bool = var_289_int < var_285_int; // 0x2ef LT
	if(var_307_bool == 0) goto Label_798; // 0x2f0 JumpB
	get(var_286_object, var_289_int); // 0x2f1 TObjFunc
	get(var_288_int, var_289_int); // 0x2f3 TObjFunc
	var_287_int = 0; // 0x2f5 MovI
	var_308_int = 0; var_309_int = 0; // 0x2f6 PushV
	var_309_int = var_289_int - var_1_int; // 0x2f7 Sub2
	func_1408(var_291_object, var_308_int, var_309_int); // 0x2f8 NEW_2
	var_290_int = var_308_int; // 0x2f9 Mov
	var_317_int = 0; // 0x2fb PushI
	var_318_bool = var_290_int > var_317_int; // 0x2fc GT
	if(var_318_bool == 0) goto Label_768; // 0x2fd JumpB
	var_319_int = 16384; // 0x2fe PushI
	var_287_int = var_287_int | var_319_int; // 0x2ff Or2
	
Label_768:
	var_320_bool = 0; var_321_object = Obj(); var_322_int = 0; var_323_bool = 0; // 0x300 PushV
	var_321_object = var_286_object; // 0x301 Mov
	var_322_int = var_25_int; // 0x302 MovT
	var_323_bool = 1; // 0x303 MovB
	func_1738(var_320_bool, var_321_object, var_322_int, var_323_bool); // 0x304 NEW_2
	if(var_320_bool == 0) goto Label_777; // 0x306 JumpB
	var_324_int = 131072; // 0x307 PushI
	var_287_int = var_287_int | var_324_int; // 0x308 Or2
	
Label_777:
	CreateIntVector(var_291_object); // 0x309 Func
	add(var_290_int); // 0x30b ObjFunc
	add(var_288_int); // 0x30d ObjFunc
	var_325_int = 65536; // 0x30f PushI
	var_326_string = ""; var_327_int = 0; // 0x310 PushV
	var_327_int = var_289_int - var_1_int; // 0x311 Sub2
	func_1446(var_326_string, var_327_int); // 0x312 NEW_2
	SendMessage(var_325_int, var_326_string, var_291_object); // 0x314 Func
	var_338_string = ""; var_339_int = 0; // 0x316 PushV
	var_339_int = var_289_int - var_1_int; // 0x317 Sub2
	func_1446(var_338_string, var_339_int); // 0x318 NEW_2
	SendMessage(var_287_int, var_338_string, var_286_object); // 0x31a Func
	var_291_object = 0; // 0x31c SetNull
	goto Label_805; // 0x31d Jump
	
Label_805:
	var_340_int = 1; // 0x325 PushI
	var_289_int = var_289_int + var_340_int; // 0x326 Add2
	goto Label_747; // 0x327 Jump
	
Label_798:
	var_341_int = 32768; // 0x31e PushI
	var_342_string = ""; var_343_int = 0; // 0x31f PushV
	var_343_int = var_289_int - var_1_int; // 0x320 Sub2
	func_1446(var_342_string, var_343_int); // 0x321 NEW_2
	SendMessage(var_341_int, var_342_string); // 0x323 Func
	
Label_808:
	return 14; // 0x328 Return
	
Label_736:
	var_344_int = 18; // 0x2e0 PushI
	var_345_int = var_1_int + var_344_int; // 0x2e1 Add
	var_346_int = var_345_int - var_285_int; // 0x2e2 Sub
	var_347_int = 1; // 0x2e3 PushI
	var_348_int = var_346_int - var_347_int; // 0x2e4 Sub
	var_1_int = var_1_int - var_348_int; // 0x2e5 Sub2
}


func_592(var_784_int)
{
	var_785_int = 0; var_786_int = 0; var_787_int = 0; var_788_int = 0; // 0x250 PushV
	size(var_787_int); // 0x251 TObjFunc
	var_789_int = 2; // 0x253 PushI
	var_790_int = var_787_int + var_789_int; // 0x254 Add
	var_791_int = 1; // 0x255 PushI
	var_792_int = var_790_int - var_791_int; // 0x256 Sub
	var_793_int = 2; // 0x257 PushI
	var_794_float = var_792_int / var_793_int; // 0x258 Div
	var_795_int = 9; // 0x259 PushI
	var_788_int = var_794_float - var_795_int; // 0x25a Sub2
	var_796_int = 0; // 0x25b PushI
	var_797_bool = var_788_int < var_796_int; // 0x25c LT
	if(var_797_bool == 0) goto Label_608; // 0x25d JumpB
	var_784_int = 0; // 0x25e MovI
	return 4; // 0x25f Return
	
Label_608:
	var_784_int = var_788_int; // 0x260 Mov
	return 4; // 0x261 Return
}


func_1113(var_2_int, var_3_int, var_266_int)
{
	var_2_int = var_2_int + var_266_int; // 0x45a Add2
	var_3_int = var_3_int - var_266_int; // 0x45b Sub2
	func_810(var_266_int); // 0x45d NEW_2
	func_814(var_266_int); // 0x460 NEW_2
	return 0; // 0x462 Return
}


func_1498(var_537_float, var_539_int, var_540_int)
{
	var_541_float = 0; var_542_int = 0; var_543_bool = 0; var_544_float = 0; var_545_int = 0; var_546_bool = 0; // 0x5da PushV
	var_547_int = 0; // 0x5db PushI
	var_548_bool = var_540_int != var_547_int; // 0x5dc Neq
	if(var_548_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_537_float = 1; // 0x5de MovI
	return 6; // 0x5df Return
	
Label_1504:
	var_544_float = 1; // 0x5e0 MovI
	var_545_int = 1; // 0x5e1 MovI
	
Label_1506:
	var_549_bool = var_545_int <= var_539_int; // 0x5e2 LE
	if(var_549_bool == 0) goto Label_1521; // 0x5e3 JumpB
	var_550_string = "sellf"; // 0x5e4 PushS
	var_551_int = var_550_string + var_545_int; // 0x5e5 Add
	HasProperty(var_551_int, var_546_bool); // 0x5e6 ObjFunc
	var_552_bool = var_546_bool; // 0x5e8 Push
	if(var_552_bool == 0) goto Label_1518; // 0x5e9 JumpB
	var_553_string = "sellf"; // 0x5ea PushS
	var_554_int = var_553_string + var_545_int; // 0x5eb Add
	GetProperty(var_554_int, var_544_float); // 0x5ec ObjFunc
	
Label_1518:
	var_555_int = 1; // 0x5ee PushI
	var_545_int = var_545_int + var_555_int; // 0x5ef Add2
	goto Label_1506; // 0x5f0 Jump
	
Label_1521:
	var_556_int = 100; // 0x5f1 PushI
	var_537_float = var_544_float / var_544_float; // 0x5f2 Div2
	return 6; // 0x5f3 Return
}


func_610(var_805_int)
{
	var_806_int = 0; var_807_int = 0; var_808_int = 0; var_809_int = 0; // 0x262 PushV
	size(var_808_int); // 0x263 TObjFunc
	var_810_int = 2; // 0x265 PushI
	var_811_int = var_808_int + var_810_int; // 0x266 Add
	var_812_int = 1; // 0x267 PushI
	var_813_int = var_811_int - var_812_int; // 0x268 Sub
	var_814_int = 2; // 0x269 PushI
	var_815_float = var_813_int / var_814_int; // 0x26a Div
	var_816_int = 9; // 0x26b PushI
	var_809_int = var_815_float - var_816_int; // 0x26c Sub2
	var_817_int = 0; // 0x26d PushI
	var_818_bool = var_809_int < var_817_int; // 0x26e LT
	if(var_818_bool == 0) goto Label_626; // 0x26f JumpB
	var_805_int = 0; // 0x270 MovI
	return 4; // 0x271 Return
	
Label_626:
	var_805_int = var_809_int; // 0x272 Mov
	return 4; // 0x273 Return
}


func_1123(var_0_int, var_2_int, var_24_int, var_25_int, var_26_object, var_57_int)
{
	var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0; var_66_int = 0; var_67_int = 0; // 0x463 PushV
	size(var_63_int); // 0x464 TObjFunc
	var_68_int = var_57_int + var_0_int; // 0x466 Add
	var_69_bool = var_68_int >= var_63_int; // 0x467 GE
	if(var_69_bool == 0) goto Label_1130; // 0x468 JumpB
	return 10; // 0x469 Return
	
Label_1130:
	var_70_int = var_57_int + var_0_int; // 0x46a Add
	get(var_64_object, var_70_int); // 0x46b TObjFunc
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; var_74_bool = 0; // 0x46d PushV
	var_72_object = var_64_object; // 0x46e Mov
	var_73_int = var_25_int; // 0x46f MovT
	var_74_bool = 0; // 0x470 MovB
	func_1738(var_71_bool, var_72_object, var_73_int, var_74_bool); // 0x471 NEW_2
	if(var_71_bool == 0) goto Label_1141; // 0x473 JumpB
	return 10; // 0x474 Return
	
Label_1141:
	var_100_int = var_57_int + var_0_int; // 0x475 Add
	get(var_65_int, var_100_int); // 0x476 TObjFunc
	var_101_int = var_57_int + var_0_int; // 0x478 Add
	get(var_66_int, var_101_int); // 0x479 TObjFunc
	var_102_bool = var_65_int < var_66_int; // 0x47b LT
	if(var_102_bool == 0) goto Label_1181; // 0x47c JumpB
	var_103_int = 0; var_104_object = Obj(); var_105_int = 0; // 0x47d PushV
	var_104_object = var_64_object; // 0x47e Mov
	var_105_int = var_25_int; // 0x47f MovT
	func_1571(var_103_int, var_104_object, var_105_int); // 0x480 NEW_2
	var_161_float = 0; var_162_object = Obj(); var_163_int = 0; var_164_int = 0; // 0x482 PushV
	var_162_object = var_26_object; // 0x483 MovT
	var_163_int = var_24_int; // 0x484 MovT
	var_164_int = var_25_int; // 0x485 MovT
	func_1524(var_162_object, var_163_int, var_164_int); // 0x486 NEW_2
	var_67_int = var_103_int * var_161_float; // 0x488 Mult2
	var_181_bool = var_67_int <= var_2_int; // 0x489 LE
	if(var_181_bool == 0) goto Label_1181; // 0x48a JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x48b PushV
	var_183_object = var_64_object; // 0x48c Mov
	func_912(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_64_object, var_65_int, var_66_int, var_67_int, var_182_bool, var_183_object); // 0x48d NEW_2
	if(var_182_bool == 0) goto Label_1181; // 0x48f JumpB
	var_248_int = 1; // 0x490 PushI
	var_65_int = var_65_int + var_248_int; // 0x491 Add2
	var_249_int = var_57_int + var_0_int; // 0x492 Add
	set(var_249_int, var_65_int); // 0x493 TObjFunc
	var_250_object = Obj(); // 0x495 PushV
	var_250_object = var_64_object; // 0x496 Mov
	func_0(var_250_object); // 0x497 NEW_2
	var_266_int = 0; // 0x499 PushV
	var_266_int = -var_67_int; // 0x49a Neg2
	func_1113(var_66_int, var_67_int, var_266_int); // 0x49b NEW_2
	
Label_1181:
	func_628(var_66_int, var_67_int); // 0x49e NEW_2
	func_719(var_66_int, var_67_int); // 0x4a1 NEW_2
	return 10; // 0x4a3 Return
}


func_1253(var_1_int, var_24_int, var_25_int, var_26_object, var_508_int)
{
	var_509_int = 0; var_510_object = Obj(); var_511_int = 0; var_512_int = 0; var_513_int = 0; var_514_int = 0; var_515_object = Obj(); var_516_int = 0; var_517_int = 0; var_518_int = 0; // 0x4e5 PushV
	size(var_514_int); // 0x4e6 TObjFunc
	var_519_int = var_508_int + var_1_int; // 0x4e8 Add
	var_520_bool = var_519_int >= var_514_int; // 0x4e9 GE
	if(var_520_bool == 0) goto Label_1260; // 0x4ea JumpB
	return 10; // 0x4eb Return
	
Label_1260:
	var_521_int = var_508_int + var_1_int; // 0x4ec Add
	get(var_515_object, var_521_int); // 0x4ed TObjFunc
	var_522_bool = 0; var_523_object = Obj(); var_524_int = 0; var_525_bool = 0; // 0x4ef PushV
	var_523_object = var_515_object; // 0x4f0 Mov
	var_524_int = var_25_int; // 0x4f1 MovT
	var_525_bool = 1; // 0x4f2 MovB
	func_1738(var_522_bool, var_523_object, var_524_int, var_525_bool); // 0x4f3 NEW_2
	if(var_522_bool == 0) goto Label_1271; // 0x4f5 JumpB
	return 10; // 0x4f6 Return
	
Label_1271:
	var_526_int = var_508_int + var_1_int; // 0x4f7 Add
	get(var_516_int, var_526_int); // 0x4f8 TObjFunc
	var_527_int = var_508_int + var_1_int; // 0x4fa Add
	get(var_517_int, var_527_int); // 0x4fb TObjFunc
	var_528_bool = var_516_int < var_517_int; // 0x4fd LT
	if(var_528_bool == 0) goto Label_1308; // 0x4fe JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x4ff PushV
	var_530_object = var_515_object; // 0x500 Mov
	func_973(var_509_int, var_510_object, var_511_int, var_512_int, var_513_int, var_514_int, var_515_object, var_516_int, var_517_int, var_518_int, var_529_bool, var_530_object); // 0x501 NEW_2
	var_531_object = Obj(); // 0x503 PushV
	var_531_object = var_515_object; // 0x504 Mov
	func_24(var_531_object); // 0x505 NEW_2
	var_532_int = 1; // 0x507 PushI
	var_516_int = var_516_int + var_532_int; // 0x508 Add2
	var_533_int = var_508_int + var_1_int; // 0x509 Add
	set(var_533_int, var_516_int); // 0x50a TObjFunc
	var_534_int = 0; var_535_object = Obj(); var_536_int = 0; // 0x50c PushV
	var_535_object = var_515_object; // 0x50d Mov
	var_536_int = var_25_int; // 0x50e MovT
	func_1571(var_534_int, var_535_object, var_536_int); // 0x50f NEW_2
	var_537_float = 0; var_538_object = Obj(); var_539_int = 0; var_540_int = 0; // 0x511 PushV
	var_538_object = var_26_object; // 0x512 MovT
	var_539_int = var_24_int; // 0x513 MovT
	var_540_int = var_25_int; // 0x514 MovT
	func_1498(var_538_object, var_539_int, var_540_int); // 0x515 NEW_2
	var_518_int = var_534_int * var_537_float; // 0x517 Mult2
	var_557_int = 0; // 0x518 PushV
	var_557_int = var_518_int; // 0x519 Mov
	func_1113(var_517_int, var_518_int, var_557_int); // 0x51a NEW_2
	
Label_1308:
	func_628(var_517_int, var_518_int); // 0x51d NEW_2
	func_719(var_517_int, var_518_int); // 0x520 NEW_2
	return 10; // 0x522 Return
}


func_493()
{
	var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x1ed PushV
	var_53_int = 0; // 0x1ee PushV
	func_1669(var_53_int); // 0x1ef NEW_2
	var_48_int = var_53_int; // 0x1f0 Mov
	var_52_int = 0; // 0x1f2 MovI
	
Label_499:
	var_58_bool = var_52_int < var_48_int; // 0x1f3 LT
	if(var_58_bool == 0) goto Label_521; // 0x1f4 JumpB
	var_59_int = 0; var_60_int = 0; // 0x1f5 PushV
	var_60_int = var_52_int; // 0x1f6 Mov
	func_1719(var_59_int, var_60_int); // 0x1f7 NEW_2
	var_49_int = var_59_int; // 0x1f8 Mov
	var_65_object = Obj(); var_66_int = 0; // 0x1fa PushV
	var_66_int = var_52_int; // 0x1fb Mov
	func_1710(var_65_object, var_66_int); // 0x1fc NEW_2
	var_51_object = var_65_object; // 0x1fd Mov
	add(var_51_object); // 0x1ff TObjFunc
	add(var_49_int); // 0x201 TObjFunc
	var_71_int = 0; // 0x203 PushI
	add(var_71_int); // 0x204 TObjFunc
	var_72_int = 1; // 0x206 PushI
	var_52_int = var_52_int + var_72_int; // 0x207 Add2
	goto Label_499; // 0x208 Jump
	
Label_521:
	return 10; // 0x209 Return
}


func_367()
{
	var_73_int = 0; var_74_bool = 0; // 0x16f PushV
	var_73_int = 0; // 0x170 MovI
	var_74_bool = 0; // 0x171 MovB
	func_418(var_40_int, var_73_int, var_74_bool); // 0x172 NEW_2
	var_152_int = 0; var_153_bool = 0; // 0x174 PushV
	var_152_int = 1; // 0x175 MovI
	var_153_bool = 0; // 0x176 MovB
	func_418(var_40_int, var_152_int, var_153_bool); // 0x177 NEW_2
	var_154_int = 0; var_155_bool = 0; // 0x179 PushV
	var_154_int = 2; // 0x17a MovI
	var_155_bool = 0; // 0x17b MovB
	func_418(var_40_int, var_154_int, var_155_bool); // 0x17c NEW_2
	var_156_int = 0; var_157_bool = 0; // 0x17e PushV
	var_156_int = 3; // 0x17f MovI
	var_157_bool = 0; // 0x180 MovB
	func_418(var_40_int, var_156_int, var_157_bool); // 0x181 NEW_2
	var_158_int = 0; var_159_bool = 0; // 0x183 PushV
	var_158_int = 4; // 0x184 MovI
	var_159_bool = 0; // 0x185 MovB
	func_418(var_40_int, var_158_int, var_159_bool); // 0x186 NEW_2
	var_160_int = 0; var_161_bool = 0; // 0x188 PushV
	var_160_int = 0; // 0x189 MovI
	var_161_bool = 1; // 0x18a MovB
	func_418(var_40_int, var_160_int, var_161_bool); // 0x18b NEW_2
	var_162_int = 0; var_163_bool = 0; // 0x18d PushV
	var_162_int = 1; // 0x18e MovI
	var_163_bool = 1; // 0x18f MovB
	func_418(var_40_int, var_162_int, var_163_bool); // 0x190 NEW_2
	var_164_int = 0; var_165_bool = 0; // 0x192 PushV
	var_164_int = 2; // 0x193 MovI
	var_165_bool = 1; // 0x194 MovB
	func_418(var_40_int, var_164_int, var_165_bool); // 0x195 NEW_2
	var_166_int = 0; var_167_bool = 0; // 0x197 PushV
	var_166_int = 3; // 0x198 MovI
	var_167_bool = 1; // 0x199 MovB
	func_418(var_40_int, var_166_int, var_167_bool); // 0x19a NEW_2
	var_168_int = 0; var_169_bool = 0; // 0x19c PushV
	var_168_int = 4; // 0x19d MovI
	var_169_bool = 1; // 0x19e MovB
	func_418(var_40_int, var_168_int, var_169_bool); // 0x19f NEW_2
	return 0; // 0x1a1 Return
}


func_1650(var_186_int, var_187_object)
{
	var_188_int = 0; var_189_int = 0; // 0x672 PushV
	var_190_int = 0; var_191_object = Obj(); // 0x673 PushV
	var_191_object = var_187_object; // 0x674 Mov
	func_1566(var_191_object); // 0x675 NEW_2
	var_192_string = "Category"; // 0x677 PushS
	GetInvItemProperty(var_189_int, var_190_int, var_192_string); // 0x678 Func
	var_186_int = var_189_int; // 0x67a Mov
	return 2; // 0x67b Return
}


func_1395(var_0_int, var_236_int, var_237_int)
{
	var_238_int = 0; var_239_int = 0; var_240_int = 0; var_241_int = 0; // 0x573 PushV
	size(var_240_int); // 0x574 TObjFunc
	var_242_int = var_237_int + var_0_int; // 0x576 Add
	var_243_bool = var_242_int >= var_240_int; // 0x577 GE
	if(var_243_bool == 0) goto Label_1403; // 0x578 JumpB
	var_236_int = 0; // 0x579 MovI
	return 4; // 0x57a Return
	
Label_1403:
	var_244_int = var_237_int + var_0_int; // 0x57b Add
	get(var_241_int, var_244_int); // 0x57c TObjFunc
	var_236_int = var_241_int; // 0x57e Mov
	return 4; // 0x57f Return
}


func_628(var_0_int, var_25_int)
{
	var_206_int = 0; var_207_int = 0; var_208_int = 0; var_209_object = Obj(); var_210_int = 0; var_211_int = 0; var_212_object = Obj(); var_213_int = 0; var_214_int = 0; var_215_int = 0; var_216_object = Obj(); var_217_int = 0; var_218_int = 0; var_219_object = Obj(); // 0x274 PushV
	size(var_213_int); // 0x275 TObjFunc
	var_220_int = 18; // 0x277 PushI
	var_221_int = var_0_int + var_220_int; // 0x278 Add
	var_222_bool = var_221_int > var_213_int; // 0x279 GT
	if(var_222_bool == 0) goto Label_651; // 0x27a JumpB
	var_223_int = 2; // 0x27b PushI
	var_224_int = var_213_int / var_223_int; // 0x27c Mod
	var_225_int = 0; // 0x27d PushI
	var_226_bool = var_224_int == var_225_int; // 0x27e Eq
	if(var_226_bool == 0) goto Label_645; // 0x27f JumpB
	var_227_int = 18; // 0x280 PushI
	var_228_int = var_0_int + var_227_int; // 0x281 Add
	var_229_int = var_228_int - var_213_int; // 0x282 Sub
	var_0_int = var_0_int - var_229_int; // 0x283 Sub2
	goto Label_651; // 0x284 Jump
	
Label_651:
	var_230_int = 0; // 0x28b PushI
	var_231_bool = var_0_int < var_230_int; // 0x28c LT
	if(var_231_bool == 0) goto Label_655; // 0x28d JumpB
	var_0_int = 0; // 0x28e TMovI
	
Label_655:
	var_215_int = var_0_int; // 0x28f MovT
	
Label_656:
	var_232_int = 18; // 0x290 PushI
	var_233_int = var_0_int + var_232_int; // 0x291 Add
	var_234_bool = var_215_int < var_233_int; // 0x292 LT
	if(var_234_bool == 0) goto Label_718; // 0x293 JumpB
	var_235_bool = var_215_int < var_213_int; // 0x294 LT
	if(var_235_bool == 0) goto Label_708; // 0x295 JumpB
	get(var_216_object, var_215_int); // 0x296 TObjFunc
	get(var_217_int, var_215_int); // 0x298 TObjFunc
	var_214_int = 0; // 0x29a MovI
	var_236_int = 0; var_237_int = 0; // 0x29b PushV
	var_237_int = var_215_int - var_0_int; // 0x29c Sub2
	func_1395(var_219_object, var_236_int, var_237_int); // 0x29d NEW_2
	var_218_int = var_236_int; // 0x29e Mov
	var_245_int = 0; // 0x2a0 PushI
	var_246_bool = var_218_int > var_245_int; // 0x2a1 GT
	if(var_246_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_247_int = 16384; // 0x2a3 PushI
	var_214_int = var_214_int | var_247_int; // 0x2a4 Or2
	
Label_677:
	var_248_bool = 0; var_249_object = Obj(); var_250_int = 0; var_251_bool = 0; // 0x2a5 PushV
	var_249_object = var_216_object; // 0x2a6 Mov
	var_250_int = var_25_int; // 0x2a7 MovT
	var_251_bool = 0; // 0x2a8 MovB
	func_1738(var_248_bool, var_249_object, var_250_int, var_251_bool); // 0x2a9 NEW_2
	if(var_248_bool == 0) goto Label_686; // 0x2ab JumpB
	var_252_int = 131072; // 0x2ac PushI
	var_214_int = var_214_int | var_252_int; // 0x2ad Or2
	
Label_686:
	CreateIntVector(var_219_object); // 0x2ae Func
	add(var_218_int); // 0x2b0 ObjFunc
	add(var_217_int); // 0x2b2 ObjFunc
	var_253_int = 65536; // 0x2b4 PushI
	var_254_string = ""; var_255_int = 0; // 0x2b5 PushV
	var_255_int = var_215_int - var_0_int; // 0x2b6 Sub2
	func_1430(var_254_string, var_255_int); // 0x2b7 NEW_2
	SendMessage(var_253_int, var_254_string, var_219_object); // 0x2b9 Func
	var_266_string = ""; var_267_int = 0; // 0x2bb PushV
	var_267_int = var_215_int - var_0_int; // 0x2bc Sub2
	func_1430(var_266_string, var_267_int); // 0x2bd NEW_2
	SendMessage(var_214_int, var_266_string, var_216_object); // 0x2bf Func
	var_219_object = 0; // 0x2c1 SetNull
	var_216_object = 0; // 0x2c2 SetNull
	goto Label_715; // 0x2c3 Jump
	
Label_715:
	var_268_int = 1; // 0x2cb PushI
	var_215_int = var_215_int + var_268_int; // 0x2cc Add2
	goto Label_656; // 0x2cd Jump
	
Label_708:
	var_269_int = 32768; // 0x2c4 PushI
	var_270_string = ""; var_271_int = 0; // 0x2c5 PushV
	var_271_int = var_215_int - var_0_int; // 0x2c6 Sub2
	func_1430(var_270_string, var_271_int); // 0x2c7 NEW_2
	SendMessage(var_269_int, var_270_string); // 0x2c9 Func
	
Label_718:
	return 14; // 0x2ce Return
	
Label_645:
	var_272_int = 18; // 0x285 PushI
	var_273_int = var_0_int + var_272_int; // 0x286 Add
	var_274_int = var_273_int - var_213_int; // 0x287 Sub
	var_275_int = 1; // 0x288 PushI
	var_276_int = var_274_int - var_275_int; // 0x289 Sub
	var_0_int = var_0_int - var_276_int; // 0x28a Sub2
}


func_1524(var_161_float, var_163_int, var_164_int)
{
	var_165_float = 0; var_166_int = 0; var_167_bool = 0; var_168_float = 0; var_169_int = 0; var_170_bool = 0; // 0x5f4 PushV
	var_171_int = 0; // 0x5f5 PushI
	var_172_bool = var_164_int != var_171_int; // 0x5f6 Neq
	if(var_172_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_161_float = 1; // 0x5f8 MovI
	return 6; // 0x5f9 Return
	
Label_1530:
	var_168_float = 1; // 0x5fa MovI
	var_169_int = 1; // 0x5fb MovI
	
Label_1532:
	var_173_bool = var_169_int <= var_163_int; // 0x5fc LE
	if(var_173_bool == 0) goto Label_1547; // 0x5fd JumpB
	var_174_string = "buyf"; // 0x5fe PushS
	var_175_int = var_174_string + var_169_int; // 0x5ff Add
	HasProperty(var_175_int, var_170_bool); // 0x600 ObjFunc
	var_176_bool = var_170_bool; // 0x602 Push
	if(var_176_bool == 0) goto Label_1544; // 0x603 JumpB
	var_177_string = "buyf"; // 0x604 PushS
	var_178_int = var_177_string + var_169_int; // 0x605 Add
	GetProperty(var_178_int, var_168_float); // 0x606 ObjFunc
	
Label_1544:
	var_179_int = 1; // 0x608 PushI
	var_169_int = var_169_int + var_179_int; // 0x609 Add2
	goto Label_1532; // 0x60a Jump
	
Label_1547:
	var_180_int = 100; // 0x60b PushI
	var_161_float = var_168_float / var_168_float; // 0x60c Div2
	return 6; // 0x60d Return
}


func_1660(var_207_int, var_208_object)
{
	var_209_int = 0; var_210_int = 0; // 0x67c PushV
	var_211_int = 0; var_212_object = Obj(); // 0x67d PushV
	var_212_object = var_208_object; // 0x67e Mov
	func_1566(var_212_object); // 0x67f NEW_2
	GetItemMaxStackSize(var_211_int, var_210_int); // 0x681 Func
	var_207_int = var_210_int; // 0x683 Mov
	return 2; // 0x684 Return
}


