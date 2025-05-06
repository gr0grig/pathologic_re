task_0_event_101(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 267; // 0xb PushI
	var_13_bool = var_11_int == var_12_int; // 0xc Eq
	if(var_13_bool == 0) goto Label_19; // 0xd JumpB
	var_14_int = 1001; // 0xe PushI
	var_15_string = "save"; // 0xf PushS
	SendMessage(var_14_int, var_15_string); // 0x10 Func
	goto Label_26; // 0x12 Jump
	
Label_26:
	return 0; // 0x1a Return
	
Label_19:
	var_16_int = 268; // 0x13 PushI
	var_17_bool = var_11_int == var_16_int; // 0x14 Eq
	if(var_17_bool == 0) goto Label_26; // 0x15 JumpB
	var_18_int = 1000; // 0x16 PushI
	var_19_string = "save"; // 0x17 PushS
	SendMessage(var_18_int, var_19_string); // 0x18 Func
}


task_0_event_102(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 272; // 0x1c PushI
	var_13_bool = var_11_int == var_12_int; // 0x1d Eq
	if(var_13_bool == 0) goto Label_36; // 0x1e JumpB
	var_14_int = 1001; // 0x1f PushI
	var_15_string = "save"; // 0x20 PushS
	SendMessage(var_14_int, var_15_string); // 0x21 Func
	goto Label_43; // 0x23 Jump
	
Label_43:
	return 0; // 0x2b Return
	
Label_36:
	var_16_int = 274; // 0x24 PushI
	var_17_bool = var_11_int == var_16_int; // 0x25 Eq
	if(var_17_bool == 0) goto Label_43; // 0x26 JumpB
	var_18_int = 1000; // 0x27 PushI
	var_19_string = "save"; // 0x28 PushS
	SendMessage(var_18_int, var_19_string); // 0x29 Func
}


task_0_event_100(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int)
{
	var_12_int = 1; // 0x45 PushI
	SendMessageToParent(var_12_int); // 0x46 Func
	return 0; // 0x48 Return
}


task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x83 PushV
	var_12_int = 0; var_13_int = 0; // 0x84 PushV
	var_13_int = var_1_int; // 0x85 MovT
	func_140(var_12_int, var_13_int); // 0x86 NEW_2
	var_11_int = var_12_int; // 0x87 Mov
	func_143(var_9_object, var_10_object, var_11_int); // 0x89 NEW_2
	return 0; // 0x8b Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_string, var_13_object)
{
	var_14_string = "scrollbar"; // 0x15a PushS
	var_15_bool = var_12_string == var_14_string; // 0x15b Eq
	if(var_15_bool == 0) goto Label_361; // 0x15c JumpB
	var_16_int = -var_11_int; // 0x15d Neg
	var_17_int = 0; // 0x15e PushV
	func_556(var_17_int); // 0x15f NEW_2
	var_21_int = var_17_int - var_5_int; // 0x161 Sub
	var_22_float = var_16_int * var_21_int; // 0x162 Mult
	var_23_int = 100; // 0x163 PushI
	var_1_int = var_22_float / var_22_float; // 0x164 Div2
	func_564(var_12_string, var_13_object); // 0x166 NEW_2
	goto Label_374; // 0x168 Jump
	
Label_374:
	return 0; // 0x176 Return
	
Label_361:
	var_42_int = 1000; // 0x169 PushI
	var_43_bool = var_11_int == var_42_int; // 0x16a Eq
	if(var_43_bool == 0) goto Label_368; // 0x16b JumpB
	func_400(var_13_object); // 0x16d NEW_2
	goto Label_374; // 0x16f Jump
	
Label_368:
	var_50_int = 1001; // 0x170 PushI
	var_51_bool = var_11_int == var_50_int; // 0x171 Eq
	if(var_51_bool == 0) goto Label_374; // 0x172 JumpB
	func_387(var_13_object); // 0x174 NEW_2
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; // 0x177 PushV
	var_16_int = 0; // 0x178 PushV
	func_554(var_16_int); // 0x179 NEW_2
	var_17_float = var_13_float * var_16_int; // 0x17b Mult
	var_18_int = 2; // 0x17c PushI
	var_15_int = var_17_float / var_17_float; // 0x17d Div2
	var_1_int = var_1_int + var_15_int; // 0x17e Add2
	func_564(var_14_int, var_15_int); // 0x180 NEW_2
	return 2; // 0x182 Return
}


