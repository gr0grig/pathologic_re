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
	func_1470(var_33_int, var_34_string); // 0x76 NEW_2
	var_31_int = var_32_int; // 0x77 Mov
	var_53_int = -1; // 0x79 PushI
	var_54_bool = var_31_int != var_53_int; // 0x7a Neq
	if(var_54_bool == 0) goto Label_137; // 0x7b JumpB
	var_55_int = 0; // 0x7c PushI
	var_56_bool = var_27_int == var_55_int; // 0x7d Eq
	if(var_56_bool == 0) goto Label_132; // 0x7e JumpB
	var_57_int = 0; // 0x7f PushV
	var_57_int = var_31_int; // 0x80 Mov
	func_1131(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_57_int); // 0x81 NEW_2
	goto Label_136; // 0x83 Jump
	
Label_136:
	return 2; // 0x88 Return
	
Label_132:
	var_404_int = 0; // 0x84 PushV
	var_404_int = var_31_int; // 0x85 Mov
	func_1197(var_28_string, var_29_object, var_30_int, var_31_int, var_404_int); // 0x86 NEW_2
	
Label_137:
	var_498_int = 0; var_499_int = 0; var_500_string = ""; // 0x89 PushV
	var_499_int = var_27_int; // 0x8a Mov
	var_500_string = var_28_string; // 0x8b Mov
	func_1488(var_499_int, var_500_string); // 0x8c NEW_2
	var_31_int = var_498_int; // 0x8d Mov
	var_509_int = -1; // 0x8f PushI
	var_510_bool = var_31_int != var_509_int; // 0x90 Neq
	if(var_510_bool == 0) goto Label_159; // 0x91 JumpB
	var_511_int = 0; // 0x92 PushI
	var_512_bool = var_27_int == var_511_int; // 0x93 Eq
	if(var_512_bool == 0) goto Label_154; // 0x94 JumpB
	var_513_int = 0; // 0x95 PushV
	var_513_int = var_31_int; // 0x96 Mov
	func_1261(var_28_string, var_29_object, var_30_int, var_31_int, var_513_int); // 0x97 NEW_2
	goto Label_158; // 0x99 Jump
	
Label_158:
	return 2; // 0x9e Return
	
Label_154:
	var_563_int = 0; // 0x9a PushV
	var_563_int = var_31_int; // 0x9b Mov
	func_1324(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int, var_563_int); // 0x9c NEW_2
	
Label_159:
	var_607_string = "cancel_button"; // 0x9f PushS
	var_608_bool = var_28_string == var_607_string; // 0xa0 Eq
	if(var_608_bool == 0) goto Label_166; // 0xa1 JumpB
	func_270(var_27_int, var_28_string, var_29_object, var_30_int, var_31_int); // 0xa3 NEW_2
	return 2; // 0xa5 Return
	
Label_166:
	var_763_string = "background_left"; // 0xa6 PushS
	var_764_bool = var_28_string == var_763_string; // 0xa7 Eq
	if(var_764_bool == 0) goto Label_179; // 0xa8 JumpB
	var_765_string = "background_left"; // 0xa9 PushS
	var_766_int = var_765_string + var_27_int; // 0xaa Add
	Trace(var_766_int); // 0xab Func
	var_767_int = 2; // 0xad PushI
	var_768_float = var_767_int * var_27_int; // 0xae Mult
	var_0_int = var_0_int + var_768_float; // 0xaf Add2
	func_628(var_30_int, var_31_int); // 0xb1 NEW_2
	
Label_179:
	var_769_string = "background_right"; // 0xb3 PushS
	var_770_bool = var_28_string == var_769_string; // 0xb4 Eq
	if(var_770_bool == 0) goto Label_192; // 0xb5 JumpB
	var_771_string = "background_right"; // 0xb6 PushS
	var_772_int = var_771_string + var_27_int; // 0xb7 Add
	Trace(var_772_int); // 0xb8 Func
	var_773_int = 2; // 0xba PushI
	var_774_float = var_773_int * var_27_int; // 0xbb Mult
	var_1_int = var_1_int + var_774_float; // 0xbc Add2
	func_719(var_30_int, var_31_int); // 0xbe NEW_2
	
Label_192:
	var_775_string = "l_scroll_button_top"; // 0xc0 PushS
	var_776_bool = var_28_string == var_775_string; // 0xc1 Eq
	if(var_776_bool == 0) goto Label_201; // 0xc2 JumpB
	var_777_int = 2; // 0xc3 PushI
	var_0_int = var_0_int - var_777_int; // 0xc4 Sub2
	func_628(var_30_int, var_31_int); // 0xc6 NEW_2
	return 2; // 0xc8 Return
	
Label_201:
	var_778_string = "l_scroll_button_bottom"; // 0xc9 PushS
	var_779_bool = var_28_string == var_778_string; // 0xca Eq
	if(var_779_bool == 0) goto Label_210; // 0xcb JumpB
	var_780_int = 2; // 0xcc PushI
	var_0_int = var_0_int + var_780_int; // 0xcd Add2
	func_628(var_30_int, var_31_int); // 0xcf NEW_2
	return 2; // 0xd1 Return
	
Label_210:
	var_781_string = "r_scroll_button_top"; // 0xd2 PushS
	var_782_bool = var_28_string == var_781_string; // 0xd3 Eq
	if(var_782_bool == 0) goto Label_219; // 0xd4 JumpB
	var_783_int = 2; // 0xd5 PushI
	var_1_int = var_1_int - var_783_int; // 0xd6 Sub2
	func_719(var_30_int, var_31_int); // 0xd8 NEW_2
	return 2; // 0xda Return
	
Label_219:
	var_784_string = "r_scroll_button_bottom"; // 0xdb PushS
	var_785_bool = var_28_string == var_784_string; // 0xdc Eq
	if(var_785_bool == 0) goto Label_228; // 0xdd JumpB
	var_786_int = 2; // 0xde PushI
	var_1_int = var_1_int + var_786_int; // 0xdf Add2
	func_719(var_30_int, var_31_int); // 0xe1 NEW_2
	return 2; // 0xe3 Return
	
Label_228:
	var_787_string = "l_scrollbar"; // 0xe4 PushS
	var_788_bool = var_28_string == var_787_string; // 0xe5 Eq
	if(var_788_bool == 0) goto Label_245; // 0xe6 JumpB
	var_789_int = 0; // 0xe7 PushV
	func_592(var_789_int); // 0xe8 NEW_2
	var_803_float = var_789_int * var_27_int; // 0xea Mult
	var_804_float = 100.0; // 0xeb PushF
	var_805_float = var_803_float / var_804_float; // 0xec Div
	var_806_float = 0.5; // 0xed PushF
	var_0_int = var_805_float + var_806_float; // 0xee Add2
	var_807_int = 2; // 0xef PushI
	var_0_int = var_0_int * var_807_int; // 0xf0 Mult2
	func_628(var_30_int, var_31_int); // 0xf2 NEW_2
	return 2; // 0xf4 Return
	
Label_245:
	var_808_string = "r_scrollbar"; // 0xf5 PushS
	var_809_bool = var_28_string == var_808_string; // 0xf6 Eq
	if(var_809_bool == 0) goto Label_262; // 0xf7 JumpB
	var_810_int = 0; // 0xf8 PushV
	func_610(var_810_int); // 0xf9 NEW_2
	var_824_float = var_810_int * var_27_int; // 0xfb Mult
	var_825_float = 100.0; // 0xfc PushF
	var_826_float = var_824_float / var_825_float; // 0xfd Div
	var_827_float = 0.5; // 0xfe PushF
	var_1_int = var_826_float + var_827_float; // 0xff Add2
	var_828_int = 2; // 0x100 PushI
	var_1_int = var_1_int * var_828_int; // 0x101 Mult2
	func_719(var_30_int, var_31_int); // 0x103 NEW_2
	return 2; // 0x105 Return
	
Label_262:
	var_829_string = "ok_button"; // 0x106 PushS
	var_830_bool = var_28_string == var_829_string; // 0x107 Eq
	if(var_830_bool == 0) goto Label_269; // 0x108 JumpB
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
	func_1558(var_29_int); // 0x58 NEW_2
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


func_0(var_257_object)
{
	var_258_int = 0; var_259_object = Obj(); var_260_int = 0; var_261_int = 0; var_262_object = Obj(); var_263_int = 0; // 0x0 PushV
	size(var_261_int); // 0x1 TObjFunc
	var_263_int = 0; // 0x3 MovI
	
Label_4:
	var_264_bool = var_263_int < var_261_int; // 0x4 LT
	if(var_264_bool == 0) goto Label_20; // 0x5 JumpB
	get(var_262_object, var_263_int); // 0x6 TObjFunc
	var_265_bool = 0; var_266_object = Obj(); var_267_object = Obj(); // 0x8 PushV
	var_266_object = var_262_object; // 0x9 Mov
	var_267_object = var_257_object; // 0xa Mov
	func_1735(var_266_object, var_267_object); // 0xb NEW_2
	if(var_265_bool == 0) goto Label_17; // 0xd JumpB
	remove(var_263_int); // 0xe TObjFunc
	return 6; // 0x10 Return
	
Label_17:
	var_268_int = 1; // 0x11 PushI
	var_263_int = var_263_int + var_268_int; // 0x12 Add2
	goto Label_4; // 0x13 Jump
	
Label_20:
	add(var_257_object); // 0x14 TObjFunc
	return 6; // 0x16 Return
}


func_1668(var_207_int, var_208_object)
{
	var_209_int = 0; var_210_int = 0; // 0x684 PushV
	var_211_int = 0; var_212_object = Obj(); // 0x685 PushV
	var_212_object = var_208_object; // 0x686 Mov
	func_1574(var_212_object); // 0x687 NEW_2
	GetItemMaxStackSize(var_211_int, var_210_int); // 0x689 Func
	var_207_int = var_210_int; // 0x68b Mov
	return 2; // 0x68c Return
}


