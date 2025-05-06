task_0_event_101(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 267; // 0xb PushI
	var_13_bool = var_11_int == var_12_int; // 0xc Eq
	if(var_13_bool == 0) goto Label_19; // 0xd JumpB
	var_14_int = 1001; // 0xe PushI
	var_15_string = "load"; // 0xf PushS
	SendMessage(var_14_int, var_15_string); // 0x10 Func
	goto Label_26; // 0x12 Jump
	
Label_26:
	return 0; // 0x1a Return
	
Label_19:
	var_16_int = 268; // 0x13 PushI
	var_17_bool = var_11_int == var_16_int; // 0x14 Eq
	if(var_17_bool == 0) goto Label_26; // 0x15 JumpB
	var_18_int = 1000; // 0x16 PushI
	var_19_string = "load"; // 0x17 PushS
	SendMessage(var_18_int, var_19_string); // 0x18 Func
}


task_0_event_102(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 272; // 0x1c PushI
	var_13_bool = var_11_int == var_12_int; // 0x1d Eq
	if(var_13_bool == 0) goto Label_36; // 0x1e JumpB
	var_14_int = 1001; // 0x1f PushI
	var_15_string = "load"; // 0x20 PushS
	SendMessage(var_14_int, var_15_string); // 0x21 Func
	goto Label_43; // 0x23 Jump
	
Label_43:
	return 0; // 0x2b Return
	
Label_36:
	var_16_int = 274; // 0x24 PushI
	var_17_bool = var_11_int == var_16_int; // 0x25 Eq
	if(var_17_bool == 0) goto Label_43; // 0x26 JumpB
	var_18_int = 1000; // 0x27 PushI
	var_19_string = "load"; // 0x28 PushS
	SendMessage(var_18_int, var_19_string); // 0x29 Func
}


task_0_event_100(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 1; // 0x3f PushI
	SendMessageToParent(var_12_int); // 0x40 Func
	return 0; // 0x42 Return
}


task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x7d PushV
	var_12_int = 0; var_13_int = 0; // 0x7e PushV
	var_13_int = var_1_int; // 0x7f MovT
	func_134(var_12_int, var_13_int); // 0x80 NEW_2
	var_11_int = var_12_int; // 0x81 Mov
	func_137(var_9_object, var_10_object, var_11_int); // 0x83 NEW_2
	return 0; // 0x85 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_string, var_13_object)
{
	var_14_string = "scrollbar"; // 0x154 PushS
	var_15_bool = var_12_string == var_14_string; // 0x155 Eq
	if(var_15_bool == 0) goto Label_355; // 0x156 JumpB
	var_16_int = -var_11_int; // 0x157 Neg
	var_17_int = 0; // 0x158 PushV
	func_550(var_17_int); // 0x159 NEW_2
	var_21_int = var_17_int - var_5_int; // 0x15b Sub
	var_22_float = var_16_int * var_21_int; // 0x15c Mult
	var_23_int = 100; // 0x15d PushI
	var_1_int = var_22_float / var_22_float; // 0x15e Div2
	func_558(var_12_string, var_13_object); // 0x160 NEW_2
	goto Label_368; // 0x162 Jump
	
Label_368:
	return 0; // 0x170 Return
	
Label_355:
	var_42_int = 1000; // 0x163 PushI
	var_43_bool = var_11_int == var_42_int; // 0x164 Eq
	if(var_43_bool == 0) goto Label_362; // 0x165 JumpB
	func_394(var_13_object); // 0x167 NEW_2
	goto Label_368; // 0x169 Jump
	
Label_362:
	var_50_int = 1001; // 0x16a PushI
	var_51_bool = var_11_int == var_50_int; // 0x16b Eq
	if(var_51_bool == 0) goto Label_368; // 0x16c JumpB
	func_381(var_13_object); // 0x16e NEW_2
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; // 0x171 PushV
	var_16_int = 0; // 0x172 PushV
	func_548(var_16_int); // 0x173 NEW_2
	var_17_float = var_13_float * var_16_int; // 0x175 Mult
	var_18_int = 2; // 0x176 PushI
	var_15_int = var_17_float / var_17_float; // 0x177 Div2
	var_1_int = var_1_int + var_15_int; // 0x178 Add2
	func_558(var_14_int, var_15_int); // 0x17a NEW_2
	return 2; // 0x17c Return
}