task_0_event_2(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x19e PushV
	var_14_int = var_11_int; // 0x19f Mov
	var_15_int = var_12_int; // 0x1a0 Mov
	func_476(var_12_int, var_13_int, var_14_int, var_15_int); // 0x1a1 NEW_2
	var_2_int = var_13_int; // 0x1a2 TMov
	var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x1a4 PushV
	var_37_int = var_11_int; // 0x1a5 Mov
	var_38_int = var_12_int; // 0x1a6 Mov
	func_515(var_12_int, var_36_int, var_37_int, var_38_int); // 0x1a7 NEW_2
	var_3_int = var_36_int; // 0x1a8 TMov
	return 0; // 0x1aa Return
}


task_0_event_3(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x1ab PushV
	var_17_int = -1; // 0x1ac PushI
	var_18_bool = var_2_int != var_17_int; // 0x1ad Neq
	if(var_18_bool == 0) goto Label_448; // 0x1ae JumpB
	var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x1af PushV
	var_20_int = var_11_int; // 0x1b0 Mov
	var_21_int = var_12_int; // 0x1b1 Mov
	func_476(var_16_object, var_19_int, var_20_int, var_21_int); // 0x1b2 NEW_2
	var_2_int = var_19_int; // 0x1b3 TMov
	var_42_int = -1; // 0x1b5 PushI
	var_43_bool = var_2_int != var_42_int; // 0x1b6 Neq
	if(var_43_bool == 0) goto Label_447; // 0x1b7 JumpB
	get(var_15_object, var_15_object); // 0x1b8 TObjFunc
	var_44_object = Obj(); // 0x1ba PushV
	var_44_object = var_15_object; // 0x1bb Mov
	func_55(var_44_object); // 0x1bc NEW_2
	var_15_object = 0; // 0x1be SetNull
	
Label_447:
	goto Label_475; // 0x1bf Jump
	
Label_475:
	return 4; // 0x1db Return
	
Label_448:
	var_46_bool = 0; // 0x1c0 PushV
	var_46_bool = 0; // 0x1c1 MovB
	var_47_bool = var_0_bool; // 0x1c2 PushT
	if(var_47_bool == 0) goto Label_456; // 0x1c3 JumpB
	var_48_int = -1; // 0x1c4 PushI
	var_49_bool = var_3_int != var_48_int; // 0x1c5 Neq
	if(var_49_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_46_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_46_bool == 0) goto Label_475; // 0x1c8 JumpB
	var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x1c9 PushV
	var_51_int = var_11_int; // 0x1ca Mov
	var_52_int = var_12_int; // 0x1cb Mov
	func_515(var_16_object, var_50_int, var_51_int, var_52_int); // 0x1cc NEW_2
	var_3_int = var_50_int; // 0x1cd TMov
	var_73_int = -1; // 0x1cf PushI
	var_74_bool = var_3_int != var_73_int; // 0x1d0 Neq
	if(var_74_bool == 0) goto Label_475; // 0x1d1 JumpB
	get(var_16_object, var_14_object); // 0x1d2 TObjFunc
	var_75_object = var_16_object; // 0x1d4 Push
	if(var_75_object == 0) goto Label_474; // 0x1d5 JumpB
	var_76_object = Obj(); // 0x1d6 PushV
	var_76_object = var_16_object; // 0x1d7 Mov
	func_60(); // 0x1d8 NEW_2
	
Label_474:
	var_16_object = 0; // 0x1da SetNull
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object)
{
	CaptureKeyboard(); // 0x0 Func
	
Label_2:
	var_11_bool = 1; // 0x2 PushB
	if(var_11_bool == 0) goto Label_9; // 0x3 JumpB
	var_12_bool = 0; // 0x4 PushV
	var_12_bool = 1; // 0x5 MovB
	func_73(var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool); // 0x6 NEW_2
	goto Label_2; // 0x8 Jump
	
Label_9:
	return 0; // 0x9 Return
}