func_1798(var_846_bool, var_848_object, var_849_int)
{
	var_852_int = 0; var_853_object = Obj(); var_854_int = 0; var_855_int = 0; var_856_object = Obj(); var_857_int = 0; // 0x706 PushV
	GetItemCount(var_855_int, var_849_int); // 0x707 ObjFunc
	var_857_int = 0; // 0x709 MovI
	
Label_1802:
	var_858_bool = var_857_int < var_855_int; // 0x70a LT
	if(var_858_bool == 0) goto Label_1820; // 0x70b JumpB
	GetItem(var_856_object, var_857_int, var_849_int); // 0x70c ObjFunc
	var_859_bool = 0; var_860_object = Obj(); var_861_object = Obj(); // 0x70e PushV
	var_860_object = var_848_object; // 0x70f Mov
	var_861_object = var_856_object; // 0x710 Mov
	func_1735(var_860_object, var_861_object); // 0x711 NEW_2
	if(var_859_bool == 0) goto Label_1817; // 0x713 JumpB
	var_862_int = 1; // 0x714 PushI
	RemoveItem(var_857_int, var_862_int, var_849_int); // 0x715 ObjFunc
	var_846_bool = 1; // 0x717 MovB
	return 6; // 0x718 Return
	
Label_1817:
	var_863_int = 1; // 0x719 PushI
	var_857_int = var_857_int + var_863_int; // 0x71a Add2
	goto Label_1802; // 0x71b Jump
	
Label_1820:
	var_846_bool = 0; // 0x71c MovB
	return 6; // 0x71d Return
}


func_1416(var_1_int, var_308_int, var_309_int)
{
	var_310_int = 0; var_311_int = 0; var_312_int = 0; var_313_int = 0; // 0x588 PushV
	size(var_312_int); // 0x589 TObjFunc
	var_314_int = var_309_int + var_1_int; // 0x58b Add
	var_315_bool = var_314_int >= var_312_int; // 0x58c GE
	if(var_315_bool == 0) goto Label_1424; // 0x58d JumpB
	var_308_int = 0; // 0x58e MovI
	return 4; // 0x58f Return
	
Label_1424:
	var_316_int = var_309_int + var_1_int; // 0x590 Add
	get(var_313_int, var_316_int); // 0x591 TObjFunc
	var_308_int = var_313_int; // 0x593 Mov
	return 4; // 0x594 Return
}


func_1034(var_195_bool, var_196_object)
{
	var_199_int = 0; var_200_object = Obj(); var_201_int = 0; var_202_int = 0; var_203_int = 0; var_204_object = Obj(); var_205_int = 0; var_206_int = 0; // 0x40a PushV
	size(var_203_int); // 0x40b ObjFunc
	var_207_int = 0; var_208_object = Obj(); // 0x40d PushV
	var_208_object = var_196_object; // 0x40e Mov
	func_1668(var_207_int, var_208_object); // 0x40f NEW_2
	var_213_int = 1; // 0x411 PushI
	var_214_bool = var_207_int > var_213_int; // 0x412 GT
	if(var_214_bool == 0) goto Label_1072; // 0x413 JumpB
	var_205_int = 0; // 0x414 MovI
	
Label_1045:
	var_215_bool = var_205_int < var_203_int; // 0x415 LT
	if(var_215_bool == 0) goto Label_1072; // 0x416 JumpB
	get(var_204_object, var_205_int); // 0x417 ObjFunc
	get(var_206_int, var_205_int); // 0x419 ObjFunc
	var_216_bool = 0; var_217_object = Obj(); var_218_object = Obj(); // 0x41b PushV
	var_217_object = var_196_object; // 0x41c Mov
	var_218_object = var_204_object; // 0x41d Mov
	func_1740(var_216_bool, var_217_object, var_218_object); // 0x41e NEW_2
	if(var_216_bool == 0) goto Label_1069; // 0x420 JumpB
	var_224_int = 0; var_225_object = Obj(); // 0x421 PushV
	var_225_object = var_196_object; // 0x422 Mov
	func_1668(var_224_int, var_225_object); // 0x423 NEW_2
	var_226_bool = var_206_int < var_224_int; // 0x425 LT
	if(var_226_bool == 0) goto Label_1067; // 0x426 JumpB
	var_227_int = 1; // 0x427 PushI
	var_228_int = var_206_int + var_227_int; // 0x428 Add
	set(var_205_int, var_228_int); // 0x429 ObjFunc
	
Label_1067:
	var_195_bool = 1; // 0x42b MovB
	return 8; // 0x42c Return
	
Label_1069:
	var_229_int = 1; // 0x42d PushI
	var_205_int = var_205_int + var_229_int; // 0x42e Add2
	goto Label_1045; // 0x42f Jump
	
Label_1072:
	var_230_int = 12; // 0x430 PushI
	var_231_bool = var_203_int < var_230_int; // 0x431 LT
	if(var_231_bool == 0) goto Label_1082; // 0x432 JumpB
	add(var_196_object); // 0x433 ObjFunc
	var_232_int = 1; // 0x435 PushI
	add(var_232_int); // 0x436 ObjFunc
	var_195_bool = 1; // 0x438 MovB
	return 8; // 0x439 Return
	
Label_1082:
	var_195_bool = 0; // 0x43a MovB
	return 8; // 0x43b Return
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


func_1677(var_53_int)
{
	var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); // 0x68d PushV
	GetContainer(var_57_object); // 0x68e Func
	GetItemCount(var_56_int); // 0x690 ObjFunc
	var_53_int = var_56_int; // 0x692 Mov
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


func_912(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_182_bool, var_183_object)
{
	var_184_int = 0; var_185_int = 0; // 0x390 PushV
	var_186_int = 0; var_187_object = Obj(); // 0x391 PushV
	var_187_object = var_183_object; // 0x392 Mov
	func_1658(var_186_int, var_187_object); // 0x393 NEW_2
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
	var_233_int = 1; // 0x3a2 PushI
	var_234_bool = var_185_int == var_233_int; // 0x3a3 Eq
	if(var_234_bool == 0) goto Label_942; // 0x3a4 JumpB
	var_235_bool = 0; var_236_object = Obj(); var_237_object = Obj(); var_238_object = Obj(); // 0x3a5 PushV
	var_236_object = var_183_object; // 0x3a6 Mov
	var_237_object = var_12_object; // 0x3a7 MovT
	var_238_object = var_13_object; // 0x3a8 MovT
	func_1034(var_237_object, var_238_object); // 0x3a9 NEW_2
	var_182_bool = var_235_bool; // 0x3aa Mov
	return 2; // 0x3ac Return
	
Label_942:
	var_239_int = 2; // 0x3ae PushI
	var_240_bool = var_185_int == var_239_int; // 0x3af Eq
	if(var_240_bool == 0) goto Label_954; // 0x3b0 JumpB
	var_241_bool = 0; var_242_object = Obj(); var_243_object = Obj(); var_244_object = Obj(); // 0x3b1 PushV
	var_242_object = var_183_object; // 0x3b2 Mov
	var_243_object = var_14_object; // 0x3b3 MovT
	var_244_object = var_15_object; // 0x3b4 MovT
	func_1034(var_243_object, var_244_object); // 0x3b5 NEW_2
	var_182_bool = var_241_bool; // 0x3b6 Mov
	return 2; // 0x3b8 Return
	
Label_954:
	var_245_int = 3; // 0x3ba PushI
	var_246_bool = var_185_int == var_245_int; // 0x3bb Eq
	if(var_246_bool == 0) goto Label_965; // 0x3bc JumpB
	var_247_bool = 0; var_248_object = Obj(); var_249_object = Obj(); var_250_object = Obj(); // 0x3bd PushV
	var_248_object = var_183_object; // 0x3be Mov
	var_249_object = var_16_object; // 0x3bf MovT
	var_250_object = var_17_object; // 0x3c0 MovT
	func_1034(var_249_object, var_250_object); // 0x3c1 NEW_2
	var_182_bool = var_247_bool; // 0x3c2 Mov
	return 2; // 0x3c4 Return
	
Label_965:
	var_251_bool = 0; var_252_object = Obj(); var_253_object = Obj(); var_254_object = Obj(); // 0x3c5 PushV
	var_252_object = var_183_object; // 0x3c6 Mov
	var_253_object = var_18_object; // 0x3c7 MovT
	var_254_object = var_19_object; // 0x3c8 MovT
	func_1034(var_253_object, var_254_object); // 0x3c9 NEW_2
	var_182_bool = var_251_bool; // 0x3ca Mov
	return 2; // 0x3cc Return
}


func_1685(var_83_int, var_84_int)
{
	var_85_int = 0; var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); // 0x695 PushV
	GetPlayerContainer(var_88_object); // 0x696 Func
	GetItemCount(var_87_int, var_84_int); // 0x698 ObjFunc
	var_83_int = var_87_int; // 0x69a Mov
	return 4; // 0x69b Return
}


func_1558(var_29_int)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; // 0x616 PushV
	GetContainer(var_33_object); // 0x617 Func
	var_36_string = "barter"; // 0x619 PushS
	HasProperty(var_36_string, var_34_bool); // 0x61a ObjFunc
	var_37_bool = var_34_bool == 0; // 0x61c Not
	if(var_37_bool == 0) goto Label_1568; // 0x61d JumpB
	var_29_int = 0; // 0x61e MovI
	return 6; // 0x61f Return
	
Label_1568:
	var_38_string = "barter"; // 0x620 PushS
	GetProperty(var_38_string, var_35_int); // 0x621 ObjFunc
	var_29_int = var_35_int; // 0x623 Mov
	return 6; // 0x624 Return
}