task_0_event_2(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x198 PushV
	var_14_int = var_11_int; // 0x199 Mov
	var_15_int = var_12_int; // 0x19a Mov
	func_470(var_12_int, var_13_int, var_14_int, var_15_int); // 0x19b NEW_2
	var_2_int = var_13_int; // 0x19c TMov
	var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x19e PushV
	var_37_int = var_11_int; // 0x19f Mov
	var_38_int = var_12_int; // 0x1a0 Mov
	func_509(var_12_int, var_36_int, var_37_int, var_38_int); // 0x1a1 NEW_2
	var_3_int = var_36_int; // 0x1a2 TMov
	return 0; // 0x1a4 Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x1a5 PushV
	var_17_int = -1; // 0x1a6 PushI
	var_18_bool = var_2_int != var_17_int; // 0x1a7 Neq
	if(var_18_bool == 0) goto Label_442; // 0x1a8 JumpB
	var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x1a9 PushV
	var_20_int = var_11_int; // 0x1aa Mov
	var_21_int = var_12_int; // 0x1ab Mov
	func_470(var_16_object, var_19_int, var_20_int, var_21_int); // 0x1ac NEW_2
	var_2_int = var_19_int; // 0x1ad TMov
	var_42_int = -1; // 0x1af PushI
	var_43_bool = var_2_int != var_42_int; // 0x1b0 Neq
	if(var_43_bool == 0) goto Label_441; // 0x1b1 JumpB
	get(var_15_object, var_15_object); // 0x1b2 TObjFunc
	var_44_object = Obj(); // 0x1b4 PushV
	var_44_object = var_15_object; // 0x1b5 Mov
	func_49(var_44_object); // 0x1b6 NEW_2
	var_15_object = 0; // 0x1b8 SetNull
	
Label_441:
	goto Label_469; // 0x1b9 Jump
	
Label_469:
	return 4; // 0x1d5 Return
	
Label_442:
	var_46_bool = 0; // 0x1ba PushV
	var_46_bool = 0; // 0x1bb MovB
	var_47_bool = var_0_bool; // 0x1bc PushT
	if(var_47_bool == 0) goto Label_450; // 0x1bd JumpB
	var_48_int = -1; // 0x1be PushI
	var_49_bool = var_3_int != var_48_int; // 0x1bf Neq
	if(var_49_bool == 0) goto Label_450; // 0x1c0 JumpB
	var_46_bool = 1; // 0x1c1 MovB
	
Label_450:
	if(var_46_bool == 0) goto Label_469; // 0x1c2 JumpB
	var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x1c3 PushV
	var_51_int = var_11_int; // 0x1c4 Mov
	var_52_int = var_12_int; // 0x1c5 Mov
	func_509(var_16_object, var_50_int, var_51_int, var_52_int); // 0x1c6 NEW_2
	var_3_int = var_50_int; // 0x1c7 TMov
	var_73_int = -1; // 0x1c9 PushI
	var_74_bool = var_3_int != var_73_int; // 0x1ca Neq
	if(var_74_bool == 0) goto Label_469; // 0x1cb JumpB
	get(var_16_object, var_14_object); // 0x1cc TObjFunc
	var_75_object = var_16_object; // 0x1ce Push
	if(var_75_object == 0) goto Label_468; // 0x1cf JumpB
	var_76_object = Obj(); // 0x1d0 PushV
	var_76_object = var_16_object; // 0x1d1 Mov
	func_54(); // 0x1d2 NEW_2
	
Label_468:
	var_16_object = 0; // 0x1d4 SetNull
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	CaptureKeyboard(); // 0x0 Func
	
Label_2:
	var_11_bool = 1; // 0x2 PushB
	if(var_11_bool == 0) goto Label_9; // 0x3 JumpB
	var_12_bool = 0; // 0x4 PushV
	var_12_bool = 0; // 0x5 MovB
	func_67(var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool); // 0x6 NEW_2
	goto Label_2; // 0x8 Jump
	
Label_9:
	return 0; // 0x9 Return
}