func_515(var_1_int, var_50_int, var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x203 PushV
	var_61_int = 248; // 0x204 PushI
	var_62_bool = var_51_int < var_61_int; // 0x205 LT
	if(var_62_bool == 0) goto Label_521; // 0x206 JumpB
	var_50_int = -1; // 0x207 MovI
	return 8; // 0x208 Return
	
Label_521:
	var_63_int = 268; // 0x209 PushI
	var_64_bool = var_51_int > var_63_int; // 0x20a GT
	if(var_64_bool == 0) goto Label_526; // 0x20b JumpB
	var_50_int = -1; // 0x20c MovI
	return 8; // 0x20d Return
	
Label_526:
	var_57_int = var_52_int - var_1_int; // 0x20e Sub2
	var_65_int = 0; // 0x20f PushV
	func_554(var_65_int); // 0x210 NEW_2
	var_58_int = var_65_int; // 0x211 Mov
	var_59_int = var_57_int / var_57_int; // 0x213 Div2
	var_66_float = var_59_int * var_58_int; // 0x214 Mult
	var_57_int = var_57_int - var_66_float; // 0x215 Sub2
	size(var_60_int); // 0x216 TObjFunc
	var_67_bool = var_60_int <= var_59_int; // 0x218 LE
	if(var_67_bool == 0) goto Label_540; // 0x219 JumpB
	var_50_int = -1; // 0x21a MovI
	return 8; // 0x21b Return
	
Label_540:
	var_68_bool = 0; // 0x21c PushV
	var_68_bool = 0; // 0x21d MovB
	var_69_int = 68; // 0x21e PushI
	var_70_bool = var_57_int >= var_69_int; // 0x21f GE
	if(var_70_bool == 0) goto Label_549; // 0x220 JumpB
	var_71_int = 91; // 0x221 PushI
	var_72_bool = var_57_int <= var_71_int; // 0x222 LE
	if(var_72_bool == 0) goto Label_549; // 0x223 JumpB
	var_68_bool = 1; // 0x224 MovB
	
Label_549:
	if(var_68_bool == 0) goto Label_552; // 0x225 JumpB
	var_50_int = var_59_int; // 0x226 Mov
	return 8; // 0x227 Return
	
Label_552:
	var_50_int = -1; // 0x228 MovI
	return 8; // 0x229 Return
}


func_387(var_1_int)
{
	var_52_int = 0; var_53_int = 0; // 0x183 PushV
	var_54_int = 2; // 0x184 PushI
	var_55_int = 0; // 0x185 PushV
	func_554(var_55_int); // 0x186 NEW_2
	var_56_float = var_54_int * var_55_int; // 0x188 Mult
	var_57_int = 2; // 0x189 PushI
	var_53_int = var_56_float / var_56_float; // 0x18a Div2
	var_1_int = var_1_int + var_53_int; // 0x18b Add2
	func_564(var_52_int, var_53_int); // 0x18d NEW_2
	return 2; // 0x18f Return
}


func_73(var_0_bool, var_1_int, var_2_int, var_3_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x49 PushV
	var_2_int = -1; // 0x4a TMovI
	var_3_int = -1; // 0x4b TMovI
	var_0_bool = var_12_bool; // 0x4c TMov
	CreateSaveEnumerator(var_10_object); // 0x4d Func
	var_19_bool = var_8_object == 0; // 0x4f Not
	if(var_19_bool == 0) goto Label_82; // 0x50 JumpB
	return 6; // 0x51 Return
	
Label_82:
	CreateObjectVector(var_9_object); // 0x52 Func
	var_20_bool = var_12_bool; // 0x54 Push
	if(var_20_bool == 0) goto Label_90; // 0x55 JumpB
	var_16_object = 0; // 0x56 SetNull
	add(var_16_object); // 0x57 TObjFunc
	var_16_object = 0; // 0x59 SetNull
	
Label_90:
	var_21_int = 1; // 0x5a PushI
	if(var_21_int == 0) goto Label_108; // 0x5b JumpB
	Next(var_17_object); // 0x5c TObjFunc
	var_22_bool = var_17_object == 0; // 0x5e Not
	if(var_22_bool == 0) goto Label_97; // 0x5f JumpB
	goto Label_108; // 0x60 Jump
	
Label_108:
	GetWindowSize(var_15_bool, var_14_object); // 0x6c Func
	var_6_int = 0; // 0x6e TMovI
	var_7_int = 0; // 0x6f TMovI
	ClientToScreen(var_13_object, var_12_bool); // 0x70 Func
	var_1_int = 0; // 0x72 TMovI
	var_23_bool = 1; // 0x73 PushB
	EnableClipping(var_23_bool); // 0x74 Func
	var_24_bool = 1; // 0x76 PushB
	SetOwnerDraw(var_24_bool); // 0x77 Func
	var_25_string = "sys_border.xml"; // 0x79 PushS
	var_26_bool = 0; // 0x7a PushB
	CreateWindow(var_25_string, var_26_bool, var_10_object); // 0x7b Func
	func_564(var_17_object, var_18_bool); // 0x7e NEW_2
	ProcessEvents(); // 0x80 Func
	return 6; // 0x82 Return
	
Label_97:
	var_48_bool = var_12_bool; // 0x61 Push
	if(var_48_bool == 0) goto Label_104; // 0x62 JumpB
	IsQuickSave(var_18_bool); // 0x63 ObjFunc
	var_49_bool = var_18_bool; // 0x65 Push
	if(var_49_bool == 0) goto Label_104; // 0x66 JumpB
	goto Label_90; // 0x67 Jump
	
Label_104:
	add(var_17_object); // 0x68 TObjFunc
	var_17_object = 0; // 0x6a SetNull
	goto Label_90; // 0x6b Jump
}