func_1429(var_126_int)
{
	var_127_float = 0; var_128_float = 0; // 0x595 PushV
	GetGameTime(var_128_float); // 0x596 Func
	var_129_int = 1; // 0x598 PushI
	var_130_int = 0; // 0x599 PushV
	var_131_int = 24; // 0x59a PushI
	var_130_int = var_128_float / var_128_float; // 0x59b Div2
	var_126_int = var_129_int + var_130_int; // 0x59c Add2
	return 2; // 0x59d Return
}


func_24(var_476_object)
{
	var_477_int = 0; var_478_object = Obj(); var_479_int = 0; var_480_int = 0; var_481_object = Obj(); var_482_int = 0; // 0x18 PushV
	size(var_480_int); // 0x19 TObjFunc
	var_482_int = 0; // 0x1b MovI
	
Label_28:
	var_483_bool = var_482_int < var_480_int; // 0x1c LT
	if(var_483_bool == 0) goto Label_44; // 0x1d JumpB
	get(var_481_object, var_482_int); // 0x1e TObjFunc
	var_484_bool = 0; var_485_object = Obj(); var_486_object = Obj(); // 0x20 PushV
	var_485_object = var_481_object; // 0x21 Mov
	var_486_object = var_476_object; // 0x22 Mov
	func_1735(var_485_object, var_486_object); // 0x23 NEW_2
	if(var_484_bool == 0) goto Label_41; // 0x25 JumpB
	remove(var_482_int); // 0x26 TObjFunc
	return 6; // 0x28 Return
	
Label_41:
	var_487_int = 1; // 0x29 PushI
	var_482_int = var_482_int + var_487_int; // 0x2a Add2
	goto Label_28; // 0x2b Jump
	
Label_44:
	add(var_476_object); // 0x2c TObjFunc
	return 6; // 0x2e Return
}


func_1693(var_105_object, var_106_int, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); // 0x69d PushV
	GetPlayerContainer(var_110_object); // 0x69e Func
	GetItem(var_111_object, var_107_int, var_106_int); // 0x6a0 ObjFunc
	var_105_object = var_111_object; // 0x6a2 Mov
	return 4; // 0x6a3 Return
}


func_1438(var_254_string, var_255_int)
{
	var_256_int = 1; // 0x59f PushI
	var_257_int = var_255_int + var_256_int; // 0x5a0 Add
	var_258_int = 10; // 0x5a1 PushI
	var_259_bool = var_257_int < var_258_int; // 0x5a2 LT
	if(var_259_bool == 0) goto Label_1449; // 0x5a3 JumpB
	var_260_string = "l_slot0"; // 0x5a4 PushS
	var_261_int = 1; // 0x5a5 PushI
	var_262_int = var_255_int + var_261_int; // 0x5a6 Add
	var_254_string = var_260_string + var_262_int; // 0x5a7 Add2
	return 0; // 0x5a8 Return
	
Label_1449:
	var_263_string = "l_slot"; // 0x5a9 PushS
	var_264_int = 1; // 0x5aa PushI
	var_265_int = var_255_int + var_264_int; // 0x5ab Add
	var_254_string = var_263_string + var_265_int; // 0x5ac Add2
	return 0; // 0x5ad Return
}


func_1823(var_866_bool, var_868_object, var_869_int)
{
	var_870_bool = 0; var_871_bool = 0; // 0x71f PushV
	var_872_int = 1; // 0x720 PushI
	AddItem(var_871_bool, var_868_object, var_869_int, var_872_int); // 0x721 ObjFunc
	var_866_bool = var_871_bool; // 0x723 Mov
	return 2; // 0x724 Return
}