func_509(var_1_int, var_50_int, var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x1fd PushV
	var_61_int = 248; // 0x1fe PushI
	var_62_bool = var_51_int < var_61_int; // 0x1ff LT
	if(var_62_bool == 0) goto Label_515; // 0x200 JumpB
	var_50_int = -1; // 0x201 MovI
	return 8; // 0x202 Return
	
Label_515:
	var_63_int = 268; // 0x203 PushI
	var_64_bool = var_51_int > var_63_int; // 0x204 GT
	if(var_64_bool == 0) goto Label_520; // 0x205 JumpB
	var_50_int = -1; // 0x206 MovI
	return 8; // 0x207 Return
	
Label_520:
	var_57_int = var_52_int - var_1_int; // 0x208 Sub2
	var_65_int = 0; // 0x209 PushV
	func_548(var_65_int); // 0x20a NEW_2
	var_58_int = var_65_int; // 0x20b Mov
	var_59_int = var_57_int / var_57_int; // 0x20d Div2
	var_66_float = var_59_int * var_58_int; // 0x20e Mult
	var_57_int = var_57_int - var_66_float; // 0x20f Sub2
	size(var_60_int); // 0x210 TObjFunc
	var_67_bool = var_60_int <= var_59_int; // 0x212 LE
	if(var_67_bool == 0) goto Label_534; // 0x213 JumpB
	var_50_int = -1; // 0x214 MovI
	return 8; // 0x215 Return
	
Label_534:
	var_68_bool = 0; // 0x216 PushV
	var_68_bool = 0; // 0x217 MovB
	var_69_int = 68; // 0x218 PushI
	var_70_bool = var_57_int >= var_69_int; // 0x219 GE
	if(var_70_bool == 0) goto Label_543; // 0x21a JumpB
	var_71_int = 91; // 0x21b PushI
	var_72_bool = var_57_int <= var_71_int; // 0x21c LE
	if(var_72_bool == 0) goto Label_543; // 0x21d JumpB
	var_68_bool = 1; // 0x21e MovB
	
Label_543:
	if(var_68_bool == 0) goto Label_546; // 0x21f JumpB
	var_50_int = var_59_int; // 0x220 Mov
	return 8; // 0x221 Return
	
Label_546:
	var_50_int = -1; // 0x222 MovI
	return 8; // 0x223 Return
}


func_67(var_0_bool, var_1_int, var_2_int, var_3_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x43 PushV
	var_2_int = -1; // 0x44 TMovI
	var_3_int = -1; // 0x45 TMovI
	var_0_bool = var_12_bool; // 0x46 TMov
	CreateSaveEnumerator(var_10_object); // 0x47 Func
	var_19_bool = var_8_object == 0; // 0x49 Not
	if(var_19_bool == 0) goto Label_76; // 0x4a JumpB
	return 6; // 0x4b Return
	
Label_76:
	CreateObjectVector(var_9_object); // 0x4c Func
	var_20_bool = var_12_bool; // 0x4e Push
	if(var_20_bool == 0) goto Label_84; // 0x4f JumpB
	var_16_object = 0; // 0x50 SetNull
	add(var_16_object); // 0x51 TObjFunc
	var_16_object = 0; // 0x53 SetNull
	
Label_84:
	var_21_int = 1; // 0x54 PushI
	if(var_21_int == 0) goto Label_102; // 0x55 JumpB
	Next(var_17_object); // 0x56 TObjFunc
	var_22_bool = var_17_object == 0; // 0x58 Not
	if(var_22_bool == 0) goto Label_91; // 0x59 JumpB
	goto Label_102; // 0x5a Jump
	
Label_102:
	GetWindowSize(var_15_bool, var_14_object); // 0x66 Func
	var_6_int = 0; // 0x68 TMovI
	var_7_int = 0; // 0x69 TMovI
	ClientToScreen(var_13_object, var_12_bool); // 0x6a Func
	var_1_int = 0; // 0x6c TMovI
	var_23_bool = 1; // 0x6d PushB
	EnableClipping(var_23_bool); // 0x6e Func
	var_24_bool = 1; // 0x70 PushB
	SetOwnerDraw(var_24_bool); // 0x71 Func
	var_25_string = "sys_border.xml"; // 0x73 PushS
	var_26_bool = 0; // 0x74 PushB
	CreateWindow(var_25_string, var_26_bool, var_10_object); // 0x75 Func
	func_558(var_17_object, var_18_bool); // 0x78 NEW_2
	ProcessEvents(); // 0x7a Func
	return 6; // 0x7c Return
	
Label_91:
	var_48_bool = var_12_bool; // 0x5b Push
	if(var_48_bool == 0) goto Label_98; // 0x5c JumpB
	IsQuickSave(var_18_bool); // 0x5d ObjFunc
	var_49_bool = var_18_bool; // 0x5f Push
	if(var_49_bool == 0) goto Label_98; // 0x60 JumpB
	goto Label_84; // 0x61 Jump
	
Label_98:
	add(var_17_object); // 0x62 TObjFunc
	var_17_object = 0; // 0x64 SetNull
	goto Label_84; // 0x65 Jump
}