func_554(var_32_int)
{
	var_32_int = 121; // 0x22a MovI
	return 0; // 0x22b Return
}


func_140(var_12_int, var_13_int)
{
	var_12_int = var_13_int; // 0x8d Mov
	return 0; // 0x8e Return
}


func_44(var_143_object, var_144_int, var_145_int)
{
	var_147_bool = var_143_object == 0; // 0x2d NullEq
	if(var_147_bool == 0) goto Label_51; // 0x2e JumpB
	var_148_string = "button_save"; // 0x2f PushS
	Blit(var_148_string, var_144_int, var_145_int); // 0x30 Func
	goto Label_54; // 0x32 Jump
	
Label_54:
	return 0; // 0x36 Return
	
Label_51:
	var_149_string = "button_overwrite"; // 0x33 PushS
	Blit(var_149_string, var_144_int, var_145_int); // 0x34 Func
}


func_556(var_29_int)
{
	var_30_int = 0; var_31_int = 0; // 0x22c PushV
	size(var_31_int); // 0x22d TObjFunc
	var_32_int = 0; // 0x22f PushV
	func_554(var_32_int); // 0x230 NEW_2
	var_29_int = var_31_int * var_32_int; // 0x232 Mult2
	return 2; // 0x233 Return
}


func_143(var_2_int, var_3_int, var_11_int)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; // 0x8f PushV
	size(var_24_int); // 0x90 TObjFunc
	var_25_int = 0; // 0x92 MovI
	
Label_147:
	var_34_bool = var_25_int < var_24_int; // 0x93 LT
	if(var_34_bool == 0) goto Label_307; // 0x94 JumpB
	get(var_26_object, var_25_int); // 0x95 TObjFunc
	var_27_int = 0; // 0x97 MovI
	var_28_int = var_11_int; // 0x98 Mov
	ClientToScreen(var_27_int, var_28_int); // 0x99 Func
	var_35_object = var_26_object; // 0x9b Push
	if(var_35_object == 0) goto Label_251; // 0x9c JumpB
	BlitClipped(var_27_int, var_28_int, var_28_int, var_27_int, var_30_string, var_29_bool); // 0x9d ObjFunc
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x9f PushV
	var_36_int = 0; // 0xa0 MovI
	var_37_int = var_11_int; // 0xa1 Mov
	var_38_bool = 0; // 0xa2 MovB
	func_308(var_36_int, var_37_int, var_38_bool); // 0xa3 NEW_2
	IsQuickSave(var_29_bool); // 0xa5 ObjFunc
	var_63_bool = var_29_bool; // 0xa7 Push
	if(var_63_bool == 0) goto Label_183; // 0xa8 JumpB
	var_64_string = "default"; // 0xa9 PushS
	var_65_int = 129; // 0xaa PushI
	var_66_int = 7; // 0xab PushI
	var_67_int = var_66_int + var_11_int; // 0xac Add
	var_68_string = ""; var_69_int = 0; // 0xad PushV
	var_69_int = 17; // 0xae MovI
	func_598(var_68_string, var_69_int); // 0xaf NEW_2
	var_72_float = 0.55686; // 0xb1 PushF
	var_73_float = 0.55686; // 0xb2 PushF
	var_74_float = 0.55686; // 0xb3 PushF
	Print(var_64_string, var_65_int, var_67_int, var_68_string, var_72_float, var_73_float, var_74_float); // 0xb4 Func
	goto Label_205; // 0xb6 Jump
	