func_418(var_25_int, var_73_int, var_74_bool)
{
	var_75_object = Obj(); var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; var_82_int = 0; // 0x1a2 PushV
	var_83_int = 0; var_84_int = 0; // 0x1a3 PushV
	var_84_int = var_73_int; // 0x1a4 Mov
	func_1685(var_83_int, var_84_int); // 0x1a5 NEW_2
	var_80_int = var_83_int; // 0x1a6 Mov
	var_82_int = 0; // 0x1a8 MovI
	
Label_425:
	var_89_bool = var_82_int < var_80_int; // 0x1a9 LT
	if(var_89_bool == 0) goto Label_491; // 0x1aa JumpB
	var_90_bool = 0; var_91_int = 0; var_92_int = 0; // 0x1ab PushV
	var_91_int = var_73_int; // 0x1ac Mov
	var_92_int = var_82_int; // 0x1ad Mov
	func_1710(var_90_bool, var_91_int, var_92_int); // 0x1ae NEW_2
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
	func_1702(var_98_int, var_99_int, var_100_int); // 0x1b5 NEW_2
	var_81_int = var_98_int; // 0x1b6 Mov
	var_105_object = Obj(); var_106_int = 0; var_107_int = 0; // 0x1b8 PushV
	var_106_int = var_73_int; // 0x1b9 Mov
	var_107_int = var_82_int; // 0x1ba Mov
	func_1693(var_105_object, var_106_int, var_107_int); // 0x1bb NEW_2
	var_79_object = var_105_object; // 0x1bc Mov
	var_112_bool = 0; // 0x1be PushV
	var_112_bool = 0; // 0x1bf MovB
	var_113_bool = var_74_bool; // 0x1c0 Push
	if(var_113_bool == 0) goto Label_458; // 0x1c1 JumpB
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; var_117_bool = 0; // 0x1c2 PushV
	var_115_object = var_79_object; // 0x1c3 Mov
	var_116_int = var_25_int; // 0x1c4 MovT
	var_117_bool = 1; // 0x1c5 MovB
	func_1748(var_114_bool, var_115_object, var_116_int, var_117_bool); // 0x1c6 NEW_2
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
	func_1748(var_146_bool, var_147_object, var_148_int, var_149_bool); // 0x1db NEW_2
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


func_1702(var_98_int, var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_int = 0; // 0x6a6 PushV
	GetPlayerContainer(var_103_object); // 0x6a7 Func
	GetItemAmount(var_104_int, var_100_int, var_99_int); // 0x6a9 ObjFunc
	var_98_int = var_104_int; // 0x6ab Mov
	return 4; // 0x6ac Return
}


func_1574(var_124_int)
{
	var_126_int = 0; var_127_int = 0; // 0x626 PushV
	GetItemID(var_127_int); // 0x627 ObjFunc
	var_124_int = var_127_int; // 0x629 Mov
	return 2; // 0x62a Return
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
	func_1685(var_181_int, var_182_int); // 0x22e NEW_2
	var_178_int = var_181_int; // 0x22f Mov
	var_180_int = 0; // 0x231 MovI
	
Label_562:
	var_183_bool = var_180_int < var_178_int; // 0x232 LT
	if(var_183_bool == 0) goto Label_590; // 0x233 JumpB
	var_184_bool = 0; var_185_int = 0; var_186_int = 0; // 0x234 PushV
	var_185_int = var_170_int; // 0x235 Mov
	var_186_int = var_180_int; // 0x236 Mov
	func_1710(var_184_bool, var_185_int, var_186_int); // 0x237 NEW_2
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
	func_1702(var_188_int, var_189_int, var_190_int); // 0x23e NEW_2
	var_179_int = var_188_int; // 0x23f Mov
	var_191_object = Obj(); var_192_int = 0; var_193_int = 0; // 0x241 PushV
	var_192_int = var_170_int; // 0x242 Mov
	var_193_int = var_180_int; // 0x243 Mov
	func_1693(var_191_object, var_192_int, var_193_int); // 0x244 NEW_2
	var_177_object = var_191_object; // 0x245 Mov
	add(var_177_object); // 0x247 ObjFunc
	add(var_179_int); // 0x249 ObjFunc
	
Label_590:
	return 8; // 0x24e Return
}


func_1324(var_1_int, var_2_int, var_24_int, var_25_int, var_26_object, var_563_int)
{
	var_564_int = 0; var_565_object = Obj(); var_566_int = 0; var_567_int = 0; var_568_int = 0; var_569_int = 0; var_570_object = Obj(); var_571_int = 0; var_572_int = 0; var_573_int = 0; // 0x52c PushV
	size(var_569_int); // 0x52d TObjFunc
	var_574_int = var_563_int + var_1_int; // 0x52f Add
	var_575_bool = var_574_int >= var_569_int; // 0x530 GE
	if(var_575_bool == 0) goto Label_1331; // 0x531 JumpB
	return 10; // 0x532 Return
	
Label_1331:
	var_576_int = var_563_int + var_1_int; // 0x533 Add
	get(var_570_object, var_576_int); // 0x534 TObjFunc
	var_577_bool = 0; var_578_object = Obj(); var_579_int = 0; var_580_bool = 0; // 0x536 PushV
	var_578_object = var_570_object; // 0x537 Mov
	var_579_int = var_25_int; // 0x538 MovT
	var_580_bool = 1; // 0x539 MovB
	func_1748(var_577_bool, var_578_object, var_579_int, var_580_bool); // 0x53a NEW_2
	if(var_577_bool == 0) goto Label_1342; // 0x53c JumpB
	return 10; // 0x53d Return
	
Label_1342:
	var_581_int = var_563_int + var_1_int; // 0x53e Add
	get(var_571_int, var_581_int); // 0x53f TObjFunc
	var_582_int = var_563_int + var_1_int; // 0x541 Add
	get(var_572_int, var_582_int); // 0x542 TObjFunc
	var_583_int = 0; // 0x544 PushI
	var_584_bool = var_571_int > var_583_int; // 0x545 GT
	if(var_584_bool == 0) goto Label_1395; // 0x546 JumpB
	var_585_int = 0; var_586_object = Obj(); var_587_int = 0; // 0x547 PushV
	var_586_object = var_570_object; // 0x548 Mov
	var_587_int = var_25_int; // 0x549 MovT
	func_1579(var_585_int, var_586_object, var_587_int); // 0x54a NEW_2
	var_588_float = 0; var_589_object = Obj(); var_590_int = 0; var_591_int = 0; // 0x54c PushV
	var_589_object = var_26_object; // 0x54d MovT
	var_590_int = var_24_int; // 0x54e MovT
	var_591_int = var_25_int; // 0x54f MovT
	func_1506(var_589_object, var_590_int, var_591_int); // 0x550 NEW_2
	var_573_int = var_585_int * var_588_float; // 0x552 Mult2
	var_592_bool = var_573_int <= var_2_int; // 0x553 LE
	if(var_592_bool == 0) goto Label_1395; // 0x554 JumpB
	var_593_bool = 0; var_594_object = Obj(); // 0x555 PushV
	var_594_object = var_570_object; // 0x556 Mov
	func_912(var_564_int, var_565_object, var_566_int, var_567_int, var_568_int, var_569_int, var_570_object, var_571_int, var_572_int, var_573_int, var_593_bool, var_594_object); // 0x557 NEW_2
	if(var_593_bool == 0) goto Label_1395; // 0x559 JumpB
	var_595_int = -1; // 0x55a PushI
	var_571_int = var_571_int + var_595_int; // 0x55b Add2
	var_596_object = Obj(); // 0x55c PushV
	var_596_object = var_570_object; // 0x55d Mov
	func_0(var_596_object); // 0x55e NEW_2
	var_597_int = var_563_int + var_1_int; // 0x560 Add
	set(var_597_int, var_571_int); // 0x561 TObjFunc
	var_598_int = 0; // 0x563 PushV
	var_599_int = 0; var_600_object = Obj(); var_601_int = 0; // 0x564 PushV
	var_600_object = var_570_object; // 0x565 Mov
	var_601_int = var_25_int; // 0x566 MovT
	func_1579(var_599_int, var_600_object, var_601_int); // 0x567 NEW_2
	var_602_int = -var_599_int; // 0x569 Neg
	var_603_float = 0; var_604_object = Obj(); var_605_int = 0; var_606_int = 0; // 0x56a PushV
	var_604_object = var_26_object; // 0x56b MovT
	var_605_int = var_24_int; // 0x56c MovT
	var_606_int = var_25_int; // 0x56d MovT
	func_1506(var_604_object, var_605_int, var_606_int); // 0x56e NEW_2
	var_598_int = var_602_int * var_603_float; // 0x570 Mult2
	func_1121(var_572_int, var_573_int, var_598_int); // 0x571 NEW_2
	
Label_1395:
	func_628(var_572_int, var_573_int); // 0x574 NEW_2
	func_719(var_572_int, var_573_int); // 0x577 NEW_2
	return 10; // 0x579 Return
}


func_1197(var_0_int, var_24_int, var_25_int, var_26_object, var_404_int)
{
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; var_408_int = 0; var_409_int = 0; var_410_int = 0; var_411_object = Obj(); var_412_int = 0; var_413_int = 0; var_414_int = 0; // 0x4ad PushV
	size(var_410_int); // 0x4ae TObjFunc
	var_415_int = var_404_int + var_0_int; // 0x4b0 Add
	var_416_bool = var_415_int >= var_410_int; // 0x4b1 GE
	if(var_416_bool == 0) goto Label_1204; // 0x4b2 JumpB
	return 10; // 0x4b3 Return
	
Label_1204:
	var_417_int = var_404_int + var_0_int; // 0x4b4 Add
	get(var_411_object, var_417_int); // 0x4b5 TObjFunc
	var_418_bool = 0; var_419_object = Obj(); var_420_int = 0; var_421_bool = 0; // 0x4b7 PushV
	var_419_object = var_411_object; // 0x4b8 Mov
	var_420_int = var_25_int; // 0x4b9 MovT
	var_421_bool = 0; // 0x4ba MovB
	func_1748(var_418_bool, var_419_object, var_420_int, var_421_bool); // 0x4bb NEW_2
	if(var_418_bool == 0) goto Label_1215; // 0x4bd JumpB
	return 10; // 0x4be Return
	
Label_1215:
	var_422_int = var_404_int + var_0_int; // 0x4bf Add
	get(var_412_int, var_422_int); // 0x4c0 TObjFunc
	var_423_int = var_404_int + var_0_int; // 0x4c2 Add
	get(var_413_int, var_423_int); // 0x4c3 TObjFunc
	var_424_int = 0; // 0x4c5 PushI
	var_425_bool = var_412_int > var_424_int; // 0x4c6 GT
	if(var_425_bool == 0) goto Label_1253; // 0x4c7 JumpB
	var_426_bool = 0; var_427_object = Obj(); // 0x4c8 PushV
	var_427_object = var_411_object; // 0x4c9 Mov
	func_973(var_405_int, var_406_object, var_407_int, var_408_int, var_409_int, var_410_int, var_411_object, var_412_int, var_413_int, var_414_int, var_426_bool, var_427_object); // 0x4ca NEW_2
	var_476_object = Obj(); // 0x4cc PushV
	var_476_object = var_411_object; // 0x4cd Mov
	func_24(var_476_object); // 0x4ce NEW_2
	var_488_int = -1; // 0x4d0 PushI
	var_412_int = var_412_int + var_488_int; // 0x4d1 Add2
	var_489_int = var_404_int + var_0_int; // 0x4d2 Add
	set(var_489_int, var_412_int); // 0x4d3 TObjFunc
	var_490_int = 0; var_491_object = Obj(); var_492_int = 0; // 0x4d5 PushV
	var_491_object = var_411_object; // 0x4d6 Mov
	var_492_int = var_25_int; // 0x4d7 MovT
	func_1579(var_490_int, var_491_object, var_492_int); // 0x4d8 NEW_2
	var_493_float = 0; var_494_object = Obj(); var_495_int = 0; var_496_int = 0; // 0x4da PushV
	var_494_object = var_26_object; // 0x4db MovT
	var_495_int = var_24_int; // 0x4dc MovT
	var_496_int = var_25_int; // 0x4dd MovT
	func_1532(var_494_object, var_495_int, var_496_int); // 0x4de NEW_2
	var_414_int = var_490_int * var_493_float; // 0x4e0 Mult2
	var_497_int = 0; // 0x4e1 PushV
	var_497_int = var_414_int; // 0x4e2 Mov
	func_1121(var_413_int, var_414_int, var_497_int); // 0x4e3 NEW_2
	
Label_1253:
	func_628(var_413_int, var_414_int); // 0x4e6 NEW_2
	func_719(var_413_int, var_414_int); // 0x4e9 NEW_2
	return 10; // 0x4eb Return
}


func_814(var_39_int)
{
	var_277_string = "l_money_slot"; // 0x32e PushS
	SendMessage(var_39_int, var_277_string); // 0x32f Func
	return 0; // 0x331 Return
}


func_1710(var_90_bool, var_91_int, var_92_int)
{
	var_93_object = Obj(); var_94_bool = 0; var_95_object = Obj(); var_96_bool = 0; // 0x6ae PushV
	GetPlayerContainer(var_95_object); // 0x6af Func
	IsItemSelected(var_96_bool, var_92_int, var_91_int); // 0x6b1 ObjFunc
	var_90_bool = var_96_bool; // 0x6b3 Mov
	return 4; // 0x6b4 Return
}


func_1454(var_326_string, var_327_int)
{
	var_328_int = 1; // 0x5af PushI
	var_329_int = var_327_int + var_328_int; // 0x5b0 Add
	var_330_int = 10; // 0x5b1 PushI
	var_331_bool = var_329_int < var_330_int; // 0x5b2 LT
	if(var_331_bool == 0) goto Label_1465; // 0x5b3 JumpB
	var_332_string = "r_slot0"; // 0x5b4 PushS
	var_333_int = 1; // 0x5b5 PushI
	var_334_int = var_327_int + var_333_int; // 0x5b6 Add
	var_326_string = var_332_string + var_334_int; // 0x5b7 Add2
	return 0; // 0x5b8 Return
	
Label_1465:
	var_335_string = "r_slot"; // 0x5b9 PushS
	var_336_int = 1; // 0x5ba PushI
	var_337_int = var_327_int + var_336_int; // 0x5bb Add
	var_326_string = var_335_string + var_337_int; // 0x5bc Add2
	return 0; // 0x5bd Return
}


func_1579(var_103_int, var_104_object, var_105_int)
{
	var_106_int = 0; var_107_int = 0; var_108_int = 0; var_109_string = ""; var_110_bool = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_string = ""; var_119_bool = 0; var_120_bool = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; // 0x62b PushV
	var_124_int = 0; // 0x62c PushI
	var_125_bool = var_105_int == var_124_int; // 0x62d Eq
	if(var_125_bool == 0) goto Label_1631; // 0x62e JumpB
	var_126_int = 0; // 0x62f PushV
	func_1429(var_126_int); // 0x630 NEW_2
	var_115_int = var_126_int; // 0x631 Mov
	var_116_int = 0; // 0x633 MovI
	var_117_int = 1; // 0x634 MovI
	
Label_1589:
	var_132_bool = var_117_int <= var_115_int; // 0x635 LE
	if(var_132_bool == 0) goto Label_1614; // 0x636 JumpB
	var_118_string = "Price"; // 0x637 MovS
	var_133_int = 1; // 0x638 PushI
	var_134_bool = var_117_int != var_133_int; // 0x639 Neq
	if(var_134_bool == 0) goto Label_1596; // 0x63a JumpB
	var_118_string = var_118_string + var_117_int; // 0x63b Add2
	
Label_1596:
	var_135_int = 0; var_136_object = Obj(); // 0x63c PushV
	var_136_object = var_104_object; // 0x63d Mov
	func_1574(var_136_object); // 0x63e NEW_2
	HasInvItemProperty(var_119_bool, var_135_int, var_118_string); // 0x640 Func
	var_137_bool = var_119_bool == 0; // 0x642 Not
	if(var_137_bool == 0) goto Label_1605; // 0x643 JumpB
	goto Label_1611; // 0x644 Jump
	
Label_1611:
	var_138_int = 1; // 0x64b PushI
	var_117_int = var_117_int + var_138_int; // 0x64c Add2
	goto Label_1589; // 0x64d Jump
	
Label_1605:
	var_139_int = 0; var_140_object = Obj(); // 0x645 PushV
	var_140_object = var_104_object; // 0x646 Mov
	func_1574(var_140_object); // 0x647 NEW_2
	GetInvItemProperty(var_116_int, var_139_int, var_118_string); // 0x649 Func
	
Label_1614:
	var_141_string = "durability"; // 0x64e PushS
	HasProperty(var_120_bool, var_141_string); // 0x64f ObjFunc
	var_142_bool = var_120_bool; // 0x651 Push
	if(var_142_bool == 0) goto Label_1629; // 0x652 JumpB
	var_143_string = "durability"; // 0x653 PushS
	GetProperty(var_121_int, var_143_string); // 0x654 ObjFunc
	var_144_float = 0.5; // 0x656 PushF
	var_145_float = 1.0; // 0x657 PushF
	var_146_float = 100.0; // 0x658 PushF
	var_147_float = var_121_int / var_146_float; // 0x659 Div
	var_148_int = var_145_float + var_147_float; // 0x65a Add
	var_149_float = var_144_float * var_148_int; // 0x65b Mult
	var_116_int = var_116_int * var_149_float; // 0x65c Mult2
	
Label_1629:
	var_103_int = var_116_int; // 0x65d Mov
	return 18; // 0x65e Return
	
Label_1631:
	var_150_int = 0; var_151_object = Obj(); // 0x65f PushV
	var_151_object = var_104_object; // 0x660 Mov
	func_1574(var_151_object); // 0x661 NEW_2
	var_152_string = "BarterPrice"; // 0x663 PushS
	var_153_int = var_152_string + var_105_int; // 0x664 Add
	HasInvItemProperty(var_122_bool, var_150_int, var_153_int); // 0x665 Func
	var_154_bool = var_122_bool == 0; // 0x667 Not
	if(var_154_bool == 0) goto Label_1643; // 0x668 JumpB
	var_103_int = 0; // 0x669 MovI
	return 18; // 0x66a Return
	
Label_1643:
	var_155_int = 0; var_156_object = Obj(); // 0x66b PushV
	var_156_object = var_104_object; // 0x66c Mov
	func_1574(var_156_object); // 0x66d NEW_2
	var_157_string = "BarterPrice"; // 0x66f PushS
	var_158_int = var_157_string + var_105_int; // 0x670 Add
	GetInvItemProperty(var_123_int, var_155_int, var_158_int); // 0x671 Func
	var_159_int = 0; // 0x673 PushI
	var_160_bool = var_123_int > var_159_int; // 0x674 GT
	if(var_160_bool == 0) goto Label_1656; // 0x675 JumpB
	var_103_int = var_123_int; // 0x676 Mov
	return 18; // 0x677 Return
	
Label_1656:
	var_103_int = -var_123_int; // 0x678 Neg2
	return 18; // 0x679 Return
}


func_818(var_3_int, var_25_int)
{
	var_831_int = 0; var_832_bool = 0; var_833_object = Obj(); var_834_object = Obj(); var_835_object = Obj(); var_836_int = 0; var_837_int = 0; var_838_int = 0; var_839_bool = 0; var_840_object = Obj(); var_841_object = Obj(); var_842_object = Obj(); var_843_int = 0; var_844_int = 0; // 0x332 PushV
	GetContainer(var_841_object); // 0x333 Func
	GetPlayerContainer(var_842_object); // 0x335 Func
	size(var_838_int); // 0x337 TObjFunc
	var_843_int = 0; // 0x339 MovI
	
Label_826:
	var_845_bool = var_843_int < var_838_int; // 0x33a LT
	if(var_845_bool == 0) goto Label_861; // 0x33b JumpB
	get(var_840_object, var_843_int); // 0x33c TObjFunc
	var_846_bool = 0; var_847_object = Obj(); var_848_object = Obj(); var_849_int = 0; // 0x33e PushV
	var_847_object = var_842_object; // 0x33f Mov
	var_848_object = var_840_object; // 0x340 Mov
	var_850_int = 0; var_851_object = Obj(); // 0x341 PushV
	var_851_object = var_840_object; // 0x342 Mov
	func_1658(var_850_int, var_851_object); // 0x343 NEW_2
	var_849_int = var_850_int; // 0x344 Mov
	func_1798(var_847_object, var_848_object, var_849_int); // 0x346 NEW_2
	var_839_bool = var_846_bool; // 0x347 Mov
	var_864_bool = var_839_bool == 0; // 0x349 Not
	if(var_864_bool == 0) goto Label_846; // 0x34a JumpB
	var_865_string = "Error: failed to remove item"; // 0x34b PushS
	Trace(var_865_string); // 0x34c Func
	
Label_846:
	var_866_bool = 0; var_867_object = Obj(); var_868_object = Obj(); var_869_int = 0; // 0x34e PushV
	var_867_object = var_841_object; // 0x34f Mov
	var_868_object = var_840_object; // 0x350 Mov
	var_869_int = 0; // 0x351 MovI
	func_1823(var_867_object, var_868_object, var_869_int); // 0x352 NEW_2
	var_839_bool = var_866_bool; // 0x353 Mov
	var_873_bool = var_839_bool == 0; // 0x355 Not
	if(var_873_bool == 0) goto Label_858; // 0x356 JumpB
	var_874_string = "Error: failed to add item"; // 0x357 PushS
	Trace(var_874_string); // 0x358 Func
	
Label_858:
	var_875_int = 1; // 0x35a PushI
	var_843_int = var_843_int + var_875_int; // 0x35b Add2
	goto Label_826; // 0x35c Jump
	
Label_861:
	size(var_838_int); // 0x35d TObjFunc
	var_844_int = 0; // 0x35f MovI
	
Label_864:
	var_876_bool = var_844_int < var_838_int; // 0x360 LT
	if(var_876_bool == 0) goto Label_899; // 0x361 JumpB
	get(var_840_object, var_844_int); // 0x362 TObjFunc
	var_877_bool = 0; var_878_object = Obj(); var_879_object = Obj(); var_880_int = 0; // 0x364 PushV
	var_878_object = var_841_object; // 0x365 Mov
	var_879_object = var_840_object; // 0x366 Mov
	var_880_int = 0; // 0x367 MovI
	func_1798(var_878_object, var_879_object, var_880_int); // 0x368 NEW_2
	var_839_bool = var_877_bool; // 0x369 Mov
	var_881_bool = var_839_bool == 0; // 0x36b Not
	if(var_881_bool == 0) goto Label_880; // 0x36c JumpB
	var_882_string = "Error: failed to remove item"; // 0x36d PushS
	Trace(var_882_string); // 0x36e Func
	
Label_880:
	var_883_bool = 0; var_884_object = Obj(); var_885_object = Obj(); var_886_int = 0; // 0x370 PushV
	var_884_object = var_842_object; // 0x371 Mov
	var_885_object = var_840_object; // 0x372 Mov
	var_887_int = 0; var_888_object = Obj(); // 0x373 PushV
	var_888_object = var_840_object; // 0x374 Mov
	func_1658(var_887_int, var_888_object); // 0x375 NEW_2
	var_886_int = var_887_int; // 0x376 Mov
	func_1823(var_884_object, var_885_object, var_886_int); // 0x378 NEW_2
	var_839_bool = var_883_bool; // 0x379 Mov
	var_889_bool = var_839_bool == 0; // 0x37b Not
	if(var_889_bool == 0) goto Label_896; // 0x37c JumpB
	var_890_string = "Error: failed to add item"; // 0x37d PushS
	Trace(var_890_string); // 0x37e Func
	
Label_896:
	var_891_int = 1; // 0x380 PushI
	var_844_int = var_844_int + var_891_int; // 0x381 Add2
	goto Label_864; // 0x382 Jump
	
Label_899:
	var_892_int = 0; // 0x383 PushI
	var_893_bool = var_25_int == var_892_int; // 0x384 Eq
	if(var_893_bool == 0) goto Label_904; // 0x385 JumpB
	SetPlayerMoneyCount(var_843_int); // 0x386 Func
	
Label_904:
	var_3_int = 0; // 0x388 TMovI
	func_270(var_840_object, var_841_object, var_842_object, var_843_int, var_844_int); // 0x38a NEW_2
	return 14; // 0x38c Return
}


func_1718(var_65_object, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x6b6 PushV
	GetContainer(var_69_object); // 0x6b7 Func
	GetItem(var_70_object, var_66_int); // 0x6b9 ObjFunc
	var_65_object = var_70_object; // 0x6bb Mov
	return 4; // 0x6bc Return
}


func_1085(var_434_bool, var_435_object)
{
	var_438_int = 0; var_439_object = Obj(); var_440_int = 0; var_441_int = 0; var_442_int = 0; var_443_object = Obj(); var_444_int = 0; var_445_int = 0; // 0x43d PushV
	size(var_442_int); // 0x43e ObjFunc
	var_444_int = 0; // 0x440 MovI
	
Label_1089:
	var_446_bool = var_444_int < var_442_int; // 0x441 LT
	if(var_446_bool == 0) goto Label_1118; // 0x442 JumpB
	get(var_443_object, var_444_int); // 0x443 ObjFunc
	get(var_445_int, var_444_int); // 0x445 ObjFunc
	var_447_bool = 0; var_448_object = Obj(); var_449_object = Obj(); // 0x447 PushV
	var_448_object = var_435_object; // 0x448 Mov
	var_449_object = var_443_object; // 0x449 Mov
	func_1740(var_447_bool, var_448_object, var_449_object); // 0x44a NEW_2
	if(var_447_bool == 0) goto Label_1115; // 0x44c JumpB
	var_450_int = -1; // 0x44d PushI
	var_445_int = var_445_int + var_450_int; // 0x44e Add2
	var_451_int = 0; // 0x44f PushI
	var_452_bool = var_445_int == var_451_int; // 0x450 Eq
	if(var_452_bool == 0) goto Label_1111; // 0x451 JumpB
	remove(var_444_int); // 0x452 ObjFunc
	remove(var_444_int); // 0x454 ObjFunc
	goto Label_1113; // 0x456 Jump
	
Label_1113:
	var_434_bool = 1; // 0x459 MovB
	return 8; // 0x45a Return
	
Label_1111:
	set(var_444_int, var_445_int); // 0x457 ObjFunc
	
Label_1115:
	var_453_int = 1; // 0x45b PushI
	var_444_int = var_444_int + var_453_int; // 0x45c Add2
	goto Label_1089; // 0x45d Jump
	
Label_1118:
	var_434_bool = 0; // 0x45e MovB
	return 8; // 0x45f Return
}


func_1470(var_32_int, var_34_string)
{
	var_35_int = 0; var_36_int = 0; // 0x5be PushV
	var_36_int = 0; // 0x5bf MovI
	
Label_1472:
	var_37_int = 18; // 0x5c0 PushI
	var_38_bool = var_36_int < var_37_int; // 0x5c1 LT
	if(var_38_bool == 0) goto Label_1486; // 0x5c2 JumpB
	var_39_string = ""; var_40_int = 0; // 0x5c3 PushV
	var_40_int = var_36_int; // 0x5c4 Mov
	func_1438(var_39_string, var_40_int); // 0x5c5 NEW_2
	var_51_bool = var_34_string == var_39_string; // 0x5c7 Eq
	if(var_51_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_32_int = var_36_int; // 0x5c9 Mov
	return 2; // 0x5ca Return
	
Label_1483:
	var_52_int = 1; // 0x5cb PushI
	var_36_int = var_36_int + var_52_int; // 0x5cc Add2
	goto Label_1472; // 0x5cd Jump
	
Label_1486:
	var_32_int = -1; // 0x5ce MovI
	return 2; // 0x5cf Return
}


func_1727(var_59_int, var_60_int)
{
	var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_int = 0; // 0x6bf PushV
	GetContainer(var_63_object); // 0x6c0 Func
	GetItemAmount(var_64_int, var_60_int); // 0x6c2 ObjFunc
	var_59_int = var_64_int; // 0x6c4 Mov
	return 4; // 0x6c5 Return
}


func_1735(var_219_bool, var_221_object)
{
	var_222_bool = 0; var_223_bool = 0; // 0x6c7 PushV
	Compare(var_223_bool, var_221_object); // 0x6c8 ObjFunc
	var_219_bool = var_223_bool; // 0x6ca Mov
	return 2; // 0x6cb Return
}


func_1740(var_216_bool, var_217_object, var_218_object)
{
	var_219_bool = 0; var_220_object = Obj(); var_221_object = Obj(); // 0x6cd PushV
	var_220_object = var_217_object; // 0x6ce Mov
	var_221_object = var_218_object; // 0x6cf Mov
	func_1735(var_220_object, var_221_object); // 0x6d0 NEW_2
	var_216_bool = var_219_bool; // 0x6d1 Mov
	return 0; // 0x6d3 Return
}


func_973(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_object, var_19_object, var_426_bool, var_427_object)
{
	var_428_int = 0; var_429_int = 0; // 0x3cd PushV
	var_430_int = 0; var_431_object = Obj(); // 0x3ce PushV
	var_431_object = var_427_object; // 0x3cf Mov
	func_1658(var_430_int, var_431_object); // 0x3d0 NEW_2
	var_429_int = var_430_int; // 0x3d1 Mov
	var_432_int = 0; // 0x3d3 PushI
	var_433_bool = var_429_int == var_432_int; // 0x3d4 Eq
	if(var_433_bool == 0) goto Label_991; // 0x3d5 JumpB
	var_434_bool = 0; var_435_object = Obj(); var_436_object = Obj(); var_437_object = Obj(); // 0x3d6 PushV
	var_435_object = var_427_object; // 0x3d7 Mov
	var_436_object = var_10_object; // 0x3d8 MovT
	var_437_object = var_11_object; // 0x3d9 MovT
	func_1085(var_436_object, var_437_object); // 0x3da NEW_2
	var_426_bool = var_434_bool; // 0x3db Mov
	return 2; // 0x3dd Return
	
Label_991:
	var_454_int = 1; // 0x3df PushI
	var_455_bool = var_429_int == var_454_int; // 0x3e0 Eq
	if(var_455_bool == 0) goto Label_1003; // 0x3e1 JumpB
	var_456_bool = 0; var_457_object = Obj(); var_458_object = Obj(); var_459_object = Obj(); // 0x3e2 PushV
	var_457_object = var_427_object; // 0x3e3 Mov
	var_458_object = var_12_object; // 0x3e4 MovT
	var_459_object = var_13_object; // 0x3e5 MovT
	func_1085(var_458_object, var_459_object); // 0x3e6 NEW_2
	var_426_bool = var_456_bool; // 0x3e7 Mov
	return 2; // 0x3e9 Return
	
Label_1003:
	var_460_int = 2; // 0x3eb PushI
	var_461_bool = var_429_int == var_460_int; // 0x3ec Eq
	if(var_461_bool == 0) goto Label_1015; // 0x3ed JumpB
	var_462_bool = 0; var_463_object = Obj(); var_464_object = Obj(); var_465_object = Obj(); // 0x3ee PushV
	var_463_object = var_427_object; // 0x3ef Mov
	var_464_object = var_14_object; // 0x3f0 MovT
	var_465_object = var_15_object; // 0x3f1 MovT
	func_1085(var_464_object, var_465_object); // 0x3f2 NEW_2
	var_426_bool = var_462_bool; // 0x3f3 Mov
	return 2; // 0x3f5 Return
	
Label_1015:
	var_466_int = 3; // 0x3f7 PushI
	var_467_bool = var_429_int == var_466_int; // 0x3f8 Eq
	if(var_467_bool == 0) goto Label_1026; // 0x3f9 JumpB
	var_468_bool = 0; var_469_object = Obj(); var_470_object = Obj(); var_471_object = Obj(); // 0x3fa PushV
	var_469_object = var_427_object; // 0x3fb Mov
	var_470_object = var_16_object; // 0x3fc MovT
	var_471_object = var_17_object; // 0x3fd MovT
	func_1085(var_470_object, var_471_object); // 0x3fe NEW_2
	var_426_bool = var_468_bool; // 0x3ff Mov
	return 2; // 0x401 Return
	
Label_1026:
	var_472_bool = 0; var_473_object = Obj(); var_474_object = Obj(); var_475_object = Obj(); // 0x402 PushV
	var_473_object = var_427_object; // 0x403 Mov
	var_474_object = var_18_object; // 0x404 MovT
	var_475_object = var_19_object; // 0x405 MovT
	func_1085(var_474_object, var_475_object); // 0x406 NEW_2
	var_426_bool = var_472_bool; // 0x407 Mov
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
	func_1416(var_291_object, var_308_int, var_309_int); // 0x2f8 NEW_2
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
	func_1748(var_320_bool, var_321_object, var_322_int, var_323_bool); // 0x304 NEW_2
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
	func_1454(var_326_string, var_327_int); // 0x312 NEW_2
	SendMessage(var_325_int, var_326_string, var_291_object); // 0x314 Func
	var_338_string = ""; var_339_int = 0; // 0x316 PushV
	var_339_int = var_289_int - var_1_int; // 0x317 Sub2
	func_1454(var_338_string, var_339_int); // 0x318 NEW_2
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
	func_1454(var_342_string, var_343_int); // 0x321 NEW_2
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


func_1488(var_498_int, var_500_string)
{
	var_501_int = 0; var_502_int = 0; // 0x5d0 PushV
	var_502_int = 0; // 0x5d1 MovI
	
Label_1490:
	var_503_int = 18; // 0x5d2 PushI
	var_504_bool = var_502_int < var_503_int; // 0x5d3 LT
	if(var_504_bool == 0) goto Label_1504; // 0x5d4 JumpB
	var_505_string = ""; var_506_int = 0; // 0x5d5 PushV
	var_506_int = var_502_int; // 0x5d6 Mov
	func_1454(var_505_string, var_506_int); // 0x5d7 NEW_2
	var_507_bool = var_500_string == var_505_string; // 0x5d9 Eq
	if(var_507_bool == 0) goto Label_1501; // 0x5da JumpB
	var_498_int = var_502_int; // 0x5db Mov
	return 2; // 0x5dc Return
	
Label_1501:
	var_508_int = 1; // 0x5dd PushI
	var_502_int = var_502_int + var_508_int; // 0x5de Add2
	goto Label_1490; // 0x5df Jump
	
Label_1504:
	var_498_int = -1; // 0x5e0 MovI
	return 2; // 0x5e1 Return
}


func_592(var_789_int)
{
	var_790_int = 0; var_791_int = 0; var_792_int = 0; var_793_int = 0; // 0x250 PushV
	size(var_792_int); // 0x251 TObjFunc
	var_794_int = 2; // 0x253 PushI
	var_795_int = var_792_int + var_794_int; // 0x254 Add
	var_796_int = 1; // 0x255 PushI
	var_797_int = var_795_int - var_796_int; // 0x256 Sub
	var_798_int = 2; // 0x257 PushI
	var_799_float = var_797_int / var_798_int; // 0x258 Div
	var_800_int = 9; // 0x259 PushI
	var_793_int = var_799_float - var_800_int; // 0x25a Sub2
	var_801_int = 0; // 0x25b PushI
	var_802_bool = var_793_int < var_801_int; // 0x25c LT
	if(var_802_bool == 0) goto Label_608; // 0x25d JumpB
	var_789_int = 0; // 0x25e MovI
	return 4; // 0x25f Return
	
Label_608:
	var_789_int = var_793_int; // 0x260 Mov
	return 4; // 0x261 Return
}


func_1748(var_114_bool, var_115_object, var_116_int, var_117_bool)
{
	var_118_bool = 0; var_119_int = 0; var_120_bool = 0; var_121_int = 0; // 0x6d4 PushV
	var_122_int = 0; // 0x6d5 PushI
	var_123_bool = var_116_int == var_122_int; // 0x6d6 Eq
	if(var_123_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_114_bool = 0; // 0x6d8 MovB
	return 4; // 0x6d9 Return
	
Label_1754:
	var_124_int = 0; var_125_object = Obj(); // 0x6da PushV
	var_125_object = var_115_object; // 0x6db Mov
	func_1574(var_125_object); // 0x6dc NEW_2
	var_128_string = "BarterPrice"; // 0x6de PushS
	var_129_int = var_128_string + var_116_int; // 0x6df Add
	HasInvItemProperty(var_120_bool, var_124_int, var_129_int); // 0x6e0 Func
	var_130_bool = var_120_bool == 0; // 0x6e2 Not
	if(var_130_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_114_bool = 1; // 0x6e4 MovB
	return 4; // 0x6e5 Return
	
Label_1766:
	var_131_int = 0; var_132_object = Obj(); // 0x6e6 PushV
	var_132_object = var_115_object; // 0x6e7 Mov
	func_1574(var_132_object); // 0x6e8 NEW_2
	var_133_string = "BarterPrice"; // 0x6ea PushS
	var_134_int = var_133_string + var_116_int; // 0x6eb Add
	GetInvItemProperty(var_121_int, var_131_int, var_134_int); // 0x6ec Func
	var_135_bool = 0; // 0x6ee PushV
	var_135_bool = 0; // 0x6ef MovB
	var_136_bool = var_117_bool; // 0x6f0 Push
	if(var_136_bool == 0) goto Label_1782; // 0x6f1 JumpB
	var_137_int = 0; // 0x6f2 PushI
	var_138_bool = var_121_int > var_137_int; // 0x6f3 GT
	if(var_138_bool == 0) goto Label_1782; // 0x6f4 JumpB
	var_135_bool = 1; // 0x6f5 MovB
	
Label_1782:
	if(var_135_bool == 0) goto Label_1785; // 0x6f6 JumpB
	var_114_bool = 0; // 0x6f7 MovB
	return 4; // 0x6f8 Return
	
Label_1785:
	var_139_bool = 0; // 0x6f9 PushV
	var_139_bool = 0; // 0x6fa MovB
	var_140_bool = var_117_bool == 0; // 0x6fb Not
	if(var_140_bool == 0) goto Label_1793; // 0x6fc JumpB
	var_141_int = 0; // 0x6fd PushI
	var_142_bool = var_121_int < var_141_int; // 0x6fe LT
	if(var_142_bool == 0) goto Label_1793; // 0x6ff JumpB
	var_139_bool = 1; // 0x700 MovB
	
Label_1793:
	if(var_139_bool == 0) goto Label_1796; // 0x701 JumpB
	var_114_bool = 0; // 0x702 MovB
	return 4; // 0x703 Return
	
Label_1796:
	var_114_bool = 1; // 0x704 MovB
	return 4; // 0x705 Return
}


func_1121(var_2_int, var_3_int, var_269_int)
{
	var_2_int = var_2_int + var_269_int; // 0x462 Add2
	var_3_int = var_3_int - var_269_int; // 0x463 Sub2
	func_810(var_269_int); // 0x465 NEW_2
	func_814(var_269_int); // 0x468 NEW_2
	return 0; // 0x46a Return
}


func_610(var_810_int)
{
	var_811_int = 0; var_812_int = 0; var_813_int = 0; var_814_int = 0; // 0x262 PushV
	size(var_813_int); // 0x263 TObjFunc
	var_815_int = 2; // 0x265 PushI
	var_816_int = var_813_int + var_815_int; // 0x266 Add
	var_817_int = 1; // 0x267 PushI
	var_818_int = var_816_int - var_817_int; // 0x268 Sub
	var_819_int = 2; // 0x269 PushI
	var_820_float = var_818_int / var_819_int; // 0x26a Div
	var_821_int = 9; // 0x26b PushI
	var_814_int = var_820_float - var_821_int; // 0x26c Sub2
	var_822_int = 0; // 0x26d PushI
	var_823_bool = var_814_int < var_822_int; // 0x26e LT
	if(var_823_bool == 0) goto Label_626; // 0x26f JumpB
	var_810_int = 0; // 0x270 MovI
	return 4; // 0x271 Return
	
Label_626:
	var_810_int = var_814_int; // 0x272 Mov
	return 4; // 0x273 Return
}


func_1506(var_542_float, var_544_int, var_545_int)
{
	var_546_float = 0; var_547_int = 0; var_548_bool = 0; var_549_float = 0; var_550_int = 0; var_551_bool = 0; // 0x5e2 PushV
	var_552_int = 0; // 0x5e3 PushI
	var_553_bool = var_545_int != var_552_int; // 0x5e4 Neq
	if(var_553_bool == 0) goto Label_1512; // 0x5e5 JumpB
	var_542_float = 1; // 0x5e6 MovI
	return 6; // 0x5e7 Return
	
Label_1512:
	var_549_float = 1; // 0x5e8 MovI
	var_550_int = 1; // 0x5e9 MovI
	
Label_1514:
	var_554_bool = var_550_int <= var_544_int; // 0x5ea LE
	if(var_554_bool == 0) goto Label_1529; // 0x5eb JumpB
	var_555_string = "sellf"; // 0x5ec PushS
	var_556_int = var_555_string + var_550_int; // 0x5ed Add
	HasProperty(var_556_int, var_551_bool); // 0x5ee ObjFunc
	var_557_bool = var_551_bool; // 0x5f0 Push
	if(var_557_bool == 0) goto Label_1526; // 0x5f1 JumpB
	var_558_string = "sellf"; // 0x5f2 PushS
	var_559_int = var_558_string + var_550_int; // 0x5f3 Add
	GetProperty(var_559_int, var_549_float); // 0x5f4 ObjFunc
	
Label_1526:
	var_560_int = 1; // 0x5f6 PushI
	var_550_int = var_550_int + var_560_int; // 0x5f7 Add2
	goto Label_1514; // 0x5f8 Jump
	
Label_1529:
	var_561_int = 100; // 0x5f9 PushI
	var_542_float = var_549_float / var_549_float; // 0x5fa Div2
	return 6; // 0x5fb Return
}


func_1131(var_0_int, var_2_int, var_24_int, var_25_int, var_26_object, var_57_int)
{
	var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0; var_66_int = 0; var_67_int = 0; // 0x46b PushV
	size(var_63_int); // 0x46c TObjFunc
	var_68_int = var_57_int + var_0_int; // 0x46e Add
	var_69_bool = var_68_int >= var_63_int; // 0x46f GE
	if(var_69_bool == 0) goto Label_1138; // 0x470 JumpB
	return 10; // 0x471 Return
	
Label_1138:
	var_70_int = var_57_int + var_0_int; // 0x472 Add
	get(var_64_object, var_70_int); // 0x473 TObjFunc
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; var_74_bool = 0; // 0x475 PushV
	var_72_object = var_64_object; // 0x476 Mov
	var_73_int = var_25_int; // 0x477 MovT
	var_74_bool = 0; // 0x478 MovB
	func_1748(var_71_bool, var_72_object, var_73_int, var_74_bool); // 0x479 NEW_2
	if(var_71_bool == 0) goto Label_1149; // 0x47b JumpB
	return 10; // 0x47c Return
	
Label_1149:
	var_100_int = var_57_int + var_0_int; // 0x47d Add
	get(var_65_int, var_100_int); // 0x47e TObjFunc
	var_101_int = var_57_int + var_0_int; // 0x480 Add
	get(var_66_int, var_101_int); // 0x481 TObjFunc
	var_102_bool = var_65_int < var_66_int; // 0x483 LT
	if(var_102_bool == 0) goto Label_1189; // 0x484 JumpB
	var_103_int = 0; var_104_object = Obj(); var_105_int = 0; // 0x485 PushV
	var_104_object = var_64_object; // 0x486 Mov
	var_105_int = var_25_int; // 0x487 MovT
	func_1579(var_103_int, var_104_object, var_105_int); // 0x488 NEW_2
	var_161_float = 0; var_162_object = Obj(); var_163_int = 0; var_164_int = 0; // 0x48a PushV
	var_162_object = var_26_object; // 0x48b MovT
	var_163_int = var_24_int; // 0x48c MovT
	var_164_int = var_25_int; // 0x48d MovT
	func_1532(var_162_object, var_163_int, var_164_int); // 0x48e NEW_2
	var_67_int = var_103_int * var_161_float; // 0x490 Mult2
	var_181_bool = var_67_int <= var_2_int; // 0x491 LE
	if(var_181_bool == 0) goto Label_1189; // 0x492 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x493 PushV
	var_183_object = var_64_object; // 0x494 Mov
	func_912(var_58_int, var_59_object, var_60_int, var_61_int, var_62_int, var_63_int, var_64_object, var_65_int, var_66_int, var_67_int, var_182_bool, var_183_object); // 0x495 NEW_2
	if(var_182_bool == 0) goto Label_1189; // 0x497 JumpB
	var_255_int = 1; // 0x498 PushI
	var_65_int = var_65_int + var_255_int; // 0x499 Add2
	var_256_int = var_57_int + var_0_int; // 0x49a Add
	set(var_256_int, var_65_int); // 0x49b TObjFunc
	var_257_object = Obj(); // 0x49d PushV
	var_257_object = var_64_object; // 0x49e Mov
	func_0(var_257_object); // 0x49f NEW_2
	var_269_int = 0; // 0x4a1 PushV
	var_269_int = -var_67_int; // 0x4a2 Neg2
	func_1121(var_66_int, var_67_int, var_269_int); // 0x4a3 NEW_2
	
Label_1189:
	func_628(var_66_int, var_67_int); // 0x4a6 NEW_2
	func_719(var_66_int, var_67_int); // 0x4a9 NEW_2
	return 10; // 0x4ab Return
}


func_1261(var_1_int, var_24_int, var_25_int, var_26_object, var_513_int)
{
	var_514_int = 0; var_515_object = Obj(); var_516_int = 0; var_517_int = 0; var_518_int = 0; var_519_int = 0; var_520_object = Obj(); var_521_int = 0; var_522_int = 0; var_523_int = 0; // 0x4ed PushV
	size(var_519_int); // 0x4ee TObjFunc
	var_524_int = var_513_int + var_1_int; // 0x4f0 Add
	var_525_bool = var_524_int >= var_519_int; // 0x4f1 GE
	if(var_525_bool == 0) goto Label_1268; // 0x4f2 JumpB
	return 10; // 0x4f3 Return
	
Label_1268:
	var_526_int = var_513_int + var_1_int; // 0x4f4 Add
	get(var_520_object, var_526_int); // 0x4f5 TObjFunc
	var_527_bool = 0; var_528_object = Obj(); var_529_int = 0; var_530_bool = 0; // 0x4f7 PushV
	var_528_object = var_520_object; // 0x4f8 Mov
	var_529_int = var_25_int; // 0x4f9 MovT
	var_530_bool = 1; // 0x4fa MovB
	func_1748(var_527_bool, var_528_object, var_529_int, var_530_bool); // 0x4fb NEW_2
	if(var_527_bool == 0) goto Label_1279; // 0x4fd JumpB
	return 10; // 0x4fe Return
	
Label_1279:
	var_531_int = var_513_int + var_1_int; // 0x4ff Add
	get(var_521_int, var_531_int); // 0x500 TObjFunc
	var_532_int = var_513_int + var_1_int; // 0x502 Add
	get(var_522_int, var_532_int); // 0x503 TObjFunc
	var_533_bool = var_521_int < var_522_int; // 0x505 LT
	if(var_533_bool == 0) goto Label_1316; // 0x506 JumpB
	var_534_bool = 0; var_535_object = Obj(); // 0x507 PushV
	var_535_object = var_520_object; // 0x508 Mov
	func_973(var_514_int, var_515_object, var_516_int, var_517_int, var_518_int, var_519_int, var_520_object, var_521_int, var_522_int, var_523_int, var_534_bool, var_535_object); // 0x509 NEW_2
	var_536_object = Obj(); // 0x50b PushV
	var_536_object = var_520_object; // 0x50c Mov
	func_24(var_536_object); // 0x50d NEW_2
	var_537_int = 1; // 0x50f PushI
	var_521_int = var_521_int + var_537_int; // 0x510 Add2
	var_538_int = var_513_int + var_1_int; // 0x511 Add
	set(var_538_int, var_521_int); // 0x512 TObjFunc
	var_539_int = 0; var_540_object = Obj(); var_541_int = 0; // 0x514 PushV
	var_540_object = var_520_object; // 0x515 Mov
	var_541_int = var_25_int; // 0x516 MovT
	func_1579(var_539_int, var_540_object, var_541_int); // 0x517 NEW_2
	var_542_float = 0; var_543_object = Obj(); var_544_int = 0; var_545_int = 0; // 0x519 PushV
	var_543_object = var_26_object; // 0x51a MovT
	var_544_int = var_24_int; // 0x51b MovT
	var_545_int = var_25_int; // 0x51c MovT
	func_1506(var_543_object, var_544_int, var_545_int); // 0x51d NEW_2
	var_523_int = var_539_int * var_542_float; // 0x51f Mult2
	var_562_int = 0; // 0x520 PushV
	var_562_int = var_523_int; // 0x521 Mov
	func_1121(var_522_int, var_523_int, var_562_int); // 0x522 NEW_2
	
Label_1316:
	func_628(var_522_int, var_523_int); // 0x525 NEW_2
	func_719(var_522_int, var_523_int); // 0x528 NEW_2
	return 10; // 0x52a Return
}


func_493()
{
	var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x1ed PushV
	var_53_int = 0; // 0x1ee PushV
	func_1677(var_53_int); // 0x1ef NEW_2
	var_48_int = var_53_int; // 0x1f0 Mov
	var_52_int = 0; // 0x1f2 MovI
	
Label_499:
	var_58_bool = var_52_int < var_48_int; // 0x1f3 LT
	if(var_58_bool == 0) goto Label_521; // 0x1f4 JumpB
	var_59_int = 0; var_60_int = 0; // 0x1f5 PushV
	var_60_int = var_52_int; // 0x1f6 Mov
	func_1727(var_59_int, var_60_int); // 0x1f7 NEW_2
	var_49_int = var_59_int; // 0x1f8 Mov
	var_65_object = Obj(); var_66_int = 0; // 0x1fa PushV
	var_66_int = var_52_int; // 0x1fb Mov
	func_1718(var_65_object, var_66_int); // 0x1fc NEW_2
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
	func_1403(var_219_object, var_236_int, var_237_int); // 0x29d NEW_2
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
	func_1748(var_248_bool, var_249_object, var_250_int, var_251_bool); // 0x2a9 NEW_2
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
	func_1438(var_254_string, var_255_int); // 0x2b7 NEW_2
	SendMessage(var_253_int, var_254_string, var_219_object); // 0x2b9 Func
	var_266_string = ""; var_267_int = 0; // 0x2bb PushV
	var_267_int = var_215_int - var_0_int; // 0x2bc Sub2
	func_1438(var_266_string, var_267_int); // 0x2bd NEW_2
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
	func_1438(var_270_string, var_271_int); // 0x2c7 NEW_2
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


func_1658(var_186_int, var_187_object)
{
	var_188_int = 0; var_189_int = 0; // 0x67a PushV
	var_190_int = 0; var_191_object = Obj(); // 0x67b PushV
	var_191_object = var_187_object; // 0x67c Mov
	func_1574(var_191_object); // 0x67d NEW_2
	var_192_string = "Category"; // 0x67f PushS
	GetInvItemProperty(var_189_int, var_190_int, var_192_string); // 0x680 Func
	var_186_int = var_189_int; // 0x682 Mov
	return 2; // 0x683 Return
}


func_1403(var_0_int, var_236_int, var_237_int)
{
	var_238_int = 0; var_239_int = 0; var_240_int = 0; var_241_int = 0; // 0x57b PushV
	size(var_240_int); // 0x57c TObjFunc
	var_242_int = var_237_int + var_0_int; // 0x57e Add
	var_243_bool = var_242_int >= var_240_int; // 0x57f GE
	if(var_243_bool == 0) goto Label_1411; // 0x580 JumpB
	var_236_int = 0; // 0x581 MovI
	return 4; // 0x582 Return
	
Label_1411:
	var_244_int = var_237_int + var_0_int; // 0x583 Add
	get(var_241_int, var_244_int); // 0x584 TObjFunc
	var_236_int = var_241_int; // 0x586 Mov
	return 4; // 0x587 Return
}


func_1532(var_161_float, var_163_int, var_164_int)
{
	var_165_float = 0; var_166_int = 0; var_167_bool = 0; var_168_float = 0; var_169_int = 0; var_170_bool = 0; // 0x5fc PushV
	var_171_int = 0; // 0x5fd PushI
	var_172_bool = var_164_int != var_171_int; // 0x5fe Neq
	if(var_172_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_161_float = 1; // 0x600 MovI
	return 6; // 0x601 Return
	
Label_1538:
	var_168_float = 1; // 0x602 MovI
	var_169_int = 1; // 0x603 MovI
	
Label_1540:
	var_173_bool = var_169_int <= var_163_int; // 0x604 LE
	if(var_173_bool == 0) goto Label_1555; // 0x605 JumpB
	var_174_string = "buyf"; // 0x606 PushS
	var_175_int = var_174_string + var_169_int; // 0x607 Add
	HasProperty(var_175_int, var_170_bool); // 0x608 ObjFunc
	var_176_bool = var_170_bool; // 0x60a Push
	if(var_176_bool == 0) goto Label_1552; // 0x60b JumpB
	var_177_string = "buyf"; // 0x60c PushS
	var_178_int = var_177_string + var_169_int; // 0x60d Add
	GetProperty(var_178_int, var_168_float); // 0x60e ObjFunc
	
Label_1552:
	var_179_int = 1; // 0x610 PushI
	var_169_int = var_169_int + var_179_int; // 0x611 Add2
	goto Label_1540; // 0x612 Jump
	
Label_1555:
	var_180_int = 100; // 0x613 PushI
	var_161_float = var_168_float / var_168_float; // 0x614 Div2
	return 6; // 0x615 Return
}