func_548(var_32_int)
{
	var_32_int = 121; // 0x224 MovI
	return 0; // 0x225 Return
}


func_134(var_12_int, var_13_int)
{
	var_12_int = var_13_int; // 0x87 Mov
	return 0; // 0x88 Return
}


func_550(var_29_int)
{
	var_30_int = 0; var_31_int = 0; // 0x226 PushV
	size(var_31_int); // 0x227 TObjFunc
	var_32_int = 0; // 0x229 PushV
	func_548(var_32_int); // 0x22a NEW_2
	var_29_int = var_31_int * var_32_int; // 0x22c Mult2
	return 2; // 0x22d Return
}


func_137(var_2_int, var_3_int, var_11_int)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; // 0x89 PushV
	size(var_24_int); // 0x8a TObjFunc
	var_25_int = 0; // 0x8c MovI
	
Label_141:
	var_34_bool = var_25_int < var_24_int; // 0x8d LT
	if(var_34_bool == 0) goto Label_301; // 0x8e JumpB
	get(var_26_object, var_25_int); // 0x8f TObjFunc
	var_27_int = 0; // 0x91 MovI
	var_28_int = var_11_int; // 0x92 Mov
	ClientToScreen(var_27_int, var_28_int); // 0x93 Func
	var_35_object = var_26_object; // 0x95 Push
	if(var_35_object == 0) goto Label_245; // 0x96 JumpB
	BlitClipped(var_27_int, var_28_int, var_28_int, var_27_int, var_30_string, var_29_bool); // 0x97 ObjFunc
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x99 PushV
	var_36_int = 0; // 0x9a MovI
	var_37_int = var_11_int; // 0x9b Mov
	var_38_bool = 0; // 0x9c MovB
	func_302(var_36_int, var_37_int, var_38_bool); // 0x9d NEW_2
	IsQuickSave(var_29_bool); // 0x9f ObjFunc
	var_63_bool = var_29_bool; // 0xa1 Push
	if(var_63_bool == 0) goto Label_177; // 0xa2 JumpB
	var_64_string = "default"; // 0xa3 PushS
	var_65_int = 129; // 0xa4 PushI
	var_66_int = 7; // 0xa5 PushI
	var_67_int = var_66_int + var_11_int; // 0xa6 Add
	var_68_string = ""; var_69_int = 0; // 0xa7 PushV
	var_69_int = 17; // 0xa8 MovI
	func_592(var_68_string, var_69_int); // 0xa9 NEW_2
	var_72_float = 0.55686; // 0xab PushF
	var_73_float = 0.55686; // 0xac PushF
	var_74_float = 0.55686; // 0xad PushF
	Print(var_64_string, var_65_int, var_67_int, var_68_string, var_72_float, var_73_float, var_74_float); // 0xae Func
	goto Label_199; // 0xb0 Jump
	