Label_205:
	var_75_string = ""; var_76_object = Obj(); // 0xcd PushV
	var_76_object = var_26_object; // 0xce Mov
	func_603(var_76_object); // 0xcf NEW_2
	var_33_string = var_75_string; // 0xd0 Mov
	var_99_string = "big"; // 0xd2 PushS
	var_100_int = 129; // 0xd3 PushI
	var_101_int = 28; // 0xd4 PushI
	var_102_int = var_101_int + var_11_int; // 0xd5 Add
	var_103_float = 1.0; // 0xd6 PushF
	var_104_float = 1.0; // 0xd7 PushF
	var_105_float = 1.0; // 0xd8 PushF
	Print(var_99_string, var_100_int, var_102_int, var_33_string, var_103_float, var_104_float, var_105_float); // 0xd9 Func
	var_106_string = ""; var_107_object = Obj(); // 0xdb PushV
	var_107_object = var_26_object; // 0xdc Mov
	func_627(var_107_object); // 0xdd NEW_2
	var_33_string = var_106_string; // 0xde Mov
	var_125_string = "default"; // 0xe0 PushS
	var_126_int = 129; // 0xe1 PushI
	var_127_int = 47; // 0xe2 PushI
	var_128_int = var_127_int + var_11_int; // 0xe3 Add
	var_129_float = 0.55686; // 0xe4 PushF
	var_130_float = 0.55686; // 0xe5 PushF
	var_131_float = 0.55686; // 0xe6 PushF
	Print(var_125_string, var_126_int, var_128_int, var_33_string, var_129_float, var_130_float, var_131_float); // 0xe7 Func
	var_132_bool = var_0_bool; // 0xe9 PushT
	if(var_132_bool == 0) goto Label_250; // 0xea JumpB
	var_133_bool = var_3_int == var_25_int; // 0xeb Eq
	if(var_133_bool == 0) goto Label_244; // 0xec JumpB
	var_134_string = "button_x_pressed"; // 0xed PushS
	var_135_int = 248; // 0xee PushI
	var_136_int = 68; // 0xef PushI
	var_137_int = var_136_int + var_11_int; // 0xf0 Add
	Blit(var_134_string, var_135_int, var_137_int); // 0xf1 Func
	goto Label_250; // 0xf3 Jump
	
Label_250:
	goto Label_270; // 0xfa Jump
	
Label_270:
	var_138_bool = var_2_int == var_25_int; // 0x10e Eq
	if(var_138_bool == 0) goto Label_279; // 0x10f JumpB
	var_139_string = "button_pressed"; // 0x110 PushS
	var_140_int = 129; // 0x111 PushI
	var_141_int = 67; // 0x112 PushI
	var_142_int = var_141_int + var_11_int; // 0x113 Add
	Blit(var_139_string, var_140_int, var_142_int); // 0x114 Func
	goto Label_285; // 0x116 Jump
	
Label_285:
	var_143_object = Obj(); var_144_int = 0; var_145_int = 0; // 0x11d PushV
	var_143_object = var_26_object; // 0x11e Mov
	var_144_int = 129; // 0x11f MovI
	var_146_int = 67; // 0x120 PushI
	var_145_int = var_146_int + var_11_int; // 0x121 Add2
	func_44(var_143_object, var_144_int, var_145_int); // 0x122 NEW_2
	var_150_int = 90; // 0x124 PushI
	var_11_int = var_11_int + var_150_int; // 0x125 Add2
	var_151_string = "separator"; // 0x126 PushS
	var_152_int = 0; // 0x127 PushI
	var_153_int = 15; // 0x128 PushI
	var_154_int = var_11_int + var_153_int; // 0x129 Add
	var_155_int = 1; // 0x12a PushI
	StretchBlit(var_151_string, var_152_int, var_154_int, var_151_string, var_155_int); // 0x12b Func
	var_156_int = 31; // 0x12d PushI
	var_11_int = var_11_int + var_156_int; // 0x12e Add2
	var_26_object = 0; // 0x12f SetNull
	var_157_int = 1; // 0x130 PushI
	var_25_int = var_25_int + var_157_int; // 0x131 Add2
	goto Label_147; // 0x132 Jump
	
Label_279:
	var_158_string = "button"; // 0x117 PushS
	var_159_int = 129; // 0x118 PushI
	var_160_int = 67; // 0x119 PushI
	var_161_int = var_160_int + var_11_int; // 0x11a Add
	Blit(var_158_string, var_159_int, var_161_int); // 0x11b Func
	