Label_199:
	var_75_string = ""; var_76_object = Obj(); // 0xc7 PushV
	var_76_object = var_26_object; // 0xc8 Mov
	func_597(var_76_object); // 0xc9 NEW_2
	var_33_string = var_75_string; // 0xca Mov
	var_99_string = "big"; // 0xcc PushS
	var_100_int = 129; // 0xcd PushI
	var_101_int = 28; // 0xce PushI
	var_102_int = var_101_int + var_11_int; // 0xcf Add
	var_103_float = 1.0; // 0xd0 PushF
	var_104_float = 1.0; // 0xd1 PushF
	var_105_float = 1.0; // 0xd2 PushF
	Print(var_99_string, var_100_int, var_102_int, var_33_string, var_103_float, var_104_float, var_105_float); // 0xd3 Func
	var_106_string = ""; var_107_object = Obj(); // 0xd5 PushV
	var_107_object = var_26_object; // 0xd6 Mov
	func_621(var_107_object); // 0xd7 NEW_2
	var_33_string = var_106_string; // 0xd8 Mov
	var_125_string = "default"; // 0xda PushS
	var_126_int = 129; // 0xdb PushI
	var_127_int = 47; // 0xdc PushI
	var_128_int = var_127_int + var_11_int; // 0xdd Add
	var_129_float = 0.55686; // 0xde PushF
	var_130_float = 0.55686; // 0xdf PushF
	var_131_float = 0.55686; // 0xe0 PushF
	Print(var_125_string, var_126_int, var_128_int, var_33_string, var_129_float, var_130_float, var_131_float); // 0xe1 Func
	var_132_bool = var_0_bool; // 0xe3 PushT
	if(var_132_bool == 0) goto Label_244; // 0xe4 JumpB
	var_133_bool = var_3_int == var_25_int; // 0xe5 Eq
	if(var_133_bool == 0) goto Label_238; // 0xe6 JumpB
	var_134_string = "button_x_pressed"; // 0xe7 PushS
	var_135_int = 248; // 0xe8 PushI
	var_136_int = 68; // 0xe9 PushI
	var_137_int = var_136_int + var_11_int; // 0xea Add
	Blit(var_134_string, var_135_int, var_137_int); // 0xeb Func
	goto Label_244; // 0xed Jump
	
Label_244:
	goto Label_264; // 0xf4 Jump
	
Label_264:
	var_138_bool = var_2_int == var_25_int; // 0x108 Eq
	if(var_138_bool == 0) goto Label_273; // 0x109 JumpB
	var_139_string = "button_pressed"; // 0x10a PushS
	var_140_int = 129; // 0x10b PushI
	var_141_int = 67; // 0x10c PushI
	var_142_int = var_141_int + var_11_int; // 0x10d Add
	Blit(var_139_string, var_140_int, var_142_int); // 0x10e Func
	goto Label_279; // 0x110 Jump
	
Label_279:
	var_143_object = Obj(); var_144_int = 0; var_145_int = 0; // 0x117 PushV
	var_143_object = var_26_object; // 0x118 Mov
	var_144_int = 129; // 0x119 MovI
	var_146_int = 67; // 0x11a PushI
	var_145_int = var_146_int + var_11_int; // 0x11b Add2
	func_44(var_144_int, var_145_int); // 0x11c NEW_2
	var_148_int = 90; // 0x11e PushI
	var_11_int = var_11_int + var_148_int; // 0x11f Add2
	var_149_string = "separator"; // 0x120 PushS
	var_150_int = 0; // 0x121 PushI
	var_151_int = 15; // 0x122 PushI
	var_152_int = var_11_int + var_151_int; // 0x123 Add
	var_153_int = 1; // 0x124 PushI
	StretchBlit(var_149_string, var_150_int, var_152_int, var_149_string, var_153_int); // 0x125 Func
	var_154_int = 31; // 0x127 PushI
	var_11_int = var_11_int + var_154_int; // 0x128 Add2
	var_26_object = 0; // 0x129 SetNull
	var_155_int = 1; // 0x12a PushI
	var_25_int = var_25_int + var_155_int; // 0x12b Add2
	goto Label_141; // 0x12c Jump
	
Label_273:
	var_156_string = "button"; // 0x111 PushS
	var_157_int = 129; // 0x112 PushI
	var_158_int = 67; // 0x113 PushI
	var_159_int = var_158_int + var_11_int; // 0x114 Add
	Blit(var_156_string, var_157_int, var_159_int); // 0x115 Func
	
Label_238:
	var_160_string = "button_x"; // 0xee PushS
	var_161_int = 248; // 0xef PushI
	var_162_int = 68; // 0xf0 PushI
	var_163_int = var_162_int + var_11_int; // 0xf1 Add
	Blit(var_160_string, var_161_int, var_163_int); // 0xf2 Func
	
Label_177:
	var_164_int = 0; // 0xb1 PushI
	GetProperty(var_164_int, var_31_bool, var_32_int); // 0xb2 ObjFunc
	var_165_bool = var_31_bool; // 0xb4 Push
	if(var_165_bool == 0) goto Label_189; // 0xb5 JumpB
	var_166_string = ""; var_167_int = 0; // 0xb6 PushV
	var_168_int = 500; // 0xb7 PushI
	var_167_int = var_168_int + var_32_int; // 0xb8 Add2
	func_592(var_166_string, var_167_int); // 0xb9 NEW_2
	var_30_string = var_166_string; // 0xba Mov
	goto Label_190; // 0xbc Jump
	