Label_244:
	var_162_string = "button_x"; // 0xf4 PushS
	var_163_int = 248; // 0xf5 PushI
	var_164_int = 68; // 0xf6 PushI
	var_165_int = var_164_int + var_11_int; // 0xf7 Add
	Blit(var_162_string, var_163_int, var_165_int); // 0xf8 Func
	
Label_183:
	var_166_int = 0; // 0xb7 PushI
	GetProperty(var_166_int, var_31_bool, var_32_int); // 0xb8 ObjFunc
	var_167_bool = var_31_bool; // 0xba Push
	if(var_167_bool == 0) goto Label_195; // 0xbb JumpB
	var_168_string = ""; var_169_int = 0; // 0xbc PushV
	var_170_int = 500; // 0xbd PushI
	var_169_int = var_170_int + var_32_int; // 0xbe Add2
	func_598(var_168_string, var_169_int); // 0xbf NEW_2
	var_30_string = var_168_string; // 0xc0 Mov
	goto Label_196; // 0xc2 Jump
	
Label_196:
	var_171_string = "default"; // 0xc4 PushS
	var_172_int = 129; // 0xc5 PushI
	var_173_int = 7; // 0xc6 PushI
	var_174_int = var_173_int + var_11_int; // 0xc7 Add
	var_175_float = 0.55686; // 0xc8 PushF
	var_176_float = 0.55686; // 0xc9 PushF
	var_177_float = 0.55686; // 0xca PushF
	Print(var_171_string, var_172_int, var_174_int, var_30_string, var_175_float, var_176_float, var_177_float); // 0xcb Func
	
Label_195:
	var_30_string = "????"; // 0xc3 MovS
	
Label_251:
	var_178_int = 0; var_179_int = 0; var_180_bool = 0; // 0xfb PushV
	var_178_int = 0; // 0xfc MovI
	var_179_int = var_11_int; // 0xfd Mov
	var_180_bool = 1; // 0xfe MovB
	func_308(var_178_int, var_179_int, var_180_bool); // 0xff NEW_2
	var_181_string = "default"; // 0x101 PushS
	var_182_int = 129; // 0x102 PushI
	var_183_int = 47; // 0x103 PushI
	var_184_int = var_183_int + var_11_int; // 0x104 Add
	var_185_string = ""; var_186_int = 0; // 0x105 PushV
	var_186_int = 32; // 0x106 MovI
	func_598(var_185_string, var_186_int); // 0x107 NEW_2
	var_187_float = 0.55686; // 0x109 PushF
	var_188_float = 0.55686; // 0x10a PushF
	var_189_float = 0.55686; // 0x10b PushF
	Print(var_181_string, var_182_int, var_184_int, var_185_string, var_187_float, var_188_float, var_189_float); // 0x10c Func
	
Label_307:
	return 20; // 0x133 Return
}


func_400(var_1_int)
{
	var_44_int = 0; var_45_int = 0; // 0x190 PushV
	var_46_int = -2; // 0x191 PushI
	var_47_int = 0; // 0x192 PushV
	func_554(var_47_int); // 0x193 NEW_2
	var_48_float = var_46_int * var_47_int; // 0x195 Mult
	var_49_int = 2; // 0x196 PushI
	var_45_int = var_48_float / var_48_float; // 0x197 Div2
	var_1_int = var_1_int + var_45_int; // 0x198 Add2
	func_564(var_44_int, var_45_int); // 0x19a NEW_2
	return 2; // 0x19c Return
}


func_60()
{
	var_77_string = ""; var_78_string = ""; // 0x3c PushV
	GetFileName(var_78_string); // 0x3d ObjFunc
	DeleteGame(var_78_string); // 0x3f Func
	StopEventProcessing(); // 0x41 Func
	return 2; // 0x43 Return
}


func_627(var_106_string)
{
	var_108_string = ""; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; // 0x273 PushV
	GetSaveTime(var_115_int, var_116_int, var_117_int, var_119_int, var_118_int); // 0x274 ObjFunc
	var_120_string = ""; var_121_int = 0; // 0x276 PushV
	var_121_int = 19; // 0x277 MovI
	func_598(var_120_string, var_121_int); // 0x278 NEW_2
	var_122_string = ""; var_123_int = 0; // 0x27a PushV
	var_124_int = 20; // 0x27b PushI
	var_123_int = var_124_int + var_119_int; // 0x27c Add2
	func_598(var_122_string, var_123_int); // 0x27d NEW_2
	format(var_114_string, var_120_string, var_118_int, var_122_string, var_117_int, var_116_int, var_115_int); // 0x27f Func
	var_106_string = var_114_string; // 0x281 Mov
	return 12; // 0x282 Return
}


func_564(var_1_int, var_5_int)
{
	var_27_int = 0; var_28_int = 0; // 0x234 PushV
	var_29_int = 0; // 0x235 PushV
	func_556(var_29_int); // 0x236 NEW_2
	var_28_int = var_29_int - var_5_int; // 0x238 Sub2
	var_33_int = 0; // 0x239 PushI
	var_34_bool = var_28_int < var_33_int; // 0x23a LT
	if(var_34_bool == 0) goto Label_573; // 0x23b JumpB
	var_28_int = 0; // 0x23c MovI
	
Label_573:
	var_35_int = -var_1_int; // 0x23d Neg
	var_36_bool = var_35_int > var_28_int; // 0x23e GT
	if(var_36_bool == 0) goto Label_578; // 0x23f JumpB
	var_1_int = -var_28_int; // 0x240 Neg2
	goto Label_582; // 0x241 Jump
	
Label_582:
	var_37_int = 0; // 0x246 PushI
	var_38_bool = var_28_int == var_37_int; // 0x247 Eq
	if(var_38_bool == 0) goto Label_590; // 0x248 JumpB
	var_39_int = 16384; // 0x249 PushI
	var_40_string = "scrollbar"; // 0x24a PushS
	SendMessage(var_39_int, var_40_string); // 0x24b Func
	goto Label_597; // 0x24d Jump
	
Label_597:
	return 2; // 0x255 Return
	
Label_590:
	var_41_int = -var_1_int; // 0x24e Neg
	var_42_int = 100; // 0x24f PushI
	var_43_float = var_41_int * var_42_int; // 0x250 Mult
	var_44_float = var_43_float / var_28_int; // 0x251 Div
	var_45_string = "scrollbar"; // 0x252 PushS
	SendMessage(var_44_float, var_45_string); // 0x253 Func
	
Label_578:
	var_46_int = 0; // 0x242 PushI
	var_47_bool = var_1_int > var_46_int; // 0x243 GT
	if(var_47_bool == 0) goto Label_582; // 0x244 JumpB
	var_1_int = 0; // 0x245 TMovI
}


func_308(var_36_int, var_37_int, var_38_bool)
{
	var_39_bool = var_38_bool; // 0x135 Push
	if(var_39_bool == 0) goto Label_316; // 0x136 JumpB
	var_40_string = "shot_black"; // 0x137 PushS
	var_41_int = 120; // 0x138 PushI
	var_42_int = 90; // 0x139 PushI
	StretchBlit(var_40_string, var_36_int, var_37_int, var_41_int, var_42_int); // 0x13a Func
	
Label_316:
	var_43_string = "shot_border"; // 0x13c PushS
	var_44_int = 120; // 0x13d PushI
	var_45_int = 1; // 0x13e PushI
	StretchBlit(var_43_string, var_36_int, var_37_int, var_44_int, var_45_int); // 0x13f Func
	var_46_string = "shot_border"; // 0x141 PushS
	var_47_int = 90; // 0x142 PushI
	var_48_int = var_37_int + var_47_int; // 0x143 Add
	var_49_int = 1; // 0x144 PushI
	var_50_int = var_48_int - var_49_int; // 0x145 Sub
	var_51_int = 120; // 0x146 PushI
	var_52_int = 1; // 0x147 PushI
	StretchBlit(var_46_string, var_36_int, var_50_int, var_51_int, var_52_int); // 0x148 Func
	var_53_string = "shot_border"; // 0x14a PushS
	var_54_int = 1; // 0x14b PushI
	var_55_int = 90; // 0x14c PushI
	StretchBlit(var_53_string, var_36_int, var_37_int, var_54_int, var_55_int); // 0x14d Func
	var_56_string = "shot_border"; // 0x14f PushS
	var_57_int = 120; // 0x150 PushI
	var_58_int = var_36_int + var_57_int; // 0x151 Add
	var_59_int = 1; // 0x152 PushI
	var_60_int = var_58_int - var_59_int; // 0x153 Sub
	var_61_int = 1; // 0x154 PushI
	var_62_int = 90; // 0x155 PushI
	StretchBlit(var_56_string, var_60_int, var_37_int, var_61_int, var_62_int); // 0x156 Func
	return 0; // 0x158 Return
}