Label_190:
	var_169_string = "default"; // 0xbe PushS
	var_170_int = 129; // 0xbf PushI
	var_171_int = 7; // 0xc0 PushI
	var_172_int = var_171_int + var_11_int; // 0xc1 Add
	var_173_float = 0.55686; // 0xc2 PushF
	var_174_float = 0.55686; // 0xc3 PushF
	var_175_float = 0.55686; // 0xc4 PushF
	Print(var_169_string, var_170_int, var_172_int, var_30_string, var_173_float, var_174_float, var_175_float); // 0xc5 Func
	
Label_189:
	var_30_string = "????"; // 0xbd MovS
	
Label_245:
	var_176_int = 0; var_177_int = 0; var_178_bool = 0; // 0xf5 PushV
	var_176_int = 0; // 0xf6 MovI
	var_177_int = var_11_int; // 0xf7 Mov
	var_178_bool = 1; // 0xf8 MovB
	func_302(var_176_int, var_177_int, var_178_bool); // 0xf9 NEW_2
	var_179_string = "default"; // 0xfb PushS
	var_180_int = 129; // 0xfc PushI
	var_181_int = 47; // 0xfd PushI
	var_182_int = var_181_int + var_11_int; // 0xfe Add
	var_183_string = ""; var_184_int = 0; // 0xff PushV
	var_184_int = 32; // 0x100 MovI
	func_592(var_183_string, var_184_int); // 0x101 NEW_2
	var_185_float = 0.55686; // 0x103 PushF
	var_186_float = 0.55686; // 0x104 PushF
	var_187_float = 0.55686; // 0x105 PushF
	Print(var_179_string, var_180_int, var_182_int, var_183_string, var_185_float, var_186_float, var_187_float); // 0x106 Func
	
Label_301:
	return 20; // 0x12d Return
}


func_394(var_1_int)
{
	var_44_int = 0; var_45_int = 0; // 0x18a PushV
	var_46_int = -2; // 0x18b PushI
	var_47_int = 0; // 0x18c PushV
	func_548(var_47_int); // 0x18d NEW_2
	var_48_float = var_46_int * var_47_int; // 0x18f Mult
	var_49_int = 2; // 0x190 PushI
	var_45_int = var_48_float / var_48_float; // 0x191 Div2
	var_1_int = var_1_int + var_45_int; // 0x192 Add2
	func_558(var_44_int, var_45_int); // 0x194 NEW_2
	return 2; // 0x196 Return
}


func_44(var_144_int, var_145_int)
{
	var_147_string = "button_text"; // 0x2d PushS
	Blit(var_147_string, var_144_int, var_145_int); // 0x2e Func
	return 0; // 0x30 Return
}


func_621(var_106_string)
{
	var_108_string = ""; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; // 0x26d PushV
	GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int); // 0x26e ObjFunc
	var_120_string = ""; var_121_int = 0; // 0x270 PushV
	var_121_int = 19; // 0x271 MovI
	func_592(var_120_string, var_121_int); // 0x272 NEW_2
	var_122_string = ""; var_123_int = 0; // 0x274 PushV
	var_124_int = 20; // 0x275 PushI
	var_123_int = var_124_int + var_119_int; // 0x276 Add2
	func_592(var_122_string, var_123_int); // 0x277 NEW_2
	format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int); // 0x279 Func
	var_106_string = var_114_string; // 0x27b Mov
	return 12; // 0x27c Return
}