func_598(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = ""; // 0x256 PushV
	GetStringByID(var_71_string, var_69_int); // 0x257 Func
	var_68_string = var_71_string; // 0x259 Mov
	return 2; // 0x25a Return
}


func_55(var_44_object)
{
	var_45_int = 0; // 0x38 PushI
	SendMessageToParent(var_45_int, var_44_object); // 0x39 Func
	return 0; // 0x3b Return
}


func_603(var_75_string)
{
	var_77_string = ""; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_string = ""; var_83_float = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x25b PushV
	GetGameTime(var_83_float); // 0x25c ObjFunc
	var_87_int = 24; // 0x25e PushI
	var_84_int = var_83_float / var_83_float; // 0x25f Div2
	var_88_int = 24; // 0x260 PushI
	var_89_float = var_84_int * var_88_int; // 0x261 Mult
	var_85_int = var_83_float - var_89_float; // 0x262 Sub2
	var_90_int = 24; // 0x263 PushI
	var_91_float = var_84_int * var_90_int; // 0x264 Mult
	var_92_int = var_83_float - var_91_float; // 0x265 Sub
	var_93_int = var_92_int - var_85_int; // 0x266 Sub
	var_94_int = 60; // 0x267 PushI
	var_86_int = var_93_int * var_94_int; // 0x268 Mult2
	var_95_string = ""; var_96_int = 0; // 0x269 PushV
	var_96_int = 18; // 0x26a MovI
	func_598(var_95_string, var_96_int); // 0x26b NEW_2
	var_97_int = 1; // 0x26d PushI
	var_98_int = var_84_int + var_97_int; // 0x26e Add
	format(var_82_string, var_95_string, var_98_int, var_85_int, var_86_int); // 0x26f Func
	var_75_string = var_82_string; // 0x271 Mov
	return 10; // 0x272 Return
}


func_476(var_1_int, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; // 0x1dc PushV
	var_30_int = 129; // 0x1dd PushI
	var_31_bool = var_20_int < var_30_int; // 0x1de LT
	if(var_31_bool == 0) goto Label_482; // 0x1df JumpB
	var_19_int = -1; // 0x1e0 MovI
	return 8; // 0x1e1 Return
	
Label_482:
	var_32_int = 233; // 0x1e2 PushI
	var_33_bool = var_20_int > var_32_int; // 0x1e3 GT
	if(var_33_bool == 0) goto Label_487; // 0x1e4 JumpB
	var_19_int = -1; // 0x1e5 MovI
	return 8; // 0x1e6 Return
	
Label_487:
	var_26_int = var_21_int - var_1_int; // 0x1e7 Sub2
	var_34_int = 0; // 0x1e8 PushV
	func_554(var_34_int); // 0x1e9 NEW_2
	var_27_int = var_34_int; // 0x1ea Mov
	var_28_int = var_26_int / var_26_int; // 0x1ec Div2
	var_35_float = var_28_int * var_27_int; // 0x1ed Mult
	var_26_int = var_26_int - var_35_float; // 0x1ee Sub2
	size(var_29_int); // 0x1ef TObjFunc
	var_36_bool = var_29_int <= var_28_int; // 0x1f1 LE
	if(var_36_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_19_int = -1; // 0x1f3 MovI
	return 8; // 0x1f4 Return
	
Label_501:
	var_37_bool = 0; // 0x1f5 PushV
	var_37_bool = 0; // 0x1f6 MovB
	var_38_int = 67; // 0x1f7 PushI
	var_39_bool = var_26_int >= var_38_int; // 0x1f8 GE
	if(var_39_bool == 0) goto Label_510; // 0x1f9 JumpB
	var_40_int = 91; // 0x1fa PushI
	var_41_bool = var_26_int <= var_40_int; // 0x1fb LE
	if(var_41_bool == 0) goto Label_510; // 0x1fc JumpB
	var_37_bool = 1; // 0x1fd MovB
	
Label_510:
	if(var_37_bool == 0) goto Label_513; // 0x1fe JumpB
	var_19_int = var_28_int; // 0x1ff Mov
	return 8; // 0x200 Return
	
Label_513:
	var_19_int = -1; // 0x201 MovI
	return 8; // 0x202 Return
}