func_558(var_1_int, var_5_int)
{
	var_27_int = 0; var_28_int = 0; // 0x22e PushV
	var_29_int = 0; // 0x22f PushV
	func_550(var_29_int); // 0x230 NEW_2
	var_28_int = var_29_int - var_5_int; // 0x232 Sub2
	var_33_int = 0; // 0x233 PushI
	var_34_bool = var_28_int < var_33_int; // 0x234 LT
	if(var_34_bool == 0) goto Label_567; // 0x235 JumpB
	var_28_int = 0; // 0x236 MovI
	
Label_567:
	var_35_int = -var_1_int; // 0x237 Neg
	var_36_bool = var_35_int > var_28_int; // 0x238 GT
	if(var_36_bool == 0) goto Label_572; // 0x239 JumpB
	var_1_int = -var_28_int; // 0x23a Neg2
	goto Label_576; // 0x23b Jump
	
Label_576:
	var_37_int = 0; // 0x240 PushI
	var_38_bool = var_28_int == var_37_int; // 0x241 Eq
	if(var_38_bool == 0) goto Label_584; // 0x242 JumpB
	var_39_int = 16384; // 0x243 PushI
	var_40_string = "scrollbar"; // 0x244 PushS
	SendMessage(var_39_int, var_40_string); // 0x245 Func
	goto Label_591; // 0x247 Jump
	
Label_591:
	return 2; // 0x24f Return
	
Label_584:
	var_41_int = -var_1_int; // 0x248 Neg
	var_42_int = 100; // 0x249 PushI
	var_43_float = var_41_int * var_42_int; // 0x24a Mult
	var_44_float = var_43_float / var_28_int; // 0x24b Div
	var_45_string = "scrollbar"; // 0x24c PushS
	SendMessage(var_44_float, var_45_string); // 0x24d Func
	
Label_572:
	var_46_int = 0; // 0x23c PushI
	var_47_bool = var_1_int > var_46_int; // 0x23d GT
	if(var_47_bool == 0) goto Label_576; // 0x23e JumpB
	var_1_int = 0; // 0x23f TMovI
}


func_302(var_36_int, var_37_int, var_38_bool)
{
	var_39_bool = var_38_bool; // 0x12f Push
	if(var_39_bool == 0) goto Label_310; // 0x130 JumpB
	var_40_string = "shot_black"; // 0x131 PushS
	var_41_int = 120; // 0x132 PushI
	var_42_int = 90; // 0x133 PushI
	StretchBlit(var_40_string, var_36_int, var_37_int, var_41_int, var_42_int); // 0x134 Func
	
Label_310:
	var_43_string = "shot_border"; // 0x136 PushS
	var_44_int = 120; // 0x137 PushI
	var_45_int = 1; // 0x138 PushI
	StretchBlit(var_43_string, var_36_int, var_37_int, var_44_int, var_45_int); // 0x139 Func
	var_46_string = "shot_border"; // 0x13b PushS
	var_47_int = 90; // 0x13c PushI
	var_48_int = var_37_int + var_47_int; // 0x13d Add
	var_49_int = 1; // 0x13e PushI
	var_50_int = var_48_int - var_49_int; // 0x13f Sub
	var_51_int = 120; // 0x140 PushI
	var_52_int = 1; // 0x141 PushI
	StretchBlit(var_46_string, var_36_int, var_50_int, var_51_int, var_52_int); // 0x142 Func
	var_53_string = "shot_border"; // 0x144 PushS
	var_54_int = 1; // 0x145 PushI
	var_55_int = 90; // 0x146 PushI
	StretchBlit(var_53_string, var_36_int, var_37_int, var_54_int, var_55_int); // 0x147 Func
	var_56_string = "shot_border"; // 0x149 PushS
	var_57_int = 120; // 0x14a PushI
	var_58_int = var_36_int + var_57_int; // 0x14b Add
	var_59_int = 1; // 0x14c PushI
	var_60_int = var_58_int - var_59_int; // 0x14d Sub
	var_61_int = 1; // 0x14e PushI
	var_62_int = 90; // 0x14f PushI
	StretchBlit(var_56_string, var_60_int, var_37_int, var_61_int, var_62_int); // 0x150 Func
	return 0; // 0x152 Return
}


func_592(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x250 PushV
	GetStringByID(var_71_string, var_69_int); // 0x251 Func
	var_68_string = var_71_string; // 0x253 Mov
	return 2; // 0x254 Return
}


func_49(var_44_object)
{
	var_45_int = 0; // 0x32 PushI
	SendMessageToParent(var_45_int, var_44_object); // 0x33 Func
	return 0; // 0x35 Return
}


func_597(var_75_string)
{
	var_77_string = ""; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_string = ""; var_83_float = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x255 PushV
	GetGameTime(var_83_float); // 0x256 ObjFunc
	var_87_int = 24; // 0x258 PushI
	var_84_int = var_83_float / var_83_float; // 0x259 Div2
	var_88_int = 24; // 0x25a PushI
	var_89_float = var_84_int * var_88_int; // 0x25b Mult
	var_85_int = var_83_float - var_89_float; // 0x25c Sub2
	var_90_int = 24; // 0x25d PushI
	var_91_float = var_84_int * var_90_int; // 0x25e Mult
	var_92_int = var_83_float - var_91_float; // 0x25f Sub
	var_93_int = var_92_int - var_85_int; // 0x260 Sub
	var_94_int = 60; // 0x261 PushI
	var_86_int = var_93_int * var_94_int; // 0x262 Mult2
	var_95_string = ""; var_96_int = 0; // 0x263 PushV
	var_96_int = 18; // 0x264 MovI
	func_592(var_95_string, var_96_int); // 0x265 NEW_2
	var_97_int = 1; // 0x267 PushI
	var_98_int = var_84_int + var_97_int; // 0x268 Add
	format(var_82_string, var_95_string, var_98_int, var_85_int, var_86_int); // 0x269 Func
	var_75_string = var_82_string; // 0x26b Mov
	return 10; // 0x26c Return
}


func_470(var_1_int, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x1d6 PushV
	var_30_int = 129; // 0x1d7 PushI
	var_31_bool = var_20_int < var_30_int; // 0x1d8 LT
	if(var_31_bool == 0) goto Label_476; // 0x1d9 JumpB
	var_19_int = -1; // 0x1da MovI
	return 8; // 0x1db Return
	
Label_476:
	var_32_int = 233; // 0x1dc PushI
	var_33_bool = var_20_int > var_32_int; // 0x1dd GT
	if(var_33_bool == 0) goto Label_481; // 0x1de JumpB
	var_19_int = -1; // 0x1df MovI
	return 8; // 0x1e0 Return
	
Label_481:
	var_26_int = var_21_int - var_1_int; // 0x1e1 Sub2
	var_34_int = 0; // 0x1e2 PushV
	func_548(var_34_int); // 0x1e3 NEW_2
	var_27_int = var_34_int; // 0x1e4 Mov
	var_28_int = var_26_int / var_26_int; // 0x1e6 Div2
	var_35_float = var_28_int * var_27_int; // 0x1e7 Mult
	var_26_int = var_26_int - var_35_float; // 0x1e8 Sub2
	size(var_29_int); // 0x1e9 TObjFunc
	var_36_bool = var_29_int <= var_28_int; // 0x1eb LE
	if(var_36_bool == 0) goto Label_495; // 0x1ec JumpB
	var_19_int = -1; // 0x1ed MovI
	return 8; // 0x1ee Return
	
Label_495:
	var_37_bool = 0; // 0x1ef PushV
	var_37_bool = 0; // 0x1f0 MovB
	var_38_int = 67; // 0x1f1 PushI
	var_39_bool = var_26_int >= var_38_int; // 0x1f2 GE
	if(var_39_bool == 0) goto Label_504; // 0x1f3 JumpB
	var_40_int = 91; // 0x1f4 PushI
	var_41_bool = var_26_int <= var_40_int; // 0x1f5 LE
	if(var_41_bool == 0) goto Label_504; // 0x1f6 JumpB
	var_37_bool = 1; // 0x1f7 MovB
	
Label_504:
	if(var_37_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_19_int = var_28_int; // 0x1f9 Mov
	return 8; // 0x1fa Return
	
Label_507:
	var_19_int = -1; // 0x1fb MovI
	return 8; // 0x1fc Return
}


func_54()
{
	var_77_string = ""; var_78_string = ""; // 0x36 PushV
	GetFileName(var_78_string); // 0x37 ObjFunc
	DeleteGame(var_78_string); // 0x39 Func
	StopEventProcessing(); // 0x3b Func
	return 2; // 0x3d Return
}


func_381(var_1_int)
{
	var_52_int = 0; var_53_int = 0; // 0x17d PushV
	var_54_int = 2; // 0x17e PushI
	var_55_int = 0; // 0x17f PushV
	func_548(var_55_int); // 0x180 NEW_2
	var_56_float = var_54_int * var_55_int; // 0x182 Mult
	var_57_int = 2; // 0x183 PushI
	var_53_int = var_56_float / var_56_float; // 0x184 Div2
	var_1_int = var_1_int + var_53_int; // 0x185 Add2
	func_558(var_52_int, var_53_int); // 0x187 NEW_2
	return 2; // 0x189 Return
}


